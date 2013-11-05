/****************************************************************************
 Copyright (c) 2013 cocos2d-x.org
 
 http://www.cocos2d-x.org
 
 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:
 
 The above copyright notice and this permission notice shall be included in
 all copies or substantial portions of the Software.
 
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
 ****************************************************************************/
#include "CCPhysicsBody.h"
#ifdef CC_USE_PHYSICS

#include <climits>
#include <algorithm>

#if (CC_PHYSICS_ENGINE == CC_PHYSICS_CHIPMUNK)
#include "chipmunk.h"
#elif (CC_PHYSICS_ENGINE == CCPHYSICS_BOX2D)
#include "Box2D.h"
#endif

#include "CCPhysicsShape.h"
#include "CCPhysicsJoint.h"
#include "CCPhysicsWorld.h"

#include "chipmunk/CCPhysicsBodyInfo_chipmunk.h"
#include "box2d/CCPhysicsBodyInfo_box2d.h"
#include "chipmunk/CCPhysicsJointInfo_chipmunk.h"
#include "box2d/CCPhysicsJointInfo_box2d.h"
#include "chipmunk/CCPhysicsWorldInfo_chipmunk.h"
#include "box2d/CCPhysicsWorldInfo_box2d.h"
#include "chipmunk/CCPhysicsShapeInfo_chipmunk.h"
#include "box2d/CCPhysicsShapeInfo_box2d.h"
#include "chipmunk/CCPhysicsHelper_chipmunk.h"
#include "box2d/CCPhysicsHelper_box2d.h"

NS_CC_BEGIN


#if (CC_PHYSICS_ENGINE == CC_PHYSICS_CHIPMUNK)

namespace
{
    static const float MASS_DEFAULT = 1.0;
    static const float MOMENT_DEFAULT = 200;
}

PhysicsBody::PhysicsBody()
: _node(nullptr)
, _shapes(nullptr)
, _world(nullptr)
, _info(nullptr)
, _dynamic(true)
, _enable(true)
, _rotationEnable(true)
, _gravityEnable(true)
, _massDefault(true)
, _momentDefault(true)
, _mass(MASS_DEFAULT)
, _area(0.0f)
, _density(0.0f)
, _moment(MOMENT_DEFAULT)
, _linearDamping(0.0f)
, _angularDamping(0.0f)
, _tag(0)
, _categoryBitmask(UINT_MAX)
, _collisionBitmask(UINT_MAX)
, _contactTestBitmask(UINT_MAX)
, _group(0)
{
}

PhysicsBody::~PhysicsBody()
{
    if (_world)
    {
        removeFromWorld();
    }
    
    removeAllShapes();
    
    for (auto it = _joints.begin(); it != _joints.end(); ++it)
    {
        PhysicsJoint* joint = *it;
        PhysicsBody* other = joint->getBodyA() == this ? joint->getBodyB() : joint->getBodyA();
        
        other->_joints.erase(std::find(other->_joints.begin(), other->_joints.end(), joint));
        
        delete joint;
    }
    CC_SAFE_DELETE(_info);
}

PhysicsBody* PhysicsBody::create()
{
    PhysicsBody* body = new PhysicsBody();
    if (body && body->init())
    {
        body->autorelease();
        return body;
    }
    
    CC_SAFE_DELETE(body);
    return nullptr;
}

PhysicsBody* PhysicsBody::create(float mass)
{
    PhysicsBody* body = new PhysicsBody();
    if (body)
    {
        body->_mass = mass;
        body->_massDefault = false;
        if (body->init())
        {
            body->autorelease();
            return body;
        }
    }
    
    CC_SAFE_DELETE(body);
    return nullptr;
}

PhysicsBody* PhysicsBody::create(float mass, float moment)
{
    PhysicsBody* body = new PhysicsBody();
    if (body)
    {
        body->_mass = mass;
        body->_massDefault = false;
        body->_moment = moment;
        body->_momentDefault = false;
        if (body->init())
        {
            body->autorelease();
            return body;
        }
    }
    
    CC_SAFE_DELETE(body);
    return nullptr;
    
}

PhysicsBody* PhysicsBody::createCircle(float radius, PhysicsMaterial material, Point offset)
{
    PhysicsBody* body = new PhysicsBody();
    if (body && body->init())
    {
        body->addShape(PhysicsShapeCircle::create(radius, material, offset));
        body->autorelease();
        return body;
    }
    
    CC_SAFE_DELETE(body);
    return nullptr;
}

PhysicsBody* PhysicsBody::createBox(Size size, PhysicsMaterial material, Point offset)
{
    PhysicsBody* body = new PhysicsBody();
    if (body && body->init())
    {
        body->addShape(PhysicsShapeBox::create(size, material, offset));
        body->autorelease();
        return body;
    }
    
    CC_SAFE_DELETE(body);
    return nullptr;
}

PhysicsBody* PhysicsBody::createPolygon(Point* points, int count, PhysicsMaterial material, Point offset)
{
    PhysicsBody* body = new PhysicsBody();
    if (body && body->init())
    {
        body->addShape(PhysicsShapePolygon::create(points, count, material, offset));
        body->autorelease();
        return body;
    }
    
    CC_SAFE_DELETE(body);
    return nullptr;
}

PhysicsBody* PhysicsBody::createEdgeSegment(Point a, Point b, PhysicsMaterial material, float border/* = 1*/)
{
    PhysicsBody* body = new PhysicsBody();
    if (body && body->init())
    {
        body->addShape(PhysicsShapeEdgeSegment::create(a, b, material, border));
        body->_dynamic = false;
        body->autorelease();
        return body;
    }
    
    CC_SAFE_DELETE(body);
    return nullptr;
}

PhysicsBody* PhysicsBody::createEdgeBox(Size size, PhysicsMaterial material, float border/* = 1*/, Point offset)
{
    PhysicsBody* body = new PhysicsBody();
    if (body && body->init())
    {
        body->addShape(PhysicsShapeEdgeBox::create(size, material, border, offset));
        body->_dynamic = false;
        body->autorelease();
        return body;
    }
    
    CC_SAFE_DELETE(body);
    
    return nullptr;
}

PhysicsBody* PhysicsBody::createEdgePolygon(Point* points, int count, PhysicsMaterial material, float border/* = 1*/)
{
    PhysicsBody* body = new PhysicsBody();
    if (body && body->init())
    {
        body->addShape(PhysicsShapeEdgePolygon::create(points, count, material, border));
        body->_dynamic = false;
        body->autorelease();
        return body;
    }
    
    CC_SAFE_DELETE(body);
    
    return nullptr;
}

PhysicsBody* PhysicsBody::createEdgeChain(Point* points, int count, PhysicsMaterial material, float border/* = 1*/)
{
    PhysicsBody* body = new PhysicsBody();
    if (body && body->init())
    {
        body->addShape(PhysicsShapeEdgeChain::create(points, count, material, border));
        body->_dynamic = false;
        body->autorelease();
        return body;
    }
    
    CC_SAFE_DELETE(body);
    
    return nullptr;
}

bool PhysicsBody::init()
{
    do
    {
        _info = new PhysicsBodyInfo();
        CC_BREAK_IF(_info == nullptr);
        _shapes = Array::create();
        CC_BREAK_IF(_shapes == nullptr);
        _shapes->retain();
        
        _info->body = cpBodyNew(PhysicsHelper::float2cpfloat(_mass), PhysicsHelper::float2cpfloat(_moment));
        
        CC_BREAK_IF(_info->body == nullptr);
        
        return true;
    } while (false);
    
    return false;
}

void PhysicsBody::setDynamic(bool dynamic)
{
    if (dynamic != _dynamic)
    {
        _dynamic = dynamic;
        if (dynamic)
        {
            cpBodySetMass(_info->body, _mass);
            
            if (_world != nullptr)
            {
                cpSpaceAddBody(_world->_info->space, _info->body);
            }
        }else
        {
            cpBodySetMass(_info->body, PHYSICS_INFINITY);
            
            if (_world != nullptr)
            {
                cpSpaceRemoveBody(_world->_info->space, _info->body);
            }
        }
        
    }
}

void PhysicsBody::setRotationEnable(bool enable)
{
    if (_rotationEnable != enable)
    {
        cpBodySetMoment(_info->body, enable ? _moment : PHYSICS_INFINITY);
        _rotationEnable = enable;
    }
}

void PhysicsBody::setGravityEnable(bool enable)
{
    if (_gravityEnable != enable)
    {
        _gravityEnable = enable;
        
        if (_world != nullptr)
        {
            if (enable)
            {
                applyForce(_world->getGravity() * _mass);
            }else
            {
                applyForce(-_world->getGravity() * _mass);
            }
        }
    }
}

void PhysicsBody::setPosition(Point position)
{
    cpBodySetPos(_info->body, PhysicsHelper::point2cpv(position));
}

void PhysicsBody::setRotation(float rotation)
{
    cpBodySetAngle(_info->body, PhysicsHelper::float2cpfloat(rotation));
}

Point PhysicsBody::getPosition() const
{
    cpVect vec = cpBodyGetPos(_info->body);
    return PhysicsHelper::cpv2point(vec);
}

float PhysicsBody::getRotation() const
{
    return -PhysicsHelper::cpfloat2float(cpBodyGetAngle(_info->body) / 3.14f * 180.0f);
}

PhysicsShape* PhysicsBody::addShape(PhysicsShape* shape)
{
    if (shape == nullptr) return nullptr;
    
    // add shape to body
    if (_shapes->getIndexOfObject(shape) == UINT_MAX)
    {
        shape->setBody(this);
        
        // calculate the area, mass, and desity
        // area must update before mass, because the density changes depend on it.
        _area += shape->getArea();
        addMass(shape->getMass());
        addMoment(shape->getMoment());
        
        if (_world != nullptr)
        {
            _world->addShape(shape);
        }
        
        _shapes->addObject(shape);
        
        if (_group != CP_NO_GROUP && shape->getGroup() == CP_NO_GROUP)
        {
            shape->setGroup(_group);
        }
    }
    
    return shape;
}

void PhysicsBody::applyForce(Point force)
{
    applyForce(force, Point::ZERO);
}

void PhysicsBody::applyForce(Point force, Point offset)
{
    cpBodyApplyForce(_info->body, PhysicsHelper::point2cpv(force), PhysicsHelper::point2cpv(offset));
}

void PhysicsBody::applyImpulse(Point impulse)
{
    applyImpulse(impulse, Point());
}

void PhysicsBody::applyImpulse(Point impulse, Point offset)
{
    cpBodyApplyImpulse(_info->body, PhysicsHelper::point2cpv(impulse), PhysicsHelper::point2cpv(offset));
}

void PhysicsBody::applyTorque(float torque)
{
    cpBodySetTorque(_info->body, PhysicsHelper::float2cpfloat(torque));
}

void PhysicsBody::setMass(float mass)
{
    if (mass <= 0)
    {
        return;
    }
    
    _mass = mass;
    _massDefault = false;
    
    // update density
    if (_mass == PHYSICS_INFINITY)
    {
        _density = PHYSICS_INFINITY;
    }
    else
    {
        if (_area > 0)
        {
            _density = _mass / _area;
        }else
        {
            _density = 0;
        }
    }
    
    cpBodySetMass(_info->body, PhysicsHelper::float2cpfloat(_mass));
}

void PhysicsBody::addMass(float mass)
{
    if (mass == PHYSICS_INFINITY)
    {
        _mass = PHYSICS_INFINITY;
        _massDefault = false;
        _density = PHYSICS_INFINITY;
    }
    else if (mass == -PHYSICS_INFINITY)
    {
        return;
    }
    else if (_mass != PHYSICS_INFINITY)
    {
        if (_massDefault)
        {
            _mass = 0;
            _massDefault = false;
        }
        
        if (_mass + mass > 0)
        {
            _mass +=  mass;
        }else
        {
            _mass = MASS_DEFAULT;
            _massDefault = true;
        }
        
        if (_area > 0)
        {
            _density = _mass / _area;
        }
        else
        {
            _density = 0;
        }
    }
    
    cpBodySetMass(_info->body, PhysicsHelper::float2cpfloat(_mass));
}

void PhysicsBody::addMoment(float moment)
{
    if (moment == PHYSICS_INFINITY)
    {
        // if moment is INFINITY, the moment of the body will become INFINITY
        _moment = PHYSICS_INFINITY;
        _momentDefault = false;
    }
    else if (moment == -PHYSICS_INFINITY)
    {
        // if moment is -INFINITY, it won't change
        return;
    }
    else
    {
        // if moment of the body is INFINITY is has no effect
        if (_moment != PHYSICS_INFINITY)
        {
            if (_momentDefault)
            {
                _moment = 0;
                _momentDefault = false;
            }
            
            if (_moment + moment > 0)
            {
                _moment += moment;
            }
            else
            {
                _moment = MOMENT_DEFAULT;
                _momentDefault = true;
            }
        }
    }
    
    if (_rotationEnable)
    {
        cpBodySetMoment(_info->body, PhysicsHelper::float2cpfloat(_moment));
    }
}

void PhysicsBody::setVelocity(Point velocity)
{
    cpBodySetVel(_info->body, PhysicsHelper::point2cpv(velocity));
}

Point PhysicsBody::getVelocity()
{
    return PhysicsHelper::cpv2point(cpBodyGetVel(_info->body));
}

Point PhysicsBody::getVelocityAtLocalPoint(Point point)
{
    return PhysicsHelper::cpv2point(cpBodyGetVelAtLocalPoint(_info->body, PhysicsHelper::point2cpv(point)));
}

Point PhysicsBody::getVelocityAtWorldPoint(Point point)
{
    return PhysicsHelper::cpv2point(cpBodyGetVelAtWorldPoint(_info->body, PhysicsHelper::point2cpv(point)));
}

void PhysicsBody::setAngularVelocity(float velocity)
{
    cpBodySetAngVel(_info->body, PhysicsHelper::float2cpfloat(velocity));
}

float PhysicsBody::getAngularVelocity()
{
    return PhysicsHelper::cpfloat2float(cpBodyGetAngVel(_info->body));
}

void PhysicsBody::setVelocityLimit(float limit)
{
    cpBodySetVelLimit(_info->body, PhysicsHelper::float2cpfloat(limit));
}

float PhysicsBody::getVelocityLimit()
{
    return PhysicsHelper::cpfloat2float(cpBodyGetVelLimit(_info->body));
}

void PhysicsBody::setAngularVelocityLimit(float limit)
{
    cpBodySetVelLimit(_info->body, PhysicsHelper::float2cpfloat(limit));
}

float PhysicsBody::getAngularVelocityLimit()
{
    return PhysicsHelper::cpfloat2float(cpBodyGetAngVelLimit(_info->body));
}

void PhysicsBody::setMoment(float moment)
{
    _moment = moment;
    _momentDefault = false;
    
    if (_rotationEnable)
    {
        cpBodySetMoment(_info->body, PhysicsHelper::float2cpfloat(_moment));
    }
}

PhysicsShape* PhysicsBody::getShapeByTag(int tag) const
{
    for (auto child : *_shapes)
    {
        PhysicsShape* shape = dynamic_cast<PhysicsShape*>(child);
        if (shape->getTag() == tag)
        {
            return shape;
        }
    }
    
    return nullptr;
}

void PhysicsBody::removeShapeByTag(int tag)
{
    for (auto child : *_shapes)
    {
        PhysicsShape* shape = dynamic_cast<PhysicsShape*>(child);
        if (shape->getTag() == tag)
        {
            removeShape(shape);
            return;
        }
    }
}

void PhysicsBody::removeShape(PhysicsShape* shape)
{
    if (_shapes->getIndexOfObject(shape) == UINT_MAX)
    {
        // deduce the area, mass and moment
        // area must update before mass, because the density changes depend on it.
        _area -= shape->getArea();
        addMass(-shape->getMass());
        addMoment(-shape->getMoment());
        
        //remove
        if (_world)
        {
            _world->removeShape(shape);
        }
        shape->setBody(nullptr);
        _shapes->removeObject(shape);
    }
}

void PhysicsBody::removeAllShapes()
{
    for (auto child : *_shapes)
    {
        PhysicsShape* shape = dynamic_cast<PhysicsShape*>(child);
        
        // deduce the area, mass and moment
        // area must update before mass, because the density changes depend on it.
        _area -= shape->getArea();
        addMass(-shape->getMass());
        addMoment(-shape->getMoment());
        
        if (_world)
        {
            _world->removeShape(shape);
        }
        shape->setBody(nullptr);
    }
    
    _shapes->removeAllObjects();
}

void PhysicsBody::removeFromWorld()
{
    if (_world)
    {
        _world->removeBody(this);
    }
}

void PhysicsBody::setEnable(bool enable)
{
    if (_enable != enable)
    {
        _enable = enable;
        
        if (_world)
        {
            if (enable)
            {
                _world->addBody(this);
            }else
            {
                _world->removeBody(this);
            }
        }
    }
}

bool PhysicsBody::isResting() const
{
    return cpBodyIsSleeping(_info->body) == cpTrue;
}

void PhysicsBody::update(float delta)
{
    // damping compute
    if (_dynamic)
    {
        _info->body->v.x *= cpfclamp(1.0f - delta * _linearDamping, 0.0f, 1.0f);
        _info->body->v.y *= cpfclamp(1.0f - delta * _linearDamping, 0.0f, 1.0f);
        _info->body->w *= cpfclamp(1.0f - delta * _angularDamping, 0.0f, 1.0f);
    }
}

void PhysicsBody::setCategoryBitmask(int bitmask)
{
    _categoryBitmask = bitmask;
    
    for (auto shape : *_shapes)
    {
        ((PhysicsShape*)shape)->setCategoryBitmask(bitmask);
    }
}

void PhysicsBody::setContactTestBitmask(int bitmask)
{
    _contactTestBitmask = bitmask;
    
    for (auto shape : *_shapes)
    {
        ((PhysicsShape*)shape)->setContactTestBitmask(bitmask);
    }
}

void PhysicsBody::setCollisionBitmask(int bitmask)
{
    _collisionBitmask = bitmask;
    
    for (auto shape : *_shapes)
    {
        ((PhysicsShape*)shape)->setCollisionBitmask(bitmask);
    }
}

void PhysicsBody::setGroup(int group)
{
    for (auto shape : *_shapes)
    {
        ((PhysicsShape*)shape)->setGroup(group);
    }
}

Point PhysicsBody::world2Local(const Point& point)
{
    return PhysicsHelper::cpv2point(cpBodyWorld2Local(_info->body, PhysicsHelper::point2cpv(point)));
}

Point PhysicsBody::local2World(const Point& point)
{
    return PhysicsHelper::cpv2point(cpBodyLocal2World(_info->body, PhysicsHelper::point2cpv(point)));
}

#elif (CC_PHYSICS_ENGINE == CC_PHYSICS_BOX2D)


#endif

NS_CC_END

#endif // CC_USE_PHYSICS

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

#ifndef __CCPHYSICS_JOINT_H__
#define __CCPHYSICS_JOINT_H__

#include "CCPhysicsSetting.h"
#ifdef CC_USE_PHYSICS

#include "CCObject.h"
#include "CCGeometry.h"

NS_CC_BEGIN

class PhysicsBody;
class PhysicsJointInfo;
class PhysicsBodyInfo;

/*
 * @brief An PhysicsJoint object connects two physics bodies together.
 */
class PhysicsJoint
{
protected:
    PhysicsJoint();
    virtual ~PhysicsJoint() = 0;

public:
    PhysicsBody* getBodyA() const { return _bodyA; }
    PhysicsBody* getBodyB() const { return _bodyB; }
    inline int getTag() const { return _tag; }
    inline void setTag(int tag) { _tag = tag; }
    inline bool isEnable() const { return _enable; }
    void setEnable(bool enable);
    inline bool isCollisionEnable() const { return _collisionEnable; }
    void setCollisionEnable(bool enable);
    
protected:
    bool init(PhysicsBody* a, PhysicsBody* b);
    
    /**
     * PhysicsShape is PhysicsBody's friend class, but all the subclasses isn't. so this method is use for subclasses to catch the bodyInfo from PhysicsBody.
     */
    PhysicsBodyInfo* getBodyInfo(PhysicsBody* body) const;
    Node* getBodyNode(PhysicsBody* body) const;
    
protected:
    PhysicsBody* _bodyA;
    PhysicsBody* _bodyB;
    PhysicsJointInfo* _info;
    bool _enable;
    bool _collisionEnable;
    int _tag;
    
    friend class PhysicsBody;
    friend class PhysicsWorld;
};

/*
 * @brief A fixed joint fuses the two bodies together at a reference point. Fixed joints are useful for creating complex shapes that can be broken apart later.
 */
class PhysicsJointFixed : public PhysicsJoint
{
public:
    static PhysicsJointFixed* create(PhysicsBody* a, PhysicsBody* b, const Point& anchr);
    
protected:
    bool init(PhysicsBody* a, PhysicsBody* b, const Point& anchr);
    
protected:
    PhysicsJointFixed();
    virtual ~PhysicsJointFixed();
};

/*
 * @brief A sliding joint allows the two bodies to slide along a chosen axis.
 */
class PhysicsJointSliding : public PhysicsJoint
{
public:
    static PhysicsJointSliding* create(PhysicsBody* a, PhysicsBody* b, const Point& grooveA, const Point& grooveB, const Point& anchr);
    
protected:
    bool init(PhysicsBody* a, PhysicsBody* b, const Point& grooveA, const Point& grooveB, const Point& anchr);
    
protected:
    PhysicsJointSliding();
    virtual ~PhysicsJointSliding();
};

/*
 * @brief A spring joint connects the two bodies with a spring whose length is the initial distance between the two bodies.
 */
class PhysicsJointSpring : public PhysicsJoint
{
public:
    PhysicsJointSpring* create();
    
protected:
    bool init();
    
protected:
    PhysicsJointSpring();
    virtual ~PhysicsJointSpring();
};

/*
 * @brief A limit joint imposes a maximum distance between the two bodies, as if they were connected by a rope.
 */
class PhysicsJointLimit : public PhysicsJoint
{
public:
    PhysicsJointLimit* create(PhysicsBody* a, PhysicsBody* b, const Point& anchr1, const Point& anchr2);
    
    float getMin() const;
    void setMin(float min);
    float getMax() const;
    void setMax(float max);
    
protected:
    bool init(PhysicsBody* a, PhysicsBody* b, const Point& anchr1, const Point& anchr2);
    
protected:
    PhysicsJointLimit();
    virtual ~PhysicsJointLimit();
};

/*
 * @brief A pin joint allows the two bodies to independently rotate around the anchor point as if pinned together.
 */
class PhysicsJointPin : public PhysicsJoint
{
public:
    static PhysicsJointPin* create(PhysicsBody* a, PhysicsBody* b, const Point& anchr);
    
    void setMaxForce(float force);
    float getMaxForce() const;
    
protected:
    bool init(PhysicsBody* a, PhysicsBody* b, const Point& anchr);
    
protected:
    PhysicsJointPin();
    virtual ~PhysicsJointPin();
};

class PhysicsJointDistance : public PhysicsJoint
{
    
public:
    static PhysicsJointDistance* create(PhysicsBody* a, PhysicsBody* b, const Point& anchr1, const Point& anchr2);
    
protected:
    bool init(PhysicsBody* a, PhysicsBody* b, const Point& anchr1, const Point& anchr2);
    
protected:
    PhysicsJointDistance();
    virtual ~PhysicsJointDistance();
};

NS_CC_END

#endif // CC_USE_PHYSICS
#endif // __CCPHYSICS_JOINT_H__

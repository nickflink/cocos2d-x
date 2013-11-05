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

#include "CCPhysicsSetting.h"
#ifdef CC_USE_PHYSICS

#ifndef __CCPHYSICS_CONTACT_H__
#define __CCPHYSICS_CONTACT_H__

#include "CCObject.h"
#include "CCGeometry.h"
#include "CCEventListenerCustom.h"
#include "CCEvent.h"

NS_CC_BEGIN

class PhysicsShape;
class PhysicsBody;
class PhysicsWorld;

class PhysicsContactInfo;


typedef struct PhysicsContactData
{
    Point points[PHYSICS_CONTACT_POINT_MAX];
    int   count;
    Point normal;
    
    PhysicsContactData()
    : count(0)
    {}
}PhysicsContactData;

/**
 * @brief Contact infomation. it will created automatically when two shape contact with each other. and it will destoried automatically when two shape separated.
 */
class PhysicsContact : Event
{
public:
    
    enum class EventCode
    {
        NONE,
        BEGIN,
        PRESOLVE,
        POSTSOLVE,
        SEPERATE
    };
    
    /*
     * @brief get contact shape A.
     */
    inline PhysicsShape* getShapeA() const { return _shapeA; }
    /*
     * @brief get contact shape B.
     */
    inline PhysicsShape* getShapeB() const { return _shapeB; }
    inline const PhysicsContactData* getContactData() const { return _contactData; }
    /*
     * @brief get data.
     */
    inline void* getData() const { return _data; }
    /*
     * @brief set data to contact. you must manage the memory yourself, Generally you can set data at contact begin, and distory it at contact end.
     */
    inline void setData(void* data) { _data = data; }
    
    EventCode getEventCode() const { return _eventCode; };
    
private:
    static PhysicsContact* create(PhysicsShape* a, PhysicsShape* b);
    bool init(PhysicsShape* a, PhysicsShape* b);
    
    void setEventCode(EventCode eventCode) { _eventCode = eventCode; };
    inline bool getNotify() const { return _notify; }
    inline void setNotify(bool notify) { _notify = notify; }
    inline PhysicsWorld* getWorld() const { return _world; }
    inline void setWorld(PhysicsWorld* world) { _world = world; }
    inline void setResult(bool result) { _result = result; }
    inline bool resetResult() { bool ret = _result; _result = true; return ret; }
    
    void generateContactData();
    
private:
    PhysicsContact();
    ~PhysicsContact();
    
private:
    PhysicsWorld* _world;
    PhysicsShape* _shapeA;
    PhysicsShape* _shapeB;
    EventCode _eventCode;
    PhysicsContactInfo* _info;
    bool _notify;
    bool _begin;
    bool _result;
    
    void* _data;
    void* _contactInfo;
    PhysicsContactData* _contactData;
    
    friend class EventListenerPhysicsContact;
    friend class PhysicsWorldCallback;
    friend class PhysicsWorld;
};

/*
 * @brief presolve value generated when onContactPreSolve called.
 */
class PhysicsContactPreSolve
{
public:
    // getter/setter
    float getElasticity() const;
    float getFriciton() const;
    Point getSurfaceVelocity() const;
    void setElasticity(float elasticity);
    void setFriction(float friction);
    void setSurfaceVelocity(Point surfaceVelocity);
    void ignore();
    
private:
    PhysicsContactPreSolve(PhysicsContactData* data, void* contactInfo);
    ~PhysicsContactPreSolve();
    
private:
    float _elasticity;
    float _friction;
    Point _surfaceVelocity;
    PhysicsContactData* _preContactData;
    void* _contactInfo;
    
    friend class EventListenerPhysicsContact;
};

/*
 * @brief postsolve value generated when onContactPostSolve called.
 */
class PhysicsContactPostSolve
{
public:
    // getter
    float getElasticity() const;
    float getFriciton() const;
    Point getSurfaceVelocity() const;
    
private:
    PhysicsContactPostSolve(void* contactInfo);
    ~PhysicsContactPostSolve();
    
private:
    void* _contactInfo;
    
    friend class EventListenerPhysicsContact;
};

/*
 * @brief contact listener.
 */
class EventListenerPhysicsContact : public EventListenerCustom
{
public:
    static EventListenerPhysicsContact* create();
    
    virtual bool test(PhysicsShape* shapeA, PhysicsShape* shapeB);
    virtual bool checkAvailable() override;
    virtual EventListenerPhysicsContact* clone() override;
    
public:
    /*
     * @brief it will called at two shapes start to contact, and only call it once.
     */
    std::function<bool(EventCustom* event, const PhysicsContact& contact)> onContactBegin;
    /*
     * @brief Two shapes are touching during this step. Return false from the callback to make world ignore the collision this step or true to process it normally. Additionally, you may override collision values, elasticity, or surface velocity values.
     */
    std::function<bool(EventCustom* event, const PhysicsContact& contact, const PhysicsContactPreSolve& solve)> onContactPreSolve;
    /*
     * @brief Two shapes are touching and their collision response has been processed. You can retrieve the collision impulse or kinetic energy at this time if you want to use it to calculate sound volumes or damage amounts. See cpArbiter for more info
     */
    std::function<void(EventCustom* event, const PhysicsContact& contact, const PhysicsContactPostSolve& solve)> onContactPostSolve;
    /*
     * @brief it will called at two shapes separated, and only call it once.
     * onContactBegin and onContactSeperate will called in pairs.
     */
    std::function<void(EventCustom* event, const PhysicsContact& contact)> onContactSeperate;
    
protected:
    bool init();
    void onEvent(EventCustom* event);
    
protected:
    EventListenerPhysicsContact();
    virtual ~EventListenerPhysicsContact();
};

class EventListenerPhysicsContactWithBodies : public EventListenerPhysicsContact
{
public:
    static EventListenerPhysicsContactWithBodies* create(PhysicsBody* bodyA, PhysicsBody* bodyB);
    
    virtual bool test(PhysicsShape* shapeA, PhysicsShape* shapeB) override;
    virtual EventListenerPhysicsContactWithBodies* clone() override;
    
protected:
    PhysicsBody* _a;
    PhysicsBody* _b;
    
protected:
    EventListenerPhysicsContactWithBodies();
    virtual ~EventListenerPhysicsContactWithBodies();
};

class EventListenerPhysicsContactWithShapes : public EventListenerPhysicsContact
{
public:
    static EventListenerPhysicsContactWithShapes* create(PhysicsShape* shapeA, PhysicsShape* shapeB);
    
    virtual bool test(PhysicsShape* shapeA, PhysicsShape* shapeB) override;
    virtual EventListenerPhysicsContactWithShapes* clone() override;
    
protected:
    PhysicsShape* _a;
    PhysicsShape* _b;
    
protected:
    EventListenerPhysicsContactWithShapes();
    virtual ~EventListenerPhysicsContactWithShapes();
};

class EventListenerPhysicsContactWithGroup : public EventListenerPhysicsContact
{
public:
    static EventListenerPhysicsContactWithGroup* create(int group);
    
    virtual bool test(PhysicsShape* shapeA, PhysicsShape* shapeB) override;
    virtual EventListenerPhysicsContactWithGroup* clone() override;
    
protected:
    int _group;
    
protected:
    EventListenerPhysicsContactWithGroup();
    virtual ~EventListenerPhysicsContactWithGroup();
};

NS_CC_END
#endif //__CCPHYSICS_CONTACT_H__

#endif // CC_USE_PHYSICS

#ifndef _PARALLAX_TEST_H_
#define _PARALLAX_TEST_H_

#include "../testBasic.h"
#include "../BaseTest.h"

class ParallaxDemo : public BaseTest
{
protected:
    CCTextureAtlas* _atlas;

public:
    ParallaxDemo(void);
    ~ParallaxDemo(void);

    virtual std::string title();
    virtual void onEnter();

    void restartCallback(CCObject* pSender);
    void nextCallback(CCObject* pSender);
    void backCallback(CCObject* pSender);
};

class Parallax1 : public ParallaxDemo
{
protected:
    CCNode*        _root;
    CCNode*        _target;
    CCMotionStreak*        _streak;

public:
    Parallax1();
    virtual std::string title();
};

class Parallax2 : public ParallaxDemo
{
protected:
    CCNode*        _root;
    CCNode*        _target;
    CCMotionStreak*        _streak;

public:
    Parallax2();
    
    virtual void ccTouchesMoved(CCSet *pTouches, CCEvent *pEvent);

    virtual std::string title();
};

class ParallaxTestScene : public TestScene
{
public:
    virtual void runThisTest();
};

#endif

#ifndef _ACHIEVEMENTS_TEST_H_
#define _ACHIEVEMENTS_TEST_H_

#include "../testBasic.h"

using namespace cocos2d;

class AchievementsTest: public CCLayer
{
protected:
    CCSprite* m_pBall;
    double    m_fLastTime;

public:
	AchievementsTest(void);
	~AchievementsTest(void);

//    virtual void didAccelerate(CCAcceleration* pAccelerationValue);

	virtual std::string title();
	virtual void onEnter();
};

class AchievementsTestScene : public TestScene
{
public:
    virtual void runThisTest();
};

#endif

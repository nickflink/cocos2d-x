#ifndef _LEADERBOARD_TEST_H_
#define _LEADERBOARD_TEST_H_

#include "../testBasic.h"

using namespace cocos2d;

class LeaderboardTest: public CCLayer
{
protected:
    CCSprite* m_pBall;
    double    m_fLastTime;

public:
	LeaderboardTest(void);
	~LeaderboardTest(void);

//    virtual void didAccelerate(CCAcceleration* pAccelerationValue);

	virtual std::string title();
	virtual void onEnter();
};

class LeaderboardTestScene : public TestScene
{
public:
    virtual void runThisTest();
};

#endif

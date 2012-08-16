#ifndef _SCROLL_TEST_H_
#define _SCROLL_TEST_H_

////----#include "cocos2d.h"
#include "../testBasic.h"

class ScrollLayer1 : public CCLayer
{
protected:
	CCMenuItem*	m_disabledItem;

public:
	ScrollLayer1(void);
	~ScrollLayer1();

public:
    virtual void registerWithTouchDispatcher();
    virtual bool ccTouchBegan(CCTouch *touch, CCEvent * pEvent);
    virtual void ccTouchEnded(CCTouch *touch, CCEvent * pEvent);
    virtual void ccTouchCancelled(CCTouch *touch, CCEvent * pEvent);
    virtual void ccTouchMoved(CCTouch *touch, CCEvent * pEvent);

    void allowTouches(ccTime dt);
	void menuCallback(CCObject* pSender);
	void menuCallbackConfig(CCObject* pSender);
	void menuCallbackDisabled(CCObject* pSender);
	void menuCallbackEnable(CCObject* pSender);
	void menuCallback2(CCObject* pSender);
	void onQuit(CCObject* pSender);

	//CREATE_NODE(ScrollLayer1);
};


class ScrollTestScene : public TestScene
{
public:
    virtual void runThisTest();
};

#endif

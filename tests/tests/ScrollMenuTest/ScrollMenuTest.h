#ifndef _SCROLL_TEST_H_
#define _SCROLL_TEST_H_

////----#include "cocos2d.h"
#include "../testBasic.h"

enum {
    //* priority used by the menu
    kNumStrings = 10,
};

enum
{
    MENU_SCROLL_ADD = 0,
    MENU_SCROLL_INIT,
    MENU_SCROLL_COUNT,
};

CCLayer* createScrollMenuLayer(int nIndex);
CCLayer* nextScrollMenu();
CCLayer* prevScrollMenu();
CCLayer* restartScrollMenu();

// the class inherit from TestScene
// every Scene each test used must inherit from TestScene,
// make sure the test have the menu item for back to main menu
class ScrollMenuTestScene : public TestScene
{
public:
    virtual void runThisTest();
};

class ScrollMenuDemo : public CCLayer
{
public:
    virtual void onEnter();
    virtual void onExit();
    
    virtual std::string title();
    virtual std::string subtitle();
    
    void restartCallback(CCObject* pSender);
    void nextCallback(CCObject* pSender);
    void backCallback(CCObject* pSender);
};

class ScrollMenu1 : public ScrollMenuDemo
{
protected:
	CCMenuItem*	m_disabledItem;
    
public:
	ScrollMenu1(void);
	~ScrollMenu1();
    
public:
    virtual void registerWithTouchDispatcher();
    void menuCallback(CCObject* sender);
    virtual bool ccTouchBegan(CCTouch *touch, CCEvent * pEvent);
    virtual void ccTouchEnded(CCTouch *touch, CCEvent * pEvent);
    virtual void ccTouchCancelled(CCTouch *touch, CCEvent * pEvent);
    virtual void ccTouchMoved(CCTouch *touch, CCEvent * pEvent);
    
    void allowTouches(ccTime dt);
	void onQuit(CCObject* pSender);
    
	//CREATE_NODE(ScrollMenu2);
};

class ScrollMenu2 : public ScrollMenuDemo
{
protected:
	CCMenuItem*	m_disabledItem;

public:
	ScrollMenu2(void);
	~ScrollMenu2();

public:
    virtual void registerWithTouchDispatcher();
    void menuCallback(CCObject* sender);
    virtual bool ccTouchBegan(CCTouch *touch, CCEvent * pEvent);
    virtual void ccTouchEnded(CCTouch *touch, CCEvent * pEvent);
    virtual void ccTouchCancelled(CCTouch *touch, CCEvent * pEvent);
    virtual void ccTouchMoved(CCTouch *touch, CCEvent * pEvent);

    void allowTouches(ccTime dt);
	void onQuit(CCObject* pSender);

	//CREATE_NODE(ScrollMenu2);
};
#endif

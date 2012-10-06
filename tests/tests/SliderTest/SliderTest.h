#ifndef _SLIDER_TEST_H_
#define _SLIDER_TEST_H_

////----#include "cocos2d.h"
#include "../testBasic.h"


enum
{
    MENU_SLIDER_INIT = 0,
    MENU_SLIDER_COUNT,
};

CCLayer* createSliderLayer(int nIndex);
CCLayer* nextSlider();
CCLayer* prevSlider();
CCLayer* restartSlider();

// the class inherit from TestScene
// every Scene each test used must inherit from TestScene,
// make sure the test have the menu item for back to main menu
class SliderTestScene : public TestScene
{
public:
    virtual void runThisTest();
};

class SliderDemo : public CCLayer
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

class Slider1 : public SliderDemo
{
protected:
	CCMenuItem*	m_disabledItem;
    
public:
	Slider1(void);
	~Slider1();
    
public:
    virtual void registerWithTouchDispatcher();
    void sliderCallback(CCObject* sender);
    virtual bool ccTouchBegan(CCTouch *touch, CCEvent * pEvent);
    virtual void ccTouchEnded(CCTouch *touch, CCEvent * pEvent);
    virtual void ccTouchCancelled(CCTouch *touch, CCEvent * pEvent);
    virtual void ccTouchMoved(CCTouch *touch, CCEvent * pEvent);
    
    void allowTouches(ccTime dt);
	void onQuit(CCObject* pSender);
};
#endif

#include "SliderTest.h"
#include "../testResource.h"

CCLayer* NextAction();
CCLayer* BackAction();
CCLayer* RestartAction();

static int s_nActionIdx = -1;

CCLayer* createSliderLayer(int nIndex)
{
    CCLayer * pLayer = NULL;
    
    switch (nIndex)
    {
        default:
        case MENU_SLIDER_INIT:
            pLayer = new Slider1();
            break;
    }
    
    return pLayer;
}

CCLayer* nextSlider()
{
    ++s_nActionIdx;
    s_nActionIdx = s_nActionIdx % MENU_SLIDER_COUNT;
    
    CCLayer* pLayer = createSliderLayer(s_nActionIdx);
    pLayer->autorelease();
    
    return pLayer;
}

CCLayer* prevSlider()
{
    --s_nActionIdx;
    if( s_nActionIdx < 0 )
        s_nActionIdx += MENU_SLIDER_COUNT;	
    
    CCLayer* pLayer = createSliderLayer(s_nActionIdx);
    pLayer->autorelease();
    
    return pLayer;
}

CCLayer* restartSlider()
{
    CCLayer* pLayer = createSliderLayer(s_nActionIdx);
    pLayer->autorelease();
    
    return pLayer;
}


void SliderTestScene::runThisTest()
{
    s_nActionIdx = -1;
    addChild(nextSlider());
    
    CCDirector::sharedDirector()->replaceScene(this);
}

std::string SliderDemo::title()
{
    return "SliderTest";
}

std::string SliderDemo::subtitle()

{
    std::string subtitleString;
    switch (s_nActionIdx)
    {
        case MENU_SLIDER_INIT:
            subtitleString = "test using init";
            break;
        default:
            subtitleString = "unknown test";
            break;
    }
    return subtitleString;
}

void SliderDemo::onEnter()
{
    CCLayer::onEnter();
    
    CCSize s = CCDirector::sharedDirector()->getWinSize();
    
    // add title and subtitle
    std::string str = title();
    const char * pTitle = str.c_str();
    CCLabelTTF* label = CCLabelTTF::labelWithString(pTitle, "Arial", 18);
    addChild(label, 1);
    label->setPosition( CCPointMake(s.width/2, s.height - 30) );
    
    std::string strSubtitle = subtitle();
    if( ! strSubtitle.empty() ) 
    {
        CCLabelTTF* l = CCLabelTTF::labelWithString(strSubtitle.c_str(), "Thonburi", 22);
        addChild(l, 1);
        l->setPosition( CCPointMake(s.width/2, s.height - 60) );
    }	
    
    // add menu
    CCMenuItemImage *item1 = CCMenuItemImage::itemFromNormalImage(s_pPathB1, s_pPathB2, this, menu_selector(SliderDemo::backCallback) );
    CCMenuItemImage *item2 = CCMenuItemImage::itemFromNormalImage(s_pPathR1, s_pPathR2, this, menu_selector(SliderDemo::restartCallback) );
    CCMenuItemImage *item3 = CCMenuItemImage::itemFromNormalImage(s_pPathF1, s_pPathF2, this, menu_selector(SliderDemo::nextCallback) );
    
    CCMenu *menu = CCMenu::menuWithItems(item1, item2, item3, NULL);
    
    menu->setPosition( CCPointZero );
    item1->setPosition( CCPointMake( s.width/2 - 100,30) );
    item2->setPosition( CCPointMake( s.width/2, 30) );
    item3->setPosition( CCPointMake( s.width/2 + 100,30) );
    
    addChild(menu, 1);
}

void SliderDemo::onExit()
{
    CCLayer::onExit();
}

void SliderDemo::restartCallback(CCObject* pSender)
{
    CCScene* s = new SliderTestScene();
    s->addChild( restartSlider() );
    CCDirector::sharedDirector()->replaceScene(s);
    s->release();
}

void SliderDemo::nextCallback(CCObject* pSender)
{
    CCScene* s = new SliderTestScene();
    s->addChild( nextSlider() );
    CCDirector::sharedDirector()->replaceScene(s);
    s->release();
}

void SliderDemo::backCallback(CCObject* pSender)
{
    CCScene* s = new SliderTestScene();
    s->addChild( prevSlider() );
    CCDirector::sharedDirector()->replaceScene(s);
    s->release();
}

//------------------------------------------------------------------
//
// Slider1
//
//------------------------------------------------------------------
Slider1::Slider1()
{
    CCSize size = CCDirector::sharedDirector()->getWinSize();
    CCSlider* slider = CCSlider::sliderWithFiles("Images/slider_track.png", "Images/slider_knob.png", this, menu_selector(Slider1::sliderCallback));
    assert(slider);
    slider->setPosition(ccp(size.width*0.5f, size.height*0.5f));
    slider->setRotation(90);
    slider->setHeight(100);
    slider->setHorizontalPadding(50);
    slider->setTrackTouchOutsideContent(true);
    slider->setEvaluateFirstTouch(false);
    slider->setMinValue(0.5f);
    slider->setMaxValue(1.0f);
    slider->setValue(0.5f);
    slider->setEnabled(true);
    addChild(slider);

}
void Slider1::sliderCallback(CCObject* sender){
    CCLog("sliderCallback(sender=%d)", sender);
}


void Slider1::registerWithTouchDispatcher()
{
    CCTouchDispatcher::sharedDispatcher()->addTargetedDelegate(this, kCCMenuTouchPriority+1, true);
}

bool Slider1::ccTouchBegan(CCTouch *touch, CCEvent * pEvent)
{
    return true;
}

void Slider1::ccTouchEnded(CCTouch *touch, CCEvent * pEvent)
{
}

void Slider1::ccTouchCancelled(CCTouch *touch, CCEvent * pEvent)
{
}

void Slider1::ccTouchMoved(CCTouch *touch, CCEvent * pEvent)
{
}

Slider1::~Slider1()
{
}

void Slider1::allowTouches(ccTime dt)
{
    CCTouchDispatcher::sharedDispatcher()->setPriority(kCCMenuTouchPriority+1, this);
    unscheduleAllSelectors();
    CCLog("TOUCHES ALLOWED AGAIN");
}

void Slider1::onQuit(CCObject* sender)
{
    //[[Director sharedDirector] end];
    //getCocosApp()->exit();
}
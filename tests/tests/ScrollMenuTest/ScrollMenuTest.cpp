#include "ScrollMenuTest.h"
#include "../testResource.h"

CCLayer* NextAction();
CCLayer* BackAction();
CCLayer* RestartAction();

static int s_nActionIdx = -1;

CCLayer* createScrollMenuLayer(int nIndex)
{
    CCLayer * pLayer = NULL;
    
    switch (nIndex)
    {
        case MENU_SCROLL_ADD:
            pLayer = new ScrollMenu1(); break;
            break;
        default:
            //fall through to init case
        case MENU_SCROLL_INIT:
            pLayer = new ScrollMenu2(); break;
            break;
    }
    
    return pLayer;
}

CCLayer* nextScrollMenu()
{
    ++s_nActionIdx;
    s_nActionIdx = s_nActionIdx % MENU_SCROLL_COUNT;
    
    CCLayer* pLayer = createScrollMenuLayer(s_nActionIdx);
    pLayer->autorelease();
    
    return pLayer;
}

CCLayer* prevScrollMenu()
{
    --s_nActionIdx;
    if( s_nActionIdx < 0 )
        s_nActionIdx += MENU_SCROLL_COUNT;	
    
    CCLayer* pLayer = createScrollMenuLayer(s_nActionIdx);
    pLayer->autorelease();
    
    return pLayer;
}

CCLayer* restartScrollMenu()
{
    CCLayer* pLayer = createScrollMenuLayer(s_nActionIdx);
    pLayer->autorelease();
    
    return pLayer;
}


void ScrollMenuTestScene::runThisTest()
{
    s_nActionIdx = -1;
    addChild(nextScrollMenu());
    
    CCDirector::sharedDirector()->replaceScene(this);
}

std::string ScrollMenuDemo::title()
{
    return "ScrollMenuTest";
}

std::string ScrollMenuDemo::subtitle()

{
    std::string subtitleString;
    switch (s_nActionIdx)
    {
        case MENU_SCROLL_ADD:
            subtitleString = "test using addChild";
            break;
        case MENU_SCROLL_INIT:
            subtitleString = "test using init";
            break;
        default:
            subtitleString = "unknown test";
            break;
    }
    return subtitleString;

}

void ScrollMenuDemo::onEnter()
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
    CCMenuItemImage *item1 = CCMenuItemImage::itemFromNormalImage(s_pPathB1, s_pPathB2, this, menu_selector(ScrollMenuDemo::backCallback) );
    CCMenuItemImage *item2 = CCMenuItemImage::itemFromNormalImage(s_pPathR1, s_pPathR2, this, menu_selector(ScrollMenuDemo::restartCallback) );
    CCMenuItemImage *item3 = CCMenuItemImage::itemFromNormalImage(s_pPathF1, s_pPathF2, this, menu_selector(ScrollMenuDemo::nextCallback) );
    
    CCMenu *menu = CCMenu::menuWithItems(item1, item2, item3, NULL);
    
    menu->setPosition( CCPointZero );
    item1->setPosition( CCPointMake( s.width/2 - 100,30) );
    item2->setPosition( CCPointMake( s.width/2, 30) );
    item3->setPosition( CCPointMake( s.width/2 + 100,30) );
    
    addChild(menu, 1);
}

void ScrollMenuDemo::onExit()
{
    CCLayer::onExit();
}

void ScrollMenuDemo::restartCallback(CCObject* pSender)
{
    CCScene* s = new ScrollMenuTestScene();
    s->addChild( restartScrollMenu() );
    CCDirector::sharedDirector()->replaceScene(s);
    s->release();
}

void ScrollMenuDemo::nextCallback(CCObject* pSender)
{
    CCScene* s = new ScrollMenuTestScene();
    s->addChild( nextScrollMenu() );
    CCDirector::sharedDirector()->replaceScene(s);
    s->release();
}

void ScrollMenuDemo::backCallback(CCObject* pSender)
{
    CCScene* s = new ScrollMenuTestScene();
    s->addChild( prevScrollMenu() );
    CCDirector::sharedDirector()->replaceScene(s);
    s->release();
}

//------------------------------------------------------------------
//
// ScrollMenu1
//
//------------------------------------------------------------------
ScrollMenu1::ScrollMenu1()
{
    CCLabelBMFont *labels[10];
    CCMenuItemLabel *items[10];
    const char *fontName = "fonts/bitmapFontTest2.fnt";
    labels[0] = CCLabelBMFont::labelWithString("0---------", fontName);
    labels[1] = CCLabelBMFont::labelWithString("-1--------", fontName);
    labels[2] = CCLabelBMFont::labelWithString("--2-------", fontName);
    labels[3] = CCLabelBMFont::labelWithString("---3------", fontName);
    labels[4] = CCLabelBMFont::labelWithString("----4-----", fontName);
    labels[5] = CCLabelBMFont::labelWithString("-----5----", fontName);
    labels[6] = CCLabelBMFont::labelWithString("------6---", fontName);
    labels[7] = CCLabelBMFont::labelWithString("-------7--", fontName);
    labels[8] = CCLabelBMFont::labelWithString("--------8-", fontName);
    labels[9] = CCLabelBMFont::labelWithString("---------9", fontName);
    items[0] = CCMenuItemLabel::itemWithLabel(labels[0], this, menu_selector(ScrollMenu1::menuCallback));
    items[1] = CCMenuItemLabel::itemWithLabel(labels[1], this, menu_selector(ScrollMenu1::menuCallback));
    items[2] = CCMenuItemLabel::itemWithLabel(labels[2], this, menu_selector(ScrollMenu1::menuCallback));
    items[3] = CCMenuItemLabel::itemWithLabel(labels[3], this, menu_selector(ScrollMenu1::menuCallback));
    items[4] = CCMenuItemLabel::itemWithLabel(labels[4], this, menu_selector(ScrollMenu1::menuCallback));
    items[5] = CCMenuItemLabel::itemWithLabel(labels[5], this, menu_selector(ScrollMenu1::menuCallback));
    items[6] = CCMenuItemLabel::itemWithLabel(labels[6], this, menu_selector(ScrollMenu1::menuCallback));
    items[7] = CCMenuItemLabel::itemWithLabel(labels[7], this, menu_selector(ScrollMenu1::menuCallback));
    items[8] = CCMenuItemLabel::itemWithLabel(labels[8], this, menu_selector(ScrollMenu1::menuCallback));
    items[9] = CCMenuItemLabel::itemWithLabel(labels[9], this, menu_selector(ScrollMenu1::menuCallback));
    CCScrollMenu* menu = CCScrollMenu::node();
    menu->addChild(items[0], 0, 0);
    menu->addChild(items[1], 0, 1);
    menu->addChild(items[2], 0, 2);
    menu->addChild(items[3], 0, 3);
    menu->addChild(items[4], 0, 4);
    menu->addChild(items[5], 0, 5);
    menu->addChild(items[6], 0, 6);
    menu->addChild(items[7], 0, 7);
    menu->addChild(items[8], 0, 8);
    menu->addChild(items[9], 0, 9);
    addChild(menu);
    menu->startScrollingUp();

}
void ScrollMenu1::menuCallback(CCObject* sender){
    CCLog("menuCallback(sender=%d)", sender);
}


void ScrollMenu1::registerWithTouchDispatcher()
{
    CCTouchDispatcher::sharedDispatcher()->addTargetedDelegate(this, kCCMenuTouchPriority+1, true);
}

bool ScrollMenu1::ccTouchBegan(CCTouch *touch, CCEvent * pEvent)
{
    return true;
}

void ScrollMenu1::ccTouchEnded(CCTouch *touch, CCEvent * pEvent)
{
}

void ScrollMenu1::ccTouchCancelled(CCTouch *touch, CCEvent * pEvent)
{
}

void ScrollMenu1::ccTouchMoved(CCTouch *touch, CCEvent * pEvent)
{
}

ScrollMenu1::~ScrollMenu1()
{
}

void ScrollMenu1::allowTouches(ccTime dt)
{
    CCTouchDispatcher::sharedDispatcher()->setPriority(kCCMenuTouchPriority+1, this);
    unscheduleAllSelectors();
    CCLog("TOUCHES ALLOWED AGAIN");
}

void ScrollMenu1::onQuit(CCObject* sender)
{
    //[[Director sharedDirector] end];
    //getCocosApp()->exit();
}


//------------------------------------------------------------------
//
// ScrollMenu2
//
//------------------------------------------------------------------
ScrollMenu2::ScrollMenu2()
{
    CCLabelBMFont *labels[10];
    CCMenuItemLabel *items[10];
    const char *fontName = "fonts/bitmapFontTest2.fnt";
    labels[0] = CCLabelBMFont::labelWithString("0---------", fontName);
    labels[1] = CCLabelBMFont::labelWithString("-1--------", fontName);
    labels[2] = CCLabelBMFont::labelWithString("--2-------", fontName);
    labels[3] = CCLabelBMFont::labelWithString("---3------", fontName);
    labels[4] = CCLabelBMFont::labelWithString("----4-----", fontName);
    labels[5] = CCLabelBMFont::labelWithString("-----5----", fontName);
    labels[6] = CCLabelBMFont::labelWithString("------6---", fontName);
    labels[7] = CCLabelBMFont::labelWithString("-------7--", fontName);
    labels[8] = CCLabelBMFont::labelWithString("--------8-", fontName);
    labels[9] = CCLabelBMFont::labelWithString("---------9", fontName);
	items[0] = CCMenuItemLabel::itemWithLabel(labels[0], this, menu_selector(ScrollMenu2::menuCallback));
    items[1] = CCMenuItemLabel::itemWithLabel(labels[1], this, menu_selector(ScrollMenu2::menuCallback));
    items[2] = CCMenuItemLabel::itemWithLabel(labels[2], this, menu_selector(ScrollMenu2::menuCallback));
    items[3] = CCMenuItemLabel::itemWithLabel(labels[3], this, menu_selector(ScrollMenu2::menuCallback));
    items[4] = CCMenuItemLabel::itemWithLabel(labels[4], this, menu_selector(ScrollMenu2::menuCallback));
    items[5] = CCMenuItemLabel::itemWithLabel(labels[5], this, menu_selector(ScrollMenu2::menuCallback));
    items[6] = CCMenuItemLabel::itemWithLabel(labels[6], this, menu_selector(ScrollMenu2::menuCallback));
    items[7] = CCMenuItemLabel::itemWithLabel(labels[7], this, menu_selector(ScrollMenu2::menuCallback));
    items[8] = CCMenuItemLabel::itemWithLabel(labels[8], this, menu_selector(ScrollMenu2::menuCallback));
    items[9] = CCMenuItemLabel::itemWithLabel(labels[9], this, menu_selector(ScrollMenu2::menuCallback));
	CCScrollMenu* menu = CCScrollMenu::scrollMenuWithItems( items[0], items[1], items[2], items[3], items[4], items[5], items[6], items[7], items[8], items[9], NULL);
    addChild(menu);
    menu->startScrollingUp();

}
void ScrollMenu2::menuCallback(CCObject* sender){
    CCLog("menuCallback(sender=%d)", sender);
}


void ScrollMenu2::registerWithTouchDispatcher()
{
    CCTouchDispatcher::sharedDispatcher()->addTargetedDelegate(this, kCCMenuTouchPriority+1, true);
}

bool ScrollMenu2::ccTouchBegan(CCTouch *touch, CCEvent * pEvent)
{
    return true;
}

void ScrollMenu2::ccTouchEnded(CCTouch *touch, CCEvent * pEvent)
{
}

void ScrollMenu2::ccTouchCancelled(CCTouch *touch, CCEvent * pEvent)
{
}

void ScrollMenu2::ccTouchMoved(CCTouch *touch, CCEvent * pEvent)
{
}

ScrollMenu2::~ScrollMenu2()
{
}

void ScrollMenu2::allowTouches(ccTime dt)
{
    CCTouchDispatcher::sharedDispatcher()->setPriority(kCCMenuTouchPriority+1, this);
    unscheduleAllSelectors();
    CCLog("TOUCHES ALLOWED AGAIN");
}

void ScrollMenu2::onQuit(CCObject* sender)
{
	//[[Director sharedDirector] end];
	//getCocosApp()->exit();
}
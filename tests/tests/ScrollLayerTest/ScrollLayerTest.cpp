#include "ScrollLayerTest.h"
#include "../testResource.h"

enum {
	kTagMenu = 1,
	kTagMenu0 = 0,					   
	kTagMenu1 = 1,
};

#define MID_CALLBACK	1000
#define MID_CALLBACK2	1001
#define MID_DISABLED	1002
#define MID_ENABLE		1003
#define MID_CONFIG		1004
#define MID_QUIT		1005
#define MID_OPACITY		1006
#define MID_ALIGN		1007
#define MID_CALLBACK3	1008
#define MID_BACKCALLBACK 1009

//------------------------------------------------------------------
//
// ScrollLayer1
//
//------------------------------------------------------------------
ScrollLayer1::ScrollLayer1()
{
	CCMenuItemFont::setFontSize( 30 );
	CCMenuItemFont::setFontName("Courier New");

    setIsTouchEnabled(true);
	// Font Item
	
	CCSprite* spriteNormal = CCSprite::spriteWithFile(s_MenuItem, CCRectMake(0,23*2,115,23));
	CCSprite* spriteSelected = CCSprite::spriteWithFile(s_MenuItem, CCRectMake(0,23*1,115,23));
	CCSprite* spriteDisabled = CCSprite::spriteWithFile(s_MenuItem, CCRectMake(0,23*0,115,23));
	//dynamic_cast<CCNode*>(mgr)->addChild(spriteNormal);
	//dynamic_cast<CCNode*>(mgr)->addChild(spriteSelected);
	//dynamic_cast<CCNode*>(mgr)->addChild(spriteDisabled);

	CCMenuItemSprite* item1 = CCMenuItemSprite::itemFromNormalSprite(spriteNormal, spriteSelected, spriteDisabled, this, menu_selector(ScrollLayer1::menuCallback) );
	
	// Image Item
	CCMenuItem* item2 = CCMenuItemImage::itemFromNormalImage(s_SendScore, s_PressSendScore, this, menu_selector(ScrollLayer1::menuCallback2) );

	// Label Item (LabelAtlas)
	CCLabelAtlas* labelAtlas = CCLabelAtlas::labelWithString("0123456789", "fonts/fps_images.png", 16, 24, '.');
	CCMenuItemLabel* item3 = CCMenuItemLabel::itemWithLabel(labelAtlas, this, menu_selector(ScrollLayer1::menuCallbackDisabled) );
	item3->setDisabledColor( ccc3(32,32,64) );
	item3->setColor( ccc3(200,200,255) );
	
	// Font Item
	CCMenuItemFont *item4 = CCMenuItemFont::itemFromString("I toggle enable items", this, menu_selector(ScrollLayer1::menuCallbackEnable) );

	item4->setFontSizeObj(20);
	item4->setFontName("Marker Felt");
	
	// Label Item (CCLabelBMFont)
	CCLabelBMFont* label = CCLabelBMFont::labelWithString("configuration", "fonts/bitmapFontTest3.fnt");
	CCMenuItemLabel* item5 = CCMenuItemLabel::itemWithLabel(label, this, menu_selector(ScrollLayer1::menuCallbackConfig));

	// Testing issue #500
	item5->setScale( 0.8f );

	// Font Item
	CCMenuItemFont* item6 = CCMenuItemFont::itemFromString("Quit", this, menu_selector(ScrollLayer1::onQuit));
	
	CCActionInterval* color_action = CCTintBy::actionWithDuration(0.5f, 0, -255, -255);
	CCActionInterval* color_back = color_action->reverse();
	CCFiniteTimeAction* seq = CCSequence::actions(color_action, color_back, NULL);
	item6->runAction(CCRepeatForever::actionWithAction((CCActionInterval*)seq));

	CCMenu* menu = CCMenu::menuWithItems( item1, item2, item3, item4, item5, item6, NULL);
	menu->alignItemsVertically();
	
	
	// elastic effect
	CCSize s = CCDirector::sharedDirector()->getWinSize();
	
	int i=0;
	CCNode* child;
	CCArray * pArray = menu->getChildren();
    CCObject* pObject = NULL;
    CCARRAY_FOREACH(pArray, pObject)
	{
		if(pObject == NULL)
			break;

		child = (CCNode*)pObject;

		CCPoint dstPoint = child->getPosition();
		int offset = (int) (s.width/2 + 50);
		if( i % 2 == 0)
			offset = -offset;
		
		child->setPosition( CCPointMake( dstPoint.x + offset, dstPoint.y) );
		child->runAction( 
							CCEaseElasticOut::actionWithAction(
																CCMoveBy::actionWithDuration(2, CCPointMake(dstPoint.x - offset,0)), 0.35f
															) 
						);
		i++;
	}

	m_disabledItem = item3; item3->retain();
	m_disabledItem->setIsEnabled( false );

	addChild(menu);

}

void ScrollLayer1::registerWithTouchDispatcher()
{
    CCTouchDispatcher::sharedDispatcher()->addTargetedDelegate(this, kCCMenuTouchPriority+1, true);
}

bool ScrollLayer1::ccTouchBegan(CCTouch *touch, CCEvent * pEvent)
{
    return true;
}

void ScrollLayer1::ccTouchEnded(CCTouch *touch, CCEvent * pEvent)
{
}

void ScrollLayer1::ccTouchCancelled(CCTouch *touch, CCEvent * pEvent)
{
}

void ScrollLayer1::ccTouchMoved(CCTouch *touch, CCEvent * pEvent)
{
}

ScrollLayer1::~ScrollLayer1()
{
	m_disabledItem->release();
}

void ScrollLayer1::menuCallback(CCObject* sender)
{
	((CCLayerMultiplex*)m_pParent)->switchTo(1);
}

void ScrollLayer1::menuCallbackConfig(CCObject* sender)
{
	((CCLayerMultiplex*)m_pParent)->switchTo(3);
}

void ScrollLayer1::allowTouches(ccTime dt)
{
    CCTouchDispatcher::sharedDispatcher()->setPriority(kCCMenuTouchPriority+1, this);
    unscheduleAllSelectors();
    CCLog("TOUCHES ALLOWED AGAIN");
}

void ScrollLayer1::menuCallbackDisabled(CCObject* sender) 
{
    // hijack all touch events for 5 seconds
    CCTouchDispatcher::sharedDispatcher()->setPriority(kCCMenuTouchPriority-1, this);
    schedule(schedule_selector(ScrollLayer1::allowTouches), 5.0f);
    CCLog("TOUCHES DISABLED FOR 5 SECONDS");
}

void ScrollLayer1::menuCallbackEnable(CCObject* sender) 
{
	m_disabledItem->setIsEnabled(! m_disabledItem->getIsEnabled() );
}

void ScrollLayer1::menuCallback2(CCObject* sender)
{
	((CCLayerMultiplex*)m_pParent)->switchTo(2);
}

void ScrollLayer1::onQuit(CCObject* sender)
{
	//[[Director sharedDirector] end];
	//getCocosApp()->exit();
}

void ScrollTestScene::runThisTest()
{
    CCLayer* pLayer1 = new ScrollLayer1();

    CCLayerMultiplex* layer = CCLayerMultiplex::layerWithLayers(pLayer1, NULL);
    addChild(layer, 0); 

    pLayer1->release();

    CCDirector::sharedDirector()->replaceScene(this);
}

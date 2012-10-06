/****************************************************************************
Copyright (c) 2012 gogododo

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
#include "CCScrollMenu.h"
#include "CCDirector.h"
#include "CCApplication.h"
#include "CCPointExtension.h"
#include "CCTouchDispatcher.h"
#include "CCLabelBMFont.h"
#include "CCActionInterval.h"
#include "CCActionInstant.h"
#include "CCTouch.h"
#include "CCStdC.h"

#include <vector>
#include <stdarg.h>

using namespace std;

namespace cocos2d{

	enum 
	{
		kDefaultPadding =  5,
	};

	//
	//CCScrollMenu
	//

    CCScrollMenu* CCScrollMenu::node()
    {
        return scrollMenuWithItem(NULL);
    }
    
	CCScrollMenu * CCScrollMenu::scrollMenuWithItems(CCMenuItem* item, ...)
	{
		va_list args;
		va_start(args,item);
		CCScrollMenu *pRet = new CCScrollMenu();
		if (pRet && pRet->initWithItems(item, args))
		{
			pRet->autorelease();
			va_end(args);
			return pRet;
		}
		va_end(args);
		CC_SAFE_DELETE(pRet)
		return NULL;
	}
    CCScrollMenu* CCScrollMenu::scrollMenuWithArrayLua(CCArray *items)
    {
        return NULL;
    }
    
	CCScrollMenu* CCScrollMenu::scrollMenuWithItem(CCMenuItem* item)
	{
		return scrollMenuWithItems(item, NULL);
	}
        
    bool CCScrollMenu::initWithItems(CCMenuItem* item, va_list args)
    {
        if (CCMenu::initWithItems(item, args))
        {
            CCSize s = CCDirector::sharedDirector()->getWinSize();
            CCPoint cpStartPoint = CCPointZero;
            CCObject* pObject = NULL;
            CCRect bb = CCRectZero;
            CCARRAY_FOREACH(m_pChildren, pObject)
            {
                CCNode* pChild = dynamic_cast<CCNode*>(pObject);
                if (pChild)
                {
                    bb = pChild->boundingBox();
                    m_fMenuHeight += bb.size.height;
                    //Align all items in a column from the bottom of the screen going down further off the screen
                    cpStartPoint = this->getStartPoint(pChild);
                    pChild->setPosition(cpStartPoint);
                }
            }
            return true;
        }
        return false;
    }
    
    /*
     * override add:
     */
	void CCScrollMenu::addChild(CCNode * pChild, int zOrder)
	{
        addChild(pChild, zOrder, 0);
	}
    
    void CCScrollMenu::addChild(CCNode * pChild, int zOrder, int tag)
	{
		CCLayer::addChild(pChild, zOrder, tag);
        CCRect bb = pChild->boundingBox();
        m_fMenuHeight += bb.size.height;
        CCPoint cpStartPoint = this->getStartPoint(pChild);
        pChild->setPosition(cpStartPoint);
	}
    
    CCPoint CCScrollMenu::getStartPoint(CCNode *node)
    {
        CCSize s = CCDirector::sharedDirector()->getWinSize();
        CCPoint cpStartPoint = CCPointZero;
        CCObject* pObject = NULL;
        
        float endOfMenuHeight = -1.0f*(s.height/2.0f);
        CCRect bb = CCRectZero;
        float halfChildHeight = 0.0f;
        CCARRAY_FOREACH(m_pChildren, pObject)
        {
            CCNode* pChild = dynamic_cast<CCNode*>(pObject);
            if (pChild)
            {
                bb = pChild->boundingBox();
                halfChildHeight = (bb.size.height/2.0f);
                cpStartPoint = CCPointMake( 0.0f, (endOfMenuHeight-halfChildHeight));
                endOfMenuHeight -= bb.size.height;
                
                //Align all items in a column from the bottom of the screen going down further off the screen
                if(pChild == node)
                {
                    //Early exit when we have it calculated
                    break;
                }
            }
        }
        return cpStartPoint;
    }
    
    CCPoint CCScrollMenu::getFinishPoint(CCNode *node)
    {
        CCSize s = CCDirector::sharedDirector()->getWinSize();
        CCPoint cpStartPoint = getStartPoint(node);
        CCPoint cpFinishPoint = CCPointMake(cpStartPoint.x, cpStartPoint.y + s.height + m_fMenuHeight);
        return cpFinishPoint;
    }

    void CCScrollMenu::startScrollingUp()
    {
        CCSize s = CCDirector::sharedDirector()->getWinSize();
        CCPoint cpFinishPoint = CCPointZero;
        CCObject* pObject = NULL;
        CCActionInterval *pScrollUp = NULL;
        unsigned int countIndex = 0;
//        float timeUntilNext = 0.0f;
        CCNode* pChild = NULL;
        unsigned int numChildren = getChildrenCount();
        float fScrollDelta = 0.0f;
        CCARRAY_FOREACH(m_pChildren, pObject)
        {
            ++countIndex;
            pChild = dynamic_cast<CCNode*>(pObject);
            if (pChild)
            {
//                cpStartPoint = getStartPoint(pChild);
                cpFinishPoint = getFinishPoint(pChild);
                fScrollDelta = cpFinishPoint.y - pChild->getPositionY();
                CCRect bb = pChild->boundingBox();
                if(countIndex < numChildren)
                {
                    pScrollUp = (CCActionInterval *)CCSequence::actions(
                        CCMoveTo::actionWithDuration(fScrollDelta/m_fScrollSpeed, cpFinishPoint),
                        NULL);
                }else{
                    pScrollUp = (CCActionInterval *)CCSequence::actions(
//                        CCMoveTo::actionWithDuration(5.1f, CCPointMake(0.0f, 0.0f)),
                        CCMoveTo::actionWithDuration(fScrollDelta/m_fScrollSpeed, cpFinishPoint),
                        CCCallFuncN::actionWithTarget(this, callfuncN_selector(CCScrollMenu::triggerLastOffStage)), 
                        NULL);
                }
                pChild->runAction(pScrollUp);
            }
        }
    }
    
    void CCScrollMenu::moveByPosition(float delta)
    {
        CCPoint cpCurrentPosition = CCPointZero;
        CCObject* pObject = NULL;
        CCNode* pChild = NULL;
        CCARRAY_FOREACH(m_pChildren, pObject)
        {
            pChild = dynamic_cast<CCNode*>(pObject);
            if (pChild)
            {
                cpCurrentPosition = pChild->getPosition();
                pChild->setPosition(CCPointMake(cpCurrentPosition.x, cpCurrentPosition.y+delta));
            }
        }
    }

    void CCScrollMenu::triggerLastOffStage(CCNode *pSender)
    {
        CCLog("Removing & Cleaning Up All Children");
        //NFHACK Need to somehow trigger parent that we are done scrolling
        //CCLayer::removeAllChildrenWithCleanup(true);
    }
    
    void CCScrollMenu::onExit()
    {
        m_eState = kCCScrollMenuStateWaiting;
        CCLayer::onExit();
    }

	//Menu - Events
	void CCScrollMenu::registerWithTouchDispatcher()
	{
		CCTouchDispatcher::sharedDispatcher()->addTargetedDelegate(this, kCCMenuTouchPriority, true);
	}

	bool CCScrollMenu::ccTouchBegan(CCTouch* touch, CCEvent* event)
	{
        CCLog("ccTouchBegan");
        if(m_eState != kCCScrollMenuStateTrackingTouch){
            CCObject* pObject = NULL;
            //NFHack evidently this works to identify the same touch, but it is dangerous a hash would be better
            m_TrackedTouchId = reinterpret_cast<unsigned int>(touch);
            CCARRAY_FOREACH(m_pChildren, pObject)
            {
                CCNode* pChild = dynamic_cast<CCNode*>(pObject);
                if (pChild)
                {
                    pChild->stopAllActions();
                }
            }
            m_eState = kCCScrollMenuStateTrackingTouch;
        }

        return true;
	}


	void CCScrollMenu::ccTouchEnded(CCTouch *touch, CCEvent* event)
	{
        CCLog("ccTouchEnded");
        if(m_eState == kCCScrollMenuStateTrackingTouch && m_TrackedTouchId == reinterpret_cast<unsigned int>(touch))
        {
            startScrollingUp();
            m_eState = kCCScrollMenuStateWaiting;
            m_TrackedTouchId = 0;
        }
	}

	void CCScrollMenu::ccTouchCancelled(CCTouch *touch, CCEvent* event)
	{
        CCLog("ccTouchCancelled");
        ccTouchCancelled(touch, event); //Im not sure if this is important or not but leaving for the moment
        ccTouchEnded(touch, event);
	}

	void CCScrollMenu::ccTouchMoved(CCTouch* touch, CCEvent* event)
	{
        CCLog("ccTouchMoved");
        if(m_eState == kCCScrollMenuStateTrackingTouch && m_TrackedTouchId == reinterpret_cast<unsigned int>(touch))
        {
            CCPoint cpCurrentPosition = touch->locationInView();
            CCPoint cpPreviousPosition = touch->previousLocationInView();
            CCPoint cpTouchVector = cpPreviousPosition - cpCurrentPosition;
            moveByPosition(cpTouchVector.y);
        }
	}

	// Opacity Protocol

	/** Override synthesized setOpacity to recurse items */
	void CCScrollMenu::setOpacity(GLubyte var)
	{
		m_cOpacity = var;

		if (m_pChildren && m_pChildren->count() > 0)
		{
            CCObject* pObject = NULL;
            CCARRAY_FOREACH(m_pChildren, pObject)
            {
                CCNode* pChild = dynamic_cast<CCNode*>(pObject);
                if (pChild)
                {
                    CCRGBAProtocol *pRGBAProtocol = dynamic_cast<CCRGBAProtocol*>(pChild);
				    if (pRGBAProtocol)
				    {
					    pRGBAProtocol->setOpacity(m_cOpacity);
				    }
                }
            }
		}
	}

	GLubyte CCScrollMenu::getOpacity(void)
	{
		return m_cOpacity;
	}

	void CCScrollMenu::setColor(const ccColor3B& var)
	{
		m_tColor = var;

		if (m_pChildren && m_pChildren->count() > 0)
		{
            CCObject* pObject = NULL;
            CCARRAY_FOREACH(m_pChildren, pObject)
            {
                CCNode* pChild = dynamic_cast<CCNode*>(pObject);
                if (pChild)
                {
                    CCRGBAProtocol *pRGBAProtocol = dynamic_cast<CCRGBAProtocol*>(pChild);
                    if (pRGBAProtocol)
                    {
                    	pRGBAProtocol->setColor(m_tColor);
                    }
                }
            }
		}
	}

	const ccColor3B& CCScrollMenu::getColor(void)
	{
		return m_tColor;
	}
}

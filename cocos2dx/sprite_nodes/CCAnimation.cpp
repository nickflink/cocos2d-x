/****************************************************************************
Copyright (c) 2010-2011 cocos2d-x.org
Copyright (c) 2008-2010 Ricardo Quesada
Copyright (c) 2011      Zynga Inc.

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
#include "CCAnimation.h"
#include "CCTextureCache.h"
#include "CCTexture2D.h"
#include "ccMacros.h"
#include "CCSpriteFrame.h"
#include "CCZone.h"

NS_CC_BEGIN

CCAnimationFrame::CCAnimationFrame()
: m_pSpriteFrame(NULL)
, m_fDelayUnits(0.0f)
, m_pUserInfo(NULL)
{

}

bool CCAnimationFrame::initWithSpriteFrame(CCSpriteFrame* spriteFrame, float delayUnits, CCObjectDictionary* userInfo)
{
	setSpriteFrame(spriteFrame);
	setDelayUnits(delayUnits);
	setUserInfo(userInfo);

	return true;
}

CCAnimationFrame::~CCAnimationFrame()
{    
	CCLOGINFO( "cocos2d: deallocing %s", this);

	CC_SAFE_RELEASE(m_pSpriteFrame);
	CC_SAFE_RELEASE(m_pUserInfo);
}

CCObject* CCAnimationFrame::copyWithZone(CCZone* pZone)
{
	CCZone* pNewZone = NULL;
	CCAnimationFrame* pCopy = NULL;
	if(pZone && pZone->m_pCopyObject) 
	{
		//in case of being called at sub class
		pCopy = (CCAnimationFrame*)(pZone->m_pCopyObject);
	}
	else
	{
		pCopy = new CCAnimationFrame();
		pZone = pNewZone = new CCZone(pCopy);
	}

	pCopy->initWithSpriteFrame((CCSpriteFrame*)m_pSpriteFrame->copy()->autorelease(),
		m_fDelayUnits, (CCObjectDictionary*)m_pUserInfo->copy()->autorelease());

	CC_SAFE_DELETE(pNewZone);
	return pCopy;
}

// implementation of CCAnimation

CCAnimation* CCAnimation::animation(void)
{
	CCAnimation *pAnimation = new CCAnimation();
	pAnimation->init();
	pAnimation->autorelease();

	return pAnimation;
} 

CCAnimation* CCAnimation::animationWithSpriteFrames(CCMutableArray<CCSpriteFrame*> *frames)
{
	CCAnimation *pAnimation = new CCAnimation();
	pAnimation->initWithSpriteFrames(frames);
	pAnimation->autorelease();

	return pAnimation;
}

CCAnimation* CCAnimation::animationWithSpriteFrames(CCMutableArray<CCSpriteFrame*> *frames, float delay)
{
	CCAnimation *pAnimation = new CCAnimation();
	pAnimation->initWithSpriteFrames(frames, delay);
	pAnimation->autorelease();

	return pAnimation;
}

CCAnimation* CCAnimation::animationWithAnimationFrames(CCMutableArray<CCAnimationFrame*>* arrayOfSpriteFrameNames, float delayPerUnit, unsigned int loops)
{
	CCAnimation *pAnimation = new CCAnimation();
	pAnimation->initWithAnimationFrames(arrayOfSpriteFrameNames, delayPerUnit, loops);
	pAnimation->autorelease();
	return pAnimation;
}

bool CCAnimation::init()
{
	return initWithSpriteFrames(NULL, 0.0f);
}

bool CCAnimation::initWithSpriteFrames(CCMutableArray<CCSpriteFrame*>* pFrames)
{
	return initWithSpriteFrames(pFrames, 0.0f);
}

bool CCAnimation::initWithSpriteFrames(CCMutableArray<CCSpriteFrame*> *pFrames, float delay)
{
	m_uLoops = 1;
	m_fDelayPerUnit = delay;
	CCMutableArray<CCAnimationFrame*>* pTmpFrames = new CCMutableArray<CCAnimationFrame*>();
	pTmpFrames->autorelease();
	setFrames(pTmpFrames);

	if (pFrames != NULL)
	{
		for(CCMutableArray<CCSpriteFrame*>::CCMutableArrayIterator it = pFrames->begin(); it != pFrames->end(); ++it)
		{
			CCSpriteFrame* frame = *it;
			CCAnimationFrame *animFrame = new CCAnimationFrame();
			animFrame->initWithSpriteFrame(frame, 1, NULL);
			m_pFrames->addObject(animFrame);
			animFrame->release();

			m_fTotalDelayUnits++;
		}
	}

	return true;
}

bool CCAnimation::initWithAnimationFrames(CCMutableArray<CCAnimationFrame*>* arrayOfAnimationFrames, float delayPerUnit, unsigned int loops)
{
	m_fDelayPerUnit = delayPerUnit;
	m_uLoops = loops;

	setFrames(CCMutableArray<CCAnimationFrame*>::arrayWithArray(arrayOfAnimationFrames));

	for( CCMutableArray<CCAnimationFrame*>::CCMutableArrayIterator it = m_pFrames->begin(); it != m_pFrames->end(); ++it )
	{
		CCAnimationFrame *animFrame = *it;
		m_fTotalDelayUnits += animFrame->getDelayUnits();
	}
	return true;
}

CCAnimation::CCAnimation()
: m_fTotalDelayUnits(0.0f)
, m_fDelayPerUnit(0.0f)
, m_fDuration(0.0f)
, m_pFrames(NULL)
, m_bRestoreOriginalFrame(false)
, m_uLoops(0)
{

}

CCAnimation::~CCAnimation(void)
{
	CCLOGINFO("cocos2d, deallocing %p", this);
	CC_SAFE_RELEASE(m_pFrames);
}

void CCAnimation::addSpriteFrame(CCSpriteFrame *pFrame)
{
	CCAnimationFrame *animFrame = new CCAnimationFrame();
	animFrame->initWithSpriteFrame(pFrame, 1.0f, NULL);
	m_pFrames->addObject(animFrame);
	animFrame->release();

	// update duration
	m_fTotalDelayUnits++;
}

void CCAnimation::addSpriteFrameWithFileName(const char *pszFileName)
{
	CCTexture2D *pTexture = CCTextureCache::sharedTextureCache()->addImage(pszFileName);
	CCRect rect = CCRectZero;
	rect.size = pTexture->getContentSize();
	CCSpriteFrame *pFrame = CCSpriteFrame::frameWithTexture(pTexture, rect);
	addSpriteFrame(pFrame);
}

void CCAnimation::addSpriteFrameWithTexture(CCTexture2D *pobTexture, const CCRect& rect)
{
	CCSpriteFrame *pFrame = CCSpriteFrame::frameWithTexture(pobTexture, rect);
	addSpriteFrame(pFrame);
}

float CCAnimation::getDuration(void)
{
	return m_fTotalDelayUnits * m_fDelayPerUnit;
}

CCObject* CCAnimation::copyWithZone(CCZone* pZone)
{
	CCZone* pNewZone = NULL;
	CCAnimation* pCopy = NULL;
	if(pZone && pZone->m_pCopyObject) 
	{
		//in case of being called at sub class
		pCopy = (CCAnimation*)(pZone->m_pCopyObject);
	}
	else
	{
		pCopy = new CCAnimation();
		pZone = pNewZone = new CCZone(pCopy);
	}

	pCopy->initWithAnimationFrames(m_pFrames, m_fDelayPerUnit, m_uLoops);
	pCopy->setRestoreOriginalFrame(m_bRestoreOriginalFrame);

	CC_SAFE_DELETE(pNewZone);
	return pCopy;
}

NS_CC_END
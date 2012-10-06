
#include "CCSlider.h"
#include "CCScriptSupport.h"

namespace cocos2d
{
    
	CCSlider::CCSlider():m_minValue(0),m_maxValue(0),m_value(0),m_target(NULL),m_selector(NULL),m_nScriptHandler(0),m_trackingTouch(false),m_trackTouchOutsideContent(false),m_evaluateFirstTouch(false),m_enabled(true),
    m_width(0),m_height(0),m_track(NULL),m_knob(NULL)
    {
        // do nothing
    }
    
    CCSlider* CCSlider::slider(const char *trackFile, const char *knobFile)
    {
        CCSlider* slider = CCSlider::sliderWithFiles(trackFile, knobFile, NULL, NULL);
        return slider;
    }
    
	CCSlider* CCSlider::sliderWithFiles(const char* trackFile, const char* knobFile, CCObject* target, SEL_MenuHandler selector)
	{
		CCSlider* slider = new CCSlider();
		if (slider->initWithFiles(trackFile, knobFile))
		{
            slider->m_target = target;
			slider->m_selector = selector;
			slider->autorelease();
			return slider;
		}
		else
		{
			CC_SAFE_DELETE(slider);
			return NULL;
		}
	}
    
	CCSlider* CCSlider::sliderWithSprites(CCSprite* trackSprite, CCSprite* knobSprite, CCObject* target, SEL_MenuHandler selector)
	{
		CCSlider* slider = new CCSlider();
		if (slider->initWithSprites(trackSprite, knobSprite))
		{
            slider->m_target = target;
			slider->m_selector = selector;
			slider->autorelease();
			return slider;
		}
		else
		{
			CC_SAFE_DELETE(slider);
			return NULL;
		}
	}
    
	//! init from files
	bool CCSlider::initWithFiles(const char* trackFile, const char* knobFile)
	{
		//if (CCNode::init())
		{
			m_track = CCSprite::spriteWithFile(trackFile);
			m_knob = CCSprite::spriteWithFile(knobFile);
			if (!m_track || !m_knob) return false;
                        
			m_minValue = 0;
			m_maxValue = 100;
            
			// NOTE: Attention the addChild sequence
			addChild(m_track); 
			addChild(m_knob);
            
			m_width = m_track->getContentSize().width;
			m_height = 45;
            
			m_enabled = false;
            
			return true;
		}
		return false;
	}
    
	//! init from sprites
	bool CCSlider::initWithSprites(CCSprite* trackSprite, CCSprite* knobSprite)
	{
		//if (CCLayer::init())
		{
			m_track = trackSprite;
			m_knob = knobSprite;
			if (!m_track || !m_knob) return false;
            
			m_minValue = 0;
			m_maxValue = 100;
            
			// NOTE: Attention the addChild sequence
			addChild(m_track); 
			addChild(m_knob);
            
			m_width = m_track->getContentSize().width;
			m_height = 45;
            
			m_enabled = false;
            
			return true;
		}
		//return false;
	}
    
	void CCSlider::setValue(float value)
	{
		if (!m_enabled) return;
        
		// clamp values
		value = value < m_minValue ? m_minValue : value;
		value = value > m_maxValue ? m_maxValue : value;
        
		m_value = value;
		float x = (m_value - m_minValue) / (m_maxValue - m_minValue) * m_width;
		m_knob->setPosition(ccp(x - m_width * 0.5f, m_knob->getPosition().y));
	}
    
	bool CCSlider::ccTouchBegan(CCTouch* pTouch, CCEvent *pEvent)
	{
		if (!getIsVisible() || !m_enabled) return false;
        
		CCPoint touchPoint = getTouchPoint(pTouch);
        
		if (containsPoint(touchPoint))
		{
			if (m_evaluateFirstTouch) 
			{
				setValueByX(convertToNodeSpace(touchPoint).x);
				m_trackingTouch = true;
				return true;
			}
			else 
			{
				m_trackingTouch = knobTouched(touchPoint);
				return m_trackingTouch;
			}
            
		}
        
		return false;
	}
    
	void CCSlider::ccTouchMoved(CCTouch* pTouch, CCEvent *pEvent)
	{
		if (!getIsVisible() || !m_enabled) return;
        
		if (m_trackingTouch)
		{
			CCPoint touchPos = getTouchPoint(pTouch);
            
			if (m_trackTouchOutsideContent) 
			{
				setValueByX(convertToNodeSpace(touchPos).x);
			}
			else 
			{
				if(containsPoint(touchPos))
				{
					setValueByX(convertToNodeSpace(touchPos).x);
				}
				else 
				{
					m_trackingTouch = false;
				}
			}
		}
	}
    
	void CCSlider::ccTouchEnded(CCTouch* pTouch, CCEvent *pEvent)
	{
		m_trackingTouch = false;
	}
    
	void CCSlider::ccTouchCancelled(CCTouch *pTouch, CCEvent *pEvent)
	{
		m_trackingTouch = false;
	}
    
	void CCSlider::onEnter()
	{
		CCNode::onEnter();
		CCTouchDispatcher::sharedDispatcher()->addTargetedDelegate(this, 0, true);
	}
	
	void CCSlider::onExit()
	{
		CCTouchDispatcher::sharedDispatcher()->removeDelegate(this);
		CCNode::onExit();
	}
    
    void CCSlider::registerScriptSlideHandler(int nHandler)
    {
        unregisterScriptSlideHandler();
        m_nScriptHandler = nHandler;
        LUALOG("[LUA] Add CCSlider script handler: %d", m_nScriptHandler);
    }
    
    void CCSlider::unregisterScriptSlideHandler(void)
    {
        if (m_nScriptHandler)
        {
            CCScriptEngineManager::sharedManager()->getScriptEngine()->removeLuaHandler(m_nScriptHandler);
            LUALOG("[LUA] Remove CCSlider script handler: %d", m_nScriptHandler);
            m_nScriptHandler = 0;
        }
    }
    
	// get touch point
	CCPoint CCSlider::getTouchPoint(CCTouch* pTouch)
	{
		CCPoint location = pTouch->locationInView();
		location = CCDirector::sharedDirector()->convertToGL(location);
		return location;
	}
    
	// check contain given point
	bool CCSlider::containsPoint(const CCPoint& point)
	{
		CCPoint pos = convertToNodeSpace(point);
		CCRect rect = CCRectMake(-m_width * 0.5f, -m_height * 0.5f, m_width, m_height); // NOTE: attention here
		if (CCRect::CCRectContainsPoint(rect, pos))
		{
			return true;
		}
		return false;
	}
    
	// set value by x coordinate
	void CCSlider::setValueByX(float xpos)
	{
		xpos = xpos < -m_width * 0.5f ? - m_width * 0.5f : xpos;
		xpos = xpos > m_width * 0.5f ? m_width * 0.5f : xpos;
		m_knob->setPosition(ccp(xpos, m_knob->getPosition().y));
		m_value = (xpos + m_width * 0.5f) / m_width * (m_maxValue - m_minValue) + m_minValue;
		// do callback
        performCallback();
	}
    
	bool CCSlider::knobTouched(const CCPoint& point)
	{
		if (containsPoint(point)) 
		{
			CCPoint pos = convertToNodeSpace(point);
			return  fabs(m_knob->getPosition().x - pos.x) < m_knob->getContentSize().width * 0.5f;
		}
		return false;
	}

	// Opacity Protocol
    
	/** Override synthesized setOpacity to recurse items */
	void CCSlider::setOpacity(GLubyte var)
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

	GLubyte CCSlider::getOpacity(void)
	{
		return m_cOpacity;
	}

	void CCSlider::setColor(const ccColor3B& var)
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

	const ccColor3B& CCSlider::getColor(void)
	{
		return m_tColor;
	}
    
    void CCSlider::performCallback()
    {
        if (m_target)
		{
			(m_target->*m_selector)(this);
		}
        // do the lua callback
        if (m_nScriptHandler)
        {
            CCScriptEngineProtocol* pEngine = CCScriptEngineManager::sharedManager()->getScriptEngine();
            pEngine->executeFunctionWithFloatData(m_nScriptHandler, getValue());
        }
    }
}

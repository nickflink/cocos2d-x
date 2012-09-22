/*!
 \file CCSlider.h
 \brief simple implementation of slider for cocos2d-x
 */

#ifndef __CCSLIDER_H__
#define __CCSLIDER_H__

#include "cocos2d.h"

USING_NS_CC;

namespace cocos2d
{
    
	//! NOTE: now CCSlider is just a simple node with touch handler
	class CCSlider : public CCNode, public CCTouchDelegate, public CCRGBAProtocol
	{
        /** Color: conforms with CCRGBAProtocol protocol */
		CC_PROPERTY_PASS_BY_REF(ccColor3B, m_tColor, Color);
		/** Opacity: conforms with CCRGBAProtocol protocol */
		CC_PROPERTY(GLubyte, m_cOpacity, Opacity);
        virtual void setIsOpacityModifyRGB(bool bValue) {CC_UNUSED_PARAM(bValue);}
	    virtual bool getIsOpacityModifyRGB(void) { return false;}
	public:
		//! static method to get the sliders
        static CCSlider* slider(const char *trackFile, const char *knobFile);
		static CCSlider* sliderWithFiles(const char* trackFile, const char* knobFile, CCObject* target, SEL_MenuHandler selector);
		static CCSlider* sliderWithSprites(CCSprite* trackSprite, CCSprite* knobSprite, CCObject* target, SEL_MenuHandler selector);
	public:
		//! default constructor
		CCSlider();
		//! init from files
		bool initWithFiles(const char* trackFile, const char* knobFile);
		//! init from sprites
		bool initWithSprites(CCSprite* trackSprite, CCSprite* knobSprite);
        
		//! get horizontal padding
		float getHorizontalPadding() const { return (m_width - m_track->getContentSize().width) * 0.5f; }
		//! set horizontal padding
		void setHorizontalPadding(float padding) { m_width = m_track->getContentSize().width + 2 * padding; }
		//! get slider value
		float getValue() const { return m_value; }
		//! set slider value
		void setValue(float value);
        
		//! normal setters & getters
		//////////////////////////////////////////////////////////////////////////
		float getMinValue() const { return m_minValue; }
		void setMinValue(float minValue) { m_minValue = minValue; }
		float getMaxValue() const { return m_maxValue; }
		void setMaxValue(float maxValue) { m_maxValue = maxValue; }
		bool getTrackTouchOutsideContent() const { return m_trackTouchOutsideContent; }
		void setTrackTouchOutsideContent(bool track) { m_trackTouchOutsideContent = track; }
		float getHeight() const { return m_height; }
		void setHeight(float height) { m_height = height; }
		bool getEvaluateFirstTouch() const { return m_evaluateFirstTouch; }
		void setEvaluateFirstTouch(bool eval) { m_evaluateFirstTouch = eval; }
		bool getEnabled() const { return m_enabled; }
		void setEnabled(bool enabled) { m_enabled = enabled; }
        //////////////////////////////////////////////////////////////////////////
        
		//! enter & exit method
		virtual void onEnter();
		virtual void onExit();
        
		//! touches handlers
		virtual bool ccTouchBegan(CCTouch *pTouch, CCEvent *pEvent);
		virtual void ccTouchMoved(CCTouch *pTouch, CCEvent *pEvent);
		virtual void ccTouchEnded(CCTouch *pTouch, CCEvent *pEvent);
		virtual void ccTouchCancelled(CCTouch *pTouch, CCEvent *pEvent);

        //! callback handlers
        void registerScriptSlideHandler(int nHandler);
        void unregisterScriptSlideHandler(void);

	protected:
		// get touch point by touches set
		CCPoint getTouchPoint(CCTouch* touch);
		// check contain given point
		bool containsPoint(const CCPoint& point);
		// set value by x coordinate
		void setValueByX(float xpos);
		// check if knob is touched
		bool knobTouched(const CCPoint& point);
        // notify listeners
        void performCallback();

	protected:
		float m_minValue; //< min value
		float m_maxValue; //< max value
		float m_value; //< current value
        
		CCObject* m_target; //< target node
		SEL_MenuHandler m_selector; //< target selector
        int m_nScriptHandler; //< for use with lua only
        
		bool m_trackingTouch; //< indicate if the slider is tracking touch
		bool m_trackTouchOutsideContent; //< indicate if the touch is outside of the content
		bool m_evaluateFirstTouch; //< first touch flag
		bool m_enabled; //< enable flag
        
		float m_width; //< width of the slider
		float m_height; //< height of the slider
        
		CCSprite* m_track; //< track sprite
		CCSprite* m_knob; //< knob sprite
	};
    
} // end of namespace cocos2dExt

#endif // __CCSLIDER_H__

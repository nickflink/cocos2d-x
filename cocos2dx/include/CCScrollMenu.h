/****************************************************************************
Copyright (c) 2012 gogododo
Copyright (c) 2012 Nicholas Flink

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
#ifndef __CCSCROLLLAYER_H_
#define __CCSCROLLLAYER_H_

#include "CCMenu.h"

namespace cocos2d{
    
    class CCLabelBMFont;

	typedef enum  
	{
        kCCScrollMenuStateWaiting,
        kCCScrollMenuStateTrackingTouch
    } tCCScrollMenuState;

    enum {
        //* priority used by the menu
        kCCScrollMenuTouchPriority = -128,
    };

	/** @brief A CCScrollMenu
	* 
	* Features and Limitation:
	*  - Scrolling strings works well for credits
	*/
	class CC_DLL CCScrollMenu : public CCMenu
	{
		/** Color: conforms with CCRGBAProtocol protocol */
		CC_PROPERTY_PASS_BY_REF(ccColor3B, m_tColor, Color);
		/** Opacity: conforms with CCRGBAProtocol protocol */
		CC_PROPERTY(GLubyte, m_cOpacity, Opacity);
	public:
		CCScrollMenu()
			: m_cOpacity(0)
            , m_pListener(NULL)			
            , m_pfnSelector(NULL)
            , m_fScrollSpeed(100.0f)//Pixels/Sec
            , m_fMenuHeight(0.0f)//Sumation of CCMenuItem Bounding Boxes
            , m_ppLabels(NULL)
            , m_ActiveLabel(0)
            , m_NumLabels(0)
            , m_TrackedTouchId(0)
		{}
		virtual ~CCScrollMenu()
        {
            delete [] m_ppLabels;

        }

        /** creates an empty CCScrollMenu */
        static CCScrollMenu* node();
        
        /** creates a CCScrollMenu with it's items */
        static CCScrollMenu* scrollMenuWithItems(CCMenuItem* item, ...);
        static CCScrollMenu* scrollMenuWithArrayLua(CCArray *items);

        
		/** creates a CCScrollMenu with it's item, then use addChild() to add 
         * other items. It is used for script, it can't init with undetermined
         * number of variables.
         */
		static CCScrollMenu* scrollMenuWithItem(CCMenuItem* item);
                
		/** initializes a CCScrollMenu with it's items */
		bool initWithItems(CCMenuItem* item, va_list args);
        void startScrollingUp();
        void moveByPosition(float delta);
        void triggerLastOffStage(CCNode *pSender);
        
        /** Helpers **/
        CCPoint getStartPoint(CCNode *node);
        CCPoint getFinishPoint(CCNode *node);

		//super methods
		virtual void addChild(CCNode * child, int zOrder);
		virtual void addChild(CCNode * child, int zOrder, int tag);
		virtual void registerWithTouchDispatcher();

        /**
        @brief For phone event handle functions
        */
		virtual bool ccTouchBegan(CCTouch* touch, CCEvent* event);
		virtual void ccTouchEnded(CCTouch* touch, CCEvent* event);
		virtual void ccTouchCancelled(CCTouch *touch, CCEvent* event);
		virtual void ccTouchMoved(CCTouch* touch, CCEvent* event);

        /**
        @since v0.99.5
        override onExit
        */
        virtual void onExit();

		virtual void setIsOpacityModifyRGB(bool bValue) {CC_UNUSED_PARAM(bValue);}
	    virtual bool getIsOpacityModifyRGB(void) { return false;}

	protected:
//		CCScrollMenu* itemForTouch(CCTouch * touch);
        tCCScrollMenuState m_eState;
        SEL_CallFuncO       m_pfnSelector;
        CCObject           *m_pListener;
        CCLabelBMFont     **m_ppLabels;
        const char        **m_ppStrings;
        float               m_fScrollSpeed;
        float               m_fMenuHeight;
        unsigned int        m_ActiveLabel;
        unsigned int        m_NumLabels;
        unsigned int        m_TrackedTouchId;


	};
}

#endif//__CCMENU_H_

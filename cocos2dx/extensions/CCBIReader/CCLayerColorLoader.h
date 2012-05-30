#ifndef _CCLAYERCOLOR_LOADER_H_
#define _CCLAYERCOLOR_LOADER_H_

#include "CCLayerLoader.h"

NS_CC_EXT_BEGIN

/* Forward declaration. */
class CCBReader;

class CCLayerColorLoader : public CCLayerLoader {
    protected:
        virtual cocos2d::CCLayerColor * createCCNode(cocos2d::CCNode *, CCBReader *);

        virtual void onHandlePropTypeColor3(cocos2d::CCNode *, cocos2d::CCNode *, std::string, cocos2d::ccColor3B, CCBReader *);
        virtual void onHandlePropTypeByte(CCNode *, CCNode *, std::string, unsigned char, CCBReader *);
        virtual void onHandlePropTypeBlendFunc(CCNode *, CCNode *, std::string, ccBlendFunc, CCBReader *);
};

NS_CC_EXT_END

#endif

#ifndef _SPRITETESTLAYERLOADER_H_
#define _SPRITETESTLAYERLOADER_H_

#include "SpriteTestLayer.h"

/* Forward declaration. */
class CCBReader;

<<<<<<< HEAD
class SpriteTestLayerLoader : public cocos2d::extension::LayerLoader {
=======
class SpriteTestLayerLoader : public cocosbuilder::LayerLoader {
>>>>>>> merging
    public:
        CCB_STATIC_NEW_AUTORELEASE_OBJECT_METHOD(SpriteTestLayerLoader, loader);

    protected:
        CCB_VIRTUAL_NEW_AUTORELEASE_CREATECCNODE_METHOD(SpriteTestLayer);
};

#endif

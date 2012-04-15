// local import
#include "Texture2dTest.h"
#include "../testResource.h"

enum {
	kTagLabel = 1,
	kTagSprite1 = 2,
	kTagSprite2 = 3,
};

#define TEST_CASE_COUNT     34

static int sceneIdx=-1;
CCLayer* createTextureTest(int index)
{
    CCLayer* pLayer = NULL;

    switch (index)
    {
    case 0:
        pLayer = new TextureAlias(); break;
    case 1:
        pLayer = new TextureMipMap(); break;
    case 2:
        pLayer = new TexturePVRMipMap(); break;
    case 3:
        pLayer = new TexturePVRMipMap2(); break;
    case 4:
        pLayer = new TexturePVRNonSquare(); break;
    case 5:
        pLayer = new TexturePVRNPOT4444(); break;
    case 6:
        pLayer = new TexturePVRNPOT8888(); break;
    case 7:
        pLayer = new TexturePVR2BPP(); break;
    case 8:
        pLayer = new TexturePVR(); break;
    case 9:
        pLayer = new TexturePVR4BPP(); break;
    case 10:
        pLayer = new TexturePVRRGBA8888(); break;
    case 11:
        pLayer = new TexturePVRBGRA8888(); break;
    case 12:
        pLayer = new TexturePVRRGBA4444(); break;
    case 13:
        pLayer = new TexturePVRRGBA4444GZ(); break;
    case 14:
        pLayer = new TexturePVRRGBA4444CCZ(); break;
    case 15:
        pLayer = new TexturePVRRGBA5551(); break;
    case 16:
        pLayer = new TexturePVRRGB565(); break;
    case 17:
        pLayer = new TexturePVRA8(); break;
    case 18:
        pLayer = new TexturePVRI8(); break;
    case 19:
        pLayer = new TexturePVRAI88(); break;
    case 20:
        pLayer = new TexturePVRBadEncoding(); break;
    case 21:
        pLayer = new TexturePNG(); break;
    case 22:
        pLayer = new TextureJPEG(); break;
    case 23:
        pLayer = new TexturePixelFormat(); break;
    case 24:
        pLayer = new TextureBlend(); break;
    case 25:
        pLayer = new TextureGlClamp(); break;
    case 26:
        pLayer = new TextureGlRepeat(); break;
    case 27:
        pLayer = new TextureSizeTest(); break;
    case 28:
        pLayer = new TextureCache1(); break;
    case 29:
        pLayer = new TexturePVRRGB888(); break;
    case 30:
        pLayer = new TextureAsync(); break;
    case 31:
        pLayer = new TextureDrawAtPoint(); break;
    case 32:
        pLayer = new TextureDrawInRect(); break;
    case 33:
        pLayer = new FileUtilsTest(); break;
    default:
        break;
    }

    if (pLayer)
    {
        pLayer->autorelease();
    }

    return pLayer;
}

CCLayer* nextTextureTest();
CCLayer* backTextureTest();
CCLayer* restartTextureTest();

CCLayer* nextTextureTest()
{
	sceneIdx++;
	sceneIdx = sceneIdx % TEST_CASE_COUNT;

	return createTextureTest(sceneIdx);
}

CCLayer* backTextureTest()
{
	sceneIdx--;
	if( sceneIdx < 0 )
		sceneIdx = TEST_CASE_COUNT -1;	

	return createTextureTest(sceneIdx);
}

CCLayer* restartTextureTest()
{
	return createTextureTest(sceneIdx);
}

//------------------------------------------------------------------
//
// TextureDemo
//
//------------------------------------------------------------------
void TextureDemo::onEnter()
{
    CCLayer::onEnter();

    CCTextureCache::sharedTextureCache()->dumpCachedTextureInfo();
    CCSize s = CCDirector::sharedDirector()->getWinSize();	
    CCLabelTTF *label = CCLabelTTF::labelWithString(title().c_str(), "Arial", 26);
	addChild(label, 1, kTagLabel);
	label->setPosition(ccp(s.width/2, s.height-50));

    std::string strSubtitle = subtitle();
    if(strSubtitle.length())
    {
        CCLabelTTF *l = CCLabelTTF::labelWithString(strSubtitle.c_str(), "Thonburi", 16);
        addChild(l, 1);
        l->setPosition(ccp(s.width/2, s.height-80));
    }

    CCMenuItemImage *item1 = CCMenuItemImage::itemWithNormalImage(s_pPathB1, s_pPathB2, this, menu_selector(TextureDemo::backCallback) );
    CCMenuItemImage *item2 = CCMenuItemImage::itemWithNormalImage(s_pPathR1, s_pPathR2, this, menu_selector(TextureDemo::restartCallback) );
    CCMenuItemImage *item3 = CCMenuItemImage::itemWithNormalImage(s_pPathF1, s_pPathF2, this, menu_selector(TextureDemo::nextCallback) );
	
    CCMenu *menu = CCMenu::menuWithItems(item1, item2, item3, NULL);
	menu->setPosition(CCPointZero);
	item1->setPosition(ccp( s.width/2 - 100,30));
	item2->setPosition(ccp( s.width/2, 30));
	item3->setPosition(ccp( s.width/2 + 100,30));
	addChild(menu, 1);	
    CCTextureCache::sharedTextureCache()->dumpCachedTextureInfo();
}

TextureDemo::~TextureDemo()
{
    CCTextureCache::sharedTextureCache()->removeUnusedTextures();
    CCTextureCache::sharedTextureCache()->dumpCachedTextureInfo();
}

void TextureDemo::restartCallback(CCObject* pSender)
{
    CCScene *s = new TextureTestScene();
	s->addChild(restartTextureTest());
    CCDirector::sharedDirector()->replaceScene(s);
    s->autorelease();
}

void TextureDemo::nextCallback(CCObject* pSender)
{
    CCScene *s = new TextureTestScene();
    s->addChild(nextTextureTest());
    CCDirector::sharedDirector()->replaceScene(s);
    s->autorelease();
}

void TextureDemo::backCallback(CCObject* pSender)
{
    CCScene *s = new TextureTestScene();
    s->addChild(backTextureTest());
    CCDirector::sharedDirector()->replaceScene(s);
    s->autorelease();
}

std::string TextureDemo::title()
{
	return "No title";
}

std::string TextureDemo::subtitle()
{
    return "";
}

//------------------------------------------------------------------
//
// TexturePNG
//
//------------------------------------------------------------------
void TexturePNG::onEnter()
{
    TextureDemo::onEnter();	

    CCSize s = CCDirector::sharedDirector()->getWinSize();

    CCSprite *img = CCSprite::spriteWithFile("Images/test_image.png");
	img->setPosition(ccp( s.width/2.0f, s.height/2.0f));
	addChild(img);
    CCTextureCache::sharedTextureCache()->dumpCachedTextureInfo();
}

std::string TexturePNG::title()
{
	return "PNG Test";
}

//------------------------------------------------------------------
//
// TextureJPEG
//
//------------------------------------------------------------------
void TextureJPEG::onEnter()
{
	TextureDemo::onEnter();
    CCSize s = CCDirector::sharedDirector()->getWinSize();
	
    CCSprite *img = CCSprite::spriteWithFile("Images/test_image.jpeg");
	img->setPosition(ccp( s.width/2.0f, s.height/2.0f));
	addChild(img);
	CCTextureCache::sharedTextureCache()->dumpCachedTextureInfo();
}

std::string TextureJPEG::title()
{
	return "JPEG Test";
}

//------------------------------------------------------------------
//
// TextureMipMap
//
//------------------------------------------------------------------
void TextureMipMap::onEnter()
{
    TextureDemo::onEnter();
	CCSize s = CCDirector::sharedDirector()->getWinSize();

    CCTexture2D *texture0 = CCTextureCache::sharedTextureCache()->addImage("Images/grossini_dance_atlas.png");
	texture0->generateMipmap();
	ccTexParams texParams = { GL_LINEAR_MIPMAP_LINEAR, GL_LINEAR, GL_CLAMP_TO_EDGE, GL_CLAMP_TO_EDGE };	
	texture0->setTexParameters(&texParams);

	CCTexture2D *texture1 = CCTextureCache::sharedTextureCache()->addImage("Images/grossini_dance_atlas_nomipmap.png");

    CCSprite *img0 = CCSprite::spriteWithTexture(texture0);
	img0->setTextureRect(CCRectMake(85, 121, 85, 121));
	img0->setPosition(ccp( s.width/3.0f, s.height/2.0f));
	addChild(img0);

    CCSprite *img1 = CCSprite::spriteWithTexture(texture1);
	img1->setTextureRect(CCRectMake(85, 121, 85, 121));
	img1->setPosition(ccp( 2*s.width/3.0f, s.height/2.0f));
	addChild(img1);
	
	
    CCEaseOut* scale1 = CCEaseOut::actionWithAction(CCScaleBy::actionWithDuration(4, 0.01f), 3);
	CCActionInterval* sc_back = scale1->reverse();
	
	CCEaseOut* scale2 = (CCEaseOut*) (scale1->copy());
    scale2->autorelease();
	CCActionInterval* sc_back2 = scale2->reverse();

    img0->runAction(CCRepeatForever::actionWithAction((CCActionInterval*)(CCSequence::actions(scale1, sc_back, NULL))));
    img1->runAction(CCRepeatForever::actionWithAction((CCActionInterval*)(CCSequence::actions(scale2, sc_back2, NULL))));
	CCTextureCache::sharedTextureCache()->dumpCachedTextureInfo();
}

std::string TextureMipMap::title()
{
	return "Texture Mipmap";
}

std::string TextureMipMap::subtitle()
{
	return "Left image uses mipmap. Right image doesn't";
}

//------------------------------------------------------------------
//
// TexturePVRMipMap
// To generate PVR images read this article:
// http://developer.apple.com/iphone/library/qa/qa2008/qa1611.html
//
//------------------------------------------------------------------
void TexturePVRMipMap::onEnter()
{
    TextureDemo::onEnter();
	CCSize s = CCDirector::sharedDirector()->getWinSize();

    CCSprite *imgMipMap = CCSprite::spriteWithFile("Images/logo-mipmap.pvr");
	if( imgMipMap )
    {
	    imgMipMap->setPosition(ccp( s.width/2.0f-100, s.height/2.0f));
		addChild(imgMipMap);

		// support mipmap filtering
		ccTexParams texParams = { GL_LINEAR_MIPMAP_LINEAR, GL_LINEAR, GL_CLAMP_TO_EDGE, GL_CLAMP_TO_EDGE };	
		imgMipMap->getTexture()->setTexParameters(&texParams);
	}

    CCSprite *img = CCSprite::spriteWithFile("Images/logo-nomipmap.pvr");
	if( img )
    {
		img->setPosition(ccp( s.width/2.0f+100, s.height/2.0f));
		addChild(img);

        CCEaseOut* scale1 = CCEaseOut::actionWithAction(CCScaleBy::actionWithDuration(4, 0.01f), 3);
        CCActionInterval* sc_back = scale1->reverse();

        CCEaseOut* scale2 = (CCEaseOut*) (scale1->copy());
        scale2->autorelease();
        CCActionInterval* sc_back2 = scale2->reverse();
		
        imgMipMap->runAction(CCRepeatForever::actionWithAction((CCActionInterval*)(CCSequence::actions(scale1, sc_back, NULL))));
        img->runAction(CCRepeatForever::actionWithAction((CCActionInterval*)(CCSequence::actions(scale2, sc_back2, NULL))));
	}
	CCTextureCache::sharedTextureCache()->dumpCachedTextureInfo();
}

std::string TexturePVRMipMap::title()
{
	return "PVRTC MipMap Test";
}
std::string TexturePVRMipMap::subtitle()
{
	return "Left image uses mipmap. Right image doesn't";
}

//------------------------------------------------------------------
//
// TexturePVRMipMap2
//
//------------------------------------------------------------------
void TexturePVRMipMap2::onEnter()
{
    TextureDemo::onEnter();
	CCSize s = CCDirector::sharedDirector()->getWinSize();
	
    CCSprite *imgMipMap = CCSprite::spriteWithFile("Images/test_image_rgba4444_mipmap.pvr");
	imgMipMap->setPosition(ccp( s.width/2.0f-100, s.height/2.0f));
	addChild(imgMipMap);
	
	// support mipmap filtering
	ccTexParams texParams = { GL_LINEAR_MIPMAP_LINEAR, GL_LINEAR, GL_CLAMP_TO_EDGE, GL_CLAMP_TO_EDGE };	
	imgMipMap->getTexture()->setTexParameters(&texParams);

    CCSprite *img = CCSprite::spriteWithFile("Images/test_image.png");
	img->setPosition(ccp( s.width/2.0f+100, s.height/2.0f));
	addChild(img);
	
    CCEaseOut* scale1 = CCEaseOut::actionWithAction(CCScaleBy::actionWithDuration(4, 0.01f), 3);
    CCActionInterval* sc_back = scale1->reverse();

    CCEaseOut* scale2 = (CCEaseOut*) (scale1->copy());
    scale2->autorelease();
    CCActionInterval* sc_back2 = scale2->reverse();
	
    imgMipMap->runAction(CCRepeatForever::actionWithAction((CCActionInterval*)(CCSequence::actions(scale1, sc_back, NULL))));
    img->runAction(CCRepeatForever::actionWithAction((CCActionInterval*)(CCSequence::actions(scale2, sc_back2, NULL))));
	CCTextureCache::sharedTextureCache()->dumpCachedTextureInfo();
}

std::string TexturePVRMipMap2::title()
{
	return "PVR MipMap Test #2";
}

std::string TexturePVRMipMap2::subtitle()
{
	return "Left image uses mipmap. Right image doesn't";
}

//------------------------------------------------------------------
//
// TexturePVR2BPP
// Image generated using PVRTexTool:
// http://www.imgtec.com/powervr/insider/powervr-pvrtextool.asp
//
//------------------------------------------------------------------
void TexturePVR2BPP::onEnter()
{
    TextureDemo::onEnter();
	CCSize s = CCDirector::sharedDirector()->getWinSize();

    CCSprite *img = CCSprite::spriteWithFile("Images/test_image_pvrtc2bpp.pvr");
	
	if( img )
    {
		img->setPosition(ccp( s.width/2.0f, s.height/2.0f));
		addChild(img);
	}
	CCTextureCache::sharedTextureCache()->dumpCachedTextureInfo();
}

std::string TexturePVR2BPP::title()
{
	return "PVR TC 2bpp Test";
}

//------------------------------------------------------------------
//
// TexturePVR
// To generate PVR images read this article:
// http://developer.apple.com/iphone/library/qa/qa2008/qa1611.html
//
//------------------------------------------------------------------
void TexturePVR::onEnter()
{
    TextureDemo::onEnter();
	CCSize s = CCDirector::sharedDirector()->getWinSize();
	
    CCSprite *img = CCSprite::spriteWithFile("Images/test_image.pvr");
	
	if( img )
    {
		img->setPosition(ccp( s.width/2.0f, s.height/2.0f));
		addChild(img);
	}
    else
    {
        CCLog("This test is not supported.");
	}
	CCTextureCache::sharedTextureCache()->dumpCachedTextureInfo();
	
}

std::string TexturePVR::title()
{
	return "PVR TC 4bpp Test #2";
}

//------------------------------------------------------------------
//
// TexturePVR4BPP
// Image generated using PVRTexTool:
// http://www.imgtec.com/powervr/insider/powervr-pvrtextool.asp
//
//------------------------------------------------------------------
void TexturePVR4BPP::onEnter()
{
    TextureDemo::onEnter();
	CCSize s = CCDirector::sharedDirector()->getWinSize();

    CCSprite *img = CCSprite::spriteWithFile("Images/test_image_pvrtc4bpp.pvr");
	
	if( img )
    {
		img->setPosition(ccp( s.width/2.0f, s.height/2.0f));
		addChild(img);
	}
    else
    {
		CCLog("This test is not supported in cocos2d-mac");
	}
	CCTextureCache::sharedTextureCache()->dumpCachedTextureInfo();
}

std::string TexturePVR4BPP::title()
{
	return "PVR TC 4bpp Test #3";
}

//------------------------------------------------------------------
//
// TexturePVRRGBA8888
// Image generated using PVRTexTool:
// http://www.imgtec.com/powervr/insider/powervr-pvrtextool.asp
//
//------------------------------------------------------------------
void TexturePVRRGBA8888::onEnter()
{
    TextureDemo::onEnter();
	CCSize s = CCDirector::sharedDirector()->getWinSize();

    CCSprite *img = CCSprite::spriteWithFile("Images/test_image_rgba8888.pvr");
	img->setPosition(ccp( s.width/2.0f, s.height/2.0f));
	addChild(img);
	CCTextureCache::sharedTextureCache()->dumpCachedTextureInfo();
}

std::string TexturePVRRGBA8888::title()
{
	return "PVR + RGBA  8888 Test";
}

//------------------------------------------------------------------
//
// TexturePVRBGRA8888
// Image generated using PVRTexTool:
// http://www.imgtec.com/powervr/insider/powervr-pvrtextool.asp
//
//------------------------------------------------------------------
void TexturePVRBGRA8888::onEnter()
{
	TextureDemo::onEnter();
	CCSize s = CCDirector::sharedDirector()->getWinSize();
	
    CCSprite *img = CCSprite::spriteWithFile("Images/test_image_bgra8888.pvr");
	if( img )
    {
		img->setPosition(ccp( s.width/2.0f, s.height/2.0f));
		addChild(img);
	}
    else
    {
		CCLog("BGRA8888 images are not supported");
	}
	CCTextureCache::sharedTextureCache()->dumpCachedTextureInfo();
}

std::string TexturePVRBGRA8888::title()
{
	return "PVR + BGRA 8888 Test";
}

//------------------------------------------------------------------
//
// TexturePVRRGBA5551
// Image generated using PVRTexTool:
// http://www.imgtec.com/powervr/insider/powervr-pvrtextool.asp
//
//------------------------------------------------------------------
void TexturePVRRGBA5551::onEnter()
{
	TextureDemo::onEnter();
	CCSize s = CCDirector::sharedDirector()->getWinSize();
	
    CCSprite *img = CCSprite::spriteWithFile("Images/test_image_rgba5551.pvr");
	img->setPosition(ccp( s.width/2.0f, s.height/2.0f));
	addChild(img);
	CCTextureCache::sharedTextureCache()->dumpCachedTextureInfo();
}

std::string TexturePVRRGBA5551::title()
{
	return "PVR + RGBA 5551 Test";
}

//------------------------------------------------------------------
//
// TexturePVRRGBA4444
// Image generated using PVRTexTool:
// http://www.imgtec.com/powervr/insider/powervr-pvrtextool.asp
//
//------------------------------------------------------------------
void TexturePVRRGBA4444::onEnter()
{
    TextureDemo::onEnter();
	CCSize s = CCDirector::sharedDirector()->getWinSize();
	
    CCSprite *img = CCSprite::spriteWithFile("Images/test_image_rgba4444.pvr");
	img->setPosition(ccp( s.width/2.0f, s.height/2.0f));
	addChild(img);
	CCTextureCache::sharedTextureCache()->dumpCachedTextureInfo();
}

std::string TexturePVRRGBA4444::title()
{
	return "PVR + RGBA 4444 Test";
}

//------------------------------------------------------------------
//
// TexturePVRRGBA4444GZ
// Image generated using PVRTexTool:
// http://www.imgtec.com/powervr/insider/powervr-pvrtextool.asp
//
//------------------------------------------------------------------
void TexturePVRRGBA4444GZ::onEnter()
{
    TextureDemo::onEnter();
	CCSize s = CCDirector::sharedDirector()->getWinSize();

#if (CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID)
	// android can not pack .gz file into apk file
    CCSprite *img = CCSprite::spriteWithFile("Images/test_image_rgba4444.pvr");
#else
    CCSprite *img = CCSprite::spriteWithFile("Images/test_image_rgba4444.pvr.gz");
#endif
	img->setPosition(ccp( s.width/2.0f, s.height/2.0f));
	addChild(img);
	CCTextureCache::sharedTextureCache()->dumpCachedTextureInfo();
}

std::string TexturePVRRGBA4444GZ::title()
{
	return "PVR + RGBA 4444 + GZ Test";
}

std::string TexturePVRRGBA4444GZ::subtitle()
{
	return "This is a gzip PVR image";
}

//------------------------------------------------------------------
//
// TexturePVRRGBA4444CCZ
// Image generated using PVRTexTool:
// http://www.imgtec.com/powervr/insider/powervr-pvrtextool.asp
//
//------------------------------------------------------------------
void TexturePVRRGBA4444CCZ::onEnter()
{
    TextureDemo::onEnter();
	CCSize s = CCDirector::sharedDirector()->getWinSize();

    CCSprite *img = CCSprite::spriteWithFile("Images/test_image_rgba4444.pvr.ccz");
	img->setPosition(ccp( s.width/2.0f, s.height/2.0f));
	addChild(img);	
	CCTextureCache::sharedTextureCache()->dumpCachedTextureInfo();
}

std::string TexturePVRRGBA4444CCZ::title()
{
	return "PVR + RGBA 4444 + CCZ Test";
}

std::string TexturePVRRGBA4444CCZ::subtitle()
{
	return "This is a ccz PVR image";
}

//------------------------------------------------------------------
//
// TexturePVRRGB565
// Image generated using PVRTexTool:
// http://www.imgtec.com/powervr/insider/powervr-pvrtextool.asp
//
//------------------------------------------------------------------
void TexturePVRRGB565::onEnter()
{
    TextureDemo::onEnter();
	CCSize s = CCDirector::sharedDirector()->getWinSize();
	
    CCSprite *img = CCSprite::spriteWithFile("Images/test_image_rgb565.pvr");
	img->setPosition(ccp( s.width/2.0f, s.height/2.0f));
	addChild(img);
	CCTextureCache::sharedTextureCache()->dumpCachedTextureInfo();
}

std::string TexturePVRRGB565::title()
{
	return "PVR + RGB 565 Test";
}

// TexturePVR RGB888
// Image generated using PVRTexTool:
// http://www.imgtec.com/powervr/insider/powervr-pvrtextool.asp
void TexturePVRRGB888::onEnter()
{
    TextureDemo::onEnter();
    CCSize s = CCDirector::sharedDirector()->getWinSize();

    CCSprite *img = CCSprite::spriteWithFile("Images/test_image_rgb888.pvr");
    if (img != NULL)
    {
        img->setPosition(ccp( s.width/2.0f, s.height/2.0f));
        addChild(img);
    }

    CCTextureCache::sharedTextureCache()->dumpCachedTextureInfo();

}
std::string TexturePVRRGB888::title()
{
    return "PVR + RGB 888 Test";
}

//------------------------------------------------------------------
//
// TexturePVRA8
// Image generated using PVRTexTool:
// http://www.imgtec.com/powervr/insider/powervr-pvrtextool.asp
//
//------------------------------------------------------------------
void TexturePVRA8::onEnter()
{
	TextureDemo::onEnter();
	CCSize s = CCDirector::sharedDirector()->getWinSize();
	
    CCSprite *img = CCSprite::spriteWithFile("Images/test_image_a8.pvr");
	img->setPosition(ccp( s.width/2.0f, s.height/2.0f));
	addChild(img);
	CCTextureCache::sharedTextureCache()->dumpCachedTextureInfo();

}

std::string TexturePVRA8::title()
{
	return "PVR + A8 Test";
}

//------------------------------------------------------------------
//
// TexturePVRI8
// Image generated using PVRTexTool:
// http://www.imgtec.com/powervr/insider/powervr-pvrtextool.asp
//
//------------------------------------------------------------------
void TexturePVRI8::onEnter()
{
    TextureDemo::onEnter();
	CCSize s = CCDirector::sharedDirector()->getWinSize();

    CCSprite *img = CCSprite::spriteWithFile("Images/test_image_i8.pvr");
	img->setPosition(ccp( s.width/2.0f, s.height/2.0f));
	addChild(img);
	CCTextureCache::sharedTextureCache()->dumpCachedTextureInfo();
}

std::string TexturePVRI8::title()
{
	return "PVR + I8 Test";
}

//------------------------------------------------------------------
//
// TexturePVRAI88
// Image generated using PVRTexTool:
// http://www.imgtec.com/powervr/insider/powervr-pvrtextool.asp
//
//------------------------------------------------------------------
void TexturePVRAI88::onEnter()
{
    TextureDemo::onEnter();
	CCSize s = CCDirector::sharedDirector()->getWinSize();
	
    CCSprite *img = CCSprite::spriteWithFile("Images/test_image_ai88.pvr");
	img->setPosition(ccp( s.width/2.0f, s.height/2.0f));
	addChild(img);
	CCTextureCache::sharedTextureCache()->dumpCachedTextureInfo();
}

std::string TexturePVRAI88::title()
{
	return "PVR + AI88 Test";
}

//------------------------------------------------------------------
//
// TexturePVRBadEncoding
// Image generated using PVRTexTool:
// http://www.imgtec.com/powervr/insider/powervr-pvrtextool.asp
//
//------------------------------------------------------------------
void TexturePVRBadEncoding::onEnter()
{
    TextureDemo::onEnter();
	CCSize s = CCDirector::sharedDirector()->getWinSize();

    CCSprite *img = CCSprite::spriteWithFile("Images/test_image-bad_encoding.pvr");
	if( img )
    {
		img->setPosition(ccp( s.width/2.0f, s.height/2.0f));
		addChild(img);
	}
}

std::string TexturePVRBadEncoding::title()
{
	return "PVR Unsupported encoding";
}

std::string TexturePVRBadEncoding::subtitle()
{
	return "You should not see any image";
}

//------------------------------------------------------------------
//
// TexturePVRNonSquare
//
//------------------------------------------------------------------
void TexturePVRNonSquare::onEnter()
{
    TextureDemo::onEnter();
	CCSize s = CCDirector::sharedDirector()->getWinSize();
	
    CCSprite *img = CCSprite::spriteWithFile("Images/grossini_128x256_mipmap.pvr");
	img->setPosition(ccp( s.width/2.0f, s.height/2.0f));
	addChild(img);
	CCTextureCache::sharedTextureCache()->dumpCachedTextureInfo();
}

std::string TexturePVRNonSquare::title()
{
	return "PVR + Non square texture";
}

std::string TexturePVRNonSquare::subtitle()
{
	return "Loading a 128x256 texture";
}

//------------------------------------------------------------------
//
// TexturePVRNPOT4444
//
//------------------------------------------------------------------
void TexturePVRNPOT4444::onEnter()
{
    TextureDemo::onEnter();
	CCSize s = CCDirector::sharedDirector()->getWinSize();

    CCSprite *img = CCSprite::spriteWithFile("Images/grossini_pvr_rgba4444.pvr");
	if ( img )
    {
		img->setPosition(ccp( s.width/2.0f, s.height/2.0f));
		addChild(img);
	}
	CCTextureCache::sharedTextureCache()->dumpCachedTextureInfo();
}

std::string TexturePVRNPOT4444::title()
{
	return "PVR RGBA4 + NPOT texture";
}

std::string TexturePVRNPOT4444::subtitle()
{
	return "Loading a 81x121 RGBA4444 texture.";
}

//------------------------------------------------------------------
//
// TexturePVRNPOT8888
//
//------------------------------------------------------------------
void TexturePVRNPOT8888::onEnter()
{
    TextureDemo::onEnter();
	CCSize s = CCDirector::sharedDirector()->getWinSize();
	
    CCSprite *img = CCSprite::spriteWithFile("Images/grossini_pvr_rgba8888.pvr");
	if( img )
    {
		img->setPosition(ccp( s.width/2.0f, s.height/2.0f));
		addChild(img);
	}
	CCTextureCache::sharedTextureCache()->dumpCachedTextureInfo();
}

std::string TexturePVRNPOT8888::title()
{
	return "PVR RGBA8 + NPOT texture";
}

std::string TexturePVRNPOT8888::subtitle()
{
	return "Loading a 81x121 RGBA8888 texture.";
}

//------------------------------------------------------------------
//
// TextureAlias
//
//------------------------------------------------------------------
void TextureAlias::onEnter()
{
    TextureDemo::onEnter();
	CCSize s = CCDirector::sharedDirector()->getWinSize();
	
	//
	// Sprite 1: GL_LINEAR
	//
	// Default filter is GL_LINEAR
	
    CCSprite *sprite = CCSprite::spriteWithFile("Images/grossinis_sister1.png");
	sprite->setPosition(ccp( s.width/3.0f, s.height/2.0f));
	addChild(sprite);
	
	// this is the default filterting
	sprite->getTexture()->setAntiAliasTexParameters();
	
	//
	// Sprite 1: GL_NEAREST
	//	
	
    CCSprite *sprite2 = CCSprite::spriteWithFile("Images/grossinis_sister2.png");
	sprite2->setPosition(ccp( 2*s.width/3.0f, s.height/2.0f));
	addChild(sprite2);
	
	// Use Nearest in this one
	sprite2->getTexture()->setAliasTexParameters();
		
	// scale them to show
    CCScaleBy* sc = CCScaleBy::actionWithDuration(3, 8.0f);
	CCScaleBy* sc_back = (CCScaleBy*) (sc->reverse());
    CCRepeatForever* scaleforever = CCRepeatForever::actionWithAction((CCActionInterval*) (CCSequence::actions(sc, sc_back, NULL)));
    CCRepeatForever* scaleToo = (CCRepeatForever*) (scaleforever->copy());
    scaleToo->autorelease();

	sprite2->runAction(scaleforever);
	sprite->runAction(scaleToo);
	CCTextureCache::sharedTextureCache()->dumpCachedTextureInfo();
}

std::string TextureAlias::title()
{
	return "AntiAlias / Alias textures";
}

std::string TextureAlias::subtitle()
{
	return "Left image is antialiased. Right image is aliases";
}

//------------------------------------------------------------------
//
// TexturePixelFormat
//
//------------------------------------------------------------------
void TexturePixelFormat::onEnter()
{
	//
	// This example displays 1 png images 4 times.
	// Each time the image is generated using:
	// 1- 32-bit RGBA8
	// 2- 16-bit RGBA4
	// 3- 16-bit RGB5A1
	// 4- 16-bit RGB565
    TextureDemo::onEnter();
	
	CCLabelTTF *label = (CCLabelTTF*) getChildByTag(kTagLabel);
	label->setColor(ccc3(16,16,255));
	
	CCSize s = CCDirector::sharedDirector()->getWinSize();

    CCLayerColor *background = CCLayerColor::layerWithColor(ccc4(128,128,128,255), s.width, s.height);
	addChild(background, -1);
	
	// RGBA 8888 image (32-bit)
    CCTexture2D::setDefaultAlphaPixelFormat(kCCTexture2DPixelFormat_RGBA8888);
    CCSprite *sprite1 = CCSprite::spriteWithFile("Images/test-rgba1.png");
	sprite1->setPosition(ccp(1*s.width/7, s.height/2+32));
	addChild(sprite1, 0);

	// remove texture from texture manager	
	CCTextureCache::sharedTextureCache()->removeTexture(sprite1->getTexture());

	// RGBA 4444 image (16-bit)
    CCTexture2D::setDefaultAlphaPixelFormat(kCCTexture2DPixelFormat_RGBA4444);
    CCSprite *sprite2 = CCSprite::spriteWithFile("Images/test-rgba1.png");
	sprite2->setPosition(ccp(2*s.width/7, s.height/2-32));
	addChild(sprite2, 0);

	// remove texture from texture manager	
	CCTextureCache::sharedTextureCache()->removeTexture(sprite2->getTexture());

	// RGB5A1 image (16-bit)
    CCTexture2D::setDefaultAlphaPixelFormat(kCCTexture2DPixelFormat_RGB5A1);
    CCSprite *sprite3 = CCSprite::spriteWithFile("Images/test-rgba1.png");
	sprite3->setPosition(ccp(3*s.width/7, s.height/2+32));
	addChild(sprite3, 0);

    // remove texture from texture manager	
    CCTextureCache::sharedTextureCache()->removeTexture(sprite3->getTexture());

    // RGB888 image
    CCTexture2D::setDefaultAlphaPixelFormat(kCCTexture2DPixelFormat_RGB888);
    CCSprite *sprite4 = CCSprite::spriteWithFile("Images/test-rgba1.png");
    sprite4->setPosition(ccp(4*s.width/7, s.height/2-32));
    addChild(sprite4, 0);

	// remove texture from texture manager	
	CCTextureCache::sharedTextureCache()->removeTexture(sprite4->getTexture());

	// RGB565 image (16-bit)
    CCTexture2D::setDefaultAlphaPixelFormat(kCCTexture2DPixelFormat_RGB565);
    CCSprite *sprite5 = CCSprite::spriteWithFile("Images/test-rgba1.png");
	sprite5->setPosition(ccp(4*s.width/7, s.height/2+32));
	addChild(sprite5, 0);

	// remove texture from texture manager	
	CCTextureCache::sharedTextureCache()->removeTexture(sprite5->getTexture());

	// A8 image (8-bit)
    CCTexture2D::setDefaultAlphaPixelFormat(kCCTexture2DPixelFormat_A8);
    CCSprite *sprite6 = CCSprite::spriteWithFile("Images/test-rgba1.png");
	sprite6->setPosition(ccp(5*s.width/7, s.height/2+32));
	addChild(sprite6, 0);
	
	// remove texture from texture manager	
	CCTextureCache::sharedTextureCache()->removeTexture(sprite6->getTexture());

    CCFadeOut* fadeout = CCFadeOut::actionWithDuration(2);
    CCFadeIn*  fadein  = CCFadeIn::actionWithDuration(2);
    CCFiniteTimeAction* seq = CCSequence::actions(CCDelayTime::actionWithDuration(2), fadeout, fadein, NULL);
    CCRepeatForever* seq_4ever = CCRepeatForever::actionWithAction((CCActionInterval*) seq);
    CCRepeatForever* seq_4ever2 = (CCRepeatForever*) (seq_4ever->copy()); seq_4ever2->autorelease();
    CCRepeatForever* seq_4ever3 = (CCRepeatForever*) (seq_4ever->copy()); seq_4ever3->autorelease();
    CCRepeatForever* seq_4ever4 = (CCRepeatForever*) (seq_4ever->copy()); seq_4ever4->autorelease();
    CCRepeatForever* seq_4ever5 = (CCRepeatForever*) (seq_4ever->copy()); seq_4ever5->autorelease();
	
	sprite1->runAction(seq_4ever);
	sprite2->runAction(seq_4ever2);
    sprite3->runAction(seq_4ever3);
    sprite4->runAction(seq_4ever4);
	sprite5->runAction(seq_4ever5);

	// restore default
    CCTexture2D::setDefaultAlphaPixelFormat(kCCTexture2DPixelFormat_Default);
	CCTextureCache::sharedTextureCache()->dumpCachedTextureInfo();
}

std::string TexturePixelFormat::title()
{
	return "Texture Pixel Formats";
}

std::string TexturePixelFormat::subtitle()
{
	return "Textures: RGBA8888, RGBA4444, RGB5A1, RGB888, RGB565, A8";
}

//------------------------------------------------------------------
//
// TextureBlend
//
//------------------------------------------------------------------
void TextureBlend::onEnter()
{
    TextureDemo::onEnter();

	for( int i=0;i < 15;i++ )
    {
		// BOTTOM sprites have alpha pre-multiplied
		// they use by default GL_ONE, GL_ONE_MINUS_SRC_ALPHA
        CCSprite *cloud = CCSprite::spriteWithFile("Images/test_blend.png");
		addChild(cloud, i+1, 100+i);
		cloud->setPosition(ccp(50+25*i, 80));
        ccBlendFunc blendFunc1 = { GL_ONE, GL_ONE_MINUS_SRC_ALPHA };
		cloud->setBlendFunc(blendFunc1);

		// CENTER sprites have also alpha pre-multiplied
		// they use by default GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA
        cloud = CCSprite::spriteWithFile("Images/test_blend.png");
		addChild(cloud, i+1, 200+i);
		cloud->setPosition(ccp(50+25*i, 160));
        ccBlendFunc blendFunc2 = { GL_ONE_MINUS_DST_COLOR, GL_ZERO };
		cloud->setBlendFunc(blendFunc2);

		// UPPER sprites are using custom blending function
		// You can set any blend function to your sprites
        cloud = CCSprite::spriteWithFile("Images/test_blend.png");
		addChild(cloud, i+1, 200+i);
		cloud->setPosition(ccp(50+25*i, 320-80));
        ccBlendFunc blendFunc3 = { GL_SRC_ALPHA, GL_ONE };
		cloud->setBlendFunc(blendFunc3);  // additive blending
	}
}

std::string TextureBlend::title()
{
	return "Texture Blending";
}

std::string TextureBlend::subtitle()
{
	return "Testing 3 different blending modes";
}


//------------------------------------------------------------------
//
// TextureAsync
//
//------------------------------------------------------------------

void TextureAsync::onEnter()
{
    TextureDemo::onEnter();

    m_nImageOffset = 0;

    CCSize size =CCDirector::sharedDirector()->getWinSize();

    CCLabelTTF *label = CCLabelTTF::labelWithString("Loading...", "Marker Felt", 32);
    label->setPosition(ccp( size.width/2, size.height/2));
    addChild(label, 10);

    CCScaleBy* scale = CCScaleBy::actionWithDuration(0.3f, 2);
    CCScaleBy* scale_back = (CCScaleBy*)scale->reverse();
    CCSequence* seq = (CCSequence*)CCSequence::actions(scale, scale_back, NULL);
    label->runAction(CCRepeatForever::actionWithAction(seq));

    scheduleOnce(schedule_selector(TextureAsync::loadImages), 1.0f);
}

TextureAsync::~TextureAsync()
{
    CCTextureCache::sharedTextureCache()->removeAllTextures();
}

void TextureAsync::loadImages(ccTime dt)
{
    for( int i=0;i < 8;i++) {
        for( int j=0;j < 8; j++) {
            char szSpriteName[100] = {0};
            sprintf(szSpriteName, "Images/sprites_test/sprite-%d-%d.png", i, j);
            CCTextureCache::sharedTextureCache()->addImageAsync(szSpriteName,this, callfuncO_selector(TextureAsync::imageLoaded));
        }
    }

    CCTextureCache::sharedTextureCache()->addImageAsync("Images/background1.jpg",this, callfuncO_selector(TextureAsync::imageLoaded));
    CCTextureCache::sharedTextureCache()->addImageAsync("Images/background2.jpg",this, callfuncO_selector(TextureAsync::imageLoaded));
    CCTextureCache::sharedTextureCache()->addImageAsync("Images/background.png",this, callfuncO_selector(TextureAsync::imageLoaded));
    CCTextureCache::sharedTextureCache()->addImageAsync("Images/atlastest.png",this, callfuncO_selector(TextureAsync::imageLoaded));
    CCTextureCache::sharedTextureCache()->addImageAsync("Images/grossini_dance_atlas.png",this, callfuncO_selector(TextureAsync::imageLoaded));
}


void TextureAsync::imageLoaded(CCObject* pObj)
{
    CCTexture2D* tex = (CCTexture2D*)pObj;
    CCDirector *director = CCDirector::sharedDirector();

    //CCAssert( [NSThread currentThread] == [director runningThread], @"FAIL. Callback should be on cocos2d thread");

    // IMPORTANT: The order on the callback is not guaranteed. Don't depend on the callback

    // This test just creates a sprite based on the Texture

    CCSprite *sprite = CCSprite::spriteWithTexture(tex);
    sprite->setAnchorPoint(ccp(0,0));
    addChild(sprite, -1);

    CCSize size = director->getWinSize();
    int i = m_nImageOffset * 32;
    sprite->setPosition(ccp( i % (int)size.width, (i / (int)size.width) * 32 ));

    m_nImageOffset++;

    CCLog("Image loaded: %p", tex);
}

std::string TextureAsync::title()
{
    return "Texture Async Load";
}

std::string TextureAsync::subtitle()
{
    return "Textures should load while an animation is being run";
}


//------------------------------------------------------------------
//
// TextureGlClamp
//
//------------------------------------------------------------------
void TextureGlClamp::onEnter()
{
    TextureDemo::onEnter();

    CCSize size = CCDirector::sharedDirector()->getWinSize();

	// The .png image MUST be power of 2 in order to create a continue effect.
	// eg: 32x64, 512x128, 256x1024, 64x64, etc..
    CCSprite *sprite = CCSprite::spriteWithFile("Images/pattern1.png", CCRectMake(0,0,512,256));
	addChild(sprite, -1, kTagSprite1);
	sprite->setPosition(ccp(size.width/2,size.height/2));
	ccTexParams params = {GL_LINEAR,GL_LINEAR,GL_CLAMP_TO_EDGE, GL_CLAMP_TO_EDGE};
	sprite->getTexture()->setTexParameters(&params);

    CCRotateBy* rotate = CCRotateBy::actionWithDuration(4, 360);
	sprite->runAction(rotate);
    CCScaleBy* scale = CCScaleBy::actionWithDuration(2, 0.04f);
	CCScaleBy* scaleBack = (CCScaleBy*) (scale->reverse());
    CCFiniteTimeAction* seq = CCSequence::actions(scale, scaleBack, NULL);
	sprite->runAction(seq);
}

std::string TextureGlClamp::title()
{
	return "Texture GL_CLAMP";
}

TextureGlClamp::~TextureGlClamp()
{
    CCTextureCache::sharedTextureCache()->removeUnusedTextures();
}

//------------------------------------------------------------------
//
// TextureGlRepeat
//
//------------------------------------------------------------------
void TextureGlRepeat::onEnter()
{
    TextureDemo::onEnter();

    CCSize size = CCDirector::sharedDirector()->getWinSize();
	
	// The .png image MUST be power of 2 in order to create a continue effect.
	// eg: 32x64, 512x128, 256x1024, 64x64, etc..
    CCSprite *sprite = CCSprite::spriteWithFile("Images/pattern1.png", CCRectMake(0, 0, 4096, 4096));
	addChild(sprite, -1, kTagSprite1);
	sprite->setPosition(ccp(size.width/2,size.height/2));
	ccTexParams params = {GL_LINEAR,GL_LINEAR,GL_REPEAT,GL_REPEAT};
	sprite->getTexture()->setTexParameters(&params);
	
    CCRotateBy* rotate = CCRotateBy::actionWithDuration(4, 360);
	sprite->runAction(rotate);
    CCScaleBy* scale = CCScaleBy::actionWithDuration(2, 0.04f);
	CCScaleBy* scaleBack = (CCScaleBy*) (scale->reverse());
    CCFiniteTimeAction* seq = CCSequence::actions(scale, scaleBack, NULL);
	sprite->runAction(seq);
}

std::string TextureGlRepeat::title()
{
	return "Texture GL_REPEAT";
}

TextureGlRepeat::~TextureGlRepeat()
{
    CCTextureCache::sharedTextureCache()->removeUnusedTextures();
}

//------------------------------------------------------------------
//
// TextureSizeTest
//
//------------------------------------------------------------------
void TextureSizeTest::onEnter()
{
    TextureDemo::onEnter();
	CCSprite *sprite = NULL;
	
	CCLog("Loading 512x512 image...");
    sprite = CCSprite::spriteWithFile("Images/texture512x512.png");
	if( sprite )
		CCLog("OK\n");
	else
		CCLog("Error\n");

	CCLog("Loading 1024x1024 image...");
	sprite = CCSprite::spriteWithFile("Images/texture1024x1024.png");
	if( sprite )
		CCLog("OK\n");
	else
		CCLog("Error\n");
// 	@todo
// 	CCLog("Loading 2048x2048 image...");
// 	sprite = CCSprite::spriteWithFile("Images/texture2048x2048.png");
// 	if( sprite )
// 		CCLog("OK\n");
// 	else
// 		CCLog("Error\n");
// 	
// 	CCLog("Loading 4096x4096 image...");
// 	sprite = CCSprite::spriteWithFile("Images/texture4096x4096.png");
// 	if( sprite )
// 		CCLog("OK\n");
// 	else
// 		CCLog("Error\n");
}

std::string TextureSizeTest::title()
{
	return "Different Texture Sizes";
}

std::string TextureSizeTest::subtitle()
{
	return "512x512, 1024x1024. See the console.";
}

//------------------------------------------------------------------
//
// TextureCache1
//
//------------------------------------------------------------------
void TextureCache1::onEnter()
{
    TextureDemo::onEnter();

	CCSize s = CCDirector::sharedDirector()->getWinSize();
	
	CCSprite *sprite;

    sprite = CCSprite::spriteWithFile("Images/grossinis_sister1.png");
	sprite->setPosition(ccp(s.width/5*1, s.height/2));
	sprite->getTexture()->setAliasTexParameters();
	sprite->setScale(2);
	addChild(sprite);

	CCTextureCache::sharedTextureCache()->removeTexture(sprite->getTexture());
	
    sprite = CCSprite::spriteWithFile("Images/grossinis_sister1.png");
    sprite->setPosition(ccp(s.width/5*2, s.height/2));
	sprite->getTexture()->setAntiAliasTexParameters();
	sprite->setScale(2);
	addChild(sprite);

	// 2nd set of sprites
	
    sprite = CCSprite::spriteWithFile("Images/grossinis_sister2.png");
	sprite->setPosition(ccp(s.width/5*3, s.height/2));
	sprite->getTexture()->setAliasTexParameters();
	sprite->setScale(2);
	addChild(sprite);
	
	CCTextureCache::sharedTextureCache()->removeTextureForKey("Images/grossinis_sister2.png");

    sprite = CCSprite::spriteWithFile("Images/grossinis_sister2.png");
	sprite->setPosition(ccp(s.width/5*4, s.height/2));
	sprite->getTexture()->setAntiAliasTexParameters();
	sprite->setScale(2);
	addChild(sprite);
}

std::string TextureCache1::title()
{
	return "CCTextureCache: remove";
}

std::string TextureCache1::subtitle()
{
	return "4 images should appear: alias, antialias, alias, antilias";
}

// TextureDrawAtPoint
void TextureDrawAtPoint::onEnter()
{
    TextureDemo::onEnter();

    m_pTex1 = CCTextureCache::sharedTextureCache()->addImage("Images/grossinis_sister1.png");
    m_pTex2 = CCTextureCache::sharedTextureCache()->addImage("Images/grossinis_sister2.png");

    m_pTex1->retain();
    m_pTex2->retain();
}

TextureDrawAtPoint::~TextureDrawAtPoint()
{
    m_pTex1->release();
    m_pTex2->release();
}

std::string TextureDrawAtPoint::title()
{
    return "CCTexture2D: drawAtPoint";
}

std::string TextureDrawAtPoint::subtitle()
{
    return "draws 2 textures using drawAtPoint";
}

void TextureDrawAtPoint::draw()
{
    TextureDemo::draw();

    CCSize s = CCDirector::sharedDirector()->getWinSize();

    m_pTex1->drawAtPoint(ccp(s.width/2-50, s.height/2 - 50));
    m_pTex2->drawAtPoint(ccp(s.width/2+50, s.height/2 - 50));

}

// TextureDrawInRect

void TextureDrawInRect::onEnter()
{
    TextureDemo::onEnter();
    m_pTex1 = CCTextureCache::sharedTextureCache()->addImage("Images/grossinis_sister1.png");
    m_pTex2 = CCTextureCache::sharedTextureCache()->addImage("Images/grossinis_sister2.png");

    m_pTex1->retain();
    m_pTex2->retain();
}

TextureDrawInRect::~TextureDrawInRect()
{
    m_pTex1->release();
    m_pTex2->release();
}

void TextureDrawInRect::draw()
{
    TextureDemo::draw();

    CCSize s = CCDirector::sharedDirector()->getWinSize();

    CCRect rect1 = CCRectMake( s.width/2 - 80, 20, m_pTex1->getContentSize().width * 0.5f, m_pTex1->getContentSize().height *2 );
    CCRect rect2 = CCRectMake( s.width/2 + 80, s.height/2, m_pTex1->getContentSize().width * 2, m_pTex1->getContentSize().height * 0.5f );

    m_pTex1->drawInRect(rect1);
    m_pTex2->drawInRect(rect2);

}

std::string TextureDrawInRect::title()
{
    return "CCTexture2D: drawInRect";
}

std::string TextureDrawInRect::subtitle()
{
    return "draws 2 textures using drawInRect";
}

// FileUtilsTest
void FileUtilsTest::onEnter()
{
    TextureDemo::onEnter();
    // This test is only valid in Retinadisplay

    if( CC_CONTENT_SCALE_FACTOR() == 2 ) {

        CCSprite *sprite = new CCSprite();
        sprite->initWithFile("Images/bugs/test_issue_1179.png");
        if( sprite )
            CCLog("Test #1 issue 1179: OK");
        else
            CCLog("Test #1 issue 1179: FAILED");

        sprite->release();

        sprite = new CCSprite();
        sprite->initWithFile("only_in_hd.pvr.ccz");
        if( sprite )
            CCLog("Test #2 issue 1179: OK");
        else
            CCLog("Test #2 issue 1179: FAILED");

        sprite->release();

    } else {
        CCLog("Test issue #1179 failed. Needs to be tested with RetinaDispaly");
    }


#if 0 // TODO:(CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
    // Testint CCFileUtils API
    bool ret = false;
    ret = CCFileUtils::iPhoneRetinaDisplayFileExistsAtPath("Images/bugs/test_issue_1179.png");
    if( ret )
        CCLog("Test #3: retinaDisplayFileExistsAtPath: OK");
    else
        CCLog("Test #3: retinaDisplayFileExistsAtPath: FAILED");


    ret = CCFileUtils::iPhoneRetinaDisplayFileExistsAtPath("grossini-does_no_exist.png");
    if( !ret )
        CCLog("Test #4: retinaDisplayFileExistsAtPath: OK");
    else
        CCLog("Test #4: retinaDisplayFileExistsAtPath: FAILED");
#endif 
}

std::string FileUtilsTest::title()
{
    return "CCFileUtils: See console";
}

std::string FileUtilsTest::subtitle()
{
    return "See the console";
}

//------------------------------------------------------------------
//
// TextureTestScene
//
//------------------------------------------------------------------
void TextureTestScene::runThisTest()
{
    CCLayer* pLayer = nextTextureTest();
    addChild(pLayer);
    CCDirector::sharedDirector()->replaceScene(this);
}

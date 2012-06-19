#ifndef _CCB_CCBREADER_H_
#define _CCB_CCBREADER_H_

#include "cocos2d.h"

#define CCB_STATIC_NEW_AUTORELEASE_OBJECT_METHOD(T, METHOD) static T * METHOD() { \
    T * ptr = new T(); \
    if(ptr != NULL) { \
        ptr->autorelease(); \
        return ptr; \
    } \
    CC_SAFE_DELETE(ptr); \
    return NULL; \
}

#define CCB_STATIC_NEW_AUTORELEASE_OBJECT_WITH_INIT_METHOD(T, METHOD) static T * METHOD() { \
    T * ptr = new T(); \
    if(ptr != NULL && ptr->init()) { \
        ptr->autorelease(); \
        return ptr; \
    } \
    CC_SAFE_DELETE(ptr); \
    return NULL; \
}

#define kCCBVersion 2

#define kCCBPropTypePosition 0
#define kCCBPropTypeSize 1
#define kCCBPropTypePoint 2
#define kCCBPropTypePointLock 3
#define kCCBPropTypeScaleLock 4
#define kCCBPropTypeDegrees 5
#define kCCBPropTypeInteger 6
#define kCCBPropTypeFloat 7
#define kCCBPropTypeFloatVar 8
#define kCCBPropTypeCheck 9
#define kCCBPropTypeSpriteFrame 10
#define kCCBPropTypeTexture 11
#define kCCBPropTypeByte 12
#define kCCBPropTypeColor3 13
#define kCCBPropTypeColor4FVar 14
#define kCCBPropTypeFlip 15
#define kCCBPropTypeBlendFunc 16
#define kCCBPropTypeFntFile 17
#define kCCBPropTypeText 18
#define kCCBPropTypeFontTTF 19
#define kCCBPropTypeIntegerLabeled 20
#define kCCBPropTypeBlock 21
#define kCCBPropTypeAnimation 22
#define kCCBPropTypeCCBFile 23
#define kCCBPropTypeString 24
#define kCCBPropTypeBlockCCControl 25
#define kCCBPropTypeFloatScale 26

#define kCCBFloat0 0
#define kCCBFloat1 1
#define kCCBFloatMinus1 2
#define kCCBFloat05 3
#define kCCBFloatInteger 4
#define kCCBFloatFull 5

#define kCCBPlatformAll 0
#define kCCBPlatformIOS 1
#define kCCBPlatformMac 2

#define kCCBTargetTypeNone 0
#define kCCBTargetTypeDocumentRoot 1
#define kCCBTargetTypeOwner 2

#define kCCBPositionTypeRelativeBottomLeft 0
#define kCCBPositionTypeRelativeTopLeft 1
#define kCCBPositionTypeRelativeTopRight 2
#define kCCBPositionTypeRelativeBottomRight 3
#define kCCBPositionTypePercent 4

#define kCCBSizeTypeAbsolute 0
#define kCCBSizeTypePercent 1
#define kCCBSizeTypeRelativeContainer 2
#define kCCBSizeTypeHorizontalPercent 3
#define kCCBSzieTypeVerticalPercent 4


#define kCCBScaleTypeAbsolute 0
#define kCCBScaleTypeMultiplyResolution 1

NS_CC_EXT_BEGIN

/* Forward declaration. */
class CCNodeLoader;
class CCNodeLoaderLibrary;
class CCNodeLoaderListener;
class CCBMemberVariableAssigner;
class CCBSelectorResolver;

/**
 * @brief Parse CCBI file which is generated by CocosBuilder
 */
class CC_DLL CCBReader : public CCObject {
    private:
        CCString * mCCBRootPath;
        bool mRootCCBReader;

        unsigned char * mBytes;
        int mCurrentByte;
        int mCurrentBit;
        CCObject * mOwner;
        CCNode * mRootNode;
        CCSize mRootContainerSize;
        float mResolutionScale;

        CCNodeLoaderLibrary * mCCNodeLoaderLibrary;
        CCNodeLoaderListener * mCCNodeLoaderListener;
        CCBMemberVariableAssigner * mCCBMemberVariableAssigner;
        CCBSelectorResolver * mCCBSelectorResolver;

        std::vector<CCString *> mStringCache;
        std::set<std::string> mLoadedSpriteSheets;

    public:
        CCBReader(CCNodeLoaderLibrary * pCCNodeLoaderLibrary, CCBMemberVariableAssigner * pCCBMemberVariableAssigner = NULL, CCBSelectorResolver * pCCBSelectorResolver = NULL, CCNodeLoaderListener * pCCNodeLoaderListener = NULL);
        CCBReader(CCBReader * pCCBReader);
        virtual ~CCBReader();
    
        CCNode * readNodeGraphFromFile(const char * pCCBRootPath, const char * pCCBFileName, CCObject * pOwner = NULL);
        CCNode * readNodeGraphFromFile(CCString * pCCBRootPath, CCString * pCCBFileName, CCObject * pOwner = NULL);
        CCNode * readNodeGraphFromFile(const char * pCCBRootPath, const char * pCCBFileName, CCObject * pOwner, CCSize pRootContainerSize);
        CCNode * readNodeGraphFromFile(CCString * pCCBRootPath, CCString * pCCBFileName, CCObject * pOwner, CCSize pRootContainerSize);

        CCBMemberVariableAssigner * getCCBMemberVariableAssigner();
        CCBSelectorResolver * getCCBSelectorResolver();

        CCString * getCCBRootPath();
        CCObject * getOwner();
        CCNode * getRootNode();
        CCSize getContainerSize(CCNode * pNode);
        float getResolutionScale();

        bool isSpriteSheetLoaded(CCString * pSpriteSheet);
        void addLoadedSpriteSheet(CCString * pSpriteSheet);

        /* Utility methods. */
        static CCString * lastPathComponent(CCString * pString);
        static CCString * deletePathExtension(CCString * pString);
        static CCString * toLowerCase(CCString * pCCString);
        static bool endsWith(CCString * pString, CCString * pEnding);
        static CCString * concat(CCString * pStringA, CCString * pStringB);

        /* Parse methods. */
        int readInt(bool pSigned);
        unsigned char readByte();
        bool readBool();
        float readFloat();
        CCString * readCachedString();

    private:
        bool readHeader();
        bool readStringCache();
        void readStringCacheEntry();
        CCNode * readNodeGraph();
        CCNode * readNodeGraph(CCNode * pParent);

        bool getBit();
        void alignBits();
        CCString * readUTF8();
};

NS_CC_EXT_END

#endif
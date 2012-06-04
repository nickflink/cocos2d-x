#ifndef _CCB_READER_H_
#define _CCB_READER_H_

#include "cocos2d.h"
#include "CCBMemberVariableAssigner.h"
#include "CCBSelectorResolver.h"

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

/**
 * @brief Parse CCBI file which is generated by CocosBuilder
 */
class CC_DLL CCBReader : public CCObject { // TODO Why extend CCObject? -> Also all Loaders should extend from CCObject?
    private:    
        unsigned char * mBytes;
        int mCurrentByte;
        int mCurrentBit;
        CCObject * mOwner;
        CCNode * mRootNode;
        CCSize mRootContainerSize;

        CCBMemberVariableAssigner * mCCBMemberVariableAssigner;
        CCBSelectorResolver * mCCBSelectorResolver;

        std::vector<std::string> mStringCache;
        std::map<std::string, CCNodeLoader *> mCCNodeLoaders;
        std::set<std::string> mLoadedSpriteSheets;

    public:   
        /* Constructor. */
        CCBReader(CCBMemberVariableAssigner * = NULL, CCBSelectorResolver * = NULL);
        CCBReader(CCBReader *);
        /* Destructor. */
        ~CCBReader();

        CCNode * readNodeGraphFromFile(const char * pCCBFileName, CCObject * pOwner = NULL);
        CCNode * readNodeGraphFromFile(const char * pCCBFileName, CCObject * pOwner, CCSize pRootContainerSize);
        void registerCCNodeLoader(std::string pClassName, CCNodeLoader * pCCNodeLoader);
        CCNodeLoader * getCCNodeLoader(std::string pClassName);
        CCBMemberVariableAssigner * getCCBMemberVariableAssigner();
        CCBSelectorResolver * getCCBSelectorResolver();

        CCObject * getOwner();
        CCNode * getRootNode();
        CCSize getContainerSize(CCNode *);
        std::string lastPathComponent(std::string);
        std::string deletePathExtension(std::string);
        std::string toLowerCase(std::string);
        bool endsWith(std::string, std::string);
        bool isSpriteSheetLoaded(std::string);
        void addLoadedSpriteSheet(std::string);

        /* Parse methods */
        int readInt(bool pSign);
        unsigned char readByte();
        bool readBool();
        float readFloat();
        std::string readCachedString();
            
    private:
        bool readHeader();
        bool readStringCache();
        CCNode * readNodeGraph();
        CCNode * readNodeGraph(CCNode *);
    
        bool getBit();
        void alignBits();
        std::string readUTF8();
};

NS_CC_EXT_END

#endif
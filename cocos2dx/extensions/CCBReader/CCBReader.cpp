//
//  CCBReader.cpp
//  CocosBuilderTest
//
//  Created by 晓龙 张 on 12-2-15.
//  Copyright (c) 2012年 chukong-inc. All rights reserved.
//
#include "CCBReader.h"
//#include "CObject.h"
//#include "HelloCocosBuilder.h"

using namespace cocos2d ;

/*
CCBReader* CCBReader::static_bReader = 0;

CCBReader::CCBReader()
{
}

CCBReader::~CCBReader()
{
}

CCBReader* CCBReader::sharedReader()
{
    if (!static_bReader)
    {
        static_bReader = new CCBReader();
    }
    
    return static_bReader;
}

void CCBReader::dispose()
{
	CC_SAFE_DELETE(static_bReader);
}
*/

#pragma mark -
#pragma mark Read value from dictionary

int CCBReader::intValFromDict(CCDictionary* dict, const std::string key)
{
	CCString* valueString = (CCString*) dict->objectForKey(key.c_str());
	return valueString->intValue();
}

float CCBReader::floatValFromDict(CCDictionary* dict, const std::string key)
{
	CCString* valueString = (CCString*) dict->objectForKey(key.c_str());
    return valueString->floatValue();
}

bool CCBReader::boolValFromDict(CCDictionary* dict, const std::string key)
{
	CCString* valueString = (CCString*) dict->objectForKey(key.c_str());
    return valueString->intValue();
}

CCPoint CCBReader::pointValFromDict(CCDictionary* dict, const std::string key)
{
	CCArray* arr = (CCArray*)dict->objectForKey(key.c_str());
	
    if (!arr) 
	{
		return ccp(0,0);
	}
	
    float x = ((CCString*)arr->objectAtIndex(0))->floatValue();
    float y = ((CCString*)arr->objectAtIndex(1))->floatValue();
    return ccp(x, y);
}

CCSize CCBReader::sizeValFromDict(CCDictionary* dict, const std::string key)
{
	CCArray* arr = (CCArray*) dict->objectForKey(key.c_str());
	
    if (!arr) 
	{
		return CCSize(0, 0);
	}
	
    float w = ((CCString*)arr->objectAtIndex(0))->floatValue();
    float h = ((CCString*)arr->objectAtIndex(1))->floatValue();
    return CCSize(w, h);
}

ccColor3B CCBReader::ccColor3ValFromDict(CCDictionary* dict, const std::string key)
{
	CCArray* arr = (CCArray*) dict->objectForKey(key.c_str());
	
    int r = ((CCString*)arr->objectAtIndex(0))->intValue();
    int g = ((CCString*)arr->objectAtIndex(1))->intValue();
    int b = ((CCString*)arr->objectAtIndex(2))->intValue();
	
    return ccc3(r, g, b);
}

ccColor4F CCBReader::ccColor4fValFromDict(CCDictionary* dict, const std::string key)
{
	CCArray* arr = (CCArray*) dict->objectForKey(key.c_str());
	
    ccColor4F color;
    color.r = ((CCString*)arr->objectAtIndex(0))->floatValue();
    color.g = ((CCString*)arr->objectAtIndex(1))->floatValue();
    color.b = ((CCString*)arr->objectAtIndex(2))->floatValue();
    color.a = ((CCString*)arr->objectAtIndex(3))->floatValue();
	
    return color;
}

ccBlendFunc CCBReader::blendFuncValFromDict(CCDictionary* dict, const std::string key)
{
	CCArray* arr = (CCArray*) dict->objectForKey(key.c_str());
	
    int src = ((CCString*)arr->objectAtIndex(0))->intValue();
    int dst = ((CCString*)arr->objectAtIndex(1))->intValue();
	
    ccBlendFunc blendFunc;
    blendFunc.src = src;
    blendFunc.dst = dst;
	
    return blendFunc;
}

#pragma mark -
#pragma mark set extra properties

void CCBReader::setExtraProp(CCObject* prop, const char* key, int tag, CCDictionary* dict)
{
	std::string tagString;
	tagString += tag;
    CCDictionary* props = (CCDictionary*) dict->objectForKey(tagString.c_str());
	
    if (!props)
    {
        props = new CCDictionary();
        dict->setObject(props, tagString.c_str());
    }
    
    props->setObject(prop, key);
}

void CCBReader::setPropsForMenuItem(CCMenuItem* node, CCDictionary* props, CCDictionary* extraProps)
{
    node->setIsEnabled(boolValFromDict(props, "isEnabled"));
    if (extraProps)
    {
        setExtraProp((CCDictionary*) props->objectForKey("selector"), "selector", node->getTag(), extraProps);
        setExtraProp((CCDictionary*) props->objectForKey("target"), "target", node->getTag(), extraProps);
        CCString* spriteFramesFile = (CCString*) props->objectForKey("spriteFramesFile");
		
        if (spriteFramesFile)
        {
            setExtraProp(spriteFramesFile, "spriteSheetFile", node->getTag(), extraProps);
        }
    }
}

void CCBReader::setPropsForMenuItemImage(CCMenuItemImage* node, CCDictionary* props, CCDictionary* extraProps)
{
    if (extraProps)
    {
        setExtraProp(props->objectForKey("spriteFileNormal"), "spriteFileNormal", node->getTag(), extraProps);
        setExtraProp(props->objectForKey("spriteFileSelected"), "spriteFileSelected", node->getTag(), extraProps);
        setExtraProp(props->objectForKey("spriteFileDisabled"), "spriteFileDisabled", node->getTag(), extraProps);
    }
}

void CCBReader::setPropsForLayerColor(CCLayerColor* node, CCDictionary* props, CCDictionary* extraProps)
{
    node->setColor(ccColor3ValFromDict(props, "color"));
    node->setOpacity(intValFromDict(props, "opacity"));
    node->setBlendFunc(blendFuncValFromDict(props, "blendFunc"));
}

void CCBReader::setPropsForLayer(CCLayer* node, CCDictionary* props, CCDictionary* extraProps)
{
    if (extraProps)
    {
        setExtraProp(props->objectForKey("touchEnabled"), "touchEnabled", node->getTag(), extraProps);
        setExtraProp(props->objectForKey("accelerometerEnabled"), "accelerometerEnabled", node->getTag(), extraProps);
        setExtraProp(props->objectForKey("mouseEnabled"), "mouseEnabled", node->getTag() ,extraProps);
        setExtraProp(props->objectForKey("keyboardEnabled"), "keyboardEnabled", node->getTag(), extraProps);
    }
    else
    {
        node->setIsTouchEnabled(boolValFromDict(props, "touchEnabled"));
        node->setIsAccelerometerEnabled(boolValFromDict(props, "accelerometerEnabled"));
    }
}

void CCBReader::setPropsForMenu(CCMenu* node, CCDictionary* props, CCDictionary* extraProps)
{
    if (extraProps)
    {

    }
}

void CCBReader::setPropsForLabelBMFont(CCLabelBMFont* node, CCDictionary* props, CCDictionary* extraProps)
{
    node->setOpacity(intValFromDict(props, "opacity"));
    node->setColor(ccColor3ValFromDict(props, "color"));
	
    if (extraProps)
    {
        setExtraProp(props->objectForKey("fontFile"), "fontFile", node->getTag(), extraProps);
    }
}

void CCBReader::setPropsForParticleSystem(CCParticleSystem* node, CCDictionary* props, CCDictionary* extraProps)
{
    node->setEmitterMode(intValFromDict(props, "emitterMode"));
    node->setEmissionRate(floatValFromDict(props, "emissionRate"));
    node->setDuration(floatValFromDict(props, "duration"));
    node->setPosVar(pointValFromDict(props, "posVar"));
    node->setTotalParticles(intValFromDict(props, "totalParticles"));
    node->setLife(floatValFromDict(props, "life"));
    node->setLifeVar(floatValFromDict(props, "lifeVar"));
    node->setStartSize(intValFromDict(props, "startSize"));
    node->setStartSizeVar(intValFromDict(props, "startSizeVar"));
    node->setEndSize(intValFromDict(props, "endSize"));
    node->setEndSizeVar(intValFromDict(props, "endSizeVar"));

    if (dynamic_cast<CCParticleSystemQuad*>(node))
    {
        node->setStartSpin(intValFromDict(props, "startSpin"));
        node->setStartSpinVar(intValFromDict(props, "startSpinVar"));
        node->setEndSpin(intValFromDict(props, "endSpin"));
        node->setEndSpinVar(intValFromDict(props, "endSpinVar"));
    }
	
    node->setStartColor(ccColor4fValFromDict(props, "startColor"));
    node->setStartColorVar(ccColor4fValFromDict(props, "startColorVar"));
    node->setEndColor(ccColor4fValFromDict(props, "endColor"));
    node->setEndColorVar(ccColor4fValFromDict(props, "endColorVar"));
    node->setBlendFunc(blendFuncValFromDict(props, "blendFunc"));
    
    if (node->getEmitterMode() == kCCParticleModeGravity)
    {
        node->setGravity(pointValFromDict(props, "gravity"));
        node->setAngle(intValFromDict(props, "angle"));
        node->setAngleVar(intValFromDict(props, "angleVar"));
        node->setSpeed(intValFromDict(props, "speed"));
        node->setSpeedVar(intValFromDict(props, "speedVar"));
        node->setTangentialAccel(intValFromDict(props, "tangentialAccel"));
        node->setTangentialAccelVar(intValFromDict(props, "tangentialAccelVar"));
        node->setRadialAccel(intValFromDict(props, "radialAccel"));
        node->setRadialAccelVar(intValFromDict(props, "radialAccelVar"));
    }
    else
    {
        node->setStartRadius(intValFromDict(props, "startRadius"));
        node->setStartRadiusVar(intValFromDict(props, "startRadiusVar"));
        node->setEndRadius(intValFromDict(props, "endRadius"));
        node->setEndRadiusVar(intValFromDict(props, "endRadiusVar"));
        node->setRotatePerSecond(intValFromDict(props, "rotatePerSecond"));
        node->setRotatePerSecondVar(intValFromDict(props, "rotatePerSecondVar"));
    }
    
    if (extraProps)
    {
        setExtraProp(props->objectForKey("spriteFile"), "spriteFile", node->getTag(), extraProps);
    }
    node->setPositionType(kCCPositionTypeGrouped);
}

void CCBReader::setPropsForLayerGradient(CCLayerGradient* node, CCDictionary* props, CCDictionary* extraProps)
{
    node->setStartColor(ccColor3ValFromDict(props, "color"));
    node->setStartOpacity(intValFromDict(props, "opacity"));
    node->setEndColor(ccColor3ValFromDict(props, "endColor"));
    node->setEndOpacity(intValFromDict(props, "endOpacity"));
    node->setVector(pointValFromDict(props, "vector"));
}

CCNode* CCBReader::createCustomClassWithName(CCString* className)
{
    if (!className) return NULL;
    if (0 == className->length()) return NULL;
		 
    CObject* newClass = (CObject*)CClassFactory::sharedClassFactory().getClassByName(className->m_sString) ;
    if ( newClass == NULL ){
        CCLog("WARNING! Class of type %s couldn't be found", className);
        return NULL ;
    }
    newClass->registProperty() ;
    return newClass;
}

void CCBReader::setPropsForSprite(CCSprite* node, CCDictionary* props, CCDictionary* extraProps)
{
    node->setOpacity(intValFromDict(props, "opacity"));
    node->setColor(ccColor3ValFromDict(props, "color"));
    node->setFlipX(boolValFromDict(props, "flipX"));
    node->setFlipY(boolValFromDict(props, "flipY"));
    node->setBlendFunc(blendFuncValFromDict(props, "blendFunc"));
	
    if (extraProps)
    {
        setExtraProp(props->objectForKey("spriteFile"), "spriteFile", node->getTag(), extraProps);
        CCString* spriteFramesFile = (CCString*) props->objectForKey("spriteFramesFile");
		
        if (spriteFramesFile)
        {
            setExtraProp(spriteFramesFile, "spriteSheetFile", node->getTag(), extraProps);
        }
    }
}

void CCBReader::setPropsForNode(CCNode* node, CCDictionary* props, CCDictionary* extraProps)
{
	CCPoint position = pointValFromDict(props, "position");
	node->setPosition(position);

    if (dynamic_cast<CCSprite*>(node) == NULL &&
        dynamic_cast<CCMenuItemImage*>(node) == NULL &&
        dynamic_cast<CCLabelBMFont*>(node) == NULL)
    {
		CCSize size = sizeValFromDict(props, "contentSize");
		//node->setContentSize(size);
    }
	
    node->setScaleX(floatValFromDict(props, "scaleX"));
    node->setScaleY(floatValFromDict(props, "scaleY"));
    node->setAnchorPoint(pointValFromDict(props, "anchorPoint"));
    node->setRotation(floatValFromDict(props, "rotation"));
    node->setIsRelativeAnchorPoint(boolValFromDict(props, "isRelativeAnchorPoint"));
    node->setIsVisible(boolValFromDict(props, "visible"));

    if (extraProps)
    {
        if (node->getTag() == -1)
        {
            node->setTag(extraProps->count() + 1);
        }

        setExtraProp(props->objectForKey("tag"), "tag", node->getTag(), extraProps);
        
        setExtraProp((CCDictionary*) props->objectForKey("customClass"), "customClass", node->getTag(), extraProps);
        setExtraProp((CCDictionary*) props->objectForKey("memberVarAssignmentType"), "memberVarAssignmentType", node->getTag(), extraProps);
		setExtraProp((CCDictionary*) props->objectForKey("memberVarAssignmentName"), "memberVarAssignmentName", node->getTag(), extraProps);
        setExtraProp((CCDictionary*) props->objectForKey("lockedScaleRatio"), "lockedScaleRatio", node->getTag(), extraProps);
        
        // Expanded nodes
        bool isExpanded;
        CCString* isExpandedObj = (CCString*) props->objectForKey("isExpanded");
		
        if (isExpandedObj) {
			isExpanded = !isExpandedObj->m_sString.empty();
		} else {
			isExpanded = true;
		}
				
		setExtraProp(isExpandedObj, "isExpanded", node->getTag(), extraProps);
    }
    else
    {
        node->setTag(intValFromDict(props, "tag"));
    }
}


CCNode* CCBReader::ccObjectFromDictionary(CCDictionary* dict, CCDictionary* extraProps, const char* assetsDir, CCObject* owner, CObject* root)
{
	CCString* className = (CCString*) dict->objectForKey("class");
    CCDictionary* props = (CCDictionary*) dict->objectForKey("properties");
    CCArray* children = (CCArray*) dict->objectForKey("children");
	//CCDictionary* children = (CCDictionary*) dict->objectForKey("children");
	//std::vector<std::string> allKeys = dict->allKeysForObject(dict->objectForKey("children"));
	//CCString* customString = props->objectForKey("memberVarAssignmentName");
    CCString* customClass = (CCString*)props->objectForKey("customClass");
//    CCLog("customClass is %s", customClass->toStdString().c_str()) ;
    
    //CObject*obj = (CObject*)createCustomClassWithName(customClass);
//
//	CCLog("ccObjectFromDictionary className:%s customClassName:%s", className->m_sString.c_str(), (customClass ? customClass->m_sString.c_str() : "-"));
//
	
    if (extraProps) customClass = NULL;
    
    CObject* node = NULL;

	if (className->m_sString.compare("CCParticleSystem") == 0)
    {
        CCString* spriteFile = new CCString(assetsDir);
		spriteFile->m_sString += ((CCString*)props->objectForKey("spriteFile"))->m_sString;
		
        CCParticleSystem* sys = new CCParticleSystemQuad();
		sys->initWithTotalParticles(2048);
        sys->setTexture(CCTextureCache::sharedTextureCache()->addImage(spriteFile->m_sString.c_str()));
		delete spriteFile;
        node = (CObject*)sys;
		
        setPropsForNode(node, (CCDictionary*) props, extraProps);
        setPropsForParticleSystem((CCParticleSystem*) node, (CCDictionary*) props, extraProps);
    }
    else if (className->m_sString.compare("CCMenuItemImage") == 0)
    {
        CCString* spriteFileNormal = new CCString(assetsDir);
		spriteFileNormal->m_sString += ((CCString*)props->objectForKey("spriteFileNormal"))->getCString();
        CCString* spriteFileSelected = new CCString(assetsDir);
		spriteFileSelected->m_sString += ((CCString*)props->objectForKey("spriteFileSelected"))->getCString();
        CCString* spriteFileDisabled = new CCString(assetsDir);
		spriteFileDisabled->m_sString += ((CCString*)props->objectForKey("spriteFileDisabled"))->getCString();
        
        CCSprite* spriteNormal = NULL;
        CCSprite* spriteSelected = NULL;
        CCSprite* spriteDisabled = NULL;
        
        CCString* spriteSheetFile = (CCString*)props->objectForKey("spriteFramesFile");
        if (spriteSheetFile  && !spriteSheetFile->length()) {
			spriteSheetFile->m_sString.insert(0, assetsDir);
		}
        
        if (spriteSheetFile && !spriteSheetFile->length())
        {
			CCSpriteFrameCache::sharedSpriteFrameCache()->addSpriteFramesWithFile(spriteSheetFile->m_sString.c_str());
            
            try {
                spriteNormal = CCSprite::spriteWithSpriteFrameName(((CCString*)props->objectForKey("spriteFileNormal"))->getCString());
                spriteSelected = CCSprite::spriteWithSpriteFrameName(((CCString*)props->objectForKey("spriteFileSelected"))->getCString());
				spriteDisabled = CCSprite::spriteWithSpriteFrameName(((CCString*)props->objectForKey("spriteFileDisabled"))->getCString());
            }
            catch (exception& e)
            {
				
                spriteNormal = NULL;
                spriteSelected = NULL;
                spriteDisabled = NULL;
            }
        }
        else
        {
            spriteNormal = CCSprite::spriteWithFile(spriteFileNormal->m_sString.c_str());
            spriteSelected = CCSprite::spriteWithFile(spriteFileSelected->m_sString.c_str());
            spriteDisabled = CCSprite::spriteWithFile(spriteFileDisabled->m_sString.c_str());
        }
		
		//deallocate
		delete spriteFileNormal;
		spriteFileNormal = NULL;
		delete spriteFileSelected;
		spriteFileSelected = NULL;
		delete spriteFileDisabled;
		spriteFileDisabled = NULL;
        
        if (!spriteNormal) spriteNormal = CCSprite::spriteWithFile("missing-texture.png");
        if (!spriteSelected) spriteSelected = CCSprite::spriteWithFile("missing-texture.png");
		if (!spriteDisabled) spriteDisabled = CCSprite::spriteWithFile("missing-texture.png");
		
        CObject *target = NULL ;
        if ( extraProps == NULL )
        {
            int targetType = ((CCString*)(props->objectForKey("target")))->intValue() ;
            if ( targetType == kCCBMemberVarAssignmentTypeDocumentRoot )
                target = (CObject*)root ;
            else if ( targetType == kCCBMemberVarAssignmentTypeOwner )
                target = (CObject*)owner ;
            
        }
        CCString *selectorName = (CCString*)props->objectForKey("selector") ;
        
        SEL_MenuHandler sel = menu_selector(CObject::menuCallBack) ;
        //typedef 
        //target->registMethod() ;
        if ( selectorName->m_sString.empty() )
        {
            CCLog("WARNING! CCMenuItemImage target doesn't respond to selector %@",selectorName) ;
            target = NULL ;
            sel = NULL ;
        }
        
		node = (CObject*)CCMenuItemImage::itemWithNormalSprite((CCNode*) spriteNormal, (CCNode*) spriteSelected, (CCNode*) spriteDisabled, target, sel);
        
        setPropsForNode(node, (CCDictionary*) props, extraProps);
        setPropsForMenuItem((CCMenuItem*) node, (CCDictionary*) props, extraProps);
        setPropsForMenuItemImage((CCMenuItemImage*) node, (CCDictionary*) props, extraProps);
    }
    else if (className->m_sString.compare("CCMenu") == 0)
    {
        node = (CObject*)CCMenu::menuWithItems(NULL);
		setPropsForNode(node, (CCDictionary*) props, extraProps);
        setPropsForLayer((CCLayer*) node, (CCDictionary*) props, extraProps);
        setPropsForMenu((CCMenu*)node, (CCDictionary*) props, extraProps);
    }
	else if (className->m_sString.compare("CCLabelBMFont") == 0)
    {
        CCString* fontFile = new CCString(assetsDir);
		fontFile->m_sString += ((CCString*)props->objectForKey("fontFile"))->m_sString;
        CCString* stringText = ((CCString*)props->objectForKey("string"));
		
        try {
			node = (CObject*)CCLabelBMFont::labelWithString(stringText->m_sString.c_str(), fontFile->m_sString.c_str());
        }
        catch (exception& e) {
			delete node;
            node = NULL;
        }
		
		delete fontFile;
		fontFile = 0;
		
        if (!node) node = (CObject*)CCLabelBMFont::labelWithString(stringText->m_sString.c_str(), "missing-font.fnt");
        
        setPropsForNode(node, (CCDictionary*) props, extraProps);
		setPropsForLabelBMFont((CCLabelBMFont*) node, (CCDictionary*) props, extraProps);
    }
	else if (className->m_sString.compare("CCSprite") == 0)
    {
        CCString* spriteFile = new CCString(assetsDir);
		spriteFile->m_sString += ((CCString*)props->objectForKey("spriteFile"))->m_sString;
        CCString* spriteSheetFile = (CCString*)props->objectForKey("spriteFramesFile");
		
        if (spriteSheetFile && !spriteSheetFile->length())
		{
			spriteSheetFile->m_sString.insert(0, assetsDir);
		}
        
        if (spriteSheetFile && !spriteSheetFile->length())
        {
            try
            {
				CCSpriteFrameCache::sharedSpriteFrameCache()->addSpriteFramesWithFile(spriteSheetFile->m_sString.c_str());
                node = (CObject*)CCSprite::spriteWithSpriteFrameName(((CCString*)props->objectForKey("spriteFile"))->m_sString.c_str());

            }
            catch (exception& e) {
				delete node;
                node = NULL;
            }
        }
        else
        {
            printf("spriteFile->m_string.cstr is %s\n", spriteFile->m_sString.c_str()) ;
            node = (CObject*)CCSprite::spriteWithFile(spriteFile->m_sString.c_str());
        }
		
		delete spriteFile;
		spriteFile = 0;
        
        if (!node) node = (CObject*)CCSprite::spriteWithFile("missing-texture.png");
        
        setPropsForNode(node, (CCDictionary*) props, extraProps);
        setPropsForSprite((CCSprite*) node, (CCDictionary*) props, extraProps);
    }
    else if (className->m_sString.compare("CCLayerGradient") == 0)
    {
        node = (CObject*)createCustomClassWithName(customClass) ;
        if (node)
        {
            if (dynamic_cast<CCLayerGradient*>(node) == NULL)
            {
                CCLog("WARNING! %s is not subclass of CCNode", customClass);
				delete node;
                node = NULL;
            }
        }
        else
        {
            node = (CObject*)CCLayerGradient::node();
        }
        
        setPropsForNode(node, (CCDictionary*) props, extraProps);
        setPropsForLayer((CCLayer*) node, (CCDictionary*) props, extraProps);
        setPropsForLayerColor((CCLayerColor*) node, (CCDictionary*) props, extraProps);
        setPropsForLayerGradient((CCLayerGradient*) node, (CCDictionary*) props, extraProps);
        
    }
    else if (className->m_sString.compare("CCLayerColor") == 0)
    {
        node = (CObject*)createCustomClassWithName(customClass) ;
        if (node)
        {
            if (dynamic_cast<CCLayerColor*>(node) == NULL)
            {
                CCLog("WARNING! %s is not subclass of CCNode", customClass);
				delete node;
                node = NULL;
            }
        }
        else
        {
            node = (CObject*)CCLayerColor::node();
        }
        setPropsForNode(node, (CCDictionary*) props, extraProps);
        setPropsForLayer((CCLayer*) node, (CCDictionary*) props, extraProps);
        setPropsForLayerColor((CCLayerColor*) node, (CCDictionary*) props, extraProps);
    }
    else if (className->m_sString.compare("CCLayer") == 0)
    {
        node = (CObject*)createCustomClassWithName(customClass) ;
        if (node)
        {
            if (dynamic_cast<CCLayer*>(node) == NULL)
            {
                CCLog("WARNING! %s is not subclass of CCNode", customClass);
				delete node;
                node = NULL;
            }
        }
        else
        {
            node = (CObject*)CCLayer::node();
        }
        
        setPropsForNode(node, (CCDictionary*) props, extraProps);
        setPropsForLayer((CCLayer*) node, (CCDictionary*) props, extraProps);
    }
    else if (className->m_sString.compare("CCNode") == 0)
    {
        node = (CObject*)createCustomClassWithName(customClass) ;

        if (node)
        {
            if (dynamic_cast<CCNode*>(node) == NULL)
            {
                CCLog("WARNING! %s is not subclass of CCNode", customClass);
				delete node;
                node = NULL;
            }
        }
        else
        {
            node = (CObject*)CCNode::node();
        }
		
        setPropsForNode(node, (CCDictionary*) props, extraProps);
    }
    else
    {
		CCLog("WARNING! Class of type %@ couldn't be found", className);
        return NULL;
    }
    
    if (!root) root = node;
    
    // Add children
    for (int i = 0; i < children->count(); i++)
    {
        CCDictionary* childDict = (CCDictionary*) children->objectAtIndex(i);
        CCNode* child = ccObjectFromDictionary(childDict, extraProps, assetsDir, owner, root);
        int zOrder = intValFromDict((CCDictionary*) childDict->objectForKey("properties"), "zOrder");
		
        if (child && node)
        {
            node->addChild(child, zOrder);
        }
        else
        {
			CCLog("WARNING! Failed to add child to node");
        }
    }
    if ( !extraProps )
    {
        CCString* assignmentName = (CCString*)props->objectForKey("memberVarAssignmentName");
        CCLOG("assignmentName is %s", assignmentName->getCString()) ;
        int assignmentType = ((CCString*)(props->objectForKey("memberVarAssignmentType")))->intValue() ;
        
        if ( !assignmentName->m_sString.empty() &&
             assignmentType)
        {
            CObject*assignTo = NULL ;
            if ( assignmentType == kCCBMemberVarAssignmentTypeOwner )
                assignTo = (CObject*)owner ;
            else if ( assignmentType == kCCBMemberVarAssignmentTypeDocumentRoot )
                assignTo = (CObject*)root ;
            
            if ( assignTo != NULL )
            {
                //CCLog("sprite;s position is %f", node->getPosition().x) ;
                string spriteStr = "set" + assignmentName->m_sString ;
                CCLog("spriteStr is %s, sprite's position is %f", spriteStr.c_str(), node->getPosition().x);
                assignTo->propertyMap[spriteStr](assignTo, node) ;
                // @_@||
                //无奈 T_T  可能问题：1、在ccb中定义了变量，可是没有在文件中声明。
            }
        }
        if (!customClass->m_sString.empty())
        {
            ((CObject*)node)->didLoadFromCCB() ;
        }
        
    }
    return node;
}

CCNode* CCBReader::ccObjectFromDictionary(CCDictionary* dict, CCDictionary* extraProps, const char* assetsDir, CCObject* owner)
{
	 return ccObjectFromDictionary(dict, extraProps, assetsDir, owner, NULL);
}

#pragma mark -
#pragma mark initialize ccbreader

CCNode* CCBReader::nodeGraphFromDictionary(CCDictionary* dict, CCDictionary* extraProps, const char* assetsDir, CCObject* owner)
{
	if (!dict)
    {
        CCLog("WARNING! Trying to load invalid file type");
        return NULL;
    }
	
    CCString* fileType = (CCString*) dict->objectForKey("fileType");
    int fileVersion = ((CCString*) dict->objectForKey("fileVersion"))->intValue();
    
    if (!fileType  || fileType->m_sString.compare("CocosBuilder") != 0)
    {
        CCLog("WARNING! Trying to load invalid file type");
    }

    if (fileVersion > 1)
    {
        CCLog("WARNING! Trying to load file made with a newer version of CocosBuilder, please update the CCBReader class");
        return NULL;
    }
    
    CCDictionary* nodeGraph = (CCDictionary*) dict->objectForKey("nodeGraph");
    return ccObjectFromDictionary(nodeGraph, extraProps, assetsDir, owner);
}

CCNode* CCBReader::nodeGraphFromDictionary(CCDictionary*dict) 
{
    return nodeGraphFromDictionary(dict, NULL, "", NULL) ;
}

CCNode* CCBReader::nodeGraphFromDictionary(CCDictionary* dict, CCObject* owner)
{
	return nodeGraphFromDictionary(dict, NULL, "", owner);
}

CCNode* CCBReader::nodeGraphFromFile(const char* file)
{
    return nodeGraphFromFile(file, NULL) ;
}

CCNode* CCBReader::nodeGraphFromFile(const char* file, CCObject* owner)
{

	CCLog("CCBReader path is: %s", file);    
	std::string xmlFile = CCFileUtils::fullPathFromRelativePath(file);    
    CCDictionary* dict = (CCDictionary*) CCDictionary::dictionaryWithContentsOfFileThreadSafe(xmlFile.c_str());
	CCAssert(dict != NULL, "CCBReader: file not found");
    
	return nodeGraphFromDictionary(dict, owner);
}
CCScene* CCBReader::sceneWithNodeGraphFromFile(const char* file)
{
    return sceneWithNodeGraphFromFile(file, NULL) ;
}
CCScene* CCBReader::sceneWithNodeGraphFromFile(const char* file, CCObject* owner)
{
	CCNode* node = nodeGraphFromFile(file, owner);
    CCScene* scene = CCScene::node();

    scene->addChild(node);
    return scene;	
}

/*
** Lua binding: Cocos2d
** Generated automatically by tolua++-1.0.92 on 04/15/12 15:44:16.
*/

#include <vector>
#include <map>
#include "LuaCocos2d.h"
#include "tolua_fix.h"
#include "cocos2d.h"
//#include "CCRibbon.h"
#include "SimpleAudioEngine.h"

using namespace cocos2d;
using namespace CocosDenshion;


#include "LuaCocos2d.h"

/* function to release collected object via destructor */
#ifdef __cplusplus

static int tolua_collect_CCPoint (lua_State* tolua_S)
{
 CCPoint* self = (CCPoint*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_CCString (lua_State* tolua_S)
{
 CCString* self = (CCString*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_ccV3F_C4B_T2F_Quad (lua_State* tolua_S)
{
 ccV3F_C4B_T2F_Quad* self = (ccV3F_C4B_T2F_Quad*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_CCAffineTransform (lua_State* tolua_S)
{
 CCAffineTransform* self = (CCAffineTransform*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_CCFloat (lua_State* tolua_S)
{
 CCFloat* self = (CCFloat*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_ccBlendFunc (lua_State* tolua_S)
{
 ccBlendFunc* self = (ccBlendFunc*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_ccVertex3F (lua_State* tolua_S)
{
 ccVertex3F* self = (ccVertex3F*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_ccVertex2F (lua_State* tolua_S)
{
 ccVertex2F* self = (ccVertex2F*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_ccGridSize (lua_State* tolua_S)
{
 ccGridSize* self = (ccGridSize*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_ccColor4F (lua_State* tolua_S)
{
 ccColor4F* self = (ccColor4F*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_CCSize (lua_State* tolua_S)
{
 CCSize* self = (CCSize*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_ccColor3B (lua_State* tolua_S)
{
 ccColor3B* self = (ccColor3B*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_ccColor4B (lua_State* tolua_S)
{
 ccColor4B* self = (ccColor4B*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_CCRect (lua_State* tolua_S)
{
 CCRect* self = (CCRect*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_ccTex2F (lua_State* tolua_S)
{
 ccTex2F* self = (ccTex2F*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_CCCamera (lua_State* tolua_S)
{
 CCCamera* self = (CCCamera*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}
#endif


/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"CCTransitionFadeTR");
 tolua_usertype(tolua_S,"CCTileMapAtlas");
 tolua_usertype(tolua_S,"ccV3F_C4B_T2F_Quad");
 tolua_usertype(tolua_S,"ccV2F_C4F_T2F");
 tolua_usertype(tolua_S,"CCTransitionTurnOffTiles");
 tolua_usertype(tolua_S,"CCTransitionShrinkGrow");
 tolua_usertype(tolua_S,"CCDirector");
 tolua_usertype(tolua_S,"ccQuad3");
 tolua_usertype(tolua_S,"CCTransitionFlipY");
 tolua_usertype(tolua_S,"CCSpriteFrameCache");
 tolua_usertype(tolua_S,"ccVertex2F");
 tolua_usertype(tolua_S,"CCNode");
 tolua_usertype(tolua_S,"CCApplication");
 tolua_usertype(tolua_S,"ccColor3B");
 tolua_usertype(tolua_S,"CCMenuItemLabel");
 tolua_usertype(tolua_S,"CCTextureCache");
 tolua_usertype(tolua_S,"CCString");
 tolua_usertype(tolua_S,"CCTextureAtlas");
 tolua_usertype(tolua_S,"CCMenuItemSprite");
 tolua_usertype(tolua_S,"ccGridSize");
 tolua_usertype(tolua_S,"CCTransitionFade");
 tolua_usertype(tolua_S,"CCTransitionSlideInB");
 tolua_usertype(tolua_S,"CCAction");
 tolua_usertype(tolua_S,"CCTransitionSlideInT");
 tolua_usertype(tolua_S,"CCLabelTTF");
 tolua_usertype(tolua_S,"ccV2F_C4B_T2F_Quad");
 tolua_usertype(tolua_S,"CCImage");
 tolua_usertype(tolua_S,"sImageTGA");
 tolua_usertype(tolua_S,"CCMenuItemToggle");
 tolua_usertype(tolua_S,"CCSprite");
 tolua_usertype(tolua_S,"CCTransitionMoveInT");
 tolua_usertype(tolua_S,"SimpleAudioEngine");
 tolua_usertype(tolua_S,"CCPoint");
 tolua_usertype(tolua_S,"CCFileUtils");
 tolua_usertype(tolua_S,"CCLayer");
 tolua_usertype(tolua_S,"CCTouch");
 tolua_usertype(tolua_S,"CCTransitionSplitCols");
 tolua_usertype(tolua_S,"CCTransitionMoveInB");
 tolua_usertype(tolua_S,"ccV2F_C4B_T2F");
 tolua_usertype(tolua_S,"GLenum");
 tolua_usertype(tolua_S,"ccBlendFunc");
 tolua_usertype(tolua_S,"CCTransitionFlipAngular");
 tolua_usertype(tolua_S,"CCObject");
 tolua_usertype(tolua_S,"CCFloat");
 tolua_usertype(tolua_S,"CCUserDefault");
 tolua_usertype(tolua_S,"ccQuad2");
 tolua_usertype(tolua_S,"CCTransitionZoomFlipY");
 tolua_usertype(tolua_S,"ccV3F_C4B_T2F");
 tolua_usertype(tolua_S,"ccVertex3F");
 tolua_usertype(tolua_S,"CCLayerColor");
 tolua_usertype(tolua_S,"CCMenuItemFont");
 tolua_usertype(tolua_S,"CCTransitionFadeUp");
 tolua_usertype(tolua_S,"CCTransitionSlideInL");
 tolua_usertype(tolua_S,"CCTransitionFlipX");
 tolua_usertype(tolua_S,"CCLabelAtlas");
 tolua_usertype(tolua_S,"ccColor4F");
 tolua_usertype(tolua_S,"ccColor4B");
 tolua_usertype(tolua_S,"CCTransitionSlideInR");
 tolua_usertype(tolua_S,"CCActionInterval");
 tolua_usertype(tolua_S,"CCTexture2D");
 tolua_usertype(tolua_S,"CCLabelBMFont");
 tolua_usertype(tolua_S,"_ccArray");
 tolua_usertype(tolua_S,"CCTransitionFadeDown");
 tolua_usertype(tolua_S,"CCTransitionSplitRows");
 tolua_usertype(tolua_S,"CCScene");
 tolua_usertype(tolua_S,"ccV2F_C4F_T2F_Quad");
 tolua_usertype(tolua_S,"CCAtlasNode");
 tolua_usertype(tolua_S,"CCLayerGradient");
 tolua_usertype(tolua_S,"CCMenuItemImage");
 tolua_usertype(tolua_S,"ccPointSprite");
 tolua_usertype(tolua_S,"CCMenu");
 tolua_usertype(tolua_S,"CCLayerMultiplex");
 tolua_usertype(tolua_S,"CCGridBase");
 tolua_usertype(tolua_S,"CCTransitionZoomFlipX");
 tolua_usertype(tolua_S,"CCSize");
 tolua_usertype(tolua_S,"ccTexParams");
 tolua_usertype(tolua_S,"CCTransitionRotoZoom");
 tolua_usertype(tolua_S,"CCTransitionZoomFlipAngular");
 tolua_usertype(tolua_S,"ccTex2F");
 tolua_usertype(tolua_S,"CCArray");
 tolua_usertype(tolua_S,"CCTransitionPageTurn");
 tolua_usertype(tolua_S,"CCMenuItemAtlasFont");
 tolua_usertype(tolua_S,"CCAffineTransform");
 tolua_usertype(tolua_S,"CCTransitionMoveInR");
 tolua_usertype(tolua_S,"CCTransitionJumpZoom");
 tolua_usertype(tolua_S,"CCRect");
 tolua_usertype(tolua_S,"CCCamera");
 tolua_usertype(tolua_S,"CCTransitionSceneOriented");
 tolua_usertype(tolua_S,"va_list");
 tolua_usertype(tolua_S,"CCParallaxNode");
 tolua_usertype(tolua_S,"CCMenuItem");
 tolua_usertype(tolua_S,"CCTransitionFadeBL");
 tolua_usertype(tolua_S,"CCTransitionMoveInL");
 tolua_usertype(tolua_S,"CCSpriteFrame");
 tolua_usertype(tolua_S,"CCTextFieldTTF");
 tolua_usertype(tolua_S,"CCTransitionCrossFade");
}

/* method: sharedApplication of class  CCApplication */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCApplication_sharedApplication00
static int tolua_Cocos2d_CCApplication_sharedApplication00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCApplication",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CCApplication& tolua_ret = (CCApplication&)  CCApplication::sharedApplication();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"CCApplication");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'sharedApplication'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getCurrentLanguage of class  CCApplication */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCApplication_getCurrentLanguage00
static int tolua_Cocos2d_CCApplication_getCurrentLanguage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCApplication",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   ccLanguageType tolua_ret = (ccLanguageType)  CCApplication::getCurrentLanguage();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getCurrentLanguage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: count of class  CCArray */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCArray_count00
static int tolua_Cocos2d_CCArray_count00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCArray",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCArray* self = (CCArray*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'count'", NULL);
#endif
  {
   unsigned int tolua_ret = (unsigned int)  self->count();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'count'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: capacity of class  CCArray */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCArray_capacity00
static int tolua_Cocos2d_CCArray_capacity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCArray",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCArray* self = (CCArray*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'capacity'", NULL);
#endif
  {
   unsigned int tolua_ret = (unsigned int)  self->capacity();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'capacity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: indexOfObject of class  CCArray */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCArray_indexOfObject00
static int tolua_Cocos2d_CCArray_indexOfObject00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCArray",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCObject",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCArray* self = (CCArray*)  tolua_tousertype(tolua_S,1,0);
  CCObject* object = ((CCObject*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'indexOfObject'", NULL);
#endif
  {
   unsigned int tolua_ret = (unsigned int)  self->indexOfObject(object);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'indexOfObject'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: objectAtIndex of class  CCArray */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCArray_objectAtIndex00
static int tolua_Cocos2d_CCArray_objectAtIndex00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCArray",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCArray* self = (CCArray*)  tolua_tousertype(tolua_S,1,0);
  unsigned int index = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'objectAtIndex'", NULL);
#endif
  {
   CCObject* tolua_ret = (CCObject*)  self->objectAtIndex(index);
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    tolua_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCObject");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'objectAtIndex'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: lastObject of class  CCArray */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCArray_lastObject00
static int tolua_Cocos2d_CCArray_lastObject00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCArray",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCArray* self = (CCArray*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'lastObject'", NULL);
#endif
  {
   CCObject* tolua_ret = (CCObject*)  self->lastObject();
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    tolua_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCObject");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'lastObject'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: randomObject of class  CCArray */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCArray_randomObject00
static int tolua_Cocos2d_CCArray_randomObject00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCArray",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCArray* self = (CCArray*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'randomObject'", NULL);
#endif
  {
   CCObject* tolua_ret = (CCObject*)  self->randomObject();
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    tolua_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCObject");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'randomObject'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: containsObject of class  CCArray */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCArray_containsObject00
static int tolua_Cocos2d_CCArray_containsObject00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCArray",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCObject",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCArray* self = (CCArray*)  tolua_tousertype(tolua_S,1,0);
  CCObject* object = ((CCObject*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'containsObject'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->containsObject(object);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'containsObject'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addObject of class  CCArray */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCArray_addObject00
static int tolua_Cocos2d_CCArray_addObject00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCArray",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCObject",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCArray* self = (CCArray*)  tolua_tousertype(tolua_S,1,0);
  CCObject* object = ((CCObject*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addObject'", NULL);
#endif
  {
   self->addObject(object);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addObject'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addObjectsFromArray of class  CCArray */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCArray_addObjectsFromArray00
static int tolua_Cocos2d_CCArray_addObjectsFromArray00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCArray",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCArray",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCArray* self = (CCArray*)  tolua_tousertype(tolua_S,1,0);
  CCArray* otherArray = ((CCArray*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addObjectsFromArray'", NULL);
#endif
  {
   self->addObjectsFromArray(otherArray);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addObjectsFromArray'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: insertObject of class  CCArray */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCArray_insertObject00
static int tolua_Cocos2d_CCArray_insertObject00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCArray",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCObject",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCArray* self = (CCArray*)  tolua_tousertype(tolua_S,1,0);
  CCObject* object = ((CCObject*)  tolua_tousertype(tolua_S,2,0));
  unsigned int index = ((unsigned int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'insertObject'", NULL);
#endif
  {
   self->insertObject(object,index);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'insertObject'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeLastObject of class  CCArray */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCArray_removeLastObject00
static int tolua_Cocos2d_CCArray_removeLastObject00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCArray",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCArray* self = (CCArray*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeLastObject'", NULL);
#endif
  {
   self->removeLastObject();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeLastObject'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeObject of class  CCArray */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCArray_removeObject00
static int tolua_Cocos2d_CCArray_removeObject00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCArray",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCObject",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCArray* self = (CCArray*)  tolua_tousertype(tolua_S,1,0);
  CCObject* object = ((CCObject*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeObject'", NULL);
#endif
  {
   self->removeObject(object);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeObject'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeObjectAtIndex of class  CCArray */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCArray_removeObjectAtIndex00
static int tolua_Cocos2d_CCArray_removeObjectAtIndex00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCArray",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCArray* self = (CCArray*)  tolua_tousertype(tolua_S,1,0);
  unsigned int index = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeObjectAtIndex'", NULL);
#endif
  {
   self->removeObjectAtIndex(index);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeObjectAtIndex'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeObjectsInArray of class  CCArray */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCArray_removeObjectsInArray00
static int tolua_Cocos2d_CCArray_removeObjectsInArray00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCArray",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCArray",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCArray* self = (CCArray*)  tolua_tousertype(tolua_S,1,0);
  CCArray* otherArray = ((CCArray*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeObjectsInArray'", NULL);
#endif
  {
   self->removeObjectsInArray(otherArray);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeObjectsInArray'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeAllObjects of class  CCArray */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCArray_removeAllObjects00
static int tolua_Cocos2d_CCArray_removeAllObjects00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCArray",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCArray* self = (CCArray*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeAllObjects'", NULL);
#endif
  {
   self->removeAllObjects();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeAllObjects'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: fastRemoveObject of class  CCArray */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCArray_fastRemoveObject00
static int tolua_Cocos2d_CCArray_fastRemoveObject00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCArray",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCObject",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCArray* self = (CCArray*)  tolua_tousertype(tolua_S,1,0);
  CCObject* object = ((CCObject*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'fastRemoveObject'", NULL);
#endif
  {
   self->fastRemoveObject(object);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'fastRemoveObject'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: fastRemoveObjectAtIndex of class  CCArray */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCArray_fastRemoveObjectAtIndex00
static int tolua_Cocos2d_CCArray_fastRemoveObjectAtIndex00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCArray",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCArray* self = (CCArray*)  tolua_tousertype(tolua_S,1,0);
  unsigned int index = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'fastRemoveObjectAtIndex'", NULL);
#endif
  {
   self->fastRemoveObjectAtIndex(index);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'fastRemoveObjectAtIndex'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: exchangeObject of class  CCArray */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCArray_exchangeObject00
static int tolua_Cocos2d_CCArray_exchangeObject00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCArray",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCObject",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"CCObject",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCArray* self = (CCArray*)  tolua_tousertype(tolua_S,1,0);
  CCObject* object1 = ((CCObject*)  tolua_tousertype(tolua_S,2,0));
  CCObject* object2 = ((CCObject*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'exchangeObject'", NULL);
#endif
  {
   self->exchangeObject(object1,object2);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'exchangeObject'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: exchangeObjectAtIndex of class  CCArray */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCArray_exchangeObjectAtIndex00
static int tolua_Cocos2d_CCArray_exchangeObjectAtIndex00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCArray",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCArray* self = (CCArray*)  tolua_tousertype(tolua_S,1,0);
  unsigned int index1 = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
  unsigned int index2 = ((unsigned int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'exchangeObjectAtIndex'", NULL);
#endif
  {
   self->exchangeObjectAtIndex(index1,index2);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'exchangeObjectAtIndex'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: reverseObjects of class  CCArray */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCArray_reverseObjects00
static int tolua_Cocos2d_CCArray_reverseObjects00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCArray",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCArray* self = (CCArray*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'reverseObjects'", NULL);
#endif
  {
   self->reverseObjects();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'reverseObjects'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: reduceMemoryFootprint of class  CCArray */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCArray_reduceMemoryFootprint00
static int tolua_Cocos2d_CCArray_reduceMemoryFootprint00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCArray",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCArray* self = (CCArray*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'reduceMemoryFootprint'", NULL);
#endif
  {
   self->reduceMemoryFootprint();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'reduceMemoryFootprint'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: array of class  CCArray */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCArray_array00
static int tolua_Cocos2d_CCArray_array00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCArray",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CCArray* tolua_ret = (CCArray*)  CCArray::array();
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    tolua_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCArray");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'array'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: arrayWithCapacity of class  CCArray */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCArray_arrayWithCapacity00
static int tolua_Cocos2d_CCArray_arrayWithCapacity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCArray",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  unsigned int capacity = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
  {
   CCArray* tolua_ret = (CCArray*)  CCArray::arrayWithCapacity(capacity);
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    tolua_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCArray");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'arrayWithCapacity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: arrayWithArray of class  CCArray */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCArray_arrayWithArray00
static int tolua_Cocos2d_CCArray_arrayWithArray00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCArray",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCArray",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCArray* otherArray = ((CCArray*)  tolua_tousertype(tolua_S,2,0));
  {
   CCArray* tolua_ret = (CCArray*)  CCArray::arrayWithArray(otherArray);
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    tolua_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCArray");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'arrayWithArray'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: updateAtlasValues of class  CCAtlasNode */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCAtlasNode_updateAtlasValues00
static int tolua_Cocos2d_CCAtlasNode_updateAtlasValues00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCAtlasNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCAtlasNode* self = (CCAtlasNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'updateAtlasValues'", NULL);
#endif
  {
   self->updateAtlasValues();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'updateAtlasValues'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTexture of class  CCAtlasNode */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCAtlasNode_getTexture00
static int tolua_Cocos2d_CCAtlasNode_getTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCAtlasNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCAtlasNode* self = (CCAtlasNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTexture'", NULL);
#endif
  {
   CCTexture2D* tolua_ret = (CCTexture2D*)  self->getTexture();
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    tolua_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCTexture2D");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTexture of class  CCAtlasNode */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCAtlasNode_setTexture00
static int tolua_Cocos2d_CCAtlasNode_setTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCAtlasNode",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTexture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCAtlasNode* self = (CCAtlasNode*)  tolua_tousertype(tolua_S,1,0);
  CCTexture2D* texture = ((CCTexture2D*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTexture'", NULL);
#endif
  {
   self->setTexture(texture);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: atlasWithTileFile of class  CCAtlasNode */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCAtlasNode_atlasWithTileFile00
static int tolua_Cocos2d_CCAtlasNode_atlasWithTileFile00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCAtlasNode",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* tile = ((const char*)  tolua_tostring(tolua_S,2,0));
  unsigned int tileWidth = ((unsigned int)  tolua_tonumber(tolua_S,3,0));
  unsigned int tileHeight = ((unsigned int)  tolua_tonumber(tolua_S,4,0));
  unsigned int itemsToRender = ((unsigned int)  tolua_tonumber(tolua_S,5,0));
  {
   CCAtlasNode* tolua_ret = (CCAtlasNode*)  CCAtlasNode::atlasWithTileFile(tile,tileWidth,tileHeight,itemsToRender);
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    tolua_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCAtlasNode");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'atlasWithTileFile'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CCCamera */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCCamera_new00
static int tolua_Cocos2d_CCCamera_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCCamera",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CCCamera* tolua_ret = (CCCamera*)  Mtolua_new((CCCamera)());
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    tolua_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCCamera");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CCCamera */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCCamera_new00_local
static int tolua_Cocos2d_CCCamera_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCCamera",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CCCamera* tolua_ret = (CCCamera*)  Mtolua_new((CCCamera)());
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    tolua_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCCamera");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: init of class  CCCamera */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCCamera_init00
static int tolua_Cocos2d_CCCamera_init00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCCamera",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCCamera* self = (CCCamera*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'init'", NULL);
#endif
  {
   self->init();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'init'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: description of class  CCCamera */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCCamera_description00
static int tolua_Cocos2d_CCCamera_description00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCCamera",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCCamera* self = (CCCamera*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'description'", NULL);
#endif
  {
   char* tolua_ret = (char*)  self->description();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'description'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDirty of class  CCCamera */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCCamera_setDirty00
static int tolua_Cocos2d_CCCamera_setDirty00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCCamera",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCCamera* self = (CCCamera*)  tolua_tousertype(tolua_S,1,0);
  bool bValue = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDirty'", NULL);
#endif
  {
   self->setDirty(bValue);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDirty'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDirty of class  CCCamera */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCCamera_getDirty00
static int tolua_Cocos2d_CCCamera_getDirty00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCCamera",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCCamera* self = (CCCamera*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDirty'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->getDirty();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDirty'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: restore of class  CCCamera */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCCamera_restore00
static int tolua_Cocos2d_CCCamera_restore00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCCamera",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCCamera* self = (CCCamera*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'restore'", NULL);
#endif
  {
   self->restore();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'restore'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: locate of class  CCCamera */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCCamera_locate00
static int tolua_Cocos2d_CCCamera_locate00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCCamera",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCCamera* self = (CCCamera*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'locate'", NULL);
#endif
  {
   self->locate();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'locate'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setEyeXYZ of class  CCCamera */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCCamera_setEyeXYZ00
static int tolua_Cocos2d_CCCamera_setEyeXYZ00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCCamera",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCCamera* self = (CCCamera*)  tolua_tousertype(tolua_S,1,0);
  float fEyeX = ((float)  tolua_tonumber(tolua_S,2,0));
  float fEyeY = ((float)  tolua_tonumber(tolua_S,3,0));
  float fEyeZ = ((float)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setEyeXYZ'", NULL);
#endif
  {
   self->setEyeXYZ(fEyeX,fEyeY,fEyeZ);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setEyeXYZ'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setCenterXYZ of class  CCCamera */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCCamera_setCenterXYZ00
static int tolua_Cocos2d_CCCamera_setCenterXYZ00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCCamera",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCCamera* self = (CCCamera*)  tolua_tousertype(tolua_S,1,0);
  float fCenterX = ((float)  tolua_tonumber(tolua_S,2,0));
  float fCenterY = ((float)  tolua_tonumber(tolua_S,3,0));
  float fCenterZ = ((float)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCenterXYZ'", NULL);
#endif
  {
   self->setCenterXYZ(fCenterX,fCenterY,fCenterZ);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setCenterXYZ'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setUpXYZ of class  CCCamera */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCCamera_setUpXYZ00
static int tolua_Cocos2d_CCCamera_setUpXYZ00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCCamera",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCCamera* self = (CCCamera*)  tolua_tousertype(tolua_S,1,0);
  float fUpX = ((float)  tolua_tonumber(tolua_S,2,0));
  float fUpY = ((float)  tolua_tonumber(tolua_S,3,0));
  float fUpZ = ((float)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setUpXYZ'", NULL);
#endif
  {
   self->setUpXYZ(fUpX,fUpY,fUpZ);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setUpXYZ'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getEyeXYZ of class  CCCamera */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCCamera_getEyeXYZ00
static int tolua_Cocos2d_CCCamera_getEyeXYZ00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCCamera",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCCamera* self = (CCCamera*)  tolua_tousertype(tolua_S,1,0);
  float pEyeX = ((float)  tolua_tonumber(tolua_S,2,0));
  float pEyeY = ((float)  tolua_tonumber(tolua_S,3,0));
  float pEyeZ = ((float)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getEyeXYZ'", NULL);
#endif
  {
   self->getEyeXYZ(&pEyeX,&pEyeY,&pEyeZ);
   tolua_pushnumber(tolua_S,(lua_Number)pEyeX);
   tolua_pushnumber(tolua_S,(lua_Number)pEyeY);
   tolua_pushnumber(tolua_S,(lua_Number)pEyeZ);
  }
 }
 return 3;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getEyeXYZ'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getCenterXYZ of class  CCCamera */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCCamera_getCenterXYZ00
static int tolua_Cocos2d_CCCamera_getCenterXYZ00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCCamera",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCCamera* self = (CCCamera*)  tolua_tousertype(tolua_S,1,0);
  float pCenterX = ((float)  tolua_tonumber(tolua_S,2,0));
  float pCenterY = ((float)  tolua_tonumber(tolua_S,3,0));
  float pCenterZ = ((float)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getCenterXYZ'", NULL);
#endif
  {
   self->getCenterXYZ(&pCenterX,&pCenterY,&pCenterZ);
   tolua_pushnumber(tolua_S,(lua_Number)pCenterX);
   tolua_pushnumber(tolua_S,(lua_Number)pCenterY);
   tolua_pushnumber(tolua_S,(lua_Number)pCenterZ);
  }
 }
 return 3;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getCenterXYZ'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getUpXYZ of class  CCCamera */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCCamera_getUpXYZ00
static int tolua_Cocos2d_CCCamera_getUpXYZ00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCCamera",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCCamera* self = (CCCamera*)  tolua_tousertype(tolua_S,1,0);
  float pUpX = ((float)  tolua_tonumber(tolua_S,2,0));
  float pUpY = ((float)  tolua_tonumber(tolua_S,3,0));
  float pUpZ = ((float)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getUpXYZ'", NULL);
#endif
  {
   self->getUpXYZ(&pUpX,&pUpY,&pUpZ);
   tolua_pushnumber(tolua_S,(lua_Number)pUpX);
   tolua_pushnumber(tolua_S,(lua_Number)pUpY);
   tolua_pushnumber(tolua_S,(lua_Number)pUpZ);
  }
 }
 return 3;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getUpXYZ'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getZEye of class  CCCamera */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCCamera_getZEye00
static int tolua_Cocos2d_CCCamera_getZEye00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCCamera",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   float tolua_ret = (float)  CCCamera::getZEye();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getZEye'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: CCLuaLog */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCLuaLog00
static int tolua_Cocos2d_CCLuaLog00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isstring(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* pszFormat = ((const char*)  tolua_tostring(tolua_S,1,0));
  {
   CCLuaLog(pszFormat);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'CCLuaLog'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: CCMessageBox */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCMessageBox00
static int tolua_Cocos2d_CCMessageBox00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isstring(tolua_S,1,0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* pszMsg = ((const char*)  tolua_tostring(tolua_S,1,0));
  const char* pszTitle = ((const char*)  tolua_tostring(tolua_S,2,0));
  {
   CCMessageBox(pszMsg,pszTitle);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'CCMessageBox'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getRunningScene of class  CCDirector */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCDirector_getRunningScene00
static int tolua_Cocos2d_CCDirector_getRunningScene00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCDirector",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCDirector* self = (CCDirector*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getRunningScene'", NULL);
#endif
  {
   CCScene* tolua_ret = (CCScene*)  self->getRunningScene();
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    tolua_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCScene");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getRunningScene'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getAnimationInterval of class  CCDirector */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCDirector_getAnimationInterval00
static int tolua_Cocos2d_CCDirector_getAnimationInterval00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCDirector",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCDirector* self = (CCDirector*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getAnimationInterval'", NULL);
#endif
  {
   double tolua_ret = (double)  self->getAnimationInterval();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getAnimationInterval'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isDisplayStats of class  CCDirector */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCDirector_isDisplayStats00
static int tolua_Cocos2d_CCDirector_isDisplayStats00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCDirector",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCDirector* self = (CCDirector*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isDisplayStats'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isDisplayStats();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isDisplayStats'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDisplayStats of class  CCDirector */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCDirector_setDisplayStats00
static int tolua_Cocos2d_CCDirector_setDisplayStats00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCDirector",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCDirector* self = (CCDirector*)  tolua_tousertype(tolua_S,1,0);
  bool bDisplayFPS = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDisplayStats'", NULL);
#endif
  {
   self->setDisplayStats(bDisplayFPS);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDisplayStats'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isPaused of class  CCDirector */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCDirector_isPaused00
static int tolua_Cocos2d_CCDirector_isPaused00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCDirector",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCDirector* self = (CCDirector*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isPaused'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isPaused();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isPaused'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getFrames of class  CCDirector */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCDirector_getFrames00
static int tolua_Cocos2d_CCDirector_getFrames00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCDirector",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCDirector* self = (CCDirector*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getFrames'", NULL);
#endif
  {
   unsigned int tolua_ret = (unsigned int)  self->getFrames();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getFrames'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getWinSize of class  CCDirector */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCDirector_getWinSize00
static int tolua_Cocos2d_CCDirector_getWinSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCDirector",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCDirector* self = (CCDirector*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getWinSize'", NULL);
#endif
  {
   CCSize tolua_ret = (CCSize)  self->getWinSize();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((CCSize)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"CCSize");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CCSize));
     tolua_pushusertype(tolua_S,tolua_obj,"CCSize");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getWinSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getWinSizeInPixels of class  CCDirector */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCDirector_getWinSizeInPixels00
static int tolua_Cocos2d_CCDirector_getWinSizeInPixels00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCDirector",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCDirector* self = (CCDirector*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getWinSizeInPixels'", NULL);
#endif
  {
   CCSize tolua_ret = (CCSize)  self->getWinSizeInPixels();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((CCSize)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"CCSize");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CCSize));
     tolua_pushusertype(tolua_S,tolua_obj,"CCSize");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getWinSizeInPixels'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: convertToGL of class  CCDirector */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCDirector_convertToGL00
static int tolua_Cocos2d_CCDirector_convertToGL00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCDirector",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCDirector* self = (CCDirector*)  tolua_tousertype(tolua_S,1,0);
  CCPoint obPoint = *((CCPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'convertToGL'", NULL);
#endif
  {
   CCPoint tolua_ret = (CCPoint)  self->convertToGL(obPoint);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((CCPoint)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"CCPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CCPoint));
     tolua_pushusertype(tolua_S,tolua_obj,"CCPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'convertToGL'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: convertToUI of class  CCDirector */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCDirector_convertToUI00
static int tolua_Cocos2d_CCDirector_convertToUI00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCDirector",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCDirector* self = (CCDirector*)  tolua_tousertype(tolua_S,1,0);
  CCPoint obPoint = *((CCPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'convertToUI'", NULL);
#endif
  {
   CCPoint tolua_ret = (CCPoint)  self->convertToUI(obPoint);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((CCPoint)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"CCPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CCPoint));
     tolua_pushusertype(tolua_S,tolua_obj,"CCPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'convertToUI'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: runWithScene of class  CCDirector */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCDirector_runWithScene00
static int tolua_Cocos2d_CCDirector_runWithScene00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCDirector",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCScene",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCDirector* self = (CCDirector*)  tolua_tousertype(tolua_S,1,0);
  CCScene* pScene = ((CCScene*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'runWithScene'", NULL);
#endif
  {
   self->runWithScene(pScene);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'runWithScene'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: pushScene of class  CCDirector */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCDirector_pushScene00
static int tolua_Cocos2d_CCDirector_pushScene00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCDirector",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCScene",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCDirector* self = (CCDirector*)  tolua_tousertype(tolua_S,1,0);
  CCScene* pScene = ((CCScene*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'pushScene'", NULL);
#endif
  {
   self->pushScene(pScene);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'pushScene'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: popScene of class  CCDirector */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCDirector_popScene00
static int tolua_Cocos2d_CCDirector_popScene00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCDirector",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCDirector* self = (CCDirector*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'popScene'", NULL);
#endif
  {
   self->popScene();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'popScene'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: replaceScene of class  CCDirector */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCDirector_replaceScene00
static int tolua_Cocos2d_CCDirector_replaceScene00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCDirector",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCScene",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCDirector* self = (CCDirector*)  tolua_tousertype(tolua_S,1,0);
  CCScene* pScene = ((CCScene*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'replaceScene'", NULL);
#endif
  {
   self->replaceScene(pScene);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'replaceScene'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getContentScaleFactor of class  CCDirector */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCDirector_getContentScaleFactor00
static int tolua_Cocos2d_CCDirector_getContentScaleFactor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCDirector",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCDirector* self = (CCDirector*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getContentScaleFactor'", NULL);
#endif
  {
   CCFloat tolua_ret = (CCFloat)  self->getContentScaleFactor();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((CCFloat)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"CCFloat");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CCFloat));
     tolua_pushusertype(tolua_S,tolua_obj,"CCFloat");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getContentScaleFactor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: sharedDirector of class  CCDirector */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCDirector_sharedDirector00
static int tolua_Cocos2d_CCDirector_sharedDirector00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCDirector",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CCDirector* tolua_ret = (CCDirector*)  CCDirector::sharedDirector();
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    tolua_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCDirector");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'sharedDirector'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: ccDrawPoint */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_ccDrawPoint00
static int tolua_Cocos2d_ccDrawPoint00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCPoint point = *((CCPoint*)  tolua_tousertype(tolua_S,1,0));
  {
   ccDrawPoint(point);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ccDrawPoint'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: ccDrawPoints */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_ccDrawPoints00
static int tolua_Cocos2d_ccDrawPoints00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CCPoint",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CCPoint* points = ((const CCPoint*)  tolua_tousertype(tolua_S,1,0));
  unsigned int numberOfPoints = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
  {
   ccDrawPoints(points,numberOfPoints);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ccDrawPoints'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: ccDrawLine */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_ccDrawLine00
static int tolua_Cocos2d_ccDrawLine00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"CCPoint",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCPoint origin = *((CCPoint*)  tolua_tousertype(tolua_S,1,0));
  CCPoint destination = *((CCPoint*)  tolua_tousertype(tolua_S,2,0));
  {
   ccDrawLine(origin,destination);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ccDrawLine'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: ccDrawPoly */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_ccDrawPoly00
static int tolua_Cocos2d_ccDrawPoly00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"const CCPoint",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CCPoint* vertices = ((const CCPoint*)  tolua_tousertype(tolua_S,1,0));
  int numOfVertices = ((int)  tolua_tonumber(tolua_S,2,0));
  bool closePolygon = ((bool)  tolua_toboolean(tolua_S,3,0));
  {
   ccDrawPoly(vertices,numOfVertices,closePolygon);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ccDrawPoly'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: ccDrawCircle */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_ccDrawCircle00
static int tolua_Cocos2d_ccDrawCircle00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"CCPoint",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCPoint center = *((CCPoint*)  tolua_tousertype(tolua_S,1,0));
  float radius = ((float)  tolua_tonumber(tolua_S,2,0));
  float angle = ((float)  tolua_tonumber(tolua_S,3,0));
  int segments = ((int)  tolua_tonumber(tolua_S,4,0));
  bool drawLineToCenter = ((bool)  tolua_toboolean(tolua_S,5,0));
  {
   ccDrawCircle(center,radius,angle,segments,drawLineToCenter);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ccDrawCircle'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: ccDrawQuadBezier */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_ccDrawQuadBezier00
static int tolua_Cocos2d_ccDrawQuadBezier00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"CCPoint",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"CCPoint",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"CCPoint",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCPoint origin = *((CCPoint*)  tolua_tousertype(tolua_S,1,0));
  CCPoint control = *((CCPoint*)  tolua_tousertype(tolua_S,2,0));
  CCPoint destination = *((CCPoint*)  tolua_tousertype(tolua_S,3,0));
  int segments = ((int)  tolua_tonumber(tolua_S,4,0));
  {
   ccDrawQuadBezier(origin,control,destination,segments);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ccDrawQuadBezier'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: ccDrawCubicBezier */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_ccDrawCubicBezier00
static int tolua_Cocos2d_ccDrawCubicBezier00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"CCPoint",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"CCPoint",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"CCPoint",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"CCPoint",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCPoint origin = *((CCPoint*)  tolua_tousertype(tolua_S,1,0));
  CCPoint control1 = *((CCPoint*)  tolua_tousertype(tolua_S,2,0));
  CCPoint control2 = *((CCPoint*)  tolua_tousertype(tolua_S,3,0));
  CCPoint destination = *((CCPoint*)  tolua_tousertype(tolua_S,4,0));
  int segments = ((int)  tolua_tonumber(tolua_S,5,0));
  {
   ccDrawCubicBezier(origin,control1,control2,destination,segments);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ccDrawCubicBezier'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getWriteablePath of class  CCFileUtils */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCFileUtils_getWriteablePath00
static int tolua_Cocos2d_CCFileUtils_getWriteablePath00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCFileUtils",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   std::string tolua_ret = (std::string)  CCFileUtils::getWriteablePath();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getWriteablePath'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: x of class  CCPoint */
#ifndef TOLUA_DISABLE_tolua_get_CCPoint_x
static int tolua_get_CCPoint_x(lua_State* tolua_S)
{
  CCPoint* self = (CCPoint*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'x'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->x);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: x of class  CCPoint */
#ifndef TOLUA_DISABLE_tolua_set_CCPoint_x
static int tolua_set_CCPoint_x(lua_State* tolua_S)
{
  CCPoint* self = (CCPoint*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'x'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->x = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: y of class  CCPoint */
#ifndef TOLUA_DISABLE_tolua_get_CCPoint_y
static int tolua_get_CCPoint_y(lua_State* tolua_S)
{
  CCPoint* self = (CCPoint*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'y'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->y);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: y of class  CCPoint */
#ifndef TOLUA_DISABLE_tolua_set_CCPoint_y
static int tolua_set_CCPoint_y(lua_State* tolua_S)
{
  CCPoint* self = (CCPoint*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'y'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->y = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CCPoint */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCPoint_new00
static int tolua_Cocos2d_CCPoint_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCPoint",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CCPoint* tolua_ret = (CCPoint*)  Mtolua_new((CCPoint)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CCPoint");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CCPoint */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCPoint_new00_local
static int tolua_Cocos2d_CCPoint_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCPoint",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CCPoint* tolua_ret = (CCPoint*)  Mtolua_new((CCPoint)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CCPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CCPoint */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCPoint_new01
static int tolua_Cocos2d_CCPoint_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCPoint",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  float x = ((float)  tolua_tonumber(tolua_S,2,0));
  float y = ((float)  tolua_tonumber(tolua_S,3,0));
  {
   CCPoint* tolua_ret = (CCPoint*)  Mtolua_new((CCPoint)(x,y));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CCPoint");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Cocos2d_CCPoint_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CCPoint */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCPoint_new01_local
static int tolua_Cocos2d_CCPoint_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCPoint",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  float x = ((float)  tolua_tonumber(tolua_S,2,0));
  float y = ((float)  tolua_tonumber(tolua_S,3,0));
  {
   CCPoint* tolua_ret = (CCPoint*)  Mtolua_new((CCPoint)(x,y));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CCPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_Cocos2d_CCPoint_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: CCPointEqualToPoint of class  CCPoint */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCPoint_CCPointEqualToPoint00
static int tolua_Cocos2d_CCPoint_CCPointEqualToPoint00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCPoint",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCPoint",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CCPoint* point1 = ((const CCPoint*)  tolua_tousertype(tolua_S,2,0));
  const CCPoint* point2 = ((const CCPoint*)  tolua_tousertype(tolua_S,3,0));
  {
   bool tolua_ret = (bool)  CCPoint::CCPointEqualToPoint(*point1,*point2);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'CCPointEqualToPoint'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: width of class  CCSize */
#ifndef TOLUA_DISABLE_tolua_get_CCSize_width
static int tolua_get_CCSize_width(lua_State* tolua_S)
{
  CCSize* self = (CCSize*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'width'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->width);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: width of class  CCSize */
#ifndef TOLUA_DISABLE_tolua_set_CCSize_width
static int tolua_set_CCSize_width(lua_State* tolua_S)
{
  CCSize* self = (CCSize*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'width'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->width = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: height of class  CCSize */
#ifndef TOLUA_DISABLE_tolua_get_CCSize_height
static int tolua_get_CCSize_height(lua_State* tolua_S)
{
  CCSize* self = (CCSize*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'height'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->height);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: height of class  CCSize */
#ifndef TOLUA_DISABLE_tolua_set_CCSize_height
static int tolua_set_CCSize_height(lua_State* tolua_S)
{
  CCSize* self = (CCSize*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'height'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->height = ((float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CCSize */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCSize_new00
static int tolua_Cocos2d_CCSize_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCSize",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CCSize* tolua_ret = (CCSize*)  Mtolua_new((CCSize)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CCSize");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CCSize */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCSize_new00_local
static int tolua_Cocos2d_CCSize_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCSize",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CCSize* tolua_ret = (CCSize*)  Mtolua_new((CCSize)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CCSize");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CCSize */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCSize_new01
static int tolua_Cocos2d_CCSize_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCSize",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  float width = ((float)  tolua_tonumber(tolua_S,2,0));
  float height = ((float)  tolua_tonumber(tolua_S,3,0));
  {
   CCSize* tolua_ret = (CCSize*)  Mtolua_new((CCSize)(width,height));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CCSize");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Cocos2d_CCSize_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CCSize */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCSize_new01_local
static int tolua_Cocos2d_CCSize_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCSize",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  float width = ((float)  tolua_tonumber(tolua_S,2,0));
  float height = ((float)  tolua_tonumber(tolua_S,3,0));
  {
   CCSize* tolua_ret = (CCSize*)  Mtolua_new((CCSize)(width,height));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CCSize");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_Cocos2d_CCSize_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: CCSizeEqualToSize of class  CCSize */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCSize_CCSizeEqualToSize00
static int tolua_Cocos2d_CCSize_CCSizeEqualToSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCSize",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCSize",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const CCSize",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CCSize* size1 = ((const CCSize*)  tolua_tousertype(tolua_S,2,0));
  const CCSize* size2 = ((const CCSize*)  tolua_tousertype(tolua_S,3,0));
  {
   bool tolua_ret = (bool)  CCSize::CCSizeEqualToSize(*size1,*size2);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'CCSizeEqualToSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: origin of class  CCRect */
#ifndef TOLUA_DISABLE_tolua_get_CCRect_origin
static int tolua_get_CCRect_origin(lua_State* tolua_S)
{
  CCRect* self = (CCRect*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'origin'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->origin,"CCPoint");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: origin of class  CCRect */
#ifndef TOLUA_DISABLE_tolua_set_CCRect_origin
static int tolua_set_CCRect_origin(lua_State* tolua_S)
{
  CCRect* self = (CCRect*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'origin'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"CCPoint",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->origin = *((CCPoint*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: size of class  CCRect */
#ifndef TOLUA_DISABLE_tolua_get_CCRect_size
static int tolua_get_CCRect_size(lua_State* tolua_S)
{
  CCRect* self = (CCRect*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'size'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->size,"CCSize");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: size of class  CCRect */
#ifndef TOLUA_DISABLE_tolua_set_CCRect_size
static int tolua_set_CCRect_size(lua_State* tolua_S)
{
  CCRect* self = (CCRect*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'size'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"CCSize",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->size = *((CCSize*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CCRect */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCRect_new00
static int tolua_Cocos2d_CCRect_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCRect",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CCRect* tolua_ret = (CCRect*)  Mtolua_new((CCRect)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CCRect");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CCRect */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCRect_new00_local
static int tolua_Cocos2d_CCRect_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCRect",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CCRect* tolua_ret = (CCRect*)  Mtolua_new((CCRect)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CCRect");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CCRect */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCRect_new01
static int tolua_Cocos2d_CCRect_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCRect",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  float x = ((float)  tolua_tonumber(tolua_S,2,0));
  float y = ((float)  tolua_tonumber(tolua_S,3,0));
  float width = ((float)  tolua_tonumber(tolua_S,4,0));
  float height = ((float)  tolua_tonumber(tolua_S,5,0));
  {
   CCRect* tolua_ret = (CCRect*)  Mtolua_new((CCRect)(x,y,width,height));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CCRect");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Cocos2d_CCRect_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CCRect */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCRect_new01_local
static int tolua_Cocos2d_CCRect_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCRect",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  float x = ((float)  tolua_tonumber(tolua_S,2,0));
  float y = ((float)  tolua_tonumber(tolua_S,3,0));
  float width = ((float)  tolua_tonumber(tolua_S,4,0));
  float height = ((float)  tolua_tonumber(tolua_S,5,0));
  {
   CCRect* tolua_ret = (CCRect*)  Mtolua_new((CCRect)(x,y,width,height));
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CCRect");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_Cocos2d_CCRect_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: CCRectGetMinX of class  CCRect */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCRect_CCRectGetMinX00
static int tolua_Cocos2d_CCRect_CCRectGetMinX00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCRect",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCRect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CCRect* rect = ((const CCRect*)  tolua_tousertype(tolua_S,2,0));
  {
   float tolua_ret = (float)  CCRect::CCRectGetMinX(*rect);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'CCRectGetMinX'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: CCRectGetMaxX of class  CCRect */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCRect_CCRectGetMaxX00
static int tolua_Cocos2d_CCRect_CCRectGetMaxX00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCRect",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCRect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CCRect* rect = ((const CCRect*)  tolua_tousertype(tolua_S,2,0));
  {
   float tolua_ret = (float)  CCRect::CCRectGetMaxX(*rect);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'CCRectGetMaxX'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: CCRectGetMidX of class  CCRect */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCRect_CCRectGetMidX00
static int tolua_Cocos2d_CCRect_CCRectGetMidX00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCRect",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCRect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CCRect* rect = ((const CCRect*)  tolua_tousertype(tolua_S,2,0));
  {
   float tolua_ret = (float)  CCRect::CCRectGetMidX(*rect);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'CCRectGetMidX'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: CCRectGetMinY of class  CCRect */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCRect_CCRectGetMinY00
static int tolua_Cocos2d_CCRect_CCRectGetMinY00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCRect",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCRect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CCRect* rect = ((const CCRect*)  tolua_tousertype(tolua_S,2,0));
  {
   float tolua_ret = (float)  CCRect::CCRectGetMinY(*rect);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'CCRectGetMinY'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: CCRectGetMaxY of class  CCRect */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCRect_CCRectGetMaxY00
static int tolua_Cocos2d_CCRect_CCRectGetMaxY00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCRect",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCRect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CCRect* rect = ((const CCRect*)  tolua_tousertype(tolua_S,2,0));
  {
   float tolua_ret = (float)  CCRect::CCRectGetMaxY(*rect);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'CCRectGetMaxY'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: CCRectGetMidY of class  CCRect */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCRect_CCRectGetMidY00
static int tolua_Cocos2d_CCRect_CCRectGetMidY00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCRect",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCRect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CCRect* rect = ((const CCRect*)  tolua_tousertype(tolua_S,2,0));
  {
   float tolua_ret = (float)  CCRect::CCRectGetMidY(*rect);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'CCRectGetMidY'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: CCRectEqualToRect of class  CCRect */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCRect_CCRectEqualToRect00
static int tolua_Cocos2d_CCRect_CCRectEqualToRect00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCRect",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCRect",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const CCRect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CCRect* rect1 = ((const CCRect*)  tolua_tousertype(tolua_S,2,0));
  const CCRect* rect2 = ((const CCRect*)  tolua_tousertype(tolua_S,3,0));
  {
   bool tolua_ret = (bool)  CCRect::CCRectEqualToRect(*rect1,*rect2);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'CCRectEqualToRect'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: CCRectContainsPoint of class  CCRect */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCRect_CCRectContainsPoint00
static int tolua_Cocos2d_CCRect_CCRectContainsPoint00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCRect",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCRect",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CCRect* rect = ((const CCRect*)  tolua_tousertype(tolua_S,2,0));
  const CCPoint* point = ((const CCPoint*)  tolua_tousertype(tolua_S,3,0));
  {
   bool tolua_ret = (bool)  CCRect::CCRectContainsPoint(*rect,*point);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'CCRectContainsPoint'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: CCRectIntersectsRect of class  CCRect */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCRect_CCRectIntersectsRect00
static int tolua_Cocos2d_CCRect_CCRectIntersectsRect00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCRect",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCRect",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const CCRect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CCRect* rectA = ((const CCRect*)  tolua_tousertype(tolua_S,2,0));
  const CCRect* rectB = ((const CCRect*)  tolua_tousertype(tolua_S,3,0));
  {
   bool tolua_ret = (bool)  CCRect::CCRectIntersectsRect(*rectA,*rectB);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'CCRectIntersectsRect'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: CCPointMake */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCPointMake00
static int tolua_Cocos2d_CCPointMake00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  float x = ((float)  tolua_tonumber(tolua_S,1,0));
  float y = ((float)  tolua_tonumber(tolua_S,2,0));
  {
   CCPoint tolua_ret = (CCPoint)  CCPointMake(x,y);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((CCPoint)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"CCPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CCPoint));
     tolua_pushusertype(tolua_S,tolua_obj,"CCPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'CCPointMake'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: CCSizeMake */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCSizeMake00
static int tolua_Cocos2d_CCSizeMake00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  float width = ((float)  tolua_tonumber(tolua_S,1,0));
  float height = ((float)  tolua_tonumber(tolua_S,2,0));
  {
   CCSize tolua_ret = (CCSize)  CCSizeMake(width,height);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((CCSize)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"CCSize");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CCSize));
     tolua_pushusertype(tolua_S,tolua_obj,"CCSize");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'CCSizeMake'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: CCRectMake */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCRectMake00
static int tolua_Cocos2d_CCRectMake00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  float x = ((float)  tolua_tonumber(tolua_S,1,0));
  float y = ((float)  tolua_tonumber(tolua_S,2,0));
  float width = ((float)  tolua_tonumber(tolua_S,3,0));
  float height = ((float)  tolua_tonumber(tolua_S,4,0));
  {
   CCRect tolua_ret = (CCRect)  CCRectMake(x,y,width,height);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((CCRect)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"CCRect");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CCRect));
     tolua_pushusertype(tolua_S,tolua_obj,"CCRect");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'CCRectMake'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: updateAtlasValues of class  CCLabelAtlas */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCLabelAtlas_updateAtlasValues00
static int tolua_Cocos2d_CCLabelAtlas_updateAtlasValues00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCLabelAtlas",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCLabelAtlas* self = (CCLabelAtlas*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'updateAtlasValues'", NULL);
#endif
  {
   self->updateAtlasValues();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'updateAtlasValues'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setString of class  CCLabelAtlas */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCLabelAtlas_setString00
static int tolua_Cocos2d_CCLabelAtlas_setString00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCLabelAtlas",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCLabelAtlas* self = (CCLabelAtlas*)  tolua_tousertype(tolua_S,1,0);
  const char* label = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setString'", NULL);
#endif
  {
   self->setString(label);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setString'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getString of class  CCLabelAtlas */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCLabelAtlas_getString00
static int tolua_Cocos2d_CCLabelAtlas_getString00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCLabelAtlas",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCLabelAtlas* self = (CCLabelAtlas*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getString'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->getString();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getString'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTexture of class  CCLabelAtlas */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCLabelAtlas_getTexture00
static int tolua_Cocos2d_CCLabelAtlas_getTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCLabelAtlas",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCLabelAtlas* self = (CCLabelAtlas*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTexture'", NULL);
#endif
  {
   CCTexture2D* tolua_ret = (CCTexture2D*)  self->getTexture();
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    tolua_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCTexture2D");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTexture of class  CCLabelAtlas */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCLabelAtlas_setTexture00
static int tolua_Cocos2d_CCLabelAtlas_setTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCLabelAtlas",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTexture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCLabelAtlas* self = (CCLabelAtlas*)  tolua_tousertype(tolua_S,1,0);
  CCTexture2D* texture = ((CCTexture2D*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTexture'", NULL);
#endif
  {
   self->setTexture(texture);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: labelWithString of class  CCLabelAtlas */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCLabelAtlas_labelWithString00
static int tolua_Cocos2d_CCLabelAtlas_labelWithString00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCLabelAtlas",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* label = ((const char*)  tolua_tostring(tolua_S,2,0));
  const char* charMapFile = ((const char*)  tolua_tostring(tolua_S,3,0));
  int itemWidth = ((int)  tolua_tonumber(tolua_S,4,0));
  int itemHeight = ((int)  tolua_tonumber(tolua_S,5,0));
  char startCharMap = ((char)  tolua_tonumber(tolua_S,6,0));
  {
   CCLabelAtlas* tolua_ret = (CCLabelAtlas*)  CCLabelAtlas::labelWithString(label,charMapFile,itemWidth,itemHeight,startCharMap);
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    tolua_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCLabelAtlas");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'labelWithString'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: atlasWithTileFile of class  CCLabelAtlas */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCLabelAtlas_atlasWithTileFile00
static int tolua_Cocos2d_CCLabelAtlas_atlasWithTileFile00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCLabelAtlas",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* tile = ((const char*)  tolua_tostring(tolua_S,2,0));
  int tileWidth = ((int)  tolua_tonumber(tolua_S,3,0));
  int tileHeight = ((int)  tolua_tonumber(tolua_S,4,0));
  int itemsToRender = ((int)  tolua_tonumber(tolua_S,5,0));
  {
   CCAtlasNode* tolua_ret = (CCAtlasNode*)  CCLabelAtlas::atlasWithTileFile(tile,tileWidth,tileHeight,itemsToRender);
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    tolua_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCAtlasNode");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'atlasWithTileFile'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setString of class  CCLabelBMFont */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCLabelBMFont_setString00
static int tolua_Cocos2d_CCLabelBMFont_setString00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCLabelBMFont",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCLabelBMFont* self = (CCLabelBMFont*)  tolua_tousertype(tolua_S,1,0);
  const char* label = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setString'", NULL);
#endif
  {
   self->setString(label);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setString'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getString of class  CCLabelBMFont */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCLabelBMFont_getString00
static int tolua_Cocos2d_CCLabelBMFont_getString00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCLabelBMFont",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCLabelBMFont* self = (CCLabelBMFont*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getString'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->getString();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getString'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setColor of class  CCLabelBMFont */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCLabelBMFont_setColor00
static int tolua_Cocos2d_CCLabelBMFont_setColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCLabelBMFont",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const ccColor3B",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCLabelBMFont* self = (CCLabelBMFont*)  tolua_tousertype(tolua_S,1,0);
  const ccColor3B* color = ((const ccColor3B*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setColor'", NULL);
#endif
  {
   self->setColor(*color);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getColor of class  CCLabelBMFont */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCLabelBMFont_getColor00
static int tolua_Cocos2d_CCLabelBMFont_getColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCLabelBMFont",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCLabelBMFont* self = (CCLabelBMFont*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getColor'", NULL);
#endif
  {
   const ccColor3B& tolua_ret = (const ccColor3B&)  self->getColor();
    tolua_pushusertype(tolua_S,(void*)&tolua_ret,"const ccColor3B");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getOpacity of class  CCLabelBMFont */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCLabelBMFont_getOpacity00
static int tolua_Cocos2d_CCLabelBMFont_getOpacity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCLabelBMFont",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCLabelBMFont* self = (CCLabelBMFont*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getOpacity'", NULL);
#endif
  {
   GLubyte tolua_ret = (GLubyte)  self->getOpacity();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getOpacity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOpacity of class  CCLabelBMFont */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCLabelBMFont_setOpacity00
static int tolua_Cocos2d_CCLabelBMFont_setOpacity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCLabelBMFont",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCLabelBMFont* self = (CCLabelBMFont*)  tolua_tousertype(tolua_S,1,0);
  GLubyte opacity = ((GLubyte)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOpacity'", NULL);
#endif
  {
   self->setOpacity(opacity);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOpacity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: opacity of class  CCLabelBMFont */
#ifndef TOLUA_DISABLE_tolua_get_CCLabelBMFont_opacity
static int tolua_get_CCLabelBMFont_opacity(lua_State* tolua_S)
{
  CCLabelBMFont* self = (CCLabelBMFont*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'opacity'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->getOpacity());
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: opacity of class  CCLabelBMFont */
#ifndef TOLUA_DISABLE_tolua_set_CCLabelBMFont_opacity
static int tolua_set_CCLabelBMFont_opacity(lua_State* tolua_S)
{
  CCLabelBMFont* self = (CCLabelBMFont*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'opacity'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->setOpacity(((GLubyte)  tolua_tonumber(tolua_S,2,0))
)
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: purgeCachedData of class  CCLabelBMFont */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCLabelBMFont_purgeCachedData00
static int tolua_Cocos2d_CCLabelBMFont_purgeCachedData00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCLabelBMFont",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CCLabelBMFont::purgeCachedData();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'purgeCachedData'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: labelWithString of class  CCLabelBMFont */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCLabelBMFont_labelWithString00
static int tolua_Cocos2d_CCLabelBMFont_labelWithString00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCLabelBMFont",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* str = ((const char*)  tolua_tostring(tolua_S,2,0));
  const char* fntFile = ((const char*)  tolua_tostring(tolua_S,3,0));
  {
   CCLabelBMFont* tolua_ret = (CCLabelBMFont*)  CCLabelBMFont::labelWithString(str,fntFile);
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    tolua_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCLabelBMFont");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'labelWithString'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setString of class  CCLabelTTF */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCLabelTTF_setString00
static int tolua_Cocos2d_CCLabelTTF_setString00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCLabelTTF",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCLabelTTF* self = (CCLabelTTF*)  tolua_tousertype(tolua_S,1,0);
  const char* label = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setString'", NULL);
#endif
  {
   self->setString(label);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setString'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getString of class  CCLabelTTF */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCLabelTTF_getString00
static int tolua_Cocos2d_CCLabelTTF_getString00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCLabelTTF",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCLabelTTF* self = (CCLabelTTF*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getString'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->getString();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getString'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: labelWithString of class  CCLabelTTF */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCLabelTTF_labelWithString00
static int tolua_Cocos2d_CCLabelTTF_labelWithString00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCLabelTTF",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"CCSize",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isstring(tolua_S,5,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* label = ((const char*)  tolua_tostring(tolua_S,2,0));
  CCSize dimensions = *((CCSize*)  tolua_tousertype(tolua_S,3,0));
  CCTextAlignment alignment = ((CCTextAlignment) (int)  tolua_tonumber(tolua_S,4,0));
  const char* fontName = ((const char*)  tolua_tostring(tolua_S,5,0));
  float fontSize = ((float)  tolua_tonumber(tolua_S,6,0));
  {
   CCLabelTTF* tolua_ret = (CCLabelTTF*)  CCLabelTTF::labelWithString(label,dimensions,alignment,fontName,fontSize);
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    tolua_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCLabelTTF");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'labelWithString'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: labelWithString of class  CCLabelTTF */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCLabelTTF_labelWithString01
static int tolua_Cocos2d_CCLabelTTF_labelWithString01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCLabelTTF",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const char* label = ((const char*)  tolua_tostring(tolua_S,2,0));
  const char* fontName = ((const char*)  tolua_tostring(tolua_S,3,0));
  float fontSize = ((float)  tolua_tonumber(tolua_S,4,0));
  {
   CCLabelTTF* tolua_ret = (CCLabelTTF*)  CCLabelTTF::labelWithString(label,fontName,fontSize);
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    tolua_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCLabelTTF");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Cocos2d_CCLabelTTF_labelWithString00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setIsTouchEnabled of class  CCLayer */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCLayer_setIsTouchEnabled00
static int tolua_Cocos2d_CCLayer_setIsTouchEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCLayer",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCLayer* self = (CCLayer*)  tolua_tousertype(tolua_S,1,0);
  bool bValue = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setIsTouchEnabled'", NULL);
#endif
  {
   self->setIsTouchEnabled(bValue);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setIsTouchEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getIsTouchEnabled of class  CCLayer */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCLayer_getIsTouchEnabled00
static int tolua_Cocos2d_CCLayer_getIsTouchEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCLayer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCLayer* self = (CCLayer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getIsTouchEnabled'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->getIsTouchEnabled();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getIsTouchEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setIsAccelerometerEnabled of class  CCLayer */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCLayer_setIsAccelerometerEnabled00
static int tolua_Cocos2d_CCLayer_setIsAccelerometerEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCLayer",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCLayer* self = (CCLayer*)  tolua_tousertype(tolua_S,1,0);
  bool bValue = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setIsAccelerometerEnabled'", NULL);
#endif
  {
   self->setIsAccelerometerEnabled(bValue);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setIsAccelerometerEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getIsAccelerometerEnabled of class  CCLayer */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCLayer_getIsAccelerometerEnabled00
static int tolua_Cocos2d_CCLayer_getIsAccelerometerEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCLayer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCLayer* self = (CCLayer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getIsAccelerometerEnabled'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->getIsAccelerometerEnabled();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getIsAccelerometerEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setIsKeypadEnabled of class  CCLayer */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCLayer_setIsKeypadEnabled00
static int tolua_Cocos2d_CCLayer_setIsKeypadEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCLayer",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCLayer* self = (CCLayer*)  tolua_tousertype(tolua_S,1,0);
  bool bValue = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setIsKeypadEnabled'", NULL);
#endif
  {
   self->setIsKeypadEnabled(bValue);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setIsKeypadEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getIsKeypadEnabled of class  CCLayer */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCLayer_getIsKeypadEnabled00
static int tolua_Cocos2d_CCLayer_getIsKeypadEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCLayer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCLayer* self = (CCLayer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getIsKeypadEnabled'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->getIsKeypadEnabled();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getIsKeypadEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: registerScriptTouchHandler of class  CCLayer */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCLayer_registerScriptTouchHandler00
static int tolua_Cocos2d_CCLayer_registerScriptTouchHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCLayer",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isfunction(tolua_S,2,&tolua_err)) ||
     !tolua_isboolean(tolua_S,3,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isboolean(tolua_S,5,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCLayer* self = (CCLayer*)  tolua_tousertype(tolua_S,1,0);
  int funcID = (tolua_ref_function(tolua_S,2,0));
  bool bIsMultiTouches = ((bool)  tolua_toboolean(tolua_S,3,false));
  int nPriority = ((int)  tolua_tonumber(tolua_S,4,0));
  bool bSwallowsTouches = ((bool)  tolua_toboolean(tolua_S,5,false));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'registerScriptTouchHandler'", NULL);
#endif
  {
   self->registerScriptTouchHandler(funcID,bIsMultiTouches,nPriority,bSwallowsTouches);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'registerScriptTouchHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: unregisterScriptTouchHandler of class  CCLayer */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCLayer_unregisterScriptTouchHandler00
static int tolua_Cocos2d_CCLayer_unregisterScriptTouchHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCLayer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCLayer* self = (CCLayer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'unregisterScriptTouchHandler'", NULL);
#endif
  {
   self->unregisterScriptTouchHandler();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'unregisterScriptTouchHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: node of class  CCLayer */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCLayer_node00
static int tolua_Cocos2d_CCLayer_node00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCLayer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CCLayer* tolua_ret = (CCLayer*)  CCLayer::node();
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    tolua_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCLayer");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'node'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: changeWidth of class  CCLayerColor */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCLayerColor_changeWidth00
static int tolua_Cocos2d_CCLayerColor_changeWidth00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCLayerColor",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCLayerColor* self = (CCLayerColor*)  tolua_tousertype(tolua_S,1,0);
  GLfloat w = ((GLfloat)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'changeWidth'", NULL);
#endif
  {
   self->changeWidth(w);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'changeWidth'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: changeHeight of class  CCLayerColor */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCLayerColor_changeHeight00
static int tolua_Cocos2d_CCLayerColor_changeHeight00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCLayerColor",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCLayerColor* self = (CCLayerColor*)  tolua_tousertype(tolua_S,1,0);
  GLfloat h = ((GLfloat)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'changeHeight'", NULL);
#endif
  {
   self->changeHeight(h);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'changeHeight'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: changeWidthAndHeight of class  CCLayerColor */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCLayerColor_changeWidthAndHeight00
static int tolua_Cocos2d_CCLayerColor_changeWidthAndHeight00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCLayerColor",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCLayerColor* self = (CCLayerColor*)  tolua_tousertype(tolua_S,1,0);
  GLfloat w = ((GLfloat)  tolua_tonumber(tolua_S,2,0));
  GLfloat h = ((GLfloat)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'changeWidthAndHeight'", NULL);
#endif
  {
   self->changeWidthAndHeight(w,h);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'changeWidthAndHeight'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOpacity of class  CCLayerColor */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCLayerColor_setOpacity00
static int tolua_Cocos2d_CCLayerColor_setOpacity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCLayerColor",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCLayerColor* self = (CCLayerColor*)  tolua_tousertype(tolua_S,1,0);
  GLubyte var = ((GLubyte)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOpacity'", NULL);
#endif
  {
   self->setOpacity(var);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOpacity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getOpacity of class  CCLayerColor */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCLayerColor_getOpacity00
static int tolua_Cocos2d_CCLayerColor_getOpacity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCLayerColor",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCLayerColor* self = (CCLayerColor*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getOpacity'", NULL);
#endif
  {
   GLubyte tolua_ret = (GLubyte)  self->getOpacity();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getOpacity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setColor of class  CCLayerColor */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCLayerColor_setColor00
static int tolua_Cocos2d_CCLayerColor_setColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCLayerColor",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"ccColor3B",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCLayerColor* self = (CCLayerColor*)  tolua_tousertype(tolua_S,1,0);
  ccColor3B Value = *((ccColor3B*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setColor'", NULL);
#endif
  {
   self->setColor(Value);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getColor of class  CCLayerColor */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCLayerColor_getColor00
static int tolua_Cocos2d_CCLayerColor_getColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCLayerColor",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCLayerColor* self = (CCLayerColor*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getColor'", NULL);
#endif
  {
   ccColor3B tolua_ret = (ccColor3B)  self->getColor();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((ccColor3B)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"ccColor3B");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(ccColor3B));
     tolua_pushusertype(tolua_S,tolua_obj,"ccColor3B");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setBlendFunc of class  CCLayerColor */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCLayerColor_setBlendFunc00
static int tolua_Cocos2d_CCLayerColor_setBlendFunc00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCLayerColor",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"ccBlendFunc",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCLayerColor* self = (CCLayerColor*)  tolua_tousertype(tolua_S,1,0);
  ccBlendFunc Value = *((ccBlendFunc*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBlendFunc'", NULL);
#endif
  {
   self->setBlendFunc(Value);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setBlendFunc'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getBlendFunc of class  CCLayerColor */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCLayerColor_getBlendFunc00
static int tolua_Cocos2d_CCLayerColor_getBlendFunc00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCLayerColor",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCLayerColor* self = (CCLayerColor*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getBlendFunc'", NULL);
#endif
  {
   ccBlendFunc tolua_ret = (ccBlendFunc)  self->getBlendFunc();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((ccBlendFunc)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"ccBlendFunc");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(ccBlendFunc));
     tolua_pushusertype(tolua_S,tolua_obj,"ccBlendFunc");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getBlendFunc'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: layerWithColor of class  CCLayerColor */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCLayerColor_layerWithColor00
static int tolua_Cocos2d_CCLayerColor_layerWithColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCLayerColor",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"ccColor4B",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ccColor4B color = *((ccColor4B*)  tolua_tousertype(tolua_S,2,0));
  GLfloat width = ((GLfloat)  tolua_tonumber(tolua_S,3,0));
  GLfloat height = ((GLfloat)  tolua_tonumber(tolua_S,4,0));
  {
   CCLayerColor* tolua_ret = (CCLayerColor*)  CCLayerColor::layerWithColor(color,width,height);
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    tolua_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCLayerColor");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'layerWithColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: layerWithColor of class  CCLayerColor */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCLayerColor_layerWithColor01
static int tolua_Cocos2d_CCLayerColor_layerWithColor01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCLayerColor",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"ccColor4B",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  ccColor4B color = *((ccColor4B*)  tolua_tousertype(tolua_S,2,0));
  {
   CCLayerColor* tolua_ret = (CCLayerColor*)  CCLayerColor::layerWithColor(color);
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    tolua_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCLayerColor");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Cocos2d_CCLayerColor_layerWithColor00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setStartColor of class  CCLayerGradient */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCLayerGradient_setStartColor00
static int tolua_Cocos2d_CCLayerGradient_setStartColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCLayerGradient",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"ccColor3B",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCLayerGradient* self = (CCLayerGradient*)  tolua_tousertype(tolua_S,1,0);
  ccColor3B colors = *((ccColor3B*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setStartColor'", NULL);
#endif
  {
   self->setStartColor(colors);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setStartColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getStartColor of class  CCLayerGradient */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCLayerGradient_getStartColor00
static int tolua_Cocos2d_CCLayerGradient_getStartColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCLayerGradient",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCLayerGradient* self = (CCLayerGradient*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getStartColor'", NULL);
#endif
  {
   ccColor3B tolua_ret = (ccColor3B)  self->getStartColor();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((ccColor3B)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"ccColor3B");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(ccColor3B));
     tolua_pushusertype(tolua_S,tolua_obj,"ccColor3B");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getStartColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setEndColor of class  CCLayerGradient */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCLayerGradient_setEndColor00
static int tolua_Cocos2d_CCLayerGradient_setEndColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCLayerGradient",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"ccColor3B",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCLayerGradient* self = (CCLayerGradient*)  tolua_tousertype(tolua_S,1,0);
  ccColor3B Value = *((ccColor3B*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setEndColor'", NULL);
#endif
  {
   self->setEndColor(Value);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setEndColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getEndColor of class  CCLayerGradient */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCLayerGradient_getEndColor00
static int tolua_Cocos2d_CCLayerGradient_getEndColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCLayerGradient",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCLayerGradient* self = (CCLayerGradient*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getEndColor'", NULL);
#endif
  {
   ccColor3B tolua_ret = (ccColor3B)  self->getEndColor();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((ccColor3B)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"ccColor3B");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(ccColor3B));
     tolua_pushusertype(tolua_S,tolua_obj,"ccColor3B");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getEndColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setStartOpacity of class  CCLayerGradient */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCLayerGradient_setStartOpacity00
static int tolua_Cocos2d_CCLayerGradient_setStartOpacity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCLayerGradient",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCLayerGradient* self = (CCLayerGradient*)  tolua_tousertype(tolua_S,1,0);
  GLubyte Value = ((GLubyte)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setStartOpacity'", NULL);
#endif
  {
   self->setStartOpacity(Value);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setStartOpacity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getStartOpacity of class  CCLayerGradient */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCLayerGradient_getStartOpacity00
static int tolua_Cocos2d_CCLayerGradient_getStartOpacity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCLayerGradient",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCLayerGradient* self = (CCLayerGradient*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getStartOpacity'", NULL);
#endif
  {
   GLubyte tolua_ret = (GLubyte)  self->getStartOpacity();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getStartOpacity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setEndOpacity of class  CCLayerGradient */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCLayerGradient_setEndOpacity00
static int tolua_Cocos2d_CCLayerGradient_setEndOpacity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCLayerGradient",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCLayerGradient* self = (CCLayerGradient*)  tolua_tousertype(tolua_S,1,0);
  GLubyte Value = ((GLubyte)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setEndOpacity'", NULL);
#endif
  {
   self->setEndOpacity(Value);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setEndOpacity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getEndOpacity of class  CCLayerGradient */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCLayerGradient_getEndOpacity00
static int tolua_Cocos2d_CCLayerGradient_getEndOpacity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCLayerGradient",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCLayerGradient* self = (CCLayerGradient*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getEndOpacity'", NULL);
#endif
  {
   GLubyte tolua_ret = (GLubyte)  self->getEndOpacity();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getEndOpacity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setVector of class  CCLayerGradient */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCLayerGradient_setVector00
static int tolua_Cocos2d_CCLayerGradient_setVector00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCLayerGradient",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCLayerGradient* self = (CCLayerGradient*)  tolua_tousertype(tolua_S,1,0);
  CCPoint Value = *((CCPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setVector'", NULL);
#endif
  {
   self->setVector(Value);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setVector'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getVector of class  CCLayerGradient */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCLayerGradient_getVector00
static int tolua_Cocos2d_CCLayerGradient_getVector00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCLayerGradient",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCLayerGradient* self = (CCLayerGradient*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getVector'", NULL);
#endif
  {
   CCPoint tolua_ret = (CCPoint)  self->getVector();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((CCPoint)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"CCPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CCPoint));
     tolua_pushusertype(tolua_S,tolua_obj,"CCPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getVector'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setIsCompressedInterpolation of class  CCLayerGradient */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCLayerGradient_setIsCompressedInterpolation00
static int tolua_Cocos2d_CCLayerGradient_setIsCompressedInterpolation00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCLayerGradient",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCLayerGradient* self = (CCLayerGradient*)  tolua_tousertype(tolua_S,1,0);
  bool Value = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setIsCompressedInterpolation'", NULL);
#endif
  {
   self->setIsCompressedInterpolation(Value);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setIsCompressedInterpolation'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getIsCompressedInterpolation of class  CCLayerGradient */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCLayerGradient_getIsCompressedInterpolation00
static int tolua_Cocos2d_CCLayerGradient_getIsCompressedInterpolation00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCLayerGradient",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCLayerGradient* self = (CCLayerGradient*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getIsCompressedInterpolation'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->getIsCompressedInterpolation();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getIsCompressedInterpolation'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: layerWithColor of class  CCLayerGradient */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCLayerGradient_layerWithColor00
static int tolua_Cocos2d_CCLayerGradient_layerWithColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCLayerGradient",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"ccColor4B",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"ccColor4B",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ccColor4B start = *((ccColor4B*)  tolua_tousertype(tolua_S,2,0));
  ccColor4B end = *((ccColor4B*)  tolua_tousertype(tolua_S,3,0));
  {
   CCLayerGradient* tolua_ret = (CCLayerGradient*)  CCLayerGradient::layerWithColor(start,end);
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    tolua_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCLayerGradient");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'layerWithColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: layerWithColor of class  CCLayerGradient */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCLayerGradient_layerWithColor01
static int tolua_Cocos2d_CCLayerGradient_layerWithColor01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCLayerGradient",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"ccColor4B",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"ccColor4B",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  ccColor4B start = *((ccColor4B*)  tolua_tousertype(tolua_S,2,0));
  ccColor4B end = *((ccColor4B*)  tolua_tousertype(tolua_S,3,0));
  CCPoint v = *((CCPoint*)  tolua_tousertype(tolua_S,4,0));
  {
   CCLayerGradient* tolua_ret = (CCLayerGradient*)  CCLayerGradient::layerWithColor(start,end,v);
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    tolua_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCLayerGradient");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Cocos2d_CCLayerGradient_layerWithColor00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: addLayer of class  CCLayerMultiplex */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCLayerMultiplex_addLayer00
static int tolua_Cocos2d_CCLayerMultiplex_addLayer00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCLayerMultiplex",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCLayer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCLayerMultiplex* self = (CCLayerMultiplex*)  tolua_tousertype(tolua_S,1,0);
  CCLayer* layer = ((CCLayer*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addLayer'", NULL);
#endif
  {
   self->addLayer(layer);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addLayer'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: switchTo of class  CCLayerMultiplex */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCLayerMultiplex_switchTo00
static int tolua_Cocos2d_CCLayerMultiplex_switchTo00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCLayerMultiplex",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCLayerMultiplex* self = (CCLayerMultiplex*)  tolua_tousertype(tolua_S,1,0);
  unsigned int n = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'switchTo'", NULL);
#endif
  {
   self->switchTo(n);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'switchTo'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: switchToAndReleaseMe of class  CCLayerMultiplex */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCLayerMultiplex_switchToAndReleaseMe00
static int tolua_Cocos2d_CCLayerMultiplex_switchToAndReleaseMe00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCLayerMultiplex",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCLayerMultiplex* self = (CCLayerMultiplex*)  tolua_tousertype(tolua_S,1,0);
  unsigned int n = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'switchToAndReleaseMe'", NULL);
#endif
  {
   self->switchToAndReleaseMe(n);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'switchToAndReleaseMe'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: layerWithLayer of class  CCLayerMultiplex */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCLayerMultiplex_layerWithLayer00
static int tolua_Cocos2d_CCLayerMultiplex_layerWithLayer00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCLayerMultiplex",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCLayer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCLayer* layer = ((CCLayer*)  tolua_tousertype(tolua_S,2,0));
  {
   CCLayerMultiplex* tolua_ret = (CCLayerMultiplex*)  CCLayerMultiplex::layerWithLayer(layer);
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    tolua_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCLayerMultiplex");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'layerWithLayer'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: alignItemsVertically of class  CCMenu */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCMenu_alignItemsVertically00
static int tolua_Cocos2d_CCMenu_alignItemsVertically00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCMenu",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCMenu* self = (CCMenu*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'alignItemsVertically'", NULL);
#endif
  {
   self->alignItemsVertically();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'alignItemsVertically'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: alignItemsVerticallyWithPadding of class  CCMenu */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCMenu_alignItemsVerticallyWithPadding00
static int tolua_Cocos2d_CCMenu_alignItemsVerticallyWithPadding00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCMenu",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCMenu* self = (CCMenu*)  tolua_tousertype(tolua_S,1,0);
  float padding = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'alignItemsVerticallyWithPadding'", NULL);
#endif
  {
   self->alignItemsVerticallyWithPadding(padding);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'alignItemsVerticallyWithPadding'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: alignItemsHorizontally of class  CCMenu */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCMenu_alignItemsHorizontally00
static int tolua_Cocos2d_CCMenu_alignItemsHorizontally00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCMenu",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCMenu* self = (CCMenu*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'alignItemsHorizontally'", NULL);
#endif
  {
   self->alignItemsHorizontally();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'alignItemsHorizontally'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: alignItemsHorizontallyWithPadding of class  CCMenu */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCMenu_alignItemsHorizontallyWithPadding00
static int tolua_Cocos2d_CCMenu_alignItemsHorizontallyWithPadding00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCMenu",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCMenu* self = (CCMenu*)  tolua_tousertype(tolua_S,1,0);
  float padding = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'alignItemsHorizontallyWithPadding'", NULL);
#endif
  {
   self->alignItemsHorizontallyWithPadding(padding);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'alignItemsHorizontallyWithPadding'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: alignItemsInColumns of class  CCMenu */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCMenu_alignItemsInColumns00
static int tolua_Cocos2d_CCMenu_alignItemsInColumns00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCMenu",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"va_list",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCMenu* self = (CCMenu*)  tolua_tousertype(tolua_S,1,0);
  unsigned int columns = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
  va_list args = *((va_list*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'alignItemsInColumns'", NULL);
#endif
  {
   self->alignItemsInColumns(columns,args);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'alignItemsInColumns'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: alignItemsInRows of class  CCMenu */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCMenu_alignItemsInRows00
static int tolua_Cocos2d_CCMenu_alignItemsInRows00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCMenu",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"va_list",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCMenu* self = (CCMenu*)  tolua_tousertype(tolua_S,1,0);
  unsigned int rows = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
  va_list args = *((va_list*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'alignItemsInRows'", NULL);
#endif
  {
   self->alignItemsInRows(rows,args);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'alignItemsInRows'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addChild of class  CCMenu */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCMenu_addChild00
static int tolua_Cocos2d_CCMenu_addChild00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCMenu",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCMenuItem",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCMenu* self = (CCMenu*)  tolua_tousertype(tolua_S,1,0);
  CCMenuItem* child = ((CCMenuItem*)  tolua_tousertype(tolua_S,2,0));
  int zOrder = ((int)  tolua_tonumber(tolua_S,3,0));
  int tag = ((int)  tolua_tonumber(tolua_S,4,-1));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addChild'", NULL);
#endif
  {
   self->addChild(child,zOrder,tag);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addChild'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOpacity of class  CCMenu */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCMenu_setOpacity00
static int tolua_Cocos2d_CCMenu_setOpacity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCMenu",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCMenu* self = (CCMenu*)  tolua_tousertype(tolua_S,1,0);
  GLubyte opacity = ((GLubyte)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOpacity'", NULL);
#endif
  {
   self->setOpacity(opacity);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOpacity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getOpacity of class  CCMenu */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCMenu_getOpacity00
static int tolua_Cocos2d_CCMenu_getOpacity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCMenu",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCMenu* self = (CCMenu*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getOpacity'", NULL);
#endif
  {
   GLubyte tolua_ret = (GLubyte)  self->getOpacity();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getOpacity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setColor of class  CCMenu */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCMenu_setColor00
static int tolua_Cocos2d_CCMenu_setColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCMenu",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"ccColor3B",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCMenu* self = (CCMenu*)  tolua_tousertype(tolua_S,1,0);
  ccColor3B color = *((ccColor3B*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setColor'", NULL);
#endif
  {
   self->setColor(color);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getColor of class  CCMenu */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCMenu_getColor00
static int tolua_Cocos2d_CCMenu_getColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCMenu",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCMenu* self = (CCMenu*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getColor'", NULL);
#endif
  {
   ccColor3B tolua_ret = (ccColor3B)  self->getColor();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((ccColor3B)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"ccColor3B");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(ccColor3B));
     tolua_pushusertype(tolua_S,tolua_obj,"ccColor3B");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: node of class  CCMenu */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCMenu_node00
static int tolua_Cocos2d_CCMenu_node00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCMenu",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CCMenu* tolua_ret = (CCMenu*)  CCMenu::node();
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    tolua_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCMenu");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'node'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: menuWithItem of class  CCMenu */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCMenu_menuWithItem00
static int tolua_Cocos2d_CCMenu_menuWithItem00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCMenu",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCMenuItem",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCMenuItem* item = ((CCMenuItem*)  tolua_tousertype(tolua_S,2,0));
  {
   CCMenu* tolua_ret = (CCMenu*)  CCMenu::menuWithItem(item);
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    tolua_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCMenu");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'menuWithItem'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: rect of class  CCMenuItem */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCMenuItem_rect00
static int tolua_Cocos2d_CCMenuItem_rect00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCMenuItem",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCMenuItem* self = (CCMenuItem*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'rect'", NULL);
#endif
  {
   CCRect tolua_ret = (CCRect)  self->rect();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((CCRect)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"CCRect");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CCRect));
     tolua_pushusertype(tolua_S,tolua_obj,"CCRect");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'rect'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: activate of class  CCMenuItem */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCMenuItem_activate00
static int tolua_Cocos2d_CCMenuItem_activate00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCMenuItem",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCMenuItem* self = (CCMenuItem*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'activate'", NULL);
#endif
  {
   self->activate();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'activate'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: selected of class  CCMenuItem */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCMenuItem_selected00
static int tolua_Cocos2d_CCMenuItem_selected00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCMenuItem",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCMenuItem* self = (CCMenuItem*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'selected'", NULL);
#endif
  {
   self->selected();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'selected'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: unselected of class  CCMenuItem */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCMenuItem_unselected00
static int tolua_Cocos2d_CCMenuItem_unselected00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCMenuItem",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCMenuItem* self = (CCMenuItem*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'unselected'", NULL);
#endif
  {
   self->unselected();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'unselected'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setIsEnabled of class  CCMenuItem */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCMenuItem_setIsEnabled00
static int tolua_Cocos2d_CCMenuItem_setIsEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCMenuItem",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCMenuItem* self = (CCMenuItem*)  tolua_tousertype(tolua_S,1,0);
  bool enabled = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setIsEnabled'", NULL);
#endif
  {
   self->setIsEnabled(enabled);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setIsEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getIsEnabled of class  CCMenuItem */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCMenuItem_getIsEnabled00
static int tolua_Cocos2d_CCMenuItem_getIsEnabled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCMenuItem",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCMenuItem* self = (CCMenuItem*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getIsEnabled'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->getIsEnabled();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getIsEnabled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getIsSelected of class  CCMenuItem */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCMenuItem_getIsSelected00
static int tolua_Cocos2d_CCMenuItem_getIsSelected00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCMenuItem",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCMenuItem* self = (CCMenuItem*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getIsSelected'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->getIsSelected();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getIsSelected'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: isEnabled of class  CCMenuItem */
#ifndef TOLUA_DISABLE_tolua_get_CCMenuItem_isEnabled
static int tolua_get_CCMenuItem_isEnabled(lua_State* tolua_S)
{
  CCMenuItem* self = (CCMenuItem*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'isEnabled'",NULL);
#endif
  tolua_pushboolean(tolua_S,(bool)self->getIsEnabled());
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: isEnabled of class  CCMenuItem */
#ifndef TOLUA_DISABLE_tolua_set_CCMenuItem_isEnabled
static int tolua_set_CCMenuItem_isEnabled(lua_State* tolua_S)
{
  CCMenuItem* self = (CCMenuItem*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'isEnabled'",NULL);
  if (!tolua_isboolean(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->setIsEnabled(((bool)  tolua_toboolean(tolua_S,2,0))
)
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: registerScriptHandler of class  CCMenuItem */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCMenuItem_registerScriptHandler00
static int tolua_Cocos2d_CCMenuItem_registerScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCMenuItem",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isfunction(tolua_S,2,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCMenuItem* self = (CCMenuItem*)  tolua_tousertype(tolua_S,1,0);
  int funcID = (tolua_ref_function(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'registerScriptHandler'", NULL);
#endif
  {
   self->registerScriptHandler(funcID);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'registerScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: unregisterScriptHandler of class  CCMenuItem */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCMenuItem_unregisterScriptHandler00
static int tolua_Cocos2d_CCMenuItem_unregisterScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCMenuItem",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCMenuItem* self = (CCMenuItem*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'unregisterScriptHandler'", NULL);
#endif
  {
   self->unregisterScriptHandler();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'unregisterScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setString of class  CCMenuItemLabel */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCMenuItemLabel_setString00
static int tolua_Cocos2d_CCMenuItemLabel_setString00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCMenuItemLabel",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCMenuItemLabel* self = (CCMenuItemLabel*)  tolua_tousertype(tolua_S,1,0);
  const char* label = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setString'", NULL);
#endif
  {
   self->setString(label);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setString'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOpacity of class  CCMenuItemLabel */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCMenuItemLabel_setOpacity00
static int tolua_Cocos2d_CCMenuItemLabel_setOpacity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCMenuItemLabel",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCMenuItemLabel* self = (CCMenuItemLabel*)  tolua_tousertype(tolua_S,1,0);
  GLubyte opacity = ((GLubyte)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOpacity'", NULL);
#endif
  {
   self->setOpacity(opacity);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOpacity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getOpacity of class  CCMenuItemLabel */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCMenuItemLabel_getOpacity00
static int tolua_Cocos2d_CCMenuItemLabel_getOpacity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCMenuItemLabel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCMenuItemLabel* self = (CCMenuItemLabel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getOpacity'", NULL);
#endif
  {
   GLubyte tolua_ret = (GLubyte)  self->getOpacity();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getOpacity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setColor of class  CCMenuItemLabel */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCMenuItemLabel_setColor00
static int tolua_Cocos2d_CCMenuItemLabel_setColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCMenuItemLabel",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"ccColor3B",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCMenuItemLabel* self = (CCMenuItemLabel*)  tolua_tousertype(tolua_S,1,0);
  ccColor3B color = *((ccColor3B*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setColor'", NULL);
#endif
  {
   self->setColor(color);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getColor of class  CCMenuItemLabel */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCMenuItemLabel_getColor00
static int tolua_Cocos2d_CCMenuItemLabel_getColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCMenuItemLabel",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCMenuItemLabel* self = (CCMenuItemLabel*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getColor'", NULL);
#endif
  {
   ccColor3B tolua_ret = (ccColor3B)  self->getColor();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((ccColor3B)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"ccColor3B");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(ccColor3B));
     tolua_pushusertype(tolua_S,tolua_obj,"ccColor3B");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: itemWithLabel of class  CCMenuItemLabel */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCMenuItemLabel_itemWithLabel00
static int tolua_Cocos2d_CCMenuItemLabel_itemWithLabel00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCMenuItemLabel",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCNode* label = ((CCNode*)  tolua_tousertype(tolua_S,2,0));
  {
   CCMenuItemLabel* tolua_ret = (CCMenuItemLabel*)  CCMenuItemLabel::itemWithLabel(label);
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    tolua_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCMenuItemLabel");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'itemWithLabel'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: itemWithString of class  CCMenuItemAtlasFont */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCMenuItemAtlasFont_itemWithString00
static int tolua_Cocos2d_CCMenuItemAtlasFont_itemWithString00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCMenuItemAtlasFont",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* value = ((const char*)  tolua_tostring(tolua_S,2,0));
  const char* charMapFile = ((const char*)  tolua_tostring(tolua_S,3,0));
  int itemWidth = ((int)  tolua_tonumber(tolua_S,4,0));
  int itemHeight = ((int)  tolua_tonumber(tolua_S,5,0));
  char startCharMap = ((char)  tolua_tonumber(tolua_S,6,0));
  {
   CCMenuItemAtlasFont* tolua_ret = (CCMenuItemAtlasFont*)  CCMenuItemAtlasFont::itemWithString(value,charMapFile,itemWidth,itemHeight,startCharMap);
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    tolua_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCMenuItemAtlasFont");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'itemWithString'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setFontSize of class  CCMenuItemFont */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCMenuItemFont_setFontSize00
static int tolua_Cocos2d_CCMenuItemFont_setFontSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCMenuItemFont",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  int s = ((int)  tolua_tonumber(tolua_S,2,0));
  {
   CCMenuItemFont::setFontSize(s);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setFontSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: fontSize of class  CCMenuItemFont */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCMenuItemFont_fontSize00
static int tolua_Cocos2d_CCMenuItemFont_fontSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCMenuItemFont",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   int tolua_ret = (int)  CCMenuItemFont::fontSize();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'fontSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setFontName of class  CCMenuItemFont */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCMenuItemFont_setFontName00
static int tolua_Cocos2d_CCMenuItemFont_setFontName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCMenuItemFont",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* name = ((const char*)  tolua_tostring(tolua_S,2,0));
  {
   CCMenuItemFont::setFontName(name);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setFontName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: fontName of class  CCMenuItemFont */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCMenuItemFont_fontName00
static int tolua_Cocos2d_CCMenuItemFont_fontName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCMenuItemFont",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   const char* tolua_ret = (const char*)  CCMenuItemFont::fontName();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'fontName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: itemWithString of class  CCMenuItemFont */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCMenuItemFont_itemWithString00
static int tolua_Cocos2d_CCMenuItemFont_itemWithString00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCMenuItemFont",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* value = ((const char*)  tolua_tostring(tolua_S,2,0));
  {
   CCMenuItemFont* tolua_ret = (CCMenuItemFont*)  CCMenuItemFont::itemWithString(value);
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    tolua_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCMenuItemFont");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'itemWithString'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setColor of class  CCMenuItemSprite */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCMenuItemSprite_setColor00
static int tolua_Cocos2d_CCMenuItemSprite_setColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCMenuItemSprite",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"ccColor3B",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCMenuItemSprite* self = (CCMenuItemSprite*)  tolua_tousertype(tolua_S,1,0);
  ccColor3B color = *((ccColor3B*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setColor'", NULL);
#endif
  {
   self->setColor(color);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getColor of class  CCMenuItemSprite */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCMenuItemSprite_getColor00
static int tolua_Cocos2d_CCMenuItemSprite_getColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCMenuItemSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCMenuItemSprite* self = (CCMenuItemSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getColor'", NULL);
#endif
  {
   ccColor3B tolua_ret = (ccColor3B)  self->getColor();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((ccColor3B)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"ccColor3B");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(ccColor3B));
     tolua_pushusertype(tolua_S,tolua_obj,"ccColor3B");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOpacity of class  CCMenuItemSprite */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCMenuItemSprite_setOpacity00
static int tolua_Cocos2d_CCMenuItemSprite_setOpacity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCMenuItemSprite",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCMenuItemSprite* self = (CCMenuItemSprite*)  tolua_tousertype(tolua_S,1,0);
  GLubyte opacity = ((GLubyte)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOpacity'", NULL);
#endif
  {
   self->setOpacity(opacity);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOpacity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getOpacity of class  CCMenuItemSprite */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCMenuItemSprite_getOpacity00
static int tolua_Cocos2d_CCMenuItemSprite_getOpacity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCMenuItemSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCMenuItemSprite* self = (CCMenuItemSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getOpacity'", NULL);
#endif
  {
   GLubyte tolua_ret = (GLubyte)  self->getOpacity();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getOpacity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: itemWithNormalSprite of class  CCMenuItemSprite */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCMenuItemSprite_itemWithNormalSprite00
static int tolua_Cocos2d_CCMenuItemSprite_itemWithNormalSprite00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCMenuItemSprite",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCNode",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"CCNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCNode* normalSprite = ((CCNode*)  tolua_tousertype(tolua_S,2,0));
  CCNode* selectedSprite = ((CCNode*)  tolua_tousertype(tolua_S,3,0));
  {
   CCMenuItemSprite* tolua_ret = (CCMenuItemSprite*)  CCMenuItemSprite::itemWithNormalSprite(normalSprite,selectedSprite);
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    tolua_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCMenuItemSprite");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'itemWithNormalSprite'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: itemWithNormalSprite of class  CCMenuItemSprite */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCMenuItemSprite_itemWithNormalSprite01
static int tolua_Cocos2d_CCMenuItemSprite_itemWithNormalSprite01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCMenuItemSprite",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCNode",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"CCNode",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,4,"CCNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  CCNode* normalSprite = ((CCNode*)  tolua_tousertype(tolua_S,2,0));
  CCNode* selectedSprite = ((CCNode*)  tolua_tousertype(tolua_S,3,0));
  CCNode* disabledSprite = ((CCNode*)  tolua_tousertype(tolua_S,4,0));
  {
   CCMenuItemSprite* tolua_ret = (CCMenuItemSprite*)  CCMenuItemSprite::itemWithNormalSprite(normalSprite,selectedSprite,disabledSprite);
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    tolua_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCMenuItemSprite");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Cocos2d_CCMenuItemSprite_itemWithNormalSprite00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setColor of class  CCMenuItemImage */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCMenuItemImage_setColor00
static int tolua_Cocos2d_CCMenuItemImage_setColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCMenuItemImage",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"ccColor3B",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCMenuItemImage* self = (CCMenuItemImage*)  tolua_tousertype(tolua_S,1,0);
  ccColor3B color = *((ccColor3B*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setColor'", NULL);
#endif
  {
   self->setColor(color);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getColor of class  CCMenuItemImage */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCMenuItemImage_getColor00
static int tolua_Cocos2d_CCMenuItemImage_getColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCMenuItemImage",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCMenuItemImage* self = (CCMenuItemImage*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getColor'", NULL);
#endif
  {
   ccColor3B tolua_ret = (ccColor3B)  self->getColor();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((ccColor3B)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"ccColor3B");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(ccColor3B));
     tolua_pushusertype(tolua_S,tolua_obj,"ccColor3B");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOpacity of class  CCMenuItemImage */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCMenuItemImage_setOpacity00
static int tolua_Cocos2d_CCMenuItemImage_setOpacity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCMenuItemImage",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCMenuItemImage* self = (CCMenuItemImage*)  tolua_tousertype(tolua_S,1,0);
  GLubyte opacity = ((GLubyte)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOpacity'", NULL);
#endif
  {
   self->setOpacity(opacity);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOpacity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getOpacity of class  CCMenuItemImage */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCMenuItemImage_getOpacity00
static int tolua_Cocos2d_CCMenuItemImage_getOpacity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCMenuItemImage",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCMenuItemImage* self = (CCMenuItemImage*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getOpacity'", NULL);
#endif
  {
   GLubyte tolua_ret = (GLubyte)  self->getOpacity();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getOpacity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: itemWithNormalImage of class  CCMenuItemImage */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCMenuItemImage_itemWithNormalImage00
static int tolua_Cocos2d_CCMenuItemImage_itemWithNormalImage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCMenuItemImage",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* normalImage = ((const char*)  tolua_tostring(tolua_S,2,0));
  const char* selectedImage = ((const char*)  tolua_tostring(tolua_S,3,0));
  {
   CCMenuItemImage* tolua_ret = (CCMenuItemImage*)  CCMenuItemImage::itemWithNormalImage(normalImage,selectedImage);
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    tolua_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCMenuItemImage");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'itemWithNormalImage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: itemWithNormalImage of class  CCMenuItemImage */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCMenuItemImage_itemWithNormalImage01
static int tolua_Cocos2d_CCMenuItemImage_itemWithNormalImage01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCMenuItemImage",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isstring(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const char* normalImage = ((const char*)  tolua_tostring(tolua_S,2,0));
  const char* selectedImage = ((const char*)  tolua_tostring(tolua_S,3,0));
  const char* disabledImage = ((const char*)  tolua_tostring(tolua_S,4,0));
  {
   CCMenuItemImage* tolua_ret = (CCMenuItemImage*)  CCMenuItemImage::itemWithNormalImage(normalImage,selectedImage,disabledImage);
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    tolua_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCMenuItemImage");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Cocos2d_CCMenuItemImage_itemWithNormalImage00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: addSubItem of class  CCMenuItemToggle */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCMenuItemToggle_addSubItem00
static int tolua_Cocos2d_CCMenuItemToggle_addSubItem00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCMenuItemToggle",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCMenuItem",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCMenuItemToggle* self = (CCMenuItemToggle*)  tolua_tousertype(tolua_S,1,0);
  CCMenuItem* item = ((CCMenuItem*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addSubItem'", NULL);
#endif
  {
   self->addSubItem(item);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addSubItem'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: selectedItem of class  CCMenuItemToggle */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCMenuItemToggle_selectedItem00
static int tolua_Cocos2d_CCMenuItemToggle_selectedItem00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCMenuItemToggle",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCMenuItemToggle* self = (CCMenuItemToggle*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'selectedItem'", NULL);
#endif
  {
   CCMenuItem* tolua_ret = (CCMenuItem*)  self->selectedItem();
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    tolua_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCMenuItem");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'selectedItem'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: itemWithItem of class  CCMenuItemToggle */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCMenuItemToggle_itemWithItem00
static int tolua_Cocos2d_CCMenuItemToggle_itemWithItem00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCMenuItemToggle",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCMenuItem",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCMenuItem* item = ((CCMenuItem*)  tolua_tousertype(tolua_S,2,0));
  {
   CCMenuItemToggle* tolua_ret = (CCMenuItemToggle*)  CCMenuItemToggle::itemWithItem(item);
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    tolua_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCMenuItemToggle");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'itemWithItem'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getZOrder of class  CCNode */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCNode_getZOrder00
static int tolua_Cocos2d_CCNode_getZOrder00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCNode* self = (CCNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getZOrder'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getZOrder();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getZOrder'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getVertexZ of class  CCNode */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCNode_getVertexZ00
static int tolua_Cocos2d_CCNode_getVertexZ00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCNode* self = (CCNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getVertexZ'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getVertexZ();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getVertexZ'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setVertexZ of class  CCNode */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCNode_setVertexZ00
static int tolua_Cocos2d_CCNode_setVertexZ00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCNode* self = (CCNode*)  tolua_tousertype(tolua_S,1,0);
  float var = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setVertexZ'", NULL);
#endif
  {
   self->setVertexZ(var);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setVertexZ'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getRotation of class  CCNode */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCNode_getRotation00
static int tolua_Cocos2d_CCNode_getRotation00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCNode* self = (CCNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getRotation'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getRotation();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getRotation'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setRotation of class  CCNode */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCNode_setRotation00
static int tolua_Cocos2d_CCNode_setRotation00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCNode* self = (CCNode*)  tolua_tousertype(tolua_S,1,0);
  float newRotation = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setRotation'", NULL);
#endif
  {
   self->setRotation(newRotation);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setRotation'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getScale of class  CCNode */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCNode_getScale00
static int tolua_Cocos2d_CCNode_getScale00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCNode* self = (CCNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getScale'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getScale();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getScale'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setScale of class  CCNode */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCNode_setScale00
static int tolua_Cocos2d_CCNode_setScale00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCNode* self = (CCNode*)  tolua_tousertype(tolua_S,1,0);
  float scale = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setScale'", NULL);
#endif
  {
   self->setScale(scale);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setScale'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getScaleX of class  CCNode */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCNode_getScaleX00
static int tolua_Cocos2d_CCNode_getScaleX00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCNode* self = (CCNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getScaleX'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getScaleX();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getScaleX'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setScaleX of class  CCNode */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCNode_setScaleX00
static int tolua_Cocos2d_CCNode_setScaleX00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCNode* self = (CCNode*)  tolua_tousertype(tolua_S,1,0);
  float newScaleX = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setScaleX'", NULL);
#endif
  {
   self->setScaleX(newScaleX);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setScaleX'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getScaleY of class  CCNode */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCNode_getScaleY00
static int tolua_Cocos2d_CCNode_getScaleY00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCNode* self = (CCNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getScaleY'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getScaleY();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getScaleY'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setScaleY of class  CCNode */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCNode_setScaleY00
static int tolua_Cocos2d_CCNode_setScaleY00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCNode* self = (CCNode*)  tolua_tousertype(tolua_S,1,0);
  float newScaleY = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setScaleY'", NULL);
#endif
  {
   self->setScaleY(newScaleY);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setScaleY'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getPositionLua of class  CCNode */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCNode_getPositionLua00
static int tolua_Cocos2d_CCNode_getPositionLua00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCNode* self = (CCNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getPositionLua'", NULL);
#endif
  {
   CCPoint tolua_ret = (CCPoint)  self->getPositionLua();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((CCPoint)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"CCPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CCPoint));
     tolua_pushusertype(tolua_S,tolua_obj,"CCPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getPositionLua'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getPosition of class  CCNode */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCNode_getPosition00
static int tolua_Cocos2d_CCNode_getPosition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,1,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCNode* self = (CCNode*)  tolua_tousertype(tolua_S,1,0);
  float x = ((float)  tolua_tonumber(tolua_S,2,0));
  float y = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getPosition'", NULL);
#endif
  {
   self->getPosition(&x,&y);
   tolua_pushnumber(tolua_S,(lua_Number)x);
   tolua_pushnumber(tolua_S,(lua_Number)y);
  }
 }
 return 2;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getPosition'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getPositionX of class  CCNode */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCNode_getPositionX00
static int tolua_Cocos2d_CCNode_getPositionX00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCNode* self = (CCNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getPositionX'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getPositionX();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getPositionX'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getPositionY of class  CCNode */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCNode_getPositionY00
static int tolua_Cocos2d_CCNode_getPositionY00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCNode* self = (CCNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getPositionY'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getPositionY();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getPositionY'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setPosition of class  CCNode */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCNode_setPosition00
static int tolua_Cocos2d_CCNode_setPosition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCNode",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCNode* self = (CCNode*)  tolua_tousertype(tolua_S,1,0);
  CCPoint newPosition = *((CCPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPosition'", NULL);
#endif
  {
   self->setPosition(newPosition);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setPosition'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setPosition of class  CCNode */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCNode_setPosition01
static int tolua_Cocos2d_CCNode_setPosition01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  CCNode* self = (CCNode*)  tolua_tousertype(tolua_S,1,0);
  float x = ((float)  tolua_tonumber(tolua_S,2,0));
  float y = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPosition'", NULL);
#endif
  {
   self->setPosition(x,y);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Cocos2d_CCNode_setPosition00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setPositionX of class  CCNode */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCNode_setPositionX00
static int tolua_Cocos2d_CCNode_setPositionX00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCNode* self = (CCNode*)  tolua_tousertype(tolua_S,1,0);
  float x = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPositionX'", NULL);
#endif
  {
   self->setPositionX(x);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setPositionX'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setPositionY of class  CCNode */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCNode_setPositionY00
static int tolua_Cocos2d_CCNode_setPositionY00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCNode* self = (CCNode*)  tolua_tousertype(tolua_S,1,0);
  float y = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPositionY'", NULL);
#endif
  {
   self->setPositionY(y);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setPositionY'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getSkewX of class  CCNode */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCNode_getSkewX00
static int tolua_Cocos2d_CCNode_getSkewX00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCNode* self = (CCNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getSkewX'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getSkewX();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSkewX'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSkewX of class  CCNode */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCNode_setSkewX00
static int tolua_Cocos2d_CCNode_setSkewX00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCNode* self = (CCNode*)  tolua_tousertype(tolua_S,1,0);
  float skewX = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSkewX'", NULL);
#endif
  {
   self->setSkewX(skewX);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSkewX'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getSkewY of class  CCNode */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCNode_getSkewY00
static int tolua_Cocos2d_CCNode_getSkewY00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCNode* self = (CCNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getSkewY'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getSkewY();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getSkewY'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setSkewY of class  CCNode */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCNode_setSkewY00
static int tolua_Cocos2d_CCNode_setSkewY00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCNode* self = (CCNode*)  tolua_tousertype(tolua_S,1,0);
  float skewY = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setSkewY'", NULL);
#endif
  {
   self->setSkewY(skewY);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setSkewY'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getIsVisible of class  CCNode */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCNode_getIsVisible00
static int tolua_Cocos2d_CCNode_getIsVisible00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCNode* self = (CCNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getIsVisible'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->getIsVisible();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getIsVisible'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setIsVisible of class  CCNode */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCNode_setIsVisible00
static int tolua_Cocos2d_CCNode_setIsVisible00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCNode",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCNode* self = (CCNode*)  tolua_tousertype(tolua_S,1,0);
  bool var = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setIsVisible'", NULL);
#endif
  {
   self->setIsVisible(var);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setIsVisible'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getAnchorPoint of class  CCNode */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCNode_getAnchorPoint00
static int tolua_Cocos2d_CCNode_getAnchorPoint00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCNode* self = (CCNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getAnchorPoint'", NULL);
#endif
  {
   CCPoint tolua_ret = (CCPoint)  self->getAnchorPoint();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((CCPoint)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"CCPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CCPoint));
     tolua_pushusertype(tolua_S,tolua_obj,"CCPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getAnchorPoint'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAnchorPoint of class  CCNode */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCNode_setAnchorPoint00
static int tolua_Cocos2d_CCNode_setAnchorPoint00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCNode",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCNode* self = (CCNode*)  tolua_tousertype(tolua_S,1,0);
  CCPoint point = *((CCPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAnchorPoint'", NULL);
#endif
  {
   self->setAnchorPoint(point);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAnchorPoint'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getContentSize of class  CCNode */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCNode_getContentSize00
static int tolua_Cocos2d_CCNode_getContentSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCNode* self = (CCNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getContentSize'", NULL);
#endif
  {
   CCSize tolua_ret = (CCSize)  self->getContentSize();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((CCSize)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"CCSize");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CCSize));
     tolua_pushusertype(tolua_S,tolua_obj,"CCSize");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getContentSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setContentSize of class  CCNode */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCNode_setContentSize00
static int tolua_Cocos2d_CCNode_setContentSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCNode",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"CCSize",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCNode* self = (CCNode*)  tolua_tousertype(tolua_S,1,0);
  CCSize size = *((CCSize*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setContentSize'", NULL);
#endif
  {
   self->setContentSize(size);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setContentSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTag of class  CCNode */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCNode_getTag00
static int tolua_Cocos2d_CCNode_getTag00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCNode* self = (CCNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTag'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getTag();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTag'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTag of class  CCNode */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCNode_setTag00
static int tolua_Cocos2d_CCNode_setTag00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCNode* self = (CCNode*)  tolua_tousertype(tolua_S,1,0);
  int var = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTag'", NULL);
#endif
  {
   self->setTag(var);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTag'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: zOrder of class  CCNode */
#ifndef TOLUA_DISABLE_tolua_get_CCNode_zOrder
static int tolua_get_CCNode_zOrder(lua_State* tolua_S)
{
  CCNode* self = (CCNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'zOrder'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->getZOrder());
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: vertexZ of class  CCNode */
#ifndef TOLUA_DISABLE_tolua_get_CCNode_vertexZ
static int tolua_get_CCNode_vertexZ(lua_State* tolua_S)
{
  CCNode* self = (CCNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'vertexZ'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->getVertexZ());
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: vertexZ of class  CCNode */
#ifndef TOLUA_DISABLE_tolua_set_CCNode_vertexZ
static int tolua_set_CCNode_vertexZ(lua_State* tolua_S)
{
  CCNode* self = (CCNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'vertexZ'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->setVertexZ(((float)  tolua_tonumber(tolua_S,2,0))
)
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: rotation of class  CCNode */
#ifndef TOLUA_DISABLE_tolua_get_CCNode_rotation
static int tolua_get_CCNode_rotation(lua_State* tolua_S)
{
  CCNode* self = (CCNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'rotation'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->getRotation());
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: rotation of class  CCNode */
#ifndef TOLUA_DISABLE_tolua_set_CCNode_rotation
static int tolua_set_CCNode_rotation(lua_State* tolua_S)
{
  CCNode* self = (CCNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'rotation'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->setRotation(((float)  tolua_tonumber(tolua_S,2,0))
)
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: scale of class  CCNode */
#ifndef TOLUA_DISABLE_tolua_get_CCNode_scale
static int tolua_get_CCNode_scale(lua_State* tolua_S)
{
  CCNode* self = (CCNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'scale'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->getScale());
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: scale of class  CCNode */
#ifndef TOLUA_DISABLE_tolua_set_CCNode_scale
static int tolua_set_CCNode_scale(lua_State* tolua_S)
{
  CCNode* self = (CCNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'scale'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->setScale(((float)  tolua_tonumber(tolua_S,2,0))
)
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: scaleX of class  CCNode */
#ifndef TOLUA_DISABLE_tolua_get_CCNode_scaleX
static int tolua_get_CCNode_scaleX(lua_State* tolua_S)
{
  CCNode* self = (CCNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'scaleX'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->getScaleX());
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: scaleX of class  CCNode */
#ifndef TOLUA_DISABLE_tolua_set_CCNode_scaleX
static int tolua_set_CCNode_scaleX(lua_State* tolua_S)
{
  CCNode* self = (CCNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'scaleX'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->setScaleX(((float)  tolua_tonumber(tolua_S,2,0))
)
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: scaleY of class  CCNode */
#ifndef TOLUA_DISABLE_tolua_get_CCNode_scaleY
static int tolua_get_CCNode_scaleY(lua_State* tolua_S)
{
  CCNode* self = (CCNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'scaleY'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->getScaleY());
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: scaleY of class  CCNode */
#ifndef TOLUA_DISABLE_tolua_set_CCNode_scaleY
static int tolua_set_CCNode_scaleY(lua_State* tolua_S)
{
  CCNode* self = (CCNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'scaleY'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->setScaleY(((float)  tolua_tonumber(tolua_S,2,0))
)
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: x of class  CCNode */
#ifndef TOLUA_DISABLE_tolua_get_CCNode_x
static int tolua_get_CCNode_x(lua_State* tolua_S)
{
  CCNode* self = (CCNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'x'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->getPositionX());
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: x of class  CCNode */
#ifndef TOLUA_DISABLE_tolua_set_CCNode_x
static int tolua_set_CCNode_x(lua_State* tolua_S)
{
  CCNode* self = (CCNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'x'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->setPositionX(((float)  tolua_tonumber(tolua_S,2,0))
)
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: y of class  CCNode */
#ifndef TOLUA_DISABLE_tolua_get_CCNode_y
static int tolua_get_CCNode_y(lua_State* tolua_S)
{
  CCNode* self = (CCNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'y'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->getPositionY());
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: y of class  CCNode */
#ifndef TOLUA_DISABLE_tolua_set_CCNode_y
static int tolua_set_CCNode_y(lua_State* tolua_S)
{
  CCNode* self = (CCNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'y'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->setPositionY(((float)  tolua_tonumber(tolua_S,2,0))
)
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: skewX of class  CCNode */
#ifndef TOLUA_DISABLE_tolua_get_CCNode_skewX
static int tolua_get_CCNode_skewX(lua_State* tolua_S)
{
  CCNode* self = (CCNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'skewX'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->getSkewX());
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: skewX of class  CCNode */
#ifndef TOLUA_DISABLE_tolua_set_CCNode_skewX
static int tolua_set_CCNode_skewX(lua_State* tolua_S)
{
  CCNode* self = (CCNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'skewX'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->setSkewX(((float)  tolua_tonumber(tolua_S,2,0))
)
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: skewY of class  CCNode */
#ifndef TOLUA_DISABLE_tolua_get_CCNode_skewY
static int tolua_get_CCNode_skewY(lua_State* tolua_S)
{
  CCNode* self = (CCNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'skewY'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->getSkewY());
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: skewY of class  CCNode */
#ifndef TOLUA_DISABLE_tolua_set_CCNode_skewY
static int tolua_set_CCNode_skewY(lua_State* tolua_S)
{
  CCNode* self = (CCNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'skewY'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->setSkewY(((float)  tolua_tonumber(tolua_S,2,0))
)
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: isVisible of class  CCNode */
#ifndef TOLUA_DISABLE_tolua_get_CCNode_isVisible
static int tolua_get_CCNode_isVisible(lua_State* tolua_S)
{
  CCNode* self = (CCNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'isVisible'",NULL);
#endif
  tolua_pushboolean(tolua_S,(bool)self->getIsVisible());
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: isVisible of class  CCNode */
#ifndef TOLUA_DISABLE_tolua_set_CCNode_isVisible
static int tolua_set_CCNode_isVisible(lua_State* tolua_S)
{
  CCNode* self = (CCNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'isVisible'",NULL);
  if (!tolua_isboolean(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->setIsVisible(((bool)  tolua_toboolean(tolua_S,2,0))
)
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: anchorPoint of class  CCNode */
#ifndef TOLUA_DISABLE_tolua_get_CCNode_anchorPoint
static int tolua_get_CCNode_anchorPoint(lua_State* tolua_S)
{
  CCNode* self = (CCNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'anchorPoint'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->getAnchorPoint(),"CCPoint");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: anchorPoint of class  CCNode */
#ifndef TOLUA_DISABLE_tolua_set_CCNode_anchorPoint
static int tolua_set_CCNode_anchorPoint(lua_State* tolua_S)
{
  CCNode* self = (CCNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'anchorPoint'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"CCPoint",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->setAnchorPoint(*((CCPoint*)  tolua_tousertype(tolua_S,2,0))
)
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: contentSize of class  CCNode */
#ifndef TOLUA_DISABLE_tolua_get_CCNode_contentSize
static int tolua_get_CCNode_contentSize(lua_State* tolua_S)
{
  CCNode* self = (CCNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'contentSize'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->getContentSize(),"CCSize");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: contentSize of class  CCNode */
#ifndef TOLUA_DISABLE_tolua_set_CCNode_contentSize
static int tolua_set_CCNode_contentSize(lua_State* tolua_S)
{
  CCNode* self = (CCNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'contentSize'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"CCSize",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->setContentSize(*((CCSize*)  tolua_tousertype(tolua_S,2,0))
)
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: tag of class  CCNode */
#ifndef TOLUA_DISABLE_tolua_get_CCNode_tag
static int tolua_get_CCNode_tag(lua_State* tolua_S)
{
  CCNode* self = (CCNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'tag'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->getTag());
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: tag of class  CCNode */
#ifndef TOLUA_DISABLE_tolua_set_CCNode_tag
static int tolua_set_CCNode_tag(lua_State* tolua_S)
{
  CCNode* self = (CCNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'tag'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->setTag(((int)  tolua_tonumber(tolua_S,2,0))
)
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: getChildren of class  CCNode */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCNode_getChildren00
static int tolua_Cocos2d_CCNode_getChildren00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCNode* self = (CCNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getChildren'", NULL);
#endif
  {
   CCArray* tolua_ret = (CCArray*)  self->getChildren();
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    tolua_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCArray");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getChildren'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getChildrenCount of class  CCNode */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCNode_getChildrenCount00
static int tolua_Cocos2d_CCNode_getChildrenCount00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCNode* self = (CCNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getChildrenCount'", NULL);
#endif
  {
   unsigned int tolua_ret = (unsigned int)  self->getChildrenCount();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getChildrenCount'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getCamera of class  CCNode */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCNode_getCamera00
static int tolua_Cocos2d_CCNode_getCamera00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCNode* self = (CCNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getCamera'", NULL);
#endif
  {
   CCCamera* tolua_ret = (CCCamera*)  self->getCamera();
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    tolua_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCCamera");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getCamera'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getGrid of class  CCNode */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCNode_getGrid00
static int tolua_Cocos2d_CCNode_getGrid00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCNode* self = (CCNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getGrid'", NULL);
#endif
  {
   CCGridBase* tolua_ret = (CCGridBase*)  self->getGrid();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CCGridBase");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getGrid'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setGrid of class  CCNode */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCNode_setGrid00
static int tolua_Cocos2d_CCNode_setGrid00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCNode",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCGridBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCNode* self = (CCNode*)  tolua_tousertype(tolua_S,1,0);
  CCGridBase* pGrid = ((CCGridBase*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setGrid'", NULL);
#endif
  {
   self->setGrid(pGrid);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setGrid'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getIsRunning of class  CCNode */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCNode_getIsRunning00
static int tolua_Cocos2d_CCNode_getIsRunning00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCNode* self = (CCNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getIsRunning'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->getIsRunning();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getIsRunning'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getParent of class  CCNode */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCNode_getParent00
static int tolua_Cocos2d_CCNode_getParent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCNode* self = (CCNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getParent'", NULL);
#endif
  {
   CCNode* tolua_ret = (CCNode*)  self->getParent();
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    tolua_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCNode");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getParent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setParent of class  CCNode */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCNode_setParent00
static int tolua_Cocos2d_CCNode_setParent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCNode",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCNode* self = (CCNode*)  tolua_tousertype(tolua_S,1,0);
  CCNode* var = ((CCNode*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setParent'", NULL);
#endif
  {
   self->setParent(var);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setParent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getIsRelativeAnchorPoint of class  CCNode */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCNode_getIsRelativeAnchorPoint00
static int tolua_Cocos2d_CCNode_getIsRelativeAnchorPoint00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCNode* self = (CCNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getIsRelativeAnchorPoint'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->getIsRelativeAnchorPoint();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getIsRelativeAnchorPoint'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setIsRelativeAnchorPoint of class  CCNode */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCNode_setIsRelativeAnchorPoint00
static int tolua_Cocos2d_CCNode_setIsRelativeAnchorPoint00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCNode",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCNode* self = (CCNode*)  tolua_tousertype(tolua_S,1,0);
  bool newValue = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setIsRelativeAnchorPoint'", NULL);
#endif
  {
   self->setIsRelativeAnchorPoint(newValue);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setIsRelativeAnchorPoint'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getUserData of class  CCNode */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCNode_getUserData00
static int tolua_Cocos2d_CCNode_getUserData00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCNode* self = (CCNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getUserData'", NULL);
#endif
  {
   void* tolua_ret = (void*)  self->getUserData();
   tolua_pushuserdata(tolua_S,(void*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getUserData'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setUserData of class  CCNode */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCNode_setUserData00
static int tolua_Cocos2d_CCNode_setUserData00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCNode",0,&tolua_err) ||
     !tolua_isuserdata(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCNode* self = (CCNode*)  tolua_tousertype(tolua_S,1,0);
  void* var = ((void*)  tolua_touserdata(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setUserData'", NULL);
#endif
  {
   self->setUserData(var);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setUserData'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addChild of class  CCNode */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCNode_addChild00
static int tolua_Cocos2d_CCNode_addChild00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCNode",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCNode* self = (CCNode*)  tolua_tousertype(tolua_S,1,0);
  CCNode* child = ((CCNode*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addChild'", NULL);
#endif
  {
   self->addChild(child);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addChild'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addChild of class  CCNode */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCNode_addChild01
static int tolua_Cocos2d_CCNode_addChild01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCNode",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  CCNode* self = (CCNode*)  tolua_tousertype(tolua_S,1,0);
  CCNode* child = ((CCNode*)  tolua_tousertype(tolua_S,2,0));
  int zOrder = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addChild'", NULL);
#endif
  {
   self->addChild(child,zOrder);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Cocos2d_CCNode_addChild00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: addChild of class  CCNode */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCNode_addChild02
static int tolua_Cocos2d_CCNode_addChild02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCNode",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  CCNode* self = (CCNode*)  tolua_tousertype(tolua_S,1,0);
  CCNode* child = ((CCNode*)  tolua_tousertype(tolua_S,2,0));
  int zOrder = ((int)  tolua_tonumber(tolua_S,3,0));
  int tag = ((int)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addChild'", NULL);
#endif
  {
   self->addChild(child,zOrder,tag);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Cocos2d_CCNode_addChild01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeChild of class  CCNode */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCNode_removeChild00
static int tolua_Cocos2d_CCNode_removeChild00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCNode",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCNode",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCNode* self = (CCNode*)  tolua_tousertype(tolua_S,1,0);
  CCNode* child = ((CCNode*)  tolua_tousertype(tolua_S,2,0));
  bool cleanup = ((bool)  tolua_toboolean(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeChild'", NULL);
#endif
  {
   self->removeChild(child,cleanup);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeChild'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeAllChildrenWithCleanup of class  CCNode */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCNode_removeAllChildrenWithCleanup00
static int tolua_Cocos2d_CCNode_removeAllChildrenWithCleanup00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCNode",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCNode* self = (CCNode*)  tolua_tousertype(tolua_S,1,0);
  bool cleanup = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeAllChildrenWithCleanup'", NULL);
#endif
  {
   self->removeAllChildrenWithCleanup(cleanup);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeAllChildrenWithCleanup'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: reorderChild of class  CCNode */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCNode_reorderChild00
static int tolua_Cocos2d_CCNode_reorderChild00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCNode",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCNode* self = (CCNode*)  tolua_tousertype(tolua_S,1,0);
  CCNode* child = ((CCNode*)  tolua_tousertype(tolua_S,2,0));
  int zOrder = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'reorderChild'", NULL);
#endif
  {
   self->reorderChild(child,zOrder);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'reorderChild'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: cleanup of class  CCNode */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCNode_cleanup00
static int tolua_Cocos2d_CCNode_cleanup00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCNode* self = (CCNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'cleanup'", NULL);
#endif
  {
   self->cleanup();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'cleanup'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: draw of class  CCNode */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCNode_draw00
static int tolua_Cocos2d_CCNode_draw00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCNode* self = (CCNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'draw'", NULL);
#endif
  {
   self->draw();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'draw'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: visit of class  CCNode */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCNode_visit00
static int tolua_Cocos2d_CCNode_visit00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCNode* self = (CCNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'visit'", NULL);
#endif
  {
   self->visit();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'visit'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: transform of class  CCNode */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCNode_transform00
static int tolua_Cocos2d_CCNode_transform00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCNode* self = (CCNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'transform'", NULL);
#endif
  {
   self->transform();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'transform'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: transformAncestors of class  CCNode */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCNode_transformAncestors00
static int tolua_Cocos2d_CCNode_transformAncestors00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCNode* self = (CCNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'transformAncestors'", NULL);
#endif
  {
   self->transformAncestors();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'transformAncestors'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: boundingBox of class  CCNode */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCNode_boundingBox00
static int tolua_Cocos2d_CCNode_boundingBox00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCNode* self = (CCNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'boundingBox'", NULL);
#endif
  {
   CCRect tolua_ret = (CCRect)  self->boundingBox();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((CCRect)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"CCRect");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CCRect));
     tolua_pushusertype(tolua_S,tolua_obj,"CCRect");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'boundingBox'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: runAction of class  CCNode */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCNode_runAction00
static int tolua_Cocos2d_CCNode_runAction00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCNode",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCAction",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCNode* self = (CCNode*)  tolua_tousertype(tolua_S,1,0);
  CCAction* action = ((CCAction*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'runAction'", NULL);
#endif
  {
   self->runAction(action);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'runAction'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: stopAllActions of class  CCNode */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCNode_stopAllActions00
static int tolua_Cocos2d_CCNode_stopAllActions00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCNode* self = (CCNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'stopAllActions'", NULL);
#endif
  {
   self->stopAllActions();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'stopAllActions'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: stopAction of class  CCNode */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCNode_stopAction00
static int tolua_Cocos2d_CCNode_stopAction00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCNode",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCAction",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCNode* self = (CCNode*)  tolua_tousertype(tolua_S,1,0);
  CCAction* action = ((CCAction*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'stopAction'", NULL);
#endif
  {
   self->stopAction(action);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'stopAction'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: stopActionByTag of class  CCNode */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCNode_stopActionByTag00
static int tolua_Cocos2d_CCNode_stopActionByTag00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCNode* self = (CCNode*)  tolua_tousertype(tolua_S,1,0);
  int tag = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'stopActionByTag'", NULL);
#endif
  {
   self->stopActionByTag(tag);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'stopActionByTag'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getActionByTag of class  CCNode */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCNode_getActionByTag00
static int tolua_Cocos2d_CCNode_getActionByTag00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCNode* self = (CCNode*)  tolua_tousertype(tolua_S,1,0);
  int tag = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getActionByTag'", NULL);
#endif
  {
   CCAction* tolua_ret = (CCAction*)  self->getActionByTag(tag);
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    tolua_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCAction");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getActionByTag'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: description of class  CCNode */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCNode_description00
static int tolua_Cocos2d_CCNode_description00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCNode* self = (CCNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'description'", NULL);
#endif
  {
   char* tolua_ret = (char*)  self->description();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'description'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getChildByTag of class  CCNode */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCNode_getChildByTag00
static int tolua_Cocos2d_CCNode_getChildByTag00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCNode* self = (CCNode*)  tolua_tousertype(tolua_S,1,0);
  int tag = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getChildByTag'", NULL);
#endif
  {
   CCNode* tolua_ret = (CCNode*)  self->getChildByTag(tag);
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    tolua_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCNode");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getChildByTag'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: numberOfRunningActions of class  CCNode */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCNode_numberOfRunningActions00
static int tolua_Cocos2d_CCNode_numberOfRunningActions00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCNode* self = (CCNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'numberOfRunningActions'", NULL);
#endif
  {
   unsigned int tolua_ret = (unsigned int)  self->numberOfRunningActions();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'numberOfRunningActions'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: scheduleUpdate of class  CCNode */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCNode_scheduleUpdate00
static int tolua_Cocos2d_CCNode_scheduleUpdate00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCNode* self = (CCNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'scheduleUpdate'", NULL);
#endif
  {
   self->scheduleUpdate();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'scheduleUpdate'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: scheduleUpdateWithPriority of class  CCNode */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCNode_scheduleUpdateWithPriority00
static int tolua_Cocos2d_CCNode_scheduleUpdateWithPriority00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCNode* self = (CCNode*)  tolua_tousertype(tolua_S,1,0);
  int priority = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'scheduleUpdateWithPriority'", NULL);
#endif
  {
   self->scheduleUpdateWithPriority(priority);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'scheduleUpdateWithPriority'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: unscheduleUpdate of class  CCNode */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCNode_unscheduleUpdate00
static int tolua_Cocos2d_CCNode_unscheduleUpdate00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCNode* self = (CCNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'unscheduleUpdate'", NULL);
#endif
  {
   self->unscheduleUpdate();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'unscheduleUpdate'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: unscheduleAllSelectors of class  CCNode */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCNode_unscheduleAllSelectors00
static int tolua_Cocos2d_CCNode_unscheduleAllSelectors00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCNode* self = (CCNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'unscheduleAllSelectors'", NULL);
#endif
  {
   self->unscheduleAllSelectors();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'unscheduleAllSelectors'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: resumeSchedulerAndActions of class  CCNode */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCNode_resumeSchedulerAndActions00
static int tolua_Cocos2d_CCNode_resumeSchedulerAndActions00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCNode* self = (CCNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'resumeSchedulerAndActions'", NULL);
#endif
  {
   self->resumeSchedulerAndActions();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'resumeSchedulerAndActions'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: pauseSchedulerAndActions of class  CCNode */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCNode_pauseSchedulerAndActions00
static int tolua_Cocos2d_CCNode_pauseSchedulerAndActions00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCNode* self = (CCNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'pauseSchedulerAndActions'", NULL);
#endif
  {
   self->pauseSchedulerAndActions();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'pauseSchedulerAndActions'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: nodeToParentTransform of class  CCNode */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCNode_nodeToParentTransform00
static int tolua_Cocos2d_CCNode_nodeToParentTransform00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCNode* self = (CCNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'nodeToParentTransform'", NULL);
#endif
  {
   CCAffineTransform tolua_ret = (CCAffineTransform)  self->nodeToParentTransform();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((CCAffineTransform)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"CCAffineTransform");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CCAffineTransform));
     tolua_pushusertype(tolua_S,tolua_obj,"CCAffineTransform");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'nodeToParentTransform'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: parentToNodeTransform of class  CCNode */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCNode_parentToNodeTransform00
static int tolua_Cocos2d_CCNode_parentToNodeTransform00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCNode* self = (CCNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'parentToNodeTransform'", NULL);
#endif
  {
   CCAffineTransform tolua_ret = (CCAffineTransform)  self->parentToNodeTransform();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((CCAffineTransform)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"CCAffineTransform");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CCAffineTransform));
     tolua_pushusertype(tolua_S,tolua_obj,"CCAffineTransform");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'parentToNodeTransform'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: nodeToWorldTransform of class  CCNode */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCNode_nodeToWorldTransform00
static int tolua_Cocos2d_CCNode_nodeToWorldTransform00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCNode* self = (CCNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'nodeToWorldTransform'", NULL);
#endif
  {
   CCAffineTransform tolua_ret = (CCAffineTransform)  self->nodeToWorldTransform();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((CCAffineTransform)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"CCAffineTransform");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CCAffineTransform));
     tolua_pushusertype(tolua_S,tolua_obj,"CCAffineTransform");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'nodeToWorldTransform'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: worldToNodeTransform of class  CCNode */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCNode_worldToNodeTransform00
static int tolua_Cocos2d_CCNode_worldToNodeTransform00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCNode* self = (CCNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'worldToNodeTransform'", NULL);
#endif
  {
   CCAffineTransform tolua_ret = (CCAffineTransform)  self->worldToNodeTransform();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((CCAffineTransform)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"CCAffineTransform");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CCAffineTransform));
     tolua_pushusertype(tolua_S,tolua_obj,"CCAffineTransform");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'worldToNodeTransform'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: convertToNodeSpace of class  CCNode */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCNode_convertToNodeSpace00
static int tolua_Cocos2d_CCNode_convertToNodeSpace00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCNode",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCNode* self = (CCNode*)  tolua_tousertype(tolua_S,1,0);
  CCPoint worldPoint = *((CCPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'convertToNodeSpace'", NULL);
#endif
  {
   CCPoint tolua_ret = (CCPoint)  self->convertToNodeSpace(worldPoint);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((CCPoint)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"CCPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CCPoint));
     tolua_pushusertype(tolua_S,tolua_obj,"CCPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'convertToNodeSpace'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: convertToWorldSpace of class  CCNode */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCNode_convertToWorldSpace00
static int tolua_Cocos2d_CCNode_convertToWorldSpace00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCNode",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCNode* self = (CCNode*)  tolua_tousertype(tolua_S,1,0);
  CCPoint nodePoint = *((CCPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'convertToWorldSpace'", NULL);
#endif
  {
   CCPoint tolua_ret = (CCPoint)  self->convertToWorldSpace(nodePoint);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((CCPoint)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"CCPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CCPoint));
     tolua_pushusertype(tolua_S,tolua_obj,"CCPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'convertToWorldSpace'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: convertToNodeSpaceAR of class  CCNode */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCNode_convertToNodeSpaceAR00
static int tolua_Cocos2d_CCNode_convertToNodeSpaceAR00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCNode",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCNode* self = (CCNode*)  tolua_tousertype(tolua_S,1,0);
  CCPoint worldPoint = *((CCPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'convertToNodeSpaceAR'", NULL);
#endif
  {
   CCPoint tolua_ret = (CCPoint)  self->convertToNodeSpaceAR(worldPoint);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((CCPoint)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"CCPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CCPoint));
     tolua_pushusertype(tolua_S,tolua_obj,"CCPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'convertToNodeSpaceAR'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: convertToWorldSpaceAR of class  CCNode */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCNode_convertToWorldSpaceAR00
static int tolua_Cocos2d_CCNode_convertToWorldSpaceAR00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCNode",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCNode* self = (CCNode*)  tolua_tousertype(tolua_S,1,0);
  CCPoint nodePoint = *((CCPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'convertToWorldSpaceAR'", NULL);
#endif
  {
   CCPoint tolua_ret = (CCPoint)  self->convertToWorldSpaceAR(nodePoint);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((CCPoint)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"CCPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CCPoint));
     tolua_pushusertype(tolua_S,tolua_obj,"CCPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'convertToWorldSpaceAR'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: convertTouchToNodeSpace of class  CCNode */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCNode_convertTouchToNodeSpace00
static int tolua_Cocos2d_CCNode_convertTouchToNodeSpace00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCNode",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTouch",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCNode* self = (CCNode*)  tolua_tousertype(tolua_S,1,0);
  CCTouch* touch = ((CCTouch*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'convertTouchToNodeSpace'", NULL);
#endif
  {
   CCPoint tolua_ret = (CCPoint)  self->convertTouchToNodeSpace(touch);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((CCPoint)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"CCPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CCPoint));
     tolua_pushusertype(tolua_S,tolua_obj,"CCPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'convertTouchToNodeSpace'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: convertTouchToNodeSpaceAR of class  CCNode */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCNode_convertTouchToNodeSpaceAR00
static int tolua_Cocos2d_CCNode_convertTouchToNodeSpaceAR00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCNode",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTouch",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCNode* self = (CCNode*)  tolua_tousertype(tolua_S,1,0);
  CCTouch* touch = ((CCTouch*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'convertTouchToNodeSpaceAR'", NULL);
#endif
  {
   CCPoint tolua_ret = (CCPoint)  self->convertTouchToNodeSpaceAR(touch);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((CCPoint)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"CCPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CCPoint));
     tolua_pushusertype(tolua_S,tolua_obj,"CCPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'convertTouchToNodeSpaceAR'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeFromParentAndCleanup of class  CCNode */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCNode_removeFromParentAndCleanup00
static int tolua_Cocos2d_CCNode_removeFromParentAndCleanup00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCNode",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCNode* self = (CCNode*)  tolua_tousertype(tolua_S,1,0);
  bool cleanup = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeFromParentAndCleanup'", NULL);
#endif
  {
   self->removeFromParentAndCleanup(cleanup);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeFromParentAndCleanup'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeChildByTag of class  CCNode */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCNode_removeChildByTag00
static int tolua_Cocos2d_CCNode_removeChildByTag00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCNode* self = (CCNode*)  tolua_tousertype(tolua_S,1,0);
  int tag = ((int)  tolua_tonumber(tolua_S,2,0));
  bool cleanup = ((bool)  tolua_toboolean(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeChildByTag'", NULL);
#endif
  {
   self->removeChildByTag(tag,cleanup);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeChildByTag'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: registerScriptHandler of class  CCNode */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCNode_registerScriptHandler00
static int tolua_Cocos2d_CCNode_registerScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCNode",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isfunction(tolua_S,2,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCNode* self = (CCNode*)  tolua_tousertype(tolua_S,1,0);
  int funcID = (tolua_ref_function(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'registerScriptHandler'", NULL);
#endif
  {
   self->registerScriptHandler(funcID);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'registerScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: unregisterScriptHandler of class  CCNode */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCNode_unregisterScriptHandler00
static int tolua_Cocos2d_CCNode_unregisterScriptHandler00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCNode* self = (CCNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'unregisterScriptHandler'", NULL);
#endif
  {
   self->unregisterScriptHandler();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'unregisterScriptHandler'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: node of class  CCNode */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCNode_node00
static int tolua_Cocos2d_CCNode_node00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CCNode* tolua_ret = (CCNode*)  CCNode::node();
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    tolua_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCNode");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'node'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: release of class  CCObject */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCObject_release00
static int tolua_Cocos2d_CCObject_release00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCObject",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCObject* self = (CCObject*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'release'", NULL);
#endif
  {
   self->release();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'release'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: retain of class  CCObject */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCObject_retain00
static int tolua_Cocos2d_CCObject_retain00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCObject",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCObject* self = (CCObject*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'retain'", NULL);
#endif
  {
   self->retain();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'retain'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isSingleRefrence of class  CCObject */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCObject_isSingleRefrence00
static int tolua_Cocos2d_CCObject_isSingleRefrence00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCObject",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCObject* self = (CCObject*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isSingleRefrence'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isSingleRefrence();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isSingleRefrence'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: retainCount of class  CCObject */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCObject_retainCount00
static int tolua_Cocos2d_CCObject_retainCount00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCObject",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCObject* self = (CCObject*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'retainCount'", NULL);
#endif
  {
   unsigned int tolua_ret = (unsigned int)  self->retainCount();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'retainCount'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isEqual of class  CCObject */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCObject_isEqual00
static int tolua_Cocos2d_CCObject_isEqual00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCObject",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"const CCObject",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCObject* self = (CCObject*)  tolua_tousertype(tolua_S,1,0);
  const CCObject* pObject = ((const CCObject*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isEqual'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isEqual(pObject);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isEqual'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getParallaxArray of class  CCParallaxNode */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCParallaxNode_getParallaxArray00
static int tolua_Cocos2d_CCParallaxNode_getParallaxArray00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParallaxNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParallaxNode* self = (CCParallaxNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getParallaxArray'", NULL);
#endif
  {
   struct _ccArray* tolua_ret = (struct _ccArray*)  self->getParallaxArray();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"_ccArray");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getParallaxArray'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setParallaxArray of class  CCParallaxNode */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCParallaxNode_setParallaxArray00
static int tolua_Cocos2d_CCParallaxNode_setParallaxArray00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParallaxNode",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"_ccArray",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParallaxNode* self = (CCParallaxNode*)  tolua_tousertype(tolua_S,1,0);
  struct _ccArray* pval = ((struct _ccArray*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setParallaxArray'", NULL);
#endif
  {
   self->setParallaxArray(pval);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setParallaxArray'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addChild of class  CCParallaxNode */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCParallaxNode_addChild00
static int tolua_Cocos2d_CCParallaxNode_addChild00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParallaxNode",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"CCPoint",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,5,&tolua_err) || !tolua_isusertype(tolua_S,5,"CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParallaxNode* self = (CCParallaxNode*)  tolua_tousertype(tolua_S,1,0);
  CCNode* child = ((CCNode*)  tolua_tousertype(tolua_S,2,0));
  unsigned int z = ((unsigned int)  tolua_tonumber(tolua_S,3,0));
  CCPoint parallaxRatio = *((CCPoint*)  tolua_tousertype(tolua_S,4,0));
  CCPoint positionOffset = *((CCPoint*)  tolua_tousertype(tolua_S,5,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addChild'", NULL);
#endif
  {
   self->addChild(child,z,parallaxRatio,positionOffset);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addChild'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addChild of class  CCParallaxNode */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCParallaxNode_addChild01
static int tolua_Cocos2d_CCParallaxNode_addChild01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParallaxNode",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCNode",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  CCParallaxNode* self = (CCParallaxNode*)  tolua_tousertype(tolua_S,1,0);
  CCNode* child = ((CCNode*)  tolua_tousertype(tolua_S,2,0));
  unsigned int zOrder = ((unsigned int)  tolua_tonumber(tolua_S,3,0));
  int tag = ((int)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addChild'", NULL);
#endif
  {
   self->addChild(child,zOrder,tag);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Cocos2d_CCParallaxNode_addChild00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeChild of class  CCParallaxNode */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCParallaxNode_removeChild00
static int tolua_Cocos2d_CCParallaxNode_removeChild00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParallaxNode",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCNode",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParallaxNode* self = (CCParallaxNode*)  tolua_tousertype(tolua_S,1,0);
  CCNode* child = ((CCNode*)  tolua_tousertype(tolua_S,2,0));
  bool cleanup = ((bool)  tolua_toboolean(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeChild'", NULL);
#endif
  {
   self->removeChild(child,cleanup);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeChild'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeAllChildrenWithCleanup of class  CCParallaxNode */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCParallaxNode_removeAllChildrenWithCleanup00
static int tolua_Cocos2d_CCParallaxNode_removeAllChildrenWithCleanup00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParallaxNode",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParallaxNode* self = (CCParallaxNode*)  tolua_tousertype(tolua_S,1,0);
  bool cleanup = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeAllChildrenWithCleanup'", NULL);
#endif
  {
   self->removeAllChildrenWithCleanup(cleanup);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeAllChildrenWithCleanup'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: visit of class  CCParallaxNode */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCParallaxNode_visit00
static int tolua_Cocos2d_CCParallaxNode_visit00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParallaxNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCParallaxNode* self = (CCParallaxNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'visit'", NULL);
#endif
  {
   self->visit();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'visit'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getParallaxArray of class  CCParallaxNode */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCParallaxNode_getParallaxArray01
static int tolua_Cocos2d_CCParallaxNode_getParallaxArray01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParallaxNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  CCParallaxNode* self = (CCParallaxNode*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getParallaxArray'", NULL);
#endif
  {
   struct _ccArray* tolua_ret = (struct _ccArray*)  self->getParallaxArray();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"_ccArray");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Cocos2d_CCParallaxNode_getParallaxArray00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: setParallaxArray of class  CCParallaxNode */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCParallaxNode_setParallaxArray01
static int tolua_Cocos2d_CCParallaxNode_setParallaxArray01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCParallaxNode",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"_ccArray",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  CCParallaxNode* self = (CCParallaxNode*)  tolua_tousertype(tolua_S,1,0);
  struct _ccArray* val = ((struct _ccArray*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setParallaxArray'", NULL);
#endif
  {
   self->setParallaxArray(val);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Cocos2d_CCParallaxNode_setParallaxArray00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: node of class  CCParallaxNode */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCParallaxNode_node00
static int tolua_Cocos2d_CCParallaxNode_node00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCParallaxNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CCParallaxNode* tolua_ret = (CCParallaxNode*)  CCParallaxNode::node();
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    tolua_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCParallaxNode");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'node'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: ccpNeg */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_ccpNeg00
static int tolua_Cocos2d_ccpNeg00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CCPoint* v = ((const CCPoint*)  tolua_tousertype(tolua_S,1,0));
  {
   CCPoint tolua_ret = (CCPoint)  ccpNeg(*v);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((CCPoint)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"CCPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CCPoint));
     tolua_pushusertype(tolua_S,tolua_obj,"CCPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ccpNeg'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: ccpAdd */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_ccpAdd00
static int tolua_Cocos2d_ccpAdd00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"const CCPoint",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CCPoint* v1 = ((const CCPoint*)  tolua_tousertype(tolua_S,1,0));
  const CCPoint* v2 = ((const CCPoint*)  tolua_tousertype(tolua_S,2,0));
  {
   CCPoint tolua_ret = (CCPoint)  ccpAdd(*v1,*v2);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((CCPoint)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"CCPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CCPoint));
     tolua_pushusertype(tolua_S,tolua_obj,"CCPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ccpAdd'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: ccpSub */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_ccpSub00
static int tolua_Cocos2d_ccpSub00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"const CCPoint",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CCPoint* v1 = ((const CCPoint*)  tolua_tousertype(tolua_S,1,0));
  const CCPoint* v2 = ((const CCPoint*)  tolua_tousertype(tolua_S,2,0));
  {
   CCPoint tolua_ret = (CCPoint)  ccpSub(*v1,*v2);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((CCPoint)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"CCPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CCPoint));
     tolua_pushusertype(tolua_S,tolua_obj,"CCPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ccpSub'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: ccpMult */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_ccpMult00
static int tolua_Cocos2d_ccpMult00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CCPoint* v = ((const CCPoint*)  tolua_tousertype(tolua_S,1,0));
  const float s = ((const float)  tolua_tonumber(tolua_S,2,0));
  {
   CCPoint tolua_ret = (CCPoint)  ccpMult(*v,s);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((CCPoint)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"CCPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CCPoint));
     tolua_pushusertype(tolua_S,tolua_obj,"CCPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ccpMult'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: ccpMidpoint */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_ccpMidpoint00
static int tolua_Cocos2d_ccpMidpoint00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"const CCPoint",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CCPoint* v1 = ((const CCPoint*)  tolua_tousertype(tolua_S,1,0));
  const CCPoint* v2 = ((const CCPoint*)  tolua_tousertype(tolua_S,2,0));
  {
   CCPoint tolua_ret = (CCPoint)  ccpMidpoint(*v1,*v2);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((CCPoint)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"CCPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CCPoint));
     tolua_pushusertype(tolua_S,tolua_obj,"CCPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ccpMidpoint'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: ccpDot */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_ccpDot00
static int tolua_Cocos2d_ccpDot00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"const CCPoint",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CCPoint* v1 = ((const CCPoint*)  tolua_tousertype(tolua_S,1,0));
  const CCPoint* v2 = ((const CCPoint*)  tolua_tousertype(tolua_S,2,0));
  {
   float tolua_ret = (float)  ccpDot(*v1,*v2);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ccpDot'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: ccpCross */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_ccpCross00
static int tolua_Cocos2d_ccpCross00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"const CCPoint",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CCPoint* v1 = ((const CCPoint*)  tolua_tousertype(tolua_S,1,0));
  const CCPoint* v2 = ((const CCPoint*)  tolua_tousertype(tolua_S,2,0));
  {
   float tolua_ret = (float)  ccpCross(*v1,*v2);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ccpCross'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: ccpPerp */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_ccpPerp00
static int tolua_Cocos2d_ccpPerp00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CCPoint* v = ((const CCPoint*)  tolua_tousertype(tolua_S,1,0));
  {
   CCPoint tolua_ret = (CCPoint)  ccpPerp(*v);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((CCPoint)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"CCPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CCPoint));
     tolua_pushusertype(tolua_S,tolua_obj,"CCPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ccpPerp'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: ccpRPerp */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_ccpRPerp00
static int tolua_Cocos2d_ccpRPerp00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CCPoint* v = ((const CCPoint*)  tolua_tousertype(tolua_S,1,0));
  {
   CCPoint tolua_ret = (CCPoint)  ccpRPerp(*v);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((CCPoint)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"CCPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CCPoint));
     tolua_pushusertype(tolua_S,tolua_obj,"CCPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ccpRPerp'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: ccpProject */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_ccpProject00
static int tolua_Cocos2d_ccpProject00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"const CCPoint",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CCPoint* v1 = ((const CCPoint*)  tolua_tousertype(tolua_S,1,0));
  const CCPoint* v2 = ((const CCPoint*)  tolua_tousertype(tolua_S,2,0));
  {
   CCPoint tolua_ret = (CCPoint)  ccpProject(*v1,*v2);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((CCPoint)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"CCPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CCPoint));
     tolua_pushusertype(tolua_S,tolua_obj,"CCPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ccpProject'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: ccpRotate */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_ccpRotate00
static int tolua_Cocos2d_ccpRotate00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"const CCPoint",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CCPoint* v1 = ((const CCPoint*)  tolua_tousertype(tolua_S,1,0));
  const CCPoint* v2 = ((const CCPoint*)  tolua_tousertype(tolua_S,2,0));
  {
   CCPoint tolua_ret = (CCPoint)  ccpRotate(*v1,*v2);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((CCPoint)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"CCPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CCPoint));
     tolua_pushusertype(tolua_S,tolua_obj,"CCPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ccpRotate'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: ccpUnrotate */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_ccpUnrotate00
static int tolua_Cocos2d_ccpUnrotate00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"const CCPoint",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CCPoint* v1 = ((const CCPoint*)  tolua_tousertype(tolua_S,1,0));
  const CCPoint* v2 = ((const CCPoint*)  tolua_tousertype(tolua_S,2,0));
  {
   CCPoint tolua_ret = (CCPoint)  ccpUnrotate(*v1,*v2);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((CCPoint)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"CCPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CCPoint));
     tolua_pushusertype(tolua_S,tolua_obj,"CCPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ccpUnrotate'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: ccpLengthSQ */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_ccpLengthSQ00
static int tolua_Cocos2d_ccpLengthSQ00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CCPoint* v = ((const CCPoint*)  tolua_tousertype(tolua_S,1,0));
  {
   float tolua_ret = (float)  ccpLengthSQ(*v);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ccpLengthSQ'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: ccpLength */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_ccpLength00
static int tolua_Cocos2d_ccpLength00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CCPoint* v = ((const CCPoint*)  tolua_tousertype(tolua_S,1,0));
  {
    float tolua_ret = (  float)  ccpLength(*v);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ccpLength'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: ccpDistance */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_ccpDistance00
static int tolua_Cocos2d_ccpDistance00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"const CCPoint",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CCPoint* v1 = ((const CCPoint*)  tolua_tousertype(tolua_S,1,0));
  const CCPoint* v2 = ((const CCPoint*)  tolua_tousertype(tolua_S,2,0));
  {
    float tolua_ret = (  float)  ccpDistance(*v1,*v2);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ccpDistance'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: ccpNormalize */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_ccpNormalize00
static int tolua_Cocos2d_ccpNormalize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CCPoint* v = ((const CCPoint*)  tolua_tousertype(tolua_S,1,0));
  {
   CCPoint tolua_ret = (CCPoint)  ccpNormalize(*v);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((CCPoint)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"CCPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CCPoint));
     tolua_pushusertype(tolua_S,tolua_obj,"CCPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ccpNormalize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: ccpForAngle */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_ccpForAngle00
static int tolua_Cocos2d_ccpForAngle00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const float a = ((const float)  tolua_tonumber(tolua_S,1,0));
  {
   CCPoint tolua_ret = (CCPoint)  ccpForAngle(a);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((CCPoint)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"CCPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CCPoint));
     tolua_pushusertype(tolua_S,tolua_obj,"CCPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ccpForAngle'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: ccpToAngle */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_ccpToAngle00
static int tolua_Cocos2d_ccpToAngle00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CCPoint* v = ((const CCPoint*)  tolua_tousertype(tolua_S,1,0));
  {
    float tolua_ret = (  float)  ccpToAngle(*v);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ccpToAngle'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: clampf */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_clampf00
static int tolua_Cocos2d_clampf00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  float value = ((float)  tolua_tonumber(tolua_S,1,0));
  float min_inclusive = ((float)  tolua_tonumber(tolua_S,2,0));
  float max_inclusive = ((float)  tolua_tonumber(tolua_S,3,0));
  {
   float tolua_ret = (float)  clampf(value,min_inclusive,max_inclusive);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'clampf'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: ccpClamp */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_ccpClamp00
static int tolua_Cocos2d_ccpClamp00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"const CCPoint",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCPoint",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CCPoint* p = ((const CCPoint*)  tolua_tousertype(tolua_S,1,0));
  const CCPoint* from = ((const CCPoint*)  tolua_tousertype(tolua_S,2,0));
  const CCPoint* to = ((const CCPoint*)  tolua_tousertype(tolua_S,3,0));
  {
   CCPoint tolua_ret = (CCPoint)  ccpClamp(*p,*from,*to);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((CCPoint)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"CCPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CCPoint));
     tolua_pushusertype(tolua_S,tolua_obj,"CCPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ccpClamp'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: ccpFromSize */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_ccpFromSize00
static int tolua_Cocos2d_ccpFromSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"const CCSize",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CCSize* s = ((const CCSize*)  tolua_tousertype(tolua_S,1,0));
  {
   CCPoint tolua_ret = (CCPoint)  ccpFromSize(*s);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((CCPoint)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"CCPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CCPoint));
     tolua_pushusertype(tolua_S,tolua_obj,"CCPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ccpFromSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: ccpLerp */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_ccpLerp00
static int tolua_Cocos2d_ccpLerp00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"const CCPoint",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CCPoint* a = ((const CCPoint*)  tolua_tousertype(tolua_S,1,0));
  const CCPoint* b = ((const CCPoint*)  tolua_tousertype(tolua_S,2,0));
  float alpha = ((float)  tolua_tonumber(tolua_S,3,0));
  {
   CCPoint tolua_ret = (CCPoint)  ccpLerp(*a,*b,alpha);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((CCPoint)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"CCPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CCPoint));
     tolua_pushusertype(tolua_S,tolua_obj,"CCPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ccpLerp'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: ccpFuzzyEqual */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_ccpFuzzyEqual00
static int tolua_Cocos2d_ccpFuzzyEqual00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"const CCPoint",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CCPoint* a = ((const CCPoint*)  tolua_tousertype(tolua_S,1,0));
  const CCPoint* b = ((const CCPoint*)  tolua_tousertype(tolua_S,2,0));
  float variance = ((float)  tolua_tonumber(tolua_S,3,0));
  {
   bool tolua_ret = (bool)  ccpFuzzyEqual(*a,*b,variance);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ccpFuzzyEqual'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: ccpCompMult */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_ccpCompMult00
static int tolua_Cocos2d_ccpCompMult00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"const CCPoint",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CCPoint* a = ((const CCPoint*)  tolua_tousertype(tolua_S,1,0));
  const CCPoint* b = ((const CCPoint*)  tolua_tousertype(tolua_S,2,0));
  {
   CCPoint tolua_ret = (CCPoint)  ccpCompMult(*a,*b);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((CCPoint)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"CCPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CCPoint));
     tolua_pushusertype(tolua_S,tolua_obj,"CCPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ccpCompMult'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: ccpAngleSigned */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_ccpAngleSigned00
static int tolua_Cocos2d_ccpAngleSigned00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"const CCPoint",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CCPoint* a = ((const CCPoint*)  tolua_tousertype(tolua_S,1,0));
  const CCPoint* b = ((const CCPoint*)  tolua_tousertype(tolua_S,2,0));
  {
   float tolua_ret = (float)  ccpAngleSigned(*a,*b);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ccpAngleSigned'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: ccpAngle */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_ccpAngle00
static int tolua_Cocos2d_ccpAngle00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"const CCPoint",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CCPoint* a = ((const CCPoint*)  tolua_tousertype(tolua_S,1,0));
  const CCPoint* b = ((const CCPoint*)  tolua_tousertype(tolua_S,2,0));
  {
   float tolua_ret = (float)  ccpAngle(*a,*b);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ccpAngle'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: ccpRotateByAngle */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_ccpRotateByAngle00
static int tolua_Cocos2d_ccpRotateByAngle00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"const CCPoint",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CCPoint* v = ((const CCPoint*)  tolua_tousertype(tolua_S,1,0));
  const CCPoint* pivot = ((const CCPoint*)  tolua_tousertype(tolua_S,2,0));
  float angle = ((float)  tolua_tonumber(tolua_S,3,0));
  {
   CCPoint tolua_ret = (CCPoint)  ccpRotateByAngle(*v,*pivot,angle);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((CCPoint)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"CCPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CCPoint));
     tolua_pushusertype(tolua_S,tolua_obj,"CCPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ccpRotateByAngle'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: ccpLineIntersect */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_ccpLineIntersect00
static int tolua_Cocos2d_ccpLineIntersect00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"const CCPoint",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCPoint",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const CCPoint",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CCPoint* p1 = ((const CCPoint*)  tolua_tousertype(tolua_S,1,0));
  const CCPoint* p2 = ((const CCPoint*)  tolua_tousertype(tolua_S,2,0));
  const CCPoint* p3 = ((const CCPoint*)  tolua_tousertype(tolua_S,3,0));
  const CCPoint* p4 = ((const CCPoint*)  tolua_tousertype(tolua_S,4,0));
  float s = ((float)  tolua_tonumber(tolua_S,5,0));
  float t = ((float)  tolua_tonumber(tolua_S,6,0));
  {
   bool tolua_ret = (bool)  ccpLineIntersect(*p1,*p2,*p3,*p4,&s,&t);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
   tolua_pushnumber(tolua_S,(lua_Number)s);
   tolua_pushnumber(tolua_S,(lua_Number)t);
  }
 }
 return 3;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ccpLineIntersect'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: ccpSegmentIntersect */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_ccpSegmentIntersect00
static int tolua_Cocos2d_ccpSegmentIntersect00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"const CCPoint",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCPoint",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const CCPoint",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CCPoint* A = ((const CCPoint*)  tolua_tousertype(tolua_S,1,0));
  const CCPoint* B = ((const CCPoint*)  tolua_tousertype(tolua_S,2,0));
  const CCPoint* C = ((const CCPoint*)  tolua_tousertype(tolua_S,3,0));
  const CCPoint* D = ((const CCPoint*)  tolua_tousertype(tolua_S,4,0));
  {
   bool tolua_ret = (bool)  ccpSegmentIntersect(*A,*B,*C,*D);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ccpSegmentIntersect'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: ccpIntersectPoint */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_ccpIntersectPoint00
static int tolua_Cocos2d_ccpIntersectPoint00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"const CCPoint",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"const CCPoint",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"const CCPoint",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"const CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const CCPoint* A = ((const CCPoint*)  tolua_tousertype(tolua_S,1,0));
  const CCPoint* B = ((const CCPoint*)  tolua_tousertype(tolua_S,2,0));
  const CCPoint* C = ((const CCPoint*)  tolua_tousertype(tolua_S,3,0));
  const CCPoint* D = ((const CCPoint*)  tolua_tousertype(tolua_S,4,0));
  {
   CCPoint tolua_ret = (CCPoint)  ccpIntersectPoint(*A,*B,*C,*D);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((CCPoint)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"CCPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CCPoint));
     tolua_pushusertype(tolua_S,tolua_obj,"CCPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ccpIntersectPoint'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: node of class  CCScene */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCScene_node00
static int tolua_Cocos2d_CCScene_node00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCScene",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CCScene* tolua_ret = (CCScene*)  CCScene::node();
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    tolua_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCScene");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'node'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDirty of class  CCSprite */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCSprite_setDirty00
static int tolua_Cocos2d_CCSprite_setDirty00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCSprite",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCSprite* self = (CCSprite*)  tolua_tousertype(tolua_S,1,0);
  bool bDirty = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDirty'", NULL);
#endif
  {
   self->setDirty(bDirty);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDirty'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isDirty of class  CCSprite */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCSprite_isDirty00
static int tolua_Cocos2d_CCSprite_isDirty00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCSprite* self = (CCSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isDirty'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isDirty();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isDirty'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getQuad of class  CCSprite */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCSprite_getQuad00
static int tolua_Cocos2d_CCSprite_getQuad00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCSprite* self = (CCSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getQuad'", NULL);
#endif
  {
   ccV3F_C4B_T2F_Quad tolua_ret = (ccV3F_C4B_T2F_Quad)  self->getQuad();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((ccV3F_C4B_T2F_Quad)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"ccV3F_C4B_T2F_Quad");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(ccV3F_C4B_T2F_Quad));
     tolua_pushusertype(tolua_S,tolua_obj,"ccV3F_C4B_T2F_Quad");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getQuad'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTextureRect of class  CCSprite */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCSprite_getTextureRect00
static int tolua_Cocos2d_CCSprite_getTextureRect00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCSprite* self = (CCSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTextureRect'", NULL);
#endif
  {
   CCRect tolua_ret = (CCRect)  self->getTextureRect();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((CCRect)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"CCRect");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CCRect));
     tolua_pushusertype(tolua_S,tolua_obj,"CCRect");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTextureRect'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isTextureRectRotated of class  CCSprite */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCSprite_isTextureRectRotated00
static int tolua_Cocos2d_CCSprite_isTextureRectRotated00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCSprite* self = (CCSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isTextureRectRotated'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isTextureRectRotated();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isTextureRectRotated'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAtlasIndex of class  CCSprite */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCSprite_setAtlasIndex00
static int tolua_Cocos2d_CCSprite_setAtlasIndex00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCSprite",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCSprite* self = (CCSprite*)  tolua_tousertype(tolua_S,1,0);
  unsigned int uAtlasIndex = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAtlasIndex'", NULL);
#endif
  {
   self->setAtlasIndex(uAtlasIndex);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAtlasIndex'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getAtlasIndex of class  CCSprite */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCSprite_getAtlasIndex00
static int tolua_Cocos2d_CCSprite_getAtlasIndex00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCSprite* self = (CCSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getAtlasIndex'", NULL);
#endif
  {
   unsigned int tolua_ret = (unsigned int)  self->getAtlasIndex();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getAtlasIndex'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTextureAtlas of class  CCSprite */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCSprite_setTextureAtlas00
static int tolua_Cocos2d_CCSprite_setTextureAtlas00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCSprite",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTextureAtlas",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCSprite* self = (CCSprite*)  tolua_tousertype(tolua_S,1,0);
  CCTextureAtlas* pobTextureAtlas = ((CCTextureAtlas*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTextureAtlas'", NULL);
#endif
  {
   self->setTextureAtlas(pobTextureAtlas);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTextureAtlas'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTextureAtlas of class  CCSprite */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCSprite_getTextureAtlas00
static int tolua_Cocos2d_CCSprite_getTextureAtlas00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCSprite* self = (CCSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTextureAtlas'", NULL);
#endif
  {
   CCTextureAtlas* tolua_ret = (CCTextureAtlas*)  self->getTextureAtlas();
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    tolua_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCTextureAtlas");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTextureAtlas'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setBlendFunc of class  CCSprite */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCSprite_setBlendFunc00
static int tolua_Cocos2d_CCSprite_setBlendFunc00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCSprite",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"ccBlendFunc",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCSprite* self = (CCSprite*)  tolua_tousertype(tolua_S,1,0);
  ccBlendFunc blendFunc = *((ccBlendFunc*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBlendFunc'", NULL);
#endif
  {
   self->setBlendFunc(blendFunc);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setBlendFunc'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getBlendFunc of class  CCSprite */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCSprite_getBlendFunc00
static int tolua_Cocos2d_CCSprite_getBlendFunc00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCSprite* self = (CCSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getBlendFunc'", NULL);
#endif
  {
   ccBlendFunc tolua_ret = (ccBlendFunc)  self->getBlendFunc();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((ccBlendFunc)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"ccBlendFunc");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(ccBlendFunc));
     tolua_pushusertype(tolua_S,tolua_obj,"ccBlendFunc");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getBlendFunc'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDirtyRecursively of class  CCSprite */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCSprite_setDirtyRecursively00
static int tolua_Cocos2d_CCSprite_setDirtyRecursively00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCSprite",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCSprite* self = (CCSprite*)  tolua_tousertype(tolua_S,1,0);
  bool bValue = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDirtyRecursively'", NULL);
#endif
  {
   self->setDirtyRecursively(bValue);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDirtyRecursively'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setIsRelativeAnchorPoint of class  CCSprite */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCSprite_setIsRelativeAnchorPoint00
static int tolua_Cocos2d_CCSprite_setIsRelativeAnchorPoint00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCSprite",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCSprite* self = (CCSprite*)  tolua_tousertype(tolua_S,1,0);
  bool bRelative = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setIsRelativeAnchorPoint'", NULL);
#endif
  {
   self->setIsRelativeAnchorPoint(bRelative);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setIsRelativeAnchorPoint'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setFlipX of class  CCSprite */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCSprite_setFlipX00
static int tolua_Cocos2d_CCSprite_setFlipX00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCSprite",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCSprite* self = (CCSprite*)  tolua_tousertype(tolua_S,1,0);
  bool bFlipX = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setFlipX'", NULL);
#endif
  {
   self->setFlipX(bFlipX);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setFlipX'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setFlipY of class  CCSprite */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCSprite_setFlipY00
static int tolua_Cocos2d_CCSprite_setFlipY00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCSprite",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCSprite* self = (CCSprite*)  tolua_tousertype(tolua_S,1,0);
  bool bFlipY = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setFlipY'", NULL);
#endif
  {
   self->setFlipY(bFlipY);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setFlipY'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isFlipX of class  CCSprite */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCSprite_isFlipX00
static int tolua_Cocos2d_CCSprite_isFlipX00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCSprite* self = (CCSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isFlipX'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isFlipX();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isFlipX'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isFlipY of class  CCSprite */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCSprite_isFlipY00
static int tolua_Cocos2d_CCSprite_isFlipY00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCSprite* self = (CCSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isFlipY'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isFlipY();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isFlipY'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: updateColor of class  CCSprite */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCSprite_updateColor00
static int tolua_Cocos2d_CCSprite_updateColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCSprite* self = (CCSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'updateColor'", NULL);
#endif
  {
   self->updateColor();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'updateColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOpacity of class  CCSprite */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCSprite_setOpacity00
static int tolua_Cocos2d_CCSprite_setOpacity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCSprite",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCSprite* self = (CCSprite*)  tolua_tousertype(tolua_S,1,0);
  GLubyte opacity = ((GLubyte)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOpacity'", NULL);
#endif
  {
   self->setOpacity(opacity);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOpacity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getOpacity of class  CCSprite */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCSprite_getOpacity00
static int tolua_Cocos2d_CCSprite_getOpacity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCSprite* self = (CCSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getOpacity'", NULL);
#endif
  {
   GLubyte tolua_ret = (GLubyte)  self->getOpacity();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getOpacity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: opacity of class  CCSprite */
#ifndef TOLUA_DISABLE_tolua_get_CCSprite_opacity
static int tolua_get_CCSprite_opacity(lua_State* tolua_S)
{
  CCSprite* self = (CCSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'opacity'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->getOpacity());
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: opacity of class  CCSprite */
#ifndef TOLUA_DISABLE_tolua_set_CCSprite_opacity
static int tolua_set_CCSprite_opacity(lua_State* tolua_S)
{
  CCSprite* self = (CCSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'opacity'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->setOpacity(((GLubyte)  tolua_tonumber(tolua_S,2,0))
)
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: setColor of class  CCSprite */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCSprite_setColor00
static int tolua_Cocos2d_CCSprite_setColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCSprite",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"ccColor3B",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCSprite* self = (CCSprite*)  tolua_tousertype(tolua_S,1,0);
  ccColor3B color3 = *((ccColor3B*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setColor'", NULL);
#endif
  {
   self->setColor(color3);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getColor of class  CCSprite */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCSprite_getColor00
static int tolua_Cocos2d_CCSprite_getColor00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCSprite* self = (CCSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getColor'", NULL);
#endif
  {
   ccColor3B tolua_ret = (ccColor3B)  self->getColor();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((ccColor3B)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"ccColor3B");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(ccColor3B));
     tolua_pushusertype(tolua_S,tolua_obj,"ccColor3B");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getColor'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setIsOpacityModifyRGB of class  CCSprite */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCSprite_setIsOpacityModifyRGB00
static int tolua_Cocos2d_CCSprite_setIsOpacityModifyRGB00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCSprite",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCSprite* self = (CCSprite*)  tolua_tousertype(tolua_S,1,0);
  bool bValue = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setIsOpacityModifyRGB'", NULL);
#endif
  {
   self->setIsOpacityModifyRGB(bValue);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setIsOpacityModifyRGB'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getIsOpacityModifyRGB of class  CCSprite */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCSprite_getIsOpacityModifyRGB00
static int tolua_Cocos2d_CCSprite_getIsOpacityModifyRGB00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCSprite* self = (CCSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getIsOpacityModifyRGB'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->getIsOpacityModifyRGB();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getIsOpacityModifyRGB'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTexture of class  CCSprite */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCSprite_setTexture00
static int tolua_Cocos2d_CCSprite_setTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCSprite",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTexture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCSprite* self = (CCSprite*)  tolua_tousertype(tolua_S,1,0);
  CCTexture2D* texture = ((CCTexture2D*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTexture'", NULL);
#endif
  {
   self->setTexture(texture);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTexture of class  CCSprite */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCSprite_getTexture00
static int tolua_Cocos2d_CCSprite_getTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCSprite* self = (CCSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTexture'", NULL);
#endif
  {
   CCTexture2D* tolua_ret = (CCTexture2D*)  self->getTexture();
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    tolua_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCTexture2D");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: updateTransform of class  CCSprite */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCSprite_updateTransform00
static int tolua_Cocos2d_CCSprite_updateTransform00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCSprite* self = (CCSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'updateTransform'", NULL);
#endif
  {
   self->updateTransform();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'updateTransform'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTextureRect of class  CCSprite */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCSprite_setTextureRect00
static int tolua_Cocos2d_CCSprite_setTextureRect00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCSprite",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"CCRect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCSprite* self = (CCSprite*)  tolua_tousertype(tolua_S,1,0);
  CCRect rect = *((CCRect*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTextureRect'", NULL);
#endif
  {
   self->setTextureRect(rect);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTextureRect'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDisplayFrame of class  CCSprite */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCSprite_setDisplayFrame00
static int tolua_Cocos2d_CCSprite_setDisplayFrame00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCSprite",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCSpriteFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCSprite* self = (CCSprite*)  tolua_tousertype(tolua_S,1,0);
  CCSpriteFrame* pNewFrame = ((CCSpriteFrame*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDisplayFrame'", NULL);
#endif
  {
   self->setDisplayFrame(pNewFrame);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDisplayFrame'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isFrameDisplayed of class  CCSprite */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCSprite_isFrameDisplayed00
static int tolua_Cocos2d_CCSprite_isFrameDisplayed00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCSprite",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCSpriteFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCSprite* self = (CCSprite*)  tolua_tousertype(tolua_S,1,0);
  CCSpriteFrame* pFrame = ((CCSpriteFrame*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isFrameDisplayed'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isFrameDisplayed(pFrame);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isFrameDisplayed'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDisplayFrameWithAnimationName of class  CCSprite */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCSprite_setDisplayFrameWithAnimationName00
static int tolua_Cocos2d_CCSprite_setDisplayFrameWithAnimationName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCSprite",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCSprite* self = (CCSprite*)  tolua_tousertype(tolua_S,1,0);
  const char* animationName = ((const char*)  tolua_tostring(tolua_S,2,0));
  int frameIndex = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDisplayFrameWithAnimationName'", NULL);
#endif
  {
   self->setDisplayFrameWithAnimationName(animationName,frameIndex);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDisplayFrameWithAnimationName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: spriteWithTexture of class  CCSprite */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCSprite_spriteWithTexture00
static int tolua_Cocos2d_CCSprite_spriteWithTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCSprite",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTexture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTexture2D* pTexture = ((CCTexture2D*)  tolua_tousertype(tolua_S,2,0));
  {
   CCSprite* tolua_ret = (CCSprite*)  CCSprite::spriteWithTexture(pTexture);
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    tolua_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCSprite");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'spriteWithTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: spriteWithTexture of class  CCSprite */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCSprite_spriteWithTexture01
static int tolua_Cocos2d_CCSprite_spriteWithTexture01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCSprite",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTexture2D",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"CCRect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  CCTexture2D* pTexture = ((CCTexture2D*)  tolua_tousertype(tolua_S,2,0));
  CCRect rect = *((CCRect*)  tolua_tousertype(tolua_S,3,0));
  {
   CCSprite* tolua_ret = (CCSprite*)  CCSprite::spriteWithTexture(pTexture,rect);
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    tolua_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCSprite");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Cocos2d_CCSprite_spriteWithTexture00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: spriteWithTexture of class  CCSprite */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCSprite_spriteWithTexture02
static int tolua_Cocos2d_CCSprite_spriteWithTexture02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCSprite",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTexture2D",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"CCRect",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  CCTexture2D* pTexture = ((CCTexture2D*)  tolua_tousertype(tolua_S,2,0));
  CCRect rect = *((CCRect*)  tolua_tousertype(tolua_S,3,0));
  CCPoint offset = *((CCPoint*)  tolua_tousertype(tolua_S,4,0));
  {
   CCSprite* tolua_ret = (CCSprite*)  CCSprite::spriteWithTexture(pTexture,rect,offset);
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    tolua_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCSprite");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Cocos2d_CCSprite_spriteWithTexture01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: spriteWithSpriteFrame of class  CCSprite */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCSprite_spriteWithSpriteFrame00
static int tolua_Cocos2d_CCSprite_spriteWithSpriteFrame00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCSprite",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCSpriteFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCSpriteFrame* pSpriteFrame = ((CCSpriteFrame*)  tolua_tousertype(tolua_S,2,0));
  {
   CCSprite* tolua_ret = (CCSprite*)  CCSprite::spriteWithSpriteFrame(pSpriteFrame);
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    tolua_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCSprite");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'spriteWithSpriteFrame'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: spriteWithSpriteFrameName of class  CCSprite */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCSprite_spriteWithSpriteFrameName00
static int tolua_Cocos2d_CCSprite_spriteWithSpriteFrameName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCSprite",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* pszSpriteFrameName = ((const char*)  tolua_tostring(tolua_S,2,0));
  {
   CCSprite* tolua_ret = (CCSprite*)  CCSprite::spriteWithSpriteFrameName(pszSpriteFrameName);
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    tolua_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCSprite");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'spriteWithSpriteFrameName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: spriteWithFile of class  CCSprite */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCSprite_spriteWithFile00
static int tolua_Cocos2d_CCSprite_spriteWithFile00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCSprite",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* pszFileName = ((const char*)  tolua_tostring(tolua_S,2,0));
  {
   CCSprite* tolua_ret = (CCSprite*)  CCSprite::spriteWithFile(pszFileName);
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    tolua_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCSprite");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'spriteWithFile'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: spriteWithFile of class  CCSprite */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCSprite_spriteWithFile01
static int tolua_Cocos2d_CCSprite_spriteWithFile01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCSprite",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"CCRect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const char* pszFileName = ((const char*)  tolua_tostring(tolua_S,2,0));
  CCRect rect = *((CCRect*)  tolua_tousertype(tolua_S,3,0));
  {
   CCSprite* tolua_ret = (CCSprite*)  CCSprite::spriteWithFile(pszFileName,rect);
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    tolua_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCSprite");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Cocos2d_CCSprite_spriteWithFile00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: getRectInPixels of class  CCSpriteFrame */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCSpriteFrame_getRectInPixels00
static int tolua_Cocos2d_CCSpriteFrame_getRectInPixels00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCSpriteFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCSpriteFrame* self = (CCSpriteFrame*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getRectInPixels'", NULL);
#endif
  {
   CCRect tolua_ret = (CCRect)  self->getRectInPixels();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((CCRect)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"CCRect");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CCRect));
     tolua_pushusertype(tolua_S,tolua_obj,"CCRect");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getRectInPixels'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setRectInPixels of class  CCSpriteFrame */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCSpriteFrame_setRectInPixels00
static int tolua_Cocos2d_CCSpriteFrame_setRectInPixels00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCSpriteFrame",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"CCRect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCSpriteFrame* self = (CCSpriteFrame*)  tolua_tousertype(tolua_S,1,0);
  CCRect rectInPixels = *((CCRect*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setRectInPixels'", NULL);
#endif
  {
   self->setRectInPixels(rectInPixels);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setRectInPixels'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isRotated of class  CCSpriteFrame */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCSpriteFrame_isRotated00
static int tolua_Cocos2d_CCSpriteFrame_isRotated00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCSpriteFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCSpriteFrame* self = (CCSpriteFrame*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isRotated'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isRotated();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isRotated'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setRotated of class  CCSpriteFrame */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCSpriteFrame_setRotated00
static int tolua_Cocos2d_CCSpriteFrame_setRotated00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCSpriteFrame",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCSpriteFrame* self = (CCSpriteFrame*)  tolua_tousertype(tolua_S,1,0);
  bool bRotated = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setRotated'", NULL);
#endif
  {
   self->setRotated(bRotated);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setRotated'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getRect of class  CCSpriteFrame */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCSpriteFrame_getRect00
static int tolua_Cocos2d_CCSpriteFrame_getRect00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCSpriteFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCSpriteFrame* self = (CCSpriteFrame*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getRect'", NULL);
#endif
  {
   CCRect tolua_ret = (CCRect)  self->getRect();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((CCRect)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"CCRect");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CCRect));
     tolua_pushusertype(tolua_S,tolua_obj,"CCRect");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getRect'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setRect of class  CCSpriteFrame */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCSpriteFrame_setRect00
static int tolua_Cocos2d_CCSpriteFrame_setRect00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCSpriteFrame",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"CCRect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCSpriteFrame* self = (CCSpriteFrame*)  tolua_tousertype(tolua_S,1,0);
  CCRect rect = *((CCRect*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setRect'", NULL);
#endif
  {
   self->setRect(rect);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setRect'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getOffsetInPixels of class  CCSpriteFrame */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCSpriteFrame_getOffsetInPixels00
static int tolua_Cocos2d_CCSpriteFrame_getOffsetInPixels00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCSpriteFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCSpriteFrame* self = (CCSpriteFrame*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getOffsetInPixels'", NULL);
#endif
  {
   CCPoint tolua_ret = (CCPoint)  self->getOffsetInPixels();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((CCPoint)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"CCPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CCPoint));
     tolua_pushusertype(tolua_S,tolua_obj,"CCPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getOffsetInPixels'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOffsetInPixels of class  CCSpriteFrame */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCSpriteFrame_setOffsetInPixels00
static int tolua_Cocos2d_CCSpriteFrame_setOffsetInPixels00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCSpriteFrame",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCSpriteFrame* self = (CCSpriteFrame*)  tolua_tousertype(tolua_S,1,0);
  CCPoint offsetInPixels = *((CCPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOffsetInPixels'", NULL);
#endif
  {
   self->setOffsetInPixels(offsetInPixels);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOffsetInPixels'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getOriginalSizeInPixels of class  CCSpriteFrame */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCSpriteFrame_getOriginalSizeInPixels00
static int tolua_Cocos2d_CCSpriteFrame_getOriginalSizeInPixels00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCSpriteFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCSpriteFrame* self = (CCSpriteFrame*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getOriginalSizeInPixels'", NULL);
#endif
  {
   CCSize tolua_ret = (CCSize)  self->getOriginalSizeInPixels();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((CCSize)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"CCSize");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CCSize));
     tolua_pushusertype(tolua_S,tolua_obj,"CCSize");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getOriginalSizeInPixels'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setOriginalSizeInPixels of class  CCSpriteFrame */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCSpriteFrame_setOriginalSizeInPixels00
static int tolua_Cocos2d_CCSpriteFrame_setOriginalSizeInPixels00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCSpriteFrame",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"CCSize",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCSpriteFrame* self = (CCSpriteFrame*)  tolua_tousertype(tolua_S,1,0);
  CCSize sizeInPixels = *((CCSize*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setOriginalSizeInPixels'", NULL);
#endif
  {
   self->setOriginalSizeInPixels(sizeInPixels);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setOriginalSizeInPixels'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTexture of class  CCSpriteFrame */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCSpriteFrame_getTexture00
static int tolua_Cocos2d_CCSpriteFrame_getTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCSpriteFrame",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCSpriteFrame* self = (CCSpriteFrame*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTexture'", NULL);
#endif
  {
   CCTexture2D* tolua_ret = (CCTexture2D*)  self->getTexture();
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    tolua_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCTexture2D");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTexture of class  CCSpriteFrame */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCSpriteFrame_setTexture00
static int tolua_Cocos2d_CCSpriteFrame_setTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCSpriteFrame",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTexture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCSpriteFrame* self = (CCSpriteFrame*)  tolua_tousertype(tolua_S,1,0);
  CCTexture2D* pobTexture = ((CCTexture2D*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTexture'", NULL);
#endif
  {
   self->setTexture(pobTexture);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: frameWithTexture of class  CCSpriteFrame */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCSpriteFrame_frameWithTexture00
static int tolua_Cocos2d_CCSpriteFrame_frameWithTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCSpriteFrame",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTexture2D",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"CCRect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTexture2D* pobTexture = ((CCTexture2D*)  tolua_tousertype(tolua_S,2,0));
  CCRect rect = *((CCRect*)  tolua_tousertype(tolua_S,3,0));
  {
   CCSpriteFrame* tolua_ret = (CCSpriteFrame*)  CCSpriteFrame::frameWithTexture(pobTexture,rect);
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    tolua_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCSpriteFrame");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'frameWithTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: frameWithTexture of class  CCSpriteFrame */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCSpriteFrame_frameWithTexture01
static int tolua_Cocos2d_CCSpriteFrame_frameWithTexture01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCSpriteFrame",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTexture2D",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"CCRect",0,&tolua_err)) ||
     !tolua_isboolean(tolua_S,4,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,5,&tolua_err) || !tolua_isusertype(tolua_S,5,"CCPoint",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,6,&tolua_err) || !tolua_isusertype(tolua_S,6,"CCSize",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  CCTexture2D* pobTexture = ((CCTexture2D*)  tolua_tousertype(tolua_S,2,0));
  CCRect rect = *((CCRect*)  tolua_tousertype(tolua_S,3,0));
  bool rotated = ((bool)  tolua_toboolean(tolua_S,4,0));
  CCPoint offset = *((CCPoint*)  tolua_tousertype(tolua_S,5,0));
  CCSize originalSize = *((CCSize*)  tolua_tousertype(tolua_S,6,0));
  {
   CCSpriteFrame* tolua_ret = (CCSpriteFrame*)  CCSpriteFrame::frameWithTexture(pobTexture,rect,rotated,offset,originalSize);
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    tolua_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCSpriteFrame");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Cocos2d_CCSpriteFrame_frameWithTexture00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: addSpriteFramesWithFile of class  CCSpriteFrameCache */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCSpriteFrameCache_addSpriteFramesWithFile00
static int tolua_Cocos2d_CCSpriteFrameCache_addSpriteFramesWithFile00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCSpriteFrameCache",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCSpriteFrameCache* self = (CCSpriteFrameCache*)  tolua_tousertype(tolua_S,1,0);
  const char* pszPlist = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addSpriteFramesWithFile'", NULL);
#endif
  {
   self->addSpriteFramesWithFile(pszPlist);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addSpriteFramesWithFile'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addSpriteFramesWithFile of class  CCSpriteFrameCache */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCSpriteFrameCache_addSpriteFramesWithFile01
static int tolua_Cocos2d_CCSpriteFrameCache_addSpriteFramesWithFile01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCSpriteFrameCache",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  CCSpriteFrameCache* self = (CCSpriteFrameCache*)  tolua_tousertype(tolua_S,1,0);
  const char* plist = ((const char*)  tolua_tostring(tolua_S,2,0));
  const char* textureFileName = ((const char*)  tolua_tostring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addSpriteFramesWithFile'", NULL);
#endif
  {
   self->addSpriteFramesWithFile(plist,textureFileName);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Cocos2d_CCSpriteFrameCache_addSpriteFramesWithFile00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: addSpriteFramesWithFile of class  CCSpriteFrameCache */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCSpriteFrameCache_addSpriteFramesWithFile02
static int tolua_Cocos2d_CCSpriteFrameCache_addSpriteFramesWithFile02(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCSpriteFrameCache",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"CCTexture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  CCSpriteFrameCache* self = (CCSpriteFrameCache*)  tolua_tousertype(tolua_S,1,0);
  const char* pszPlist = ((const char*)  tolua_tostring(tolua_S,2,0));
  CCTexture2D* pobTexture = ((CCTexture2D*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addSpriteFramesWithFile'", NULL);
#endif
  {
   self->addSpriteFramesWithFile(pszPlist,pobTexture);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Cocos2d_CCSpriteFrameCache_addSpriteFramesWithFile01(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: addSpriteFrame of class  CCSpriteFrameCache */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCSpriteFrameCache_addSpriteFrame00
static int tolua_Cocos2d_CCSpriteFrameCache_addSpriteFrame00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCSpriteFrameCache",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCSpriteFrame",0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCSpriteFrameCache* self = (CCSpriteFrameCache*)  tolua_tousertype(tolua_S,1,0);
  CCSpriteFrame* pobFrame = ((CCSpriteFrame*)  tolua_tousertype(tolua_S,2,0));
  const char* pszFrameName = ((const char*)  tolua_tostring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addSpriteFrame'", NULL);
#endif
  {
   self->addSpriteFrame(pobFrame,pszFrameName);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addSpriteFrame'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeSpriteFrames of class  CCSpriteFrameCache */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCSpriteFrameCache_removeSpriteFrames00
static int tolua_Cocos2d_CCSpriteFrameCache_removeSpriteFrames00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCSpriteFrameCache",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCSpriteFrameCache* self = (CCSpriteFrameCache*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeSpriteFrames'", NULL);
#endif
  {
   self->removeSpriteFrames();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeSpriteFrames'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeUnusedSpriteFrames of class  CCSpriteFrameCache */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCSpriteFrameCache_removeUnusedSpriteFrames00
static int tolua_Cocos2d_CCSpriteFrameCache_removeUnusedSpriteFrames00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCSpriteFrameCache",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCSpriteFrameCache* self = (CCSpriteFrameCache*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeUnusedSpriteFrames'", NULL);
#endif
  {
   self->removeUnusedSpriteFrames();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeUnusedSpriteFrames'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeSpriteFrameByName of class  CCSpriteFrameCache */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCSpriteFrameCache_removeSpriteFrameByName00
static int tolua_Cocos2d_CCSpriteFrameCache_removeSpriteFrameByName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCSpriteFrameCache",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCSpriteFrameCache* self = (CCSpriteFrameCache*)  tolua_tousertype(tolua_S,1,0);
  const char* pszName = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeSpriteFrameByName'", NULL);
#endif
  {
   self->removeSpriteFrameByName(pszName);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeSpriteFrameByName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeSpriteFramesFromFile of class  CCSpriteFrameCache */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCSpriteFrameCache_removeSpriteFramesFromFile00
static int tolua_Cocos2d_CCSpriteFrameCache_removeSpriteFramesFromFile00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCSpriteFrameCache",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCSpriteFrameCache* self = (CCSpriteFrameCache*)  tolua_tousertype(tolua_S,1,0);
  const char* plist = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeSpriteFramesFromFile'", NULL);
#endif
  {
   self->removeSpriteFramesFromFile(plist);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeSpriteFramesFromFile'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeSpriteFramesFromTexture of class  CCSpriteFrameCache */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCSpriteFrameCache_removeSpriteFramesFromTexture00
static int tolua_Cocos2d_CCSpriteFrameCache_removeSpriteFramesFromTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCSpriteFrameCache",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTexture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCSpriteFrameCache* self = (CCSpriteFrameCache*)  tolua_tousertype(tolua_S,1,0);
  CCTexture2D* texture = ((CCTexture2D*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeSpriteFramesFromTexture'", NULL);
#endif
  {
   self->removeSpriteFramesFromTexture(texture);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeSpriteFramesFromTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: spriteFrameByName of class  CCSpriteFrameCache */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCSpriteFrameCache_spriteFrameByName00
static int tolua_Cocos2d_CCSpriteFrameCache_spriteFrameByName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCSpriteFrameCache",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCSpriteFrameCache* self = (CCSpriteFrameCache*)  tolua_tousertype(tolua_S,1,0);
  const char* pszName = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'spriteFrameByName'", NULL);
#endif
  {
   CCSpriteFrame* tolua_ret = (CCSpriteFrame*)  self->spriteFrameByName(pszName);
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    tolua_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCSpriteFrame");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'spriteFrameByName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: sharedSpriteFrameCache of class  CCSpriteFrameCache */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCSpriteFrameCache_sharedSpriteFrameCache00
static int tolua_Cocos2d_CCSpriteFrameCache_sharedSpriteFrameCache00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCSpriteFrameCache",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CCSpriteFrameCache* tolua_ret = (CCSpriteFrameCache*)  CCSpriteFrameCache::sharedSpriteFrameCache();
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    tolua_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCSpriteFrameCache");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'sharedSpriteFrameCache'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: purgeSharedSpriteFrameCache of class  CCSpriteFrameCache */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCSpriteFrameCache_purgeSharedSpriteFrameCache00
static int tolua_Cocos2d_CCSpriteFrameCache_purgeSharedSpriteFrameCache00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCSpriteFrameCache",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CCSpriteFrameCache::purgeSharedSpriteFrameCache();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'purgeSharedSpriteFrameCache'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CCString */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCString_new00
static int tolua_Cocos2d_CCString_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCString",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CCString* tolua_ret = (CCString*)  Mtolua_new((CCString)());
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    tolua_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCString");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CCString */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCString_new00_local
static int tolua_Cocos2d_CCString_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCString",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CCString* tolua_ret = (CCString*)  Mtolua_new((CCString)());
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    tolua_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCString");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new of class  CCString */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCString_new01
static int tolua_Cocos2d_CCString_new01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCString",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const char* str = ((const char*)  tolua_tostring(tolua_S,2,0));
  {
   CCString* tolua_ret = (CCString*)  Mtolua_new((CCString)(str));
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    tolua_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCString");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Cocos2d_CCString_new00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  CCString */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCString_new01_local
static int tolua_Cocos2d_CCString_new01_local(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCString",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const char* str = ((const char*)  tolua_tostring(tolua_S,2,0));
  {
   CCString* tolua_ret = (CCString*)  Mtolua_new((CCString)(str));
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    tolua_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCString");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
tolua_lerror:
 return tolua_Cocos2d_CCString_new00_local(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  CCString */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCString_delete00
static int tolua_Cocos2d_CCString_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCString",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCString* self = (CCString*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: toInt of class  CCString */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCString_toInt00
static int tolua_Cocos2d_CCString_toInt00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCString",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCString* self = (CCString*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'toInt'", NULL);
#endif
  {
   int tolua_ret = (int)  self->toInt();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'toInt'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: toUInt of class  CCString */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCString_toUInt00
static int tolua_Cocos2d_CCString_toUInt00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCString",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCString* self = (CCString*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'toUInt'", NULL);
#endif
  {
   unsigned int tolua_ret = (unsigned int)  self->toUInt();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'toUInt'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: toFloat of class  CCString */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCString_toFloat00
static int tolua_Cocos2d_CCString_toFloat00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCString",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCString* self = (CCString*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'toFloat'", NULL);
#endif
  {
   float tolua_ret = (float)  self->toFloat();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'toFloat'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isEmpty of class  CCString */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCString_isEmpty00
static int tolua_Cocos2d_CCString_isEmpty00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCString",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCString* self = (CCString*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isEmpty'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isEmpty();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isEmpty'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: attachWithIME of class  CCTextFieldTTF */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCTextFieldTTF_attachWithIME00
static int tolua_Cocos2d_CCTextFieldTTF_attachWithIME00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTextFieldTTF",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTextFieldTTF* self = (CCTextFieldTTF*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'attachWithIME'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->attachWithIME();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'attachWithIME'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: detachWithIME of class  CCTextFieldTTF */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCTextFieldTTF_detachWithIME00
static int tolua_Cocos2d_CCTextFieldTTF_detachWithIME00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTextFieldTTF",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTextFieldTTF* self = (CCTextFieldTTF*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'detachWithIME'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->detachWithIME();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'detachWithIME'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getCharCount of class  CCTextFieldTTF */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCTextFieldTTF_getCharCount00
static int tolua_Cocos2d_CCTextFieldTTF_getCharCount00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTextFieldTTF",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTextFieldTTF* self = (CCTextFieldTTF*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getCharCount'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getCharCount();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getCharCount'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setColorSpaceHolder of class  CCTextFieldTTF */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCTextFieldTTF_setColorSpaceHolder00
static int tolua_Cocos2d_CCTextFieldTTF_setColorSpaceHolder00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTextFieldTTF",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"ccColor3B",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTextFieldTTF* self = (CCTextFieldTTF*)  tolua_tousertype(tolua_S,1,0);
  ccColor3B val = *((ccColor3B*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setColorSpaceHolder'", NULL);
#endif
  {
   self->setColorSpaceHolder(val);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setColorSpaceHolder'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getColorSpaceHolder of class  CCTextFieldTTF */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCTextFieldTTF_getColorSpaceHolder00
static int tolua_Cocos2d_CCTextFieldTTF_getColorSpaceHolder00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTextFieldTTF",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTextFieldTTF* self = (CCTextFieldTTF*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getColorSpaceHolder'", NULL);
#endif
  {
   ccColor3B tolua_ret = (ccColor3B)  self->getColorSpaceHolder();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((ccColor3B)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"ccColor3B");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(ccColor3B));
     tolua_pushusertype(tolua_S,tolua_obj,"ccColor3B");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getColorSpaceHolder'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setString of class  CCTextFieldTTF */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCTextFieldTTF_setString00
static int tolua_Cocos2d_CCTextFieldTTF_setString00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTextFieldTTF",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTextFieldTTF* self = (CCTextFieldTTF*)  tolua_tousertype(tolua_S,1,0);
  const char* text = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setString'", NULL);
#endif
  {
   self->setString(text);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setString'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getString of class  CCTextFieldTTF */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCTextFieldTTF_getString00
static int tolua_Cocos2d_CCTextFieldTTF_getString00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTextFieldTTF",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTextFieldTTF* self = (CCTextFieldTTF*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getString'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->getString();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getString'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setPlaceHolder of class  CCTextFieldTTF */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCTextFieldTTF_setPlaceHolder00
static int tolua_Cocos2d_CCTextFieldTTF_setPlaceHolder00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTextFieldTTF",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTextFieldTTF* self = (CCTextFieldTTF*)  tolua_tousertype(tolua_S,1,0);
  const char* text = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPlaceHolder'", NULL);
#endif
  {
   self->setPlaceHolder(text);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setPlaceHolder'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getPlaceHolder of class  CCTextFieldTTF */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCTextFieldTTF_getPlaceHolder00
static int tolua_Cocos2d_CCTextFieldTTF_getPlaceHolder00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTextFieldTTF",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTextFieldTTF* self = (CCTextFieldTTF*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getPlaceHolder'", NULL);
#endif
  {
   const char* tolua_ret = (const char*)  self->getPlaceHolder();
   tolua_pushstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getPlaceHolder'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: textFieldWithPlaceHolder of class  CCTextFieldTTF */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCTextFieldTTF_textFieldWithPlaceHolder00
static int tolua_Cocos2d_CCTextFieldTTF_textFieldWithPlaceHolder00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCTextFieldTTF",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"CCSize",0,&tolua_err)) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isstring(tolua_S,5,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,6,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,7,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* placeholder = ((const char*)  tolua_tostring(tolua_S,2,0));
  CCSize dimensions = *((CCSize*)  tolua_tousertype(tolua_S,3,0));
  CCTextAlignment alignment = ((CCTextAlignment) (int)  tolua_tonumber(tolua_S,4,0));
  const char* fontName = ((const char*)  tolua_tostring(tolua_S,5,0));
  float fontSize = ((float)  tolua_tonumber(tolua_S,6,0));
  {
   CCTextFieldTTF* tolua_ret = (CCTextFieldTTF*)  CCTextFieldTTF::textFieldWithPlaceHolder(placeholder,dimensions,alignment,fontName,fontSize);
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    tolua_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCTextFieldTTF");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'textFieldWithPlaceHolder'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: textFieldWithPlaceHolder of class  CCTextFieldTTF */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCTextFieldTTF_textFieldWithPlaceHolder01
static int tolua_Cocos2d_CCTextFieldTTF_textFieldWithPlaceHolder01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCTextFieldTTF",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  const char* placeholder = ((const char*)  tolua_tostring(tolua_S,2,0));
  const char* fontName = ((const char*)  tolua_tostring(tolua_S,3,0));
  float fontSize = ((float)  tolua_tonumber(tolua_S,4,0));
  {
   CCTextFieldTTF* tolua_ret = (CCTextFieldTTF*)  CCTextFieldTTF::textFieldWithPlaceHolder(placeholder,fontName,fontSize);
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    tolua_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCTextFieldTTF");
  }
 }
 return 1;
tolua_lerror:
 return tolua_Cocos2d_CCTextFieldTTF_textFieldWithPlaceHolder00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: getPixelFormat of class  CCTexture2D */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCTexture2D_getPixelFormat00
static int tolua_Cocos2d_CCTexture2D_getPixelFormat00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTexture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTexture2D* self = (CCTexture2D*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getPixelFormat'", NULL);
#endif
  {
   CCTexture2DPixelFormat tolua_ret = (CCTexture2DPixelFormat)  self->getPixelFormat();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getPixelFormat'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getPixelsWide of class  CCTexture2D */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCTexture2D_getPixelsWide00
static int tolua_Cocos2d_CCTexture2D_getPixelsWide00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTexture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTexture2D* self = (CCTexture2D*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getPixelsWide'", NULL);
#endif
  {
   unsigned int tolua_ret = (unsigned int)  self->getPixelsWide();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getPixelsWide'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getPixelsHigh of class  CCTexture2D */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCTexture2D_getPixelsHigh00
static int tolua_Cocos2d_CCTexture2D_getPixelsHigh00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTexture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTexture2D* self = (CCTexture2D*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getPixelsHigh'", NULL);
#endif
  {
   unsigned int tolua_ret = (unsigned int)  self->getPixelsHigh();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getPixelsHigh'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getName of class  CCTexture2D */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCTexture2D_getName00
static int tolua_Cocos2d_CCTexture2D_getName00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTexture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTexture2D* self = (CCTexture2D*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getName'", NULL);
#endif
  {
   GLuint tolua_ret = (GLuint)  self->getName();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getName'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getContentSizeInPixels of class  CCTexture2D */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCTexture2D_getContentSizeInPixels00
static int tolua_Cocos2d_CCTexture2D_getContentSizeInPixels00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTexture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTexture2D* self = (CCTexture2D*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getContentSizeInPixels'", NULL);
#endif
  {
   CCSize tolua_ret = (CCSize)  self->getContentSizeInPixels();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((CCSize)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"CCSize");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CCSize));
     tolua_pushusertype(tolua_S,tolua_obj,"CCSize");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getContentSizeInPixels'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setMaxS of class  CCTexture2D */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCTexture2D_setMaxS00
static int tolua_Cocos2d_CCTexture2D_setMaxS00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTexture2D",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTexture2D* self = (CCTexture2D*)  tolua_tousertype(tolua_S,1,0);
  GLfloat val = ((GLfloat)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setMaxS'", NULL);
#endif
  {
   self->setMaxS(val);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setMaxS'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getMaxS of class  CCTexture2D */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCTexture2D_getMaxS00
static int tolua_Cocos2d_CCTexture2D_getMaxS00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTexture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTexture2D* self = (CCTexture2D*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getMaxS'", NULL);
#endif
  {
   GLfloat tolua_ret = (GLfloat)  self->getMaxS();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getMaxS'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getMaxT of class  CCTexture2D */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCTexture2D_getMaxT00
static int tolua_Cocos2d_CCTexture2D_getMaxT00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTexture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTexture2D* self = (CCTexture2D*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getMaxT'", NULL);
#endif
  {
   GLfloat tolua_ret = (GLfloat)  self->getMaxT();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getMaxT'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setMaxT of class  CCTexture2D */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCTexture2D_setMaxT00
static int tolua_Cocos2d_CCTexture2D_setMaxT00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTexture2D",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTexture2D* self = (CCTexture2D*)  tolua_tousertype(tolua_S,1,0);
  GLfloat val = ((GLfloat)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setMaxT'", NULL);
#endif
  {
   self->setMaxT(val);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setMaxT'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getHasPremultipliedAlpha of class  CCTexture2D */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCTexture2D_getHasPremultipliedAlpha00
static int tolua_Cocos2d_CCTexture2D_getHasPremultipliedAlpha00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTexture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTexture2D* self = (CCTexture2D*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getHasPremultipliedAlpha'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->getHasPremultipliedAlpha();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getHasPremultipliedAlpha'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: drawAtPoint of class  CCTexture2D */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCTexture2D_drawAtPoint00
static int tolua_Cocos2d_CCTexture2D_drawAtPoint00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTexture2D",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTexture2D* self = (CCTexture2D*)  tolua_tousertype(tolua_S,1,0);
  CCPoint point = *((CCPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'drawAtPoint'", NULL);
#endif
  {
   self->drawAtPoint(point);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'drawAtPoint'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: drawInRect of class  CCTexture2D */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCTexture2D_drawInRect00
static int tolua_Cocos2d_CCTexture2D_drawInRect00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTexture2D",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"CCRect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTexture2D* self = (CCTexture2D*)  tolua_tousertype(tolua_S,1,0);
  CCRect rect = *((CCRect*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'drawInRect'", NULL);
#endif
  {
   self->drawInRect(rect);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'drawInRect'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getContentSize of class  CCTexture2D */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCTexture2D_getContentSize00
static int tolua_Cocos2d_CCTexture2D_getContentSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTexture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTexture2D* self = (CCTexture2D*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getContentSize'", NULL);
#endif
  {
   CCSize tolua_ret = (CCSize)  self->getContentSize();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((CCSize)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"CCSize");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CCSize));
     tolua_pushusertype(tolua_S,tolua_obj,"CCSize");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getContentSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTexParameters of class  CCTexture2D */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCTexture2D_setTexParameters00
static int tolua_Cocos2d_CCTexture2D_setTexParameters00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTexture2D",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"ccTexParams",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTexture2D* self = (CCTexture2D*)  tolua_tousertype(tolua_S,1,0);
  ccTexParams* texParams = ((ccTexParams*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTexParameters'", NULL);
#endif
  {
   self->setTexParameters(texParams);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTexParameters'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAntiAliasTexParameters of class  CCTexture2D */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCTexture2D_setAntiAliasTexParameters00
static int tolua_Cocos2d_CCTexture2D_setAntiAliasTexParameters00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTexture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTexture2D* self = (CCTexture2D*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAntiAliasTexParameters'", NULL);
#endif
  {
   self->setAntiAliasTexParameters();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAntiAliasTexParameters'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAliasTexParameters of class  CCTexture2D */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCTexture2D_setAliasTexParameters00
static int tolua_Cocos2d_CCTexture2D_setAliasTexParameters00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTexture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTexture2D* self = (CCTexture2D*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAliasTexParameters'", NULL);
#endif
  {
   self->setAliasTexParameters();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAliasTexParameters'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: generateMipmap of class  CCTexture2D */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCTexture2D_generateMipmap00
static int tolua_Cocos2d_CCTexture2D_generateMipmap00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTexture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTexture2D* self = (CCTexture2D*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'generateMipmap'", NULL);
#endif
  {
   self->generateMipmap();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'generateMipmap'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: bitsPerPixelForFormat of class  CCTexture2D */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCTexture2D_bitsPerPixelForFormat00
static int tolua_Cocos2d_CCTexture2D_bitsPerPixelForFormat00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTexture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTexture2D* self = (CCTexture2D*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'bitsPerPixelForFormat'", NULL);
#endif
  {
   int tolua_ret = (int)  self->bitsPerPixelForFormat();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'bitsPerPixelForFormat'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDefaultAlphaPixelFormat of class  CCTexture2D */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCTexture2D_setDefaultAlphaPixelFormat00
static int tolua_Cocos2d_CCTexture2D_setDefaultAlphaPixelFormat00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCTexture2D",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTexture2DPixelFormat format = ((CCTexture2DPixelFormat) (int)  tolua_tonumber(tolua_S,2,0));
  {
   CCTexture2D::setDefaultAlphaPixelFormat(format);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDefaultAlphaPixelFormat'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: defaultAlphaPixelFormat of class  CCTexture2D */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCTexture2D_defaultAlphaPixelFormat00
static int tolua_Cocos2d_CCTexture2D_defaultAlphaPixelFormat00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCTexture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CCTexture2DPixelFormat tolua_ret = (CCTexture2DPixelFormat)  CCTexture2D::defaultAlphaPixelFormat();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'defaultAlphaPixelFormat'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTotalQuads of class  CCTextureAtlas */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCTextureAtlas_getTotalQuads00
static int tolua_Cocos2d_CCTextureAtlas_getTotalQuads00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTextureAtlas",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTextureAtlas* self = (CCTextureAtlas*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTotalQuads'", NULL);
#endif
  {
   unsigned int tolua_ret = (unsigned int)  self->getTotalQuads();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTotalQuads'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getCapacity of class  CCTextureAtlas */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCTextureAtlas_getCapacity00
static int tolua_Cocos2d_CCTextureAtlas_getCapacity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTextureAtlas",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTextureAtlas* self = (CCTextureAtlas*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getCapacity'", NULL);
#endif
  {
   unsigned int tolua_ret = (unsigned int)  self->getCapacity();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getCapacity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTexture of class  CCTextureAtlas */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCTextureAtlas_setTexture00
static int tolua_Cocos2d_CCTextureAtlas_setTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTextureAtlas",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTexture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTextureAtlas* self = (CCTextureAtlas*)  tolua_tousertype(tolua_S,1,0);
  CCTexture2D* val = ((CCTexture2D*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTexture'", NULL);
#endif
  {
   self->setTexture(val);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTexture of class  CCTextureAtlas */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCTextureAtlas_getTexture00
static int tolua_Cocos2d_CCTextureAtlas_getTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTextureAtlas",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTextureAtlas* self = (CCTextureAtlas*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTexture'", NULL);
#endif
  {
   CCTexture2D* tolua_ret = (CCTexture2D*)  self->getTexture();
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    tolua_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCTexture2D");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setQuads of class  CCTextureAtlas */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCTextureAtlas_setQuads00
static int tolua_Cocos2d_CCTextureAtlas_setQuads00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTextureAtlas",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"ccV3F_C4B_T2F_Quad",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTextureAtlas* self = (CCTextureAtlas*)  tolua_tousertype(tolua_S,1,0);
  ccV3F_C4B_T2F_Quad* val = ((ccV3F_C4B_T2F_Quad*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setQuads'", NULL);
#endif
  {
   self->setQuads(val);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setQuads'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getQuads of class  CCTextureAtlas */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCTextureAtlas_getQuads00
static int tolua_Cocos2d_CCTextureAtlas_getQuads00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTextureAtlas",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTextureAtlas* self = (CCTextureAtlas*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getQuads'", NULL);
#endif
  {
   ccV3F_C4B_T2F_Quad* tolua_ret = (ccV3F_C4B_T2F_Quad*)  self->getQuads();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"ccV3F_C4B_T2F_Quad");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getQuads'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: updateQuad of class  CCTextureAtlas */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCTextureAtlas_updateQuad00
static int tolua_Cocos2d_CCTextureAtlas_updateQuad00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTextureAtlas",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"ccV3F_C4B_T2F_Quad",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTextureAtlas* self = (CCTextureAtlas*)  tolua_tousertype(tolua_S,1,0);
  ccV3F_C4B_T2F_Quad* quad = ((ccV3F_C4B_T2F_Quad*)  tolua_tousertype(tolua_S,2,0));
  unsigned int index = ((unsigned int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'updateQuad'", NULL);
#endif
  {
   self->updateQuad(quad,index);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'updateQuad'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: insertQuad of class  CCTextureAtlas */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCTextureAtlas_insertQuad00
static int tolua_Cocos2d_CCTextureAtlas_insertQuad00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTextureAtlas",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"ccV3F_C4B_T2F_Quad",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTextureAtlas* self = (CCTextureAtlas*)  tolua_tousertype(tolua_S,1,0);
  ccV3F_C4B_T2F_Quad* quad = ((ccV3F_C4B_T2F_Quad*)  tolua_tousertype(tolua_S,2,0));
  unsigned int index = ((unsigned int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'insertQuad'", NULL);
#endif
  {
   self->insertQuad(quad,index);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'insertQuad'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: insertQuadFromIndex of class  CCTextureAtlas */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCTextureAtlas_insertQuadFromIndex00
static int tolua_Cocos2d_CCTextureAtlas_insertQuadFromIndex00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTextureAtlas",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTextureAtlas* self = (CCTextureAtlas*)  tolua_tousertype(tolua_S,1,0);
  unsigned int fromIndex = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
  unsigned int newIndex = ((unsigned int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'insertQuadFromIndex'", NULL);
#endif
  {
   self->insertQuadFromIndex(fromIndex,newIndex);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'insertQuadFromIndex'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeQuadAtIndex of class  CCTextureAtlas */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCTextureAtlas_removeQuadAtIndex00
static int tolua_Cocos2d_CCTextureAtlas_removeQuadAtIndex00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTextureAtlas",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTextureAtlas* self = (CCTextureAtlas*)  tolua_tousertype(tolua_S,1,0);
  unsigned int index = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeQuadAtIndex'", NULL);
#endif
  {
   self->removeQuadAtIndex(index);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeQuadAtIndex'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeAllQuads of class  CCTextureAtlas */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCTextureAtlas_removeAllQuads00
static int tolua_Cocos2d_CCTextureAtlas_removeAllQuads00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTextureAtlas",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTextureAtlas* self = (CCTextureAtlas*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeAllQuads'", NULL);
#endif
  {
   self->removeAllQuads();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeAllQuads'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: resizeCapacity of class  CCTextureAtlas */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCTextureAtlas_resizeCapacity00
static int tolua_Cocos2d_CCTextureAtlas_resizeCapacity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTextureAtlas",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTextureAtlas* self = (CCTextureAtlas*)  tolua_tousertype(tolua_S,1,0);
  unsigned int n = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'resizeCapacity'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->resizeCapacity(n);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'resizeCapacity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: drawNumberOfQuads of class  CCTextureAtlas */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCTextureAtlas_drawNumberOfQuads00
static int tolua_Cocos2d_CCTextureAtlas_drawNumberOfQuads00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTextureAtlas",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTextureAtlas* self = (CCTextureAtlas*)  tolua_tousertype(tolua_S,1,0);
  unsigned int n = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'drawNumberOfQuads'", NULL);
#endif
  {
   self->drawNumberOfQuads(n);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'drawNumberOfQuads'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: drawNumberOfQuads of class  CCTextureAtlas */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCTextureAtlas_drawNumberOfQuads01
static int tolua_Cocos2d_CCTextureAtlas_drawNumberOfQuads01(lua_State* tolua_S)
{
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTextureAtlas",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
 {
  CCTextureAtlas* self = (CCTextureAtlas*)  tolua_tousertype(tolua_S,1,0);
  unsigned int n = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
  unsigned int start = ((unsigned int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'drawNumberOfQuads'", NULL);
#endif
  {
   self->drawNumberOfQuads(n,start);
  }
 }
 return 0;
tolua_lerror:
 return tolua_Cocos2d_CCTextureAtlas_drawNumberOfQuads00(tolua_S);
}
#endif //#ifndef TOLUA_DISABLE

/* method: drawQuads of class  CCTextureAtlas */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCTextureAtlas_drawQuads00
static int tolua_Cocos2d_CCTextureAtlas_drawQuads00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTextureAtlas",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTextureAtlas* self = (CCTextureAtlas*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'drawQuads'", NULL);
#endif
  {
   self->drawQuads();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'drawQuads'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: textureAtlasWithFile of class  CCTextureAtlas */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCTextureAtlas_textureAtlasWithFile00
static int tolua_Cocos2d_CCTextureAtlas_textureAtlasWithFile00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCTextureAtlas",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* file = ((const char*)  tolua_tostring(tolua_S,2,0));
  unsigned int capacity = ((unsigned int)  tolua_tonumber(tolua_S,3,0));
  {
   CCTextureAtlas* tolua_ret = (CCTextureAtlas*)  CCTextureAtlas::textureAtlasWithFile(file,capacity);
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    tolua_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCTextureAtlas");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'textureAtlasWithFile'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: textureAtlasWithTexture of class  CCTextureAtlas */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCTextureAtlas_textureAtlasWithTexture00
static int tolua_Cocos2d_CCTextureAtlas_textureAtlasWithTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCTextureAtlas",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTexture2D",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTexture2D* texture = ((CCTexture2D*)  tolua_tousertype(tolua_S,2,0));
  unsigned int capacity = ((unsigned int)  tolua_tonumber(tolua_S,3,0));
  {
   CCTextureAtlas* tolua_ret = (CCTextureAtlas*)  CCTextureAtlas::textureAtlasWithTexture(texture,capacity);
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    tolua_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCTextureAtlas");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'textureAtlasWithTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addImage of class  CCTextureCache */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCTextureCache_addImage00
static int tolua_Cocos2d_CCTextureCache_addImage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTextureCache",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTextureCache* self = (CCTextureCache*)  tolua_tousertype(tolua_S,1,0);
  const char* fileimage = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addImage'", NULL);
#endif
  {
   CCTexture2D* tolua_ret = (CCTexture2D*)  self->addImage(fileimage);
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    tolua_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCTexture2D");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addImage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: addUIImage of class  CCTextureCache */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCTextureCache_addUIImage00
static int tolua_Cocos2d_CCTextureCache_addUIImage00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTextureCache",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCImage",0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTextureCache* self = (CCTextureCache*)  tolua_tousertype(tolua_S,1,0);
  CCImage* image = ((CCImage*)  tolua_tousertype(tolua_S,2,0));
  const char* key = ((const char*)  tolua_tostring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'addUIImage'", NULL);
#endif
  {
   CCTexture2D* tolua_ret = (CCTexture2D*)  self->addUIImage(image,key);
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    tolua_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCTexture2D");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'addUIImage'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: textureForKey of class  CCTextureCache */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCTextureCache_textureForKey00
static int tolua_Cocos2d_CCTextureCache_textureForKey00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTextureCache",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTextureCache* self = (CCTextureCache*)  tolua_tousertype(tolua_S,1,0);
  const char* key = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'textureForKey'", NULL);
#endif
  {
   CCTexture2D* tolua_ret = (CCTexture2D*)  self->textureForKey(key);
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    tolua_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCTexture2D");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'textureForKey'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeAllTextures of class  CCTextureCache */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCTextureCache_removeAllTextures00
static int tolua_Cocos2d_CCTextureCache_removeAllTextures00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTextureCache",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTextureCache* self = (CCTextureCache*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeAllTextures'", NULL);
#endif
  {
   self->removeAllTextures();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeAllTextures'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeUnusedTextures of class  CCTextureCache */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCTextureCache_removeUnusedTextures00
static int tolua_Cocos2d_CCTextureCache_removeUnusedTextures00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTextureCache",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTextureCache* self = (CCTextureCache*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeUnusedTextures'", NULL);
#endif
  {
   self->removeUnusedTextures();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeUnusedTextures'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeTexture of class  CCTextureCache */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCTextureCache_removeTexture00
static int tolua_Cocos2d_CCTextureCache_removeTexture00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTextureCache",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTexture2D",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTextureCache* self = (CCTextureCache*)  tolua_tousertype(tolua_S,1,0);
  CCTexture2D* texture = ((CCTexture2D*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeTexture'", NULL);
#endif
  {
   self->removeTexture(texture);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeTexture'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: removeTextureForKey of class  CCTextureCache */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCTextureCache_removeTextureForKey00
static int tolua_Cocos2d_CCTextureCache_removeTextureForKey00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTextureCache",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTextureCache* self = (CCTextureCache*)  tolua_tousertype(tolua_S,1,0);
  const char* textureKeyName = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'removeTextureForKey'", NULL);
#endif
  {
   self->removeTextureForKey(textureKeyName);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'removeTextureForKey'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: dumpCachedTextureInfo of class  CCTextureCache */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCTextureCache_dumpCachedTextureInfo00
static int tolua_Cocos2d_CCTextureCache_dumpCachedTextureInfo00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTextureCache",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTextureCache* self = (CCTextureCache*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'dumpCachedTextureInfo'", NULL);
#endif
  {
   self->dumpCachedTextureInfo();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'dumpCachedTextureInfo'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: sharedTextureCache of class  CCTextureCache */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCTextureCache_sharedTextureCache00
static int tolua_Cocos2d_CCTextureCache_sharedTextureCache00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCTextureCache",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CCTextureCache* tolua_ret = (CCTextureCache*)  CCTextureCache::sharedTextureCache();
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    tolua_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCTextureCache");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'sharedTextureCache'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: reloadAllTextures of class  CCTextureCache */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCTextureCache_reloadAllTextures00
static int tolua_Cocos2d_CCTextureCache_reloadAllTextures00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCTextureCache",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CCTextureCache::reloadAllTextures();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'reloadAllTextures'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: purgeSharedTextureCache of class  CCTextureCache */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCTextureCache_purgeSharedTextureCache00
static int tolua_Cocos2d_CCTextureCache_purgeSharedTextureCache00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCTextureCache",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CCTextureCache::purgeSharedTextureCache();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'purgeSharedTextureCache'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getTGAInfo of class  CCTileMapAtlas */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCTileMapAtlas_getTGAInfo00
static int tolua_Cocos2d_CCTileMapAtlas_getTGAInfo00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTileMapAtlas",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTileMapAtlas* self = (CCTileMapAtlas*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getTGAInfo'", NULL);
#endif
  {
   struct sImageTGA* tolua_ret = (struct sImageTGA*)  self->getTGAInfo();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"sImageTGA");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getTGAInfo'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTGAInfo of class  CCTileMapAtlas */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCTileMapAtlas_setTGAInfo00
static int tolua_Cocos2d_CCTileMapAtlas_setTGAInfo00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTileMapAtlas",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"sImageTGA",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTileMapAtlas* self = (CCTileMapAtlas*)  tolua_tousertype(tolua_S,1,0);
  struct sImageTGA* val = ((struct sImageTGA*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTGAInfo'", NULL);
#endif
  {
   self->setTGAInfo(val);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTGAInfo'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTile of class  CCTileMapAtlas */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCTileMapAtlas_setTile00
static int tolua_Cocos2d_CCTileMapAtlas_setTile00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTileMapAtlas",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"ccColor3B",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,3,&tolua_err) || !tolua_isusertype(tolua_S,3,"ccGridSize",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTileMapAtlas* self = (CCTileMapAtlas*)  tolua_tousertype(tolua_S,1,0);
  ccColor3B tile = *((ccColor3B*)  tolua_tousertype(tolua_S,2,0));
  ccGridSize position = *((ccGridSize*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTile'", NULL);
#endif
  {
   self->setTile(tile,position);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTile'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: releaseMap of class  CCTileMapAtlas */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCTileMapAtlas_releaseMap00
static int tolua_Cocos2d_CCTileMapAtlas_releaseMap00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTileMapAtlas",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTileMapAtlas* self = (CCTileMapAtlas*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'releaseMap'", NULL);
#endif
  {
   self->releaseMap();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'releaseMap'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: tileMapAtlasWithTileFile of class  CCTileMapAtlas */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCTileMapAtlas_tileMapAtlasWithTileFile00
static int tolua_Cocos2d_CCTileMapAtlas_tileMapAtlasWithTileFile00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCTileMapAtlas",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,5,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,6,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* tile = ((const char*)  tolua_tostring(tolua_S,2,0));
  const char* mapFile = ((const char*)  tolua_tostring(tolua_S,3,0));
  int tileWidth = ((int)  tolua_tonumber(tolua_S,4,0));
  int tileHeight = ((int)  tolua_tonumber(tolua_S,5,0));
  {
   CCTileMapAtlas* tolua_ret = (CCTileMapAtlas*)  CCTileMapAtlas::tileMapAtlasWithTileFile(tile,mapFile,tileWidth,tileHeight);
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    tolua_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCTileMapAtlas");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'tileMapAtlasWithTileFile'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: transitionWithDuration of class  CCTransitionSceneOriented */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCTransitionSceneOriented_transitionWithDuration00
static int tolua_Cocos2d_CCTransitionSceneOriented_transitionWithDuration00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCTransitionSceneOriented",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"CCScene",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ccTime t = ((ccTime)  tolua_tonumber(tolua_S,2,0));
  CCScene* scene = ((CCScene*)  tolua_tousertype(tolua_S,3,0));
  tOrientation o = ((tOrientation) (int)  tolua_tonumber(tolua_S,4,0));
  {
   CCTransitionSceneOriented* tolua_ret = (CCTransitionSceneOriented*)  CCTransitionSceneOriented::transitionWithDuration(t,scene,o);
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    tolua_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCTransitionSceneOriented");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'transitionWithDuration'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: transitionWithDuration of class  CCTransitionRotoZoom */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCTransitionRotoZoom_transitionWithDuration00
static int tolua_Cocos2d_CCTransitionRotoZoom_transitionWithDuration00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCTransitionRotoZoom",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"CCScene",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ccTime t = ((ccTime)  tolua_tonumber(tolua_S,2,0));
  CCScene* scene = ((CCScene*)  tolua_tousertype(tolua_S,3,0));
  {
   CCTransitionRotoZoom* tolua_ret = (CCTransitionRotoZoom*)  CCTransitionRotoZoom::transitionWithDuration(t,scene);
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    tolua_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCTransitionRotoZoom");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'transitionWithDuration'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: transitionWithDuration of class  CCTransitionJumpZoom */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCTransitionJumpZoom_transitionWithDuration00
static int tolua_Cocos2d_CCTransitionJumpZoom_transitionWithDuration00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCTransitionJumpZoom",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"CCScene",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ccTime t = ((ccTime)  tolua_tonumber(tolua_S,2,0));
  CCScene* scene = ((CCScene*)  tolua_tousertype(tolua_S,3,0));
  {
   CCTransitionJumpZoom* tolua_ret = (CCTransitionJumpZoom*)  CCTransitionJumpZoom::transitionWithDuration(t,scene);
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    tolua_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCTransitionJumpZoom");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'transitionWithDuration'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: transitionWithDuration of class  CCTransitionMoveInL */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCTransitionMoveInL_transitionWithDuration00
static int tolua_Cocos2d_CCTransitionMoveInL_transitionWithDuration00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCTransitionMoveInL",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"CCScene",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ccTime t = ((ccTime)  tolua_tonumber(tolua_S,2,0));
  CCScene* scene = ((CCScene*)  tolua_tousertype(tolua_S,3,0));
  {
   CCTransitionMoveInL* tolua_ret = (CCTransitionMoveInL*)  CCTransitionMoveInL::transitionWithDuration(t,scene);
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    tolua_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCTransitionMoveInL");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'transitionWithDuration'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: transitionWithDuration of class  CCTransitionMoveInR */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCTransitionMoveInR_transitionWithDuration00
static int tolua_Cocos2d_CCTransitionMoveInR_transitionWithDuration00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCTransitionMoveInR",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"CCScene",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ccTime t = ((ccTime)  tolua_tonumber(tolua_S,2,0));
  CCScene* scene = ((CCScene*)  tolua_tousertype(tolua_S,3,0));
  {
   CCTransitionMoveInR* tolua_ret = (CCTransitionMoveInR*)  CCTransitionMoveInR::transitionWithDuration(t,scene);
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    tolua_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCTransitionMoveInR");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'transitionWithDuration'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: transitionWithDuration of class  CCTransitionMoveInT */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCTransitionMoveInT_transitionWithDuration00
static int tolua_Cocos2d_CCTransitionMoveInT_transitionWithDuration00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCTransitionMoveInT",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"CCScene",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ccTime t = ((ccTime)  tolua_tonumber(tolua_S,2,0));
  CCScene* scene = ((CCScene*)  tolua_tousertype(tolua_S,3,0));
  {
   CCTransitionMoveInT* tolua_ret = (CCTransitionMoveInT*)  CCTransitionMoveInT::transitionWithDuration(t,scene);
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    tolua_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCTransitionMoveInT");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'transitionWithDuration'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: transitionWithDuration of class  CCTransitionMoveInB */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCTransitionMoveInB_transitionWithDuration00
static int tolua_Cocos2d_CCTransitionMoveInB_transitionWithDuration00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCTransitionMoveInB",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"CCScene",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ccTime t = ((ccTime)  tolua_tonumber(tolua_S,2,0));
  CCScene* scene = ((CCScene*)  tolua_tousertype(tolua_S,3,0));
  {
   CCTransitionMoveInB* tolua_ret = (CCTransitionMoveInB*)  CCTransitionMoveInB::transitionWithDuration(t,scene);
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    tolua_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCTransitionMoveInB");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'transitionWithDuration'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: transitionWithDuration of class  CCTransitionSlideInL */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCTransitionSlideInL_transitionWithDuration00
static int tolua_Cocos2d_CCTransitionSlideInL_transitionWithDuration00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCTransitionSlideInL",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"CCScene",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ccTime t = ((ccTime)  tolua_tonumber(tolua_S,2,0));
  CCScene* scene = ((CCScene*)  tolua_tousertype(tolua_S,3,0));
  {
   CCTransitionSlideInL* tolua_ret = (CCTransitionSlideInL*)  CCTransitionSlideInL::transitionWithDuration(t,scene);
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    tolua_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCTransitionSlideInL");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'transitionWithDuration'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: transitionWithDuration of class  CCTransitionSlideInR */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCTransitionSlideInR_transitionWithDuration00
static int tolua_Cocos2d_CCTransitionSlideInR_transitionWithDuration00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCTransitionSlideInR",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"CCScene",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ccTime t = ((ccTime)  tolua_tonumber(tolua_S,2,0));
  CCScene* scene = ((CCScene*)  tolua_tousertype(tolua_S,3,0));
  {
   CCTransitionSlideInR* tolua_ret = (CCTransitionSlideInR*)  CCTransitionSlideInR::transitionWithDuration(t,scene);
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    tolua_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCTransitionSlideInR");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'transitionWithDuration'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: transitionWithDuration of class  CCTransitionSlideInB */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCTransitionSlideInB_transitionWithDuration00
static int tolua_Cocos2d_CCTransitionSlideInB_transitionWithDuration00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCTransitionSlideInB",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"CCScene",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ccTime t = ((ccTime)  tolua_tonumber(tolua_S,2,0));
  CCScene* scene = ((CCScene*)  tolua_tousertype(tolua_S,3,0));
  {
   CCTransitionSlideInB* tolua_ret = (CCTransitionSlideInB*)  CCTransitionSlideInB::transitionWithDuration(t,scene);
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    tolua_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCTransitionSlideInB");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'transitionWithDuration'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: transitionWithDuration of class  CCTransitionSlideInT */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCTransitionSlideInT_transitionWithDuration00
static int tolua_Cocos2d_CCTransitionSlideInT_transitionWithDuration00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCTransitionSlideInT",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"CCScene",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ccTime t = ((ccTime)  tolua_tonumber(tolua_S,2,0));
  CCScene* scene = ((CCScene*)  tolua_tousertype(tolua_S,3,0));
  {
   CCTransitionSlideInT* tolua_ret = (CCTransitionSlideInT*)  CCTransitionSlideInT::transitionWithDuration(t,scene);
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    tolua_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCTransitionSlideInT");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'transitionWithDuration'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: transitionWithDuration of class  CCTransitionShrinkGrow */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCTransitionShrinkGrow_transitionWithDuration00
static int tolua_Cocos2d_CCTransitionShrinkGrow_transitionWithDuration00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCTransitionShrinkGrow",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"CCScene",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ccTime t = ((ccTime)  tolua_tonumber(tolua_S,2,0));
  CCScene* scene = ((CCScene*)  tolua_tousertype(tolua_S,3,0));
  {
   CCTransitionShrinkGrow* tolua_ret = (CCTransitionShrinkGrow*)  CCTransitionShrinkGrow::transitionWithDuration(t,scene);
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    tolua_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCTransitionShrinkGrow");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'transitionWithDuration'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: transitionWithDuration of class  CCTransitionFlipX */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCTransitionFlipX_transitionWithDuration00
static int tolua_Cocos2d_CCTransitionFlipX_transitionWithDuration00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCTransitionFlipX",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"CCScene",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ccTime t = ((ccTime)  tolua_tonumber(tolua_S,2,0));
  CCScene* s = ((CCScene*)  tolua_tousertype(tolua_S,3,0));
  tOrientation o = ((tOrientation) (int)  tolua_tonumber(tolua_S,4,kOrientationRightOver));
  {
   CCTransitionFlipX* tolua_ret = (CCTransitionFlipX*)  CCTransitionFlipX::transitionWithDuration(t,s,o);
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    tolua_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCTransitionFlipX");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'transitionWithDuration'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: transitionWithDuration of class  CCTransitionFlipY */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCTransitionFlipY_transitionWithDuration00
static int tolua_Cocos2d_CCTransitionFlipY_transitionWithDuration00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCTransitionFlipY",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"CCScene",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ccTime t = ((ccTime)  tolua_tonumber(tolua_S,2,0));
  CCScene* s = ((CCScene*)  tolua_tousertype(tolua_S,3,0));
  tOrientation o = ((tOrientation) (int)  tolua_tonumber(tolua_S,4,kOrientationUpOver));
  {
   CCTransitionFlipY* tolua_ret = (CCTransitionFlipY*)  CCTransitionFlipY::transitionWithDuration(t,s,o);
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    tolua_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCTransitionFlipY");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'transitionWithDuration'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: transitionWithDuration of class  CCTransitionFlipAngular */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCTransitionFlipAngular_transitionWithDuration00
static int tolua_Cocos2d_CCTransitionFlipAngular_transitionWithDuration00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCTransitionFlipAngular",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"CCScene",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ccTime t = ((ccTime)  tolua_tonumber(tolua_S,2,0));
  CCScene* s = ((CCScene*)  tolua_tousertype(tolua_S,3,0));
  tOrientation o = ((tOrientation) (int)  tolua_tonumber(tolua_S,4,kOrientationRightOver));
  {
   CCTransitionFlipAngular* tolua_ret = (CCTransitionFlipAngular*)  CCTransitionFlipAngular::transitionWithDuration(t,s,o);
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    tolua_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCTransitionFlipAngular");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'transitionWithDuration'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: transitionWithDuration of class  CCTransitionZoomFlipX */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCTransitionZoomFlipX_transitionWithDuration00
static int tolua_Cocos2d_CCTransitionZoomFlipX_transitionWithDuration00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCTransitionZoomFlipX",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"CCScene",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ccTime t = ((ccTime)  tolua_tonumber(tolua_S,2,0));
  CCScene* s = ((CCScene*)  tolua_tousertype(tolua_S,3,0));
  tOrientation o = ((tOrientation) (int)  tolua_tonumber(tolua_S,4,kOrientationRightOver));
  {
   CCTransitionZoomFlipX* tolua_ret = (CCTransitionZoomFlipX*)  CCTransitionZoomFlipX::transitionWithDuration(t,s,o);
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    tolua_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCTransitionZoomFlipX");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'transitionWithDuration'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: transitionWithDuration of class  CCTransitionZoomFlipY */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCTransitionZoomFlipY_transitionWithDuration00
static int tolua_Cocos2d_CCTransitionZoomFlipY_transitionWithDuration00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCTransitionZoomFlipY",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"CCScene",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ccTime t = ((ccTime)  tolua_tonumber(tolua_S,2,0));
  CCScene* s = ((CCScene*)  tolua_tousertype(tolua_S,3,0));
  tOrientation o = ((tOrientation) (int)  tolua_tonumber(tolua_S,4,kOrientationUpOver));
  {
   CCTransitionZoomFlipY* tolua_ret = (CCTransitionZoomFlipY*)  CCTransitionZoomFlipY::transitionWithDuration(t,s,o);
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    tolua_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCTransitionZoomFlipY");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'transitionWithDuration'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: transitionWithDuration of class  CCTransitionZoomFlipAngular */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCTransitionZoomFlipAngular_transitionWithDuration00
static int tolua_Cocos2d_CCTransitionZoomFlipAngular_transitionWithDuration00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCTransitionZoomFlipAngular",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"CCScene",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ccTime t = ((ccTime)  tolua_tonumber(tolua_S,2,0));
  CCScene* s = ((CCScene*)  tolua_tousertype(tolua_S,3,0));
  tOrientation o = ((tOrientation) (int)  tolua_tonumber(tolua_S,4,kOrientationRightOver));
  {
   CCTransitionZoomFlipAngular* tolua_ret = (CCTransitionZoomFlipAngular*)  CCTransitionZoomFlipAngular::transitionWithDuration(t,s,o);
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    tolua_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCTransitionZoomFlipAngular");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'transitionWithDuration'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: transitionWithDuration of class  CCTransitionFade */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCTransitionFade_transitionWithDuration00
static int tolua_Cocos2d_CCTransitionFade_transitionWithDuration00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCTransitionFade",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"CCScene",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,4,&tolua_err) || !tolua_isusertype(tolua_S,4,"ccColor3B",1,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ccTime duration = ((ccTime)  tolua_tonumber(tolua_S,2,0));
  CCScene* scene = ((CCScene*)  tolua_tousertype(tolua_S,3,0));
  const ccColor3B clr = ccBLACK;
  ccColor3B color = *((ccColor3B*)  tolua_tousertype(tolua_S,4,(void*)&clr));
  {
   CCTransitionFade* tolua_ret = (CCTransitionFade*)  CCTransitionFade::transitionWithDuration(duration,scene,color);
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    tolua_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCTransitionFade");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'transitionWithDuration'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: transitionWithDuration of class  CCTransitionCrossFade */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCTransitionCrossFade_transitionWithDuration00
static int tolua_Cocos2d_CCTransitionCrossFade_transitionWithDuration00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCTransitionCrossFade",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"CCScene",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ccTime t = ((ccTime)  tolua_tonumber(tolua_S,2,0));
  CCScene* scene = ((CCScene*)  tolua_tousertype(tolua_S,3,0));
  {
   CCTransitionCrossFade* tolua_ret = (CCTransitionCrossFade*)  CCTransitionCrossFade::transitionWithDuration(t,scene);
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    tolua_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCTransitionCrossFade");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'transitionWithDuration'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: transitionWithDuration of class  CCTransitionTurnOffTiles */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCTransitionTurnOffTiles_transitionWithDuration00
static int tolua_Cocos2d_CCTransitionTurnOffTiles_transitionWithDuration00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCTransitionTurnOffTiles",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"CCScene",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ccTime t = ((ccTime)  tolua_tonumber(tolua_S,2,0));
  CCScene* scene = ((CCScene*)  tolua_tousertype(tolua_S,3,0));
  {
   CCTransitionTurnOffTiles* tolua_ret = (CCTransitionTurnOffTiles*)  CCTransitionTurnOffTiles::transitionWithDuration(t,scene);
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    tolua_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCTransitionTurnOffTiles");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'transitionWithDuration'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: transitionWithDuration of class  CCTransitionSplitCols */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCTransitionSplitCols_transitionWithDuration00
static int tolua_Cocos2d_CCTransitionSplitCols_transitionWithDuration00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCTransitionSplitCols",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"CCScene",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ccTime t = ((ccTime)  tolua_tonumber(tolua_S,2,0));
  CCScene* scene = ((CCScene*)  tolua_tousertype(tolua_S,3,0));
  {
   CCTransitionSplitCols* tolua_ret = (CCTransitionSplitCols*)  CCTransitionSplitCols::transitionWithDuration(t,scene);
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    tolua_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCTransitionSplitCols");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'transitionWithDuration'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: transitionWithDuration of class  CCTransitionSplitRows */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCTransitionSplitRows_transitionWithDuration00
static int tolua_Cocos2d_CCTransitionSplitRows_transitionWithDuration00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCTransitionSplitRows",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"CCScene",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ccTime t = ((ccTime)  tolua_tonumber(tolua_S,2,0));
  CCScene* scene = ((CCScene*)  tolua_tousertype(tolua_S,3,0));
  {
   CCTransitionSplitRows* tolua_ret = (CCTransitionSplitRows*)  CCTransitionSplitRows::transitionWithDuration(t,scene);
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    tolua_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCTransitionSplitRows");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'transitionWithDuration'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: transitionWithDuration of class  CCTransitionFadeTR */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCTransitionFadeTR_transitionWithDuration00
static int tolua_Cocos2d_CCTransitionFadeTR_transitionWithDuration00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCTransitionFadeTR",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"CCScene",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ccTime t = ((ccTime)  tolua_tonumber(tolua_S,2,0));
  CCScene* scene = ((CCScene*)  tolua_tousertype(tolua_S,3,0));
  {
   CCTransitionFadeTR* tolua_ret = (CCTransitionFadeTR*)  CCTransitionFadeTR::transitionWithDuration(t,scene);
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    tolua_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCTransitionFadeTR");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'transitionWithDuration'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: transitionWithDuration of class  CCTransitionFadeBL */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCTransitionFadeBL_transitionWithDuration00
static int tolua_Cocos2d_CCTransitionFadeBL_transitionWithDuration00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCTransitionFadeBL",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"CCScene",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ccTime t = ((ccTime)  tolua_tonumber(tolua_S,2,0));
  CCScene* scene = ((CCScene*)  tolua_tousertype(tolua_S,3,0));
  {
   CCTransitionFadeBL* tolua_ret = (CCTransitionFadeBL*)  CCTransitionFadeBL::transitionWithDuration(t,scene);
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    tolua_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCTransitionFadeBL");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'transitionWithDuration'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: transitionWithDuration of class  CCTransitionFadeUp */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCTransitionFadeUp_transitionWithDuration00
static int tolua_Cocos2d_CCTransitionFadeUp_transitionWithDuration00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCTransitionFadeUp",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"CCScene",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ccTime t = ((ccTime)  tolua_tonumber(tolua_S,2,0));
  CCScene* scene = ((CCScene*)  tolua_tousertype(tolua_S,3,0));
  {
   CCTransitionFadeUp* tolua_ret = (CCTransitionFadeUp*)  CCTransitionFadeUp::transitionWithDuration(t,scene);
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    tolua_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCTransitionFadeUp");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'transitionWithDuration'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: transitionWithDuration of class  CCTransitionFadeDown */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCTransitionFadeDown_transitionWithDuration00
static int tolua_Cocos2d_CCTransitionFadeDown_transitionWithDuration00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCTransitionFadeDown",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"CCScene",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ccTime t = ((ccTime)  tolua_tonumber(tolua_S,2,0));
  CCScene* scene = ((CCScene*)  tolua_tousertype(tolua_S,3,0));
  {
   CCTransitionFadeDown* tolua_ret = (CCTransitionFadeDown*)  CCTransitionFadeDown::transitionWithDuration(t,scene);
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    tolua_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCTransitionFadeDown");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'transitionWithDuration'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: actionWithSize of class  CCTransitionPageTurn */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCTransitionPageTurn_actionWithSize00
static int tolua_Cocos2d_CCTransitionPageTurn_actionWithSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTransitionPageTurn",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"ccGridSize",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTransitionPageTurn* self = (CCTransitionPageTurn*)  tolua_tousertype(tolua_S,1,0);
  ccGridSize vector = *((ccGridSize*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'actionWithSize'", NULL);
#endif
  {
   CCActionInterval* tolua_ret = (CCActionInterval*)  self->actionWithSize(vector);
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    tolua_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCActionInterval");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'actionWithSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: transitionWithDuration of class  CCTransitionPageTurn */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCTransitionPageTurn_transitionWithDuration00
static int tolua_Cocos2d_CCTransitionPageTurn_transitionWithDuration00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCTransitionPageTurn",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"CCScene",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ccTime t = ((ccTime)  tolua_tonumber(tolua_S,2,0));
  CCScene* scene = ((CCScene*)  tolua_tousertype(tolua_S,3,0));
  bool backwards = ((bool)  tolua_toboolean(tolua_S,4,0));
  {
   CCTransitionPageTurn* tolua_ret = (CCTransitionPageTurn*)  CCTransitionPageTurn::transitionWithDuration(t,scene,backwards);
    int nID = (tolua_ret) ? tolua_ret->m_uID : -1;
    int* pLuaID = (tolua_ret) ? &tolua_ret->m_nLuaID : NULL;
    tolua_pushusertype_ccobject(tolua_S, nID, pLuaID, (void*)tolua_ret,"CCTransitionPageTurn");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'transitionWithDuration'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: r of class  ccColor3B */
#ifndef TOLUA_DISABLE_tolua_get_ccColor3B_unsigned_r
static int tolua_get_ccColor3B_unsigned_r(lua_State* tolua_S)
{
  ccColor3B* self = (ccColor3B*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'r'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->r);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: r of class  ccColor3B */
#ifndef TOLUA_DISABLE_tolua_set_ccColor3B_unsigned_r
static int tolua_set_ccColor3B_unsigned_r(lua_State* tolua_S)
{
  ccColor3B* self = (ccColor3B*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'r'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->r = (( unsigned char)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: g of class  ccColor3B */
#ifndef TOLUA_DISABLE_tolua_get_ccColor3B_unsigned_g
static int tolua_get_ccColor3B_unsigned_g(lua_State* tolua_S)
{
  ccColor3B* self = (ccColor3B*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'g'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->g);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: g of class  ccColor3B */
#ifndef TOLUA_DISABLE_tolua_set_ccColor3B_unsigned_g
static int tolua_set_ccColor3B_unsigned_g(lua_State* tolua_S)
{
  ccColor3B* self = (ccColor3B*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'g'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->g = (( unsigned char)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: b of class  ccColor3B */
#ifndef TOLUA_DISABLE_tolua_get_ccColor3B_unsigned_b
static int tolua_get_ccColor3B_unsigned_b(lua_State* tolua_S)
{
  ccColor3B* self = (ccColor3B*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'b'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->b);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: b of class  ccColor3B */
#ifndef TOLUA_DISABLE_tolua_set_ccColor3B_unsigned_b
static int tolua_set_ccColor3B_unsigned_b(lua_State* tolua_S)
{
  ccColor3B* self = (ccColor3B*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'b'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->b = (( unsigned char)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* function: ccc3 */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_ccc300
static int tolua_Cocos2d_ccc300(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  unsigned const char r = ((unsigned const char)  tolua_tonumber(tolua_S,1,0));
  unsigned const char g = ((unsigned const char)  tolua_tonumber(tolua_S,2,0));
  unsigned const char b = ((unsigned const char)  tolua_tonumber(tolua_S,3,0));
  {
   ccColor3B tolua_ret = (ccColor3B)  ccc3(r,g,b);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((ccColor3B)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"ccColor3B");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(ccColor3B));
     tolua_pushusertype(tolua_S,tolua_obj,"ccColor3B");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ccc3'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: r of class  ccColor4B */
#ifndef TOLUA_DISABLE_tolua_get_ccColor4B_unsigned_r
static int tolua_get_ccColor4B_unsigned_r(lua_State* tolua_S)
{
  ccColor4B* self = (ccColor4B*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'r'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->r);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: r of class  ccColor4B */
#ifndef TOLUA_DISABLE_tolua_set_ccColor4B_unsigned_r
static int tolua_set_ccColor4B_unsigned_r(lua_State* tolua_S)
{
  ccColor4B* self = (ccColor4B*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'r'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->r = (( unsigned char)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: g of class  ccColor4B */
#ifndef TOLUA_DISABLE_tolua_get_ccColor4B_unsigned_g
static int tolua_get_ccColor4B_unsigned_g(lua_State* tolua_S)
{
  ccColor4B* self = (ccColor4B*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'g'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->g);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: g of class  ccColor4B */
#ifndef TOLUA_DISABLE_tolua_set_ccColor4B_unsigned_g
static int tolua_set_ccColor4B_unsigned_g(lua_State* tolua_S)
{
  ccColor4B* self = (ccColor4B*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'g'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->g = (( unsigned char)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: b of class  ccColor4B */
#ifndef TOLUA_DISABLE_tolua_get_ccColor4B_unsigned_b
static int tolua_get_ccColor4B_unsigned_b(lua_State* tolua_S)
{
  ccColor4B* self = (ccColor4B*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'b'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->b);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: b of class  ccColor4B */
#ifndef TOLUA_DISABLE_tolua_set_ccColor4B_unsigned_b
static int tolua_set_ccColor4B_unsigned_b(lua_State* tolua_S)
{
  ccColor4B* self = (ccColor4B*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'b'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->b = (( unsigned char)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: a of class  ccColor4B */
#ifndef TOLUA_DISABLE_tolua_get_ccColor4B_unsigned_a
static int tolua_get_ccColor4B_unsigned_a(lua_State* tolua_S)
{
  ccColor4B* self = (ccColor4B*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'a'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->a);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: a of class  ccColor4B */
#ifndef TOLUA_DISABLE_tolua_set_ccColor4B_unsigned_a
static int tolua_set_ccColor4B_unsigned_a(lua_State* tolua_S)
{
  ccColor4B* self = (ccColor4B*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'a'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->a = (( unsigned char)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* function: ccc4 */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_ccc400
static int tolua_Cocos2d_ccc400(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  unsigned const char r = ((unsigned const char)  tolua_tonumber(tolua_S,1,0));
  unsigned const char g = ((unsigned const char)  tolua_tonumber(tolua_S,2,0));
  unsigned const char b = ((unsigned const char)  tolua_tonumber(tolua_S,3,0));
  unsigned const char o = ((unsigned const char)  tolua_tonumber(tolua_S,4,0));
  {
   ccColor4B tolua_ret = (ccColor4B)  ccc4(r,g,b,o);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((ccColor4B)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"ccColor4B");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(ccColor4B));
     tolua_pushusertype(tolua_S,tolua_obj,"ccColor4B");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ccc4'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: r of class  ccColor4F */
#ifndef TOLUA_DISABLE_tolua_get_ccColor4F_r
static int tolua_get_ccColor4F_r(lua_State* tolua_S)
{
  ccColor4F* self = (ccColor4F*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'r'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->r);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: r of class  ccColor4F */
#ifndef TOLUA_DISABLE_tolua_set_ccColor4F_r
static int tolua_set_ccColor4F_r(lua_State* tolua_S)
{
  ccColor4F* self = (ccColor4F*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'r'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->r = ((  float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: g of class  ccColor4F */
#ifndef TOLUA_DISABLE_tolua_get_ccColor4F_g
static int tolua_get_ccColor4F_g(lua_State* tolua_S)
{
  ccColor4F* self = (ccColor4F*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'g'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->g);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: g of class  ccColor4F */
#ifndef TOLUA_DISABLE_tolua_set_ccColor4F_g
static int tolua_set_ccColor4F_g(lua_State* tolua_S)
{
  ccColor4F* self = (ccColor4F*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'g'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->g = ((  float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: b of class  ccColor4F */
#ifndef TOLUA_DISABLE_tolua_get_ccColor4F_b
static int tolua_get_ccColor4F_b(lua_State* tolua_S)
{
  ccColor4F* self = (ccColor4F*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'b'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->b);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: b of class  ccColor4F */
#ifndef TOLUA_DISABLE_tolua_set_ccColor4F_b
static int tolua_set_ccColor4F_b(lua_State* tolua_S)
{
  ccColor4F* self = (ccColor4F*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'b'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->b = ((  float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: a of class  ccColor4F */
#ifndef TOLUA_DISABLE_tolua_get_ccColor4F_a
static int tolua_get_ccColor4F_a(lua_State* tolua_S)
{
  ccColor4F* self = (ccColor4F*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'a'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->a);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: a of class  ccColor4F */
#ifndef TOLUA_DISABLE_tolua_set_ccColor4F_a
static int tolua_set_ccColor4F_a(lua_State* tolua_S)
{
  ccColor4F* self = (ccColor4F*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'a'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->a = ((  float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* function: ccc4FFromccc3B */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_ccc4FFromccc3B00
static int tolua_Cocos2d_ccc4FFromccc3B00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"ccColor3B",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ccColor3B c = *((ccColor3B*)  tolua_tousertype(tolua_S,1,0));
  {
   ccColor4F tolua_ret = (ccColor4F)  ccc4FFromccc3B(c);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((ccColor4F)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"ccColor4F");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(ccColor4F));
     tolua_pushusertype(tolua_S,tolua_obj,"ccColor4F");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ccc4FFromccc3B'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: ccc4FFromccc4B */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_ccc4FFromccc4B00
static int tolua_Cocos2d_ccc4FFromccc4B00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"ccColor4B",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ccColor4B c = *((ccColor4B*)  tolua_tousertype(tolua_S,1,0));
  {
   ccColor4F tolua_ret = (ccColor4F)  ccc4FFromccc4B(c);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((ccColor4F)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"ccColor4F");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(ccColor4F));
     tolua_pushusertype(tolua_S,tolua_obj,"ccColor4F");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ccc4FFromccc4B'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* function: ccc4FEqual */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_ccc4FEqual00
static int tolua_Cocos2d_ccc4FEqual00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     (tolua_isvaluenil(tolua_S,1,&tolua_err) || !tolua_isusertype(tolua_S,1,"ccColor4F",0,&tolua_err)) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"ccColor4F",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  ccColor4F a = *((ccColor4F*)  tolua_tousertype(tolua_S,1,0));
  ccColor4F b = *((ccColor4F*)  tolua_tousertype(tolua_S,2,0));
  {
   bool tolua_ret = (bool)  ccc4FEqual(a,b);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ccc4FEqual'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: x of class  ccVertex2F */
#ifndef TOLUA_DISABLE_tolua_get_ccVertex2F_x
static int tolua_get_ccVertex2F_x(lua_State* tolua_S)
{
  ccVertex2F* self = (ccVertex2F*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'x'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->x);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: x of class  ccVertex2F */
#ifndef TOLUA_DISABLE_tolua_set_ccVertex2F_x
static int tolua_set_ccVertex2F_x(lua_State* tolua_S)
{
  ccVertex2F* self = (ccVertex2F*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'x'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->x = ((  float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: y of class  ccVertex2F */
#ifndef TOLUA_DISABLE_tolua_get_ccVertex2F_y
static int tolua_get_ccVertex2F_y(lua_State* tolua_S)
{
  ccVertex2F* self = (ccVertex2F*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'y'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->y);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: y of class  ccVertex2F */
#ifndef TOLUA_DISABLE_tolua_set_ccVertex2F_y
static int tolua_set_ccVertex2F_y(lua_State* tolua_S)
{
  ccVertex2F* self = (ccVertex2F*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'y'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->y = ((  float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* function: vertex2 */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_vertex200
static int tolua_Cocos2d_vertex200(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const float x = ((const float)  tolua_tonumber(tolua_S,1,0));
  const float y = ((const float)  tolua_tonumber(tolua_S,2,0));
  {
   ccVertex2F tolua_ret = (ccVertex2F)  vertex2(x,y);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((ccVertex2F)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"ccVertex2F");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(ccVertex2F));
     tolua_pushusertype(tolua_S,tolua_obj,"ccVertex2F");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'vertex2'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: x of class  ccVertex3F */
#ifndef TOLUA_DISABLE_tolua_get_ccVertex3F_x
static int tolua_get_ccVertex3F_x(lua_State* tolua_S)
{
  ccVertex3F* self = (ccVertex3F*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'x'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->x);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: x of class  ccVertex3F */
#ifndef TOLUA_DISABLE_tolua_set_ccVertex3F_x
static int tolua_set_ccVertex3F_x(lua_State* tolua_S)
{
  ccVertex3F* self = (ccVertex3F*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'x'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->x = ((  float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: y of class  ccVertex3F */
#ifndef TOLUA_DISABLE_tolua_get_ccVertex3F_y
static int tolua_get_ccVertex3F_y(lua_State* tolua_S)
{
  ccVertex3F* self = (ccVertex3F*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'y'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->y);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: y of class  ccVertex3F */
#ifndef TOLUA_DISABLE_tolua_set_ccVertex3F_y
static int tolua_set_ccVertex3F_y(lua_State* tolua_S)
{
  ccVertex3F* self = (ccVertex3F*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'y'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->y = ((  float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: z of class  ccVertex3F */
#ifndef TOLUA_DISABLE_tolua_get_ccVertex3F_z
static int tolua_get_ccVertex3F_z(lua_State* tolua_S)
{
  ccVertex3F* self = (ccVertex3F*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'z'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->z);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: z of class  ccVertex3F */
#ifndef TOLUA_DISABLE_tolua_set_ccVertex3F_z
static int tolua_set_ccVertex3F_z(lua_State* tolua_S)
{
  ccVertex3F* self = (ccVertex3F*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'z'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->z = ((  float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* function: vertex3 */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_vertex300
static int tolua_Cocos2d_vertex300(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const float x = ((const float)  tolua_tonumber(tolua_S,1,0));
  const float y = ((const float)  tolua_tonumber(tolua_S,2,0));
  const float z = ((const float)  tolua_tonumber(tolua_S,3,0));
  {
   ccVertex3F tolua_ret = (ccVertex3F)  vertex3(x,y,z);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((ccVertex3F)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"ccVertex3F");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(ccVertex3F));
     tolua_pushusertype(tolua_S,tolua_obj,"ccVertex3F");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'vertex3'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: u of class  ccTex2F */
#ifndef TOLUA_DISABLE_tolua_get_ccTex2F_u
static int tolua_get_ccTex2F_u(lua_State* tolua_S)
{
  ccTex2F* self = (ccTex2F*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'u'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->u);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: u of class  ccTex2F */
#ifndef TOLUA_DISABLE_tolua_set_ccTex2F_u
static int tolua_set_ccTex2F_u(lua_State* tolua_S)
{
  ccTex2F* self = (ccTex2F*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'u'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->u = ((  float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: v of class  ccTex2F */
#ifndef TOLUA_DISABLE_tolua_get_ccTex2F_v
static int tolua_get_ccTex2F_v(lua_State* tolua_S)
{
  ccTex2F* self = (ccTex2F*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'v'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->v);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: v of class  ccTex2F */
#ifndef TOLUA_DISABLE_tolua_set_ccTex2F_v
static int tolua_set_ccTex2F_v(lua_State* tolua_S)
{
  ccTex2F* self = (ccTex2F*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'v'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->v = ((  float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* function: tex2 */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_tex200
static int tolua_Cocos2d_tex200(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const float u = ((const float)  tolua_tonumber(tolua_S,1,0));
  const float v = ((const float)  tolua_tonumber(tolua_S,2,0));
  {
   ccTex2F tolua_ret = (ccTex2F)  tex2(u,v);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((ccTex2F)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"ccTex2F");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(ccTex2F));
     tolua_pushusertype(tolua_S,tolua_obj,"ccTex2F");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'tex2'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: pos of class  ccPointSprite */
#ifndef TOLUA_DISABLE_tolua_get_ccPointSprite_pos
static int tolua_get_ccPointSprite_pos(lua_State* tolua_S)
{
  ccPointSprite* self = (ccPointSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'pos'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->pos,"ccVertex2F");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: pos of class  ccPointSprite */
#ifndef TOLUA_DISABLE_tolua_set_ccPointSprite_pos
static int tolua_set_ccPointSprite_pos(lua_State* tolua_S)
{
  ccPointSprite* self = (ccPointSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'pos'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"ccVertex2F",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->pos = *((ccVertex2F*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: color of class  ccPointSprite */
#ifndef TOLUA_DISABLE_tolua_get_ccPointSprite_color
static int tolua_get_ccPointSprite_color(lua_State* tolua_S)
{
  ccPointSprite* self = (ccPointSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'color'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->color,"ccColor4B");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: color of class  ccPointSprite */
#ifndef TOLUA_DISABLE_tolua_set_ccPointSprite_color
static int tolua_set_ccPointSprite_color(lua_State* tolua_S)
{
  ccPointSprite* self = (ccPointSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'color'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"ccColor4B",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->color = *((ccColor4B*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: size of class  ccPointSprite */
#ifndef TOLUA_DISABLE_tolua_get_ccPointSprite_size
static int tolua_get_ccPointSprite_size(lua_State* tolua_S)
{
  ccPointSprite* self = (ccPointSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'size'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->size);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: size of class  ccPointSprite */
#ifndef TOLUA_DISABLE_tolua_set_ccPointSprite_size
static int tolua_set_ccPointSprite_size(lua_State* tolua_S)
{
  ccPointSprite* self = (ccPointSprite*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'size'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->size = ((  float)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: tl of class  ccQuad2 */
#ifndef TOLUA_DISABLE_tolua_get_ccQuad2_tl
static int tolua_get_ccQuad2_tl(lua_State* tolua_S)
{
  ccQuad2* self = (ccQuad2*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'tl'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->tl,"ccVertex2F");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: tl of class  ccQuad2 */
#ifndef TOLUA_DISABLE_tolua_set_ccQuad2_tl
static int tolua_set_ccQuad2_tl(lua_State* tolua_S)
{
  ccQuad2* self = (ccQuad2*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'tl'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"ccVertex2F",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->tl = *((ccVertex2F*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: tr of class  ccQuad2 */
#ifndef TOLUA_DISABLE_tolua_get_ccQuad2_tr
static int tolua_get_ccQuad2_tr(lua_State* tolua_S)
{
  ccQuad2* self = (ccQuad2*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'tr'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->tr,"ccVertex2F");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: tr of class  ccQuad2 */
#ifndef TOLUA_DISABLE_tolua_set_ccQuad2_tr
static int tolua_set_ccQuad2_tr(lua_State* tolua_S)
{
  ccQuad2* self = (ccQuad2*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'tr'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"ccVertex2F",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->tr = *((ccVertex2F*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: bl of class  ccQuad2 */
#ifndef TOLUA_DISABLE_tolua_get_ccQuad2_bl
static int tolua_get_ccQuad2_bl(lua_State* tolua_S)
{
  ccQuad2* self = (ccQuad2*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'bl'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->bl,"ccVertex2F");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: bl of class  ccQuad2 */
#ifndef TOLUA_DISABLE_tolua_set_ccQuad2_bl
static int tolua_set_ccQuad2_bl(lua_State* tolua_S)
{
  ccQuad2* self = (ccQuad2*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'bl'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"ccVertex2F",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->bl = *((ccVertex2F*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: br of class  ccQuad2 */
#ifndef TOLUA_DISABLE_tolua_get_ccQuad2_br
static int tolua_get_ccQuad2_br(lua_State* tolua_S)
{
  ccQuad2* self = (ccQuad2*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'br'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->br,"ccVertex2F");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: br of class  ccQuad2 */
#ifndef TOLUA_DISABLE_tolua_set_ccQuad2_br
static int tolua_set_ccQuad2_br(lua_State* tolua_S)
{
  ccQuad2* self = (ccQuad2*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'br'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"ccVertex2F",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->br = *((ccVertex2F*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: bl of class  ccQuad3 */
#ifndef TOLUA_DISABLE_tolua_get_ccQuad3_bl
static int tolua_get_ccQuad3_bl(lua_State* tolua_S)
{
  ccQuad3* self = (ccQuad3*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'bl'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->bl,"ccVertex3F");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: bl of class  ccQuad3 */
#ifndef TOLUA_DISABLE_tolua_set_ccQuad3_bl
static int tolua_set_ccQuad3_bl(lua_State* tolua_S)
{
  ccQuad3* self = (ccQuad3*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'bl'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"ccVertex3F",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->bl = *((ccVertex3F*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: br of class  ccQuad3 */
#ifndef TOLUA_DISABLE_tolua_get_ccQuad3_br
static int tolua_get_ccQuad3_br(lua_State* tolua_S)
{
  ccQuad3* self = (ccQuad3*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'br'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->br,"ccVertex3F");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: br of class  ccQuad3 */
#ifndef TOLUA_DISABLE_tolua_set_ccQuad3_br
static int tolua_set_ccQuad3_br(lua_State* tolua_S)
{
  ccQuad3* self = (ccQuad3*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'br'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"ccVertex3F",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->br = *((ccVertex3F*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: tl of class  ccQuad3 */
#ifndef TOLUA_DISABLE_tolua_get_ccQuad3_tl
static int tolua_get_ccQuad3_tl(lua_State* tolua_S)
{
  ccQuad3* self = (ccQuad3*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'tl'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->tl,"ccVertex3F");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: tl of class  ccQuad3 */
#ifndef TOLUA_DISABLE_tolua_set_ccQuad3_tl
static int tolua_set_ccQuad3_tl(lua_State* tolua_S)
{
  ccQuad3* self = (ccQuad3*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'tl'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"ccVertex3F",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->tl = *((ccVertex3F*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: tr of class  ccQuad3 */
#ifndef TOLUA_DISABLE_tolua_get_ccQuad3_tr
static int tolua_get_ccQuad3_tr(lua_State* tolua_S)
{
  ccQuad3* self = (ccQuad3*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'tr'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->tr,"ccVertex3F");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: tr of class  ccQuad3 */
#ifndef TOLUA_DISABLE_tolua_set_ccQuad3_tr
static int tolua_set_ccQuad3_tr(lua_State* tolua_S)
{
  ccQuad3* self = (ccQuad3*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'tr'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"ccVertex3F",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->tr = *((ccVertex3F*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: x of class  ccGridSize */
#ifndef TOLUA_DISABLE_tolua_get_ccGridSize_x
static int tolua_get_ccGridSize_x(lua_State* tolua_S)
{
  ccGridSize* self = (ccGridSize*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'x'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->x);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: x of class  ccGridSize */
#ifndef TOLUA_DISABLE_tolua_set_ccGridSize_x
static int tolua_set_ccGridSize_x(lua_State* tolua_S)
{
  ccGridSize* self = (ccGridSize*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'x'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->x = ((int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: y of class  ccGridSize */
#ifndef TOLUA_DISABLE_tolua_get_ccGridSize_y
static int tolua_get_ccGridSize_y(lua_State* tolua_S)
{
  ccGridSize* self = (ccGridSize*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'y'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->y);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: y of class  ccGridSize */
#ifndef TOLUA_DISABLE_tolua_set_ccGridSize_y
static int tolua_set_ccGridSize_y(lua_State* tolua_S)
{
  ccGridSize* self = (ccGridSize*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'y'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->y = ((int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* function: ccg */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_ccg00
static int tolua_Cocos2d_ccg00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isnumber(tolua_S,1,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const int x = ((const int)  tolua_tonumber(tolua_S,1,0));
  const int y = ((const int)  tolua_tonumber(tolua_S,2,0));
  {
   ccGridSize tolua_ret = (ccGridSize)  ccg(x,y);
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((ccGridSize)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"ccGridSize");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(ccGridSize));
     tolua_pushusertype(tolua_S,tolua_obj,"ccGridSize");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ccg'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: vertices of class  ccV2F_C4B_T2F */
#ifndef TOLUA_DISABLE_tolua_get_ccV2F_C4B_T2F_vertices
static int tolua_get_ccV2F_C4B_T2F_vertices(lua_State* tolua_S)
{
  ccV2F_C4B_T2F* self = (ccV2F_C4B_T2F*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'vertices'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->vertices,"ccVertex2F");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: vertices of class  ccV2F_C4B_T2F */
#ifndef TOLUA_DISABLE_tolua_set_ccV2F_C4B_T2F_vertices
static int tolua_set_ccV2F_C4B_T2F_vertices(lua_State* tolua_S)
{
  ccV2F_C4B_T2F* self = (ccV2F_C4B_T2F*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'vertices'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"ccVertex2F",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->vertices = *((ccVertex2F*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: colors of class  ccV2F_C4B_T2F */
#ifndef TOLUA_DISABLE_tolua_get_ccV2F_C4B_T2F_colors
static int tolua_get_ccV2F_C4B_T2F_colors(lua_State* tolua_S)
{
  ccV2F_C4B_T2F* self = (ccV2F_C4B_T2F*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'colors'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->colors,"ccColor4B");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: colors of class  ccV2F_C4B_T2F */
#ifndef TOLUA_DISABLE_tolua_set_ccV2F_C4B_T2F_colors
static int tolua_set_ccV2F_C4B_T2F_colors(lua_State* tolua_S)
{
  ccV2F_C4B_T2F* self = (ccV2F_C4B_T2F*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'colors'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"ccColor4B",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->colors = *((ccColor4B*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: texCoords of class  ccV2F_C4B_T2F */
#ifndef TOLUA_DISABLE_tolua_get_ccV2F_C4B_T2F_texCoords
static int tolua_get_ccV2F_C4B_T2F_texCoords(lua_State* tolua_S)
{
  ccV2F_C4B_T2F* self = (ccV2F_C4B_T2F*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'texCoords'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->texCoords,"ccTex2F");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: texCoords of class  ccV2F_C4B_T2F */
#ifndef TOLUA_DISABLE_tolua_set_ccV2F_C4B_T2F_texCoords
static int tolua_set_ccV2F_C4B_T2F_texCoords(lua_State* tolua_S)
{
  ccV2F_C4B_T2F* self = (ccV2F_C4B_T2F*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'texCoords'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"ccTex2F",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->texCoords = *((ccTex2F*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: vertices of class  ccV2F_C4F_T2F */
#ifndef TOLUA_DISABLE_tolua_get_ccV2F_C4F_T2F_vertices
static int tolua_get_ccV2F_C4F_T2F_vertices(lua_State* tolua_S)
{
  ccV2F_C4F_T2F* self = (ccV2F_C4F_T2F*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'vertices'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->vertices,"ccVertex2F");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: vertices of class  ccV2F_C4F_T2F */
#ifndef TOLUA_DISABLE_tolua_set_ccV2F_C4F_T2F_vertices
static int tolua_set_ccV2F_C4F_T2F_vertices(lua_State* tolua_S)
{
  ccV2F_C4F_T2F* self = (ccV2F_C4F_T2F*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'vertices'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"ccVertex2F",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->vertices = *((ccVertex2F*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: colors of class  ccV2F_C4F_T2F */
#ifndef TOLUA_DISABLE_tolua_get_ccV2F_C4F_T2F_colors
static int tolua_get_ccV2F_C4F_T2F_colors(lua_State* tolua_S)
{
  ccV2F_C4F_T2F* self = (ccV2F_C4F_T2F*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'colors'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->colors,"ccColor4F");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: colors of class  ccV2F_C4F_T2F */
#ifndef TOLUA_DISABLE_tolua_set_ccV2F_C4F_T2F_colors
static int tolua_set_ccV2F_C4F_T2F_colors(lua_State* tolua_S)
{
  ccV2F_C4F_T2F* self = (ccV2F_C4F_T2F*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'colors'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"ccColor4F",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->colors = *((ccColor4F*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: texCoords of class  ccV2F_C4F_T2F */
#ifndef TOLUA_DISABLE_tolua_get_ccV2F_C4F_T2F_texCoords
static int tolua_get_ccV2F_C4F_T2F_texCoords(lua_State* tolua_S)
{
  ccV2F_C4F_T2F* self = (ccV2F_C4F_T2F*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'texCoords'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->texCoords,"ccTex2F");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: texCoords of class  ccV2F_C4F_T2F */
#ifndef TOLUA_DISABLE_tolua_set_ccV2F_C4F_T2F_texCoords
static int tolua_set_ccV2F_C4F_T2F_texCoords(lua_State* tolua_S)
{
  ccV2F_C4F_T2F* self = (ccV2F_C4F_T2F*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'texCoords'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"ccTex2F",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->texCoords = *((ccTex2F*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: vertices of class  ccV3F_C4B_T2F */
#ifndef TOLUA_DISABLE_tolua_get_ccV3F_C4B_T2F_vertices
static int tolua_get_ccV3F_C4B_T2F_vertices(lua_State* tolua_S)
{
  ccV3F_C4B_T2F* self = (ccV3F_C4B_T2F*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'vertices'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->vertices,"ccVertex3F");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: vertices of class  ccV3F_C4B_T2F */
#ifndef TOLUA_DISABLE_tolua_set_ccV3F_C4B_T2F_vertices
static int tolua_set_ccV3F_C4B_T2F_vertices(lua_State* tolua_S)
{
  ccV3F_C4B_T2F* self = (ccV3F_C4B_T2F*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'vertices'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"ccVertex3F",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->vertices = *((ccVertex3F*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: colors of class  ccV3F_C4B_T2F */
#ifndef TOLUA_DISABLE_tolua_get_ccV3F_C4B_T2F_colors
static int tolua_get_ccV3F_C4B_T2F_colors(lua_State* tolua_S)
{
  ccV3F_C4B_T2F* self = (ccV3F_C4B_T2F*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'colors'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->colors,"ccColor4B");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: colors of class  ccV3F_C4B_T2F */
#ifndef TOLUA_DISABLE_tolua_set_ccV3F_C4B_T2F_colors
static int tolua_set_ccV3F_C4B_T2F_colors(lua_State* tolua_S)
{
  ccV3F_C4B_T2F* self = (ccV3F_C4B_T2F*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'colors'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"ccColor4B",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->colors = *((ccColor4B*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: texCoords of class  ccV3F_C4B_T2F */
#ifndef TOLUA_DISABLE_tolua_get_ccV3F_C4B_T2F_texCoords
static int tolua_get_ccV3F_C4B_T2F_texCoords(lua_State* tolua_S)
{
  ccV3F_C4B_T2F* self = (ccV3F_C4B_T2F*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'texCoords'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->texCoords,"ccTex2F");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: texCoords of class  ccV3F_C4B_T2F */
#ifndef TOLUA_DISABLE_tolua_set_ccV3F_C4B_T2F_texCoords
static int tolua_set_ccV3F_C4B_T2F_texCoords(lua_State* tolua_S)
{
  ccV3F_C4B_T2F* self = (ccV3F_C4B_T2F*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'texCoords'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"ccTex2F",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->texCoords = *((ccTex2F*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: bl of class  ccV2F_C4B_T2F_Quad */
#ifndef TOLUA_DISABLE_tolua_get_ccV2F_C4B_T2F_Quad_bl
static int tolua_get_ccV2F_C4B_T2F_Quad_bl(lua_State* tolua_S)
{
  ccV2F_C4B_T2F_Quad* self = (ccV2F_C4B_T2F_Quad*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'bl'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->bl,"ccV2F_C4B_T2F");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: bl of class  ccV2F_C4B_T2F_Quad */
#ifndef TOLUA_DISABLE_tolua_set_ccV2F_C4B_T2F_Quad_bl
static int tolua_set_ccV2F_C4B_T2F_Quad_bl(lua_State* tolua_S)
{
  ccV2F_C4B_T2F_Quad* self = (ccV2F_C4B_T2F_Quad*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'bl'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"ccV2F_C4B_T2F",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->bl = *((ccV2F_C4B_T2F*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: br of class  ccV2F_C4B_T2F_Quad */
#ifndef TOLUA_DISABLE_tolua_get_ccV2F_C4B_T2F_Quad_br
static int tolua_get_ccV2F_C4B_T2F_Quad_br(lua_State* tolua_S)
{
  ccV2F_C4B_T2F_Quad* self = (ccV2F_C4B_T2F_Quad*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'br'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->br,"ccV2F_C4B_T2F");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: br of class  ccV2F_C4B_T2F_Quad */
#ifndef TOLUA_DISABLE_tolua_set_ccV2F_C4B_T2F_Quad_br
static int tolua_set_ccV2F_C4B_T2F_Quad_br(lua_State* tolua_S)
{
  ccV2F_C4B_T2F_Quad* self = (ccV2F_C4B_T2F_Quad*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'br'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"ccV2F_C4B_T2F",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->br = *((ccV2F_C4B_T2F*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: tl of class  ccV2F_C4B_T2F_Quad */
#ifndef TOLUA_DISABLE_tolua_get_ccV2F_C4B_T2F_Quad_tl
static int tolua_get_ccV2F_C4B_T2F_Quad_tl(lua_State* tolua_S)
{
  ccV2F_C4B_T2F_Quad* self = (ccV2F_C4B_T2F_Quad*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'tl'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->tl,"ccV2F_C4B_T2F");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: tl of class  ccV2F_C4B_T2F_Quad */
#ifndef TOLUA_DISABLE_tolua_set_ccV2F_C4B_T2F_Quad_tl
static int tolua_set_ccV2F_C4B_T2F_Quad_tl(lua_State* tolua_S)
{
  ccV2F_C4B_T2F_Quad* self = (ccV2F_C4B_T2F_Quad*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'tl'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"ccV2F_C4B_T2F",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->tl = *((ccV2F_C4B_T2F*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: tr of class  ccV2F_C4B_T2F_Quad */
#ifndef TOLUA_DISABLE_tolua_get_ccV2F_C4B_T2F_Quad_tr
static int tolua_get_ccV2F_C4B_T2F_Quad_tr(lua_State* tolua_S)
{
  ccV2F_C4B_T2F_Quad* self = (ccV2F_C4B_T2F_Quad*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'tr'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->tr,"ccV2F_C4B_T2F");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: tr of class  ccV2F_C4B_T2F_Quad */
#ifndef TOLUA_DISABLE_tolua_set_ccV2F_C4B_T2F_Quad_tr
static int tolua_set_ccV2F_C4B_T2F_Quad_tr(lua_State* tolua_S)
{
  ccV2F_C4B_T2F_Quad* self = (ccV2F_C4B_T2F_Quad*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'tr'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"ccV2F_C4B_T2F",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->tr = *((ccV2F_C4B_T2F*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: tl of class  ccV3F_C4B_T2F_Quad */
#ifndef TOLUA_DISABLE_tolua_get_ccV3F_C4B_T2F_Quad_tl
static int tolua_get_ccV3F_C4B_T2F_Quad_tl(lua_State* tolua_S)
{
  ccV3F_C4B_T2F_Quad* self = (ccV3F_C4B_T2F_Quad*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'tl'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->tl,"ccV3F_C4B_T2F");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: tl of class  ccV3F_C4B_T2F_Quad */
#ifndef TOLUA_DISABLE_tolua_set_ccV3F_C4B_T2F_Quad_tl
static int tolua_set_ccV3F_C4B_T2F_Quad_tl(lua_State* tolua_S)
{
  ccV3F_C4B_T2F_Quad* self = (ccV3F_C4B_T2F_Quad*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'tl'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"ccV3F_C4B_T2F",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->tl = *((ccV3F_C4B_T2F*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: bl of class  ccV3F_C4B_T2F_Quad */
#ifndef TOLUA_DISABLE_tolua_get_ccV3F_C4B_T2F_Quad_bl
static int tolua_get_ccV3F_C4B_T2F_Quad_bl(lua_State* tolua_S)
{
  ccV3F_C4B_T2F_Quad* self = (ccV3F_C4B_T2F_Quad*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'bl'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->bl,"ccV3F_C4B_T2F");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: bl of class  ccV3F_C4B_T2F_Quad */
#ifndef TOLUA_DISABLE_tolua_set_ccV3F_C4B_T2F_Quad_bl
static int tolua_set_ccV3F_C4B_T2F_Quad_bl(lua_State* tolua_S)
{
  ccV3F_C4B_T2F_Quad* self = (ccV3F_C4B_T2F_Quad*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'bl'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"ccV3F_C4B_T2F",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->bl = *((ccV3F_C4B_T2F*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: tr of class  ccV3F_C4B_T2F_Quad */
#ifndef TOLUA_DISABLE_tolua_get_ccV3F_C4B_T2F_Quad_tr
static int tolua_get_ccV3F_C4B_T2F_Quad_tr(lua_State* tolua_S)
{
  ccV3F_C4B_T2F_Quad* self = (ccV3F_C4B_T2F_Quad*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'tr'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->tr,"ccV3F_C4B_T2F");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: tr of class  ccV3F_C4B_T2F_Quad */
#ifndef TOLUA_DISABLE_tolua_set_ccV3F_C4B_T2F_Quad_tr
static int tolua_set_ccV3F_C4B_T2F_Quad_tr(lua_State* tolua_S)
{
  ccV3F_C4B_T2F_Quad* self = (ccV3F_C4B_T2F_Quad*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'tr'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"ccV3F_C4B_T2F",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->tr = *((ccV3F_C4B_T2F*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: br of class  ccV3F_C4B_T2F_Quad */
#ifndef TOLUA_DISABLE_tolua_get_ccV3F_C4B_T2F_Quad_br
static int tolua_get_ccV3F_C4B_T2F_Quad_br(lua_State* tolua_S)
{
  ccV3F_C4B_T2F_Quad* self = (ccV3F_C4B_T2F_Quad*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'br'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->br,"ccV3F_C4B_T2F");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: br of class  ccV3F_C4B_T2F_Quad */
#ifndef TOLUA_DISABLE_tolua_set_ccV3F_C4B_T2F_Quad_br
static int tolua_set_ccV3F_C4B_T2F_Quad_br(lua_State* tolua_S)
{
  ccV3F_C4B_T2F_Quad* self = (ccV3F_C4B_T2F_Quad*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'br'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"ccV3F_C4B_T2F",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->br = *((ccV3F_C4B_T2F*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: bl of class  ccV2F_C4F_T2F_Quad */
#ifndef TOLUA_DISABLE_tolua_get_ccV2F_C4F_T2F_Quad_bl
static int tolua_get_ccV2F_C4F_T2F_Quad_bl(lua_State* tolua_S)
{
  ccV2F_C4F_T2F_Quad* self = (ccV2F_C4F_T2F_Quad*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'bl'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->bl,"ccV2F_C4F_T2F");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: bl of class  ccV2F_C4F_T2F_Quad */
#ifndef TOLUA_DISABLE_tolua_set_ccV2F_C4F_T2F_Quad_bl
static int tolua_set_ccV2F_C4F_T2F_Quad_bl(lua_State* tolua_S)
{
  ccV2F_C4F_T2F_Quad* self = (ccV2F_C4F_T2F_Quad*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'bl'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"ccV2F_C4F_T2F",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->bl = *((ccV2F_C4F_T2F*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: br of class  ccV2F_C4F_T2F_Quad */
#ifndef TOLUA_DISABLE_tolua_get_ccV2F_C4F_T2F_Quad_br
static int tolua_get_ccV2F_C4F_T2F_Quad_br(lua_State* tolua_S)
{
  ccV2F_C4F_T2F_Quad* self = (ccV2F_C4F_T2F_Quad*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'br'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->br,"ccV2F_C4F_T2F");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: br of class  ccV2F_C4F_T2F_Quad */
#ifndef TOLUA_DISABLE_tolua_set_ccV2F_C4F_T2F_Quad_br
static int tolua_set_ccV2F_C4F_T2F_Quad_br(lua_State* tolua_S)
{
  ccV2F_C4F_T2F_Quad* self = (ccV2F_C4F_T2F_Quad*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'br'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"ccV2F_C4F_T2F",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->br = *((ccV2F_C4F_T2F*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: tl of class  ccV2F_C4F_T2F_Quad */
#ifndef TOLUA_DISABLE_tolua_get_ccV2F_C4F_T2F_Quad_tl
static int tolua_get_ccV2F_C4F_T2F_Quad_tl(lua_State* tolua_S)
{
  ccV2F_C4F_T2F_Quad* self = (ccV2F_C4F_T2F_Quad*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'tl'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->tl,"ccV2F_C4F_T2F");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: tl of class  ccV2F_C4F_T2F_Quad */
#ifndef TOLUA_DISABLE_tolua_set_ccV2F_C4F_T2F_Quad_tl
static int tolua_set_ccV2F_C4F_T2F_Quad_tl(lua_State* tolua_S)
{
  ccV2F_C4F_T2F_Quad* self = (ccV2F_C4F_T2F_Quad*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'tl'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"ccV2F_C4F_T2F",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->tl = *((ccV2F_C4F_T2F*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: tr of class  ccV2F_C4F_T2F_Quad */
#ifndef TOLUA_DISABLE_tolua_get_ccV2F_C4F_T2F_Quad_tr
static int tolua_get_ccV2F_C4F_T2F_Quad_tr(lua_State* tolua_S)
{
  ccV2F_C4F_T2F_Quad* self = (ccV2F_C4F_T2F_Quad*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'tr'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->tr,"ccV2F_C4F_T2F");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: tr of class  ccV2F_C4F_T2F_Quad */
#ifndef TOLUA_DISABLE_tolua_set_ccV2F_C4F_T2F_Quad_tr
static int tolua_set_ccV2F_C4F_T2F_Quad_tr(lua_State* tolua_S)
{
  ccV2F_C4F_T2F_Quad* self = (ccV2F_C4F_T2F_Quad*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'tr'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"ccV2F_C4F_T2F",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->tr = *((ccV2F_C4F_T2F*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: src of class  ccBlendFunc */
#ifndef TOLUA_DISABLE_tolua_get_ccBlendFunc_src
static int tolua_get_ccBlendFunc_src(lua_State* tolua_S)
{
  ccBlendFunc* self = (ccBlendFunc*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'src'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->src,"GLenum");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: src of class  ccBlendFunc */
#ifndef TOLUA_DISABLE_tolua_set_ccBlendFunc_src
static int tolua_set_ccBlendFunc_src(lua_State* tolua_S)
{
  ccBlendFunc* self = (ccBlendFunc*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'src'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"GLenum",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->src = *((GLenum*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: dst of class  ccBlendFunc */
#ifndef TOLUA_DISABLE_tolua_get_ccBlendFunc_dst
static int tolua_get_ccBlendFunc_dst(lua_State* tolua_S)
{
  ccBlendFunc* self = (ccBlendFunc*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'dst'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->dst,"GLenum");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: dst of class  ccBlendFunc */
#ifndef TOLUA_DISABLE_tolua_set_ccBlendFunc_dst
static int tolua_set_ccBlendFunc_dst(lua_State* tolua_S)
{
  ccBlendFunc* self = (ccBlendFunc*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'dst'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"GLenum",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->dst = *((GLenum*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: getBoolForKey of class  CCUserDefault */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCUserDefault_getBoolForKey00
static int tolua_Cocos2d_CCUserDefault_getBoolForKey00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCUserDefault",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCUserDefault* self = (CCUserDefault*)  tolua_tousertype(tolua_S,1,0);
  const char* pKey = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getBoolForKey'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->getBoolForKey(pKey);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getBoolForKey'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getIntegerForKey of class  CCUserDefault */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCUserDefault_getIntegerForKey00
static int tolua_Cocos2d_CCUserDefault_getIntegerForKey00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCUserDefault",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCUserDefault* self = (CCUserDefault*)  tolua_tousertype(tolua_S,1,0);
  const char* pKey = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getIntegerForKey'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getIntegerForKey(pKey);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getIntegerForKey'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getFloatForKey of class  CCUserDefault */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCUserDefault_getFloatForKey00
static int tolua_Cocos2d_CCUserDefault_getFloatForKey00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCUserDefault",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCUserDefault* self = (CCUserDefault*)  tolua_tousertype(tolua_S,1,0);
  const char* pKey = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getFloatForKey'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getFloatForKey(pKey);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getFloatForKey'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDoubleForKey of class  CCUserDefault */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCUserDefault_getDoubleForKey00
static int tolua_Cocos2d_CCUserDefault_getDoubleForKey00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCUserDefault",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCUserDefault* self = (CCUserDefault*)  tolua_tousertype(tolua_S,1,0);
  const char* pKey = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDoubleForKey'", NULL);
#endif
  {
   double tolua_ret = (double)  self->getDoubleForKey(pKey);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDoubleForKey'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getStringForKey of class  CCUserDefault */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCUserDefault_getStringForKey00
static int tolua_Cocos2d_CCUserDefault_getStringForKey00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCUserDefault",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCUserDefault* self = (CCUserDefault*)  tolua_tousertype(tolua_S,1,0);
  const char* pKey = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getStringForKey'", NULL);
#endif
  {
   std::string tolua_ret = (std::string)  self->getStringForKey(pKey);
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getStringForKey'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setBoolForKey of class  CCUserDefault */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCUserDefault_setBoolForKey00
static int tolua_Cocos2d_CCUserDefault_setBoolForKey00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCUserDefault",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCUserDefault* self = (CCUserDefault*)  tolua_tousertype(tolua_S,1,0);
  const char* pKey = ((const char*)  tolua_tostring(tolua_S,2,0));
  bool value = ((bool)  tolua_toboolean(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBoolForKey'", NULL);
#endif
  {
   self->setBoolForKey(pKey,value);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setBoolForKey'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setIntegerForKey of class  CCUserDefault */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCUserDefault_setIntegerForKey00
static int tolua_Cocos2d_CCUserDefault_setIntegerForKey00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCUserDefault",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCUserDefault* self = (CCUserDefault*)  tolua_tousertype(tolua_S,1,0);
  const char* pKey = ((const char*)  tolua_tostring(tolua_S,2,0));
  int value = ((int)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setIntegerForKey'", NULL);
#endif
  {
   self->setIntegerForKey(pKey,value);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setIntegerForKey'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setFloatForKey of class  CCUserDefault */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCUserDefault_setFloatForKey00
static int tolua_Cocos2d_CCUserDefault_setFloatForKey00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCUserDefault",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCUserDefault* self = (CCUserDefault*)  tolua_tousertype(tolua_S,1,0);
  const char* pKey = ((const char*)  tolua_tostring(tolua_S,2,0));
  float value = ((float)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setFloatForKey'", NULL);
#endif
  {
   self->setFloatForKey(pKey,value);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setFloatForKey'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDoubleForKey of class  CCUserDefault */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCUserDefault_setDoubleForKey00
static int tolua_Cocos2d_CCUserDefault_setDoubleForKey00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCUserDefault",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCUserDefault* self = (CCUserDefault*)  tolua_tousertype(tolua_S,1,0);
  const char* pKey = ((const char*)  tolua_tostring(tolua_S,2,0));
  double value = ((double)  tolua_tonumber(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDoubleForKey'", NULL);
#endif
  {
   self->setDoubleForKey(pKey,value);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDoubleForKey'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setStringForKey of class  CCUserDefault */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCUserDefault_setStringForKey00
static int tolua_Cocos2d_CCUserDefault_setStringForKey00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCUserDefault",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_iscppstring(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCUserDefault* self = (CCUserDefault*)  tolua_tousertype(tolua_S,1,0);
  const char* pKey = ((const char*)  tolua_tostring(tolua_S,2,0));
  std::string value = ((std::string)  tolua_tocppstring(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setStringForKey'", NULL);
#endif
  {
   self->setStringForKey(pKey,value);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setStringForKey'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: sharedUserDefault of class  CCUserDefault */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCUserDefault_sharedUserDefault00
static int tolua_Cocos2d_CCUserDefault_sharedUserDefault00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCUserDefault",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CCUserDefault* tolua_ret = (CCUserDefault*)  CCUserDefault::sharedUserDefault();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CCUserDefault");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'sharedUserDefault'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: purgeSharedUserDefault of class  CCUserDefault */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCUserDefault_purgeSharedUserDefault00
static int tolua_Cocos2d_CCUserDefault_purgeSharedUserDefault00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCUserDefault",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CCUserDefault::purgeSharedUserDefault();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'purgeSharedUserDefault'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getXMLFilePath of class  CCUserDefault */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_CCUserDefault_getXMLFilePath00
static int tolua_Cocos2d_CCUserDefault_getXMLFilePath00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCUserDefault",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   const std::string tolua_ret = (const std::string)  CCUserDefault::getXMLFilePath();
   tolua_pushcppstring(tolua_S,(const char*)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getXMLFilePath'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: sharedEngine of class  SimpleAudioEngine */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_SimpleAudioEngine_sharedEngine00
static int tolua_Cocos2d_SimpleAudioEngine_sharedEngine00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"SimpleAudioEngine",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   SimpleAudioEngine* tolua_ret = (SimpleAudioEngine*)  SimpleAudioEngine::sharedEngine();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"SimpleAudioEngine");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'sharedEngine'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setResource of class  SimpleAudioEngine */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_SimpleAudioEngine_setResource00
static int tolua_Cocos2d_SimpleAudioEngine_setResource00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"SimpleAudioEngine",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  const char* pszZipFileName = ((const char*)  tolua_tostring(tolua_S,2,0));
  {
   SimpleAudioEngine::setResource(pszZipFileName);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setResource'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: preloadBackgroundMusic of class  SimpleAudioEngine */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_SimpleAudioEngine_preloadBackgroundMusic00
static int tolua_Cocos2d_SimpleAudioEngine_preloadBackgroundMusic00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SimpleAudioEngine",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SimpleAudioEngine* self = (SimpleAudioEngine*)  tolua_tousertype(tolua_S,1,0);
  const char* pszFilePath = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'preloadBackgroundMusic'", NULL);
#endif
  {
   self->preloadBackgroundMusic(pszFilePath);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'preloadBackgroundMusic'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: playBackgroundMusic of class  SimpleAudioEngine */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_SimpleAudioEngine_playBackgroundMusic00
static int tolua_Cocos2d_SimpleAudioEngine_playBackgroundMusic00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SimpleAudioEngine",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SimpleAudioEngine* self = (SimpleAudioEngine*)  tolua_tousertype(tolua_S,1,0);
  const char* pszFilePath = ((const char*)  tolua_tostring(tolua_S,2,0));
  bool bLoop = ((bool)  tolua_toboolean(tolua_S,3,false));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'playBackgroundMusic'", NULL);
#endif
  {
   self->playBackgroundMusic(pszFilePath,bLoop);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'playBackgroundMusic'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: stopBackgroundMusic of class  SimpleAudioEngine */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_SimpleAudioEngine_stopBackgroundMusic00
static int tolua_Cocos2d_SimpleAudioEngine_stopBackgroundMusic00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SimpleAudioEngine",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SimpleAudioEngine* self = (SimpleAudioEngine*)  tolua_tousertype(tolua_S,1,0);
  bool bReleaseData = ((bool)  tolua_toboolean(tolua_S,2,false));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'stopBackgroundMusic'", NULL);
#endif
  {
   self->stopBackgroundMusic(bReleaseData);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'stopBackgroundMusic'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: pauseBackgroundMusic of class  SimpleAudioEngine */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_SimpleAudioEngine_pauseBackgroundMusic00
static int tolua_Cocos2d_SimpleAudioEngine_pauseBackgroundMusic00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SimpleAudioEngine",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SimpleAudioEngine* self = (SimpleAudioEngine*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'pauseBackgroundMusic'", NULL);
#endif
  {
   self->pauseBackgroundMusic();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'pauseBackgroundMusic'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: resumeBackgroundMusic of class  SimpleAudioEngine */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_SimpleAudioEngine_resumeBackgroundMusic00
static int tolua_Cocos2d_SimpleAudioEngine_resumeBackgroundMusic00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SimpleAudioEngine",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SimpleAudioEngine* self = (SimpleAudioEngine*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'resumeBackgroundMusic'", NULL);
#endif
  {
   self->resumeBackgroundMusic();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'resumeBackgroundMusic'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: rewindBackgroundMusic of class  SimpleAudioEngine */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_SimpleAudioEngine_rewindBackgroundMusic00
static int tolua_Cocos2d_SimpleAudioEngine_rewindBackgroundMusic00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SimpleAudioEngine",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SimpleAudioEngine* self = (SimpleAudioEngine*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'rewindBackgroundMusic'", NULL);
#endif
  {
   self->rewindBackgroundMusic();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'rewindBackgroundMusic'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: willPlayBackgroundMusic of class  SimpleAudioEngine */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_SimpleAudioEngine_willPlayBackgroundMusic00
static int tolua_Cocos2d_SimpleAudioEngine_willPlayBackgroundMusic00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SimpleAudioEngine",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SimpleAudioEngine* self = (SimpleAudioEngine*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'willPlayBackgroundMusic'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->willPlayBackgroundMusic();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'willPlayBackgroundMusic'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: isBackgroundMusicPlaying of class  SimpleAudioEngine */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_SimpleAudioEngine_isBackgroundMusicPlaying00
static int tolua_Cocos2d_SimpleAudioEngine_isBackgroundMusicPlaying00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SimpleAudioEngine",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SimpleAudioEngine* self = (SimpleAudioEngine*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'isBackgroundMusicPlaying'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->isBackgroundMusicPlaying();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'isBackgroundMusicPlaying'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getBackgroundMusicVolume of class  SimpleAudioEngine */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_SimpleAudioEngine_getBackgroundMusicVolume00
static int tolua_Cocos2d_SimpleAudioEngine_getBackgroundMusicVolume00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SimpleAudioEngine",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SimpleAudioEngine* self = (SimpleAudioEngine*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getBackgroundMusicVolume'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getBackgroundMusicVolume();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getBackgroundMusicVolume'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setBackgroundMusicVolume of class  SimpleAudioEngine */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_SimpleAudioEngine_setBackgroundMusicVolume00
static int tolua_Cocos2d_SimpleAudioEngine_setBackgroundMusicVolume00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SimpleAudioEngine",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SimpleAudioEngine* self = (SimpleAudioEngine*)  tolua_tousertype(tolua_S,1,0);
  float volume = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBackgroundMusicVolume'", NULL);
#endif
  {
   self->setBackgroundMusicVolume(volume);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setBackgroundMusicVolume'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getEffectsVolume of class  SimpleAudioEngine */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_SimpleAudioEngine_getEffectsVolume00
static int tolua_Cocos2d_SimpleAudioEngine_getEffectsVolume00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SimpleAudioEngine",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SimpleAudioEngine* self = (SimpleAudioEngine*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getEffectsVolume'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getEffectsVolume();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getEffectsVolume'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setEffectsVolume of class  SimpleAudioEngine */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_SimpleAudioEngine_setEffectsVolume00
static int tolua_Cocos2d_SimpleAudioEngine_setEffectsVolume00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SimpleAudioEngine",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SimpleAudioEngine* self = (SimpleAudioEngine*)  tolua_tousertype(tolua_S,1,0);
  float volume = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setEffectsVolume'", NULL);
#endif
  {
   self->setEffectsVolume(volume);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setEffectsVolume'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: playEffect of class  SimpleAudioEngine */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_SimpleAudioEngine_playEffect00
static int tolua_Cocos2d_SimpleAudioEngine_playEffect00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SimpleAudioEngine",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isboolean(tolua_S,3,1,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SimpleAudioEngine* self = (SimpleAudioEngine*)  tolua_tousertype(tolua_S,1,0);
  const char* pszFilePath = ((const char*)  tolua_tostring(tolua_S,2,0));
  bool bLoop = ((bool)  tolua_toboolean(tolua_S,3,false));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'playEffect'", NULL);
#endif
  {
   unsigned int tolua_ret = (unsigned int)  self->playEffect(pszFilePath,bLoop);
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'playEffect'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: stopEffect of class  SimpleAudioEngine */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_SimpleAudioEngine_stopEffect00
static int tolua_Cocos2d_SimpleAudioEngine_stopEffect00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SimpleAudioEngine",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SimpleAudioEngine* self = (SimpleAudioEngine*)  tolua_tousertype(tolua_S,1,0);
  unsigned int nSoundId = ((unsigned int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'stopEffect'", NULL);
#endif
  {
   self->stopEffect(nSoundId);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'stopEffect'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: preloadEffect of class  SimpleAudioEngine */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_SimpleAudioEngine_preloadEffect00
static int tolua_Cocos2d_SimpleAudioEngine_preloadEffect00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SimpleAudioEngine",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SimpleAudioEngine* self = (SimpleAudioEngine*)  tolua_tousertype(tolua_S,1,0);
  const char* pszFilePath = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'preloadEffect'", NULL);
#endif
  {
   self->preloadEffect(pszFilePath);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'preloadEffect'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: unloadEffect of class  SimpleAudioEngine */
#ifndef TOLUA_DISABLE_tolua_Cocos2d_SimpleAudioEngine_unloadEffect00
static int tolua_Cocos2d_SimpleAudioEngine_unloadEffect00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SimpleAudioEngine",0,&tolua_err) ||
     !tolua_isstring(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SimpleAudioEngine* self = (SimpleAudioEngine*)  tolua_tousertype(tolua_S,1,0);
  const char* pszFilePath = ((const char*)  tolua_tostring(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'unloadEffect'", NULL);
#endif
  {
   self->unloadEffect(pszFilePath);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'unloadEffect'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_Cocos2d_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  tolua_constant(tolua_S,"kLanguageEnglish",kLanguageEnglish);
  tolua_constant(tolua_S,"kLanguageChinese",kLanguageChinese);
  tolua_constant(tolua_S,"kLanguageFrench",kLanguageFrench);
  tolua_constant(tolua_S,"kLanguageItalian",kLanguageItalian);
  tolua_constant(tolua_S,"kLanguageGerman",kLanguageGerman);
  tolua_constant(tolua_S,"kLanguageSpanish",kLanguageSpanish);
  tolua_constant(tolua_S,"kLanguageRussian",kLanguageRussian);
  tolua_cclass(tolua_S,"CCApplication","CCApplication","",NULL);
  tolua_beginmodule(tolua_S,"CCApplication");
   tolua_function(tolua_S,"sharedApplication",tolua_Cocos2d_CCApplication_sharedApplication00);
   tolua_function(tolua_S,"getCurrentLanguage",tolua_Cocos2d_CCApplication_getCurrentLanguage00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"CCArray","CCArray","CCObject",NULL);
  tolua_beginmodule(tolua_S,"CCArray");
   tolua_function(tolua_S,"count",tolua_Cocos2d_CCArray_count00);
   tolua_function(tolua_S,"capacity",tolua_Cocos2d_CCArray_capacity00);
   tolua_function(tolua_S,"indexOfObject",tolua_Cocos2d_CCArray_indexOfObject00);
   tolua_function(tolua_S,"objectAtIndex",tolua_Cocos2d_CCArray_objectAtIndex00);
   tolua_function(tolua_S,"lastObject",tolua_Cocos2d_CCArray_lastObject00);
   tolua_function(tolua_S,"randomObject",tolua_Cocos2d_CCArray_randomObject00);
   tolua_function(tolua_S,"containsObject",tolua_Cocos2d_CCArray_containsObject00);
   tolua_function(tolua_S,"addObject",tolua_Cocos2d_CCArray_addObject00);
   tolua_function(tolua_S,"addObjectsFromArray",tolua_Cocos2d_CCArray_addObjectsFromArray00);
   tolua_function(tolua_S,"insertObject",tolua_Cocos2d_CCArray_insertObject00);
   tolua_function(tolua_S,"removeLastObject",tolua_Cocos2d_CCArray_removeLastObject00);
   tolua_function(tolua_S,"removeObject",tolua_Cocos2d_CCArray_removeObject00);
   tolua_function(tolua_S,"removeObjectAtIndex",tolua_Cocos2d_CCArray_removeObjectAtIndex00);
   tolua_function(tolua_S,"removeObjectsInArray",tolua_Cocos2d_CCArray_removeObjectsInArray00);
   tolua_function(tolua_S,"removeAllObjects",tolua_Cocos2d_CCArray_removeAllObjects00);
   tolua_function(tolua_S,"fastRemoveObject",tolua_Cocos2d_CCArray_fastRemoveObject00);
   tolua_function(tolua_S,"fastRemoveObjectAtIndex",tolua_Cocos2d_CCArray_fastRemoveObjectAtIndex00);
   tolua_function(tolua_S,"exchangeObject",tolua_Cocos2d_CCArray_exchangeObject00);
   tolua_function(tolua_S,"exchangeObjectAtIndex",tolua_Cocos2d_CCArray_exchangeObjectAtIndex00);
   tolua_function(tolua_S,"reverseObjects",tolua_Cocos2d_CCArray_reverseObjects00);
   tolua_function(tolua_S,"reduceMemoryFootprint",tolua_Cocos2d_CCArray_reduceMemoryFootprint00);
   tolua_function(tolua_S,"array",tolua_Cocos2d_CCArray_array00);
   tolua_function(tolua_S,"arrayWithCapacity",tolua_Cocos2d_CCArray_arrayWithCapacity00);
   tolua_function(tolua_S,"arrayWithArray",tolua_Cocos2d_CCArray_arrayWithArray00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"CCAtlasNode","CCAtlasNode","CCNode",NULL);
  tolua_beginmodule(tolua_S,"CCAtlasNode");
   tolua_function(tolua_S,"updateAtlasValues",tolua_Cocos2d_CCAtlasNode_updateAtlasValues00);
   tolua_function(tolua_S,"getTexture",tolua_Cocos2d_CCAtlasNode_getTexture00);
   tolua_function(tolua_S,"setTexture",tolua_Cocos2d_CCAtlasNode_setTexture00);
   tolua_function(tolua_S,"atlasWithTileFile",tolua_Cocos2d_CCAtlasNode_atlasWithTileFile00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CCCamera","CCCamera","CCObject",tolua_collect_CCCamera);
  #else
  tolua_cclass(tolua_S,"CCCamera","CCCamera","CCObject",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CCCamera");
   tolua_function(tolua_S,"new",tolua_Cocos2d_CCCamera_new00);
   tolua_function(tolua_S,"new_local",tolua_Cocos2d_CCCamera_new00_local);
   tolua_function(tolua_S,".call",tolua_Cocos2d_CCCamera_new00_local);
   tolua_function(tolua_S,"init",tolua_Cocos2d_CCCamera_init00);
   tolua_function(tolua_S,"description",tolua_Cocos2d_CCCamera_description00);
   tolua_function(tolua_S,"setDirty",tolua_Cocos2d_CCCamera_setDirty00);
   tolua_function(tolua_S,"getDirty",tolua_Cocos2d_CCCamera_getDirty00);
   tolua_function(tolua_S,"restore",tolua_Cocos2d_CCCamera_restore00);
   tolua_function(tolua_S,"locate",tolua_Cocos2d_CCCamera_locate00);
   tolua_function(tolua_S,"setEyeXYZ",tolua_Cocos2d_CCCamera_setEyeXYZ00);
   tolua_function(tolua_S,"setCenterXYZ",tolua_Cocos2d_CCCamera_setCenterXYZ00);
   tolua_function(tolua_S,"setUpXYZ",tolua_Cocos2d_CCCamera_setUpXYZ00);
   tolua_function(tolua_S,"getEyeXYZ",tolua_Cocos2d_CCCamera_getEyeXYZ00);
   tolua_function(tolua_S,"getCenterXYZ",tolua_Cocos2d_CCCamera_getCenterXYZ00);
   tolua_function(tolua_S,"getUpXYZ",tolua_Cocos2d_CCCamera_getUpXYZ00);
   tolua_function(tolua_S,"getZEye",tolua_Cocos2d_CCCamera_getZEye00);
  tolua_endmodule(tolua_S);
  tolua_function(tolua_S,"CCLuaLog",tolua_Cocos2d_CCLuaLog00);
  tolua_function(tolua_S,"CCMessageBox",tolua_Cocos2d_CCMessageBox00);
  tolua_cclass(tolua_S,"CCDirector","CCDirector","CCObject",NULL);
  tolua_beginmodule(tolua_S,"CCDirector");
   tolua_function(tolua_S,"getRunningScene",tolua_Cocos2d_CCDirector_getRunningScene00);
   tolua_function(tolua_S,"getAnimationInterval",tolua_Cocos2d_CCDirector_getAnimationInterval00);
   tolua_function(tolua_S,"isDisplayStats",tolua_Cocos2d_CCDirector_isDisplayStats00);
   tolua_function(tolua_S,"setDisplayStats",tolua_Cocos2d_CCDirector_setDisplayStats00);
   tolua_function(tolua_S,"isPaused",tolua_Cocos2d_CCDirector_isPaused00);
   tolua_function(tolua_S,"getFrames",tolua_Cocos2d_CCDirector_getFrames00);
   tolua_function(tolua_S,"getWinSize",tolua_Cocos2d_CCDirector_getWinSize00);
   tolua_function(tolua_S,"getWinSizeInPixels",tolua_Cocos2d_CCDirector_getWinSizeInPixels00);
   tolua_function(tolua_S,"convertToGL",tolua_Cocos2d_CCDirector_convertToGL00);
   tolua_function(tolua_S,"convertToUI",tolua_Cocos2d_CCDirector_convertToUI00);
   tolua_function(tolua_S,"runWithScene",tolua_Cocos2d_CCDirector_runWithScene00);
   tolua_function(tolua_S,"pushScene",tolua_Cocos2d_CCDirector_pushScene00);
   tolua_function(tolua_S,"popScene",tolua_Cocos2d_CCDirector_popScene00);
   tolua_function(tolua_S,"replaceScene",tolua_Cocos2d_CCDirector_replaceScene00);
   tolua_function(tolua_S,"getContentScaleFactor",tolua_Cocos2d_CCDirector_getContentScaleFactor00);
   tolua_function(tolua_S,"sharedDirector",tolua_Cocos2d_CCDirector_sharedDirector00);
  tolua_endmodule(tolua_S);
  tolua_function(tolua_S,"ccDrawPoint",tolua_Cocos2d_ccDrawPoint00);
  tolua_function(tolua_S,"ccDrawPoints",tolua_Cocos2d_ccDrawPoints00);
  tolua_function(tolua_S,"ccDrawLine",tolua_Cocos2d_ccDrawLine00);
  tolua_function(tolua_S,"ccDrawPoly",tolua_Cocos2d_ccDrawPoly00);
  tolua_function(tolua_S,"ccDrawCircle",tolua_Cocos2d_ccDrawCircle00);
  tolua_function(tolua_S,"ccDrawQuadBezier",tolua_Cocos2d_ccDrawQuadBezier00);
  tolua_function(tolua_S,"ccDrawCubicBezier",tolua_Cocos2d_ccDrawCubicBezier00);
  tolua_cclass(tolua_S,"CCFileUtils","CCFileUtils","",NULL);
  tolua_beginmodule(tolua_S,"CCFileUtils");
   tolua_function(tolua_S,"getWriteablePath",tolua_Cocos2d_CCFileUtils_getWriteablePath00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CCPoint","CCPoint","",tolua_collect_CCPoint);
  #else
  tolua_cclass(tolua_S,"CCPoint","CCPoint","",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CCPoint");
   tolua_variable(tolua_S,"x",tolua_get_CCPoint_x,tolua_set_CCPoint_x);
   tolua_variable(tolua_S,"y",tolua_get_CCPoint_y,tolua_set_CCPoint_y);
   tolua_function(tolua_S,"new",tolua_Cocos2d_CCPoint_new00);
   tolua_function(tolua_S,"new_local",tolua_Cocos2d_CCPoint_new00_local);
   tolua_function(tolua_S,".call",tolua_Cocos2d_CCPoint_new00_local);
   tolua_function(tolua_S,"new",tolua_Cocos2d_CCPoint_new01);
   tolua_function(tolua_S,"new_local",tolua_Cocos2d_CCPoint_new01_local);
   tolua_function(tolua_S,".call",tolua_Cocos2d_CCPoint_new01_local);
   tolua_function(tolua_S,"CCPointEqualToPoint",tolua_Cocos2d_CCPoint_CCPointEqualToPoint00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CCSize","CCSize","",tolua_collect_CCSize);
  #else
  tolua_cclass(tolua_S,"CCSize","CCSize","",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CCSize");
   tolua_variable(tolua_S,"width",tolua_get_CCSize_width,tolua_set_CCSize_width);
   tolua_variable(tolua_S,"height",tolua_get_CCSize_height,tolua_set_CCSize_height);
   tolua_function(tolua_S,"new",tolua_Cocos2d_CCSize_new00);
   tolua_function(tolua_S,"new_local",tolua_Cocos2d_CCSize_new00_local);
   tolua_function(tolua_S,".call",tolua_Cocos2d_CCSize_new00_local);
   tolua_function(tolua_S,"new",tolua_Cocos2d_CCSize_new01);
   tolua_function(tolua_S,"new_local",tolua_Cocos2d_CCSize_new01_local);
   tolua_function(tolua_S,".call",tolua_Cocos2d_CCSize_new01_local);
   tolua_function(tolua_S,"CCSizeEqualToSize",tolua_Cocos2d_CCSize_CCSizeEqualToSize00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CCRect","CCRect","",tolua_collect_CCRect);
  #else
  tolua_cclass(tolua_S,"CCRect","CCRect","",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CCRect");
   tolua_variable(tolua_S,"origin",tolua_get_CCRect_origin,tolua_set_CCRect_origin);
   tolua_variable(tolua_S,"size",tolua_get_CCRect_size,tolua_set_CCRect_size);
   tolua_function(tolua_S,"new",tolua_Cocos2d_CCRect_new00);
   tolua_function(tolua_S,"new_local",tolua_Cocos2d_CCRect_new00_local);
   tolua_function(tolua_S,".call",tolua_Cocos2d_CCRect_new00_local);
   tolua_function(tolua_S,"new",tolua_Cocos2d_CCRect_new01);
   tolua_function(tolua_S,"new_local",tolua_Cocos2d_CCRect_new01_local);
   tolua_function(tolua_S,".call",tolua_Cocos2d_CCRect_new01_local);
   tolua_function(tolua_S,"CCRectGetMinX",tolua_Cocos2d_CCRect_CCRectGetMinX00);
   tolua_function(tolua_S,"CCRectGetMaxX",tolua_Cocos2d_CCRect_CCRectGetMaxX00);
   tolua_function(tolua_S,"CCRectGetMidX",tolua_Cocos2d_CCRect_CCRectGetMidX00);
   tolua_function(tolua_S,"CCRectGetMinY",tolua_Cocos2d_CCRect_CCRectGetMinY00);
   tolua_function(tolua_S,"CCRectGetMaxY",tolua_Cocos2d_CCRect_CCRectGetMaxY00);
   tolua_function(tolua_S,"CCRectGetMidY",tolua_Cocos2d_CCRect_CCRectGetMidY00);
   tolua_function(tolua_S,"CCRectEqualToRect",tolua_Cocos2d_CCRect_CCRectEqualToRect00);
   tolua_function(tolua_S,"CCRectContainsPoint",tolua_Cocos2d_CCRect_CCRectContainsPoint00);
   tolua_function(tolua_S,"CCRectIntersectsRect",tolua_Cocos2d_CCRect_CCRectIntersectsRect00);
  tolua_endmodule(tolua_S);
  tolua_function(tolua_S,"CCPointMake",tolua_Cocos2d_CCPointMake00);
  tolua_function(tolua_S,"CCSizeMake",tolua_Cocos2d_CCSizeMake00);
  tolua_function(tolua_S,"CCRectMake",tolua_Cocos2d_CCRectMake00);
  tolua_cclass(tolua_S,"CCLabelAtlas","CCLabelAtlas","CCAtlasNode",NULL);
  tolua_beginmodule(tolua_S,"CCLabelAtlas");
   tolua_function(tolua_S,"updateAtlasValues",tolua_Cocos2d_CCLabelAtlas_updateAtlasValues00);
   tolua_function(tolua_S,"setString",tolua_Cocos2d_CCLabelAtlas_setString00);
   tolua_function(tolua_S,"getString",tolua_Cocos2d_CCLabelAtlas_getString00);
   tolua_function(tolua_S,"getTexture",tolua_Cocos2d_CCLabelAtlas_getTexture00);
   tolua_function(tolua_S,"setTexture",tolua_Cocos2d_CCLabelAtlas_setTexture00);
   tolua_function(tolua_S,"labelWithString",tolua_Cocos2d_CCLabelAtlas_labelWithString00);
   tolua_function(tolua_S,"atlasWithTileFile",tolua_Cocos2d_CCLabelAtlas_atlasWithTileFile00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"CCLabelBMFont","CCLabelBMFont","CCNode",NULL);
  tolua_beginmodule(tolua_S,"CCLabelBMFont");
   tolua_function(tolua_S,"setString",tolua_Cocos2d_CCLabelBMFont_setString00);
   tolua_function(tolua_S,"getString",tolua_Cocos2d_CCLabelBMFont_getString00);
   tolua_function(tolua_S,"setColor",tolua_Cocos2d_CCLabelBMFont_setColor00);
   tolua_function(tolua_S,"getColor",tolua_Cocos2d_CCLabelBMFont_getColor00);
   tolua_function(tolua_S,"getOpacity",tolua_Cocos2d_CCLabelBMFont_getOpacity00);
   tolua_function(tolua_S,"setOpacity",tolua_Cocos2d_CCLabelBMFont_setOpacity00);
   tolua_variable(tolua_S,"opacity",tolua_get_CCLabelBMFont_opacity,tolua_set_CCLabelBMFont_opacity);
   tolua_function(tolua_S,"purgeCachedData",tolua_Cocos2d_CCLabelBMFont_purgeCachedData00);
   tolua_function(tolua_S,"labelWithString",tolua_Cocos2d_CCLabelBMFont_labelWithString00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"CCLabelTTF","CCLabelTTF","CCSprite",NULL);
  tolua_beginmodule(tolua_S,"CCLabelTTF");
   tolua_function(tolua_S,"setString",tolua_Cocos2d_CCLabelTTF_setString00);
   tolua_function(tolua_S,"getString",tolua_Cocos2d_CCLabelTTF_getString00);
   tolua_function(tolua_S,"labelWithString",tolua_Cocos2d_CCLabelTTF_labelWithString00);
   tolua_function(tolua_S,"labelWithString",tolua_Cocos2d_CCLabelTTF_labelWithString01);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"CCLayer","CCLayer","CCNode",NULL);
  tolua_beginmodule(tolua_S,"CCLayer");
   tolua_function(tolua_S,"setIsTouchEnabled",tolua_Cocos2d_CCLayer_setIsTouchEnabled00);
   tolua_function(tolua_S,"getIsTouchEnabled",tolua_Cocos2d_CCLayer_getIsTouchEnabled00);
   tolua_function(tolua_S,"setIsAccelerometerEnabled",tolua_Cocos2d_CCLayer_setIsAccelerometerEnabled00);
   tolua_function(tolua_S,"getIsAccelerometerEnabled",tolua_Cocos2d_CCLayer_getIsAccelerometerEnabled00);
   tolua_function(tolua_S,"setIsKeypadEnabled",tolua_Cocos2d_CCLayer_setIsKeypadEnabled00);
   tolua_function(tolua_S,"getIsKeypadEnabled",tolua_Cocos2d_CCLayer_getIsKeypadEnabled00);
   tolua_function(tolua_S,"registerScriptTouchHandler",tolua_Cocos2d_CCLayer_registerScriptTouchHandler00);
   tolua_function(tolua_S,"unregisterScriptTouchHandler",tolua_Cocos2d_CCLayer_unregisterScriptTouchHandler00);
   tolua_function(tolua_S,"node",tolua_Cocos2d_CCLayer_node00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"CCLayerColor","CCLayerColor","CCLayer",NULL);
  tolua_beginmodule(tolua_S,"CCLayerColor");
   tolua_function(tolua_S,"changeWidth",tolua_Cocos2d_CCLayerColor_changeWidth00);
   tolua_function(tolua_S,"changeHeight",tolua_Cocos2d_CCLayerColor_changeHeight00);
   tolua_function(tolua_S,"changeWidthAndHeight",tolua_Cocos2d_CCLayerColor_changeWidthAndHeight00);
   tolua_function(tolua_S,"setOpacity",tolua_Cocos2d_CCLayerColor_setOpacity00);
   tolua_function(tolua_S,"getOpacity",tolua_Cocos2d_CCLayerColor_getOpacity00);
   tolua_function(tolua_S,"setColor",tolua_Cocos2d_CCLayerColor_setColor00);
   tolua_function(tolua_S,"getColor",tolua_Cocos2d_CCLayerColor_getColor00);
   tolua_function(tolua_S,"setBlendFunc",tolua_Cocos2d_CCLayerColor_setBlendFunc00);
   tolua_function(tolua_S,"getBlendFunc",tolua_Cocos2d_CCLayerColor_getBlendFunc00);
   tolua_function(tolua_S,"layerWithColor",tolua_Cocos2d_CCLayerColor_layerWithColor00);
   tolua_function(tolua_S,"layerWithColor",tolua_Cocos2d_CCLayerColor_layerWithColor01);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"CCLayerGradient","CCLayerGradient","CCLayerColor",NULL);
  tolua_beginmodule(tolua_S,"CCLayerGradient");
   tolua_function(tolua_S,"setStartColor",tolua_Cocos2d_CCLayerGradient_setStartColor00);
   tolua_function(tolua_S,"getStartColor",tolua_Cocos2d_CCLayerGradient_getStartColor00);
   tolua_function(tolua_S,"setEndColor",tolua_Cocos2d_CCLayerGradient_setEndColor00);
   tolua_function(tolua_S,"getEndColor",tolua_Cocos2d_CCLayerGradient_getEndColor00);
   tolua_function(tolua_S,"setStartOpacity",tolua_Cocos2d_CCLayerGradient_setStartOpacity00);
   tolua_function(tolua_S,"getStartOpacity",tolua_Cocos2d_CCLayerGradient_getStartOpacity00);
   tolua_function(tolua_S,"setEndOpacity",tolua_Cocos2d_CCLayerGradient_setEndOpacity00);
   tolua_function(tolua_S,"getEndOpacity",tolua_Cocos2d_CCLayerGradient_getEndOpacity00);
   tolua_function(tolua_S,"setVector",tolua_Cocos2d_CCLayerGradient_setVector00);
   tolua_function(tolua_S,"getVector",tolua_Cocos2d_CCLayerGradient_getVector00);
   tolua_function(tolua_S,"setIsCompressedInterpolation",tolua_Cocos2d_CCLayerGradient_setIsCompressedInterpolation00);
   tolua_function(tolua_S,"getIsCompressedInterpolation",tolua_Cocos2d_CCLayerGradient_getIsCompressedInterpolation00);
   tolua_function(tolua_S,"layerWithColor",tolua_Cocos2d_CCLayerGradient_layerWithColor00);
   tolua_function(tolua_S,"layerWithColor",tolua_Cocos2d_CCLayerGradient_layerWithColor01);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"CCLayerMultiplex","CCLayerMultiplex","CCLayer",NULL);
  tolua_beginmodule(tolua_S,"CCLayerMultiplex");
   tolua_function(tolua_S,"addLayer",tolua_Cocos2d_CCLayerMultiplex_addLayer00);
   tolua_function(tolua_S,"switchTo",tolua_Cocos2d_CCLayerMultiplex_switchTo00);
   tolua_function(tolua_S,"switchToAndReleaseMe",tolua_Cocos2d_CCLayerMultiplex_switchToAndReleaseMe00);
   tolua_function(tolua_S,"layerWithLayer",tolua_Cocos2d_CCLayerMultiplex_layerWithLayer00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"CCMenu","CCMenu","CCLayer",NULL);
  tolua_beginmodule(tolua_S,"CCMenu");
   tolua_function(tolua_S,"alignItemsVertically",tolua_Cocos2d_CCMenu_alignItemsVertically00);
   tolua_function(tolua_S,"alignItemsVerticallyWithPadding",tolua_Cocos2d_CCMenu_alignItemsVerticallyWithPadding00);
   tolua_function(tolua_S,"alignItemsHorizontally",tolua_Cocos2d_CCMenu_alignItemsHorizontally00);
   tolua_function(tolua_S,"alignItemsHorizontallyWithPadding",tolua_Cocos2d_CCMenu_alignItemsHorizontallyWithPadding00);
   tolua_function(tolua_S,"alignItemsInColumns",tolua_Cocos2d_CCMenu_alignItemsInColumns00);
   tolua_function(tolua_S,"alignItemsInRows",tolua_Cocos2d_CCMenu_alignItemsInRows00);
   tolua_function(tolua_S,"addChild",tolua_Cocos2d_CCMenu_addChild00);
   tolua_function(tolua_S,"setOpacity",tolua_Cocos2d_CCMenu_setOpacity00);
   tolua_function(tolua_S,"getOpacity",tolua_Cocos2d_CCMenu_getOpacity00);
   tolua_function(tolua_S,"setColor",tolua_Cocos2d_CCMenu_setColor00);
   tolua_function(tolua_S,"getColor",tolua_Cocos2d_CCMenu_getColor00);
   tolua_function(tolua_S,"node",tolua_Cocos2d_CCMenu_node00);
   tolua_function(tolua_S,"menuWithItem",tolua_Cocos2d_CCMenu_menuWithItem00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"CCMenuItem","CCMenuItem","CCNode",NULL);
  tolua_beginmodule(tolua_S,"CCMenuItem");
   tolua_function(tolua_S,"rect",tolua_Cocos2d_CCMenuItem_rect00);
   tolua_function(tolua_S,"activate",tolua_Cocos2d_CCMenuItem_activate00);
   tolua_function(tolua_S,"selected",tolua_Cocos2d_CCMenuItem_selected00);
   tolua_function(tolua_S,"unselected",tolua_Cocos2d_CCMenuItem_unselected00);
   tolua_function(tolua_S,"setIsEnabled",tolua_Cocos2d_CCMenuItem_setIsEnabled00);
   tolua_function(tolua_S,"getIsEnabled",tolua_Cocos2d_CCMenuItem_getIsEnabled00);
   tolua_function(tolua_S,"getIsSelected",tolua_Cocos2d_CCMenuItem_getIsSelected00);
   tolua_variable(tolua_S,"isEnabled",tolua_get_CCMenuItem_isEnabled,tolua_set_CCMenuItem_isEnabled);
   tolua_function(tolua_S,"registerScriptHandler",tolua_Cocos2d_CCMenuItem_registerScriptHandler00);
   tolua_function(tolua_S,"unregisterScriptHandler",tolua_Cocos2d_CCMenuItem_unregisterScriptHandler00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"CCMenuItemLabel","CCMenuItemLabel","CCMenuItem",NULL);
  tolua_beginmodule(tolua_S,"CCMenuItemLabel");
   tolua_function(tolua_S,"setString",tolua_Cocos2d_CCMenuItemLabel_setString00);
   tolua_function(tolua_S,"setOpacity",tolua_Cocos2d_CCMenuItemLabel_setOpacity00);
   tolua_function(tolua_S,"getOpacity",tolua_Cocos2d_CCMenuItemLabel_getOpacity00);
   tolua_function(tolua_S,"setColor",tolua_Cocos2d_CCMenuItemLabel_setColor00);
   tolua_function(tolua_S,"getColor",tolua_Cocos2d_CCMenuItemLabel_getColor00);
   tolua_function(tolua_S,"itemWithLabel",tolua_Cocos2d_CCMenuItemLabel_itemWithLabel00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"CCMenuItemAtlasFont","CCMenuItemAtlasFont","CCMenuItem",NULL);
  tolua_beginmodule(tolua_S,"CCMenuItemAtlasFont");
   tolua_function(tolua_S,"itemWithString",tolua_Cocos2d_CCMenuItemAtlasFont_itemWithString00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"CCMenuItemFont","CCMenuItemFont","CCMenuItem",NULL);
  tolua_beginmodule(tolua_S,"CCMenuItemFont");
   tolua_function(tolua_S,"setFontSize",tolua_Cocos2d_CCMenuItemFont_setFontSize00);
   tolua_function(tolua_S,"fontSize",tolua_Cocos2d_CCMenuItemFont_fontSize00);
   tolua_function(tolua_S,"setFontName",tolua_Cocos2d_CCMenuItemFont_setFontName00);
   tolua_function(tolua_S,"fontName",tolua_Cocos2d_CCMenuItemFont_fontName00);
   tolua_function(tolua_S,"itemWithString",tolua_Cocos2d_CCMenuItemFont_itemWithString00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"CCMenuItemSprite","CCMenuItemSprite","CCMenuItem",NULL);
  tolua_beginmodule(tolua_S,"CCMenuItemSprite");
   tolua_function(tolua_S,"setColor",tolua_Cocos2d_CCMenuItemSprite_setColor00);
   tolua_function(tolua_S,"getColor",tolua_Cocos2d_CCMenuItemSprite_getColor00);
   tolua_function(tolua_S,"setOpacity",tolua_Cocos2d_CCMenuItemSprite_setOpacity00);
   tolua_function(tolua_S,"getOpacity",tolua_Cocos2d_CCMenuItemSprite_getOpacity00);
   tolua_function(tolua_S,"itemWithNormalSprite",tolua_Cocos2d_CCMenuItemSprite_itemWithNormalSprite00);
   tolua_function(tolua_S,"itemWithNormalSprite",tolua_Cocos2d_CCMenuItemSprite_itemWithNormalSprite01);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"CCMenuItemImage","CCMenuItemImage","CCMenuItem",NULL);
  tolua_beginmodule(tolua_S,"CCMenuItemImage");
   tolua_function(tolua_S,"setColor",tolua_Cocos2d_CCMenuItemImage_setColor00);
   tolua_function(tolua_S,"getColor",tolua_Cocos2d_CCMenuItemImage_getColor00);
   tolua_function(tolua_S,"setOpacity",tolua_Cocos2d_CCMenuItemImage_setOpacity00);
   tolua_function(tolua_S,"getOpacity",tolua_Cocos2d_CCMenuItemImage_getOpacity00);
   tolua_function(tolua_S,"itemWithNormalImage",tolua_Cocos2d_CCMenuItemImage_itemWithNormalImage00);
   tolua_function(tolua_S,"itemWithNormalImage",tolua_Cocos2d_CCMenuItemImage_itemWithNormalImage01);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"CCMenuItemToggle","CCMenuItemToggle","CCMenuItem",NULL);
  tolua_beginmodule(tolua_S,"CCMenuItemToggle");
   tolua_function(tolua_S,"addSubItem",tolua_Cocos2d_CCMenuItemToggle_addSubItem00);
   tolua_function(tolua_S,"selectedItem",tolua_Cocos2d_CCMenuItemToggle_selectedItem00);
   tolua_function(tolua_S,"itemWithItem",tolua_Cocos2d_CCMenuItemToggle_itemWithItem00);
  tolua_endmodule(tolua_S);
  tolua_constant(tolua_S,"kCCNodeOnEnter",kCCNodeOnEnter);
  tolua_constant(tolua_S,"kCCNodeOnExit",kCCNodeOnExit);
  tolua_cclass(tolua_S,"CCNode","CCNode","CCObject",NULL);
  tolua_beginmodule(tolua_S,"CCNode");
   tolua_function(tolua_S,"getZOrder",tolua_Cocos2d_CCNode_getZOrder00);
   tolua_function(tolua_S,"getVertexZ",tolua_Cocos2d_CCNode_getVertexZ00);
   tolua_function(tolua_S,"setVertexZ",tolua_Cocos2d_CCNode_setVertexZ00);
   tolua_function(tolua_S,"getRotation",tolua_Cocos2d_CCNode_getRotation00);
   tolua_function(tolua_S,"setRotation",tolua_Cocos2d_CCNode_setRotation00);
   tolua_function(tolua_S,"getScale",tolua_Cocos2d_CCNode_getScale00);
   tolua_function(tolua_S,"setScale",tolua_Cocos2d_CCNode_setScale00);
   tolua_function(tolua_S,"getScaleX",tolua_Cocos2d_CCNode_getScaleX00);
   tolua_function(tolua_S,"setScaleX",tolua_Cocos2d_CCNode_setScaleX00);
   tolua_function(tolua_S,"getScaleY",tolua_Cocos2d_CCNode_getScaleY00);
   tolua_function(tolua_S,"setScaleY",tolua_Cocos2d_CCNode_setScaleY00);
   tolua_function(tolua_S,"getPositionLua",tolua_Cocos2d_CCNode_getPositionLua00);
   tolua_function(tolua_S,"getPosition",tolua_Cocos2d_CCNode_getPosition00);
   tolua_function(tolua_S,"getPositionX",tolua_Cocos2d_CCNode_getPositionX00);
   tolua_function(tolua_S,"getPositionY",tolua_Cocos2d_CCNode_getPositionY00);
   tolua_function(tolua_S,"setPosition",tolua_Cocos2d_CCNode_setPosition00);
   tolua_function(tolua_S,"setPosition",tolua_Cocos2d_CCNode_setPosition01);
   tolua_function(tolua_S,"setPositionX",tolua_Cocos2d_CCNode_setPositionX00);
   tolua_function(tolua_S,"setPositionY",tolua_Cocos2d_CCNode_setPositionY00);
   tolua_function(tolua_S,"getSkewX",tolua_Cocos2d_CCNode_getSkewX00);
   tolua_function(tolua_S,"setSkewX",tolua_Cocos2d_CCNode_setSkewX00);
   tolua_function(tolua_S,"getSkewY",tolua_Cocos2d_CCNode_getSkewY00);
   tolua_function(tolua_S,"setSkewY",tolua_Cocos2d_CCNode_setSkewY00);
   tolua_function(tolua_S,"getIsVisible",tolua_Cocos2d_CCNode_getIsVisible00);
   tolua_function(tolua_S,"setIsVisible",tolua_Cocos2d_CCNode_setIsVisible00);
   tolua_function(tolua_S,"getAnchorPoint",tolua_Cocos2d_CCNode_getAnchorPoint00);
   tolua_function(tolua_S,"setAnchorPoint",tolua_Cocos2d_CCNode_setAnchorPoint00);
   tolua_function(tolua_S,"getContentSize",tolua_Cocos2d_CCNode_getContentSize00);
   tolua_function(tolua_S,"setContentSize",tolua_Cocos2d_CCNode_setContentSize00);
   tolua_function(tolua_S,"getTag",tolua_Cocos2d_CCNode_getTag00);
   tolua_function(tolua_S,"setTag",tolua_Cocos2d_CCNode_setTag00);
   tolua_variable(tolua_S,"zOrder",tolua_get_CCNode_zOrder,NULL);
   tolua_variable(tolua_S,"vertexZ",tolua_get_CCNode_vertexZ,tolua_set_CCNode_vertexZ);
   tolua_variable(tolua_S,"rotation",tolua_get_CCNode_rotation,tolua_set_CCNode_rotation);
   tolua_variable(tolua_S,"scale",tolua_get_CCNode_scale,tolua_set_CCNode_scale);
   tolua_variable(tolua_S,"scaleX",tolua_get_CCNode_scaleX,tolua_set_CCNode_scaleX);
   tolua_variable(tolua_S,"scaleY",tolua_get_CCNode_scaleY,tolua_set_CCNode_scaleY);
   tolua_variable(tolua_S,"x",tolua_get_CCNode_x,tolua_set_CCNode_x);
   tolua_variable(tolua_S,"y",tolua_get_CCNode_y,tolua_set_CCNode_y);
   tolua_variable(tolua_S,"skewX",tolua_get_CCNode_skewX,tolua_set_CCNode_skewX);
   tolua_variable(tolua_S,"skewY",tolua_get_CCNode_skewY,tolua_set_CCNode_skewY);
   tolua_variable(tolua_S,"isVisible",tolua_get_CCNode_isVisible,tolua_set_CCNode_isVisible);
   tolua_variable(tolua_S,"anchorPoint",tolua_get_CCNode_anchorPoint,tolua_set_CCNode_anchorPoint);
   tolua_variable(tolua_S,"contentSize",tolua_get_CCNode_contentSize,tolua_set_CCNode_contentSize);
   tolua_variable(tolua_S,"tag",tolua_get_CCNode_tag,tolua_set_CCNode_tag);
   tolua_function(tolua_S,"getChildren",tolua_Cocos2d_CCNode_getChildren00);
   tolua_function(tolua_S,"getChildrenCount",tolua_Cocos2d_CCNode_getChildrenCount00);
   tolua_function(tolua_S,"getCamera",tolua_Cocos2d_CCNode_getCamera00);
   tolua_function(tolua_S,"getGrid",tolua_Cocos2d_CCNode_getGrid00);
   tolua_function(tolua_S,"setGrid",tolua_Cocos2d_CCNode_setGrid00);
   tolua_function(tolua_S,"getIsRunning",tolua_Cocos2d_CCNode_getIsRunning00);
   tolua_function(tolua_S,"getParent",tolua_Cocos2d_CCNode_getParent00);
   tolua_function(tolua_S,"setParent",tolua_Cocos2d_CCNode_setParent00);
   tolua_function(tolua_S,"getIsRelativeAnchorPoint",tolua_Cocos2d_CCNode_getIsRelativeAnchorPoint00);
   tolua_function(tolua_S,"setIsRelativeAnchorPoint",tolua_Cocos2d_CCNode_setIsRelativeAnchorPoint00);
   tolua_function(tolua_S,"getUserData",tolua_Cocos2d_CCNode_getUserData00);
   tolua_function(tolua_S,"setUserData",tolua_Cocos2d_CCNode_setUserData00);
   tolua_function(tolua_S,"addChild",tolua_Cocos2d_CCNode_addChild00);
   tolua_function(tolua_S,"addChild",tolua_Cocos2d_CCNode_addChild01);
   tolua_function(tolua_S,"addChild",tolua_Cocos2d_CCNode_addChild02);
   tolua_function(tolua_S,"removeChild",tolua_Cocos2d_CCNode_removeChild00);
   tolua_function(tolua_S,"removeAllChildrenWithCleanup",tolua_Cocos2d_CCNode_removeAllChildrenWithCleanup00);
   tolua_function(tolua_S,"reorderChild",tolua_Cocos2d_CCNode_reorderChild00);
   tolua_function(tolua_S,"cleanup",tolua_Cocos2d_CCNode_cleanup00);
   tolua_function(tolua_S,"draw",tolua_Cocos2d_CCNode_draw00);
   tolua_function(tolua_S,"visit",tolua_Cocos2d_CCNode_visit00);
   tolua_function(tolua_S,"transform",tolua_Cocos2d_CCNode_transform00);
   tolua_function(tolua_S,"transformAncestors",tolua_Cocos2d_CCNode_transformAncestors00);
   tolua_function(tolua_S,"boundingBox",tolua_Cocos2d_CCNode_boundingBox00);
   tolua_function(tolua_S,"runAction",tolua_Cocos2d_CCNode_runAction00);
   tolua_function(tolua_S,"stopAllActions",tolua_Cocos2d_CCNode_stopAllActions00);
   tolua_function(tolua_S,"stopAction",tolua_Cocos2d_CCNode_stopAction00);
   tolua_function(tolua_S,"stopActionByTag",tolua_Cocos2d_CCNode_stopActionByTag00);
   tolua_function(tolua_S,"getActionByTag",tolua_Cocos2d_CCNode_getActionByTag00);
   tolua_function(tolua_S,"description",tolua_Cocos2d_CCNode_description00);
   tolua_function(tolua_S,"getChildByTag",tolua_Cocos2d_CCNode_getChildByTag00);
   tolua_function(tolua_S,"numberOfRunningActions",tolua_Cocos2d_CCNode_numberOfRunningActions00);
   tolua_function(tolua_S,"scheduleUpdate",tolua_Cocos2d_CCNode_scheduleUpdate00);
   tolua_function(tolua_S,"scheduleUpdateWithPriority",tolua_Cocos2d_CCNode_scheduleUpdateWithPriority00);
   tolua_function(tolua_S,"unscheduleUpdate",tolua_Cocos2d_CCNode_unscheduleUpdate00);
   tolua_function(tolua_S,"unscheduleAllSelectors",tolua_Cocos2d_CCNode_unscheduleAllSelectors00);
   tolua_function(tolua_S,"resumeSchedulerAndActions",tolua_Cocos2d_CCNode_resumeSchedulerAndActions00);
   tolua_function(tolua_S,"pauseSchedulerAndActions",tolua_Cocos2d_CCNode_pauseSchedulerAndActions00);
   tolua_function(tolua_S,"nodeToParentTransform",tolua_Cocos2d_CCNode_nodeToParentTransform00);
   tolua_function(tolua_S,"parentToNodeTransform",tolua_Cocos2d_CCNode_parentToNodeTransform00);
   tolua_function(tolua_S,"nodeToWorldTransform",tolua_Cocos2d_CCNode_nodeToWorldTransform00);
   tolua_function(tolua_S,"worldToNodeTransform",tolua_Cocos2d_CCNode_worldToNodeTransform00);
   tolua_function(tolua_S,"convertToNodeSpace",tolua_Cocos2d_CCNode_convertToNodeSpace00);
   tolua_function(tolua_S,"convertToWorldSpace",tolua_Cocos2d_CCNode_convertToWorldSpace00);
   tolua_function(tolua_S,"convertToNodeSpaceAR",tolua_Cocos2d_CCNode_convertToNodeSpaceAR00);
   tolua_function(tolua_S,"convertToWorldSpaceAR",tolua_Cocos2d_CCNode_convertToWorldSpaceAR00);
   tolua_function(tolua_S,"convertTouchToNodeSpace",tolua_Cocos2d_CCNode_convertTouchToNodeSpace00);
   tolua_function(tolua_S,"convertTouchToNodeSpaceAR",tolua_Cocos2d_CCNode_convertTouchToNodeSpaceAR00);
   tolua_function(tolua_S,"removeFromParentAndCleanup",tolua_Cocos2d_CCNode_removeFromParentAndCleanup00);
   tolua_function(tolua_S,"removeChildByTag",tolua_Cocos2d_CCNode_removeChildByTag00);
   tolua_function(tolua_S,"registerScriptHandler",tolua_Cocos2d_CCNode_registerScriptHandler00);
   tolua_function(tolua_S,"unregisterScriptHandler",tolua_Cocos2d_CCNode_unregisterScriptHandler00);
   tolua_function(tolua_S,"node",tolua_Cocos2d_CCNode_node00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"CCObject","CCObject","",NULL);
  tolua_beginmodule(tolua_S,"CCObject");
   tolua_function(tolua_S,"release",tolua_Cocos2d_CCObject_release00);
   tolua_function(tolua_S,"retain",tolua_Cocos2d_CCObject_retain00);
   tolua_function(tolua_S,"isSingleRefrence",tolua_Cocos2d_CCObject_isSingleRefrence00);
   tolua_function(tolua_S,"retainCount",tolua_Cocos2d_CCObject_retainCount00);
   tolua_function(tolua_S,"isEqual",tolua_Cocos2d_CCObject_isEqual00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"_ccArray","_ccArray","",NULL);
  tolua_beginmodule(tolua_S,"_ccArray");
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"CCParallaxNode","CCParallaxNode","CCNode",NULL);
  tolua_beginmodule(tolua_S,"CCParallaxNode");
   tolua_function(tolua_S,"getParallaxArray",tolua_Cocos2d_CCParallaxNode_getParallaxArray00);
   tolua_function(tolua_S,"setParallaxArray",tolua_Cocos2d_CCParallaxNode_setParallaxArray00);
   tolua_function(tolua_S,"addChild",tolua_Cocos2d_CCParallaxNode_addChild00);
   tolua_function(tolua_S,"addChild",tolua_Cocos2d_CCParallaxNode_addChild01);
   tolua_function(tolua_S,"removeChild",tolua_Cocos2d_CCParallaxNode_removeChild00);
   tolua_function(tolua_S,"removeAllChildrenWithCleanup",tolua_Cocos2d_CCParallaxNode_removeAllChildrenWithCleanup00);
   tolua_function(tolua_S,"visit",tolua_Cocos2d_CCParallaxNode_visit00);
   tolua_function(tolua_S,"getParallaxArray",tolua_Cocos2d_CCParallaxNode_getParallaxArray01);
   tolua_function(tolua_S,"setParallaxArray",tolua_Cocos2d_CCParallaxNode_setParallaxArray01);
   tolua_function(tolua_S,"node",tolua_Cocos2d_CCParallaxNode_node00);
  tolua_endmodule(tolua_S);
  tolua_function(tolua_S,"ccpNeg",tolua_Cocos2d_ccpNeg00);
  tolua_function(tolua_S,"ccpAdd",tolua_Cocos2d_ccpAdd00);
  tolua_function(tolua_S,"ccpSub",tolua_Cocos2d_ccpSub00);
  tolua_function(tolua_S,"ccpMult",tolua_Cocos2d_ccpMult00);
  tolua_function(tolua_S,"ccpMidpoint",tolua_Cocos2d_ccpMidpoint00);
  tolua_function(tolua_S,"ccpDot",tolua_Cocos2d_ccpDot00);
  tolua_function(tolua_S,"ccpCross",tolua_Cocos2d_ccpCross00);
  tolua_function(tolua_S,"ccpPerp",tolua_Cocos2d_ccpPerp00);
  tolua_function(tolua_S,"ccpRPerp",tolua_Cocos2d_ccpRPerp00);
  tolua_function(tolua_S,"ccpProject",tolua_Cocos2d_ccpProject00);
  tolua_function(tolua_S,"ccpRotate",tolua_Cocos2d_ccpRotate00);
  tolua_function(tolua_S,"ccpUnrotate",tolua_Cocos2d_ccpUnrotate00);
  tolua_function(tolua_S,"ccpLengthSQ",tolua_Cocos2d_ccpLengthSQ00);
  tolua_function(tolua_S,"ccpLength",tolua_Cocos2d_ccpLength00);
  tolua_function(tolua_S,"ccpDistance",tolua_Cocos2d_ccpDistance00);
  tolua_function(tolua_S,"ccpNormalize",tolua_Cocos2d_ccpNormalize00);
  tolua_function(tolua_S,"ccpForAngle",tolua_Cocos2d_ccpForAngle00);
  tolua_function(tolua_S,"ccpToAngle",tolua_Cocos2d_ccpToAngle00);
  tolua_function(tolua_S,"clampf",tolua_Cocos2d_clampf00);
  tolua_function(tolua_S,"ccpClamp",tolua_Cocos2d_ccpClamp00);
  tolua_function(tolua_S,"ccpFromSize",tolua_Cocos2d_ccpFromSize00);
  tolua_function(tolua_S,"ccpLerp",tolua_Cocos2d_ccpLerp00);
  tolua_function(tolua_S,"ccpFuzzyEqual",tolua_Cocos2d_ccpFuzzyEqual00);
  tolua_function(tolua_S,"ccpCompMult",tolua_Cocos2d_ccpCompMult00);
  tolua_function(tolua_S,"ccpAngleSigned",tolua_Cocos2d_ccpAngleSigned00);
  tolua_function(tolua_S,"ccpAngle",tolua_Cocos2d_ccpAngle00);
  tolua_function(tolua_S,"ccpRotateByAngle",tolua_Cocos2d_ccpRotateByAngle00);
  tolua_function(tolua_S,"ccpLineIntersect",tolua_Cocos2d_ccpLineIntersect00);
  tolua_function(tolua_S,"ccpSegmentIntersect",tolua_Cocos2d_ccpSegmentIntersect00);
  tolua_function(tolua_S,"ccpIntersectPoint",tolua_Cocos2d_ccpIntersectPoint00);
  tolua_cclass(tolua_S,"CCScene","CCScene","CCNode",NULL);
  tolua_beginmodule(tolua_S,"CCScene");
   tolua_function(tolua_S,"node",tolua_Cocos2d_CCScene_node00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"CCSprite","CCSprite","CCNode",NULL);
  tolua_beginmodule(tolua_S,"CCSprite");
   tolua_function(tolua_S,"setDirty",tolua_Cocos2d_CCSprite_setDirty00);
   tolua_function(tolua_S,"isDirty",tolua_Cocos2d_CCSprite_isDirty00);
   tolua_function(tolua_S,"getQuad",tolua_Cocos2d_CCSprite_getQuad00);
   tolua_function(tolua_S,"getTextureRect",tolua_Cocos2d_CCSprite_getTextureRect00);
   tolua_function(tolua_S,"isTextureRectRotated",tolua_Cocos2d_CCSprite_isTextureRectRotated00);
   tolua_function(tolua_S,"setAtlasIndex",tolua_Cocos2d_CCSprite_setAtlasIndex00);
   tolua_function(tolua_S,"getAtlasIndex",tolua_Cocos2d_CCSprite_getAtlasIndex00);
   tolua_function(tolua_S,"setTextureAtlas",tolua_Cocos2d_CCSprite_setTextureAtlas00);
   tolua_function(tolua_S,"getTextureAtlas",tolua_Cocos2d_CCSprite_getTextureAtlas00);
   tolua_function(tolua_S,"setBlendFunc",tolua_Cocos2d_CCSprite_setBlendFunc00);
   tolua_function(tolua_S,"getBlendFunc",tolua_Cocos2d_CCSprite_getBlendFunc00);
   tolua_function(tolua_S,"setDirtyRecursively",tolua_Cocos2d_CCSprite_setDirtyRecursively00);
   tolua_function(tolua_S,"setIsRelativeAnchorPoint",tolua_Cocos2d_CCSprite_setIsRelativeAnchorPoint00);
   tolua_function(tolua_S,"setFlipX",tolua_Cocos2d_CCSprite_setFlipX00);
   tolua_function(tolua_S,"setFlipY",tolua_Cocos2d_CCSprite_setFlipY00);
   tolua_function(tolua_S,"isFlipX",tolua_Cocos2d_CCSprite_isFlipX00);
   tolua_function(tolua_S,"isFlipY",tolua_Cocos2d_CCSprite_isFlipY00);
   tolua_function(tolua_S,"updateColor",tolua_Cocos2d_CCSprite_updateColor00);
   tolua_function(tolua_S,"setOpacity",tolua_Cocos2d_CCSprite_setOpacity00);
   tolua_function(tolua_S,"getOpacity",tolua_Cocos2d_CCSprite_getOpacity00);
   tolua_variable(tolua_S,"opacity",tolua_get_CCSprite_opacity,tolua_set_CCSprite_opacity);
   tolua_function(tolua_S,"setColor",tolua_Cocos2d_CCSprite_setColor00);
   tolua_function(tolua_S,"getColor",tolua_Cocos2d_CCSprite_getColor00);
   tolua_function(tolua_S,"setIsOpacityModifyRGB",tolua_Cocos2d_CCSprite_setIsOpacityModifyRGB00);
   tolua_function(tolua_S,"getIsOpacityModifyRGB",tolua_Cocos2d_CCSprite_getIsOpacityModifyRGB00);
   tolua_function(tolua_S,"setTexture",tolua_Cocos2d_CCSprite_setTexture00);
   tolua_function(tolua_S,"getTexture",tolua_Cocos2d_CCSprite_getTexture00);
   tolua_function(tolua_S,"updateTransform",tolua_Cocos2d_CCSprite_updateTransform00);
   tolua_function(tolua_S,"setTextureRect",tolua_Cocos2d_CCSprite_setTextureRect00);
   tolua_function(tolua_S,"setDisplayFrame",tolua_Cocos2d_CCSprite_setDisplayFrame00);
   tolua_function(tolua_S,"isFrameDisplayed",tolua_Cocos2d_CCSprite_isFrameDisplayed00);
   tolua_function(tolua_S,"setDisplayFrameWithAnimationName",tolua_Cocos2d_CCSprite_setDisplayFrameWithAnimationName00);
   tolua_function(tolua_S,"spriteWithTexture",tolua_Cocos2d_CCSprite_spriteWithTexture00);
   tolua_function(tolua_S,"spriteWithTexture",tolua_Cocos2d_CCSprite_spriteWithTexture01);
   tolua_function(tolua_S,"spriteWithTexture",tolua_Cocos2d_CCSprite_spriteWithTexture02);
   tolua_function(tolua_S,"spriteWithSpriteFrame",tolua_Cocos2d_CCSprite_spriteWithSpriteFrame00);
   tolua_function(tolua_S,"spriteWithSpriteFrameName",tolua_Cocos2d_CCSprite_spriteWithSpriteFrameName00);
   tolua_function(tolua_S,"spriteWithFile",tolua_Cocos2d_CCSprite_spriteWithFile00);
   tolua_function(tolua_S,"spriteWithFile",tolua_Cocos2d_CCSprite_spriteWithFile01);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"CCSpriteFrame","CCSpriteFrame","CCObject",NULL);
  tolua_beginmodule(tolua_S,"CCSpriteFrame");
   tolua_function(tolua_S,"getRectInPixels",tolua_Cocos2d_CCSpriteFrame_getRectInPixels00);
   tolua_function(tolua_S,"setRectInPixels",tolua_Cocos2d_CCSpriteFrame_setRectInPixels00);
   tolua_function(tolua_S,"isRotated",tolua_Cocos2d_CCSpriteFrame_isRotated00);
   tolua_function(tolua_S,"setRotated",tolua_Cocos2d_CCSpriteFrame_setRotated00);
   tolua_function(tolua_S,"getRect",tolua_Cocos2d_CCSpriteFrame_getRect00);
   tolua_function(tolua_S,"setRect",tolua_Cocos2d_CCSpriteFrame_setRect00);
   tolua_function(tolua_S,"getOffsetInPixels",tolua_Cocos2d_CCSpriteFrame_getOffsetInPixels00);
   tolua_function(tolua_S,"setOffsetInPixels",tolua_Cocos2d_CCSpriteFrame_setOffsetInPixels00);
   tolua_function(tolua_S,"getOriginalSizeInPixels",tolua_Cocos2d_CCSpriteFrame_getOriginalSizeInPixels00);
   tolua_function(tolua_S,"setOriginalSizeInPixels",tolua_Cocos2d_CCSpriteFrame_setOriginalSizeInPixels00);
   tolua_function(tolua_S,"getTexture",tolua_Cocos2d_CCSpriteFrame_getTexture00);
   tolua_function(tolua_S,"setTexture",tolua_Cocos2d_CCSpriteFrame_setTexture00);
   tolua_function(tolua_S,"frameWithTexture",tolua_Cocos2d_CCSpriteFrame_frameWithTexture00);
   tolua_function(tolua_S,"frameWithTexture",tolua_Cocos2d_CCSpriteFrame_frameWithTexture01);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"CCSpriteFrameCache","CCSpriteFrameCache","CCObject",NULL);
  tolua_beginmodule(tolua_S,"CCSpriteFrameCache");
   tolua_function(tolua_S,"addSpriteFramesWithFile",tolua_Cocos2d_CCSpriteFrameCache_addSpriteFramesWithFile00);
   tolua_function(tolua_S,"addSpriteFramesWithFile",tolua_Cocos2d_CCSpriteFrameCache_addSpriteFramesWithFile01);
   tolua_function(tolua_S,"addSpriteFramesWithFile",tolua_Cocos2d_CCSpriteFrameCache_addSpriteFramesWithFile02);
   tolua_function(tolua_S,"addSpriteFrame",tolua_Cocos2d_CCSpriteFrameCache_addSpriteFrame00);
   tolua_function(tolua_S,"removeSpriteFrames",tolua_Cocos2d_CCSpriteFrameCache_removeSpriteFrames00);
   tolua_function(tolua_S,"removeUnusedSpriteFrames",tolua_Cocos2d_CCSpriteFrameCache_removeUnusedSpriteFrames00);
   tolua_function(tolua_S,"removeSpriteFrameByName",tolua_Cocos2d_CCSpriteFrameCache_removeSpriteFrameByName00);
   tolua_function(tolua_S,"removeSpriteFramesFromFile",tolua_Cocos2d_CCSpriteFrameCache_removeSpriteFramesFromFile00);
   tolua_function(tolua_S,"removeSpriteFramesFromTexture",tolua_Cocos2d_CCSpriteFrameCache_removeSpriteFramesFromTexture00);
   tolua_function(tolua_S,"spriteFrameByName",tolua_Cocos2d_CCSpriteFrameCache_spriteFrameByName00);
   tolua_function(tolua_S,"sharedSpriteFrameCache",tolua_Cocos2d_CCSpriteFrameCache_sharedSpriteFrameCache00);
   tolua_function(tolua_S,"purgeSharedSpriteFrameCache",tolua_Cocos2d_CCSpriteFrameCache_purgeSharedSpriteFrameCache00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CCString","CCString","CCObject",tolua_collect_CCString);
  #else
  tolua_cclass(tolua_S,"CCString","CCString","CCObject",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CCString");
   tolua_function(tolua_S,"new",tolua_Cocos2d_CCString_new00);
   tolua_function(tolua_S,"new_local",tolua_Cocos2d_CCString_new00_local);
   tolua_function(tolua_S,".call",tolua_Cocos2d_CCString_new00_local);
   tolua_function(tolua_S,"new",tolua_Cocos2d_CCString_new01);
   tolua_function(tolua_S,"new_local",tolua_Cocos2d_CCString_new01_local);
   tolua_function(tolua_S,".call",tolua_Cocos2d_CCString_new01_local);
   tolua_function(tolua_S,"delete",tolua_Cocos2d_CCString_delete00);
   tolua_function(tolua_S,"toInt",tolua_Cocos2d_CCString_toInt00);
   tolua_function(tolua_S,"toUInt",tolua_Cocos2d_CCString_toUInt00);
   tolua_function(tolua_S,"toFloat",tolua_Cocos2d_CCString_toFloat00);
   tolua_function(tolua_S,"isEmpty",tolua_Cocos2d_CCString_isEmpty00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"CCTextFieldTTF","CCTextFieldTTF","CCLabelTTF",NULL);
  tolua_beginmodule(tolua_S,"CCTextFieldTTF");
   tolua_function(tolua_S,"attachWithIME",tolua_Cocos2d_CCTextFieldTTF_attachWithIME00);
   tolua_function(tolua_S,"detachWithIME",tolua_Cocos2d_CCTextFieldTTF_detachWithIME00);
   tolua_function(tolua_S,"getCharCount",tolua_Cocos2d_CCTextFieldTTF_getCharCount00);
   tolua_function(tolua_S,"setColorSpaceHolder",tolua_Cocos2d_CCTextFieldTTF_setColorSpaceHolder00);
   tolua_function(tolua_S,"getColorSpaceHolder",tolua_Cocos2d_CCTextFieldTTF_getColorSpaceHolder00);
   tolua_function(tolua_S,"setString",tolua_Cocos2d_CCTextFieldTTF_setString00);
   tolua_function(tolua_S,"getString",tolua_Cocos2d_CCTextFieldTTF_getString00);
   tolua_function(tolua_S,"setPlaceHolder",tolua_Cocos2d_CCTextFieldTTF_setPlaceHolder00);
   tolua_function(tolua_S,"getPlaceHolder",tolua_Cocos2d_CCTextFieldTTF_getPlaceHolder00);
   tolua_function(tolua_S,"textFieldWithPlaceHolder",tolua_Cocos2d_CCTextFieldTTF_textFieldWithPlaceHolder00);
   tolua_function(tolua_S,"textFieldWithPlaceHolder",tolua_Cocos2d_CCTextFieldTTF_textFieldWithPlaceHolder01);
  tolua_endmodule(tolua_S);
  tolua_constant(tolua_S,"kCCTexture2DPixelFormat_Automatic",kCCTexture2DPixelFormat_Automatic);
  tolua_constant(tolua_S,"kCCTexture2DPixelFormat_RGBA8888",kCCTexture2DPixelFormat_RGBA8888);
  tolua_constant(tolua_S,"kCCTexture2DPixelFormat_RGB888",kCCTexture2DPixelFormat_RGB888);
  tolua_constant(tolua_S,"kCCTexture2DPixelFormat_RGB565",kCCTexture2DPixelFormat_RGB565);
  tolua_constant(tolua_S,"kCCTexture2DPixelFormat_A8",kCCTexture2DPixelFormat_A8);
  tolua_constant(tolua_S,"kCCTexture2DPixelFormat_I8",kCCTexture2DPixelFormat_I8);
  tolua_constant(tolua_S,"kCCTexture2DPixelFormat_AI88",kCCTexture2DPixelFormat_AI88);
  tolua_constant(tolua_S,"kCCTexture2DPixelFormat_RGBA4444",kCCTexture2DPixelFormat_RGBA4444);
  tolua_constant(tolua_S,"kCCTexture2DPixelFormat_RGB5A1",kCCTexture2DPixelFormat_RGB5A1);
  tolua_constant(tolua_S,"kCCTexture2DPixelFormat_PVRTC4",kCCTexture2DPixelFormat_PVRTC4);
  tolua_constant(tolua_S,"kCCTexture2DPixelFormat_PVRTC2",kCCTexture2DPixelFormat_PVRTC2);
  tolua_constant(tolua_S,"kCCTexture2DPixelFormat_Default",kCCTexture2DPixelFormat_Default);
  tolua_constant(tolua_S,"kTexture2DPixelFormat_Automatic",kTexture2DPixelFormat_Automatic);
  tolua_constant(tolua_S,"kTexture2DPixelFormat_RGBA8888",kTexture2DPixelFormat_RGBA8888);
  tolua_constant(tolua_S,"kTexture2DPixelFormat_RGB888",kTexture2DPixelFormat_RGB888);
  tolua_constant(tolua_S,"kTexture2DPixelFormat_RGB565",kTexture2DPixelFormat_RGB565);
  tolua_constant(tolua_S,"kTexture2DPixelFormat_A8",kTexture2DPixelFormat_A8);
  tolua_constant(tolua_S,"kTexture2DPixelFormat_RGBA4444",kTexture2DPixelFormat_RGBA4444);
  tolua_constant(tolua_S,"kTexture2DPixelFormat_RGB5A1",kTexture2DPixelFormat_RGB5A1);
  tolua_constant(tolua_S,"kTexture2DPixelFormat_Default",kTexture2DPixelFormat_Default);
  tolua_cclass(tolua_S,"CCTexture2D","CCTexture2D","CCObject",NULL);
  tolua_beginmodule(tolua_S,"CCTexture2D");
   tolua_function(tolua_S,"getPixelFormat",tolua_Cocos2d_CCTexture2D_getPixelFormat00);
   tolua_function(tolua_S,"getPixelsWide",tolua_Cocos2d_CCTexture2D_getPixelsWide00);
   tolua_function(tolua_S,"getPixelsHigh",tolua_Cocos2d_CCTexture2D_getPixelsHigh00);
   tolua_function(tolua_S,"getName",tolua_Cocos2d_CCTexture2D_getName00);
   tolua_function(tolua_S,"getContentSizeInPixels",tolua_Cocos2d_CCTexture2D_getContentSizeInPixels00);
   tolua_function(tolua_S,"setMaxS",tolua_Cocos2d_CCTexture2D_setMaxS00);
   tolua_function(tolua_S,"getMaxS",tolua_Cocos2d_CCTexture2D_getMaxS00);
   tolua_function(tolua_S,"getMaxT",tolua_Cocos2d_CCTexture2D_getMaxT00);
   tolua_function(tolua_S,"setMaxT",tolua_Cocos2d_CCTexture2D_setMaxT00);
   tolua_function(tolua_S,"getHasPremultipliedAlpha",tolua_Cocos2d_CCTexture2D_getHasPremultipliedAlpha00);
   tolua_function(tolua_S,"drawAtPoint",tolua_Cocos2d_CCTexture2D_drawAtPoint00);
   tolua_function(tolua_S,"drawInRect",tolua_Cocos2d_CCTexture2D_drawInRect00);
   tolua_function(tolua_S,"getContentSize",tolua_Cocos2d_CCTexture2D_getContentSize00);
   tolua_function(tolua_S,"setTexParameters",tolua_Cocos2d_CCTexture2D_setTexParameters00);
   tolua_function(tolua_S,"setAntiAliasTexParameters",tolua_Cocos2d_CCTexture2D_setAntiAliasTexParameters00);
   tolua_function(tolua_S,"setAliasTexParameters",tolua_Cocos2d_CCTexture2D_setAliasTexParameters00);
   tolua_function(tolua_S,"generateMipmap",tolua_Cocos2d_CCTexture2D_generateMipmap00);
   tolua_function(tolua_S,"bitsPerPixelForFormat",tolua_Cocos2d_CCTexture2D_bitsPerPixelForFormat00);
   tolua_function(tolua_S,"setDefaultAlphaPixelFormat",tolua_Cocos2d_CCTexture2D_setDefaultAlphaPixelFormat00);
   tolua_function(tolua_S,"defaultAlphaPixelFormat",tolua_Cocos2d_CCTexture2D_defaultAlphaPixelFormat00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"CCTextureAtlas","CCTextureAtlas","CCObject",NULL);
  tolua_beginmodule(tolua_S,"CCTextureAtlas");
   tolua_function(tolua_S,"getTotalQuads",tolua_Cocos2d_CCTextureAtlas_getTotalQuads00);
   tolua_function(tolua_S,"getCapacity",tolua_Cocos2d_CCTextureAtlas_getCapacity00);
   tolua_function(tolua_S,"setTexture",tolua_Cocos2d_CCTextureAtlas_setTexture00);
   tolua_function(tolua_S,"getTexture",tolua_Cocos2d_CCTextureAtlas_getTexture00);
   tolua_function(tolua_S,"setQuads",tolua_Cocos2d_CCTextureAtlas_setQuads00);
   tolua_function(tolua_S,"getQuads",tolua_Cocos2d_CCTextureAtlas_getQuads00);
   tolua_function(tolua_S,"updateQuad",tolua_Cocos2d_CCTextureAtlas_updateQuad00);
   tolua_function(tolua_S,"insertQuad",tolua_Cocos2d_CCTextureAtlas_insertQuad00);
   tolua_function(tolua_S,"insertQuadFromIndex",tolua_Cocos2d_CCTextureAtlas_insertQuadFromIndex00);
   tolua_function(tolua_S,"removeQuadAtIndex",tolua_Cocos2d_CCTextureAtlas_removeQuadAtIndex00);
   tolua_function(tolua_S,"removeAllQuads",tolua_Cocos2d_CCTextureAtlas_removeAllQuads00);
   tolua_function(tolua_S,"resizeCapacity",tolua_Cocos2d_CCTextureAtlas_resizeCapacity00);
   tolua_function(tolua_S,"drawNumberOfQuads",tolua_Cocos2d_CCTextureAtlas_drawNumberOfQuads00);
   tolua_function(tolua_S,"drawNumberOfQuads",tolua_Cocos2d_CCTextureAtlas_drawNumberOfQuads01);
   tolua_function(tolua_S,"drawQuads",tolua_Cocos2d_CCTextureAtlas_drawQuads00);
   tolua_function(tolua_S,"textureAtlasWithFile",tolua_Cocos2d_CCTextureAtlas_textureAtlasWithFile00);
   tolua_function(tolua_S,"textureAtlasWithTexture",tolua_Cocos2d_CCTextureAtlas_textureAtlasWithTexture00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"CCTextureCache","CCTextureCache","CCObject",NULL);
  tolua_beginmodule(tolua_S,"CCTextureCache");
   tolua_function(tolua_S,"addImage",tolua_Cocos2d_CCTextureCache_addImage00);
   tolua_function(tolua_S,"addUIImage",tolua_Cocos2d_CCTextureCache_addUIImage00);
   tolua_function(tolua_S,"textureForKey",tolua_Cocos2d_CCTextureCache_textureForKey00);
   tolua_function(tolua_S,"removeAllTextures",tolua_Cocos2d_CCTextureCache_removeAllTextures00);
   tolua_function(tolua_S,"removeUnusedTextures",tolua_Cocos2d_CCTextureCache_removeUnusedTextures00);
   tolua_function(tolua_S,"removeTexture",tolua_Cocos2d_CCTextureCache_removeTexture00);
   tolua_function(tolua_S,"removeTextureForKey",tolua_Cocos2d_CCTextureCache_removeTextureForKey00);
   tolua_function(tolua_S,"dumpCachedTextureInfo",tolua_Cocos2d_CCTextureCache_dumpCachedTextureInfo00);
   tolua_function(tolua_S,"sharedTextureCache",tolua_Cocos2d_CCTextureCache_sharedTextureCache00);
   tolua_function(tolua_S,"reloadAllTextures",tolua_Cocos2d_CCTextureCache_reloadAllTextures00);
   tolua_function(tolua_S,"purgeSharedTextureCache",tolua_Cocos2d_CCTextureCache_purgeSharedTextureCache00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"sImageTGA","sImageTGA","",NULL);
  tolua_beginmodule(tolua_S,"sImageTGA");
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"CCTileMapAtlas","CCTileMapAtlas","CCAtlasNode",NULL);
  tolua_beginmodule(tolua_S,"CCTileMapAtlas");
   tolua_function(tolua_S,"getTGAInfo",tolua_Cocos2d_CCTileMapAtlas_getTGAInfo00);
   tolua_function(tolua_S,"setTGAInfo",tolua_Cocos2d_CCTileMapAtlas_setTGAInfo00);
   tolua_function(tolua_S,"setTile",tolua_Cocos2d_CCTileMapAtlas_setTile00);
   tolua_function(tolua_S,"releaseMap",tolua_Cocos2d_CCTileMapAtlas_releaseMap00);
   tolua_function(tolua_S,"tileMapAtlasWithTileFile",tolua_Cocos2d_CCTileMapAtlas_tileMapAtlasWithTileFile00);
  tolua_endmodule(tolua_S);
  tolua_constant(tolua_S,"kOrientationLeftOver",kOrientationLeftOver);
  tolua_constant(tolua_S,"kOrientationRightOver",kOrientationRightOver);
  tolua_constant(tolua_S,"kOrientationUpOver",kOrientationUpOver);
  tolua_constant(tolua_S,"kOrientationDownOver",kOrientationDownOver);
  tolua_cclass(tolua_S,"CCTransitionSceneOriented","CCTransitionSceneOriented","CCScene",NULL);
  tolua_beginmodule(tolua_S,"CCTransitionSceneOriented");
   tolua_function(tolua_S,"transitionWithDuration",tolua_Cocos2d_CCTransitionSceneOriented_transitionWithDuration00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"CCTransitionRotoZoom","CCTransitionRotoZoom","CCScene",NULL);
  tolua_beginmodule(tolua_S,"CCTransitionRotoZoom");
   tolua_function(tolua_S,"transitionWithDuration",tolua_Cocos2d_CCTransitionRotoZoom_transitionWithDuration00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"CCTransitionJumpZoom","CCTransitionJumpZoom","CCScene",NULL);
  tolua_beginmodule(tolua_S,"CCTransitionJumpZoom");
   tolua_function(tolua_S,"transitionWithDuration",tolua_Cocos2d_CCTransitionJumpZoom_transitionWithDuration00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"CCTransitionMoveInL","CCTransitionMoveInL","CCScene",NULL);
  tolua_beginmodule(tolua_S,"CCTransitionMoveInL");
   tolua_function(tolua_S,"transitionWithDuration",tolua_Cocos2d_CCTransitionMoveInL_transitionWithDuration00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"CCTransitionMoveInR","CCTransitionMoveInR","CCScene",NULL);
  tolua_beginmodule(tolua_S,"CCTransitionMoveInR");
   tolua_function(tolua_S,"transitionWithDuration",tolua_Cocos2d_CCTransitionMoveInR_transitionWithDuration00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"CCTransitionMoveInT","CCTransitionMoveInT","CCScene",NULL);
  tolua_beginmodule(tolua_S,"CCTransitionMoveInT");
   tolua_function(tolua_S,"transitionWithDuration",tolua_Cocos2d_CCTransitionMoveInT_transitionWithDuration00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"CCTransitionMoveInB","CCTransitionMoveInB","CCScene",NULL);
  tolua_beginmodule(tolua_S,"CCTransitionMoveInB");
   tolua_function(tolua_S,"transitionWithDuration",tolua_Cocos2d_CCTransitionMoveInB_transitionWithDuration00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"CCTransitionSlideInL","CCTransitionSlideInL","CCScene",NULL);
  tolua_beginmodule(tolua_S,"CCTransitionSlideInL");
   tolua_function(tolua_S,"transitionWithDuration",tolua_Cocos2d_CCTransitionSlideInL_transitionWithDuration00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"CCTransitionSlideInR","CCTransitionSlideInR","CCScene",NULL);
  tolua_beginmodule(tolua_S,"CCTransitionSlideInR");
   tolua_function(tolua_S,"transitionWithDuration",tolua_Cocos2d_CCTransitionSlideInR_transitionWithDuration00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"CCTransitionSlideInB","CCTransitionSlideInB","CCScene",NULL);
  tolua_beginmodule(tolua_S,"CCTransitionSlideInB");
   tolua_function(tolua_S,"transitionWithDuration",tolua_Cocos2d_CCTransitionSlideInB_transitionWithDuration00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"CCTransitionSlideInT","CCTransitionSlideInT","CCScene",NULL);
  tolua_beginmodule(tolua_S,"CCTransitionSlideInT");
   tolua_function(tolua_S,"transitionWithDuration",tolua_Cocos2d_CCTransitionSlideInT_transitionWithDuration00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"CCTransitionShrinkGrow","CCTransitionShrinkGrow","CCScene",NULL);
  tolua_beginmodule(tolua_S,"CCTransitionShrinkGrow");
   tolua_function(tolua_S,"transitionWithDuration",tolua_Cocos2d_CCTransitionShrinkGrow_transitionWithDuration00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"CCTransitionFlipX","CCTransitionFlipX","CCScene",NULL);
  tolua_beginmodule(tolua_S,"CCTransitionFlipX");
   tolua_function(tolua_S,"transitionWithDuration",tolua_Cocos2d_CCTransitionFlipX_transitionWithDuration00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"CCTransitionFlipY","CCTransitionFlipY","CCScene",NULL);
  tolua_beginmodule(tolua_S,"CCTransitionFlipY");
   tolua_function(tolua_S,"transitionWithDuration",tolua_Cocos2d_CCTransitionFlipY_transitionWithDuration00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"CCTransitionFlipAngular","CCTransitionFlipAngular","CCScene",NULL);
  tolua_beginmodule(tolua_S,"CCTransitionFlipAngular");
   tolua_function(tolua_S,"transitionWithDuration",tolua_Cocos2d_CCTransitionFlipAngular_transitionWithDuration00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"CCTransitionZoomFlipX","CCTransitionZoomFlipX","CCScene",NULL);
  tolua_beginmodule(tolua_S,"CCTransitionZoomFlipX");
   tolua_function(tolua_S,"transitionWithDuration",tolua_Cocos2d_CCTransitionZoomFlipX_transitionWithDuration00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"CCTransitionZoomFlipY","CCTransitionZoomFlipY","CCScene",NULL);
  tolua_beginmodule(tolua_S,"CCTransitionZoomFlipY");
   tolua_function(tolua_S,"transitionWithDuration",tolua_Cocos2d_CCTransitionZoomFlipY_transitionWithDuration00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"CCTransitionZoomFlipAngular","CCTransitionZoomFlipAngular","CCScene",NULL);
  tolua_beginmodule(tolua_S,"CCTransitionZoomFlipAngular");
   tolua_function(tolua_S,"transitionWithDuration",tolua_Cocos2d_CCTransitionZoomFlipAngular_transitionWithDuration00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"CCTransitionFade","CCTransitionFade","CCScene",NULL);
  tolua_beginmodule(tolua_S,"CCTransitionFade");
   tolua_function(tolua_S,"transitionWithDuration",tolua_Cocos2d_CCTransitionFade_transitionWithDuration00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"CCTransitionCrossFade","CCTransitionCrossFade","CCScene",NULL);
  tolua_beginmodule(tolua_S,"CCTransitionCrossFade");
   tolua_function(tolua_S,"transitionWithDuration",tolua_Cocos2d_CCTransitionCrossFade_transitionWithDuration00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"CCTransitionTurnOffTiles","CCTransitionTurnOffTiles","CCScene",NULL);
  tolua_beginmodule(tolua_S,"CCTransitionTurnOffTiles");
   tolua_function(tolua_S,"transitionWithDuration",tolua_Cocos2d_CCTransitionTurnOffTiles_transitionWithDuration00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"CCTransitionSplitCols","CCTransitionSplitCols","CCScene",NULL);
  tolua_beginmodule(tolua_S,"CCTransitionSplitCols");
   tolua_function(tolua_S,"transitionWithDuration",tolua_Cocos2d_CCTransitionSplitCols_transitionWithDuration00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"CCTransitionSplitRows","CCTransitionSplitRows","CCScene",NULL);
  tolua_beginmodule(tolua_S,"CCTransitionSplitRows");
   tolua_function(tolua_S,"transitionWithDuration",tolua_Cocos2d_CCTransitionSplitRows_transitionWithDuration00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"CCTransitionFadeTR","CCTransitionFadeTR","CCScene",NULL);
  tolua_beginmodule(tolua_S,"CCTransitionFadeTR");
   tolua_function(tolua_S,"transitionWithDuration",tolua_Cocos2d_CCTransitionFadeTR_transitionWithDuration00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"CCTransitionFadeBL","CCTransitionFadeBL","CCScene",NULL);
  tolua_beginmodule(tolua_S,"CCTransitionFadeBL");
   tolua_function(tolua_S,"transitionWithDuration",tolua_Cocos2d_CCTransitionFadeBL_transitionWithDuration00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"CCTransitionFadeUp","CCTransitionFadeUp","CCScene",NULL);
  tolua_beginmodule(tolua_S,"CCTransitionFadeUp");
   tolua_function(tolua_S,"transitionWithDuration",tolua_Cocos2d_CCTransitionFadeUp_transitionWithDuration00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"CCTransitionFadeDown","CCTransitionFadeDown","CCScene",NULL);
  tolua_beginmodule(tolua_S,"CCTransitionFadeDown");
   tolua_function(tolua_S,"transitionWithDuration",tolua_Cocos2d_CCTransitionFadeDown_transitionWithDuration00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"CCTransitionPageTurn","CCTransitionPageTurn","CCScene",NULL);
  tolua_beginmodule(tolua_S,"CCTransitionPageTurn");
   tolua_function(tolua_S,"actionWithSize",tolua_Cocos2d_CCTransitionPageTurn_actionWithSize00);
   tolua_function(tolua_S,"transitionWithDuration",tolua_Cocos2d_CCTransitionPageTurn_transitionWithDuration00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"ccColor3B","ccColor3B","",tolua_collect_ccColor3B);
  #else
  tolua_cclass(tolua_S,"ccColor3B","ccColor3B","",NULL);
  #endif
  tolua_beginmodule(tolua_S,"ccColor3B");
   tolua_variable(tolua_S,"r",tolua_get_ccColor3B_unsigned_r,tolua_set_ccColor3B_unsigned_r);
   tolua_variable(tolua_S,"g",tolua_get_ccColor3B_unsigned_g,tolua_set_ccColor3B_unsigned_g);
   tolua_variable(tolua_S,"b",tolua_get_ccColor3B_unsigned_b,tolua_set_ccColor3B_unsigned_b);
  tolua_endmodule(tolua_S);
  tolua_function(tolua_S,"ccc3",tolua_Cocos2d_ccc300);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"ccColor4B","ccColor4B","",tolua_collect_ccColor4B);
  #else
  tolua_cclass(tolua_S,"ccColor4B","ccColor4B","",NULL);
  #endif
  tolua_beginmodule(tolua_S,"ccColor4B");
   tolua_variable(tolua_S,"r",tolua_get_ccColor4B_unsigned_r,tolua_set_ccColor4B_unsigned_r);
   tolua_variable(tolua_S,"g",tolua_get_ccColor4B_unsigned_g,tolua_set_ccColor4B_unsigned_g);
   tolua_variable(tolua_S,"b",tolua_get_ccColor4B_unsigned_b,tolua_set_ccColor4B_unsigned_b);
   tolua_variable(tolua_S,"a",tolua_get_ccColor4B_unsigned_a,tolua_set_ccColor4B_unsigned_a);
  tolua_endmodule(tolua_S);
  tolua_function(tolua_S,"ccc4",tolua_Cocos2d_ccc400);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"ccColor4F","ccColor4F","",tolua_collect_ccColor4F);
  #else
  tolua_cclass(tolua_S,"ccColor4F","ccColor4F","",NULL);
  #endif
  tolua_beginmodule(tolua_S,"ccColor4F");
   tolua_variable(tolua_S,"r",tolua_get_ccColor4F_r,tolua_set_ccColor4F_r);
   tolua_variable(tolua_S,"g",tolua_get_ccColor4F_g,tolua_set_ccColor4F_g);
   tolua_variable(tolua_S,"b",tolua_get_ccColor4F_b,tolua_set_ccColor4F_b);
   tolua_variable(tolua_S,"a",tolua_get_ccColor4F_a,tolua_set_ccColor4F_a);
  tolua_endmodule(tolua_S);
  tolua_function(tolua_S,"ccc4FFromccc3B",tolua_Cocos2d_ccc4FFromccc3B00);
  tolua_function(tolua_S,"ccc4FFromccc4B",tolua_Cocos2d_ccc4FFromccc4B00);
  tolua_function(tolua_S,"ccc4FEqual",tolua_Cocos2d_ccc4FEqual00);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"ccVertex2F","ccVertex2F","",tolua_collect_ccVertex2F);
  #else
  tolua_cclass(tolua_S,"ccVertex2F","ccVertex2F","",NULL);
  #endif
  tolua_beginmodule(tolua_S,"ccVertex2F");
   tolua_variable(tolua_S,"x",tolua_get_ccVertex2F_x,tolua_set_ccVertex2F_x);
   tolua_variable(tolua_S,"y",tolua_get_ccVertex2F_y,tolua_set_ccVertex2F_y);
  tolua_endmodule(tolua_S);
  tolua_function(tolua_S,"vertex2",tolua_Cocos2d_vertex200);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"ccVertex3F","ccVertex3F","",tolua_collect_ccVertex3F);
  #else
  tolua_cclass(tolua_S,"ccVertex3F","ccVertex3F","",NULL);
  #endif
  tolua_beginmodule(tolua_S,"ccVertex3F");
   tolua_variable(tolua_S,"x",tolua_get_ccVertex3F_x,tolua_set_ccVertex3F_x);
   tolua_variable(tolua_S,"y",tolua_get_ccVertex3F_y,tolua_set_ccVertex3F_y);
   tolua_variable(tolua_S,"z",tolua_get_ccVertex3F_z,tolua_set_ccVertex3F_z);
  tolua_endmodule(tolua_S);
  tolua_function(tolua_S,"vertex3",tolua_Cocos2d_vertex300);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"ccTex2F","ccTex2F","",tolua_collect_ccTex2F);
  #else
  tolua_cclass(tolua_S,"ccTex2F","ccTex2F","",NULL);
  #endif
  tolua_beginmodule(tolua_S,"ccTex2F");
   tolua_variable(tolua_S,"u",tolua_get_ccTex2F_u,tolua_set_ccTex2F_u);
   tolua_variable(tolua_S,"v",tolua_get_ccTex2F_v,tolua_set_ccTex2F_v);
  tolua_endmodule(tolua_S);
  tolua_function(tolua_S,"tex2",tolua_Cocos2d_tex200);
  tolua_cclass(tolua_S,"ccPointSprite","ccPointSprite","",NULL);
  tolua_beginmodule(tolua_S,"ccPointSprite");
   tolua_variable(tolua_S,"pos",tolua_get_ccPointSprite_pos,tolua_set_ccPointSprite_pos);
   tolua_variable(tolua_S,"color",tolua_get_ccPointSprite_color,tolua_set_ccPointSprite_color);
   tolua_variable(tolua_S,"size",tolua_get_ccPointSprite_size,tolua_set_ccPointSprite_size);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"ccQuad2","ccQuad2","",NULL);
  tolua_beginmodule(tolua_S,"ccQuad2");
   tolua_variable(tolua_S,"tl",tolua_get_ccQuad2_tl,tolua_set_ccQuad2_tl);
   tolua_variable(tolua_S,"tr",tolua_get_ccQuad2_tr,tolua_set_ccQuad2_tr);
   tolua_variable(tolua_S,"bl",tolua_get_ccQuad2_bl,tolua_set_ccQuad2_bl);
   tolua_variable(tolua_S,"br",tolua_get_ccQuad2_br,tolua_set_ccQuad2_br);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"ccQuad3","ccQuad3","",NULL);
  tolua_beginmodule(tolua_S,"ccQuad3");
   tolua_variable(tolua_S,"bl",tolua_get_ccQuad3_bl,tolua_set_ccQuad3_bl);
   tolua_variable(tolua_S,"br",tolua_get_ccQuad3_br,tolua_set_ccQuad3_br);
   tolua_variable(tolua_S,"tl",tolua_get_ccQuad3_tl,tolua_set_ccQuad3_tl);
   tolua_variable(tolua_S,"tr",tolua_get_ccQuad3_tr,tolua_set_ccQuad3_tr);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"ccGridSize","ccGridSize","",tolua_collect_ccGridSize);
  #else
  tolua_cclass(tolua_S,"ccGridSize","ccGridSize","",NULL);
  #endif
  tolua_beginmodule(tolua_S,"ccGridSize");
   tolua_variable(tolua_S,"x",tolua_get_ccGridSize_x,tolua_set_ccGridSize_x);
   tolua_variable(tolua_S,"y",tolua_get_ccGridSize_y,tolua_set_ccGridSize_y);
  tolua_endmodule(tolua_S);
  tolua_function(tolua_S,"ccg",tolua_Cocos2d_ccg00);
  tolua_cclass(tolua_S,"ccV2F_C4B_T2F","ccV2F_C4B_T2F","",NULL);
  tolua_beginmodule(tolua_S,"ccV2F_C4B_T2F");
   tolua_variable(tolua_S,"vertices",tolua_get_ccV2F_C4B_T2F_vertices,tolua_set_ccV2F_C4B_T2F_vertices);
   tolua_variable(tolua_S,"colors",tolua_get_ccV2F_C4B_T2F_colors,tolua_set_ccV2F_C4B_T2F_colors);
   tolua_variable(tolua_S,"texCoords",tolua_get_ccV2F_C4B_T2F_texCoords,tolua_set_ccV2F_C4B_T2F_texCoords);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"ccV2F_C4F_T2F","ccV2F_C4F_T2F","",NULL);
  tolua_beginmodule(tolua_S,"ccV2F_C4F_T2F");
   tolua_variable(tolua_S,"vertices",tolua_get_ccV2F_C4F_T2F_vertices,tolua_set_ccV2F_C4F_T2F_vertices);
   tolua_variable(tolua_S,"colors",tolua_get_ccV2F_C4F_T2F_colors,tolua_set_ccV2F_C4F_T2F_colors);
   tolua_variable(tolua_S,"texCoords",tolua_get_ccV2F_C4F_T2F_texCoords,tolua_set_ccV2F_C4F_T2F_texCoords);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"ccV3F_C4B_T2F","ccV3F_C4B_T2F","",NULL);
  tolua_beginmodule(tolua_S,"ccV3F_C4B_T2F");
   tolua_variable(tolua_S,"vertices",tolua_get_ccV3F_C4B_T2F_vertices,tolua_set_ccV3F_C4B_T2F_vertices);
   tolua_variable(tolua_S,"colors",tolua_get_ccV3F_C4B_T2F_colors,tolua_set_ccV3F_C4B_T2F_colors);
   tolua_variable(tolua_S,"texCoords",tolua_get_ccV3F_C4B_T2F_texCoords,tolua_set_ccV3F_C4B_T2F_texCoords);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"ccV2F_C4B_T2F_Quad","ccV2F_C4B_T2F_Quad","",NULL);
  tolua_beginmodule(tolua_S,"ccV2F_C4B_T2F_Quad");
   tolua_variable(tolua_S,"bl",tolua_get_ccV2F_C4B_T2F_Quad_bl,tolua_set_ccV2F_C4B_T2F_Quad_bl);
   tolua_variable(tolua_S,"br",tolua_get_ccV2F_C4B_T2F_Quad_br,tolua_set_ccV2F_C4B_T2F_Quad_br);
   tolua_variable(tolua_S,"tl",tolua_get_ccV2F_C4B_T2F_Quad_tl,tolua_set_ccV2F_C4B_T2F_Quad_tl);
   tolua_variable(tolua_S,"tr",tolua_get_ccV2F_C4B_T2F_Quad_tr,tolua_set_ccV2F_C4B_T2F_Quad_tr);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"ccV3F_C4B_T2F_Quad","ccV3F_C4B_T2F_Quad","",tolua_collect_ccV3F_C4B_T2F_Quad);
  #else
  tolua_cclass(tolua_S,"ccV3F_C4B_T2F_Quad","ccV3F_C4B_T2F_Quad","",NULL);
  #endif
  tolua_beginmodule(tolua_S,"ccV3F_C4B_T2F_Quad");
   tolua_variable(tolua_S,"tl",tolua_get_ccV3F_C4B_T2F_Quad_tl,tolua_set_ccV3F_C4B_T2F_Quad_tl);
   tolua_variable(tolua_S,"bl",tolua_get_ccV3F_C4B_T2F_Quad_bl,tolua_set_ccV3F_C4B_T2F_Quad_bl);
   tolua_variable(tolua_S,"tr",tolua_get_ccV3F_C4B_T2F_Quad_tr,tolua_set_ccV3F_C4B_T2F_Quad_tr);
   tolua_variable(tolua_S,"br",tolua_get_ccV3F_C4B_T2F_Quad_br,tolua_set_ccV3F_C4B_T2F_Quad_br);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"ccV2F_C4F_T2F_Quad","ccV2F_C4F_T2F_Quad","",NULL);
  tolua_beginmodule(tolua_S,"ccV2F_C4F_T2F_Quad");
   tolua_variable(tolua_S,"bl",tolua_get_ccV2F_C4F_T2F_Quad_bl,tolua_set_ccV2F_C4F_T2F_Quad_bl);
   tolua_variable(tolua_S,"br",tolua_get_ccV2F_C4F_T2F_Quad_br,tolua_set_ccV2F_C4F_T2F_Quad_br);
   tolua_variable(tolua_S,"tl",tolua_get_ccV2F_C4F_T2F_Quad_tl,tolua_set_ccV2F_C4F_T2F_Quad_tl);
   tolua_variable(tolua_S,"tr",tolua_get_ccV2F_C4F_T2F_Quad_tr,tolua_set_ccV2F_C4F_T2F_Quad_tr);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"ccBlendFunc","ccBlendFunc","",tolua_collect_ccBlendFunc);
  #else
  tolua_cclass(tolua_S,"ccBlendFunc","ccBlendFunc","",NULL);
  #endif
  tolua_beginmodule(tolua_S,"ccBlendFunc");
   tolua_variable(tolua_S,"src",tolua_get_ccBlendFunc_src,tolua_set_ccBlendFunc_src);
   tolua_variable(tolua_S,"dst",tolua_get_ccBlendFunc_dst,tolua_set_ccBlendFunc_dst);
  tolua_endmodule(tolua_S);
  tolua_constant(tolua_S,"CCTextAlignmentLeft",CCTextAlignmentLeft);
  tolua_constant(tolua_S,"CCTextAlignmentCenter",CCTextAlignmentCenter);
  tolua_constant(tolua_S,"CCTextAlignmentRight",CCTextAlignmentRight);
  tolua_cclass(tolua_S,"CCUserDefault","CCUserDefault","",NULL);
  tolua_beginmodule(tolua_S,"CCUserDefault");
   tolua_function(tolua_S,"getBoolForKey",tolua_Cocos2d_CCUserDefault_getBoolForKey00);
   tolua_function(tolua_S,"getIntegerForKey",tolua_Cocos2d_CCUserDefault_getIntegerForKey00);
   tolua_function(tolua_S,"getFloatForKey",tolua_Cocos2d_CCUserDefault_getFloatForKey00);
   tolua_function(tolua_S,"getDoubleForKey",tolua_Cocos2d_CCUserDefault_getDoubleForKey00);
   tolua_function(tolua_S,"getStringForKey",tolua_Cocos2d_CCUserDefault_getStringForKey00);
   tolua_function(tolua_S,"setBoolForKey",tolua_Cocos2d_CCUserDefault_setBoolForKey00);
   tolua_function(tolua_S,"setIntegerForKey",tolua_Cocos2d_CCUserDefault_setIntegerForKey00);
   tolua_function(tolua_S,"setFloatForKey",tolua_Cocos2d_CCUserDefault_setFloatForKey00);
   tolua_function(tolua_S,"setDoubleForKey",tolua_Cocos2d_CCUserDefault_setDoubleForKey00);
   tolua_function(tolua_S,"setStringForKey",tolua_Cocos2d_CCUserDefault_setStringForKey00);
   tolua_function(tolua_S,"sharedUserDefault",tolua_Cocos2d_CCUserDefault_sharedUserDefault00);
   tolua_function(tolua_S,"purgeSharedUserDefault",tolua_Cocos2d_CCUserDefault_purgeSharedUserDefault00);
   tolua_function(tolua_S,"getXMLFilePath",tolua_Cocos2d_CCUserDefault_getXMLFilePath00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"SimpleAudioEngine","SimpleAudioEngine","",NULL);
  tolua_beginmodule(tolua_S,"SimpleAudioEngine");
   tolua_function(tolua_S,"sharedEngine",tolua_Cocos2d_SimpleAudioEngine_sharedEngine00);
   tolua_function(tolua_S,"setResource",tolua_Cocos2d_SimpleAudioEngine_setResource00);
   tolua_function(tolua_S,"preloadBackgroundMusic",tolua_Cocos2d_SimpleAudioEngine_preloadBackgroundMusic00);
   tolua_function(tolua_S,"playBackgroundMusic",tolua_Cocos2d_SimpleAudioEngine_playBackgroundMusic00);
   tolua_function(tolua_S,"stopBackgroundMusic",tolua_Cocos2d_SimpleAudioEngine_stopBackgroundMusic00);
   tolua_function(tolua_S,"pauseBackgroundMusic",tolua_Cocos2d_SimpleAudioEngine_pauseBackgroundMusic00);
   tolua_function(tolua_S,"resumeBackgroundMusic",tolua_Cocos2d_SimpleAudioEngine_resumeBackgroundMusic00);
   tolua_function(tolua_S,"rewindBackgroundMusic",tolua_Cocos2d_SimpleAudioEngine_rewindBackgroundMusic00);
   tolua_function(tolua_S,"willPlayBackgroundMusic",tolua_Cocos2d_SimpleAudioEngine_willPlayBackgroundMusic00);
   tolua_function(tolua_S,"isBackgroundMusicPlaying",tolua_Cocos2d_SimpleAudioEngine_isBackgroundMusicPlaying00);
   tolua_function(tolua_S,"getBackgroundMusicVolume",tolua_Cocos2d_SimpleAudioEngine_getBackgroundMusicVolume00);
   tolua_function(tolua_S,"setBackgroundMusicVolume",tolua_Cocos2d_SimpleAudioEngine_setBackgroundMusicVolume00);
   tolua_function(tolua_S,"getEffectsVolume",tolua_Cocos2d_SimpleAudioEngine_getEffectsVolume00);
   tolua_function(tolua_S,"setEffectsVolume",tolua_Cocos2d_SimpleAudioEngine_setEffectsVolume00);
   tolua_function(tolua_S,"playEffect",tolua_Cocos2d_SimpleAudioEngine_playEffect00);
   tolua_function(tolua_S,"stopEffect",tolua_Cocos2d_SimpleAudioEngine_stopEffect00);
   tolua_function(tolua_S,"preloadEffect",tolua_Cocos2d_SimpleAudioEngine_preloadEffect00);
   tolua_function(tolua_S,"unloadEffect",tolua_Cocos2d_SimpleAudioEngine_unloadEffect00);
  tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_Cocos2d (lua_State* tolua_S) {
 return tolua_Cocos2d_open(tolua_S);
};
#endif


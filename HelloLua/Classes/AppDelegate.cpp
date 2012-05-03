
#include "cocos2d.h"
#include "AppDelegate.h"
#include "SimpleAudioEngine.h"
#include "CCScriptSupport.h"
#include "CCLuaEngine.h"

#define IPAD        0

#if IPAD
#define CC_WIDTH    1024
#define CC_HEIGHT    768
#elif IPHONE_4
#define CC_WIDTH    960
#define CC_HEIGHT    640
#else
#define CC_WIDTH    480
#define CC_HEIGHT    320
#endif

USING_NS_CC;
using namespace CocosDenshion;

AppDelegate::AppDelegate()
{
    // fixed me
    //_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF|_CRTDBG_LEAK_CHECK_DF);
}

AppDelegate::~AppDelegate()
{
    // end simple audio engine here, or it may crashed on win32
    SimpleAudioEngine::sharedEngine()->end();
    //CCScriptEngineManager::purgeSharedManager();
}

bool AppDelegate::applicationDidFinishLaunching()
{
    // initialize director
    CCDirector *pDirector = CCDirector::sharedDirector();
    pDirector->setOpenGLView(&CCEGLView::sharedOpenGLView());

    // enable High Resource Mode(2x, such as iphone4) and maintains low resource on other devices.
    // pDirector->enableRetinaDisplay(true);

    // turn on display FPS
    pDirector->setDisplayStats(true);

    // pDirector->setDeviceOrientation(kCCDeviceOrientationLandscapeLeft);

    // set FPS. the default value is 1.0/60 if you don't call this
    pDirector->setAnimationInterval(1.0 / 60);

    // register lua engine
    CCScriptEngineProtocol* pEngine = CCLuaEngine::engine();
    CCScriptEngineManager::sharedManager()->setScriptEngine(pEngine);

#if (CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID)
    unsigned long size;
    char *pFileContent = (char*)CCFileUtils::getFileData("hello.lua", "r", &size);

    if (pFileContent)
    {
        // copy the file contents and add '\0' at the end, or the lua parser can not parse it
        char *pCodes = new char[size + 1];
        pCodes[size] = '\0';
        memcpy(pCodes, pFileContent, size);
        delete[] pFileContent;

        pEngine->executeString(pCodes);
        delete []pCodes;
    }
#endif

#if (CC_TARGET_PLATFORM == CC_PLATFORM_WIN32) || (CC_TARGET_PLATFORM == CC_PLATFORM_IOS) || (CC_TARGET_PLATFORM == CC_PLATFORM_MARMALADE)
    std::string path = CCFileUtils::fullPathFromRelativePath("hello.lua");
    pEngine->addSearchPath(path.substr(0, path.find_last_of("/")).c_str());
    pEngine->executeScriptFile(path.c_str());
#endif 

    return true;
}

// This function will be called when the app is inactive. When comes a phone call,it's be invoked too
void AppDelegate::applicationDidEnterBackground()
{
    CCDirector::sharedDirector()->pause();

    // if you use SimpleAudioEngine, it must be pause
    // SimpleAudioEngine::sharedEngine()->pauseBackgroundMusic();
}

// this function will be called when the app is active again
void AppDelegate::applicationWillEnterForeground()
{
    CCDirector::sharedDirector()->resume();
    
    // if you use SimpleAudioEngine, it must resume here
    // SimpleAudioEngine::sharedEngine()->resumeBackgroundMusic();
}

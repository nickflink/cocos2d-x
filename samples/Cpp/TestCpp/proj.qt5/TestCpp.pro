
include(../../../../cocos2dx/proj.qt5/common.pri)

TARGET = cocos2dx_TestCpp

INCLUDEPATH += ..
INCLUDEPATH += ../Classes

SOURCES += main.cpp
SOURCES += ../Classes/AccelerometerTest/AccelerometerTest.cpp \
	../Classes/ActionManagerTest/ActionManagerTest.cpp \
	../Classes/ActionsEaseTest/ActionsEaseTest.cpp \
	../Classes/ActionsProgressTest/ActionsProgressTest.cpp \
	../Classes/ActionsTest/ActionsTest.cpp \
	../Classes/Box2DTest/Box2dTest.cpp \
	../Classes/Box2DTestBed/Box2dView.cpp \
	../Classes/Box2DTestBed/GLES-Render.cpp \
	../Classes/Box2DTestBed/Test.cpp \
	../Classes/Box2DTestBed/TestEntries.cpp \
	../Classes/BugsTest/Bug-1159.cpp \
	../Classes/BugsTest/Bug-1174.cpp \
	../Classes/BugsTest/Bug-350.cpp \
	../Classes/BugsTest/Bug-422.cpp \
	../Classes/BugsTest/Bug-458/Bug-458.cpp \
	../Classes/BugsTest/Bug-458/QuestionContainerSprite.cpp \
	../Classes/BugsTest/Bug-624.cpp \
	../Classes/BugsTest/Bug-886.cpp \
	../Classes/BugsTest/Bug-899.cpp \
	../Classes/BugsTest/Bug-914.cpp \
	../Classes/BugsTest/BugsTest.cpp \
	../Classes/ChipmunkTest/ChipmunkTest.cpp \
	../Classes/ClickAndMoveTest/ClickAndMoveTest.cpp \
	../Classes/ClippingNodeTest/ClippingNodeTest.cpp \
	../Classes/CocosDenshionTest/CocosDenshionTest.cpp \
	../Classes/CurlTest/CurlTest.cpp \
	../Classes/CurrentLanguageTest/CurrentLanguageTest.cpp \
	../Classes/DrawPrimitivesTest/DrawPrimitivesTest.cpp \
	../Classes/EffectsAdvancedTest/EffectsAdvancedTest.cpp \
	../Classes/EffectsTest/EffectsTest.cpp \
	../Classes/ExtensionsTest/CocosBuilderTest/ButtonTest/ButtonTestLayer.cpp \
	../Classes/ExtensionsTest/CocosBuilderTest/CocosBuilderTest.cpp \
	../Classes/ExtensionsTest/CocosBuilderTest/HelloCocosBuilder/HelloCocosBuilderLayer.cpp \
	../Classes/ExtensionsTest/CocosBuilderTest/AnimationsTest/AnimationsTestLayer.cpp \
	../Classes/ExtensionsTest/CocosBuilderTest/MenuTest/MenuTestLayer.cpp \
	../Classes/ExtensionsTest/CocosBuilderTest/TestHeader/TestHeaderLayer.cpp \
	../Classes/ExtensionsTest/CocosBuilderTest/TimelineCallbackTest/TimelineCallbackTestLayer.cpp \
	../Classes/ExtensionsTest/ControlExtensionTest/CCControlButtonTest/CCControlButtonTest.cpp \
	../Classes/ExtensionsTest/ControlExtensionTest/CCControlColourPicker/CCControlColourPickerTest.cpp \
	../Classes/ExtensionsTest/ControlExtensionTest/CCControlScene.cpp \
	../Classes/ExtensionsTest/ControlExtensionTest/CCControlSceneManager.cpp \
	../Classes/ExtensionsTest/ControlExtensionTest/CCControlSliderTest/CCControlSliderTest.cpp \
	../Classes/ExtensionsTest/ControlExtensionTest/CCControlSwitchTest/CCControlSwitchTest.cpp \
	../Classes/ExtensionsTest/ControlExtensionTest/CCControlPotentiometerTest/CCControlPotentiometerTest.cpp \
	../Classes/ExtensionsTest/ControlExtensionTest/CCControlStepperTest/CCControlStepperTest.cpp \
	../Classes/ExtensionsTest/TableViewTest/TableViewTestScene.cpp \
	../Classes/ExtensionsTest/TableViewTest/CustomTableViewCell.cpp \
	../Classes/ExtensionsTest/ExtensionsTest.cpp \
	../Classes/ExtensionsTest/NotificationCenterTest/NotificationCenterTest.cpp \
	../Classes/ExtensionsTest/NetworkTest/HttpClientTest.cpp \
    ../Classes/ExtensionsTest/ComponentsTest/ComponentsTestScene.cpp \
    ../Classes/ExtensionsTest/ComponentsTest/EnemyController.cpp \
    ../Classes/ExtensionsTest/ComponentsTest/GameOverScene.cpp \
    ../Classes/ExtensionsTest/ComponentsTest/PlayerController.cpp \
    ../Classes/ExtensionsTest/ComponentsTest/ProjectileController.cpp \
    ../Classes/ExtensionsTest/ComponentsTest/SceneController.cpp \
	../Classes/ExtensionsTest/ArmatureTest/ArmatureScene.cpp \
	../Classes/FontTest/FontTest.cpp \
	../Classes/IntervalTest/IntervalTest.cpp \
	../Classes/KeypadTest/KeypadTest.cpp \
	../Classes/LabelTest/LabelTest.cpp \
	../Classes/LayerTest/LayerTest.cpp \
	../Classes/MenuTest/MenuTest.cpp \
	../Classes/MotionStreakTest/MotionStreakTest.cpp \
	../Classes/MutiTouchTest/MutiTouchTest.cpp \
	../Classes/NodeTest/NodeTest.cpp \
	../Classes/ParallaxTest/ParallaxTest.cpp \
	../Classes/ParticleTest/ParticleTest.cpp \
	../Classes/PerformanceTest/PerformanceNodeChildrenTest.cpp \
	../Classes/PerformanceTest/PerformanceParticleTest.cpp \
	../Classes/PerformanceTest/PerformanceSpriteTest.cpp \
	../Classes/PerformanceTest/PerformanceTest.cpp \
	../Classes/PerformanceTest/PerformanceTextureTest.cpp \
	../Classes/PerformanceTest/PerformanceTouchesTest.cpp \
	../Classes/RenderTextureTest/RenderTextureTest.cpp \
	../Classes/RotateWorldTest/RotateWorldTest.cpp \
	../Classes/SceneTest/SceneTest.cpp \
	../Classes/SchedulerTest/SchedulerTest.cpp \
	../Classes/ShaderTest/ShaderTest.cpp \
	../Classes/SpriteTest/SpriteTest.cpp \
	../Classes/TextInputTest/TextInputTest.cpp \
	../Classes/Texture2dTest/Texture2dTest.cpp \
	../Classes/TexturePackerEncryptionTest/TextureAtlasEncryptionTest.cpp \
	../Classes/TextureCacheTest/TextureCacheTest.cpp \
	../Classes/TileMapTest/TileMapTest.cpp \
	../Classes/TouchesTest/Ball.cpp \
	../Classes/TouchesTest/Paddle.cpp \
	../Classes/TouchesTest/TouchesTest.cpp \
	../Classes/TransitionsTest/TransitionsTest.cpp \
	../Classes/UserDefaultTest/UserDefaultTest.cpp \
	../Classes/ZwoptexTest/ZwoptexTest.cpp \
	../Classes/FileUtilsTest/FileUtilsTest.cpp \
	../Classes/SpineTest/SpineTest.cpp \
	../Classes/DataVisitorTest/DataVisitorTest.cpp \
	../Classes/ConfigurationTest/ConfigurationTest.cpp \
	../Classes/controller.cpp \
	../Classes/testBasic.cpp \
	../Classes/AppDelegate.cpp \
	../Classes/VisibleRect.cpp

LIBS += $${LINK_AGAINST_COCOS2DX}
LIBS += $${LINK_AGAINST_COCOSDENSHION}
LIBS += $${LINK_AGAINST_COCOSEXTENSION}

INSTALLS += target
target.path = /opt/$${TARGET}

INSTALLS += desktop
desktop.files = $${TARGET}.desktop
desktop.path = $${DESKTOP_INSTALL_DIR}

INSTALLS += resources
resources.files = icon.png ../Resources
resources.path = /opt/$${TARGET}




#include "UIListViewTest.h"

const char* font_UIListViewTest =
#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
"Marker Felt";
#else
"cocosgui/Marker Felt.ttf";
#endif

// UIListViewTest_Vertical

UIListViewTest_Vertical::UIListViewTest_Vertical()
: _displayValueLabel(nullptr)
{
    
}

UIListViewTest_Vertical::~UIListViewTest_Vertical()
{
}

bool UIListViewTest_Vertical::init()
{
    if (UIScene::init())
    {
        Size widgetSize = _widget->getSize();
        
        _displayValueLabel = gui::Text::create();
        _displayValueLabel->setText("Move by vertical direction");
        _displayValueLabel->setFontName("Marker Felt");
        _displayValueLabel->setFontSize(32);
        _displayValueLabel->setAnchorPoint(Point(0.5f, -1.0f));
        _displayValueLabel->setPosition(Point(widgetSize.width / 2.0f, widgetSize.height / 2.0f + _displayValueLabel->getContentSize().height * 1.5f));
        _uiLayer->addChild(_displayValueLabel);
        
        
        gui::Text* alert = gui::Text::create();
        alert->setText("ListView vertical");
        alert->setFontName("Marker Felt");
        alert->setFontSize(30);
        alert->setColor(Color3B(159, 168, 176));
        alert->setPosition(Point(widgetSize.width / 2.0f, widgetSize.height / 2.0f - alert->getSize().height * 3.075f));
        _uiLayer->addChild(alert);
        
        
        UIListView* lv = UIListView::create();
        UIButton* model = UIButton::create();
        model->loadTextures("cocosgui/animationbuttonnormal.png", "cocosgui/animationbuttonpressed.png", "");
        lv->setItemModel(model);
        
        for (int i=0; i<20; i++)
        {
            lv->pushBackDefaultItem();
        }
        lv->setItemsMargin(10);
        lv->setGravity(LISTVIEW_GRAVITY_CENTER_HORIZONTAL);
        lv->setSize(Size(100, 100));
        lv->setBackGroundColorType(LAYOUT_COLOR_SOLID);
        lv->setBackGroundColor(Color3B::GREEN);
        lv->setPosition(Point(100, 100));
        m_pUiLayer->addWidget(lv);
        
        return true;
    }
    
    return false;
}

// UIListViewTest_Horizontal

UIListViewTest_Horizontal::UIListViewTest_Horizontal()
: _displayValueLabel(nullptr)
{
}

UIListViewTest_Horizontal::~UIListViewTest_Horizontal()
{
}

bool UIListViewTest_Horizontal::init()
{
    if (UIScene::init())
    {
        Size widgetSize = _widget->getSize();
        
        _displayValueLabel = gui::Text::create();
        _displayValueLabel->setText("Move by horizontal direction");
        _displayValueLabel->setFontName("Marker Felt");
        _displayValueLabel->setFontSize(32);
        _displayValueLabel->setAnchorPoint(Point(0.5f, -1.0f));
        _displayValueLabel->setPosition(Point(widgetSize.width / 2.0f, widgetSize.height / 2.0f + _displayValueLabel->getContentSize().height * 1.5f));
        _uiLayer->addChild(_displayValueLabel);
        
        
        gui::Text* alert = gui::Text::create();
        alert->setText("ListView horizontal");
        alert->setFontName("Marker Felt");
        alert->setFontSize(30);
        alert->setColor(Color3B(159, 168, 176));
        alert->setPosition(Point(widgetSize.width / 2.0f, widgetSize.height / 2.0f - alert->getSize().height * 3.075f));
        _uiLayer->addChild(alert);
        

        UIListView* lv = UIListView::create();
        lv->setDirection(SCROLLVIEW_DIR_HORIZONTAL);
        UIButton* model = UIButton::create();
        model->loadTextures("cocosgui/animationbuttonnormal.png", "cocosgui/animationbuttonpressed.png", "");
        lv->setItemModel(model);
        
        for (int i=0; i<20; i++)
        {
            lv->pushBackDefaultItem();
        }
        lv->setItemsMargin(10);
        lv->setGravity(LISTVIEW_GRAVITY_CENTER_VERTICAL);
        lv->setSize(Size(100, 100));
        lv->setBackGroundColorType(LAYOUT_COLOR_SOLID);
        lv->setBackGroundColor(Color3B::GREEN);
        lv->setPosition(Point(100, 100));
        m_pUiLayer->addWidget(lv);
        return true;
    }
    
    return false;
}

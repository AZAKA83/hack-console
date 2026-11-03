#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/HSVWidgetDelegate.hpp>
#include <Geode/mapping/ccTypes.hpp>

class HSVLiveOverlay : public FLAlertLayer, public HSVWidgetDelegate {
public:
    static constexpr auto CLASS_NAME = "HSVLiveOverlay";
    GEODE_CUSTOM_CONSTRUCTOR_GD(HSVLiveOverlay, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     HSVLiveOverlay();

    /**
     * @note[short] MacOS (ARM): 0x428db0
     * @note[short] MacOS (Intel): 0x5954f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x234644
     * @note[short] Android: Rebinded
     */
     ~HSVLiveOverlay();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static HSVLiveOverlay* create(GameObject* p0, cocos2d::CCArray* p1, cocos2d::ccColor3B p2, cocos2d::ccColor3B p3);

    /**
     * @note[short] MacOS (ARM): 0x1fdc84
     * @note[short] MacOS (Intel): 0x255140
     * @note[short] Windows: 0x3c1430
     * @note[short] iOS: 0x234ea4
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x1fdd3c
     * @note[short] MacOS (Intel): 0x2551f0
     * @note[short] Windows: 0x1262f0
     * @note[short] iOS: 0x234eb8
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x1fddf0
     * @note[short] MacOS (Intel): 0x2552c0
     * @note[short] Windows: 0x3c1480
     * @note[short] iOS: 0x234f04
     * @note[short] Android
     */
    virtual void hsvChanged(ConfigureHSVWidget* widget);

    /**
     * @note[short] MacOS (Intel): 0x254e20
     * @note[short] Windows: 0x3c11f0
     * @note[short] Android
     */
    void closeColorSelect(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1fdb00
     * @note[short] MacOS (Intel): 0x254fa0
     * @note[short] Windows: 0x3c1270
     * @note[short] Android
     */
    void createHSVWidget(int tab);

    /**
     * @note[short] MacOS (Intel): 0x254e70
     * @note[short] Windows: 0x3c0ff0
     * @note[short] Android
     */
    void determineStartValues();

    /**
     * @note[short] Windows: 0x3c0b10
     * @note[short] Android
     */
    bool init(GameObject* p0, cocos2d::CCArray* p1, cocos2d::ccColor3B p2, cocos2d::ccColor3B p3);

    /**
     * @note[short] MacOS (ARM): 0x1fdab4
     * @note[short] MacOS (Intel): 0x254f60
     * @note[short] Windows: 0x3c1240
     * @note[short] Android
     */
    void onSelectTab(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1fdd88
     * @note[short] MacOS (Intel): 0x255250
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void toggleControls(bool visible);
    GameObject* m_object;
    cocos2d::CCArray* m_objects;
    cocos2d::CCArray* m_controls;
    cocos2d::CCArray* m_unkArray;
    ColorSelectDelegate* m_delegate;
    int m_activeTab;
    ConfigureHSVWidget* m_widget;
    bool m_unkBool1;
    bool m_unkBool2;
    bool m_unkBool3;
    cocos2d::ccColor3B m_startColor1;
    cocos2d::ccColor3B m_startColor2;
};

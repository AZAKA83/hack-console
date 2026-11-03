#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/mapping/ccTypes.hpp>

class HSVWidgetPopup : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "HSVWidgetPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(HSVWidgetPopup, FLAlertLayer)

    /**
     * @note[short] Windows: 0x12f3f0
     * @note[short] iOS: 0x123500
     * @note[short] Android: Rebinded
     */
    virtual  ~HSVWidgetPopup();

    /**
     * @note[short] MacOS (ARM): 0x29ccc0
     * @note[short] Windows: 0x12f510
     * @note[short] Android
     */
    static HSVWidgetPopup* create(cocos2d::ccHSVValue p0, cocos2d::ccColor3B p1, HSVWidgetDelegate* p2, std::string p3);

    /**
     * @note[short] MacOS (ARM): 0x394f6c
     * @note[short] MacOS (Intel): 0x41cf40
     * @note[short] Windows: 0x12fac0
     * @note[short] iOS: 0x123c7c
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Windows: 0x12f670
     * @note[short] Android
     */
    bool init(cocos2d::ccHSVValue p0, cocos2d::ccColor3B p1, HSVWidgetDelegate* p2, std::string p3);

    /**
     * @note[short] MacOS (ARM): 0x394bd4
     * @note[short] MacOS (Intel): 0x41cb50
     * @note[short] Windows: 0x12f9e0
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
    ConfigureHSVWidget* m_widget;
    HSVWidgetDelegate* m_delegate;
};

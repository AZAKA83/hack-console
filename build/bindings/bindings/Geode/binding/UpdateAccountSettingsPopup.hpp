#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/GJAccountSettingsDelegate.hpp>

class UpdateAccountSettingsPopup : public FLAlertLayer, public GJAccountSettingsDelegate {
public:
    static constexpr auto CLASS_NAME = "UpdateAccountSettingsPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(UpdateAccountSettingsPopup, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     UpdateAccountSettingsPopup();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3767b0
     * @note[short] Android: Rebinded
     */
     ~UpdateAccountSettingsPopup();

    /**
     * @note[short] MacOS (Intel): 0x653bf0
     * @note[short] Windows: 0x3a00d0
     * @note[short] Android
     */
    static UpdateAccountSettingsPopup* create(GJAccountSettingsLayer* p0, int p1, int p2, int p3, int p4, int p5, std::string p6, std::string p7, std::string p8, std::string p9, std::string p10, std::string p11, std::string p12);

    /**
     * @note[short] MacOS (ARM): 0x23419c
     * @note[short] MacOS (Intel): 0x28fed0
     * @note[short] Windows: 0x3a0cd0
     * @note[short] iOS: 0x3770dc
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x233f98
     * @note[short] MacOS (Intel): 0x28fcc0
     * @note[short] Windows: 0x3a0aa0
     * @note[short] iOS: 0x376f2c
     * @note[short] Android
     */
    virtual void updateSettingsFinished();

    /**
     * @note[short] MacOS (ARM): 0x2340b0
     * @note[short] MacOS (Intel): 0x28fde0
     * @note[short] Windows: 0x3a0b90
     * @note[short] iOS: 0x377010
     * @note[short] Android
     */
    virtual void updateSettingsFailed();

    /**
     * @note[short] MacOS (ARM): 0x415108
     * @note[short] Windows: 0x3a03e0
     * @note[short] Android
     */
    bool init(GJAccountSettingsLayer* p0, int p1, int p2, int p3, int p4, int p5, std::string p6, std::string p7, std::string p8, std::string p9, std::string p10, std::string p11, std::string p12);

    /**
     * @note[short] MacOS (ARM): 0x233f00
     * @note[short] MacOS (Intel): 0x28fc30
     * @note[short] Windows: 0x3a0c50
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
    bool m_updateSuccess;
    GJAccountSettingsLayer* m_settingsLayer;
    TextArea* m_textArea;
    LoadingCircle* m_loadingCircle;
    CCMenuItemSpriteExtra* m_closeButton;
};

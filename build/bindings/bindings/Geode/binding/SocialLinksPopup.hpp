#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>

class SocialLinksPopup : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "SocialLinksPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SocialLinksPopup, FLAlertLayer)

    /**
     * @note[short] Windows: 0x3991b0
     * @note[short] iOS: 0x375c50
     * @note[short] Android: Rebinded
     */
    virtual  ~SocialLinksPopup();

    /**
     * @note[short] Android
     */
    static SocialLinksPopup* create(GJAccountSettingsLayer* p0);

    /**
     * @note[short] MacOS (ARM): 0x233374
     * @note[short] MacOS (Intel): 0x28ee70
     * @note[short] Windows: 0x3a00c0
     * @note[short] iOS: 0x376718
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Windows: 0x39f330
     * @note[short] Android
     */
    bool init(GJAccountSettingsLayer* p0);

    /**
     * @note[short] Windows: 0x3a0020
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x39fe70
     * @note[short] Android
     */
    void onOK(cocos2d::CCObject* sender);
};

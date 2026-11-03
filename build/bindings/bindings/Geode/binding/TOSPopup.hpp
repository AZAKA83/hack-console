#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>

class TOSPopup : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "TOSPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(TOSPopup, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     TOSPopup();

    /**
     * @note[short] Windows: 0x399bc0
     * @note[short] iOS: 0x37e72c
     * @note[short] Android: Rebinded
     */
    virtual  ~TOSPopup();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static TOSPopup* create();

    /**
     * @note[short] MacOS (ARM): 0x2406cc
     * @note[short] MacOS (Intel): 0x29d200
     * @note[short] Windows: 0x3a9290
     * @note[short] iOS: 0x37e814
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x240d1c
     * @note[short] MacOS (Intel): 0x29d880
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x37ee28
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x240c80
     * @note[short] MacOS (Intel): 0x29d7f0
     * @note[short] Windows: 0x3a9960
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x240cf8
     * @note[short] MacOS (Intel): 0x29d860
     * @note[short] Windows: 0x3a9900
     * @note[short] Android
     */
    void onPrivacy(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x240cd4
     * @note[short] MacOS (Intel): 0x29d840
     * @note[short] Windows: 0x3a9930
     * @note[short] Android
     */
    void onTOS(cocos2d::CCObject* sender);
};

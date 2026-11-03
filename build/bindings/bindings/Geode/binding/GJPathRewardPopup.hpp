#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>

class GJPathRewardPopup : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "GJPathRewardPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJPathRewardPopup, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GJPathRewardPopup();

    /**
     * @note[short] Windows: 0x5a3f0
     * @note[short] Android: Rebinded
     */
    virtual  ~GJPathRewardPopup();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static GJPathRewardPopup* create(int path);

    /**
     * @note[short] MacOS (ARM): 0x2841fc
     * @note[short] MacOS (Intel): 0x2ee280
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x462ab4
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x284194
     * @note[short] MacOS (Intel): 0x2ee220
     * @note[short] Windows: 0x393120
     * @note[short] Android
     */
    void closePopup();

    /**
     * @note[short] MacOS (ARM): 0x283b9c
     * @note[short] MacOS (Intel): 0x2edc60
     * @note[short] Windows: 0x397d90
     * @note[short] Android
     */
    bool init(int path);

    /**
     * @note[short] MacOS (ARM): 0x284038
     * @note[short] MacOS (Intel): 0x2ee0f0
     * @note[short] Windows: 0x398260
     * @note[short] Android
     */
    void onClaim(cocos2d::CCObject* sender);
    int m_pathNumber;
};

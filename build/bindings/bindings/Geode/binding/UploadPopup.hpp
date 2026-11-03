#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/LevelUploadDelegate.hpp>

class UploadPopup : public FLAlertLayer, public LevelUploadDelegate {
public:
    static constexpr auto CLASS_NAME = "UploadPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(UploadPopup, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     UploadPopup();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x314490
     * @note[short] Android: Rebinded
     */
     ~UploadPopup();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static UploadPopup* create(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x216048
     * @note[short] MacOS (Intel): 0x26f0b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x314e1c
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x215fe8
     * @note[short] MacOS (Intel): 0x26f040
     * @note[short] Windows: 0x433f60
     * @note[short] iOS: 0x314dbc
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x215bb8
     * @note[short] MacOS (Intel): 0x26ebe0
     * @note[short] Windows: 0x632640
     * @note[short] iOS: 0x3149c0
     * @note[short] Android
     */
    virtual void levelUploadFinished(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x215df0
     * @note[short] MacOS (Intel): 0x26ee30
     * @note[short] Windows: 0x632810
     * @note[short] iOS: 0x314be8
     * @note[short] Android
     */
    virtual void levelUploadFailed(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x215690
     * @note[short] Windows: 0x632090
     * @note[short] Android
     */
    bool init(GJGameLevel* level);

    /**
     * @note[short] Windows: 0x632ae0
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x215fa4
     * @note[short] MacOS (Intel): 0x26eff0
     * @note[short] Windows: 0x99f60
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x215d68
     * @note[short] MacOS (Intel): 0x26ed90
     * @note[short] Windows: 0x6329f0
     * @note[short] Android
     */
    void onReturnToLevel(cocos2d::CCObject* sender);
    GJGameLevel* m_level;
    TextArea* m_textArea;
    LoadingCircle* m_loadingCircle;
    CCMenuItemSpriteExtra* m_backButton;
};

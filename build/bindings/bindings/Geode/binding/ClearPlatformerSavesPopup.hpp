#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>

class ClearPlatformerSavesPopup : public FLAlertLayer, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "ClearPlatformerSavesPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ClearPlatformerSavesPopup, FLAlertLayer)

    /**
     * @note[short] Windows: 0xa3130
     * @note[short] iOS: 0x4a9b70
     * @note[short] Android: Rebinded
     */
    virtual  ~ClearPlatformerSavesPopup();

    /**
     * @note[short] Android
     */
    static ClearPlatformerSavesPopup* create();

    /**
     * @note[short] MacOS (ARM): 0x7a5480
     * @note[short] MacOS (Intel): 0x8b41c0
     * @note[short] Windows: 0xa31f0
     * @note[short] iOS: 0x4a9c7c
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x7a6308
     * @note[short] MacOS (Intel): 0x8b5150
     * @note[short] Windows: 0x99f90
     * @note[short] iOS: 0x4aa8fc
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x7a6120
     * @note[short] MacOS (Intel): 0x8b4f50
     * @note[short] Windows: 0xa4240
     * @note[short] iOS: 0x4aa7a8
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] Windows: 0x99f60
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xa4000
     * @note[short] Android
     */
    void onDelete(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xa3ea0
     * @note[short] Android
     */
    void onIncludeFavoritesToggle(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xa3ec0
     * @note[short] Android
     */
    void onOptions(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn updateStats();
};

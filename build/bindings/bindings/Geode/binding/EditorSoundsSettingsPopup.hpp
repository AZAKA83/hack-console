#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>

class EditorSoundsSettingsPopup : public FLAlertLayer, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "EditorSoundsSettingsPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(EditorSoundsSettingsPopup, FLAlertLayer)

    /**
     * @note[short] Windows: 0x5a3f0
     * @note[short] Android: Rebinded
     */
    virtual  ~EditorSoundsSettingsPopup();

    /**
     * @note[short] Android
     */
    static EditorSoundsSettingsPopup* create(EditorSoundsLayer* p0);

    /**
     * @note[short] MacOS (ARM): 0x7e7314
     * @note[short] MacOS (Intel): 0x8ffde0
     * @note[short] Windows: 0x99f90
     * @note[short] iOS: 0x4d9208
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x7e7238
     * @note[short] MacOS (Intel): 0x8ffd10
     * @note[short] Windows: 0x3d5130
     * @note[short] iOS: 0x4d9194
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] Windows: 0x3d4970
     * @note[short] Android
     */
    bool init(EditorSoundsLayer* p0);

    /**
     * @note[short] Windows: 0x3d4ff0
     * @note[short] Android
     */
    void onClearAll(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x99f60
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3d4dc0
     * @note[short] Android
     */
    void onDownloadAll(cocos2d::CCObject* sender);
};

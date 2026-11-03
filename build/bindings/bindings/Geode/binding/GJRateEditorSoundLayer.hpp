#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>
#include <Geode/binding/UploadPopupDelegate.hpp>
#include <Geode/binding/UploadActionDelegate.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>

class GJRateEditorSoundLayer : public SetupTriggerPopup, public UploadPopupDelegate, public UploadActionDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "GJRateEditorSoundLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJRateEditorSoundLayer, SetupTriggerPopup)

    /**
     * @note[short] Android
     */
    static GJRateEditorSoundLayer* create(GJEditorSoundConfig* p0);

    /**
     * @note[short] MacOS (ARM): 0x465680
     * @note[short] MacOS (Intel): 0x509ca0
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x465078
     * @note[short] MacOS (Intel): 0x5096a0
     * @note[short] Android
     */
    virtual void onCustomButton(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x465328
     * @note[short] MacOS (Intel): 0x509990
     * @note[short] Android
     */
    virtual void uploadActionFinished(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x465478
     * @note[short] MacOS (Intel): 0x509a90
     * @note[short] Android
     */
    virtual void uploadActionFailed(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x4655e0
     * @note[short] MacOS (Intel): 0x509c00
     * @note[short] Android
     */
    virtual void onClosePopup(UploadActionPopup* p0);

    /**
     * @note[short] MacOS (ARM): 0x465248
     * @note[short] MacOS (Intel): 0x509880
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] Android
     */
    bool init(GJEditorSoundConfig* p0);

    /**
     * @note[short] Android
     */
    void onSubmit(cocos2d::CCObject* sender);
};

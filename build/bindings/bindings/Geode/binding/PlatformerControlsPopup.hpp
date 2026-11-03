#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>
#include <Geode/binding/UploadActionDelegate.hpp>
#include <Geode/binding/UploadPopupDelegate.hpp>
#include <Geode/binding/LevelControlsDelegate.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>

class PlatformerControlsPopup : public SetupTriggerPopup, public UploadActionDelegate, public UploadPopupDelegate, public LevelControlsDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "PlatformerControlsPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(PlatformerControlsPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x4502c0
     * @note[short] iOS: 0x51cc5c
     * @note[short] Android: Rebinded
     */
    virtual  ~PlatformerControlsPopup();

    /**
     * @note[short] Windows: 0x450060
     * @note[short] Android
     */
    static PlatformerControlsPopup* create(GJGameLevel* p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x83d908
     * @note[short] MacOS (Intel): 0x95fb10
     * @note[short] Windows: 0x4511a0
     * @note[short] iOS: 0x51d144
     * @note[short] Android
     */
    virtual void update(float dt);

    /**
     * @note[short] MacOS (ARM): 0x83dbfc
     * @note[short] MacOS (Intel): 0x95fe50
     * @note[short] Windows: 0x451ce0
     * @note[short] iOS: 0x51d2e8
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x83dc5c
     * @note[short] MacOS (Intel): 0x95fec0
     * @note[short] Windows: 0x451d20
     * @note[short] iOS: 0x51d320
     * @note[short] Android
     */
    virtual void uploadActionFinished(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x83de4c
     * @note[short] MacOS (Intel): 0x9600e0
     * @note[short] Windows: 0x451eb0
     * @note[short] iOS: 0x51d444
     * @note[short] Android
     */
    virtual void uploadActionFailed(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x83e00c
     * @note[short] MacOS (Intel): 0x9602f0
     * @note[short] Windows: 0x4520f0
     * @note[short] iOS: 0x51d5c0
     * @note[short] Android
     */
    virtual void onClosePopup(UploadActionPopup* p0);

    /**
     * @note[short] MacOS (ARM): 0x83d94c
     * @note[short] MacOS (Intel): 0x95fb50
     * @note[short] Windows: 0x451460
     * @note[short] iOS: 0x51d188
     * @note[short] Android
     */
    virtual void onLevelControlsRefreshed(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x83df28
     * @note[short] MacOS (Intel): 0x9601e0
     * @note[short] Windows: 0x451fa0
     * @note[short] iOS: 0x51d4f4
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] Android
     */
    TodoReturn commitCustomDraft();

    /**
     * @note[short] Windows: 0x450470
     * @note[short] Android
     */
    void ensureCustomDraft();

    /**
     * @note[short] Windows: 0x44f100
     * @note[short] Android
     */
    bool init(GJGameLevel* p0, bool p1);

    /**
     * @note[short] Windows: 0x4511f0
     * @note[short] Android
     */
    void onApplyCreator(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x451870
     * @note[short] Android
     */
    void onController(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x451600
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x451810
     * @note[short] Android
     */
    void onKeyboard(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x451730
     * @note[short] Android
     */
    void onToggleSource(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x4517c0
     * @note[short] Android
     */
    void onToggleUpload(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x4518c0
     * @note[short] Android
     */
    void onTouch(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x451390
     * @note[short] Android
     */
    void onUpdate(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x451920
     * @note[short] Android
     */
    void onUpload(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn presentClasses();

    /**
     * @note[short] Android
     */
    TodoReturn reapplyRuntime();

    /**
     * @note[short] Android
     */
    TodoReturn refreshApplyVisible();

    /**
     * @note[short] Windows: 0x450e60
     * @note[short] Android
     */
    TodoReturn refreshClassUI();

    /**
     * @note[short] Android
     */
    TodoReturn refreshModeUI();

    /**
     * @note[short] Android
     */
    TodoReturn refreshUploadColumn(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn sourceIsCustom();

    /**
     * @note[short] Android
     */
    TodoReturn syncSourceUI();

    /**
     * @note[short] Windows: 0x451730
     * @note[short] Android
     */
    TodoReturn updateEditLabel();
};

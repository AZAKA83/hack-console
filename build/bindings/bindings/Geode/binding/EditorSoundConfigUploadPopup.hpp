#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>
#include <Geode/binding/EditorSoundUploadDelegate.hpp>

class EditorSoundConfigUploadPopup : public SetupTriggerPopup, public EditorSoundUploadDelegate {
public:
    static constexpr auto CLASS_NAME = "EditorSoundConfigUploadPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(EditorSoundConfigUploadPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x19a690
     * @note[short] iOS: 0x4d6390
     * @note[short] Android: Rebinded
     */
    virtual  ~EditorSoundConfigUploadPopup();

    /**
     * @note[short] Android
     */
    static EditorSoundConfigUploadPopup* create(GJEditorSoundConfig* p0, EditorSoundConfigInfoLayer* p1);

    /**
     * @note[short] MacOS (ARM): 0x7e459c
     * @note[short] MacOS (Intel): 0x8fcd50
     * @note[short] Windows: 0x19c230
     * @note[short] iOS: 0x4d6a8c
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x7e45c0
     * @note[short] MacOS (Intel): 0x8fcd90
     * @note[short] Windows: 0x19c250
     * @note[short] iOS: 0x4d6ab0
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x7e4620
     * @note[short] MacOS (Intel): 0x8fcde0
     * @note[short] Windows: 0x19c330
     * @note[short] iOS: 0x4d6afc
     * @note[short] Android
     */
    virtual void uploadEditorSoundFinished(int p0);

    /**
     * @note[short] MacOS (ARM): 0x7e4880
     * @note[short] MacOS (Intel): 0x8fd040
     * @note[short] Windows: 0x19c620
     * @note[short] iOS: 0x4d6c94
     * @note[short] Android
     */
    virtual void uploadEditorSoundFailed(int p0);

    /**
     * @note[short] Windows: 0x19a7d0
     * @note[short] Android
     */
    bool init(GJEditorSoundConfig* p0, EditorSoundConfigInfoLayer* p1);

    /**
     * @note[short] Windows: 0x46360
     * @note[short] Android
     */
    void onCancel(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x19bc80
     * @note[short] Android
     */
    void onToggleFriendsOnly(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x19ba70
     * @note[short] Android
     */
    void onToggleUnlisted(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x19b860
     * @note[short] Android
     */
    void onUpload(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x19b880
     * @note[short] Android
     */
    void onUploadAsUpdate(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x19bca0
     * @note[short] Android
     */
    TodoReturn performUpload(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateVisibilityState();
};

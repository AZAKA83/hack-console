#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>
#include <Geode/binding/UploadActionDelegate.hpp>
#include <Geode/binding/UploadPopupDelegate.hpp>
#include <Geode/binding/SetTextPopupDelegate.hpp>

class CreatorSettingsPopup : public SetupTriggerPopup, public UploadActionDelegate, public UploadPopupDelegate, public SetTextPopupDelegate {
public:
    static constexpr auto CLASS_NAME = "CreatorSettingsPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CreatorSettingsPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x448a90
     * @note[short] iOS: 0x4abe40
     * @note[short] Android: Rebinded
     */
    virtual  ~CreatorSettingsPopup();

    /**
     * @note[short] Windows: 0x448910
     * @note[short] Android
     */
    static CreatorSettingsPopup* create(GJGameLevel* p0, CreatorSettingsDelegate* p1);

    /**
     * @note[short] MacOS (ARM): 0x7a7fc0
     * @note[short] MacOS (Intel): 0x8b7060
     * @note[short] Windows: 0x39a390
     * @note[short] iOS: 0x4abe78
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x7a7fc4
     * @note[short] MacOS (Intel): 0x8b7070
     * @note[short] Windows: 0x448f50
     * @note[short] iOS: 0x4abe7c
     * @note[short] Android
     */
    virtual void setTextPopupClosed(SetTextPopup* p0, std::string p1);

    /**
     * @note[short] MacOS (ARM): 0x7a8214
     * @note[short] MacOS (Intel): 0x8b7300
     * @note[short] Windows: 0x4491f0
     * @note[short] iOS: 0x4ac07c
     * @note[short] Android
     */
    virtual void uploadActionFinished(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x7a839c
     * @note[short] MacOS (Intel): 0x8b7450
     * @note[short] Windows: 0x4492b0
     * @note[short] iOS: 0x4ac128
     * @note[short] Android
     */
    virtual void uploadActionFailed(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x7a8474
     * @note[short] MacOS (Intel): 0x8b7550
     * @note[short] Windows: 0x449390
     * @note[short] iOS: 0x4ac1d4
     * @note[short] Android
     */
    virtual void onClosePopup(UploadActionPopup* p0);

    /**
     * @note[short] Windows: 0x448490
     * @note[short] Android
     */
    bool init(GJGameLevel* p0, CreatorSettingsDelegate* p1);

    /**
     * @note[short] Windows: 0x448f20
     * @note[short] Android
     */
    void onControls(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x448c00
     * @note[short] Android
     */
    void onDescription(cocos2d::CCObject* sender);
};

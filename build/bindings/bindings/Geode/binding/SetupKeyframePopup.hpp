#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetupKeyframePopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupKeyframePopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupKeyframePopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x5b9a70
     * @note[short] iOS: 0x24938c
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupKeyframePopup();

    /**
     * @note[short] Android
     */
    static SetupKeyframePopup* create(KeyframeGameObject* object, cocos2d::CCArray* objects, LevelEditorLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x197bec
     * @note[short] MacOS (Intel): 0x1e45f0
     * @note[short] Windows: 0x5bc500
     * @note[short] iOS: 0x24aa78
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x19780c
     * @note[short] MacOS (Intel): 0x1e4220
     * @note[short] Windows: 0x5bbbe0
     * @note[short] iOS: 0x24a788
     * @note[short] Android
     */
    virtual void onCustomButton(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x197524
     * @note[short] MacOS (Intel): 0x1e3f70
     * @note[short] Windows: 0x5bbb00
     * @note[short] iOS: 0x24a560
     * @note[short] Android
     */
    virtual void valueDidChange(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x197768
     * @note[short] MacOS (Intel): 0x1e4190
     * @note[short] Windows: 0x5bbb20
     * @note[short] iOS: 0x24a6e4
     * @note[short] Android
     */
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x195ef8
     * @note[short] MacOS (Intel): 0x1e2630
     * @note[short] Windows: 0x5ba870
     * @note[short] Android
     */
    bool init(KeyframeGameObject* object, cocos2d::CCArray* objects, LevelEditorLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x197390
     * @note[short] MacOS (Intel): 0x1e3de0
     * @note[short] Windows: 0x5bc400
     * @note[short] Android
     */
    void onTimeMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x197544
     * @note[short] MacOS (Intel): 0x1e3f90
     * @note[short] Windows: 0x5bc150
     * @note[short] Android
     */
    void refreshPreviewArt();

    /**
     * @note[short] MacOS (ARM): 0x197498
     * @note[short] MacOS (Intel): 0x1e3ee0
     * @note[short] Windows: 0x5bc470
     * @note[short] Android
     */
    void updateTimeModeButtons();
    cocos2d::CCArray* m_timeModeToggles;
    LevelEditorLayer* m_editorLayer;
    bool m_groupIDChanged;
};

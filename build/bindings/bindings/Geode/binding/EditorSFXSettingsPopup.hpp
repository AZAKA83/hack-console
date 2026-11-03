#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class EditorSFXSettingsPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "EditorSFXSettingsPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(EditorSFXSettingsPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x60ac50
     * @note[short] Android: Rebinded
     */
    virtual  ~EditorSFXSettingsPopup();

    /**
     * @note[short] Android
     */
    static EditorSFXSettingsPopup* create(int p0);

    /**
     * @note[short] MacOS (ARM): 0x7d7c50
     * @note[short] MacOS (Intel): 0x8eedc0
     * @note[short] Windows: 0x18d810
     * @note[short] iOS: 0x4cbfe8
     * @note[short] Android
     */
    virtual void valueDidChange(int p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x7d7c1c
     * @note[short] MacOS (Intel): 0x8eed90
     * @note[short] Windows: 0x18d730
     * @note[short] iOS: 0x4cbfa8
     * @note[short] Android
     */
    virtual float getValue(int p0);

    /**
     * @note[short] Windows: 0x18d380
     * @note[short] Android
     */
    bool init(int p0);
};

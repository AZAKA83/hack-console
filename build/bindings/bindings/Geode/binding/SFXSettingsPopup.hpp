#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/GJOptionsLayer.hpp>

class SFXSettingsPopup : public GJOptionsLayer {
public:
    static constexpr auto CLASS_NAME = "SFXSettingsPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SFXSettingsPopup, GJOptionsLayer)

    /**
     * @note[short] Windows: 0x39ab40
     * @note[short] Android: Rebinded
     */
    virtual  ~SFXSettingsPopup();

    /**
     * @note[short] Android
     */
    static SFXSettingsPopup* create(SFXBrowser* p0);

    /**
     * @note[short] MacOS (ARM): 0x3aade8
     * @note[short] MacOS (Intel): 0x4347e0
     * @note[short] Windows: 0x61f6f0
     * @note[short] iOS: 0x1f7c48
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3aadc0
     * @note[short] MacOS (Intel): 0x4347b0
     * @note[short] Windows: 0x61f6c0
     * @note[short] iOS: 0x1f7c20
     * @note[short] Android
     */
    virtual void setupOptions();

    /**
     * @note[short] MacOS (ARM): 0x3aaddc
     * @note[short] MacOS (Intel): 0x4347d0
     * @note[short] Windows: 0x61f6e0
     * @note[short] iOS: 0x1f7c3c
     * @note[short] Android
     */
    virtual void didToggleGV(std::string p0);

    /**
     * @note[short] Android
     */
    bool init(SFXBrowser* p0);
};

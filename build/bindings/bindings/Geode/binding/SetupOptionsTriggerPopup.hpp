#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>
#include <Geode/mapping/CCPoint.hpp>

class SetupOptionsTriggerPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupOptionsTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupOptionsTriggerPopup, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SetupOptionsTriggerPopup();

    /**
     * @note[short] Windows: 0x60ac50
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupOptionsTriggerPopup();

    /**
     * @note[short] MacOS (ARM): 0x18b938
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static SetupOptionsTriggerPopup* create(GameOptionsTrigger* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x5d41d0
     * @note[short] MacOS (Intel): 0x6bafc0
     * @note[short] Windows: 0x5cc230
     * @note[short] iOS: 0x494c00
     * @note[short] Android
     */
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x54ab94
     * @note[short] MacOS (Intel): 0x6bad70
     * @note[short] Windows: 0x5cbfc0
     * @note[short] Android
     */
    void addOption(int property, std::string label);

    /**
     * @note[short] Windows: 0x5cb7d0
     * @note[short] Android
     */
    bool init(GameOptionsTrigger* object, cocos2d::CCArray* objects);
    cocos2d::CCPoint m_togglePosition;
    int m_togglePage;
};

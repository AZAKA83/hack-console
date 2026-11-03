#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetIDPopup.hpp>

class SetLevelOrderPopup : public SetIDPopup {
public:
    static constexpr auto CLASS_NAME = "SetLevelOrderPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetLevelOrderPopup, SetIDPopup)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SetLevelOrderPopup();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static SetLevelOrderPopup* create(int levelID, int order, int amount);

    /**
     * @note[short] MacOS (ARM): 0x2dcd20
     * @note[short] MacOS (Intel): 0x34c770
     * @note[short] Windows: 0x431030
     * @note[short] Android
     */
    bool init(int levelID, int order, int amount);

    /**
     * @note[short] MacOS (ARM): 0x2dd04c
     * @note[short] MacOS (Intel): 0x34ca60
     * @note[short] Windows: 0x431320
     * @note[short] Android
     */
    void onOrderButton(cocos2d::CCObject* sender);
    int m_levelID;
};

#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetupPlayerControlPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupPlayerControlPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupPlayerControlPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x5fbcd0
     * @note[short] iOS: 0x489d78
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupPlayerControlPopup();

    /**
     * @note[short] Windows: 0x5fde30
     * @note[short] Android
     */
    static SetupPlayerControlPopup* create(PlayerControlGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x4f641c
     * @note[short] Windows: 0x5fdf40
     * @note[short] Android
     */
    bool init(PlayerControlGameObject* object, cocos2d::CCArray* objects);
};

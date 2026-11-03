#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetupPersistentItemTriggerPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupPersistentItemTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupPersistentItemTriggerPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x60ac50
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupPersistentItemTriggerPopup();

    /**
     * @note[short] Windows: 0x6061b0
     * @note[short] Android
     */
    static SetupPersistentItemTriggerPopup* create(ItemTriggerGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x4fdd44
     * @note[short] MacOS (Intel): 0x5affc0
     * @note[short] Windows: 0x6068e0
     * @note[short] iOS: 0x490380
     * @note[short] Android
     */
    virtual void valueDidChange(int p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x4f641c
     * @note[short] Windows: 0x6062c0
     * @note[short] Android
     */
    bool init(ItemTriggerGameObject* object, cocos2d::CCArray* objects);
};

#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetupCollisionTriggerPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupCollisionTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupCollisionTriggerPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x5af790
     * @note[short] iOS: 0x2cc210
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupCollisionTriggerPopup();

    /**
     * @note[short] Android
     */
    static SetupCollisionTriggerPopup* create(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x30c34c
     * @note[short] MacOS (Intel): 0x380de0
     * @note[short] Windows: 0x5b04d0
     * @note[short] iOS: 0x2ccbf0
     * @note[short] Android
     */
    virtual void updateDefaultTriggerValues();

    /**
     * @note[short] MacOS (ARM): 0x30bff4
     * @note[short] MacOS (Intel): 0x380a60
     * @note[short] Windows: 0x5b0260
     * @note[short] iOS: 0x2cc8c0
     * @note[short] Android
     */
    virtual void valueDidChange(int p0, float p1);

    /**
     * @note[short] Windows: 0x5afa20
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] Android
     */
    void updateSpecialNodes();
};

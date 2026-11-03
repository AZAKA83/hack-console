#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class CollisionBlockPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "CollisionBlockPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CollisionBlockPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0xa4b10
     * @note[short] iOS: 0x8eb2c
     * @note[short] Android: Rebinded
     */
    virtual  ~CollisionBlockPopup();

    /**
     * @note[short] Windows: 0xa4be0
     * @note[short] Android
     */
    static CollisionBlockPopup* create(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x2193f8
     * @note[short] MacOS (Intel): 0x2729a0
     * @note[short] Windows: 0xa5170
     * @note[short] iOS: 0x8ef14
     * @note[short] Android
     */
    virtual void valueDidChange(int p0, float p1);

    /**
     * @note[short] Windows: 0xa4cf0
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects);
};

#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class GJFollowCommandLayer : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "GJFollowCommandLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJFollowCommandLayer, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x37a9a0
     * @note[short] iOS: 0x1b44f8
     * @note[short] Android: Rebinded
     */
    virtual  ~GJFollowCommandLayer();

    /**
     * @note[short] Android
     */
    static GJFollowCommandLayer* create(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x262028
     * @note[short] MacOS (Intel): 0x2c2430
     * @note[short] Windows: 0x37b280
     * @note[short] iOS: 0x1b4a74
     * @note[short] Android
     */
    virtual void valueDidChange(int p0, float p1);

    /**
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects);
};

#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class GJPFollowCommandLayer : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "GJPFollowCommandLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJPFollowCommandLayer, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x398470
     * @note[short] iOS: 0x1e93d8
     * @note[short] Android: Rebinded
     */
    virtual  ~GJPFollowCommandLayer();

    /**
     * @note[short] Windows: 0x398540
     * @note[short] Android
     */
    static GJPFollowCommandLayer* create(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x2e098c
     * @note[short] MacOS (Intel): 0x350ba0
     * @note[short] Windows: 0x37b280
     * @note[short] iOS: 0x1e9a1c
     * @note[short] Android
     */
    virtual void valueDidChange(int property, float value);

    /**
     * @note[short] Windows: 0x398650
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects);
};

#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/EffectGameObject.hpp>
#include <Geode/mapping/vector.hpp>

class PlayerControlGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "PlayerControlGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(PlayerControlGameObject, EffectGameObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     PlayerControlGameObject();

    /**
     * @note[short] Windows: 0x637e10
     * @note[short] Android: Rebinded
     */
    virtual  ~PlayerControlGameObject();

    /**
     * @note[short] MacOS (ARM): 0x1847e0
     * @note[short] MacOS (Intel): 0x1ce9c0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static PlayerControlGameObject* create();

    /**
     * @note[short] MacOS (ARM): 0x1848a4
     * @note[short] MacOS (Intel): 0x1cea80
     * @note[short] Windows: 0x6633f0
     * @note[short] iOS: 0x43e2c8
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x185570
     * @note[short] MacOS (Intel): 0x1cf9f0
     * @note[short] Windows: 0x6637a0
     * @note[short] iOS: 0x43e68c
     * @note[short] Android
     */
    virtual void customObjectSetup(std::vector<std::string>& values, std::vector<void*>& exists);

    /**
     * @note[short] MacOS (ARM): 0x1848f4
     * @note[short] MacOS (Intel): 0x1cead0
     * @note[short] Windows: 0x663460
     * @note[short] iOS: 0x43e318
     * @note[short] Android
     */
    virtual std::string getSaveString(GJBaseGameLayer* layer);
    bool m_stopJump;
    bool m_stopMove;
    bool m_stopRotation;
    bool m_stopSlide;
};

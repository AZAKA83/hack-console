#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/EffectGameObject.hpp>
#include <Geode/mapping/vector.hpp>

class RingObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "RingObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(RingObject, EffectGameObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     RingObject();

    /**
     * @note[short] Windows: 0x637e10
     * @note[short] Android: Rebinded
     */
    virtual  ~RingObject();

    /**
     * @note[short] MacOS (ARM): 0x154e54
     * @note[short] MacOS (Intel): 0x1946c0
     * @note[short] Windows: 0x643920
     * @note[short] Android
     */
    static RingObject* create(char const* frame);

    /**
     * @note[short] MacOS (ARM): 0x1550e8
     * @note[short] MacOS (Intel): 0x194970
     * @note[short] Windows: 0x643cb0
     * @note[short] iOS: 0x4289d0
     * @note[short] Android
     */
    virtual void setScale(float scale);

    /**
     * @note[short] MacOS (ARM): 0x155148
     * @note[short] MacOS (Intel): 0x1949d0
     * @note[short] Windows: 0x501e70
     * @note[short] iOS: 0x428a20
     * @note[short] Android
     */
    virtual void setRotation(float rotation);

    /**
     * @note[short] MacOS (ARM): 0x1550bc
     * @note[short] MacOS (Intel): 0x194950
     * @note[short] Windows: 0x643c90
     * @note[short] iOS: 0x4289a4
     * @note[short] Android
     */
    virtual void resetObject();

    /**
     * @note[short] MacOS (ARM): 0x15515c
     * @note[short] MacOS (Intel): 0x194a00
     * @note[short] Windows: 0x643d70
     * @note[short] iOS: 0x428a34
     * @note[short] Android
     */
    virtual void customObjectSetup(std::vector<std::string>& values, std::vector<void*>& exists);

    /**
     * @note[short] MacOS (ARM): 0x155268
     * @note[short] MacOS (Intel): 0x194b50
     * @note[short] Windows: 0x643e90
     * @note[short] iOS: 0x428b34
     * @note[short] Android
     */
    virtual std::string getSaveString(GJBaseGameLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x155118
     * @note[short] MacOS (Intel): 0x1949a0
     * @note[short] Windows: 0x643ce0
     * @note[short] iOS: 0x4289f8
     * @note[short] Android
     */
    virtual void setRScale(float scale);

    /**
     * @note[short] MacOS (ARM): 0x154f70
     * @note[short] MacOS (Intel): 0x1947f0
     * @note[short] Windows: 0x6439d0
     * @note[short] iOS: 0x428858
     * @note[short] Android
     */
    virtual void triggerActivated(float xPosition);

    /**
     * @note[short] MacOS (ARM): 0x15514c
     * @note[short] MacOS (Intel): 0x1949e0
     * @note[short] Windows: 0x643d60
     * @note[short] iOS: 0x428a24
     * @note[short] Android
     */
    virtual bool shouldDrawEditorHitbox();

    /**
     * @note[short] MacOS (ARM): 0x154f7c
     * @note[short] MacOS (Intel): 0x194800
     * @note[short] Windows: 0x6439e0
     * @note[short] iOS: 0x428864
     * @note[short] Android
     */
    virtual void powerOnObject(int state);

    /**
     * @note[short] MacOS (ARM): 0x154f20
     * @note[short] MacOS (Intel): 0x194790
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init(char const* frame);

    /**
     * @note[short] MacOS (ARM): 0x154fd4
     * @note[short] MacOS (Intel): 0x194860
     * @note[short] Windows: 0x643a80
     * @note[short] Android
     */
    void spawnCircle();
    bool m_claimTouch;
    bool m_isSpawnOnly;
};

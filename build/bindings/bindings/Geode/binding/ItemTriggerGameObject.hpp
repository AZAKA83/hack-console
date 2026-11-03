#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/EffectGameObject.hpp>
#include <Geode/mapping/vector.hpp>

class ItemTriggerGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "ItemTriggerGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ItemTriggerGameObject, EffectGameObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ItemTriggerGameObject();

    /**
     * @note[short] Windows: 0x6382e0
     * @note[short] Android: Rebinded
     */
    virtual  ~ItemTriggerGameObject();

    /**
     * @note[short] MacOS (Intel): 0x1c63b0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static ItemTriggerGameObject* create(char const* frame);

    /**
     * @note[short] MacOS (ARM): 0x17de34
     * @note[short] MacOS (Intel): 0x1c6510
     * @note[short] Windows: 0x660ac0
     * @note[short] iOS: 0x43b9b4
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] MacOS (ARM): 0x17de74
     * @note[short] MacOS (Intel): 0x1c6550
     * @note[short] Windows: 0x660b00
     * @note[short] iOS: 0x43b9f4
     * @note[short] Android
     */
    virtual void triggerObject(GJBaseGameLayer* layer, int uniqueID, std::vector<int> const* remapKeys);

    /**
     * @note[short] MacOS (ARM): 0x1818dc
     * @note[short] MacOS (Intel): 0x1cb360
     * @note[short] Windows: 0x661920
     * @note[short] iOS: 0x43c940
     * @note[short] Android
     */
    virtual void customObjectSetup(std::vector<std::string>& values, std::vector<void*>& exists);

    /**
     * @note[short] MacOS (ARM): 0x17dfb4
     * @note[short] MacOS (Intel): 0x1c6680
     * @note[short] Windows: 0x660c40
     * @note[short] iOS: 0x43badc
     * @note[short] Android
     */
    virtual std::string getSaveString(GJBaseGameLayer* layer);

    /**
     * @note[short] MacOS (Intel): 0x1c64c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init(char const* frame);
    int m_item1Mode;
    int m_item2Mode;
    int m_targetItemMode;
    float m_mod1;
    float m_mod2;
    int m_resultType1;
    int m_resultType2;
    int m_resultType3;
    float m_tolerance;
    int m_roundType1;
    int m_roundType2;
    int m_signType1;
    int m_signType2;
    bool m_persistent;
    bool m_targetAll;
    bool m_reset;
    bool m_timer;
};

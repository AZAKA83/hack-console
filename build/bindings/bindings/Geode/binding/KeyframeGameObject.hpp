#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/EffectGameObject.hpp>
#include <Geode/mapping/vector.hpp>

class KeyframeGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "KeyframeGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(KeyframeGameObject, EffectGameObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     KeyframeGameObject();

    /**
     * @note[short] MacOS (ARM): 0x164d0c
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x43154c
     * @note[short] Android: Rebinded
     */
     ~KeyframeGameObject();

    /**
     * @note[short] MacOS (ARM): 0x164df4
     * @note[short] MacOS (Intel): 0x1a7050
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static KeyframeGameObject* create();

    /**
     * @note[short] MacOS (ARM): 0x164ee4
     * @note[short] MacOS (Intel): 0x1a7150
     * @note[short] Windows: 0x6567e0
     * @note[short] iOS: 0x431610
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x1651d0
     * @note[short] MacOS (Intel): 0x1a7430
     * @note[short] Windows: 0x656ac0
     * @note[short] iOS: 0x4318d4
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char opacity);

    /**
     * @note[short] MacOS (ARM): 0x16530c
     * @note[short] MacOS (Intel): 0x1a7590
     * @note[short] Windows: 0x656b80
     * @note[short] iOS: 0x431978
     * @note[short] Android
     */
    virtual void customObjectSetup(std::vector<std::string>& values, std::vector<void*>& exists);

    /**
     * @note[short] MacOS (ARM): 0x165878
     * @note[short] MacOS (Intel): 0x1a7bb0
     * @note[short] Windows: 0x657090
     * @note[short] iOS: 0x431e30
     * @note[short] Android
     */
    virtual std::string getSaveString(GJBaseGameLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x164f48
     * @note[short] MacOS (Intel): 0x1a71c0
     * @note[short] Windows: 0x656870
     * @note[short] Android
     */
    void updateShadowObjects(GJBaseGameLayer* layer, EditorUI* ui);
    cocos2d::CCArray* m_shadowObjects;
    cocos2d::CCSprite* m_previewSprite;
    int m_keyframeGroup;
    int m_keyframeIndex;
    bool m_referenceOnly;
    bool m_proximity;
    bool m_curve;
    bool m_closeLoop;
    int m_timeMode;
    float m_unk760;
    float m_spawnDelay;
    bool m_previewArt;
    bool m_keyframeActive;
    bool m_autoLayer;
    int m_direction;
    int m_revolutions;
    float m_lineOpacity;
};

#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/EffectGameObject.hpp>
#include <Geode/mapping/vector.hpp>

class ShaderGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "ShaderGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ShaderGameObject, EffectGameObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ShaderGameObject();

    /**
     * @note[short] Windows: 0x637bc0
     * @note[short] Android: Rebinded
     */
    virtual  ~ShaderGameObject();

    /**
     * @note[short] MacOS (Intel): 0x17ce20
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static ShaderGameObject* create(char const* frame);

    /**
     * @note[short] MacOS (ARM): 0x1423e8
     * @note[short] MacOS (Intel): 0x17cf80
     * @note[short] Windows: 0x63b8e0
     * @note[short] iOS: 0x42092c
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] MacOS (ARM): 0x145f0c
     * @note[short] MacOS (Intel): 0x181eb0
     * @note[short] Windows: 0x63c840
     * @note[short] iOS: 0x42196c
     * @note[short] Android
     */
    virtual void customObjectSetup(std::vector<std::string>& values, std::vector<void*>& exists);

    /**
     * @note[short] MacOS (ARM): 0x142454
     * @note[short] MacOS (Intel): 0x17cff0
     * @note[short] Windows: 0x63b940
     * @note[short] iOS: 0x420988
     * @note[short] Android
     */
    virtual std::string getSaveString(GJBaseGameLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x1423a0
     * @note[short] MacOS (Intel): 0x17cf30
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init(char const* frame);
    float m_speed;
    float m_strength;
    float m_outer;
    float m_timeOff;
    float m_waveWidth;
    float m_targetX;
    float m_targetY;
    float m_fadeIn;
    float m_fadeOut;
    float m_screenOffsetX;
    float m_screenOffsetY;
    bool m_invert;
    float m_inner;
    float m_maxSize;
    bool m_flip;
    bool m_rotate;
    bool m_dual;
    bool m_useX;
    bool m_useY;
    bool m_snapGrid;
    bool m_hardEdges;
    bool m_disableAll;
    int m_zLayerMin;
    int m_zLayerMax;
    bool m_animate;
    bool m_relative;
    bool m_editorDisabled;
};

#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCLayerColor.hpp>

class AudioEffectsLayer : public cocos2d::CCLayerColor {
public:
    static constexpr auto CLASS_NAME = "AudioEffectsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(AudioEffectsLayer, cocos2d::CCLayerColor)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     AudioEffectsLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x46dac4
     * @note[short] Android: Rebinded
     */
     ~AudioEffectsLayer();

    /**
     * @note[short] MacOS (ARM): 0x40e8e8
     * @note[short] MacOS (Intel): 0x4a8430
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static AudioEffectsLayer* create(std::string audioString);

    /**
     * @note[short] MacOS (ARM): 0x40f354
     * @note[short] MacOS (Intel): 0x4a8e50
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x46e214
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x40f22c
     * @note[short] MacOS (Intel): 0x4a8d30
     * @note[short] Windows: 0x9a950
     * @note[short] iOS: 0x46e124
     * @note[short] Android
     */
    virtual void updateTweenAction(float value, char const* key);

    /**
     * @note[short] MacOS (ARM): 0x40f000
     * @note[short] MacOS (Intel): 0x4a8b30
     * @note[short] Windows: 0x9a720
     * @note[short] Android
     */
    void audioStep(float dt);

    /**
     * @note[short] MacOS (ARM): 0x40f358
     * @note[short] MacOS (Intel): 0x4a8e60
     * @note[short] Android
     */
    cocos2d::CCSprite* getBGSquare();

    /**
     * @note[short] MacOS (ARM): 0x40f220
     * @note[short] MacOS (Intel): 0x4a8d20
     * @note[short] Windows: 0x9aad0
     * @note[short] Android
     */
    void goingDown();

    /**
     * @note[short] MacOS (ARM): 0x40ea20
     * @note[short] MacOS (Intel): 0x4a8580
     * @note[short] Windows: 0x9a520
     * @note[short] Android
     */
    bool init(std::string audioString);

    /**
     * @note[short] MacOS (ARM): 0x40efb8
     * @note[short] MacOS (Intel): 0x4a8ad0
     * @note[short] Windows: 0x9a6c0
     * @note[short] Android
     */
    void resetAudioVars();

    /**
     * @note[short] MacOS (ARM): 0x40f0bc
     * @note[short] MacOS (Intel): 0x4a8c00
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void triggerEffect(float pulse);
    cocos2d::CCSpriteBatchNode* m_batchNode;
    cocos2d::CCArray* m_masterTicks;
    cocos2d::CCArray* m_tickArray;
    float m_timeElapsed;
    float m_audioPulseMod;
    bool m_goingDown;
    float m_audioScale;
    bool m_audioRainUnused;
};

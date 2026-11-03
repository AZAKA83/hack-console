#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/ccTypes.hpp>

class ColorAction2 {
public:
    static constexpr auto CLASS_NAME = "ColorAction2";

    /**
     * @note[short] MacOS (ARM): 0x446a1c
     * @note[short] MacOS (Intel): 0x4e81a0
     * @note[short] Android: Rebinded
     */
     ColorAction2(cocos2d::ccColor3B fromColor, cocos2d::ccColor3B toColor, float duration, double unused, bool blending, int playerColor, float fromOpacity, float toOpacity);

    /**
     * @note[short] MacOS (ARM): 0x446bd4
     * @note[short] MacOS (Intel): 0x4e83a0
     * @note[short] Android
     */
    void resetAction();

    /**
     * @note[short] MacOS (ARM): 0x446ad4
     * @note[short] MacOS (Intel): 0x4e82a0
     * @note[short] Android
     */
    void step(float dt);

    /**
     * @note[short] MacOS (ARM): 0x446be0
     * @note[short] MacOS (Intel): 0x4e83c0
     * @note[short] Android
     */
    void updateCustomColor(cocos2d::ccColor3B color1, cocos2d::ccColor3B color2);
    bool m_stepFinished;
    bool m_paused;
    cocos2d::ccColor3B m_color;
    float m_currentOpacity;
    float m_deltaTime;
    cocos2d::ccColor3B m_fromColor;
    cocos2d::ccColor3B m_toColor;
    float m_duration;
    bool m_blending;
    int m_playerColor;
    int m_colorID;
    float m_fromOpacity;
    float m_toOpacity;
    cocos2d::ccHSVValue m_copyHSV;
    int m_copyID;
    bool m_copyColorCalculated;
    bool m_copyOpacity;
    bool m_copyColorLoop;
    int m_uniqueID;
    bool m_legacyHSV;
    ColorActionSprite* m_colorSprite;
    float m_actionDelay;
    float m_stepInterval;
};

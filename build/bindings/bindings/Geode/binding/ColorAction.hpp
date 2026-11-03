#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCObject.hpp>
#include <Geode/mapping/ccTypes.hpp>
#include <Geode/mapping/map.hpp>

class ColorAction : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "ColorAction";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(ColorAction, cocos2d::CCObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ColorAction();

    /**
     * @note[short] Windows: 0x3623d0
     * @note[short] Android: Rebinded
     */
    virtual  ~ColorAction();

    /**
     * @note[short] MacOS (ARM): 0x263a48
     * @note[short] MacOS (Intel): 0x2c3f90
     * @note[short] Windows: 0x363310
     * @note[short] Android
     */
    static ColorAction* create();

    /**
     * @note[short] MacOS (ARM): 0x263bf8
     * @note[short] MacOS (Intel): 0x2c4190
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static ColorAction* create(cocos2d::ccColor3B color, bool blending, int playerColor);

    /**
     * @note[short] MacOS (ARM): 0x263cc0
     * @note[short] MacOS (Intel): 0x2c4280
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static ColorAction* create(cocos2d::ccColor3B fromColor, cocos2d::ccColor3B toColor, float duration, double unused, bool blending);

    /**
     * @note[short] MacOS (ARM): 0x263b08
     * @note[short] MacOS (Intel): 0x2c4070
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static ColorAction* create(cocos2d::ccColor3B fromColor, cocos2d::ccColor3B toColor, float duration, double unused, bool blending, int playerColor, float fromOpacity, float toOpacity);

    /**
     * @note[short] MacOS (ARM): 0x2667d8
     * @note[short] MacOS (Intel): 0x2c6bc0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    ColorAction* getCopy();

    /**
     * @note[short] MacOS (ARM): 0x263da0
     * @note[short] MacOS (Intel): 0x2c4380
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init(cocos2d::ccColor3B fromColor, cocos2d::ccColor3B toColor, float duration, double unused, bool blending, int playerColor, float fromOpacity, float toOpacity);

    /**
     * @note[short] MacOS (ARM): 0x263edc
     * @note[short] MacOS (Intel): 0x2c44f0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool isInUse();

    /**
     * @note[short] MacOS (ARM): 0x264000
     * @note[short] MacOS (Intel): 0x2c4600
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void loadFromState(CAState& state);

    /**
     * @note[short] MacOS (ARM): 0x263ed0
     * @note[short] MacOS (Intel): 0x2c44d0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void resetAction();

    /**
     * @note[short] MacOS (ARM): 0x263f74
     * @note[short] MacOS (Intel): 0x2c4560
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void saveToState(CAState& state);

    /**
     * @note[short] MacOS (ARM): 0x265e60
     * @note[short] MacOS (Intel): 0x2c64d0
     * @note[short] Windows: 0x363da0
     * @note[short] Android
     */
    void setupFromMap(std::map<std::string, std::string>& setup);

    /**
     * @note[short] MacOS (ARM): 0x265de4
     * @note[short] MacOS (Intel): 0x2c6460
     * @note[short] Windows: 0x363ce0
     * @note[short] Android
     */
    void setupFromString(std::string setup);

    /**
     * @note[short] MacOS (ARM): 0x263dd0
     * @note[short] MacOS (Intel): 0x2c43c0
     * @note[short] Windows: 0x3633f0
     * @note[short] Android
     */
    void step(float dt);

    /**
     * @note[short] MacOS (ARM): 0x263f4c
     * @note[short] MacOS (Intel): 0x2c4540
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
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
    int m_controlID;
    bool m_legacyHSV;
    ColorActionSprite* m_colorSprite;
    InheritanceNode* m_inheritanceNode;
    float m_actionDelay;
    float m_stepInterval;
};

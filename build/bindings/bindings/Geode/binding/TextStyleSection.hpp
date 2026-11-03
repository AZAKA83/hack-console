#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCObject.hpp>
#include <Geode/mapping/ccTypes.hpp>

class TextStyleSection : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "TextStyleSection";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(TextStyleSection, cocos2d::CCObject)

    /**
     * @note[short] Windows: 0x78dd0
     * @note[short] Android: Rebinded
     */
    virtual  ~TextStyleSection();

    /**
     * @note[short] MacOS (ARM): 0x3e8c3c
     * @note[short] MacOS (Intel): 0x47e8e0
     * @note[short] Windows: 0x7b1c0
     * @note[short] Android
     */
    static TextStyleSection* create(int start, int end, TextStyleType type);

    /**
     * @note[short] MacOS (Intel): 0x47e5e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static TextStyleSection* createColoredSection(cocos2d::ccColor3B color, int start, int end);

    /**
     * @note[short] MacOS (ARM): 0x3e8b34
     * @note[short] MacOS (Intel): 0x47e790
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static TextStyleSection* createDelaySection(int start, float delay);

    /**
     * @note[short] MacOS (ARM): 0x3e8a20
     * @note[short] MacOS (Intel): 0x47e670
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static TextStyleSection* createInstantSection(int start, int end, float duration);

    /**
     * @note[short] MacOS (ARM): 0x3e8aa8
     * @note[short] MacOS (Intel): 0x47e700
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static TextStyleSection* createShakeSection(int start, int end, int intensity, int perSecond);

    /**
     * @note[short] Android
     */
    static TextStyleSection* createEmoteSection(int p0, EmoteDef const* p1);

    /**
     * @note[short] MacOS (ARM): 0x3e8cb4
     * @note[short] MacOS (Intel): 0x47e960
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init(int start, int end, TextStyleType type);
    TextStyleType m_styleType;
    int m_startIndex;
    int m_endIndex;
    cocos2d::ccColor3B m_color;
    float m_instantTime;
    float m_delay;
    int m_shakeIntensity;
    int m_shakesPerSecond;
    EmoteDef* m_emoteDefinition;
};

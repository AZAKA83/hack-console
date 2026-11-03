#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCObject.hpp>
#include <Geode/mapping/unordered_map.hpp>

class FontObject : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "FontObject";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(FontObject, cocos2d::CCObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     FontObject();

    /**
     * @note[short] Windows: 0x3e130
     * @note[short] Android: Rebinded
     */
    virtual  ~FontObject();

    /**
     * @note[short] MacOS (Intel): 0x508de0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static FontObject* createWithConfigFile(char const* font, float scale);

    /**
     * @note[short] Android
     */
    TodoReturn getFontAdvance(unsigned int p0);

    /**
     * @note[short] MacOS (Intel): 0x8d7410
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    int getFontWidth(unsigned int p0);

    /**
     * @note[short] Android
     */
    TodoReturn hasGlyph(unsigned int p0);

    /**
     * @note[short] MacOS (Intel): 0x203ab0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool initWithConfigFile(char const* font, float scale);

    /**
     * @note[short] Windows: 0x3e1c0
     * @note[short] Android
     */
    void parseConfigFile(char const* font, float scale);
    std::unordered_map<unsigned int, unsigned int> m_fontWidths;
    std::unordered_map<unsigned int, unsigned int> m_fontAdvances;
};

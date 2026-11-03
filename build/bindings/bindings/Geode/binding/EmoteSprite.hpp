#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCSprite.hpp>
#include <Geode/mapping/ccTypes.hpp>
#include <Geode/mapping/vector.hpp>

class EmoteSprite : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "EmoteSprite";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(EmoteSprite, cocos2d::CCSprite)

    /**
     * @note[short] MacOS (ARM): 0x8357c
     * @note[short] MacOS (Intel): 0x8e100
     * @note[short] Windows: 0x7e780
     * @note[short] iOS: 0x17c08
     * @note[short] Android: Rebinded
     */
    virtual  ~EmoteSprite();

    /**
     * @note[short] Windows: 0x7f0e0
     * @note[short] Android
     */
    static EmoteSprite* createWithDef(EmoteDef const* p0);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static EmoteSprite* createWithName(std::string const& p0);

    /**
     * @note[short] Windows: 0x80140
     * @note[short] Android
     */
    static void attachToLabel(cocos2d::CCLabelBMFont* p0, cocos2d::CCNode* p1, std::vector<EmoteToken> const& p2, float p3);

    /**
     * @note[short] Windows: 0x7efa0
     * @note[short] Android
     */
    static EmoteDef* defForName(std::string const& p0);

    /**
     * @note[short] MacOS (ARM): 0x7eb6fc
     * @note[short] MacOS (Intel): 0x904710
     * @note[short] Windows: 0x3f5c0
     * @note[short] iOS: 0x4dc780
     * @note[short] Android
     */
    virtual void setColor(cocos2d::ccColor3B const& p0);

    /**
     * @note[short] Android
     */
    TodoReturn characterCount(std::string const& p0);

    /**
     * @note[short] Android
     */
    TodoReturn charIndexForByte(std::string const& p0, int p1);

    /**
     * @note[short] Android
     */
    TodoReturn defAtIndex(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn defCount();

    /**
     * @note[short] Windows: 0x7fc10
     * @note[short] Android
     */
    TodoReturn effectiveLength(std::string const& p0, int p1);

    /**
     * @note[short] Windows: 0x7f200
     * @note[short] Android
     */
    TodoReturn fitToHeight(float p0, float p1);

    /**
     * @note[short] Android
     */
    TodoReturn heightFactor();

    /**
     * @note[short] Android
     */
    bool initWithDef(EmoteDef const* p0);

    /**
     * @note[short] Windows: 0x7f9b0
     * @note[short] Android
     */
    TodoReturn parseTokens(std::string const& p0, std::vector<EmoteToken>* p1, int p2);

    /**
     * @note[short] Windows: 0x7fd40
     * @note[short] Android
     */
    TodoReturn replaceTokens(std::string const& p0, std::vector<EmoteToken>& p1, float p2);

    /**
     * @note[short] Windows: 0x7f330
     * @note[short] Android
     */
    TodoReturn translateUnicodeEmoji(std::string const& p0);

    /**
     * @note[short] Android
     */
    float jumboMaxAspect();

    /**
     * @note[short] Android
     */
    float jumboMultiScale();

    /**
     * @note[short] Android
     */
    float jumboScale();

    /**
     * @note[short] Android
     */
    int maxEmotesComment();

    /**
     * @note[short] Android
     */
    int maxEmotesMessage();
    EmoteDef* m_emoteDef;
};

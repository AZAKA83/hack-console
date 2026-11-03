#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCSprite.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/ccTypes.hpp>

class ButtonSprite : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "ButtonSprite";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(ButtonSprite, cocos2d::CCSprite)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x42780
     * @note[short] iOS: 0x68884
     * @note[short] Android: Out of line
     */
     ButtonSprite();

    /**
     * @note[short] MacOS (ARM): 0x53d18
     * @note[short] MacOS (Intel): 0x5a850
     * @note[short] Windows: 0x42850
     * @note[short] Android: Rebinded
     */
    virtual  ~ButtonSprite();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static ButtonSprite* create(char const* caption);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static ButtonSprite* create(cocos2d::CCSprite* topSprite);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static ButtonSprite* create(char const* caption, float scale);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static ButtonSprite* create(char const* caption, const char* font, const char* texture);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static ButtonSprite* create(char const* caption, const char* font, const char* texture, float scale);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static ButtonSprite* create(char const* caption, int width, int minWidth, float scale, bool absolute);

    /**
Create a ButtonSprite with a top sprite and a texture.

 @param topSprite The top sprite to add on top of the sprite

 @param width Sprite width; ignored if `absolute` is false

 @param absolute Whether to use absolute width or not

 @param texture The name of the background sprite file (can't be in a spritesheet)

 @param height The height of the button, leave 0 for automatic

 @param scale Scale of top spri     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static ButtonSprite* create(cocos2d::CCSprite* topSprite, int width, bool absolute, float height, const char* texture, float scale);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static ButtonSprite* create(cocos2d::CCSprite* topSprite, int width, int minWidth, float height, float scale, bool absolute);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static ButtonSprite* create(char const* caption, int width, int minWidth, float scale, bool absolute, char const* font, char const* bg);

    /**
Create a ButtonSprite with text, a font and a texture.

 @param caption The text of the ButtonSprite

 @param width Sprite width; ignored if `absolute` is false

 @param absolute Whether to use absolute width or not

 @param font The name of the BM font file to use

 @param texture The name of the background sprite file (can't be in a spritesheet)

 @param height The height of the button, leave 0 for automatic

 @param scale Scale of text

 @returns Pointer to the created ButtonSprite, or nullptr on err     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static ButtonSprite* create(const char* caption, int width, bool absolute, const char* font, const char* texture, float height, float scale);

    /**
     * @note[short] MacOS (ARM): 0x53380
     * @note[short] MacOS (Intel): 0x59e80
     * @note[short] Windows: 0x42be0
     * @note[short] iOS: 0x67fec
     * @note[short] Android
     */
    static ButtonSprite* create(char const* caption, int width, int minWidth, float scale, bool absolute, char const* font, char const* bg, float height);

    /**
     * @note[short] MacOS (ARM): 0x52b88
     * @note[short] MacOS (Intel): 0x595c0
     * @note[short] Windows: 0x428a0
     * @note[short] iOS: 0x678a4
     * @note[short] Android
     */
    static ButtonSprite* create(cocos2d::CCSprite* topSprite, int width, int minWidth, float height, float scale, bool absolute, char const* bgSprite, bool noScaleSpriteForBG, float unk);

    /**
     * @note[short] MacOS (ARM): 0x534c4
     * @note[short] MacOS (Intel): 0x59fe0
     * @note[short] Windows: 0x42cb0
     * @note[short] iOS: 0x680c0
     * @note[short] Android
     */
    bool init(char const* caption, int width, int minWidth, float scale, bool absolute, char const* font, char const* bg, float height);

    /**
     * @note[short] Windows: 0x42960
     * @note[short] iOS: 0x67980
     * @note[short] Android
     */
    bool init(cocos2d::CCSprite* topSprite, int width, int minWidth, float height, float scale, bool absolute, char const* bgSprite, bool noScaleSpriteForBG, float unk);

    /**
     * @note[short] MacOS (ARM): 0x53c40
     * @note[short] MacOS (Intel): 0x5a7d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x68804
     * @note[short] Android
     */
    void setColor(cocos2d::ccColor3B color);

    /**
     * @note[short] MacOS (ARM): 0x5372c
     * @note[short] MacOS (Intel): 0x5a280
     * @note[short] Windows: 0x43550
     * @note[short] iOS: 0x682fc
     * @note[short] Android
     */
    void setString(char const* text);

    /**
     * @note[short] MacOS (ARM): 0x53afc
     * @note[short] MacOS (Intel): 0x5a690
     * @note[short] Windows: 0x42fc0
     * @note[short] iOS: 0x686cc
     * @note[short] Android
     */
    void updateBGImage(char const* filename);

    /**
     * @note[short] MacOS (ARM): 0x52f38
     * @note[short] MacOS (Intel): 0x599c0
     * @note[short] Windows: 0x430e0
     * @note[short] iOS: 0x67be4
     * @note[short] Android
     */
    void updateSpriteBGSize();

    /**
     * @note[short] MacOS (ARM): 0x53c18
     * @note[short] MacOS (Intel): 0x5a7a0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateSpriteOffset(cocos2d::CCPoint offset);
    int m_mode;
    float m_width;
    float m_minWidth;
    float m_scale;
    float m_height;
    float m_unk26c;
    bool m_absolute;
    cocos2d::CCLabelBMFont* m_label;
    cocos2d::CCSprite* m_subSprite;
    cocos2d::CCSprite* m_subBGSprite;
    cocos2d::extension::CCScale9Sprite* m_BGSprite;
    cocos2d::CCPoint m_textOffset;
    cocos2d::CCPoint m_spritePosition;
    std::string m_caption;
};

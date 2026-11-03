#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCSprite.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/ccTypes.hpp>

class TextArea : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "TextArea";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(TextArea, cocos2d::CCSprite)

    /**
     * @note[short] MacOS (ARM): 0x29fbb8
     * @note[short] MacOS (Intel): 0x30cb30
     * @note[short] Windows: 0x89db0
     * @note[short] iOS: 0x11aef4
     * @note[short] Android: Rebinded
     */
    virtual  ~TextArea();

    /**
     * @note[short] MacOS (ARM): 0x29fc98
     * @note[short] MacOS (Intel): 0x30cc20
     * @note[short] Windows: 0x89e30
     * @note[short] iOS: 0x11af0c
     * @note[short] Android
     */
    static TextArea* create(std::string str, char const* font, float scale, float width, cocos2d::CCPoint anchor, float lineHeight, bool disableColor, int maxEmoji);

    /**
     * @note[short] MacOS (ARM): 0x2a0c34
     * @note[short] MacOS (Intel): 0x30dcb0
     * @note[short] Windows: 0x8a940
     * @note[short] iOS: 0x11b978
     * @note[short] Android
     */
    virtual void update(float dt);

    /**
     * @note[short] MacOS (ARM): 0x2a0c30
     * @note[short] MacOS (Intel): 0x30dca0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x11b974
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x2a0a8c
     * @note[short] MacOS (Intel): 0x30db00
     * @note[short] Windows: 0x8a850
     * @note[short] iOS: 0x11b7d8
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char opacity);

    /**
     * @note[short] MacOS (ARM): 0x2a0af8
     * @note[short] MacOS (Intel): 0x30db70
     * @note[short] Windows: 0x8a890
     * @note[short] Android
     */
    void colorAllCharactersTo(cocos2d::ccColor3B color);

    /**
     * @note[short] MacOS (ARM): 0x2a0bbc
     * @note[short] MacOS (Intel): 0x30dc20
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void colorAllLabels(cocos2d::ccColor3B color);

    /**
     * @note[short] MacOS (ARM): 0x2a07bc
     * @note[short] MacOS (Intel): 0x30d840
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    float fadeIn(float duration, bool unused);

    /**
     * @note[short] MacOS (ARM): 0x2a0d74
     * @note[short] MacOS (Intel): 0x30de50
     * @note[short] Windows: 0x8ab40
     * @note[short] Android
     */
    float fadeInCharacters(float duration, float charDuration, bool fadeOut, TextFadeInStyle style);

    /**
     * @note[short] MacOS (ARM): 0x2a098c
     * @note[short] MacOS (Intel): 0x30da00
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void fadeOut(float duration);

    /**
     * @note[short] MacOS (ARM): 0x2a091c
     * @note[short] MacOS (Intel): 0x30d9a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void fadeOutAndRemove();

    /**
     * @note[short] MacOS (ARM): 0x2a08f8
     * @note[short] MacOS (Intel): 0x30d970
     * @note[short] Windows: 0x8a830
     * @note[short] Android
     */
    void finishFade();

    /**
     * @note[short] Android
     */
    TodoReturn fitString(std::string p0, float p1, float p2, float p3, float p4);

    /**
     * @note[short] MacOS (ARM): 0x2a0244
     * @note[short] MacOS (Intel): 0x30d260
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void hideAll();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x11b040
     * @note[short] Android
     */
    bool init(std::string str, char const* font, float scale, float width, cocos2d::CCPoint anchor, float lineHeight, bool disableColor, int p7);

    /**
     * @note[short] Android
     */
    void setEmoteMaxAspect(float p0);

    /**
     * @note[short] MacOS (ARM): 0x2a0220
     * @note[short] MacOS (Intel): 0x30d220
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void setIgnoreColorCode(bool ignore);

    /**
     * @note[short] Android
     */
    void setParseEmotes(int p0);

    /**
     * @note[short] MacOS (ARM): 0x29ff64
     * @note[short] MacOS (Intel): 0x30cf00
     * @note[short] Windows: 0x8a090
     * @note[short] iOS: 0x11b148
     * @note[short] Android
     */
    void setString(std::string text);

    /**
     * @note[short] MacOS (ARM): 0x2a06e0
     * @note[short] MacOS (Intel): 0x30d760
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void showAll();

    /**
     * @note[short] MacOS (ARM): 0x2a0620
     * @note[short] MacOS (Intel): 0x30d6a0
     * @note[short] Windows: 0x8a770
     * @note[short] Android
     */
    void stopAllCharacterActions();
    bool m_disableColor;
    bool m_unk259;
    int m_maxEmoji;
    float m_unk260;
    MultilineBitmapFont* m_label;
    float m_width;
    float m_unknown;
    std::string m_fontFile;
    float m_height;
    bool m_onTimerUnused;
    cocos2d::CCPoint m_anchorPoint;
    bool m_allShown;
    float m_scale;
    int m_rectHeight;
    int m_rectWidth;
    float m_maxWidth;
    cocos2d::CCPoint m_textPos;
    TextAreaDelegate* m_delegate;
    cocos2d::CCDictionary* m_shakeCharacters;
    float m_shakeElapsed;
};

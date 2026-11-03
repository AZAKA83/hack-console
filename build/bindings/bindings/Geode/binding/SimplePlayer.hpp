#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCSprite.hpp>
#include <Geode/mapping/ccTypes.hpp>

class SimplePlayer : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "SimplePlayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SimplePlayer, cocos2d::CCSprite)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SimplePlayer();

    /**
     * @note[short] MacOS (ARM): 0x2e8720
     * @note[short] MacOS (Intel): 0x3593f0
     * @note[short] Windows: 0x381b70
     * @note[short] iOS: 0x3a3d08
     * @note[short] Android: Rebinded
     */
     ~SimplePlayer();

    /**
     * @note[short] MacOS (ARM): 0x2e37a8
     * @note[short] MacOS (Intel): 0x3540a0
     * @note[short] Windows: 0x381d40
     * @note[short] Android
     */
    static SimplePlayer* create(int id);

    /**
     * @note[short] MacOS (ARM): 0x2e9430
     * @note[short] MacOS (Intel): 0x35a1b0
     * @note[short] Windows: 0x383200
     * @note[short] iOS: 0x3a458c
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char opacity);

    /**
     * @note[short] MacOS (ARM): 0x2e906c
     * @note[short] MacOS (Intel): 0x359df0
     * @note[short] Windows: 0x382600
     * @note[short] iOS: 0x3a41dc
     * @note[short] Android
     */
    virtual void setColor(cocos2d::ccColor3B const& color);

    /**
     * @note[short] MacOS (ARM): 0x2e8e40
     * @note[short] MacOS (Intel): 0x359be0
     * @note[short] Android
     */
    void asyncLoadIcon(int id, IconType type);

    /**
     * @note[short] MacOS (ARM): 0x2e3864
     * @note[short] MacOS (Intel): 0x354160
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void createRobotSprite(int frame);

    /**
     * @note[short] MacOS (ARM): 0x2e38bc
     * @note[short] MacOS (Intel): 0x3541b0
     * @note[short] Windows: 0x382570
     * @note[short] Android
     */
    void createSpiderSprite(int frame);

    /**
     * @note[short] MacOS (ARM): 0x2e76ec
     * @note[short] MacOS (Intel): 0x358240
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void disableCustomGlowColor();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void disableGlowOutline();

    /**
     * @note[short] MacOS (ARM): 0x2e76cc
     * @note[short] MacOS (Intel): 0x358210
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void enableCustomGlowColor(cocos2d::ccColor3B const& color);

    /**
     * @note[short] MacOS (ARM): 0x2e8f58
     * @note[short] MacOS (Intel): 0x359cf0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void hideAll();

    /**
     * @note[short] MacOS (ARM): 0x2e9158
     * @note[short] MacOS (Intel): 0x359ed0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void hideSecondary();

    /**
     * @note[short] MacOS (ARM): 0x2e901c
     * @note[short] MacOS (Intel): 0x359da0
     * @note[short] Android
     */
    void iconFinishedLoading(int id, IconType type);

    /**
     * @note[short] MacOS (ARM): 0x2e8850
     * @note[short] MacOS (Intel): 0x3594f0
     * @note[short] Windows: 0x381e40
     * @note[short] Android
     */
    bool init(int id);

    /**
     * @note[short] MacOS (ARM): 0x2e7684
     * @note[short] MacOS (Intel): 0x3581d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void setColors(cocos2d::ccColor3B const& color1, cocos2d::ccColor3B const& color2);

    /**
     * @note[short] MacOS (ARM): 0x2e920c
     * @note[short] MacOS (Intel): 0x359f80
     * @note[short] Windows: 0x382fd0
     * @note[short] Android
     */
    void setFrames(char const* firstFrame, char const* secondFrame, char const* ufoFrame, char const* glowFrame, char const* extraFrame);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setGlowOutline(cocos2d::ccColor3B color);

    /**
     * @note[short] MacOS (ARM): 0x2e90cc
     * @note[short] MacOS (Intel): 0x359e50
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void setSecondColor(cocos2d::ccColor3B const& color);

    /**
     * @note[short] MacOS (ARM): 0x2e90fc
     * @note[short] MacOS (Intel): 0x359e80
     * @note[short] Windows: 0x382630
     * @note[short] Android
     */
    void tryEnableCustomGlowColor(int id);

    /**
     * @note[short] MacOS (ARM): 0x2e71b0
     * @note[short] MacOS (Intel): 0x357c90
     * @note[short] Windows: 0x3826d0
     * @note[short] Android
     */
    void updateColors();

    /**
     * @note[short] MacOS (ARM): 0x2e3a74
     * @note[short] MacOS (Intel): 0x354360
     * @note[short] Windows: 0x382a80
     * @note[short] Android
     */
    void updatePlayerFrame(int id, IconType type);
    cocos2d::CCSprite* m_firstLayer;
    cocos2d::CCSprite* m_secondLayer;
    cocos2d::CCSprite* m_birdDome;
    cocos2d::CCSprite* m_outlineSprite;
    cocos2d::CCSprite* m_detailSprite;
    GJRobotSprite* m_robotSprite;
    GJSpiderSprite* m_spiderSprite;
    int m_unknown;
    bool m_hasGlowOutline;
    int m_iconRequestID;
    bool m_hasCustomGlowColor;
    cocos2d::ccColor3B m_glowColor;
    bool m_iconLoaded;
};

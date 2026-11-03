#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/CCAnimatedSprite.hpp>
#include <Geode/mapping/ccTypes.hpp>

class GJRobotSprite : public CCAnimatedSprite {
public:
    static constexpr auto CLASS_NAME = "GJRobotSprite";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJRobotSprite, CCAnimatedSprite)

    /**
     * @note[short] MacOS (ARM): 0x5c7924
     * @note[short] MacOS (Intel): 0x6ad450
     * @note[short] Windows: 0x3ac690
     * @note[short] iOS: 0x2dc2e0
     * @note[short] Android: Rebinded
     */
    virtual  ~GJRobotSprite();

    /**
     * @note[short] MacOS (ARM): 0x5c798c
     * @note[short] MacOS (Intel): 0x6ad560
     * @note[short] Windows: 0x3ac740
     * @note[short] Android
     */
    static GJRobotSprite* create(int frame);

    /**
     * @note[short] MacOS (ARM): 0x5c8ae0
     * @note[short] MacOS (Intel): 0x6ae920
     * @note[short] Windows: 0x3ad4c0
     * @note[short] iOS: 0x2dd0fc
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char opacity);

    /**
     * @note[short] MacOS (ARM): 0x5c8bc4
     * @note[short] MacOS (Intel): 0x6aea30
     * @note[short] Windows: 0x3adbb0
     * @note[short] iOS: 0x2dd1e0
     * @note[short] Android
     */
    virtual void hideSecondary();

    /**
     * @note[short] MacOS (ARM): 0x5c8798
     * @note[short] MacOS (Intel): 0x6ae530
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void hideGlow();

    /**
     * @note[short] MacOS (ARM): 0x5c7ac4
     * @note[short] MacOS (Intel): 0x6ad6a0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool init(int frame);

    /**
     * @note[short] MacOS (ARM): 0x5c7b54
     * @note[short] MacOS (Intel): 0x6ad710
     * @note[short] Windows: 0x3ac7f0
     * @note[short] Android
     */
    bool init(int frame, std::string animName);

    /**
     * @note[short] MacOS (ARM): 0x5c8784
     * @note[short] MacOS (Intel): 0x6ae510
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void showGlow();

    /**
     * @note[short] MacOS (ARM): 0x5c87ac
     * @note[short] MacOS (Intel): 0x6ae550
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateColor01(cocos2d::ccColor3B color);

    /**
     * @note[short] MacOS (ARM): 0x5c8a54
     * @note[short] MacOS (Intel): 0x6ae880
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateColor02(cocos2d::ccColor3B color);

    /**
     * @note[short] MacOS (ARM): 0x5c87c0
     * @note[short] MacOS (Intel): 0x6ae570
     * @note[short] Windows: 0x3acfc0
     * @note[short] Android
     */
    void updateColors();

    /**
     * @note[short] MacOS (ARM): 0x5c8084
     * @note[short] MacOS (Intel): 0x6adcb0
     * @note[short] Windows: 0x3ad5c0
     * @note[short] Android
     */
    void updateFrame(int frame);

    /**
     * @note[short] MacOS (ARM): 0x5c8a64
     * @note[short] MacOS (Intel): 0x6ae8a0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateGlowColor(cocos2d::ccColor3B color, bool simple);
    cocos2d::CCArray* m_unkArray;
    bool m_hasExtra;
    cocos2d::ccColor3B m_color;
    cocos2d::ccColor3B m_secondColor;
    cocos2d::CCArray* m_secondArray;
    cocos2d::CCSprite* m_glowSprite;
    cocos2d::CCSprite* m_extraSprite;
    IconType m_iconType;
    int m_iconRequestID;
    CCSpritePart* m_headSprite;
    CCSpritePart* m_footSprite;
};

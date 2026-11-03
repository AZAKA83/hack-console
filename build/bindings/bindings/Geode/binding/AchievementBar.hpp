#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNodeRGBA.hpp>

class AchievementBar : public cocos2d::CCNodeRGBA {
public:
    static constexpr auto CLASS_NAME = "AchievementBar";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(AchievementBar, cocos2d::CCNodeRGBA)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     AchievementBar();

    /**
     * @note[short] Windows: 0x95c50
     * @note[short] iOS: 0x3084f8
     * @note[short] Android: Rebinded
     */
    virtual  ~AchievementBar();

    /**
     * @note[short] MacOS (ARM): 0x607734
     * @note[short] MacOS (Intel): 0x6f5630
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static AchievementBar* create(char const* title, char const* desc, char const* icon, bool quest);

    /**
     * @note[short] MacOS (ARM): 0x609000
     * @note[short] MacOS (Intel): 0x6f6f90
     * @note[short] Windows: 0x975b0
     * @note[short] iOS: 0x309840
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char opacity);

    /**
     * @note[short] MacOS (ARM): 0x607804
     * @note[short] MacOS (Intel): 0x6f56f0
     * @note[short] Windows: 0x95ca0
     * @note[short] Android
     */
    bool init(char const* title, char const* desc, char const* icon, bool quest);

    /**
     * @note[short] MacOS (ARM): 0x608dc0
     * @note[short] MacOS (Intel): 0x6f6d40
     * @note[short] Windows: 0x97330
     * @note[short] Android
     */
    void show();
    cocos2d::CCLayerColor* m_layerColor;
    float m_offsetUnused;
    cocos2d::CCScene* m_nextScene;
    cocos2d::extension::CCScale9Sprite* m_bg;
    cocos2d::extension::CCScale9Sprite* m_bg2;
    cocos2d::CCSprite* m_achievementGlowSprite;
    cocos2d::CCSprite* m_achievementSprite;
    cocos2d::CCLabelBMFont* m_titleLabel;
    TextArea* m_achievementDescription;
};

#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>
#include <Geode/mapping/ccTypes.hpp>

class GauntletNode : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GauntletNode";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GauntletNode, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GauntletNode();

    /**
     * @note[short] MacOS (ARM): 0x4f04e0
     * @note[short] MacOS (Intel): 0x5a13b0
     * @note[short] Windows: 0x301220
     * @note[short] iOS: 0x256850
     * @note[short] Android: Rebinded
     */
    virtual  ~GauntletNode();

    /**
     * @note[short] MacOS (Intel): 0x907300
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static GauntletNode* create(GJMapPack* gauntlet);

    /**
     * @note[short] MacOS (ARM): 0x4f1f38
     * @note[short] MacOS (Intel): 0x5a2e80
     * @note[short] Windows: 0x302f30
     * @note[short] Android
     */
    static std::string frameForType(GauntletType type);

    /**
     * @note[short] MacOS (ARM): 0x4f1f08
     * @note[short] MacOS (Intel): 0x5a2e40
     * @note[short] Windows: 0x3042b0
     * @note[short] Android
     */
    static std::string nameForType(GauntletType type);

    /**
     * @note[short] MacOS (ARM): 0x4f0574
     * @note[short] MacOS (Intel): 0x5a1490
     * @note[short] Windows: 0x301280
     * @note[short] Android
     */
    void generateNode();

    /**
     * @note[short] MacOS (ARM): 0x4f0520
     * @note[short] MacOS (Intel): 0x5a1440
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool init(GJMapPack* gauntlet);

    /**
     * @note[short] MacOS (ARM): 0x4ef5e0
     * @note[short] MacOS (Intel): 0x5a05e0
     * @note[short] Windows: 0x302ef0
     * @note[short] Android
     */
    void onClaimReward();

    /**
     * @note[short] MacOS (ARM): 0x4efae4
     * @note[short] MacOS (Intel): 0x5a0a80
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void onUnlock();

    /**
     * @note[short] MacOS (ARM): 0x4efc50
     * @note[short] MacOS (Intel): 0x5a0be0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void showUnlockAnimation();
    cocos2d::CCNode* m_gauntletInfoNode;
    cocos2d::CCNode* m_rewardNode;
    cocos2d::ccColor3B m_labelColor;
    cocos2d::ccColor3B m_backgroundColor;
    GJMapPack* m_gauntlet;
    bool m_locked;
};

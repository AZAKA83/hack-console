#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/ChallengesPage.hpp>
#include <Geode/binding/GJChallengeItem.hpp>
#include <Geode/mapping/CCNode.hpp>
#include <Geode/mapping/CCPoint.hpp>

class ChallengeNode : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "ChallengeNode";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(ChallengeNode, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ChallengeNode();

    /**
     * @note[short] MacOS (ARM): 0x313050
     * @note[short] MacOS (Intel): 0x3883c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x36924
     * @note[short] Android: Rebinded
     */
     ~ChallengeNode();

    /**
     * @note[short] MacOS (ARM): 0x312b88
     * @note[short] MacOS (Intel): 0x387ec0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static ChallengeNode* create(GJChallengeItem* challengeItem, ChallengesPage* challengesPage, bool isNew);

    /**
     * @note[short] MacOS (ARM): 0x313108
     * @note[short] MacOS (Intel): 0x388490
     * @note[short] Windows: 0x9f430
     * @note[short] Android
     */
    bool init(GJChallengeItem* challengeItem, ChallengesPage* challengesPage, bool isNew);

    /**
     * @note[short] MacOS (ARM): 0x313dcc
     * @note[short] MacOS (Intel): 0x389090
     * @note[short] Windows: 0xa0540
     * @note[short] Android
     */
    void onClaimReward(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x312c5c
     * @note[short] MacOS (Intel): 0x387f90
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateTimeLabel(std::string text);
    ChallengesPage* m_challengesPage;
    GJChallengeItem* m_challengeItem;
    cocos2d::CCPoint m_unkPoint;
    cocos2d::CCLabelBMFont* m_countdownLabel;
    bool m_unloaded;
};

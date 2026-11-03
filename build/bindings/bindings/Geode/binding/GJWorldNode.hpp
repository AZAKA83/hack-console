#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/ccTypes.hpp>

class GJWorldNode : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GJWorldNode";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJWorldNode, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): 0x333dc8
     * @note[short] MacOS (Intel): 0x3aca80
     * @note[short] Android
     */
    static GJWorldNode* create(int type, WorldSelectLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x334f98
     * @note[short] MacOS (Intel): 0x3adc80
     * @note[short] Android
     */
    float addDotsToLevel(int levelID, bool animate);

    /**
     * @note[short] MacOS (ARM): 0x335628
     * @note[short] MacOS (Intel): 0x3ae380
     * @note[short] Android
     */
    cocos2d::CCPoint dotPositionForLevel(int levelID, int index);

    /**
     * @note[short] MacOS (ARM): 0x33458c
     * @note[short] MacOS (Intel): 0x3ad1d0
     * @note[short] Android
     */
    bool init(int type, WorldSelectLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x334f1c
     * @note[short] MacOS (Intel): 0x3adc00
     * @note[short] Android
     */
    void onLevel(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3353bc
     * @note[short] MacOS (Intel): 0x3ae0f0
     * @note[short] Android
     */
    void playStep1();

    /**
     * @note[short] Android
     */
    void playStep2();

    /**
     * @note[short] Android
     */
    void playStep3();

    /**
     * @note[short] MacOS (ARM): 0x334e04
     * @note[short] MacOS (Intel): 0x3adae0
     * @note[short] Android
     */
    cocos2d::CCPoint positionForLevelButton(int levelID);

    /**
     * @note[short] MacOS (ARM): 0x333724
     * @note[short] MacOS (Intel): 0x3ac420
     * @note[short] Android
     */
    void unlockActiveItem();
    cocos2d::CCArray* m_activeObjects;
    CCMenuItemSpriteExtra* m_activeButton;
    GJGameLevel* m_level;
    WorldSelectLayer* m_selectLayer;
    bool m_unlocked;
    cocos2d::CCPoint m_levelPosition;
    cocos2d::ccColor3B m_particleColor;
    int m_islandType;
    bool m_islandUnlocked;
    cocos2d::CCSprite* m_arrowSprite;
};

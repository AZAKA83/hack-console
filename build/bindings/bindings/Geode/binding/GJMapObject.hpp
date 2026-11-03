#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>
#include <Geode/mapping/CCPoint.hpp>

class GJMapObject : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GJMapObject";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJMapObject, cocos2d::CCNode)

    /**
     * @note[short] MacOS (Intel): 0x250a90
     * @note[short] Android
     */
    static GJMapObject* create(cocos2d::CCNode* parent);

    /**
     * @note[short] MacOS (ARM): 0x1f9d74
     * @note[short] MacOS (Intel): 0x250c60
     * @note[short] Android
     */
    static GJMapObject* createMonster(int objectID);

    /**
     * @note[short] MacOS (ARM): 0x1f9c74
     * @note[short] MacOS (Intel): 0x250b60
     * @note[short] Android
     */
    bool init(cocos2d::CCNode* parent);

    /**
     * @note[short] MacOS (ARM): 0x1fa898
     * @note[short] MacOS (Intel): 0x251800
     * @note[short] Android
     */
    void monsterIdle();

    /**
     * @note[short] MacOS (ARM): 0x1fa6a0
     * @note[short] MacOS (Intel): 0x251600
     * @note[short] Android
     */
    void monsterJump();

    /**
     * @note[short] Android
     */
    void moveFinished();

    /**
     * @note[short] MacOS (ARM): 0x1fa49c
     * @note[short] MacOS (Intel): 0x2513f0
     * @note[short] Android
     */
    void moveMonster();

    /**
     * @note[short] MacOS (ARM): 0x1fa4dc
     * @note[short] MacOS (Intel): 0x251430
     * @note[short] Android
     */
    void moveMonster(cocos2d::CCPoint position, float offset);

    /**
     * @note[short] MacOS (ARM): 0x1fa220
     * @note[short] MacOS (Intel): 0x251140
     * @note[short] Android
     */
    void playerJump();

    /**
     * @note[short] MacOS (ARM): 0x1fa460
     * @note[short] MacOS (Intel): 0x2513b0
     * @note[short] Android
     */
    void setObjectOrigin(cocos2d::CCPoint position, float offset);

    /**
     * @note[short] MacOS (Intel): 0x250f60
     * @note[short] Android
     */
    void startMonsterJumpLoop();

    /**
     * @note[short] MacOS (ARM): 0x1fa1c8
     * @note[short] MacOS (Intel): 0x2510f0
     * @note[short] Android
     */
    void startPlayerJumpLoop();

    /**
     * @note[short] MacOS (ARM): 0x1faafc
     * @note[short] MacOS (Intel): 0x251aa0
     * @note[short] Android
     */
    void touchMonster();

    /**
     * @note[short] MacOS (ARM): 0x1fa010
     * @note[short] MacOS (Intel): 0x250f00
     * @note[short] Android
     */
    void updateShadow(float scaleX, float scaleY, cocos2d::CCPoint position);
    float m_jumpStopTime;
    cocos2d::CCNode* m_mainNode;
    cocos2d::CCSprite* m_shadowSprite;
    cocos2d::CCPoint m_objectOrigin;
    float m_objectOffset;
    bool m_monsterIdle;
    bool m_monsterMoving;
    float m_moveStopTime;
    int m_monstersTouched;
};

#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCDrawNode.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/ccTypes.hpp>

class HardStreak : public cocos2d::CCDrawNode {
public:
    static constexpr auto CLASS_NAME = "HardStreak";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(HardStreak, cocos2d::CCDrawNode)

    /**
     * @note[short] MacOS (ARM): 0x5cf98
     * @note[short] MacOS (Intel): 0x63f10
     * @note[short] Windows: 0x3bf930
     * @note[short] iOS: 0x65f14
     * @note[short] Android: Rebinded
     */
    virtual  ~HardStreak();

    /**
     * @note[short] MacOS (ARM): 0x5cfe0
     * @note[short] MacOS (Intel): 0x63fb0
     * @note[short] Windows: 0x3bf9a0
     * @note[short] Android
     */
    static HardStreak* create();

    /**
     * @note[short] MacOS (ARM): 0x5d0a8
     * @note[short] MacOS (Intel): 0x64080
     * @note[short] Windows: 0x3bfa70
     * @note[short] iOS: 0x65fa0
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x5dbbc
     * @note[short] MacOS (Intel): 0x64dd0
     * @note[short] Windows: 0x3c0710
     * @note[short] Android
     */
    void addPoint(cocos2d::CCPoint point);

    /**
     * @note[short] Windows: 0x3c0560
     * @note[short] Android
     */
    void appendQuad(cocos2d::CCPoint const* vertices, cocos2d::ccColor4F const& color);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void clearAboveXPos(float x);

    /**
     * @note[short] MacOS (ARM): 0x5de9c
     * @note[short] MacOS (Intel): 0x65110
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void clearBehindXPos(float x);

    /**
     * @note[short] MacOS (ARM): 0x5e118
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    HardStreak* createDuplicate();

    /**
     * @note[short] Android
     */
    TodoReturn ensureQuadCapacity(unsigned int p0);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void firstSetup();

    /**
     * @note[short] MacOS (ARM): 0x5e0e4
     * @note[short] MacOS (Intel): 0x65330
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    double normalizeAngle(double angle);

    /**
     * @note[short] MacOS (ARM): 0x5dfcc
     * @note[short] MacOS (Intel): 0x65250
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    cocos2d::CCPoint quadCornerOffset(cocos2d::CCPoint start, cocos2d::CCPoint end, float width);

    /**
     * @note[short] MacOS (ARM): 0x5db98
     * @note[short] MacOS (Intel): 0x64db0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void reset();

    /**
     * @note[short] MacOS (ARM): 0x5db50
     * @note[short] MacOS (Intel): 0x64d50
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void resumeStroke();

    /**
     * @note[short] MacOS (ARM): 0x5d1cc
     * @note[short] MacOS (Intel): 0x641b0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void scheduleAutoUpdate();

    /**
     * @note[short] MacOS (ARM): 0x5db5c
     * @note[short] MacOS (Intel): 0x64d70
     * @note[short] Windows: 0x3bfb20
     * @note[short] Android
     */
    void stopStroke();

    /**
     * @note[short] MacOS (ARM): 0x5d1dc
     * @note[short] MacOS (Intel): 0x641d0
     * @note[short] Windows: 0x3bfb60
     * @note[short] Android
     */
    void updateStroke(float dt);
    cocos2d::CCArray* m_pointArray;
    cocos2d::CCPoint m_currentPoint;
    float m_waveSize;
    float m_pulseSize;
    bool m_isSolid;
    bool m_isFlipped;
    bool m_drawStreak;
};

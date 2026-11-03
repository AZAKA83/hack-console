#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/ccTypes.hpp>
#include <Geode/mapping/vector.hpp>

class DeathHistogram : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "DeathHistogram";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(DeathHistogram, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x1107a0
     * @note[short] Android: Rebinded
     */
    virtual  ~DeathHistogram();

    /**
     * @note[short] Android
     */
    static DeathHistogram* create(cocos2d::CCSize p0);

    /**
     * @note[short] Android
     */
    TodoReturn handleTouchBegan(cocos2d::CCTouch* p0);

    /**
     * @note[short] Android
     */
    TodoReturn handleTouchEnded(cocos2d::CCTouch* p0);

    /**
     * @note[short] Android
     */
    TodoReturn handleTouchMoved(cocos2d::CCTouch* p0);

    /**
     * @note[short] Android
     */
    bool init(cocos2d::CCSize p0);

    /**
     * @note[short] Android
     */
    TodoReturn persistScroll(std::string const& p0);

    /**
     * @note[short] Windows: 0x111610
     * @note[short] Android
     */
    TodoReturn rebuildAxis(char const* p0, int p1, float p2, float p3, char const* p4);

    /**
     * @note[short] Android
     */
    TodoReturn restoreScroll(std::string const& p0);

    /**
     * @note[short] Windows: 0x112eb0
     * @note[short] Android
     */
    void setAttemptLine(std::vector<int> const& p0, std::vector<int> const& p1, cocos2d::ccColor3B p2, int p3, cocos2d::ccColor3B p4, bool p5);

    /**
     * @note[short] Windows: 0x111dd0
     * @note[short] Android
     */
    void setData(std::vector<int> const& p0, int p1, bool p2, bool p3, bool p4);

    /**
     * @note[short] Windows: 0x114220
     * @note[short] Android
     */
    void setProgression(std::vector<int> const& p0, std::vector<int> const& p1, std::vector<int> const& p2);

    /**
     * @note[short] Windows: 0x1126a0
     * @note[short] Android
     */
    void setSurvival(std::vector<int> const& p0, bool p1, bool p2, int p3);
};

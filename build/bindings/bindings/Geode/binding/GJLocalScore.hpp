#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCObject.hpp>

class GJLocalScore : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "GJLocalScore";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJLocalScore, cocos2d::CCObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GJLocalScore();

    /**
     * @note[short] Windows: 0x14e8e0
     * @note[short] Android: Rebinded
     */
    virtual  ~GJLocalScore();

    /**
     * @note[short] MacOS (ARM): 0x4dd2a0
     * @note[short] MacOS (Intel): 0x58ca70
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static GJLocalScore* create(int points, int type);

    /**
     * @note[short] MacOS (ARM): 0x4dd310
     * @note[short] MacOS (Intel): 0x58cae0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init(int points, int type);
    int m_points;
    LevelLeaderboardType m_type;
    bool m_currentScore;
};

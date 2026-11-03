#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCObject.hpp>
#include <Geode/mapping/SeedValue.hpp>

class GJChallengeItem : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "GJChallengeItem";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJChallengeItem, cocos2d::CCObject)

    /**
     * @note[short] Windows: 0x2d6800
     * @note[short] iOS: 0x3df264
     * @note[short] Android: Rebinded
     */
    virtual  ~GJChallengeItem();

    /**
     * @note[short] MacOS (ARM): 0x4fe8c
     * @note[short] MacOS (Intel): 0x562e0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static GJChallengeItem* create();

    /**
     * @note[short] MacOS (ARM): 0x4fd3c
     * @note[short] MacOS (Intel): 0x56180
     * @note[short] Windows: 0x2f9900
     * @note[short] Android
     */
    static GJChallengeItem* create(GJChallengeType challengeType, int goal, int reward, int timeLeft, std::string questName);

    /**
     * @note[short] MacOS (ARM): 0x4fb3c
     * @note[short] MacOS (Intel): 0x55f70
     * @note[short] Windows: 0x2f9690
     * @note[short] Android
     */
    static GJChallengeItem* createFromString(std::string string);

    /**
     * @note[short] MacOS (ARM): 0x4ff50
     * @note[short] MacOS (Intel): 0x563a0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static GJChallengeItem* createWithCoder(DS_Dictionary* dsdict);

    /**
     * @note[short] MacOS (ARM): 0x500f8
     * @note[short] MacOS (Intel): 0x56540
     * @note[short] Windows: 0x2f9a80
     * @note[short] iOS: 0x3df058
     * @note[short] Android
     */
    virtual void encodeWithCoder(DS_Dictionary* dsdict);

    /**
     * @note[short] MacOS (ARM): 0x501d4
     * @note[short] MacOS (Intel): 0x56610
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3df134
     * @note[short] Android
     */
    virtual bool canEncode();

    /**
     * @note[short] MacOS (ARM): 0x4ffa4
     * @note[short] MacOS (Intel): 0x563e0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void dataLoaded(DS_Dictionary* dsdict);

    /**
     * @note[short] MacOS (ARM): 0x33004
     * @note[short] MacOS (Intel): 0x391a0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void incrementCount(int add);

    /**
     * @note[short] MacOS (ARM): 0x4fec4
     * @note[short] MacOS (Intel): 0x56310
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool init(GJChallengeType challengeType, int goal, int reward, int timeLeft, std::string questName);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setCount(int value);
    GJChallengeType m_challengeType;
    geode::SeedValueRSV m_count;
    geode::SeedValueRSV m_reward;
    geode::SeedValueRSV m_goal;
    int m_timeLeft;
    bool m_canClaim;
    int m_position;
    std::string m_name;
};

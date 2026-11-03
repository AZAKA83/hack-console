#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>

class AchievementManager : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "AchievementManager";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(AchievementManager, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x9db0
     * @note[short] iOS: 0x10e300
     * @note[short] Android: Rebinded
     */
    virtual  ~AchievementManager();

    /**
     * @note[short] MacOS (ARM): 0x70a524
     * @note[short] MacOS (Intel): 0x80a730
     * @note[short] Windows: 0xa000
     * @note[short] iOS: 0xdc904
     * @note[short] Android
     */
    static AchievementManager* sharedState();

    /**
     * @note[short] MacOS (ARM): 0x70a614
     * @note[short] MacOS (Intel): 0x80a840
     * @note[short] Windows: 0xa0c0
     * @note[short] iOS: 0xdc984
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x75927c
     * @note[short] MacOS (Intel): 0x864530
     * @note[short] Windows: 0x3ca10
     * @note[short] Android
     */
    std::string achievementForUnlock(int id, UnlockType type);

    /**
     * @note[short] MacOS (ARM): 0x7589bc
     * @note[short] MacOS (Intel): 0x863d20
     * @note[short] Windows: 0xa150
     * @note[short] Android
     */
    void addAchievement(std::string identifier, std::string title, std::string achievedDescription, std::string unachievedDescription, std::string icon, int limits);

    /**
     * @note[short] MacOS (Intel): 0x80a8d0
     * @note[short] Windows: 0xa6d0
     * @note[short] Android
     */
    void addManualAchievements();

    /**
     * @note[short] MacOS (ARM): 0x758e3c
     * @note[short] MacOS (Intel): 0x864170
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool areAchievementsEarned(cocos2d::CCArray* achievements);

    /**
     * @note[short] MacOS (ARM): 0x758dac
     * @note[short] MacOS (Intel): 0x8640a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void checkAchFromUnlock(char const* id);

    /**
     * @note[short] MacOS (ARM): 0x758d24
     * @note[short] MacOS (Intel): 0x864000
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void dataLoaded(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x758d90
     * @note[short] MacOS (Intel): 0x864070
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void encodeDataTo(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x758cd8
     * @note[short] MacOS (Intel): 0x863fb0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void firstSetup();

    /**
     * @note[short] MacOS (ARM): 0x759b8c
     * @note[short] MacOS (Intel): 0x864f90
     * @note[short] Android
     */
    cocos2d::CCDictionary* getAchievementRewardDict();

    /**
     * @note[short] MacOS (Intel): 0x864330
     * @note[short] Windows: 0x3c560
     * @note[short] Android
     */
    cocos2d::CCDictionary* getAchievementsWithID(char const* id);

    /**
     * @note[short] MacOS (ARM): 0x759014
     * @note[short] MacOS (Intel): 0x864320
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    cocos2d::CCArray* getAllAchievements();

    /**
     * @note[short] MacOS (ARM): 0x758310
     * @note[short] MacOS (Intel): 0x68140
     * @note[short] Windows: 0x3c320
     * @note[short] Android
     */
    cocos2d::CCArray* getAllAchievementsSorted(bool available);

    /**
     * @note[short] MacOS (ARM): 0x759120
     * @note[short] MacOS (Intel): 0x864410
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool isAchievementAvailable(std::string id);

    /**
     * @note[short] MacOS (ARM): 0x758ec8
     * @note[short] MacOS (Intel): 0x8641e0
     * @note[short] Windows: 0x3c230
     * @note[short] Android
     */
    bool isAchievementEarned(char const* ach);

    /**
     * @note[short] MacOS (ARM): 0x7591c8
     * @note[short] MacOS (Intel): 0x864490
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    int limitForAchievement(std::string id);

    /**
     * @note[short] MacOS (ARM): 0x7598d8
     * @note[short] MacOS (Intel): 0x864cb0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void notifyAchievement(char const* title, char const* description, char const* icon);

    /**
     * @note[short] MacOS (ARM): 0x7596dc
     * @note[short] MacOS (Intel): 0x864af0
     * @note[short] Windows: 0x3ccb0
     * @note[short] Android
     */
    void notifyAchievementWithID(char const* id);

    /**
     * @note[short] MacOS (ARM): 0x758fec
     * @note[short] MacOS (Intel): 0x8642f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    int percentageForCount(int count, int total);

    /**
     * @note[short] MacOS (Intel): 0x864200
     * @note[short] Windows: 0x3c250
     * @note[short] Android
     */
    int percentForAchievement(char const* id);

    /**
     * @note[short] MacOS (ARM): 0x759a1c
     * @note[short] MacOS (Intel): 0x864de0
     * @note[short] Windows: 0x3cff0
     * @note[short] Android
     */
    void reportAchievementWithID(char const* id, int percent, bool dontNotify);

    /**
     * @note[short] MacOS (ARM): 0x557b88
     * @note[short] MacOS (Intel): 0x864f60
     * @note[short] Android
     */
    void reportPlatformAchievementWithID(char const* id, int percent);

    /**
     * @note[short] MacOS (ARM): 0x759924
     * @note[short] MacOS (Intel): 0x864d00
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void resetAchievement(char const* id);

    /**
     * @note[short] MacOS (ARM): 0x759b84
     * @note[short] MacOS (Intel): 0x864f70
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void resetAchievements();

    /**
     * @note[short] MacOS (ARM): 0x758da8
     * @note[short] MacOS (Intel): 0x864090
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void setup();

    /**
     * @note[short] MacOS (ARM): 0x7585b0
     * @note[short] MacOS (Intel): 0x8638b0
     * @note[short] Windows: 0x3c630
     * @note[short] Android
     */
    void storeAchievementUnlocks();
    cocos2d::CCArray* m_allAchievements;
    cocos2d::CCDictionary* m_platformAchievements;
    cocos2d::CCDictionary* m_achievementUnlocks;
    void* m_unkPtrUnused;
    cocos2d::CCDictionary* m_reportedAchievements;
    bool m_dontNotify;
    cocos2d::CCArray* m_allAchievementsSorted;
    int m_order;
    cocos2d::CCDictionary* m_unAchieved;
};

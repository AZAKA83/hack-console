#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>
#include <Geode/mapping/SeedValue.hpp>
#include <Geode/mapping/map.hpp>
#include <Geode/mapping/set.hpp>
#include <Geode/mapping/unordered_map.hpp>

class GameStatsManager : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GameStatsManager";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GameStatsManager, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x2d68e0
     * @note[short] iOS: 0x3c331c
     * @note[short] Android: Rebinded
     */
    virtual  ~GameStatsManager();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static GameStatsManager* get();

    /**
     * @note[short] MacOS (ARM): 0x1aebc
     * @note[short] MacOS (Intel): 0x1f250
     * @note[short] Windows: 0x2d6890
     * @note[short] iOS: 0x3c3198
     * @note[short] Android
     */
    static GameStatsManager* sharedState();

    /**
     * @note[short] MacOS (ARM): 0x34344
     * @note[short] MacOS (Intel): 0x3a4d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3d2b20
     * @note[short] Android
     */
    static int dailyRecallPrice(int p0);

    /**
     * @note[short] MacOS (ARM): 0x1b200
     * @note[short] MacOS (Intel): 0x1f730
     * @note[short] Windows: 0x2d6ae0
     * @note[short] iOS: 0x3c3334
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x2a8d08
     * @note[short] MacOS (Intel): 0x316d40
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    int accountIDForIcon(int id, UnlockType type);

    /**
     * @note[short] MacOS (ARM): 0x37a34
     * @note[short] MacOS (Intel): 0x3de50
     * @note[short] Windows: 0x2ee330
     * @note[short] Android
     */
    void addSimpleSpecialChestReward(std::string key, UnlockType type, int id, bool unused);

    /**
     * @note[short] MacOS (ARM): 0x379e8
     * @note[short] MacOS (Intel): 0x3de10
     * @note[short] Windows: 0x2ee540
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void addSpecialRewardDescription(std::string key, std::string description);

    /**
     * @note[short] MacOS (ARM): 0x260f0
     * @note[short] MacOS (Intel): 0x2bde0
     * @note[short] Windows: 0x2d9f30
     * @note[short] Android
     */
    void addStoreItem(int index, int id, int unlockType, int price, ShopType shopType);

    /**
     * @note[short] MacOS (ARM): 0x32658
     * @note[short] MacOS (Intel): 0x388a0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool areChallengesLoaded();

    /**
     * @note[short] MacOS (ARM): 0x31b08
     * @note[short] MacOS (Intel): 0x37dd0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool areRewardsLoaded();

    /**
     * @note[short] Windows: 0x2e4380
     * @note[short] Android
     */
    int awardCurrencyForLevel(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x31020
     * @note[short] MacOS (Intel): 0x372f0
     * @note[short] Windows: 0x2e4b40
     * @note[short] Android
     */
    int awardDiamondsForLevel(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x35774
     * @note[short] MacOS (Intel): 0x3bae0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void awardOldSpecialStats();

    /**
     * @note[short] MacOS (ARM): 0x4d03c
     * @note[short] MacOS (Intel): 0x53010
     * @note[short] Windows: 0x2f65e0
     * @note[short] Android
     */
    bool awardSecretKey();

    /**
     * @note[short] MacOS (ARM): 0x3748c
     * @note[short] MacOS (Intel): 0x3d8d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool canItemBeUnlocked(int id, UnlockType type);

    /**
     * @note[short] MacOS (ARM): 0x26c40
     * @note[short] MacOS (Intel): 0x2ca20
     * @note[short] Windows: 0x2db410
     * @note[short] Android
     */
    void checkAchievement(char const* statKey);

    /**
     * @note[short] MacOS (ARM): 0x2c060
     * @note[short] MacOS (Intel): 0x32440
     * @note[short] Windows: 0x2e0880
     * @note[short] Android
     */
    void checkCoinAchievement(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x2f1fc
     * @note[short] MacOS (Intel): 0x35620
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void checkCoinsForLevel(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x335fc
     * @note[short] MacOS (Intel): 0x39760
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool claimListReward(GJLevelList* list);

    /**
     * @note[short] MacOS (ARM): 0x31dd8
     * @note[short] MacOS (Intel): 0x380f0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void collectReward(GJRewardType type, GJRewardItem* item);

    /**
     * @note[short] MacOS (ARM): 0x4d0e0
     * @note[short] MacOS (Intel): 0x530d0
     * @note[short] Android
     */
    void collectVideoReward(int orbs);

    /**
     * @note[short] MacOS (ARM): 0x33248
     * @note[short] MacOS (Intel): 0x393c0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void completedChallenge(GJChallengeItem* item);

    /**
     * @note[short] MacOS (ARM): 0x33a80
     * @note[short] Windows: 0x2e69d0
     * @note[short] Android
     */
    GJRewardItem* completedDailyLevel(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x2d1ec
     * @note[short] MacOS (Intel): 0x334a0
     * @note[short] Windows: 0x2e1d50
     * @note[short] Android
     */
    void completedDemonLevel(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x2d090
     * @note[short] Windows: 0x2e1c00
     * @note[short] Android
     */
    void completedLevel(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x2dc04
     * @note[short] MacOS (Intel): 0x33ea0
     * @note[short] Windows: 0x2e26f0
     * @note[short] Android
     */
    void completedMapPack(GJMapPack* pack);

    /**
     * @note[short] MacOS (ARM): 0x2d1ec
     * @note[short] MacOS (Intel): 0x33640
     * @note[short] Windows: 0x2e1fe0
     * @note[short] Android
     */
    void completedStarLevel(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x4cedc
     * @note[short] MacOS (Intel): 0x52eb0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    int countSecretChests(GJRewardType rewardType);

    /**
     * @note[short] MacOS (ARM): 0x4cf20
     * @note[short] MacOS (Intel): 0x52f00
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    int countUnlockedSecretChests(GJRewardType rewardType);

    /**
     * @note[short] MacOS (ARM): 0x314e4
     * @note[short] MacOS (Intel): 0x377a0
     * @note[short] Windows: 0x2e5050
     * @note[short] Android
     */
    GJRewardItem* createReward(GJRewardType type, int id, std::string str);

    /**
     * @note[short] MacOS (ARM): 0x1d1e4
     * @note[short] MacOS (Intel): 0x21e70
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void createSecretChestItems();

    /**
     * @note[short] Windows: 0x2eef10
     * @note[short] Android
     */
    void createSecretChestRewards();

    /**
     * @note[short] MacOS (ARM): 0x1d328
     * @note[short] MacOS (Intel): 0x21fc0
     * @note[short] Windows: 0x2e98b0
     * @note[short] Android
     */
    void createSpecialChestItems();

    /**
     * @note[short] MacOS (ARM): 0x1b2a8
     * @note[short] MacOS (Intel): 0x1f7e0
     * @note[short] Windows: 0x2d7220
     * @note[short] Android
     */
    void createStoreItems();

    /**
     * @note[short] MacOS (ARM): 0x4dd88
     * @note[short] MacOS (Intel): 0x53f30
     * @note[short] Windows: 0x2f70d0
     * @note[short] Android
     */
    void dataLoaded(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x4d8b0
     * @note[short] MacOS (Intel): 0x53a00
     * @note[short] Windows: 0x2f6dc0
     * @note[short] Android
     */
    void encodeDataTo(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x4d250
     * @note[short] MacOS (Intel): 0x53230
     * @note[short] Windows: 0x2f66a0
     * @note[short] Android
     */
    void firstSetup();

    /**
     * @note[short] MacOS (ARM): 0x254cc
     * @note[short] MacOS (Intel): 0x2aed0
     * @note[short] Windows: 0x2d6d00
     * @note[short] Android
     */
    void generateItemUnlockableData();

    /**
     * @note[short] MacOS (ARM): 0x30434
     * @note[short] MacOS (Intel): 0x36710
     * @note[short] Windows: 0x2e4160
     * @note[short] Android
     */
    int getAwardedCurrencyForLevel(GJGameLevel* level);

    /**
     * @note[short] Android
     */
    TodoReturn getAwardedCurrencyForLevel(GJGameLevel* p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x30e1c
     * @note[short] MacOS (Intel): 0x37130
     * @note[short] Windows: 0x2e48f0
     * @note[short] Android
     */
    int getAwardedDiamondsForLevel(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x30190
     * @note[short] MacOS (Intel): 0x364e0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    int getBaseCurrency(int stars, bool mainLevel, int levelID);

    /**
     * @note[short] MacOS (ARM): 0x301f0
     * @note[short] MacOS (Intel): 0x36530
     * @note[short] Windows: 0x2e3e90
     * @note[short] Android
     */
    int getBaseCurrencyForLevel(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x30dd4
     * @note[short] MacOS (Intel): 0x370d0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    int getBaseDiamonds(int stars);

    /**
     * @note[short] MacOS (ARM): 0x30de8
     * @note[short] MacOS (Intel): 0x370f0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    int getBonusDiamonds(int stars);

    /**
     * @note[short] MacOS (ARM): 0x32cc4
     * @note[short] MacOS (Intel): 0x38ea0
     * @note[short] Windows: 0x2e5830
     * @note[short] Android
     */
    GJChallengeItem* getChallenge(int id);

    /**
     * @note[short] MacOS (ARM): 0x33074
     * @note[short] MacOS (Intel): 0x39200
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    std::string getChallengeKey(GJChallengeItem* chal);

    /**
     * @note[short] MacOS (ARM): 0x2c524
     * @note[short] MacOS (Intel): 0x328b0
     * @note[short] Windows: 0x2e1470
     * @note[short] Android
     */
    int getCollectedCoinsForLevel(GJGameLevel* level);

    /**
     * @note[short] Android
     */
    TodoReturn getCompletedDailyIDs(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x2e0e4
     * @note[short] MacOS (Intel): 0x34360
     * @note[short] Windows: 0x2e2a70
     * @note[short] Android
     */
    cocos2d::CCArray* getCompletedMapPacks();

    /**
     * @note[short] MacOS (ARM): 0x300bc
     * @note[short] MacOS (Intel): 0x36410
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    std::string getCurrencyKey(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x33890
     * @note[short] MacOS (Intel): 0x39a10
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    std::string getDailyLevelKey(int dailyID);

    /**
     * @note[short] Android
     */
    TodoReturn getDailyStarKey(int p0);

    /**
     * @note[short] MacOS (ARM): 0x2c9f8
     * @note[short] MacOS (Intel): 0x32dc0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    const char* getDemonLevelKey(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x386c4
     * @note[short] MacOS (Intel): 0x3ea30
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    std::string getEventRewardKey(int id);

    /**
     * @note[short] MacOS (ARM): 0x37844
     * @note[short] MacOS (Intel): 0x3dc30
     * @note[short] Windows: 0x2ee460
     * @note[short] Android
     */
    std::string getGauntletRewardKey(int id);

    /**
     * @note[short] MacOS (ARM): 0x25ed0
     * @note[short] MacOS (Intel): 0x2bb50
     * @note[short] Windows: 0x2e5360
     * @note[short] Android
     */
    std::string getItemKey(int id, int type);

    /**
     * @note[short] MacOS (ARM): 0x370a4
     * @note[short] MacOS (Intel): 0x3d550
     * @note[short] Windows: 0x2e9730
     * @note[short] Android
     */
    int getItemUnlockState(int itemID, UnlockType unlockType);

    /**
     * @note[short] MacOS (ARM): 0x371a0
     * @note[short] MacOS (Intel): 0x3d610
     * @note[short] Android
     */
    int getItemUnlockStateLite(int id, UnlockType type);

    /**
     * @note[short] MacOS (ARM): 0x2c6a4
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    std::string getLevelKey(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x2c6e8
     * @note[short] MacOS (Intel): 0x32aa0
     * @note[short] Windows: 0x2e1530
     * @note[short] Android
     */
    std::string getLevelKey(int levelID, bool isOnline, bool isDaily, bool isGauntlet, bool isEvent);

    /**
     * @note[short] MacOS (ARM): 0x33430
     * @note[short] MacOS (Intel): 0x395a0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    std::string getListRewardKey(GJLevelList* list);

    /**
     * @note[short] MacOS (ARM): 0x2dbdc
     * @note[short] MacOS (Intel): 0x33e80
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    const char* getMapPackKey(int id);

    /**
     * @note[short] MacOS (ARM): 0x4c928
     * @note[short] MacOS (Intel): 0x52820
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    int getNextGoldChestID();

    /**
     * @note[short] MacOS (ARM): 0x37df4
     * @note[short] MacOS (Intel): 0x3e1f0
     * @note[short] Android
     */
    std::string getNextVideoAdReward();

    /**
     * @note[short] Android
     */
    TodoReturn getNotificationRewardKey(int p0);

    /**
     * @note[short] MacOS (ARM): 0x2bc4c
     * @note[short] MacOS (Intel): 0x31fe0
     * @note[short] Windows: 0x2ee970
     * @note[short] Android
     */
    std::string getPathRewardKey(int id);

    /**
     * @note[short] Windows: 0x2e5910
     * @note[short] Android
     */
    GJChallengeItem* getQueuedChallenge(int id);

    /**
     * @note[short] MacOS (ARM): 0x4cd6c
     * @note[short] MacOS (Intel): 0x52d20
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    GJRewardItem* getRewardForSecretChest(int id);

    /**
     * @note[short] MacOS (ARM): 0x380e4
     * @note[short] MacOS (Intel): 0x3e4f0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    GJRewardItem* getRewardForSpecialChest(std::string key);

    /**
     * @note[short] MacOS (ARM): 0x31afc
     * @note[short] MacOS (Intel): 0x37db0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    GJRewardItem* getRewardItem(GJRewardType type);

    /**
     * @note[short] Windows: 0x2e5360
     * @note[short] Android
     */
    std::string getRewardKey(GJRewardType type, int id);

    /**
     * @note[short] MacOS (ARM): 0x32eec
     * @note[short] MacOS (Intel): 0x390a0
     * @note[short] Windows: 0x2e59f0
     * @note[short] Android
     */
    GJChallengeItem* getSecondaryQueuedChallenge(int id);

    /**
     * @note[short] MacOS (ARM): 0x25dcc
     * @note[short] MacOS (Intel): 0x2ba70
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    int getSecretChestForItem(int id, UnlockType type);

    /**
     * @note[short] MacOS (ARM): 0x2f8f4
     * @note[short] MacOS (Intel): 0x35d00
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    const char* getSecretCoinKey(char const* key);

    /**
     * @note[short] MacOS (ARM): 0x38870
     * @note[short] MacOS (Intel): 0x3ec20
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    std::string getSecretOnlineRewardKey(int id);

    /**
     * @note[short] MacOS (ARM): 0x25e50
     * @note[short] MacOS (Intel): 0x2bae0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    cocos2d::CCString* getSpecialChestKeyForItem(int id, UnlockType type);

    /**
     * @note[short] MacOS (ARM): 0x37c48
     * @note[short] MacOS (Intel): 0x3e070
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    std::string getSpecialRewardDescription(std::string key, bool unused);

    /**
     * @note[short] MacOS (ARM): 0x37cb0
     * @note[short] MacOS (Intel): 0x3e0d0
     * @note[short] Windows: 0x2ee5d0
     * @note[short] Android
     */
    std::string getSpecialUnlockDescription(int id, UnlockType type, bool unused);

    /**
     * @note[short] MacOS (ARM): 0x2c9f8
     * @note[short] MacOS (Intel): 0x32dc0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    char const* getStarLevelKey(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x26634
     * @note[short] MacOS (Intel): 0x2c310
     * @note[short] Windows: 0x2db160
     * @note[short] iOS: 0x3c9f78
     * @note[short] Android
     */
    int getStat(char const* key);

    /**
     * @note[short] MacOS (ARM): 0x2bbb8
     * @note[short] MacOS (Intel): 0x31f70
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    int getStatFromKey(StatKey key);

    /**
     * @note[short] MacOS (ARM): 0x26304
     * @note[short] MacOS (Intel): 0x2bfd0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    GJStoreItem* getStoreItem(int index);

    /**
     * @note[short] MacOS (ARM): 0x25d4c
     * @note[short] MacOS (Intel): 0x2ba00
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    GJStoreItem* getStoreItem(int id, int type);

    /**
     * @note[short] MacOS (ARM): 0x34614
     * @note[short] MacOS (Intel): 0x3a7a0
     * @note[short] Windows: 0x2e7280
     * @note[short] Android
     */
    int getTotalCollectedCurrency();

    /**
     * @note[short] MacOS (ARM): 0x3525c
     * @note[short] MacOS (Intel): 0x3b560
     * @note[short] Windows: 0x2e7be0
     * @note[short] Android
     */
    int getTotalCollectedDiamonds();

    /**
     * @note[short] MacOS (ARM): 0x334f4
     * @note[short] MacOS (Intel): 0x39660
     * @note[short] Windows: 0x2e66c0
     * @note[short] Android
     */
    bool hasClaimedListReward(GJLevelList* list);

    /**
     * @note[short] MacOS (ARM): 0x2cf38
     * @note[short] MacOS (Intel): 0x392c0
     * @note[short] Windows: 0x2e62a0
     * @note[short] Android
     */
    bool hasCompletedChallenge(GJChallengeItem* item);

    /**
     * @note[short] MacOS (ARM): 0x33950
     * @note[short] MacOS (Intel): 0x39ad0
     * @note[short] Windows: 0x2e68b0
     * @note[short] Android
     */
    bool hasCompletedDailyLevel(int dailyID);

    /**
     * @note[short] Windows: 0x2e7190
     * @note[short] Android
     */
    bool hasCompletedDailyStars(int p0);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool hasCompletedDemonLevel(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x2cd4c
     * @note[short] MacOS (Intel): 0x33070
     * @note[short] Windows: 0x2e1990
     * @note[short] Android
     */
    bool hasCompletedGauntletLevel(int id);

    /**
     * @note[short] MacOS (ARM): 0x2cbe4
     * @note[short] MacOS (Intel): 0x32f40
     * @note[short] Windows: 0x2e17a0
     * @note[short] Android
     */
    bool hasCompletedLevel(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x2cb48
     * @note[short] MacOS (Intel): 0x32ec0
     * @note[short] Windows: 0x2e1660
     * @note[short] Android
     */
    bool hasCompletedMainLevel(int levelID);

    /**
     * @note[short] Windows: 0x2e2890
     * @note[short] Android
     */
    bool hasCompletedMapPack(int id);

    /**
     * @note[short] MacOS (ARM): 0x2ccb0
     * @note[short] MacOS (Intel): 0x32ff0
     * @note[short] Windows: 0x2e1850
     * @note[short] Android
     */
    bool hasCompletedOnlineLevel(int id);

    /**
     * @note[short] Windows: 0x2e1ad0
     * @note[short] Android
     */
    bool hasCompletedStarLevel(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x2f50c
     * @note[short] MacOS (Intel): 0x35960
     * @note[short] Windows: 0x2e37d0
     * @note[short] Android
     */
    bool hasPendingUserCoin(char const* key);

    /**
     * @note[short] MacOS (ARM): 0x31d4c
     * @note[short] MacOS (Intel): 0x38080
     * @note[short] Windows: 0x2e5450
     * @note[short] Android
     */
    bool hasRewardBeenCollected(GJRewardType type, int id);

    /**
     * @note[short] Windows: 0x2e38a0
     * @note[short] Android
     */
    bool hasSecretCoin(char const* key);

    /**
     * @note[short] MacOS (ARM): 0x2f600
     * @note[short] MacOS (Intel): 0x35a40
     * @note[short] Windows: 0x2e3630
     * @note[short] Android
     */
    bool hasUserCoin(char const* key);

    /**
     * @note[short] MacOS (ARM): 0x2a9d4
     * @note[short] MacOS (Intel): 0x30f50
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void incrementActivePath(int amount);

    /**
     * @note[short] MacOS (ARM): 0x2a3e4
     * @note[short] MacOS (Intel): 0x30d00
     * @note[short] Windows: 0x2e5ae0
     * @note[short] Android
     */
    void incrementChallenge(GJChallengeType type, int amount);

    /**
     * @note[short] MacOS (ARM): 0x2696c
     * @note[short] MacOS (Intel): 0x2c650
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3ca18c
     * @note[short] Android
     */
    void incrementStat(char const* key);

    /**
     * @note[short] MacOS (ARM): 0x26974
     * @note[short] MacOS (Intel): 0x2c660
     * @note[short] Windows: 0x2da460
     * @note[short] iOS: 0x3ca194
     * @note[short] Android
     */
    void incrementStat(char const* key, int amount);

    /**
     * @note[short] Windows: 0x2e7080
     * @note[short] Android
     */
    bool isDailyRecall(int p0);

    /**
     * @note[short] MacOS (Intel): 0x3d280
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool isGauntletChestUnlocked(int id);

    /**
     * @note[short] MacOS (ARM): 0x383bc
     * @note[short] MacOS (Intel): 0x3e780
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool isGauntletUnlocked(int id);

    /**
     * @note[short] MacOS (ARM): 0x37494
     * @note[short] MacOS (Intel): 0x3d8e0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool isItemEnabled(UnlockType type, int id);

    /**
     * @note[short] MacOS (ARM): 0x2aaa8
     * @note[short] MacOS (Intel): 0x30ff0
     * @note[short] Windows: 0x2e9470
     * @note[short] Android
     */
    bool isItemUnlocked(UnlockType type, int id);

    /**
     * @note[short] MacOS (Intel): 0x3e870
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool isPathChestUnlocked(int path);

    /**
     * @note[short] MacOS (ARM): 0x2aa80
     * @note[short] MacOS (Intel): 0x30fd0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool isPathUnlocked(StatKey key);

    /**
     * @note[short] Windows: 0x2eec60
     * @note[short] Android
     */
    bool isSecretChestUnlocked(int id);

    /**
     * @note[short] MacOS (ARM): 0x2fa2c
     * @note[short] MacOS (Intel): 0x35e30
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool isSecretCoin(std::string key);

    /**
     * @note[short] MacOS (ARM): 0x2fa5c
     * @note[short] MacOS (Intel): 0x35e60
     * @note[short] Windows: 0x2e3a60
     * @note[short] Android
     */
    bool isSecretCoinValid(std::string key);

    /**
     * @note[short] MacOS (ARM): 0x37468
     * @note[short] MacOS (Intel): 0x3d8b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool isSpecialChestLiteUnlockable(std::string key);

    /**
     * @note[short] MacOS (ARM): 0x36fa4
     * @note[short] MacOS (Intel): 0x3d460
     * @note[short] Windows: 0x2ee780
     * @note[short] Android
     */
    bool isSpecialChestUnlocked(std::string key);

    /**
     * @note[short] Windows: 0x2da140
     * @note[short] Android
     */
    bool isStoreItemUnlocked(int index);

    /**
     * @note[short] MacOS (ARM): 0x36aac
     * @note[short] MacOS (Intel): 0x3cf80
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    int keyCostForSecretChest(int id);

    /**
     * @note[short] MacOS (ARM): 0x37b30
     * @note[short] MacOS (Intel): 0x3df40
     * @note[short] Windows: 0x2ee220
     * @note[short] Android
     */
    void linkSpecialChestUnlocks(GJRewardItem* item, std::string key);

    /**
     * @note[short] MacOS (ARM): 0x4f358
     * @note[short] MacOS (Intel): 0x55770
     * @note[short] Android
     */
    void logCoins();

    /**
     * @note[short] MacOS (ARM): 0x2d568
     * @note[short] Windows: 0x2e21a0
     * @note[short] Android
     */
    void markLevelAsCompletedAndClaimed(GJGameLevel* level);

    /**
     * @note[short] Android
     */
    TodoReturn orbInfoForLevel(GJGameLevel* p0, int p1, bool p2);

    /**
     * @note[short] MacOS (ARM): 0x4ef48
     * @note[short] MacOS (Intel): 0x55310
     * @note[short] Windows: 0x2f85b0
     * @note[short] Android
     */
    void postLoadGameStats();

    /**
     * @note[short] MacOS (ARM): 0x31f80
     * @note[short] MacOS (Intel): 0x38280
     * @note[short] Windows: 0x2e54b0
     * @note[short] Android
     */
    void preProcessReward(GJRewardItem* item);

    /**
     * @note[short] MacOS (ARM): 0x4db58
     * @note[short] MacOS (Intel): 0x53ce0
     * @note[short] Windows: 0x2f87b0
     * @note[short] Android
     */
    void preSaveGameStats();

    /**
     * @note[short] MacOS (ARM): 0x33398
     * @note[short] MacOS (Intel): 0x39520
     * @note[short] Windows: 0x2e6390
     * @note[short] Android
     */
    void processChallengeQueue(int position);

    /**
     * @note[short] MacOS (ARM): 0x4f198
     * @note[short] MacOS (Intel): 0x55590
     * @note[short] Windows: 0x2f8240
     * @note[short] Android
     */
    void processOnlineChests();

    /**
     * @note[short] MacOS (ARM): 0x26414
     * @note[short] MacOS (Intel): 0x2c0f0
     * @note[short] Windows: 0x2da220
     * @note[short] Android
     */
    bool purchaseItem(int index);

    /**
     * @note[short] MacOS (Intel): 0x3bc00
     * @note[short] Windows: 0x2e7ef0
     * @note[short] Android
     */
    void recountSpecialStats();

    /**
     * @note[short] MacOS (ARM): 0x2e7f4
     * @note[short] MacOS (Intel): 0x34a20
     * @note[short] Windows: 0x2e2d10
     * @note[short] Android
     */
    void recountUserCoins(bool force);

    /**
     * @note[short] MacOS (ARM): 0x31ec0
     * @note[short] MacOS (Intel): 0x381c0
     * @note[short] Windows: 0x2f60d0
     * @note[short] Android
     */
    void registerRewardsFromItem(GJRewardItem* item);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void removeChallenge(int position);

    /**
     * @note[short] MacOS (ARM): 0x368bc
     * @note[short] MacOS (Intel): 0x3cd80
     * @note[short] Windows: 0x2f8450
     * @note[short] Android
     */
    void removeErrorFromSpecialChests();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void removeQueuedChallenge(int position);

    /**
     * @note[short] MacOS (ARM): 0x32bb8
     * @note[short] MacOS (Intel): 0x38db0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void removeQueuedSecondaryChallenge(int position);

    /**
     * @note[short] MacOS (ARM): 0x32650
     * @note[short] MacOS (Intel): 0x38880
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void resetChallengeTimer();

    /**
     * @note[short] MacOS (ARM): 0x4f350
     * @note[short] MacOS (Intel): 0x55750
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void resetPreSync();

    /**
     * @note[short] MacOS (ARM): 0x2bdf8
     * @note[short] MacOS (Intel): 0x321d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void resetSpecialChest(std::string key);

    /**
     * @note[short] MacOS (ARM): 0x36b00
     * @note[short] MacOS (Intel): 0x3cfe0
     * @note[short] Windows: 0x2e8ed0
     * @note[short] Android
     */
    void resetSpecialStatAchievements();

    /**
     * @note[short] MacOS (ARM): 0x2e7bc
     * @note[short] MacOS (Intel): 0x349e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void resetUserCoins();

    /**
     * @note[short] MacOS (ARM): 0x4f354
     * @note[short] MacOS (Intel): 0x55760
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void restorePostSync();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setAwardedBonusKeys(int keys);

    /**
     * @note[short] Windows: 0x2e2970
     * @note[short] Android
     */
    void setStarsForMapPack(int id, int stars);

    /**
     * @note[short] MacOS (ARM): 0x267ac
     * @note[short] MacOS (Intel): 0x2c470
     * @note[short] Windows: 0x2db290
     * @note[short] iOS: 0x3ca060
     * @note[short] Android
     */
    void setStat(char const* key, int value);

    /**
     * @note[short] MacOS (ARM): 0x2c00c
     * @note[short] MacOS (Intel): 0x32400
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void setStatIfHigher(char const* key, int value);

    /**
     * @note[short] MacOS (ARM): 0x2a8dfc
     * @note[short] MacOS (Intel): 0x316e40
     * @note[short] Windows: 0x2c9b90
     * @note[short] Android
     */
    void setupIconCredits();

    /**
     * @note[short] MacOS (ARM): 0x26948
     * @note[short] MacOS (Intel): 0x2c620
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    ShopType shopTypeForItemID(int index);

    /**
     * @note[short] MacOS (ARM): 0x4cfe8
     * @note[short] MacOS (Intel): 0x52fc0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool shouldAwardSecretKey();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    int starsForMapPack(int id);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void storeChallenge(int position, GJChallengeItem* challenge);

    /**
     * @note[short] MacOS (ARM): 0x325f0
     * @note[short] MacOS (Intel): 0x38830
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void storeChallengeTime(int remaining);

    /**
     * @note[short] MacOS (ARM): 0x3377c
     * @note[short] MacOS (Intel): 0x39900
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void storeEventChest(int eventID, GJRewardItem* item);

    /**
     * @note[short] MacOS (ARM): 0x341e8
     * @note[short] MacOS (Intel): 0x3a390
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void storeOnlineChest(std::string key, GJRewardItem* item);

    /**
     * @note[short] MacOS (Intel): 0x35c10
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void storePendingUserCoin(char const* key);

    /**
     * @note[short] Windows: 0x2e5740
     * @note[short] Android
     */
    void storeQueuedChallenge(int position, GJChallengeItem* challenge);

    /**
     * @note[short] MacOS (ARM): 0x3190c
     * @note[short] MacOS (Intel): 0x37bd0
     * @note[short] Windows: 0x2e5290
     * @note[short] Android
     */
    void storeRewardState(GJRewardType type, int id, int remaining, std::string str);

    /**
     * @note[short] MacOS (ARM): 0x32aa0
     * @note[short] MacOS (Intel): 0x38ca0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void storeSecondaryQueuedChallenge(int position, GJChallengeItem* challenge);

    /**
     * @note[short] MacOS (ARM): 0x2f91c
     * @note[short] MacOS (Intel): 0x35d20
     * @note[short] Windows: 0x2e3980
     * @note[short] Android
     */
    void storeSecretCoin(char const* key);

    /**
     * @note[short] MacOS (Intel): 0x35b20
     * @note[short] Windows: 0x2e3700
     * @note[short] Android
     */
    void storeUserCoin(char const* key);

    /**
     * @note[short] MacOS (ARM): 0x300b8
     * @note[short] MacOS (Intel): 0x36400
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void tempClear();

    /**
     * @note[short] MacOS (ARM): 0x3753c
     * @note[short] MacOS (Intel): 0x3d970
     * @note[short] Windows: 0x2e9810
     * @note[short] Android
     */
    void toggleEnableItem(UnlockType type, int id, bool enabled);

    /**
     * @note[short] MacOS (ARM): 0x2b2d4
     * @note[short] MacOS (Intel): 0x316b0
     * @note[short] Windows: 0x2da780
     * @note[short] Android
     */
    void tryFixPathBug();

    /**
     * @note[short] MacOS (ARM): 0x2ad24
     * @note[short] MacOS (Intel): 0x31220
     * @note[short] Windows: 0x2da5f0
     * @note[short] Android
     */
    void trySelectActivePath();

    /**
     * @note[short] MacOS (ARM): 0x2d8b0
     * @note[short] MacOS (Intel): 0x33b70
     * @note[short] Windows: 0x2e2450
     * @note[short] Android
     */
    void uncompleteLevel(GJGameLevel* level);

    /**
     * @note[short] Android
     */
    TodoReturn unlockDailyRecall(int p0);

    /**
     * @note[short] MacOS (ARM): 0x3823c
     * @note[short] MacOS (Intel): 0x3e630
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void unlockGauntlet(int id);

    /**
     * @note[short] MacOS (ARM): 0x383c4
     * @note[short] MacOS (Intel): 0x3e790
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    GJRewardItem* unlockGauntletChest(int id);

    /**
     * @note[short] MacOS (ARM): 0x4cd78
     * @note[short] MacOS (Intel): 0x52d40
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    GJRewardItem* unlockGoldChest(int id);

    /**
     * @note[short] MacOS (ARM): 0x34204
     * @note[short] MacOS (Intel): 0x3a3c0
     * @note[short] Windows: 0x2eeb30
     * @note[short] Android
     */
    GJRewardItem* unlockOnlineChest(std::string key);

    /**
     * @note[short] MacOS (Intel): 0x3e950
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    GJRewardItem* unlockPathChest(int id);

    /**
     * @note[short] MacOS (ARM): 0x4cba0
     * @note[short] MacOS (Intel): 0x52b50
     * @note[short] Windows: 0x2eed40
     * @note[short] Android
     */
    GJRewardItem* unlockSecretChest(int id);

    /**
     * @note[short] MacOS (ARM): 0x380ec
     * @note[short] MacOS (Intel): 0x3e510
     * @note[short] Windows: 0x2ee890
     * @note[short] Android
     */
    GJRewardItem* unlockSpecialChest(std::string key);

    /**
     * @note[short] MacOS (ARM): 0x2ad10
     * @note[short] MacOS (Intel): 0x31200
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateActivePath(StatKey key);

    /**
     * @note[short] MacOS (ARM): 0x2a8d8c
     * @note[short] MacOS (Intel): 0x316db0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    std::string usernameForAccountID(int id);

    /**
     * @note[short] MacOS (ARM): 0x2be00
     * @note[short] MacOS (Intel): 0x321f0
     * @note[short] Windows: 0x2daed0
     * @note[short] Android
     */
    void verifyPathAchievements();

    /**
     * @note[short] MacOS (ARM): 0x2ed34
     * @note[short] MacOS (Intel): 0x350c0
     * @note[short] Windows: 0x2e3550
     * @note[short] Android
     */
    void verifyUserCoins();
    bool m_usePlayerStatsCCDictionary;
    cocos2d::CCString* m_trueString;
    cocos2d::CCDictionary* m_allStoreItems;
    cocos2d::CCDictionary* m_storeItems;
    cocos2d::CCDictionary* m_allTreasureRoomChests;
    cocos2d::CCDictionary* m_allTreasureRoomChestItems;
    cocos2d::CCDictionary* m_allSpecialChests;
    cocos2d::CCDictionary* m_allSpecialChestItems;
    std::unordered_map<std::string, std::string> m_specialRewardDescriptions;
    std::unordered_map<std::string, std::string> m_createSpecialChestItemsMap;
    cocos2d::CCDictionary* m_specialChestsLite;
    cocos2d::CCArray* m_storeItemArray;
    cocos2d::CCDictionary* m_rewardItems;
    cocos2d::CCDictionary* m_dailyChests;
    cocos2d::CCDictionary* m_worldAdvertChests;
    cocos2d::CCDictionary* m_activeChallenges;
    cocos2d::CCDictionary* m_upcomingChallenges;
    double m_challengeTime;
    cocos2d::CCDictionary* m_playerStats;
    std::unordered_map<int, int> m_playerStatsRandMap;
    std::unordered_map<int, int> m_playerStatsSeedMap;
    cocos2d::CCDictionary* m_completedLevels;
    cocos2d::CCDictionary* m_verifiedUserCoins;
    cocos2d::CCDictionary* m_pendingUserCoins;
    cocos2d::CCDictionary* m_purchasedItems;
    cocos2d::CCDictionary* m_onlineCurrencyScores;
    cocos2d::CCDictionary* m_mainCurrencyScores;
    cocos2d::CCDictionary* m_gauntletCurrencyScores;
    cocos2d::CCDictionary* m_timelyCurrencyScores;
    cocos2d::CCDictionary* m_onlineStars;
    cocos2d::CCDictionary* m_timelyStars;
    cocos2d::CCDictionary* m_gauntletDiamondScores;
    cocos2d::CCDictionary* m_timelyDiamondScores;
    cocos2d::CCDictionary* m_unusedCurrencyAwardDict;
    cocos2d::CCDictionary* m_challengeDiamonds;
    cocos2d::CCDictionary* m_completedMappacks;
    cocos2d::CCDictionary* m_completedLists;
    cocos2d::CCDictionary* m_weeklyChest;
    cocos2d::CCDictionary* m_eventChest;
    cocos2d::CCDictionary* m_unlockedTimelyLevels;
    cocos2d::CCDictionary* m_treasureRoomChests;
    geode::SeedValueRSV m_bonusKey;
    cocos2d::CCDictionary* m_miscChests;
    cocos2d::CCDictionary* m_enabledItems;
    cocos2d::CCDictionary* m_wraithChests;
    bool m_skipIncrementChallenge;
    cocos2d::CCDictionary* m_unlockedGauntlets;
    cocos2d::CCDictionary* m_unkDict;
    cocos2d::CCDictionary* m_unlockedItems;
    std::map<std::pair<int, UnlockType>, int> m_accountIDForIcon;
    std::map<int, std::string> m_usernameForAccountID;
    std::set<std::pair<UnlockType, int>> m_wraithIcons;
    bool m_pathBugFixed;
    bool m_tryFixPathBug;
    int m_activePath;
};

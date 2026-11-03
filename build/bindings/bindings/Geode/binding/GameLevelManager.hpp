#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>
#include <Geode/mapping/map.hpp>
#include <Geode/mapping/set.hpp>
#include <Geode/mapping/unordered_map.hpp>
#include <Geode/mapping/unordered_set.hpp>
#include <Geode/mapping/vector.hpp>

class GameLevelManager : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GameLevelManager";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GameLevelManager, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x217310
     * @note[short] Android: Rebinded
     */
     GameLevelManager();

    /**
     * @note[short] Windows: 0x21b720
     * @note[short] iOS: 0xa5ee0
     * @note[short] Android: Rebinded
     */
    virtual  ~GameLevelManager();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static GameLevelManager* get();

    /**
     * @note[short] MacOS (ARM): 0x499334
     * @note[short] MacOS (Intel): 0x542920
     * @note[short] Windows: 0x261840
     * @note[short] Android
     */
    static cocos2d::CCDictionary* responseToDict(std::string response, bool colon);

    /**
     * @note[short] MacOS (ARM): 0x4767c4
     * @note[short] MacOS (Intel): 0x51bae0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x90fec
     * @note[short] Android
     */
    static GameLevelManager* sharedState();

    /**
     * @note[short] MacOS (ARM): 0x494bc0
     * @note[short] MacOS (Intel): 0x53d9b0
     * @note[short] Windows: 0x21b9a0
     * @note[short] iOS: 0xa5ef8
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x4c2128
     * @note[short] MacOS (Intel): 0x56f560
     * @note[short] Windows: 0x255710
     * @note[short] Android
     */
    bool acceptFriendRequest(int accountID, int requestID);

    /**
     * @note[short] MacOS (ARM): 0x4975d8
     * @note[short] MacOS (Intel): 0x540740
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    int accountIDForUserID(int userID);

    /**
     * @note[short] MacOS (ARM): 0x4a06c4
     * @note[short] Windows: 0x221aa0
     * @note[short] Android
     */
    void addDLToActive(char const* key);

    /**
     * @note[short] Android
     */
    TodoReturn addThreadMembers(int p0, cocos2d::CCArray* p1);

    /**
     * @note[short] Windows: 0x244390
     * @note[short] Android
     */
    TodoReturn adminClearReportedContent(int p0, std::string const& p1);

    /**
     * @note[short] Windows: 0x247bc0
     * @note[short] Android
     */
    TodoReturn adminCloseCase(int p0, int p1, std::string const& p2);

    /**
     * @note[short] Android
     */
    TodoReturn adminCommentBan(int p0, bool p1, int p2, std::string const& p3, std::vector<int> const& p4);

    /**
     * @note[short] Android
     */
    TodoReturn adminCommentUnban(int p0, std::string const& p1);

    /**
     * @note[short] Android
     */
    TodoReturn adminDeleteUserComments(int p0, AdminDeleteScope p1, std::string const& p2, std::vector<int> const& p3);

    /**
     * @note[short] Android
     */
    TodoReturn adminFreezeAccount(int p0, bool p1, int p2, std::string const& p3, std::vector<int> const& p4);

    /**
     * @note[short] Windows: 0x245560
     * @note[short] Android
     */
    TodoReturn adminGetAbuseInfo(int p0, int p1, int p2);

    /**
     * @note[short] Windows: 0x246d70
     * @note[short] Android
     */
    TodoReturn adminGetAccountReview(int p0);

    /**
     * @note[short] Windows: 0x242e00
     * @note[short] Android
     */
    TodoReturn adminGetReportedContent(int p0, int p1, int p2, int p3);

    /**
     * @note[short] Windows: 0x244880
     * @note[short] Android
     */
    TodoReturn adminGetReportQueue(int p0, int p1, int p2);

    /**
     * @note[short] Windows: 0x241fc0
     * @note[short] Android
     */
    TodoReturn adminGetUserHistory(int p0, int p1);

    /**
     * @note[short] Android
     */
    TodoReturn adminMessageBan(int p0, bool p1, int p2, std::string const& p3, std::vector<int> const& p4);

    /**
     * @note[short] Android
     */
    TodoReturn adminMessageUnban(int p0, std::string const& p1);

    /**
     * @note[short] Android
     */
    TodoReturn adminNameLock(int p0, std::string const& p1, std::vector<int> const& p2);

    /**
     * @note[short] Android
     */
    TodoReturn adminNameUnlock(int p0, std::string const& p1);

    /**
     * @note[short] Android
     */
    TodoReturn adminThreadAction(int p0, std::string const& p1, long long p2);

    /**
     * @note[short] Android
     */
    TodoReturn adminTrendingBan(int p0, std::string const& p1, std::vector<int> const& p2);

    /**
     * @note[short] Android
     */
    TodoReturn adminTrendingUnban(int p0, std::string const& p1);

    /**
     * @note[short] Android
     */
    TodoReturn adminUnfreezeAccount(int p0, std::string const& p1);

    /**
     * @note[short] Android
     */
    TodoReturn adminUploadBan(int p0, bool p1, int p2, std::string const& p3, std::vector<int> const& p4);

    /**
     * @note[short] Android
     */
    TodoReturn adminUploadUnban(int p0, std::string const& p1);

    /**
     * @note[short] Windows: 0x2417b0
     * @note[short] Android
     */
    TodoReturn appendModReason(std::string& p0, std::string const& p1, std::vector<int> const& p2);

    /**
     * @note[short] Android
     */
    TodoReturn applyDeathBlob(int p0, std::string const& p1);

    /**
     * @note[short] Android
     */
    TodoReturn applyLevelControlsSection(GJGameLevel* p0, std::string const& p1);

    /**
     * @note[short] Android
     */
    TodoReturn applyThreadAddReply(int p0, std::string const& p1);

    /**
     * @note[short] MacOS (ARM): 0x4b2778
     * @note[short] MacOS (Intel): 0x55e520
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool areGauntletsLoaded();

    /**
     * @note[short] MacOS (ARM): 0x4b62a0
     * @note[short] MacOS (Intel): 0x562890
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void banUser(int accountID);

    /**
     * @note[short] Windows: 0x256620
     * @note[short] Android
     */
    bool blockUser(int accountID);

    /**
     * @note[short] Windows: 0x251df0
     * @note[short] Android
     */
    TodoReturn claimNotificationReward(int p0);

    /**
     * @note[short] MacOS (ARM): 0x4a3df4
     * @note[short] MacOS (Intel): 0x54e1e0
     * @note[short] Windows: 0x224050
     * @note[short] Android
     */
    void cleanupDailyLevels();

    /**
     * @note[short] Android
     */
    TodoReturn clearDeathDataInstances(GJGameLevel* p0, bool p1);

    /**
     * @note[short] Android
     */
    void clearPlatformerSaveJournal();

    /**
     * @note[short] Android
     */
    int clearPlatformerSaves(int mode);

    /**
     * @note[short] Android
     */
    std::vector<std::pair<std::string, int>> collectPlatformerJournalKeys(bool local);

    /**
     * @note[short] MacOS (Intel): 0x56aa60
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    cocos2d::CCArray* createAndGetAccountComments(std::string str, int accountID);

    /**
     * @note[short] Windows: 0x23d680
     * @note[short] Android
     */
    cocos2d::CCArray* createAndGetCommentsFull(std::string p0, int p1, bool p2, CommentKeyType p3);

    /**
     * @note[short] Android
     */
    cocos2d::CCArray* createAndGetEditorSoundConfigs(std::string p0);

    /**
     * @note[short] MacOS (Intel): 0x56aa60
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    cocos2d::CCArray* createAndGetLevelComments(std::string p0, int p1, CommentKeyType p2);

    /**
     * @note[short] Windows: 0x21e6a0
     * @note[short] Android
     */
    cocos2d::CCArray* createAndGetLevelLists(std::string str);

    /**
     * @note[short] Windows: 0x21e130
     * @note[short] Android
     */
    cocos2d::CCArray* createAndGetLevels(std::string str);

    /**
     * @note[short] Windows: 0x21e970
     * @note[short] Android
     */
    cocos2d::CCArray* createAndGetMapPacks(std::string str);

    /**
     * @note[short] MacOS (ARM): 0x49ada8
     * @note[short] MacOS (Intel): 0x5445a0
     * @note[short] Windows: 0x21ec40
     * @note[short] Android
     */
    cocos2d::CCArray* createAndGetScores(std::string str, GJScoreType type);

    /**
     * @note[short] Windows: 0x21bff0
     * @note[short] Android
     */
    GJGameLevel* createNewLevel();

    /**
     * @note[short] MacOS (ARM): 0x4960b4
     * @note[short] MacOS (Intel): 0x53f140
     * @note[short] Windows: 0x21cb30
     * @note[short] Android
     */
    GJLevelList* createNewLevelList();

    /**
     * @note[short] MacOS (ARM): 0x10c2d4
     * @note[short] MacOS (Intel): 0x54a5e0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    std::string createPageInfo(int total, int start, int count);

    /**
     * @note[short] MacOS (ARM): 0x4a4bd8
     * @note[short] MacOS (Intel): 0x54f030
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    GJSmartTemplate* createSmartTemplate();

    /**
     * @note[short] MacOS (ARM): 0x4a5450
     * @note[short] MacOS (Intel): 0x54f9d0
     * @note[short] Windows: 0x225150
     * @note[short] Android
     */
    void dataLoaded(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (Intel): 0x56e430
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void deleteAccountComment(int id, int accountID);

    /**
     * @note[short] Windows: 0x240290
     * @note[short] Android
     */
    void deleteComment(int id, CommentType type, int parentID);

    /**
     * @note[short] Windows: 0x240b30
     * @note[short] Android
     */
    TodoReturn deleteComments(CommentType p0, std::vector<BulkCommentKey> const& p1, std::string const& p2, std::vector<int> const& p3);

    /**
     * @note[short] MacOS (ARM): 0x4cc79c
     * @note[short] MacOS (Intel): 0x57a610
     * @note[short] Windows: 0x2550e0
     * @note[short] Android
     */
    bool deleteFriendRequests(int accountID, cocos2d::CCArray* accounts, bool sent);

    /**
     * @note[short] MacOS (Intel): 0x53ed90
     * @note[short] Windows: 0x21c870
     * @note[short] Android
     */
    void deleteLevel(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x4c08c8
     * @note[short] MacOS (Intel): 0x56dbb0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void deleteLevelComment(int id, int levelID);

    /**
     * @note[short] Windows: 0x259650
     * @note[short] Android
     */
    TodoReturn deleteLevelControls(int p0);

    /**
     * @note[short] MacOS (ARM): 0x496558
     * @note[short] MacOS (Intel): 0x53f690
     * @note[short] Windows: 0x21d120
     * @note[short] Android
     */
    void deleteLevelList(GJLevelList* list);

    /**
     * @note[short] MacOS (ARM): 0x4cc790
     * @note[short] MacOS (Intel): 0x57a5f0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool deleteSentFriendRequest(int accountID);

    /**
     * @note[short] Windows: 0x22fb80
     * @note[short] Android
     */
    TodoReturn deleteServerEditorSound(int p0, std::string const& p1, std::vector<int> const& p2);

    /**
     * @note[short] MacOS (ARM): 0x4c95cc
     * @note[short] Windows: 0x234980
     * @note[short] Android
     */
    TodoReturn deleteServerLevel(int p0, std::string const& p1, std::vector<int> const& p2);

    /**
     * @note[short] MacOS (ARM): 0x413ec0
     * @note[short] MacOS (Intel): 0x9083a0
     * @note[short] Windows: 0x22d7a0
     * @note[short] Android
     */
    TodoReturn deleteServerLevelList(int p0, std::string const& p1, std::vector<int> const& p2);

    /**
     * @note[short] MacOS (ARM): 0x4a4c1c
     * @note[short] MacOS (Intel): 0x54f070
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void deleteSmartTemplate(GJSmartTemplate* smartTemplate);

    /**
     * @note[short] MacOS (ARM): 0x4bc664
     * @note[short] MacOS (Intel): 0x5696d0
     * @note[short] Windows: 0x23b9a0
     * @note[short] Android
     */
    bool deleteUserMessages(GJUserMessage* message, cocos2d::CCArray* messages, bool isSender);

    /**
     * @note[short] Windows: 0x22f3f0
     * @note[short] Android
     */
    TodoReturn downloadEditorSoundConfig(int p0);

    /**
     * @note[short] MacOS (ARM): 0x4b27cc
     * @note[short] MacOS (Intel): 0x55e580
     * @note[short] Windows: 0x231c00
     * @note[short] Android
     */
    void downloadLevel(int id, bool gauntletLevel, int dailyID);

    /**
     * @note[short] MacOS (ARM): 0x4bbd1c
     * @note[short] MacOS (Intel): 0x568d20
     * @note[short] Windows: 0x23b3a0
     * @note[short] Android
     */
    void downloadUserMessage(int id, bool sent);

    /**
     * @note[short] Windows: 0x23dc80
     * @note[short] Android
     */
    TodoReturn dropIgnoredRequestLists();

    /**
     * @note[short] Android
     */
    TodoReturn dtShouldUploadLevel(GJGameLevel* p0);

    /**
     * @note[short] MacOS (ARM): 0x4a4fa8
     * @note[short] MacOS (Intel): 0x54f4b0
     * @note[short] Windows: 0x224b60
     * @note[short] Android
     */
    void encodeDataTo(DS_Dictionary* dict);

    /**
     * @note[short] Android
     */
    TodoReturn evictDeathDataCache(int p0);

    /**
     * @note[short] MacOS (ARM): 0x4a4c7c
     * @note[short] MacOS (Intel): 0x54f0f0
     * @note[short] Windows: 0x2247a0
     * @note[short] Android
     */
    void firstSetup();

    /**
     * @note[short] MacOS (ARM): 0x4a42a8
     * @note[short] MacOS (Intel): 0x54e6f0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void followUser(int id);

    /**
     * @note[short] Windows: 0x250db0
     * @note[short] Android
     */
    TodoReturn followUserOnline(int p0, bool p1);

    /**
     * @note[short] Android
     */
    TodoReturn forceDeathDataRefetch(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x4bae94
     * @note[short] MacOS (Intel): 0x567d60
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    GJFriendRequest* friendRequestFromAccountID(int id);

    /**
     * @note[short] Android
     */
    void friendRequestWasRemoved(int accountID, bool sent);

    /**
     * @note[short] MacOS (ARM): 0x4bd970
     * @note[short] MacOS (Intel): 0x56aa40
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    const char* getAccountCommentKey(int accountID, int page);

    /**
     * @note[short] MacOS (ARM): 0x4bd640
     * @note[short] MacOS (Intel): 0x56a6f0
     * @note[short] Windows: 0x23cee0
     * @note[short] Android
     */
    void getAccountComments(int accountID, int page, int total);

    /**
     * @note[short] MacOS (ARM): 0x4d2c74
     * @note[short] MacOS (Intel): 0x580fd0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    int getActiveDailyID(GJTimedLevelType type);

    /**
     * @note[short] MacOS (ARM): 0x4a4af8
     * @note[short] MacOS (Intel): 0x54ef40
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    GJSmartTemplate* getActiveSmartTemplate();

    /**
     * @note[short] MacOS (ARM): 0x4a4c4c
     * @note[short] MacOS (Intel): 0x54f0c0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    cocos2d::CCArray* getAllSmartTemplates();

    /**
     * @note[short] MacOS (ARM): 0x4d4288
     * @note[short] MacOS (Intel): 0x5825c0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    cocos2d::CCDictionary* getAllUsedSongIDs();

    /**
     * @note[short] MacOS (ARM): 0x4a7134
     * @note[short] MacOS (Intel): 0x551c70
     * @note[short] Windows: 0x2264e0
     * @note[short] iOS: 0xb277c
     * @note[short] Android
     */
    std::string getBasePostString();

    /**
     * @note[short] MacOS (Intel): 0x5824d0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool getBoolForKey(char const* key);

    /**
     * @note[short] MacOS (ARM): 0x4bd38c
     * @note[short] MacOS (Intel): 0x56a4a0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    std::string getCommentKey(int ID, int page, int mode, CommentKeyType keytype);

    /**
     * @note[short] MacOS (ARM): 0x49eb48
     * @note[short] MacOS (Intel): 0x548a20
     * @note[short] Windows: 0x2202d0
     * @note[short] iOS: 0xac9d0
     * @note[short] Android
     */
    int getCompletedDailyLevels();

    /**
     * @note[short] MacOS (ARM): 0x49ed14
     * @note[short] MacOS (Intel): 0x548c20
     * @note[short] Windows: 0x2204e0
     * @note[short] iOS: 0xacb38
     * @note[short] Android
     */
    int getCompletedEventLevels(int minStars, int maxStars);

    /**
     * @note[short] MacOS (ARM): 0x49eef4
     * @note[short] MacOS (Intel): 0x548e30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xaccac
     * @note[short] Android
     */
    int getCompletedGauntletDemons();

    /**
     * @note[short] MacOS (ARM): 0x49efcc
     * @note[short] MacOS (Intel): 0x548ef0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xacd64
     * @note[short] Android
     */
    int getCompletedGauntletLevels();

    /**
     * @note[short] MacOS (ARM): 0x49d114
     * @note[short] MacOS (Intel): 0x546c40
     * @note[short] Windows: 0x21f3b0
     * @note[short] Android
     */
    cocos2d::CCArray* getCompletedLevels(bool useOrbCompletion);

    /**
     * @note[short] MacOS (ARM): 0x49e974
     * @note[short] MacOS (Intel): 0x548820
     * @note[short] Windows: 0x2200b0
     * @note[short] iOS: 0xac860
     * @note[short] Android
     */
    int getCompletedWeeklyLevels();

    /**
     * @note[short] MacOS (ARM): 0x4d2c74
     * @note[short] MacOS (Intel): 0x580fd0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    int getDailyID(GJTimedLevelType type);

    /**
     * @note[short] MacOS (ARM): 0x4d2ca8
     * @note[short] MacOS (Intel): 0x581000
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    int getDailyTimer(GJTimedLevelType type);

    /**
     * @note[short] Windows: 0x2283a0
     * @note[short] Android
     */
    TodoReturn getDeathData(int p0, int p1, bool p2);

    /**
     * @note[short] Android
     */
    TodoReturn getDeathDataVersion(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn getDeathDisplayData(int p0);

    /**
     * @note[short] MacOS (ARM): 0x4bec90
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    const char* getDeleteCommentKey(int parentID, int id, int type);

    /**
     * @note[short] MacOS (ARM): 0x4bcb58
     * @note[short] MacOS (Intel): 0x569bd0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    const char* getDeleteMessageKey(int id, bool sent);

    /**
     * @note[short] MacOS (ARM): 0x49d3b8
     * @note[short] MacOS (Intel): 0x546e10
     * @note[short] Windows: 0x21f560
     * @note[short] iOS: 0xabc34
     * @note[short] Android
     */
    std::string getDemonLevelsString();

    /**
     * @note[short] MacOS (ARM): 0x4bec40
     * @note[short] MacOS (Intel): 0x56bdd0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    const char* getDescKey(int levelID);

    /**
     * @note[short] MacOS (ARM): 0x4abc34
     * @note[short] MacOS (Intel): 0x5572b0
     * @note[short] Windows: 0x22a3b0
     * @note[short] Android
     */
    std::string getDifficultyStr(bool isNA, bool isEasy, bool isNormal, bool isHard, bool isHarder, bool isInsane, bool isDemon, bool isAuto);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    const char* getDiffKey(int diff);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool getDiffVal(int diff);

    /**
     * @note[short] Windows: 0x22e9d0
     * @note[short] Android
     */
    TodoReturn getEditorSoundConfigs(GJSearchObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x4a483c
     * @note[short] MacOS (Intel): 0x54ec70
     * @note[short] Windows: 0x224660
     * @note[short] Android
     */
    std::string getFolderName(int id, bool local);

    /**
     * @note[short] Windows: 0x251210
     * @note[short] Android
     */
    TodoReturn getFollowing();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    const char* getFriendRequestKey(bool p0, int p1, std::string const& p2, bool p3);

    /**
     * @note[short] MacOS (ARM): 0x4baee8
     * @note[short] Windows: 0x254070
     * @note[short] Android
     */
    TodoReturn getFriendRequests(bool p0, int p1, int p2, std::string const& p3, bool p4);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    const char* getGauntletKey(int id);

    /**
     * @note[short] MacOS (ARM): 0x4b21e0
     * @note[short] MacOS (Intel): 0x55df00
     * @note[short] Windows: 0x2318f0
     * @note[short] Android
     */
    void getGauntletLevels(int id);

    /**
     * @note[short] MacOS (ARM): 0x4b1ab0
     * @note[short] MacOS (Intel): 0x55d7c0
     * @note[short] Windows: 0x230cd0
     * @note[short] Android
     */
    void getGauntlets();

    /**
     * @note[short] MacOS (ARM): 0x4b19f0
     * @note[short] MacOS (Intel): 0x55d700
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    std::string getGauntletSearchKey(int id);

    /**
     * @note[short] MacOS (ARM): 0x4d2254
     * @note[short] MacOS (Intel): 0x5768a0
     * @note[short] Windows: 0x25e270
     * @note[short] Android
     */
    bool getGJChallenges();

    /**
     * @note[short] Windows: 0x2313d0
     * @note[short] Android
     */
    TodoReturn getGJContentStatus();

    /**
     * @note[short] MacOS (Intel): 0x580a20
     * @note[short] Windows: 0x25f690
     * @note[short] Android
     */
    bool getGJDailyLevelState(GJTimedLevelType type);

    /**
     * @note[short] MacOS (ARM): 0x4d1c68
     * @note[short] MacOS (Intel): 0x57fe80
     * @note[short] Windows: 0x25ce00
     * @note[short] Android
     */
    bool getGJRewards(int type);

    /**
     * @note[short] MacOS (Intel): 0x57fb70
     * @note[short] Windows: 0x25be60
     * @note[short] Android
     */
    bool getGJSecretReward(std::string key);

    /**
     * @note[short] MacOS (ARM): 0x4ba528
     * @note[short] MacOS (Intel): 0x73a760
     * @note[short] Windows: 0x23a610
     * @note[short] Android
     */
    void getGJUserInfo(int id);

    /**
     * @note[short] MacOS (ARM): 0x49ceb4
     * @note[short] MacOS (Intel): 0x5469b0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    int getHighestLevelOrder();

    /**
     * @note[short] MacOS (Intel): 0x5822e0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    int getIntForKey(char const* key);

    /**
     * @note[short] MacOS (ARM): 0x4b62a4
     * @note[short] MacOS (Intel): 0x5628a0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    std::string getLeaderboardKey(LeaderboardType type, LeaderboardStat stat);

    /**
     * @note[short] MacOS (ARM): 0x4b88c4
     * @note[short] Windows: 0x2380b0
     * @note[short] Android
     */
    void getLeaderboardScores(LeaderboardType type, LeaderboardStat stat);

    /**
     * @note[short] MacOS (ARM): 0x4ac1c0
     * @note[short] MacOS (Intel): 0x557890
     * @note[short] Windows: 0x22a660
     * @note[short] Android
     */
    std::string getLengthStr(bool isTiny, bool isShort, bool isMedium, bool isLong, bool isXL, bool isPlat);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    const char* getLenKey(int len);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool getLenVal(int len);

    /**
     * @note[short] MacOS (ARM): 0x4bcec8
     * @note[short] MacOS (Intel): 0x569f80
     * @note[short] Windows: 0x23c2f0
     * @note[short] Android
     */
    void getLevelComments(int ID, int page, int total, int mode, CommentKeyType keytype);

    /**
     * @note[short] Windows: 0x259cb0
     * @note[short] Android
     */
    TodoReturn getLevelControls(int p0);

    /**
     * @note[short] MacOS (ARM): 0x4b27a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    const char* getLevelDownloadKey(int levelID, bool isGauntlet, int dailyID);

    /**
     * @note[short] MacOS (ARM): 0x4950d4
     * @note[short] MacOS (Intel): 0x53e030
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    const char* getLevelKey(int levelID);

    /**
     * @note[short] MacOS (ARM): 0x4b8ee4
     * @note[short] MacOS (Intel): 0x5659e0
     * @note[short] Windows: 0x238790
     * @note[short] Android
     */
    void getLevelLeaderboard(GJGameLevel* level, LevelLeaderboardType type, LevelLeaderboardMode mode);

    /**
     * @note[short] MacOS (ARM): 0x4b9cec
     * @note[short] MacOS (Intel): 0x566b40
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    const char* getLevelLeaderboardKey(int levelID, LevelLeaderboardType type, LevelLeaderboardMode mode);

    /**
     * @note[short] MacOS (ARM): 0x49669c
     * @note[short] MacOS (Intel): 0x53f7c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    const char* getLevelListKey(int listID);

    /**
     * @note[short] MacOS (Intel): 0x55b030
     * @note[short] Windows: 0x22db00
     * @note[short] Android
     */
    void getLevelLists(GJSearchObject* object);

    /**
     * @note[short] Windows: 0x2538d0
     * @note[short] Android
     */
    void getLevelRateInfo(int id);

    /**
     * @note[short] MacOS (ARM): 0x4ad9e4
     * @note[short] MacOS (Intel): 0x559470
     * @note[short] Windows: 0x22bfa0
     * @note[short] iOS: 0xb6690
     * @note[short] Android
     */
    void getLevelSaveData();

    /**
     * @note[short] MacOS (ARM): 0x4d1608
     * @note[short] MacOS (Intel): 0x57f850
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    const char* getLikeAccountItemKey(LikeItemType type, int id, bool liked, int parentID);

    /**
     * @note[short] MacOS (ARM): 0x4d0f28
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    const char* getLikeItemKey(LikeItemType type, int id, bool liked, int parentID);

    /**
     * @note[short] Windows: 0x21bf80
     * @note[short] Android
     */
    GJGameLevel* getLocalLevel(int uniqueID);

    /**
     * @note[short] MacOS (ARM): 0x4950fc
     * @note[short] MacOS (Intel): 0x53e050
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    GJGameLevel* getLocalLevelByName(std::string name);

    /**
     * @note[short] MacOS (ARM): 0x495200
     * @note[short] MacOS (Intel): 0x53e190
     * @note[short] Windows: 0x21cac0
     * @note[short] Android
     */
    GJLevelList* getLocalLevelList(int uniqueID);

    /**
     * @note[short] MacOS (ARM): 0x49cef0
     * @note[short] MacOS (Intel): 0x5469f0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    int getLowestLevelOrder();

    /**
     * @note[short] MacOS (ARM): 0x494d00
     * @note[short] MacOS (Intel): 0x53db90
     * @note[short] Windows: 0x21bba0
     * @note[short] Android
     */
    GJGameLevel* getMainLevel(int levelID, bool dontGetLevelString);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    const char* getMapPackKey(int pack);

    /**
     * @note[short] MacOS (ARM): 0x4adc94
     * @note[short] MacOS (Intel): 0x559700
     * @note[short] Windows: 0x22c6f0
     * @note[short] Android
     */
    void getMapPacks(GJSearchObject* object);

    /**
     * @note[short] MacOS (ARM): 0x4bc058
     * @note[short] MacOS (Intel): 0x569070
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    const char* getMessageKey(int id);

    /**
     * @note[short] MacOS (ARM): 0x4bb22c
     * @note[short] MacOS (Intel): 0x568170
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    const char* getMessagesKey(bool sent, int page);

    /**
     * @note[short] MacOS (ARM): 0x4bceb4
     * @note[short] MacOS (Intel): 0x569f60
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void getNews();

    /**
     * @note[short] MacOS (ARM): 0x4a4b08
     * @note[short] MacOS (Intel): 0x54ef60
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    int getNextFreeTemplateID();

    /**
     * @note[short] MacOS (ARM): 0x495724
     * @note[short] MacOS (Intel): 0x53e6f0
     * @note[short] Windows: 0x21c300
     * @note[short] Android
     */
    std::string getNextLevelName(std::string name);

    /**
     * @note[short] Windows: 0x24f310
     * @note[short] Android
     */
    TodoReturn getNotifications(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x4acc8c
     * @note[short] MacOS (Intel): 0x558520
     * @note[short] Windows: 0x22ab80
     * @note[short] Android
     */
    void getOnlineLevels(GJSearchObject* object);

    /**
     * @note[short] MacOS (ARM): 0x4a03e8
     * @note[short] MacOS (Intel): 0x54a4f0
     * @note[short] Windows: 0x2218d0
     * @note[short] Android
     */
    const char* getPageInfo(char const* key);

    /**
     * @note[short] Android
     */
    void getPlatformerSaveStats(int mode, int& count, unsigned long& size);

    /**
     * @note[short] MacOS (ARM): 0x4bec68
     * @note[short] MacOS (Intel): 0x56bdf0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    const char* getPostCommentKey(int parentID);

    /**
     * @note[short] MacOS (ARM): 0x4b5a84
     * @note[short] MacOS (Intel): 0x561fc0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    const char* getRateStarsKey(int levelID);

    /**
     * @note[short] MacOS (Intel): 0x569070
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    const char* getReportKey(int levelID);

    /**
     * @note[short] MacOS (ARM): 0x49f2cc
     * @note[short] MacOS (Intel): 0x5491b0
     * @note[short] Windows: 0x2207e0
     * @note[short] Android
     */
    GJGameLevel* getSavedDailyLevel(int dailyID);

    /**
     * @note[short] MacOS (ARM): 0x49f3e0
     * @note[short] MacOS (Intel): 0x5492b0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    GJGameLevel* getSavedDailyLevelFromLevelID(int id);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    GJMapPack* getSavedGauntlet(int id);

    /**
     * @note[short] Windows: 0x2208c0
     * @note[short] Android
     */
    GJGameLevel* getSavedGauntletLevel(int id);

    /**
     * @note[short] MacOS (ARM): 0x4997ec
     * @note[short] MacOS (Intel): 0x542e90
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    GJGameLevel* getSavedLevel(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x49f0a4
     * @note[short] MacOS (Intel): 0x548fb0
     * @note[short] Windows: 0x220700
     * @note[short] Android
     */
    GJGameLevel* getSavedLevel(int id);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    GJLevelList* getSavedLevelList(int listID);

    /**
     * @note[short] MacOS (ARM): 0x49cdec
     * @note[short] MacOS (Intel): 0x5468e0
     * @note[short] Windows: 0x21f120
     * @note[short] Android
     */
    cocos2d::CCArray* getSavedLevelLists(int folder);

    /**
     * @note[short] MacOS (ARM): 0x49cc18
     * @note[short] MacOS (Intel): 0x5466f0
     * @note[short] Windows: 0x21ef40
     * @note[short] Android
     */
    cocos2d::CCArray* getSavedLevels(bool favorite, int folder);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    GJMapPack* getSavedMapPack(int id);

    /**
     * @note[short] MacOS (ARM): 0x4a0c70
     * @note[short] MacOS (Intel): 0x54ad10
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    cocos2d::CCScene* getSearchScene(char const* key);

    /**
     * @note[short] Windows: 0x253d40
     * @note[short] Android
     */
    TodoReturn getSongUsage(int p0);

    /**
     * @note[short] MacOS (ARM): 0x4b6844
     * @note[short] MacOS (Intel): 0x562e60
     * @note[short] Windows: 0x23dde0
     * @note[short] Android
     */
    int getSplitIntFromKey(char const* key, int index);

    /**
     * @note[short] MacOS (ARM): 0x49d698
     * @note[short] MacOS (Intel): 0x5471b0
     * @note[short] Windows: 0x21f760
     * @note[short] iOS: 0xabe08
     * @note[short] Android
     */
    std::string getStarLevelsString();

    /**
     * @note[short] MacOS (ARM): 0x4bf034
     * @note[short] Windows: 0x23e250
     * @note[short] Android
     */
    cocos2d::CCArray* getStoredLevelComments(char const* key);

    /**
     * @note[short] MacOS (ARM): 0x4a018c
     * @note[short] Windows: 0x2217d0
     * @note[short] Android
     */
    cocos2d::CCArray* getStoredOnlineLevels(char const* key);

    /**
     * @note[short] Windows: 0x257b80
     * @note[short] Android
     */
    cocos2d::CCArray* getStoredUserList(UserListType type);

    /**
     * @note[short] MacOS (ARM): 0x4baeb4
     * @note[short] MacOS (Intel): 0x567da0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    GJUserMessage* getStoredUserMessage(int id);

    /**
     * @note[short] MacOS (ARM): 0x4baedc
     * @note[short] MacOS (Intel): 0x567df0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    GJUserMessage* getStoredUserMessageReply(int id);

    /**
     * @note[short] Windows: 0x24e560
     * @note[short] Android
     */
    TodoReturn getThreadInvites();

    /**
     * @note[short] Android
     */
    TodoReturn getThreadMembers(int p0);

    /**
     * @note[short] Windows: 0x24b350
     * @note[short] Android
     */
    TodoReturn getThreadMessages(int p0, long long p1, long long p2, int p3, long long p4, std::string const& p5);

    /**
     * @note[short] Android
     */
    TodoReturn getThreadPastMembers(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn getThreadPendingInvites(int p0);

    /**
     * @note[short] MacOS (ARM): 0x4c53d0
     * @note[short] Windows: 0x24a250
     * @note[short] Android
     */
    bool getThreads(int p0, std::string const& p1, int p2, std::string const& p3);

    /**
     * @note[short] Windows: 0x221e90
     * @note[short] Android
     */
    int getTimeLeft(char const* key, float length);

    /**
     * @note[short] MacOS (ARM): 0x4b9db4
     * @note[short] MacOS (Intel): 0x566bd0
     * @note[short] Windows: 0x239730
     * @note[short] Android
     */
    void getTopArtists(int page, int total);

    /**
     * @note[short] MacOS (ARM): 0x4ba15c
     * @note[short] MacOS (Intel): 0x566fa0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    const char* getTopArtistsKey(int page);

    /**
     * @note[short] MacOS (ARM): 0x4bc080
     * @note[short] MacOS (Intel): 0x569090
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    const char* getUploadMessageKey(int accountID);

    /**
     * @note[short] MacOS (ARM): 0x4ba500
     * @note[short] MacOS (Intel): 0x567380
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    const char* getUserInfoKey(int id);

    /**
     * @note[short] MacOS (ARM): 0x91948
     * @note[short] Windows: 0x257250
     * @note[short] Android
     */
    void getUserList(UserListType type);

    /**
     * @note[short] MacOS (ARM): 0x4baee8
     * @note[short] Windows: 0x23aac0
     * @note[short] Android
     */
    void getUserMessages(bool sent, int page, int total);

    /**
     * @note[short] MacOS (Intel): 0x566fc0
     * @note[short] Windows: 0x239f10
     * @note[short] Android
     */
    void getUsers(GJSearchObject* object);

    /**
     * @note[short] Android
     */
    TodoReturn getUserSearch(std::string const& p0);

    /**
     * @note[short] MacOS (ARM): 0x49fbf4
     * @note[short] MacOS (Intel): 0x549d70
     * @note[short] Windows: 0x221390
     * @note[short] Android
     */
    void gotoLevelPage(GJGameLevel* level);

    /**
     * @note[short] Windows: 0x219750
     * @note[short] iOS: 0x9166c
     * @note[short] Android
     */
    void handleIt(bool success, std::string response, std::string tag, GJHttpType type);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void handleItDelayed(bool success, std::string response, std::string tag, GJHttpType type);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void handleItND(cocos2d::CCNode* node, void* data);

    /**
     * @note[short] MacOS (ARM): 0x4d2c28
     * @note[short] MacOS (Intel): 0x580f90
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool hasDailyStateBeenLoaded(GJTimedLevelType type);

    /**
     * @note[short] MacOS (ARM): 0x4b2fc0
     * @note[short] MacOS (Intel): 0x55eea0
     * @note[short] Windows: 0x233a80
     * @note[short] Android
     */
    bool hasDownloadedLevel(int id);

    /**
     * @note[short] MacOS (ARM): 0x4ad9dc
     * @note[short] MacOS (Intel): 0x559460
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool hasDownloadedList(int id);

    /**
     * @note[short] Windows: 0x25bd70
     * @note[short] Android
     */
    bool hasLikedAccountItem(LikeItemType type, int id, bool liked, int parentID);

    /**
     * @note[short] Windows: 0x25bd70
     * @note[short] Android
     */
    bool hasLikedItem(LikeItemType type, int id, bool liked, int parentID);

    /**
     * @note[short] MacOS (ARM): 0x4d0d7c
     * @note[short] MacOS (Intel): 0x57f080
     * @note[short] Windows: 0x25bce0
     * @note[short] Android
     */
    bool hasLikedItemFullCheck(LikeItemType p0, int p1, int p2);

    /**
     * @note[short] Android
     */
    TodoReturn hasNewDaily(GJTimedLevelType p0);

    /**
     * @note[short] Android
     */
    TodoReturn hasNewGauntlets();

    /**
     * @note[short] Windows: 0x2348a0
     * @note[short] Android
     */
    bool hasRatedDemon(int id);

    /**
     * @note[short] Windows: 0x2347c0
     * @note[short] Android
     */
    bool hasRatedLevelStars(int id);

    /**
     * @note[short] Android
     */
    bool hasReportedLevel(int id);

    /**
     * @note[short] Windows: 0x23c1a0
     * @note[short] Android
     */
    void invalidateMessages(bool sent, bool reload);

    /**
     * @note[short] Android
     */
    void invalidateRequests(bool sent, bool reload);

    /**
     * @note[short] MacOS (ARM): 0x4c870c
     * @note[short] MacOS (Intel): 0x576120
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void invalidateUserList(UserListType type, bool reload);

    /**
     * @note[short] Android
     */
    bool isDeathDataFetched(int p0);

    /**
     * @note[short] MacOS (ARM): 0x4a05d0
     * @note[short] MacOS (Intel): 0x54a6a0
     * @note[short] Windows: 0x2219d0
     * @note[short] Android
     */
    bool isDLActive(char const* tag);

    /**
     * @note[short] MacOS (ARM): 0x4a41a4
     * @note[short] MacOS (Intel): 0x54e5f0
     * @note[short] Windows: 0x224320
     * @note[short] Android
     */
    bool isFollowingUser(int id);

    /**
     * @note[short] Android
     */
    bool isPastDailyCopy(GJGameLevel* p0);

    /**
     * @note[short] Windows: 0x221d40
     * @note[short] Android
     */
    bool isTimeValid(char const* key, float length);

    /**
     * @note[short] MacOS (ARM): 0x4b4d5c
     * @note[short] MacOS (Intel): 0x561100
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool isUpdateValid(int id);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    int itemIDFromLikeKey(char const* key);

    /**
     * @note[short] Windows: 0x221ff0
     * @note[short] Android
     */
    bool keyHasTimer(char const* key);

    /**
     * @note[short] Android
     */
    TodoReturn levelControlInstances(int p0);

    /**
     * @note[short] Windows: 0x23def0
     * @note[short] Android
     */
    int levelIDFromCommentKey(char const* key);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    int levelIDFromPostCommentKey(char const* key);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    int likeFromLikeKey(char const* key);

    /**
     * @note[short] MacOS (ARM): 0x4d0554
     * @note[short] MacOS (Intel): 0x57e6f0
     * @note[short] Windows: 0x25a9b0
     * @note[short] Android
     */
    void likeItem(LikeItemType type, int id, bool liked, int parentID);

    /**
     * @note[short] Windows: 0x222220
     * @note[short] Android
     */
    void limitSavedLevels();

    /**
     * @note[short] MacOS (ARM): 0x19455c
     * @note[short] MacOS (Intel): 0x54a1a0
     * @note[short] Windows: 0x221c30
     * @note[short] Android
     */
    void makeTimeStamp(char const* key);

    /**
     * @note[short] Android
     */
    TodoReturn markGauntletsSeen();

    /**
     * @note[short] MacOS (ARM): 0x4d0e28
     * @note[short] MacOS (Intel): 0x57f110
     * @note[short] Windows: 0x9999999
     * @note[short] Android
     */
    void markItemAsLiked(LikeItemType type, int id, bool liked, int parentID);

    /**
     * @note[short] Windows: 0x233950
     * @note[short] Android
     */
    void markLevelAsDownloaded(int id);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void markLevelAsRatedDemon(int id);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void markLevelAsRatedStars(int id);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void markLevelAsReported(int id);

    /**
     * @note[short] MacOS (ARM): 0x4b4d54
     * @note[short] MacOS (Intel): 0x5610f0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void markListAsDownloaded(int id);

    /**
     * @note[short] Android
     */
    TodoReturn markTimedLevelSeen(GJTimedLevelType p0);

    /**
     * @note[short] Windows: 0x23bfd0
     * @note[short] Android
     */
    void messageWasRemoved(int id, bool sent);

    /**
     * @note[short] Windows: 0x24f700
     * @note[short] Android
     */
    TodoReturn muteUser(int p0, bool p1);

    /**
     * @note[short] Android
     */
    TodoReturn notificationMask();

    /**
     * @note[short] Android
     */
    void onAcceptFriendRequestCompleted(std::string response, std::string tag);

    /**
     * @note[short] Android
     */
    TodoReturn onAdminClearReportedContentCompleted(std::string p0, std::string p1);

    /**
     * @note[short] Android
     */
    TodoReturn onAdminCloseCaseCompleted(std::string p0, std::string p1);

    /**
     * @note[short] Android
     */
    TodoReturn onAdminCommentBanCompleted(std::string p0, std::string p1);

    /**
     * @note[short] Android
     */
    TodoReturn onAdminCommentUnbanCompleted(std::string p0, std::string p1);

    /**
     * @note[short] Android
     */
    TodoReturn onAdminDeleteUserCommentsCompleted(std::string p0, std::string p1);

    /**
     * @note[short] Android
     */
    TodoReturn onAdminFreezeCompleted(std::string p0, std::string p1);

    /**
     * @note[short] Android
     */
    TodoReturn onAdminGetAbuseInfoCompleted(std::string p0, std::string p1);

    /**
     * @note[short] Android
     */
    TodoReturn onAdminGetAccountReviewCompleted(std::string p0, std::string p1);

    /**
     * @note[short] Android
     */
    TodoReturn onAdminGetReportedContentCompleted(std::string p0, std::string p1);

    /**
     * @note[short] Android
     */
    TodoReturn onAdminGetReportQueueCompleted(std::string p0, std::string p1);

    /**
     * @note[short] Android
     */
    TodoReturn onAdminGetUserHistoryCompleted(std::string p0, std::string p1);

    /**
     * @note[short] Android
     */
    TodoReturn onAdminMessageBanCompleted(std::string p0, std::string p1);

    /**
     * @note[short] Android
     */
    TodoReturn onAdminMessageUnbanCompleted(std::string p0, std::string p1);

    /**
     * @note[short] Android
     */
    TodoReturn onAdminNameLockCompleted(std::string p0, std::string p1);

    /**
     * @note[short] Android
     */
    TodoReturn onAdminNameUnlockCompleted(std::string p0, std::string p1);

    /**
     * @note[short] Android
     */
    TodoReturn onAdminThreadActionCompleted(std::string p0, std::string p1);

    /**
     * @note[short] Android
     */
    TodoReturn onAdminTrendingBanCompleted(std::string p0, std::string p1);

    /**
     * @note[short] Android
     */
    TodoReturn onAdminTrendingUnbanCompleted(std::string p0, std::string p1);

    /**
     * @note[short] Android
     */
    TodoReturn onAdminUnfreezeCompleted(std::string p0, std::string p1);

    /**
     * @note[short] Android
     */
    TodoReturn onAdminUploadBanCompleted(std::string p0, std::string p1);

    /**
     * @note[short] Android
     */
    TodoReturn onAdminUploadUnbanCompleted(std::string p0, std::string p1);

    /**
     * @note[short] MacOS (ARM): 0x4847f0
     * @note[short] MacOS (Intel): 0x52b750
     * @note[short] Windows: 0x234f70
     * @note[short] Android
     */
    void onBanUserCompleted(std::string response, std::string tag);

    /**
     * @note[short] Windows: 0x256950
     * @note[short] Android
     */
    void onBlockUserCompleted(std::string response, std::string tag);

    /**
     * @note[short] Android
     */
    TodoReturn onClaimNotificationRewardCompleted(std::string p0, std::string p1);

    /**
     * @note[short] MacOS (ARM): 0x48008c
     * @note[short] MacOS (Intel): 0x526e90
     * @note[short] Windows: 0x2407f0
     * @note[short] Android
     */
    void onDeleteCommentCompleted(std::string response, std::string tag);

    /**
     * @note[short] Android
     */
    TodoReturn onDeleteCommentsCompleted(std::string p0, std::string p1);

    /**
     * @note[short] Windows: 0x2554f0
     * @note[short] Android
     */
    void onDeleteFriendRequestCompleted(std::string response, std::string tag);

    /**
     * @note[short] Android
     */
    TodoReturn onDeleteLevelControlsCompleted(std::string p0, std::string p1);

    /**
     * @note[short] Android
     */
    TodoReturn onDeleteServerEditorSoundCompleted(std::string p0, std::string p1);

    /**
     * @note[short] MacOS (ARM): 0x47e1c8
     * @note[short] MacOS (Intel): 0x524da0
     * @note[short] Windows: 0x234de0
     * @note[short] Android
     */
    void onDeleteServerLevelCompleted(std::string response, std::string tag);

    /**
     * @note[short] MacOS (ARM): 0x4886f8
     * @note[short] MacOS (Intel): 0x52fc30
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void onDeleteServerLevelListCompleted(std::string response, std::string tag);

    /**
     * @note[short] MacOS (Intel): 0x52ad30
     * @note[short] Windows: 0x23bdf0
     * @note[short] Android
     */
    void onDeleteUserMessagesCompleted(std::string response, std::string tag);

    /**
     * @note[short] Android
     */
    TodoReturn onDownloadEditorSoundCompleted(std::string p0, std::string p1);

    /**
     * @note[short] MacOS (Intel): 0x524a50
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void onDownloadLevelCompleted(std::string response, std::string tag);

    /**
     * @note[short] MacOS (ARM): 0x483fac
     * @note[short] MacOS (Intel): 0x52aef0
     * @note[short] Windows: 0x23b5e0
     * @note[short] Android
     */
    void onDownloadUserMessageCompleted(std::string response, std::string tag);

    /**
     * @note[short] Android
     */
    TodoReturn onFollowUserCompleted(std::string p0, std::string p1, bool p2);

    /**
     * @note[short] Windows: 0x23c890
     * @note[short] Android
     */
    void onGetAccountCommentsCompleted(std::string response, std::string tag);

    /**
     * @note[short] Android
     */
    TodoReturn onGetContentStatusCompleted(std::string p0, std::string p1);

    /**
     * @note[short] Android
     */
    TodoReturn onGetDeathDataCompleted(std::string p0, std::string p1);

    /**
     * @note[short] Android
     */
    TodoReturn onGetEditorSoundsCompleted(std::string p0, std::string p1);

    /**
     * @note[short] Windows: 0x2518e0
     * @note[short] Android
     */
    TodoReturn onGetFollowingCompleted(std::string p0, std::string p1);

    /**
     * @note[short] MacOS (ARM): 0x482ea0
     * @note[short] MacOS (Intel): 0x529cc0
     * @note[short] Windows: 0x254400
     * @note[short] Android
     */
    void onGetFriendRequestsCompleted(std::string response, std::string tag);

    /**
     * @note[short] MacOS (ARM): 0x7fa73c
     * @note[short] MacOS (Intel): 0x577350
     * @note[short] Windows: 0x230ff0
     * @note[short] Android
     */
    void onGetGauntletsCompleted(std::string response, std::string tag);

    /**
     * @note[short] Windows: 0x25e700
     * @note[short] Android
     */
    void onGetGJChallengesCompleted(std::string response, std::string tag);

    /**
     * @note[short] MacOS (ARM): 0x85f08c
     * @note[short] Windows: 0x2602d0
     * @note[short] Android
     */
    void onGetGJDailyLevelStateCompleted(std::string response, std::string tag);

    /**
     * @note[short] MacOS (ARM): 0x485204
     * @note[short] Windows: 0x25d450
     * @note[short] Android
     */
    void onGetGJRewardsCompleted(std::string response, std::string tag);

    /**
     * @note[short] MacOS (Intel): 0x736f80
     * @note[short] Android
     */
    void onGetGJSecretRewardCompleted(std::string response, std::string tag);

    /**
     * @note[short] MacOS (ARM): 0x4814e4
     * @note[short] MacOS (Intel): 0x5282b0
     * @note[short] Windows: 0x23a830
     * @note[short] Android
     */
    void onGetGJUserInfoCompleted(std::string response, std::string tag);

    /**
     * @note[short] MacOS (ARM): 0x47e644
     * @note[short] MacOS (Intel): 0x525200
     * @note[short] Windows: 0x2384c0
     * @note[short] Android
     */
    void onGetLeaderboardScoresCompleted(std::string response, std::string tag);

    /**
     * @note[short] Windows: 0x23d100
     * @note[short] Android
     */
    void onGetLevelCommentsCompleted(std::string response, std::string tag);

    /**
     * @note[short] Android
     */
    TodoReturn onGetLevelControlsCompleted(std::string p0, std::string p1);

    /**
     * @note[short] MacOS (ARM): 0x487050
     * @note[short] MacOS (Intel): 0x52e480
     * @note[short] Windows: 0x239480
     * @note[short] Android
     */
    void onGetLevelLeaderboardCompleted(std::string response, std::string tag);

    /**
     * @note[short] MacOS (ARM): 0x487e94
     * @note[short] MacOS (Intel): 0x52f2c0
     * @note[short] Windows: 0x22dd90
     * @note[short] Android
     */
    void onGetLevelListsCompleted(std::string response, std::string tag);

    /**
     * @note[short] MacOS (ARM): 0x4896d4
     * @note[short] MacOS (Intel): 0x530e20
     * @note[short] Windows: 0x253c10
     * @note[short] Android
     */
    void onGetLevelRateInfoCompleted(std::string response, std::string tag);

    /**
     * @note[short] MacOS (ARM): 0x484d38
     * @note[short] MacOS (Intel): 0x52bcb0
     * @note[short] Windows: 0x22c290
     * @note[short] Android
     */
    void onGetLevelSaveDataCompleted(std::string response, std::string tag);

    /**
     * @note[short] MacOS (ARM): 0x47d4b4
     * @note[short] MacOS (Intel): 0x523f40
     * @note[short] Windows: 0x22c900
     * @note[short] Android
     */
    void onGetMapPacksCompleted(std::string response, std::string tag);

    /**
     * @note[short] MacOS (Intel): 0x490870
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onGetNewsCompleted(std::string response, std::string tag);

    /**
     * @note[short] Android
     */
    TodoReturn onGetNotificationsCompleted(std::string p0, std::string p1);

    /**
     * @note[short] MacOS (ARM): 0x47c9c4
     * @note[short] MacOS (Intel): 0x523250
     * @note[short] Windows: 0x22b650
     * @note[short] Android
     */
    void onGetOnlineLevelsCompleted(std::string response, std::string tag);

    /**
     * @note[short] Android
     */
    TodoReturn onGetSongUsageCompleted(std::string p0, std::string p1);

    /**
     * @note[short] Android
     */
    TodoReturn onGetThreadInvitesCompleted(std::string p0, std::string p1);

    /**
     * @note[short] Android
     */
    TodoReturn onGetThreadMessagesCompleted(std::string p0, std::string p1);

    /**
     * @note[short] MacOS (ARM): 0x4900a8
     * @note[short] Android
     */
    void onGetThreadsCompleted(std::string p0, std::string p1);

    /**
     * @note[short] MacOS (ARM): 0x487814
     * @note[short] MacOS (Intel): 0x52ec00
     * @note[short] Windows: 0x239a60
     * @note[short] Android
     */
    void onGetTopArtistsCompleted(std::string response, std::string tag);

    /**
     * @note[short] MacOS (ARM): 0x4826a4
     * @note[short] Windows: 0x257480
     * @note[short] Android
     */
    void onGetUserListCompleted(std::string response, std::string tag);

    /**
     * @note[short] MacOS (ARM): 0x483670
     * @note[short] MacOS (Intel): 0x52a540
     * @note[short] Windows: 0x23ad00
     * @note[short] Android
     */
    void onGetUserMessagesCompleted(std::string response, std::string tag);

    /**
     * @note[short] MacOS (ARM): 0x48433c
     * @note[short] MacOS (Intel): 0x3030c0
     * @note[short] Windows: 0x23a170
     * @note[short] Android
     */
    void onGetUsersCompleted(std::string response, std::string tag);

    /**
     * @note[short] Android
     */
    TodoReturn onGetUserSearchCompleted(std::string p0, std::string p1);

    /**
     * @note[short] MacOS (ARM): 0x4803bc
     * @note[short] MacOS (Intel): 0x5271b0
     * @note[short] Windows: 0x25b210
     * @note[short] Android
     */
    void onLikeItemCompleted(std::string response, std::string tag);

    /**
     * @note[short] Android
     */
    TodoReturn onMuteUserCompleted(std::string p0, std::string p1, bool p2);

    /**
     * @note[short] MacOS (ARM): 0x476b24
     * @note[short] Windows: 0x2195e0
     * @note[short] iOS: 0x911c8
     * @note[short] Android
     */
    void onProcessHttpRequestCompleted(cocos2d::extension::CCHttpClient* client, cocos2d::extension::CCHttpResponse* response);

    /**
     * @note[short] MacOS (ARM): 0x486da8
     * @note[short] MacOS (Intel): 0x52e190
     * @note[short] Windows: 0x235d50
     * @note[short] Android
     */
    void onRateDemonCompleted(std::string response, std::string tag);

    /**
     * @note[short] Android
     */
    TodoReturn onRateEditorSoundAdminCompleted(std::string p0, std::string p1);

    /**
     * @note[short] MacOS (ARM): 0x758dac
     * @note[short] MacOS (Intel): 0x8640a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onRateLevelAdminCompleted(std::string response, std::string tag);

    /**
     * @note[short] Android
     */
    TodoReturn onRateLevelListAdminCompleted(std::string p0, std::string p1);

    /**
     * @note[short] MacOS (ARM): 0x47e034
     * @note[short] MacOS (Intel): 0x524c20
     * @note[short] Windows: 0x2345c0
     * @note[short] Android
     */
    void onRateStarsCompleted(std::string response, std::string tag);

    /**
     * @note[short] MacOS (ARM): 0x481d18
     * @note[short] MacOS (Intel): 0x528ad0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void onReadFriendRequestCompleted(std::string response, std::string tag);

    /**
     * @note[short] Windows: 0x256310
     * @note[short] Android
     */
    void onRemoveFriendCompleted(std::string response, std::string tag);

    /**
     * @note[short] Android
     */
    TodoReturn onReportContentCompleted(std::string p0, std::string p1);

    /**
     * @note[short] MacOS (ARM): 0x4807b8
     * @note[short] MacOS (Intel): 0x527530
     * @note[short] Windows: 0x260f70
     * @note[short] Android
     */
    void onReportLevelCompleted(std::string response, std::string tag);

    /**
     * @note[short] Android
     */
    TodoReturn onRequestThreadMembersCompleted(std::string p0, std::string p1);

    /**
     * @note[short] MacOS (ARM): 0x484b5c
     * @note[short] MacOS (Intel): 0x52bb00
     * @note[short] Windows: 0x25b9b0
     * @note[short] Android
     */
    void onRequestUserAccessCompleted(std::string response, std::string tag);

    /**
     * @note[short] MacOS (ARM): 0x4805a4
     * @note[short] MacOS (Intel): 0x527360
     * @note[short] Windows: 0x260820
     * @note[short] Android
     */
    void onRestoreItemsCompleted(std::string response, std::string tag);

    /**
     * @note[short] Android
     */
    TodoReturn onSearchThreadMessagesCompleted(std::string p0, std::string p1);

    /**
     * @note[short] MacOS (ARM): 0x48fd50
     * @note[short] Android
     */
    void onSendThreadMessageCompleted(std::string p0, std::string p1);

    /**
     * @note[short] MacOS (ARM): 0x47e4c8
     * @note[short] MacOS (Intel): 0x525090
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void onSetLevelFeaturedCompleted(std::string response, std::string tag);

    /**
     * @note[short] MacOS (ARM): 0x47e344
     * @note[short] MacOS (Intel): 0x524f10
     * @note[short] Windows: 0x2360d0
     * @note[short] Android
     */
    void onSetLevelStarsCompleted(std::string response, std::string tag);

    /**
     * @note[short] MacOS (ARM): 0x4807b4
     * @note[short] MacOS (Intel): 0x527520
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void onSubmitUserInfoCompleted(std::string response, std::string tag);

    /**
     * @note[short] MacOS (ARM): 0x485014
     * @note[short] MacOS (Intel): 0x52bfa0
     * @note[short] Windows: 0x235640
     * @note[short] Android
     */
    void onSuggestLevelStarsCompleted(std::string response, std::string tag);

    /**
     * @note[short] Windows: 0x256fe0
     * @note[short] Android
     */
    void onUnblockUserCompleted(std::string response, std::string tag);

    /**
     * @note[short] MacOS (ARM): 0x48092c
     * @note[short] MacOS (Intel): 0x5276a0
     * @note[short] Windows: 0x258c50
     * @note[short] Android
     */
    void onUpdateDescriptionCompleted(std::string response, std::string tag);

    /**
     * @note[short] Android
     */
    TodoReturn onUpdateEditorSoundDescriptionCompleted(std::string p0, std::string p1);

    /**
     * @note[short] MacOS (Intel): 0x524b30
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void onUpdateLevelCompleted(std::string response, std::string tag);

    /**
     * @note[short] MacOS (ARM): 0x491ed8
     * @note[short] Android
     */
    void onUpdateThreadCompleted(std::string p0, std::string p1);

    /**
     * @note[short] MacOS (ARM): 0x47e4cc
     * @note[short] MacOS (Intel): 0x5250a0
     * @note[short] Windows: 0x237d70
     * @note[short] Android
     */
    void onUpdateUserScoreCompleted(std::string response, std::string tag);

    /**
     * @note[short] MacOS (ARM): 0x47f3c8
     * @note[short] MacOS (Intel): 0x526030
     * @note[short] Windows: 0x23ed90
     * @note[short] Android
     */
    void onUploadCommentCompleted(std::string response, std::string tag);

    /**
     * @note[short] Windows: 0x227360
     * @note[short] Android
     */
    TodoReturn onUploadDeathDataCompleted(std::string p0, std::string p1);

    /**
     * @note[short] Android
     */
    TodoReturn onUploadEditorSoundCompleted(std::string p0, std::string p1);

    /**
     * @note[short] MacOS (ARM): 0x481724
     * @note[short] Windows: 0x254f00
     * @note[short] Android
     */
    void onUploadFriendRequestCompleted(std::string response, std::string tag);

    /**
     * @note[short] Windows: 0x22a0b0
     * @note[short] Android
     */
    void onUploadLevelCompleted(std::string response, std::string tag);

    /**
     * @note[short] Android
     */
    TodoReturn onUploadLevelControlsCompleted(std::string p0, std::string p1);

    /**
     * @note[short] MacOS (ARM): 0x488554
     * @note[short] MacOS (Intel): 0x52fa40
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void onUploadLevelListCompleted(std::string response, std::string tag);

    /**
     * @note[short] Windows: 0x23b760
     * @note[short] Android
     */
    void onUploadUserMessageCompleted(std::string response, std::string tag);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    int pageFromCommentKey(char const* key);

    /**
     * @note[short] Windows: 0x25fc10
     * @note[short] Android
     */
    TodoReturn parseEventReward(std::string p0, std::string p1);

    /**
     * @note[short] MacOS (ARM): 0x3f9394
     * @note[short] MacOS (Intel): 0x581310
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void parseRestoreData(std::string str);

    /**
     * @note[short] MacOS (ARM): 0x4769a0
     * @note[short] MacOS (Intel): 0x3491d0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void performNetworkTest();

    /**
     * @note[short] MacOS (ARM): 0x476d14
     * @note[short] Windows: 0x2192d0
     * @note[short] iOS: 0x912e0
     * @note[short] Android
     */
    void ProcessHttpRequest(std::string endpoint, std::string params, std::string tag, GJHttpType httpType);

    /**
     * @note[short] Windows: 0x232220
     * @note[short] Android
     */
    void processOnDownloadLevelCompleted(std::string response, std::string tag, bool update);

    /**
     * @note[short] Android
     */
    void prunePlatformerJournalKeys(std::vector<std::pair<std::string, int>> const& keys);

    /**
     * @note[short] Windows: 0x2583d0
     * @note[short] Android
     */
    TodoReturn purgeFriendRequestSearchCache(bool p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x4a1800
     * @note[short] MacOS (Intel): 0x54b9e0
     * @note[short] Windows: 0x222670
     * @note[short] Android
     */
    void purgeUnusedLevels();

    /**
     * @note[short] MacOS (ARM): 0x4b6984
     * @note[short] MacOS (Intel): 0x562f70
     * @note[short] Windows: 0x2358f0
     * @note[short] Android
     */
    bool rateDemon(int id, int diff, bool moderator);

    /**
     * @note[short] Android
     */
    TodoReturn rateEditorSoundAdmin(int p0, int p1, int p2, bool p3);

    /**
     * @note[short] MacOS (ARM): 0x4cbdf8
     * @note[short] MacOS (Intel): 0x579b10
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool rateLevelAdmin(int id, int stars, int feature, int rank, bool coins, bool updateRank);

    /**
     * @note[short] Android
     */
    TodoReturn rateLevelListAdmin(int p0, int p1, int p2, int p3, int p4, bool p5);

    /**
     * @note[short] MacOS (ARM): 0x4b50ec
     * @note[short] MacOS (Intel): 0x5614a0
     * @note[short] Windows: 0x233da0
     * @note[short] Android
     */
    void rateStars(int id, int diff);

    /**
     * @note[short] Android
     */
    void readFriendRequest(int id);

    /**
     * @note[short] Windows: 0x255c70
     * @note[short] Android
     */
    TodoReturn readFriendRequests(std::string const& p0);

    /**
     * @note[short] MacOS (ARM): 0x4aaffc
     * @note[short] MacOS (Intel): 0x556560
     * @note[short] Windows: 0x261620
     * @note[short] iOS: 0xb4e2c
     * @note[short] Android
     */
    void removeDelimiterChars(std::string str, bool colon);

    /**
     * @note[short] MacOS (ARM): 0x4a07c8
     * @note[short] MacOS (Intel): 0x54a870
     * @note[short] Windows: 0x221b70
     * @note[short] Android
     */
    void removeDLFromActive(char const* key);

    /**
     * @note[short] Windows: 0x255fd0
     * @note[short] Android
     */
    bool removeFriend(int accountID);

    /**
     * @note[short] MacOS (ARM): 0x4a4538
     * @note[short] MacOS (Intel): 0x54e940
     * @note[short] Android
     */
    void removeLevelDownloadedKeysFromDict(cocos2d::CCDictionary* dict);

    /**
     * @note[short] Android
     */
    void removePlatformerSaveJournalEntry(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x4ce578
     * @note[short] MacOS (Intel): 0x57c590
     * @note[short] Windows: 0x2571a0
     * @note[short] Android
     */
    void removeUserFromList(int id, UserListType type);

    /**
     * @note[short] Android
     */
    TodoReturn replaceFollowedUsers(std::string const& p0);

    /**
     * @note[short] Windows: 0x223740
     * @note[short] Android
     */
    void replayPlatformerSaveJournal();

    /**
     * @note[short] Windows: 0x261100
     * @note[short] Android
     */
    TodoReturn reportContent(int p0, int p1, int p2, std::vector<int> const& p3, long long p4);

    /**
     * @note[short] MacOS (ARM): 0x4d2fc8
     * @note[short] MacOS (Intel): 0x581320
     * @note[short] Android
     */
    void reportLevel(int id);

    /**
     * @note[short] Windows: 0x252270
     * @note[short] Android
     */
    TodoReturn requestThreadMembers(int p0);

    /**
     * @note[short] MacOS (ARM): 0x4d12cc
     * @note[short] MacOS (Intel): 0x575610
     * @note[short] Windows: 0x25b6a0
     * @note[short] Android
     */
    bool requestUserAccess();

    /**
     * @note[short] Windows: 0x222180
     * @note[short] Android
     */
    void resetAccountCaches();

    /**
     * @note[short] MacOS (ARM): 0x4be920
     * @note[short] MacOS (Intel): 0x56ba50
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void resetAccountComments(int accountID);

    /**
     * @note[short] MacOS (ARM): 0x5fcf0c
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void resetAllTimers();

    /**
     * @note[short] MacOS (Intel): 0x56da50
     * @note[short] Windows: 0x2400e0
     * @note[short] Android
     */
    void resetCommentTimersForAccountID(int id);

    /**
     * @note[short] MacOS (Intel): 0x56d430
     * @note[short] Windows: 0x23ff00
     * @note[short] Android
     */
    void resetCommentTimersForLevelID(int id, CommentKeyType type);

    /**
     * @note[short] MacOS (Intel): 0x580f50
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void resetDailyLevelState(GJTimedLevelType type);

    /**
     * @note[short] MacOS (ARM): 0x4b2798
     * @note[short] MacOS (Intel): 0x55e540
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void resetGauntlets();

    /**
     * @note[short] MacOS (ARM): 0x4bae88
     * @note[short] MacOS (Intel): 0x567d40
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void resetStoredUserInfo(int id);

    /**
     * @note[short] Windows: 0x257e70
     * @note[short] Android
     */
    void resetStoredUserList(UserListType type);

    /**
     * @note[short] MacOS (Intel): 0x54ab80
     * @note[short] Windows: 0x2220c0
     * @note[short] Android
     */
    void resetTimerForKey(char const* key);

    /**
     * @note[short] MacOS (ARM): 0x90348
     * @note[short] MacOS (Intel): 0x581030
     * @note[short] Android
     */
    void restoreItems();

    /**
     * @note[short] Windows: 0x25c620
     * @note[short] Android
     */
    TodoReturn rewardItemFromResponse(std::string const& p0, int& p1);

    /**
     * @note[short] Android
     */
    TodoReturn rewardSessionToken();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void saveFetchedLevelLists(cocos2d::CCArray* lists);

    /**
     * @note[short] MacOS (ARM): 0x4995dc
     * @note[short] MacOS (Intel): 0x542be0
     * @note[short] Windows: 0x21e400
     * @note[short] Android
     */
    void saveFetchedLevels(cocos2d::CCArray* levels);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void saveFetchedMapPacks(cocos2d::CCArray* packs);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void saveGauntlet(GJMapPack* gauntlet);

    /**
     * @note[short] MacOS (ARM): 0x49f418
     * @note[short] MacOS (Intel): 0x549300
     * @note[short] Windows: 0x2209a0
     * @note[short] Android
     */
    void saveLevel(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x49a180
     * @note[short] MacOS (Intel): 0x543840
     * @note[short] Windows: 0x22e290
     * @note[short] Android
     */
    void saveLevelList(GJLevelList* list);

    /**
     * @note[short] MacOS (ARM): 0x4a4af4
     * @note[short] MacOS (Intel): 0x54ef30
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void saveLocalScore(int id, int value, int type);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void saveMapPack(GJMapPack* pack);

    /**
     * @note[short] Windows: 0x24bc80
     * @note[short] Android
     */
    TodoReturn searchThreadMessages(int p0, std::string const& p1, long long p2);

    /**
     * @note[short] Android
     */
    TodoReturn searchTypeIsCurated(SearchType p0);

    /**
     * @note[short] Windows: 0x2412b0
     * @note[short] Android
     */
    TodoReturn sendAdminAction(char const* p0, char const* p1, GJHttpType p2, int p3, std::string const& p4, std::string const& p5, std::vector<int> const& p6);

    /**
     * @note[short] MacOS (ARM): 0x4c4bc0
     * @note[short] Windows: 0x249630
     * @note[short] Android
     */
    bool sendThreadMessage(int p0, int p1, std::string const& p2, std::string const& p3, uint64_t p4, std::string const& p5, bool p6, std::string const& p7, std::string const& p8);

    /**
     * @note[short] MacOS (ARM): 0x4a4b00
     * @note[short] MacOS (Intel): 0x54ef50
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void setActiveSmartTemplate(GJSmartTemplate* smartTemplate);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void setBoolForKey(bool value, char const* key);

    /**
     * @note[short] Windows: 0x261420
     * @note[short] Android
     */
    void setDiffVal(int diff, bool value);

    /**
     * @note[short] MacOS (ARM): 0x4a49c8
     * @note[short] MacOS (Intel): 0x54ee10
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void setFolderName(int id, std::string name, bool local);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void setIntForKey(int value, char const* key);

    /**
     * @note[short] Windows: 0x261520
     * @note[short] Android
     */
    void setLenVal(int diff, bool value);

    /**
     * @note[short] Android
     */
    void setLevelControlsTemplate(int p0, std::string const& p1, int p2);

    /**
     * @note[short] MacOS (ARM): 0x4b6e40
     * @note[short] MacOS (Intel): 0x563490
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void setLevelFeatured(int id, int rank, bool epic);

    /**
     * @note[short] MacOS (ARM): 0x4b6e38
     * @note[short] MacOS (Intel): 0x563480
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool setLevelStars(int id, int stars, bool coins);

    /**
     * @note[short] Android
     */
    void setNotificationMask(int p0);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    int specialFromLikeKey(char const* key);

    /**
     * @note[short] MacOS (ARM): 0x4bba74
     * @note[short] MacOS (Intel): 0x568aa0
     * @note[short] Windows: 0x23e010
     * @note[short] Android
     */
    void storeCommentsResult(cocos2d::CCArray* comments, std::string pageInfo, char const* key);

    /**
     * @note[short] MacOS (ARM): 0x4d2a60
     * @note[short] MacOS (Intel): 0x580df0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void storeDailyLevelState(int id, int remaining, GJTimedLevelType type);

    /**
     * @note[short] Android
     */
    TodoReturn storedFriendForAccountID(int p0);

    /**
     * @note[short] MacOS (ARM): 0x4bae6c
     * @note[short] MacOS (Intel): 0x567d10
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void storeFriendRequest(GJFriendRequest* request);

    /**
     * @note[short] MacOS (ARM): 0x49fda4
     * @note[short] MacOS (Intel): 0x549f00
     * @note[short] Windows: 0x221580
     * @note[short] Android
     */
    void storeSearchResult(cocos2d::CCArray* levels, std::string pageInfo, char const* searchKey);

    /**
     * @note[short] Android
     */
    TodoReturn storeThreadManifest(int p0, std::string const& p1);

    /**
     * @note[short] MacOS (Intel): 0x567d10
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void storeUserInfo(GJUserScore* score);

    /**
     * @note[short] MacOS (ARM): 0x4baea0
     * @note[short] MacOS (Intel): 0x567d80
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void storeUserMessage(GJUserMessage* message);

    /**
     * @note[short] MacOS (ARM): 0x4baec0
     * @note[short] MacOS (Intel): 0x567dc0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void storeUserMessageReply(int id, GJUserMessage* message);

    /**
     * @note[short] Windows: 0x21d580
     * @note[short] Android
     */
    void storeUserName(int userID, int accountID, std::string userName);

    /**
     * @note[short] MacOS (ARM): 0x4966c4
     * @note[short] MacOS (Intel): 0x53f7e0
     * @note[short] Windows: 0x21d240
     * @note[short] Android
     */
    void storeUserNames(std::string usernameString);

    /**
     * @note[short] MacOS (ARM): 0x4b8294
     * @note[short] MacOS (Intel): 0x564c20
     * @note[short] Windows: 0x260b20
     * @note[short] Android
     */
    void submitUserInfo();

    /**
     * @note[short] Windows: 0x2352d0
     * @note[short] Android
     */
    TodoReturn suggestLevelStars(int p0, int p1, int p2, bool p3, int p4);

    /**
     * @note[short] Windows: 0x251520
     * @note[short] Android
     */
    TodoReturn syncFollowing();

    /**
     * @note[short] Windows: 0x2519c0
     * @note[short] Android
     */
    TodoReturn syncFollowListIfNeeded();

    /**
     * @note[short] MacOS (ARM): 0x497344
     * @note[short] MacOS (Intel): 0x540400
     * @note[short] Windows: 0x21d970
     * @note[short] Android
     */
    std::string tryGetUsername(int accountID);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    CommentType typeFromCommentKey(char const* key);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    LikeItemType typeFromLikeKey(char const* key);

    /**
     * @note[short] Windows: 0x256ca0
     * @note[short] Android
     */
    bool unblockUser(int id);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void unfollowUser(int id);

    /**
     * @note[short] Android
     */
    TodoReturn unrateEditorSoundAdmin(int p0);

    /**
     * @note[short] MacOS (Intel): 0x579b80
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool unrateLevelAdmin(int id);

    /**
     * @note[short] Android
     */
    TodoReturn unrateLevelListAdmin(int p0);

    /**
     * @note[short] MacOS (ARM): 0x4cf28c
     * @note[short] MacOS (Intel): 0x57d340
     * @note[short] Windows: 0x2588d0
     * @note[short] Android
     */
    bool updateDescription(int id, std::string description);

    /**
     * @note[short] Windows: 0x22ff90
     * @note[short] Android
     */
    TodoReturn updateEditorSoundDescription(int p0, std::string p1, std::string const& p2);

    /**
     * @note[short] Android
     */
    TodoReturn updateEditorSoundRankAdmin(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x63008
     * @note[short] MacOS (Intel): 0x561140
     * @note[short] Windows: 0x233b60
     * @note[short] Android
     */
    void updateLevel(GJGameLevel* level);

    /**
     * @note[short] Android
     */
    TodoReturn updateLevelListRankAdmin(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x49cf2c
     * @note[short] MacOS (Intel): 0x546a30
     * @note[short] Windows: 0x21f1d0
     * @note[short] Android
     */
    void updateLevelOrders();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool updateLevelRankAdmin(int id, int rank);

    /**
     * @note[short] MacOS (ARM): 0x49776c
     * @note[short] MacOS (Intel): 0x540930
     * @note[short] Windows: 0x21dde0
     * @note[short] Android
     */
    void updateLevelRewards(GJGameLevel* level);

    /**
     * @note[short] Windows: 0x230a70
     * @note[short] Android
     */
    void updateSavedLevelList(GJLevelList* list);

    /**
     * @note[short] MacOS (ARM): 0x4ca540
     * @note[short] Windows: 0x2527b0
     * @note[short] Android
     */
    bool updateThread(int p0, int p1, std::string const& p2);

    /**
     * @note[short] MacOS (ARM): 0x3ec9fc
     * @note[short] MacOS (Intel): 0x54e4e0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateUsernames();

    /**
     * @note[short] MacOS (Intel): 0x5634a0
     * @note[short] Windows: 0x236270
     * @note[short] iOS: 0xbbf84
     * @note[short] Android
     */
    void updateUserScore();

    /**
     * @note[short] MacOS (ARM): 0x4c00b4
     * @note[short] MacOS (Intel): 0x56d290
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void uploadAccountComment(std::string content);

    /**
     * @note[short] MacOS (Intel): 0x56c2c0
     * @note[short] Windows: 0x23e350
     * @note[short] Android
     */
    void uploadComment(std::string content, CommentType type, int levelID, int percent);

    /**
     * @note[short] Windows: 0x2266f0
     * @note[short] Android
     */
    TodoReturn uploadDeathData();

    /**
     * @note[short] Android
     */
    TodoReturn uploadEditorSoundComment(int p0, std::string p1);

    /**
     * @note[short] Android
     */
    TodoReturn uploadEditorSoundConfig(std::string const& p0, std::string const& p1, std::string const& p2, int p3, int p4, int p5, int p6, std::string const& p7);

    /**
     * @note[short] MacOS (ARM): 0x4cc288
     * @note[short] MacOS (Intel): 0x57a060
     * @note[short] Windows: 0x254ad0
     * @note[short] Android
     */
    bool uploadFriendRequest(int accountID, std::string content);

    /**
     * @note[short] MacOS (ARM): 0x4a9e8c
     * @note[short] MacOS (Intel): 0x5551c0
     * @note[short] Windows: 0x229310
     * @note[short] Android
     */
    void uploadLevel(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x4bf150
     * @note[short] MacOS (Intel): 0x56c230
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void uploadLevelComment(int levelID, std::string content, int percent);

    /**
     * @note[short] Windows: 0x258ed0
     * @note[short] Android
     */
    TodoReturn uploadLevelControls(int p0, std::string p1);

    /**
     * @note[short] MacOS (ARM): 0x4ae0ec
     * @note[short] MacOS (Intel): 0x11b880
     * @note[short] Windows: 0x22d010
     * @note[short] Android
     */
    void uploadLevelList(GJLevelList* list);

    /**
     * @note[short] Android
     */
    TodoReturn uploadModRoomComment(int p0, std::string p1, int p2);

    /**
     * @note[short] MacOS (ARM): 0x4bc0a8
     * @note[short] MacOS (Intel): 0x562240
     * @note[short] Android
     */
    void uploadUserMessage(int accountID, std::string subject, std::string content);

    /**
     * @note[short] MacOS (ARM): 0x4975b0
     * @note[short] MacOS (Intel): 0x540700
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    int userIDForAccountID(int id);

    /**
     * @note[short] MacOS (ARM): 0x4975cc
     * @note[short] MacOS (Intel): 0x540720
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    GJUserScore* userInfoForAccountID(int id);

    /**
     * @note[short] MacOS (ARM): 0x4971a4
     * @note[short] MacOS (Intel): 0x540260
     * @note[short] Windows: 0x21d7e0
     * @note[short] Android
     */
    std::string userNameForUserID(int id);

    /**
     * @note[short] Android
     */
    TodoReturn vaultTimedType(SearchType p0, GJTimedLevelType& p1);

    /**
     * @note[short] MacOS (ARM): 0x4a5210
     * @note[short] MacOS (Intel): 0x54f750
     * @note[short] Windows: 0x224e80
     * @note[short] Android
     */
    bool verifyContainerOnlyHasLevels(cocos2d::CCDictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x4975f4
     * @note[short] MacOS (Intel): 0x540760
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void verifyLevelState(GJGameLevel* level);

    /**
     * @note[short] Android
     */
    void writePlatformerSaveJournal(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x4ac8a0
     * @note[short] MacOS (Intel): 0x558000
     * @note[short] Windows: 0x22a8b0
     * @note[short] Android
     */
    std::string writeSpecialFilters(GJSearchObject* object);

    /**
     * @note[short] Android
     */
    void adminQueueMute(int p0, std::string const& p1);

    /**
     * @note[short] Android
     */
    void adminQueueUnmute(int p0, std::string const& p1);

    /**
     * @note[short] Android
     */
    void onAdminQueueMuteCompleted(std::string p0, std::string p1);

    /**
     * @note[short] Android
     */
    void onAdminQueueUnmuteCompleted(std::string p0, std::string p1);
    std::unordered_map<int, std::string> m_deathRelated1;
    std::unordered_map<int, int> m_deathRelated2;
    std::unordered_set<int> m_deathData;
    int m_someMessageCountIdx2;
    int m_someMessageCountIdx3;
    bool m_unkThreadBool2;
    bool m_unkThreadBool;
    bool m_unkThreadBool3;
    void* m_notificationDelegate;
    void* m_userListDelegate2;
    bool m_followListLoaded;
    int m_getThreadsCounterIdx3;
    int m_getThreadsCounterIdx4;
    int m_threadMessagesIntIdx0;
    int m_threadMessagesIntIdx1;
    int m_threadMessagesIntIdx2;
    int m_threadMessagesIntIdx4;
    int m_maxLoadedMessages;
    int m_threadMessagesIntIdx5;
    int m_threadMessagesIntIdx6;
    long long m_threadMessagesLongLongIdx4;
    long long m_threadMessagesLongLongIdx7;
    bool m_threadBool;
    long long m_searchThreadMessagesLongLongIdx2;
    std::string m_onUpdateThreadCompletedStringMaybeThreadName;
    long long m_threadMessagesLongLongIdx2;
    long long m_threadMessagesLongLongIdx3;
    int m_getThreadMessagesSetsThisTo5ButServerSetsItTo3;
    int m_getThreadMessagesAlsoSetsThisTo5ButServerSetsItTo1;
    int m_getThreadMessagesSetsThisTo30ButServerSetsItTo10;
    std::string m_threadArrayIdx3;
    std::string m_threadArrayIdx8;
    bool m_threadArrayIdx9NotZero;
    int m_threadArrayIdx10;
    std::string m_threadSecondArrayIdx5;
    cocos2d::CCArray* m_threadMembers;
    cocos2d::CCArray* m_ccarrayUsedInApplyThreadAddReply;
    cocos2d::CCArray* m_ccarrayUsedInApplyThreadAddReply2;
    cocos2d::CCArray* m_ccarrayUsedInApplyThreadAddReply3;
    void* m_levelControlsDelegate;
    std::set<std::string> m_queuedLists;
    cocos2d::CCDictionary* m_mainLevels;
    cocos2d::CCDictionary* m_searchFilters;
    cocos2d::CCDictionary* m_onlineLevels;
    cocos2d::CCDictionary* m_storedLevelData;
    cocos2d::CCDictionary* m_followedCreators;
    cocos2d::CCDictionary* m_favoriteLists;
    cocos2d::CCDictionary* m_downloadedLevels;
    cocos2d::CCDictionary* m_likedLevels;
    cocos2d::CCDictionary* m_ratedLevels;
    cocos2d::CCDictionary* m_ratedDemons;
    cocos2d::CCDictionary* m_reportedLevels;
    cocos2d::CCDictionary* m_onlineFolders;
    cocos2d::CCDictionary* m_localLevelsFolders;
    cocos2d::CCDictionary* m_dailyLevels;
    int m_dailyTimeLeft;
    int m_dailyID;
    int m_activeDailyID;
    int m_weeklyTimeLeft;
    int m_weeklyID;
    int m_activeWeeklyID;
    int m_eventTimeLeft;
    int m_eventID;
    int m_activeEventID;
    int m_currentDailyID;
    int m_currentWeeklyID;
    int m_currentEventID;
    int m_currentGauntletCount;
    int m_onGetContentStatusCompletedIdx4;
    bool m_contentStatusLoaded;
    bool m_unkBool6;
    int m_lastSeenDailyID;
    int m_lastSeenWeeklyID;
    int m_lastSeenEventID;
    int m_lastSeenGauntletCount;
    bool m_gauntletCountFetched;
    cocos2d::CCDictionary* m_gauntletLevels;
    std::map<std::string, bool> m_availableFilters;
    cocos2d::CCDictionary* m_timerDict;
    cocos2d::CCDictionary* m_knownUsers;
    cocos2d::CCDictionary* m_accountIDtoUserIDDict;
    cocos2d::CCDictionary* m_userIDtoAccountIDDict;
    std::unordered_map<int, std::string> m_accountIdToUsernameMap;
    cocos2d::CCDictionary* m_storedLevels;
    cocos2d::CCDictionary* m_pageInfo;
    cocos2d::CCDictionary* m_unkDict20;
    cocos2d::CCDictionary* m_savedPacks;
    cocos2d::CCDictionary* m_savedGauntlets;
    cocos2d::CCDictionary* m_downloadObjects;
    cocos2d::CCDictionary* m_friendReqAndUserBlocks;
    cocos2d::CCDictionary* m_threadMemberDict;
    cocos2d::CCDictionary* m_threadPendingInvites;
    cocos2d::CCDictionary* m_threadPastMembersDict;
    cocos2d::CCDictionary* m_storedUserInfo;
    cocos2d::CCDictionary* m_friendRequests;
    cocos2d::CCDictionary* m_userMessages;
    cocos2d::CCDictionary* m_userReplies;
    cocos2d::CCDictionary* m_localLeaderboardLevels;
    std::string m_searchKey;
    std::string m_mapPackKey;
    LeaderboardType m_leaderboardType;
    LeaderboardStat m_leaderboardStat;
    bool m_returnToLocalLevels;
    LevelManagerDelegate* m_levelManagerDelegate;
    LevelDownloadDelegate* m_levelDownloadDelegate;
    LevelCommentDelegate* m_levelCommentDelegate;
    CommentUploadDelegate* m_commentUploadDelegate;
    void* m_adminDelegate;
    void* m_sendThreadMessageDelegate;
    LevelUploadDelegate* m_levelUploadDelegate;
    ListUploadDelegate* m_listUploadDelegate;
    LevelUpdateDelegate* m_levelUpdateDelegate;
    LeaderboardManagerDelegate* m_leaderboardManagerDelegate;
    LevelDeleteDelegate* m_levelDeleteDelegate;
    LevelListDeleteDelegate* m_levelListDeleteDelegate;
    void* m_editorSoundUploadDelegate;
    void* m_getEditorSoundsDelegate;
    void* m_downloadEditorSoundDelegate;
    void* m_deleteEditorSoundDelegate;
    UserInfoDelegate* m_userInfoDelegate;
    UploadActionDelegate* m_uploadActionDelegate;
    UserListDelegate* m_userListDelegate;
    FriendRequestDelegate* m_friendRequestDelegate;
    MessageListDelegate* m_messageListDelegate;
    DownloadMessageDelegate* m_downloadMessageDelegate;
    UploadMessageDelegate* m_uploadMessageDelegate;
    GJRewardDelegate* m_GJRewardDelegate;
    GJOnlineRewardDelegate* m_GJOnlineRewardDelegate;
    GJChallengeDelegate* m_GJChallengeDelegate;
    GJDailyLevelDelegate* m_GJDailyLevelDelegate;
    void* m_contentStatusDelegate;
    bool m_unkBool7;
    OnlineListDelegate* m_onlineListDelegate;
    LevelRateInfoDelegate* m_levelRateInfoDelegate;
    void* m_songUsageDelegate;
    SearchType m_searchType;
    int m_mapPack;
    std::string m_tempSave;
    cocos2d::CCString* m_trueString;
    cocos2d::CCArray* m_smartTemplates;
    GJSmartTemplate* m_smartTemplate;
    bool m_testedNetwork;
};

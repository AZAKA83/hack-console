#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/EditorBuildStats.hpp>
#include <Geode/mapping/CCNode.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/SeedValue.hpp>
#include <Geode/mapping/vector.hpp>

class GJGameLevel : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GJGameLevel";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJGameLevel, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): 0x4e12a4
     * @note[short] MacOS (Intel): 0x590e80
     * @note[short] Windows: 0x217820
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GJGameLevel();

    /**
     * @note[short] MacOS (ARM): 0x4d4384
     * @note[short] MacOS (Intel): 0x5826d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xce268
     * @note[short] Android: Rebinded
     */
     ~GJGameLevel();

    /**
     * @note[short] MacOS (ARM): 0x4955ec
     * @note[short] MacOS (Intel): 0x53e5d0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static GJGameLevel* create();

    /**
     * @note[short] MacOS (ARM): 0x4d6db0
     * @note[short] MacOS (Intel): 0x540c90
     * @note[short] Windows: 0x261d00
     * @note[short] Android
     */
    static GJGameLevel* create(cocos2d::CCDictionary* dict, bool download);

    /**
     * @note[short] MacOS (Intel): 0x588f40
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static GJGameLevel* createWithCoder(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x4dcb94
     * @note[short] MacOS (Intel): 0x58c300
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static int demonIconForDifficulty(DemonDifficultyType type);

    /**
     * @note[short] MacOS (ARM): 0x4d5554
     * @note[short] MacOS (Intel): 0x583ed0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static int getLengthKey(int length, bool platformer);

    /**
     * @note[short] MacOS (ARM): 0x4d5590
     * @note[short] MacOS (Intel): 0x583f10
     * @note[short] Windows: 0x2644c0
     * @note[short] Android
     */
    static std::string lengthKeyToString(int key);

    /**
     * @note[short] MacOS (ARM): 0x4db398
     * @note[short] MacOS (Intel): 0x58a8e0
     * @note[short] Windows: 0x2690c0
     * @note[short] iOS: 0xd33d4
     * @note[short] Android
     */
    virtual void encodeWithCoder(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x4dc7a4
     * @note[short] MacOS (Intel): 0x58bf40
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xd4680
     * @note[short] Android
     */
    virtual bool canEncode();

    /**
     * @note[short] MacOS (ARM): 0x4d4d10
     * @note[short] MacOS (Intel): 0x583420
     * @note[short] Windows: 0x263ed0
     * @note[short] iOS: 0xce848
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] Android
     */
    TodoReturn accumulateDeathsInRadius(std::vector<int> const& p0, int p1, int p2, int p3, float& p4, int& p5);

    /**
     * @note[short] MacOS (ARM): 0x4d8340
     * @note[short] MacOS (Intel): 0x5870e0
     * @note[short] Android
     */
    void addPlaytime(int p0);

    /**
     * @note[short] MacOS (ARM): 0x4dca24
     * @note[short] MacOS (Intel): 0x58c1b0
     * @note[short] Windows: 0x26add0
     * @note[short] Android
     */
    bool areCoinsVerified();

    /**
     * @note[short] Android
     */
    TodoReturn cellForPosition(cocos2d::CCPoint const& p0, int& p1, int& p2);

    /**
     * @note[short] Android
     */
    TodoReturn clearDeathMarkerData();

    /**
     * @note[short] Android
     */
    TodoReturn clearDeathsNear(std::vector<int>& p0, int p1, int p2, int p3);

    /**
     * @note[short] Android
     */
    TodoReturn clearDeathTrackerData();

    /**
     * @note[short] Windows: 0x2640e0
     * @note[short] Android
     */
    void clearPlatformerSave();

    /**
     * @note[short] Windows: 0x267010
     * @note[short] Android
     */
    void copyLevelInfo(GJGameLevel* level);

    /**
     * @note[short] Android
     */
    TodoReturn countDeathsNear(std::vector<int> const& p0, int p1, int p2, int p3);

    /**
     * @note[short] Windows: 0x26a560
     * @note[short] Android
     */
    TodoReturn createFromFullSaveString(std::string const& p0);

    /**
     * @note[short] Windows: 0x267a10
     * @note[short] Android
     */
    void dataLoaded(DS_Dictionary* dict);

    /**
     * @note[short] Android
     */
    TodoReturn dtAppendOrder(std::string& p0, int p1, bool p2);

    /**
     * @note[short] Android
     */
    TodoReturn dtBumpBucket(std::string& p0, int p1);

    /**
     * @note[short] Android
     */
    TodoReturn dtBumpRun(std::string& p0, int p1, int p2);

    /**
     * @note[short] Android
     */
    TodoReturn dtExpandOrder(std::string const& p0, std::vector<int>& p1);

    /**
     * @note[short] Android
     */
    TodoReturn dtParseGlobalBlob(std::string const& p0, std::vector<int>& p1);

    /**
     * @note[short] MacOS (ARM): 0x4d7350
     * @note[short] MacOS (Intel): 0x585fb0
     * @note[short] Android
     */
    void dtSetCells(std::vector<int> const& p0);

    /**
     * @note[short] MacOS (ARM): 0x4d46e4
     * @note[short] MacOS (Intel): 0x582c00
     * @note[short] Windows: 0x263800
     * @note[short] iOS: 0xce280
     * @note[short] Android
     */
    GJGameLevel* duplicate();

    /**
     * @note[short] Android
     */
    TodoReturn ensureSessionLog();

    /**
     * @note[short] Android
     */
    std::string generateAutoSaveUID();

    /**
     * @note[short] MacOS (ARM): 0x4d5b90
     * @note[short] MacOS (Intel): 0x5844b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    std::string generateSettingsString();

    /**
     * @note[short] MacOS (ARM): 0x4d5978
     * @note[short] MacOS (Intel): 0x5842c0
     * @note[short] Windows: 0x264790
     * @note[short] Android
     */
    std::string getAudioFileName();

    /**
     * @note[short] MacOS (ARM): 0x4d5680
     * @note[short] MacOS (Intel): 0x583fe0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    int getAverageDifficulty();

    /**
     * @note[short] MacOS (ARM): 0x4b9d18
     * @note[short] MacOS (Intel): 0x566b60
     * @note[short] Windows: 0x264610
     * @note[short] Android
     */
    char const* getCoinKey(int coinNumber);

    /**
     * @note[short] Windows: 0x264630
     * @note[short] Android
     */
    TodoReturn getCoinKey(int p0, int p1);

    /**
     * @note[short] Android
     */
    TodoReturn getExportSaveString();

    /**
     * @note[short] Android
     */
    TodoReturn getFullSaveString();

    /**
     * @note[short] Windows: 0x2646a0
     * @note[short] Android
     */
    int getLastBuildPageForTab(int tab);

    /**
     * @note[short] MacOS (Intel): 0x588b90
     * @note[short] Windows: 0x267680
     * @note[short] Android
     */
    GJGameLevel* getListSnapshot();

    /**
     * @note[short] MacOS (Intel): 0x53f070
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    int getNormalPercent();

    /**
     * @note[short] Android
     */
    TodoReturn getSessionBest();

    /**
     * @note[short] MacOS (ARM): 0x4d5aa8
     * @note[short] MacOS (Intel): 0x5843e0
     * @note[short] Windows: 0x264890
     * @note[short] Android
     */
    std::string getSongName();

    /**
     * @note[short] MacOS (ARM): 0x4dca80
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    std::string getUnpackedLevelDescription();

    /**
     * @note[short] MacOS (ARM): 0x4a6700
     * @note[short] MacOS (Intel): 0x551010
     * @note[short] Windows: 0x26a650
     * @note[short] Android
     */
    void handleStatsConflict(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x49e964
     * @note[short] MacOS (Intel): 0x548810
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool isPlatformer();

    /**
     * @note[short] Android
     */
    TodoReturn levelHasDiamonds();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void levelWasAltered();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void levelWasSubmitted();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void parseSettingsString(std::string str);

    /**
     * @note[short] Android
     */
    TodoReturn recordCompletion();

    /**
     * @note[short] Android
     */
    TodoReturn recordDeath(int p0, int p1, bool p2);

    /**
     * @note[short] Windows: 0x265e30
     * @note[short] Android
     */
    void rollSession(int now, int gapSeconds);

    /**
     * @note[short] MacOS (ARM): 0x4d5d00
     * @note[short] MacOS (Intel): 0x584610
     * @note[short] Windows: 0x264b10
     * @note[short] Android
     */
    void saveNewScore(int value, int type, int ticks, int clicks, int coins, std::string inputs, bool save);

    /**
     * @note[short] MacOS (ARM): 0x4d5184
     * @note[short] MacOS (Intel): 0x583a40
     * @note[short] Windows: 0x2641b0
     * @note[short] iOS: 0xcec38
     * @note[short] Android
     */
    void savePercentage(int percent, bool isPracticeMode, int clicks, int attempts, bool isChkValid);

    /**
     * @note[short] MacOS (ARM): 0x4d634c
     * @note[short] MacOS (Intel): 0x584bf0
     * @note[short] Windows: 0x264f80
     * @note[short] Android
     */
    void scoreStringToVector(std::string& str, std::vector<int>& vec);

    /**
     * @note[short] MacOS (ARM): 0x4d6570
     * @note[short] MacOS (Intel): 0x584e60
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    std::string scoreVectorToString(std::vector<int>& vec, int type);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setAccountID(int id);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setAttempts(int attempts);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setAttemptTime(int time);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setClicks(int clicks);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setCoinsVerified(int coinsVerified);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setDailyID(int id);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setDemon(int demon);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setJumps(int jumps);

    /**
     * @note[short] MacOS (ARM): 0x4d5854
     * @note[short] MacOS (Intel): 0x5841a0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void setLastBuildPageForTab(int tab, int page);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setLevelID(int levelID);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setNewNormalPercent(int percent);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setNewNormalPercent2(int percent);

    /**
     * @note[short] MacOS (ARM): 0x497724
     * @note[short] MacOS (Intel): 0x5408e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void setNormalPercent(int percent);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setObjectCount(int count);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setOriginalLevel(int id);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setPassword(int password);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setStars(int stars);

    /**
     * @note[short] Windows: 0x266530
     * @note[short] Android
     */
    std::string shippedControls() const ;

    /**
     * @note[short] MacOS (ARM): 0x4976dc
     * @note[short] MacOS (Intel): 0x5408a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool shouldCheatReset();

    /**
     * @note[short] MacOS (ARM): 0x4d60ec
     * @note[short] MacOS (Intel): 0x584a20
     * @note[short] Windows: 0x264ce0
     * @note[short] Android
     */
    void storeNewLocalScore(int value, int type);

    /**
     * @note[short] Android
     */
    TodoReturn syncUneditedControls();

    /**
     * @note[short] MacOS (ARM): 0x4d5050
     * @note[short] MacOS (Intel): 0x5838f0
     * @note[short] Windows: 0x26ae30
     * @note[short] Android
     */
    void unverifyCoins();

    /**
     * @note[short] Android
     */
    void setUserID(int p0);
    cocos2d::CCDictionary* m_lastBuildSave;
    geode::SeedValueRSV m_levelID;
    std::string m_levelName;
    std::string m_levelDesc;
    std::string m_levelString;
    std::string m_creatorName;
    std::string m_recordString;
    std::string m_uploadDate;
    std::string m_updateDate;
    int m_uploadDateUnix;
    int m_updateDateUnix;
    std::string m_lockedEditorLayers;
    std::string m_savedCameraPositions;
    cocos2d::CCPoint m_previewLock;
    geode::SeedValueRSV m_userID;
    geode::SeedValueRSV m_accountID;
    GJDifficulty m_difficulty;
    int m_audioTrack;
    int m_songID;
    int m_levelRev;
    bool m_unlisted;
    bool m_friendsOnly;
    geode::SeedValueRSV m_objectCount;
    int m_levelIndex;
    int m_ratings;
    int m_ratingsSum;
    int m_downloads;
    bool m_isEditable;
    bool m_gauntletLevel;
    bool m_gauntletLevel2;
    int m_workingTime;
    int m_workingTime2;
    EditorBuildStats m_buildStats;
    bool m_lowDetailMode;
    bool m_lowDetailModeToggled;
    bool m_disableShakeToggled;
    bool m_selected;
    bool m_localOrSaved;
    bool m_disableShake;
    geode::SeedValueRS m_isVerified;
    bool m_isVerifiedRaw;
    bool m_isUploaded;
    bool m_hasBeenModified;
    int m_levelVersion;
    int m_gameVersion;
    geode::SeedValueRSV m_attempts;
    geode::SeedValueRSV m_jumps;
    geode::SeedValueRSV m_clicks;
    geode::SeedValueRSV m_attemptTime;
    int m_chk;
    bool m_isChkValid;
    bool m_isCompletionLegitimate;
    geode::SeedValueVSR m_normalPercent;
    geode::SeedValueRSV m_orbCompletion;
    geode::SeedValueRSV m_newNormalPercent2;
    int m_practicePercent;
    int m_likes;
    int m_dislikes;
    int m_levelLength;
    int m_featured;
    int m_isEpic;
    bool m_levelFavorited;
    int m_levelFolder;
    geode::SeedValueRSV m_dailyID;
    geode::SeedValueRSV m_demon;
    int m_demonDifficulty;
    geode::SeedValueRSV m_stars;
    bool m_autoLevel;
    int m_coins;
    geode::SeedValueRSV m_coinsVerified;
    geode::SeedValueRS m_password;
    geode::SeedValueRSV m_originalLevel;
    bool m_twoPlayerMode;
    int m_failedPasswordAttempts;
    geode::SeedValueRSV m_firstCoinVerified;
    geode::SeedValueRSV m_secondCoinVerified;
    geode::SeedValueRSV m_thirdCoinVerified;
    int m_starsRequested;
    bool m_showedSongWarning;
    int m_starRatings;
    int m_starRatingsSum;
    int m_maxStarRatings;
    int m_minStarRatings;
    int m_demonVotes;
    int m_rateStars;
    bool m_rateFeature;
    std::string m_rateUser;
    bool m_dontSave;
    bool m_levelNotDownloaded;
    int m_requiredCoins;
    bool m_isUnlocked;
    cocos2d::CCPoint m_lastCameraPos;
    float m_lastEditorZoom;
    int m_lastBuildTab;
    int m_lastBuildPage;
    int m_lastBuildGroupID;
    GJLevelType m_levelType;
    int m_M_ID;
    std::string m_tempName;
    std::string m_capacityString;
    bool m_highObjectsEnabled;
    bool m_unlimitedObjectsEnabled;
    std::string m_personalBests;
    int m_timestamp;
    int m_listPosition;
    std::string m_songIDs;
    std::string m_sfxIDs;
    int m_songSize;
    int m_replayDailyID;
    int m_bestTime;
    int m_ticksTime;
    int m_clicksTime;
    int m_coinsTime;
    std::string m_inputsTime;
    int m_bestPoints;
    int m_ticksPoints;
    int m_clicksPoints;
    int m_coinsPoints;
    std::string m_inputsPoints;
    int m_platformerSeed;
    std::string m_localBestTimes;
    std::string m_localBestPoints;
    bool m_savedTime;
    bool m_savedPoints;
    int m_cbsOverride;
    std::string m_autoBackupID;
    int m_lastAutoBackupUnix;
    std::string m_platformerSave;
    std::string m_platformerSaveReplay;
    int m_platformerSaveLevelVersion;
    int m_platformerSaveFormatVersion;
    bool m_enablePlatformerSave;
    int m_practiceAttempts;
    int m_deathTrackerFormatVersion;
    std::string m_deathsPerPercent;
    std::string m_startPosDeathCounts;
    std::string m_currentSessionAttempts;
    std::string m_startPosAttemptHistory;
    int m_firstPlayedUnix;
    int m_lastExitedUnix;
    int m_sessionPlayTime;
    int m_totalPlayTime;
    int m_completions;
    std::string m_sessionLog;
    std::string m_compressedSessionLog;
    bool m_sessionLogDirty;
    std::string m_deathMarkers;
    bool m_deathDataPendingUpload;
    int m_deathUploadRate;
    int m_unkK152a;
    int m_unkK152b;
    std::string m_unkK152c;
    std::string m_creatorLevelControls;
    int m_levelControlsVersion;
    std::string m_customLevelControls;
    int m_customLevelControlsVersion;
    bool m_editedCustomControls;
    int m_customControlsType;
};

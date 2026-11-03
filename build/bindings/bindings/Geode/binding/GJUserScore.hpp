#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>

class GJUserScore : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GJUserScore";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJUserScore, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x218550
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GJUserScore();

    /**
     * @note[short] Windows: 0x218bc0
     * @note[short] iOS: 0xd4fa4
     * @note[short] Android: Rebinded
     */
    virtual  ~GJUserScore();

    /**
     * @note[short] MacOS (ARM): 0x845940
     * @note[short] MacOS (Intel): 0x575270
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static GJUserScore* create();

    /**
     * @note[short] MacOS (ARM): 0x49b0a0
     * @note[short] MacOS (Intel): 0x5448c0
     * @note[short] Windows: 0x26c000
     * @note[short] Android
     */
    static GJUserScore* create(cocos2d::CCDictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x4dd4a0
     * @note[short] MacOS (Intel): 0x58cd30
     * @note[short] Windows: 0x26df60
     * @note[short] iOS: 0xd4fbc
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x4dd514
     * @note[short] MacOS (Intel): 0x58cdc0
     * @note[short] Windows: 0x26dfb0
     * @note[short] Android
     */
    bool isCurrentUser();

    /**
     * @note[short] MacOS (ARM): 0x4dd4e8
     * @note[short] MacOS (Intel): 0x58cd80
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void mergeWithScore(GJUserScore* score);
    std::string m_userName;
    std::string m_userUDID;
    int m_scoreType;
    int m_userID;
    int m_accountID;
    int m_stars;
    int m_moons;
    int m_diamonds;
    int m_demons;
    int m_playerRank;
    int m_creatorPoints;
    int m_secretCoins;
    int m_userCoins;
    int m_iconID;
    int m_color1;
    int m_color2;
    int m_color3;
    int m_special;
    IconType m_iconType;
    int m_messageState;
    int m_friendStatus;
    int m_commentHistoryStatus;
    int m_groupStatus;
    int m_property63;
    int m_friendTimestamp;
    std::string m_youtubeURL;
    std::string m_twitterURL;
    std::string m_twitchURL;
    std::string m_discordUsername;
    std::string m_instagramURL;
    std::string m_tiktokURL;
    std::string m_customString;
    int m_playerCube;
    int m_playerShip;
    int m_playerBall;
    int m_playerUfo;
    int m_playerWave;
    int m_playerRobot;
    int m_playerSpider;
    int m_playerSwing;
    int m_playerJetpack;
    int m_playerStreak;
    bool m_glowEnabled;
    int m_playerExplosion;
    int m_modBadge;
    int m_globalRank;
    int m_friendReqStatus;
    int m_newMsgCount;
    int m_friendReqCount;
    int m_newFriendCount;
    int m_property65;
    int m_property66;
    union {
        int m_followerCount{};
        int m_followers;
    };
    int m_followingCount;
    bool m_following;
    bool m_property70;
    bool m_property71;
    bool m_unk31b;
    bool m_newFriendRequest;
    bool m_toggled;
    std::string m_unkString;
    double m_lobbyJoinTime;
    std::string m_demonInfo;
    std::string m_starsInfo;
    std::string m_platformerInfo;
    int m_levelMode;
    LevelLeaderboardMode m_leaderboardMode;
    LeaderboardStat m_leaderboardStat;
};

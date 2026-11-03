#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>
#include <Geode/mapping/ccTypes.hpp>

class GJComment : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GJComment";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJComment, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GJComment();

    /**
     * @note[short] MacOS (ARM): 0x4de91c
     * @note[short] MacOS (Intel): 0x58e4c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xd6034
     * @note[short] Android: Rebinded
     */
     ~GJComment();

    /**
     * @note[short] MacOS (ARM): 0x4de9c0
     * @note[short] MacOS (Intel): 0x58e580
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static GJComment* create();

    /**
     * @note[short] MacOS (ARM): 0x4be0f4
     * @note[short] MacOS (Intel): 0x56b180
     * @note[short] Windows: 0x270a60
     * @note[short] Android
     */
    static GJComment* create(cocos2d::CCDictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x4dea88
     * @note[short] MacOS (Intel): 0x58e680
     * @note[short] Windows: 0x271920
     * @note[short] iOS: 0xd6114
     * @note[short] Android
     */
    virtual bool init();
    std::string m_commentString;
    std::string m_userName;
    int m_commentID;
    int m_userID;
    int m_likeCount;
    int m_levelID;
    bool m_isSpam;
    int m_accountID;
    std::string m_uploadDate;
    bool m_commentDeleted;
    int m_percentage;
    int m_modBadge;
    bool m_isFriend;
    cocos2d::ccColor3B m_color;
    bool m_hasLevelID;
    bool m_unkMultiplayerBool;
    bool m_canDelete;
    int m_commentType;
    bool m_isSelected;
    int m_unk1d4;
    GJUserScore* m_userScore;
};

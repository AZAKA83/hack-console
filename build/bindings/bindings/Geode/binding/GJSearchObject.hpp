#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>

class GJSearchObject : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GJSearchObject";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJSearchObject, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x218e00
     * @note[short] iOS: 0xd5310
     * @note[short] Android: Rebinded
     */
    virtual  ~GJSearchObject();

    /**
     * @note[short] MacOS (ARM): 0x4dde64
     * @note[short] MacOS (Intel): 0x58d7a0
     * @note[short] Windows: 0x26fc30
     * @note[short] iOS: 0xd5574
     * @note[short] Android
     */
    static GJSearchObject* create(SearchType searchType);

    /**
     * @note[short] MacOS (ARM): 0x4dded0
     * @note[short] MacOS (Intel): 0x58d810
     * @note[short] Windows: 0x26fd10
     * @note[short] iOS: 0xd5db8
     * @note[short] Android
     */
    static GJSearchObject* create(SearchType searchType, std::string searchQuery);

    /**
     * @note[short] MacOS (ARM): 0x4ddbbc
     * @note[short] MacOS (Intel): 0x58d470
     * @note[short] Windows: 0x26fe40
     * @note[short] iOS: 0xd5328
     * @note[short] Android
     */
    static GJSearchObject* create(SearchType searchType, std::string searchQuery, std::string difficulty, std::string length, int page, bool star, bool uncompleted, bool featured, int songID, bool original, bool twoPlayer, bool customSong, bool songFilter, bool noStar, bool coins, bool epic, bool legendary, bool mythic, bool onlyCompleted, int demonFilter, int folder, int searchMode);

    /**
     * @note[short] MacOS (ARM): 0x4a0c94
     * @note[short] MacOS (Intel): 0x54ad30
     * @note[short] Windows: 0x26f4f0
     * @note[short] Android
     */
    static GJSearchObject* createFromKey(char const* key);

    /**
     * @note[short] Windows: 0x270440
     * @note[short] Android
     */
    static char const* getSearchKey(SearchType searchType, std::string searchQuery, std::string difficulty, std::string length, int page, bool star, bool uncompleted, bool featured, int songID, bool original, bool twoPlayer, bool customSong, bool songFilter, bool noStar, bool coins, bool epic, bool legendary, bool mythic, bool onlyCompleted, int demonFilter, int folder, int searchMode);

    /**
     * @note[short] Windows: 0x270180
     * @note[short] Android
     */
    char const* getKey();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    char const* getNextPageKey();

    /**
     * @note[short] MacOS (ARM): 0x4de6c0
     * @note[short] MacOS (Intel): 0x58e180
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    GJSearchObject* getNextPageObject();

    /**
     * @note[short] MacOS (ARM): 0x4de6cc
     * @note[short] MacOS (Intel): 0x58e1a0
     * @note[short] Windows: 0x2702d0
     * @note[short] Android
     */
    GJSearchObject* getPageObject(int page);

    /**
     * @note[short] MacOS (ARM): 0x4de8c0
     * @note[short] MacOS (Intel): 0x58e460
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    GJSearchObject* getPrevPageObject();

    /**
     * @note[short] MacOS (ARM): 0x4ddfb8
     * @note[short] MacOS (Intel): 0x58d930
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool init(SearchType searchType, std::string searchQuery, std::string difficulty, std::string length, int page, bool star, bool uncompleted, bool featured, int songID, bool original, bool twoPlayer, bool customSong, bool songFilter, bool noStar, bool coins, bool epic, bool legendary, bool mythic, bool onlyCompleted, int demonFilter, int folder, int searchMode);

    /**
     * @note[short] MacOS (ARM): 0x4de8d4
     * @note[short] MacOS (Intel): 0x58e480
     * @note[short] Windows: 0x2709b0
     * @note[short] Android
     */
    bool isLevelSearchObject();
    SearchType m_searchType;
    std::string m_searchQuery;
    std::string m_difficulty;
    std::string m_length;
    int m_page;
    bool m_starFilter;
    bool m_noStarFilter;
    int m_total;
    bool m_uncompletedFilter;
    bool m_completedFilter;
    bool m_featuredFilter;
    bool m_originalFilter;
    bool m_twoPlayerFilter;
    bool m_coinsFilter;
    bool m_epicFilter;
    bool m_legendaryFilter;
    bool m_mythicFilter;
    GJDifficulty m_demonFilter;
    int m_folder;
    int m_songID;
    bool m_customSongFilter;
    bool m_songFilter;
    bool m_searchIsOverlay;
    int m_searchMode;
};

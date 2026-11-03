#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>
#include <Geode/mapping/vector.hpp>

class GJLevelList : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GJLevelList";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJLevelList, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GJLevelList();

    /**
     * @note[short] Windows: 0x2184c0
     * @note[short] iOS: 0xd62b0
     * @note[short] Android: Rebinded
     */
    virtual  ~GJLevelList();

    /**
     * @note[short] MacOS (ARM): 0x496444
     * @note[short] MacOS (Intel): 0x53f550
     * @note[short] Windows: 0x272470
     * @note[short] Android
     */
    static GJLevelList* create();

    /**
     * @note[short] MacOS (ARM): 0x499aa0
     * @note[short] MacOS (Intel): 0x543160
     * @note[short] Windows: 0x271b10
     * @note[short] Android
     */
    static GJLevelList* create(cocos2d::CCDictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x4e01f8
     * @note[short] MacOS (Intel): 0x58fd60
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static GJLevelList* createWithCoder(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x4e0794
     * @note[short] MacOS (Intel): 0x590350
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static std::string frameForListDifficulty(int diff, DifficultyIconType type);

    /**
     * @note[short] MacOS (ARM): 0x4e0554
     * @note[short] MacOS (Intel): 0x5900d0
     * @note[short] Windows: 0x273d70
     * @note[short] iOS: 0xd7358
     * @note[short] Android
     */
    virtual void encodeWithCoder(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x4e078c
     * @note[short] MacOS (Intel): 0x590340
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xd7590
     * @note[short] Android
     */
    virtual bool canEncode();

    /**
     * @note[short] MacOS (ARM): 0x4ded38
     * @note[short] MacOS (Intel): 0x58e940
     * @note[short] Windows: 0x272610
     * @note[short] iOS: 0xd62c8
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x4df48c
     * @note[short] MacOS (Intel): 0x58f180
     * @note[short] Windows: 0x272b50
     * @note[short] Android
     */
    void addLevelToList(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x4dfd10
     * @note[short] MacOS (Intel): 0x301220
     * @note[short] Windows: 0x273540
     * @note[short] Android
     */
    int completedLevels();

    /**
     * @note[short] MacOS (ARM): 0x4e0228
     * @note[short] MacOS (Intel): 0x58fd90
     * @note[short] Windows: 0x273a50
     * @note[short] Android
     */
    void dataLoaded(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x4df030
     * @note[short] MacOS (Intel): 0x58ec30
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void duplicateListLevels(GJLevelList* list);

    /**
     * @note[short] MacOS (ARM): 0x4df09c
     * @note[short] MacOS (Intel): 0x58eca0
     * @note[short] Windows: 0x272e00
     * @note[short] Android
     */
    cocos2d::CCArray* getListLevelsArray(cocos2d::CCArray* levels);

    /**
     * @note[short] MacOS (ARM): 0x4def74
     * @note[short] MacOS (Intel): 0x58eb90
     * @note[short] Windows: 0x2728a0
     * @note[short] Android
     */
    std::string getUnpackedDescription();

    /**
     * @note[short] MacOS (ARM): 0x4dedb0
     * @note[short] MacOS (Intel): 0x58e9c0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void handleStatsConflict(GJLevelList* list);

    /**
     * @note[short] MacOS (ARM): 0x4dedc8
     * @note[short] MacOS (Intel): 0x58e9e0
     * @note[short] Windows: 0x272690
     * @note[short] Android
     */
    bool hasMatchingLevels(GJLevelList* list);

    /**
     * @note[short] MacOS (ARM): 0x4df9b0
     * @note[short] MacOS (Intel): 0x58f690
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    int orderForLevel(int id);

    /**
     * @note[short] MacOS (ARM): 0x4b1598
     * @note[short] MacOS (Intel): 0x55d230
     * @note[short] Windows: 0x5225c0
     * @note[short] Android
     */
    void parseListLevels(std::string str);

    /**
     * @note[short] MacOS (ARM): 0x4df868
     * @note[short] MacOS (Intel): 0x58f5c0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void removeLevelFromList(int id);

    /**
     * @note[short] MacOS (ARM): 0x4df9e8
     * @note[short] MacOS (Intel): 0x58f6d0
     * @note[short] Windows: 0x272d00
     * @note[short] Android
     */
    void reorderLevel(int levelID, int newPosition);

    /**
     * @note[short] MacOS (ARM): 0x4dfb38
     * @note[short] MacOS (Intel): 0x58f790
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void reorderLevelStep(int id, bool up);

    /**
     * @note[short] MacOS (ARM): 0x4dfd74
     * @note[short] MacOS (Intel): 0x58f900
     * @note[short] Windows: 0x2735e0
     * @note[short] Android
     */
    void showListInfo();

    /**
     * @note[short] MacOS (ARM): 0x4dfd00
     * @note[short] MacOS (Intel): 0x58f890
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    int totalLevels();

    /**
     * @note[short] MacOS (ARM): 0x4a7370
     * @note[short] MacOS (Intel): 0x58f350
     * @note[short] Windows: 0x273430
     * @note[short] Android
     */
    void updateLevelsString();
    std::vector<int> m_levels;
    int m_listID;
    int m_listVersion;
    int m_downloads;
    int m_likes;
    int m_difficulty;
    int m_accountID;
    int m_folder;
    int m_listRevision;
    int m_listOrder;
    int m_original;
    int m_diamonds;
    int m_levelsToClaim;
    bool m_isEditable;
    bool m_unlisted;
    bool m_friendsOnly;
    bool m_uploaded;
    bool m_favorite;
    bool m_featured;
    bool m_onlineLevelsLoaded;
    bool m_modified;
    int m_unk;
    std::string m_creatorName;
    std::string m_listName;
    std::string m_unkString;
    std::string m_levelsString;
    std::string m_listDesc;
    int m_uploadDate;
    int m_updateDate;
    cocos2d::CCDictionary* m_levelsDict;
    GJLevelType m_listType;
    int m_M_ID;
};

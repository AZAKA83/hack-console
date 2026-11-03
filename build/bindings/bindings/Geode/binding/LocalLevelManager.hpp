#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/GManager.hpp>
#include <Geode/binding/PlatformFileDelegate.hpp>
#include <Geode/mapping/mutex.hpp>
#include <Geode/mapping/unordered_map.hpp>
#include <Geode/mapping/vector.hpp>

class LocalLevelManager : public GManager, public PlatformFileDelegate {
public:
    static constexpr auto CLASS_NAME = "LocalLevelManager";
    GEODE_CUSTOM_CONSTRUCTOR_GD(LocalLevelManager, GManager)

    /**
     * @note[short] Windows: 0x46ab30
     * @note[short] iOS: 0x25e2f0
     * @note[short] Android: Rebinded
     */
    virtual  ~LocalLevelManager();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static LocalLevelManager* get();

    /**
     * @note[short] MacOS (ARM): 0x5e1588
     * @note[short] MacOS (Intel): 0x6c9560
     * @note[short] Windows: 0x46ac00
     * @note[short] iOS: 0x25e134
     * @note[short] Android
     */
    static LocalLevelManager* sharedState();

    /**
     * @note[short] MacOS (ARM): 0x5e1874
     * @note[short] MacOS (Intel): 0x6c98a0
     * @note[short] Windows: 0x46ad90
     * @note[short] iOS: 0x25e308
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x5e2af4
     * @note[short] MacOS (Intel): 0x6cadb0
     * @note[short] Windows: 0x46b790
     * @note[short] iOS: 0x25f00c
     * @note[short] Android
     */
    virtual void encodeDataTo(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x5e2b64
     * @note[short] MacOS (Intel): 0x6cae30
     * @note[short] Windows: 0x46b840
     * @note[short] iOS: 0x25f07c
     * @note[short] Android
     */
    virtual void didEncodeForSave();

    /**
     * @note[short] MacOS (ARM): 0x5e54f8
     * @note[short] MacOS (Intel): 0x6cde40
     * @note[short] Windows: 0x46df80
     * @note[short] iOS: 0x260870
     * @note[short] Android
     */
    virtual void saveFinished(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x5e2dc8
     * @note[short] MacOS (Intel): 0x6cb0c0
     * @note[short] Windows: 0x46bb90
     * @note[short] iOS: 0x25f250
     * @note[short] Android
     */
    virtual void dataLoaded(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x5e2a78
     * @note[short] MacOS (Intel): 0x6cad20
     * @note[short] Windows: 0x46b700
     * @note[short] iOS: 0x25ef44
     * @note[short] Android
     */
    virtual void firstLoad();

    /**
     * @note[short] MacOS (ARM): 0x5e66dc
     * @note[short] MacOS (Intel): 0x6cf2c0
     * @note[short] Windows: 0x46f110
     * @note[short] iOS: 0x261898
     * @note[short] Android
     */
    virtual void filesPicked(std::vector<std::string> const& p0);

    /**
     * @note[short] MacOS (ARM): 0x5e6958
     * @note[short] MacOS (Intel): 0x6cf520
     * @note[short] Windows: 0x46f680
     * @note[short] iOS: 0x261a20
     * @note[short] Android
     */
    virtual void fileShareFinished(bool p0);

    /**
     * @note[short] Android
     */
    TodoReturn exportLevelsToFile(cocos2d::CCArray* p0);

    /**
     * @note[short] MacOS (ARM): 0x5e1eec
     * @note[short] MacOS (Intel): 0x6ca070
     * @note[short] Android
     */
    cocos2d::CCDictionary* getAllLevelsInDict();

    /**
     * @note[short] MacOS (ARM): 0x5e20d8
     * @note[short] MacOS (Intel): 0x6ca2a0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    cocos2d::CCArray* getAllLevelsWithName(std::string name);

    /**
     * @note[short] MacOS (ARM): 0x5e287c
     * @note[short] MacOS (Intel): 0x6cab30
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    cocos2d::CCArray* getCreatedLevels(int folder);

    /**
     * @note[short] MacOS (ARM): 0x5e29e8
     * @note[short] MacOS (Intel): 0x6cac90
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    cocos2d::CCArray* getCreatedLists(int folder);

    /**
     * @note[short] MacOS (ARM): 0x5e1d9c
     * @note[short] MacOS (Intel): 0x573a30
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    cocos2d::CCDictionary* getLevelsInNameGroups();

    /**
     * @note[short] MacOS (ARM): 0x5e1c18
     * @note[short] MacOS (Intel): 0x6c9cf0
     * @note[short] Windows: 0x46b070
     * @note[short] Android
     */
    std::string getMainLevelString(int id);

    /**
     * @note[short] MacOS (ARM): 0x5e62a4
     * @note[short] Windows: 0x46ecf0
     * @note[short] Android
     */
    int importLevelsFromFile(int p0);

    /**
     * @note[short] MacOS (ARM): 0x5e6390
     * @note[short] Android
     */
    int importLevelsFromPaths(std::vector<std::string> const& p0, int p1);

    /**
     * @note[short] MacOS (Intel): 0x6caa90
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void markLevelsAsUnmodified();

    /**
     * @note[short] Android
     */
    TodoReturn moveLevelToBottom(GJGameLevel* p0);

    /**
     * @note[short] MacOS (ARM): 0x5e25ec
     * @note[short] MacOS (Intel): 0x6ca870
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void moveLevelToTop(GJGameLevel* level);

    /**
     * @note[short] Windows: 0x46f700
     * @note[short] Android
     */
    TodoReturn postFileResults(float p0);

    /**
     * @note[short] Android
     */
    TodoReturn queueFileResults();

    /**
     * @note[short] MacOS (ARM): 0x5e282c
     * @note[short] MacOS (Intel): 0x6caae0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void reorderLevels();

    /**
     * @note[short] MacOS (ARM): 0x5e2998
     * @note[short] MacOS (Intel): 0x6cac40
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void reorderLists();

    /**
     * @note[short] MacOS (ARM): 0x5e18b4
     * @note[short] MacOS (Intel): 0x6c98e0
     * @note[short] Windows: 0x46add0
     * @note[short] Android
     */
    void tryLoadMainLevelString(int id);

    /**
     * @note[short] iOS: 0x25fb84
     * @note[short] Android
     */
    TodoReturn tryRecoverAutoSaves();

    /**
     * @note[short] MacOS (ARM): 0x5e290c
     * @note[short] MacOS (Intel): 0x6cabc0
     * @note[short] Windows: 0x46b690
     * @note[short] Android
     */
    int updateLevelOrder();

    /**
     * @note[short] MacOS (ARM): 0x5e2200
     * @note[short] MacOS (Intel): 0x6ca400
     * @note[short] Windows: 0x46b2f0
     * @note[short] Android
     */
    void updateLevelRevision();

    /**
     * @note[short] MacOS (ARM): 0x5e290c
     * @note[short] MacOS (Intel): 0x6cabc0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    int updateListOrder();

    /**
     * @note[short] Android
     */
    void setLocalLists(cocos2d::CCArray* p0);

    /**
     * @note[short] Android
     */
    void setLocalLevels(cocos2d::CCArray* p0);
    cocos2d::CCArray* m_localLevels;
    cocos2d::CCArray* m_localLists;
    std::unordered_map<int, std::string> m_mainLevels;
    std::vector<std::string> m_importedLevelPaths;
    std::vector<std::pair<std::string, int>> m_platformerJournalKeys;
    std::mutex m_fileMutex;
    std::string m_saveFileName;
    std::string m_savePath;
    std::string m_importPath;
    bool m_unkFileBool1;
    bool m_unkFileBool2;
    int m_unkFileInt1;
    int m_unkFileInt2;
    int m_unkFileInt3;
    int m_unkFileInt4;
};

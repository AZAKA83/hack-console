#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>
#include <Geode/mapping/map.hpp>
#include <Geode/mapping/set.hpp>
#include <Geode/mapping/unordered_map.hpp>
#include <Geode/mapping/vector.hpp>

class LevelSettingsObject : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "LevelSettingsObject";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(LevelSettingsObject, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x3ecd40
     * @note[short] iOS: 0x40e2f8
     * @note[short] Android: Rebinded
     */
    virtual  ~LevelSettingsObject();

    /**
     * @note[short] MacOS (ARM): 0x9ae6c
     * @note[short] MacOS (Intel): 0xac3c0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static LevelSettingsObject* create();

    /**
     * @note[short] MacOS (Intel): 0x906a30
     * @note[short] Windows: 0x410b20
     * @note[short] Android
     */
    static LevelSettingsObject* objectFromDict(cocos2d::CCDictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x9ce9c
     * @note[short] MacOS (Intel): 0xaea60
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static LevelSettingsObject* objectFromString(std::string const& str);

    /**
     * @note[short] MacOS (ARM): 0xc0134
     * @note[short] MacOS (Intel): 0xda070
     * @note[short] Windows: 0x40ea10
     * @note[short] iOS: 0x40e310
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] Android
     */
    int findIDByName(std::string const& name, int type) const ;

    /**
     * @note[short] Android
     */
    TodoReturn getCustomSFXPathRaw(int p0, int p1);

    /**
     * @note[short] Android
     */
    std::string getIDName(int id, int type) const ;

    /**
     * @note[short] Windows: 0x40dba0
     * @note[short] Android
     */
    std::unordered_map<int, std::string> const& getIDNames(int type) const ;

    /**
     * @note[short] Android
     */
    std::vector<int> const& getIDUseOrder(int type) const ;

    /**
     * @note[short] MacOS (Intel): 0xb3430
     * @note[short] Windows: 0x40ed20
     * @note[short] Android
     */
    std::string getSaveString();

    /**
     * @note[short] Android
     */
    void removeFromIDUseOrder(int id, int type);

    /**
     * @note[short] Android
     */
    static std::string sanitizeIDName(std::string const& name);

    /**
     * @note[short] Android
     */
    void setIDName(int type, std::string const& name, int id);

    /**
     * @note[short] MacOS (ARM): 0xc387c
     * @note[short] MacOS (Intel): 0xddeb0
     * @note[short] Windows: 0x412c60
     * @note[short] Android
     */
    void setupColorsFromLegacyMode(cocos2d::CCDictionary* dict);

    /**
     * @note[short] MacOS (Intel): 0xda200
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool shouldUseYSection();

    /**
     * @note[short] Android
     */
    void touchIDUsage(int id, int type);
    GJEffectManager* m_effectManager;
    int m_startMode;
    Speed m_startSpeed;
    bool m_startMini;
    bool m_startDual;
    bool m_mirrorMode;
    bool m_rotateGameplay;
    bool m_twoPlayerMode;
    bool m_platformerMode;
    float m_songOffset;
    bool m_fadeIn;
    bool m_fadeOut;
    bool m_dontReset;
    int m_backgroundIndex;
    int m_groundIndex;
    int m_fontIndex;
    int m_middleGroundIndex;
    bool m_startsWithStartPos;
    bool m_isFlipped;
    bool m_reverseGameplay;
    int m_targetOrder;
    int m_targetChannel;
    GJGameLevel* m_level;
    std::string m_guidelineString;
    bool m_guidelinesUpdated;
    int m_colorPage;
    int m_groundLineIndex;
    bool m_propertykA23;
    bool m_propertykA24;
    bool m_noTimePenalty;
    int m_propertykA44;
    int m_nextFreeID;
    bool m_resetCamera;
    int m_spawnGroup;
    bool m_allowMultiRotation;
    bool m_enablePlayerSqueeze;
    bool m_fixGravityBug;
    bool m_fixNegativeScale;
    bool m_fixRobotJump;
    bool m_dynamicLevelHeight;
    bool m_sortGroups;
    bool m_fixRadiusCollision;
    bool m_enable22Changes;
    bool m_showEditorTime;
    bool m_showEditorTimeCopies;
    bool m_allowStaticRotate;
    bool m_reverseSync;
    bool m_decreaseBoostSlide;
    bool m_enableImpulseFix;
    bool m_freeMode;
    bool m_disableStartPos;
    bool m_online;
    int m_player2SpawnGroup;
    int m_spawnGroupID;
    float m_yVelocity;
    std::string m_startPosName;
    std::unordered_map<int, std::unordered_map<int, std::string>> m_namedGroups;
    std::unordered_map<int, std::vector<int>> m_namedGroupsOrder;
    std::map<std::pair<int, int>, std::string> m_customSFXNames;
    std::string m_sharedSFXData;
    int m_sharedSFXPlayerID;
    std::set<int> m_sharedSFXFolderIDs;
};

#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>
#include <Geode/mapping/ccTypes.hpp>

class GJMapPack : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GJMapPack";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJMapPack, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GJMapPack();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0xd4a4c
     * @note[short] Android: Rebinded
     */
     ~GJMapPack();

    /**
     * @note[short] MacOS (ARM): 0x4dcd10
     * @note[short] MacOS (Intel): 0x58c470
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static GJMapPack* create();

    /**
     * @note[short] MacOS (ARM): 0x49a4f4
     * @note[short] MacOS (Intel): 0x543bd0
     * @note[short] Windows: 0x26af70
     * @note[short] Android
     */
    static GJMapPack* create(cocos2d::CCDictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x4dd12c
     * @note[short] MacOS (Intel): 0x58c8e0
     * @note[short] Windows: 0x26bb90
     * @note[short] iOS: 0xd4cf0
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x4dd18c
     * @note[short] MacOS (Intel): 0x58c960
     * @note[short] Windows: 0x26bed0
     * @note[short] Android
     */
    int completedMaps();

    /**
     * @note[short] MacOS (ARM): 0x4dd254
     * @note[short] MacOS (Intel): 0x58ca10
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool hasCompletedMapPack();

    /**
     * @note[short] MacOS (ARM): 0x4dcebc
     * @note[short] MacOS (Intel): 0x58c640
     * @note[short] Windows: 0x26bbf0
     * @note[short] Android
     */
    void parsePackColors(std::string textColorStr, std::string barColorStr);

    /**
     * @note[short] MacOS (ARM): 0x4dcdb4
     * @note[short] MacOS (Intel): 0x58c530
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void parsePackLevels(std::string levelsStr);

    /**
     * @note[short] MacOS (ARM): 0x4dd17c
     * @note[short] MacOS (Intel): 0x58c940
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    int totalMaps();
    cocos2d::CCArray* m_levels;
    int m_packID;
    GJDifficulty m_difficulty;
    int m_stars;
    int m_coins;
    std::string m_packName;
    std::string m_levelStrings;
    cocos2d::ccColor3B m_textColour;
    cocos2d::ccColor3B m_barColour;
    int m_MId;
    bool m_isGauntlet;
};

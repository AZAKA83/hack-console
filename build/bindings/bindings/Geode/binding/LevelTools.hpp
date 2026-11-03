#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/unordered_set.hpp>

class LevelTools {
public:
    static constexpr auto CLASS_NAME = "LevelTools";

    /**
     * @note[short] MacOS (ARM): 0x459fd4
     * @note[short] MacOS (Intel): 0x4fd830
     * @note[short] Windows: 0x463f70
     * @note[short] Android
     */
    static int artistForAudio(int id);

    /**
     * @note[short] MacOS (ARM): 0x45cc70
     * @note[short] MacOS (Intel): 0x500ba0
     * @note[short] Windows: 0x4680a0
     * @note[short] Android
     */
    static std::string base64DecodeString(std::string str);

    /**
     * @note[short] MacOS (ARM): 0x45cc3c
     * @note[short] MacOS (Intel): 0x500b50
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static std::string base64EncodeString(std::string str);

    /**
     * @note[short] MacOS (ARM): 0x45cca4
     * @note[short] MacOS (Intel): 0x500bf0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static cocos2d::CCDictionary* createStarPackDict();

    /**
     * @note[short] MacOS (ARM): 0x45af7c
     * @note[short] MacOS (Intel): 0x4feb80
     * @note[short] Windows: 0x465f90
     * @note[short] Android
     */
    static std::string fbURLForArtist(int id);

    /**
     * @note[short] MacOS (ARM): 0x45b2d4
     * @note[short] MacOS (Intel): 0x4fef00
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static int getAudioBPM(int id);

    /**
     * @note[short] MacOS (ARM): 0x459948
     * @note[short] MacOS (Intel): 0x4fd2c0
     * @note[short] Windows: 0x4633d0
     * @note[short] Android
     */
    static std::string getAudioFileName(int id);

    /**
     * @note[short] MacOS (ARM): 0x45b2f4
     * @note[short] MacOS (Intel): 0x4fef20
     * @note[short] Windows: 0x466470
     * @note[short] Android
     */
    static std::string getAudioString(int id);

    /**
     * @note[short] MacOS (ARM): 0x4591f8
     * @note[short] MacOS (Intel): 0x4fcd00
     * @note[short] Windows: 0x462870
     * @note[short] Android
     */
    static std::string getAudioTitle(int id);

    /**
     * @note[short] MacOS (ARM): 0x448030
     * @note[short] MacOS (Intel): 0x500520
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static bool getLastGameplayReversed();

    /**
     * @note[short] MacOS (Intel): 0x500530
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static bool getLastGameplayRotated();

    /**
     * @note[short] MacOS (ARM): 0x45c814
     * @note[short] MacOS (Intel): 0x500510
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static float getLastTimewarp();

    /**
     * @note[short] MacOS (ARM): 0x457480
     * @note[short] MacOS (Intel): 0x4fa7a0
     * @note[short] Windows: 0x45ffe0
     * @note[short] Android
     */
    static GJGameLevel* getLevel(int id, bool noString);

    /**
     * @note[short] MacOS (ARM): 0x4570cc
     * @note[short] MacOS (Intel): 0x4fa460
     * @note[short] Windows: 0x9999999
     * @note[short] Android
     */
    static std::unordered_set<int> getLevelList();

    /**
     * @note[short] MacOS (ARM): 0x45c838
     * @note[short] MacOS (Intel): 0x500540
     * @note[short] Windows: 0x467d40
     * @note[short] Android
     */
    static SongInfoObject* getSongObject(int id);

    /**
     * @note[short] MacOS (ARM): 0x45d114
     * @note[short] MacOS (Intel): 0x501040
     * @note[short] Windows: 0x468130
     * @note[short] Android
     */
    static void moveTriggerObjectsToArray(cocos2d::CCArray* objects, cocos2d::CCDictionary* objectsDict, int index);

    /**
     * @note[short] MacOS (ARM): 0x459ff8
     * @note[short] MacOS (Intel): 0x4fd850
     * @note[short] Windows: 0x464040
     * @note[short] Android
     */
    static std::string nameForArtist(int id);

    /**
     * @note[short] MacOS (ARM): 0x45a8a4
     * @note[short] MacOS (Intel): 0x4fe4d0
     * @note[short] Windows: 0x4655c0
     * @note[short] Android
     */
    static std::string ngURLForArtist(int id);

    /**
     * @note[short] MacOS (ARM): 0x45b8f0
     * @note[short] MacOS (Intel): 0x4ff540
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static float offsetBPMForTrack(int id);

    /**
     * @note[short] MacOS (ARM): 0x45c31c
     * @note[short] MacOS (Intel): 0x4fff10
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static cocos2d::CCPoint posForTime(float time, cocos2d::CCArray* objects, int speed, bool platformer, int& rotateChannel);

    /**
     * @note[short] MacOS (ARM): 0x45c32c
     * @note[short] MacOS (Intel): 0x4fff40
     * @note[short] Windows: 0x4676d0
     * @note[short] Android
     */
    static cocos2d::CCPoint posForTimeInternal(float time, cocos2d::CCArray* objects, int speed, bool platformer, bool ignoreMinorAxis, bool ignoreWarp, int& rotateChannel, int unused);

    /**
     * @note[short] MacOS (ARM): 0x45d1cc
     * @note[short] MacOS (Intel): 0x4be490
     * @note[short] Windows: 0x468200
     * @note[short] Android
     */
    static void sortChannelOrderObjects(cocos2d::CCArray* objects, cocos2d::CCDictionary* objectsDict, bool moveObjects);

    /**
     * @note[short] MacOS (ARM): 0x45d494
     * @note[short] MacOS (Intel): 0x5013d0
     * @note[short] Windows: 0x468480
     * @note[short] Android
     */
    static void sortSpeedObjects(cocos2d::CCArray* objects, GJBaseGameLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x45b93c
     * @note[short] MacOS (Intel): 0x4ff590
     * @note[short] Windows: 0x466cc0
     * @note[short] Android
     */
    static float timeForPos(cocos2d::CCPoint position, cocos2d::CCArray* objects, int speed, int order, int channel, bool songTriggers, bool platformer, bool ignoreWarp, bool ignoreRotate, int id);

    /**
     * @note[short] MacOS (ARM): 0x4570c8
     * @note[short] MacOS (Intel): 0x4fa450
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static void toggleDebugLogging(bool enabled);

    /**
     * @note[short] MacOS (ARM): 0x45a244
     * @note[short] MacOS (Intel): 0x4fda10
     * @note[short] Windows: 0x464340
     * @note[short] Android
     */
    static std::string urlForAudio(int id);

    /**
     * @note[short] MacOS (ARM): 0x45b910
     * @note[short] MacOS (Intel): 0x4ff560
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static float valueForSpeedMod(int speed);

    /**
     * @note[short] MacOS (ARM): 0x45ca8c
     * @note[short] MacOS (Intel): 0x500a00
     * @note[short] Windows: 0x467e80
     * @note[short] Android
     */
    static bool verifyLevelIntegrity(std::string str, int id);

    /**
     * @note[short] MacOS (ARM): 0x45abe8
     * @note[short] MacOS (Intel): 0x4fe7d0
     * @note[short] Windows: 0x465a40
     * @note[short] Android
     */
    static std::string ytURLForArtist(int id);
};

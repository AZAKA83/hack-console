#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/UIButtonConfig.hpp>
#include <Geode/binding/GManager.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/SeedValue.hpp>
#include <Geode/mapping/ccTypes.hpp>
#include <Geode/mapping/map.hpp>
#include <Geode/mapping/vector.hpp>

class GameManager : public GManager {
public:
    static constexpr auto CLASS_NAME = "GameManager";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GameManager, GManager)

    /**
     * @note[short] Windows: 0x2880c0
     * @note[short] iOS: 0x3bbca8
     * @note[short] Android: Rebinded
     */
    virtual  ~GameManager();

    /**
     * @note[short] Windows: 0x275a10
     * @note[short] Android: Rebinded
     */
     GameManager();

    /**
Gets the active GameManager

 @returns The current instance pointer of the GameManag     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static GameManager* get();

    /**
     * @note[short] MacOS (ARM): 0x2eeb4c
     * @note[short] MacOS (Intel): 0x35fe10
     * @note[short] Windows: 0x2762c0
     * @note[short] iOS: 0x3aea00
     * @note[short] Android
     */
    static GameManager* sharedState();

    /**
Updates the GameManager for the current frame.

 @param dt Delta time (Time elapsed between the last frame and the current on     * @note[short] MacOS (ARM): 0x3027a8
     * @note[short] MacOS (Intel): 0x376520
     * @note[short] Windows: 0x2869e0
     * @note[short] iOS: 0x3bafd8
     * @note[short] Android
     */
    virtual void update(float dt);

    /**
Initializes the GameManager.

 @returns A true or false value for whether initialization was successful or no     * @note[short] MacOS (ARM): 0x2eebb8
     * @note[short] MacOS (Intel): 0x35fe70
     * @note[short] Windows: 0x276310
     * @note[short] iOS: 0x3aea60
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x301638
     * @note[short] MacOS (Intel): 0x375300
     * @note[short] Windows: 0x285900
     * @note[short] iOS: 0x3ba3ec
     * @note[short] Android
     */
    virtual void encodeDataTo(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x302568
     * @note[short] MacOS (Intel): 0x3762f0
     * @note[short] Windows: 0x2868a0
     * @note[short] iOS: 0x3baecc
     * @note[short] Android
     */
    virtual void didEncodeForSave();

    /**
     * @note[short] MacOS (ARM): 0x30266c
     * @note[short] MacOS (Intel): 0x3763f0
     * @note[short] Windows: 0x286940
     * @note[short] iOS: 0x3baf30
     * @note[short] Android
     */
    virtual void saveFinished(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x2ff2e4
     * @note[short] MacOS (Intel): 0x372a60
     * @note[short] Windows: 0x2826b0
     * @note[short] iOS: 0x3b869c
     * @note[short] Android
     */
    virtual void dataLoaded(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x300c5c
     * @note[short] MacOS (Intel): 0x374800
     * @note[short] Windows: 0x284d80
     * @note[short] iOS: 0x3b9e88
     * @note[short] Android
     */
    virtual void firstLoad();

    /**
     * @note[short] Android
     */
    TodoReturn accountPostsRestricted();

    /**
When the client's account status is changed (e.g. logged in or logged out), this will be calle     * @note[short] MacOS (ARM): 0x2fb8ac
     * @note[short] MacOS (Intel): 0x36e470
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void accountStatusChanged();

    /**
Gets the ID for one of the client's current icons.

 @param type The type of icon to get the ID for

 @returns Icon      * @note[short] MacOS (ARM): 0x2f75fc
     * @note[short] MacOS (Intel): 0x369f60
     * @note[short] Windows: 0x27cea0
     * @note[short] Android
     */
    int activeIconForType(IconType type);

    /**
     * @note[short] MacOS (ARM): 0x1f965c
     * @note[short] MacOS (Intel): 0x2504a0
     * @note[short] Windows: 0x2ac7b0
     * @note[short] Android
     */
    void addCustomAnimationFrame(int objectID, int frameIndex, std::string mainFrame, std::string detailFrame);

    /**
     * @note[short] MacOS (ARM): 0x1f9774
     * @note[short] MacOS (Intel): 0x2505d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void addDuplicateLastFrame(int objectID);

    /**
     * @note[short] MacOS (ARM): 0x1f93ec
     * @note[short] MacOS (Intel): 0x250220
     * @note[short] Windows: 0x2ac640
     * @note[short] Android
     */
    void addGameAnimation(int objectID, int frames, float frameTime, std::string mainAnimFrame, std::string detailAnimFrame, int defaultFrame);

    /**
     * @note[short] MacOS (ARM): 0x2f7fa4
     * @note[short] MacOS (Intel): 0x36aca0
     * @note[short] Android
     */
    void addIconDelegate(cocos2d::CCObject* delegate, int key);

    /**
     * @note[short] MacOS (ARM): 0x2fb128
     * @note[short] MacOS (Intel): 0x36dcc0
     * @note[short] Windows: 0x27ef00
     * @note[short] Android
     */
    void addNewCustomObject(std::string str);

    /**
     * @note[short] Windows: 0x281b50
     * @note[short] Android
     */
    void addRecentEmote(char const* p0);

    /**
     * @note[short] MacOS (ARM): 0x2fd014
     * @note[short] MacOS (Intel): 0x370180
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void addToGJLog(cocos2d::CCString* str);

    /**
     * @note[short] MacOS (ARM): 0x3027f4
     * @note[short] MacOS (Intel): 0x376570
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void applicationDidEnterBackground();

    /**
     * @note[short] MacOS (ARM): 0x3027f8
     * @note[short] MacOS (Intel): 0x376580
     * @note[short] Windows: 0x286b50
     * @note[short] Android
     */
    void applicationWillEnterForeground();

    /**
     * @note[short] MacOS (ARM): 0x2eec88
     * @note[short] MacOS (Intel): 0x35ff60
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void calculateBaseKeyForIcons();

    /**
     * @note[short] MacOS (ARM): 0x2f6c80
     * @note[short] MacOS (Intel): 0x369670
     * @note[short] Android
     */
    bool canShowRewardedVideo();

    /**
     * @note[short] MacOS (ARM): 0x2f1d50
     * @note[short] MacOS (Intel): 0x3632f0
     * @note[short] Windows: 0x279180
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void checkSteamAchievementUnlock();

    /**
     * @note[short] MacOS (ARM): 0x2f57a4
     * @note[short] MacOS (Intel): 0x368240
     * @note[short] Windows: 0x27f960
     * @note[short] Android
     */
    void checkUsedIcons();

    /**
     * @note[short] MacOS (ARM): 0x2f6524
     * @note[short] MacOS (Intel): 0x368ef0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void claimItemsResponse(std::string str);

    /**
     * @note[short] MacOS (ARM): 0x2fd01c
     * @note[short] MacOS (Intel): 0x3701a0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void clearGJLog();

    /**
     * @note[short] MacOS (ARM): 0x2f6528
     * @note[short] MacOS (Intel): 0x368f00
     * @note[short] Windows: 0x27c5b0
     * @note[short] Android
     */
    cocos2d::ccColor3B colorForIdx(int index);

    /**
     * @note[short] MacOS (ARM): 0x2f69f4
     * @note[short] MacOS (Intel): 0x3693c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    int colorForPos(int pos);

    /**
     * @note[short] MacOS (ARM): 0x2f00a0
     * @note[short] MacOS (Intel): 0x3616b0
     * @note[short] Windows: 0x277680
     * @note[short] Android
     */
    std::string colorKey(int id, UnlockType type);

    /**
     * @note[short] Android
     */
    bool commentsRestricted();

    /**
     * @note[short] MacOS (ARM): 0x2f0f5c
     * @note[short] MacOS (Intel): 0x362470
     * @note[short] Windows: 0x278140
     * @note[short] Android
     */
    void completedAchievement(std::string key);

    /**
     * @note[short] MacOS (ARM): 0x2f770c
     * @note[short] MacOS (Intel): 0x36a1d0
     * @note[short] Windows: 0x27d010
     * @note[short] Android
     */
    int countForType(IconType type);

    /**
     * @note[short] MacOS (ARM): 0x1f12f4
     * @note[short] MacOS (Intel): 0x247950
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    int defaultFrameForAnimation(int objectID);

    /**
     * @note[short] MacOS (Intel): 0x376490
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void didExitPlayscene();

    /**
Performs a "Quick Save" and saves the progress of the clien     * @note[short] MacOS (ARM): 0x3026c8
     * @note[short] MacOS (Intel): 0x376460
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void doQuickSave();

    /**
     * @note[short] MacOS (ARM): 0x2fda80
     * @note[short] MacOS (Intel): 0x370f00
     * @note[short] Windows: 0x2820b0
     * @note[short] Android
     */
    std::string dpadConfigToString(UIButtonConfig& config);

    /**
     * @note[short] MacOS (ARM): 0x2f6510
     * @note[short] MacOS (Intel): 0x368eb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void eventUnlockFeature(char const* key);

    /**
     * @note[short] MacOS (ARM): 0x2ef460
     * @note[short] MacOS (Intel): 0x360680
     * @note[short] Windows: 0x276940
     * @note[short] iOS: 0x3aeff0
     * @note[short] Android
     */
    void fadeInMenuMusic();

    /**
     * @note[short] MacOS (ARM): 0x2ef558
     * @note[short] MacOS (Intel): 0x360760
     * @note[short] Windows: 0x276a30
     * @note[short] Android
     */
    void fadeInMusic(std::string path);

    /**
     * @note[short] MacOS (ARM): 0x2f9b00
     * @note[short] MacOS (Intel): 0x36c820
     * @note[short] Windows: 0x27ddc0
     * @note[short] Android
     */
    void finishedLoadingBGAsync(cocos2d::CCObject* obj);

    /**
     * @note[short] MacOS (Intel): 0x36ce60
     * @note[short] Windows: 0x27e260
     * @note[short] Android
     */
    void finishedLoadingGAsync(int index);

    /**
     * @note[short] Windows: 0x27e1e0
     * @note[short] Android
     */
    void finishedLoadingGAsync1(cocos2d::CCObject* obj);

    /**
     * @note[short] MacOS (Intel): 0x36ce20
     * @note[short] Windows: 0x27e220
     * @note[short] Android
     */
    void finishedLoadingGAsync2(cocos2d::CCObject* obj);

    /**
     * @note[short] MacOS (ARM): 0x2f8118
     * @note[short] MacOS (Intel): 0x36ae60
     * @note[short] Android
     */
    void finishedLoadingIconAsync(cocos2d::CCObject* obj);

    /**
     * @note[short] MacOS (Intel): 0x36cb10
     * @note[short] Windows: 0x27e000
     * @note[short] Android
     */
    void finishedLoadingMGAsync(int index);

    /**
     * @note[short] Windows: 0x27df80
     * @note[short] Android
     */
    void finishedLoadingMGAsync1(cocos2d::CCObject* obj);

    /**
     * @note[short] MacOS (Intel): 0x36cad0
     * @note[short] Windows: 0x27dfc0
     * @note[short] Android
     */
    void finishedLoadingMGAsync2(cocos2d::CCObject* obj);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void followTwitch();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void followTwitter();

    /**
     * @note[short] MacOS (ARM): 0x1f14cc
     * @note[short] MacOS (Intel): 0x247b50
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    int framesForAnimation(int objectID);

    /**
     * @note[short] MacOS (ARM): 0x1f14fc
     * @note[short] MacOS (Intel): 0x247b80
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    float frameTimeForAnimation(int objectID);

    /**
     * @note[short] Android
     */
    bool friendRequestsRestricted();

    /**
     * @note[short] MacOS (ARM): 0x2fce58
     * @note[short] MacOS (Intel): 0x36ff10
     * @note[short] Windows: 0x281680
     * @note[short] Android
     */
    int generateSecretNumber();

    /**
     * @note[short] MacOS (ARM): 0x2fa224
     * @note[short] MacOS (Intel): 0x36cf00
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3b5a0c
     * @note[short] Android
     */
    const char* getBGTexture(int index);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    LevelEditorLayer* getEditorLayer();

    /**
     * @note[short] MacOS (ARM): 0x2f9758
     * @note[short] MacOS (Intel): 0x36c4b0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    const char* getFontFile(int index);

    /**
     * @note[short] MacOS (ARM): 0x2f97c4
     * @note[short] MacOS (Intel): 0x36c500
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    const char* getFontTexture(int index);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    GJBaseGameLayer* getGameLayer();

    /**
     * @note[short] MacOS (ARM): 0x2ef2c0
     * @note[short] MacOS (Intel): 0x360530
     * @note[short] Windows: 0x27e5c0
     * @note[short] iOS: 0x3aef14
     * @note[short] Android
     */
    bool getGameVariable(char const* key);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    bool getGameVariableDefault(const char* key, bool defaultValue);

    /**
     * @note[short] MacOS (ARM): 0x2fa2bc
     * @note[short] MacOS (Intel): 0x36cfa0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    const char* getGTexture(int index);

    /**
     * @note[short] MacOS (ARM): 0x2f95b8
     * @note[short] MacOS (Intel): 0x36c2f0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    int getIconRequestID();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    int getIntGameVariable(char const* key);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    int getIntGameVariableDefault(const char* key, int defaultValue);

    /**
     * @note[short] MacOS (ARM): 0x2eee08
     * @note[short] MacOS (Intel): 0x360100
     * @note[short] Windows: 0x276540
     * @note[short] Android
     */
    std::string getMenuMusicFile();

    /**
     * @note[short] MacOS (ARM): 0x2fa270
     * @note[short] MacOS (Intel): 0x36cf50
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    const char* getMGTexture(int index);

    /**
     * @note[short] MacOS (ARM): 0x2faf00
     * @note[short] MacOS (Intel): 0x36da90
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    int getNextUniqueObjectKey();

    /**
     * @note[short] MacOS (ARM): 0x2faff8
     * @note[short] MacOS (Intel): 0x36db80
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    int getNextUsedKey(int index, bool up);

    /**
     * @note[short] MacOS (ARM): 0x2fafac
     * @note[short] MacOS (Intel): 0x11aa60
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    cocos2d::CCArray* getOrderedCustomObjectKeys();

    /**
Gets the icon ID for the client's current ball icon.

 @returns Icon      * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    int getPlayerBall();

    /**
Gets the icon ID for the client's current bird/ufo icon.

 @returns Icon      * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    int getPlayerBird();

    /**
Gets the color ID for the client's current primary color.

 @returns Color      * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    int getPlayerColor();

    /**
Gets the color ID for the client's current secondary color.

 @returns Color      * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    int getPlayerColor2();

    /**
Gets the icon ID for the client's current dart/wave icon.

 @returns Icon      * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    int getPlayerDart();

    /**
Gets the death effect ID for the client's current death effect.

 @returns Death effect      * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    int getPlayerDeathEffect();

    /**
Gets the icon ID for the client's current cube icon.

 @returns Icon      * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    int getPlayerFrame();

    /**
Gets the "Glow Enabled" state for the client's icons.

 @returns Glow enabled sta     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    bool getPlayerGlow();

    /**
Gets the color ID for the client's current glow color.

 @returns Color      * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    int getPlayerGlowColor();

    /**
Gets the icon ID for the client's current jetpack icon.

 @returns Icon      * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    int getPlayerJetpack();

    /**
Gets the icon ID for the client's current robot icon.

 @returns Icon      * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    int getPlayerRobot();

    /**
Gets the icon ID for the client's current ship icon.

 @returns Icon      * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    int getPlayerShip();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    int getPlayerShipFire();

    /**
Gets the ID for the client's current spider icon.

 @returns Icon      * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    int getPlayerSpider();

    /**
Gets the ID for the client's current streak/trail.

 @returns Streak      * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    int getPlayerStreak();

    /**
Gets the ID for the client's current swing icon.

 @returns Icon      * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    int getPlayerSwing();

    /**
Gets the active PlayLayer. Returns nullptr if none.

 @returns PlayLayer point     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    PlayLayer* getPlayLayer();

    /**
     * @note[short] MacOS (ARM): 0x2eef7c
     * @note[short] MacOS (Intel): 0x360250
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    std::string getPracticeMusicFile();

    /**
     * @note[short] MacOS (ARM): 0x2fa848
     * @note[short] MacOS (Intel): 0x36d4c0
     * @note[short] Windows: 0x27e9c0
     * @note[short] iOS: 0x3b5dac
     * @note[short] Android
     */
    bool getUGV(char const* key);

    /**
     * @note[short] MacOS (ARM): 0x2f04c4
     * @note[short] MacOS (Intel): 0x361ae0
     * @note[short] Windows: 0x277870
     * @note[short] Android
     */
    void getUnlockForAchievement(std::string key, int& id, UnlockType& type);

    /**
     * @note[short] MacOS (ARM): 0x2f9ec4
     * @note[short] MacOS (Intel): 0x36cbb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool groundHasSecondaryColor(int index);

    /**
     * @note[short] MacOS (ARM): 0x2f84d4
     * @note[short] MacOS (Intel): 0x36b220
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void iconAndTypeForKey(int key, int& id, int& type);

    /**
     * @note[short] MacOS (ARM): 0x2efa48
     * @note[short] MacOS (Intel): 0x360de0
     * @note[short] Windows: 0x2771b0
     * @note[short] Android
     */
    std::string iconKey(int id, IconType type);

    /**
     * @note[short] MacOS (ARM): 0x2efecc
     * @note[short] MacOS (Intel): 0x361380
     * @note[short] Windows: 0x2774b0
     * @note[short] Android
     */
    UnlockType iconTypeToUnlockType(IconType type);

    /**
     * @note[short] MacOS (ARM): 0x2f02d0
     * @note[short] MacOS (Intel): 0x361950
     * @note[short] Windows: 0x2777a0
     * @note[short] Android
     */
    bool isColorUnlocked(int id, UnlockType type);

    /**
     * @note[short] MacOS (ARM): 0x2f77e8
     * @note[short] MacOS (Intel): 0x36a3e0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool isIconLoaded(int id, int type);

    /**
     * @note[short] MacOS (ARM): 0x2efdb8
     * @note[short] MacOS (Intel): 0x3612c0
     * @note[short] Windows: 0x2773d0
     * @note[short] Android
     */
    bool isIconUnlocked(int id, IconType type);

    /**
     * @note[short] MacOS (ARM): 0x2f6518
     * @note[short] MacOS (Intel): 0x368ed0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void itemPurchased(char const* key);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void joinDiscord();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void joinReddit();

    /**
     * @note[short] MacOS (ARM): 0x2f78bc
     * @note[short] MacOS (Intel): 0x36a4c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    int keyForIcon(int id, int type);

    /**
     * @note[short] MacOS (ARM): 0x2f651c
     * @note[short] MacOS (Intel): 0x368ee0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool levelIsPremium(int unk1, int unk2);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void likeFacebook();

    /**
     * @note[short] MacOS (ARM): 0x2f99b0
     * @note[short] MacOS (Intel): 0x36c6e0
     * @note[short] Windows: 0x27dd10
     * @note[short] Android
     */
    void loadBackground(int index);

    /**
     * @note[short] MacOS (ARM): 0x2f9a54
     * @note[short] MacOS (Intel): 0x36c790
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void loadBackgroundAsync(int index);

    /**
     * @note[short] MacOS (ARM): 0x2f9830
     * @note[short] MacOS (Intel): 0x36c550
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void loadDeathEffect(int id);

    /**
     * @note[short] MacOS (ARM): 0x2fe83c
     * @note[short] MacOS (Intel): 0x371f00
     * @note[short] Windows: 0x282330
     * @note[short] Android
     */
    void loadDpadFromString(UIButtonConfig& config, std::string str);

    /**
     * @note[short] MacOS (ARM): 0x2fe424
     * @note[short] MacOS (Intel): 0x371ab0
     * @note[short] Windows: 0x281dc0
     * @note[short] Android
     */
    void loadDPadLayout(int index, bool dual);

    /**
     * @note[short] MacOS (ARM): 0x2f96ac
     * @note[short] MacOS (Intel): 0x36c400
     * @note[short] Windows: 0x27dc60
     * @note[short] Android
     */
    void loadFont(int index);

    /**
     * @note[short] MacOS (ARM): 0x2f9ed4
     * @note[short] MacOS (Intel): 0x36cbc0
     * @note[short] Windows: 0x27e0c0
     * @note[short] Android
     */
    void loadGround(int index);

    /**
     * @note[short] MacOS (ARM): 0x2f9fe8
     * @note[short] MacOS (Intel): 0x36cce0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void loadGroundAsync(int index);

    /**
     * @note[short] MacOS (ARM): 0x2f858c
     * @note[short] MacOS (Intel): 0x36b290
     * @note[short] Windows: 0x27d120
     * @note[short] Android
     */
    cocos2d::CCTexture2D* loadIcon(int id, int type, int requestID);

    /**
     * @note[short] MacOS (ARM): 0x2f78d0
     * @note[short] MacOS (Intel): 0x36a4e0
     * @note[short] Android
     */
    void loadIconAsync(int id, int type, int requestID, cocos2d::CCObject* delegate);

    /**
     * @note[short] MacOS (ARM): 0x2f9b9c
     * @note[short] MacOS (Intel): 0x36c8b0
     * @note[short] Windows: 0x27de70
     * @note[short] Android
     */
    void loadMiddleground(int index);

    /**
     * @note[short] MacOS (ARM): 0x2f9c9c
     * @note[short] MacOS (Intel): 0x36c9b0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void loadMiddlegroundAsync(int index);

    /**
     * @note[short] MacOS (ARM): 0x2ff188
     * @note[short] MacOS (Intel): 0x372950
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3b8654
     * @note[short] Android
     */
    void loadVideoSettings();

    /**
     * @note[short] MacOS (ARM): 0x2f0450
     * @note[short] MacOS (Intel): 0x361a80
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void lockColor(int id, UnlockType type);

    /**
     * @note[short] MacOS (ARM): 0x2f002c
     * @note[short] MacOS (Intel): 0x361650
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void lockIcon(int id, IconType type);

    /**
     * @note[short] MacOS (ARM): 0x2f95cc
     * @note[short] MacOS (Intel): 0x36c310
     * @note[short] Android
     */
    void logLoadedIconInfo();

    /**
     * @note[short] Android
     */
    bool messagesRestricted();

    /**
     * @note[short] Android
     */
    int modUIRank();

    /**
     * @note[short] iOS: 0x3b5ff8
     * @note[short] Android
     */
    bool offlineModeEnabled();

    /**
     * @note[short] MacOS (ARM): 0x2fad48
     * @note[short] MacOS (Intel): 0x36d8f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3b6144
     * @note[short] Android
     */
    bool onlyCuratedLevels();

    /**
     * @note[short] MacOS (Intel): 0x369e00
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void openEditorGuide();

    /**
     * @note[short] Windows: 0x27ed60
     * @note[short] Android
     */
    bool parentalOptionsActive();

    /**
     * @note[short] MacOS (ARM): 0xc9b4
     * @note[short] MacOS (Intel): 0x360390
     * @note[short] Windows: 0x2766c0
     * @note[short] Android
     */
    void playMenuMusic();

    /**
     * @note[short] MacOS (ARM): 0x2ef690
     * @note[short] MacOS (Intel): 0x360880
     * @note[short] Windows: 0x276b50
     * @note[short] Android
     */
    int playSFXTrigger(SFXTriggerGameObject* object);

    /**
     * @note[short] MacOS (Intel): 0x372200
     * @note[short] Windows: 0x282620
     * @note[short] Android
     */
    void prepareDPadSettings();

    /**
     * @note[short] MacOS (ARM): 0x2fd018
     * @note[short] MacOS (Intel): 0x370190
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void printGJLog();

    /**
     * @note[short] Android
     */
    bool privacyPushWanted();

    /**
     * @note[short] Windows: 0x287700
     * @note[short] iOS: 0x3bb50c
     * @note[short] Android
     */
    void queueReloadMenu(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x2f711c
     * @note[short] MacOS (Intel): 0x369ac0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void rateGame();

    /**
     * @note[short] MacOS (ARM): 0x2fc00c
     * @note[short] MacOS (Intel): 0x36ec80
     * @note[short] Windows: 0x2803a0
     * @note[short] Android
     */
    void recountUserStats(std::string str);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void reloadAll(bool switchingModes, bool toFullscreen, bool unused);

    /**
     * @note[short] MacOS (ARM): 0x3031c0
     * @note[short] MacOS (Intel): 0x376e90
     * @note[short] Windows: 0x2877b0
     * @note[short] iOS: 0x3bb5c0
     * @note[short] Android
     */
    void reloadAll(bool switchingModes, bool toFullscreen, bool borderless, bool fix, bool unused);

    /**
     * @note[short] MacOS (ARM): 0x303264
     * @note[short] MacOS (Intel): 0x376f40
     * @note[short] Windows: 0x287870
     * @note[short] iOS: 0x3bb664
     * @note[short] Android
     */
    void reloadAllStep2();

    /**
     * @note[short] MacOS (ARM): 0x303350
     * @note[short] MacOS (Intel): 0x377050
     * @note[short] Windows: 0x2879d0
     * @note[short] iOS: 0x3bb750
     * @note[short] Android
     */
    void reloadAllStep3();

    /**
     * @note[short] MacOS (ARM): 0x3033d8
     * @note[short] MacOS (Intel): 0x3770d0
     * @note[short] Windows: 0x287ae0
     * @note[short] iOS: 0x3bb7d8
     * @note[short] Android
     */
    void reloadAllStep4();

    /**
     * @note[short] MacOS (ARM): 0x303444
     * @note[short] MacOS (Intel): 0x377130
     * @note[short] Windows: 0x287b90
     * @note[short] iOS: 0x3bb844
     * @note[short] Android
     */
    void reloadAllStep5();

    /**
     * @note[short] MacOS (ARM): 0x776cec
     * @note[short] MacOS (Intel): 0x881c50
     * @note[short] Windows: 0x287770
     * @note[short] Android
     */
    void reloadMenu();

    /**
     * @note[short] MacOS (ARM): 0x2fb7a0
     * @note[short] MacOS (Intel): 0x36e380
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void removeCustomObject(int key);

    /**
     * @note[short] MacOS (Intel): 0x36bf70
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void removeIconDelegate(int requestID);

    /**
     * @note[short] MacOS (ARM): 0x2fb444
     * @note[short] MacOS (Intel): 0x36dfe0
     * @note[short] Windows: 0x27f1f0
     * @note[short] Android
     */
    int reorderKey(int index, bool up);

    /**
     * @note[short] MacOS (ARM): 0x2f1c34
     * @note[short] MacOS (Intel): 0x3631d0
     * @note[short] Windows: 0x2790e0
     * @note[short] Android
     */
    void reportAchievementWithID(char const* key, int percent, bool dontNotify);

    /**
     * @note[short] MacOS (ARM): 0x2f12ac
     * @note[short] MacOS (Intel): 0x362770
     * @note[short] Windows: 0x278580
     * @note[short] Android
     */
    void reportPercentageForLevel(int levelID, int percentage, bool isPlatformer);

    /**
     * @note[short] MacOS (ARM): 0x2f110c
     * @note[short] MacOS (Intel): 0x362600
     * @note[short] Windows: 0x278300
     * @note[short] Android
     */
    void resetAchievement(std::string key);

    /**
     * @note[short] MacOS (ARM): 0x2f6a18
     * @note[short] MacOS (Intel): 0x3693f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void resetAdTimer();

    /**
     * @note[short] MacOS (ARM): 0x2fb8bc
     * @note[short] MacOS (Intel): 0x36e490
     * @note[short] Windows: 0x27f630
     * @note[short] Android
     */
    void resetAllIcons();

    /**
     * @note[short] MacOS (ARM): 0x2f4f18
     * @note[short] MacOS (Intel): 0x367930
     * @note[short] Windows: 0x27be00
     * @note[short] Android
     */
    void resetCoinUnlocks();

    /**
     * @note[short] MacOS (ARM): 0x2feee8
     * @note[short] MacOS (Intel): 0x3725f0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void resetDPadSettings(bool dual);

    /**
     * @note[short] MacOS (ARM): 0x303498
     * @note[short] MacOS (Intel): 0x377170
     * @note[short] Windows: 0x287bd0
     * @note[short] iOS: 0x3bb888
     * @note[short] Android
     */
    cocos2d::CCSize resolutionForKey(int key);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void resumeAudio();

    /**
     * @note[short] MacOS (ARM): 0x2f6bb8
     * @note[short] MacOS (Intel): 0x3695b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void resumeAudioDelayed();

    /**
     * @note[short] MacOS (ARM): 0x302cc8
     * @note[short] MacOS (Intel): 0x376970
     * @note[short] Windows: 0x2872f0
     * @note[short] Android
     */
    void returnToLastScene(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x2f6ce8
     * @note[short] MacOS (Intel): 0x97e210
     * @note[short] Android
     */
    void rewardedVideoAdFinished(int unused);

    /**
     * @note[short] MacOS (ARM): 0x2f6e28
     * @note[short] MacOS (Intel): 0x3697e0
     * @note[short] Android
     */
    void rewardedVideoHidden();

    /**
     * @note[short] MacOS (ARM): 0x2f6da4
     * @note[short] MacOS (Intel): 0x369770
     * @note[short] Android
     */
    void rewardedVideoHiddenDelayed();

    /**
     * @note[short] MacOS (ARM): 0x2fab28
     * @note[short] MacOS (Intel): 0x36d700
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3b5fb0
     * @note[short] Android
     */
    bool safeModeEnabled();

    /**
     * @note[short] MacOS (ARM): 0x303004
     * @note[short] MacOS (Intel): 0x376cd0
     * @note[short] Windows: 0x287680
     * @note[short] Android
     */
    bool safePopScene();

    /**
     * @note[short] Android
     */
    void saveAdTimer();

    /**
     * @note[short] MacOS (ARM): 0x2fd024
     * @note[short] MacOS (Intel): 0x3701c0
     * @note[short] Windows: 0x2817b0
     * @note[short] Android
     */
    void saveDPadLayout(int index, bool dual);

    /**
     * @note[short] MacOS (ARM): 0x2fa308
     * @note[short] MacOS (Intel): 0x36cff0
     * @note[short] Windows: 0x27e320
     * @note[short] iOS: 0x3b5af0
     * @note[short] Android
     */
    void setGameVariable(char const* key, bool value);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setHasRatingPower(int hasRP);

    /**
     * @note[short] Windows: 0x27eb60
     * @note[short] Android
     */
    void setIntGameVariable(char const* key, int value);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setPlayerBall(int id);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setPlayerBird(int id);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setPlayerColor(int id);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setPlayerColor2(int id);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setPlayerColor3(int id);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setPlayerDart(int id);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setPlayerDeathEffect(int id);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setPlayerFrame(int id);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setPlayerGlow(bool v);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setPlayerJetpack(int id);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setPlayerRobot(int id);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setPlayerShip(int id);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setPlayerShipStreak(int id);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setPlayerSpider(int id);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setPlayerStreak(int id);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setPlayerSwing(int id);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setPlayerUserID(int id);

    /**
     * @note[short] MacOS (ARM): 0x2fa6a4
     * @note[short] MacOS (Intel): 0x36d350
     * @note[short] Windows: 0x27e830
     * @note[short] Android
     */
    void setUGV(char const* key, bool value);

    /**
     * @note[short] MacOS (Intel): 0x249540
     * @note[short] Windows: 0x2a8a50
     * @note[short] Android
     */
    void setupGameAnimations();

    /**
     * @note[short] MacOS (ARM): 0x2f7b98
     * @note[short] MacOS (Intel): 0x36a7b0
     * @note[short] Windows: 0x27d910
     * @note[short] Android
     */
    std::string sheetNameForIcon(int id, int type);

    /**
     * @note[short] MacOS (ARM): 0x2f6a20
     * @note[short] MacOS (Intel): 0x369410
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void shortenAdTimer(float time);

    /**
     * @note[short] MacOS (ARM): 0x2f6a8c
     * @note[short] MacOS (Intel): 0x369480
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool shouldShowInterstitial(int unk1, int unk2, int unk3);

    /**
     * @note[short] MacOS (ARM): 0x2f6a94
     * @note[short] MacOS (Intel): 0x369490
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool showInterstitial();

    /**
     * @note[short] MacOS (ARM): 0x2f6b38
     * @note[short] MacOS (Intel): 0x369520
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool showInterstitialForced();

    /**
     * @note[short] MacOS (ARM): 0x2f6a10
     * @note[short] MacOS (Intel): 0x3693e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool showMainMenuAd();

    /**
     * @note[short] MacOS (ARM): 0x2fae3c
     * @note[short] MacOS (Intel): 0x36d9d0
     * @note[short] Windows: 0x27edf0
     * @note[short] Android
     */
    void showParentalRestrictedAlert();

    /**
     * @note[short] MacOS (ARM): 0x2eedc0
     * @note[short] MacOS (Intel): 0x3600b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3aebd0
     * @note[short] Android
     */
    void startUpdate();

    /**
     * @note[short] MacOS (ARM): 0x2fb2bc
     * @note[short] MacOS (Intel): 0x36de50
     * @note[short] Windows: 0x27f090
     * @note[short] Android
     */
    std::string stringForCustomObject(int customObjectID);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void subSpotlight();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void subYouTube();

    /**
     * @note[short] MacOS (ARM): 0x2fb490
     * @note[short] MacOS (Intel): 0x36e010
     * @note[short] Windows: 0x27f2f0
     * @note[short] Android
     */
    void switchCustomObjects(int key1, int key2);

    /**
     * @note[short] MacOS (Intel): 0x376df0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void switchScreenMode(bool fullscreen, bool borderless, bool fix, bool unused);

    /**
     * @note[short] MacOS (ARM): 0x2f74e0
     * @note[short] MacOS (Intel): 0x369e30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3b42c0
     * @note[short] Android
     */
    void syncPlatformAchievements();

    /**
     * @note[short] MacOS (ARM): 0x2fa5c0
     * @note[short] MacOS (Intel): 0x36d290
     * @note[short] Windows: 0x27e770
     * @note[short] Android
     */
    bool toggleGameVariable(char const* key);

    /**
     * @note[short] Android
     */
    void tryCacheAd();

    /**
     * @note[short] MacOS (ARM): 0x2f6a88
     * @note[short] MacOS (Intel): 0x369470
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void tryShowInterstitial(int unk1, int unk2, int unk3);

    /**
     * @note[short] MacOS (ARM): 0x2f9918
     * @note[short] MacOS (Intel): 0x36c640
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void unloadBackground();

    /**
     * @note[short] MacOS (ARM): 0x2f8be0
     * @note[short] MacOS (Intel): 0x36b910
     * @note[short] Windows: 0x27d490
     * @note[short] Android
     */
    void unloadIcon(int id, int type, int requestID);

    /**
     * @note[short] MacOS (ARM): 0x2f9334
     * @note[short] MacOS (Intel): 0x36c060
     * @note[short] Windows: 0x27d7c0
     * @note[short] Android
     */
    void unloadIcons(int requestID);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void unlockColor(int id, UnlockType type);

    /**
     * @note[short] MacOS (ARM): 0x2f6514
     * @note[short] MacOS (Intel): 0x368ec0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void unlockedPremium();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void unlockIcon(int id, IconType type);

    /**
     * @note[short] MacOS (ARM): 0x2eff5c
     * @note[short] MacOS (Intel): 0x3615a0
     * @note[short] Windows: 0x2775d0
     * @note[short] Android
     */
    IconType unlockTypeToIconType(int type);

    /**
     * @note[short] MacOS (ARM): 0x30374c
     * @note[short] MacOS (Intel): 0x377440
     * @note[short] Windows: 0x288000
     * @note[short] iOS: 0x3bba30
     * @note[short] Android
     */
    void updateCustomFPS();

    /**
     * @note[short] MacOS (ARM): 0x2f70d8
     * @note[short] MacOS (Intel): 0x369a70
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3b3ed4
     * @note[short] Android
     */
    void updateMusic();

    /**
     * @note[short] MacOS (ARM): 0x2f1e78
     * @note[short] MacOS (Intel): 0x363410
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void verifyAchievementUnlocks();

    /**
     * @note[short] MacOS (ARM): 0x2f2084
     * @note[short] MacOS (Intel): 0x363630
     * @note[short] Windows: 0x2797f0
     * @note[short] Android
     */
    void verifyCoinUnlocks();

    /**
     * @note[short] MacOS (ARM): 0x2f2024
     * @note[short] MacOS (Intel): 0x3635d0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void verifyStarUnlocks();

    /**
     * @note[short] MacOS (ARM): 0x2f619c
     * @note[short] MacOS (Intel): 0x368af0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void verifySyncedCoins();

    /**
     * @note[short] MacOS (ARM): 0x2f6b84
     * @note[short] MacOS (Intel): 0x8de00
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void videoAdHidden();

    /**
     * @note[short] MacOS (ARM): 0x2f6b40
     * @note[short] MacOS (Intel): 0x369530
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void videoAdShowed();
    std::vector<std::string> m_unkStringVector;
    cocos2d::CCDictionary* m_mainFramesForAnimation;
    cocos2d::CCDictionary* m_detailFramesForAnimation;
    cocos2d::CCDictionary* m_frameTimeForAnimation;
    cocos2d::CCDictionary* m_framesForAnimation;
    cocos2d::CCDictionary* m_defaultFrames;
    bool m_switchModes;
    bool m_toFullscreen;
    bool m_reloading;
    bool m_fix;
    bool m_reloadTextures;
    bool m_unkBool2;
    bool m_vsyncEnabled;
    cocos2d::CCDictionary* m_valueKeeper;
    union {
        cocos2d::CCDictionary* m_localKeeper{};
        cocos2d::CCDictionary* m_unkDict;
    };
    union {
        bool m_isBackingUp{};
        bool m_unkBool2point5;
    };
    cocos2d::CCDictionary* m_unlockValueKeeper;
    cocos2d::CCDictionary* m_customObjectDict;
    double m_adTimer;
    double m_adCache;
    bool m_unkBool3;
    int m_unkSize4_1;
    double m_unkDouble2;
    int m_unkSize4_2;
    int m_unkSize4_3;
    bool m_loaded;
    bool m_googlePlaySignedIn;
    std::string m_editorClipboard;
    int m_copiedObjectCount;
    PlayLayer* m_playLayer;
    LevelEditorLayer* m_levelEditorLayer;
    GJBaseGameLayer* m_gameLayer;
    LevelSelectLayer* m_levelSelectLayer;
    MenuLayer* m_menuLayer;
    bool m_inMenuLayer;
    void* m_premiumPopup;
    bool m_firstSetup;
    bool m_showedMenu;
    bool m_unknownBool4;
    bool m_unknownBool5;
    std::string m_playerUDID;
    std::string m_playerName;
    bool m_scoreValid;
    geode::SeedValueRSV m_playerUserID;
    float m_bgVolume;
    float m_sfxVolume;
    float m_timeOffset;
    bool m_ratedGame;
    bool m_clickedFacebook;
    bool m_clickedTwitter;
    bool m_clickedYouTube;
    bool m_clickedTwitch;
    bool m_clickedDiscord;
    bool m_clickedReddit;
    bool m_clickedSpotlight;
    double m_socialsDuration;
    bool m_musicPaused;
    bool m_isParticleObject;
    bool m_editorEnabled;
    int m_sceneEnum;
    bool m_searchObjectBool;
    geode::SeedValueRSV m_playerFrame;
    geode::SeedValueRSV m_playerShip;
    geode::SeedValueRSV m_playerBall;
    geode::SeedValueRSV m_playerBird;
    geode::SeedValueRSV m_playerDart;
    geode::SeedValueRSV m_playerRobot;
    geode::SeedValueRSV m_playerSpider;
    geode::SeedValueRSV m_playerSwing;
    geode::SeedValueRSV m_playerColor;
    geode::SeedValueRSV m_playerColor2;
    geode::SeedValueRSV m_playerGlowColor;
    geode::SeedValueRSV m_playerStreak;
    geode::SeedValueRSV m_playerShipFire;
    geode::SeedValueRSV m_playerDeathEffect;
    geode::SeedValueRSV m_playerJetpack;
    geode::SeedValueRS m_chk;
    geode::SeedValueSR m_secretNumber;
    bool m_playerGlow;
    IconType m_playerIconType;
    bool m_everyPlaySetup;
    bool m_showSongMarkers;
    bool m_showBPMMarkers;
    bool m_recordGameplay;
    bool m_showProgressBar;
    bool m_performanceMode;
    bool m_addGlow;
    bool m_clickedGarage;
    bool m_clickedEditor;
    bool m_clickedName;
    bool m_clickedPractice;
    bool m_showedEditorGuide;
    bool m_showedRateDiffDialog;
    bool m_showedRateStarDialog;
    bool m_showedLowDetailDialog;
    GameRateDelegate* m_gameRateDelegate1;
    GameRateDelegate* m_gameRateDelegate2;
    VolumeChangeDelegate* m_volumeChangeDelegate;
    cocos2d::ccColor3B m_copiedColor;
    int m_currentLevelID;
    int m_unkInt2;
    int m_currentColorChannel;
    int m_currentGroupID;
    int m_loadedBgID;
    int m_loadedGroundID;
    int m_loadedMG;
    int m_loadedFont;
    int m_loadedDeathEffect;
    bool m_loadingBG;
    bool m_loadingG;
    bool m_loadingG1;
    bool m_finishedLoadingG1;
    bool m_finishedLoadingG2;
    bool m_finishedLoadingMG1;
    bool m_finishedLoadingMG2;
    int m_sessionAttempts;
    int m_sessionAttempts2;
    int m_sessionNormalAttempts;
    int m_bootups;
    bool m_hasRatedGame;
    bool m_unkBool6;
    bool m_shouldLoadUnlockValueKeeper;
    bool m_unkBool7;
    bool m_unkBool8;
    geode::SeedValueRSV m_hasRP;
    bool m_hasDRP;
    int m_specialPermKey;
    bool m_canGetLevelSaveData;
    int m_resolution;
    int m_texQuality;
    bool m_somethingInMenuLayer;
    DailyLevelPage* m_dailyLevelPage;
    bool m_ropeGarageEnter;
    int m_currentGauntlet;
    int m_unkSize4_13;
    bool m_unkBool10;
    int m_unkSize4_14;
    bool m_disableThumbstick;
    float m_customFPSTarget;
    float m_scrollSensitivity;
    std::map<int, void*> m_unkMap;
    bool m_loadingLevel;
    int m_customMenuSongID;
    int m_customPracticeSongID;
    union {
        int m_idNameSortMode{};
        int m_unkInt3;
    };
    union {
        int m_newsLastReadID{};
        int m_newsItemCount;
    };
    int m_unkInt5;
    std::map<int, int> m_iconLoadCounts;
    std::map<int, std::map<int, int>> m_iconRequests;
    std::map<int, bool> m_isIconBeingLoaded;
    std::vector<int> m_keyStartForIcon;
    std::map<int, std::vector<cocos2d::CCObject*>> m_iconDelegates;
    int m_iconRequestID;
    cocos2d::CCArray* m_gjLog;
    RewardedVideoDelegate* m_rewardedVideoDelegate;
    SearchType m_localSearchType;
    SearchType m_savedSearchType;
    int m_levelSearchType;
    UIButtonConfig m_dpad1;
    UIButtonConfig m_dpad2;
    UIButtonConfig m_dpad3;
    UIButtonConfig m_dpad4;
    UIButtonConfig m_dpad5;
    std::string m_dpadLayout1;
    std::string m_dpadLayout2;
    std::string m_dpadLayout3;
    std::string m_dpadLayoutDual1;
    std::string m_dpadLayoutDual2;
    std::string m_dpadLayoutDual3;
    std::string m_recentEmotes;
    int m_leaderboardLevelID;
    int m_leaderboardLevelTime;
    int m_leaderboardLevelPoints;
    bool m_shouldResetShader;
    cocos2d::CCPoint m_practicePos;
    float m_practiceOpacity;
    int m_unk664;
};

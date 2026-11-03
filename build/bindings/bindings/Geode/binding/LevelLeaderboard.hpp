#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/LeaderboardManagerDelegate.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>
#include <Geode/mapping/CCObject.hpp>
#include <Geode/mapping/CCPoint.hpp>

class LevelLeaderboard : public FLAlertLayer, public LeaderboardManagerDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "LevelLeaderboard";
    GEODE_CUSTOM_CONSTRUCTOR_GD(LevelLeaderboard, FLAlertLayer)

    /**
     * @note[short] Windows: 0x4281c0
     * @note[short] iOS: 0x2ec4c4
     * @note[short] Android: Rebinded
     */
    virtual  ~LevelLeaderboard();

    /**
     * @note[short] MacOS (Intel): 0x3c6e30
     * @note[short] Windows: 0x428300
     * @note[short] Android
     */
    static LevelLeaderboard* create(GJGameLevel* level, LevelLeaderboardType type, LevelLeaderboardMode mode);

    /**
     * @note[short] MacOS (ARM): 0x34d0ec
     * @note[short] MacOS (Intel): 0x3c8e70
     * @note[short] Windows: 0x46290
     * @note[short] iOS: 0x2edf74
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x34d070
     * @note[short] MacOS (Intel): 0x3c8e00
     * @note[short] Windows: 0x99f90
     * @note[short] iOS: 0x2edef8
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x34d5c4
     * @note[short] MacOS (Intel): 0x3c93b0
     * @note[short] Windows: 0x9eec0
     * @note[short] iOS: 0x2ee28c
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x34d2f4
     * @note[short] MacOS (Intel): 0x3c90b0
     * @note[short] Windows: 0x42a7b0
     * @note[short] iOS: 0x2ee0b4
     * @note[short] Android
     */
    virtual void loadLeaderboardFinished(cocos2d::CCArray* scores, char const* key);

    /**
     * @note[short] MacOS (ARM): 0x34d440
     * @note[short] MacOS (Intel): 0x3c91f0
     * @note[short] Windows: 0x42a850
     * @note[short] iOS: 0x2ee158
     * @note[short] Android
     */
    virtual void loadLeaderboardFailed(char const* key);

    /**
     * @note[short] MacOS (ARM): 0x34cce8
     * @note[short] MacOS (Intel): 0x3c8a50
     * @note[short] Windows: 0x4299b0
     * @note[short] iOS: 0x2edbd0
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x34cee0
     * @note[short] MacOS (Intel): 0x3c8c50
     * @note[short] Windows: 0x429ff0
     * @note[short] iOS: 0x2eddb4
     * @note[short] Android
     */
    virtual void updateUserScoreFinished();

    /**
     * @note[short] MacOS (ARM): 0x34ceec
     * @note[short] MacOS (Intel): 0x3c8c80
     * @note[short] Windows: 0x42a000
     * @note[short] iOS: 0x2eddc0
     * @note[short] Android
     */
    virtual void updateUserScoreFailed();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual bool ownsTouchPrio();

    /**
     * @note[short] MacOS (ARM): 0x34cb58
     * @note[short] MacOS (Intel): 0x3c8900
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void deleteLocalScores();

    /**
     * @note[short] MacOS (ARM): 0x34cd80
     * @note[short] MacOS (Intel): 0x3c8ad0
     * @note[short] Windows: 0x429b30
     * @note[short] Android
     */
    cocos2d::CCArray* getLocalScores();

    /**
     * @note[short] MacOS (ARM): 0x34c33c
     * @note[short] MacOS (Intel): 0x3c80f0
     * @note[short] Windows: 0x429620
     * @note[short] Android
     */
    CCMenuItemSpriteExtra* getSpriteButton(std::string frame, cocos2d::SEL_MenuHandler selector, cocos2d::CCMenu* menu, float scale, cocos2d::CCPoint position, int button);

    /**
     * @note[short] MacOS (ARM): 0x34b424
     * @note[short] MacOS (Intel): 0x3c7070
     * @note[short] Windows: 0x428450
     * @note[short] Android
     */
    bool init(GJGameLevel* level, LevelLeaderboardType type, LevelLeaderboardMode mode);

    /**
     * @note[short] MacOS (ARM): 0x34d124
     * @note[short] MacOS (Intel): 0x3c8eb0
     * @note[short] Windows: 0x42a580
     * @note[short] Android
     */
    bool isCorrect(char const* key);

    /**
     * @note[short] MacOS (ARM): 0x34c7bc
     * @note[short] MacOS (Intel): 0x3c8550
     * @note[short] Windows: 0x429d00
     * @note[short] Android
     */
    void loadScores();

    /**
     * @note[short] MacOS (ARM): 0x34c514
     * @note[short] MacOS (Intel): 0x3c82c0
     * @note[short] Windows: 0x42a290
     * @note[short] Android
     */
    void onChangeMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x34c748
     * @note[short] MacOS (Intel): 0x3c84f0
     * @note[short] Windows: 0x42a110
     * @note[short] Android
     */
    void onChangeType(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x34c63c
     * @note[short] MacOS (Intel): 0x3c83e0
     * @note[short] Windows: 0x99f60
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x34c564
     * @note[short] MacOS (Intel): 0x1df790
     * @note[short] Windows: 0x429870
     * @note[short] Android
     */
    void onDeleteLocalScores(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x34c678
     * @note[short] MacOS (Intel): 0x3c8410
     * @note[short] Windows: 0x42a400
     * @note[short] Android
     */
    void onUpdate(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x34cf94
     * @note[short] MacOS (Intel): 0x3c8d20
     * @note[short] Windows: 0x42a010
     * @note[short] Android
     */
    void reloadLeaderboard(LevelLeaderboardType type, LevelLeaderboardMode mode);

    /**
     * @note[short] MacOS (ARM): 0x34c9c4
     * @note[short] MacOS (Intel): 0x3c8750
     * @note[short] Windows: 0x42a960
     * @note[short] Android
     */
    void setupLeaderboard(cocos2d::CCArray* scores);
    GJGameLevel* m_level;
    LevelLeaderboardType m_type;
    LevelLeaderboardMode m_mode;
    cocos2d::CCArray* m_scores;
    GJCommentListLayer* m_list;
    LoadingCircle* m_circle;
    TextArea* m_noInternet;
    CCMenuItemSpriteExtra* m_refreshBtn;
    CCMenuItemSpriteExtra* m_timeBtn;
    CCMenuItemSpriteExtra* m_pointsBtn;
};

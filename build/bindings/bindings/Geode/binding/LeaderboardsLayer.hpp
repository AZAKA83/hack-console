#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCLayer.hpp>
#include <Geode/binding/LeaderboardManagerDelegate.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>

class LeaderboardsLayer : public cocos2d::CCLayer, public LeaderboardManagerDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "LeaderboardsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(LeaderboardsLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     LeaderboardsLayer();

    /**
     * @note[short] MacOS (Intel): 0x512fa0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x4573f0
     * @note[short] Android: Rebinded
     */
     ~LeaderboardsLayer();

    /**
     * @note[short] MacOS (ARM): 0x46e1e0
     * @note[short] MacOS (Intel): 0x513240
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static LeaderboardsLayer* create(LeaderboardType type, LeaderboardStat stat);

    /**
     * @note[short] MacOS (ARM): 0x46e0e8
     * @note[short] MacOS (Intel): 0x513100
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static cocos2d::CCScene* scene(LeaderboardType type, LeaderboardStat stat);

    /**
     * @note[short] MacOS (ARM): 0x470254
     * @note[short] MacOS (Intel): 0x5152b0
     * @note[short] Windows: 0x3dd400
     * @note[short] iOS: 0x459104
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x4701fc
     * @note[short] MacOS (Intel): 0x515250
     * @note[short] Windows: 0x3dd350
     * @note[short] iOS: 0x4590ac
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x46fb38
     * @note[short] MacOS (Intel): 0x514c20
     * @note[short] Windows: 0x3dca60
     * @note[short] iOS: 0x458cd8
     * @note[short] Android
     */
    virtual void updateUserScoreFinished();

    /**
     * @note[short] MacOS (ARM): 0x46fb78
     * @note[short] MacOS (Intel): 0x514c80
     * @note[short] Windows: 0x3dca80
     * @note[short] iOS: 0x458d18
     * @note[short] Android
     */
    virtual void updateUserScoreFailed();

    /**
     * @note[short] MacOS (ARM): 0x46fc20
     * @note[short] MacOS (Intel): 0x514d20
     * @note[short] Windows: 0x3dca90
     * @note[short] iOS: 0x458d74
     * @note[short] Android
     */
    virtual void loadLeaderboardFinished(cocos2d::CCArray* scores, char const* key);

    /**
     * @note[short] MacOS (ARM): 0x46fec8
     * @note[short] MacOS (Intel): 0x514f70
     * @note[short] Windows: 0x3dcb50
     * @note[short] iOS: 0x458f0c
     * @note[short] Android
     */
    virtual void loadLeaderboardFailed(char const* key);

    /**
     * @note[short] MacOS (ARM): 0x46e2c4
     * @note[short] MacOS (Intel): 0x513350
     * @note[short] Windows: 0x3da4f0
     * @note[short] Android
     */
    bool init(LeaderboardType type, LeaderboardStat stat);

    /**
     * @note[short] MacOS (ARM): 0x46fe04
     * @note[short] MacOS (Intel): 0x514e80
     * @note[short] Windows: 0x3dcce0
     * @note[short] Android
     */
    bool isCorrect(std::string key);

    /**
     * @note[short] MacOS (ARM): 0x46f5e0
     * @note[short] MacOS (Intel): 0x5146b0
     * @note[short] Windows: 0x3dd380
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x46f680
     * @note[short] MacOS (Intel): 0x514760
     * @note[short] Windows: 0x3dc420
     * @note[short] Android
     */
    void onCreators(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x46f664
     * @note[short] MacOS (Intel): 0x514740
     * @note[short] Windows: 0x3dc400
     * @note[short] Android
     */
    void onGlobal(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x46ebd0
     * @note[short] MacOS (Intel): 0x513ca0
     * @note[short] Windows: 0x3dce30
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x46f69c
     * @note[short] MacOS (Intel): 0x514780
     * @note[short] Windows: 0x3dc390
     * @note[short] Android
     */
    void onStat(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x46f62c
     * @note[short] MacOS (Intel): 0x514700
     * @note[short] Windows: 0x3dc3c0
     * @note[short] Android
     */
    void onTop(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x46f648
     * @note[short] MacOS (Intel): 0x514720
     * @note[short] Windows: 0x3dc3e0
     * @note[short] Android
     */
    void onWeek(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x46f80c
     * @note[short] MacOS (Intel): 0x5148f0
     * @note[short] Windows: 0x3dc2e0
     * @note[short] Android
     */
    void refreshTabs();

    /**
     * @note[short] MacOS (ARM): 0x46f434
     * @note[short] MacOS (Intel): 0x514510
     * @note[short] Windows: 0x3dc440
     * @note[short] Android
     */
    void selectLeaderboard(LeaderboardType type, LeaderboardStat stat);

    /**
     * @note[short] MacOS (ARM): 0x46f6d4
     * @note[short] MacOS (Intel): 0x5147b0
     * @note[short] Windows: 0x3dc170
     * @note[short] Android
     */
    void setupLevelBrowser(cocos2d::CCArray* scores);

    /**
     * @note[short] MacOS (ARM): 0x46ee54
     * @note[short] MacOS (Intel): 0x2ad030
     * @note[short] Windows: 0x3db800
     * @note[short] Android
     */
    void setupTabs();

    /**
     * @note[short] MacOS (ARM): 0x46f8b0
     * @note[short] MacOS (Intel): 0x514990
     * @note[short] Windows: 0x3dc7b0
     * @note[short] Android
     */
    void toggleTabButtons();
    GJListLayer* m_list;
    cocos2d::CCArray* m_userScores;
    LeaderboardType m_type;
    LeaderboardStat m_stat;
    CCMenuItemToggler* m_topBtn;
    CCMenuItemToggler* m_globalBtn;
    CCMenuItemToggler* m_creatorsBtn;
    CCMenuItemToggler* m_friendsBtn;
    LoadingCircle* m_circle;
    TextArea* m_noInternet;
    cocos2d::CCArray* m_tabs;
    cocos2d::CCArray* m_modeButtons;
};

#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>
#include <Geode/binding/GJDailyLevelDelegate.hpp>
#include <Geode/binding/LevelDownloadDelegate.hpp>
#include <Geode/mapping/CCPoint.hpp>

class DailyLevelPage : public FLAlertLayer, public FLAlertLayerProtocol, public GJDailyLevelDelegate, public LevelDownloadDelegate {
public:
    static constexpr auto CLASS_NAME = "DailyLevelPage";
    GEODE_CUSTOM_CONSTRUCTOR_GD(DailyLevelPage, FLAlertLayer)

    /**
     * @note[short] Windows: 0x16f0a0
     * @note[short] iOS: 0x24eb58
     * @note[short] Android: Rebinded
     */
    virtual  ~DailyLevelPage();

    /**
     * @note[short] Windows: 0x16f2e0
     * @note[short] Android
     */
    static DailyLevelPage* create(GJTimedLevelType type);

    /**
     * @note[short] MacOS (ARM): 0x1c60a0
     * @note[short] MacOS (Intel): 0x2169a0
     * @note[short] Windows: 0x46290
     * @note[short] iOS: 0x25072c
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x1c6004
     * @note[short] MacOS (Intel): 0x216910
     * @note[short] Windows: 0x9f0a0
     * @note[short] iOS: 0x250720
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x1c5e74
     * @note[short] MacOS (Intel): 0x216770
     * @note[short] Windows: 0x9eec0
     * @note[short] iOS: 0x2505a0
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x1c5ffc
     * @note[short] MacOS (Intel): 0x2168f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x250718
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x1c5520
     * @note[short] MacOS (Intel): 0x215dd0
     * @note[short] Windows: 0x170880
     * @note[short] iOS: 0x24fde8
     * @note[short] Android
     */
    virtual void dailyStatusFinished(GJTimedLevelType type);

    /**
     * @note[short] MacOS (ARM): 0x1c592c
     * @note[short] MacOS (Intel): 0x216220
     * @note[short] Windows: 0x170b90
     * @note[short] iOS: 0x250138
     * @note[short] Android
     */
    virtual void dailyStatusFailed(GJTimedLevelType type, GJErrorCode errorType);

    /**
     * @note[short] MacOS (ARM): 0x1c5b98
     * @note[short] MacOS (Intel): 0x216470
     * @note[short] Windows: 0x170e00
     * @note[short] iOS: 0x250314
     * @note[short] Android
     */
    virtual void levelDownloadFinished(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x1c5c54
     * @note[short] MacOS (Intel): 0x216540
     * @note[short] Windows: 0x170f50
     * @note[short] iOS: 0x2503d0
     * @note[short] Android
     */
    virtual void levelDownloadFailed(int response);

    /**
     * @note[short] MacOS (ARM): 0x1c60d8
     * @note[short] MacOS (Intel): 0x2169e0
     * @note[short] Windows: 0x172590
     * @note[short] Android
     */
    void claimLevelReward(DailyLevelNode* node, GJGameLevel* level, cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (ARM): 0x1c533c
     * @note[short] MacOS (Intel): 0x215be0
     * @note[short] Windows: 0x1711c0
     * @note[short] Android
     */
    void createDailyNode(GJGameLevel* level, bool instant, float delay, bool isNew);

    /**
     * @note[short] MacOS (Intel): 0x216590
     * @note[short] Windows: 0x1710c0
     * @note[short] Android
     */
    void createNodeIfLoaded();

    /**
     * @note[short] MacOS (ARM): 0x295c20
     * @note[short] MacOS (Intel): 0x216120
     * @note[short] Windows: 0x171010
     * @note[short] Android
     */
    void downloadAndCreateNode();

    /**
     * @note[short] MacOS (ARM): 0x1c578c
     * @note[short] MacOS (Intel): 0x216060
     * @note[short] Windows: 0x1714b0
     * @note[short] Android
     */
    void exitDailyNode(DailyLevelNode* node, float delay);

    /**
     * @note[short] MacOS (ARM): 0x1c5e00
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    int getDailyTime();

    /**
     * @note[short] MacOS (ARM): 0x1c4ac4
     * @note[short] MacOS (Intel): 0x215560
     * @note[short] Windows: 0x171580
     * @note[short] Android
     */
    std::string getDailyTimeString(int timeLeft);

    /**
     * @note[short] MacOS (ARM): 0x1c3b34
     * @note[short] MacOS (Intel): 0x2148d0
     * @note[short] Windows: 0x16f430
     * @note[short] Android
     */
    bool init(GJTimedLevelType type);

    /**
     * @note[short] Windows: 0x9f060
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x806fd0
     * @note[short] Windows: 0x172ab0
     * @note[short] Android
     */
    void onTheSafe(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1c6384
     * @note[short] MacOS (Intel): 0x216c60
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void refreshDailyPage();

    /**
     * @note[short] MacOS (ARM): 0x1c6290
     * @note[short] MacOS (Intel): 0x216b60
     * @note[short] Windows: 0x172870
     * @note[short] Android
     */
    void skipDailyLevel(DailyLevelNode* node, GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x1c5b28
     * @note[short] MacOS (Intel): 0x2163f0
     * @note[short] Windows: 0x170f70
     * @note[short] Android
     */
    void tryGetDailyStatus();

    /**
     * @note[short] MacOS (ARM): 0x1c50e4
     * @note[short] MacOS (Intel): 0x2159b0
     * @note[short] Windows: 0x172210
     * @note[short] Android
     */
    void updateTimers(float dt);
    cocos2d::CCLabelBMFont* m_timeLabel;
    LoadingCircle* m_timeCircle;
    LoadingCircle* m_nodeCircle;
    bool m_gettingDailyStatus;
    DailyLevelNode* m_dailyNode;
    bool m_downloadStarted;
    GJTimedLevelType m_type;
    int m_downloadLevelID;
};

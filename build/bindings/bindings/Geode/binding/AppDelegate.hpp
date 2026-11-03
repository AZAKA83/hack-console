#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCApplication.hpp>
#include <Geode/mapping/CCSceneDelegate.hpp>

class AppDelegate : public cocos2d::CCApplication, public cocos2d::CCSceneDelegate {
public:
    static constexpr auto CLASS_NAME = "AppDelegate";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(AppDelegate, cocos2d::CCApplication)

    /**
     * @note[short] MacOS (ARM): 0x649374
     * @note[short] MacOS (Intel): 0x73b8f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static AppDelegate* get();

    /**
     * @note[short] MacOS (ARM): 0x6491e8
     * @note[short] MacOS (Intel): 0x73b760
     * @note[short] Windows: 0x981f0
     * @note[short] iOS: 0x306f5c
     * @note[short] Android
     */
    virtual bool applicationDidFinishLaunching();

    /**
     * @note[short] MacOS (ARM): 0x6494b0
     * @note[short] MacOS (Intel): 0x73ba60
     * @note[short] Windows: 0x98630
     * @note[short] iOS: 0x307190
     * @note[short] Android
     */
    virtual void applicationDidEnterBackground();

    /**
     * @note[short] MacOS (ARM): 0x649588
     * @note[short] MacOS (Intel): 0x73bb40
     * @note[short] Windows: 0x98810
     * @note[short] iOS: 0x3072b4
     * @note[short] Android
     */
    virtual void applicationWillEnterForeground();

    /**
     * @note[short] MacOS (ARM): 0x649398
     * @note[short] MacOS (Intel): 0x73b920
     * @note[short] Windows: 0x98560
     * @note[short] iOS: 0x3070dc
     * @note[short] Android
     */
    virtual void applicationWillBecomeActive();

    /**
     * @note[short] MacOS (ARM): 0x6493ac
     * @note[short] MacOS (Intel): 0x73b940
     * @note[short] Windows: 0x985b0
     * @note[short] iOS: 0x3070f0
     * @note[short] Android
     */
    virtual void applicationWillResignActive();

    /**
     * @note[short] MacOS (ARM): 0x64947c
     * @note[short] MacOS (Intel): 0x73ba20
     * @note[short] Windows: 0x985c0
     * @note[short] iOS: 0x30715c
     * @note[short] Android
     */
    virtual void applicationWillTerminate();

    /**
     * @note[short] MacOS (ARM): 0x64969c
     * @note[short] MacOS (Intel): 0x73bc70
     * @note[short] Windows: 0x98ad0
     * @note[short] iOS: 0x3073b0
     * @note[short] Android
     */
    virtual void trySaveGame(bool force);

    /**
     * @note[short] MacOS (ARM): 0x6497b0
     * @note[short] MacOS (Intel): 0x73bda0
     * @note[short] Windows: 0x98cc0
     * @note[short] iOS: 0x30739c
     * @note[short] Android
     */
    virtual void willSwitchToScene(cocos2d::CCScene* scene);

    /**
     * @note[short] MacOS (Intel): 0x73b8d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3070a4
     * @note[short] Android
     */
    float bgScale();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void checkSound();

    /**
     * @note[short] MacOS (Intel): 0x73be10
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void hideLoadingCircle();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3070bc
     * @note[short] Android
     */
    void loadingIsFinished();

    /**
     * @note[short] Windows: 0x989f0
     * @note[short] Android
     */
    void pauseGame();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void pauseSound();

    /**
     * @note[short] MacOS (ARM): 0x6490f0
     * @note[short] MacOS (Intel): 0x73b650
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void platformShutdown();

    /**
     * @note[short] Windows: 0x9999999
     * @note[short] Android
     */
    void resumeSound();

    /**
     * @note[short] MacOS (ARM): 0x421e10
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void setIdleTimerDisabled(bool disabled);

    /**
     * @note[short] MacOS (ARM): 0x6490f4
     * @note[short] MacOS (Intel): 0x26aa10
     * @note[short] Windows: 0x97cc0
     * @note[short] iOS: 0x306e04
     * @note[short] Android
     */
    void setupGLView();

    /**
     * @note[short] MacOS (ARM): 0x649810
     * @note[short] MacOS (Intel): 0x73be00
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void showLoadingCircle(bool unk1, bool unk2, bool unk3);
    bool m_glViewSetup;
    bool m_gamePaused;
    cocos2d::CCScene* m_runningScene;
    bool m_loadingFinished;
    bool m_managersLoadedUnused;
    bool m_ios;
    bool m_unk0eb;
    bool m_unk0ec;
    bool m_needsSafeArea;
    double m_saveTime;
};

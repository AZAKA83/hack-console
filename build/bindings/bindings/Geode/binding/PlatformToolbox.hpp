#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/vector.hpp>

class PlatformToolbox {
public:
    static constexpr auto CLASS_NAME = "PlatformToolbox";

    /**
     * @note[short] MacOS (ARM): 0x420ef4
     * @note[short] MacOS (Intel): 0x4bce00
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static void activateGameCenter();

    /**
     * @note[short] MacOS (ARM): 0x421af0
     * @note[short] MacOS (Intel): 0x4bdc30
     * @note[short] Windows: 0x8bc20
     * @note[short] Android
     */
    static bool copyToClipboard(std::string str);

    /**
     * @note[short] MacOS (ARM): 0x421400
     * @note[short] MacOS (Intel): 0x4bd450
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static bool doesFileExist(std::string path);

    /**
     * @note[short] MacOS (ARM): 0x4214b8
     * @note[short] MacOS (Intel): 0x4bd540
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static void downloadAndSavePromoImage(std::string url, std::string path);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static void gameDidSave();

    /**
     * @note[short] Android
     */
    static std::string getClipboardString();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static float getDeviceRefreshRate();

    /**
     * @note[short] MacOS (ARM): 0x421d18
     * @note[short] MacOS (Intel): 0x4bdf20
     * @note[short] Windows: 0x8bb90
     * @note[short] Android
     */
    static cocos2d::CCSize getDisplaySize();

    /**
     * @note[short] MacOS (ARM): 0x421a08
     * @note[short] MacOS (Intel): 0x4bdb20
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static std::string getRawPath(char const* path);

    /**
     * @note[short] MacOS (ARM): 0x420ddc
     * @note[short] MacOS (Intel): 0x4bcc50
     * @note[short] Windows: 0x8b7f0
     * @note[short] Android
     */
    static std::string getUniqueUserID();

    /**
     * @note[short] MacOS (ARM): 0x420eb8
     * @note[short] MacOS (Intel): 0x4bcd30
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static std::string getUserID();

    /**
     * @note[short] MacOS (ARM): 0x420f48
     * @note[short] MacOS (Intel): 0x4bcea0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1f9654
     * @note[short] Android
     */
    static void hideCursor();

    /**
     * @note[short] MacOS (ARM): 0x421de4
     * @note[short] MacOS (Intel): 0x4be070
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1f9620
     * @note[short] Android
     */
    static bool isControllerConnected();

    /**
     * @note[short] MacOS (ARM): 0x4213dc
     * @note[short] MacOS (Intel): 0x4bd420
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static bool isHD();

    /**
     * @note[short] MacOS (ARM): 0x420ef8
     * @note[short] MacOS (Intel): 0x4bce10
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static bool isLocalPlayerAuthenticated();

    /**
     * @note[short] MacOS (ARM): 0x420ec4
     * @note[short] MacOS (Intel): 0x4bcd60
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1f920c
     * @note[short] Android
     */
    static bool isLowMemoryDevice();

    /**
     * @note[short] MacOS (ARM): 0x420ebc
     * @note[short] MacOS (Intel): 0x4bcd50
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static bool isNetworkAvailable();

    /**
     * @note[short] MacOS (ARM): 0x420f00
     * @note[short] MacOS (Intel): 0x4bce20
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static bool isSignedInGooglePlay();

    /**
     * @note[short] MacOS (ARM): 0x421278
     * @note[short] MacOS (Intel): 0x4bd270
     * @note[short] Android
     */
    static void loadAndDecryptFileToString(char const* dirPath, char const* fileName, std::string& str);

    /**
     * @note[short] MacOS (ARM): 0x420ef0
     * @note[short] MacOS (Intel): 0x4bcdf0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static void logEvent(char const* event);

    /**
     * @note[short] MacOS (ARM): 0x420ee0
     * @note[short] MacOS (Intel): 0x4bcdc0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static void onGameLaunch();

    /**
     * @note[short] MacOS (ARM): 0x420ed0
     * @note[short] MacOS (Intel): 0x4bcd80
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static void onNativePause();

    /**
     * @note[short] MacOS (ARM): 0x420ed4
     * @note[short] MacOS (Intel): 0x4bcd90
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static void onNativeResume();

    /**
     * @note[short] MacOS (ARM): 0x420ed8
     * @note[short] MacOS (Intel): 0x4bcda0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static void onToggleKeyboard();

    /**
     * @note[short] MacOS (ARM): 0x40c6d8
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static void openAppPage();

    /**
     * @note[short] Android
     */
    static void pickImportFiles(PlatformFileDelegate* p0);

    /**
     * @note[short] Android
     */
    static void platformShutdown();

    /**
     * @note[short] Android
     */
    static void refreshWindow();

    /**
     * @note[short] MacOS (ARM): 0x420f10
     * @note[short] MacOS (Intel): 0x4bce50
     * @note[short] Android
     */
    static void reportAchievementWithID(char const* key, int percent);

    /**
     * @note[short] MacOS (ARM): 0x420ecc
     * @note[short] MacOS (Intel): 0x4bcd70
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static void reportLoadingFinished();

    /**
     * @note[short] MacOS (ARM): 0x421cd0
     * @note[short] MacOS (Intel): 0x4bde90
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1f95d8
     * @note[short] Android
     */
    static void resizeWindow(float width, float height);

    /**
     * @note[short] MacOS (ARM): 0x4210f4
     * @note[short] Android
     */
    static void saveAndEncryptStringToFile(std::string& str, char const* fileName, char const* dirPath);

    /**
     * @note[short] MacOS (ARM): 0x420f44
     * @note[short] MacOS (Intel): 0x4bce90
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static void sendMail(char const* title, char const* content, char const* address);

    /**
     * @note[short] MacOS (ARM): 0x420ee4
     * @note[short] MacOS (Intel): 0x4bcdd0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static void setBlockBackButton(bool block);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1f9228
     * @note[short] Android
     */
    static void setKeyboardInputFlags(int flags);

    /**
     * @note[short] MacOS (ARM): 0x420edc
     * @note[short] MacOS (Intel): 0x4bcdb0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static void setKeyboardState(bool state);

    /**
     * @note[short] Android
     */
    static void shareFiles(std::vector<std::string> const& p0, PlatformFileDelegate* p1);

    /**
     * @note[short] MacOS (ARM): 0x420ee8
     * @note[short] MacOS (Intel): 0x4bcde0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static bool shouldResumeSound();

    /**
     * @note[short] MacOS (ARM): 0x420f40
     * @note[short] MacOS (Intel): 0x4bce80
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static void showAchievements();

    /**
     * @note[short] MacOS (ARM): 0x420f60
     * @note[short] MacOS (Intel): 0x4bcec0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static void showCursor();

    /**
     * @note[short] MacOS (ARM): 0x420f08
     * @note[short] MacOS (Intel): 0x4bce30
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static void signInGooglePlay();

    /**
     * @note[short] MacOS (ARM): 0x420f0c
     * @note[short] MacOS (Intel): 0x4bce40
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static void signOutGooglePlay();

    /**
     * @note[short] MacOS (ARM): 0x4214bc
     * @note[short] MacOS (Intel): 0x4bd550
     * @note[short] Android
     */
    static cocos2d::CCSprite* spriteFromSavedFile(std::string path);

    /**
     * @note[short] MacOS (Intel): 0x4be0e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static void toggleCallGLFinish(bool enable);

    /**
     * @note[short] MacOS (ARM): 0x421e04
     * @note[short] MacOS (Intel): 0x4be0c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static void toggleCPUSleepMode(bool enable);

    /**
     * @note[short] MacOS (Intel): 0x4be0f0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static void toggleForceTimer(bool enable);

    /**
     * @note[short] MacOS (ARM): 0x421c7c
     * @note[short] MacOS (Intel): 0x4bde20
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1f95d4
     * @note[short] Android
     */
    static void toggleFullScreen(bool fullscreen, bool borderless, bool fix);

    /**
     * @note[short] MacOS (ARM): 0x421ccc
     * @note[short] MacOS (Intel): 0x4bde80
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1f99b0
     * @note[short] Android
     */
    static void toggleLockCursor(bool isLocked);

    /**
     * @note[short] MacOS (ARM): 0x421db4
     * @note[short] MacOS (Intel): 0x4be020
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static void toggleMouseControl(bool enable);

    /**
     * @note[short] MacOS (Intel): 0x4be100
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static void toggleSmoothFix(bool enable);

    /**
     * @note[short] MacOS (ARM): 0x421e08
     * @note[short] MacOS (Intel): 0x4be0d0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static void toggleVerticalSync(bool enable);

    /**
     * @note[short] MacOS (ARM): 0x40c6d4
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static void tryShowRateDialog(std::string gameName);

    /**
     * @note[short] MacOS (ARM): 0x421d94
     * @note[short] MacOS (Intel): 0x4bdfe0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static void updateMouseControl();

    /**
     * @note[short] MacOS (ARM): 0x421d14
     * @note[short] MacOS (Intel): 0x4bdf10
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static void updateWindowedSize(float width, float height);
};

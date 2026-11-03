#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>


class AdToolbox {
public:
    static constexpr auto CLASS_NAME = "AdToolbox";

    /**
     * @note[short] MacOS (ARM): 0x89f84
     * @note[short] MacOS (Intel): 0x99d30
     * @note[short] Android
     */
    static void cacheInterstitial();

    /**
     * @note[short] MacOS (ARM): 0x89f94
     * @note[short] MacOS (Intel): 0x99d60
     * @note[short] Android
     */
    static void cacheRewardedVideo();

    /**
     * @note[short] MacOS (ARM): 0x89f7c
     * @note[short] MacOS (Intel): 0x99d10
     * @note[short] Android
     */
    static void disableBanner();

    /**
     * @note[short] MacOS (ARM): 0x89f78
     * @note[short] MacOS (Intel): 0x99d00
     * @note[short] Android
     */
    static void enableBanner();

    /**
     * @note[short] MacOS (ARM): 0x89f74
     * @note[short] MacOS (Intel): 0x99cf0
     * @note[short] Android
     */
    static void enableBannerNoRefresh();

    /**
     * @note[short] MacOS (ARM): 0x89f88
     * @note[short] MacOS (Intel): 0x99d40
     * @note[short] Android
     */
    static bool hasCachedInterstitial();

    /**
     * @note[short] MacOS (ARM): 0x89f98
     * @note[short] MacOS (Intel): 0x99d70
     * @note[short] Android
     */
    static bool hasCachedRewardedVideo();

    /**
     * @note[short] MacOS (ARM): 0x89fa4
     * @note[short] MacOS (Intel): 0x1f1e0
     * @note[short] Android
     */
    static bool isShowingAd();

    /**
     * @note[short] MacOS (ARM): 0x89f70
     * @note[short] MacOS (Intel): 0x99ce0
     * @note[short] Android
     */
    static void queueRefreshBanner();

    /**
     * @note[short] MacOS (ARM): 0x89f6c
     * @note[short] MacOS (Intel): 0x99cd0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x395604
     * @note[short] Android
     */
    static void setupAds();

    /**
     * @note[short] MacOS (ARM): 0x89fa0
     * @note[short] MacOS (Intel): 0x99d80
     * @note[short] Android
     */
    static void showDebug();

    /**
     * @note[short] MacOS (ARM): 0x89f80
     * @note[short] MacOS (Intel): 0x99d20
     * @note[short] Android
     */
    static void showInterstitial();

    /**
     * @note[short] MacOS (ARM): 0x89f90
     * @note[short] MacOS (Intel): 0x99d50
     * @note[short] Android
     */
    static void showRewardedVideo();
};

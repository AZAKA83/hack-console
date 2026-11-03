#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>
#include <Geode/binding/GJPurchaseDelegate.hpp>

class GJPathPage : public FLAlertLayer, public FLAlertLayerProtocol, public GJPurchaseDelegate {
public:
    static constexpr auto CLASS_NAME = "GJPathPage";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJPathPage, FLAlertLayer)

    /**
     * @note[short] Windows: 0x392280
     * @note[short] iOS: 0x45f68c
     * @note[short] Android: Rebinded
     */
    virtual  ~GJPathPage();

    /**
     * @note[short] MacOS (ARM): 0x27f1ac
     * @note[short] MacOS (Intel): 0x2e8d00
     * @note[short] Windows: 0x3931f0
     * @note[short] Android
     */
    static GJPathPage* create(int path, GJPathsLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x2837a8
     * @note[short] MacOS (Intel): 0x2ed890
     * @note[short] Windows: 0x46290
     * @note[short] iOS: 0x462158
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x283664
     * @note[short] MacOS (Intel): 0x2ed750
     * @note[short] Windows: 0x396e60
     * @note[short] iOS: 0x46214c
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x2837e0
     * @note[short] MacOS (Intel): 0x2ed8d0
     * @note[short] Windows: 0x9eec0
     * @note[short] iOS: 0x462190
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x281dac
     * @note[short] MacOS (Intel): 0x2ebb80
     * @note[short] Windows: 0x395250
     * @note[short] iOS: 0x46102c
     * @note[short] Android
     */
    virtual void didPurchaseItem(GJStoreItem* item);

    /**
     * @note[short] MacOS (ARM): 0x2800bc
     * @note[short] MacOS (Intel): 0x2e9e00
     * @note[short] Windows: 0x393330
     * @note[short] Android
     */
    bool init(int path, GJPathsLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x281d88
     * @note[short] MacOS (Intel): 0x2ebb50
     * @note[short] Windows: 0x394fd0
     * @note[short] Android
     */
    void onActivatePath(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x281a20
     * @note[short] MacOS (Intel): 0x2eb820
     * @note[short] Windows: 0x396dc0
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1ec260
     * @note[short] MacOS (Intel): 0x2eb8b0
     * @note[short] Windows: 0x395040
     * @note[short] Android
     */
    void onIconInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x281c78
     * @note[short] MacOS (Intel): 0x2eba60
     * @note[short] Windows: 0x395260
     * @note[short] Android
     */
    void onUnlock(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x281db0
     * @note[short] MacOS (Intel): 0x2ebb90
     * @note[short] Windows: 0x395ab0
     * @note[short] Android
     */
    void playUnlockAnimation();

    /**
     * @note[short] Windows: 0x395460
     * @note[short] Android
     */
    void showCantAffordMessage(GJStoreItem* item);

    /**
     * @note[short] MacOS (Intel): 0x2ecbd0
     * @note[short] Windows: 0x396c90
     * @note[short] Android
     */
    void unlockAnimationFinished();

    /**
     * @note[short] MacOS (ARM): 0x282a10
     * @note[short] MacOS (Intel): 0x2ec8e0
     * @note[short] Windows: 0x396110
     * @note[short] Android
     */
    void unlockAnimationStep2();

    /**
     * @note[short] MacOS (ARM): 0x282db0
     * @note[short] MacOS (Intel): 0x2ecd30
     * @note[short] Windows: 0x3963a0
     * @note[short] Android
     */
    void unlockAnimationStep3();
    GJPathsLayer* m_pathsLayer;
    int m_pathNumber;
    bool m_animationPlaying;
    int m_dialogIndex;
};

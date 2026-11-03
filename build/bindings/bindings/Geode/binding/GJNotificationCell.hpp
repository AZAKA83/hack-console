#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/TableViewCell.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>

class GJNotificationCell : public TableViewCell, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "GJNotificationCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJNotificationCell, TableViewCell)

    /**
     * @note[short] Android: Rebinded
     */
     GJNotificationCell(char const* p0, float p1, float p2);

    /**
     * @note[short] Windows: 0x15ac70
     * @note[short] iOS: 0x13a758
     * @note[short] Android: Rebinded
     */
    virtual  ~GJNotificationCell();

    /**
     * @note[short] MacOS (ARM): 0x1ec258
     * @note[short] MacOS (Intel): 0x241490
     * @note[short] Windows: 0x3ff70
     * @note[short] iOS: 0x13a790
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x1eca8c
     * @note[short] MacOS (Intel): 0x241cd0
     * @note[short] Windows: 0x1487a0
     * @note[short] iOS: 0x13ad28
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x1eca14
     * @note[short] MacOS (Intel): 0x241c50
     * @note[short] Windows: 0x15c4c0
     * @note[short] iOS: 0x13acdc
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] Windows: 0x15b0d0
     * @note[short] Android
     */
    void loadFromNotification(GJNotification* p0);

    /**
     * @note[short] Windows: 0x15c810
     * @note[short] Android
     */
    void onClaimReward(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x15c1a0
     * @note[short] Android
     */
    void onMute(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x15c890
     * @note[short] Android
     */
    void onShowBody(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x15c6e0
     * @note[short] Android
     */
    void onViewTarget(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn refreshChest();

    /**
     * @note[short] Android
     */
    void updateBGColor(int p0);
    GJNotification* m_notification;
    CCMenuItemSpriteExtra* m_claimBtn;
};

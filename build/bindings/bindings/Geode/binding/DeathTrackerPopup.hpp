#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/VirtualRowSource.hpp>
#include <Geode/binding/SetIDPopupDelegate.hpp>
#include <Geode/mapping/ccTypes.hpp>
#include <Geode/mapping/enumKeyCodes.hpp>
#include <Geode/mapping/vector.hpp>

class DeathTrackerPopup : public FLAlertLayer, public VirtualRowSource, public SetIDPopupDelegate {
public:
    static constexpr auto CLASS_NAME = "DeathTrackerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(DeathTrackerPopup, FLAlertLayer)

    /**
     * @note[short] Windows: 0x103af0
     * @note[short] iOS: 0x4c0fb0
     * @note[short] Android: Rebinded
     */
    virtual  ~DeathTrackerPopup();

    /**
     * @note[short] MacOS (ARM): 0x7b8f84
     * @note[short] MacOS (Intel): 0x8ca8f0
     * @note[short] Windows: 0x104370
     * @note[short] Android
     */
    static DeathTrackerPopup* create(GJGameLevel* p0);

    /**
     * @note[short] MacOS (ARM): 0x7c541c
     * @note[short] MacOS (Intel): 0x8d8230
     * @note[short] Windows: 0x10e900
     * @note[short] iOS: 0x4c0ca8
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x7c5564
     * @note[short] MacOS (Intel): 0x8d83a0
     * @note[short] Windows: 0x10eac0
     * @note[short] iOS: 0x4c0de8
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x7c56ac
     * @note[short] MacOS (Intel): 0x8d84d0
     * @note[short] Windows: 0x10eb70
     * @note[short] iOS: 0x4c0e80
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x7c57f4
     * @note[short] MacOS (Intel): 0x8d8600
     * @note[short] Windows: 0x10ec00
     * @note[short] iOS: 0x4c0f18
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x7c5340
     * @note[short] MacOS (Intel): 0x8d8100
     * @note[short] Windows: 0x10e8c0
     * @note[short] iOS: 0x4c0c78
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x7c534c
     * @note[short] MacOS (Intel): 0x8d8130
     * @note[short] Windows: 0x10e8d0
     * @note[short] iOS: 0x4c0c84
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes key, double timestamp);

    /**
     * @note[short] MacOS (ARM): 0x7c52bc
     * @note[short] MacOS (Intel): 0x8d8080
     * @note[short] Windows: 0xc39c0
     * @note[short] iOS: 0x4c0bfc
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x7c5240
     * @note[short] MacOS (Intel): 0x8d7ff0
     * @note[short] Windows: 0x10e600
     * @note[short] iOS: 0x4c0b80
     * @note[short] Android
     */
    virtual void setIDPopupClosed(SetIDPopup* p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x7c46a0
     * @note[short] MacOS (Intel): 0x8d73d0
     * @note[short] Windows: 0x10ccc0
     * @note[short] iOS: 0x4c052c
     * @note[short] Android
     */
    virtual int virtualRowCount();

    /**
     * @note[short] MacOS (ARM): 0x7c46dc
     * @note[short] MacOS (Intel): 0x8d7410
     * @note[short] Windows: 0x10ccf0
     * @note[short] iOS: 0x4c0568
     * @note[short] Android
     */
    virtual int virtualRowHeight(int p0);

    /**
     * @note[short] MacOS (ARM): 0x7c4704
     * @note[short] MacOS (Intel): 0x8d7450
     * @note[short] Windows: 0x10cd10
     * @note[short] iOS: 0x4c0590
     * @note[short] Android
     */
    virtual void mountVirtualRow(int p0, cocos2d::CCNode* p1, cocos2d::CCMenu* p2);

    /**
     * @note[short] Android
     */
    TodoReturn addRow(cocos2d::CCNode* p0, std::string const& p1, float p2, cocos2d::ccColor3B p3, float p4);

    /**
     * @note[short] Android
     */
    TodoReturn buildAttemptLine();

    /**
     * @note[short] Windows: 0x10c270
     * @note[short] Android
     */
    TodoReturn buildHistory();

    /**
     * @note[short] Android
     */
    TodoReturn buildList();

    /**
     * @note[short] Windows: 0x107e10
     * @note[short] Android
     */
    TodoReturn buildStatRow(std::vector<DTStatSeg> const& p0, cocos2d::CCNode* p1);

    /**
     * @note[short] Android
     */
    TodoReturn countsForScope(std::vector<int>& p0);

    /**
     * @note[short] Android
     */
    TodoReturn dtScrollKey();

    /**
     * @note[short] Windows: 0x1045d0
     * @note[short] Android
     */
    bool init(GJGameLevel* p0);

    /**
     * @note[short] Windows: 0x10e660
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x10d890
     * @note[short] Android
     */
    void onJumpCurrent(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x10e4c0
     * @note[short] Android
     */
    void onJumpSession(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x10e4a0
     * @note[short] Android
     */
    void onJumpSummary(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x10d810
     * @note[short] Android
     */
    void onNextSession(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x10da80
     * @note[short] Android
     */
    void onOptions(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x10de50
     * @note[short] Android
     */
    void onPanelButton(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x10d780
     * @note[short] Android
     */
    void onPrevSession(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x10d8c0
     * @note[short] Android
     */
    void onToggleGlobal(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn parseGlobal();

    /**
     * @note[short] Android
     */
    TodoReturn parseSessions();

    /**
     * @note[short] Windows: 0x108b00
     * @note[short] Android
     */
    TodoReturn refreshGlobal();

    /**
     * @note[short] Windows: 0x106a10
     * @note[short] Android
     */
    TodoReturn refreshView();

    /**
     * @note[short] Windows: 0x10dbe0
     * @note[short] Android
     */
    void setView(int p0);

    /**
     * @note[short] Windows: 0x10dfb0
     * @note[short] Android
     */
    TodoReturn updatePanel();
};

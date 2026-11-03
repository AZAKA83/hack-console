#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/PagedListPopup.hpp>
#include <Geode/binding/ThreadMessageDelegate.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>

class InvitesPopup : public PagedListPopup, public ThreadMessageDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "InvitesPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(InvitesPopup, PagedListPopup)

    /**
     * @note[short] Windows: 0xd3d60
     * @note[short] iOS: 0x50e630
     * @note[short] Android: Rebinded
     */
    virtual  ~InvitesPopup();

    /**
     * @note[short] Android
     */
    static InvitesPopup* create();

    /**
     * @note[short] MacOS (ARM): 0x82bc24
     * @note[short] MacOS (Intel): 0x94bc80
     * @note[short] Windows: 0xf6b60
     * @note[short] iOS: 0x50e668
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x82dd6c
     * @note[short] MacOS (Intel): 0x94e520
     * @note[short] Windows: 0x5a3a0
     * @note[short] iOS: 0x510140
     * @note[short] Android
     */
    virtual int requestPage(int p0);

    /**
     * @note[short] MacOS (ARM): 0x82dc34
     * @note[short] MacOS (Intel): 0x94e3e0
     * @note[short] Windows: 0xf7380
     * @note[short] iOS: 0x50fffc
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x82e408
     * @note[short] MacOS (Intel): 0x94ec40
     * @note[short] Windows: 0xf9730
     * @note[short] iOS: 0x5106b0
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x82dd74
     * @note[short] MacOS (Intel): 0x94e530
     * @note[short] Windows: 0xf7570
     * @note[short] iOS: 0x510148
     * @note[short] Android
     */
    virtual void threadInvitesFinished(cocos2d::CCArray* p0);

    /**
     * @note[short] MacOS (ARM): 0x82de04
     * @note[short] MacOS (Intel): 0x94e5c0
     * @note[short] Windows: 0xf75d0
     * @note[short] iOS: 0x510190
     * @note[short] Android
     */
    virtual void threadInvitesFailed();

    /**
     * @note[short] MacOS (ARM): 0x82e5d0
     * @note[short] MacOS (Intel): 0x94ee10
     * @note[short] Windows: 0xf98c0
     * @note[short] iOS: 0x510874
     * @note[short] Android
     */
    virtual void threadUpdateFinished(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x82e848
     * @note[short] MacOS (Intel): 0x94f0d0
     * @note[short] Windows: 0xf9bd0
     * @note[short] iOS: 0x510a74
     * @note[short] Android
     */
    virtual void threadUpdateFailed(int p0, int p1);

    /**
     * @note[short] Android
     */
    TodoReturn acceptInvite(GJMessageThread* p0);

    /**
     * @note[short] Windows: 0xf7a30
     * @note[short] Android
     */
    TodoReturn buildRows();

    /**
     * @note[short] Windows: 0xf9580
     * @note[short] Android
     */
    TodoReturn declineInvite(GJMessageThread* p0);

    /**
     * @note[short] Android
     */
    TodoReturn layoutTitleInfo();

    /**
     * @note[short] Windows: 0xf9370
     * @note[short] Android
     */
    void onAccept(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xf74f0
     * @note[short] Android
     */
    void onClearSearch(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xf9550
     * @note[short] Android
     */
    void onDecline(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xf7200
     * @note[short] Android
     */
    void onToggleIgnored(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xf9190
     * @note[short] Android
     */
    void onViewInviter(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xf91d0
     * @note[short] Android
     */
    void onViewMembers(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xf9220
     * @note[short] Android
     */
    void onViewRequest(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn removeInviteRow(int p0);
};

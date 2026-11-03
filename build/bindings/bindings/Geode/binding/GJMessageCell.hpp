#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/TableViewCell.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>
#include <Geode/binding/UploadPopupDelegate.hpp>
#include <Geode/binding/UploadActionDelegate.hpp>

class GJMessageCell : public TableViewCell, public FLAlertLayerProtocol, public UploadPopupDelegate, public UploadActionDelegate {
public:
    static constexpr auto CLASS_NAME = "GJMessageCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJMessageCell, TableViewCell)

    /**
     * @note[short] MacOS (ARM): 0x1ecdbc
     * @note[short] MacOS (Intel): 0x242180
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
     GJMessageCell(char const* identifier, float width, float height);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x13ae70
     * @note[short] Android: Rebinded
     */
     ~GJMessageCell();

    /**
     * @note[short] MacOS (ARM): 0x1ece20
     * @note[short] MacOS (Intel): 0x242230
     * @note[short] Windows: 0x15ca80
     * @note[short] iOS: 0x13aea8
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x1ed10c
     * @note[short] MacOS (Intel): 0x242540
     * @note[short] Windows: 0x1487a0
     * @note[short] iOS: 0x13b0e4
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x1ed1b8
     * @note[short] MacOS (Intel): 0x242610
     * @note[short] Windows: 0x15d760
     * @note[short] iOS: 0x13b190
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x1ed31c
     * @note[short] MacOS (Intel): 0x2427a0
     * @note[short] Windows: 0x15d900
     * @note[short] iOS: 0x13b274
     * @note[short] Android
     */
    virtual void uploadActionFinished(int id, int response);

    /**
     * @note[short] MacOS (ARM): 0x1ed504
     * @note[short] MacOS (Intel): 0x242980
     * @note[short] Windows: 0x15daa0
     * @note[short] iOS: 0x13b378
     * @note[short] Android
     */
    virtual void uploadActionFailed(int id, int response);

    /**
     * @note[short] MacOS (ARM): 0x1ed66c
     * @note[short] MacOS (Intel): 0x242af0
     * @note[short] Windows: 0x15db70
     * @note[short] iOS: 0x13b410
     * @note[short] Android
     */
    virtual void onClosePopup(UploadActionPopup* popup);

    /**
     * @note[short] MacOS (ARM): 0x1de768
     * @note[short] MacOS (Intel): 0x2320e0
     * @note[short] Windows: 0x15caa0
     * @note[short] Android
     */
    void loadFromMessage(GJUserMessage* message);

    /**
     * @note[short] MacOS (ARM): 0x1ed080
     * @note[short] MacOS (Intel): 0x2424b0
     * @note[short] Windows: 0x15d470
     * @note[short] Android
     */
    void markAsRead();

    /**
     * @note[short] MacOS (ARM): 0x1ecf08
     * @note[short] MacOS (Intel): 0x242330
     * @note[short] Windows: 0x15d580
     * @note[short] Android
     */
    void onDeleteMessage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1ed04c
     * @note[short] Windows: 0x15d720
     * @note[short] Android
     */
    void onToggle(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1ece34
     * @note[short] MacOS (Intel): 0x242250
     * @note[short] Windows: 0x15d3c0
     * @note[short] Android
     */
    void onViewMessage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1ed014
     * @note[short] MacOS (Intel): 0x242450
     * @note[short] Windows: 0x15d540
     * @note[short] Android
     */
    void onViewProfile(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1e129c
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateBGColor(int index);

    /**
     * @note[short] MacOS (ARM): 0x1e259c
     * @note[short] MacOS (Intel): 0x236440
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateToggle();
    GJUserMessage* m_message;
    UploadActionPopup* m_popup;
    CCMenuItemToggler* m_toggler;
};

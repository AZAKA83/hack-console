#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/SetTextPopupDelegate.hpp>
#include <Geode/mapping/set.hpp>

class SFXFolderPickerPopup : public FLAlertLayer, public SetTextPopupDelegate {
public:
    static constexpr auto CLASS_NAME = "SFXFolderPickerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SFXFolderPickerPopup, FLAlertLayer)

    /**
     * @note[short] Windows: 0xc3c00
     * @note[short] iOS: 0x527e3c
     * @note[short] Android: Rebinded
     */
    virtual  ~SFXFolderPickerPopup();

    /**
     * @note[short] Windows: 0xc3ce0
     * @note[short] Android
     */
    static SFXFolderPickerPopup* create(SFXFolderPickerMode p0, std::string const& p1, std::set<int> const& p2, SFXFolderPickerDelegate* p3, int p4);

    /**
     * @note[short] MacOS (ARM): 0x84faf0
     * @note[short] MacOS (Intel): 0x973fa0
     * @note[short] Windows: 0xc6920
     * @note[short] iOS: 0x529d30
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x84fbac
     * @note[short] MacOS (Intel): 0x974050
     * @note[short] Windows: 0xc6990
     * @note[short] iOS: 0x529d9c
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x84fc38
     * @note[short] MacOS (Intel): 0x9740f0
     * @note[short] Windows: 0xc6a00
     * @note[short] iOS: 0x529df0
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x84fcc4
     * @note[short] MacOS (Intel): 0x974190
     * @note[short] Windows: 0xc6a50
     * @note[short] iOS: 0x529e44
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x84fa34
     * @note[short] MacOS (Intel): 0x973ed0
     * @note[short] Windows: 0xc68c0
     * @note[short] iOS: 0x529d24
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x84f8c8
     * @note[short] MacOS (Intel): 0x973d50
     * @note[short] Windows: 0xc6780
     * @note[short] iOS: 0x529c44
     * @note[short] Android
     */
    virtual void setTextPopupClosed(SetTextPopup* p0, std::string p1);

    /**
     * @note[short] Windows: 0xc3eb0
     * @note[short] Android
     */
    bool init(SFXFolderPickerMode p0, std::string const& p1, std::set<int> const& p2, SFXFolderPickerDelegate* p3, int p4);

    /**
     * @note[short] Windows: 0xc6860
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xc6330
     * @note[short] Android
     */
    void onConfirm(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xc6400
     * @note[short] Android
     */
    void onNewFolder(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xc6270
     * @note[short] Android
     */
    void onPickFolder(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xc6560
     * @note[short] Android
     */
    void onSave(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xc65d0
     * @note[short] Android
     */
    void onSelectAll(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn pickFolder(int p0);

    /**
     * @note[short] Windows: 0xc4e00
     * @note[short] Android
     */
    TodoReturn rebuildList();

    /**
     * @note[short] Windows: 0xc5da0
     * @note[short] Android
     */
    TodoReturn refreshList();

    /**
     * @note[short] Windows: 0xc5fa0
     * @note[short] Android
     */
    TodoReturn updateActionBtn();

    /**
     * @note[short] Windows: 0xc5e00
     * @note[short] Android
     */
    TodoReturn updateShareHint();
};

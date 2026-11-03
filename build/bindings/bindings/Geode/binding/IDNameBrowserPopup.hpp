#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/VirtualRowSource.hpp>

class IDNameBrowserPopup : public FLAlertLayer, public VirtualRowSource {
public:
    static constexpr auto CLASS_NAME = "IDNameBrowserPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(IDNameBrowserPopup, FLAlertLayer)

    /**
     * @note[short] Windows: 0x3c1580
     * @note[short] iOS: 0x4df7cc
     * @note[short] Android: Rebinded
     */
    virtual  ~IDNameBrowserPopup();

    /**
     * @note[short] Android
     */
    static IDNameBrowserPopup* create(int p0, int p1, IDNameBrowserDelegate* p2);

    /**
     * @note[short] MacOS (ARM): 0x7f3190
     * @note[short] MacOS (Intel): 0x90c9c0
     * @note[short] Windows: 0x3c4e00
     * @note[short] iOS: 0x4e23a8
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x7f324c
     * @note[short] MacOS (Intel): 0x90ca70
     * @note[short] Windows: 0x3c4e70
     * @note[short] iOS: 0x4e2414
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x7f32d8
     * @note[short] MacOS (Intel): 0x90cb10
     * @note[short] Windows: 0x3c4ee0
     * @note[short] iOS: 0x4e2468
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x7f3364
     * @note[short] MacOS (Intel): 0x90cbb0
     * @note[short] Windows: 0x3c4f30
     * @note[short] iOS: 0x4e24bc
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x7f3184
     * @note[short] MacOS (Intel): 0x90c990
     * @note[short] Windows: 0x3c4df0
     * @note[short] iOS: 0x4e239c
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x7f3138
     * @note[short] MacOS (Intel): 0x90c930
     * @note[short] Windows: 0x3c4c90
     * @note[short] iOS: 0x4e2350
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x7f2c94
     * @note[short] MacOS (Intel): 0x90c460
     * @note[short] Windows: 0x3c35e0
     * @note[short] iOS: 0x4e1fb4
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x7f308c
     * @note[short] MacOS (Intel): 0x90c880
     * @note[short] Windows: 0x3f5c0
     * @note[short] iOS: 0x4e22c4
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x7f23e4
     * @note[short] MacOS (Intel): 0x90bb70
     * @note[short] Windows: 0x3c3090
     * @note[short] iOS: 0x4e17c0
     * @note[short] Android
     */
    virtual int virtualRowCount();

    /**
     * @note[short] MacOS (ARM): 0x7f2408
     * @note[short] MacOS (Intel): 0x90bbb0
     * @note[short] Windows: 0x3c30c0
     * @note[short] iOS: 0x4e17e4
     * @note[short] Android
     */
    virtual int virtualRowHeight(int p0);

    /**
     * @note[short] MacOS (ARM): 0x7f2418
     * @note[short] MacOS (Intel): 0x90bbd0
     * @note[short] Windows: 0x3c30d0
     * @note[short] iOS: 0x4e17f4
     * @note[short] Android
     */
    virtual void mountVirtualRow(int p0, cocos2d::CCNode* p1, cocos2d::CCMenu* p2);

    /**
     * @note[short] Android
     */
    TodoReturn getFormID();

    /**
     * @note[short] Windows: 0x3c1650
     * @note[short] Android
     */
    bool init(int p0, int p1, IDNameBrowserDelegate* p2);

    /**
     * @note[short] Windows: 0x3c4ce0
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3c3870
     * @note[short] Android
     */
    void onDeleteRow(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3c3650
     * @note[short] Android
     */
    void onEditRow(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3c4880
     * @note[short] Android
     */
    void onFormAdd(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3c3f20
     * @note[short] Android
     */
    void onFormArrowLeft(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3c3f50
     * @note[short] Android
     */
    void onFormArrowRight(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3c3f90
     * @note[short] Android
     */
    void onFormNextFree(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3c37a0
     * @note[short] Android
     */
    void onSelectRow(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3c4810
     * @note[short] Android
     */
    void onToggleSort(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3c2af0
     * @note[short] Android
     */
    TodoReturn rebuildList();

    /**
     * @note[short] Windows: 0x3c3b40
     * @note[short] Android
     */
    void setFormID(int p0);

    /**
     * @note[short] Windows: 0x3c3bf0
     * @note[short] Android
     */
    TodoReturn updateConflictLabel();

    /**
     * @note[short] Windows: 0x3c4790
     * @note[short] Android
     */
    TodoReturn updateSortButtonLabel();
};

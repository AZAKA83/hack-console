#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/TabbedPopupLayer.hpp>

class EditorSoundsLayer : public TabbedPopupLayer {
public:
    static constexpr auto CLASS_NAME = "EditorSoundsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(EditorSoundsLayer, TabbedPopupLayer)

    /**
     * @note[short] Windows: 0x19c7b0
     * @note[short] iOS: 0x4d7004
     * @note[short] Android: Rebinded
     */
    virtual  ~EditorSoundsLayer();

    /**
     * @note[short] Windows: 0x19ca70
     * @note[short] Android
     */
    static EditorSoundsLayer* create(EditorUI* p0);

    /**
     * @note[short] MacOS (ARM): 0x7e6510
     * @note[short] MacOS (Intel): 0x8feeb0
     * @note[short] Windows: 0x19e790
     * @note[short] iOS: 0x4d86d0
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x7e65f8
     * @note[short] MacOS (Intel): 0x8fefd0
     * @note[short] Windows: 0x19e8c0
     * @note[short] iOS: 0x4d87b8
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x7e6738
     * @note[short] MacOS (Intel): 0x8ff110
     * @note[short] Windows: 0x19e9a0
     * @note[short] iOS: 0x4d8860
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x7e6848
     * @note[short] MacOS (Intel): 0x8ff230
     * @note[short] Windows: 0x19ea40
     * @note[short] iOS: 0x4d88f0
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x7e5f5c
     * @note[short] MacOS (Intel): 0x8fe8b0
     * @note[short] Windows: 0x19e0f0
     * @note[short] iOS: 0x4d81c0
     * @note[short] Android
     */
    virtual void rebuildContent();

    /**
     * @note[short] MacOS (ARM): 0x7e6928
     * @note[short] MacOS (Intel): 0x8ff310
     * @note[short] Windows: 0x19ef00
     * @note[short] iOS: 0x4d8968
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x7e6400
     * @note[short] MacOS (Intel): 0x8fed70
     * @note[short] Windows: 0x19e5e0
     * @note[short] iOS: 0x4d85d4
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x7e5f6c
     * @note[short] MacOS (Intel): 0x8fe8d0
     * @note[short] Windows: 0x19e100
     * @note[short] iOS: 0x4d81d0
     * @note[short] Android
     */
    virtual void showTab(int tab);

    /**
     * @note[short] Android
     */
    TodoReturn buildContentForTab(int p0);

    /**
     * @note[short] Windows: 0x19cd50
     * @note[short] Android
     */
    bool init(EditorUI* p0);

    /**
     * @note[short] Windows: 0x19eae0
     * @note[short] Android
     */
    void onActionRow(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x19ec80
     * @note[short] Android
     */
    void onBrowse(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x19eec0
     * @note[short] Android
     */
    void onClearSearch(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x19ed80
     * @note[short] Android
     */
    void onSettings(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn setupTabs();
};

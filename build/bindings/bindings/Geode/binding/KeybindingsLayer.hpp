#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/KeybindSettingsEntry.hpp>
#include <Geode/binding/TabbedPopupLayer.hpp>
#include <Geode/mapping/ccTypes.hpp>
#include <Geode/mapping/vector.hpp>

class KeybindingsLayer : public TabbedPopupLayer {
public:
    static constexpr auto CLASS_NAME = "KeybindingsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(KeybindingsLayer, TabbedPopupLayer)

    /**
     * @note[short] MacOS (ARM): 0x5f5e48
     * @note[short] MacOS (Intel): 0x6e12c0
     * @note[short] Windows: 0x3d53a0
     * @note[short] iOS: 0x235a0
     * @note[short] Android: Rebinded
     */
    virtual  ~KeybindingsLayer();

    /**
     * @note[short] MacOS (ARM): 0x5f6028
     * @note[short] MacOS (Intel): 0x6e1530
     * @note[short] Windows: 0x3d5650
     * @note[short] Android
     */
    static KeybindingsLayer* create(GameSettingsLayer* settings);

    /**
     * @note[short] MacOS (ARM): 0x5f8cec
     * @note[short] MacOS (Intel): 0x6e4930
     * @note[short] Windows: 0x3d8630
     * @note[short] iOS: 0x25ac8
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x5f8dd4
     * @note[short] MacOS (Intel): 0x6e4a50
     * @note[short] Windows: 0x3d8760
     * @note[short] iOS: 0x25bb0
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x5f8f14
     * @note[short] MacOS (Intel): 0x6e4b90
     * @note[short] Windows: 0x3d8840
     * @note[short] iOS: 0x25c58
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x5f9024
     * @note[short] MacOS (Intel): 0x6e4cb0
     * @note[short] Windows: 0x3d88e0
     * @note[short] iOS: 0x25ce8
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x5f80d4
     * @note[short] MacOS (Intel): 0x6e3b40
     * @note[short] Windows: 0x19e0f0
     * @note[short] iOS: 0x25188
     * @note[short] Android
     */
    virtual void rebuildContent();

    /**
     * @note[short] MacOS (ARM): 0x5f9104
     * @note[short] MacOS (Intel): 0x6e4d90
     * @note[short] Windows: 0x3d8980
     * @note[short] iOS: 0x25d60
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5f8bdc
     * @note[short] MacOS (Intel): 0x6e47f0
     * @note[short] Windows: 0x3d8480
     * @note[short] iOS: 0x259cc
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x5f80e4
     * @note[short] MacOS (Intel): 0x6e3b60
     * @note[short] Windows: 0x3d77e0
     * @note[short] iOS: 0x25198
     * @note[short] Android
     */
    virtual void showTab(int tab);

    /**
     * @note[short] MacOS (ARM): 0x5f6994
     * @note[short] MacOS (Intel): 0x6e1f60
     * @note[short] Windows: 0x3d6050
     * @note[short] iOS: 0x23dd4
     * @note[short] Android
     */
    virtual void setupTabs();

    /**
     * @note[short] MacOS (ARM): 0x5f856c
     * @note[short] MacOS (Intel): 0x6e3ff0
     * @note[short] Windows: 0x3d7db0
     * @note[short] iOS: 0x25598
     * @note[short] Android
     */
    virtual std::vector<int> actionsToShow(int tab);

    /**
     * @note[short] MacOS (ARM): 0x5f8a4c
     * @note[short] MacOS (Intel): 0x6e4660
     * @note[short] Windows: 0x3d80a0
     * @note[short] iOS: 0x258b8
     * @note[short] Android
     */
    virtual std::string nameForAction(int action);

    /**
     * @note[short] MacOS (ARM): 0x5f8af4
     * @note[short] MacOS (Intel): 0x6e4710
     * @note[short] Windows: 0x3d80f0
     * @note[short] iOS: 0x258e4
     * @note[short] Android
     */
    virtual void openBindingEditor(int action, int chord);

    /**
     * @note[short] MacOS (ARM): 0x5f8b1c
     * @note[short] MacOS (Intel): 0x6e4740
     * @note[short] Windows: 0x3d8120
     * @note[short] iOS: 0x2590c
     * @note[short] Android
     */
    virtual bool showControllerChords();

    /**
     * @note[short] MacOS (ARM): 0x5f8b20
     * @note[short] MacOS (Intel): 0x6e4750
     * @note[short] Windows: 0x3d8140
     * @note[short] iOS: 0x25910
     * @note[short] Android
     */
    virtual std::vector<KeybindSettingsEntry> settingsEntries();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual bool crossCheckGlobalConflicts();

    /**
     * @note[short] MacOS (ARM): 0x5f6ea0
     * @note[short] MacOS (Intel): 0x6e2550
     * @note[short] Windows: 0x3d6750
     * @note[short] Android
     */
    void buildContentForTab(int tab);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static int const* getActionTable(int& count);

    /**
     * @note[short] MacOS (ARM): 0x5f614c
     * @note[short] MacOS (Intel): 0x6e16a0
     * @note[short] Windows: 0x3d57f0
     * @note[short] Android
     */
    bool init(GameSettingsLayer* settings);

    /**
     * @note[short] MacOS (ARM): 0x5f7fa8
     * @note[short] MacOS (Intel): 0x6e3a30
     * @note[short] Windows: 0x3d7d50
     * @note[short] Android
     */
    void onAddBinding(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5f689c
     * @note[short] MacOS (Intel): 0x6e1e80
     * @note[short] Windows: 0x3d8440
     * @note[short] Android
     */
    void onClearSearch(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5f8004
     * @note[short] MacOS (Intel): 0x6e3a80
     * @note[short] Windows: 0x3d7cb0
     * @note[short] Android
     */
    void onEditBinding(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5f6910
     * @note[short] MacOS (Intel): 0x6e1ee0
     * @note[short] Windows: 0x3d8230
     * @note[short] Android
     */
    void onSettings(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5f6b70
     * @note[short] MacOS (Intel): 0x6e20c0
     * @note[short] Windows: 0x3d6350
     * @note[short] Android
     */
    static cocos2d::CCSprite* buildControllerGlyph(int key, bool& isPlayer2);

    /**
     * @note[short] MacOS (ARM): 0x5f6e10
     * @note[short] MacOS (Intel): 0x6e24c0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static void tintGlyph(cocos2d::CCSprite* sprite, cocos2d::ccColor3B color);
    GameSettingsLayer* m_settingsLayer;
    KeybindSource* m_keybindSource;
    bool m_ownsKeybindSource;
    CCTextInputNode* m_searchInput;
    cocos2d::extension::CCScale9Sprite* m_searchBG;
    CCMenuItemSpriteExtra* m_clearSearchButton;
    ScrollableContentLayer* m_scrollLayer;
    cocos2d::CCMenu* m_contentMenu;
    bool m_contentMenuTouched;
    std::string m_searchQuery;
    int m_searchTab;
};

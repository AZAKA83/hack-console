#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/KeybindSettingsEntry.hpp>
#include <Geode/binding/KeybindingsLayer.hpp>
#include <Geode/mapping/vector.hpp>

class LevelBindingsLayer : public KeybindingsLayer {
public:
    static constexpr auto CLASS_NAME = "LevelBindingsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(LevelBindingsLayer, KeybindingsLayer)

    /**
     * @note[short] MacOS (ARM): 0x804224
     * @note[short] MacOS (Intel): 0x91ffb0
     * @note[short] iOS: 0x4efc44
     * @note[short] Android: Rebinded
     */
    virtual  ~LevelBindingsLayer();

    /**
     * @note[short] Windows: 0x44c580
     * @note[short] Android
     */
    static LevelBindingsLayer* create(KeybindSet* keybindSet, bool controller);

    /**
     * @note[short] MacOS (ARM): 0x8041b8
     * @note[short] MacOS (Intel): 0x91ff40
     * @note[short] Windows: 0x44d1a0
     * @note[short] iOS: 0x4efbe0
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x80401c
     * @note[short] MacOS (Intel): 0x91fda0
     * @note[short] Windows: 0x44c730
     * @note[short] iOS: 0x4efa88
     * @note[short] Android
     */
    virtual void setupTabs();

    /**
     * @note[short] MacOS (ARM): 0x80413c
     * @note[short] MacOS (Intel): 0x91feb0
     * @note[short] Windows: 0x44c8b0
     * @note[short] iOS: 0x4efb98
     * @note[short] Android
     */
    virtual std::vector<int> actionsToShow(int tab);

    /**
     * @note[short] MacOS (ARM): 0x804190
     * @note[short] MacOS (Intel): 0x91ff10
     * @note[short] Windows: 0x44c920
     * @note[short] iOS: 0x4efbb8
     * @note[short] Android
     */
    virtual void openBindingEditor(int action, int chord);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual bool showControllerChords();

    /**
     * @note[short] MacOS (ARM): 0x8030c0
     * @note[short] MacOS (Intel): 0x91ee60
     * @note[short] Windows: 0x44c440
     * @note[short] iOS: 0x4ef024
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
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool init(KeybindSet* keybindSet, bool controller);

    /**
     * @note[short] Windows: 0x44cf50
     * @note[short] Android
     */
    void onApplyGlobal(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x44d090
     * @note[short] Android
     */
    void onClear(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x44c960
     * @note[short] Android
     */
    void onCopy(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x44cbc0
     * @note[short] Android
     */
    void onPaste(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x44ce30
     * @note[short] Android
     */
    void onReset(cocos2d::CCObject* sender);
    KeybindSet* m_keybindSet;
    bool m_controller;
    bool m_seededFromGlobal;
};

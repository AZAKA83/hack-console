#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetupRandAdvTriggerPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupRandAdvTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupRandAdvTriggerPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x5d2820
     * @note[short] iOS: 0x31d74
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupRandAdvTriggerPopup();

    /**
     * @note[short] Windows: 0x5d2920
     * @note[short] Android
     */
    static SetupRandAdvTriggerPopup* create(RandTriggerGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x305afc
     * @note[short] MacOS (Intel): 0x379e90
     * @note[short] Windows: 0x5d3770
     * @note[short] iOS: 0x32f44
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x305af4
     * @note[short] MacOS (Intel): 0x379e70
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x32f3c
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x305b68
     * @note[short] MacOS (Intel): 0x379f00
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void addChance(int id, int chance);

    /**
     * @note[short] MacOS (ARM): 0x305c08
     * @note[short] MacOS (Intel): 0x379fa0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void addChanceToObject(RandTriggerGameObject* object, int id, int chance);

    /**
     * @note[short] MacOS (Intel): 0x37a3e0
     * @note[short] Windows: 0x5d43e0
     * @note[short] Android
     */
    void callRemoveFromGroup(float dt);

    /**
     * @note[short] MacOS (ARM): 0x11673c
     * @note[short] Windows: 0x5d2a80
     * @note[short] Android
     */
    bool init(RandTriggerGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x30514c
     * @note[short] MacOS (Intel): 0x379320
     * @note[short] Windows: 0x5d4630
     * @note[short] Android
     */
    void onAddChance(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onGroupIDScrollDown(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onGroupIDScrollUp(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x37a320
     * @note[short] Android
     */
    void onRemoveFromGroup(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x305d54
     * @note[short] MacOS (Intel): 0x37a110
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void removeGroupID(int id);

    /**
     * @note[short] MacOS (ARM): 0x305eac
     * @note[short] MacOS (Intel): 0x37a290
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void removeGroupIDFromObject(RandTriggerGameObject* object, int id);

    /**
     * @note[short] Windows: 0x5d3830
     * @note[short] Android
     */
    void updateGroupIDButtons();
    bool m_performedAction;
    cocos2d::CCArray* m_groupButtons;
    CCTextInputNode* m_groupIDInput;
    CCTextInputNode* m_chanceInput;
    int m_groupToRemove;
    bool m_removingGroup;
    CCMenuItemSpriteExtra* m_scrollUpButton;
    CCMenuItemSpriteExtra* m_scrollDownButton;
    int m_groupIDScrollIndex;
};

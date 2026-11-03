#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/ConfigureValuePopupDelegate.hpp>
#include <Geode/mapping/CCPoint.hpp>

class SetGroupIDLayer : public FLAlertLayer, public ConfigureValuePopupDelegate {
public:
    static constexpr auto CLASS_NAME = "SetGroupIDLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetGroupIDLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SetGroupIDLayer();

    /**
     * @note[short] MacOS (Intel): 0x2fcd10
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3e7d8
     * @note[short] Android: Rebinded
     */
     ~SetGroupIDLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static SetGroupIDLayer* create(GameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x296ca0
     * @note[short] MacOS (Intel): 0x302d40
     * @note[short] Windows: 0x5948d0
     * @note[short] iOS: 0x42eac
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x296bd0
     * @note[short] MacOS (Intel): 0x302c40
     * @note[short] Windows: 0x593d20
     * @note[short] iOS: 0x42e4c
     * @note[short] Android
     */
    virtual void valuePopupClosed(ConfigureValuePopup* popup, float value);

    /**
     * @note[short] MacOS (ARM): 0x295fdc
     * @note[short] MacOS (Intel): 0x301f50
     * @note[short] Windows: 0x1265d0
     * @note[short] iOS: 0x42608
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x295ff8
     * @note[short] MacOS (Intel): 0x301f90
     * @note[short] Windows: 0x591d10
     * @note[short] iOS: 0x42624
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x2964d0
     * @note[short] MacOS (Intel): 0x302520
     * @note[short] Windows: 0x592ad0
     * @note[short] iOS: 0x42970
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x2965d0
     * @note[short] MacOS (Intel): 0x302610
     * @note[short] Windows: 0x592b70
     * @note[short] iOS: 0x429f8
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x296710
     * @note[short] MacOS (Intel): 0x302750
     * @note[short] Windows: 0x592c50
     * @note[short] iOS: 0x42aa0
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x296820
     * @note[short] MacOS (Intel): 0x302870
     * @note[short] Windows: 0x592cf0
     * @note[short] iOS: 0x42b30
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x296ae4
     * @note[short] MacOS (Intel): 0x302b50
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void addGroupID(int id);

    /**
     * @note[short] MacOS (Intel): 0x64d70
     * @note[short] Windows: 0x592d90
     * @note[short] Android
     */
    void callRemoveFromGroup(float dt);

    /**
     * @note[short] MacOS (ARM): 0x293a6c
     * @note[short] MacOS (Intel): 0x2ff6d0
     * @note[short] Windows: 0x590d90
     * @note[short] Android
     */
    CCTextInputNode* createTextInput(cocos2d::CCPoint position, int tag, int length, std::string placeholder, float width, int arrow);

    /**
     * @note[short] MacOS (ARM): 0x29412c
     * @note[short] MacOS (Intel): 0x2ffd90
     * @note[short] Windows: 0x5915c0
     * @note[short] Android
     */
    void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x2914d4
     * @note[short] MacOS (Intel): 0x2fcf00
     * @note[short] Windows: 0x58e630
     * @note[short] Android
     */
    bool init(GameObject* obj, cocos2d::CCArray* objs);

    /**
     * @note[short] MacOS (ARM): 0x293f88
     * @note[short] MacOS (Intel): 0x2ffbc0
     * @note[short] Windows: 0x593190
     * @note[short] Android
     */
    void onAddGroup(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x593310
     * @note[short] Android
     */
    void onAddGroupParent(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x29552c
     * @note[short] MacOS (Intel): 0x301330
     * @note[short] Windows: 0x591ca0
     * @note[short] Android
     */
    void onAnim(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x591290
     * @note[short] Android
     */
    void onArrow(int tag, int increment);

    /**
     * @note[short] MacOS (ARM): 0x29560c
     * @note[short] MacOS (Intel): 0x301420
     * @note[short] Windows: 0x591230
     * @note[short] Android
     */
    void onArrowLeft(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1cc3ac
     * @note[short] MacOS (Intel): 0x21e5c0
     * @note[short] Windows: 0x591260
     * @note[short] Android
     */
    void onArrowRight(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x293500
     * @note[short] MacOS (Intel): 0x2ff0f0
     * @note[short] Windows: 0x5945e0
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x29532c
     * @note[short] MacOS (Intel): 0x3010d0
     * @note[short] Windows: 0x591920
     * @note[short] Android
     */
    void onCopy(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x591b30
     * @note[short] Android
     */
    void onExtra(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x295434
     * @note[short] Windows: 0x591b60
     * @note[short] Android
     */
    void onExtra2(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x293890
     * @note[short] MacOS (Intel): 0x2ff510
     * @note[short] Windows: 0x593a20
     * @note[short] Android
     */
    void onGroupIDOptions(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2936b8
     * @note[short] Windows: 0x593720
     * @note[short] Android
     */
    void onNextFreeEditorLayer1(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2937a4
     * @note[short] Windows: 0x5938a0
     * @note[short] Android
     */
    void onNextFreeEditorLayer2(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x294764
     * @note[short] MacOS (Intel): 0x300470
     * @note[short] Windows: 0x594230
     * @note[short] Android
     */
    void onNextFreeOrderChannel(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x296384
     * @note[short] MacOS (Intel): 0x3023c0
     * @note[short] Android
     */
    void onNextGroupID1(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x295354
     * @note[short] MacOS (Intel): 0x301100
     * @note[short] Windows: 0x591980
     * @note[short] Android
     */
    void onPaste(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x37a320
     * @note[short] Windows: 0x5930b0
     * @note[short] Android
     */
    void onRemoveFromGroup(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x302d20
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onSmoothEase(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x29555c
     * @note[short] MacOS (Intel): 0x301360
     * @note[short] Windows: 0x590b20
     * @note[short] Android
     */
    void onToggleGuide(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x295588
     * @note[short] MacOS (Intel): 0x301390
     * @note[short] Windows: 0x590bb0
     * @note[short] Android
     */
    void onToggleSelectedOrder(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2955e0
     * @note[short] MacOS (Intel): 0x3013f0
     * @note[short] Windows: 0x590c50
     * @note[short] Android
     */
    void onToggleTraceIn(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2955b4
     * @note[short] MacOS (Intel): 0x3013c0
     * @note[short] Windows: 0x590cf0
     * @note[short] Android
     */
    void onToggleTraceOut(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x294024
     * @note[short] MacOS (Intel): 0x2ffc70
     * @note[short] Windows: 0x593480
     * @note[short] Android
     */
    void onZLayer(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x294418
     * @note[short] MacOS (Intel): 0x300130
     * @note[short] Windows: 0x593540
     * @note[short] Android
     */
    void onZLayerShift(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x302a80
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void removeGroupID(int id);

    /**
     * @note[short] Windows: 0x593e50
     * @note[short] Android
     */
    void updateEditorLabel();

    /**
     * @note[short] Windows: 0x593ee0
     * @note[short] Android
     */
    void updateEditorLabel2();

    /**
     * @note[short] MacOS (ARM): 0x295a98
     * @note[short] MacOS (Intel): 0x301930
     * @note[short] Windows: 0x593620
     * @note[short] Android
     */
    void updateEditorLayerID();

    /**
     * @note[short] MacOS (ARM): 0x295b08
     * @note[short] MacOS (Intel): 0x3019b0
     * @note[short] Windows: 0x5936a0
     * @note[short] Android
     */
    void updateEditorLayerID2();

    /**
     * @note[short] MacOS (Intel): 0x301a30
     * @note[short] Windows: 0x594510
     * @note[short] Android
     */
    void updateEditorOrder();

    /**
     * @note[short] Windows: 0x5940d0
     * @note[short] Android
     */
    void updateEditorOrderLabel();

    /**
     * @note[short] Windows: 0x592230
     * @note[short] Android
     */
    void updateGroupIDButtons();

    /**
     * @note[short] Windows: 0x594030
     * @note[short] Android
     */
    void updateGroupIDLabel();

    /**
     * @note[short] MacOS (ARM): 0x17408
     * @note[short] MacOS (Intel): 0x301ae0
     * @note[short] Windows: 0x594440
     * @note[short] Android
     */
    void updateOrderChannel();

    /**
     * @note[short] Windows: 0x594180
     * @note[short] Android
     */
    void updateOrderChannelLabel();

    /**
     * @note[short] MacOS (ARM): 0x294d5c
     * @note[short] MacOS (Intel): 0x300a70
     * @note[short] Windows: 0x5b7470
     * @note[short] Android
     */
    void updateZLayerButtons();

    /**
     * @note[short] Windows: 0x593db0
     * @note[short] Android
     */
    void updateZOrder();

    /**
     * @note[short] Windows: 0x593f70
     * @note[short] Android
     */
    void updateZOrderLabel();
    GameObject* m_targetObject;
    cocos2d::CCArray* m_targetObjects;
    cocos2d::CCArray* m_zLayerButtons;
    cocos2d::CCArray* m_groupIDObjects;
    CCTextInputNode* m_editorLayerInput;
    CCTextInputNode* m_editorLayer2Input;
    CCTextInputNode* m_zOrderInput;
    CCTextInputNode* m_groupIDInput;
    CCTextInputNode* m_orderInput;
    CCTextInputNode* m_channelInput;
    bool m_showChannelOrder;
    int m_channelValue;
    bool m_channelUpdated;
    int m_groupIDValue;
    int m_editorLayerValue;
    int m_editorLayer2Value;
    int m_zOrderValue;
    int m_zOrderRelated;
    bool m_useDefaultZLayer;
    ZLayer m_zLayerValue;
    int m_orderValue;
    bool m_channelOrderEdited;
    bool m_editorLayerEdited;
    bool m_removeGroupsLock;
    int m_groupToRemove;
    bool m_addedGroup;
    bool m_hasTargetObjects;
    bool m_unk2ff;
    bool m_unk300;
    int m_nextFreeID;
    cocos2d::CCDictionary* m_parentGroups;
    cocos2d::CCDictionary* m_childGroups;
    ScrollableContentLayer* m_scrollableContentLayer;
    cocos2d::CCMenu* m_groupIDMenu;
    bool m_scrolling;
    IDNameInput* m_idNameInput;
};

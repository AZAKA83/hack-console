#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/ConfigureValuePopupDelegate.hpp>
#include <Geode/binding/SliderDelegate.hpp>
#include <Geode/mapping/CCObject.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/ccTypes.hpp>
#include <Geode/mapping/enumKeyCodes.hpp>
#include <Geode/mapping/map.hpp>

class SetupTriggerPopup : public FLAlertLayer, public ConfigureValuePopupDelegate, public SliderDelegate {
public:
    static constexpr auto CLASS_NAME = "SetupTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupTriggerPopup, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x9aaf0
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SetupTriggerPopup();

    /**
     * @note[short] MacOS (ARM): 0x1c8a08
     * @note[short] MacOS (Intel): 0x2191e0
     * @note[short] Windows: 0x60ac50
     * @note[short] iOS: 0x1abcd0
     * @note[short] Android: Rebinded
     */
     ~SetupTriggerPopup();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static SetupTriggerPopup* create(float width, float height);

    /**
     * @note[short] MacOS (ARM): 0x1c8bc8
     * @note[short] MacOS (Intel): 0x2194a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static SetupTriggerPopup* create(EffectGameObject* trigger, cocos2d::CCArray* triggers, float width, float height, int background);

    /**
     * @note[short] MacOS (ARM): 0x1d2c40
     * @note[short] MacOS (Intel): 0x225580
     * @note[short] Windows: 0x615c20
     * @note[short] iOS: 0x1b3314
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x1cbf10
     * @note[short] MacOS (Intel): 0x21dd40
     * @note[short] Windows: 0xa6580
     * @note[short] iOS: 0x1ae728
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x1cbcd0
     * @note[short] MacOS (Intel): 0x21daf0
     * @note[short] Windows: 0x3a83c0
     * @note[short] iOS: 0x1ae5b4
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void pageChanged();

    /**
     * @note[short] MacOS (ARM): 0x1c99a0
     * @note[short] MacOS (Intel): 0x21a2f0
     * @note[short] Windows: 0x60b9f0
     * @note[short] iOS: 0x1ac8b8
     * @note[short] Android
     */
    virtual void toggleGroup(int group, bool visible);

    /**
     * @note[short] MacOS (ARM): 0x1caa20
     * @note[short] MacOS (Intel): 0x21b4f0
     * @note[short] Windows: 0x60c860
     * @note[short] iOS: 0x1ad62c
     * @note[short] Android
     */
    virtual void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x1cbd74
     * @note[short] MacOS (Intel): 0x21db70
     * @note[short] Windows: 0x60cea0
     * @note[short] iOS: 0x1ae634
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1cad20
     * @note[short] MacOS (Intel): 0x21b870
     * @note[short] Windows: 0x1265d0
     * @note[short] iOS: 0x1ad838
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x1cad3c
     * @note[short] MacOS (Intel): 0x21b8b0
     * @note[short] Windows: 0x60cce0
     * @note[short] iOS: 0x1ad854
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void updateInputValue(int tag, float& value);

    /**
     * @note[short] MacOS (ARM): 0x1cbfa4
     * @note[short] MacOS (Intel): 0x21de10
     * @note[short] Windows: 0x60d0c0
     * @note[short] iOS: 0x1ae7bc
     * @note[short] Android
     */
    virtual void sliderBegan(Slider* slider);

    /**
     * @note[short] MacOS (ARM): 0x1cc0cc
     * @note[short] MacOS (Intel): 0x21df40
     * @note[short] Windows: 0x60d200
     * @note[short] iOS: 0x1ae84c
     * @note[short] Android
     */
    virtual void sliderEnded(Slider* slider);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void onPlusButton(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void onCustomButton(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1ced64
     * @note[short] MacOS (Intel): 0x220c90
     * @note[short] Windows: 0x60eef0
     * @note[short] iOS: 0x1b06dc
     * @note[short] Android
     */
    virtual void updateDefaultTriggerValues();

    /**
     * @note[short] MacOS (ARM): 0x1d0580
     * @note[short] MacOS (Intel): 0x223030
     * @note[short] Windows: 0x60f3f0
     * @note[short] iOS: 0x1b1390
     * @note[short] Android
     */
    virtual void updateInputNode(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x1d07f0
     * @note[short] MacOS (Intel): 0x223250
     * @note[short] Windows: 0x60f7f0
     * @note[short] iOS: 0x1b15a0
     * @note[short] Android
     */
    virtual void updateToggleItem(int value, bool toggled);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void valueDidChange(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x1d08a8
     * @note[short] MacOS (Intel): 0x223310
     * @note[short] Windows: 0x60f870
     * @note[short] iOS: 0x1b1610
     * @note[short] Android
     */
    virtual float getValue(int tag);

    /**
     * @note[short] MacOS (ARM): 0x1d0c74
     * @note[short] MacOS (Intel): 0x2236d0
     * @note[short] Windows: 0x613a00
     * @note[short] iOS: 0x1b1830
     * @note[short] Android
     */
    virtual float triggerValueFromSliderValue(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x1d0d00
     * @note[short] MacOS (Intel): 0x223750
     * @note[short] Windows: 0x613a90
     * @note[short] iOS: 0x1b189c
     * @note[short] Android
     */
    virtual float triggerSliderValueFromValue(int tag, float value);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1d1c20
     * @note[short] MacOS (Intel): 0x224630
     * @note[short] Windows: 0x614d30
     * @note[short] iOS: 0x1b25e4
     * @note[short] Android
     */
    virtual void valuePopupClosed(ConfigureValuePopup* popup, float value);

    /**
     * @note[short] MacOS (ARM): 0x1cbf34
     * @note[short] MacOS (Intel): 0x21dd80
     * @note[short] Windows: 0x597690
     * @note[short] iOS: 0x1ae74c
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes key, double timestamp);

    /**
     * @note[short] MacOS (ARM): 0x1c9e48
     * @note[short] MacOS (Intel): 0x21a7f0
     * @note[short] Windows: 0x60bd40
     * @note[short] Android
     */
    void addCloseButton(std::string text);

    /**
     * @note[short] MacOS (ARM): 0x1cebc8
     * @note[short] MacOS (Intel): 0x220b00
     * @note[short] Android
     */
    void addCustomButton(int tag, ButtonSprite* sprite, cocos2d::CCPoint position, int page, int group);

    /**
     * @note[short] Windows: 0x614a00
     * @note[short] Android
     */
    TodoReturn addEasePreviewButton(cocos2d::CCLabelBMFont* p0, float p1, int p2, int p3, int p4, int p5);

    /**
     * @note[short] MacOS (ARM): 0x1c9ec8
     * @note[short] MacOS (Intel): 0x21a870
     * @note[short] Windows: 0x60be50
     * @note[short] Android
     */
    void addHelpButton(std::string title, std::string desc, float scale);

    /**
     * @note[short] MacOS (ARM): 0x1ce594
     * @note[short] MacOS (Intel): 0x2204b0
     * @note[short] Windows: 0x60ea40
     * @note[short] Android
     */
    void addInfoLabel(std::string text, float scale, cocos2d::CCPoint position, int page, int group);

    /**
     * @note[short] MacOS (ARM): 0x1c9c94
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void addObjectsToGroup(cocos2d::CCArray* objects, int group);

    /**
     * @note[short] MacOS (ARM): 0x1c9b40
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void addObjectsToPage(cocos2d::CCArray* objects, int page);

    /**
     * @note[short] MacOS (ARM): 0x1c9c24
     * @note[short] MacOS (Intel): 0x21a5a0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void addObjectToGroup(cocos2d::CCObject* object, int group);

    /**
     * @note[short] MacOS (ARM): 0x1c9ad0
     * @note[short] MacOS (Intel): 0x21a420
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void addObjectToPage(cocos2d::CCObject* object, int page);

    /**
     * @note[short] MacOS (ARM): 0x1c9d78
     * @note[short] MacOS (Intel): 0x21a720
     * @note[short] Windows: 0x60bc30
     * @note[short] Android
     */
    void addTitle(std::string title);

    /**
     * @note[short] MacOS (ARM): 0x1cbec4
     * @note[short] MacOS (Intel): 0x21dcf0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void closeInputNodes();

    /**
     * @note[short] MacOS (ARM): 0x1ce890
     * @note[short] MacOS (Intel): 0x2207b0
     * @note[short] Windows: 0x60ec90
     * @note[short] Android
     */
    void createCustomButton(int tag, std::string text, std::string frame, cocos2d::CCPoint position, float buttonScale, float labelScale, bool vertical, int page, int group);

    /**
     * @note[short] Windows: 0x614df0
     * @note[short] Android
     */
    void createCustomEasingControls(std::string text, cocos2d::CCPoint position, float scale, int typeProperty, int rateProperty, int page, int group);

    /**
     * @note[short] MacOS (ARM): 0x1ce29c
     * @note[short] MacOS (Intel): 0x2201d0
     * @note[short] Windows: 0x60e7e0
     * @note[short] Android
     */
    cocos2d::CCArray* createCustomToggleValueControl(int property, bool toggled, bool notClickable, std::string text, cocos2d::CCPoint position, bool vertical, int page, int group);

    /**
     * @note[short] Windows: 0x613b40
     * @note[short] Android
     */
    void createEasingControls(cocos2d::CCPoint position, float scale, int page, int group);

    /**
     * @note[short] MacOS (ARM): 0x1ca298
     * @note[short] MacOS (Intel): 0x21ac60
     * @note[short] Windows: 0x60c530
     * @note[short] Android
     */
    void createMultiTriggerItems(cocos2d::CCPoint touchPos, cocos2d::CCPoint spawnPos, cocos2d::CCPoint multiPos);

    /**
     * @note[short] Android
     */
    void createMultiTriggerItemsCorner();

    /**
     * @note[short] Android
     */
    void createMultiTriggerItemsDefault();

    /**
     * @note[short] Android
     */
    void createMultiTriggerItemsDefaultHorizontal();

    /**
     * @note[short] Android
     */
    void createMultiTriggerItemsDefaultVertical();

    /**
     * @note[short] MacOS (ARM): 0x1c917c
     * @note[short] MacOS (Intel): 0x219ac0
     * @note[short] Windows: 0x60b3b0
     * @note[short] Android
     */
    void createPageButtons(float offset, int arrow);

    /**
     * @note[short] MacOS (ARM): 0x1ce6d4
     * @note[short] MacOS (Intel): 0x220600
     * @note[short] Windows: 0x60eb30
     * @note[short] Android
     */
    CCMenuItemSpriteExtra* createPlusButton(int tag, cocos2d::CCPoint position, float scale, std::string frame, int page, int group);

    /**
     * @note[short] MacOS (ARM): 0x1ca07c
     * @note[short] MacOS (Intel): 0x21aa20
     * @note[short] Windows: 0x60bfd0
     * @note[short] Android
     */
    CCMenuItemToggler* createToggleButton(std::string text, cocos2d::SEL_MenuHandler selector, bool toggled, cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (ARM): 0x1cdea8
     * @note[short] MacOS (Intel): 0x21fe00
     * @note[short] Windows: 0x60e420
     * @note[short] Android
     */
    cocos2d::CCArray* createToggleValueControl(int property, std::string label, cocos2d::CCPoint position, bool vertical, int page, int group, float scale);

    /**
     * @note[short] MacOS (ARM): 0x1cdffc
     * @note[short] MacOS (Intel): 0x21ff30
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    cocos2d::CCArray* createToggleValueControlAdvanced(int property, std::string label, cocos2d::CCPoint position, bool vertical, int page, int group, float buttonScale, float labelScale, float labelWidth, cocos2d::CCPoint offset);

    /**
     * @note[short] MacOS (ARM): 0x1cc98c
     * @note[short] MacOS (Intel): 0x21e860
     * @note[short] Windows: 0x60d5a0
     * @note[short] Android
     */
    void createValueControl(int property, std::string label, cocos2d::CCPoint position, float scale, float sliderMin, float sliderMax);

    /**
     * @note[short] Android
     */
    TodoReturn createValueControlAdvanced(ValueControlSettings& p0);

    /**
     * @note[short] MacOS (ARM): 0x1cca78
     * @note[short] MacOS (Intel): 0x21e950
     * @note[short] Windows: 0x60d690
     * @note[short] Android
     */
    cocos2d::CCArray* createValueControlAdvanced(int property, std::string label, cocos2d::CCPoint position, float scale, bool noSlider, InputValueType valueType, int length, bool arrows, float sliderMin, float sliderMax, int page, int group, GJInputStyle inputStyle, int decimalPlaces, bool allowDisable);

    /**
     * @note[short] MacOS (ARM): 0x1ccc68
     * @note[short] MacOS (Intel): 0x21eb80
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void createValueControlWArrows(int property, std::string label, cocos2d::CCPoint position, float scale);

    /**
     * @note[short] MacOS (ARM): 0x1c993c
     * @note[short] MacOS (Intel): 0x21a290
     * @note[short] Windows: 0x60b970
     * @note[short] Android
     */
    cocos2d::CCArray* getGroupContainer(int group);

    /**
     * @note[short] MacOS (ARM): 0x1d0c44
     * @note[short] MacOS (Intel): 0x2236a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    float getMaxSliderValue(int property);

    /**
     * @note[short] MacOS (ARM): 0x1d0c14
     * @note[short] MacOS (Intel): 0x223670
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    float getMinSliderValue(int property);

    /**
     * @note[short] MacOS (ARM): 0x1ca9d4
     * @note[short] MacOS (Intel): 0x21b4b0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    cocos2d::CCArray* getObjects();

    /**
     * @note[short] MacOS (ARM): 0x1c9724
     * @note[short] MacOS (Intel): 0x21a050
     * @note[short] Windows: 0x60b6f0
     * @note[short] Android
     */
    cocos2d::CCArray* getPageContainer(int page);

    /**
     * @note[short] MacOS (ARM): 0x1cf0e8
     * @note[short] MacOS (Intel): 0x2210a0
     * @note[short] Windows: 0x611de0
     * @note[short] Android
     */
    float getTriggerValue(int property, GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x1caed8
     * @note[short] MacOS (Intel): 0x21ba70
     * @note[short] Windows: 0x60f2d0
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    float getTruncatedValue(float value, int decimals);

    /**
     * @note[short] MacOS (ARM): 0x1cc338
     * @note[short] MacOS (Intel): 0x21e1d0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    float getTruncatedValueByTag(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x1c9524
     * @note[short] MacOS (Intel): 0x219e40
     * @note[short] Windows: 0x60b770
     * @note[short] Android
     */
    void goToPage(int page, bool hideAll);

    /**
     * @note[short] MacOS (ARM): 0x1c9788
     * @note[short] MacOS (Intel): 0x21a0b0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void hideAll();

    /**
     * @note[short] MacOS (ARM): 0x1c8c84
     * @note[short] MacOS (Intel): 0x219540
     * @note[short] Windows: 0x60ae90
     * @note[short] Android
     */
    bool init(EffectGameObject* p0, cocos2d::CCArray* p1, float p2, float p3, int p4, float p5);

    /**
     * @note[short] MacOS (ARM): 0x1d2b9c
     * @note[short] MacOS (Intel): 0x2254e0
     * @note[short] Windows: 0x6156e0
     * @note[short] Android
     */
    void onCustomEaseArrow(int property, bool up);

    /**
     * @note[short] MacOS (ARM): 0x1d286c
     * @note[short] MacOS (Intel): 0x225220
     * @note[short] Windows: 0x6156b0
     * @note[short] Android
     */
    void onCustomEaseArrowDown(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1d27b8
     * @note[short] MacOS (Intel): 0x225180
     * @note[short] Windows: 0x615680
     * @note[short] Android
     */
    void onCustomEaseArrowUp(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1d2678
     * @note[short] MacOS (Intel): 0x225090
     * @note[short] Windows: 0x615560
     * @note[short] Android
     */
    void onCustomEaseRate(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1cdbac
     * @note[short] MacOS (Intel): 0x21fb60
     * @note[short] Windows: 0x60e310
     * @note[short] Android
     */
    void onDisableValue(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1d182c
     * @note[short] MacOS (Intel): 0x224270
     * @note[short] Windows: 0x6148b0
     * @note[short] Android
     */
    void onEase(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onEasePreview(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1d1508
     * @note[short] MacOS (Intel): 0x223fa0
     * @note[short] Windows: 0x614920
     * @note[short] Android
     */
    void onEaseRate(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x6552e4
     * @note[short] MacOS (Intel): 0x21b3a0
     * @note[short] Windows: 0x60cc50
     * @note[short] Android
     */
    void onMultiTrigger(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1c9438
     * @note[short] MacOS (Intel): 0x219d60
     * @note[short] Windows: 0x60b680
     * @note[short] Android
     */
    void onPage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x21b350
     * @note[short] Windows: 0x60cad0
     * @note[short] Android
     */
    void onSpawnedByTrigger(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1ce220
     * @note[short] MacOS (Intel): 0x220160
     * @note[short] Windows: 0x60f240
     * @note[short] Android
     */
    void onToggleTriggerValue(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x21b300
     * @note[short] Windows: 0x60c9e0
     * @note[short] Android
     */
    void onTouchTriggered(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1ced38
     * @note[short] MacOS (Intel): 0x220c70
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void postSetup();

    /**
     * @note[short] MacOS (ARM): 0x1ced24
     * @note[short] MacOS (Intel): 0x220c50
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void preSetup();

    /**
     * @note[short] MacOS (ARM): 0x1c9794
     * @note[short] MacOS (Intel): 0x21a0d0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void refreshGroupVisibility();

    /**
     * @note[short] Android
     */
    TodoReturn registerIDNameInput(int p0, IDNameInput* p1);

    /**
     * @note[short] MacOS (ARM): 0x1c9d04
     * @note[short] MacOS (Intel): 0x21a6a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void removeObjectFromGroup(cocos2d::CCObject* object, int group);

    /**
     * @note[short] MacOS (ARM): 0x1c9bb0
     * @note[short] MacOS (Intel): 0x21a520
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void removeObjectFromPage(cocos2d::CCObject* object, int page);

    /**
     * @note[short] MacOS (ARM): 0x1cdcac
     * @note[short] MacOS (Intel): 0x21fc40
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void resetDisabledValues();

    /**
     * @note[short] MacOS (ARM): 0x1c90b8
     * @note[short] MacOS (Intel): 0x219a00
     * @note[short] Android
     */
    void setCustomBGColor(cocos2d::ccColor3B const& p0);

    /**
     * @note[short] MacOS (ARM): 0x1cdb2c
     * @note[short] MacOS (Intel): 0x21fae0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void setMaxSliderValue(float value, int property);

    /**
     * @note[short] MacOS (ARM): 0x1cdaac
     * @note[short] MacOS (Intel): 0x21fa60
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void setMinSliderValue(float value, int property);

    /**
     * @note[short] Android
     */
    TodoReturn shouldLimitArrowValue(int p0);

    /**
     * @note[short] MacOS (ARM): 0x1cc714
     * @note[short] MacOS (Intel): 0x21e5f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool shouldLimitValue(int property);

    /**
     * @note[short] MacOS (Intel): 0x3b2bd0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void toggleBG(bool visible);

    /**
     * @note[short] MacOS (ARM): 0x1d2a60
     * @note[short] MacOS (Intel): 0x2253c0
     * @note[short] Windows: 0x615aa0
     * @note[short] Android
     */
    void toggleCustomEaseRateVisibility(int property, int tag);

    /**
     * @note[short] MacOS (ARM): 0x1cdd90
     * @note[short] MacOS (Intel): 0x21fd00
     * @note[short] Windows: 0x60e340
     * @note[short] Android
     */
    void toggleDisableButtons(bool visible);

    /**
     * @note[short] Windows: 0x6147a0
     * @note[short] Android
     */
    void toggleEaseRateVisibility();

    /**
     * @note[short] Android
     */
    TodoReturn toggleLimitArrowValue(int p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x1cc7d4
     * @note[short] MacOS (Intel): 0x21e6b0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void toggleLimitValue(int property, bool limit);

    /**
     * @note[short] MacOS (ARM): 0x1c94ac
     * @note[short] MacOS (Intel): 0x219dd0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void togglePageArrows(bool visible);

    /**
     * @note[short] Windows: 0x60d490
     * @note[short] Android
     */
    void triggerArrowChanged(int property, bool isRight);

    /**
     * @note[short] Android
     */
    void triggerArrowLeft(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void triggerArrowRight(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x60d340
     * @note[short] Android
     */
    void triggerSliderChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1d2920
     * @note[short] MacOS (Intel): 0x2252c0
     * @note[short] Windows: 0x615780
     * @note[short] Android
     */
    void updateCustomEaseLabel(int property, int easingType);

    /**
     * @note[short] MacOS (ARM): 0x1d1ce4
     * @note[short] MacOS (Intel): 0x2246e0
     * @note[short] Windows: 0x615980
     * @note[short] Android
     */
    void updateCustomEaseRateLabel(int property, float easingRate);

    /**
     * @note[short] MacOS (ARM): 0x1ce4f0
     * @note[short] MacOS (Intel): 0x220420
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateCustomToggleTrigger(int tag, bool toggled);

    /**
     * @note[short] MacOS (ARM): 0x1d1898
     * @note[short] MacOS (Intel): 0x2242e0
     * @note[short] Windows: 0x6143c0
     * @note[short] Android
     */
    void updateEaseLabel();

    /**
     * @note[short] Windows: 0x6145a0
     * @note[short] Android
     */
    void updateEaseRateLabel();

    /**
     * @note[short] MacOS (ARM): 0x1cab18
     * @note[short] MacOS (Intel): 0x21b610
     * @note[short] Windows: 0x60c960
     * @note[short] Android
     */
    void updateEditorLabel();

    /**
     * @note[short] MacOS (ARM): 0x1d0a74
     * @note[short] MacOS (Intel): 0x2234e0
     * @note[short] Windows: 0x613980
     * @note[short] Android
     */
    void updateInputNodeLabel(int property, std::string text);

    /**
     * @note[short] MacOS (ARM): 0x1ce52c
     * @note[short] MacOS (Intel): 0x220460
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateLabel(int property, std::string text);

    /**
     * @note[short] MacOS (ARM): 0x1ca95c
     * @note[short] MacOS (Intel): 0x21b430
     * @note[short] Windows: 0x60cbc0
     * @note[short] Android
     */
    void updateMultiTriggerBtn();

    /**
     * @note[short] MacOS (ARM): 0x1d0780
     * @note[short] MacOS (Intel): 0x2231f0
     * @note[short] Windows: 0x60f780
     * @note[short] Android
     */
    void updateSlider(int property);

    /**
     * @note[short] MacOS (ARM): 0x1cbc8c
     * @note[short] MacOS (Intel): 0x21da90
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateSlider(int property, float value);

    /**
     * @note[short] MacOS (ARM): 0x1cab90
     * @note[short] MacOS (Intel): 0x21b690
     * @note[short] Windows: 0x60ca30
     * @note[short] Android
     */
    void updateSpawnedByTrigger();

    /**
     * @note[short] MacOS (ARM): 0x1cac58
     * @note[short] MacOS (Intel): 0x21b780
     * @note[short] Windows: 0x60cb20
     * @note[short] Android
     */
    void updateTouchTriggered();

    /**
     * @note[short] MacOS (ARM): 0x1cdc34
     * @note[short] MacOS (Intel): 0x21fbd0
     * @note[short] Windows: 0x6138f0
     * @note[short] Android
     */
    void updateValue(int property, float value);

    /**
     * @note[short] MacOS (ARM): 0x1cc898
     * @note[short] MacOS (Intel): 0x21e770
     * @note[short] Windows: 0x60f340
     * @note[short] Android
     */
    void updateValueControls(int property, float value);

    /**
     * @note[short] MacOS (Intel): 0x21bae0
     * @note[short] Windows: 0x60f990
     * @note[short] Android
     */
    void valueChanged(int property, float value);
    EffectGameObject* m_gameObject;
    cocos2d::CCArray* m_gameObjects;
    bool m_touchTriggered;
    bool m_spawnTriggered;
    CCMenuItemToggler* m_touchToggle;
    CCMenuItemToggler* m_spawnToggle;
    cocos2d::CCArray* m_multiTriggerContainer;
    bool m_multiTriggered;
    float m_width;
    float m_height;
    float m_verticalOffset;
    bool m_disableTextDelegate;
    cocos2d::CCDictionary* m_valueToggles;
    cocos2d::CCDictionary* m_inputNodes;
    cocos2d::CCDictionary* m_valueControls;
    cocos2d::CCDictionary* m_customValueToggles;
    cocos2d::CCDictionary* m_disableButtons;
    cocos2d::CCLabelBMFont* m_easingLabel;
    cocos2d::CCLabelBMFont* m_easingRateLabel;
    CCMenuItemSpriteExtra* m_easingRateButton;
    EasingType m_easingType;
    float m_easingRate;
    cocos2d::CCDictionary* m_inputLabels;
    cocos2d::CCDictionary* m_triggerValues;
    cocos2d::CCDictionary* m_minSliderValues;
    cocos2d::CCDictionary* m_maxSliderValues;
    std::map<int, bool> m_shouldLimitValues;
    std::map<int, bool> m_shouldLimitArrowValues;
    bool m_disableSliderDelegate;
    bool m_effectObjects;
    cocos2d::CCArray* m_pageContainers;
    int m_page;
    float m_easingControlScale;
    cocos2d::CCArray* m_groupContainers;
    cocos2d::CCDictionary* m_customEasingTags;
    cocos2d::CCDictionary* m_customEasingLabels;
    cocos2d::CCDictionary* m_customEasingButtons;
    cocos2d::CCDictionary* m_customEasingScales;
    cocos2d::CCDictionary* m_disabledEasingButtons;
    CCMenuItemSpriteExtra* m_prevButton;
    CCMenuItemSpriteExtra* m_nextButton;
    bool m_hideAll;
    cocos2d::CCDictionary* m_unk3d8;
    int m_unk3e0;
};

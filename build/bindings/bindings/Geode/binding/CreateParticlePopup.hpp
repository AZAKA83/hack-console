#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/ColorSelectDelegate.hpp>
#include <Geode/binding/SliderDelegate.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/vector.hpp>

class CreateParticlePopup : public FLAlertLayer, public ColorSelectDelegate, public SliderDelegate {
public:
    static constexpr auto CLASS_NAME = "CreateParticlePopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CreateParticlePopup, FLAlertLayer)

    /**
     * @note[short] Windows: 0x5c1020
     * @note[short] iOS: 0x36907c
     * @note[short] Android: Rebinded
     */
    virtual  ~CreateParticlePopup();

    /**
     * @note[short] MacOS (ARM): 0x3cf350
     * @note[short] MacOS (Intel): 0x462a80
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static CreateParticlePopup* create(std::string str);

    /**
     * @note[short] MacOS (ARM): 0x3cf224
     * @note[short] MacOS (Intel): 0x462990
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static CreateParticlePopup* create(ParticleGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (Intel): 0x4629b0
     * @note[short] Windows: 0x5c11f0
     * @note[short] Android
     */
    static CreateParticlePopup* create(ParticleGameObject* object, cocos2d::CCArray* objects, std::string str);

    /**
     * @note[short] MacOS (ARM): 0x3d6a10
     * @note[short] MacOS (Intel): 0x46ad40
     * @note[short] Windows: 0x5c7ea0
     * @note[short] iOS: 0x36f844
     * @note[short] Android
     */
    virtual void update(float dt);

    /**
     * @note[short] MacOS (ARM): 0x3d7404
     * @note[short] MacOS (Intel): 0x46b810
     * @note[short] Windows: 0x5cabe0
     * @note[short] iOS: 0x370094
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x3d74f4
     * @note[short] MacOS (Intel): 0x46b920
     * @note[short] Windows: 0x5cace0
     * @note[short] iOS: 0x370184
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x3d7888
     * @note[short] MacOS (Intel): 0x46bd00
     * @note[short] Windows: 0x5cb110
     * @note[short] iOS: 0x37051c
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x3d78c4
     * @note[short] MacOS (Intel): 0x46bd50
     * @note[short] Windows: 0x83ef0
     * @note[short] iOS: 0x370558
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x3d73f8
     * @note[short] MacOS (Intel): 0x46b7e0
     * @note[short] Windows: 0x5cabd0
     * @note[short] iOS: 0x370088
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x3d72a8
     * @note[short] MacOS (Intel): 0x46b6a0
     * @note[short] Windows: 0x5ca2f0
     * @note[short] iOS: 0x36ff58
     * @note[short] Android
     */
    virtual void sliderBegan(Slider* slider);

    /**
     * @note[short] MacOS (ARM): 0x3d73c0
     * @note[short] MacOS (Intel): 0x46b780
     * @note[short] Windows: 0x5ca3b0
     * @note[short] iOS: 0x370070
     * @note[short] Android
     */
    virtual void sliderEnded(Slider* slider);

    /**
     * @note[short] MacOS (ARM): 0x3d6578
     * @note[short] MacOS (Intel): 0x46a880
     * @note[short] Windows: 0x5c7500
     * @note[short] iOS: 0x36f3d0
     * @note[short] Android
     */
    virtual void colorSelectClosed(cocos2d::CCNode* popup);

    /**
     * @note[short] MacOS (ARM): 0x3d6c10
     * @note[short] MacOS (Intel): 0x46af70
     * @note[short] Windows: 0x1265d0
     * @note[short] iOS: 0x36fa2c
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x3d6c2c
     * @note[short] MacOS (Intel): 0x46afb0
     * @note[short] Windows: 0x5c81d0
     * @note[short] iOS: 0x36fa48
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] Android
     */
    TodoReturn applyTexturePage();

    /**
     * @note[short] MacOS (ARM): 0x3d3bd8
     * @note[short] MacOS (Intel): 0x467a70
     * @note[short] Windows: 0x5c7a00
     * @note[short] Android
     */
    void centerAlignParticle(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3d434c
     * @note[short] MacOS (Intel): 0x4681d0
     * @note[short] Windows: 0x5c5f70
     * @note[short] Android
     */
    void createParticleSlider(gjParticleValue value, int page, bool centerLabel, cocos2d::CCPoint position, cocos2d::CCArray* displayNodes);

    /**
     * @note[short] MacOS (ARM): 0x3d3fe0
     * @note[short] MacOS (Intel): 0x467e50
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    cocos2d::CCNode* getPage(int page);

    /**
     * @note[short] MacOS (ARM): 0x3d52dc
     * @note[short] MacOS (Intel): 0x4691e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    CCMenuItemSpriteExtra* getPageButton(int page);

    /**
     * @note[short] MacOS (ARM): 0x3d3fec
     * @note[short] MacOS (Intel): 0x467e70
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    cocos2d::CCArray* getPageContainer(int page);

    /**
     * @note[short] MacOS (ARM): 0x3d433c
     * @note[short] MacOS (Intel): 0x468190
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    cocos2d::CCDictionary* getPageInputNodes(int page);

    /**
     * @note[short] MacOS (ARM): 0x3d3fd8
     * @note[short] MacOS (Intel): 0x467e40
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    cocos2d::CCMenu* getPageMenu(int page);

    /**
     * @note[short] MacOS (ARM): 0x3d4344
     * @note[short] MacOS (Intel): 0x4681b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    cocos2d::CCDictionary* getPageSliders(int page);

    /**
     * @note[short] MacOS (ARM): 0x3cf3f0
     * @note[short] MacOS (Intel): 0x462b00
     * @note[short] Windows: 0x5c1420
     * @note[short] Android
     */
    bool init(ParticleGameObject* object, cocos2d::CCArray* objects, std::string str);

    /**
     * @note[short] MacOS (ARM): 0x3d7288
     * @note[short] MacOS (Intel): 0x46b670
     * @note[short] Windows: 0x5c93f0
     * @note[short] Android
     */
    float maxSliderValueForType(gjParticleValue type);

    /**
     * @note[short] MacOS (ARM): 0x3d7268
     * @note[short] MacOS (Intel): 0x46b650
     * @note[short] Windows: 0x5c94c0
     * @note[short] Android
     */
    float minSliderValueForType(gjParticleValue type);

    /**
     * @note[short] MacOS (ARM): 0x3d4e30
     * @note[short] Windows: 0x5c6b60
     * @note[short] Android
     */
    void onAnimateActiveOnly(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2988b4
     * @note[short] Windows: 0x5c6ad0
     * @note[short] Android
     */
    void onAnimateOnTrigger(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3d5b48
     * @note[short] MacOS (Intel): 0x469ac0
     * @note[short] Windows: 0x5c83d0
     * @note[short] Android
     */
    void onCalcEmission(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3d37cc
     * @note[short] MacOS (Intel): 0x467600
     * @note[short] Windows: 0x5caa90
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3d3960
     * @note[short] MacOS (Intel): 0x4677d0
     * @note[short] Windows: 0x5c7120
     * @note[short] Android
     */
    void onCopySettings(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3d41f0
     * @note[short] MacOS (Intel): 0x468060
     * @note[short] Windows: 0x5c6fb0
     * @note[short] Android
     */
    void onDuplicateColor(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3d5ab8
     * @note[short] MacOS (Intel): 0x469a20
     * @note[short] Windows: 0x5c8330
     * @note[short] Android
     */
    void onDurationForever(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3d4f20
     * @note[short] MacOS (Intel): 0x468df0
     * @note[short] Windows: 0x5c6c80
     * @note[short] Android
     */
    void onDynamicColor(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3d4d98
     * @note[short] MacOS (Intel): 0x468c10
     * @note[short] Windows: 0x5c6a10
     * @note[short] Android
     */
    void onDynamicRotation(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3d3ff8
     * @note[short] MacOS (Intel): 0x467e90
     * @note[short] Windows: 0x5ca710
     * @note[short] Android
     */
    void onEmitterMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3d50f4
     * @note[short] MacOS (Intel): 0x469030
     * @note[short] Windows: 0x5c6aa0
     * @note[short] Android
     */
    void onEndRGBVarSync(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3d5b00
     * @note[short] MacOS (Intel): 0x469a70
     * @note[short] Windows: 0x5c8380
     * @note[short] Android
     */
    void onMaxEmission(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3d3b20
     * @note[short] MacOS (Intel): 0x4679b0
     * @note[short] Windows: 0x5c77e0
     * @note[short] Android
     */
    void onMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3d50b4
     * @note[short] MacOS (Intel): 0x468fd0
     * @note[short] Windows: 0x5c6a40
     * @note[short] Android
     */
    void onOrderSensitive(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3d3d38
     * @note[short] MacOS (Intel): 0x467ba0
     * @note[short] Windows: 0x5c7a50
     * @note[short] Android
     */
    void onPage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3d3a78
     * @note[short] MacOS (Intel): 0x4678f0
     * @note[short] Windows: 0x5c7370
     * @note[short] Android
     */
    void onPasteSettings(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3d3f48
     * @note[short] MacOS (Intel): 0x467dc0
     * @note[short] Windows: 0x5ca690
     * @note[short] Android
     */
    void onPosType(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2989ac
     * @note[short] MacOS (Intel): 0x468d60
     * @note[short] Windows: 0x5c6bf0
     * @note[short] Android
     */
    void onQuickStart(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3d3c28
     * @note[short] MacOS (Intel): 0x467ac0
     * @note[short] Windows: 0x5c6e80
     * @note[short] Android
     */
    void onSelectColor(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3d5114
     * @note[short] MacOS (Intel): 0x469060
     * @note[short] Windows: 0x5c78c0
     * @note[short] Android
     */
    void onSelectParticleTexture(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3d50d4
     * @note[short] MacOS (Intel): 0x469000
     * @note[short] Windows: 0x5c6a70
     * @note[short] Android
     */
    void onStartRGBVarSync(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onTexturePage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3d4cb8
     * @note[short] MacOS (Intel): 0x468b00
     * @note[short] Windows: 0x5c6900
     * @note[short] Android
     */
    void onToggleBlending(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3d4078
     * @note[short] MacOS (Intel): 0x467f10
     * @note[short] Windows: 0x5c8110
     * @note[short] Android
     */
    void onTogglePerfLog(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3d4d38
     * @note[short] MacOS (Intel): 0x468ba0
     * @note[short] Windows: 0x5c6970
     * @note[short] Android
     */
    void onToggleStartRadiusEqualToEnd(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3d4d58
     * @note[short] MacOS (Intel): 0x468bd0
     * @note[short] Windows: 0x5c69d0
     * @note[short] Android
     */
    void onToggleStartRotationIsDir(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3d4cf8
     * @note[short] MacOS (Intel): 0x468b40
     * @note[short] Windows: 0x5c6940
     * @note[short] Android
     */
    void onToggleStartSizeEqualToEnd(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3d4d18
     * @note[short] MacOS (Intel): 0x468b70
     * @note[short] Windows: 0x5c69a0
     * @note[short] Android
     */
    void onToggleStartSpinEqualToEnd(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3d4ff8
     * @note[short] MacOS (Intel): 0x468ef0
     * @note[short] Windows: 0x5c6da0
     * @note[short] Android
     */
    void onUniformColor(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3d73d8
     * @note[short] MacOS (Intel): 0x46b7c0
     * @note[short] Windows: 0x5ca470
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool particleValueIsInt(gjParticleValue type);

    /**
     * @note[short] MacOS (ARM): 0x3d5928
     * @note[short] MacOS (Intel): 0x469860
     * @note[short] Windows: 0x5ca3c0
     * @note[short] Android
     */
    void sliderChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3d56f8
     * @note[short] MacOS (Intel): 0x469640
     * @note[short] Windows: 0x5c8490
     * @note[short] Android
     */
    std::string titleForParticleValue(gjParticleValue type);

    /**
     * @note[short] MacOS (ARM): 0x3d52e8
     * @note[short] MacOS (Intel): 0x469200
     * @note[short] Windows: 0x5ca790
     * @note[short] Android
     */
    void toggleGravityMode(bool gravityMode);

    /**
     * @note[short] MacOS (ARM): 0x3d40d0
     * @note[short] MacOS (Intel): 0x467f70
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateColorSprite(int tag);

    /**
     * @note[short] MacOS (ARM): 0x3d5724
     * @note[short] MacOS (Intel): 0x469680
     * @note[short] Windows: 0x5ca4e0
     * @note[short] Android
     */
    void updateInputNodeStringForType(gjParticleValue type);

    /**
     * @note[short] MacOS (ARM): 0x3d5be4
     * @note[short] MacOS (Intel): 0x469b70
     * @note[short] Windows: 0x5c95e0
     * @note[short] Android
     */
    void updateParticleValueForType(float value, gjParticleValue type, cocos2d::CCParticleSystemQuad* particle);

    /**
     * @note[short] MacOS (ARM): 0x3d59f8
     * @note[short] MacOS (Intel): 0x469950
     * @note[short] Windows: 0x5ca250
     * @note[short] Android
     */
    void updateSliderForType(gjParticleValue type);

    /**
     * @note[short] MacOS (ARM): 0x3d6d14
     * @note[short] MacOS (Intel): 0x46b090
     * @note[short] Windows: 0x5c8d60
     * @note[short] Android
     */
    float valueForParticleValue(gjParticleValue type);

    /**
     * @note[short] MacOS (ARM): 0x3d6510
     * @note[short] MacOS (Intel): 0x46a810
     * @note[short] Windows: 0x5caa00
     * @note[short] Android
     */
    void willClose();
    ParticleGameObject* m_targetObject;
    cocos2d::CCArray* m_targetObjects;
    cocos2d::CCArray* m_particles;
    bool m_disableTextDelegate;
    cocos2d::CCParticleSystemQuad* m_particle;
    cocos2d::CCParticleSystemQuad* m_standaloneParticle;
    int m_touchID;
    cocos2d::CCPoint m_touchDelta;
    cocos2d::CCArray* m_inputDicts;
    cocos2d::CCArray* m_sliderDicts;
    cocos2d::CCArray* m_pageNodes;
    cocos2d::CCArray* m_pageButtons;
    cocos2d::CCArray* m_pageMenus;
    cocos2d::CCArray* m_pageObjectArrays;
    ParticlePreviewLayer* m_previewLayer;
    CCMenuItemSpriteExtra* m_mode1Button;
    CCMenuItemSpriteExtra* m_mode2Button;
    CCMenuItemSpriteExtra* m_mode3Button;
    float m_elapsed;
    int m_selectedMode;
    CCMenuItemToggler* m_freeToggler;
    CCMenuItemToggler* m_relativeToggler;
    CCMenuItemToggler* m_groupedToggler;
    CCMenuItemToggler* m_objColorToggler;
    CCMenuItemToggler* m_uniformColorToggler;
    CCMenuItemToggler* m_gravityToggler;
    CCMenuItemToggler* m_radiusToggler;
    cocos2d::CCSprite* m_selectSprite;
    std::vector<CCMenuItemSpriteExtra*> m_particleButtons;
    cocos2d::CCLabelBMFont* m_texturePageLabel;
    int m_texturePage;
    cocos2d::CCSprite* m_particleColorSprite;
    cocos2d::CCSprite* m_startColorSprite;
    cocos2d::CCSprite* m_endColorSprite;
    cocos2d::CCArray* m_gravityObjects;
    cocos2d::CCArray* m_radiusObjects;
    bool m_perfLogEnabled;
    float m_perfLogElapsed;
    cocos2d::CCLabelBMFont* m_perfLogLabel;
    int m_particleIndex;
    int m_page;
    bool m_useObjectColor;
    bool m_animateOnTrigger;
    bool m_onlyAnimateActive;
    bool m_quickStart;
    float m_respawnResult;
};

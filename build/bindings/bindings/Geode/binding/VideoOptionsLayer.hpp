#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/mapping/CCObject.hpp>
#include <Geode/mapping/CCPoint.hpp>

class VideoOptionsLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "VideoOptionsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(VideoOptionsLayer, FLAlertLayer)

    /**
     * @note[short] Windows: 0x4ca910
     * @note[short] iOS: 0x113b88
     * @note[short] Android: Rebinded
     */
    virtual  ~VideoOptionsLayer();

    /**
     * @note[short] Windows: 0x4cc770
     * @note[short] iOS: 0x1139bc
     * @note[short] Android
     */
    static VideoOptionsLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x77539c
     * @note[short] MacOS (Intel): 0x880110
     * @note[short] Windows: 0x4cc8b0
     * @note[short] iOS: 0x113bc0
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x776d1c
     * @note[short] MacOS (Intel): 0x881c80
     * @note[short] Windows: 0x4ce740
     * @note[short] iOS: 0x1151f4
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x7761d8
     * @note[short] MacOS (Intel): 0x881040
     * @note[short] Windows: 0x4ce750
     * @note[short] Android
     */
    CCMenuItemToggler* createToggleButton(std::string label, cocos2d::SEL_MenuHandler selector, bool toggled, cocos2d::CCMenu* menu, cocos2d::CCPoint position, float scale, float width, bool center, cocos2d::CCArray* nodes);

    /**
     * @note[short] MacOS (ARM): 0x776924
     * @note[short] MacOS (Intel): 0x881800
     * @note[short] Windows: 0x4cdc10
     * @note[short] Android
     */
    void onAdvanced(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x7765b4
     * @note[short] MacOS (Intel): 0x881460
     * @note[short] Windows: 0x4ce1e0
     * @note[short] iOS: 0x114c64
     * @note[short] Android
     */
    void onApply(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x881290
     * @note[short] Windows: 0x4cdd60
     * @note[short] Android
     */
    void onBorderless(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x8812b0
     * @note[short] Windows: 0x4cdd80
     * @note[short] Android
     */
    void onBorderlessFix(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x77655c
     * @note[short] MacOS (Intel): 0x881400
     * @note[short] Windows: 0x4ce6b0
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x881270
     * @note[short] Windows: 0x4cdd40
     * @note[short] Android
     */
    void onFullscreen(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x776c38
     * @note[short] MacOS (Intel): 0x881bc0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x776470
     * @note[short] MacOS (Intel): 0x8812e0
     * @note[short] Windows: 0x4cde80
     * @note[short] Android
     */
    void onResolutionNext(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x776464
     * @note[short] MacOS (Intel): 0x8812c0
     * @note[short] Windows: 0x4cde70
     * @note[short] Android
     */
    void onResolutionPrev(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x7764ec
     * @note[short] MacOS (Intel): 0x881380
     * @note[short] Windows: 0x4cddb0
     * @note[short] Android
     */
    void onTextureQualityNext(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x77647c
     * @note[short] MacOS (Intel): 0x881300
     * @note[short] Windows: 0x4cdda0
     * @note[short] Android
     */
    void onTextureQualityPrev(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x776cec
     * @note[short] MacOS (Intel): 0x881c50
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void reloadMenu();

    /**
     * @note[short] MacOS (ARM): 0x776ab8
     * @note[short] MacOS (Intel): 0x881a20
     * @note[short] Windows: 0x4cdfa0
     * @note[short] Android
     */
    void toggleResolution();

    /**
     * @note[short] MacOS (ARM): 0x776864
     * @note[short] MacOS (Intel): 0x881730
     * @note[short] Windows: 0x4cde90
     * @note[short] Android
     */
    void updateResolution(int resolution);

    /**
     * @note[short] MacOS (ARM): 0x7767f8
     * @note[short] MacOS (Intel): 0x8816c0
     * @note[short] Windows: 0x4cddc0
     * @note[short] Android
     */
    void updateTextureQuality(int quality);
    CCMenuItemSpriteExtra* m_prevResolutionBtn;
    CCMenuItemSpriteExtra* m_nextResolutionBtn;
    cocos2d::CCLabelBMFont* m_windowedResolutionLabel;
    cocos2d::CCLabelBMFont* m_selectedResolutionLabel;
    cocos2d::CCLabelBMFont* m_qualityLabel;
    int m_textureQuality;
    cocos2d::CCArray* m_availableResolutions;
    CCMenuItemToggler* m_borderlessToggle;
    cocos2d::CCLabelBMFont* m_borderlessLabel;
    CCMenuItemToggler* m_fixToggle;
    cocos2d::CCLabelBMFont* m_fixLabel;
    bool m_fullscreen;
    bool m_borderless;
    bool m_fix;
    int m_currentResolution;
};

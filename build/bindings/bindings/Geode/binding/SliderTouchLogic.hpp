#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SliderThumb.hpp>
#include <Geode/mapping/CCMenu.hpp>
#include <Geode/mapping/CCObject.hpp>
#include <Geode/mapping/CCPoint.hpp>

class SliderTouchLogic : public cocos2d::CCMenu {
public:
    static constexpr auto CLASS_NAME = "SliderTouchLogic";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SliderTouchLogic, cocos2d::CCMenu)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SliderTouchLogic();

    /**
     * @note[short] Windows: 0x84410
     * @note[short] Android: Rebinded
     */
    virtual  ~SliderTouchLogic();

    /**
     * @note[short] MacOS (ARM): 0x284880
     * @note[short] MacOS (Intel): 0x2ee9f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x38a170
     * @note[short] Android
     */
    static SliderTouchLogic* create(cocos2d::CCNode* target, cocos2d::SEL_MenuHandler selector, char const* thumb, char const* thumbSel, float scale);

    /**
     * @note[short] MacOS (ARM): 0x284bac
     * @note[short] MacOS (Intel): 0x2eed50
     * @note[short] Windows: 0x84450
     * @note[short] iOS: 0x38a3a0
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x284dc0
     * @note[short] MacOS (Intel): 0x2eef80
     * @note[short] Windows: 0x84540
     * @note[short] iOS: 0x38a498
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x284d10
     * @note[short] MacOS (Intel): 0x2eeec0
     * @note[short] Windows: 0x84500
     * @note[short] iOS: 0x38a448
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x285148
     * @note[short] MacOS (Intel): 0x2ef3b0
     * @note[short] Windows: 0x846a0
     * @note[short] iOS: 0x38a62c
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x2849cc
     * @note[short] MacOS (Intel): 0x2eeb30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x38a2b4
     * @note[short] Android
     */
    bool init(cocos2d::CCNode* target, cocos2d::SEL_MenuHandler selector, char const* thumb, char const* thumbSel, float scale);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void setMaxOffset(float offset);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void setRotated(bool rotated);
    float m_unknownUnused;
    float m_length;
    SliderThumb* m_thumb;
    Slider* m_slider;
    bool m_activateThumb;
    cocos2d::CCPoint m_position;
    bool m_rotated;
};

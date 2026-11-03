#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SliderTouchLogic.hpp>
#include <Geode/mapping/CCLayer.hpp>
#include <Geode/mapping/CCObject.hpp>

class Slider : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "Slider";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(Slider, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): 0x285a84
     * @note[short] MacOS (Intel): 0x78fa0
     * @note[short] Windows: 0x83f50
     * @note[short] iOS: 0x30a50
     * @note[short] Android: Rebinded
     */
    virtual  ~Slider();

    /**
     * @note[short] MacOS (ARM): 0x285180
     * @note[short] MacOS (Intel): 0x2ef3f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x38a664
     * @note[short] Android
     */
    static Slider* create(cocos2d::CCNode* target, cocos2d::SEL_MenuHandler handler);

    /**
     * @note[short] MacOS (ARM): 0x285284
     * @note[short] MacOS (Intel): 0x2ef510
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x38a68c
     * @note[short] Android
     */
    static Slider* create(cocos2d::CCNode* target, cocos2d::SEL_MenuHandler handler, float scale);

    /**
     * @note[short] MacOS (ARM): 0x285398
     * @note[short] MacOS (Intel): 0x2ef630
     * @note[short] Windows: 0x84700
     * @note[short] iOS: 0x38a6b0
     * @note[short] Android
     */
    static Slider* create(cocos2d::CCNode* target, cocos2d::SEL_MenuHandler handler, char const* bar, char const* groove, char const* thumb, char const* thumbSel, float scale);

    /**
     * @note[short] MacOS (ARM): 0x285974
     * @note[short] MacOS (Intel): 0x2efcd0
     * @note[short] Windows: 0x84ad0
     * @note[short] iOS: 0x38ab90
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x2859b4
     * @note[short] MacOS (Intel): 0x2efd50
     * @note[short] Windows: 0x84b10
     * @note[short] iOS: 0x38abd0
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x285994
     * @note[short] MacOS (Intel): 0x2efd10
     * @note[short] Windows: 0x84af0
     * @note[short] iOS: 0x38abb0
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void disableSlider();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void disableTouch();

    /**
     * @note[short] MacOS (ARM): 0x28579c
     * @note[short] MacOS (Intel): 0x2efaa0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void enableSlider();

    /**
     * @note[short] MacOS (ARM): 0x28595c
     * @note[short] MacOS (Intel): 0x2efc90
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool getLiveDragging();

    /**
     * @note[short] MacOS (ARM): 0x5b9d84
     * @note[short] MacOS (Intel): 0x2ef930
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    SliderThumb* getThumb();

    /**
     * @note[short] MacOS (ARM): 0x285858
     * @note[short] MacOS (Intel): 0x2efb60
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    float getValue();

    /**
     * @note[short] MacOS (ARM): 0x285a6c
     * @note[short] MacOS (Intel): 0x2efe30
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void hideGroove(bool visibility);

    /**
     * @note[short] MacOS (ARM): 0x2854a8
     * @note[short] MacOS (Intel): 0x2ef750
     * @note[short] Windows: 0x84200
     * @note[short] iOS: 0x38a7c0
     * @note[short] Android
     */
    bool init(cocos2d::CCNode* target, cocos2d::SEL_MenuHandler handler, char const* bar, char const* groove, char const* thumb, char const* thumbSel, float scale);

    /**
     * @note[short] MacOS (ARM): 0x28594c
     * @note[short] MacOS (Intel): 0x2efc70
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void setBarVisibility(bool visibility);

    /**
     * @note[short] MacOS (ARM): 0x285968
     * @note[short] MacOS (Intel): 0x2efcb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void setLiveDragging(bool activateThumb);

    /**
     * @note[short] Windows: 0x84bd0
     * @note[short] Android
     */
    void setMaxOffset(float offset);

    /**
     * @note[short] MacOS (Intel): 0x7208b0
     * @note[short] Windows: 0x84b30
     * @note[short] Android
     */
    void setRotated(bool rotated);

    /**
     * @note[short] Android
     */
    void setSnap(float p0, float p1);

    /**
     * @note[short] Android
     */
    void setSnapStep(float p0);

    /**
     * @note[short] Android
     */
    void setSnapStepCalc(float p0, float p1, float p2);

    /**
     * @note[short] MacOS (ARM): 0x285770
     * @note[short] MacOS (Intel): 0x2efa70
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x38aa84
     * @note[short] Android
     */
    void setValue(float val);

    /**
     * @note[short] MacOS (ARM): 0x284c4c
     * @note[short] MacOS (Intel): 0x2eedf0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void sliderBegan();

    /**
     * @note[short] MacOS (ARM): 0x284d58
     * @note[short] MacOS (Intel): 0x2eef10
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void sliderEnded();

    /**
     * @note[short] MacOS (ARM): 0x285008
     * @note[short] MacOS (Intel): 0x2ef230
     * @note[short] Windows: 0x84a50
     * @note[short] iOS: 0x38a5b8
     * @note[short] Android
     */
    void updateBar();
    SliderTouchLogic* m_touchLogic;
    cocos2d::CCSprite* m_sliderBar;
    cocos2d::CCSprite* m_groove;
    float m_width;
    float m_height;
    SliderDelegate* m_delegate;
    bool m_enabled;
};

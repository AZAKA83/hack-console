#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCMenuItemImage.hpp>
#include <Geode/mapping/CCObject.hpp>

class SliderThumb : public cocos2d::CCMenuItemImage {
public:
    static constexpr auto CLASS_NAME = "SliderThumb";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SliderThumb, cocos2d::CCMenuItemImage)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SliderThumb();

    /**
     * @note[short] Windows: 0x83f10
     * @note[short] Android: Rebinded
     */
    virtual  ~SliderThumb();

    /**
     * @note[short] MacOS (ARM): 0x284268
     * @note[short] MacOS (Intel): 0x2ee300
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x389d98
     * @note[short] Android
     */
    static SliderThumb* create(cocos2d::CCNode* target, cocos2d::SEL_MenuHandler selector, char const* normalFrame, char const* selectedFrame);

    /**
     * @note[short] MacOS (ARM): 0x2844c4
     * @note[short] MacOS (Intel): 0x2ee5a0
     * @note[short] Windows: 0x83f90
     * @note[short] iOS: 0x38a0ec
     * @note[short] Android
     */
    float getRawValue();

    /**
     * @note[short] MacOS (ARM): 0x2844c4
     * @note[short] MacOS (Intel): 0x2ee5a0
     * @note[short] Windows: 0x83f90
     * @note[short] iOS: 0x389ef8
     * @note[short] Android
     */
    float getValue();

    /**
     * @note[short] MacOS (ARM): 0x284370
     * @note[short] MacOS (Intel): 0xb9c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init(cocos2d::CCNode* target, cocos2d::SEL_MenuHandler selector, char const* normalFrame, char const* selectedFrame);

    /**
     * @note[short] MacOS (ARM): 0x2846c0
     * @note[short] MacOS (Intel): 0x2ee7e0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void setMaxOffset(float offset);

    /**
     * @note[short] MacOS (ARM): 0xfed8
     * @note[short] MacOS (Intel): 0x2ee450
     * @note[short] Windows: Out of line
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
     * @note[short] MacOS (ARM): 0x2845b0
     * @note[short] MacOS (Intel): 0x2ee6a0
     * @note[short] Windows: 0x840c0
     * @note[short] iOS: 0x389f70
     * @note[short] Android
     */
    void setValue(float value);
    float m_length;
    bool m_vertical;
    float m_snapValue;
    float m_snapThreshold;
    float m_snapStep;
};

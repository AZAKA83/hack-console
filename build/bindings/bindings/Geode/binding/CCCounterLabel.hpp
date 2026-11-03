#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCLabelBMFont.hpp>

class CCCounterLabel : public cocos2d::CCLabelBMFont {
public:
    static constexpr auto CLASS_NAME = "CCCounterLabel";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCCounterLabel, cocos2d::CCLabelBMFont)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     CCCounterLabel();

    /**
     * @note[short] Windows: 0x46de0
     * @note[short] iOS: 0x3e380
     * @note[short] Android: Rebinded
     */
    virtual  ~CCCounterLabel();

    /**
     * @note[short] MacOS (ARM): 0x46d77c
     * @note[short] MacOS (Intel): 0x512610
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static CCCounterLabel* create(int count, char const* font, FormatterType type);

    /**
     * @note[short] MacOS (ARM): 0x46da74
     * @note[short] MacOS (Intel): 0x512940
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void calculateStepSize(int steps);

    /**
     * @note[short] MacOS (ARM): 0x46d9e0
     * @note[short] MacOS (Intel): 0x512890
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void disableCounter();

    /**
     * @note[short] MacOS (ARM): 0x46d924
     * @note[short] MacOS (Intel): 0x5127d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void enableCounter();

    /**
     * @note[short] MacOS (ARM): 0x46d918
     * @note[short] MacOS (Intel): 0x5127b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void fastUpdateCounter();

    /**
     * @note[short] MacOS (ARM): 0x46dab0
     * @note[short] MacOS (Intel): 0x512990
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    int getTargetCount();

    /**
     * @note[short] MacOS (ARM): 0x46d890
     * @note[short] MacOS (Intel): 0x512730
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool init(int count, char const* font, FormatterType type);

    /**
     * @note[short] MacOS (ARM): 0x46da00
     * @note[short] MacOS (Intel): 0x5128c0
     * @note[short] Windows: 0x46e50
     * @note[short] Android
     */
    void setTargetCount(int count);

    /**
     * @note[short] MacOS (ARM): 0x46d95c
     * @note[short] MacOS (Intel): 0x512810
     * @note[short] Windows: 0x46ee0
     * @note[short] Android
     */
    void updateCounter(float dt);

    /**
     * @note[short] MacOS (ARM): 0x46dab8
     * @note[short] MacOS (Intel): 0x5129a0
     * @note[short] Windows: 0x46f60
     * @note[short] Android
     */
    void updateString();
    int m_stepSize;
    int m_targetCount;
    int m_currentCount;
    bool m_counterEnabled;
    int m_stepCount;
    bool m_dontSchedule;
    FormatterType m_formatterType;
};

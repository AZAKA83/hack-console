#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>
#include <Geode/mapping/CCObject.hpp>
#include <Geode/mapping/CCPoint.hpp>

class GJSelectionStrip : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GJSelectionStrip";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJSelectionStrip, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x3a8f90
     * @note[short] Android: Rebinded
     */
    virtual  ~GJSelectionStrip();

    /**
     * @note[short] Android
     */
    static GJSelectionStrip* create(cocos2d::CCMenu* p0, cocos2d::CCNode* p1, cocos2d::CCPoint p2, float p3, cocos2d::CCObject* p4, cocos2d::SEL_MenuHandler p5);

    /**
     * @note[short] Android
     */
    TodoReturn addAction(char const* p0, float p1, cocos2d::SEL_MenuHandler p2, float p3);

    /**
     * @note[short] Android
     */
    TodoReturn addButton(char const* p0, float p1, cocos2d::SEL_MenuHandler p2, float p3);

    /**
     * @note[short] Android
     */
    TodoReturn addCountLabel(float p0, int p1);

    /**
     * @note[short] Android
     */
    bool init(cocos2d::CCMenu* p0, cocos2d::CCNode* p1, cocos2d::CCPoint p2, float p3, cocos2d::CCObject* p4, cocos2d::SEL_MenuHandler p5);

    /**
     * @note[short] Android
     */
    void setCount(int p0);

    /**
     * @note[short] Android
     */
    void setStripVisible(bool p0);
};

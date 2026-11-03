#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>

class DungeonBarsSprite : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "DungeonBarsSprite";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(DungeonBarsSprite, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     DungeonBarsSprite();

    /**
     * @note[short] Windows: 0x80dc0
     * @note[short] iOS: 0x17c58
     * @note[short] Android: Rebinded
     */
    virtual  ~DungeonBarsSprite();

    /**
     * @note[short] MacOS (ARM): 0x405b10
     * @note[short] MacOS (Intel): 0x49dba0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static DungeonBarsSprite* create();

    /**
     * @note[short] MacOS (ARM): 0x408fc4
     * @note[short] MacOS (Intel): 0x4a1490
     * @note[short] Windows: 0x585010
     * @note[short] iOS: 0x3ae5c8
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x409048
     * @note[short] MacOS (Intel): 0x4a1510
     * @note[short] Windows: 0x585090
     * @note[short] iOS: 0x3ae648
     * @note[short] Android
     */
    virtual void visit();

    /**
     * @note[short] MacOS (ARM): 0x407b64
     * @note[short] MacOS (Intel): 0x49fe70
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void animateOutBars();
    cocos2d::CCSprite* m_barsSprite;
};

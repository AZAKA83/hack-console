#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>

class GJSmartBlockPreviewSprite : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GJSmartBlockPreviewSprite";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJSmartBlockPreviewSprite, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GJSmartBlockPreviewSprite();

    /**
     * @note[short] Windows: 0x3b6ba0
     * @note[short] iOS: 0x9614
     * @note[short] Android: Rebinded
     */
    virtual  ~GJSmartBlockPreviewSprite();

    /**
     * @note[short] MacOS (ARM): 0x38e1a0
     * @note[short] MacOS (Intel): 0x415e80
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static GJSmartBlockPreviewSprite* create();

    /**
     * @note[short] MacOS (ARM): 0x38e784
     * @note[short] MacOS (Intel): 0x416470
     * @note[short] Windows: 0x8b060
     * @note[short] iOS: 0x962c
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x38e788
     * @note[short] MacOS (Intel): 0x416480
     * @note[short] Windows: 0x3bcef0
     * @note[short] iOS: 0x9630
     * @note[short] Android
     */
    virtual void visit();
};

#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>

class CCNodeContainer : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "CCNodeContainer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCNodeContainer, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x353030
     * @note[short] Android: Rebinded
     */
    virtual  ~CCNodeContainer();

    /**
     * @note[short] MacOS (ARM): 0xd0cbc
     * @note[short] MacOS (Intel): 0xf0010
     * @note[short] Android
     */
    static CCNodeContainer* create();

    /**
     * @note[short] MacOS (ARM): 0x117c28
     * @note[short] MacOS (Intel): 0x144800
     * @note[short] Windows: 0x8b060
     * @note[short] iOS: 0x2a623c
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x117c2c
     * @note[short] MacOS (Intel): 0x144810
     * @note[short] Windows: 0x353070
     * @note[short] iOS: 0x2a6240
     * @note[short] Android
     */
    virtual void visit();
};

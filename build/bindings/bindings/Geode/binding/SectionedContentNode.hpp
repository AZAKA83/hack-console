#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>

class SectionedContentNode : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "SectionedContentNode";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SectionedContentNode, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x80dc0
     * @note[short] Android: Rebinded
     */
    virtual  ~SectionedContentNode();

    /**
     * @note[short] MacOS (ARM): 0x84ac70
     * @note[short] MacOS (Intel): 0x96e440
     * @note[short] Windows: 0x80c80
     * @note[short] iOS: 0x526ba0
     * @note[short] Android
     */
    virtual void addChild(cocos2d::CCNode* p0, int p1, int p2);

    /**
     * @note[short] MacOS (ARM): 0x84ac88
     * @note[short] MacOS (Intel): 0x96e460
     * @note[short] Windows: 0x80ca0
     * @note[short] iOS: 0x526bb8
     * @note[short] Android
     */
    virtual void removeAllChildrenWithCleanup(bool p0);
};

#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>

class VirtualKeyboardNode : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "VirtualKeyboardNode";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(VirtualKeyboardNode, cocos2d::CCNode)

    /**
     * @note[short] Android
     */
    static VirtualKeyboardNode* create(InputCaptureDelegate* p0);

    /**
     * @note[short] Android
     */
    TodoReturn buildKeys();

    /**
     * @note[short] Android
     */
    bool init(InputCaptureDelegate* p0);

    /**
     * @note[short] Android
     */
    void onKey(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn refreshModifierVisuals();

    /**
     * @note[short] Android
     */
    TodoReturn resetModifiers();
};

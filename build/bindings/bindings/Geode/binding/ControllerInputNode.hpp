#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>
#include <Geode/mapping/CCPoint.hpp>

class ControllerInputNode : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "ControllerInputNode";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(ControllerInputNode, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x448080
     * @note[short] Android: Rebinded
     */
    virtual  ~ControllerInputNode();

    /**
     * @note[short] Android
     */
    static ControllerInputNode* create(InputCaptureDelegate* p0, cocos2d::CCSize const& p1);

    /**
     * @note[short] Windows: 0x447b60
     * @note[short] Android
     */
    bool init(InputCaptureDelegate* p0, cocos2d::CCSize const& p1);

    /**
     * @note[short] Android
     */
    void onButton(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn refreshVisuals();

    /**
     * @note[short] Android
     */
    void setActiveKey(int p0);

    /**
     * @note[short] Android
     */
    void setController2(bool p0);
};

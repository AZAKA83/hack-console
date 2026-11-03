#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCObject.hpp>

class InheritanceNode : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "InheritanceNode";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(InheritanceNode, cocos2d::CCObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     InheritanceNode();

    /**
     * @note[short] Windows: 0x362410
     * @note[short] Android: Rebinded
     */
    virtual  ~InheritanceNode();

    /**
     * @note[short] MacOS (ARM): 0x263700
     * @note[short] MacOS (Intel): 0x2c3c00
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static InheritanceNode* create(int colorID, InheritanceNode* node);

    /**
     * @note[short] MacOS (ARM): 0x263778
     * @note[short] MacOS (Intel): 0x2c3c80
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init(int colorID, InheritanceNode* node);
    int m_colorID;
    InheritanceNode* m_inheritanceNode;
    ColorAction* m_colorAction;
    bool m_unk050;
    bool m_unk051;
};

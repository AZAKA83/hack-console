#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>

class GJActionManager : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GJActionManager";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJActionManager, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GJActionManager();

    /**
     * @note[short] MacOS (ARM): 0x5f59ec
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x39ad18
     * @note[short] Android: Rebinded
     */
     ~GJActionManager();

    /**
     * @note[short] MacOS (ARM): 0x5f5aa4
     * @note[short] MacOS (Intel): 0x6e0f20
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static GJActionManager* create();

    /**
     * @note[short] MacOS (ARM): 0x5f5b38
     * @note[short] MacOS (Intel): 0x6e0fb0
     * @note[short] Windows: 0x3057d0
     * @note[short] iOS: 0x39adac
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x5f5bac
     * @note[short] MacOS (Intel): 0x6e1020
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    cocos2d::CCAction* getInternalAction(int id);

    /**
     * @note[short] MacOS (ARM): 0x5f5b70
     * @note[short] MacOS (Intel): 0x6e0ff0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void runInternalAction(cocos2d::CCAction* action, cocos2d::CCNode* target);

    /**
     * @note[short] MacOS (ARM): 0x14fe0
     * @note[short] MacOS (Intel): 0x178d0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void stopAllInternalActions();

    /**
     * @note[short] MacOS (ARM): 0x5f5bb8
     * @note[short] MacOS (Intel): 0x6e1040
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void stopInternalAction(int id);

    /**
     * @note[short] MacOS (ARM): 0x5f5ca8
     * @note[short] MacOS (Intel): 0x6e1130
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateInternalActions(float dt, bool remove);
    cocos2d::CCDictionary* m_internalActions;
};

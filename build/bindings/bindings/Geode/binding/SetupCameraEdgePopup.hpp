#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetupCameraEdgePopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupCameraEdgePopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupCameraEdgePopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x5aa1e0
     * @note[short] iOS: 0x2d6ff4
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupCameraEdgePopup();

    /**
     * @note[short] Android
     */
    static SetupCameraEdgePopup* create(CameraTriggerGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x5843b8
     * @note[short] MacOS (Intel): 0x649170
     * @note[short] Windows: 0x5aae40
     * @note[short] iOS: 0x2d7a78
     * @note[short] Android
     */
    virtual void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x5845f0
     * @note[short] MacOS (Intel): 0x649410
     * @note[short] Windows: 0x5ab300
     * @note[short] iOS: 0x2d7c50
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x584518
     * @note[short] MacOS (Intel): 0x649300
     * @note[short] Windows: 0x5ab0a0
     * @note[short] iOS: 0x2d7bd0
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] Windows: 0x5aa400
     * @note[short] Android
     */
    bool init(CameraTriggerGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x58424c
     * @note[short] MacOS (Intel): 0x648fa0
     * @note[short] Windows: 0x5aaf40
     * @note[short] Android
     */
    void onCameraEdge(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x58433c
     * @note[short] MacOS (Intel): 0x6490d0
     * @note[short] Windows: 0x5ab070
     * @note[short] Android
     */
    void onUnlockEdge(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x584494
     * @note[short] MacOS (Intel): 0x649260
     * @note[short] Windows: 0x5ab230
     * @note[short] Android
     */
    void updateTargetID();

    /**
     * @note[short] Android
     */
    void updateTextInputLabel();
    CCTextInputNode* m_targetIDInput;
    int m_targetID;
    int m_edgeDirection;
    cocos2d::CCArray* m_directionToggles;
};

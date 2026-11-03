#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/EditorWindowPopup.hpp>

class MoveStepPopup : public EditorWindowPopup {
public:
    static constexpr auto CLASS_NAME = "MoveStepPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(MoveStepPopup, EditorWindowPopup)

    /**
     * @note[short] Windows: 0x60ac50
     * @note[short] Android: Rebinded
     */
    virtual  ~MoveStepPopup();

    /**
     * @note[short] Android
     */
    static MoveStepPopup* create(EditorUI* p0);

    /**
     * @note[short] MacOS (ARM): 0x8680b0
     * @note[short] MacOS (Intel): 0x98dd40
     * @note[short] Windows: 0x2c9980
     * @note[short] iOS: 0x53cc74
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x868074
     * @note[short] MacOS (Intel): 0x98dcf0
     * @note[short] Windows: 0x2c9950
     * @note[short] iOS: 0x53cc38
     * @note[short] Android
     */
    virtual void valueDidChange(int p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x868050
     * @note[short] MacOS (Intel): 0x98dcc0
     * @note[short] Windows: 0x2c9920
     * @note[short] iOS: 0x53cc14
     * @note[short] Android
     */
    virtual float getValue(int p0);

    /**
     * @note[short] MacOS (ARM): 0x867bfc
     * @note[short] MacOS (Intel): 0x98d880
     * @note[short] Windows: 0x2c9680
     * @note[short] iOS: 0x53c920
     * @note[short] Android
     */
    virtual void onBuildWindowContent();

    /**
     * @note[short] Android
     */
    bool init(EditorUI* p0);

    /**
     * @note[short] Android
     */
    void onReset(cocos2d::CCObject* sender);
};

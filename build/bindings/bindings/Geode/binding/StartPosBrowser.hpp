#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/TableViewCellDelegate.hpp>
#include <Geode/binding/OptionsObjectDelegate.hpp>

class StartPosBrowser : public FLAlertLayer, public TableViewCellDelegate, public OptionsObjectDelegate {
public:
    static constexpr auto CLASS_NAME = "StartPosBrowser";
    GEODE_CUSTOM_CONSTRUCTOR_GD(StartPosBrowser, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): 0x34834c
     * @note[short] MacOS (Intel): 0x3c35c0
     * @note[short] Windows: 0x4d6510
     * @note[short] iOS: 0x1c1438
     * @note[short] Android: Rebinded
     */
    virtual  ~StartPosBrowser();

    /**
     * @note[short] MacOS (ARM): 0x46cd8
     * @note[short] MacOS (Intel): 0x3c1fa0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static StartPosBrowser* create(cocos2d::CCArray* p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x348ef8
     * @note[short] MacOS (Intel): 0x3c4560
     * @note[short] Windows: 0x46290
     * @note[short] iOS: 0x1c1cc4
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x348e0c
     * @note[short] MacOS (Intel): 0x3c4450
     * @note[short] Windows: 0x4dc3b0
     * @note[short] iOS: 0x1c1cb8
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x348cf0
     * @note[short] MacOS (Intel): 0x3c4300
     * @note[short] Windows: 0x4dc260
     * @note[short] iOS: 0x1c1bf8
     * @note[short] Android
     */
    virtual bool cellPerformedAction(TableViewCell* p0, int p1, CellAction p2, cocos2d::CCNode* p3);

    /**
     * @note[short] MacOS (ARM): 0x348dfc
     * @note[short] MacOS (Intel): 0x3c4430
     * @note[short] Windows: 0x4dc320
     * @note[short] iOS: 0x1c1ca8
     * @note[short] Android
     */
    virtual int getSelectedCellIdx();

    /**
     * @note[short] MacOS (ARM): 0x348bb0
     * @note[short] MacOS (Intel): 0x3c41b0
     * @note[short] Windows: 0x3f5c0
     * @note[short] iOS: 0x1c1b44
     * @note[short] Android
     */
    virtual void stateChanged(OptionsObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x3483d0
     * @note[short] MacOS (Intel): 0x3c38f0
     * @note[short] Windows: 0x4dba20
     * @note[short] Android
     */
    bool init(cocos2d::CCArray* p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x34870c
     * @note[short] MacOS (Intel): 0x3c3c50
     * @note[short] Windows: 0x4dc330
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x348780
     * @note[short] MacOS (Intel): 0x3c3cd0
     * @note[short] Windows: 0x4dbdd0
     * @note[short] Android
     */
    void setupList();

    /**
     * @note[short] MacOS (ARM): 0x348bb8
     * @note[short] MacOS (Intel): 0x3c41d0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updatePageLabel();
};

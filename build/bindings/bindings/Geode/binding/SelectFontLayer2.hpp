#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/TableViewCellDelegate.hpp>

class SelectFontLayer2 : public FLAlertLayer, public TableViewCellDelegate {
public:
    static constexpr auto CLASS_NAME = "SelectFontLayer2";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SelectFontLayer2, FLAlertLayer)

    /**
     * @note[short] Windows: 0x58d8c0
     * @note[short] iOS: 0x315f08
     * @note[short] Android: Rebinded
     */
    virtual  ~SelectFontLayer2();

    /**
     * @note[short] Android
     */
    static SelectFontLayer2* create(LevelEditorLayer* p0);

    /**
     * @note[short] MacOS (ARM): 0x84c120
     * @note[short] MacOS (Intel): 0x970120
     * @note[short] Windows: 0x46290
     * @note[short] iOS: 0x315f40
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x84c8e0
     * @note[short] MacOS (Intel): 0x970970
     * @note[short] Windows: 0x99f90
     * @note[short] iOS: 0x316550
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x84c804
     * @note[short] MacOS (Intel): 0x970880
     * @note[short] Windows: 0x58e2d0
     * @note[short] iOS: 0x3164d4
     * @note[short] Android
     */
    virtual bool cellPerformedAction(TableViewCell* p0, int p1, CellAction p2, cocos2d::CCNode* p3);

    /**
     * @note[short] MacOS (ARM): 0x84c8d0
     * @note[short] MacOS (Intel): 0x970950
     * @note[short] Windows: 0x58e330
     * @note[short] iOS: 0x316540
     * @note[short] Android
     */
    virtual int getSelectedCellIdx();

    /**
     * @note[short] Windows: 0x58de50
     * @note[short] Android
     */
    bool init(LevelEditorLayer* p0);

    /**
     * @note[short] Android
     */
    TodoReturn loadPreviewSheet();

    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn onSelectFont(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn unloadPreviewSheet();
};

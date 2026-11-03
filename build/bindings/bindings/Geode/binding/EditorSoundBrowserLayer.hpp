#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>
#include <Geode/binding/EditorSoundListDelegate.hpp>
#include <Geode/binding/EditorSoundConfigCellDelegate.hpp>
#include <Geode/binding/TableViewCellDelegate.hpp>
#include <Geode/binding/SetTextPopupDelegate.hpp>

class EditorSoundBrowserLayer : public SetupTriggerPopup, public EditorSoundListDelegate, public EditorSoundConfigCellDelegate, public TableViewCellDelegate, public SetTextPopupDelegate {
public:
    static constexpr auto CLASS_NAME = "EditorSoundBrowserLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(EditorSoundBrowserLayer, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x18d880
     * @note[short] iOS: 0x4ccf8c
     * @note[short] Android: Rebinded
     */
    virtual  ~EditorSoundBrowserLayer();

    /**
     * @note[short] Windows: 0x18da30
     * @note[short] Android
     */
    static EditorSoundBrowserLayer* create(std::string p0, EditorSoundsLayer* p1);

    /**
     * @note[short] MacOS (ARM): 0x7d93ac
     * @note[short] MacOS (Intel): 0x8f0980
     * @note[short] Windows: 0x46290
     * @note[short] iOS: 0x4cd4f4
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x7da198
     * @note[short] MacOS (Intel): 0x8f18b0
     * @note[short] Windows: 0x1903f0
     * @note[short] iOS: 0x4ce11c
     * @note[short] Android
     */
    virtual void rebuildContent();

    /**
     * @note[short] MacOS (ARM): 0x7d93e4
     * @note[short] MacOS (Intel): 0x8f09c0
     * @note[short] Windows: 0x18ee00
     * @note[short] iOS: 0x4cd52c
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x7d9ed4
     * @note[short] MacOS (Intel): 0x8f15e0
     * @note[short] Windows: 0x190080
     * @note[short] iOS: 0x4cdedc
     * @note[short] Android
     */
    virtual void setTextPopupClosed(SetTextPopup* p0, std::string p1);

    /**
     * @note[short] MacOS (ARM): 0x7da1a4
     * @note[short] MacOS (Intel): 0x8f18d0
     * @note[short] Windows: 0x190400
     * @note[short] iOS: 0x4ce128
     * @note[short] Android
     */
    virtual void loadEditorSoundsFinished(cocos2d::CCArray* p0, char const* p1);

    /**
     * @note[short] MacOS (ARM): 0x7da27c
     * @note[short] MacOS (Intel): 0x8f19b0
     * @note[short] Windows: 0x1904b0
     * @note[short] iOS: 0x4ce1f0
     * @note[short] Android
     */
    virtual void loadEditorSoundsFailed(char const* p0);

    /**
     * @note[short] MacOS (ARM): 0x7da354
     * @note[short] MacOS (Intel): 0x8f1a80
     * @note[short] Windows: 0x190560
     * @note[short] iOS: 0x4ce2b8
     * @note[short] Android
     */
    virtual void onConfigViewClicked(GJEditorSoundConfig* p0);

    /**
     * @note[short] MacOS (ARM): 0x7da3f4
     * @note[short] MacOS (Intel): 0x8f1b20
     * @note[short] Windows: 0x5a3a0
     * @note[short] iOS: 0x4ce310
     * @note[short] Android
     */
    virtual bool cellPerformedAction(TableViewCell* p0, int p1, CellAction p2, cocos2d::CCNode* p3);

    /**
     * @note[short] MacOS (ARM): 0x7da404
     * @note[short] MacOS (Intel): 0x8f1b40
     * @note[short] Windows: 0x98e00
     * @note[short] iOS: 0x4ce320
     * @note[short] Android
     */
    virtual int getSelectedCellIdx();

    /**
     * @note[short] Android
     */
    TodoReturn clearCells();

    /**
     * @note[short] Windows: 0x18dc50
     * @note[short] Android
     */
    bool init(std::string p0, EditorSoundsLayer* p1);

    /**
     * @note[short] Windows: 0x18f9c0
     * @note[short] Android
     */
    TodoReturn layoutCells(cocos2d::CCArray* p0, char const* p1);

    /**
     * @note[short] Windows: 0x18f2b0
     * @note[short] Android
     */
    TodoReturn loadCurrentPage(bool p0, bool p1);

    /**
     * @note[short] Android
     */
    TodoReturn onConfigCopiedToMyLists(GJEditorSoundConfig* p0);

    /**
     * @note[short] Android
     */
    TodoReturn onConfigListChanged();

    /**
     * @note[short] Windows: 0x18fe70
     * @note[short] Android
     */
    void onNextPage(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x18fe50
     * @note[short] Android
     */
    void onPrevPage(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x1903e0
     * @note[short] Android
     */
    void onRefresh(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x18fee0
     * @note[short] Android
     */
    void onSaveActive(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x18f070
     * @note[short] Android
     */
    void onSelectMode(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x18ef50
     * @note[short] Android
     */
    void setMode(EditorSoundBrowseMode p0);

    /**
     * @note[short] Android
     */
    TodoReturn showLoading(bool p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateFooterButtonVisibility();

    /**
     * @note[short] Windows: 0x18fbe0
     * @note[short] Android
     */
    TodoReturn updatePageLabel();
};

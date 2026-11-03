#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/ListUploadDelegate.hpp>

class UploadListPopup : public FLAlertLayer, public ListUploadDelegate {
public:
    static constexpr auto CLASS_NAME = "UploadListPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(UploadListPopup, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     UploadListPopup();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2e65c0
     * @note[short] Android: Rebinded
     */
     ~UploadListPopup();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static UploadListPopup* create(GJLevelList* list);

    /**
     * @note[short] MacOS (ARM): 0x2dffcc
     * @note[short] MacOS (Intel): 0x34ff00
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2e6f8c
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x2dff6c
     * @note[short] MacOS (Intel): 0x34fe90
     * @note[short] Windows: 0x433f60
     * @note[short] iOS: 0x2e6f2c
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x2dfa70
     * @note[short] MacOS (Intel): 0x34f990
     * @note[short] Windows: 0x4339e0
     * @note[short] iOS: 0x2e6a84
     * @note[short] Android
     */
    virtual void listUploadFinished(GJLevelList* list);

    /**
     * @note[short] MacOS (ARM): 0x2dfc74
     * @note[short] MacOS (Intel): 0x34fbb0
     * @note[short] Windows: 0x433bb0
     * @note[short] iOS: 0x2e6c78
     * @note[short] Android
     */
    virtual void listUploadFailed(GJLevelList* list, int response);

    /**
     * @note[short] MacOS (ARM): 0x2df5c0
     * @note[short] Windows: 0x4334b0
     * @note[short] Android
     */
    bool init(GJLevelList* list);

    /**
     * @note[short] Windows: 0x433fc0
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2dff28
     * @note[short] MacOS (Intel): 0x34fe40
     * @note[short] Windows: 0x99f60
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2dfc20
     * @note[short] MacOS (Intel): 0x34fb40
     * @note[short] Windows: 0x433f10
     * @note[short] Android
     */
    void onReturnToList(cocos2d::CCObject* sender);
    GJLevelList* m_levelList;
    TextArea* m_textArea;
    LoadingCircle* m_loadingCircle;
    CCMenuItemSpriteExtra* m_backButton;
};

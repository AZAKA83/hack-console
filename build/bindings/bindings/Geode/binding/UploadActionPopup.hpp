#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>

class UploadActionPopup : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "UploadActionPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(UploadActionPopup, FLAlertLayer)

    /**
     * @note[short] Windows: 0x3a0ce0
     * @note[short] iOS: 0x3770ec
     * @note[short] Android: Rebinded
     */
    virtual  ~UploadActionPopup();

    /**
     * @note[short] Windows: 0x3a0d60
     * @note[short] Android
     */
    static UploadActionPopup* create(UploadPopupDelegate* delegate, std::string str);

    /**
     * @note[short] MacOS (ARM): 0x234d30
     * @note[short] MacOS (Intel): 0x290b20
     * @note[short] Windows: 0x3a1540
     * @note[short] iOS: 0x377928
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void closePopup();

    /**
     * @note[short] MacOS (ARM): 0x2344fc
     * @note[short] MacOS (Intel): 0x2902e0
     * @note[short] Windows: 0x3a0e10
     * @note[short] Android
     */
    bool init(UploadPopupDelegate* delegate, std::string str);

    /**
     * @note[short] MacOS (ARM): 0x234910
     * @note[short] MacOS (Intel): 0x290730
     * @note[short] Windows: 0x3a1460
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x234acc
     * @note[short] MacOS (Intel): 0x2908f0
     * @note[short] Windows: 0x3a1360
     * @note[short] Android
     */
    void showFailMessage(std::string message);

    /**
     * @note[short] Android
     */
    TodoReturn showFailMessageOrDismiss(std::string p0);

    /**
     * @note[short] MacOS (ARM): 0x234970
     * @note[short] MacOS (Intel): 0x290780
     * @note[short] Windows: 0x3a1250
     * @note[short] Android
     */
    void showSuccessMessage(std::string message);
    UploadPopupDelegate* m_delegate;
    TextArea* m_textArea;
    LoadingCircle* m_loadingCircle;
    CCMenuItemSpriteExtra* m_closeButton;
    bool m_succeeded;
};

#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/UploadActionDelegate.hpp>
#include <Geode/binding/UploadPopupDelegate.hpp>
#include <Geode/binding/EmotePickerDelegate.hpp>

class ShareCommentLayer : public FLAlertLayer, public UploadActionDelegate, public UploadPopupDelegate, public EmotePickerDelegate {
public:
    static constexpr auto CLASS_NAME = "ShareCommentLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ShareCommentLayer, FLAlertLayer)

    /**
     * @note[short] Windows: 0x62daf0
     * @note[short] iOS: 0x26c4a4
     * @note[short] Android: Rebinded
     */
    virtual  ~ShareCommentLayer();

    /**
     * @note[short] MacOS (ARM): 0x5cacec
     * @note[short] MacOS (Intel): 0x6b1100
     * @note[short] Windows: 0x62dc40
     * @note[short] Android
     */
    static ShareCommentLayer* create(std::string title, int charLimit, CommentType type, int ID, std::string desc);

    /**
     * @note[short] MacOS (ARM): 0x5ccd0c
     * @note[short] MacOS (Intel): 0x6b33d0
     * @note[short] Windows: 0x46290
     * @note[short] iOS: 0x26dedc
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x5ccc30
     * @note[short] MacOS (Intel): 0x6b3300
     * @note[short] Windows: 0x62fa80
     * @note[short] iOS: 0x26ded0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x5ccec0
     * @note[short] MacOS (Intel): 0x6b3580
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x26dfdc
     * @note[short] Android
     */
    virtual void textInputOpened(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x5ccd44
     * @note[short] MacOS (Intel): 0x6b3410
     * @note[short] Windows: 0x62fae0
     * @note[short] iOS: 0x26df14
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x5ccec8
     * @note[short] MacOS (Intel): 0x6b35a0
     * @note[short] Windows: 0x62fc40
     * @note[short] iOS: 0x26dfe4
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x5cd174
     * @note[short] MacOS (Intel): 0x6b3840
     * @note[short] Windows: 0x630060
     * @note[short] iOS: 0x26e1cc
     * @note[short] Android
     */
    virtual void uploadActionFinished(int id, int response);

    /**
     * @note[short] MacOS (ARM): 0x5cd2ac
     * @note[short] MacOS (Intel): 0x6b3940
     * @note[short] Windows: 0x6300f0
     * @note[short] iOS: 0x26e25c
     * @note[short] Android
     */
    virtual void uploadActionFailed(int id, int response);

    /**
     * @note[short] MacOS (ARM): 0x5cd424
     * @note[short] MacOS (Intel): 0x6b3aa0
     * @note[short] Windows: 0x6301b0
     * @note[short] iOS: 0x26e2f8
     * @note[short] Android
     */
    virtual void onClosePopup(UploadActionPopup* popup);

    /**
     * @note[short] MacOS (ARM): 0x5cd164
     * @note[short] MacOS (Intel): 0x6b3810
     * @note[short] Windows: 0x630050
     * @note[short] iOS: 0x26e1bc
     * @note[short] Android
     */
    virtual void emotePickerClosed(EmotePickerPopup* p0);

    /**
     * @note[short] MacOS (ARM): 0x5cbf24
     * @note[short] MacOS (Intel): 0x6b1260
     * @note[short] Windows: 0x62de70
     * @note[short] Android
     */
    bool init(std::string title, int charLimit, CommentType type, int ID, std::string desc);

    /**
     * @note[short] Android
     */
    TodoReturn lockInput(std::string const& p0);

    /**
     * @note[short] MacOS (ARM): 0x5cc304
     * @note[short] MacOS (Intel): 0x6b2930
     * @note[short] Windows: 0x62f300
     * @note[short] Android
     */
    void onClear(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5cc3bc
     * @note[short] Windows: 0x62fa20
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5cc9a0
     * @note[short] Android
     */
    void onEmotes(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5cc168
     * @note[short] MacOS (Intel): 0x6b27a0
     * @note[short] Windows: 0x62f370
     * @note[short] Android
     */
    void onPercent(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5cc428
     * @note[short] MacOS (Intel): 0x3ac0c0
     * @note[short] Windows: 0x62f470
     * @note[short] Android
     */
    void onShare(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5cd038
     * @note[short] MacOS (Intel): 0xe040
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateCharCountLabel();

    /**
     * @note[short] MacOS (ARM): 0x5cc9f4
     * @note[short] Windows: 0x77700
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateDescText(std::string desc);

    /**
     * @note[short] MacOS (ARM): 0x5cc238
     * @note[short] MacOS (Intel): 0x6b2870
     * @note[short] Windows: 0x62f390
     * @note[short] Android
     */
    void updatePercentLabel();
    int m_charLimit;
    int m_itemID;
    CommentType m_commentType;
    bool m_allowEmotes;
    CCTextInputNode* m_commentInput;
    CCMenuItemSpriteExtra* m_emotesButton;
    EmotePickerPopup* m_emotePicker;
    std::string m_descText;
    std::string m_placeholderText;
    cocos2d::CCLabelBMFont* m_charCountLabel;
    cocos2d::CCLabelBMFont* m_percentLabel;
    UploadActionPopup* m_uploadPopup;
    bool m_uploadSuccess;
    bool m_percentEnabled;
    int m_percent;
    ShareCommentDelegate* m_delegate;
};

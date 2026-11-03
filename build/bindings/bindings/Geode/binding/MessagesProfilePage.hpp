#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>
#include <Geode/binding/UploadActionDelegate.hpp>
#include <Geode/binding/UploadPopupDelegate.hpp>
#include <Geode/binding/MessageListDelegate.hpp>

class MessagesProfilePage : public FLAlertLayer, public FLAlertLayerProtocol, public UploadActionDelegate, public UploadPopupDelegate, public MessageListDelegate {
public:
    static constexpr auto CLASS_NAME = "MessagesProfilePage";
    GEODE_CUSTOM_CONSTRUCTOR_GD(MessagesProfilePage, FLAlertLayer)

    /**
     * @note[short] Windows: 0x4755f0
     * @note[short] iOS: 0x263c94
     * @note[short] Android: Rebinded
     */
    virtual  ~MessagesProfilePage();

    /**
     * @note[short] Windows: 0x475790
     * @note[short] Android
     */
    static MessagesProfilePage* create(bool sent);

    /**
     * @note[short] MacOS (ARM): 0x1c2c34
     * @note[short] MacOS (Intel): 0x2138e0
     * @note[short] Windows: 0x46290
     * @note[short] iOS: 0x2651bc
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x1c2c28
     * @note[short] MacOS (Intel): 0x2138b0
     * @note[short] Windows: 0x476ff0
     * @note[short] iOS: 0x2651b0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x1c27a0
     * @note[short] MacOS (Intel): 0x213490
     * @note[short] Windows: 0x476c90
     * @note[short] iOS: 0x264ee8
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x1c2830
     * @note[short] MacOS (Intel): 0x213500
     * @note[short] Windows: 0x476cc0
     * @note[short] iOS: 0x264f78
     * @note[short] Android
     */
    virtual void onClosePopup(UploadActionPopup* popup);

    /**
     * @note[short] MacOS (ARM): 0x1c28b8
     * @note[short] MacOS (Intel): 0x213570
     * @note[short] Windows: 0x476d10
     * @note[short] iOS: 0x264fe8
     * @note[short] Android
     */
    virtual void uploadActionFinished(int id, int response);

    /**
     * @note[short] MacOS (ARM): 0x1c2a78
     * @note[short] MacOS (Intel): 0x213720
     * @note[short] Windows: 0x476e90
     * @note[short] iOS: 0x2650d0
     * @note[short] Android
     */
    virtual void uploadActionFailed(int id, int response);

    /**
     * @note[short] MacOS (ARM): 0x1c2ed8
     * @note[short] MacOS (Intel): 0x213bb0
     * @note[short] Windows: 0x4777a0
     * @note[short] iOS: 0x2653a8
     * @note[short] Android
     */
    virtual void loadMessagesFinished(cocos2d::CCArray* messages, char const* key);

    /**
     * @note[short] MacOS (ARM): 0x1c3000
     * @note[short] MacOS (Intel): 0x213d00
     * @note[short] Windows: 0x477900
     * @note[short] iOS: 0x2654d0
     * @note[short] Android
     */
    virtual void loadMessagesFailed(char const* key, GJErrorCode errorType);

    /**
     * @note[short] MacOS (ARM): 0x1c314c
     * @note[short] MacOS (Intel): 0x213e30
     * @note[short] Windows: 0x4779a0
     * @note[short] iOS: 0x265574
     * @note[short] Android
     */
    virtual void forceReloadMessages(bool sent);

    /**
     * @note[short] MacOS (ARM): 0x1c3180
     * @note[short] MacOS (Intel): 0x213e70
     * @note[short] Windows: 0x4779c0
     * @note[short] iOS: 0x2655a8
     * @note[short] Android
     */
    virtual void setupPageInfo(std::string info, char const* key);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual bool ownsTouchPrio();

    /**
     * @note[short] MacOS (ARM): 0x1c25d4
     * @note[short] MacOS (Intel): 0x2132a0
     * @note[short] Windows: 0x476a10
     * @note[short] Android
     */
    void deleteSelected();

    /**
     * @note[short] MacOS (ARM): 0x1c11fc
     * @note[short] MacOS (Intel): 0x211d20
     * @note[short] Windows: 0x475940
     * @note[short] Android
     */
    bool init(bool sent);

    /**
     * @note[short] Windows: 0x477000
     * @note[short] Android
     */
    bool isCorrect(char const* key);

    /**
     * @note[short] Windows: 0x4771e0
     * @note[short] Android
     */
    void loadPage(int page);

    /**
     * @note[short] Windows: 0x476f30
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x476720
     * @note[short] Android
     */
    void onDeleteSelected(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x477b80
     * @note[short] Android
     */
    void onNextPage(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x477b90
     * @note[short] Android
     */
    void onPrevPage(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onSelectionChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x80bc5c
     * @note[short] Windows: 0x476680
     * @note[short] Android
     */
    void onSentMessages(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x476300
     * @note[short] Android
     */
    void onToggleAllObjects(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onUpdate(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    int selectedCount();

    /**
     * @note[short] MacOS (ARM): 0x1c2d74
     * @note[short] MacOS (Intel): 0x213a40
     * @note[short] Windows: 0x477610
     * @note[short] Android
     */
    void setupCommentsBrowser(cocos2d::CCArray* messages);

    /**
     * @note[short] MacOS (Intel): 0x213840
     * @note[short] Windows: 0x477140
     * @note[short] Android
     */
    void untoggleAll();

    /**
     * @note[short] MacOS (ARM): 0x78a294
     * @note[short] MacOS (Intel): 0x8967d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateLevelsLabel();

    /**
     * @note[short] MacOS (ARM): 0x1c3720
     * @note[short] MacOS (Intel): 0x214370
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updatePageArrows();

    /**
     * @note[short] Windows: 0x4764b0
     * @note[short] Android
     */
    void updateSelectUI();
    bool m_sentMessages;
    std::string m_messageKey;
    cocos2d::CCLabelBMFont* m_levelsLabel;
    cocos2d::CCLabelBMFont* m_errorLabel;
    GJCommentListLayer* m_listLayer;
    LoadingCircle* m_loadingCircle;
    UploadActionPopup* m_actionPopup;
    void* m_unkPtr;
    CCMenuItemSpriteExtra* m_nextButton;
    CCMenuItemSpriteExtra* m_prevButton;
    CCMenuItemSpriteExtra* m_refreshButton;
    CCMenuItemToggler* m_toggleAllToggler;
    int m_itemCount;
    int m_pageStartIdx;
    int m_pageEndIdx;
    int m_page;
    bool m_toggledAll;
};

#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/LevelBrowserLayer.hpp>
#include <Geode/binding/TextInputDelegate.hpp>
#include <Geode/binding/SelectListIconDelegate.hpp>
#include <Geode/binding/LikeItemDelegate.hpp>
#include <Geode/binding/LevelListDeleteDelegate.hpp>
#include <Geode/binding/AdminActionConfirmDelegate.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/vector.hpp>

class LevelListLayer : public LevelBrowserLayer, public TextInputDelegate, public SelectListIconDelegate, public LikeItemDelegate, public LevelListDeleteDelegate, public AdminActionConfirmDelegate {
public:
    static constexpr auto CLASS_NAME = "LevelListLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(LevelListLayer, LevelBrowserLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     LevelListLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2e0144
     * @note[short] Android: Rebinded
     */
     ~LevelListLayer();

    /**
     * @note[short] MacOS (ARM): 0x2d7c00
     * @note[short] MacOS (Intel): 0x347210
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static LevelListLayer* create(GJLevelList* list);

    /**
     * @note[short] MacOS (ARM): 0x2d7b60
     * @note[short] MacOS (Intel): 0x347180
     * @note[short] Windows: 0x42b070
     * @note[short] Android
     */
    static cocos2d::CCScene* scene(GJLevelList* list);

    /**
     * @note[short] MacOS (ARM): 0x2dae00
     * @note[short] MacOS (Intel): 0x34a5d0
     * @note[short] Windows: 0x42cee0
     * @note[short] iOS: 0x2e3184
     * @note[short] Android
     */
    virtual void onEnter();

    /**
     * @note[short] MacOS (ARM): 0x2dae3c
     * @note[short] MacOS (Intel): 0x34a600
     * @note[short] Windows: 0x42cf10
     * @note[short] iOS: 0x2e31c0
     * @note[short] Android
     */
    virtual void onExit();

    /**
     * @note[short] MacOS (ARM): 0x2db1f8
     * @note[short] MacOS (Intel): 0x34a9c0
     * @note[short] Windows: 0x42e6b0
     * @note[short] iOS: 0x2e348c
     * @note[short] Android
     */
    virtual void loadLevelsFinished(cocos2d::CCArray* levels, char const* key, int type);

    /**
     * @note[short] MacOS (ARM): 0x2db410
     * @note[short] MacOS (Intel): 0x34abf0
     * @note[short] Windows: 0x3e6160
     * @note[short] iOS: 0x2e35ec
     * @note[short] Android
     */
    virtual void loadLevelsFailed(char const* key, int type);

    /**
     * @note[short] MacOS (ARM): 0x2db8e4
     * @note[short] MacOS (Intel): 0x34b1d0
     * @note[short] Windows: 0x42ef00
     * @note[short] iOS: 0x2e38b8
     * @note[short] Android
     */
    virtual void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2dc070
     * @note[short] MacOS (Intel): 0x34b960
     * @note[short] Windows: 0x42f7d0
     * @note[short] iOS: 0x2e3f38
     * @note[short] Android
     */
    virtual void shareCommentClosed(std::string text, ShareCommentLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x2dbc68
     * @note[short] MacOS (Intel): 0x34b550
     * @note[short] Windows: 0x42f330
     * @note[short] iOS: 0x2e3be0
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x2db798
     * @note[short] MacOS (Intel): 0x34b070
     * @note[short] Windows: 0x42ee40
     * @note[short] iOS: 0x2e3808
     * @note[short] Android
     */
    virtual void setIDPopupClosed(SetIDPopup* popup, int value);

    /**
     * @note[short] MacOS (ARM): 0x2db8dc
     * @note[short] MacOS (Intel): 0x34b1b0
     * @note[short] Windows: 0x42eef0
     * @note[short] iOS: 0x2e38b0
     * @note[short] Android
     */
    virtual cocos2d::CCArray* updateResultArray(cocos2d::CCArray* results);

    /**
     * @note[short] MacOS (ARM): 0x2db41c
     * @note[short] MacOS (Intel): 0x34ac20
     * @note[short] Windows: 0x42ea30
     * @note[short] iOS: 0x2e35f8
     * @note[short] Android
     */
    virtual bool cellPerformedAction(TableViewCell* cell, int listType, CellAction action, cocos2d::CCNode* parent);

    /**
     * @note[short] MacOS (ARM): 0x2dc164
     * @note[short] MacOS (Intel): 0x34ba50
     * @note[short] Windows: 0x42fa00
     * @note[short] iOS: 0x2e3ffc
     * @note[short] Android
     */
    virtual void likedItem(LikeItemType type, int id, bool liked);

    /**
     * @note[short] MacOS (ARM): 0x2dc3ac
     * @note[short] MacOS (Intel): 0x34bd50
     * @note[short] Windows: 0x42fcd0
     * @note[short] iOS: 0x2e411c
     * @note[short] Android
     */
    virtual void iconSelectClosed(SelectListIconLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x2dc6a8
     * @note[short] MacOS (Intel): 0x34c130
     * @note[short] Windows: 0x430820
     * @note[short] iOS: 0x2e42ac
     * @note[short] Android
     */
    virtual void levelListDeleteFinished(int id);

    /**
     * @note[short] MacOS (ARM): 0x2dc798
     * @note[short] MacOS (Intel): 0x34c230
     * @note[short] Windows: 0x430950
     * @note[short] iOS: 0x2e4374
     * @note[short] Android
     */
    virtual void levelListDeleteFailed(int id);

    /**
     * @note[short] MacOS (ARM): 0x2dca94
     * @note[short] MacOS (Intel): 0x34c530
     * @note[short] Windows: 0x430d30
     * @note[short] iOS: 0x2e45a0
     * @note[short] Android
     */
    virtual void textInputOpened(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x2dc888
     * @note[short] MacOS (Intel): 0x34c330
     * @note[short] Windows: 0x430a80
     * @note[short] iOS: 0x2e443c
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x2dcb98
     * @note[short] MacOS (Intel): 0x34c600
     * @note[short] Windows: 0x430eb0
     * @note[short] iOS: 0x2e469c
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x2dc5c0
     * @note[short] MacOS (Intel): 0x34c030
     * @note[short] Windows: 0x430800
     * @note[short] iOS: 0x2e4280
     * @note[short] Android
     */
    virtual void adminActionConfirmed(int p0, std::vector<int> const& p1, std::string const& p2);

    /**
     * @note[short] MacOS (ARM): 0x2dbda4
     * @note[short] MacOS (Intel): 0x34b670
     * @note[short] Windows: 0x4300b0
     * @note[short] Android
     */
    void cloneList();

    /**
     * @note[short] MacOS (ARM): 0x2d988c
     * @note[short] MacOS (Intel): 0x349050
     * @note[short] Windows: 0x42ffb0
     * @note[short] Android
     */
    void confirmClone(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2d9be8
     * @note[short] MacOS (Intel): 0x3493b0
     * @note[short] Windows: 0x430340
     * @note[short] Android
     */
    void confirmDelete(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x430470
     * @note[short] Android
     */
    void confirmOwnerDelete(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2d7c80
     * @note[short] MacOS (Intel): 0x347270
     * @note[short] Windows: 0x42b2b0
     * @note[short] Android
     */
    bool init(GJLevelList* list);

    /**
     * @note[short] MacOS (ARM): 0x2dae64
     * @note[short] MacOS (Intel): 0x34a620
     * @note[short] Windows: 0x42df10
     * @note[short] Android
     */
    void onClaimReward(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2dbd4c
     * @note[short] MacOS (Intel): 0x34b620
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void onDelete();

    /**
     * @note[short] MacOS (ARM): 0x2d9cd0
     * @note[short] MacOS (Intel): 0x349490
     * @note[short] Windows: 0x42f6b0
     * @note[short] Android
     */
    void onDescription(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2d996c
     * @note[short] MacOS (Intel): 0x349130
     * @note[short] Windows: 0x42f580
     * @note[short] Android
     */
    void onFavorite(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x348fa0
     * @note[short] Windows: 0x42f8d0
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2d9824
     * @note[short] MacOS (Intel): 0x348fd0
     * @note[short] Windows: 0x42f910
     * @note[short] Android
     */
    void onLike(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2d9f00
     * @note[short] MacOS (Intel): 0x3496b0
     * @note[short] Windows: 0x42ced0
     * @note[short] Android
     */
    void onListInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onRateListAdmin(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2d96e4
     * @note[short] MacOS (Intel): 0x348e80
     * @note[short] Windows: 0x42e4e0
     * @note[short] Android
     */
    void onRefreshLevelList(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2d9e18
     * @note[short] MacOS (Intel): 0x3495c0
     * @note[short] Windows: 0x42fb70
     * @note[short] Android
     */
    void onSelectIcon(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x42fcf0
     * @note[short] Android
     */
    void onShare(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2d9df0
     * @note[short] MacOS (Intel): 0x349580
     * @note[short] Windows: 0x42ff70
     * @note[short] Android
     */
    void onToggleEditMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2d96b0
     * @note[short] MacOS (Intel): 0x348e50
     * @note[short] Windows: 0x42f540
     * @note[short] Android
     */
    void onViewProfile(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void ownerDelete();

    /**
     * @note[short] Windows: 0x430740
     * @note[short] Android
     */
    void startServerDelete(std::string const& p0, std::vector<int> const& p1);

    /**
     * @note[short] MacOS (ARM): 0x2db5c0
     * @note[short] MacOS (Intel): 0x34ade0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateEditMode();

    /**
     * @note[short] MacOS (ARM): 0x2d9f08
     * @note[short] MacOS (Intel): 0x3496d0
     * @note[short] Windows: 0x42fa60
     * @note[short] Android
     */
    void updateSideButtons();

    /**
     * @note[short] MacOS (ARM): 0x2d9f9c
     * @note[short] MacOS (Intel): 0x349760
     * @note[short] Windows: 0x42cf30
     * @note[short] Android
     */
    void updateStatsArt();

    /**
     * @note[short] MacOS (ARM): 0x2dbac4
     * @note[short] MacOS (Intel): 0x34b3a0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void verifyListName();
    cocos2d::CCMenu* m_buttonMenu;
    std::string m_searchKey1;
    GJLevelList* m_levelList;
    std::string m_searchKey2;
    CCMenuItemSpriteExtra* m_likeButton;
    bool m_exiting;
    CCTextInputNode* m_titleInput;
    int m_editMode;
    cocos2d::CCArray* m_objects;
    cocos2d::CCSprite* m_diffSprite;
    cocos2d::CCSprite* m_featureSprite;
    cocos2d::CCPoint m_rewardPosition;
    bool m_exited;
};

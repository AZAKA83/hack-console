#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/TableViewCell.hpp>
#include <Geode/binding/LikeItemDelegate.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>

class CommentCell : public TableViewCell, public LikeItemDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "CommentCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CommentCell, TableViewCell)

    /**
     * @note[short] Windows: 0x151dc0
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
     CommentCell(char const* identifier, float width, float height);

    /**
     * @note[short] MacOS (ARM): 0x1e9124
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1384ec
     * @note[short] Android: Rebinded
     */
     ~CommentCell();

    /**
     * @note[short] MacOS (ARM): 0x1e93a4
     * @note[short] MacOS (Intel): 0x23dda0
     * @note[short] Windows: 0x151e70
     * @note[short] iOS: 0x138524
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x1e989c
     * @note[short] MacOS (Intel): 0x23e2e0
     * @note[short] Windows: 0x1487a0
     * @note[short] iOS: 0x1389d4
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x1e9948
     * @note[short] MacOS (Intel): 0x23e3b0
     * @note[short] Windows: 0x154a90
     * @note[short] iOS: 0x138a80
     * @note[short] Android
     */
    virtual void likedItem(LikeItemType type, int id, bool liked);

    /**
     * @note[short] MacOS (ARM): 0x1e9cf0
     * @note[short] MacOS (Intel): 0x23e7a0
     * @note[short] Windows: 0x154f10
     * @note[short] iOS: 0x138c1c
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x1e9ae4
     * @note[short] MacOS (Intel): 0x23e550
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void incrementDislikes();

    /**
     * @note[short] MacOS (ARM): 0x1e9a30
     * @note[short] MacOS (Intel): 0x23e4a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void incrementLikes();

    /**
     * @note[short] MacOS (ARM): 0x1d9f24
     * @note[short] MacOS (Intel): 0x22d440
     * @note[short] Windows: 0x151ea0
     * @note[short] Android
     */
    void loadFromComment(GJComment* comment);

    /**
     * @note[short] Windows: 0x154850
     * @note[short] Android
     */
    void onBulkSelectToggle(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1e9690
     * @note[short] MacOS (Intel): 0x23e0d0
     * @note[short] Windows: 0x154b90
     * @note[short] Android
     */
    void onConfirmDelete(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void onDelete();

    /**
     * @note[short] Windows: 0x1550d0
     * @note[short] Android
     */
    void onGoToLevel(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x1548c0
     * @note[short] Android
     */
    void onLike(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x154d10
     * @note[short] Android
     */
    void onMoreOptions(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1e9cdc
     * @note[short] MacOS (Intel): 0x23e780
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onUndelete();

    /**
     * @note[short] MacOS (ARM): 0x1e9538
     * @note[short] MacOS (Intel): 0x23df50
     * @note[short] Windows: 0x1550b0
     * @note[short] Android
     */
    void onUnhide(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1e93c0
     * @note[short] MacOS (Intel): 0x23ddd0
     * @note[short] Windows: 0x154cd0
     * @note[short] Android
     */
    void onViewProfile(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1dbe34
     * @note[short] MacOS (Intel): 0x22f7a0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateBGColor(int index);

    /**
     * @note[short] Android
     */
    TodoReturn updateBulkToggle();

    /**
     * @note[short] MacOS (ARM): 0x1e9ba0
     * @note[short] MacOS (Intel): 0x23e620
     * @note[short] Windows: 0x154ad0
     * @note[short] Android
     */
    void updateLabelValues();
    cocos2d::CCSprite* m_iconSprite;
    cocos2d::CCLabelBMFont* m_likeLabel;
    GJComment* m_comment;
    bool m_accountComment;
    bool m_unk259;
    bool m_compactMode;
    CCMenuItemToggler* m_bulkSelectToggler;
};

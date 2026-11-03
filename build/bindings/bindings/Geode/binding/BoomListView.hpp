#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCLayer.hpp>
#include <Geode/binding/TableViewDelegate.hpp>
#include <Geode/binding/TableViewDataSource.hpp>

class BoomListView : public cocos2d::CCLayer, public TableViewDelegate, public TableViewDataSource {
public:
    static constexpr auto CLASS_NAME = "BoomListView";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(BoomListView, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x3f5d0
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     BoomListView();

    /**
     * @note[short] MacOS (ARM): 0x28ba58
     * @note[short] MacOS (Intel): 0x2f6ce0
     * @note[short] Windows: 0x3f6c0
     * @note[short] iOS: 0x267d70
     * @note[short] Android: Rebinded
     */
     ~BoomListView();

    /**
     * @note[short] MacOS (ARM): 0x28bc68
     * @note[short] MacOS (Intel): 0x2f6f60
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static BoomListView* create(cocos2d::CCArray* entries, TableViewCellDelegate* delegate, float height, float width, int page, BoomListType type, float y);

    /**
     * @note[short] MacOS (ARM): 0x28c7f4
     * @note[short] MacOS (Intel): 0x2f7cd0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2685dc
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x28c038
     * @note[short] MacOS (Intel): 0x2f7390
     * @note[short] Windows: 0x3fc20
     * @note[short] iOS: 0x26804c
     * @note[short] Android
     */
    virtual void setupList(float yOffset);

    /**
     * @note[short] MacOS (ARM): 0x28c0b8
     * @note[short] MacOS (Intel): 0x2f7430
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2680cc
     * @note[short] Android
     */
    virtual void TableViewWillDisplayCellForRowAtIndexPath(CCIndexPath& indexPath, TableViewCell* cell, TableView* tableView);

    /**
     * @note[short] MacOS (ARM): 0x28c0c8
     * @note[short] MacOS (Intel): 0x2f7470
     * @note[short] Windows: 0x3fcb0
     * @note[short] iOS: 0x2680dc
     * @note[short] Android
     */
    virtual float cellHeightForRowAtIndexPath(CCIndexPath& indexPath, TableView* tableView);

    /**
     * @note[short] MacOS (ARM): 0x28c0d8
     * @note[short] MacOS (Intel): 0x2f7490
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2680ec
     * @note[short] Android
     */
    virtual void didSelectRowAtIndexPath(CCIndexPath& indexPath, TableView* tableView);

    /**
     * @note[short] MacOS (ARM): 0x28c0e0
     * @note[short] MacOS (Intel): 0x2f74b0
     * @note[short] Windows: 0x3fcc0
     * @note[short] iOS: 0x2680f4
     * @note[short] Android
     */
    virtual int numberOfRowsInSection(unsigned int section, TableView* tableView);

    /**
     * @note[short] MacOS (ARM): 0x28c0f0
     * @note[short] MacOS (Intel): 0x2f74e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x268104
     * @note[short] Android
     */
    virtual unsigned int numberOfSectionsInTableView(TableView* tableView);

    /**
     * @note[short] MacOS (ARM): 0x28c100
     * @note[short] MacOS (Intel): 0x2f7500
     * @note[short] Windows: 0x3fce0
     * @note[short] iOS: 0x268114
     * @note[short] Android
     */
    virtual TableViewCell* cellForRowAtIndexPath(CCIndexPath& indexPath, TableView* tableView);

    /**
     * @note[short] MacOS (ARM): 0x28c7ec
     * @note[short] MacOS (Intel): 0x2f7cb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2685d4
     * @note[short] Android
     */
    virtual void TableViewCommitCellEditingStyleForRowAtIndexPath(TableView* tableView, TableViewCellEditingStyle style, CCIndexPath& indexPath);

    /**
     * @note[short] MacOS (ARM): 0x28c0c0
     * @note[short] MacOS (Intel): 0x2f7450
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2680d4
     * @note[short] Android
     */
    virtual void TableViewWillReloadCellForRowAtIndexPath(CCIndexPath& indexPath, TableViewCell* cell, TableView* tableView);

    /**
     * @note[short] MacOS (ARM): 0x28c21c
     * @note[short] MacOS (Intel): 0x2f7620
     * @note[short] Windows: 0x3fd70
     * @note[short] iOS: 0x2681a8
     * @note[short] Android
     */
    virtual TableViewCell* getListCell(char const* identifier);

    /**
     * @note[short] MacOS (ARM): 0x28c3c0
     * @note[short] MacOS (Intel): 0x2f7860
     * @note[short] Windows: 0x3fee0
     * @note[short] iOS: 0x2682a0
     * @note[short] Android
     */
    virtual void loadCell(TableViewCell* cell, int index);

    /**
     * @note[short] MacOS (ARM): 0x28c028
     * @note[short] MacOS (Intel): 0x2f7370
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void addObjectToList(cocos2d::CCNode* node);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    bool init(cocos2d::CCArray* entries, BoomListType type, float width, float height);

    /**
     * @note[short] MacOS (ARM): 0x28bd74
     * @note[short] MacOS (Intel): 0x2f7090
     * @note[short] Windows: 0x3f760
     * @note[short] iOS: 0x267da8
     * @note[short] Android
     */
    bool init(cocos2d::CCArray* entries, TableViewCellDelegate* delegate, float height, float width, int page, BoomListType type, float y);

    /**
     * @note[short] MacOS (ARM): 0x28befc
     * @note[short] MacOS (Intel): 0x2f7240
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void lockList(bool locked);

    /**
     * @note[short] Android
     */
    TodoReturn restoreListOffset(float p0);
    TableView* m_tableView;
    cocos2d::CCArray* m_entries;
    BoomListType m_type;
    float m_height;
    float m_width;
    float m_itemSeparation;
    int m_currentPage;
    bool m_locked;
};

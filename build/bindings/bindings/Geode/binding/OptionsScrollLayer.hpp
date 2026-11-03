#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/TableViewCellDelegate.hpp>

class OptionsScrollLayer : public FLAlertLayer, public TableViewCellDelegate {
public:
    static constexpr auto CLASS_NAME = "OptionsScrollLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(OptionsScrollLayer, FLAlertLayer)

    /**
     * @note[short] Windows: 0x47a040
     * @note[short] iOS: 0x46adc8
     * @note[short] Android: Rebinded
     */
    virtual  ~OptionsScrollLayer();

    /**
     * @note[short] MacOS (ARM): 0x436578
     * @note[short] Windows: 0x47e380
     * @note[short] Android
     */
    static OptionsScrollLayer* create(cocos2d::CCArray* p0, bool p1, std::string p2, MusicSearchResult* p3);

    /**
     * @note[short] MacOS (ARM): 0x5ffbac
     * @note[short] MacOS (Intel): 0x6ec360
     * @note[short] Windows: 0x46290
     * @note[short] iOS: 0x46bc2c
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x5ffa50
     * @note[short] MacOS (Intel): 0x6ec1e0
     * @note[short] Windows: 0x47f3a0
     * @note[short] iOS: 0x46bc20
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x5ffbe4
     * @note[short] MacOS (Intel): 0x6ec3a0
     * @note[short] Windows: 0x47f3b0
     * @note[short] iOS: 0x46bc64
     * @note[short] Android
     */
    virtual bool cellPerformedAction(TableViewCell* cell, int listType, CellAction action, cocos2d::CCNode* parent);

    /**
     * @note[short] MacOS (ARM): 0x5ff624
     * @note[short] MacOS (Intel): 0x6ebd30
     * @note[short] Windows: 0x47efe0
     * @note[short] iOS: 0x46b83c
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] Windows: 0x47d940
     * @note[short] Android
     */
    TodoReturn addTagMatchToggle();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    cocos2d::CCArray* getRelevantObjects(cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x87e390
     * @note[short] Windows: 0x47e520
     * @note[short] Android
     */
    bool init(cocos2d::CCArray* p0, bool p1, std::string p2, MusicSearchResult* p3);

    /**
     * @note[short] Android
     */
    void onClearAll(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onClearSearchText(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x47f2d0
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x47ee60
     * @note[short] Android
     */
    void onMatchToggle(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x65ab4
     * @note[short] Windows: 0x47f160
     * @note[short] Android
     */
    void setupList(cocos2d::CCArray* objects);
    cocos2d::CCArray* m_optionObjects;
    GJCommentListLayer* m_listLayer;
    bool m_recreateList;
    CCTextInputNode* m_searchInput;
    cocos2d::extension::CCScale9Sprite* m_searchBackground;
    CCMenuItemSpriteExtra* m_clearSearchButton;
    std::string m_searchQuery;
    CCMenuItemSpriteExtra* m_matchToggleButton;
    MusicSearchResult* m_searchResult;
};

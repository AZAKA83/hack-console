#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/CCIndexPath.hpp>
#include <Geode/mapping/CCLayer.hpp>

class TableViewCell : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "TableViewCell";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(TableViewCell, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): 0x614b24
     * @note[short] MacOS (Intel): 0x7037a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x377a8
     * @note[short] Android: Rebinded
     */
     TableViewCell(char const* identifier, float width, float height);

    /**
     * @note[short] MacOS (ARM): 0x614d14
     * @note[short] MacOS (Intel): 0x703aa0
     * @note[short] Windows: 0x89d10
     * @note[short] iOS: 0x37980
     * @note[short] Android: Rebinded
     */
     ~TableViewCell();

    /**
     * @note[short] MacOS (ARM): 0x614fa4
     * @note[short] MacOS (Intel): 0x703d30
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateVisibility();
    cocos2d::CCNode* m_deleteMenu;
    TableView* m_tableView;
    CCIndexPath m_indexPath;
    bool m_editable;
    std::string m_cellIdentifier;
    float m_width;
    float m_height;
    cocos2d::CCLayerColor* m_backgroundLayer;
    cocos2d::CCLayer* m_mainLayer;
    BoomListType m_listType;
};

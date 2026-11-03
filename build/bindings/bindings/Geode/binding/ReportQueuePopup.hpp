#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/PagedListPopup.hpp>
#include <Geode/binding/CommentAdminDelegate.hpp>
#include <Geode/binding/DropdownDelegate.hpp>

class ReportQueuePopup : public PagedListPopup, public CommentAdminDelegate, public DropdownDelegate {
public:
    static constexpr auto CLASS_NAME = "ReportQueuePopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ReportQueuePopup, PagedListPopup)

    /**
     * @note[short] Windows: 0xc74e0
     * @note[short] iOS: 0x522fc4
     * @note[short] Android: Rebinded
     */
    virtual  ~ReportQueuePopup();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static ReportQueuePopup* create();

    /**
     * @note[short] MacOS (ARM): 0x845a18
     * @note[short] MacOS (Intel): 0x968ca0
     * @note[short] Windows: 0xc7640
     * @note[short] iOS: 0x5230c8
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x847a88
     * @note[short] MacOS (Intel): 0x96adf0
     * @note[short] Windows: 0xc95b0
     * @note[short] iOS: 0x524660
     * @note[short] Android
     */
    virtual void rebuildContent();

    /**
     * @note[short] MacOS (ARM): 0x846084
     * @note[short] MacOS (Intel): 0x969320
     * @note[short] Windows: 0xc7ee0
     * @note[short] iOS: 0x52369c
     * @note[short] Android
     */
    virtual int requestPage(int p0);

    /**
     * @note[short] MacOS (ARM): 0x847a90
     * @note[short] MacOS (Intel): 0x96ae00
     * @note[short] Windows: 0xc9610
     * @note[short] iOS: 0x524668
     * @note[short] Android
     */
    virtual void dropdownSelectionChanged(Dropdown* p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x8460c0
     * @note[short] MacOS (Intel): 0x969360
     * @note[short] Windows: 0xc7f70
     * @note[short] iOS: 0x5236d8
     * @note[short] Android
     */
    virtual void adminReportQueueFinished(cocos2d::CCArray* p0, int p1, int p2, int p3);

    /**
     * @note[short] MacOS (ARM): 0x84790c
     * @note[short] MacOS (Intel): 0x96ac90
     * @note[short] Windows: 0xc80a0
     * @note[short] iOS: 0x524524
     * @note[short] Android
     */
    virtual void adminReportQueueFailed();

    /**
     * @note[short] Windows: 0xc80f0
     * @note[short] Android
     */
    TodoReturn buildRows(cocos2d::CCArray* p0);

    /**
     * @note[short] Windows: 0xc94d0
     * @note[short] Android
     */
    void onOpenAuthor(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xc9540
     * @note[short] Android
     */
    void onOpenReview(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xc95b0
     * @note[short] Android
     */
    void onRefresh(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xb33a0
     * @note[short] Android
     */
    void onReportedContentChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xc95c0
     * @note[short] Android
     */
    void onToggleSort(cocos2d::CCObject* sender);
};

#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/TableViewCell.hpp>
#include <Geode/mapping/CCObject.hpp>

class GJCompactUserCell : public TableViewCell {
public:
    static constexpr auto CLASS_NAME = "GJCompactUserCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJCompactUserCell, TableViewCell)

    /**
     * @note[short] Android: Rebinded
     */
     GJCompactUserCell(char const* p0, float p1, float p2);

    /**
     * @note[short] Windows: 0x157bc0
     * @note[short] iOS: 0x1391b0
     * @note[short] Android: Rebinded
     */
    virtual  ~GJCompactUserCell();

    /**
     * @note[short] MacOS (ARM): 0x1ea620
     * @note[short] MacOS (Intel): 0x23f3e0
     * @note[short] Windows: 0x400c0
     * @note[short] iOS: 0x1391e8
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x1eb3c4
     * @note[short] MacOS (Intel): 0x240290
     * @note[short] Windows: 0x1487a0
     * @note[short] iOS: 0x139e1c
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] Windows: 0x158990
     * @note[short] Android
     */
    TodoReturn addStat(int p0, char const* p1, cocos2d::CCNode* p2, float& p3, float p4, bool p5);

    /**
     * @note[short] Windows: 0x157e90
     * @note[short] Android
     */
    TodoReturn buildUserRow(GJUserScore* p0, cocos2d::CCNode* p1, cocos2d::CCNode* p2, cocos2d::CCObject* p3, cocos2d::SEL_MenuHandler p4, float p5, bool p6, bool p7);

    /**
     * @note[short] Android
     */
    TodoReturn createStatStrip(GJUserScore* p0, cocos2d::CCNode* p1, float p2, float p3, bool p4);

    /**
     * @note[short] Windows: 0x157c60
     * @note[short] Android
     */
    void loadFromScore(GJUserScore* p0);

    /**
     * @note[short] Windows: 0x158c00
     * @note[short] Android
     */
    void onSendMessage(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x157b80
     * @note[short] Android
     */
    void onViewProfile(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void updateBGColor(int p0);
    GJUserScore* m_userScore;
};

#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/TableViewCell.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>

class GJScoreCell : public TableViewCell, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "GJScoreCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJScoreCell, TableViewCell)

    /**
     * @note[short] MacOS (Intel): 0x23e8b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
     GJScoreCell(char const* identifier, float width, float height);

    /**
     * @note[short] Windows: 0x155270
     * @note[short] iOS: 0x138cb4
     * @note[short] Android: Rebinded
     */
    virtual  ~GJScoreCell();

    /**
     * @note[short] MacOS (ARM): 0x1e9e10
     * @note[short] MacOS (Intel): 0x23e930
     * @note[short] Windows: 0x150360
     * @note[short] iOS: 0x138cec
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x1ea0b4
     * @note[short] MacOS (Intel): 0x23ebf0
     * @note[short] Windows: 0x1487a0
     * @note[short] iOS: 0x138e90
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x1e9fec
     * @note[short] MacOS (Intel): 0x23eb30
     * @note[short] Windows: 0x156b30
     * @note[short] iOS: 0x138e38
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x1dbf88
     * @note[short] MacOS (Intel): 0x22f8a0
     * @note[short] Windows: 0x155310
     * @note[short] Android
     */
    void loadFromScore(GJUserScore* score);

    /**
     * @note[short] MacOS (ARM): 0x1e9fe4
     * @note[short] MacOS (Intel): 0x23eb10
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onBan(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1e9fe8
     * @note[short] MacOS (Intel): 0x23eb20
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onCheck(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1ea08c
     * @note[short] MacOS (Intel): 0x23ebc0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onMoreLevels(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1e9e1c
     * @note[short] MacOS (Intel): 0x23e950
     * @note[short] Windows: 0x1569b0
     * @note[short] Android
     */
    void onViewProfile(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1dbf08
     * @note[short] MacOS (Intel): 0x22f840
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateBGColor(int index);
    GJUserScore* m_score;
};

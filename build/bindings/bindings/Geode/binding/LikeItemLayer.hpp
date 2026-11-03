#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>

class LikeItemLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "LikeItemLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(LikeItemLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     LikeItemLayer();

    /**
     * @note[short] Windows: 0x468830
     * @note[short] iOS: 0x2e9cc8
     * @note[short] Android: Rebinded
     */
    virtual  ~LikeItemLayer();

    /**
     * @note[short] MacOS (ARM): 0x5e6d14
     * @note[short] MacOS (Intel): 0x6cf940
     * @note[short] Windows: 0x4688e0
     * @note[short] Android
     */
    static LikeItemLayer* create(LikeItemType type, int id, int parentID);

    /**
     * @note[short] MacOS (ARM): 0x5e7404
     * @note[short] MacOS (Intel): 0x6d00d0
     * @note[short] Windows: 0x99f90
     * @note[short] iOS: 0x2ea254
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x5e6ea8
     * @note[short] MacOS (Intel): 0x6cfb50
     * @note[short] Windows: 0x4689f0
     * @note[short] Android
     */
    bool init(LikeItemType type, int id, int parentID);

    /**
     * @note[short] MacOS (ARM): 0x5e725c
     * @note[short] MacOS (Intel): 0x6cff20
     * @note[short] Windows: 0x99f60
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5e7310
     * @note[short] MacOS (Intel): 0x6cffd0
     * @note[short] Windows: 0x468df0
     * @note[short] Android
     */
    void onDislike(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5e7298
     * @note[short] MacOS (Intel): 0x6cff50
     * @note[short] Windows: 0x468de0
     * @note[short] Android
     */
    void onLike(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5e7388
     * @note[short] MacOS (Intel): 0x6d0050
     * @note[short] Windows: 0x468e00
     * @note[short] Android
     */
    void triggerLike(bool isLiked);
    LikeItemType m_itemType;
    int m_itemID;
    int m_commentSourceID;
    LikeItemDelegate* m_likeDelegate;
};

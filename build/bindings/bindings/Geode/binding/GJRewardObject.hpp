#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCObject.hpp>

class GJRewardObject : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "GJRewardObject";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJRewardObject, cocos2d::CCObject)

    /**
     * @note[short] Windows: 0x14e8e0
     * @note[short] iOS: 0xc4b8
     * @note[short] Android: Rebinded
     */
    virtual  ~GJRewardObject();

    /**
     * @note[short] MacOS (ARM): 0x4f3ac
     * @note[short] MacOS (Intel): 0x557d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static GJRewardObject* create();

    /**
     * @note[short] MacOS (ARM): 0x31820
     * @note[short] MacOS (Intel): 0x37af0
     * @note[short] Windows: 0x2f8a20
     * @note[short] Android
     */
    static GJRewardObject* create(SpecialRewardItem type, int total, int itemID);

    /**
     * @note[short] MacOS (ARM): 0x317a8
     * @note[short] MacOS (Intel): 0x37a80
     * @note[short] Windows: 0x2f89b0
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static GJRewardObject* createItemUnlock(UnlockType type, int id);

    /**
     * @note[short] MacOS (ARM): 0x4f434
     * @note[short] MacOS (Intel): 0x55870
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static GJRewardObject* createWithCoder(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x4f554
     * @note[short] MacOS (Intel): 0x55980
     * @note[short] Windows: 0x2f8a90
     * @note[short] iOS: 0x3de72c
     * @note[short] Android
     */
    virtual void encodeWithCoder(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x4f5d4
     * @note[short] MacOS (Intel): 0x55a00
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3de7ac
     * @note[short] Android
     */
    virtual bool canEncode();

    /**
     * @note[short] MacOS (ARM): 0x4f4e4
     * @note[short] MacOS (Intel): 0x55920
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void dataLoaded(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x4f408
     * @note[short] MacOS (Intel): 0x55830
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init(SpecialRewardItem specialRewardItem, int total, int itemID);

    /**
     * @note[short] MacOS (ARM): 0x4f418
     * @note[short] MacOS (Intel): 0x55850
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool isSpecialType();
    SpecialRewardItem m_specialRewardItem;
    UnlockType m_unlockType;
    int m_itemID;
    int m_total;
};

#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCObject.hpp>

class GJRewardItem : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "GJRewardItem";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJRewardItem, cocos2d::CCObject)

    /**
     * @note[short] MacOS (ARM): 0x4f618
     * @note[short] MacOS (Intel): 0x55a50
     * @note[short] Windows: 0x2d67a0
     * @note[short] iOS: 0x3de7f0
     * @note[short] Android: Rebinded
     */
    virtual  ~GJRewardItem();

    /**
     * @note[short] MacOS (ARM): 0x4f694
     * @note[short] MacOS (Intel): 0x55ad0
     * @note[short] Windows: 0x2f8b20
     * @note[short] Android
     */
    static GJRewardItem* create();

    /**
     * @note[short] MacOS (ARM): 0x31a1c
     * @note[short] MacOS (Intel): 0x37cd0
     * @note[short] Windows: 0x2f8e60
     * @note[short] Android
     */
    static GJRewardItem* create(int chestID, int timeRemaining, std::string rewardStr);

    /**
     * @note[short] MacOS (ARM): 0x375f0
     * @note[short] MacOS (Intel): 0x3da00
     * @note[short] Windows: 0x2f8c70
     * @note[short] Android
     */
    static GJRewardItem* createSpecial(GJRewardType rewardType, int orbs, int diamonds, SpecialRewardItem specialType1, int specialCount1, SpecialRewardItem specialType2, int specialCount2, int unlockType, int itemID);

    /**
     * @note[short] MacOS (ARM): 0x4f994
     * @note[short] MacOS (Intel): 0x55df0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static GJRewardItem* createWithCoder(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x4cf64
     * @note[short] MacOS (Intel): 0x52f50
     * @note[short] Windows: 0x2f8b60
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static GJRewardItem* createWithObject(GJRewardType type, GJRewardObject* object);

    /**
     * @note[short] MacOS (ARM): 0x31890
     * @note[short] MacOS (Intel): 0x37b60
     * @note[short] Windows: 0x2f8bf0
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static GJRewardItem* createWithObjects(GJRewardType type, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x4f918
     * @note[short] MacOS (Intel): 0x55d80
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static SpecialRewardItem getNextShardType(SpecialRewardItem type);

    /**
     * @note[short] MacOS (ARM): 0x33fd8
     * @note[short] MacOS (Intel): 0x3a1a0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static SpecialRewardItem getRandomNonMaxShardType();

    /**
     * @note[short] MacOS (ARM): 0x4f93c
     * @note[short] MacOS (Intel): 0x55da0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static SpecialRewardItem getRandomShardType();

    /**
     * @note[short] MacOS (ARM): 0x32330
     * @note[short] MacOS (Intel): 0x38600
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static bool isShardType(SpecialRewardItem type);

    /**
     * @note[short] MacOS (Intel): 0x38620
     * @note[short] Windows: 0x2f9190
     * @note[short] Android
     */
    static std::string rewardItemToStat(SpecialRewardItem rewardItem);

    /**
     * @note[short] MacOS (ARM): 0x4fac8
     * @note[short] MacOS (Intel): 0x55f00
     * @note[short] Windows: 0x2f9620
     * @note[short] iOS: 0x3deaf8
     * @note[short] Android
     */
    virtual void encodeWithCoder(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x4fb34
     * @note[short] MacOS (Intel): 0x55f60
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3deb64
     * @note[short] Android
     */
    virtual bool canEncode();

    /**
     * @note[short] MacOS (ARM): 0x4fa40
     * @note[short] MacOS (Intel): 0x55e80
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void dataLoaded(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x36a10
     * @note[short] MacOS (Intel): 0x3cf10
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    int getRewardCount(SpecialRewardItem type);

    /**
     * @note[short] MacOS (ARM): 0x324ec
     * @note[short] MacOS (Intel): 0x38720
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    GJRewardObject* getRewardObjectForType(SpecialRewardItem type);

    /**
     * @note[short] MacOS (ARM): 0x4f6c4
     * @note[short] MacOS (Intel): 0x55b00
     * @note[short] Windows: 0x2f8f30
     * @note[short] Android
     */
    bool init(int chestID, int timeRemaining, std::string rewardStr);
    int m_chestID;
    int m_timeRemaining;
    GJRewardType m_rewardType;
    cocos2d::CCArray* m_rewardObjects;
    bool m_unk;
};

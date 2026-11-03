#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>

class ItemInfoPopup : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "ItemInfoPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ItemInfoPopup, FLAlertLayer)

    /**
     * @note[short] Windows: 0x37b550
     * @note[short] iOS: 0x3a4e80
     * @note[short] Android: Rebinded
     */
    virtual  ~ItemInfoPopup();

    /**
     * @note[short] MacOS (ARM): 0x2e7738
     * @note[short] MacOS (Intel): 0x358290
     * @note[short] Windows: 0x3841e0
     * @note[short] Android
     */
    static ItemInfoPopup* create(int id, UnlockType type);

    /**
     * @note[short] MacOS (ARM): 0x2eb1fc
     * @note[short] MacOS (Intel): 0x35c180
     * @note[short] Windows: 0x3863b0
     * @note[short] Android
     */
    static std::string nameForUnlockType(int id, UnlockType type);

    /**
     * @note[short] MacOS (ARM): 0x2eb5a8
     * @note[short] MacOS (Intel): 0x35c4b0
     * @note[short] Windows: 0x99f90
     * @note[short] iOS: 0x3a60c0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x2e9ff8
     * @note[short] MacOS (Intel): 0x35ae60
     * @note[short] Windows: 0x3842f0
     * @note[short] Android
     */
    bool init(int id, UnlockType type);

    /**
     * @note[short] MacOS (ARM): 0x2eb54c
     * @note[short] MacOS (Intel): 0x35c450
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool isUnlockedByDefault(int id, UnlockType type);

    /**
     * @note[short] MacOS (ARM): 0x2eb510
     * @note[short] MacOS (Intel): 0x35c420
     * @note[short] Windows: 0x99f60
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2eb578
     * @note[short] MacOS (Intel): 0x35c480
     * @note[short] Windows: 0x386380
     * @note[short] Android
     */
    void onCredit(cocos2d::CCObject* sender);
    int m_itemID;
    UnlockType m_unlockType;
    int m_accountID;
};

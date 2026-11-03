#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCSprite.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/ccTypes.hpp>

class GJItemIcon : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "GJItemIcon";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJItemIcon, cocos2d::CCSprite)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GJItemIcon();

    /**
     * @note[short] MacOS (ARM): 0x2e95a0
     * @note[short] MacOS (Intel): 0x35a310
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3a4698
     * @note[short] Android: Rebinded
     */
     ~GJItemIcon();

    /**
     * @note[short] MacOS (ARM): 0x2e96a4
     * @note[short] MacOS (Intel): 0x35a460
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static GJItemIcon* create(UnlockType type, int id, cocos2d::ccColor3B color1, cocos2d::ccColor3B color2, bool dark, bool unused, bool noLabel, cocos2d::ccColor3B unlockColor);

    /**
     * @note[short] MacOS (ARM): 0x2e6998
     * @note[short] MacOS (Intel): 0x357270
     * @note[short] Windows: 0x383400
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static GJItemIcon* createBrowserItem(UnlockType unlockType, int itemID);

    /**
     * @note[short] MacOS (ARM): 0x2e9688
     * @note[short] MacOS (Intel): 0x35a430
     * @note[short] Windows: 0x3832d0
     * @note[short] Android
     */
    static GJItemIcon* createStoreItem(UnlockType type, int id, bool dark, cocos2d::ccColor3B unlockColor);

    /**
     * @note[short] MacOS (ARM): 0x2e69b8
     * @note[short] MacOS (Intel): 0x3572a0
     * @note[short] Windows: 0x384140
     * @note[short] Android
     */
    static float scaleForType(UnlockType type);

    /**
     * @note[short] MacOS (ARM): 0x2e9e0c
     * @note[short] MacOS (Intel): 0x35ac20
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static cocos2d::ccColor3B unlockedColorForType(int type);

    /**
     * @note[short] MacOS (ARM): 0x2e9ce0
     * @note[short] MacOS (Intel): 0x35aae0
     * @note[short] Windows: 0x383c70
     * @note[short] iOS: 0x3a4c38
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char opacity);

    /**
     * @note[short] MacOS (ARM): 0x2e6eb0
     * @note[short] MacOS (Intel): 0x3579d0
     * @note[short] Windows: 0x384070
     * @note[short] Android
     */
    void changeToLockedState(float scale);

    /**
     * @note[short] MacOS (ARM): 0x2e6e88
     * @note[short] MacOS (Intel): 0x357950
     * @note[short] Windows: 0x383d10
     * @note[short] Android
     */
    void darkenStoreItem(ShopType type);

    /**
     * @note[short] MacOS (ARM): 0x2e9e80
     * @note[short] MacOS (Intel): 0x35ac80
     * @note[short] Windows: 0x383d90
     * @note[short] Android
     */
    void darkenStoreItem(cocos2d::ccColor3B color);

    /**
     * @note[short] MacOS (ARM): 0x2e97b4
     * @note[short] MacOS (Intel): 0x35a580
     * @note[short] Windows: 0x383530
     * @note[short] Android
     */
    bool init(UnlockType type, int id, cocos2d::ccColor3B color1, cocos2d::ccColor3B color2, bool dark, bool unused, bool noLabel, cocos2d::ccColor3B unlockColor);

    /**
     * @note[short] MacOS (ARM): 0x2e6f90
     * @note[short] MacOS (Intel): 0x357a80
     * @note[short] Windows: 0x383fb0
     * @note[short] Android
     */
    void toggleEnabledState(bool enabled);
    cocos2d::CCSprite* m_player;
    int m_iconRequestID;
    cocos2d::CCSize m_playerSize;
    bool m_isIcon;
    int m_unlockID;
    UnlockType m_unlockType;
};

#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCObject.hpp>

class GJSmartPrefab : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "GJSmartPrefab";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJSmartPrefab, cocos2d::CCObject)

    /**
     * @note[short] Windows: 0x3b6af0
     * @note[short] iOS: 0x8720
     * @note[short] Android: Rebinded
     */
    virtual  ~GJSmartPrefab();

    /**
     * @note[short] MacOS (ARM): 0x387d88
     * @note[short] MacOS (Intel): 0x40ef30
     * @note[short] Windows: 0x3bbe10
     * @note[short] Android
     */
    static GJSmartPrefab* create();

    /**
     * @note[short] MacOS (ARM): 0x38d4d0
     * @note[short] MacOS (Intel): 0x415210
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static GJSmartPrefab* createWithCoder(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x38d610
     * @note[short] MacOS (Intel): 0x415350
     * @note[short] Windows: 0x3bbe90
     * @note[short] iOS: 0x87e0
     * @note[short] Android
     */
    virtual void encodeWithCoder(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x38d4c8
     * @note[short] MacOS (Intel): 0x415200
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x8738
     * @note[short] Android
     */
    virtual bool canEncode();

    /**
     * @note[short] MacOS (ARM): 0x38d5a0
     * @note[short] MacOS (Intel): 0x4152e0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void dataLoaded(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x38d4ac
     * @note[short] MacOS (Intel): 0x4151e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init();
    std::string m_prefabKey;
    std::string m_prefabData;
    int m_prefabID;
    int m_prefabChance;
};

#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/BrowseSmartTemplateLayer.hpp>

class BrowseSmartKeyLayer : public BrowseSmartTemplateLayer {
public:
    static constexpr auto CLASS_NAME = "BrowseSmartKeyLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(BrowseSmartKeyLayer, BrowseSmartTemplateLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     BrowseSmartKeyLayer();

    /**
     * @note[short] Windows: 0x5ec120
     * @note[short] iOS: 0x7b1fc
     * @note[short] Android: Rebinded
     */
    virtual  ~BrowseSmartKeyLayer();

    /**
     * @note[short] MacOS (ARM): 0x234310
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static BrowseSmartKeyLayer* create(GJSmartTemplate* smartTemplate, std::string prefabKey);

    /**
     * @note[short] MacOS (ARM): 0x445620
     * @note[short] MacOS (Intel): 0x4e6af0
     * @note[short] Windows: 0x5f2190
     * @note[short] iOS: 0x7c29c
     * @note[short] Android
     */
    virtual void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x445198
     * @note[short] MacOS (Intel): 0x4e6660
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void addChanceToSelected(int chance, bool zero);

    /**
     * @note[short] MacOS (ARM): 0x444de4
     * @note[short] MacOS (Intel): 0x4e6330
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void createTemplateObjects();

    /**
     * @note[short] MacOS (ARM): 0x445014
     * @note[short] MacOS (Intel): 0x4e64d0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void deletedSelectedItems();

    /**
     * @note[short] MacOS (ARM): 0x44537c
     * @note[short] MacOS (Intel): 0x4e6840
     * @note[short] Windows: 0x5f1da0
     * @note[short] Android
     */
    cocos2d::CCArray* getAllSelectedBlocks();

    /**
     * @note[short] MacOS (ARM): 0x444354
     * @note[short] MacOS (Intel): 0x4e5770
     * @note[short] Windows: 0x5f0f90
     * @note[short] Android
     */
    bool init(GJSmartTemplate* smartTemplate, std::string prefabKey);

    /**
     * @note[short] MacOS (ARM): 0x444d40
     * @note[short] MacOS (Intel): 0x4e62a0
     * @note[short] Windows: 0x5f1990
     * @note[short] Android
     */
    void onButton(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x444d14
     * @note[short] MacOS (Intel): 0x4e6270
     * @note[short] Windows: 0x5f20b0
     * @note[short] Android
     */
    void onPrefabObject(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x445444
     * @note[short] MacOS (Intel): 0x4e6910
     * @note[short] Windows: 0x5f1f60
     * @note[short] Android
     */
    void updateChanceValues();
    std::string m_prefabKey;
    int m_templatePage;
};

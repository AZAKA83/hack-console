#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SmartPrefabResult.hpp>
#include <Geode/binding/FLAlertLayer.hpp>

class BrowseSmartTemplateLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "BrowseSmartTemplateLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(BrowseSmartTemplateLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x5ec020
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     BrowseSmartTemplateLayer();

    /**
     * @note[short] Windows: 0x5ef780
     * @note[short] iOS: 0x79bb8
     * @note[short] Android: Rebinded
     */
     ~BrowseSmartTemplateLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static BrowseSmartTemplateLayer* create(GJSmartTemplate* smartTemplate, SmartBrowseFilter browseFilter);

    /**
     * @note[short] MacOS (ARM): 0x4441ac
     * @note[short] MacOS (Intel): 0x4e54e0
     * @note[short] Windows: 0x5f0f00
     * @note[short] iOS: 0x7b130
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x4441d0
     * @note[short] MacOS (Intel): 0x4e5520
     * @note[short] Windows: 0x5f0f20
     * @note[short] iOS: 0x7b154
     * @note[short] Android
     */
    virtual void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x443b48
     * @note[short] MacOS (Intel): 0x4e4e40
     * @note[short] Windows: 0x5f0310
     * @note[short] Android
     */
    void addObjectToPage(cocos2d::CCObject* object, int page);

    /**
     * @note[short] MacOS (ARM): 0x4431a8
     * @note[short] MacOS (Intel): 0x4e4490
     * @note[short] Windows: 0x5eff20
     * @note[short] Android
     */
    void addPrefabMenuItem(SmartPrefabResult result, int index);

    /**
     * @note[short] MacOS (ARM): 0x442e88
     * @note[short] MacOS (Intel): 0x4e4150
     * @note[short] Windows: 0x5f03b0
     * @note[short] Android
     */
    void baseSetup();

    /**
     * @note[short] MacOS (ARM): 0x443c38
     * @note[short] MacOS (Intel): 0x4e4f10
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void createDots();

    /**
     * @note[short] MacOS (ARM): 0x443e8c
     * @note[short] MacOS (Intel): 0x4e5170
     * @note[short] Windows: 0x5f0b10
     * @note[short] Android
     */
    void createPrefab(std::string key, int id);

    /**
     * @note[short] MacOS (ARM): 0x44364c
     * @note[short] MacOS (Intel): 0x4e49b0
     * @note[short] Windows: 0x5f09a0
     * @note[short] Android
     */
    void goToPage(int page);

    /**
     * @note[short] MacOS (ARM): 0x4427c0
     * @note[short] MacOS (Intel): 0x4e3910
     * @note[short] Windows: 0x5ef850
     * @note[short] Android
     */
    bool init(GJSmartTemplate* smartTemplate, SmartBrowseFilter browseFilter);

    /**
     * @note[short] MacOS (ARM): 0x443bc4
     * @note[short] MacOS (Intel): 0x4e4ec0
     * @note[short] Windows: 0x5f0eb0
     * @note[short] Android
     */
    void onClick(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x443f4c
     * @note[short] MacOS (Intel): 0x4e5220
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x443820
     * @note[short] MacOS (Intel): 0x4e4ba0
     * @note[short] Windows: 0x5f0be0
     * @note[short] Android
     */
    void onTemplateObject(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x443d18
     * @note[short] MacOS (Intel): 0x4e4fe0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateDots();
    GJSmartTemplate* m_template;
    cocos2d::CCArray* m_pages;
    int m_page;
    cocos2d::CCNode* m_nextPageBtn;
    cocos2d::CCNode* m_prevPageBtn;
    cocos2d::CCArray* m_dotsArray;
};

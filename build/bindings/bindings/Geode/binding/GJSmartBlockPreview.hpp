#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SmartPrefabResult.hpp>
#include <Geode/mapping/CCNode.hpp>

class GJSmartBlockPreview : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GJSmartBlockPreview";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJSmartBlockPreview, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x3b6b50
     * @note[short] iOS: 0x8874
     * @note[short] Android: Rebinded
     */
    virtual  ~GJSmartBlockPreview();

    /**
     * @note[short] MacOS (ARM): 0x38d744
     * @note[short] MacOS (Intel): 0x415460
     * @note[short] Windows: 0x3bbef0
     * @note[short] Android
     */
    static GJSmartBlockPreview* create(std::string key);

    /**
     * @note[short] MacOS (ARM): 0x38e4dc
     * @note[short] MacOS (Intel): 0x4161a0
     * @note[short] Windows: 0x3bccf0
     * @note[short] Android
     */
    void addChance(int count, int total);

    /**
     * @note[short] MacOS (ARM): 0x38e404
     * @note[short] MacOS (Intel): 0x4160c0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void addCount(int count);

    /**
     * @note[short] MacOS (ARM): 0x38e224
     * @note[short] MacOS (Intel): 0x415ef0
     * @note[short] Windows: 0x3bcb70
     * @note[short] Android
     */
    void addPreview(std::string key, std::string data, LevelEditorLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0xa9aec
     * @note[short] MacOS (Intel): 0x4158e0
     * @note[short] Windows: 0x3bc2d0
     * @note[short] Android
     */
    cocos2d::CCArray* addTemplateGuide(SmartPrefabResult result, float opacity);

    /**
     * @note[short] MacOS (ARM): 0x38d8f4
     * @note[short] MacOS (Intel): 0x4155e0
     * @note[short] Windows: 0x3bc030
     * @note[short] Android
     */
    void addTemplateGuide(std::string key, int type);

    /**
     * @note[short] MacOS (ARM): 0x38e3b0
     * @note[short] MacOS (Intel): 0x416070
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void createInfoLabel();

    /**
     * @note[short] MacOS (ARM): 0x38d880
     * @note[short] MacOS (Intel): 0x415570
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool init(std::string key);

    /**
     * @note[short] MacOS (ARM): 0x38e698
     * @note[short] MacOS (Intel): 0x416360
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void toggleSelectItem(bool selected);
    std::string m_prefabKey;
    cocos2d::CCLabelBMFont* m_infoLabel;
    cocos2d::CCSprite* m_selectSprite;
    bool m_selected;
};

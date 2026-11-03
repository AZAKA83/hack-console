#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>
#include <Geode/mapping/vector.hpp>

class SetupSpawnPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupSpawnPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupSpawnPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x5f3c90
     * @note[short] iOS: 0x11c44c
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupSpawnPopup();

    /**
     * @note[short] Windows: 0x5f3d70
     * @note[short] Android
     */
    static SetupSpawnPopup* create(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x221a3c
     * @note[short] MacOS (Intel): 0x27c0f0
     * @note[short] Windows: 0x5b9920
     * @note[short] iOS: 0x11d6d0
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x221808
     * @note[short] MacOS (Intel): 0x27beb0
     * @note[short] Windows: 0x5f4d40
     * @note[short] Android
     */
    void addRemap(int oldID, int newID);

    /**
     * @note[short] Windows: 0x5f3eb0
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (Intel): 0x27b590
     * @note[short] Windows: 0x5f4ce0
     * @note[short] Android
     */
    void onAddRemap(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x220fd8
     * @note[short] MacOS (Intel): 0x107a00
     * @note[short] Windows: 0x5f4e50
     * @note[short] Android
     */
    void onDeleteRemap(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2210c0
     * @note[short] MacOS (Intel): 0x27b6e0
     * @note[short] Windows: 0x5f4ff0
     * @note[short] Android
     */
    void onPasteRemap(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x7c4c
     * @note[short] MacOS (Intel): 0x27bff0
     * @note[short] Windows: 0x5f58c0
     * @note[short] Android
     */
    void onSelectRemap(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2218ec
     * @note[short] MacOS (Intel): 0x27bfa0
     * @note[short] Windows: 0x5f5990
     * @note[short] Android
     */
    void queueUpdateButtons();

    /**
     * @note[short] MacOS (ARM): 0x221100
     * @note[short] MacOS (Intel): 0x27b730
     * @note[short] Windows: 0x5f5090
     * @note[short] Android
     */
    void updateRemapButtons(float dt);
    bool m_isBusy;
    cocos2d::CCArray* m_remapButtons;
    std::vector<int> m_remapGroups;
    int m_remapOriginalID;
    int m_remapNewID;
};

#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/KeybindSettingsEntry.hpp>
#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>
#include <Geode/mapping/vector.hpp>

class KeybindingsSettingsPopup : public FLAlertLayer, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "KeybindingsSettingsPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(KeybindingsSettingsPopup, FLAlertLayer)

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android: Rebinded
     */
     KeybindingsSettingsPopup();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x4eed28
     * @note[short] Android: Rebinded
     */
    virtual  ~KeybindingsSettingsPopup();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static KeybindingsSettingsPopup* create(KeybindingsLayer* layer, std::vector<KeybindSettingsEntry> const& entries);

    /**
     * @note[short] MacOS (ARM): 0x802d34
     * @note[short] MacOS (Intel): 0x91e9f0
     * @note[short] Windows: 0x99f90
     * @note[short] iOS: 0x4eecac
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x802c38
     * @note[short] MacOS (Intel): 0x91e8e0
     * @note[short] Windows: 0x3d9d80
     * @note[short] iOS: 0x4eebc0
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] Windows: 0x3d8e80
     * @note[short] Android
     */
    bool init(KeybindingsLayer* layer, std::vector<KeybindSettingsEntry> const& entries);

    /**
     * @note[short] Windows: 0x99f60
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3d93c0
     * @note[short] Android
     */
    void onEntry(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3d9480
     * @note[short] Android
     */
    void onExport(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3d9640
     * @note[short] Android
     */
    void onImport(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3d9c60
     * @note[short] Android
     */
    void onReset(cocos2d::CCObject* sender);
    KeybindingsLayer* m_layer;
    std::vector<KeybindSettingsEntry> m_entries;
    int m_pendingAction;
    std::string m_importBlob;
    int m_importVersion;
};

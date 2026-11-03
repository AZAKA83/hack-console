#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/EditorWindowPopup.hpp>

class FindObjectPopup : public EditorWindowPopup {
public:
    static constexpr auto CLASS_NAME = "FindObjectPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(FindObjectPopup, EditorWindowPopup)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     FindObjectPopup();

    /**
     * @note[short] Windows: 0x180260
     * @note[short] iOS: 0x4dd518
     * @note[short] Android: Rebinded
     */
    virtual  ~FindObjectPopup();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static FindObjectPopup* create(EditorUI* p0);

    /**
     * @note[short] MacOS (ARM): 0x7ed44c
     * @note[short] MacOS (Intel): 0x906670
     * @note[short] Windows: 0x1809e0
     * @note[short] iOS: 0x4ddb18
     * @note[short] Android
     */
    virtual void valueDidChange(int p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x7ece6c
     * @note[short] MacOS (Intel): 0x906060
     * @note[short] Windows: 0x180330
     * @note[short] iOS: 0x4dd68c
     * @note[short] Android
     */
    virtual void onBuildWindowContent();

    /**
     * @note[short] MacOS (ARM): 0x7ed5e0
     * @note[short] MacOS (Intel): 0x906850
     * @note[short] Windows: 0x180a90
     * @note[short] iOS: 0x4ddc78
     * @note[short] Android
     */
    virtual void onFieldEnter();

    /**
     * @note[short] Windows: 0x9999999
     * @note[short] Android
     */
    bool init(EditorUI* p0);

    /**
     * @note[short] Windows: 0x180aa0
     * @note[short] Android
     */
    void onFindStep(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x180ad0
     * @note[short] Android
     */
    void onOptions(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x180a90
     * @note[short] Android
     */
    void onSelect(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn runFind(int p0);
    int m_groupID;
};

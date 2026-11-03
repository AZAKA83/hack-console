#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>
#include <Geode/mapping/vector.hpp>

class AdminActionConfirmPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "AdminActionConfirmPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(AdminActionConfirmPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0xa5190
     * @note[short] iOS: 0x54ca58
     * @note[short] Android: Rebinded
     */
    virtual  ~AdminActionConfirmPopup();

    /**
     * @note[short] Android
     */
    static AdminActionConfirmPopup* create(AdminActionConfirmDelegate* p0, int p1, char const* p2, std::string const& p3, char const* p4, std::vector<int> const& p5, std::string const& p6, bool p7);

    /**
     * @note[short] MacOS (ARM): 0x87feb4
     * @note[short] MacOS (Intel): 0x9a5e50
     * @note[short] Windows: 0xa6580
     * @note[short] iOS: 0x54ca34
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x87fe6c
     * @note[short] MacOS (Intel): 0x9a5e00
     * @note[short] Windows: 0xa6530
     * @note[short] iOS: 0x54c9f0
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn addHelp(char const* p0, std::string const& p1);

    /**
     * @note[short] Windows: 0xa53b0
     * @note[short] Android
     */
    TodoReturn createContentDelete(AdminActionConfirmDelegate* p0, int p1, char const* p2, std::string const& p3, int p4);

    /**
     * @note[short] Android
     */
    bool init(AdminActionConfirmDelegate* p0, int p1, char const* p2, std::string const& p3, char const* p4, std::vector<int> const& p5, std::string const& p6, bool p7);

    /**
     * @note[short] Android
     */
    void onCategoryToggle(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xa6240
     * @note[short] Android
     */
    void onConfirm(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn selectedCategories();
};

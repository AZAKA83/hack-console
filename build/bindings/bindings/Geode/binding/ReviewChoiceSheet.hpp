#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>
#include <Geode/mapping/vector.hpp>

class ReviewChoiceSheet : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "ReviewChoiceSheet";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ReviewChoiceSheet, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x60ac50
     * @note[short] iOS: 0x31c40
     * @note[short] Android: Rebinded
     */
    virtual  ~ReviewChoiceSheet();

    /**
     * @note[short] Windows: 0xae200
     * @note[short] Android
     */
    static ReviewChoiceSheet* create(ReviewChoiceDelegate* p0, int p1, char const* p2, std::string const& p3, std::vector<std::string> const& p4, std::vector<char const*> const& p5, bool p6, char const* p7);

    /**
     * @note[short] MacOS (ARM): 0x86f33c
     * @note[short] MacOS (Intel): 0x994260
     * @note[short] Windows: 0xa6580
     * @note[short] iOS: 0x540a0c
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x86f2f4
     * @note[short] MacOS (Intel): 0x994210
     * @note[short] Windows: 0xaed70
     * @note[short] iOS: 0x5409c8
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xae380
     * @note[short] Android
     */
    bool init(ReviewChoiceDelegate* p0, int p1, char const* p2, std::string const& p3, std::vector<std::string> const& p4, std::vector<char const*> const& p5, bool p6, char const* p7);

    /**
     * @note[short] Windows: 0xaeb30
     * @note[short] Android
     */
    void onChoice(cocos2d::CCObject* sender);
};

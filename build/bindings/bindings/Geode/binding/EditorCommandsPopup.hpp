#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/EditorWindowPopup.hpp>

class EditorCommandsPopup : public EditorWindowPopup {
public:
    static constexpr auto CLASS_NAME = "EditorCommandsPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(EditorCommandsPopup, EditorWindowPopup)

    /**
     * @note[short] Windows: 0x17d520
     * @note[short] iOS: 0x4c54f0
     * @note[short] Android: Rebinded
     */
    virtual  ~EditorCommandsPopup();

    /**
     * @note[short] Android
     */
    static EditorCommandsPopup* create(EditorUI* p0);

    /**
     * @note[short] MacOS (ARM): 0x7ca924
     * @note[short] MacOS (Intel): 0x8de0f0
     * @note[short] Windows: 0x17d5f0
     * @note[short] iOS: 0x4c5668
     * @note[short] Android
     */
    virtual void onBuildWindowContent();

    /**
     * @note[short] MacOS (ARM): 0x7cb6e8
     * @note[short] MacOS (Intel): 0x8def30
     * @note[short] Windows: 0x17dae0
     * @note[short] iOS: 0x4c5bfc
     * @note[short] Android
     */
    virtual void onWindowResized();

    /**
     * @note[short] Windows: 0x17d7a0
     * @note[short] Android
     */
    TodoReturn addCommandButton(char const* p0, EditorCommand p1);

    /**
     * @note[short] Android
     */
    bool init(EditorUI* p0);

    /**
     * @note[short] Android
     */
    TodoReturn layoutCommandButtons();

    /**
     * @note[short] Windows: 0x17daf0
     * @note[short] Android
     */
    void onCommand(cocos2d::CCObject* sender);
};

#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/TableViewCell.hpp>

class EditorSoundConfigCell : public TableViewCell {
public:
    static constexpr auto CLASS_NAME = "EditorSoundConfigCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(EditorSoundConfigCell, TableViewCell)

    /**
     * @note[short] Windows: 0x190600
     * @note[short] Android: Rebinded
     */
     EditorSoundConfigCell(char const* p0, float p1, float p2);

    /**
     * @note[short] Windows: 0x190690
     * @note[short] iOS: 0x4ce520
     * @note[short] Android: Rebinded
     */
    virtual  ~EditorSoundConfigCell();

    /**
     * @note[short] Android
     */
    static EditorSoundConfigCell* create(float p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x7da7ac
     * @note[short] MacOS (Intel): 0x8f2060
     * @note[short] Windows: 0x3ff70
     * @note[short] iOS: 0x4ce558
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] Windows: 0x190730
     * @note[short] Android
     */
    TodoReturn loadFromConfig(GJEditorSoundConfig* p0);

    /**
     * @note[short] Windows: 0x1919e0
     * @note[short] Android
     */
    void onInfoPopup(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x191970
     * @note[short] Android
     */
    void onView(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x1919a0
     * @note[short] Android
     */
    void onViewProfile(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn updateBGColor(int p0);
};

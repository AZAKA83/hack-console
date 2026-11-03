#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/TableViewCell.hpp>
#include <Geode/binding/CustomSFXDelegate.hpp>

class CustomSFXCell : public TableViewCell, public CustomSFXDelegate {
public:
    static constexpr auto CLASS_NAME = "CustomSFXCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CustomSFXCell, TableViewCell)

    /**
     * @note[short] Windows: 0x150870
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
     CustomSFXCell(char const* identifier, float width, float height);

    /**
     * @note[short] Windows: 0x1507d0
     * @note[short] iOS: 0x137cd0
     * @note[short] Android: Rebinded
     */
    virtual  ~CustomSFXCell();

    /**
     * @note[short] MacOS (ARM): 0x1e8890
     * @note[short] MacOS (Intel): 0x23ce40
     * @note[short] Windows: 0x150900
     * @note[short] iOS: 0x137d08
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x1e8b2c
     * @note[short] MacOS (Intel): 0x23d240
     * @note[short] Windows: 0x1487a0
     * @note[short] iOS: 0x137fa4
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x1e88a4
     * @note[short] MacOS (Intel): 0x23ce60
     * @note[short] Windows: 0x150a80
     * @note[short] iOS: 0x137d1c
     * @note[short] Android
     */
    virtual void sfxObjectSelected(SFXInfoObject* object);

    /**
     * @note[short] MacOS (ARM): 0x1e8abc
     * @note[short] MacOS (Intel): 0x23d180
     * @note[short] Windows: 0x150580
     * @note[short] iOS: 0x137f34
     * @note[short] Android
     */
    virtual int getActiveSFXID();

    /**
     * @note[short] MacOS (ARM): 0x1e8af4
     * @note[short] MacOS (Intel): 0x23d1e0
     * @note[short] Windows: 0x150be0
     * @note[short] iOS: 0x137f6c
     * @note[short] Android
     */
    virtual int getActiveCustomSFXID();

    /**
     * @note[short] MacOS (ARM): 0x1e8900
     * @note[short] MacOS (Intel): 0x23cee0
     * @note[short] Windows: 0x150ac0
     * @note[short] iOS: 0x137d78
     * @note[short] Android
     */
    virtual void sfxAddToFolder(SFXInfoObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x1e895c
     * @note[short] MacOS (Intel): 0x23cf60
     * @note[short] Windows: 0x150b00
     * @note[short] iOS: 0x137dd4
     * @note[short] Android
     */
    virtual void sfxEditCustomObject(SFXInfoObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x1e89b8
     * @note[short] MacOS (Intel): 0x23cfe0
     * @note[short] Windows: 0x150b40
     * @note[short] iOS: 0x137e30
     * @note[short] Android
     */
    virtual void sfxToggleCustomSelect(SFXInfoObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x1e8a14
     * @note[short] MacOS (Intel): 0x23d060
     * @note[short] Windows: 0x150b80
     * @note[short] iOS: 0x137e8c
     * @note[short] Android
     */
    virtual bool isCustomEntrySelected(int p0);

    /**
     * @note[short] MacOS (ARM): 0x1e8a4c
     * @note[short] MacOS (Intel): 0x23d0c0
     * @note[short] Windows: 0x150ba0
     * @note[short] iOS: 0x137ec4
     * @note[short] Android
     */
    virtual bool inCustomSFXTree();

    /**
     * @note[short] MacOS (ARM): 0x1e8a84
     * @note[short] MacOS (Intel): 0x23d120
     * @note[short] Windows: 0x150bc0
     * @note[short] iOS: 0x137efc
     * @note[short] Android
     */
    virtual bool showsSFXInfoButton();

    /**
     * @note[short] MacOS (ARM): 0x1d6a4c
     * @note[short] MacOS (Intel): 0x231860
     * @note[short] Windows: 0x150920
     * @note[short] Android
     */
    void loadFromObject(SFXInfoObject* object);

    /**
     * @note[short] MacOS (ARM): 0x1e2848
     * @note[short] MacOS (Intel): 0x2366e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool shouldReload();

    /**
     * @note[short] MacOS (ARM): 0x1e6998
     * @note[short] MacOS (Intel): 0x23ac60
     * @note[short] Windows: 0x150c00
     * @note[short] Android
     */
    void updateBGColor(int index);
    SFXInfoObject* m_sfxObject;
    bool m_selected;
    bool m_compactMode;
};

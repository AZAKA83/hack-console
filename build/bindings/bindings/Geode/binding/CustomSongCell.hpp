#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/TableViewCell.hpp>
#include <Geode/binding/CustomSongDelegate.hpp>

class CustomSongCell : public TableViewCell, public CustomSongDelegate {
public:
    static constexpr auto CLASS_NAME = "CustomSongCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CustomSongCell, TableViewCell)

    /**
     * @note[short] MacOS (ARM): 0x1e9dc4
     * @note[short] MacOS (Intel): 0x23c9c0
     * @note[short] Windows: 0x1502e0
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
     CustomSongCell(char const* identifier, float width, float height);

    /**
     * @note[short] Windows: 0x150230
     * @note[short] iOS: 0x137a60
     * @note[short] Android: Rebinded
     */
    virtual  ~CustomSongCell();

    /**
     * @note[short] MacOS (ARM): 0x1e85c8
     * @note[short] MacOS (Intel): 0x23ca40
     * @note[short] Windows: 0x150360
     * @note[short] iOS: 0x137a98
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x1e8754
     * @note[short] MacOS (Intel): 0x23cc50
     * @note[short] Windows: 0x1487a0
     * @note[short] iOS: 0x137c24
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x1e8698
     * @note[short] MacOS (Intel): 0x23cb30
     * @note[short] Windows: 0x150540
     * @note[short] iOS: 0x137b60
     * @note[short] Android
     */
    virtual void songIDChanged(int id);

    /**
     * @note[short] MacOS (ARM): 0x1e86f4
     * @note[short] MacOS (Intel): 0x23cbb0
     * @note[short] Windows: 0x150580
     * @note[short] iOS: 0x137bbc
     * @note[short] Android
     */
    virtual int getActiveSongID();

    /**
     * @note[short] MacOS (ARM): 0x1e872c
     * @note[short] MacOS (Intel): 0x23cc10
     * @note[short] Windows: 0x1505a0
     * @note[short] iOS: 0x137bf4
     * @note[short] Android
     */
    virtual std::string getSongFileName();

    /**
     * @note[short] MacOS (ARM): 0x1e8744
     * @note[short] MacOS (Intel): 0x23cc30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x137c14
     * @note[short] Android
     */
    virtual LevelSettingsObject* getLevelSettings();

    /**
     * @note[short] MacOS (ARM): 0x1d61c0
     * @note[short] MacOS (Intel): 0x229940
     * @note[short] Windows: 0x150370
     * @note[short] Android
     */
    void loadFromObject(SongInfoObject* object);

    /**
     * @note[short] MacOS (ARM): 0x1e85d4
     * @note[short] MacOS (Intel): 0x23ca60
     * @note[short] Windows: 0x1505d0
     * @note[short] Android
     */
    void onDelete(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1e2848
     * @note[short] MacOS (Intel): 0x2366e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool shouldReload();

    /**
     * @note[short] MacOS (ARM): 0x1d636c
     * @note[short] MacOS (Intel): 0x229af0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateBGColor(int index);
    SongInfoObject* m_songInfoObject;
    bool m_selected;
};

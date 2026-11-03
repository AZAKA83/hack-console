#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/TableViewCell.hpp>

class URLCell : public TableViewCell {
public:
    static constexpr auto CLASS_NAME = "URLCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(URLCell, TableViewCell)

    /**
     * @note[short] MacOS (ARM): 0x1edd4c
     * @note[short] MacOS (Intel): 0x243410
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
     URLCell(char const* identifier, float width, float height);

    /**
     * @note[short] Windows: 0x89d10
     * @note[short] Android: Rebinded
     */
    virtual  ~URLCell();

    /**
     * @note[short] MacOS (ARM): 0x1edd90
     * @note[short] MacOS (Intel): 0x243480
     * @note[short] Windows: 0x400c0
     * @note[short] iOS: 0x13b914
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x1eddf8
     * @note[short] MacOS (Intel): 0x2434f0
     * @note[short] Windows: 0x1487a0
     * @note[short] iOS: 0x13b968
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x1d9ccc
     * @note[short] MacOS (Intel): 0x22d210
     * @note[short] Windows: 0x15fab0
     * @note[short] Android
     */
    void loadFromObject(CCURLObject* object);

    /**
     * @note[short] MacOS (ARM): 0x1edd9c
     * @note[short] MacOS (Intel): 0x2434a0
     * @note[short] Windows: 0x15fcf0
     * @note[short] Android
     */
    void onURL(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x22d3e0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateBGColor(int index);
    CCURLObject* m_urlObject;
};

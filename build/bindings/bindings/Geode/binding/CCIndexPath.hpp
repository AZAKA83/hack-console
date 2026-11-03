#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCObject.hpp>

class CCIndexPath : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "CCIndexPath";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCIndexPath, cocos2d::CCObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     CCIndexPath();

    /**
     * @note[short] MacOS (ARM): 0x502d8
     * @note[short] MacOS (Intel): 0x56760
     * @note[short] Windows: 0x87770
     * @note[short] iOS: 0xc4b8
     * @note[short] Android: Rebinded
     */
    virtual  ~CCIndexPath();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static CCIndexPath* CCIndexPathWithSectionRow(int section, int row);
    int m_row;
    int m_section;
};

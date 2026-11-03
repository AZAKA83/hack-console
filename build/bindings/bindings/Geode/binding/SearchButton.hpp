#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCSprite.hpp>

class SearchButton : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "SearchButton";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SearchButton, cocos2d::CCSprite)

    /**
     * @note[short] Windows: 0x43b6d0
     * @note[short] Android: Rebinded
     */
    virtual  ~SearchButton();

    /**
     * @note[short] MacOS (ARM): 0x263cc0
     * @note[short] Windows: 0x43b5e0
     * @note[short] Android
     */
    static SearchButton* create(char const* p0, char const* p1, float p2, char const* p3, float p4);

    /**
     * @note[short] Android
     */
    bool init(char const* p0, char const* p1, float p2, char const* p3, float p4);
    cocos2d::CCLabelBMFont* m_label;
    cocos2d::CCSprite* m_icon;
};

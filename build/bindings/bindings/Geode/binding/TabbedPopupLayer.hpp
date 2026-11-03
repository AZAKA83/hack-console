#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/TabbedPopupTab.hpp>
#include <Geode/binding/SetupTriggerPopup.hpp>
#include <Geode/mapping/vector.hpp>

class TabbedPopupLayer : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "TabbedPopupLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(TabbedPopupLayer, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): 0x543738
     * @note[short] MacOS (Intel): 0x5fdda0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1aa8e0
     * @note[short] Android: Rebinded
     */
    virtual  ~TabbedPopupLayer();

    /**
     * @note[short] MacOS (ARM): 0x57c2b0
     * @note[short] MacOS (Intel): 0x640010
     * @note[short] Windows: 0x66d090
     * @note[short] iOS: 0x1aa8ac
     * @note[short] Android
     */
    virtual void pageChanged();

    /**
     * @note[short] MacOS (ARM): 0x57be84
     * @note[short] MacOS (Intel): 0x63fc00
     * @note[short] Windows: 0x66cc10
     * @note[short] iOS: 0x1aa59c
     * @note[short] Android
     */
    virtual void showTab(int tab);

    /**
     * @note[short] MacOS (ARM): 0x57b320
     * @note[short] MacOS (Intel): 0x219a00
     * @note[short] Windows: 0x66c2a0
     * @note[short] Android
     */
    void addCloseButton();

    /**
     * @note[short] MacOS (ARM): 0x57b41c
     * @note[short] MacOS (Intel): 0x63f120
     * @note[short] Windows: 0x66c3a0
     * @note[short] Android
     */
    int addTab(std::string const& name, char const* icon);

    /**
     * @note[short] MacOS (ARM): 0x57b68c
     * @note[short] MacOS (Intel): 0x63f3e0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void beginTab(int tab);

    /**
     * @note[short] MacOS (ARM): 0x57b904
     * @note[short] MacOS (Intel): 0x63f670
     * @note[short] Windows: 0x66c5b0
     * @note[short] Android
     */
    void createTabButtons();

    /**
     * @note[short] Windows: 0x66c650
     * @note[short] Android
     */
    void createTabButtons(float p0, float p1, float p2, float p3, float p4, float p5);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    int ensurePopupPage(int tab, int page);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    int getPopupPage(int tab, int page) const ;

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void offsetToNextPage(int perPage);

    /**
     * @note[short] Windows: 0x66cfa0
     * @note[short] Android
     */
    void onTab(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x66cfe0
     * @note[short] Android
     */
    void onTabPage(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    int pageForButtonCount(int count, int perPage) const ;

    /**
     * @note[short] Windows: 0x66ced0
     * @note[short] Android
     */
    void refreshPageButtons();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void refreshTabButtons(char const* selectedBG, char const* normalBG);
    std::vector<TabbedPopupTab> m_tabs;
    std::vector<std::vector<int>> m_tabPages;
    int m_currentTab;
    int m_buildTab;
    CCMenuItemSpriteExtra* m_prevPageButton;
    CCMenuItemSpriteExtra* m_nextPageButton;
};

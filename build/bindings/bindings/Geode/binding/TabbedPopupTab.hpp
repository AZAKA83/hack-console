#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>


class TabbedPopupTab {
public:
    static constexpr auto CLASS_NAME = "TabbedPopupTab";
    std::string m_name;
    std::string m_icon;
    int m_groupID;
    int m_page;
    int m_pageCount;
    int m_itemCount;
    CCMenuItemSpriteExtra* m_button;
};

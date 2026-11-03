#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>


class GJLinkObject {
public:
    static constexpr auto CLASS_NAME = "GJLinkObject";

    /**
     * @note[short] Android
     */
    std::string getTitle();
    int m_unk000;
    int m_linkType;
    std::string m_title;
    std::string m_link;
};

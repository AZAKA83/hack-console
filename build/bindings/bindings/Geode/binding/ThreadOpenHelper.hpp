#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>


class ThreadOpenHelper {
public:
    static constexpr auto CLASS_NAME = "ThreadOpenHelper";

    /**
     * @note[short] Android
     */
    TodoReturn check(int p0, std::string const& p1);

    /**
     * @note[short] Windows: 0xf3fd0
     * @note[short] Android
     */
    TodoReturn showRulesOnce();
};

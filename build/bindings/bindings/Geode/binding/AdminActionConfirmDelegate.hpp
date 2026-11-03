#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/vector.hpp>

class AdminActionConfirmDelegate {
public:
    static constexpr auto CLASS_NAME = "AdminActionConfirmDelegate";

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void adminActionConfirmed(int p0, std::vector<int> const& p1, std::string const& p2);
};

#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>


class GDFileWriter {
public:
    static constexpr auto CLASS_NAME = "GDFileWriter";

    /**
     * @note[short] Windows: 0x73820
     */
    static bool writeAtomic(std::string const& path, std::string const& data);
};

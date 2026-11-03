#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>


class FileOperation {
public:
    static constexpr auto CLASS_NAME = "FileOperation";

    /**
     * @note[short] MacOS (ARM): 0x61387c
     * @note[short] MacOS (Intel): 0x702350
     * @note[short] Android
     */
    static std::string getFilePath();

    /**
     * @note[short] MacOS (ARM): 0x613888
     * @note[short] MacOS (Intel): 0x702360
     * @note[short] Android
     */
    static void readFile();

    /**
     * @note[short] MacOS (ARM): 0x6137e8
     * @note[short] MacOS (Intel): 0x7022e0
     * @note[short] Android
     */
    static void saveFile();
};

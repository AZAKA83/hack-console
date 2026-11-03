#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCObject.hpp>

class SFXInfoObject : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "SFXInfoObject";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SFXInfoObject, cocos2d::CCObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SFXInfoObject();

    /**
     * @note[short] Windows: 0x480bc0
     * @note[short] iOS: 0x1e395c
     * @note[short] Android: Rebinded
     */
    virtual  ~SFXInfoObject();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static SFXInfoObject* create(int id, std::string name, int folderID, int size, int duration);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    std::string getLowerCaseName();

    /**
     * @note[short] MacOS (ARM): 0xbe94
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init(int id, std::string name, int folderID, int size, int duration);
    int m_sfxID;
    int m_folderID;
    int m_size;
    int m_duration;
    bool m_folder;
    bool m_unk049;
    int m_unk048;
    std::string m_name;
    std::string m_lowerCaseName;
    std::string m_unk090;
};

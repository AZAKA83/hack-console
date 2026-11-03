#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/MusicSearchResult.hpp>

class SFXSearchResult : public MusicSearchResult {
public:
    static constexpr auto CLASS_NAME = "SFXSearchResult";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SFXSearchResult, MusicSearchResult)

    /**
     * @note[short] Windows: 0x480ef0
     * @note[short] iOS: 0x1e5020
     * @note[short] Android: Rebinded
     */
    virtual  ~SFXSearchResult();

    /**
     * @note[short] MacOS (Intel): 0x669580
     * @note[short] Windows: 0x49ad50
     * @note[short] Android
     */
    static SFXSearchResult* create(int folderID);

    /**
     * @note[short] MacOS (ARM): 0x5a1cb8
     * @note[short] MacOS (Intel): 0x6696c0
     * @note[short] Windows: 0x49ae70
     * @note[short] iOS: 0x1e512c
     * @note[short] Android
     */
    virtual void updateObjects(AudioSortType type);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    SFXFolderObject* getActiveFolder();

    /**
     * @note[short] Android
     */
    int getSelectedPage(int id, int count);

    /**
     * @note[short] MacOS (Intel): 0x669630
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init(int folderID);

    /**
     * @note[short] MacOS (ARM): 0x5a1c54
     * @note[short] MacOS (Intel): 0x669650
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void setActiveFolder(SFXFolderObject* folder);
    int m_folderID;
    SFXFolderObject* m_folderObject;
};

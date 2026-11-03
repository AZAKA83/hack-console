#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/array.hpp>

class EditorBuildStats {
public:
    static constexpr auto CLASS_NAME = "EditorBuildStats";

    /**
     * @note[short] Android
     */
    void fromString(std::string const& p0);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void noteAction();

    /**
     * @note[short] Android
     */
    std::string toString() const ;
    int m_objectsCreated;
    int m_objectsPasted;
    int m_objectsDeleted;
    int m_transformActions;
    int m_editPopupsOpened;
    int m_undoRedo;
    int m_playtestCount;
    float m_playtestTime;
    int m_editorFrames;
    int m_editorInputs;
    int m_editorSessions;
    uint64_t m_firstOpen;
    int m_originalLevelID;
    int m_originalLevelVersion;
    std::array<int, 8> m_actionGaps;
    int m_lastActionTime;
};

#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>


class EditorSFXManager {
public:
    static constexpr auto CLASS_NAME = "EditorSFXManager";

    /**
     * @note[short] MacOS (ARM): 0x7cd268
     * @note[short] MacOS (Intel): 0x8e0df0
     * @note[short] Windows: 0x185140
     * @note[short] iOS: 0x4c7450
     * @note[short] Android
     */
    static EditorSFXManager* sharedState();

    /**
     * @note[short] Windows: 0x185f20
     * @note[short] Android
     */
    TodoReturn actionToString(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn addFavoriteConfig(GJEditorSoundConfig* p0);

    /**
     * @note[short] Android
     */
    TodoReturn addSound(int p0, SFXTriggerGameObject* p1);

    /**
     * @note[short] Android
     */
    TodoReturn allActions();

    /**
     * @note[short] Android
     */
    TodoReturn applyConfigDirect(GJEditorSoundConfig* p0, bool p1, std::string* p2);

    /**
     * @note[short] Android
     */
    TodoReturn applyFavoriteConfig(int p0, bool p1, std::string* p2);

    /**
     * @note[short] Windows: 0x18bf10
     * @note[short] Android
     */
    TodoReturn applyMyConfig(int p0, bool p1, std::string* p2);

    /**
     * @note[short] Android
     */
    TodoReturn attachUploadedSoundID(int p0, int p1);

    /**
     * @note[short] Android
     */
    TodoReturn clearAction(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn clearActionMinInterval(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn clearAll();

    /**
     * @note[short] Android
     */
    TodoReturn collectAllSFXIDs();

    /**
     * @note[short] Android
     */
    TodoReturn copyFavoriteToMyConfig(GJEditorSoundConfig* p0);

    /**
     * @note[short] Android
     */
    TodoReturn createMyConfigFromLive(std::string const& p0);

    /**
     * @note[short] Android
     */
    TodoReturn createNewSound(int p0);

    /**
     * @note[short] Windows: 0x18af20
     * @note[short] Android
     */
    TodoReturn dataLoaded(DS_Dictionary* p0);

    /**
     * @note[short] Android
     */
    TodoReturn decodeSound(std::string const& p0);

    /**
     * @note[short] Android
     */
    TodoReturn deserializeAll(std::string const& p0, bool p1);

    /**
     * @note[short] Android
     */
    TodoReturn downloadAllMissing();

    /**
     * @note[short] Windows: 0x18ab70
     * @note[short] Android
     */
    TodoReturn encodeDataTo(DS_Dictionary* p0);

    /**
     * @note[short] Android
     */
    TodoReturn encodeSound(SFXTriggerGameObject* p0);

    /**
     * @note[short] iOS: 0x4c75f8
     * @note[short] Android
     */
    TodoReturn ensureLoaded();

    /**
     * @note[short] Android
     */
    TodoReturn findBinding(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn firstSetup();

    /**
     * @note[short] Android
     */
    TodoReturn getActionMinInterval(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn getActionMinIntervalOverride(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn getCustomSFXRawPath(int p0, int p1);

    /**
     * @note[short] Android
     */
    TodoReturn getFavoriteConfig(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn getFavoriteConfigs();

    /**
     * @note[short] Android
     */
    TodoReturn getMyConfig(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn getMyConfigForSoundID(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn getMyConfigs();

    /**
     * @note[short] Android
     */
    TodoReturn getOrCreateBinding(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn getPlayMode(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn hasSoundsForAction(int p0);

    /**
     * @note[short] Windows: 0x18b3d0
     * @note[short] Android
     */
    TodoReturn importFromString(std::string const& p0, EditorSFXImportOptions const& p1, std::string* p2);

    /**
     * @note[short] Android
     */
    bool init();

    /**
     * @note[short] Windows: 0x18bd70
     * @note[short] Android
     */
    TodoReturn overwriteMyConfigFromLive(int p0, std::string* p1);

    /**
     * @note[short] MacOS (ARM): 0x7ce64c
     * @note[short] MacOS (Intel): 0x8e27a0
     * @note[short] Windows: 0x1855c0
     * @note[short] Android
     */
    void playAction(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn playAction(int p0, int p1);

    /**
     * @note[short] Android
     */
    TodoReturn releaseBinding(EditorSFXBinding* p0);

    /**
     * @note[short] Android
     */
    TodoReturn removeFavoriteConfig(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn removeMyConfig(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn removeSoundAt(int p0, int p1);

    /**
     * @note[short] Windows: 0x188850
     * @note[short] Android
     */
    TodoReturn serializeAll();

    /**
     * @note[short] Android
     */
    TodoReturn serializeCompressed();

    /**
     * @note[short] Android
     */
    void setActionMinInterval(int p0, float p1);

    /**
     * @note[short] Android
     */
    void setEditorLoading(bool p0);

    /**
     * @note[short] Android
     */
    void setGlobalVolume(float p0);

    /**
     * @note[short] Android
     */
    void setPlayMode(int p0, int p1);

    /**
     * @note[short] Android
     */
    TodoReturn soundCountForAction(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn soundsForAction(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn summarizeBlob(std::string const& p0);
};

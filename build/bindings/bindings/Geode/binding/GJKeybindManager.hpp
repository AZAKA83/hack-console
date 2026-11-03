#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCKeyboardActionManager.hpp>
#include <Geode/mapping/enumKeyCodes.hpp>
#include <Geode/mapping/map.hpp>
#include <Geode/mapping/set.hpp>
#include <Geode/mapping/unordered_map.hpp>
#include <Geode/mapping/vector.hpp>

class GJKeybindManager : public cocos2d::CCKeyboardActionManager {
public:
    static constexpr auto CLASS_NAME = "GJKeybindManager";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJKeybindManager, cocos2d::CCKeyboardActionManager)

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x18b1d0
     * @note[short] Android: Rebinded
     */
    virtual  ~GJKeybindManager();

    /**
     * @note[short] MacOS (ARM): 0x552854
     * @note[short] MacOS (Intel): 0x613e60
     * @note[short] Windows: 0x388320
     * @note[short] iOS: 0x18b0b8
     * @note[short] Android
     */
    static GJKeybindManager* sharedState();

    /**
     * @note[short] MacOS (ARM): 0x5556b4
     * @note[short] MacOS (Intel): 0x617450
     * @note[short] Windows: 0x38a0e0
     * @note[short] Android
     */
    static char const* actionToString(int action);

    /**
     * @note[short] MacOS (ARM): 0x5555cc
     * @note[short] MacOS (Intel): 0x617360
     * @note[short] Windows: 0x389bc0
     * @note[short] Android
     */
    static std::string chordToString(int chord);

    /**
     * @note[short] MacOS (ARM): 0x553534
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static int encodeChord(cocos2d::enumKeyCodes key, bool ctrl, bool alt, bool shift);

    /**
     * @note[short] MacOS (ARM): 0x553b44
     * @note[short] MacOS (Intel): 0x615690
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static bool groupsConflict(int groupA, int groupB);

    /**
     * @note[short] Windows: 0x388cc0
     * @note[short] Android
     */
    static bool handleGlobalAudioAction(int action, bool down);

    /**
     * @note[short] MacOS (ARM): 0x555188
     * @note[short] MacOS (Intel): 0x616dc0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static bool isControllerChord(int chord);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static bool isExclusive(int action);

    /**
     * @note[short] MacOS (ARM): 0x556d2c
     * @note[short] MacOS (Intel): 0x618d10
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static bool isKnownAction(int action);

    /**
     * @note[short] MacOS (ARM): 0x553fd4
     * @note[short] MacOS (Intel): 0x615b50
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static bool isMovementAction(int action);

    /**
     * @note[short] MacOS (ARM): 0x553178
     * @note[short] MacOS (Intel): 0x614890
     * @note[short] Windows: 0x388550
     * @note[short] iOS: 0x18b900
     * @note[short] Android
     */
    virtual std::vector<int> actionsForKey(cocos2d::enumKeyCodes key, bool ctrl, bool alt, bool shift);

    /**
     * @note[short] MacOS (ARM): 0x557b88
     * @note[short] MacOS (Intel): 0x619cc0
     * @note[short] Windows: 0x388310
     * @note[short] iOS: 0x18e250
     * @note[short] Android
     */
    virtual bool handleGlobalAction(int action, bool down);

    /**
     * @note[short] MacOS (ARM): 0x5538c0
     * @note[short] MacOS (Intel): 0x615310
     * @note[short] Windows: 0x388920
     * @note[short] Android
     */
    std::vector<int> actionsForChord(int chord);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void applyImportBlob(std::string const& blob, int version);

    /**
     * @note[short] MacOS (ARM): 0x553fe8
     * @note[short] MacOS (Intel): 0x615b70
     * @note[short] Windows: 0x388f40
     * @note[short] Android
     */
    void applyMovementOverride(KeybindSource* keyboardSource, KeybindSource* controllerSource);

    /**
     * @note[short] Windows: 0x38bc80
     * @note[short] Android
     */
    void applyNewDefaults(int version);

    /**
     * @note[short] MacOS (ARM): 0x553e40
     * @note[short] MacOS (Intel): 0x6159e0
     * @note[short] Windows: 0x388ed0
     * @note[short] Android
     */
    void bindChord(int chord, int action);

    /**
     * @note[short] MacOS (Intel): 0x6180c0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void bindKey(cocos2d::enumKeyCodes key, bool ctrl, bool alt, bool shift, int action);

    /**
     * @note[short] Windows: 0x38b380
     * @note[short] Android
     */
    std::string buildBindsBlob();

    /**
     * @note[short] MacOS (ARM): 0x553658
     * @note[short] MacOS (Intel): 0x614fb0
     * @note[short] Windows: 0x388790
     * @note[short] Android
     */
    std::vector<int> chordsForAction(int action);

    /**
     * @note[short] Windows: 0x3896b0
     * @note[short] Android
     */
    void clearMovementOverride();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void dataLoaded(DS_Dictionary* dict);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void encodeDataTo(DS_Dictionary* dict);

    /**
     * @note[short] Windows: 0x38bfb0
     * @note[short] Android
     */
    int exportBindingsToFile();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void firstSetup();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    std::vector<int> globalChordsForAction(int action);

    /**
     * @note[short] MacOS (ARM): 0x553b28
     * @note[short] MacOS (Intel): 0x615670
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    int groupForAction(int action);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool init();

    /**
     * @note[short] Windows: 0x38ab70
     * @note[short] Android
     */
    void loadDefaults();

    /**
     * @note[short] MacOS (ARM): 0x5568d8
     * @note[short] MacOS (Intel): 0x6187d0
     * @note[short] Windows: 0x38b840
     * @note[short] Android
     */
    void parseBindsBlob(std::string const& blob, bool apply, int* outApplied, int* outUnknown);

    /**
     * @note[short] Windows: 0x38c590
     * @note[short] Android
     */
    int parseImportFile(std::string& outBlob, int& outApplied, int& outUnknown, int& outExtra);

    /**
     * @note[short] MacOS (ARM): 0x55519c
     * @note[short] MacOS (Intel): 0x616de0
     * @note[short] Windows: 0x389a30
     * @note[short] Android
     */
    void unbindChord(int chord, int action);
    std::unordered_map<int, std::set<int>> m_chordToActions;
    std::unordered_map<int, std::set<int>> m_actionToChords;
    std::map<int, std::set<int>> m_savedMovementBinds;
    std::map<int, std::set<int>> m_displacedBinds;
    bool m_movementOverrideActive;
};

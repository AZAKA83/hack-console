#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>
#include <Geode/mapping/atomic.hpp>

class GManager : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GManager";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GManager, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x5a1a0
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GManager();

    /**
     * @note[short] MacOS (ARM): 0x40c028
     * @note[short] MacOS (Intel): 0x4a4e80
     * @note[short] Windows: 0x77340
     * @note[short] iOS: 0x2e78ac
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x40c040
     * @note[short] MacOS (Intel): 0x4a4ea0
     * @note[short] Windows: 0x77360
     * @note[short] iOS: 0x2e78c4
     * @note[short] Android
     */
    virtual void setup();

    /**
     * @note[short] MacOS (ARM): 0x40c6d0
     * @note[short] MacOS (Intel): 0x4a5540
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2e7ec4
     * @note[short] Android
     */
    virtual void encodeDataTo(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x40c6d4
     * @note[short] MacOS (Intel): 0x4a5550
     * @note[short] Windows: 0x3f5c0
     * @note[short] iOS: 0x2e7ec8
     * @note[short] Android
     */
    virtual void didEncodeForSave();

    /**
     * @note[short] MacOS (ARM): 0x40c6d8
     * @note[short] MacOS (Intel): 0x4a5560
     * @note[short] Windows: 0x3f5c0
     * @note[short] iOS: 0x2e7ecc
     * @note[short] Android
     */
    virtual void saveFinished(bool success);

    /**
     * @note[short] MacOS (ARM): 0x40cd80
     * @note[short] MacOS (Intel): 0x4a5bf0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2e8300
     * @note[short] Android
     */
    virtual void dataLoaded(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x40cd84
     * @note[short] MacOS (Intel): 0x4a5c00
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2e8304
     * @note[short] Android
     */
    virtual void firstLoad();

    /**
     * @note[short] MacOS (ARM): 0x40c0dc
     * @note[short] MacOS (Intel): 0x4a4f70
     * @note[short] Windows: 0x77380
     * @note[short] Android
     */
    std::string getCompressedSaveString();

    /**
     * @note[short] MacOS (ARM): 0x40c058
     * @note[short] MacOS (Intel): 0x4a4ee0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    std::string getSaveString();

    /**
     * @note[short] MacOS (ARM): 0x40c050
     * @note[short] MacOS (Intel): 0x4a4ec0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void load();

    /**
     * @note[short] MacOS (ARM): 0x40c6dc
     * @note[short] MacOS (Intel): 0x4a5570
     * @note[short] Windows: 0x77850
     * @note[short] Android
     */
    void loadDataFromFile(std::string const& filename);

    /**
     * @note[short] MacOS (ARM): 0x40c208
     * @note[short] MacOS (Intel): 0x4a5090
     * @note[short] Windows: 0x77450
     * @note[short] Android
     */
    void loadFromCompressedString(std::string& str);

    /**
     * @note[short] MacOS (ARM): 0x40c15c
     * @note[short] MacOS (Intel): 0x4a4fe0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void loadFromString(std::string& str);

    /**
     * @note[short] MacOS (ARM): 0x40c2ac
     * @note[short] MacOS (Intel): 0x4a5110
     * @note[short] Windows: 0x77530
     * @note[short] Android
     */
    void save(bool p0);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void saveGMTo(std::string filename, bool async);

    /**
     * @note[short] MacOS (ARM): 0x40c998
     * @note[short] MacOS (Intel): 0x4a57e0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool tryLoadData(DS_Dictionary* dict, std::string const& filename);

    /**
     * @note[short] Windows: 0x777c0
     * @note[short] iOS: 0x2e7bcc
     * @note[short] Android
     */
    void waitForSave(double seconds);
    std::string m_fileName;
    bool m_setup;
    std::atomic_bool m_isSaving;
    bool m_quickSave;
};

#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/unordered_map.hpp>

class GJOptionsLayer : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "GJOptionsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJOptionsLayer, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x1800b0
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GJOptionsLayer();

    /**
     * @note[short] Windows: 0x39ab40
     * @note[short] iOS: 0x371788
     * @note[short] Android: Rebinded
     */
     ~GJOptionsLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static GJOptionsLayer* create(int background);

    /**
     * @note[short] MacOS (ARM): 0x22be24
     * @note[short] MacOS (Intel): 0x287050
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x371d34
     * @note[short] Android
     */
    virtual void setupOptions();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void didToggleGV(std::string variable);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void didToggle(int toggle);

    /**
     * @note[short] MacOS (ARM): 0x331580
     * @note[short] MacOS (Intel): 0x243a20
     * @note[short] Windows: 0x39b040
     * @note[short] Android
     */
    void addGVToggle(char const* title, char const* variable, char const* description);

    /**
     * @note[short] MacOS (ARM): 0x22c4f8
     * @note[short] MacOS (Intel): 0x287820
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void addToggle(char const* title, int id, bool initial, char const* description);

    /**
     * @note[short] Windows: 0x39b1a0
     * @note[short] Android
     */
    void addToggleInternal(char const* title, int id, bool initial, char const* description);

    /**
     * @note[short] Windows: 0x39b760
     * @note[short] Android
     */
    int countForPage(int page);

    /**
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    CCMenuItemToggler* getToggleButton(int id);

    /**
     * @note[short] Windows: 0x39bd20
     * @note[short] Android
     */
    void goToPage(int page);

    /**
     * @note[short] Windows: 0x39b850
     * @note[short] Android
     */
    void incrementCountForPage(int page);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    const char* infoKey(int index);

    /**
     * @note[short] Windows: 0x39ac30
     * @note[short] Android
     */
    bool init(int p0, float p1);

    /**
     * @note[short] Windows: 0x39bb30
     * @note[short] Android
     */
    cocos2d::CCLayer* layerForPage(int page);

    /**
     * @note[short] MacOS (Intel): 0x7096b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    const char* layerKey(int page);

    /**
     * @note[short] MacOS (ARM): 0x22c4fc
     * @note[short] MacOS (Intel): 0x287830
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    cocos2d::CCPoint nextPosition(int page);

    /**
     * @note[short] MacOS (ARM): 0x77b374
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    const char* objectKey(int page);

    /**
     * @note[short] Windows: 0x39b970
     * @note[short] Android
     */
    cocos2d::CCArray* objectsForPage(int page);

    /**
     * @note[short] MacOS (ARM): 0x22be00
     * @note[short] MacOS (Intel): 0x287020
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void offsetToNextPage();

    /**
     * @note[short] Windows: 0x39c280
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x39bd00
     * @note[short] Android
     */
    void onNextPage(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x39bd10
     * @note[short] Android
     */
    void onPrevPage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x22c7d4
     * @note[short] MacOS (Intel): 0x287b30
     * @note[short] Windows: 0x39c170
     * @note[short] Android
     */
    void onToggle(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x77b34c
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    const char* pageKey(int page);
    float m_gap;
    int m_page;
    int m_togglesPerPage;
    int m_toggleCount;
    int m_maxPage;
    float m_maxLabelScale;
    float m_maxLabelWidth;
    cocos2d::CCDictionary* m_values;
    cocos2d::CCDictionary* m_variables;
    CCMenuItemSpriteExtra* m_prevButton;
    CCMenuItemSpriteExtra* m_nextButton;
    float m_offset;
    std::unordered_map<int, CCMenuItemToggler*> m_toggleButtons;
};

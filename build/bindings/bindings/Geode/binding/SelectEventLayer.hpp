#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/map.hpp>
#include <Geode/mapping/set.hpp>

class SelectEventLayer : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SelectEventLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SelectEventLayer, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SelectEventLayer();

    /**
     * @note[short] MacOS (Intel): 0x5a5200
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x487fe0
     * @note[short] Android: Rebinded
     */
     ~SelectEventLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static SelectEventLayer* create(SetupEventLinkPopup* popup, std::set<int>& eventIDs);

    /**
     * @note[short] MacOS (ARM): 0x4f6000
     * @note[short] MacOS (Intel): 0x5a78f0
     * @note[short] Windows: 0xa6580
     * @note[short] iOS: 0x489b6c
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x4f5f48
     * @note[short] MacOS (Intel): 0x5a7820
     * @note[short] Windows: 0x5fd810
     * @note[short] iOS: 0x489b28
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4f5d14
     * @note[short] MacOS (Intel): 0x5a7610
     * @note[short] Windows: 0x5fd6c0
     * @note[short] iOS: 0x489a04
     * @note[short] Android
     */
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4f57bc
     * @note[short] MacOS (Intel): 0x5a7080
     * @note[short] Windows: 0x5fd8d0
     * @note[short] Android
     */
    void addToggle(int id, std::string info);

    /**
     * @note[short] MacOS (ARM): 0x4f4288
     * @note[short] MacOS (Intel): 0x5a55d0
     * @note[short] Windows: 0x5fc7e0
     * @note[short] Android
     */
    bool init(SetupEventLinkPopup* popup, std::set<int>& eventIDs);

    /**
     * @note[short] MacOS (ARM): 0x4f6024
     * @note[short] MacOS (Intel): 0x5a7930
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    cocos2d::CCPoint nextPosition();

    /**
     * @note[short] MacOS (ARM): 0x4f6130
     * @note[short] MacOS (Intel): 0x5a7a50
     * @note[short] Windows: 0x5fdd30
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);
    SetupEventLinkPopup* m_eventLinkPopup;
    bool m_eventsChanged;
    int m_unk3b4;
    int m_toggleCount;
    int m_maxPage;
    std::map<int, std::string> m_eventInfos;
    std::set<int> m_eventIDs;
};

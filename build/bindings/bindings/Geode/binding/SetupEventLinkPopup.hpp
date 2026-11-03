#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>
#include <Geode/mapping/set.hpp>

class SetupEventLinkPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupEventLinkPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupEventLinkPopup, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): 0x4f37c0
     * @note[short] MacOS (Intel): 0x5a4850
     * @note[short] Windows: 0x5fbae0
     * @note[short] iOS: 0x487840
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupEventLinkPopup();

    /**
     * @note[short] Windows: 0x5fbe70
     * @note[short] Android
     */
    static SetupEventLinkPopup* create(EventLinkTrigger* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x4f38e0
     * @note[short] MacOS (Intel): 0x5a49e0
     * @note[short] Android
     */
    bool init(EventLinkTrigger* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x4f3d98
     * @note[short] MacOS (Intel): 0x5a4f30
     * @note[short] Windows: 0x5fc540
     * @note[short] Android
     */
    void onSelectEvent(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4f3f88
     * @note[short] MacOS (Intel): 0x5a5160
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateEventIDs(std::set<int>& eventIDs);
};

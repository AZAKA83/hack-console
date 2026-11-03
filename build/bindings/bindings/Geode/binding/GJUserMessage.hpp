#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>

class GJUserMessage : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GJUserMessage";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJUserMessage, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GJUserMessage();

    /**
     * @note[short] Windows: 0x218d00
     * @note[short] iOS: 0xd5208
     * @note[short] Android: Rebinded
     */
    virtual  ~GJUserMessage();

    /**
     * @note[short] MacOS (ARM): 0x4dd9a0
     * @note[short] MacOS (Intel): 0x58d240
     * @note[short] Windows: 0x26f3c0
     * @note[short] Android
     */
    static GJUserMessage* create();

    /**
     * @note[short] MacOS (ARM): 0x4bb254
     * @note[short] MacOS (Intel): 0x568190
     * @note[short] Windows: 0x26e820
     * @note[short] Android
     */
    static GJUserMessage* create(cocos2d::CCDictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x4dda3c
     * @note[short] MacOS (Intel): 0x58d2e0
     * @note[short] Windows: 0x8b060
     * @note[short] iOS: 0xd52b0
     * @note[short] Android
     */
    virtual bool init();
    int m_messageID;
    int m_accountID;
    int m_userID;
    std::string m_title;
    std::string m_content;
    std::string m_username;
    std::string m_uploadDate;
    bool m_read;
    bool m_outgoing;
    bool m_toggled;
};

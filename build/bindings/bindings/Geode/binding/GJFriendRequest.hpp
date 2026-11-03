#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>

class GJFriendRequest : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GJFriendRequest";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJFriendRequest, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GJFriendRequest();

    /**
     * @note[short] Windows: 0x218ca0
     * @note[short] iOS: 0xd50f4
     * @note[short] Android: Rebinded
     */
    virtual  ~GJFriendRequest();

    /**
     * @note[short] MacOS (ARM): 0x4dd740
     * @note[short] MacOS (Intel): 0x58cfc0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static GJFriendRequest* create();

    /**
     * @note[short] MacOS (ARM): 0x4ba9a0
     * @note[short] MacOS (Intel): 0x567830
     * @note[short] Windows: 0x26e090
     * @note[short] Android
     */
    static GJFriendRequest* create(cocos2d::CCDictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x4dd7d8
     * @note[short] MacOS (Intel): 0x58d050
     * @note[short] Windows: 0x8b060
     * @note[short] iOS: 0xd5198
     * @note[short] Android
     */
    virtual bool init();
    int m_requestID;
    int m_accountID;
    int m_unusedToAccountID;
    std::string m_message;
    std::string m_uploadDate;
    bool m_isRead;
};

#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>

class GJHttpResult : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GJHttpResult";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJHttpResult, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GJHttpResult();

    /**
     * @note[short] Windows: 0x218ef0
     * @note[short] iOS: 0xd61a0
     * @note[short] Android: Rebinded
     */
    virtual  ~GJHttpResult();

    /**
     * @note[short] MacOS (ARM): 0x47bc68
     * @note[short] MacOS (Intel): 0x522440
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static GJHttpResult* create(bool success, std::string response, std::string tag, GJHttpType type);

    /**
     * @note[short] MacOS (ARM): 0x4debfc
     * @note[short] MacOS (Intel): 0x58e7c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init(bool success, std::string response, std::string tag, GJHttpType type);
    bool m_success;
    std::string m_response;
    std::string m_requestTag;
    GJHttpType m_httpType;
};

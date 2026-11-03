#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>

class CommunityCreditNode : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "CommunityCreditNode";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CommunityCreditNode, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x12cd90
     * @note[short] iOS: 0x235090
     * @note[short] Android: Rebinded
     */
    virtual  ~CommunityCreditNode();

    /**
     * @note[short] MacOS (ARM): 0x29ccc0
     * @note[short] MacOS (Intel): 0x309700
     * @note[short] Windows: 0x12ceb0
     * @note[short] Android
     */
    static CommunityCreditNode* create(int unlockType, int iconID, int unknown, std::string author);

    /**
     * @note[short] MacOS (ARM): 0x29cde0
     * @note[short] MacOS (Intel): 0x309820
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init(int unlockType, int iconID, int unknown, std::string author);
    int m_unlockType;
    int m_iconID;
    int m_unknown;
    std::string m_author;
};

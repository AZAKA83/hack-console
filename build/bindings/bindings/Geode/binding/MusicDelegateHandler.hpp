#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>

class MusicDelegateHandler : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "MusicDelegateHandler";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(MusicDelegateHandler, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     MusicDelegateHandler();

    /**
     * @note[short] Windows: 0x480500
     * @note[short] iOS: 0x1d1fac
     * @note[short] Android: Rebinded
     */
    virtual  ~MusicDelegateHandler();

    /**
     * @note[short] MacOS (ARM): 0x584d10
     * @note[short] MacOS (Intel): 0x649bb0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static MusicDelegateHandler* create(MusicDownloadDelegate* delegate);

    /**
     * @note[short] MacOS (ARM): 0x584da0
     * @note[short] MacOS (Intel): 0x649c30
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init(MusicDownloadDelegate* delegate);
    MusicDownloadDelegate* m_delegate;
};

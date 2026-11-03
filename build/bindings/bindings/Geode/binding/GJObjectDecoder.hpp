#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>
#include <Geode/mapping/ObjectDecoderDelegate.hpp>

class GJObjectDecoder : public cocos2d::CCNode, public ObjectDecoderDelegate {
public:
    static constexpr auto CLASS_NAME = "GJObjectDecoder";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJObjectDecoder, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x80dc0
     * @note[short] Android: Rebinded
     */
    virtual  ~GJObjectDecoder();

    /**
     * @note[short] MacOS (ARM): 0x703d34
     * @note[short] MacOS (Intel): 0x803730
     * @note[short] Windows: 0x391c80
     * @note[short] iOS: 0x2b3544
     * @note[short] Android
     */
    static GJObjectDecoder* sharedDecoder();

    /**
     * @note[short] MacOS (ARM): 0x703ddc
     * @note[short] MacOS (Intel): 0x8037b0
     * @note[short] Windows: 0x8b060
     * @note[short] iOS: 0x2b35e0
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x703de0
     * @note[short] MacOS (Intel): 0x8037c0
     * @note[short] Windows: 0x391d20
     * @note[short] iOS: 0x2b35e4
     * @note[short] Android
     */
    virtual cocos2d::CCObject* getDecodedObject(int type, DS_Dictionary* dict);
};

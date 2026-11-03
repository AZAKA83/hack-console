#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/GJDropDownLayer.hpp>

class URLViewLayer : public GJDropDownLayer {
public:
    static constexpr auto CLASS_NAME = "URLViewLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(URLViewLayer, GJDropDownLayer)

    /**
     * @note[short] Windows: 0x399df0
     * @note[short] iOS: 0x37fda4
     * @note[short] Android: Rebinded
     */
    virtual  ~URLViewLayer();

    /**
     * @note[short] MacOS (ARM): 0x246bb0
     * @note[short] MacOS (Intel): 0x2a4010
     * @note[short] Windows: 0x3aaa10
     * @note[short] Android
     */
    static URLViewLayer* create(std::string title, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x246d60
     * @note[short] MacOS (Intel): 0x2a4200
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool init(std::string title, cocos2d::CCArray* objects);
    cocos2d::CCArray* m_urlObjects;
};

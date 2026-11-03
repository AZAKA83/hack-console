#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/GJLinkObject.hpp>
#include <Geode/mapping/CCObject.hpp>
#include <Geode/mapping/vector.hpp>

class MusicArtistObject : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "MusicArtistObject";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(MusicArtistObject, cocos2d::CCObject)

    /**
     * @note[short] Windows: 0x480e90
     * @note[short] iOS: 0x1e4c78
     * @note[short] Android: Rebinded
     */
    virtual  ~MusicArtistObject();

    /**
     * @note[short] MacOS (Intel): 0x3a7fd0
     * @note[short] Android
     */
    static MusicArtistObject* create(int id, std::string name);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init(int id, std::string name);
    int m_artistID;
    std::string m_artistName;
    std::vector<GJLinkObject> m_artistLinks;
};

#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SmartPrefabResult.hpp>
#include <Geode/mapping/CCObject.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/map.hpp>
#include <Geode/mapping/vector.hpp>

class GJSmartTemplate : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "GJSmartTemplate";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJSmartTemplate, cocos2d::CCObject)

    /**
     * @note[short] Windows: 0x3b69f0
     * @note[short] iOS: 0x4318
     * @note[short] Android: Rebinded
     */
    virtual  ~GJSmartTemplate();

    /**
     * @note[short] MacOS (ARM): 0x38bb18
     * @note[short] MacOS (Intel): 0x413600
     * @note[short] Windows: 0x3b9c20
     * @note[short] Android
     */
    static void applyTransformationsForType(SmartBlockType type, cocos2d::CCSprite* sprite);

    /**
     * @note[short] MacOS (ARM): 0x387a7c
     * @note[short] MacOS (Intel): 0x40ebf0
     * @note[short] Windows: 0x3b6df0
     * @note[short] Android
     */
    static GJSmartTemplate* create();

    /**
     * @note[short] MacOS (ARM): 0x38cf20
     * @note[short] MacOS (Intel): 0x414c80
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static GJSmartTemplate* createWithCoder(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x38bd64
     * @note[short] MacOS (Intel): 0x413870
     * @note[short] Windows: 0x3ba550
     * @note[short] Android
     */
    static SmartBlockType flipBlockType(SmartBlockType type, bool flipX, bool flipY);

    /**
     * @note[short] MacOS (ARM): 0x38bd1c
     * @note[short] MacOS (Intel): 0x413830
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static SmartBlockType flipBlockTypeX(SmartBlockType type);

    /**
     * @note[short] MacOS (ARM): 0x38bd40
     * @note[short] MacOS (Intel): 0x413850
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static SmartBlockType flipBlockTypeY(SmartBlockType type);

    /**
     * @note[short] MacOS (ARM): 0x38aca0
     * @note[short] MacOS (Intel): 0x412830
     * @note[short] Windows: 0x3bab30
     * @note[short] Android
     */
    static std::string flipKey(std::string key, bool flipX, bool flipY);

    /**
     * @note[short] MacOS (ARM): 0x38c000
     * @note[short] MacOS (Intel): 0x413b50
     * @note[short] Android
     */
    static cocos2d::CCDictionary* generateRemapDict();

    /**
     * @note[short] MacOS (ARM): 0x388738
     * @note[short] MacOS (Intel): 0x40faf0
     * @note[short] Windows: 0x3b7540
     * @note[short] Android
     */
    static std::string getSimplifiedKey(std::string key);

    /**
     * @note[short] MacOS (ARM): 0x3892d8
     * @note[short] MacOS (Intel): 0x4105e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static SmartBlockType getSimplifiedType(SmartBlockType type, bool& changed);

    /**
     * @note[short] MacOS (ARM): 0x3890a4
     * @note[short] MacOS (Intel): 0x410420
     * @note[short] Windows: 0x3b7ce0
     * @note[short] Android
     */
    static std::string getVerySimplifiedKey(std::string key);

    /**
     * @note[short] MacOS (ARM): 0x389308
     * @note[short] MacOS (Intel): 0x410610
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static std::string keyFromNeighbors(SmartBlockType type, SmartBlockType left, SmartBlockType right, SmartBlockType top, SmartBlockType bottom, SmartBlockType topLeft, SmartBlockType topRight, SmartBlockType bottomLeft, SmartBlockType bottomRight);

    /**
     * @note[short] MacOS (ARM): 0x38b090
     * @note[short] MacOS (Intel): 0x412bd0
     * @note[short] Windows: 0x3b9ff0
     * @note[short] Android
     */
    static std::string keyFromNeighbors(cocos2d::CCPoint position, SmartGameObject* object, SmartGameObject* left, SmartGameObject* right, SmartGameObject* top, SmartGameObject* bottom, SmartGameObject* topLeft, SmartGameObject* topRight, SmartGameObject* bottomLeft, SmartGameObject* bottomRight);

    /**
     * @note[short] MacOS (ARM): 0x38bdc8
     * @note[short] MacOS (Intel): 0x4138e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static std::string keyFromNeighborsOld(bool left, bool right, bool top, bool bottom, bool topLeft, bool topRight, bool bottomLeft, bool bottomRight);

    /**
     * @note[short] MacOS (ARM): 0x38b498
     * @note[short] MacOS (Intel): 0x413060
     * @note[short] Windows: 0x3b9a30
     * @note[short] Android
     */
    static cocos2d::CCPoint offsetForDir(GJSmartDirection direction, int key);

    /**
     * @note[short] MacOS (ARM): 0x38b624
     * @note[short] MacOS (Intel): 0x413150
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static cocos2d::CCPoint offsetForObject(SmartGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x38b9f0
     * @note[short] MacOS (Intel): 0x413470
     * @note[short] Windows: 0x3b9b30
     * @note[short] Android
     */
    static cocos2d::CCPoint offsetForType(SmartBlockType type);

    /**
     * @note[short] MacOS (ARM): 0x38bcc8
     * @note[short] MacOS (Intel): 0x413780
     * @note[short] Windows: 0x3ba3e0
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static SmartBlockType rotateBlockType(SmartBlockType type, int degrees);

    /**
     * @note[short] MacOS (ARM): 0x38bc9c
     * @note[short] MacOS (Intel): 0x413750
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static SmartBlockType rotateBlockType90(SmartBlockType type);

    /**
     * @note[short] MacOS (ARM): 0x389f3c
     * @note[short] MacOS (Intel): 0x411440
     * @note[short] Windows: 0x3ba7d0
     * @note[short] Android
     */
    static std::string rotateKey(std::string key, int degrees);

    /**
     * @note[short] MacOS (ARM): 0x38ba58
     * @note[short] MacOS (Intel): 0x413540
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static bool shouldDiscardObject(SmartBlockType type, GJSmartDirection direction);

    /**
     * @note[short] MacOS (ARM): 0x38b690
     * @note[short] MacOS (Intel): 0x4131b0
     * @note[short] Windows: 0x3b9d60
     * @note[short] Android
     */
    static SmartBlockType smartObjectToType(SmartGameObject* object, cocos2d::CCPoint point);

    /**
     * @note[short] MacOS (ARM): 0x38bc78
     * @note[short] MacOS (Intel): 0x413730
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static int smartTypeToObjectKey(SmartBlockType type);

    /**
     * @note[short] MacOS (ARM): 0x38d2bc
     * @note[short] MacOS (Intel): 0x415050
     * @note[short] Windows: 0x3bbd30
     * @note[short] iOS: 0x8618
     * @note[short] Android
     */
    virtual void encodeWithCoder(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x38cf18
     * @note[short] MacOS (Intel): 0x414c70
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x83b0
     * @note[short] Android
     */
    virtual bool canEncode();

    /**
     * @note[short] MacOS (ARM): 0x38cfb8
     * @note[short] MacOS (Intel): 0x414d30
     * @note[short] Windows: 0x3bba60
     * @note[short] Android
     */
    void dataLoaded(DS_Dictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x388f54
     * @note[short] MacOS (Intel): 0x4102e0
     * @note[short] Windows: 0x3b7df0
     * @note[short] Android
     */
    std::string getNoCornerKey(std::string key);

    /**
     * @note[short] MacOS (ARM): 0x38a340
     * @note[short] MacOS (Intel): 0x411c90
     * @note[short] Windows: 0x3b9000
     * @note[short] Android
     */
    GJSmartPrefab* getPrefab(std::string key, bool flipX, bool flipY);

    /**
     * @note[short] MacOS (ARM): 0x38afac
     * @note[short] MacOS (Intel): 0x412b10
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    GJSmartPrefab* getPrefab(cocos2d::CCPoint position, SmartGameObject* object, SmartGameObject* left, SmartGameObject* right, SmartGameObject* top, SmartGameObject* bottom, SmartGameObject* topLeft, SmartGameObject* topRight, SmartGameObject* bottomLeft, SmartGameObject* bottomRight);

    /**
     * @note[short] MacOS (ARM): 0x38afa4
     * @note[short] MacOS (Intel): 0x412b00
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    cocos2d::CCArray* getPrefabs(std::string key);

    /**
     * @note[short] MacOS (ARM): 0x38b35c
     * @note[short] MacOS (Intel): 0x412f60
     * @note[short] Windows: 0x3b9970
     * @note[short] Android
     */
    GJSmartPrefab* getPrefabWithID(std::string key, int id);

    /**
     * @note[short] MacOS (ARM): 0x389d68
     * @note[short] MacOS (Intel): 0x4112a0
     * @note[short] Windows: 0x3b8e90
     * @note[short] Android
     */
    GJSmartPrefab* getRandomPrefab(std::string key);

    /**
     * @note[short] MacOS (ARM): 0x38c97c
     * @note[short] MacOS (Intel): 0x414600
     * @note[short] Windows: 0x3bb430
     * @note[short] Android
     */
    void getTemplateState(std::vector<SmartPrefabResult>& results);

    /**
     * @note[short] MacOS (ARM): 0x38aeb0
     * @note[short] MacOS (Intel): 0x412a40
     * @note[short] Windows: 0x3b8dd0
     * @note[short] Android
     */
    int getTotalChanceForPrefab(std::string key);

    /**
     * @note[short] MacOS (ARM): 0x387b04
     * @note[short] MacOS (Intel): 0x40ec90
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool init();

    /**
     * @note[short] MacOS (ARM): 0x38c818
     * @note[short] MacOS (Intel): 0x4144c0
     * @note[short] Windows: 0x3bb280
     * @note[short] Android
     */
    bool isUnrequired(std::string key);

    /**
     * @note[short] MacOS (ARM): 0x38c434
     * @note[short] MacOS (Intel): 0x413fe0
     * @note[short] Windows: 0x3bae60
     * @note[short] Android
     */
    std::string logTemplateStatus(bool unused);

    /**
     * @note[short] MacOS (ARM): 0x38b3fc
     * @note[short] MacOS (Intel): 0x412fd0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void removePrefab(std::string prefabKey, int prefabID);

    /**
     * @note[short] MacOS (ARM): 0x3893ec
     * @note[short] MacOS (Intel): 0x4106d0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void resetScannedPrefabs();

    /**
     * @note[short] MacOS (ARM): 0x387b9c
     * @note[short] MacOS (Intel): 0x40ed40
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void savePrefab(std::string key, std::string data);

    /**
     * @note[short] MacOS (ARM): 0x387e04
     * @note[short] MacOS (Intel): 0x40efb0
     * @note[short] Windows: 0x3b6f70
     * @note[short] Android
     */
    void saveRemap(std::string key);

    /**
     * @note[short] MacOS (ARM): 0x388d88
     * @note[short] MacOS (Intel): 0x4100f0
     * @note[short] Windows: 0x3b7350
     * @note[short] Android
     */
    void saveRemapToDict(std::string key, std::string remap, cocos2d::CCDictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x38941c
     * @note[short] MacOS (Intel): 0x410700
     * @note[short] Windows: 0x3b7f80
     * @note[short] Android
     */
    SmartPrefabResult scanForPrefab(std::string key);
    cocos2d::CCDictionary* m_prefabArrays;
    cocos2d::CCDictionary* m_remapDict1;
    cocos2d::CCDictionary* m_remapDict2;
    cocos2d::CCDictionary* m_remapDict3;
    cocos2d::CCDictionary* m_remapDict4;
    cocos2d::CCDictionary* m_remapDict5;
    cocos2d::CCDictionary* m_remapDict6;
    std::map<std::string, SmartPrefabResult> m_prefabResults;
    bool m_allowFlipX;
    bool m_allowFlipY;
    bool m_allowRotation;
    bool m_ignoreCorners;
    std::string m_templateName;
    std::string m_unk0a8;
    int m_nameIndex;
    int m_prefabIndex;
};

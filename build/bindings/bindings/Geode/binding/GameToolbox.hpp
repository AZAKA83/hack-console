#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/ParticleStruct.hpp>
#include <Geode/mapping/CCObject.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/ccTypes.hpp>
#include <Geode/mapping/map.hpp>
#include <Geode/mapping/vector.hpp>

class GameToolbox {
public:
    static constexpr auto CLASS_NAME = "GameToolbox";

    /**
     * @note[short] MacOS (ARM): 0x44a1a0
     * @note[short] MacOS (Intel): 0x4ebf90
     * @note[short] Windows: 0x6f020
     * @note[short] iOS: 0x49d40
     * @note[short] Android
     */
    static void addBackButton(cocos2d::CCLayer* parent, cocos2d::CCMenuItem* menuItem);

    /**
     * @note[short] Android
     */
    static TodoReturn addProgressBarFill(cocos2d::CCSprite* p0, int p1, cocos2d::ccColor3B p2, int p3);

    /**
     * @note[short] MacOS (ARM): 0x44a288
     * @note[short] MacOS (Intel): 0x4ec060
     * @note[short] Windows: 0x6f100
     * @note[short] Android
     */
    static void addRThumbScrollButton(cocos2d::CCLayer* parent);

    /**
     * @note[short] MacOS (ARM): 0x447688
     * @note[short] MacOS (Intel): 0x4e9150
     * @note[short] Windows: 0x6c740
     * @note[short] Android
     */
    static void alignItemsHorisontally(cocos2d::CCArray* items, float gap, cocos2d::CCPoint position, bool skipSize);

    /**
     * @note[short] MacOS (ARM): 0x447940
     * @note[short] MacOS (Intel): 0x4e9480
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static void alignItemsVertically(cocos2d::CCArray* items, float gap, cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (ARM): 0x451474
     * @note[short] MacOS (Intel): 0x4f40a0
     * @note[short] Windows: 0x73180
     * @note[short] Android
     */
    static float bounceTime(float time);

    /**
     * @note[short] MacOS (ARM): 0x44a8f8
     * @note[short] MacOS (Intel): 0x4ec6e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static cocos2d::ccColor3B colorToSepia(cocos2d::ccColor3B color, float factor);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static void contentScaleClipRect(cocos2d::CCRect& rect);

    /**
     * @note[short] MacOS (ARM): 0x44bfdc
     * @note[short] MacOS (Intel): 0x4ede10
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static std::string createHashString(std::string const& str, int length);

    /**
     * @note[short] iOS: 0x4bb3c
     * @note[short] Android
     */
    static TodoReturn createInputNode(float p0, float p1, char const* p2, int p3);

    /**
     * @note[short] Windows: 0x6dc10
     * @note[short] Android
     */
    static TodoReturn createNotifyToggles(cocos2d::CCNode* p0, cocos2d::CCMenu* p1, cocos2d::CCObject* p2, cocos2d::SEL_MenuHandler p3, cocos2d::SEL_MenuHandler p4, cocos2d::CCPoint p5, float p6, float p7);

    /**
     * @note[short] Android
     */
    static TodoReturn createOnOffSprite(char const* p0, bool p1);

    /**
     * @note[short] Android
     */
    static TodoReturn createOnOffSprite(char const* p0, bool p1, cocos2d::ccColor3B p2, unsigned char p3);

    /**
     * @note[short] Android
     */
    static TodoReturn createProgressBar(float p0, int p1, cocos2d::ccColor3B p2);

    /**
     * @note[short] MacOS (ARM): 0x4496b4
     * @note[short] MacOS (Intel): 0x4eb470
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static CCMenuItemToggler* createToggleButton(std::string label, cocos2d::SEL_MenuHandler selector, bool state, cocos2d::CCMenu* menu, cocos2d::CCPoint position, cocos2d::CCNode* parent, cocos2d::CCNode* labelParent, cocos2d::CCArray* container);

    /**
     * @note[short] MacOS (ARM): 0x4497f0
     * @note[short] MacOS (Intel): 0x4eb5a0
     * @note[short] Windows: 0x6e5b0
     * @note[short] Android
     */
    static CCMenuItemToggler* createToggleButton(std::string label, cocos2d::SEL_MenuHandler selector, bool state, cocos2d::CCMenu* menu, cocos2d::CCPoint position, cocos2d::CCNode* parent, cocos2d::CCNode* labelParent, float buttonScale, float maxLabelScale, float maxLabelWidth, cocos2d::CCPoint labelOffset, char const* font, bool labelTop, int labelTag, cocos2d::CCArray* container);

    /**
     * @note[short] Android
     */
    static TodoReturn directoryExists(std::string const& p0);

    /**
     * @note[short] MacOS (ARM): 0x447ad0
     * @note[short] MacOS (Intel): 0x4e9640
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static bool doWeHaveInternet();

    /**
     * @note[short] MacOS (ARM): 0x451160
     * @note[short] MacOS (Intel): 0x4f3e00
     * @note[short] Windows: 0x72c70
     * @note[short] Android
     */
    static std::string easeToText(int easingType);

    /**
     * @note[short] iOS: 0x483b0
     * @note[short] Android
     */
    static TodoReturn extractServerPopup(std::string& p0);

    /**
     * @note[short] MacOS (ARM): 0x44d2b8
     * @note[short] MacOS (Intel): 0x4ef210
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static uint64_t fast_rand();

    /**
     * @note[short] MacOS (ARM): 0x44d2e0
     * @note[short] MacOS (Intel): 0x4ef240
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static float fast_rand_0_1();

    /**
     * @note[short] MacOS (ARM): 0x44d31c
     * @note[short] MacOS (Intel): 0x4ef280
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static float fast_rand_minus1_1();

    /**
     * @note[short] MacOS (ARM): 0x44d2a0
     * @note[short] MacOS (Intel): 0x4ef1f0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static void fast_srand(uint64_t seed);

    /**
     * @note[short] Android
     */
    static TodoReturn gameVersionToString(int p0);

    /**
     * @note[short] Android
     */
    static std::string gen_random(int length);

    /**
     * @note[short] MacOS (ARM): 0x4471fc
     * @note[short] MacOS (Intel): 0x4e8d00
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static cocos2d::CCSequence* getDropActionWDelay(float delay, float duration, float scale, cocos2d::CCNode* target, cocos2d::SEL_CallFunc selector);

    /**
     * @note[short] MacOS (ARM): 0x4472b8
     * @note[short] MacOS (Intel): 0x4e8dc0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static cocos2d::CCSequence* getDropActionWEnd(float delay, float duration, float scale, cocos2d::CCAction* action, float actionDelay);

    /**
     * @note[short] MacOS (ARM): 0x44cfd4
     * @note[short] MacOS (Intel): 0x4eeec0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static cocos2d::CCActionInterval* getEasedAction(cocos2d::CCActionInterval* action, int easingType, float easingRate);

    /**
     * @note[short] MacOS (ARM): 0x45155c
     * @note[short] MacOS (Intel): 0x4f4160
     * @note[short] Windows: 0x73230
     * @note[short] iOS: 0x4e048
     * @note[short] Android
     */
    static float getEasedValue(float value, int easingType, float easingRate);

    /**
     * @note[short] MacOS (ARM): 0x44d2ac
     * @note[short] MacOS (Intel): 0x4ef200
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static uint64_t getfast_srand();

    /**
     * @note[short] MacOS (ARM): 0x44d054
     * @note[short] MacOS (Intel): 0x4eefc0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static int getInvertedEasing(int easingType);

    /**
     * @note[short] MacOS (ARM): 0x449c8c
     * @note[short] MacOS (Intel): 0x4eba30
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static cocos2d::CCDictionary* getLargestMergedIntDicts(cocos2d::CCDictionary* dict1, cocos2d::CCDictionary* dict2);

    /**
     * @note[short] MacOS (ARM): 0x44aa84
     * @note[short] MacOS (Intel): 0x4ec870
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static cocos2d::ccHSVValue getMultipliedHSV(cocos2d::ccHSVValue const& value, float factor);

    /**
     * @note[short] MacOS (ARM): 0x449a94
     * @note[short] MacOS (Intel): 0x4eb800
     * @note[short] Windows: 0x6e8b0
     * @note[short] Android
     */
    static cocos2d::CCPoint getRelativeOffset(GameObject* object, cocos2d::CCPoint offset);

    /**
     * @note[short] MacOS (ARM): 0x447d88
     * @note[short] MacOS (Intel): 0x4e98f0
     * @note[short] Windows: 0x6cb00
     * @note[short] iOS: 0x48138
     * @note[short] Android
     */
    static std::string getResponse(cocos2d::extension::CCHttpResponse* response);

    /**
     * @note[short] Android
     */
    static TodoReturn getSaveDirectory();

    /**
     * @note[short] MacOS (ARM): 0x44c0ac
     * @note[short] MacOS (Intel): 0x4eded0
     * @note[short] Windows: 0x6ff30
     * @note[short] Android
     */
    static std::string getTimeString(int seconds, bool noSeconds);

    /**
     * @note[short] Android
     */
    static TodoReturn highestChildZ(cocos2d::CCNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x44aaf0
     * @note[short] MacOS (Intel): 0x4ec910
     * @note[short] Windows: 0x6f700
     * @note[short] Android
     */
    static cocos2d::ccHSVValue hsvFromString(std::string const& str, char const* delim);

    /**
     * @note[short] MacOS (Intel): 0x4f53d0
     * @note[short] Windows: 0x73ff0
     * @note[short] Android
     */
    static TodoReturn intToShortString(int p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x451c88
     * @note[short] MacOS (Intel): 0x4f4870
     * @note[short] Windows: 0x73760
     * @note[short] iOS: 0x4e45c
     * @note[short] Android
     */
    static std::string intToString(int value);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static bool isIOS();

    /**
     * @note[short] MacOS (ARM): 0x44d080
     * @note[short] MacOS (Intel): 0x4eeff0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static bool isRateEasing(int easingType);

    /**
     * @note[short] Android
     */
    static TodoReturn keepLastPathSegments(std::string const& p0, char const* p1, int p2);

    /**
     * @note[short] Android
     */
    static TodoReturn lastResponseHadServerPopup();

    /**
     * @note[short] Android
     */
    static TodoReturn lastServerPopupTitle();

    /**
     * @note[short] Android
     */
    static TodoReturn listFiles(std::string const& p0, std::vector<std::string>& p1, std::string const& p2, std::vector<long>* p3);

    /**
     * @note[short] Android
     */
    static TodoReturn lowercaseASCII(std::string const& p0);

    /**
     * @note[short] MacOS (Intel): 0x4eba80
     * @note[short] Windows: 0x6eac0
     * @note[short] Android
     */
    static void mergeDictsSaveLargestInt(cocos2d::CCDictionary* toDict, cocos2d::CCDictionary* fromDict);

    /**
     * @note[short] MacOS (Intel): 0x4ebd10
     * @note[short] Windows: 0x6ed90
     * @note[short] Android
     */
    static void mergeDictsSkipConflict(cocos2d::CCDictionary* toDict, cocos2d::CCDictionary* fromDict);

    /**
     * @note[short] MacOS (ARM): 0x453198
     * @note[short] MacOS (Intel): 0x4f5e60
     * @note[short] Windows: 0x74770
     * @note[short] Android
     */
    static std::string msToTimeString(int milliseconds, int formattingMode);

    /**
     * @note[short] MacOS (ARM): 0x44a824
     * @note[short] MacOS (Intel): 0x4ec610
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static cocos2d::ccColor3B multipliedColorValue(cocos2d::ccColor3B minColor, cocos2d::ccColor3B maxColor, float factor);

    /**
     * @note[short] MacOS (ARM): 0x447d64
     * @note[short] MacOS (Intel): 0x4e98d0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static void openAppPage();

    /**
     * @note[short] MacOS (ARM): 0x447c6c
     * @note[short] MacOS (Intel): 0x4e97d0
     * @note[short] Android
     */
    static void openRateURL(std::string str1, std::string str2);

    /**
     * @note[short] MacOS (ARM): 0x450bb8
     * @note[short] MacOS (Intel): 0x4f37e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x4d9d8
     * @note[short] Android
     */
    static cocos2d::CCParticleSystemQuad* particleFromString(std::string const& str, cocos2d::CCParticleSystemQuad* system, bool dontUpdate);

    /**
     * @note[short] MacOS (ARM): 0x3fdd0c
     * @note[short] MacOS (Intel): 0x4f38f0
     * @note[short] Windows: 0x72700
     * @note[short] Android
     */
    static cocos2d::CCParticleSystemQuad* particleFromStruct(cocos2d::ParticleStruct const& particleStruct, cocos2d::CCParticleSystemQuad* system, bool dontUpdate);

    /**
     * @note[short] MacOS (ARM): 0x44fd80
     * @note[short] MacOS (Intel): 0x4f2890
     * @note[short] Windows: 0x71a40
     * @note[short] Android
     */
    static void particleStringToStruct(std::string const& str, cocos2d::ParticleStruct& particleStruct);

    /**
     * @note[short] Android
     */
    static TodoReturn pathSegmentCount(std::string const& p0, char const* p1);

    /**
     * @note[short] MacOS (ARM): 0x4532ec
     * @note[short] MacOS (Intel): 0x4f5fb0
     * @note[short] Windows: 0x748e0
     * @note[short] Android
     */
    static std::string pointsToString(int points);

    /**
     * @note[short] MacOS (ARM): 0x448fe8
     * @note[short] MacOS (Intel): 0x4ead10
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static void postClipVisit();

    /**
     * @note[short] MacOS (ARM): 0x448edc
     * @note[short] MacOS (Intel): 0x4eabf0
     * @note[short] Windows: 0x6db10
     * @note[short] Android
     */
    static void preVisitWithClippingRect(cocos2d::CCNode* node, cocos2d::CCRect rect);

    /**
     * @note[short] MacOS (ARM): 0x448fb0
     * @note[short] MacOS (Intel): 0x4eacd0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static void preVisitWithClipRect(cocos2d::CCRect rect);

    /**
     * @note[short] MacOS (ARM): 0x44d364
     * @note[short] MacOS (Intel): 0x4ef2c0
     * @note[short] Windows: 0x70ad0
     * @note[short] Android
     */
    static std::string saveParticleToString(cocos2d::CCParticleSystemQuad* system);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static bool saveStringToFile(std::string const& path, std::string const& content, bool absolute, bool atomic);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x4827c
     * @note[short] Android
     */
    static TodoReturn serverPopupWillSwitchToScene(cocos2d::CCScene* p0);

    /**
     * @note[short] Android
     */
    static void setOnOffSprite(cocos2d::CCNode* p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x453654
     * @note[short] MacOS (Intel): 0x4f6390
     * @note[short] Windows: 0x75450
     * @note[short] Android
     */
    static bool showFolderDialog(char const* p0, std::string& p1);

    /**
     * @note[short] MacOS (ARM): 0x4535c4
     * @note[short] MacOS (Intel): 0x4f6300
     * @note[short] Android
     */
    static bool showOpenFileDialog(char const* p0, char const* p1, std::string const& p2, std::string& p3);

    /**
     * @note[short] MacOS (ARM): 0x4535ec
     * @note[short] MacOS (Intel): 0x4f6330
     * @note[short] Android
     */
    static bool showOpenFileDialogMulti(char const* p0, char const* p1, std::vector<std::string>& p2);

    /**
     * @note[short] MacOS (ARM): 0x4535a0
     * @note[short] MacOS (Intel): 0x4f62d0
     * @note[short] Android
     */
    static bool showSaveFileDialog(char const* p0, char const* p1, char const* p2, std::string const& p3, std::string& p4);

    /**
     * @note[short] Android
     */
    static TodoReturn singleLineSnippet(std::string const& p0, unsigned long p1);

    /**
     * @note[short] Android
     */
    static TodoReturn stringEndsWith(std::string const& p0, std::string const& p1);

    /**
     * @note[short] MacOS (ARM): 0x44b088
     * @note[short] MacOS (Intel): 0x4ece30
     * @note[short] Windows: 0x6f940
     * @note[short] Android
     */
    static std::string stringFromHSV(cocos2d::ccHSVValue value, char const* separator);

    /**
     * @note[short] MacOS (ARM): 0x44b914
     * @note[short] MacOS (Intel): 0x4ed7a0
     * @note[short] Windows: 0x6fd10
     * @note[short] Android
     */
    static cocos2d::CCDictionary* stringSetupToDict(std::string const& str, char const* separator);

    /**
     * @note[short] MacOS (ARM): 0x44b574
     * @note[short] MacOS (Intel): 0x4ed450
     * @note[short] Windows: 0x6fac0
     * @note[short] Android
     */
    static void stringSetupToMap(std::string const& str, char const* separator, std::map<std::string, std::string>& setup);

    /**
     * @note[short] Android
     */
    static TodoReturn stripNonBreakingSpaces(std::string& p0);

    /**
     * @note[short] MacOS (ARM): 0x44bf44
     * @note[short] MacOS (Intel): 0x4edd70
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static cocos2d::ccColor3B strongColor(cocos2d::ccColor3B color);

    /**
     * @note[short] Windows: 0x744c0
     * @note[short] Android
     */
    static TodoReturn timestampToDateString(long p0);

    /**
     * @note[short] Android
     */
    static TodoReturn timestampToDayString(long p0);

    /**
     * @note[short] MacOS (ARM): 0x452af8
     * @note[short] MacOS (Intel): 0x4f5850
     * @note[short] Windows: 0x74180
     * @note[short] Android
     */
    static TodoReturn timestampToHumanReadable(long p0);

    /**
     * @note[short] Android
     */
    static TodoReturn touchUnitsForMM(float p0);

    /**
     * @note[short] MacOS (ARM): 0x44a668
     * @note[short] MacOS (Intel): 0x4ec410
     * @note[short] Windows: 0x6f4e0
     * @note[short] Android
     */
    static cocos2d::ccColor3B transformColor(cocos2d::ccColor3B const& color, cocos2d::ccHSVValue hsv);

    /**
     * @note[short] MacOS (ARM): 0x44a64c
     * @note[short] MacOS (Intel): 0x4ec3e0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static cocos2d::ccColor3B transformColor(cocos2d::ccColor3B const& color, float h, float s, float v);

    /**
     * @note[short] Android
     */
    static TodoReturn worldClipRect(cocos2d::CCNode* p0, cocos2d::CCRect p1);
};

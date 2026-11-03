
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/GameToolbox.hpp>

using namespace geode;
using namespace geode::modifier;

#if !defined(GEODE_WRAP_FUNCTION)
#define GEODE_WRAP_FUNCTION
template <class F>
static auto wrapFunction(uintptr_t address, tulip::hook::TulipConvention convention) {
	auto wrapped = geode::hook::createWrapper(reinterpret_cast<void*>(address), tulip::hook::WrapperMetadata{
		.m_convention = geode::hook::createConvention(convention),
		.m_abstract = tulip::hook::AbstractFunction::from(F(nullptr)),
	});
	if (wrapped.isErr()) {
		throw std::runtime_error(wrapped.unwrapErr());
	}
	return wrapped.unwrap();
}
#endif

auto GameToolbox::addBackButton(cocos2d::CCLayer* parent, cocos2d::CCMenuItem* menuItem) -> decltype(addBackButton(parent, menuItem)) {
	using FunctionType = decltype(addBackButton(parent, menuItem))(*)(cocos2d::CCLayer*, cocos2d::CCMenuItem*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6f020, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(parent, menuItem);
}

auto GameToolbox::addRThumbScrollButton(cocos2d::CCLayer* parent) -> decltype(addRThumbScrollButton(parent)) {
	using FunctionType = decltype(addRThumbScrollButton(parent))(*)(cocos2d::CCLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6f100, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(parent);
}

auto GameToolbox::alignItemsHorisontally(cocos2d::CCArray* items, float gap, cocos2d::CCPoint position, bool skipSize) -> decltype(alignItemsHorisontally(items, gap, position, skipSize)) {
	using FunctionType = decltype(alignItemsHorisontally(items, gap, position, skipSize))(*)(cocos2d::CCArray*, float, cocos2d::CCPoint, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6c740, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(items, gap, position, skipSize);
}

auto GameToolbox::bounceTime(float time) -> decltype(bounceTime(time)) {
	using FunctionType = decltype(bounceTime(time))(*)(float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x73180, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(time);
}

auto GameToolbox::createNotifyToggles(cocos2d::CCNode* p0, cocos2d::CCMenu* p1, cocos2d::CCObject* p2, cocos2d::SEL_MenuHandler p3, cocos2d::SEL_MenuHandler p4, cocos2d::CCPoint p5, float p6, float p7) -> decltype(createNotifyToggles(p0, p1, p2, p3, p4, p5, p6, p7)) {
	using FunctionType = decltype(createNotifyToggles(p0, p1, p2, p3, p4, p5, p6, p7))(*)(cocos2d::CCNode*, cocos2d::CCMenu*, cocos2d::CCObject*, cocos2d::SEL_MenuHandler, cocos2d::SEL_MenuHandler, cocos2d::CCPoint, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6dc10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2, p3, p4, p5, p6, p7);
}

auto GameToolbox::createToggleButton(std::string label, cocos2d::SEL_MenuHandler selector, bool state, cocos2d::CCMenu* menu, cocos2d::CCPoint position, cocos2d::CCNode* parent, cocos2d::CCNode* labelParent, float buttonScale, float maxLabelScale, float maxLabelWidth, cocos2d::CCPoint labelOffset, char const* font, bool labelTop, int labelTag, cocos2d::CCArray* container) -> decltype(createToggleButton(label, selector, state, menu, position, parent, labelParent, buttonScale, maxLabelScale, maxLabelWidth, labelOffset, font, labelTop, labelTag, container)) {
	using FunctionType = decltype(createToggleButton(label, selector, state, menu, position, parent, labelParent, buttonScale, maxLabelScale, maxLabelWidth, labelOffset, font, labelTop, labelTag, container))(*)(std::string, cocos2d::SEL_MenuHandler, bool, cocos2d::CCMenu*, cocos2d::CCPoint, cocos2d::CCNode*, cocos2d::CCNode*, float, float, float, cocos2d::CCPoint, char const*, bool, int, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6e5b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(label, selector, state, menu, position, parent, labelParent, buttonScale, maxLabelScale, maxLabelWidth, labelOffset, font, labelTop, labelTag, container);
}

auto GameToolbox::easeToText(int easingType) -> decltype(easeToText(easingType)) {
	using FunctionType = decltype(easeToText(easingType))(*)(int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x72c70, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(easingType);
}

auto GameToolbox::getEasedValue(float value, int easingType, float easingRate) -> decltype(getEasedValue(value, easingType, easingRate)) {
	using FunctionType = decltype(getEasedValue(value, easingType, easingRate))(*)(float, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x73230, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(value, easingType, easingRate);
}

auto GameToolbox::getRelativeOffset(GameObject* object, cocos2d::CCPoint offset) -> decltype(getRelativeOffset(object, offset)) {
	using FunctionType = decltype(getRelativeOffset(object, offset))(*)(GameObject*, cocos2d::CCPoint);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6e8b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(object, offset);
}

auto GameToolbox::getResponse(cocos2d::extension::CCHttpResponse* response) -> decltype(getResponse(response)) {
	using FunctionType = decltype(getResponse(response))(*)(cocos2d::extension::CCHttpResponse*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6cb00, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(response);
}

auto GameToolbox::getTimeString(int seconds, bool noSeconds) -> decltype(getTimeString(seconds, noSeconds)) {
	using FunctionType = decltype(getTimeString(seconds, noSeconds))(*)(int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6ff30, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(seconds, noSeconds);
}

auto GameToolbox::hsvFromString(std::string const& str, char const* delim) -> decltype(hsvFromString(str, delim)) {
	using FunctionType = decltype(hsvFromString(str, delim))(*)(std::string const&, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6f700, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(str, delim);
}

auto GameToolbox::intToShortString(int p0, bool p1) -> decltype(intToShortString(p0, p1)) {
	using FunctionType = decltype(intToShortString(p0, p1))(*)(int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x73ff0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

auto GameToolbox::intToString(int value) -> decltype(intToString(value)) {
	using FunctionType = decltype(intToString(value))(*)(int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x73760, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(value);
}

auto GameToolbox::mergeDictsSaveLargestInt(cocos2d::CCDictionary* toDict, cocos2d::CCDictionary* fromDict) -> decltype(mergeDictsSaveLargestInt(toDict, fromDict)) {
	using FunctionType = decltype(mergeDictsSaveLargestInt(toDict, fromDict))(*)(cocos2d::CCDictionary*, cocos2d::CCDictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6eac0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(toDict, fromDict);
}

auto GameToolbox::mergeDictsSkipConflict(cocos2d::CCDictionary* toDict, cocos2d::CCDictionary* fromDict) -> decltype(mergeDictsSkipConflict(toDict, fromDict)) {
	using FunctionType = decltype(mergeDictsSkipConflict(toDict, fromDict))(*)(cocos2d::CCDictionary*, cocos2d::CCDictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6ed90, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(toDict, fromDict);
}

auto GameToolbox::msToTimeString(int milliseconds, int formattingMode) -> decltype(msToTimeString(milliseconds, formattingMode)) {
	using FunctionType = decltype(msToTimeString(milliseconds, formattingMode))(*)(int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x74770, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(milliseconds, formattingMode);
}

auto GameToolbox::particleFromStruct(cocos2d::ParticleStruct const& particleStruct, cocos2d::CCParticleSystemQuad* system, bool dontUpdate) -> decltype(particleFromStruct(particleStruct, system, dontUpdate)) {
	using FunctionType = decltype(particleFromStruct(particleStruct, system, dontUpdate))(*)(cocos2d::ParticleStruct const&, cocos2d::CCParticleSystemQuad*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x72700, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(particleStruct, system, dontUpdate);
}

auto GameToolbox::particleStringToStruct(std::string const& str, cocos2d::ParticleStruct& particleStruct) -> decltype(particleStringToStruct(str, particleStruct)) {
	using FunctionType = decltype(particleStringToStruct(str, particleStruct))(*)(std::string const&, cocos2d::ParticleStruct&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x71a40, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(str, particleStruct);
}

auto GameToolbox::pointsToString(int points) -> decltype(pointsToString(points)) {
	using FunctionType = decltype(pointsToString(points))(*)(int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x748e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(points);
}

auto GameToolbox::preVisitWithClippingRect(cocos2d::CCNode* node, cocos2d::CCRect rect) -> decltype(preVisitWithClippingRect(node, rect)) {
	using FunctionType = decltype(preVisitWithClippingRect(node, rect))(*)(cocos2d::CCNode*, cocos2d::CCRect);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6db10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(node, rect);
}

auto GameToolbox::saveParticleToString(cocos2d::CCParticleSystemQuad* system) -> decltype(saveParticleToString(system)) {
	using FunctionType = decltype(saveParticleToString(system))(*)(cocos2d::CCParticleSystemQuad*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x70ad0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(system);
}

auto GameToolbox::showFolderDialog(char const* p0, std::string& p1) -> decltype(showFolderDialog(p0, p1)) {
	using FunctionType = decltype(showFolderDialog(p0, p1))(*)(char const*, std::string&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x75450, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

auto GameToolbox::stringFromHSV(cocos2d::ccHSVValue value, char const* separator) -> decltype(stringFromHSV(value, separator)) {
	using FunctionType = decltype(stringFromHSV(value, separator))(*)(cocos2d::ccHSVValue, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6f940, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(value, separator);
}

auto GameToolbox::stringSetupToDict(std::string const& str, char const* separator) -> decltype(stringSetupToDict(str, separator)) {
	using FunctionType = decltype(stringSetupToDict(str, separator))(*)(std::string const&, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6fd10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(str, separator);
}

auto GameToolbox::stringSetupToMap(std::string const& str, char const* separator, std::map<std::string, std::string>& setup) -> decltype(stringSetupToMap(str, separator, setup)) {
	using FunctionType = decltype(stringSetupToMap(str, separator, setup))(*)(std::string const&, char const*, std::map<std::string, std::string>&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6fac0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(str, separator, setup);
}

auto GameToolbox::timestampToDateString(long p0) -> decltype(timestampToDateString(p0)) {
	using FunctionType = decltype(timestampToDateString(p0))(*)(long);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x744c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0);
}

auto GameToolbox::timestampToHumanReadable(long p0) -> decltype(timestampToHumanReadable(p0)) {
	using FunctionType = decltype(timestampToHumanReadable(p0))(*)(long);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x74180, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0);
}

auto GameToolbox::transformColor(cocos2d::ccColor3B const& color, cocos2d::ccHSVValue hsv) -> decltype(transformColor(color, hsv)) {
	using FunctionType = decltype(transformColor(color, hsv))(*)(cocos2d::ccColor3B const&, cocos2d::ccHSVValue);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6f4e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(color, hsv);
}


#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/GJEffectManager.hpp>

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

GJEffectManager::~GJEffectManager() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(GJEffectManager*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x364750, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) GJEffectManager(geode::CutoffConstructor, sizeof(GJEffectManager));
		geode::DestructorLock::addLock(this);
	}
}

auto GJEffectManager::create() -> decltype(create()) {
	using FunctionType = decltype(create())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x364ef0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto GJEffectManager::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJEffectManager::init), this);
	using FunctionType = decltype(init())(*)(GJEffectManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x364f50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJEffectManager::calculateBaseActiveColors() -> decltype(calculateBaseActiveColors()) {
	using FunctionType = decltype(calculateBaseActiveColors())(*)(GJEffectManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x365760, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJEffectManager::calculateInheritedColor(int id, ColorAction* action) -> decltype(calculateInheritedColor(id, action)) {
	using FunctionType = decltype(calculateInheritedColor(id, action))(*)(GJEffectManager*, int, ColorAction*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x365b40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id, action);
}

auto GJEffectManager::calculateLightBGColor(cocos2d::ccColor3B color) -> decltype(calculateLightBGColor(color)) {
	using FunctionType = decltype(calculateLightBGColor(color))(*)(GJEffectManager*, cocos2d::ccColor3B);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x36e270, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, color);
}

auto GJEffectManager::colorForGroupID(int id, cocos2d::ccColor3B const& color, bool mainColor) -> decltype(colorForGroupID(id, color, mainColor)) {
	using FunctionType = decltype(colorForGroupID(id, color, mainColor))(*)(GJEffectManager*, int, cocos2d::ccColor3B const&, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x36c350, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id, color, mainColor);
}

auto GJEffectManager::colorForPulseEffect(cocos2d::ccColor3B const& color, PulseEffectAction* action) -> decltype(colorForPulseEffect(color, action)) {
	using FunctionType = decltype(colorForPulseEffect(color, action))(*)(GJEffectManager*, cocos2d::ccColor3B const&, PulseEffectAction*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x36bfb0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, color, action);
}

auto GJEffectManager::controlActionsForControlID(int id, GJActionCommand command) -> decltype(controlActionsForControlID(id, command)) {
	using FunctionType = decltype(controlActionsForControlID(id, command))(*)(GJEffectManager*, int, GJActionCommand);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x368280, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id, command);
}

auto GJEffectManager::controlActionsForTrigger(EffectGameObject* object, GJActionCommand command) -> decltype(controlActionsForTrigger(object, command)) {
	using FunctionType = decltype(controlActionsForTrigger(object, command))(*)(GJEffectManager*, EffectGameObject*, GJActionCommand);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x368bc0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, command);
}

auto GJEffectManager::countForItem(int id) -> decltype(countForItem(id)) {
	using FunctionType = decltype(countForItem(id))(*)(GJEffectManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x36cb70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GJEffectManager::createFollowCommand(float xMod, float yMod, float duration, int targetID, int centerID, int uniqueID, int controlID) -> decltype(createFollowCommand(xMod, yMod, duration, targetID, centerID, uniqueID, controlID)) {
	using FunctionType = decltype(createFollowCommand(xMod, yMod, duration, targetID, centerID, uniqueID, controlID))(*)(GJEffectManager*, float, float, float, int, int, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x366da0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, xMod, yMod, duration, targetID, centerID, uniqueID, controlID);
}

auto GJEffectManager::createKeyframeCommand(int targetID, cocos2d::CCArray* group, GameObject* object, int uniqueID, int controlID, bool temporary, float posXMod, float posYMod, float rotMod, float scaleXMod, float scaleYMod, float timeMod, std::vector<int> const& remapKeys) -> decltype(createKeyframeCommand(targetID, group, object, uniqueID, controlID, temporary, posXMod, posYMod, rotMod, scaleXMod, scaleYMod, timeMod, remapKeys)) {
	using FunctionType = decltype(createKeyframeCommand(targetID, group, object, uniqueID, controlID, temporary, posXMod, posYMod, rotMod, scaleXMod, scaleYMod, timeMod, remapKeys))(*)(GJEffectManager*, int, cocos2d::CCArray*, GameObject*, int, int, bool, float, float, float, float, float, float, std::vector<int> const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x366fd0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, targetID, group, object, uniqueID, controlID, temporary, posXMod, posYMod, rotMod, scaleXMod, scaleYMod, timeMod, remapKeys);
}

auto GJEffectManager::createMoveCommand(cocos2d::CCPoint pt, int groupID, float duration, int easingType, float easingRate, bool lockPlayerX, bool lockPlayerY, bool lockCameraX, bool lockCameraY, float moveModX, float moveModY, int uniqueID, int controlID) -> decltype(createMoveCommand(pt, groupID, duration, easingType, easingRate, lockPlayerX, lockPlayerY, lockCameraX, lockCameraY, moveModX, moveModY, uniqueID, controlID)) {
	using FunctionType = decltype(createMoveCommand(pt, groupID, duration, easingType, easingRate, lockPlayerX, lockPlayerY, lockCameraX, lockCameraY, moveModX, moveModY, uniqueID, controlID))(*)(GJEffectManager*, cocos2d::CCPoint, int, float, int, float, bool, bool, bool, bool, float, float, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3669e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, pt, groupID, duration, easingType, easingRate, lockPlayerX, lockPlayerY, lockCameraX, lockCameraY, moveModX, moveModY, uniqueID, controlID);
}

auto GJEffectManager::createPlayerFollowCommand(float delay, float speed, int offset, float maxSpeed, float duration, int targetID, int uniqueID, int controlID) -> decltype(createPlayerFollowCommand(delay, speed, offset, maxSpeed, duration, targetID, uniqueID, controlID)) {
	using FunctionType = decltype(createPlayerFollowCommand(delay, speed, offset, maxSpeed, duration, targetID, uniqueID, controlID))(*)(GJEffectManager*, float, float, int, float, float, int, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x366eb0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, delay, speed, offset, maxSpeed, duration, targetID, uniqueID, controlID);
}

auto GJEffectManager::createRotateCommand(float offset, float duration, int targetID, int centerID, int easingType, float easingRate, bool lockRotation, bool player1, bool player2, int uniqueID, int controlID) -> decltype(createRotateCommand(offset, duration, targetID, centerID, easingType, easingRate, lockRotation, player1, player2, uniqueID, controlID)) {
	using FunctionType = decltype(createRotateCommand(offset, duration, targetID, centerID, easingType, easingRate, lockRotation, player1, player2, uniqueID, controlID))(*)(GJEffectManager*, float, float, int, int, int, float, bool, bool, bool, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x366c70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, offset, duration, targetID, centerID, easingType, easingRate, lockRotation, player1, player2, uniqueID, controlID);
}

auto GJEffectManager::getAllColorActions() -> decltype(getAllColorActions()) {
	using FunctionType = decltype(getAllColorActions())(*)(GJEffectManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3655d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJEffectManager::getColorAction(int index) -> decltype(getColorAction(index)) {
	using FunctionType = decltype(getColorAction(index))(*)(GJEffectManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x365ef0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, index);
}

auto GJEffectManager::getColorSprite(int index) -> decltype(getColorSprite(index)) {
	using FunctionType = decltype(getColorSprite(index))(*)(GJEffectManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x365fb0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, index);
}

auto GJEffectManager::getLoadedMoveOffset(std::unordered_map<int, std::pair<double, double>>& offsets) -> decltype(getLoadedMoveOffset(offsets)) {
	using FunctionType = decltype(getLoadedMoveOffset(offsets))(*)(GJEffectManager*, std::unordered_map<int, std::pair<double, double>>&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x36b090, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, offsets);
}

auto GJEffectManager::getMoveCommandNode(GroupCommandObject2* command) -> decltype(getMoveCommandNode(command)) {
	using FunctionType = decltype(getMoveCommandNode(command))(*)(GJEffectManager*, GroupCommandObject2*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3697c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, command);
}

auto GJEffectManager::getMoveCommandObject() -> decltype(getMoveCommandObject()) {
	using FunctionType = decltype(getMoveCommandObject())(*)(GJEffectManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3696c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJEffectManager::getPersistentStateString() -> decltype(getPersistentStateString()) {
	using FunctionType = decltype(getPersistentStateString())(*)(GJEffectManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x36d060, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJEffectManager::handleObjectCollision(bool triggerOnExit, int blockAID, int blockBID) -> decltype(handleObjectCollision(triggerOnExit, blockAID, blockBID)) {
	using FunctionType = decltype(handleObjectCollision(triggerOnExit, blockAID, blockBID))(*)(GJEffectManager*, bool, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x366820, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, triggerOnExit, blockAID, blockBID);
}

auto GJEffectManager::loadFromState(EffectManagerState& state) -> decltype(loadFromState(state)) {
	using FunctionType = decltype(loadFromState(state))(*)(GJEffectManager*, EffectManagerState&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x36ebc0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, state);
}

auto GJEffectManager::opacityModForGroup(int id) -> decltype(opacityModForGroup(id)) {
	using FunctionType = decltype(opacityModForGroup(id))(*)(GJEffectManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x36b2c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GJEffectManager::playerButton(bool down, bool player1) -> decltype(playerButton(down, player1)) {
	using FunctionType = decltype(playerButton(down, player1))(*)(GJEffectManager*, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x36c910, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, down, player1);
}

auto GJEffectManager::postCollisionCheck() -> decltype(postCollisionCheck()) {
	using FunctionType = decltype(postCollisionCheck())(*)(GJEffectManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3665c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJEffectManager::postMoveActions() -> decltype(postMoveActions()) {
	using FunctionType = decltype(postMoveActions())(*)(GJEffectManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x36af30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJEffectManager::prepareMoveActions(float dt, bool intermediate) -> decltype(prepareMoveActions(dt, intermediate)) {
	using FunctionType = decltype(prepareMoveActions(dt, intermediate))(*)(GJEffectManager*, float, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x369ae0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, dt, intermediate);
}

auto GJEffectManager::processColors() -> decltype(processColors()) {
	using FunctionType = decltype(processColors())(*)(GJEffectManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x365640, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJEffectManager::processCopyColorPulseActions() -> decltype(processCopyColorPulseActions()) {
	using FunctionType = decltype(processCopyColorPulseActions())(*)(GJEffectManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x36bc50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJEffectManager::processInheritedColors() -> decltype(processInheritedColors()) {
	using FunctionType = decltype(processInheritedColors())(*)(GJEffectManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x365820, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJEffectManager::registerCollisionTrigger(int targetID, int blockAID, int blockBID, bool triggerOnExit, bool activateGroup, std::vector<int> const& remapKeys, int uniqueID, int controlID) -> decltype(registerCollisionTrigger(targetID, blockAID, blockBID, triggerOnExit, activateGroup, remapKeys, uniqueID, controlID)) {
	using FunctionType = decltype(registerCollisionTrigger(targetID, blockAID, blockBID, triggerOnExit, activateGroup, remapKeys, uniqueID, controlID))(*)(GJEffectManager*, int, int, int, bool, bool, std::vector<int> const&, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x366710, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, targetID, blockAID, blockBID, triggerOnExit, activateGroup, remapKeys, uniqueID, controlID);
}

auto GJEffectManager::registerRotationCommand(GroupCommandObject2* object, bool clear) -> decltype(registerRotationCommand(object, clear)) {
	using FunctionType = decltype(registerRotationCommand(object, clear))(*)(GJEffectManager*, GroupCommandObject2*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x369920, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, clear);
}

auto GJEffectManager::removeTriggeredID(int objectUniqueID, int playerUniqueID) -> decltype(removeTriggeredID(objectUniqueID, playerUniqueID)) {
	using FunctionType = decltype(removeTriggeredID(objectUniqueID, playerUniqueID))(*)(GJEffectManager*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x36c850, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, objectUniqueID, playerUniqueID);
}

auto GJEffectManager::reset() -> decltype(reset()) {
	using FunctionType = decltype(reset())(*)(GJEffectManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3653a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJEffectManager::resetEffects() -> decltype(resetEffects()) {
	using FunctionType = decltype(resetEffects())(*)(GJEffectManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x366300, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJEffectManager::resetTempGroupCommands(bool noRemove) -> decltype(resetTempGroupCommands(noRemove)) {
	using FunctionType = decltype(resetTempGroupCommands(noRemove))(*)(GJEffectManager*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3699f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, noRemove);
}

auto GJEffectManager::runOpacityActionOnGroup(int targetID, float duration, float opacity, int uniqueID, int controlID) -> decltype(runOpacityActionOnGroup(targetID, duration, opacity, uniqueID, controlID)) {
	using FunctionType = decltype(runOpacityActionOnGroup(targetID, duration, opacity, uniqueID, controlID))(*)(GJEffectManager*, int, float, float, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x36b1b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, targetID, duration, opacity, uniqueID, controlID);
}

auto GJEffectManager::runPulseEffect(int targetID, bool targetGroup, float fadeInDuration, float holdDuration, float fadeOutDuration, PulseEffectType effectType, cocos2d::ccColor3B targetColor, cocos2d::ccHSVValue targetHSV, int copyID, bool mainOnly, bool detailOnly, bool exclusive, bool legacyHSV, int uniqueID, int controlID) -> decltype(runPulseEffect(targetID, targetGroup, fadeInDuration, holdDuration, fadeOutDuration, effectType, targetColor, targetHSV, copyID, mainOnly, detailOnly, exclusive, legacyHSV, uniqueID, controlID)) {
	using FunctionType = decltype(runPulseEffect(targetID, targetGroup, fadeInDuration, holdDuration, fadeOutDuration, effectType, targetColor, targetHSV, copyID, mainOnly, detailOnly, exclusive, legacyHSV, uniqueID, controlID))(*)(GJEffectManager*, int, bool, float, float, float, PulseEffectType, cocos2d::ccColor3B, cocos2d::ccHSVValue, int, bool, bool, bool, bool, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x36b380, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, targetID, targetGroup, fadeInDuration, holdDuration, fadeOutDuration, effectType, targetColor, targetHSV, copyID, mainOnly, detailOnly, exclusive, legacyHSV, uniqueID, controlID);
}

auto GJEffectManager::saveToState(EffectManagerState& state) -> decltype(saveToState(state)) {
	using FunctionType = decltype(saveToState(state))(*)(GJEffectManager*, EffectManagerState&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x36e720, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, state);
}

auto GJEffectManager::setColorAction(ColorAction* action, int id) -> decltype(setColorAction(action, id)) {
	using FunctionType = decltype(setColorAction(action, id))(*)(GJEffectManager*, ColorAction*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x366100, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, action, id);
}

auto GJEffectManager::setupFromString(std::string str) -> decltype(setupFromString(str)) {
	using FunctionType = decltype(setupFromString(str))(*)(GJEffectManager*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x36e470, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, str);
}

auto GJEffectManager::spawnGroup(int targetID, float delay, bool spawnOrdered, std::vector<int> const& remapKeys, int uniqueID, int controlID) -> decltype(spawnGroup(targetID, delay, spawnOrdered, remapKeys, uniqueID, controlID)) {
	using FunctionType = decltype(spawnGroup(targetID, delay, spawnOrdered, remapKeys, uniqueID, controlID))(*)(GJEffectManager*, int, float, bool, std::vector<int> const&, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x36c4f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, targetID, delay, spawnOrdered, remapKeys, uniqueID, controlID);
}

auto GJEffectManager::startTimer(int id, double startTime, double targetTime, bool stopTime, bool active, bool dontOverride, float timeMod, bool ignoreTimewarp, int targetID, std::vector<int> const& remapKeys, int uniqueID, int controlID) -> decltype(startTimer(id, startTime, targetTime, stopTime, active, dontOverride, timeMod, ignoreTimewarp, targetID, remapKeys, uniqueID, controlID)) {
	using FunctionType = decltype(startTimer(id, startTime, targetTime, stopTime, active, dontOverride, timeMod, ignoreTimewarp, targetID, remapKeys, uniqueID, controlID))(*)(GJEffectManager*, int, double, double, bool, bool, bool, float, bool, int, std::vector<int> const&, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x36d730, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id, startTime, targetTime, stopTime, active, dontOverride, timeMod, ignoreTimewarp, targetID, remapKeys, uniqueID, controlID);
}

auto GJEffectManager::storeTriggeredID(int objectUniqueID, int playerUniqueID) -> decltype(storeTriggeredID(objectUniqueID, playerUniqueID)) {
	using FunctionType = decltype(storeTriggeredID(objectUniqueID, playerUniqueID))(*)(GJEffectManager*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x36c850, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, objectUniqueID, playerUniqueID);
}

auto GJEffectManager::timeForItem(int id) -> decltype(timeForItem(id)) {
	using FunctionType = decltype(timeForItem(id))(*)(GJEffectManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x36e1b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GJEffectManager::timerExists(int id) -> decltype(timerExists(id)) {
	using FunctionType = decltype(timerExists(id))(*)(GJEffectManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x36d900, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GJEffectManager::transferPersistentItems() -> decltype(transferPersistentItems()) {
	using FunctionType = decltype(transferPersistentItems())(*)(GJEffectManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x36d6b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJEffectManager::updateCountForItem(int id, int count) -> decltype(updateCountForItem(id, count)) {
	using FunctionType = decltype(updateCountForItem(id, count))(*)(GJEffectManager*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x36cc30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id, count);
}

auto GJEffectManager::updateEffects(float dt) -> decltype(updateEffects(dt)) {
	using FunctionType = decltype(updateEffects(dt))(*)(GJEffectManager*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x366180, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, dt);
}

auto GJEffectManager::updatePulseEffects(float dt) -> decltype(updatePulseEffects(dt)) {
	using FunctionType = decltype(updatePulseEffects(dt))(*)(GJEffectManager*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x36b900, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, dt);
}

auto GJEffectManager::updateSpawnTriggers(float dt) -> decltype(updateSpawnTriggers(dt)) {
	using FunctionType = decltype(updateSpawnTriggers(dt))(*)(GJEffectManager*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x36c5e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, dt);
}

auto GJEffectManager::updateTimer(int id, double time) -> decltype(updateTimer(id, time)) {
	using FunctionType = decltype(updateTimer(id, time))(*)(GJEffectManager*, int, double);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x36d9a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id, time);
}

auto GJEffectManager::updateTimers(float dt, float timeWarp) -> decltype(updateTimers(dt, timeWarp)) {
	using FunctionType = decltype(updateTimers(dt, timeWarp))(*)(GJEffectManager*, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x36db30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, dt, timeWarp);
}

auto GJEffectManager::wouldCreateLoop(InheritanceNode* node, int id) -> decltype(wouldCreateLoop(node, id)) {
	using FunctionType = decltype(wouldCreateLoop(node, id))(*)(GJEffectManager*, InheritanceNode*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x365ec0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, node, id);
}

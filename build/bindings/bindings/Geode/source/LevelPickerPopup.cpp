
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/LevelPickerPopup.hpp>

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

LevelPickerPopup::~LevelPickerPopup() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(LevelPickerPopup*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0xd35d0, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) LevelPickerPopup(geode::CutoffConstructor, sizeof(LevelPickerPopup));
		geode::DestructorLock::addLock(this);
	}
}

auto LevelPickerPopup::create(LevelPickerDelegate* p0) -> decltype(create(p0)) {
	using FunctionType = decltype(create(p0))(*)(LevelPickerDelegate*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe8b60, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0);
}

auto LevelPickerPopup::requestPage(int p0) -> decltype(requestPage(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&LevelPickerPopup::requestPage), this);
	using FunctionType = decltype(requestPage(p0))(*)(LevelPickerPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe9f80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto LevelPickerPopup::cellPerformedAction(TableViewCell* p0, int p1, CellAction p2, cocos2d::CCNode* p3) -> decltype(cellPerformedAction(p0, p1, p2, p3)) {
	auto self = addresser::thunkAdjust(Resolve<TableViewCell*, int, CellAction, cocos2d::CCNode*>::func(&LevelPickerPopup::cellPerformedAction), this);
	using FunctionType = decltype(cellPerformedAction(p0, p1, p2, p3))(*)(LevelPickerPopup*, TableViewCell*, int, CellAction, cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xeb8f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1, p2, p3);
}

auto LevelPickerPopup::loadLevelsFinished(cocos2d::CCArray* p0, char const* p1, int p2) -> decltype(loadLevelsFinished(p0, p1, p2)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCArray*, char const*, int>::func(&LevelPickerPopup::loadLevelsFinished), this);
	using FunctionType = decltype(loadLevelsFinished(p0, p1, p2))(*)(LevelPickerPopup*, cocos2d::CCArray*, char const*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xea7e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1, p2);
}

auto LevelPickerPopup::loadLevelsFailed(char const* p0, int p1) -> decltype(loadLevelsFailed(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<char const*, int>::func(&LevelPickerPopup::loadLevelsFailed), this);
	using FunctionType = decltype(loadLevelsFailed(p0, p1))(*)(LevelPickerPopup*, char const*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xea8f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto LevelPickerPopup::setupPageInfo(std::string p0, char const* p1) -> decltype(setupPageInfo(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<std::string, char const*>::func(&LevelPickerPopup::setupPageInfo), this);
	using FunctionType = decltype(setupPageInfo(p0, p1))(*)(LevelPickerPopup*, std::string, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xea640, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto LevelPickerPopup::textChanged(CCTextInputNode* p0) -> decltype(textChanged(p0)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&LevelPickerPopup::textChanged), this);
	using FunctionType = decltype(textChanged(p0))(*)(LevelPickerPopup*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xea980, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto LevelPickerPopup::buildSavedPage() -> decltype(buildSavedPage()) {
	using FunctionType = decltype(buildSavedPage())(*)(LevelPickerPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xeb750, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto LevelPickerPopup::doPageRequest(float p0) -> decltype(doPageRequest(p0)) {
	using FunctionType = decltype(doPageRequest(p0))(*)(LevelPickerPopup*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe9fb0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto LevelPickerPopup::init(LevelPickerDelegate* p0) -> decltype(init(p0)) {
	using FunctionType = decltype(init(p0))(*)(LevelPickerPopup*, LevelPickerDelegate*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe8d90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto LevelPickerPopup::onOnlineMode(cocos2d::CCObject* sender) -> decltype(onOnlineMode(sender)) {
	using FunctionType = decltype(onOnlineMode(sender))(*)(LevelPickerPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xea370, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelPickerPopup::onRefreshOnline(cocos2d::CCObject* sender) -> decltype(onRefreshOnline(sender)) {
	using FunctionType = decltype(onRefreshOnline(sender))(*)(LevelPickerPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xea5a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelPickerPopup::onToggleFavorites(cocos2d::CCObject* sender) -> decltype(onToggleFavorites(sender)) {
	using FunctionType = decltype(onToggleFavorites(sender))(*)(LevelPickerPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe9ed0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelPickerPopup::onToggleKind(cocos2d::CCObject* sender) -> decltype(onToggleKind(sender)) {
	using FunctionType = decltype(onToggleKind(sender))(*)(LevelPickerPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe97f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelPickerPopup::onUseID(cocos2d::CCObject* sender) -> decltype(onUseID(sender)) {
	using FunctionType = decltype(onUseID(sender))(*)(LevelPickerPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe9d30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelPickerPopup::refreshUseID() -> decltype(refreshUseID()) {
	using FunctionType = decltype(refreshUseID())(*)(LevelPickerPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe9ab0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

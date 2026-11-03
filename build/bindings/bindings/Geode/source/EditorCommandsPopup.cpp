
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/EditorCommandsPopup.hpp>

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

EditorCommandsPopup::~EditorCommandsPopup() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(EditorCommandsPopup*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x17d520, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) EditorCommandsPopup(geode::CutoffConstructor, sizeof(EditorCommandsPopup));
		geode::DestructorLock::addLock(this);
	}
}

auto EditorCommandsPopup::onBuildWindowContent() -> decltype(onBuildWindowContent()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&EditorCommandsPopup::onBuildWindowContent), this);
	using FunctionType = decltype(onBuildWindowContent())(*)(EditorCommandsPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x17d5f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto EditorCommandsPopup::onWindowResized() -> decltype(onWindowResized()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&EditorCommandsPopup::onWindowResized), this);
	using FunctionType = decltype(onWindowResized())(*)(EditorCommandsPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x17dae0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto EditorCommandsPopup::addCommandButton(char const* p0, EditorCommand p1) -> decltype(addCommandButton(p0, p1)) {
	using FunctionType = decltype(addCommandButton(p0, p1))(*)(EditorCommandsPopup*, char const*, EditorCommand);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x17d7a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}

auto EditorCommandsPopup::onCommand(cocos2d::CCObject* sender) -> decltype(onCommand(sender)) {
	using FunctionType = decltype(onCommand(sender))(*)(EditorCommandsPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x17daf0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

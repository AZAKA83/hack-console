
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/EditorSoundConfigCell.hpp>

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

EditorSoundConfigCell::EditorSoundConfigCell(char const* p0, float p1, float p2) : EditorSoundConfigCell(geode::CutoffConstructor, sizeof(EditorSoundConfigCell)) {
	// here we construct it as normal as we can, then destruct it
	// using the generated functions. this ensures no memory gets leaked
	// no crashes :pray:
	geode::DestructorLock::addLock(this);
	EditorSoundConfigCell::~EditorSoundConfigCell();

	using FunctionType = void(*)(EditorSoundConfigCell*, char const*, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x190600, tulip::hook::TulipConvention::Thiscall);
	reinterpret_cast<FunctionType>(func)(this, p0, p1, p2);
}

EditorSoundConfigCell::~EditorSoundConfigCell() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(EditorSoundConfigCell*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x190690, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) EditorSoundConfigCell(geode::CutoffConstructor, sizeof(EditorSoundConfigCell));
		geode::DestructorLock::addLock(this);
	}
}

auto EditorSoundConfigCell::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&EditorSoundConfigCell::init), this);
	using FunctionType = decltype(init())(*)(EditorSoundConfigCell*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3ff70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto EditorSoundConfigCell::loadFromConfig(GJEditorSoundConfig* p0) -> decltype(loadFromConfig(p0)) {
	using FunctionType = decltype(loadFromConfig(p0))(*)(EditorSoundConfigCell*, GJEditorSoundConfig*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x190730, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto EditorSoundConfigCell::onInfoPopup(cocos2d::CCObject* sender) -> decltype(onInfoPopup(sender)) {
	using FunctionType = decltype(onInfoPopup(sender))(*)(EditorSoundConfigCell*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1919e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorSoundConfigCell::onView(cocos2d::CCObject* sender) -> decltype(onView(sender)) {
	using FunctionType = decltype(onView(sender))(*)(EditorSoundConfigCell*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x191970, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorSoundConfigCell::onViewProfile(cocos2d::CCObject* sender) -> decltype(onViewProfile(sender)) {
	using FunctionType = decltype(onViewProfile(sender))(*)(EditorSoundConfigCell*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1919a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

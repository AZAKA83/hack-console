
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/EditorSFXSettingsPopup.hpp>

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

EditorSFXSettingsPopup::~EditorSFXSettingsPopup() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(EditorSFXSettingsPopup*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x60ac50, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) EditorSFXSettingsPopup(geode::CutoffConstructor, sizeof(EditorSFXSettingsPopup));
		geode::DestructorLock::addLock(this);
	}
}

auto EditorSFXSettingsPopup::valueDidChange(int p0, float p1) -> decltype(valueDidChange(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<int, float>::func(&EditorSFXSettingsPopup::valueDidChange), this);
	using FunctionType = decltype(valueDidChange(p0, p1))(*)(EditorSFXSettingsPopup*, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x18d810, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto EditorSFXSettingsPopup::getValue(int p0) -> decltype(getValue(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&EditorSFXSettingsPopup::getValue), this);
	using FunctionType = decltype(getValue(p0))(*)(EditorSFXSettingsPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x18d730, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto EditorSFXSettingsPopup::init(int p0) -> decltype(init(p0)) {
	using FunctionType = decltype(init(p0))(*)(EditorSFXSettingsPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x18d380, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

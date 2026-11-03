
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/FindObjectPopup.hpp>

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

FindObjectPopup::~FindObjectPopup() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(FindObjectPopup*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x180260, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) FindObjectPopup(geode::CutoffConstructor, sizeof(FindObjectPopup));
		geode::DestructorLock::addLock(this);
	}
}

auto FindObjectPopup::valueDidChange(int p0, float p1) -> decltype(valueDidChange(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<int, float>::func(&FindObjectPopup::valueDidChange), this);
	using FunctionType = decltype(valueDidChange(p0, p1))(*)(FindObjectPopup*, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1809e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto FindObjectPopup::onBuildWindowContent() -> decltype(onBuildWindowContent()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&FindObjectPopup::onBuildWindowContent), this);
	using FunctionType = decltype(onBuildWindowContent())(*)(FindObjectPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x180330, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto FindObjectPopup::onFieldEnter() -> decltype(onFieldEnter()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&FindObjectPopup::onFieldEnter), this);
	using FunctionType = decltype(onFieldEnter())(*)(FindObjectPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x180a90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto FindObjectPopup::init(EditorUI* p0) -> decltype(init(p0)) {
	throw std::runtime_error("FindObjectPopup::init not implemented");
}

auto FindObjectPopup::onFindStep(cocos2d::CCObject* sender) -> decltype(onFindStep(sender)) {
	using FunctionType = decltype(onFindStep(sender))(*)(FindObjectPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x180aa0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto FindObjectPopup::onOptions(cocos2d::CCObject* sender) -> decltype(onOptions(sender)) {
	using FunctionType = decltype(onOptions(sender))(*)(FindObjectPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x180ad0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto FindObjectPopup::onSelect(cocos2d::CCObject* sender) -> decltype(onSelect(sender)) {
	using FunctionType = decltype(onSelect(sender))(*)(FindObjectPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x180a90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

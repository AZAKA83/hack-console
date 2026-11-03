
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/CreateStartPosPopup.hpp>

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

CreateStartPosPopup::~CreateStartPosPopup() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(CreateStartPosPopup*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x4d6750, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) CreateStartPosPopup(geode::CutoffConstructor, sizeof(CreateStartPosPopup));
		geode::DestructorLock::addLock(this);
	}
}

auto CreateStartPosPopup::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&CreateStartPosPopup::init), this);
	using FunctionType = decltype(init())(*)(CreateStartPosPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4dc3c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto CreateStartPosPopup::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&CreateStartPosPopup::onClose), this);
	using FunctionType = decltype(onClose(sender))(*)(CreateStartPosPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4dd000, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto CreateStartPosPopup::updateInputNode(int p0, float p1) -> decltype(updateInputNode(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<int, float>::func(&CreateStartPosPopup::updateInputNode), this);
	using FunctionType = decltype(updateInputNode(p0, p1))(*)(CreateStartPosPopup*, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4dc940, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto CreateStartPosPopup::onCreate(cocos2d::CCObject* sender) -> decltype(onCreate(sender)) {
	using FunctionType = decltype(onCreate(sender))(*)(CreateStartPosPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4dc950, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

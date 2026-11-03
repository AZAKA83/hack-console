
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/GJSpecialColorSelect.hpp>

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

GJSpecialColorSelect::~GJSpecialColorSelect() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(GJSpecialColorSelect*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x3be280, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) GJSpecialColorSelect(geode::CutoffConstructor, sizeof(GJSpecialColorSelect));
		geode::DestructorLock::addLock(this);
	}
}

auto GJSpecialColorSelect::create(int id, GJSpecialColorSelectDelegate* delegate, ColorSelectType type) -> decltype(create(id, delegate, type)) {
	using FunctionType = decltype(create(id, delegate, type))(*)(int, GJSpecialColorSelectDelegate*, ColorSelectType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3be350, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(id, delegate, type);
}

auto GJSpecialColorSelect::textForColorIdx(int index) -> decltype(textForColorIdx(index)) {
	using FunctionType = decltype(textForColorIdx(index))(*)(int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3bf820, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(index);
}

auto GJSpecialColorSelect::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJSpecialColorSelect::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(GJSpecialColorSelect*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3bf7d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJSpecialColorSelect::init(int id, GJSpecialColorSelectDelegate* delegate, ColorSelectType type) -> decltype(init(id, delegate, type)) {
	using FunctionType = decltype(init(id, delegate, type))(*)(GJSpecialColorSelect*, int, GJSpecialColorSelectDelegate*, ColorSelectType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3be470, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id, delegate, type);
}

auto GJSpecialColorSelect::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	using FunctionType = decltype(onClose(sender))(*)(GJSpecialColorSelect*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3bf780, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto GJSpecialColorSelect::onSelectColor(cocos2d::CCObject* sender) -> decltype(onSelectColor(sender)) {
	using FunctionType = decltype(onSelectColor(sender))(*)(GJSpecialColorSelect*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3bf6a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}


#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/SmartTemplateCell.hpp>

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

SmartTemplateCell::~SmartTemplateCell() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(SmartTemplateCell*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x15dbb0, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) SmartTemplateCell(geode::CutoffConstructor, sizeof(SmartTemplateCell));
		geode::DestructorLock::addLock(this);
	}
}

auto SmartTemplateCell::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SmartTemplateCell::init), this);
	using FunctionType = decltype(init())(*)(SmartTemplateCell*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x400c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SmartTemplateCell::draw() -> decltype(draw()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SmartTemplateCell::draw), this);
	using FunctionType = decltype(draw())(*)(SmartTemplateCell*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1487a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SmartTemplateCell::loadFromObject(GJSmartTemplate* smartTemplate) -> decltype(loadFromObject(smartTemplate)) {
	using FunctionType = decltype(loadFromObject(smartTemplate))(*)(SmartTemplateCell*, GJSmartTemplate*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x15dc40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, smartTemplate);
}

auto SmartTemplateCell::onClick(cocos2d::CCObject* sender) -> decltype(onClick(sender)) {
	using FunctionType = decltype(onClick(sender))(*)(SmartTemplateCell*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x15e130, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SmartTemplateCell::updateBGColor(int index) -> decltype(updateBGColor(index)) {
	using FunctionType = decltype(updateBGColor(index))(*)(SmartTemplateCell*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x15e040, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, index);
}

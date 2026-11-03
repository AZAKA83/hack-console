
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/GameCell.hpp>

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

GameCell::~GameCell() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(GameCell*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x89d10, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) GameCell(geode::CutoffConstructor, sizeof(GameCell));
		geode::DestructorLock::addLock(this);
	}
}

auto GameCell::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GameCell::init), this);
	using FunctionType = decltype(init())(*)(GameCell*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x400c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GameCell::draw() -> decltype(draw()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GameCell::draw), this);
	using FunctionType = decltype(draw())(*)(GameCell*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x404f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GameCell::loadFromString(std::string str) -> decltype(loadFromString(str)) {
	using FunctionType = decltype(loadFromString(str))(*)(GameCell*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x400d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, str);
}

auto GameCell::onTouch(cocos2d::CCObject* sender) -> decltype(onTouch(sender)) {
	using FunctionType = decltype(onTouch(sender))(*)(GameCell*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x404b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

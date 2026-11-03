
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/ListButtonBar.hpp>

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

ListButtonBar::~ListButtonBar() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(ListButtonBar*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x77c10, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) ListButtonBar(geode::CutoffConstructor, sizeof(ListButtonBar));
		geode::DestructorLock::addLock(this);
	}
}

auto ListButtonBar::create(cocos2d::CCArray* items, cocos2d::CCPoint position, int columns, int rows, float columnOffset, float rowOffset, float offset, float arrowOffset, int arrowType) -> decltype(create(items, position, columns, rows, columnOffset, rowOffset, offset, arrowOffset, arrowType)) {
	using FunctionType = decltype(create(items, position, columns, rows, columnOffset, rowOffset, offset, arrowOffset, arrowType))(*)(cocos2d::CCArray*, cocos2d::CCPoint, int, int, float, float, float, float, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x77cb0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(items, position, columns, rows, columnOffset, rowOffset, offset, arrowOffset, arrowType);
}

auto ListButtonBar::goToPage(int page) -> decltype(goToPage(page)) {
	using FunctionType = decltype(goToPage(page))(*)(ListButtonBar*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x782e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, page);
}

auto ListButtonBar::init(cocos2d::CCArray* items, cocos2d::CCPoint position, int columns, int rows, float columnOffset, float rowOffset, float offset, float arrowOffset, int arrowType) -> decltype(init(items, position, columns, rows, columnOffset, rowOffset, offset, arrowOffset, arrowType)) {
	using FunctionType = decltype(init(items, position, columns, rows, columnOffset, rowOffset, offset, arrowOffset, arrowType))(*)(ListButtonBar*, cocos2d::CCArray*, cocos2d::CCPoint, int, int, float, float, float, float, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x77dd0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, items, position, columns, rows, columnOffset, rowOffset, offset, arrowOffset, arrowType);
}

auto ListButtonBar::onLeft(cocos2d::CCObject* sender) -> decltype(onLeft(sender)) {
	using FunctionType = decltype(onLeft(sender))(*)(ListButtonBar*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x78390, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto ListButtonBar::onRight(cocos2d::CCObject* sender) -> decltype(onRight(sender)) {
	using FunctionType = decltype(onRight(sender))(*)(ListButtonBar*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x78370, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

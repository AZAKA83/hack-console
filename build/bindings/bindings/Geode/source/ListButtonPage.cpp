
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/ListButtonPage.hpp>

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

ListButtonPage::~ListButtonPage() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(ListButtonPage*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x77c70, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) ListButtonPage(geode::CutoffConstructor, sizeof(ListButtonPage));
		geode::DestructorLock::addLock(this);
	}
}

auto ListButtonPage::create(cocos2d::CCArray* items, cocos2d::CCPoint position, int columns, int rows, float columnOffset, float rowOffset, float offset) -> decltype(create(items, position, columns, rows, columnOffset, rowOffset, offset)) {
	using FunctionType = decltype(create(items, position, columns, rows, columnOffset, rowOffset, offset))(*)(cocos2d::CCArray*, cocos2d::CCPoint, int, int, float, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x783b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(items, position, columns, rows, columnOffset, rowOffset, offset);
}

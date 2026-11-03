
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/GJListLayer.hpp>

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

GJListLayer::~GJListLayer() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(GJListLayer*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x38dad0, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) GJListLayer(geode::CutoffConstructor, sizeof(GJListLayer));
		geode::DestructorLock::addLock(this);
	}
}

auto GJListLayer::create(BoomListView* listView, char const* title, cocos2d::ccColor4B color, float width, float height, int type) -> decltype(create(listView, title, color, width, height, type)) {
	using FunctionType = decltype(create(listView, title, color, width, height, type))(*)(BoomListView*, char const*, cocos2d::ccColor4B, float, float, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x38db90, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(listView, title, color, width, height, type);
}

auto GJListLayer::init(BoomListView* listView, char const* title, cocos2d::ccColor4B color, float width, float height, int type) -> decltype(init(listView, title, color, width, height, type)) {
	using FunctionType = decltype(init(listView, title, color, width, height, type))(*)(GJListLayer*, BoomListView*, char const*, cocos2d::ccColor4B, float, float, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x38dcc0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, listView, title, color, width, height, type);
}

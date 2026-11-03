
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/GJCommentListLayer.hpp>

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

GJCommentListLayer::~GJCommentListLayer() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(GJCommentListLayer*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x398f90, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) GJCommentListLayer(geode::CutoffConstructor, sizeof(GJCommentListLayer));
		geode::DestructorLock::addLock(this);
	}
}

auto GJCommentListLayer::create(BoomListView* listView, char const* title, cocos2d::ccColor4B color, float width, float height, bool blueBorder) -> decltype(create(listView, title, color, width, height, blueBorder)) {
	using FunctionType = decltype(create(listView, title, color, width, height, blueBorder))(*)(BoomListView*, char const*, cocos2d::ccColor4B, float, float, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x39c470, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(listView, title, color, width, height, blueBorder);
}

auto GJCommentListLayer::init(BoomListView* listView, char const* title, cocos2d::ccColor4B color, float width, float height, bool blueBorder) -> decltype(init(listView, title, color, width, height, blueBorder)) {
	using FunctionType = decltype(init(listView, title, color, width, height, blueBorder))(*)(GJCommentListLayer*, BoomListView*, char const*, cocos2d::ccColor4B, float, float, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x39c590, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, listView, title, color, width, height, blueBorder);
}

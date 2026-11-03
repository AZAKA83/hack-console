
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/URLViewLayer.hpp>

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

URLViewLayer::~URLViewLayer() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(URLViewLayer*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x399df0, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) URLViewLayer(geode::CutoffConstructor, sizeof(URLViewLayer));
		geode::DestructorLock::addLock(this);
	}
}

auto URLViewLayer::create(std::string title, cocos2d::CCArray* objects) -> decltype(create(title, objects)) {
	using FunctionType = decltype(create(title, objects))(*)(std::string, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3aaa10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(title, objects);
}


#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/GameObjectCopy.hpp>

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

GameObjectCopy::~GameObjectCopy() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(GameObjectCopy*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x409dc0, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) GameObjectCopy(geode::CutoffConstructor, sizeof(GameObjectCopy));
		geode::DestructorLock::addLock(this);
	}
}

auto GameObjectCopy::create(GameObject* object) -> decltype(create(object)) {
	using FunctionType = decltype(create(object))(*)(GameObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x409e20, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(object);
}

auto GameObjectCopy::resetObject() -> decltype(resetObject()) {
	using FunctionType = decltype(resetObject())(*)(GameObjectCopy*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x409f20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

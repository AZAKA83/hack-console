
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/ObjectToolbox.hpp>

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

ObjectToolbox::~ObjectToolbox() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(ObjectToolbox*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x4a1b60, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) ObjectToolbox(geode::CutoffConstructor, sizeof(ObjectToolbox));
		geode::DestructorLock::addLock(this);
	}
}

auto ObjectToolbox::sharedState() -> decltype(sharedState()) {
	using FunctionType = decltype(sharedState())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4a1be0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto ObjectToolbox::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&ObjectToolbox::init), this);
	using FunctionType = decltype(init())(*)(ObjectToolbox*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4a1ca0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto ObjectToolbox::gridNodeSizeForKey(int key) -> decltype(gridNodeSizeForKey(key)) {
	using FunctionType = decltype(gridNodeSizeForKey(key))(*)(ObjectToolbox*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4c9b00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto ObjectToolbox::intKeyToFrame(int key) -> decltype(intKeyToFrame(key)) {
	using FunctionType = decltype(intKeyToFrame(key))(*)(ObjectToolbox*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4c9ad0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto ObjectToolbox::perspectiveBlockFrame(int key) -> decltype(perspectiveBlockFrame(key)) {
	using FunctionType = decltype(perspectiveBlockFrame(key))(*)(ObjectToolbox*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4ca520, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

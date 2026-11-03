
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/GJRobotSprite.hpp>

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

GJRobotSprite::~GJRobotSprite() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(GJRobotSprite*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x3ac690, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) GJRobotSprite(geode::CutoffConstructor, sizeof(GJRobotSprite));
		geode::DestructorLock::addLock(this);
	}
}

auto GJRobotSprite::create(int frame) -> decltype(create(frame)) {
	using FunctionType = decltype(create(frame))(*)(int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3ac740, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(frame);
}

auto GJRobotSprite::setOpacity(unsigned char opacity) -> decltype(setOpacity(opacity)) {
	auto self = addresser::thunkAdjust(Resolve<unsigned char>::func(&GJRobotSprite::setOpacity), this);
	using FunctionType = decltype(setOpacity(opacity))(*)(GJRobotSprite*, unsigned char);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3ad4c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, opacity);
}

auto GJRobotSprite::hideSecondary() -> decltype(hideSecondary()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJRobotSprite::hideSecondary), this);
	using FunctionType = decltype(hideSecondary())(*)(GJRobotSprite*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3adbb0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJRobotSprite::init(int frame, std::string animName) -> decltype(init(frame, animName)) {
	using FunctionType = decltype(init(frame, animName))(*)(GJRobotSprite*, int, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3ac7f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, frame, animName);
}

auto GJRobotSprite::updateColors() -> decltype(updateColors()) {
	using FunctionType = decltype(updateColors())(*)(GJRobotSprite*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3acfc0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJRobotSprite::updateFrame(int frame) -> decltype(updateFrame(frame)) {
	using FunctionType = decltype(updateFrame(frame))(*)(GJRobotSprite*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3ad5c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, frame);
}

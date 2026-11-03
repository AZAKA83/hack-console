
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/ColorChannelSprite.hpp>

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

ColorChannelSprite::~ColorChannelSprite() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(ColorChannelSprite*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x3624a0, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) ColorChannelSprite(geode::CutoffConstructor, sizeof(ColorChannelSprite));
		geode::DestructorLock::addLock(this);
	}
}

auto ColorChannelSprite::create() -> decltype(create()) {
	using FunctionType = decltype(create())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x362d80, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto ColorChannelSprite::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&ColorChannelSprite::init), this);
	using FunctionType = decltype(init())(*)(ColorChannelSprite*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x362e40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto ColorChannelSprite::updateBlending(bool enabled) -> decltype(updateBlending(enabled)) {
	using FunctionType = decltype(updateBlending(enabled))(*)(ColorChannelSprite*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x363180, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, enabled);
}

auto ColorChannelSprite::updateCopyLabel(int channelID, bool copyColorLoop) -> decltype(updateCopyLabel(channelID, copyColorLoop)) {
	using FunctionType = decltype(updateCopyLabel(channelID, copyColorLoop))(*)(ColorChannelSprite*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x362e60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, channelID, copyColorLoop);
}

auto ColorChannelSprite::updateOpacity(float alpha) -> decltype(updateOpacity(alpha)) {
	using FunctionType = decltype(updateOpacity(alpha))(*)(ColorChannelSprite*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x363020, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, alpha);
}

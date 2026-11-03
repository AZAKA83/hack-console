
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/GJObjectDecoder.hpp>

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

GJObjectDecoder::~GJObjectDecoder() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(GJObjectDecoder*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x80dc0, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) GJObjectDecoder(geode::CutoffConstructor, sizeof(GJObjectDecoder));
		geode::DestructorLock::addLock(this);
	}
}

auto GJObjectDecoder::sharedDecoder() -> decltype(sharedDecoder()) {
	using FunctionType = decltype(sharedDecoder())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x391c80, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto GJObjectDecoder::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJObjectDecoder::init), this);
	using FunctionType = decltype(init())(*)(GJObjectDecoder*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8b060, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJObjectDecoder::getDecodedObject(int type, DS_Dictionary* dict) -> decltype(getDecodedObject(type, dict)) {
	auto self = addresser::thunkAdjust(Resolve<int, DS_Dictionary*>::func(&GJObjectDecoder::getDecodedObject), this);
	using FunctionType = decltype(getDecodedObject(type, dict))(*)(GJObjectDecoder*, int, DS_Dictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x391d20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, type, dict);
}

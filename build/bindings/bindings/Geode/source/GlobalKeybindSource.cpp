
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/GlobalKeybindSource.hpp>

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

auto GlobalKeybindSource::chordsForAction(int action) -> decltype(chordsForAction(action)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&GlobalKeybindSource::chordsForAction), this);
	using FunctionType = decltype(chordsForAction(action))(*)(GlobalKeybindSource*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d5200, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, action);
}

auto GlobalKeybindSource::actionsForChord(int chord) -> decltype(actionsForChord(chord)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&GlobalKeybindSource::actionsForChord), this);
	using FunctionType = decltype(actionsForChord(chord))(*)(GlobalKeybindSource*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d5240, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, chord);
}

auto GlobalKeybindSource::bindChord(int chord, int action) -> decltype(bindChord(chord, action)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&GlobalKeybindSource::bindChord), this);
	using FunctionType = decltype(bindChord(chord, action))(*)(GlobalKeybindSource*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d5280, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, chord, action);
}

auto GlobalKeybindSource::unbindChord(int chord, int action) -> decltype(unbindChord(chord, action)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&GlobalKeybindSource::unbindChord), this);
	using FunctionType = decltype(unbindChord(chord, action))(*)(GlobalKeybindSource*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d52b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, chord, action);
}


#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/KeybindSet.hpp>

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

KeybindSet::KeybindSet() : KeybindSet(geode::CutoffConstructor, sizeof(KeybindSet)) {
	// here we construct it as normal as we can, then destruct it
	// using the generated functions. this ensures no memory gets leaked
	// no crashes :pray:
	geode::DestructorLock::addLock(this);
	KeybindSet::~KeybindSet();

	using FunctionType = void(*)(KeybindSet*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x44a260, tulip::hook::TulipConvention::Thiscall);
	reinterpret_cast<FunctionType>(func)(this);
}

auto KeybindSet::chordsForAction(int action) -> decltype(chordsForAction(action)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&KeybindSet::chordsForAction), this);
	using FunctionType = decltype(chordsForAction(action))(*)(KeybindSet*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4493e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, action);
}

auto KeybindSet::actionsForChord(int chord) -> decltype(actionsForChord(chord)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&KeybindSet::actionsForChord), this);
	using FunctionType = decltype(actionsForChord(chord))(*)(KeybindSet*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4494d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, chord);
}

auto KeybindSet::bindChord(int chord, int action) -> decltype(bindChord(chord, action)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&KeybindSet::bindChord), this);
	using FunctionType = decltype(bindChord(chord, action))(*)(KeybindSet*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4495e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, chord, action);
}

auto KeybindSet::unbindChord(int chord, int action) -> decltype(unbindChord(chord, action)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&KeybindSet::unbindChord), this);
	using FunctionType = decltype(unbindChord(chord, action))(*)(KeybindSet*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x449620, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, chord, action);
}

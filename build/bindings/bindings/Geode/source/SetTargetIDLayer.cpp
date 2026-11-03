
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/SetTargetIDLayer.hpp>

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

SetTargetIDLayer::~SetTargetIDLayer() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(SetTargetIDLayer*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x598b70, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) SetTargetIDLayer(geode::CutoffConstructor, sizeof(SetTargetIDLayer));
		geode::DestructorLock::addLock(this);
	}
}

auto SetTargetIDLayer::create(EffectGameObject* object, cocos2d::CCArray* objects, std::string title, std::string label, int minimum, int maximum, int objectID) -> decltype(create(object, objects, title, label, minimum, maximum, objectID)) {
	using FunctionType = decltype(create(object, objects, title, label, minimum, maximum, objectID))(*)(EffectGameObject*, cocos2d::CCArray*, std::string, std::string, int, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x598c40, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(object, objects, title, label, minimum, maximum, objectID);
}

auto SetTargetIDLayer::determineStartValues() -> decltype(determineStartValues()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SetTargetIDLayer::determineStartValues), this);
	using FunctionType = decltype(determineStartValues())(*)(SetTargetIDLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x39a380, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SetTargetIDLayer::valueDidChange(int tag, float value) -> decltype(valueDidChange(tag, value)) {
	auto self = addresser::thunkAdjust(Resolve<int, float>::func(&SetTargetIDLayer::valueDidChange), this);
	using FunctionType = decltype(valueDidChange(tag, value))(*)(SetTargetIDLayer*, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5992e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, tag, value);
}

auto SetTargetIDLayer::init(EffectGameObject* object, cocos2d::CCArray* objects, std::string title, std::string label, int minimum, int maximum, int objectID) -> decltype(init(object, objects, title, label, minimum, maximum, objectID)) {
	using FunctionType = decltype(init(object, objects, title, label, minimum, maximum, objectID))(*)(SetTargetIDLayer*, EffectGameObject*, cocos2d::CCArray*, std::string, std::string, int, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x598dd0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, objects, title, label, minimum, maximum, objectID);
}

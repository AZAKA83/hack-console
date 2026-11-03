
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/DrawGridLayer.hpp>

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

DrawGridLayer::~DrawGridLayer() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(DrawGridLayer*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x3ec960, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) DrawGridLayer(geode::CutoffConstructor, sizeof(DrawGridLayer));
		geode::DestructorLock::addLock(this);
	}
}

auto DrawGridLayer::create(cocos2d::CCNode* parent, LevelEditorLayer* layer) -> decltype(create(parent, layer)) {
	using FunctionType = decltype(create(parent, layer))(*)(cocos2d::CCNode*, LevelEditorLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x40a080, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(parent, layer);
}

auto DrawGridLayer::update(float dt) -> decltype(update(dt)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&DrawGridLayer::update), this);
	using FunctionType = decltype(update(dt))(*)(DrawGridLayer*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x40a690, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, dt);
}

auto DrawGridLayer::draw() -> decltype(draw()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&DrawGridLayer::draw), this);
	using FunctionType = decltype(draw())(*)(DrawGridLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x40a8a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto DrawGridLayer::loadTimeMarkers(std::string markers) -> decltype(loadTimeMarkers(markers)) {
	using FunctionType = decltype(loadTimeMarkers(markers))(*)(DrawGridLayer*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x40a3a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, markers);
}

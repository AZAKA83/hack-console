
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/ExplodeItemNode.hpp>

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

ExplodeItemNode::~ExplodeItemNode() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(ExplodeItemNode*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x4dd0b0, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) ExplodeItemNode(geode::CutoffConstructor, sizeof(ExplodeItemNode));
		geode::DestructorLock::addLock(this);
	}
}

auto ExplodeItemNode::create(cocos2d::CCRenderTexture* texture) -> decltype(create(texture)) {
	using FunctionType = decltype(create(texture))(*)(cocos2d::CCRenderTexture*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4e2910, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(texture);
}

auto ExplodeItemNode::update(float dt) -> decltype(update(dt)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&ExplodeItemNode::update), this);
	using FunctionType = decltype(update(dt))(*)(ExplodeItemNode*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4e32c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, dt);
}

auto ExplodeItemNode::createSprites(int countX, int countY, float xVel, float xVar, float yVel, float yVar, float dur, float durVar, cocos2d::ccColor4F startColor, cocos2d::ccColor4F endColor, bool noParticles) -> decltype(createSprites(countX, countY, xVel, xVar, yVel, yVar, dur, durVar, startColor, endColor, noParticles)) {
	using FunctionType = decltype(createSprites(countX, countY, xVel, xVar, yVel, yVar, dur, durVar, startColor, endColor, noParticles))(*)(ExplodeItemNode*, int, int, float, float, float, float, float, float, cocos2d::ccColor4F, cocos2d::ccColor4F, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4e29e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, countX, countY, xVel, xVar, yVel, yVar, dur, durVar, startColor, endColor, noParticles);
}

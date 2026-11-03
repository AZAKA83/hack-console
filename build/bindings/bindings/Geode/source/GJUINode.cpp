
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/GJUINode.hpp>

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

GJUINode::~GJUINode() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(GJUINode*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x1107a0, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) GJUINode(geode::CutoffConstructor, sizeof(GJUINode));
		geode::DestructorLock::addLock(this);
	}
}

auto GJUINode::create(UIButtonConfig& config) -> decltype(create(config)) {
	using FunctionType = decltype(create(config))(*)(UIButtonConfig&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x673b50, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(config);
}

auto GJUINode::draw() -> decltype(draw()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJUINode::draw), this);
	using FunctionType = decltype(draw())(*)(GJUINode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6745b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJUINode::activeTouchTest(cocos2d::CCPoint position) -> decltype(activeTouchTest(position)) {
	using FunctionType = decltype(activeTouchTest(position))(*)(GJUINode*, cocos2d::CCPoint);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x674280, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, position);
}

auto GJUINode::init(UIButtonConfig& config) -> decltype(init(config)) {
	using FunctionType = decltype(init(config))(*)(GJUINode*, UIButtonConfig&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x673c30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, config);
}

auto GJUINode::saveToConfig(UIButtonConfig& config) -> decltype(saveToConfig(config)) {
	using FunctionType = decltype(saveToConfig(config))(*)(GJUINode*, UIButtonConfig&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x673ee0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, config);
}

auto GJUINode::toggleHighlight(int button, bool highlight) -> decltype(toggleHighlight(button, highlight)) {
	using FunctionType = decltype(toggleHighlight(button, highlight))(*)(GJUINode*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x674520, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, button, highlight);
}

auto GJUINode::touchEnded() -> decltype(touchEnded()) {
	using FunctionType = decltype(touchEnded())(*)(GJUINode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x674460, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJUINode::touchTest(cocos2d::CCPoint position) -> decltype(touchTest(position)) {
	using FunctionType = decltype(touchTest(position))(*)(GJUINode*, cocos2d::CCPoint);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x674170, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, position);
}

auto GJUINode::updateButtonFrames() -> decltype(updateButtonFrames()) {
	using FunctionType = decltype(updateButtonFrames())(*)(GJUINode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x673f90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJUINode::updateButtonPositions() -> decltype(updateButtonPositions()) {
	using FunctionType = decltype(updateButtonPositions())(*)(GJUINode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x674070, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

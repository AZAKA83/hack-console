
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/CreateParticlePopup.hpp>

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

CreateParticlePopup::~CreateParticlePopup() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(CreateParticlePopup*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x5c1020, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) CreateParticlePopup(geode::CutoffConstructor, sizeof(CreateParticlePopup));
		geode::DestructorLock::addLock(this);
	}
}

auto CreateParticlePopup::create(ParticleGameObject* object, cocos2d::CCArray* objects, std::string str) -> decltype(create(object, objects, str)) {
	using FunctionType = decltype(create(object, objects, str))(*)(ParticleGameObject*, cocos2d::CCArray*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5c11f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(object, objects, str);
}

auto CreateParticlePopup::update(float dt) -> decltype(update(dt)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&CreateParticlePopup::update), this);
	using FunctionType = decltype(update(dt))(*)(CreateParticlePopup*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5c7ea0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, dt);
}

auto CreateParticlePopup::ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchBegan(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&CreateParticlePopup::ccTouchBegan), this);
	using FunctionType = decltype(ccTouchBegan(touch, event))(*)(CreateParticlePopup*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5cabe0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto CreateParticlePopup::ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchMoved(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&CreateParticlePopup::ccTouchMoved), this);
	using FunctionType = decltype(ccTouchMoved(touch, event))(*)(CreateParticlePopup*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5cace0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto CreateParticlePopup::ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchEnded(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&CreateParticlePopup::ccTouchEnded), this);
	using FunctionType = decltype(ccTouchEnded(touch, event))(*)(CreateParticlePopup*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5cb110, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto CreateParticlePopup::ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchCancelled(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&CreateParticlePopup::ccTouchCancelled), this);
	using FunctionType = decltype(ccTouchCancelled(touch, event))(*)(CreateParticlePopup*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x83ef0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto CreateParticlePopup::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&CreateParticlePopup::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(CreateParticlePopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5cabd0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto CreateParticlePopup::sliderBegan(Slider* slider) -> decltype(sliderBegan(slider)) {
	auto self = addresser::thunkAdjust(Resolve<Slider*>::func(&CreateParticlePopup::sliderBegan), this);
	using FunctionType = decltype(sliderBegan(slider))(*)(CreateParticlePopup*, Slider*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5ca2f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, slider);
}

auto CreateParticlePopup::sliderEnded(Slider* slider) -> decltype(sliderEnded(slider)) {
	auto self = addresser::thunkAdjust(Resolve<Slider*>::func(&CreateParticlePopup::sliderEnded), this);
	using FunctionType = decltype(sliderEnded(slider))(*)(CreateParticlePopup*, Slider*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5ca3b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, slider);
}

auto CreateParticlePopup::colorSelectClosed(cocos2d::CCNode* popup) -> decltype(colorSelectClosed(popup)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCNode*>::func(&CreateParticlePopup::colorSelectClosed), this);
	using FunctionType = decltype(colorSelectClosed(popup))(*)(CreateParticlePopup*, cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5c7500, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, popup);
}

auto CreateParticlePopup::textInputClosed(CCTextInputNode* node) -> decltype(textInputClosed(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&CreateParticlePopup::textInputClosed), this);
	using FunctionType = decltype(textInputClosed(node))(*)(CreateParticlePopup*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1265d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto CreateParticlePopup::textChanged(CCTextInputNode* node) -> decltype(textChanged(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&CreateParticlePopup::textChanged), this);
	using FunctionType = decltype(textChanged(node))(*)(CreateParticlePopup*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5c81d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto CreateParticlePopup::centerAlignParticle(cocos2d::CCObject* sender) -> decltype(centerAlignParticle(sender)) {
	using FunctionType = decltype(centerAlignParticle(sender))(*)(CreateParticlePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5c7a00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreateParticlePopup::createParticleSlider(gjParticleValue value, int page, bool centerLabel, cocos2d::CCPoint position, cocos2d::CCArray* displayNodes) -> decltype(createParticleSlider(value, page, centerLabel, position, displayNodes)) {
	using FunctionType = decltype(createParticleSlider(value, page, centerLabel, position, displayNodes))(*)(CreateParticlePopup*, gjParticleValue, int, bool, cocos2d::CCPoint, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5c5f70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, value, page, centerLabel, position, displayNodes);
}

auto CreateParticlePopup::init(ParticleGameObject* object, cocos2d::CCArray* objects, std::string str) -> decltype(init(object, objects, str)) {
	using FunctionType = decltype(init(object, objects, str))(*)(CreateParticlePopup*, ParticleGameObject*, cocos2d::CCArray*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5c1420, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, objects, str);
}

auto CreateParticlePopup::maxSliderValueForType(gjParticleValue type) -> decltype(maxSliderValueForType(type)) {
	using FunctionType = decltype(maxSliderValueForType(type))(*)(CreateParticlePopup*, gjParticleValue);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5c93f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, type);
}

auto CreateParticlePopup::minSliderValueForType(gjParticleValue type) -> decltype(minSliderValueForType(type)) {
	using FunctionType = decltype(minSliderValueForType(type))(*)(CreateParticlePopup*, gjParticleValue);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5c94c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, type);
}

auto CreateParticlePopup::onAnimateActiveOnly(cocos2d::CCObject* sender) -> decltype(onAnimateActiveOnly(sender)) {
	using FunctionType = decltype(onAnimateActiveOnly(sender))(*)(CreateParticlePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5c6b60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreateParticlePopup::onAnimateOnTrigger(cocos2d::CCObject* sender) -> decltype(onAnimateOnTrigger(sender)) {
	using FunctionType = decltype(onAnimateOnTrigger(sender))(*)(CreateParticlePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5c6ad0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreateParticlePopup::onCalcEmission(cocos2d::CCObject* sender) -> decltype(onCalcEmission(sender)) {
	using FunctionType = decltype(onCalcEmission(sender))(*)(CreateParticlePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5c83d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreateParticlePopup::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	using FunctionType = decltype(onClose(sender))(*)(CreateParticlePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5caa90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreateParticlePopup::onCopySettings(cocos2d::CCObject* sender) -> decltype(onCopySettings(sender)) {
	using FunctionType = decltype(onCopySettings(sender))(*)(CreateParticlePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5c7120, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreateParticlePopup::onDuplicateColor(cocos2d::CCObject* sender) -> decltype(onDuplicateColor(sender)) {
	using FunctionType = decltype(onDuplicateColor(sender))(*)(CreateParticlePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5c6fb0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreateParticlePopup::onDurationForever(cocos2d::CCObject* sender) -> decltype(onDurationForever(sender)) {
	using FunctionType = decltype(onDurationForever(sender))(*)(CreateParticlePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5c8330, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreateParticlePopup::onDynamicColor(cocos2d::CCObject* sender) -> decltype(onDynamicColor(sender)) {
	using FunctionType = decltype(onDynamicColor(sender))(*)(CreateParticlePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5c6c80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreateParticlePopup::onDynamicRotation(cocos2d::CCObject* sender) -> decltype(onDynamicRotation(sender)) {
	using FunctionType = decltype(onDynamicRotation(sender))(*)(CreateParticlePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5c6a10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreateParticlePopup::onEmitterMode(cocos2d::CCObject* sender) -> decltype(onEmitterMode(sender)) {
	using FunctionType = decltype(onEmitterMode(sender))(*)(CreateParticlePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5ca710, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreateParticlePopup::onEndRGBVarSync(cocos2d::CCObject* sender) -> decltype(onEndRGBVarSync(sender)) {
	using FunctionType = decltype(onEndRGBVarSync(sender))(*)(CreateParticlePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5c6aa0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreateParticlePopup::onMaxEmission(cocos2d::CCObject* sender) -> decltype(onMaxEmission(sender)) {
	using FunctionType = decltype(onMaxEmission(sender))(*)(CreateParticlePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5c8380, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreateParticlePopup::onMode(cocos2d::CCObject* sender) -> decltype(onMode(sender)) {
	using FunctionType = decltype(onMode(sender))(*)(CreateParticlePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5c77e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreateParticlePopup::onOrderSensitive(cocos2d::CCObject* sender) -> decltype(onOrderSensitive(sender)) {
	using FunctionType = decltype(onOrderSensitive(sender))(*)(CreateParticlePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5c6a40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreateParticlePopup::onPage(cocos2d::CCObject* sender) -> decltype(onPage(sender)) {
	using FunctionType = decltype(onPage(sender))(*)(CreateParticlePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5c7a50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreateParticlePopup::onPasteSettings(cocos2d::CCObject* sender) -> decltype(onPasteSettings(sender)) {
	using FunctionType = decltype(onPasteSettings(sender))(*)(CreateParticlePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5c7370, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreateParticlePopup::onPosType(cocos2d::CCObject* sender) -> decltype(onPosType(sender)) {
	using FunctionType = decltype(onPosType(sender))(*)(CreateParticlePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5ca690, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreateParticlePopup::onQuickStart(cocos2d::CCObject* sender) -> decltype(onQuickStart(sender)) {
	using FunctionType = decltype(onQuickStart(sender))(*)(CreateParticlePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5c6bf0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreateParticlePopup::onSelectColor(cocos2d::CCObject* sender) -> decltype(onSelectColor(sender)) {
	using FunctionType = decltype(onSelectColor(sender))(*)(CreateParticlePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5c6e80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreateParticlePopup::onSelectParticleTexture(cocos2d::CCObject* sender) -> decltype(onSelectParticleTexture(sender)) {
	using FunctionType = decltype(onSelectParticleTexture(sender))(*)(CreateParticlePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5c78c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreateParticlePopup::onStartRGBVarSync(cocos2d::CCObject* sender) -> decltype(onStartRGBVarSync(sender)) {
	using FunctionType = decltype(onStartRGBVarSync(sender))(*)(CreateParticlePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5c6a70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreateParticlePopup::onToggleBlending(cocos2d::CCObject* sender) -> decltype(onToggleBlending(sender)) {
	using FunctionType = decltype(onToggleBlending(sender))(*)(CreateParticlePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5c6900, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreateParticlePopup::onTogglePerfLog(cocos2d::CCObject* sender) -> decltype(onTogglePerfLog(sender)) {
	using FunctionType = decltype(onTogglePerfLog(sender))(*)(CreateParticlePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5c8110, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreateParticlePopup::onToggleStartRadiusEqualToEnd(cocos2d::CCObject* sender) -> decltype(onToggleStartRadiusEqualToEnd(sender)) {
	using FunctionType = decltype(onToggleStartRadiusEqualToEnd(sender))(*)(CreateParticlePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5c6970, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreateParticlePopup::onToggleStartRotationIsDir(cocos2d::CCObject* sender) -> decltype(onToggleStartRotationIsDir(sender)) {
	using FunctionType = decltype(onToggleStartRotationIsDir(sender))(*)(CreateParticlePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5c69d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreateParticlePopup::onToggleStartSizeEqualToEnd(cocos2d::CCObject* sender) -> decltype(onToggleStartSizeEqualToEnd(sender)) {
	using FunctionType = decltype(onToggleStartSizeEqualToEnd(sender))(*)(CreateParticlePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5c6940, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreateParticlePopup::onToggleStartSpinEqualToEnd(cocos2d::CCObject* sender) -> decltype(onToggleStartSpinEqualToEnd(sender)) {
	using FunctionType = decltype(onToggleStartSpinEqualToEnd(sender))(*)(CreateParticlePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5c69a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreateParticlePopup::onUniformColor(cocos2d::CCObject* sender) -> decltype(onUniformColor(sender)) {
	using FunctionType = decltype(onUniformColor(sender))(*)(CreateParticlePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5c6da0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreateParticlePopup::particleValueIsInt(gjParticleValue type) -> decltype(particleValueIsInt(type)) {
	using FunctionType = decltype(particleValueIsInt(type))(*)(CreateParticlePopup*, gjParticleValue);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5ca470, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, type);
}

auto CreateParticlePopup::sliderChanged(cocos2d::CCObject* sender) -> decltype(sliderChanged(sender)) {
	using FunctionType = decltype(sliderChanged(sender))(*)(CreateParticlePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5ca3c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CreateParticlePopup::titleForParticleValue(gjParticleValue type) -> decltype(titleForParticleValue(type)) {
	using FunctionType = decltype(titleForParticleValue(type))(*)(CreateParticlePopup*, gjParticleValue);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5c8490, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, type);
}

auto CreateParticlePopup::toggleGravityMode(bool gravityMode) -> decltype(toggleGravityMode(gravityMode)) {
	using FunctionType = decltype(toggleGravityMode(gravityMode))(*)(CreateParticlePopup*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5ca790, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, gravityMode);
}

auto CreateParticlePopup::updateInputNodeStringForType(gjParticleValue type) -> decltype(updateInputNodeStringForType(type)) {
	using FunctionType = decltype(updateInputNodeStringForType(type))(*)(CreateParticlePopup*, gjParticleValue);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5ca4e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, type);
}

auto CreateParticlePopup::updateParticleValueForType(float value, gjParticleValue type, cocos2d::CCParticleSystemQuad* particle) -> decltype(updateParticleValueForType(value, type, particle)) {
	using FunctionType = decltype(updateParticleValueForType(value, type, particle))(*)(CreateParticlePopup*, float, gjParticleValue, cocos2d::CCParticleSystemQuad*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5c95e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, value, type, particle);
}

auto CreateParticlePopup::updateSliderForType(gjParticleValue type) -> decltype(updateSliderForType(type)) {
	using FunctionType = decltype(updateSliderForType(type))(*)(CreateParticlePopup*, gjParticleValue);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5ca250, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, type);
}

auto CreateParticlePopup::valueForParticleValue(gjParticleValue type) -> decltype(valueForParticleValue(type)) {
	using FunctionType = decltype(valueForParticleValue(type))(*)(CreateParticlePopup*, gjParticleValue);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5c8d60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, type);
}

auto CreateParticlePopup::willClose() -> decltype(willClose()) {
	using FunctionType = decltype(willClose())(*)(CreateParticlePopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5caa00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

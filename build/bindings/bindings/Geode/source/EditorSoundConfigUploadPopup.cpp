
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/EditorSoundConfigUploadPopup.hpp>

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

EditorSoundConfigUploadPopup::~EditorSoundConfigUploadPopup() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(EditorSoundConfigUploadPopup*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x19a690, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) EditorSoundConfigUploadPopup(geode::CutoffConstructor, sizeof(EditorSoundConfigUploadPopup));
		geode::DestructorLock::addLock(this);
	}
}

auto EditorSoundConfigUploadPopup::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&EditorSoundConfigUploadPopup::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(EditorSoundConfigUploadPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x19c230, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto EditorSoundConfigUploadPopup::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&EditorSoundConfigUploadPopup::onClose), this);
	using FunctionType = decltype(onClose(sender))(*)(EditorSoundConfigUploadPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x19c250, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto EditorSoundConfigUploadPopup::uploadEditorSoundFinished(int p0) -> decltype(uploadEditorSoundFinished(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&EditorSoundConfigUploadPopup::uploadEditorSoundFinished), this);
	using FunctionType = decltype(uploadEditorSoundFinished(p0))(*)(EditorSoundConfigUploadPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x19c330, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto EditorSoundConfigUploadPopup::uploadEditorSoundFailed(int p0) -> decltype(uploadEditorSoundFailed(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&EditorSoundConfigUploadPopup::uploadEditorSoundFailed), this);
	using FunctionType = decltype(uploadEditorSoundFailed(p0))(*)(EditorSoundConfigUploadPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x19c620, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto EditorSoundConfigUploadPopup::init(GJEditorSoundConfig* p0, EditorSoundConfigInfoLayer* p1) -> decltype(init(p0, p1)) {
	using FunctionType = decltype(init(p0, p1))(*)(EditorSoundConfigUploadPopup*, GJEditorSoundConfig*, EditorSoundConfigInfoLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x19a7d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}

auto EditorSoundConfigUploadPopup::onCancel(cocos2d::CCObject* sender) -> decltype(onCancel(sender)) {
	using FunctionType = decltype(onCancel(sender))(*)(EditorSoundConfigUploadPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x46360, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorSoundConfigUploadPopup::onToggleFriendsOnly(cocos2d::CCObject* sender) -> decltype(onToggleFriendsOnly(sender)) {
	using FunctionType = decltype(onToggleFriendsOnly(sender))(*)(EditorSoundConfigUploadPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x19bc80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorSoundConfigUploadPopup::onToggleUnlisted(cocos2d::CCObject* sender) -> decltype(onToggleUnlisted(sender)) {
	using FunctionType = decltype(onToggleUnlisted(sender))(*)(EditorSoundConfigUploadPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x19ba70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorSoundConfigUploadPopup::onUpload(cocos2d::CCObject* sender) -> decltype(onUpload(sender)) {
	using FunctionType = decltype(onUpload(sender))(*)(EditorSoundConfigUploadPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x19b860, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorSoundConfigUploadPopup::onUploadAsUpdate(cocos2d::CCObject* sender) -> decltype(onUploadAsUpdate(sender)) {
	using FunctionType = decltype(onUploadAsUpdate(sender))(*)(EditorSoundConfigUploadPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x19b880, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorSoundConfigUploadPopup::performUpload(int p0) -> decltype(performUpload(p0)) {
	using FunctionType = decltype(performUpload(p0))(*)(EditorSoundConfigUploadPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x19bca0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

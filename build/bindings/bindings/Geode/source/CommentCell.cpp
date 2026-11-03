
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/CommentCell.hpp>

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

CommentCell::CommentCell(char const* identifier, float width, float height) : CommentCell(geode::CutoffConstructor, sizeof(CommentCell)) {
	// here we construct it as normal as we can, then destruct it
	// using the generated functions. this ensures no memory gets leaked
	// no crashes :pray:
	geode::DestructorLock::addLock(this);
	CommentCell::~CommentCell();

	using FunctionType = void(*)(CommentCell*, char const*, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x151dc0, tulip::hook::TulipConvention::Thiscall);
	reinterpret_cast<FunctionType>(func)(this, identifier, width, height);
}

auto CommentCell::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&CommentCell::init), this);
	using FunctionType = decltype(init())(*)(CommentCell*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x151e70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto CommentCell::draw() -> decltype(draw()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&CommentCell::draw), this);
	using FunctionType = decltype(draw())(*)(CommentCell*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1487a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto CommentCell::likedItem(LikeItemType type, int id, bool liked) -> decltype(likedItem(type, id, liked)) {
	auto self = addresser::thunkAdjust(Resolve<LikeItemType, int, bool>::func(&CommentCell::likedItem), this);
	using FunctionType = decltype(likedItem(type, id, liked))(*)(CommentCell*, LikeItemType, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x154a90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, type, id, liked);
}

auto CommentCell::FLAlert_Clicked(FLAlertLayer* layer, bool btn2) -> decltype(FLAlert_Clicked(layer, btn2)) {
	auto self = addresser::thunkAdjust(Resolve<FLAlertLayer*, bool>::func(&CommentCell::FLAlert_Clicked), this);
	using FunctionType = decltype(FLAlert_Clicked(layer, btn2))(*)(CommentCell*, FLAlertLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x154f10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, layer, btn2);
}

auto CommentCell::loadFromComment(GJComment* comment) -> decltype(loadFromComment(comment)) {
	using FunctionType = decltype(loadFromComment(comment))(*)(CommentCell*, GJComment*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x151ea0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, comment);
}

auto CommentCell::onBulkSelectToggle(cocos2d::CCObject* sender) -> decltype(onBulkSelectToggle(sender)) {
	using FunctionType = decltype(onBulkSelectToggle(sender))(*)(CommentCell*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x154850, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CommentCell::onConfirmDelete(cocos2d::CCObject* sender) -> decltype(onConfirmDelete(sender)) {
	using FunctionType = decltype(onConfirmDelete(sender))(*)(CommentCell*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x154b90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CommentCell::onGoToLevel(cocos2d::CCObject* sender) -> decltype(onGoToLevel(sender)) {
	using FunctionType = decltype(onGoToLevel(sender))(*)(CommentCell*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1550d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CommentCell::onLike(cocos2d::CCObject* sender) -> decltype(onLike(sender)) {
	using FunctionType = decltype(onLike(sender))(*)(CommentCell*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1548c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CommentCell::onMoreOptions(cocos2d::CCObject* sender) -> decltype(onMoreOptions(sender)) {
	using FunctionType = decltype(onMoreOptions(sender))(*)(CommentCell*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x154d10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CommentCell::onUnhide(cocos2d::CCObject* sender) -> decltype(onUnhide(sender)) {
	using FunctionType = decltype(onUnhide(sender))(*)(CommentCell*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1550b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CommentCell::onViewProfile(cocos2d::CCObject* sender) -> decltype(onViewProfile(sender)) {
	using FunctionType = decltype(onViewProfile(sender))(*)(CommentCell*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x154cd0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto CommentCell::updateLabelValues() -> decltype(updateLabelValues()) {
	using FunctionType = decltype(updateLabelValues())(*)(CommentCell*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x154ad0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

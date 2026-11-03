
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/TableView.hpp>

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

auto TableView::onEnter() -> decltype(onEnter()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&TableView::onEnter), this);
	using FunctionType = decltype(onEnter())(*)(TableView*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5bcf0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto TableView::onExit() -> decltype(onExit()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&TableView::onExit), this);
	using FunctionType = decltype(onExit())(*)(TableView*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x88210, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto TableView::ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchBegan(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&TableView::ccTouchBegan), this);
	using FunctionType = decltype(ccTouchBegan(touch, event))(*)(TableView*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x88220, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto TableView::ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchMoved(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&TableView::ccTouchMoved), this);
	using FunctionType = decltype(ccTouchMoved(touch, event))(*)(TableView*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x884d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto TableView::ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchEnded(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&TableView::ccTouchEnded), this);
	using FunctionType = decltype(ccTouchEnded(touch, event))(*)(TableView*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x883f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto TableView::ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchCancelled(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&TableView::ccTouchCancelled), this);
	using FunctionType = decltype(ccTouchCancelled(touch, event))(*)(TableView*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x88450, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto TableView::registerWithTouchDispatcher() -> decltype(registerWithTouchDispatcher()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&TableView::registerWithTouchDispatcher), this);
	using FunctionType = decltype(registerWithTouchDispatcher())(*)(TableView*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x41f30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto TableView::scrollWheel(float y, float x) -> decltype(scrollWheel(y, x)) {
	auto self = addresser::thunkAdjust(Resolve<float, float>::func(&TableView::scrollWheel), this);
	using FunctionType = decltype(scrollWheel(y, x))(*)(TableView*, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x88aa0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, y, x);
}

auto TableView::checkBoundaryOfCell(TableViewCell* cell) -> decltype(checkBoundaryOfCell(cell)) {
	using FunctionType = decltype(checkBoundaryOfCell(cell))(*)(TableView*, TableViewCell*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x88b50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, cell);
}

auto TableView::checkBoundaryOfCell(cocos2d::CCPoint& position, float height) -> decltype(checkBoundaryOfCell(position, height)) {
	using FunctionType = decltype(checkBoundaryOfCell(position, height))(*)(TableView*, cocos2d::CCPoint&, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x88c70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, position, height);
}

auto TableView::checkBoundaryOfContent(float dt) -> decltype(checkBoundaryOfContent(dt)) {
	using FunctionType = decltype(checkBoundaryOfContent(dt))(*)(TableView*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x88d70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, dt);
}

auto TableView::checkFirstCell(TableViewCell* cell) -> decltype(checkFirstCell(cell)) {
	using FunctionType = decltype(checkFirstCell(cell))(*)(TableView*, TableViewCell*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x89330, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, cell);
}

auto TableView::checkLastCell(TableViewCell* cell) -> decltype(checkLastCell(cell)) {
	using FunctionType = decltype(checkLastCell(cell))(*)(TableView*, TableViewCell*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x895e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, cell);
}

auto TableView::deleteTableViewCell(TableViewCell* cell) -> decltype(deleteTableViewCell(cell)) {
	using FunctionType = decltype(deleteTableViewCell(cell))(*)(TableView*, TableViewCell*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x87a30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, cell);
}

auto TableView::isDuplicateIndexPath(CCIndexPath& path) -> decltype(isDuplicateIndexPath(path)) {
	using FunctionType = decltype(isDuplicateIndexPath(path))(*)(TableView*, CCIndexPath&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x87990, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, path);
}

auto TableView::isDuplicateInVisibleCellArray(CCIndexPath* path) -> decltype(isDuplicateInVisibleCellArray(path)) {
	using FunctionType = decltype(isDuplicateInVisibleCellArray(path))(*)(TableView*, CCIndexPath*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x87900, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, path);
}

auto TableView::reloadData() -> decltype(reloadData()) {
	using FunctionType = decltype(reloadData())(*)(TableView*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x87ce0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto TableView::touchFinish(cocos2d::CCTouch* touch) -> decltype(touchFinish(touch)) {
	using FunctionType = decltype(touchFinish(touch))(*)(TableView*, cocos2d::CCTouch*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x88790, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, touch);
}

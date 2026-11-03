
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/AccountReviewPopup.hpp>

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

AccountReviewPopup::~AccountReviewPopup() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(AccountReviewPopup*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0xaedc0, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) AccountReviewPopup(geode::CutoffConstructor, sizeof(AccountReviewPopup));
		geode::DestructorLock::addLock(this);
	}
}

auto AccountReviewPopup::create(int p0, std::string const& p1, GJUserScore* p2) -> decltype(create(p0, p1, p2)) {
	using FunctionType = decltype(create(p0, p1, p2))(*)(int, std::string const&, GJUserScore*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xaf0b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2);
}

auto AccountReviewPopup::rebuildContent() -> decltype(rebuildContent()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AccountReviewPopup::rebuildContent), this);
	using FunctionType = decltype(rebuildContent())(*)(AccountReviewPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xb33c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AccountReviewPopup::requestPage(int p0) -> decltype(requestPage(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&AccountReviewPopup::requestPage), this);
	using FunctionType = decltype(requestPage(p0))(*)(AccountReviewPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xb3200, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto AccountReviewPopup::clearPageContent() -> decltype(clearPageContent()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AccountReviewPopup::clearPageContent), this);
	using FunctionType = decltype(clearPageContent())(*)(AccountReviewPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xb32d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AccountReviewPopup::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&AccountReviewPopup::onClose), this);
	using FunctionType = decltype(onClose(sender))(*)(AccountReviewPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xaf060, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto AccountReviewPopup::dropdownSelectionChanged(Dropdown* p0, int p1) -> decltype(dropdownSelectionChanged(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<Dropdown*, int>::func(&AccountReviewPopup::dropdownSelectionChanged), this);
	using FunctionType = decltype(dropdownSelectionChanged(p0, p1))(*)(AccountReviewPopup*, Dropdown*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xb34a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto AccountReviewPopup::reviewChoicePicked(int p0, int p1, std::string const& p2) -> decltype(reviewChoicePicked(p0, p1, p2)) {
	auto self = addresser::thunkAdjust(Resolve<int, int, std::string const&>::func(&AccountReviewPopup::reviewChoicePicked), this);
	using FunctionType = decltype(reviewChoicePicked(p0, p1, p2))(*)(AccountReviewPopup*, int, int, std::string const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xba500, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1, p2);
}

auto AccountReviewPopup::adminActionConfirmed(int p0, std::vector<int> const& p1, std::string const& p2) -> decltype(adminActionConfirmed(p0, p1, p2)) {
	auto self = addresser::thunkAdjust(Resolve<int, std::vector<int> const&, std::string const&>::func(&AccountReviewPopup::adminActionConfirmed), this);
	using FunctionType = decltype(adminActionConfirmed(p0, p1, p2))(*)(AccountReviewPopup*, int, std::vector<int> const&, std::string const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xbc670, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1, p2);
}

auto AccountReviewPopup::FLAlert_Clicked(FLAlertLayer* p0, bool p1) -> decltype(FLAlert_Clicked(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<FLAlertLayer*, bool>::func(&AccountReviewPopup::FLAlert_Clicked), this);
	using FunctionType = decltype(FLAlert_Clicked(p0, p1))(*)(AccountReviewPopup*, FLAlertLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xbb0e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto AccountReviewPopup::onClosePopup(UploadActionPopup* p0) -> decltype(onClosePopup(p0)) {
	auto self = addresser::thunkAdjust(Resolve<UploadActionPopup*>::func(&AccountReviewPopup::onClosePopup), this);
	using FunctionType = decltype(onClosePopup(p0))(*)(AccountReviewPopup*, UploadActionPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xbcaa0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto AccountReviewPopup::commentDeleteFailed(int p0, int p1) -> decltype(commentDeleteFailed(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&AccountReviewPopup::commentDeleteFailed), this);
	using FunctionType = decltype(commentDeleteFailed(p0, p1))(*)(AccountReviewPopup*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xbbbb0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto AccountReviewPopup::threadUpdateFinished(int p0, int p1) -> decltype(threadUpdateFinished(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&AccountReviewPopup::threadUpdateFinished), this);
	using FunctionType = decltype(threadUpdateFinished(p0, p1))(*)(AccountReviewPopup*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xbbb60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto AccountReviewPopup::threadUpdateFailed(int p0, int p1) -> decltype(threadUpdateFailed(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&AccountReviewPopup::threadUpdateFailed), this);
	using FunctionType = decltype(threadUpdateFailed(p0, p1))(*)(AccountReviewPopup*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xbbb80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto AccountReviewPopup::adminAccountReviewFinished(int p0, AccountReviewCard const& p1) -> decltype(adminAccountReviewFinished(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<int, AccountReviewCard const&>::func(&AccountReviewPopup::adminAccountReviewFinished), this);
	using FunctionType = decltype(adminAccountReviewFinished(p0, p1))(*)(AccountReviewPopup*, int, AccountReviewCard const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xb0a30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto AccountReviewPopup::adminAccountReviewFailed(int p0) -> decltype(adminAccountReviewFailed(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&AccountReviewPopup::adminAccountReviewFailed), this);
	using FunctionType = decltype(adminAccountReviewFailed(p0))(*)(AccountReviewPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xb0d40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto AccountReviewPopup::adminReportedContentFinished(int p0, cocos2d::CCArray* p1, AdminReportedMeta const& p2) -> decltype(adminReportedContentFinished(p0, p1, p2)) {
	auto self = addresser::thunkAdjust(Resolve<int, cocos2d::CCArray*, AdminReportedMeta const&>::func(&AccountReviewPopup::adminReportedContentFinished), this);
	using FunctionType = decltype(adminReportedContentFinished(p0, p1, p2))(*)(AccountReviewPopup*, int, cocos2d::CCArray*, AdminReportedMeta const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xb3620, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1, p2);
}

auto AccountReviewPopup::adminReportedContentFailed(int p0) -> decltype(adminReportedContentFailed(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&AccountReviewPopup::adminReportedContentFailed), this);
	using FunctionType = decltype(adminReportedContentFailed(p0))(*)(AccountReviewPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xb37d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto AccountReviewPopup::adminAbuseInfoFinished(int p0, cocos2d::CCArray* p1, AdminAbuseMeta const& p2) -> decltype(adminAbuseInfoFinished(p0, p1, p2)) {
	auto self = addresser::thunkAdjust(Resolve<int, cocos2d::CCArray*, AdminAbuseMeta const&>::func(&AccountReviewPopup::adminAbuseInfoFinished), this);
	using FunctionType = decltype(adminAbuseInfoFinished(p0, p1, p2))(*)(AccountReviewPopup*, int, cocos2d::CCArray*, AdminAbuseMeta const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xb3840, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1, p2);
}

auto AccountReviewPopup::adminAbuseInfoFailed(int p0) -> decltype(adminAbuseInfoFailed(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&AccountReviewPopup::adminAbuseInfoFailed), this);
	using FunctionType = decltype(adminAbuseInfoFailed(p0))(*)(AccountReviewPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xb39a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto AccountReviewPopup::adminUserHistoryFinished(int p0, cocos2d::CCArray* p1, int p2, int p3, int p4) -> decltype(adminUserHistoryFinished(p0, p1, p2, p3, p4)) {
	auto self = addresser::thunkAdjust(Resolve<int, cocos2d::CCArray*, int, int, int>::func(&AccountReviewPopup::adminUserHistoryFinished), this);
	using FunctionType = decltype(adminUserHistoryFinished(p0, p1, p2, p3, p4))(*)(AccountReviewPopup*, int, cocos2d::CCArray*, int, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xb3a10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1, p2, p3, p4);
}

auto AccountReviewPopup::adminUserHistoryFailed(int p0) -> decltype(adminUserHistoryFailed(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&AccountReviewPopup::adminUserHistoryFailed), this);
	using FunctionType = decltype(adminUserHistoryFailed(p0))(*)(AccountReviewPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xb3b40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto AccountReviewPopup::adminClearReportsFinished(int p0, int p1) -> decltype(adminClearReportsFinished(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&AccountReviewPopup::adminClearReportsFinished), this);
	using FunctionType = decltype(adminClearReportsFinished(p0, p1))(*)(AccountReviewPopup*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xbaab0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto AccountReviewPopup::adminClearReportsFailed(int p0) -> decltype(adminClearReportsFailed(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&AccountReviewPopup::adminClearReportsFailed), this);
	using FunctionType = decltype(adminClearReportsFailed(p0))(*)(AccountReviewPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xbad10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto AccountReviewPopup::adminDeleteCommentsFinished(int p0) -> decltype(adminDeleteCommentsFinished(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&AccountReviewPopup::adminDeleteCommentsFinished), this);
	using FunctionType = decltype(adminDeleteCommentsFinished(p0))(*)(AccountReviewPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xbc8b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto AccountReviewPopup::adminDeleteCommentsFailed() -> decltype(adminDeleteCommentsFailed()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AccountReviewPopup::adminDeleteCommentsFailed), this);
	using FunctionType = decltype(adminDeleteCommentsFailed())(*)(AccountReviewPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xbc9f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AccountReviewPopup::adminCloseCaseFinished(int p0, int p1, bool p2) -> decltype(adminCloseCaseFinished(p0, p1, p2)) {
	auto self = addresser::thunkAdjust(Resolve<int, int, bool>::func(&AccountReviewPopup::adminCloseCaseFinished), this);
	using FunctionType = decltype(adminCloseCaseFinished(p0, p1, p2))(*)(AccountReviewPopup*, int, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xbcb90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1, p2);
}

auto AccountReviewPopup::adminCloseCaseFailed(int p0) -> decltype(adminCloseCaseFailed(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&AccountReviewPopup::adminCloseCaseFailed), this);
	using FunctionType = decltype(adminCloseCaseFailed(p0))(*)(AccountReviewPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xbcf70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto AccountReviewPopup::buildDirectReportRow(cocos2d::CCNode* p0, float p1) -> decltype(buildDirectReportRow(p0, p1)) {
	using FunctionType = decltype(buildDirectReportRow(p0, p1))(*)(AccountReviewPopup*, cocos2d::CCNode*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xb3bb0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}

auto AccountReviewPopup::buildFilterRows(cocos2d::CCArray* p0) -> decltype(buildFilterRows(p0)) {
	using FunctionType = decltype(buildFilterRows(p0))(*)(AccountReviewPopup*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xb5920, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto AccountReviewPopup::buildReportedRows(cocos2d::CCArray* p0) -> decltype(buildReportedRows(p0)) {
	using FunctionType = decltype(buildReportedRows(p0))(*)(AccountReviewPopup*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xb4100, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto AccountReviewPopup::clearCard() -> decltype(clearCard()) {
	using FunctionType = decltype(clearCard())(*)(AccountReviewPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xb0e50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto AccountReviewPopup::confirmDeleteSelected() -> decltype(confirmDeleteSelected()) {
	using FunctionType = decltype(confirmDeleteSelected())(*)(AccountReviewPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xb9440, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto AccountReviewPopup::deleteEntry(int p0) -> decltype(deleteEntry(p0)) {
	using FunctionType = decltype(deleteEntry(p0))(*)(AccountReviewPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xbb850, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto AccountReviewPopup::init(int p0, std::string const& p1, GJUserScore* p2) -> decltype(init(p0, p1, p2)) {
	using FunctionType = decltype(init(p0, p1, p2))(*)(AccountReviewPopup*, int, std::string const&, GJUserScore*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xaf480, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2);
}

auto AccountReviewPopup::onBans(cocos2d::CCObject* sender) -> decltype(onBans(sender)) {
	using FunctionType = decltype(onBans(sender))(*)(AccountReviewPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xb96d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto AccountReviewPopup::onCommentHistory(cocos2d::CCObject* sender) -> decltype(onCommentHistory(sender)) {
	using FunctionType = decltype(onCommentHistory(sender))(*)(AccountReviewPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xb9af0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto AccountReviewPopup::onCopyAccountID(cocos2d::CCObject* sender) -> decltype(onCopyAccountID(sender)) {
	using FunctionType = decltype(onCopyAccountID(sender))(*)(AccountReviewPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xb34f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto AccountReviewPopup::onDeleteFilterRow(cocos2d::CCObject* sender) -> decltype(onDeleteFilterRow(sender)) {
	using FunctionType = decltype(onDeleteFilterRow(sender))(*)(AccountReviewPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xbc240, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto AccountReviewPopup::onDeleteMenu(cocos2d::CCObject* sender) -> decltype(onDeleteMenu(sender)) {
	using FunctionType = decltype(onDeleteMenu(sender))(*)(AccountReviewPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xb88f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto AccountReviewPopup::onDeleteRow(cocos2d::CCObject* sender) -> decltype(onDeleteRow(sender)) {
	using FunctionType = decltype(onDeleteRow(sender))(*)(AccountReviewPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xbae00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto AccountReviewPopup::onDeleteSelected(cocos2d::CCObject* sender) -> decltype(onDeleteSelected(sender)) {
	using FunctionType = decltype(onDeleteSelected(sender))(*)(AccountReviewPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xb96c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto AccountReviewPopup::onDone(cocos2d::CCObject* sender) -> decltype(onDone(sender)) {
	using FunctionType = decltype(onDone(sender))(*)(AccountReviewPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xb9b70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto AccountReviewPopup::onHistoryJump(cocos2d::CCObject* sender) -> decltype(onHistoryJump(sender)) {
	using FunctionType = decltype(onHistoryJump(sender))(*)(AccountReviewPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xbbce0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto AccountReviewPopup::onJumpFilterRow(cocos2d::CCObject* sender) -> decltype(onJumpFilterRow(sender)) {
	using FunctionType = decltype(onJumpFilterRow(sender))(*)(AccountReviewPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xbc030, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto AccountReviewPopup::onJumpRow(cocos2d::CCObject* sender) -> decltype(onJumpRow(sender)) {
	using FunctionType = decltype(onJumpRow(sender))(*)(AccountReviewPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xbbd40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto AccountReviewPopup::onModActionTaken(cocos2d::CCObject* sender) -> decltype(onModActionTaken(sender)) {
	using FunctionType = decltype(onModActionTaken(sender))(*)(AccountReviewPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xb33a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto AccountReviewPopup::onNotes(cocos2d::CCObject* sender) -> decltype(onNotes(sender)) {
	using FunctionType = decltype(onNotes(sender))(*)(AccountReviewPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xb9a70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto AccountReviewPopup::onOpenProfile(cocos2d::CCObject* sender) -> decltype(onOpenProfile(sender)) {
	using FunctionType = decltype(onOpenProfile(sender))(*)(AccountReviewPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xb34c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto AccountReviewPopup::onSelectAll(cocos2d::CCObject* sender) -> decltype(onSelectAll(sender)) {
	using FunctionType = decltype(onSelectAll(sender))(*)(AccountReviewPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xb8680, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto AccountReviewPopup::onTab(cocos2d::CCObject* sender) -> decltype(onTab(sender)) {
	using FunctionType = decltype(onTab(sender))(*)(AccountReviewPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xb3000, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto AccountReviewPopup::onToggleHistory(cocos2d::CCObject* sender) -> decltype(onToggleHistory(sender)) {
	using FunctionType = decltype(onToggleHistory(sender))(*)(AccountReviewPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xb3450, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto AccountReviewPopup::onToggleRow(cocos2d::CCObject* sender) -> decltype(onToggleRow(sender)) {
	using FunctionType = decltype(onToggleRow(sender))(*)(AccountReviewPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xb87c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto AccountReviewPopup::selectTab(int p0) -> decltype(selectTab(p0)) {
	using FunctionType = decltype(selectTab(p0))(*)(AccountReviewPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xb3030, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto AccountReviewPopup::updateCard(AccountReviewCard const& p0) -> decltype(updateCard(p0)) {
	using FunctionType = decltype(updateCard(p0))(*)(AccountReviewPopup*, AccountReviewCard const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xb0f30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto AccountReviewPopup::viewedByLabel(std::string const& p0, std::string const& p1, float p2) -> decltype(viewedByLabel(p0, p1, p2)) {
	using FunctionType = decltype(viewedByLabel(p0, p1, p2))(*)(AccountReviewPopup*, std::string const&, std::string const&, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xaf3a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2);
}

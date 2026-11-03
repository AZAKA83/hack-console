#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/DeathTrackerPopup.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_ccTouchBegan
		#define GEODE_STATICS_ccTouchBegan
		GEODE_AS_STATIC_FUNCTION(ccTouchBegan) 
	#endif

	#ifndef GEODE_STATICS_ccTouchMoved
		#define GEODE_STATICS_ccTouchMoved
		GEODE_AS_STATIC_FUNCTION(ccTouchMoved) 
	#endif

	#ifndef GEODE_STATICS_ccTouchEnded
		#define GEODE_STATICS_ccTouchEnded
		GEODE_AS_STATIC_FUNCTION(ccTouchEnded) 
	#endif

	#ifndef GEODE_STATICS_ccTouchCancelled
		#define GEODE_STATICS_ccTouchCancelled
		GEODE_AS_STATIC_FUNCTION(ccTouchCancelled) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_keyDown
		#define GEODE_STATICS_keyDown
		GEODE_AS_STATIC_FUNCTION(keyDown) 
	#endif

	#ifndef GEODE_STATICS_show
		#define GEODE_STATICS_show
		GEODE_AS_STATIC_FUNCTION(show) 
	#endif

	#ifndef GEODE_STATICS_setIDPopupClosed
		#define GEODE_STATICS_setIDPopupClosed
		GEODE_AS_STATIC_FUNCTION(setIDPopupClosed) 
	#endif

	#ifndef GEODE_STATICS_virtualRowCount
		#define GEODE_STATICS_virtualRowCount
		GEODE_AS_STATIC_FUNCTION(virtualRowCount) 
	#endif

	#ifndef GEODE_STATICS_virtualRowHeight
		#define GEODE_STATICS_virtualRowHeight
		GEODE_AS_STATIC_FUNCTION(virtualRowHeight) 
	#endif

	#ifndef GEODE_STATICS_mountVirtualRow
		#define GEODE_STATICS_mountVirtualRow
		GEODE_AS_STATIC_FUNCTION(mountVirtualRow) 
	#endif

	#ifndef GEODE_STATICS_addRow
		#define GEODE_STATICS_addRow
		GEODE_AS_STATIC_FUNCTION(addRow) 
	#endif

	#ifndef GEODE_STATICS_buildAttemptLine
		#define GEODE_STATICS_buildAttemptLine
		GEODE_AS_STATIC_FUNCTION(buildAttemptLine) 
	#endif

	#ifndef GEODE_STATICS_buildHistory
		#define GEODE_STATICS_buildHistory
		GEODE_AS_STATIC_FUNCTION(buildHistory) 
	#endif

	#ifndef GEODE_STATICS_buildList
		#define GEODE_STATICS_buildList
		GEODE_AS_STATIC_FUNCTION(buildList) 
	#endif

	#ifndef GEODE_STATICS_buildStatRow
		#define GEODE_STATICS_buildStatRow
		GEODE_AS_STATIC_FUNCTION(buildStatRow) 
	#endif

	#ifndef GEODE_STATICS_countsForScope
		#define GEODE_STATICS_countsForScope
		GEODE_AS_STATIC_FUNCTION(countsForScope) 
	#endif

	#ifndef GEODE_STATICS_dtScrollKey
		#define GEODE_STATICS_dtScrollKey
		GEODE_AS_STATIC_FUNCTION(dtScrollKey) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onJumpCurrent
		#define GEODE_STATICS_onJumpCurrent
		GEODE_AS_STATIC_FUNCTION(onJumpCurrent) 
	#endif

	#ifndef GEODE_STATICS_onJumpSession
		#define GEODE_STATICS_onJumpSession
		GEODE_AS_STATIC_FUNCTION(onJumpSession) 
	#endif

	#ifndef GEODE_STATICS_onJumpSummary
		#define GEODE_STATICS_onJumpSummary
		GEODE_AS_STATIC_FUNCTION(onJumpSummary) 
	#endif

	#ifndef GEODE_STATICS_onNextSession
		#define GEODE_STATICS_onNextSession
		GEODE_AS_STATIC_FUNCTION(onNextSession) 
	#endif

	#ifndef GEODE_STATICS_onOptions
		#define GEODE_STATICS_onOptions
		GEODE_AS_STATIC_FUNCTION(onOptions) 
	#endif

	#ifndef GEODE_STATICS_onPanelButton
		#define GEODE_STATICS_onPanelButton
		GEODE_AS_STATIC_FUNCTION(onPanelButton) 
	#endif

	#ifndef GEODE_STATICS_onPrevSession
		#define GEODE_STATICS_onPrevSession
		GEODE_AS_STATIC_FUNCTION(onPrevSession) 
	#endif

	#ifndef GEODE_STATICS_onToggleGlobal
		#define GEODE_STATICS_onToggleGlobal
		GEODE_AS_STATIC_FUNCTION(onToggleGlobal) 
	#endif

	#ifndef GEODE_STATICS_parseGlobal
		#define GEODE_STATICS_parseGlobal
		GEODE_AS_STATIC_FUNCTION(parseGlobal) 
	#endif

	#ifndef GEODE_STATICS_parseSessions
		#define GEODE_STATICS_parseSessions
		GEODE_AS_STATIC_FUNCTION(parseSessions) 
	#endif

	#ifndef GEODE_STATICS_refreshGlobal
		#define GEODE_STATICS_refreshGlobal
		GEODE_AS_STATIC_FUNCTION(refreshGlobal) 
	#endif

	#ifndef GEODE_STATICS_refreshView
		#define GEODE_STATICS_refreshView
		GEODE_AS_STATIC_FUNCTION(refreshView) 
	#endif

	#ifndef GEODE_STATICS_setView
		#define GEODE_STATICS_setView
		GEODE_AS_STATIC_FUNCTION(setView) 
	#endif

	#ifndef GEODE_STATICS_updatePanel
		#define GEODE_STATICS_updatePanel
		GEODE_AS_STATIC_FUNCTION(updatePanel) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchBegan
		#define GEODE_CONCEPT_CHECK_ccTouchBegan
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchBegan) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchMoved
		#define GEODE_CONCEPT_CHECK_ccTouchMoved
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchMoved) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchEnded
		#define GEODE_CONCEPT_CHECK_ccTouchEnded
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchEnded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchCancelled
		#define GEODE_CONCEPT_CHECK_ccTouchCancelled
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchCancelled) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyDown
		#define GEODE_CONCEPT_CHECK_keyDown
		GEODE_CONCEPT_FUNCTION_CHECK(keyDown) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_show
		#define GEODE_CONCEPT_CHECK_show
		GEODE_CONCEPT_FUNCTION_CHECK(show) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setIDPopupClosed
		#define GEODE_CONCEPT_CHECK_setIDPopupClosed
		GEODE_CONCEPT_FUNCTION_CHECK(setIDPopupClosed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_virtualRowCount
		#define GEODE_CONCEPT_CHECK_virtualRowCount
		GEODE_CONCEPT_FUNCTION_CHECK(virtualRowCount) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_virtualRowHeight
		#define GEODE_CONCEPT_CHECK_virtualRowHeight
		GEODE_CONCEPT_FUNCTION_CHECK(virtualRowHeight) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_mountVirtualRow
		#define GEODE_CONCEPT_CHECK_mountVirtualRow
		GEODE_CONCEPT_FUNCTION_CHECK(mountVirtualRow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addRow
		#define GEODE_CONCEPT_CHECK_addRow
		GEODE_CONCEPT_FUNCTION_CHECK(addRow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_buildAttemptLine
		#define GEODE_CONCEPT_CHECK_buildAttemptLine
		GEODE_CONCEPT_FUNCTION_CHECK(buildAttemptLine) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_buildHistory
		#define GEODE_CONCEPT_CHECK_buildHistory
		GEODE_CONCEPT_FUNCTION_CHECK(buildHistory) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_buildList
		#define GEODE_CONCEPT_CHECK_buildList
		GEODE_CONCEPT_FUNCTION_CHECK(buildList) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_buildStatRow
		#define GEODE_CONCEPT_CHECK_buildStatRow
		GEODE_CONCEPT_FUNCTION_CHECK(buildStatRow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_countsForScope
		#define GEODE_CONCEPT_CHECK_countsForScope
		GEODE_CONCEPT_FUNCTION_CHECK(countsForScope) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_dtScrollKey
		#define GEODE_CONCEPT_CHECK_dtScrollKey
		GEODE_CONCEPT_FUNCTION_CHECK(dtScrollKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onJumpCurrent
		#define GEODE_CONCEPT_CHECK_onJumpCurrent
		GEODE_CONCEPT_FUNCTION_CHECK(onJumpCurrent) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onJumpSession
		#define GEODE_CONCEPT_CHECK_onJumpSession
		GEODE_CONCEPT_FUNCTION_CHECK(onJumpSession) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onJumpSummary
		#define GEODE_CONCEPT_CHECK_onJumpSummary
		GEODE_CONCEPT_FUNCTION_CHECK(onJumpSummary) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onNextSession
		#define GEODE_CONCEPT_CHECK_onNextSession
		GEODE_CONCEPT_FUNCTION_CHECK(onNextSession) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onOptions
		#define GEODE_CONCEPT_CHECK_onOptions
		GEODE_CONCEPT_FUNCTION_CHECK(onOptions) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPanelButton
		#define GEODE_CONCEPT_CHECK_onPanelButton
		GEODE_CONCEPT_FUNCTION_CHECK(onPanelButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPrevSession
		#define GEODE_CONCEPT_CHECK_onPrevSession
		GEODE_CONCEPT_FUNCTION_CHECK(onPrevSession) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onToggleGlobal
		#define GEODE_CONCEPT_CHECK_onToggleGlobal
		GEODE_CONCEPT_FUNCTION_CHECK(onToggleGlobal) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_parseGlobal
		#define GEODE_CONCEPT_CHECK_parseGlobal
		GEODE_CONCEPT_FUNCTION_CHECK(parseGlobal) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_parseSessions
		#define GEODE_CONCEPT_CHECK_parseSessions
		GEODE_CONCEPT_FUNCTION_CHECK(parseSessions) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_refreshGlobal
		#define GEODE_CONCEPT_CHECK_refreshGlobal
		GEODE_CONCEPT_FUNCTION_CHECK(refreshGlobal) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_refreshView
		#define GEODE_CONCEPT_CHECK_refreshView
		GEODE_CONCEPT_FUNCTION_CHECK(refreshView) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setView
		#define GEODE_CONCEPT_CHECK_setView
		GEODE_CONCEPT_FUNCTION_CHECK(setView) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updatePanel
		#define GEODE_CONCEPT_CHECK_updatePanel
		GEODE_CONCEPT_FUNCTION_CHECK(updatePanel) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, DeathTrackerPopup> : ModifyBase<ModifyDerive<Der, DeathTrackerPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, DeathTrackerPopup>>;
		using ModifyBase<ModifyDerive<Der, DeathTrackerPopup>>::ModifyBase;
		using Base = DeathTrackerPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x103af0, Thiscall, DeathTrackerPopup)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x104370, Default, DeathTrackerPopup, create, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x10e900, Thiscall, DeathTrackerPopup, ccTouchBegan, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x10eac0, Thiscall, DeathTrackerPopup, ccTouchMoved, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x10eb70, Thiscall, DeathTrackerPopup, ccTouchEnded, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x10ec00, Thiscall, DeathTrackerPopup, ccTouchCancelled, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x10e8c0, Thiscall, DeathTrackerPopup, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x10e8d0, Thiscall, DeathTrackerPopup, keyDown, cocos2d::enumKeyCodes, double)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc39c0, Thiscall, DeathTrackerPopup, show, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x10e600, Thiscall, DeathTrackerPopup, setIDPopupClosed, SetIDPopup*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x10ccc0, Thiscall, DeathTrackerPopup, virtualRowCount, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x10ccf0, Thiscall, DeathTrackerPopup, virtualRowHeight, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x10cd10, Thiscall, DeathTrackerPopup, mountVirtualRow, int, cocos2d::CCNode*, cocos2d::CCMenu*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(DeathTrackerPopup, addRow, cocos2d::CCNode*, std::string const&, float, cocos2d::ccColor3B, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(DeathTrackerPopup, buildAttemptLine, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x10c270, Thiscall, DeathTrackerPopup, buildHistory, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(DeathTrackerPopup, buildList, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x107e10, Thiscall, DeathTrackerPopup, buildStatRow, std::vector<DTStatSeg> const&, cocos2d::CCNode*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(DeathTrackerPopup, countsForScope, std::vector<int>&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(DeathTrackerPopup, dtScrollKey, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1045d0, Thiscall, DeathTrackerPopup, init, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x10e660, Thiscall, DeathTrackerPopup, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x10d890, Thiscall, DeathTrackerPopup, onJumpCurrent, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x10e4c0, Thiscall, DeathTrackerPopup, onJumpSession, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x10e4a0, Thiscall, DeathTrackerPopup, onJumpSummary, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x10d810, Thiscall, DeathTrackerPopup, onNextSession, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x10da80, Thiscall, DeathTrackerPopup, onOptions, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x10de50, Thiscall, DeathTrackerPopup, onPanelButton, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x10d780, Thiscall, DeathTrackerPopup, onPrevSession, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x10d8c0, Thiscall, DeathTrackerPopup, onToggleGlobal, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(DeathTrackerPopup, parseGlobal, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(DeathTrackerPopup, parseSessions, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x108b00, Thiscall, DeathTrackerPopup, refreshGlobal, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x106a10, Thiscall, DeathTrackerPopup, refreshView, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x10dbe0, Thiscall, DeathTrackerPopup, setView, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x10dfb0, Thiscall, DeathTrackerPopup, updatePanel, )
		}
	};
}

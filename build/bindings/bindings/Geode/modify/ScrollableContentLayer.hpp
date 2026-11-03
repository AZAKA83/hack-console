#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/ScrollableContentLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_update
		#define GEODE_STATICS_update
		GEODE_AS_STATIC_FUNCTION(update) 
	#endif

	#ifndef GEODE_STATICS_visit
		#define GEODE_STATICS_visit
		GEODE_AS_STATIC_FUNCTION(visit) 
	#endif

	#ifndef GEODE_STATICS_touchInsideClip
		#define GEODE_STATICS_touchInsideClip
		GEODE_AS_STATIC_FUNCTION(touchInsideClip) 
	#endif

	#ifndef GEODE_STATICS_scrollWheel
		#define GEODE_STATICS_scrollWheel
		GEODE_AS_STATIC_FUNCTION(scrollWheel) 
	#endif

	#ifndef GEODE_STATICS_applyContentPosition
		#define GEODE_STATICS_applyContentPosition
		GEODE_AS_STATIC_FUNCTION(applyContentPosition) 
	#endif

	#ifndef GEODE_STATICS_clampOffset
		#define GEODE_STATICS_clampOffset
		GEODE_AS_STATIC_FUNCTION(clampOffset) 
	#endif

	#ifndef GEODE_STATICS_contentWiped
		#define GEODE_STATICS_contentWiped
		GEODE_AS_STATIC_FUNCTION(contentWiped) 
	#endif

	#ifndef GEODE_STATICS_createOwnedMenu
		#define GEODE_STATICS_createOwnedMenu
		GEODE_AS_STATIC_FUNCTION(createOwnedMenu) 
	#endif

	#ifndef GEODE_STATICS_ensureOwnedContentNode
		#define GEODE_STATICS_ensureOwnedContentNode
		GEODE_AS_STATIC_FUNCTION(ensureOwnedContentNode) 
	#endif

	#ifndef GEODE_STATICS_ensureScrollThumb
		#define GEODE_STATICS_ensureScrollThumb
		GEODE_AS_STATIC_FUNCTION(ensureScrollThumb) 
	#endif

	#ifndef GEODE_STATICS_feedTouchBegan
		#define GEODE_STATICS_feedTouchBegan
		GEODE_AS_STATIC_FUNCTION(feedTouchBegan) 
	#endif

	#ifndef GEODE_STATICS_feedTouchCancelled
		#define GEODE_STATICS_feedTouchCancelled
		GEODE_AS_STATIC_FUNCTION(feedTouchCancelled) 
	#endif

	#ifndef GEODE_STATICS_feedTouchEnded
		#define GEODE_STATICS_feedTouchEnded
		GEODE_AS_STATIC_FUNCTION(feedTouchEnded) 
	#endif

	#ifndef GEODE_STATICS_feedTouchMoved
		#define GEODE_STATICS_feedTouchMoved
		GEODE_AS_STATIC_FUNCTION(feedTouchMoved) 
	#endif

	#ifndef GEODE_STATICS_getOrCreateSection
		#define GEODE_STATICS_getOrCreateSection
		GEODE_AS_STATIC_FUNCTION(getOrCreateSection) 
	#endif

	#ifndef GEODE_STATICS_getOrCreateSectionMenu
		#define GEODE_STATICS_getOrCreateSectionMenu
		GEODE_AS_STATIC_FUNCTION(getOrCreateSectionMenu) 
	#endif

	#ifndef GEODE_STATICS_handleTouchBegan
		#define GEODE_STATICS_handleTouchBegan
		GEODE_AS_STATIC_FUNCTION(handleTouchBegan) 
	#endif

	#ifndef GEODE_STATICS_handleTouchEnded
		#define GEODE_STATICS_handleTouchEnded
		GEODE_AS_STATIC_FUNCTION(handleTouchEnded) 
	#endif

	#ifndef GEODE_STATICS_handleTouchMoved
		#define GEODE_STATICS_handleTouchMoved
		GEODE_AS_STATIC_FUNCTION(handleTouchMoved) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_itemTouchBegan
		#define GEODE_STATICS_itemTouchBegan
		GEODE_AS_STATIC_FUNCTION(itemTouchBegan) 
	#endif

	#ifndef GEODE_STATICS_itemTouchCancelled
		#define GEODE_STATICS_itemTouchCancelled
		GEODE_AS_STATIC_FUNCTION(itemTouchCancelled) 
	#endif

	#ifndef GEODE_STATICS_itemTouchEnded
		#define GEODE_STATICS_itemTouchEnded
		GEODE_AS_STATIC_FUNCTION(itemTouchEnded) 
	#endif

	#ifndef GEODE_STATICS_itemTouchMoved
		#define GEODE_STATICS_itemTouchMoved
		GEODE_AS_STATIC_FUNCTION(itemTouchMoved) 
	#endif

	#ifndef GEODE_STATICS_mountedVirtualRow
		#define GEODE_STATICS_mountedVirtualRow
		GEODE_AS_STATIC_FUNCTION(mountedVirtualRow) 
	#endif

	#ifndef GEODE_STATICS_mountRowSlot
		#define GEODE_STATICS_mountRowSlot
		GEODE_AS_STATIC_FUNCTION(mountRowSlot) 
	#endif

	#ifndef GEODE_STATICS_persistScrollOffset
		#define GEODE_STATICS_persistScrollOffset
		GEODE_AS_STATIC_FUNCTION(persistScrollOffset) 
	#endif

	#ifndef GEODE_STATICS_reloadVirtualRows
		#define GEODE_STATICS_reloadVirtualRows
		GEODE_AS_STATIC_FUNCTION(reloadVirtualRows) 
	#endif

	#ifndef GEODE_STATICS_remountVirtualRow
		#define GEODE_STATICS_remountVirtualRow
		GEODE_AS_STATIC_FUNCTION(remountVirtualRow) 
	#endif

	#ifndef GEODE_STATICS_restoreScrollOffset
		#define GEODE_STATICS_restoreScrollOffset
		GEODE_AS_STATIC_FUNCTION(restoreScrollOffset) 
	#endif

	#ifndef GEODE_STATICS_sectionAddChild
		#define GEODE_STATICS_sectionAddChild
		GEODE_AS_STATIC_FUNCTION(sectionAddChild) 
	#endif

	#ifndef GEODE_STATICS_sectionClear
		#define GEODE_STATICS_sectionClear
		GEODE_AS_STATIC_FUNCTION(sectionClear) 
	#endif

	#ifndef GEODE_STATICS_sectionIndexForY
		#define GEODE_STATICS_sectionIndexForY
		GEODE_AS_STATIC_FUNCTION(sectionIndexForY) 
	#endif

	#ifndef GEODE_STATICS_setForwardedTouchesOnly
		#define GEODE_STATICS_setForwardedTouchesOnly
		GEODE_AS_STATIC_FUNCTION(setForwardedTouchesOnly) 
	#endif

	#ifndef GEODE_STATICS_setHorizontal
		#define GEODE_STATICS_setHorizontal
		GEODE_AS_STATIC_FUNCTION(setHorizontal) 
	#endif

	#ifndef GEODE_STATICS_setSectionHeight
		#define GEODE_STATICS_setSectionHeight
		GEODE_AS_STATIC_FUNCTION(setSectionHeight) 
	#endif

	#ifndef GEODE_STATICS_setThumbColor
		#define GEODE_STATICS_setThumbColor
		GEODE_AS_STATIC_FUNCTION(setThumbColor) 
	#endif

	#ifndef GEODE_STATICS_setThumbOffset
		#define GEODE_STATICS_setThumbOffset
		GEODE_AS_STATIC_FUNCTION(setThumbOffset) 
	#endif

	#ifndef GEODE_STATICS_setThumbOpacity
		#define GEODE_STATICS_setThumbOpacity
		GEODE_AS_STATIC_FUNCTION(setThumbOpacity) 
	#endif

	#ifndef GEODE_STATICS_setVirtualRows
		#define GEODE_STATICS_setVirtualRows
		GEODE_AS_STATIC_FUNCTION(setVirtualRows) 
	#endif

	#ifndef GEODE_STATICS_unmountAllRows
		#define GEODE_STATICS_unmountAllRows
		GEODE_AS_STATIC_FUNCTION(unmountAllRows) 
	#endif

	#ifndef GEODE_STATICS_unmountRowSlot
		#define GEODE_STATICS_unmountRowSlot
		GEODE_AS_STATIC_FUNCTION(unmountRowSlot) 
	#endif

	#ifndef GEODE_STATICS_updateScrollThumb
		#define GEODE_STATICS_updateScrollThumb
		GEODE_AS_STATIC_FUNCTION(updateScrollThumb) 
	#endif

	#ifndef GEODE_STATICS_updateSectionVisibility
		#define GEODE_STATICS_updateSectionVisibility
		GEODE_AS_STATIC_FUNCTION(updateSectionVisibility) 
	#endif

	#ifndef GEODE_STATICS_updateVirtualRows
		#define GEODE_STATICS_updateVirtualRows
		GEODE_AS_STATIC_FUNCTION(updateVirtualRows) 
	#endif

	#ifndef GEODE_STATICS_worldClipRect
		#define GEODE_STATICS_worldClipRect
		GEODE_AS_STATIC_FUNCTION(worldClipRect) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_update
		#define GEODE_CONCEPT_CHECK_update
		GEODE_CONCEPT_FUNCTION_CHECK(update) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_visit
		#define GEODE_CONCEPT_CHECK_visit
		GEODE_CONCEPT_FUNCTION_CHECK(visit) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_touchInsideClip
		#define GEODE_CONCEPT_CHECK_touchInsideClip
		GEODE_CONCEPT_FUNCTION_CHECK(touchInsideClip) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scrollWheel
		#define GEODE_CONCEPT_CHECK_scrollWheel
		GEODE_CONCEPT_FUNCTION_CHECK(scrollWheel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_applyContentPosition
		#define GEODE_CONCEPT_CHECK_applyContentPosition
		GEODE_CONCEPT_FUNCTION_CHECK(applyContentPosition) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_clampOffset
		#define GEODE_CONCEPT_CHECK_clampOffset
		GEODE_CONCEPT_FUNCTION_CHECK(clampOffset) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_consumePendingCancel
		#define GEODE_CONCEPT_CHECK_consumePendingCancel
		GEODE_CONCEPT_FUNCTION_CHECK(consumePendingCancel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_contentWiped
		#define GEODE_CONCEPT_CHECK_contentWiped
		GEODE_CONCEPT_FUNCTION_CHECK(contentWiped) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createOwnedMenu
		#define GEODE_CONCEPT_CHECK_createOwnedMenu
		GEODE_CONCEPT_FUNCTION_CHECK(createOwnedMenu) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ensureOwnedContentNode
		#define GEODE_CONCEPT_CHECK_ensureOwnedContentNode
		GEODE_CONCEPT_FUNCTION_CHECK(ensureOwnedContentNode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ensureScrollThumb
		#define GEODE_CONCEPT_CHECK_ensureScrollThumb
		GEODE_CONCEPT_FUNCTION_CHECK(ensureScrollThumb) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_feedTouchBegan
		#define GEODE_CONCEPT_CHECK_feedTouchBegan
		GEODE_CONCEPT_FUNCTION_CHECK(feedTouchBegan) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_feedTouchCancelled
		#define GEODE_CONCEPT_CHECK_feedTouchCancelled
		GEODE_CONCEPT_FUNCTION_CHECK(feedTouchCancelled) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_feedTouchEnded
		#define GEODE_CONCEPT_CHECK_feedTouchEnded
		GEODE_CONCEPT_FUNCTION_CHECK(feedTouchEnded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_feedTouchMoved
		#define GEODE_CONCEPT_CHECK_feedTouchMoved
		GEODE_CONCEPT_FUNCTION_CHECK(feedTouchMoved) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getOrCreateSection
		#define GEODE_CONCEPT_CHECK_getOrCreateSection
		GEODE_CONCEPT_FUNCTION_CHECK(getOrCreateSection) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getOrCreateSectionMenu
		#define GEODE_CONCEPT_CHECK_getOrCreateSectionMenu
		GEODE_CONCEPT_FUNCTION_CHECK(getOrCreateSectionMenu) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_handleTouchBegan
		#define GEODE_CONCEPT_CHECK_handleTouchBegan
		GEODE_CONCEPT_FUNCTION_CHECK(handleTouchBegan) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_handleTouchCancelled
		#define GEODE_CONCEPT_CHECK_handleTouchCancelled
		GEODE_CONCEPT_FUNCTION_CHECK(handleTouchCancelled) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_handleTouchEnded
		#define GEODE_CONCEPT_CHECK_handleTouchEnded
		GEODE_CONCEPT_FUNCTION_CHECK(handleTouchEnded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_handleTouchMoved
		#define GEODE_CONCEPT_CHECK_handleTouchMoved
		GEODE_CONCEPT_FUNCTION_CHECK(handleTouchMoved) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_itemTouchBegan
		#define GEODE_CONCEPT_CHECK_itemTouchBegan
		GEODE_CONCEPT_FUNCTION_CHECK(itemTouchBegan) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_itemTouchCancelled
		#define GEODE_CONCEPT_CHECK_itemTouchCancelled
		GEODE_CONCEPT_FUNCTION_CHECK(itemTouchCancelled) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_itemTouchEnded
		#define GEODE_CONCEPT_CHECK_itemTouchEnded
		GEODE_CONCEPT_FUNCTION_CHECK(itemTouchEnded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_itemTouchMoved
		#define GEODE_CONCEPT_CHECK_itemTouchMoved
		GEODE_CONCEPT_FUNCTION_CHECK(itemTouchMoved) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_mountedVirtualRow
		#define GEODE_CONCEPT_CHECK_mountedVirtualRow
		GEODE_CONCEPT_FUNCTION_CHECK(mountedVirtualRow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_mountRowSlot
		#define GEODE_CONCEPT_CHECK_mountRowSlot
		GEODE_CONCEPT_FUNCTION_CHECK(mountRowSlot) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_persistScrollOffset
		#define GEODE_CONCEPT_CHECK_persistScrollOffset
		GEODE_CONCEPT_FUNCTION_CHECK(persistScrollOffset) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_reloadVirtualRows
		#define GEODE_CONCEPT_CHECK_reloadVirtualRows
		GEODE_CONCEPT_FUNCTION_CHECK(reloadVirtualRows) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_remountVirtualRow
		#define GEODE_CONCEPT_CHECK_remountVirtualRow
		GEODE_CONCEPT_FUNCTION_CHECK(remountVirtualRow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_restoreScrollOffset
		#define GEODE_CONCEPT_CHECK_restoreScrollOffset
		GEODE_CONCEPT_FUNCTION_CHECK(restoreScrollOffset) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scrollTo
		#define GEODE_CONCEPT_CHECK_scrollTo
		GEODE_CONCEPT_FUNCTION_CHECK(scrollTo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sectionAddChild
		#define GEODE_CONCEPT_CHECK_sectionAddChild
		GEODE_CONCEPT_FUNCTION_CHECK(sectionAddChild) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sectionClear
		#define GEODE_CONCEPT_CHECK_sectionClear
		GEODE_CONCEPT_FUNCTION_CHECK(sectionClear) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sectionIndexForY
		#define GEODE_CONCEPT_CHECK_sectionIndexForY
		GEODE_CONCEPT_FUNCTION_CHECK(sectionIndexForY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setContentHeight
		#define GEODE_CONCEPT_CHECK_setContentHeight
		GEODE_CONCEPT_FUNCTION_CHECK(setContentHeight) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setForwardedTouchesOnly
		#define GEODE_CONCEPT_CHECK_setForwardedTouchesOnly
		GEODE_CONCEPT_FUNCTION_CHECK(setForwardedTouchesOnly) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setHorizontal
		#define GEODE_CONCEPT_CHECK_setHorizontal
		GEODE_CONCEPT_FUNCTION_CHECK(setHorizontal) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setSectionHeight
		#define GEODE_CONCEPT_CHECK_setSectionHeight
		GEODE_CONCEPT_FUNCTION_CHECK(setSectionHeight) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setThumbColor
		#define GEODE_CONCEPT_CHECK_setThumbColor
		GEODE_CONCEPT_FUNCTION_CHECK(setThumbColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setThumbOffset
		#define GEODE_CONCEPT_CHECK_setThumbOffset
		GEODE_CONCEPT_FUNCTION_CHECK(setThumbOffset) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setThumbOpacity
		#define GEODE_CONCEPT_CHECK_setThumbOpacity
		GEODE_CONCEPT_FUNCTION_CHECK(setThumbOpacity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setViewSize
		#define GEODE_CONCEPT_CHECK_setViewSize
		GEODE_CONCEPT_FUNCTION_CHECK(setViewSize) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setVirtualRows
		#define GEODE_CONCEPT_CHECK_setVirtualRows
		GEODE_CONCEPT_FUNCTION_CHECK(setVirtualRows) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unmountAllRows
		#define GEODE_CONCEPT_CHECK_unmountAllRows
		GEODE_CONCEPT_FUNCTION_CHECK(unmountAllRows) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unmountRowSlot
		#define GEODE_CONCEPT_CHECK_unmountRowSlot
		GEODE_CONCEPT_FUNCTION_CHECK(unmountRowSlot) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateScrollThumb
		#define GEODE_CONCEPT_CHECK_updateScrollThumb
		GEODE_CONCEPT_FUNCTION_CHECK(updateScrollThumb) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateSectionVisibility
		#define GEODE_CONCEPT_CHECK_updateSectionVisibility
		GEODE_CONCEPT_FUNCTION_CHECK(updateSectionVisibility) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateVirtualRows
		#define GEODE_CONCEPT_CHECK_updateVirtualRows
		GEODE_CONCEPT_FUNCTION_CHECK(updateVirtualRows) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_worldClipRect
		#define GEODE_CONCEPT_CHECK_worldClipRect
		GEODE_CONCEPT_FUNCTION_CHECK(worldClipRect) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, ScrollableContentLayer> : ModifyBase<ModifyDerive<Der, ScrollableContentLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, ScrollableContentLayer>>;
		using ModifyBase<ModifyDerive<Der, ScrollableContentLayer>>::ModifyBase;
		using Base = ScrollableContentLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x80bf0, Thiscall, ScrollableContentLayer)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x80ef0, Default, ScrollableContentLayer, create, cocos2d::CCSize)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x82040, Thiscall, ScrollableContentLayer, update, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x81e30, Thiscall, ScrollableContentLayer, visit, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x81ea0, Thiscall, ScrollableContentLayer, touchInsideClip, cocos2d::CCPoint const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x81ed0, Thiscall, ScrollableContentLayer, scrollWheel, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x81140, Thiscall, ScrollableContentLayer, applyContentPosition, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x810d0, Thiscall, ScrollableContentLayer, clampOffset, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ScrollableContentLayer, consumePendingCancel, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ScrollableContentLayer, contentWiped, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ScrollableContentLayer, createOwnedMenu, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ScrollableContentLayer, ensureOwnedContentNode, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x81310, Thiscall, ScrollableContentLayer, ensureScrollThumb, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ScrollableContentLayer, feedTouchBegan, cocos2d::CCTouch*, cocos2d::CCEvent*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ScrollableContentLayer, feedTouchCancelled, cocos2d::CCTouch*, cocos2d::CCEvent*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ScrollableContentLayer, feedTouchEnded, cocos2d::CCTouch*, cocos2d::CCEvent*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ScrollableContentLayer, feedTouchMoved, cocos2d::CCTouch*, cocos2d::CCEvent*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ScrollableContentLayer, getOrCreateSection, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ScrollableContentLayer, getOrCreateSectionMenu, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x817b0, Thiscall, ScrollableContentLayer, handleTouchBegan, cocos2d::CCTouch*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ScrollableContentLayer, handleTouchCancelled, cocos2d::CCTouch*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x81c60, Thiscall, ScrollableContentLayer, handleTouchEnded, cocos2d::CCTouch*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x819a0, Thiscall, ScrollableContentLayer, handleTouchMoved, cocos2d::CCTouch*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ScrollableContentLayer, init, cocos2d::CCSize)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ScrollableContentLayer, itemTouchBegan, cocos2d::CCTouch*, cocos2d::CCEvent*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ScrollableContentLayer, itemTouchCancelled, cocos2d::CCTouch*, cocos2d::CCEvent*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ScrollableContentLayer, itemTouchEnded, cocos2d::CCTouch*, cocos2d::CCEvent*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ScrollableContentLayer, itemTouchMoved, cocos2d::CCTouch*, cocos2d::CCEvent*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ScrollableContentLayer, mountedVirtualRow, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ScrollableContentLayer, mountRowSlot, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ScrollableContentLayer, persistScrollOffset, std::string const&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ScrollableContentLayer, reloadVirtualRows, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ScrollableContentLayer, remountVirtualRow, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x81000, Thiscall, ScrollableContentLayer, restoreScrollOffset, std::string const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ScrollableContentLayer, scrollTo, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ScrollableContentLayer, sectionAddChild, cocos2d::CCNode*, int, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ScrollableContentLayer, sectionClear, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ScrollableContentLayer, sectionIndexForY, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ScrollableContentLayer, setContentHeight, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ScrollableContentLayer, setForwardedTouchesOnly, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ScrollableContentLayer, setHorizontal, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ScrollableContentLayer, setSectionHeight, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ScrollableContentLayer, setThumbColor, cocos2d::ccColor3B)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ScrollableContentLayer, setThumbOffset, cocos2d::CCPoint)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ScrollableContentLayer, setThumbOpacity, unsigned char)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ScrollableContentLayer, setViewSize, cocos2d::CCSize)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ScrollableContentLayer, setVirtualRows, VirtualRowSource*, float, float, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ScrollableContentLayer, unmountAllRows, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ScrollableContentLayer, unmountRowSlot, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x81420, Thiscall, ScrollableContentLayer, updateScrollThumb, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ScrollableContentLayer, updateSectionVisibility, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ScrollableContentLayer, updateVirtualRows, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ScrollableContentLayer, worldClipRect, )
		}
	};
}

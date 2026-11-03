#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/AdminReportQueueEntry.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    

	template<class Der>
	struct ModifyDerive<Der, AdminReportQueueEntry> : ModifyBase<ModifyDerive<Der, AdminReportQueueEntry>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, AdminReportQueueEntry>>;
		using ModifyBase<ModifyDerive<Der, AdminReportQueueEntry>>::ModifyBase;
		using Base = AdminReportQueueEntry;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x217240, Thiscall, AdminReportQueueEntry)
		}
	};
}

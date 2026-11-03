#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/AdminReportedEntry.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    

	template<class Der>
	struct ModifyDerive<Der, AdminReportedEntry> : ModifyBase<ModifyDerive<Der, AdminReportedEntry>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, AdminReportedEntry>>;
		using ModifyBase<ModifyDerive<Der, AdminReportedEntry>>::ModifyBase;
		using Base = AdminReportedEntry;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x2171d0, Thiscall, AdminReportedEntry)
		}
	};
}

#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/AdminLogEntry.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    

	template<class Der>
	struct ModifyDerive<Der, AdminLogEntry> : ModifyBase<ModifyDerive<Der, AdminLogEntry>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, AdminLogEntry>>;
		using ModifyBase<ModifyDerive<Der, AdminLogEntry>>::ModifyBase;
		using Base = AdminLogEntry;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x217160, Thiscall, AdminLogEntry)
		}
	};
}

#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/AdminAbuseEntry.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    

	template<class Der>
	struct ModifyDerive<Der, AdminAbuseEntry> : ModifyBase<ModifyDerive<Der, AdminAbuseEntry>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, AdminAbuseEntry>>;
		using ModifyBase<ModifyDerive<Der, AdminAbuseEntry>>::ModifyBase;
		using Base = AdminAbuseEntry;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x2172b0, Thiscall, AdminAbuseEntry)
		}
	};
}

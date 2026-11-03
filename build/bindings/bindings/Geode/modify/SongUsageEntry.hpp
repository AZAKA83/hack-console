#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SongUsageEntry.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    

	template<class Der>
	struct ModifyDerive<Der, SongUsageEntry> : ModifyBase<ModifyDerive<Der, SongUsageEntry>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SongUsageEntry>>;
		using ModifyBase<ModifyDerive<Der, SongUsageEntry>>::ModifyBase;
		using Base = SongUsageEntry;
        using Derived = Der;
		void apply() override {

		}
	};
}

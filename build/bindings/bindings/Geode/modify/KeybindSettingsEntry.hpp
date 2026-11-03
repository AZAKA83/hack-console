#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/KeybindSettingsEntry.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    

	template<class Der>
	struct ModifyDerive<Der, KeybindSettingsEntry> : ModifyBase<ModifyDerive<Der, KeybindSettingsEntry>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, KeybindSettingsEntry>>;
		using ModifyBase<ModifyDerive<Der, KeybindSettingsEntry>>::ModifyBase;
		using Base = KeybindSettingsEntry;
        using Derived = Der;
		void apply() override {

		}
	};
}

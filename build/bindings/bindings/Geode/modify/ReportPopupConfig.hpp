#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/ReportPopupConfig.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    

	template<class Der>
	struct ModifyDerive<Der, ReportPopupConfig> : ModifyBase<ModifyDerive<Der, ReportPopupConfig>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, ReportPopupConfig>>;
		using ModifyBase<ModifyDerive<Der, ReportPopupConfig>>::ModifyBase;
		using Base = ReportPopupConfig;
        using Derived = Der;
		void apply() override {

		}
	};
}

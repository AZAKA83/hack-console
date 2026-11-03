#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/NewsItem.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    

	template<class Der>
	struct ModifyDerive<Der, NewsItem> : ModifyBase<ModifyDerive<Der, NewsItem>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, NewsItem>>;
		using ModifyBase<ModifyDerive<Der, NewsItem>>::ModifyBase;
		using Base = NewsItem;
        using Derived = Der;
		void apply() override {

		}
	};
}

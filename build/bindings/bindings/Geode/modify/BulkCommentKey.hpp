#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/BulkCommentKey.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    

	template<class Der>
	struct ModifyDerive<Der, BulkCommentKey> : ModifyBase<ModifyDerive<Der, BulkCommentKey>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, BulkCommentKey>>;
		using ModifyBase<ModifyDerive<Der, BulkCommentKey>>::ModifyBase;
		using Base = BulkCommentKey;
        using Derived = Der;
		void apply() override {

		}
	};
}

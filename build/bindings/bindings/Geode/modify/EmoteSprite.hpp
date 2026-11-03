#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/EmoteSprite.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_createWithDef
		#define GEODE_STATICS_createWithDef
		GEODE_AS_STATIC_FUNCTION(createWithDef) 
	#endif

	#ifndef GEODE_STATICS_attachToLabel
		#define GEODE_STATICS_attachToLabel
		GEODE_AS_STATIC_FUNCTION(attachToLabel) 
	#endif

	#ifndef GEODE_STATICS_defForName
		#define GEODE_STATICS_defForName
		GEODE_AS_STATIC_FUNCTION(defForName) 
	#endif

	#ifndef GEODE_STATICS_setColor
		#define GEODE_STATICS_setColor
		GEODE_AS_STATIC_FUNCTION(setColor) 
	#endif

	#ifndef GEODE_STATICS_characterCount
		#define GEODE_STATICS_characterCount
		GEODE_AS_STATIC_FUNCTION(characterCount) 
	#endif

	#ifndef GEODE_STATICS_charIndexForByte
		#define GEODE_STATICS_charIndexForByte
		GEODE_AS_STATIC_FUNCTION(charIndexForByte) 
	#endif

	#ifndef GEODE_STATICS_defAtIndex
		#define GEODE_STATICS_defAtIndex
		GEODE_AS_STATIC_FUNCTION(defAtIndex) 
	#endif

	#ifndef GEODE_STATICS_defCount
		#define GEODE_STATICS_defCount
		GEODE_AS_STATIC_FUNCTION(defCount) 
	#endif

	#ifndef GEODE_STATICS_effectiveLength
		#define GEODE_STATICS_effectiveLength
		GEODE_AS_STATIC_FUNCTION(effectiveLength) 
	#endif

	#ifndef GEODE_STATICS_fitToHeight
		#define GEODE_STATICS_fitToHeight
		GEODE_AS_STATIC_FUNCTION(fitToHeight) 
	#endif

	#ifndef GEODE_STATICS_heightFactor
		#define GEODE_STATICS_heightFactor
		GEODE_AS_STATIC_FUNCTION(heightFactor) 
	#endif

	#ifndef GEODE_STATICS_initWithDef
		#define GEODE_STATICS_initWithDef
		GEODE_AS_STATIC_FUNCTION(initWithDef) 
	#endif

	#ifndef GEODE_STATICS_parseTokens
		#define GEODE_STATICS_parseTokens
		GEODE_AS_STATIC_FUNCTION(parseTokens) 
	#endif

	#ifndef GEODE_STATICS_replaceTokens
		#define GEODE_STATICS_replaceTokens
		GEODE_AS_STATIC_FUNCTION(replaceTokens) 
	#endif

	#ifndef GEODE_STATICS_translateUnicodeEmoji
		#define GEODE_STATICS_translateUnicodeEmoji
		GEODE_AS_STATIC_FUNCTION(translateUnicodeEmoji) 
	#endif

	#ifndef GEODE_STATICS_jumboMaxAspect
		#define GEODE_STATICS_jumboMaxAspect
		GEODE_AS_STATIC_FUNCTION(jumboMaxAspect) 
	#endif

	#ifndef GEODE_STATICS_jumboMultiScale
		#define GEODE_STATICS_jumboMultiScale
		GEODE_AS_STATIC_FUNCTION(jumboMultiScale) 
	#endif

	#ifndef GEODE_STATICS_jumboScale
		#define GEODE_STATICS_jumboScale
		GEODE_AS_STATIC_FUNCTION(jumboScale) 
	#endif

	#ifndef GEODE_STATICS_maxEmotesComment
		#define GEODE_STATICS_maxEmotesComment
		GEODE_AS_STATIC_FUNCTION(maxEmotesComment) 
	#endif

	#ifndef GEODE_STATICS_maxEmotesMessage
		#define GEODE_STATICS_maxEmotesMessage
		GEODE_AS_STATIC_FUNCTION(maxEmotesMessage) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_createWithDef
		#define GEODE_CONCEPT_CHECK_createWithDef
		GEODE_CONCEPT_FUNCTION_CHECK(createWithDef) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createWithName
		#define GEODE_CONCEPT_CHECK_createWithName
		GEODE_CONCEPT_FUNCTION_CHECK(createWithName) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_attachToLabel
		#define GEODE_CONCEPT_CHECK_attachToLabel
		GEODE_CONCEPT_FUNCTION_CHECK(attachToLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_defForName
		#define GEODE_CONCEPT_CHECK_defForName
		GEODE_CONCEPT_FUNCTION_CHECK(defForName) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setColor
		#define GEODE_CONCEPT_CHECK_setColor
		GEODE_CONCEPT_FUNCTION_CHECK(setColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_characterCount
		#define GEODE_CONCEPT_CHECK_characterCount
		GEODE_CONCEPT_FUNCTION_CHECK(characterCount) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_charIndexForByte
		#define GEODE_CONCEPT_CHECK_charIndexForByte
		GEODE_CONCEPT_FUNCTION_CHECK(charIndexForByte) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_defAtIndex
		#define GEODE_CONCEPT_CHECK_defAtIndex
		GEODE_CONCEPT_FUNCTION_CHECK(defAtIndex) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_defCount
		#define GEODE_CONCEPT_CHECK_defCount
		GEODE_CONCEPT_FUNCTION_CHECK(defCount) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_effectiveLength
		#define GEODE_CONCEPT_CHECK_effectiveLength
		GEODE_CONCEPT_FUNCTION_CHECK(effectiveLength) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_fitToHeight
		#define GEODE_CONCEPT_CHECK_fitToHeight
		GEODE_CONCEPT_FUNCTION_CHECK(fitToHeight) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_heightFactor
		#define GEODE_CONCEPT_CHECK_heightFactor
		GEODE_CONCEPT_FUNCTION_CHECK(heightFactor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initWithDef
		#define GEODE_CONCEPT_CHECK_initWithDef
		GEODE_CONCEPT_FUNCTION_CHECK(initWithDef) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_parseTokens
		#define GEODE_CONCEPT_CHECK_parseTokens
		GEODE_CONCEPT_FUNCTION_CHECK(parseTokens) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_replaceTokens
		#define GEODE_CONCEPT_CHECK_replaceTokens
		GEODE_CONCEPT_FUNCTION_CHECK(replaceTokens) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_translateUnicodeEmoji
		#define GEODE_CONCEPT_CHECK_translateUnicodeEmoji
		GEODE_CONCEPT_FUNCTION_CHECK(translateUnicodeEmoji) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_jumboMaxAspect
		#define GEODE_CONCEPT_CHECK_jumboMaxAspect
		GEODE_CONCEPT_FUNCTION_CHECK(jumboMaxAspect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_jumboMultiScale
		#define GEODE_CONCEPT_CHECK_jumboMultiScale
		GEODE_CONCEPT_FUNCTION_CHECK(jumboMultiScale) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_jumboScale
		#define GEODE_CONCEPT_CHECK_jumboScale
		GEODE_CONCEPT_FUNCTION_CHECK(jumboScale) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_maxEmotesComment
		#define GEODE_CONCEPT_CHECK_maxEmotesComment
		GEODE_CONCEPT_FUNCTION_CHECK(maxEmotesComment) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_maxEmotesMessage
		#define GEODE_CONCEPT_CHECK_maxEmotesMessage
		GEODE_CONCEPT_FUNCTION_CHECK(maxEmotesMessage) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, EmoteSprite> : ModifyBase<ModifyDerive<Der, EmoteSprite>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, EmoteSprite>>;
		using ModifyBase<ModifyDerive<Der, EmoteSprite>>::ModifyBase;
		using Base = EmoteSprite;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x7e780, Thiscall, EmoteSprite)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7f0e0, Default, EmoteSprite, createWithDef, EmoteDef const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(EmoteSprite, createWithName, std::string const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x80140, Default, EmoteSprite, attachToLabel, cocos2d::CCLabelBMFont*, cocos2d::CCNode*, std::vector<EmoteToken> const&, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7efa0, Default, EmoteSprite, defForName, std::string const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3f5c0, Thiscall, EmoteSprite, setColor, cocos2d::ccColor3B const&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EmoteSprite, characterCount, std::string const&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EmoteSprite, charIndexForByte, std::string const&, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EmoteSprite, defAtIndex, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EmoteSprite, defCount, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7fc10, Thiscall, EmoteSprite, effectiveLength, std::string const&, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7f200, Thiscall, EmoteSprite, fitToHeight, float, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EmoteSprite, heightFactor, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EmoteSprite, initWithDef, EmoteDef const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7f9b0, Thiscall, EmoteSprite, parseTokens, std::string const&, std::vector<EmoteToken>*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7fd40, Thiscall, EmoteSprite, replaceTokens, std::string const&, std::vector<EmoteToken>&, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x7f330, Thiscall, EmoteSprite, translateUnicodeEmoji, std::string const&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EmoteSprite, jumboMaxAspect, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EmoteSprite, jumboMultiScale, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EmoteSprite, jumboScale, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EmoteSprite, maxEmotesComment, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EmoteSprite, maxEmotesMessage, )
		}
	};
}

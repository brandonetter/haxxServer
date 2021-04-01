// Generated by Haxe 4.2.1
#include <hxcpp.h>

#ifndef INCLUDED_Document
#include <Document.h>
#endif
#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_markdown_BlockParser
#include <markdown/BlockParser.h>
#endif
#ifndef INCLUDED_markdown_BlockSyntax
#include <markdown/BlockSyntax.h>
#endif
#ifndef INCLUDED_markdown_ElementNode
#include <markdown/ElementNode.h>
#endif
#ifndef INCLUDED_markdown_GitHubCodeBlockSyntax
#include <markdown/GitHubCodeBlockSyntax.h>
#endif
#ifndef INCLUDED_markdown_Node
#include <markdown/Node.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_60bf0da1b7ebb814_346_new,"markdown.GitHubCodeBlockSyntax","new",0x8f48ff73,"markdown.GitHubCodeBlockSyntax.new","markdown/BlockParser.hx",346,0x037f5eb2)
HX_LOCAL_STACK_FRAME(_hx_pos_60bf0da1b7ebb814_348_get_pattern,"markdown.GitHubCodeBlockSyntax","get_pattern",0x9d98607a,"markdown.GitHubCodeBlockSyntax.get_pattern","markdown/BlockParser.hx",348,0x037f5eb2)
HX_LOCAL_STACK_FRAME(_hx_pos_60bf0da1b7ebb814_351_parseChildLines,"markdown.GitHubCodeBlockSyntax","parseChildLines",0x9b304069,"markdown.GitHubCodeBlockSyntax.parseChildLines","markdown/BlockParser.hx",351,0x037f5eb2)
HX_LOCAL_STACK_FRAME(_hx_pos_60bf0da1b7ebb814_367_parse,"markdown.GitHubCodeBlockSyntax","parse",0xd742ea06,"markdown.GitHubCodeBlockSyntax.parse","markdown/BlockParser.hx",367,0x037f5eb2)
namespace markdown{

void GitHubCodeBlockSyntax_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_60bf0da1b7ebb814_346_new)
HXDLIN( 346)		super::__construct();
            	}

Dynamic GitHubCodeBlockSyntax_obj::__CreateEmpty() { return new GitHubCodeBlockSyntax_obj; }

void *GitHubCodeBlockSyntax_obj::_hx_vtable = 0;

Dynamic GitHubCodeBlockSyntax_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GitHubCodeBlockSyntax_obj > _hx_result = new GitHubCodeBlockSyntax_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool GitHubCodeBlockSyntax_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1aefc269) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x1aefc269;
	} else {
		return inClassId==(int)0x41d975bd;
	}
}

 ::EReg GitHubCodeBlockSyntax_obj::get_pattern(){
            	HX_STACKFRAME(&_hx_pos_60bf0da1b7ebb814_348_get_pattern)
HXDLIN( 348)		return ::markdown::BlockSyntax_obj::RE_CODE;
            	}


::Array< ::String > GitHubCodeBlockSyntax_obj::parseChildLines( ::markdown::BlockParser parser){
            	HX_STACKFRAME(&_hx_pos_60bf0da1b7ebb814_351_parseChildLines)
HXLINE( 352)		::Array< ::String > childLines = ::Array_obj< ::String >::__new(0);
HXLINE( 353)		parser->advance();
HXLINE( 355)		while((parser->pos < parser->lines->length)){
HXLINE( 356)			 ::EReg _hx_tmp = this->get_pattern();
HXDLIN( 356)			if (!(_hx_tmp->match(parser->lines->__get(parser->pos)))) {
HXLINE( 357)				childLines->push(parser->lines->__get(parser->pos));
HXLINE( 358)				parser->advance();
            			}
            			else {
HXLINE( 360)				parser->advance();
HXLINE( 361)				goto _hx_goto_2;
            			}
            		}
            		_hx_goto_2:;
HXLINE( 364)		return childLines;
            	}


::Dynamic GitHubCodeBlockSyntax_obj::parse( ::markdown::BlockParser parser){
            	HX_GC_STACKFRAME(&_hx_pos_60bf0da1b7ebb814_367_parse)
HXLINE( 369)		::String syntax = this->get_pattern()->matched(1);
HXLINE( 370)		::Array< ::String > childLines = this->parseChildLines(parser);
HXLINE( 372)		 ::markdown::ElementNode code = null();
HXLINE( 373)		::String source = childLines->join(HX_("\n",0a,00,00,00));
HXLINE( 375)		if (parser->document->codeBlockSyntaxes->exists(syntax)) {
HXLINE( 376)			 ::Dynamic format = parser->document->codeBlockSyntaxes->get(syntax);
HXLINE( 377)			code = ::markdown::ElementNode_obj::text(HX_("code",2d,b1,c4,41),( (::String)(format(source)) ));
            		}
            		else {
HXLINE( 379)			code = ::markdown::ElementNode_obj::text(HX_("code",2d,b1,c4,41),::StringTools_obj::htmlEscape(source,null()));
HXLINE( 380)			bool _hx_tmp;
HXDLIN( 380)			if (::hx::IsNotNull( syntax )) {
HXLINE( 380)				_hx_tmp = (syntax.length > 0);
            			}
            			else {
HXLINE( 380)				_hx_tmp = false;
            			}
HXDLIN( 380)			if (_hx_tmp) {
HXLINE( 381)				code->attributes->set(HX_("class",38,78,58,48),(HX_("prettyprint ",89,3e,73,dd) + syntax));
            			}
            		}
HXLINE( 384)		return  ::markdown::ElementNode_obj::__alloc( HX_CTX ,HX_("pre",23,60,55,00),::Array_obj< ::Dynamic>::__new(1)->init(0,code));
            	}



::hx::ObjectPtr< GitHubCodeBlockSyntax_obj > GitHubCodeBlockSyntax_obj::__new() {
	::hx::ObjectPtr< GitHubCodeBlockSyntax_obj > __this = new GitHubCodeBlockSyntax_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< GitHubCodeBlockSyntax_obj > GitHubCodeBlockSyntax_obj::__alloc(::hx::Ctx *_hx_ctx) {
	GitHubCodeBlockSyntax_obj *__this = (GitHubCodeBlockSyntax_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GitHubCodeBlockSyntax_obj), false, "markdown.GitHubCodeBlockSyntax"));
	*(void **)__this = GitHubCodeBlockSyntax_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

GitHubCodeBlockSyntax_obj::GitHubCodeBlockSyntax_obj()
{
}

::hx::Val GitHubCodeBlockSyntax_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"parse") ) { return ::hx::Val( parse_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_pattern") ) { return ::hx::Val( get_pattern_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"parseChildLines") ) { return ::hx::Val( parseChildLines_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *GitHubCodeBlockSyntax_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *GitHubCodeBlockSyntax_obj_sStaticStorageInfo = 0;
#endif

static ::String GitHubCodeBlockSyntax_obj_sMemberFields[] = {
	HX_("get_pattern",67,66,71,97),
	HX_("parseChildLines",d6,40,67,6c),
	HX_("parse",33,90,55,bd),
	::String(null()) };

::hx::Class GitHubCodeBlockSyntax_obj::__mClass;

void GitHubCodeBlockSyntax_obj::__register()
{
	GitHubCodeBlockSyntax_obj _hx_dummy;
	GitHubCodeBlockSyntax_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("markdown.GitHubCodeBlockSyntax",01,ca,79,3b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(GitHubCodeBlockSyntax_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< GitHubCodeBlockSyntax_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GitHubCodeBlockSyntax_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GitHubCodeBlockSyntax_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace markdown
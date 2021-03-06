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
#ifndef INCLUDED_markdown_BlockParser
#include <markdown/BlockParser.h>
#endif
#ifndef INCLUDED_markdown_BlockSyntax
#include <markdown/BlockSyntax.h>
#endif
#ifndef INCLUDED_markdown_BlockquoteSyntax
#include <markdown/BlockquoteSyntax.h>
#endif
#ifndef INCLUDED_markdown_ElementNode
#include <markdown/ElementNode.h>
#endif
#ifndef INCLUDED_markdown_Node
#include <markdown/Node.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_36e26c4b772306b2_259_new,"markdown.BlockquoteSyntax","new",0xd5106883,"markdown.BlockquoteSyntax.new","markdown/BlockParser.hx",259,0x037f5eb2)
HX_LOCAL_STACK_FRAME(_hx_pos_36e26c4b772306b2_261_get_pattern,"markdown.BlockquoteSyntax","get_pattern",0xb587598a,"markdown.BlockquoteSyntax.get_pattern","markdown/BlockParser.hx",261,0x037f5eb2)
HX_LOCAL_STACK_FRAME(_hx_pos_36e26c4b772306b2_264_parseChildLines,"markdown.BlockquoteSyntax","parseChildLines",0x3ef90179,"markdown.BlockquoteSyntax.parseChildLines","markdown/BlockParser.hx",264,0x037f5eb2)
HX_LOCAL_STACK_FRAME(_hx_pos_36e26c4b772306b2_290_parse,"markdown.BlockquoteSyntax","parse",0xac82b716,"markdown.BlockquoteSyntax.parse","markdown/BlockParser.hx",290,0x037f5eb2)
namespace markdown{

void BlockquoteSyntax_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_36e26c4b772306b2_259_new)
HXDLIN( 259)		super::__construct();
            	}

Dynamic BlockquoteSyntax_obj::__CreateEmpty() { return new BlockquoteSyntax_obj; }

void *BlockquoteSyntax_obj::_hx_vtable = 0;

Dynamic BlockquoteSyntax_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BlockquoteSyntax_obj > _hx_result = new BlockquoteSyntax_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool BlockquoteSyntax_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2a5a2ee1) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x2a5a2ee1;
	} else {
		return inClassId==(int)0x41d975bd;
	}
}

 ::EReg BlockquoteSyntax_obj::get_pattern(){
            	HX_STACKFRAME(&_hx_pos_36e26c4b772306b2_261_get_pattern)
HXDLIN( 261)		return ::markdown::BlockSyntax_obj::RE_BLOCKQUOTE;
            	}


::Array< ::String > BlockquoteSyntax_obj::parseChildLines( ::markdown::BlockParser parser){
            	HX_STACKFRAME(&_hx_pos_36e26c4b772306b2_264_parseChildLines)
HXLINE( 265)		::Array< ::String > childLines = ::Array_obj< ::String >::__new(0);
HXLINE( 267)		while((parser->pos < parser->lines->length)){
HXLINE( 268)			 ::EReg _hx_tmp = this->get_pattern();
HXDLIN( 268)			if (_hx_tmp->match(parser->lines->__get(parser->pos))) {
HXLINE( 269)				childLines->push(this->get_pattern()->matched(1));
HXLINE( 270)				parser->advance();
            			}
            			else {
HXLINE( 274)				bool nextMatch;
HXDLIN( 274)				if (::hx::IsNotNull( parser->get_next() )) {
HXLINE( 274)					 ::EReg nextMatch1 = this->get_pattern();
HXDLIN( 274)					nextMatch = nextMatch1->match(parser->get_next());
            				}
            				else {
HXLINE( 274)					nextMatch = false;
            				}
HXLINE( 276)				bool _hx_tmp;
HXDLIN( 276)				if ((::StringTools_obj::trim(parser->lines->__get(parser->pos)) == HX_("",00,00,00,00))) {
HXLINE( 276)					_hx_tmp = nextMatch;
            				}
            				else {
HXLINE( 276)					_hx_tmp = false;
            				}
HXDLIN( 276)				if (_hx_tmp) {
HXLINE( 277)					childLines->push(HX_("",00,00,00,00));
HXLINE( 278)					childLines->push(this->get_pattern()->matched(1));
HXLINE( 279)					parser->advance();
HXLINE( 280)					parser->advance();
            				}
            				else {
HXLINE( 282)					goto _hx_goto_2;
            				}
            			}
            		}
            		_hx_goto_2:;
HXLINE( 287)		return childLines;
            	}


::Dynamic BlockquoteSyntax_obj::parse( ::markdown::BlockParser parser){
            	HX_GC_STACKFRAME(&_hx_pos_36e26c4b772306b2_290_parse)
HXLINE( 291)		::Array< ::String > childLines = this->parseChildLines(parser);
HXLINE( 294)		::Array< ::Dynamic> children = parser->document->parseLines(childLines);
HXLINE( 296)		return  ::markdown::ElementNode_obj::__alloc( HX_CTX ,HX_("blockquote",cf,56,28,a2),children);
            	}



::hx::ObjectPtr< BlockquoteSyntax_obj > BlockquoteSyntax_obj::__new() {
	::hx::ObjectPtr< BlockquoteSyntax_obj > __this = new BlockquoteSyntax_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< BlockquoteSyntax_obj > BlockquoteSyntax_obj::__alloc(::hx::Ctx *_hx_ctx) {
	BlockquoteSyntax_obj *__this = (BlockquoteSyntax_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BlockquoteSyntax_obj), false, "markdown.BlockquoteSyntax"));
	*(void **)__this = BlockquoteSyntax_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

BlockquoteSyntax_obj::BlockquoteSyntax_obj()
{
}

::hx::Val BlockquoteSyntax_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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
static ::hx::StorageInfo *BlockquoteSyntax_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *BlockquoteSyntax_obj_sStaticStorageInfo = 0;
#endif

static ::String BlockquoteSyntax_obj_sMemberFields[] = {
	HX_("get_pattern",67,66,71,97),
	HX_("parseChildLines",d6,40,67,6c),
	HX_("parse",33,90,55,bd),
	::String(null()) };

::hx::Class BlockquoteSyntax_obj::__mClass;

void BlockquoteSyntax_obj::__register()
{
	BlockquoteSyntax_obj _hx_dummy;
	BlockquoteSyntax_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("markdown.BlockquoteSyntax",11,6b,f3,16);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(BlockquoteSyntax_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< BlockquoteSyntax_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BlockquoteSyntax_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BlockquoteSyntax_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace markdown

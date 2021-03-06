// Generated by Haxe 4.2.1
#include <hxcpp.h>

#ifndef INCLUDED_Document
#include <Document.h>
#endif
#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_markdown_ListItem
#include <markdown/ListItem.h>
#endif
#ifndef INCLUDED_markdown_ListSyntax
#include <markdown/ListSyntax.h>
#endif
#ifndef INCLUDED_markdown_Node
#include <markdown/Node.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_fe1b68d3b936a688_471_new,"markdown.ListSyntax","new",0x5ba23d92,"markdown.ListSyntax.new","markdown/BlockParser.hx",471,0x037f5eb2)
HX_LOCAL_STACK_FRAME(_hx_pos_fe1b68d3b936a688_466_get_canEndBlock,"markdown.ListSyntax","get_canEndBlock",0x50d9ef6b,"markdown.ListSyntax.get_canEndBlock","markdown/BlockParser.hx",466,0x037f5eb2)
HX_LOCAL_STACK_FRAME(_hx_pos_fe1b68d3b936a688_481_parse,"markdown.ListSyntax","parse",0x5aff2de5,"markdown.ListSyntax.parse","markdown/BlockParser.hx",481,0x037f5eb2)
HX_LOCAL_STACK_FRAME(_hx_pos_fe1b68d3b936a688_488_parse,"markdown.ListSyntax","parse",0x5aff2de5,"markdown.ListSyntax.parse","markdown/BlockParser.hx",488,0x037f5eb2)
HX_LOCAL_STACK_FRAME(_hx_pos_fe1b68d3b936a688_476_parse,"markdown.ListSyntax","parse",0x5aff2de5,"markdown.ListSyntax.parse","markdown/BlockParser.hx",476,0x037f5eb2)
namespace markdown{

void ListSyntax_obj::__construct(::String listTag){
            	HX_STACKFRAME(&_hx_pos_fe1b68d3b936a688_471_new)
HXLINE( 472)		super::__construct();
HXLINE( 473)		this->listTag = listTag;
            	}

Dynamic ListSyntax_obj::__CreateEmpty() { return new ListSyntax_obj; }

void *ListSyntax_obj::_hx_vtable = 0;

Dynamic ListSyntax_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ListSyntax_obj > _hx_result = new ListSyntax_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ListSyntax_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x41d975bd) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x41d975bd;
	} else {
		return inClassId==(int)0x696ad470;
	}
}

bool ListSyntax_obj::get_canEndBlock(){
            	HX_STACKFRAME(&_hx_pos_fe1b68d3b936a688_466_get_canEndBlock)
HXDLIN( 466)		return false;
            	}


::Dynamic ListSyntax_obj::parse( ::markdown::BlockParser parser){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0,::Array< ::Dynamic>,items,::Array< ::Dynamic>,childLines) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_fe1b68d3b936a688_481_parse)
HXLINE( 481)			if ((childLines->__get(0).StaticCast< ::Array< ::String > >()->length > 0)) {
HXLINE( 482)				::Array< ::Dynamic> items1 = items;
HXDLIN( 482)				items1->push( ::markdown::ListItem_obj::__alloc( HX_CTX ,childLines->__get(0).StaticCast< ::Array< ::String > >()));
HXLINE( 483)				childLines[0] = ::Array_obj< ::String >::__new(0);
            			}
            		}
            		HX_END_LOCAL_FUNC0((void))

            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_1, ::markdown::BlockParser,parser,::Array< ::Dynamic>,match) HXARGC(1)
            		bool _hx_run( ::EReg pattern){
            			HX_STACKFRAME(&_hx_pos_fe1b68d3b936a688_488_parse)
HXLINE( 489)			match[0] = pattern;
HXLINE( 490)			return pattern->match(parser->lines->__get(parser->pos));
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_GC_STACKFRAME(&_hx_pos_fe1b68d3b936a688_476_parse)
HXLINE( 477)		::Array< ::Dynamic> items = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 478)		::Array< ::Dynamic> childLines = ::Array_obj< ::Dynamic>::__new(1)->init(0,::Array_obj< ::String >::__new(0));
HXLINE( 480)		 ::Dynamic endItem =  ::Dynamic(new _hx_Closure_0(items,childLines));
HXLINE( 487)		::Array< ::Dynamic> match = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 488)		 ::Dynamic tryMatch =  ::Dynamic(new _hx_Closure_1(parser,match));
HXLINE( 493)		while((parser->pos < parser->lines->length)){
HXLINE( 494)			if (( (bool)(tryMatch(::markdown::BlockSyntax_obj::RE_EMPTY)) )) {
HXLINE( 496)				childLines->__get(0).StaticCast< ::Array< ::String > >()->push(HX_("",00,00,00,00));
            			}
            			else {
HXLINE( 497)				bool _hx_tmp;
HXDLIN( 497)				if (!(( (bool)(tryMatch(::markdown::BlockSyntax_obj::RE_UL)) ))) {
HXLINE( 497)					_hx_tmp = ( (bool)(tryMatch(::markdown::BlockSyntax_obj::RE_OL)) );
            				}
            				else {
HXLINE( 497)					_hx_tmp = true;
            				}
HXDLIN( 497)				if (_hx_tmp) {
HXLINE( 499)					endItem();
HXLINE( 500)					::Array< ::String > childLines1 = childLines->__get(0).StaticCast< ::Array< ::String > >();
HXDLIN( 500)					childLines1->push(match->__get(0).StaticCast<  ::EReg >()->matched(1));
            				}
            				else {
HXLINE( 501)					if (( (bool)(tryMatch(::markdown::BlockSyntax_obj::RE_INDENT)) )) {
HXLINE( 503)						::Array< ::String > childLines1 = childLines->__get(0).StaticCast< ::Array< ::String > >();
HXDLIN( 503)						childLines1->push(match->__get(0).StaticCast<  ::EReg >()->matched(1));
            					}
            					else {
HXLINE( 504)						if (::markdown::BlockSyntax_obj::isAtBlockEnd(parser)) {
HXLINE( 506)							goto _hx_goto_2;
            						}
            						else {
HXLINE( 511)							bool _hx_tmp;
HXDLIN( 511)							if ((childLines->__get(0).StaticCast< ::Array< ::String > >()->length > 0)) {
HXLINE( 511)								_hx_tmp = (childLines->__get(0).StaticCast< ::Array< ::String > >()->__get((childLines->__get(0).StaticCast< ::Array< ::String > >()->length - 1)) == HX_("",00,00,00,00));
            							}
            							else {
HXLINE( 511)								_hx_tmp = false;
            							}
HXDLIN( 511)							if (_hx_tmp) {
HXLINE( 512)								goto _hx_goto_2;
            							}
HXLINE( 513)							childLines->__get(0).StaticCast< ::Array< ::String > >()->push(parser->lines->__get(parser->pos));
            						}
            					}
            				}
            			}
HXLINE( 515)			parser->advance();
            		}
            		_hx_goto_2:;
HXLINE( 518)		endItem();
HXLINE( 559)		{
HXLINE( 559)			int _g = 0;
HXDLIN( 559)			int _g1 = items->length;
HXDLIN( 559)			while((_g < _g1)){
HXLINE( 559)				_g = (_g + 1);
HXDLIN( 559)				int i = (_g - 1);
HXLINE( 560)				int len = items->__get(i).StaticCast<  ::markdown::ListItem >()->lines->length;
HXLINE( 561)				{
HXLINE( 561)					int _g1 = 1;
HXDLIN( 561)					int _g2 = (len + 1);
HXDLIN( 561)					while((_g1 < _g2)){
HXLINE( 561)						_g1 = (_g1 + 1);
HXDLIN( 561)						int jj = (_g1 - 1);
HXLINE( 562)						int j = (len - jj);
HXLINE( 563)						if (::markdown::BlockSyntax_obj::RE_EMPTY->match(items->__get(i).StaticCast<  ::markdown::ListItem >()->lines->__get(j))) {
HXLINE( 565)							if ((i < (items->length - 1))) {
HXLINE( 566)								items->__get(i).StaticCast<  ::markdown::ListItem >()->forceBlock = true;
HXLINE( 567)								items->__get((i + 1)).StaticCast<  ::markdown::ListItem >()->forceBlock = true;
            							}
HXLINE( 569)							items->__get(i).StaticCast<  ::markdown::ListItem >()->lines->pop();
            						}
            						else {
HXLINE( 571)							goto _hx_goto_4;
            						}
            					}
            					_hx_goto_4:;
            				}
            			}
            		}
HXLINE( 577)		::Array< ::Dynamic> itemNodes = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 578)		{
HXLINE( 578)			int _g2 = 0;
HXDLIN( 578)			while((_g2 < items->length)){
HXLINE( 578)				 ::markdown::ListItem item = items->__get(_g2).StaticCast<  ::markdown::ListItem >();
HXDLIN( 578)				_g2 = (_g2 + 1);
HXLINE( 579)				bool blockItem;
HXDLIN( 579)				if (!(item->forceBlock)) {
HXLINE( 579)					blockItem = (item->lines->length > 1);
            				}
            				else {
HXLINE( 579)					blockItem = true;
            				}
HXLINE( 582)				::Array< ::Dynamic> blocksInList = ::Array_obj< ::Dynamic>::__new(6)->init(0,::markdown::BlockSyntax_obj::RE_BLOCKQUOTE)->init(1,::markdown::BlockSyntax_obj::RE_HEADER)->init(2,::markdown::BlockSyntax_obj::RE_HR)->init(3,::markdown::BlockSyntax_obj::RE_INDENT)->init(4,::markdown::BlockSyntax_obj::RE_UL)->init(5,::markdown::BlockSyntax_obj::RE_OL);
HXLINE( 591)				if (!(blockItem)) {
HXLINE( 592)					int _g = 0;
HXDLIN( 592)					while((_g < blocksInList->length)){
HXLINE( 592)						 ::EReg pattern = blocksInList->__get(_g).StaticCast<  ::EReg >();
HXDLIN( 592)						_g = (_g + 1);
HXLINE( 593)						if (pattern->match(item->lines->__get(0))) {
HXLINE( 594)							blockItem = true;
HXLINE( 595)							goto _hx_goto_6;
            						}
            					}
            					_hx_goto_6:;
            				}
HXLINE( 601)				if (blockItem) {
HXLINE( 603)					::Array< ::Dynamic> children = parser->document->parseLines(item->lines);
HXLINE( 608)					bool _hx_tmp;
HXDLIN( 608)					if (!(item->forceBlock)) {
HXLINE( 608)						_hx_tmp = (children->length == 1);
            					}
            					else {
HXLINE( 608)						_hx_tmp = false;
            					}
HXDLIN( 608)					if (_hx_tmp) {
HXLINE( 609)						if (::Std_obj::isOfType(children->__get(0),( ( ::Dynamic)(::hx::ClassOf< ::markdown::ElementNode >()) ))) {
HXLINE( 610)							 ::markdown::ElementNode node = ( ( ::markdown::ElementNode)(children->__get(0)) );
HXLINE( 611)							if ((node->tag == HX_("p",70,00,00,00))) {
HXLINE( 612)								children = node->children;
            							}
            						}
            					}
HXLINE( 616)					itemNodes->push( ::markdown::ElementNode_obj::__alloc( HX_CTX ,HX_("li",7d,5e,00,00),children));
            				}
            				else {
HXLINE( 619)					::Array< ::Dynamic> contents = parser->document->parseInline(item->lines->__get(0));
HXLINE( 620)					itemNodes->push( ::markdown::ElementNode_obj::__alloc( HX_CTX ,HX_("li",7d,5e,00,00),contents));
            				}
            			}
            		}
HXLINE( 624)		return  ::markdown::ElementNode_obj::__alloc( HX_CTX ,this->listTag,itemNodes);
            	}



::hx::ObjectPtr< ListSyntax_obj > ListSyntax_obj::__new(::String listTag) {
	::hx::ObjectPtr< ListSyntax_obj > __this = new ListSyntax_obj();
	__this->__construct(listTag);
	return __this;
}

::hx::ObjectPtr< ListSyntax_obj > ListSyntax_obj::__alloc(::hx::Ctx *_hx_ctx,::String listTag) {
	ListSyntax_obj *__this = (ListSyntax_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ListSyntax_obj), true, "markdown.ListSyntax"));
	*(void **)__this = ListSyntax_obj::_hx_vtable;
	__this->__construct(listTag);
	return __this;
}

ListSyntax_obj::ListSyntax_obj()
{
}

void ListSyntax_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ListSyntax);
	HX_MARK_MEMBER_NAME(listTag,"listTag");
	HX_MARK_END_CLASS();
}

void ListSyntax_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(listTag,"listTag");
}

::hx::Val ListSyntax_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"parse") ) { return ::hx::Val( parse_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"listTag") ) { return ::hx::Val( listTag ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_canEndBlock") ) { return ::hx::Val( get_canEndBlock_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ListSyntax_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"listTag") ) { listTag=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ListSyntax_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("listTag",9c,84,88,0a));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ListSyntax_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(ListSyntax_obj,listTag),HX_("listTag",9c,84,88,0a)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ListSyntax_obj_sStaticStorageInfo = 0;
#endif

static ::String ListSyntax_obj_sMemberFields[] = {
	HX_("get_canEndBlock",39,7f,83,a3),
	HX_("listTag",9c,84,88,0a),
	HX_("parse",33,90,55,bd),
	::String(null()) };

::hx::Class ListSyntax_obj::__mClass;

void ListSyntax_obj::__register()
{
	ListSyntax_obj _hx_dummy;
	ListSyntax_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("markdown.ListSyntax",a0,cc,f3,68);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ListSyntax_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ListSyntax_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ListSyntax_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ListSyntax_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace markdown

// Generated by Haxe 4.2.1
#include <hxcpp.h>

#ifndef INCLUDED_Document
#include <Document.h>
#endif
#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Link
#include <Link.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_markdown_ElementNode
#include <markdown/ElementNode.h>
#endif
#ifndef INCLUDED_markdown_InlineParser
#include <markdown/InlineParser.h>
#endif
#ifndef INCLUDED_markdown_InlineSyntax
#include <markdown/InlineSyntax.h>
#endif
#ifndef INCLUDED_markdown_LinkSyntax
#include <markdown/LinkSyntax.h>
#endif
#ifndef INCLUDED_markdown_Node
#include <markdown/Node.h>
#endif
#ifndef INCLUDED_markdown_TagState
#include <markdown/TagState.h>
#endif
#ifndef INCLUDED_markdown_TagSyntax
#include <markdown/TagSyntax.h>
#endif
#ifndef INCLUDED_markdown_TextNode
#include <markdown/TextNode.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_0d1dbae804e61f64_328_new,"markdown.LinkSyntax","new",0x8b13542e,"markdown.LinkSyntax.new","markdown/InlineParser.hx",328,0xf7baa326)
HX_LOCAL_STACK_FRAME(_hx_pos_0d1dbae804e61f64_333_onMatchEnd,"markdown.LinkSyntax","onMatchEnd",0x52f651c7,"markdown.LinkSyntax.onMatchEnd","markdown/InlineParser.hx",333,0xf7baa326)
HX_LOCAL_STACK_FRAME(_hx_pos_0d1dbae804e61f64_320_boot,"markdown.LinkSyntax","boot",0x1def54a4,"markdown.LinkSyntax.boot","markdown/InlineParser.hx",320,0xf7baa326)
namespace markdown{

void LinkSyntax_obj::__construct( ::Dynamic linkResolver){
            	HX_STACKFRAME(&_hx_pos_0d1dbae804e61f64_328_new)
HXLINE( 329)		super::__construct(HX_("\\[",7f,50,00,00),null(),::markdown::LinkSyntax_obj::linkPattern);
HXLINE( 330)		this->linkResolver = linkResolver;
            	}

Dynamic LinkSyntax_obj::__CreateEmpty() { return new LinkSyntax_obj; }

void *LinkSyntax_obj::_hx_vtable = 0;

Dynamic LinkSyntax_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< LinkSyntax_obj > _hx_result = new LinkSyntax_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool LinkSyntax_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x10b0af38) {
		if (inClassId<=(int)0x0c65d26b) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0c65d26b;
		} else {
			return inClassId==(int)0x10b0af38;
		}
	} else {
		return inClassId==(int)0x4f005a66;
	}
}

bool LinkSyntax_obj::onMatchEnd( ::markdown::InlineParser parser, ::markdown::TagState state){
            	HX_GC_STACKFRAME(&_hx_pos_0d1dbae804e61f64_333_onMatchEnd)
HXLINE( 334)		::String url;
HXLINE( 335)		::String title;
HXLINE( 342)		bool _hx_tmp;
HXDLIN( 342)		if (::hx::IsNotNull( this->endPattern->matched(1) )) {
HXLINE( 342)			_hx_tmp = (this->endPattern->matched(1) == HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 342)			_hx_tmp = true;
            		}
HXDLIN( 342)		if (_hx_tmp) {
HXLINE( 343)			if (::hx::IsNull( this->linkResolver )) {
HXLINE( 344)				return false;
            			}
HXLINE( 348)			if ((state->children->length != 1)) {
HXLINE( 349)				return false;
            			}
HXLINE( 350)			if (!(::Std_obj::isOfType(state->children->__get(0),( ( ::Dynamic)(::hx::ClassOf< ::markdown::TextNode >()) )))) {
HXLINE( 351)				return false;
            			}
HXLINE( 353)			 ::markdown::TextNode link = ( ( ::markdown::TextNode)(state->children->__get(0)) );
HXLINE( 356)			::Dynamic node = this->linkResolver(link->text);
HXLINE( 357)			if (::hx::IsNull( node )) {
HXLINE( 358)				return false;
            			}
HXLINE( 360)			parser->addNode(node);
HXLINE( 361)			return true;
            		}
HXLINE( 364)		bool _hx_tmp1;
HXDLIN( 364)		if (::hx::IsNotNull( this->endPattern->matched(3) )) {
HXLINE( 364)			_hx_tmp1 = (this->endPattern->matched(3) != HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 364)			_hx_tmp1 = false;
            		}
HXDLIN( 364)		if (_hx_tmp1) {
HXLINE( 366)			url = this->endPattern->matched(3);
HXLINE( 367)			title = this->endPattern->matched(4);
HXLINE( 370)			bool _hx_tmp;
HXDLIN( 370)			if (::StringTools_obj::startsWith(url,HX_("<",3c,00,00,00))) {
HXLINE( 370)				_hx_tmp = ::StringTools_obj::endsWith(url,HX_(">",3e,00,00,00));
            			}
            			else {
HXLINE( 370)				_hx_tmp = false;
            			}
HXDLIN( 370)			if (_hx_tmp) {
HXLINE( 371)				url = url.substring(1,(url.length - 1));
            			}
            		}
            		else {
HXLINE( 375)			::String id = this->endPattern->matched(2);
HXLINE( 376)			if ((id == HX_("",00,00,00,00))) {
HXLINE( 378)				id = parser->source.substring((state->startPos + 1),parser->pos);
            			}
HXLINE( 382)			id = id.toLowerCase();
HXLINE( 385)			 ::Link link = ( ( ::Link)(parser->document->refLinks->get(id)) );
HXLINE( 388)			if (::hx::IsNull( link )) {
HXLINE( 389)				return false;
            			}
HXLINE( 391)			url = link->url;
HXLINE( 392)			title = link->title;
            		}
HXLINE( 395)		 ::markdown::ElementNode anchor =  ::markdown::ElementNode_obj::__alloc( HX_CTX ,HX_("a",61,00,00,00),state->children);
HXLINE( 396)		{
HXLINE( 396)			::Dynamic this1 = anchor->attributes;
HXDLIN( 396)			( ( ::haxe::ds::StringMap)(this1) )->set(HX_("href",eb,09,15,45),::StringTools_obj::htmlEscape(url,null()));
            		}
HXLINE( 398)		bool _hx_tmp2;
HXDLIN( 398)		if (::hx::IsNotNull( title )) {
HXLINE( 398)			_hx_tmp2 = (title != HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 398)			_hx_tmp2 = false;
            		}
HXDLIN( 398)		if (_hx_tmp2) {
HXLINE( 399)			::Dynamic this1 = anchor->attributes;
HXDLIN( 399)			( ( ::haxe::ds::StringMap)(this1) )->set(HX_("title",98,15,3b,10),::StringTools_obj::htmlEscape(title,null()));
            		}
HXLINE( 402)		parser->addNode(anchor);
HXLINE( 403)		return true;
            	}


::String LinkSyntax_obj::linkPattern;


::hx::ObjectPtr< LinkSyntax_obj > LinkSyntax_obj::__new( ::Dynamic linkResolver) {
	::hx::ObjectPtr< LinkSyntax_obj > __this = new LinkSyntax_obj();
	__this->__construct(linkResolver);
	return __this;
}

::hx::ObjectPtr< LinkSyntax_obj > LinkSyntax_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic linkResolver) {
	LinkSyntax_obj *__this = (LinkSyntax_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(LinkSyntax_obj), true, "markdown.LinkSyntax"));
	*(void **)__this = LinkSyntax_obj::_hx_vtable;
	__this->__construct(linkResolver);
	return __this;
}

LinkSyntax_obj::LinkSyntax_obj()
{
}

void LinkSyntax_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LinkSyntax);
	HX_MARK_MEMBER_NAME(linkResolver,"linkResolver");
	 ::markdown::TagSyntax_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void LinkSyntax_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(linkResolver,"linkResolver");
	 ::markdown::TagSyntax_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val LinkSyntax_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"onMatchEnd") ) { return ::hx::Val( onMatchEnd_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"linkResolver") ) { return ::hx::Val( linkResolver ); }
	}
	return super::__Field(inName,inCallProp);
}

bool LinkSyntax_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"linkPattern") ) { outValue = ( linkPattern ); return true; }
	}
	return false;
}

::hx::Val LinkSyntax_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"linkResolver") ) { linkResolver=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool LinkSyntax_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"linkPattern") ) { linkPattern=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo LinkSyntax_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(LinkSyntax_obj,linkResolver),HX_("linkResolver",20,da,44,49)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo LinkSyntax_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &LinkSyntax_obj::linkPattern,HX_("linkPattern",76,69,f9,a6)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String LinkSyntax_obj_sMemberFields[] = {
	HX_("linkResolver",20,da,44,49),
	HX_("onMatchEnd",d5,9f,d7,a0),
	::String(null()) };

static void LinkSyntax_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LinkSyntax_obj::linkPattern,"linkPattern");
};

#ifdef HXCPP_VISIT_ALLOCS
static void LinkSyntax_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LinkSyntax_obj::linkPattern,"linkPattern");
};

#endif

::hx::Class LinkSyntax_obj::__mClass;

static ::String LinkSyntax_obj_sStaticFields[] = {
	HX_("linkPattern",76,69,f9,a6),
	::String(null())
};

void LinkSyntax_obj::__register()
{
	LinkSyntax_obj _hx_dummy;
	LinkSyntax_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("markdown.LinkSyntax",3c,65,b6,d4);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &LinkSyntax_obj::__GetStatic;
	__mClass->mSetStaticField = &LinkSyntax_obj::__SetStatic;
	__mClass->mMarkFunc = LinkSyntax_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(LinkSyntax_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(LinkSyntax_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< LinkSyntax_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = LinkSyntax_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LinkSyntax_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LinkSyntax_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void LinkSyntax_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_0d1dbae804e61f64_320_boot)
HXDLIN( 320)		linkPattern = ((((HX_("\\](?:(",86,ae,b9,6f) + HX_("\\s?\\[([^\\]]*)\\]",58,cc,8a,69)) + HX_("|",7c,00,00,00)) + HX_("\\s?\\(([^ )]+)(?:[ ]*\"([^\"]+)\"|)\\)",e0,5a,02,be)) + HX_(")|)",96,88,1f,00));
            	}
}

} // end namespace markdown

// Generated by Haxe 4.2.1
#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_markdown_BlockSyntax
#include <markdown/BlockSyntax.h>
#endif
#ifndef INCLUDED_markdown_ListSyntax
#include <markdown/ListSyntax.h>
#endif
#ifndef INCLUDED_markdown_OrderedListSyntax
#include <markdown/OrderedListSyntax.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_1250b1ab59f83567_646_new,"markdown.OrderedListSyntax","new",0xe7d7ef41,"markdown.OrderedListSyntax.new","markdown/BlockParser.hx",646,0x037f5eb2)
HX_LOCAL_STACK_FRAME(_hx_pos_1250b1ab59f83567_642_get_pattern,"markdown.OrderedListSyntax","get_pattern",0x5370ce48,"markdown.OrderedListSyntax.get_pattern","markdown/BlockParser.hx",642,0x037f5eb2)
namespace markdown{

void OrderedListSyntax_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_1250b1ab59f83567_646_new)
HXDLIN( 646)		super::__construct(HX_("ol",1d,61,00,00));
            	}

Dynamic OrderedListSyntax_obj::__CreateEmpty() { return new OrderedListSyntax_obj; }

void *OrderedListSyntax_obj::_hx_vtable = 0;

Dynamic OrderedListSyntax_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< OrderedListSyntax_obj > _hx_result = new OrderedListSyntax_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool OrderedListSyntax_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x41d975bd) {
		if (inClassId<=(int)0x1c2cdf37) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x1c2cdf37;
		} else {
			return inClassId==(int)0x41d975bd;
		}
	} else {
		return inClassId==(int)0x696ad470;
	}
}

 ::EReg OrderedListSyntax_obj::get_pattern(){
            	HX_STACKFRAME(&_hx_pos_1250b1ab59f83567_642_get_pattern)
HXDLIN( 642)		return ::markdown::BlockSyntax_obj::RE_OL;
            	}



::hx::ObjectPtr< OrderedListSyntax_obj > OrderedListSyntax_obj::__new() {
	::hx::ObjectPtr< OrderedListSyntax_obj > __this = new OrderedListSyntax_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< OrderedListSyntax_obj > OrderedListSyntax_obj::__alloc(::hx::Ctx *_hx_ctx) {
	OrderedListSyntax_obj *__this = (OrderedListSyntax_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(OrderedListSyntax_obj), true, "markdown.OrderedListSyntax"));
	*(void **)__this = OrderedListSyntax_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

OrderedListSyntax_obj::OrderedListSyntax_obj()
{
}

::hx::Val OrderedListSyntax_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"get_pattern") ) { return ::hx::Val( get_pattern_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *OrderedListSyntax_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *OrderedListSyntax_obj_sStaticStorageInfo = 0;
#endif

static ::String OrderedListSyntax_obj_sMemberFields[] = {
	HX_("get_pattern",67,66,71,97),
	::String(null()) };

::hx::Class OrderedListSyntax_obj::__mClass;

void OrderedListSyntax_obj::__register()
{
	OrderedListSyntax_obj _hx_dummy;
	OrderedListSyntax_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("markdown.OrderedListSyntax",cf,3a,05,f5);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(OrderedListSyntax_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< OrderedListSyntax_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = OrderedListSyntax_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = OrderedListSyntax_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace markdown

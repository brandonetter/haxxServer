// Generated by Haxe 4.2.1
#include <hxcpp.h>

#ifndef INCLUDED_Page
#include <Page.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_16ea658f277e41b6_191_new,"Page","new",0x165c0ae1,"Page.new","Main.hx",191,0x087e5c05)

void Page_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_16ea658f277e41b6_191_new)
HXDLIN( 191)		this->timeAdd = ((Float)0);
            	}

Dynamic Page_obj::__CreateEmpty() { return new Page_obj; }

void *Page_obj::_hx_vtable = 0;

Dynamic Page_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Page_obj > _hx_result = new Page_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Page_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x097dfc93;
}


Page_obj::Page_obj()
{
}

void Page_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Page);
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(timeAdd,"timeAdd");
	HX_MARK_END_CLASS();
}

void Page_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(timeAdd,"timeAdd");
}

::hx::Val Page_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return ::hx::Val( data ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return ::hx::Val( length ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"timeAdd") ) { return ::hx::Val( timeAdd ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Page_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"timeAdd") ) { timeAdd=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Page_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("length",e6,94,07,9f));
	outFields->push(HX_("data",2a,56,63,42));
	outFields->push(HX_("timeAdd",14,24,d4,d8));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Page_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(Page_obj,length),HX_("length",e6,94,07,9f)},
	{::hx::fsString,(int)offsetof(Page_obj,data),HX_("data",2a,56,63,42)},
	{::hx::fsFloat,(int)offsetof(Page_obj,timeAdd),HX_("timeAdd",14,24,d4,d8)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Page_obj_sStaticStorageInfo = 0;
#endif

static ::String Page_obj_sMemberFields[] = {
	HX_("length",e6,94,07,9f),
	HX_("data",2a,56,63,42),
	HX_("timeAdd",14,24,d4,d8),
	::String(null()) };

::hx::Class Page_obj::__mClass;

void Page_obj::__register()
{
	Page_obj _hx_dummy;
	Page_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Page",6f,06,2b,35);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Page_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Page_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Page_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Page_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}


// Generated by Haxe 4.2.1
#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_fd61cb8e002c8329_96_createEmptyInstance,"Type","createEmptyInstance",0xcb752312,"Type.createEmptyInstance","/usr/share/haxe/std/cpp/_std/Type.hx",96,0x978d9ce0)

void Type_obj::__construct() { }

Dynamic Type_obj::__CreateEmpty() { return new Type_obj; }

void *Type_obj::_hx_vtable = 0;

Dynamic Type_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Type_obj > _hx_result = new Type_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Type_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0c3514fe;
}

 ::Dynamic Type_obj::createEmptyInstance(::hx::Class cl){
            	HX_STACKFRAME(&_hx_pos_fd61cb8e002c8329_96_createEmptyInstance)
HXDLIN(  96)		return cl->ConstructEmpty();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Type_obj,createEmptyInstance,return )


Type_obj::Type_obj()
{
}

bool Type_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 19:
		if (HX_FIELD_EQ(inName,"createEmptyInstance") ) { outValue = createEmptyInstance_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Type_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Type_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Type_obj::__mClass;

static ::String Type_obj_sStaticFields[] = {
	HX_("createEmptyInstance",a6,26,85,ce),
	::String(null())
};

void Type_obj::__register()
{
	Type_obj _hx_dummy;
	Type_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Type",da,1e,e2,37);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Type_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Type_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Type_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Type_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Type_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}


// Generated by Haxe 4.2.1
#include <hxcpp.h>

#ifndef INCLUDED_haxe_macro_ComplexType
#include <haxe/macro/ComplexType.h>
#endif
namespace haxe{
namespace macro{

::haxe::macro::ComplexType ComplexType_obj::TAnonymous(::Array< ::Dynamic> fields)
{
	return ::hx::CreateEnum< ComplexType_obj >(HX_("TAnonymous",79,49,55,32),2,1)->_hx_init(0,fields);
}

::haxe::macro::ComplexType ComplexType_obj::TExtend(::Array< ::Dynamic> p,::Array< ::Dynamic> fields)
{
	return ::hx::CreateEnum< ComplexType_obj >(HX_("TExtend",4e,3d,ba,a0),4,2)->_hx_init(0,p)->_hx_init(1,fields);
}

::haxe::macro::ComplexType ComplexType_obj::TFunction(::Array< ::Dynamic> args, ::haxe::macro::ComplexType ret)
{
	return ::hx::CreateEnum< ComplexType_obj >(HX_("TFunction",8c,db,3a,25),1,2)->_hx_init(0,args)->_hx_init(1,ret);
}

::haxe::macro::ComplexType ComplexType_obj::TIntersection(::Array< ::Dynamic> tl)
{
	return ::hx::CreateEnum< ComplexType_obj >(HX_("TIntersection",bd,1c,9d,33),7,1)->_hx_init(0,tl);
}

::haxe::macro::ComplexType ComplexType_obj::TNamed(::String n, ::haxe::macro::ComplexType t)
{
	return ::hx::CreateEnum< ComplexType_obj >(HX_("TNamed",c5,4e,ac,bf),6,2)->_hx_init(0,n)->_hx_init(1,t);
}

::haxe::macro::ComplexType ComplexType_obj::TOptional( ::haxe::macro::ComplexType t)
{
	return ::hx::CreateEnum< ComplexType_obj >(HX_("TOptional",14,e0,56,2f),5,1)->_hx_init(0,t);
}

::haxe::macro::ComplexType ComplexType_obj::TParent( ::haxe::macro::ComplexType t)
{
	return ::hx::CreateEnum< ComplexType_obj >(HX_("TParent",9e,70,1d,c7),3,1)->_hx_init(0,t);
}

::haxe::macro::ComplexType ComplexType_obj::TPath( ::Dynamic p)
{
	return ::hx::CreateEnum< ComplexType_obj >(HX_("TPath",19,cc,d3,92),0,1)->_hx_init(0,p);
}

bool ComplexType_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("TAnonymous",79,49,55,32)) { outValue = ComplexType_obj::TAnonymous_dyn(); return true; }
	if (inName==HX_("TExtend",4e,3d,ba,a0)) { outValue = ComplexType_obj::TExtend_dyn(); return true; }
	if (inName==HX_("TFunction",8c,db,3a,25)) { outValue = ComplexType_obj::TFunction_dyn(); return true; }
	if (inName==HX_("TIntersection",bd,1c,9d,33)) { outValue = ComplexType_obj::TIntersection_dyn(); return true; }
	if (inName==HX_("TNamed",c5,4e,ac,bf)) { outValue = ComplexType_obj::TNamed_dyn(); return true; }
	if (inName==HX_("TOptional",14,e0,56,2f)) { outValue = ComplexType_obj::TOptional_dyn(); return true; }
	if (inName==HX_("TParent",9e,70,1d,c7)) { outValue = ComplexType_obj::TParent_dyn(); return true; }
	if (inName==HX_("TPath",19,cc,d3,92)) { outValue = ComplexType_obj::TPath_dyn(); return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(ComplexType_obj)

int ComplexType_obj::__FindIndex(::String inName)
{
	if (inName==HX_("TAnonymous",79,49,55,32)) return 2;
	if (inName==HX_("TExtend",4e,3d,ba,a0)) return 4;
	if (inName==HX_("TFunction",8c,db,3a,25)) return 1;
	if (inName==HX_("TIntersection",bd,1c,9d,33)) return 7;
	if (inName==HX_("TNamed",c5,4e,ac,bf)) return 6;
	if (inName==HX_("TOptional",14,e0,56,2f)) return 5;
	if (inName==HX_("TParent",9e,70,1d,c7)) return 3;
	if (inName==HX_("TPath",19,cc,d3,92)) return 0;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(ComplexType_obj,TAnonymous,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(ComplexType_obj,TExtend,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(ComplexType_obj,TFunction,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(ComplexType_obj,TIntersection,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC2(ComplexType_obj,TNamed,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(ComplexType_obj,TOptional,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(ComplexType_obj,TParent,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(ComplexType_obj,TPath,return)

int ComplexType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("TAnonymous",79,49,55,32)) return 1;
	if (inName==HX_("TExtend",4e,3d,ba,a0)) return 2;
	if (inName==HX_("TFunction",8c,db,3a,25)) return 2;
	if (inName==HX_("TIntersection",bd,1c,9d,33)) return 1;
	if (inName==HX_("TNamed",c5,4e,ac,bf)) return 2;
	if (inName==HX_("TOptional",14,e0,56,2f)) return 1;
	if (inName==HX_("TParent",9e,70,1d,c7)) return 1;
	if (inName==HX_("TPath",19,cc,d3,92)) return 1;
	return super::__FindArgCount(inName);
}

::hx::Val ComplexType_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("TAnonymous",79,49,55,32)) return TAnonymous_dyn();
	if (inName==HX_("TExtend",4e,3d,ba,a0)) return TExtend_dyn();
	if (inName==HX_("TFunction",8c,db,3a,25)) return TFunction_dyn();
	if (inName==HX_("TIntersection",bd,1c,9d,33)) return TIntersection_dyn();
	if (inName==HX_("TNamed",c5,4e,ac,bf)) return TNamed_dyn();
	if (inName==HX_("TOptional",14,e0,56,2f)) return TOptional_dyn();
	if (inName==HX_("TParent",9e,70,1d,c7)) return TParent_dyn();
	if (inName==HX_("TPath",19,cc,d3,92)) return TPath_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String ComplexType_obj_sStaticFields[] = {
	HX_("TPath",19,cc,d3,92),
	HX_("TFunction",8c,db,3a,25),
	HX_("TAnonymous",79,49,55,32),
	HX_("TParent",9e,70,1d,c7),
	HX_("TExtend",4e,3d,ba,a0),
	HX_("TOptional",14,e0,56,2f),
	HX_("TNamed",c5,4e,ac,bf),
	HX_("TIntersection",bd,1c,9d,33),
	::String(null())
};

::hx::Class ComplexType_obj::__mClass;

Dynamic __Create_ComplexType_obj() { return new ComplexType_obj; }

void ComplexType_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("haxe.macro.ComplexType",40,1b,e2,a3), ::hx::TCanCast< ComplexType_obj >,ComplexType_obj_sStaticFields,0,
	&__Create_ComplexType_obj, &__Create,
	&super::__SGetClass(), &CreateComplexType_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &ComplexType_obj::__GetStatic;
}

void ComplexType_obj::__boot()
{
}


} // end namespace haxe
} // end namespace macro

// Generated by Haxe 4.2.1
#ifndef INCLUDED_PageRoute
#define INCLUDED_PageRoute

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_a8baca733c8f577d_178_new)
HX_DECLARE_CLASS0(PageRoute)



class HXCPP_CLASS_ATTRIBUTES PageRoute_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef PageRoute_obj OBJ_;
		PageRoute_obj();

	public:
		enum { _hx_ClassId = 0x5620ce12 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="PageRoute")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"PageRoute"); }

		inline static ::hx::ObjectPtr< PageRoute_obj > __new() {
			::hx::ObjectPtr< PageRoute_obj > __this = new PageRoute_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< PageRoute_obj > __alloc(::hx::Ctx *_hx_ctx) {
			PageRoute_obj *__this = (PageRoute_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PageRoute_obj), true, "PageRoute"));
			*(void **)__this = PageRoute_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_a8baca733c8f577d_178_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~PageRoute_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("PageRoute",9a,b4,4f,35); }

		::String request;
		::String output;
};


#endif /* INCLUDED_PageRoute */ 

// Generated by Haxe 4.2.1
#ifndef INCLUDED_markdown_ListItem
#define INCLUDED_markdown_ListItem

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_12968e2acf38a758_431_new)
HX_DECLARE_CLASS1(markdown,ListItem)

namespace markdown{


class HXCPP_CLASS_ATTRIBUTES ListItem_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ListItem_obj OBJ_;
		ListItem_obj();

	public:
		enum { _hx_ClassId = 0x580189e0 };

		void __construct(::Array< ::String > lines);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="markdown.ListItem")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"markdown.ListItem"); }

		inline static ::hx::ObjectPtr< ListItem_obj > __new(::Array< ::String > lines) {
			::hx::ObjectPtr< ListItem_obj > __this = new ListItem_obj();
			__this->__construct(lines);
			return __this;
		}

		inline static ::hx::ObjectPtr< ListItem_obj > __alloc(::hx::Ctx *_hx_ctx,::Array< ::String > lines) {
			ListItem_obj *__this = (ListItem_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ListItem_obj), true, "markdown.ListItem"));
			*(void **)__this = ListItem_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_12968e2acf38a758_431_new)
HXLINE( 432)		( ( ::markdown::ListItem)(__this) )->forceBlock = false;
HXLINE( 436)		( ( ::markdown::ListItem)(__this) )->lines = lines;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ListItem_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ListItem",b1,50,66,ff); }

		bool forceBlock;
		::Array< ::String > lines;
};

} // end namespace markdown

#endif /* INCLUDED_markdown_ListItem */ 

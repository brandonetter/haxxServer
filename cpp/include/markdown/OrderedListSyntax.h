// Generated by Haxe 4.2.1
#ifndef INCLUDED_markdown_OrderedListSyntax
#define INCLUDED_markdown_OrderedListSyntax

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_markdown_ListSyntax
#include <markdown/ListSyntax.h>
#endif
HX_DECLARE_CLASS0(EReg)
HX_DECLARE_CLASS1(markdown,BlockSyntax)
HX_DECLARE_CLASS1(markdown,ListSyntax)
HX_DECLARE_CLASS1(markdown,OrderedListSyntax)

namespace markdown{


class HXCPP_CLASS_ATTRIBUTES OrderedListSyntax_obj : public  ::markdown::ListSyntax_obj
{
	public:
		typedef  ::markdown::ListSyntax_obj super;
		typedef OrderedListSyntax_obj OBJ_;
		OrderedListSyntax_obj();

	public:
		enum { _hx_ClassId = 0x1c2cdf37 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="markdown.OrderedListSyntax")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"markdown.OrderedListSyntax"); }
		static ::hx::ObjectPtr< OrderedListSyntax_obj > __new();
		static ::hx::ObjectPtr< OrderedListSyntax_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~OrderedListSyntax_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("OrderedListSyntax",0e,24,28,bd); }

		 ::EReg get_pattern();

};

} // end namespace markdown

#endif /* INCLUDED_markdown_OrderedListSyntax */ 

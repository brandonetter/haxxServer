// Generated by Haxe 4.2.1
#ifndef INCLUDED_markdown_SetextHeaderSyntax
#define INCLUDED_markdown_SetextHeaderSyntax

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_markdown_BlockSyntax
#include <markdown/BlockSyntax.h>
#endif
HX_DECLARE_CLASS1(markdown,BlockParser)
HX_DECLARE_CLASS1(markdown,BlockSyntax)
HX_DECLARE_CLASS1(markdown,Node)
HX_DECLARE_CLASS1(markdown,SetextHeaderSyntax)

namespace markdown{


class HXCPP_CLASS_ATTRIBUTES SetextHeaderSyntax_obj : public  ::markdown::BlockSyntax_obj
{
	public:
		typedef  ::markdown::BlockSyntax_obj super;
		typedef SetextHeaderSyntax_obj OBJ_;
		SetextHeaderSyntax_obj();

	public:
		enum { _hx_ClassId = 0x1d026586 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="markdown.SetextHeaderSyntax")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"markdown.SetextHeaderSyntax"); }
		static ::hx::ObjectPtr< SetextHeaderSyntax_obj > __new();
		static ::hx::ObjectPtr< SetextHeaderSyntax_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SetextHeaderSyntax_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SetextHeaderSyntax",cf,5c,e3,57); }

		bool canParse( ::markdown::BlockParser parser);

		::Dynamic parse( ::markdown::BlockParser parser);

};

} // end namespace markdown

#endif /* INCLUDED_markdown_SetextHeaderSyntax */ 

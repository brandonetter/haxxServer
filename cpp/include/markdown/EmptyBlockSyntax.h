// Generated by Haxe 4.2.1
#ifndef INCLUDED_markdown_EmptyBlockSyntax
#define INCLUDED_markdown_EmptyBlockSyntax

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_markdown_BlockSyntax
#include <markdown/BlockSyntax.h>
#endif
HX_DECLARE_CLASS0(EReg)
HX_DECLARE_CLASS1(markdown,BlockParser)
HX_DECLARE_CLASS1(markdown,BlockSyntax)
HX_DECLARE_CLASS1(markdown,EmptyBlockSyntax)
HX_DECLARE_CLASS1(markdown,Node)

namespace markdown{


class HXCPP_CLASS_ATTRIBUTES EmptyBlockSyntax_obj : public  ::markdown::BlockSyntax_obj
{
	public:
		typedef  ::markdown::BlockSyntax_obj super;
		typedef EmptyBlockSyntax_obj OBJ_;
		EmptyBlockSyntax_obj();

	public:
		enum { _hx_ClassId = 0x22e24cb6 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="markdown.EmptyBlockSyntax")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"markdown.EmptyBlockSyntax"); }
		static ::hx::ObjectPtr< EmptyBlockSyntax_obj > __new();
		static ::hx::ObjectPtr< EmptyBlockSyntax_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~EmptyBlockSyntax_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("EmptyBlockSyntax",23,be,38,6d); }

		 ::EReg get_pattern();

		::Dynamic parse( ::markdown::BlockParser parser);

};

} // end namespace markdown

#endif /* INCLUDED_markdown_EmptyBlockSyntax */ 

// Generated by Haxe 4.2.1
#ifndef INCLUDED_markdown_AutolinkSyntaxWithoutBrackets
#define INCLUDED_markdown_AutolinkSyntaxWithoutBrackets

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_markdown_InlineSyntax
#include <markdown/InlineSyntax.h>
#endif
HX_DECLARE_CLASS1(markdown,AutolinkSyntaxWithoutBrackets)
HX_DECLARE_CLASS1(markdown,InlineParser)
HX_DECLARE_CLASS1(markdown,InlineSyntax)

namespace markdown{


class HXCPP_CLASS_ATTRIBUTES AutolinkSyntaxWithoutBrackets_obj : public  ::markdown::InlineSyntax_obj
{
	public:
		typedef  ::markdown::InlineSyntax_obj super;
		typedef AutolinkSyntaxWithoutBrackets_obj OBJ_;
		AutolinkSyntaxWithoutBrackets_obj();

	public:
		enum { _hx_ClassId = 0x6517a538 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="markdown.AutolinkSyntaxWithoutBrackets")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"markdown.AutolinkSyntaxWithoutBrackets"); }
		static ::hx::ObjectPtr< AutolinkSyntaxWithoutBrackets_obj > __new();
		static ::hx::ObjectPtr< AutolinkSyntaxWithoutBrackets_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AutolinkSyntaxWithoutBrackets_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AutolinkSyntaxWithoutBrackets",c7,d6,a3,bc); }

		bool tryMatch( ::markdown::InlineParser parser);

		bool onMatch( ::markdown::InlineParser parser);

};

} // end namespace markdown

#endif /* INCLUDED_markdown_AutolinkSyntaxWithoutBrackets */ 
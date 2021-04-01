// Generated by Haxe 4.2.1
#ifndef INCLUDED_markdown_HtmlRenderer
#define INCLUDED_markdown_HtmlRenderer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_markdown_NodeVisitor
#include <markdown/NodeVisitor.h>
#endif
HX_DECLARE_CLASS0(EReg)
HX_DECLARE_CLASS0(StringBuf)
HX_DECLARE_CLASS1(markdown,ElementNode)
HX_DECLARE_CLASS1(markdown,HtmlRenderer)
HX_DECLARE_CLASS1(markdown,Node)
HX_DECLARE_CLASS1(markdown,NodeVisitor)
HX_DECLARE_CLASS1(markdown,TextNode)

namespace markdown{


class HXCPP_CLASS_ATTRIBUTES HtmlRenderer_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef HtmlRenderer_obj OBJ_;
		HtmlRenderer_obj();

	public:
		enum { _hx_ClassId = 0x75bb429d };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="markdown.HtmlRenderer")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"markdown.HtmlRenderer"); }
		static ::hx::ObjectPtr< HtmlRenderer_obj > __new();
		static ::hx::ObjectPtr< HtmlRenderer_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~HtmlRenderer_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("HtmlRenderer",ee,45,ba,4c); }

		static void __boot();
		static  ::EReg BLOCK_TAGS;
		static ::Array< ::String > attributeOrder;
		static int sortAttributes(::String a,::String b);
		static ::Dynamic sortAttributes_dyn();

		 ::StringBuf buffer;
		::String render(::Array< ::Dynamic> nodes);
		::Dynamic render_dyn();

		void visitText( ::markdown::TextNode text);
		::Dynamic visitText_dyn();

		bool visitElementBefore( ::markdown::ElementNode element);
		::Dynamic visitElementBefore_dyn();

		void visitElementAfter( ::markdown::ElementNode element);
		::Dynamic visitElementAfter_dyn();

};

} // end namespace markdown

#endif /* INCLUDED_markdown_HtmlRenderer */ 
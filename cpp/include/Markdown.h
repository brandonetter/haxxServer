// Generated by Haxe 4.2.1
#ifndef INCLUDED_Markdown
#define INCLUDED_Markdown

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Markdown)
HX_DECLARE_CLASS1(markdown,Node)



class HXCPP_CLASS_ATTRIBUTES Markdown_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Markdown_obj OBJ_;
		Markdown_obj();

	public:
		enum { _hx_ClassId = 0x1b3e5733 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="Markdown")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"Markdown"); }

		inline static ::hx::ObjectPtr< Markdown_obj > __new() {
			::hx::ObjectPtr< Markdown_obj > __this = new Markdown_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Markdown_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Markdown_obj *__this = (Markdown_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Markdown_obj), false, "Markdown"));
			*(void **)__this = Markdown_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Markdown_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Markdown",0f,7f,cb,68); }

		static void main();
		static ::Dynamic main_dyn();

		static ::String markdownToHtml(::String markdown);
		static ::Dynamic markdownToHtml_dyn();

		static ::String renderHtml(::Array< ::Dynamic> blocks);
		static ::Dynamic renderHtml_dyn();

};


#endif /* INCLUDED_Markdown */ 

// Generated by Haxe 4.2.1
#ifndef INCLUDED_haxe_macro_DisplayKind
#define INCLUDED_haxe_macro_DisplayKind

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,macro,DisplayKind)
namespace haxe{
namespace macro{


class DisplayKind_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef DisplayKind_obj OBJ_;

	public:
		DisplayKind_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("haxe.macro.DisplayKind",ec,3e,a4,88); }
		::String __ToString() const { return HX_("DisplayKind.",d8,6a,06,b6) + _hx_tag; }

		static ::haxe::macro::DisplayKind DKCall;
		static inline ::haxe::macro::DisplayKind DKCall_dyn() { return DKCall; }
		static ::haxe::macro::DisplayKind DKDot;
		static inline ::haxe::macro::DisplayKind DKDot_dyn() { return DKDot; }
		static ::haxe::macro::DisplayKind DKMarked;
		static inline ::haxe::macro::DisplayKind DKMarked_dyn() { return DKMarked; }
		static ::haxe::macro::DisplayKind DKPattern(bool outermost);
		static ::Dynamic DKPattern_dyn();
		static ::haxe::macro::DisplayKind DKStructure;
		static inline ::haxe::macro::DisplayKind DKStructure_dyn() { return DKStructure; }
};

} // end namespace haxe
} // end namespace macro

#endif /* INCLUDED_haxe_macro_DisplayKind */ 
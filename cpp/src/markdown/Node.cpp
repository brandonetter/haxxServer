// Generated by Haxe 4.2.1
#include <hxcpp.h>

#ifndef INCLUDED_markdown_Node
#include <markdown/Node.h>
#endif
#ifndef INCLUDED_markdown_NodeVisitor
#include <markdown/NodeVisitor.h>
#endif

namespace markdown{


static ::String Node_obj_sMemberFields[] = {
	HX_("accept",08,93,06,0b),
	::String(null()) };

::hx::Class Node_obj::__mClass;

void Node_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("markdown.Node",01,20,e4,91);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Node_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0x4834e911 >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace markdown

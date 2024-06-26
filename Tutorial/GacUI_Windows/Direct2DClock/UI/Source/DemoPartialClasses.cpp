﻿/***********************************************************************
!!!!!! DO NOT MODIFY !!!!!!

GacGen.exe Resource.xml

This file is generated by Workflow compiler
https://github.com/vczh-libraries
***********************************************************************/

#include "Demo.h"
/* CodePack:BeginIgnore() */
#ifndef VCZH_DEBUG_NO_REFLECTION
/* CodePack:ConditionOff(VCZH_DEBUG_NO_REFLECTION, DemoReflection.h) */
#include "DemoReflection.h"
#endif
/* CodePack:EndIgnore() */

#if defined( _MSC_VER)
#pragma warning(push)
#pragma warning(disable:4250)
#elif defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wparentheses-equality"
#elif defined(__GNUC__)
#pragma GCC diagnostic push
#endif

#define GLOBAL_SYMBOL ::vl_workflow_global::Demo::
#define GLOBAL_NAME ::vl_workflow_global::Demo::Instance().
#define GLOBAL_OBJ &::vl_workflow_global::Demo::Instance()

/***********************************************************************
Global Variables
***********************************************************************/

BEGIN_GLOBAL_STORAGE_CLASS(vl_workflow_global_Demo)
	vl_workflow_global::Demo instance;
	INITIALIZE_GLOBAL_STORAGE_CLASS
	FINALIZE_GLOBAL_STORAGE_CLASS
END_GLOBAL_STORAGE_CLASS(vl_workflow_global_Demo)

namespace vl_workflow_global
{
/***********************************************************************
Global Functions
***********************************************************************/

	Demo& Demo::Instance()
	{
		return Getvl_workflow_global_Demo().instance;
	}
}

/***********************************************************************
Class (::demo::MainWindowConstructor)
***********************************************************************/

namespace demo
{
	void MainWindowConstructor::__vwsn_demo_MainWindow_Initialize(::demo::MainWindow* __vwsn_this_)
	{
		(this->self = __vwsn_this_);
		{
			::vl::__vwsn::This(this->self)->SetClientSize([&](){ ::vl::presentation::Size __vwsn_temp__; __vwsn_temp__.x = static_cast<::vl::vint>(800); __vwsn_temp__.y = static_cast<::vl::vint>(600); return __vwsn_temp__; }());
		}
		{
			::vl::__vwsn::This(this->self)->SetText(::vl::WString::Unmanaged(L"Direct2DClock"));
		}
		(this->animationBounds = new ::vl::presentation::compositions::GuiBoundsComposition());
		::vl::__vwsn::This(__vwsn_this_)->SetNamedObject(::vl::WString::Unmanaged(L"animationBounds"), ::vl::__vwsn::Box(this->animationBounds));
		{
			::vl::__vwsn::This(this->animationBounds)->SetAlignmentToParent([&](){ ::vl::presentation::Margin __vwsn_temp__; __vwsn_temp__.left = static_cast<::vl::vint>(5); __vwsn_temp__.top = static_cast<::vl::vint>(5); __vwsn_temp__.right = (- static_cast<::vl::vint>(1)); __vwsn_temp__.bottom = (- static_cast<::vl::vint>(1)); return __vwsn_temp__; }());
		}
		{
			::vl::__vwsn::This(this->animationBounds)->SetPreferredMinSize([&](){ ::vl::presentation::Size __vwsn_temp__; __vwsn_temp__.x = static_cast<::vl::vint>(400); __vwsn_temp__.y = static_cast<::vl::vint>(400); return __vwsn_temp__; }());
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this->self)->GetContainerComposition())->AddChild(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(this->animationBounds));
		}
	}

	MainWindowConstructor::MainWindowConstructor()
		: self(static_cast<::demo::MainWindow*>(nullptr))
		, animationBounds(static_cast<::vl::presentation::compositions::GuiBoundsComposition*>(nullptr))
	{
	}

}
#undef GLOBAL_SYMBOL
#undef GLOBAL_NAME
#undef GLOBAL_OBJ

#if defined( _MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

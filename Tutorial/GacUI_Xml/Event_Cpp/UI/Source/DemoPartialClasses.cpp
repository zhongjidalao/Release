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

/***********************************************************************
Closures
***********************************************************************/

	//-------------------------------------------------------------------

	__vwsno1_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_::__vwsno1_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_(::demo::MainWindow* __vwsnctor___vwsn_this_, ::demo::MainWindowConstructor* __vwsnctorthis_0)
		:__vwsn_this_(__vwsnctor___vwsn_this_)
		, __vwsnthis_0(::vl::__vwsn::This(__vwsnctorthis_0))
	{
	}

	void __vwsno1_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_::operator()(::vl::presentation::compositions::GuiGraphicsComposition* __vwsno_1, ::vl::presentation::compositions::GuiEventArgs* __vwsno_2) const
	{
		return ::vl::__vwsn::This(__vwsn_this_)->buttonCalculate_Clicked(__vwsno_1, __vwsno_2);
	}
}

/***********************************************************************
Class (::demo::MainWindowConstructor)
***********************************************************************/

namespace demo
{
	void MainWindowConstructor::__vwsn_demo_MainWindow_Initialize(::demo::MainWindow* __vwsn_this_)
	{
		(this->__vwsn_precompile_0 = __vwsn_this_);
		(this->__vwsn_precompile_17 = ::vl::__vwsn::This(this->__vwsn_precompile_0)->GetContainerComposition());
		{
			::vl::__vwsn::This(this->__vwsn_precompile_17)->SetPreferredMinSize([&](){ ::vl::presentation::Size __vwsn_temp__; __vwsn_temp__.x = static_cast<::vl::vint>(480); __vwsn_temp__.y = static_cast<::vl::vint>(320); return __vwsn_temp__; }());
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_0)->SetClientSize([&](){ ::vl::presentation::Size __vwsn_temp__; __vwsn_temp__.x = static_cast<::vl::vint>(480); __vwsn_temp__.y = static_cast<::vl::vint>(320); return __vwsn_temp__; }());
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_0)->SetText(::vl::WString::Unmanaged(L"Event_Cpp"));
		}
		(this->__vwsn_precompile_1 = new ::vl::presentation::compositions::GuiTableComposition());
		{
			::vl::__vwsn::This(this->__vwsn_precompile_1)->SetAlignmentToParent([&](){ ::vl::presentation::Margin __vwsn_temp__; __vwsn_temp__.left = static_cast<::vl::vint>(0); __vwsn_temp__.top = static_cast<::vl::vint>(0); __vwsn_temp__.right = static_cast<::vl::vint>(0); __vwsn_temp__.bottom = static_cast<::vl::vint>(0); return __vwsn_temp__; }());
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_1)->SetMinSizeLimitation(::vl::presentation::compositions::GuiGraphicsComposition::MinSizeLimitation::LimitToElementAndChildren);
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_1)->SetCellPadding(static_cast<::vl::vint>(5));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_1)->SetRowsAndColumns(static_cast<::vl::vint>(4), static_cast<::vl::vint>(4));
			::vl::__vwsn::This(this->__vwsn_precompile_1)->SetRowOption(static_cast<::vl::vint>(0), [&](){ ::vl::presentation::compositions::GuiCellOption __vwsn_temp__; __vwsn_temp__.composeType = ::vl::presentation::compositions::GuiCellOption::ComposeType::MinSize; return __vwsn_temp__; }());
			::vl::__vwsn::This(this->__vwsn_precompile_1)->SetRowOption(static_cast<::vl::vint>(1), [&](){ ::vl::presentation::compositions::GuiCellOption __vwsn_temp__; __vwsn_temp__.composeType = ::vl::presentation::compositions::GuiCellOption::ComposeType::MinSize; return __vwsn_temp__; }());
			::vl::__vwsn::This(this->__vwsn_precompile_1)->SetRowOption(static_cast<::vl::vint>(2), [&](){ ::vl::presentation::compositions::GuiCellOption __vwsn_temp__; __vwsn_temp__.composeType = ::vl::presentation::compositions::GuiCellOption::ComposeType::MinSize; return __vwsn_temp__; }());
			::vl::__vwsn::This(this->__vwsn_precompile_1)->SetRowOption(static_cast<::vl::vint>(3), [&](){ ::vl::presentation::compositions::GuiCellOption __vwsn_temp__; __vwsn_temp__.composeType = ::vl::presentation::compositions::GuiCellOption::ComposeType::Percentage; __vwsn_temp__.percentage = static_cast<double>(1.0); return __vwsn_temp__; }());
			::vl::__vwsn::This(this->__vwsn_precompile_1)->SetColumnOption(static_cast<::vl::vint>(0), [&](){ ::vl::presentation::compositions::GuiCellOption __vwsn_temp__; __vwsn_temp__.composeType = ::vl::presentation::compositions::GuiCellOption::ComposeType::MinSize; return __vwsn_temp__; }());
			::vl::__vwsn::This(this->__vwsn_precompile_1)->SetColumnOption(static_cast<::vl::vint>(1), [&](){ ::vl::presentation::compositions::GuiCellOption __vwsn_temp__; __vwsn_temp__.composeType = ::vl::presentation::compositions::GuiCellOption::ComposeType::Absolute; __vwsn_temp__.absolute = static_cast<::vl::vint>(100); return __vwsn_temp__; }());
			::vl::__vwsn::This(this->__vwsn_precompile_1)->SetColumnOption(static_cast<::vl::vint>(2), [&](){ ::vl::presentation::compositions::GuiCellOption __vwsn_temp__; __vwsn_temp__.composeType = ::vl::presentation::compositions::GuiCellOption::ComposeType::MinSize; return __vwsn_temp__; }());
			::vl::__vwsn::This(this->__vwsn_precompile_1)->SetColumnOption(static_cast<::vl::vint>(3), [&](){ ::vl::presentation::compositions::GuiCellOption __vwsn_temp__; __vwsn_temp__.composeType = ::vl::presentation::compositions::GuiCellOption::ComposeType::Percentage; __vwsn_temp__.percentage = static_cast<double>(1.0); return __vwsn_temp__; }());
		}
		(this->__vwsn_precompile_2 = new ::vl::presentation::compositions::GuiCellComposition());
		{
			::vl::__vwsn::This(this->__vwsn_precompile_2)->SetInternalMargin([&](){ ::vl::presentation::Margin __vwsn_temp__; __vwsn_temp__.left = static_cast<::vl::vint>(0); __vwsn_temp__.top = static_cast<::vl::vint>(5); __vwsn_temp__.right = static_cast<::vl::vint>(0); __vwsn_temp__.bottom = static_cast<::vl::vint>(5); return __vwsn_temp__; }());
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_2)->SetSite(static_cast<::vl::vint>(0), static_cast<::vl::vint>(0), static_cast<::vl::vint>(1), static_cast<::vl::vint>(1));
		}
		{
			(this->__vwsn_precompile_3 = new ::vl::presentation::controls::GuiLabel(::vl::presentation::theme::ThemeName::Label));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_3)->SetText(::vl::WString::Unmanaged(L"A : "));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_2)->AddChild(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(::vl::__vwsn::This(this->__vwsn_precompile_3)->GetBoundsComposition()));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_1)->AddChild(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(this->__vwsn_precompile_2));
		}
		(this->__vwsn_precompile_4 = new ::vl::presentation::compositions::GuiCellComposition());
		{
			::vl::__vwsn::This(this->__vwsn_precompile_4)->SetSite(static_cast<::vl::vint>(0), static_cast<::vl::vint>(1), static_cast<::vl::vint>(1), static_cast<::vl::vint>(2));
		}
		{
			(this->textBoxA = new ::vl::presentation::controls::GuiSinglelineTextBox(::vl::presentation::theme::ThemeName::SinglelineTextBox));
			::vl::__vwsn::This(__vwsn_this_)->SetNamedObject(::vl::WString::Unmanaged(L"textBoxA"), ::vl::__vwsn::Box(this->textBoxA));
		}
		(this->__vwsn_precompile_5 = ::vl::__vwsn::This(this->textBoxA)->GetBoundsComposition());
		{
			::vl::__vwsn::This(this->__vwsn_precompile_5)->SetAlignmentToParent([&](){ ::vl::presentation::Margin __vwsn_temp__; __vwsn_temp__.left = static_cast<::vl::vint>(0); __vwsn_temp__.top = static_cast<::vl::vint>(0); __vwsn_temp__.right = static_cast<::vl::vint>(0); __vwsn_temp__.bottom = static_cast<::vl::vint>(0); return __vwsn_temp__; }());
		}
		{
			::vl::__vwsn::This(this->textBoxA)->SetText(::vl::WString::Unmanaged(L"1"));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_4)->AddChild(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(::vl::__vwsn::This(this->textBoxA)->GetBoundsComposition()));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_1)->AddChild(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(this->__vwsn_precompile_4));
		}
		(this->__vwsn_precompile_6 = new ::vl::presentation::compositions::GuiCellComposition());
		{
			::vl::__vwsn::This(this->__vwsn_precompile_6)->SetInternalMargin([&](){ ::vl::presentation::Margin __vwsn_temp__; __vwsn_temp__.left = static_cast<::vl::vint>(0); __vwsn_temp__.top = static_cast<::vl::vint>(5); __vwsn_temp__.right = static_cast<::vl::vint>(0); __vwsn_temp__.bottom = static_cast<::vl::vint>(5); return __vwsn_temp__; }());
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_6)->SetSite(static_cast<::vl::vint>(1), static_cast<::vl::vint>(0), static_cast<::vl::vint>(1), static_cast<::vl::vint>(1));
		}
		{
			(this->__vwsn_precompile_7 = new ::vl::presentation::controls::GuiLabel(::vl::presentation::theme::ThemeName::Label));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_7)->SetText(::vl::WString::Unmanaged(L"B : "));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_6)->AddChild(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(::vl::__vwsn::This(this->__vwsn_precompile_7)->GetBoundsComposition()));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_1)->AddChild(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(this->__vwsn_precompile_6));
		}
		(this->__vwsn_precompile_8 = new ::vl::presentation::compositions::GuiCellComposition());
		{
			::vl::__vwsn::This(this->__vwsn_precompile_8)->SetSite(static_cast<::vl::vint>(1), static_cast<::vl::vint>(1), static_cast<::vl::vint>(1), static_cast<::vl::vint>(2));
		}
		{
			(this->textBoxB = new ::vl::presentation::controls::GuiSinglelineTextBox(::vl::presentation::theme::ThemeName::SinglelineTextBox));
			::vl::__vwsn::This(__vwsn_this_)->SetNamedObject(::vl::WString::Unmanaged(L"textBoxB"), ::vl::__vwsn::Box(this->textBoxB));
		}
		(this->__vwsn_precompile_9 = ::vl::__vwsn::This(this->textBoxB)->GetBoundsComposition());
		{
			::vl::__vwsn::This(this->__vwsn_precompile_9)->SetAlignmentToParent([&](){ ::vl::presentation::Margin __vwsn_temp__; __vwsn_temp__.left = static_cast<::vl::vint>(0); __vwsn_temp__.top = static_cast<::vl::vint>(0); __vwsn_temp__.right = static_cast<::vl::vint>(0); __vwsn_temp__.bottom = static_cast<::vl::vint>(0); return __vwsn_temp__; }());
		}
		{
			::vl::__vwsn::This(this->textBoxB)->SetText(::vl::WString::Unmanaged(L"2"));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_8)->AddChild(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(::vl::__vwsn::This(this->textBoxB)->GetBoundsComposition()));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_1)->AddChild(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(this->__vwsn_precompile_8));
		}
		(this->__vwsn_precompile_10 = new ::vl::presentation::compositions::GuiCellComposition());
		{
			::vl::__vwsn::This(this->__vwsn_precompile_10)->SetInternalMargin([&](){ ::vl::presentation::Margin __vwsn_temp__; __vwsn_temp__.left = static_cast<::vl::vint>(0); __vwsn_temp__.top = static_cast<::vl::vint>(5); __vwsn_temp__.right = static_cast<::vl::vint>(0); __vwsn_temp__.bottom = static_cast<::vl::vint>(5); return __vwsn_temp__; }());
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_10)->SetSite(static_cast<::vl::vint>(2), static_cast<::vl::vint>(0), static_cast<::vl::vint>(1), static_cast<::vl::vint>(1));
		}
		{
			(this->__vwsn_precompile_11 = new ::vl::presentation::controls::GuiLabel(::vl::presentation::theme::ThemeName::Label));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_11)->SetText(::vl::WString::Unmanaged(L"A + B = : "));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_10)->AddChild(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(::vl::__vwsn::This(this->__vwsn_precompile_11)->GetBoundsComposition()));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_1)->AddChild(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(this->__vwsn_precompile_10));
		}
		(this->__vwsn_precompile_12 = new ::vl::presentation::compositions::GuiCellComposition());
		{
			::vl::__vwsn::This(this->__vwsn_precompile_12)->SetSite(static_cast<::vl::vint>(2), static_cast<::vl::vint>(1), static_cast<::vl::vint>(1), static_cast<::vl::vint>(1));
		}
		{
			(this->textBoxC = new ::vl::presentation::controls::GuiSinglelineTextBox(::vl::presentation::theme::ThemeName::SinglelineTextBox));
			::vl::__vwsn::This(__vwsn_this_)->SetNamedObject(::vl::WString::Unmanaged(L"textBoxC"), ::vl::__vwsn::Box(this->textBoxC));
		}
		{
			::vl::__vwsn::This(this->textBoxC)->SetReadonly(true);
		}
		(this->__vwsn_precompile_13 = ::vl::__vwsn::This(this->textBoxC)->GetBoundsComposition());
		{
			::vl::__vwsn::This(this->__vwsn_precompile_13)->SetAlignmentToParent([&](){ ::vl::presentation::Margin __vwsn_temp__; __vwsn_temp__.left = static_cast<::vl::vint>(0); __vwsn_temp__.top = static_cast<::vl::vint>(0); __vwsn_temp__.right = static_cast<::vl::vint>(0); __vwsn_temp__.bottom = static_cast<::vl::vint>(0); return __vwsn_temp__; }());
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_12)->AddChild(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(::vl::__vwsn::This(this->textBoxC)->GetBoundsComposition()));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_1)->AddChild(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(this->__vwsn_precompile_12));
		}
		(this->__vwsn_precompile_14 = new ::vl::presentation::compositions::GuiCellComposition());
		{
			::vl::__vwsn::This(this->__vwsn_precompile_14)->SetSite(static_cast<::vl::vint>(2), static_cast<::vl::vint>(2), static_cast<::vl::vint>(1), static_cast<::vl::vint>(1));
		}
		{
			(this->__vwsn_precompile_15 = new ::vl::presentation::controls::GuiButton(::vl::presentation::theme::ThemeName::Button));
		}
		(this->__vwsn_precompile_16 = ::vl::__vwsn::This(this->__vwsn_precompile_15)->GetBoundsComposition());
		{
			::vl::__vwsn::This(this->__vwsn_precompile_16)->SetAlignmentToParent([&](){ ::vl::presentation::Margin __vwsn_temp__; __vwsn_temp__.left = static_cast<::vl::vint>(0); __vwsn_temp__.top = static_cast<::vl::vint>(0); __vwsn_temp__.right = static_cast<::vl::vint>(0); __vwsn_temp__.bottom = static_cast<::vl::vint>(0); return __vwsn_temp__; }());
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_15)->SetText(::vl::WString::Unmanaged(L"Calculate"));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_14)->AddChild(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(::vl::__vwsn::This(this->__vwsn_precompile_15)->GetBoundsComposition()));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_1)->AddChild(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(this->__vwsn_precompile_14));
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this->__vwsn_precompile_0)->GetContainerComposition())->AddChild(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(this->__vwsn_precompile_1));
		}
		{
			::vl::__vwsn::EventAttach(::vl::__vwsn::This(this->__vwsn_precompile_15)->Clicked, vl::Func(::vl_workflow_global::__vwsno1_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_(__vwsn_this_, this)));
		}
	}

	MainWindowConstructor::MainWindowConstructor()
		: textBoxA(static_cast<::vl::presentation::controls::GuiSinglelineTextBox*>(nullptr))
		, textBoxB(static_cast<::vl::presentation::controls::GuiSinglelineTextBox*>(nullptr))
		, textBoxC(static_cast<::vl::presentation::controls::GuiSinglelineTextBox*>(nullptr))
		, __vwsn_precompile_0(static_cast<::demo::MainWindow*>(nullptr))
		, __vwsn_precompile_1(static_cast<::vl::presentation::compositions::GuiTableComposition*>(nullptr))
		, __vwsn_precompile_2(static_cast<::vl::presentation::compositions::GuiCellComposition*>(nullptr))
		, __vwsn_precompile_3(static_cast<::vl::presentation::controls::GuiLabel*>(nullptr))
		, __vwsn_precompile_4(static_cast<::vl::presentation::compositions::GuiCellComposition*>(nullptr))
		, __vwsn_precompile_5(static_cast<::vl::presentation::compositions::GuiBoundsComposition*>(nullptr))
		, __vwsn_precompile_6(static_cast<::vl::presentation::compositions::GuiCellComposition*>(nullptr))
		, __vwsn_precompile_7(static_cast<::vl::presentation::controls::GuiLabel*>(nullptr))
		, __vwsn_precompile_8(static_cast<::vl::presentation::compositions::GuiCellComposition*>(nullptr))
		, __vwsn_precompile_9(static_cast<::vl::presentation::compositions::GuiBoundsComposition*>(nullptr))
		, __vwsn_precompile_10(static_cast<::vl::presentation::compositions::GuiCellComposition*>(nullptr))
		, __vwsn_precompile_11(static_cast<::vl::presentation::controls::GuiLabel*>(nullptr))
		, __vwsn_precompile_12(static_cast<::vl::presentation::compositions::GuiCellComposition*>(nullptr))
		, __vwsn_precompile_13(static_cast<::vl::presentation::compositions::GuiBoundsComposition*>(nullptr))
		, __vwsn_precompile_14(static_cast<::vl::presentation::compositions::GuiCellComposition*>(nullptr))
		, __vwsn_precompile_15(static_cast<::vl::presentation::controls::GuiButton*>(nullptr))
		, __vwsn_precompile_16(static_cast<::vl::presentation::compositions::GuiBoundsComposition*>(nullptr))
		, __vwsn_precompile_17(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(nullptr))
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

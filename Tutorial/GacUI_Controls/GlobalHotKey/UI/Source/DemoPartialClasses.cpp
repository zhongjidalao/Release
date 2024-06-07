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

	__vwsnf1_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_::__vwsnf1_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_(::demo::MainWindowConstructor* __vwsnctorthis_0)
		:__vwsnthis_0(::vl::__vwsn::This(__vwsnctorthis_0))
	{
	}

	void __vwsnf1_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_::operator()(::vl::presentation::compositions::GuiGraphicsComposition* sender, ::vl::presentation::compositions::GuiEventArgs* arguments) const
	{
		::vl::__vwsn::This(::vl::presentation::controls::GetApplication())->InvokeInMainThread(static_cast<::vl::presentation::controls::GuiControlHost*>(__vwsnthis_0->self), vl::Func(::vl_workflow_global::__vwsnf2_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize__(__vwsnthis_0)));
	}

	//-------------------------------------------------------------------

	__vwsnf2_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize__::__vwsnf2_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize__(::demo::MainWindowConstructor* __vwsnctorthis_0)
		:__vwsnthis_0(::vl::__vwsn::This(__vwsnctorthis_0))
	{
	}

	void __vwsnf2_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize__::operator()() const
	{
		::vl::__vwsn::This(__vwsnthis_0->dialog)->ShowDialog();
	}

	//-------------------------------------------------------------------

	__vwsnf3_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_::__vwsnf3_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_(::demo::MainWindowConstructor* __vwsnctorthis_0)
		:__vwsnthis_0(::vl::__vwsn::This(__vwsnctorthis_0))
	{
	}

	void __vwsnf3_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_::operator()(::vl::presentation::compositions::GuiGraphicsComposition* sender, ::vl::presentation::compositions::GuiMouseEventArgs* arguments) const
	{
		auto b = ::vl::__vwsn::This(::vl::__vwsn::This(__vwsnthis_0->self)->GetContainerComposition())->GetGlobalBounds();
		auto p = [&](){ ::vl::presentation::Point __vwsn_temp__; __vwsn_temp__.x = (::vl::__vwsn::This(arguments)->x + b.x1); __vwsn_temp__.y = (::vl::__vwsn::This(arguments)->y + b.y1); return __vwsn_temp__; }();
		::vl::__vwsn::This(__vwsnthis_0->menuRightClick)->ShowPopup(static_cast<::vl::presentation::controls::GuiControl*>(__vwsnthis_0->self), p);
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
		(this->__vwsn_precompile_14 = ::vl::__vwsn::This(this->self)->GetContainerComposition());
		{
			::vl::__vwsn::This(this->__vwsn_precompile_14)->SetPreferredMinSize([&](){ ::vl::presentation::Size __vwsn_temp__; __vwsn_temp__.x = static_cast<::vl::vint>(320); __vwsn_temp__.y = static_cast<::vl::vint>(240); return __vwsn_temp__; }());
		}
		{
			::vl::__vwsn::This(this->self)->SetClientSize([&](){ ::vl::presentation::Size __vwsn_temp__; __vwsn_temp__.x = static_cast<::vl::vint>(640); __vwsn_temp__.y = static_cast<::vl::vint>(480); return __vwsn_temp__; }());
		}
		{
			::vl::__vwsn::This(this->self)->SetText(::vl::WString::Unmanaged(L"GlobalHotkey"));
		}
		(this->dialog = new ::vl::presentation::controls::GuiMessageDialog());
		::vl::__vwsn::This(__vwsn_this_)->SetNamedObject(::vl::WString::Unmanaged(L"dialog"), ::vl::__vwsn::Box(this->dialog));
		{
			::vl::__vwsn::This(this->dialog)->SetTitle(::vl::WString::Unmanaged(L"Global Hotkey"));
		}
		{
			::vl::__vwsn::This(this->dialog)->SetText(::vl::WString::Unmanaged(L"The global hotkey is activated!"));
		}
		{
			::vl::__vwsn::This(this->self)->AddComponent(static_cast<::vl::presentation::controls::GuiComponent*>(this->dialog));
		}
		(this->commandGlobal = new ::vl::presentation::controls::GuiToolstripCommand());
		::vl::__vwsn::This(__vwsn_this_)->SetNamedObject(::vl::WString::Unmanaged(L"commandGlobal"), ::vl::__vwsn::Box(this->commandGlobal));
		{
			::vl::__vwsn::This(this->commandGlobal)->SetShortcutBuilder(::vl::WString::Unmanaged(L"global:Ctrl+Shift+Alt+D"));
		}
		{
			::vl::__vwsn::This(this->commandGlobal)->SetText(::vl::WString::Unmanaged(L"Show Message Dialog"));
		}
		{
			::vl::__vwsn::This(this->self)->AddComponent(static_cast<::vl::presentation::controls::GuiComponent*>(this->commandGlobal));
		}
		{
			(this->menuRightClick = new ::vl::presentation::controls::GuiToolstripMenu(::vl::presentation::theme::ThemeName::Menu, static_cast<::vl::presentation::controls::GuiControl*>(nullptr)));
			::vl::__vwsn::This(__vwsn_this_)->SetNamedObject(::vl::WString::Unmanaged(L"menuRightClick"), ::vl::__vwsn::Box(this->menuRightClick));
		}
		{
			(this->__vwsn_precompile_0 = new ::vl::presentation::controls::GuiToolstripGroupContainer(::vl::presentation::theme::ThemeName::CustomControl));
		}
		{
			(this->__vwsn_precompile_1 = new ::vl::presentation::controls::GuiToolstripGroup(::vl::presentation::theme::ThemeName::CustomControl));
		}
		{
			(this->__vwsn_precompile_2 = new ::vl::presentation::controls::GuiToolstripButton(::vl::presentation::theme::ThemeName::MenuItemButton));
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::UnboxCollection<::vl::reflection::description::IValueList>(::vl::__vwsn::This(this->__vwsn_precompile_1)->GetToolstripItems()).Obj())->Add(::vl::__vwsn::Box(this->__vwsn_precompile_2));
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::UnboxCollection<::vl::reflection::description::IValueList>(::vl::__vwsn::This(this->__vwsn_precompile_0)->GetToolstripItems()).Obj())->Add(::vl::__vwsn::Box(this->__vwsn_precompile_1));
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::UnboxCollection<::vl::reflection::description::IValueList>(::vl::__vwsn::This(this->menuRightClick)->GetToolstripItems()).Obj())->Add(::vl::__vwsn::Box(this->__vwsn_precompile_0));
		}
		{
			::vl::__vwsn::This(this->self)->AddControlHostComponent(static_cast<::vl::presentation::controls::GuiControlHost*>(this->menuRightClick));
		}
		(this->__vwsn_precompile_3 = new ::vl::presentation::compositions::GuiTableComposition());
		{
			::vl::__vwsn::This(this->__vwsn_precompile_3)->SetMinSizeLimitation(::vl::presentation::compositions::GuiGraphicsComposition::MinSizeLimitation::LimitToElementAndChildren);
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_3)->SetAlignmentToParent([&](){ ::vl::presentation::Margin __vwsn_temp__; __vwsn_temp__.left = static_cast<::vl::vint>(0); __vwsn_temp__.top = static_cast<::vl::vint>(0); __vwsn_temp__.right = static_cast<::vl::vint>(0); __vwsn_temp__.bottom = static_cast<::vl::vint>(0); return __vwsn_temp__; }());
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_3)->SetBorderVisible(false);
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_3)->SetCellPadding(static_cast<::vl::vint>(5));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_3)->SetRowsAndColumns(static_cast<::vl::vint>(2), static_cast<::vl::vint>(1));
			::vl::__vwsn::This(this->__vwsn_precompile_3)->SetRowOption(static_cast<::vl::vint>(0), [&](){ ::vl::presentation::compositions::GuiCellOption __vwsn_temp__; __vwsn_temp__.composeType = ::vl::presentation::compositions::GuiCellOption::ComposeType::MinSize; return __vwsn_temp__; }());
			::vl::__vwsn::This(this->__vwsn_precompile_3)->SetRowOption(static_cast<::vl::vint>(1), [&](){ ::vl::presentation::compositions::GuiCellOption __vwsn_temp__; __vwsn_temp__.composeType = ::vl::presentation::compositions::GuiCellOption::ComposeType::Percentage; __vwsn_temp__.percentage = static_cast<double>(1.0); return __vwsn_temp__; }());
			::vl::__vwsn::This(this->__vwsn_precompile_3)->SetColumnOption(static_cast<::vl::vint>(0), [&](){ ::vl::presentation::compositions::GuiCellOption __vwsn_temp__; __vwsn_temp__.composeType = ::vl::presentation::compositions::GuiCellOption::ComposeType::Percentage; __vwsn_temp__.percentage = static_cast<double>(1.0); return __vwsn_temp__; }());
		}
		(this->__vwsn_precompile_4 = new ::vl::presentation::compositions::GuiCellComposition());
		{
			::vl::__vwsn::This(this->__vwsn_precompile_4)->SetSite(static_cast<::vl::vint>(0), static_cast<::vl::vint>(0), static_cast<::vl::vint>(1), static_cast<::vl::vint>(1));
		}
		{
			(this->__vwsn_precompile_5 = new ::vl::presentation::controls::GuiToolstripMenuBar(::vl::presentation::theme::ThemeName::MenuBar));
		}
		(this->__vwsn_precompile_10 = ::vl::__vwsn::This(this->__vwsn_precompile_5)->GetBoundsComposition());
		{
			::vl::__vwsn::This(this->__vwsn_precompile_10)->SetAlignmentToParent([&](){ ::vl::presentation::Margin __vwsn_temp__; __vwsn_temp__.left = static_cast<::vl::vint>(0); __vwsn_temp__.top = static_cast<::vl::vint>(0); __vwsn_temp__.right = static_cast<::vl::vint>(0); __vwsn_temp__.bottom = static_cast<::vl::vint>(0); return __vwsn_temp__; }());
		}
		{
			(this->__vwsn_precompile_6 = new ::vl::presentation::controls::GuiToolstripButton(::vl::presentation::theme::ThemeName::MenuBarButton));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_6)->SetAlt(::vl::WString::Unmanaged(L"A"));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_6)->SetText(::vl::WString::Unmanaged(L"A Menu"));
		}
		(this->__vwsn_precompile_7 = ::vl::__vwsn::This(this->__vwsn_precompile_6)->EnsureToolstripSubMenu());
		{
			(this->__vwsn_precompile_8 = new ::vl::presentation::controls::GuiToolstripGroup(::vl::presentation::theme::ThemeName::CustomControl));
		}
		{
			(this->__vwsn_precompile_9 = new ::vl::presentation::controls::GuiToolstripButton(::vl::presentation::theme::ThemeName::MenuItemButton));
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::UnboxCollection<::vl::reflection::description::IValueList>(::vl::__vwsn::This(this->__vwsn_precompile_8)->GetToolstripItems()).Obj())->Add(::vl::__vwsn::Box(this->__vwsn_precompile_9));
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::UnboxCollection<::vl::reflection::description::IValueList>(::vl::__vwsn::This(this->__vwsn_precompile_7)->GetToolstripItems()).Obj())->Add(::vl::__vwsn::Box(this->__vwsn_precompile_8));
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::UnboxCollection<::vl::reflection::description::IValueList>(::vl::__vwsn::This(this->__vwsn_precompile_5)->GetToolstripItems()).Obj())->Add(::vl::__vwsn::Box(this->__vwsn_precompile_6));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_4)->AddChild(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(::vl::__vwsn::This(this->__vwsn_precompile_5)->GetBoundsComposition()));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_3)->AddChild(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(this->__vwsn_precompile_4));
		}
		(this->__vwsn_precompile_11 = new ::vl::presentation::compositions::GuiCellComposition());
		{
			::vl::__vwsn::This(this->__vwsn_precompile_11)->SetSite(static_cast<::vl::vint>(1), static_cast<::vl::vint>(0), static_cast<::vl::vint>(1), static_cast<::vl::vint>(1));
		}
		{
			(this->__vwsn_precompile_12 = new ::vl::presentation::controls::GuiLabel(::vl::presentation::theme::ThemeName::Label));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_12)->SetFont(::vl::Nullable<::vl::presentation::FontProperties>([&](){ ::vl::presentation::FontProperties __vwsn_temp__; __vwsn_temp__.fontFamily = ::vl::WString::Unmanaged(L"Segoe UI"); __vwsn_temp__.size = static_cast<::vl::vint>(24); return __vwsn_temp__; }()));
		}
		(this->__vwsn_precompile_13 = ::vl::__vwsn::This(this->__vwsn_precompile_12)->GetBoundsComposition());
		{
			::vl::__vwsn::This(this->__vwsn_precompile_13)->SetAlignmentToParent([&](){ ::vl::presentation::Margin __vwsn_temp__; __vwsn_temp__.left = static_cast<::vl::vint>(5); __vwsn_temp__.top = static_cast<::vl::vint>(0); __vwsn_temp__.right = static_cast<::vl::vint>(5); __vwsn_temp__.bottom = static_cast<::vl::vint>(0); return __vwsn_temp__; }());
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_12)->SetText(::vl::WString::Unmanaged(L"Right click to show the menu"));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_11)->AddChild(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(::vl::__vwsn::This(this->__vwsn_precompile_12)->GetBoundsComposition()));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_3)->AddChild(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(this->__vwsn_precompile_11));
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this->self)->GetContainerComposition())->AddChild(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(this->__vwsn_precompile_3));
		}
		{
			auto __vwsn_event_handler_ = vl::Func(::vl_workflow_global::__vwsnf1_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_(this));
			::vl::__vwsn::EventAttach(::vl::__vwsn::This(this->commandGlobal)->Executed, __vwsn_event_handler_);
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_2)->SetCommand(this->commandGlobal);
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_9)->SetCommand(this->commandGlobal);
		}
		{
			auto __vwsn_event_handler_ = vl::Func(::vl_workflow_global::__vwsnf3_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_(this));
			::vl::__vwsn::EventAttach(::vl::__vwsn::This(this->__vwsn_precompile_14)->GetEventReceiver()->rightButtonDown, __vwsn_event_handler_);
		}
	}

	MainWindowConstructor::MainWindowConstructor()
		: self(static_cast<::demo::MainWindow*>(nullptr))
		, dialog(static_cast<::vl::presentation::controls::GuiMessageDialog*>(nullptr))
		, commandGlobal(static_cast<::vl::presentation::controls::GuiToolstripCommand*>(nullptr))
		, menuRightClick(static_cast<::vl::presentation::controls::GuiToolstripMenu*>(nullptr))
		, __vwsn_precompile_0(static_cast<::vl::presentation::controls::GuiToolstripGroupContainer*>(nullptr))
		, __vwsn_precompile_1(static_cast<::vl::presentation::controls::GuiToolstripGroup*>(nullptr))
		, __vwsn_precompile_2(static_cast<::vl::presentation::controls::GuiToolstripButton*>(nullptr))
		, __vwsn_precompile_3(static_cast<::vl::presentation::compositions::GuiTableComposition*>(nullptr))
		, __vwsn_precompile_4(static_cast<::vl::presentation::compositions::GuiCellComposition*>(nullptr))
		, __vwsn_precompile_5(static_cast<::vl::presentation::controls::GuiToolstripMenuBar*>(nullptr))
		, __vwsn_precompile_6(static_cast<::vl::presentation::controls::GuiToolstripButton*>(nullptr))
		, __vwsn_precompile_7(static_cast<::vl::presentation::controls::GuiToolstripMenu*>(nullptr))
		, __vwsn_precompile_8(static_cast<::vl::presentation::controls::GuiToolstripGroup*>(nullptr))
		, __vwsn_precompile_9(static_cast<::vl::presentation::controls::GuiToolstripButton*>(nullptr))
		, __vwsn_precompile_10(static_cast<::vl::presentation::compositions::GuiBoundsComposition*>(nullptr))
		, __vwsn_precompile_11(static_cast<::vl::presentation::compositions::GuiCellComposition*>(nullptr))
		, __vwsn_precompile_12(static_cast<::vl::presentation::controls::GuiLabel*>(nullptr))
		, __vwsn_precompile_13(static_cast<::vl::presentation::compositions::GuiBoundsComposition*>(nullptr))
		, __vwsn_precompile_14(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(nullptr))
	{
	}

/***********************************************************************
Class (::demo::MainWindow)
***********************************************************************/

	MainWindow::MainWindow()
		: ::vl::presentation::controls::GuiWindow(::vl::presentation::theme::ThemeName::Window)
	{
		auto __vwsn_resource_ = ::vl::__vwsn::This(::vl::presentation::GetResourceManager())->GetResourceFromClassName(::vl::WString::Unmanaged(L"demo::MainWindow"));
		auto __vwsn_resolver_ = ::vl::Ptr<::vl::presentation::GuiResourcePathResolver>(new ::vl::presentation::GuiResourcePathResolver(__vwsn_resource_, ::vl::__vwsn::This(__vwsn_resource_.Obj())->GetWorkingDirectory()));
		::vl::__vwsn::This(this)->SetResourceResolver(__vwsn_resolver_);
		::vl::__vwsn::This(this)->__vwsn_demo_MainWindow_Initialize(this);
	}

	MainWindow::~MainWindow()
	{
		this->FinalizeInstanceRecursively(static_cast<::vl::presentation::controls::GuiControlHost*>(this));
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

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
#elif defined(__GNUC__)
#pragma GCC diagnostic push
#elif defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wparentheses-equality"
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

	void __vwsnf1_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_::operator()(const ::vl::reflection::description::Value& __vwsn_value_) const
	{
		auto __vwsn_old_ = ::vl::__vwsn::This(__vwsnthis_0->__vwsn_precompile_7)->GetText();
		auto __vwsn_new_ = ::vl::__vwsn::Unbox<::vl::WString>(__vwsn_value_);
		if ((__vwsn_old_ == __vwsn_new_))
		{
			return;
		}
		::vl::__vwsn::This(__vwsnthis_0->__vwsn_precompile_7)->SetText(__vwsn_new_);
	}

	//-------------------------------------------------------------------

	__vwsnc1_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize__vl_reflection_description_IValueSubscription::__vwsnc1_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize__vl_reflection_description_IValueSubscription(::demo::MainWindowConstructor* __vwsnctorthis_0)
		:__vwsnthis_0(::vl::__vwsn::This(__vwsnctorthis_0))
	{
		this->__vwsn_bind_cache_0 = static_cast<::vl::presentation::controls::GuiSinglelineTextBox*>(nullptr);
		this->__vwsn_bind_handler_0_0 = ::vl::Ptr<::vl::reflection::description::IEventHandler>();
		this->__vwsn_bind_opened_ = false;
		this->__vwsn_bind_closed_ = false;
	}

	void __vwsnc1_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize__vl_reflection_description_IValueSubscription::__vwsn_bind_activator_()
	{
		auto __vwsn_bind_activator_result_ = ::vl::__vwsn::This(__vwsnthis_0->ViewModel.Obj())->GetMessageFromName(::vl::__vwsn::This(__vwsn_bind_cache_0)->GetText());
		::vl::__vwsn::EventInvoke(this->ValueChanged)(::vl::__vwsn::Box(__vwsn_bind_activator_result_));
	}

	void __vwsnc1_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize__vl_reflection_description_IValueSubscription::__vwsn_bind_callback_0_0(::vl::presentation::compositions::GuiGraphicsComposition* __vwsn_bind_callback_argument_0, ::vl::presentation::compositions::GuiEventArgs* __vwsn_bind_callback_argument_1)
	{
		this->__vwsn_bind_activator_();
	}

	bool __vwsnc1_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize__vl_reflection_description_IValueSubscription::Open()
	{
		if ((! __vwsn_bind_opened_))
		{
			(__vwsn_bind_opened_ = true);
			(__vwsn_bind_cache_0 = [&](){ try{ return __vwsnthis_0->textBoxName; } catch(...){ return static_cast<::vl::presentation::controls::GuiSinglelineTextBox*>(nullptr); } }());
			(__vwsn_bind_handler_0_0 = [&](){ try{ return ::vl::__vwsn::EventAttach(::vl::__vwsn::This(__vwsn_bind_cache_0)->TextChanged, ::vl::Func<void(::vl::presentation::compositions::GuiGraphicsComposition*, ::vl::presentation::compositions::GuiEventArgs*)>(this, &__vwsnc1_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize__vl_reflection_description_IValueSubscription::__vwsn_bind_callback_0_0)); } catch(...){ return ::vl::Ptr<::vl::reflection::description::IEventHandler>(); } }());
			return true;
		}
		return false;
	}

	bool __vwsnc1_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize__vl_reflection_description_IValueSubscription::Update()
	{
		if ((__vwsn_bind_opened_ && (! __vwsn_bind_closed_)))
		{
			this->__vwsn_bind_activator_();
			return true;
		}
		return false;
	}

	bool __vwsnc1_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize__vl_reflection_description_IValueSubscription::Close()
	{
		if ((! __vwsn_bind_closed_))
		{
			(__vwsn_bind_closed_ = true);
			if (static_cast<bool>(__vwsn_bind_handler_0_0))
			{
				::vl::__vwsn::EventDetach(::vl::__vwsn::This(__vwsn_bind_cache_0)->TextChanged, __vwsn_bind_handler_0_0);
				(__vwsn_bind_handler_0_0 = ::vl::Ptr<::vl::reflection::description::IEventHandler>());
			}
			(__vwsn_bind_cache_0 = static_cast<::vl::presentation::controls::GuiSinglelineTextBox*>(nullptr));
			(__vwsn_bind_handler_0_0 = ::vl::Ptr<::vl::reflection::description::IEventHandler>());
			return true;
		}
		return false;
	}

}

/***********************************************************************
Class (::demo::IViewModel)
***********************************************************************/

namespace demo
{
/***********************************************************************
Class (::demo::MainWindowConstructor)
***********************************************************************/

	void MainWindowConstructor::__vwsn_demo_MainWindow_Initialize(::demo::MainWindow* __vwsn_this_)
	{
		(this->__vwsn_precompile_0 = __vwsn_this_);
		(this->ViewModel = ::vl::__vwsn::This(__vwsn_this_)->GetViewModel());
		(this->__vwsn_precompile_8 = ::vl::__vwsn::This(this->__vwsn_precompile_0)->GetBoundsComposition());
		{
			::vl::__vwsn::This(this->__vwsn_precompile_8)->SetPreferredMinSize([&](){ ::vl::presentation::Size __vwsn_temp__; __vwsn_temp__.x = static_cast<::vl::vint>(480); __vwsn_temp__.y = static_cast<::vl::vint>(320); return __vwsn_temp__; }());
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_0)->SetClientSize([&](){ ::vl::presentation::Size __vwsn_temp__; __vwsn_temp__.x = static_cast<::vl::vint>(480); __vwsn_temp__.y = static_cast<::vl::vint>(320); return __vwsn_temp__; }());
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_0)->SetText(::vl::WString::Unmanaged(L"Binding_ViewModel"));
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
			::vl::__vwsn::This(this->__vwsn_precompile_1)->SetRowsAndColumns(static_cast<::vl::vint>(3), static_cast<::vl::vint>(3));
			::vl::__vwsn::This(this->__vwsn_precompile_1)->SetRowOption(static_cast<::vl::vint>(0), [&](){ ::vl::presentation::compositions::GuiCellOption __vwsn_temp__; __vwsn_temp__.composeType = ::vl::presentation::compositions::GuiCellOption::ComposeType::MinSize; return __vwsn_temp__; }());
			::vl::__vwsn::This(this->__vwsn_precompile_1)->SetRowOption(static_cast<::vl::vint>(1), [&](){ ::vl::presentation::compositions::GuiCellOption __vwsn_temp__; __vwsn_temp__.composeType = ::vl::presentation::compositions::GuiCellOption::ComposeType::MinSize; return __vwsn_temp__; }());
			::vl::__vwsn::This(this->__vwsn_precompile_1)->SetRowOption(static_cast<::vl::vint>(2), [&](){ ::vl::presentation::compositions::GuiCellOption __vwsn_temp__; __vwsn_temp__.composeType = ::vl::presentation::compositions::GuiCellOption::ComposeType::Percentage; __vwsn_temp__.percentage = static_cast<double>(1.0); return __vwsn_temp__; }());
			::vl::__vwsn::This(this->__vwsn_precompile_1)->SetColumnOption(static_cast<::vl::vint>(0), [&](){ ::vl::presentation::compositions::GuiCellOption __vwsn_temp__; __vwsn_temp__.composeType = ::vl::presentation::compositions::GuiCellOption::ComposeType::MinSize; return __vwsn_temp__; }());
			::vl::__vwsn::This(this->__vwsn_precompile_1)->SetColumnOption(static_cast<::vl::vint>(1), [&](){ ::vl::presentation::compositions::GuiCellOption __vwsn_temp__; __vwsn_temp__.composeType = ::vl::presentation::compositions::GuiCellOption::ComposeType::Absolute; __vwsn_temp__.absolute = static_cast<::vl::vint>(100); return __vwsn_temp__; }());
			::vl::__vwsn::This(this->__vwsn_precompile_1)->SetColumnOption(static_cast<::vl::vint>(2), [&](){ ::vl::presentation::compositions::GuiCellOption __vwsn_temp__; __vwsn_temp__.composeType = ::vl::presentation::compositions::GuiCellOption::ComposeType::Percentage; __vwsn_temp__.percentage = static_cast<double>(1.0); return __vwsn_temp__; }());
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
			::vl::__vwsn::This(this->__vwsn_precompile_3)->SetText(::vl::WString::Unmanaged(L"Type your name : "));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_2)->AddChild(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(::vl::__vwsn::This(this->__vwsn_precompile_3)->GetBoundsComposition()));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_1)->AddChild(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(this->__vwsn_precompile_2));
		}
		(this->__vwsn_precompile_4 = new ::vl::presentation::compositions::GuiCellComposition());
		{
			::vl::__vwsn::This(this->__vwsn_precompile_4)->SetSite(static_cast<::vl::vint>(0), static_cast<::vl::vint>(1), static_cast<::vl::vint>(1), static_cast<::vl::vint>(1));
		}
		{
			(this->textBoxName = new ::vl::presentation::controls::GuiSinglelineTextBox(::vl::presentation::theme::ThemeName::SinglelineTextBox));
		}
		(this->__vwsn_precompile_5 = ::vl::__vwsn::This(this->textBoxName)->GetBoundsComposition());
		{
			::vl::__vwsn::This(this->__vwsn_precompile_5)->SetAlignmentToParent([&](){ ::vl::presentation::Margin __vwsn_temp__; __vwsn_temp__.left = static_cast<::vl::vint>(0); __vwsn_temp__.top = static_cast<::vl::vint>(0); __vwsn_temp__.right = static_cast<::vl::vint>(0); __vwsn_temp__.bottom = static_cast<::vl::vint>(0); return __vwsn_temp__; }());
		}
		{
			::vl::__vwsn::This(this->textBoxName)->SetText(::vl::WString::Unmanaged(L"Jack"));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_4)->AddChild(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(::vl::__vwsn::This(this->textBoxName)->GetBoundsComposition()));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_1)->AddChild(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(this->__vwsn_precompile_4));
		}
		(this->__vwsn_precompile_6 = new ::vl::presentation::compositions::GuiCellComposition());
		{
			::vl::__vwsn::This(this->__vwsn_precompile_6)->SetInternalMargin([&](){ ::vl::presentation::Margin __vwsn_temp__; __vwsn_temp__.left = static_cast<::vl::vint>(0); __vwsn_temp__.top = static_cast<::vl::vint>(5); __vwsn_temp__.right = static_cast<::vl::vint>(0); __vwsn_temp__.bottom = static_cast<::vl::vint>(5); return __vwsn_temp__; }());
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_6)->SetSite(static_cast<::vl::vint>(1), static_cast<::vl::vint>(0), static_cast<::vl::vint>(1), static_cast<::vl::vint>(2));
		}
		{
			(this->__vwsn_precompile_7 = new ::vl::presentation::controls::GuiLabel(::vl::presentation::theme::ThemeName::Label));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_6)->AddChild(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(::vl::__vwsn::This(this->__vwsn_precompile_7)->GetBoundsComposition()));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_1)->AddChild(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(this->__vwsn_precompile_6));
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this->__vwsn_precompile_0)->GetContainerComposition())->AddChild(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(this->__vwsn_precompile_1));
		}
		{
			auto __vwsn_created_subscription_ = ::vl::Ptr<::vl::reflection::description::IValueSubscription>(new ::vl_workflow_global::__vwsnc1_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize__vl_reflection_description_IValueSubscription(this));
			::vl::__vwsn::EventAttach(::vl::__vwsn::This(__vwsn_created_subscription_.Obj())->ValueChanged, LAMBDA(::vl_workflow_global::__vwsnf1_Demo_demo_MainWindowConstructor___vwsn_demo_MainWindow_Initialize_(this)));
			::vl::__vwsn::This(__vwsn_this_)->AddSubscription(__vwsn_created_subscription_);
		}
	}

	MainWindowConstructor::MainWindowConstructor()
		: ViewModel(::vl::Ptr<::demo::IViewModel>())
		, textBoxName(static_cast<::vl::presentation::controls::GuiSinglelineTextBox*>(nullptr))
		, __vwsn_precompile_0(static_cast<::demo::MainWindow*>(nullptr))
		, __vwsn_precompile_1(static_cast<::vl::presentation::compositions::GuiTableComposition*>(nullptr))
		, __vwsn_precompile_2(static_cast<::vl::presentation::compositions::GuiCellComposition*>(nullptr))
		, __vwsn_precompile_3(static_cast<::vl::presentation::controls::GuiLabel*>(nullptr))
		, __vwsn_precompile_4(static_cast<::vl::presentation::compositions::GuiCellComposition*>(nullptr))
		, __vwsn_precompile_5(static_cast<::vl::presentation::compositions::GuiBoundsComposition*>(nullptr))
		, __vwsn_precompile_6(static_cast<::vl::presentation::compositions::GuiCellComposition*>(nullptr))
		, __vwsn_precompile_7(static_cast<::vl::presentation::controls::GuiLabel*>(nullptr))
		, __vwsn_precompile_8(static_cast<::vl::presentation::compositions::GuiBoundsComposition*>(nullptr))
	{
	}

/***********************************************************************
Class (::demo::MainWindow)
***********************************************************************/

	::vl::Ptr<::demo::IViewModel> MainWindow::GetViewModel()
	{
		return this->__vwsn_parameter_ViewModel;
	}

	MainWindow::MainWindow(::vl::Ptr<::demo::IViewModel> __vwsn_ctor_parameter_ViewModel)
		: ::vl::presentation::controls::GuiWindow(::vl::presentation::theme::ThemeName::Window)
		, __vwsn_parameter_ViewModel(::vl::Ptr<::demo::IViewModel>())
	{
		(this->__vwsn_parameter_ViewModel = __vwsn_ctor_parameter_ViewModel);
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
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#elif defined(__clang__)
#pragma clang diagnostic pop
#endif

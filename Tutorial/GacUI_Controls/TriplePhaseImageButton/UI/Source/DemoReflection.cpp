﻿/***********************************************************************
!!!!!! DO NOT MODIFY !!!!!!

GacGen.exe Resource.xml

This file is generated by Workflow compiler
https://github.com/vczh-libraries
***********************************************************************/

#include "DemoReflection.h"

#if defined( _MSC_VER)
#pragma warning(push)
#pragma warning(disable:4250)
#elif defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wparentheses-equality"
#elif defined(__GNUC__)
#pragma GCC diagnostic push
#endif

/***********************************************************************
Reflection
***********************************************************************/

namespace vl
{
	namespace reflection
	{
		namespace description
		{
#ifndef VCZH_DEBUG_NO_REFLECTION
			IMPL_CPP_TYPE_INFO(TripleState)
			IMPL_CPP_TYPE_INFO(demo::MainWindow)
			IMPL_CPP_TYPE_INFO(demo::MainWindowConstructor)
			IMPL_CPP_TYPE_INFO(demo::TriplePhaseButton)
			IMPL_CPP_TYPE_INFO(demo::TriplePhaseButtonConstructor)
			IMPL_CPP_TYPE_INFO(demo::TriplePhaseImageButtonTemplate)
			IMPL_CPP_TYPE_INFO(demo::TriplePhaseImageButtonTemplateConstructor)

#ifdef VCZH_DESCRIPTABLEOBJECT_WITH_METADATA
#define _ ,
			BEGIN_ENUM_ITEM(::TripleState)
				ENUM_CLASS_ITEM(Checked)
				ENUM_CLASS_ITEM(Normal)
				ENUM_CLASS_ITEM(Partial)
			END_ENUM_ITEM(::TripleState)

			BEGIN_CLASS_MEMBER(::demo::MainWindow)
				CLASS_MEMBER_BASE(::vl::presentation::controls::GuiWindow)
				CLASS_MEMBER_BASE(::demo::MainWindowConstructor)
				CLASS_MEMBER_CONSTRUCTOR(::demo::MainWindow*(), NO_PARAMETER)
			END_CLASS_MEMBER(::demo::MainWindow)

			BEGIN_CLASS_MEMBER(::demo::MainWindowConstructor)
				CLASS_MEMBER_BASE(::vl::reflection::DescriptableObject)
				CLASS_MEMBER_CONSTRUCTOR(::vl::Ptr<::demo::MainWindowConstructor>(), NO_PARAMETER)
				CLASS_MEMBER_METHOD(__vwsn_demo_MainWindow_Initialize, { L"__vwsn_this_" })
				CLASS_MEMBER_FIELD(__vwsn_precompile_0)
				CLASS_MEMBER_FIELD(__vwsn_precompile_1)
				CLASS_MEMBER_FIELD(__vwsn_precompile_2)
				CLASS_MEMBER_FIELD(__vwsn_precompile_3)
				CLASS_MEMBER_FIELD(__vwsn_precompile_4)
				CLASS_MEMBER_FIELD(__vwsn_precompile_5)
				CLASS_MEMBER_FIELD(__vwsn_precompile_6)
				CLASS_MEMBER_FIELD(button)
			END_CLASS_MEMBER(::demo::MainWindowConstructor)

			BEGIN_CLASS_MEMBER(::demo::TriplePhaseButton)
				CLASS_MEMBER_BASE(::vl::presentation::controls::GuiCustomControl)
				CLASS_MEMBER_BASE(::demo::TriplePhaseButtonConstructor)
				CLASS_MEMBER_CONSTRUCTOR(::demo::TriplePhaseButton*(), NO_PARAMETER)
				CLASS_MEMBER_METHOD(GetCheckedImage, NO_PARAMETER)
				CLASS_MEMBER_METHOD(GetPartialImage, NO_PARAMETER)
				CLASS_MEMBER_METHOD(GetState, NO_PARAMETER)
				CLASS_MEMBER_METHOD(SetCheckedImage, { L"__vwsn_value_" })
				CLASS_MEMBER_METHOD(SetPartialImage, { L"__vwsn_value_" })
				CLASS_MEMBER_METHOD(SetState, { L"__vwsn_value_" })
				CLASS_MEMBER_EVENT(CheckedImageChanged)
				CLASS_MEMBER_EVENT(PartialImageChanged)
				CLASS_MEMBER_EVENT(StateChanged)
				CLASS_MEMBER_FIELD(__vwsn_prop_CheckedImage)
				CLASS_MEMBER_FIELD(__vwsn_prop_PartialImage)
				CLASS_MEMBER_FIELD(__vwsn_prop_State)
				CLASS_MEMBER_PROPERTY_EVENT(CheckedImage, GetCheckedImage, SetCheckedImage, CheckedImageChanged)
				CLASS_MEMBER_PROPERTY_EVENT(PartialImage, GetPartialImage, SetPartialImage, PartialImageChanged)
				CLASS_MEMBER_PROPERTY_EVENT(State, GetState, SetState, StateChanged)
			END_CLASS_MEMBER(::demo::TriplePhaseButton)

			BEGIN_CLASS_MEMBER(::demo::TriplePhaseButtonConstructor)
				CLASS_MEMBER_BASE(::vl::reflection::DescriptableObject)
				CLASS_MEMBER_CONSTRUCTOR(::vl::Ptr<::demo::TriplePhaseButtonConstructor>(), NO_PARAMETER)
				CLASS_MEMBER_METHOD(__vwsn_demo_TriplePhaseButton_Initialize, { L"__vwsn_this_" })
				CLASS_MEMBER_FIELD(__vwsn_precompile_0)
				CLASS_MEMBER_FIELD(__vwsn_precompile_1)
				CLASS_MEMBER_FIELD(self)
			END_CLASS_MEMBER(::demo::TriplePhaseButtonConstructor)

			BEGIN_CLASS_MEMBER(::demo::TriplePhaseImageButtonTemplate)
				CLASS_MEMBER_BASE(::vl::presentation::templates::GuiButtonTemplate)
				CLASS_MEMBER_BASE(::demo::TriplePhaseImageButtonTemplateConstructor)
				CLASS_MEMBER_CONSTRUCTOR(::demo::TriplePhaseImageButtonTemplate*(), NO_PARAMETER)
			END_CLASS_MEMBER(::demo::TriplePhaseImageButtonTemplate)

			BEGIN_CLASS_MEMBER(::demo::TriplePhaseImageButtonTemplateConstructor)
				CLASS_MEMBER_BASE(::vl::reflection::DescriptableObject)
				CLASS_MEMBER_CONSTRUCTOR(::vl::Ptr<::demo::TriplePhaseImageButtonTemplateConstructor>(), NO_PARAMETER)
				CLASS_MEMBER_METHOD(__vwsn_demo_TriplePhaseImageButtonTemplate_Initialize, { L"__vwsn_this_" })
				CLASS_MEMBER_FIELD(__vwsn_precompile_0)
				CLASS_MEMBER_FIELD(__vwsn_precompile_1)
				CLASS_MEMBER_FIELD(__vwsn_precompile_2)
				CLASS_MEMBER_FIELD(__vwsn_precompile_3)
				CLASS_MEMBER_FIELD(__vwsn_precompile_4)
				CLASS_MEMBER_FIELD(__vwsn_precompile_5)
				CLASS_MEMBER_FIELD(__vwsn_precompile_6)
				CLASS_MEMBER_FIELD(self)
			END_CLASS_MEMBER(::demo::TriplePhaseImageButtonTemplateConstructor)

#undef _
			class DemoTypeLoader : public Object, public ITypeLoader
			{
			public:
				void Load(ITypeManager* manager)
				{
					ADD_TYPE_INFO(::TripleState)
					ADD_TYPE_INFO(::demo::MainWindow)
					ADD_TYPE_INFO(::demo::MainWindowConstructor)
					ADD_TYPE_INFO(::demo::TriplePhaseButton)
					ADD_TYPE_INFO(::demo::TriplePhaseButtonConstructor)
					ADD_TYPE_INFO(::demo::TriplePhaseImageButtonTemplate)
					ADD_TYPE_INFO(::demo::TriplePhaseImageButtonTemplateConstructor)
				}

				void Unload(ITypeManager* manager)
				{
				}
			};
#endif
#endif

			bool LoadDemoTypes()
			{
#ifdef VCZH_DESCRIPTABLEOBJECT_WITH_METADATA
				if (auto manager = GetGlobalTypeManager())
				{
					return manager->AddTypeLoader(Ptr(new DemoTypeLoader));
				}
#endif
				return false;
			}
		}
	}
}

#if defined( _MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif

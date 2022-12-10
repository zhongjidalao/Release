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
			IMPL_CPP_TYPE_INFO(demo::MainWindow)
			IMPL_CPP_TYPE_INFO(demo::MainWindowConstructor)

#ifdef VCZH_DESCRIPTABLEOBJECT_WITH_METADATA
#define _ ,
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
				CLASS_MEMBER_FIELD(__vwsn_precompile_10)
				CLASS_MEMBER_FIELD(__vwsn_precompile_11)
				CLASS_MEMBER_FIELD(__vwsn_precompile_12)
				CLASS_MEMBER_FIELD(__vwsn_precompile_13)
				CLASS_MEMBER_FIELD(__vwsn_precompile_14)
				CLASS_MEMBER_FIELD(__vwsn_precompile_15)
				CLASS_MEMBER_FIELD(__vwsn_precompile_16)
				CLASS_MEMBER_FIELD(__vwsn_precompile_17)
				CLASS_MEMBER_FIELD(__vwsn_precompile_18)
				CLASS_MEMBER_FIELD(__vwsn_precompile_19)
				CLASS_MEMBER_FIELD(__vwsn_precompile_2)
				CLASS_MEMBER_FIELD(__vwsn_precompile_20)
				CLASS_MEMBER_FIELD(__vwsn_precompile_21)
				CLASS_MEMBER_FIELD(__vwsn_precompile_22)
				CLASS_MEMBER_FIELD(__vwsn_precompile_23)
				CLASS_MEMBER_FIELD(__vwsn_precompile_24)
				CLASS_MEMBER_FIELD(__vwsn_precompile_25)
				CLASS_MEMBER_FIELD(__vwsn_precompile_26)
				CLASS_MEMBER_FIELD(__vwsn_precompile_27)
				CLASS_MEMBER_FIELD(__vwsn_precompile_28)
				CLASS_MEMBER_FIELD(__vwsn_precompile_29)
				CLASS_MEMBER_FIELD(__vwsn_precompile_3)
				CLASS_MEMBER_FIELD(__vwsn_precompile_30)
				CLASS_MEMBER_FIELD(__vwsn_precompile_31)
				CLASS_MEMBER_FIELD(__vwsn_precompile_32)
				CLASS_MEMBER_FIELD(__vwsn_precompile_33)
				CLASS_MEMBER_FIELD(__vwsn_precompile_34)
				CLASS_MEMBER_FIELD(__vwsn_precompile_35)
				CLASS_MEMBER_FIELD(__vwsn_precompile_36)
				CLASS_MEMBER_FIELD(__vwsn_precompile_37)
				CLASS_MEMBER_FIELD(__vwsn_precompile_38)
				CLASS_MEMBER_FIELD(__vwsn_precompile_39)
				CLASS_MEMBER_FIELD(__vwsn_precompile_4)
				CLASS_MEMBER_FIELD(__vwsn_precompile_40)
				CLASS_MEMBER_FIELD(__vwsn_precompile_41)
				CLASS_MEMBER_FIELD(__vwsn_precompile_42)
				CLASS_MEMBER_FIELD(__vwsn_precompile_43)
				CLASS_MEMBER_FIELD(__vwsn_precompile_44)
				CLASS_MEMBER_FIELD(__vwsn_precompile_45)
				CLASS_MEMBER_FIELD(__vwsn_precompile_46)
				CLASS_MEMBER_FIELD(__vwsn_precompile_47)
				CLASS_MEMBER_FIELD(__vwsn_precompile_48)
				CLASS_MEMBER_FIELD(__vwsn_precompile_49)
				CLASS_MEMBER_FIELD(__vwsn_precompile_5)
				CLASS_MEMBER_FIELD(__vwsn_precompile_50)
				CLASS_MEMBER_FIELD(__vwsn_precompile_51)
				CLASS_MEMBER_FIELD(__vwsn_precompile_52)
				CLASS_MEMBER_FIELD(__vwsn_precompile_53)
				CLASS_MEMBER_FIELD(__vwsn_precompile_54)
				CLASS_MEMBER_FIELD(__vwsn_precompile_55)
				CLASS_MEMBER_FIELD(__vwsn_precompile_56)
				CLASS_MEMBER_FIELD(__vwsn_precompile_57)
				CLASS_MEMBER_FIELD(__vwsn_precompile_58)
				CLASS_MEMBER_FIELD(__vwsn_precompile_59)
				CLASS_MEMBER_FIELD(__vwsn_precompile_6)
				CLASS_MEMBER_FIELD(__vwsn_precompile_60)
				CLASS_MEMBER_FIELD(__vwsn_precompile_61)
				CLASS_MEMBER_FIELD(__vwsn_precompile_62)
				CLASS_MEMBER_FIELD(__vwsn_precompile_63)
				CLASS_MEMBER_FIELD(__vwsn_precompile_64)
				CLASS_MEMBER_FIELD(__vwsn_precompile_65)
				CLASS_MEMBER_FIELD(__vwsn_precompile_66)
				CLASS_MEMBER_FIELD(__vwsn_precompile_67)
				CLASS_MEMBER_FIELD(__vwsn_precompile_68)
				CLASS_MEMBER_FIELD(__vwsn_precompile_69)
				CLASS_MEMBER_FIELD(__vwsn_precompile_7)
				CLASS_MEMBER_FIELD(__vwsn_precompile_70)
				CLASS_MEMBER_FIELD(__vwsn_precompile_71)
				CLASS_MEMBER_FIELD(__vwsn_precompile_72)
				CLASS_MEMBER_FIELD(__vwsn_precompile_73)
				CLASS_MEMBER_FIELD(__vwsn_precompile_74)
				CLASS_MEMBER_FIELD(__vwsn_precompile_75)
				CLASS_MEMBER_FIELD(__vwsn_precompile_76)
				CLASS_MEMBER_FIELD(__vwsn_precompile_77)
				CLASS_MEMBER_FIELD(__vwsn_precompile_78)
				CLASS_MEMBER_FIELD(__vwsn_precompile_79)
				CLASS_MEMBER_FIELD(__vwsn_precompile_8)
				CLASS_MEMBER_FIELD(__vwsn_precompile_80)
				CLASS_MEMBER_FIELD(__vwsn_precompile_81)
				CLASS_MEMBER_FIELD(__vwsn_precompile_82)
				CLASS_MEMBER_FIELD(__vwsn_precompile_83)
				CLASS_MEMBER_FIELD(__vwsn_precompile_84)
				CLASS_MEMBER_FIELD(__vwsn_precompile_85)
				CLASS_MEMBER_FIELD(__vwsn_precompile_86)
				CLASS_MEMBER_FIELD(__vwsn_precompile_87)
				CLASS_MEMBER_FIELD(__vwsn_precompile_88)
				CLASS_MEMBER_FIELD(__vwsn_precompile_89)
				CLASS_MEMBER_FIELD(__vwsn_precompile_9)
				CLASS_MEMBER_FIELD(__vwsn_precompile_90)
				CLASS_MEMBER_FIELD(__vwsn_precompile_91)
				CLASS_MEMBER_FIELD(__vwsn_precompile_92)
				CLASS_MEMBER_FIELD(__vwsn_precompile_93)
				CLASS_MEMBER_FIELD(__vwsn_precompile_94)
				CLASS_MEMBER_FIELD(__vwsn_precompile_95)
				CLASS_MEMBER_FIELD(__vwsn_precompile_96)
				CLASS_MEMBER_FIELD(checkBorder)
				CLASS_MEMBER_FIELD(table)
			END_CLASS_MEMBER(::demo::MainWindowConstructor)

#undef _
			class DemoTypeLoader : public Object, public ITypeLoader
			{
			public:
				void Load(ITypeManager* manager)
				{
					ADD_TYPE_INFO(::demo::MainWindow)
					ADD_TYPE_INFO(::demo::MainWindowConstructor)
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

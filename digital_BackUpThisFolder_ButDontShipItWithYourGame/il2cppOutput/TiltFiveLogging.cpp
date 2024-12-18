#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// TiltFive.Singleton`1<TiltFive.Logging.Log>
struct Singleton_1_t343EE254B04F331FF4405E6BDFC520536883F844;
// TiltFive.Singleton`1<System.Object>
struct Singleton_1_t2C7FA88F6F88872284F84C5614C7C4AB8FD01D88;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.ILogger
struct ILogger_tD1F573C6DC829FBA987FA1EBA0A5FA64E0C2BC42;
// TiltFive.Logging.Log
struct Log_tD8E1E454A03F729B62A6300CB66CF73E71C99270;
// TiltFive.Logging.LogSettings
struct LogSettings_t47AB54103B349462F47CE2802F76E42FDFBA783B;
// System.String
struct String_t;

IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILogger_tD1F573C6DC829FBA987FA1EBA0A5FA64E0C2BC42_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Singleton_1_t343EE254B04F331FF4405E6BDFC520536883F844_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral194258A41F4221DE8D14B4B28CB4E9F8B95BCD8E;
IL2CPP_EXTERN_C String_t* _stringLiteral420970FC857D0E541C788790F58AA66962B22CC8;
IL2CPP_EXTERN_C String_t* _stringLiteral4F130946577022936EE02472C36D257149CEBE97;
IL2CPP_EXTERN_C String_t* _stringLiteral8BD8EBBF9AAADE3A1911E0372AF7DEEFC2B7800D;
IL2CPP_EXTERN_C String_t* _stringLiteral9C875FC5A1F359BCA3028786C3DCDC54965A6B08;
IL2CPP_EXTERN_C String_t* _stringLiteral9D732A97035E0C9A85611DD711956BA2DA8D360D;
IL2CPP_EXTERN_C String_t* _stringLiteralD1729618E7D0961334B8E334DAEB72D8AD2F6C09;
IL2CPP_EXTERN_C String_t* _stringLiteralD6671AB681FCCDE604241BD0A83D624C05B26D44;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_1__ctor_m4530065462D8F9FD318CA19C11EC995E82CDC530_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_1_get_Instance_mA9F50A782FF75C346F6D2975F953376B087EAD72_RuntimeMethod_var;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t85DCE71DACCB76D34BE2EE45F55C3FB7E55CD6E0 
{
};

// TiltFive.Singleton`1<TiltFive.Logging.Log>
struct Singleton_1_t343EE254B04F331FF4405E6BDFC520536883F844  : public RuntimeObject
{
};

struct Singleton_1_t343EE254B04F331FF4405E6BDFC520536883F844_StaticFields
{
	// T TiltFive.Singleton`1::instance
	Log_tD8E1E454A03F729B62A6300CB66CF73E71C99270* ___instance_0;
};

// TiltFive.Singleton`1<System.Object>
struct Singleton_1_t2C7FA88F6F88872284F84C5614C7C4AB8FD01D88  : public RuntimeObject
{
};

struct Singleton_1_t2C7FA88F6F88872284F84C5614C7C4AB8FD01D88_StaticFields
{
	// T TiltFive.Singleton`1::instance
	RuntimeObject* ___instance_0;
};
struct Il2CppArrayBounds;

// UnityEngine.Debug
struct Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F  : public RuntimeObject
{
};

struct Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticFields
{
	// UnityEngine.ILogger UnityEngine.Debug::s_DefaultLogger
	RuntimeObject* ___s_DefaultLogger_0;
	// UnityEngine.ILogger UnityEngine.Debug::s_Logger
	RuntimeObject* ___s_Logger_1;
};

// TiltFive.Logging.LogSettings
struct LogSettings_t47AB54103B349462F47CE2802F76E42FDFBA783B  : public RuntimeObject
{
	// System.Int32 TiltFive.Logging.LogSettings::level
	int32_t ___level_0;
	// System.String TiltFive.Logging.LogSettings::TAG
	String_t* ___TAG_1;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// TiltFive.Logging.Log
struct Log_tD8E1E454A03F729B62A6300CB66CF73E71C99270  : public Singleton_1_t343EE254B04F331FF4405E6BDFC520536883F844
{
	// UnityEngine.ILogger TiltFive.Logging.Log::logger
	RuntimeObject* ___logger_1;
	// System.String TiltFive.Logging.Log::tag
	String_t* ___tag_2;
	// System.Int32 TiltFive.Logging.Log::level
	int32_t ___level_3;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T TiltFive.Singleton`1<System.Object>::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Singleton_1_get_Instance_m91110BDBF294123D1E34990CFD7CEED57AF7965A_gshared_inline (const RuntimeMethod* method) ;
// System.Void TiltFive.Singleton`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Singleton_1__ctor_m7764B020C66D789250B6A5601102E65A6D8A9E99_gshared (Singleton_1_t2C7FA88F6F88872284F84C5614C7C4AB8FD01D88* __this, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// T TiltFive.Singleton`1<TiltFive.Logging.Log>::get_Instance()
inline Log_tD8E1E454A03F729B62A6300CB66CF73E71C99270* Singleton_1_get_Instance_mA9F50A782FF75C346F6D2975F953376B087EAD72_inline (const RuntimeMethod* method)
{
	return ((  Log_tD8E1E454A03F729B62A6300CB66CF73E71C99270* (*) (const RuntimeMethod*))Singleton_1_get_Instance_m91110BDBF294123D1E34990CFD7CEED57AF7965A_gshared_inline)(method);
}
// System.Int32 TiltFive.Logging.Log::get_LogLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Log_get_LogLevel_mC1004E7CC9A06177CD0872CF1538D605A310A125 (const RuntimeMethod* method) ;
// System.Void TiltFive.Logging.Log::log(UnityEngine.LogType,System.String,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_log_m2D1B54864F5F4E07D981BD703B5114A2FC54D728 (int32_t ___logType0, String_t* ___tag1, String_t* ___m2, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___list3, const RuntimeMethod* method) ;
// System.String TiltFive.Logging.Log::get_TAG()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Log_get_TAG_mA336E9FDA5C31EAE6C89188EEF3859292E961FBB (const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m74FC0A1259DFA02F3DF6538FC7F3ACF3E1AF0C55 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// UnityEngine.ILogger UnityEngine.Debug::get_unityLogger()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Debug_get_unityLogger_mA872400E9E585FCD6A2DE1717748A458545DE8A4_inline (const RuntimeMethod* method) ;
// System.Void TiltFive.Singleton`1<TiltFive.Logging.Log>::.ctor()
inline void Singleton_1__ctor_m4530065462D8F9FD318CA19C11EC995E82CDC530 (Singleton_1_t343EE254B04F331FF4405E6BDFC520536883F844* __this, const RuntimeMethod* method)
{
	((  void (*) (Singleton_1_t343EE254B04F331FF4405E6BDFC520536883F844*, const RuntimeMethod*))Singleton_1__ctor_m7764B020C66D789250B6A5601102E65A6D8A9E99_gshared)(__this, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TiltFive.Logging.LogSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogSettings__ctor_mFF07E74AD9676E88FC2A9FB55C3D117EFDF30670 (LogSettings_t47AB54103B349462F47CE2802F76E42FDFBA783B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD1729618E7D0961334B8E334DAEB72D8AD2F6C09);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string TAG = "TFI";
		__this->___TAG_1 = _stringLiteralD1729618E7D0961334B8E334DAEB72D8AD2F6C09;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TAG_1), (void*)_stringLiteralD1729618E7D0961334B8E334DAEB72D8AD2F6C09);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String TiltFive.Logging.Log::get_TAG()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Log_get_TAG_mA336E9FDA5C31EAE6C89188EEF3859292E961FBB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_mA9F50A782FF75C346F6D2975F953376B087EAD72_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_t343EE254B04F331FF4405E6BDFC520536883F844_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get => Instance.tag;
		il2cpp_codegen_runtime_class_init_inline(Singleton_1_t343EE254B04F331FF4405E6BDFC520536883F844_il2cpp_TypeInfo_var);
		Log_tD8E1E454A03F729B62A6300CB66CF73E71C99270* L_0;
		L_0 = Singleton_1_get_Instance_mA9F50A782FF75C346F6D2975F953376B087EAD72_inline(Singleton_1_get_Instance_mA9F50A782FF75C346F6D2975F953376B087EAD72_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_1 = L_0->___tag_2;
		return L_1;
	}
}
// System.Void TiltFive.Logging.Log::set_TAG(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_set_TAG_m5A6437DB78359D67C68D910A9CB0098D4F9AE0B1 (String_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_mA9F50A782FF75C346F6D2975F953376B087EAD72_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_t343EE254B04F331FF4405E6BDFC520536883F844_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set => Instance.tag = value;
		il2cpp_codegen_runtime_class_init_inline(Singleton_1_t343EE254B04F331FF4405E6BDFC520536883F844_il2cpp_TypeInfo_var);
		Log_tD8E1E454A03F729B62A6300CB66CF73E71C99270* L_0;
		L_0 = Singleton_1_get_Instance_mA9F50A782FF75C346F6D2975F953376B087EAD72_inline(Singleton_1_get_Instance_mA9F50A782FF75C346F6D2975F953376B087EAD72_RuntimeMethod_var);
		String_t* L_1 = ___value0;
		NullCheck(L_0);
		L_0->___tag_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->___tag_2), (void*)L_1);
		return;
	}
}
// System.Int32 TiltFive.Logging.Log::get_LogLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Log_get_LogLevel_mC1004E7CC9A06177CD0872CF1538D605A310A125 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_mA9F50A782FF75C346F6D2975F953376B087EAD72_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_t343EE254B04F331FF4405E6BDFC520536883F844_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get => Instance.level;
		il2cpp_codegen_runtime_class_init_inline(Singleton_1_t343EE254B04F331FF4405E6BDFC520536883F844_il2cpp_TypeInfo_var);
		Log_tD8E1E454A03F729B62A6300CB66CF73E71C99270* L_0;
		L_0 = Singleton_1_get_Instance_mA9F50A782FF75C346F6D2975F953376B087EAD72_inline(Singleton_1_get_Instance_mA9F50A782FF75C346F6D2975F953376B087EAD72_RuntimeMethod_var);
		NullCheck(L_0);
		int32_t L_1 = L_0->___level_3;
		return L_1;
	}
}
// System.Void TiltFive.Logging.Log::set_LogLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_set_LogLevel_m08EB15459CA6D3CF0B1D34505551227F5E0393FF (int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_tD1F573C6DC829FBA987FA1EBA0A5FA64E0C2BC42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_mA9F50A782FF75C346F6D2975F953376B087EAD72_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_t343EE254B04F331FF4405E6BDFC520536883F844_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instance.level = value;
		il2cpp_codegen_runtime_class_init_inline(Singleton_1_t343EE254B04F331FF4405E6BDFC520536883F844_il2cpp_TypeInfo_var);
		Log_tD8E1E454A03F729B62A6300CB66CF73E71C99270* L_0;
		L_0 = Singleton_1_get_Instance_mA9F50A782FF75C346F6D2975F953376B087EAD72_inline(Singleton_1_get_Instance_mA9F50A782FF75C346F6D2975F953376B087EAD72_RuntimeMethod_var);
		int32_t L_1 = ___value0;
		NullCheck(L_0);
		L_0->___level_3 = L_1;
		// if (INFO_LEVEL <= value)
		int32_t L_2 = ___value0;
		if ((((int32_t)2) > ((int32_t)L_2)))
		{
			goto IL_0020;
		}
	}
	{
		// Instance.logger.filterLogType = LogType.Log;
		il2cpp_codegen_runtime_class_init_inline(Singleton_1_t343EE254B04F331FF4405E6BDFC520536883F844_il2cpp_TypeInfo_var);
		Log_tD8E1E454A03F729B62A6300CB66CF73E71C99270* L_3;
		L_3 = Singleton_1_get_Instance_mA9F50A782FF75C346F6D2975F953376B087EAD72_inline(Singleton_1_get_Instance_mA9F50A782FF75C346F6D2975F953376B087EAD72_RuntimeMethod_var);
		NullCheck(L_3);
		RuntimeObject* L_4 = L_3->___logger_1;
		NullCheck(L_4);
		InterfaceActionInvoker1< int32_t >::Invoke(3 /* System.Void UnityEngine.ILogger::set_filterLogType(UnityEngine.LogType) */, ILogger_tD1F573C6DC829FBA987FA1EBA0A5FA64E0C2BC42_il2cpp_TypeInfo_var, L_4, 3);
		return;
	}

IL_0020:
	{
		// else if (WARN_LEVEL == value)
		int32_t L_5 = ___value0;
		if ((!(((uint32_t)3) == ((uint32_t)L_5))))
		{
			goto IL_0035;
		}
	}
	{
		// Instance.logger.filterLogType = LogType.Warning;
		il2cpp_codegen_runtime_class_init_inline(Singleton_1_t343EE254B04F331FF4405E6BDFC520536883F844_il2cpp_TypeInfo_var);
		Log_tD8E1E454A03F729B62A6300CB66CF73E71C99270* L_6;
		L_6 = Singleton_1_get_Instance_mA9F50A782FF75C346F6D2975F953376B087EAD72_inline(Singleton_1_get_Instance_mA9F50A782FF75C346F6D2975F953376B087EAD72_RuntimeMethod_var);
		NullCheck(L_6);
		RuntimeObject* L_7 = L_6->___logger_1;
		NullCheck(L_7);
		InterfaceActionInvoker1< int32_t >::Invoke(3 /* System.Void UnityEngine.ILogger::set_filterLogType(UnityEngine.LogType) */, ILogger_tD1F573C6DC829FBA987FA1EBA0A5FA64E0C2BC42_il2cpp_TypeInfo_var, L_7, 2);
		return;
	}

IL_0035:
	{
		// else if (ERROR_LEVEL == value)
		int32_t L_8 = ___value0;
		if ((!(((uint32_t)4) == ((uint32_t)L_8))))
		{
			goto IL_004a;
		}
	}
	{
		// Instance.logger.filterLogType = LogType.Error;
		il2cpp_codegen_runtime_class_init_inline(Singleton_1_t343EE254B04F331FF4405E6BDFC520536883F844_il2cpp_TypeInfo_var);
		Log_tD8E1E454A03F729B62A6300CB66CF73E71C99270* L_9;
		L_9 = Singleton_1_get_Instance_mA9F50A782FF75C346F6D2975F953376B087EAD72_inline(Singleton_1_get_Instance_mA9F50A782FF75C346F6D2975F953376B087EAD72_RuntimeMethod_var);
		NullCheck(L_9);
		RuntimeObject* L_10 = L_9->___logger_1;
		NullCheck(L_10);
		InterfaceActionInvoker1< int32_t >::Invoke(3 /* System.Void UnityEngine.ILogger::set_filterLogType(UnityEngine.LogType) */, ILogger_tD1F573C6DC829FBA987FA1EBA0A5FA64E0C2BC42_il2cpp_TypeInfo_var, L_10, 0);
		return;
	}

IL_004a:
	{
		// Instance.logger.filterLogType = LogType.Log;
		il2cpp_codegen_runtime_class_init_inline(Singleton_1_t343EE254B04F331FF4405E6BDFC520536883F844_il2cpp_TypeInfo_var);
		Log_tD8E1E454A03F729B62A6300CB66CF73E71C99270* L_11;
		L_11 = Singleton_1_get_Instance_mA9F50A782FF75C346F6D2975F953376B087EAD72_inline(Singleton_1_get_Instance_mA9F50A782FF75C346F6D2975F953376B087EAD72_RuntimeMethod_var);
		NullCheck(L_11);
		RuntimeObject* L_12 = L_11->___logger_1;
		NullCheck(L_12);
		InterfaceActionInvoker1< int32_t >::Invoke(3 /* System.Void UnityEngine.ILogger::set_filterLogType(UnityEngine.LogType) */, ILogger_tD1F573C6DC829FBA987FA1EBA0A5FA64E0C2BC42_il2cpp_TypeInfo_var, L_12, 3);
		// }
		return;
	}
}
// System.Void TiltFive.Logging.Log::Debug(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_Debug_m889995125FF268F34FEB8EF3DD9AC350EE1CC4C8 (String_t* ___m0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___list1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral420970FC857D0E541C788790F58AA66962B22CC8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (DEBUG_LEVEL >= LogLevel)
		int32_t L_0;
		L_0 = Log_get_LogLevel_mC1004E7CC9A06177CD0872CF1538D605A310A125(NULL);
		if ((((int32_t)1) < ((int32_t)L_0)))
		{
			goto IL_0015;
		}
	}
	{
		// log(LogType.Log, DEBUG, m, list);
		String_t* L_1 = ___m0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___list1;
		Log_log_m2D1B54864F5F4E07D981BD703B5114A2FC54D728(3, _stringLiteral420970FC857D0E541C788790F58AA66962B22CC8, L_1, L_2, NULL);
	}

IL_0015:
	{
		// }
		return;
	}
}
// System.Void TiltFive.Logging.Log::Error(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_Error_mFAEE822C890E48138381AB6D607FA252E0245A00 (String_t* ___m0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___list1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8BD8EBBF9AAADE3A1911E0372AF7DEEFC2B7800D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ERROR_LEVEL >= LogLevel)
		int32_t L_0;
		L_0 = Log_get_LogLevel_mC1004E7CC9A06177CD0872CF1538D605A310A125(NULL);
		if ((((int32_t)4) < ((int32_t)L_0)))
		{
			goto IL_0015;
		}
	}
	{
		// log(LogType.Error, ERROR, m, list);
		String_t* L_1 = ___m0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___list1;
		Log_log_m2D1B54864F5F4E07D981BD703B5114A2FC54D728(0, _stringLiteral8BD8EBBF9AAADE3A1911E0372AF7DEEFC2B7800D, L_1, L_2, NULL);
	}

IL_0015:
	{
		// }
		return;
	}
}
// System.Void TiltFive.Logging.Log::Info(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_Info_m57A985F6B299403D9BC1A3F66AF4EA16BDBDCBAB (String_t* ___m0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___list1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6671AB681FCCDE604241BD0A83D624C05B26D44);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (INFO_LEVEL >= LogLevel)
		int32_t L_0;
		L_0 = Log_get_LogLevel_mC1004E7CC9A06177CD0872CF1538D605A310A125(NULL);
		if ((((int32_t)2) < ((int32_t)L_0)))
		{
			goto IL_0015;
		}
	}
	{
		// log(LogType.Log, INFO, m, list);
		String_t* L_1 = ___m0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___list1;
		Log_log_m2D1B54864F5F4E07D981BD703B5114A2FC54D728(3, _stringLiteralD6671AB681FCCDE604241BD0A83D624C05B26D44, L_1, L_2, NULL);
	}

IL_0015:
	{
		// }
		return;
	}
}
// System.Void TiltFive.Logging.Log::Verbose(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_Verbose_mAB8F6CD720F7FF72DE85B7488CDBE948359D00E1 (String_t* ___m0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___list1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4F130946577022936EE02472C36D257149CEBE97);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (VERBOSE_LEVEL >= LogLevel)
		int32_t L_0;
		L_0 = Log_get_LogLevel_mC1004E7CC9A06177CD0872CF1538D605A310A125(NULL);
		if ((((int32_t)0) < ((int32_t)L_0)))
		{
			goto IL_0015;
		}
	}
	{
		// log(LogType.Log, VERBOSE, m, list);
		String_t* L_1 = ___m0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___list1;
		Log_log_m2D1B54864F5F4E07D981BD703B5114A2FC54D728(3, _stringLiteral4F130946577022936EE02472C36D257149CEBE97, L_1, L_2, NULL);
	}

IL_0015:
	{
		// }
		return;
	}
}
// System.Void TiltFive.Logging.Log::Warn(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_Warn_mF40461B896B66C649888EB8AA1E437748439C28B (String_t* ___m0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___list1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9C875FC5A1F359BCA3028786C3DCDC54965A6B08);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (WARN_LEVEL >= LogLevel)
		int32_t L_0;
		L_0 = Log_get_LogLevel_mC1004E7CC9A06177CD0872CF1538D605A310A125(NULL);
		if ((((int32_t)3) < ((int32_t)L_0)))
		{
			goto IL_0015;
		}
	}
	{
		// log(LogType.Warning, WARN, m, list);
		String_t* L_1 = ___m0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___list1;
		Log_log_m2D1B54864F5F4E07D981BD703B5114A2FC54D728(2, _stringLiteral9C875FC5A1F359BCA3028786C3DCDC54965A6B08, L_1, L_2, NULL);
	}

IL_0015:
	{
		// }
		return;
	}
}
// System.Void TiltFive.Logging.Log::log(UnityEngine.LogType,System.String,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_log_m2D1B54864F5F4E07D981BD703B5114A2FC54D728 (int32_t ___logType0, String_t* ___tag1, String_t* ___m2, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___list3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_tD1F573C6DC829FBA987FA1EBA0A5FA64E0C2BC42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_mA9F50A782FF75C346F6D2975F953376B087EAD72_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_t343EE254B04F331FF4405E6BDFC520536883F844_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D732A97035E0C9A85611DD711956BA2DA8D360D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instance.logger.Log(logType, tag, string.Format("[{0}]\n{1}", TAG, string.Format(m, list)));
		il2cpp_codegen_runtime_class_init_inline(Singleton_1_t343EE254B04F331FF4405E6BDFC520536883F844_il2cpp_TypeInfo_var);
		Log_tD8E1E454A03F729B62A6300CB66CF73E71C99270* L_0;
		L_0 = Singleton_1_get_Instance_mA9F50A782FF75C346F6D2975F953376B087EAD72_inline(Singleton_1_get_Instance_mA9F50A782FF75C346F6D2975F953376B087EAD72_RuntimeMethod_var);
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___logger_1;
		int32_t L_2 = ___logType0;
		String_t* L_3 = ___tag1;
		String_t* L_4;
		L_4 = Log_get_TAG_mA336E9FDA5C31EAE6C89188EEF3859292E961FBB(NULL);
		String_t* L_5 = ___m2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = ___list3;
		String_t* L_7;
		L_7 = String_Format_m74FC0A1259DFA02F3DF6538FC7F3ACF3E1AF0C55(L_5, L_6, NULL);
		String_t* L_8;
		L_8 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteral9D732A97035E0C9A85611DD711956BA2DA8D360D, L_4, L_7, NULL);
		NullCheck(L_1);
		InterfaceActionInvoker3< int32_t, String_t*, RuntimeObject* >::Invoke(6 /* System.Void UnityEngine.ILogger::Log(UnityEngine.LogType,System.String,System.Object) */, ILogger_tD1F573C6DC829FBA987FA1EBA0A5FA64E0C2BC42_il2cpp_TypeInfo_var, L_1, L_2, L_3, L_8);
		// }
		return;
	}
}
// System.Void TiltFive.Logging.Log::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log__ctor_m0D3126F9669E6E7BCECFA17F8DA3C15022100EA6 (Log_tD8E1E454A03F729B62A6300CB66CF73E71C99270* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1__ctor_m4530065462D8F9FD318CA19C11EC995E82CDC530_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_t343EE254B04F331FF4405E6BDFC520536883F844_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral194258A41F4221DE8D14B4B28CB4E9F8B95BCD8E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private ILogger logger = UnityEngine.Debug.unityLogger;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = Debug_get_unityLogger_mA872400E9E585FCD6A2DE1717748A458545DE8A4_inline(NULL);
		__this->___logger_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___logger_1), (void*)L_0);
		// private string tag = "Tilt Five, Inc.";
		__this->___tag_2 = _stringLiteral194258A41F4221DE8D14B4B28CB4E9F8B95BCD8E;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tag_2), (void*)_stringLiteral194258A41F4221DE8D14B4B28CB4E9F8B95BCD8E);
		il2cpp_codegen_runtime_class_init_inline(Singleton_1_t343EE254B04F331FF4405E6BDFC520536883F844_il2cpp_TypeInfo_var);
		Singleton_1__ctor_m4530065462D8F9FD318CA19C11EC995E82CDC530(__this, Singleton_1__ctor_m4530065462D8F9FD318CA19C11EC995E82CDC530_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Debug_get_unityLogger_mA872400E9E585FCD6A2DE1717748A458545DE8A4_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticFields*)il2cpp_codegen_static_fields_for(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var))->___s_Logger_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Singleton_1_get_Instance_m91110BDBF294123D1E34990CFD7CEED57AF7965A_gshared_inline (const RuntimeMethod* method) 
{
	{
		// return instance;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		RuntimeObject* L_0 = ((Singleton_1_t2C7FA88F6F88872284F84C5614C7C4AB8FD01D88_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___instance_0;
		return L_0;
	}
}

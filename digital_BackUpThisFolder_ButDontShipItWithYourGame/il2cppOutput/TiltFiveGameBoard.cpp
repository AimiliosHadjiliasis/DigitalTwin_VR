#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// TiltFive.GameBoard
struct GameBoard_tA93C5A0FC9C6EDCE1B29BF1BCD616820EE60538A;
// TiltFive.GameBoardSettings
struct GameBoardSettings_tA53FDF5FE8B4D937F945DB659EF5A76243634A4B;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// TiltFive.UniformScaleTransform
struct UniformScaleTransform_t1EC394EEA6D4828034D5A9E2BD403D0BCF6FD917;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t7DA2398EB9A5DCE1E87B99122AA936C3241BF0AB 
{
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};
struct Il2CppArrayBounds;

// TiltFive.GameBoardSettings
struct GameBoardSettings_tA53FDF5FE8B4D937F945DB659EF5A76243634A4B  : public RuntimeObject
{
	// TiltFive.GameBoard TiltFive.GameBoardSettings::currentGameBoard
	GameBoard_tA93C5A0FC9C6EDCE1B29BF1BCD616820EE60538A* ___currentGameBoard_0;
	// TiltFive.GameboardType TiltFive.GameBoardSettings::gameboardTypeOverride
	int32_t ___gameboardTypeOverride_1;
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

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// TiltFive.Length
struct Length_tB42AD434EB12BFE64F8B2BAF2834C68DFF3B15D7 
{
	// System.Single TiltFive.Length::_meters
	float ____meters_0;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// TiltFive.T5_GameboardSize
struct T5_GameboardSize_t9C51DF0242ED80239B303B755A4B5F7AB67B846A 
{
	// System.Single TiltFive.T5_GameboardSize::PlayableSpaceX
	float ___PlayableSpaceX_0;
	// System.Single TiltFive.T5_GameboardSize::PlayableSpaceY
	float ___PlayableSpaceY_1;
	// System.Single TiltFive.T5_GameboardSize::BorderWidth
	float ___BorderWidth_2;
};

// TiltFive.T5_Position
struct T5_Position_t2E1BC0E85C3007B562F87C2A8D0B62CA83D5213D 
{
	// System.Single TiltFive.T5_Position::X
	float ___X_0;
	// System.Single TiltFive.T5_Position::Y
	float ___Y_1;
	// System.Single TiltFive.T5_Position::Z
	float ___Z_2;
};

// TiltFive.T5_Rotation
struct T5_Rotation_t7B915578461682541D830D5F9B768E810A69858C 
{
	// System.Single TiltFive.T5_Rotation::W
	float ___W_0;
	// System.Single TiltFive.T5_Rotation::X
	float ___X_1;
	// System.Single TiltFive.T5_Rotation::Y
	float ___Y_2;
	// System.Single TiltFive.T5_Rotation::Z
	float ___Z_3;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
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

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// TiltFive.T5_GlassesPose
struct T5_GlassesPose_tA745E39C2B88546A6934B1ADA0C2313BBBC5D6C1 
{
	// System.UInt64 TiltFive.T5_GlassesPose::TimestampNanos
	uint64_t ___TimestampNanos_0;
	// TiltFive.T5_Position TiltFive.T5_GlassesPose::posOfGLS_GBD
	T5_Position_t2E1BC0E85C3007B562F87C2A8D0B62CA83D5213D ___posOfGLS_GBD_1;
	// TiltFive.T5_Rotation TiltFive.T5_GlassesPose::rotationToGLS_GBD
	T5_Rotation_t7B915578461682541D830D5F9B768E810A69858C ___rotationToGLS_GBD_2;
	// TiltFive.GameboardType TiltFive.T5_GlassesPose::GameboardType
	int32_t ___GameboardType_3;
};

// TiltFive.GameBoard/GameboardDimensions
struct GameboardDimensions_tAF0334A3CC65FBB4BDAC4F11D38F557867C29F8D 
{
	// TiltFive.Length TiltFive.GameBoard/GameboardDimensions::playableSpaceX
	Length_tB42AD434EB12BFE64F8B2BAF2834C68DFF3B15D7 ___playableSpaceX_0;
	// TiltFive.Length TiltFive.GameBoard/GameboardDimensions::playableSpaceY
	Length_tB42AD434EB12BFE64F8B2BAF2834C68DFF3B15D7 ___playableSpaceY_1;
	// TiltFive.Length TiltFive.GameBoard/GameboardDimensions::borderWidth
	Length_tB42AD434EB12BFE64F8B2BAF2834C68DFF3B15D7 ___borderWidth_2;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// TiltFive.UniformScaleTransform
struct UniformScaleTransform_t1EC394EEA6D4828034D5A9E2BD403D0BCF6FD917  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector3 TiltFive.UniformScaleTransform::_previousScale
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____previousScale_4;
};

// TiltFive.GameBoard
struct GameBoard_tA93C5A0FC9C6EDCE1B29BF1BCD616820EE60538A  : public UniformScaleTransform_t1EC394EEA6D4828034D5A9E2BD403D0BCF6FD917
{
	// System.Boolean TiltFive.GameBoard::ShowGizmo
	bool ___ShowGizmo_5;
	// System.Boolean TiltFive.GameBoard::ShowGrid
	bool ___ShowGrid_6;
	// System.Single TiltFive.GameBoard::GridHeightOffset
	float ___GridHeightOffset_7;
	// System.Boolean TiltFive.GameBoard::StickyHeightOffset
	bool ___StickyHeightOffset_8;
	// System.Single TiltFive.GameBoard::GizmoOpacity
	float ___GizmoOpacity_9;
	// TiltFive.GameboardType TiltFive.GameBoard::GameboardType
	int32_t ___GameboardType_10;
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


// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline (const RuntimeMethod* method) ;

// System.Int32 TiltFive.NativePlugin::RefreshGlassesAvailable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativePlugin_RefreshGlassesAvailable_m221EB39E8EC18C7506BABA28B5E9F360F280B3BE (const RuntimeMethod* method) ;
// System.Int32 TiltFive.NativePlugin::GetGlassesPose(TiltFive.T5_GlassesPose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativePlugin_GetGlassesPose_m44ADA79ECA1CDE6E888EAD91A4FBEC81C4B9D08D (T5_GlassesPose_tA745E39C2B88546A6934B1ADA0C2313BBBC5D6C1* ___glassesPose0, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline)(method);
}
// System.Void TiltFive.Logging.Log::Error(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_Error_mFAEE822C890E48138381AB6D607FA252E0245A00 (String_t* ___m0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___list1, const RuntimeMethod* method) ;
// System.Void TiltFive.T5_GameboardSize::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void T5_GameboardSize__ctor_m0D166A8DAEF8997808AA836C31DE4DCF3CEE56E7 (T5_GameboardSize_t9C51DF0242ED80239B303B755A4B5F7AB67B846A* __this, float ___playableSpaceX0, float ___playableSpaceY1, float ___borderWidth2, const RuntimeMethod* method) ;
// System.Int32 TiltFive.NativePlugin::GetGameboardDimensions(TiltFive.GameboardType,TiltFive.T5_GameboardSize&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativePlugin_GetGameboardDimensions_m56A9ADF865B74EC20065C7C02E3B5DDA6FA0A643 (int32_t ___gameboardType0, T5_GameboardSize_t9C51DF0242ED80239B303B755A4B5F7AB67B846A* ___playableSpaceInMeters1, const RuntimeMethod* method) ;
// System.Void TiltFive.GameBoard/GameboardDimensions::.ctor(TiltFive.T5_GameboardSize)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameboardDimensions__ctor_m05C851AEB3ACFD2DC22827EB7F6BFDDEA0E8F2CC (GameboardDimensions_tAF0334A3CC65FBB4BDAC4F11D38F557867C29F8D* __this, T5_GameboardSize_t9C51DF0242ED80239B303B755A4B5F7AB67B846A ___gameboardSize0, const RuntimeMethod* method) ;
// System.Void TiltFive.UniformScaleTransform::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniformScaleTransform__ctor_m28C308E7A2FD2906FF6B2DFF6951F2E2A147D07A (UniformScaleTransform_t1EC394EEA6D4828034D5A9E2BD403D0BCF6FD917* __this, const RuntimeMethod* method) ;
// TiltFive.Length TiltFive.Length::op_Multiply(TiltFive.Length,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Length_tB42AD434EB12BFE64F8B2BAF2834C68DFF3B15D7 Length_op_Multiply_m0C84B7186DFB3350F100C6DA677C148F939719FD (Length_tB42AD434EB12BFE64F8B2BAF2834C68DFF3B15D7 ___a0, float ___scalar1, const RuntimeMethod* method) ;
// TiltFive.Length TiltFive.Length::op_Addition(TiltFive.Length,TiltFive.Length)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Length_tB42AD434EB12BFE64F8B2BAF2834C68DFF3B15D7 Length_op_Addition_m7AA4943F362543A7DF6E68193EDBEDBCA85FE413 (Length_tB42AD434EB12BFE64F8B2BAF2834C68DFF3B15D7 ___a0, Length_tB42AD434EB12BFE64F8B2BAF2834C68DFF3B15D7 ___b1, const RuntimeMethod* method) ;
// TiltFive.Length TiltFive.GameBoard/GameboardDimensions::get_totalSpaceX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Length_tB42AD434EB12BFE64F8B2BAF2834C68DFF3B15D7 GameboardDimensions_get_totalSpaceX_m47B4B798608144D44FE383375FE4FB95C85C4B41 (GameboardDimensions_tAF0334A3CC65FBB4BDAC4F11D38F557867C29F8D* __this, const RuntimeMethod* method) ;
// TiltFive.Length TiltFive.GameBoard/GameboardDimensions::get_totalSpaceY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Length_tB42AD434EB12BFE64F8B2BAF2834C68DFF3B15D7 GameboardDimensions_get_totalSpaceY_m6D8D15771CE2838DA80FAE2553CDC4BD07989779 (GameboardDimensions_tAF0334A3CC65FBB4BDAC4F11D38F557867C29F8D* __this, const RuntimeMethod* method) ;
// System.Void TiltFive.Length::.ctor(System.Single,TiltFive.LengthUnit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Length__ctor_m3D8B2098FB21C93C3F62AE2FABEB4BDC03D047F4 (Length_tB42AD434EB12BFE64F8B2BAF2834C68DFF3B15D7* __this, float ___value0, int32_t ___unit1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Single TiltFive.UniformScaleTransform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UniformScaleTransform_get_localScale_mDEF0C3282D3E3C5C03684A80EA61F88F1666918C (UniformScaleTransform_t1EC394EEA6D4828034D5A9E2BD403D0BCF6FD917* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 TiltFive.UniformScaleTransform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 UniformScaleTransform_get_position_mCDBCD54E1B14B50240EEDD9F1450DA71C4048757 (UniformScaleTransform_t1EC394EEA6D4828034D5A9E2BD403D0BCF6FD917* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion TiltFive.UniformScaleTransform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 UniformScaleTransform_get_rotation_mCFF2834A124376163B350ABBE3248A9CA4A0612B (UniformScaleTransform_t1EC394EEA6D4828034D5A9E2BD403D0BCF6FD917* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_ToEulerRad(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_ToEulerRad_m9B2C77284AEE6F2C43B6C42F1F888FB4FC904462 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_MakePositive(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_MakePositive_m864320DA2D027C186C95B2A5BC2C66B0EB4A6C11 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
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
// System.Boolean TiltFive.GameBoard::TryGetGameboardType(TiltFive.GameboardType&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameBoard_TryGetGameboardType_mA2A79BB241A7360D92A1C10BCDE2A6A4AA95B28E (int32_t* ___gameboardType0, const RuntimeMethod* method) 
{
	T5_GlassesPose_tA745E39C2B88546A6934B1ADA0C2313BBBC5D6C1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	T5_GlassesPose_tA745E39C2B88546A6934B1ADA0C2313BBBC5D6C1 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// T5_GlassesPose newGlassesPose = new T5_GlassesPose {};
		il2cpp_codegen_initobj((&V_2), sizeof(T5_GlassesPose_tA745E39C2B88546A6934B1ADA0C2313BBBC5D6C1));
		T5_GlassesPose_tA745E39C2B88546A6934B1ADA0C2313BBBC5D6C1 L_0 = V_2;
		V_0 = L_0;
		// int result = 1;
		V_1 = 1;
		// gameboardType = GameboardType.GameboardType_None;
		int32_t* L_1 = ___gameboardType0;
		*((int32_t*)L_1) = (int32_t)1;
	}
	try
	{// begin try (depth: 1)
		{
			// if (NativePlugin.RefreshGlassesAvailable() == 0)
			int32_t L_2;
			L_2 = NativePlugin_RefreshGlassesAvailable_m221EB39E8EC18C7506BABA28B5E9F360F280B3BE(NULL);
			if (L_2)
			{
				goto IL_001e_1;
			}
		}
		{
			// result = NativePlugin.GetGlassesPose(ref newGlassesPose);
			int32_t L_3;
			L_3 = NativePlugin_GetGlassesPose_m44ADA79ECA1CDE6E888EAD91A4FBEC81C4B9D08D((&V_0), NULL);
			V_1 = L_3;
		}

IL_001e_1:
		{
			// }
			goto IL_0033;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0020;
		}
		throw e;
	}

CATCH_0020:
	{// begin catch(System.Exception)
		// Log.Error(e.Message);
		NullCheck(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)));
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5;
		L_5 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var)));
		Log_Error_mFAEE822C890E48138381AB6D607FA252E0245A00(L_4, L_5, NULL);
		// return false;
		V_3 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0040;
	}// end catch (depth: 1)

IL_0033:
	{
		// if (result == 0)
		int32_t L_6 = V_1;
		if (L_6)
		{
			goto IL_003e;
		}
	}
	{
		// gameboardType = newGlassesPose.GameboardType;
		int32_t* L_7 = ___gameboardType0;
		T5_GlassesPose_tA745E39C2B88546A6934B1ADA0C2313BBBC5D6C1 L_8 = V_0;
		int32_t L_9 = L_8.___GameboardType_3;
		*((int32_t*)L_7) = (int32_t)L_9;
	}

IL_003e:
	{
		// return true;
		return (bool)1;
	}

IL_0040:
	{
		// }
		bool L_10 = V_3;
		return L_10;
	}
}
// System.Boolean TiltFive.GameBoard::TryGetGameboardDimensions(TiltFive.GameboardType,TiltFive.GameBoard/GameboardDimensions&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameBoard_TryGetGameboardDimensions_m688A1963677070ECD1C14E8F592F44B686C06355 (int32_t ___gameboardType0, GameboardDimensions_tAF0334A3CC65FBB4BDAC4F11D38F557867C29F8D* ___gameboardDimensions1, const RuntimeMethod* method) 
{
	T5_GameboardSize_t9C51DF0242ED80239B303B755A4B5F7AB67B846A V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if(gameboardType == GameboardType.GameboardType_None)
		int32_t L_0 = ___gameboardType0;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_000d;
		}
	}
	{
		// gameboardDimensions = new GameboardDimensions();
		GameboardDimensions_tAF0334A3CC65FBB4BDAC4F11D38F557867C29F8D* L_1 = ___gameboardDimensions1;
		il2cpp_codegen_initobj(L_1, sizeof(GameboardDimensions_tAF0334A3CC65FBB4BDAC4F11D38F557867C29F8D));
		// return false;
		return (bool)0;
	}

IL_000d:
	{
		// T5_GameboardSize gameboardSize = new T5_GameboardSize(0.7f, 0.7f, 0.05f);
		T5_GameboardSize__ctor_m0D166A8DAEF8997808AA836C31DE4DCF3CEE56E7((&V_0), (0.699999988f), (0.699999988f), (0.0500000007f), NULL);
		// int result = 1;
		V_1 = 1;
	}
	try
	{// begin try (depth: 1)
		// result = NativePlugin.GetGameboardDimensions(gameboardType, ref gameboardSize);
		int32_t L_2 = ___gameboardType0;
		int32_t L_3;
		L_3 = NativePlugin_GetGameboardDimensions_m56A9ADF865B74EC20065C7C02E3B5DDA6FA0A643(L_2, (&V_0), NULL);
		V_1 = L_3;
		// }
		goto IL_0041;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0030;
		}
		throw e;
	}

CATCH_0030:
	{// begin catch(System.Exception)
		// Log.Error(e.Message);
		NullCheck(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)));
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5;
		L_5 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var)));
		Log_Error_mFAEE822C890E48138381AB6D607FA252E0245A00(L_4, L_5, NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0041;
	}// end catch (depth: 1)

IL_0041:
	{
		// gameboardDimensions = new GameboardDimensions(gameboardSize);
		GameboardDimensions_tAF0334A3CC65FBB4BDAC4F11D38F557867C29F8D* L_6 = ___gameboardDimensions1;
		T5_GameboardSize_t9C51DF0242ED80239B303B755A4B5F7AB67B846A L_7 = V_0;
		GameboardDimensions_tAF0334A3CC65FBB4BDAC4F11D38F557867C29F8D L_8;
		memset((&L_8), 0, sizeof(L_8));
		GameboardDimensions__ctor_m05C851AEB3ACFD2DC22827EB7F6BFDDEA0E8F2CC((&L_8), L_7, /*hidden argument*/NULL);
		*(GameboardDimensions_tAF0334A3CC65FBB4BDAC4F11D38F557867C29F8D*)L_6 = L_8;
		// return result == 0;
		int32_t L_9 = V_1;
		return (bool)((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void TiltFive.GameBoard::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameBoard__ctor_m886C0F745626DEA0171AA67D7D7D7FFE4C91B0EC (GameBoard_tA93C5A0FC9C6EDCE1B29BF1BCD616820EE60538A* __this, const RuntimeMethod* method) 
{
	{
		// public bool StickyHeightOffset = true;
		__this->___StickyHeightOffset_8 = (bool)1;
		// public float GizmoOpacity = 0.75f;
		__this->___GizmoOpacity_9 = (0.75f);
		UniformScaleTransform__ctor_m28C308E7A2FD2906FF6B2DFF6951F2E2A147D07A(__this, NULL);
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
// TiltFive.Length TiltFive.GameBoard/GameboardDimensions::get_totalSpaceX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Length_tB42AD434EB12BFE64F8B2BAF2834C68DFF3B15D7 GameboardDimensions_get_totalSpaceX_m47B4B798608144D44FE383375FE4FB95C85C4B41 (GameboardDimensions_tAF0334A3CC65FBB4BDAC4F11D38F557867C29F8D* __this, const RuntimeMethod* method) 
{
	{
		// public Length totalSpaceX => playableSpaceX + (borderWidth * 2);
		Length_tB42AD434EB12BFE64F8B2BAF2834C68DFF3B15D7 L_0 = __this->___playableSpaceX_0;
		Length_tB42AD434EB12BFE64F8B2BAF2834C68DFF3B15D7 L_1 = __this->___borderWidth_2;
		Length_tB42AD434EB12BFE64F8B2BAF2834C68DFF3B15D7 L_2;
		L_2 = Length_op_Multiply_m0C84B7186DFB3350F100C6DA677C148F939719FD(L_1, (2.0f), NULL);
		Length_tB42AD434EB12BFE64F8B2BAF2834C68DFF3B15D7 L_3;
		L_3 = Length_op_Addition_m7AA4943F362543A7DF6E68193EDBEDBCA85FE413(L_0, L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  Length_tB42AD434EB12BFE64F8B2BAF2834C68DFF3B15D7 GameboardDimensions_get_totalSpaceX_m47B4B798608144D44FE383375FE4FB95C85C4B41_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	GameboardDimensions_tAF0334A3CC65FBB4BDAC4F11D38F557867C29F8D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<GameboardDimensions_tAF0334A3CC65FBB4BDAC4F11D38F557867C29F8D*>(__this + _offset);
	Length_tB42AD434EB12BFE64F8B2BAF2834C68DFF3B15D7 _returnValue;
	_returnValue = GameboardDimensions_get_totalSpaceX_m47B4B798608144D44FE383375FE4FB95C85C4B41(_thisAdjusted, method);
	return _returnValue;
}
// TiltFive.Length TiltFive.GameBoard/GameboardDimensions::get_totalSpaceY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Length_tB42AD434EB12BFE64F8B2BAF2834C68DFF3B15D7 GameboardDimensions_get_totalSpaceY_m6D8D15771CE2838DA80FAE2553CDC4BD07989779 (GameboardDimensions_tAF0334A3CC65FBB4BDAC4F11D38F557867C29F8D* __this, const RuntimeMethod* method) 
{
	{
		// public Length totalSpaceY => playableSpaceY + (borderWidth * 2);
		Length_tB42AD434EB12BFE64F8B2BAF2834C68DFF3B15D7 L_0 = __this->___playableSpaceY_1;
		Length_tB42AD434EB12BFE64F8B2BAF2834C68DFF3B15D7 L_1 = __this->___borderWidth_2;
		Length_tB42AD434EB12BFE64F8B2BAF2834C68DFF3B15D7 L_2;
		L_2 = Length_op_Multiply_m0C84B7186DFB3350F100C6DA677C148F939719FD(L_1, (2.0f), NULL);
		Length_tB42AD434EB12BFE64F8B2BAF2834C68DFF3B15D7 L_3;
		L_3 = Length_op_Addition_m7AA4943F362543A7DF6E68193EDBEDBCA85FE413(L_0, L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  Length_tB42AD434EB12BFE64F8B2BAF2834C68DFF3B15D7 GameboardDimensions_get_totalSpaceY_m6D8D15771CE2838DA80FAE2553CDC4BD07989779_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	GameboardDimensions_tAF0334A3CC65FBB4BDAC4F11D38F557867C29F8D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<GameboardDimensions_tAF0334A3CC65FBB4BDAC4F11D38F557867C29F8D*>(__this + _offset);
	Length_tB42AD434EB12BFE64F8B2BAF2834C68DFF3B15D7 _returnValue;
	_returnValue = GameboardDimensions_get_totalSpaceY_m6D8D15771CE2838DA80FAE2553CDC4BD07989779(_thisAdjusted, method);
	return _returnValue;
}
// System.Void TiltFive.GameBoard/GameboardDimensions::.ctor(TiltFive.T5_GameboardSize)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameboardDimensions__ctor_m05C851AEB3ACFD2DC22827EB7F6BFDDEA0E8F2CC (GameboardDimensions_tAF0334A3CC65FBB4BDAC4F11D38F557867C29F8D* __this, T5_GameboardSize_t9C51DF0242ED80239B303B755A4B5F7AB67B846A ___gameboardSize0, const RuntimeMethod* method) 
{
	{
		// playableSpaceX = new Length(gameboardSize.PlayableSpaceX, LengthUnit.Meters);
		T5_GameboardSize_t9C51DF0242ED80239B303B755A4B5F7AB67B846A L_0 = ___gameboardSize0;
		float L_1 = L_0.___PlayableSpaceX_0;
		Length_tB42AD434EB12BFE64F8B2BAF2834C68DFF3B15D7 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Length__ctor_m3D8B2098FB21C93C3F62AE2FABEB4BDC03D047F4((&L_2), L_1, 2, /*hidden argument*/NULL);
		__this->___playableSpaceX_0 = L_2;
		// playableSpaceY = new Length(gameboardSize.PlayableSpaceY, LengthUnit.Meters);
		T5_GameboardSize_t9C51DF0242ED80239B303B755A4B5F7AB67B846A L_3 = ___gameboardSize0;
		float L_4 = L_3.___PlayableSpaceY_1;
		Length_tB42AD434EB12BFE64F8B2BAF2834C68DFF3B15D7 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Length__ctor_m3D8B2098FB21C93C3F62AE2FABEB4BDC03D047F4((&L_5), L_4, 2, /*hidden argument*/NULL);
		__this->___playableSpaceY_1 = L_5;
		// borderWidth = new Length(gameboardSize.BorderWidth, LengthUnit.Meters);
		T5_GameboardSize_t9C51DF0242ED80239B303B755A4B5F7AB67B846A L_6 = ___gameboardSize0;
		float L_7 = L_6.___BorderWidth_2;
		Length_tB42AD434EB12BFE64F8B2BAF2834C68DFF3B15D7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Length__ctor_m3D8B2098FB21C93C3F62AE2FABEB4BDC03D047F4((&L_8), L_7, 2, /*hidden argument*/NULL);
		__this->___borderWidth_2 = L_8;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void GameboardDimensions__ctor_m05C851AEB3ACFD2DC22827EB7F6BFDDEA0E8F2CC_AdjustorThunk (RuntimeObject* __this, T5_GameboardSize_t9C51DF0242ED80239B303B755A4B5F7AB67B846A ___gameboardSize0, const RuntimeMethod* method)
{
	GameboardDimensions_tAF0334A3CC65FBB4BDAC4F11D38F557867C29F8D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<GameboardDimensions_tAF0334A3CC65FBB4BDAC4F11D38F557867C29F8D*>(__this + _offset);
	GameboardDimensions__ctor_m05C851AEB3ACFD2DC22827EB7F6BFDDEA0E8F2CC(_thisAdjusted, ___gameboardSize0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single TiltFive.GameBoardSettings::get_gameBoardScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GameBoardSettings_get_gameBoardScale_m95684BB3F820DA15309C661128F9C2280C5BEECB (GameBoardSettings_tA53FDF5FE8B4D937F945DB659EF5A76243634A4B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float gameBoardScale => currentGameBoard != null ? currentGameBoard.localScale : 1f;
		GameBoard_tA93C5A0FC9C6EDCE1B29BF1BCD616820EE60538A* L_0 = __this->___currentGameBoard_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		return (1.0f);
	}

IL_0014:
	{
		GameBoard_tA93C5A0FC9C6EDCE1B29BF1BCD616820EE60538A* L_2 = __this->___currentGameBoard_0;
		NullCheck(L_2);
		float L_3;
		L_3 = UniformScaleTransform_get_localScale_mDEF0C3282D3E3C5C03684A80EA61F88F1666918C(L_2, NULL);
		return L_3;
	}
}
// UnityEngine.Vector3 TiltFive.GameBoardSettings::get_gameBoardCenter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GameBoardSettings_get_gameBoardCenter_m8A101407ACB4390891FC94F864D56B51DECCFE07 (GameBoardSettings_tA53FDF5FE8B4D937F945DB659EF5A76243634A4B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Vector3 gameBoardCenter => currentGameBoard != null ? currentGameBoard.position : Vector3.zero;
		GameBoard_tA93C5A0FC9C6EDCE1B29BF1BCD616820EE60538A* L_0 = __this->___currentGameBoard_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		return L_2;
	}

IL_0014:
	{
		GameBoard_tA93C5A0FC9C6EDCE1B29BF1BCD616820EE60538A* L_3 = __this->___currentGameBoard_0;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = UniformScaleTransform_get_position_mCDBCD54E1B14B50240EEDD9F1450DA71C4048757(L_3, NULL);
		return L_4;
	}
}
// UnityEngine.Vector3 TiltFive.GameBoardSettings::get_gameBoardRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GameBoardSettings_get_gameBoardRotation_mF1B9C99BEBA0F4811C847315543731C5E213DDBC (GameBoardSettings_tA53FDF5FE8B4D937F945DB659EF5A76243634A4B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public Vector3 gameBoardRotation => currentGameBoard != null ? currentGameBoard.rotation.eulerAngles : Vector3.zero;
		GameBoard_tA93C5A0FC9C6EDCE1B29BF1BCD616820EE60538A* L_0 = __this->___currentGameBoard_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		return L_2;
	}

IL_0014:
	{
		GameBoard_tA93C5A0FC9C6EDCE1B29BF1BCD616820EE60538A* L_3 = __this->___currentGameBoard_0;
		NullCheck(L_3);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = UniformScaleTransform_get_rotation_mCFF2834A124376163B350ABBE3248A9CA4A0612B(L_3, NULL);
		V_0 = L_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_0), NULL);
		return L_5;
	}
}
// TiltFive.GameboardType TiltFive.GameBoardSettings::get_gameboardType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameBoardSettings_get_gameboardType_m3416E2F36328DDA74CE9AB1D5469A6E75F52AB2C (GameBoardSettings_tA53FDF5FE8B4D937F945DB659EF5A76243634A4B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public GameboardType gameboardType => currentGameBoard != null ? currentGameBoard.GameboardType : GameboardType.GameboardType_None;
		GameBoard_tA93C5A0FC9C6EDCE1B29BF1BCD616820EE60538A* L_0 = __this->___currentGameBoard_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		return (int32_t)(1);
	}

IL_0010:
	{
		GameBoard_tA93C5A0FC9C6EDCE1B29BF1BCD616820EE60538A* L_2 = __this->___currentGameBoard_0;
		NullCheck(L_2);
		int32_t L_3 = L_2->___GameboardType_10;
		return L_3;
	}
}
// System.Void TiltFive.GameBoardSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameBoardSettings__ctor_mD2890485B34D5C411520D1FD74995DC81C319C0D (GameBoardSettings_tA53FDF5FE8B4D937F945DB659EF5A76243634A4B* __this, const RuntimeMethod* method) 
{
	{
		// public GameboardType gameboardTypeOverride = GameboardType.GameboardType_None;
		__this->___gameboardTypeOverride_1 = 1;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = (*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Quaternion_Internal_ToEulerRad_m9B2C77284AEE6F2C43B6C42F1F888FB4FC904462(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_1, (57.2957802f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Quaternion_Internal_MakePositive_m864320DA2D027C186C95B2A5BC2C66B0EB4A6C11(L_2, NULL);
		V_0 = L_3;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}

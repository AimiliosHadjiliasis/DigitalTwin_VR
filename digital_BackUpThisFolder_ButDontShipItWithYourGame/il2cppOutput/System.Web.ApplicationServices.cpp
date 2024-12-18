#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
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
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.Web.Security.MembershipUser
struct MembershipUser_t0E79749BF84F252CDB7A0790A11307BCB02F787A;
// System.Web.Security.MembershipUserCollection
struct MembershipUserCollection_t3BE57B428A18198CACDCA05A2E4403FC149AAD1C;
// System.Web.Security.MembershipValidatePasswordEventHandler
struct MembershipValidatePasswordEventHandler_t4D5DFA1204FF51124A7543955ADFF01BCD8416AD;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.PlatformNotSupportedException
struct PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.Web.Security.ValidatePasswordEventArgs
struct ValidatePasswordEventArgs_t0F8E6BEA70172E99670913D5CE012488DFD8BB20;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* MembershipUserCollection_GetEnumerator_m4CC8E6D985E9C679964B419DAF31A1036D23091A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MembershipUserCollection_System_Collections_ICollection_CopyTo_mD1F56CF324243626D1D530F9EB1318EBD8B94B21_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MembershipUserCollection__ctor_m4C3FDC7ED91EEBF8848AB234C1BB02B4B3AA6C91_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MembershipUserCollection_get_Count_m27A69C9CB2E0246E1B40B74F424C7E272EEB51DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MembershipUserCollection_get_IsSynchronized_m62575DE34EB47887228A0EB03510CFD2A7027E26_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MembershipUserCollection_get_SyncRoot_mAA852D370C3E82DFFC69403359367845718EF911_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MembershipUser__ctor_mBE7712939548CDD2905458EC56344103F566EE44_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MembershipUser_get_Comment_m37FD25F039AB11490F7322BA3B99F73D43CFB2E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MembershipUser_get_Email_m7E67AB7B05550E86D90D5AAB1F9886E89485EEBC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MembershipUser_get_IsApproved_mE68911C23A54A1B9B01B059BD93D9EC0A04DD27A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MembershipUser_get_LastActivityDate_mDA2D6EFB794899C5806F928EBFA28389952A2390_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MembershipUser_get_LastLoginDate_m9FEA8BDC262501E33405FD4BD0F5EF5B12563DA3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MembershipUser_get_ProviderUserKey_mC9B1667B4246852EBE1F1B5C8B39405DFA70C660_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MembershipUser_set_Comment_m7D6D11926801303EF9FFF0D1B1A4DB0538BCB7EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MembershipUser_set_Email_m6F0F7403FCE236F317D81212B1F9DA16640BA64F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MembershipUser_set_IsApproved_m6A372BC560C90450CAADE7AAE2EEED8F6EBAB26A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MembershipUser_set_LastActivityDate_mA29B7EC625841CE67E6DD96F79A55207C90015E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MembershipUser_set_LastLoginDate_m2023301DB5BB36470654645453B2FBE994D34E13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MembershipValidatePasswordEventHandler_Invoke_mF8DB08CE1D14CA01BFF9BBF0F91A789127E119E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MembershipValidatePasswordEventHandler__ctor_mD69F5CB342C9EE07A49BD82EF03B4677EEEEF028_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowStub_ThrowNotSupportedException_mA33260D5D2ADEE34898D736881D3FC1C13E42680_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBD9AD408DB7EC8A28A7BB3994DC8C01459AECCF2 
{
};
struct Il2CppArrayBounds;

// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377  : public RuntimeObject
{
};

struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields
{
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___Empty_0;
};

// System.Web.Security.MembershipUser
struct MembershipUser_t0E79749BF84F252CDB7A0790A11307BCB02F787A  : public RuntimeObject
{
};

// System.Web.Security.MembershipUserCollection
struct MembershipUserCollection_t3BE57B428A18198CACDCA05A2E4403FC149AAD1C  : public RuntimeObject
{
};

// System.Configuration.Provider.ProviderBase
struct ProviderBase_tD7C429AEFAAEC072F1365F93DFF92E394A07B4D3  : public RuntimeObject
{
};

// System.Configuration.Provider.ProviderCollection
struct ProviderCollection_tBEA3037B4CB4B36E6449E5D7225A7D21807D216D  : public RuntimeObject
{
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

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
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

// System.Web.Security.MembershipProvider
struct MembershipProvider_t06EAA91B36B3CBCBB905D2ADC93B5BFE9697E376  : public ProviderBase_tD7C429AEFAAEC072F1365F93DFF92E394A07B4D3
{
};

// System.Web.Security.MembershipProviderCollection
struct MembershipProviderCollection_t40F33418A3486B4EDF6E5C045D99A26A793C6A97  : public ProviderCollection_tBEA3037B4CB4B36E6449E5D7225A7D21807D216D
{
};

// System.Web.Security.RoleProvider
struct RoleProvider_t9C8249B20DC83904F134891C5A5DE77C7D400A93  : public ProviderBase_tD7C429AEFAAEC072F1365F93DFF92E394A07B4D3
{
};

// System.Web.Security.ValidatePasswordEventArgs
struct ValidatePasswordEventArgs_t0F8E6BEA70172E99670913D5CE012488DFD8BB20  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
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

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.Web.Security.MembershipValidatePasswordEventHandler
struct MembershipValidatePasswordEventHandler_t4D5DFA1204FF51124A7543955ADFF01BCD8416AD  : public MulticastDelegate_t
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.ObjectDisposedException
struct ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB  : public InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB
{
	// System.String System.ObjectDisposedException::_objectName
	String_t* ____objectName_18;
};

// System.PlatformNotSupportedException
struct PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A  : public NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A
{
};

// Unity.ThrowStub
struct ThrowStub_t3A03F0E6ABD996D07DF342ED6F3F7A08BFED2818  : public ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};



// System.Void System.PlatformNotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformNotSupportedException__ctor_mD5DBE8E9A6FF4B75EF02671029C6D67A51EAFBD1 (PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A* __this, const RuntimeMethod* method) ;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
void MembershipValidatePasswordEventHandler_Invoke_mF8DB08CE1D14CA01BFF9BBF0F91A789127E119E2_Multicast(MembershipValidatePasswordEventHandler_t4D5DFA1204FF51124A7543955ADFF01BCD8416AD* __this, RuntimeObject* ___sender0, ValidatePasswordEventArgs_t0F8E6BEA70172E99670913D5CE012488DFD8BB20* ___e1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		MembershipValidatePasswordEventHandler_t4D5DFA1204FF51124A7543955ADFF01BCD8416AD* currentDelegate = reinterpret_cast<MembershipValidatePasswordEventHandler_t4D5DFA1204FF51124A7543955ADFF01BCD8416AD*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, ValidatePasswordEventArgs_t0F8E6BEA70172E99670913D5CE012488DFD8BB20*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___sender0, ___e1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void MembershipValidatePasswordEventHandler_Invoke_mF8DB08CE1D14CA01BFF9BBF0F91A789127E119E2_Open(MembershipValidatePasswordEventHandler_t4D5DFA1204FF51124A7543955ADFF01BCD8416AD* __this, RuntimeObject* ___sender0, ValidatePasswordEventArgs_t0F8E6BEA70172E99670913D5CE012488DFD8BB20* ___e1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RuntimeObject*, ValidatePasswordEventArgs_t0F8E6BEA70172E99670913D5CE012488DFD8BB20*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___sender0, ___e1, method);
}
void MembershipValidatePasswordEventHandler_Invoke_mF8DB08CE1D14CA01BFF9BBF0F91A789127E119E2_OpenStaticInvoker(MembershipValidatePasswordEventHandler_t4D5DFA1204FF51124A7543955ADFF01BCD8416AD* __this, RuntimeObject* ___sender0, ValidatePasswordEventArgs_t0F8E6BEA70172E99670913D5CE012488DFD8BB20* ___e1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, ValidatePasswordEventArgs_t0F8E6BEA70172E99670913D5CE012488DFD8BB20* >::Invoke(__this->___method_ptr_0, method, NULL, ___sender0, ___e1);
}
void MembershipValidatePasswordEventHandler_Invoke_mF8DB08CE1D14CA01BFF9BBF0F91A789127E119E2_ClosedStaticInvoker(MembershipValidatePasswordEventHandler_t4D5DFA1204FF51124A7543955ADFF01BCD8416AD* __this, RuntimeObject* ___sender0, ValidatePasswordEventArgs_t0F8E6BEA70172E99670913D5CE012488DFD8BB20* ___e1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, RuntimeObject*, ValidatePasswordEventArgs_t0F8E6BEA70172E99670913D5CE012488DFD8BB20* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___sender0, ___e1);
}
void MembershipValidatePasswordEventHandler_Invoke_mF8DB08CE1D14CA01BFF9BBF0F91A789127E119E2_OpenVirtual(MembershipValidatePasswordEventHandler_t4D5DFA1204FF51124A7543955ADFF01BCD8416AD* __this, RuntimeObject* ___sender0, ValidatePasswordEventArgs_t0F8E6BEA70172E99670913D5CE012488DFD8BB20* ___e1, const RuntimeMethod* method)
{
	VirtualActionInvoker1< ValidatePasswordEventArgs_t0F8E6BEA70172E99670913D5CE012488DFD8BB20* >::Invoke(il2cpp_codegen_method_get_slot(method), ___sender0, ___e1);
}
void MembershipValidatePasswordEventHandler_Invoke_mF8DB08CE1D14CA01BFF9BBF0F91A789127E119E2_OpenInterface(MembershipValidatePasswordEventHandler_t4D5DFA1204FF51124A7543955ADFF01BCD8416AD* __this, RuntimeObject* ___sender0, ValidatePasswordEventArgs_t0F8E6BEA70172E99670913D5CE012488DFD8BB20* ___e1, const RuntimeMethod* method)
{
	InterfaceActionInvoker1< ValidatePasswordEventArgs_t0F8E6BEA70172E99670913D5CE012488DFD8BB20* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___sender0, ___e1);
}
void MembershipValidatePasswordEventHandler_Invoke_mF8DB08CE1D14CA01BFF9BBF0F91A789127E119E2_OpenGenericVirtual(MembershipValidatePasswordEventHandler_t4D5DFA1204FF51124A7543955ADFF01BCD8416AD* __this, RuntimeObject* ___sender0, ValidatePasswordEventArgs_t0F8E6BEA70172E99670913D5CE012488DFD8BB20* ___e1, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker1< ValidatePasswordEventArgs_t0F8E6BEA70172E99670913D5CE012488DFD8BB20* >::Invoke(method, ___sender0, ___e1);
}
void MembershipValidatePasswordEventHandler_Invoke_mF8DB08CE1D14CA01BFF9BBF0F91A789127E119E2_OpenGenericInterface(MembershipValidatePasswordEventHandler_t4D5DFA1204FF51124A7543955ADFF01BCD8416AD* __this, RuntimeObject* ___sender0, ValidatePasswordEventArgs_t0F8E6BEA70172E99670913D5CE012488DFD8BB20* ___e1, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker1< ValidatePasswordEventArgs_t0F8E6BEA70172E99670913D5CE012488DFD8BB20* >::Invoke(method, ___sender0, ___e1);
}
// System.Void System.Web.Security.MembershipValidatePasswordEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MembershipValidatePasswordEventHandler__ctor_mD69F5CB342C9EE07A49BD82EF03B4677EEEEF028 (MembershipValidatePasswordEventHandler_t4D5DFA1204FF51124A7543955ADFF01BCD8416AD* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MembershipValidatePasswordEventHandler__ctor_mD69F5CB342C9EE07A49BD82EF03B4677EEEEF028_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(MembershipValidatePasswordEventHandler__ctor_mD69F5CB342C9EE07A49BD82EF03B4677EEEEF028_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Web.Security.MembershipValidatePasswordEventHandler::Invoke(System.Object,System.Web.Security.ValidatePasswordEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MembershipValidatePasswordEventHandler_Invoke_mF8DB08CE1D14CA01BFF9BBF0F91A789127E119E2 (MembershipValidatePasswordEventHandler_t4D5DFA1204FF51124A7543955ADFF01BCD8416AD* __this, RuntimeObject* ___sender0, ValidatePasswordEventArgs_t0F8E6BEA70172E99670913D5CE012488DFD8BB20* ___e1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MembershipValidatePasswordEventHandler_Invoke_mF8DB08CE1D14CA01BFF9BBF0F91A789127E119E2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(MembershipValidatePasswordEventHandler_Invoke_mF8DB08CE1D14CA01BFF9BBF0F91A789127E119E2_RuntimeMethod_var);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Web.Security.MembershipUser::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MembershipUser__ctor_mBE7712939548CDD2905458EC56344103F566EE44 (MembershipUser_t0E79749BF84F252CDB7A0790A11307BCB02F787A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MembershipUser__ctor_mBE7712939548CDD2905458EC56344103F566EE44_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(MembershipUser__ctor_mBE7712939548CDD2905458EC56344103F566EE44_RuntimeMethod_var);
		return;
	}
}
// System.String System.Web.Security.MembershipUser::get_Comment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MembershipUser_get_Comment_m37FD25F039AB11490F7322BA3B99F73D43CFB2E3 (MembershipUser_t0E79749BF84F252CDB7A0790A11307BCB02F787A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MembershipUser_get_Comment_m37FD25F039AB11490F7322BA3B99F73D43CFB2E3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(MembershipUser_get_Comment_m37FD25F039AB11490F7322BA3B99F73D43CFB2E3_RuntimeMethod_var);
		return (String_t*)NULL;
	}
}
// System.Void System.Web.Security.MembershipUser::set_Comment(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MembershipUser_set_Comment_m7D6D11926801303EF9FFF0D1B1A4DB0538BCB7EA (MembershipUser_t0E79749BF84F252CDB7A0790A11307BCB02F787A* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MembershipUser_set_Comment_m7D6D11926801303EF9FFF0D1B1A4DB0538BCB7EA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(MembershipUser_set_Comment_m7D6D11926801303EF9FFF0D1B1A4DB0538BCB7EA_RuntimeMethod_var);
		return;
	}
}
// System.String System.Web.Security.MembershipUser::get_Email()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MembershipUser_get_Email_m7E67AB7B05550E86D90D5AAB1F9886E89485EEBC (MembershipUser_t0E79749BF84F252CDB7A0790A11307BCB02F787A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MembershipUser_get_Email_m7E67AB7B05550E86D90D5AAB1F9886E89485EEBC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(MembershipUser_get_Email_m7E67AB7B05550E86D90D5AAB1F9886E89485EEBC_RuntimeMethod_var);
		return (String_t*)NULL;
	}
}
// System.Void System.Web.Security.MembershipUser::set_Email(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MembershipUser_set_Email_m6F0F7403FCE236F317D81212B1F9DA16640BA64F (MembershipUser_t0E79749BF84F252CDB7A0790A11307BCB02F787A* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MembershipUser_set_Email_m6F0F7403FCE236F317D81212B1F9DA16640BA64F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(MembershipUser_set_Email_m6F0F7403FCE236F317D81212B1F9DA16640BA64F_RuntimeMethod_var);
		return;
	}
}
// System.Boolean System.Web.Security.MembershipUser::get_IsApproved()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MembershipUser_get_IsApproved_mE68911C23A54A1B9B01B059BD93D9EC0A04DD27A (MembershipUser_t0E79749BF84F252CDB7A0790A11307BCB02F787A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MembershipUser_get_IsApproved_mE68911C23A54A1B9B01B059BD93D9EC0A04DD27A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		il2cpp_codegen_raise_profile_exception(MembershipUser_get_IsApproved_mE68911C23A54A1B9B01B059BD93D9EC0A04DD27A_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_0), sizeof(bool));
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Void System.Web.Security.MembershipUser::set_IsApproved(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MembershipUser_set_IsApproved_m6A372BC560C90450CAADE7AAE2EEED8F6EBAB26A (MembershipUser_t0E79749BF84F252CDB7A0790A11307BCB02F787A* __this, bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MembershipUser_set_IsApproved_m6A372BC560C90450CAADE7AAE2EEED8F6EBAB26A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(MembershipUser_set_IsApproved_m6A372BC560C90450CAADE7AAE2EEED8F6EBAB26A_RuntimeMethod_var);
		return;
	}
}
// System.DateTime System.Web.Security.MembershipUser::get_LastActivityDate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D MembershipUser_get_LastActivityDate_mDA2D6EFB794899C5806F928EBFA28389952A2390 (MembershipUser_t0E79749BF84F252CDB7A0790A11307BCB02F787A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MembershipUser_get_LastActivityDate_mDA2D6EFB794899C5806F928EBFA28389952A2390_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_raise_profile_exception(MembershipUser_get_LastActivityDate_mDA2D6EFB794899C5806F928EBFA28389952A2390_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_0), sizeof(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D));
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0 = V_0;
		return L_0;
	}
}
// System.Void System.Web.Security.MembershipUser::set_LastActivityDate(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MembershipUser_set_LastActivityDate_mA29B7EC625841CE67E6DD96F79A55207C90015E6 (MembershipUser_t0E79749BF84F252CDB7A0790A11307BCB02F787A* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MembershipUser_set_LastActivityDate_mA29B7EC625841CE67E6DD96F79A55207C90015E6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(MembershipUser_set_LastActivityDate_mA29B7EC625841CE67E6DD96F79A55207C90015E6_RuntimeMethod_var);
		return;
	}
}
// System.DateTime System.Web.Security.MembershipUser::get_LastLoginDate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D MembershipUser_get_LastLoginDate_m9FEA8BDC262501E33405FD4BD0F5EF5B12563DA3 (MembershipUser_t0E79749BF84F252CDB7A0790A11307BCB02F787A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MembershipUser_get_LastLoginDate_m9FEA8BDC262501E33405FD4BD0F5EF5B12563DA3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_raise_profile_exception(MembershipUser_get_LastLoginDate_m9FEA8BDC262501E33405FD4BD0F5EF5B12563DA3_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_0), sizeof(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D));
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0 = V_0;
		return L_0;
	}
}
// System.Void System.Web.Security.MembershipUser::set_LastLoginDate(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MembershipUser_set_LastLoginDate_m2023301DB5BB36470654645453B2FBE994D34E13 (MembershipUser_t0E79749BF84F252CDB7A0790A11307BCB02F787A* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MembershipUser_set_LastLoginDate_m2023301DB5BB36470654645453B2FBE994D34E13_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(MembershipUser_set_LastLoginDate_m2023301DB5BB36470654645453B2FBE994D34E13_RuntimeMethod_var);
		return;
	}
}
// System.Object System.Web.Security.MembershipUser::get_ProviderUserKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MembershipUser_get_ProviderUserKey_mC9B1667B4246852EBE1F1B5C8B39405DFA70C660 (MembershipUser_t0E79749BF84F252CDB7A0790A11307BCB02F787A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MembershipUser_get_ProviderUserKey_mC9B1667B4246852EBE1F1B5C8B39405DFA70C660_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(MembershipUser_get_ProviderUserKey_mC9B1667B4246852EBE1F1B5C8B39405DFA70C660_RuntimeMethod_var);
		return NULL;
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
// System.Void System.Web.Security.MembershipUserCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MembershipUserCollection__ctor_m4C3FDC7ED91EEBF8848AB234C1BB02B4B3AA6C91 (MembershipUserCollection_t3BE57B428A18198CACDCA05A2E4403FC149AAD1C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MembershipUserCollection__ctor_m4C3FDC7ED91EEBF8848AB234C1BB02B4B3AA6C91_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(MembershipUserCollection__ctor_m4C3FDC7ED91EEBF8848AB234C1BB02B4B3AA6C91_RuntimeMethod_var);
		return;
	}
}
// System.Int32 System.Web.Security.MembershipUserCollection::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MembershipUserCollection_get_Count_m27A69C9CB2E0246E1B40B74F424C7E272EEB51DC (MembershipUserCollection_t3BE57B428A18198CACDCA05A2E4403FC149AAD1C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MembershipUserCollection_get_Count_m27A69C9CB2E0246E1B40B74F424C7E272EEB51DC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		il2cpp_codegen_raise_profile_exception(MembershipUserCollection_get_Count_m27A69C9CB2E0246E1B40B74F424C7E272EEB51DC_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		int32_t L_0 = V_0;
		return L_0;
	}
}
// System.Boolean System.Web.Security.MembershipUserCollection::get_IsSynchronized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MembershipUserCollection_get_IsSynchronized_m62575DE34EB47887228A0EB03510CFD2A7027E26 (MembershipUserCollection_t3BE57B428A18198CACDCA05A2E4403FC149AAD1C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MembershipUserCollection_get_IsSynchronized_m62575DE34EB47887228A0EB03510CFD2A7027E26_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		il2cpp_codegen_raise_profile_exception(MembershipUserCollection_get_IsSynchronized_m62575DE34EB47887228A0EB03510CFD2A7027E26_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_0), sizeof(bool));
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Object System.Web.Security.MembershipUserCollection::get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MembershipUserCollection_get_SyncRoot_mAA852D370C3E82DFFC69403359367845718EF911 (MembershipUserCollection_t3BE57B428A18198CACDCA05A2E4403FC149AAD1C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MembershipUserCollection_get_SyncRoot_mAA852D370C3E82DFFC69403359367845718EF911_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(MembershipUserCollection_get_SyncRoot_mAA852D370C3E82DFFC69403359367845718EF911_RuntimeMethod_var);
		return NULL;
	}
}
// System.Collections.IEnumerator System.Web.Security.MembershipUserCollection::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MembershipUserCollection_GetEnumerator_m4CC8E6D985E9C679964B419DAF31A1036D23091A (MembershipUserCollection_t3BE57B428A18198CACDCA05A2E4403FC149AAD1C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MembershipUserCollection_GetEnumerator_m4CC8E6D985E9C679964B419DAF31A1036D23091A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(MembershipUserCollection_GetEnumerator_m4CC8E6D985E9C679964B419DAF31A1036D23091A_RuntimeMethod_var);
		return (RuntimeObject*)NULL;
	}
}
// System.Void System.Web.Security.MembershipUserCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MembershipUserCollection_System_Collections_ICollection_CopyTo_mD1F56CF324243626D1D530F9EB1318EBD8B94B21 (MembershipUserCollection_t3BE57B428A18198CACDCA05A2E4403FC149AAD1C* __this, RuntimeArray* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MembershipUserCollection_System_Collections_ICollection_CopyTo_mD1F56CF324243626D1D530F9EB1318EBD8B94B21_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(MembershipUserCollection_System_Collections_ICollection_CopyTo_mD1F56CF324243626D1D530F9EB1318EBD8B94B21_RuntimeMethod_var);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.ThrowStub::ThrowNotSupportedException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowStub_ThrowNotSupportedException_mA33260D5D2ADEE34898D736881D3FC1C13E42680 (const RuntimeMethod* method) 
{
	{
		PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A* L_0 = (PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		PlatformNotSupportedException__ctor_mD5DBE8E9A6FF4B75EF02671029C6D67A51EAFBD1(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThrowStub_ThrowNotSupportedException_mA33260D5D2ADEE34898D736881D3FC1C13E42680_RuntimeMethod_var)));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif

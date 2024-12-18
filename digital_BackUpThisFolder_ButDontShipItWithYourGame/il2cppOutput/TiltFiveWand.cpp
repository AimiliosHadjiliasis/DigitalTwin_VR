#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
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

// System.Collections.Generic.Dictionary`2<TiltFive.ControllerIndex,System.Nullable`1<TiltFive.T5_ControllerState>>
struct Dictionary_2_t712A771C31CF6D9FCEB1DFE940B80E92561D4B72;
// System.Collections.Generic.Dictionary`2<TiltFive.ControllerIndex,TiltFive.Wand/WandCore>
struct Dictionary_2_t6F5AAA1CE39CE9B00E8C4497198DD367212507EC;
// System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Nullable`1<TiltFive.T5_ControllerState>>
struct Dictionary_2_tFD4BB9E06327E044BA68F88722BCF062E51232C2;
// System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>
struct Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71;
// System.Collections.Generic.IEqualityComparer`1<TiltFive.ControllerIndex>
struct IEqualityComparer_1_t5DC59026B565B56607EDAC800B53A27CA94EAACB;
// System.Collections.Generic.Dictionary`2/KeyCollection<TiltFive.ControllerIndex,System.Nullable`1<TiltFive.T5_ControllerState>>
struct KeyCollection_t313FF837A3F9DBBE5C4ACB3CDBFE83167D36FD5F;
// System.Collections.Generic.Dictionary`2/KeyCollection<TiltFive.ControllerIndex,TiltFive.Wand/WandCore>
struct KeyCollection_t1D3E42EB33B286C0957600AA1C7B0E56D373D4DD;
// TiltFive.Singleton`1<System.Object>
struct Singleton_1_t2C7FA88F6F88872284F84C5614C7C4AB8FD01D88;
// TiltFive.Singleton`1<TiltFive.Wand>
struct Singleton_1_t55A4B7261A7AC4E8FA2802D1CD1FA23367C9E6FC;
// TiltFive.TrackableCore`1<System.Object>
struct TrackableCore_1_tE70B1D0A794545485AA44FAD27B46B353AB0CBFA;
// TiltFive.TrackableCore`1<TiltFive.WandSettings>
struct TrackableCore_1_t00F88F47236F7B1A13DD70AE3A5EFA818AF1485D;
// System.Collections.Generic.Dictionary`2/ValueCollection<TiltFive.ControllerIndex,System.Nullable`1<TiltFive.T5_ControllerState>>
struct ValueCollection_t23C581AC4D5C3FFF1A262F0BEC188C71A086F91E;
// System.Collections.Generic.Dictionary`2/ValueCollection<TiltFive.ControllerIndex,TiltFive.Wand/WandCore>
struct ValueCollection_tA4B5FCF00B3BAAC55499138CC85419EA27F46762;
// System.Collections.Generic.Dictionary`2/Entry<TiltFive.ControllerIndex,System.Nullable`1<TiltFive.T5_ControllerState>>[]
struct EntryU5BU5D_tC604C950DDE7166FC8085B6C00F5E4132B400AD4;
// System.Collections.Generic.Dictionary`2/Entry<TiltFive.ControllerIndex,TiltFive.Wand/WandCore>[]
struct EntryU5BU5D_t4E214F6D94BC55A10E642BAC03C1E4706A2E0C99;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// TiltFive.GameBoard
struct GameBoard_tA93C5A0FC9C6EDCE1B29BF1BCD616820EE60538A;
// TiltFive.GameBoardSettings
struct GameBoardSettings_tA53FDF5FE8B4D937F945DB659EF5A76243634A4B;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// TiltFive.ScaleSettings
struct ScaleSettings_t4FE94D7555EF25D5286239492DE97AF448542507;
// System.String
struct String_t;
// TiltFive.TrackableSettings
struct TrackableSettings_t54076219B6A408E0FCC2EED6DAC35984CC69EC4F;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// TiltFive.Wand
struct Wand_tA59B1FCC3DF9DDBE82B76BEC4F04349B7D7A6181;
// TiltFive.WandSettings
struct WandSettings_tAEC07302A7835A2A4C192445D2D1D50A475D4943;
// TiltFive.Wand/WandCore
struct WandCore_t92366109545D7851AA67CBCA8E5C23CFAD26BBAE;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t6F5AAA1CE39CE9B00E8C4497198DD367212507EC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t712A771C31CF6D9FCEB1DFE940B80E92561D4B72_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DllNotFoundException_t8CAE636A394C482C9FCF38FB7B7929506319D534_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Input_t2FDC361E81514DC1373FFAB9A221D30EC384196F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Singleton_1_t55A4B7261A7AC4E8FA2802D1CD1FA23367C9E6FC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WandCore_t92366109545D7851AA67CBCA8E5C23CFAD26BBAE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Wand_tA59B1FCC3DF9DDBE82B76BEC4F04349B7D7A6181_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral018EC27FEC47BA287961DCB976351429EC4FED4F;
IL2CPP_EXTERN_C String_t* _stringLiteral54B243199D39557158DF5DF8B8F4FEE3FFACE5A9;
IL2CPP_EXTERN_C String_t* _stringLiteralA3552BE1904A0D1828E3C5647A03809F8F9AC6BB;
IL2CPP_EXTERN_C String_t* _stringLiteralDA7452B15A3651CF6AB97AFE324E852FD591E4D7;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m8518B24FEE8ACCA5ED99DC2739AB8910DF6F03CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mC0232544CC6F82B505259E98EF554BF9C7F0A6CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m1100551CF31C395EAC94FC2EB66B23DE592FE22B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m11945670DE9399DA01ECB21448267C8135B624C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m45AE0B58438FBC8BF43097E744A0B84C82A84329_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mC7FE2DEBB72F2749A78EA2B28E8D21F421C5302F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m1E56B7FF4881232D23CF4C7F52EAEA306D8963BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Input_GetButton_mDBCF313FDE4E38C372336D542C55ED086A829A20_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_m90760E7EA080CC253FFD199ADD5A9C40D58FB1D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_mD426B43DF269A37F9B9D7BA1AEFE0E7B5DD07870_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m7D139E89559ADEA9413ED563F583C3CB92738A79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m7F9421D24C9E648E435BDE5370663B5116C4D513_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m4C7D497E9750AD3B0DEDF822A145D4F62D92ACE4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mC5F1DBB1421D7BCF66A20F030E7524CFD671B50A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mE14E838E2815B81468C16E74C64756D7C8EBEB7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_1__ctor_m67F961255CDBF2D59797C2ADE4AD9DE43ED949A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_1_get_Instance_m123D4EAD1A25C400E8337AEAFBAB63676B29B4D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackableCore_1_ConvertPosGBDToUGBD_m6F4FC8884C4A4CE180BE705E8B7B3044D828F5FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackableCore_1_GameboardToWorldSpace_mFA695D168D9DA297C9A86DF0EEAE7380F786AA39_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackableCore_1_Reset_m38A67A200967927078AAC8CBEA3652634F975133_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackableCore_1_Update_m62BF42BF834BDDEC883B1FAB332A091D2CF49C4E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackableCore_1__ctor_mBDA91E67518070A9EC06CFD53850589270AC3FDC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackableCore_1_get_IsTracked_mA6069D3D185FA857B6CADE8899EBAE7C113D7ED1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackableCore_1_get_Pose_UnityWorldSpace_mD92CC0E6FA6EF36E6F1087628479CD38C33942D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Wand_GetPosition_m1EC126417939FE458271555EE4FC60FB8E95259C_RuntimeMethod_var;
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
struct U3CModuleU3E_tC82F2D54CC5317C5A4045555A0B7FFBFED3513B0 
{
};

// System.Collections.Generic.Dictionary`2<TiltFive.ControllerIndex,System.Nullable`1<TiltFive.T5_ControllerState>>
struct Dictionary_2_t712A771C31CF6D9FCEB1DFE940B80E92561D4B72  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tC604C950DDE7166FC8085B6C00F5E4132B400AD4* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t313FF837A3F9DBBE5C4ACB3CDBFE83167D36FD5F* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t23C581AC4D5C3FFF1A262F0BEC188C71A086F91E* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<TiltFive.ControllerIndex,TiltFive.Wand/WandCore>
struct Dictionary_2_t6F5AAA1CE39CE9B00E8C4497198DD367212507EC  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t4E214F6D94BC55A10E642BAC03C1E4706A2E0C99* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t1D3E42EB33B286C0957600AA1C7B0E56D373D4DD* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tA4B5FCF00B3BAAC55499138CC85419EA27F46762* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
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

// TiltFive.Singleton`1<System.Object>
struct Singleton_1_t2C7FA88F6F88872284F84C5614C7C4AB8FD01D88  : public RuntimeObject
{
};

struct Singleton_1_t2C7FA88F6F88872284F84C5614C7C4AB8FD01D88_StaticFields
{
	// T TiltFive.Singleton`1::instance
	RuntimeObject* ___instance_0;
};

// TiltFive.Singleton`1<TiltFive.Wand>
struct Singleton_1_t55A4B7261A7AC4E8FA2802D1CD1FA23367C9E6FC  : public RuntimeObject
{
};

struct Singleton_1_t55A4B7261A7AC4E8FA2802D1CD1FA23367C9E6FC_StaticFields
{
	// T TiltFive.Singleton`1::instance
	Wand_tA59B1FCC3DF9DDBE82B76BEC4F04349B7D7A6181* ___instance_0;
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

// TiltFive.ScaleSettings
struct ScaleSettings_t4FE94D7555EF25D5286239492DE97AF448542507  : public RuntimeObject
{
	// TiltFive.LengthUnit TiltFive.ScaleSettings::contentScaleUnit
	int32_t ___contentScaleUnit_0;
	// System.Single TiltFive.ScaleSettings::contentScaleRatio
	float ___contentScaleRatio_1;
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

// TiltFive.TrackableSettings
struct TrackableSettings_t54076219B6A408E0FCC2EED6DAC35984CC69EC4F  : public RuntimeObject
{
	// System.Boolean TiltFive.TrackableSettings::RejectUntrackedPositionData
	bool ___RejectUntrackedPositionData_0;
	// TiltFive.TrackableSettings/TrackingFailureMode TiltFive.TrackableSettings::FailureMode
	int32_t ___FailureMode_1;
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

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
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

// TiltFive.T5_Bool
struct T5_Bool_t945CAC2B53F54530B6DEDB6BB7E8C04BCB4970EC 
{
	// System.Byte TiltFive.T5_Bool::booleanByte
	uint8_t ___booleanByte_0;
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

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
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

// TiltFive.WandSettings
struct WandSettings_tAEC07302A7835A2A4C192445D2D1D50A475D4943  : public TrackableSettings_t54076219B6A408E0FCC2EED6DAC35984CC69EC4F
{
	// TiltFive.ControllerIndex TiltFive.WandSettings::controllerIndex
	int32_t ___controllerIndex_2;
	// UnityEngine.GameObject TiltFive.WandSettings::GripPoint
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___GripPoint_3;
	// UnityEngine.GameObject TiltFive.WandSettings::FingertipPoint
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___FingertipPoint_4;
	// UnityEngine.GameObject TiltFive.WandSettings::AimPoint
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___AimPoint_5;
};

// TiltFive.T5_ControllerState/Joystick
struct Joystick_t8285A98B287E3D3C6E96FC7C72A71DA9F75F27CD 
{
	// System.Single TiltFive.T5_ControllerState/Joystick::X
	float ___X_0;
	// System.Single TiltFive.T5_ControllerState/Joystick::Y
	float ___Y_1;
};

// System.Nullable`1<TiltFive.T5_ControllerState/Joystick>
struct Nullable_1_tE6438F66263679630B1DEF49F95288C8DBFDCE32 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	Joystick_t8285A98B287E3D3C6E96FC7C72A71DA9F75F27CD ___value_1;
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

// TiltFive.Input
struct Input_t2FDC361E81514DC1373FFAB9A221D30EC384196F  : public RuntimeObject
{
};

struct Input_t2FDC361E81514DC1373FFAB9A221D30EC384196F_StaticFields
{
	// System.Collections.Generic.Dictionary`2<TiltFive.ControllerIndex,System.Nullable`1<TiltFive.T5_ControllerState>> TiltFive.Input::currentWandStates
	Dictionary_2_t712A771C31CF6D9FCEB1DFE940B80E92561D4B72* ___currentWandStates_0;
	// System.Collections.Generic.Dictionary`2<TiltFive.ControllerIndex,System.Nullable`1<TiltFive.T5_ControllerState>> TiltFive.Input::previousWandStates
	Dictionary_2_t712A771C31CF6D9FCEB1DFE940B80E92561D4B72* ___previousWandStates_1;
	// System.DateTime TiltFive.Input::lastScanAttempt
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___lastScanAttempt_2;
	// System.Double TiltFive.Input::wandScanRate
	double ___wandScanRate_3;
	// System.Boolean TiltFive.Input::wandAvailabilityErroredOnce
	bool ___wandAvailabilityErroredOnce_4;
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

// UnityEngine.Pose
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 
{
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_1;
};

struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_StaticFields
{
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___k_Identity_2;
};

// TiltFive.Wand
struct Wand_tA59B1FCC3DF9DDBE82B76BEC4F04349B7D7A6181  : public Singleton_1_t55A4B7261A7AC4E8FA2802D1CD1FA23367C9E6FC
{
	// System.Collections.Generic.Dictionary`2<TiltFive.ControllerIndex,TiltFive.Wand/WandCore> TiltFive.Wand::wandCores
	Dictionary_2_t6F5AAA1CE39CE9B00E8C4497198DD367212507EC* ___wandCores_1;
};

struct Wand_tA59B1FCC3DF9DDBE82B76BEC4F04349B7D7A6181_StaticFields
{
	// UnityEngine.Vector3 TiltFive.Wand::DEFAULT_WAND_POSITION_GAME_BOARD_SPACE
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___DEFAULT_WAND_POSITION_GAME_BOARD_SPACE_2;
	// UnityEngine.Vector3 TiltFive.Wand::DEFAULT_WAND_HANDEDNESS_OFFSET_GAME_BOARD_SPACE
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___DEFAULT_WAND_HANDEDNESS_OFFSET_GAME_BOARD_SPACE_3;
	// UnityEngine.Quaternion TiltFive.Wand::DEFAULT_WAND_ROTATION_GAME_BOARD_SPACE
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___DEFAULT_WAND_ROTATION_GAME_BOARD_SPACE_4;
};

// TiltFive.T5_ControllerState/Buttons
struct Buttons_tBFA5588AD4479B77161E5B2BEFEF859D11E36748 
{
	// TiltFive.T5_Bool TiltFive.T5_ControllerState/Buttons::t5
	T5_Bool_t945CAC2B53F54530B6DEDB6BB7E8C04BCB4970EC ___t5_0;
	// TiltFive.T5_Bool TiltFive.T5_ControllerState/Buttons::one
	T5_Bool_t945CAC2B53F54530B6DEDB6BB7E8C04BCB4970EC ___one_1;
	// TiltFive.T5_Bool TiltFive.T5_ControllerState/Buttons::two
	T5_Bool_t945CAC2B53F54530B6DEDB6BB7E8C04BCB4970EC ___two_2;
	// TiltFive.T5_Bool TiltFive.T5_ControllerState/Buttons::three
	T5_Bool_t945CAC2B53F54530B6DEDB6BB7E8C04BCB4970EC ___three_3;
	// TiltFive.T5_Bool TiltFive.T5_ControllerState/Buttons::a
	T5_Bool_t945CAC2B53F54530B6DEDB6BB7E8C04BCB4970EC ___a_4;
	// TiltFive.T5_Bool TiltFive.T5_ControllerState/Buttons::b
	T5_Bool_t945CAC2B53F54530B6DEDB6BB7E8C04BCB4970EC ___b_5;
	// TiltFive.T5_Bool TiltFive.T5_ControllerState/Buttons::x
	T5_Bool_t945CAC2B53F54530B6DEDB6BB7E8C04BCB4970EC ___x_6;
	// TiltFive.T5_Bool TiltFive.T5_ControllerState/Buttons::y
	T5_Bool_t945CAC2B53F54530B6DEDB6BB7E8C04BCB4970EC ___y_7;
};

// TiltFive.TrackableCore`1<System.Object>
struct TrackableCore_1_tE70B1D0A794545485AA44FAD27B46B353AB0CBFA  : public RuntimeObject
{
	// UnityEngine.Pose TiltFive.TrackableCore`1::pose_GameboardSpace
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___pose_GameboardSpace_0;
	// UnityEngine.Pose TiltFive.TrackableCore`1::pose_UnityWorldSpace
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___pose_UnityWorldSpace_1;
	// System.Boolean TiltFive.TrackableCore`1::isTracked
	bool ___isTracked_2;
	// UnityEngine.Pose TiltFive.TrackableCore`1::gameboardPose_UnityWorldSpace
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___gameboardPose_UnityWorldSpace_3;
};

// TiltFive.TrackableCore`1<TiltFive.WandSettings>
struct TrackableCore_1_t00F88F47236F7B1A13DD70AE3A5EFA818AF1485D  : public RuntimeObject
{
	// UnityEngine.Pose TiltFive.TrackableCore`1::pose_GameboardSpace
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___pose_GameboardSpace_0;
	// UnityEngine.Pose TiltFive.TrackableCore`1::pose_UnityWorldSpace
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___pose_UnityWorldSpace_1;
	// System.Boolean TiltFive.TrackableCore`1::isTracked
	bool ___isTracked_2;
	// UnityEngine.Pose TiltFive.TrackableCore`1::gameboardPose_UnityWorldSpace
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___gameboardPose_UnityWorldSpace_3;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// TiltFive.T5_ControllerState
struct T5_ControllerState_tD10E39B6E4C8C80529DBDED7EEFF83BA49090A21 
{
	// System.UInt64 TiltFive.T5_ControllerState::TimestampNanos
	uint64_t ___TimestampNanos_0;
	// TiltFive.T5_Bool TiltFive.T5_ControllerState::analogValid
	T5_Bool_t945CAC2B53F54530B6DEDB6BB7E8C04BCB4970EC ___analogValid_1;
	// TiltFive.T5_Bool TiltFive.T5_ControllerState::batteryValid
	T5_Bool_t945CAC2B53F54530B6DEDB6BB7E8C04BCB4970EC ___batteryValid_2;
	// TiltFive.T5_Bool TiltFive.T5_ControllerState::buttonsValid
	T5_Bool_t945CAC2B53F54530B6DEDB6BB7E8C04BCB4970EC ___buttonsValid_3;
	// TiltFive.T5_Bool TiltFive.T5_ControllerState::poseValid
	T5_Bool_t945CAC2B53F54530B6DEDB6BB7E8C04BCB4970EC ___poseValid_4;
	// System.Single TiltFive.T5_ControllerState::Trigger
	float ___Trigger_5;
	// TiltFive.T5_ControllerState/Joystick TiltFive.T5_ControllerState::Stick
	Joystick_t8285A98B287E3D3C6E96FC7C72A71DA9F75F27CD ___Stick_6;
	// System.Byte TiltFive.T5_ControllerState::Battery
	uint8_t ___Battery_7;
	// TiltFive.T5_ControllerState/Buttons TiltFive.T5_ControllerState::ButtonsState
	Buttons_tBFA5588AD4479B77161E5B2BEFEF859D11E36748 ___ButtonsState_8;
	// TiltFive.T5_Rotation TiltFive.T5_ControllerState::rotToWND_GBD
	T5_Rotation_t7B915578461682541D830D5F9B768E810A69858C ___rotToWND_GBD_9;
	// TiltFive.T5_Position TiltFive.T5_ControllerState::aimPos_GBD
	T5_Position_t2E1BC0E85C3007B562F87C2A8D0B62CA83D5213D ___aimPos_GBD_10;
	// TiltFive.T5_Position TiltFive.T5_ControllerState::fingertipsPos_GBD
	T5_Position_t2E1BC0E85C3007B562F87C2A8D0B62CA83D5213D ___fingertipsPos_GBD_11;
	// TiltFive.T5_Position TiltFive.T5_ControllerState::gripPos_GBD
	T5_Position_t2E1BC0E85C3007B562F87C2A8D0B62CA83D5213D ___gripPos_GBD_12;
};

// System.Nullable`1<TiltFive.T5_ControllerState>
struct Nullable_1_t7013E79AE56020A242FB9373ACCDF6CF43EF9689 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	T5_ControllerState_tD10E39B6E4C8C80529DBDED7EEFF83BA49090A21 ___value_1;
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.TypeLoadException
struct TypeLoadException_t6333E3083F7BFF1A582969E6F67ACBA8B0035C32  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.TypeLoadException::ClassName
	String_t* ___ClassName_18;
	// System.String System.TypeLoadException::AssemblyName
	String_t* ___AssemblyName_19;
	// System.String System.TypeLoadException::MessageArg
	String_t* ___MessageArg_20;
	// System.Int32 System.TypeLoadException::ResourceId
	int32_t ___ResourceId_21;
};

// TiltFive.Wand/WandCore
struct WandCore_t92366109545D7851AA67CBCA8E5C23CFAD26BBAE  : public TrackableCore_1_t00F88F47236F7B1A13DD70AE3A5EFA818AF1485D
{
	// UnityEngine.Pose TiltFive.Wand/WandCore::fingertipsPose_GameboardSpace
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___fingertipsPose_GameboardSpace_4;
	// UnityEngine.Pose TiltFive.Wand/WandCore::aimPose_GameboardSpace
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___aimPose_GameboardSpace_5;
	// UnityEngine.Pose TiltFive.Wand/WandCore::fingertipsPose_UnityWorldSpace
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___fingertipsPose_UnityWorldSpace_6;
	// UnityEngine.Pose TiltFive.Wand/WandCore::aimPose_UnityWorldSpace
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___aimPose_UnityWorldSpace_7;
};

// System.DllNotFoundException
struct DllNotFoundException_t8CAE636A394C482C9FCF38FB7B7929506319D534  : public TypeLoadException_t6333E3083F7BFF1A582969E6F67ACBA8B0035C32
{
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


// TValue System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Nullable`1<TiltFive.T5_ControllerState>>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t7013E79AE56020A242FB9373ACCDF6CF43EF9689 Dictionary_2_get_Item_m3D28595DC94CE62A1D755931C27820F9F69BC605_gshared (Dictionary_2_tFD4BB9E06327E044BA68F88722BCF062E51232C2* __this, int32_t ___key0, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<TiltFive.T5_ControllerState>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m4C7D497E9750AD3B0DEDF822A145D4F62D92ACE4_gshared_inline (Nullable_1_t7013E79AE56020A242FB9373ACCDF6CF43EF9689* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<TiltFive.T5_ControllerState>::GetValueOrDefault()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR T5_ControllerState_tD10E39B6E4C8C80529DBDED7EEFF83BA49090A21 Nullable_1_GetValueOrDefault_m90760E7EA080CC253FFD199ADD5A9C40D58FB1D8_gshared_inline (Nullable_1_t7013E79AE56020A242FB9373ACCDF6CF43EF9689* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<TiltFive.T5_ControllerState/Joystick>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m7D139E89559ADEA9413ED563F583C3CB92738A79_gshared (Nullable_1_tE6438F66263679630B1DEF49F95288C8DBFDCE32* __this, Joystick_t8285A98B287E3D3C6E96FC7C72A71DA9F75F27CD ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<TiltFive.T5_ControllerState/Joystick>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mC5F1DBB1421D7BCF66A20F030E7524CFD671B50A_gshared_inline (Nullable_1_tE6438F66263679630B1DEF49F95288C8DBFDCE32* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<TiltFive.T5_ControllerState/Joystick>::GetValueOrDefault()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Joystick_t8285A98B287E3D3C6E96FC7C72A71DA9F75F27CD Nullable_1_GetValueOrDefault_mD426B43DF269A37F9B9D7BA1AEFE0E7B5DD07870_gshared_inline (Nullable_1_tE6438F66263679630B1DEF49F95288C8DBFDCE32* __this, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline (const RuntimeMethod* method) ;
// System.Void System.Nullable`1<TiltFive.T5_ControllerState>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m7F9421D24C9E648E435BDE5370663B5116C4D513_gshared (Nullable_1_t7013E79AE56020A242FB9373ACCDF6CF43EF9689* __this, T5_ControllerState_tD10E39B6E4C8C80529DBDED7EEFF83BA49090A21 ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Nullable`1<TiltFive.T5_ControllerState>>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mC96C9A66F5CA9D48EAA9D5F85B3DD3EFA1189BFB_gshared (Dictionary_2_tFD4BB9E06327E044BA68F88722BCF062E51232C2* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Nullable`1<TiltFive.T5_ControllerState>>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mCB58D53CF2BCE6320ABBF0F588F3B33E8FA43EE4_gshared (Dictionary_2_tFD4BB9E06327E044BA68F88722BCF062E51232C2* __this, int32_t ___key0, Nullable_1_t7013E79AE56020A242FB9373ACCDF6CF43EF9689 ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Nullable`1<TiltFive.T5_ControllerState>>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mF7A2710DA7F03A82247FCF1598CD167B5FC4C15F_gshared (Dictionary_2_tFD4BB9E06327E044BA68F88722BCF062E51232C2* __this, int32_t ___key0, Nullable_1_t7013E79AE56020A242FB9373ACCDF6CF43EF9689 ___value1, const RuntimeMethod* method) ;
// T TiltFive.Singleton`1<System.Object>::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Singleton_1_get_Instance_m91110BDBF294123D1E34990CFD7CEED57AF7965A_gshared_inline (const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m9C4302CCAE3C1BF70D02091D0E0CED7663F18211_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, int32_t ___key0, const RuntimeMethod* method) ;
// UnityEngine.Pose TiltFive.TrackableCore`1<System.Object>::get_Pose_UnityWorldSpace()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 TrackableCore_1_get_Pose_UnityWorldSpace_m77B37E4BFDDF5EB20FECFD11A31D0699E766BC5E_gshared_inline (TrackableCore_1_tE70B1D0A794545485AA44FAD27B46B353AB0CBFA* __this, const RuntimeMethod* method) ;
// System.Boolean TiltFive.TrackableCore`1<System.Object>::get_IsTracked()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TrackableCore_1_get_IsTracked_mB6A3D7AE9D9FAD1F894AED4BED64B55B9558BFD1_gshared_inline (TrackableCore_1_tE70B1D0A794545485AA44FAD27B46B353AB0CBFA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mCC9983804D8DC41E938E080075F9EA7BDD0C7059_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mC515884C0546021A29DC0A00DBCABD89B1B65872_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, int32_t ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void TiltFive.Singleton`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Singleton_1__ctor_m7764B020C66D789250B6A5601102E65A6D8A9E99_gshared (Singleton_1_t2C7FA88F6F88872284F84C5614C7C4AB8FD01D88* __this, const RuntimeMethod* method) ;
// System.Void TiltFive.TrackableCore`1<System.Object>::Reset(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableCore_1_Reset_m82169A28EA9F44B910A86379444BE0DD2A0F51F1_gshared (TrackableCore_1_tE70B1D0A794545485AA44FAD27B46B353AB0CBFA* __this, RuntimeObject* ___settings0, const RuntimeMethod* method) ;
// System.Void TiltFive.TrackableCore`1<System.Object>::Update(T,TiltFive.ScaleSettings,TiltFive.GameBoardSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableCore_1_Update_mFC6175FD0ED089E45C694D5162794B0528CF8147_gshared (TrackableCore_1_tE70B1D0A794545485AA44FAD27B46B353AB0CBFA* __this, RuntimeObject* ___settings0, ScaleSettings_t4FE94D7555EF25D5286239492DE97AF448542507* ___scaleSettings1, GameBoardSettings_tA53FDF5FE8B4D937F945DB659EF5A76243634A4B* ___gameBoardSettings2, const RuntimeMethod* method) ;
// UnityEngine.Pose TiltFive.TrackableCore`1<System.Object>::GameboardToWorldSpace(UnityEngine.Pose,TiltFive.ScaleSettings,TiltFive.GameBoardSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 TrackableCore_1_GameboardToWorldSpace_mA20770B74F3E6DEB62AA553FC011201E904BDC11_gshared (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___pose_GameBoardSpace0, ScaleSettings_t4FE94D7555EF25D5286239492DE97AF448542507* ___scaleSettings1, GameBoardSettings_tA53FDF5FE8B4D937F945DB659EF5A76243634A4B* ___gameBoardSettings2, const RuntimeMethod* method) ;
// T System.Nullable`1<TiltFive.T5_ControllerState>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR T5_ControllerState_tD10E39B6E4C8C80529DBDED7EEFF83BA49090A21 Nullable_1_get_Value_mE14E838E2815B81468C16E74C64756D7C8EBEB7A_gshared (Nullable_1_t7013E79AE56020A242FB9373ACCDF6CF43EF9689* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 TiltFive.TrackableCore`1<System.Object>::ConvertPosGBDToUGBD(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TrackableCore_1_ConvertPosGBDToUGBD_m1EB5AEEFEC7593BA7DBDC3EB4E300171B91FFCA5_gshared (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos_GBD0, const RuntimeMethod* method) ;
// System.Void TiltFive.TrackableCore`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableCore_1__ctor_mB48D3DDC4C32DF5E4652E314A16B3670F339427D_gshared (TrackableCore_1_tE70B1D0A794545485AA44FAD27B46B353AB0CBFA* __this, const RuntimeMethod* method) ;

// TValue System.Collections.Generic.Dictionary`2<TiltFive.ControllerIndex,System.Nullable`1<TiltFive.T5_ControllerState>>::get_Item(TKey)
inline Nullable_1_t7013E79AE56020A242FB9373ACCDF6CF43EF9689 Dictionary_2_get_Item_m45AE0B58438FBC8BF43097E744A0B84C82A84329 (Dictionary_2_t712A771C31CF6D9FCEB1DFE940B80E92561D4B72* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  Nullable_1_t7013E79AE56020A242FB9373ACCDF6CF43EF9689 (*) (Dictionary_2_t712A771C31CF6D9FCEB1DFE940B80E92561D4B72*, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_m3D28595DC94CE62A1D755931C27820F9F69BC605_gshared)(__this, ___key0, method);
}
// System.Boolean System.Nullable`1<TiltFive.T5_ControllerState>::get_HasValue()
inline bool Nullable_1_get_HasValue_m4C7D497E9750AD3B0DEDF822A145D4F62D92ACE4_inline (Nullable_1_t7013E79AE56020A242FB9373ACCDF6CF43EF9689* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t7013E79AE56020A242FB9373ACCDF6CF43EF9689*, const RuntimeMethod*))Nullable_1_get_HasValue_m4C7D497E9750AD3B0DEDF822A145D4F62D92ACE4_gshared_inline)(__this, method);
}
// T System.Nullable`1<TiltFive.T5_ControllerState>::GetValueOrDefault()
inline T5_ControllerState_tD10E39B6E4C8C80529DBDED7EEFF83BA49090A21 Nullable_1_GetValueOrDefault_m90760E7EA080CC253FFD199ADD5A9C40D58FB1D8_inline (Nullable_1_t7013E79AE56020A242FB9373ACCDF6CF43EF9689* __this, const RuntimeMethod* method)
{
	return ((  T5_ControllerState_tD10E39B6E4C8C80529DBDED7EEFF83BA49090A21 (*) (Nullable_1_t7013E79AE56020A242FB9373ACCDF6CF43EF9689*, const RuntimeMethod*))Nullable_1_GetValueOrDefault_m90760E7EA080CC253FFD199ADD5A9C40D58FB1D8_gshared_inline)(__this, method);
}
// System.Boolean TiltFive.Input::GetButton(TiltFive.T5_ControllerState,TiltFive.Input/WandButton)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButton_mDBCF313FDE4E38C372336D542C55ED086A829A20 (T5_ControllerState_tD10E39B6E4C8C80529DBDED7EEFF83BA49090A21 ___controllerState0, uint32_t ___button1, const RuntimeMethod* method) ;
// System.Boolean TiltFive.Input::GetButtonDown(TiltFive.Input/WandButton,TiltFive.ControllerIndex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButtonDown_m61150C4770BF0B007888EB70E8649A60AEFED47D (uint32_t ___button0, int32_t ___controllerIndex1, const RuntimeMethod* method) ;
// System.Boolean TiltFive.Input::GetButtonUp(TiltFive.Input/WandButton,TiltFive.ControllerIndex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButtonUp_m457A09CA78785E4B02D129D1EF5343C4C8C4BF74 (uint32_t ___button0, int32_t ___controllerIndex1, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<TiltFive.T5_ControllerState/Joystick>::.ctor(T)
inline void Nullable_1__ctor_m7D139E89559ADEA9413ED563F583C3CB92738A79 (Nullable_1_tE6438F66263679630B1DEF49F95288C8DBFDCE32* __this, Joystick_t8285A98B287E3D3C6E96FC7C72A71DA9F75F27CD ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tE6438F66263679630B1DEF49F95288C8DBFDCE32*, Joystick_t8285A98B287E3D3C6E96FC7C72A71DA9F75F27CD, const RuntimeMethod*))Nullable_1__ctor_m7D139E89559ADEA9413ED563F583C3CB92738A79_gshared)(__this, ___value0, method);
}
// System.Boolean System.Nullable`1<TiltFive.T5_ControllerState/Joystick>::get_HasValue()
inline bool Nullable_1_get_HasValue_mC5F1DBB1421D7BCF66A20F030E7524CFD671B50A_inline (Nullable_1_tE6438F66263679630B1DEF49F95288C8DBFDCE32* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tE6438F66263679630B1DEF49F95288C8DBFDCE32*, const RuntimeMethod*))Nullable_1_get_HasValue_mC5F1DBB1421D7BCF66A20F030E7524CFD671B50A_gshared_inline)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) ;
// T System.Nullable`1<TiltFive.T5_ControllerState/Joystick>::GetValueOrDefault()
inline Joystick_t8285A98B287E3D3C6E96FC7C72A71DA9F75F27CD Nullable_1_GetValueOrDefault_mD426B43DF269A37F9B9D7BA1AEFE0E7B5DD07870_inline (Nullable_1_tE6438F66263679630B1DEF49F95288C8DBFDCE32* __this, const RuntimeMethod* method)
{
	return ((  Joystick_t8285A98B287E3D3C6E96FC7C72A71DA9F75F27CD (*) (Nullable_1_tE6438F66263679630B1DEF49F95288C8DBFDCE32*, const RuntimeMethod*))Nullable_1_GetValueOrDefault_mD426B43DF269A37F9B9D7BA1AEFE0E7B5DD07870_gshared_inline)(__this, method);
}
// UnityEngine.Vector2 TiltFive.T5_ControllerState/Joystick::op_Implicit(TiltFive.T5_ControllerState/Joystick)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Joystick_op_Implicit_m3B7933B7EEFFFB1E8F58A62C9621005234AA9013 (Joystick_t8285A98B287E3D3C6E96FC7C72A71DA9F75F27CD ___joystick0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 TiltFive.Input::GetStickTilt(TiltFive.ControllerIndex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Input_GetStickTilt_mFEB51372226C0934146767275DCEA8DE3BC49C40 (int32_t ___controllerIndex0, const RuntimeMethod* method) ;
// System.Single TiltFive.Input::GetTrigger(TiltFive.ControllerIndex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetTrigger_m5C078439A89E8B95460FB98E45AEB3ECE9580AC1 (int32_t ___controllerIndex0, const RuntimeMethod* method) ;
// TiltFive.T5_Bool TiltFive.T5_Bool::op_Implicit(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR T5_Bool_t945CAC2B53F54530B6DEDB6BB7E8C04BCB4970EC T5_Bool_op_Implicit_mD69CA4D7BE80D887A6C1CAA6D4E666EF31C99F7D (bool ___boolean0, const RuntimeMethod* method) ;
// System.Int32 TiltFive.NativePlugin::GetWandAvailability(TiltFive.T5_Bool&,TiltFive.ControllerIndex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativePlugin_GetWandAvailability_m688D95BF3F138FE5D09ECC1D597ABB2CA754D7C6 (T5_Bool_t945CAC2B53F54530B6DEDB6BB7E8C04BCB4970EC* ___wandAvailable0, int32_t ___wandTarget1, const RuntimeMethod* method) ;
// System.Boolean TiltFive.T5_Bool::op_Implicit(TiltFive.T5_Bool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool T5_Bool_op_Implicit_mF773EB75E5E087E34E8A590D27ABCAECDD013C69 (T5_Bool_t945CAC2B53F54530B6DEDB6BB7E8C04BCB4970EC ___t5_boolean0, const RuntimeMethod* method) ;
// System.Void TiltFive.Logging.Log::Info(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_Info_m57A985F6B299403D9BC1A3F66AF4EA16BDBDCBAB (String_t* ___m0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___list1, const RuntimeMethod* method) ;
// System.Void TiltFive.Logging.Log::Error(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_Error_mFAEE822C890E48138381AB6D607FA252E0245A00 (String_t* ___m0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___list1, const RuntimeMethod* method) ;
// System.Int32 TiltFive.NativePlugin::SwapWandHandedness()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativePlugin_SwapWandHandedness_m59E477C237572F0370CD0D40602863CCF7A541A3 (const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline)(method);
}
// System.Int32 TiltFive.NativePlugin::SetRumbleMotor(System.UInt32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativePlugin_SetRumbleMotor_m70ACDEC3D80E7ACA6CB9EC91AD5B3F7927532AC2 (uint32_t ___motor0, float ___intensity1, const RuntimeMethod* method) ;
// System.Boolean TiltFive.Input::TryScanForWands()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_TryScanForWands_m1CAAA24DAF359B560A291D4A0104255A15AE2859 (const RuntimeMethod* method) ;
// System.Void TiltFive.Input::GetLatestWandControlsStates()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Input_GetLatestWandControlsStates_m2C1B4E928D17AFCE8223401FF6B9723A5E1375E3 (const RuntimeMethod* method) ;
// System.Int32 TiltFive.NativePlugin::GetControllerState(TiltFive.ControllerIndex,TiltFive.T5_ControllerState&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativePlugin_GetControllerState_mEBE282128D33AFE3AA9166AA2CEF43B2EC83B64F (int32_t ___controllerIndex0, T5_ControllerState_tD10E39B6E4C8C80529DBDED7EEFF83BA49090A21* ___controllerState1, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<TiltFive.T5_ControllerState>::.ctor(T)
inline void Nullable_1__ctor_m7F9421D24C9E648E435BDE5370663B5116C4D513 (Nullable_1_t7013E79AE56020A242FB9373ACCDF6CF43EF9689* __this, T5_ControllerState_tD10E39B6E4C8C80529DBDED7EEFF83BA49090A21 ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t7013E79AE56020A242FB9373ACCDF6CF43EF9689*, T5_ControllerState_tD10E39B6E4C8C80529DBDED7EEFF83BA49090A21, const RuntimeMethod*))Nullable_1__ctor_m7F9421D24C9E648E435BDE5370663B5116C4D513_gshared)(__this, ___value0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<TiltFive.ControllerIndex,System.Nullable`1<TiltFive.T5_ControllerState>>::.ctor()
inline void Dictionary_2__ctor_m1100551CF31C395EAC94FC2EB66B23DE592FE22B (Dictionary_2_t712A771C31CF6D9FCEB1DFE940B80E92561D4B72* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t712A771C31CF6D9FCEB1DFE940B80E92561D4B72*, const RuntimeMethod*))Dictionary_2__ctor_mC96C9A66F5CA9D48EAA9D5F85B3DD3EFA1189BFB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<TiltFive.ControllerIndex,System.Nullable`1<TiltFive.T5_ControllerState>>::Add(TKey,TValue)
inline void Dictionary_2_Add_m8518B24FEE8ACCA5ED99DC2739AB8910DF6F03CA (Dictionary_2_t712A771C31CF6D9FCEB1DFE940B80E92561D4B72* __this, int32_t ___key0, Nullable_1_t7013E79AE56020A242FB9373ACCDF6CF43EF9689 ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t712A771C31CF6D9FCEB1DFE940B80E92561D4B72*, int32_t, Nullable_1_t7013E79AE56020A242FB9373ACCDF6CF43EF9689, const RuntimeMethod*))Dictionary_2_Add_mCB58D53CF2BCE6320ABBF0F588F3B33E8FA43EE4_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<TiltFive.ControllerIndex,System.Nullable`1<TiltFive.T5_ControllerState>>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m1E56B7FF4881232D23CF4C7F52EAEA306D8963BE (Dictionary_2_t712A771C31CF6D9FCEB1DFE940B80E92561D4B72* __this, int32_t ___key0, Nullable_1_t7013E79AE56020A242FB9373ACCDF6CF43EF9689 ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t712A771C31CF6D9FCEB1DFE940B80E92561D4B72*, int32_t, Nullable_1_t7013E79AE56020A242FB9373ACCDF6CF43EF9689, const RuntimeMethod*))Dictionary_2_set_Item_mF7A2710DA7F03A82247FCF1598CD167B5FC4C15F_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean TiltFive.Input::TryGetWandControlsState(System.Nullable`1<TiltFive.T5_ControllerState>&,TiltFive.ControllerIndex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_TryGetWandControlsState_m9C77A323C23D3FBBB0BC02A00F94EBD372B7D097 (Nullable_1_t7013E79AE56020A242FB9373ACCDF6CF43EF9689* ___controllerState0, int32_t ___controllerIndex1, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_get_Now_mC336498972C48439ADCD5C50D35FAE0F2A48B0F0 (const RuntimeMethod* method) ;
// System.TimeSpan System.DateTime::op_Subtraction(System.DateTime,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A DateTime_op_Subtraction_m41335EF0E6DCD52B23C64916CB973A0B4A9E0387 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___d10, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___d21, const RuntimeMethod* method) ;
// System.Double System.TimeSpan::get_TotalSeconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimeSpan_get_TotalSeconds_mED686E7CECE6A76A7DC38518698B9199DB8CDEA8 (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) ;
// System.Boolean TiltFive.Input::GetWandAvailability(TiltFive.ControllerIndex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetWandAvailability_m430211A3E807CAECEA64949CFFC26FF401903E2C (int32_t ___controllerIndex0, const RuntimeMethod* method) ;
// System.Int32 TiltFive.NativePlugin::ScanForWands()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativePlugin_ScanForWands_m7D49A1836CDB78703BE632D55330707A46DA6ABE (const RuntimeMethod* method) ;
// System.Boolean TiltFive.T5_ControllerState/Buttons::get_T5()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Buttons_get_T5_m146554F5CC69BD392FEEFF63FFA09C2A820C2763 (Buttons_tBFA5588AD4479B77161E5B2BEFEF859D11E36748* __this, const RuntimeMethod* method) ;
// System.Boolean TiltFive.T5_ControllerState/Buttons::get_One()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Buttons_get_One_m074636D0E2502F843BD7F198D77CF3B40D782DA1 (Buttons_tBFA5588AD4479B77161E5B2BEFEF859D11E36748* __this, const RuntimeMethod* method) ;
// System.Boolean TiltFive.T5_ControllerState/Buttons::get_Two()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Buttons_get_Two_m8E482CD870E54A472F3904C7D20D3B919ACABEDD (Buttons_tBFA5588AD4479B77161E5B2BEFEF859D11E36748* __this, const RuntimeMethod* method) ;
// System.Boolean TiltFive.T5_ControllerState/Buttons::get_Y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Buttons_get_Y_m5445F758C149078E23E4B8C763918E38BF59EDFD (Buttons_tBFA5588AD4479B77161E5B2BEFEF859D11E36748* __this, const RuntimeMethod* method) ;
// System.Boolean TiltFive.T5_ControllerState/Buttons::get_B()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Buttons_get_B_mE0B8CEB0826B33EFB23DBA77E5E220A73D74C821 (Buttons_tBFA5588AD4479B77161E5B2BEFEF859D11E36748* __this, const RuntimeMethod* method) ;
// System.Boolean TiltFive.T5_ControllerState/Buttons::get_A()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Buttons_get_A_m50F4EE5CB87DC581C1839E7671A93BBD49BE642C (Buttons_tBFA5588AD4479B77161E5B2BEFEF859D11E36748* __this, const RuntimeMethod* method) ;
// System.Boolean TiltFive.T5_ControllerState/Buttons::get_X()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Buttons_get_X_m75D291E586845E478C1AB757E2625EC70F9519B7 (Buttons_tBFA5588AD4479B77161E5B2BEFEF859D11E36748* __this, const RuntimeMethod* method) ;
// System.Boolean TiltFive.T5_ControllerState/Buttons::get_Three()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Buttons_get_Three_mD3105B15693685E5AD2467EA1A0F44581F0D1786 (Buttons_tBFA5588AD4479B77161E5B2BEFEF859D11E36748* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void TiltFive.TrackableSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableSettings__ctor_m9E0CFBD28D8DB8596672D96C4EC1FE5BB0638ECF (TrackableSettings_t54076219B6A408E0FCC2EED6DAC35984CC69EC4F* __this, const RuntimeMethod* method) ;
// T TiltFive.Singleton`1<TiltFive.Wand>::get_Instance()
inline Wand_tA59B1FCC3DF9DDBE82B76BEC4F04349B7D7A6181* Singleton_1_get_Instance_m123D4EAD1A25C400E8337AEAFBAB63676B29B4D9_inline (const RuntimeMethod* method)
{
	return ((  Wand_tA59B1FCC3DF9DDBE82B76BEC4F04349B7D7A6181* (*) (const RuntimeMethod*))Singleton_1_get_Instance_m91110BDBF294123D1E34990CFD7CEED57AF7965A_gshared_inline)(method);
}
// TValue System.Collections.Generic.Dictionary`2<TiltFive.ControllerIndex,TiltFive.Wand/WandCore>::get_Item(TKey)
inline WandCore_t92366109545D7851AA67CBCA8E5C23CFAD26BBAE* Dictionary_2_get_Item_mC7FE2DEBB72F2749A78EA2B28E8D21F421C5302F (Dictionary_2_t6F5AAA1CE39CE9B00E8C4497198DD367212507EC* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  WandCore_t92366109545D7851AA67CBCA8E5C23CFAD26BBAE* (*) (Dictionary_2_t6F5AAA1CE39CE9B00E8C4497198DD367212507EC*, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_m9C4302CCAE3C1BF70D02091D0E0CED7663F18211_gshared)(__this, ___key0, method);
}
// UnityEngine.Pose TiltFive.TrackableCore`1<TiltFive.WandSettings>::get_Pose_UnityWorldSpace()
inline Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 TrackableCore_1_get_Pose_UnityWorldSpace_mD92CC0E6FA6EF36E6F1087628479CD38C33942D7_inline (TrackableCore_1_t00F88F47236F7B1A13DD70AE3A5EFA818AF1485D* __this, const RuntimeMethod* method)
{
	return ((  Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 (*) (TrackableCore_1_t00F88F47236F7B1A13DD70AE3A5EFA818AF1485D*, const RuntimeMethod*))TrackableCore_1_get_Pose_UnityWorldSpace_m77B37E4BFDDF5EB20FECFD11A31D0699E766BC5E_gshared_inline)(__this, method);
}
// System.Void System.ArgumentException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, const RuntimeMethod* method) ;
// System.Boolean TiltFive.TrackableCore`1<TiltFive.WandSettings>::get_IsTracked()
inline bool TrackableCore_1_get_IsTracked_mA6069D3D185FA857B6CADE8899EBAE7C113D7ED1_inline (TrackableCore_1_t00F88F47236F7B1A13DD70AE3A5EFA818AF1485D* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TrackableCore_1_t00F88F47236F7B1A13DD70AE3A5EFA818AF1485D*, const RuntimeMethod*))TrackableCore_1_get_IsTracked_mB6A3D7AE9D9FAD1F894AED4BED64B55B9558BFD1_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<TiltFive.ControllerIndex,TiltFive.Wand/WandCore>::.ctor()
inline void Dictionary_2__ctor_m11945670DE9399DA01ECB21448267C8135B624C4 (Dictionary_2_t6F5AAA1CE39CE9B00E8C4497198DD367212507EC* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t6F5AAA1CE39CE9B00E8C4497198DD367212507EC*, const RuntimeMethod*))Dictionary_2__ctor_mCC9983804D8DC41E938E080075F9EA7BDD0C7059_gshared)(__this, method);
}
// System.Void TiltFive.Wand/WandCore::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WandCore__ctor_mD30E699C85EC00A28FAFBDEE575BDAB37072059B (WandCore_t92366109545D7851AA67CBCA8E5C23CFAD26BBAE* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<TiltFive.ControllerIndex,TiltFive.Wand/WandCore>::Add(TKey,TValue)
inline void Dictionary_2_Add_mC0232544CC6F82B505259E98EF554BF9C7F0A6CF (Dictionary_2_t6F5AAA1CE39CE9B00E8C4497198DD367212507EC* __this, int32_t ___key0, WandCore_t92366109545D7851AA67CBCA8E5C23CFAD26BBAE* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t6F5AAA1CE39CE9B00E8C4497198DD367212507EC*, int32_t, WandCore_t92366109545D7851AA67CBCA8E5C23CFAD26BBAE*, const RuntimeMethod*))Dictionary_2_Add_mC515884C0546021A29DC0A00DBCABD89B1B65872_gshared)(__this, ___key0, ___value1, method);
}
// System.Void TiltFive.Singleton`1<TiltFive.Wand>::.ctor()
inline void Singleton_1__ctor_m67F961255CDBF2D59797C2ADE4AD9DE43ED949A0 (Singleton_1_t55A4B7261A7AC4E8FA2802D1CD1FA23367C9E6FC* __this, const RuntimeMethod* method)
{
	((  void (*) (Singleton_1_t55A4B7261A7AC4E8FA2802D1CD1FA23367C9E6FC*, const RuntimeMethod*))Singleton_1__ctor_m7764B020C66D789250B6A5601102E65A6D8A9E99_gshared)(__this, method);
}
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m66E346161C9778DF8486DB4FE823D8F81A54AF1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Void TiltFive.TrackableCore`1<TiltFive.WandSettings>::Reset(T)
inline void TrackableCore_1_Reset_m38A67A200967927078AAC8CBEA3652634F975133 (TrackableCore_1_t00F88F47236F7B1A13DD70AE3A5EFA818AF1485D* __this, WandSettings_tAEC07302A7835A2A4C192445D2D1D50A475D4943* ___settings0, const RuntimeMethod* method)
{
	((  void (*) (TrackableCore_1_t00F88F47236F7B1A13DD70AE3A5EFA818AF1485D*, WandSettings_tAEC07302A7835A2A4C192445D2D1D50A475D4943*, const RuntimeMethod*))TrackableCore_1_Reset_m82169A28EA9F44B910A86379444BE0DD2A0F51F1_gshared)(__this, ___settings0, method);
}
// System.Void TiltFive.TrackableCore`1<TiltFive.WandSettings>::Update(T,TiltFive.ScaleSettings,TiltFive.GameBoardSettings)
inline void TrackableCore_1_Update_m62BF42BF834BDDEC883B1FAB332A091D2CF49C4E (TrackableCore_1_t00F88F47236F7B1A13DD70AE3A5EFA818AF1485D* __this, WandSettings_tAEC07302A7835A2A4C192445D2D1D50A475D4943* ___settings0, ScaleSettings_t4FE94D7555EF25D5286239492DE97AF448542507* ___scaleSettings1, GameBoardSettings_tA53FDF5FE8B4D937F945DB659EF5A76243634A4B* ___gameBoardSettings2, const RuntimeMethod* method)
{
	((  void (*) (TrackableCore_1_t00F88F47236F7B1A13DD70AE3A5EFA818AF1485D*, WandSettings_tAEC07302A7835A2A4C192445D2D1D50A475D4943*, ScaleSettings_t4FE94D7555EF25D5286239492DE97AF448542507*, GameBoardSettings_tA53FDF5FE8B4D937F945DB659EF5A76243634A4B*, const RuntimeMethod*))TrackableCore_1_Update_mFC6175FD0ED089E45C694D5162794B0528CF8147_gshared)(__this, ___settings0, ___scaleSettings1, ___gameBoardSettings2, method);
}
// UnityEngine.Pose TiltFive.Wand/WandCore::GetDefaultPoseGameboardSpace(TiltFive.WandSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 WandCore_GetDefaultPoseGameboardSpace_m68364CA7121F6062986CAC98C97B9C794B917B43 (WandSettings_tAEC07302A7835A2A4C192445D2D1D50A475D4943* ___settings0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Pose::.ctor(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pose__ctor_m15CA45808A2BBF1956E836D22C387FAB80BED051 (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation1, const RuntimeMethod* method) ;
// UnityEngine.Pose TiltFive.TrackableCore`1<TiltFive.WandSettings>::GameboardToWorldSpace(UnityEngine.Pose,TiltFive.ScaleSettings,TiltFive.GameBoardSettings)
inline Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 TrackableCore_1_GameboardToWorldSpace_mFA695D168D9DA297C9A86DF0EEAE7380F786AA39 (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___pose_GameBoardSpace0, ScaleSettings_t4FE94D7555EF25D5286239492DE97AF448542507* ___scaleSettings1, GameBoardSettings_tA53FDF5FE8B4D937F945DB659EF5A76243634A4B* ___gameBoardSettings2, const RuntimeMethod* method)
{
	return ((  Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 (*) (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971, ScaleSettings_t4FE94D7555EF25D5286239492DE97AF448542507*, GameBoardSettings_tA53FDF5FE8B4D937F945DB659EF5A76243634A4B*, const RuntimeMethod*))TrackableCore_1_GameboardToWorldSpace_mA20770B74F3E6DEB62AA553FC011201E904BDC11_gshared)(___pose_GameBoardSpace0, ___scaleSettings1, ___gameBoardSettings2, method);
}
// System.Boolean TiltFive.Display::GetGlassesAvailability()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Display_GetGlassesAvailability_mF1BF8B7E8413884C603712A158F02A30D2B797C2 (const RuntimeMethod* method) ;
// System.Boolean TiltFive.GameBoard::TryGetGameboardType(TiltFive.GameboardType&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameBoard_TryGetGameboardType_mA2A79BB241A7360D92A1C10BCDE2A6A4AA95B28E (int32_t* ___gameboardType0, const RuntimeMethod* method) ;
// T System.Nullable`1<TiltFive.T5_ControllerState>::get_Value()
inline T5_ControllerState_tD10E39B6E4C8C80529DBDED7EEFF83BA49090A21 Nullable_1_get_Value_mE14E838E2815B81468C16E74C64756D7C8EBEB7A (Nullable_1_t7013E79AE56020A242FB9373ACCDF6CF43EF9689* __this, const RuntimeMethod* method)
{
	return ((  T5_ControllerState_tD10E39B6E4C8C80529DBDED7EEFF83BA49090A21 (*) (Nullable_1_t7013E79AE56020A242FB9373ACCDF6CF43EF9689*, const RuntimeMethod*))Nullable_1_get_Value_mE14E838E2815B81468C16E74C64756D7C8EBEB7A_gshared)(__this, method);
}
// System.Boolean TiltFive.T5_ControllerState::get_PoseValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool T5_ControllerState_get_PoseValid_m29F537A9E53F638D0D1B682DC4934217C03E7F4A (T5_ControllerState_tD10E39B6E4C8C80529DBDED7EEFF83BA49090A21* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 TiltFive.T5_ControllerState::get_GripPos_GBD()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 T5_ControllerState_get_GripPos_GBD_m80D6E2A12758F806B7809A9DBC2B3D5B1342CC9C (T5_ControllerState_tD10E39B6E4C8C80529DBDED7EEFF83BA49090A21* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 TiltFive.TrackableCore`1<TiltFive.WandSettings>::ConvertPosGBDToUGBD(UnityEngine.Vector3)
inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TrackableCore_1_ConvertPosGBDToUGBD_m6F4FC8884C4A4CE180BE705E8B7B3044D828F5FF (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos_GBD0, const RuntimeMethod* method)
{
	return ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*) (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))TrackableCore_1_ConvertPosGBDToUGBD_m1EB5AEEFEC7593BA7DBDC3EB4E300171B91FFCA5_gshared)(___pos_GBD0, method);
}
// UnityEngine.Vector3 TiltFive.T5_ControllerState::get_FingertipsPos_GBD()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 T5_ControllerState_get_FingertipsPos_GBD_m521B6E9DB0C73FDF8AFF94683F7168F8552FD643 (T5_ControllerState_tD10E39B6E4C8C80529DBDED7EEFF83BA49090A21* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 TiltFive.T5_ControllerState::get_AimPos_GBD()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 T5_ControllerState_get_AimPos_GBD_m38075D412042D3F337D21288E980C678DF62BB14 (T5_ControllerState_tD10E39B6E4C8C80529DBDED7EEFF83BA49090A21* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion TiltFive.T5_ControllerState::get_RotToWND_GBD()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 T5_ControllerState_get_RotToWND_GBD_m129DF9FA8962FF582B6B1580E15196E85C4EBA88 (T5_ControllerState_tD10E39B6E4C8C80529DBDED7EEFF83BA49090A21* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion TiltFive.Wand/WandCore::CalculateRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 WandCore_CalculateRotation_m6208589FCD2A211FEA5B7A4F6806E8453D4A07D4 (WandCore_t92366109545D7851AA67CBCA8E5C23CFAD26BBAE* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotToWND_GBD0, const RuntimeMethod* method) ;
// System.Void TiltFive.Wand/WandCore::ProcessTrackingData(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion,TiltFive.WandSettings,TiltFive.ScaleSettings,TiltFive.GameBoardSettings,UnityEngine.Pose&,UnityEngine.Pose&,UnityEngine.Pose&,UnityEngine.Pose&,UnityEngine.Pose&,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WandCore_ProcessTrackingData_m7B2C8C71863200C2DBD604ECFC0E959759863FEC (WandCore_t92366109545D7851AA67CBCA8E5C23CFAD26BBAE* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___gripPosition_UGBD0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___fingertipsPosition_UGBD1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___aimPosition_UGBD2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_UGBD3, WandSettings_tAEC07302A7835A2A4C192445D2D1D50A475D4943* ___wandSettings4, ScaleSettings_t4FE94D7555EF25D5286239492DE97AF448542507* ___scaleSettings5, GameBoardSettings_tA53FDF5FE8B4D937F945DB659EF5A76243634A4B* ___gameBoardSettings6, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___gripPose_UGBD7, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___fingertipsPose_UGBD8, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___aimPose_UGBD9, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___gripPose_UWRLD10, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___fingertipsPose_UWRLD11, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___aimPose_UWRLD12, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Pose TiltFive.Wand/WandCore::get_gripPose_UnityWorldSpace()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 WandCore_get_gripPose_UnityWorldSpace_m6DEFF461EAE68CB278905D5F0BCEE89DB862602E_inline (WandCore_t92366109545D7851AA67CBCA8E5C23CFAD26BBAE* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetPositionAndRotation(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetPositionAndRotation_m418859BF59086EEAA084FFD6F258A43FAB408F5A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_m13B7C3EAA64DC921EC23346C56A5A597B5481FF5_inline (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_AngleAxis_m01A869DC10F976FAF493B66F15D6D6977BB61DA8 (float ___angle0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___axis1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Inverse(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Inverse_m7597DECDAD37194FAC86D1A11DCE3F0C7747F817 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// UnityEngine.Pose TiltFive.Wand/WandCore::FilterTrackingPointPose(UnityEngine.Pose,UnityEngine.Pose,UnityEngine.Pose,System.Single,TiltFive.WandSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 WandCore_FilterTrackingPointPose_mFC051CA61CF9D16DD9A408CF7C7DE03E5BADBFD0 (WandCore_t92366109545D7851AA67CBCA8E5C23CFAD26BBAE* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___staleGripPointPose0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___staleTrackingPointPose1, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___newTrackingPointPose2, float ___trackingPointOffsetDistance3, WandSettings_tAEC07302A7835A2A4C192445D2D1D50A475D4943* ___settings4, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) ;
// System.Void TiltFive.TrackableCore`1<TiltFive.WandSettings>::.ctor()
inline void TrackableCore_1__ctor_mBDA91E67518070A9EC06CFD53850589270AC3FDC (TrackableCore_1_t00F88F47236F7B1A13DD70AE3A5EFA818AF1485D* __this, const RuntimeMethod* method)
{
	((  void (*) (TrackableCore_1_t00F88F47236F7B1A13DD70AE3A5EFA818AF1485D*, const RuntimeMethod*))TrackableCore_1__ctor_mB48D3DDC4C32DF5E4652E314A16B3670F339427D_gshared)(__this, method);
}
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
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
// System.Boolean TiltFive.Input::GetButton(TiltFive.Input/WandButton,TiltFive.ControllerIndex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButton_mF17F8D182F7CFDB8F23652C4C468125E3E961534 (uint32_t ___button0, int32_t ___controllerIndex1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m45AE0B58438FBC8BF43097E744A0B84C82A84329_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Input_t2FDC361E81514DC1373FFAB9A221D30EC384196F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m90760E7EA080CC253FFD199ADD5A9C40D58FB1D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m4C7D497E9750AD3B0DEDF822A145D4F62D92ACE4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t7013E79AE56020A242FB9373ACCDF6CF43EF9689 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var wandState = currentWandStates[controllerIndex];
		il2cpp_codegen_runtime_class_init_inline(Input_t2FDC361E81514DC1373FFAB9A221D30EC384196F_il2cpp_TypeInfo_var);
		Dictionary_2_t712A771C31CF6D9FCEB1DFE940B80E92561D4B72* L_0 = ((Input_t2FDC361E81514DC1373FFAB9A221D30EC384196F_StaticFields*)il2cpp_codegen_static_fields_for(Input_t2FDC361E81514DC1373FFAB9A221D30EC384196F_il2cpp_TypeInfo_var))->___currentWandStates_0;
		int32_t L_1 = ___controllerIndex1;
		NullCheck(L_0);
		Nullable_1_t7013E79AE56020A242FB9373ACCDF6CF43EF9689 L_2;
		L_2 = Dictionary_2_get_Item_m45AE0B58438FBC8BF43097E744A0B84C82A84329(L_0, L_1, Dictionary_2_get_Item_m45AE0B58438FBC8BF43097E744A0B84C82A84329_RuntimeMethod_var);
		V_0 = L_2;
		// return wandState?.GetButton(button) ?? false;
		bool L_3;
		L_3 = Nullable_1_get_HasValue_m4C7D497E9750AD3B0DEDF822A145D4F62D92ACE4_inline((&V_0), Nullable_1_get_HasValue_m4C7D497E9750AD3B0DEDF822A145D4F62D92ACE4_RuntimeMethod_var);
		if (L_3)
		{
			goto IL_0017;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		T5_ControllerState_tD10E39B6E4C8C80529DBDED7EEFF83BA49090A21 L_4;
		L_4 = Nullable_1_GetValueOrDefault_m90760E7EA080CC253FFD199ADD5A9C40D58FB1D8_inline((&V_0), Nullable_1_GetValueOrDefault_m90760E7EA080CC253FFD199ADD5A9C40D58FB1D8_RuntimeMethod_var);
		uint32_t L_5 = ___button0;
		il2cpp_codegen_runtime_class_init_inline(Input_t2FDC361E81514DC1373FFAB9A221D30EC384196F_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Input_GetButton_mDBCF313FDE4E38C372336D542C55ED086A829A20(L_4, L_5, NULL);
		return L_6;
	}
}
// System.Boolean TiltFive.Input::TryGetButton(TiltFive.Input/WandButton,System.Boolean&,TiltFive.ControllerIndex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_TryGetButton_mD3350B50B9B3B9583274E0CB12DABBCB3F744537 (uint32_t ___button0, bool* ___pressed1, int32_t ___controllerIndex2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m45AE0B58438FBC8BF43097E744A0B84C82A84329_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Input_t2FDC361E81514DC1373FFAB9A221D30EC384196F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m90760E7EA080CC253FFD199ADD5A9C40D58FB1D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m4C7D497E9750AD3B0DEDF822A145D4F62D92ACE4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t7013E79AE56020A242FB9373ACCDF6CF43EF9689 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool* G_B2_0 = NULL;
	bool* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	bool* G_B3_1 = NULL;
	{
		// var wandState = currentWandStates[controllerIndex];
		il2cpp_codegen_runtime_class_init_inline(Input_t2FDC361E81514DC1373FFAB9A221D30EC384196F_il2cpp_TypeInfo_var);
		Dictionary_2_t712A771C31CF6D9FCEB1DFE940B80E92561D4B72* L_0 = ((Input_t2FDC361E81514DC1373FFAB9A221D30EC384196F_StaticFields*)il2cpp_codegen_static_fields_for(Input_t2FDC361E81514DC1373FFAB9A221D30EC384196F_il2cpp_TypeInfo_var))->___currentWandStates_0;
		int32_t L_1 = ___controllerIndex2;
		NullCheck(L_0);
		Nullable_1_t7013E79AE56020A242FB9373ACCDF6CF43EF9689 L_2;
		L_2 = Dictionary_2_get_Item_m45AE0B58438FBC8BF43097E744A0B84C82A84329(L_0, L_1, Dictionary_2_get_Item_m45AE0B58438FBC8BF43097E744A0B84C82A84329_RuntimeMethod_var);
		V_0 = L_2;
		// pressed = wandState?.GetButton(button) ?? false;
		bool* L_3 = ___pressed1;
		bool L_4;
		L_4 = Nullable_1_get_HasValue_m4C7D497E9750AD3B0DEDF822A145D4F62D92ACE4_inline((&V_0), Nullable_1_get_HasValue_m4C7D497E9750AD3B0DEDF822A145D4F62D92ACE4_RuntimeMethod_var);
		G_B1_0 = L_3;
		if (L_4)
		{
			G_B2_0 = L_3;
			goto IL_0019;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_0026;
	}

IL_0019:
	{
		T5_ControllerState_tD10E39B6E4C8C80529DBDED7EEFF83BA49090A21 L_5;
		L_5 = Nullable_1_GetValueOrDefault_m90760E7EA080CC253FFD199ADD5A9C40D58FB1D8_inline((&V_0), Nullable_1_GetValueOrDefault_m90760E7EA080CC253FFD199ADD5A9C40D58FB1D8_RuntimeMethod_var);
		uint32_t L_6 = ___button0;
		il2cpp_codegen_runtime_class_init_inline(Input_t2FDC361E81514DC1373FFAB9A221D30EC384196F_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Input_GetButton_mDBCF313FDE4E38C372336D542C55ED086A829A20(L_5, L_6, NULL);
		G_B3_0 = ((int32_t)(L_7));
		G_B3_1 = G_B2_0;
	}

IL_0026:
	{
		*((int8_t*)G_B3_1) = (int8_t)G_B3_0;
		// return wandState.HasValue;
		bool L_8;
		L_8 = Nullable_1_get_HasValue_m4C7D497E9750AD3B0DEDF822A145D4F62D92ACE4_inline((&V_0), Nullable_1_get_HasValue_m4C7D497E9750AD3B0DEDF822A145D4F62D92ACE4_RuntimeMethod_var);
		return L_8;
	}
}
// System.Boolean TiltFive.Input::GetButtonDown(TiltFive.Input/WandButton,TiltFive.ControllerIndex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButtonDown_m61150C4770BF0B007888EB70E8649A60AEFED47D (uint32_t ___button0, int32_t ___controllerIndex1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m45AE0B58438FBC8BF43097E744A0B84C82A84329_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Input_t2FDC361E81514DC1373FFAB9A221D30EC384196F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m90760E7EA080CC253FFD199ADD5A9C40D58FB1D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m4C7D497E9750AD3B0DEDF822A145D4F62D92ACE4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t7013E79AE56020A242FB9373ACCDF6CF43EF9689 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Nullable_1_t7013E79AE56020A242FB9373ACCDF6CF43EF9689 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B6_0 = 0;
	{
		// var wandState = currentWandStates[controllerIndex];
		il2cpp_codegen_runtime_class_init_inline(Input_t2FDC361E81514DC1373FFAB9A221D30EC384196F_il2cpp_TypeInfo_var);
		Dictionary_2_t712A771C31CF6D9FCEB1DFE940B80E92561D4B72* L_0 = ((Input_t2FDC361E81514DC1373FFAB9A221D30EC384196F_StaticFields*)il2cpp_codegen_static_fields_for(Input_t2FDC361E81514DC1373FFAB9A221D30EC384196F_il2cpp_TypeInfo_var))->___currentWandStates_0;
		int32_t L_1 = ___controllerIndex1;
		NullCheck(L_0);
		Nullable_1_t7013E79AE56020A242FB9373ACCDF6CF43EF9689 L_2;
		L_2 = Dictionary_2_get_Item_m45AE0B58438FBC8BF43097E744A0B84C82A84329(L_0, L_1, Dictionary_2_get_Item_m45AE0B58438FBC8BF43097E744A0B84C82A84329_RuntimeMethod_var);
		V_0 = L_2;
		// var previousWandState = previousWandStates[controllerIndex];
		Dictionary_2_t712A771C31CF6D9FCEB1DFE940B80E92561D4B72* L_3 = ((Input_t2FDC361E81514DC1373FFAB9A221D30EC384196F_StaticFields*)il2cpp_codegen_static_fields_for(Input_t2FDC361E81514DC1373FFAB9A221D30EC384196F_il2cpp_TypeInfo_var))->___previousWandStates_1;
		int32_t L_4 = ___controllerIndex1;
		NullCheck(L_3);
		Nullable_1_t7013E79AE56020A242FB9373ACCDF6CF43EF9689 L_5;
		L_5 = Dictionary_2_get_Item_m45AE0B58438FBC8BF43097E744A0B84C82A84329(L_3, L_4, Dictionary_2_get_Item_m45AE0B58438FBC8BF43097E744A0B84C82A84329_RuntimeMethod_var);
		V_1 = L_5;
		// var pressed = wandState?.GetButton(button) ?? false;
		bool L_6;
		L_6 = Nullable_1_get_HasValue_m4C7D497E9750AD3B0DEDF822A145D4F62D92ACE4_inline((&V_0), Nullable_1_get_HasValue_m4C7D497E9750AD3B0DEDF822A145D4F62D92ACE4_RuntimeMethod_var);
		if (L_6)
		{
			goto IL_0024;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0031;
	}

IL_0024:
	{
		T5_ControllerState_tD10E39B6E4C8C80529DBDED7EEFF83BA49090A21 L_7;
		L_7 = Nullable_1_GetValueOrDefault_m90760E7EA080CC253FFD199ADD5A9C40D58FB1D8_inline((&V_0), Nullable_1_GetValueOrDefault_m90760E7EA080CC253FFD199ADD5A9C40D58FB1D8_RuntimeMethod_var);
		uint32_t L_8 = ___button0;
		il2cpp_codegen_runtime_class_init_inline(Input_t2FDC361E81514DC1373FFAB9A221D30EC384196F_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Input_GetButton_mDBCF313FDE4E38C372336D542C55ED086A829A20(L_7, L_8, NULL);
		G_B3_0 = ((int32_t)(L_9));
	}

IL_0031:
	{
		V_2 = (bool)G_B3_0;
		// var previouslyPressed = previousWandState?.GetButton(button) ?? false;
		bool L_10;
		L_10 = Nullable_1_get_HasValue_m4C7D497E9750AD3B0DEDF822A145D4F62D92ACE4_inline((&V_1), Nullable_1_get_HasValue_m4C7D497E9750AD3B0DEDF822A145D4F62D92ACE4_RuntimeMethod_var);
		if (L_10)
		{
			goto IL_003e;
		}
	}
	{
		G_B6_0 = 0;
		goto IL_004b;
	}

IL_003e:
	{
		T5_ControllerState_tD10E39B6E4C8C80529DBDED7EEFF83BA49090A21 L_11;
		L_11 = Nullable_1_GetValueOrDefault_m90760E7EA080CC253FFD199ADD5A9C40D58FB1D8_inline((&V_1), Nullable_1_GetValueOrDefault_m90760E7EA080CC253FFD199ADD5A9C40D58FB1D8_RuntimeMethod_var);
		uint32_t L_12 = ___button0;
		il2cpp_codegen_runtime_class_init_inline(Input_t2FDC361E81514DC1373FFAB9A221D30EC384196F_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Input_GetButton_mDBCF313FDE4E38C372336D542C55ED086A829A20(L_11, L_12, NULL);
		G_B6_0 = ((int32_t)(L_13));
	}

IL_004b:
	{
		V_3 = (bool)G_B6_0;
		// if (!previousWandState.HasValue && wandState.HasValue)
		bool L_14;
		L_14 = Nullable_1_get_HasValue_m4C7D497E9750AD3B0DEDF822A145D4F62D92ACE4_inline((&V_1), Nullable_1_get_HasValue_m4C7D497E9750AD3B0DEDF822A145D4F62D92ACE4_RuntimeMethod_var);
		if (L_14)
		{
			goto IL_0060;
		}
	}
	{
		bool L_15;
		L_15 = Nullable_1_get_HasValue_m4C7D497E9750AD3B0DEDF822A145D4F62D92ACE4_inline((&V_0), Nullable_1_get_HasValue_m4C7D497E9750AD3B0DEDF822A145D4F62D92ACE4_RuntimeMethod_var);
		if (!L_15)
		{
			goto IL_0060;
		}
	}
	{
		// return pressed;
		bool L_16 = V_2;
		return L_16;
	}

IL_0060:
	{
		// return pressed && !previouslyPressed;
		bool L_17 = V_2;
		if (!L_17)
		{
			goto IL_0068;
		}
	}
	{
		bool L_18 = V_3;
		return (bool)((((int32_t)L_18) == ((int32_t)0))? 1 : 0);
	}

IL_0068:
	{
		return (bool)0;
	}
}
// System.Boolean TiltFive.Input::TryGetButtonDown(TiltFive.Input/WandButton,System.Boolean&,TiltFive.ControllerIndex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_TryGetButtonDown_mAB100DF8EB98B3BEAFC85292F3370FAD25E7B4A0 (uint32_t ___button0, bool* ___buttonDown1, int32_t ___controllerIndex2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m45AE0B58438FBC8BF43097E744A0B84C82A84329_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Input_t2FDC361E81514DC1373FFAB9A221D30EC384196F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m4C7D497E9750AD3B0DEDF822A145D4F62D92ACE4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t7013E79AE56020A242FB9373ACCDF6CF43EF9689 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var wandState = currentWandStates[controllerIndex];
		il2cpp_codegen_runtime_class_init_inline(Input_t2FDC361E81514DC1373FFAB9A221D30EC384196F_il2cpp_TypeInfo_var);
		Dictionary_2_t712A771C31CF6D9FCEB1DFE940B80E92561D4B72* L_0 = ((Input_t2FDC361E81514DC1373FFAB9A221D30EC384196F_StaticFields*)il2cpp_codegen_static_fields_for(Input_t2FDC361E81514DC1373FFAB9A221D30EC384196F_il2cpp_TypeInfo_var))->___currentWandStates_0;
		int32_t L_1 = ___controllerIndex2;
		NullCheck(L_0);
		Nullable_1_t7013E79AE56020A242FB9373ACCDF6CF43EF9689 L_2;
		L_2 = Dictionary_2_get_Item_m45AE0B58438FBC8BF43097E744A0B84C82A84329(L_0, L_1, Dictionary_2_get_Item_m45AE0B58438FBC8BF43097E744A0B84C82A84329_RuntimeMethod_var);
		V_0 = L_2;
		// buttonDown = GetButtonDown(button, controllerIndex);
		bool* L_3 = ___buttonDown1;
		uint32_t L_4 = ___button0;
		int32_t L_5 = ___controllerIndex2;
		bool L_6;
		L_6 = Input_GetButtonDown_m61150C4770BF0B007888EB70E8649A60AEFED47D(L_4, L_5, NULL);
		*((int8_t*)L_3) = (int8_t)L_6;
		// return wandState.HasValue;
		bool L_7;
		L_7 = Nullable_1_get_HasValue_m4C7D497E9750AD3B0DEDF822A145D4F62D92ACE4_inline((&V_0), Nullable_1_get_HasValue_m4C7D497E9750AD3B0DEDF822A145D4F62D92ACE4_RuntimeMethod_var);
		return L_7;
	}
}
// System.Boolean TiltFive.Input::GetButtonUp(TiltFive.Input/WandButton,TiltFive.ControllerIndex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButtonUp_m457A09CA78785E4B02D129D1EF5343C4C8C4BF74 (uint32_t ___button0, int32_t ___controllerIndex1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m45AE0B58438FBC8BF43097E744A0B84C82A84329_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Input_t2FDC361E81514DC1373FFAB9A221D30EC384196F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m90760E7EA080CC253FFD199ADD5A9C40D58FB1D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m4C7D497E9750AD3B0DEDF822A145D4F62D92ACE4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t7013E79AE56020A242FB9373ACCDF6CF43EF9689 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Nullable_1_t7013E79AE56020A242FB9373ACCDF6CF43EF9689 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B6_0 = 0;
	{
		// var wandState = currentWandStates[controllerIndex];
		il2cpp_codegen_runtime_class_init_inline(Input_t2FDC361E81514DC1373FFAB9A221D30EC384196F_il2cpp_TypeInfo_var);
		Dictionary_2_t712A771C31CF6D9FCEB1DFE940B80E92561D4B72* L_0 = ((Input_t2FDC361E81514DC1373FFAB9A221D30EC384196F_StaticFields*)il2cpp_codegen_static_fields_for(Input_t2FDC361E81514DC1373FFAB9A221D30EC384196F_il2cpp_TypeInfo_var))->___currentWandStates_0;
		int32_t L_1 = ___controllerIndex1;
		NullCheck(L_0);
		Nullable_1_t7013E79AE56020A242FB9373ACCDF6CF43EF9689 L_2;
		L_2 = Dictionary_2_get_Item_m45AE0B58438FBC8BF43097E744A0B84C82A84329(L_0, L_1, Dictionary_2_get_Item_m45AE0B58438FBC8BF43097E744A0B84C82A84329_RuntimeMethod_var);
		V_0 = L_2;
		// var previousWandState = previousWandStates[controllerIndex];
		Dictionary_2_t712A771C31CF6D9FCEB1DFE940B80E92561D4B72* L_3 = ((Input_t2FDC361E81514DC1373FFAB9A221D30EC384196F_StaticFields*)il2cpp_codegen_static_fields_for(Input_t2FDC361E81514DC1373FFAB9A221D30EC384196F_il2cpp_TypeInfo_var))->___previousWandStates_1;
		int32_t L_4 = ___controllerIndex1;
		NullCheck(L_3);
		Nullable_1_t7013E79AE56020A242FB9373ACCDF6CF43EF9689 L_5;
		L_5 = Dictionary_2_get_Item_m45AE0B58438FBC8BF43097E744A0B84C82A84329(L_3, L_4, Dictionary_2_get_Item_m45AE0B58438FBC8BF43097E744A0B84C82A84329_RuntimeMethod_var);
		V_1 = L_5;
		// var pressed = wandState?.GetButton(button) ?? false;
		bool L_6;
		L_6 = Nullable_1_get_HasValue_m4C7D497E9750AD3B0DEDF822A145D4F62D92ACE4_inline((&V_0), Nullable_1_get_HasValue_m4C7D497E9750AD3B0DEDF822A145D4F62D92ACE4_RuntimeMethod_var);
		if (L_6)
		{
			goto IL_0024;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0031;
	}

IL_0024:
	{
		T5_ControllerState_tD10E39B6E4C8C80529DBDED7EEFF83BA49090A21 L_7;
		L_7 = Nullable_1_GetValueOrDefault_m90760E7EA080CC253FFD199ADD5A9C40D58FB1D8_inline((&V_0), Nullable_1_GetValueOrDefault_m90760E7EA080CC253FFD199ADD5A9C40D58FB1D8_RuntimeMethod_var);
		uint32_t L_8 = ___button0;
		il2cpp_codegen_runtime_class_init_inline(Input_t2FDC361E81514DC1373FFAB9A221D30EC384196F_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Input_GetButton_mDBCF313FDE4E38C372336D542C55ED086A829A20(L_7, L_8, NULL);
		G_B3_0 = ((int32_t)(L_9));
	}

IL_0031:
	{
		V_2 = (bool)G_B3_0;
		// var previouslyPressed = previousWandState?.GetButton(button) ?? false;
		bool L_10;
		L_10 = Nullable_1_get_HasValue_m4C7D497E9750AD3B0DEDF822A145D4F62D92ACE4_inline((&V_1), Nullable_1_get_HasValue_m4C7D497E9750AD3B0DEDF822A145D4F62D92ACE4_RuntimeMethod_var);
		if (L_10)
		{
			goto IL_003e;
		}
	}
	{
		G_B6_0 = 0;
		goto IL_004b;
	}

IL_003e:
	{
		T5_ControllerState_tD10E39B6E4C8C80529DBDED7EEFF83BA49090A21 L_11;
		L_11 = Nullable_1_GetValueOrDefault_m90760E7EA080CC253FFD199ADD5A9C40D58FB1D8_inline((&V_1), Nullable_1_GetValueOrDefault_m90760E7EA080CC253FFD199ADD5A9C40D58FB1D8_RuntimeMethod_var);
		uint32_t L_12 = ___button0;
		il2cpp_codegen_runtime_class_init_inline(Input_t2FDC361E81514DC1373FFAB9A221D30EC384196F_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Input_GetButton_mDBCF313FDE4E38C372336D542C55ED086A829A20(L_11, L_12, NULL);
		G_B6_0 = ((int32_t)(L_13));
	}

IL_004b:
	{
		V_3 = (bool)G_B6_0;
		// return previousWandState.HasValue
		//     ? !pressed && previouslyPressed
		//     // If the current state exists but the previous state was null, the wand has just connected.
		//     // There's no way for the button to be pressed during the previous frame,
		//     // so there's no way for the button to have been released this frame. Always return false.
		//     : false;
		bool L_14;
		L_14 = Nullable_1_get_HasValue_m4C7D497E9750AD3B0DEDF822A145D4F62D92ACE4_inline((&V_1), Nullable_1_get_HasValue_m4C7D497E9750AD3B0DEDF822A145D4F62D92ACE4_RuntimeMethod_var);
		if (L_14)
		{
			goto IL_0057;
		}
	}
	{
		return (bool)0;
	}

IL_0057:
	{
		bool L_15 = V_2;
		bool L_16 = V_3;
		return (bool)((int32_t)(((((int32_t)L_15) == ((int32_t)0))? 1 : 0)&(int32_t)L_16));
	}
}
// System.Boolean TiltFive.Input::TryGetButtonUp(TiltFive.Input/WandButton,System.Boolean&,TiltFive.ControllerIndex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_TryGetButtonUp_m3355137EC448BD1DFC368EEAD6F4F51A7B2EE5A2 (uint32_t ___button0, bool* ___buttonUp1, int32_t ___controllerIndex2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m45AE0B58438FBC8BF43097E744A0B84C82A84329_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Input_t2FDC361E81514DC1373FFAB9A221D30EC384196F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m4C7D497E9750AD3B0DEDF822A145D4F62D92ACE4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t7013E79AE56020A242FB9373ACCDF6CF43EF9689 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var wandState = currentWandStates[controllerIndex];
		il2cpp_codegen_runtime_class_init_inline(Input_t2FDC361E81514DC1373FFAB9A221D30EC384196F_il2cpp_TypeInfo_var);
		Dictionary_2_t712A771C31CF6D9FCEB1DFE940B80E92561D4B72* L_0 = ((Input_t2FDC361E81514DC1373FFAB9A221D30EC384196F_StaticFields*)il2cpp_codegen_static_fields_for(Input_t2FDC361E81514DC1373FFAB9A221D30EC384196F_il2cpp_TypeInfo_var))->___currentWandStates_0;
		int32_t L_1 = ___controllerIndex2;
		NullCheck(L_0);
		Nullable_1_t7013E79AE56020A242FB9373ACCDF6CF43EF9689 L_2;
		L_2 = Dictionary_2_get_Item_m45AE0B58438FBC8BF43097E744A0B84C82A84329(L_0, L_1, Dictionary_2_get_Item_m45AE0B58438FBC8BF43097E744A0B84C82A84329_RuntimeMethod_var);
		V_0 = L_2;
		// buttonUp = GetButtonUp(button, controllerIndex);
		bool* L_3 = ___buttonUp1;
		uint32_t L_4 = ___button0;
		int32_t L_5 = ___controllerIndex2;
		bool L_6;
		L_6 = Input_GetButtonUp_m457A09CA78785E4B02D129D1EF5343C4C8C4BF74(L_4, L_5, NULL);
		*((int8_t*)L_3) = (int8_t)L_6;
		// return wandState.HasValue;
		bool L_7;
		L_7 = Nullable_1_get_HasValue_m4C7D497E9750AD3B0DEDF822A145D4F62D92ACE4_inline((&V_0), Nullable_1_get_HasValue_m4C7D497E9750AD3B0DEDF822A145D4F62D92ACE4_RuntimeMethod_var);
		return L_7;
	}
}
// UnityEngine.Vector2 TiltFive.Input::GetStickTilt(TiltFive.ControllerIndex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Input_GetStickTilt_mFEB51372226C0934146767275DCEA8DE3BC49C40 (int32_t ___controllerIndex0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m45AE0B58438FBC8BF43097E744A0B84C82A84329_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Input_t2FDC361E81514DC1373FFAB9A221D30EC384196F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m90760E7EA080CC253FFD199ADD5A9C40D58FB1D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_mD426B43DF269A37F9B9D7BA1AEFE0E7B5DD07870_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m7D139E89559ADEA9413ED563F583C3CB92738A79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m4C7D497E9750AD3B0DEDF822A145D4F62D92ACE4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mC5F1DBB1421D7BCF66A20F030E7524CFD671B50A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_tE6438F66263679630B1DEF49F95288C8DBFDCE32 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Nullable_1_t7013E79AE56020A242FB9373ACCDF6CF43EF9689 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Nullable_1_tE6438F66263679630B1DEF49F95288C8DBFDCE32 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Nullable_1_t7013E79AE56020A242FB9373ACCDF6CF43EF9689* G_B2_0 = NULL;
	Nullable_1_t7013E79AE56020A242FB9373ACCDF6CF43EF9689* G_B1_0 = NULL;
	Nullable_1_tE6438F66263679630B1DEF49F95288C8DBFDCE32 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		// return currentWandStates[controllerIndex]?.Stick ?? Vector2.zero;
		il2cpp_codegen_runtime_class_init_inline(Input_t2FDC361E81514DC1373FFAB9A221D30EC384196F_il2cpp_TypeInfo_var);
		Dictionary_2_t712A771C31CF6D9FCEB1DFE940B80E92561D4B72* L_0 = ((Input_t2FDC361E81514DC1373FFAB9A221D30EC384196F_StaticFields*)il2cpp_codegen_static_fields_for(Input_t2FDC361E81514DC1373FFAB9A221D30EC384196F_il2cpp_TypeInfo_var))->___currentWandStates_0;
		int32_t L_1 = ___controllerIndex0;
		NullCheck(L_0);
		Nullable_1_t7013E79AE56020A242FB9373ACCDF6CF43EF9689 L_2;
		L_2 = Dictionary_2_get_Item_m45AE0B58438FBC8BF43097E744A0B84C82A84329(L_0, L_1, Dictionary_2_get_Item_m45AE0B58438FBC8BF43097E744A0B84C82A84329_RuntimeMethod_var);
		V_1 = L_2;
		Nullable_1_t7013E79AE56020A242FB9373ACCDF6CF43EF9689* L_3 = (&V_1);
		bool L_4;
		L_4 = Nullable_1_get_HasValue_m4C7D497E9750AD3B0DEDF822A145D4F62D92ACE4_inline(L_3, Nullable_1_get_HasValue_m4C7D497E9750AD3B0DEDF822A145D4F62D92ACE4_RuntimeMethod_var);
		G_B1_0 = L_3;
		if (L_4)
		{
			G_B2_0 = L_3;
			goto IL_0022;
		}
	}
	{
		il2cpp_codegen_initobj((&V_2), sizeof(Nullable_1_tE6438F66263679630B1DEF49F95288C8DBFDCE32));
		Nullable_1_tE6438F66263679630B1DEF49F95288C8DBFDCE32 L_5 = V_2;
		G_B3_0 = L_5;
		goto IL_0031;
	}

IL_0022:
	{
		T5_ControllerState_tD10E39B6E4C8C80529DBDED7EEFF83BA49090A21 L_6;
		L_6 = Nullable_1_GetValueOrDefault_m90760E7EA080CC253FFD199ADD5A9C40D58FB1D8_inline(G_B2_0, Nullable_1_GetValueOrDefault_m90760E7EA080CC253FFD199ADD5A9C40D58FB1D8_RuntimeMethod_var);
		Joystick_t8285A98B287E3D3C6E96FC7C72A71DA9F75F27CD L_7 = L_6.___Stick_6;
		Nullable_1_tE6438F66263679630B1DEF49F95288C8DBFDCE32 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Nullable_1__ctor_m7D139E89559ADEA9413ED563F583C3CB92738A79((&L_8), L_7, /*hidden argument*/Nullable_1__ctor_m7D139E89559ADEA9413ED563F583C3CB92738A79_RuntimeMethod_var);
		G_B3_0 = L_8;
	}

IL_0031:
	{
		V_0 = G_B3_0;
		bool L_9;
		L_9 = Nullable_1_get_HasValue_mC5F1DBB1421D7BCF66A20F030E7524CFD671B50A_inline((&V_0), Nullable_1_get_HasValue_mC5F1DBB1421D7BCF66A20F030E7524CFD671B50A_RuntimeMethod_var);
		if (L_9)
		{
			goto IL_0041;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		return L_10;
	}

IL_0041:
	{
		Joystick_t8285A98B287E3D3C6E96FC7C72A71DA9F75F27CD L_11;
		L_11 = Nullable_1_GetValueOrDefault_mD426B43DF269A37F9B9D7BA1AEFE0E7B5DD07870_inline((&V_0), Nullable_1_GetValueOrDefault_mD426B43DF269A37F9B9D7BA1AEFE0E7B5DD07870_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = Joystick_op_Implicit_m3B7933B7EEFFFB1E8F58A62C9621005234AA9013(L_11, NULL);
		return L_12;
	}
}
// System.Boolean TiltFive.Input::TryGetStickTilt(UnityEngine.Vector2&,TiltFive.ControllerIndex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_TryGetStickTilt_m6A361E517139D398B5AE185B81121C40EAD176D8 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___stickTilt0, int32_t ___controllerIndex1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m45AE0B58438FBC8BF43097E744A0B84C82A84329_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Input_t2FDC361E81514DC1373FFAB9A221D30EC384196F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m4C7D497E9750AD3B0DEDF822A145D4F62D92ACE4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t7013E79AE56020A242FB9373ACCDF6CF43EF9689 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var wandState = currentWandStates[controllerIndex];
		il2cpp_codegen_runtime_class_init_inline(Input_t2FDC361E81514DC1373FFAB9A221D30EC384196F_il2cpp_TypeInfo_var);
		Dictionary_2_t712A771C31CF6D9FCEB1DFE940B80E92561D4B72* L_0 = ((Input_t2FDC361E81514DC1373FFAB9A221D30EC384196F_StaticFields*)il2cpp_codegen_static_fields_for(Input_t2FDC361E81514DC1373FFAB9A221D30EC384196F_il2cpp_TypeInfo_var))->___currentWandStates_0;
		int32_t L_1 = ___controllerIndex1;
		NullCheck(L_0);
		Nullable_1_t7013E79AE56020A242FB9373ACCDF6CF43EF9689 L_2;
		L_2 = Dictionary_2_get_Item_m45AE0B58438FBC8BF43097E744A0B84C82A84329(L_0, L_1, Dictionary_2_get_Item_m45AE0B58438FBC8BF43097E744A0B84C82A84329_RuntimeMethod_var);
		V_0 = L_2;
		// stickTilt = GetStickTilt(controllerIndex);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_3 = ___stickTilt0;
		int32_t L_4 = ___controllerIndex1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Input_GetStickTilt_mFEB51372226C0934146767275DCEA8DE3BC49C40(L_4, NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_3 = L_5;
		// return wandState.HasValue;
		bool L_6;
		L_6 = Nullable_1_get_HasValue_m4C7D497E9750AD3B0DEDF822A145D4F62D92ACE4_inline((&V_0), Nullable_1_get_HasValue_m4C7D497E9750AD3B0DEDF822A145D4F62D92ACE4_RuntimeMethod_var);
		return L_6;
	}
}
// System.Single TiltFive.Input::GetTrigger(TiltFive.ControllerIndex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetTrigger_m5C078439A89E8B95460FB98E45AEB3ECE9580AC1 (int32_t ___controllerIndex0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m45AE0B58438FBC8BF43097E744A0B84C82A84329_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Input_t2FDC361E81514DC1373FFAB9A221D30EC384196F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m90760E7EA080CC253FFD199ADD5A9C40D58FB1D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m4C7D497E9750AD3B0DEDF822A145D4F62D92ACE4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t7013E79AE56020A242FB9373ACCDF6CF43EF9689 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Nullable_1_t7013E79AE56020A242FB9373ACCDF6CF43EF9689* G_B2_0 = NULL;
	Nullable_1_t7013E79AE56020A242FB9373ACCDF6CF43EF9689* G_B1_0 = NULL;
	{
		// return currentWandStates[controllerIndex]?.Trigger ?? 0.0f;
		il2cpp_codegen_runtime_class_init_inline(Input_t2FDC361E81514DC1373FFAB9A221D30EC384196F_il2cpp_TypeInfo_var);
		Dictionary_2_t712A771C31CF6D9FCEB1DFE940B80E92561D4B72* L_0 = ((Input_t2FDC361E81514DC1373FFAB9A221D30EC384196F_StaticFields*)il2cpp_codegen_static_fields_for(Input_t2FDC361E81514DC1373FFAB9A221D30EC384196F_il2cpp_TypeInfo_var))->___currentWandStates_0;
		int32_t L_1 = ___controllerIndex0;
		NullCheck(L_0);
		Nullable_1_t7013E79AE56020A242FB9373ACCDF6CF43EF9689 L_2;
		L_2 = Dictionary_2_get_Item_m45AE0B58438FBC8BF43097E744A0B84C82A84329(L_0, L_1, Dictionary_2_get_Item_m45AE0B58438FBC8BF43097E744A0B84C82A84329_RuntimeMethod_var);
		V_0 = L_2;
		Nullable_1_t7013E79AE56020A242FB9373ACCDF6CF43EF9689* L_3 = (&V_0);
		bool L_4;
		L_4 = Nullable_1_get_HasValue_m4C7D497E9750AD3B0DEDF822A145D4F62D92ACE4_inline(L_3, Nullable_1_get_HasValue_m4C7D497E9750AD3B0DEDF822A145D4F62D92ACE4_RuntimeMethod_var);
		G_B1_0 = L_3;
		if (L_4)
		{
			G_B2_0 = L_3;
			goto IL_001d;
		}
	}
	{
		return (0.0f);
	}

IL_001d:
	{
		T5_ControllerState_tD10E39B6E4C8C80529DBDED7EEFF83BA49090A21 L_5;
		L_5 = Nullable_1_GetValueOrDefault_m90760E7EA080CC253FFD199ADD5A9C40D58FB1D8_inline(G_B2_0, Nullable_1_GetValueOrDefault_m90760E7EA080CC253FFD199ADD5A9C40D58FB1D8_RuntimeMethod_var);
		float L_6 = L_5.___Trigger_5;
		return L_6;
	}
}
// System.Boolean TiltFive.Input::TryGetTrigger(System.Single&,TiltFive.ControllerIndex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_TryGetTrigger_mA439D789D7FE60DCF09F7DD25A686624F4D70D37 (float* ___triggerDisplacement0, int32_t ___controllerIndex1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m45AE0B58438FBC8BF43097E744A0B84C82A84329_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Input_t2FDC361E81514DC1373FFAB9A221D30EC384196F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m4C7D497E9750AD3B0DEDF822A145D4F62D92ACE4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t7013E79AE56020A242FB9373ACCDF6CF43EF9689 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var wandState = currentWandStates[controllerIndex];
		il2cpp_codegen_runtime_class_init_inline(Input_t2FDC361E81514DC1373FFAB9A221D30EC384196F_il2cpp_TypeInfo_var);
		Dictionary_2_t712A771C31CF6D9FCEB1DFE940B80E92561D4B72* L_0 = ((Input_t2FDC361E81514DC1373FFAB9A221D30EC384196F_StaticFields*)il2cpp_codegen_static_fields_for(Input_t2FDC361E81514DC1373FFAB9A221D30EC384196F_il2cpp_TypeInfo_var))->___currentWandStates_0;
		int32_t L_1 = ___controllerIndex1;
		NullCheck(L_0);
		Nullable_1_t7013E79AE56020A242FB9373ACCDF6CF43EF9689 L_2;
		L_2 = Dictionary_2_get_Item_m45AE0B58438FBC8BF43097E744A0B84C82A84329(L_0, L_1, Dictionary_2_get_Item_m45AE0B58438FBC8BF43097E744A0B84C82A84329_RuntimeMethod_var);
		V_0 = L_2;
		// triggerDisplacement = GetTrigger(controllerIndex);
		float* L_3 = ___triggerDisplacement0;
		int32_t L_4 = ___controllerIndex1;
		float L_5;
		L_5 = Input_GetTrigger_m5C078439A89E8B95460FB98E45AEB3ECE9580AC1(L_4, NULL);
		*((float*)L_3) = (float)L_5;
		// return wandState.HasValue;
		bool L_6;
		L_6 = Nullable_1_get_HasValue_m4C7D497E9750AD3B0DEDF822A145D4F62D92ACE4_inline((&V_0), Nullable_1_get_HasValue_m4C7D497E9750AD3B0DEDF822A145D4F62D92ACE4_RuntimeMethod_var);
		return L_6;
	}
}
// System.Boolean TiltFive.Input::GetWandAvailability(TiltFive.ControllerIndex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetWandAvailability_m430211A3E807CAECEA64949CFFC26FF401903E2C (int32_t ___controllerIndex0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Input_t2FDC361E81514DC1373FFAB9A221D30EC384196F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	T5_Bool_t945CAC2B53F54530B6DEDB6BB7E8C04BCB4970EC V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	DllNotFoundException_t8CAE636A394C482C9FCF38FB7B7929506319D534* V_2 = NULL;
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (!wandAvailabilityErroredOnce) {
		il2cpp_codegen_runtime_class_init_inline(Input_t2FDC361E81514DC1373FFAB9A221D30EC384196F_il2cpp_TypeInfo_var);
		bool L_0 = ((Input_t2FDC361E81514DC1373FFAB9A221D30EC384196F_StaticFields*)il2cpp_codegen_static_fields_for(Input_t2FDC361E81514DC1373FFAB9A221D30EC384196F_il2cpp_TypeInfo_var))->___wandAvailabilityErroredOnce_4;
		if (L_0)
		{
			goto IL_0067;
		}
	}
	try
	{// begin try (depth: 1)
		{
			// T5_Bool wandAvailable = false;
			T5_Bool_t945CAC2B53F54530B6DEDB6BB7E8C04BCB4970EC L_1;
			L_1 = T5_Bool_op_Implicit_mD69CA4D7BE80D887A6C1CAA6D4E666EF31C99F7D((bool)0, NULL);
			V_0 = L_1;
			// int result = NativePlugin.GetWandAvailability(ref wandAvailable, controllerIndex);
			int32_t L_2 = ___controllerIndex0;
			int32_t L_3;
			L_3 = NativePlugin_GetWandAvailability_m688D95BF3F138FE5D09ECC1D597ABB2CA754D7C6((&V_0), L_2, NULL);
			// if (result == 0) {
			if (L_3)
			{
				goto IL_0021_1;
			}
		}
		{
			// return wandAvailable;
			T5_Bool_t945CAC2B53F54530B6DEDB6BB7E8C04BCB4970EC L_4 = V_0;
			bool L_5;
			L_5 = T5_Bool_op_Implicit_mF773EB75E5E087E34E8A590D27ABCAECDD013C69(L_4, NULL);
			V_1 = L_5;
			goto IL_0069;
		}

IL_0021_1:
		{
			// }
			goto IL_0067;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DllNotFoundException_t8CAE636A394C482C9FCF38FB7B7929506319D534_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0023;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0045;
		}
		throw e;
	}

CATCH_0023:
	{// begin catch(System.DllNotFoundException)
		// catch (DllNotFoundException e)
		V_2 = ((DllNotFoundException_t8CAE636A394C482C9FCF38FB7B7929506319D534*)IL2CPP_GET_ACTIVE_EXCEPTION(DllNotFoundException_t8CAE636A394C482C9FCF38FB7B7929506319D534*));
		// Log.Info("Could not connect to Tilt Five plugin for wand: {0}", e.Message);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var)), (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_6;
		DllNotFoundException_t8CAE636A394C482C9FCF38FB7B7929506319D534* L_8 = V_2;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_8);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_9);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_9);
		Log_Info_m57A985F6B299403D9BC1A3F66AF4EA16BDBDCBAB(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDA7452B15A3651CF6AB97AFE324E852FD591E4D7)), L_7, NULL);
		// wandAvailabilityErroredOnce = true;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Input_t2FDC361E81514DC1373FFAB9A221D30EC384196F_il2cpp_TypeInfo_var)));
		((Input_t2FDC361E81514DC1373FFAB9A221D30EC384196F_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Input_t2FDC361E81514DC1373FFAB9A221D30EC384196F_il2cpp_TypeInfo_var))))->___wandAvailabilityErroredOnce_4 = (bool)1;
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0067;
	}// end catch (depth: 1)

CATCH_0045:
	{// begin catch(System.Exception)
		// catch (Exception e)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// Log.Error(
		//     "Failed to connect to Tilt Five plugin for wand availability: {0}",
		//     e.ToString());
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var)), (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_10;
		Exception_t* L_12 = V_3;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_12);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_13);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_13);
		Log_Error_mFAEE822C890E48138381AB6D607FA252E0245A00(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral54B243199D39557158DF5DF8B8F4FEE3FFACE5A9)), L_11, NULL);
		// wandAvailabilityErroredOnce = true;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Input_t2FDC361E81514DC1373FFAB9A221D30EC384196F_il2cpp_TypeInfo_var)));
		((Input_t2FDC361E81514DC1373FFAB9A221D30EC384196F_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Input_t2FDC361E81514DC1373FFAB9A221D30EC384196F_il2cpp_TypeInfo_var))))->___wandAvailabilityErroredOnce_4 = (bool)1;
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0067;
	}// end catch (depth: 1)

IL_0067:
	{
		// return false;
		return (bool)0;
	}

IL_0069:
	{
		// }
		bool L_14 = V_1;
		return L_14;
	}
}
// System.Boolean TiltFive.Input::SwapWandHandedness()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_SwapWandHandedness_mD178BA340866EECAC8FD6AD6A01732141ECB4B9C (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// int result = 1;
		V_0 = 1;
	}
	try
	{// begin try (depth: 1)
		// result = NativePlugin.SwapWandHandedness();
		int32_t L_0;
		L_0 = NativePlugin_SwapWandHandedness_m59E477C237572F0370CD0D40602863CCF7A541A3(NULL);
		V_0 = L_0;
		// }
		goto IL_001b;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_000a;
		}
		throw e;
	}

CATCH_000a:
	{// begin catch(System.Exception)
		// Log.Error(e.Message);
		NullCheck(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)));
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2;
		L_2 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var)));
		Log_Error_mFAEE822C890E48138381AB6D607FA252E0245A00(L_1, L_2, NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_001b;
	}// end catch (depth: 1)

IL_001b:
	{
		// return (0 == result);
		int32_t L_3 = V_0;
		return (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean TiltFive.Input::SetRumbleMotor(System.UInt32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_SetRumbleMotor_m85155B22B3BAD91E4CEE563DB40EC5C4E6CF7965 (uint32_t ___motor0, float ___intensity1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// int result = 0;
		V_0 = 0;
	}
	try
	{// begin try (depth: 1)
		// result = NativePlugin.SetRumbleMotor(motor, intensity);
		uint32_t L_0 = ___motor0;
		float L_1 = ___intensity1;
		int32_t L_2;
		L_2 = NativePlugin_SetRumbleMotor_m70ACDEC3D80E7ACA6CB9EC91AD5B3F7927532AC2(L_0, L_1, NULL);
		V_0 = L_2;
		// }
		goto IL_001d;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_000c;
		}
		throw e;
	}

CATCH_000c:
	{// begin catch(System.Exception)
		// Log.Error(e.Message);
		NullCheck(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)));
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4;
		L_4 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var)));
		Log_Error_mFAEE822C890E48138381AB6D607FA252E0245A00(L_3, L_4, NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_001d;
	}// end catch (depth: 1)

IL_001d:
	{
		// return (0 != result);
		int32_t L_5 = V_0;
		return (bool)((!(((uint32_t)L_5) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.Void TiltFive.Input::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Input_Update_mEB1B6A62E32D8499B12A5D513EFDF462E7CFC6F3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Input_t2FDC361E81514DC1373FFAB9A221D30EC384196F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TryScanForWands();
		il2cpp_codegen_runtime_class_init_inline(Input_t2FDC361E81514DC1373FFAB9A221D30EC384196F_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Input_TryScanForWands_m1CAAA24DAF359B560A291D4A0104255A15AE2859(NULL);
		// GetLatestWandControlsStates();
		Input_GetLatestWandControlsStates_m2C1B4E928D17AFCE8223401FF6B9723A5E1375E3(NULL);
		// }
		return;
	}
}
// System.Boolean TiltFive.Input::TryGetWandControlsState(System.Nullable`1<TiltFive.T5_ControllerState>&,TiltFive.ControllerIndex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_TryGetWandControlsState_m9C77A323C23D3FBBB0BC02A00F94EBD372B7D097 (Nullable_1_t7013E79AE56020A242FB9373ACCDF6CF43EF9689* ___controllerState0, int32_t ___controllerIndex1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m7F9421D24C9E648E435BDE5370663B5116C4D513_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	T5_ControllerState_tD10E39B6E4C8C80529DBDED7EEFF83BA49090A21 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Nullable_1_t7013E79AE56020A242FB9373ACCDF6CF43EF9689 V_2;
	memset((&V_2), 0, sizeof(V_2));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	Nullable_1_t7013E79AE56020A242FB9373ACCDF6CF43EF9689* G_B3_0 = NULL;
	Nullable_1_t7013E79AE56020A242FB9373ACCDF6CF43EF9689* G_B2_0 = NULL;
	Nullable_1_t7013E79AE56020A242FB9373ACCDF6CF43EF9689 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	Nullable_1_t7013E79AE56020A242FB9373ACCDF6CF43EF9689* G_B4_1 = NULL;
	{
		// int result = 1;
		V_0 = 1;
	}
	try
	{// begin try (depth: 1)
		{
			// T5_ControllerState state = new T5_ControllerState();
			il2cpp_codegen_initobj((&V_1), sizeof(T5_ControllerState_tD10E39B6E4C8C80529DBDED7EEFF83BA49090A21));
			// result = NativePlugin.GetControllerState(controllerIndex, ref state);
			int32_t L_0 = ___controllerIndex1;
			int32_t L_1;
			L_1 = NativePlugin_GetControllerState_mEBE282128D33AFE3AA9166AA2CEF43B2EC83B64F(L_0, (&V_1), NULL);
			V_0 = L_1;
			// controllerState = (result == 0)
			//     ? state
			//     : (T5_ControllerState?) null;
			Nullable_1_t7013E79AE56020A242FB9373ACCDF6CF43EF9689* L_2 = ___controllerState0;
			int32_t L_3 = V_0;
			G_B2_0 = L_2;
			if (!L_3)
			{
				G_B3_0 = L_2;
				goto IL_0022_1;
			}
		}
		{
			il2cpp_codegen_initobj((&V_2), sizeof(Nullable_1_t7013E79AE56020A242FB9373ACCDF6CF43EF9689));
			Nullable_1_t7013E79AE56020A242FB9373ACCDF6CF43EF9689 L_4 = V_2;
			G_B4_0 = L_4;
			G_B4_1 = G_B2_0;
			goto IL_0028_1;
		}

IL_0022_1:
		{
			T5_ControllerState_tD10E39B6E4C8C80529DBDED7EEFF83BA49090A21 L_5 = V_1;
			Nullable_1_t7013E79AE56020A242FB9373ACCDF6CF43EF9689 L_6;
			memset((&L_6), 0, sizeof(L_6));
			Nullable_1__ctor_m7F9421D24C9E648E435BDE5370663B5116C4D513((&L_6), L_5, /*hidden argument*/Nullable_1__ctor_m7F9421D24C9E648E435BDE5370663B5116C4D513_RuntimeMethod_var);
			G_B4_0 = L_6;
			G_B4_1 = G_B3_0;
		}

IL_0028_1:
		{
			*(Nullable_1_t7013E79AE56020A242FB9373ACCDF6CF43EF9689*)G_B4_1 = G_B4_0;
			// }
			goto IL_0047;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_002f;
		}
		throw e;
	}

CATCH_002f:
	{// begin catch(System.Exception)
		// controllerState = null;
		Nullable_1_t7013E79AE56020A242FB9373ACCDF6CF43EF9689* L_7 = ___controllerState0;
		il2cpp_codegen_initobj(L_7, sizeof(Nullable_1_t7013E79AE56020A242FB9373ACCDF6CF43EF9689));
		// Log.Error(e.Message);
		NullCheck(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)));
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9;
		L_9 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var)));
		Log_Error_mFAEE822C890E48138381AB6D607FA252E0245A00(L_8, L_9, NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0047;
	}// end catch (depth: 1)

IL_0047:
	{
		// return (0 == result);
		int32_t L_10 = V_0;
		return (bool)((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void TiltFive.Input::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Input__cctor_mA9E2CC8F458E17269D17102F05DD94AB41DC1AAC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m8518B24FEE8ACCA5ED99DC2739AB8910DF6F03CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m1100551CF31C395EAC94FC2EB66B23DE592FE22B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t712A771C31CF6D9FCEB1DFE940B80E92561D4B72_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Input_t2FDC361E81514DC1373FFAB9A221D30EC384196F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t7013E79AE56020A242FB9373ACCDF6CF43EF9689 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// private static DateTime lastScanAttempt = System.DateTime.MinValue;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0 = ((DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields*)il2cpp_codegen_static_fields_for(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var))->___MinValue_32;
		((Input_t2FDC361E81514DC1373FFAB9A221D30EC384196F_StaticFields*)il2cpp_codegen_static_fields_for(Input_t2FDC361E81514DC1373FFAB9A221D30EC384196F_il2cpp_TypeInfo_var))->___lastScanAttempt_2 = L_0;
		// private static readonly double wandScanRate = 0.5d;
		((Input_t2FDC361E81514DC1373FFAB9A221D30EC384196F_StaticFields*)il2cpp_codegen_static_fields_for(Input_t2FDC361E81514DC1373FFAB9A221D30EC384196F_il2cpp_TypeInfo_var))->___wandScanRate_3 = (0.5);
		// private static bool wandAvailabilityErroredOnce = false;
		((Input_t2FDC361E81514DC1373FFAB9A221D30EC384196F_StaticFields*)il2cpp_codegen_static_fields_for(Input_t2FDC361E81514DC1373FFAB9A221D30EC384196F_il2cpp_TypeInfo_var))->___wandAvailabilityErroredOnce_4 = (bool)0;
		// currentWandStates = new Dictionary<ControllerIndex, T5_ControllerState?>() {
		//     { ControllerIndex.Primary, null },
		//     { ControllerIndex.Secondary, null }
		// };
		Dictionary_2_t712A771C31CF6D9FCEB1DFE940B80E92561D4B72* L_1 = (Dictionary_2_t712A771C31CF6D9FCEB1DFE940B80E92561D4B72*)il2cpp_codegen_object_new(Dictionary_2_t712A771C31CF6D9FCEB1DFE940B80E92561D4B72_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Dictionary_2__ctor_m1100551CF31C395EAC94FC2EB66B23DE592FE22B(L_1, Dictionary_2__ctor_m1100551CF31C395EAC94FC2EB66B23DE592FE22B_RuntimeMethod_var);
		Dictionary_2_t712A771C31CF6D9FCEB1DFE940B80E92561D4B72* L_2 = L_1;
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_t7013E79AE56020A242FB9373ACCDF6CF43EF9689));
		Nullable_1_t7013E79AE56020A242FB9373ACCDF6CF43EF9689 L_3 = V_0;
		NullCheck(L_2);
		Dictionary_2_Add_m8518B24FEE8ACCA5ED99DC2739AB8910DF6F03CA(L_2, 0, L_3, Dictionary_2_Add_m8518B24FEE8ACCA5ED99DC2739AB8910DF6F03CA_RuntimeMethod_var);
		Dictionary_2_t712A771C31CF6D9FCEB1DFE940B80E92561D4B72* L_4 = L_2;
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_t7013E79AE56020A242FB9373ACCDF6CF43EF9689));
		Nullable_1_t7013E79AE56020A242FB9373ACCDF6CF43EF9689 L_5 = V_0;
		NullCheck(L_4);
		Dictionary_2_Add_m8518B24FEE8ACCA5ED99DC2739AB8910DF6F03CA(L_4, 1, L_5, Dictionary_2_Add_m8518B24FEE8ACCA5ED99DC2739AB8910DF6F03CA_RuntimeMethod_var);
		((Input_t2FDC361E81514DC1373FFAB9A221D30EC384196F_StaticFields*)il2cpp_codegen_static_fields_for(Input_t2FDC361E81514DC1373FFAB9A221D30EC384196F_il2cpp_TypeInfo_var))->___currentWandStates_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((Input_t2FDC361E81514DC1373FFAB9A221D30EC384196F_StaticFields*)il2cpp_codegen_static_fields_for(Input_t2FDC361E81514DC1373FFAB9A221D30EC384196F_il2cpp_TypeInfo_var))->___currentWandStates_0), (void*)L_4);
		// previousWandStates = new Dictionary<ControllerIndex, T5_ControllerState?>(){
		//     { ControllerIndex.Primary, null },
		//     { ControllerIndex.Secondary, null }
		// };
		Dictionary_2_t712A771C31CF6D9FCEB1DFE940B80E92561D4B72* L_6 = (Dictionary_2_t712A771C31CF6D9FCEB1DFE940B80E92561D4B72*)il2cpp_codegen_object_new(Dictionary_2_t712A771C31CF6D9FCEB1DFE940B80E92561D4B72_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Dictionary_2__ctor_m1100551CF31C395EAC94FC2EB66B23DE592FE22B(L_6, Dictionary_2__ctor_m1100551CF31C395EAC94FC2EB66B23DE592FE22B_RuntimeMethod_var);
		Dictionary_2_t712A771C31CF6D9FCEB1DFE940B80E92561D4B72* L_7 = L_6;
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_t7013E79AE56020A242FB9373ACCDF6CF43EF9689));
		Nullable_1_t7013E79AE56020A242FB9373ACCDF6CF43EF9689 L_8 = V_0;
		NullCheck(L_7);
		Dictionary_2_Add_m8518B24FEE8ACCA5ED99DC2739AB8910DF6F03CA(L_7, 0, L_8, Dictionary_2_Add_m8518B24FEE8ACCA5ED99DC2739AB8910DF6F03CA_RuntimeMethod_var);
		Dictionary_2_t712A771C31CF6D9FCEB1DFE940B80E92561D4B72* L_9 = L_7;
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_t7013E79AE56020A242FB9373ACCDF6CF43EF9689));
		Nullable_1_t7013E79AE56020A242FB9373ACCDF6CF43EF9689 L_10 = V_0;
		NullCheck(L_9);
		Dictionary_2_Add_m8518B24FEE8ACCA5ED99DC2739AB8910DF6F03CA(L_9, 1, L_10, Dictionary_2_Add_m8518B24FEE8ACCA5ED99DC2739AB8910DF6F03CA_RuntimeMethod_var);
		((Input_t2FDC361E81514DC1373FFAB9A221D30EC384196F_StaticFields*)il2cpp_codegen_static_fields_for(Input_t2FDC361E81514DC1373FFAB9A221D30EC384196F_il2cpp_TypeInfo_var))->___previousWandStates_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((Input_t2FDC361E81514DC1373FFAB9A221D30EC384196F_StaticFields*)il2cpp_codegen_static_fields_for(Input_t2FDC361E81514DC1373FFAB9A221D30EC384196F_il2cpp_TypeInfo_var))->___previousWandStates_1), (void*)L_9);
		// TryScanForWands();
		bool L_11;
		L_11 = Input_TryScanForWands_m1CAAA24DAF359B560A291D4A0104255A15AE2859(NULL);
		// }
		return;
	}
}
// System.Void TiltFive.Input::GetLatestWandControlsStates()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Input_GetLatestWandControlsStates_m2C1B4E928D17AFCE8223401FF6B9723A5E1375E3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m45AE0B58438FBC8BF43097E744A0B84C82A84329_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m1E56B7FF4881232D23CF4C7F52EAEA306D8963BE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Input_t2FDC361E81514DC1373FFAB9A221D30EC384196F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t7013E79AE56020A242FB9373ACCDF6CF43EF9689 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Nullable_1_t7013E79AE56020A242FB9373ACCDF6CF43EF9689 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Nullable_1_t7013E79AE56020A242FB9373ACCDF6CF43EF9689 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t G_B2_0 = 0;
	Dictionary_2_t712A771C31CF6D9FCEB1DFE940B80E92561D4B72* G_B2_1 = NULL;
	int32_t G_B1_0 = 0;
	Dictionary_2_t712A771C31CF6D9FCEB1DFE940B80E92561D4B72* G_B1_1 = NULL;
	Nullable_1_t7013E79AE56020A242FB9373ACCDF6CF43EF9689 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	int32_t G_B3_1 = 0;
	Dictionary_2_t712A771C31CF6D9FCEB1DFE940B80E92561D4B72* G_B3_2 = NULL;
	int32_t G_B5_0 = 0;
	Dictionary_2_t712A771C31CF6D9FCEB1DFE940B80E92561D4B72* G_B5_1 = NULL;
	int32_t G_B4_0 = 0;
	Dictionary_2_t712A771C31CF6D9FCEB1DFE940B80E92561D4B72* G_B4_1 = NULL;
	Nullable_1_t7013E79AE56020A242FB9373ACCDF6CF43EF9689 G_B6_0;
	memset((&G_B6_0), 0, sizeof(G_B6_0));
	int32_t G_B6_1 = 0;
	Dictionary_2_t712A771C31CF6D9FCEB1DFE940B80E92561D4B72* G_B6_2 = NULL;
	{
		// previousWandStates[ControllerIndex.Primary] = currentWandStates[ControllerIndex.Primary];
		il2cpp_codegen_runtime_class_init_inline(Input_t2FDC361E81514DC1373FFAB9A221D30EC384196F_il2cpp_TypeInfo_var);
		Dictionary_2_t712A771C31CF6D9FCEB1DFE940B80E92561D4B72* L_0 = ((Input_t2FDC361E81514DC1373FFAB9A221D30EC384196F_StaticFields*)il2cpp_codegen_static_fields_for(Input_t2FDC361E81514DC1373FFAB9A221D30EC384196F_il2cpp_TypeInfo_var))->___previousWandStates_1;
		Dictionary_2_t712A771C31CF6D9FCEB1DFE940B80E92561D4B72* L_1 = ((Input_t2FDC361E81514DC1373FFAB9A221D30EC384196F_StaticFields*)il2cpp_codegen_static_fields_for(Input_t2FDC361E81514DC1373FFAB9A221D30EC384196F_il2cpp_TypeInfo_var))->___currentWandStates_0;
		NullCheck(L_1);
		Nullable_1_t7013E79AE56020A242FB9373ACCDF6CF43EF9689 L_2;
		L_2 = Dictionary_2_get_Item_m45AE0B58438FBC8BF43097E744A0B84C82A84329(L_1, 0, Dictionary_2_get_Item_m45AE0B58438FBC8BF43097E744A0B84C82A84329_RuntimeMethod_var);
		NullCheck(L_0);
		Dictionary_2_set_Item_m1E56B7FF4881232D23CF4C7F52EAEA306D8963BE(L_0, 0, L_2, Dictionary_2_set_Item_m1E56B7FF4881232D23CF4C7F52EAEA306D8963BE_RuntimeMethod_var);
		// previousWandStates[ControllerIndex.Secondary] = currentWandStates[ControllerIndex.Secondary];
		Dictionary_2_t712A771C31CF6D9FCEB1DFE940B80E92561D4B72* L_3 = ((Input_t2FDC361E81514DC1373FFAB9A221D30EC384196F_StaticFields*)il2cpp_codegen_static_fields_for(Input_t2FDC361E81514DC1373FFAB9A221D30EC384196F_il2cpp_TypeInfo_var))->___previousWandStates_1;
		Dictionary_2_t712A771C31CF6D9FCEB1DFE940B80E92561D4B72* L_4 = ((Input_t2FDC361E81514DC1373FFAB9A221D30EC384196F_StaticFields*)il2cpp_codegen_static_fields_for(Input_t2FDC361E81514DC1373FFAB9A221D30EC384196F_il2cpp_TypeInfo_var))->___currentWandStates_0;
		NullCheck(L_4);
		Nullable_1_t7013E79AE56020A242FB9373ACCDF6CF43EF9689 L_5;
		L_5 = Dictionary_2_get_Item_m45AE0B58438FBC8BF43097E744A0B84C82A84329(L_4, 1, Dictionary_2_get_Item_m45AE0B58438FBC8BF43097E744A0B84C82A84329_RuntimeMethod_var);
		NullCheck(L_3);
		Dictionary_2_set_Item_m1E56B7FF4881232D23CF4C7F52EAEA306D8963BE(L_3, 1, L_5, Dictionary_2_set_Item_m1E56B7FF4881232D23CF4C7F52EAEA306D8963BE_RuntimeMethod_var);
		// currentWandStates[ControllerIndex.Primary] = (TryGetWandControlsState(out var primaryWandControlsState, ControllerIndex.Primary))
		//     ? primaryWandControlsState
		//     : null;
		Dictionary_2_t712A771C31CF6D9FCEB1DFE940B80E92561D4B72* L_6 = ((Input_t2FDC361E81514DC1373FFAB9A221D30EC384196F_StaticFields*)il2cpp_codegen_static_fields_for(Input_t2FDC361E81514DC1373FFAB9A221D30EC384196F_il2cpp_TypeInfo_var))->___currentWandStates_0;
		bool L_7;
		L_7 = Input_TryGetWandControlsState_m9C77A323C23D3FBBB0BC02A00F94EBD372B7D097((&V_0), 0, NULL);
		G_B1_0 = 0;
		G_B1_1 = L_6;
		if (L_7)
		{
			G_B2_0 = 0;
			G_B2_1 = L_6;
			goto IL_0047;
		}
	}
	{
		il2cpp_codegen_initobj((&V_2), sizeof(Nullable_1_t7013E79AE56020A242FB9373ACCDF6CF43EF9689));
		Nullable_1_t7013E79AE56020A242FB9373ACCDF6CF43EF9689 L_8 = V_2;
		G_B3_0 = L_8;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_0048;
	}

IL_0047:
	{
		Nullable_1_t7013E79AE56020A242FB9373ACCDF6CF43EF9689 L_9 = V_0;
		G_B3_0 = L_9;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_0048:
	{
		NullCheck(G_B3_2);
		Dictionary_2_set_Item_m1E56B7FF4881232D23CF4C7F52EAEA306D8963BE(G_B3_2, G_B3_1, G_B3_0, Dictionary_2_set_Item_m1E56B7FF4881232D23CF4C7F52EAEA306D8963BE_RuntimeMethod_var);
		// currentWandStates[ControllerIndex.Secondary] = (TryGetWandControlsState(out var secondaryWandControlsState, ControllerIndex.Secondary))
		//     ? secondaryWandControlsState
		//     : null;
		il2cpp_codegen_runtime_class_init_inline(Input_t2FDC361E81514DC1373FFAB9A221D30EC384196F_il2cpp_TypeInfo_var);
		Dictionary_2_t712A771C31CF6D9FCEB1DFE940B80E92561D4B72* L_10 = ((Input_t2FDC361E81514DC1373FFAB9A221D30EC384196F_StaticFields*)il2cpp_codegen_static_fields_for(Input_t2FDC361E81514DC1373FFAB9A221D30EC384196F_il2cpp_TypeInfo_var))->___currentWandStates_0;
		bool L_11;
		L_11 = Input_TryGetWandControlsState_m9C77A323C23D3FBBB0BC02A00F94EBD372B7D097((&V_1), 1, NULL);
		G_B4_0 = 1;
		G_B4_1 = L_10;
		if (L_11)
		{
			G_B5_0 = 1;
			G_B5_1 = L_10;
			goto IL_0068;
		}
	}
	{
		il2cpp_codegen_initobj((&V_2), sizeof(Nullable_1_t7013E79AE56020A242FB9373ACCDF6CF43EF9689));
		Nullable_1_t7013E79AE56020A242FB9373ACCDF6CF43EF9689 L_12 = V_2;
		G_B6_0 = L_12;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		goto IL_0069;
	}

IL_0068:
	{
		Nullable_1_t7013E79AE56020A242FB9373ACCDF6CF43EF9689 L_13 = V_1;
		G_B6_0 = L_13;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
	}

IL_0069:
	{
		NullCheck(G_B6_2);
		Dictionary_2_set_Item_m1E56B7FF4881232D23CF4C7F52EAEA306D8963BE(G_B6_2, G_B6_1, G_B6_0, Dictionary_2_set_Item_m1E56B7FF4881232D23CF4C7F52EAEA306D8963BE_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Boolean TiltFive.Input::TryScanForWands()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_TryScanForWands_m1CAAA24DAF359B560A291D4A0104255A15AE2859 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Input_t2FDC361E81514DC1373FFAB9A221D30EC384196F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_0;
	memset((&V_0), 0, sizeof(V_0));
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// var currentTime = System.DateTime.Now;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0;
		L_0 = DateTime_get_Now_mC336498972C48439ADCD5C50D35FAE0F2A48B0F0(NULL);
		V_0 = L_0;
		// var timeSinceLastScan = currentTime - lastScanAttempt;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Input_t2FDC361E81514DC1373FFAB9A221D30EC384196F_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_2 = ((Input_t2FDC361E81514DC1373FFAB9A221D30EC384196F_StaticFields*)il2cpp_codegen_static_fields_for(Input_t2FDC361E81514DC1373FFAB9A221D30EC384196F_il2cpp_TypeInfo_var))->___lastScanAttempt_2;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_3;
		L_3 = DateTime_op_Subtraction_m41335EF0E6DCD52B23C64916CB973A0B4A9E0387(L_1, L_2, NULL);
		V_1 = L_3;
		// if (timeSinceLastScan.TotalSeconds >= wandScanRate
		//     && (!GetWandAvailability(ControllerIndex.Primary) || !GetWandAvailability(ControllerIndex.Secondary)))
		double L_4;
		L_4 = TimeSpan_get_TotalSeconds_mED686E7CECE6A76A7DC38518698B9199DB8CDEA8((&V_1), NULL);
		double L_5 = ((Input_t2FDC361E81514DC1373FFAB9A221D30EC384196F_StaticFields*)il2cpp_codegen_static_fields_for(Input_t2FDC361E81514DC1373FFAB9A221D30EC384196F_il2cpp_TypeInfo_var))->___wandScanRate_3;
		if ((!(((double)L_4) >= ((double)L_5))))
		{
			goto IL_0056;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Input_t2FDC361E81514DC1373FFAB9A221D30EC384196F_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Input_GetWandAvailability_m430211A3E807CAECEA64949CFFC26FF401903E2C(0, NULL);
		if (!L_6)
		{
			goto IL_0030;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Input_t2FDC361E81514DC1373FFAB9A221D30EC384196F_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Input_GetWandAvailability_m430211A3E807CAECEA64949CFFC26FF401903E2C(1, NULL);
		if (L_7)
		{
			goto IL_0056;
		}
	}

IL_0030:
	{
		// int result = 1;
		V_2 = 1;
	}
	try
	{// begin try (depth: 1)
		// result = NativePlugin.ScanForWands();
		int32_t L_8;
		L_8 = NativePlugin_ScanForWands_m7D49A1836CDB78703BE632D55330707A46DA6ABE(NULL);
		V_2 = L_8;
		// }
		goto IL_004b;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003a;
		}
		throw e;
	}

CATCH_003a:
	{// begin catch(System.Exception)
		// Log.Error(e.Message);
		NullCheck(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)));
		String_t* L_9;
		L_9 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10;
		L_10 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var)));
		Log_Error_mFAEE822C890E48138381AB6D607FA252E0245A00(L_9, L_10, NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004b;
	}// end catch (depth: 1)

IL_004b:
	{
		// lastScanAttempt = currentTime;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_11 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Input_t2FDC361E81514DC1373FFAB9A221D30EC384196F_il2cpp_TypeInfo_var);
		((Input_t2FDC361E81514DC1373FFAB9A221D30EC384196F_StaticFields*)il2cpp_codegen_static_fields_for(Input_t2FDC361E81514DC1373FFAB9A221D30EC384196F_il2cpp_TypeInfo_var))->___lastScanAttempt_2 = L_11;
		// return (0 == result);
		int32_t L_12 = V_2;
		return (bool)((((int32_t)L_12) == ((int32_t)0))? 1 : 0);
	}

IL_0056:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean TiltFive.Input::GetButton(TiltFive.T5_ControllerState,TiltFive.Input/WandButton)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButton_mDBCF313FDE4E38C372336D542C55ED086A829A20 (T5_ControllerState_tD10E39B6E4C8C80529DBDED7EEFF83BA49090A21 ___controllerState0, uint32_t ___button1, const RuntimeMethod* method) 
{
	Buttons_tBFA5588AD4479B77161E5B2BEFEF859D11E36748 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var buttonsState = controllerState.ButtonsState;
		T5_ControllerState_tD10E39B6E4C8C80529DBDED7EEFF83BA49090A21 L_0 = ___controllerState0;
		Buttons_tBFA5588AD4479B77161E5B2BEFEF859D11E36748 L_1 = L_0.___ButtonsState_8;
		V_0 = L_1;
		uint32_t L_2 = ___button1;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)16)))))
		{
			goto IL_002f;
		}
	}
	{
		uint32_t L_3 = ___button1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_3, 1)))
		{
			case 0:
			{
				goto IL_0043;
			}
			case 1:
			{
				goto IL_004b;
			}
			case 2:
			{
				goto IL_0083;
			}
			case 3:
			{
				goto IL_0053;
			}
		}
	}
	{
		uint32_t L_4 = ___button1;
		if ((((int32_t)L_4) == ((int32_t)8)))
		{
			goto IL_005b;
		}
	}
	{
		uint32_t L_5 = ___button1;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)16))))
		{
			goto IL_0063;
		}
	}
	{
		goto IL_0083;
	}

IL_002f:
	{
		uint32_t L_6 = ___button1;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)32))))
		{
			goto IL_006b;
		}
	}
	{
		uint32_t L_7 = ___button1;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)64))))
		{
			goto IL_0073;
		}
	}
	{
		uint32_t L_8 = ___button1;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)128))))
		{
			goto IL_007b;
		}
	}
	{
		goto IL_0083;
	}

IL_0043:
	{
		// return buttonsState.T5;
		bool L_9;
		L_9 = Buttons_get_T5_m146554F5CC69BD392FEEFF63FFA09C2A820C2763((&V_0), NULL);
		return L_9;
	}

IL_004b:
	{
		// return buttonsState.One;
		bool L_10;
		L_10 = Buttons_get_One_m074636D0E2502F843BD7F198D77CF3B40D782DA1((&V_0), NULL);
		return L_10;
	}

IL_0053:
	{
		// return buttonsState.Two;
		bool L_11;
		L_11 = Buttons_get_Two_m8E482CD870E54A472F3904C7D20D3B919ACABEDD((&V_0), NULL);
		return L_11;
	}

IL_005b:
	{
		// return buttonsState.Y;
		bool L_12;
		L_12 = Buttons_get_Y_m5445F758C149078E23E4B8C763918E38BF59EDFD((&V_0), NULL);
		return L_12;
	}

IL_0063:
	{
		// return buttonsState.B;
		bool L_13;
		L_13 = Buttons_get_B_mE0B8CEB0826B33EFB23DBA77E5E220A73D74C821((&V_0), NULL);
		return L_13;
	}

IL_006b:
	{
		// return buttonsState.A;
		bool L_14;
		L_14 = Buttons_get_A_m50F4EE5CB87DC581C1839E7671A93BBD49BE642C((&V_0), NULL);
		return L_14;
	}

IL_0073:
	{
		// return buttonsState.X;
		bool L_15;
		L_15 = Buttons_get_X_m75D291E586845E478C1AB757E2625EC70F9519B7((&V_0), NULL);
		return L_15;
	}

IL_007b:
	{
		// return buttonsState.Three;
		bool L_16;
		L_16 = Buttons_get_Three_mD3105B15693685E5AD2467EA1A0F44581F0D1786((&V_0), NULL);
		return L_16;
	}

IL_0083:
	{
		// throw new ArgumentException("Invalid WandButton argument - enum value does not exist");
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_17 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_17);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral018EC27FEC47BA287961DCB976351429EC4FED4F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Input_GetButton_mDBCF313FDE4E38C372336D542C55ED086A829A20_RuntimeMethod_var)));
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
// System.Void TiltFive.WandSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WandSettings__ctor_mE6C27938B43E4AEC1213D7F100912684984FF983 (WandSettings_tAEC07302A7835A2A4C192445D2D1D50A475D4943* __this, const RuntimeMethod* method) 
{
	{
		TrackableSettings__ctor_m9E0CFBD28D8DB8596672D96C4EC1FE5BB0638ECF(__this, NULL);
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
// System.Void TiltFive.Wand::Update(TiltFive.WandSettings,TiltFive.ScaleSettings,TiltFive.GameBoardSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Wand_Update_mFA599D9401F355E5E87E3ABCA5D5AF9F6DC864BF (WandSettings_tAEC07302A7835A2A4C192445D2D1D50A475D4943* ___wandSettings0, ScaleSettings_t4FE94D7555EF25D5286239492DE97AF448542507* ___scaleSettings1, GameBoardSettings_tA53FDF5FE8B4D937F945DB659EF5A76243634A4B* ___gameBoardSettings2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mC7FE2DEBB72F2749A78EA2B28E8D21F421C5302F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_m123D4EAD1A25C400E8337AEAFBAB63676B29B4D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_t55A4B7261A7AC4E8FA2802D1CD1FA23367C9E6FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instance.wandCores[wandSettings.controllerIndex].Update(wandSettings, scaleSettings, gameBoardSettings);
		il2cpp_codegen_runtime_class_init_inline(Singleton_1_t55A4B7261A7AC4E8FA2802D1CD1FA23367C9E6FC_il2cpp_TypeInfo_var);
		Wand_tA59B1FCC3DF9DDBE82B76BEC4F04349B7D7A6181* L_0;
		L_0 = Singleton_1_get_Instance_m123D4EAD1A25C400E8337AEAFBAB63676B29B4D9_inline(Singleton_1_get_Instance_m123D4EAD1A25C400E8337AEAFBAB63676B29B4D9_RuntimeMethod_var);
		NullCheck(L_0);
		Dictionary_2_t6F5AAA1CE39CE9B00E8C4497198DD367212507EC* L_1 = L_0->___wandCores_1;
		WandSettings_tAEC07302A7835A2A4C192445D2D1D50A475D4943* L_2 = ___wandSettings0;
		NullCheck(L_2);
		int32_t L_3 = L_2->___controllerIndex_2;
		NullCheck(L_1);
		WandCore_t92366109545D7851AA67CBCA8E5C23CFAD26BBAE* L_4;
		L_4 = Dictionary_2_get_Item_mC7FE2DEBB72F2749A78EA2B28E8D21F421C5302F(L_1, L_3, Dictionary_2_get_Item_mC7FE2DEBB72F2749A78EA2B28E8D21F421C5302F_RuntimeMethod_var);
		WandSettings_tAEC07302A7835A2A4C192445D2D1D50A475D4943* L_5 = ___wandSettings0;
		ScaleSettings_t4FE94D7555EF25D5286239492DE97AF448542507* L_6 = ___scaleSettings1;
		GameBoardSettings_tA53FDF5FE8B4D937F945DB659EF5A76243634A4B* L_7 = ___gameBoardSettings2;
		NullCheck(L_4);
		VirtualActionInvoker3< WandSettings_tAEC07302A7835A2A4C192445D2D1D50A475D4943*, ScaleSettings_t4FE94D7555EF25D5286239492DE97AF448542507*, GameBoardSettings_tA53FDF5FE8B4D937F945DB659EF5A76243634A4B* >::Invoke(9 /* System.Void TiltFive.Wand/WandCore::Update(TiltFive.WandSettings,TiltFive.ScaleSettings,TiltFive.GameBoardSettings) */, L_4, L_5, L_6, L_7);
		// }
		return;
	}
}
// UnityEngine.Vector3 TiltFive.Wand::GetPosition(TiltFive.ControllerIndex,TiltFive.ControllerPosition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Wand_GetPosition_m1EC126417939FE458271555EE4FC60FB8E95259C (int32_t ___controllerIndex0, int32_t ___controllerPosition1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mC7FE2DEBB72F2749A78EA2B28E8D21F421C5302F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_m123D4EAD1A25C400E8337AEAFBAB63676B29B4D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_t55A4B7261A7AC4E8FA2802D1CD1FA23367C9E6FC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackableCore_1_get_Pose_UnityWorldSpace_mD92CC0E6FA6EF36E6F1087628479CD38C33942D7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___controllerPosition1;
		switch (L_0)
		{
			case 0:
			{
				goto IL_004a;
			}
			case 1:
			{
				goto IL_0014;
			}
			case 2:
			{
				goto IL_002f;
			}
		}
	}
	{
		goto IL_0065;
	}

IL_0014:
	{
		// return Instance.wandCores[controllerIndex].fingertipsPose_UnityWorldSpace.position;
		il2cpp_codegen_runtime_class_init_inline(Singleton_1_t55A4B7261A7AC4E8FA2802D1CD1FA23367C9E6FC_il2cpp_TypeInfo_var);
		Wand_tA59B1FCC3DF9DDBE82B76BEC4F04349B7D7A6181* L_1;
		L_1 = Singleton_1_get_Instance_m123D4EAD1A25C400E8337AEAFBAB63676B29B4D9_inline(Singleton_1_get_Instance_m123D4EAD1A25C400E8337AEAFBAB63676B29B4D9_RuntimeMethod_var);
		NullCheck(L_1);
		Dictionary_2_t6F5AAA1CE39CE9B00E8C4497198DD367212507EC* L_2 = L_1->___wandCores_1;
		int32_t L_3 = ___controllerIndex0;
		NullCheck(L_2);
		WandCore_t92366109545D7851AA67CBCA8E5C23CFAD26BBAE* L_4;
		L_4 = Dictionary_2_get_Item_mC7FE2DEBB72F2749A78EA2B28E8D21F421C5302F(L_2, L_3, Dictionary_2_get_Item_mC7FE2DEBB72F2749A78EA2B28E8D21F421C5302F_RuntimeMethod_var);
		NullCheck(L_4);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_5 = (&L_4->___fingertipsPose_UnityWorldSpace_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = L_5->___position_0;
		return L_6;
	}

IL_002f:
	{
		// return Instance.wandCores[controllerIndex].aimPose_UnityWorldSpace.position;
		il2cpp_codegen_runtime_class_init_inline(Singleton_1_t55A4B7261A7AC4E8FA2802D1CD1FA23367C9E6FC_il2cpp_TypeInfo_var);
		Wand_tA59B1FCC3DF9DDBE82B76BEC4F04349B7D7A6181* L_7;
		L_7 = Singleton_1_get_Instance_m123D4EAD1A25C400E8337AEAFBAB63676B29B4D9_inline(Singleton_1_get_Instance_m123D4EAD1A25C400E8337AEAFBAB63676B29B4D9_RuntimeMethod_var);
		NullCheck(L_7);
		Dictionary_2_t6F5AAA1CE39CE9B00E8C4497198DD367212507EC* L_8 = L_7->___wandCores_1;
		int32_t L_9 = ___controllerIndex0;
		NullCheck(L_8);
		WandCore_t92366109545D7851AA67CBCA8E5C23CFAD26BBAE* L_10;
		L_10 = Dictionary_2_get_Item_mC7FE2DEBB72F2749A78EA2B28E8D21F421C5302F(L_8, L_9, Dictionary_2_get_Item_mC7FE2DEBB72F2749A78EA2B28E8D21F421C5302F_RuntimeMethod_var);
		NullCheck(L_10);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_11 = (&L_10->___aimPose_UnityWorldSpace_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = L_11->___position_0;
		return L_12;
	}

IL_004a:
	{
		// return Instance.wandCores[controllerIndex].Pose_UnityWorldSpace.position;
		il2cpp_codegen_runtime_class_init_inline(Singleton_1_t55A4B7261A7AC4E8FA2802D1CD1FA23367C9E6FC_il2cpp_TypeInfo_var);
		Wand_tA59B1FCC3DF9DDBE82B76BEC4F04349B7D7A6181* L_13;
		L_13 = Singleton_1_get_Instance_m123D4EAD1A25C400E8337AEAFBAB63676B29B4D9_inline(Singleton_1_get_Instance_m123D4EAD1A25C400E8337AEAFBAB63676B29B4D9_RuntimeMethod_var);
		NullCheck(L_13);
		Dictionary_2_t6F5AAA1CE39CE9B00E8C4497198DD367212507EC* L_14 = L_13->___wandCores_1;
		int32_t L_15 = ___controllerIndex0;
		NullCheck(L_14);
		WandCore_t92366109545D7851AA67CBCA8E5C23CFAD26BBAE* L_16;
		L_16 = Dictionary_2_get_Item_mC7FE2DEBB72F2749A78EA2B28E8D21F421C5302F(L_14, L_15, Dictionary_2_get_Item_mC7FE2DEBB72F2749A78EA2B28E8D21F421C5302F_RuntimeMethod_var);
		NullCheck(L_16);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_17;
		L_17 = TrackableCore_1_get_Pose_UnityWorldSpace_mD92CC0E6FA6EF36E6F1087628479CD38C33942D7_inline(L_16, TrackableCore_1_get_Pose_UnityWorldSpace_mD92CC0E6FA6EF36E6F1087628479CD38C33942D7_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = L_17.___position_0;
		return L_18;
	}

IL_0065:
	{
		// throw new ArgumentException();
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_19 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_19);
		ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3(L_19, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Wand_GetPosition_m1EC126417939FE458271555EE4FC60FB8E95259C_RuntimeMethod_var)));
	}
}
// UnityEngine.Quaternion TiltFive.Wand::GetRotation(TiltFive.ControllerIndex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Wand_GetRotation_m5023B6AD993242332F56B74B8AF8B9FE2F159702 (int32_t ___controllerIndex0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mC7FE2DEBB72F2749A78EA2B28E8D21F421C5302F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_m123D4EAD1A25C400E8337AEAFBAB63676B29B4D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_t55A4B7261A7AC4E8FA2802D1CD1FA23367C9E6FC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackableCore_1_get_Pose_UnityWorldSpace_mD92CC0E6FA6EF36E6F1087628479CD38C33942D7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Instance.wandCores[controllerIndex].Pose_UnityWorldSpace.rotation;
		il2cpp_codegen_runtime_class_init_inline(Singleton_1_t55A4B7261A7AC4E8FA2802D1CD1FA23367C9E6FC_il2cpp_TypeInfo_var);
		Wand_tA59B1FCC3DF9DDBE82B76BEC4F04349B7D7A6181* L_0;
		L_0 = Singleton_1_get_Instance_m123D4EAD1A25C400E8337AEAFBAB63676B29B4D9_inline(Singleton_1_get_Instance_m123D4EAD1A25C400E8337AEAFBAB63676B29B4D9_RuntimeMethod_var);
		NullCheck(L_0);
		Dictionary_2_t6F5AAA1CE39CE9B00E8C4497198DD367212507EC* L_1 = L_0->___wandCores_1;
		int32_t L_2 = ___controllerIndex0;
		NullCheck(L_1);
		WandCore_t92366109545D7851AA67CBCA8E5C23CFAD26BBAE* L_3;
		L_3 = Dictionary_2_get_Item_mC7FE2DEBB72F2749A78EA2B28E8D21F421C5302F(L_1, L_2, Dictionary_2_get_Item_mC7FE2DEBB72F2749A78EA2B28E8D21F421C5302F_RuntimeMethod_var);
		NullCheck(L_3);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_4;
		L_4 = TrackableCore_1_get_Pose_UnityWorldSpace_mD92CC0E6FA6EF36E6F1087628479CD38C33942D7_inline(L_3, TrackableCore_1_get_Pose_UnityWorldSpace_mD92CC0E6FA6EF36E6F1087628479CD38C33942D7_RuntimeMethod_var);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5 = L_4.___rotation_1;
		return L_5;
	}
}
// System.Boolean TiltFive.Wand::IsTracked(TiltFive.ControllerIndex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Wand_IsTracked_m36673DF6D0222C2A88018F0AE05AB00AE6936FAD (int32_t ___controllerIndex0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mC7FE2DEBB72F2749A78EA2B28E8D21F421C5302F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_m123D4EAD1A25C400E8337AEAFBAB63676B29B4D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_t55A4B7261A7AC4E8FA2802D1CD1FA23367C9E6FC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackableCore_1_get_IsTracked_mA6069D3D185FA857B6CADE8899EBAE7C113D7ED1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Instance.wandCores[controllerIndex].IsTracked;
		il2cpp_codegen_runtime_class_init_inline(Singleton_1_t55A4B7261A7AC4E8FA2802D1CD1FA23367C9E6FC_il2cpp_TypeInfo_var);
		Wand_tA59B1FCC3DF9DDBE82B76BEC4F04349B7D7A6181* L_0;
		L_0 = Singleton_1_get_Instance_m123D4EAD1A25C400E8337AEAFBAB63676B29B4D9_inline(Singleton_1_get_Instance_m123D4EAD1A25C400E8337AEAFBAB63676B29B4D9_RuntimeMethod_var);
		NullCheck(L_0);
		Dictionary_2_t6F5AAA1CE39CE9B00E8C4497198DD367212507EC* L_1 = L_0->___wandCores_1;
		int32_t L_2 = ___controllerIndex0;
		NullCheck(L_1);
		WandCore_t92366109545D7851AA67CBCA8E5C23CFAD26BBAE* L_3;
		L_3 = Dictionary_2_get_Item_mC7FE2DEBB72F2749A78EA2B28E8D21F421C5302F(L_1, L_2, Dictionary_2_get_Item_mC7FE2DEBB72F2749A78EA2B28E8D21F421C5302F_RuntimeMethod_var);
		NullCheck(L_3);
		bool L_4;
		L_4 = TrackableCore_1_get_IsTracked_mA6069D3D185FA857B6CADE8899EBAE7C113D7ED1_inline(L_3, TrackableCore_1_get_IsTracked_mA6069D3D185FA857B6CADE8899EBAE7C113D7ED1_RuntimeMethod_var);
		return L_4;
	}
}
// System.Void TiltFive.Wand::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Wand__ctor_m03007376F5BFBE0B9577E6149E562ABA782C05BA (Wand_tA59B1FCC3DF9DDBE82B76BEC4F04349B7D7A6181* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mC0232544CC6F82B505259E98EF554BF9C7F0A6CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m11945670DE9399DA01ECB21448267C8135B624C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t6F5AAA1CE39CE9B00E8C4497198DD367212507EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1__ctor_m67F961255CDBF2D59797C2ADE4AD9DE43ED949A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_t55A4B7261A7AC4E8FA2802D1CD1FA23367C9E6FC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WandCore_t92366109545D7851AA67CBCA8E5C23CFAD26BBAE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//         private Dictionary<ControllerIndex, WandCore> wandCores = new Dictionary<ControllerIndex, WandCore>()
		//         {
		// #if UNITY_2019_1_OR_NEWER && INPUTSYSTEM_AVAILABLE
		//             { ControllerIndex.Primary, new WandDeviceCore() },
		//             { ControllerIndex.Secondary, new WandDeviceCore() }
		// #else
		//             { ControllerIndex.Primary, new WandCore() },
		//             { ControllerIndex.Secondary, new WandCore() }
		// #endif
		//         };
		Dictionary_2_t6F5AAA1CE39CE9B00E8C4497198DD367212507EC* L_0 = (Dictionary_2_t6F5AAA1CE39CE9B00E8C4497198DD367212507EC*)il2cpp_codegen_object_new(Dictionary_2_t6F5AAA1CE39CE9B00E8C4497198DD367212507EC_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m11945670DE9399DA01ECB21448267C8135B624C4(L_0, Dictionary_2__ctor_m11945670DE9399DA01ECB21448267C8135B624C4_RuntimeMethod_var);
		Dictionary_2_t6F5AAA1CE39CE9B00E8C4497198DD367212507EC* L_1 = L_0;
		WandCore_t92366109545D7851AA67CBCA8E5C23CFAD26BBAE* L_2 = (WandCore_t92366109545D7851AA67CBCA8E5C23CFAD26BBAE*)il2cpp_codegen_object_new(WandCore_t92366109545D7851AA67CBCA8E5C23CFAD26BBAE_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		WandCore__ctor_mD30E699C85EC00A28FAFBDEE575BDAB37072059B(L_2, NULL);
		NullCheck(L_1);
		Dictionary_2_Add_mC0232544CC6F82B505259E98EF554BF9C7F0A6CF(L_1, 0, L_2, Dictionary_2_Add_mC0232544CC6F82B505259E98EF554BF9C7F0A6CF_RuntimeMethod_var);
		Dictionary_2_t6F5AAA1CE39CE9B00E8C4497198DD367212507EC* L_3 = L_1;
		WandCore_t92366109545D7851AA67CBCA8E5C23CFAD26BBAE* L_4 = (WandCore_t92366109545D7851AA67CBCA8E5C23CFAD26BBAE*)il2cpp_codegen_object_new(WandCore_t92366109545D7851AA67CBCA8E5C23CFAD26BBAE_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WandCore__ctor_mD30E699C85EC00A28FAFBDEE575BDAB37072059B(L_4, NULL);
		NullCheck(L_3);
		Dictionary_2_Add_mC0232544CC6F82B505259E98EF554BF9C7F0A6CF(L_3, 1, L_4, Dictionary_2_Add_mC0232544CC6F82B505259E98EF554BF9C7F0A6CF_RuntimeMethod_var);
		__this->___wandCores_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___wandCores_1), (void*)L_3);
		il2cpp_codegen_runtime_class_init_inline(Singleton_1_t55A4B7261A7AC4E8FA2802D1CD1FA23367C9E6FC_il2cpp_TypeInfo_var);
		Singleton_1__ctor_m67F961255CDBF2D59797C2ADE4AD9DE43ED949A0(__this, Singleton_1__ctor_m67F961255CDBF2D59797C2ADE4AD9DE43ED949A0_RuntimeMethod_var);
		return;
	}
}
// System.Void TiltFive.Wand::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Wand__cctor_m595194B1580289FF97BC7FB08903B4768E536BCD (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Wand_tA59B1FCC3DF9DDBE82B76BEC4F04349B7D7A6181_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly Vector3 DEFAULT_WAND_POSITION_GAME_BOARD_SPACE = new Vector3(0f, 0.25f, -0.25f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_0), (0.0f), (0.25f), (-0.25f), /*hidden argument*/NULL);
		((Wand_tA59B1FCC3DF9DDBE82B76BEC4F04349B7D7A6181_StaticFields*)il2cpp_codegen_static_fields_for(Wand_tA59B1FCC3DF9DDBE82B76BEC4F04349B7D7A6181_il2cpp_TypeInfo_var))->___DEFAULT_WAND_POSITION_GAME_BOARD_SPACE_2 = L_0;
		// private static readonly Vector3 DEFAULT_WAND_HANDEDNESS_OFFSET_GAME_BOARD_SPACE = new Vector3(0.125f, 0f, 0f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_1), (0.125f), (0.0f), (0.0f), /*hidden argument*/NULL);
		((Wand_tA59B1FCC3DF9DDBE82B76BEC4F04349B7D7A6181_StaticFields*)il2cpp_codegen_static_fields_for(Wand_tA59B1FCC3DF9DDBE82B76BEC4F04349B7D7A6181_il2cpp_TypeInfo_var))->___DEFAULT_WAND_HANDEDNESS_OFFSET_GAME_BOARD_SPACE_3 = L_1;
		// private static readonly Quaternion DEFAULT_WAND_ROTATION_GAME_BOARD_SPACE = Quaternion.Euler(new Vector3(-33f, 0f, 0f));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_2), (-33.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Quaternion_Euler_m66E346161C9778DF8486DB4FE823D8F81A54AF1D_inline(L_2, NULL);
		((Wand_tA59B1FCC3DF9DDBE82B76BEC4F04349B7D7A6181_StaticFields*)il2cpp_codegen_static_fields_for(Wand_tA59B1FCC3DF9DDBE82B76BEC4F04349B7D7A6181_il2cpp_TypeInfo_var))->___DEFAULT_WAND_ROTATION_GAME_BOARD_SPACE_4 = L_3;
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
// UnityEngine.Pose TiltFive.Wand/WandCore::get_gripPose_UnityWorldSpace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 WandCore_get_gripPose_UnityWorldSpace_m6DEFF461EAE68CB278905D5F0BCEE89DB862602E (WandCore_t92366109545D7851AA67CBCA8E5C23CFAD26BBAE* __this, const RuntimeMethod* method) 
{
	{
		// public Pose gripPose_UnityWorldSpace => pose_UnityWorldSpace;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = ((TrackableCore_1_t00F88F47236F7B1A13DD70AE3A5EFA818AF1485D*)__this)->___pose_UnityWorldSpace_1;
		return L_0;
	}
}
// System.Void TiltFive.Wand/WandCore::Reset(TiltFive.WandSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WandCore_Reset_m149F898CDFB2B0A52A8AA1534EF4810912463307 (WandCore_t92366109545D7851AA67CBCA8E5C23CFAD26BBAE* __this, WandSettings_tAEC07302A7835A2A4C192445D2D1D50A475D4943* ___wandSettings0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackableCore_1_Reset_m38A67A200967927078AAC8CBEA3652634F975133_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Reset(wandSettings);
		WandSettings_tAEC07302A7835A2A4C192445D2D1D50A475D4943* L_0 = ___wandSettings0;
		TrackableCore_1_Reset_m38A67A200967927078AAC8CBEA3652634F975133(__this, L_0, TrackableCore_1_Reset_m38A67A200967927078AAC8CBEA3652634F975133_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void TiltFive.Wand/WandCore::Update(TiltFive.WandSettings,TiltFive.ScaleSettings,TiltFive.GameBoardSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WandCore_Update_m0E24C93BFDE03C54CF4E42578259907C04649E96 (WandCore_t92366109545D7851AA67CBCA8E5C23CFAD26BBAE* __this, WandSettings_tAEC07302A7835A2A4C192445D2D1D50A475D4943* ___wandSettings0, ScaleSettings_t4FE94D7555EF25D5286239492DE97AF448542507* ___scaleSettings1, GameBoardSettings_tA53FDF5FE8B4D937F945DB659EF5A76243634A4B* ___gameBoardSettings2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackableCore_1_Update_m62BF42BF834BDDEC883B1FAB332A091D2CF49C4E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3552BE1904A0D1828E3C5647A03809F8F9AC6BB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (wandSettings == null)
		WandSettings_tAEC07302A7835A2A4C192445D2D1D50A475D4943* L_0 = ___wandSettings0;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// Log.Error("WandSettings configuration required for Wand tracking updates.");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		Log_Error_mFAEE822C890E48138381AB6D607FA252E0245A00(_stringLiteralA3552BE1904A0D1828E3C5647A03809F8F9AC6BB, L_1, NULL);
		// return;
		return;
	}

IL_0013:
	{
		// base.Update(wandSettings, scaleSettings, gameBoardSettings);
		WandSettings_tAEC07302A7835A2A4C192445D2D1D50A475D4943* L_2 = ___wandSettings0;
		ScaleSettings_t4FE94D7555EF25D5286239492DE97AF448542507* L_3 = ___scaleSettings1;
		GameBoardSettings_tA53FDF5FE8B4D937F945DB659EF5A76243634A4B* L_4 = ___gameBoardSettings2;
		TrackableCore_1_Update_m62BF42BF834BDDEC883B1FAB332A091D2CF49C4E(__this, L_2, L_3, L_4, TrackableCore_1_Update_m62BF42BF834BDDEC883B1FAB332A091D2CF49C4E_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void TiltFive.Wand/WandCore::SetDefaultPoseGameboardSpace(TiltFive.WandSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WandCore_SetDefaultPoseGameboardSpace_mB33D5C2ACF5E39D25475F99FFE707ABB3D75797D (WandCore_t92366109545D7851AA67CBCA8E5C23CFAD26BBAE* __this, WandSettings_tAEC07302A7835A2A4C192445D2D1D50A475D4943* ___settings0, const RuntimeMethod* method) 
{
	{
		// pose_GameboardSpace = GetDefaultPoseGameboardSpace(settings);
		WandSettings_tAEC07302A7835A2A4C192445D2D1D50A475D4943* L_0 = ___settings0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_1;
		L_1 = WandCore_GetDefaultPoseGameboardSpace_m68364CA7121F6062986CAC98C97B9C794B917B43(L_0, NULL);
		((TrackableCore_1_t00F88F47236F7B1A13DD70AE3A5EFA818AF1485D*)__this)->___pose_GameboardSpace_0 = L_1;
		// fingertipsPose_GameboardSpace = pose_GameboardSpace;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_2 = ((TrackableCore_1_t00F88F47236F7B1A13DD70AE3A5EFA818AF1485D*)__this)->___pose_GameboardSpace_0;
		__this->___fingertipsPose_GameboardSpace_4 = L_2;
		// aimPose_GameboardSpace = pose_GameboardSpace;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_3 = ((TrackableCore_1_t00F88F47236F7B1A13DD70AE3A5EFA818AF1485D*)__this)->___pose_GameboardSpace_0;
		__this->___aimPose_GameboardSpace_5 = L_3;
		// }
		return;
	}
}
// UnityEngine.Pose TiltFive.Wand/WandCore::GetDefaultPoseGameboardSpace(TiltFive.WandSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 WandCore_GetDefaultPoseGameboardSpace_m68364CA7121F6062986CAC98C97B9C794B917B43 (WandSettings_tAEC07302A7835A2A4C192445D2D1D50A475D4943* ___settings0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Wand_tA59B1FCC3DF9DDBE82B76BEC4F04349B7D7A6181_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B2_1;
	memset((&G_B2_1), 0, sizeof(G_B2_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B1_1;
	memset((&G_B1_1), 0, sizeof(G_B1_1));
	float G_B3_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B3_1;
	memset((&G_B3_1), 0, sizeof(G_B3_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B3_2;
	memset((&G_B3_2), 0, sizeof(G_B3_2));
	{
		// Vector3 defaultPosition = DEFAULT_WAND_POSITION_GAME_BOARD_SPACE;
		il2cpp_codegen_runtime_class_init_inline(Wand_tA59B1FCC3DF9DDBE82B76BEC4F04349B7D7A6181_il2cpp_TypeInfo_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Wand_tA59B1FCC3DF9DDBE82B76BEC4F04349B7D7A6181_StaticFields*)il2cpp_codegen_static_fields_for(Wand_tA59B1FCC3DF9DDBE82B76BEC4F04349B7D7A6181_il2cpp_TypeInfo_var))->___DEFAULT_WAND_POSITION_GAME_BOARD_SPACE_2;
		// defaultPosition += DEFAULT_WAND_HANDEDNESS_OFFSET_GAME_BOARD_SPACE
		//     * (settings.controllerIndex == ControllerIndex.Primary ? 1f : -1f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ((Wand_tA59B1FCC3DF9DDBE82B76BEC4F04349B7D7A6181_StaticFields*)il2cpp_codegen_static_fields_for(Wand_tA59B1FCC3DF9DDBE82B76BEC4F04349B7D7A6181_il2cpp_TypeInfo_var))->___DEFAULT_WAND_HANDEDNESS_OFFSET_GAME_BOARD_SPACE_3;
		WandSettings_tAEC07302A7835A2A4C192445D2D1D50A475D4943* L_2 = ___settings0;
		NullCheck(L_2);
		int32_t L_3 = L_2->___controllerIndex_2;
		G_B1_0 = L_1;
		G_B1_1 = L_0;
		if (!L_3)
		{
			G_B2_0 = L_1;
			G_B2_1 = L_0;
			goto IL_0019;
		}
	}
	{
		G_B3_0 = (-1.0f);
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_001e;
	}

IL_0019:
	{
		G_B3_0 = (1.0f);
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(G_B3_1, G_B3_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(G_B3_2, L_4, NULL);
		// return new Pose(defaultPosition, DEFAULT_WAND_ROTATION_GAME_BOARD_SPACE);
		il2cpp_codegen_runtime_class_init_inline(Wand_tA59B1FCC3DF9DDBE82B76BEC4F04349B7D7A6181_il2cpp_TypeInfo_var);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ((Wand_tA59B1FCC3DF9DDBE82B76BEC4F04349B7D7A6181_StaticFields*)il2cpp_codegen_static_fields_for(Wand_tA59B1FCC3DF9DDBE82B76BEC4F04349B7D7A6181_il2cpp_TypeInfo_var))->___DEFAULT_WAND_ROTATION_GAME_BOARD_SPACE_4;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Pose__ctor_m15CA45808A2BBF1956E836D22C387FAB80BED051((&L_7), L_5, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Void TiltFive.Wand/WandCore::SetPoseUnityWorldSpace(TiltFive.ScaleSettings,TiltFive.GameBoardSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WandCore_SetPoseUnityWorldSpace_mAE6F414398E3B3862DAE8D5934099069D6BB8D1F (WandCore_t92366109545D7851AA67CBCA8E5C23CFAD26BBAE* __this, ScaleSettings_t4FE94D7555EF25D5286239492DE97AF448542507* ___scaleSettings0, GameBoardSettings_tA53FDF5FE8B4D937F945DB659EF5A76243634A4B* ___gameBoardSettings1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackableCore_1_GameboardToWorldSpace_mFA695D168D9DA297C9A86DF0EEAE7380F786AA39_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// pose_UnityWorldSpace = GameboardToWorldSpace(pose_GameboardSpace, scaleSettings, gameBoardSettings);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = ((TrackableCore_1_t00F88F47236F7B1A13DD70AE3A5EFA818AF1485D*)__this)->___pose_GameboardSpace_0;
		ScaleSettings_t4FE94D7555EF25D5286239492DE97AF448542507* L_1 = ___scaleSettings0;
		GameBoardSettings_tA53FDF5FE8B4D937F945DB659EF5A76243634A4B* L_2 = ___gameBoardSettings1;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_3;
		L_3 = TrackableCore_1_GameboardToWorldSpace_mFA695D168D9DA297C9A86DF0EEAE7380F786AA39(L_0, L_1, L_2, TrackableCore_1_GameboardToWorldSpace_mFA695D168D9DA297C9A86DF0EEAE7380F786AA39_RuntimeMethod_var);
		((TrackableCore_1_t00F88F47236F7B1A13DD70AE3A5EFA818AF1485D*)__this)->___pose_UnityWorldSpace_1 = L_3;
		// fingertipsPose_UnityWorldSpace = GameboardToWorldSpace(fingertipsPose_GameboardSpace, scaleSettings, gameBoardSettings);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_4 = __this->___fingertipsPose_GameboardSpace_4;
		ScaleSettings_t4FE94D7555EF25D5286239492DE97AF448542507* L_5 = ___scaleSettings0;
		GameBoardSettings_tA53FDF5FE8B4D937F945DB659EF5A76243634A4B* L_6 = ___gameBoardSettings1;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_7;
		L_7 = TrackableCore_1_GameboardToWorldSpace_mFA695D168D9DA297C9A86DF0EEAE7380F786AA39(L_4, L_5, L_6, TrackableCore_1_GameboardToWorldSpace_mFA695D168D9DA297C9A86DF0EEAE7380F786AA39_RuntimeMethod_var);
		__this->___fingertipsPose_UnityWorldSpace_6 = L_7;
		// aimPose_UnityWorldSpace = GameboardToWorldSpace(aimPose_GameboardSpace, scaleSettings, gameBoardSettings);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_8 = __this->___aimPose_GameboardSpace_5;
		ScaleSettings_t4FE94D7555EF25D5286239492DE97AF448542507* L_9 = ___scaleSettings0;
		GameBoardSettings_tA53FDF5FE8B4D937F945DB659EF5A76243634A4B* L_10 = ___gameBoardSettings1;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_11;
		L_11 = TrackableCore_1_GameboardToWorldSpace_mFA695D168D9DA297C9A86DF0EEAE7380F786AA39(L_8, L_9, L_10, TrackableCore_1_GameboardToWorldSpace_mFA695D168D9DA297C9A86DF0EEAE7380F786AA39_RuntimeMethod_var);
		__this->___aimPose_UnityWorldSpace_7 = L_11;
		// }
		return;
	}
}
// System.Boolean TiltFive.Wand/WandCore::GetTrackingAvailability(TiltFive.WandSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WandCore_GetTrackingAvailability_m6DCF52ADBD65CBB23BB1010DB4750C87F81A2656 (WandCore_t92366109545D7851AA67CBCA8E5C23CFAD26BBAE* __this, WandSettings_tAEC07302A7835A2A4C192445D2D1D50A475D4943* ___settings0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Input_t2FDC361E81514DC1373FFAB9A221D30EC384196F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// return Display.GetGlassesAvailability()
		//     && GameBoard.TryGetGameboardType(out var gameboardType)
		//     && gameboardType != GameboardType.GameboardType_None
		//     && Input.GetWandAvailability(settings.controllerIndex);
		bool L_0;
		L_0 = Display_GetGlassesAvailability_mF1BF8B7E8413884C603712A158F02A30D2B797C2(NULL);
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		bool L_1;
		L_1 = GameBoard_TryGetGameboardType_mA2A79BB241A7360D92A1C10BCDE2A6A4AA95B28E((&V_0), NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0020;
		}
	}
	{
		WandSettings_tAEC07302A7835A2A4C192445D2D1D50A475D4943* L_3 = ___settings0;
		NullCheck(L_3);
		int32_t L_4 = L_3->___controllerIndex_2;
		il2cpp_codegen_runtime_class_init_inline(Input_t2FDC361E81514DC1373FFAB9A221D30EC384196F_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Input_GetWandAvailability_m430211A3E807CAECEA64949CFFC26FF401903E2C(L_4, NULL);
		return L_5;
	}

IL_0020:
	{
		return (bool)0;
	}
}
// System.Boolean TiltFive.Wand/WandCore::TryGetPoseFromPlugin(UnityEngine.Pose&,TiltFive.WandSettings,TiltFive.ScaleSettings,TiltFive.GameBoardSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WandCore_TryGetPoseFromPlugin_m1FC98CE5B99C4CD03124ADA8DA693117CEFDB254 (WandCore_t92366109545D7851AA67CBCA8E5C23CFAD26BBAE* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___gripPose_GameboardSpace0, WandSettings_tAEC07302A7835A2A4C192445D2D1D50A475D4943* ___wandSettings1, ScaleSettings_t4FE94D7555EF25D5286239492DE97AF448542507* ___scaleSettings2, GameBoardSettings_tA53FDF5FE8B4D937F945DB659EF5A76243634A4B* ___gameBoardSettings3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Input_t2FDC361E81514DC1373FFAB9A221D30EC384196F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mE14E838E2815B81468C16E74C64756D7C8EBEB7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackableCore_1_ConvertPosGBDToUGBD_m6F4FC8884C4A4CE180BE705E8B7B3044D828F5FF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t7013E79AE56020A242FB9373ACCDF6CF43EF9689 V_0;
	memset((&V_0), 0, sizeof(V_0));
	T5_ControllerState_tD10E39B6E4C8C80529DBDED7EEFF83BA49090A21 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	{
		// if (!Input.TryGetWandControlsState(out var controllerStateResult, wandSettings.controllerIndex))
		WandSettings_tAEC07302A7835A2A4C192445D2D1D50A475D4943* L_0 = ___wandSettings1;
		NullCheck(L_0);
		int32_t L_1 = L_0->___controllerIndex_2;
		il2cpp_codegen_runtime_class_init_inline(Input_t2FDC361E81514DC1373FFAB9A221D30EC384196F_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Input_TryGetWandControlsState_m9C77A323C23D3FBBB0BC02A00F94EBD372B7D097((&V_0), L_1, NULL);
		if (L_2)
		{
			goto IL_0044;
		}
	}
	{
		// isTracked = false;
		((TrackableCore_1_t00F88F47236F7B1A13DD70AE3A5EFA818AF1485D*)__this)->___isTracked_2 = (bool)0;
		// switch (wandSettings.FailureMode)
		WandSettings_tAEC07302A7835A2A4C192445D2D1D50A475D4943* L_3 = ___wandSettings1;
		NullCheck(L_3);
		int32_t L_4 = ((TrackableSettings_t54076219B6A408E0FCC2EED6DAC35984CC69EC4F*)L_3)->___FailureMode_1;
		V_6 = L_4;
		int32_t L_5 = V_6;
		if ((!(((uint32_t)L_5) > ((uint32_t)1))))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_6 = V_6;
		if ((((int32_t)L_6) == ((int32_t)2)))
		{
			goto IL_0036;
		}
	}

IL_0028:
	{
		// gripPose_GameboardSpace = pose_GameboardSpace;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_7 = ___gripPose_GameboardSpace0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_8 = ((TrackableCore_1_t00F88F47236F7B1A13DD70AE3A5EFA818AF1485D*)__this)->___pose_GameboardSpace_0;
		*(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*)L_7 = L_8;
		// break;
		goto IL_0042;
	}

IL_0036:
	{
		// gripPose_GameboardSpace = GetDefaultPoseGameboardSpace(wandSettings);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_9 = ___gripPose_GameboardSpace0;
		WandSettings_tAEC07302A7835A2A4C192445D2D1D50A475D4943* L_10 = ___wandSettings1;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_11;
		L_11 = WandCore_GetDefaultPoseGameboardSpace_m68364CA7121F6062986CAC98C97B9C794B917B43(L_10, NULL);
		*(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*)L_9 = L_11;
	}

IL_0042:
	{
		// return false;
		return (bool)0;
	}

IL_0044:
	{
		// var controllerState = controllerStateResult.Value;
		T5_ControllerState_tD10E39B6E4C8C80529DBDED7EEFF83BA49090A21 L_12;
		L_12 = Nullable_1_get_Value_mE14E838E2815B81468C16E74C64756D7C8EBEB7A((&V_0), Nullable_1_get_Value_mE14E838E2815B81468C16E74C64756D7C8EBEB7A_RuntimeMethod_var);
		V_1 = L_12;
		// isTracked = controllerState.PoseValid;
		bool L_13;
		L_13 = T5_ControllerState_get_PoseValid_m29F537A9E53F638D0D1B682DC4934217C03E7F4A((&V_1), NULL);
		((TrackableCore_1_t00F88F47236F7B1A13DD70AE3A5EFA818AF1485D*)__this)->___isTracked_2 = L_13;
		// Vector3 gripPosition_UGBD = ConvertPosGBDToUGBD(controllerState.GripPos_GBD);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = T5_ControllerState_get_GripPos_GBD_m80D6E2A12758F806B7809A9DBC2B3D5B1342CC9C((&V_1), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = TrackableCore_1_ConvertPosGBDToUGBD_m6F4FC8884C4A4CE180BE705E8B7B3044D828F5FF(L_14, TrackableCore_1_ConvertPosGBDToUGBD_m6F4FC8884C4A4CE180BE705E8B7B3044D828F5FF_RuntimeMethod_var);
		V_2 = L_15;
		// Vector3 fingertipsPosition_UGBD = ConvertPosGBDToUGBD(controllerState.FingertipsPos_GBD);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = T5_ControllerState_get_FingertipsPos_GBD_m521B6E9DB0C73FDF8AFF94683F7168F8552FD643((&V_1), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = TrackableCore_1_ConvertPosGBDToUGBD_m6F4FC8884C4A4CE180BE705E8B7B3044D828F5FF(L_16, TrackableCore_1_ConvertPosGBDToUGBD_m6F4FC8884C4A4CE180BE705E8B7B3044D828F5FF_RuntimeMethod_var);
		V_3 = L_17;
		// Vector3 aimPosition_UGBD = ConvertPosGBDToUGBD(controllerState.AimPos_GBD);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = T5_ControllerState_get_AimPos_GBD_m38075D412042D3F337D21288E980C678DF62BB14((&V_1), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = TrackableCore_1_ConvertPosGBDToUGBD_m6F4FC8884C4A4CE180BE705E8B7B3044D828F5FF(L_18, TrackableCore_1_ConvertPosGBDToUGBD_m6F4FC8884C4A4CE180BE705E8B7B3044D828F5FF_RuntimeMethod_var);
		V_4 = L_19;
		// var rotation_UGBD = CalculateRotation(controllerState.RotToWND_GBD);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20;
		L_20 = T5_ControllerState_get_RotToWND_GBD_m129DF9FA8962FF582B6B1580E15196E85C4EBA88((&V_1), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_21;
		L_21 = WandCore_CalculateRotation_m6208589FCD2A211FEA5B7A4F6806E8453D4A07D4(__this, L_20, NULL);
		V_5 = L_21;
		// ProcessTrackingData(gripPosition_UGBD, fingertipsPosition_UGBD, aimPosition_UGBD,
		//     rotation_UGBD, wandSettings, scaleSettings, gameBoardSettings,
		//     out pose_GameboardSpace, out fingertipsPose_GameboardSpace, out aimPose_GameboardSpace,
		//     out pose_UnityWorldSpace, out fingertipsPose_UnityWorldSpace, out aimPose_UnityWorldSpace);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_25 = V_5;
		WandSettings_tAEC07302A7835A2A4C192445D2D1D50A475D4943* L_26 = ___wandSettings1;
		ScaleSettings_t4FE94D7555EF25D5286239492DE97AF448542507* L_27 = ___scaleSettings2;
		GameBoardSettings_tA53FDF5FE8B4D937F945DB659EF5A76243634A4B* L_28 = ___gameBoardSettings3;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_29 = (&((TrackableCore_1_t00F88F47236F7B1A13DD70AE3A5EFA818AF1485D*)__this)->___pose_GameboardSpace_0);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_30 = (&__this->___fingertipsPose_GameboardSpace_4);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_31 = (&__this->___aimPose_GameboardSpace_5);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_32 = (&((TrackableCore_1_t00F88F47236F7B1A13DD70AE3A5EFA818AF1485D*)__this)->___pose_UnityWorldSpace_1);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_33 = (&__this->___fingertipsPose_UnityWorldSpace_6);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_34 = (&__this->___aimPose_UnityWorldSpace_7);
		WandCore_ProcessTrackingData_m7B2C8C71863200C2DBD604ECFC0E959759863FEC(__this, L_22, L_23, L_24, L_25, L_26, L_27, L_28, L_29, L_30, L_31, L_32, L_33, L_34, NULL);
		// gripPose_GameboardSpace = pose_GameboardSpace;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_35 = ___gripPose_GameboardSpace0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_36 = ((TrackableCore_1_t00F88F47236F7B1A13DD70AE3A5EFA818AF1485D*)__this)->___pose_GameboardSpace_0;
		*(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*)L_35 = L_36;
		// return true;
		return (bool)1;
	}
}
// System.Void TiltFive.Wand/WandCore::SetDrivenObjectTransform(TiltFive.WandSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WandCore_SetDrivenObjectTransform_m4507458BE9A9BE173FA6AF5A3934AE9F2E3D8E80 (WandCore_t92366109545D7851AA67CBCA8E5C23CFAD26BBAE* __this, WandSettings_tAEC07302A7835A2A4C192445D2D1D50A475D4943* ___wandSettings0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (GameBoard.TryGetGameboardType(out var gameboardType) && gameboardType == GameboardType.GameboardType_None)
		bool L_0;
		L_0 = GameBoard_TryGetGameboardType_mA2A79BB241A7360D92A1C10BCDE2A6A4AA95B28E((&V_0), NULL);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_1 = V_0;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// if (wandSettings.GripPoint != null)
		WandSettings_tAEC07302A7835A2A4C192445D2D1D50A475D4943* L_2 = ___wandSettings0;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = L_2->___GripPoint_3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0042;
		}
	}
	{
		// wandSettings.GripPoint.transform.SetPositionAndRotation(gripPose_UnityWorldSpace.position, gripPose_UnityWorldSpace.rotation);
		WandSettings_tAEC07302A7835A2A4C192445D2D1D50A475D4943* L_5 = ___wandSettings0;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = L_5->___GripPoint_3;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_8;
		L_8 = WandCore_get_gripPose_UnityWorldSpace_m6DEFF461EAE68CB278905D5F0BCEE89DB862602E_inline(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = L_8.___position_0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_10;
		L_10 = WandCore_get_gripPose_UnityWorldSpace_m6DEFF461EAE68CB278905D5F0BCEE89DB862602E_inline(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11 = L_10.___rotation_1;
		NullCheck(L_7);
		Transform_SetPositionAndRotation_m418859BF59086EEAA084FFD6F258A43FAB408F5A(L_7, L_9, L_11, NULL);
	}

IL_0042:
	{
		// if (wandSettings.FingertipPoint != null)
		WandSettings_tAEC07302A7835A2A4C192445D2D1D50A475D4943* L_12 = ___wandSettings0;
		NullCheck(L_12);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = L_12->___FingertipPoint_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_13, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_14)
		{
			goto IL_0076;
		}
	}
	{
		// wandSettings.FingertipPoint.transform.SetPositionAndRotation(fingertipsPose_UnityWorldSpace.position, fingertipsPose_UnityWorldSpace.rotation);
		WandSettings_tAEC07302A7835A2A4C192445D2D1D50A475D4943* L_15 = ___wandSettings0;
		NullCheck(L_15);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = L_15->___FingertipPoint_4;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_16, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_18 = (&__this->___fingertipsPose_UnityWorldSpace_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = L_18->___position_0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_20 = (&__this->___fingertipsPose_UnityWorldSpace_6);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_21 = L_20->___rotation_1;
		NullCheck(L_17);
		Transform_SetPositionAndRotation_m418859BF59086EEAA084FFD6F258A43FAB408F5A(L_17, L_19, L_21, NULL);
	}

IL_0076:
	{
		// if (wandSettings.AimPoint != null)
		WandSettings_tAEC07302A7835A2A4C192445D2D1D50A475D4943* L_22 = ___wandSettings0;
		NullCheck(L_22);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = L_22->___AimPoint_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_23, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_24)
		{
			goto IL_00aa;
		}
	}
	{
		// wandSettings.AimPoint.transform.SetPositionAndRotation(aimPose_UnityWorldSpace.position, aimPose_UnityWorldSpace.rotation);
		WandSettings_tAEC07302A7835A2A4C192445D2D1D50A475D4943* L_25 = ___wandSettings0;
		NullCheck(L_25);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = L_25->___AimPoint_5;
		NullCheck(L_26);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_26, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_28 = (&__this->___aimPose_UnityWorldSpace_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = L_28->___position_0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_30 = (&__this->___aimPose_UnityWorldSpace_7);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_31 = L_30->___rotation_1;
		NullCheck(L_27);
		Transform_SetPositionAndRotation_m418859BF59086EEAA084FFD6F258A43FAB408F5A(L_27, L_29, L_31, NULL);
	}

IL_00aa:
	{
		// }
		return;
	}
}
// UnityEngine.Quaternion TiltFive.Wand/WandCore::CalculateRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 WandCore_CalculateRotation_m6208589FCD2A211FEA5B7A4F6806E8453D4A07D4 (WandCore_t92366109545D7851AA67CBCA8E5C23CFAD26BBAE* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotToWND_GBD0, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Quaternion rotToDW_GBD = Quaternion.AngleAxis(90f, Vector3.right);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_right_m13B7C3EAA64DC921EC23346C56A5A597B5481FF5_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Quaternion_AngleAxis_m01A869DC10F976FAF493B66F15D6D6977BB61DA8((90.0f), L_0, NULL);
		V_0 = L_1;
		// Quaternion rotToWND_DW = rotToWND_GBD * Quaternion.Inverse(rotToDW_GBD);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___rotToWND_GBD0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = Quaternion_Inverse_m7597DECDAD37194FAC86D1A11DCE3F0C7747F817(L_3, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_2, L_4, NULL);
		V_1 = L_5;
		// Quaternion rotToUGBD_UWND = new Quaternion(-rotToWND_DW.x, rotToWND_DW.y, -rotToWND_DW.z, rotToWND_DW.w);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_1;
		float L_7 = L_6.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = V_1;
		float L_9 = L_8.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = V_1;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = V_1;
		float L_13 = L_12.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_14), ((-L_7)), L_9, ((-L_11)), L_13, /*hidden argument*/NULL);
		// return rotToUGBD_UWND;
		return L_14;
	}
}
// System.Void TiltFive.Wand/WandCore::ProcessTrackingData(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion,TiltFive.WandSettings,TiltFive.ScaleSettings,TiltFive.GameBoardSettings,UnityEngine.Pose&,UnityEngine.Pose&,UnityEngine.Pose&,UnityEngine.Pose&,UnityEngine.Pose&,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WandCore_ProcessTrackingData_m7B2C8C71863200C2DBD604ECFC0E959759863FEC (WandCore_t92366109545D7851AA67CBCA8E5C23CFAD26BBAE* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___gripPosition_UGBD0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___fingertipsPosition_UGBD1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___aimPosition_UGBD2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_UGBD3, WandSettings_tAEC07302A7835A2A4C192445D2D1D50A475D4943* ___wandSettings4, ScaleSettings_t4FE94D7555EF25D5286239492DE97AF448542507* ___scaleSettings5, GameBoardSettings_tA53FDF5FE8B4D937F945DB659EF5A76243634A4B* ___gameBoardSettings6, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___gripPose_UGBD7, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___fingertipsPose_UGBD8, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___aimPose_UGBD9, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___gripPose_UWRLD10, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___fingertipsPose_UWRLD11, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___aimPose_UWRLD12, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackableCore_1_GameboardToWorldSpace_mFA695D168D9DA297C9A86DF0EEAE7380F786AA39_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_5;
	memset((&V_5), 0, sizeof(V_5));
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_9;
	memset((&V_9), 0, sizeof(V_9));
	{
		// var incomingGripPose_UGBD = new Pose(gripPosition_UGBD, rotation_UGBD);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___gripPosition_UGBD0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___rotation_UGBD3;
		Pose__ctor_m15CA45808A2BBF1956E836D22C387FAB80BED051((&V_0), L_0, L_1, NULL);
		// var incomingFingertipsPose_UGBD = new Pose(fingertipsPosition_UGBD, rotation_UGBD);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___fingertipsPosition_UGBD1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = ___rotation_UGBD3;
		Pose__ctor_m15CA45808A2BBF1956E836D22C387FAB80BED051((&V_1), L_2, L_3, NULL);
		// var incomingAimPose_UGBD = new Pose(aimPosition_UGBD, rotation_UGBD);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___aimPosition_UGBD2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5 = ___rotation_UGBD3;
		Pose__ctor_m15CA45808A2BBF1956E836D22C387FAB80BED051((&V_2), L_4, L_5, NULL);
		// var staleGripPose_UGBD = pose_GameboardSpace;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_6 = ((TrackableCore_1_t00F88F47236F7B1A13DD70AE3A5EFA818AF1485D*)__this)->___pose_GameboardSpace_0;
		V_3 = L_6;
		// var staleFingertipsPose_UGBD = fingertipsPose_GameboardSpace;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_7 = __this->___fingertipsPose_GameboardSpace_4;
		V_4 = L_7;
		// var staleAimPose_UGBD = aimPose_GameboardSpace;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_8 = __this->___aimPose_GameboardSpace_5;
		V_5 = L_8;
		// var gripPointOffsetDistance = 0f;
		V_6 = (0.0f);
		// var fingertipsPointOffsetDistance = Mathf.Max((fingertipsPosition_UGBD - gripPosition_UGBD).magnitude,
		//     (staleFingertipsPose_UGBD.position - staleGripPose_UGBD.position).magnitude);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___fingertipsPosition_UGBD1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___gripPosition_UGBD0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_9, L_10, NULL);
		V_9 = L_11;
		float L_12;
		L_12 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_9), NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_13 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = L_13.___position_0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_15 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = L_15.___position_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_14, L_16, NULL);
		V_9 = L_17;
		float L_18;
		L_18 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_9), NULL);
		float L_19;
		L_19 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline(L_12, L_18, NULL);
		V_7 = L_19;
		// var aimPointOffsetDistance = Mathf.Max((aimPosition_UGBD - gripPosition_UGBD).magnitude,
		//     (staleAimPose_UGBD.position - staleGripPose_UGBD.position).magnitude);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___aimPosition_UGBD2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = ___gripPosition_UGBD0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_20, L_21, NULL);
		V_9 = L_22;
		float L_23;
		L_23 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_9), NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_24 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = L_24.___position_0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_26 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = L_26.___position_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_25, L_27, NULL);
		V_9 = L_28;
		float L_29;
		L_29 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_9), NULL);
		float L_30;
		L_30 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline(L_23, L_29, NULL);
		V_8 = L_30;
		// gripPose_UGBD = FilterTrackingPointPose(staleGripPose_UGBD, staleGripPose_UGBD, incomingGripPose_UGBD, gripPointOffsetDistance, wandSettings);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_31 = ___gripPose_UGBD7;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_32 = V_3;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_33 = V_3;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_34 = V_0;
		float L_35 = V_6;
		WandSettings_tAEC07302A7835A2A4C192445D2D1D50A475D4943* L_36 = ___wandSettings4;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_37;
		L_37 = WandCore_FilterTrackingPointPose_mFC051CA61CF9D16DD9A408CF7C7DE03E5BADBFD0(__this, L_32, L_33, L_34, L_35, L_36, NULL);
		*(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*)L_31 = L_37;
		// fingertipsPose_UGBD = FilterTrackingPointPose(staleGripPose_UGBD, staleFingertipsPose_UGBD, incomingFingertipsPose_UGBD, fingertipsPointOffsetDistance, wandSettings);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_38 = ___fingertipsPose_UGBD8;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_39 = V_3;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_40 = V_4;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_41 = V_1;
		float L_42 = V_7;
		WandSettings_tAEC07302A7835A2A4C192445D2D1D50A475D4943* L_43 = ___wandSettings4;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_44;
		L_44 = WandCore_FilterTrackingPointPose_mFC051CA61CF9D16DD9A408CF7C7DE03E5BADBFD0(__this, L_39, L_40, L_41, L_42, L_43, NULL);
		*(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*)L_38 = L_44;
		// aimPose_UGBD = FilterTrackingPointPose(staleGripPose_UGBD, staleAimPose_UGBD, incomingAimPose_UGBD, aimPointOffsetDistance, wandSettings);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_45 = ___aimPose_UGBD9;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_46 = V_3;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_47 = V_5;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_48 = V_2;
		float L_49 = V_8;
		WandSettings_tAEC07302A7835A2A4C192445D2D1D50A475D4943* L_50 = ___wandSettings4;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_51;
		L_51 = WandCore_FilterTrackingPointPose_mFC051CA61CF9D16DD9A408CF7C7DE03E5BADBFD0(__this, L_46, L_47, L_48, L_49, L_50, NULL);
		*(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*)L_45 = L_51;
		// gripPose_UWRLD = GameboardToWorldSpace(gripPose_UGBD, scaleSettings, gameBoardSettings);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_52 = ___gripPose_UWRLD10;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_53 = ___gripPose_UGBD7;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_54 = (*(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*)L_53);
		ScaleSettings_t4FE94D7555EF25D5286239492DE97AF448542507* L_55 = ___scaleSettings5;
		GameBoardSettings_tA53FDF5FE8B4D937F945DB659EF5A76243634A4B* L_56 = ___gameBoardSettings6;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_57;
		L_57 = TrackableCore_1_GameboardToWorldSpace_mFA695D168D9DA297C9A86DF0EEAE7380F786AA39(L_54, L_55, L_56, TrackableCore_1_GameboardToWorldSpace_mFA695D168D9DA297C9A86DF0EEAE7380F786AA39_RuntimeMethod_var);
		*(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*)L_52 = L_57;
		// fingertipsPose_UWRLD = GameboardToWorldSpace(fingertipsPose_UGBD, scaleSettings, gameBoardSettings);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_58 = ___fingertipsPose_UWRLD11;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_59 = ___fingertipsPose_UGBD8;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_60 = (*(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*)L_59);
		ScaleSettings_t4FE94D7555EF25D5286239492DE97AF448542507* L_61 = ___scaleSettings5;
		GameBoardSettings_tA53FDF5FE8B4D937F945DB659EF5A76243634A4B* L_62 = ___gameBoardSettings6;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_63;
		L_63 = TrackableCore_1_GameboardToWorldSpace_mFA695D168D9DA297C9A86DF0EEAE7380F786AA39(L_60, L_61, L_62, TrackableCore_1_GameboardToWorldSpace_mFA695D168D9DA297C9A86DF0EEAE7380F786AA39_RuntimeMethod_var);
		*(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*)L_58 = L_63;
		// aimPose_UWRLD = GameboardToWorldSpace(aimPose_UGBD, scaleSettings, gameBoardSettings);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_64 = ___aimPose_UWRLD12;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_65 = ___aimPose_UGBD9;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_66 = (*(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*)L_65);
		ScaleSettings_t4FE94D7555EF25D5286239492DE97AF448542507* L_67 = ___scaleSettings5;
		GameBoardSettings_tA53FDF5FE8B4D937F945DB659EF5A76243634A4B* L_68 = ___gameBoardSettings6;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_69;
		L_69 = TrackableCore_1_GameboardToWorldSpace_mFA695D168D9DA297C9A86DF0EEAE7380F786AA39(L_66, L_67, L_68, TrackableCore_1_GameboardToWorldSpace_mFA695D168D9DA297C9A86DF0EEAE7380F786AA39_RuntimeMethod_var);
		*(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*)L_64 = L_69;
		// }
		return;
	}
}
// UnityEngine.Pose TiltFive.Wand/WandCore::FilterTrackingPointPose(UnityEngine.Pose,UnityEngine.Pose,UnityEngine.Pose,System.Single,TiltFive.WandSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 WandCore_FilterTrackingPointPose_mFC051CA61CF9D16DD9A408CF7C7DE03E5BADBFD0 (WandCore_t92366109545D7851AA67CBCA8E5C23CFAD26BBAE* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___staleGripPointPose0, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___staleTrackingPointPose1, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___newTrackingPointPose2, float ___trackingPointOffsetDistance3, WandSettings_tAEC07302A7835A2A4C192445D2D1D50A475D4943* ___settings4, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// if (!isTracked && settings.RejectUntrackedPositionData)
		bool L_0 = ((TrackableCore_1_t00F88F47236F7B1A13DD70AE3A5EFA818AF1485D*)__this)->___isTracked_2;
		if (L_0)
		{
			goto IL_0068;
		}
	}
	{
		WandSettings_tAEC07302A7835A2A4C192445D2D1D50A475D4943* L_1 = ___settings4;
		NullCheck(L_1);
		bool L_2 = ((TrackableSettings_t54076219B6A408E0FCC2EED6DAC35984CC69EC4F*)L_1)->___RejectUntrackedPositionData_0;
		if (!L_2)
		{
			goto IL_0068;
		}
	}
	{
		// switch (settings.FailureMode)
		WandSettings_tAEC07302A7835A2A4C192445D2D1D50A475D4943* L_3 = ___settings4;
		NullCheck(L_3);
		int32_t L_4 = ((TrackableSettings_t54076219B6A408E0FCC2EED6DAC35984CC69EC4F*)L_3)->___FailureMode_1;
		V_0 = L_4;
		int32_t L_5 = V_0;
		switch (L_5)
		{
			case 0:
			{
				goto IL_002b;
			}
			case 1:
			{
				goto IL_005e;
			}
			case 2:
			{
				goto IL_0060;
			}
		}
	}

IL_002b:
	{
		// var extrapolatedPosition = staleGripPointPose.position +
		//     Quaternion.Inverse(newTrackingPointPose.rotation) * Vector3.forward * trackingPointOffsetDistance;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_6 = ___staleGripPointPose0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = L_6.___position_0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_8 = ___newTrackingPointPose2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9 = L_8.___rotation_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
		L_10 = Quaternion_Inverse_m7597DECDAD37194FAC86D1A11DCE3F0C7747F817(L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_10, L_11, NULL);
		float L_13 = ___trackingPointOffsetDistance3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_12, L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_7, L_14, NULL);
		// return new Pose(extrapolatedPosition, newTrackingPointPose.rotation);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_16 = ___newTrackingPointPose2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_17 = L_16.___rotation_1;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_18;
		memset((&L_18), 0, sizeof(L_18));
		Pose__ctor_m15CA45808A2BBF1956E836D22C387FAB80BED051((&L_18), L_15, L_17, /*hidden argument*/NULL);
		return L_18;
	}

IL_005e:
	{
		// return staleTrackingPointPose;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_19 = ___staleTrackingPointPose1;
		return L_19;
	}

IL_0060:
	{
		// return GetDefaultPoseGameboardSpace(settings);
		WandSettings_tAEC07302A7835A2A4C192445D2D1D50A475D4943* L_20 = ___settings4;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_21;
		L_21 = WandCore_GetDefaultPoseGameboardSpace_m68364CA7121F6062986CAC98C97B9C794B917B43(L_20, NULL);
		return L_21;
	}

IL_0068:
	{
		// return newTrackingPointPose;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_22 = ___newTrackingPointPose2;
		return L_22;
	}
}
// System.Void TiltFive.Wand/WandCore::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WandCore__ctor_mD30E699C85EC00A28FAFBDEE575BDAB37072059B (WandCore_t92366109545D7851AA67CBCA8E5C23CFAD26BBAE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackableCore_1__ctor_mBDA91E67518070A9EC06CFD53850589270AC3FDC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Wand_tA59B1FCC3DF9DDBE82B76BEC4F04349B7D7A6181_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Pose fingertipsPose_GameboardSpace = new Pose(DEFAULT_WAND_POSITION_GAME_BOARD_SPACE, Quaternion.identity);
		il2cpp_codegen_runtime_class_init_inline(Wand_tA59B1FCC3DF9DDBE82B76BEC4F04349B7D7A6181_il2cpp_TypeInfo_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Wand_tA59B1FCC3DF9DDBE82B76BEC4F04349B7D7A6181_StaticFields*)il2cpp_codegen_static_fields_for(Wand_tA59B1FCC3DF9DDBE82B76BEC4F04349B7D7A6181_il2cpp_TypeInfo_var))->___DEFAULT_WAND_POSITION_GAME_BOARD_SPACE_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Pose__ctor_m15CA45808A2BBF1956E836D22C387FAB80BED051((&L_2), L_0, L_1, /*hidden argument*/NULL);
		__this->___fingertipsPose_GameboardSpace_4 = L_2;
		// public Pose aimPose_GameboardSpace = new Pose(DEFAULT_WAND_POSITION_GAME_BOARD_SPACE, Quaternion.identity);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ((Wand_tA59B1FCC3DF9DDBE82B76BEC4F04349B7D7A6181_StaticFields*)il2cpp_codegen_static_fields_for(Wand_tA59B1FCC3DF9DDBE82B76BEC4F04349B7D7A6181_il2cpp_TypeInfo_var))->___DEFAULT_WAND_POSITION_GAME_BOARD_SPACE_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Pose__ctor_m15CA45808A2BBF1956E836D22C387FAB80BED051((&L_5), L_3, L_4, /*hidden argument*/NULL);
		__this->___aimPose_GameboardSpace_5 = L_5;
		TrackableCore_1__ctor_mBDA91E67518070A9EC06CFD53850589270AC3FDC(__this, TrackableCore_1__ctor_mBDA91E67518070A9EC06CFD53850589270AC3FDC_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m66E346161C9778DF8486DB4FE823D8F81A54AF1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___euler0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_0, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = V_0;
		return L_3;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 WandCore_get_gripPose_UnityWorldSpace_m6DEFF461EAE68CB278905D5F0BCEE89DB862602E_inline (WandCore_t92366109545D7851AA67CBCA8E5C23CFAD26BBAE* __this, const RuntimeMethod* method) 
{
	{
		// public Pose gripPose_UnityWorldSpace => pose_UnityWorldSpace;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = ((TrackableCore_1_t00F88F47236F7B1A13DD70AE3A5EFA818AF1485D*)__this)->___pose_UnityWorldSpace_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_m13B7C3EAA64DC921EC23346C56A5A597B5481FF5_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___rightVector_10;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___lhs0;
		float L_1 = L_0.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___lhs0;
		float L_5 = L_4.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___rhs1;
		float L_7 = L_6.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___lhs0;
		float L_9 = L_8.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___rhs1;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___lhs0;
		float L_13 = L_12.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___rhs1;
		float L_15 = L_14.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = ___lhs0;
		float L_17 = L_16.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = ___rhs1;
		float L_19 = L_18.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20 = ___lhs0;
		float L_21 = L_20.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = ___rhs1;
		float L_23 = L_22.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = ___lhs0;
		float L_25 = L_24.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = ___rhs1;
		float L_27 = L_26.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28 = ___lhs0;
		float L_29 = L_28.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = ___rhs1;
		float L_31 = L_30.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32 = ___lhs0;
		float L_33 = L_32.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34 = ___rhs1;
		float L_35 = L_34.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36 = ___lhs0;
		float L_37 = L_36.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38 = ___rhs1;
		float L_39 = L_38.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40 = ___lhs0;
		float L_41 = L_40.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42 = ___rhs1;
		float L_43 = L_42.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44 = ___lhs0;
		float L_45 = L_44.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_46 = ___rhs1;
		float L_47 = L_46.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48 = ___lhs0;
		float L_49 = L_48.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50 = ___rhs1;
		float L_51 = L_50.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52 = ___lhs0;
		float L_53 = L_52.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54 = ___rhs1;
		float L_55 = L_54.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_56 = ___lhs0;
		float L_57 = L_56.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58 = ___rhs1;
		float L_59 = L_58.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_60 = ___lhs0;
		float L_61 = L_60.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_62 = ___rhs1;
		float L_63 = L_62.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_64;
		memset((&L_64), 0, sizeof(L_64));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_64), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), ((float)il2cpp_codegen_multiply(L_25, L_27)))), ((float)il2cpp_codegen_multiply(L_29, L_31)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_33, L_35)), ((float)il2cpp_codegen_multiply(L_37, L_39)))), ((float)il2cpp_codegen_multiply(L_41, L_43)))), ((float)il2cpp_codegen_multiply(L_45, L_47)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_49, L_51)), ((float)il2cpp_codegen_multiply(L_53, L_55)))), ((float)il2cpp_codegen_multiply(L_57, L_59)))), ((float)il2cpp_codegen_multiply(L_61, L_63)))), /*hidden argument*/NULL);
		V_0 = L_64;
		goto IL_00e5;
	}

IL_00e5:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_65 = V_0;
		return L_65;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		float L_2 = ___z2;
		__this->___z_2 = L_2;
		float L_3 = ___w3;
		__this->___w_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		V_0 = ((float)L_6);
		goto IL_0034;
	}

IL_0034:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mEBAB24D77FC02FC88ED880738C3B1D47C758B3EB_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___forwardVector_11;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m4C7D497E9750AD3B0DEDF822A145D4F62D92ACE4_gshared_inline (Nullable_1_t7013E79AE56020A242FB9373ACCDF6CF43EF9689* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR T5_ControllerState_tD10E39B6E4C8C80529DBDED7EEFF83BA49090A21 Nullable_1_GetValueOrDefault_m90760E7EA080CC253FFD199ADD5A9C40D58FB1D8_gshared_inline (Nullable_1_t7013E79AE56020A242FB9373ACCDF6CF43EF9689* __this, const RuntimeMethod* method) 
{
	{
		T5_ControllerState_tD10E39B6E4C8C80529DBDED7EEFF83BA49090A21 L_0 = (T5_ControllerState_tD10E39B6E4C8C80529DBDED7EEFF83BA49090A21)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mC5F1DBB1421D7BCF66A20F030E7524CFD671B50A_gshared_inline (Nullable_1_tE6438F66263679630B1DEF49F95288C8DBFDCE32* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Joystick_t8285A98B287E3D3C6E96FC7C72A71DA9F75F27CD Nullable_1_GetValueOrDefault_mD426B43DF269A37F9B9D7BA1AEFE0E7B5DD07870_gshared_inline (Nullable_1_tE6438F66263679630B1DEF49F95288C8DBFDCE32* __this, const RuntimeMethod* method) 
{
	{
		Joystick_t8285A98B287E3D3C6E96FC7C72A71DA9F75F27CD L_0 = (Joystick_t8285A98B287E3D3C6E96FC7C72A71DA9F75F27CD)__this->___value_1;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Singleton_1_get_Instance_m91110BDBF294123D1E34990CFD7CEED57AF7965A_gshared_inline (const RuntimeMethod* method) 
{
	{
		// return instance;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		RuntimeObject* L_0 = ((Singleton_1_t2C7FA88F6F88872284F84C5614C7C4AB8FD01D88_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___instance_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 TrackableCore_1_get_Pose_UnityWorldSpace_m77B37E4BFDDF5EB20FECFD11A31D0699E766BC5E_gshared_inline (TrackableCore_1_tE70B1D0A794545485AA44FAD27B46B353AB0CBFA* __this, const RuntimeMethod* method) 
{
	{
		// public Pose Pose_UnityWorldSpace { get => pose_UnityWorldSpace; }
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971)__this->___pose_UnityWorldSpace_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TrackableCore_1_get_IsTracked_mB6A3D7AE9D9FAD1F894AED4BED64B55B9558BFD1_gshared_inline (TrackableCore_1_tE70B1D0A794545485AA44FAD27B46B353AB0CBFA* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsTracked { get => isTracked; }
		bool L_0 = (bool)__this->___isTracked_2;
		return L_0;
	}
}

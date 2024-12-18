#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// TiltFive.NativePlugin
struct NativePlugin_tE76C585D472B55F140F126D9AFD1B42F6ED334BE;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral864B99F55B7761868BAEBF5A582FC35FD1A4FE4B;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t52A7EB3B50C2BC00F5FF4690F19680678EDEC752 
{
};
struct Il2CppArrayBounds;

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_55;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_56;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_57;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_58;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_59;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_60;
};

struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_61;
};

// TiltFive.NativePlugin
struct NativePlugin_tE76C585D472B55F140F126D9AFD1B42F6ED334BE  : public RuntimeObject
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

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
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

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
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

// TiltFive.T5_VCI
struct T5_VCI_t08D9548ED8EF4E70DAC79B1B807C3966238728D2 
{
	// System.Single TiltFive.T5_VCI::StartX_VCI
	float ___StartX_VCI_0;
	// System.Single TiltFive.T5_VCI::StartY_VCI
	float ___StartY_VCI_1;
	// System.Single TiltFive.T5_VCI::Width_VCI
	float ___Width_VCI_2;
	// System.Single TiltFive.T5_VCI::Height_VCI
	float ___Height_VCI_3;
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

// TiltFive.T5_ControllerState/Joystick
struct Joystick_t8285A98B287E3D3C6E96FC7C72A71DA9F75F27CD 
{
	// System.Single TiltFive.T5_ControllerState/Joystick::X
	float ___X_0;
	// System.Single TiltFive.T5_ControllerState/Joystick::Y
	float ___Y_1;
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

// TiltFive.T5_FrameInfo
struct T5_FrameInfo_t7F613E6396304E74C09C56EA80815A7E37AFF041 
{
	// System.IntPtr TiltFive.T5_FrameInfo::LeftTexHandle
	intptr_t ___LeftTexHandle_0;
	// System.IntPtr TiltFive.T5_FrameInfo::RightTexHandle
	intptr_t ___RightTexHandle_1;
	// System.UInt16 TiltFive.T5_FrameInfo::TexWidth_PIX
	uint16_t ___TexWidth_PIX_2;
	// System.UInt16 TiltFive.T5_FrameInfo::TexHeight_PIX
	uint16_t ___TexHeight_PIX_3;
	// TiltFive.T5_Bool TiltFive.T5_FrameInfo::isSrgb
	T5_Bool_t945CAC2B53F54530B6DEDB6BB7E8C04BCB4970EC ___isSrgb_4;
	// TiltFive.T5_Bool TiltFive.T5_FrameInfo::isUpsideDown
	T5_Bool_t945CAC2B53F54530B6DEDB6BB7E8C04BCB4970EC ___isUpsideDown_5;
	// TiltFive.T5_VCI TiltFive.T5_FrameInfo::vci
	T5_VCI_t08D9548ED8EF4E70DAC79B1B807C3966238728D2 ___vci_6;
	// TiltFive.T5_Rotation TiltFive.T5_FrameInfo::rotToLVC_GBD
	T5_Rotation_t7B915578461682541D830D5F9B768E810A69858C ___rotToLVC_GBD_7;
	// TiltFive.T5_Position TiltFive.T5_FrameInfo::posOfLVC_GBD
	T5_Position_t2E1BC0E85C3007B562F87C2A8D0B62CA83D5213D ___posOfLVC_GBD_8;
	// TiltFive.T5_Rotation TiltFive.T5_FrameInfo::rotToRVC_GBD
	T5_Rotation_t7B915578461682541D830D5F9B768E810A69858C ___rotToRVC_GBD_9;
	// TiltFive.T5_Position TiltFive.T5_FrameInfo::posOfRVC_GBD
	T5_Position_t2E1BC0E85C3007B562F87C2A8D0B62CA83D5213D ___posOfRVC_GBD_10;
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

// TiltFive.T5_StringUTF8
struct T5_StringUTF8_t8AC81068B24B238DB0858B6081E88E9C67B549B2 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt32 TiltFive.T5_StringUTF8::maxBufferSize
			uint32_t ___maxBufferSize_0;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 4)
		struct
		{
			uint32_t ___maxBufferSize_0_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___length_1_OffsetPadding[4];
			// System.UInt32 TiltFive.T5_StringUTF8::length
			uint32_t ___length_1;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 4)
		struct
		{
			char ___length_1_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___length_1_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 1)
		struct
		{
			char ___pStringBytesUTF8_2_OffsetPadding[8];
			// System.IntPtr TiltFive.T5_StringUTF8::pStringBytesUTF8
			intptr_t ___pStringBytesUTF8_2;
		};
		#pragma pack(pop, tp)
		#pragma pack(push, tp, 4)
		struct
		{
			char ___pStringBytesUTF8_2_OffsetPadding_forAlignmentOnly[8];
			intptr_t ___pStringBytesUTF8_2_forAlignmentOnly;
		};
		#pragma pack(pop, tp)
	};
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};



// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Byte System.Convert::ToByte(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Convert_ToByte_mF977257DBAD4FAD9FF78232B33DF37121800834D (bool ___value0, const RuntimeMethod* method) ;
// System.Void TiltFive.T5_Bool::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void T5_Bool__ctor_m1659BEEB3AC80CE2B2E6FE4483CE8A03734B99C0 (T5_Bool_t945CAC2B53F54530B6DEDB6BB7E8C04BCB4970EC* __this, bool ___boolean0, const RuntimeMethod* method) ;
// System.Boolean System.Convert::ToBoolean(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Convert_ToBoolean_m15C298BDE61E3537C216A843315CD45862704BBD (uint8_t ___value0, const RuntimeMethod* method) ;
// System.Void TiltFive.T5_Position::.ctor(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void T5_Position__ctor_mA2E282BE682E717C1C839494E07D4C90EC6FC0AB (T5_Position_t2E1BC0E85C3007B562F87C2A8D0B62CA83D5213D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void TiltFive.T5_Rotation::.ctor(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void T5_Rotation__ctor_mBFED4D1F893AB6A655655DF9EF327EDD47DCF3E1 (T5_Rotation_t7B915578461682541D830D5F9B768E810A69858C* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// UnityEngine.Vector3 TiltFive.T5_Position::op_Implicit(TiltFive.T5_Position)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 T5_Position_op_Implicit_m9D5047F3EB48CC3F1FBAEA61D5FBD9AB430559C7 (T5_Position_t2E1BC0E85C3007B562F87C2A8D0B62CA83D5213D ___t5_position0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 TiltFive.T5_GlassesPose::get_PosOfGLS_GBD()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 T5_GlassesPose_get_PosOfGLS_GBD_m723213ADF74954EC92CC2C1A05EDEF6DD1508F45 (T5_GlassesPose_tA745E39C2B88546A6934B1ADA0C2313BBBC5D6C1* __this, const RuntimeMethod* method) ;
// TiltFive.T5_Position TiltFive.T5_Position::op_Implicit(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR T5_Position_t2E1BC0E85C3007B562F87C2A8D0B62CA83D5213D T5_Position_op_Implicit_mEC7EC466D3839205E1F21EF23F9A495654CCC653 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// System.Void TiltFive.T5_GlassesPose::set_PosOfGLS_GBD(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void T5_GlassesPose_set_PosOfGLS_GBD_m252826153571E0BC4E0EAAA6F64601C38B8BCB2A (T5_GlassesPose_tA745E39C2B88546A6934B1ADA0C2313BBBC5D6C1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion TiltFive.T5_Rotation::op_Implicit(TiltFive.T5_Rotation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 T5_Rotation_op_Implicit_m7DD8FE02F35ACE1E8681D867AE8699D7C4E7AB8C (T5_Rotation_t7B915578461682541D830D5F9B768E810A69858C ___t5_rotation0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion TiltFive.T5_GlassesPose::get_RotationToGLS_GBD()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 T5_GlassesPose_get_RotationToGLS_GBD_mF27DCE1A8E9556EC8C81B817F6816F9CCA7C7C9E (T5_GlassesPose_tA745E39C2B88546A6934B1ADA0C2313BBBC5D6C1* __this, const RuntimeMethod* method) ;
// TiltFive.T5_Rotation TiltFive.T5_Rotation::op_Implicit(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR T5_Rotation_t7B915578461682541D830D5F9B768E810A69858C T5_Rotation_op_Implicit_m99D0D734EEE3A5A4AEC85E86B3601E0A3A1CAB7A (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, const RuntimeMethod* method) ;
// System.Void TiltFive.T5_GlassesPose::set_RotationToGLS_GBD(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void T5_GlassesPose_set_RotationToGLS_GBD_mB8FEE83525A29AC81AC854C8850EBAFF3D070379 (T5_GlassesPose_tA745E39C2B88546A6934B1ADA0C2313BBBC5D6C1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Boolean TiltFive.T5_Bool::op_Implicit(TiltFive.T5_Bool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool T5_Bool_op_Implicit_mF773EB75E5E087E34E8A590D27ABCAECDD013C69 (T5_Bool_t945CAC2B53F54530B6DEDB6BB7E8C04BCB4970EC ___t5_boolean0, const RuntimeMethod* method) ;
// System.Boolean TiltFive.T5_ControllerState::get_AnalogValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool T5_ControllerState_get_AnalogValid_m42AF8FC92674401941B55F004C92E17D5CD6583E (T5_ControllerState_tD10E39B6E4C8C80529DBDED7EEFF83BA49090A21* __this, const RuntimeMethod* method) ;
// TiltFive.T5_Bool TiltFive.T5_Bool::op_Implicit(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR T5_Bool_t945CAC2B53F54530B6DEDB6BB7E8C04BCB4970EC T5_Bool_op_Implicit_mD69CA4D7BE80D887A6C1CAA6D4E666EF31C99F7D (bool ___boolean0, const RuntimeMethod* method) ;
// System.Void TiltFive.T5_ControllerState::set_AnalogValid(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void T5_ControllerState_set_AnalogValid_mEB47FDDDB402A2BACECCAC34C5AAE4111FF7B07D (T5_ControllerState_tD10E39B6E4C8C80529DBDED7EEFF83BA49090A21* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean TiltFive.T5_ControllerState::get_BatteryValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool T5_ControllerState_get_BatteryValid_mDAB46DF96334493FBE81DF4A628DB153C01F4161 (T5_ControllerState_tD10E39B6E4C8C80529DBDED7EEFF83BA49090A21* __this, const RuntimeMethod* method) ;
// System.Void TiltFive.T5_ControllerState::set_BatteryValid(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void T5_ControllerState_set_BatteryValid_m8B6C7AE6FF278A040209483FCF949C7FE053E307 (T5_ControllerState_tD10E39B6E4C8C80529DBDED7EEFF83BA49090A21* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean TiltFive.T5_ControllerState::get_ButtonsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool T5_ControllerState_get_ButtonsValid_m0FC62AF506C2232F1168D056CEC1579864E2D2F5 (T5_ControllerState_tD10E39B6E4C8C80529DBDED7EEFF83BA49090A21* __this, const RuntimeMethod* method) ;
// System.Void TiltFive.T5_ControllerState::set_ButtonsValid(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void T5_ControllerState_set_ButtonsValid_m90F82ED0B52D5D6052C9A88FD6110E2E74194D0E (T5_ControllerState_tD10E39B6E4C8C80529DBDED7EEFF83BA49090A21* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean TiltFive.T5_ControllerState::get_PoseValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool T5_ControllerState_get_PoseValid_m29F537A9E53F638D0D1B682DC4934217C03E7F4A (T5_ControllerState_tD10E39B6E4C8C80529DBDED7EEFF83BA49090A21* __this, const RuntimeMethod* method) ;
// System.Void TiltFive.T5_ControllerState::set_PoseValid(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void T5_ControllerState_set_PoseValid_m0D02D25C3E5F14DA824C3AFBF2C160543A6FEBBD (T5_ControllerState_tD10E39B6E4C8C80529DBDED7EEFF83BA49090A21* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion TiltFive.T5_ControllerState::get_RotToWND_GBD()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 T5_ControllerState_get_RotToWND_GBD_m129DF9FA8962FF582B6B1580E15196E85C4EBA88 (T5_ControllerState_tD10E39B6E4C8C80529DBDED7EEFF83BA49090A21* __this, const RuntimeMethod* method) ;
// System.Void TiltFive.T5_ControllerState::set_RotToWND_GBD(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void T5_ControllerState_set_RotToWND_GBD_m3F45BECBE891C98516DF482560FC45D1250CA9A6 (T5_ControllerState_tD10E39B6E4C8C80529DBDED7EEFF83BA49090A21* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 TiltFive.T5_ControllerState::get_AimPos_GBD()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 T5_ControllerState_get_AimPos_GBD_m38075D412042D3F337D21288E980C678DF62BB14 (T5_ControllerState_tD10E39B6E4C8C80529DBDED7EEFF83BA49090A21* __this, const RuntimeMethod* method) ;
// System.Void TiltFive.T5_ControllerState::set_AimPos_GBD(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void T5_ControllerState_set_AimPos_GBD_m292FDD94EF3EA5929E1E934879AA1AFAAE7887B9 (T5_ControllerState_tD10E39B6E4C8C80529DBDED7EEFF83BA49090A21* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 TiltFive.T5_ControllerState::get_FingertipsPos_GBD()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 T5_ControllerState_get_FingertipsPos_GBD_m521B6E9DB0C73FDF8AFF94683F7168F8552FD643 (T5_ControllerState_tD10E39B6E4C8C80529DBDED7EEFF83BA49090A21* __this, const RuntimeMethod* method) ;
// System.Void TiltFive.T5_ControllerState::set_FingertipsPos_GBD(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void T5_ControllerState_set_FingertipsPos_GBD_mB1E737F7C3E267AE2119C5FD3CD5B5BA0FA57702 (T5_ControllerState_tD10E39B6E4C8C80529DBDED7EEFF83BA49090A21* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 TiltFive.T5_ControllerState::get_GripPos_GBD()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 T5_ControllerState_get_GripPos_GBD_m80D6E2A12758F806B7809A9DBC2B3D5B1342CC9C (T5_ControllerState_tD10E39B6E4C8C80529DBDED7EEFF83BA49090A21* __this, const RuntimeMethod* method) ;
// System.Void TiltFive.T5_ControllerState::set_GripPos_GBD(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void T5_ControllerState_set_GripPos_GBD_m9DFEE48755DAFC4364624E4ED2FCAC3A39DE3F7B (T5_ControllerState_tD10E39B6E4C8C80529DBDED7EEFF83BA49090A21* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Boolean TiltFive.T5_ControllerState/Buttons::get_T5()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Buttons_get_T5_m146554F5CC69BD392FEEFF63FFA09C2A820C2763 (Buttons_tBFA5588AD4479B77161E5B2BEFEF859D11E36748* __this, const RuntimeMethod* method) ;
// System.Void TiltFive.T5_ControllerState/Buttons::set_T5(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buttons_set_T5_m02508C3F416813BCF3D798923613BA7B864FA11C (Buttons_tBFA5588AD4479B77161E5B2BEFEF859D11E36748* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean TiltFive.T5_ControllerState/Buttons::get_One()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Buttons_get_One_m074636D0E2502F843BD7F198D77CF3B40D782DA1 (Buttons_tBFA5588AD4479B77161E5B2BEFEF859D11E36748* __this, const RuntimeMethod* method) ;
// System.Void TiltFive.T5_ControllerState/Buttons::set_One(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buttons_set_One_mB2B80EF0F89688CCD87DBABA507842814DBF7294 (Buttons_tBFA5588AD4479B77161E5B2BEFEF859D11E36748* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean TiltFive.T5_ControllerState/Buttons::get_Two()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Buttons_get_Two_m8E482CD870E54A472F3904C7D20D3B919ACABEDD (Buttons_tBFA5588AD4479B77161E5B2BEFEF859D11E36748* __this, const RuntimeMethod* method) ;
// System.Void TiltFive.T5_ControllerState/Buttons::set_Two(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buttons_set_Two_m5FBA1290A74CA6E4D3DACBD5D1EDD05859B3D8C3 (Buttons_tBFA5588AD4479B77161E5B2BEFEF859D11E36748* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean TiltFive.T5_ControllerState/Buttons::get_Three()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Buttons_get_Three_mD3105B15693685E5AD2467EA1A0F44581F0D1786 (Buttons_tBFA5588AD4479B77161E5B2BEFEF859D11E36748* __this, const RuntimeMethod* method) ;
// System.Void TiltFive.T5_ControllerState/Buttons::set_Three(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buttons_set_Three_m9440BF97A9D3C44ECD7F08C98D0786923C69B3DA (Buttons_tBFA5588AD4479B77161E5B2BEFEF859D11E36748* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean TiltFive.T5_ControllerState/Buttons::get_A()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Buttons_get_A_m50F4EE5CB87DC581C1839E7671A93BBD49BE642C (Buttons_tBFA5588AD4479B77161E5B2BEFEF859D11E36748* __this, const RuntimeMethod* method) ;
// System.Void TiltFive.T5_ControllerState/Buttons::set_A(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buttons_set_A_m9794EDD1D9D7453232F6E41B2A3559CF984CF3CB (Buttons_tBFA5588AD4479B77161E5B2BEFEF859D11E36748* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean TiltFive.T5_ControllerState/Buttons::get_B()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Buttons_get_B_mE0B8CEB0826B33EFB23DBA77E5E220A73D74C821 (Buttons_tBFA5588AD4479B77161E5B2BEFEF859D11E36748* __this, const RuntimeMethod* method) ;
// System.Void TiltFive.T5_ControllerState/Buttons::set_B(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buttons_set_B_m20E6FCB7A27893D649BE32CA235D9352C2BE8391 (Buttons_tBFA5588AD4479B77161E5B2BEFEF859D11E36748* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean TiltFive.T5_ControllerState/Buttons::get_X()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Buttons_get_X_m75D291E586845E478C1AB757E2625EC70F9519B7 (Buttons_tBFA5588AD4479B77161E5B2BEFEF859D11E36748* __this, const RuntimeMethod* method) ;
// System.Void TiltFive.T5_ControllerState/Buttons::set_X(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buttons_set_X_m40D7CF419A7C572FEE113E81BF72F3F08765EB85 (Buttons_tBFA5588AD4479B77161E5B2BEFEF859D11E36748* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean TiltFive.T5_ControllerState/Buttons::get_Y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Buttons_get_Y_m5445F758C149078E23E4B8C763918E38BF59EDFD (Buttons_tBFA5588AD4479B77161E5B2BEFEF859D11E36748* __this, const RuntimeMethod* method) ;
// System.Void TiltFive.T5_ControllerState/Buttons::set_Y(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buttons_set_Y_m2FDB03C46CF9DA0A85DF596B80ED845B39B54AC1 (Buttons_tBFA5588AD4479B77161E5B2BEFEF859D11E36748* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean TiltFive.T5_ControllerState/Buttons::get_System()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Buttons_get_System_m39FF6225737382EAE4077805E62A4709C4625E67 (Buttons_tBFA5588AD4479B77161E5B2BEFEF859D11E36748* __this, const RuntimeMethod* method) ;
// System.Boolean TiltFive.T5_ControllerState/Buttons::get_Z()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Buttons_get_Z_m84A5CE0DD01CA3E6BFF2DD6239CE92AE89654FC0 (Buttons_tBFA5588AD4479B77161E5B2BEFEF859D11E36748* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_x()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Void TiltFive.T5_VCI::.ctor(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void T5_VCI__ctor_m31D0DCFF458E77DC862A07787EF4D2E7BFDCA8F0 (T5_VCI_t08D9548ED8EF4E70DAC79B1B807C3966238728D2* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method) ;
// System.Boolean TiltFive.T5_FrameInfo::get_IsSrgb()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool T5_FrameInfo_get_IsSrgb_mD8655B3B4B24E571249C3B5CE510C2FF139FEBEF (T5_FrameInfo_t7F613E6396304E74C09C56EA80815A7E37AFF041* __this, const RuntimeMethod* method) ;
// System.Void TiltFive.T5_FrameInfo::set_IsSrgb(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void T5_FrameInfo_set_IsSrgb_m0AC22AE2E1BAC0215726C614A0B95E17584212D4 (T5_FrameInfo_t7F613E6396304E74C09C56EA80815A7E37AFF041* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean TiltFive.T5_FrameInfo::get_IsUpsideDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool T5_FrameInfo_get_IsUpsideDown_mF121F29CFDE9754770ADF0D5AEFDB9B1C82345CB (T5_FrameInfo_t7F613E6396304E74C09C56EA80815A7E37AFF041* __this, const RuntimeMethod* method) ;
// System.Void TiltFive.T5_FrameInfo::set_IsUpsideDown(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void T5_FrameInfo_set_IsUpsideDown_m1D7053D60340A02DCF04F8AD2A058E2EADF95E4C (T5_FrameInfo_t7F613E6396304E74C09C56EA80815A7E37AFF041* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Rect TiltFive.T5_VCI::op_Implicit(TiltFive.T5_VCI)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D T5_VCI_op_Implicit_mD4E1CCC429289E5449B5FF964BE27D57CCF3C9F2 (T5_VCI_t08D9548ED8EF4E70DAC79B1B807C3966238728D2 ___vci0, const RuntimeMethod* method) ;
// UnityEngine.Rect TiltFive.T5_FrameInfo::get_VCI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D T5_FrameInfo_get_VCI_mDD9F9489122AE32812FE4D0D0560A190BA3D453C (T5_FrameInfo_t7F613E6396304E74C09C56EA80815A7E37AFF041* __this, const RuntimeMethod* method) ;
// TiltFive.T5_VCI TiltFive.T5_VCI::op_Implicit(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR T5_VCI_t08D9548ED8EF4E70DAC79B1B807C3966238728D2 T5_VCI_op_Implicit_m83BA6F202FB7EE346CA7079C3319AA82566175CF (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect0, const RuntimeMethod* method) ;
// System.Void TiltFive.T5_FrameInfo::set_VCI(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void T5_FrameInfo_set_VCI_m3978F2B37AD1A924FBFE49F68336057BDC2B88EE (T5_FrameInfo_t7F613E6396304E74C09C56EA80815A7E37AFF041* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion TiltFive.T5_FrameInfo::get_RotToLVC_GBD()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 T5_FrameInfo_get_RotToLVC_GBD_m061CA46B47616708BC8D83B4D3AFE271512A7F9B (T5_FrameInfo_t7F613E6396304E74C09C56EA80815A7E37AFF041* __this, const RuntimeMethod* method) ;
// System.Void TiltFive.T5_FrameInfo::set_RotToLVC_GBD(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void T5_FrameInfo_set_RotToLVC_GBD_m3A8B1DE49189AC76AC49AA7CED5F6CD6E9F48917 (T5_FrameInfo_t7F613E6396304E74C09C56EA80815A7E37AFF041* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 TiltFive.T5_FrameInfo::get_PosOfLVC_GBD()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 T5_FrameInfo_get_PosOfLVC_GBD_m90B9DE6D86796F8532E1AD78BD363E21E454F74C (T5_FrameInfo_t7F613E6396304E74C09C56EA80815A7E37AFF041* __this, const RuntimeMethod* method) ;
// System.Void TiltFive.T5_FrameInfo::set_PosOfLVC_GBD(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void T5_FrameInfo_set_PosOfLVC_GBD_m4ED417FC1886AEDB37D953AD468C9F80AC977B94 (T5_FrameInfo_t7F613E6396304E74C09C56EA80815A7E37AFF041* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion TiltFive.T5_FrameInfo::get_RotToRVC_GBD()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 T5_FrameInfo_get_RotToRVC_GBD_m14CE41DF049A0C1457F8FDA254F5C0CE8210B185 (T5_FrameInfo_t7F613E6396304E74C09C56EA80815A7E37AFF041* __this, const RuntimeMethod* method) ;
// System.Void TiltFive.T5_FrameInfo::set_RotToRVC_GBD(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void T5_FrameInfo_set_RotToRVC_GBD_m7065C3A18184B4A38892EEE24E3393A88E366904 (T5_FrameInfo_t7F613E6396304E74C09C56EA80815A7E37AFF041* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 TiltFive.T5_FrameInfo::get_PosOfRVC_GBD()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 T5_FrameInfo_get_PosOfRVC_GBD_m0693D3A079658E99910CCA508ADD247D6938C604 (T5_FrameInfo_t7F613E6396304E74C09C56EA80815A7E37AFF041* __this, const RuntimeMethod* method) ;
// System.Void TiltFive.T5_FrameInfo::set_PosOfRVC_GBD(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void T5_FrameInfo_set_PosOfRVC_GBD_m1D2A4A86DC3504535431F299F9253FC24E016371 (T5_FrameInfo_t7F613E6396304E74C09C56EA80815A7E37AFF041* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336 (const RuntimeMethod* method) ;
// System.Int64 System.Math::Min(System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Math_Min_m5721B54E3DBEE8C9FC599B1561D098235B11EE81 (int64_t ___val10, int64_t ___val21, const RuntimeMethod* method) ;
// System.IntPtr System.Runtime.InteropServices.Marshal::AllocHGlobal(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Marshal_AllocHGlobal_m0187620AAB78B85416CE4C948B60B6A76CA84CAC (int32_t ___cb0, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.Byte[],System.Int32,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_Copy_mB1CECEA99856A7296FF33D2C9C51CC7E7150E5F8 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___source0, int32_t ___startIndex1, intptr_t ___destination2, int32_t ___length3, const RuntimeMethod* method) ;
// System.Void TiltFive.T5_StringUTF8::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void T5_StringUTF8__ctor_m82FBE3D8D8F842F5725C28C956DC3B8953D2358E (T5_StringUTF8_t8AC81068B24B238DB0858B6081E88E9C67B549B2* __this, String_t* ___text0, const RuntimeMethod* method) ;
// System.String TiltFive.T5_StringUTF8::ToString(TiltFive.T5_StringUTF8)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* T5_StringUTF8_ToString_m47702A081ED08862D5504B46FFFDC0A26BC0216B (T5_StringUTF8_t8AC81068B24B238DB0858B6081E88E9C67B549B2 ___t5_StringUTF80, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_Copy_m92700C9E60BAB2FDAF6CE02C16EFE9DCB7D6035E (intptr_t ___source0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___destination1, int32_t ___startIndex2, int32_t ___length3, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.Marshal::FreeHGlobal(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_FreeHGlobal_m691596E1E19CB74918F8FF871A05E4BE80748BCC (intptr_t ___hglobal0, const RuntimeMethod* method) ;
// System.Void TiltFive.T5_StringUTF8::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void T5_StringUTF8_Dispose_m453ABFC5D1BAB64547C8D544E5698F634880DB2D (T5_StringUTF8_t8AC81068B24B238DB0858B6081E88E9C67B549B2* __this, const RuntimeMethod* method) ;
// System.Void TiltFive.T5_GameboardSize::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void T5_GameboardSize__ctor_m0D166A8DAEF8997808AA836C31DE4DCF3CEE56E7 (T5_GameboardSize_t9C51DF0242ED80239B303B755A4B5F7AB67B846A* __this, float ___playableSpaceX0, float ___playableSpaceY1, float ___borderWidth2, const RuntimeMethod* method) ;
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_TiltFiveUnity_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL SetApplicationInfo(T5_StringUTF8_t8AC81068B24B238DB0858B6081E88E9C67B549B2, T5_StringUTF8_t8AC81068B24B238DB0858B6081E88E9C67B549B2, T5_StringUTF8_t8AC81068B24B238DB0858B6081E88E9C67B549B2);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_TiltFiveUnity_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GetServiceCompatibility();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_TiltFiveUnity_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL RefreshGlassesAvailable();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_TiltFiveUnity_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GetGlassesFriendlyName(T5_StringUTF8_t8AC81068B24B238DB0858B6081E88E9C67B549B2*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_TiltFiveUnity_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GetGlassesPose(T5_GlassesPose_tA745E39C2B88546A6934B1ADA0C2313BBBC5D6C1*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_TiltFiveUnity_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GetGameboardDimensions(int32_t, T5_GameboardSize_t9C51DF0242ED80239B303B755A4B5F7AB67B846A*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_TiltFiveUnity_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GetWandAvailability(T5_Bool_t945CAC2B53F54530B6DEDB6BB7E8C04BCB4970EC*, int32_t);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_TiltFiveUnity_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL ScanForWands();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_TiltFiveUnity_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL SwapWandHandedness();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_TiltFiveUnity_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GetControllerState(int32_t, T5_ControllerState_tD10E39B6E4C8C80529DBDED7EEFF83BA49090A21*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_TiltFiveUnity_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL SetRumbleMotor(uint32_t, float);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_TiltFiveUnity_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL QueueStereoImages(T5_FrameInfo_t7F613E6396304E74C09C56EA80815A7E37AFF041);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_TiltFiveUnity_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL GetSendFrameCallback();
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_TiltFiveUnity_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GetMaxDisplayDimensions(int32_t*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_TiltFiveUnity_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GetGlassesIPD(float*);
#endif
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_TiltFiveUnity_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL UnloadWorkaround();
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
// System.Int32 TiltFive.NativePlugin::SetApplicationInfo(TiltFive.T5_StringUTF8,TiltFive.T5_StringUTF8,TiltFive.T5_StringUTF8)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativePlugin_SetApplicationInfo_m0F9E057188F2EF74D652D6C4A6113A7BC443D0A9 (T5_StringUTF8_t8AC81068B24B238DB0858B6081E88E9C67B549B2 ___appName0, T5_StringUTF8_t8AC81068B24B238DB0858B6081E88E9C67B549B2 ___appId1, T5_StringUTF8_t8AC81068B24B238DB0858B6081E88E9C67B549B2 ___appVersion2, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (T5_StringUTF8_t8AC81068B24B238DB0858B6081E88E9C67B549B2, T5_StringUTF8_t8AC81068B24B238DB0858B6081E88E9C67B549B2, T5_StringUTF8_t8AC81068B24B238DB0858B6081E88E9C67B549B2);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_TiltFiveUnity_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(T5_StringUTF8_t8AC81068B24B238DB0858B6081E88E9C67B549B2) + sizeof(T5_StringUTF8_t8AC81068B24B238DB0858B6081E88E9C67B549B2) + sizeof(T5_StringUTF8_t8AC81068B24B238DB0858B6081E88E9C67B549B2);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("TiltFiveUnity"), "SetApplicationInfo", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_TiltFiveUnity_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(SetApplicationInfo)(___appName0, ___appId1, ___appVersion2);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___appName0, ___appId1, ___appVersion2);
	#endif

	return returnValue;
}
// TiltFive.ServiceCompatibility TiltFive.NativePlugin::GetServiceCompatibility()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativePlugin_GetServiceCompatibility_m3725CFA28C2460238A29F62B2F3CA103D6304A35 (const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_TiltFiveUnity_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("TiltFiveUnity"), "GetServiceCompatibility", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_TiltFiveUnity_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetServiceCompatibility)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.Int32 TiltFive.NativePlugin::RefreshGlassesAvailable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativePlugin_RefreshGlassesAvailable_m221EB39E8EC18C7506BABA28B5E9F360F280B3BE (const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_TiltFiveUnity_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("TiltFiveUnity"), "RefreshGlassesAvailable", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_TiltFiveUnity_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(RefreshGlassesAvailable)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.Int32 TiltFive.NativePlugin::GetGlassesFriendlyName(TiltFive.T5_StringUTF8&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativePlugin_GetGlassesFriendlyName_mF1CA9DB91770557A6581DC1C3135C3AD6D7B7239 (T5_StringUTF8_t8AC81068B24B238DB0858B6081E88E9C67B549B2* ___glassesFriendlyName0, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (T5_StringUTF8_t8AC81068B24B238DB0858B6081E88E9C67B549B2*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_TiltFiveUnity_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(T5_StringUTF8_t8AC81068B24B238DB0858B6081E88E9C67B549B2*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("TiltFiveUnity"), "GetGlassesFriendlyName", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_TiltFiveUnity_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetGlassesFriendlyName)(___glassesFriendlyName0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___glassesFriendlyName0);
	#endif

	return returnValue;
}
// System.Int32 TiltFive.NativePlugin::GetGlassesPose(TiltFive.T5_GlassesPose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativePlugin_GetGlassesPose_m44ADA79ECA1CDE6E888EAD91A4FBEC81C4B9D08D (T5_GlassesPose_tA745E39C2B88546A6934B1ADA0C2313BBBC5D6C1* ___glassesPose0, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (T5_GlassesPose_tA745E39C2B88546A6934B1ADA0C2313BBBC5D6C1*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_TiltFiveUnity_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(T5_GlassesPose_tA745E39C2B88546A6934B1ADA0C2313BBBC5D6C1*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("TiltFiveUnity"), "GetGlassesPose", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_TiltFiveUnity_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetGlassesPose)(___glassesPose0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___glassesPose0);
	#endif

	return returnValue;
}
// System.Int32 TiltFive.NativePlugin::GetGameboardDimensions(TiltFive.GameboardType,TiltFive.T5_GameboardSize&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativePlugin_GetGameboardDimensions_m56A9ADF865B74EC20065C7C02E3B5DDA6FA0A643 (int32_t ___gameboardType0, T5_GameboardSize_t9C51DF0242ED80239B303B755A4B5F7AB67B846A* ___playableSpaceInMeters1, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, T5_GameboardSize_t9C51DF0242ED80239B303B755A4B5F7AB67B846A*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_TiltFiveUnity_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 4 + sizeof(T5_GameboardSize_t9C51DF0242ED80239B303B755A4B5F7AB67B846A*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("TiltFiveUnity"), "GetGameboardDimensions", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_TiltFiveUnity_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetGameboardDimensions)(___gameboardType0, ___playableSpaceInMeters1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___gameboardType0, ___playableSpaceInMeters1);
	#endif

	return returnValue;
}
// System.Int32 TiltFive.NativePlugin::GetWandAvailability(TiltFive.T5_Bool&,TiltFive.ControllerIndex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativePlugin_GetWandAvailability_m688D95BF3F138FE5D09ECC1D597ABB2CA754D7C6 (T5_Bool_t945CAC2B53F54530B6DEDB6BB7E8C04BCB4970EC* ___wandAvailable0, int32_t ___wandTarget1, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (T5_Bool_t945CAC2B53F54530B6DEDB6BB7E8C04BCB4970EC*, int32_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_TiltFiveUnity_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(T5_Bool_t945CAC2B53F54530B6DEDB6BB7E8C04BCB4970EC*) + 4;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("TiltFiveUnity"), "GetWandAvailability", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_TiltFiveUnity_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetWandAvailability)(___wandAvailable0, ___wandTarget1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___wandAvailable0, ___wandTarget1);
	#endif

	return returnValue;
}
// System.Int32 TiltFive.NativePlugin::ScanForWands()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativePlugin_ScanForWands_m7D49A1836CDB78703BE632D55330707A46DA6ABE (const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_TiltFiveUnity_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("TiltFiveUnity"), "ScanForWands", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_TiltFiveUnity_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(ScanForWands)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.Int32 TiltFive.NativePlugin::SwapWandHandedness()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativePlugin_SwapWandHandedness_m59E477C237572F0370CD0D40602863CCF7A541A3 (const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_TiltFiveUnity_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("TiltFiveUnity"), "SwapWandHandedness", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_TiltFiveUnity_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(SwapWandHandedness)();
	#else
	int32_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.Int32 TiltFive.NativePlugin::GetControllerState(TiltFive.ControllerIndex,TiltFive.T5_ControllerState&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativePlugin_GetControllerState_mEBE282128D33AFE3AA9166AA2CEF43B2EC83B64F (int32_t ___controllerIndex0, T5_ControllerState_tD10E39B6E4C8C80529DBDED7EEFF83BA49090A21* ___controllerState1, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, T5_ControllerState_tD10E39B6E4C8C80529DBDED7EEFF83BA49090A21*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_TiltFiveUnity_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 4 + sizeof(T5_ControllerState_tD10E39B6E4C8C80529DBDED7EEFF83BA49090A21*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("TiltFiveUnity"), "GetControllerState", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_TiltFiveUnity_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetControllerState)(___controllerIndex0, ___controllerState1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___controllerIndex0, ___controllerState1);
	#endif

	return returnValue;
}
// System.Int32 TiltFive.NativePlugin::SetRumbleMotor(System.UInt32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativePlugin_SetRumbleMotor_m70ACDEC3D80E7ACA6CB9EC91AD5B3F7927532AC2 (uint32_t ___motor0, float ___intensity1, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (uint32_t, float);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_TiltFiveUnity_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(uint32_t) + sizeof(float);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("TiltFiveUnity"), "SetRumbleMotor", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_TiltFiveUnity_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(SetRumbleMotor)(___motor0, ___intensity1);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___motor0, ___intensity1);
	#endif

	return returnValue;
}
// System.Int32 TiltFive.NativePlugin::QueueStereoImages(TiltFive.T5_FrameInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativePlugin_QueueStereoImages_m6AC1A699770FC4EF0908D46089A19F356B5E74CB (T5_FrameInfo_t7F613E6396304E74C09C56EA80815A7E37AFF041 ___frameInfo0, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (T5_FrameInfo_t7F613E6396304E74C09C56EA80815A7E37AFF041);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_TiltFiveUnity_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(T5_FrameInfo_t7F613E6396304E74C09C56EA80815A7E37AFF041) + 2;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("TiltFiveUnity"), "QueueStereoImages", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_TiltFiveUnity_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(QueueStereoImages)(___frameInfo0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___frameInfo0);
	#endif

	return returnValue;
}
// System.IntPtr TiltFive.NativePlugin::GetSendFrameCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativePlugin_GetSendFrameCallback_m2064AEF211C860CEC7AE58D1B01FE1FD9FC8F768 (const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_TiltFiveUnity_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("TiltFiveUnity"), "GetSendFrameCallback", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_TiltFiveUnity_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(GetSendFrameCallback)();
	#else
	intptr_t returnValue = il2cppPInvokeFunc();
	#endif

	return returnValue;
}
// System.Int32 TiltFive.NativePlugin::GetMaxDisplayDimensions(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativePlugin_GetMaxDisplayDimensions_m30E11A95E3DDE3B85D856968D5941C7ED4D672C6 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___displayDimensions0, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_TiltFiveUnity_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("TiltFiveUnity"), "GetMaxDisplayDimensions", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___displayDimensions0' to native representation
	int32_t* ____displayDimensions0_marshaled = NULL;
	if (___displayDimensions0 != NULL)
	{
		____displayDimensions0_marshaled = reinterpret_cast<int32_t*>((___displayDimensions0)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_TiltFiveUnity_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetMaxDisplayDimensions)(____displayDimensions0_marshaled);
	#else
	int32_t returnValue = il2cppPInvokeFunc(____displayDimensions0_marshaled);
	#endif

	return returnValue;
}
// System.Int32 TiltFive.NativePlugin::GetGlassesIPD(System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativePlugin_GetGlassesIPD_m92CF5676AA515874AAD33113D42E84C47082D367 (float* ___glassesIPD0, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (float*);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_TiltFiveUnity_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(float*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("TiltFiveUnity"), "GetGlassesIPD", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_TiltFiveUnity_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GetGlassesIPD)(___glassesIPD0);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___glassesIPD0);
	#endif

	return returnValue;
}
// System.Void TiltFive.NativePlugin::UnloadWorkaround()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativePlugin_UnloadWorkaround_m748018B38062CF1A8AC116DAAC862F8745198064 (const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_TiltFiveUnity_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("TiltFiveUnity"), "UnloadWorkaround", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_TiltFiveUnity_INTERNAL
	reinterpret_cast<PInvokeFunc>(UnloadWorkaround)();
	#else
	il2cppPInvokeFunc();
	#endif

}
// System.Void TiltFive.NativePlugin::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativePlugin__ctor_m7EC5255E6AA7B796FF6F69C91198A3E7EC71C23B (NativePlugin_tE76C585D472B55F140F126D9AFD1B42F6ED334BE* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void TiltFive.T5_Bool::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void T5_Bool__ctor_m1659BEEB3AC80CE2B2E6FE4483CE8A03734B99C0 (T5_Bool_t945CAC2B53F54530B6DEDB6BB7E8C04BCB4970EC* __this, bool ___boolean0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// booleanByte = Convert.ToByte(boolean);
		bool L_0 = ___boolean0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		uint8_t L_1;
		L_1 = Convert_ToByte_mF977257DBAD4FAD9FF78232B33DF37121800834D(L_0, NULL);
		__this->___booleanByte_0 = L_1;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void T5_Bool__ctor_m1659BEEB3AC80CE2B2E6FE4483CE8A03734B99C0_AdjustorThunk (RuntimeObject* __this, bool ___boolean0, const RuntimeMethod* method)
{
	T5_Bool_t945CAC2B53F54530B6DEDB6BB7E8C04BCB4970EC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<T5_Bool_t945CAC2B53F54530B6DEDB6BB7E8C04BCB4970EC*>(__this + _offset);
	T5_Bool__ctor_m1659BEEB3AC80CE2B2E6FE4483CE8A03734B99C0(_thisAdjusted, ___boolean0, method);
}
// System.Boolean TiltFive.T5_Bool::op_Implicit(TiltFive.T5_Bool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool T5_Bool_op_Implicit_mF773EB75E5E087E34E8A590D27ABCAECDD013C69 (T5_Bool_t945CAC2B53F54530B6DEDB6BB7E8C04BCB4970EC ___t5_boolean0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// => Convert.ToBoolean(t5_boolean.booleanByte);
		T5_Bool_t945CAC2B53F54530B6DEDB6BB7E8C04BCB4970EC L_0 = ___t5_boolean0;
		uint8_t L_1 = L_0.___booleanByte_0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Convert_ToBoolean_m15C298BDE61E3537C216A843315CD45862704BBD(L_1, NULL);
		return L_2;
	}
}
// TiltFive.T5_Bool TiltFive.T5_Bool::op_Implicit(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR T5_Bool_t945CAC2B53F54530B6DEDB6BB7E8C04BCB4970EC T5_Bool_op_Implicit_mD69CA4D7BE80D887A6C1CAA6D4E666EF31C99F7D (bool ___boolean0, const RuntimeMethod* method) 
{
	{
		// public static implicit operator T5_Bool(bool boolean) => new T5_Bool(boolean);
		bool L_0 = ___boolean0;
		T5_Bool_t945CAC2B53F54530B6DEDB6BB7E8C04BCB4970EC L_1;
		memset((&L_1), 0, sizeof(L_1));
		T5_Bool__ctor_m1659BEEB3AC80CE2B2E6FE4483CE8A03734B99C0((&L_1), L_0, /*hidden argument*/NULL);
		return L_1;
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
// System.Void TiltFive.T5_Position::.ctor(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void T5_Position__ctor_mA2E282BE682E717C1C839494E07D4C90EC6FC0AB (T5_Position_t2E1BC0E85C3007B562F87C2A8D0B62CA83D5213D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) 
{
	{
		// X = position.x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___position0;
		float L_1 = L_0.___x_2;
		__this->___X_0 = L_1;
		// Y = position.y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___position0;
		float L_3 = L_2.___y_3;
		__this->___Y_1 = L_3;
		// Z = position.z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___position0;
		float L_5 = L_4.___z_4;
		__this->___Z_2 = L_5;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void T5_Position__ctor_mA2E282BE682E717C1C839494E07D4C90EC6FC0AB_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method)
{
	T5_Position_t2E1BC0E85C3007B562F87C2A8D0B62CA83D5213D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<T5_Position_t2E1BC0E85C3007B562F87C2A8D0B62CA83D5213D*>(__this + _offset);
	T5_Position__ctor_mA2E282BE682E717C1C839494E07D4C90EC6FC0AB(_thisAdjusted, ___position0, method);
}
// UnityEngine.Vector3 TiltFive.T5_Position::op_Implicit(TiltFive.T5_Position)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 T5_Position_op_Implicit_m9D5047F3EB48CC3F1FBAEA61D5FBD9AB430559C7 (T5_Position_t2E1BC0E85C3007B562F87C2A8D0B62CA83D5213D ___t5_position0, const RuntimeMethod* method) 
{
	{
		// => new Vector3(t5_position.X, t5_position.Y, t5_position.Z);
		T5_Position_t2E1BC0E85C3007B562F87C2A8D0B62CA83D5213D L_0 = ___t5_position0;
		float L_1 = L_0.___X_0;
		T5_Position_t2E1BC0E85C3007B562F87C2A8D0B62CA83D5213D L_2 = ___t5_position0;
		float L_3 = L_2.___Y_1;
		T5_Position_t2E1BC0E85C3007B562F87C2A8D0B62CA83D5213D L_4 = ___t5_position0;
		float L_5 = L_4.___Z_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), L_1, L_3, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// TiltFive.T5_Position TiltFive.T5_Position::op_Implicit(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR T5_Position_t2E1BC0E85C3007B562F87C2A8D0B62CA83D5213D T5_Position_op_Implicit_mEC7EC466D3839205E1F21EF23F9A495654CCC653 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) 
{
	{
		// public static implicit operator T5_Position(Vector3 position) => new T5_Position(position);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___position0;
		T5_Position_t2E1BC0E85C3007B562F87C2A8D0B62CA83D5213D L_1;
		memset((&L_1), 0, sizeof(L_1));
		T5_Position__ctor_mA2E282BE682E717C1C839494E07D4C90EC6FC0AB((&L_1), L_0, /*hidden argument*/NULL);
		return L_1;
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
// System.Void TiltFive.T5_Rotation::.ctor(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void T5_Rotation__ctor_mBFED4D1F893AB6A655655DF9EF327EDD47DCF3E1 (T5_Rotation_t7B915578461682541D830D5F9B768E810A69858C* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, const RuntimeMethod* method) 
{
	{
		// W = rotation.w;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___rotation0;
		float L_1 = L_0.___w_3;
		__this->___W_0 = L_1;
		// X = rotation.x;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___rotation0;
		float L_3 = L_2.___x_0;
		__this->___X_1 = L_3;
		// Y = rotation.y;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___rotation0;
		float L_5 = L_4.___y_1;
		__this->___Y_2 = L_5;
		// Z = rotation.z;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___rotation0;
		float L_7 = L_6.___z_2;
		__this->___Z_3 = L_7;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void T5_Rotation__ctor_mBFED4D1F893AB6A655655DF9EF327EDD47DCF3E1_AdjustorThunk (RuntimeObject* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, const RuntimeMethod* method)
{
	T5_Rotation_t7B915578461682541D830D5F9B768E810A69858C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<T5_Rotation_t7B915578461682541D830D5F9B768E810A69858C*>(__this + _offset);
	T5_Rotation__ctor_mBFED4D1F893AB6A655655DF9EF327EDD47DCF3E1(_thisAdjusted, ___rotation0, method);
}
// UnityEngine.Quaternion TiltFive.T5_Rotation::op_Implicit(TiltFive.T5_Rotation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 T5_Rotation_op_Implicit_m7DD8FE02F35ACE1E8681D867AE8699D7C4E7AB8C (T5_Rotation_t7B915578461682541D830D5F9B768E810A69858C ___t5_rotation0, const RuntimeMethod* method) 
{
	{
		// => new Quaternion(t5_rotation.X, t5_rotation.Y, t5_rotation.Z, t5_rotation.W);
		T5_Rotation_t7B915578461682541D830D5F9B768E810A69858C L_0 = ___t5_rotation0;
		float L_1 = L_0.___X_1;
		T5_Rotation_t7B915578461682541D830D5F9B768E810A69858C L_2 = ___t5_rotation0;
		float L_3 = L_2.___Y_2;
		T5_Rotation_t7B915578461682541D830D5F9B768E810A69858C L_4 = ___t5_rotation0;
		float L_5 = L_4.___Z_3;
		T5_Rotation_t7B915578461682541D830D5F9B768E810A69858C L_6 = ___t5_rotation0;
		float L_7 = L_6.___W_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_8), L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// TiltFive.T5_Rotation TiltFive.T5_Rotation::op_Implicit(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR T5_Rotation_t7B915578461682541D830D5F9B768E810A69858C T5_Rotation_op_Implicit_m99D0D734EEE3A5A4AEC85E86B3601E0A3A1CAB7A (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, const RuntimeMethod* method) 
{
	{
		// public static implicit operator T5_Rotation(Quaternion rotation) => new T5_Rotation(rotation);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___rotation0;
		T5_Rotation_t7B915578461682541D830D5F9B768E810A69858C L_1;
		memset((&L_1), 0, sizeof(L_1));
		T5_Rotation__ctor_mBFED4D1F893AB6A655655DF9EF327EDD47DCF3E1((&L_1), L_0, /*hidden argument*/NULL);
		return L_1;
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
// UnityEngine.Vector3 TiltFive.T5_GlassesPose::get_PosOfGLS_GBD()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 T5_GlassesPose_get_PosOfGLS_GBD_m723213ADF74954EC92CC2C1A05EDEF6DD1508F45 (T5_GlassesPose_tA745E39C2B88546A6934B1ADA0C2313BBBC5D6C1* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 PosOfGLS_GBD { get => posOfGLS_GBD; set => posOfGLS_GBD = value; }
		T5_Position_t2E1BC0E85C3007B562F87C2A8D0B62CA83D5213D L_0 = __this->___posOfGLS_GBD_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = T5_Position_op_Implicit_m9D5047F3EB48CC3F1FBAEA61D5FBD9AB430559C7(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 T5_GlassesPose_get_PosOfGLS_GBD_m723213ADF74954EC92CC2C1A05EDEF6DD1508F45_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	T5_GlassesPose_tA745E39C2B88546A6934B1ADA0C2313BBBC5D6C1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<T5_GlassesPose_tA745E39C2B88546A6934B1ADA0C2313BBBC5D6C1*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = T5_GlassesPose_get_PosOfGLS_GBD_m723213ADF74954EC92CC2C1A05EDEF6DD1508F45(_thisAdjusted, method);
	return _returnValue;
}
// System.Void TiltFive.T5_GlassesPose::set_PosOfGLS_GBD(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void T5_GlassesPose_set_PosOfGLS_GBD_m252826153571E0BC4E0EAAA6F64601C38B8BCB2A (T5_GlassesPose_tA745E39C2B88546A6934B1ADA0C2313BBBC5D6C1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector3 PosOfGLS_GBD { get => posOfGLS_GBD; set => posOfGLS_GBD = value; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		T5_Position_t2E1BC0E85C3007B562F87C2A8D0B62CA83D5213D L_1;
		L_1 = T5_Position_op_Implicit_mEC7EC466D3839205E1F21EF23F9A495654CCC653(L_0, NULL);
		__this->___posOfGLS_GBD_1 = L_1;
		return;
	}
}
IL2CPP_EXTERN_C  void T5_GlassesPose_set_PosOfGLS_GBD_m252826153571E0BC4E0EAAA6F64601C38B8BCB2A_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method)
{
	T5_GlassesPose_tA745E39C2B88546A6934B1ADA0C2313BBBC5D6C1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<T5_GlassesPose_tA745E39C2B88546A6934B1ADA0C2313BBBC5D6C1*>(__this + _offset);
	T5_GlassesPose_set_PosOfGLS_GBD_m252826153571E0BC4E0EAAA6F64601C38B8BCB2A(_thisAdjusted, ___value0, method);
}
// UnityEngine.Quaternion TiltFive.T5_GlassesPose::get_RotationToGLS_GBD()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 T5_GlassesPose_get_RotationToGLS_GBD_mF27DCE1A8E9556EC8C81B817F6816F9CCA7C7C9E (T5_GlassesPose_tA745E39C2B88546A6934B1ADA0C2313BBBC5D6C1* __this, const RuntimeMethod* method) 
{
	{
		// public Quaternion RotationToGLS_GBD { get => rotationToGLS_GBD; set => rotationToGLS_GBD = value; }
		T5_Rotation_t7B915578461682541D830D5F9B768E810A69858C L_0 = __this->___rotationToGLS_GBD_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = T5_Rotation_op_Implicit_m7DD8FE02F35ACE1E8681D867AE8699D7C4E7AB8C(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 T5_GlassesPose_get_RotationToGLS_GBD_mF27DCE1A8E9556EC8C81B817F6816F9CCA7C7C9E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	T5_GlassesPose_tA745E39C2B88546A6934B1ADA0C2313BBBC5D6C1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<T5_GlassesPose_tA745E39C2B88546A6934B1ADA0C2313BBBC5D6C1*>(__this + _offset);
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 _returnValue;
	_returnValue = T5_GlassesPose_get_RotationToGLS_GBD_mF27DCE1A8E9556EC8C81B817F6816F9CCA7C7C9E(_thisAdjusted, method);
	return _returnValue;
}
// System.Void TiltFive.T5_GlassesPose::set_RotationToGLS_GBD(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void T5_GlassesPose_set_RotationToGLS_GBD_mB8FEE83525A29AC81AC854C8850EBAFF3D070379 (T5_GlassesPose_tA745E39C2B88546A6934B1ADA0C2313BBBC5D6C1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) 
{
	{
		// public Quaternion RotationToGLS_GBD { get => rotationToGLS_GBD; set => rotationToGLS_GBD = value; }
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___value0;
		T5_Rotation_t7B915578461682541D830D5F9B768E810A69858C L_1;
		L_1 = T5_Rotation_op_Implicit_m99D0D734EEE3A5A4AEC85E86B3601E0A3A1CAB7A(L_0, NULL);
		__this->___rotationToGLS_GBD_2 = L_1;
		return;
	}
}
IL2CPP_EXTERN_C  void T5_GlassesPose_set_RotationToGLS_GBD_mB8FEE83525A29AC81AC854C8850EBAFF3D070379_AdjustorThunk (RuntimeObject* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method)
{
	T5_GlassesPose_tA745E39C2B88546A6934B1ADA0C2313BBBC5D6C1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<T5_GlassesPose_tA745E39C2B88546A6934B1ADA0C2313BBBC5D6C1*>(__this + _offset);
	T5_GlassesPose_set_RotationToGLS_GBD_mB8FEE83525A29AC81AC854C8850EBAFF3D070379(_thisAdjusted, ___value0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean TiltFive.T5_ControllerState::get_AnalogValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool T5_ControllerState_get_AnalogValid_m42AF8FC92674401941B55F004C92E17D5CD6583E (T5_ControllerState_tD10E39B6E4C8C80529DBDED7EEFF83BA49090A21* __this, const RuntimeMethod* method) 
{
	{
		// public bool AnalogValid { get => analogValid; set => analogValid = value; }
		T5_Bool_t945CAC2B53F54530B6DEDB6BB7E8C04BCB4970EC L_0 = __this->___analogValid_1;
		bool L_1;
		L_1 = T5_Bool_op_Implicit_mF773EB75E5E087E34E8A590D27ABCAECDD013C69(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool T5_ControllerState_get_AnalogValid_m42AF8FC92674401941B55F004C92E17D5CD6583E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	T5_ControllerState_tD10E39B6E4C8C80529DBDED7EEFF83BA49090A21* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<T5_ControllerState_tD10E39B6E4C8C80529DBDED7EEFF83BA49090A21*>(__this + _offset);
	bool _returnValue;
	_returnValue = T5_ControllerState_get_AnalogValid_m42AF8FC92674401941B55F004C92E17D5CD6583E(_thisAdjusted, method);
	return _returnValue;
}
// System.Void TiltFive.T5_ControllerState::set_AnalogValid(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void T5_ControllerState_set_AnalogValid_mEB47FDDDB402A2BACECCAC34C5AAE4111FF7B07D (T5_ControllerState_tD10E39B6E4C8C80529DBDED7EEFF83BA49090A21* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool AnalogValid { get => analogValid; set => analogValid = value; }
		bool L_0 = ___value0;
		T5_Bool_t945CAC2B53F54530B6DEDB6BB7E8C04BCB4970EC L_1;
		L_1 = T5_Bool_op_Implicit_mD69CA4D7BE80D887A6C1CAA6D4E666EF31C99F7D(L_0, NULL);
		__this->___analogValid_1 = L_1;
		return;
	}
}
IL2CPP_EXTERN_C  void T5_ControllerState_set_AnalogValid_mEB47FDDDB402A2BACECCAC34C5AAE4111FF7B07D_AdjustorThunk (RuntimeObject* __this, bool ___value0, const RuntimeMethod* method)
{
	T5_ControllerState_tD10E39B6E4C8C80529DBDED7EEFF83BA49090A21* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<T5_ControllerState_tD10E39B6E4C8C80529DBDED7EEFF83BA49090A21*>(__this + _offset);
	T5_ControllerState_set_AnalogValid_mEB47FDDDB402A2BACECCAC34C5AAE4111FF7B07D(_thisAdjusted, ___value0, method);
}
// System.Boolean TiltFive.T5_ControllerState::get_BatteryValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool T5_ControllerState_get_BatteryValid_mDAB46DF96334493FBE81DF4A628DB153C01F4161 (T5_ControllerState_tD10E39B6E4C8C80529DBDED7EEFF83BA49090A21* __this, const RuntimeMethod* method) 
{
	{
		// public bool BatteryValid { get => batteryValid; set => batteryValid = value; }
		T5_Bool_t945CAC2B53F54530B6DEDB6BB7E8C04BCB4970EC L_0 = __this->___batteryValid_2;
		bool L_1;
		L_1 = T5_Bool_op_Implicit_mF773EB75E5E087E34E8A590D27ABCAECDD013C69(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool T5_ControllerState_get_BatteryValid_mDAB46DF96334493FBE81DF4A628DB153C01F4161_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	T5_ControllerState_tD10E39B6E4C8C80529DBDED7EEFF83BA49090A21* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<T5_ControllerState_tD10E39B6E4C8C80529DBDED7EEFF83BA49090A21*>(__this + _offset);
	bool _returnValue;
	_returnValue = T5_ControllerState_get_BatteryValid_mDAB46DF96334493FBE81DF4A628DB153C01F4161(_thisAdjusted, method);
	return _returnValue;
}
// System.Void TiltFive.T5_ControllerState::set_BatteryValid(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void T5_ControllerState_set_BatteryValid_m8B6C7AE6FF278A040209483FCF949C7FE053E307 (T5_ControllerState_tD10E39B6E4C8C80529DBDED7EEFF83BA49090A21* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool BatteryValid { get => batteryValid; set => batteryValid = value; }
		bool L_0 = ___value0;
		T5_Bool_t945CAC2B53F54530B6DEDB6BB7E8C04BCB4970EC L_1;
		L_1 = T5_Bool_op_Implicit_mD69CA4D7BE80D887A6C1CAA6D4E666EF31C99F7D(L_0, NULL);
		__this->___batteryValid_2 = L_1;
		return;
	}
}
IL2CPP_EXTERN_C  void T5_ControllerState_set_BatteryValid_m8B6C7AE6FF278A040209483FCF949C7FE053E307_AdjustorThunk (RuntimeObject* __this, bool ___value0, const RuntimeMethod* method)
{
	T5_ControllerState_tD10E39B6E4C8C80529DBDED7EEFF83BA49090A21* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<T5_ControllerState_tD10E39B6E4C8C80529DBDED7EEFF83BA49090A21*>(__this + _offset);
	T5_ControllerState_set_BatteryValid_m8B6C7AE6FF278A040209483FCF949C7FE053E307(_thisAdjusted, ___value0, method);
}
// System.Boolean TiltFive.T5_ControllerState::get_ButtonsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool T5_ControllerState_get_ButtonsValid_m0FC62AF506C2232F1168D056CEC1579864E2D2F5 (T5_ControllerState_tD10E39B6E4C8C80529DBDED7EEFF83BA49090A21* __this, const RuntimeMethod* method) 
{
	{
		// public bool ButtonsValid { get => buttonsValid; set => buttonsValid = value; }
		T5_Bool_t945CAC2B53F54530B6DEDB6BB7E8C04BCB4970EC L_0 = __this->___buttonsValid_3;
		bool L_1;
		L_1 = T5_Bool_op_Implicit_mF773EB75E5E087E34E8A590D27ABCAECDD013C69(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool T5_ControllerState_get_ButtonsValid_m0FC62AF506C2232F1168D056CEC1579864E2D2F5_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	T5_ControllerState_tD10E39B6E4C8C80529DBDED7EEFF83BA49090A21* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<T5_ControllerState_tD10E39B6E4C8C80529DBDED7EEFF83BA49090A21*>(__this + _offset);
	bool _returnValue;
	_returnValue = T5_ControllerState_get_ButtonsValid_m0FC62AF506C2232F1168D056CEC1579864E2D2F5(_thisAdjusted, method);
	return _returnValue;
}
// System.Void TiltFive.T5_ControllerState::set_ButtonsValid(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void T5_ControllerState_set_ButtonsValid_m90F82ED0B52D5D6052C9A88FD6110E2E74194D0E (T5_ControllerState_tD10E39B6E4C8C80529DBDED7EEFF83BA49090A21* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool ButtonsValid { get => buttonsValid; set => buttonsValid = value; }
		bool L_0 = ___value0;
		T5_Bool_t945CAC2B53F54530B6DEDB6BB7E8C04BCB4970EC L_1;
		L_1 = T5_Bool_op_Implicit_mD69CA4D7BE80D887A6C1CAA6D4E666EF31C99F7D(L_0, NULL);
		__this->___buttonsValid_3 = L_1;
		return;
	}
}
IL2CPP_EXTERN_C  void T5_ControllerState_set_ButtonsValid_m90F82ED0B52D5D6052C9A88FD6110E2E74194D0E_AdjustorThunk (RuntimeObject* __this, bool ___value0, const RuntimeMethod* method)
{
	T5_ControllerState_tD10E39B6E4C8C80529DBDED7EEFF83BA49090A21* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<T5_ControllerState_tD10E39B6E4C8C80529DBDED7EEFF83BA49090A21*>(__this + _offset);
	T5_ControllerState_set_ButtonsValid_m90F82ED0B52D5D6052C9A88FD6110E2E74194D0E(_thisAdjusted, ___value0, method);
}
// System.Boolean TiltFive.T5_ControllerState::get_PoseValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool T5_ControllerState_get_PoseValid_m29F537A9E53F638D0D1B682DC4934217C03E7F4A (T5_ControllerState_tD10E39B6E4C8C80529DBDED7EEFF83BA49090A21* __this, const RuntimeMethod* method) 
{
	{
		// public bool PoseValid { get => poseValid; set => poseValid = value; }
		T5_Bool_t945CAC2B53F54530B6DEDB6BB7E8C04BCB4970EC L_0 = __this->___poseValid_4;
		bool L_1;
		L_1 = T5_Bool_op_Implicit_mF773EB75E5E087E34E8A590D27ABCAECDD013C69(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool T5_ControllerState_get_PoseValid_m29F537A9E53F638D0D1B682DC4934217C03E7F4A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	T5_ControllerState_tD10E39B6E4C8C80529DBDED7EEFF83BA49090A21* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<T5_ControllerState_tD10E39B6E4C8C80529DBDED7EEFF83BA49090A21*>(__this + _offset);
	bool _returnValue;
	_returnValue = T5_ControllerState_get_PoseValid_m29F537A9E53F638D0D1B682DC4934217C03E7F4A(_thisAdjusted, method);
	return _returnValue;
}
// System.Void TiltFive.T5_ControllerState::set_PoseValid(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void T5_ControllerState_set_PoseValid_m0D02D25C3E5F14DA824C3AFBF2C160543A6FEBBD (T5_ControllerState_tD10E39B6E4C8C80529DBDED7EEFF83BA49090A21* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool PoseValid { get => poseValid; set => poseValid = value; }
		bool L_0 = ___value0;
		T5_Bool_t945CAC2B53F54530B6DEDB6BB7E8C04BCB4970EC L_1;
		L_1 = T5_Bool_op_Implicit_mD69CA4D7BE80D887A6C1CAA6D4E666EF31C99F7D(L_0, NULL);
		__this->___poseValid_4 = L_1;
		return;
	}
}
IL2CPP_EXTERN_C  void T5_ControllerState_set_PoseValid_m0D02D25C3E5F14DA824C3AFBF2C160543A6FEBBD_AdjustorThunk (RuntimeObject* __this, bool ___value0, const RuntimeMethod* method)
{
	T5_ControllerState_tD10E39B6E4C8C80529DBDED7EEFF83BA49090A21* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<T5_ControllerState_tD10E39B6E4C8C80529DBDED7EEFF83BA49090A21*>(__this + _offset);
	T5_ControllerState_set_PoseValid_m0D02D25C3E5F14DA824C3AFBF2C160543A6FEBBD(_thisAdjusted, ___value0, method);
}
// UnityEngine.Quaternion TiltFive.T5_ControllerState::get_RotToWND_GBD()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 T5_ControllerState_get_RotToWND_GBD_m129DF9FA8962FF582B6B1580E15196E85C4EBA88 (T5_ControllerState_tD10E39B6E4C8C80529DBDED7EEFF83BA49090A21* __this, const RuntimeMethod* method) 
{
	{
		// public Quaternion RotToWND_GBD { get => rotToWND_GBD; set => rotToWND_GBD = value; }
		T5_Rotation_t7B915578461682541D830D5F9B768E810A69858C L_0 = __this->___rotToWND_GBD_9;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = T5_Rotation_op_Implicit_m7DD8FE02F35ACE1E8681D867AE8699D7C4E7AB8C(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 T5_ControllerState_get_RotToWND_GBD_m129DF9FA8962FF582B6B1580E15196E85C4EBA88_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	T5_ControllerState_tD10E39B6E4C8C80529DBDED7EEFF83BA49090A21* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<T5_ControllerState_tD10E39B6E4C8C80529DBDED7EEFF83BA49090A21*>(__this + _offset);
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 _returnValue;
	_returnValue = T5_ControllerState_get_RotToWND_GBD_m129DF9FA8962FF582B6B1580E15196E85C4EBA88(_thisAdjusted, method);
	return _returnValue;
}
// System.Void TiltFive.T5_ControllerState::set_RotToWND_GBD(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void T5_ControllerState_set_RotToWND_GBD_m3F45BECBE891C98516DF482560FC45D1250CA9A6 (T5_ControllerState_tD10E39B6E4C8C80529DBDED7EEFF83BA49090A21* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) 
{
	{
		// public Quaternion RotToWND_GBD { get => rotToWND_GBD; set => rotToWND_GBD = value; }
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___value0;
		T5_Rotation_t7B915578461682541D830D5F9B768E810A69858C L_1;
		L_1 = T5_Rotation_op_Implicit_m99D0D734EEE3A5A4AEC85E86B3601E0A3A1CAB7A(L_0, NULL);
		__this->___rotToWND_GBD_9 = L_1;
		return;
	}
}
IL2CPP_EXTERN_C  void T5_ControllerState_set_RotToWND_GBD_m3F45BECBE891C98516DF482560FC45D1250CA9A6_AdjustorThunk (RuntimeObject* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method)
{
	T5_ControllerState_tD10E39B6E4C8C80529DBDED7EEFF83BA49090A21* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<T5_ControllerState_tD10E39B6E4C8C80529DBDED7EEFF83BA49090A21*>(__this + _offset);
	T5_ControllerState_set_RotToWND_GBD_m3F45BECBE891C98516DF482560FC45D1250CA9A6(_thisAdjusted, ___value0, method);
}
// UnityEngine.Vector3 TiltFive.T5_ControllerState::get_AimPos_GBD()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 T5_ControllerState_get_AimPos_GBD_m38075D412042D3F337D21288E980C678DF62BB14 (T5_ControllerState_tD10E39B6E4C8C80529DBDED7EEFF83BA49090A21* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 AimPos_GBD { get => aimPos_GBD; set => aimPos_GBD = value; }
		T5_Position_t2E1BC0E85C3007B562F87C2A8D0B62CA83D5213D L_0 = __this->___aimPos_GBD_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = T5_Position_op_Implicit_m9D5047F3EB48CC3F1FBAEA61D5FBD9AB430559C7(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 T5_ControllerState_get_AimPos_GBD_m38075D412042D3F337D21288E980C678DF62BB14_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	T5_ControllerState_tD10E39B6E4C8C80529DBDED7EEFF83BA49090A21* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<T5_ControllerState_tD10E39B6E4C8C80529DBDED7EEFF83BA49090A21*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = T5_ControllerState_get_AimPos_GBD_m38075D412042D3F337D21288E980C678DF62BB14(_thisAdjusted, method);
	return _returnValue;
}
// System.Void TiltFive.T5_ControllerState::set_AimPos_GBD(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void T5_ControllerState_set_AimPos_GBD_m292FDD94EF3EA5929E1E934879AA1AFAAE7887B9 (T5_ControllerState_tD10E39B6E4C8C80529DBDED7EEFF83BA49090A21* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector3 AimPos_GBD { get => aimPos_GBD; set => aimPos_GBD = value; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		T5_Position_t2E1BC0E85C3007B562F87C2A8D0B62CA83D5213D L_1;
		L_1 = T5_Position_op_Implicit_mEC7EC466D3839205E1F21EF23F9A495654CCC653(L_0, NULL);
		__this->___aimPos_GBD_10 = L_1;
		return;
	}
}
IL2CPP_EXTERN_C  void T5_ControllerState_set_AimPos_GBD_m292FDD94EF3EA5929E1E934879AA1AFAAE7887B9_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method)
{
	T5_ControllerState_tD10E39B6E4C8C80529DBDED7EEFF83BA49090A21* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<T5_ControllerState_tD10E39B6E4C8C80529DBDED7EEFF83BA49090A21*>(__this + _offset);
	T5_ControllerState_set_AimPos_GBD_m292FDD94EF3EA5929E1E934879AA1AFAAE7887B9(_thisAdjusted, ___value0, method);
}
// UnityEngine.Vector3 TiltFive.T5_ControllerState::get_FingertipsPos_GBD()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 T5_ControllerState_get_FingertipsPos_GBD_m521B6E9DB0C73FDF8AFF94683F7168F8552FD643 (T5_ControllerState_tD10E39B6E4C8C80529DBDED7EEFF83BA49090A21* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 FingertipsPos_GBD { get => fingertipsPos_GBD; set => fingertipsPos_GBD = value; }
		T5_Position_t2E1BC0E85C3007B562F87C2A8D0B62CA83D5213D L_0 = __this->___fingertipsPos_GBD_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = T5_Position_op_Implicit_m9D5047F3EB48CC3F1FBAEA61D5FBD9AB430559C7(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 T5_ControllerState_get_FingertipsPos_GBD_m521B6E9DB0C73FDF8AFF94683F7168F8552FD643_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	T5_ControllerState_tD10E39B6E4C8C80529DBDED7EEFF83BA49090A21* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<T5_ControllerState_tD10E39B6E4C8C80529DBDED7EEFF83BA49090A21*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = T5_ControllerState_get_FingertipsPos_GBD_m521B6E9DB0C73FDF8AFF94683F7168F8552FD643(_thisAdjusted, method);
	return _returnValue;
}
// System.Void TiltFive.T5_ControllerState::set_FingertipsPos_GBD(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void T5_ControllerState_set_FingertipsPos_GBD_mB1E737F7C3E267AE2119C5FD3CD5B5BA0FA57702 (T5_ControllerState_tD10E39B6E4C8C80529DBDED7EEFF83BA49090A21* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector3 FingertipsPos_GBD { get => fingertipsPos_GBD; set => fingertipsPos_GBD = value; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		T5_Position_t2E1BC0E85C3007B562F87C2A8D0B62CA83D5213D L_1;
		L_1 = T5_Position_op_Implicit_mEC7EC466D3839205E1F21EF23F9A495654CCC653(L_0, NULL);
		__this->___fingertipsPos_GBD_11 = L_1;
		return;
	}
}
IL2CPP_EXTERN_C  void T5_ControllerState_set_FingertipsPos_GBD_mB1E737F7C3E267AE2119C5FD3CD5B5BA0FA57702_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method)
{
	T5_ControllerState_tD10E39B6E4C8C80529DBDED7EEFF83BA49090A21* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<T5_ControllerState_tD10E39B6E4C8C80529DBDED7EEFF83BA49090A21*>(__this + _offset);
	T5_ControllerState_set_FingertipsPos_GBD_mB1E737F7C3E267AE2119C5FD3CD5B5BA0FA57702(_thisAdjusted, ___value0, method);
}
// UnityEngine.Vector3 TiltFive.T5_ControllerState::get_GripPos_GBD()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 T5_ControllerState_get_GripPos_GBD_m80D6E2A12758F806B7809A9DBC2B3D5B1342CC9C (T5_ControllerState_tD10E39B6E4C8C80529DBDED7EEFF83BA49090A21* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 GripPos_GBD { get => gripPos_GBD; set => gripPos_GBD = value; }
		T5_Position_t2E1BC0E85C3007B562F87C2A8D0B62CA83D5213D L_0 = __this->___gripPos_GBD_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = T5_Position_op_Implicit_m9D5047F3EB48CC3F1FBAEA61D5FBD9AB430559C7(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 T5_ControllerState_get_GripPos_GBD_m80D6E2A12758F806B7809A9DBC2B3D5B1342CC9C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	T5_ControllerState_tD10E39B6E4C8C80529DBDED7EEFF83BA49090A21* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<T5_ControllerState_tD10E39B6E4C8C80529DBDED7EEFF83BA49090A21*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = T5_ControllerState_get_GripPos_GBD_m80D6E2A12758F806B7809A9DBC2B3D5B1342CC9C(_thisAdjusted, method);
	return _returnValue;
}
// System.Void TiltFive.T5_ControllerState::set_GripPos_GBD(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void T5_ControllerState_set_GripPos_GBD_m9DFEE48755DAFC4364624E4ED2FCAC3A39DE3F7B (T5_ControllerState_tD10E39B6E4C8C80529DBDED7EEFF83BA49090A21* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector3 GripPos_GBD { get => gripPos_GBD; set => gripPos_GBD = value; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		T5_Position_t2E1BC0E85C3007B562F87C2A8D0B62CA83D5213D L_1;
		L_1 = T5_Position_op_Implicit_mEC7EC466D3839205E1F21EF23F9A495654CCC653(L_0, NULL);
		__this->___gripPos_GBD_12 = L_1;
		return;
	}
}
IL2CPP_EXTERN_C  void T5_ControllerState_set_GripPos_GBD_m9DFEE48755DAFC4364624E4ED2FCAC3A39DE3F7B_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method)
{
	T5_ControllerState_tD10E39B6E4C8C80529DBDED7EEFF83BA49090A21* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<T5_ControllerState_tD10E39B6E4C8C80529DBDED7EEFF83BA49090A21*>(__this + _offset);
	T5_ControllerState_set_GripPos_GBD_m9DFEE48755DAFC4364624E4ED2FCAC3A39DE3F7B(_thisAdjusted, ___value0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Vector2 TiltFive.T5_ControllerState/Joystick::op_Implicit(TiltFive.T5_ControllerState/Joystick)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Joystick_op_Implicit_m3B7933B7EEFFFB1E8F58A62C9621005234AA9013 (Joystick_t8285A98B287E3D3C6E96FC7C72A71DA9F75F27CD ___joystick0, const RuntimeMethod* method) 
{
	{
		// public static implicit operator Vector2(Joystick joystick) => new Vector2(joystick.X, joystick.Y);
		Joystick_t8285A98B287E3D3C6E96FC7C72A71DA9F75F27CD L_0 = ___joystick0;
		float L_1 = L_0.___X_0;
		Joystick_t8285A98B287E3D3C6E96FC7C72A71DA9F75F27CD L_2 = ___joystick0;
		float L_3 = L_2.___Y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		return L_4;
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
// System.Boolean TiltFive.T5_ControllerState/Buttons::get_T5()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Buttons_get_T5_m146554F5CC69BD392FEEFF63FFA09C2A820C2763 (Buttons_tBFA5588AD4479B77161E5B2BEFEF859D11E36748* __this, const RuntimeMethod* method) 
{
	{
		// public bool T5 { get => t5; set => t5 = value; }
		T5_Bool_t945CAC2B53F54530B6DEDB6BB7E8C04BCB4970EC L_0 = __this->___t5_0;
		bool L_1;
		L_1 = T5_Bool_op_Implicit_mF773EB75E5E087E34E8A590D27ABCAECDD013C69(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool Buttons_get_T5_m146554F5CC69BD392FEEFF63FFA09C2A820C2763_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Buttons_tBFA5588AD4479B77161E5B2BEFEF859D11E36748* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Buttons_tBFA5588AD4479B77161E5B2BEFEF859D11E36748*>(__this + _offset);
	bool _returnValue;
	_returnValue = Buttons_get_T5_m146554F5CC69BD392FEEFF63FFA09C2A820C2763(_thisAdjusted, method);
	return _returnValue;
}
// System.Void TiltFive.T5_ControllerState/Buttons::set_T5(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buttons_set_T5_m02508C3F416813BCF3D798923613BA7B864FA11C (Buttons_tBFA5588AD4479B77161E5B2BEFEF859D11E36748* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool T5 { get => t5; set => t5 = value; }
		bool L_0 = ___value0;
		T5_Bool_t945CAC2B53F54530B6DEDB6BB7E8C04BCB4970EC L_1;
		L_1 = T5_Bool_op_Implicit_mD69CA4D7BE80D887A6C1CAA6D4E666EF31C99F7D(L_0, NULL);
		__this->___t5_0 = L_1;
		return;
	}
}
IL2CPP_EXTERN_C  void Buttons_set_T5_m02508C3F416813BCF3D798923613BA7B864FA11C_AdjustorThunk (RuntimeObject* __this, bool ___value0, const RuntimeMethod* method)
{
	Buttons_tBFA5588AD4479B77161E5B2BEFEF859D11E36748* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Buttons_tBFA5588AD4479B77161E5B2BEFEF859D11E36748*>(__this + _offset);
	Buttons_set_T5_m02508C3F416813BCF3D798923613BA7B864FA11C(_thisAdjusted, ___value0, method);
}
// System.Boolean TiltFive.T5_ControllerState/Buttons::get_One()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Buttons_get_One_m074636D0E2502F843BD7F198D77CF3B40D782DA1 (Buttons_tBFA5588AD4479B77161E5B2BEFEF859D11E36748* __this, const RuntimeMethod* method) 
{
	{
		// public bool One { get => one; set => one = value; }
		T5_Bool_t945CAC2B53F54530B6DEDB6BB7E8C04BCB4970EC L_0 = __this->___one_1;
		bool L_1;
		L_1 = T5_Bool_op_Implicit_mF773EB75E5E087E34E8A590D27ABCAECDD013C69(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool Buttons_get_One_m074636D0E2502F843BD7F198D77CF3B40D782DA1_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Buttons_tBFA5588AD4479B77161E5B2BEFEF859D11E36748* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Buttons_tBFA5588AD4479B77161E5B2BEFEF859D11E36748*>(__this + _offset);
	bool _returnValue;
	_returnValue = Buttons_get_One_m074636D0E2502F843BD7F198D77CF3B40D782DA1(_thisAdjusted, method);
	return _returnValue;
}
// System.Void TiltFive.T5_ControllerState/Buttons::set_One(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buttons_set_One_mB2B80EF0F89688CCD87DBABA507842814DBF7294 (Buttons_tBFA5588AD4479B77161E5B2BEFEF859D11E36748* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool One { get => one; set => one = value; }
		bool L_0 = ___value0;
		T5_Bool_t945CAC2B53F54530B6DEDB6BB7E8C04BCB4970EC L_1;
		L_1 = T5_Bool_op_Implicit_mD69CA4D7BE80D887A6C1CAA6D4E666EF31C99F7D(L_0, NULL);
		__this->___one_1 = L_1;
		return;
	}
}
IL2CPP_EXTERN_C  void Buttons_set_One_mB2B80EF0F89688CCD87DBABA507842814DBF7294_AdjustorThunk (RuntimeObject* __this, bool ___value0, const RuntimeMethod* method)
{
	Buttons_tBFA5588AD4479B77161E5B2BEFEF859D11E36748* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Buttons_tBFA5588AD4479B77161E5B2BEFEF859D11E36748*>(__this + _offset);
	Buttons_set_One_mB2B80EF0F89688CCD87DBABA507842814DBF7294(_thisAdjusted, ___value0, method);
}
// System.Boolean TiltFive.T5_ControllerState/Buttons::get_Two()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Buttons_get_Two_m8E482CD870E54A472F3904C7D20D3B919ACABEDD (Buttons_tBFA5588AD4479B77161E5B2BEFEF859D11E36748* __this, const RuntimeMethod* method) 
{
	{
		// public bool Two { get => two; set => two = value; }
		T5_Bool_t945CAC2B53F54530B6DEDB6BB7E8C04BCB4970EC L_0 = __this->___two_2;
		bool L_1;
		L_1 = T5_Bool_op_Implicit_mF773EB75E5E087E34E8A590D27ABCAECDD013C69(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool Buttons_get_Two_m8E482CD870E54A472F3904C7D20D3B919ACABEDD_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Buttons_tBFA5588AD4479B77161E5B2BEFEF859D11E36748* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Buttons_tBFA5588AD4479B77161E5B2BEFEF859D11E36748*>(__this + _offset);
	bool _returnValue;
	_returnValue = Buttons_get_Two_m8E482CD870E54A472F3904C7D20D3B919ACABEDD(_thisAdjusted, method);
	return _returnValue;
}
// System.Void TiltFive.T5_ControllerState/Buttons::set_Two(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buttons_set_Two_m5FBA1290A74CA6E4D3DACBD5D1EDD05859B3D8C3 (Buttons_tBFA5588AD4479B77161E5B2BEFEF859D11E36748* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool Two { get => two; set => two = value; }
		bool L_0 = ___value0;
		T5_Bool_t945CAC2B53F54530B6DEDB6BB7E8C04BCB4970EC L_1;
		L_1 = T5_Bool_op_Implicit_mD69CA4D7BE80D887A6C1CAA6D4E666EF31C99F7D(L_0, NULL);
		__this->___two_2 = L_1;
		return;
	}
}
IL2CPP_EXTERN_C  void Buttons_set_Two_m5FBA1290A74CA6E4D3DACBD5D1EDD05859B3D8C3_AdjustorThunk (RuntimeObject* __this, bool ___value0, const RuntimeMethod* method)
{
	Buttons_tBFA5588AD4479B77161E5B2BEFEF859D11E36748* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Buttons_tBFA5588AD4479B77161E5B2BEFEF859D11E36748*>(__this + _offset);
	Buttons_set_Two_m5FBA1290A74CA6E4D3DACBD5D1EDD05859B3D8C3(_thisAdjusted, ___value0, method);
}
// System.Boolean TiltFive.T5_ControllerState/Buttons::get_Three()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Buttons_get_Three_mD3105B15693685E5AD2467EA1A0F44581F0D1786 (Buttons_tBFA5588AD4479B77161E5B2BEFEF859D11E36748* __this, const RuntimeMethod* method) 
{
	{
		// public bool Three { get => three; set => three = value; }
		T5_Bool_t945CAC2B53F54530B6DEDB6BB7E8C04BCB4970EC L_0 = __this->___three_3;
		bool L_1;
		L_1 = T5_Bool_op_Implicit_mF773EB75E5E087E34E8A590D27ABCAECDD013C69(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool Buttons_get_Three_mD3105B15693685E5AD2467EA1A0F44581F0D1786_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Buttons_tBFA5588AD4479B77161E5B2BEFEF859D11E36748* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Buttons_tBFA5588AD4479B77161E5B2BEFEF859D11E36748*>(__this + _offset);
	bool _returnValue;
	_returnValue = Buttons_get_Three_mD3105B15693685E5AD2467EA1A0F44581F0D1786(_thisAdjusted, method);
	return _returnValue;
}
// System.Void TiltFive.T5_ControllerState/Buttons::set_Three(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buttons_set_Three_m9440BF97A9D3C44ECD7F08C98D0786923C69B3DA (Buttons_tBFA5588AD4479B77161E5B2BEFEF859D11E36748* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool Three { get => three; set => three = value; }
		bool L_0 = ___value0;
		T5_Bool_t945CAC2B53F54530B6DEDB6BB7E8C04BCB4970EC L_1;
		L_1 = T5_Bool_op_Implicit_mD69CA4D7BE80D887A6C1CAA6D4E666EF31C99F7D(L_0, NULL);
		__this->___three_3 = L_1;
		return;
	}
}
IL2CPP_EXTERN_C  void Buttons_set_Three_m9440BF97A9D3C44ECD7F08C98D0786923C69B3DA_AdjustorThunk (RuntimeObject* __this, bool ___value0, const RuntimeMethod* method)
{
	Buttons_tBFA5588AD4479B77161E5B2BEFEF859D11E36748* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Buttons_tBFA5588AD4479B77161E5B2BEFEF859D11E36748*>(__this + _offset);
	Buttons_set_Three_m9440BF97A9D3C44ECD7F08C98D0786923C69B3DA(_thisAdjusted, ___value0, method);
}
// System.Boolean TiltFive.T5_ControllerState/Buttons::get_A()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Buttons_get_A_m50F4EE5CB87DC581C1839E7671A93BBD49BE642C (Buttons_tBFA5588AD4479B77161E5B2BEFEF859D11E36748* __this, const RuntimeMethod* method) 
{
	{
		// public bool A { get => a; set => a = value; }
		T5_Bool_t945CAC2B53F54530B6DEDB6BB7E8C04BCB4970EC L_0 = __this->___a_4;
		bool L_1;
		L_1 = T5_Bool_op_Implicit_mF773EB75E5E087E34E8A590D27ABCAECDD013C69(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool Buttons_get_A_m50F4EE5CB87DC581C1839E7671A93BBD49BE642C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Buttons_tBFA5588AD4479B77161E5B2BEFEF859D11E36748* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Buttons_tBFA5588AD4479B77161E5B2BEFEF859D11E36748*>(__this + _offset);
	bool _returnValue;
	_returnValue = Buttons_get_A_m50F4EE5CB87DC581C1839E7671A93BBD49BE642C(_thisAdjusted, method);
	return _returnValue;
}
// System.Void TiltFive.T5_ControllerState/Buttons::set_A(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buttons_set_A_m9794EDD1D9D7453232F6E41B2A3559CF984CF3CB (Buttons_tBFA5588AD4479B77161E5B2BEFEF859D11E36748* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool A { get => a; set => a = value; }
		bool L_0 = ___value0;
		T5_Bool_t945CAC2B53F54530B6DEDB6BB7E8C04BCB4970EC L_1;
		L_1 = T5_Bool_op_Implicit_mD69CA4D7BE80D887A6C1CAA6D4E666EF31C99F7D(L_0, NULL);
		__this->___a_4 = L_1;
		return;
	}
}
IL2CPP_EXTERN_C  void Buttons_set_A_m9794EDD1D9D7453232F6E41B2A3559CF984CF3CB_AdjustorThunk (RuntimeObject* __this, bool ___value0, const RuntimeMethod* method)
{
	Buttons_tBFA5588AD4479B77161E5B2BEFEF859D11E36748* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Buttons_tBFA5588AD4479B77161E5B2BEFEF859D11E36748*>(__this + _offset);
	Buttons_set_A_m9794EDD1D9D7453232F6E41B2A3559CF984CF3CB(_thisAdjusted, ___value0, method);
}
// System.Boolean TiltFive.T5_ControllerState/Buttons::get_B()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Buttons_get_B_mE0B8CEB0826B33EFB23DBA77E5E220A73D74C821 (Buttons_tBFA5588AD4479B77161E5B2BEFEF859D11E36748* __this, const RuntimeMethod* method) 
{
	{
		// public bool B { get => b; set => b = value; }
		T5_Bool_t945CAC2B53F54530B6DEDB6BB7E8C04BCB4970EC L_0 = __this->___b_5;
		bool L_1;
		L_1 = T5_Bool_op_Implicit_mF773EB75E5E087E34E8A590D27ABCAECDD013C69(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool Buttons_get_B_mE0B8CEB0826B33EFB23DBA77E5E220A73D74C821_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Buttons_tBFA5588AD4479B77161E5B2BEFEF859D11E36748* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Buttons_tBFA5588AD4479B77161E5B2BEFEF859D11E36748*>(__this + _offset);
	bool _returnValue;
	_returnValue = Buttons_get_B_mE0B8CEB0826B33EFB23DBA77E5E220A73D74C821(_thisAdjusted, method);
	return _returnValue;
}
// System.Void TiltFive.T5_ControllerState/Buttons::set_B(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buttons_set_B_m20E6FCB7A27893D649BE32CA235D9352C2BE8391 (Buttons_tBFA5588AD4479B77161E5B2BEFEF859D11E36748* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool B { get => b; set => b = value; }
		bool L_0 = ___value0;
		T5_Bool_t945CAC2B53F54530B6DEDB6BB7E8C04BCB4970EC L_1;
		L_1 = T5_Bool_op_Implicit_mD69CA4D7BE80D887A6C1CAA6D4E666EF31C99F7D(L_0, NULL);
		__this->___b_5 = L_1;
		return;
	}
}
IL2CPP_EXTERN_C  void Buttons_set_B_m20E6FCB7A27893D649BE32CA235D9352C2BE8391_AdjustorThunk (RuntimeObject* __this, bool ___value0, const RuntimeMethod* method)
{
	Buttons_tBFA5588AD4479B77161E5B2BEFEF859D11E36748* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Buttons_tBFA5588AD4479B77161E5B2BEFEF859D11E36748*>(__this + _offset);
	Buttons_set_B_m20E6FCB7A27893D649BE32CA235D9352C2BE8391(_thisAdjusted, ___value0, method);
}
// System.Boolean TiltFive.T5_ControllerState/Buttons::get_X()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Buttons_get_X_m75D291E586845E478C1AB757E2625EC70F9519B7 (Buttons_tBFA5588AD4479B77161E5B2BEFEF859D11E36748* __this, const RuntimeMethod* method) 
{
	{
		// public bool X { get => x; set => x = value; }
		T5_Bool_t945CAC2B53F54530B6DEDB6BB7E8C04BCB4970EC L_0 = __this->___x_6;
		bool L_1;
		L_1 = T5_Bool_op_Implicit_mF773EB75E5E087E34E8A590D27ABCAECDD013C69(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool Buttons_get_X_m75D291E586845E478C1AB757E2625EC70F9519B7_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Buttons_tBFA5588AD4479B77161E5B2BEFEF859D11E36748* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Buttons_tBFA5588AD4479B77161E5B2BEFEF859D11E36748*>(__this + _offset);
	bool _returnValue;
	_returnValue = Buttons_get_X_m75D291E586845E478C1AB757E2625EC70F9519B7(_thisAdjusted, method);
	return _returnValue;
}
// System.Void TiltFive.T5_ControllerState/Buttons::set_X(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buttons_set_X_m40D7CF419A7C572FEE113E81BF72F3F08765EB85 (Buttons_tBFA5588AD4479B77161E5B2BEFEF859D11E36748* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool X { get => x; set => x = value; }
		bool L_0 = ___value0;
		T5_Bool_t945CAC2B53F54530B6DEDB6BB7E8C04BCB4970EC L_1;
		L_1 = T5_Bool_op_Implicit_mD69CA4D7BE80D887A6C1CAA6D4E666EF31C99F7D(L_0, NULL);
		__this->___x_6 = L_1;
		return;
	}
}
IL2CPP_EXTERN_C  void Buttons_set_X_m40D7CF419A7C572FEE113E81BF72F3F08765EB85_AdjustorThunk (RuntimeObject* __this, bool ___value0, const RuntimeMethod* method)
{
	Buttons_tBFA5588AD4479B77161E5B2BEFEF859D11E36748* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Buttons_tBFA5588AD4479B77161E5B2BEFEF859D11E36748*>(__this + _offset);
	Buttons_set_X_m40D7CF419A7C572FEE113E81BF72F3F08765EB85(_thisAdjusted, ___value0, method);
}
// System.Boolean TiltFive.T5_ControllerState/Buttons::get_Y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Buttons_get_Y_m5445F758C149078E23E4B8C763918E38BF59EDFD (Buttons_tBFA5588AD4479B77161E5B2BEFEF859D11E36748* __this, const RuntimeMethod* method) 
{
	{
		// public bool Y { get => y; set => y = value; }
		T5_Bool_t945CAC2B53F54530B6DEDB6BB7E8C04BCB4970EC L_0 = __this->___y_7;
		bool L_1;
		L_1 = T5_Bool_op_Implicit_mF773EB75E5E087E34E8A590D27ABCAECDD013C69(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool Buttons_get_Y_m5445F758C149078E23E4B8C763918E38BF59EDFD_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Buttons_tBFA5588AD4479B77161E5B2BEFEF859D11E36748* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Buttons_tBFA5588AD4479B77161E5B2BEFEF859D11E36748*>(__this + _offset);
	bool _returnValue;
	_returnValue = Buttons_get_Y_m5445F758C149078E23E4B8C763918E38BF59EDFD(_thisAdjusted, method);
	return _returnValue;
}
// System.Void TiltFive.T5_ControllerState/Buttons::set_Y(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buttons_set_Y_m2FDB03C46CF9DA0A85DF596B80ED845B39B54AC1 (Buttons_tBFA5588AD4479B77161E5B2BEFEF859D11E36748* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool Y { get => y; set => y = value; }
		bool L_0 = ___value0;
		T5_Bool_t945CAC2B53F54530B6DEDB6BB7E8C04BCB4970EC L_1;
		L_1 = T5_Bool_op_Implicit_mD69CA4D7BE80D887A6C1CAA6D4E666EF31C99F7D(L_0, NULL);
		__this->___y_7 = L_1;
		return;
	}
}
IL2CPP_EXTERN_C  void Buttons_set_Y_m2FDB03C46CF9DA0A85DF596B80ED845B39B54AC1_AdjustorThunk (RuntimeObject* __this, bool ___value0, const RuntimeMethod* method)
{
	Buttons_tBFA5588AD4479B77161E5B2BEFEF859D11E36748* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Buttons_tBFA5588AD4479B77161E5B2BEFEF859D11E36748*>(__this + _offset);
	Buttons_set_Y_m2FDB03C46CF9DA0A85DF596B80ED845B39B54AC1(_thisAdjusted, ___value0, method);
}
// System.Boolean TiltFive.T5_ControllerState/Buttons::get_System()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Buttons_get_System_m39FF6225737382EAE4077805E62A4709C4625E67 (Buttons_tBFA5588AD4479B77161E5B2BEFEF859D11E36748* __this, const RuntimeMethod* method) 
{
	{
		// public bool System => T5;
		bool L_0;
		L_0 = Buttons_get_T5_m146554F5CC69BD392FEEFF63FFA09C2A820C2763(__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool Buttons_get_System_m39FF6225737382EAE4077805E62A4709C4625E67_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Buttons_tBFA5588AD4479B77161E5B2BEFEF859D11E36748* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Buttons_tBFA5588AD4479B77161E5B2BEFEF859D11E36748*>(__this + _offset);
	bool _returnValue;
	_returnValue = Buttons_get_System_m39FF6225737382EAE4077805E62A4709C4625E67(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean TiltFive.T5_ControllerState/Buttons::get_Z()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Buttons_get_Z_m84A5CE0DD01CA3E6BFF2DD6239CE92AE89654FC0 (Buttons_tBFA5588AD4479B77161E5B2BEFEF859D11E36748* __this, const RuntimeMethod* method) 
{
	{
		// public bool Z => Three;
		bool L_0;
		L_0 = Buttons_get_Three_mD3105B15693685E5AD2467EA1A0F44581F0D1786(__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool Buttons_get_Z_m84A5CE0DD01CA3E6BFF2DD6239CE92AE89654FC0_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Buttons_tBFA5588AD4479B77161E5B2BEFEF859D11E36748* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Buttons_tBFA5588AD4479B77161E5B2BEFEF859D11E36748*>(__this + _offset);
	bool _returnValue;
	_returnValue = Buttons_get_Z_m84A5CE0DD01CA3E6BFF2DD6239CE92AE89654FC0(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TiltFive.T5_VCI::.ctor(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void T5_VCI__ctor_m31D0DCFF458E77DC862A07787EF4D2E7BFDCA8F0 (T5_VCI_t08D9548ED8EF4E70DAC79B1B807C3966238728D2* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect0, const RuntimeMethod* method) 
{
	{
		// StartX_VCI = rect.x;
		float L_0;
		L_0 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB((&___rect0), NULL);
		__this->___StartX_VCI_0 = L_0;
		// StartY_VCI = rect.y;
		float L_1;
		L_1 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49((&___rect0), NULL);
		__this->___StartY_VCI_1 = L_1;
		// Width_VCI = rect.width;
		float L_2;
		L_2 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&___rect0), NULL);
		__this->___Width_VCI_2 = L_2;
		// Height_VCI = rect.height;
		float L_3;
		L_3 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&___rect0), NULL);
		__this->___Height_VCI_3 = L_3;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void T5_VCI__ctor_m31D0DCFF458E77DC862A07787EF4D2E7BFDCA8F0_AdjustorThunk (RuntimeObject* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect0, const RuntimeMethod* method)
{
	T5_VCI_t08D9548ED8EF4E70DAC79B1B807C3966238728D2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<T5_VCI_t08D9548ED8EF4E70DAC79B1B807C3966238728D2*>(__this + _offset);
	T5_VCI__ctor_m31D0DCFF458E77DC862A07787EF4D2E7BFDCA8F0(_thisAdjusted, ___rect0, method);
}
// UnityEngine.Rect TiltFive.T5_VCI::op_Implicit(TiltFive.T5_VCI)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D T5_VCI_op_Implicit_mD4E1CCC429289E5449B5FF964BE27D57CCF3C9F2 (T5_VCI_t08D9548ED8EF4E70DAC79B1B807C3966238728D2 ___vci0, const RuntimeMethod* method) 
{
	{
		// => new Rect(vci.StartX_VCI, vci.StartY_VCI, vci.Width_VCI, vci.Height_VCI);
		T5_VCI_t08D9548ED8EF4E70DAC79B1B807C3966238728D2 L_0 = ___vci0;
		float L_1 = L_0.___StartX_VCI_0;
		T5_VCI_t08D9548ED8EF4E70DAC79B1B807C3966238728D2 L_2 = ___vci0;
		float L_3 = L_2.___StartY_VCI_1;
		T5_VCI_t08D9548ED8EF4E70DAC79B1B807C3966238728D2 L_4 = ___vci0;
		float L_5 = L_4.___Width_VCI_2;
		T5_VCI_t08D9548ED8EF4E70DAC79B1B807C3966238728D2 L_6 = ___vci0;
		float L_7 = L_6.___Height_VCI_3;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_8;
		memset((&L_8), 0, sizeof(L_8));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_8), L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// TiltFive.T5_VCI TiltFive.T5_VCI::op_Implicit(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR T5_VCI_t08D9548ED8EF4E70DAC79B1B807C3966238728D2 T5_VCI_op_Implicit_m83BA6F202FB7EE346CA7079C3319AA82566175CF (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect0, const RuntimeMethod* method) 
{
	{
		// public static implicit operator T5_VCI(Rect rect) => new T5_VCI(rect);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_0 = ___rect0;
		T5_VCI_t08D9548ED8EF4E70DAC79B1B807C3966238728D2 L_1;
		memset((&L_1), 0, sizeof(L_1));
		T5_VCI__ctor_m31D0DCFF458E77DC862A07787EF4D2E7BFDCA8F0((&L_1), L_0, /*hidden argument*/NULL);
		return L_1;
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
// System.Boolean TiltFive.T5_FrameInfo::get_IsSrgb()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool T5_FrameInfo_get_IsSrgb_mD8655B3B4B24E571249C3B5CE510C2FF139FEBEF (T5_FrameInfo_t7F613E6396304E74C09C56EA80815A7E37AFF041* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsSrgb { get => isSrgb; set => isSrgb = value; }
		T5_Bool_t945CAC2B53F54530B6DEDB6BB7E8C04BCB4970EC L_0 = __this->___isSrgb_4;
		bool L_1;
		L_1 = T5_Bool_op_Implicit_mF773EB75E5E087E34E8A590D27ABCAECDD013C69(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool T5_FrameInfo_get_IsSrgb_mD8655B3B4B24E571249C3B5CE510C2FF139FEBEF_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	T5_FrameInfo_t7F613E6396304E74C09C56EA80815A7E37AFF041* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<T5_FrameInfo_t7F613E6396304E74C09C56EA80815A7E37AFF041*>(__this + _offset);
	bool _returnValue;
	_returnValue = T5_FrameInfo_get_IsSrgb_mD8655B3B4B24E571249C3B5CE510C2FF139FEBEF(_thisAdjusted, method);
	return _returnValue;
}
// System.Void TiltFive.T5_FrameInfo::set_IsSrgb(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void T5_FrameInfo_set_IsSrgb_m0AC22AE2E1BAC0215726C614A0B95E17584212D4 (T5_FrameInfo_t7F613E6396304E74C09C56EA80815A7E37AFF041* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool IsSrgb { get => isSrgb; set => isSrgb = value; }
		bool L_0 = ___value0;
		T5_Bool_t945CAC2B53F54530B6DEDB6BB7E8C04BCB4970EC L_1;
		L_1 = T5_Bool_op_Implicit_mD69CA4D7BE80D887A6C1CAA6D4E666EF31C99F7D(L_0, NULL);
		__this->___isSrgb_4 = L_1;
		return;
	}
}
IL2CPP_EXTERN_C  void T5_FrameInfo_set_IsSrgb_m0AC22AE2E1BAC0215726C614A0B95E17584212D4_AdjustorThunk (RuntimeObject* __this, bool ___value0, const RuntimeMethod* method)
{
	T5_FrameInfo_t7F613E6396304E74C09C56EA80815A7E37AFF041* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<T5_FrameInfo_t7F613E6396304E74C09C56EA80815A7E37AFF041*>(__this + _offset);
	T5_FrameInfo_set_IsSrgb_m0AC22AE2E1BAC0215726C614A0B95E17584212D4(_thisAdjusted, ___value0, method);
}
// System.Boolean TiltFive.T5_FrameInfo::get_IsUpsideDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool T5_FrameInfo_get_IsUpsideDown_mF121F29CFDE9754770ADF0D5AEFDB9B1C82345CB (T5_FrameInfo_t7F613E6396304E74C09C56EA80815A7E37AFF041* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsUpsideDown { get => isUpsideDown; set => isUpsideDown = value; }
		T5_Bool_t945CAC2B53F54530B6DEDB6BB7E8C04BCB4970EC L_0 = __this->___isUpsideDown_5;
		bool L_1;
		L_1 = T5_Bool_op_Implicit_mF773EB75E5E087E34E8A590D27ABCAECDD013C69(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool T5_FrameInfo_get_IsUpsideDown_mF121F29CFDE9754770ADF0D5AEFDB9B1C82345CB_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	T5_FrameInfo_t7F613E6396304E74C09C56EA80815A7E37AFF041* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<T5_FrameInfo_t7F613E6396304E74C09C56EA80815A7E37AFF041*>(__this + _offset);
	bool _returnValue;
	_returnValue = T5_FrameInfo_get_IsUpsideDown_mF121F29CFDE9754770ADF0D5AEFDB9B1C82345CB(_thisAdjusted, method);
	return _returnValue;
}
// System.Void TiltFive.T5_FrameInfo::set_IsUpsideDown(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void T5_FrameInfo_set_IsUpsideDown_m1D7053D60340A02DCF04F8AD2A058E2EADF95E4C (T5_FrameInfo_t7F613E6396304E74C09C56EA80815A7E37AFF041* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool IsUpsideDown { get => isUpsideDown; set => isUpsideDown = value; }
		bool L_0 = ___value0;
		T5_Bool_t945CAC2B53F54530B6DEDB6BB7E8C04BCB4970EC L_1;
		L_1 = T5_Bool_op_Implicit_mD69CA4D7BE80D887A6C1CAA6D4E666EF31C99F7D(L_0, NULL);
		__this->___isUpsideDown_5 = L_1;
		return;
	}
}
IL2CPP_EXTERN_C  void T5_FrameInfo_set_IsUpsideDown_m1D7053D60340A02DCF04F8AD2A058E2EADF95E4C_AdjustorThunk (RuntimeObject* __this, bool ___value0, const RuntimeMethod* method)
{
	T5_FrameInfo_t7F613E6396304E74C09C56EA80815A7E37AFF041* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<T5_FrameInfo_t7F613E6396304E74C09C56EA80815A7E37AFF041*>(__this + _offset);
	T5_FrameInfo_set_IsUpsideDown_m1D7053D60340A02DCF04F8AD2A058E2EADF95E4C(_thisAdjusted, ___value0, method);
}
// UnityEngine.Rect TiltFive.T5_FrameInfo::get_VCI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D T5_FrameInfo_get_VCI_mDD9F9489122AE32812FE4D0D0560A190BA3D453C (T5_FrameInfo_t7F613E6396304E74C09C56EA80815A7E37AFF041* __this, const RuntimeMethod* method) 
{
	{
		// public Rect VCI { get => vci; set => vci = value; }
		T5_VCI_t08D9548ED8EF4E70DAC79B1B807C3966238728D2 L_0 = __this->___vci_6;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_1;
		L_1 = T5_VCI_op_Implicit_mD4E1CCC429289E5449B5FF964BE27D57CCF3C9F2(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D T5_FrameInfo_get_VCI_mDD9F9489122AE32812FE4D0D0560A190BA3D453C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	T5_FrameInfo_t7F613E6396304E74C09C56EA80815A7E37AFF041* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<T5_FrameInfo_t7F613E6396304E74C09C56EA80815A7E37AFF041*>(__this + _offset);
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D _returnValue;
	_returnValue = T5_FrameInfo_get_VCI_mDD9F9489122AE32812FE4D0D0560A190BA3D453C(_thisAdjusted, method);
	return _returnValue;
}
// System.Void TiltFive.T5_FrameInfo::set_VCI(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void T5_FrameInfo_set_VCI_m3978F2B37AD1A924FBFE49F68336057BDC2B88EE (T5_FrameInfo_t7F613E6396304E74C09C56EA80815A7E37AFF041* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___value0, const RuntimeMethod* method) 
{
	{
		// public Rect VCI { get => vci; set => vci = value; }
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_0 = ___value0;
		T5_VCI_t08D9548ED8EF4E70DAC79B1B807C3966238728D2 L_1;
		L_1 = T5_VCI_op_Implicit_m83BA6F202FB7EE346CA7079C3319AA82566175CF(L_0, NULL);
		__this->___vci_6 = L_1;
		return;
	}
}
IL2CPP_EXTERN_C  void T5_FrameInfo_set_VCI_m3978F2B37AD1A924FBFE49F68336057BDC2B88EE_AdjustorThunk (RuntimeObject* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___value0, const RuntimeMethod* method)
{
	T5_FrameInfo_t7F613E6396304E74C09C56EA80815A7E37AFF041* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<T5_FrameInfo_t7F613E6396304E74C09C56EA80815A7E37AFF041*>(__this + _offset);
	T5_FrameInfo_set_VCI_m3978F2B37AD1A924FBFE49F68336057BDC2B88EE(_thisAdjusted, ___value0, method);
}
// UnityEngine.Quaternion TiltFive.T5_FrameInfo::get_RotToLVC_GBD()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 T5_FrameInfo_get_RotToLVC_GBD_m061CA46B47616708BC8D83B4D3AFE271512A7F9B (T5_FrameInfo_t7F613E6396304E74C09C56EA80815A7E37AFF041* __this, const RuntimeMethod* method) 
{
	{
		// public Quaternion RotToLVC_GBD { get => rotToLVC_GBD; set => rotToLVC_GBD = value; }
		T5_Rotation_t7B915578461682541D830D5F9B768E810A69858C L_0 = __this->___rotToLVC_GBD_7;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = T5_Rotation_op_Implicit_m7DD8FE02F35ACE1E8681D867AE8699D7C4E7AB8C(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 T5_FrameInfo_get_RotToLVC_GBD_m061CA46B47616708BC8D83B4D3AFE271512A7F9B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	T5_FrameInfo_t7F613E6396304E74C09C56EA80815A7E37AFF041* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<T5_FrameInfo_t7F613E6396304E74C09C56EA80815A7E37AFF041*>(__this + _offset);
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 _returnValue;
	_returnValue = T5_FrameInfo_get_RotToLVC_GBD_m061CA46B47616708BC8D83B4D3AFE271512A7F9B(_thisAdjusted, method);
	return _returnValue;
}
// System.Void TiltFive.T5_FrameInfo::set_RotToLVC_GBD(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void T5_FrameInfo_set_RotToLVC_GBD_m3A8B1DE49189AC76AC49AA7CED5F6CD6E9F48917 (T5_FrameInfo_t7F613E6396304E74C09C56EA80815A7E37AFF041* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) 
{
	{
		// public Quaternion RotToLVC_GBD { get => rotToLVC_GBD; set => rotToLVC_GBD = value; }
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___value0;
		T5_Rotation_t7B915578461682541D830D5F9B768E810A69858C L_1;
		L_1 = T5_Rotation_op_Implicit_m99D0D734EEE3A5A4AEC85E86B3601E0A3A1CAB7A(L_0, NULL);
		__this->___rotToLVC_GBD_7 = L_1;
		return;
	}
}
IL2CPP_EXTERN_C  void T5_FrameInfo_set_RotToLVC_GBD_m3A8B1DE49189AC76AC49AA7CED5F6CD6E9F48917_AdjustorThunk (RuntimeObject* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method)
{
	T5_FrameInfo_t7F613E6396304E74C09C56EA80815A7E37AFF041* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<T5_FrameInfo_t7F613E6396304E74C09C56EA80815A7E37AFF041*>(__this + _offset);
	T5_FrameInfo_set_RotToLVC_GBD_m3A8B1DE49189AC76AC49AA7CED5F6CD6E9F48917(_thisAdjusted, ___value0, method);
}
// UnityEngine.Vector3 TiltFive.T5_FrameInfo::get_PosOfLVC_GBD()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 T5_FrameInfo_get_PosOfLVC_GBD_m90B9DE6D86796F8532E1AD78BD363E21E454F74C (T5_FrameInfo_t7F613E6396304E74C09C56EA80815A7E37AFF041* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 PosOfLVC_GBD { get => posOfLVC_GBD; set => posOfLVC_GBD = value; }
		T5_Position_t2E1BC0E85C3007B562F87C2A8D0B62CA83D5213D L_0 = __this->___posOfLVC_GBD_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = T5_Position_op_Implicit_m9D5047F3EB48CC3F1FBAEA61D5FBD9AB430559C7(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 T5_FrameInfo_get_PosOfLVC_GBD_m90B9DE6D86796F8532E1AD78BD363E21E454F74C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	T5_FrameInfo_t7F613E6396304E74C09C56EA80815A7E37AFF041* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<T5_FrameInfo_t7F613E6396304E74C09C56EA80815A7E37AFF041*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = T5_FrameInfo_get_PosOfLVC_GBD_m90B9DE6D86796F8532E1AD78BD363E21E454F74C(_thisAdjusted, method);
	return _returnValue;
}
// System.Void TiltFive.T5_FrameInfo::set_PosOfLVC_GBD(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void T5_FrameInfo_set_PosOfLVC_GBD_m4ED417FC1886AEDB37D953AD468C9F80AC977B94 (T5_FrameInfo_t7F613E6396304E74C09C56EA80815A7E37AFF041* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector3 PosOfLVC_GBD { get => posOfLVC_GBD; set => posOfLVC_GBD = value; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		T5_Position_t2E1BC0E85C3007B562F87C2A8D0B62CA83D5213D L_1;
		L_1 = T5_Position_op_Implicit_mEC7EC466D3839205E1F21EF23F9A495654CCC653(L_0, NULL);
		__this->___posOfLVC_GBD_8 = L_1;
		return;
	}
}
IL2CPP_EXTERN_C  void T5_FrameInfo_set_PosOfLVC_GBD_m4ED417FC1886AEDB37D953AD468C9F80AC977B94_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method)
{
	T5_FrameInfo_t7F613E6396304E74C09C56EA80815A7E37AFF041* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<T5_FrameInfo_t7F613E6396304E74C09C56EA80815A7E37AFF041*>(__this + _offset);
	T5_FrameInfo_set_PosOfLVC_GBD_m4ED417FC1886AEDB37D953AD468C9F80AC977B94(_thisAdjusted, ___value0, method);
}
// UnityEngine.Quaternion TiltFive.T5_FrameInfo::get_RotToRVC_GBD()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 T5_FrameInfo_get_RotToRVC_GBD_m14CE41DF049A0C1457F8FDA254F5C0CE8210B185 (T5_FrameInfo_t7F613E6396304E74C09C56EA80815A7E37AFF041* __this, const RuntimeMethod* method) 
{
	{
		// public Quaternion RotToRVC_GBD { get => rotToRVC_GBD; set => rotToRVC_GBD = value; }
		T5_Rotation_t7B915578461682541D830D5F9B768E810A69858C L_0 = __this->___rotToRVC_GBD_9;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = T5_Rotation_op_Implicit_m7DD8FE02F35ACE1E8681D867AE8699D7C4E7AB8C(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 T5_FrameInfo_get_RotToRVC_GBD_m14CE41DF049A0C1457F8FDA254F5C0CE8210B185_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	T5_FrameInfo_t7F613E6396304E74C09C56EA80815A7E37AFF041* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<T5_FrameInfo_t7F613E6396304E74C09C56EA80815A7E37AFF041*>(__this + _offset);
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 _returnValue;
	_returnValue = T5_FrameInfo_get_RotToRVC_GBD_m14CE41DF049A0C1457F8FDA254F5C0CE8210B185(_thisAdjusted, method);
	return _returnValue;
}
// System.Void TiltFive.T5_FrameInfo::set_RotToRVC_GBD(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void T5_FrameInfo_set_RotToRVC_GBD_m7065C3A18184B4A38892EEE24E3393A88E366904 (T5_FrameInfo_t7F613E6396304E74C09C56EA80815A7E37AFF041* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) 
{
	{
		// public Quaternion RotToRVC_GBD { get => rotToRVC_GBD; set => rotToRVC_GBD = value; }
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___value0;
		T5_Rotation_t7B915578461682541D830D5F9B768E810A69858C L_1;
		L_1 = T5_Rotation_op_Implicit_m99D0D734EEE3A5A4AEC85E86B3601E0A3A1CAB7A(L_0, NULL);
		__this->___rotToRVC_GBD_9 = L_1;
		return;
	}
}
IL2CPP_EXTERN_C  void T5_FrameInfo_set_RotToRVC_GBD_m7065C3A18184B4A38892EEE24E3393A88E366904_AdjustorThunk (RuntimeObject* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method)
{
	T5_FrameInfo_t7F613E6396304E74C09C56EA80815A7E37AFF041* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<T5_FrameInfo_t7F613E6396304E74C09C56EA80815A7E37AFF041*>(__this + _offset);
	T5_FrameInfo_set_RotToRVC_GBD_m7065C3A18184B4A38892EEE24E3393A88E366904(_thisAdjusted, ___value0, method);
}
// UnityEngine.Vector3 TiltFive.T5_FrameInfo::get_PosOfRVC_GBD()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 T5_FrameInfo_get_PosOfRVC_GBD_m0693D3A079658E99910CCA508ADD247D6938C604 (T5_FrameInfo_t7F613E6396304E74C09C56EA80815A7E37AFF041* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 PosOfRVC_GBD { get => posOfRVC_GBD; set => posOfRVC_GBD = value; }
		T5_Position_t2E1BC0E85C3007B562F87C2A8D0B62CA83D5213D L_0 = __this->___posOfRVC_GBD_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = T5_Position_op_Implicit_m9D5047F3EB48CC3F1FBAEA61D5FBD9AB430559C7(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 T5_FrameInfo_get_PosOfRVC_GBD_m0693D3A079658E99910CCA508ADD247D6938C604_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	T5_FrameInfo_t7F613E6396304E74C09C56EA80815A7E37AFF041* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<T5_FrameInfo_t7F613E6396304E74C09C56EA80815A7E37AFF041*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = T5_FrameInfo_get_PosOfRVC_GBD_m0693D3A079658E99910CCA508ADD247D6938C604(_thisAdjusted, method);
	return _returnValue;
}
// System.Void TiltFive.T5_FrameInfo::set_PosOfRVC_GBD(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void T5_FrameInfo_set_PosOfRVC_GBD_m1D2A4A86DC3504535431F299F9253FC24E016371 (T5_FrameInfo_t7F613E6396304E74C09C56EA80815A7E37AFF041* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector3 PosOfRVC_GBD { get => posOfRVC_GBD; set => posOfRVC_GBD = value; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		T5_Position_t2E1BC0E85C3007B562F87C2A8D0B62CA83D5213D L_1;
		L_1 = T5_Position_op_Implicit_mEC7EC466D3839205E1F21EF23F9A495654CCC653(L_0, NULL);
		__this->___posOfRVC_GBD_10 = L_1;
		return;
	}
}
IL2CPP_EXTERN_C  void T5_FrameInfo_set_PosOfRVC_GBD_m1D2A4A86DC3504535431F299F9253FC24E016371_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method)
{
	T5_FrameInfo_t7F613E6396304E74C09C56EA80815A7E37AFF041* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<T5_FrameInfo_t7F613E6396304E74C09C56EA80815A7E37AFF041*>(__this + _offset);
	T5_FrameInfo_set_PosOfRVC_GBD_m1D2A4A86DC3504535431F299F9253FC24E016371(_thisAdjusted, ___value0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TiltFive.T5_StringUTF8::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void T5_StringUTF8__ctor_m82FBE3D8D8F842F5725C28C956DC3B8953D2358E (T5_StringUTF8_t8AC81068B24B238DB0858B6081E88E9C67B549B2* __this, String_t* ___text0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		// pStringBytesUTF8 = IntPtr.Zero;
		__this->___pStringBytesUTF8_2 = (0);
		// length = 0;
		__this->___length_1 = 0;
		// maxBufferSize = 16 * 1024;
		__this->___maxBufferSize_0 = ((int32_t)16384);
		// if (text != null)
		String_t* L_0 = ___text0;
		if (!L_0)
		{
			goto IL_0067;
		}
	}
	{
		// byte[] textBytesUTF8 = System.Text.Encoding.UTF8.GetBytes(text);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_1;
		L_1 = Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336(NULL);
		String_t* L_2 = ___text0;
		NullCheck(L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(20 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_1, L_2);
		V_0 = L_3;
		// length = (UInt32)Math.Min(textBytesUTF8.Length, maxBufferSize);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		NullCheck(L_4);
		uint32_t L_5 = __this->___maxBufferSize_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int64_t L_6;
		L_6 = Math_Min_m5721B54E3DBEE8C9FC599B1561D098235B11EE81(((int64_t)((int32_t)(((RuntimeArray*)L_4)->max_length))), ((int64_t)(uint64_t)L_5), NULL);
		__this->___length_1 = ((int32_t)(uint32_t)L_6);
		// pStringBytesUTF8 = Marshal.AllocHGlobal((int)maxBufferSize);
		uint32_t L_7 = __this->___maxBufferSize_0;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		intptr_t L_8;
		L_8 = Marshal_AllocHGlobal_m0187620AAB78B85416CE4C948B60B6A76CA84CAC(L_7, NULL);
		__this->___pStringBytesUTF8_2 = L_8;
		// Marshal.Copy(textBytesUTF8, 0, pStringBytesUTF8, (int)length);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_0;
		intptr_t L_10 = __this->___pStringBytesUTF8_2;
		uint32_t L_11 = __this->___length_1;
		Marshal_Copy_mB1CECEA99856A7296FF33D2C9C51CC7E7150E5F8(L_9, 0, L_10, L_11, NULL);
	}

IL_0067:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void T5_StringUTF8__ctor_m82FBE3D8D8F842F5725C28C956DC3B8953D2358E_AdjustorThunk (RuntimeObject* __this, String_t* ___text0, const RuntimeMethod* method)
{
	T5_StringUTF8_t8AC81068B24B238DB0858B6081E88E9C67B549B2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<T5_StringUTF8_t8AC81068B24B238DB0858B6081E88E9C67B549B2*>(__this + _offset);
	T5_StringUTF8__ctor_m82FBE3D8D8F842F5725C28C956DC3B8953D2358E(_thisAdjusted, ___text0, method);
}
// System.String TiltFive.T5_StringUTF8::op_Implicit(TiltFive.T5_StringUTF8)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* T5_StringUTF8_op_Implicit_mC5F2D661832C37F3A7320043A2C916EF39BED179 (T5_StringUTF8_t8AC81068B24B238DB0858B6081E88E9C67B549B2 ___t5_StringUTF80, const RuntimeMethod* method) 
{
	{
		// => ToString(t5_StringUTF8);
		T5_StringUTF8_t8AC81068B24B238DB0858B6081E88E9C67B549B2 L_0 = ___t5_StringUTF80;
		String_t* L_1;
		L_1 = T5_StringUTF8_ToString_m47702A081ED08862D5504B46FFFDC0A26BC0216B(L_0, NULL);
		return L_1;
	}
}
// TiltFive.T5_StringUTF8 TiltFive.T5_StringUTF8::op_Implicit(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR T5_StringUTF8_t8AC81068B24B238DB0858B6081E88E9C67B549B2 T5_StringUTF8_op_Implicit_m45088BAC0DB1CEE31F98A0BC83E7752D4801D66D (String_t* ___text0, const RuntimeMethod* method) 
{
	{
		// public static implicit operator T5_StringUTF8(string text) => new T5_StringUTF8(text);
		String_t* L_0 = ___text0;
		T5_StringUTF8_t8AC81068B24B238DB0858B6081E88E9C67B549B2 L_1;
		memset((&L_1), 0, sizeof(L_1));
		T5_StringUTF8__ctor_m82FBE3D8D8F842F5725C28C956DC3B8953D2358E((&L_1), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String TiltFive.T5_StringUTF8::ToString(TiltFive.T5_StringUTF8)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* T5_StringUTF8_ToString_m47702A081ED08862D5504B46FFFDC0A26BC0216B (T5_StringUTF8_t8AC81068B24B238DB0858B6081E88E9C67B549B2 ___t5_StringUTF80, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	String_t* V_1 = NULL;
	Exception_t* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (t5_StringUTF8.pStringBytesUTF8 == IntPtr.Zero)
		T5_StringUTF8_t8AC81068B24B238DB0858B6081E88E9C67B549B2 L_0 = ___t5_StringUTF80;
		intptr_t L_1 = L_0.___pStringBytesUTF8_2;
		bool L_2;
		L_2 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_1, (0), NULL);
		if (!L_2)
		{
			goto IL_0014;
		}
	}
	{
		// return null;
		return (String_t*)NULL;
	}

IL_0014:
	{
		// var managedBytes = new byte[t5_StringUTF8.length];
		T5_StringUTF8_t8AC81068B24B238DB0858B6081E88E9C67B549B2 L_3 = ___t5_StringUTF80;
		uint32_t L_4 = L_3.___length_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_4);
		V_0 = L_5;
	}
	try
	{// begin try (depth: 1)
		// Marshal.Copy(t5_StringUTF8.pStringBytesUTF8, managedBytes, 0, (int)t5_StringUTF8.length);
		T5_StringUTF8_t8AC81068B24B238DB0858B6081E88E9C67B549B2 L_6 = ___t5_StringUTF80;
		intptr_t L_7 = L_6.___pStringBytesUTF8_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_0;
		T5_StringUTF8_t8AC81068B24B238DB0858B6081E88E9C67B549B2 L_9 = ___t5_StringUTF80;
		uint32_t L_10 = L_9.___length_1;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_Copy_m92700C9E60BAB2FDAF6CE02C16EFE9DCB7D6035E(L_7, L_8, 0, L_10, NULL);
		// return System.Text.Encoding.UTF8.GetString(managedBytes);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_11;
		L_11 = Encoding_get_UTF8_m9700ADA8E0F244002B2A89B483F1B2133B8FE336(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_0;
		NullCheck(L_11);
		String_t* L_13;
		L_13 = VirtualFuncInvoker1< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(36 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_11, L_12);
		V_1 = L_13;
		goto IL_0056;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0041;
		}
		throw e;
	}

CATCH_0041:
	{// begin catch(System.Exception)
		// catch (Exception e)
		V_2 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// Debug.LogError($"Failed to copy string from unmanaged memory: {e}");
		Exception_t* L_14 = V_2;
		String_t* L_15;
		L_15 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral864B99F55B7761868BAEBF5A582FC35FD1A4FE4B)), L_14, NULL);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(L_15, NULL);
		// return null;
		V_1 = (String_t*)NULL;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0056;
	}// end catch (depth: 1)

IL_0056:
	{
		// }
		String_t* L_16 = V_1;
		return L_16;
	}
}
// System.Void TiltFive.T5_StringUTF8::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void T5_StringUTF8_Dispose_m453ABFC5D1BAB64547C8D544E5698F634880DB2D (T5_StringUTF8_t8AC81068B24B238DB0858B6081E88E9C67B549B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Marshal.FreeHGlobal(pStringBytesUTF8);
		intptr_t L_0 = __this->___pStringBytesUTF8_2;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_FreeHGlobal_m691596E1E19CB74918F8FF871A05E4BE80748BCC(L_0, NULL);
		// pStringBytesUTF8 = IntPtr.Zero;
		__this->___pStringBytesUTF8_2 = (0);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void T5_StringUTF8_Dispose_m453ABFC5D1BAB64547C8D544E5698F634880DB2D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	T5_StringUTF8_t8AC81068B24B238DB0858B6081E88E9C67B549B2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<T5_StringUTF8_t8AC81068B24B238DB0858B6081E88E9C67B549B2*>(__this + _offset);
	T5_StringUTF8_Dispose_m453ABFC5D1BAB64547C8D544E5698F634880DB2D(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TiltFive.T5_GameboardSize::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void T5_GameboardSize__ctor_m0D166A8DAEF8997808AA836C31DE4DCF3CEE56E7 (T5_GameboardSize_t9C51DF0242ED80239B303B755A4B5F7AB67B846A* __this, float ___playableSpaceX0, float ___playableSpaceY1, float ___borderWidth2, const RuntimeMethod* method) 
{
	{
		// PlayableSpaceX = playableSpaceX;
		float L_0 = ___playableSpaceX0;
		__this->___PlayableSpaceX_0 = L_0;
		// PlayableSpaceY = playableSpaceY;
		float L_1 = ___playableSpaceY1;
		__this->___PlayableSpaceY_1 = L_1;
		// BorderWidth = borderWidth;
		float L_2 = ___borderWidth2;
		__this->___BorderWidth_2 = L_2;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void T5_GameboardSize__ctor_m0D166A8DAEF8997808AA836C31DE4DCF3CEE56E7_AdjustorThunk (RuntimeObject* __this, float ___playableSpaceX0, float ___playableSpaceY1, float ___borderWidth2, const RuntimeMethod* method)
{
	T5_GameboardSize_t9C51DF0242ED80239B303B755A4B5F7AB67B846A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<T5_GameboardSize_t9C51DF0242ED80239B303B755A4B5F7AB67B846A*>(__this + _offset);
	T5_GameboardSize__ctor_m0D166A8DAEF8997808AA836C31DE4DCF3CEE56E7(_thisAdjusted, ___playableSpaceX0, ___playableSpaceY1, ___borderWidth2, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}

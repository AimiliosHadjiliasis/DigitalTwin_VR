#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2, T3* p3)
	{
		void* params[3] = { &p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2, T3*, T4*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3, T4* p4)
	{
		void* params[4] = { p1, &p2, p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/Processor/ProcessFunction>
struct Dictionary_2_t7B93365370466FE4082FCBCD182F556A83D94328;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/Processor/ProcessFunction>
struct KeyCollection_t2562DDB2C4C440A88EF65BC353C4953724180DBD;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/Processor/ProcessFunction>
struct ValueCollection_tD4B0EDEF9BDFB776F0826AE53C53FDE250D868EE;
// System.Collections.Generic.Dictionary`2/Entry<System.String,BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/Processor/ProcessFunction>[]
struct EntryU5BU5D_tF011CCBD394503E5F4238D69742671C8F0CCBA4B;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// Thrift.Proxy.ClientProxy
struct ClientProxy_tCAB2A9A0BF231DDF8E4924E77E1208C917FC0718;
// Thrift.Proxy.ClientProxyFuncList
struct ClientProxyFuncList_t9D7A8DFD8A81C9096177B8D5A6EE78D255A5A543;
// System.ConsoleCancelEventHandler
struct ConsoleCancelEventHandler_t7E25E018B7944F60BD34AE7F32E119F34DCEA053;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// Thrift.Proxy.HandlerProxy
struct HandlerProxy_t50A5848626A14999C5ECC9A1DF765110BC836E16;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// BlueprintReality.Thrift.Pose
struct Pose_t56F6B800CDF4F0273D46059BF45307D69B3F62C3;
// BlueprintReality.Thrift.Quaternion
struct Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// BlueprintReality.Thrift.SharedTextures.SharedTex
struct SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976;
// BlueprintReality.Thrift.SharedTextures.SharedTexPacket
struct SharedTexPacket_t06FC19BA6F5C2223EECB4BF1BE34A8360027D77A;
// BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication
struct SharedTextureCommunication_tD3182824E24A1E8B3808CF804E1FE611AA1AB07F;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// Thrift.TApplicationException
struct TApplicationException_t75465AADA2A50020180483E1F89A83530AD60F76;
// Thrift.Protocol.TProtocol
struct TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1;
// Thrift.Protocol.TProtocolException
struct TProtocolException_t69B81CDFF3E6D584BC54665AB6BAD9593BC21996;
// Thrift.Transport.TTransport
struct TTransport_tC5405D0CBA5B6B81DF71447B64F47F76B45C6A53;
// Thrift.Transport.TTransportException
struct TTransportException_t7BA88D1856162445F81B5F26DB19EE932E6AAF4B;
// System.IO.TextReader
struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7;
// System.IO.TextWriter
struct TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3;
// Thrift.Proxy.ThriftClientProxy
struct ThriftClientProxy_t4F7653DE6E5210BC005CA0FE2F734E635558EC56;
// Thrift.Proxy.ThriftHandlerProxy
struct ThriftHandlerProxy_tAD43194A917E6B0221966CCAB84E3EAABB82B7A9;
// BlueprintReality.Thrift.Vector3
struct Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55;
// BlueprintReality.MixCast.Shared.VideoInput
struct VideoInput_tBCABAFE80056975164CAF3CE7E52DABA81AE3BCB;
// BlueprintReality.MixCast.Shared.Viewfinder
struct Viewfinder_t843542A36830CBE3231029C0C271BD459E15CB86;
// BlueprintReality.MixCast.Shared.VirtualCamera
struct VirtualCamera_tE3BDC17FDEBF36E1926300A209225F859FB31C1B;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/Client
struct Client_t68F64069A7A7D460F7158797D2F5C0C22676FFA6;
// BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/Handler
struct Handler_tB89C973D453690A6B464CB04BF66AB42906A9C57;
// BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/ISyncServer
struct ISyncServer_tD755993A2D6A231AA78570C2CEE0E0F868302A06;
// BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/Processor
struct Processor_t149BF9A522E68ECC976019AC885916305DADB24E;
// BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/SharedTextureNotify_args
struct SharedTextureNotify_args_t0EBD41B2A9EFE8C795E976A11ED2D89278821EF9;
// BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/SharedTextureNotify_result
struct SharedTextureNotify_result_t773233FF03B1FFB18E8EA55F4632A79916885CE7;
// BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/SharedTextureRequest_args
struct SharedTextureRequest_args_tD5AE63605C74E527A24E126E22DAFFB08F81D4B7;
// BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/SharedTextureRequest_result
struct SharedTextureRequest_result_tF57E540E873EE83BE065ED81A2313266C8AD1961;
// BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/validate_function_list_args
struct validate_function_list_args_t63D913089E5FFB666F13DFA7CB2DA5B2C9573075;
// BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/validate_function_list_result
struct validate_function_list_result_tEA96B244E3A94307177B3D8736902272FDCE0944;
// BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/validate_ping_args
struct validate_ping_args_t14208A7DFB4229A49964DD8F10489711F552E9DE;
// BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/validate_ping_result
struct validate_ping_result_t0CBE71D3C54F5CABE445DD8EAD534613297BB0C0;
// BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/Processor/ProcessFunction
struct ProcessFunction_t6587BCE70A9CECF27480919C464CD9C54E2DD0DB;

IL2CPP_EXTERN_C RuntimeClass* Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t7B93365370466FE4082FCBCD182F556A83D94328_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HandlerProxy_t50A5848626A14999C5ECC9A1DF765110BC836E16_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ProcessFunction_t6587BCE70A9CECF27480919C464CD9C54E2DD0DB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SharedTextureNotify_args_t0EBD41B2A9EFE8C795E976A11ED2D89278821EF9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SharedTextureNotify_result_t773233FF03B1FFB18E8EA55F4632A79916885CE7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SharedTextureRequest_args_tD5AE63605C74E527A24E126E22DAFFB08F81D4B7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SharedTextureRequest_result_tF57E540E873EE83BE065ED81A2313266C8AD1961_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TApplicationException_t75465AADA2A50020180483E1F89A83530AD60F76_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TProtocolException_t69B81CDFF3E6D584BC54665AB6BAD9593BC21996_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TTransportException_t7BA88D1856162445F81B5F26DB19EE932E6AAF4B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* validate_function_list_args_t63D913089E5FFB666F13DFA7CB2DA5B2C9573075_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* validate_function_list_result_tEA96B244E3A94307177B3D8736902272FDCE0944_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* validate_ping_args_t14208A7DFB4229A49964DD8F10489711F552E9DE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* validate_ping_result_t0CBE71D3C54F5CABE445DD8EAD534613297BB0C0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0037EC0B3611F69BD86975EE4CBEBAD1DCBDEA27;
IL2CPP_EXTERN_C String_t* _stringLiteral00B8A49A0353D350D3914D9B4B8223F51C1CB133;
IL2CPP_EXTERN_C String_t* _stringLiteral021ECB09148009B3A8AF2A7A3EB51DFEDC217B16;
IL2CPP_EXTERN_C String_t* _stringLiteral02A85381784C2C80B9A22A925F38EC74E6FF28C3;
IL2CPP_EXTERN_C String_t* _stringLiteral030873E7494E751C9468907B6090838BF9C450E8;
IL2CPP_EXTERN_C String_t* _stringLiteral03CBA8E278C589E42BDAB6934DE66651359B2DC9;
IL2CPP_EXTERN_C String_t* _stringLiteral04CEBF56E436D91C3FE82A4B92D4A8D16E885E04;
IL2CPP_EXTERN_C String_t* _stringLiteral04D2B1D140B5E3F8052F064883A6A5BFDEE231C8;
IL2CPP_EXTERN_C String_t* _stringLiteral052D771534A93213F559DA21DA2D56168B5ED695;
IL2CPP_EXTERN_C String_t* _stringLiteral055D976DFFFE69BAA555F56066A8B22EF01EE72E;
IL2CPP_EXTERN_C String_t* _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B;
IL2CPP_EXTERN_C String_t* _stringLiteral1096A65EDDE63ED1ED76B33F9E1D52D2AF482226;
IL2CPP_EXTERN_C String_t* _stringLiteral13C577853824288CE181F3EFFB46894F371FE703;
IL2CPP_EXTERN_C String_t* _stringLiteral149967D8B0B4FF60C95B519437C63F4F13C1E258;
IL2CPP_EXTERN_C String_t* _stringLiteral15017A1031863735A154B530F86FDB1F89DD6A5A;
IL2CPP_EXTERN_C String_t* _stringLiteral1987F075CD3E6934DA6700CC1D5B0F940660DEF1;
IL2CPP_EXTERN_C String_t* _stringLiteral1A5433D4CC8DCD88756CA05920823B32900D6ED4;
IL2CPP_EXTERN_C String_t* _stringLiteral1BC1A43957A04A666A3E7FEC33B09D676B2567E5;
IL2CPP_EXTERN_C String_t* _stringLiteral1D16145F02876CAE3030E757DA8EE07A2EFD779A;
IL2CPP_EXTERN_C String_t* _stringLiteral20855972D1D69D5CE26CB2B3AAE7D19E77236DAF;
IL2CPP_EXTERN_C String_t* _stringLiteral209F496F9E4CB40DB26F56314C5669BAEE33ABBE;
IL2CPP_EXTERN_C String_t* _stringLiteral21C6943AEA75D106927EEAAE6D7F26E32225AD42;
IL2CPP_EXTERN_C String_t* _stringLiteral21EE367ABB11BEF0B9CF540FDB7EDD91C1A579A9;
IL2CPP_EXTERN_C String_t* _stringLiteral24DF95401885DF3F59ABAE4A56A5D6940BD4487D;
IL2CPP_EXTERN_C String_t* _stringLiteral27D9B7EF612AEB12509925B54604A1C6C9199F88;
IL2CPP_EXTERN_C String_t* _stringLiteral28622C1E2BADE67EAFD7DBC0A125C48EC04B2EE6;
IL2CPP_EXTERN_C String_t* _stringLiteral2884CFD648C6122184D887797373AFF335AF76A6;
IL2CPP_EXTERN_C String_t* _stringLiteral294E0C62A89A8889D1AD26E73B97FB9F2A593551;
IL2CPP_EXTERN_C String_t* _stringLiteral2ABB64B417DCCF039EBB8906A23EF277A3BECA28;
IL2CPP_EXTERN_C String_t* _stringLiteral2B2BC85449767EE682B36713D9302082AFED952A;
IL2CPP_EXTERN_C String_t* _stringLiteral2B2CC011E4A2BEF0F4EB2D88AC4999B9D86C2F78;
IL2CPP_EXTERN_C String_t* _stringLiteral2D5ECCACAD40C64CC7C818E3A488043C7B90B644;
IL2CPP_EXTERN_C String_t* _stringLiteral32FBFE3DBAFD929B4BDBCD7836AA6520607B53CF;
IL2CPP_EXTERN_C String_t* _stringLiteral3341AB0C46A5F7410A843CE6A4B07A5444E0CE20;
IL2CPP_EXTERN_C String_t* _stringLiteral39CE2D35F7CB1ED49F040390DFB825CCB48725E1;
IL2CPP_EXTERN_C String_t* _stringLiteral3BD71A6BD71461A532B664B426537E538AAB94D0;
IL2CPP_EXTERN_C String_t* _stringLiteral3D9F674E16B0AD11C0659F8EF8805176622EB0C0;
IL2CPP_EXTERN_C String_t* _stringLiteral3F5BE91CE769F80C19F893E04B86645D3944C171;
IL2CPP_EXTERN_C String_t* _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D;
IL2CPP_EXTERN_C String_t* _stringLiteral4583F2834DE9792418D7F34F9D13B608DAC67FA6;
IL2CPP_EXTERN_C String_t* _stringLiteral4AC6E7F474564EAD58FBD38EA8A310F698916743;
IL2CPP_EXTERN_C String_t* _stringLiteral4AD31964DA1C986C47B43E530945FC1C1EB96412;
IL2CPP_EXTERN_C String_t* _stringLiteral4C20E4AC355571E50DF7E48E77F0CF04B4BC5C87;
IL2CPP_EXTERN_C String_t* _stringLiteral4DE2693D97BA81D25D43D15F9D51FB0E02595543;
IL2CPP_EXTERN_C String_t* _stringLiteral4DF417DF46EF8A7C67D3A1FE0CC53DCF5212FC81;
IL2CPP_EXTERN_C String_t* _stringLiteral4F6D22A94C59F979FE613A2F236AC26B7B7F18CC;
IL2CPP_EXTERN_C String_t* _stringLiteral521EA713AE1F6152B31F87B56805275D6D8AC601;
IL2CPP_EXTERN_C String_t* _stringLiteral53CB4A8F0CAB89D3D2021C63E6D43CE9EEE905EE;
IL2CPP_EXTERN_C String_t* _stringLiteral5AF5C218FFBCFBBF8D1B74E00FAADD9905F877DB;
IL2CPP_EXTERN_C String_t* _stringLiteral5C0AE92C60A8378D70F04D5BBBB387E7D5877C7D;
IL2CPP_EXTERN_C String_t* _stringLiteral5C9F0462C280DB50287DB739E320C5C2346AB984;
IL2CPP_EXTERN_C String_t* _stringLiteral5F23ACC007DA2F22C4D1F07EE4DDA7EADE20E6B7;
IL2CPP_EXTERN_C String_t* _stringLiteral61BB5C2A23FCDBD38AE8B0C1F6CB6B28D1186090;
IL2CPP_EXTERN_C String_t* _stringLiteral6477FB0CBF4E978465F5CB8C51161A34304B3890;
IL2CPP_EXTERN_C String_t* _stringLiteral647E0FB2B5E859CC4BD7C73623B82C8EFABA2563;
IL2CPP_EXTERN_C String_t* _stringLiteral64A32D820F98293234B64F86E152F083BFC327E0;
IL2CPP_EXTERN_C String_t* _stringLiteral67139733340C74D680AC9CFF8DECFD594DAB4AAB;
IL2CPP_EXTERN_C String_t* _stringLiteral6B6F093532E977E255EB3D812B15AC0E6A33F464;
IL2CPP_EXTERN_C String_t* _stringLiteral6DEEEF36920F61940209703F2BD62BAA52C34DB7;
IL2CPP_EXTERN_C String_t* _stringLiteral6EBF42AAE519DFCC3FB53CFECA4A1F82145A4694;
IL2CPP_EXTERN_C String_t* _stringLiteral72F508ED0766F68D2EF203AC908FD3B550A6DD43;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteral75C9716749EA210206E3467390B7A11F3F33DDFA;
IL2CPP_EXTERN_C String_t* _stringLiteral77BF5039A478F169204D5C5040C13C6F73D96E07;
IL2CPP_EXTERN_C String_t* _stringLiteral7AFCC09A21ACC5440E1F93631010094682B02C63;
IL2CPP_EXTERN_C String_t* _stringLiteral7BEFE703372F7C6FF280CF3F91284DA67B5BDDCA;
IL2CPP_EXTERN_C String_t* _stringLiteral7E16D30CB079068AE13643C3E27C077CDECA6C6A;
IL2CPP_EXTERN_C String_t* _stringLiteral7F085474B0FFFEBFA66044C39D4234617687D993;
IL2CPP_EXTERN_C String_t* _stringLiteral80CB791DCAD19BF707D3EE0562CD01BECD034D65;
IL2CPP_EXTERN_C String_t* _stringLiteral80D54EC983DE63B568CBB0125C52331A1CBE3891;
IL2CPP_EXTERN_C String_t* _stringLiteral86B4E71C45AECE63747EB77075D68B751810DCC8;
IL2CPP_EXTERN_C String_t* _stringLiteral873FD96ED8DB682306E0CC444B829681DA5075A9;
IL2CPP_EXTERN_C String_t* _stringLiteral889E65D7381A6F39280C120B9BAC654F54524267;
IL2CPP_EXTERN_C String_t* _stringLiteral88A4D7C549CF41E707F240A70CF3C7DFA873394E;
IL2CPP_EXTERN_C String_t* _stringLiteral88AE3C777C65FC6FF2BFDFDF5C40648388E7431B;
IL2CPP_EXTERN_C String_t* _stringLiteral88BDF3D0791A560245652E772545C49897854443;
IL2CPP_EXTERN_C String_t* _stringLiteral88F4291E3C060A1D87FF3F6BA438F5521E763A1F;
IL2CPP_EXTERN_C String_t* _stringLiteral906E739FFCDF3B1C61FF6F6E2632135A3FC5992A;
IL2CPP_EXTERN_C String_t* _stringLiteral914920FBAD195DA430F12787B301606EB411F1F9;
IL2CPP_EXTERN_C String_t* _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1;
IL2CPP_EXTERN_C String_t* _stringLiteral9414468FCD6502F62D87DD17B40F314907A42588;
IL2CPP_EXTERN_C String_t* _stringLiteral947D561F6DE2C973D88E82A9442712D47D5B01F6;
IL2CPP_EXTERN_C String_t* _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694;
IL2CPP_EXTERN_C String_t* _stringLiteral99DF8A7F98F666693814D9E88045C27B589143EE;
IL2CPP_EXTERN_C String_t* _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1;
IL2CPP_EXTERN_C String_t* _stringLiteral9D0175476BE9BBA67CCC85E742293BDBA08005DA;
IL2CPP_EXTERN_C String_t* _stringLiteral9EC8A59E01337B967FC5629C193C98A71A518793;
IL2CPP_EXTERN_C String_t* _stringLiteralA58748AD3096ED0E9502325825424B0432074D0F;
IL2CPP_EXTERN_C String_t* _stringLiteralA5CABFA334BBD31676E2E3312309E24A55473B7E;
IL2CPP_EXTERN_C String_t* _stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085;
IL2CPP_EXTERN_C String_t* _stringLiteralA99EA716F80446C7FABE13AACD9B07B14D337E5B;
IL2CPP_EXTERN_C String_t* _stringLiteralA9FEAF5F50923952C1AC3A473DE3C7E17D23B907;
IL2CPP_EXTERN_C String_t* _stringLiteralAF9557E791B31EBAF8BC12983AA5FB8B02AAD08B;
IL2CPP_EXTERN_C String_t* _stringLiteralB0A7FF8F03BF3DF33E6B5D8A0E5A1B3BCCE3843F;
IL2CPP_EXTERN_C String_t* _stringLiteralB0EC4068BCF9FD745CA5FDE39E8B794AF039A119;
IL2CPP_EXTERN_C String_t* _stringLiteralB1EBBF092887F8397184C62DB3580080152B5842;
IL2CPP_EXTERN_C String_t* _stringLiteralB375D52F58ABA319072C6F9F1880BCB36A59233C;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralB6367A7E5AA76443244EAFB63445308EFC58CECB;
IL2CPP_EXTERN_C String_t* _stringLiteralBA9E5EE04C95CEBE9BB4EF83F0961FA2CC2C993C;
IL2CPP_EXTERN_C String_t* _stringLiteralBCAE3469D74631FAA7C17C674264959D398C4322;
IL2CPP_EXTERN_C String_t* _stringLiteralBF83EDAD262DDA5A296013B4511548307FEEDF69;
IL2CPP_EXTERN_C String_t* _stringLiteralC155034939E9A9507275297B688E3967E4593563;
IL2CPP_EXTERN_C String_t* _stringLiteralC15630E345E8B75218948879161C847F941AACCE;
IL2CPP_EXTERN_C String_t* _stringLiteralC2B1B56EF13C7DBF5E740062431DABC34AC0F400;
IL2CPP_EXTERN_C String_t* _stringLiteralC350E4C49C5ABF496917B0361BC1202DE06AE05C;
IL2CPP_EXTERN_C String_t* _stringLiteralC527109579F30C810E714252CA943A9196B94FA3;
IL2CPP_EXTERN_C String_t* _stringLiteralC79A2181D3CAEB21262EEDCD1DC673DF70D651F7;
IL2CPP_EXTERN_C String_t* _stringLiteralCA4640C4FCE60554993D5F75D99BE487AE1B5ABC;
IL2CPP_EXTERN_C String_t* _stringLiteralCA882DBD77969E8D4688CC20312C5E0598CC3070;
IL2CPP_EXTERN_C String_t* _stringLiteralD041235C6E3B3654955BE30D0E0F0983145F5D76;
IL2CPP_EXTERN_C String_t* _stringLiteralD1D9E352065C957183F0179F41DAF623191E651A;
IL2CPP_EXTERN_C String_t* _stringLiteralD1F40995B3B64771E79633B124610769310A58D6;
IL2CPP_EXTERN_C String_t* _stringLiteralD5F805CF3F0089E2FAD95BE10D28B105293F3E51;
IL2CPP_EXTERN_C String_t* _stringLiteralD6297CB9F947D0759361EAA41F9DA557D69563D2;
IL2CPP_EXTERN_C String_t* _stringLiteralD64DE515DE159C401BB82652225D6BE22CDAD7A1;
IL2CPP_EXTERN_C String_t* _stringLiteralD69DC64FC4F6DE35F4724F37BDA6EC753668890E;
IL2CPP_EXTERN_C String_t* _stringLiteralD9EBF9813C81335B2AD715E3CAC8A9FC469C9E5F;
IL2CPP_EXTERN_C String_t* _stringLiteralDA489604D5C72C792FE7D06E11A27FE9966E80C8;
IL2CPP_EXTERN_C String_t* _stringLiteralDE591C6584D5C9979158992953617EB3E088ED06;
IL2CPP_EXTERN_C String_t* _stringLiteralDF1AD350BFD6CF2C44901B0FBEC10C6F01BAB688;
IL2CPP_EXTERN_C String_t* _stringLiteralE017CADD28BA9E2902581E48E68F6739A702271B;
IL2CPP_EXTERN_C String_t* _stringLiteralE262104D6DB06A3BF1AF8F82D967A5A9C467F429;
IL2CPP_EXTERN_C String_t* _stringLiteralE6933D4DE7E7C6579BE95FD095F994C29CF09E76;
IL2CPP_EXTERN_C String_t* _stringLiteralE88CEA670D83FE6CD2A52F3E973A7740F94C4E50;
IL2CPP_EXTERN_C String_t* _stringLiteralE906303A779D4A8F03FC8312B8E4E9696969B438;
IL2CPP_EXTERN_C String_t* _stringLiteralEA53F816032589B38815BEA869258DAE9C7914E9;
IL2CPP_EXTERN_C String_t* _stringLiteralEBF5FE0CBF3EEA67902EEA700B7216E3DB0D8E84;
IL2CPP_EXTERN_C String_t* _stringLiteralEC4D13D8C10A8C5ACAD3F8AD8BA808163AD2DF9D;
IL2CPP_EXTERN_C String_t* _stringLiteralEE434AEEDE26978EFB44ACAD6C3AC40AB43B7BF4;
IL2CPP_EXTERN_C String_t* _stringLiteralF0D4F80B8DB2C1613C528F8D6A7678E0B0184502;
IL2CPP_EXTERN_C String_t* _stringLiteralF2E0CCD0E8602CF6B0F3DFDF34C502EDE62AC2B3;
IL2CPP_EXTERN_C String_t* _stringLiteralF4C808726D87E2BF286411B6401235E59191156D;
IL2CPP_EXTERN_C String_t* _stringLiteralF4EA47BC54D18E067BF2A367E1E04F90DEDBB52C;
IL2CPP_EXTERN_C String_t* _stringLiteralF947B8C21E7FE5BB89C197D1BA9AB462BBE9D595;
IL2CPP_EXTERN_C String_t* _stringLiteralFA30E8D5F692E26443C33C2EA6C6680942331C22;
IL2CPP_EXTERN_C String_t* _stringLiteralFE5C7F846CD2F045D788A466976DA77172B2DE0A;
IL2CPP_EXTERN_C String_t* _stringLiteralFFA731436D49A77BFD124877B276F9C5530CF882;
IL2CPP_EXTERN_C String_t* _stringLiteralFFE3A1B73CD7FC81540FBBE737435B0A887629D5;
IL2CPP_EXTERN_C const RuntimeMethod* Client_recv_SharedTextureNotify_m1142C6EECEC831306B4370182087E3BE6DD624E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Client_recv_SharedTextureRequest_m20A400DDAE739EC5BDD6F8D5DF35D8D22BC306E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Client_recv_validate_function_list_mE3D5A21FD57FF842A995C047F96604CD905838A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Client_recv_validate_ping_mBF78474403E295887EB8193A26514D191A4F3901_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Client_validate_ping_m7A98CD623B46013CE5AD47CDC1369B5DB39773CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m587BAC6ADCCA39275B81A0081062BDEAC0C5C053_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mD43CDB1F0181CB472C907CE2B05BD159E4A88287_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mC3633C96031658AC059034B7084BF7CB87CB8D2C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Pose_Read_m969472FBABA845000E12FE73F724AC2B7521D423_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Pose_Write_mD2D9ABC4D10F58AC11D78C4CF98DBA661C95D406_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Processor_SharedTextureNotify_Process_m7C65D73C84D0E684CE540D2835E04C2E85A1F679_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Processor_SharedTextureRequest_Process_m61E5A9804A7717B9C545C1133145C46A12C594F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Processor_validate_function_list_Process_m6C3E81ECE8C8C34373A343C16616DC5E71D61580_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Processor_validate_ping_Process_m740CB77E35066843270E23AD592062BA6A88850B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Quaternion_Read_m0DE7EE832B4D8BFFC1A79C7FF48C15B324224B8D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SharedTexPacket_Read_mBE851F4D59634A8AEF85388A15C066150E47A41B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SharedTexPacket_Write_m0855F55DE37D38219184ED4AA27F6A94CBE2A443_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SharedTex_Read_m5BE8C4C9683CCC19736B2D4AD65E8F85AB14E155_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector3_Read_m9D8873909C5EE03472C0E2D094626BF6CFB7E5E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Viewfinder_Read_m1F77F22AA5CC5317C4001B265DAA757F5FA89B9B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Viewfinder_Write_m56B127BF699290DEBD48772ABD2190ECC3BF9D69_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/Processor/ProcessFunction>
struct Dictionary_2_t7B93365370466FE4082FCBCD182F556A83D94328  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tF011CCBD394503E5F4238D69742671C8F0CCBA4B* ____entries_1;
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
	KeyCollection_t2562DDB2C4C440A88EF65BC353C4953724180DBD* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tD4B0EDEF9BDFB776F0826AE53C53FDE250D868EE* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// Thrift.Proxy.ClientProxy
struct ClientProxy_tCAB2A9A0BF231DDF8E4924E77E1208C917FC0718  : public RuntimeObject
{
	// Thrift.Proxy.ThriftClientProxy Thrift.Proxy.ClientProxy::clientProxy
	ThriftClientProxy_t4F7653DE6E5210BC005CA0FE2F734E635558EC56* ___clientProxy_0;
};

// System.Console
struct Console_t5EDF9498D011BD48287171978EDBBA6964829C3E  : public RuntimeObject
{
};

struct Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_StaticFields
{
	// System.IO.TextWriter System.Console::stdout
	TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* ___stdout_0;
	// System.IO.TextWriter System.Console::stderr
	TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* ___stderr_1;
	// System.IO.TextReader System.Console::stdin
	TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* ___stdin_2;
	// System.Text.Encoding System.Console::inputEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___inputEncoding_3;
	// System.Text.Encoding System.Console::outputEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___outputEncoding_4;
	// System.ConsoleCancelEventHandler System.Console::cancel_event
	ConsoleCancelEventHandler_t7E25E018B7944F60BD34AE7F32E119F34DCEA053* ___cancel_event_5;
};

// Thrift.Proxy.HandlerProxy
struct HandlerProxy_t50A5848626A14999C5ECC9A1DF765110BC836E16  : public RuntimeObject
{
	// Thrift.Proxy.ThriftHandlerProxy Thrift.Proxy.HandlerProxy::handlerProxy
	ThriftHandlerProxy_tAD43194A917E6B0221966CCAB84E3EAABB82B7A9* ___handlerProxy_0;
	// System.Int32 Thrift.Proxy.HandlerProxy::<MaxOnewayMsgQueueAllowed>k__BackingField
	int32_t ___U3CMaxOnewayMsgQueueAllowedU3Ek__BackingField_1;
	// System.Collections.Generic.List`1<System.String> Thrift.Proxy.HandlerProxy::importantMsgList
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___importantMsgList_2;
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// BlueprintReality.Thrift.Pose
struct Pose_t56F6B800CDF4F0273D46059BF45307D69B3F62C3  : public RuntimeObject
{
	// BlueprintReality.Thrift.Vector3 BlueprintReality.Thrift.Pose::<Position>k__BackingField
	Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* ___U3CPositionU3Ek__BackingField_0;
	// BlueprintReality.Thrift.Quaternion BlueprintReality.Thrift.Pose::<Rotation>k__BackingField
	Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14* ___U3CRotationU3Ek__BackingField_1;
};

// BlueprintReality.Thrift.Quaternion
struct Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14  : public RuntimeObject
{
	// System.Double BlueprintReality.Thrift.Quaternion::<W>k__BackingField
	double ___U3CWU3Ek__BackingField_0;
	// System.Double BlueprintReality.Thrift.Quaternion::<X>k__BackingField
	double ___U3CXU3Ek__BackingField_1;
	// System.Double BlueprintReality.Thrift.Quaternion::<Y>k__BackingField
	double ___U3CYU3Ek__BackingField_2;
	// System.Double BlueprintReality.Thrift.Quaternion::<Z>k__BackingField
	double ___U3CZU3Ek__BackingField_3;
};

// BlueprintReality.Thrift.SharedTextures.SharedTexPacket
struct SharedTexPacket_t06FC19BA6F5C2223EECB4BF1BE34A8360027D77A  : public RuntimeObject
{
	// System.String BlueprintReality.Thrift.SharedTextures.SharedTexPacket::<Id>k__BackingField
	String_t* ___U3CIdU3Ek__BackingField_0;
	// BlueprintReality.Thrift.SharedTextures.SharedTex BlueprintReality.Thrift.SharedTextures.SharedTexPacket::<Info>k__BackingField
	SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976* ___U3CInfoU3Ek__BackingField_1;
};

// BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication
struct SharedTextureCommunication_tD3182824E24A1E8B3808CF804E1FE611AA1AB07F  : public RuntimeObject
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

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
};

// Thrift.Protocol.TProtocol
struct TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1  : public RuntimeObject
{
	// Thrift.Transport.TTransport Thrift.Protocol.TProtocol::trans
	TTransport_tC5405D0CBA5B6B81DF71447B64F47F76B45C6A53* ___trans_1;
	// System.Int32 Thrift.Protocol.TProtocol::recursionLimit
	int32_t ___recursionLimit_2;
	// System.Int32 Thrift.Protocol.TProtocol::recursionDepth
	int32_t ___recursionDepth_3;
	// System.Boolean Thrift.Protocol.TProtocol::_IsDisposed
	bool ____IsDisposed_4;
};

// Thrift.Transport.TTransport
struct TTransport_tC5405D0CBA5B6B81DF71447B64F47F76B45C6A53  : public RuntimeObject
{
	// System.Byte[] Thrift.Transport.TTransport::_peekBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____peekBuffer_0;
	// System.Boolean Thrift.Transport.TTransport::_hasPeekByte
	bool ____hasPeekByte_1;
};

// Thrift.Proxy.ThriftClientProxy
struct ThriftClientProxy_t4F7653DE6E5210BC005CA0FE2F734E635558EC56  : public RuntimeObject
{
	// Thrift.Proxy.ClientProxy Thrift.Proxy.ThriftClientProxy::_instance
	ClientProxy_tCAB2A9A0BF231DDF8E4924E77E1208C917FC0718* ____instance_0;
	// Thrift.Transport.TTransport Thrift.Proxy.ThriftClientProxy::_transport
	TTransport_tC5405D0CBA5B6B81DF71447B64F47F76B45C6A53* ____transport_1;
	// System.String Thrift.Proxy.ThriftClientProxy::_address
	String_t* ____address_2;
	// System.Reflection.MethodInfo Thrift.Proxy.ThriftClientProxy::_function_list_query_function
	MethodInfo_t* ____function_list_query_function_3;
	// System.Object[] Thrift.Proxy.ThriftClientProxy::_emptyArgs
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____emptyArgs_4;
	// System.Boolean Thrift.Proxy.ThriftClientProxy::_is_open_last_time
	bool ____is_open_last_time_5;
	// Thrift.Proxy.ClientProxyFuncList Thrift.Proxy.ThriftClientProxy::_remote_function_list
	ClientProxyFuncList_t9D7A8DFD8A81C9096177B8D5A6EE78D255A5A543* ____remote_function_list_6;
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

// BlueprintReality.Thrift.Vector3
struct Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55  : public RuntimeObject
{
	// System.Double BlueprintReality.Thrift.Vector3::<X>k__BackingField
	double ___U3CXU3Ek__BackingField_0;
	// System.Double BlueprintReality.Thrift.Vector3::<Y>k__BackingField
	double ___U3CYU3Ek__BackingField_1;
	// System.Double BlueprintReality.Thrift.Vector3::<Z>k__BackingField
	double ___U3CZU3Ek__BackingField_2;
};

// BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/Processor
struct Processor_t149BF9A522E68ECC976019AC885916305DADB24E  : public RuntimeObject
{
	// BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/ISyncServer BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/Processor::iface_
	RuntimeObject* ___iface__0;
	// System.Collections.Generic.Dictionary`2<System.String,BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/Processor/ProcessFunction> BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/Processor::processMap_
	Dictionary_2_t7B93365370466FE4082FCBCD182F556A83D94328* ___processMap__1;
};

// BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/SharedTextureNotify_result
struct SharedTextureNotify_result_t773233FF03B1FFB18E8EA55F4632A79916885CE7  : public RuntimeObject
{
};

// BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/validate_function_list_args
struct validate_function_list_args_t63D913089E5FFB666F13DFA7CB2DA5B2C9573075  : public RuntimeObject
{
};

// BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/validate_ping_args
struct validate_ping_args_t14208A7DFB4229A49964DD8F10489711F552E9DE  : public RuntimeObject
{
};

// BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/validate_ping_result
struct validate_ping_result_t0CBE71D3C54F5CABE445DD8EAD534613297BB0C0  : public RuntimeObject
{
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.String>
struct Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	String_t* ____current_3;
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

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
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

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// Thrift.Protocol.TField
struct TField_tF4D9D8EFE767C142914693E0E787547F0213D334 
{
	// System.String Thrift.Protocol.TField::name
	String_t* ___name_0;
	// Thrift.Protocol.TType Thrift.Protocol.TField::type
	uint8_t ___type_1;
	// System.Int16 Thrift.Protocol.TField::id
	int16_t ___id_2;
};
// Native definition for P/Invoke marshalling of Thrift.Protocol.TField
struct TField_tF4D9D8EFE767C142914693E0E787547F0213D334_marshaled_pinvoke
{
	char* ___name_0;
	uint8_t ___type_1;
	int16_t ___id_2;
};
// Native definition for COM marshalling of Thrift.Protocol.TField
struct TField_tF4D9D8EFE767C142914693E0E787547F0213D334_marshaled_com
{
	Il2CppChar* ___name_0;
	uint8_t ___type_1;
	int16_t ___id_2;
};

// Thrift.Protocol.TList
struct TList_t901068FC67AF1D67BF97378377E2FBDB40D54C1B 
{
	// Thrift.Protocol.TType Thrift.Protocol.TList::elementType
	uint8_t ___elementType_0;
	// System.Int32 Thrift.Protocol.TList::count
	int32_t ___count_1;
};

// Thrift.Protocol.TMessage
struct TMessage_tA7EE1296176D302DA8CB5201A04319D8D3B44043 
{
	// System.String Thrift.Protocol.TMessage::name
	String_t* ___name_0;
	// Thrift.Protocol.TMessageType Thrift.Protocol.TMessage::type
	int32_t ___type_1;
	// System.Int32 Thrift.Protocol.TMessage::seqID
	int32_t ___seqID_2;
};
// Native definition for P/Invoke marshalling of Thrift.Protocol.TMessage
struct TMessage_tA7EE1296176D302DA8CB5201A04319D8D3B44043_marshaled_pinvoke
{
	char* ___name_0;
	int32_t ___type_1;
	int32_t ___seqID_2;
};
// Native definition for COM marshalling of Thrift.Protocol.TMessage
struct TMessage_tA7EE1296176D302DA8CB5201A04319D8D3B44043_marshaled_com
{
	Il2CppChar* ___name_0;
	int32_t ___type_1;
	int32_t ___seqID_2;
};

// Thrift.Protocol.TStruct
struct TStruct_tAD67F1F0C45235334F9440B6A587DB03A0CE5C96 
{
	// System.String Thrift.Protocol.TStruct::name
	String_t* ___name_0;
};
// Native definition for P/Invoke marshalling of Thrift.Protocol.TStruct
struct TStruct_tAD67F1F0C45235334F9440B6A587DB03A0CE5C96_marshaled_pinvoke
{
	char* ___name_0;
};
// Native definition for COM marshalling of Thrift.Protocol.TStruct
struct TStruct_tAD67F1F0C45235334F9440B6A587DB03A0CE5C96_marshaled_com
{
	Il2CppChar* ___name_0;
};

// System.IO.TextWriter
struct TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.Char[] System.IO.TextWriter::CoreNewLine
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___CoreNewLine_3;
	// System.String System.IO.TextWriter::CoreNewLineStr
	String_t* ___CoreNewLineStr_4;
	// System.IFormatProvider System.IO.TextWriter::_internalFormatProvider
	RuntimeObject* ____internalFormatProvider_5;
};

struct TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3_StaticFields
{
	// System.IO.TextWriter System.IO.TextWriter::Null
	TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* ___Null_1;
	// System.Char[] System.IO.TextWriter::s_coreNewLine
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___s_coreNewLine_2;
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

// BlueprintReality.MixCast.Shared.ExperienceMetadata/Isset
struct Isset_tD03FFA74537B9BF61968ACF6C242B6ABCA91BB12 
{
	// System.Boolean BlueprintReality.MixCast.Shared.ExperienceMetadata/Isset::mixcastVersion
	bool ___mixcastVersion_0;
	// System.Boolean BlueprintReality.MixCast.Shared.ExperienceMetadata/Isset::experienceExePath
	bool ___experienceExePath_1;
	// System.Boolean BlueprintReality.MixCast.Shared.ExperienceMetadata/Isset::mainWindowHandle
	bool ___mainWindowHandle_2;
	// System.Boolean BlueprintReality.MixCast.Shared.ExperienceMetadata/Isset::mainProcessId
	bool ___mainProcessId_3;
	// System.Boolean BlueprintReality.MixCast.Shared.ExperienceMetadata/Isset::projectId
	bool ___projectId_4;
	// System.Boolean BlueprintReality.MixCast.Shared.ExperienceMetadata/Isset::experienceTitle
	bool ___experienceTitle_5;
	// System.Boolean BlueprintReality.MixCast.Shared.ExperienceMetadata/Isset::organizationName
	bool ___organizationName_6;
	// System.Boolean BlueprintReality.MixCast.Shared.ExperienceMetadata/Isset::engineVersion
	bool ___engineVersion_7;
	// System.Boolean BlueprintReality.MixCast.Shared.ExperienceMetadata/Isset::graphicsType
	bool ___graphicsType_8;
	// System.Boolean BlueprintReality.MixCast.Shared.ExperienceMetadata/Isset::trackingType
	bool ___trackingType_9;
	// System.Boolean BlueprintReality.MixCast.Shared.ExperienceMetadata/Isset::alphaIsPremultiplied
	bool ___alphaIsPremultiplied_10;
	// System.Boolean BlueprintReality.MixCast.Shared.ExperienceMetadata/Isset::colorSpaceIsLinear
	bool ___colorSpaceIsLinear_11;
	// System.Boolean BlueprintReality.MixCast.Shared.ExperienceMetadata/Isset::canRenderOpaqueBg
	bool ___canRenderOpaqueBg_12;
	// System.Boolean BlueprintReality.MixCast.Shared.ExperienceMetadata/Isset::canRenderTransparentBg
	bool ___canRenderTransparentBg_13;
	// System.Boolean BlueprintReality.MixCast.Shared.ExperienceMetadata/Isset::canRenderSeparateOpaque
	bool ___canRenderSeparateOpaque_14;
};
// Native definition for P/Invoke marshalling of BlueprintReality.MixCast.Shared.ExperienceMetadata/Isset
struct Isset_tD03FFA74537B9BF61968ACF6C242B6ABCA91BB12_marshaled_pinvoke
{
	int32_t ___mixcastVersion_0;
	int32_t ___experienceExePath_1;
	int32_t ___mainWindowHandle_2;
	int32_t ___mainProcessId_3;
	int32_t ___projectId_4;
	int32_t ___experienceTitle_5;
	int32_t ___organizationName_6;
	int32_t ___engineVersion_7;
	int32_t ___graphicsType_8;
	int32_t ___trackingType_9;
	int32_t ___alphaIsPremultiplied_10;
	int32_t ___colorSpaceIsLinear_11;
	int32_t ___canRenderOpaqueBg_12;
	int32_t ___canRenderTransparentBg_13;
	int32_t ___canRenderSeparateOpaque_14;
};
// Native definition for COM marshalling of BlueprintReality.MixCast.Shared.ExperienceMetadata/Isset
struct Isset_tD03FFA74537B9BF61968ACF6C242B6ABCA91BB12_marshaled_com
{
	int32_t ___mixcastVersion_0;
	int32_t ___experienceExePath_1;
	int32_t ___mainWindowHandle_2;
	int32_t ___mainProcessId_3;
	int32_t ___projectId_4;
	int32_t ___experienceTitle_5;
	int32_t ___organizationName_6;
	int32_t ___engineVersion_7;
	int32_t ___graphicsType_8;
	int32_t ___trackingType_9;
	int32_t ___alphaIsPremultiplied_10;
	int32_t ___colorSpaceIsLinear_11;
	int32_t ___canRenderOpaqueBg_12;
	int32_t ___canRenderTransparentBg_13;
	int32_t ___canRenderSeparateOpaque_14;
};

// BlueprintReality.Thrift.SharedTextures.SharedTex/Isset
struct Isset_t3C0D7B75B364660D65CE6F217C2593D024089C7C 
{
	// System.Boolean BlueprintReality.Thrift.SharedTextures.SharedTex/Isset::procId
	bool ___procId_0;
};
// Native definition for P/Invoke marshalling of BlueprintReality.Thrift.SharedTextures.SharedTex/Isset
struct Isset_t3C0D7B75B364660D65CE6F217C2593D024089C7C_marshaled_pinvoke
{
	int32_t ___procId_0;
};
// Native definition for COM marshalling of BlueprintReality.Thrift.SharedTextures.SharedTex/Isset
struct Isset_t3C0D7B75B364660D65CE6F217C2593D024089C7C_marshaled_com
{
	int32_t ___procId_0;
};

// BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/Client
struct Client_t68F64069A7A7D460F7158797D2F5C0C22676FFA6  : public ClientProxy_tCAB2A9A0BF231DDF8E4924E77E1208C917FC0718
{
	// Thrift.Protocol.TProtocol BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/Client::iprot_
	TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* ___iprot__1;
	// Thrift.Protocol.TProtocol BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/Client::oprot_
	TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* ___oprot__2;
	// System.Int32 BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/Client::seqid_
	int32_t ___seqid__3;
	// System.Boolean BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/Client::_IsDisposed
	bool ____IsDisposed_4;
};

// BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/Handler
struct Handler_tB89C973D453690A6B464CB04BF66AB42906A9C57  : public HandlerProxy_t50A5848626A14999C5ECC9A1DF765110BC836E16
{
};

// BlueprintReality.MixCast.Shared.VideoInput/Isset
struct Isset_t5AC4C50CE0E568495E13A2BA5709A48DE5906488 
{
	// System.Boolean BlueprintReality.MixCast.Shared.VideoInput/Isset::identifier
	bool ___identifier_0;
	// System.Boolean BlueprintReality.MixCast.Shared.VideoInput/Isset::fieldOfView
	bool ___fieldOfView_1;
	// System.Boolean BlueprintReality.MixCast.Shared.VideoInput/Isset::currentPosition
	bool ___currentPosition_2;
	// System.Boolean BlueprintReality.MixCast.Shared.VideoInput/Isset::currentRotation
	bool ___currentRotation_3;
	// System.Boolean BlueprintReality.MixCast.Shared.VideoInput/Isset::projectToUser
	bool ___projectToUser_4;
	// System.Boolean BlueprintReality.MixCast.Shared.VideoInput/Isset::projectToCameras
	bool ___projectToCameras_5;
};
// Native definition for P/Invoke marshalling of BlueprintReality.MixCast.Shared.VideoInput/Isset
struct Isset_t5AC4C50CE0E568495E13A2BA5709A48DE5906488_marshaled_pinvoke
{
	int32_t ___identifier_0;
	int32_t ___fieldOfView_1;
	int32_t ___currentPosition_2;
	int32_t ___currentRotation_3;
	int32_t ___projectToUser_4;
	int32_t ___projectToCameras_5;
};
// Native definition for COM marshalling of BlueprintReality.MixCast.Shared.VideoInput/Isset
struct Isset_t5AC4C50CE0E568495E13A2BA5709A48DE5906488_marshaled_com
{
	int32_t ___identifier_0;
	int32_t ___fieldOfView_1;
	int32_t ___currentPosition_2;
	int32_t ___currentRotation_3;
	int32_t ___projectToUser_4;
	int32_t ___projectToCameras_5;
};

// BlueprintReality.MixCast.Shared.Viewfinder/Isset
struct Isset_t979D8D8E17EC4F3AAD700C9ED956669FF2A23927 
{
	// System.Boolean BlueprintReality.MixCast.Shared.Viewfinder/Isset::currentPosition
	bool ___currentPosition_0;
	// System.Boolean BlueprintReality.MixCast.Shared.Viewfinder/Isset::currentRotation
	bool ___currentRotation_1;
	// System.Boolean BlueprintReality.MixCast.Shared.Viewfinder/Isset::currentScale
	bool ___currentScale_2;
};
// Native definition for P/Invoke marshalling of BlueprintReality.MixCast.Shared.Viewfinder/Isset
struct Isset_t979D8D8E17EC4F3AAD700C9ED956669FF2A23927_marshaled_pinvoke
{
	int32_t ___currentPosition_0;
	int32_t ___currentRotation_1;
	int32_t ___currentScale_2;
};
// Native definition for COM marshalling of BlueprintReality.MixCast.Shared.Viewfinder/Isset
struct Isset_t979D8D8E17EC4F3AAD700C9ED956669FF2A23927_marshaled_com
{
	int32_t ___currentPosition_0;
	int32_t ___currentRotation_1;
	int32_t ___currentScale_2;
};

// BlueprintReality.MixCast.Shared.VirtualCamera/Isset
struct Isset_tF8AB37BBD4ECC1DA61116E747FE00104BA58D11A 
{
	// System.Boolean BlueprintReality.MixCast.Shared.VirtualCamera/Isset::identifier
	bool ___identifier_0;
	// System.Boolean BlueprintReality.MixCast.Shared.VirtualCamera/Isset::fieldOfView
	bool ___fieldOfView_1;
	// System.Boolean BlueprintReality.MixCast.Shared.VirtualCamera/Isset::currentPosition
	bool ___currentPosition_2;
	// System.Boolean BlueprintReality.MixCast.Shared.VirtualCamera/Isset::currentRotation
	bool ___currentRotation_3;
	// System.Boolean BlueprintReality.MixCast.Shared.VirtualCamera/Isset::renderResolutionWidth
	bool ___renderResolutionWidth_4;
	// System.Boolean BlueprintReality.MixCast.Shared.VirtualCamera/Isset::renderResolutionHeight
	bool ___renderResolutionHeight_5;
	// System.Boolean BlueprintReality.MixCast.Shared.VirtualCamera/Isset::renderFramerate
	bool ___renderFramerate_6;
	// System.Boolean BlueprintReality.MixCast.Shared.VirtualCamera/Isset::usesForeground
	bool ___usesForeground_7;
	// System.Boolean BlueprintReality.MixCast.Shared.VirtualCamera/Isset::usesFullRender
	bool ___usesFullRender_8;
	// System.Boolean BlueprintReality.MixCast.Shared.VirtualCamera/Isset::isFirstPerson
	bool ___isFirstPerson_9;
	// System.Boolean BlueprintReality.MixCast.Shared.VirtualCamera/Isset::isBackgroundTranslucent
	bool ___isBackgroundTranslucent_10;
	// System.Boolean BlueprintReality.MixCast.Shared.VirtualCamera/Isset::videoInputIds
	bool ___videoInputIds_11;
	// System.Boolean BlueprintReality.MixCast.Shared.VirtualCamera/Isset::externalComposite
	bool ___externalComposite_12;
	// System.Boolean BlueprintReality.MixCast.Shared.VirtualCamera/Isset::frameBufferDelay
	bool ___frameBufferDelay_13;
	// System.Boolean BlueprintReality.MixCast.Shared.VirtualCamera/Isset::outputPtr
	bool ___outputPtr_14;
	// System.Boolean BlueprintReality.MixCast.Shared.VirtualCamera/Isset::autoSnapshotEnabled
	bool ___autoSnapshotEnabled_15;
	// System.Boolean BlueprintReality.MixCast.Shared.VirtualCamera/Isset::videoRecordingEnabled
	bool ___videoRecordingEnabled_16;
	// System.Boolean BlueprintReality.MixCast.Shared.VirtualCamera/Isset::videoRecordingOutputPath
	bool ___videoRecordingOutputPath_17;
	// System.Boolean BlueprintReality.MixCast.Shared.VirtualCamera/Isset::videoStreamingEnabled
	bool ___videoStreamingEnabled_18;
};
// Native definition for P/Invoke marshalling of BlueprintReality.MixCast.Shared.VirtualCamera/Isset
struct Isset_tF8AB37BBD4ECC1DA61116E747FE00104BA58D11A_marshaled_pinvoke
{
	int32_t ___identifier_0;
	int32_t ___fieldOfView_1;
	int32_t ___currentPosition_2;
	int32_t ___currentRotation_3;
	int32_t ___renderResolutionWidth_4;
	int32_t ___renderResolutionHeight_5;
	int32_t ___renderFramerate_6;
	int32_t ___usesForeground_7;
	int32_t ___usesFullRender_8;
	int32_t ___isFirstPerson_9;
	int32_t ___isBackgroundTranslucent_10;
	int32_t ___videoInputIds_11;
	int32_t ___externalComposite_12;
	int32_t ___frameBufferDelay_13;
	int32_t ___outputPtr_14;
	int32_t ___autoSnapshotEnabled_15;
	int32_t ___videoRecordingEnabled_16;
	int32_t ___videoRecordingOutputPath_17;
	int32_t ___videoStreamingEnabled_18;
};
// Native definition for COM marshalling of BlueprintReality.MixCast.Shared.VirtualCamera/Isset
struct Isset_tF8AB37BBD4ECC1DA61116E747FE00104BA58D11A_marshaled_com
{
	int32_t ___identifier_0;
	int32_t ___fieldOfView_1;
	int32_t ___currentPosition_2;
	int32_t ___currentRotation_3;
	int32_t ___renderResolutionWidth_4;
	int32_t ___renderResolutionHeight_5;
	int32_t ___renderFramerate_6;
	int32_t ___usesForeground_7;
	int32_t ___usesFullRender_8;
	int32_t ___isFirstPerson_9;
	int32_t ___isBackgroundTranslucent_10;
	int32_t ___videoInputIds_11;
	int32_t ___externalComposite_12;
	int32_t ___frameBufferDelay_13;
	int32_t ___outputPtr_14;
	int32_t ___autoSnapshotEnabled_15;
	int32_t ___videoRecordingEnabled_16;
	int32_t ___videoRecordingOutputPath_17;
	int32_t ___videoStreamingEnabled_18;
};

// BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/SharedTextureNotify_args/Isset
struct Isset_t009D65358BB9519F1438D00449C7C4A992FDE97F 
{
	// System.Boolean BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/SharedTextureNotify_args/Isset::texId
	bool ___texId_0;
	// System.Boolean BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/SharedTextureNotify_args/Isset::texture
	bool ___texture_1;
};
// Native definition for P/Invoke marshalling of BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/SharedTextureNotify_args/Isset
struct Isset_t009D65358BB9519F1438D00449C7C4A992FDE97F_marshaled_pinvoke
{
	int32_t ___texId_0;
	int32_t ___texture_1;
};
// Native definition for COM marshalling of BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/SharedTextureNotify_args/Isset
struct Isset_t009D65358BB9519F1438D00449C7C4A992FDE97F_marshaled_com
{
	int32_t ___texId_0;
	int32_t ___texture_1;
};

// BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/SharedTextureRequest_args/Isset
struct Isset_tDFD19C146B6F41A9B9338D4D13C210A06052C9C3 
{
	// System.Boolean BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/SharedTextureRequest_args/Isset::texId
	bool ___texId_0;
};
// Native definition for P/Invoke marshalling of BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/SharedTextureRequest_args/Isset
struct Isset_tDFD19C146B6F41A9B9338D4D13C210A06052C9C3_marshaled_pinvoke
{
	int32_t ___texId_0;
};
// Native definition for COM marshalling of BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/SharedTextureRequest_args/Isset
struct Isset_tDFD19C146B6F41A9B9338D4D13C210A06052C9C3_marshaled_com
{
	int32_t ___texId_0;
};

// BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/SharedTextureRequest_result/Isset
struct Isset_t2EC092880773B7465AC7F14FFABF88E95E95F79E 
{
	// System.Boolean BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/SharedTextureRequest_result/Isset::success
	bool ___success_0;
};
// Native definition for P/Invoke marshalling of BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/SharedTextureRequest_result/Isset
struct Isset_t2EC092880773B7465AC7F14FFABF88E95E95F79E_marshaled_pinvoke
{
	int32_t ___success_0;
};
// Native definition for COM marshalling of BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/SharedTextureRequest_result/Isset
struct Isset_t2EC092880773B7465AC7F14FFABF88E95E95F79E_marshaled_com
{
	int32_t ___success_0;
};

// BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/validate_function_list_result/Isset
struct Isset_tF47BC457C347A05925D0A490A693A44F649EA8A0 
{
	// System.Boolean BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/validate_function_list_result/Isset::success
	bool ___success_0;
};
// Native definition for P/Invoke marshalling of BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/validate_function_list_result/Isset
struct Isset_tF47BC457C347A05925D0A490A693A44F649EA8A0_marshaled_pinvoke
{
	int32_t ___success_0;
};
// Native definition for COM marshalling of BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/validate_function_list_result/Isset
struct Isset_tF47BC457C347A05925D0A490A693A44F649EA8A0_marshaled_com
{
	int32_t ___success_0;
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

// BlueprintReality.Thrift.SharedTextures.SharedTex
struct SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976  : public RuntimeObject
{
	// System.Int64 BlueprintReality.Thrift.SharedTextures.SharedTex::_procId
	int64_t ____procId_0;
	// System.Int64 BlueprintReality.Thrift.SharedTextures.SharedTex::<Handle>k__BackingField
	int64_t ___U3CHandleU3Ek__BackingField_1;
	// System.Int32 BlueprintReality.Thrift.SharedTextures.SharedTex::<Width>k__BackingField
	int32_t ___U3CWidthU3Ek__BackingField_2;
	// System.Int32 BlueprintReality.Thrift.SharedTextures.SharedTex::<Height>k__BackingField
	int32_t ___U3CHeightU3Ek__BackingField_3;
	// System.Int32 BlueprintReality.Thrift.SharedTextures.SharedTex::<Format>k__BackingField
	int32_t ___U3CFormatU3Ek__BackingField_4;
	// BlueprintReality.Thrift.SharedTextures.SharedTex/Isset BlueprintReality.Thrift.SharedTextures.SharedTex::__isset
	Isset_t3C0D7B75B364660D65CE6F217C2593D024089C7C _____isset_5;
};

// BlueprintReality.MixCast.Shared.VideoInput
struct VideoInput_tBCABAFE80056975164CAF3CE7E52DABA81AE3BCB  : public RuntimeObject
{
	// System.String BlueprintReality.MixCast.Shared.VideoInput::_identifier
	String_t* ____identifier_0;
	// System.Double BlueprintReality.MixCast.Shared.VideoInput::_fieldOfView
	double ____fieldOfView_1;
	// BlueprintReality.Thrift.Vector3 BlueprintReality.MixCast.Shared.VideoInput::_currentPosition
	Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* ____currentPosition_2;
	// BlueprintReality.Thrift.Quaternion BlueprintReality.MixCast.Shared.VideoInput::_currentRotation
	Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14* ____currentRotation_3;
	// System.Boolean BlueprintReality.MixCast.Shared.VideoInput::_projectToUser
	bool ____projectToUser_4;
	// System.Collections.Generic.List`1<System.String> BlueprintReality.MixCast.Shared.VideoInput::_projectToCameras
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____projectToCameras_5;
	// BlueprintReality.MixCast.Shared.VideoInput/Isset BlueprintReality.MixCast.Shared.VideoInput::__isset
	Isset_t5AC4C50CE0E568495E13A2BA5709A48DE5906488 _____isset_6;
};

// BlueprintReality.MixCast.Shared.Viewfinder
struct Viewfinder_t843542A36830CBE3231029C0C271BD459E15CB86  : public RuntimeObject
{
	// BlueprintReality.Thrift.Vector3 BlueprintReality.MixCast.Shared.Viewfinder::_currentPosition
	Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* ____currentPosition_0;
	// BlueprintReality.Thrift.Quaternion BlueprintReality.MixCast.Shared.Viewfinder::_currentRotation
	Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14* ____currentRotation_1;
	// BlueprintReality.Thrift.Vector3 BlueprintReality.MixCast.Shared.Viewfinder::_currentScale
	Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* ____currentScale_2;
	// System.String BlueprintReality.MixCast.Shared.Viewfinder::<Identifier>k__BackingField
	String_t* ___U3CIdentifierU3Ek__BackingField_3;
	// BlueprintReality.MixCast.Shared.Viewfinder/Isset BlueprintReality.MixCast.Shared.Viewfinder::__isset
	Isset_t979D8D8E17EC4F3AAD700C9ED956669FF2A23927 _____isset_4;
};

// BlueprintReality.MixCast.Shared.VirtualCamera
struct VirtualCamera_tE3BDC17FDEBF36E1926300A209225F859FB31C1B  : public RuntimeObject
{
	// System.String BlueprintReality.MixCast.Shared.VirtualCamera::_identifier
	String_t* ____identifier_0;
	// System.Double BlueprintReality.MixCast.Shared.VirtualCamera::_fieldOfView
	double ____fieldOfView_1;
	// BlueprintReality.Thrift.Vector3 BlueprintReality.MixCast.Shared.VirtualCamera::_currentPosition
	Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* ____currentPosition_2;
	// BlueprintReality.Thrift.Quaternion BlueprintReality.MixCast.Shared.VirtualCamera::_currentRotation
	Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14* ____currentRotation_3;
	// System.Int32 BlueprintReality.MixCast.Shared.VirtualCamera::_renderResolutionWidth
	int32_t ____renderResolutionWidth_4;
	// System.Int32 BlueprintReality.MixCast.Shared.VirtualCamera::_renderResolutionHeight
	int32_t ____renderResolutionHeight_5;
	// System.Int32 BlueprintReality.MixCast.Shared.VirtualCamera::_renderFramerate
	int32_t ____renderFramerate_6;
	// System.Boolean BlueprintReality.MixCast.Shared.VirtualCamera::_usesForeground
	bool ____usesForeground_7;
	// System.Boolean BlueprintReality.MixCast.Shared.VirtualCamera::_usesFullRender
	bool ____usesFullRender_8;
	// System.Boolean BlueprintReality.MixCast.Shared.VirtualCamera::_isFirstPerson
	bool ____isFirstPerson_9;
	// System.Boolean BlueprintReality.MixCast.Shared.VirtualCamera::_isBackgroundTranslucent
	bool ____isBackgroundTranslucent_10;
	// System.Collections.Generic.List`1<System.String> BlueprintReality.MixCast.Shared.VirtualCamera::_videoInputIds
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____videoInputIds_11;
	// System.Boolean BlueprintReality.MixCast.Shared.VirtualCamera::_externalComposite
	bool ____externalComposite_12;
	// System.Double BlueprintReality.MixCast.Shared.VirtualCamera::_frameBufferDelay
	double ____frameBufferDelay_13;
	// System.Int64 BlueprintReality.MixCast.Shared.VirtualCamera::_outputPtr
	int64_t ____outputPtr_14;
	// System.Boolean BlueprintReality.MixCast.Shared.VirtualCamera::_autoSnapshotEnabled
	bool ____autoSnapshotEnabled_15;
	// System.Boolean BlueprintReality.MixCast.Shared.VirtualCamera::_videoRecordingEnabled
	bool ____videoRecordingEnabled_16;
	// System.String BlueprintReality.MixCast.Shared.VirtualCamera::_videoRecordingOutputPath
	String_t* ____videoRecordingOutputPath_17;
	// System.Boolean BlueprintReality.MixCast.Shared.VirtualCamera::_videoStreamingEnabled
	bool ____videoStreamingEnabled_18;
	// BlueprintReality.MixCast.Shared.VirtualCamera/Isset BlueprintReality.MixCast.Shared.VirtualCamera::__isset
	Isset_tF8AB37BBD4ECC1DA61116E747FE00104BA58D11A _____isset_19;
};

// BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/SharedTextureNotify_args
struct SharedTextureNotify_args_t0EBD41B2A9EFE8C795E976A11ED2D89278821EF9  : public RuntimeObject
{
	// System.String BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/SharedTextureNotify_args::_texId
	String_t* ____texId_0;
	// BlueprintReality.Thrift.SharedTextures.SharedTex BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/SharedTextureNotify_args::_texture
	SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976* ____texture_1;
	// BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/SharedTextureNotify_args/Isset BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/SharedTextureNotify_args::__isset
	Isset_t009D65358BB9519F1438D00449C7C4A992FDE97F _____isset_2;
};

// BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/SharedTextureRequest_args
struct SharedTextureRequest_args_tD5AE63605C74E527A24E126E22DAFFB08F81D4B7  : public RuntimeObject
{
	// System.String BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/SharedTextureRequest_args::_texId
	String_t* ____texId_0;
	// BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/SharedTextureRequest_args/Isset BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/SharedTextureRequest_args::__isset
	Isset_tDFD19C146B6F41A9B9338D4D13C210A06052C9C3 _____isset_1;
};

// BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/SharedTextureRequest_result
struct SharedTextureRequest_result_tF57E540E873EE83BE065ED81A2313266C8AD1961  : public RuntimeObject
{
	// BlueprintReality.Thrift.SharedTextures.SharedTex BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/SharedTextureRequest_result::_success
	SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976* ____success_0;
	// BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/SharedTextureRequest_result/Isset BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/SharedTextureRequest_result::__isset
	Isset_t2EC092880773B7465AC7F14FFABF88E95E95F79E _____isset_1;
};

// BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/validate_function_list_result
struct validate_function_list_result_tEA96B244E3A94307177B3D8736902272FDCE0944  : public RuntimeObject
{
	// System.Collections.Generic.List`1<System.String> BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/validate_function_list_result::_success
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____success_0;
	// BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/validate_function_list_result/Isset BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/validate_function_list_result::__isset
	Isset_tF47BC457C347A05925D0A490A693A44F649EA8A0 _____isset_1;
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

// Thrift.TException
struct TException_t4914ED5FF790E18B9AFA372DC6DC7A80E6129D46  : public Exception_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// System.IO.IOException
struct IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// Thrift.TApplicationException
struct TApplicationException_t75465AADA2A50020180483E1F89A83530AD60F76  : public TException_t4914ED5FF790E18B9AFA372DC6DC7A80E6129D46
{
	// Thrift.TApplicationException/ExceptionType Thrift.TApplicationException::type
	int32_t ___type_18;
};

// Thrift.Protocol.TProtocolException
struct TProtocolException_t69B81CDFF3E6D584BC54665AB6BAD9593BC21996  : public TException_t4914ED5FF790E18B9AFA372DC6DC7A80E6129D46
{
	// System.Int32 Thrift.Protocol.TProtocolException::type_
	int32_t ___type__25;
};

// Thrift.Transport.TTransportException
struct TTransportException_t7BA88D1856162445F81B5F26DB19EE932E6AAF4B  : public TException_t4914ED5FF790E18B9AFA372DC6DC7A80E6129D46
{
	// Thrift.Transport.TTransportException/ExceptionType Thrift.Transport.TTransportException::type
	int32_t ___type_18;
};

// BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/Processor/ProcessFunction
struct ProcessFunction_t6587BCE70A9CECF27480919C464CD9C54E2DD0DB  : public MulticastDelegate_t
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


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Thrift.Protocol.TProtocol::IncrementRecursionDepth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TProtocol_IncrementRecursionDepth_m92B440A7308F6D7012C73B74A6406855A29FF58B (TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* __this, const RuntimeMethod* method) ;
// System.Void Thrift.Protocol.TProtocol::DecrementRecursionDepth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TProtocol_DecrementRecursionDepth_m049900374B8368A8AEB03E6FC93DF288EA1BE44B (TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* __this, const RuntimeMethod* method) ;
// Thrift.Protocol.TType Thrift.Protocol.TField::get_Type()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline (TField_tF4D9D8EFE767C142914693E0E787547F0213D334* __this, const RuntimeMethod* method) ;
// System.Int16 Thrift.Protocol.TField::get_ID()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int16_t TField_get_ID_m512A7F246CCD70AD2C473FA5AF09E6ECC8AB8B1A_inline (TField_tF4D9D8EFE767C142914693E0E787547F0213D334* __this, const RuntimeMethod* method) ;
// System.Void BlueprintReality.MixCast.Shared.VideoInput::set_Identifier(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoInput_set_Identifier_mABB73422B4F3B0900190D2AA4E3BF27BBA99D1D3 (VideoInput_tBCABAFE80056975164CAF3CE7E52DABA81AE3BCB* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Thrift.Protocol.TProtocolUtil::Skip(Thrift.Protocol.TProtocol,Thrift.Protocol.TType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TProtocolUtil_Skip_m61E2B7C700479ECC6AD4E86636C1235C30B5A38F (TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* ___prot0, uint8_t ___type1, const RuntimeMethod* method) ;
// System.Void BlueprintReality.MixCast.Shared.VideoInput::set_FieldOfView(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoInput_set_FieldOfView_m750192A9BF0FCD5A8440367726117C761F90C483 (VideoInput_tBCABAFE80056975164CAF3CE7E52DABA81AE3BCB* __this, double ___value0, const RuntimeMethod* method) ;
// System.Void BlueprintReality.Thrift.Vector3::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3__ctor_mCAFEBD9384F7BA33874D50B8E48A7A3839C3BB20 (Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* __this, const RuntimeMethod* method) ;
// System.Void BlueprintReality.MixCast.Shared.VideoInput::set_CurrentPosition(BlueprintReality.Thrift.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoInput_set_CurrentPosition_m93318500221B0820BFC3894D5E447A7C30298ED0 (VideoInput_tBCABAFE80056975164CAF3CE7E52DABA81AE3BCB* __this, Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* ___value0, const RuntimeMethod* method) ;
// BlueprintReality.Thrift.Vector3 BlueprintReality.MixCast.Shared.VideoInput::get_CurrentPosition()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* VideoInput_get_CurrentPosition_mE2FDD6624494E919D1291C3C8671F04953830D58_inline (VideoInput_tBCABAFE80056975164CAF3CE7E52DABA81AE3BCB* __this, const RuntimeMethod* method) ;
// System.Void BlueprintReality.Thrift.Vector3::Read(Thrift.Protocol.TProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3_Read_m9D8873909C5EE03472C0E2D094626BF6CFB7E5E7 (Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* __this, TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* ___iprot0, const RuntimeMethod* method) ;
// System.Void BlueprintReality.Thrift.Quaternion::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quaternion__ctor_mF918C4EAF6C09059CCFE7B52C82E199E11C185DA (Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14* __this, const RuntimeMethod* method) ;
// System.Void BlueprintReality.MixCast.Shared.VideoInput::set_CurrentRotation(BlueprintReality.Thrift.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoInput_set_CurrentRotation_m30073E9317440700AB49CF189318198D39A6EA3E (VideoInput_tBCABAFE80056975164CAF3CE7E52DABA81AE3BCB* __this, Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14* ___value0, const RuntimeMethod* method) ;
// BlueprintReality.Thrift.Quaternion BlueprintReality.MixCast.Shared.VideoInput::get_CurrentRotation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14* VideoInput_get_CurrentRotation_m201FDC3DA521B6D824D352AB624323318FE0AE39_inline (VideoInput_tBCABAFE80056975164CAF3CE7E52DABA81AE3BCB* __this, const RuntimeMethod* method) ;
// System.Void BlueprintReality.Thrift.Quaternion::Read(Thrift.Protocol.TProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quaternion_Read_m0DE7EE832B4D8BFFC1A79C7FF48C15B324224B8D (Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14* __this, TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* ___iprot0, const RuntimeMethod* method) ;
// System.Void BlueprintReality.MixCast.Shared.VideoInput::set_ProjectToUser(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoInput_set_ProjectToUser_m46A48E1ED5C8AC2373884F2B3A8F77B3070D966D (VideoInput_tBCABAFE80056975164CAF3CE7E52DABA81AE3BCB* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void BlueprintReality.MixCast.Shared.VideoInput::set_ProjectToCameras(System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoInput_set_ProjectToCameras_m8CF4C0D4950A351B10E78ABB4AA3573EBD26C2D3 (VideoInput_tBCABAFE80056975164CAF3CE7E52DABA81AE3BCB* __this, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___value0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<System.String> BlueprintReality.MixCast.Shared.VideoInput::get_ProjectToCameras()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* VideoInput_get_ProjectToCameras_mBA765B2AED959C6A912F72EF273CA8B8F2C64319_inline (VideoInput_tBCABAFE80056975164CAF3CE7E52DABA81AE3BCB* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Int32 Thrift.Protocol.TList::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TList_get_Count_mC247FFC2E5F7D3F1AD406B549324A08C2097C6DC_inline (TList_t901068FC67AF1D67BF97378377E2FBDB40D54C1B* __this, const RuntimeMethod* method) ;
// System.Void Thrift.Protocol.TStruct::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TStruct__ctor_mD56EA112D651038138D3BC7203C3606718E5CB3F (TStruct_tAD67F1F0C45235334F9440B6A587DB03A0CE5C96* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.String BlueprintReality.MixCast.Shared.VideoInput::get_Identifier()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* VideoInput_get_Identifier_m4A052FADC16C20BBB596787D84E02E299B5EC0C2_inline (VideoInput_tBCABAFE80056975164CAF3CE7E52DABA81AE3BCB* __this, const RuntimeMethod* method) ;
// System.Void Thrift.Protocol.TField::set_Name(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TField_set_Name_mAD35FC0847F990535FAF3E3032CD117B560AF751_inline (TField_tF4D9D8EFE767C142914693E0E787547F0213D334* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Thrift.Protocol.TField::set_Type(Thrift.Protocol.TType)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TField_set_Type_m2AA4AF23C96A26CB269B78B067489E10F055E983_inline (TField_tF4D9D8EFE767C142914693E0E787547F0213D334* __this, uint8_t ___value0, const RuntimeMethod* method) ;
// System.Void Thrift.Protocol.TField::set_ID(System.Int16)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TField_set_ID_m68843CC49A2A49966729F299A58A2BBC6FCC4F01_inline (TField_tF4D9D8EFE767C142914693E0E787547F0213D334* __this, int16_t ___value0, const RuntimeMethod* method) ;
// System.Double BlueprintReality.MixCast.Shared.VideoInput::get_FieldOfView()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double VideoInput_get_FieldOfView_m41BA5046686A377E708F5F9F90F9E4CAD4512B74_inline (VideoInput_tBCABAFE80056975164CAF3CE7E52DABA81AE3BCB* __this, const RuntimeMethod* method) ;
// System.Void BlueprintReality.Thrift.Vector3::Write(Thrift.Protocol.TProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3_Write_mB350FC59FBEB5FA8D0255E8BE137A9F921607BFF (Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* __this, TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* ___oprot0, const RuntimeMethod* method) ;
// System.Void BlueprintReality.Thrift.Quaternion::Write(Thrift.Protocol.TProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quaternion_Write_m1B5494004EA15AE513F8B66F3B0DF7BFBED9346B (Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14* __this, TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* ___oprot0, const RuntimeMethod* method) ;
// System.Boolean BlueprintReality.MixCast.Shared.VideoInput::get_ProjectToUser()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool VideoInput_get_ProjectToUser_m19CCFE79F7E71C7650F4DD9FF6C60A5C84C6944A_inline (VideoInput_tBCABAFE80056975164CAF3CE7E52DABA81AE3BCB* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
inline int32_t List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void Thrift.Protocol.TList::.ctor(Thrift.Protocol.TType,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TList__ctor_m17DE205A02F15CE5C16553DA637E2408B7B565D9 (TList_t901068FC67AF1D67BF97378377E2FBDB40D54C1B* __this, uint8_t ___elementType0, int32_t ___count1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.String>::GetEnumerator()
inline Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.String>::Dispose()
inline void Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7 (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.String>::get_Current()
inline String_t* Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_inline (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.String>::MoveNext()
inline bool Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Text.StringBuilder::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_mCD797D942316CB356205FD96415B0B7581CDAD60 (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m078D9861582DCD6037F533DF9C2FFEF0A54269E0 (StringBuilder_t* __this, double ___value0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_mCCCA4BBC406F80A72246B165C201C841877371FC (StringBuilder_t* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63 (StringBuilder_t* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void BlueprintReality.MixCast.Shared.Viewfinder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Viewfinder__ctor_mCDABDE1A0CB15FA5938ED4A5DA70D37FD618C7CF (Viewfinder_t843542A36830CBE3231029C0C271BD459E15CB86* __this, const RuntimeMethod* method) ;
// System.Void BlueprintReality.MixCast.Shared.Viewfinder::set_Identifier(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Viewfinder_set_Identifier_m31798BB42B2B8A8662E8148D583C21467E9D36C7_inline (Viewfinder_t843542A36830CBE3231029C0C271BD459E15CB86* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void BlueprintReality.MixCast.Shared.Viewfinder::set_CurrentPosition(BlueprintReality.Thrift.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Viewfinder_set_CurrentPosition_mBE4932026F6080B8FE5F3FE21BA59552C1B02DBC (Viewfinder_t843542A36830CBE3231029C0C271BD459E15CB86* __this, Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* ___value0, const RuntimeMethod* method) ;
// BlueprintReality.Thrift.Vector3 BlueprintReality.MixCast.Shared.Viewfinder::get_CurrentPosition()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* Viewfinder_get_CurrentPosition_m31D4F0F9151E2373694DC4A21E5DE9803B65B260_inline (Viewfinder_t843542A36830CBE3231029C0C271BD459E15CB86* __this, const RuntimeMethod* method) ;
// System.Void BlueprintReality.MixCast.Shared.Viewfinder::set_CurrentRotation(BlueprintReality.Thrift.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Viewfinder_set_CurrentRotation_m43DBA1750760D6770E0EFBDA12BE05A28631F9D4 (Viewfinder_t843542A36830CBE3231029C0C271BD459E15CB86* __this, Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14* ___value0, const RuntimeMethod* method) ;
// BlueprintReality.Thrift.Quaternion BlueprintReality.MixCast.Shared.Viewfinder::get_CurrentRotation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14* Viewfinder_get_CurrentRotation_m25C8FF9DA62809734BC13449AAF32DA975F085C2_inline (Viewfinder_t843542A36830CBE3231029C0C271BD459E15CB86* __this, const RuntimeMethod* method) ;
// System.Void BlueprintReality.MixCast.Shared.Viewfinder::set_CurrentScale(BlueprintReality.Thrift.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Viewfinder_set_CurrentScale_mDF4827E661BBD767E5CA5FAEA004EE315AB4C752 (Viewfinder_t843542A36830CBE3231029C0C271BD459E15CB86* __this, Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* ___value0, const RuntimeMethod* method) ;
// BlueprintReality.Thrift.Vector3 BlueprintReality.MixCast.Shared.Viewfinder::get_CurrentScale()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* Viewfinder_get_CurrentScale_mC2F76F7CEBDEE5E7E7190A625F5C347C8CCC69B2_inline (Viewfinder_t843542A36830CBE3231029C0C271BD459E15CB86* __this, const RuntimeMethod* method) ;
// System.Void Thrift.Protocol.TProtocolException::.ctor(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TProtocolException__ctor_m490B7FD7AC0D57E9B14D079A63C015546F109C7A (TProtocolException_t69B81CDFF3E6D584BC54665AB6BAD9593BC21996* __this, int32_t ___type0, String_t* ___message1, const RuntimeMethod* method) ;
// System.String BlueprintReality.MixCast.Shared.Viewfinder::get_Identifier()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Viewfinder_get_Identifier_mA0F741163EB65BB09715457C90D4183F41554F39_inline (Viewfinder_t843542A36830CBE3231029C0C271BD459E15CB86* __this, const RuntimeMethod* method) ;
// System.Void BlueprintReality.MixCast.Shared.VirtualCamera::set_Identifier(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualCamera_set_Identifier_m1464695B204983503DD4DBA7D0ED27D98B06A1CD (VirtualCamera_tE3BDC17FDEBF36E1926300A209225F859FB31C1B* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void BlueprintReality.MixCast.Shared.VirtualCamera::set_FieldOfView(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualCamera_set_FieldOfView_m46211CC2CBE8D52F50925113FE511927C8CB44B0 (VirtualCamera_tE3BDC17FDEBF36E1926300A209225F859FB31C1B* __this, double ___value0, const RuntimeMethod* method) ;
// System.Void BlueprintReality.MixCast.Shared.VirtualCamera::set_CurrentPosition(BlueprintReality.Thrift.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualCamera_set_CurrentPosition_m462827B2E9764B425213BA2B0C6EAFD35A894A93 (VirtualCamera_tE3BDC17FDEBF36E1926300A209225F859FB31C1B* __this, Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* ___value0, const RuntimeMethod* method) ;
// BlueprintReality.Thrift.Vector3 BlueprintReality.MixCast.Shared.VirtualCamera::get_CurrentPosition()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* VirtualCamera_get_CurrentPosition_m874C91FBA8BF730867BA73F7AC532CDBCB236C14_inline (VirtualCamera_tE3BDC17FDEBF36E1926300A209225F859FB31C1B* __this, const RuntimeMethod* method) ;
// System.Void BlueprintReality.MixCast.Shared.VirtualCamera::set_CurrentRotation(BlueprintReality.Thrift.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualCamera_set_CurrentRotation_m860EF481E6C3E1561AFD2963CE2160EEB036CE51 (VirtualCamera_tE3BDC17FDEBF36E1926300A209225F859FB31C1B* __this, Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14* ___value0, const RuntimeMethod* method) ;
// BlueprintReality.Thrift.Quaternion BlueprintReality.MixCast.Shared.VirtualCamera::get_CurrentRotation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14* VirtualCamera_get_CurrentRotation_mC2D2A7A4031A0E2FD53EF7AD1C2958380D0319D3_inline (VirtualCamera_tE3BDC17FDEBF36E1926300A209225F859FB31C1B* __this, const RuntimeMethod* method) ;
// System.Void BlueprintReality.MixCast.Shared.VirtualCamera::set_RenderResolutionWidth(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualCamera_set_RenderResolutionWidth_m0FCE4BECAF59B2D96533FE82BDC61D7D730EA36C (VirtualCamera_tE3BDC17FDEBF36E1926300A209225F859FB31C1B* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void BlueprintReality.MixCast.Shared.VirtualCamera::set_RenderResolutionHeight(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualCamera_set_RenderResolutionHeight_m6A87B7B4DCB4C12B0DE3D8D6D1B9645239D74EEB (VirtualCamera_tE3BDC17FDEBF36E1926300A209225F859FB31C1B* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void BlueprintReality.MixCast.Shared.VirtualCamera::set_RenderFramerate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualCamera_set_RenderFramerate_m1709488B72075D1AE9306AA179FF94263CE36461 (VirtualCamera_tE3BDC17FDEBF36E1926300A209225F859FB31C1B* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void BlueprintReality.MixCast.Shared.VirtualCamera::set_UsesForeground(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualCamera_set_UsesForeground_m61108B7689F91AAFD36D0F2C08A7718D9167B814 (VirtualCamera_tE3BDC17FDEBF36E1926300A209225F859FB31C1B* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void BlueprintReality.MixCast.Shared.VirtualCamera::set_UsesFullRender(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualCamera_set_UsesFullRender_m7BC661D4DC08A89DCE524C6C85F87382931AB41A (VirtualCamera_tE3BDC17FDEBF36E1926300A209225F859FB31C1B* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void BlueprintReality.MixCast.Shared.VirtualCamera::set_IsFirstPerson(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualCamera_set_IsFirstPerson_m358EBAB324EB9A1FDD8D18F13E35F3511D1CF0D4 (VirtualCamera_tE3BDC17FDEBF36E1926300A209225F859FB31C1B* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void BlueprintReality.MixCast.Shared.VirtualCamera::set_IsBackgroundTranslucent(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualCamera_set_IsBackgroundTranslucent_m16E2D53F059511E86A1A845663DBE8FC46413FA1 (VirtualCamera_tE3BDC17FDEBF36E1926300A209225F859FB31C1B* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void BlueprintReality.MixCast.Shared.VirtualCamera::set_VideoInputIds(System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualCamera_set_VideoInputIds_m378BA26046BF2BC6530322470DE9742E18BFD808 (VirtualCamera_tE3BDC17FDEBF36E1926300A209225F859FB31C1B* __this, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___value0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<System.String> BlueprintReality.MixCast.Shared.VirtualCamera::get_VideoInputIds()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* VirtualCamera_get_VideoInputIds_mFB7A38A77C2BBCE738E1EE085B3A384055CE8AD0_inline (VirtualCamera_tE3BDC17FDEBF36E1926300A209225F859FB31C1B* __this, const RuntimeMethod* method) ;
// System.Void BlueprintReality.MixCast.Shared.VirtualCamera::set_ExternalComposite(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualCamera_set_ExternalComposite_m74FAD851F33F20CDD07E8FEEBE4D6761C9AF7EAD (VirtualCamera_tE3BDC17FDEBF36E1926300A209225F859FB31C1B* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void BlueprintReality.MixCast.Shared.VirtualCamera::set_FrameBufferDelay(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualCamera_set_FrameBufferDelay_m11CC5C7CE8E6EA06F3C1C8D23B6AD4EE9595476A (VirtualCamera_tE3BDC17FDEBF36E1926300A209225F859FB31C1B* __this, double ___value0, const RuntimeMethod* method) ;
// System.Void BlueprintReality.MixCast.Shared.VirtualCamera::set_OutputPtr(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualCamera_set_OutputPtr_m08CE35FBBC096A189C2AE6E82D5FAD51C60FBE1E (VirtualCamera_tE3BDC17FDEBF36E1926300A209225F859FB31C1B* __this, int64_t ___value0, const RuntimeMethod* method) ;
// System.Void BlueprintReality.MixCast.Shared.VirtualCamera::set_AutoSnapshotEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualCamera_set_AutoSnapshotEnabled_m100FD427D03EBE04B9F0D917F08E1FF3E66ED3E1 (VirtualCamera_tE3BDC17FDEBF36E1926300A209225F859FB31C1B* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void BlueprintReality.MixCast.Shared.VirtualCamera::set_VideoRecordingEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualCamera_set_VideoRecordingEnabled_m98FD4E2EF0903F141C6418C59B1662494845B225 (VirtualCamera_tE3BDC17FDEBF36E1926300A209225F859FB31C1B* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void BlueprintReality.MixCast.Shared.VirtualCamera::set_VideoRecordingOutputPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualCamera_set_VideoRecordingOutputPath_m50D9B64791F050DA494F37C63758F64114C0EA5B (VirtualCamera_tE3BDC17FDEBF36E1926300A209225F859FB31C1B* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void BlueprintReality.MixCast.Shared.VirtualCamera::set_VideoStreamingEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualCamera_set_VideoStreamingEnabled_m365D5A80F70308E2775293A62CC8D0A5EE2ABC9D (VirtualCamera_tE3BDC17FDEBF36E1926300A209225F859FB31C1B* __this, bool ___value0, const RuntimeMethod* method) ;
// System.String BlueprintReality.MixCast.Shared.VirtualCamera::get_Identifier()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* VirtualCamera_get_Identifier_mEB3E5A1767F4C8F0D9F933E1DDD0AC6792627E4E_inline (VirtualCamera_tE3BDC17FDEBF36E1926300A209225F859FB31C1B* __this, const RuntimeMethod* method) ;
// System.Double BlueprintReality.MixCast.Shared.VirtualCamera::get_FieldOfView()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double VirtualCamera_get_FieldOfView_m4A53680A2958AD93774C5E71C9489FB48E295A92_inline (VirtualCamera_tE3BDC17FDEBF36E1926300A209225F859FB31C1B* __this, const RuntimeMethod* method) ;
// System.Int32 BlueprintReality.MixCast.Shared.VirtualCamera::get_RenderResolutionWidth()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VirtualCamera_get_RenderResolutionWidth_m98D10D02754388546B82A964C256B4FF4B4A9DA0_inline (VirtualCamera_tE3BDC17FDEBF36E1926300A209225F859FB31C1B* __this, const RuntimeMethod* method) ;
// System.Int32 BlueprintReality.MixCast.Shared.VirtualCamera::get_RenderResolutionHeight()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VirtualCamera_get_RenderResolutionHeight_m00191951FF1DAB883EAE7335E91834587927FBB6_inline (VirtualCamera_tE3BDC17FDEBF36E1926300A209225F859FB31C1B* __this, const RuntimeMethod* method) ;
// System.Int32 BlueprintReality.MixCast.Shared.VirtualCamera::get_RenderFramerate()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VirtualCamera_get_RenderFramerate_mF0F4BCA562C3238F9EE0448856A3F4E0A39D1F4F_inline (VirtualCamera_tE3BDC17FDEBF36E1926300A209225F859FB31C1B* __this, const RuntimeMethod* method) ;
// System.Boolean BlueprintReality.MixCast.Shared.VirtualCamera::get_ExternalComposite()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool VirtualCamera_get_ExternalComposite_mAAB6F73297B81B95B39E2D45DA2CA5E94A0B080B_inline (VirtualCamera_tE3BDC17FDEBF36E1926300A209225F859FB31C1B* __this, const RuntimeMethod* method) ;
// System.Double BlueprintReality.MixCast.Shared.VirtualCamera::get_FrameBufferDelay()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double VirtualCamera_get_FrameBufferDelay_m3BB072B6372C82D9BB197CE841C68500762FD32A_inline (VirtualCamera_tE3BDC17FDEBF36E1926300A209225F859FB31C1B* __this, const RuntimeMethod* method) ;
// System.Int64 BlueprintReality.MixCast.Shared.VirtualCamera::get_OutputPtr()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t VirtualCamera_get_OutputPtr_mF4AA03E4E508A4199E5CB0D6DDA77B1523D892EF_inline (VirtualCamera_tE3BDC17FDEBF36E1926300A209225F859FB31C1B* __this, const RuntimeMethod* method) ;
// System.Boolean BlueprintReality.MixCast.Shared.VirtualCamera::get_AutoSnapshotEnabled()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool VirtualCamera_get_AutoSnapshotEnabled_m46565D880D1EEBB52393AE36E02C9782AF11367D_inline (VirtualCamera_tE3BDC17FDEBF36E1926300A209225F859FB31C1B* __this, const RuntimeMethod* method) ;
// System.Boolean BlueprintReality.MixCast.Shared.VirtualCamera::get_VideoRecordingEnabled()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool VirtualCamera_get_VideoRecordingEnabled_m1F7882665E5AA652148CF822CC5D81E3A027A5EA_inline (VirtualCamera_tE3BDC17FDEBF36E1926300A209225F859FB31C1B* __this, const RuntimeMethod* method) ;
// System.String BlueprintReality.MixCast.Shared.VirtualCamera::get_VideoRecordingOutputPath()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* VirtualCamera_get_VideoRecordingOutputPath_m33504419471023E4E94B1D9F2F9D2B515DE8165B_inline (VirtualCamera_tE3BDC17FDEBF36E1926300A209225F859FB31C1B* __this, const RuntimeMethod* method) ;
// System.Boolean BlueprintReality.MixCast.Shared.VirtualCamera::get_VideoStreamingEnabled()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool VirtualCamera_get_VideoStreamingEnabled_m7A267C386377825A87B7AFE9D7D5BA0C056B1EB6_inline (VirtualCamera_tE3BDC17FDEBF36E1926300A209225F859FB31C1B* __this, const RuntimeMethod* method) ;
// System.Boolean BlueprintReality.MixCast.Shared.VirtualCamera::get_UsesForeground()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool VirtualCamera_get_UsesForeground_m9FF2D095C3A58E121FF257B1F4447DF925695B1E_inline (VirtualCamera_tE3BDC17FDEBF36E1926300A209225F859FB31C1B* __this, const RuntimeMethod* method) ;
// System.Boolean BlueprintReality.MixCast.Shared.VirtualCamera::get_IsFirstPerson()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool VirtualCamera_get_IsFirstPerson_mE94533EAF07B4CD935C8CF66A8FD4257B0E34183_inline (VirtualCamera_tE3BDC17FDEBF36E1926300A209225F859FB31C1B* __this, const RuntimeMethod* method) ;
// System.Boolean BlueprintReality.MixCast.Shared.VirtualCamera::get_UsesFullRender()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool VirtualCamera_get_UsesFullRender_mC240E649BE2B7B55EC14C66BB6431F1BE9E481F5_inline (VirtualCamera_tE3BDC17FDEBF36E1926300A209225F859FB31C1B* __this, const RuntimeMethod* method) ;
// System.Boolean BlueprintReality.MixCast.Shared.VirtualCamera::get_IsBackgroundTranslucent()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool VirtualCamera_get_IsBackgroundTranslucent_mA09987376A70D5E8BF879D5E049376B377DD03F1_inline (VirtualCamera_tE3BDC17FDEBF36E1926300A209225F859FB31C1B* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m283B617AC29FB0DD6F3A7D8C01D385C25A5F0FAA (StringBuilder_t* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m66A74F455BDFDC3C9ED2D8E1BA4C3A093637C3D8 (StringBuilder_t* __this, int64_t ___value0, const RuntimeMethod* method) ;
// System.Double BlueprintReality.Thrift.Quaternion::get_X()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Quaternion_get_X_m5A99DD904B544C4E0D9AF000731C77559AAF6383_inline (Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14* __this, const RuntimeMethod* method) ;
// System.Double BlueprintReality.Thrift.Quaternion::get_Y()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Quaternion_get_Y_m363D5BDE062AEFEB0E00440BF483CBD30AB95F27_inline (Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14* __this, const RuntimeMethod* method) ;
// System.Double BlueprintReality.Thrift.Quaternion::get_Z()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Quaternion_get_Z_m543A58C65C320661862EB2E9EC8C118C5B3CF56C_inline (Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14* __this, const RuntimeMethod* method) ;
// System.Double BlueprintReality.Thrift.Quaternion::get_W()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Quaternion_get_W_mDD0C1C4E7D8C3EAC68A9D0156FC5E9D291087E14_inline (Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// System.Void BlueprintReality.Thrift.Quaternion::set_W(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion_set_W_m30434119F1741B3E37FE03B02042182A0983E900_inline (Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14* __this, double ___value0, const RuntimeMethod* method) ;
// System.Void BlueprintReality.Thrift.Quaternion::set_X(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion_set_X_mE518C39BABBCF679D6DACC46E253E480D2297586_inline (Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14* __this, double ___value0, const RuntimeMethod* method) ;
// System.Void BlueprintReality.Thrift.Quaternion::set_Y(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion_set_Y_m2B93BF711695CE1FC750D08E0575477175C92625_inline (Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14* __this, double ___value0, const RuntimeMethod* method) ;
// System.Void BlueprintReality.Thrift.Quaternion::set_Z(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion_set_Z_m6C4B20166E3FAA51DE08FC786B2AE6239FF3661D_inline (Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14* __this, double ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion BlueprintReality.Thrift.Quaternion::get_unity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_unity_m4B1F4E3CDD37CBF1853039272839B891A0CFDA4F (Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Quaternion::op_Equality(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_op_Equality_m3DF1D708D3A0AFB11EACF42A9C068EF6DC508FBB_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Quaternion::GetHashCode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Quaternion_GetHashCode_m5F55C34C98E437376595E722BE4EB8A70434F049_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) ;
// System.Double BlueprintReality.Thrift.Vector3::get_X()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Vector3_get_X_mBDD4CEFB5FE45779A8206A8ED7CC94E985B1811B_inline (Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* __this, const RuntimeMethod* method) ;
// System.Double BlueprintReality.Thrift.Vector3::get_Y()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Vector3_get_Y_m12664DD3843DD16A595E1C5BEF11BC8FC0AEC002_inline (Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* __this, const RuntimeMethod* method) ;
// System.Double BlueprintReality.Thrift.Vector3::get_Z()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Vector3_get_Z_m742A1196945ACF63E1B3AD737C8ADBDBB6509820_inline (Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void BlueprintReality.Thrift.Vector3::set_X(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_set_X_mA4D24BFC6E74B2B9228917D0265F74A945A69DB8_inline (Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* __this, double ___value0, const RuntimeMethod* method) ;
// System.Void BlueprintReality.Thrift.Vector3::set_Y(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_set_Y_m30BEE789637841CB70436D81B1818902E92BDC84_inline (Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* __this, double ___value0, const RuntimeMethod* method) ;
// System.Void BlueprintReality.Thrift.Vector3::set_Z(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_set_Z_m3D14EF8D9066ACDCE55D1182B679760CF75F5758_inline (Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* __this, double ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 BlueprintReality.Thrift.Vector3::get_unity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_unity_m059420ED652D66481014C96DFA305761BB80158D (Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector3::GetHashCode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3_GetHashCode_mB08429DC931A85BD29CE11B9ABC77DE7E0E46327_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Void BlueprintReality.Thrift.Pose::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pose__ctor_mBE9D506A0505943399C78C8047B62EBA800D0372 (Pose_t56F6B800CDF4F0273D46059BF45307D69B3F62C3* __this, const RuntimeMethod* method) ;
// System.Void BlueprintReality.Thrift.Pose::set_Position(BlueprintReality.Thrift.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Pose_set_Position_m4FEAA7230DF3E11A79FEC82E6E4450F699815DCF_inline (Pose_t56F6B800CDF4F0273D46059BF45307D69B3F62C3* __this, Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* ___value0, const RuntimeMethod* method) ;
// System.Void BlueprintReality.Thrift.Pose::set_Rotation(BlueprintReality.Thrift.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Pose_set_Rotation_mE34B2D8546F449EACE972EF2CDBA72F0747BD74F_inline (Pose_t56F6B800CDF4F0273D46059BF45307D69B3F62C3* __this, Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14* ___value0, const RuntimeMethod* method) ;
// BlueprintReality.Thrift.Vector3 BlueprintReality.Thrift.Pose::get_Position()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* Pose_get_Position_mA7DB3A7243D9B8BA662790BBB280DC07B05BC9B4_inline (Pose_t56F6B800CDF4F0273D46059BF45307D69B3F62C3* __this, const RuntimeMethod* method) ;
// BlueprintReality.Thrift.Quaternion BlueprintReality.Thrift.Pose::get_Rotation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14* Pose_get_Rotation_m84DE9DF1E06E1DBD0938959E27EB8C521998B06E_inline (Pose_t56F6B800CDF4F0273D46059BF45307D69B3F62C3* __this, const RuntimeMethod* method) ;
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTex::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharedTex__ctor_mC7D5C44C0B80565EA90810EF90B805522833E07A (SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976* __this, const RuntimeMethod* method) ;
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTex::set_Handle(System.Int64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SharedTex_set_Handle_mF9E7DAB17C6E6BD23FADA211B5F4BC63867C8E90_inline (SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976* __this, int64_t ___value0, const RuntimeMethod* method) ;
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTex::set_Width(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SharedTex_set_Width_mDBD3B42833AB023C2F2F8A6919E7362413A18AD7_inline (SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTex::set_Height(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SharedTex_set_Height_m88D20EAB79526A43887086E529940DC006D06B36_inline (SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTex::set_Format(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SharedTex_set_Format_m46B540AC0558D6793F9CB2D17F79F80C63289A92_inline (SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTex::set_ProcId(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharedTex_set_ProcId_mE12F9E7D50F7C4614601E93E67A1ED29FCFA44B5 (SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976* __this, int64_t ___value0, const RuntimeMethod* method) ;
// System.Int64 BlueprintReality.Thrift.SharedTextures.SharedTex::get_Handle()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t SharedTex_get_Handle_m512729E37878AE923590D2256A68A2A0BD12FCE2_inline (SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976* __this, const RuntimeMethod* method) ;
// System.Int32 BlueprintReality.Thrift.SharedTextures.SharedTex::get_Width()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SharedTex_get_Width_m729E44044DC62A766A6116F92F36EC97B9D30EEA_inline (SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976* __this, const RuntimeMethod* method) ;
// System.Int32 BlueprintReality.Thrift.SharedTextures.SharedTex::get_Height()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SharedTex_get_Height_m70CB07877DEC6388E8003B6505EE22A03730B064_inline (SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976* __this, const RuntimeMethod* method) ;
// System.Int32 BlueprintReality.Thrift.SharedTextures.SharedTex::get_Format()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SharedTex_get_Format_m11E0F3EB90F0884DCE26AF618D539534804B0F3B_inline (SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976* __this, const RuntimeMethod* method) ;
// System.Int64 BlueprintReality.Thrift.SharedTextures.SharedTex::get_ProcId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t SharedTex_get_ProcId_m7C71069F0E08FD9343B3F9EE84DBD65BBC16F4A8_inline (SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976* __this, const RuntimeMethod* method) ;
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTexPacket::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharedTexPacket__ctor_m9A285F7D5DAC7A36607AE9AF882D9002D4675B54 (SharedTexPacket_t06FC19BA6F5C2223EECB4BF1BE34A8360027D77A* __this, const RuntimeMethod* method) ;
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTexPacket::set_Id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SharedTexPacket_set_Id_m7C4487D389DD64041C52C6BEB41FE4839BFD81A9_inline (SharedTexPacket_t06FC19BA6F5C2223EECB4BF1BE34A8360027D77A* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTexPacket::set_Info(BlueprintReality.Thrift.SharedTextures.SharedTex)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SharedTexPacket_set_Info_mD3B5E5EBE579216D792AF75ED3785E85D410C0F1_inline (SharedTexPacket_t06FC19BA6F5C2223EECB4BF1BE34A8360027D77A* __this, SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976* ___value0, const RuntimeMethod* method) ;
// BlueprintReality.Thrift.SharedTextures.SharedTex BlueprintReality.Thrift.SharedTextures.SharedTexPacket::get_Info()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976* SharedTexPacket_get_Info_m6EFB0E927254E4032EEC2C478E4D7716C8F8FA06_inline (SharedTexPacket_t06FC19BA6F5C2223EECB4BF1BE34A8360027D77A* __this, const RuntimeMethod* method) ;
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTex::Read(Thrift.Protocol.TProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharedTex_Read_m5BE8C4C9683CCC19736B2D4AD65E8F85AB14E155 (SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976* __this, TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* ___iprot0, const RuntimeMethod* method) ;
// System.String BlueprintReality.Thrift.SharedTextures.SharedTexPacket::get_Id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SharedTexPacket_get_Id_m5FE5414EDEBCE9DA3BC724D203885330ACA76A87_inline (SharedTexPacket_t06FC19BA6F5C2223EECB4BF1BE34A8360027D77A* __this, const RuntimeMethod* method) ;
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTex::Write(Thrift.Protocol.TProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharedTex_Write_m23E04FE4F1A2D9D73B407EE38D0C78E284972C26 (SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976* __this, TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* ___oprot0, const RuntimeMethod* method) ;
// System.Void Thrift.Proxy.HandlerProxy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandlerProxy__ctor_mB0C5F0A4A9FF78103113D6EE93F4E0696C3B2B08 (HandlerProxy_t50A5848626A14999C5ECC9A1DF765110BC836E16* __this, const RuntimeMethod* method) ;
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/Client::.ctor(Thrift.Protocol.TProtocol,Thrift.Protocol.TProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client__ctor_mC0129BEEDCB34A5B58AF97C2948120C9B948E63E (Client_t68F64069A7A7D460F7158797D2F5C0C22676FFA6* __this, TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* ___iprot0, TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* ___oprot1, const RuntimeMethod* method) ;
// System.Void Thrift.Proxy.ClientProxy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientProxy__ctor_m96A8DD4C21191FAD4D8BA8A5861D6BF94D0E8B40 (ClientProxy_tCAB2A9A0BF231DDF8E4924E77E1208C917FC0718* __this, const RuntimeMethod* method) ;
// System.Boolean Thrift.Proxy.ThriftClientProxy::Ensure(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ThriftClientProxy_Ensure_mD17F2E31BB5AA9A2A55E95298347E8C69DA7548C (ThriftClientProxy_t4F7653DE6E5210BC005CA0FE2F734E635558EC56* __this, String_t* ___methodName0, const RuntimeMethod* method) ;
// System.Void Thrift.Transport.TTransportException::.ctor(Thrift.Transport.TTransportException/ExceptionType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTransportException__ctor_m411610E6ABEB5C2CA0D9C8B385438F8DDB7F4E60 (TTransportException_t7BA88D1856162445F81B5F26DB19EE932E6AAF4B* __this, int32_t ___type0, const RuntimeMethod* method) ;
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/Client::send_validate_ping()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_send_validate_ping_m6031BB020D9415FBB481F547E20C5E911EE67E46 (Client_t68F64069A7A7D460F7158797D2F5C0C22676FFA6* __this, const RuntimeMethod* method) ;
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/Client::recv_validate_ping()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_recv_validate_ping_mBF78474403E295887EB8193A26514D191A4F3901 (Client_t68F64069A7A7D460F7158797D2F5C0C22676FFA6* __this, const RuntimeMethod* method) ;
// System.Void Thrift.Protocol.TMessage::.ctor(System.String,Thrift.Protocol.TMessageType,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMessage__ctor_m73265A5C74D3D787AAE27FB7A459580C8637D809 (TMessage_tA7EE1296176D302DA8CB5201A04319D8D3B44043* __this, String_t* ___name0, int32_t ___type1, int32_t ___seqid2, const RuntimeMethod* method) ;
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/validate_ping_args::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void validate_ping_args__ctor_m9214D825B8CBA702E7B487F332361B4E05C4407E (validate_ping_args_t14208A7DFB4229A49964DD8F10489711F552E9DE* __this, const RuntimeMethod* method) ;
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/validate_ping_args::Write(Thrift.Protocol.TProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void validate_ping_args_Write_m8935EBA82F2F866A47AEEEABF806816B31161B34 (validate_ping_args_t14208A7DFB4229A49964DD8F10489711F552E9DE* __this, TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* ___oprot0, const RuntimeMethod* method) ;
// Thrift.Transport.TTransport Thrift.Protocol.TProtocol::get_Transport()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TTransport_tC5405D0CBA5B6B81DF71447B64F47F76B45C6A53* TProtocol_get_Transport_mDD6E0B1DB55B839D353BA90016FE48CAAE91609A_inline (TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* __this, const RuntimeMethod* method) ;
// Thrift.Protocol.TMessageType Thrift.Protocol.TMessage::get_Type()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TMessage_get_Type_m3424E30FC2CE9DA5A36D300E20D383AF42EE16B9_inline (TMessage_tA7EE1296176D302DA8CB5201A04319D8D3B44043* __this, const RuntimeMethod* method) ;
// Thrift.TApplicationException Thrift.TApplicationException::Read(Thrift.Protocol.TProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TApplicationException_t75465AADA2A50020180483E1F89A83530AD60F76* TApplicationException_Read_mD0354E98F032A7FECFA83774099D49265D5E4111 (TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* ___iprot0, const RuntimeMethod* method) ;
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/validate_ping_result::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void validate_ping_result__ctor_m4E92622959821AA5D47FCA0F97EDA0525A2805F2 (validate_ping_result_t0CBE71D3C54F5CABE445DD8EAD534613297BB0C0* __this, const RuntimeMethod* method) ;
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/validate_ping_result::Read(Thrift.Protocol.TProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void validate_ping_result_Read_m831E2CCD687F50A27464AD14415C635F82612C89 (validate_ping_result_t0CBE71D3C54F5CABE445DD8EAD534613297BB0C0* __this, TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* ___iprot0, const RuntimeMethod* method) ;
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/Client::send_validate_function_list()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_send_validate_function_list_mB2687404D4848A204F3B459F215D2C527FE7F9B6 (Client_t68F64069A7A7D460F7158797D2F5C0C22676FFA6* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<System.String> BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/Client::recv_validate_function_list()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* Client_recv_validate_function_list_mE3D5A21FD57FF842A995C047F96604CD905838A8 (Client_t68F64069A7A7D460F7158797D2F5C0C22676FFA6* __this, const RuntimeMethod* method) ;
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/validate_function_list_args::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void validate_function_list_args__ctor_mB11592EB372EA1C4B6D435DA418D54AA6429ED35 (validate_function_list_args_t63D913089E5FFB666F13DFA7CB2DA5B2C9573075* __this, const RuntimeMethod* method) ;
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/validate_function_list_args::Write(Thrift.Protocol.TProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void validate_function_list_args_Write_m88AC862C86DD274BA1CE192CD379AA60A5B89329 (validate_function_list_args_t63D913089E5FFB666F13DFA7CB2DA5B2C9573075* __this, TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* ___oprot0, const RuntimeMethod* method) ;
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/validate_function_list_result::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void validate_function_list_result__ctor_m3504DA701B4E1EEBBAEE4F8024A03AD212D95282 (validate_function_list_result_tEA96B244E3A94307177B3D8736902272FDCE0944* __this, const RuntimeMethod* method) ;
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/validate_function_list_result::Read(Thrift.Protocol.TProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void validate_function_list_result_Read_m89FA5A2D381ECC57B36945EDB5CA9D057B1ED73C (validate_function_list_result_tEA96B244E3A94307177B3D8736902272FDCE0944* __this, TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* ___iprot0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<System.String> BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/validate_function_list_result::get_Success()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* validate_function_list_result_get_Success_m935126A826ED7821006377EE3AEFAE0F418630F0_inline (validate_function_list_result_tEA96B244E3A94307177B3D8736902272FDCE0944* __this, const RuntimeMethod* method) ;
// System.Void Thrift.TApplicationException::.ctor(Thrift.TApplicationException/ExceptionType,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TApplicationException__ctor_mC56AD886EBD86C15A95032A124483E5884A8E1DB (TApplicationException_t75465AADA2A50020180483E1F89A83530AD60F76* __this, int32_t ___type0, String_t* ___message1, const RuntimeMethod* method) ;
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/Client::SharedTextureNotify(System.String,BlueprintReality.Thrift.SharedTextures.SharedTex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_SharedTextureNotify_mF1FC9E2B3294A7EB36E4430522DFF4F40E909E54 (Client_t68F64069A7A7D460F7158797D2F5C0C22676FFA6* __this, String_t* ___texId0, SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976* ___texture1, const RuntimeMethod* method) ;
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/Client::send_SharedTextureNotify(System.String,BlueprintReality.Thrift.SharedTextures.SharedTex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_send_SharedTextureNotify_m2B70836E0A00A063095DEC1C213277FFB3DF8B0E (Client_t68F64069A7A7D460F7158797D2F5C0C22676FFA6* __this, String_t* ___texId0, SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976* ___texture1, const RuntimeMethod* method) ;
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/Client::recv_SharedTextureNotify()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_recv_SharedTextureNotify_m1142C6EECEC831306B4370182087E3BE6DD624E7 (Client_t68F64069A7A7D460F7158797D2F5C0C22676FFA6* __this, const RuntimeMethod* method) ;
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/SharedTextureNotify_args::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharedTextureNotify_args__ctor_mAAED46770AA71CC2762C15DF6B1EA8862175EE5A (SharedTextureNotify_args_t0EBD41B2A9EFE8C795E976A11ED2D89278821EF9* __this, const RuntimeMethod* method) ;
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/SharedTextureNotify_args::set_TexId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharedTextureNotify_args_set_TexId_m3728BF1B5F5037753B73D43A3C1EA1A7D60DEB17 (SharedTextureNotify_args_t0EBD41B2A9EFE8C795E976A11ED2D89278821EF9* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/SharedTextureNotify_args::set_Texture(BlueprintReality.Thrift.SharedTextures.SharedTex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharedTextureNotify_args_set_Texture_mF58719354885F0823FB2AB9F6E58E0D23C23844E (SharedTextureNotify_args_t0EBD41B2A9EFE8C795E976A11ED2D89278821EF9* __this, SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976* ___value0, const RuntimeMethod* method) ;
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/SharedTextureNotify_args::Write(Thrift.Protocol.TProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharedTextureNotify_args_Write_m85C05DD0EE7874110CA347F8B2CF0E4DE8325C51 (SharedTextureNotify_args_t0EBD41B2A9EFE8C795E976A11ED2D89278821EF9* __this, TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* ___oprot0, const RuntimeMethod* method) ;
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/SharedTextureNotify_result::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharedTextureNotify_result__ctor_m017F4BB9C0DA36E09A9315F2EC0A50D41A7CCCD2 (SharedTextureNotify_result_t773233FF03B1FFB18E8EA55F4632A79916885CE7* __this, const RuntimeMethod* method) ;
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/SharedTextureNotify_result::Read(Thrift.Protocol.TProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharedTextureNotify_result_Read_m237328D6B0980A055EB660887EB812F1C41E0418 (SharedTextureNotify_result_t773233FF03B1FFB18E8EA55F4632A79916885CE7* __this, TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* ___iprot0, const RuntimeMethod* method) ;
// BlueprintReality.Thrift.SharedTextures.SharedTex BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/Client::SharedTextureRequest(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976* Client_SharedTextureRequest_m628EB5400C17305D07808F6476B80A375D358BE0 (Client_t68F64069A7A7D460F7158797D2F5C0C22676FFA6* __this, String_t* ___texId0, const RuntimeMethod* method) ;
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/Client::send_SharedTextureRequest(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_send_SharedTextureRequest_m82AB7219E1ED0713D2C77CB51B821440A2A8A750 (Client_t68F64069A7A7D460F7158797D2F5C0C22676FFA6* __this, String_t* ___texId0, const RuntimeMethod* method) ;
// BlueprintReality.Thrift.SharedTextures.SharedTex BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/Client::recv_SharedTextureRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976* Client_recv_SharedTextureRequest_m20A400DDAE739EC5BDD6F8D5DF35D8D22BC306E4 (Client_t68F64069A7A7D460F7158797D2F5C0C22676FFA6* __this, const RuntimeMethod* method) ;
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/SharedTextureRequest_args::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharedTextureRequest_args__ctor_mE8E4DE4BEF073E388B9B87BD00BE74148C2538C9 (SharedTextureRequest_args_tD5AE63605C74E527A24E126E22DAFFB08F81D4B7* __this, const RuntimeMethod* method) ;
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/SharedTextureRequest_args::set_TexId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharedTextureRequest_args_set_TexId_m0F07CC48583F654B83B575DFFEE0EAE27C1AB5DA (SharedTextureRequest_args_tD5AE63605C74E527A24E126E22DAFFB08F81D4B7* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/SharedTextureRequest_args::Write(Thrift.Protocol.TProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharedTextureRequest_args_Write_mD90E3B77CF750D225C443F57AEC04DE7C9503D1E (SharedTextureRequest_args_tD5AE63605C74E527A24E126E22DAFFB08F81D4B7* __this, TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* ___oprot0, const RuntimeMethod* method) ;
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/SharedTextureRequest_result::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharedTextureRequest_result__ctor_mA0A006973ABCD0228000AE8DBF8728468FAC21CF (SharedTextureRequest_result_tF57E540E873EE83BE065ED81A2313266C8AD1961* __this, const RuntimeMethod* method) ;
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/SharedTextureRequest_result::Read(Thrift.Protocol.TProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharedTextureRequest_result_Read_m76BD7630D693726BD104E3E3B83345B0176AD5C8 (SharedTextureRequest_result_tF57E540E873EE83BE065ED81A2313266C8AD1961* __this, TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* ___iprot0, const RuntimeMethod* method) ;
// BlueprintReality.Thrift.SharedTextures.SharedTex BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/SharedTextureRequest_result::get_Success()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976* SharedTextureRequest_result_get_Success_m63FB9F39B5F34985FCA1AB2DE87E0083043C508F_inline (SharedTextureRequest_result_tF57E540E873EE83BE065ED81A2313266C8AD1961* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/Processor/ProcessFunction>::.ctor()
inline void Dictionary_2__ctor_mD43CDB1F0181CB472C907CE2B05BD159E4A88287 (Dictionary_2_t7B93365370466FE4082FCBCD182F556A83D94328* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t7B93365370466FE4082FCBCD182F556A83D94328*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/Processor/ProcessFunction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProcessFunction__ctor_mDD819122361247B1C7A46FE821EA1914FE07CA3D (ProcessFunction_t6587BCE70A9CECF27480919C464CD9C54E2DD0DB* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/Processor/ProcessFunction>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_mC3633C96031658AC059034B7084BF7CB87CB8D2C (Dictionary_2_t7B93365370466FE4082FCBCD182F556A83D94328* __this, String_t* ___key0, ProcessFunction_t6587BCE70A9CECF27480919C464CD9C54E2DD0DB* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t7B93365370466FE4082FCBCD182F556A83D94328*, String_t*, ProcessFunction_t6587BCE70A9CECF27480919C464CD9C54E2DD0DB*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___key0, ___value1, method);
}
// System.String Thrift.Protocol.TMessage::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TMessage_get_Name_m63AD656ADB643075A24B60FEB0CDFC5934EDCF6E_inline (TMessage_tA7EE1296176D302DA8CB5201A04319D8D3B44043* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/Processor/ProcessFunction>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m587BAC6ADCCA39275B81A0081062BDEAC0C5C053 (Dictionary_2_t7B93365370466FE4082FCBCD182F556A83D94328* __this, String_t* ___key0, ProcessFunction_t6587BCE70A9CECF27480919C464CD9C54E2DD0DB** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t7B93365370466FE4082FCBCD182F556A83D94328*, String_t*, ProcessFunction_t6587BCE70A9CECF27480919C464CD9C54E2DD0DB**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___key0, ___value1, method);
}
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Int32 Thrift.Protocol.TMessage::get_SeqID()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TMessage_get_SeqID_mE72821208FEC318AE52CAD25CCDFF120DFE58D7E_inline (TMessage_tA7EE1296176D302DA8CB5201A04319D8D3B44043* __this, const RuntimeMethod* method) ;
// System.Void Thrift.TApplicationException::Write(Thrift.Protocol.TProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TApplicationException_Write_mF0A4D7FEB7F1464B3242E97D68AAD7459ADB0D56 (TApplicationException_t75465AADA2A50020180483E1F89A83530AD60F76* __this, TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* ___oprot0, const RuntimeMethod* method) ;
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/Processor/ProcessFunction::Invoke(System.Int32,Thrift.Protocol.TProtocol,Thrift.Protocol.TProtocol)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProcessFunction_Invoke_m491088033029858C7E02390BC87BE3C46F70E4AF_inline (ProcessFunction_t6587BCE70A9CECF27480919C464CD9C54E2DD0DB* __this, int32_t ___seqid0, TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* ___iprot1, TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* ___oprot2, const RuntimeMethod* method) ;
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/validate_ping_args::Read(Thrift.Protocol.TProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void validate_ping_args_Read_m9FD0BA0618294795551B7197EAC1E2BB37ABC037 (validate_ping_args_t14208A7DFB4229A49964DD8F10489711F552E9DE* __this, TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* ___iprot0, const RuntimeMethod* method) ;
// System.Object Thrift.Proxy.HandlerProxy::Invoke(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HandlerProxy_Invoke_mB23BE90B7DEA26CC9B4697AEDB43566086E07BB7 (HandlerProxy_t50A5848626A14999C5ECC9A1DF765110BC836E16* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/validate_ping_result::Write(Thrift.Protocol.TProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void validate_ping_result_Write_mB1206BEB1CCA0C14126A1E210DFAECD77D60373F (validate_ping_result_t0CBE71D3C54F5CABE445DD8EAD534613297BB0C0* __this, TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* ___oprot0, const RuntimeMethod* method) ;
// System.IO.TextWriter System.Console::get_Error()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* Console_get_Error_m8DA94D4EFFF9756FF8B44263E256C7341761BD49_inline (const RuntimeMethod* method) ;
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/validate_function_list_args::Read(Thrift.Protocol.TProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void validate_function_list_args_Read_m465BBAE050E7F9A392EC84AC820CF71FF92514EC (validate_function_list_args_t63D913089E5FFB666F13DFA7CB2DA5B2C9573075* __this, TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* ___iprot0, const RuntimeMethod* method) ;
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/validate_function_list_result::set_Success(System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void validate_function_list_result_set_Success_m3AEFB0C5A7DCFBF865C5B59BD3360797EAC32039 (validate_function_list_result_tEA96B244E3A94307177B3D8736902272FDCE0944* __this, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___value0, const RuntimeMethod* method) ;
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/validate_function_list_result::Write(Thrift.Protocol.TProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void validate_function_list_result_Write_m376C3EB769DD55BCA92DE7F8DD8DC3DF56C6A161 (validate_function_list_result_tEA96B244E3A94307177B3D8736902272FDCE0944* __this, TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* ___oprot0, const RuntimeMethod* method) ;
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/SharedTextureNotify_args::Read(Thrift.Protocol.TProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharedTextureNotify_args_Read_m5D80BDDF2CBE156608CE566348F2152B5D57068D (SharedTextureNotify_args_t0EBD41B2A9EFE8C795E976A11ED2D89278821EF9* __this, TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* ___iprot0, const RuntimeMethod* method) ;
// System.String BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/SharedTextureNotify_args::get_TexId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SharedTextureNotify_args_get_TexId_m125E16F14550F1E5389757C1461376157D35DF83_inline (SharedTextureNotify_args_t0EBD41B2A9EFE8C795E976A11ED2D89278821EF9* __this, const RuntimeMethod* method) ;
// BlueprintReality.Thrift.SharedTextures.SharedTex BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/SharedTextureNotify_args::get_Texture()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976* SharedTextureNotify_args_get_Texture_m6CF9C6C9D4CDA3D699132B2C7A6E1722B9F3AFA3_inline (SharedTextureNotify_args_t0EBD41B2A9EFE8C795E976A11ED2D89278821EF9* __this, const RuntimeMethod* method) ;
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/SharedTextureNotify_result::Write(Thrift.Protocol.TProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharedTextureNotify_result_Write_mFDEE36E200645FE5E59157364C34A48EAFF72C87 (SharedTextureNotify_result_t773233FF03B1FFB18E8EA55F4632A79916885CE7* __this, TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* ___oprot0, const RuntimeMethod* method) ;
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/SharedTextureRequest_args::Read(Thrift.Protocol.TProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharedTextureRequest_args_Read_mBFC6C2D90C567203BB6E2AF126CAB28CE8F3B1CD (SharedTextureRequest_args_tD5AE63605C74E527A24E126E22DAFFB08F81D4B7* __this, TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* ___iprot0, const RuntimeMethod* method) ;
// System.String BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/SharedTextureRequest_args::get_TexId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SharedTextureRequest_args_get_TexId_m475442629A7A94876AA466576474A97222451577_inline (SharedTextureRequest_args_tD5AE63605C74E527A24E126E22DAFFB08F81D4B7* __this, const RuntimeMethod* method) ;
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/SharedTextureRequest_result::set_Success(BlueprintReality.Thrift.SharedTextures.SharedTex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharedTextureRequest_result_set_Success_m6AA5CB2EA56C8E8A5F36742BA75BDF0355945913 (SharedTextureRequest_result_tF57E540E873EE83BE065ED81A2313266C8AD1961* __this, SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976* ___value0, const RuntimeMethod* method) ;
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/SharedTextureRequest_result::Write(Thrift.Protocol.TProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharedTextureRequest_result_Write_m4241976788BC1936A8F060CCDE804DBC740542DA (SharedTextureRequest_result_tF57E540E873EE83BE065ED81A2313266C8AD1961* __this, TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* ___oprot0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Quaternion::Dot(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Dot_m4A80D03D7B7DEC054E2175E53D072675649C6713_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Quaternion::IsEqualUsingDot(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_IsEqualUsingDot_m5C6AC5F5C56B27C25DDF612BEEF40F28CA44CA31_inline (float ___dot0, const RuntimeMethod* method) ;
// System.Int32 System.Single::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2 (float* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: BlueprintReality.MixCast.Shared.ExperienceMetadata/Isset
IL2CPP_EXTERN_C void Isset_tD03FFA74537B9BF61968ACF6C242B6ABCA91BB12_marshal_pinvoke(const Isset_tD03FFA74537B9BF61968ACF6C242B6ABCA91BB12& unmarshaled, Isset_tD03FFA74537B9BF61968ACF6C242B6ABCA91BB12_marshaled_pinvoke& marshaled)
{
	marshaled.___mixcastVersion_0 = static_cast<int32_t>(unmarshaled.___mixcastVersion_0);
	marshaled.___experienceExePath_1 = static_cast<int32_t>(unmarshaled.___experienceExePath_1);
	marshaled.___mainWindowHandle_2 = static_cast<int32_t>(unmarshaled.___mainWindowHandle_2);
	marshaled.___mainProcessId_3 = static_cast<int32_t>(unmarshaled.___mainProcessId_3);
	marshaled.___projectId_4 = static_cast<int32_t>(unmarshaled.___projectId_4);
	marshaled.___experienceTitle_5 = static_cast<int32_t>(unmarshaled.___experienceTitle_5);
	marshaled.___organizationName_6 = static_cast<int32_t>(unmarshaled.___organizationName_6);
	marshaled.___engineVersion_7 = static_cast<int32_t>(unmarshaled.___engineVersion_7);
	marshaled.___graphicsType_8 = static_cast<int32_t>(unmarshaled.___graphicsType_8);
	marshaled.___trackingType_9 = static_cast<int32_t>(unmarshaled.___trackingType_9);
	marshaled.___alphaIsPremultiplied_10 = static_cast<int32_t>(unmarshaled.___alphaIsPremultiplied_10);
	marshaled.___colorSpaceIsLinear_11 = static_cast<int32_t>(unmarshaled.___colorSpaceIsLinear_11);
	marshaled.___canRenderOpaqueBg_12 = static_cast<int32_t>(unmarshaled.___canRenderOpaqueBg_12);
	marshaled.___canRenderTransparentBg_13 = static_cast<int32_t>(unmarshaled.___canRenderTransparentBg_13);
	marshaled.___canRenderSeparateOpaque_14 = static_cast<int32_t>(unmarshaled.___canRenderSeparateOpaque_14);
}
IL2CPP_EXTERN_C void Isset_tD03FFA74537B9BF61968ACF6C242B6ABCA91BB12_marshal_pinvoke_back(const Isset_tD03FFA74537B9BF61968ACF6C242B6ABCA91BB12_marshaled_pinvoke& marshaled, Isset_tD03FFA74537B9BF61968ACF6C242B6ABCA91BB12& unmarshaled)
{
	bool unmarshaledmixcastVersion_temp_0 = false;
	unmarshaledmixcastVersion_temp_0 = static_cast<bool>(marshaled.___mixcastVersion_0);
	unmarshaled.___mixcastVersion_0 = unmarshaledmixcastVersion_temp_0;
	bool unmarshaledexperienceExePath_temp_1 = false;
	unmarshaledexperienceExePath_temp_1 = static_cast<bool>(marshaled.___experienceExePath_1);
	unmarshaled.___experienceExePath_1 = unmarshaledexperienceExePath_temp_1;
	bool unmarshaledmainWindowHandle_temp_2 = false;
	unmarshaledmainWindowHandle_temp_2 = static_cast<bool>(marshaled.___mainWindowHandle_2);
	unmarshaled.___mainWindowHandle_2 = unmarshaledmainWindowHandle_temp_2;
	bool unmarshaledmainProcessId_temp_3 = false;
	unmarshaledmainProcessId_temp_3 = static_cast<bool>(marshaled.___mainProcessId_3);
	unmarshaled.___mainProcessId_3 = unmarshaledmainProcessId_temp_3;
	bool unmarshaledprojectId_temp_4 = false;
	unmarshaledprojectId_temp_4 = static_cast<bool>(marshaled.___projectId_4);
	unmarshaled.___projectId_4 = unmarshaledprojectId_temp_4;
	bool unmarshaledexperienceTitle_temp_5 = false;
	unmarshaledexperienceTitle_temp_5 = static_cast<bool>(marshaled.___experienceTitle_5);
	unmarshaled.___experienceTitle_5 = unmarshaledexperienceTitle_temp_5;
	bool unmarshaledorganizationName_temp_6 = false;
	unmarshaledorganizationName_temp_6 = static_cast<bool>(marshaled.___organizationName_6);
	unmarshaled.___organizationName_6 = unmarshaledorganizationName_temp_6;
	bool unmarshaledengineVersion_temp_7 = false;
	unmarshaledengineVersion_temp_7 = static_cast<bool>(marshaled.___engineVersion_7);
	unmarshaled.___engineVersion_7 = unmarshaledengineVersion_temp_7;
	bool unmarshaledgraphicsType_temp_8 = false;
	unmarshaledgraphicsType_temp_8 = static_cast<bool>(marshaled.___graphicsType_8);
	unmarshaled.___graphicsType_8 = unmarshaledgraphicsType_temp_8;
	bool unmarshaledtrackingType_temp_9 = false;
	unmarshaledtrackingType_temp_9 = static_cast<bool>(marshaled.___trackingType_9);
	unmarshaled.___trackingType_9 = unmarshaledtrackingType_temp_9;
	bool unmarshaledalphaIsPremultiplied_temp_10 = false;
	unmarshaledalphaIsPremultiplied_temp_10 = static_cast<bool>(marshaled.___alphaIsPremultiplied_10);
	unmarshaled.___alphaIsPremultiplied_10 = unmarshaledalphaIsPremultiplied_temp_10;
	bool unmarshaledcolorSpaceIsLinear_temp_11 = false;
	unmarshaledcolorSpaceIsLinear_temp_11 = static_cast<bool>(marshaled.___colorSpaceIsLinear_11);
	unmarshaled.___colorSpaceIsLinear_11 = unmarshaledcolorSpaceIsLinear_temp_11;
	bool unmarshaledcanRenderOpaqueBg_temp_12 = false;
	unmarshaledcanRenderOpaqueBg_temp_12 = static_cast<bool>(marshaled.___canRenderOpaqueBg_12);
	unmarshaled.___canRenderOpaqueBg_12 = unmarshaledcanRenderOpaqueBg_temp_12;
	bool unmarshaledcanRenderTransparentBg_temp_13 = false;
	unmarshaledcanRenderTransparentBg_temp_13 = static_cast<bool>(marshaled.___canRenderTransparentBg_13);
	unmarshaled.___canRenderTransparentBg_13 = unmarshaledcanRenderTransparentBg_temp_13;
	bool unmarshaledcanRenderSeparateOpaque_temp_14 = false;
	unmarshaledcanRenderSeparateOpaque_temp_14 = static_cast<bool>(marshaled.___canRenderSeparateOpaque_14);
	unmarshaled.___canRenderSeparateOpaque_14 = unmarshaledcanRenderSeparateOpaque_temp_14;
}
// Conversion method for clean up from marshalling of: BlueprintReality.MixCast.Shared.ExperienceMetadata/Isset
IL2CPP_EXTERN_C void Isset_tD03FFA74537B9BF61968ACF6C242B6ABCA91BB12_marshal_pinvoke_cleanup(Isset_tD03FFA74537B9BF61968ACF6C242B6ABCA91BB12_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: BlueprintReality.MixCast.Shared.ExperienceMetadata/Isset
IL2CPP_EXTERN_C void Isset_tD03FFA74537B9BF61968ACF6C242B6ABCA91BB12_marshal_com(const Isset_tD03FFA74537B9BF61968ACF6C242B6ABCA91BB12& unmarshaled, Isset_tD03FFA74537B9BF61968ACF6C242B6ABCA91BB12_marshaled_com& marshaled)
{
	marshaled.___mixcastVersion_0 = static_cast<int32_t>(unmarshaled.___mixcastVersion_0);
	marshaled.___experienceExePath_1 = static_cast<int32_t>(unmarshaled.___experienceExePath_1);
	marshaled.___mainWindowHandle_2 = static_cast<int32_t>(unmarshaled.___mainWindowHandle_2);
	marshaled.___mainProcessId_3 = static_cast<int32_t>(unmarshaled.___mainProcessId_3);
	marshaled.___projectId_4 = static_cast<int32_t>(unmarshaled.___projectId_4);
	marshaled.___experienceTitle_5 = static_cast<int32_t>(unmarshaled.___experienceTitle_5);
	marshaled.___organizationName_6 = static_cast<int32_t>(unmarshaled.___organizationName_6);
	marshaled.___engineVersion_7 = static_cast<int32_t>(unmarshaled.___engineVersion_7);
	marshaled.___graphicsType_8 = static_cast<int32_t>(unmarshaled.___graphicsType_8);
	marshaled.___trackingType_9 = static_cast<int32_t>(unmarshaled.___trackingType_9);
	marshaled.___alphaIsPremultiplied_10 = static_cast<int32_t>(unmarshaled.___alphaIsPremultiplied_10);
	marshaled.___colorSpaceIsLinear_11 = static_cast<int32_t>(unmarshaled.___colorSpaceIsLinear_11);
	marshaled.___canRenderOpaqueBg_12 = static_cast<int32_t>(unmarshaled.___canRenderOpaqueBg_12);
	marshaled.___canRenderTransparentBg_13 = static_cast<int32_t>(unmarshaled.___canRenderTransparentBg_13);
	marshaled.___canRenderSeparateOpaque_14 = static_cast<int32_t>(unmarshaled.___canRenderSeparateOpaque_14);
}
IL2CPP_EXTERN_C void Isset_tD03FFA74537B9BF61968ACF6C242B6ABCA91BB12_marshal_com_back(const Isset_tD03FFA74537B9BF61968ACF6C242B6ABCA91BB12_marshaled_com& marshaled, Isset_tD03FFA74537B9BF61968ACF6C242B6ABCA91BB12& unmarshaled)
{
	bool unmarshaledmixcastVersion_temp_0 = false;
	unmarshaledmixcastVersion_temp_0 = static_cast<bool>(marshaled.___mixcastVersion_0);
	unmarshaled.___mixcastVersion_0 = unmarshaledmixcastVersion_temp_0;
	bool unmarshaledexperienceExePath_temp_1 = false;
	unmarshaledexperienceExePath_temp_1 = static_cast<bool>(marshaled.___experienceExePath_1);
	unmarshaled.___experienceExePath_1 = unmarshaledexperienceExePath_temp_1;
	bool unmarshaledmainWindowHandle_temp_2 = false;
	unmarshaledmainWindowHandle_temp_2 = static_cast<bool>(marshaled.___mainWindowHandle_2);
	unmarshaled.___mainWindowHandle_2 = unmarshaledmainWindowHandle_temp_2;
	bool unmarshaledmainProcessId_temp_3 = false;
	unmarshaledmainProcessId_temp_3 = static_cast<bool>(marshaled.___mainProcessId_3);
	unmarshaled.___mainProcessId_3 = unmarshaledmainProcessId_temp_3;
	bool unmarshaledprojectId_temp_4 = false;
	unmarshaledprojectId_temp_4 = static_cast<bool>(marshaled.___projectId_4);
	unmarshaled.___projectId_4 = unmarshaledprojectId_temp_4;
	bool unmarshaledexperienceTitle_temp_5 = false;
	unmarshaledexperienceTitle_temp_5 = static_cast<bool>(marshaled.___experienceTitle_5);
	unmarshaled.___experienceTitle_5 = unmarshaledexperienceTitle_temp_5;
	bool unmarshaledorganizationName_temp_6 = false;
	unmarshaledorganizationName_temp_6 = static_cast<bool>(marshaled.___organizationName_6);
	unmarshaled.___organizationName_6 = unmarshaledorganizationName_temp_6;
	bool unmarshaledengineVersion_temp_7 = false;
	unmarshaledengineVersion_temp_7 = static_cast<bool>(marshaled.___engineVersion_7);
	unmarshaled.___engineVersion_7 = unmarshaledengineVersion_temp_7;
	bool unmarshaledgraphicsType_temp_8 = false;
	unmarshaledgraphicsType_temp_8 = static_cast<bool>(marshaled.___graphicsType_8);
	unmarshaled.___graphicsType_8 = unmarshaledgraphicsType_temp_8;
	bool unmarshaledtrackingType_temp_9 = false;
	unmarshaledtrackingType_temp_9 = static_cast<bool>(marshaled.___trackingType_9);
	unmarshaled.___trackingType_9 = unmarshaledtrackingType_temp_9;
	bool unmarshaledalphaIsPremultiplied_temp_10 = false;
	unmarshaledalphaIsPremultiplied_temp_10 = static_cast<bool>(marshaled.___alphaIsPremultiplied_10);
	unmarshaled.___alphaIsPremultiplied_10 = unmarshaledalphaIsPremultiplied_temp_10;
	bool unmarshaledcolorSpaceIsLinear_temp_11 = false;
	unmarshaledcolorSpaceIsLinear_temp_11 = static_cast<bool>(marshaled.___colorSpaceIsLinear_11);
	unmarshaled.___colorSpaceIsLinear_11 = unmarshaledcolorSpaceIsLinear_temp_11;
	bool unmarshaledcanRenderOpaqueBg_temp_12 = false;
	unmarshaledcanRenderOpaqueBg_temp_12 = static_cast<bool>(marshaled.___canRenderOpaqueBg_12);
	unmarshaled.___canRenderOpaqueBg_12 = unmarshaledcanRenderOpaqueBg_temp_12;
	bool unmarshaledcanRenderTransparentBg_temp_13 = false;
	unmarshaledcanRenderTransparentBg_temp_13 = static_cast<bool>(marshaled.___canRenderTransparentBg_13);
	unmarshaled.___canRenderTransparentBg_13 = unmarshaledcanRenderTransparentBg_temp_13;
	bool unmarshaledcanRenderSeparateOpaque_temp_14 = false;
	unmarshaledcanRenderSeparateOpaque_temp_14 = static_cast<bool>(marshaled.___canRenderSeparateOpaque_14);
	unmarshaled.___canRenderSeparateOpaque_14 = unmarshaledcanRenderSeparateOpaque_temp_14;
}
// Conversion method for clean up from marshalling of: BlueprintReality.MixCast.Shared.ExperienceMetadata/Isset
IL2CPP_EXTERN_C void Isset_tD03FFA74537B9BF61968ACF6C242B6ABCA91BB12_marshal_com_cleanup(Isset_tD03FFA74537B9BF61968ACF6C242B6ABCA91BB12_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String BlueprintReality.MixCast.Shared.VideoInput::get_Identifier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VideoInput_get_Identifier_m4A052FADC16C20BBB596787D84E02E299B5EC0C2 (VideoInput_tBCABAFE80056975164CAF3CE7E52DABA81AE3BCB* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____identifier_0;
		return L_0;
	}
}
// System.Void BlueprintReality.MixCast.Shared.VideoInput::set_Identifier(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoInput_set_Identifier_mABB73422B4F3B0900190D2AA4E3BF27BBA99D1D3 (VideoInput_tBCABAFE80056975164CAF3CE7E52DABA81AE3BCB* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		Isset_t5AC4C50CE0E568495E13A2BA5709A48DE5906488* L_0 = (&__this->_____isset_6);
		L_0->___identifier_0 = (bool)1;
		String_t* L_1 = ___value0;
		__this->____identifier_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____identifier_0), (void*)L_1);
		return;
	}
}
// System.Double BlueprintReality.MixCast.Shared.VideoInput::get_FieldOfView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double VideoInput_get_FieldOfView_m41BA5046686A377E708F5F9F90F9E4CAD4512B74 (VideoInput_tBCABAFE80056975164CAF3CE7E52DABA81AE3BCB* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->____fieldOfView_1;
		return L_0;
	}
}
// System.Void BlueprintReality.MixCast.Shared.VideoInput::set_FieldOfView(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoInput_set_FieldOfView_m750192A9BF0FCD5A8440367726117C761F90C483 (VideoInput_tBCABAFE80056975164CAF3CE7E52DABA81AE3BCB* __this, double ___value0, const RuntimeMethod* method) 
{
	{
		Isset_t5AC4C50CE0E568495E13A2BA5709A48DE5906488* L_0 = (&__this->_____isset_6);
		L_0->___fieldOfView_1 = (bool)1;
		double L_1 = ___value0;
		__this->____fieldOfView_1 = L_1;
		return;
	}
}
// BlueprintReality.Thrift.Vector3 BlueprintReality.MixCast.Shared.VideoInput::get_CurrentPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* VideoInput_get_CurrentPosition_mE2FDD6624494E919D1291C3C8671F04953830D58 (VideoInput_tBCABAFE80056975164CAF3CE7E52DABA81AE3BCB* __this, const RuntimeMethod* method) 
{
	{
		Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* L_0 = __this->____currentPosition_2;
		return L_0;
	}
}
// System.Void BlueprintReality.MixCast.Shared.VideoInput::set_CurrentPosition(BlueprintReality.Thrift.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoInput_set_CurrentPosition_m93318500221B0820BFC3894D5E447A7C30298ED0 (VideoInput_tBCABAFE80056975164CAF3CE7E52DABA81AE3BCB* __this, Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* ___value0, const RuntimeMethod* method) 
{
	{
		Isset_t5AC4C50CE0E568495E13A2BA5709A48DE5906488* L_0 = (&__this->_____isset_6);
		L_0->___currentPosition_2 = (bool)1;
		Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* L_1 = ___value0;
		__this->____currentPosition_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____currentPosition_2), (void*)L_1);
		return;
	}
}
// BlueprintReality.Thrift.Quaternion BlueprintReality.MixCast.Shared.VideoInput::get_CurrentRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14* VideoInput_get_CurrentRotation_m201FDC3DA521B6D824D352AB624323318FE0AE39 (VideoInput_tBCABAFE80056975164CAF3CE7E52DABA81AE3BCB* __this, const RuntimeMethod* method) 
{
	{
		Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14* L_0 = __this->____currentRotation_3;
		return L_0;
	}
}
// System.Void BlueprintReality.MixCast.Shared.VideoInput::set_CurrentRotation(BlueprintReality.Thrift.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoInput_set_CurrentRotation_m30073E9317440700AB49CF189318198D39A6EA3E (VideoInput_tBCABAFE80056975164CAF3CE7E52DABA81AE3BCB* __this, Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14* ___value0, const RuntimeMethod* method) 
{
	{
		Isset_t5AC4C50CE0E568495E13A2BA5709A48DE5906488* L_0 = (&__this->_____isset_6);
		L_0->___currentRotation_3 = (bool)1;
		Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14* L_1 = ___value0;
		__this->____currentRotation_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____currentRotation_3), (void*)L_1);
		return;
	}
}
// System.Boolean BlueprintReality.MixCast.Shared.VideoInput::get_ProjectToUser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoInput_get_ProjectToUser_m19CCFE79F7E71C7650F4DD9FF6C60A5C84C6944A (VideoInput_tBCABAFE80056975164CAF3CE7E52DABA81AE3BCB* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____projectToUser_4;
		return L_0;
	}
}
// System.Void BlueprintReality.MixCast.Shared.VideoInput::set_ProjectToUser(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoInput_set_ProjectToUser_m46A48E1ED5C8AC2373884F2B3A8F77B3070D966D (VideoInput_tBCABAFE80056975164CAF3CE7E52DABA81AE3BCB* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		Isset_t5AC4C50CE0E568495E13A2BA5709A48DE5906488* L_0 = (&__this->_____isset_6);
		L_0->___projectToUser_4 = (bool)1;
		bool L_1 = ___value0;
		__this->____projectToUser_4 = L_1;
		return;
	}
}
// System.Collections.Generic.List`1<System.String> BlueprintReality.MixCast.Shared.VideoInput::get_ProjectToCameras()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* VideoInput_get_ProjectToCameras_mBA765B2AED959C6A912F72EF273CA8B8F2C64319 (VideoInput_tBCABAFE80056975164CAF3CE7E52DABA81AE3BCB* __this, const RuntimeMethod* method) 
{
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->____projectToCameras_5;
		return L_0;
	}
}
// System.Void BlueprintReality.MixCast.Shared.VideoInput::set_ProjectToCameras(System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoInput_set_ProjectToCameras_m8CF4C0D4950A351B10E78ABB4AA3573EBD26C2D3 (VideoInput_tBCABAFE80056975164CAF3CE7E52DABA81AE3BCB* __this, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___value0, const RuntimeMethod* method) 
{
	{
		Isset_t5AC4C50CE0E568495E13A2BA5709A48DE5906488* L_0 = (&__this->_____isset_6);
		L_0->___projectToCameras_5 = (bool)1;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1 = ___value0;
		__this->____projectToCameras_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____projectToCameras_5), (void*)L_1);
		return;
	}
}
// System.Void BlueprintReality.MixCast.Shared.VideoInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoInput__ctor_m4C1817F90A29D62E41CC4A796D91C8B602C48B6A (VideoInput_tBCABAFE80056975164CAF3CE7E52DABA81AE3BCB* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void BlueprintReality.MixCast.Shared.VideoInput::Read(Thrift.Protocol.TProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoInput_Read_m4B79717D870846B18159C9606CF4388D4BCE3B7F (VideoInput_tBCABAFE80056975164CAF3CE7E52DABA81AE3BCB* __this, TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* ___iprot0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TField_tF4D9D8EFE767C142914693E0E787547F0213D334 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int16_t V_1 = 0;
	TList_t901068FC67AF1D67BF97378377E2FBDB40D54C1B V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	String_t* V_4 = NULL;
	{
		TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_0 = ___iprot0;
		NullCheck(L_0);
		TProtocol_IncrementRecursionDepth_m92B440A7308F6D7012C73B74A6406855A29FF58B(L_0, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_01bc:
			{// begin finally (depth: 1)
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_1 = ___iprot0;
				NullCheck(L_1);
				TProtocol_DecrementRecursionDepth_m049900374B8368A8AEB03E6FC93DF288EA1BE44B(L_1, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_2 = ___iprot0;
				NullCheck(L_2);
				TStruct_tAD67F1F0C45235334F9440B6A587DB03A0CE5C96 L_3;
				L_3 = VirtualFuncInvoker0< TStruct_tAD67F1F0C45235334F9440B6A587DB03A0CE5C96 >::Invoke(29 /* Thrift.Protocol.TStruct Thrift.Protocol.TProtocol::ReadStructBegin() */, L_2);
			}

IL_000d_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_4 = ___iprot0;
				NullCheck(L_4);
				TField_tF4D9D8EFE767C142914693E0E787547F0213D334 L_5;
				L_5 = VirtualFuncInvoker0< TField_tF4D9D8EFE767C142914693E0E787547F0213D334 >::Invoke(31 /* Thrift.Protocol.TField Thrift.Protocol.TProtocol::ReadFieldBegin() */, L_4);
				V_0 = L_5;
				uint8_t L_6;
				L_6 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_0), NULL);
				if (!L_6)
				{
					goto IL_01b4_1;
				}
			}
			{
				int16_t L_7;
				L_7 = TField_get_ID_m512A7F246CCD70AD2C473FA5AF09E6ECC8AB8B1A_inline((&V_0), NULL);
				V_1 = L_7;
				int16_t L_8 = V_1;
				switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_8, 1)))
				{
					case 0:
					{
						goto IL_004d_1;
					}
					case 1:
					{
						goto IL_007b_1;
					}
					case 2:
					{
						goto IL_00a8_1;
					}
					case 3:
					{
						goto IL_00e1_1;
					}
					case 4:
					{
						goto IL_011a_1;
					}
					case 5:
					{
						goto IL_0141_1;
					}
				}
			}
			{
				goto IL_019c_1;
			}

IL_004d_1:
			{
				uint8_t L_9;
				L_9 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_0), NULL);
				if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)11)))))
				{
					goto IL_0069_1;
				}
			}
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_10 = ___iprot0;
				NullCheck(L_10);
				String_t* L_11;
				L_11 = VirtualFuncInvoker0< String_t* >::Invoke(45 /* System.String Thrift.Protocol.TProtocol::ReadString() */, L_10);
				VideoInput_set_Identifier_mABB73422B4F3B0900190D2AA4E3BF27BBA99D1D3(__this, L_11, NULL);
				goto IL_01a9_1;
			}

IL_0069_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_12 = ___iprot0;
				uint8_t L_13;
				L_13 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_0), NULL);
				TProtocolUtil_Skip_m61E2B7C700479ECC6AD4E86636C1235C30B5A38F(L_12, L_13, NULL);
				goto IL_01a9_1;
			}

IL_007b_1:
			{
				uint8_t L_14;
				L_14 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_0), NULL);
				if ((!(((uint32_t)L_14) == ((uint32_t)4))))
				{
					goto IL_0096_1;
				}
			}
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_15 = ___iprot0;
				NullCheck(L_15);
				double L_16;
				L_16 = VirtualFuncInvoker0< double >::Invoke(44 /* System.Double Thrift.Protocol.TProtocol::ReadDouble() */, L_15);
				VideoInput_set_FieldOfView_m750192A9BF0FCD5A8440367726117C761F90C483(__this, L_16, NULL);
				goto IL_01a9_1;
			}

IL_0096_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_17 = ___iprot0;
				uint8_t L_18;
				L_18 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_0), NULL);
				TProtocolUtil_Skip_m61E2B7C700479ECC6AD4E86636C1235C30B5A38F(L_17, L_18, NULL);
				goto IL_01a9_1;
			}

IL_00a8_1:
			{
				uint8_t L_19;
				L_19 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_0), NULL);
				if ((!(((uint32_t)L_19) == ((uint32_t)((int32_t)12)))))
				{
					goto IL_00cf_1;
				}
			}
			{
				Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* L_20 = (Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55*)il2cpp_codegen_object_new(Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55_il2cpp_TypeInfo_var);
				NullCheck(L_20);
				Vector3__ctor_mCAFEBD9384F7BA33874D50B8E48A7A3839C3BB20(L_20, NULL);
				VideoInput_set_CurrentPosition_m93318500221B0820BFC3894D5E447A7C30298ED0(__this, L_20, NULL);
				Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* L_21;
				L_21 = VideoInput_get_CurrentPosition_mE2FDD6624494E919D1291C3C8671F04953830D58_inline(__this, NULL);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_22 = ___iprot0;
				NullCheck(L_21);
				Vector3_Read_m9D8873909C5EE03472C0E2D094626BF6CFB7E5E7(L_21, L_22, NULL);
				goto IL_01a9_1;
			}

IL_00cf_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_23 = ___iprot0;
				uint8_t L_24;
				L_24 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_0), NULL);
				TProtocolUtil_Skip_m61E2B7C700479ECC6AD4E86636C1235C30B5A38F(L_23, L_24, NULL);
				goto IL_01a9_1;
			}

IL_00e1_1:
			{
				uint8_t L_25;
				L_25 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_0), NULL);
				if ((!(((uint32_t)L_25) == ((uint32_t)((int32_t)12)))))
				{
					goto IL_0108_1;
				}
			}
			{
				Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14* L_26 = (Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14*)il2cpp_codegen_object_new(Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14_il2cpp_TypeInfo_var);
				NullCheck(L_26);
				Quaternion__ctor_mF918C4EAF6C09059CCFE7B52C82E199E11C185DA(L_26, NULL);
				VideoInput_set_CurrentRotation_m30073E9317440700AB49CF189318198D39A6EA3E(__this, L_26, NULL);
				Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14* L_27;
				L_27 = VideoInput_get_CurrentRotation_m201FDC3DA521B6D824D352AB624323318FE0AE39_inline(__this, NULL);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_28 = ___iprot0;
				NullCheck(L_27);
				Quaternion_Read_m0DE7EE832B4D8BFFC1A79C7FF48C15B324224B8D(L_27, L_28, NULL);
				goto IL_01a9_1;
			}

IL_0108_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_29 = ___iprot0;
				uint8_t L_30;
				L_30 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_0), NULL);
				TProtocolUtil_Skip_m61E2B7C700479ECC6AD4E86636C1235C30B5A38F(L_29, L_30, NULL);
				goto IL_01a9_1;
			}

IL_011a_1:
			{
				uint8_t L_31;
				L_31 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_0), NULL);
				if ((!(((uint32_t)L_31) == ((uint32_t)2))))
				{
					goto IL_0132_1;
				}
			}
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_32 = ___iprot0;
				NullCheck(L_32);
				bool L_33;
				L_33 = VirtualFuncInvoker0< bool >::Invoke(39 /* System.Boolean Thrift.Protocol.TProtocol::ReadBool() */, L_32);
				VideoInput_set_ProjectToUser_m46A48E1ED5C8AC2373884F2B3A8F77B3070D966D(__this, L_33, NULL);
				goto IL_01a9_1;
			}

IL_0132_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_34 = ___iprot0;
				uint8_t L_35;
				L_35 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_0), NULL);
				TProtocolUtil_Skip_m61E2B7C700479ECC6AD4E86636C1235C30B5A38F(L_34, L_35, NULL);
				goto IL_01a9_1;
			}

IL_0141_1:
			{
				uint8_t L_36;
				L_36 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_0), NULL);
				if ((!(((uint32_t)L_36) == ((uint32_t)((int32_t)15)))))
				{
					goto IL_018d_1;
				}
			}
			{
				List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_37 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
				NullCheck(L_37);
				List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_37, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
				VideoInput_set_ProjectToCameras_m8CF4C0D4950A351B10E78ABB4AA3573EBD26C2D3(__this, L_37, NULL);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_38 = ___iprot0;
				NullCheck(L_38);
				TList_t901068FC67AF1D67BF97378377E2FBDB40D54C1B L_39;
				L_39 = VirtualFuncInvoker0< TList_t901068FC67AF1D67BF97378377E2FBDB40D54C1B >::Invoke(35 /* Thrift.Protocol.TList Thrift.Protocol.TProtocol::ReadListBegin() */, L_38);
				V_2 = L_39;
				V_3 = 0;
				goto IL_017b_1;
			}

IL_0162_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_40 = ___iprot0;
				NullCheck(L_40);
				String_t* L_41;
				L_41 = VirtualFuncInvoker0< String_t* >::Invoke(45 /* System.String Thrift.Protocol.TProtocol::ReadString() */, L_40);
				V_4 = L_41;
				List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_42;
				L_42 = VideoInput_get_ProjectToCameras_mBA765B2AED959C6A912F72EF273CA8B8F2C64319_inline(__this, NULL);
				String_t* L_43 = V_4;
				NullCheck(L_42);
				List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_42, L_43, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
				int32_t L_44 = V_3;
				V_3 = ((int32_t)il2cpp_codegen_add(L_44, 1));
			}

IL_017b_1:
			{
				int32_t L_45 = V_3;
				int32_t L_46;
				L_46 = TList_get_Count_mC247FFC2E5F7D3F1AD406B549324A08C2097C6DC_inline((&V_2), NULL);
				if ((((int32_t)L_45) < ((int32_t)L_46)))
				{
					goto IL_0162_1;
				}
			}
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_47 = ___iprot0;
				NullCheck(L_47);
				VirtualActionInvoker0::Invoke(36 /* System.Void Thrift.Protocol.TProtocol::ReadListEnd() */, L_47);
				goto IL_01a9_1;
			}

IL_018d_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_48 = ___iprot0;
				uint8_t L_49;
				L_49 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_0), NULL);
				TProtocolUtil_Skip_m61E2B7C700479ECC6AD4E86636C1235C30B5A38F(L_48, L_49, NULL);
				goto IL_01a9_1;
			}

IL_019c_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_50 = ___iprot0;
				uint8_t L_51;
				L_51 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_0), NULL);
				TProtocolUtil_Skip_m61E2B7C700479ECC6AD4E86636C1235C30B5A38F(L_50, L_51, NULL);
			}

IL_01a9_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_52 = ___iprot0;
				NullCheck(L_52);
				VirtualActionInvoker0::Invoke(32 /* System.Void Thrift.Protocol.TProtocol::ReadFieldEnd() */, L_52);
				goto IL_000d_1;
			}

IL_01b4_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_53 = ___iprot0;
				NullCheck(L_53);
				VirtualActionInvoker0::Invoke(30 /* System.Void Thrift.Protocol.TProtocol::ReadStructEnd() */, L_53);
				goto IL_01c3;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_01c3:
	{
		return;
	}
}
// System.Void BlueprintReality.MixCast.Shared.VideoInput::Write(Thrift.Protocol.TProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoInput_Write_mDE4BA3A1B1EBF85FD9C9DC71A50FCA37EB18B80B (VideoInput_tBCABAFE80056975164CAF3CE7E52DABA81AE3BCB* __this, TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* ___oprot0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B8A49A0353D350D3914D9B4B8223F51C1CB133);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24DF95401885DF3F59ABAE4A56A5D6940BD4487D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2B2BC85449767EE682B36713D9302082AFED952A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral521EA713AE1F6152B31F87B56805275D6D8AC601);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7BEFE703372F7C6FF280CF3F91284DA67B5BDDCA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB0A7FF8F03BF3DF33E6B5D8A0E5A1B3BCCE3843F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA53F816032589B38815BEA869258DAE9C7914E9);
		s_Il2CppMethodInitialized = true;
	}
	TStruct_tAD67F1F0C45235334F9440B6A587DB03A0CE5C96 V_0;
	memset((&V_0), 0, sizeof(V_0));
	TField_tF4D9D8EFE767C142914693E0E787547F0213D334 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 V_2;
	memset((&V_2), 0, sizeof(V_2));
	String_t* V_3 = NULL;
	{
		TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_0 = ___oprot0;
		NullCheck(L_0);
		TProtocol_IncrementRecursionDepth_m92B440A7308F6D7012C73B74A6406855A29FF58B(L_0, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_022a:
			{// begin finally (depth: 1)
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_1 = ___oprot0;
				NullCheck(L_1);
				TProtocol_DecrementRecursionDepth_m049900374B8368A8AEB03E6FC93DF288EA1BE44B(L_1, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				TStruct__ctor_mD56EA112D651038138D3BC7203C3606718E5CB3F((&V_0), _stringLiteral7BEFE703372F7C6FF280CF3F91284DA67B5BDDCA, NULL);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_2 = ___oprot0;
				TStruct_tAD67F1F0C45235334F9440B6A587DB03A0CE5C96 L_3 = V_0;
				NullCheck(L_2);
				VirtualActionInvoker1< TStruct_tAD67F1F0C45235334F9440B6A587DB03A0CE5C96 >::Invoke(8 /* System.Void Thrift.Protocol.TProtocol::WriteStructBegin(Thrift.Protocol.TStruct) */, L_2, L_3);
				il2cpp_codegen_initobj((&V_1), sizeof(TField_tF4D9D8EFE767C142914693E0E787547F0213D334));
				String_t* L_4;
				L_4 = VideoInput_get_Identifier_m4A052FADC16C20BBB596787D84E02E299B5EC0C2_inline(__this, NULL);
				if (!L_4)
				{
					goto IL_006c_1;
				}
			}
			{
				Isset_t5AC4C50CE0E568495E13A2BA5709A48DE5906488* L_5 = (&__this->_____isset_6);
				bool L_6 = L_5->___identifier_0;
				if (!L_6)
				{
					goto IL_006c_1;
				}
			}
			{
				TField_set_Name_mAD35FC0847F990535FAF3E3032CD117B560AF751_inline((&V_1), _stringLiteral00B8A49A0353D350D3914D9B4B8223F51C1CB133, NULL);
				TField_set_Type_m2AA4AF23C96A26CB269B78B067489E10F055E983_inline((&V_1), ((int32_t)11), NULL);
				TField_set_ID_m68843CC49A2A49966729F299A58A2BBC6FCC4F01_inline((&V_1), (int16_t)1, NULL);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_7 = ___oprot0;
				TField_tF4D9D8EFE767C142914693E0E787547F0213D334 L_8 = V_1;
				NullCheck(L_7);
				VirtualActionInvoker1< TField_tF4D9D8EFE767C142914693E0E787547F0213D334 >::Invoke(10 /* System.Void Thrift.Protocol.TProtocol::WriteFieldBegin(Thrift.Protocol.TField) */, L_7, L_8);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_9 = ___oprot0;
				String_t* L_10;
				L_10 = VideoInput_get_Identifier_m4A052FADC16C20BBB596787D84E02E299B5EC0C2_inline(__this, NULL);
				NullCheck(L_9);
				VirtualActionInvoker1< String_t* >::Invoke(25 /* System.Void Thrift.Protocol.TProtocol::WriteString(System.String) */, L_9, L_10);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_11 = ___oprot0;
				NullCheck(L_11);
				VirtualActionInvoker0::Invoke(11 /* System.Void Thrift.Protocol.TProtocol::WriteFieldEnd() */, L_11);
			}

IL_006c_1:
			{
				Isset_t5AC4C50CE0E568495E13A2BA5709A48DE5906488* L_12 = (&__this->_____isset_6);
				bool L_13 = L_12->___fieldOfView_1;
				if (!L_13)
				{
					goto IL_00ae_1;
				}
			}
			{
				TField_set_Name_mAD35FC0847F990535FAF3E3032CD117B560AF751_inline((&V_1), _stringLiteral24DF95401885DF3F59ABAE4A56A5D6940BD4487D, NULL);
				TField_set_Type_m2AA4AF23C96A26CB269B78B067489E10F055E983_inline((&V_1), 4, NULL);
				TField_set_ID_m68843CC49A2A49966729F299A58A2BBC6FCC4F01_inline((&V_1), (int16_t)2, NULL);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_14 = ___oprot0;
				TField_tF4D9D8EFE767C142914693E0E787547F0213D334 L_15 = V_1;
				NullCheck(L_14);
				VirtualActionInvoker1< TField_tF4D9D8EFE767C142914693E0E787547F0213D334 >::Invoke(10 /* System.Void Thrift.Protocol.TProtocol::WriteFieldBegin(Thrift.Protocol.TField) */, L_14, L_15);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_16 = ___oprot0;
				double L_17;
				L_17 = VideoInput_get_FieldOfView_m41BA5046686A377E708F5F9F90F9E4CAD4512B74_inline(__this, NULL);
				NullCheck(L_16);
				VirtualActionInvoker1< double >::Invoke(24 /* System.Void Thrift.Protocol.TProtocol::WriteDouble(System.Double) */, L_16, L_17);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_18 = ___oprot0;
				NullCheck(L_18);
				VirtualActionInvoker0::Invoke(11 /* System.Void Thrift.Protocol.TProtocol::WriteFieldEnd() */, L_18);
			}

IL_00ae_1:
			{
				Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* L_19;
				L_19 = VideoInput_get_CurrentPosition_mE2FDD6624494E919D1291C3C8671F04953830D58_inline(__this, NULL);
				if (!L_19)
				{
					goto IL_00f9_1;
				}
			}
			{
				Isset_t5AC4C50CE0E568495E13A2BA5709A48DE5906488* L_20 = (&__this->_____isset_6);
				bool L_21 = L_20->___currentPosition_2;
				if (!L_21)
				{
					goto IL_00f9_1;
				}
			}
			{
				TField_set_Name_mAD35FC0847F990535FAF3E3032CD117B560AF751_inline((&V_1), _stringLiteral521EA713AE1F6152B31F87B56805275D6D8AC601, NULL);
				TField_set_Type_m2AA4AF23C96A26CB269B78B067489E10F055E983_inline((&V_1), ((int32_t)12), NULL);
				TField_set_ID_m68843CC49A2A49966729F299A58A2BBC6FCC4F01_inline((&V_1), (int16_t)3, NULL);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_22 = ___oprot0;
				TField_tF4D9D8EFE767C142914693E0E787547F0213D334 L_23 = V_1;
				NullCheck(L_22);
				VirtualActionInvoker1< TField_tF4D9D8EFE767C142914693E0E787547F0213D334 >::Invoke(10 /* System.Void Thrift.Protocol.TProtocol::WriteFieldBegin(Thrift.Protocol.TField) */, L_22, L_23);
				Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* L_24;
				L_24 = VideoInput_get_CurrentPosition_mE2FDD6624494E919D1291C3C8671F04953830D58_inline(__this, NULL);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_25 = ___oprot0;
				NullCheck(L_24);
				Vector3_Write_mB350FC59FBEB5FA8D0255E8BE137A9F921607BFF(L_24, L_25, NULL);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_26 = ___oprot0;
				NullCheck(L_26);
				VirtualActionInvoker0::Invoke(11 /* System.Void Thrift.Protocol.TProtocol::WriteFieldEnd() */, L_26);
			}

IL_00f9_1:
			{
				Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14* L_27;
				L_27 = VideoInput_get_CurrentRotation_m201FDC3DA521B6D824D352AB624323318FE0AE39_inline(__this, NULL);
				if (!L_27)
				{
					goto IL_0144_1;
				}
			}
			{
				Isset_t5AC4C50CE0E568495E13A2BA5709A48DE5906488* L_28 = (&__this->_____isset_6);
				bool L_29 = L_28->___currentRotation_3;
				if (!L_29)
				{
					goto IL_0144_1;
				}
			}
			{
				TField_set_Name_mAD35FC0847F990535FAF3E3032CD117B560AF751_inline((&V_1), _stringLiteralB0A7FF8F03BF3DF33E6B5D8A0E5A1B3BCCE3843F, NULL);
				TField_set_Type_m2AA4AF23C96A26CB269B78B067489E10F055E983_inline((&V_1), ((int32_t)12), NULL);
				TField_set_ID_m68843CC49A2A49966729F299A58A2BBC6FCC4F01_inline((&V_1), (int16_t)4, NULL);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_30 = ___oprot0;
				TField_tF4D9D8EFE767C142914693E0E787547F0213D334 L_31 = V_1;
				NullCheck(L_30);
				VirtualActionInvoker1< TField_tF4D9D8EFE767C142914693E0E787547F0213D334 >::Invoke(10 /* System.Void Thrift.Protocol.TProtocol::WriteFieldBegin(Thrift.Protocol.TField) */, L_30, L_31);
				Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14* L_32;
				L_32 = VideoInput_get_CurrentRotation_m201FDC3DA521B6D824D352AB624323318FE0AE39_inline(__this, NULL);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_33 = ___oprot0;
				NullCheck(L_32);
				Quaternion_Write_m1B5494004EA15AE513F8B66F3B0DF7BFBED9346B(L_32, L_33, NULL);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_34 = ___oprot0;
				NullCheck(L_34);
				VirtualActionInvoker0::Invoke(11 /* System.Void Thrift.Protocol.TProtocol::WriteFieldEnd() */, L_34);
			}

IL_0144_1:
			{
				Isset_t5AC4C50CE0E568495E13A2BA5709A48DE5906488* L_35 = (&__this->_____isset_6);
				bool L_36 = L_35->___projectToUser_4;
				if (!L_36)
				{
					goto IL_0186_1;
				}
			}
			{
				TField_set_Name_mAD35FC0847F990535FAF3E3032CD117B560AF751_inline((&V_1), _stringLiteralEA53F816032589B38815BEA869258DAE9C7914E9, NULL);
				TField_set_Type_m2AA4AF23C96A26CB269B78B067489E10F055E983_inline((&V_1), 2, NULL);
				TField_set_ID_m68843CC49A2A49966729F299A58A2BBC6FCC4F01_inline((&V_1), (int16_t)5, NULL);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_37 = ___oprot0;
				TField_tF4D9D8EFE767C142914693E0E787547F0213D334 L_38 = V_1;
				NullCheck(L_37);
				VirtualActionInvoker1< TField_tF4D9D8EFE767C142914693E0E787547F0213D334 >::Invoke(10 /* System.Void Thrift.Protocol.TProtocol::WriteFieldBegin(Thrift.Protocol.TField) */, L_37, L_38);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_39 = ___oprot0;
				bool L_40;
				L_40 = VideoInput_get_ProjectToUser_m19CCFE79F7E71C7650F4DD9FF6C60A5C84C6944A_inline(__this, NULL);
				NullCheck(L_39);
				VirtualActionInvoker1< bool >::Invoke(19 /* System.Void Thrift.Protocol.TProtocol::WriteBool(System.Boolean) */, L_39, L_40);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_41 = ___oprot0;
				NullCheck(L_41);
				VirtualActionInvoker0::Invoke(11 /* System.Void Thrift.Protocol.TProtocol::WriteFieldEnd() */, L_41);
			}

IL_0186_1:
			{
				List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_42;
				L_42 = VideoInput_get_ProjectToCameras_mBA765B2AED959C6A912F72EF273CA8B8F2C64319_inline(__this, NULL);
				if (!L_42)
				{
					goto IL_021c_1;
				}
			}
			{
				Isset_t5AC4C50CE0E568495E13A2BA5709A48DE5906488* L_43 = (&__this->_____isset_6);
				bool L_44 = L_43->___projectToCameras_5;
				if (!L_44)
				{
					goto IL_021c_1;
				}
			}
			{
				TField_set_Name_mAD35FC0847F990535FAF3E3032CD117B560AF751_inline((&V_1), _stringLiteral2B2BC85449767EE682B36713D9302082AFED952A, NULL);
				TField_set_Type_m2AA4AF23C96A26CB269B78B067489E10F055E983_inline((&V_1), ((int32_t)15), NULL);
				TField_set_ID_m68843CC49A2A49966729F299A58A2BBC6FCC4F01_inline((&V_1), (int16_t)6, NULL);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_45 = ___oprot0;
				TField_tF4D9D8EFE767C142914693E0E787547F0213D334 L_46 = V_1;
				NullCheck(L_45);
				VirtualActionInvoker1< TField_tF4D9D8EFE767C142914693E0E787547F0213D334 >::Invoke(10 /* System.Void Thrift.Protocol.TProtocol::WriteFieldBegin(Thrift.Protocol.TField) */, L_45, L_46);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_47 = ___oprot0;
				List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_48;
				L_48 = VideoInput_get_ProjectToCameras_mBA765B2AED959C6A912F72EF273CA8B8F2C64319_inline(__this, NULL);
				NullCheck(L_48);
				int32_t L_49;
				L_49 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_48, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
				TList_t901068FC67AF1D67BF97378377E2FBDB40D54C1B L_50;
				memset((&L_50), 0, sizeof(L_50));
				TList__ctor_m17DE205A02F15CE5C16553DA637E2408B7B565D9((&L_50), ((int32_t)11), L_49, /*hidden argument*/NULL);
				NullCheck(L_47);
				VirtualActionInvoker1< TList_t901068FC67AF1D67BF97378377E2FBDB40D54C1B >::Invoke(15 /* System.Void Thrift.Protocol.TProtocol::WriteListBegin(Thrift.Protocol.TList) */, L_47, L_50);
				List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_51;
				L_51 = VideoInput_get_ProjectToCameras_mBA765B2AED959C6A912F72EF273CA8B8F2C64319_inline(__this, NULL);
				NullCheck(L_51);
				Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 L_52;
				L_52 = List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D(L_51, List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var);
				V_2 = L_52;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0202_1:
					{// begin finally (depth: 2)
						Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7((&V_2), Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var);
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_01f7_2;
					}

IL_01e8_2:
					{
						String_t* L_53;
						L_53 = Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_inline((&V_2), Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var);
						V_3 = L_53;
						TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_54 = ___oprot0;
						String_t* L_55 = V_3;
						NullCheck(L_54);
						VirtualActionInvoker1< String_t* >::Invoke(25 /* System.Void Thrift.Protocol.TProtocol::WriteString(System.String) */, L_54, L_55);
					}

IL_01f7_2:
					{
						bool L_56;
						L_56 = Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED((&V_2), Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var);
						if (L_56)
						{
							goto IL_01e8_2;
						}
					}
					{
						goto IL_0210_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_0210_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_57 = ___oprot0;
				NullCheck(L_57);
				VirtualActionInvoker0::Invoke(16 /* System.Void Thrift.Protocol.TProtocol::WriteListEnd() */, L_57);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_58 = ___oprot0;
				NullCheck(L_58);
				VirtualActionInvoker0::Invoke(11 /* System.Void Thrift.Protocol.TProtocol::WriteFieldEnd() */, L_58);
			}

IL_021c_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_59 = ___oprot0;
				NullCheck(L_59);
				VirtualActionInvoker0::Invoke(12 /* System.Void Thrift.Protocol.TProtocol::WriteFieldStop() */, L_59);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_60 = ___oprot0;
				NullCheck(L_60);
				VirtualActionInvoker0::Invoke(9 /* System.Void Thrift.Protocol.TProtocol::WriteStructEnd() */, L_60);
				goto IL_0231;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0231:
	{
		return;
	}
}
// System.String BlueprintReality.MixCast.Shared.VideoInput::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VideoInput_ToString_mA53A9F1AF51CC50DA018D1C1CCE909AC620907A1 (VideoInput_tBCABAFE80056975164CAF3CE7E52DABA81AE3BCB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2D5ECCACAD40C64CC7C818E3A488043C7B90B644);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral32FBFE3DBAFD929B4BDBCD7836AA6520607B53CF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral39CE2D35F7CB1ED49F040390DFB825CCB48725E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88F4291E3C060A1D87FF3F6BA438F5521E763A1F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99DF8A7F98F666693814D9E88045C27B589143EE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBCAE3469D74631FAA7C17C674264959D398C4322);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD64DE515DE159C401BB82652225D6BE22CDAD7A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE906303A779D4A8F03FC8312B8E4E9696969B438);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	bool V_1 = false;
	StringBuilder_t* G_B15_0 = NULL;
	StringBuilder_t* G_B14_0 = NULL;
	String_t* G_B16_0 = NULL;
	StringBuilder_t* G_B16_1 = NULL;
	StringBuilder_t* G_B23_0 = NULL;
	StringBuilder_t* G_B22_0 = NULL;
	String_t* G_B24_0 = NULL;
	StringBuilder_t* G_B24_1 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_mCD797D942316CB356205FD96415B0B7581CDAD60(L_0, _stringLiteral39CE2D35F7CB1ED49F040390DFB825CCB48725E1, NULL);
		V_0 = L_0;
		V_1 = (bool)1;
		String_t* L_1;
		L_1 = VideoInput_get_Identifier_m4A052FADC16C20BBB596787D84E02E299B5EC0C2_inline(__this, NULL);
		if (!L_1)
		{
			goto IL_004c;
		}
	}
	{
		Isset_t5AC4C50CE0E568495E13A2BA5709A48DE5906488* L_2 = (&__this->_____isset_6);
		bool L_3 = L_2->___identifier_0;
		if (!L_3)
		{
			goto IL_004c;
		}
	}
	{
		bool L_4 = V_1;
		if (L_4)
		{
			goto IL_0031;
		}
	}
	{
		StringBuilder_t* L_5 = V_0;
		NullCheck(L_5);
		StringBuilder_t* L_6;
		L_6 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_5, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
	}

IL_0031:
	{
		V_1 = (bool)0;
		StringBuilder_t* L_7 = V_0;
		NullCheck(L_7);
		StringBuilder_t* L_8;
		L_8 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_7, _stringLiteral88F4291E3C060A1D87FF3F6BA438F5521E763A1F, NULL);
		StringBuilder_t* L_9 = V_0;
		String_t* L_10;
		L_10 = VideoInput_get_Identifier_m4A052FADC16C20BBB596787D84E02E299B5EC0C2_inline(__this, NULL);
		NullCheck(L_9);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_9, L_10, NULL);
	}

IL_004c:
	{
		Isset_t5AC4C50CE0E568495E13A2BA5709A48DE5906488* L_12 = (&__this->_____isset_6);
		bool L_13 = L_12->___fieldOfView_1;
		if (!L_13)
		{
			goto IL_0083;
		}
	}
	{
		bool L_14 = V_1;
		if (L_14)
		{
			goto IL_0068;
		}
	}
	{
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_15, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
	}

IL_0068:
	{
		V_1 = (bool)0;
		StringBuilder_t* L_17 = V_0;
		NullCheck(L_17);
		StringBuilder_t* L_18;
		L_18 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, _stringLiteral99DF8A7F98F666693814D9E88045C27B589143EE, NULL);
		StringBuilder_t* L_19 = V_0;
		double L_20;
		L_20 = VideoInput_get_FieldOfView_m41BA5046686A377E708F5F9F90F9E4CAD4512B74_inline(__this, NULL);
		NullCheck(L_19);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m078D9861582DCD6037F533DF9C2FFEF0A54269E0(L_19, L_20, NULL);
	}

IL_0083:
	{
		Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* L_22;
		L_22 = VideoInput_get_CurrentPosition_mE2FDD6624494E919D1291C3C8671F04953830D58_inline(__this, NULL);
		if (!L_22)
		{
			goto IL_00d6;
		}
	}
	{
		Isset_t5AC4C50CE0E568495E13A2BA5709A48DE5906488* L_23 = (&__this->_____isset_6);
		bool L_24 = L_23->___currentPosition_2;
		if (!L_24)
		{
			goto IL_00d6;
		}
	}
	{
		bool L_25 = V_1;
		if (L_25)
		{
			goto IL_00a7;
		}
	}
	{
		StringBuilder_t* L_26 = V_0;
		NullCheck(L_26);
		StringBuilder_t* L_27;
		L_27 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_26, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
	}

IL_00a7:
	{
		V_1 = (bool)0;
		StringBuilder_t* L_28 = V_0;
		NullCheck(L_28);
		StringBuilder_t* L_29;
		L_29 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_28, _stringLiteralE906303A779D4A8F03FC8312B8E4E9696969B438, NULL);
		StringBuilder_t* L_30 = V_0;
		Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* L_31;
		L_31 = VideoInput_get_CurrentPosition_mE2FDD6624494E919D1291C3C8671F04953830D58_inline(__this, NULL);
		G_B14_0 = L_30;
		if (!L_31)
		{
			G_B15_0 = L_30;
			goto IL_00cb;
		}
	}
	{
		Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* L_32;
		L_32 = VideoInput_get_CurrentPosition_mE2FDD6624494E919D1291C3C8671F04953830D58_inline(__this, NULL);
		NullCheck(L_32);
		String_t* L_33;
		L_33 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_32);
		G_B16_0 = L_33;
		G_B16_1 = G_B14_0;
		goto IL_00d0;
	}

IL_00cb:
	{
		G_B16_0 = _stringLiteralD64DE515DE159C401BB82652225D6BE22CDAD7A1;
		G_B16_1 = G_B15_0;
	}

IL_00d0:
	{
		NullCheck(G_B16_1);
		StringBuilder_t* L_34;
		L_34 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(G_B16_1, G_B16_0, NULL);
	}

IL_00d6:
	{
		Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14* L_35;
		L_35 = VideoInput_get_CurrentRotation_m201FDC3DA521B6D824D352AB624323318FE0AE39_inline(__this, NULL);
		if (!L_35)
		{
			goto IL_0129;
		}
	}
	{
		Isset_t5AC4C50CE0E568495E13A2BA5709A48DE5906488* L_36 = (&__this->_____isset_6);
		bool L_37 = L_36->___currentRotation_3;
		if (!L_37)
		{
			goto IL_0129;
		}
	}
	{
		bool L_38 = V_1;
		if (L_38)
		{
			goto IL_00fa;
		}
	}
	{
		StringBuilder_t* L_39 = V_0;
		NullCheck(L_39);
		StringBuilder_t* L_40;
		L_40 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_39, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
	}

IL_00fa:
	{
		V_1 = (bool)0;
		StringBuilder_t* L_41 = V_0;
		NullCheck(L_41);
		StringBuilder_t* L_42;
		L_42 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_41, _stringLiteral2D5ECCACAD40C64CC7C818E3A488043C7B90B644, NULL);
		StringBuilder_t* L_43 = V_0;
		Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14* L_44;
		L_44 = VideoInput_get_CurrentRotation_m201FDC3DA521B6D824D352AB624323318FE0AE39_inline(__this, NULL);
		G_B22_0 = L_43;
		if (!L_44)
		{
			G_B23_0 = L_43;
			goto IL_011e;
		}
	}
	{
		Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14* L_45;
		L_45 = VideoInput_get_CurrentRotation_m201FDC3DA521B6D824D352AB624323318FE0AE39_inline(__this, NULL);
		NullCheck(L_45);
		String_t* L_46;
		L_46 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_45);
		G_B24_0 = L_46;
		G_B24_1 = G_B22_0;
		goto IL_0123;
	}

IL_011e:
	{
		G_B24_0 = _stringLiteralD64DE515DE159C401BB82652225D6BE22CDAD7A1;
		G_B24_1 = G_B23_0;
	}

IL_0123:
	{
		NullCheck(G_B24_1);
		StringBuilder_t* L_47;
		L_47 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(G_B24_1, G_B24_0, NULL);
	}

IL_0129:
	{
		Isset_t5AC4C50CE0E568495E13A2BA5709A48DE5906488* L_48 = (&__this->_____isset_6);
		bool L_49 = L_48->___projectToUser_4;
		if (!L_49)
		{
			goto IL_0160;
		}
	}
	{
		bool L_50 = V_1;
		if (L_50)
		{
			goto IL_0145;
		}
	}
	{
		StringBuilder_t* L_51 = V_0;
		NullCheck(L_51);
		StringBuilder_t* L_52;
		L_52 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_51, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
	}

IL_0145:
	{
		V_1 = (bool)0;
		StringBuilder_t* L_53 = V_0;
		NullCheck(L_53);
		StringBuilder_t* L_54;
		L_54 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_53, _stringLiteralBCAE3469D74631FAA7C17C674264959D398C4322, NULL);
		StringBuilder_t* L_55 = V_0;
		bool L_56;
		L_56 = VideoInput_get_ProjectToUser_m19CCFE79F7E71C7650F4DD9FF6C60A5C84C6944A_inline(__this, NULL);
		NullCheck(L_55);
		StringBuilder_t* L_57;
		L_57 = StringBuilder_Append_mCCCA4BBC406F80A72246B165C201C841877371FC(L_55, L_56, NULL);
	}

IL_0160:
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_58;
		L_58 = VideoInput_get_ProjectToCameras_mBA765B2AED959C6A912F72EF273CA8B8F2C64319_inline(__this, NULL);
		if (!L_58)
		{
			goto IL_019f;
		}
	}
	{
		Isset_t5AC4C50CE0E568495E13A2BA5709A48DE5906488* L_59 = (&__this->_____isset_6);
		bool L_60 = L_59->___projectToCameras_5;
		if (!L_60)
		{
			goto IL_019f;
		}
	}
	{
		bool L_61 = V_1;
		if (L_61)
		{
			goto IL_0184;
		}
	}
	{
		StringBuilder_t* L_62 = V_0;
		NullCheck(L_62);
		StringBuilder_t* L_63;
		L_63 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_62, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
	}

IL_0184:
	{
		V_1 = (bool)0;
		StringBuilder_t* L_64 = V_0;
		NullCheck(L_64);
		StringBuilder_t* L_65;
		L_65 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_64, _stringLiteral32FBFE3DBAFD929B4BDBCD7836AA6520607B53CF, NULL);
		StringBuilder_t* L_66 = V_0;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_67;
		L_67 = VideoInput_get_ProjectToCameras_mBA765B2AED959C6A912F72EF273CA8B8F2C64319_inline(__this, NULL);
		NullCheck(L_66);
		StringBuilder_t* L_68;
		L_68 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_66, L_67, NULL);
	}

IL_019f:
	{
		StringBuilder_t* L_69 = V_0;
		NullCheck(L_69);
		StringBuilder_t* L_70;
		L_70 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_69, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D, NULL);
		StringBuilder_t* L_71 = V_0;
		NullCheck(L_71);
		String_t* L_72;
		L_72 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_71);
		return L_72;
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
// Conversion methods for marshalling of: BlueprintReality.MixCast.Shared.VideoInput/Isset
IL2CPP_EXTERN_C void Isset_t5AC4C50CE0E568495E13A2BA5709A48DE5906488_marshal_pinvoke(const Isset_t5AC4C50CE0E568495E13A2BA5709A48DE5906488& unmarshaled, Isset_t5AC4C50CE0E568495E13A2BA5709A48DE5906488_marshaled_pinvoke& marshaled)
{
	marshaled.___identifier_0 = static_cast<int32_t>(unmarshaled.___identifier_0);
	marshaled.___fieldOfView_1 = static_cast<int32_t>(unmarshaled.___fieldOfView_1);
	marshaled.___currentPosition_2 = static_cast<int32_t>(unmarshaled.___currentPosition_2);
	marshaled.___currentRotation_3 = static_cast<int32_t>(unmarshaled.___currentRotation_3);
	marshaled.___projectToUser_4 = static_cast<int32_t>(unmarshaled.___projectToUser_4);
	marshaled.___projectToCameras_5 = static_cast<int32_t>(unmarshaled.___projectToCameras_5);
}
IL2CPP_EXTERN_C void Isset_t5AC4C50CE0E568495E13A2BA5709A48DE5906488_marshal_pinvoke_back(const Isset_t5AC4C50CE0E568495E13A2BA5709A48DE5906488_marshaled_pinvoke& marshaled, Isset_t5AC4C50CE0E568495E13A2BA5709A48DE5906488& unmarshaled)
{
	bool unmarshaledidentifier_temp_0 = false;
	unmarshaledidentifier_temp_0 = static_cast<bool>(marshaled.___identifier_0);
	unmarshaled.___identifier_0 = unmarshaledidentifier_temp_0;
	bool unmarshaledfieldOfView_temp_1 = false;
	unmarshaledfieldOfView_temp_1 = static_cast<bool>(marshaled.___fieldOfView_1);
	unmarshaled.___fieldOfView_1 = unmarshaledfieldOfView_temp_1;
	bool unmarshaledcurrentPosition_temp_2 = false;
	unmarshaledcurrentPosition_temp_2 = static_cast<bool>(marshaled.___currentPosition_2);
	unmarshaled.___currentPosition_2 = unmarshaledcurrentPosition_temp_2;
	bool unmarshaledcurrentRotation_temp_3 = false;
	unmarshaledcurrentRotation_temp_3 = static_cast<bool>(marshaled.___currentRotation_3);
	unmarshaled.___currentRotation_3 = unmarshaledcurrentRotation_temp_3;
	bool unmarshaledprojectToUser_temp_4 = false;
	unmarshaledprojectToUser_temp_4 = static_cast<bool>(marshaled.___projectToUser_4);
	unmarshaled.___projectToUser_4 = unmarshaledprojectToUser_temp_4;
	bool unmarshaledprojectToCameras_temp_5 = false;
	unmarshaledprojectToCameras_temp_5 = static_cast<bool>(marshaled.___projectToCameras_5);
	unmarshaled.___projectToCameras_5 = unmarshaledprojectToCameras_temp_5;
}
// Conversion method for clean up from marshalling of: BlueprintReality.MixCast.Shared.VideoInput/Isset
IL2CPP_EXTERN_C void Isset_t5AC4C50CE0E568495E13A2BA5709A48DE5906488_marshal_pinvoke_cleanup(Isset_t5AC4C50CE0E568495E13A2BA5709A48DE5906488_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: BlueprintReality.MixCast.Shared.VideoInput/Isset
IL2CPP_EXTERN_C void Isset_t5AC4C50CE0E568495E13A2BA5709A48DE5906488_marshal_com(const Isset_t5AC4C50CE0E568495E13A2BA5709A48DE5906488& unmarshaled, Isset_t5AC4C50CE0E568495E13A2BA5709A48DE5906488_marshaled_com& marshaled)
{
	marshaled.___identifier_0 = static_cast<int32_t>(unmarshaled.___identifier_0);
	marshaled.___fieldOfView_1 = static_cast<int32_t>(unmarshaled.___fieldOfView_1);
	marshaled.___currentPosition_2 = static_cast<int32_t>(unmarshaled.___currentPosition_2);
	marshaled.___currentRotation_3 = static_cast<int32_t>(unmarshaled.___currentRotation_3);
	marshaled.___projectToUser_4 = static_cast<int32_t>(unmarshaled.___projectToUser_4);
	marshaled.___projectToCameras_5 = static_cast<int32_t>(unmarshaled.___projectToCameras_5);
}
IL2CPP_EXTERN_C void Isset_t5AC4C50CE0E568495E13A2BA5709A48DE5906488_marshal_com_back(const Isset_t5AC4C50CE0E568495E13A2BA5709A48DE5906488_marshaled_com& marshaled, Isset_t5AC4C50CE0E568495E13A2BA5709A48DE5906488& unmarshaled)
{
	bool unmarshaledidentifier_temp_0 = false;
	unmarshaledidentifier_temp_0 = static_cast<bool>(marshaled.___identifier_0);
	unmarshaled.___identifier_0 = unmarshaledidentifier_temp_0;
	bool unmarshaledfieldOfView_temp_1 = false;
	unmarshaledfieldOfView_temp_1 = static_cast<bool>(marshaled.___fieldOfView_1);
	unmarshaled.___fieldOfView_1 = unmarshaledfieldOfView_temp_1;
	bool unmarshaledcurrentPosition_temp_2 = false;
	unmarshaledcurrentPosition_temp_2 = static_cast<bool>(marshaled.___currentPosition_2);
	unmarshaled.___currentPosition_2 = unmarshaledcurrentPosition_temp_2;
	bool unmarshaledcurrentRotation_temp_3 = false;
	unmarshaledcurrentRotation_temp_3 = static_cast<bool>(marshaled.___currentRotation_3);
	unmarshaled.___currentRotation_3 = unmarshaledcurrentRotation_temp_3;
	bool unmarshaledprojectToUser_temp_4 = false;
	unmarshaledprojectToUser_temp_4 = static_cast<bool>(marshaled.___projectToUser_4);
	unmarshaled.___projectToUser_4 = unmarshaledprojectToUser_temp_4;
	bool unmarshaledprojectToCameras_temp_5 = false;
	unmarshaledprojectToCameras_temp_5 = static_cast<bool>(marshaled.___projectToCameras_5);
	unmarshaled.___projectToCameras_5 = unmarshaledprojectToCameras_temp_5;
}
// Conversion method for clean up from marshalling of: BlueprintReality.MixCast.Shared.VideoInput/Isset
IL2CPP_EXTERN_C void Isset_t5AC4C50CE0E568495E13A2BA5709A48DE5906488_marshal_com_cleanup(Isset_t5AC4C50CE0E568495E13A2BA5709A48DE5906488_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String BlueprintReality.MixCast.Shared.Viewfinder::get_Identifier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Viewfinder_get_Identifier_mA0F741163EB65BB09715457C90D4183F41554F39 (Viewfinder_t843542A36830CBE3231029C0C271BD459E15CB86* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CIdentifierU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void BlueprintReality.MixCast.Shared.Viewfinder::set_Identifier(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Viewfinder_set_Identifier_m31798BB42B2B8A8662E8148D583C21467E9D36C7 (Viewfinder_t843542A36830CBE3231029C0C271BD459E15CB86* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CIdentifierU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIdentifierU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// BlueprintReality.Thrift.Vector3 BlueprintReality.MixCast.Shared.Viewfinder::get_CurrentPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* Viewfinder_get_CurrentPosition_m31D4F0F9151E2373694DC4A21E5DE9803B65B260 (Viewfinder_t843542A36830CBE3231029C0C271BD459E15CB86* __this, const RuntimeMethod* method) 
{
	{
		Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* L_0 = __this->____currentPosition_0;
		return L_0;
	}
}
// System.Void BlueprintReality.MixCast.Shared.Viewfinder::set_CurrentPosition(BlueprintReality.Thrift.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Viewfinder_set_CurrentPosition_mBE4932026F6080B8FE5F3FE21BA59552C1B02DBC (Viewfinder_t843542A36830CBE3231029C0C271BD459E15CB86* __this, Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* ___value0, const RuntimeMethod* method) 
{
	{
		Isset_t979D8D8E17EC4F3AAD700C9ED956669FF2A23927* L_0 = (&__this->_____isset_4);
		L_0->___currentPosition_0 = (bool)1;
		Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* L_1 = ___value0;
		__this->____currentPosition_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____currentPosition_0), (void*)L_1);
		return;
	}
}
// BlueprintReality.Thrift.Quaternion BlueprintReality.MixCast.Shared.Viewfinder::get_CurrentRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14* Viewfinder_get_CurrentRotation_m25C8FF9DA62809734BC13449AAF32DA975F085C2 (Viewfinder_t843542A36830CBE3231029C0C271BD459E15CB86* __this, const RuntimeMethod* method) 
{
	{
		Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14* L_0 = __this->____currentRotation_1;
		return L_0;
	}
}
// System.Void BlueprintReality.MixCast.Shared.Viewfinder::set_CurrentRotation(BlueprintReality.Thrift.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Viewfinder_set_CurrentRotation_m43DBA1750760D6770E0EFBDA12BE05A28631F9D4 (Viewfinder_t843542A36830CBE3231029C0C271BD459E15CB86* __this, Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14* ___value0, const RuntimeMethod* method) 
{
	{
		Isset_t979D8D8E17EC4F3AAD700C9ED956669FF2A23927* L_0 = (&__this->_____isset_4);
		L_0->___currentRotation_1 = (bool)1;
		Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14* L_1 = ___value0;
		__this->____currentRotation_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____currentRotation_1), (void*)L_1);
		return;
	}
}
// BlueprintReality.Thrift.Vector3 BlueprintReality.MixCast.Shared.Viewfinder::get_CurrentScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* Viewfinder_get_CurrentScale_mC2F76F7CEBDEE5E7E7190A625F5C347C8CCC69B2 (Viewfinder_t843542A36830CBE3231029C0C271BD459E15CB86* __this, const RuntimeMethod* method) 
{
	{
		Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* L_0 = __this->____currentScale_2;
		return L_0;
	}
}
// System.Void BlueprintReality.MixCast.Shared.Viewfinder::set_CurrentScale(BlueprintReality.Thrift.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Viewfinder_set_CurrentScale_mDF4827E661BBD767E5CA5FAEA004EE315AB4C752 (Viewfinder_t843542A36830CBE3231029C0C271BD459E15CB86* __this, Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* ___value0, const RuntimeMethod* method) 
{
	{
		Isset_t979D8D8E17EC4F3AAD700C9ED956669FF2A23927* L_0 = (&__this->_____isset_4);
		L_0->___currentScale_2 = (bool)1;
		Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* L_1 = ___value0;
		__this->____currentScale_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____currentScale_2), (void*)L_1);
		return;
	}
}
// System.Void BlueprintReality.MixCast.Shared.Viewfinder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Viewfinder__ctor_mCDABDE1A0CB15FA5938ED4A5DA70D37FD618C7CF (Viewfinder_t843542A36830CBE3231029C0C271BD459E15CB86* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void BlueprintReality.MixCast.Shared.Viewfinder::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Viewfinder__ctor_m662052AC54ABDE666C2EA8B2791BBC52222ACF49 (Viewfinder_t843542A36830CBE3231029C0C271BD459E15CB86* __this, String_t* ___identifier0, const RuntimeMethod* method) 
{
	{
		Viewfinder__ctor_mCDABDE1A0CB15FA5938ED4A5DA70D37FD618C7CF(__this, NULL);
		String_t* L_0 = ___identifier0;
		Viewfinder_set_Identifier_m31798BB42B2B8A8662E8148D583C21467E9D36C7_inline(__this, L_0, NULL);
		return;
	}
}
// System.Void BlueprintReality.MixCast.Shared.Viewfinder::Read(Thrift.Protocol.TProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Viewfinder_Read_m1F77F22AA5CC5317C4001B265DAA757F5FA89B9B (Viewfinder_t843542A36830CBE3231029C0C271BD459E15CB86* __this, TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* ___iprot0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	TField_tF4D9D8EFE767C142914693E0E787547F0213D334 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int16_t V_2 = 0;
	{
		TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_0 = ___iprot0;
		NullCheck(L_0);
		TProtocol_IncrementRecursionDepth_m92B440A7308F6D7012C73B74A6406855A29FF58B(L_0, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0142:
			{// begin finally (depth: 1)
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_1 = ___iprot0;
				NullCheck(L_1);
				TProtocol_DecrementRecursionDepth_m049900374B8368A8AEB03E6FC93DF288EA1BE44B(L_1, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				V_0 = (bool)0;
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_2 = ___iprot0;
				NullCheck(L_2);
				TStruct_tAD67F1F0C45235334F9440B6A587DB03A0CE5C96 L_3;
				L_3 = VirtualFuncInvoker0< TStruct_tAD67F1F0C45235334F9440B6A587DB03A0CE5C96 >::Invoke(29 /* Thrift.Protocol.TStruct Thrift.Protocol.TProtocol::ReadStructBegin() */, L_2);
			}

IL_000f_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_4 = ___iprot0;
				NullCheck(L_4);
				TField_tF4D9D8EFE767C142914693E0E787547F0213D334 L_5;
				L_5 = VirtualFuncInvoker0< TField_tF4D9D8EFE767C142914693E0E787547F0213D334 >::Invoke(31 /* Thrift.Protocol.TField Thrift.Protocol.TProtocol::ReadFieldBegin() */, L_4);
				V_1 = L_5;
				uint8_t L_6;
				L_6 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_1), NULL);
				if (!L_6)
				{
					goto IL_012b_1;
				}
			}
			{
				int16_t L_7;
				L_7 = TField_get_ID_m512A7F246CCD70AD2C473FA5AF09E6ECC8AB8B1A_inline((&V_1), NULL);
				V_2 = L_7;
				int16_t L_8 = V_2;
				switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_8, 1)))
				{
					case 0:
					{
						goto IL_0047_1;
					}
					case 1:
					{
						goto IL_0077_1;
					}
					case 2:
					{
						goto IL_00ad_1;
					}
					case 3:
					{
						goto IL_00e0_1;
					}
				}
			}
			{
				goto IL_0113_1;
			}

IL_0047_1:
			{
				uint8_t L_9;
				L_9 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_1), NULL);
				if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)11)))))
				{
					goto IL_0065_1;
				}
			}
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_10 = ___iprot0;
				NullCheck(L_10);
				String_t* L_11;
				L_11 = VirtualFuncInvoker0< String_t* >::Invoke(45 /* System.String Thrift.Protocol.TProtocol::ReadString() */, L_10);
				Viewfinder_set_Identifier_m31798BB42B2B8A8662E8148D583C21467E9D36C7_inline(__this, L_11, NULL);
				V_0 = (bool)1;
				goto IL_0120_1;
			}

IL_0065_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_12 = ___iprot0;
				uint8_t L_13;
				L_13 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_1), NULL);
				TProtocolUtil_Skip_m61E2B7C700479ECC6AD4E86636C1235C30B5A38F(L_12, L_13, NULL);
				goto IL_0120_1;
			}

IL_0077_1:
			{
				uint8_t L_14;
				L_14 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_1), NULL);
				if ((!(((uint32_t)L_14) == ((uint32_t)((int32_t)12)))))
				{
					goto IL_009e_1;
				}
			}
			{
				Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* L_15 = (Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55*)il2cpp_codegen_object_new(Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55_il2cpp_TypeInfo_var);
				NullCheck(L_15);
				Vector3__ctor_mCAFEBD9384F7BA33874D50B8E48A7A3839C3BB20(L_15, NULL);
				Viewfinder_set_CurrentPosition_mBE4932026F6080B8FE5F3FE21BA59552C1B02DBC(__this, L_15, NULL);
				Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* L_16;
				L_16 = Viewfinder_get_CurrentPosition_m31D4F0F9151E2373694DC4A21E5DE9803B65B260_inline(__this, NULL);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_17 = ___iprot0;
				NullCheck(L_16);
				Vector3_Read_m9D8873909C5EE03472C0E2D094626BF6CFB7E5E7(L_16, L_17, NULL);
				goto IL_0120_1;
			}

IL_009e_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_18 = ___iprot0;
				uint8_t L_19;
				L_19 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_1), NULL);
				TProtocolUtil_Skip_m61E2B7C700479ECC6AD4E86636C1235C30B5A38F(L_18, L_19, NULL);
				goto IL_0120_1;
			}

IL_00ad_1:
			{
				uint8_t L_20;
				L_20 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_1), NULL);
				if ((!(((uint32_t)L_20) == ((uint32_t)((int32_t)12)))))
				{
					goto IL_00d1_1;
				}
			}
			{
				Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14* L_21 = (Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14*)il2cpp_codegen_object_new(Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14_il2cpp_TypeInfo_var);
				NullCheck(L_21);
				Quaternion__ctor_mF918C4EAF6C09059CCFE7B52C82E199E11C185DA(L_21, NULL);
				Viewfinder_set_CurrentRotation_m43DBA1750760D6770E0EFBDA12BE05A28631F9D4(__this, L_21, NULL);
				Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14* L_22;
				L_22 = Viewfinder_get_CurrentRotation_m25C8FF9DA62809734BC13449AAF32DA975F085C2_inline(__this, NULL);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_23 = ___iprot0;
				NullCheck(L_22);
				Quaternion_Read_m0DE7EE832B4D8BFFC1A79C7FF48C15B324224B8D(L_22, L_23, NULL);
				goto IL_0120_1;
			}

IL_00d1_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_24 = ___iprot0;
				uint8_t L_25;
				L_25 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_1), NULL);
				TProtocolUtil_Skip_m61E2B7C700479ECC6AD4E86636C1235C30B5A38F(L_24, L_25, NULL);
				goto IL_0120_1;
			}

IL_00e0_1:
			{
				uint8_t L_26;
				L_26 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_1), NULL);
				if ((!(((uint32_t)L_26) == ((uint32_t)((int32_t)12)))))
				{
					goto IL_0104_1;
				}
			}
			{
				Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* L_27 = (Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55*)il2cpp_codegen_object_new(Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55_il2cpp_TypeInfo_var);
				NullCheck(L_27);
				Vector3__ctor_mCAFEBD9384F7BA33874D50B8E48A7A3839C3BB20(L_27, NULL);
				Viewfinder_set_CurrentScale_mDF4827E661BBD767E5CA5FAEA004EE315AB4C752(__this, L_27, NULL);
				Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* L_28;
				L_28 = Viewfinder_get_CurrentScale_mC2F76F7CEBDEE5E7E7190A625F5C347C8CCC69B2_inline(__this, NULL);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_29 = ___iprot0;
				NullCheck(L_28);
				Vector3_Read_m9D8873909C5EE03472C0E2D094626BF6CFB7E5E7(L_28, L_29, NULL);
				goto IL_0120_1;
			}

IL_0104_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_30 = ___iprot0;
				uint8_t L_31;
				L_31 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_1), NULL);
				TProtocolUtil_Skip_m61E2B7C700479ECC6AD4E86636C1235C30B5A38F(L_30, L_31, NULL);
				goto IL_0120_1;
			}

IL_0113_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_32 = ___iprot0;
				uint8_t L_33;
				L_33 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_1), NULL);
				TProtocolUtil_Skip_m61E2B7C700479ECC6AD4E86636C1235C30B5A38F(L_32, L_33, NULL);
			}

IL_0120_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_34 = ___iprot0;
				NullCheck(L_34);
				VirtualActionInvoker0::Invoke(32 /* System.Void Thrift.Protocol.TProtocol::ReadFieldEnd() */, L_34);
				goto IL_000f_1;
			}

IL_012b_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_35 = ___iprot0;
				NullCheck(L_35);
				VirtualActionInvoker0::Invoke(30 /* System.Void Thrift.Protocol.TProtocol::ReadStructEnd() */, L_35);
				bool L_36 = V_0;
				if (L_36)
				{
					goto IL_0140_1;
				}
			}
			{
				TProtocolException_t69B81CDFF3E6D584BC54665AB6BAD9593BC21996* L_37 = (TProtocolException_t69B81CDFF3E6D584BC54665AB6BAD9593BC21996*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TProtocolException_t69B81CDFF3E6D584BC54665AB6BAD9593BC21996_il2cpp_TypeInfo_var)));
				NullCheck(L_37);
				TProtocolException__ctor_m490B7FD7AC0D57E9B14D079A63C015546F109C7A(L_37, 1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9EC8A59E01337B967FC5629C193C98A71A518793)), NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_37, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Viewfinder_Read_m1F77F22AA5CC5317C4001B265DAA757F5FA89B9B_RuntimeMethod_var)));
			}

IL_0140_1:
			{
				goto IL_0149;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0149:
	{
		return;
	}
}
// System.Void BlueprintReality.MixCast.Shared.Viewfinder::Write(Thrift.Protocol.TProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Viewfinder_Write_m56B127BF699290DEBD48772ABD2190ECC3BF9D69 (Viewfinder_t843542A36830CBE3231029C0C271BD459E15CB86* __this, TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* ___oprot0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B8A49A0353D350D3914D9B4B8223F51C1CB133);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral521EA713AE1F6152B31F87B56805275D6D8AC601);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61BB5C2A23FCDBD38AE8B0C1F6CB6B28D1186090);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB0A7FF8F03BF3DF33E6B5D8A0E5A1B3BCCE3843F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC79A2181D3CAEB21262EEDCD1DC673DF70D651F7);
		s_Il2CppMethodInitialized = true;
	}
	TStruct_tAD67F1F0C45235334F9440B6A587DB03A0CE5C96 V_0;
	memset((&V_0), 0, sizeof(V_0));
	TField_tF4D9D8EFE767C142914693E0E787547F0213D334 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_0 = ___oprot0;
		NullCheck(L_0);
		TProtocol_IncrementRecursionDepth_m92B440A7308F6D7012C73B74A6406855A29FF58B(L_0, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_015a:
			{// begin finally (depth: 1)
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_1 = ___oprot0;
				NullCheck(L_1);
				TProtocol_DecrementRecursionDepth_m049900374B8368A8AEB03E6FC93DF288EA1BE44B(L_1, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				TStruct__ctor_mD56EA112D651038138D3BC7203C3606718E5CB3F((&V_0), _stringLiteral61BB5C2A23FCDBD38AE8B0C1F6CB6B28D1186090, NULL);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_2 = ___oprot0;
				TStruct_tAD67F1F0C45235334F9440B6A587DB03A0CE5C96 L_3 = V_0;
				NullCheck(L_2);
				VirtualActionInvoker1< TStruct_tAD67F1F0C45235334F9440B6A587DB03A0CE5C96 >::Invoke(8 /* System.Void Thrift.Protocol.TProtocol::WriteStructBegin(Thrift.Protocol.TStruct) */, L_2, L_3);
				il2cpp_codegen_initobj((&V_1), sizeof(TField_tF4D9D8EFE767C142914693E0E787547F0213D334));
				String_t* L_4;
				L_4 = Viewfinder_get_Identifier_mA0F741163EB65BB09715457C90D4183F41554F39_inline(__this, NULL);
				if (L_4)
				{
					goto IL_0035_1;
				}
			}
			{
				TProtocolException_t69B81CDFF3E6D584BC54665AB6BAD9593BC21996* L_5 = (TProtocolException_t69B81CDFF3E6D584BC54665AB6BAD9593BC21996*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TProtocolException_t69B81CDFF3E6D584BC54665AB6BAD9593BC21996_il2cpp_TypeInfo_var)));
				NullCheck(L_5);
				TProtocolException__ctor_m490B7FD7AC0D57E9B14D079A63C015546F109C7A(L_5, 1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9EC8A59E01337B967FC5629C193C98A71A518793)), NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Viewfinder_Write_m56B127BF699290DEBD48772ABD2190ECC3BF9D69_RuntimeMethod_var)));
			}

IL_0035_1:
			{
				TField_set_Name_mAD35FC0847F990535FAF3E3032CD117B560AF751_inline((&V_1), _stringLiteral00B8A49A0353D350D3914D9B4B8223F51C1CB133, NULL);
				TField_set_Type_m2AA4AF23C96A26CB269B78B067489E10F055E983_inline((&V_1), ((int32_t)11), NULL);
				TField_set_ID_m68843CC49A2A49966729F299A58A2BBC6FCC4F01_inline((&V_1), (int16_t)1, NULL);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_6 = ___oprot0;
				TField_tF4D9D8EFE767C142914693E0E787547F0213D334 L_7 = V_1;
				NullCheck(L_6);
				VirtualActionInvoker1< TField_tF4D9D8EFE767C142914693E0E787547F0213D334 >::Invoke(10 /* System.Void Thrift.Protocol.TProtocol::WriteFieldBegin(Thrift.Protocol.TField) */, L_6, L_7);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_8 = ___oprot0;
				String_t* L_9;
				L_9 = Viewfinder_get_Identifier_mA0F741163EB65BB09715457C90D4183F41554F39_inline(__this, NULL);
				NullCheck(L_8);
				VirtualActionInvoker1< String_t* >::Invoke(25 /* System.Void Thrift.Protocol.TProtocol::WriteString(System.String) */, L_8, L_9);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_10 = ___oprot0;
				NullCheck(L_10);
				VirtualActionInvoker0::Invoke(11 /* System.Void Thrift.Protocol.TProtocol::WriteFieldEnd() */, L_10);
				Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* L_11;
				L_11 = Viewfinder_get_CurrentPosition_m31D4F0F9151E2373694DC4A21E5DE9803B65B260_inline(__this, NULL);
				if (!L_11)
				{
					goto IL_00b6_1;
				}
			}
			{
				Isset_t979D8D8E17EC4F3AAD700C9ED956669FF2A23927* L_12 = (&__this->_____isset_4);
				bool L_13 = L_12->___currentPosition_0;
				if (!L_13)
				{
					goto IL_00b6_1;
				}
			}
			{
				TField_set_Name_mAD35FC0847F990535FAF3E3032CD117B560AF751_inline((&V_1), _stringLiteral521EA713AE1F6152B31F87B56805275D6D8AC601, NULL);
				TField_set_Type_m2AA4AF23C96A26CB269B78B067489E10F055E983_inline((&V_1), ((int32_t)12), NULL);
				TField_set_ID_m68843CC49A2A49966729F299A58A2BBC6FCC4F01_inline((&V_1), (int16_t)2, NULL);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_14 = ___oprot0;
				TField_tF4D9D8EFE767C142914693E0E787547F0213D334 L_15 = V_1;
				NullCheck(L_14);
				VirtualActionInvoker1< TField_tF4D9D8EFE767C142914693E0E787547F0213D334 >::Invoke(10 /* System.Void Thrift.Protocol.TProtocol::WriteFieldBegin(Thrift.Protocol.TField) */, L_14, L_15);
				Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* L_16;
				L_16 = Viewfinder_get_CurrentPosition_m31D4F0F9151E2373694DC4A21E5DE9803B65B260_inline(__this, NULL);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_17 = ___oprot0;
				NullCheck(L_16);
				Vector3_Write_mB350FC59FBEB5FA8D0255E8BE137A9F921607BFF(L_16, L_17, NULL);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_18 = ___oprot0;
				NullCheck(L_18);
				VirtualActionInvoker0::Invoke(11 /* System.Void Thrift.Protocol.TProtocol::WriteFieldEnd() */, L_18);
			}

IL_00b6_1:
			{
				Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14* L_19;
				L_19 = Viewfinder_get_CurrentRotation_m25C8FF9DA62809734BC13449AAF32DA975F085C2_inline(__this, NULL);
				if (!L_19)
				{
					goto IL_0101_1;
				}
			}
			{
				Isset_t979D8D8E17EC4F3AAD700C9ED956669FF2A23927* L_20 = (&__this->_____isset_4);
				bool L_21 = L_20->___currentRotation_1;
				if (!L_21)
				{
					goto IL_0101_1;
				}
			}
			{
				TField_set_Name_mAD35FC0847F990535FAF3E3032CD117B560AF751_inline((&V_1), _stringLiteralB0A7FF8F03BF3DF33E6B5D8A0E5A1B3BCCE3843F, NULL);
				TField_set_Type_m2AA4AF23C96A26CB269B78B067489E10F055E983_inline((&V_1), ((int32_t)12), NULL);
				TField_set_ID_m68843CC49A2A49966729F299A58A2BBC6FCC4F01_inline((&V_1), (int16_t)3, NULL);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_22 = ___oprot0;
				TField_tF4D9D8EFE767C142914693E0E787547F0213D334 L_23 = V_1;
				NullCheck(L_22);
				VirtualActionInvoker1< TField_tF4D9D8EFE767C142914693E0E787547F0213D334 >::Invoke(10 /* System.Void Thrift.Protocol.TProtocol::WriteFieldBegin(Thrift.Protocol.TField) */, L_22, L_23);
				Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14* L_24;
				L_24 = Viewfinder_get_CurrentRotation_m25C8FF9DA62809734BC13449AAF32DA975F085C2_inline(__this, NULL);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_25 = ___oprot0;
				NullCheck(L_24);
				Quaternion_Write_m1B5494004EA15AE513F8B66F3B0DF7BFBED9346B(L_24, L_25, NULL);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_26 = ___oprot0;
				NullCheck(L_26);
				VirtualActionInvoker0::Invoke(11 /* System.Void Thrift.Protocol.TProtocol::WriteFieldEnd() */, L_26);
			}

IL_0101_1:
			{
				Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* L_27;
				L_27 = Viewfinder_get_CurrentScale_mC2F76F7CEBDEE5E7E7190A625F5C347C8CCC69B2_inline(__this, NULL);
				if (!L_27)
				{
					goto IL_014c_1;
				}
			}
			{
				Isset_t979D8D8E17EC4F3AAD700C9ED956669FF2A23927* L_28 = (&__this->_____isset_4);
				bool L_29 = L_28->___currentScale_2;
				if (!L_29)
				{
					goto IL_014c_1;
				}
			}
			{
				TField_set_Name_mAD35FC0847F990535FAF3E3032CD117B560AF751_inline((&V_1), _stringLiteralC79A2181D3CAEB21262EEDCD1DC673DF70D651F7, NULL);
				TField_set_Type_m2AA4AF23C96A26CB269B78B067489E10F055E983_inline((&V_1), ((int32_t)12), NULL);
				TField_set_ID_m68843CC49A2A49966729F299A58A2BBC6FCC4F01_inline((&V_1), (int16_t)4, NULL);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_30 = ___oprot0;
				TField_tF4D9D8EFE767C142914693E0E787547F0213D334 L_31 = V_1;
				NullCheck(L_30);
				VirtualActionInvoker1< TField_tF4D9D8EFE767C142914693E0E787547F0213D334 >::Invoke(10 /* System.Void Thrift.Protocol.TProtocol::WriteFieldBegin(Thrift.Protocol.TField) */, L_30, L_31);
				Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* L_32;
				L_32 = Viewfinder_get_CurrentScale_mC2F76F7CEBDEE5E7E7190A625F5C347C8CCC69B2_inline(__this, NULL);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_33 = ___oprot0;
				NullCheck(L_32);
				Vector3_Write_mB350FC59FBEB5FA8D0255E8BE137A9F921607BFF(L_32, L_33, NULL);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_34 = ___oprot0;
				NullCheck(L_34);
				VirtualActionInvoker0::Invoke(11 /* System.Void Thrift.Protocol.TProtocol::WriteFieldEnd() */, L_34);
			}

IL_014c_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_35 = ___oprot0;
				NullCheck(L_35);
				VirtualActionInvoker0::Invoke(12 /* System.Void Thrift.Protocol.TProtocol::WriteFieldStop() */, L_35);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_36 = ___oprot0;
				NullCheck(L_36);
				VirtualActionInvoker0::Invoke(9 /* System.Void Thrift.Protocol.TProtocol::WriteStructEnd() */, L_36);
				goto IL_0161;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0161:
	{
		return;
	}
}
// System.String BlueprintReality.MixCast.Shared.Viewfinder::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Viewfinder_ToString_m7BC649DDA8F66ED67E67C41BE9481C84751F88F0 (Viewfinder_t843542A36830CBE3231029C0C271BD459E15CB86* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral021ECB09148009B3A8AF2A7A3EB51DFEDC217B16);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F5BE91CE769F80C19F893E04B86645D3944C171);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5AF5C218FFBCFBBF8D1B74E00FAADD9905F877DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral914920FBAD195DA430F12787B301606EB411F1F9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD64DE515DE159C401BB82652225D6BE22CDAD7A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE5C7F846CD2F045D788A466976DA77172B2DE0A);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	StringBuilder_t* G_B4_0 = NULL;
	StringBuilder_t* G_B3_0 = NULL;
	String_t* G_B5_0 = NULL;
	StringBuilder_t* G_B5_1 = NULL;
	StringBuilder_t* G_B10_0 = NULL;
	StringBuilder_t* G_B9_0 = NULL;
	String_t* G_B11_0 = NULL;
	StringBuilder_t* G_B11_1 = NULL;
	StringBuilder_t* G_B16_0 = NULL;
	StringBuilder_t* G_B15_0 = NULL;
	String_t* G_B17_0 = NULL;
	StringBuilder_t* G_B17_1 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_mCD797D942316CB356205FD96415B0B7581CDAD60(L_0, _stringLiteral914920FBAD195DA430F12787B301606EB411F1F9, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_1, _stringLiteral5AF5C218FFBCFBBF8D1B74E00FAADD9905F877DB, NULL);
		StringBuilder_t* L_3 = V_0;
		String_t* L_4;
		L_4 = Viewfinder_get_Identifier_mA0F741163EB65BB09715457C90D4183F41554F39_inline(__this, NULL);
		NullCheck(L_3);
		StringBuilder_t* L_5;
		L_5 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_3, L_4, NULL);
		Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* L_6;
		L_6 = Viewfinder_get_CurrentPosition_m31D4F0F9151E2373694DC4A21E5DE9803B65B260_inline(__this, NULL);
		if (!L_6)
		{
			goto IL_0066;
		}
	}
	{
		Isset_t979D8D8E17EC4F3AAD700C9ED956669FF2A23927* L_7 = (&__this->_____isset_4);
		bool L_8 = L_7->___currentPosition_0;
		if (!L_8)
		{
			goto IL_0066;
		}
	}
	{
		StringBuilder_t* L_9 = V_0;
		NullCheck(L_9);
		StringBuilder_t* L_10;
		L_10 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_9, _stringLiteral3F5BE91CE769F80C19F893E04B86645D3944C171, NULL);
		StringBuilder_t* L_11 = V_0;
		Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* L_12;
		L_12 = Viewfinder_get_CurrentPosition_m31D4F0F9151E2373694DC4A21E5DE9803B65B260_inline(__this, NULL);
		G_B3_0 = L_11;
		if (!L_12)
		{
			G_B4_0 = L_11;
			goto IL_005b;
		}
	}
	{
		Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* L_13;
		L_13 = Viewfinder_get_CurrentPosition_m31D4F0F9151E2373694DC4A21E5DE9803B65B260_inline(__this, NULL);
		NullCheck(L_13);
		String_t* L_14;
		L_14 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_13);
		G_B5_0 = L_14;
		G_B5_1 = G_B3_0;
		goto IL_0060;
	}

IL_005b:
	{
		G_B5_0 = _stringLiteralD64DE515DE159C401BB82652225D6BE22CDAD7A1;
		G_B5_1 = G_B4_0;
	}

IL_0060:
	{
		NullCheck(G_B5_1);
		StringBuilder_t* L_15;
		L_15 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(G_B5_1, G_B5_0, NULL);
	}

IL_0066:
	{
		Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14* L_16;
		L_16 = Viewfinder_get_CurrentRotation_m25C8FF9DA62809734BC13449AAF32DA975F085C2_inline(__this, NULL);
		if (!L_16)
		{
			goto IL_00a8;
		}
	}
	{
		Isset_t979D8D8E17EC4F3AAD700C9ED956669FF2A23927* L_17 = (&__this->_____isset_4);
		bool L_18 = L_17->___currentRotation_1;
		if (!L_18)
		{
			goto IL_00a8;
		}
	}
	{
		StringBuilder_t* L_19 = V_0;
		NullCheck(L_19);
		StringBuilder_t* L_20;
		L_20 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_19, _stringLiteralFE5C7F846CD2F045D788A466976DA77172B2DE0A, NULL);
		StringBuilder_t* L_21 = V_0;
		Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14* L_22;
		L_22 = Viewfinder_get_CurrentRotation_m25C8FF9DA62809734BC13449AAF32DA975F085C2_inline(__this, NULL);
		G_B9_0 = L_21;
		if (!L_22)
		{
			G_B10_0 = L_21;
			goto IL_009d;
		}
	}
	{
		Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14* L_23;
		L_23 = Viewfinder_get_CurrentRotation_m25C8FF9DA62809734BC13449AAF32DA975F085C2_inline(__this, NULL);
		NullCheck(L_23);
		String_t* L_24;
		L_24 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_23);
		G_B11_0 = L_24;
		G_B11_1 = G_B9_0;
		goto IL_00a2;
	}

IL_009d:
	{
		G_B11_0 = _stringLiteralD64DE515DE159C401BB82652225D6BE22CDAD7A1;
		G_B11_1 = G_B10_0;
	}

IL_00a2:
	{
		NullCheck(G_B11_1);
		StringBuilder_t* L_25;
		L_25 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(G_B11_1, G_B11_0, NULL);
	}

IL_00a8:
	{
		Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* L_26;
		L_26 = Viewfinder_get_CurrentScale_mC2F76F7CEBDEE5E7E7190A625F5C347C8CCC69B2_inline(__this, NULL);
		if (!L_26)
		{
			goto IL_00ea;
		}
	}
	{
		Isset_t979D8D8E17EC4F3AAD700C9ED956669FF2A23927* L_27 = (&__this->_____isset_4);
		bool L_28 = L_27->___currentScale_2;
		if (!L_28)
		{
			goto IL_00ea;
		}
	}
	{
		StringBuilder_t* L_29 = V_0;
		NullCheck(L_29);
		StringBuilder_t* L_30;
		L_30 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_29, _stringLiteral021ECB09148009B3A8AF2A7A3EB51DFEDC217B16, NULL);
		StringBuilder_t* L_31 = V_0;
		Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* L_32;
		L_32 = Viewfinder_get_CurrentScale_mC2F76F7CEBDEE5E7E7190A625F5C347C8CCC69B2_inline(__this, NULL);
		G_B15_0 = L_31;
		if (!L_32)
		{
			G_B16_0 = L_31;
			goto IL_00df;
		}
	}
	{
		Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* L_33;
		L_33 = Viewfinder_get_CurrentScale_mC2F76F7CEBDEE5E7E7190A625F5C347C8CCC69B2_inline(__this, NULL);
		NullCheck(L_33);
		String_t* L_34;
		L_34 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_33);
		G_B17_0 = L_34;
		G_B17_1 = G_B15_0;
		goto IL_00e4;
	}

IL_00df:
	{
		G_B17_0 = _stringLiteralD64DE515DE159C401BB82652225D6BE22CDAD7A1;
		G_B17_1 = G_B16_0;
	}

IL_00e4:
	{
		NullCheck(G_B17_1);
		StringBuilder_t* L_35;
		L_35 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(G_B17_1, G_B17_0, NULL);
	}

IL_00ea:
	{
		StringBuilder_t* L_36 = V_0;
		NullCheck(L_36);
		StringBuilder_t* L_37;
		L_37 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_36, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D, NULL);
		StringBuilder_t* L_38 = V_0;
		NullCheck(L_38);
		String_t* L_39;
		L_39 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_38);
		return L_39;
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
// Conversion methods for marshalling of: BlueprintReality.MixCast.Shared.Viewfinder/Isset
IL2CPP_EXTERN_C void Isset_t979D8D8E17EC4F3AAD700C9ED956669FF2A23927_marshal_pinvoke(const Isset_t979D8D8E17EC4F3AAD700C9ED956669FF2A23927& unmarshaled, Isset_t979D8D8E17EC4F3AAD700C9ED956669FF2A23927_marshaled_pinvoke& marshaled)
{
	marshaled.___currentPosition_0 = static_cast<int32_t>(unmarshaled.___currentPosition_0);
	marshaled.___currentRotation_1 = static_cast<int32_t>(unmarshaled.___currentRotation_1);
	marshaled.___currentScale_2 = static_cast<int32_t>(unmarshaled.___currentScale_2);
}
IL2CPP_EXTERN_C void Isset_t979D8D8E17EC4F3AAD700C9ED956669FF2A23927_marshal_pinvoke_back(const Isset_t979D8D8E17EC4F3AAD700C9ED956669FF2A23927_marshaled_pinvoke& marshaled, Isset_t979D8D8E17EC4F3AAD700C9ED956669FF2A23927& unmarshaled)
{
	bool unmarshaledcurrentPosition_temp_0 = false;
	unmarshaledcurrentPosition_temp_0 = static_cast<bool>(marshaled.___currentPosition_0);
	unmarshaled.___currentPosition_0 = unmarshaledcurrentPosition_temp_0;
	bool unmarshaledcurrentRotation_temp_1 = false;
	unmarshaledcurrentRotation_temp_1 = static_cast<bool>(marshaled.___currentRotation_1);
	unmarshaled.___currentRotation_1 = unmarshaledcurrentRotation_temp_1;
	bool unmarshaledcurrentScale_temp_2 = false;
	unmarshaledcurrentScale_temp_2 = static_cast<bool>(marshaled.___currentScale_2);
	unmarshaled.___currentScale_2 = unmarshaledcurrentScale_temp_2;
}
// Conversion method for clean up from marshalling of: BlueprintReality.MixCast.Shared.Viewfinder/Isset
IL2CPP_EXTERN_C void Isset_t979D8D8E17EC4F3AAD700C9ED956669FF2A23927_marshal_pinvoke_cleanup(Isset_t979D8D8E17EC4F3AAD700C9ED956669FF2A23927_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: BlueprintReality.MixCast.Shared.Viewfinder/Isset
IL2CPP_EXTERN_C void Isset_t979D8D8E17EC4F3AAD700C9ED956669FF2A23927_marshal_com(const Isset_t979D8D8E17EC4F3AAD700C9ED956669FF2A23927& unmarshaled, Isset_t979D8D8E17EC4F3AAD700C9ED956669FF2A23927_marshaled_com& marshaled)
{
	marshaled.___currentPosition_0 = static_cast<int32_t>(unmarshaled.___currentPosition_0);
	marshaled.___currentRotation_1 = static_cast<int32_t>(unmarshaled.___currentRotation_1);
	marshaled.___currentScale_2 = static_cast<int32_t>(unmarshaled.___currentScale_2);
}
IL2CPP_EXTERN_C void Isset_t979D8D8E17EC4F3AAD700C9ED956669FF2A23927_marshal_com_back(const Isset_t979D8D8E17EC4F3AAD700C9ED956669FF2A23927_marshaled_com& marshaled, Isset_t979D8D8E17EC4F3AAD700C9ED956669FF2A23927& unmarshaled)
{
	bool unmarshaledcurrentPosition_temp_0 = false;
	unmarshaledcurrentPosition_temp_0 = static_cast<bool>(marshaled.___currentPosition_0);
	unmarshaled.___currentPosition_0 = unmarshaledcurrentPosition_temp_0;
	bool unmarshaledcurrentRotation_temp_1 = false;
	unmarshaledcurrentRotation_temp_1 = static_cast<bool>(marshaled.___currentRotation_1);
	unmarshaled.___currentRotation_1 = unmarshaledcurrentRotation_temp_1;
	bool unmarshaledcurrentScale_temp_2 = false;
	unmarshaledcurrentScale_temp_2 = static_cast<bool>(marshaled.___currentScale_2);
	unmarshaled.___currentScale_2 = unmarshaledcurrentScale_temp_2;
}
// Conversion method for clean up from marshalling of: BlueprintReality.MixCast.Shared.Viewfinder/Isset
IL2CPP_EXTERN_C void Isset_t979D8D8E17EC4F3AAD700C9ED956669FF2A23927_marshal_com_cleanup(Isset_t979D8D8E17EC4F3AAD700C9ED956669FF2A23927_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String BlueprintReality.MixCast.Shared.VirtualCamera::get_Identifier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VirtualCamera_get_Identifier_mEB3E5A1767F4C8F0D9F933E1DDD0AC6792627E4E (VirtualCamera_tE3BDC17FDEBF36E1926300A209225F859FB31C1B* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____identifier_0;
		return L_0;
	}
}
// System.Void BlueprintReality.MixCast.Shared.VirtualCamera::set_Identifier(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualCamera_set_Identifier_m1464695B204983503DD4DBA7D0ED27D98B06A1CD (VirtualCamera_tE3BDC17FDEBF36E1926300A209225F859FB31C1B* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		Isset_tF8AB37BBD4ECC1DA61116E747FE00104BA58D11A* L_0 = (&__this->_____isset_19);
		L_0->___identifier_0 = (bool)1;
		String_t* L_1 = ___value0;
		__this->____identifier_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____identifier_0), (void*)L_1);
		return;
	}
}
// System.Double BlueprintReality.MixCast.Shared.VirtualCamera::get_FieldOfView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double VirtualCamera_get_FieldOfView_m4A53680A2958AD93774C5E71C9489FB48E295A92 (VirtualCamera_tE3BDC17FDEBF36E1926300A209225F859FB31C1B* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->____fieldOfView_1;
		return L_0;
	}
}
// System.Void BlueprintReality.MixCast.Shared.VirtualCamera::set_FieldOfView(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualCamera_set_FieldOfView_m46211CC2CBE8D52F50925113FE511927C8CB44B0 (VirtualCamera_tE3BDC17FDEBF36E1926300A209225F859FB31C1B* __this, double ___value0, const RuntimeMethod* method) 
{
	{
		Isset_tF8AB37BBD4ECC1DA61116E747FE00104BA58D11A* L_0 = (&__this->_____isset_19);
		L_0->___fieldOfView_1 = (bool)1;
		double L_1 = ___value0;
		__this->____fieldOfView_1 = L_1;
		return;
	}
}
// BlueprintReality.Thrift.Vector3 BlueprintReality.MixCast.Shared.VirtualCamera::get_CurrentPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* VirtualCamera_get_CurrentPosition_m874C91FBA8BF730867BA73F7AC532CDBCB236C14 (VirtualCamera_tE3BDC17FDEBF36E1926300A209225F859FB31C1B* __this, const RuntimeMethod* method) 
{
	{
		Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* L_0 = __this->____currentPosition_2;
		return L_0;
	}
}
// System.Void BlueprintReality.MixCast.Shared.VirtualCamera::set_CurrentPosition(BlueprintReality.Thrift.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualCamera_set_CurrentPosition_m462827B2E9764B425213BA2B0C6EAFD35A894A93 (VirtualCamera_tE3BDC17FDEBF36E1926300A209225F859FB31C1B* __this, Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* ___value0, const RuntimeMethod* method) 
{
	{
		Isset_tF8AB37BBD4ECC1DA61116E747FE00104BA58D11A* L_0 = (&__this->_____isset_19);
		L_0->___currentPosition_2 = (bool)1;
		Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* L_1 = ___value0;
		__this->____currentPosition_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____currentPosition_2), (void*)L_1);
		return;
	}
}
// BlueprintReality.Thrift.Quaternion BlueprintReality.MixCast.Shared.VirtualCamera::get_CurrentRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14* VirtualCamera_get_CurrentRotation_mC2D2A7A4031A0E2FD53EF7AD1C2958380D0319D3 (VirtualCamera_tE3BDC17FDEBF36E1926300A209225F859FB31C1B* __this, const RuntimeMethod* method) 
{
	{
		Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14* L_0 = __this->____currentRotation_3;
		return L_0;
	}
}
// System.Void BlueprintReality.MixCast.Shared.VirtualCamera::set_CurrentRotation(BlueprintReality.Thrift.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualCamera_set_CurrentRotation_m860EF481E6C3E1561AFD2963CE2160EEB036CE51 (VirtualCamera_tE3BDC17FDEBF36E1926300A209225F859FB31C1B* __this, Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14* ___value0, const RuntimeMethod* method) 
{
	{
		Isset_tF8AB37BBD4ECC1DA61116E747FE00104BA58D11A* L_0 = (&__this->_____isset_19);
		L_0->___currentRotation_3 = (bool)1;
		Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14* L_1 = ___value0;
		__this->____currentRotation_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____currentRotation_3), (void*)L_1);
		return;
	}
}
// System.Int32 BlueprintReality.MixCast.Shared.VirtualCamera::get_RenderResolutionWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VirtualCamera_get_RenderResolutionWidth_m98D10D02754388546B82A964C256B4FF4B4A9DA0 (VirtualCamera_tE3BDC17FDEBF36E1926300A209225F859FB31C1B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____renderResolutionWidth_4;
		return L_0;
	}
}
// System.Void BlueprintReality.MixCast.Shared.VirtualCamera::set_RenderResolutionWidth(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualCamera_set_RenderResolutionWidth_m0FCE4BECAF59B2D96533FE82BDC61D7D730EA36C (VirtualCamera_tE3BDC17FDEBF36E1926300A209225F859FB31C1B* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		Isset_tF8AB37BBD4ECC1DA61116E747FE00104BA58D11A* L_0 = (&__this->_____isset_19);
		L_0->___renderResolutionWidth_4 = (bool)1;
		int32_t L_1 = ___value0;
		__this->____renderResolutionWidth_4 = L_1;
		return;
	}
}
// System.Int32 BlueprintReality.MixCast.Shared.VirtualCamera::get_RenderResolutionHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VirtualCamera_get_RenderResolutionHeight_m00191951FF1DAB883EAE7335E91834587927FBB6 (VirtualCamera_tE3BDC17FDEBF36E1926300A209225F859FB31C1B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____renderResolutionHeight_5;
		return L_0;
	}
}
// System.Void BlueprintReality.MixCast.Shared.VirtualCamera::set_RenderResolutionHeight(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualCamera_set_RenderResolutionHeight_m6A87B7B4DCB4C12B0DE3D8D6D1B9645239D74EEB (VirtualCamera_tE3BDC17FDEBF36E1926300A209225F859FB31C1B* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		Isset_tF8AB37BBD4ECC1DA61116E747FE00104BA58D11A* L_0 = (&__this->_____isset_19);
		L_0->___renderResolutionHeight_5 = (bool)1;
		int32_t L_1 = ___value0;
		__this->____renderResolutionHeight_5 = L_1;
		return;
	}
}
// System.Int32 BlueprintReality.MixCast.Shared.VirtualCamera::get_RenderFramerate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VirtualCamera_get_RenderFramerate_mF0F4BCA562C3238F9EE0448856A3F4E0A39D1F4F (VirtualCamera_tE3BDC17FDEBF36E1926300A209225F859FB31C1B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____renderFramerate_6;
		return L_0;
	}
}
// System.Void BlueprintReality.MixCast.Shared.VirtualCamera::set_RenderFramerate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualCamera_set_RenderFramerate_m1709488B72075D1AE9306AA179FF94263CE36461 (VirtualCamera_tE3BDC17FDEBF36E1926300A209225F859FB31C1B* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		Isset_tF8AB37BBD4ECC1DA61116E747FE00104BA58D11A* L_0 = (&__this->_____isset_19);
		L_0->___renderFramerate_6 = (bool)1;
		int32_t L_1 = ___value0;
		__this->____renderFramerate_6 = L_1;
		return;
	}
}
// System.Boolean BlueprintReality.MixCast.Shared.VirtualCamera::get_UsesForeground()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VirtualCamera_get_UsesForeground_m9FF2D095C3A58E121FF257B1F4447DF925695B1E (VirtualCamera_tE3BDC17FDEBF36E1926300A209225F859FB31C1B* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____usesForeground_7;
		return L_0;
	}
}
// System.Void BlueprintReality.MixCast.Shared.VirtualCamera::set_UsesForeground(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualCamera_set_UsesForeground_m61108B7689F91AAFD36D0F2C08A7718D9167B814 (VirtualCamera_tE3BDC17FDEBF36E1926300A209225F859FB31C1B* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		Isset_tF8AB37BBD4ECC1DA61116E747FE00104BA58D11A* L_0 = (&__this->_____isset_19);
		L_0->___usesForeground_7 = (bool)1;
		bool L_1 = ___value0;
		__this->____usesForeground_7 = L_1;
		return;
	}
}
// System.Boolean BlueprintReality.MixCast.Shared.VirtualCamera::get_UsesFullRender()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VirtualCamera_get_UsesFullRender_mC240E649BE2B7B55EC14C66BB6431F1BE9E481F5 (VirtualCamera_tE3BDC17FDEBF36E1926300A209225F859FB31C1B* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____usesFullRender_8;
		return L_0;
	}
}
// System.Void BlueprintReality.MixCast.Shared.VirtualCamera::set_UsesFullRender(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualCamera_set_UsesFullRender_m7BC661D4DC08A89DCE524C6C85F87382931AB41A (VirtualCamera_tE3BDC17FDEBF36E1926300A209225F859FB31C1B* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		Isset_tF8AB37BBD4ECC1DA61116E747FE00104BA58D11A* L_0 = (&__this->_____isset_19);
		L_0->___usesFullRender_8 = (bool)1;
		bool L_1 = ___value0;
		__this->____usesFullRender_8 = L_1;
		return;
	}
}
// System.Boolean BlueprintReality.MixCast.Shared.VirtualCamera::get_IsFirstPerson()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VirtualCamera_get_IsFirstPerson_mE94533EAF07B4CD935C8CF66A8FD4257B0E34183 (VirtualCamera_tE3BDC17FDEBF36E1926300A209225F859FB31C1B* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____isFirstPerson_9;
		return L_0;
	}
}
// System.Void BlueprintReality.MixCast.Shared.VirtualCamera::set_IsFirstPerson(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualCamera_set_IsFirstPerson_m358EBAB324EB9A1FDD8D18F13E35F3511D1CF0D4 (VirtualCamera_tE3BDC17FDEBF36E1926300A209225F859FB31C1B* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		Isset_tF8AB37BBD4ECC1DA61116E747FE00104BA58D11A* L_0 = (&__this->_____isset_19);
		L_0->___isFirstPerson_9 = (bool)1;
		bool L_1 = ___value0;
		__this->____isFirstPerson_9 = L_1;
		return;
	}
}
// System.Boolean BlueprintReality.MixCast.Shared.VirtualCamera::get_IsBackgroundTranslucent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VirtualCamera_get_IsBackgroundTranslucent_mA09987376A70D5E8BF879D5E049376B377DD03F1 (VirtualCamera_tE3BDC17FDEBF36E1926300A209225F859FB31C1B* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____isBackgroundTranslucent_10;
		return L_0;
	}
}
// System.Void BlueprintReality.MixCast.Shared.VirtualCamera::set_IsBackgroundTranslucent(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualCamera_set_IsBackgroundTranslucent_m16E2D53F059511E86A1A845663DBE8FC46413FA1 (VirtualCamera_tE3BDC17FDEBF36E1926300A209225F859FB31C1B* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		Isset_tF8AB37BBD4ECC1DA61116E747FE00104BA58D11A* L_0 = (&__this->_____isset_19);
		L_0->___isBackgroundTranslucent_10 = (bool)1;
		bool L_1 = ___value0;
		__this->____isBackgroundTranslucent_10 = L_1;
		return;
	}
}
// System.Collections.Generic.List`1<System.String> BlueprintReality.MixCast.Shared.VirtualCamera::get_VideoInputIds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* VirtualCamera_get_VideoInputIds_mFB7A38A77C2BBCE738E1EE085B3A384055CE8AD0 (VirtualCamera_tE3BDC17FDEBF36E1926300A209225F859FB31C1B* __this, const RuntimeMethod* method) 
{
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->____videoInputIds_11;
		return L_0;
	}
}
// System.Void BlueprintReality.MixCast.Shared.VirtualCamera::set_VideoInputIds(System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualCamera_set_VideoInputIds_m378BA26046BF2BC6530322470DE9742E18BFD808 (VirtualCamera_tE3BDC17FDEBF36E1926300A209225F859FB31C1B* __this, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___value0, const RuntimeMethod* method) 
{
	{
		Isset_tF8AB37BBD4ECC1DA61116E747FE00104BA58D11A* L_0 = (&__this->_____isset_19);
		L_0->___videoInputIds_11 = (bool)1;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1 = ___value0;
		__this->____videoInputIds_11 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____videoInputIds_11), (void*)L_1);
		return;
	}
}
// System.Boolean BlueprintReality.MixCast.Shared.VirtualCamera::get_ExternalComposite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VirtualCamera_get_ExternalComposite_mAAB6F73297B81B95B39E2D45DA2CA5E94A0B080B (VirtualCamera_tE3BDC17FDEBF36E1926300A209225F859FB31C1B* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____externalComposite_12;
		return L_0;
	}
}
// System.Void BlueprintReality.MixCast.Shared.VirtualCamera::set_ExternalComposite(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualCamera_set_ExternalComposite_m74FAD851F33F20CDD07E8FEEBE4D6761C9AF7EAD (VirtualCamera_tE3BDC17FDEBF36E1926300A209225F859FB31C1B* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		Isset_tF8AB37BBD4ECC1DA61116E747FE00104BA58D11A* L_0 = (&__this->_____isset_19);
		L_0->___externalComposite_12 = (bool)1;
		bool L_1 = ___value0;
		__this->____externalComposite_12 = L_1;
		return;
	}
}
// System.Double BlueprintReality.MixCast.Shared.VirtualCamera::get_FrameBufferDelay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double VirtualCamera_get_FrameBufferDelay_m3BB072B6372C82D9BB197CE841C68500762FD32A (VirtualCamera_tE3BDC17FDEBF36E1926300A209225F859FB31C1B* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->____frameBufferDelay_13;
		return L_0;
	}
}
// System.Void BlueprintReality.MixCast.Shared.VirtualCamera::set_FrameBufferDelay(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualCamera_set_FrameBufferDelay_m11CC5C7CE8E6EA06F3C1C8D23B6AD4EE9595476A (VirtualCamera_tE3BDC17FDEBF36E1926300A209225F859FB31C1B* __this, double ___value0, const RuntimeMethod* method) 
{
	{
		Isset_tF8AB37BBD4ECC1DA61116E747FE00104BA58D11A* L_0 = (&__this->_____isset_19);
		L_0->___frameBufferDelay_13 = (bool)1;
		double L_1 = ___value0;
		__this->____frameBufferDelay_13 = L_1;
		return;
	}
}
// System.Int64 BlueprintReality.MixCast.Shared.VirtualCamera::get_OutputPtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t VirtualCamera_get_OutputPtr_mF4AA03E4E508A4199E5CB0D6DDA77B1523D892EF (VirtualCamera_tE3BDC17FDEBF36E1926300A209225F859FB31C1B* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->____outputPtr_14;
		return L_0;
	}
}
// System.Void BlueprintReality.MixCast.Shared.VirtualCamera::set_OutputPtr(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualCamera_set_OutputPtr_m08CE35FBBC096A189C2AE6E82D5FAD51C60FBE1E (VirtualCamera_tE3BDC17FDEBF36E1926300A209225F859FB31C1B* __this, int64_t ___value0, const RuntimeMethod* method) 
{
	{
		Isset_tF8AB37BBD4ECC1DA61116E747FE00104BA58D11A* L_0 = (&__this->_____isset_19);
		L_0->___outputPtr_14 = (bool)1;
		int64_t L_1 = ___value0;
		__this->____outputPtr_14 = L_1;
		return;
	}
}
// System.Boolean BlueprintReality.MixCast.Shared.VirtualCamera::get_AutoSnapshotEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VirtualCamera_get_AutoSnapshotEnabled_m46565D880D1EEBB52393AE36E02C9782AF11367D (VirtualCamera_tE3BDC17FDEBF36E1926300A209225F859FB31C1B* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____autoSnapshotEnabled_15;
		return L_0;
	}
}
// System.Void BlueprintReality.MixCast.Shared.VirtualCamera::set_AutoSnapshotEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualCamera_set_AutoSnapshotEnabled_m100FD427D03EBE04B9F0D917F08E1FF3E66ED3E1 (VirtualCamera_tE3BDC17FDEBF36E1926300A209225F859FB31C1B* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		Isset_tF8AB37BBD4ECC1DA61116E747FE00104BA58D11A* L_0 = (&__this->_____isset_19);
		L_0->___autoSnapshotEnabled_15 = (bool)1;
		bool L_1 = ___value0;
		__this->____autoSnapshotEnabled_15 = L_1;
		return;
	}
}
// System.Boolean BlueprintReality.MixCast.Shared.VirtualCamera::get_VideoRecordingEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VirtualCamera_get_VideoRecordingEnabled_m1F7882665E5AA652148CF822CC5D81E3A027A5EA (VirtualCamera_tE3BDC17FDEBF36E1926300A209225F859FB31C1B* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____videoRecordingEnabled_16;
		return L_0;
	}
}
// System.Void BlueprintReality.MixCast.Shared.VirtualCamera::set_VideoRecordingEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualCamera_set_VideoRecordingEnabled_m98FD4E2EF0903F141C6418C59B1662494845B225 (VirtualCamera_tE3BDC17FDEBF36E1926300A209225F859FB31C1B* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		Isset_tF8AB37BBD4ECC1DA61116E747FE00104BA58D11A* L_0 = (&__this->_____isset_19);
		L_0->___videoRecordingEnabled_16 = (bool)1;
		bool L_1 = ___value0;
		__this->____videoRecordingEnabled_16 = L_1;
		return;
	}
}
// System.String BlueprintReality.MixCast.Shared.VirtualCamera::get_VideoRecordingOutputPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VirtualCamera_get_VideoRecordingOutputPath_m33504419471023E4E94B1D9F2F9D2B515DE8165B (VirtualCamera_tE3BDC17FDEBF36E1926300A209225F859FB31C1B* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____videoRecordingOutputPath_17;
		return L_0;
	}
}
// System.Void BlueprintReality.MixCast.Shared.VirtualCamera::set_VideoRecordingOutputPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualCamera_set_VideoRecordingOutputPath_m50D9B64791F050DA494F37C63758F64114C0EA5B (VirtualCamera_tE3BDC17FDEBF36E1926300A209225F859FB31C1B* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		Isset_tF8AB37BBD4ECC1DA61116E747FE00104BA58D11A* L_0 = (&__this->_____isset_19);
		L_0->___videoRecordingOutputPath_17 = (bool)1;
		String_t* L_1 = ___value0;
		__this->____videoRecordingOutputPath_17 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____videoRecordingOutputPath_17), (void*)L_1);
		return;
	}
}
// System.Boolean BlueprintReality.MixCast.Shared.VirtualCamera::get_VideoStreamingEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VirtualCamera_get_VideoStreamingEnabled_m7A267C386377825A87B7AFE9D7D5BA0C056B1EB6 (VirtualCamera_tE3BDC17FDEBF36E1926300A209225F859FB31C1B* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____videoStreamingEnabled_18;
		return L_0;
	}
}
// System.Void BlueprintReality.MixCast.Shared.VirtualCamera::set_VideoStreamingEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualCamera_set_VideoStreamingEnabled_m365D5A80F70308E2775293A62CC8D0A5EE2ABC9D (VirtualCamera_tE3BDC17FDEBF36E1926300A209225F859FB31C1B* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		Isset_tF8AB37BBD4ECC1DA61116E747FE00104BA58D11A* L_0 = (&__this->_____isset_19);
		L_0->___videoStreamingEnabled_18 = (bool)1;
		bool L_1 = ___value0;
		__this->____videoStreamingEnabled_18 = L_1;
		return;
	}
}
// System.Void BlueprintReality.MixCast.Shared.VirtualCamera::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualCamera__ctor_m6CDF3B17E50F0EB5E7FFD66D74DE717AD144A3A7 (VirtualCamera_tE3BDC17FDEBF36E1926300A209225F859FB31C1B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void BlueprintReality.MixCast.Shared.VirtualCamera::Read(Thrift.Protocol.TProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualCamera_Read_m0A79446BC34FBEAF37C815EA408E88B5C811B69B (VirtualCamera_tE3BDC17FDEBF36E1926300A209225F859FB31C1B* __this, TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* ___iprot0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TField_tF4D9D8EFE767C142914693E0E787547F0213D334 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int16_t V_1 = 0;
	TList_t901068FC67AF1D67BF97378377E2FBDB40D54C1B V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	String_t* V_4 = NULL;
	{
		TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_0 = ___iprot0;
		NullCheck(L_0);
		TProtocol_IncrementRecursionDepth_m92B440A7308F6D7012C73B74A6406855A29FF58B(L_0, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0435:
			{// begin finally (depth: 1)
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_1 = ___iprot0;
				NullCheck(L_1);
				TProtocol_DecrementRecursionDepth_m049900374B8368A8AEB03E6FC93DF288EA1BE44B(L_1, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_2 = ___iprot0;
				NullCheck(L_2);
				TStruct_tAD67F1F0C45235334F9440B6A587DB03A0CE5C96 L_3;
				L_3 = VirtualFuncInvoker0< TStruct_tAD67F1F0C45235334F9440B6A587DB03A0CE5C96 >::Invoke(29 /* Thrift.Protocol.TStruct Thrift.Protocol.TProtocol::ReadStructBegin() */, L_2);
			}

IL_000d_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_4 = ___iprot0;
				NullCheck(L_4);
				TField_tF4D9D8EFE767C142914693E0E787547F0213D334 L_5;
				L_5 = VirtualFuncInvoker0< TField_tF4D9D8EFE767C142914693E0E787547F0213D334 >::Invoke(31 /* Thrift.Protocol.TField Thrift.Protocol.TProtocol::ReadFieldBegin() */, L_4);
				V_0 = L_5;
				uint8_t L_6;
				L_6 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_0), NULL);
				if (!L_6)
				{
					goto IL_042d_1;
				}
			}
			{
				int16_t L_7;
				L_7 = TField_get_ID_m512A7F246CCD70AD2C473FA5AF09E6ECC8AB8B1A_inline((&V_0), NULL);
				V_1 = L_7;
				int16_t L_8 = V_1;
				switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_8, 1)))
				{
					case 0:
					{
						goto IL_0081_1;
					}
					case 1:
					{
						goto IL_00af_1;
					}
					case 2:
					{
						goto IL_00dc_1;
					}
					case 3:
					{
						goto IL_0115_1;
					}
					case 4:
					{
						goto IL_0289_1;
					}
					case 5:
					{
						goto IL_014e_1;
					}
					case 6:
					{
						goto IL_017b_1;
					}
					case 7:
					{
						goto IL_01a8_1;
					}
					case 8:
					{
						goto IL_02ea_1;
					}
					case 9:
					{
						goto IL_0317_1;
					}
					case 10:
					{
						goto IL_0344_1;
					}
					case 11:
					{
						goto IL_0372_1;
					}
					case 12:
					{
						goto IL_039f_1;
					}
					case 13:
					{
						goto IL_03c6_1;
					}
					case 14:
					{
						goto IL_03ee_1;
					}
					case 15:
					{
						goto IL_01d5_1;
					}
					case 16:
					{
						goto IL_022f_1;
					}
					case 17:
					{
						goto IL_0202_1;
					}
					case 18:
					{
						goto IL_025c_1;
					}
				}
			}
			{
				goto IL_0415_1;
			}

IL_0081_1:
			{
				uint8_t L_9;
				L_9 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_0), NULL);
				if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)11)))))
				{
					goto IL_009d_1;
				}
			}
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_10 = ___iprot0;
				NullCheck(L_10);
				String_t* L_11;
				L_11 = VirtualFuncInvoker0< String_t* >::Invoke(45 /* System.String Thrift.Protocol.TProtocol::ReadString() */, L_10);
				VirtualCamera_set_Identifier_m1464695B204983503DD4DBA7D0ED27D98B06A1CD(__this, L_11, NULL);
				goto IL_0422_1;
			}

IL_009d_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_12 = ___iprot0;
				uint8_t L_13;
				L_13 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_0), NULL);
				TProtocolUtil_Skip_m61E2B7C700479ECC6AD4E86636C1235C30B5A38F(L_12, L_13, NULL);
				goto IL_0422_1;
			}

IL_00af_1:
			{
				uint8_t L_14;
				L_14 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_0), NULL);
				if ((!(((uint32_t)L_14) == ((uint32_t)4))))
				{
					goto IL_00ca_1;
				}
			}
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_15 = ___iprot0;
				NullCheck(L_15);
				double L_16;
				L_16 = VirtualFuncInvoker0< double >::Invoke(44 /* System.Double Thrift.Protocol.TProtocol::ReadDouble() */, L_15);
				VirtualCamera_set_FieldOfView_m46211CC2CBE8D52F50925113FE511927C8CB44B0(__this, L_16, NULL);
				goto IL_0422_1;
			}

IL_00ca_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_17 = ___iprot0;
				uint8_t L_18;
				L_18 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_0), NULL);
				TProtocolUtil_Skip_m61E2B7C700479ECC6AD4E86636C1235C30B5A38F(L_17, L_18, NULL);
				goto IL_0422_1;
			}

IL_00dc_1:
			{
				uint8_t L_19;
				L_19 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_0), NULL);
				if ((!(((uint32_t)L_19) == ((uint32_t)((int32_t)12)))))
				{
					goto IL_0103_1;
				}
			}
			{
				Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* L_20 = (Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55*)il2cpp_codegen_object_new(Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55_il2cpp_TypeInfo_var);
				NullCheck(L_20);
				Vector3__ctor_mCAFEBD9384F7BA33874D50B8E48A7A3839C3BB20(L_20, NULL);
				VirtualCamera_set_CurrentPosition_m462827B2E9764B425213BA2B0C6EAFD35A894A93(__this, L_20, NULL);
				Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* L_21;
				L_21 = VirtualCamera_get_CurrentPosition_m874C91FBA8BF730867BA73F7AC532CDBCB236C14_inline(__this, NULL);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_22 = ___iprot0;
				NullCheck(L_21);
				Vector3_Read_m9D8873909C5EE03472C0E2D094626BF6CFB7E5E7(L_21, L_22, NULL);
				goto IL_0422_1;
			}

IL_0103_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_23 = ___iprot0;
				uint8_t L_24;
				L_24 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_0), NULL);
				TProtocolUtil_Skip_m61E2B7C700479ECC6AD4E86636C1235C30B5A38F(L_23, L_24, NULL);
				goto IL_0422_1;
			}

IL_0115_1:
			{
				uint8_t L_25;
				L_25 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_0), NULL);
				if ((!(((uint32_t)L_25) == ((uint32_t)((int32_t)12)))))
				{
					goto IL_013c_1;
				}
			}
			{
				Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14* L_26 = (Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14*)il2cpp_codegen_object_new(Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14_il2cpp_TypeInfo_var);
				NullCheck(L_26);
				Quaternion__ctor_mF918C4EAF6C09059CCFE7B52C82E199E11C185DA(L_26, NULL);
				VirtualCamera_set_CurrentRotation_m860EF481E6C3E1561AFD2963CE2160EEB036CE51(__this, L_26, NULL);
				Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14* L_27;
				L_27 = VirtualCamera_get_CurrentRotation_mC2D2A7A4031A0E2FD53EF7AD1C2958380D0319D3_inline(__this, NULL);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_28 = ___iprot0;
				NullCheck(L_27);
				Quaternion_Read_m0DE7EE832B4D8BFFC1A79C7FF48C15B324224B8D(L_27, L_28, NULL);
				goto IL_0422_1;
			}

IL_013c_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_29 = ___iprot0;
				uint8_t L_30;
				L_30 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_0), NULL);
				TProtocolUtil_Skip_m61E2B7C700479ECC6AD4E86636C1235C30B5A38F(L_29, L_30, NULL);
				goto IL_0422_1;
			}

IL_014e_1:
			{
				uint8_t L_31;
				L_31 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_0), NULL);
				if ((!(((uint32_t)L_31) == ((uint32_t)8))))
				{
					goto IL_0169_1;
				}
			}
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_32 = ___iprot0;
				NullCheck(L_32);
				int32_t L_33;
				L_33 = VirtualFuncInvoker0< int32_t >::Invoke(42 /* System.Int32 Thrift.Protocol.TProtocol::ReadI32() */, L_32);
				VirtualCamera_set_RenderResolutionWidth_m0FCE4BECAF59B2D96533FE82BDC61D7D730EA36C(__this, L_33, NULL);
				goto IL_0422_1;
			}

IL_0169_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_34 = ___iprot0;
				uint8_t L_35;
				L_35 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_0), NULL);
				TProtocolUtil_Skip_m61E2B7C700479ECC6AD4E86636C1235C30B5A38F(L_34, L_35, NULL);
				goto IL_0422_1;
			}

IL_017b_1:
			{
				uint8_t L_36;
				L_36 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_0), NULL);
				if ((!(((uint32_t)L_36) == ((uint32_t)8))))
				{
					goto IL_0196_1;
				}
			}
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_37 = ___iprot0;
				NullCheck(L_37);
				int32_t L_38;
				L_38 = VirtualFuncInvoker0< int32_t >::Invoke(42 /* System.Int32 Thrift.Protocol.TProtocol::ReadI32() */, L_37);
				VirtualCamera_set_RenderResolutionHeight_m6A87B7B4DCB4C12B0DE3D8D6D1B9645239D74EEB(__this, L_38, NULL);
				goto IL_0422_1;
			}

IL_0196_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_39 = ___iprot0;
				uint8_t L_40;
				L_40 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_0), NULL);
				TProtocolUtil_Skip_m61E2B7C700479ECC6AD4E86636C1235C30B5A38F(L_39, L_40, NULL);
				goto IL_0422_1;
			}

IL_01a8_1:
			{
				uint8_t L_41;
				L_41 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_0), NULL);
				if ((!(((uint32_t)L_41) == ((uint32_t)8))))
				{
					goto IL_01c3_1;
				}
			}
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_42 = ___iprot0;
				NullCheck(L_42);
				int32_t L_43;
				L_43 = VirtualFuncInvoker0< int32_t >::Invoke(42 /* System.Int32 Thrift.Protocol.TProtocol::ReadI32() */, L_42);
				VirtualCamera_set_RenderFramerate_m1709488B72075D1AE9306AA179FF94263CE36461(__this, L_43, NULL);
				goto IL_0422_1;
			}

IL_01c3_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_44 = ___iprot0;
				uint8_t L_45;
				L_45 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_0), NULL);
				TProtocolUtil_Skip_m61E2B7C700479ECC6AD4E86636C1235C30B5A38F(L_44, L_45, NULL);
				goto IL_0422_1;
			}

IL_01d5_1:
			{
				uint8_t L_46;
				L_46 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_0), NULL);
				if ((!(((uint32_t)L_46) == ((uint32_t)2))))
				{
					goto IL_01f0_1;
				}
			}
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_47 = ___iprot0;
				NullCheck(L_47);
				bool L_48;
				L_48 = VirtualFuncInvoker0< bool >::Invoke(39 /* System.Boolean Thrift.Protocol.TProtocol::ReadBool() */, L_47);
				VirtualCamera_set_UsesForeground_m61108B7689F91AAFD36D0F2C08A7718D9167B814(__this, L_48, NULL);
				goto IL_0422_1;
			}

IL_01f0_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_49 = ___iprot0;
				uint8_t L_50;
				L_50 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_0), NULL);
				TProtocolUtil_Skip_m61E2B7C700479ECC6AD4E86636C1235C30B5A38F(L_49, L_50, NULL);
				goto IL_0422_1;
			}

IL_0202_1:
			{
				uint8_t L_51;
				L_51 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_0), NULL);
				if ((!(((uint32_t)L_51) == ((uint32_t)2))))
				{
					goto IL_021d_1;
				}
			}
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_52 = ___iprot0;
				NullCheck(L_52);
				bool L_53;
				L_53 = VirtualFuncInvoker0< bool >::Invoke(39 /* System.Boolean Thrift.Protocol.TProtocol::ReadBool() */, L_52);
				VirtualCamera_set_UsesFullRender_m7BC661D4DC08A89DCE524C6C85F87382931AB41A(__this, L_53, NULL);
				goto IL_0422_1;
			}

IL_021d_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_54 = ___iprot0;
				uint8_t L_55;
				L_55 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_0), NULL);
				TProtocolUtil_Skip_m61E2B7C700479ECC6AD4E86636C1235C30B5A38F(L_54, L_55, NULL);
				goto IL_0422_1;
			}

IL_022f_1:
			{
				uint8_t L_56;
				L_56 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_0), NULL);
				if ((!(((uint32_t)L_56) == ((uint32_t)2))))
				{
					goto IL_024a_1;
				}
			}
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_57 = ___iprot0;
				NullCheck(L_57);
				bool L_58;
				L_58 = VirtualFuncInvoker0< bool >::Invoke(39 /* System.Boolean Thrift.Protocol.TProtocol::ReadBool() */, L_57);
				VirtualCamera_set_IsFirstPerson_m358EBAB324EB9A1FDD8D18F13E35F3511D1CF0D4(__this, L_58, NULL);
				goto IL_0422_1;
			}

IL_024a_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_59 = ___iprot0;
				uint8_t L_60;
				L_60 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_0), NULL);
				TProtocolUtil_Skip_m61E2B7C700479ECC6AD4E86636C1235C30B5A38F(L_59, L_60, NULL);
				goto IL_0422_1;
			}

IL_025c_1:
			{
				uint8_t L_61;
				L_61 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_0), NULL);
				if ((!(((uint32_t)L_61) == ((uint32_t)2))))
				{
					goto IL_0277_1;
				}
			}
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_62 = ___iprot0;
				NullCheck(L_62);
				bool L_63;
				L_63 = VirtualFuncInvoker0< bool >::Invoke(39 /* System.Boolean Thrift.Protocol.TProtocol::ReadBool() */, L_62);
				VirtualCamera_set_IsBackgroundTranslucent_m16E2D53F059511E86A1A845663DBE8FC46413FA1(__this, L_63, NULL);
				goto IL_0422_1;
			}

IL_0277_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_64 = ___iprot0;
				uint8_t L_65;
				L_65 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_0), NULL);
				TProtocolUtil_Skip_m61E2B7C700479ECC6AD4E86636C1235C30B5A38F(L_64, L_65, NULL);
				goto IL_0422_1;
			}

IL_0289_1:
			{
				uint8_t L_66;
				L_66 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_0), NULL);
				if ((!(((uint32_t)L_66) == ((uint32_t)((int32_t)15)))))
				{
					goto IL_02d8_1;
				}
			}
			{
				List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_67 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
				NullCheck(L_67);
				List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_67, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
				VirtualCamera_set_VideoInputIds_m378BA26046BF2BC6530322470DE9742E18BFD808(__this, L_67, NULL);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_68 = ___iprot0;
				NullCheck(L_68);
				TList_t901068FC67AF1D67BF97378377E2FBDB40D54C1B L_69;
				L_69 = VirtualFuncInvoker0< TList_t901068FC67AF1D67BF97378377E2FBDB40D54C1B >::Invoke(35 /* Thrift.Protocol.TList Thrift.Protocol.TProtocol::ReadListBegin() */, L_68);
				V_2 = L_69;
				V_3 = 0;
				goto IL_02c3_1;
			}

IL_02aa_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_70 = ___iprot0;
				NullCheck(L_70);
				String_t* L_71;
				L_71 = VirtualFuncInvoker0< String_t* >::Invoke(45 /* System.String Thrift.Protocol.TProtocol::ReadString() */, L_70);
				V_4 = L_71;
				List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_72;
				L_72 = VirtualCamera_get_VideoInputIds_mFB7A38A77C2BBCE738E1EE085B3A384055CE8AD0_inline(__this, NULL);
				String_t* L_73 = V_4;
				NullCheck(L_72);
				List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_72, L_73, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
				int32_t L_74 = V_3;
				V_3 = ((int32_t)il2cpp_codegen_add(L_74, 1));
			}

IL_02c3_1:
			{
				int32_t L_75 = V_3;
				int32_t L_76;
				L_76 = TList_get_Count_mC247FFC2E5F7D3F1AD406B549324A08C2097C6DC_inline((&V_2), NULL);
				if ((((int32_t)L_75) < ((int32_t)L_76)))
				{
					goto IL_02aa_1;
				}
			}
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_77 = ___iprot0;
				NullCheck(L_77);
				VirtualActionInvoker0::Invoke(36 /* System.Void Thrift.Protocol.TProtocol::ReadListEnd() */, L_77);
				goto IL_0422_1;
			}

IL_02d8_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_78 = ___iprot0;
				uint8_t L_79;
				L_79 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_0), NULL);
				TProtocolUtil_Skip_m61E2B7C700479ECC6AD4E86636C1235C30B5A38F(L_78, L_79, NULL);
				goto IL_0422_1;
			}

IL_02ea_1:
			{
				uint8_t L_80;
				L_80 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_0), NULL);
				if ((!(((uint32_t)L_80) == ((uint32_t)2))))
				{
					goto IL_0305_1;
				}
			}
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_81 = ___iprot0;
				NullCheck(L_81);
				bool L_82;
				L_82 = VirtualFuncInvoker0< bool >::Invoke(39 /* System.Boolean Thrift.Protocol.TProtocol::ReadBool() */, L_81);
				VirtualCamera_set_ExternalComposite_m74FAD851F33F20CDD07E8FEEBE4D6761C9AF7EAD(__this, L_82, NULL);
				goto IL_0422_1;
			}

IL_0305_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_83 = ___iprot0;
				uint8_t L_84;
				L_84 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_0), NULL);
				TProtocolUtil_Skip_m61E2B7C700479ECC6AD4E86636C1235C30B5A38F(L_83, L_84, NULL);
				goto IL_0422_1;
			}

IL_0317_1:
			{
				uint8_t L_85;
				L_85 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_0), NULL);
				if ((!(((uint32_t)L_85) == ((uint32_t)4))))
				{
					goto IL_0332_1;
				}
			}
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_86 = ___iprot0;
				NullCheck(L_86);
				double L_87;
				L_87 = VirtualFuncInvoker0< double >::Invoke(44 /* System.Double Thrift.Protocol.TProtocol::ReadDouble() */, L_86);
				VirtualCamera_set_FrameBufferDelay_m11CC5C7CE8E6EA06F3C1C8D23B6AD4EE9595476A(__this, L_87, NULL);
				goto IL_0422_1;
			}

IL_0332_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_88 = ___iprot0;
				uint8_t L_89;
				L_89 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_0), NULL);
				TProtocolUtil_Skip_m61E2B7C700479ECC6AD4E86636C1235C30B5A38F(L_88, L_89, NULL);
				goto IL_0422_1;
			}

IL_0344_1:
			{
				uint8_t L_90;
				L_90 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_0), NULL);
				if ((!(((uint32_t)L_90) == ((uint32_t)((int32_t)10)))))
				{
					goto IL_0360_1;
				}
			}
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_91 = ___iprot0;
				NullCheck(L_91);
				int64_t L_92;
				L_92 = VirtualFuncInvoker0< int64_t >::Invoke(43 /* System.Int64 Thrift.Protocol.TProtocol::ReadI64() */, L_91);
				VirtualCamera_set_OutputPtr_m08CE35FBBC096A189C2AE6E82D5FAD51C60FBE1E(__this, L_92, NULL);
				goto IL_0422_1;
			}

IL_0360_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_93 = ___iprot0;
				uint8_t L_94;
				L_94 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_0), NULL);
				TProtocolUtil_Skip_m61E2B7C700479ECC6AD4E86636C1235C30B5A38F(L_93, L_94, NULL);
				goto IL_0422_1;
			}

IL_0372_1:
			{
				uint8_t L_95;
				L_95 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_0), NULL);
				if ((!(((uint32_t)L_95) == ((uint32_t)2))))
				{
					goto IL_038d_1;
				}
			}
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_96 = ___iprot0;
				NullCheck(L_96);
				bool L_97;
				L_97 = VirtualFuncInvoker0< bool >::Invoke(39 /* System.Boolean Thrift.Protocol.TProtocol::ReadBool() */, L_96);
				VirtualCamera_set_AutoSnapshotEnabled_m100FD427D03EBE04B9F0D917F08E1FF3E66ED3E1(__this, L_97, NULL);
				goto IL_0422_1;
			}

IL_038d_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_98 = ___iprot0;
				uint8_t L_99;
				L_99 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_0), NULL);
				TProtocolUtil_Skip_m61E2B7C700479ECC6AD4E86636C1235C30B5A38F(L_98, L_99, NULL);
				goto IL_0422_1;
			}

IL_039f_1:
			{
				uint8_t L_100;
				L_100 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_0), NULL);
				if ((!(((uint32_t)L_100) == ((uint32_t)2))))
				{
					goto IL_03b7_1;
				}
			}
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_101 = ___iprot0;
				NullCheck(L_101);
				bool L_102;
				L_102 = VirtualFuncInvoker0< bool >::Invoke(39 /* System.Boolean Thrift.Protocol.TProtocol::ReadBool() */, L_101);
				VirtualCamera_set_VideoRecordingEnabled_m98FD4E2EF0903F141C6418C59B1662494845B225(__this, L_102, NULL);
				goto IL_0422_1;
			}

IL_03b7_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_103 = ___iprot0;
				uint8_t L_104;
				L_104 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_0), NULL);
				TProtocolUtil_Skip_m61E2B7C700479ECC6AD4E86636C1235C30B5A38F(L_103, L_104, NULL);
				goto IL_0422_1;
			}

IL_03c6_1:
			{
				uint8_t L_105;
				L_105 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_0), NULL);
				if ((!(((uint32_t)L_105) == ((uint32_t)((int32_t)11)))))
				{
					goto IL_03df_1;
				}
			}
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_106 = ___iprot0;
				NullCheck(L_106);
				String_t* L_107;
				L_107 = VirtualFuncInvoker0< String_t* >::Invoke(45 /* System.String Thrift.Protocol.TProtocol::ReadString() */, L_106);
				VirtualCamera_set_VideoRecordingOutputPath_m50D9B64791F050DA494F37C63758F64114C0EA5B(__this, L_107, NULL);
				goto IL_0422_1;
			}

IL_03df_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_108 = ___iprot0;
				uint8_t L_109;
				L_109 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_0), NULL);
				TProtocolUtil_Skip_m61E2B7C700479ECC6AD4E86636C1235C30B5A38F(L_108, L_109, NULL);
				goto IL_0422_1;
			}

IL_03ee_1:
			{
				uint8_t L_110;
				L_110 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_0), NULL);
				if ((!(((uint32_t)L_110) == ((uint32_t)2))))
				{
					goto IL_0406_1;
				}
			}
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_111 = ___iprot0;
				NullCheck(L_111);
				bool L_112;
				L_112 = VirtualFuncInvoker0< bool >::Invoke(39 /* System.Boolean Thrift.Protocol.TProtocol::ReadBool() */, L_111);
				VirtualCamera_set_VideoStreamingEnabled_m365D5A80F70308E2775293A62CC8D0A5EE2ABC9D(__this, L_112, NULL);
				goto IL_0422_1;
			}

IL_0406_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_113 = ___iprot0;
				uint8_t L_114;
				L_114 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_0), NULL);
				TProtocolUtil_Skip_m61E2B7C700479ECC6AD4E86636C1235C30B5A38F(L_113, L_114, NULL);
				goto IL_0422_1;
			}

IL_0415_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_115 = ___iprot0;
				uint8_t L_116;
				L_116 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_0), NULL);
				TProtocolUtil_Skip_m61E2B7C700479ECC6AD4E86636C1235C30B5A38F(L_115, L_116, NULL);
			}

IL_0422_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_117 = ___iprot0;
				NullCheck(L_117);
				VirtualActionInvoker0::Invoke(32 /* System.Void Thrift.Protocol.TProtocol::ReadFieldEnd() */, L_117);
				goto IL_000d_1;
			}

IL_042d_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_118 = ___iprot0;
				NullCheck(L_118);
				VirtualActionInvoker0::Invoke(30 /* System.Void Thrift.Protocol.TProtocol::ReadStructEnd() */, L_118);
				goto IL_043c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_043c:
	{
		return;
	}
}
// System.Void BlueprintReality.MixCast.Shared.VirtualCamera::Write(Thrift.Protocol.TProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VirtualCamera_Write_m00D54BAB9ED5642F4187F583C61D8B01DB2188F9 (VirtualCamera_tE3BDC17FDEBF36E1926300A209225F859FB31C1B* __this, TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* ___oprot0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0037EC0B3611F69BD86975EE4CBEBAD1DCBDEA27);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B8A49A0353D350D3914D9B4B8223F51C1CB133);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral052D771534A93213F559DA21DA2D56168B5ED695);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A5433D4CC8DCD88756CA05920823B32900D6ED4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21C6943AEA75D106927EEAAE6D7F26E32225AD42);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24DF95401885DF3F59ABAE4A56A5D6940BD4487D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral294E0C62A89A8889D1AD26E73B97FB9F2A593551);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2B2CC011E4A2BEF0F4EB2D88AC4999B9D86C2F78);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral521EA713AE1F6152B31F87B56805275D6D8AC601);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C0AE92C60A8378D70F04D5BBBB387E7D5877C7D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B6F093532E977E255EB3D812B15AC0E6A33F464);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6DEEEF36920F61940209703F2BD62BAA52C34DB7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86B4E71C45AECE63747EB77075D68B751810DCC8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB0A7FF8F03BF3DF33E6B5D8A0E5A1B3BCCE3843F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB6367A7E5AA76443244EAFB63445308EFC58CECB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA882DBD77969E8D4688CC20312C5E0598CC3070);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD041235C6E3B3654955BE30D0E0F0983145F5D76);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD1D9E352065C957183F0179F41DAF623191E651A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDE591C6584D5C9979158992953617EB3E088ED06);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE6933D4DE7E7C6579BE95FD095F994C29CF09E76);
		s_Il2CppMethodInitialized = true;
	}
	TStruct_tAD67F1F0C45235334F9440B6A587DB03A0CE5C96 V_0;
	memset((&V_0), 0, sizeof(V_0));
	TField_tF4D9D8EFE767C142914693E0E787547F0213D334 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 V_2;
	memset((&V_2), 0, sizeof(V_2));
	String_t* V_3 = NULL;
	{
		TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_0 = ___oprot0;
		NullCheck(L_0);
		TProtocol_IncrementRecursionDepth_m92B440A7308F6D7012C73B74A6406855A29FF58B(L_0, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0599:
			{// begin finally (depth: 1)
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_1 = ___oprot0;
				NullCheck(L_1);
				TProtocol_DecrementRecursionDepth_m049900374B8368A8AEB03E6FC93DF288EA1BE44B(L_1, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				TStruct__ctor_mD56EA112D651038138D3BC7203C3606718E5CB3F((&V_0), _stringLiteral86B4E71C45AECE63747EB77075D68B751810DCC8, NULL);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_2 = ___oprot0;
				TStruct_tAD67F1F0C45235334F9440B6A587DB03A0CE5C96 L_3 = V_0;
				NullCheck(L_2);
				VirtualActionInvoker1< TStruct_tAD67F1F0C45235334F9440B6A587DB03A0CE5C96 >::Invoke(8 /* System.Void Thrift.Protocol.TProtocol::WriteStructBegin(Thrift.Protocol.TStruct) */, L_2, L_3);
				il2cpp_codegen_initobj((&V_1), sizeof(TField_tF4D9D8EFE767C142914693E0E787547F0213D334));
				String_t* L_4;
				L_4 = VirtualCamera_get_Identifier_mEB3E5A1767F4C8F0D9F933E1DDD0AC6792627E4E_inline(__this, NULL);
				if (!L_4)
				{
					goto IL_006c_1;
				}
			}
			{
				Isset_tF8AB37BBD4ECC1DA61116E747FE00104BA58D11A* L_5 = (&__this->_____isset_19);
				bool L_6 = L_5->___identifier_0;
				if (!L_6)
				{
					goto IL_006c_1;
				}
			}
			{
				TField_set_Name_mAD35FC0847F990535FAF3E3032CD117B560AF751_inline((&V_1), _stringLiteral00B8A49A0353D350D3914D9B4B8223F51C1CB133, NULL);
				TField_set_Type_m2AA4AF23C96A26CB269B78B067489E10F055E983_inline((&V_1), ((int32_t)11), NULL);
				TField_set_ID_m68843CC49A2A49966729F299A58A2BBC6FCC4F01_inline((&V_1), (int16_t)1, NULL);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_7 = ___oprot0;
				TField_tF4D9D8EFE767C142914693E0E787547F0213D334 L_8 = V_1;
				NullCheck(L_7);
				VirtualActionInvoker1< TField_tF4D9D8EFE767C142914693E0E787547F0213D334 >::Invoke(10 /* System.Void Thrift.Protocol.TProtocol::WriteFieldBegin(Thrift.Protocol.TField) */, L_7, L_8);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_9 = ___oprot0;
				String_t* L_10;
				L_10 = VirtualCamera_get_Identifier_mEB3E5A1767F4C8F0D9F933E1DDD0AC6792627E4E_inline(__this, NULL);
				NullCheck(L_9);
				VirtualActionInvoker1< String_t* >::Invoke(25 /* System.Void Thrift.Protocol.TProtocol::WriteString(System.String) */, L_9, L_10);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_11 = ___oprot0;
				NullCheck(L_11);
				VirtualActionInvoker0::Invoke(11 /* System.Void Thrift.Protocol.TProtocol::WriteFieldEnd() */, L_11);
			}

IL_006c_1:
			{
				Isset_tF8AB37BBD4ECC1DA61116E747FE00104BA58D11A* L_12 = (&__this->_____isset_19);
				bool L_13 = L_12->___fieldOfView_1;
				if (!L_13)
				{
					goto IL_00ae_1;
				}
			}
			{
				TField_set_Name_mAD35FC0847F990535FAF3E3032CD117B560AF751_inline((&V_1), _stringLiteral24DF95401885DF3F59ABAE4A56A5D6940BD4487D, NULL);
				TField_set_Type_m2AA4AF23C96A26CB269B78B067489E10F055E983_inline((&V_1), 4, NULL);
				TField_set_ID_m68843CC49A2A49966729F299A58A2BBC6FCC4F01_inline((&V_1), (int16_t)2, NULL);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_14 = ___oprot0;
				TField_tF4D9D8EFE767C142914693E0E787547F0213D334 L_15 = V_1;
				NullCheck(L_14);
				VirtualActionInvoker1< TField_tF4D9D8EFE767C142914693E0E787547F0213D334 >::Invoke(10 /* System.Void Thrift.Protocol.TProtocol::WriteFieldBegin(Thrift.Protocol.TField) */, L_14, L_15);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_16 = ___oprot0;
				double L_17;
				L_17 = VirtualCamera_get_FieldOfView_m4A53680A2958AD93774C5E71C9489FB48E295A92_inline(__this, NULL);
				NullCheck(L_16);
				VirtualActionInvoker1< double >::Invoke(24 /* System.Void Thrift.Protocol.TProtocol::WriteDouble(System.Double) */, L_16, L_17);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_18 = ___oprot0;
				NullCheck(L_18);
				VirtualActionInvoker0::Invoke(11 /* System.Void Thrift.Protocol.TProtocol::WriteFieldEnd() */, L_18);
			}

IL_00ae_1:
			{
				Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* L_19;
				L_19 = VirtualCamera_get_CurrentPosition_m874C91FBA8BF730867BA73F7AC532CDBCB236C14_inline(__this, NULL);
				if (!L_19)
				{
					goto IL_00f9_1;
				}
			}
			{
				Isset_tF8AB37BBD4ECC1DA61116E747FE00104BA58D11A* L_20 = (&__this->_____isset_19);
				bool L_21 = L_20->___currentPosition_2;
				if (!L_21)
				{
					goto IL_00f9_1;
				}
			}
			{
				TField_set_Name_mAD35FC0847F990535FAF3E3032CD117B560AF751_inline((&V_1), _stringLiteral521EA713AE1F6152B31F87B56805275D6D8AC601, NULL);
				TField_set_Type_m2AA4AF23C96A26CB269B78B067489E10F055E983_inline((&V_1), ((int32_t)12), NULL);
				TField_set_ID_m68843CC49A2A49966729F299A58A2BBC6FCC4F01_inline((&V_1), (int16_t)3, NULL);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_22 = ___oprot0;
				TField_tF4D9D8EFE767C142914693E0E787547F0213D334 L_23 = V_1;
				NullCheck(L_22);
				VirtualActionInvoker1< TField_tF4D9D8EFE767C142914693E0E787547F0213D334 >::Invoke(10 /* System.Void Thrift.Protocol.TProtocol::WriteFieldBegin(Thrift.Protocol.TField) */, L_22, L_23);
				Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* L_24;
				L_24 = VirtualCamera_get_CurrentPosition_m874C91FBA8BF730867BA73F7AC532CDBCB236C14_inline(__this, NULL);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_25 = ___oprot0;
				NullCheck(L_24);
				Vector3_Write_mB350FC59FBEB5FA8D0255E8BE137A9F921607BFF(L_24, L_25, NULL);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_26 = ___oprot0;
				NullCheck(L_26);
				VirtualActionInvoker0::Invoke(11 /* System.Void Thrift.Protocol.TProtocol::WriteFieldEnd() */, L_26);
			}

IL_00f9_1:
			{
				Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14* L_27;
				L_27 = VirtualCamera_get_CurrentRotation_mC2D2A7A4031A0E2FD53EF7AD1C2958380D0319D3_inline(__this, NULL);
				if (!L_27)
				{
					goto IL_0144_1;
				}
			}
			{
				Isset_tF8AB37BBD4ECC1DA61116E747FE00104BA58D11A* L_28 = (&__this->_____isset_19);
				bool L_29 = L_28->___currentRotation_3;
				if (!L_29)
				{
					goto IL_0144_1;
				}
			}
			{
				TField_set_Name_mAD35FC0847F990535FAF3E3032CD117B560AF751_inline((&V_1), _stringLiteralB0A7FF8F03BF3DF33E6B5D8A0E5A1B3BCCE3843F, NULL);
				TField_set_Type_m2AA4AF23C96A26CB269B78B067489E10F055E983_inline((&V_1), ((int32_t)12), NULL);
				TField_set_ID_m68843CC49A2A49966729F299A58A2BBC6FCC4F01_inline((&V_1), (int16_t)4, NULL);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_30 = ___oprot0;
				TField_tF4D9D8EFE767C142914693E0E787547F0213D334 L_31 = V_1;
				NullCheck(L_30);
				VirtualActionInvoker1< TField_tF4D9D8EFE767C142914693E0E787547F0213D334 >::Invoke(10 /* System.Void Thrift.Protocol.TProtocol::WriteFieldBegin(Thrift.Protocol.TField) */, L_30, L_31);
				Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14* L_32;
				L_32 = VirtualCamera_get_CurrentRotation_mC2D2A7A4031A0E2FD53EF7AD1C2958380D0319D3_inline(__this, NULL);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_33 = ___oprot0;
				NullCheck(L_32);
				Quaternion_Write_m1B5494004EA15AE513F8B66F3B0DF7BFBED9346B(L_32, L_33, NULL);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_34 = ___oprot0;
				NullCheck(L_34);
				VirtualActionInvoker0::Invoke(11 /* System.Void Thrift.Protocol.TProtocol::WriteFieldEnd() */, L_34);
			}

IL_0144_1:
			{
				List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_35;
				L_35 = VirtualCamera_get_VideoInputIds_mFB7A38A77C2BBCE738E1EE085B3A384055CE8AD0_inline(__this, NULL);
				if (!L_35)
				{
					goto IL_01da_1;
				}
			}
			{
				Isset_tF8AB37BBD4ECC1DA61116E747FE00104BA58D11A* L_36 = (&__this->_____isset_19);
				bool L_37 = L_36->___videoInputIds_11;
				if (!L_37)
				{
					goto IL_01da_1;
				}
			}
			{
				TField_set_Name_mAD35FC0847F990535FAF3E3032CD117B560AF751_inline((&V_1), _stringLiteralE6933D4DE7E7C6579BE95FD095F994C29CF09E76, NULL);
				TField_set_Type_m2AA4AF23C96A26CB269B78B067489E10F055E983_inline((&V_1), ((int32_t)15), NULL);
				TField_set_ID_m68843CC49A2A49966729F299A58A2BBC6FCC4F01_inline((&V_1), (int16_t)5, NULL);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_38 = ___oprot0;
				TField_tF4D9D8EFE767C142914693E0E787547F0213D334 L_39 = V_1;
				NullCheck(L_38);
				VirtualActionInvoker1< TField_tF4D9D8EFE767C142914693E0E787547F0213D334 >::Invoke(10 /* System.Void Thrift.Protocol.TProtocol::WriteFieldBegin(Thrift.Protocol.TField) */, L_38, L_39);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_40 = ___oprot0;
				List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_41;
				L_41 = VirtualCamera_get_VideoInputIds_mFB7A38A77C2BBCE738E1EE085B3A384055CE8AD0_inline(__this, NULL);
				NullCheck(L_41);
				int32_t L_42;
				L_42 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_41, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
				TList_t901068FC67AF1D67BF97378377E2FBDB40D54C1B L_43;
				memset((&L_43), 0, sizeof(L_43));
				TList__ctor_m17DE205A02F15CE5C16553DA637E2408B7B565D9((&L_43), ((int32_t)11), L_42, /*hidden argument*/NULL);
				NullCheck(L_40);
				VirtualActionInvoker1< TList_t901068FC67AF1D67BF97378377E2FBDB40D54C1B >::Invoke(15 /* System.Void Thrift.Protocol.TProtocol::WriteListBegin(Thrift.Protocol.TList) */, L_40, L_43);
				List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_44;
				L_44 = VirtualCamera_get_VideoInputIds_mFB7A38A77C2BBCE738E1EE085B3A384055CE8AD0_inline(__this, NULL);
				NullCheck(L_44);
				Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 L_45;
				L_45 = List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D(L_44, List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var);
				V_2 = L_45;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_01c0_1:
					{// begin finally (depth: 2)
						Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7((&V_2), Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var);
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_01b5_2;
					}

IL_01a6_2:
					{
						String_t* L_46;
						L_46 = Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_inline((&V_2), Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var);
						V_3 = L_46;
						TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_47 = ___oprot0;
						String_t* L_48 = V_3;
						NullCheck(L_47);
						VirtualActionInvoker1< String_t* >::Invoke(25 /* System.Void Thrift.Protocol.TProtocol::WriteString(System.String) */, L_47, L_48);
					}

IL_01b5_2:
					{
						bool L_49;
						L_49 = Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED((&V_2), Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var);
						if (L_49)
						{
							goto IL_01a6_2;
						}
					}
					{
						goto IL_01ce_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_01ce_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_50 = ___oprot0;
				NullCheck(L_50);
				VirtualActionInvoker0::Invoke(16 /* System.Void Thrift.Protocol.TProtocol::WriteListEnd() */, L_50);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_51 = ___oprot0;
				NullCheck(L_51);
				VirtualActionInvoker0::Invoke(11 /* System.Void Thrift.Protocol.TProtocol::WriteFieldEnd() */, L_51);
			}

IL_01da_1:
			{
				Isset_tF8AB37BBD4ECC1DA61116E747FE00104BA58D11A* L_52 = (&__this->_____isset_19);
				bool L_53 = L_52->___renderResolutionWidth_4;
				if (!L_53)
				{
					goto IL_021c_1;
				}
			}
			{
				TField_set_Name_mAD35FC0847F990535FAF3E3032CD117B560AF751_inline((&V_1), _stringLiteralD041235C6E3B3654955BE30D0E0F0983145F5D76, NULL);
				TField_set_Type_m2AA4AF23C96A26CB269B78B067489E10F055E983_inline((&V_1), 8, NULL);
				TField_set_ID_m68843CC49A2A49966729F299A58A2BBC6FCC4F01_inline((&V_1), (int16_t)6, NULL);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_54 = ___oprot0;
				TField_tF4D9D8EFE767C142914693E0E787547F0213D334 L_55 = V_1;
				NullCheck(L_54);
				VirtualActionInvoker1< TField_tF4D9D8EFE767C142914693E0E787547F0213D334 >::Invoke(10 /* System.Void Thrift.Protocol.TProtocol::WriteFieldBegin(Thrift.Protocol.TField) */, L_54, L_55);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_56 = ___oprot0;
				int32_t L_57;
				L_57 = VirtualCamera_get_RenderResolutionWidth_m98D10D02754388546B82A964C256B4FF4B4A9DA0_inline(__this, NULL);
				NullCheck(L_56);
				VirtualActionInvoker1< int32_t >::Invoke(22 /* System.Void Thrift.Protocol.TProtocol::WriteI32(System.Int32) */, L_56, L_57);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_58 = ___oprot0;
				NullCheck(L_58);
				VirtualActionInvoker0::Invoke(11 /* System.Void Thrift.Protocol.TProtocol::WriteFieldEnd() */, L_58);
			}

IL_021c_1:
			{
				Isset_tF8AB37BBD4ECC1DA61116E747FE00104BA58D11A* L_59 = (&__this->_____isset_19);
				bool L_60 = L_59->___renderResolutionHeight_5;
				if (!L_60)
				{
					goto IL_025e_1;
				}
			}
			{
				TField_set_Name_mAD35FC0847F990535FAF3E3032CD117B560AF751_inline((&V_1), _stringLiteral6B6F093532E977E255EB3D812B15AC0E6A33F464, NULL);
				TField_set_Type_m2AA4AF23C96A26CB269B78B067489E10F055E983_inline((&V_1), 8, NULL);
				TField_set_ID_m68843CC49A2A49966729F299A58A2BBC6FCC4F01_inline((&V_1), (int16_t)7, NULL);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_61 = ___oprot0;
				TField_tF4D9D8EFE767C142914693E0E787547F0213D334 L_62 = V_1;
				NullCheck(L_61);
				VirtualActionInvoker1< TField_tF4D9D8EFE767C142914693E0E787547F0213D334 >::Invoke(10 /* System.Void Thrift.Protocol.TProtocol::WriteFieldBegin(Thrift.Protocol.TField) */, L_61, L_62);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_63 = ___oprot0;
				int32_t L_64;
				L_64 = VirtualCamera_get_RenderResolutionHeight_m00191951FF1DAB883EAE7335E91834587927FBB6_inline(__this, NULL);
				NullCheck(L_63);
				VirtualActionInvoker1< int32_t >::Invoke(22 /* System.Void Thrift.Protocol.TProtocol::WriteI32(System.Int32) */, L_63, L_64);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_65 = ___oprot0;
				NullCheck(L_65);
				VirtualActionInvoker0::Invoke(11 /* System.Void Thrift.Protocol.TProtocol::WriteFieldEnd() */, L_65);
			}

IL_025e_1:
			{
				Isset_tF8AB37BBD4ECC1DA61116E747FE00104BA58D11A* L_66 = (&__this->_____isset_19);
				bool L_67 = L_66->___renderFramerate_6;
				if (!L_67)
				{
					goto IL_02a0_1;
				}
			}
			{
				TField_set_Name_mAD35FC0847F990535FAF3E3032CD117B560AF751_inline((&V_1), _stringLiteralDE591C6584D5C9979158992953617EB3E088ED06, NULL);
				TField_set_Type_m2AA4AF23C96A26CB269B78B067489E10F055E983_inline((&V_1), 8, NULL);
				TField_set_ID_m68843CC49A2A49966729F299A58A2BBC6FCC4F01_inline((&V_1), (int16_t)8, NULL);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_68 = ___oprot0;
				TField_tF4D9D8EFE767C142914693E0E787547F0213D334 L_69 = V_1;
				NullCheck(L_68);
				VirtualActionInvoker1< TField_tF4D9D8EFE767C142914693E0E787547F0213D334 >::Invoke(10 /* System.Void Thrift.Protocol.TProtocol::WriteFieldBegin(Thrift.Protocol.TField) */, L_68, L_69);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_70 = ___oprot0;
				int32_t L_71;
				L_71 = VirtualCamera_get_RenderFramerate_mF0F4BCA562C3238F9EE0448856A3F4E0A39D1F4F_inline(__this, NULL);
				NullCheck(L_70);
				VirtualActionInvoker1< int32_t >::Invoke(22 /* System.Void Thrift.Protocol.TProtocol::WriteI32(System.Int32) */, L_70, L_71);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_72 = ___oprot0;
				NullCheck(L_72);
				VirtualActionInvoker0::Invoke(11 /* System.Void Thrift.Protocol.TProtocol::WriteFieldEnd() */, L_72);
			}

IL_02a0_1:
			{
				Isset_tF8AB37BBD4ECC1DA61116E747FE00104BA58D11A* L_73 = (&__this->_____isset_19);
				bool L_74 = L_73->___externalComposite_12;
				if (!L_74)
				{
					goto IL_02e3_1;
				}
			}
			{
				TField_set_Name_mAD35FC0847F990535FAF3E3032CD117B560AF751_inline((&V_1), _stringLiteral6DEEEF36920F61940209703F2BD62BAA52C34DB7, NULL);
				TField_set_Type_m2AA4AF23C96A26CB269B78B067489E10F055E983_inline((&V_1), 2, NULL);
				TField_set_ID_m68843CC49A2A49966729F299A58A2BBC6FCC4F01_inline((&V_1), (int16_t)((int32_t)9), NULL);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_75 = ___oprot0;
				TField_tF4D9D8EFE767C142914693E0E787547F0213D334 L_76 = V_1;
				NullCheck(L_75);
				VirtualActionInvoker1< TField_tF4D9D8EFE767C142914693E0E787547F0213D334 >::Invoke(10 /* System.Void Thrift.Protocol.TProtocol::WriteFieldBegin(Thrift.Protocol.TField) */, L_75, L_76);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_77 = ___oprot0;
				bool L_78;
				L_78 = VirtualCamera_get_ExternalComposite_mAAB6F73297B81B95B39E2D45DA2CA5E94A0B080B_inline(__this, NULL);
				NullCheck(L_77);
				VirtualActionInvoker1< bool >::Invoke(19 /* System.Void Thrift.Protocol.TProtocol::WriteBool(System.Boolean) */, L_77, L_78);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_79 = ___oprot0;
				NullCheck(L_79);
				VirtualActionInvoker0::Invoke(11 /* System.Void Thrift.Protocol.TProtocol::WriteFieldEnd() */, L_79);
			}

IL_02e3_1:
			{
				Isset_tF8AB37BBD4ECC1DA61116E747FE00104BA58D11A* L_80 = (&__this->_____isset_19);
				bool L_81 = L_80->___frameBufferDelay_13;
				if (!L_81)
				{
					goto IL_0326_1;
				}
			}
			{
				TField_set_Name_mAD35FC0847F990535FAF3E3032CD117B560AF751_inline((&V_1), _stringLiteral5C0AE92C60A8378D70F04D5BBBB387E7D5877C7D, NULL);
				TField_set_Type_m2AA4AF23C96A26CB269B78B067489E10F055E983_inline((&V_1), 4, NULL);
				TField_set_ID_m68843CC49A2A49966729F299A58A2BBC6FCC4F01_inline((&V_1), (int16_t)((int32_t)10), NULL);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_82 = ___oprot0;
				TField_tF4D9D8EFE767C142914693E0E787547F0213D334 L_83 = V_1;
				NullCheck(L_82);
				VirtualActionInvoker1< TField_tF4D9D8EFE767C142914693E0E787547F0213D334 >::Invoke(10 /* System.Void Thrift.Protocol.TProtocol::WriteFieldBegin(Thrift.Protocol.TField) */, L_82, L_83);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_84 = ___oprot0;
				double L_85;
				L_85 = VirtualCamera_get_FrameBufferDelay_m3BB072B6372C82D9BB197CE841C68500762FD32A_inline(__this, NULL);
				NullCheck(L_84);
				VirtualActionInvoker1< double >::Invoke(24 /* System.Void Thrift.Protocol.TProtocol::WriteDouble(System.Double) */, L_84, L_85);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_86 = ___oprot0;
				NullCheck(L_86);
				VirtualActionInvoker0::Invoke(11 /* System.Void Thrift.Protocol.TProtocol::WriteFieldEnd() */, L_86);
			}

IL_0326_1:
			{
				Isset_tF8AB37BBD4ECC1DA61116E747FE00104BA58D11A* L_87 = (&__this->_____isset_19);
				bool L_88 = L_87->___outputPtr_14;
				if (!L_88)
				{
					goto IL_036a_1;
				}
			}
			{
				TField_set_Name_mAD35FC0847F990535FAF3E3032CD117B560AF751_inline((&V_1), _stringLiteral294E0C62A89A8889D1AD26E73B97FB9F2A593551, NULL);
				TField_set_Type_m2AA4AF23C96A26CB269B78B067489E10F055E983_inline((&V_1), ((int32_t)10), NULL);
				TField_set_ID_m68843CC49A2A49966729F299A58A2BBC6FCC4F01_inline((&V_1), (int16_t)((int32_t)11), NULL);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_89 = ___oprot0;
				TField_tF4D9D8EFE767C142914693E0E787547F0213D334 L_90 = V_1;
				NullCheck(L_89);
				VirtualActionInvoker1< TField_tF4D9D8EFE767C142914693E0E787547F0213D334 >::Invoke(10 /* System.Void Thrift.Protocol.TProtocol::WriteFieldBegin(Thrift.Protocol.TField) */, L_89, L_90);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_91 = ___oprot0;
				int64_t L_92;
				L_92 = VirtualCamera_get_OutputPtr_mF4AA03E4E508A4199E5CB0D6DDA77B1523D892EF_inline(__this, NULL);
				NullCheck(L_91);
				VirtualActionInvoker1< int64_t >::Invoke(23 /* System.Void Thrift.Protocol.TProtocol::WriteI64(System.Int64) */, L_91, L_92);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_93 = ___oprot0;
				NullCheck(L_93);
				VirtualActionInvoker0::Invoke(11 /* System.Void Thrift.Protocol.TProtocol::WriteFieldEnd() */, L_93);
			}

IL_036a_1:
			{
				Isset_tF8AB37BBD4ECC1DA61116E747FE00104BA58D11A* L_94 = (&__this->_____isset_19);
				bool L_95 = L_94->___autoSnapshotEnabled_15;
				if (!L_95)
				{
					goto IL_03ad_1;
				}
			}
			{
				TField_set_Name_mAD35FC0847F990535FAF3E3032CD117B560AF751_inline((&V_1), _stringLiteral0037EC0B3611F69BD86975EE4CBEBAD1DCBDEA27, NULL);
				TField_set_Type_m2AA4AF23C96A26CB269B78B067489E10F055E983_inline((&V_1), 2, NULL);
				TField_set_ID_m68843CC49A2A49966729F299A58A2BBC6FCC4F01_inline((&V_1), (int16_t)((int32_t)12), NULL);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_96 = ___oprot0;
				TField_tF4D9D8EFE767C142914693E0E787547F0213D334 L_97 = V_1;
				NullCheck(L_96);
				VirtualActionInvoker1< TField_tF4D9D8EFE767C142914693E0E787547F0213D334 >::Invoke(10 /* System.Void Thrift.Protocol.TProtocol::WriteFieldBegin(Thrift.Protocol.TField) */, L_96, L_97);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_98 = ___oprot0;
				bool L_99;
				L_99 = VirtualCamera_get_AutoSnapshotEnabled_m46565D880D1EEBB52393AE36E02C9782AF11367D_inline(__this, NULL);
				NullCheck(L_98);
				VirtualActionInvoker1< bool >::Invoke(19 /* System.Void Thrift.Protocol.TProtocol::WriteBool(System.Boolean) */, L_98, L_99);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_100 = ___oprot0;
				NullCheck(L_100);
				VirtualActionInvoker0::Invoke(11 /* System.Void Thrift.Protocol.TProtocol::WriteFieldEnd() */, L_100);
			}

IL_03ad_1:
			{
				Isset_tF8AB37BBD4ECC1DA61116E747FE00104BA58D11A* L_101 = (&__this->_____isset_19);
				bool L_102 = L_101->___videoRecordingEnabled_16;
				if (!L_102)
				{
					goto IL_03f0_1;
				}
			}
			{
				TField_set_Name_mAD35FC0847F990535FAF3E3032CD117B560AF751_inline((&V_1), _stringLiteralD1D9E352065C957183F0179F41DAF623191E651A, NULL);
				TField_set_Type_m2AA4AF23C96A26CB269B78B067489E10F055E983_inline((&V_1), 2, NULL);
				TField_set_ID_m68843CC49A2A49966729F299A58A2BBC6FCC4F01_inline((&V_1), (int16_t)((int32_t)13), NULL);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_103 = ___oprot0;
				TField_tF4D9D8EFE767C142914693E0E787547F0213D334 L_104 = V_1;
				NullCheck(L_103);
				VirtualActionInvoker1< TField_tF4D9D8EFE767C142914693E0E787547F0213D334 >::Invoke(10 /* System.Void Thrift.Protocol.TProtocol::WriteFieldBegin(Thrift.Protocol.TField) */, L_103, L_104);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_105 = ___oprot0;
				bool L_106;
				L_106 = VirtualCamera_get_VideoRecordingEnabled_m1F7882665E5AA652148CF822CC5D81E3A027A5EA_inline(__this, NULL);
				NullCheck(L_105);
				VirtualActionInvoker1< bool >::Invoke(19 /* System.Void Thrift.Protocol.TProtocol::WriteBool(System.Boolean) */, L_105, L_106);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_107 = ___oprot0;
				NullCheck(L_107);
				VirtualActionInvoker0::Invoke(11 /* System.Void Thrift.Protocol.TProtocol::WriteFieldEnd() */, L_107);
			}

IL_03f0_1:
			{
				String_t* L_108;
				L_108 = VirtualCamera_get_VideoRecordingOutputPath_m33504419471023E4E94B1D9F2F9D2B515DE8165B_inline(__this, NULL);
				if (!L_108)
				{
					goto IL_043c_1;
				}
			}
			{
				Isset_tF8AB37BBD4ECC1DA61116E747FE00104BA58D11A* L_109 = (&__this->_____isset_19);
				bool L_110 = L_109->___videoRecordingOutputPath_17;
				if (!L_110)
				{
					goto IL_043c_1;
				}
			}
			{
				TField_set_Name_mAD35FC0847F990535FAF3E3032CD117B560AF751_inline((&V_1), _stringLiteralCA882DBD77969E8D4688CC20312C5E0598CC3070, NULL);
				TField_set_Type_m2AA4AF23C96A26CB269B78B067489E10F055E983_inline((&V_1), ((int32_t)11), NULL);
				TField_set_ID_m68843CC49A2A49966729F299A58A2BBC6FCC4F01_inline((&V_1), (int16_t)((int32_t)14), NULL);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_111 = ___oprot0;
				TField_tF4D9D8EFE767C142914693E0E787547F0213D334 L_112 = V_1;
				NullCheck(L_111);
				VirtualActionInvoker1< TField_tF4D9D8EFE767C142914693E0E787547F0213D334 >::Invoke(10 /* System.Void Thrift.Protocol.TProtocol::WriteFieldBegin(Thrift.Protocol.TField) */, L_111, L_112);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_113 = ___oprot0;
				String_t* L_114;
				L_114 = VirtualCamera_get_VideoRecordingOutputPath_m33504419471023E4E94B1D9F2F9D2B515DE8165B_inline(__this, NULL);
				NullCheck(L_113);
				VirtualActionInvoker1< String_t* >::Invoke(25 /* System.Void Thrift.Protocol.TProtocol::WriteString(System.String) */, L_113, L_114);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_115 = ___oprot0;
				NullCheck(L_115);
				VirtualActionInvoker0::Invoke(11 /* System.Void Thrift.Protocol.TProtocol::WriteFieldEnd() */, L_115);
			}

IL_043c_1:
			{
				Isset_tF8AB37BBD4ECC1DA61116E747FE00104BA58D11A* L_116 = (&__this->_____isset_19);
				bool L_117 = L_116->___videoStreamingEnabled_18;
				if (!L_117)
				{
					goto IL_047f_1;
				}
			}
			{
				TField_set_Name_mAD35FC0847F990535FAF3E3032CD117B560AF751_inline((&V_1), _stringLiteral21C6943AEA75D106927EEAAE6D7F26E32225AD42, NULL);
				TField_set_Type_m2AA4AF23C96A26CB269B78B067489E10F055E983_inline((&V_1), 2, NULL);
				TField_set_ID_m68843CC49A2A49966729F299A58A2BBC6FCC4F01_inline((&V_1), (int16_t)((int32_t)15), NULL);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_118 = ___oprot0;
				TField_tF4D9D8EFE767C142914693E0E787547F0213D334 L_119 = V_1;
				NullCheck(L_118);
				VirtualActionInvoker1< TField_tF4D9D8EFE767C142914693E0E787547F0213D334 >::Invoke(10 /* System.Void Thrift.Protocol.TProtocol::WriteFieldBegin(Thrift.Protocol.TField) */, L_118, L_119);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_120 = ___oprot0;
				bool L_121;
				L_121 = VirtualCamera_get_VideoStreamingEnabled_m7A267C386377825A87B7AFE9D7D5BA0C056B1EB6_inline(__this, NULL);
				NullCheck(L_120);
				VirtualActionInvoker1< bool >::Invoke(19 /* System.Void Thrift.Protocol.TProtocol::WriteBool(System.Boolean) */, L_120, L_121);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_122 = ___oprot0;
				NullCheck(L_122);
				VirtualActionInvoker0::Invoke(11 /* System.Void Thrift.Protocol.TProtocol::WriteFieldEnd() */, L_122);
			}

IL_047f_1:
			{
				Isset_tF8AB37BBD4ECC1DA61116E747FE00104BA58D11A* L_123 = (&__this->_____isset_19);
				bool L_124 = L_123->___usesForeground_7;
				if (!L_124)
				{
					goto IL_04c2_1;
				}
			}
			{
				TField_set_Name_mAD35FC0847F990535FAF3E3032CD117B560AF751_inline((&V_1), _stringLiteral052D771534A93213F559DA21DA2D56168B5ED695, NULL);
				TField_set_Type_m2AA4AF23C96A26CB269B78B067489E10F055E983_inline((&V_1), 2, NULL);
				TField_set_ID_m68843CC49A2A49966729F299A58A2BBC6FCC4F01_inline((&V_1), (int16_t)((int32_t)16), NULL);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_125 = ___oprot0;
				TField_tF4D9D8EFE767C142914693E0E787547F0213D334 L_126 = V_1;
				NullCheck(L_125);
				VirtualActionInvoker1< TField_tF4D9D8EFE767C142914693E0E787547F0213D334 >::Invoke(10 /* System.Void Thrift.Protocol.TProtocol::WriteFieldBegin(Thrift.Protocol.TField) */, L_125, L_126);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_127 = ___oprot0;
				bool L_128;
				L_128 = VirtualCamera_get_UsesForeground_m9FF2D095C3A58E121FF257B1F4447DF925695B1E_inline(__this, NULL);
				NullCheck(L_127);
				VirtualActionInvoker1< bool >::Invoke(19 /* System.Void Thrift.Protocol.TProtocol::WriteBool(System.Boolean) */, L_127, L_128);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_129 = ___oprot0;
				NullCheck(L_129);
				VirtualActionInvoker0::Invoke(11 /* System.Void Thrift.Protocol.TProtocol::WriteFieldEnd() */, L_129);
			}

IL_04c2_1:
			{
				Isset_tF8AB37BBD4ECC1DA61116E747FE00104BA58D11A* L_130 = (&__this->_____isset_19);
				bool L_131 = L_130->___isFirstPerson_9;
				if (!L_131)
				{
					goto IL_0505_1;
				}
			}
			{
				TField_set_Name_mAD35FC0847F990535FAF3E3032CD117B560AF751_inline((&V_1), _stringLiteralB6367A7E5AA76443244EAFB63445308EFC58CECB, NULL);
				TField_set_Type_m2AA4AF23C96A26CB269B78B067489E10F055E983_inline((&V_1), 2, NULL);
				TField_set_ID_m68843CC49A2A49966729F299A58A2BBC6FCC4F01_inline((&V_1), (int16_t)((int32_t)17), NULL);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_132 = ___oprot0;
				TField_tF4D9D8EFE767C142914693E0E787547F0213D334 L_133 = V_1;
				NullCheck(L_132);
				VirtualActionInvoker1< TField_tF4D9D8EFE767C142914693E0E787547F0213D334 >::Invoke(10 /* System.Void Thrift.Protocol.TProtocol::WriteFieldBegin(Thrift.Protocol.TField) */, L_132, L_133);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_134 = ___oprot0;
				bool L_135;
				L_135 = VirtualCamera_get_IsFirstPerson_mE94533EAF07B4CD935C8CF66A8FD4257B0E34183_inline(__this, NULL);
				NullCheck(L_134);
				VirtualActionInvoker1< bool >::Invoke(19 /* System.Void Thrift.Protocol.TProtocol::WriteBool(System.Boolean) */, L_134, L_135);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_136 = ___oprot0;
				NullCheck(L_136);
				VirtualActionInvoker0::Invoke(11 /* System.Void Thrift.Protocol.TProtocol::WriteFieldEnd() */, L_136);
			}

IL_0505_1:
			{
				Isset_tF8AB37BBD4ECC1DA61116E747FE00104BA58D11A* L_137 = (&__this->_____isset_19);
				bool L_138 = L_137->___usesFullRender_8;
				if (!L_138)
				{
					goto IL_0548_1;
				}
			}
			{
				TField_set_Name_mAD35FC0847F990535FAF3E3032CD117B560AF751_inline((&V_1), _stringLiteral1A5433D4CC8DCD88756CA05920823B32900D6ED4, NULL);
				TField_set_Type_m2AA4AF23C96A26CB269B78B067489E10F055E983_inline((&V_1), 2, NULL);
				TField_set_ID_m68843CC49A2A49966729F299A58A2BBC6FCC4F01_inline((&V_1), (int16_t)((int32_t)18), NULL);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_139 = ___oprot0;
				TField_tF4D9D8EFE767C142914693E0E787547F0213D334 L_140 = V_1;
				NullCheck(L_139);
				VirtualActionInvoker1< TField_tF4D9D8EFE767C142914693E0E787547F0213D334 >::Invoke(10 /* System.Void Thrift.Protocol.TProtocol::WriteFieldBegin(Thrift.Protocol.TField) */, L_139, L_140);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_141 = ___oprot0;
				bool L_142;
				L_142 = VirtualCamera_get_UsesFullRender_mC240E649BE2B7B55EC14C66BB6431F1BE9E481F5_inline(__this, NULL);
				NullCheck(L_141);
				VirtualActionInvoker1< bool >::Invoke(19 /* System.Void Thrift.Protocol.TProtocol::WriteBool(System.Boolean) */, L_141, L_142);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_143 = ___oprot0;
				NullCheck(L_143);
				VirtualActionInvoker0::Invoke(11 /* System.Void Thrift.Protocol.TProtocol::WriteFieldEnd() */, L_143);
			}

IL_0548_1:
			{
				Isset_tF8AB37BBD4ECC1DA61116E747FE00104BA58D11A* L_144 = (&__this->_____isset_19);
				bool L_145 = L_144->___isBackgroundTranslucent_10;
				if (!L_145)
				{
					goto IL_058b_1;
				}
			}
			{
				TField_set_Name_mAD35FC0847F990535FAF3E3032CD117B560AF751_inline((&V_1), _stringLiteral2B2CC011E4A2BEF0F4EB2D88AC4999B9D86C2F78, NULL);
				TField_set_Type_m2AA4AF23C96A26CB269B78B067489E10F055E983_inline((&V_1), 2, NULL);
				TField_set_ID_m68843CC49A2A49966729F299A58A2BBC6FCC4F01_inline((&V_1), (int16_t)((int32_t)19), NULL);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_146 = ___oprot0;
				TField_tF4D9D8EFE767C142914693E0E787547F0213D334 L_147 = V_1;
				NullCheck(L_146);
				VirtualActionInvoker1< TField_tF4D9D8EFE767C142914693E0E787547F0213D334 >::Invoke(10 /* System.Void Thrift.Protocol.TProtocol::WriteFieldBegin(Thrift.Protocol.TField) */, L_146, L_147);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_148 = ___oprot0;
				bool L_149;
				L_149 = VirtualCamera_get_IsBackgroundTranslucent_mA09987376A70D5E8BF879D5E049376B377DD03F1_inline(__this, NULL);
				NullCheck(L_148);
				VirtualActionInvoker1< bool >::Invoke(19 /* System.Void Thrift.Protocol.TProtocol::WriteBool(System.Boolean) */, L_148, L_149);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_150 = ___oprot0;
				NullCheck(L_150);
				VirtualActionInvoker0::Invoke(11 /* System.Void Thrift.Protocol.TProtocol::WriteFieldEnd() */, L_150);
			}

IL_058b_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_151 = ___oprot0;
				NullCheck(L_151);
				VirtualActionInvoker0::Invoke(12 /* System.Void Thrift.Protocol.TProtocol::WriteFieldStop() */, L_151);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_152 = ___oprot0;
				NullCheck(L_152);
				VirtualActionInvoker0::Invoke(9 /* System.Void Thrift.Protocol.TProtocol::WriteStructEnd() */, L_152);
				goto IL_05a0;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_05a0:
	{
		return;
	}
}
// System.String BlueprintReality.MixCast.Shared.VirtualCamera::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VirtualCamera_ToString_m059B05068C36F7FF363DA2797B4F9CC24C2C3E47 (VirtualCamera_tE3BDC17FDEBF36E1926300A209225F859FB31C1B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13C577853824288CE181F3EFFB46894F371FE703);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2D5ECCACAD40C64CC7C818E3A488043C7B90B644);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3341AB0C46A5F7410A843CE6A4B07A5444E0CE20);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D9F674E16B0AD11C0659F8EF8805176622EB0C0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4AD31964DA1C986C47B43E530945FC1C1EB96412);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4F6D22A94C59F979FE613A2F236AC26B7B7F18CC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6EBF42AAE519DFCC3FB53CFECA4A1F82145A4694);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral72F508ED0766F68D2EF203AC908FD3B550A6DD43);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88F4291E3C060A1D87FF3F6BA438F5521E763A1F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral906E739FFCDF3B1C61FF6F6E2632135A3FC5992A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99DF8A7F98F666693814D9E88045C27B589143EE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC155034939E9A9507275297B688E3967E4593563);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC15630E345E8B75218948879161C847F941AACCE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC527109579F30C810E714252CA943A9196B94FA3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD64DE515DE159C401BB82652225D6BE22CDAD7A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9EBF9813C81335B2AD715E3CAC8A9FC469C9E5F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA489604D5C72C792FE7D06E11A27FE9966E80C8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDF1AD350BFD6CF2C44901B0FBEC10C6F01BAB688);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE017CADD28BA9E2902581E48E68F6739A702271B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE906303A779D4A8F03FC8312B8E4E9696969B438);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF4EA47BC54D18E067BF2A367E1E04F90DEDBB52C);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	bool V_1 = false;
	StringBuilder_t* G_B15_0 = NULL;
	StringBuilder_t* G_B14_0 = NULL;
	String_t* G_B16_0 = NULL;
	StringBuilder_t* G_B16_1 = NULL;
	StringBuilder_t* G_B23_0 = NULL;
	StringBuilder_t* G_B22_0 = NULL;
	String_t* G_B24_0 = NULL;
	StringBuilder_t* G_B24_1 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_mCD797D942316CB356205FD96415B0B7581CDAD60(L_0, _stringLiteralC15630E345E8B75218948879161C847F941AACCE, NULL);
		V_0 = L_0;
		V_1 = (bool)1;
		String_t* L_1;
		L_1 = VirtualCamera_get_Identifier_mEB3E5A1767F4C8F0D9F933E1DDD0AC6792627E4E_inline(__this, NULL);
		if (!L_1)
		{
			goto IL_004c;
		}
	}
	{
		Isset_tF8AB37BBD4ECC1DA61116E747FE00104BA58D11A* L_2 = (&__this->_____isset_19);
		bool L_3 = L_2->___identifier_0;
		if (!L_3)
		{
			goto IL_004c;
		}
	}
	{
		bool L_4 = V_1;
		if (L_4)
		{
			goto IL_0031;
		}
	}
	{
		StringBuilder_t* L_5 = V_0;
		NullCheck(L_5);
		StringBuilder_t* L_6;
		L_6 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_5, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
	}

IL_0031:
	{
		V_1 = (bool)0;
		StringBuilder_t* L_7 = V_0;
		NullCheck(L_7);
		StringBuilder_t* L_8;
		L_8 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_7, _stringLiteral88F4291E3C060A1D87FF3F6BA438F5521E763A1F, NULL);
		StringBuilder_t* L_9 = V_0;
		String_t* L_10;
		L_10 = VirtualCamera_get_Identifier_mEB3E5A1767F4C8F0D9F933E1DDD0AC6792627E4E_inline(__this, NULL);
		NullCheck(L_9);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_9, L_10, NULL);
	}

IL_004c:
	{
		Isset_tF8AB37BBD4ECC1DA61116E747FE00104BA58D11A* L_12 = (&__this->_____isset_19);
		bool L_13 = L_12->___fieldOfView_1;
		if (!L_13)
		{
			goto IL_0083;
		}
	}
	{
		bool L_14 = V_1;
		if (L_14)
		{
			goto IL_0068;
		}
	}
	{
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_15, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
	}

IL_0068:
	{
		V_1 = (bool)0;
		StringBuilder_t* L_17 = V_0;
		NullCheck(L_17);
		StringBuilder_t* L_18;
		L_18 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, _stringLiteral99DF8A7F98F666693814D9E88045C27B589143EE, NULL);
		StringBuilder_t* L_19 = V_0;
		double L_20;
		L_20 = VirtualCamera_get_FieldOfView_m4A53680A2958AD93774C5E71C9489FB48E295A92_inline(__this, NULL);
		NullCheck(L_19);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m078D9861582DCD6037F533DF9C2FFEF0A54269E0(L_19, L_20, NULL);
	}

IL_0083:
	{
		Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* L_22;
		L_22 = VirtualCamera_get_CurrentPosition_m874C91FBA8BF730867BA73F7AC532CDBCB236C14_inline(__this, NULL);
		if (!L_22)
		{
			goto IL_00d6;
		}
	}
	{
		Isset_tF8AB37BBD4ECC1DA61116E747FE00104BA58D11A* L_23 = (&__this->_____isset_19);
		bool L_24 = L_23->___currentPosition_2;
		if (!L_24)
		{
			goto IL_00d6;
		}
	}
	{
		bool L_25 = V_1;
		if (L_25)
		{
			goto IL_00a7;
		}
	}
	{
		StringBuilder_t* L_26 = V_0;
		NullCheck(L_26);
		StringBuilder_t* L_27;
		L_27 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_26, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
	}

IL_00a7:
	{
		V_1 = (bool)0;
		StringBuilder_t* L_28 = V_0;
		NullCheck(L_28);
		StringBuilder_t* L_29;
		L_29 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_28, _stringLiteralE906303A779D4A8F03FC8312B8E4E9696969B438, NULL);
		StringBuilder_t* L_30 = V_0;
		Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* L_31;
		L_31 = VirtualCamera_get_CurrentPosition_m874C91FBA8BF730867BA73F7AC532CDBCB236C14_inline(__this, NULL);
		G_B14_0 = L_30;
		if (!L_31)
		{
			G_B15_0 = L_30;
			goto IL_00cb;
		}
	}
	{
		Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* L_32;
		L_32 = VirtualCamera_get_CurrentPosition_m874C91FBA8BF730867BA73F7AC532CDBCB236C14_inline(__this, NULL);
		NullCheck(L_32);
		String_t* L_33;
		L_33 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_32);
		G_B16_0 = L_33;
		G_B16_1 = G_B14_0;
		goto IL_00d0;
	}

IL_00cb:
	{
		G_B16_0 = _stringLiteralD64DE515DE159C401BB82652225D6BE22CDAD7A1;
		G_B16_1 = G_B15_0;
	}

IL_00d0:
	{
		NullCheck(G_B16_1);
		StringBuilder_t* L_34;
		L_34 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(G_B16_1, G_B16_0, NULL);
	}

IL_00d6:
	{
		Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14* L_35;
		L_35 = VirtualCamera_get_CurrentRotation_mC2D2A7A4031A0E2FD53EF7AD1C2958380D0319D3_inline(__this, NULL);
		if (!L_35)
		{
			goto IL_0129;
		}
	}
	{
		Isset_tF8AB37BBD4ECC1DA61116E747FE00104BA58D11A* L_36 = (&__this->_____isset_19);
		bool L_37 = L_36->___currentRotation_3;
		if (!L_37)
		{
			goto IL_0129;
		}
	}
	{
		bool L_38 = V_1;
		if (L_38)
		{
			goto IL_00fa;
		}
	}
	{
		StringBuilder_t* L_39 = V_0;
		NullCheck(L_39);
		StringBuilder_t* L_40;
		L_40 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_39, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
	}

IL_00fa:
	{
		V_1 = (bool)0;
		StringBuilder_t* L_41 = V_0;
		NullCheck(L_41);
		StringBuilder_t* L_42;
		L_42 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_41, _stringLiteral2D5ECCACAD40C64CC7C818E3A488043C7B90B644, NULL);
		StringBuilder_t* L_43 = V_0;
		Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14* L_44;
		L_44 = VirtualCamera_get_CurrentRotation_mC2D2A7A4031A0E2FD53EF7AD1C2958380D0319D3_inline(__this, NULL);
		G_B22_0 = L_43;
		if (!L_44)
		{
			G_B23_0 = L_43;
			goto IL_011e;
		}
	}
	{
		Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14* L_45;
		L_45 = VirtualCamera_get_CurrentRotation_mC2D2A7A4031A0E2FD53EF7AD1C2958380D0319D3_inline(__this, NULL);
		NullCheck(L_45);
		String_t* L_46;
		L_46 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_45);
		G_B24_0 = L_46;
		G_B24_1 = G_B22_0;
		goto IL_0123;
	}

IL_011e:
	{
		G_B24_0 = _stringLiteralD64DE515DE159C401BB82652225D6BE22CDAD7A1;
		G_B24_1 = G_B23_0;
	}

IL_0123:
	{
		NullCheck(G_B24_1);
		StringBuilder_t* L_47;
		L_47 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(G_B24_1, G_B24_0, NULL);
	}

IL_0129:
	{
		Isset_tF8AB37BBD4ECC1DA61116E747FE00104BA58D11A* L_48 = (&__this->_____isset_19);
		bool L_49 = L_48->___renderResolutionWidth_4;
		if (!L_49)
		{
			goto IL_0160;
		}
	}
	{
		bool L_50 = V_1;
		if (L_50)
		{
			goto IL_0145;
		}
	}
	{
		StringBuilder_t* L_51 = V_0;
		NullCheck(L_51);
		StringBuilder_t* L_52;
		L_52 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_51, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
	}

IL_0145:
	{
		V_1 = (bool)0;
		StringBuilder_t* L_53 = V_0;
		NullCheck(L_53);
		StringBuilder_t* L_54;
		L_54 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_53, _stringLiteralD9EBF9813C81335B2AD715E3CAC8A9FC469C9E5F, NULL);
		StringBuilder_t* L_55 = V_0;
		int32_t L_56;
		L_56 = VirtualCamera_get_RenderResolutionWidth_m98D10D02754388546B82A964C256B4FF4B4A9DA0_inline(__this, NULL);
		NullCheck(L_55);
		StringBuilder_t* L_57;
		L_57 = StringBuilder_Append_m283B617AC29FB0DD6F3A7D8C01D385C25A5F0FAA(L_55, L_56, NULL);
	}

IL_0160:
	{
		Isset_tF8AB37BBD4ECC1DA61116E747FE00104BA58D11A* L_58 = (&__this->_____isset_19);
		bool L_59 = L_58->___renderResolutionHeight_5;
		if (!L_59)
		{
			goto IL_0197;
		}
	}
	{
		bool L_60 = V_1;
		if (L_60)
		{
			goto IL_017c;
		}
	}
	{
		StringBuilder_t* L_61 = V_0;
		NullCheck(L_61);
		StringBuilder_t* L_62;
		L_62 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_61, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
	}

IL_017c:
	{
		V_1 = (bool)0;
		StringBuilder_t* L_63 = V_0;
		NullCheck(L_63);
		StringBuilder_t* L_64;
		L_64 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_63, _stringLiteral3D9F674E16B0AD11C0659F8EF8805176622EB0C0, NULL);
		StringBuilder_t* L_65 = V_0;
		int32_t L_66;
		L_66 = VirtualCamera_get_RenderResolutionHeight_m00191951FF1DAB883EAE7335E91834587927FBB6_inline(__this, NULL);
		NullCheck(L_65);
		StringBuilder_t* L_67;
		L_67 = StringBuilder_Append_m283B617AC29FB0DD6F3A7D8C01D385C25A5F0FAA(L_65, L_66, NULL);
	}

IL_0197:
	{
		Isset_tF8AB37BBD4ECC1DA61116E747FE00104BA58D11A* L_68 = (&__this->_____isset_19);
		bool L_69 = L_68->___renderFramerate_6;
		if (!L_69)
		{
			goto IL_01ce;
		}
	}
	{
		bool L_70 = V_1;
		if (L_70)
		{
			goto IL_01b3;
		}
	}
	{
		StringBuilder_t* L_71 = V_0;
		NullCheck(L_71);
		StringBuilder_t* L_72;
		L_72 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_71, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
	}

IL_01b3:
	{
		V_1 = (bool)0;
		StringBuilder_t* L_73 = V_0;
		NullCheck(L_73);
		StringBuilder_t* L_74;
		L_74 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_73, _stringLiteralC527109579F30C810E714252CA943A9196B94FA3, NULL);
		StringBuilder_t* L_75 = V_0;
		int32_t L_76;
		L_76 = VirtualCamera_get_RenderFramerate_mF0F4BCA562C3238F9EE0448856A3F4E0A39D1F4F_inline(__this, NULL);
		NullCheck(L_75);
		StringBuilder_t* L_77;
		L_77 = StringBuilder_Append_m283B617AC29FB0DD6F3A7D8C01D385C25A5F0FAA(L_75, L_76, NULL);
	}

IL_01ce:
	{
		Isset_tF8AB37BBD4ECC1DA61116E747FE00104BA58D11A* L_78 = (&__this->_____isset_19);
		bool L_79 = L_78->___usesForeground_7;
		if (!L_79)
		{
			goto IL_0205;
		}
	}
	{
		bool L_80 = V_1;
		if (L_80)
		{
			goto IL_01ea;
		}
	}
	{
		StringBuilder_t* L_81 = V_0;
		NullCheck(L_81);
		StringBuilder_t* L_82;
		L_82 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_81, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
	}

IL_01ea:
	{
		V_1 = (bool)0;
		StringBuilder_t* L_83 = V_0;
		NullCheck(L_83);
		StringBuilder_t* L_84;
		L_84 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_83, _stringLiteral13C577853824288CE181F3EFFB46894F371FE703, NULL);
		StringBuilder_t* L_85 = V_0;
		bool L_86;
		L_86 = VirtualCamera_get_UsesForeground_m9FF2D095C3A58E121FF257B1F4447DF925695B1E_inline(__this, NULL);
		NullCheck(L_85);
		StringBuilder_t* L_87;
		L_87 = StringBuilder_Append_mCCCA4BBC406F80A72246B165C201C841877371FC(L_85, L_86, NULL);
	}

IL_0205:
	{
		Isset_tF8AB37BBD4ECC1DA61116E747FE00104BA58D11A* L_88 = (&__this->_____isset_19);
		bool L_89 = L_88->___usesFullRender_8;
		if (!L_89)
		{
			goto IL_023c;
		}
	}
	{
		bool L_90 = V_1;
		if (L_90)
		{
			goto IL_0221;
		}
	}
	{
		StringBuilder_t* L_91 = V_0;
		NullCheck(L_91);
		StringBuilder_t* L_92;
		L_92 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_91, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
	}

IL_0221:
	{
		V_1 = (bool)0;
		StringBuilder_t* L_93 = V_0;
		NullCheck(L_93);
		StringBuilder_t* L_94;
		L_94 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_93, _stringLiteral3341AB0C46A5F7410A843CE6A4B07A5444E0CE20, NULL);
		StringBuilder_t* L_95 = V_0;
		bool L_96;
		L_96 = VirtualCamera_get_UsesFullRender_mC240E649BE2B7B55EC14C66BB6431F1BE9E481F5_inline(__this, NULL);
		NullCheck(L_95);
		StringBuilder_t* L_97;
		L_97 = StringBuilder_Append_mCCCA4BBC406F80A72246B165C201C841877371FC(L_95, L_96, NULL);
	}

IL_023c:
	{
		Isset_tF8AB37BBD4ECC1DA61116E747FE00104BA58D11A* L_98 = (&__this->_____isset_19);
		bool L_99 = L_98->___isFirstPerson_9;
		if (!L_99)
		{
			goto IL_0273;
		}
	}
	{
		bool L_100 = V_1;
		if (L_100)
		{
			goto IL_0258;
		}
	}
	{
		StringBuilder_t* L_101 = V_0;
		NullCheck(L_101);
		StringBuilder_t* L_102;
		L_102 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_101, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
	}

IL_0258:
	{
		V_1 = (bool)0;
		StringBuilder_t* L_103 = V_0;
		NullCheck(L_103);
		StringBuilder_t* L_104;
		L_104 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_103, _stringLiteralE017CADD28BA9E2902581E48E68F6739A702271B, NULL);
		StringBuilder_t* L_105 = V_0;
		bool L_106;
		L_106 = VirtualCamera_get_IsFirstPerson_mE94533EAF07B4CD935C8CF66A8FD4257B0E34183_inline(__this, NULL);
		NullCheck(L_105);
		StringBuilder_t* L_107;
		L_107 = StringBuilder_Append_mCCCA4BBC406F80A72246B165C201C841877371FC(L_105, L_106, NULL);
	}

IL_0273:
	{
		Isset_tF8AB37BBD4ECC1DA61116E747FE00104BA58D11A* L_108 = (&__this->_____isset_19);
		bool L_109 = L_108->___isBackgroundTranslucent_10;
		if (!L_109)
		{
			goto IL_02aa;
		}
	}
	{
		bool L_110 = V_1;
		if (L_110)
		{
			goto IL_028f;
		}
	}
	{
		StringBuilder_t* L_111 = V_0;
		NullCheck(L_111);
		StringBuilder_t* L_112;
		L_112 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_111, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
	}

IL_028f:
	{
		V_1 = (bool)0;
		StringBuilder_t* L_113 = V_0;
		NullCheck(L_113);
		StringBuilder_t* L_114;
		L_114 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_113, _stringLiteralF4EA47BC54D18E067BF2A367E1E04F90DEDBB52C, NULL);
		StringBuilder_t* L_115 = V_0;
		bool L_116;
		L_116 = VirtualCamera_get_IsBackgroundTranslucent_mA09987376A70D5E8BF879D5E049376B377DD03F1_inline(__this, NULL);
		NullCheck(L_115);
		StringBuilder_t* L_117;
		L_117 = StringBuilder_Append_mCCCA4BBC406F80A72246B165C201C841877371FC(L_115, L_116, NULL);
	}

IL_02aa:
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_118;
		L_118 = VirtualCamera_get_VideoInputIds_mFB7A38A77C2BBCE738E1EE085B3A384055CE8AD0_inline(__this, NULL);
		if (!L_118)
		{
			goto IL_02e9;
		}
	}
	{
		Isset_tF8AB37BBD4ECC1DA61116E747FE00104BA58D11A* L_119 = (&__this->_____isset_19);
		bool L_120 = L_119->___videoInputIds_11;
		if (!L_120)
		{
			goto IL_02e9;
		}
	}
	{
		bool L_121 = V_1;
		if (L_121)
		{
			goto IL_02ce;
		}
	}
	{
		StringBuilder_t* L_122 = V_0;
		NullCheck(L_122);
		StringBuilder_t* L_123;
		L_123 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_122, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
	}

IL_02ce:
	{
		V_1 = (bool)0;
		StringBuilder_t* L_124 = V_0;
		NullCheck(L_124);
		StringBuilder_t* L_125;
		L_125 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_124, _stringLiteralDF1AD350BFD6CF2C44901B0FBEC10C6F01BAB688, NULL);
		StringBuilder_t* L_126 = V_0;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_127;
		L_127 = VirtualCamera_get_VideoInputIds_mFB7A38A77C2BBCE738E1EE085B3A384055CE8AD0_inline(__this, NULL);
		NullCheck(L_126);
		StringBuilder_t* L_128;
		L_128 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_126, L_127, NULL);
	}

IL_02e9:
	{
		Isset_tF8AB37BBD4ECC1DA61116E747FE00104BA58D11A* L_129 = (&__this->_____isset_19);
		bool L_130 = L_129->___externalComposite_12;
		if (!L_130)
		{
			goto IL_0320;
		}
	}
	{
		bool L_131 = V_1;
		if (L_131)
		{
			goto IL_0305;
		}
	}
	{
		StringBuilder_t* L_132 = V_0;
		NullCheck(L_132);
		StringBuilder_t* L_133;
		L_133 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_132, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
	}

IL_0305:
	{
		V_1 = (bool)0;
		StringBuilder_t* L_134 = V_0;
		NullCheck(L_134);
		StringBuilder_t* L_135;
		L_135 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_134, _stringLiteral906E739FFCDF3B1C61FF6F6E2632135A3FC5992A, NULL);
		StringBuilder_t* L_136 = V_0;
		bool L_137;
		L_137 = VirtualCamera_get_ExternalComposite_mAAB6F73297B81B95B39E2D45DA2CA5E94A0B080B_inline(__this, NULL);
		NullCheck(L_136);
		StringBuilder_t* L_138;
		L_138 = StringBuilder_Append_mCCCA4BBC406F80A72246B165C201C841877371FC(L_136, L_137, NULL);
	}

IL_0320:
	{
		Isset_tF8AB37BBD4ECC1DA61116E747FE00104BA58D11A* L_139 = (&__this->_____isset_19);
		bool L_140 = L_139->___frameBufferDelay_13;
		if (!L_140)
		{
			goto IL_0357;
		}
	}
	{
		bool L_141 = V_1;
		if (L_141)
		{
			goto IL_033c;
		}
	}
	{
		StringBuilder_t* L_142 = V_0;
		NullCheck(L_142);
		StringBuilder_t* L_143;
		L_143 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_142, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
	}

IL_033c:
	{
		V_1 = (bool)0;
		StringBuilder_t* L_144 = V_0;
		NullCheck(L_144);
		StringBuilder_t* L_145;
		L_145 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_144, _stringLiteral4AD31964DA1C986C47B43E530945FC1C1EB96412, NULL);
		StringBuilder_t* L_146 = V_0;
		double L_147;
		L_147 = VirtualCamera_get_FrameBufferDelay_m3BB072B6372C82D9BB197CE841C68500762FD32A_inline(__this, NULL);
		NullCheck(L_146);
		StringBuilder_t* L_148;
		L_148 = StringBuilder_Append_m078D9861582DCD6037F533DF9C2FFEF0A54269E0(L_146, L_147, NULL);
	}

IL_0357:
	{
		Isset_tF8AB37BBD4ECC1DA61116E747FE00104BA58D11A* L_149 = (&__this->_____isset_19);
		bool L_150 = L_149->___outputPtr_14;
		if (!L_150)
		{
			goto IL_038e;
		}
	}
	{
		bool L_151 = V_1;
		if (L_151)
		{
			goto IL_0373;
		}
	}
	{
		StringBuilder_t* L_152 = V_0;
		NullCheck(L_152);
		StringBuilder_t* L_153;
		L_153 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_152, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
	}

IL_0373:
	{
		V_1 = (bool)0;
		StringBuilder_t* L_154 = V_0;
		NullCheck(L_154);
		StringBuilder_t* L_155;
		L_155 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_154, _stringLiteralC155034939E9A9507275297B688E3967E4593563, NULL);
		StringBuilder_t* L_156 = V_0;
		int64_t L_157;
		L_157 = VirtualCamera_get_OutputPtr_mF4AA03E4E508A4199E5CB0D6DDA77B1523D892EF_inline(__this, NULL);
		NullCheck(L_156);
		StringBuilder_t* L_158;
		L_158 = StringBuilder_Append_m66A74F455BDFDC3C9ED2D8E1BA4C3A093637C3D8(L_156, L_157, NULL);
	}

IL_038e:
	{
		Isset_tF8AB37BBD4ECC1DA61116E747FE00104BA58D11A* L_159 = (&__this->_____isset_19);
		bool L_160 = L_159->___autoSnapshotEnabled_15;
		if (!L_160)
		{
			goto IL_03c5;
		}
	}
	{
		bool L_161 = V_1;
		if (L_161)
		{
			goto IL_03aa;
		}
	}
	{
		StringBuilder_t* L_162 = V_0;
		NullCheck(L_162);
		StringBuilder_t* L_163;
		L_163 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_162, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
	}

IL_03aa:
	{
		V_1 = (bool)0;
		StringBuilder_t* L_164 = V_0;
		NullCheck(L_164);
		StringBuilder_t* L_165;
		L_165 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_164, _stringLiteralDA489604D5C72C792FE7D06E11A27FE9966E80C8, NULL);
		StringBuilder_t* L_166 = V_0;
		bool L_167;
		L_167 = VirtualCamera_get_AutoSnapshotEnabled_m46565D880D1EEBB52393AE36E02C9782AF11367D_inline(__this, NULL);
		NullCheck(L_166);
		StringBuilder_t* L_168;
		L_168 = StringBuilder_Append_mCCCA4BBC406F80A72246B165C201C841877371FC(L_166, L_167, NULL);
	}

IL_03c5:
	{
		Isset_tF8AB37BBD4ECC1DA61116E747FE00104BA58D11A* L_169 = (&__this->_____isset_19);
		bool L_170 = L_169->___videoRecordingEnabled_16;
		if (!L_170)
		{
			goto IL_03fc;
		}
	}
	{
		bool L_171 = V_1;
		if (L_171)
		{
			goto IL_03e1;
		}
	}
	{
		StringBuilder_t* L_172 = V_0;
		NullCheck(L_172);
		StringBuilder_t* L_173;
		L_173 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_172, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
	}

IL_03e1:
	{
		V_1 = (bool)0;
		StringBuilder_t* L_174 = V_0;
		NullCheck(L_174);
		StringBuilder_t* L_175;
		L_175 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_174, _stringLiteral72F508ED0766F68D2EF203AC908FD3B550A6DD43, NULL);
		StringBuilder_t* L_176 = V_0;
		bool L_177;
		L_177 = VirtualCamera_get_VideoRecordingEnabled_m1F7882665E5AA652148CF822CC5D81E3A027A5EA_inline(__this, NULL);
		NullCheck(L_176);
		StringBuilder_t* L_178;
		L_178 = StringBuilder_Append_mCCCA4BBC406F80A72246B165C201C841877371FC(L_176, L_177, NULL);
	}

IL_03fc:
	{
		String_t* L_179;
		L_179 = VirtualCamera_get_VideoRecordingOutputPath_m33504419471023E4E94B1D9F2F9D2B515DE8165B_inline(__this, NULL);
		if (!L_179)
		{
			goto IL_043b;
		}
	}
	{
		Isset_tF8AB37BBD4ECC1DA61116E747FE00104BA58D11A* L_180 = (&__this->_____isset_19);
		bool L_181 = L_180->___videoRecordingOutputPath_17;
		if (!L_181)
		{
			goto IL_043b;
		}
	}
	{
		bool L_182 = V_1;
		if (L_182)
		{
			goto IL_0420;
		}
	}
	{
		StringBuilder_t* L_183 = V_0;
		NullCheck(L_183);
		StringBuilder_t* L_184;
		L_184 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_183, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
	}

IL_0420:
	{
		V_1 = (bool)0;
		StringBuilder_t* L_185 = V_0;
		NullCheck(L_185);
		StringBuilder_t* L_186;
		L_186 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_185, _stringLiteral4F6D22A94C59F979FE613A2F236AC26B7B7F18CC, NULL);
		StringBuilder_t* L_187 = V_0;
		String_t* L_188;
		L_188 = VirtualCamera_get_VideoRecordingOutputPath_m33504419471023E4E94B1D9F2F9D2B515DE8165B_inline(__this, NULL);
		NullCheck(L_187);
		StringBuilder_t* L_189;
		L_189 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_187, L_188, NULL);
	}

IL_043b:
	{
		Isset_tF8AB37BBD4ECC1DA61116E747FE00104BA58D11A* L_190 = (&__this->_____isset_19);
		bool L_191 = L_190->___videoStreamingEnabled_18;
		if (!L_191)
		{
			goto IL_0472;
		}
	}
	{
		bool L_192 = V_1;
		if (L_192)
		{
			goto IL_0457;
		}
	}
	{
		StringBuilder_t* L_193 = V_0;
		NullCheck(L_193);
		StringBuilder_t* L_194;
		L_194 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_193, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
	}

IL_0457:
	{
		V_1 = (bool)0;
		StringBuilder_t* L_195 = V_0;
		NullCheck(L_195);
		StringBuilder_t* L_196;
		L_196 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_195, _stringLiteral6EBF42AAE519DFCC3FB53CFECA4A1F82145A4694, NULL);
		StringBuilder_t* L_197 = V_0;
		bool L_198;
		L_198 = VirtualCamera_get_VideoStreamingEnabled_m7A267C386377825A87B7AFE9D7D5BA0C056B1EB6_inline(__this, NULL);
		NullCheck(L_197);
		StringBuilder_t* L_199;
		L_199 = StringBuilder_Append_mCCCA4BBC406F80A72246B165C201C841877371FC(L_197, L_198, NULL);
	}

IL_0472:
	{
		StringBuilder_t* L_200 = V_0;
		NullCheck(L_200);
		StringBuilder_t* L_201;
		L_201 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_200, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D, NULL);
		StringBuilder_t* L_202 = V_0;
		NullCheck(L_202);
		String_t* L_203;
		L_203 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_202);
		return L_203;
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
// Conversion methods for marshalling of: BlueprintReality.MixCast.Shared.VirtualCamera/Isset
IL2CPP_EXTERN_C void Isset_tF8AB37BBD4ECC1DA61116E747FE00104BA58D11A_marshal_pinvoke(const Isset_tF8AB37BBD4ECC1DA61116E747FE00104BA58D11A& unmarshaled, Isset_tF8AB37BBD4ECC1DA61116E747FE00104BA58D11A_marshaled_pinvoke& marshaled)
{
	marshaled.___identifier_0 = static_cast<int32_t>(unmarshaled.___identifier_0);
	marshaled.___fieldOfView_1 = static_cast<int32_t>(unmarshaled.___fieldOfView_1);
	marshaled.___currentPosition_2 = static_cast<int32_t>(unmarshaled.___currentPosition_2);
	marshaled.___currentRotation_3 = static_cast<int32_t>(unmarshaled.___currentRotation_3);
	marshaled.___renderResolutionWidth_4 = static_cast<int32_t>(unmarshaled.___renderResolutionWidth_4);
	marshaled.___renderResolutionHeight_5 = static_cast<int32_t>(unmarshaled.___renderResolutionHeight_5);
	marshaled.___renderFramerate_6 = static_cast<int32_t>(unmarshaled.___renderFramerate_6);
	marshaled.___usesForeground_7 = static_cast<int32_t>(unmarshaled.___usesForeground_7);
	marshaled.___usesFullRender_8 = static_cast<int32_t>(unmarshaled.___usesFullRender_8);
	marshaled.___isFirstPerson_9 = static_cast<int32_t>(unmarshaled.___isFirstPerson_9);
	marshaled.___isBackgroundTranslucent_10 = static_cast<int32_t>(unmarshaled.___isBackgroundTranslucent_10);
	marshaled.___videoInputIds_11 = static_cast<int32_t>(unmarshaled.___videoInputIds_11);
	marshaled.___externalComposite_12 = static_cast<int32_t>(unmarshaled.___externalComposite_12);
	marshaled.___frameBufferDelay_13 = static_cast<int32_t>(unmarshaled.___frameBufferDelay_13);
	marshaled.___outputPtr_14 = static_cast<int32_t>(unmarshaled.___outputPtr_14);
	marshaled.___autoSnapshotEnabled_15 = static_cast<int32_t>(unmarshaled.___autoSnapshotEnabled_15);
	marshaled.___videoRecordingEnabled_16 = static_cast<int32_t>(unmarshaled.___videoRecordingEnabled_16);
	marshaled.___videoRecordingOutputPath_17 = static_cast<int32_t>(unmarshaled.___videoRecordingOutputPath_17);
	marshaled.___videoStreamingEnabled_18 = static_cast<int32_t>(unmarshaled.___videoStreamingEnabled_18);
}
IL2CPP_EXTERN_C void Isset_tF8AB37BBD4ECC1DA61116E747FE00104BA58D11A_marshal_pinvoke_back(const Isset_tF8AB37BBD4ECC1DA61116E747FE00104BA58D11A_marshaled_pinvoke& marshaled, Isset_tF8AB37BBD4ECC1DA61116E747FE00104BA58D11A& unmarshaled)
{
	bool unmarshaledidentifier_temp_0 = false;
	unmarshaledidentifier_temp_0 = static_cast<bool>(marshaled.___identifier_0);
	unmarshaled.___identifier_0 = unmarshaledidentifier_temp_0;
	bool unmarshaledfieldOfView_temp_1 = false;
	unmarshaledfieldOfView_temp_1 = static_cast<bool>(marshaled.___fieldOfView_1);
	unmarshaled.___fieldOfView_1 = unmarshaledfieldOfView_temp_1;
	bool unmarshaledcurrentPosition_temp_2 = false;
	unmarshaledcurrentPosition_temp_2 = static_cast<bool>(marshaled.___currentPosition_2);
	unmarshaled.___currentPosition_2 = unmarshaledcurrentPosition_temp_2;
	bool unmarshaledcurrentRotation_temp_3 = false;
	unmarshaledcurrentRotation_temp_3 = static_cast<bool>(marshaled.___currentRotation_3);
	unmarshaled.___currentRotation_3 = unmarshaledcurrentRotation_temp_3;
	bool unmarshaledrenderResolutionWidth_temp_4 = false;
	unmarshaledrenderResolutionWidth_temp_4 = static_cast<bool>(marshaled.___renderResolutionWidth_4);
	unmarshaled.___renderResolutionWidth_4 = unmarshaledrenderResolutionWidth_temp_4;
	bool unmarshaledrenderResolutionHeight_temp_5 = false;
	unmarshaledrenderResolutionHeight_temp_5 = static_cast<bool>(marshaled.___renderResolutionHeight_5);
	unmarshaled.___renderResolutionHeight_5 = unmarshaledrenderResolutionHeight_temp_5;
	bool unmarshaledrenderFramerate_temp_6 = false;
	unmarshaledrenderFramerate_temp_6 = static_cast<bool>(marshaled.___renderFramerate_6);
	unmarshaled.___renderFramerate_6 = unmarshaledrenderFramerate_temp_6;
	bool unmarshaledusesForeground_temp_7 = false;
	unmarshaledusesForeground_temp_7 = static_cast<bool>(marshaled.___usesForeground_7);
	unmarshaled.___usesForeground_7 = unmarshaledusesForeground_temp_7;
	bool unmarshaledusesFullRender_temp_8 = false;
	unmarshaledusesFullRender_temp_8 = static_cast<bool>(marshaled.___usesFullRender_8);
	unmarshaled.___usesFullRender_8 = unmarshaledusesFullRender_temp_8;
	bool unmarshaledisFirstPerson_temp_9 = false;
	unmarshaledisFirstPerson_temp_9 = static_cast<bool>(marshaled.___isFirstPerson_9);
	unmarshaled.___isFirstPerson_9 = unmarshaledisFirstPerson_temp_9;
	bool unmarshaledisBackgroundTranslucent_temp_10 = false;
	unmarshaledisBackgroundTranslucent_temp_10 = static_cast<bool>(marshaled.___isBackgroundTranslucent_10);
	unmarshaled.___isBackgroundTranslucent_10 = unmarshaledisBackgroundTranslucent_temp_10;
	bool unmarshaledvideoInputIds_temp_11 = false;
	unmarshaledvideoInputIds_temp_11 = static_cast<bool>(marshaled.___videoInputIds_11);
	unmarshaled.___videoInputIds_11 = unmarshaledvideoInputIds_temp_11;
	bool unmarshaledexternalComposite_temp_12 = false;
	unmarshaledexternalComposite_temp_12 = static_cast<bool>(marshaled.___externalComposite_12);
	unmarshaled.___externalComposite_12 = unmarshaledexternalComposite_temp_12;
	bool unmarshaledframeBufferDelay_temp_13 = false;
	unmarshaledframeBufferDelay_temp_13 = static_cast<bool>(marshaled.___frameBufferDelay_13);
	unmarshaled.___frameBufferDelay_13 = unmarshaledframeBufferDelay_temp_13;
	bool unmarshaledoutputPtr_temp_14 = false;
	unmarshaledoutputPtr_temp_14 = static_cast<bool>(marshaled.___outputPtr_14);
	unmarshaled.___outputPtr_14 = unmarshaledoutputPtr_temp_14;
	bool unmarshaledautoSnapshotEnabled_temp_15 = false;
	unmarshaledautoSnapshotEnabled_temp_15 = static_cast<bool>(marshaled.___autoSnapshotEnabled_15);
	unmarshaled.___autoSnapshotEnabled_15 = unmarshaledautoSnapshotEnabled_temp_15;
	bool unmarshaledvideoRecordingEnabled_temp_16 = false;
	unmarshaledvideoRecordingEnabled_temp_16 = static_cast<bool>(marshaled.___videoRecordingEnabled_16);
	unmarshaled.___videoRecordingEnabled_16 = unmarshaledvideoRecordingEnabled_temp_16;
	bool unmarshaledvideoRecordingOutputPath_temp_17 = false;
	unmarshaledvideoRecordingOutputPath_temp_17 = static_cast<bool>(marshaled.___videoRecordingOutputPath_17);
	unmarshaled.___videoRecordingOutputPath_17 = unmarshaledvideoRecordingOutputPath_temp_17;
	bool unmarshaledvideoStreamingEnabled_temp_18 = false;
	unmarshaledvideoStreamingEnabled_temp_18 = static_cast<bool>(marshaled.___videoStreamingEnabled_18);
	unmarshaled.___videoStreamingEnabled_18 = unmarshaledvideoStreamingEnabled_temp_18;
}
// Conversion method for clean up from marshalling of: BlueprintReality.MixCast.Shared.VirtualCamera/Isset
IL2CPP_EXTERN_C void Isset_tF8AB37BBD4ECC1DA61116E747FE00104BA58D11A_marshal_pinvoke_cleanup(Isset_tF8AB37BBD4ECC1DA61116E747FE00104BA58D11A_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: BlueprintReality.MixCast.Shared.VirtualCamera/Isset
IL2CPP_EXTERN_C void Isset_tF8AB37BBD4ECC1DA61116E747FE00104BA58D11A_marshal_com(const Isset_tF8AB37BBD4ECC1DA61116E747FE00104BA58D11A& unmarshaled, Isset_tF8AB37BBD4ECC1DA61116E747FE00104BA58D11A_marshaled_com& marshaled)
{
	marshaled.___identifier_0 = static_cast<int32_t>(unmarshaled.___identifier_0);
	marshaled.___fieldOfView_1 = static_cast<int32_t>(unmarshaled.___fieldOfView_1);
	marshaled.___currentPosition_2 = static_cast<int32_t>(unmarshaled.___currentPosition_2);
	marshaled.___currentRotation_3 = static_cast<int32_t>(unmarshaled.___currentRotation_3);
	marshaled.___renderResolutionWidth_4 = static_cast<int32_t>(unmarshaled.___renderResolutionWidth_4);
	marshaled.___renderResolutionHeight_5 = static_cast<int32_t>(unmarshaled.___renderResolutionHeight_5);
	marshaled.___renderFramerate_6 = static_cast<int32_t>(unmarshaled.___renderFramerate_6);
	marshaled.___usesForeground_7 = static_cast<int32_t>(unmarshaled.___usesForeground_7);
	marshaled.___usesFullRender_8 = static_cast<int32_t>(unmarshaled.___usesFullRender_8);
	marshaled.___isFirstPerson_9 = static_cast<int32_t>(unmarshaled.___isFirstPerson_9);
	marshaled.___isBackgroundTranslucent_10 = static_cast<int32_t>(unmarshaled.___isBackgroundTranslucent_10);
	marshaled.___videoInputIds_11 = static_cast<int32_t>(unmarshaled.___videoInputIds_11);
	marshaled.___externalComposite_12 = static_cast<int32_t>(unmarshaled.___externalComposite_12);
	marshaled.___frameBufferDelay_13 = static_cast<int32_t>(unmarshaled.___frameBufferDelay_13);
	marshaled.___outputPtr_14 = static_cast<int32_t>(unmarshaled.___outputPtr_14);
	marshaled.___autoSnapshotEnabled_15 = static_cast<int32_t>(unmarshaled.___autoSnapshotEnabled_15);
	marshaled.___videoRecordingEnabled_16 = static_cast<int32_t>(unmarshaled.___videoRecordingEnabled_16);
	marshaled.___videoRecordingOutputPath_17 = static_cast<int32_t>(unmarshaled.___videoRecordingOutputPath_17);
	marshaled.___videoStreamingEnabled_18 = static_cast<int32_t>(unmarshaled.___videoStreamingEnabled_18);
}
IL2CPP_EXTERN_C void Isset_tF8AB37BBD4ECC1DA61116E747FE00104BA58D11A_marshal_com_back(const Isset_tF8AB37BBD4ECC1DA61116E747FE00104BA58D11A_marshaled_com& marshaled, Isset_tF8AB37BBD4ECC1DA61116E747FE00104BA58D11A& unmarshaled)
{
	bool unmarshaledidentifier_temp_0 = false;
	unmarshaledidentifier_temp_0 = static_cast<bool>(marshaled.___identifier_0);
	unmarshaled.___identifier_0 = unmarshaledidentifier_temp_0;
	bool unmarshaledfieldOfView_temp_1 = false;
	unmarshaledfieldOfView_temp_1 = static_cast<bool>(marshaled.___fieldOfView_1);
	unmarshaled.___fieldOfView_1 = unmarshaledfieldOfView_temp_1;
	bool unmarshaledcurrentPosition_temp_2 = false;
	unmarshaledcurrentPosition_temp_2 = static_cast<bool>(marshaled.___currentPosition_2);
	unmarshaled.___currentPosition_2 = unmarshaledcurrentPosition_temp_2;
	bool unmarshaledcurrentRotation_temp_3 = false;
	unmarshaledcurrentRotation_temp_3 = static_cast<bool>(marshaled.___currentRotation_3);
	unmarshaled.___currentRotation_3 = unmarshaledcurrentRotation_temp_3;
	bool unmarshaledrenderResolutionWidth_temp_4 = false;
	unmarshaledrenderResolutionWidth_temp_4 = static_cast<bool>(marshaled.___renderResolutionWidth_4);
	unmarshaled.___renderResolutionWidth_4 = unmarshaledrenderResolutionWidth_temp_4;
	bool unmarshaledrenderResolutionHeight_temp_5 = false;
	unmarshaledrenderResolutionHeight_temp_5 = static_cast<bool>(marshaled.___renderResolutionHeight_5);
	unmarshaled.___renderResolutionHeight_5 = unmarshaledrenderResolutionHeight_temp_5;
	bool unmarshaledrenderFramerate_temp_6 = false;
	unmarshaledrenderFramerate_temp_6 = static_cast<bool>(marshaled.___renderFramerate_6);
	unmarshaled.___renderFramerate_6 = unmarshaledrenderFramerate_temp_6;
	bool unmarshaledusesForeground_temp_7 = false;
	unmarshaledusesForeground_temp_7 = static_cast<bool>(marshaled.___usesForeground_7);
	unmarshaled.___usesForeground_7 = unmarshaledusesForeground_temp_7;
	bool unmarshaledusesFullRender_temp_8 = false;
	unmarshaledusesFullRender_temp_8 = static_cast<bool>(marshaled.___usesFullRender_8);
	unmarshaled.___usesFullRender_8 = unmarshaledusesFullRender_temp_8;
	bool unmarshaledisFirstPerson_temp_9 = false;
	unmarshaledisFirstPerson_temp_9 = static_cast<bool>(marshaled.___isFirstPerson_9);
	unmarshaled.___isFirstPerson_9 = unmarshaledisFirstPerson_temp_9;
	bool unmarshaledisBackgroundTranslucent_temp_10 = false;
	unmarshaledisBackgroundTranslucent_temp_10 = static_cast<bool>(marshaled.___isBackgroundTranslucent_10);
	unmarshaled.___isBackgroundTranslucent_10 = unmarshaledisBackgroundTranslucent_temp_10;
	bool unmarshaledvideoInputIds_temp_11 = false;
	unmarshaledvideoInputIds_temp_11 = static_cast<bool>(marshaled.___videoInputIds_11);
	unmarshaled.___videoInputIds_11 = unmarshaledvideoInputIds_temp_11;
	bool unmarshaledexternalComposite_temp_12 = false;
	unmarshaledexternalComposite_temp_12 = static_cast<bool>(marshaled.___externalComposite_12);
	unmarshaled.___externalComposite_12 = unmarshaledexternalComposite_temp_12;
	bool unmarshaledframeBufferDelay_temp_13 = false;
	unmarshaledframeBufferDelay_temp_13 = static_cast<bool>(marshaled.___frameBufferDelay_13);
	unmarshaled.___frameBufferDelay_13 = unmarshaledframeBufferDelay_temp_13;
	bool unmarshaledoutputPtr_temp_14 = false;
	unmarshaledoutputPtr_temp_14 = static_cast<bool>(marshaled.___outputPtr_14);
	unmarshaled.___outputPtr_14 = unmarshaledoutputPtr_temp_14;
	bool unmarshaledautoSnapshotEnabled_temp_15 = false;
	unmarshaledautoSnapshotEnabled_temp_15 = static_cast<bool>(marshaled.___autoSnapshotEnabled_15);
	unmarshaled.___autoSnapshotEnabled_15 = unmarshaledautoSnapshotEnabled_temp_15;
	bool unmarshaledvideoRecordingEnabled_temp_16 = false;
	unmarshaledvideoRecordingEnabled_temp_16 = static_cast<bool>(marshaled.___videoRecordingEnabled_16);
	unmarshaled.___videoRecordingEnabled_16 = unmarshaledvideoRecordingEnabled_temp_16;
	bool unmarshaledvideoRecordingOutputPath_temp_17 = false;
	unmarshaledvideoRecordingOutputPath_temp_17 = static_cast<bool>(marshaled.___videoRecordingOutputPath_17);
	unmarshaled.___videoRecordingOutputPath_17 = unmarshaledvideoRecordingOutputPath_temp_17;
	bool unmarshaledvideoStreamingEnabled_temp_18 = false;
	unmarshaledvideoStreamingEnabled_temp_18 = static_cast<bool>(marshaled.___videoStreamingEnabled_18);
	unmarshaled.___videoStreamingEnabled_18 = unmarshaledvideoStreamingEnabled_temp_18;
}
// Conversion method for clean up from marshalling of: BlueprintReality.MixCast.Shared.VirtualCamera/Isset
IL2CPP_EXTERN_C void Isset_tF8AB37BBD4ECC1DA61116E747FE00104BA58D11A_marshal_com_cleanup(Isset_tF8AB37BBD4ECC1DA61116E747FE00104BA58D11A_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Quaternion BlueprintReality.Thrift.Quaternion::get_unity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_unity_m4B1F4E3CDD37CBF1853039272839B891A0CFDA4F (Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14* __this, const RuntimeMethod* method) 
{
	{
		double L_0;
		L_0 = Quaternion_get_X_m5A99DD904B544C4E0D9AF000731C77559AAF6383_inline(__this, NULL);
		double L_1;
		L_1 = Quaternion_get_Y_m363D5BDE062AEFEB0E00440BF483CBD30AB95F27_inline(__this, NULL);
		double L_2;
		L_2 = Quaternion_get_Z_m543A58C65C320661862EB2E9EC8C118C5B3CF56C_inline(__this, NULL);
		double L_3;
		L_3 = Quaternion_get_W_mDD0C1C4E7D8C3EAC68A9D0156FC5E9D291087E14_inline(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_4), ((float)L_0), ((float)L_1), ((float)L_2), ((float)L_3), /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void BlueprintReality.Thrift.Quaternion::set_unity(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quaternion_set_unity_m7CCE47004282B89A08B771247BE617C7AD4404BA (Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) 
{
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___value0;
		float L_1 = L_0.___w_3;
		Quaternion_set_W_m30434119F1741B3E37FE03B02042182A0983E900_inline(__this, ((double)L_1), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___value0;
		float L_3 = L_2.___x_0;
		Quaternion_set_X_mE518C39BABBCF679D6DACC46E253E480D2297586_inline(__this, ((double)L_3), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___value0;
		float L_5 = L_4.___y_1;
		Quaternion_set_Y_m2B93BF711695CE1FC750D08E0575477175C92625_inline(__this, ((double)L_5), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___value0;
		float L_7 = L_6.___z_2;
		Quaternion_set_Z_m6C4B20166E3FAA51DE08FC786B2AE6239FF3661D_inline(__this, ((double)L_7), NULL);
		return;
	}
}
// System.Void BlueprintReality.Thrift.Quaternion::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quaternion_Reset_mB933C707BA11101BA5B1A336C1D99767B5950FAC (Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14* __this, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	double V_1 = 0.0;
	{
		double L_0 = (0.0);
		V_1 = L_0;
		Quaternion_set_Z_m6C4B20166E3FAA51DE08FC786B2AE6239FF3661D_inline(__this, L_0, NULL);
		double L_1 = V_1;
		double L_2 = L_1;
		V_0 = L_2;
		Quaternion_set_Y_m2B93BF711695CE1FC750D08E0575477175C92625_inline(__this, L_2, NULL);
		double L_3 = V_0;
		Quaternion_set_X_mE518C39BABBCF679D6DACC46E253E480D2297586_inline(__this, L_3, NULL);
		Quaternion_set_W_m30434119F1741B3E37FE03B02042182A0983E900_inline(__this, (1.0), NULL);
		return;
	}
}
// System.Boolean BlueprintReality.Thrift.Quaternion::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Quaternion_Equals_mB43CE70015534A62745506AE42761D0CBF101E74 (Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___obj0;
		V_0 = ((Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14*)IsInstClass((RuntimeObject*)L_0, Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14_il2cpp_TypeInfo_var));
		Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14* L_1 = V_0;
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		return (bool)0;
	}

IL_000c:
	{
		Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14* L_2 = V_0;
		if ((!(((RuntimeObject*)(Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14*)__this) == ((RuntimeObject*)(Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14*)L_2))))
		{
			goto IL_0012;
		}
	}
	{
		return (bool)1;
	}

IL_0012:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Quaternion_get_unity_m4B1F4E3CDD37CBF1853039272839B891A0CFDA4F(__this, NULL);
		Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14* L_4 = V_0;
		NullCheck(L_4);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_get_unity_m4B1F4E3CDD37CBF1853039272839B891A0CFDA4F(L_4, NULL);
		bool L_6;
		L_6 = Quaternion_op_Equality_m3DF1D708D3A0AFB11EACF42A9C068EF6DC508FBB_inline(L_3, L_5, NULL);
		return L_6;
	}
}
// System.Int32 BlueprintReality.Thrift.Quaternion::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Quaternion_GetHashCode_m537610875AFCCC5ADDDEB2F09F567BEA1807F3AD (Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14* __this, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0;
		L_0 = Quaternion_get_unity_m4B1F4E3CDD37CBF1853039272839B891A0CFDA4F(__this, NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Quaternion_GetHashCode_m5F55C34C98E437376595E722BE4EB8A70434F049_inline((&V_0), NULL);
		return L_1;
	}
}
// System.Double BlueprintReality.Thrift.Quaternion::get_W()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Quaternion_get_W_mDD0C1C4E7D8C3EAC68A9D0156FC5E9D291087E14 (Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___U3CWU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void BlueprintReality.Thrift.Quaternion::set_W(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quaternion_set_W_m30434119F1741B3E37FE03B02042182A0983E900 (Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14* __this, double ___value0, const RuntimeMethod* method) 
{
	{
		double L_0 = ___value0;
		__this->___U3CWU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Double BlueprintReality.Thrift.Quaternion::get_X()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Quaternion_get_X_m5A99DD904B544C4E0D9AF000731C77559AAF6383 (Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___U3CXU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void BlueprintReality.Thrift.Quaternion::set_X(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quaternion_set_X_mE518C39BABBCF679D6DACC46E253E480D2297586 (Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14* __this, double ___value0, const RuntimeMethod* method) 
{
	{
		double L_0 = ___value0;
		__this->___U3CXU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Double BlueprintReality.Thrift.Quaternion::get_Y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Quaternion_get_Y_m363D5BDE062AEFEB0E00440BF483CBD30AB95F27 (Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___U3CYU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void BlueprintReality.Thrift.Quaternion::set_Y(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quaternion_set_Y_m2B93BF711695CE1FC750D08E0575477175C92625 (Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14* __this, double ___value0, const RuntimeMethod* method) 
{
	{
		double L_0 = ___value0;
		__this->___U3CYU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Double BlueprintReality.Thrift.Quaternion::get_Z()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Quaternion_get_Z_m543A58C65C320661862EB2E9EC8C118C5B3CF56C (Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___U3CZU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void BlueprintReality.Thrift.Quaternion::set_Z(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quaternion_set_Z_m6C4B20166E3FAA51DE08FC786B2AE6239FF3661D (Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14* __this, double ___value0, const RuntimeMethod* method) 
{
	{
		double L_0 = ___value0;
		__this->___U3CZU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Void BlueprintReality.Thrift.Quaternion::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quaternion__ctor_mF918C4EAF6C09059CCFE7B52C82E199E11C185DA (Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void BlueprintReality.Thrift.Quaternion::.ctor(System.Double,System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quaternion__ctor_m9078DF48FEE77F93AC52E6416DBB88D897D9B0E1 (Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14* __this, double ___w0, double ___x1, double ___y2, double ___z3, const RuntimeMethod* method) 
{
	{
		Quaternion__ctor_mF918C4EAF6C09059CCFE7B52C82E199E11C185DA(__this, NULL);
		double L_0 = ___w0;
		Quaternion_set_W_m30434119F1741B3E37FE03B02042182A0983E900_inline(__this, L_0, NULL);
		double L_1 = ___x1;
		Quaternion_set_X_mE518C39BABBCF679D6DACC46E253E480D2297586_inline(__this, L_1, NULL);
		double L_2 = ___y2;
		Quaternion_set_Y_m2B93BF711695CE1FC750D08E0575477175C92625_inline(__this, L_2, NULL);
		double L_3 = ___z3;
		Quaternion_set_Z_m6C4B20166E3FAA51DE08FC786B2AE6239FF3661D_inline(__this, L_3, NULL);
		return;
	}
}
// System.Void BlueprintReality.Thrift.Quaternion::Read(Thrift.Protocol.TProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quaternion_Read_m0DE7EE832B4D8BFFC1A79C7FF48C15B324224B8D (Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14* __this, TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* ___iprot0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	TField_tF4D9D8EFE767C142914693E0E787547F0213D334 V_4;
	memset((&V_4), 0, sizeof(V_4));
	int16_t V_5 = 0;
	{
		TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_0 = ___iprot0;
		NullCheck(L_0);
		TProtocol_IncrementRecursionDepth_m92B440A7308F6D7012C73B74A6406855A29FF58B(L_0, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0156:
			{// begin finally (depth: 1)
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_1 = ___iprot0;
				NullCheck(L_1);
				TProtocol_DecrementRecursionDepth_m049900374B8368A8AEB03E6FC93DF288EA1BE44B(L_1, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				V_0 = (bool)0;
				V_1 = (bool)0;
				V_2 = (bool)0;
				V_3 = (bool)0;
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_2 = ___iprot0;
				NullCheck(L_2);
				TStruct_tAD67F1F0C45235334F9440B6A587DB03A0CE5C96 L_3;
				L_3 = VirtualFuncInvoker0< TStruct_tAD67F1F0C45235334F9440B6A587DB03A0CE5C96 >::Invoke(29 /* Thrift.Protocol.TStruct Thrift.Protocol.TProtocol::ReadStructBegin() */, L_2);
			}

IL_0015_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_4 = ___iprot0;
				NullCheck(L_4);
				TField_tF4D9D8EFE767C142914693E0E787547F0213D334 L_5;
				L_5 = VirtualFuncInvoker0< TField_tF4D9D8EFE767C142914693E0E787547F0213D334 >::Invoke(31 /* Thrift.Protocol.TField Thrift.Protocol.TProtocol::ReadFieldBegin() */, L_4);
				V_4 = L_5;
				uint8_t L_6;
				L_6 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_4), NULL);
				if (!L_6)
				{
					goto IL_0112_1;
				}
			}
			{
				int16_t L_7;
				L_7 = TField_get_ID_m512A7F246CCD70AD2C473FA5AF09E6ECC8AB8B1A_inline((&V_4), NULL);
				V_5 = L_7;
				int16_t L_8 = V_5;
				switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_8, 1)))
				{
					case 0:
					{
						goto IL_0050_1;
					}
					case 1:
					{
						goto IL_007f_1;
					}
					case 2:
					{
						goto IL_00a8_1;
					}
					case 3:
					{
						goto IL_00d1_1;
					}
				}
			}
			{
				goto IL_00fa_1;
			}

IL_0050_1:
			{
				uint8_t L_9;
				L_9 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_4), NULL);
				if ((!(((uint32_t)L_9) == ((uint32_t)4))))
				{
					goto IL_006d_1;
				}
			}
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_10 = ___iprot0;
				NullCheck(L_10);
				double L_11;
				L_11 = VirtualFuncInvoker0< double >::Invoke(44 /* System.Double Thrift.Protocol.TProtocol::ReadDouble() */, L_10);
				Quaternion_set_W_m30434119F1741B3E37FE03B02042182A0983E900_inline(__this, L_11, NULL);
				V_0 = (bool)1;
				goto IL_0107_1;
			}

IL_006d_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_12 = ___iprot0;
				uint8_t L_13;
				L_13 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_4), NULL);
				TProtocolUtil_Skip_m61E2B7C700479ECC6AD4E86636C1235C30B5A38F(L_12, L_13, NULL);
				goto IL_0107_1;
			}

IL_007f_1:
			{
				uint8_t L_14;
				L_14 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_4), NULL);
				if ((!(((uint32_t)L_14) == ((uint32_t)4))))
				{
					goto IL_0099_1;
				}
			}
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_15 = ___iprot0;
				NullCheck(L_15);
				double L_16;
				L_16 = VirtualFuncInvoker0< double >::Invoke(44 /* System.Double Thrift.Protocol.TProtocol::ReadDouble() */, L_15);
				Quaternion_set_X_mE518C39BABBCF679D6DACC46E253E480D2297586_inline(__this, L_16, NULL);
				V_1 = (bool)1;
				goto IL_0107_1;
			}

IL_0099_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_17 = ___iprot0;
				uint8_t L_18;
				L_18 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_4), NULL);
				TProtocolUtil_Skip_m61E2B7C700479ECC6AD4E86636C1235C30B5A38F(L_17, L_18, NULL);
				goto IL_0107_1;
			}

IL_00a8_1:
			{
				uint8_t L_19;
				L_19 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_4), NULL);
				if ((!(((uint32_t)L_19) == ((uint32_t)4))))
				{
					goto IL_00c2_1;
				}
			}
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_20 = ___iprot0;
				NullCheck(L_20);
				double L_21;
				L_21 = VirtualFuncInvoker0< double >::Invoke(44 /* System.Double Thrift.Protocol.TProtocol::ReadDouble() */, L_20);
				Quaternion_set_Y_m2B93BF711695CE1FC750D08E0575477175C92625_inline(__this, L_21, NULL);
				V_2 = (bool)1;
				goto IL_0107_1;
			}

IL_00c2_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_22 = ___iprot0;
				uint8_t L_23;
				L_23 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_4), NULL);
				TProtocolUtil_Skip_m61E2B7C700479ECC6AD4E86636C1235C30B5A38F(L_22, L_23, NULL);
				goto IL_0107_1;
			}

IL_00d1_1:
			{
				uint8_t L_24;
				L_24 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_4), NULL);
				if ((!(((uint32_t)L_24) == ((uint32_t)4))))
				{
					goto IL_00eb_1;
				}
			}
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_25 = ___iprot0;
				NullCheck(L_25);
				double L_26;
				L_26 = VirtualFuncInvoker0< double >::Invoke(44 /* System.Double Thrift.Protocol.TProtocol::ReadDouble() */, L_25);
				Quaternion_set_Z_m6C4B20166E3FAA51DE08FC786B2AE6239FF3661D_inline(__this, L_26, NULL);
				V_3 = (bool)1;
				goto IL_0107_1;
			}

IL_00eb_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_27 = ___iprot0;
				uint8_t L_28;
				L_28 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_4), NULL);
				TProtocolUtil_Skip_m61E2B7C700479ECC6AD4E86636C1235C30B5A38F(L_27, L_28, NULL);
				goto IL_0107_1;
			}

IL_00fa_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_29 = ___iprot0;
				uint8_t L_30;
				L_30 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_4), NULL);
				TProtocolUtil_Skip_m61E2B7C700479ECC6AD4E86636C1235C30B5A38F(L_29, L_30, NULL);
			}

IL_0107_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_31 = ___iprot0;
				NullCheck(L_31);
				VirtualActionInvoker0::Invoke(32 /* System.Void Thrift.Protocol.TProtocol::ReadFieldEnd() */, L_31);
				goto IL_0015_1;
			}

IL_0112_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_32 = ___iprot0;
				NullCheck(L_32);
				VirtualActionInvoker0::Invoke(30 /* System.Void Thrift.Protocol.TProtocol::ReadStructEnd() */, L_32);
				bool L_33 = V_0;
				if (L_33)
				{
					goto IL_0127_1;
				}
			}
			{
				TProtocolException_t69B81CDFF3E6D584BC54665AB6BAD9593BC21996* L_34 = (TProtocolException_t69B81CDFF3E6D584BC54665AB6BAD9593BC21996*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TProtocolException_t69B81CDFF3E6D584BC54665AB6BAD9593BC21996_il2cpp_TypeInfo_var)));
				NullCheck(L_34);
				TProtocolException__ctor_m490B7FD7AC0D57E9B14D079A63C015546F109C7A(L_34, 1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA99EA716F80446C7FABE13AACD9B07B14D337E5B)), NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_34, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Quaternion_Read_m0DE7EE832B4D8BFFC1A79C7FF48C15B324224B8D_RuntimeMethod_var)));
			}

IL_0127_1:
			{
				bool L_35 = V_1;
				if (L_35)
				{
					goto IL_0136_1;
				}
			}
			{
				TProtocolException_t69B81CDFF3E6D584BC54665AB6BAD9593BC21996* L_36 = (TProtocolException_t69B81CDFF3E6D584BC54665AB6BAD9593BC21996*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TProtocolException_t69B81CDFF3E6D584BC54665AB6BAD9593BC21996_il2cpp_TypeInfo_var)));
				NullCheck(L_36);
				TProtocolException__ctor_m490B7FD7AC0D57E9B14D079A63C015546F109C7A(L_36, 1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1987F075CD3E6934DA6700CC1D5B0F940660DEF1)), NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_36, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Quaternion_Read_m0DE7EE832B4D8BFFC1A79C7FF48C15B324224B8D_RuntimeMethod_var)));
			}

IL_0136_1:
			{
				bool L_37 = V_2;
				if (L_37)
				{
					goto IL_0145_1;
				}
			}
			{
				TProtocolException_t69B81CDFF3E6D584BC54665AB6BAD9593BC21996* L_38 = (TProtocolException_t69B81CDFF3E6D584BC54665AB6BAD9593BC21996*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TProtocolException_t69B81CDFF3E6D584BC54665AB6BAD9593BC21996_il2cpp_TypeInfo_var)));
				NullCheck(L_38);
				TProtocolException__ctor_m490B7FD7AC0D57E9B14D079A63C015546F109C7A(L_38, 1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4AC6E7F474564EAD58FBD38EA8A310F698916743)), NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_38, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Quaternion_Read_m0DE7EE832B4D8BFFC1A79C7FF48C15B324224B8D_RuntimeMethod_var)));
			}

IL_0145_1:
			{
				bool L_39 = V_3;
				if (L_39)
				{
					goto IL_0154_1;
				}
			}
			{
				TProtocolException_t69B81CDFF3E6D584BC54665AB6BAD9593BC21996* L_40 = (TProtocolException_t69B81CDFF3E6D584BC54665AB6BAD9593BC21996*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TProtocolException_t69B81CDFF3E6D584BC54665AB6BAD9593BC21996_il2cpp_TypeInfo_var)));
				NullCheck(L_40);
				TProtocolException__ctor_m490B7FD7AC0D57E9B14D079A63C015546F109C7A(L_40, 1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral67139733340C74D680AC9CFF8DECFD594DAB4AAB)), NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_40, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Quaternion_Read_m0DE7EE832B4D8BFFC1A79C7FF48C15B324224B8D_RuntimeMethod_var)));
			}

IL_0154_1:
			{
				goto IL_015d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_015d:
	{
		return;
	}
}
// System.Void BlueprintReality.Thrift.Quaternion::Write(Thrift.Protocol.TProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quaternion_Write_m1B5494004EA15AE513F8B66F3B0DF7BFBED9346B (Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14* __this, TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* ___oprot0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27D9B7EF612AEB12509925B54604A1C6C9199F88);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA9FEAF5F50923952C1AC3A473DE3C7E17D23B907);
		s_Il2CppMethodInitialized = true;
	}
	TStruct_tAD67F1F0C45235334F9440B6A587DB03A0CE5C96 V_0;
	memset((&V_0), 0, sizeof(V_0));
	TField_tF4D9D8EFE767C142914693E0E787547F0213D334 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_0 = ___oprot0;
		NullCheck(L_0);
		TProtocol_IncrementRecursionDepth_m92B440A7308F6D7012C73B74A6406855A29FF58B(L_0, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0103:
			{// begin finally (depth: 1)
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_1 = ___oprot0;
				NullCheck(L_1);
				TProtocol_DecrementRecursionDepth_m049900374B8368A8AEB03E6FC93DF288EA1BE44B(L_1, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			TStruct__ctor_mD56EA112D651038138D3BC7203C3606718E5CB3F((&V_0), _stringLiteral27D9B7EF612AEB12509925B54604A1C6C9199F88, NULL);
			TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_2 = ___oprot0;
			TStruct_tAD67F1F0C45235334F9440B6A587DB03A0CE5C96 L_3 = V_0;
			NullCheck(L_2);
			VirtualActionInvoker1< TStruct_tAD67F1F0C45235334F9440B6A587DB03A0CE5C96 >::Invoke(8 /* System.Void Thrift.Protocol.TProtocol::WriteStructBegin(Thrift.Protocol.TStruct) */, L_2, L_3);
			il2cpp_codegen_initobj((&V_1), sizeof(TField_tF4D9D8EFE767C142914693E0E787547F0213D334));
			TField_set_Name_mAD35FC0847F990535FAF3E3032CD117B560AF751_inline((&V_1), _stringLiteralA9FEAF5F50923952C1AC3A473DE3C7E17D23B907, NULL);
			TField_set_Type_m2AA4AF23C96A26CB269B78B067489E10F055E983_inline((&V_1), 4, NULL);
			TField_set_ID_m68843CC49A2A49966729F299A58A2BBC6FCC4F01_inline((&V_1), (int16_t)1, NULL);
			TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_4 = ___oprot0;
			TField_tF4D9D8EFE767C142914693E0E787547F0213D334 L_5 = V_1;
			NullCheck(L_4);
			VirtualActionInvoker1< TField_tF4D9D8EFE767C142914693E0E787547F0213D334 >::Invoke(10 /* System.Void Thrift.Protocol.TProtocol::WriteFieldBegin(Thrift.Protocol.TField) */, L_4, L_5);
			TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_6 = ___oprot0;
			double L_7;
			L_7 = Quaternion_get_W_mDD0C1C4E7D8C3EAC68A9D0156FC5E9D291087E14_inline(__this, NULL);
			NullCheck(L_6);
			VirtualActionInvoker1< double >::Invoke(24 /* System.Void Thrift.Protocol.TProtocol::WriteDouble(System.Double) */, L_6, L_7);
			TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_8 = ___oprot0;
			NullCheck(L_8);
			VirtualActionInvoker0::Invoke(11 /* System.Void Thrift.Protocol.TProtocol::WriteFieldEnd() */, L_8);
			TField_set_Name_mAD35FC0847F990535FAF3E3032CD117B560AF751_inline((&V_1), _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
			TField_set_Type_m2AA4AF23C96A26CB269B78B067489E10F055E983_inline((&V_1), 4, NULL);
			TField_set_ID_m68843CC49A2A49966729F299A58A2BBC6FCC4F01_inline((&V_1), (int16_t)2, NULL);
			TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_9 = ___oprot0;
			TField_tF4D9D8EFE767C142914693E0E787547F0213D334 L_10 = V_1;
			NullCheck(L_9);
			VirtualActionInvoker1< TField_tF4D9D8EFE767C142914693E0E787547F0213D334 >::Invoke(10 /* System.Void Thrift.Protocol.TProtocol::WriteFieldBegin(Thrift.Protocol.TField) */, L_9, L_10);
			TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_11 = ___oprot0;
			double L_12;
			L_12 = Quaternion_get_X_m5A99DD904B544C4E0D9AF000731C77559AAF6383_inline(__this, NULL);
			NullCheck(L_11);
			VirtualActionInvoker1< double >::Invoke(24 /* System.Void Thrift.Protocol.TProtocol::WriteDouble(System.Double) */, L_11, L_12);
			TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_13 = ___oprot0;
			NullCheck(L_13);
			VirtualActionInvoker0::Invoke(11 /* System.Void Thrift.Protocol.TProtocol::WriteFieldEnd() */, L_13);
			TField_set_Name_mAD35FC0847F990535FAF3E3032CD117B560AF751_inline((&V_1), _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
			TField_set_Type_m2AA4AF23C96A26CB269B78B067489E10F055E983_inline((&V_1), 4, NULL);
			TField_set_ID_m68843CC49A2A49966729F299A58A2BBC6FCC4F01_inline((&V_1), (int16_t)3, NULL);
			TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_14 = ___oprot0;
			TField_tF4D9D8EFE767C142914693E0E787547F0213D334 L_15 = V_1;
			NullCheck(L_14);
			VirtualActionInvoker1< TField_tF4D9D8EFE767C142914693E0E787547F0213D334 >::Invoke(10 /* System.Void Thrift.Protocol.TProtocol::WriteFieldBegin(Thrift.Protocol.TField) */, L_14, L_15);
			TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_16 = ___oprot0;
			double L_17;
			L_17 = Quaternion_get_Y_m363D5BDE062AEFEB0E00440BF483CBD30AB95F27_inline(__this, NULL);
			NullCheck(L_16);
			VirtualActionInvoker1< double >::Invoke(24 /* System.Void Thrift.Protocol.TProtocol::WriteDouble(System.Double) */, L_16, L_17);
			TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_18 = ___oprot0;
			NullCheck(L_18);
			VirtualActionInvoker0::Invoke(11 /* System.Void Thrift.Protocol.TProtocol::WriteFieldEnd() */, L_18);
			TField_set_Name_mAD35FC0847F990535FAF3E3032CD117B560AF751_inline((&V_1), _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
			TField_set_Type_m2AA4AF23C96A26CB269B78B067489E10F055E983_inline((&V_1), 4, NULL);
			TField_set_ID_m68843CC49A2A49966729F299A58A2BBC6FCC4F01_inline((&V_1), (int16_t)4, NULL);
			TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_19 = ___oprot0;
			TField_tF4D9D8EFE767C142914693E0E787547F0213D334 L_20 = V_1;
			NullCheck(L_19);
			VirtualActionInvoker1< TField_tF4D9D8EFE767C142914693E0E787547F0213D334 >::Invoke(10 /* System.Void Thrift.Protocol.TProtocol::WriteFieldBegin(Thrift.Protocol.TField) */, L_19, L_20);
			TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_21 = ___oprot0;
			double L_22;
			L_22 = Quaternion_get_Z_m543A58C65C320661862EB2E9EC8C118C5B3CF56C_inline(__this, NULL);
			NullCheck(L_21);
			VirtualActionInvoker1< double >::Invoke(24 /* System.Void Thrift.Protocol.TProtocol::WriteDouble(System.Double) */, L_21, L_22);
			TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_23 = ___oprot0;
			NullCheck(L_23);
			VirtualActionInvoker0::Invoke(11 /* System.Void Thrift.Protocol.TProtocol::WriteFieldEnd() */, L_23);
			TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_24 = ___oprot0;
			NullCheck(L_24);
			VirtualActionInvoker0::Invoke(12 /* System.Void Thrift.Protocol.TProtocol::WriteFieldStop() */, L_24);
			TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_25 = ___oprot0;
			NullCheck(L_25);
			VirtualActionInvoker0::Invoke(9 /* System.Void Thrift.Protocol.TProtocol::WriteStructEnd() */, L_25);
			goto IL_010a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_010a:
	{
		return;
	}
}
// System.String BlueprintReality.Thrift.Quaternion::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Quaternion_ToString_m6A7D823E798D9933DFB753494646EFB298C3576F (Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21EE367ABB11BEF0B9CF540FDB7EDD91C1A579A9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4583F2834DE9792418D7F34F9D13B608DAC67FA6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral947D561F6DE2C973D88E82A9442712D47D5B01F6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE262104D6DB06A3BF1AF8F82D967A5A9C467F429);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFFA731436D49A77BFD124877B276F9C5530CF882);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_mCD797D942316CB356205FD96415B0B7581CDAD60(L_0, _stringLiteral4583F2834DE9792418D7F34F9D13B608DAC67FA6, NULL);
		StringBuilder_t* L_1 = L_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_1, _stringLiteralFFA731436D49A77BFD124877B276F9C5530CF882, NULL);
		StringBuilder_t* L_3 = L_1;
		double L_4;
		L_4 = Quaternion_get_W_mDD0C1C4E7D8C3EAC68A9D0156FC5E9D291087E14_inline(__this, NULL);
		NullCheck(L_3);
		StringBuilder_t* L_5;
		L_5 = StringBuilder_Append_m078D9861582DCD6037F533DF9C2FFEF0A54269E0(L_3, L_4, NULL);
		StringBuilder_t* L_6 = L_3;
		NullCheck(L_6);
		StringBuilder_t* L_7;
		L_7 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_6, _stringLiteral947D561F6DE2C973D88E82A9442712D47D5B01F6, NULL);
		StringBuilder_t* L_8 = L_6;
		double L_9;
		L_9 = Quaternion_get_X_m5A99DD904B544C4E0D9AF000731C77559AAF6383_inline(__this, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_10;
		L_10 = StringBuilder_Append_m078D9861582DCD6037F533DF9C2FFEF0A54269E0(L_8, L_9, NULL);
		StringBuilder_t* L_11 = L_8;
		NullCheck(L_11);
		StringBuilder_t* L_12;
		L_12 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_11, _stringLiteral21EE367ABB11BEF0B9CF540FDB7EDD91C1A579A9, NULL);
		StringBuilder_t* L_13 = L_11;
		double L_14;
		L_14 = Quaternion_get_Y_m363D5BDE062AEFEB0E00440BF483CBD30AB95F27_inline(__this, NULL);
		NullCheck(L_13);
		StringBuilder_t* L_15;
		L_15 = StringBuilder_Append_m078D9861582DCD6037F533DF9C2FFEF0A54269E0(L_13, L_14, NULL);
		StringBuilder_t* L_16 = L_13;
		NullCheck(L_16);
		StringBuilder_t* L_17;
		L_17 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_16, _stringLiteralE262104D6DB06A3BF1AF8F82D967A5A9C467F429, NULL);
		StringBuilder_t* L_18 = L_16;
		double L_19;
		L_19 = Quaternion_get_Z_m543A58C65C320661862EB2E9EC8C118C5B3CF56C_inline(__this, NULL);
		NullCheck(L_18);
		StringBuilder_t* L_20;
		L_20 = StringBuilder_Append_m078D9861582DCD6037F533DF9C2FFEF0A54269E0(L_18, L_19, NULL);
		StringBuilder_t* L_21 = L_18;
		NullCheck(L_21);
		StringBuilder_t* L_22;
		L_22 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_21, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D, NULL);
		NullCheck(L_21);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_21);
		return L_23;
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
// UnityEngine.Vector3 BlueprintReality.Thrift.Vector3::get_unity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_unity_m059420ED652D66481014C96DFA305761BB80158D (Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* __this, const RuntimeMethod* method) 
{
	{
		double L_0;
		L_0 = Vector3_get_X_mBDD4CEFB5FE45779A8206A8ED7CC94E985B1811B_inline(__this, NULL);
		double L_1;
		L_1 = Vector3_get_Y_m12664DD3843DD16A595E1C5BEF11BC8FC0AEC002_inline(__this, NULL);
		double L_2;
		L_2 = Vector3_get_Z_m742A1196945ACF63E1B3AD737C8ADBDBB6509820_inline(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), ((float)L_0), ((float)L_1), ((float)L_2), /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void BlueprintReality.Thrift.Vector3::set_unity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3_set_unity_m8F24F7145D5D16C6C5C7F36985DE9201AADFE87A (Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		float L_1 = L_0.___x_2;
		Vector3_set_X_mA4D24BFC6E74B2B9228917D0265F74A945A69DB8_inline(__this, ((double)L_1), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___value0;
		float L_3 = L_2.___y_3;
		Vector3_set_Y_m30BEE789637841CB70436D81B1818902E92BDC84_inline(__this, ((double)L_3), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___value0;
		float L_5 = L_4.___z_4;
		Vector3_set_Z_m3D14EF8D9066ACDCE55D1182B679760CF75F5758_inline(__this, ((double)L_5), NULL);
		return;
	}
}
// System.Void BlueprintReality.Thrift.Vector3::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3_Reset_mBAB1C5926F15D16E4D7CC45AABC87DE14565CE26 (Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* __this, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	double V_1 = 0.0;
	{
		double L_0 = (0.0);
		V_1 = L_0;
		Vector3_set_Z_m3D14EF8D9066ACDCE55D1182B679760CF75F5758_inline(__this, L_0, NULL);
		double L_1 = V_1;
		double L_2 = L_1;
		V_0 = L_2;
		Vector3_set_Y_m30BEE789637841CB70436D81B1818902E92BDC84_inline(__this, L_2, NULL);
		double L_3 = V_0;
		Vector3_set_X_mA4D24BFC6E74B2B9228917D0265F74A945A69DB8_inline(__this, L_3, NULL);
		return;
	}
}
// System.Boolean BlueprintReality.Thrift.Vector3::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3_Equals_mA4F756C9C1623E4D9E5DB7BD630CC5C384AB01BC (Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___obj0;
		V_0 = ((Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55*)IsInstClass((RuntimeObject*)L_0, Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55_il2cpp_TypeInfo_var));
		Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* L_1 = V_0;
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		return (bool)0;
	}

IL_000c:
	{
		Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* L_2 = V_0;
		if ((!(((RuntimeObject*)(Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55*)__this) == ((RuntimeObject*)(Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55*)L_2))))
		{
			goto IL_0012;
		}
	}
	{
		return (bool)1;
	}

IL_0012:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_unity_m059420ED652D66481014C96DFA305761BB80158D(__this, NULL);
		Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* L_4 = V_0;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_get_unity_m059420ED652D66481014C96DFA305761BB80158D(L_4, NULL);
		bool L_6;
		L_6 = Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline(L_3, L_5, NULL);
		return L_6;
	}
}
// System.Int32 BlueprintReality.Thrift.Vector3::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector3_GetHashCode_m8751D869D9EFB64242D7940E334FCAD2D9F8ADC7 (Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_unity_m059420ED652D66481014C96DFA305761BB80158D(__this, NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Vector3_GetHashCode_mB08429DC931A85BD29CE11B9ABC77DE7E0E46327_inline((&V_0), NULL);
		return L_1;
	}
}
// System.Double BlueprintReality.Thrift.Vector3::get_X()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Vector3_get_X_mBDD4CEFB5FE45779A8206A8ED7CC94E985B1811B (Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___U3CXU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void BlueprintReality.Thrift.Vector3::set_X(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3_set_X_mA4D24BFC6E74B2B9228917D0265F74A945A69DB8 (Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* __this, double ___value0, const RuntimeMethod* method) 
{
	{
		double L_0 = ___value0;
		__this->___U3CXU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Double BlueprintReality.Thrift.Vector3::get_Y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Vector3_get_Y_m12664DD3843DD16A595E1C5BEF11BC8FC0AEC002 (Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___U3CYU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void BlueprintReality.Thrift.Vector3::set_Y(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3_set_Y_m30BEE789637841CB70436D81B1818902E92BDC84 (Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* __this, double ___value0, const RuntimeMethod* method) 
{
	{
		double L_0 = ___value0;
		__this->___U3CYU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Double BlueprintReality.Thrift.Vector3::get_Z()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Vector3_get_Z_m742A1196945ACF63E1B3AD737C8ADBDBB6509820 (Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___U3CZU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void BlueprintReality.Thrift.Vector3::set_Z(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3_set_Z_m3D14EF8D9066ACDCE55D1182B679760CF75F5758 (Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* __this, double ___value0, const RuntimeMethod* method) 
{
	{
		double L_0 = ___value0;
		__this->___U3CZU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Void BlueprintReality.Thrift.Vector3::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3__ctor_mCAFEBD9384F7BA33874D50B8E48A7A3839C3BB20 (Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void BlueprintReality.Thrift.Vector3::.ctor(System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3__ctor_mBC16C20C5D0BE723B28574EE451049B00D6EF778 (Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* __this, double ___x0, double ___y1, double ___z2, const RuntimeMethod* method) 
{
	{
		Vector3__ctor_mCAFEBD9384F7BA33874D50B8E48A7A3839C3BB20(__this, NULL);
		double L_0 = ___x0;
		Vector3_set_X_mA4D24BFC6E74B2B9228917D0265F74A945A69DB8_inline(__this, L_0, NULL);
		double L_1 = ___y1;
		Vector3_set_Y_m30BEE789637841CB70436D81B1818902E92BDC84_inline(__this, L_1, NULL);
		double L_2 = ___z2;
		Vector3_set_Z_m3D14EF8D9066ACDCE55D1182B679760CF75F5758_inline(__this, L_2, NULL);
		return;
	}
}
// System.Void BlueprintReality.Thrift.Vector3::Read(Thrift.Protocol.TProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3_Read_m9D8873909C5EE03472C0E2D094626BF6CFB7E5E7 (Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* __this, TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* ___iprot0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	TField_tF4D9D8EFE767C142914693E0E787547F0213D334 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int16_t V_4 = 0;
	{
		TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_0 = ___iprot0;
		NullCheck(L_0);
		TProtocol_IncrementRecursionDepth_m92B440A7308F6D7012C73B74A6406855A29FF58B(L_0, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_010e:
			{// begin finally (depth: 1)
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_1 = ___iprot0;
				NullCheck(L_1);
				TProtocol_DecrementRecursionDepth_m049900374B8368A8AEB03E6FC93DF288EA1BE44B(L_1, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				V_0 = (bool)0;
				V_1 = (bool)0;
				V_2 = (bool)0;
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_2 = ___iprot0;
				NullCheck(L_2);
				TStruct_tAD67F1F0C45235334F9440B6A587DB03A0CE5C96 L_3;
				L_3 = VirtualFuncInvoker0< TStruct_tAD67F1F0C45235334F9440B6A587DB03A0CE5C96 >::Invoke(29 /* Thrift.Protocol.TStruct Thrift.Protocol.TProtocol::ReadStructBegin() */, L_2);
			}

IL_0013_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_4 = ___iprot0;
				NullCheck(L_4);
				TField_tF4D9D8EFE767C142914693E0E787547F0213D334 L_5;
				L_5 = VirtualFuncInvoker0< TField_tF4D9D8EFE767C142914693E0E787547F0213D334 >::Invoke(31 /* Thrift.Protocol.TField Thrift.Protocol.TProtocol::ReadFieldBegin() */, L_4);
				V_3 = L_5;
				uint8_t L_6;
				L_6 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_3), NULL);
				if (!L_6)
				{
					goto IL_00d9_1;
				}
			}
			{
				int16_t L_7;
				L_7 = TField_get_ID_m512A7F246CCD70AD2C473FA5AF09E6ECC8AB8B1A_inline((&V_3), NULL);
				V_4 = L_7;
				int16_t L_8 = V_4;
				switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_8, 1)))
				{
					case 0:
					{
						goto IL_0046_1;
					}
					case 1:
					{
						goto IL_006f_1;
					}
					case 2:
					{
						goto IL_0098_1;
					}
				}
			}
			{
				goto IL_00c1_1;
			}

IL_0046_1:
			{
				uint8_t L_9;
				L_9 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_3), NULL);
				if ((!(((uint32_t)L_9) == ((uint32_t)4))))
				{
					goto IL_0060_1;
				}
			}
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_10 = ___iprot0;
				NullCheck(L_10);
				double L_11;
				L_11 = VirtualFuncInvoker0< double >::Invoke(44 /* System.Double Thrift.Protocol.TProtocol::ReadDouble() */, L_10);
				Vector3_set_X_mA4D24BFC6E74B2B9228917D0265F74A945A69DB8_inline(__this, L_11, NULL);
				V_0 = (bool)1;
				goto IL_00ce_1;
			}

IL_0060_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_12 = ___iprot0;
				uint8_t L_13;
				L_13 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_3), NULL);
				TProtocolUtil_Skip_m61E2B7C700479ECC6AD4E86636C1235C30B5A38F(L_12, L_13, NULL);
				goto IL_00ce_1;
			}

IL_006f_1:
			{
				uint8_t L_14;
				L_14 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_3), NULL);
				if ((!(((uint32_t)L_14) == ((uint32_t)4))))
				{
					goto IL_0089_1;
				}
			}
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_15 = ___iprot0;
				NullCheck(L_15);
				double L_16;
				L_16 = VirtualFuncInvoker0< double >::Invoke(44 /* System.Double Thrift.Protocol.TProtocol::ReadDouble() */, L_15);
				Vector3_set_Y_m30BEE789637841CB70436D81B1818902E92BDC84_inline(__this, L_16, NULL);
				V_1 = (bool)1;
				goto IL_00ce_1;
			}

IL_0089_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_17 = ___iprot0;
				uint8_t L_18;
				L_18 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_3), NULL);
				TProtocolUtil_Skip_m61E2B7C700479ECC6AD4E86636C1235C30B5A38F(L_17, L_18, NULL);
				goto IL_00ce_1;
			}

IL_0098_1:
			{
				uint8_t L_19;
				L_19 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_3), NULL);
				if ((!(((uint32_t)L_19) == ((uint32_t)4))))
				{
					goto IL_00b2_1;
				}
			}
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_20 = ___iprot0;
				NullCheck(L_20);
				double L_21;
				L_21 = VirtualFuncInvoker0< double >::Invoke(44 /* System.Double Thrift.Protocol.TProtocol::ReadDouble() */, L_20);
				Vector3_set_Z_m3D14EF8D9066ACDCE55D1182B679760CF75F5758_inline(__this, L_21, NULL);
				V_2 = (bool)1;
				goto IL_00ce_1;
			}

IL_00b2_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_22 = ___iprot0;
				uint8_t L_23;
				L_23 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_3), NULL);
				TProtocolUtil_Skip_m61E2B7C700479ECC6AD4E86636C1235C30B5A38F(L_22, L_23, NULL);
				goto IL_00ce_1;
			}

IL_00c1_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_24 = ___iprot0;
				uint8_t L_25;
				L_25 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_3), NULL);
				TProtocolUtil_Skip_m61E2B7C700479ECC6AD4E86636C1235C30B5A38F(L_24, L_25, NULL);
			}

IL_00ce_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_26 = ___iprot0;
				NullCheck(L_26);
				VirtualActionInvoker0::Invoke(32 /* System.Void Thrift.Protocol.TProtocol::ReadFieldEnd() */, L_26);
				goto IL_0013_1;
			}

IL_00d9_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_27 = ___iprot0;
				NullCheck(L_27);
				VirtualActionInvoker0::Invoke(30 /* System.Void Thrift.Protocol.TProtocol::ReadStructEnd() */, L_27);
				bool L_28 = V_0;
				if (L_28)
				{
					goto IL_00ee_1;
				}
			}
			{
				TProtocolException_t69B81CDFF3E6D584BC54665AB6BAD9593BC21996* L_29 = (TProtocolException_t69B81CDFF3E6D584BC54665AB6BAD9593BC21996*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TProtocolException_t69B81CDFF3E6D584BC54665AB6BAD9593BC21996_il2cpp_TypeInfo_var)));
				NullCheck(L_29);
				TProtocolException__ctor_m490B7FD7AC0D57E9B14D079A63C015546F109C7A(L_29, 1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1987F075CD3E6934DA6700CC1D5B0F940660DEF1)), NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_29, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Vector3_Read_m9D8873909C5EE03472C0E2D094626BF6CFB7E5E7_RuntimeMethod_var)));
			}

IL_00ee_1:
			{
				bool L_30 = V_1;
				if (L_30)
				{
					goto IL_00fd_1;
				}
			}
			{
				TProtocolException_t69B81CDFF3E6D584BC54665AB6BAD9593BC21996* L_31 = (TProtocolException_t69B81CDFF3E6D584BC54665AB6BAD9593BC21996*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TProtocolException_t69B81CDFF3E6D584BC54665AB6BAD9593BC21996_il2cpp_TypeInfo_var)));
				NullCheck(L_31);
				TProtocolException__ctor_m490B7FD7AC0D57E9B14D079A63C015546F109C7A(L_31, 1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4AC6E7F474564EAD58FBD38EA8A310F698916743)), NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_31, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Vector3_Read_m9D8873909C5EE03472C0E2D094626BF6CFB7E5E7_RuntimeMethod_var)));
			}

IL_00fd_1:
			{
				bool L_32 = V_2;
				if (L_32)
				{
					goto IL_010c_1;
				}
			}
			{
				TProtocolException_t69B81CDFF3E6D584BC54665AB6BAD9593BC21996* L_33 = (TProtocolException_t69B81CDFF3E6D584BC54665AB6BAD9593BC21996*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TProtocolException_t69B81CDFF3E6D584BC54665AB6BAD9593BC21996_il2cpp_TypeInfo_var)));
				NullCheck(L_33);
				TProtocolException__ctor_m490B7FD7AC0D57E9B14D079A63C015546F109C7A(L_33, 1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral67139733340C74D680AC9CFF8DECFD594DAB4AAB)), NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_33, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Vector3_Read_m9D8873909C5EE03472C0E2D094626BF6CFB7E5E7_RuntimeMethod_var)));
			}

IL_010c_1:
			{
				goto IL_0115;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0115:
	{
		return;
	}
}
// System.Void BlueprintReality.Thrift.Vector3::Write(Thrift.Protocol.TProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3_Write_mB350FC59FBEB5FA8D0255E8BE137A9F921607BFF (Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* __this, TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* ___oprot0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB375D52F58ABA319072C6F9F1880BCB36A59233C);
		s_Il2CppMethodInitialized = true;
	}
	TStruct_tAD67F1F0C45235334F9440B6A587DB03A0CE5C96 V_0;
	memset((&V_0), 0, sizeof(V_0));
	TField_tF4D9D8EFE767C142914693E0E787547F0213D334 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_0 = ___oprot0;
		NullCheck(L_0);
		TProtocol_IncrementRecursionDepth_m92B440A7308F6D7012C73B74A6406855A29FF58B(L_0, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ce:
			{// begin finally (depth: 1)
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_1 = ___oprot0;
				NullCheck(L_1);
				TProtocol_DecrementRecursionDepth_m049900374B8368A8AEB03E6FC93DF288EA1BE44B(L_1, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			TStruct__ctor_mD56EA112D651038138D3BC7203C3606718E5CB3F((&V_0), _stringLiteralB375D52F58ABA319072C6F9F1880BCB36A59233C, NULL);
			TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_2 = ___oprot0;
			TStruct_tAD67F1F0C45235334F9440B6A587DB03A0CE5C96 L_3 = V_0;
			NullCheck(L_2);
			VirtualActionInvoker1< TStruct_tAD67F1F0C45235334F9440B6A587DB03A0CE5C96 >::Invoke(8 /* System.Void Thrift.Protocol.TProtocol::WriteStructBegin(Thrift.Protocol.TStruct) */, L_2, L_3);
			il2cpp_codegen_initobj((&V_1), sizeof(TField_tF4D9D8EFE767C142914693E0E787547F0213D334));
			TField_set_Name_mAD35FC0847F990535FAF3E3032CD117B560AF751_inline((&V_1), _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, NULL);
			TField_set_Type_m2AA4AF23C96A26CB269B78B067489E10F055E983_inline((&V_1), 4, NULL);
			TField_set_ID_m68843CC49A2A49966729F299A58A2BBC6FCC4F01_inline((&V_1), (int16_t)1, NULL);
			TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_4 = ___oprot0;
			TField_tF4D9D8EFE767C142914693E0E787547F0213D334 L_5 = V_1;
			NullCheck(L_4);
			VirtualActionInvoker1< TField_tF4D9D8EFE767C142914693E0E787547F0213D334 >::Invoke(10 /* System.Void Thrift.Protocol.TProtocol::WriteFieldBegin(Thrift.Protocol.TField) */, L_4, L_5);
			TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_6 = ___oprot0;
			double L_7;
			L_7 = Vector3_get_X_mBDD4CEFB5FE45779A8206A8ED7CC94E985B1811B_inline(__this, NULL);
			NullCheck(L_6);
			VirtualActionInvoker1< double >::Invoke(24 /* System.Void Thrift.Protocol.TProtocol::WriteDouble(System.Double) */, L_6, L_7);
			TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_8 = ___oprot0;
			NullCheck(L_8);
			VirtualActionInvoker0::Invoke(11 /* System.Void Thrift.Protocol.TProtocol::WriteFieldEnd() */, L_8);
			TField_set_Name_mAD35FC0847F990535FAF3E3032CD117B560AF751_inline((&V_1), _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
			TField_set_Type_m2AA4AF23C96A26CB269B78B067489E10F055E983_inline((&V_1), 4, NULL);
			TField_set_ID_m68843CC49A2A49966729F299A58A2BBC6FCC4F01_inline((&V_1), (int16_t)2, NULL);
			TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_9 = ___oprot0;
			TField_tF4D9D8EFE767C142914693E0E787547F0213D334 L_10 = V_1;
			NullCheck(L_9);
			VirtualActionInvoker1< TField_tF4D9D8EFE767C142914693E0E787547F0213D334 >::Invoke(10 /* System.Void Thrift.Protocol.TProtocol::WriteFieldBegin(Thrift.Protocol.TField) */, L_9, L_10);
			TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_11 = ___oprot0;
			double L_12;
			L_12 = Vector3_get_Y_m12664DD3843DD16A595E1C5BEF11BC8FC0AEC002_inline(__this, NULL);
			NullCheck(L_11);
			VirtualActionInvoker1< double >::Invoke(24 /* System.Void Thrift.Protocol.TProtocol::WriteDouble(System.Double) */, L_11, L_12);
			TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_13 = ___oprot0;
			NullCheck(L_13);
			VirtualActionInvoker0::Invoke(11 /* System.Void Thrift.Protocol.TProtocol::WriteFieldEnd() */, L_13);
			TField_set_Name_mAD35FC0847F990535FAF3E3032CD117B560AF751_inline((&V_1), _stringLiteral9CE1604D659135925CCC4DD1F526AFFE42E689F1, NULL);
			TField_set_Type_m2AA4AF23C96A26CB269B78B067489E10F055E983_inline((&V_1), 4, NULL);
			TField_set_ID_m68843CC49A2A49966729F299A58A2BBC6FCC4F01_inline((&V_1), (int16_t)3, NULL);
			TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_14 = ___oprot0;
			TField_tF4D9D8EFE767C142914693E0E787547F0213D334 L_15 = V_1;
			NullCheck(L_14);
			VirtualActionInvoker1< TField_tF4D9D8EFE767C142914693E0E787547F0213D334 >::Invoke(10 /* System.Void Thrift.Protocol.TProtocol::WriteFieldBegin(Thrift.Protocol.TField) */, L_14, L_15);
			TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_16 = ___oprot0;
			double L_17;
			L_17 = Vector3_get_Z_m742A1196945ACF63E1B3AD737C8ADBDBB6509820_inline(__this, NULL);
			NullCheck(L_16);
			VirtualActionInvoker1< double >::Invoke(24 /* System.Void Thrift.Protocol.TProtocol::WriteDouble(System.Double) */, L_16, L_17);
			TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_18 = ___oprot0;
			NullCheck(L_18);
			VirtualActionInvoker0::Invoke(11 /* System.Void Thrift.Protocol.TProtocol::WriteFieldEnd() */, L_18);
			TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_19 = ___oprot0;
			NullCheck(L_19);
			VirtualActionInvoker0::Invoke(12 /* System.Void Thrift.Protocol.TProtocol::WriteFieldStop() */, L_19);
			TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_20 = ___oprot0;
			NullCheck(L_20);
			VirtualActionInvoker0::Invoke(9 /* System.Void Thrift.Protocol.TProtocol::WriteStructEnd() */, L_20);
			goto IL_00d5;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00d5:
	{
		return;
	}
}
// System.String BlueprintReality.Thrift.Vector3::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector3_ToString_m7C0AC55A615744A96F7DF80FD7E4B7AC1EBABE54 (Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21EE367ABB11BEF0B9CF540FDB7EDD91C1A579A9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3BD71A6BD71461A532B664B426537E538AAB94D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral947D561F6DE2C973D88E82A9442712D47D5B01F6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE262104D6DB06A3BF1AF8F82D967A5A9C467F429);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_mCD797D942316CB356205FD96415B0B7581CDAD60(L_0, _stringLiteral3BD71A6BD71461A532B664B426537E538AAB94D0, NULL);
		StringBuilder_t* L_1 = L_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_1, _stringLiteral947D561F6DE2C973D88E82A9442712D47D5B01F6, NULL);
		StringBuilder_t* L_3 = L_1;
		double L_4;
		L_4 = Vector3_get_X_mBDD4CEFB5FE45779A8206A8ED7CC94E985B1811B_inline(__this, NULL);
		NullCheck(L_3);
		StringBuilder_t* L_5;
		L_5 = StringBuilder_Append_m078D9861582DCD6037F533DF9C2FFEF0A54269E0(L_3, L_4, NULL);
		StringBuilder_t* L_6 = L_3;
		NullCheck(L_6);
		StringBuilder_t* L_7;
		L_7 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_6, _stringLiteral21EE367ABB11BEF0B9CF540FDB7EDD91C1A579A9, NULL);
		StringBuilder_t* L_8 = L_6;
		double L_9;
		L_9 = Vector3_get_Y_m12664DD3843DD16A595E1C5BEF11BC8FC0AEC002_inline(__this, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_10;
		L_10 = StringBuilder_Append_m078D9861582DCD6037F533DF9C2FFEF0A54269E0(L_8, L_9, NULL);
		StringBuilder_t* L_11 = L_8;
		NullCheck(L_11);
		StringBuilder_t* L_12;
		L_12 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_11, _stringLiteralE262104D6DB06A3BF1AF8F82D967A5A9C467F429, NULL);
		StringBuilder_t* L_13 = L_11;
		double L_14;
		L_14 = Vector3_get_Z_m742A1196945ACF63E1B3AD737C8ADBDBB6509820_inline(__this, NULL);
		NullCheck(L_13);
		StringBuilder_t* L_15;
		L_15 = StringBuilder_Append_m078D9861582DCD6037F533DF9C2FFEF0A54269E0(L_13, L_14, NULL);
		StringBuilder_t* L_16 = L_13;
		NullCheck(L_16);
		StringBuilder_t* L_17;
		L_17 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_16, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D, NULL);
		NullCheck(L_16);
		String_t* L_18;
		L_18 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_16);
		return L_18;
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
// BlueprintReality.Thrift.Vector3 BlueprintReality.Thrift.Pose::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* Pose_get_Position_mA7DB3A7243D9B8BA662790BBB280DC07B05BC9B4 (Pose_t56F6B800CDF4F0273D46059BF45307D69B3F62C3* __this, const RuntimeMethod* method) 
{
	{
		Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* L_0 = __this->___U3CPositionU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void BlueprintReality.Thrift.Pose::set_Position(BlueprintReality.Thrift.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pose_set_Position_m4FEAA7230DF3E11A79FEC82E6E4450F699815DCF (Pose_t56F6B800CDF4F0273D46059BF45307D69B3F62C3* __this, Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* ___value0, const RuntimeMethod* method) 
{
	{
		Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* L_0 = ___value0;
		__this->___U3CPositionU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPositionU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// BlueprintReality.Thrift.Quaternion BlueprintReality.Thrift.Pose::get_Rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14* Pose_get_Rotation_m84DE9DF1E06E1DBD0938959E27EB8C521998B06E (Pose_t56F6B800CDF4F0273D46059BF45307D69B3F62C3* __this, const RuntimeMethod* method) 
{
	{
		Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14* L_0 = __this->___U3CRotationU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void BlueprintReality.Thrift.Pose::set_Rotation(BlueprintReality.Thrift.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pose_set_Rotation_mE34B2D8546F449EACE972EF2CDBA72F0747BD74F (Pose_t56F6B800CDF4F0273D46059BF45307D69B3F62C3* __this, Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14* ___value0, const RuntimeMethod* method) 
{
	{
		Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14* L_0 = ___value0;
		__this->___U3CRotationU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRotationU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Void BlueprintReality.Thrift.Pose::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pose__ctor_mBE9D506A0505943399C78C8047B62EBA800D0372 (Pose_t56F6B800CDF4F0273D46059BF45307D69B3F62C3* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void BlueprintReality.Thrift.Pose::.ctor(BlueprintReality.Thrift.Vector3,BlueprintReality.Thrift.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pose__ctor_m1F13B43C856C71C94224EE0FB7703B0890DC4D0D (Pose_t56F6B800CDF4F0273D46059BF45307D69B3F62C3* __this, Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* ___position0, Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14* ___rotation1, const RuntimeMethod* method) 
{
	{
		Pose__ctor_mBE9D506A0505943399C78C8047B62EBA800D0372(__this, NULL);
		Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* L_0 = ___position0;
		Pose_set_Position_m4FEAA7230DF3E11A79FEC82E6E4450F699815DCF_inline(__this, L_0, NULL);
		Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14* L_1 = ___rotation1;
		Pose_set_Rotation_mE34B2D8546F449EACE972EF2CDBA72F0747BD74F_inline(__this, L_1, NULL);
		return;
	}
}
// System.Void BlueprintReality.Thrift.Pose::Read(Thrift.Protocol.TProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pose_Read_m969472FBABA845000E12FE73F724AC2B7521D423 (Pose_t56F6B800CDF4F0273D46059BF45307D69B3F62C3* __this, TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* ___iprot0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	TField_tF4D9D8EFE767C142914693E0E787547F0213D334 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int16_t V_3 = 0;
	{
		TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_0 = ___iprot0;
		NullCheck(L_0);
		TProtocol_IncrementRecursionDepth_m92B440A7308F6D7012C73B74A6406855A29FF58B(L_0, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00de:
			{// begin finally (depth: 1)
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_1 = ___iprot0;
				NullCheck(L_1);
				TProtocol_DecrementRecursionDepth_m049900374B8368A8AEB03E6FC93DF288EA1BE44B(L_1, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				V_0 = (bool)0;
				V_1 = (bool)0;
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_2 = ___iprot0;
				NullCheck(L_2);
				TStruct_tAD67F1F0C45235334F9440B6A587DB03A0CE5C96 L_3;
				L_3 = VirtualFuncInvoker0< TStruct_tAD67F1F0C45235334F9440B6A587DB03A0CE5C96 >::Invoke(29 /* Thrift.Protocol.TStruct Thrift.Protocol.TProtocol::ReadStructBegin() */, L_2);
			}

IL_0011_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_4 = ___iprot0;
				NullCheck(L_4);
				TField_tF4D9D8EFE767C142914693E0E787547F0213D334 L_5;
				L_5 = VirtualFuncInvoker0< TField_tF4D9D8EFE767C142914693E0E787547F0213D334 >::Invoke(31 /* Thrift.Protocol.TField Thrift.Protocol.TProtocol::ReadFieldBegin() */, L_4);
				V_2 = L_5;
				uint8_t L_6;
				L_6 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_2), NULL);
				if (!L_6)
				{
					goto IL_00b8_1;
				}
			}
			{
				int16_t L_7;
				L_7 = TField_get_ID_m512A7F246CCD70AD2C473FA5AF09E6ECC8AB8B1A_inline((&V_2), NULL);
				V_3 = L_7;
				int16_t L_8 = V_3;
				if ((((int32_t)L_8) == ((int32_t)1)))
				{
					goto IL_0036_1;
				}
			}
			{
				int16_t L_9 = V_3;
				if ((((int32_t)L_9) == ((int32_t)2)))
				{
					goto IL_006b_1;
				}
			}
			{
				goto IL_00a0_1;
			}

IL_0036_1:
			{
				uint8_t L_10;
				L_10 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_2), NULL);
				if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)12)))))
				{
					goto IL_005c_1;
				}
			}
			{
				Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* L_11 = (Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55*)il2cpp_codegen_object_new(Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55_il2cpp_TypeInfo_var);
				NullCheck(L_11);
				Vector3__ctor_mCAFEBD9384F7BA33874D50B8E48A7A3839C3BB20(L_11, NULL);
				Pose_set_Position_m4FEAA7230DF3E11A79FEC82E6E4450F699815DCF_inline(__this, L_11, NULL);
				Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* L_12;
				L_12 = Pose_get_Position_mA7DB3A7243D9B8BA662790BBB280DC07B05BC9B4_inline(__this, NULL);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_13 = ___iprot0;
				NullCheck(L_12);
				Vector3_Read_m9D8873909C5EE03472C0E2D094626BF6CFB7E5E7(L_12, L_13, NULL);
				V_0 = (bool)1;
				goto IL_00ad_1;
			}

IL_005c_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_14 = ___iprot0;
				uint8_t L_15;
				L_15 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_2), NULL);
				TProtocolUtil_Skip_m61E2B7C700479ECC6AD4E86636C1235C30B5A38F(L_14, L_15, NULL);
				goto IL_00ad_1;
			}

IL_006b_1:
			{
				uint8_t L_16;
				L_16 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_2), NULL);
				if ((!(((uint32_t)L_16) == ((uint32_t)((int32_t)12)))))
				{
					goto IL_0091_1;
				}
			}
			{
				Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14* L_17 = (Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14*)il2cpp_codegen_object_new(Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14_il2cpp_TypeInfo_var);
				NullCheck(L_17);
				Quaternion__ctor_mF918C4EAF6C09059CCFE7B52C82E199E11C185DA(L_17, NULL);
				Pose_set_Rotation_mE34B2D8546F449EACE972EF2CDBA72F0747BD74F_inline(__this, L_17, NULL);
				Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14* L_18;
				L_18 = Pose_get_Rotation_m84DE9DF1E06E1DBD0938959E27EB8C521998B06E_inline(__this, NULL);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_19 = ___iprot0;
				NullCheck(L_18);
				Quaternion_Read_m0DE7EE832B4D8BFFC1A79C7FF48C15B324224B8D(L_18, L_19, NULL);
				V_1 = (bool)1;
				goto IL_00ad_1;
			}

IL_0091_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_20 = ___iprot0;
				uint8_t L_21;
				L_21 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_2), NULL);
				TProtocolUtil_Skip_m61E2B7C700479ECC6AD4E86636C1235C30B5A38F(L_20, L_21, NULL);
				goto IL_00ad_1;
			}

IL_00a0_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_22 = ___iprot0;
				uint8_t L_23;
				L_23 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_2), NULL);
				TProtocolUtil_Skip_m61E2B7C700479ECC6AD4E86636C1235C30B5A38F(L_22, L_23, NULL);
			}

IL_00ad_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_24 = ___iprot0;
				NullCheck(L_24);
				VirtualActionInvoker0::Invoke(32 /* System.Void Thrift.Protocol.TProtocol::ReadFieldEnd() */, L_24);
				goto IL_0011_1;
			}

IL_00b8_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_25 = ___iprot0;
				NullCheck(L_25);
				VirtualActionInvoker0::Invoke(30 /* System.Void Thrift.Protocol.TProtocol::ReadStructEnd() */, L_25);
				bool L_26 = V_0;
				if (L_26)
				{
					goto IL_00cd_1;
				}
			}
			{
				TProtocolException_t69B81CDFF3E6D584BC54665AB6BAD9593BC21996* L_27 = (TProtocolException_t69B81CDFF3E6D584BC54665AB6BAD9593BC21996*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TProtocolException_t69B81CDFF3E6D584BC54665AB6BAD9593BC21996_il2cpp_TypeInfo_var)));
				NullCheck(L_27);
				TProtocolException__ctor_m490B7FD7AC0D57E9B14D079A63C015546F109C7A(L_27, 1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4DE2693D97BA81D25D43D15F9D51FB0E02595543)), NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_27, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Pose_Read_m969472FBABA845000E12FE73F724AC2B7521D423_RuntimeMethod_var)));
			}

IL_00cd_1:
			{
				bool L_28 = V_1;
				if (L_28)
				{
					goto IL_00dc_1;
				}
			}
			{
				TProtocolException_t69B81CDFF3E6D584BC54665AB6BAD9593BC21996* L_29 = (TProtocolException_t69B81CDFF3E6D584BC54665AB6BAD9593BC21996*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TProtocolException_t69B81CDFF3E6D584BC54665AB6BAD9593BC21996_il2cpp_TypeInfo_var)));
				NullCheck(L_29);
				TProtocolException__ctor_m490B7FD7AC0D57E9B14D079A63C015546F109C7A(L_29, 1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA5CABFA334BBD31676E2E3312309E24A55473B7E)), NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_29, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Pose_Read_m969472FBABA845000E12FE73F724AC2B7521D423_RuntimeMethod_var)));
			}

IL_00dc_1:
			{
				goto IL_00e5;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e5:
	{
		return;
	}
}
// System.Void BlueprintReality.Thrift.Pose::Write(Thrift.Protocol.TProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pose_Write_mD2D9ABC4D10F58AC11D78C4CF98DBA661C95D406 (Pose_t56F6B800CDF4F0273D46059BF45307D69B3F62C3* __this, TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* ___oprot0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral149967D8B0B4FF60C95B519437C63F4F13C1E258);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4DF417DF46EF8A7C67D3A1FE0CC53DCF5212FC81);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88BDF3D0791A560245652E772545C49897854443);
		s_Il2CppMethodInitialized = true;
	}
	TStruct_tAD67F1F0C45235334F9440B6A587DB03A0CE5C96 V_0;
	memset((&V_0), 0, sizeof(V_0));
	TField_tF4D9D8EFE767C142914693E0E787547F0213D334 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_0 = ___oprot0;
		NullCheck(L_0);
		TProtocol_IncrementRecursionDepth_m92B440A7308F6D7012C73B74A6406855A29FF58B(L_0, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00c3:
			{// begin finally (depth: 1)
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_1 = ___oprot0;
				NullCheck(L_1);
				TProtocol_DecrementRecursionDepth_m049900374B8368A8AEB03E6FC93DF288EA1BE44B(L_1, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				TStruct__ctor_mD56EA112D651038138D3BC7203C3606718E5CB3F((&V_0), _stringLiteral149967D8B0B4FF60C95B519437C63F4F13C1E258, NULL);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_2 = ___oprot0;
				TStruct_tAD67F1F0C45235334F9440B6A587DB03A0CE5C96 L_3 = V_0;
				NullCheck(L_2);
				VirtualActionInvoker1< TStruct_tAD67F1F0C45235334F9440B6A587DB03A0CE5C96 >::Invoke(8 /* System.Void Thrift.Protocol.TProtocol::WriteStructBegin(Thrift.Protocol.TStruct) */, L_2, L_3);
				il2cpp_codegen_initobj((&V_1), sizeof(TField_tF4D9D8EFE767C142914693E0E787547F0213D334));
				Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* L_4;
				L_4 = Pose_get_Position_mA7DB3A7243D9B8BA662790BBB280DC07B05BC9B4_inline(__this, NULL);
				if (L_4)
				{
					goto IL_0035_1;
				}
			}
			{
				TProtocolException_t69B81CDFF3E6D584BC54665AB6BAD9593BC21996* L_5 = (TProtocolException_t69B81CDFF3E6D584BC54665AB6BAD9593BC21996*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TProtocolException_t69B81CDFF3E6D584BC54665AB6BAD9593BC21996_il2cpp_TypeInfo_var)));
				NullCheck(L_5);
				TProtocolException__ctor_m490B7FD7AC0D57E9B14D079A63C015546F109C7A(L_5, 1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4DE2693D97BA81D25D43D15F9D51FB0E02595543)), NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Pose_Write_mD2D9ABC4D10F58AC11D78C4CF98DBA661C95D406_RuntimeMethod_var)));
			}

IL_0035_1:
			{
				TField_set_Name_mAD35FC0847F990535FAF3E3032CD117B560AF751_inline((&V_1), _stringLiteral88BDF3D0791A560245652E772545C49897854443, NULL);
				TField_set_Type_m2AA4AF23C96A26CB269B78B067489E10F055E983_inline((&V_1), ((int32_t)12), NULL);
				TField_set_ID_m68843CC49A2A49966729F299A58A2BBC6FCC4F01_inline((&V_1), (int16_t)1, NULL);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_6 = ___oprot0;
				TField_tF4D9D8EFE767C142914693E0E787547F0213D334 L_7 = V_1;
				NullCheck(L_6);
				VirtualActionInvoker1< TField_tF4D9D8EFE767C142914693E0E787547F0213D334 >::Invoke(10 /* System.Void Thrift.Protocol.TProtocol::WriteFieldBegin(Thrift.Protocol.TField) */, L_6, L_7);
				Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* L_8;
				L_8 = Pose_get_Position_mA7DB3A7243D9B8BA662790BBB280DC07B05BC9B4_inline(__this, NULL);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_9 = ___oprot0;
				NullCheck(L_8);
				Vector3_Write_mB350FC59FBEB5FA8D0255E8BE137A9F921607BFF(L_8, L_9, NULL);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_10 = ___oprot0;
				NullCheck(L_10);
				VirtualActionInvoker0::Invoke(11 /* System.Void Thrift.Protocol.TProtocol::WriteFieldEnd() */, L_10);
				Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14* L_11;
				L_11 = Pose_get_Rotation_m84DE9DF1E06E1DBD0938959E27EB8C521998B06E_inline(__this, NULL);
				if (L_11)
				{
					goto IL_007f_1;
				}
			}
			{
				TProtocolException_t69B81CDFF3E6D584BC54665AB6BAD9593BC21996* L_12 = (TProtocolException_t69B81CDFF3E6D584BC54665AB6BAD9593BC21996*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TProtocolException_t69B81CDFF3E6D584BC54665AB6BAD9593BC21996_il2cpp_TypeInfo_var)));
				NullCheck(L_12);
				TProtocolException__ctor_m490B7FD7AC0D57E9B14D079A63C015546F109C7A(L_12, 1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA5CABFA334BBD31676E2E3312309E24A55473B7E)), NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Pose_Write_mD2D9ABC4D10F58AC11D78C4CF98DBA661C95D406_RuntimeMethod_var)));
			}

IL_007f_1:
			{
				TField_set_Name_mAD35FC0847F990535FAF3E3032CD117B560AF751_inline((&V_1), _stringLiteral4DF417DF46EF8A7C67D3A1FE0CC53DCF5212FC81, NULL);
				TField_set_Type_m2AA4AF23C96A26CB269B78B067489E10F055E983_inline((&V_1), ((int32_t)12), NULL);
				TField_set_ID_m68843CC49A2A49966729F299A58A2BBC6FCC4F01_inline((&V_1), (int16_t)2, NULL);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_13 = ___oprot0;
				TField_tF4D9D8EFE767C142914693E0E787547F0213D334 L_14 = V_1;
				NullCheck(L_13);
				VirtualActionInvoker1< TField_tF4D9D8EFE767C142914693E0E787547F0213D334 >::Invoke(10 /* System.Void Thrift.Protocol.TProtocol::WriteFieldBegin(Thrift.Protocol.TField) */, L_13, L_14);
				Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14* L_15;
				L_15 = Pose_get_Rotation_m84DE9DF1E06E1DBD0938959E27EB8C521998B06E_inline(__this, NULL);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_16 = ___oprot0;
				NullCheck(L_15);
				Quaternion_Write_m1B5494004EA15AE513F8B66F3B0DF7BFBED9346B(L_15, L_16, NULL);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_17 = ___oprot0;
				NullCheck(L_17);
				VirtualActionInvoker0::Invoke(11 /* System.Void Thrift.Protocol.TProtocol::WriteFieldEnd() */, L_17);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_18 = ___oprot0;
				NullCheck(L_18);
				VirtualActionInvoker0::Invoke(12 /* System.Void Thrift.Protocol.TProtocol::WriteFieldStop() */, L_18);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_19 = ___oprot0;
				NullCheck(L_19);
				VirtualActionInvoker0::Invoke(9 /* System.Void Thrift.Protocol.TProtocol::WriteStructEnd() */, L_19);
				goto IL_00ca;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00ca:
	{
		return;
	}
}
// System.String BlueprintReality.Thrift.Pose::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Pose_ToString_mC8A964888A560AB78CB883D75BF0AB6F3FA8D627 (Pose_t56F6B800CDF4F0273D46059BF45307D69B3F62C3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral04CEBF56E436D91C3FE82A4B92D4A8D16E885E04);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral20855972D1D69D5CE26CB2B3AAE7D19E77236DAF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD64DE515DE159C401BB82652225D6BE22CDAD7A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF4C808726D87E2BF286411B6401235E59191156D);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* G_B2_0 = NULL;
	StringBuilder_t* G_B2_1 = NULL;
	StringBuilder_t* G_B1_0 = NULL;
	StringBuilder_t* G_B1_1 = NULL;
	String_t* G_B3_0 = NULL;
	StringBuilder_t* G_B3_1 = NULL;
	StringBuilder_t* G_B3_2 = NULL;
	StringBuilder_t* G_B5_0 = NULL;
	StringBuilder_t* G_B5_1 = NULL;
	StringBuilder_t* G_B4_0 = NULL;
	StringBuilder_t* G_B4_1 = NULL;
	String_t* G_B6_0 = NULL;
	StringBuilder_t* G_B6_1 = NULL;
	StringBuilder_t* G_B6_2 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_mCD797D942316CB356205FD96415B0B7581CDAD60(L_0, _stringLiteralF4C808726D87E2BF286411B6401235E59191156D, NULL);
		StringBuilder_t* L_1 = L_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_1, _stringLiteral04CEBF56E436D91C3FE82A4B92D4A8D16E885E04, NULL);
		StringBuilder_t* L_3 = L_1;
		Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* L_4;
		L_4 = Pose_get_Position_mA7DB3A7243D9B8BA662790BBB280DC07B05BC9B4_inline(__this, NULL);
		G_B1_0 = L_3;
		G_B1_1 = L_3;
		if (!L_4)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_3;
			goto IL_002c;
		}
	}
	{
		Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* L_5;
		L_5 = Pose_get_Position_mA7DB3A7243D9B8BA662790BBB280DC07B05BC9B4_inline(__this, NULL);
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_5);
		G_B3_0 = L_6;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_0031;
	}

IL_002c:
	{
		G_B3_0 = _stringLiteralD64DE515DE159C401BB82652225D6BE22CDAD7A1;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_0031:
	{
		NullCheck(G_B3_1);
		StringBuilder_t* L_7;
		L_7 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(G_B3_1, G_B3_0, NULL);
		StringBuilder_t* L_8 = G_B3_2;
		NullCheck(L_8);
		StringBuilder_t* L_9;
		L_9 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, _stringLiteral20855972D1D69D5CE26CB2B3AAE7D19E77236DAF, NULL);
		StringBuilder_t* L_10 = L_8;
		Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14* L_11;
		L_11 = Pose_get_Rotation_m84DE9DF1E06E1DBD0938959E27EB8C521998B06E_inline(__this, NULL);
		G_B4_0 = L_10;
		G_B4_1 = L_10;
		if (!L_11)
		{
			G_B5_0 = L_10;
			G_B5_1 = L_10;
			goto IL_0059;
		}
	}
	{
		Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14* L_12;
		L_12 = Pose_get_Rotation_m84DE9DF1E06E1DBD0938959E27EB8C521998B06E_inline(__this, NULL);
		NullCheck(L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_12);
		G_B6_0 = L_13;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		goto IL_005e;
	}

IL_0059:
	{
		G_B6_0 = _stringLiteralD64DE515DE159C401BB82652225D6BE22CDAD7A1;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
	}

IL_005e:
	{
		NullCheck(G_B6_1);
		StringBuilder_t* L_14;
		L_14 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(G_B6_1, G_B6_0, NULL);
		StringBuilder_t* L_15 = G_B6_2;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_15, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D, NULL);
		NullCheck(L_15);
		String_t* L_17;
		L_17 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_15);
		return L_17;
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
// System.Int64 BlueprintReality.Thrift.SharedTextures.SharedTex::get_Handle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t SharedTex_get_Handle_m512729E37878AE923590D2256A68A2A0BD12FCE2 (SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->___U3CHandleU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTex::set_Handle(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharedTex_set_Handle_mF9E7DAB17C6E6BD23FADA211B5F4BC63867C8E90 (SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976* __this, int64_t ___value0, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___value0;
		__this->___U3CHandleU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Int32 BlueprintReality.Thrift.SharedTextures.SharedTex::get_Width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SharedTex_get_Width_m729E44044DC62A766A6116F92F36EC97B9D30EEA (SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CWidthU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTex::set_Width(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharedTex_set_Width_mDBD3B42833AB023C2F2F8A6919E7362413A18AD7 (SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CWidthU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Int32 BlueprintReality.Thrift.SharedTextures.SharedTex::get_Height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SharedTex_get_Height_m70CB07877DEC6388E8003B6505EE22A03730B064 (SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CHeightU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTex::set_Height(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharedTex_set_Height_m88D20EAB79526A43887086E529940DC006D06B36 (SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CHeightU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Int32 BlueprintReality.Thrift.SharedTextures.SharedTex::get_Format()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SharedTex_get_Format_m11E0F3EB90F0884DCE26AF618D539534804B0F3B (SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CFormatU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTex::set_Format(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharedTex_set_Format_m46B540AC0558D6793F9CB2D17F79F80C63289A92 (SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CFormatU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Int64 BlueprintReality.Thrift.SharedTextures.SharedTex::get_ProcId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t SharedTex_get_ProcId_m7C71069F0E08FD9343B3F9EE84DBD65BBC16F4A8 (SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->____procId_0;
		return L_0;
	}
}
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTex::set_ProcId(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharedTex_set_ProcId_mE12F9E7D50F7C4614601E93E67A1ED29FCFA44B5 (SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976* __this, int64_t ___value0, const RuntimeMethod* method) 
{
	{
		Isset_t3C0D7B75B364660D65CE6F217C2593D024089C7C* L_0 = (&__this->_____isset_5);
		L_0->___procId_0 = (bool)1;
		int64_t L_1 = ___value0;
		__this->____procId_0 = L_1;
		return;
	}
}
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTex::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharedTex__ctor_mC7D5C44C0B80565EA90810EF90B805522833E07A (SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTex::.ctor(System.Int64,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharedTex__ctor_mF45DCC7F1F6DC2373D95FF7988ACCA0B321FCD19 (SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976* __this, int64_t ___handle0, int32_t ___width1, int32_t ___height2, int32_t ___format3, const RuntimeMethod* method) 
{
	{
		SharedTex__ctor_mC7D5C44C0B80565EA90810EF90B805522833E07A(__this, NULL);
		int64_t L_0 = ___handle0;
		SharedTex_set_Handle_mF9E7DAB17C6E6BD23FADA211B5F4BC63867C8E90_inline(__this, L_0, NULL);
		int32_t L_1 = ___width1;
		SharedTex_set_Width_mDBD3B42833AB023C2F2F8A6919E7362413A18AD7_inline(__this, L_1, NULL);
		int32_t L_2 = ___height2;
		SharedTex_set_Height_m88D20EAB79526A43887086E529940DC006D06B36_inline(__this, L_2, NULL);
		int32_t L_3 = ___format3;
		SharedTex_set_Format_m46B540AC0558D6793F9CB2D17F79F80C63289A92_inline(__this, L_3, NULL);
		return;
	}
}
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTex::Read(Thrift.Protocol.TProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharedTex_Read_m5BE8C4C9683CCC19736B2D4AD65E8F85AB14E155 (SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976* __this, TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* ___iprot0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	TField_tF4D9D8EFE767C142914693E0E787547F0213D334 V_4;
	memset((&V_4), 0, sizeof(V_4));
	int16_t V_5 = 0;
	{
		TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_0 = ___iprot0;
		NullCheck(L_0);
		TProtocol_IncrementRecursionDepth_m92B440A7308F6D7012C73B74A6406855A29FF58B(L_0, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0189:
			{// begin finally (depth: 1)
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_1 = ___iprot0;
				NullCheck(L_1);
				TProtocol_DecrementRecursionDepth_m049900374B8368A8AEB03E6FC93DF288EA1BE44B(L_1, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				V_0 = (bool)0;
				V_1 = (bool)0;
				V_2 = (bool)0;
				V_3 = (bool)0;
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_2 = ___iprot0;
				NullCheck(L_2);
				TStruct_tAD67F1F0C45235334F9440B6A587DB03A0CE5C96 L_3;
				L_3 = VirtualFuncInvoker0< TStruct_tAD67F1F0C45235334F9440B6A587DB03A0CE5C96 >::Invoke(29 /* Thrift.Protocol.TStruct Thrift.Protocol.TProtocol::ReadStructBegin() */, L_2);
			}

IL_0015_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_4 = ___iprot0;
				NullCheck(L_4);
				TField_tF4D9D8EFE767C142914693E0E787547F0213D334 L_5;
				L_5 = VirtualFuncInvoker0< TField_tF4D9D8EFE767C142914693E0E787547F0213D334 >::Invoke(31 /* Thrift.Protocol.TField Thrift.Protocol.TProtocol::ReadFieldBegin() */, L_4);
				V_4 = L_5;
				uint8_t L_6;
				L_6 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_4), NULL);
				if (!L_6)
				{
					goto IL_0145_1;
				}
			}
			{
				int16_t L_7;
				L_7 = TField_get_ID_m512A7F246CCD70AD2C473FA5AF09E6ECC8AB8B1A_inline((&V_4), NULL);
				V_5 = L_7;
				int16_t L_8 = V_5;
				switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_8, 1)))
				{
					case 0:
					{
						goto IL_0054_1;
					}
					case 1:
					{
						goto IL_0084_1;
					}
					case 2:
					{
						goto IL_00b3_1;
					}
					case 3:
					{
						goto IL_00dc_1;
					}
					case 4:
					{
						goto IL_0105_1;
					}
				}
			}
			{
				goto IL_012d_1;
			}

IL_0054_1:
			{
				uint8_t L_9;
				L_9 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_4), NULL);
				if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)10)))))
				{
					goto IL_0072_1;
				}
			}
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_10 = ___iprot0;
				NullCheck(L_10);
				int64_t L_11;
				L_11 = VirtualFuncInvoker0< int64_t >::Invoke(43 /* System.Int64 Thrift.Protocol.TProtocol::ReadI64() */, L_10);
				SharedTex_set_Handle_mF9E7DAB17C6E6BD23FADA211B5F4BC63867C8E90_inline(__this, L_11, NULL);
				V_0 = (bool)1;
				goto IL_013a_1;
			}

IL_0072_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_12 = ___iprot0;
				uint8_t L_13;
				L_13 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_4), NULL);
				TProtocolUtil_Skip_m61E2B7C700479ECC6AD4E86636C1235C30B5A38F(L_12, L_13, NULL);
				goto IL_013a_1;
			}

IL_0084_1:
			{
				uint8_t L_14;
				L_14 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_4), NULL);
				if ((!(((uint32_t)L_14) == ((uint32_t)8))))
				{
					goto IL_00a1_1;
				}
			}
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_15 = ___iprot0;
				NullCheck(L_15);
				int32_t L_16;
				L_16 = VirtualFuncInvoker0< int32_t >::Invoke(42 /* System.Int32 Thrift.Protocol.TProtocol::ReadI32() */, L_15);
				SharedTex_set_Width_mDBD3B42833AB023C2F2F8A6919E7362413A18AD7_inline(__this, L_16, NULL);
				V_1 = (bool)1;
				goto IL_013a_1;
			}

IL_00a1_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_17 = ___iprot0;
				uint8_t L_18;
				L_18 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_4), NULL);
				TProtocolUtil_Skip_m61E2B7C700479ECC6AD4E86636C1235C30B5A38F(L_17, L_18, NULL);
				goto IL_013a_1;
			}

IL_00b3_1:
			{
				uint8_t L_19;
				L_19 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_4), NULL);
				if ((!(((uint32_t)L_19) == ((uint32_t)8))))
				{
					goto IL_00cd_1;
				}
			}
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_20 = ___iprot0;
				NullCheck(L_20);
				int32_t L_21;
				L_21 = VirtualFuncInvoker0< int32_t >::Invoke(42 /* System.Int32 Thrift.Protocol.TProtocol::ReadI32() */, L_20);
				SharedTex_set_Height_m88D20EAB79526A43887086E529940DC006D06B36_inline(__this, L_21, NULL);
				V_2 = (bool)1;
				goto IL_013a_1;
			}

IL_00cd_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_22 = ___iprot0;
				uint8_t L_23;
				L_23 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_4), NULL);
				TProtocolUtil_Skip_m61E2B7C700479ECC6AD4E86636C1235C30B5A38F(L_22, L_23, NULL);
				goto IL_013a_1;
			}

IL_00dc_1:
			{
				uint8_t L_24;
				L_24 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_4), NULL);
				if ((!(((uint32_t)L_24) == ((uint32_t)8))))
				{
					goto IL_00f6_1;
				}
			}
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_25 = ___iprot0;
				NullCheck(L_25);
				int32_t L_26;
				L_26 = VirtualFuncInvoker0< int32_t >::Invoke(42 /* System.Int32 Thrift.Protocol.TProtocol::ReadI32() */, L_25);
				SharedTex_set_Format_m46B540AC0558D6793F9CB2D17F79F80C63289A92_inline(__this, L_26, NULL);
				V_3 = (bool)1;
				goto IL_013a_1;
			}

IL_00f6_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_27 = ___iprot0;
				uint8_t L_28;
				L_28 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_4), NULL);
				TProtocolUtil_Skip_m61E2B7C700479ECC6AD4E86636C1235C30B5A38F(L_27, L_28, NULL);
				goto IL_013a_1;
			}

IL_0105_1:
			{
				uint8_t L_29;
				L_29 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_4), NULL);
				if ((!(((uint32_t)L_29) == ((uint32_t)((int32_t)10)))))
				{
					goto IL_011e_1;
				}
			}
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_30 = ___iprot0;
				NullCheck(L_30);
				int64_t L_31;
				L_31 = VirtualFuncInvoker0< int64_t >::Invoke(43 /* System.Int64 Thrift.Protocol.TProtocol::ReadI64() */, L_30);
				SharedTex_set_ProcId_mE12F9E7D50F7C4614601E93E67A1ED29FCFA44B5(__this, L_31, NULL);
				goto IL_013a_1;
			}

IL_011e_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_32 = ___iprot0;
				uint8_t L_33;
				L_33 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_4), NULL);
				TProtocolUtil_Skip_m61E2B7C700479ECC6AD4E86636C1235C30B5A38F(L_32, L_33, NULL);
				goto IL_013a_1;
			}

IL_012d_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_34 = ___iprot0;
				uint8_t L_35;
				L_35 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_4), NULL);
				TProtocolUtil_Skip_m61E2B7C700479ECC6AD4E86636C1235C30B5A38F(L_34, L_35, NULL);
			}

IL_013a_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_36 = ___iprot0;
				NullCheck(L_36);
				VirtualActionInvoker0::Invoke(32 /* System.Void Thrift.Protocol.TProtocol::ReadFieldEnd() */, L_36);
				goto IL_0015_1;
			}

IL_0145_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_37 = ___iprot0;
				NullCheck(L_37);
				VirtualActionInvoker0::Invoke(30 /* System.Void Thrift.Protocol.TProtocol::ReadStructEnd() */, L_37);
				bool L_38 = V_0;
				if (L_38)
				{
					goto IL_015a_1;
				}
			}
			{
				TProtocolException_t69B81CDFF3E6D584BC54665AB6BAD9593BC21996* L_39 = (TProtocolException_t69B81CDFF3E6D584BC54665AB6BAD9593BC21996*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TProtocolException_t69B81CDFF3E6D584BC54665AB6BAD9593BC21996_il2cpp_TypeInfo_var)));
				NullCheck(L_39);
				TProtocolException__ctor_m490B7FD7AC0D57E9B14D079A63C015546F109C7A(L_39, 1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2ABB64B417DCCF039EBB8906A23EF277A3BECA28)), NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_39, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SharedTex_Read_m5BE8C4C9683CCC19736B2D4AD65E8F85AB14E155_RuntimeMethod_var)));
			}

IL_015a_1:
			{
				bool L_40 = V_1;
				if (L_40)
				{
					goto IL_0169_1;
				}
			}
			{
				TProtocolException_t69B81CDFF3E6D584BC54665AB6BAD9593BC21996* L_41 = (TProtocolException_t69B81CDFF3E6D584BC54665AB6BAD9593BC21996*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TProtocolException_t69B81CDFF3E6D584BC54665AB6BAD9593BC21996_il2cpp_TypeInfo_var)));
				NullCheck(L_41);
				TProtocolException__ctor_m490B7FD7AC0D57E9B14D079A63C015546F109C7A(L_41, 1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD6297CB9F947D0759361EAA41F9DA557D69563D2)), NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_41, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SharedTex_Read_m5BE8C4C9683CCC19736B2D4AD65E8F85AB14E155_RuntimeMethod_var)));
			}

IL_0169_1:
			{
				bool L_42 = V_2;
				if (L_42)
				{
					goto IL_0178_1;
				}
			}
			{
				TProtocolException_t69B81CDFF3E6D584BC54665AB6BAD9593BC21996* L_43 = (TProtocolException_t69B81CDFF3E6D584BC54665AB6BAD9593BC21996*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TProtocolException_t69B81CDFF3E6D584BC54665AB6BAD9593BC21996_il2cpp_TypeInfo_var)));
				NullCheck(L_43);
				TProtocolException__ctor_m490B7FD7AC0D57E9B14D079A63C015546F109C7A(L_43, 1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD1F40995B3B64771E79633B124610769310A58D6)), NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_43, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SharedTex_Read_m5BE8C4C9683CCC19736B2D4AD65E8F85AB14E155_RuntimeMethod_var)));
			}

IL_0178_1:
			{
				bool L_44 = V_3;
				if (L_44)
				{
					goto IL_0187_1;
				}
			}
			{
				TProtocolException_t69B81CDFF3E6D584BC54665AB6BAD9593BC21996* L_45 = (TProtocolException_t69B81CDFF3E6D584BC54665AB6BAD9593BC21996*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TProtocolException_t69B81CDFF3E6D584BC54665AB6BAD9593BC21996_il2cpp_TypeInfo_var)));
				NullCheck(L_45);
				TProtocolException__ctor_m490B7FD7AC0D57E9B14D079A63C015546F109C7A(L_45, 1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD5F805CF3F0089E2FAD95BE10D28B105293F3E51)), NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_45, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SharedTex_Read_m5BE8C4C9683CCC19736B2D4AD65E8F85AB14E155_RuntimeMethod_var)));
			}

IL_0187_1:
			{
				goto IL_0190;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0190:
	{
		return;
	}
}
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTex::Write(Thrift.Protocol.TProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharedTex_Write_m23E04FE4F1A2D9D73B407EE38D0C78E284972C26 (SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976* __this, TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* ___oprot0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral647E0FB2B5E859CC4BD7C73623B82C8EFABA2563);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75C9716749EA210206E3467390B7A11F3F33DDFA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral80CB791DCAD19BF707D3EE0562CD01BECD034D65);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD69DC64FC4F6DE35F4724F37BDA6EC753668890E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEBF5FE0CBF3EEA67902EEA700B7216E3DB0D8E84);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFFE3A1B73CD7FC81540FBBE737435B0A887629D5);
		s_Il2CppMethodInitialized = true;
	}
	TStruct_tAD67F1F0C45235334F9440B6A587DB03A0CE5C96 V_0;
	memset((&V_0), 0, sizeof(V_0));
	TField_tF4D9D8EFE767C142914693E0E787547F0213D334 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_0 = ___oprot0;
		NullCheck(L_0);
		TProtocol_IncrementRecursionDepth_m92B440A7308F6D7012C73B74A6406855A29FF58B(L_0, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0147:
			{// begin finally (depth: 1)
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_1 = ___oprot0;
				NullCheck(L_1);
				TProtocol_DecrementRecursionDepth_m049900374B8368A8AEB03E6FC93DF288EA1BE44B(L_1, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				TStruct__ctor_mD56EA112D651038138D3BC7203C3606718E5CB3F((&V_0), _stringLiteral80CB791DCAD19BF707D3EE0562CD01BECD034D65, NULL);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_2 = ___oprot0;
				TStruct_tAD67F1F0C45235334F9440B6A587DB03A0CE5C96 L_3 = V_0;
				NullCheck(L_2);
				VirtualActionInvoker1< TStruct_tAD67F1F0C45235334F9440B6A587DB03A0CE5C96 >::Invoke(8 /* System.Void Thrift.Protocol.TProtocol::WriteStructBegin(Thrift.Protocol.TStruct) */, L_2, L_3);
				il2cpp_codegen_initobj((&V_1), sizeof(TField_tF4D9D8EFE767C142914693E0E787547F0213D334));
				TField_set_Name_mAD35FC0847F990535FAF3E3032CD117B560AF751_inline((&V_1), _stringLiteralFFE3A1B73CD7FC81540FBBE737435B0A887629D5, NULL);
				TField_set_Type_m2AA4AF23C96A26CB269B78B067489E10F055E983_inline((&V_1), ((int32_t)10), NULL);
				TField_set_ID_m68843CC49A2A49966729F299A58A2BBC6FCC4F01_inline((&V_1), (int16_t)1, NULL);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_4 = ___oprot0;
				TField_tF4D9D8EFE767C142914693E0E787547F0213D334 L_5 = V_1;
				NullCheck(L_4);
				VirtualActionInvoker1< TField_tF4D9D8EFE767C142914693E0E787547F0213D334 >::Invoke(10 /* System.Void Thrift.Protocol.TProtocol::WriteFieldBegin(Thrift.Protocol.TField) */, L_4, L_5);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_6 = ___oprot0;
				int64_t L_7;
				L_7 = SharedTex_get_Handle_m512729E37878AE923590D2256A68A2A0BD12FCE2_inline(__this, NULL);
				NullCheck(L_6);
				VirtualActionInvoker1< int64_t >::Invoke(23 /* System.Void Thrift.Protocol.TProtocol::WriteI64(System.Int64) */, L_6, L_7);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_8 = ___oprot0;
				NullCheck(L_8);
				VirtualActionInvoker0::Invoke(11 /* System.Void Thrift.Protocol.TProtocol::WriteFieldEnd() */, L_8);
				TField_set_Name_mAD35FC0847F990535FAF3E3032CD117B560AF751_inline((&V_1), _stringLiteralEBF5FE0CBF3EEA67902EEA700B7216E3DB0D8E84, NULL);
				TField_set_Type_m2AA4AF23C96A26CB269B78B067489E10F055E983_inline((&V_1), 8, NULL);
				TField_set_ID_m68843CC49A2A49966729F299A58A2BBC6FCC4F01_inline((&V_1), (int16_t)2, NULL);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_9 = ___oprot0;
				TField_tF4D9D8EFE767C142914693E0E787547F0213D334 L_10 = V_1;
				NullCheck(L_9);
				VirtualActionInvoker1< TField_tF4D9D8EFE767C142914693E0E787547F0213D334 >::Invoke(10 /* System.Void Thrift.Protocol.TProtocol::WriteFieldBegin(Thrift.Protocol.TField) */, L_9, L_10);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_11 = ___oprot0;
				int32_t L_12;
				L_12 = SharedTex_get_Width_m729E44044DC62A766A6116F92F36EC97B9D30EEA_inline(__this, NULL);
				NullCheck(L_11);
				VirtualActionInvoker1< int32_t >::Invoke(22 /* System.Void Thrift.Protocol.TProtocol::WriteI32(System.Int32) */, L_11, L_12);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_13 = ___oprot0;
				NullCheck(L_13);
				VirtualActionInvoker0::Invoke(11 /* System.Void Thrift.Protocol.TProtocol::WriteFieldEnd() */, L_13);
				TField_set_Name_mAD35FC0847F990535FAF3E3032CD117B560AF751_inline((&V_1), _stringLiteral647E0FB2B5E859CC4BD7C73623B82C8EFABA2563, NULL);
				TField_set_Type_m2AA4AF23C96A26CB269B78B067489E10F055E983_inline((&V_1), 8, NULL);
				TField_set_ID_m68843CC49A2A49966729F299A58A2BBC6FCC4F01_inline((&V_1), (int16_t)3, NULL);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_14 = ___oprot0;
				TField_tF4D9D8EFE767C142914693E0E787547F0213D334 L_15 = V_1;
				NullCheck(L_14);
				VirtualActionInvoker1< TField_tF4D9D8EFE767C142914693E0E787547F0213D334 >::Invoke(10 /* System.Void Thrift.Protocol.TProtocol::WriteFieldBegin(Thrift.Protocol.TField) */, L_14, L_15);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_16 = ___oprot0;
				int32_t L_17;
				L_17 = SharedTex_get_Height_m70CB07877DEC6388E8003B6505EE22A03730B064_inline(__this, NULL);
				NullCheck(L_16);
				VirtualActionInvoker1< int32_t >::Invoke(22 /* System.Void Thrift.Protocol.TProtocol::WriteI32(System.Int32) */, L_16, L_17);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_18 = ___oprot0;
				NullCheck(L_18);
				VirtualActionInvoker0::Invoke(11 /* System.Void Thrift.Protocol.TProtocol::WriteFieldEnd() */, L_18);
				TField_set_Name_mAD35FC0847F990535FAF3E3032CD117B560AF751_inline((&V_1), _stringLiteral75C9716749EA210206E3467390B7A11F3F33DDFA, NULL);
				TField_set_Type_m2AA4AF23C96A26CB269B78B067489E10F055E983_inline((&V_1), 8, NULL);
				TField_set_ID_m68843CC49A2A49966729F299A58A2BBC6FCC4F01_inline((&V_1), (int16_t)4, NULL);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_19 = ___oprot0;
				TField_tF4D9D8EFE767C142914693E0E787547F0213D334 L_20 = V_1;
				NullCheck(L_19);
				VirtualActionInvoker1< TField_tF4D9D8EFE767C142914693E0E787547F0213D334 >::Invoke(10 /* System.Void Thrift.Protocol.TProtocol::WriteFieldBegin(Thrift.Protocol.TField) */, L_19, L_20);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_21 = ___oprot0;
				int32_t L_22;
				L_22 = SharedTex_get_Format_m11E0F3EB90F0884DCE26AF618D539534804B0F3B_inline(__this, NULL);
				NullCheck(L_21);
				VirtualActionInvoker1< int32_t >::Invoke(22 /* System.Void Thrift.Protocol.TProtocol::WriteI32(System.Int32) */, L_21, L_22);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_23 = ___oprot0;
				NullCheck(L_23);
				VirtualActionInvoker0::Invoke(11 /* System.Void Thrift.Protocol.TProtocol::WriteFieldEnd() */, L_23);
				Isset_t3C0D7B75B364660D65CE6F217C2593D024089C7C* L_24 = (&__this->_____isset_5);
				bool L_25 = L_24->___procId_0;
				if (!L_25)
				{
					goto IL_0139_1;
				}
			}
			{
				TField_set_Name_mAD35FC0847F990535FAF3E3032CD117B560AF751_inline((&V_1), _stringLiteralD69DC64FC4F6DE35F4724F37BDA6EC753668890E, NULL);
				TField_set_Type_m2AA4AF23C96A26CB269B78B067489E10F055E983_inline((&V_1), ((int32_t)10), NULL);
				TField_set_ID_m68843CC49A2A49966729F299A58A2BBC6FCC4F01_inline((&V_1), (int16_t)5, NULL);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_26 = ___oprot0;
				TField_tF4D9D8EFE767C142914693E0E787547F0213D334 L_27 = V_1;
				NullCheck(L_26);
				VirtualActionInvoker1< TField_tF4D9D8EFE767C142914693E0E787547F0213D334 >::Invoke(10 /* System.Void Thrift.Protocol.TProtocol::WriteFieldBegin(Thrift.Protocol.TField) */, L_26, L_27);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_28 = ___oprot0;
				int64_t L_29;
				L_29 = SharedTex_get_ProcId_m7C71069F0E08FD9343B3F9EE84DBD65BBC16F4A8_inline(__this, NULL);
				NullCheck(L_28);
				VirtualActionInvoker1< int64_t >::Invoke(23 /* System.Void Thrift.Protocol.TProtocol::WriteI64(System.Int64) */, L_28, L_29);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_30 = ___oprot0;
				NullCheck(L_30);
				VirtualActionInvoker0::Invoke(11 /* System.Void Thrift.Protocol.TProtocol::WriteFieldEnd() */, L_30);
			}

IL_0139_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_31 = ___oprot0;
				NullCheck(L_31);
				VirtualActionInvoker0::Invoke(12 /* System.Void Thrift.Protocol.TProtocol::WriteFieldStop() */, L_31);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_32 = ___oprot0;
				NullCheck(L_32);
				VirtualActionInvoker0::Invoke(9 /* System.Void Thrift.Protocol.TProtocol::WriteStructEnd() */, L_32);
				goto IL_014e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_014e:
	{
		return;
	}
}
// System.String BlueprintReality.Thrift.SharedTextures.SharedTex::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SharedTex_ToString_mE0AEA5B45EAB2A8C418775A292831C1F8A89CD37 (SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1096A65EDDE63ED1ED76B33F9E1D52D2AF482226);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1BC1A43957A04A666A3E7FEC33B09D676B2567E5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5F23ACC007DA2F22C4D1F07EE4DDA7EADE20E6B7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88A4D7C549CF41E707F240A70CF3C7DFA873394E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF0D4F80B8DB2C1613C528F8D6A7678E0B0184502);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF2E0CCD0E8602CF6B0F3DFDF34C502EDE62AC2B3);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_mCD797D942316CB356205FD96415B0B7581CDAD60(L_0, _stringLiteralF0D4F80B8DB2C1613C528F8D6A7678E0B0184502, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_1, _stringLiteral88A4D7C549CF41E707F240A70CF3C7DFA873394E, NULL);
		StringBuilder_t* L_3 = V_0;
		int64_t L_4;
		L_4 = SharedTex_get_Handle_m512729E37878AE923590D2256A68A2A0BD12FCE2_inline(__this, NULL);
		NullCheck(L_3);
		StringBuilder_t* L_5;
		L_5 = StringBuilder_Append_m66A74F455BDFDC3C9ED2D8E1BA4C3A093637C3D8(L_3, L_4, NULL);
		StringBuilder_t* L_6 = V_0;
		NullCheck(L_6);
		StringBuilder_t* L_7;
		L_7 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_6, _stringLiteral1096A65EDDE63ED1ED76B33F9E1D52D2AF482226, NULL);
		StringBuilder_t* L_8 = V_0;
		int32_t L_9;
		L_9 = SharedTex_get_Width_m729E44044DC62A766A6116F92F36EC97B9D30EEA_inline(__this, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_10;
		L_10 = StringBuilder_Append_m283B617AC29FB0DD6F3A7D8C01D385C25A5F0FAA(L_8, L_9, NULL);
		StringBuilder_t* L_11 = V_0;
		NullCheck(L_11);
		StringBuilder_t* L_12;
		L_12 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_11, _stringLiteralF2E0CCD0E8602CF6B0F3DFDF34C502EDE62AC2B3, NULL);
		StringBuilder_t* L_13 = V_0;
		int32_t L_14;
		L_14 = SharedTex_get_Height_m70CB07877DEC6388E8003B6505EE22A03730B064_inline(__this, NULL);
		NullCheck(L_13);
		StringBuilder_t* L_15;
		L_15 = StringBuilder_Append_m283B617AC29FB0DD6F3A7D8C01D385C25A5F0FAA(L_13, L_14, NULL);
		StringBuilder_t* L_16 = V_0;
		NullCheck(L_16);
		StringBuilder_t* L_17;
		L_17 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_16, _stringLiteral5F23ACC007DA2F22C4D1F07EE4DDA7EADE20E6B7, NULL);
		StringBuilder_t* L_18 = V_0;
		int32_t L_19;
		L_19 = SharedTex_get_Format_m11E0F3EB90F0884DCE26AF618D539534804B0F3B_inline(__this, NULL);
		NullCheck(L_18);
		StringBuilder_t* L_20;
		L_20 = StringBuilder_Append_m283B617AC29FB0DD6F3A7D8C01D385C25A5F0FAA(L_18, L_19, NULL);
		Isset_t3C0D7B75B364660D65CE6F217C2593D024089C7C* L_21 = (&__this->_____isset_5);
		bool L_22 = L_21->___procId_0;
		if (!L_22)
		{
			goto IL_0095;
		}
	}
	{
		StringBuilder_t* L_23 = V_0;
		NullCheck(L_23);
		StringBuilder_t* L_24;
		L_24 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_23, _stringLiteral1BC1A43957A04A666A3E7FEC33B09D676B2567E5, NULL);
		StringBuilder_t* L_25 = V_0;
		int64_t L_26;
		L_26 = SharedTex_get_ProcId_m7C71069F0E08FD9343B3F9EE84DBD65BBC16F4A8_inline(__this, NULL);
		NullCheck(L_25);
		StringBuilder_t* L_27;
		L_27 = StringBuilder_Append_m66A74F455BDFDC3C9ED2D8E1BA4C3A093637C3D8(L_25, L_26, NULL);
	}

IL_0095:
	{
		StringBuilder_t* L_28 = V_0;
		NullCheck(L_28);
		StringBuilder_t* L_29;
		L_29 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_28, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D, NULL);
		StringBuilder_t* L_30 = V_0;
		NullCheck(L_30);
		String_t* L_31;
		L_31 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_30);
		return L_31;
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
// Conversion methods for marshalling of: BlueprintReality.Thrift.SharedTextures.SharedTex/Isset
IL2CPP_EXTERN_C void Isset_t3C0D7B75B364660D65CE6F217C2593D024089C7C_marshal_pinvoke(const Isset_t3C0D7B75B364660D65CE6F217C2593D024089C7C& unmarshaled, Isset_t3C0D7B75B364660D65CE6F217C2593D024089C7C_marshaled_pinvoke& marshaled)
{
	marshaled.___procId_0 = static_cast<int32_t>(unmarshaled.___procId_0);
}
IL2CPP_EXTERN_C void Isset_t3C0D7B75B364660D65CE6F217C2593D024089C7C_marshal_pinvoke_back(const Isset_t3C0D7B75B364660D65CE6F217C2593D024089C7C_marshaled_pinvoke& marshaled, Isset_t3C0D7B75B364660D65CE6F217C2593D024089C7C& unmarshaled)
{
	bool unmarshaledprocId_temp_0 = false;
	unmarshaledprocId_temp_0 = static_cast<bool>(marshaled.___procId_0);
	unmarshaled.___procId_0 = unmarshaledprocId_temp_0;
}
// Conversion method for clean up from marshalling of: BlueprintReality.Thrift.SharedTextures.SharedTex/Isset
IL2CPP_EXTERN_C void Isset_t3C0D7B75B364660D65CE6F217C2593D024089C7C_marshal_pinvoke_cleanup(Isset_t3C0D7B75B364660D65CE6F217C2593D024089C7C_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: BlueprintReality.Thrift.SharedTextures.SharedTex/Isset
IL2CPP_EXTERN_C void Isset_t3C0D7B75B364660D65CE6F217C2593D024089C7C_marshal_com(const Isset_t3C0D7B75B364660D65CE6F217C2593D024089C7C& unmarshaled, Isset_t3C0D7B75B364660D65CE6F217C2593D024089C7C_marshaled_com& marshaled)
{
	marshaled.___procId_0 = static_cast<int32_t>(unmarshaled.___procId_0);
}
IL2CPP_EXTERN_C void Isset_t3C0D7B75B364660D65CE6F217C2593D024089C7C_marshal_com_back(const Isset_t3C0D7B75B364660D65CE6F217C2593D024089C7C_marshaled_com& marshaled, Isset_t3C0D7B75B364660D65CE6F217C2593D024089C7C& unmarshaled)
{
	bool unmarshaledprocId_temp_0 = false;
	unmarshaledprocId_temp_0 = static_cast<bool>(marshaled.___procId_0);
	unmarshaled.___procId_0 = unmarshaledprocId_temp_0;
}
// Conversion method for clean up from marshalling of: BlueprintReality.Thrift.SharedTextures.SharedTex/Isset
IL2CPP_EXTERN_C void Isset_t3C0D7B75B364660D65CE6F217C2593D024089C7C_marshal_com_cleanup(Isset_t3C0D7B75B364660D65CE6F217C2593D024089C7C_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String BlueprintReality.Thrift.SharedTextures.SharedTexPacket::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SharedTexPacket_get_Id_m5FE5414EDEBCE9DA3BC724D203885330ACA76A87 (SharedTexPacket_t06FC19BA6F5C2223EECB4BF1BE34A8360027D77A* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CIdU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTexPacket::set_Id(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharedTexPacket_set_Id_m7C4487D389DD64041C52C6BEB41FE4839BFD81A9 (SharedTexPacket_t06FC19BA6F5C2223EECB4BF1BE34A8360027D77A* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CIdU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIdU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// BlueprintReality.Thrift.SharedTextures.SharedTex BlueprintReality.Thrift.SharedTextures.SharedTexPacket::get_Info()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976* SharedTexPacket_get_Info_m6EFB0E927254E4032EEC2C478E4D7716C8F8FA06 (SharedTexPacket_t06FC19BA6F5C2223EECB4BF1BE34A8360027D77A* __this, const RuntimeMethod* method) 
{
	{
		SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976* L_0 = __this->___U3CInfoU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTexPacket::set_Info(BlueprintReality.Thrift.SharedTextures.SharedTex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharedTexPacket_set_Info_mD3B5E5EBE579216D792AF75ED3785E85D410C0F1 (SharedTexPacket_t06FC19BA6F5C2223EECB4BF1BE34A8360027D77A* __this, SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976* ___value0, const RuntimeMethod* method) 
{
	{
		SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976* L_0 = ___value0;
		__this->___U3CInfoU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CInfoU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTexPacket::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharedTexPacket__ctor_m9A285F7D5DAC7A36607AE9AF882D9002D4675B54 (SharedTexPacket_t06FC19BA6F5C2223EECB4BF1BE34A8360027D77A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTexPacket::.ctor(System.String,BlueprintReality.Thrift.SharedTextures.SharedTex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharedTexPacket__ctor_m2689B159B21FE7592B4D04A0D2B22BF1C46357DC (SharedTexPacket_t06FC19BA6F5C2223EECB4BF1BE34A8360027D77A* __this, String_t* ___id0, SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976* ___info1, const RuntimeMethod* method) 
{
	{
		SharedTexPacket__ctor_m9A285F7D5DAC7A36607AE9AF882D9002D4675B54(__this, NULL);
		String_t* L_0 = ___id0;
		SharedTexPacket_set_Id_m7C4487D389DD64041C52C6BEB41FE4839BFD81A9_inline(__this, L_0, NULL);
		SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976* L_1 = ___info1;
		SharedTexPacket_set_Info_mD3B5E5EBE579216D792AF75ED3785E85D410C0F1_inline(__this, L_1, NULL);
		return;
	}
}
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTexPacket::Read(Thrift.Protocol.TProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharedTexPacket_Read_mBE851F4D59634A8AEF85388A15C066150E47A41B (SharedTexPacket_t06FC19BA6F5C2223EECB4BF1BE34A8360027D77A* __this, TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* ___iprot0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	TField_tF4D9D8EFE767C142914693E0E787547F0213D334 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int16_t V_3 = 0;
	{
		TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_0 = ___iprot0;
		NullCheck(L_0);
		TProtocol_IncrementRecursionDepth_m92B440A7308F6D7012C73B74A6406855A29FF58B(L_0, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d3:
			{// begin finally (depth: 1)
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_1 = ___iprot0;
				NullCheck(L_1);
				TProtocol_DecrementRecursionDepth_m049900374B8368A8AEB03E6FC93DF288EA1BE44B(L_1, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				V_0 = (bool)0;
				V_1 = (bool)0;
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_2 = ___iprot0;
				NullCheck(L_2);
				TStruct_tAD67F1F0C45235334F9440B6A587DB03A0CE5C96 L_3;
				L_3 = VirtualFuncInvoker0< TStruct_tAD67F1F0C45235334F9440B6A587DB03A0CE5C96 >::Invoke(29 /* Thrift.Protocol.TStruct Thrift.Protocol.TProtocol::ReadStructBegin() */, L_2);
			}

IL_0011_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_4 = ___iprot0;
				NullCheck(L_4);
				TField_tF4D9D8EFE767C142914693E0E787547F0213D334 L_5;
				L_5 = VirtualFuncInvoker0< TField_tF4D9D8EFE767C142914693E0E787547F0213D334 >::Invoke(31 /* Thrift.Protocol.TField Thrift.Protocol.TProtocol::ReadFieldBegin() */, L_4);
				V_2 = L_5;
				uint8_t L_6;
				L_6 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_2), NULL);
				if (!L_6)
				{
					goto IL_00ad_1;
				}
			}
			{
				int16_t L_7;
				L_7 = TField_get_ID_m512A7F246CCD70AD2C473FA5AF09E6ECC8AB8B1A_inline((&V_2), NULL);
				V_3 = L_7;
				int16_t L_8 = V_3;
				if ((((int32_t)L_8) == ((int32_t)1)))
				{
					goto IL_0036_1;
				}
			}
			{
				int16_t L_9 = V_3;
				if ((((int32_t)L_9) == ((int32_t)2)))
				{
					goto IL_0060_1;
				}
			}
			{
				goto IL_0095_1;
			}

IL_0036_1:
			{
				uint8_t L_10;
				L_10 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_2), NULL);
				if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)11)))))
				{
					goto IL_0051_1;
				}
			}
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_11 = ___iprot0;
				NullCheck(L_11);
				String_t* L_12;
				L_12 = VirtualFuncInvoker0< String_t* >::Invoke(45 /* System.String Thrift.Protocol.TProtocol::ReadString() */, L_11);
				SharedTexPacket_set_Id_m7C4487D389DD64041C52C6BEB41FE4839BFD81A9_inline(__this, L_12, NULL);
				V_0 = (bool)1;
				goto IL_00a2_1;
			}

IL_0051_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_13 = ___iprot0;
				uint8_t L_14;
				L_14 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_2), NULL);
				TProtocolUtil_Skip_m61E2B7C700479ECC6AD4E86636C1235C30B5A38F(L_13, L_14, NULL);
				goto IL_00a2_1;
			}

IL_0060_1:
			{
				uint8_t L_15;
				L_15 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_2), NULL);
				if ((!(((uint32_t)L_15) == ((uint32_t)((int32_t)12)))))
				{
					goto IL_0086_1;
				}
			}
			{
				SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976* L_16 = (SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976*)il2cpp_codegen_object_new(SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976_il2cpp_TypeInfo_var);
				NullCheck(L_16);
				SharedTex__ctor_mC7D5C44C0B80565EA90810EF90B805522833E07A(L_16, NULL);
				SharedTexPacket_set_Info_mD3B5E5EBE579216D792AF75ED3785E85D410C0F1_inline(__this, L_16, NULL);
				SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976* L_17;
				L_17 = SharedTexPacket_get_Info_m6EFB0E927254E4032EEC2C478E4D7716C8F8FA06_inline(__this, NULL);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_18 = ___iprot0;
				NullCheck(L_17);
				SharedTex_Read_m5BE8C4C9683CCC19736B2D4AD65E8F85AB14E155(L_17, L_18, NULL);
				V_1 = (bool)1;
				goto IL_00a2_1;
			}

IL_0086_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_19 = ___iprot0;
				uint8_t L_20;
				L_20 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_2), NULL);
				TProtocolUtil_Skip_m61E2B7C700479ECC6AD4E86636C1235C30B5A38F(L_19, L_20, NULL);
				goto IL_00a2_1;
			}

IL_0095_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_21 = ___iprot0;
				uint8_t L_22;
				L_22 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_2), NULL);
				TProtocolUtil_Skip_m61E2B7C700479ECC6AD4E86636C1235C30B5A38F(L_21, L_22, NULL);
			}

IL_00a2_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_23 = ___iprot0;
				NullCheck(L_23);
				VirtualActionInvoker0::Invoke(32 /* System.Void Thrift.Protocol.TProtocol::ReadFieldEnd() */, L_23);
				goto IL_0011_1;
			}

IL_00ad_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_24 = ___iprot0;
				NullCheck(L_24);
				VirtualActionInvoker0::Invoke(30 /* System.Void Thrift.Protocol.TProtocol::ReadStructEnd() */, L_24);
				bool L_25 = V_0;
				if (L_25)
				{
					goto IL_00c2_1;
				}
			}
			{
				TProtocolException_t69B81CDFF3E6D584BC54665AB6BAD9593BC21996* L_26 = (TProtocolException_t69B81CDFF3E6D584BC54665AB6BAD9593BC21996*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TProtocolException_t69B81CDFF3E6D584BC54665AB6BAD9593BC21996_il2cpp_TypeInfo_var)));
				NullCheck(L_26);
				TProtocolException__ctor_m490B7FD7AC0D57E9B14D079A63C015546F109C7A(L_26, 1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2884CFD648C6122184D887797373AFF335AF76A6)), NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_26, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SharedTexPacket_Read_mBE851F4D59634A8AEF85388A15C066150E47A41B_RuntimeMethod_var)));
			}

IL_00c2_1:
			{
				bool L_27 = V_1;
				if (L_27)
				{
					goto IL_00d1_1;
				}
			}
			{
				TProtocolException_t69B81CDFF3E6D584BC54665AB6BAD9593BC21996* L_28 = (TProtocolException_t69B81CDFF3E6D584BC54665AB6BAD9593BC21996*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TProtocolException_t69B81CDFF3E6D584BC54665AB6BAD9593BC21996_il2cpp_TypeInfo_var)));
				NullCheck(L_28);
				TProtocolException__ctor_m490B7FD7AC0D57E9B14D079A63C015546F109C7A(L_28, 1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral873FD96ED8DB682306E0CC444B829681DA5075A9)), NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_28, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SharedTexPacket_Read_mBE851F4D59634A8AEF85388A15C066150E47A41B_RuntimeMethod_var)));
			}

IL_00d1_1:
			{
				goto IL_00da;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00da:
	{
		return;
	}
}
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTexPacket::Write(Thrift.Protocol.TProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharedTexPacket_Write_m0855F55DE37D38219184ED4AA27F6A94CBE2A443 (SharedTexPacket_t06FC19BA6F5C2223EECB4BF1BE34A8360027D77A* __this, TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* ___oprot0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral030873E7494E751C9468907B6090838BF9C450E8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085);
		s_Il2CppMethodInitialized = true;
	}
	TStruct_tAD67F1F0C45235334F9440B6A587DB03A0CE5C96 V_0;
	memset((&V_0), 0, sizeof(V_0));
	TField_tF4D9D8EFE767C142914693E0E787547F0213D334 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_0 = ___oprot0;
		NullCheck(L_0);
		TProtocol_IncrementRecursionDepth_m92B440A7308F6D7012C73B74A6406855A29FF58B(L_0, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00c3:
			{// begin finally (depth: 1)
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_1 = ___oprot0;
				NullCheck(L_1);
				TProtocol_DecrementRecursionDepth_m049900374B8368A8AEB03E6FC93DF288EA1BE44B(L_1, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				TStruct__ctor_mD56EA112D651038138D3BC7203C3606718E5CB3F((&V_0), _stringLiteral030873E7494E751C9468907B6090838BF9C450E8, NULL);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_2 = ___oprot0;
				TStruct_tAD67F1F0C45235334F9440B6A587DB03A0CE5C96 L_3 = V_0;
				NullCheck(L_2);
				VirtualActionInvoker1< TStruct_tAD67F1F0C45235334F9440B6A587DB03A0CE5C96 >::Invoke(8 /* System.Void Thrift.Protocol.TProtocol::WriteStructBegin(Thrift.Protocol.TStruct) */, L_2, L_3);
				il2cpp_codegen_initobj((&V_1), sizeof(TField_tF4D9D8EFE767C142914693E0E787547F0213D334));
				String_t* L_4;
				L_4 = SharedTexPacket_get_Id_m5FE5414EDEBCE9DA3BC724D203885330ACA76A87_inline(__this, NULL);
				if (L_4)
				{
					goto IL_0035_1;
				}
			}
			{
				TProtocolException_t69B81CDFF3E6D584BC54665AB6BAD9593BC21996* L_5 = (TProtocolException_t69B81CDFF3E6D584BC54665AB6BAD9593BC21996*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TProtocolException_t69B81CDFF3E6D584BC54665AB6BAD9593BC21996_il2cpp_TypeInfo_var)));
				NullCheck(L_5);
				TProtocolException__ctor_m490B7FD7AC0D57E9B14D079A63C015546F109C7A(L_5, 1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2884CFD648C6122184D887797373AFF335AF76A6)), NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SharedTexPacket_Write_m0855F55DE37D38219184ED4AA27F6A94CBE2A443_RuntimeMethod_var)));
			}

IL_0035_1:
			{
				TField_set_Name_mAD35FC0847F990535FAF3E3032CD117B560AF751_inline((&V_1), _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694, NULL);
				TField_set_Type_m2AA4AF23C96A26CB269B78B067489E10F055E983_inline((&V_1), ((int32_t)11), NULL);
				TField_set_ID_m68843CC49A2A49966729F299A58A2BBC6FCC4F01_inline((&V_1), (int16_t)1, NULL);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_6 = ___oprot0;
				TField_tF4D9D8EFE767C142914693E0E787547F0213D334 L_7 = V_1;
				NullCheck(L_6);
				VirtualActionInvoker1< TField_tF4D9D8EFE767C142914693E0E787547F0213D334 >::Invoke(10 /* System.Void Thrift.Protocol.TProtocol::WriteFieldBegin(Thrift.Protocol.TField) */, L_6, L_7);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_8 = ___oprot0;
				String_t* L_9;
				L_9 = SharedTexPacket_get_Id_m5FE5414EDEBCE9DA3BC724D203885330ACA76A87_inline(__this, NULL);
				NullCheck(L_8);
				VirtualActionInvoker1< String_t* >::Invoke(25 /* System.Void Thrift.Protocol.TProtocol::WriteString(System.String) */, L_8, L_9);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_10 = ___oprot0;
				NullCheck(L_10);
				VirtualActionInvoker0::Invoke(11 /* System.Void Thrift.Protocol.TProtocol::WriteFieldEnd() */, L_10);
				SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976* L_11;
				L_11 = SharedTexPacket_get_Info_m6EFB0E927254E4032EEC2C478E4D7716C8F8FA06_inline(__this, NULL);
				if (L_11)
				{
					goto IL_007f_1;
				}
			}
			{
				TProtocolException_t69B81CDFF3E6D584BC54665AB6BAD9593BC21996* L_12 = (TProtocolException_t69B81CDFF3E6D584BC54665AB6BAD9593BC21996*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TProtocolException_t69B81CDFF3E6D584BC54665AB6BAD9593BC21996_il2cpp_TypeInfo_var)));
				NullCheck(L_12);
				TProtocolException__ctor_m490B7FD7AC0D57E9B14D079A63C015546F109C7A(L_12, 1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral873FD96ED8DB682306E0CC444B829681DA5075A9)), NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SharedTexPacket_Write_m0855F55DE37D38219184ED4AA27F6A94CBE2A443_RuntimeMethod_var)));
			}

IL_007f_1:
			{
				TField_set_Name_mAD35FC0847F990535FAF3E3032CD117B560AF751_inline((&V_1), _stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085, NULL);
				TField_set_Type_m2AA4AF23C96A26CB269B78B067489E10F055E983_inline((&V_1), ((int32_t)12), NULL);
				TField_set_ID_m68843CC49A2A49966729F299A58A2BBC6FCC4F01_inline((&V_1), (int16_t)2, NULL);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_13 = ___oprot0;
				TField_tF4D9D8EFE767C142914693E0E787547F0213D334 L_14 = V_1;
				NullCheck(L_13);
				VirtualActionInvoker1< TField_tF4D9D8EFE767C142914693E0E787547F0213D334 >::Invoke(10 /* System.Void Thrift.Protocol.TProtocol::WriteFieldBegin(Thrift.Protocol.TField) */, L_13, L_14);
				SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976* L_15;
				L_15 = SharedTexPacket_get_Info_m6EFB0E927254E4032EEC2C478E4D7716C8F8FA06_inline(__this, NULL);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_16 = ___oprot0;
				NullCheck(L_15);
				SharedTex_Write_m23E04FE4F1A2D9D73B407EE38D0C78E284972C26(L_15, L_16, NULL);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_17 = ___oprot0;
				NullCheck(L_17);
				VirtualActionInvoker0::Invoke(11 /* System.Void Thrift.Protocol.TProtocol::WriteFieldEnd() */, L_17);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_18 = ___oprot0;
				NullCheck(L_18);
				VirtualActionInvoker0::Invoke(12 /* System.Void Thrift.Protocol.TProtocol::WriteFieldStop() */, L_18);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_19 = ___oprot0;
				NullCheck(L_19);
				VirtualActionInvoker0::Invoke(9 /* System.Void Thrift.Protocol.TProtocol::WriteStructEnd() */, L_19);
				goto IL_00ca;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00ca:
	{
		return;
	}
}
// System.String BlueprintReality.Thrift.SharedTextures.SharedTexPacket::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SharedTexPacket_ToString_m0168F0E0C848389E30B88965D2CA8F30CC38DFF8 (SharedTexPacket_t06FC19BA6F5C2223EECB4BF1BE34A8360027D77A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D16145F02876CAE3030E757DA8EE07A2EFD779A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4C20E4AC355571E50DF7E48E77F0CF04B4BC5C87);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA58748AD3096ED0E9502325825424B0432074D0F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD64DE515DE159C401BB82652225D6BE22CDAD7A1);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* G_B2_0 = NULL;
	StringBuilder_t* G_B2_1 = NULL;
	StringBuilder_t* G_B1_0 = NULL;
	StringBuilder_t* G_B1_1 = NULL;
	String_t* G_B3_0 = NULL;
	StringBuilder_t* G_B3_1 = NULL;
	StringBuilder_t* G_B3_2 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_mCD797D942316CB356205FD96415B0B7581CDAD60(L_0, _stringLiteral4C20E4AC355571E50DF7E48E77F0CF04B4BC5C87, NULL);
		StringBuilder_t* L_1 = L_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_1, _stringLiteralA58748AD3096ED0E9502325825424B0432074D0F, NULL);
		StringBuilder_t* L_3 = L_1;
		String_t* L_4;
		L_4 = SharedTexPacket_get_Id_m5FE5414EDEBCE9DA3BC724D203885330ACA76A87_inline(__this, NULL);
		NullCheck(L_3);
		StringBuilder_t* L_5;
		L_5 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_3, L_4, NULL);
		StringBuilder_t* L_6 = L_3;
		NullCheck(L_6);
		StringBuilder_t* L_7;
		L_7 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_6, _stringLiteral1D16145F02876CAE3030E757DA8EE07A2EFD779A, NULL);
		StringBuilder_t* L_8 = L_6;
		SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976* L_9;
		L_9 = SharedTexPacket_get_Info_m6EFB0E927254E4032EEC2C478E4D7716C8F8FA06_inline(__this, NULL);
		G_B1_0 = L_8;
		G_B1_1 = L_8;
		if (!L_9)
		{
			G_B2_0 = L_8;
			G_B2_1 = L_8;
			goto IL_0045;
		}
	}
	{
		SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976* L_10;
		L_10 = SharedTexPacket_get_Info_m6EFB0E927254E4032EEC2C478E4D7716C8F8FA06_inline(__this, NULL);
		NullCheck(L_10);
		String_t* L_11;
		L_11 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_10);
		G_B3_0 = L_11;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_004a;
	}

IL_0045:
	{
		G_B3_0 = _stringLiteralD64DE515DE159C401BB82652225D6BE22CDAD7A1;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_004a:
	{
		NullCheck(G_B3_1);
		StringBuilder_t* L_12;
		L_12 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(G_B3_1, G_B3_0, NULL);
		StringBuilder_t* L_13 = G_B3_2;
		NullCheck(L_13);
		StringBuilder_t* L_14;
		L_14 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_13, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D, NULL);
		NullCheck(L_13);
		String_t* L_15;
		L_15 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_13);
		return L_15;
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
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharedTextureCommunication__ctor_m8711D5DAA97A6C452A5EC00EC292B2292C188664 (SharedTextureCommunication_tD3182824E24A1E8B3808CF804E1FE611AA1AB07F* __this, const RuntimeMethod* method) 
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
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/Handler::validate_ping()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Handler_validate_ping_m0D565C8AFF2B837C7067366AB3105F26C4A49473 (Handler_tB89C973D453690A6B464CB04BF66AB42906A9C57* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Collections.Generic.List`1<System.String> BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/Handler::validate_function_list()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* Handler_validate_function_list_m7595FF70066A5E32264575D08C6E38674B403E06 (Handler_tB89C973D453690A6B464CB04BF66AB42906A9C57* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral055D976DFFFE69BAA555F56066A8B22EF01EE72E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C9F0462C280DB50287DB739E320C5C2346AB984);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral889E65D7381A6F39280C120B9BAC654F54524267);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB0EC4068BCF9FD745CA5FDE39E8B794AF039A119);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_0, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1 = L_0;
		NullCheck(L_1);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_1, _stringLiteral889E65D7381A6F39280C120B9BAC654F54524267, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_2 = L_1;
		NullCheck(L_2);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_2, _stringLiteralB0EC4068BCF9FD745CA5FDE39E8B794AF039A119, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_3 = L_2;
		NullCheck(L_3);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_3, _stringLiteral055D976DFFFE69BAA555F56066A8B22EF01EE72E, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_4 = L_3;
		NullCheck(L_4);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_4, _stringLiteral5C9F0462C280DB50287DB739E320C5C2346AB984, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		return L_4;
	}
}
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/Handler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Handler__ctor_m23A04A318453D826659189B97DF87138D5DA5CA5 (Handler_tB89C973D453690A6B464CB04BF66AB42906A9C57* __this, const RuntimeMethod* method) 
{
	{
		HandlerProxy__ctor_mB0C5F0A4A9FF78103113D6EE93F4E0696C3B2B08(__this, NULL);
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
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/Client::.ctor(Thrift.Protocol.TProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client__ctor_m8205EDC3D0E61E8AB3A79F8EB4C390264DE6432D (Client_t68F64069A7A7D460F7158797D2F5C0C22676FFA6* __this, TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* ___prot0, const RuntimeMethod* method) 
{
	{
		TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_0 = ___prot0;
		TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_1 = ___prot0;
		Client__ctor_mC0129BEEDCB34A5B58AF97C2948120C9B948E63E(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/Client::.ctor(Thrift.Protocol.TProtocol,Thrift.Protocol.TProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client__ctor_mC0129BEEDCB34A5B58AF97C2948120C9B948E63E (Client_t68F64069A7A7D460F7158797D2F5C0C22676FFA6* __this, TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* ___iprot0, TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* ___oprot1, const RuntimeMethod* method) 
{
	{
		ClientProxy__ctor_m96A8DD4C21191FAD4D8BA8A5861D6BF94D0E8B40(__this, NULL);
		TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_0 = ___iprot0;
		__this->___iprot__1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___iprot__1), (void*)L_0);
		TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_1 = ___oprot1;
		__this->___oprot__2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___oprot__2), (void*)L_1);
		return;
	}
}
// Thrift.Protocol.TProtocol BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/Client::get_InputProtocol()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* Client_get_InputProtocol_mE4633D31616979AF8509D44C60A8B6A648C8665D (Client_t68F64069A7A7D460F7158797D2F5C0C22676FFA6* __this, const RuntimeMethod* method) 
{
	{
		TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_0 = __this->___iprot__1;
		return L_0;
	}
}
// Thrift.Protocol.TProtocol BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/Client::get_OutputProtocol()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* Client_get_OutputProtocol_m815299F3CBBD2C8C49DB916000E5389F1204519C (Client_t68F64069A7A7D460F7158797D2F5C0C22676FFA6* __this, const RuntimeMethod* method) 
{
	{
		TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_0 = __this->___oprot__2;
		return L_0;
	}
}
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/Client::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_Dispose_m253ACE1005D0A1F97DC42AB321988995BEE9CE2F (Client_t68F64069A7A7D460F7158797D2F5C0C22676FFA6* __this, const RuntimeMethod* method) 
{
	{
		VirtualActionInvoker1< bool >::Invoke(7 /* System.Void BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/Client::Dispose(System.Boolean) */, __this, (bool)1);
		return;
	}
}
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/Client::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_Dispose_m82D438C690095DF5579C743D4E887F528A34135E (Client_t68F64069A7A7D460F7158797D2F5C0C22676FFA6* __this, bool ___disposing0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->____IsDisposed_4;
		if (L_0)
		{
			goto IL_0031;
		}
	}
	{
		bool L_1 = ___disposing0;
		if (!L_1)
		{
			goto IL_0031;
		}
	}
	{
		TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_2 = __this->___iprot__1;
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_3 = __this->___iprot__1;
		NullCheck(L_3);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
	}

IL_001e:
	{
		TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_4 = __this->___oprot__2;
		if (!L_4)
		{
			goto IL_0031;
		}
	}
	{
		TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_5 = __this->___oprot__2;
		NullCheck(L_5);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
	}

IL_0031:
	{
		__this->____IsDisposed_4 = (bool)1;
		return;
	}
}
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/Client::validate_ping()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_validate_ping_m7A98CD623B46013CE5AD47CDC1369B5DB39773CA (Client_t68F64069A7A7D460F7158797D2F5C0C22676FFA6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral889E65D7381A6F39280C120B9BAC654F54524267);
		s_Il2CppMethodInitialized = true;
	}
	{
		ThriftClientProxy_t4F7653DE6E5210BC005CA0FE2F734E635558EC56* L_0 = ((ClientProxy_tCAB2A9A0BF231DDF8E4924E77E1208C917FC0718*)__this)->___clientProxy_0;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		ThriftClientProxy_t4F7653DE6E5210BC005CA0FE2F734E635558EC56* L_1 = ((ClientProxy_tCAB2A9A0BF231DDF8E4924E77E1208C917FC0718*)__this)->___clientProxy_0;
		NullCheck(L_1);
		bool L_2;
		L_2 = ThriftClientProxy_Ensure_mD17F2E31BB5AA9A2A55E95298347E8C69DA7548C(L_1, _stringLiteral889E65D7381A6F39280C120B9BAC654F54524267, NULL);
		if (L_2)
		{
			goto IL_0021;
		}
	}

IL_001a:
	{
		TTransportException_t7BA88D1856162445F81B5F26DB19EE932E6AAF4B* L_3 = (TTransportException_t7BA88D1856162445F81B5F26DB19EE932E6AAF4B*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TTransportException_t7BA88D1856162445F81B5F26DB19EE932E6AAF4B_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		TTransportException__ctor_m411610E6ABEB5C2CA0D9C8B385438F8DDB7F4E60(L_3, 5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Client_validate_ping_m7A98CD623B46013CE5AD47CDC1369B5DB39773CA_RuntimeMethod_var)));
	}

IL_0021:
	{
		Client_send_validate_ping_m6031BB020D9415FBB481F547E20C5E911EE67E46(__this, NULL);
		Client_recv_validate_ping_mBF78474403E295887EB8193A26514D191A4F3901(__this, NULL);
		return;
	}
}
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/Client::send_validate_ping()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_send_validate_ping_m6031BB020D9415FBB481F547E20C5E911EE67E46 (Client_t68F64069A7A7D460F7158797D2F5C0C22676FFA6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral889E65D7381A6F39280C120B9BAC654F54524267);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&validate_ping_args_t14208A7DFB4229A49964DD8F10489711F552E9DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_0 = __this->___oprot__2;
		int32_t L_1 = __this->___seqid__3;
		TMessage_tA7EE1296176D302DA8CB5201A04319D8D3B44043 L_2;
		memset((&L_2), 0, sizeof(L_2));
		TMessage__ctor_m73265A5C74D3D787AAE27FB7A459580C8637D809((&L_2), _stringLiteral889E65D7381A6F39280C120B9BAC654F54524267, 1, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< TMessage_tA7EE1296176D302DA8CB5201A04319D8D3B44043 >::Invoke(6 /* System.Void Thrift.Protocol.TProtocol::WriteMessageBegin(Thrift.Protocol.TMessage) */, L_0, L_2);
		validate_ping_args_t14208A7DFB4229A49964DD8F10489711F552E9DE* L_3 = (validate_ping_args_t14208A7DFB4229A49964DD8F10489711F552E9DE*)il2cpp_codegen_object_new(validate_ping_args_t14208A7DFB4229A49964DD8F10489711F552E9DE_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		validate_ping_args__ctor_m9214D825B8CBA702E7B487F332361B4E05C4407E(L_3, NULL);
		TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_4 = __this->___oprot__2;
		NullCheck(L_3);
		validate_ping_args_Write_m8935EBA82F2F866A47AEEEABF806816B31161B34(L_3, L_4, NULL);
		TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_5 = __this->___oprot__2;
		NullCheck(L_5);
		VirtualActionInvoker0::Invoke(7 /* System.Void Thrift.Protocol.TProtocol::WriteMessageEnd() */, L_5);
		TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_6 = __this->___oprot__2;
		NullCheck(L_6);
		TTransport_tC5405D0CBA5B6B81DF71447B64F47F76B45C6A53* L_7;
		L_7 = TProtocol_get_Transport_mDD6E0B1DB55B839D353BA90016FE48CAAE91609A_inline(L_6, NULL);
		NullCheck(L_7);
		VirtualActionInvoker0::Invoke(11 /* System.Void Thrift.Transport.TTransport::Flush() */, L_7);
		return;
	}
}
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/Client::recv_validate_ping()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_recv_validate_ping_mBF78474403E295887EB8193A26514D191A4F3901 (Client_t68F64069A7A7D460F7158797D2F5C0C22676FFA6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&validate_ping_result_t0CBE71D3C54F5CABE445DD8EAD534613297BB0C0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TMessage_tA7EE1296176D302DA8CB5201A04319D8D3B44043 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_0 = __this->___iprot__1;
		NullCheck(L_0);
		TMessage_tA7EE1296176D302DA8CB5201A04319D8D3B44043 L_1;
		L_1 = VirtualFuncInvoker0< TMessage_tA7EE1296176D302DA8CB5201A04319D8D3B44043 >::Invoke(27 /* Thrift.Protocol.TMessage Thrift.Protocol.TProtocol::ReadMessageBegin() */, L_0);
		V_0 = L_1;
		int32_t L_2;
		L_2 = TMessage_get_Type_m3424E30FC2CE9DA5A36D300E20D383AF42EE16B9_inline((&V_0), NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)3))))
		{
			goto IL_002d;
		}
	}
	{
		TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_3 = __this->___iprot__1;
		TApplicationException_t75465AADA2A50020180483E1F89A83530AD60F76* L_4;
		L_4 = TApplicationException_Read_mD0354E98F032A7FECFA83774099D49265D5E4111(L_3, NULL);
		TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_5 = __this->___iprot__1;
		NullCheck(L_5);
		VirtualActionInvoker0::Invoke(28 /* System.Void Thrift.Protocol.TProtocol::ReadMessageEnd() */, L_5);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Client_recv_validate_ping_mBF78474403E295887EB8193A26514D191A4F3901_RuntimeMethod_var)));
	}

IL_002d:
	{
		validate_ping_result_t0CBE71D3C54F5CABE445DD8EAD534613297BB0C0* L_6 = (validate_ping_result_t0CBE71D3C54F5CABE445DD8EAD534613297BB0C0*)il2cpp_codegen_object_new(validate_ping_result_t0CBE71D3C54F5CABE445DD8EAD534613297BB0C0_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		validate_ping_result__ctor_m4E92622959821AA5D47FCA0F97EDA0525A2805F2(L_6, NULL);
		TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_7 = __this->___iprot__1;
		NullCheck(L_6);
		validate_ping_result_Read_m831E2CCD687F50A27464AD14415C635F82612C89(L_6, L_7, NULL);
		TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_8 = __this->___iprot__1;
		NullCheck(L_8);
		VirtualActionInvoker0::Invoke(28 /* System.Void Thrift.Protocol.TProtocol::ReadMessageEnd() */, L_8);
		return;
	}
}
// System.Collections.Generic.List`1<System.String> BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/Client::validate_function_list()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* Client_validate_function_list_mF56F0305666F1794350B77053157387B7B073790 (Client_t68F64069A7A7D460F7158797D2F5C0C22676FFA6* __this, const RuntimeMethod* method) 
{
	{
		Client_send_validate_function_list_mB2687404D4848A204F3B459F215D2C527FE7F9B6(__this, NULL);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0;
		L_0 = Client_recv_validate_function_list_mE3D5A21FD57FF842A995C047F96604CD905838A8(__this, NULL);
		return L_0;
	}
}
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/Client::send_validate_function_list()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_send_validate_function_list_mB2687404D4848A204F3B459F215D2C527FE7F9B6 (Client_t68F64069A7A7D460F7158797D2F5C0C22676FFA6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB0EC4068BCF9FD745CA5FDE39E8B794AF039A119);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&validate_function_list_args_t63D913089E5FFB666F13DFA7CB2DA5B2C9573075_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_0 = __this->___oprot__2;
		int32_t L_1 = __this->___seqid__3;
		TMessage_tA7EE1296176D302DA8CB5201A04319D8D3B44043 L_2;
		memset((&L_2), 0, sizeof(L_2));
		TMessage__ctor_m73265A5C74D3D787AAE27FB7A459580C8637D809((&L_2), _stringLiteralB0EC4068BCF9FD745CA5FDE39E8B794AF039A119, 1, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< TMessage_tA7EE1296176D302DA8CB5201A04319D8D3B44043 >::Invoke(6 /* System.Void Thrift.Protocol.TProtocol::WriteMessageBegin(Thrift.Protocol.TMessage) */, L_0, L_2);
		validate_function_list_args_t63D913089E5FFB666F13DFA7CB2DA5B2C9573075* L_3 = (validate_function_list_args_t63D913089E5FFB666F13DFA7CB2DA5B2C9573075*)il2cpp_codegen_object_new(validate_function_list_args_t63D913089E5FFB666F13DFA7CB2DA5B2C9573075_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		validate_function_list_args__ctor_mB11592EB372EA1C4B6D435DA418D54AA6429ED35(L_3, NULL);
		TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_4 = __this->___oprot__2;
		NullCheck(L_3);
		validate_function_list_args_Write_m88AC862C86DD274BA1CE192CD379AA60A5B89329(L_3, L_4, NULL);
		TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_5 = __this->___oprot__2;
		NullCheck(L_5);
		VirtualActionInvoker0::Invoke(7 /* System.Void Thrift.Protocol.TProtocol::WriteMessageEnd() */, L_5);
		TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_6 = __this->___oprot__2;
		NullCheck(L_6);
		TTransport_tC5405D0CBA5B6B81DF71447B64F47F76B45C6A53* L_7;
		L_7 = TProtocol_get_Transport_mDD6E0B1DB55B839D353BA90016FE48CAAE91609A_inline(L_6, NULL);
		NullCheck(L_7);
		VirtualActionInvoker0::Invoke(11 /* System.Void Thrift.Transport.TTransport::Flush() */, L_7);
		return;
	}
}
// System.Collections.Generic.List`1<System.String> BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/Client::recv_validate_function_list()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* Client_recv_validate_function_list_mE3D5A21FD57FF842A995C047F96604CD905838A8 (Client_t68F64069A7A7D460F7158797D2F5C0C22676FFA6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&validate_function_list_result_tEA96B244E3A94307177B3D8736902272FDCE0944_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TMessage_tA7EE1296176D302DA8CB5201A04319D8D3B44043 V_0;
	memset((&V_0), 0, sizeof(V_0));
	validate_function_list_result_tEA96B244E3A94307177B3D8736902272FDCE0944* V_1 = NULL;
	{
		TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_0 = __this->___iprot__1;
		NullCheck(L_0);
		TMessage_tA7EE1296176D302DA8CB5201A04319D8D3B44043 L_1;
		L_1 = VirtualFuncInvoker0< TMessage_tA7EE1296176D302DA8CB5201A04319D8D3B44043 >::Invoke(27 /* Thrift.Protocol.TMessage Thrift.Protocol.TProtocol::ReadMessageBegin() */, L_0);
		V_0 = L_1;
		int32_t L_2;
		L_2 = TMessage_get_Type_m3424E30FC2CE9DA5A36D300E20D383AF42EE16B9_inline((&V_0), NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)3))))
		{
			goto IL_002d;
		}
	}
	{
		TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_3 = __this->___iprot__1;
		TApplicationException_t75465AADA2A50020180483E1F89A83530AD60F76* L_4;
		L_4 = TApplicationException_Read_mD0354E98F032A7FECFA83774099D49265D5E4111(L_3, NULL);
		TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_5 = __this->___iprot__1;
		NullCheck(L_5);
		VirtualActionInvoker0::Invoke(28 /* System.Void Thrift.Protocol.TProtocol::ReadMessageEnd() */, L_5);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Client_recv_validate_function_list_mE3D5A21FD57FF842A995C047F96604CD905838A8_RuntimeMethod_var)));
	}

IL_002d:
	{
		validate_function_list_result_tEA96B244E3A94307177B3D8736902272FDCE0944* L_6 = (validate_function_list_result_tEA96B244E3A94307177B3D8736902272FDCE0944*)il2cpp_codegen_object_new(validate_function_list_result_tEA96B244E3A94307177B3D8736902272FDCE0944_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		validate_function_list_result__ctor_m3504DA701B4E1EEBBAEE4F8024A03AD212D95282(L_6, NULL);
		V_1 = L_6;
		validate_function_list_result_tEA96B244E3A94307177B3D8736902272FDCE0944* L_7 = V_1;
		TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_8 = __this->___iprot__1;
		NullCheck(L_7);
		validate_function_list_result_Read_m89FA5A2D381ECC57B36945EDB5CA9D057B1ED73C(L_7, L_8, NULL);
		TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_9 = __this->___iprot__1;
		NullCheck(L_9);
		VirtualActionInvoker0::Invoke(28 /* System.Void Thrift.Protocol.TProtocol::ReadMessageEnd() */, L_9);
		validate_function_list_result_tEA96B244E3A94307177B3D8736902272FDCE0944* L_10 = V_1;
		NullCheck(L_10);
		Isset_tF47BC457C347A05925D0A490A693A44F649EA8A0* L_11 = (&L_10->_____isset_1);
		bool L_12 = L_11->___success_0;
		if (!L_12)
		{
			goto IL_005e;
		}
	}
	{
		validate_function_list_result_tEA96B244E3A94307177B3D8736902272FDCE0944* L_13 = V_1;
		NullCheck(L_13);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_14;
		L_14 = validate_function_list_result_get_Success_m935126A826ED7821006377EE3AEFAE0F418630F0_inline(L_13, NULL);
		return L_14;
	}

IL_005e:
	{
		TApplicationException_t75465AADA2A50020180483E1F89A83530AD60F76* L_15 = (TApplicationException_t75465AADA2A50020180483E1F89A83530AD60F76*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TApplicationException_t75465AADA2A50020180483E1F89A83530AD60F76_il2cpp_TypeInfo_var)));
		NullCheck(L_15);
		TApplicationException__ctor_mC56AD886EBD86C15A95032A124483E5884A8E1DB(L_15, 5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral28622C1E2BADE67EAFD7DBC0A125C48EC04B2EE6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Client_recv_validate_function_list_mE3D5A21FD57FF842A995C047F96604CD905838A8_RuntimeMethod_var)));
	}
}
// System.Boolean BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/Client::TrySharedTextureNotify(System.String,BlueprintReality.Thrift.SharedTextures.SharedTex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Client_TrySharedTextureNotify_m3CA4B6490354DA862DC05FD6C3D459A872A8B621 (Client_t68F64069A7A7D460F7158797D2F5C0C22676FFA6* __this, String_t* ___texId0, SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976* ___texture1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1EBBF092887F8397184C62DB3580080152B5842);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		{
			ThriftClientProxy_t4F7653DE6E5210BC005CA0FE2F734E635558EC56* L_0 = ((ClientProxy_tCAB2A9A0BF231DDF8E4924E77E1208C917FC0718*)__this)->___clientProxy_0;
			if (!L_0)
			{
				goto IL_001e_1;
			}
		}
		{
			ThriftClientProxy_t4F7653DE6E5210BC005CA0FE2F734E635558EC56* L_1 = ((ClientProxy_tCAB2A9A0BF231DDF8E4924E77E1208C917FC0718*)__this)->___clientProxy_0;
			NullCheck(L_1);
			bool L_2;
			L_2 = ThriftClientProxy_Ensure_mD17F2E31BB5AA9A2A55E95298347E8C69DA7548C(L_1, _stringLiteralB1EBBF092887F8397184C62DB3580080152B5842, NULL);
			if (L_2)
			{
				goto IL_001e_1;
			}
		}
		{
			V_0 = (bool)0;
			goto IL_002f;
		}

IL_001e_1:
		{
			String_t* L_3 = ___texId0;
			SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976* L_4 = ___texture1;
			Client_SharedTextureNotify_mF1FC9E2B3294A7EB36E4430522DFF4F40E909E54(__this, L_3, L_4, NULL);
			V_0 = (bool)1;
			goto IL_002f;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_002a;
		}
		throw e;
	}

CATCH_002a:
	{// begin catch(System.Object)
		V_0 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_002f;
	}// end catch (depth: 1)

IL_002f:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/Client::SharedTextureNotify(System.String,BlueprintReality.Thrift.SharedTextures.SharedTex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_SharedTextureNotify_mF1FC9E2B3294A7EB36E4430522DFF4F40E909E54 (Client_t68F64069A7A7D460F7158797D2F5C0C22676FFA6* __this, String_t* ___texId0, SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976* ___texture1, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___texId0;
		SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976* L_1 = ___texture1;
		Client_send_SharedTextureNotify_m2B70836E0A00A063095DEC1C213277FFB3DF8B0E(__this, L_0, L_1, NULL);
		Client_recv_SharedTextureNotify_m1142C6EECEC831306B4370182087E3BE6DD624E7(__this, NULL);
		return;
	}
}
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/Client::send_SharedTextureNotify(System.String,BlueprintReality.Thrift.SharedTextures.SharedTex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_send_SharedTextureNotify_m2B70836E0A00A063095DEC1C213277FFB3DF8B0E (Client_t68F64069A7A7D460F7158797D2F5C0C22676FFA6* __this, String_t* ___texId0, SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976* ___texture1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SharedTextureNotify_args_t0EBD41B2A9EFE8C795E976A11ED2D89278821EF9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral055D976DFFFE69BAA555F56066A8B22EF01EE72E);
		s_Il2CppMethodInitialized = true;
	}
	{
		TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_0 = __this->___oprot__2;
		int32_t L_1 = __this->___seqid__3;
		TMessage_tA7EE1296176D302DA8CB5201A04319D8D3B44043 L_2;
		memset((&L_2), 0, sizeof(L_2));
		TMessage__ctor_m73265A5C74D3D787AAE27FB7A459580C8637D809((&L_2), _stringLiteral055D976DFFFE69BAA555F56066A8B22EF01EE72E, 1, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< TMessage_tA7EE1296176D302DA8CB5201A04319D8D3B44043 >::Invoke(6 /* System.Void Thrift.Protocol.TProtocol::WriteMessageBegin(Thrift.Protocol.TMessage) */, L_0, L_2);
		SharedTextureNotify_args_t0EBD41B2A9EFE8C795E976A11ED2D89278821EF9* L_3 = (SharedTextureNotify_args_t0EBD41B2A9EFE8C795E976A11ED2D89278821EF9*)il2cpp_codegen_object_new(SharedTextureNotify_args_t0EBD41B2A9EFE8C795E976A11ED2D89278821EF9_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		SharedTextureNotify_args__ctor_mAAED46770AA71CC2762C15DF6B1EA8862175EE5A(L_3, NULL);
		SharedTextureNotify_args_t0EBD41B2A9EFE8C795E976A11ED2D89278821EF9* L_4 = L_3;
		String_t* L_5 = ___texId0;
		NullCheck(L_4);
		SharedTextureNotify_args_set_TexId_m3728BF1B5F5037753B73D43A3C1EA1A7D60DEB17(L_4, L_5, NULL);
		SharedTextureNotify_args_t0EBD41B2A9EFE8C795E976A11ED2D89278821EF9* L_6 = L_4;
		SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976* L_7 = ___texture1;
		NullCheck(L_6);
		SharedTextureNotify_args_set_Texture_mF58719354885F0823FB2AB9F6E58E0D23C23844E(L_6, L_7, NULL);
		TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_8 = __this->___oprot__2;
		NullCheck(L_6);
		SharedTextureNotify_args_Write_m85C05DD0EE7874110CA347F8B2CF0E4DE8325C51(L_6, L_8, NULL);
		TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_9 = __this->___oprot__2;
		NullCheck(L_9);
		VirtualActionInvoker0::Invoke(7 /* System.Void Thrift.Protocol.TProtocol::WriteMessageEnd() */, L_9);
		TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_10 = __this->___oprot__2;
		NullCheck(L_10);
		TTransport_tC5405D0CBA5B6B81DF71447B64F47F76B45C6A53* L_11;
		L_11 = TProtocol_get_Transport_mDD6E0B1DB55B839D353BA90016FE48CAAE91609A_inline(L_10, NULL);
		NullCheck(L_11);
		VirtualActionInvoker0::Invoke(11 /* System.Void Thrift.Transport.TTransport::Flush() */, L_11);
		return;
	}
}
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/Client::recv_SharedTextureNotify()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_recv_SharedTextureNotify_m1142C6EECEC831306B4370182087E3BE6DD624E7 (Client_t68F64069A7A7D460F7158797D2F5C0C22676FFA6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SharedTextureNotify_result_t773233FF03B1FFB18E8EA55F4632A79916885CE7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TMessage_tA7EE1296176D302DA8CB5201A04319D8D3B44043 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_0 = __this->___iprot__1;
		NullCheck(L_0);
		TMessage_tA7EE1296176D302DA8CB5201A04319D8D3B44043 L_1;
		L_1 = VirtualFuncInvoker0< TMessage_tA7EE1296176D302DA8CB5201A04319D8D3B44043 >::Invoke(27 /* Thrift.Protocol.TMessage Thrift.Protocol.TProtocol::ReadMessageBegin() */, L_0);
		V_0 = L_1;
		int32_t L_2;
		L_2 = TMessage_get_Type_m3424E30FC2CE9DA5A36D300E20D383AF42EE16B9_inline((&V_0), NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)3))))
		{
			goto IL_002d;
		}
	}
	{
		TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_3 = __this->___iprot__1;
		TApplicationException_t75465AADA2A50020180483E1F89A83530AD60F76* L_4;
		L_4 = TApplicationException_Read_mD0354E98F032A7FECFA83774099D49265D5E4111(L_3, NULL);
		TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_5 = __this->___iprot__1;
		NullCheck(L_5);
		VirtualActionInvoker0::Invoke(28 /* System.Void Thrift.Protocol.TProtocol::ReadMessageEnd() */, L_5);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Client_recv_SharedTextureNotify_m1142C6EECEC831306B4370182087E3BE6DD624E7_RuntimeMethod_var)));
	}

IL_002d:
	{
		SharedTextureNotify_result_t773233FF03B1FFB18E8EA55F4632A79916885CE7* L_6 = (SharedTextureNotify_result_t773233FF03B1FFB18E8EA55F4632A79916885CE7*)il2cpp_codegen_object_new(SharedTextureNotify_result_t773233FF03B1FFB18E8EA55F4632A79916885CE7_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		SharedTextureNotify_result__ctor_m017F4BB9C0DA36E09A9315F2EC0A50D41A7CCCD2(L_6, NULL);
		TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_7 = __this->___iprot__1;
		NullCheck(L_6);
		SharedTextureNotify_result_Read_m237328D6B0980A055EB660887EB812F1C41E0418(L_6, L_7, NULL);
		TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_8 = __this->___iprot__1;
		NullCheck(L_8);
		VirtualActionInvoker0::Invoke(28 /* System.Void Thrift.Protocol.TProtocol::ReadMessageEnd() */, L_8);
		return;
	}
}
// System.Boolean BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/Client::TrySharedTextureRequest(System.String,BlueprintReality.Thrift.SharedTextures.SharedTex&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Client_TrySharedTextureRequest_m89523EB6209E372F08B91931B72B718368C2E730 (Client_t68F64069A7A7D460F7158797D2F5C0C22676FFA6* __this, String_t* ___texId0, SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976** ___result1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral209F496F9E4CB40DB26F56314C5669BAEE33ABBE);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		{
			ThriftClientProxy_t4F7653DE6E5210BC005CA0FE2F734E635558EC56* L_0 = ((ClientProxy_tCAB2A9A0BF231DDF8E4924E77E1208C917FC0718*)__this)->___clientProxy_0;
			if (!L_0)
			{
				goto IL_0021_1;
			}
		}
		{
			ThriftClientProxy_t4F7653DE6E5210BC005CA0FE2F734E635558EC56* L_1 = ((ClientProxy_tCAB2A9A0BF231DDF8E4924E77E1208C917FC0718*)__this)->___clientProxy_0;
			NullCheck(L_1);
			bool L_2;
			L_2 = ThriftClientProxy_Ensure_mD17F2E31BB5AA9A2A55E95298347E8C69DA7548C(L_1, _stringLiteral209F496F9E4CB40DB26F56314C5669BAEE33ABBE, NULL);
			if (L_2)
			{
				goto IL_0021_1;
			}
		}
		{
			SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976** L_3 = ___result1;
			*((RuntimeObject**)L_3) = (RuntimeObject*)NULL;
			Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)(RuntimeObject*)NULL);
			V_0 = (bool)0;
			goto IL_0036;
		}

IL_0021_1:
		{
			SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976** L_4 = ___result1;
			String_t* L_5 = ___texId0;
			SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976* L_6;
			L_6 = Client_SharedTextureRequest_m628EB5400C17305D07808F6476B80A375D358BE0(__this, L_5, NULL);
			*((RuntimeObject**)L_4) = (RuntimeObject*)L_6;
			Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_4, (void*)(RuntimeObject*)L_6);
			V_0 = (bool)1;
			goto IL_0036;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_002e;
		}
		throw e;
	}

CATCH_002e:
	{// begin catch(System.Object)
		SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976** L_7 = ___result1;
		*((RuntimeObject**)L_7) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_7, (void*)(RuntimeObject*)NULL);
		V_0 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0036;
	}// end catch (depth: 1)

IL_0036:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
// BlueprintReality.Thrift.SharedTextures.SharedTex BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/Client::SharedTextureRequest(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976* Client_SharedTextureRequest_m628EB5400C17305D07808F6476B80A375D358BE0 (Client_t68F64069A7A7D460F7158797D2F5C0C22676FFA6* __this, String_t* ___texId0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___texId0;
		Client_send_SharedTextureRequest_m82AB7219E1ED0713D2C77CB51B821440A2A8A750(__this, L_0, NULL);
		SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976* L_1;
		L_1 = Client_recv_SharedTextureRequest_m20A400DDAE739EC5BDD6F8D5DF35D8D22BC306E4(__this, NULL);
		return L_1;
	}
}
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/Client::send_SharedTextureRequest(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_send_SharedTextureRequest_m82AB7219E1ED0713D2C77CB51B821440A2A8A750 (Client_t68F64069A7A7D460F7158797D2F5C0C22676FFA6* __this, String_t* ___texId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SharedTextureRequest_args_tD5AE63605C74E527A24E126E22DAFFB08F81D4B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C9F0462C280DB50287DB739E320C5C2346AB984);
		s_Il2CppMethodInitialized = true;
	}
	{
		TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_0 = __this->___oprot__2;
		int32_t L_1 = __this->___seqid__3;
		TMessage_tA7EE1296176D302DA8CB5201A04319D8D3B44043 L_2;
		memset((&L_2), 0, sizeof(L_2));
		TMessage__ctor_m73265A5C74D3D787AAE27FB7A459580C8637D809((&L_2), _stringLiteral5C9F0462C280DB50287DB739E320C5C2346AB984, 1, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< TMessage_tA7EE1296176D302DA8CB5201A04319D8D3B44043 >::Invoke(6 /* System.Void Thrift.Protocol.TProtocol::WriteMessageBegin(Thrift.Protocol.TMessage) */, L_0, L_2);
		SharedTextureRequest_args_tD5AE63605C74E527A24E126E22DAFFB08F81D4B7* L_3 = (SharedTextureRequest_args_tD5AE63605C74E527A24E126E22DAFFB08F81D4B7*)il2cpp_codegen_object_new(SharedTextureRequest_args_tD5AE63605C74E527A24E126E22DAFFB08F81D4B7_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		SharedTextureRequest_args__ctor_mE8E4DE4BEF073E388B9B87BD00BE74148C2538C9(L_3, NULL);
		SharedTextureRequest_args_tD5AE63605C74E527A24E126E22DAFFB08F81D4B7* L_4 = L_3;
		String_t* L_5 = ___texId0;
		NullCheck(L_4);
		SharedTextureRequest_args_set_TexId_m0F07CC48583F654B83B575DFFEE0EAE27C1AB5DA(L_4, L_5, NULL);
		TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_6 = __this->___oprot__2;
		NullCheck(L_4);
		SharedTextureRequest_args_Write_mD90E3B77CF750D225C443F57AEC04DE7C9503D1E(L_4, L_6, NULL);
		TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_7 = __this->___oprot__2;
		NullCheck(L_7);
		VirtualActionInvoker0::Invoke(7 /* System.Void Thrift.Protocol.TProtocol::WriteMessageEnd() */, L_7);
		TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_8 = __this->___oprot__2;
		NullCheck(L_8);
		TTransport_tC5405D0CBA5B6B81DF71447B64F47F76B45C6A53* L_9;
		L_9 = TProtocol_get_Transport_mDD6E0B1DB55B839D353BA90016FE48CAAE91609A_inline(L_8, NULL);
		NullCheck(L_9);
		VirtualActionInvoker0::Invoke(11 /* System.Void Thrift.Transport.TTransport::Flush() */, L_9);
		return;
	}
}
// BlueprintReality.Thrift.SharedTextures.SharedTex BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/Client::recv_SharedTextureRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976* Client_recv_SharedTextureRequest_m20A400DDAE739EC5BDD6F8D5DF35D8D22BC306E4 (Client_t68F64069A7A7D460F7158797D2F5C0C22676FFA6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SharedTextureRequest_result_tF57E540E873EE83BE065ED81A2313266C8AD1961_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TMessage_tA7EE1296176D302DA8CB5201A04319D8D3B44043 V_0;
	memset((&V_0), 0, sizeof(V_0));
	SharedTextureRequest_result_tF57E540E873EE83BE065ED81A2313266C8AD1961* V_1 = NULL;
	{
		TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_0 = __this->___iprot__1;
		NullCheck(L_0);
		TMessage_tA7EE1296176D302DA8CB5201A04319D8D3B44043 L_1;
		L_1 = VirtualFuncInvoker0< TMessage_tA7EE1296176D302DA8CB5201A04319D8D3B44043 >::Invoke(27 /* Thrift.Protocol.TMessage Thrift.Protocol.TProtocol::ReadMessageBegin() */, L_0);
		V_0 = L_1;
		int32_t L_2;
		L_2 = TMessage_get_Type_m3424E30FC2CE9DA5A36D300E20D383AF42EE16B9_inline((&V_0), NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)3))))
		{
			goto IL_002d;
		}
	}
	{
		TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_3 = __this->___iprot__1;
		TApplicationException_t75465AADA2A50020180483E1F89A83530AD60F76* L_4;
		L_4 = TApplicationException_Read_mD0354E98F032A7FECFA83774099D49265D5E4111(L_3, NULL);
		TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_5 = __this->___iprot__1;
		NullCheck(L_5);
		VirtualActionInvoker0::Invoke(28 /* System.Void Thrift.Protocol.TProtocol::ReadMessageEnd() */, L_5);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Client_recv_SharedTextureRequest_m20A400DDAE739EC5BDD6F8D5DF35D8D22BC306E4_RuntimeMethod_var)));
	}

IL_002d:
	{
		SharedTextureRequest_result_tF57E540E873EE83BE065ED81A2313266C8AD1961* L_6 = (SharedTextureRequest_result_tF57E540E873EE83BE065ED81A2313266C8AD1961*)il2cpp_codegen_object_new(SharedTextureRequest_result_tF57E540E873EE83BE065ED81A2313266C8AD1961_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		SharedTextureRequest_result__ctor_mA0A006973ABCD0228000AE8DBF8728468FAC21CF(L_6, NULL);
		V_1 = L_6;
		SharedTextureRequest_result_tF57E540E873EE83BE065ED81A2313266C8AD1961* L_7 = V_1;
		TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_8 = __this->___iprot__1;
		NullCheck(L_7);
		SharedTextureRequest_result_Read_m76BD7630D693726BD104E3E3B83345B0176AD5C8(L_7, L_8, NULL);
		TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_9 = __this->___iprot__1;
		NullCheck(L_9);
		VirtualActionInvoker0::Invoke(28 /* System.Void Thrift.Protocol.TProtocol::ReadMessageEnd() */, L_9);
		SharedTextureRequest_result_tF57E540E873EE83BE065ED81A2313266C8AD1961* L_10 = V_1;
		NullCheck(L_10);
		Isset_t2EC092880773B7465AC7F14FFABF88E95E95F79E* L_11 = (&L_10->_____isset_1);
		bool L_12 = L_11->___success_0;
		if (!L_12)
		{
			goto IL_005e;
		}
	}
	{
		SharedTextureRequest_result_tF57E540E873EE83BE065ED81A2313266C8AD1961* L_13 = V_1;
		NullCheck(L_13);
		SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976* L_14;
		L_14 = SharedTextureRequest_result_get_Success_m63FB9F39B5F34985FCA1AB2DE87E0083043C508F_inline(L_13, NULL);
		return L_14;
	}

IL_005e:
	{
		TApplicationException_t75465AADA2A50020180483E1F89A83530AD60F76* L_15 = (TApplicationException_t75465AADA2A50020180483E1F89A83530AD60F76*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TApplicationException_t75465AADA2A50020180483E1F89A83530AD60F76_il2cpp_TypeInfo_var)));
		NullCheck(L_15);
		TApplicationException__ctor_mC56AD886EBD86C15A95032A124483E5884A8E1DB(L_15, 5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral15017A1031863735A154B530F86FDB1F89DD6A5A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Client_recv_SharedTextureRequest_m20A400DDAE739EC5BDD6F8D5DF35D8D22BC306E4_RuntimeMethod_var)));
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
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/Processor::.ctor(BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/ISyncServer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Processor__ctor_m351E964822781818AFCCFF316ACD55CFF01538B8 (Processor_t149BF9A522E68ECC976019AC885916305DADB24E* __this, RuntimeObject* ___iface0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mD43CDB1F0181CB472C907CE2B05BD159E4A88287_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mC3633C96031658AC059034B7084BF7CB87CB8D2C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t7B93365370466FE4082FCBCD182F556A83D94328_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProcessFunction_t6587BCE70A9CECF27480919C464CD9C54E2DD0DB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Processor_SharedTextureNotify_Process_m7C65D73C84D0E684CE540D2835E04C2E85A1F679_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Processor_SharedTextureRequest_Process_m61E5A9804A7717B9C545C1133145C46A12C594F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Processor_validate_function_list_Process_m6C3E81ECE8C8C34373A343C16616DC5E71D61580_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Processor_validate_ping_Process_m740CB77E35066843270E23AD592062BA6A88850B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral055D976DFFFE69BAA555F56066A8B22EF01EE72E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C9F0462C280DB50287DB739E320C5C2346AB984);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral889E65D7381A6F39280C120B9BAC654F54524267);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB0EC4068BCF9FD745CA5FDE39E8B794AF039A119);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t7B93365370466FE4082FCBCD182F556A83D94328* L_0 = (Dictionary_2_t7B93365370466FE4082FCBCD182F556A83D94328*)il2cpp_codegen_object_new(Dictionary_2_t7B93365370466FE4082FCBCD182F556A83D94328_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mD43CDB1F0181CB472C907CE2B05BD159E4A88287(L_0, Dictionary_2__ctor_mD43CDB1F0181CB472C907CE2B05BD159E4A88287_RuntimeMethod_var);
		__this->___processMap__1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___processMap__1), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_1 = ___iface0;
		__this->___iface__0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___iface__0), (void*)L_1);
		Dictionary_2_t7B93365370466FE4082FCBCD182F556A83D94328* L_2 = __this->___processMap__1;
		ProcessFunction_t6587BCE70A9CECF27480919C464CD9C54E2DD0DB* L_3 = (ProcessFunction_t6587BCE70A9CECF27480919C464CD9C54E2DD0DB*)il2cpp_codegen_object_new(ProcessFunction_t6587BCE70A9CECF27480919C464CD9C54E2DD0DB_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ProcessFunction__ctor_mDD819122361247B1C7A46FE821EA1914FE07CA3D(L_3, __this, (intptr_t)((void*)Processor_validate_ping_Process_m740CB77E35066843270E23AD592062BA6A88850B_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		Dictionary_2_set_Item_mC3633C96031658AC059034B7084BF7CB87CB8D2C(L_2, _stringLiteral889E65D7381A6F39280C120B9BAC654F54524267, L_3, Dictionary_2_set_Item_mC3633C96031658AC059034B7084BF7CB87CB8D2C_RuntimeMethod_var);
		Dictionary_2_t7B93365370466FE4082FCBCD182F556A83D94328* L_4 = __this->___processMap__1;
		ProcessFunction_t6587BCE70A9CECF27480919C464CD9C54E2DD0DB* L_5 = (ProcessFunction_t6587BCE70A9CECF27480919C464CD9C54E2DD0DB*)il2cpp_codegen_object_new(ProcessFunction_t6587BCE70A9CECF27480919C464CD9C54E2DD0DB_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		ProcessFunction__ctor_mDD819122361247B1C7A46FE821EA1914FE07CA3D(L_5, __this, (intptr_t)((void*)Processor_validate_function_list_Process_m6C3E81ECE8C8C34373A343C16616DC5E71D61580_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		Dictionary_2_set_Item_mC3633C96031658AC059034B7084BF7CB87CB8D2C(L_4, _stringLiteralB0EC4068BCF9FD745CA5FDE39E8B794AF039A119, L_5, Dictionary_2_set_Item_mC3633C96031658AC059034B7084BF7CB87CB8D2C_RuntimeMethod_var);
		Dictionary_2_t7B93365370466FE4082FCBCD182F556A83D94328* L_6 = __this->___processMap__1;
		ProcessFunction_t6587BCE70A9CECF27480919C464CD9C54E2DD0DB* L_7 = (ProcessFunction_t6587BCE70A9CECF27480919C464CD9C54E2DD0DB*)il2cpp_codegen_object_new(ProcessFunction_t6587BCE70A9CECF27480919C464CD9C54E2DD0DB_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		ProcessFunction__ctor_mDD819122361247B1C7A46FE821EA1914FE07CA3D(L_7, __this, (intptr_t)((void*)Processor_SharedTextureNotify_Process_m7C65D73C84D0E684CE540D2835E04C2E85A1F679_RuntimeMethod_var), NULL);
		NullCheck(L_6);
		Dictionary_2_set_Item_mC3633C96031658AC059034B7084BF7CB87CB8D2C(L_6, _stringLiteral055D976DFFFE69BAA555F56066A8B22EF01EE72E, L_7, Dictionary_2_set_Item_mC3633C96031658AC059034B7084BF7CB87CB8D2C_RuntimeMethod_var);
		Dictionary_2_t7B93365370466FE4082FCBCD182F556A83D94328* L_8 = __this->___processMap__1;
		ProcessFunction_t6587BCE70A9CECF27480919C464CD9C54E2DD0DB* L_9 = (ProcessFunction_t6587BCE70A9CECF27480919C464CD9C54E2DD0DB*)il2cpp_codegen_object_new(ProcessFunction_t6587BCE70A9CECF27480919C464CD9C54E2DD0DB_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		ProcessFunction__ctor_mDD819122361247B1C7A46FE821EA1914FE07CA3D(L_9, __this, (intptr_t)((void*)Processor_SharedTextureRequest_Process_m61E5A9804A7717B9C545C1133145C46A12C594F5_RuntimeMethod_var), NULL);
		NullCheck(L_8);
		Dictionary_2_set_Item_mC3633C96031658AC059034B7084BF7CB87CB8D2C(L_8, _stringLiteral5C9F0462C280DB50287DB739E320C5C2346AB984, L_9, Dictionary_2_set_Item_mC3633C96031658AC059034B7084BF7CB87CB8D2C_RuntimeMethod_var);
		return;
	}
}
// System.Boolean BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/Processor::Process(Thrift.Protocol.TProtocol,Thrift.Protocol.TProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Processor_Process_m2F2A5DDD0EFD3757C749CE4A13C7BA74478C8D8F (Processor_t149BF9A522E68ECC976019AC885916305DADB24E* __this, TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* ___iprot0, TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* ___oprot1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m587BAC6ADCCA39275B81A0081062BDEAC0C5C053_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TApplicationException_t75465AADA2A50020180483E1F89A83530AD60F76_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral80D54EC983DE63B568CBB0125C52331A1CBE3891);
		s_Il2CppMethodInitialized = true;
	}
	TMessage_tA7EE1296176D302DA8CB5201A04319D8D3B44043 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProcessFunction_t6587BCE70A9CECF27480919C464CD9C54E2DD0DB* V_1 = NULL;
	bool V_2 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		{
			TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_0 = ___iprot0;
			NullCheck(L_0);
			TMessage_tA7EE1296176D302DA8CB5201A04319D8D3B44043 L_1;
			L_1 = VirtualFuncInvoker0< TMessage_tA7EE1296176D302DA8CB5201A04319D8D3B44043 >::Invoke(27 /* Thrift.Protocol.TMessage Thrift.Protocol.TProtocol::ReadMessageBegin() */, L_0);
			V_0 = L_1;
			Dictionary_2_t7B93365370466FE4082FCBCD182F556A83D94328* L_2 = __this->___processMap__1;
			String_t* L_3;
			L_3 = TMessage_get_Name_m63AD656ADB643075A24B60FEB0CDFC5934EDCF6E_inline((&V_0), NULL);
			NullCheck(L_2);
			bool L_4;
			L_4 = Dictionary_2_TryGetValue_m587BAC6ADCCA39275B81A0081062BDEAC0C5C053(L_2, L_3, (&V_1), Dictionary_2_TryGetValue_m587BAC6ADCCA39275B81A0081062BDEAC0C5C053_RuntimeMethod_var);
			ProcessFunction_t6587BCE70A9CECF27480919C464CD9C54E2DD0DB* L_5 = V_1;
			if (L_5)
			{
				goto IL_007e_1;
			}
		}
		{
			TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_6 = ___iprot0;
			TProtocolUtil_Skip_m61E2B7C700479ECC6AD4E86636C1235C30B5A38F(L_6, ((int32_t)12), NULL);
			TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_7 = ___iprot0;
			NullCheck(L_7);
			VirtualActionInvoker0::Invoke(28 /* System.Void Thrift.Protocol.TProtocol::ReadMessageEnd() */, L_7);
			String_t* L_8;
			L_8 = TMessage_get_Name_m63AD656ADB643075A24B60FEB0CDFC5934EDCF6E_inline((&V_0), NULL);
			String_t* L_9;
			L_9 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral80D54EC983DE63B568CBB0125C52331A1CBE3891, L_8, _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D, NULL);
			TApplicationException_t75465AADA2A50020180483E1F89A83530AD60F76* L_10 = (TApplicationException_t75465AADA2A50020180483E1F89A83530AD60F76*)il2cpp_codegen_object_new(TApplicationException_t75465AADA2A50020180483E1F89A83530AD60F76_il2cpp_TypeInfo_var);
			NullCheck(L_10);
			TApplicationException__ctor_mC56AD886EBD86C15A95032A124483E5884A8E1DB(L_10, 1, L_9, NULL);
			TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_11 = ___oprot1;
			String_t* L_12;
			L_12 = TMessage_get_Name_m63AD656ADB643075A24B60FEB0CDFC5934EDCF6E_inline((&V_0), NULL);
			int32_t L_13;
			L_13 = TMessage_get_SeqID_mE72821208FEC318AE52CAD25CCDFF120DFE58D7E_inline((&V_0), NULL);
			TMessage_tA7EE1296176D302DA8CB5201A04319D8D3B44043 L_14;
			memset((&L_14), 0, sizeof(L_14));
			TMessage__ctor_m73265A5C74D3D787AAE27FB7A459580C8637D809((&L_14), L_12, 3, L_13, /*hidden argument*/NULL);
			NullCheck(L_11);
			VirtualActionInvoker1< TMessage_tA7EE1296176D302DA8CB5201A04319D8D3B44043 >::Invoke(6 /* System.Void Thrift.Protocol.TProtocol::WriteMessageBegin(Thrift.Protocol.TMessage) */, L_11, L_14);
			TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_15 = ___oprot1;
			NullCheck(L_10);
			TApplicationException_Write_mF0A4D7FEB7F1464B3242E97D68AAD7459ADB0D56(L_10, L_15, NULL);
			TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_16 = ___oprot1;
			NullCheck(L_16);
			VirtualActionInvoker0::Invoke(7 /* System.Void Thrift.Protocol.TProtocol::WriteMessageEnd() */, L_16);
			TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_17 = ___oprot1;
			NullCheck(L_17);
			TTransport_tC5405D0CBA5B6B81DF71447B64F47F76B45C6A53* L_18;
			L_18 = TProtocol_get_Transport_mDD6E0B1DB55B839D353BA90016FE48CAAE91609A_inline(L_17, NULL);
			NullCheck(L_18);
			VirtualActionInvoker0::Invoke(11 /* System.Void Thrift.Transport.TTransport::Flush() */, L_18);
			V_2 = (bool)1;
			goto IL_0096;
		}

IL_007e_1:
		{
			ProcessFunction_t6587BCE70A9CECF27480919C464CD9C54E2DD0DB* L_19 = V_1;
			int32_t L_20;
			L_20 = TMessage_get_SeqID_mE72821208FEC318AE52CAD25CCDFF120DFE58D7E_inline((&V_0), NULL);
			TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_21 = ___iprot0;
			TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_22 = ___oprot1;
			NullCheck(L_19);
			ProcessFunction_Invoke_m491088033029858C7E02390BC87BE3C46F70E4AF_inline(L_19, L_20, L_21, L_22, NULL);
			goto IL_0094;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_008f;
		}
		throw e;
	}

CATCH_008f:
	{// begin catch(System.IO.IOException)
		V_2 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0096;
	}// end catch (depth: 1)

IL_0094:
	{
		return (bool)1;
	}

IL_0096:
	{
		bool L_23 = V_2;
		return L_23;
	}
}
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/Processor::validate_ping_Process(System.Int32,Thrift.Protocol.TProtocol,Thrift.Protocol.TProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Processor_validate_ping_Process_m740CB77E35066843270E23AD592062BA6A88850B (Processor_t149BF9A522E68ECC976019AC885916305DADB24E* __this, int32_t ___seqid0, TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* ___iprot1, TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* ___oprot2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandlerProxy_t50A5848626A14999C5ECC9A1DF765110BC836E16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral889E65D7381A6F39280C120B9BAC654F54524267);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&validate_ping_args_t14208A7DFB4229A49964DD8F10489711F552E9DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&validate_ping_result_t0CBE71D3C54F5CABE445DD8EAD534613297BB0C0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	validate_ping_result_t0CBE71D3C54F5CABE445DD8EAD534613297BB0C0* V_0 = NULL;
	Exception_t* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		validate_ping_args_t14208A7DFB4229A49964DD8F10489711F552E9DE* L_0 = (validate_ping_args_t14208A7DFB4229A49964DD8F10489711F552E9DE*)il2cpp_codegen_object_new(validate_ping_args_t14208A7DFB4229A49964DD8F10489711F552E9DE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		validate_ping_args__ctor_m9214D825B8CBA702E7B487F332361B4E05C4407E(L_0, NULL);
		TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_1 = ___iprot1;
		NullCheck(L_0);
		validate_ping_args_Read_m9FD0BA0618294795551B7197EAC1E2BB37ABC037(L_0, L_1, NULL);
		TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_2 = ___iprot1;
		NullCheck(L_2);
		VirtualActionInvoker0::Invoke(28 /* System.Void Thrift.Protocol.TProtocol::ReadMessageEnd() */, L_2);
		validate_ping_result_t0CBE71D3C54F5CABE445DD8EAD534613297BB0C0* L_3 = (validate_ping_result_t0CBE71D3C54F5CABE445DD8EAD534613297BB0C0*)il2cpp_codegen_object_new(validate_ping_result_t0CBE71D3C54F5CABE445DD8EAD534613297BB0C0_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		validate_ping_result__ctor_m4E92622959821AA5D47FCA0F97EDA0525A2805F2(L_3, NULL);
		V_0 = L_3;
	}
	try
	{// begin try (depth: 1)
		RuntimeObject* L_4 = __this->___iface__0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(((HandlerProxy_t50A5848626A14999C5ECC9A1DF765110BC836E16*)IsInstClass((RuntimeObject*)L_4, HandlerProxy_t50A5848626A14999C5ECC9A1DF765110BC836E16_il2cpp_TypeInfo_var)));
		RuntimeObject* L_6;
		L_6 = HandlerProxy_Invoke_mB23BE90B7DEA26CC9B4697AEDB43566086E07BB7(((HandlerProxy_t50A5848626A14999C5ECC9A1DF765110BC836E16*)IsInstClass((RuntimeObject*)L_4, HandlerProxy_t50A5848626A14999C5ECC9A1DF765110BC836E16_il2cpp_TypeInfo_var)), _stringLiteral889E65D7381A6F39280C120B9BAC654F54524267, L_5, NULL);
		TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_7 = ___oprot2;
		int32_t L_8 = ___seqid0;
		TMessage_tA7EE1296176D302DA8CB5201A04319D8D3B44043 L_9;
		memset((&L_9), 0, sizeof(L_9));
		TMessage__ctor_m73265A5C74D3D787AAE27FB7A459580C8637D809((&L_9), _stringLiteral889E65D7381A6F39280C120B9BAC654F54524267, 2, L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		VirtualActionInvoker1< TMessage_tA7EE1296176D302DA8CB5201A04319D8D3B44043 >::Invoke(6 /* System.Void Thrift.Protocol.TProtocol::WriteMessageBegin(Thrift.Protocol.TMessage) */, L_7, L_9);
		validate_ping_result_t0CBE71D3C54F5CABE445DD8EAD534613297BB0C0* L_10 = V_0;
		TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_11 = ___oprot2;
		NullCheck(L_10);
		validate_ping_result_Write_mB1206BEB1CCA0C14126A1E210DFAECD77D60373F(L_10, L_11, NULL);
		goto IL_0096;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TTransportException_t7BA88D1856162445F81B5F26DB19EE932E6AAF4B_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_004e;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0051;
		}
		throw e;
	}

CATCH_004e:
	{// begin catch(Thrift.Transport.TTransportException)
		IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
	}// end catch (depth: 1)

CATCH_0051:
	{// begin catch(System.Exception)
		V_1 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var)));
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_12;
		L_12 = Console_get_Error_m8DA94D4EFFF9756FF8B44263E256C7341761BD49_inline(NULL);
		NullCheck(L_12);
		VirtualActionInvoker1< String_t* >::Invoke(39 /* System.Void System.IO.TextWriter::WriteLine(System.String) */, L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral88AE3C777C65FC6FF2BFDFDF5C40648388E7431B)));
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_13;
		L_13 = Console_get_Error_m8DA94D4EFFF9756FF8B44263E256C7341761BD49_inline(NULL);
		Exception_t* L_14 = V_1;
		NullCheck(L_14);
		String_t* L_15;
		L_15 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_14);
		NullCheck(L_13);
		VirtualActionInvoker1< String_t* >::Invoke(39 /* System.Void System.IO.TextWriter::WriteLine(System.String) */, L_13, L_15);
		TApplicationException_t75465AADA2A50020180483E1F89A83530AD60F76* L_16 = (TApplicationException_t75465AADA2A50020180483E1F89A83530AD60F76*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TApplicationException_t75465AADA2A50020180483E1F89A83530AD60F76_il2cpp_TypeInfo_var)));
		NullCheck(L_16);
		TApplicationException__ctor_mC56AD886EBD86C15A95032A124483E5884A8E1DB(L_16, 6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral03CBA8E278C589E42BDAB6934DE66651359B2DC9)), NULL);
		TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_17 = ___oprot2;
		int32_t L_18 = ___seqid0;
		TMessage_tA7EE1296176D302DA8CB5201A04319D8D3B44043 L_19;
		memset((&L_19), 0, sizeof(L_19));
		TMessage__ctor_m73265A5C74D3D787AAE27FB7A459580C8637D809((&L_19), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral889E65D7381A6F39280C120B9BAC654F54524267)), 3, L_18, /*hidden argument*/NULL);
		NullCheck(L_17);
		VirtualActionInvoker1< TMessage_tA7EE1296176D302DA8CB5201A04319D8D3B44043 >::Invoke(6 /* System.Void Thrift.Protocol.TProtocol::WriteMessageBegin(Thrift.Protocol.TMessage) */, L_17, L_19);
		TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_20 = ___oprot2;
		NullCheck(L_16);
		TApplicationException_Write_mF0A4D7FEB7F1464B3242E97D68AAD7459ADB0D56(L_16, L_20, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0096;
	}// end catch (depth: 1)

IL_0096:
	{
		TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_21 = ___oprot2;
		NullCheck(L_21);
		VirtualActionInvoker0::Invoke(7 /* System.Void Thrift.Protocol.TProtocol::WriteMessageEnd() */, L_21);
		TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_22 = ___oprot2;
		NullCheck(L_22);
		TTransport_tC5405D0CBA5B6B81DF71447B64F47F76B45C6A53* L_23;
		L_23 = TProtocol_get_Transport_mDD6E0B1DB55B839D353BA90016FE48CAAE91609A_inline(L_22, NULL);
		NullCheck(L_23);
		VirtualActionInvoker0::Invoke(11 /* System.Void Thrift.Transport.TTransport::Flush() */, L_23);
		return;
	}
}
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/Processor::validate_function_list_Process(System.Int32,Thrift.Protocol.TProtocol,Thrift.Protocol.TProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Processor_validate_function_list_Process_m6C3E81ECE8C8C34373A343C16616DC5E71D61580 (Processor_t149BF9A522E68ECC976019AC885916305DADB24E* __this, int32_t ___seqid0, TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* ___iprot1, TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* ___oprot2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandlerProxy_t50A5848626A14999C5ECC9A1DF765110BC836E16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB0EC4068BCF9FD745CA5FDE39E8B794AF039A119);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&validate_function_list_args_t63D913089E5FFB666F13DFA7CB2DA5B2C9573075_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&validate_function_list_result_tEA96B244E3A94307177B3D8736902272FDCE0944_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	validate_function_list_result_tEA96B244E3A94307177B3D8736902272FDCE0944* V_0 = NULL;
	Exception_t* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		validate_function_list_args_t63D913089E5FFB666F13DFA7CB2DA5B2C9573075* L_0 = (validate_function_list_args_t63D913089E5FFB666F13DFA7CB2DA5B2C9573075*)il2cpp_codegen_object_new(validate_function_list_args_t63D913089E5FFB666F13DFA7CB2DA5B2C9573075_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		validate_function_list_args__ctor_mB11592EB372EA1C4B6D435DA418D54AA6429ED35(L_0, NULL);
		TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_1 = ___iprot1;
		NullCheck(L_0);
		validate_function_list_args_Read_m465BBAE050E7F9A392EC84AC820CF71FF92514EC(L_0, L_1, NULL);
		TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_2 = ___iprot1;
		NullCheck(L_2);
		VirtualActionInvoker0::Invoke(28 /* System.Void Thrift.Protocol.TProtocol::ReadMessageEnd() */, L_2);
		validate_function_list_result_tEA96B244E3A94307177B3D8736902272FDCE0944* L_3 = (validate_function_list_result_tEA96B244E3A94307177B3D8736902272FDCE0944*)il2cpp_codegen_object_new(validate_function_list_result_tEA96B244E3A94307177B3D8736902272FDCE0944_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		validate_function_list_result__ctor_m3504DA701B4E1EEBBAEE4F8024A03AD212D95282(L_3, NULL);
		V_0 = L_3;
	}
	try
	{// begin try (depth: 1)
		validate_function_list_result_tEA96B244E3A94307177B3D8736902272FDCE0944* L_4 = V_0;
		RuntimeObject* L_5 = __this->___iface__0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(((HandlerProxy_t50A5848626A14999C5ECC9A1DF765110BC836E16*)IsInstClass((RuntimeObject*)L_5, HandlerProxy_t50A5848626A14999C5ECC9A1DF765110BC836E16_il2cpp_TypeInfo_var)));
		RuntimeObject* L_7;
		L_7 = HandlerProxy_Invoke_mB23BE90B7DEA26CC9B4697AEDB43566086E07BB7(((HandlerProxy_t50A5848626A14999C5ECC9A1DF765110BC836E16*)IsInstClass((RuntimeObject*)L_5, HandlerProxy_t50A5848626A14999C5ECC9A1DF765110BC836E16_il2cpp_TypeInfo_var)), _stringLiteralB0EC4068BCF9FD745CA5FDE39E8B794AF039A119, L_6, NULL);
		NullCheck(L_4);
		validate_function_list_result_set_Success_m3AEFB0C5A7DCFBF865C5B59BD3360797EAC32039(L_4, ((List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)CastclassClass((RuntimeObject*)L_7, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var)), NULL);
		TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_8 = ___oprot2;
		int32_t L_9 = ___seqid0;
		TMessage_tA7EE1296176D302DA8CB5201A04319D8D3B44043 L_10;
		memset((&L_10), 0, sizeof(L_10));
		TMessage__ctor_m73265A5C74D3D787AAE27FB7A459580C8637D809((&L_10), _stringLiteralB0EC4068BCF9FD745CA5FDE39E8B794AF039A119, 2, L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		VirtualActionInvoker1< TMessage_tA7EE1296176D302DA8CB5201A04319D8D3B44043 >::Invoke(6 /* System.Void Thrift.Protocol.TProtocol::WriteMessageBegin(Thrift.Protocol.TMessage) */, L_8, L_10);
		validate_function_list_result_tEA96B244E3A94307177B3D8736902272FDCE0944* L_11 = V_0;
		TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_12 = ___oprot2;
		NullCheck(L_11);
		validate_function_list_result_Write_m376C3EB769DD55BCA92DE7F8DD8DC3DF56C6A161(L_11, L_12, NULL);
		goto IL_00a0;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TTransportException_t7BA88D1856162445F81B5F26DB19EE932E6AAF4B_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0058;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_005b;
		}
		throw e;
	}

CATCH_0058:
	{// begin catch(Thrift.Transport.TTransportException)
		IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
	}// end catch (depth: 1)

CATCH_005b:
	{// begin catch(System.Exception)
		V_1 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var)));
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_13;
		L_13 = Console_get_Error_m8DA94D4EFFF9756FF8B44263E256C7341761BD49_inline(NULL);
		NullCheck(L_13);
		VirtualActionInvoker1< String_t* >::Invoke(39 /* System.Void System.IO.TextWriter::WriteLine(System.String) */, L_13, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral88AE3C777C65FC6FF2BFDFDF5C40648388E7431B)));
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_14;
		L_14 = Console_get_Error_m8DA94D4EFFF9756FF8B44263E256C7341761BD49_inline(NULL);
		Exception_t* L_15 = V_1;
		NullCheck(L_15);
		String_t* L_16;
		L_16 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_15);
		NullCheck(L_14);
		VirtualActionInvoker1< String_t* >::Invoke(39 /* System.Void System.IO.TextWriter::WriteLine(System.String) */, L_14, L_16);
		TApplicationException_t75465AADA2A50020180483E1F89A83530AD60F76* L_17 = (TApplicationException_t75465AADA2A50020180483E1F89A83530AD60F76*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TApplicationException_t75465AADA2A50020180483E1F89A83530AD60F76_il2cpp_TypeInfo_var)));
		NullCheck(L_17);
		TApplicationException__ctor_mC56AD886EBD86C15A95032A124483E5884A8E1DB(L_17, 6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral03CBA8E278C589E42BDAB6934DE66651359B2DC9)), NULL);
		TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_18 = ___oprot2;
		int32_t L_19 = ___seqid0;
		TMessage_tA7EE1296176D302DA8CB5201A04319D8D3B44043 L_20;
		memset((&L_20), 0, sizeof(L_20));
		TMessage__ctor_m73265A5C74D3D787AAE27FB7A459580C8637D809((&L_20), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB0EC4068BCF9FD745CA5FDE39E8B794AF039A119)), 3, L_19, /*hidden argument*/NULL);
		NullCheck(L_18);
		VirtualActionInvoker1< TMessage_tA7EE1296176D302DA8CB5201A04319D8D3B44043 >::Invoke(6 /* System.Void Thrift.Protocol.TProtocol::WriteMessageBegin(Thrift.Protocol.TMessage) */, L_18, L_20);
		TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_21 = ___oprot2;
		NullCheck(L_17);
		TApplicationException_Write_mF0A4D7FEB7F1464B3242E97D68AAD7459ADB0D56(L_17, L_21, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00a0;
	}// end catch (depth: 1)

IL_00a0:
	{
		TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_22 = ___oprot2;
		NullCheck(L_22);
		VirtualActionInvoker0::Invoke(7 /* System.Void Thrift.Protocol.TProtocol::WriteMessageEnd() */, L_22);
		TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_23 = ___oprot2;
		NullCheck(L_23);
		TTransport_tC5405D0CBA5B6B81DF71447B64F47F76B45C6A53* L_24;
		L_24 = TProtocol_get_Transport_mDD6E0B1DB55B839D353BA90016FE48CAAE91609A_inline(L_23, NULL);
		NullCheck(L_24);
		VirtualActionInvoker0::Invoke(11 /* System.Void Thrift.Transport.TTransport::Flush() */, L_24);
		return;
	}
}
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/Processor::SharedTextureNotify_Process(System.Int32,Thrift.Protocol.TProtocol,Thrift.Protocol.TProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Processor_SharedTextureNotify_Process_m7C65D73C84D0E684CE540D2835E04C2E85A1F679 (Processor_t149BF9A522E68ECC976019AC885916305DADB24E* __this, int32_t ___seqid0, TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* ___iprot1, TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* ___oprot2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandlerProxy_t50A5848626A14999C5ECC9A1DF765110BC836E16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SharedTextureNotify_args_t0EBD41B2A9EFE8C795E976A11ED2D89278821EF9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SharedTextureNotify_result_t773233FF03B1FFB18E8EA55F4632A79916885CE7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral055D976DFFFE69BAA555F56066A8B22EF01EE72E);
		s_Il2CppMethodInitialized = true;
	}
	SharedTextureNotify_args_t0EBD41B2A9EFE8C795E976A11ED2D89278821EF9* V_0 = NULL;
	SharedTextureNotify_result_t773233FF03B1FFB18E8EA55F4632A79916885CE7* V_1 = NULL;
	Exception_t* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		SharedTextureNotify_args_t0EBD41B2A9EFE8C795E976A11ED2D89278821EF9* L_0 = (SharedTextureNotify_args_t0EBD41B2A9EFE8C795E976A11ED2D89278821EF9*)il2cpp_codegen_object_new(SharedTextureNotify_args_t0EBD41B2A9EFE8C795E976A11ED2D89278821EF9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		SharedTextureNotify_args__ctor_mAAED46770AA71CC2762C15DF6B1EA8862175EE5A(L_0, NULL);
		V_0 = L_0;
		SharedTextureNotify_args_t0EBD41B2A9EFE8C795E976A11ED2D89278821EF9* L_1 = V_0;
		TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_2 = ___iprot1;
		NullCheck(L_1);
		SharedTextureNotify_args_Read_m5D80BDDF2CBE156608CE566348F2152B5D57068D(L_1, L_2, NULL);
		TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_3 = ___iprot1;
		NullCheck(L_3);
		VirtualActionInvoker0::Invoke(28 /* System.Void Thrift.Protocol.TProtocol::ReadMessageEnd() */, L_3);
		SharedTextureNotify_result_t773233FF03B1FFB18E8EA55F4632A79916885CE7* L_4 = (SharedTextureNotify_result_t773233FF03B1FFB18E8EA55F4632A79916885CE7*)il2cpp_codegen_object_new(SharedTextureNotify_result_t773233FF03B1FFB18E8EA55F4632A79916885CE7_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		SharedTextureNotify_result__ctor_m017F4BB9C0DA36E09A9315F2EC0A50D41A7CCCD2(L_4, NULL);
		V_1 = L_4;
	}
	try
	{// begin try (depth: 1)
		RuntimeObject* L_5 = __this->___iface__0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_6;
		SharedTextureNotify_args_t0EBD41B2A9EFE8C795E976A11ED2D89278821EF9* L_8 = V_0;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = SharedTextureNotify_args_get_TexId_m125E16F14550F1E5389757C1461376157D35DF83_inline(L_8, NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_9);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_9);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_7;
		SharedTextureNotify_args_t0EBD41B2A9EFE8C795E976A11ED2D89278821EF9* L_11 = V_0;
		NullCheck(L_11);
		SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976* L_12;
		L_12 = SharedTextureNotify_args_get_Texture_m6CF9C6C9D4CDA3D699132B2C7A6E1722B9F3AFA3_inline(L_11, NULL);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_12);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_12);
		NullCheck(((HandlerProxy_t50A5848626A14999C5ECC9A1DF765110BC836E16*)IsInstClass((RuntimeObject*)L_5, HandlerProxy_t50A5848626A14999C5ECC9A1DF765110BC836E16_il2cpp_TypeInfo_var)));
		RuntimeObject* L_13;
		L_13 = HandlerProxy_Invoke_mB23BE90B7DEA26CC9B4697AEDB43566086E07BB7(((HandlerProxy_t50A5848626A14999C5ECC9A1DF765110BC836E16*)IsInstClass((RuntimeObject*)L_5, HandlerProxy_t50A5848626A14999C5ECC9A1DF765110BC836E16_il2cpp_TypeInfo_var)), _stringLiteral055D976DFFFE69BAA555F56066A8B22EF01EE72E, L_10, NULL);
		TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_14 = ___oprot2;
		int32_t L_15 = ___seqid0;
		TMessage_tA7EE1296176D302DA8CB5201A04319D8D3B44043 L_16;
		memset((&L_16), 0, sizeof(L_16));
		TMessage__ctor_m73265A5C74D3D787AAE27FB7A459580C8637D809((&L_16), _stringLiteral055D976DFFFE69BAA555F56066A8B22EF01EE72E, 2, L_15, /*hidden argument*/NULL);
		NullCheck(L_14);
		VirtualActionInvoker1< TMessage_tA7EE1296176D302DA8CB5201A04319D8D3B44043 >::Invoke(6 /* System.Void Thrift.Protocol.TProtocol::WriteMessageBegin(Thrift.Protocol.TMessage) */, L_14, L_16);
		SharedTextureNotify_result_t773233FF03B1FFB18E8EA55F4632A79916885CE7* L_17 = V_1;
		TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_18 = ___oprot2;
		NullCheck(L_17);
		SharedTextureNotify_result_Write_mFDEE36E200645FE5E59157364C34A48EAFF72C87(L_17, L_18, NULL);
		goto IL_00aa;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TTransportException_t7BA88D1856162445F81B5F26DB19EE932E6AAF4B_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0062;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0065;
		}
		throw e;
	}

CATCH_0062:
	{// begin catch(Thrift.Transport.TTransportException)
		IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
	}// end catch (depth: 1)

CATCH_0065:
	{// begin catch(System.Exception)
		V_2 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var)));
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_19;
		L_19 = Console_get_Error_m8DA94D4EFFF9756FF8B44263E256C7341761BD49_inline(NULL);
		NullCheck(L_19);
		VirtualActionInvoker1< String_t* >::Invoke(39 /* System.Void System.IO.TextWriter::WriteLine(System.String) */, L_19, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral88AE3C777C65FC6FF2BFDFDF5C40648388E7431B)));
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_20;
		L_20 = Console_get_Error_m8DA94D4EFFF9756FF8B44263E256C7341761BD49_inline(NULL);
		Exception_t* L_21 = V_2;
		NullCheck(L_21);
		String_t* L_22;
		L_22 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_21);
		NullCheck(L_20);
		VirtualActionInvoker1< String_t* >::Invoke(39 /* System.Void System.IO.TextWriter::WriteLine(System.String) */, L_20, L_22);
		TApplicationException_t75465AADA2A50020180483E1F89A83530AD60F76* L_23 = (TApplicationException_t75465AADA2A50020180483E1F89A83530AD60F76*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TApplicationException_t75465AADA2A50020180483E1F89A83530AD60F76_il2cpp_TypeInfo_var)));
		NullCheck(L_23);
		TApplicationException__ctor_mC56AD886EBD86C15A95032A124483E5884A8E1DB(L_23, 6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral03CBA8E278C589E42BDAB6934DE66651359B2DC9)), NULL);
		TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_24 = ___oprot2;
		int32_t L_25 = ___seqid0;
		TMessage_tA7EE1296176D302DA8CB5201A04319D8D3B44043 L_26;
		memset((&L_26), 0, sizeof(L_26));
		TMessage__ctor_m73265A5C74D3D787AAE27FB7A459580C8637D809((&L_26), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral055D976DFFFE69BAA555F56066A8B22EF01EE72E)), 3, L_25, /*hidden argument*/NULL);
		NullCheck(L_24);
		VirtualActionInvoker1< TMessage_tA7EE1296176D302DA8CB5201A04319D8D3B44043 >::Invoke(6 /* System.Void Thrift.Protocol.TProtocol::WriteMessageBegin(Thrift.Protocol.TMessage) */, L_24, L_26);
		TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_27 = ___oprot2;
		NullCheck(L_23);
		TApplicationException_Write_mF0A4D7FEB7F1464B3242E97D68AAD7459ADB0D56(L_23, L_27, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00aa;
	}// end catch (depth: 1)

IL_00aa:
	{
		TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_28 = ___oprot2;
		NullCheck(L_28);
		VirtualActionInvoker0::Invoke(7 /* System.Void Thrift.Protocol.TProtocol::WriteMessageEnd() */, L_28);
		TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_29 = ___oprot2;
		NullCheck(L_29);
		TTransport_tC5405D0CBA5B6B81DF71447B64F47F76B45C6A53* L_30;
		L_30 = TProtocol_get_Transport_mDD6E0B1DB55B839D353BA90016FE48CAAE91609A_inline(L_29, NULL);
		NullCheck(L_30);
		VirtualActionInvoker0::Invoke(11 /* System.Void Thrift.Transport.TTransport::Flush() */, L_30);
		return;
	}
}
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/Processor::SharedTextureRequest_Process(System.Int32,Thrift.Protocol.TProtocol,Thrift.Protocol.TProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Processor_SharedTextureRequest_Process_m61E5A9804A7717B9C545C1133145C46A12C594F5 (Processor_t149BF9A522E68ECC976019AC885916305DADB24E* __this, int32_t ___seqid0, TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* ___iprot1, TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* ___oprot2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandlerProxy_t50A5848626A14999C5ECC9A1DF765110BC836E16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SharedTextureRequest_args_tD5AE63605C74E527A24E126E22DAFFB08F81D4B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SharedTextureRequest_result_tF57E540E873EE83BE065ED81A2313266C8AD1961_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C9F0462C280DB50287DB739E320C5C2346AB984);
		s_Il2CppMethodInitialized = true;
	}
	SharedTextureRequest_args_tD5AE63605C74E527A24E126E22DAFFB08F81D4B7* V_0 = NULL;
	SharedTextureRequest_result_tF57E540E873EE83BE065ED81A2313266C8AD1961* V_1 = NULL;
	Exception_t* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		SharedTextureRequest_args_tD5AE63605C74E527A24E126E22DAFFB08F81D4B7* L_0 = (SharedTextureRequest_args_tD5AE63605C74E527A24E126E22DAFFB08F81D4B7*)il2cpp_codegen_object_new(SharedTextureRequest_args_tD5AE63605C74E527A24E126E22DAFFB08F81D4B7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		SharedTextureRequest_args__ctor_mE8E4DE4BEF073E388B9B87BD00BE74148C2538C9(L_0, NULL);
		V_0 = L_0;
		SharedTextureRequest_args_tD5AE63605C74E527A24E126E22DAFFB08F81D4B7* L_1 = V_0;
		TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_2 = ___iprot1;
		NullCheck(L_1);
		SharedTextureRequest_args_Read_mBFC6C2D90C567203BB6E2AF126CAB28CE8F3B1CD(L_1, L_2, NULL);
		TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_3 = ___iprot1;
		NullCheck(L_3);
		VirtualActionInvoker0::Invoke(28 /* System.Void Thrift.Protocol.TProtocol::ReadMessageEnd() */, L_3);
		SharedTextureRequest_result_tF57E540E873EE83BE065ED81A2313266C8AD1961* L_4 = (SharedTextureRequest_result_tF57E540E873EE83BE065ED81A2313266C8AD1961*)il2cpp_codegen_object_new(SharedTextureRequest_result_tF57E540E873EE83BE065ED81A2313266C8AD1961_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		SharedTextureRequest_result__ctor_mA0A006973ABCD0228000AE8DBF8728468FAC21CF(L_4, NULL);
		V_1 = L_4;
	}
	try
	{// begin try (depth: 1)
		SharedTextureRequest_result_tF57E540E873EE83BE065ED81A2313266C8AD1961* L_5 = V_1;
		RuntimeObject* L_6 = __this->___iface__0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_7;
		SharedTextureRequest_args_tD5AE63605C74E527A24E126E22DAFFB08F81D4B7* L_9 = V_0;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = SharedTextureRequest_args_get_TexId_m475442629A7A94876AA466576474A97222451577_inline(L_9, NULL);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_10);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_10);
		NullCheck(((HandlerProxy_t50A5848626A14999C5ECC9A1DF765110BC836E16*)IsInstClass((RuntimeObject*)L_6, HandlerProxy_t50A5848626A14999C5ECC9A1DF765110BC836E16_il2cpp_TypeInfo_var)));
		RuntimeObject* L_11;
		L_11 = HandlerProxy_Invoke_mB23BE90B7DEA26CC9B4697AEDB43566086E07BB7(((HandlerProxy_t50A5848626A14999C5ECC9A1DF765110BC836E16*)IsInstClass((RuntimeObject*)L_6, HandlerProxy_t50A5848626A14999C5ECC9A1DF765110BC836E16_il2cpp_TypeInfo_var)), _stringLiteral5C9F0462C280DB50287DB739E320C5C2346AB984, L_8, NULL);
		NullCheck(L_5);
		SharedTextureRequest_result_set_Success_m6AA5CB2EA56C8E8A5F36742BA75BDF0355945913(L_5, ((SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976*)CastclassClass((RuntimeObject*)L_11, SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976_il2cpp_TypeInfo_var)), NULL);
		TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_12 = ___oprot2;
		int32_t L_13 = ___seqid0;
		TMessage_tA7EE1296176D302DA8CB5201A04319D8D3B44043 L_14;
		memset((&L_14), 0, sizeof(L_14));
		TMessage__ctor_m73265A5C74D3D787AAE27FB7A459580C8637D809((&L_14), _stringLiteral5C9F0462C280DB50287DB739E320C5C2346AB984, 2, L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		VirtualActionInvoker1< TMessage_tA7EE1296176D302DA8CB5201A04319D8D3B44043 >::Invoke(6 /* System.Void Thrift.Protocol.TProtocol::WriteMessageBegin(Thrift.Protocol.TMessage) */, L_12, L_14);
		SharedTextureRequest_result_tF57E540E873EE83BE065ED81A2313266C8AD1961* L_15 = V_1;
		TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_16 = ___oprot2;
		NullCheck(L_15);
		SharedTextureRequest_result_Write_m4241976788BC1936A8F060CCDE804DBC740542DA(L_15, L_16, NULL);
		goto IL_00ab;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TTransportException_t7BA88D1856162445F81B5F26DB19EE932E6AAF4B_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0063;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0066;
		}
		throw e;
	}

CATCH_0063:
	{// begin catch(Thrift.Transport.TTransportException)
		IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
	}// end catch (depth: 1)

CATCH_0066:
	{// begin catch(System.Exception)
		V_2 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var)));
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_17;
		L_17 = Console_get_Error_m8DA94D4EFFF9756FF8B44263E256C7341761BD49_inline(NULL);
		NullCheck(L_17);
		VirtualActionInvoker1< String_t* >::Invoke(39 /* System.Void System.IO.TextWriter::WriteLine(System.String) */, L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral88AE3C777C65FC6FF2BFDFDF5C40648388E7431B)));
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_18;
		L_18 = Console_get_Error_m8DA94D4EFFF9756FF8B44263E256C7341761BD49_inline(NULL);
		Exception_t* L_19 = V_2;
		NullCheck(L_19);
		String_t* L_20;
		L_20 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_19);
		NullCheck(L_18);
		VirtualActionInvoker1< String_t* >::Invoke(39 /* System.Void System.IO.TextWriter::WriteLine(System.String) */, L_18, L_20);
		TApplicationException_t75465AADA2A50020180483E1F89A83530AD60F76* L_21 = (TApplicationException_t75465AADA2A50020180483E1F89A83530AD60F76*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TApplicationException_t75465AADA2A50020180483E1F89A83530AD60F76_il2cpp_TypeInfo_var)));
		NullCheck(L_21);
		TApplicationException__ctor_mC56AD886EBD86C15A95032A124483E5884A8E1DB(L_21, 6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral03CBA8E278C589E42BDAB6934DE66651359B2DC9)), NULL);
		TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_22 = ___oprot2;
		int32_t L_23 = ___seqid0;
		TMessage_tA7EE1296176D302DA8CB5201A04319D8D3B44043 L_24;
		memset((&L_24), 0, sizeof(L_24));
		TMessage__ctor_m73265A5C74D3D787AAE27FB7A459580C8637D809((&L_24), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5C9F0462C280DB50287DB739E320C5C2346AB984)), 3, L_23, /*hidden argument*/NULL);
		NullCheck(L_22);
		VirtualActionInvoker1< TMessage_tA7EE1296176D302DA8CB5201A04319D8D3B44043 >::Invoke(6 /* System.Void Thrift.Protocol.TProtocol::WriteMessageBegin(Thrift.Protocol.TMessage) */, L_22, L_24);
		TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_25 = ___oprot2;
		NullCheck(L_21);
		TApplicationException_Write_mF0A4D7FEB7F1464B3242E97D68AAD7459ADB0D56(L_21, L_25, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00ab;
	}// end catch (depth: 1)

IL_00ab:
	{
		TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_26 = ___oprot2;
		NullCheck(L_26);
		VirtualActionInvoker0::Invoke(7 /* System.Void Thrift.Protocol.TProtocol::WriteMessageEnd() */, L_26);
		TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_27 = ___oprot2;
		NullCheck(L_27);
		TTransport_tC5405D0CBA5B6B81DF71447B64F47F76B45C6A53* L_28;
		L_28 = TProtocol_get_Transport_mDD6E0B1DB55B839D353BA90016FE48CAAE91609A_inline(L_27, NULL);
		NullCheck(L_28);
		VirtualActionInvoker0::Invoke(11 /* System.Void Thrift.Transport.TTransport::Flush() */, L_28);
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
void ProcessFunction_Invoke_m491088033029858C7E02390BC87BE3C46F70E4AF_Multicast(ProcessFunction_t6587BCE70A9CECF27480919C464CD9C54E2DD0DB* __this, int32_t ___seqid0, TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* ___iprot1, TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* ___oprot2, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ProcessFunction_t6587BCE70A9CECF27480919C464CD9C54E2DD0DB* currentDelegate = reinterpret_cast<ProcessFunction_t6587BCE70A9CECF27480919C464CD9C54E2DD0DB*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1*, TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___seqid0, ___iprot1, ___oprot2, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ProcessFunction_Invoke_m491088033029858C7E02390BC87BE3C46F70E4AF_Open(ProcessFunction_t6587BCE70A9CECF27480919C464CD9C54E2DD0DB* __this, int32_t ___seqid0, TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* ___iprot1, TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* ___oprot2, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1*, TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___seqid0, ___iprot1, ___oprot2, method);
}
void ProcessFunction_Invoke_m491088033029858C7E02390BC87BE3C46F70E4AF_OpenStaticInvoker(ProcessFunction_t6587BCE70A9CECF27480919C464CD9C54E2DD0DB* __this, int32_t ___seqid0, TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* ___iprot1, TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* ___oprot2, const RuntimeMethod* method)
{
	InvokerActionInvoker3< int32_t, TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1*, TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* >::Invoke(__this->___method_ptr_0, method, NULL, ___seqid0, ___iprot1, ___oprot2);
}
void ProcessFunction_Invoke_m491088033029858C7E02390BC87BE3C46F70E4AF_ClosedStaticInvoker(ProcessFunction_t6587BCE70A9CECF27480919C464CD9C54E2DD0DB* __this, int32_t ___seqid0, TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* ___iprot1, TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* ___oprot2, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, int32_t, TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1*, TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___seqid0, ___iprot1, ___oprot2);
}
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/Processor/ProcessFunction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProcessFunction__ctor_mDD819122361247B1C7A46FE821EA1914FE07CA3D (ProcessFunction_t6587BCE70A9CECF27480919C464CD9C54E2DD0DB* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ProcessFunction_Invoke_m491088033029858C7E02390BC87BE3C46F70E4AF_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ProcessFunction_Invoke_m491088033029858C7E02390BC87BE3C46F70E4AF_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ProcessFunction_Invoke_m491088033029858C7E02390BC87BE3C46F70E4AF_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&ProcessFunction_Invoke_m491088033029858C7E02390BC87BE3C46F70E4AF_Multicast;
}
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/Processor/ProcessFunction::Invoke(System.Int32,Thrift.Protocol.TProtocol,Thrift.Protocol.TProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProcessFunction_Invoke_m491088033029858C7E02390BC87BE3C46F70E4AF (ProcessFunction_t6587BCE70A9CECF27480919C464CD9C54E2DD0DB* __this, int32_t ___seqid0, TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* ___iprot1, TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* ___oprot2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1*, TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___seqid0, ___iprot1, ___oprot2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/Processor/ProcessFunction::BeginInvoke(System.Int32,Thrift.Protocol.TProtocol,Thrift.Protocol.TProtocol,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ProcessFunction_BeginInvoke_m1BF944FA06E357E1824315C093DCECE554678626 (ProcessFunction_t6587BCE70A9CECF27480919C464CD9C54E2DD0DB* __this, int32_t ___seqid0, TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* ___iprot1, TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* ___oprot2, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback3, RuntimeObject* ___object4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___seqid0);
	__d_args[1] = ___iprot1;
	__d_args[2] = ___oprot2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/Processor/ProcessFunction::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProcessFunction_EndInvoke_mCF89D5929BA26C7D4818922E4B53A04410CBD846 (ProcessFunction_t6587BCE70A9CECF27480919C464CD9C54E2DD0DB* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/validate_ping_args::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void validate_ping_args__ctor_m9214D825B8CBA702E7B487F332361B4E05C4407E (validate_ping_args_t14208A7DFB4229A49964DD8F10489711F552E9DE* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/validate_ping_args::Read(Thrift.Protocol.TProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void validate_ping_args_Read_m9FD0BA0618294795551B7197EAC1E2BB37ABC037 (validate_ping_args_t14208A7DFB4229A49964DD8F10489711F552E9DE* __this, TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* ___iprot0, const RuntimeMethod* method) 
{
	TField_tF4D9D8EFE767C142914693E0E787547F0213D334 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_0 = ___iprot0;
		NullCheck(L_0);
		TProtocol_IncrementRecursionDepth_m92B440A7308F6D7012C73B74A6406855A29FF58B(L_0, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0042:
			{// begin finally (depth: 1)
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_1 = ___iprot0;
				NullCheck(L_1);
				TProtocol_DecrementRecursionDepth_m049900374B8368A8AEB03E6FC93DF288EA1BE44B(L_1, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_2 = ___iprot0;
				NullCheck(L_2);
				TStruct_tAD67F1F0C45235334F9440B6A587DB03A0CE5C96 L_3;
				L_3 = VirtualFuncInvoker0< TStruct_tAD67F1F0C45235334F9440B6A587DB03A0CE5C96 >::Invoke(29 /* Thrift.Protocol.TStruct Thrift.Protocol.TProtocol::ReadStructBegin() */, L_2);
			}

IL_000d_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_4 = ___iprot0;
				NullCheck(L_4);
				TField_tF4D9D8EFE767C142914693E0E787547F0213D334 L_5;
				L_5 = VirtualFuncInvoker0< TField_tF4D9D8EFE767C142914693E0E787547F0213D334 >::Invoke(31 /* Thrift.Protocol.TField Thrift.Protocol.TProtocol::ReadFieldBegin() */, L_4);
				V_0 = L_5;
				uint8_t L_6;
				L_6 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_0), NULL);
				if (!L_6)
				{
					goto IL_003a_1;
				}
			}
			{
				int16_t L_7;
				L_7 = TField_get_ID_m512A7F246CCD70AD2C473FA5AF09E6ECC8AB8B1A_inline((&V_0), NULL);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_8 = ___iprot0;
				uint8_t L_9;
				L_9 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_0), NULL);
				TProtocolUtil_Skip_m61E2B7C700479ECC6AD4E86636C1235C30B5A38F(L_8, L_9, NULL);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_10 = ___iprot0;
				NullCheck(L_10);
				VirtualActionInvoker0::Invoke(32 /* System.Void Thrift.Protocol.TProtocol::ReadFieldEnd() */, L_10);
				goto IL_000d_1;
			}

IL_003a_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_11 = ___iprot0;
				NullCheck(L_11);
				VirtualActionInvoker0::Invoke(30 /* System.Void Thrift.Protocol.TProtocol::ReadStructEnd() */, L_11);
				goto IL_0049;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0049:
	{
		return;
	}
}
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/validate_ping_args::Write(Thrift.Protocol.TProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void validate_ping_args_Write_m8935EBA82F2F866A47AEEEABF806816B31161B34 (validate_ping_args_t14208A7DFB4229A49964DD8F10489711F552E9DE* __this, TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* ___oprot0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D0175476BE9BBA67CCC85E742293BDBA08005DA);
		s_Il2CppMethodInitialized = true;
	}
	TStruct_tAD67F1F0C45235334F9440B6A587DB03A0CE5C96 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_0 = ___oprot0;
		NullCheck(L_0);
		TProtocol_IncrementRecursionDepth_m92B440A7308F6D7012C73B74A6406855A29FF58B(L_0, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0027:
			{// begin finally (depth: 1)
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_1 = ___oprot0;
				NullCheck(L_1);
				TProtocol_DecrementRecursionDepth_m049900374B8368A8AEB03E6FC93DF288EA1BE44B(L_1, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			TStruct__ctor_mD56EA112D651038138D3BC7203C3606718E5CB3F((&V_0), _stringLiteral9D0175476BE9BBA67CCC85E742293BDBA08005DA, NULL);
			TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_2 = ___oprot0;
			TStruct_tAD67F1F0C45235334F9440B6A587DB03A0CE5C96 L_3 = V_0;
			NullCheck(L_2);
			VirtualActionInvoker1< TStruct_tAD67F1F0C45235334F9440B6A587DB03A0CE5C96 >::Invoke(8 /* System.Void Thrift.Protocol.TProtocol::WriteStructBegin(Thrift.Protocol.TStruct) */, L_2, L_3);
			TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_4 = ___oprot0;
			NullCheck(L_4);
			VirtualActionInvoker0::Invoke(12 /* System.Void Thrift.Protocol.TProtocol::WriteFieldStop() */, L_4);
			TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_5 = ___oprot0;
			NullCheck(L_5);
			VirtualActionInvoker0::Invoke(9 /* System.Void Thrift.Protocol.TProtocol::WriteStructEnd() */, L_5);
			goto IL_002e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002e:
	{
		return;
	}
}
// System.String BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/validate_ping_args::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* validate_ping_args_ToString_mCB7CC8B08F90D57BE5FDF2892B4ABA4FB9E83338 (validate_ping_args_t14208A7DFB4229A49964DD8F10489711F552E9DE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF9557E791B31EBAF8BC12983AA5FB8B02AAD08B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_mCD797D942316CB356205FD96415B0B7581CDAD60(L_0, _stringLiteralAF9557E791B31EBAF8BC12983AA5FB8B02AAD08B, NULL);
		StringBuilder_t* L_1 = L_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_1, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D, NULL);
		NullCheck(L_1);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_1);
		return L_3;
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
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/validate_ping_result::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void validate_ping_result__ctor_m4E92622959821AA5D47FCA0F97EDA0525A2805F2 (validate_ping_result_t0CBE71D3C54F5CABE445DD8EAD534613297BB0C0* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/validate_ping_result::Read(Thrift.Protocol.TProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void validate_ping_result_Read_m831E2CCD687F50A27464AD14415C635F82612C89 (validate_ping_result_t0CBE71D3C54F5CABE445DD8EAD534613297BB0C0* __this, TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* ___iprot0, const RuntimeMethod* method) 
{
	TField_tF4D9D8EFE767C142914693E0E787547F0213D334 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_0 = ___iprot0;
		NullCheck(L_0);
		TProtocol_IncrementRecursionDepth_m92B440A7308F6D7012C73B74A6406855A29FF58B(L_0, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0042:
			{// begin finally (depth: 1)
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_1 = ___iprot0;
				NullCheck(L_1);
				TProtocol_DecrementRecursionDepth_m049900374B8368A8AEB03E6FC93DF288EA1BE44B(L_1, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_2 = ___iprot0;
				NullCheck(L_2);
				TStruct_tAD67F1F0C45235334F9440B6A587DB03A0CE5C96 L_3;
				L_3 = VirtualFuncInvoker0< TStruct_tAD67F1F0C45235334F9440B6A587DB03A0CE5C96 >::Invoke(29 /* Thrift.Protocol.TStruct Thrift.Protocol.TProtocol::ReadStructBegin() */, L_2);
			}

IL_000d_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_4 = ___iprot0;
				NullCheck(L_4);
				TField_tF4D9D8EFE767C142914693E0E787547F0213D334 L_5;
				L_5 = VirtualFuncInvoker0< TField_tF4D9D8EFE767C142914693E0E787547F0213D334 >::Invoke(31 /* Thrift.Protocol.TField Thrift.Protocol.TProtocol::ReadFieldBegin() */, L_4);
				V_0 = L_5;
				uint8_t L_6;
				L_6 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_0), NULL);
				if (!L_6)
				{
					goto IL_003a_1;
				}
			}
			{
				int16_t L_7;
				L_7 = TField_get_ID_m512A7F246CCD70AD2C473FA5AF09E6ECC8AB8B1A_inline((&V_0), NULL);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_8 = ___iprot0;
				uint8_t L_9;
				L_9 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_0), NULL);
				TProtocolUtil_Skip_m61E2B7C700479ECC6AD4E86636C1235C30B5A38F(L_8, L_9, NULL);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_10 = ___iprot0;
				NullCheck(L_10);
				VirtualActionInvoker0::Invoke(32 /* System.Void Thrift.Protocol.TProtocol::ReadFieldEnd() */, L_10);
				goto IL_000d_1;
			}

IL_003a_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_11 = ___iprot0;
				NullCheck(L_11);
				VirtualActionInvoker0::Invoke(30 /* System.Void Thrift.Protocol.TProtocol::ReadStructEnd() */, L_11);
				goto IL_0049;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0049:
	{
		return;
	}
}
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/validate_ping_result::Write(Thrift.Protocol.TProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void validate_ping_result_Write_mB1206BEB1CCA0C14126A1E210DFAECD77D60373F (validate_ping_result_t0CBE71D3C54F5CABE445DD8EAD534613297BB0C0* __this, TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* ___oprot0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7AFCC09A21ACC5440E1F93631010094682B02C63);
		s_Il2CppMethodInitialized = true;
	}
	TStruct_tAD67F1F0C45235334F9440B6A587DB03A0CE5C96 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_0 = ___oprot0;
		NullCheck(L_0);
		TProtocol_IncrementRecursionDepth_m92B440A7308F6D7012C73B74A6406855A29FF58B(L_0, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0027:
			{// begin finally (depth: 1)
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_1 = ___oprot0;
				NullCheck(L_1);
				TProtocol_DecrementRecursionDepth_m049900374B8368A8AEB03E6FC93DF288EA1BE44B(L_1, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			TStruct__ctor_mD56EA112D651038138D3BC7203C3606718E5CB3F((&V_0), _stringLiteral7AFCC09A21ACC5440E1F93631010094682B02C63, NULL);
			TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_2 = ___oprot0;
			TStruct_tAD67F1F0C45235334F9440B6A587DB03A0CE5C96 L_3 = V_0;
			NullCheck(L_2);
			VirtualActionInvoker1< TStruct_tAD67F1F0C45235334F9440B6A587DB03A0CE5C96 >::Invoke(8 /* System.Void Thrift.Protocol.TProtocol::WriteStructBegin(Thrift.Protocol.TStruct) */, L_2, L_3);
			TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_4 = ___oprot0;
			NullCheck(L_4);
			VirtualActionInvoker0::Invoke(12 /* System.Void Thrift.Protocol.TProtocol::WriteFieldStop() */, L_4);
			TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_5 = ___oprot0;
			NullCheck(L_5);
			VirtualActionInvoker0::Invoke(9 /* System.Void Thrift.Protocol.TProtocol::WriteStructEnd() */, L_5);
			goto IL_002e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002e:
	{
		return;
	}
}
// System.String BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/validate_ping_result::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* validate_ping_result_ToString_m99C8777188495710D37763E925B187BFD5D8D150 (validate_ping_result_t0CBE71D3C54F5CABE445DD8EAD534613297BB0C0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC350E4C49C5ABF496917B0361BC1202DE06AE05C);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_mCD797D942316CB356205FD96415B0B7581CDAD60(L_0, _stringLiteralC350E4C49C5ABF496917B0361BC1202DE06AE05C, NULL);
		StringBuilder_t* L_1 = L_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_1, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D, NULL);
		NullCheck(L_1);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_1);
		return L_3;
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
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/validate_function_list_args::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void validate_function_list_args__ctor_mB11592EB372EA1C4B6D435DA418D54AA6429ED35 (validate_function_list_args_t63D913089E5FFB666F13DFA7CB2DA5B2C9573075* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/validate_function_list_args::Read(Thrift.Protocol.TProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void validate_function_list_args_Read_m465BBAE050E7F9A392EC84AC820CF71FF92514EC (validate_function_list_args_t63D913089E5FFB666F13DFA7CB2DA5B2C9573075* __this, TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* ___iprot0, const RuntimeMethod* method) 
{
	TField_tF4D9D8EFE767C142914693E0E787547F0213D334 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_0 = ___iprot0;
		NullCheck(L_0);
		TProtocol_IncrementRecursionDepth_m92B440A7308F6D7012C73B74A6406855A29FF58B(L_0, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0042:
			{// begin finally (depth: 1)
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_1 = ___iprot0;
				NullCheck(L_1);
				TProtocol_DecrementRecursionDepth_m049900374B8368A8AEB03E6FC93DF288EA1BE44B(L_1, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_2 = ___iprot0;
				NullCheck(L_2);
				TStruct_tAD67F1F0C45235334F9440B6A587DB03A0CE5C96 L_3;
				L_3 = VirtualFuncInvoker0< TStruct_tAD67F1F0C45235334F9440B6A587DB03A0CE5C96 >::Invoke(29 /* Thrift.Protocol.TStruct Thrift.Protocol.TProtocol::ReadStructBegin() */, L_2);
			}

IL_000d_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_4 = ___iprot0;
				NullCheck(L_4);
				TField_tF4D9D8EFE767C142914693E0E787547F0213D334 L_5;
				L_5 = VirtualFuncInvoker0< TField_tF4D9D8EFE767C142914693E0E787547F0213D334 >::Invoke(31 /* Thrift.Protocol.TField Thrift.Protocol.TProtocol::ReadFieldBegin() */, L_4);
				V_0 = L_5;
				uint8_t L_6;
				L_6 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_0), NULL);
				if (!L_6)
				{
					goto IL_003a_1;
				}
			}
			{
				int16_t L_7;
				L_7 = TField_get_ID_m512A7F246CCD70AD2C473FA5AF09E6ECC8AB8B1A_inline((&V_0), NULL);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_8 = ___iprot0;
				uint8_t L_9;
				L_9 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_0), NULL);
				TProtocolUtil_Skip_m61E2B7C700479ECC6AD4E86636C1235C30B5A38F(L_8, L_9, NULL);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_10 = ___iprot0;
				NullCheck(L_10);
				VirtualActionInvoker0::Invoke(32 /* System.Void Thrift.Protocol.TProtocol::ReadFieldEnd() */, L_10);
				goto IL_000d_1;
			}

IL_003a_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_11 = ___iprot0;
				NullCheck(L_11);
				VirtualActionInvoker0::Invoke(30 /* System.Void Thrift.Protocol.TProtocol::ReadStructEnd() */, L_11);
				goto IL_0049;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0049:
	{
		return;
	}
}
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/validate_function_list_args::Write(Thrift.Protocol.TProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void validate_function_list_args_Write_m88AC862C86DD274BA1CE192CD379AA60A5B89329 (validate_function_list_args_t63D913089E5FFB666F13DFA7CB2DA5B2C9573075* __this, TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* ___oprot0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEE434AEEDE26978EFB44ACAD6C3AC40AB43B7BF4);
		s_Il2CppMethodInitialized = true;
	}
	TStruct_tAD67F1F0C45235334F9440B6A587DB03A0CE5C96 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_0 = ___oprot0;
		NullCheck(L_0);
		TProtocol_IncrementRecursionDepth_m92B440A7308F6D7012C73B74A6406855A29FF58B(L_0, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0027:
			{// begin finally (depth: 1)
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_1 = ___oprot0;
				NullCheck(L_1);
				TProtocol_DecrementRecursionDepth_m049900374B8368A8AEB03E6FC93DF288EA1BE44B(L_1, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			TStruct__ctor_mD56EA112D651038138D3BC7203C3606718E5CB3F((&V_0), _stringLiteralEE434AEEDE26978EFB44ACAD6C3AC40AB43B7BF4, NULL);
			TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_2 = ___oprot0;
			TStruct_tAD67F1F0C45235334F9440B6A587DB03A0CE5C96 L_3 = V_0;
			NullCheck(L_2);
			VirtualActionInvoker1< TStruct_tAD67F1F0C45235334F9440B6A587DB03A0CE5C96 >::Invoke(8 /* System.Void Thrift.Protocol.TProtocol::WriteStructBegin(Thrift.Protocol.TStruct) */, L_2, L_3);
			TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_4 = ___oprot0;
			NullCheck(L_4);
			VirtualActionInvoker0::Invoke(12 /* System.Void Thrift.Protocol.TProtocol::WriteFieldStop() */, L_4);
			TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_5 = ___oprot0;
			NullCheck(L_5);
			VirtualActionInvoker0::Invoke(9 /* System.Void Thrift.Protocol.TProtocol::WriteStructEnd() */, L_5);
			goto IL_002e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002e:
	{
		return;
	}
}
// System.String BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/validate_function_list_args::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* validate_function_list_args_ToString_m11657E043C9939A121FB22EB9CA9FB8FA20091D3 (validate_function_list_args_t63D913089E5FFB666F13DFA7CB2DA5B2C9573075* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2B1B56EF13C7DBF5E740062431DABC34AC0F400);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_mCD797D942316CB356205FD96415B0B7581CDAD60(L_0, _stringLiteralC2B1B56EF13C7DBF5E740062431DABC34AC0F400, NULL);
		StringBuilder_t* L_1 = L_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_1, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D, NULL);
		NullCheck(L_1);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_1);
		return L_3;
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
// System.Collections.Generic.List`1<System.String> BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/validate_function_list_result::get_Success()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* validate_function_list_result_get_Success_m935126A826ED7821006377EE3AEFAE0F418630F0 (validate_function_list_result_tEA96B244E3A94307177B3D8736902272FDCE0944* __this, const RuntimeMethod* method) 
{
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->____success_0;
		return L_0;
	}
}
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/validate_function_list_result::set_Success(System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void validate_function_list_result_set_Success_m3AEFB0C5A7DCFBF865C5B59BD3360797EAC32039 (validate_function_list_result_tEA96B244E3A94307177B3D8736902272FDCE0944* __this, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___value0, const RuntimeMethod* method) 
{
	{
		Isset_tF47BC457C347A05925D0A490A693A44F649EA8A0* L_0 = (&__this->_____isset_1);
		L_0->___success_0 = (bool)1;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1 = ___value0;
		__this->____success_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____success_0), (void*)L_1);
		return;
	}
}
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/validate_function_list_result::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void validate_function_list_result__ctor_m3504DA701B4E1EEBBAEE4F8024A03AD212D95282 (validate_function_list_result_tEA96B244E3A94307177B3D8736902272FDCE0944* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/validate_function_list_result::Read(Thrift.Protocol.TProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void validate_function_list_result_Read_m89FA5A2D381ECC57B36945EDB5CA9D057B1ED73C (validate_function_list_result_tEA96B244E3A94307177B3D8736902272FDCE0944* __this, TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* ___iprot0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TField_tF4D9D8EFE767C142914693E0E787547F0213D334 V_0;
	memset((&V_0), 0, sizeof(V_0));
	TList_t901068FC67AF1D67BF97378377E2FBDB40D54C1B V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	{
		TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_0 = ___iprot0;
		NullCheck(L_0);
		TProtocol_IncrementRecursionDepth_m92B440A7308F6D7012C73B74A6406855A29FF58B(L_0, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00a0:
			{// begin finally (depth: 1)
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_1 = ___iprot0;
				NullCheck(L_1);
				TProtocol_DecrementRecursionDepth_m049900374B8368A8AEB03E6FC93DF288EA1BE44B(L_1, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_2 = ___iprot0;
				NullCheck(L_2);
				TStruct_tAD67F1F0C45235334F9440B6A587DB03A0CE5C96 L_3;
				L_3 = VirtualFuncInvoker0< TStruct_tAD67F1F0C45235334F9440B6A587DB03A0CE5C96 >::Invoke(29 /* Thrift.Protocol.TStruct Thrift.Protocol.TProtocol::ReadStructBegin() */, L_2);
			}

IL_000d_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_4 = ___iprot0;
				NullCheck(L_4);
				TField_tF4D9D8EFE767C142914693E0E787547F0213D334 L_5;
				L_5 = VirtualFuncInvoker0< TField_tF4D9D8EFE767C142914693E0E787547F0213D334 >::Invoke(31 /* Thrift.Protocol.TField Thrift.Protocol.TProtocol::ReadFieldBegin() */, L_4);
				V_0 = L_5;
				uint8_t L_6;
				L_6 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_0), NULL);
				if (!L_6)
				{
					goto IL_0098_1;
				}
			}
			{
				int16_t L_7;
				L_7 = TField_get_ID_m512A7F246CCD70AD2C473FA5AF09E6ECC8AB8B1A_inline((&V_0), NULL);
				if ((!(((uint32_t)L_7) == ((uint32_t)0))))
				{
					goto IL_0080_1;
				}
			}
			{
				uint8_t L_8;
				L_8 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_0), NULL);
				if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)15)))))
				{
					goto IL_0071_1;
				}
			}
			{
				List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_9 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
				NullCheck(L_9);
				List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_9, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
				validate_function_list_result_set_Success_m3AEFB0C5A7DCFBF865C5B59BD3360797EAC32039(__this, L_9, NULL);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_10 = ___iprot0;
				NullCheck(L_10);
				TList_t901068FC67AF1D67BF97378377E2FBDB40D54C1B L_11;
				L_11 = VirtualFuncInvoker0< TList_t901068FC67AF1D67BF97378377E2FBDB40D54C1B >::Invoke(35 /* Thrift.Protocol.TList Thrift.Protocol.TProtocol::ReadListBegin() */, L_10);
				V_1 = L_11;
				V_2 = 0;
				goto IL_005f_1;
			}

IL_0048_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_12 = ___iprot0;
				NullCheck(L_12);
				String_t* L_13;
				L_13 = VirtualFuncInvoker0< String_t* >::Invoke(45 /* System.String Thrift.Protocol.TProtocol::ReadString() */, L_12);
				V_3 = L_13;
				List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_14;
				L_14 = validate_function_list_result_get_Success_m935126A826ED7821006377EE3AEFAE0F418630F0_inline(__this, NULL);
				String_t* L_15 = V_3;
				NullCheck(L_14);
				List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_14, L_15, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
				int32_t L_16 = V_2;
				V_2 = ((int32_t)il2cpp_codegen_add(L_16, 1));
			}

IL_005f_1:
			{
				int32_t L_17 = V_2;
				int32_t L_18;
				L_18 = TList_get_Count_mC247FFC2E5F7D3F1AD406B549324A08C2097C6DC_inline((&V_1), NULL);
				if ((((int32_t)L_17) < ((int32_t)L_18)))
				{
					goto IL_0048_1;
				}
			}
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_19 = ___iprot0;
				NullCheck(L_19);
				VirtualActionInvoker0::Invoke(36 /* System.Void Thrift.Protocol.TProtocol::ReadListEnd() */, L_19);
				goto IL_008d_1;
			}

IL_0071_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_20 = ___iprot0;
				uint8_t L_21;
				L_21 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_0), NULL);
				TProtocolUtil_Skip_m61E2B7C700479ECC6AD4E86636C1235C30B5A38F(L_20, L_21, NULL);
				goto IL_008d_1;
			}

IL_0080_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_22 = ___iprot0;
				uint8_t L_23;
				L_23 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_0), NULL);
				TProtocolUtil_Skip_m61E2B7C700479ECC6AD4E86636C1235C30B5A38F(L_22, L_23, NULL);
			}

IL_008d_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_24 = ___iprot0;
				NullCheck(L_24);
				VirtualActionInvoker0::Invoke(32 /* System.Void Thrift.Protocol.TProtocol::ReadFieldEnd() */, L_24);
				goto IL_000d_1;
			}

IL_0098_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_25 = ___iprot0;
				NullCheck(L_25);
				VirtualActionInvoker0::Invoke(30 /* System.Void Thrift.Protocol.TProtocol::ReadStructEnd() */, L_25);
				goto IL_00a7;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a7:
	{
		return;
	}
}
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/validate_function_list_result::Write(Thrift.Protocol.TProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void validate_function_list_result_Write_m376C3EB769DD55BCA92DE7F8DD8DC3DF56C6A161 (validate_function_list_result_tEA96B244E3A94307177B3D8736902272FDCE0944* __this, TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* ___oprot0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral04D2B1D140B5E3F8052F064883A6A5BFDEE231C8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6477FB0CBF4E978465F5CB8C51161A34304B3890);
		s_Il2CppMethodInitialized = true;
	}
	TStruct_tAD67F1F0C45235334F9440B6A587DB03A0CE5C96 V_0;
	memset((&V_0), 0, sizeof(V_0));
	TField_tF4D9D8EFE767C142914693E0E787547F0213D334 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 V_2;
	memset((&V_2), 0, sizeof(V_2));
	String_t* V_3 = NULL;
	{
		TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_0 = ___oprot0;
		NullCheck(L_0);
		TProtocol_IncrementRecursionDepth_m92B440A7308F6D7012C73B74A6406855A29FF58B(L_0, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00c5:
			{// begin finally (depth: 1)
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_1 = ___oprot0;
				NullCheck(L_1);
				TProtocol_DecrementRecursionDepth_m049900374B8368A8AEB03E6FC93DF288EA1BE44B(L_1, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				TStruct__ctor_mD56EA112D651038138D3BC7203C3606718E5CB3F((&V_0), _stringLiteral04D2B1D140B5E3F8052F064883A6A5BFDEE231C8, NULL);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_2 = ___oprot0;
				TStruct_tAD67F1F0C45235334F9440B6A587DB03A0CE5C96 L_3 = V_0;
				NullCheck(L_2);
				VirtualActionInvoker1< TStruct_tAD67F1F0C45235334F9440B6A587DB03A0CE5C96 >::Invoke(8 /* System.Void Thrift.Protocol.TProtocol::WriteStructBegin(Thrift.Protocol.TStruct) */, L_2, L_3);
				il2cpp_codegen_initobj((&V_1), sizeof(TField_tF4D9D8EFE767C142914693E0E787547F0213D334));
				Isset_tF47BC457C347A05925D0A490A693A44F649EA8A0* L_4 = (&__this->_____isset_1);
				bool L_5 = L_4->___success_0;
				if (!L_5)
				{
					goto IL_00b7_1;
				}
			}
			{
				List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_6;
				L_6 = validate_function_list_result_get_Success_m935126A826ED7821006377EE3AEFAE0F418630F0_inline(__this, NULL);
				if (!L_6)
				{
					goto IL_00b7_1;
				}
			}
			{
				TField_set_Name_mAD35FC0847F990535FAF3E3032CD117B560AF751_inline((&V_1), _stringLiteral6477FB0CBF4E978465F5CB8C51161A34304B3890, NULL);
				TField_set_Type_m2AA4AF23C96A26CB269B78B067489E10F055E983_inline((&V_1), ((int32_t)15), NULL);
				TField_set_ID_m68843CC49A2A49966729F299A58A2BBC6FCC4F01_inline((&V_1), (int16_t)0, NULL);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_7 = ___oprot0;
				TField_tF4D9D8EFE767C142914693E0E787547F0213D334 L_8 = V_1;
				NullCheck(L_7);
				VirtualActionInvoker1< TField_tF4D9D8EFE767C142914693E0E787547F0213D334 >::Invoke(10 /* System.Void Thrift.Protocol.TProtocol::WriteFieldBegin(Thrift.Protocol.TField) */, L_7, L_8);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_9 = ___oprot0;
				List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_10;
				L_10 = validate_function_list_result_get_Success_m935126A826ED7821006377EE3AEFAE0F418630F0_inline(__this, NULL);
				NullCheck(L_10);
				int32_t L_11;
				L_11 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_10, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
				TList_t901068FC67AF1D67BF97378377E2FBDB40D54C1B L_12;
				memset((&L_12), 0, sizeof(L_12));
				TList__ctor_m17DE205A02F15CE5C16553DA637E2408B7B565D9((&L_12), ((int32_t)11), L_11, /*hidden argument*/NULL);
				NullCheck(L_9);
				VirtualActionInvoker1< TList_t901068FC67AF1D67BF97378377E2FBDB40D54C1B >::Invoke(15 /* System.Void Thrift.Protocol.TProtocol::WriteListBegin(Thrift.Protocol.TList) */, L_9, L_12);
				List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_13;
				L_13 = validate_function_list_result_get_Success_m935126A826ED7821006377EE3AEFAE0F418630F0_inline(__this, NULL);
				NullCheck(L_13);
				Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 L_14;
				L_14 = List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D(L_13, List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var);
				V_2 = L_14;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_009d_1:
					{// begin finally (depth: 2)
						Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7((&V_2), Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var);
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_0092_2;
					}

IL_0083_2:
					{
						String_t* L_15;
						L_15 = Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_inline((&V_2), Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var);
						V_3 = L_15;
						TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_16 = ___oprot0;
						String_t* L_17 = V_3;
						NullCheck(L_16);
						VirtualActionInvoker1< String_t* >::Invoke(25 /* System.Void Thrift.Protocol.TProtocol::WriteString(System.String) */, L_16, L_17);
					}

IL_0092_2:
					{
						bool L_18;
						L_18 = Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED((&V_2), Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var);
						if (L_18)
						{
							goto IL_0083_2;
						}
					}
					{
						goto IL_00ab_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_00ab_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_19 = ___oprot0;
				NullCheck(L_19);
				VirtualActionInvoker0::Invoke(16 /* System.Void Thrift.Protocol.TProtocol::WriteListEnd() */, L_19);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_20 = ___oprot0;
				NullCheck(L_20);
				VirtualActionInvoker0::Invoke(11 /* System.Void Thrift.Protocol.TProtocol::WriteFieldEnd() */, L_20);
			}

IL_00b7_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_21 = ___oprot0;
				NullCheck(L_21);
				VirtualActionInvoker0::Invoke(12 /* System.Void Thrift.Protocol.TProtocol::WriteFieldStop() */, L_21);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_22 = ___oprot0;
				NullCheck(L_22);
				VirtualActionInvoker0::Invoke(9 /* System.Void Thrift.Protocol.TProtocol::WriteStructEnd() */, L_22);
				goto IL_00cc;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00cc:
	{
		return;
	}
}
// System.String BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/validate_function_list_result::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* validate_function_list_result_ToString_mA7BE4DCE88E638538B494F837E8FDDA1220CBDF3 (validate_function_list_result_tEA96B244E3A94307177B3D8736902272FDCE0944* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA9E5EE04C95CEBE9BB4EF83F0961FA2CC2C993C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA30E8D5F692E26443C33C2EA6C6680942331C22);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	bool V_1 = false;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_mCD797D942316CB356205FD96415B0B7581CDAD60(L_0, _stringLiteralFA30E8D5F692E26443C33C2EA6C6680942331C22, NULL);
		V_0 = L_0;
		V_1 = (bool)1;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1;
		L_1 = validate_function_list_result_get_Success_m935126A826ED7821006377EE3AEFAE0F418630F0_inline(__this, NULL);
		if (!L_1)
		{
			goto IL_004c;
		}
	}
	{
		Isset_tF47BC457C347A05925D0A490A693A44F649EA8A0* L_2 = (&__this->_____isset_1);
		bool L_3 = L_2->___success_0;
		if (!L_3)
		{
			goto IL_004c;
		}
	}
	{
		bool L_4 = V_1;
		if (L_4)
		{
			goto IL_0031;
		}
	}
	{
		StringBuilder_t* L_5 = V_0;
		NullCheck(L_5);
		StringBuilder_t* L_6;
		L_6 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_5, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
	}

IL_0031:
	{
		V_1 = (bool)0;
		StringBuilder_t* L_7 = V_0;
		NullCheck(L_7);
		StringBuilder_t* L_8;
		L_8 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_7, _stringLiteralBA9E5EE04C95CEBE9BB4EF83F0961FA2CC2C993C, NULL);
		StringBuilder_t* L_9 = V_0;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_10;
		L_10 = validate_function_list_result_get_Success_m935126A826ED7821006377EE3AEFAE0F418630F0_inline(__this, NULL);
		NullCheck(L_9);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_9, L_10, NULL);
	}

IL_004c:
	{
		StringBuilder_t* L_12 = V_0;
		NullCheck(L_12);
		StringBuilder_t* L_13;
		L_13 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_12, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D, NULL);
		StringBuilder_t* L_14 = V_0;
		NullCheck(L_14);
		String_t* L_15;
		L_15 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_14);
		return L_15;
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
// Conversion methods for marshalling of: BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/validate_function_list_result/Isset
IL2CPP_EXTERN_C void Isset_tF47BC457C347A05925D0A490A693A44F649EA8A0_marshal_pinvoke(const Isset_tF47BC457C347A05925D0A490A693A44F649EA8A0& unmarshaled, Isset_tF47BC457C347A05925D0A490A693A44F649EA8A0_marshaled_pinvoke& marshaled)
{
	marshaled.___success_0 = static_cast<int32_t>(unmarshaled.___success_0);
}
IL2CPP_EXTERN_C void Isset_tF47BC457C347A05925D0A490A693A44F649EA8A0_marshal_pinvoke_back(const Isset_tF47BC457C347A05925D0A490A693A44F649EA8A0_marshaled_pinvoke& marshaled, Isset_tF47BC457C347A05925D0A490A693A44F649EA8A0& unmarshaled)
{
	bool unmarshaledsuccess_temp_0 = false;
	unmarshaledsuccess_temp_0 = static_cast<bool>(marshaled.___success_0);
	unmarshaled.___success_0 = unmarshaledsuccess_temp_0;
}
// Conversion method for clean up from marshalling of: BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/validate_function_list_result/Isset
IL2CPP_EXTERN_C void Isset_tF47BC457C347A05925D0A490A693A44F649EA8A0_marshal_pinvoke_cleanup(Isset_tF47BC457C347A05925D0A490A693A44F649EA8A0_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/validate_function_list_result/Isset
IL2CPP_EXTERN_C void Isset_tF47BC457C347A05925D0A490A693A44F649EA8A0_marshal_com(const Isset_tF47BC457C347A05925D0A490A693A44F649EA8A0& unmarshaled, Isset_tF47BC457C347A05925D0A490A693A44F649EA8A0_marshaled_com& marshaled)
{
	marshaled.___success_0 = static_cast<int32_t>(unmarshaled.___success_0);
}
IL2CPP_EXTERN_C void Isset_tF47BC457C347A05925D0A490A693A44F649EA8A0_marshal_com_back(const Isset_tF47BC457C347A05925D0A490A693A44F649EA8A0_marshaled_com& marshaled, Isset_tF47BC457C347A05925D0A490A693A44F649EA8A0& unmarshaled)
{
	bool unmarshaledsuccess_temp_0 = false;
	unmarshaledsuccess_temp_0 = static_cast<bool>(marshaled.___success_0);
	unmarshaled.___success_0 = unmarshaledsuccess_temp_0;
}
// Conversion method for clean up from marshalling of: BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/validate_function_list_result/Isset
IL2CPP_EXTERN_C void Isset_tF47BC457C347A05925D0A490A693A44F649EA8A0_marshal_com_cleanup(Isset_tF47BC457C347A05925D0A490A693A44F649EA8A0_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/SharedTextureNotify_args::get_TexId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SharedTextureNotify_args_get_TexId_m125E16F14550F1E5389757C1461376157D35DF83 (SharedTextureNotify_args_t0EBD41B2A9EFE8C795E976A11ED2D89278821EF9* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____texId_0;
		return L_0;
	}
}
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/SharedTextureNotify_args::set_TexId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharedTextureNotify_args_set_TexId_m3728BF1B5F5037753B73D43A3C1EA1A7D60DEB17 (SharedTextureNotify_args_t0EBD41B2A9EFE8C795E976A11ED2D89278821EF9* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		Isset_t009D65358BB9519F1438D00449C7C4A992FDE97F* L_0 = (&__this->_____isset_2);
		L_0->___texId_0 = (bool)1;
		String_t* L_1 = ___value0;
		__this->____texId_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____texId_0), (void*)L_1);
		return;
	}
}
// BlueprintReality.Thrift.SharedTextures.SharedTex BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/SharedTextureNotify_args::get_Texture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976* SharedTextureNotify_args_get_Texture_m6CF9C6C9D4CDA3D699132B2C7A6E1722B9F3AFA3 (SharedTextureNotify_args_t0EBD41B2A9EFE8C795E976A11ED2D89278821EF9* __this, const RuntimeMethod* method) 
{
	{
		SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976* L_0 = __this->____texture_1;
		return L_0;
	}
}
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/SharedTextureNotify_args::set_Texture(BlueprintReality.Thrift.SharedTextures.SharedTex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharedTextureNotify_args_set_Texture_mF58719354885F0823FB2AB9F6E58E0D23C23844E (SharedTextureNotify_args_t0EBD41B2A9EFE8C795E976A11ED2D89278821EF9* __this, SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976* ___value0, const RuntimeMethod* method) 
{
	{
		Isset_t009D65358BB9519F1438D00449C7C4A992FDE97F* L_0 = (&__this->_____isset_2);
		L_0->___texture_1 = (bool)1;
		SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976* L_1 = ___value0;
		__this->____texture_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____texture_1), (void*)L_1);
		return;
	}
}
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/SharedTextureNotify_args::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharedTextureNotify_args__ctor_mAAED46770AA71CC2762C15DF6B1EA8862175EE5A (SharedTextureNotify_args_t0EBD41B2A9EFE8C795E976A11ED2D89278821EF9* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/SharedTextureNotify_args::Read(Thrift.Protocol.TProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharedTextureNotify_args_Read_m5D80BDDF2CBE156608CE566348F2152B5D57068D (SharedTextureNotify_args_t0EBD41B2A9EFE8C795E976A11ED2D89278821EF9* __this, TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* ___iprot0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TField_tF4D9D8EFE767C142914693E0E787547F0213D334 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int16_t V_1 = 0;
	{
		TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_0 = ___iprot0;
		NullCheck(L_0);
		TProtocol_IncrementRecursionDepth_m92B440A7308F6D7012C73B74A6406855A29FF58B(L_0, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ad:
			{// begin finally (depth: 1)
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_1 = ___iprot0;
				NullCheck(L_1);
				TProtocol_DecrementRecursionDepth_m049900374B8368A8AEB03E6FC93DF288EA1BE44B(L_1, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_2 = ___iprot0;
				NullCheck(L_2);
				TStruct_tAD67F1F0C45235334F9440B6A587DB03A0CE5C96 L_3;
				L_3 = VirtualFuncInvoker0< TStruct_tAD67F1F0C45235334F9440B6A587DB03A0CE5C96 >::Invoke(29 /* Thrift.Protocol.TStruct Thrift.Protocol.TProtocol::ReadStructBegin() */, L_2);
			}

IL_000d_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_4 = ___iprot0;
				NullCheck(L_4);
				TField_tF4D9D8EFE767C142914693E0E787547F0213D334 L_5;
				L_5 = VirtualFuncInvoker0< TField_tF4D9D8EFE767C142914693E0E787547F0213D334 >::Invoke(31 /* Thrift.Protocol.TField Thrift.Protocol.TProtocol::ReadFieldBegin() */, L_4);
				V_0 = L_5;
				uint8_t L_6;
				L_6 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_0), NULL);
				if (!L_6)
				{
					goto IL_00a5_1;
				}
			}
			{
				int16_t L_7;
				L_7 = TField_get_ID_m512A7F246CCD70AD2C473FA5AF09E6ECC8AB8B1A_inline((&V_0), NULL);
				V_1 = L_7;
				int16_t L_8 = V_1;
				if ((((int32_t)L_8) == ((int32_t)1)))
				{
					goto IL_0032_1;
				}
			}
			{
				int16_t L_9 = V_1;
				if ((((int32_t)L_9) == ((int32_t)2)))
				{
					goto IL_005a_1;
				}
			}
			{
				goto IL_008d_1;
			}

IL_0032_1:
			{
				uint8_t L_10;
				L_10 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_0), NULL);
				if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)11)))))
				{
					goto IL_004b_1;
				}
			}
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_11 = ___iprot0;
				NullCheck(L_11);
				String_t* L_12;
				L_12 = VirtualFuncInvoker0< String_t* >::Invoke(45 /* System.String Thrift.Protocol.TProtocol::ReadString() */, L_11);
				SharedTextureNotify_args_set_TexId_m3728BF1B5F5037753B73D43A3C1EA1A7D60DEB17(__this, L_12, NULL);
				goto IL_009a_1;
			}

IL_004b_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_13 = ___iprot0;
				uint8_t L_14;
				L_14 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_0), NULL);
				TProtocolUtil_Skip_m61E2B7C700479ECC6AD4E86636C1235C30B5A38F(L_13, L_14, NULL);
				goto IL_009a_1;
			}

IL_005a_1:
			{
				uint8_t L_15;
				L_15 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_0), NULL);
				if ((!(((uint32_t)L_15) == ((uint32_t)((int32_t)12)))))
				{
					goto IL_007e_1;
				}
			}
			{
				SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976* L_16 = (SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976*)il2cpp_codegen_object_new(SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976_il2cpp_TypeInfo_var);
				NullCheck(L_16);
				SharedTex__ctor_mC7D5C44C0B80565EA90810EF90B805522833E07A(L_16, NULL);
				SharedTextureNotify_args_set_Texture_mF58719354885F0823FB2AB9F6E58E0D23C23844E(__this, L_16, NULL);
				SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976* L_17;
				L_17 = SharedTextureNotify_args_get_Texture_m6CF9C6C9D4CDA3D699132B2C7A6E1722B9F3AFA3_inline(__this, NULL);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_18 = ___iprot0;
				NullCheck(L_17);
				SharedTex_Read_m5BE8C4C9683CCC19736B2D4AD65E8F85AB14E155(L_17, L_18, NULL);
				goto IL_009a_1;
			}

IL_007e_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_19 = ___iprot0;
				uint8_t L_20;
				L_20 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_0), NULL);
				TProtocolUtil_Skip_m61E2B7C700479ECC6AD4E86636C1235C30B5A38F(L_19, L_20, NULL);
				goto IL_009a_1;
			}

IL_008d_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_21 = ___iprot0;
				uint8_t L_22;
				L_22 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_0), NULL);
				TProtocolUtil_Skip_m61E2B7C700479ECC6AD4E86636C1235C30B5A38F(L_21, L_22, NULL);
			}

IL_009a_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_23 = ___iprot0;
				NullCheck(L_23);
				VirtualActionInvoker0::Invoke(32 /* System.Void Thrift.Protocol.TProtocol::ReadFieldEnd() */, L_23);
				goto IL_000d_1;
			}

IL_00a5_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_24 = ___iprot0;
				NullCheck(L_24);
				VirtualActionInvoker0::Invoke(30 /* System.Void Thrift.Protocol.TProtocol::ReadStructEnd() */, L_24);
				goto IL_00b4;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b4:
	{
		return;
	}
}
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/SharedTextureNotify_args::Write(Thrift.Protocol.TProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharedTextureNotify_args_Write_m85C05DD0EE7874110CA347F8B2CF0E4DE8325C51 (SharedTextureNotify_args_t0EBD41B2A9EFE8C795E976A11ED2D89278821EF9* __this, TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* ___oprot0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral53CB4A8F0CAB89D3D2021C63E6D43CE9EEE905EE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F085474B0FFFEBFA66044C39D4234617687D993);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE88CEA670D83FE6CD2A52F3E973A7740F94C4E50);
		s_Il2CppMethodInitialized = true;
	}
	TStruct_tAD67F1F0C45235334F9440B6A587DB03A0CE5C96 V_0;
	memset((&V_0), 0, sizeof(V_0));
	TField_tF4D9D8EFE767C142914693E0E787547F0213D334 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_0 = ___oprot0;
		NullCheck(L_0);
		TProtocol_IncrementRecursionDepth_m92B440A7308F6D7012C73B74A6406855A29FF58B(L_0, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00c5:
			{// begin finally (depth: 1)
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_1 = ___oprot0;
				NullCheck(L_1);
				TProtocol_DecrementRecursionDepth_m049900374B8368A8AEB03E6FC93DF288EA1BE44B(L_1, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				TStruct__ctor_mD56EA112D651038138D3BC7203C3606718E5CB3F((&V_0), _stringLiteral7F085474B0FFFEBFA66044C39D4234617687D993, NULL);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_2 = ___oprot0;
				TStruct_tAD67F1F0C45235334F9440B6A587DB03A0CE5C96 L_3 = V_0;
				NullCheck(L_2);
				VirtualActionInvoker1< TStruct_tAD67F1F0C45235334F9440B6A587DB03A0CE5C96 >::Invoke(8 /* System.Void Thrift.Protocol.TProtocol::WriteStructBegin(Thrift.Protocol.TStruct) */, L_2, L_3);
				il2cpp_codegen_initobj((&V_1), sizeof(TField_tF4D9D8EFE767C142914693E0E787547F0213D334));
				String_t* L_4;
				L_4 = SharedTextureNotify_args_get_TexId_m125E16F14550F1E5389757C1461376157D35DF83_inline(__this, NULL);
				if (!L_4)
				{
					goto IL_006c_1;
				}
			}
			{
				Isset_t009D65358BB9519F1438D00449C7C4A992FDE97F* L_5 = (&__this->_____isset_2);
				bool L_6 = L_5->___texId_0;
				if (!L_6)
				{
					goto IL_006c_1;
				}
			}
			{
				TField_set_Name_mAD35FC0847F990535FAF3E3032CD117B560AF751_inline((&V_1), _stringLiteral53CB4A8F0CAB89D3D2021C63E6D43CE9EEE905EE, NULL);
				TField_set_Type_m2AA4AF23C96A26CB269B78B067489E10F055E983_inline((&V_1), ((int32_t)11), NULL);
				TField_set_ID_m68843CC49A2A49966729F299A58A2BBC6FCC4F01_inline((&V_1), (int16_t)1, NULL);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_7 = ___oprot0;
				TField_tF4D9D8EFE767C142914693E0E787547F0213D334 L_8 = V_1;
				NullCheck(L_7);
				VirtualActionInvoker1< TField_tF4D9D8EFE767C142914693E0E787547F0213D334 >::Invoke(10 /* System.Void Thrift.Protocol.TProtocol::WriteFieldBegin(Thrift.Protocol.TField) */, L_7, L_8);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_9 = ___oprot0;
				String_t* L_10;
				L_10 = SharedTextureNotify_args_get_TexId_m125E16F14550F1E5389757C1461376157D35DF83_inline(__this, NULL);
				NullCheck(L_9);
				VirtualActionInvoker1< String_t* >::Invoke(25 /* System.Void Thrift.Protocol.TProtocol::WriteString(System.String) */, L_9, L_10);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_11 = ___oprot0;
				NullCheck(L_11);
				VirtualActionInvoker0::Invoke(11 /* System.Void Thrift.Protocol.TProtocol::WriteFieldEnd() */, L_11);
			}

IL_006c_1:
			{
				SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976* L_12;
				L_12 = SharedTextureNotify_args_get_Texture_m6CF9C6C9D4CDA3D699132B2C7A6E1722B9F3AFA3_inline(__this, NULL);
				if (!L_12)
				{
					goto IL_00b7_1;
				}
			}
			{
				Isset_t009D65358BB9519F1438D00449C7C4A992FDE97F* L_13 = (&__this->_____isset_2);
				bool L_14 = L_13->___texture_1;
				if (!L_14)
				{
					goto IL_00b7_1;
				}
			}
			{
				TField_set_Name_mAD35FC0847F990535FAF3E3032CD117B560AF751_inline((&V_1), _stringLiteralE88CEA670D83FE6CD2A52F3E973A7740F94C4E50, NULL);
				TField_set_Type_m2AA4AF23C96A26CB269B78B067489E10F055E983_inline((&V_1), ((int32_t)12), NULL);
				TField_set_ID_m68843CC49A2A49966729F299A58A2BBC6FCC4F01_inline((&V_1), (int16_t)2, NULL);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_15 = ___oprot0;
				TField_tF4D9D8EFE767C142914693E0E787547F0213D334 L_16 = V_1;
				NullCheck(L_15);
				VirtualActionInvoker1< TField_tF4D9D8EFE767C142914693E0E787547F0213D334 >::Invoke(10 /* System.Void Thrift.Protocol.TProtocol::WriteFieldBegin(Thrift.Protocol.TField) */, L_15, L_16);
				SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976* L_17;
				L_17 = SharedTextureNotify_args_get_Texture_m6CF9C6C9D4CDA3D699132B2C7A6E1722B9F3AFA3_inline(__this, NULL);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_18 = ___oprot0;
				NullCheck(L_17);
				SharedTex_Write_m23E04FE4F1A2D9D73B407EE38D0C78E284972C26(L_17, L_18, NULL);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_19 = ___oprot0;
				NullCheck(L_19);
				VirtualActionInvoker0::Invoke(11 /* System.Void Thrift.Protocol.TProtocol::WriteFieldEnd() */, L_19);
			}

IL_00b7_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_20 = ___oprot0;
				NullCheck(L_20);
				VirtualActionInvoker0::Invoke(12 /* System.Void Thrift.Protocol.TProtocol::WriteFieldStop() */, L_20);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_21 = ___oprot0;
				NullCheck(L_21);
				VirtualActionInvoker0::Invoke(9 /* System.Void Thrift.Protocol.TProtocol::WriteStructEnd() */, L_21);
				goto IL_00cc;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00cc:
	{
		return;
	}
}
// System.String BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/SharedTextureNotify_args::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SharedTextureNotify_args_ToString_m6BC2DCDB3D249A84ACBF029EF54B17BEBAB12B8C (SharedTextureNotify_args_t0EBD41B2A9EFE8C795E976A11ED2D89278821EF9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77BF5039A478F169204D5C5040C13C6F73D96E07);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF83EDAD262DDA5A296013B4511548307FEEDF69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD64DE515DE159C401BB82652225D6BE22CDAD7A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF947B8C21E7FE5BB89C197D1BA9AB462BBE9D595);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	bool V_1 = false;
	StringBuilder_t* G_B11_0 = NULL;
	StringBuilder_t* G_B10_0 = NULL;
	String_t* G_B12_0 = NULL;
	StringBuilder_t* G_B12_1 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_mCD797D942316CB356205FD96415B0B7581CDAD60(L_0, _stringLiteralBF83EDAD262DDA5A296013B4511548307FEEDF69, NULL);
		V_0 = L_0;
		V_1 = (bool)1;
		String_t* L_1;
		L_1 = SharedTextureNotify_args_get_TexId_m125E16F14550F1E5389757C1461376157D35DF83_inline(__this, NULL);
		if (!L_1)
		{
			goto IL_004c;
		}
	}
	{
		Isset_t009D65358BB9519F1438D00449C7C4A992FDE97F* L_2 = (&__this->_____isset_2);
		bool L_3 = L_2->___texId_0;
		if (!L_3)
		{
			goto IL_004c;
		}
	}
	{
		bool L_4 = V_1;
		if (L_4)
		{
			goto IL_0031;
		}
	}
	{
		StringBuilder_t* L_5 = V_0;
		NullCheck(L_5);
		StringBuilder_t* L_6;
		L_6 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_5, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
	}

IL_0031:
	{
		V_1 = (bool)0;
		StringBuilder_t* L_7 = V_0;
		NullCheck(L_7);
		StringBuilder_t* L_8;
		L_8 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_7, _stringLiteralF947B8C21E7FE5BB89C197D1BA9AB462BBE9D595, NULL);
		StringBuilder_t* L_9 = V_0;
		String_t* L_10;
		L_10 = SharedTextureNotify_args_get_TexId_m125E16F14550F1E5389757C1461376157D35DF83_inline(__this, NULL);
		NullCheck(L_9);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_9, L_10, NULL);
	}

IL_004c:
	{
		SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976* L_12;
		L_12 = SharedTextureNotify_args_get_Texture_m6CF9C6C9D4CDA3D699132B2C7A6E1722B9F3AFA3_inline(__this, NULL);
		if (!L_12)
		{
			goto IL_009f;
		}
	}
	{
		Isset_t009D65358BB9519F1438D00449C7C4A992FDE97F* L_13 = (&__this->_____isset_2);
		bool L_14 = L_13->___texture_1;
		if (!L_14)
		{
			goto IL_009f;
		}
	}
	{
		bool L_15 = V_1;
		if (L_15)
		{
			goto IL_0070;
		}
	}
	{
		StringBuilder_t* L_16 = V_0;
		NullCheck(L_16);
		StringBuilder_t* L_17;
		L_17 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_16, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
	}

IL_0070:
	{
		V_1 = (bool)0;
		StringBuilder_t* L_18 = V_0;
		NullCheck(L_18);
		StringBuilder_t* L_19;
		L_19 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_18, _stringLiteral77BF5039A478F169204D5C5040C13C6F73D96E07, NULL);
		StringBuilder_t* L_20 = V_0;
		SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976* L_21;
		L_21 = SharedTextureNotify_args_get_Texture_m6CF9C6C9D4CDA3D699132B2C7A6E1722B9F3AFA3_inline(__this, NULL);
		G_B10_0 = L_20;
		if (!L_21)
		{
			G_B11_0 = L_20;
			goto IL_0094;
		}
	}
	{
		SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976* L_22;
		L_22 = SharedTextureNotify_args_get_Texture_m6CF9C6C9D4CDA3D699132B2C7A6E1722B9F3AFA3_inline(__this, NULL);
		NullCheck(L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_22);
		G_B12_0 = L_23;
		G_B12_1 = G_B10_0;
		goto IL_0099;
	}

IL_0094:
	{
		G_B12_0 = _stringLiteralD64DE515DE159C401BB82652225D6BE22CDAD7A1;
		G_B12_1 = G_B11_0;
	}

IL_0099:
	{
		NullCheck(G_B12_1);
		StringBuilder_t* L_24;
		L_24 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(G_B12_1, G_B12_0, NULL);
	}

IL_009f:
	{
		StringBuilder_t* L_25 = V_0;
		NullCheck(L_25);
		StringBuilder_t* L_26;
		L_26 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_25, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D, NULL);
		StringBuilder_t* L_27 = V_0;
		NullCheck(L_27);
		String_t* L_28;
		L_28 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_27);
		return L_28;
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
// Conversion methods for marshalling of: BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/SharedTextureNotify_args/Isset
IL2CPP_EXTERN_C void Isset_t009D65358BB9519F1438D00449C7C4A992FDE97F_marshal_pinvoke(const Isset_t009D65358BB9519F1438D00449C7C4A992FDE97F& unmarshaled, Isset_t009D65358BB9519F1438D00449C7C4A992FDE97F_marshaled_pinvoke& marshaled)
{
	marshaled.___texId_0 = static_cast<int32_t>(unmarshaled.___texId_0);
	marshaled.___texture_1 = static_cast<int32_t>(unmarshaled.___texture_1);
}
IL2CPP_EXTERN_C void Isset_t009D65358BB9519F1438D00449C7C4A992FDE97F_marshal_pinvoke_back(const Isset_t009D65358BB9519F1438D00449C7C4A992FDE97F_marshaled_pinvoke& marshaled, Isset_t009D65358BB9519F1438D00449C7C4A992FDE97F& unmarshaled)
{
	bool unmarshaledtexId_temp_0 = false;
	unmarshaledtexId_temp_0 = static_cast<bool>(marshaled.___texId_0);
	unmarshaled.___texId_0 = unmarshaledtexId_temp_0;
	bool unmarshaledtexture_temp_1 = false;
	unmarshaledtexture_temp_1 = static_cast<bool>(marshaled.___texture_1);
	unmarshaled.___texture_1 = unmarshaledtexture_temp_1;
}
// Conversion method for clean up from marshalling of: BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/SharedTextureNotify_args/Isset
IL2CPP_EXTERN_C void Isset_t009D65358BB9519F1438D00449C7C4A992FDE97F_marshal_pinvoke_cleanup(Isset_t009D65358BB9519F1438D00449C7C4A992FDE97F_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/SharedTextureNotify_args/Isset
IL2CPP_EXTERN_C void Isset_t009D65358BB9519F1438D00449C7C4A992FDE97F_marshal_com(const Isset_t009D65358BB9519F1438D00449C7C4A992FDE97F& unmarshaled, Isset_t009D65358BB9519F1438D00449C7C4A992FDE97F_marshaled_com& marshaled)
{
	marshaled.___texId_0 = static_cast<int32_t>(unmarshaled.___texId_0);
	marshaled.___texture_1 = static_cast<int32_t>(unmarshaled.___texture_1);
}
IL2CPP_EXTERN_C void Isset_t009D65358BB9519F1438D00449C7C4A992FDE97F_marshal_com_back(const Isset_t009D65358BB9519F1438D00449C7C4A992FDE97F_marshaled_com& marshaled, Isset_t009D65358BB9519F1438D00449C7C4A992FDE97F& unmarshaled)
{
	bool unmarshaledtexId_temp_0 = false;
	unmarshaledtexId_temp_0 = static_cast<bool>(marshaled.___texId_0);
	unmarshaled.___texId_0 = unmarshaledtexId_temp_0;
	bool unmarshaledtexture_temp_1 = false;
	unmarshaledtexture_temp_1 = static_cast<bool>(marshaled.___texture_1);
	unmarshaled.___texture_1 = unmarshaledtexture_temp_1;
}
// Conversion method for clean up from marshalling of: BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/SharedTextureNotify_args/Isset
IL2CPP_EXTERN_C void Isset_t009D65358BB9519F1438D00449C7C4A992FDE97F_marshal_com_cleanup(Isset_t009D65358BB9519F1438D00449C7C4A992FDE97F_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/SharedTextureNotify_result::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharedTextureNotify_result__ctor_m017F4BB9C0DA36E09A9315F2EC0A50D41A7CCCD2 (SharedTextureNotify_result_t773233FF03B1FFB18E8EA55F4632A79916885CE7* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/SharedTextureNotify_result::Read(Thrift.Protocol.TProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharedTextureNotify_result_Read_m237328D6B0980A055EB660887EB812F1C41E0418 (SharedTextureNotify_result_t773233FF03B1FFB18E8EA55F4632A79916885CE7* __this, TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* ___iprot0, const RuntimeMethod* method) 
{
	TField_tF4D9D8EFE767C142914693E0E787547F0213D334 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_0 = ___iprot0;
		NullCheck(L_0);
		TProtocol_IncrementRecursionDepth_m92B440A7308F6D7012C73B74A6406855A29FF58B(L_0, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0042:
			{// begin finally (depth: 1)
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_1 = ___iprot0;
				NullCheck(L_1);
				TProtocol_DecrementRecursionDepth_m049900374B8368A8AEB03E6FC93DF288EA1BE44B(L_1, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_2 = ___iprot0;
				NullCheck(L_2);
				TStruct_tAD67F1F0C45235334F9440B6A587DB03A0CE5C96 L_3;
				L_3 = VirtualFuncInvoker0< TStruct_tAD67F1F0C45235334F9440B6A587DB03A0CE5C96 >::Invoke(29 /* Thrift.Protocol.TStruct Thrift.Protocol.TProtocol::ReadStructBegin() */, L_2);
			}

IL_000d_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_4 = ___iprot0;
				NullCheck(L_4);
				TField_tF4D9D8EFE767C142914693E0E787547F0213D334 L_5;
				L_5 = VirtualFuncInvoker0< TField_tF4D9D8EFE767C142914693E0E787547F0213D334 >::Invoke(31 /* Thrift.Protocol.TField Thrift.Protocol.TProtocol::ReadFieldBegin() */, L_4);
				V_0 = L_5;
				uint8_t L_6;
				L_6 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_0), NULL);
				if (!L_6)
				{
					goto IL_003a_1;
				}
			}
			{
				int16_t L_7;
				L_7 = TField_get_ID_m512A7F246CCD70AD2C473FA5AF09E6ECC8AB8B1A_inline((&V_0), NULL);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_8 = ___iprot0;
				uint8_t L_9;
				L_9 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_0), NULL);
				TProtocolUtil_Skip_m61E2B7C700479ECC6AD4E86636C1235C30B5A38F(L_8, L_9, NULL);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_10 = ___iprot0;
				NullCheck(L_10);
				VirtualActionInvoker0::Invoke(32 /* System.Void Thrift.Protocol.TProtocol::ReadFieldEnd() */, L_10);
				goto IL_000d_1;
			}

IL_003a_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_11 = ___iprot0;
				NullCheck(L_11);
				VirtualActionInvoker0::Invoke(30 /* System.Void Thrift.Protocol.TProtocol::ReadStructEnd() */, L_11);
				goto IL_0049;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0049:
	{
		return;
	}
}
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/SharedTextureNotify_result::Write(Thrift.Protocol.TProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharedTextureNotify_result_Write_mFDEE36E200645FE5E59157364C34A48EAFF72C87 (SharedTextureNotify_result_t773233FF03B1FFB18E8EA55F4632A79916885CE7* __this, TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* ___oprot0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral02A85381784C2C80B9A22A925F38EC74E6FF28C3);
		s_Il2CppMethodInitialized = true;
	}
	TStruct_tAD67F1F0C45235334F9440B6A587DB03A0CE5C96 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_0 = ___oprot0;
		NullCheck(L_0);
		TProtocol_IncrementRecursionDepth_m92B440A7308F6D7012C73B74A6406855A29FF58B(L_0, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0027:
			{// begin finally (depth: 1)
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_1 = ___oprot0;
				NullCheck(L_1);
				TProtocol_DecrementRecursionDepth_m049900374B8368A8AEB03E6FC93DF288EA1BE44B(L_1, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			TStruct__ctor_mD56EA112D651038138D3BC7203C3606718E5CB3F((&V_0), _stringLiteral02A85381784C2C80B9A22A925F38EC74E6FF28C3, NULL);
			TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_2 = ___oprot0;
			TStruct_tAD67F1F0C45235334F9440B6A587DB03A0CE5C96 L_3 = V_0;
			NullCheck(L_2);
			VirtualActionInvoker1< TStruct_tAD67F1F0C45235334F9440B6A587DB03A0CE5C96 >::Invoke(8 /* System.Void Thrift.Protocol.TProtocol::WriteStructBegin(Thrift.Protocol.TStruct) */, L_2, L_3);
			TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_4 = ___oprot0;
			NullCheck(L_4);
			VirtualActionInvoker0::Invoke(12 /* System.Void Thrift.Protocol.TProtocol::WriteFieldStop() */, L_4);
			TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_5 = ___oprot0;
			NullCheck(L_5);
			VirtualActionInvoker0::Invoke(9 /* System.Void Thrift.Protocol.TProtocol::WriteStructEnd() */, L_5);
			goto IL_002e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002e:
	{
		return;
	}
}
// System.String BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/SharedTextureNotify_result::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SharedTextureNotify_result_ToString_m2AF766BB5D975A45358D356AD8122B6F468651E9 (SharedTextureNotify_result_t773233FF03B1FFB18E8EA55F4632A79916885CE7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC4D13D8C10A8C5ACAD3F8AD8BA808163AD2DF9D);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_mCD797D942316CB356205FD96415B0B7581CDAD60(L_0, _stringLiteralEC4D13D8C10A8C5ACAD3F8AD8BA808163AD2DF9D, NULL);
		StringBuilder_t* L_1 = L_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_1, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D, NULL);
		NullCheck(L_1);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_1);
		return L_3;
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
// System.String BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/SharedTextureRequest_args::get_TexId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SharedTextureRequest_args_get_TexId_m475442629A7A94876AA466576474A97222451577 (SharedTextureRequest_args_tD5AE63605C74E527A24E126E22DAFFB08F81D4B7* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____texId_0;
		return L_0;
	}
}
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/SharedTextureRequest_args::set_TexId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharedTextureRequest_args_set_TexId_m0F07CC48583F654B83B575DFFEE0EAE27C1AB5DA (SharedTextureRequest_args_tD5AE63605C74E527A24E126E22DAFFB08F81D4B7* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		Isset_tDFD19C146B6F41A9B9338D4D13C210A06052C9C3* L_0 = (&__this->_____isset_1);
		L_0->___texId_0 = (bool)1;
		String_t* L_1 = ___value0;
		__this->____texId_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____texId_0), (void*)L_1);
		return;
	}
}
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/SharedTextureRequest_args::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharedTextureRequest_args__ctor_mE8E4DE4BEF073E388B9B87BD00BE74148C2538C9 (SharedTextureRequest_args_tD5AE63605C74E527A24E126E22DAFFB08F81D4B7* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/SharedTextureRequest_args::Read(Thrift.Protocol.TProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharedTextureRequest_args_Read_mBFC6C2D90C567203BB6E2AF126CAB28CE8F3B1CD (SharedTextureRequest_args_tD5AE63605C74E527A24E126E22DAFFB08F81D4B7* __this, TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* ___iprot0, const RuntimeMethod* method) 
{
	TField_tF4D9D8EFE767C142914693E0E787547F0213D334 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_0 = ___iprot0;
		NullCheck(L_0);
		TProtocol_IncrementRecursionDepth_m92B440A7308F6D7012C73B74A6406855A29FF58B(L_0, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_006c:
			{// begin finally (depth: 1)
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_1 = ___iprot0;
				NullCheck(L_1);
				TProtocol_DecrementRecursionDepth_m049900374B8368A8AEB03E6FC93DF288EA1BE44B(L_1, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_2 = ___iprot0;
				NullCheck(L_2);
				TStruct_tAD67F1F0C45235334F9440B6A587DB03A0CE5C96 L_3;
				L_3 = VirtualFuncInvoker0< TStruct_tAD67F1F0C45235334F9440B6A587DB03A0CE5C96 >::Invoke(29 /* Thrift.Protocol.TStruct Thrift.Protocol.TProtocol::ReadStructBegin() */, L_2);
			}

IL_000d_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_4 = ___iprot0;
				NullCheck(L_4);
				TField_tF4D9D8EFE767C142914693E0E787547F0213D334 L_5;
				L_5 = VirtualFuncInvoker0< TField_tF4D9D8EFE767C142914693E0E787547F0213D334 >::Invoke(31 /* Thrift.Protocol.TField Thrift.Protocol.TProtocol::ReadFieldBegin() */, L_4);
				V_0 = L_5;
				uint8_t L_6;
				L_6 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_0), NULL);
				if (!L_6)
				{
					goto IL_0064_1;
				}
			}
			{
				int16_t L_7;
				L_7 = TField_get_ID_m512A7F246CCD70AD2C473FA5AF09E6ECC8AB8B1A_inline((&V_0), NULL);
				if ((!(((uint32_t)L_7) == ((uint32_t)1))))
				{
					goto IL_004f_1;
				}
			}
			{
				uint8_t L_8;
				L_8 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_0), NULL);
				if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)11)))))
				{
					goto IL_0040_1;
				}
			}
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_9 = ___iprot0;
				NullCheck(L_9);
				String_t* L_10;
				L_10 = VirtualFuncInvoker0< String_t* >::Invoke(45 /* System.String Thrift.Protocol.TProtocol::ReadString() */, L_9);
				SharedTextureRequest_args_set_TexId_m0F07CC48583F654B83B575DFFEE0EAE27C1AB5DA(__this, L_10, NULL);
				goto IL_005c_1;
			}

IL_0040_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_11 = ___iprot0;
				uint8_t L_12;
				L_12 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_0), NULL);
				TProtocolUtil_Skip_m61E2B7C700479ECC6AD4E86636C1235C30B5A38F(L_11, L_12, NULL);
				goto IL_005c_1;
			}

IL_004f_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_13 = ___iprot0;
				uint8_t L_14;
				L_14 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_0), NULL);
				TProtocolUtil_Skip_m61E2B7C700479ECC6AD4E86636C1235C30B5A38F(L_13, L_14, NULL);
			}

IL_005c_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_15 = ___iprot0;
				NullCheck(L_15);
				VirtualActionInvoker0::Invoke(32 /* System.Void Thrift.Protocol.TProtocol::ReadFieldEnd() */, L_15);
				goto IL_000d_1;
			}

IL_0064_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_16 = ___iprot0;
				NullCheck(L_16);
				VirtualActionInvoker0::Invoke(30 /* System.Void Thrift.Protocol.TProtocol::ReadStructEnd() */, L_16);
				goto IL_0073;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0073:
	{
		return;
	}
}
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/SharedTextureRequest_args::Write(Thrift.Protocol.TProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharedTextureRequest_args_Write_mD90E3B77CF750D225C443F57AEC04DE7C9503D1E (SharedTextureRequest_args_tD5AE63605C74E527A24E126E22DAFFB08F81D4B7* __this, TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* ___oprot0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral53CB4A8F0CAB89D3D2021C63E6D43CE9EEE905EE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA4640C4FCE60554993D5F75D99BE487AE1B5ABC);
		s_Il2CppMethodInitialized = true;
	}
	TStruct_tAD67F1F0C45235334F9440B6A587DB03A0CE5C96 V_0;
	memset((&V_0), 0, sizeof(V_0));
	TField_tF4D9D8EFE767C142914693E0E787547F0213D334 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_0 = ___oprot0;
		NullCheck(L_0);
		TProtocol_IncrementRecursionDepth_m92B440A7308F6D7012C73B74A6406855A29FF58B(L_0, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_007a:
			{// begin finally (depth: 1)
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_1 = ___oprot0;
				NullCheck(L_1);
				TProtocol_DecrementRecursionDepth_m049900374B8368A8AEB03E6FC93DF288EA1BE44B(L_1, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				TStruct__ctor_mD56EA112D651038138D3BC7203C3606718E5CB3F((&V_0), _stringLiteralCA4640C4FCE60554993D5F75D99BE487AE1B5ABC, NULL);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_2 = ___oprot0;
				TStruct_tAD67F1F0C45235334F9440B6A587DB03A0CE5C96 L_3 = V_0;
				NullCheck(L_2);
				VirtualActionInvoker1< TStruct_tAD67F1F0C45235334F9440B6A587DB03A0CE5C96 >::Invoke(8 /* System.Void Thrift.Protocol.TProtocol::WriteStructBegin(Thrift.Protocol.TStruct) */, L_2, L_3);
				il2cpp_codegen_initobj((&V_1), sizeof(TField_tF4D9D8EFE767C142914693E0E787547F0213D334));
				String_t* L_4;
				L_4 = SharedTextureRequest_args_get_TexId_m475442629A7A94876AA466576474A97222451577_inline(__this, NULL);
				if (!L_4)
				{
					goto IL_006c_1;
				}
			}
			{
				Isset_tDFD19C146B6F41A9B9338D4D13C210A06052C9C3* L_5 = (&__this->_____isset_1);
				bool L_6 = L_5->___texId_0;
				if (!L_6)
				{
					goto IL_006c_1;
				}
			}
			{
				TField_set_Name_mAD35FC0847F990535FAF3E3032CD117B560AF751_inline((&V_1), _stringLiteral53CB4A8F0CAB89D3D2021C63E6D43CE9EEE905EE, NULL);
				TField_set_Type_m2AA4AF23C96A26CB269B78B067489E10F055E983_inline((&V_1), ((int32_t)11), NULL);
				TField_set_ID_m68843CC49A2A49966729F299A58A2BBC6FCC4F01_inline((&V_1), (int16_t)1, NULL);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_7 = ___oprot0;
				TField_tF4D9D8EFE767C142914693E0E787547F0213D334 L_8 = V_1;
				NullCheck(L_7);
				VirtualActionInvoker1< TField_tF4D9D8EFE767C142914693E0E787547F0213D334 >::Invoke(10 /* System.Void Thrift.Protocol.TProtocol::WriteFieldBegin(Thrift.Protocol.TField) */, L_7, L_8);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_9 = ___oprot0;
				String_t* L_10;
				L_10 = SharedTextureRequest_args_get_TexId_m475442629A7A94876AA466576474A97222451577_inline(__this, NULL);
				NullCheck(L_9);
				VirtualActionInvoker1< String_t* >::Invoke(25 /* System.Void Thrift.Protocol.TProtocol::WriteString(System.String) */, L_9, L_10);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_11 = ___oprot0;
				NullCheck(L_11);
				VirtualActionInvoker0::Invoke(11 /* System.Void Thrift.Protocol.TProtocol::WriteFieldEnd() */, L_11);
			}

IL_006c_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_12 = ___oprot0;
				NullCheck(L_12);
				VirtualActionInvoker0::Invoke(12 /* System.Void Thrift.Protocol.TProtocol::WriteFieldStop() */, L_12);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_13 = ___oprot0;
				NullCheck(L_13);
				VirtualActionInvoker0::Invoke(9 /* System.Void Thrift.Protocol.TProtocol::WriteStructEnd() */, L_13);
				goto IL_0081;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0081:
	{
		return;
	}
}
// System.String BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/SharedTextureRequest_args::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SharedTextureRequest_args_ToString_mA071C534FFFADBF24B91BB8240B51EF9C0D7E391 (SharedTextureRequest_args_tD5AE63605C74E527A24E126E22DAFFB08F81D4B7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E16D30CB079068AE13643C3E27C077CDECA6C6A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF947B8C21E7FE5BB89C197D1BA9AB462BBE9D595);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	bool V_1 = false;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_mCD797D942316CB356205FD96415B0B7581CDAD60(L_0, _stringLiteral7E16D30CB079068AE13643C3E27C077CDECA6C6A, NULL);
		V_0 = L_0;
		V_1 = (bool)1;
		String_t* L_1;
		L_1 = SharedTextureRequest_args_get_TexId_m475442629A7A94876AA466576474A97222451577_inline(__this, NULL);
		if (!L_1)
		{
			goto IL_004c;
		}
	}
	{
		Isset_tDFD19C146B6F41A9B9338D4D13C210A06052C9C3* L_2 = (&__this->_____isset_1);
		bool L_3 = L_2->___texId_0;
		if (!L_3)
		{
			goto IL_004c;
		}
	}
	{
		bool L_4 = V_1;
		if (L_4)
		{
			goto IL_0031;
		}
	}
	{
		StringBuilder_t* L_5 = V_0;
		NullCheck(L_5);
		StringBuilder_t* L_6;
		L_6 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_5, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
	}

IL_0031:
	{
		V_1 = (bool)0;
		StringBuilder_t* L_7 = V_0;
		NullCheck(L_7);
		StringBuilder_t* L_8;
		L_8 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_7, _stringLiteralF947B8C21E7FE5BB89C197D1BA9AB462BBE9D595, NULL);
		StringBuilder_t* L_9 = V_0;
		String_t* L_10;
		L_10 = SharedTextureRequest_args_get_TexId_m475442629A7A94876AA466576474A97222451577_inline(__this, NULL);
		NullCheck(L_9);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_9, L_10, NULL);
	}

IL_004c:
	{
		StringBuilder_t* L_12 = V_0;
		NullCheck(L_12);
		StringBuilder_t* L_13;
		L_13 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_12, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D, NULL);
		StringBuilder_t* L_14 = V_0;
		NullCheck(L_14);
		String_t* L_15;
		L_15 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_14);
		return L_15;
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
// Conversion methods for marshalling of: BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/SharedTextureRequest_args/Isset
IL2CPP_EXTERN_C void Isset_tDFD19C146B6F41A9B9338D4D13C210A06052C9C3_marshal_pinvoke(const Isset_tDFD19C146B6F41A9B9338D4D13C210A06052C9C3& unmarshaled, Isset_tDFD19C146B6F41A9B9338D4D13C210A06052C9C3_marshaled_pinvoke& marshaled)
{
	marshaled.___texId_0 = static_cast<int32_t>(unmarshaled.___texId_0);
}
IL2CPP_EXTERN_C void Isset_tDFD19C146B6F41A9B9338D4D13C210A06052C9C3_marshal_pinvoke_back(const Isset_tDFD19C146B6F41A9B9338D4D13C210A06052C9C3_marshaled_pinvoke& marshaled, Isset_tDFD19C146B6F41A9B9338D4D13C210A06052C9C3& unmarshaled)
{
	bool unmarshaledtexId_temp_0 = false;
	unmarshaledtexId_temp_0 = static_cast<bool>(marshaled.___texId_0);
	unmarshaled.___texId_0 = unmarshaledtexId_temp_0;
}
// Conversion method for clean up from marshalling of: BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/SharedTextureRequest_args/Isset
IL2CPP_EXTERN_C void Isset_tDFD19C146B6F41A9B9338D4D13C210A06052C9C3_marshal_pinvoke_cleanup(Isset_tDFD19C146B6F41A9B9338D4D13C210A06052C9C3_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/SharedTextureRequest_args/Isset
IL2CPP_EXTERN_C void Isset_tDFD19C146B6F41A9B9338D4D13C210A06052C9C3_marshal_com(const Isset_tDFD19C146B6F41A9B9338D4D13C210A06052C9C3& unmarshaled, Isset_tDFD19C146B6F41A9B9338D4D13C210A06052C9C3_marshaled_com& marshaled)
{
	marshaled.___texId_0 = static_cast<int32_t>(unmarshaled.___texId_0);
}
IL2CPP_EXTERN_C void Isset_tDFD19C146B6F41A9B9338D4D13C210A06052C9C3_marshal_com_back(const Isset_tDFD19C146B6F41A9B9338D4D13C210A06052C9C3_marshaled_com& marshaled, Isset_tDFD19C146B6F41A9B9338D4D13C210A06052C9C3& unmarshaled)
{
	bool unmarshaledtexId_temp_0 = false;
	unmarshaledtexId_temp_0 = static_cast<bool>(marshaled.___texId_0);
	unmarshaled.___texId_0 = unmarshaledtexId_temp_0;
}
// Conversion method for clean up from marshalling of: BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/SharedTextureRequest_args/Isset
IL2CPP_EXTERN_C void Isset_tDFD19C146B6F41A9B9338D4D13C210A06052C9C3_marshal_com_cleanup(Isset_tDFD19C146B6F41A9B9338D4D13C210A06052C9C3_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// BlueprintReality.Thrift.SharedTextures.SharedTex BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/SharedTextureRequest_result::get_Success()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976* SharedTextureRequest_result_get_Success_m63FB9F39B5F34985FCA1AB2DE87E0083043C508F (SharedTextureRequest_result_tF57E540E873EE83BE065ED81A2313266C8AD1961* __this, const RuntimeMethod* method) 
{
	{
		SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976* L_0 = __this->____success_0;
		return L_0;
	}
}
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/SharedTextureRequest_result::set_Success(BlueprintReality.Thrift.SharedTextures.SharedTex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharedTextureRequest_result_set_Success_m6AA5CB2EA56C8E8A5F36742BA75BDF0355945913 (SharedTextureRequest_result_tF57E540E873EE83BE065ED81A2313266C8AD1961* __this, SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976* ___value0, const RuntimeMethod* method) 
{
	{
		Isset_t2EC092880773B7465AC7F14FFABF88E95E95F79E* L_0 = (&__this->_____isset_1);
		L_0->___success_0 = (bool)1;
		SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976* L_1 = ___value0;
		__this->____success_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____success_0), (void*)L_1);
		return;
	}
}
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/SharedTextureRequest_result::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharedTextureRequest_result__ctor_mA0A006973ABCD0228000AE8DBF8728468FAC21CF (SharedTextureRequest_result_tF57E540E873EE83BE065ED81A2313266C8AD1961* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/SharedTextureRequest_result::Read(Thrift.Protocol.TProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharedTextureRequest_result_Read_m76BD7630D693726BD104E3E3B83345B0176AD5C8 (SharedTextureRequest_result_tF57E540E873EE83BE065ED81A2313266C8AD1961* __this, TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* ___iprot0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TField_tF4D9D8EFE767C142914693E0E787547F0213D334 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_0 = ___iprot0;
		NullCheck(L_0);
		TProtocol_IncrementRecursionDepth_m92B440A7308F6D7012C73B74A6406855A29FF58B(L_0, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0077:
			{// begin finally (depth: 1)
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_1 = ___iprot0;
				NullCheck(L_1);
				TProtocol_DecrementRecursionDepth_m049900374B8368A8AEB03E6FC93DF288EA1BE44B(L_1, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_2 = ___iprot0;
				NullCheck(L_2);
				TStruct_tAD67F1F0C45235334F9440B6A587DB03A0CE5C96 L_3;
				L_3 = VirtualFuncInvoker0< TStruct_tAD67F1F0C45235334F9440B6A587DB03A0CE5C96 >::Invoke(29 /* Thrift.Protocol.TStruct Thrift.Protocol.TProtocol::ReadStructBegin() */, L_2);
			}

IL_000d_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_4 = ___iprot0;
				NullCheck(L_4);
				TField_tF4D9D8EFE767C142914693E0E787547F0213D334 L_5;
				L_5 = VirtualFuncInvoker0< TField_tF4D9D8EFE767C142914693E0E787547F0213D334 >::Invoke(31 /* Thrift.Protocol.TField Thrift.Protocol.TProtocol::ReadFieldBegin() */, L_4);
				V_0 = L_5;
				uint8_t L_6;
				L_6 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_0), NULL);
				if (!L_6)
				{
					goto IL_006f_1;
				}
			}
			{
				int16_t L_7;
				L_7 = TField_get_ID_m512A7F246CCD70AD2C473FA5AF09E6ECC8AB8B1A_inline((&V_0), NULL);
				if ((!(((uint32_t)L_7) == ((uint32_t)0))))
				{
					goto IL_005a_1;
				}
			}
			{
				uint8_t L_8;
				L_8 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_0), NULL);
				if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)12)))))
				{
					goto IL_004b_1;
				}
			}
			{
				SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976* L_9 = (SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976*)il2cpp_codegen_object_new(SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976_il2cpp_TypeInfo_var);
				NullCheck(L_9);
				SharedTex__ctor_mC7D5C44C0B80565EA90810EF90B805522833E07A(L_9, NULL);
				SharedTextureRequest_result_set_Success_m6AA5CB2EA56C8E8A5F36742BA75BDF0355945913(__this, L_9, NULL);
				SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976* L_10;
				L_10 = SharedTextureRequest_result_get_Success_m63FB9F39B5F34985FCA1AB2DE87E0083043C508F_inline(__this, NULL);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_11 = ___iprot0;
				NullCheck(L_10);
				SharedTex_Read_m5BE8C4C9683CCC19736B2D4AD65E8F85AB14E155(L_10, L_11, NULL);
				goto IL_0067_1;
			}

IL_004b_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_12 = ___iprot0;
				uint8_t L_13;
				L_13 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_0), NULL);
				TProtocolUtil_Skip_m61E2B7C700479ECC6AD4E86636C1235C30B5A38F(L_12, L_13, NULL);
				goto IL_0067_1;
			}

IL_005a_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_14 = ___iprot0;
				uint8_t L_15;
				L_15 = TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline((&V_0), NULL);
				TProtocolUtil_Skip_m61E2B7C700479ECC6AD4E86636C1235C30B5A38F(L_14, L_15, NULL);
			}

IL_0067_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_16 = ___iprot0;
				NullCheck(L_16);
				VirtualActionInvoker0::Invoke(32 /* System.Void Thrift.Protocol.TProtocol::ReadFieldEnd() */, L_16);
				goto IL_000d_1;
			}

IL_006f_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_17 = ___iprot0;
				NullCheck(L_17);
				VirtualActionInvoker0::Invoke(30 /* System.Void Thrift.Protocol.TProtocol::ReadStructEnd() */, L_17);
				goto IL_007e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_007e:
	{
		return;
	}
}
// System.Void BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/SharedTextureRequest_result::Write(Thrift.Protocol.TProtocol)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharedTextureRequest_result_Write_m4241976788BC1936A8F060CCDE804DBC740542DA (SharedTextureRequest_result_tF57E540E873EE83BE065ED81A2313266C8AD1961* __this, TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* ___oprot0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6477FB0CBF4E978465F5CB8C51161A34304B3890);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9414468FCD6502F62D87DD17B40F314907A42588);
		s_Il2CppMethodInitialized = true;
	}
	TStruct_tAD67F1F0C45235334F9440B6A587DB03A0CE5C96 V_0;
	memset((&V_0), 0, sizeof(V_0));
	TField_tF4D9D8EFE767C142914693E0E787547F0213D334 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_0 = ___oprot0;
		NullCheck(L_0);
		TProtocol_IncrementRecursionDepth_m92B440A7308F6D7012C73B74A6406855A29FF58B(L_0, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_007a:
			{// begin finally (depth: 1)
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_1 = ___oprot0;
				NullCheck(L_1);
				TProtocol_DecrementRecursionDepth_m049900374B8368A8AEB03E6FC93DF288EA1BE44B(L_1, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				TStruct__ctor_mD56EA112D651038138D3BC7203C3606718E5CB3F((&V_0), _stringLiteral9414468FCD6502F62D87DD17B40F314907A42588, NULL);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_2 = ___oprot0;
				TStruct_tAD67F1F0C45235334F9440B6A587DB03A0CE5C96 L_3 = V_0;
				NullCheck(L_2);
				VirtualActionInvoker1< TStruct_tAD67F1F0C45235334F9440B6A587DB03A0CE5C96 >::Invoke(8 /* System.Void Thrift.Protocol.TProtocol::WriteStructBegin(Thrift.Protocol.TStruct) */, L_2, L_3);
				il2cpp_codegen_initobj((&V_1), sizeof(TField_tF4D9D8EFE767C142914693E0E787547F0213D334));
				Isset_t2EC092880773B7465AC7F14FFABF88E95E95F79E* L_4 = (&__this->_____isset_1);
				bool L_5 = L_4->___success_0;
				if (!L_5)
				{
					goto IL_006c_1;
				}
			}
			{
				SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976* L_6;
				L_6 = SharedTextureRequest_result_get_Success_m63FB9F39B5F34985FCA1AB2DE87E0083043C508F_inline(__this, NULL);
				if (!L_6)
				{
					goto IL_006c_1;
				}
			}
			{
				TField_set_Name_mAD35FC0847F990535FAF3E3032CD117B560AF751_inline((&V_1), _stringLiteral6477FB0CBF4E978465F5CB8C51161A34304B3890, NULL);
				TField_set_Type_m2AA4AF23C96A26CB269B78B067489E10F055E983_inline((&V_1), ((int32_t)12), NULL);
				TField_set_ID_m68843CC49A2A49966729F299A58A2BBC6FCC4F01_inline((&V_1), (int16_t)0, NULL);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_7 = ___oprot0;
				TField_tF4D9D8EFE767C142914693E0E787547F0213D334 L_8 = V_1;
				NullCheck(L_7);
				VirtualActionInvoker1< TField_tF4D9D8EFE767C142914693E0E787547F0213D334 >::Invoke(10 /* System.Void Thrift.Protocol.TProtocol::WriteFieldBegin(Thrift.Protocol.TField) */, L_7, L_8);
				SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976* L_9;
				L_9 = SharedTextureRequest_result_get_Success_m63FB9F39B5F34985FCA1AB2DE87E0083043C508F_inline(__this, NULL);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_10 = ___oprot0;
				NullCheck(L_9);
				SharedTex_Write_m23E04FE4F1A2D9D73B407EE38D0C78E284972C26(L_9, L_10, NULL);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_11 = ___oprot0;
				NullCheck(L_11);
				VirtualActionInvoker0::Invoke(11 /* System.Void Thrift.Protocol.TProtocol::WriteFieldEnd() */, L_11);
			}

IL_006c_1:
			{
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_12 = ___oprot0;
				NullCheck(L_12);
				VirtualActionInvoker0::Invoke(12 /* System.Void Thrift.Protocol.TProtocol::WriteFieldStop() */, L_12);
				TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* L_13 = ___oprot0;
				NullCheck(L_13);
				VirtualActionInvoker0::Invoke(9 /* System.Void Thrift.Protocol.TProtocol::WriteStructEnd() */, L_13);
				goto IL_0081;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0081:
	{
		return;
	}
}
// System.String BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/SharedTextureRequest_result::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SharedTextureRequest_result_ToString_mC35FF970F154762DA5DAB570681D4771E8571A85 (SharedTextureRequest_result_tF57E540E873EE83BE065ED81A2313266C8AD1961* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64A32D820F98293234B64F86E152F083BFC327E0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA9E5EE04C95CEBE9BB4EF83F0961FA2CC2C993C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD64DE515DE159C401BB82652225D6BE22CDAD7A1);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	bool V_1 = false;
	StringBuilder_t* G_B6_0 = NULL;
	StringBuilder_t* G_B5_0 = NULL;
	String_t* G_B7_0 = NULL;
	StringBuilder_t* G_B7_1 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_mCD797D942316CB356205FD96415B0B7581CDAD60(L_0, _stringLiteral64A32D820F98293234B64F86E152F083BFC327E0, NULL);
		V_0 = L_0;
		V_1 = (bool)1;
		SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976* L_1;
		L_1 = SharedTextureRequest_result_get_Success_m63FB9F39B5F34985FCA1AB2DE87E0083043C508F_inline(__this, NULL);
		if (!L_1)
		{
			goto IL_0060;
		}
	}
	{
		Isset_t2EC092880773B7465AC7F14FFABF88E95E95F79E* L_2 = (&__this->_____isset_1);
		bool L_3 = L_2->___success_0;
		if (!L_3)
		{
			goto IL_0060;
		}
	}
	{
		bool L_4 = V_1;
		if (L_4)
		{
			goto IL_0031;
		}
	}
	{
		StringBuilder_t* L_5 = V_0;
		NullCheck(L_5);
		StringBuilder_t* L_6;
		L_6 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_5, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
	}

IL_0031:
	{
		V_1 = (bool)0;
		StringBuilder_t* L_7 = V_0;
		NullCheck(L_7);
		StringBuilder_t* L_8;
		L_8 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_7, _stringLiteralBA9E5EE04C95CEBE9BB4EF83F0961FA2CC2C993C, NULL);
		StringBuilder_t* L_9 = V_0;
		SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976* L_10;
		L_10 = SharedTextureRequest_result_get_Success_m63FB9F39B5F34985FCA1AB2DE87E0083043C508F_inline(__this, NULL);
		G_B5_0 = L_9;
		if (!L_10)
		{
			G_B6_0 = L_9;
			goto IL_0055;
		}
	}
	{
		SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976* L_11;
		L_11 = SharedTextureRequest_result_get_Success_m63FB9F39B5F34985FCA1AB2DE87E0083043C508F_inline(__this, NULL);
		NullCheck(L_11);
		String_t* L_12;
		L_12 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_11);
		G_B7_0 = L_12;
		G_B7_1 = G_B5_0;
		goto IL_005a;
	}

IL_0055:
	{
		G_B7_0 = _stringLiteralD64DE515DE159C401BB82652225D6BE22CDAD7A1;
		G_B7_1 = G_B6_0;
	}

IL_005a:
	{
		NullCheck(G_B7_1);
		StringBuilder_t* L_13;
		L_13 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(G_B7_1, G_B7_0, NULL);
	}

IL_0060:
	{
		StringBuilder_t* L_14 = V_0;
		NullCheck(L_14);
		StringBuilder_t* L_15;
		L_15 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_14, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D, NULL);
		StringBuilder_t* L_16 = V_0;
		NullCheck(L_16);
		String_t* L_17;
		L_17 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_16);
		return L_17;
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
// Conversion methods for marshalling of: BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/SharedTextureRequest_result/Isset
IL2CPP_EXTERN_C void Isset_t2EC092880773B7465AC7F14FFABF88E95E95F79E_marshal_pinvoke(const Isset_t2EC092880773B7465AC7F14FFABF88E95E95F79E& unmarshaled, Isset_t2EC092880773B7465AC7F14FFABF88E95E95F79E_marshaled_pinvoke& marshaled)
{
	marshaled.___success_0 = static_cast<int32_t>(unmarshaled.___success_0);
}
IL2CPP_EXTERN_C void Isset_t2EC092880773B7465AC7F14FFABF88E95E95F79E_marshal_pinvoke_back(const Isset_t2EC092880773B7465AC7F14FFABF88E95E95F79E_marshaled_pinvoke& marshaled, Isset_t2EC092880773B7465AC7F14FFABF88E95E95F79E& unmarshaled)
{
	bool unmarshaledsuccess_temp_0 = false;
	unmarshaledsuccess_temp_0 = static_cast<bool>(marshaled.___success_0);
	unmarshaled.___success_0 = unmarshaledsuccess_temp_0;
}
// Conversion method for clean up from marshalling of: BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/SharedTextureRequest_result/Isset
IL2CPP_EXTERN_C void Isset_t2EC092880773B7465AC7F14FFABF88E95E95F79E_marshal_pinvoke_cleanup(Isset_t2EC092880773B7465AC7F14FFABF88E95E95F79E_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/SharedTextureRequest_result/Isset
IL2CPP_EXTERN_C void Isset_t2EC092880773B7465AC7F14FFABF88E95E95F79E_marshal_com(const Isset_t2EC092880773B7465AC7F14FFABF88E95E95F79E& unmarshaled, Isset_t2EC092880773B7465AC7F14FFABF88E95E95F79E_marshaled_com& marshaled)
{
	marshaled.___success_0 = static_cast<int32_t>(unmarshaled.___success_0);
}
IL2CPP_EXTERN_C void Isset_t2EC092880773B7465AC7F14FFABF88E95E95F79E_marshal_com_back(const Isset_t2EC092880773B7465AC7F14FFABF88E95E95F79E_marshaled_com& marshaled, Isset_t2EC092880773B7465AC7F14FFABF88E95E95F79E& unmarshaled)
{
	bool unmarshaledsuccess_temp_0 = false;
	unmarshaledsuccess_temp_0 = static_cast<bool>(marshaled.___success_0);
	unmarshaled.___success_0 = unmarshaledsuccess_temp_0;
}
// Conversion method for clean up from marshalling of: BlueprintReality.Thrift.SharedTextures.SharedTextureCommunication/SharedTextureRequest_result/Isset
IL2CPP_EXTERN_C void Isset_t2EC092880773B7465AC7F14FFABF88E95E95F79E_marshal_com_cleanup(Isset_t2EC092880773B7465AC7F14FFABF88E95E95F79E_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t TField_get_Type_m9024F14811B537E2B78F28A284CC68FAD7D92084_inline (TField_tF4D9D8EFE767C142914693E0E787547F0213D334* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->___type_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int16_t TField_get_ID_m512A7F246CCD70AD2C473FA5AF09E6ECC8AB8B1A_inline (TField_tF4D9D8EFE767C142914693E0E787547F0213D334* __this, const RuntimeMethod* method) 
{
	{
		int16_t L_0 = __this->___id_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* VideoInput_get_CurrentPosition_mE2FDD6624494E919D1291C3C8671F04953830D58_inline (VideoInput_tBCABAFE80056975164CAF3CE7E52DABA81AE3BCB* __this, const RuntimeMethod* method) 
{
	{
		Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* L_0 = __this->____currentPosition_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14* VideoInput_get_CurrentRotation_m201FDC3DA521B6D824D352AB624323318FE0AE39_inline (VideoInput_tBCABAFE80056975164CAF3CE7E52DABA81AE3BCB* __this, const RuntimeMethod* method) 
{
	{
		Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14* L_0 = __this->____currentRotation_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* VideoInput_get_ProjectToCameras_mBA765B2AED959C6A912F72EF273CA8B8F2C64319_inline (VideoInput_tBCABAFE80056975164CAF3CE7E52DABA81AE3BCB* __this, const RuntimeMethod* method) 
{
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->____projectToCameras_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TList_get_Count_mC247FFC2E5F7D3F1AD406B549324A08C2097C6DC_inline (TList_t901068FC67AF1D67BF97378377E2FBDB40D54C1B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___count_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* VideoInput_get_Identifier_m4A052FADC16C20BBB596787D84E02E299B5EC0C2_inline (VideoInput_tBCABAFE80056975164CAF3CE7E52DABA81AE3BCB* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____identifier_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TField_set_Name_mAD35FC0847F990535FAF3E3032CD117B560AF751_inline (TField_tF4D9D8EFE767C142914693E0E787547F0213D334* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___name_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___name_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TField_set_Type_m2AA4AF23C96A26CB269B78B067489E10F055E983_inline (TField_tF4D9D8EFE767C142914693E0E787547F0213D334* __this, uint8_t ___value0, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = ___value0;
		__this->___type_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TField_set_ID_m68843CC49A2A49966729F299A58A2BBC6FCC4F01_inline (TField_tF4D9D8EFE767C142914693E0E787547F0213D334* __this, int16_t ___value0, const RuntimeMethod* method) 
{
	{
		int16_t L_0 = ___value0;
		__this->___id_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double VideoInput_get_FieldOfView_m41BA5046686A377E708F5F9F90F9E4CAD4512B74_inline (VideoInput_tBCABAFE80056975164CAF3CE7E52DABA81AE3BCB* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->____fieldOfView_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool VideoInput_get_ProjectToUser_m19CCFE79F7E71C7650F4DD9FF6C60A5C84C6944A_inline (VideoInput_tBCABAFE80056975164CAF3CE7E52DABA81AE3BCB* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____projectToUser_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Viewfinder_set_Identifier_m31798BB42B2B8A8662E8148D583C21467E9D36C7_inline (Viewfinder_t843542A36830CBE3231029C0C271BD459E15CB86* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CIdentifierU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIdentifierU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* Viewfinder_get_CurrentPosition_m31D4F0F9151E2373694DC4A21E5DE9803B65B260_inline (Viewfinder_t843542A36830CBE3231029C0C271BD459E15CB86* __this, const RuntimeMethod* method) 
{
	{
		Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* L_0 = __this->____currentPosition_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14* Viewfinder_get_CurrentRotation_m25C8FF9DA62809734BC13449AAF32DA975F085C2_inline (Viewfinder_t843542A36830CBE3231029C0C271BD459E15CB86* __this, const RuntimeMethod* method) 
{
	{
		Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14* L_0 = __this->____currentRotation_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* Viewfinder_get_CurrentScale_mC2F76F7CEBDEE5E7E7190A625F5C347C8CCC69B2_inline (Viewfinder_t843542A36830CBE3231029C0C271BD459E15CB86* __this, const RuntimeMethod* method) 
{
	{
		Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* L_0 = __this->____currentScale_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Viewfinder_get_Identifier_mA0F741163EB65BB09715457C90D4183F41554F39_inline (Viewfinder_t843542A36830CBE3231029C0C271BD459E15CB86* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CIdentifierU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* VirtualCamera_get_CurrentPosition_m874C91FBA8BF730867BA73F7AC532CDBCB236C14_inline (VirtualCamera_tE3BDC17FDEBF36E1926300A209225F859FB31C1B* __this, const RuntimeMethod* method) 
{
	{
		Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* L_0 = __this->____currentPosition_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14* VirtualCamera_get_CurrentRotation_mC2D2A7A4031A0E2FD53EF7AD1C2958380D0319D3_inline (VirtualCamera_tE3BDC17FDEBF36E1926300A209225F859FB31C1B* __this, const RuntimeMethod* method) 
{
	{
		Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14* L_0 = __this->____currentRotation_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* VirtualCamera_get_VideoInputIds_mFB7A38A77C2BBCE738E1EE085B3A384055CE8AD0_inline (VirtualCamera_tE3BDC17FDEBF36E1926300A209225F859FB31C1B* __this, const RuntimeMethod* method) 
{
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->____videoInputIds_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* VirtualCamera_get_Identifier_mEB3E5A1767F4C8F0D9F933E1DDD0AC6792627E4E_inline (VirtualCamera_tE3BDC17FDEBF36E1926300A209225F859FB31C1B* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____identifier_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double VirtualCamera_get_FieldOfView_m4A53680A2958AD93774C5E71C9489FB48E295A92_inline (VirtualCamera_tE3BDC17FDEBF36E1926300A209225F859FB31C1B* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->____fieldOfView_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VirtualCamera_get_RenderResolutionWidth_m98D10D02754388546B82A964C256B4FF4B4A9DA0_inline (VirtualCamera_tE3BDC17FDEBF36E1926300A209225F859FB31C1B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____renderResolutionWidth_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VirtualCamera_get_RenderResolutionHeight_m00191951FF1DAB883EAE7335E91834587927FBB6_inline (VirtualCamera_tE3BDC17FDEBF36E1926300A209225F859FB31C1B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____renderResolutionHeight_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VirtualCamera_get_RenderFramerate_mF0F4BCA562C3238F9EE0448856A3F4E0A39D1F4F_inline (VirtualCamera_tE3BDC17FDEBF36E1926300A209225F859FB31C1B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____renderFramerate_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool VirtualCamera_get_ExternalComposite_mAAB6F73297B81B95B39E2D45DA2CA5E94A0B080B_inline (VirtualCamera_tE3BDC17FDEBF36E1926300A209225F859FB31C1B* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____externalComposite_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double VirtualCamera_get_FrameBufferDelay_m3BB072B6372C82D9BB197CE841C68500762FD32A_inline (VirtualCamera_tE3BDC17FDEBF36E1926300A209225F859FB31C1B* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->____frameBufferDelay_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t VirtualCamera_get_OutputPtr_mF4AA03E4E508A4199E5CB0D6DDA77B1523D892EF_inline (VirtualCamera_tE3BDC17FDEBF36E1926300A209225F859FB31C1B* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->____outputPtr_14;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool VirtualCamera_get_AutoSnapshotEnabled_m46565D880D1EEBB52393AE36E02C9782AF11367D_inline (VirtualCamera_tE3BDC17FDEBF36E1926300A209225F859FB31C1B* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____autoSnapshotEnabled_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool VirtualCamera_get_VideoRecordingEnabled_m1F7882665E5AA652148CF822CC5D81E3A027A5EA_inline (VirtualCamera_tE3BDC17FDEBF36E1926300A209225F859FB31C1B* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____videoRecordingEnabled_16;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* VirtualCamera_get_VideoRecordingOutputPath_m33504419471023E4E94B1D9F2F9D2B515DE8165B_inline (VirtualCamera_tE3BDC17FDEBF36E1926300A209225F859FB31C1B* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____videoRecordingOutputPath_17;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool VirtualCamera_get_VideoStreamingEnabled_m7A267C386377825A87B7AFE9D7D5BA0C056B1EB6_inline (VirtualCamera_tE3BDC17FDEBF36E1926300A209225F859FB31C1B* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____videoStreamingEnabled_18;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool VirtualCamera_get_UsesForeground_m9FF2D095C3A58E121FF257B1F4447DF925695B1E_inline (VirtualCamera_tE3BDC17FDEBF36E1926300A209225F859FB31C1B* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____usesForeground_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool VirtualCamera_get_IsFirstPerson_mE94533EAF07B4CD935C8CF66A8FD4257B0E34183_inline (VirtualCamera_tE3BDC17FDEBF36E1926300A209225F859FB31C1B* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____isFirstPerson_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool VirtualCamera_get_UsesFullRender_mC240E649BE2B7B55EC14C66BB6431F1BE9E481F5_inline (VirtualCamera_tE3BDC17FDEBF36E1926300A209225F859FB31C1B* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____usesFullRender_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool VirtualCamera_get_IsBackgroundTranslucent_mA09987376A70D5E8BF879D5E049376B377DD03F1_inline (VirtualCamera_tE3BDC17FDEBF36E1926300A209225F859FB31C1B* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____isBackgroundTranslucent_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Quaternion_get_X_m5A99DD904B544C4E0D9AF000731C77559AAF6383_inline (Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___U3CXU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Quaternion_get_Y_m363D5BDE062AEFEB0E00440BF483CBD30AB95F27_inline (Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___U3CYU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Quaternion_get_Z_m543A58C65C320661862EB2E9EC8C118C5B3CF56C_inline (Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___U3CZU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Quaternion_get_W_mDD0C1C4E7D8C3EAC68A9D0156FC5E9D291087E14_inline (Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___U3CWU3Ek__BackingField_0;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion_set_W_m30434119F1741B3E37FE03B02042182A0983E900_inline (Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14* __this, double ___value0, const RuntimeMethod* method) 
{
	{
		double L_0 = ___value0;
		__this->___U3CWU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion_set_X_mE518C39BABBCF679D6DACC46E253E480D2297586_inline (Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14* __this, double ___value0, const RuntimeMethod* method) 
{
	{
		double L_0 = ___value0;
		__this->___U3CXU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion_set_Y_m2B93BF711695CE1FC750D08E0575477175C92625_inline (Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14* __this, double ___value0, const RuntimeMethod* method) 
{
	{
		double L_0 = ___value0;
		__this->___U3CYU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion_set_Z_m6C4B20166E3FAA51DE08FC786B2AE6239FF3661D_inline (Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14* __this, double ___value0, const RuntimeMethod* method) 
{
	{
		double L_0 = ___value0;
		__this->___U3CZU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_op_Equality_m3DF1D708D3A0AFB11EACF42A9C068EF6DC508FBB_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___lhs0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___rhs1;
		float L_2;
		L_2 = Quaternion_Dot_m4A80D03D7B7DEC054E2175E53D072675649C6713_inline(L_0, L_1, NULL);
		bool L_3;
		L_3 = Quaternion_IsEqualUsingDot_m5C6AC5F5C56B27C25DDF612BEEF40F28CA44CA31_inline(L_2, NULL);
		V_0 = L_3;
		goto IL_0010;
	}

IL_0010:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Quaternion_GetHashCode_m5F55C34C98E437376595E722BE4EB8A70434F049_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		float* L_0 = (&__this->___x_0);
		int32_t L_1;
		L_1 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_0, NULL);
		float* L_2 = (&__this->___y_1);
		int32_t L_3;
		L_3 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_2, NULL);
		float* L_4 = (&__this->___z_2);
		int32_t L_5;
		L_5 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_4, NULL);
		float* L_6 = (&__this->___w_3);
		int32_t L_7;
		L_7 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_6, NULL);
		V_0 = ((int32_t)(((int32_t)(((int32_t)(L_1^((int32_t)(L_3<<2))))^((int32_t)(L_5>>2))))^((int32_t)(L_7>>1))));
		goto IL_0039;
	}

IL_0039:
	{
		int32_t L_8 = V_0;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Vector3_get_X_mBDD4CEFB5FE45779A8206A8ED7CC94E985B1811B_inline (Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___U3CXU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Vector3_get_Y_m12664DD3843DD16A595E1C5BEF11BC8FC0AEC002_inline (Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___U3CYU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Vector3_get_Z_m742A1196945ACF63E1B3AD737C8ADBDBB6509820_inline (Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* __this, const RuntimeMethod* method) 
{
	{
		double L_0 = __this->___U3CZU3Ek__BackingField_2;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_set_X_mA4D24BFC6E74B2B9228917D0265F74A945A69DB8_inline (Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* __this, double ___value0, const RuntimeMethod* method) 
{
	{
		double L_0 = ___value0;
		__this->___U3CXU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_set_Y_m30BEE789637841CB70436D81B1818902E92BDC84_inline (Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* __this, double ___value0, const RuntimeMethod* method) 
{
	{
		double L_0 = ___value0;
		__this->___U3CYU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_set_Z_m3D14EF8D9066ACDCE55D1182B679760CF75F5758_inline (Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* __this, double ___value0, const RuntimeMethod* method) 
{
	{
		double L_0 = ___value0;
		__this->___U3CZU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))));
		float L_18 = V_3;
		V_4 = (bool)((((float)L_18) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_0043;
	}

IL_0043:
	{
		bool L_19 = V_4;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3_GetHashCode_mB08429DC931A85BD29CE11B9ABC77DE7E0E46327_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		float* L_0 = (&__this->___x_2);
		int32_t L_1;
		L_1 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_0, NULL);
		float* L_2 = (&__this->___y_3);
		int32_t L_3;
		L_3 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_2, NULL);
		float* L_4 = (&__this->___z_4);
		int32_t L_5;
		L_5 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_4, NULL);
		V_0 = ((int32_t)(((int32_t)(L_1^((int32_t)(L_3<<2))))^((int32_t)(L_5>>2))));
		goto IL_002b;
	}

IL_002b:
	{
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Pose_set_Position_m4FEAA7230DF3E11A79FEC82E6E4450F699815DCF_inline (Pose_t56F6B800CDF4F0273D46059BF45307D69B3F62C3* __this, Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* ___value0, const RuntimeMethod* method) 
{
	{
		Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* L_0 = ___value0;
		__this->___U3CPositionU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPositionU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Pose_set_Rotation_mE34B2D8546F449EACE972EF2CDBA72F0747BD74F_inline (Pose_t56F6B800CDF4F0273D46059BF45307D69B3F62C3* __this, Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14* ___value0, const RuntimeMethod* method) 
{
	{
		Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14* L_0 = ___value0;
		__this->___U3CRotationU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRotationU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* Pose_get_Position_mA7DB3A7243D9B8BA662790BBB280DC07B05BC9B4_inline (Pose_t56F6B800CDF4F0273D46059BF45307D69B3F62C3* __this, const RuntimeMethod* method) 
{
	{
		Vector3_tCC476CD4CD4E83F851419A4E28F277C30B10FE55* L_0 = __this->___U3CPositionU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14* Pose_get_Rotation_m84DE9DF1E06E1DBD0938959E27EB8C521998B06E_inline (Pose_t56F6B800CDF4F0273D46059BF45307D69B3F62C3* __this, const RuntimeMethod* method) 
{
	{
		Quaternion_t75AD47A86BB1A543CBA82694F41D4E4415D31B14* L_0 = __this->___U3CRotationU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SharedTex_set_Handle_mF9E7DAB17C6E6BD23FADA211B5F4BC63867C8E90_inline (SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976* __this, int64_t ___value0, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___value0;
		__this->___U3CHandleU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SharedTex_set_Width_mDBD3B42833AB023C2F2F8A6919E7362413A18AD7_inline (SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CWidthU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SharedTex_set_Height_m88D20EAB79526A43887086E529940DC006D06B36_inline (SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CHeightU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SharedTex_set_Format_m46B540AC0558D6793F9CB2D17F79F80C63289A92_inline (SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CFormatU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t SharedTex_get_Handle_m512729E37878AE923590D2256A68A2A0BD12FCE2_inline (SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->___U3CHandleU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SharedTex_get_Width_m729E44044DC62A766A6116F92F36EC97B9D30EEA_inline (SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CWidthU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SharedTex_get_Height_m70CB07877DEC6388E8003B6505EE22A03730B064_inline (SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CHeightU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SharedTex_get_Format_m11E0F3EB90F0884DCE26AF618D539534804B0F3B_inline (SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CFormatU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t SharedTex_get_ProcId_m7C71069F0E08FD9343B3F9EE84DBD65BBC16F4A8_inline (SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->____procId_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SharedTexPacket_set_Id_m7C4487D389DD64041C52C6BEB41FE4839BFD81A9_inline (SharedTexPacket_t06FC19BA6F5C2223EECB4BF1BE34A8360027D77A* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CIdU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIdU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SharedTexPacket_set_Info_mD3B5E5EBE579216D792AF75ED3785E85D410C0F1_inline (SharedTexPacket_t06FC19BA6F5C2223EECB4BF1BE34A8360027D77A* __this, SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976* ___value0, const RuntimeMethod* method) 
{
	{
		SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976* L_0 = ___value0;
		__this->___U3CInfoU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CInfoU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976* SharedTexPacket_get_Info_m6EFB0E927254E4032EEC2C478E4D7716C8F8FA06_inline (SharedTexPacket_t06FC19BA6F5C2223EECB4BF1BE34A8360027D77A* __this, const RuntimeMethod* method) 
{
	{
		SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976* L_0 = __this->___U3CInfoU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SharedTexPacket_get_Id_m5FE5414EDEBCE9DA3BC724D203885330ACA76A87_inline (SharedTexPacket_t06FC19BA6F5C2223EECB4BF1BE34A8360027D77A* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CIdU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TTransport_tC5405D0CBA5B6B81DF71447B64F47F76B45C6A53* TProtocol_get_Transport_mDD6E0B1DB55B839D353BA90016FE48CAAE91609A_inline (TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* __this, const RuntimeMethod* method) 
{
	{
		TTransport_tC5405D0CBA5B6B81DF71447B64F47F76B45C6A53* L_0 = __this->___trans_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TMessage_get_Type_m3424E30FC2CE9DA5A36D300E20D383AF42EE16B9_inline (TMessage_tA7EE1296176D302DA8CB5201A04319D8D3B44043* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___type_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* validate_function_list_result_get_Success_m935126A826ED7821006377EE3AEFAE0F418630F0_inline (validate_function_list_result_tEA96B244E3A94307177B3D8736902272FDCE0944* __this, const RuntimeMethod* method) 
{
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->____success_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976* SharedTextureRequest_result_get_Success_m63FB9F39B5F34985FCA1AB2DE87E0083043C508F_inline (SharedTextureRequest_result_tF57E540E873EE83BE065ED81A2313266C8AD1961* __this, const RuntimeMethod* method) 
{
	{
		SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976* L_0 = __this->____success_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TMessage_get_Name_m63AD656ADB643075A24B60FEB0CDFC5934EDCF6E_inline (TMessage_tA7EE1296176D302DA8CB5201A04319D8D3B44043* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___name_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TMessage_get_SeqID_mE72821208FEC318AE52CAD25CCDFF120DFE58D7E_inline (TMessage_tA7EE1296176D302DA8CB5201A04319D8D3B44043* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___seqID_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProcessFunction_Invoke_m491088033029858C7E02390BC87BE3C46F70E4AF_inline (ProcessFunction_t6587BCE70A9CECF27480919C464CD9C54E2DD0DB* __this, int32_t ___seqid0, TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* ___iprot1, TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1* ___oprot2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1*, TProtocol_t3049A13425E10C046EF099A8D11CAF11B4ACBFF1*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___seqid0, ___iprot1, ___oprot2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* Console_get_Error_m8DA94D4EFFF9756FF8B44263E256C7341761BD49_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* L_0 = ((Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_StaticFields*)il2cpp_codegen_static_fields_for(Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var))->___stderr_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SharedTextureNotify_args_get_TexId_m125E16F14550F1E5389757C1461376157D35DF83_inline (SharedTextureNotify_args_t0EBD41B2A9EFE8C795E976A11ED2D89278821EF9* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____texId_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976* SharedTextureNotify_args_get_Texture_m6CF9C6C9D4CDA3D699132B2C7A6E1722B9F3AFA3_inline (SharedTextureNotify_args_t0EBD41B2A9EFE8C795E976A11ED2D89278821EF9* __this, const RuntimeMethod* method) 
{
	{
		SharedTex_tC92A2E28FC9907426B54EA14C7F2526AC19B5976* L_0 = __this->____texture_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SharedTextureRequest_args_get_TexId_m475442629A7A94876AA466576474A97222451577_inline (SharedTextureRequest_args_tD5AE63605C74E527A24E126E22DAFFB08F81D4B7* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____texId_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Dot_m4A80D03D7B7DEC054E2175E53D072675649C6713_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___a0;
		float L_9 = L_8.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___b1;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___a0;
		float L_13 = L_12.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___b1;
		float L_15 = L_14.___w_3;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15))));
		goto IL_003b;
	}

IL_003b:
	{
		float L_16 = V_0;
		return L_16;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_IsEqualUsingDot_m5C6AC5F5C56B27C25DDF612BEEF40F28CA44CA31_inline (float ___dot0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		float L_0 = ___dot0;
		V_0 = (bool)((((float)L_0) > ((float)(0.999998987f)))? 1 : 0);
		goto IL_000c;
	}

IL_000c:
	{
		bool L_1 = V_0;
		return L_1;
	}
}

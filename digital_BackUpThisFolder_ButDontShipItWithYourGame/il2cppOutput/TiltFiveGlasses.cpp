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
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>
struct Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71;
// System.Collections.Generic.Dictionary`2<System.Int32Enum,UnityEngine.Quaternion>
struct Dictionary_2_t1EAC5C973ABD67F7B931BC816768FB4D0DF6218E;
// System.Collections.Generic.Dictionary`2<System.Int32Enum,UnityEngine.Vector3>
struct Dictionary_2_t3709459C97DA2AA4D725799EA931633A015BF5CD;
// System.Collections.Generic.Dictionary`2<TiltFive.Glasses/AREyes,UnityEngine.Camera>
struct Dictionary_2_t71BFAA343ADBECF70319A33149AC4651F23EC3F6;
// System.Collections.Generic.Dictionary`2<TiltFive.Glasses/AREyes,UnityEngine.Quaternion>
struct Dictionary_2_tB850B26CB9CB2FDDA0FD474BA994D6AB9EF9C7AC;
// System.Collections.Generic.Dictionary`2<TiltFive.Glasses/AREyes,UnityEngine.Vector3>
struct Dictionary_2_tA16E81E89B239343E2536E642AAFA7C7E560F2AA;
// System.Collections.Generic.IEqualityComparer`1<TiltFive.Glasses/AREyes>
struct IEqualityComparer_1_t9FD0E9765FAF3570E531828E5CFC0CA4A249E725;
// System.Collections.Generic.Dictionary`2/KeyCollection<TiltFive.Glasses/AREyes,UnityEngine.Camera>
struct KeyCollection_t073F47BBBD0F48F647F07EC091701ECD68CF7012;
// System.Collections.Generic.Dictionary`2/KeyCollection<TiltFive.Glasses/AREyes,UnityEngine.Quaternion>
struct KeyCollection_t2FB721E868C8E37ABE71A91B53925B730D183C25;
// System.Collections.Generic.Dictionary`2/KeyCollection<TiltFive.Glasses/AREyes,UnityEngine.Vector3>
struct KeyCollection_t4A0726DE4241F4C648FFC107BF6ADA254ADEE0B3;
// TiltFive.SingletonComponent`1<TiltFive.Display>
struct SingletonComponent_1_t361383CAF0BC7205C5FE5641CF67C7709CD26335;
// TiltFive.SingletonComponent`1<System.Object>
struct SingletonComponent_1_t6107F250F660F4B79AA013BB5C35A0B65321D834;
// TiltFive.Singleton`1<TiltFive.Glasses>
struct Singleton_1_t3DE33EA244384F5B9B06179B7CC2ADCC575AFBCC;
// TiltFive.Singleton`1<System.Object>
struct Singleton_1_t2C7FA88F6F88872284F84C5614C7C4AB8FD01D88;
// TiltFive.TrackableCore`1<TiltFive.GlassesSettings>
struct TrackableCore_1_tBE6016DABBA8AFF5E8B98992E66F92F4B147EEC8;
// TiltFive.TrackableCore`1<System.Object>
struct TrackableCore_1_tE70B1D0A794545485AA44FAD27B46B353AB0CBFA;
// System.Collections.Generic.Dictionary`2/ValueCollection<TiltFive.Glasses/AREyes,UnityEngine.Camera>
struct ValueCollection_tC6CDB88A3E5A6C3E3751922A44FCDC2EBEC4E177;
// System.Collections.Generic.Dictionary`2/ValueCollection<TiltFive.Glasses/AREyes,UnityEngine.Quaternion>
struct ValueCollection_tFC0E3B867176449919156277A25E508F39541272;
// System.Collections.Generic.Dictionary`2/ValueCollection<TiltFive.Glasses/AREyes,UnityEngine.Vector3>
struct ValueCollection_tB44819A4EF4260A893ACDAF950D0CDCEFEC97778;
// System.Collections.Generic.Dictionary`2/Entry<TiltFive.Glasses/AREyes,UnityEngine.Camera>[]
struct EntryU5BU5D_t3DE051B0FE62EAE09F4D7DB6ABCB2E244BE9DC83;
// System.Collections.Generic.Dictionary`2/Entry<TiltFive.Glasses/AREyes,UnityEngine.Quaternion>[]
struct EntryU5BU5D_t2406A69EFA0F74704A05CEEDCFE9E314F1F7C37A;
// System.Collections.Generic.Dictionary`2/Entry<TiltFive.Glasses/AREyes,UnityEngine.Vector3>[]
struct EntryU5BU5D_t341A42182C7D3111B2625DE0C9367EA9BE95DD88;
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
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// TiltFive.AllAxesBoolean
struct AllAxesBoolean_tB0DA184ED1474346DEEE6023455F57D12EA5573D;
// TiltFive.AxesBoolean
struct AxesBoolean_tD5379A5F6B350E38915135AAEB27D89B3C603362;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// TiltFive.Display
struct Display_t9092D63B391AD42350974AB8DE55ADCADF27CED4;
// TiltFive.DisplayHelper
struct DisplayHelper_t13A3668CAA774537DD54CD56B5151EC05DC0119F;
// TiltFive.DisplaySettings
struct DisplaySettings_t503F5A98E59CAAD41A2BED663812E6CEFF601464;
// TiltFive.GameBoard
struct GameBoard_tA93C5A0FC9C6EDCE1B29BF1BCD616820EE60538A;
// TiltFive.GameBoardSettings
struct GameBoardSettings_tA53FDF5FE8B4D937F945DB659EF5A76243634A4B;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// TiltFive.Glasses
struct Glasses_tD7352D8219D253B4BDA92806B35E4E1946313A95;
// TiltFive.GlassesSettings
struct GlassesSettings_tDE2641921BB452EF823D032185D46CBFA9E5782B;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.ILogger
struct ILogger_tD1F573C6DC829FBA987FA1EBA0A5FA64E0C2BC42;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// TiltFive.ScaleSettings
struct ScaleSettings_t4FE94D7555EF25D5286239492DE97AF448542507;
// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692;
// TiltFive.SplitStereoCamera
struct SplitStereoCamera_t8E4D30C6028706D80A47E65C3110D750E000BEF5;
// TiltFive.SplitStereoTextures
struct SplitStereoTextures_t2F64E25FADF72BE3FB1FCC7DD38D97D5684AB2C0;
// System.String
struct String_t;
// UnityEngine.TextAsset
struct TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// TiltFive.Glasses/GlassesCore
struct GlassesCore_t5A44456D065E1327F5EAA342CF1373142192C837;
// TiltFive.SplitStereoCamera/<PresentStereoImagesCoroutine>d__43
struct U3CPresentStereoImagesCoroutineU3Ed__43_t36E604556C1B7F8143A07F76DA68C2756FD32C18;

IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t71BFAA343ADBECF70319A33149AC4651F23EC3F6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tA16E81E89B239343E2536E642AAFA7C7E560F2AA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tB850B26CB9CB2FDDA0FD474BA994D6AB9EF9C7AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DisplaySettings_t503F5A98E59CAAD41A2BED663812E6CEFF601464_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DllNotFoundException_t8CAE636A394C482C9FCF38FB7B7929506319D534_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GlassesCore_t5A44456D065E1327F5EAA342CF1373142192C837_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GlassesSettings_tDE2641921BB452EF823D032185D46CBFA9E5782B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Glasses_tD7352D8219D253B4BDA92806B35E4E1946313A95_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILogger_tD1F573C6DC829FBA987FA1EBA0A5FA64E0C2BC42_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Singleton_1_t3DE33EA244384F5B9B06179B7CC2ADCC575AFBCC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SplitStereoTextures_t2F64E25FADF72BE3FB1FCC7DD38D97D5684AB2C0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CPresentStereoImagesCoroutineU3Ed__43_t36E604556C1B7F8143A07F76DA68C2756FD32C18_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral102F0816F543B98B96313F146B16B3325EBD6A6C;
IL2CPP_EXTERN_C String_t* _stringLiteral114F57F23D9530272C53997D90AD8B77A569C82D;
IL2CPP_EXTERN_C String_t* _stringLiteral1A9F16795C5361CAF64806CC119896915C20EA07;
IL2CPP_EXTERN_C String_t* _stringLiteral269C651531436C10B4B9A936BD164CE5CD9724A7;
IL2CPP_EXTERN_C String_t* _stringLiteral2899C96F114204D21C5309EE55C4867B78457FED;
IL2CPP_EXTERN_C String_t* _stringLiteral296194A7F3371FF0BB4DAF2ADE9DDF82FF114DB9;
IL2CPP_EXTERN_C String_t* _stringLiteral311B6FE0EDFAF0854622D0E1767B2A7E87B75364;
IL2CPP_EXTERN_C String_t* _stringLiteral3AB4573005EE5E26C1B61C25DB0259D8D5CA5104;
IL2CPP_EXTERN_C String_t* _stringLiteral40FDC08493CEC489A1A3F478A8A40F8115AAB8AC;
IL2CPP_EXTERN_C String_t* _stringLiteral4129396D4312D742E9EBBE94AB1D184601EC14EF;
IL2CPP_EXTERN_C String_t* _stringLiteral4B2B90BE3CA58B512008E85C5FB2979D34A00090;
IL2CPP_EXTERN_C String_t* _stringLiteral4BA80371A735F97F75C815A56FF5BBE05BE867AE;
IL2CPP_EXTERN_C String_t* _stringLiteral524C40172C0C622B2CEECBA355142D3901A5CA29;
IL2CPP_EXTERN_C String_t* _stringLiteral54E5BCF716F078DD8C39F09F1C1FB28260BAF09A;
IL2CPP_EXTERN_C String_t* _stringLiteral56C906292CEC3052B4C6AE15BE5E3DFA1B5B84A0;
IL2CPP_EXTERN_C String_t* _stringLiteral5956FA9599B20E34D38B34F6C458DB273938D78C;
IL2CPP_EXTERN_C String_t* _stringLiteral5EC628ADCF7BC821327A635416F1EEC3EBDBDAC7;
IL2CPP_EXTERN_C String_t* _stringLiteral643CDA87C940CC393FE89E58E647A1357AE1EA57;
IL2CPP_EXTERN_C String_t* _stringLiteral658CCD7E408B3E9089CAE267151E6E6EBA9258FA;
IL2CPP_EXTERN_C String_t* _stringLiteral7878B9A040E56F4AE17844E3310E404B35500EBB;
IL2CPP_EXTERN_C String_t* _stringLiteral84CE53FCF826D885E77CF8104647E93E4DF5C409;
IL2CPP_EXTERN_C String_t* _stringLiteral8E069C9533E193161FA09C62DF106C5EA2FACB94;
IL2CPP_EXTERN_C String_t* _stringLiteral9040D1740D2816E7D1238AE8C1807B29CB5FF992;
IL2CPP_EXTERN_C String_t* _stringLiteral94E767E32A138E288F6E441E48373398C260CF1F;
IL2CPP_EXTERN_C String_t* _stringLiteral9C9F993163D0E3BE7C2BE28F92804AB66D3742DE;
IL2CPP_EXTERN_C String_t* _stringLiteral9DDC23D135EF4B7633EAB47AB6F63B349AFB3082;
IL2CPP_EXTERN_C String_t* _stringLiteralA253BEC1F5C750D45531876BF8415E7320DD989F;
IL2CPP_EXTERN_C String_t* _stringLiteralA365DC044E149236ACDDB48DBB05D9AB80B2298E;
IL2CPP_EXTERN_C String_t* _stringLiteralB12FAB89B8592A51144FD1841137252D483BCAAB;
IL2CPP_EXTERN_C String_t* _stringLiteralB8DA8407D5E6532BE60D2398326614EEA0D559AE;
IL2CPP_EXTERN_C String_t* _stringLiteralC724A83684FE5B0A2BAF470BCD935F60DC1650CE;
IL2CPP_EXTERN_C String_t* _stringLiteralC95A2577E9D77D9A8788A4E01F22C8FE20BEC41B;
IL2CPP_EXTERN_C String_t* _stringLiteralD35831D3DE1EC04845A9068720A0EEC560E9AC14;
IL2CPP_EXTERN_C String_t* _stringLiteralD9B8F305E0B92A08870B7AFBD92A414A5F4B0D46;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralF13A956167F4B88CAFD76BF16F9B89B0996F6B2E;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_TryGetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m1D22E7CA60B7DA94499EFF8D98588B2BD8950882_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_TryGetComponent_TisSplitStereoCamera_t8E4D30C6028706D80A47E65C3110D750E000BEF5_m8DBD7D4763F7BC903D35081EDA4C58AEFDBF5463_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m72483D63C6D573D5D521C56A208CA861A52C5C23_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mB5D850FDC8B0579CEA642A0CA2FA0F5D267D517D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mC932861BD28C9CFC332F53AA19AA5A680D147AFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m5FF6DEE3F95C5AD37D359FF7C5EE1C034BDADD8E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m6FA1EC65AAC3BC14013AF23C315F35928E5CAB42_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mEB42A2538AD040F9B8B05A8A1D183C3472644E60_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mA2AB2D3E45850FF7B320638727DEA457D741491B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mC765916A206303D2F563FF1E8EB582EF2760B551_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mD12D2AC2D4908A10C030F1C9855E2190EBD64F3A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m54E7A1A8089213247DE94390576F98DAE27369BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m766CA45C200D9B717B47231D75BC392495B438FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mBBB7FF63984D2F9723DF998403B0EDD5B73A199A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m0933BC50E883CDEF6FA83FE190DA37CCB2802142_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisSplitStereoCamera_t8E4D30C6028706D80A47E65C3110D750E000BEF5_mE33FC7E9FAA2CF8A2D32AFC8EA585A2BAD3A5DB1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_TryGetComponent_TisSplitStereoCamera_t8E4D30C6028706D80A47E65C3110D750E000BEF5_mECC920696FA3D39B3A9A646488B3AB44024B42E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m887DD9E8844786738857F4A68C25C7AADC55FFA0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SingletonComponent_1__ctor_mCD9CAC13600D09B237CC8B72F143FA8ADAD36953_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SingletonComponent_1_get_Instance_m7C7F3FC2FE8E5775551E7F75D0514E0A3C4DC202_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_1__ctor_m3F580F6C9BFB6FF2E8643945E8D43AD517F4B737_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_1_get_Instance_m693D8A944BB871616AA85060DC3BF0C83A459824_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackableCore_1_ConvertPosGBDToUGBD_m32A6871FF9CB8AF309B854D95085CA1E41C8BF12_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackableCore_1_GameboardToWorldSpace_m90E48C3E34B43EE9AF8DFA2A469243417ED5E39B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackableCore_1_Reset_m2EFCB705F8DC9960090B677479BB89B2BE75A6F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackableCore_1_Update_m3C2F156D5EDD674F86BD0D0A64E52C6313902977_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackableCore_1__ctor_m0A756B93F6040E5438F6B5BB9B07AE1C59967CF4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackableCore_1_get_IsTracked_m968F4B43CC77660E5F0FB75A0B3F34EC1DFFD571_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrackableCore_1_get_Pose_UnityWorldSpace_m7D54E26B20D43D50EB15A927DF3366147E23782E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CPresentStereoImagesCoroutineU3Ed__43_System_Collections_IEnumerator_Reset_mE96FD819F17F8D55B494F83875A16BDA5B17D5B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_0_0_0_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t27D83B7E4E01A39C1BACFBBEE0CA1A02EB5730A7 
{
};

// System.Collections.Generic.Dictionary`2<TiltFive.Glasses/AREyes,UnityEngine.Camera>
struct Dictionary_2_t71BFAA343ADBECF70319A33149AC4651F23EC3F6  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t3DE051B0FE62EAE09F4D7DB6ABCB2E244BE9DC83* ____entries_1;
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
	KeyCollection_t073F47BBBD0F48F647F07EC091701ECD68CF7012* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tC6CDB88A3E5A6C3E3751922A44FCDC2EBEC4E177* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<TiltFive.Glasses/AREyes,UnityEngine.Quaternion>
struct Dictionary_2_tB850B26CB9CB2FDDA0FD474BA994D6AB9EF9C7AC  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t2406A69EFA0F74704A05CEEDCFE9E314F1F7C37A* ____entries_1;
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
	KeyCollection_t2FB721E868C8E37ABE71A91B53925B730D183C25* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tFC0E3B867176449919156277A25E508F39541272* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<TiltFive.Glasses/AREyes,UnityEngine.Vector3>
struct Dictionary_2_tA16E81E89B239343E2536E642AAFA7C7E560F2AA  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t341A42182C7D3111B2625DE0C9367EA9BE95DD88* ____entries_1;
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
	KeyCollection_t4A0726DE4241F4C648FFC107BF6ADA254ADEE0B3* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tB44819A4EF4260A893ACDAF950D0CDCEFEC97778* ____values_8;
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

// TiltFive.Singleton`1<TiltFive.Glasses>
struct Singleton_1_t3DE33EA244384F5B9B06179B7CC2ADCC575AFBCC  : public RuntimeObject
{
};

struct Singleton_1_t3DE33EA244384F5B9B06179B7CC2ADCC575AFBCC_StaticFields
{
	// T TiltFive.Singleton`1::instance
	Glasses_tD7352D8219D253B4BDA92806B35E4E1946313A95* ___instance_0;
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

// TiltFive.AllAxesBoolean
struct AllAxesBoolean_tB0DA184ED1474346DEEE6023455F57D12EA5573D  : public RuntimeObject
{
	// System.Boolean TiltFive.AllAxesBoolean::xyz
	bool ___xyz_0;
};
struct Il2CppArrayBounds;

// TiltFive.AxesBoolean
struct AxesBoolean_tD5379A5F6B350E38915135AAEB27D89B3C603362  : public RuntimeObject
{
	// System.Boolean TiltFive.AxesBoolean::x
	bool ___x_0;
	// System.Boolean TiltFive.AxesBoolean::y
	bool ___y_1;
	// System.Boolean TiltFive.AxesBoolean::z
	bool ___z_2;
};

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

// TiltFive.DisplayHelper
struct DisplayHelper_t13A3668CAA774537DD54CD56B5151EC05DC0119F  : public RuntimeObject
{
};

// TiltFive.GameBoardSettings
struct GameBoardSettings_tA53FDF5FE8B4D937F945DB659EF5A76243634A4B  : public RuntimeObject
{
	// TiltFive.GameBoard TiltFive.GameBoardSettings::currentGameBoard
	GameBoard_tA93C5A0FC9C6EDCE1B29BF1BCD616820EE60538A* ___currentGameBoard_0;
	// TiltFive.GameboardType TiltFive.GameBoardSettings::gameboardTypeOverride
	int32_t ___gameboardTypeOverride_1;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
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

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// TiltFive.SplitStereoCamera/<PresentStereoImagesCoroutine>d__43
struct U3CPresentStereoImagesCoroutineU3Ed__43_t36E604556C1B7F8143A07F76DA68C2756FD32C18  : public RuntimeObject
{
	// System.Int32 TiltFive.SplitStereoCamera/<PresentStereoImagesCoroutine>d__43::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TiltFive.SplitStereoCamera/<PresentStereoImagesCoroutine>d__43::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// TiltFive.SplitStereoCamera TiltFive.SplitStereoCamera/<PresentStereoImagesCoroutine>d__43::<>4__this
	SplitStereoCamera_t8E4D30C6028706D80A47E65C3110D750E000BEF5* ___U3CU3E4__this_2;
	// UnityEngine.WaitForEndOfFrame TiltFive.SplitStereoCamera/<PresentStereoImagesCoroutine>d__43::<cachedWaitForEndOfFrame>5__2
	WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* ___U3CcachedWaitForEndOfFrameU3E5__2_3;
};

// TiltFive.ARProjectionFrustum
struct ARProjectionFrustum_t6D22EF4F5BDE8D84A621BCFE990C13C64CA51530 
{
	// System.Single TiltFive.ARProjectionFrustum::m_Left
	float ___m_Left_0;
	// System.Single TiltFive.ARProjectionFrustum::m_Right
	float ___m_Right_1;
	// System.Single TiltFive.ARProjectionFrustum::m_Bottom
	float ___m_Bottom_2;
	// System.Single TiltFive.ARProjectionFrustum::m_Top
	float ___m_Top_3;
	// System.Single TiltFive.ARProjectionFrustum::m_Near
	float ___m_Near_4;
	// System.Single TiltFive.ARProjectionFrustum::m_Far
	float ___m_Far_5;
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

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// TiltFive.Glasses
struct Glasses_tD7352D8219D253B4BDA92806B35E4E1946313A95  : public Singleton_1_t3DE33EA244384F5B9B06179B7CC2ADCC575AFBCC
{
	// TiltFive.Glasses/GlassesCore TiltFive.Glasses::glassesCore
	GlassesCore_t5A44456D065E1327F5EAA342CF1373142192C837* ___glassesCore_1;
};

struct Glasses_tD7352D8219D253B4BDA92806B35E4E1946313A95_StaticFields
{
	// System.Boolean TiltFive.Glasses::<glassesAvailable>k__BackingField
	bool ___U3CglassesAvailableU3Ek__BackingField_2;
};

// TiltFive.GlassesSettings
struct GlassesSettings_tDE2641921BB452EF823D032185D46CBFA9E5782B  : public TrackableSettings_t54076219B6A408E0FCC2EED6DAC35984CC69EC4F
{
	// UnityEngine.Camera TiltFive.GlassesSettings::headPoseCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___headPoseCamera_2;
	// System.Single TiltFive.GlassesSettings::nearClipPlane
	float ___nearClipPlane_3;
	// System.Single TiltFive.GlassesSettings::farClipPlane
	float ___farClipPlane_4;
	// System.Boolean TiltFive.GlassesSettings::overrideFOV
	bool ___overrideFOV_10;
	// System.Single TiltFive.GlassesSettings::customFOV
	float ___customFOV_11;
	// TiltFive.GlassesMirrorMode TiltFive.GlassesSettings::glassesMirrorMode
	int32_t ___glassesMirrorMode_12;
	// System.Boolean TiltFive.GlassesSettings::usePreviewPose
	bool ___usePreviewPose_13;
	// UnityEngine.Transform TiltFive.GlassesSettings::previewPose
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___previewPose_14;
	// System.String TiltFive.GlassesSettings::friendlyName
	String_t* ___friendlyName_16;
};

struct GlassesSettings_tDE2641921BB452EF823D032185D46CBFA9E5782B_StaticFields
{
	// System.String TiltFive.GlassesSettings::DEFAULT_FRIENDLY_NAME
	String_t* ___DEFAULT_FRIENDLY_NAME_15;
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

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
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

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
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

// UnityEngine.Vector2Int
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A 
{
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;
};

struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_StaticFields
{
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Zero
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Zero_2;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_One
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_One_3;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Up
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Up_4;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Down
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Down_5;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Left
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Left_6;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Right
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Right_7;
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

// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// TiltFive.DisplaySettings
struct DisplaySettings_t503F5A98E59CAAD41A2BED663812E6CEFF601464  : public RuntimeObject
{
	// UnityEngine.Vector2Int TiltFive.DisplaySettings::defaultDimensions
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___defaultDimensions_3;
};

struct DisplaySettings_t503F5A98E59CAAD41A2BED663812E6CEFF601464_StaticFields
{
	// TiltFive.DisplaySettings TiltFive.DisplaySettings::instance
	DisplaySettings_t503F5A98E59CAAD41A2BED663812E6CEFF601464* ___instance_0;
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

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// TiltFive.SplitStereoTextures
struct SplitStereoTextures_t2F64E25FADF72BE3FB1FCC7DD38D97D5684AB2C0  : public RuntimeObject
{
	// UnityEngine.RenderTexture TiltFive.SplitStereoTextures::LeftTexture_GLS
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___LeftTexture_GLS_0;
	// UnityEngine.RenderTexture TiltFive.SplitStereoTextures::RightTexture_GLS
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___RightTexture_GLS_1;
	// System.IntPtr TiltFive.SplitStereoTextures::<LeftTexHandle>k__BackingField
	intptr_t ___U3CLeftTexHandleU3Ek__BackingField_2;
	// System.IntPtr TiltFive.SplitStereoTextures::<RightTexHandle>k__BackingField
	intptr_t ___U3CRightTexHandleU3Ek__BackingField_3;
	// UnityEngine.RenderTexture TiltFive.SplitStereoTextures::MonoPreviewTex
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___MonoPreviewTex_4;
	// UnityEngine.RenderTexture TiltFive.SplitStereoTextures::StereoPreviewTex
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___StereoPreviewTex_5;
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

// TiltFive.TrackableCore`1<TiltFive.GlassesSettings>
struct TrackableCore_1_tBE6016DABBA8AFF5E8B98992E66F92F4B147EEC8  : public RuntimeObject
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

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.TextAsset
struct TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
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

// TiltFive.Glasses/GlassesCore
struct GlassesCore_t5A44456D065E1327F5EAA342CF1373142192C837  : public TrackableCore_1_tBE6016DABBA8AFF5E8B98992E66F92F4B147EEC8
{
	// System.Boolean TiltFive.Glasses/GlassesCore::configured
	bool ___configured_4;
	// System.Collections.Generic.Dictionary`2<TiltFive.Glasses/AREyes,UnityEngine.Vector3> TiltFive.Glasses/GlassesCore::eyePositions
	Dictionary_2_tA16E81E89B239343E2536E642AAFA7C7E560F2AA* ___eyePositions_5;
	// System.Collections.Generic.Dictionary`2<TiltFive.Glasses/AREyes,UnityEngine.Quaternion> TiltFive.Glasses/GlassesCore::eyeRotations
	Dictionary_2_tB850B26CB9CB2FDDA0FD474BA994D6AB9EF9C7AC* ___eyeRotations_6;
	// UnityEngine.Vector3 TiltFive.Glasses/GlassesCore::DEFAULT_GLASSES_POSITION_GAME_BOARD_SPACE
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___DEFAULT_GLASSES_POSITION_GAME_BOARD_SPACE_7;
	// UnityEngine.Quaternion TiltFive.Glasses/GlassesCore::DEFAULT_GLASSES_ROTATION_GAME_BOARD_SPACE
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___DEFAULT_GLASSES_ROTATION_GAME_BOARD_SPACE_8;
	// System.Boolean TiltFive.Glasses/GlassesCore::<TrackingUpdated>k__BackingField
	bool ___U3CTrackingUpdatedU3Ek__BackingField_9;
	// TiltFive.SplitStereoCamera TiltFive.Glasses/GlassesCore::splitStereoCamera
	SplitStereoCamera_t8E4D30C6028706D80A47E65C3110D750E000BEF5* ___splitStereoCamera_10;
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// System.DllNotFoundException
struct DllNotFoundException_t8CAE636A394C482C9FCF38FB7B7929506319D534  : public TypeLoadException_t6333E3083F7BFF1A582969E6F67ACBA8B0035C32
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// TiltFive.SingletonComponent`1<TiltFive.Display>
struct SingletonComponent_1_t361383CAF0BC7205C5FE5641CF67C7709CD26335  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct SingletonComponent_1_t361383CAF0BC7205C5FE5641CF67C7709CD26335_StaticFields
{
	// T TiltFive.SingletonComponent`1::s_Instance
	Display_t9092D63B391AD42350974AB8DE55ADCADF27CED4* ___s_Instance_4;
};

// TiltFive.SplitStereoCamera
struct SplitStereoCamera_t8E4D30C6028706D80A47E65C3110D750E000BEF5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera TiltFive.SplitStereoCamera::theHeadPoseCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___theHeadPoseCamera_5;
	// UnityEngine.GameObject TiltFive.SplitStereoCamera::leftEye
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___leftEye_7;
	// UnityEngine.GameObject TiltFive.SplitStereoCamera::rightEye
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___rightEye_9;
	// System.Boolean TiltFive.SplitStereoCamera::showCameras
	bool ___showCameras_10;
	// System.Collections.Generic.Dictionary`2<TiltFive.Glasses/AREyes,UnityEngine.Camera> TiltFive.SplitStereoCamera::eyeCameras
	Dictionary_2_t71BFAA343ADBECF70319A33149AC4651F23EC3F6* ___eyeCameras_11;
	// UnityEngine.Vector3 TiltFive.SplitStereoCamera::posUGBD_UWRLD
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___posUGBD_UWRLD_12;
	// UnityEngine.Quaternion TiltFive.SplitStereoCamera::rotToUGBD_UWRLD
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotToUGBD_UWRLD_13;
	// System.Single TiltFive.SplitStereoCamera::scaleToUGBD_UWRLD
	float ___scaleToUGBD_UWRLD_14;
	// UnityEngine.Material TiltFive.SplitStereoCamera::displayBlitShader
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___displayBlitShader_16;
	// TiltFive.GlassesMirrorMode TiltFive.SplitStereoCamera::glassesMirrorMode
	int32_t ___glassesMirrorMode_17;
	// TiltFive.GlassesMirrorMode TiltFive.SplitStereoCamera::previousMirrorMode
	int32_t ___previousMirrorMode_18;
	// TiltFive.SplitStereoTextures TiltFive.SplitStereoCamera::splitStereoTextures
	SplitStereoTextures_t2F64E25FADF72BE3FB1FCC7DD38D97D5684AB2C0* ___splitStereoTextures_19;
};

// TiltFive.UniformScaleTransform
struct UniformScaleTransform_t1EC394EEA6D4828034D5A9E2BD403D0BCF6FD917  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector3 TiltFive.UniformScaleTransform::_previousScale
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____previousScale_4;
};

// TiltFive.Display
struct Display_t9092D63B391AD42350974AB8DE55ADCADF27CED4  : public SingletonComponent_1_t361383CAF0BC7205C5FE5641CF67C7709CD26335
{
	// System.Int32[] TiltFive.Display::_displaySettings
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____displaySettings_5;
	// System.IntPtr TiltFive.Display::_sendFrameCallback
	intptr_t ____sendFrameCallback_6;
	// System.Boolean TiltFive.Display::_glassesAvailabilityErroredOnce
	bool ____glassesAvailabilityErroredOnce_7;
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
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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


// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline (const RuntimeMethod* method) ;
// T TiltFive.SingletonComponent`1<System.Object>::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SingletonComponent_1_get_Instance_m4BE0AFB69BB071F7EDC2EBB574ABCC0AC07CA733_gshared (const RuntimeMethod* method) ;
// System.Void TiltFive.SingletonComponent`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingletonComponent_1__ctor_m2149BF3A5BB9621866AEF5FDB3882A896DB363C0_gshared (SingletonComponent_1_t6107F250F660F4B79AA013BB5C35A0B65321D834* __this, const RuntimeMethod* method) ;
// T TiltFive.Singleton`1<System.Object>::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Singleton_1_get_Instance_m91110BDBF294123D1E34990CFD7CEED57AF7965A_gshared_inline (const RuntimeMethod* method) ;
// UnityEngine.Pose TiltFive.TrackableCore`1<System.Object>::get_Pose_UnityWorldSpace()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 TrackableCore_1_get_Pose_UnityWorldSpace_m77B37E4BFDDF5EB20FECFD11A31D0699E766BC5E_gshared_inline (TrackableCore_1_tE70B1D0A794545485AA44FAD27B46B353AB0CBFA* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Int32Enum,UnityEngine.Vector3>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Dictionary_2_get_Item_m2EBFE69BC74E416E5EA4BAA0EBD6585561281958_gshared (Dictionary_2_t3709459C97DA2AA4D725799EA931633A015BF5CD* __this, int32_t ___key0, const RuntimeMethod* method) ;
// System.Boolean TiltFive.TrackableCore`1<System.Object>::get_IsTracked()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TrackableCore_1_get_IsTracked_mB6A3D7AE9D9FAD1F894AED4BED64B55B9558BFD1_gshared_inline (TrackableCore_1_tE70B1D0A794545485AA44FAD27B46B353AB0CBFA* __this, const RuntimeMethod* method) ;
// System.Void TiltFive.Singleton`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Singleton_1__ctor_m7764B020C66D789250B6A5601102E65A6D8A9E99_gshared (Singleton_1_t2C7FA88F6F88872284F84C5614C7C4AB8FD01D88* __this, const RuntimeMethod* method) ;
// System.Void TiltFive.TrackableCore`1<System.Object>::Reset(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableCore_1_Reset_m82169A28EA9F44B910A86379444BE0DD2A0F51F1_gshared (TrackableCore_1_tE70B1D0A794545485AA44FAD27B46B353AB0CBFA* __this, RuntimeObject* ___settings0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::TryGetComponent<System.Object>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_TryGetComponent_TisRuntimeObject_m4D430300D2DFB9276DE980D78F60A05D271D3630_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, RuntimeObject** ___component0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void TiltFive.TrackableCore`1<System.Object>::Update(T,TiltFive.ScaleSettings,TiltFive.GameBoardSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableCore_1_Update_mFC6175FD0ED089E45C694D5162794B0528CF8147_gshared (TrackableCore_1_tE70B1D0A794545485AA44FAD27B46B353AB0CBFA* __this, RuntimeObject* ___settings0, ScaleSettings_t4FE94D7555EF25D5286239492DE97AF448542507* ___scaleSettings1, GameBoardSettings_tA53FDF5FE8B4D937F945DB659EF5A76243634A4B* ___gameBoardSettings2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,UnityEngine.Vector3>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m538EED0FBEF08924380AD83D27727A89ABD23E80_gshared (Dictionary_2_t3709459C97DA2AA4D725799EA931633A015BF5CD* __this, int32_t ___key0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,UnityEngine.Quaternion>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m85242A5E08E079CA26C86380A1D7F4AD7A8CB21C_gshared (Dictionary_2_t1EAC5C973ABD67F7B931BC816768FB4D0DF6218E* __this, int32_t ___key0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value1, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Int32Enum,UnityEngine.Quaternion>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Dictionary_2_get_Item_m4463B0EC4778996EF21D473A3CC7759D63D62909_gshared (Dictionary_2_t1EAC5C973ABD67F7B931BC816768FB4D0DF6218E* __this, int32_t ___key0, const RuntimeMethod* method) ;
// UnityEngine.Pose TiltFive.TrackableCore`1<System.Object>::GameboardToWorldSpace(UnityEngine.Pose,TiltFive.ScaleSettings,TiltFive.GameBoardSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 TrackableCore_1_GameboardToWorldSpace_mA20770B74F3E6DEB62AA553FC011201E904BDC11_gshared (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___pose_GameBoardSpace0, ScaleSettings_t4FE94D7555EF25D5286239492DE97AF448542507* ___scaleSettings1, GameBoardSettings_tA53FDF5FE8B4D937F945DB659EF5A76243634A4B* ___gameBoardSettings2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 TiltFive.TrackableCore`1<System.Object>::ConvertPosGBDToUGBD(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TrackableCore_1_ConvertPosGBDToUGBD_m1EB5AEEFEC7593BA7DBDC3EB4E300171B91FFCA5_gshared (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos_GBD0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,UnityEngine.Vector3>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m860F830B163E2EC44E35E6795C16F3B72ED4D1F6_gshared (Dictionary_2_t3709459C97DA2AA4D725799EA931633A015BF5CD* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,UnityEngine.Vector3>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m1769FE438746D0F90BB902DA73002131C1B2D186_gshared (Dictionary_2_t3709459C97DA2AA4D725799EA931633A015BF5CD* __this, int32_t ___key0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,UnityEngine.Quaternion>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mE8C9C999DF998EB2D5160062A0571F916B34133A_gshared (Dictionary_2_t1EAC5C973ABD67F7B931BC816768FB4D0DF6218E* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,UnityEngine.Quaternion>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m024152B6A0E61E4DCF79A00208CE26AB9D926F75_gshared (Dictionary_2_t1EAC5C973ABD67F7B931BC816768FB4D0DF6218E* __this, int32_t ___key0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value1, const RuntimeMethod* method) ;
// System.Void TiltFive.TrackableCore`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableCore_1__ctor_mB48D3DDC4C32DF5E4652E314A16B3670F339427D_gshared (TrackableCore_1_tE70B1D0A794545485AA44FAD27B46B353AB0CBFA* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m9C4302CCAE3C1BF70D02091D0E0CED7663F18211_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, int32_t ___key0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Component::TryGetComponent<System.Object>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_TryGetComponent_TisRuntimeObject_m69D4ED21F14D49D805A2337F4332934CDA07DEDB_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, RuntimeObject** ___component0, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_mE974DCECE6BCBB030F70F1618B707F587B99BDB4_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent3, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m78DDC81EE49FB9D4194E83685FFED445DFDB75CA_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, int32_t ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mCC9983804D8DC41E938E080075F9EA7BDD0C7059_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mC515884C0546021A29DC0A00DBCABD89B1B65872_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, int32_t ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void TiltFive.ARProjectionFrustum::.ctor(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARProjectionFrustum__ctor_m54E8B9CD493718378D61B7CE80A362F50FFF43DB (ARProjectionFrustum_t6D22EF4F5BDE8D84A621BCFE990C13C64CA51530* __this, float ___l0, float ___r1, float ___b2, float ___t3, float ___n4, float ___f5, const RuntimeMethod* method) ;
// System.IntPtr TiltFive.NativePlugin::GetSendFrameCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativePlugin_GetSendFrameCallback_m2064AEF211C860CEC7AE58D1B01FE1FD9FC8F768 (const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline)(method);
}
// System.Void TiltFive.Logging.Log::Error(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_Error_mFAEE822C890E48138381AB6D607FA252E0245A00 (String_t* ___m0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___list1, const RuntimeMethod* method) ;
// System.Void TiltFive.Display::LogVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Display_LogVersion_m9F42D7730D88879F9E226A6AFCC5157CB4C9EBBE (Display_t9092D63B391AD42350974AB8DE55ADCADF27CED4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.QualitySettings::set_vSyncCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QualitySettings_set_vSyncCount_m37CB89BA3DF4BE2E181339F5F44F03C493733360 (int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.QualitySettings::set_maxQueuedFrames(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QualitySettings_set_maxQueuedFrames_mD72703EAB00A77A94487B59153D11D780493411F (int32_t ___value0, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// UnityEngine.Object UnityEngine.Resources::Load(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* Resources_Load_mDCC8EBD3196F1CE1B86E74416AD90CF86320C401 (String_t* ___path0, Type_t* ___systemTypeInstance1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.String UnityEngine.TextAsset::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TextAsset_get_text_m36846042E3CF3D9DD337BF3F8B2B1902D10C8FD9 (TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* __this, const RuntimeMethod* method) ;
// UnityEngine.ILogger UnityEngine.Debug::get_unityLogger()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Debug_get_unityLogger_mA872400E9E585FCD6A2DE1717748A458545DE8A4_inline (const RuntimeMethod* method) ;
// UnityEngine.StackTraceLogType UnityEngine.Application::GetStackTraceLogType(UnityEngine.LogType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_GetStackTraceLogType_mE441537A882799FFDDBCA49DEB5D3E6399A5509A (int32_t ___logType0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::SetStackTraceLogType(UnityEngine.LogType,UnityEngine.StackTraceLogType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_SetStackTraceLogType_m06EBBA32DF36B4157054A1E45C8107F1D1A318BF (int32_t ___logType0, int32_t ___stackTraceType1, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void TiltFive.Logging.Log::Info(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_Info_m57A985F6B299403D9BC1A3F66AF4EA16BDBDCBAB (String_t* ___m0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___list1, const RuntimeMethod* method) ;
// T TiltFive.SingletonComponent`1<TiltFive.Display>::get_Instance()
inline Display_t9092D63B391AD42350974AB8DE55ADCADF27CED4* SingletonComponent_1_get_Instance_m7C7F3FC2FE8E5775551E7F75D0514E0A3C4DC202 (const RuntimeMethod* method)
{
	return ((  Display_t9092D63B391AD42350974AB8DE55ADCADF27CED4* (*) (const RuntimeMethod*))SingletonComponent_1_get_Instance_m4BE0AFB69BB071F7EDC2EBB574ABCC0AC07CA733_gshared)(method);
}
// System.Boolean TiltFive.Display::SetApplicationInfoImpl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Display_SetApplicationInfoImpl_mE2F10EB2EF3D1AA03E36217925448962A662D4D7 (Display_t9092D63B391AD42350974AB8DE55ADCADF27CED4* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_productName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_productName_m00192B33A17C93424812C4A99AEA41993380EBA1 (const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_identifier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_identifier_m26B38D49FA10A46D61C1309769A59E9CF7460006 (const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_version()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_version_mD6AC9813ABCAD4D2A1F764F99E26068CA5B830F2 (const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_unityVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_unityVersion_m09F45DDCFA0A4414AA296A595FDB0B59B44F5387 (const RuntimeMethod* method) ;
// UnityEngine.Object UnityEngine.Resources::Load(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* Resources_Load_m9608D2902F542C0B7FD52EFED088323448B9FA35 (String_t* ___path0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// TiltFive.T5_StringUTF8 TiltFive.T5_StringUTF8::op_Implicit(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR T5_StringUTF8_t8AC81068B24B238DB0858B6081E88E9C67B549B2 T5_StringUTF8_op_Implicit_m45088BAC0DB1CEE31F98A0BC83E7752D4801D66D (String_t* ___text0, const RuntimeMethod* method) ;
// System.Void TiltFive.T5_StringUTF8::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void T5_StringUTF8_Dispose_m453ABFC5D1BAB64547C8D544E5698F634880DB2D (T5_StringUTF8_t8AC81068B24B238DB0858B6081E88E9C67B549B2* __this, const RuntimeMethod* method) ;
// System.Int32 TiltFive.NativePlugin::SetApplicationInfo(TiltFive.T5_StringUTF8,TiltFive.T5_StringUTF8,TiltFive.T5_StringUTF8)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativePlugin_SetApplicationInfo_m0F9E057188F2EF74D652D6C4A6113A7BC443D0A9 (T5_StringUTF8_t8AC81068B24B238DB0858B6081E88E9C67B549B2 ___appName0, T5_StringUTF8_t8AC81068B24B238DB0858B6081E88E9C67B549B2 ___appId1, T5_StringUTF8_t8AC81068B24B238DB0858B6081E88E9C67B549B2 ___appVersion2, const RuntimeMethod* method) ;
// System.Boolean TiltFive.Display::GetGlassesAvailabilityImpl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Display_GetGlassesAvailabilityImpl_mCC783E075A134B01E0828484B47B49B33FBA6882 (Display_t9092D63B391AD42350974AB8DE55ADCADF27CED4* __this, const RuntimeMethod* method) ;
// System.Int32 TiltFive.NativePlugin::RefreshGlassesAvailable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativePlugin_RefreshGlassesAvailable_m221EB39E8EC18C7506BABA28B5E9F360F280B3BE (const RuntimeMethod* method) ;
// System.Boolean TiltFive.Display::PresentStereoImagesImpl(System.IntPtr,System.IntPtr,System.Int32,System.Int32,System.Boolean,System.Single,System.Single,UnityEngine.Quaternion,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Display_PresentStereoImagesImpl_mE6AA323FF92259AC969E842FDD31A0EE82C07835 (Display_t9092D63B391AD42350974AB8DE55ADCADF27CED4* __this, intptr_t ___leftTexHandle0, intptr_t ___rightTexHandle1, int32_t ___texWidth_PIX2, int32_t ___texHeight_PIX3, bool ___isSrgb4, float ___fovYDegrees5, float ___widthToHeightRatio6, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotToUGBD_ULVC7, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___posOfULVC_UGBD8, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotToUGBD_URVC9, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___posOfURVC_UGBD10, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_m13B7C3EAA64DC921EC23346C56A5A597B5481FF5_inline (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_AngleAxis_m01A869DC10F976FAF493B66F15D6D6977BB61DA8 (float ___angle0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___axis1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void TiltFive.T5_FrameInfo::set_IsSrgb(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void T5_FrameInfo_set_IsSrgb_m0AC22AE2E1BAC0215726C614A0B95E17584212D4 (T5_FrameInfo_t7F613E6396304E74C09C56EA80815A7E37AFF041* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void TiltFive.T5_FrameInfo::set_IsUpsideDown(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void T5_FrameInfo_set_IsUpsideDown_m1D7053D60340A02DCF04F8AD2A058E2EADF95E4C (T5_FrameInfo_t7F613E6396304E74C09C56EA80815A7E37AFF041* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void TiltFive.T5_FrameInfo::set_VCI(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void T5_FrameInfo_set_VCI_m3978F2B37AD1A924FBFE49F68336057BDC2B88EE (T5_FrameInfo_t7F613E6396304E74C09C56EA80815A7E37AFF041* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___value0, const RuntimeMethod* method) ;
// System.Void TiltFive.T5_FrameInfo::set_RotToLVC_GBD(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void T5_FrameInfo_set_RotToLVC_GBD_m3A8B1DE49189AC76AC49AA7CED5F6CD6E9F48917 (T5_FrameInfo_t7F613E6396304E74C09C56EA80815A7E37AFF041* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Void TiltFive.T5_FrameInfo::set_PosOfLVC_GBD(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void T5_FrameInfo_set_PosOfLVC_GBD_m4ED417FC1886AEDB37D953AD468C9F80AC977B94 (T5_FrameInfo_t7F613E6396304E74C09C56EA80815A7E37AFF041* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void TiltFive.T5_FrameInfo::set_RotToRVC_GBD(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void T5_FrameInfo_set_RotToRVC_GBD_m7065C3A18184B4A38892EEE24E3393A88E366904 (T5_FrameInfo_t7F613E6396304E74C09C56EA80815A7E37AFF041* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Void TiltFive.T5_FrameInfo::set_PosOfRVC_GBD(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void T5_FrameInfo_set_PosOfRVC_GBD_m1D2A4A86DC3504535431F299F9253FC24E016371 (T5_FrameInfo_t7F613E6396304E74C09C56EA80815A7E37AFF041* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Int32 TiltFive.NativePlugin::QueueStereoImages(TiltFive.T5_FrameInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativePlugin_QueueStereoImages_m6AC1A699770FC4EF0908D46089A19F356B5E74CB (T5_FrameInfo_t7F613E6396304E74C09C56EA80815A7E37AFF041 ___frameInfo0, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method) ;
// System.Void UnityEngine.GL::IssuePluginEvent(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_IssuePluginEvent_m6F9EC530F81DC4DB91A09B4F9F730B013C6929EF (intptr_t ___callback0, int32_t ___eventID1, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Boolean TiltFive.Display::GetDisplayDimensionsImpl(UnityEngine.Vector2Int&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Display_GetDisplayDimensionsImpl_m4854DD7165D10FCD1A4C96054C261C234EEB04AB (Display_t9092D63B391AD42350974AB8DE55ADCADF27CED4* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* ___displayDimensions0, const RuntimeMethod* method) ;
// System.Int32 TiltFive.NativePlugin::GetMaxDisplayDimensions(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativePlugin_GetMaxDisplayDimensions_m30E11A95E3DDE3B85D856968D5941C7ED4D672C6 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___displayDimensions0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2Int::.ctor(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) ;
// System.Void TiltFive.Logging.Log::Warn(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Log_Warn_mF40461B896B66C649888EB8AA1E437748439C28B (String_t* ___m0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___list1, const RuntimeMethod* method) ;
// System.Boolean TiltFive.Display::GetGlassesIPDImpl(System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Display_GetGlassesIPDImpl_m836E89E0D26670E4C5FC30018379E01242BD51C5 (Display_t9092D63B391AD42350974AB8DE55ADCADF27CED4* __this, float* ___glassesIPD0, const RuntimeMethod* method) ;
// System.Int32 TiltFive.NativePlugin::GetGlassesIPD(System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativePlugin_GetGlassesIPD_m92CF5676AA515874AAD33113D42E84C47082D367 (float* ___glassesIPD0, const RuntimeMethod* method) ;
// System.Boolean TiltFive.Display::GetGlassesAvailability()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Display_GetGlassesAvailability_mF1BF8B7E8413884C603712A158F02A30D2B797C2 (const RuntimeMethod* method) ;
// System.Void TiltFive.SingletonComponent`1<TiltFive.Display>::.ctor()
inline void SingletonComponent_1__ctor_mCD9CAC13600D09B237CC8B72F143FA8ADAD36953 (SingletonComponent_1_t361383CAF0BC7205C5FE5641CF67C7709CD26335* __this, const RuntimeMethod* method)
{
	((  void (*) (SingletonComponent_1_t361383CAF0BC7205C5FE5641CF67C7709CD26335*, const RuntimeMethod*))SingletonComponent_1__ctor_m2149BF3A5BB9621866AEF5FDB3882A896DB363C0_gshared)(__this, method);
}
// UnityEngine.Matrix4x4 TiltFive.DisplayHelper::Frustum(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 DisplayHelper_Frustum_m3B08E26C5C90BCF951860A1F229307D5E2AE1B25 (float ___L0, float ___R1, float ___B2, float ___T3, float ___n4, float ___f5, const RuntimeMethod* method) ;
// System.Void UnityEngine.Matrix4x4::set_Item(System.Int32,System.Int32,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Matrix4x4_set_Item_mE84FC43629907DD1872E3100BCFF4A8EB671B603_inline (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, int32_t ___row0, int32_t ___column1, float ___value2, const RuntimeMethod* method) ;
// T TiltFive.Singleton`1<TiltFive.Glasses>::get_Instance()
inline Glasses_tD7352D8219D253B4BDA92806B35E4E1946313A95* Singleton_1_get_Instance_m693D8A944BB871616AA85060DC3BF0C83A459824_inline (const RuntimeMethod* method)
{
	return ((  Glasses_tD7352D8219D253B4BDA92806B35E4E1946313A95* (*) (const RuntimeMethod*))Singleton_1_get_Instance_m91110BDBF294123D1E34990CFD7CEED57AF7965A_gshared_inline)(method);
}
// System.Boolean TiltFive.Glasses/GlassesCore::get_TrackingUpdated()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GlassesCore_get_TrackingUpdated_m63C7F5E8D5E554C2697EF8B54E80B4BE7B947FF8_inline (GlassesCore_t5A44456D065E1327F5EAA342CF1373142192C837* __this, const RuntimeMethod* method) ;
// UnityEngine.Pose TiltFive.TrackableCore`1<TiltFive.GlassesSettings>::get_Pose_UnityWorldSpace()
inline Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 TrackableCore_1_get_Pose_UnityWorldSpace_m7D54E26B20D43D50EB15A927DF3366147E23782E_inline (TrackableCore_1_tBE6016DABBA8AFF5E8B98992E66F92F4B147EEC8* __this, const RuntimeMethod* method)
{
	return ((  Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 (*) (TrackableCore_1_tBE6016DABBA8AFF5E8B98992E66F92F4B147EEC8*, const RuntimeMethod*))TrackableCore_1_get_Pose_UnityWorldSpace_m77B37E4BFDDF5EB20FECFD11A31D0699E766BC5E_gshared_inline)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Pose::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Pose_get_forward_m510527153754B6C2B2CDFDEE25D7168E3C82372A (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Pose::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Pose_get_right_m8518E7BCEB74B9798BADB001B9E38756CC35ECFE (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Pose::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Pose_get_up_m5431E350242BEBB0CD7B0AAF9DC9468DC6DDFE5C (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<TiltFive.Glasses/AREyes,UnityEngine.Vector3>::get_Item(TKey)
inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Dictionary_2_get_Item_mC765916A206303D2F563FF1E8EB582EF2760B551 (Dictionary_2_tA16E81E89B239343E2536E642AAFA7C7E560F2AA* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*) (Dictionary_2_tA16E81E89B239343E2536E642AAFA7C7E560F2AA*, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_m2EBFE69BC74E416E5EA4BAA0EBD6585561281958_gshared)(__this, ___key0, method);
}
// System.Void TiltFive.Glasses/GlassesCore::Reset(TiltFive.GlassesSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlassesCore_Reset_mEA90C955FB5998D3DDB53474BEB5C37997FB15FB (GlassesCore_t5A44456D065E1327F5EAA342CF1373142192C837* __this, GlassesSettings_tDE2641921BB452EF823D032185D46CBFA9E5782B* ___glassesSettings0, const RuntimeMethod* method) ;
// System.Boolean TiltFive.Glasses/GlassesCore::Validate(TiltFive.GlassesSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GlassesCore_Validate_mD5BA44A2A1343293738D48CBC3B029E2CE4E7D89 (GlassesCore_t5A44456D065E1327F5EAA342CF1373142192C837* __this, GlassesSettings_tDE2641921BB452EF823D032185D46CBFA9E5782B* ___glassesSettings0, const RuntimeMethod* method) ;
// System.Void TiltFive.Glasses/GlassesCore::Update(TiltFive.GlassesSettings,TiltFive.ScaleSettings,TiltFive.GameBoardSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlassesCore_Update_m12771DD699A4A1857CB49530190AB94C2D07828D (GlassesCore_t5A44456D065E1327F5EAA342CF1373142192C837* __this, GlassesSettings_tDE2641921BB452EF823D032185D46CBFA9E5782B* ___glassesSettings0, ScaleSettings_t4FE94D7555EF25D5286239492DE97AF448542507* ___scaleSettings1, GameBoardSettings_tA53FDF5FE8B4D937F945DB659EF5A76243634A4B* ___gameBoardSettings2, const RuntimeMethod* method) ;
// System.Boolean TiltFive.TrackableCore`1<TiltFive.GlassesSettings>::get_IsTracked()
inline bool TrackableCore_1_get_IsTracked_m968F4B43CC77660E5F0FB75A0B3F34EC1DFFD571_inline (TrackableCore_1_tBE6016DABBA8AFF5E8B98992E66F92F4B147EEC8* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TrackableCore_1_tBE6016DABBA8AFF5E8B98992E66F92F4B147EEC8*, const RuntimeMethod*))TrackableCore_1_get_IsTracked_mB6A3D7AE9D9FAD1F894AED4BED64B55B9558BFD1_gshared_inline)(__this, method);
}
// System.Void TiltFive.Glasses/GlassesCore::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlassesCore__ctor_m336DEA36FBA50D9573ACA80174BECC181C8E2CB5 (GlassesCore_t5A44456D065E1327F5EAA342CF1373142192C837* __this, const RuntimeMethod* method) ;
// System.Void TiltFive.Singleton`1<TiltFive.Glasses>::.ctor()
inline void Singleton_1__ctor_m3F580F6C9BFB6FF2E8643945E8D43AD517F4B737 (Singleton_1_t3DE33EA244384F5B9B06179B7CC2ADCC575AFBCC* __this, const RuntimeMethod* method)
{
	((  void (*) (Singleton_1_t3DE33EA244384F5B9B06179B7CC2ADCC575AFBCC*, const RuntimeMethod*))Singleton_1__ctor_m7764B020C66D789250B6A5601102E65A6D8A9E99_gshared)(__this, method);
}
// System.Void TiltFive.TrackableCore`1<TiltFive.GlassesSettings>::Reset(T)
inline void TrackableCore_1_Reset_m2EFCB705F8DC9960090B677479BB89B2BE75A6F6 (TrackableCore_1_tBE6016DABBA8AFF5E8B98992E66F92F4B147EEC8* __this, GlassesSettings_tDE2641921BB452EF823D032185D46CBFA9E5782B* ___settings0, const RuntimeMethod* method)
{
	((  void (*) (TrackableCore_1_tBE6016DABBA8AFF5E8B98992E66F92F4B147EEC8*, GlassesSettings_tDE2641921BB452EF823D032185D46CBFA9E5782B*, const RuntimeMethod*))TrackableCore_1_Reset_m82169A28EA9F44B910A86379444BE0DD2A0F51F1_gshared)(__this, ___settings0, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Single UnityEngine.Camera::get_fieldOfView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_fieldOfView_m9A93F17BBF89F496AE231C21817AFD1C1E833FBB (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Single TiltFive.GlassesSettings::get_fieldOfView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GlassesSettings_get_fieldOfView_m17B155D3AB6B108CB2BD2D38F59AD3B3794BFA50 (GlassesSettings_tDE2641921BB452EF823D032185D46CBFA9E5782B* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_fieldOfView(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_fieldOfView_m5AA9EED4D1603A1DEDBF883D9C42814B2BDEB777 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, float ___value0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::TryGetComponent<TiltFive.SplitStereoCamera>(T&)
inline bool GameObject_TryGetComponent_TisSplitStereoCamera_t8E4D30C6028706D80A47E65C3110D750E000BEF5_mECC920696FA3D39B3A9A646488B3AB44024B42E4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, SplitStereoCamera_t8E4D30C6028706D80A47E65C3110D750E000BEF5** ___component0, const RuntimeMethod* method)
{
	return ((  bool (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, SplitStereoCamera_t8E4D30C6028706D80A47E65C3110D750E000BEF5**, const RuntimeMethod*))GameObject_TryGetComponent_TisRuntimeObject_m4D430300D2DFB9276DE980D78F60A05D271D3630_gshared)(__this, ___component0, method);
}
// T UnityEngine.GameObject::AddComponent<TiltFive.SplitStereoCamera>()
inline SplitStereoCamera_t8E4D30C6028706D80A47E65C3110D750E000BEF5* GameObject_AddComponent_TisSplitStereoCamera_t8E4D30C6028706D80A47E65C3110D750E000BEF5_mE33FC7E9FAA2CF8A2D32AFC8EA585A2BAD3A5DB1 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  SplitStereoCamera_t8E4D30C6028706D80A47E65C3110D750E000BEF5* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// UnityEngine.Camera TiltFive.SplitStereoCamera::get_headPoseCamera()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* SplitStereoCamera_get_headPoseCamera_m25FFE8B09223C391E92ABBA1DCDCB9CF19F2E0D2_inline (SplitStereoCamera_t8E4D30C6028706D80A47E65C3110D750E000BEF5* __this, const RuntimeMethod* method) ;
// System.String TiltFive.T5_StringUTF8::op_Implicit(TiltFive.T5_StringUTF8)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* T5_StringUTF8_op_Implicit_mC5F2D661832C37F3A7320043A2C916EF39BED179 (T5_StringUTF8_t8AC81068B24B238DB0858B6081E88E9C67B549B2 ___t5_StringUTF80, const RuntimeMethod* method) ;
// System.Int32 TiltFive.NativePlugin::GetGlassesFriendlyName(TiltFive.T5_StringUTF8&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativePlugin_GetGlassesFriendlyName_mF1CA9DB91770557A6581DC1C3135C3AD6D7B7239 (T5_StringUTF8_t8AC81068B24B238DB0858B6081E88E9C67B549B2* ___glassesFriendlyName0, const RuntimeMethod* method) ;
// System.Void TiltFive.Glasses/GlassesCore::set_TrackingUpdated(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GlassesCore_set_TrackingUpdated_m51BE49C9773B2D3A1C78C763D2A60122B991084F_inline (GlassesCore_t5A44456D065E1327F5EAA342CF1373142192C837* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void TiltFive.Glasses::set_glassesAvailable(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Glasses_set_glassesAvailable_mCA3C5781DA07674B024B89C86ACFE6C70BEE317C_inline (bool ___value0, const RuntimeMethod* method) ;
// System.Boolean TiltFive.Glasses::get_glassesAvailable()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Glasses_get_glassesAvailable_mD1875BDEF8F05E262FC2EF15C991F497DCCFAD24_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void TiltFive.TrackableCore`1<TiltFive.GlassesSettings>::Update(T,TiltFive.ScaleSettings,TiltFive.GameBoardSettings)
inline void TrackableCore_1_Update_m3C2F156D5EDD674F86BD0D0A64E52C6313902977 (TrackableCore_1_tBE6016DABBA8AFF5E8B98992E66F92F4B147EEC8* __this, GlassesSettings_tDE2641921BB452EF823D032185D46CBFA9E5782B* ___settings0, ScaleSettings_t4FE94D7555EF25D5286239492DE97AF448542507* ___scaleSettings1, GameBoardSettings_tA53FDF5FE8B4D937F945DB659EF5A76243634A4B* ___gameBoardSettings2, const RuntimeMethod* method)
{
	((  void (*) (TrackableCore_1_tBE6016DABBA8AFF5E8B98992E66F92F4B147EEC8*, GlassesSettings_tDE2641921BB452EF823D032185D46CBFA9E5782B*, ScaleSettings_t4FE94D7555EF25D5286239492DE97AF448542507*, GameBoardSettings_tA53FDF5FE8B4D937F945DB659EF5A76243634A4B*, const RuntimeMethod*))TrackableCore_1_Update_mFC6175FD0ED089E45C694D5162794B0528CF8147_gshared)(__this, ___settings0, ___scaleSettings1, ___gameBoardSettings2, method);
}
// System.Single TiltFive.ScaleSettings::get_physicalMetersPerWorldSpaceUnit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ScaleSettings_get_physicalMetersPerWorldSpaceUnit_m88EA402A990B6B7AD083C18F8A022AB6A31D2BBA (ScaleSettings_t4FE94D7555EF25D5286239492DE97AF448542507* __this, const RuntimeMethod* method) ;
// System.Single TiltFive.GameBoardSettings::get_gameBoardScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GameBoardSettings_get_gameBoardScale_m95684BB3F820DA15309C661128F9C2280C5BEECB (GameBoardSettings_tA53FDF5FE8B4D937F945DB659EF5A76243634A4B* __this, const RuntimeMethod* method) ;
// System.Single TiltFive.ScaleSettings::GetScaleToUWRLD_UGBD(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ScaleSettings_GetScaleToUWRLD_UGBD_mE688695B85E4DB6F3328DFCAA25092BC8F55122C (ScaleSettings_t4FE94D7555EF25D5286239492DE97AF448542507* __this, float ___gameboardScale0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean TiltFive.Display::GetGlassesIPD(System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Display_GetGlassesIPD_mD554B40B04B2EC688669269920F06CC209938D85 (float* ___glassesIPD0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<TiltFive.Glasses/AREyes,UnityEngine.Vector3>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_mBBB7FF63984D2F9723DF998403B0EDD5B73A199A (Dictionary_2_tA16E81E89B239343E2536E642AAFA7C7E560F2AA* __this, int32_t ___key0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA16E81E89B239343E2536E642AAFA7C7E560F2AA*, int32_t, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))Dictionary_2_set_Item_m538EED0FBEF08924380AD83D27727A89ABD23E80_gshared)(__this, ___key0, ___value1, method);
}
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<TiltFive.Glasses/AREyes,UnityEngine.Quaternion>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m766CA45C200D9B717B47231D75BC392495B438FE (Dictionary_2_tB850B26CB9CB2FDDA0FD474BA994D6AB9EF9C7AC* __this, int32_t ___key0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB850B26CB9CB2FDDA0FD474BA994D6AB9EF9C7AC*, int32_t, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Dictionary_2_set_Item_m85242A5E08E079CA26C86380A1D7F4AD7A8CB21C_gshared)(__this, ___key0, ___value1, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Camera TiltFive.SplitStereoCamera::get_leftEyeCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* SplitStereoCamera_get_leftEyeCamera_mD755856E8116BC9B7230773B9B5C4B05DFA62EA7 (SplitStereoCamera_t8E4D30C6028706D80A47E65C3110D750E000BEF5* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<TiltFive.Glasses/AREyes,UnityEngine.Quaternion>::get_Item(TKey)
inline Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Dictionary_2_get_Item_mA2AB2D3E45850FF7B320638727DEA457D741491B (Dictionary_2_tB850B26CB9CB2FDDA0FD474BA994D6AB9EF9C7AC* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 (*) (Dictionary_2_tB850B26CB9CB2FDDA0FD474BA994D6AB9EF9C7AC*, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_m4463B0EC4778996EF21D473A3CC7759D63D62909_gshared)(__this, ___key0, method);
}
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Camera::get_nearClipPlane()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_nearClipPlane_m5E8FAF84326E3192CB036BD29DCCDAF6A9861013 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_nearClipPlane(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_nearClipPlane_m78482B5E4E0CE4C195D9CE0332AA75B2D9CCDDF6 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Camera::get_farClipPlane()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_farClipPlane_m1D7128B85B5DB866F75FBE8CEBA48335716B67BD (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_farClipPlane(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_farClipPlane_m84EF39B09573168734613481FD979BFF31C60139 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, float ___value0, const RuntimeMethod* method) ;
// UnityEngine.Camera TiltFive.SplitStereoCamera::get_rightEyeCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* SplitStereoCamera_get_rightEyeCamera_mE638B3001D0EA00B89D872EECA44372505C656E3 (SplitStereoCamera_t8E4D30C6028706D80A47E65C3110D750E000BEF5* __this, const RuntimeMethod* method) ;
// System.Boolean TiltFive.Glasses/GlassesCore::TryGetFriendlyName(System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GlassesCore_TryGetFriendlyName_m3E5DD0E082CABE4EBFAF0CF5F6281163AC20258A (GlassesCore_t5A44456D065E1327F5EAA342CF1373142192C837* __this, String_t** ___friendlyName0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Pose::.ctor(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pose__ctor_m15CA45808A2BBF1956E836D22C387FAB80BED051 (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation1, const RuntimeMethod* method) ;
// UnityEngine.Pose TiltFive.TrackableCore`1<TiltFive.GlassesSettings>::GameboardToWorldSpace(UnityEngine.Pose,TiltFive.ScaleSettings,TiltFive.GameBoardSettings)
inline Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 TrackableCore_1_GameboardToWorldSpace_m90E48C3E34B43EE9AF8DFA2A469243417ED5E39B (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___pose_GameBoardSpace0, ScaleSettings_t4FE94D7555EF25D5286239492DE97AF448542507* ___scaleSettings1, GameBoardSettings_tA53FDF5FE8B4D937F945DB659EF5A76243634A4B* ___gameBoardSettings2, const RuntimeMethod* method)
{
	return ((  Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 (*) (Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971, ScaleSettings_t4FE94D7555EF25D5286239492DE97AF448542507*, GameBoardSettings_tA53FDF5FE8B4D937F945DB659EF5A76243634A4B*, const RuntimeMethod*))TrackableCore_1_GameboardToWorldSpace_mA20770B74F3E6DEB62AA553FC011201E904BDC11_gshared)(___pose_GameBoardSpace0, ___scaleSettings1, ___gameBoardSettings2, method);
}
// System.Int32 TiltFive.NativePlugin::GetGlassesPose(TiltFive.T5_GlassesPose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativePlugin_GetGlassesPose_m44ADA79ECA1CDE6E888EAD91A4FBEC81C4B9D08D (T5_GlassesPose_tA745E39C2B88546A6934B1ADA0C2313BBBC5D6C1* ___glassesPose0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion TiltFive.T5_GlassesPose::get_RotationToGLS_GBD()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 T5_GlassesPose_get_RotationToGLS_GBD_mF27DCE1A8E9556EC8C81B817F6816F9CCA7C7C9E (T5_GlassesPose_tA745E39C2B88546A6934B1ADA0C2313BBBC5D6C1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Inverse(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Inverse_m7597DECDAD37194FAC86D1A11DCE3F0C7747F817 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 TiltFive.T5_GlassesPose::get_PosOfGLS_GBD()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 T5_GlassesPose_get_PosOfGLS_GBD_m723213ADF74954EC92CC2C1A05EDEF6DD1508F45 (T5_GlassesPose_tA745E39C2B88546A6934B1ADA0C2313BBBC5D6C1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 TiltFive.TrackableCore`1<TiltFive.GlassesSettings>::ConvertPosGBDToUGBD(UnityEngine.Vector3)
inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TrackableCore_1_ConvertPosGBDToUGBD_m32A6871FF9CB8AF309B854D95085CA1E41C8BF12 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos_GBD0, const RuntimeMethod* method)
{
	return ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*) (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))TrackableCore_1_ConvertPosGBDToUGBD_m1EB5AEEFEC7593BA7DBDC3EB4E300171B91FFCA5_gshared)(___pos_GBD0, method);
}
// System.Void UnityEngine.Transform::SetPositionAndRotation(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetPositionAndRotation_m418859BF59086EEAA084FFD6F258A43FAB408F5A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<TiltFive.Glasses/AREyes,UnityEngine.Vector3>::.ctor()
inline void Dictionary_2__ctor_m6FA1EC65AAC3BC14013AF23C315F35928E5CAB42 (Dictionary_2_tA16E81E89B239343E2536E642AAFA7C7E560F2AA* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA16E81E89B239343E2536E642AAFA7C7E560F2AA*, const RuntimeMethod*))Dictionary_2__ctor_m860F830B163E2EC44E35E6795C16F3B72ED4D1F6_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<TiltFive.Glasses/AREyes,UnityEngine.Vector3>::Add(TKey,TValue)
inline void Dictionary_2_Add_m72483D63C6D573D5D521C56A208CA861A52C5C23 (Dictionary_2_tA16E81E89B239343E2536E642AAFA7C7E560F2AA* __this, int32_t ___key0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA16E81E89B239343E2536E642AAFA7C7E560F2AA*, int32_t, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))Dictionary_2_Add_m1769FE438746D0F90BB902DA73002131C1B2D186_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<TiltFive.Glasses/AREyes,UnityEngine.Quaternion>::.ctor()
inline void Dictionary_2__ctor_m5FF6DEE3F95C5AD37D359FF7C5EE1C034BDADD8E (Dictionary_2_tB850B26CB9CB2FDDA0FD474BA994D6AB9EF9C7AC* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB850B26CB9CB2FDDA0FD474BA994D6AB9EF9C7AC*, const RuntimeMethod*))Dictionary_2__ctor_mE8C9C999DF998EB2D5160062A0571F916B34133A_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<TiltFive.Glasses/AREyes,UnityEngine.Quaternion>::Add(TKey,TValue)
inline void Dictionary_2_Add_mB5D850FDC8B0579CEA642A0CA2FA0F5D267D517D (Dictionary_2_tB850B26CB9CB2FDDA0FD474BA994D6AB9EF9C7AC* __this, int32_t ___key0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB850B26CB9CB2FDDA0FD474BA994D6AB9EF9C7AC*, int32_t, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Dictionary_2_Add_m024152B6A0E61E4DCF79A00208CE26AB9D926F75_gshared)(__this, ___key0, ___value1, method);
}
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m66E346161C9778DF8486DB4FE823D8F81A54AF1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Void TiltFive.TrackableCore`1<TiltFive.GlassesSettings>::.ctor()
inline void TrackableCore_1__ctor_m0A756B93F6040E5438F6B5BB9B07AE1C59967CF4 (TrackableCore_1_tBE6016DABBA8AFF5E8B98992E66F92F4B147EEC8* __this, const RuntimeMethod* method)
{
	((  void (*) (TrackableCore_1_tBE6016DABBA8AFF5E8B98992E66F92F4B147EEC8*, const RuntimeMethod*))TrackableCore_1__ctor_mB48D3DDC4C32DF5E4652E314A16B3670F339427D_gshared)(__this, method);
}
// System.Void TiltFive.DisplaySettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisplaySettings__ctor_m0758477DD03435B854E29BB86F3FD855FC528D96 (DisplaySettings_t503F5A98E59CAAD41A2BED663812E6CEFF601464* __this, const RuntimeMethod* method) ;
// System.Boolean TiltFive.Display::GetDisplayDimensions(UnityEngine.Vector2Int&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Display_GetDisplayDimensions_m7E5E9BCB24E272B310D92093F3C13412ECB0E39B (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* ___displayDimensions0, const RuntimeMethod* method) ;
// System.Int32 TiltFive.DisplaySettings::get_stereoWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DisplaySettings_get_stereoWidth_mFB72CBBE4C8ED94C3BE971147713F462C115550F (const RuntimeMethod* method) ;
// TiltFive.DisplaySettings TiltFive.DisplaySettings::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DisplaySettings_t503F5A98E59CAAD41A2BED663812E6CEFF601464* DisplaySettings_get_Instance_mA2A26B3AB1CCF8E0136DC5A2A0E180F6E1BA1A39 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector2Int::get_x()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector2Int::get_y()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) ;
// System.Int32 TiltFive.DisplaySettings::get_monoWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DisplaySettings_get_monoWidth_m8CFF0AA18A13F0FB1B891C4F13CD116B868AC777 (const RuntimeMethod* method) ;
// System.Int32 TiltFive.DisplaySettings::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DisplaySettings_get_height_m25F1F563259A368FDF6ABF1300D55A18046DE131 (const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<TiltFive.Glasses/AREyes,UnityEngine.Camera>::get_Item(TKey)
inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Dictionary_2_get_Item_mD12D2AC2D4908A10C030F1C9855E2190EBD64F3A (Dictionary_2_t71BFAA343ADBECF70319A33149AC4651F23EC3F6* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* (*) (Dictionary_2_t71BFAA343ADBECF70319A33149AC4651F23EC3F6*, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_m9C4302CCAE3C1BF70D02091D0E0CED7663F18211_gshared)(__this, ___key0, method);
}
// System.Single UnityEngine.Camera::get_aspect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_aspect_m48BF8820EA2D55BE0D154BC5546819FB65BE257D (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_aspect(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_aspect_m537F21B48FDD5C060DFF9D87F34F4FB2B0F9BEB6 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, float ___value0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Component::TryGetComponent<TiltFive.SplitStereoCamera>(T&)
inline bool Component_TryGetComponent_TisSplitStereoCamera_t8E4D30C6028706D80A47E65C3110D750E000BEF5_m8DBD7D4763F7BC903D35081EDA4C58AEFDBF5463 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, SplitStereoCamera_t8E4D30C6028706D80A47E65C3110D750E000BEF5** ___component0, const RuntimeMethod* method)
{
	return ((  bool (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, SplitStereoCamera_t8E4D30C6028706D80A47E65C3110D750E000BEF5**, const RuntimeMethod*))Component_TryGetComponent_TisRuntimeObject_m69D4ED21F14D49D805A2337F4332934CDA07DEDB_gshared)(__this, ___component0, method);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Component::TryGetComponent<UnityEngine.Camera>(T&)
inline bool Component_TryGetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m1D22E7CA60B7DA94499EFF8D98588B2BD8950882 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184** ___component0, const RuntimeMethod* method)
{
	return ((  bool (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184**, const RuntimeMethod*))Component_TryGetComponent_TisRuntimeObject_m69D4ED21F14D49D805A2337F4332934CDA07DEDB_gshared)(__this, ___component0, method);
}
// T UnityEngine.GameObject::AddComponent<UnityEngine.Camera>()
inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* GameObject_AddComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m0933BC50E883CDEF6FA83FE190DA37CCB2802142 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void TiltFive.SplitStereoCamera::InstantiateEyeCameras(UnityEngine.GameObject&,UnityEngine.GameObject&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplitStereoCamera_InstantiateEyeCameras_mFEC7559CFCC5A7253143A2874C1B19E63F95F680 (SplitStereoCamera_t8E4D30C6028706D80A47E65C3110D750E000BEF5* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** ___leftEye0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** ___rightEye1, const RuntimeMethod* method) ;
// System.Void TiltFive.SplitStereoCamera::ConfigureEyeCameras()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplitStereoCamera_ConfigureEyeCameras_mBA06BAFAB9613BC9F1D59BEAB79224988D291A00 (SplitStereoCamera_t8E4D30C6028706D80A47E65C3110D750E000BEF5* __this, const RuntimeMethod* method) ;
// UnityEngine.Shader UnityEngine.Shader::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72 (String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::.ctor(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___shader0, const RuntimeMethod* method) ;
// System.Void TiltFive.SplitStereoCamera::SyncFields(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplitStereoCamera_SyncFields_m78AE7FD595C86EB4F9BE716ABC85195A45AA4ACD (SplitStereoCamera_t8E4D30C6028706D80A47E65C3110D750E000BEF5* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___theCamera0, const RuntimeMethod* method) ;
// System.Void TiltFive.SplitStereoCamera::SyncTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplitStereoCamera_SyncTransform_m3E18301451179106625BAFE9B1F58242167A8331 (SplitStereoCamera_t8E4D30C6028706D80A47E65C3110D750E000BEF5* __this, const RuntimeMethod* method) ;
// System.Void TiltFive.SplitStereoCamera::ShowHideCameras()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplitStereoCamera_ShowHideCameras_m56BA44E754AA299E3936CC274F07307F23E92FEA (SplitStereoCamera_t8E4D30C6028706D80A47E65C3110D750E000BEF5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___name0, const RuntimeMethod* method) ;
// UnityEngine.GameObject TiltFive.SplitStereoCamera::get_headPose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* SplitStereoCamera_get_headPose_m08621D0518D30AD523CE3325B2E3D14D561DE2C1 (SplitStereoCamera_t8E4D30C6028706D80A47E65C3110D750E000BEF5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51 (String_t* ___name0, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Transform)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m887DD9E8844786738857F4A68C25C7AADC55FFA0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent3, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mE974DCECE6BCBB030F70F1618B707F587B99BDB4_gshared)(___original0, ___position1, ___rotation2, ___parent3, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.Camera>()
inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<TiltFive.Glasses/AREyes,UnityEngine.Camera>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m54E7A1A8089213247DE94390576F98DAE27369BE (Dictionary_2_t71BFAA343ADBECF70319A33149AC4651F23EC3F6* __this, int32_t ___key0, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t71BFAA343ADBECF70319A33149AC4651F23EC3F6*, int32_t, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*, const RuntimeMethod*))Dictionary_2_set_Item_m78DDC81EE49FB9D4194E83685FFED445DFDB75CA_gshared)(__this, ___key0, ___value1, method);
}
// System.Void TiltFive.SplitStereoTextures::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplitStereoTextures_Initialize_m23C893FF8841B8DE8021B47E27F17893293E9129 (SplitStereoTextures_t2F64E25FADF72BE3FB1FCC7DD38D97D5684AB2C0* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Camera::get_allowMSAA()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Camera_get_allowMSAA_mC316155B22B679709F85BA9AE3F7931C30EE7AF4 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.QualitySettings::get_antiAliasing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t QualitySettings_get_antiAliasing_m1E38110F0E9A028F8CA4D3889D32E6B873912EB0 (const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::set_antiAliasing(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_antiAliasing_mA578276F4827A5CD4007DFE00117250A9336BC7A (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_targetTexture(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_targetTexture_mE6C740F21A72DA47FB5B1D31D208710738A836C4 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Camera::get_depth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_depth_mDF67FFF8ED61750467DFC4C6D8F236850AD1BB1D (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_depth(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_depth_m595FA2A4FEBC90E730810BBFB55E4A2C2134066F (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, float ___value0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator TiltFive.SplitStereoCamera::PresentStereoImagesCoroutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SplitStereoCamera_PresentStereoImagesCoroutine_m42558C12F4624B2BAA0CA46384012F370BBF8124 (SplitStereoCamera_t8E4D30C6028706D80A47E65C3110D750E000BEF5* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_black()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mBF96B603B41BED9BAFAA10CE8D946D24260F9729_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.GL::Clear(System.Boolean,System.Boolean,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_Clear_m303329453ADB3495208897E282FD24910878F537 (bool ___clearDepth0, bool ___clearColor1, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___backgroundColor2, const RuntimeMethod* method) ;
// System.Void TiltFive.SplitStereoTextures::ValidateNativeTexturePointers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplitStereoTextures_ValidateNativeTexturePointers_m4E957817E6E1B401F45FA1784D89CAE4DE83DA7F (SplitStereoTextures_t2F64E25FADF72BE3FB1FCC7DD38D97D5684AB2C0* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8 (const RuntimeMethod* method) ;
// System.Single TiltFive.DisplaySettings::get_monoWidthToHeightRatio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DisplaySettings_get_monoWidthToHeightRatio_m81B572B64852E0F4618195121F382193B67E67FA (const RuntimeMethod* method) ;
// System.Single TiltFive.DisplaySettings::get_stereoWidthToHeightRatio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DisplaySettings_get_stereoWidthToHeightRatio_mA30EC65254055C1694F30E279F3494DA8DB3BB74 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_rect(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_rect_mA81158BC169AF8674DE240AE9460FC5A0EADBB19 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___value0, const RuntimeMethod* method) ;
// System.Void TiltFive.SplitStereoTextures::SubmitPreviewTextures(TiltFive.GlassesMirrorMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplitStereoTextures_SubmitPreviewTextures_mAFFC60AF1B13F0A00E6D21C68A2EA3A95E21EB6D (SplitStereoTextures_t2F64E25FADF72BE3FB1FCC7DD38D97D5684AB2C0* __this, int32_t ___glassesMirrorMode0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_one_m232E885D3C7BB6A96D5FEF4494709BA170447604_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_Blit_m9CD748971CC899CAE3BEFE9578F90861DAE6EC1E (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___dest1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___scale2, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___offset3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_Blit_m066854D684B6042B266D306E8E012D2C6C1787BE (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___source0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___dest1, const RuntimeMethod* method) ;
// System.Void TiltFive.SplitStereoCamera/<PresentStereoImagesCoroutine>d__43::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPresentStereoImagesCoroutineU3Ed__43__ctor_m1757550E5C8F25044EEDB254F481C18358C2E4DD (U3CPresentStereoImagesCoroutineU3Ed__43_t36E604556C1B7F8143A07F76DA68C2756FD32C18* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void TiltFive.SplitStereoTextures::GetNativeTexturePointers(System.IntPtr&,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplitStereoTextures_GetNativeTexturePointers_m6AED41A77DD06A775A0B0508A92B70AE5FA6E62E (SplitStereoTextures_t2F64E25FADF72BE3FB1FCC7DD38D97D5684AB2C0* __this, intptr_t* ___leftTexHandle0, intptr_t* ___rightTexHandle1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.RenderTexture::get_sRGB()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RenderTexture_get_sRGB_m84B7CD257050BA42363E9D1562AFEF2854BB4E04 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline (float ___d0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point1, const RuntimeMethod* method) ;
// System.Single TiltFive.SplitStereoCamera::get_fieldOfView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SplitStereoCamera_get_fieldOfView_m241BB535223F7416B2FC588B80F7E5F030FF9A9E (SplitStereoCamera_t8E4D30C6028706D80A47E65C3110D750E000BEF5* __this, const RuntimeMethod* method) ;
// System.Boolean TiltFive.Display::PresentStereoImages(System.IntPtr,System.IntPtr,System.Int32,System.Int32,System.Boolean,System.Single,System.Single,UnityEngine.Quaternion,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Display_PresentStereoImages_m62D9916A8E8EFB5A0110C6522AD1A5FABDFB8141 (intptr_t ___leftTexHandle0, intptr_t ___rightTexHandle1, int32_t ___texWidth_PIX2, int32_t ___texHeight_PIX3, bool ___isSrgb4, float ___fovYDegrees5, float ___widthToHeightRatio6, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotToUGBD_ULVC7, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___posOfULVC_UGBD8, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotToUGBD_URVC9, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___posOfURVC_UGBD10, const RuntimeMethod* method) ;
// System.Void TiltFive.SplitStereoCamera::set_fieldOfView(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplitStereoCamera_set_fieldOfView_m4959FC28833166D5E49279E833DA69A9E8B4EBDB (SplitStereoCamera_t8E4D30C6028706D80A47E65C3110D750E000BEF5* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void TiltFive.SplitStereoCamera::set_nearClipPlane(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplitStereoCamera_set_nearClipPlane_m8535E1281C6B8CEB7062C7149BA567B9A08AE45D (SplitStereoCamera_t8E4D30C6028706D80A47E65C3110D750E000BEF5* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void TiltFive.SplitStereoCamera::set_farClipPlane(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplitStereoCamera_set_farClipPlane_mF8000FFEDCA48D3C47A2364330D396C41B120AFC (SplitStereoCamera_t8E4D30C6028706D80A47E65C3110D750E000BEF5* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void TiltFive.SplitStereoCamera::set_aspectRatio(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplitStereoCamera_set_aspectRatio_mFA0A3E0392BD2B7C0DBD4475C30BD2775256CC92 (SplitStereoCamera_t8E4D30C6028706D80A47E65C3110D750E000BEF5* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<TiltFive.Glasses/AREyes,UnityEngine.Camera>::.ctor()
inline void Dictionary_2__ctor_mEB42A2538AD040F9B8B05A8A1D183C3472644E60 (Dictionary_2_t71BFAA343ADBECF70319A33149AC4651F23EC3F6* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t71BFAA343ADBECF70319A33149AC4651F23EC3F6*, const RuntimeMethod*))Dictionary_2__ctor_mCC9983804D8DC41E938E080075F9EA7BDD0C7059_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<TiltFive.Glasses/AREyes,UnityEngine.Camera>::Add(TKey,TValue)
inline void Dictionary_2_Add_mC932861BD28C9CFC332F53AA19AA5A680D147AFB (Dictionary_2_t71BFAA343ADBECF70319A33149AC4651F23EC3F6* __this, int32_t ___key0, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t71BFAA343ADBECF70319A33149AC4651F23EC3F6*, int32_t, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*, const RuntimeMethod*))Dictionary_2_Add_mC515884C0546021A29DC0A00DBCABD89B1B65872_gshared)(__this, ___key0, ___value1, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) ;
// System.Void TiltFive.SplitStereoTextures::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplitStereoTextures__ctor_m52E9570DB870208231899554F0353B3931C6D086 (SplitStereoTextures_t2F64E25FADF72BE3FB1FCC7DD38D97D5684AB2C0* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* __this, const RuntimeMethod* method) ;
// System.Void TiltFive.SplitStereoCamera::PresentStereoImages()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplitStereoCamera_PresentStereoImages_m21550B5901678F2B4D8B0D8E2B520BEB990BAB98 (SplitStereoCamera_t8E4D30C6028706D80A47E65C3110D750E000BEF5* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Behaviour::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1 (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderTexture::.ctor(System.Int32,System.Int32,System.Int32,UnityEngine.RenderTextureFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture__ctor_m53215A8EDDE262932758186108347685F6A512C4 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, int32_t ___width0, int32_t ___height1, int32_t ___depth2, int32_t ___format3, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.RenderTexture::IsCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RenderTexture_IsCreated_mB69D4DBD99D74AA5D1F3C9E84A08D6744A031006 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, const RuntimeMethod* method) ;
// System.Void TiltFive.SplitStereoTextures::set_LeftTexHandle(System.IntPtr)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SplitStereoTextures_set_LeftTexHandle_mE45B51FCC514B6BFD889E0C395866785BF9F7ECD_inline (SplitStereoTextures_t2F64E25FADF72BE3FB1FCC7DD38D97D5684AB2C0* __this, intptr_t ___value0, const RuntimeMethod* method) ;
// System.Void TiltFive.SplitStereoTextures::set_RightTexHandle(System.IntPtr)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SplitStereoTextures_set_RightTexHandle_m2CF6A5B65F47C01A912BF218AA4BC7117A5E552D_inline (SplitStereoTextures_t2F64E25FADF72BE3FB1FCC7DD38D97D5684AB2C0* __this, intptr_t ___value0, const RuntimeMethod* method) ;
// System.IntPtr TiltFive.SplitStereoTextures::get_LeftTexHandle()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t SplitStereoTextures_get_LeftTexHandle_mDFA60480105689DEA17840845CDEDB2C9A6F38F1_inline (SplitStereoTextures_t2F64E25FADF72BE3FB1FCC7DD38D97D5684AB2C0* __this, const RuntimeMethod* method) ;
// System.IntPtr TiltFive.SplitStereoTextures::get_RightTexHandle()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t SplitStereoTextures_get_RightTexHandle_mF08970173C4ED2057F76A430EECF07B92C504C3D_inline (SplitStereoTextures_t2F64E25FADF72BE3FB1FCC7DD38D97D5684AB2C0* __this, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.Texture::GetNativeTexturePtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Texture_GetNativeTexturePtr_mD3019CC9461338665885D431B86C03D3063867EE (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* __this, const RuntimeMethod* method) ;
// System.Void TiltFive.SplitStereoTextures::CopyTexture(UnityEngine.RenderTexture,UnityEngine.RenderTexture,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplitStereoTextures_CopyTexture_mE97C40BAEAD4003C6192B156B1212A0FDDD76416 (SplitStereoTextures_t2F64E25FADF72BE3FB1FCC7DD38D97D5684AB2C0* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___sourceTex0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___destinationTex1, int32_t ___xOffset2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Graphics::CopyTexture(UnityEngine.Texture,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.Texture,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_CopyTexture_m1174E36AE6E6DF2FFF25A028EFD0D7740C7CF91B (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___src0, int32_t ___srcElement1, int32_t ___srcMip2, int32_t ___srcX3, int32_t ___srcY4, int32_t ___srcWidth5, int32_t ___srcHeight6, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___dst7, int32_t ___dstElement8, int32_t ___dstMip9, int32_t ___dstX10, int32_t ___dstY11, const RuntimeMethod* method) ;
// System.Void UnityEngine.Matrix4x4::set_Item(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix4x4_set_Item_m47C4DDBFAE6578D6008AEF433777D4B2FACB62B0 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, int32_t ___index0, float ___value1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
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
// System.Void TiltFive.AxesBoolean::.ctor(System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AxesBoolean__ctor_m6FC84305FBD5C3C24979AA056EE1388DF8D49388 (AxesBoolean_tD5379A5F6B350E38915135AAEB27D89B3C603362* __this, bool ___setX0, bool ___setY1, bool ___setZ2, const RuntimeMethod* method) 
{
	{
		// public bool x = true;
		__this->___x_0 = (bool)1;
		// public bool y = true;
		__this->___y_1 = (bool)1;
		// public bool z = true;
		__this->___z_2 = (bool)1;
		// public AxesBoolean(bool setX, bool setY, bool setZ)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// x = setX;
		bool L_0 = ___setX0;
		__this->___x_0 = L_0;
		// y = setY;
		bool L_1 = ___setY1;
		__this->___y_1 = L_1;
		// z = setZ;
		bool L_2 = ___setZ2;
		__this->___z_2 = L_2;
		// }
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
// System.Void TiltFive.AllAxesBoolean::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllAxesBoolean__ctor_m39A49D78CB70E1B1F9E50A30A2B5D258E0C5D05F (AllAxesBoolean_tB0DA184ED1474346DEEE6023455F57D12EA5573D* __this, bool ___setXYZ0, const RuntimeMethod* method) 
{
	{
		// public bool xyz = true;
		__this->___xyz_0 = (bool)1;
		// public AllAxesBoolean(bool setXYZ)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// xyz = setXYZ;
		bool L_0 = ___setXYZ0;
		__this->___xyz_0 = L_0;
		// }
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
// System.Void TiltFive.ARProjectionFrustum::.ctor(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARProjectionFrustum__ctor_m54E8B9CD493718378D61B7CE80A362F50FFF43DB (ARProjectionFrustum_t6D22EF4F5BDE8D84A621BCFE990C13C64CA51530* __this, float ___l0, float ___r1, float ___b2, float ___t3, float ___n4, float ___f5, const RuntimeMethod* method) 
{
	{
		// m_Left = l; m_Right = r; m_Bottom = b; m_Top = t; m_Near = n; m_Far = f;
		float L_0 = ___l0;
		__this->___m_Left_0 = L_0;
		// m_Left = l; m_Right = r; m_Bottom = b; m_Top = t; m_Near = n; m_Far = f;
		float L_1 = ___r1;
		__this->___m_Right_1 = L_1;
		// m_Left = l; m_Right = r; m_Bottom = b; m_Top = t; m_Near = n; m_Far = f;
		float L_2 = ___b2;
		__this->___m_Bottom_2 = L_2;
		// m_Left = l; m_Right = r; m_Bottom = b; m_Top = t; m_Near = n; m_Far = f;
		float L_3 = ___t3;
		__this->___m_Top_3 = L_3;
		// m_Left = l; m_Right = r; m_Bottom = b; m_Top = t; m_Near = n; m_Far = f;
		float L_4 = ___n4;
		__this->___m_Near_4 = L_4;
		// m_Left = l; m_Right = r; m_Bottom = b; m_Top = t; m_Near = n; m_Far = f;
		float L_5 = ___f5;
		__this->___m_Far_5 = L_5;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ARProjectionFrustum__ctor_m54E8B9CD493718378D61B7CE80A362F50FFF43DB_AdjustorThunk (RuntimeObject* __this, float ___l0, float ___r1, float ___b2, float ___t3, float ___n4, float ___f5, const RuntimeMethod* method)
{
	ARProjectionFrustum_t6D22EF4F5BDE8D84A621BCFE990C13C64CA51530* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ARProjectionFrustum_t6D22EF4F5BDE8D84A621BCFE990C13C64CA51530*>(__this + _offset);
	ARProjectionFrustum__ctor_m54E8B9CD493718378D61B7CE80A362F50FFF43DB(_thisAdjusted, ___l0, ___r1, ___b2, ___t3, ___n4, ___f5, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TiltFive.Display::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Display_Awake_m20E1DCD266B5F748DBADA672511BF695679C1B7E (Display_t9092D63B391AD42350974AB8DE55ADCADF27CED4* __this, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		// _sendFrameCallback = NativePlugin.GetSendFrameCallback();
		intptr_t L_0;
		L_0 = NativePlugin_GetSendFrameCallback_m2064AEF211C860CEC7AE58D1B01FE1FD9FC8F768(NULL);
		__this->____sendFrameCallback_6 = L_0;
		// }
		goto IL_001e;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_000d;
		}
		throw e;
	}

CATCH_000d:
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
		goto IL_001e;
	}// end catch (depth: 1)

IL_001e:
	{
		// LogVersion();
		Display_LogVersion_m9F42D7730D88879F9E226A6AFCC5157CB4C9EBBE(__this, NULL);
		// QualitySettings.vSyncCount = 0;
		QualitySettings_set_vSyncCount_m37CB89BA3DF4BE2E181339F5F44F03C493733360(0, NULL);
		// QualitySettings.maxQueuedFrames = 0;
		QualitySettings_set_maxQueuedFrames_mD72703EAB00A77A94487B59153D11D780493411F(0, NULL);
		// }
		return;
	}
}
// System.Void TiltFive.Display::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Display_Start_mB4BF5BDEB08AB76B29A03015B39A57D076672CAB (Display_t9092D63B391AD42350974AB8DE55ADCADF27CED4* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void TiltFive.Display::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Display_Update_m3AD4F5BBDFD35FA00F38E08C4FFE8A02599874C2 (Display_t9092D63B391AD42350974AB8DE55ADCADF27CED4* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void TiltFive.Display::LogVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Display_LogVersion_m9F42D7730D88879F9E226A6AFCC5157CB4C9EBBE (Display_t9092D63B391AD42350974AB8DE55ADCADF27CED4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_tD1F573C6DC829FBA987FA1EBA0A5FA64E0C2BC42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2899C96F114204D21C5309EE55C4867B78457FED);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral643CDA87C940CC393FE89E58E647A1357AE1EA57);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA253BEC1F5C750D45531876BF8415E7320DD989F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF13A956167F4B88CAFD76BF16F9B89B0996F6B2E);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* V_1 = NULL;
	bool V_2 = false;
	int32_t V_3 = 0;
	{
		// string version = "NOT VERSIONED";
		V_0 = _stringLiteralF13A956167F4B88CAFD76BF16F9B89B0996F6B2E;
		// TextAsset asset = (TextAsset)Resources.Load("pluginversion", typeof(TextAsset));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_0, NULL);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_2;
		L_2 = Resources_Load_mDCC8EBD3196F1CE1B86E74416AD90CF86320C401(_stringLiteral643CDA87C940CC393FE89E58E647A1357AE1EA57, L_1, NULL);
		V_1 = ((TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69*)CastclassClass((RuntimeObject*)L_2, TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_il2cpp_TypeInfo_var));
		// if (asset != null)
		TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_3 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		// version = asset.text;
		TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_5 = V_1;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = TextAsset_get_text_m36846042E3CF3D9DD337BF3F8B2B1902D10C8FD9(L_5, NULL);
		V_0 = L_6;
	}

IL_0030:
	{
		// bool logEnabled = Debug.unityLogger.logEnabled;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		RuntimeObject* L_7;
		L_7 = Debug_get_unityLogger_mA872400E9E585FCD6A2DE1717748A458545DE8A4_inline(NULL);
		NullCheck(L_7);
		bool L_8;
		L_8 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean UnityEngine.ILogger::get_logEnabled() */, ILogger_tD1F573C6DC829FBA987FA1EBA0A5FA64E0C2BC42_il2cpp_TypeInfo_var, L_7);
		V_2 = L_8;
		// if (!logEnabled)
		bool L_9 = V_2;
		if (L_9)
		{
			goto IL_0049;
		}
	}
	{
		// Debug.unityLogger.logEnabled = true;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		RuntimeObject* L_10;
		L_10 = Debug_get_unityLogger_mA872400E9E585FCD6A2DE1717748A458545DE8A4_inline(NULL);
		NullCheck(L_10);
		InterfaceActionInvoker1< bool >::Invoke(2 /* System.Void UnityEngine.ILogger::set_logEnabled(System.Boolean) */, ILogger_tD1F573C6DC829FBA987FA1EBA0A5FA64E0C2BC42_il2cpp_TypeInfo_var, L_10, (bool)1);
	}

IL_0049:
	{
		// StackTraceLogType logType = Application.GetStackTraceLogType(LogType.Log);
		int32_t L_11;
		L_11 = Application_GetStackTraceLogType_mE441537A882799FFDDBCA49DEB5D3E6399A5509A(3, NULL);
		V_3 = L_11;
		// Application.SetStackTraceLogType(LogType.Log, StackTraceLogType.None);
		Application_SetStackTraceLogType_m06EBBA32DF36B4157054A1E45C8107F1D1A318BF(3, 0, NULL);
		// Log.Info("\n********************************" +
		//       "\n* Tilt Five: Unity SDK Version - " +
		//       version +
		//       "\n********************************");
		String_t* L_12 = V_0;
		String_t* L_13;
		L_13 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral2899C96F114204D21C5309EE55C4867B78457FED, L_12, _stringLiteralA253BEC1F5C750D45531876BF8415E7320DD989F, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14;
		L_14 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		Log_Info_m57A985F6B299403D9BC1A3F66AF4EA16BDBDCBAB(L_13, L_14, NULL);
		// Application.SetStackTraceLogType(LogType.Log, logType);
		int32_t L_15 = V_3;
		Application_SetStackTraceLogType_m06EBBA32DF36B4157054A1E45C8107F1D1A318BF(3, L_15, NULL);
		// Debug.unityLogger.logEnabled = logEnabled;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		RuntimeObject* L_16;
		L_16 = Debug_get_unityLogger_mA872400E9E585FCD6A2DE1717748A458545DE8A4_inline(NULL);
		bool L_17 = V_2;
		NullCheck(L_16);
		InterfaceActionInvoker1< bool >::Invoke(2 /* System.Void UnityEngine.ILogger::set_logEnabled(System.Boolean) */, ILogger_tD1F573C6DC829FBA987FA1EBA0A5FA64E0C2BC42_il2cpp_TypeInfo_var, L_16, L_17);
		// }
		return;
	}
}
// System.Boolean TiltFive.Display::SetApplicationInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Display_SetApplicationInfo_m8A361927A072E60DB85FA9E6F9943DAC85CEC03F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingletonComponent_1_get_Instance_m7C7F3FC2FE8E5775551E7F75D0514E0A3C4DC202_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Instance.SetApplicationInfoImpl();
		Display_t9092D63B391AD42350974AB8DE55ADCADF27CED4* L_0;
		L_0 = SingletonComponent_1_get_Instance_m7C7F3FC2FE8E5775551E7F75D0514E0A3C4DC202(SingletonComponent_1_get_Instance_m7C7F3FC2FE8E5775551E7F75D0514E0A3C4DC202_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_1;
		L_1 = Display_SetApplicationInfoImpl_mE2F10EB2EF3D1AA03E36217925448962A662D4D7(L_0, NULL);
		return L_1;
	}
}
// System.Boolean TiltFive.Display::SetApplicationInfoImpl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Display_SetApplicationInfoImpl_mE2F10EB2EF3D1AA03E36217925448962A662D4D7 (Display_t9092D63B391AD42350974AB8DE55ADCADF27CED4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54E5BCF716F078DD8C39F09F1C1FB28260BAF09A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56C906292CEC3052B4C6AE15BE5E3DFA1B5B84A0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral643CDA87C940CC393FE89E58E647A1357AE1EA57);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7878B9A040E56F4AE17844E3310E404B35500EBB);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* V_4 = NULL;
	String_t* V_5 = NULL;
	int32_t V_6 = 0;
	T5_StringUTF8_t8AC81068B24B238DB0858B6081E88E9C67B549B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	T5_StringUTF8_t8AC81068B24B238DB0858B6081E88E9C67B549B2 V_8;
	memset((&V_8), 0, sizeof(V_8));
	T5_StringUTF8_t8AC81068B24B238DB0858B6081E88E9C67B549B2 V_9;
	memset((&V_9), 0, sizeof(V_9));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// string applicationName = Application.productName;
		String_t* L_0;
		L_0 = Application_get_productName_m00192B33A17C93424812C4A99AEA41993380EBA1(NULL);
		V_0 = L_0;
		// string applicationId = Application.identifier;
		String_t* L_1;
		L_1 = Application_get_identifier_m26B38D49FA10A46D61C1309769A59E9CF7460006(NULL);
		V_1 = L_1;
		// string productVersion = Application.version;
		String_t* L_2;
		L_2 = Application_get_version_mD6AC9813ABCAD4D2A1F764F99E26068CA5B830F2(NULL);
		V_2 = L_2;
		// string engineVersion = Application.unityVersion;
		String_t* L_3;
		L_3 = Application_get_unityVersion_m09F45DDCFA0A4414AA296A595FDB0B59B44F5387(NULL);
		V_3 = L_3;
		// TextAsset pluginVersionAsset = (TextAsset)Resources.Load("pluginversion");
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_4;
		L_4 = Resources_Load_m9608D2902F542C0B7FD52EFED088323448B9FA35(_stringLiteral643CDA87C940CC393FE89E58E647A1357AE1EA57, NULL);
		V_4 = ((TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69*)CastclassClass((RuntimeObject*)L_4, TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_il2cpp_TypeInfo_var));
		// string applicationVersionInfo = $"App: {productVersion}, Engine: {engineVersion}, T5 SDK: {pluginVersionAsset.text}";
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral54E5BCF716F078DD8C39F09F1C1FB28260BAF09A);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral54E5BCF716F078DD8C39F09F1C1FB28260BAF09A);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6;
		String_t* L_8 = V_2;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_7;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteral56C906292CEC3052B4C6AE15BE5E3DFA1B5B84A0);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral56C906292CEC3052B4C6AE15BE5E3DFA1B5B84A0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_9;
		String_t* L_11 = V_3;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_11);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_10;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral7878B9A040E56F4AE17844E3310E404B35500EBB);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral7878B9A040E56F4AE17844E3310E404B35500EBB);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_12;
		TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_14 = V_4;
		NullCheck(L_14);
		String_t* L_15;
		L_15 = TextAsset_get_text_m36846042E3CF3D9DD337BF3F8B2B1902D10C8FD9(L_14, NULL);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_15);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_15);
		String_t* L_16;
		L_16 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_13, NULL);
		V_5 = L_16;
		// int result = 1;
		V_6 = 1;
	}
	try
	{// begin try (depth: 1)
		{
			// using (T5_StringUTF8 appName = applicationName)
			String_t* L_17 = V_0;
			T5_StringUTF8_t8AC81068B24B238DB0858B6081E88E9C67B549B2 L_18;
			L_18 = T5_StringUTF8_op_Implicit_m45088BAC0DB1CEE31F98A0BC83E7752D4801D66D(L_17, NULL);
			V_7 = L_18;
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_00ab_1:
				{// begin finally (depth: 2)
					T5_StringUTF8_Dispose_m453ABFC5D1BAB64547C8D544E5698F634880DB2D((&V_7), NULL);
					return;
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				{
					// using (T5_StringUTF8 appId = applicationId)
					String_t* L_19 = V_1;
					T5_StringUTF8_t8AC81068B24B238DB0858B6081E88E9C67B549B2 L_20;
					L_20 = T5_StringUTF8_op_Implicit_m45088BAC0DB1CEE31F98A0BC83E7752D4801D66D(L_19, NULL);
					V_8 = L_20;
				}
				{
					auto __finallyBlock = il2cpp::utils::Finally([&]
					{

FINALLY_009b_2:
						{// begin finally (depth: 3)
							T5_StringUTF8_Dispose_m453ABFC5D1BAB64547C8D544E5698F634880DB2D((&V_8), NULL);
							return;
						}// end finally (depth: 3)
					});
					try
					{// begin try (depth: 3)
						{
							// using (T5_StringUTF8 appVersion = applicationVersionInfo)
							String_t* L_21 = V_5;
							T5_StringUTF8_t8AC81068B24B238DB0858B6081E88E9C67B549B2 L_22;
							L_22 = T5_StringUTF8_op_Implicit_m45088BAC0DB1CEE31F98A0BC83E7752D4801D66D(L_21, NULL);
							V_9 = L_22;
						}
						{
							auto __finallyBlock = il2cpp::utils::Finally([&]
							{

FINALLY_008b_3:
								{// begin finally (depth: 4)
									T5_StringUTF8_Dispose_m453ABFC5D1BAB64547C8D544E5698F634880DB2D((&V_9), NULL);
									return;
								}// end finally (depth: 4)
							});
							try
							{// begin try (depth: 4)
								// result = NativePlugin.SetApplicationInfo(appName, appId, appVersion);
								T5_StringUTF8_t8AC81068B24B238DB0858B6081E88E9C67B549B2 L_23 = V_7;
								T5_StringUTF8_t8AC81068B24B238DB0858B6081E88E9C67B549B2 L_24 = V_8;
								T5_StringUTF8_t8AC81068B24B238DB0858B6081E88E9C67B549B2 L_25 = V_9;
								int32_t L_26;
								L_26 = NativePlugin_SetApplicationInfo_m0F9E057188F2EF74D652D6C4A6113A7BC443D0A9(L_23, L_24, L_25, NULL);
								V_6 = L_26;
								// }
								goto IL_0099_3;
							}// end try (depth: 4)
							catch(Il2CppExceptionWrapper& e)
							{
								__finallyBlock.StoreException(e.ex);
							}
						}

IL_0099_3:
						{
							goto IL_00a9_2;
						}
					}// end try (depth: 3)
					catch(Il2CppExceptionWrapper& e)
					{
						__finallyBlock.StoreException(e.ex);
					}
				}

IL_00a9_2:
				{
					goto IL_00b9_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_00b9_1:
		{
			// }
			goto IL_00cd;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00bb;
		}
		throw e;
	}

CATCH_00bb:
	{// begin catch(System.Exception)
		// catch (Exception)
		// Log.Error("Failed to register project info with the Tilt Five service.");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27;
		L_27 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var)));
		Log_Error_mFAEE822C890E48138381AB6D607FA252E0245A00(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD35831D3DE1EC04845A9068720A0EEC560E9AC14)), L_27, NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00cd;
	}// end catch (depth: 1)

IL_00cd:
	{
		// return result == 0;
		int32_t L_28 = V_6;
		return (bool)((((int32_t)L_28) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean TiltFive.Display::GetGlassesAvailability()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Display_GetGlassesAvailability_mF1BF8B7E8413884C603712A158F02A30D2B797C2 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingletonComponent_1_get_Instance_m7C7F3FC2FE8E5775551E7F75D0514E0A3C4DC202_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Instance.GetGlassesAvailabilityImpl();
		Display_t9092D63B391AD42350974AB8DE55ADCADF27CED4* L_0;
		L_0 = SingletonComponent_1_get_Instance_m7C7F3FC2FE8E5775551E7F75D0514E0A3C4DC202(SingletonComponent_1_get_Instance_m7C7F3FC2FE8E5775551E7F75D0514E0A3C4DC202_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_1;
		L_1 = Display_GetGlassesAvailabilityImpl_mCC783E075A134B01E0828484B47B49B33FBA6882(L_0, NULL);
		return L_1;
	}
}
// System.Boolean TiltFive.Display::GetGlassesAvailabilityImpl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Display_GetGlassesAvailabilityImpl_mCC783E075A134B01E0828484B47B49B33FBA6882 (Display_t9092D63B391AD42350974AB8DE55ADCADF27CED4* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	DllNotFoundException_t8CAE636A394C482C9FCF38FB7B7929506319D534* V_1 = NULL;
	Exception_t* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (!_glassesAvailabilityErroredOnce) {
		bool L_0 = __this->____glassesAvailabilityErroredOnce_7;
		if (L_0)
		{
			goto IL_0059;
		}
	}
	try
	{// begin try (depth: 1)
		// return NativePlugin.RefreshGlassesAvailable() == 0;
		int32_t L_1;
		L_1 = NativePlugin_RefreshGlassesAvailable_m221EB39E8EC18C7506BABA28B5E9F360F280B3BE(NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		goto IL_005b;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DllNotFoundException_t8CAE636A394C482C9FCF38FB7B7929506319D534_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0013;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0036;
		}
		throw e;
	}

CATCH_0013:
	{// begin catch(System.DllNotFoundException)
		// catch (DllNotFoundException e)
		V_1 = ((DllNotFoundException_t8CAE636A394C482C9FCF38FB7B7929506319D534*)IL2CPP_GET_ACTIVE_EXCEPTION(DllNotFoundException_t8CAE636A394C482C9FCF38FB7B7929506319D534*));
		// Log.Info("Could not connect to Tilt Five plugin for glasses: {0}", e.Message);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var)), (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		DllNotFoundException_t8CAE636A394C482C9FCF38FB7B7929506319D534* L_4 = V_1;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_4);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		Log_Info_m57A985F6B299403D9BC1A3F66AF4EA16BDBDCBAB(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5956FA9599B20E34D38B34F6C458DB273938D78C)), L_3, NULL);
		// _glassesAvailabilityErroredOnce = true;
		__this->____glassesAvailabilityErroredOnce_7 = (bool)1;
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0059;
	}// end catch (depth: 1)

CATCH_0036:
	{// begin catch(System.Exception)
		// catch (Exception e)
		V_2 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// Log.Error(
		//     "Failed to connect to Tilt Five plugin for glasses availability: {0}",
		//     e.ToString());
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var)), (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_6;
		Exception_t* L_8 = V_2;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_9);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_9);
		Log_Error_mFAEE822C890E48138381AB6D607FA252E0245A00(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8E069C9533E193161FA09C62DF106C5EA2FACB94)), L_7, NULL);
		// _glassesAvailabilityErroredOnce = true;
		__this->____glassesAvailabilityErroredOnce_7 = (bool)1;
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0059;
	}// end catch (depth: 1)

IL_0059:
	{
		// return false;
		return (bool)0;
	}

IL_005b:
	{
		// }
		bool L_10 = V_0;
		return L_10;
	}
}
// System.Boolean TiltFive.Display::PresentStereoImages(System.IntPtr,System.IntPtr,System.Int32,System.Int32,System.Boolean,System.Single,System.Single,UnityEngine.Quaternion,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Display_PresentStereoImages_m62D9916A8E8EFB5A0110C6522AD1A5FABDFB8141 (intptr_t ___leftTexHandle0, intptr_t ___rightTexHandle1, int32_t ___texWidth_PIX2, int32_t ___texHeight_PIX3, bool ___isSrgb4, float ___fovYDegrees5, float ___widthToHeightRatio6, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotToUGBD_ULVC7, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___posOfULVC_UGBD8, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotToUGBD_URVC9, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___posOfURVC_UGBD10, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingletonComponent_1_get_Instance_m7C7F3FC2FE8E5775551E7F75D0514E0A3C4DC202_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Instance.PresentStereoImagesImpl(leftTexHandle,
		//                                         rightTexHandle,
		//                                         texWidth_PIX,
		//                                         texHeight_PIX,
		//                                         isSrgb,
		//                                         fovYDegrees,
		//                                         widthToHeightRatio,
		//                                         rotToUGBD_ULVC,
		//                                         posOfULVC_UGBD,
		//                                         rotToUGBD_URVC,
		//                                         posOfURVC_UGBD);
		Display_t9092D63B391AD42350974AB8DE55ADCADF27CED4* L_0;
		L_0 = SingletonComponent_1_get_Instance_m7C7F3FC2FE8E5775551E7F75D0514E0A3C4DC202(SingletonComponent_1_get_Instance_m7C7F3FC2FE8E5775551E7F75D0514E0A3C4DC202_RuntimeMethod_var);
		intptr_t L_1 = ___leftTexHandle0;
		intptr_t L_2 = ___rightTexHandle1;
		int32_t L_3 = ___texWidth_PIX2;
		int32_t L_4 = ___texHeight_PIX3;
		bool L_5 = ___isSrgb4;
		float L_6 = ___fovYDegrees5;
		float L_7 = ___widthToHeightRatio6;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___rotToUGBD_ULVC7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___posOfULVC_UGBD8;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___rotToUGBD_URVC9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___posOfURVC_UGBD10;
		NullCheck(L_0);
		bool L_12;
		L_12 = Display_PresentStereoImagesImpl_mE6AA323FF92259AC969E842FDD31A0EE82C07835(L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, L_10, L_11, NULL);
		return L_12;
	}
}
// System.Boolean TiltFive.Display::PresentStereoImagesImpl(System.IntPtr,System.IntPtr,System.Int32,System.Int32,System.Boolean,System.Single,System.Single,UnityEngine.Quaternion,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Display_PresentStereoImagesImpl_mE6AA323FF92259AC969E842FDD31A0EE82C07835 (Display_t9092D63B391AD42350974AB8DE55ADCADF27CED4* __this, intptr_t ___leftTexHandle0, intptr_t ___rightTexHandle1, int32_t ___texWidth_PIX2, int32_t ___texHeight_PIX3, bool ___isSrgb4, float ___fovYDegrees5, float ___widthToHeightRatio6, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotToUGBD_ULVC7, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___posOfULVC_UGBD8, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotToUGBD_URVC9, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___posOfURVC_UGBD10, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral658CCD7E408B3E9089CAE267151E6E6EBA9258FA);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_5;
	memset((&V_5), 0, sizeof(V_5));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_8;
	memset((&V_8), 0, sizeof(V_8));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_9;
	memset((&V_9), 0, sizeof(V_9));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_10;
	memset((&V_10), 0, sizeof(V_10));
	T5_FrameInfo_t7F613E6396304E74C09C56EA80815A7E37AFF041 V_11;
	memset((&V_11), 0, sizeof(V_11));
	int32_t V_12 = 0;
	bool V_13 = false;
	Exception_t* V_14 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// Quaternion rotToDC_GBD = Quaternion.AngleAxis(-90f, Vector3.right);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_right_m13B7C3EAA64DC921EC23346C56A5A597B5481FF5_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Quaternion_AngleAxis_m01A869DC10F976FAF493B66F15D6D6977BB61DA8((-90.0f), L_0, NULL);
		V_0 = L_1;
		// float startY_VCI = -Mathf.Tan(fovYDegrees * (0.5f * Mathf.PI / 180.0f));
		float L_2 = ___fovYDegrees5;
		float L_3;
		L_3 = tanf(((float)il2cpp_codegen_multiply(L_2, (0.00872664619f))));
		V_1 = ((-L_3));
		// float startX_VCI = startY_VCI * widthToHeightRatio;
		float L_4 = V_1;
		float L_5 = ___widthToHeightRatio6;
		V_2 = ((float)il2cpp_codegen_multiply(L_4, L_5));
		// float width_VCI = -2f * startX_VCI;
		float L_6 = V_2;
		V_3 = ((float)il2cpp_codegen_multiply((-2.0f), L_6));
		// float height_VCI = -2f * startY_VCI;
		float L_7 = V_1;
		V_4 = ((float)il2cpp_codegen_multiply((-2.0f), L_7));
		// Rect vci = new Rect(startX_VCI, startY_VCI, width_VCI, height_VCI);
		float L_8 = V_2;
		float L_9 = V_1;
		float L_10 = V_3;
		float L_11 = V_4;
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&V_5), L_8, L_9, L_10, L_11, NULL);
		// Quaternion rotToLVC_DC = new Quaternion(rotToUGBD_ULVC.x, rotToUGBD_ULVC.y, -rotToUGBD_ULVC.z, rotToUGBD_ULVC.w);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___rotToUGBD_ULVC7;
		float L_13 = L_12.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___rotToUGBD_ULVC7;
		float L_15 = L_14.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = ___rotToUGBD_ULVC7;
		float L_17 = L_16.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = ___rotToUGBD_ULVC7;
		float L_19 = L_18.___w_3;
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&V_6), L_13, L_15, ((-L_17)), L_19, NULL);
		// Quaternion rotToRVC_DC = new Quaternion(rotToUGBD_URVC.x, rotToUGBD_URVC.y, -rotToUGBD_URVC.z, rotToUGBD_URVC.w);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20 = ___rotToUGBD_URVC9;
		float L_21 = L_20.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = ___rotToUGBD_URVC9;
		float L_23 = L_22.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = ___rotToUGBD_URVC9;
		float L_25 = L_24.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = ___rotToUGBD_URVC9;
		float L_27 = L_26.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28;
		memset((&L_28), 0, sizeof(L_28));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_28), L_21, L_23, ((-L_25)), L_27, /*hidden argument*/NULL);
		// Quaternion rotToLVC_GBD = rotToLVC_DC * rotToDC_GBD;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_29 = V_6;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_31;
		L_31 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_29, L_30, NULL);
		V_7 = L_31;
		// Quaternion rotToRVC_GBD = rotToRVC_DC * rotToDC_GBD;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_33;
		L_33 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_28, L_32, NULL);
		V_8 = L_33;
		// Vector3 posOfLVC_GBD = new Vector3(posOfULVC_UGBD.x, posOfULVC_UGBD.z, posOfULVC_UGBD.y);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = ___posOfULVC_UGBD8;
		float L_35 = L_34.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36 = ___posOfULVC_UGBD8;
		float L_37 = L_36.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38 = ___posOfULVC_UGBD8;
		float L_39 = L_38.___y_3;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_9), L_35, L_37, L_39, NULL);
		// Vector3 posOfRVC_GBD = new Vector3(posOfURVC_UGBD.x, posOfURVC_UGBD.z, posOfURVC_UGBD.y);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40 = ___posOfURVC_UGBD10;
		float L_41 = L_40.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42 = ___posOfURVC_UGBD10;
		float L_43 = L_42.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44 = ___posOfURVC_UGBD10;
		float L_45 = L_44.___y_3;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_10), L_41, L_43, L_45, NULL);
		// T5_FrameInfo frameInfo = new T5_FrameInfo();
		il2cpp_codegen_initobj((&V_11), sizeof(T5_FrameInfo_t7F613E6396304E74C09C56EA80815A7E37AFF041));
		// frameInfo.LeftTexHandle = leftTexHandle;
		intptr_t L_46 = ___leftTexHandle0;
		(&V_11)->___LeftTexHandle_0 = L_46;
		// frameInfo.RightTexHandle = rightTexHandle;
		intptr_t L_47 = ___rightTexHandle1;
		(&V_11)->___RightTexHandle_1 = L_47;
		// frameInfo.TexWidth_PIX = (UInt16) texWidth_PIX;
		int32_t L_48 = ___texWidth_PIX2;
		(&V_11)->___TexWidth_PIX_2 = (uint16_t)((int32_t)(uint16_t)L_48);
		// frameInfo.TexHeight_PIX = (UInt16) texHeight_PIX;
		int32_t L_49 = ___texHeight_PIX3;
		(&V_11)->___TexHeight_PIX_3 = (uint16_t)((int32_t)(uint16_t)L_49);
		// frameInfo.IsSrgb = isSrgb;
		bool L_50 = ___isSrgb4;
		T5_FrameInfo_set_IsSrgb_m0AC22AE2E1BAC0215726C614A0B95E17584212D4((&V_11), L_50, NULL);
		// frameInfo.IsUpsideDown = false;     // False for Unity, but possibly true for other engines
		T5_FrameInfo_set_IsUpsideDown_m1D7053D60340A02DCF04F8AD2A058E2EADF95E4C((&V_11), (bool)0, NULL);
		// frameInfo.VCI = vci;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_51 = V_5;
		T5_FrameInfo_set_VCI_m3978F2B37AD1A924FBFE49F68336057BDC2B88EE((&V_11), L_51, NULL);
		// frameInfo.RotToLVC_GBD = rotToLVC_GBD;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52 = V_7;
		T5_FrameInfo_set_RotToLVC_GBD_m3A8B1DE49189AC76AC49AA7CED5F6CD6E9F48917((&V_11), L_52, NULL);
		// frameInfo.PosOfLVC_GBD = posOfLVC_GBD;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53 = V_9;
		T5_FrameInfo_set_PosOfLVC_GBD_m4ED417FC1886AEDB37D953AD468C9F80AC977B94((&V_11), L_53, NULL);
		// frameInfo.RotToRVC_GBD = rotToRVC_GBD;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54 = V_8;
		T5_FrameInfo_set_RotToRVC_GBD_m7065C3A18184B4A38892EEE24E3393A88E366904((&V_11), L_54, NULL);
		// frameInfo.PosOfRVC_GBD = posOfRVC_GBD;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55 = V_10;
		T5_FrameInfo_set_PosOfRVC_GBD_m1D2A4A86DC3504535431F299F9253FC24E016371((&V_11), L_55, NULL);
		// int result = 1;
		V_12 = 1;
	}
	try
	{// begin try (depth: 1)
		// result = NativePlugin.QueueStereoImages(frameInfo);
		T5_FrameInfo_t7F613E6396304E74C09C56EA80815A7E37AFF041 L_56 = V_11;
		int32_t L_57;
		L_57 = NativePlugin_QueueStereoImages_m6AC1A699770FC4EF0908D46089A19F356B5E74CB(L_56, NULL);
		V_12 = L_57;
		// }
		goto IL_0159;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0148;
		}
		throw e;
	}

CATCH_0148:
	{// begin catch(System.Exception)
		// Log.Error(e.Message);
		NullCheck(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)));
		String_t* L_58;
		L_58 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_59;
		L_59 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var)));
		Log_Error_mFAEE822C890E48138381AB6D607FA252E0245A00(L_58, L_59, NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0159;
	}// end catch (depth: 1)

IL_0159:
	{
		// if (result != 0) {
		int32_t L_60 = V_12;
		if (!L_60)
		{
			goto IL_015f;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_015f:
	{
		// if(_sendFrameCallback == IntPtr.Zero)
		intptr_t L_61 = __this->____sendFrameCallback_6;
		bool L_62;
		L_62 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_61, (0), NULL);
		if (!L_62)
		{
			goto IL_01b6;
		}
	}
	try
	{// begin try (depth: 1)
		// _sendFrameCallback = NativePlugin.GetSendFrameCallback();
		intptr_t L_63;
		L_63 = NativePlugin_GetSendFrameCallback_m2064AEF211C860CEC7AE58D1B01FE1FD9FC8F768(NULL);
		__this->____sendFrameCallback_6 = L_63;
		// }
		goto IL_0193;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_017e;
		}
		throw e;
	}

CATCH_017e:
	{// begin catch(System.Exception)
		// catch (Exception)
		// Log.Error("Unable to send frame - the native plugin DLL may be failing to load");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_64;
		L_64 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var)));
		Log_Error_mFAEE822C890E48138381AB6D607FA252E0245A00(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB8DA8407D5E6532BE60D2398326614EEA0D559AE)), L_64, NULL);
		// return false;
		V_13 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_01e9;
	}// end catch (depth: 1)

IL_0193:
	{
		// if (_sendFrameCallback == IntPtr.Zero)
		intptr_t L_65 = __this->____sendFrameCallback_6;
		bool L_66;
		L_66 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_65, (0), NULL);
		if (!L_66)
		{
			goto IL_01b6;
		}
	}
	{
		// Log.Error("Unable to send frame - the native plugin returned a null SendFrame callback");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_67;
		L_67 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		Log_Error_mFAEE822C890E48138381AB6D607FA252E0245A00(_stringLiteral658CCD7E408B3E9089CAE267151E6E6EBA9258FA, L_67, NULL);
		// return false;
		return (bool)0;
	}

IL_01b6:
	{
	}
	try
	{// begin try (depth: 1)
		// GL.IssuePluginEvent(_sendFrameCallback, 0);
		intptr_t L_68 = __this->____sendFrameCallback_6;
		GL_IssuePluginEvent_m6F9EC530F81DC4DB91A09B4F9F730B013C6929EF(L_68, 0, NULL);
		// }
		goto IL_01e7;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01c5;
		}
		throw e;
	}

CATCH_01c5:
	{// begin catch(System.Exception)
		// catch (Exception e)
		V_14 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// Log.Error($"Failed to execute sendFrame callback: {e.Message}");
		Exception_t* L_69 = V_14;
		NullCheck(L_69);
		String_t* L_70;
		L_70 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_69);
		String_t* L_71;
		L_71 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3AB4573005EE5E26C1B61C25DB0259D8D5CA5104)), L_70, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_72;
		L_72 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var)));
		Log_Error_mFAEE822C890E48138381AB6D607FA252E0245A00(L_71, L_72, NULL);
		// return false;
		V_13 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_01e9;
	}// end catch (depth: 1)

IL_01e7:
	{
		// return true;
		return (bool)1;
	}

IL_01e9:
	{
		// }
		bool L_73 = V_13;
		return L_73;
	}
}
// System.Boolean TiltFive.Display::GetDisplayDimensions(UnityEngine.Vector2Int&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Display_GetDisplayDimensions_m7E5E9BCB24E272B310D92093F3C13412ECB0E39B (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* ___displayDimensions0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingletonComponent_1_get_Instance_m7C7F3FC2FE8E5775551E7F75D0514E0A3C4DC202_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Instance.GetDisplayDimensionsImpl(ref displayDimensions);
		Display_t9092D63B391AD42350974AB8DE55ADCADF27CED4* L_0;
		L_0 = SingletonComponent_1_get_Instance_m7C7F3FC2FE8E5775551E7F75D0514E0A3C4DC202(SingletonComponent_1_get_Instance_m7C7F3FC2FE8E5775551E7F75D0514E0A3C4DC202_RuntimeMethod_var);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_1 = ___displayDimensions0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Display_GetDisplayDimensionsImpl_m4854DD7165D10FCD1A4C96054C261C234EEB04AB(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Boolean TiltFive.Display::GetDisplayDimensionsImpl(UnityEngine.Vector2Int&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Display_GetDisplayDimensionsImpl_m4854DD7165D10FCD1A4C96054C261C234EEB04AB (Display_t9092D63B391AD42350974AB8DE55ADCADF27CED4* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* ___displayDimensions0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40FDC08493CEC489A1A3F478A8A40F8115AAB8AC);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// int result = 1;
		V_0 = 1;
	}
	try
	{// begin try (depth: 1)
		{
			// result = NativePlugin.GetMaxDisplayDimensions(_displaySettings);
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____displaySettings_5;
			int32_t L_1;
			L_1 = NativePlugin_GetMaxDisplayDimensions_m30E11A95E3DDE3B85D856968D5941C7ED4D672C6(L_0, NULL);
			V_0 = L_1;
			// if(result == 0)
			int32_t L_2 = V_0;
			if (L_2)
			{
				goto IL_002e_1;
			}
		}
		{
			// displayDimensions = new Vector2Int(_displaySettings[0], _displaySettings[1]);
			Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_3 = ___displayDimensions0;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->____displaySettings_5;
			NullCheck(L_4);
			int32_t L_5 = 0;
			int32_t L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->____displaySettings_5;
			NullCheck(L_7);
			int32_t L_8 = 1;
			int32_t L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
			Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_10;
			memset((&L_10), 0, sizeof(L_10));
			Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline((&L_10), L_6, L_9, /*hidden argument*/NULL);
			*(Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A*)L_3 = L_10;
			goto IL_003d_1;
		}

IL_002e_1:
		{
			// else Log.Warn("Display.cs: Failed to retrieve display settings from plugin.");
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11;
			L_11 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
			Log_Warn_mF40461B896B66C649888EB8AA1E437748439C28B(_stringLiteral40FDC08493CEC489A1A3F478A8A40F8115AAB8AC, L_11, NULL);
		}

IL_003d_1:
		{
			// }
			goto IL_0050;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003f;
		}
		throw e;
	}

CATCH_003f:
	{// begin catch(System.Exception)
		// Log.Error(e.Message);
		NullCheck(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)));
		String_t* L_12;
		L_12 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13;
		L_13 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var)));
		Log_Error_mFAEE822C890E48138381AB6D607FA252E0245A00(L_12, L_13, NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0050;
	}// end catch (depth: 1)

IL_0050:
	{
		// return (0 == result);
		int32_t L_14 = V_0;
		return (bool)((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean TiltFive.Display::GetGlassesIPD(System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Display_GetGlassesIPD_mD554B40B04B2EC688669269920F06CC209938D85 (float* ___glassesIPD0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingletonComponent_1_get_Instance_m7C7F3FC2FE8E5775551E7F75D0514E0A3C4DC202_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Instance.GetGlassesIPDImpl(ref glassesIPD);
		Display_t9092D63B391AD42350974AB8DE55ADCADF27CED4* L_0;
		L_0 = SingletonComponent_1_get_Instance_m7C7F3FC2FE8E5775551E7F75D0514E0A3C4DC202(SingletonComponent_1_get_Instance_m7C7F3FC2FE8E5775551E7F75D0514E0A3C4DC202_RuntimeMethod_var);
		float* L_1 = ___glassesIPD0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Display_GetGlassesIPDImpl_m836E89E0D26670E4C5FC30018379E01242BD51C5(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Boolean TiltFive.Display::GetGlassesIPDImpl(System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Display_GetGlassesIPDImpl_m836E89E0D26670E4C5FC30018379E01242BD51C5 (Display_t9092D63B391AD42350974AB8DE55ADCADF27CED4* __this, float* ___glassesIPD0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC95A2577E9D77D9A8788A4E01F22C8FE20BEC41B);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// int result = 1;
		V_0 = 1;
	}
	try
	{// begin try (depth: 1)
		{
			// result = NativePlugin.GetGlassesIPD(ref glassesIPD);
			float* L_0 = ___glassesIPD0;
			int32_t L_1;
			L_1 = NativePlugin_GetGlassesIPD_m92CF5676AA515874AAD33113D42E84C47082D367(L_0, NULL);
			V_0 = L_1;
			// if(result != 0 && GetGlassesAvailability())
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0022_1;
			}
		}
		{
			bool L_3;
			L_3 = Display_GetGlassesAvailability_mF1BF8B7E8413884C603712A158F02A30D2B797C2(NULL);
			if (!L_3)
			{
				goto IL_0022_1;
			}
		}
		{
			// Log.Warn("Display.cs: Failed to retrieve glasses IPD");
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4;
			L_4 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
			Log_Warn_mF40461B896B66C649888EB8AA1E437748439C28B(_stringLiteralC95A2577E9D77D9A8788A4E01F22C8FE20BEC41B, L_4, NULL);
		}

IL_0022_1:
		{
			// }
			goto IL_0035;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0024;
		}
		throw e;
	}

CATCH_0024:
	{// begin catch(System.Exception)
		// Log.Error(e.Message);
		NullCheck(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)));
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6;
		L_6 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var)));
		Log_Error_mFAEE822C890E48138381AB6D607FA252E0245A00(L_5, L_6, NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0035;
	}// end catch (depth: 1)

IL_0035:
	{
		// return (0 == result);
		int32_t L_7 = V_0;
		return (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void TiltFive.Display::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Display__ctor_m5083F0C004BAF79775BDE545AFBB5C7AD21388C3 (Display_t9092D63B391AD42350974AB8DE55ADCADF27CED4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingletonComponent_1__ctor_mCD9CAC13600D09B237CC8B72F143FA8ADAD36953_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [NonSerialized] int[] _displaySettings = new int[2];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->____displaySettings_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____displaySettings_5), (void*)L_0);
		// IntPtr _sendFrameCallback = IntPtr.Zero;
		__this->____sendFrameCallback_6 = (0);
		SingletonComponent_1__ctor_mCD9CAC13600D09B237CC8B72F143FA8ADAD36953(__this, SingletonComponent_1__ctor_mCD9CAC13600D09B237CC8B72F143FA8ADAD36953_RuntimeMethod_var);
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
// UnityEngine.Matrix4x4 TiltFive.DisplayHelper::Frustum(TiltFive.ARProjectionFrustum)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 DisplayHelper_Frustum_m73EA0348236B8453D4F41FC31F92A3ABB767E7E5 (ARProjectionFrustum_t6D22EF4F5BDE8D84A621BCFE990C13C64CA51530 ___f0, const RuntimeMethod* method) 
{
	{
		// return Frustum(f.m_Left, f.m_Right, f.m_Bottom, f.m_Top, f.m_Near, f.m_Far);
		ARProjectionFrustum_t6D22EF4F5BDE8D84A621BCFE990C13C64CA51530 L_0 = ___f0;
		float L_1 = L_0.___m_Left_0;
		ARProjectionFrustum_t6D22EF4F5BDE8D84A621BCFE990C13C64CA51530 L_2 = ___f0;
		float L_3 = L_2.___m_Right_1;
		ARProjectionFrustum_t6D22EF4F5BDE8D84A621BCFE990C13C64CA51530 L_4 = ___f0;
		float L_5 = L_4.___m_Bottom_2;
		ARProjectionFrustum_t6D22EF4F5BDE8D84A621BCFE990C13C64CA51530 L_6 = ___f0;
		float L_7 = L_6.___m_Top_3;
		ARProjectionFrustum_t6D22EF4F5BDE8D84A621BCFE990C13C64CA51530 L_8 = ___f0;
		float L_9 = L_8.___m_Near_4;
		ARProjectionFrustum_t6D22EF4F5BDE8D84A621BCFE990C13C64CA51530 L_10 = ___f0;
		float L_11 = L_10.___m_Far_5;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_12;
		L_12 = DisplayHelper_Frustum_m3B08E26C5C90BCF951860A1F229307D5E2AE1B25(L_1, L_3, L_5, L_7, L_9, L_11, NULL);
		return L_12;
	}
}
// UnityEngine.Matrix4x4 TiltFive.DisplayHelper::Frustum(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 DisplayHelper_Frustum_m3B08E26C5C90BCF951860A1F229307D5E2AE1B25 (float ___L0, float ___R1, float ___B2, float ___T3, float ___n4, float ___f5, const RuntimeMethod* method) 
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Matrix4x4 m = new Matrix4x4();
		il2cpp_codegen_initobj((&V_0), sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6));
		// m[0, 0] = (2 * n) / (R - L);
		float L_0 = ___n4;
		float L_1 = ___R1;
		float L_2 = ___L0;
		Matrix4x4_set_Item_mE84FC43629907DD1872E3100BCFF4A8EB671B603_inline((&V_0), 0, 0, ((float)(((float)il2cpp_codegen_multiply((2.0f), L_0))/((float)il2cpp_codegen_subtract(L_1, L_2)))), NULL);
		// m[1, 1] = (2 * n) / (T - B);
		float L_3 = ___n4;
		float L_4 = ___T3;
		float L_5 = ___B2;
		Matrix4x4_set_Item_mE84FC43629907DD1872E3100BCFF4A8EB671B603_inline((&V_0), 1, 1, ((float)(((float)il2cpp_codegen_multiply((2.0f), L_3))/((float)il2cpp_codegen_subtract(L_4, L_5)))), NULL);
		// m[0, 2] = (R + L) / (R - L);
		float L_6 = ___R1;
		float L_7 = ___L0;
		float L_8 = ___R1;
		float L_9 = ___L0;
		Matrix4x4_set_Item_mE84FC43629907DD1872E3100BCFF4A8EB671B603_inline((&V_0), 0, 2, ((float)(((float)il2cpp_codegen_add(L_6, L_7))/((float)il2cpp_codegen_subtract(L_8, L_9)))), NULL);
		// m[1, 2] = (T + B) / (T - B);
		float L_10 = ___T3;
		float L_11 = ___B2;
		float L_12 = ___T3;
		float L_13 = ___B2;
		Matrix4x4_set_Item_mE84FC43629907DD1872E3100BCFF4A8EB671B603_inline((&V_0), 1, 2, ((float)(((float)il2cpp_codegen_add(L_10, L_11))/((float)il2cpp_codegen_subtract(L_12, L_13)))), NULL);
		// m[2, 2] = -(f + n) / (f - n);
		float L_14 = ___f5;
		float L_15 = ___n4;
		float L_16 = ___f5;
		float L_17 = ___n4;
		Matrix4x4_set_Item_mE84FC43629907DD1872E3100BCFF4A8EB671B603_inline((&V_0), 2, 2, ((float)(((-((float)il2cpp_codegen_add(L_14, L_15))))/((float)il2cpp_codegen_subtract(L_16, L_17)))), NULL);
		// m[2, 3] = -(2 * f * n) / (f - n);
		float L_18 = ___f5;
		float L_19 = ___n4;
		float L_20 = ___f5;
		float L_21 = ___n4;
		Matrix4x4_set_Item_mE84FC43629907DD1872E3100BCFF4A8EB671B603_inline((&V_0), 2, 3, ((float)(((-((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((2.0f), L_18)), L_19))))/((float)il2cpp_codegen_subtract(L_20, L_21)))), NULL);
		// m[3, 2] = -1.0f;
		Matrix4x4_set_Item_mE84FC43629907DD1872E3100BCFF4A8EB671B603_inline((&V_0), 3, 2, (-1.0f), NULL);
		// m[3, 3] = 0.0f;
		Matrix4x4_set_Item_mE84FC43629907DD1872E3100BCFF4A8EB671B603_inline((&V_0), 3, 3, (0.0f), NULL);
		// return m;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_22 = V_0;
		return L_22;
	}
}
// System.Void TiltFive.DisplayHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisplayHelper__ctor_mDEC6D11C6A26C6EA8ED10B04F1B889D0D179755D (DisplayHelper_t13A3668CAA774537DD54CD56B5151EC05DC0119F* __this, const RuntimeMethod* method) 
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
// System.Boolean TiltFive.Glasses::get_updated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Glasses_get_updated_mF93A6E41FCFE93DBB824A63801ECF458EC1342E6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_m693D8A944BB871616AA85060DC3BF0C83A459824_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_t3DE33EA244384F5B9B06179B7CC2ADCC575AFBCC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool updated => Instance.glassesCore.TrackingUpdated;
		il2cpp_codegen_runtime_class_init_inline(Singleton_1_t3DE33EA244384F5B9B06179B7CC2ADCC575AFBCC_il2cpp_TypeInfo_var);
		Glasses_tD7352D8219D253B4BDA92806B35E4E1946313A95* L_0;
		L_0 = Singleton_1_get_Instance_m693D8A944BB871616AA85060DC3BF0C83A459824_inline(Singleton_1_get_Instance_m693D8A944BB871616AA85060DC3BF0C83A459824_RuntimeMethod_var);
		NullCheck(L_0);
		GlassesCore_t5A44456D065E1327F5EAA342CF1373142192C837* L_1 = L_0->___glassesCore_1;
		NullCheck(L_1);
		bool L_2;
		L_2 = GlassesCore_get_TrackingUpdated_m63C7F5E8D5E554C2697EF8B54E80B4BE7B947FF8_inline(L_1, NULL);
		return L_2;
	}
}
// System.Boolean TiltFive.Glasses::get_configured()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Glasses_get_configured_m5CE53472B439DA00B405B0D0D84CCFB6B81EB400 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_m693D8A944BB871616AA85060DC3BF0C83A459824_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_t3DE33EA244384F5B9B06179B7CC2ADCC575AFBCC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool configured => Instance.glassesCore.configured;
		il2cpp_codegen_runtime_class_init_inline(Singleton_1_t3DE33EA244384F5B9B06179B7CC2ADCC575AFBCC_il2cpp_TypeInfo_var);
		Glasses_tD7352D8219D253B4BDA92806B35E4E1946313A95* L_0;
		L_0 = Singleton_1_get_Instance_m693D8A944BB871616AA85060DC3BF0C83A459824_inline(Singleton_1_get_Instance_m693D8A944BB871616AA85060DC3BF0C83A459824_RuntimeMethod_var);
		NullCheck(L_0);
		GlassesCore_t5A44456D065E1327F5EAA342CF1373142192C837* L_1 = L_0->___glassesCore_1;
		NullCheck(L_1);
		bool L_2 = L_1->___configured_4;
		return L_2;
	}
}
// UnityEngine.Vector3 TiltFive.Glasses::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Glasses_get_position_mDE29E34A1BD1722FF74DDD86E75B3324AA574EA9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_m693D8A944BB871616AA85060DC3BF0C83A459824_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_t3DE33EA244384F5B9B06179B7CC2ADCC575AFBCC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackableCore_1_get_Pose_UnityWorldSpace_m7D54E26B20D43D50EB15A927DF3366147E23782E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Vector3 position => Instance.glassesCore.Pose_UnityWorldSpace.position;
		il2cpp_codegen_runtime_class_init_inline(Singleton_1_t3DE33EA244384F5B9B06179B7CC2ADCC575AFBCC_il2cpp_TypeInfo_var);
		Glasses_tD7352D8219D253B4BDA92806B35E4E1946313A95* L_0;
		L_0 = Singleton_1_get_Instance_m693D8A944BB871616AA85060DC3BF0C83A459824_inline(Singleton_1_get_Instance_m693D8A944BB871616AA85060DC3BF0C83A459824_RuntimeMethod_var);
		NullCheck(L_0);
		GlassesCore_t5A44456D065E1327F5EAA342CF1373142192C837* L_1 = L_0->___glassesCore_1;
		NullCheck(L_1);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_2;
		L_2 = TrackableCore_1_get_Pose_UnityWorldSpace_m7D54E26B20D43D50EB15A927DF3366147E23782E_inline(L_1, TrackableCore_1_get_Pose_UnityWorldSpace_m7D54E26B20D43D50EB15A927DF3366147E23782E_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = L_2.___position_0;
		return L_3;
	}
}
// UnityEngine.Quaternion TiltFive.Glasses::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Glasses_get_rotation_m1BAEEB4FA15254B9CDDBBD7C82972CA333C252CF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_m693D8A944BB871616AA85060DC3BF0C83A459824_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_t3DE33EA244384F5B9B06179B7CC2ADCC575AFBCC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackableCore_1_get_Pose_UnityWorldSpace_m7D54E26B20D43D50EB15A927DF3366147E23782E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Quaternion rotation => Instance.glassesCore.Pose_UnityWorldSpace.rotation;
		il2cpp_codegen_runtime_class_init_inline(Singleton_1_t3DE33EA244384F5B9B06179B7CC2ADCC575AFBCC_il2cpp_TypeInfo_var);
		Glasses_tD7352D8219D253B4BDA92806B35E4E1946313A95* L_0;
		L_0 = Singleton_1_get_Instance_m693D8A944BB871616AA85060DC3BF0C83A459824_inline(Singleton_1_get_Instance_m693D8A944BB871616AA85060DC3BF0C83A459824_RuntimeMethod_var);
		NullCheck(L_0);
		GlassesCore_t5A44456D065E1327F5EAA342CF1373142192C837* L_1 = L_0->___glassesCore_1;
		NullCheck(L_1);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_2;
		L_2 = TrackableCore_1_get_Pose_UnityWorldSpace_m7D54E26B20D43D50EB15A927DF3366147E23782E_inline(L_1, TrackableCore_1_get_Pose_UnityWorldSpace_m7D54E26B20D43D50EB15A927DF3366147E23782E_RuntimeMethod_var);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = L_2.___rotation_1;
		return L_3;
	}
}
// UnityEngine.Vector3 TiltFive.Glasses::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Glasses_get_forward_mC0176018658F32F1229BC9E072E9E05C695C6F53 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_m693D8A944BB871616AA85060DC3BF0C83A459824_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_t3DE33EA244384F5B9B06179B7CC2ADCC575AFBCC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackableCore_1_get_Pose_UnityWorldSpace_m7D54E26B20D43D50EB15A927DF3366147E23782E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public static Vector3 forward => Instance.glassesCore.Pose_UnityWorldSpace.forward;
		il2cpp_codegen_runtime_class_init_inline(Singleton_1_t3DE33EA244384F5B9B06179B7CC2ADCC575AFBCC_il2cpp_TypeInfo_var);
		Glasses_tD7352D8219D253B4BDA92806B35E4E1946313A95* L_0;
		L_0 = Singleton_1_get_Instance_m693D8A944BB871616AA85060DC3BF0C83A459824_inline(Singleton_1_get_Instance_m693D8A944BB871616AA85060DC3BF0C83A459824_RuntimeMethod_var);
		NullCheck(L_0);
		GlassesCore_t5A44456D065E1327F5EAA342CF1373142192C837* L_1 = L_0->___glassesCore_1;
		NullCheck(L_1);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_2;
		L_2 = TrackableCore_1_get_Pose_UnityWorldSpace_m7D54E26B20D43D50EB15A927DF3366147E23782E_inline(L_1, TrackableCore_1_get_Pose_UnityWorldSpace_m7D54E26B20D43D50EB15A927DF3366147E23782E_RuntimeMethod_var);
		V_0 = L_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Pose_get_forward_m510527153754B6C2B2CDFDEE25D7168E3C82372A((&V_0), NULL);
		return L_3;
	}
}
// UnityEngine.Vector3 TiltFive.Glasses::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Glasses_get_right_mFB23F89B29930951D98BA5F1B775F09362FB3ABA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_m693D8A944BB871616AA85060DC3BF0C83A459824_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_t3DE33EA244384F5B9B06179B7CC2ADCC575AFBCC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackableCore_1_get_Pose_UnityWorldSpace_m7D54E26B20D43D50EB15A927DF3366147E23782E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public static Vector3 right => Instance.glassesCore.Pose_UnityWorldSpace.right;
		il2cpp_codegen_runtime_class_init_inline(Singleton_1_t3DE33EA244384F5B9B06179B7CC2ADCC575AFBCC_il2cpp_TypeInfo_var);
		Glasses_tD7352D8219D253B4BDA92806B35E4E1946313A95* L_0;
		L_0 = Singleton_1_get_Instance_m693D8A944BB871616AA85060DC3BF0C83A459824_inline(Singleton_1_get_Instance_m693D8A944BB871616AA85060DC3BF0C83A459824_RuntimeMethod_var);
		NullCheck(L_0);
		GlassesCore_t5A44456D065E1327F5EAA342CF1373142192C837* L_1 = L_0->___glassesCore_1;
		NullCheck(L_1);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_2;
		L_2 = TrackableCore_1_get_Pose_UnityWorldSpace_m7D54E26B20D43D50EB15A927DF3366147E23782E_inline(L_1, TrackableCore_1_get_Pose_UnityWorldSpace_m7D54E26B20D43D50EB15A927DF3366147E23782E_RuntimeMethod_var);
		V_0 = L_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Pose_get_right_m8518E7BCEB74B9798BADB001B9E38756CC35ECFE((&V_0), NULL);
		return L_3;
	}
}
// UnityEngine.Vector3 TiltFive.Glasses::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Glasses_get_up_m79232F0D1BF3029EBF79E9C0C3ADAA6706ED1B3E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_m693D8A944BB871616AA85060DC3BF0C83A459824_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_t3DE33EA244384F5B9B06179B7CC2ADCC575AFBCC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackableCore_1_get_Pose_UnityWorldSpace_m7D54E26B20D43D50EB15A927DF3366147E23782E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public static Vector3 up => Instance.glassesCore.Pose_UnityWorldSpace.up;
		il2cpp_codegen_runtime_class_init_inline(Singleton_1_t3DE33EA244384F5B9B06179B7CC2ADCC575AFBCC_il2cpp_TypeInfo_var);
		Glasses_tD7352D8219D253B4BDA92806B35E4E1946313A95* L_0;
		L_0 = Singleton_1_get_Instance_m693D8A944BB871616AA85060DC3BF0C83A459824_inline(Singleton_1_get_Instance_m693D8A944BB871616AA85060DC3BF0C83A459824_RuntimeMethod_var);
		NullCheck(L_0);
		GlassesCore_t5A44456D065E1327F5EAA342CF1373142192C837* L_1 = L_0->___glassesCore_1;
		NullCheck(L_1);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_2;
		L_2 = TrackableCore_1_get_Pose_UnityWorldSpace_m7D54E26B20D43D50EB15A927DF3366147E23782E_inline(L_1, TrackableCore_1_get_Pose_UnityWorldSpace_m7D54E26B20D43D50EB15A927DF3366147E23782E_RuntimeMethod_var);
		V_0 = L_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Pose_get_up_m5431E350242BEBB0CD7B0AAF9DC9468DC6DDFE5C((&V_0), NULL);
		return L_3;
	}
}
// UnityEngine.Vector3 TiltFive.Glasses::get_leftEyePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Glasses_get_leftEyePosition_m8B7F640BC2E779A9C29A079091E7BE70E25EB4A5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mC765916A206303D2F563FF1E8EB582EF2760B551_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_m693D8A944BB871616AA85060DC3BF0C83A459824_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_t3DE33EA244384F5B9B06179B7CC2ADCC575AFBCC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Vector3 leftEyePosition => Instance.glassesCore.eyePositions[AREyes.EYE_LEFT];
		il2cpp_codegen_runtime_class_init_inline(Singleton_1_t3DE33EA244384F5B9B06179B7CC2ADCC575AFBCC_il2cpp_TypeInfo_var);
		Glasses_tD7352D8219D253B4BDA92806B35E4E1946313A95* L_0;
		L_0 = Singleton_1_get_Instance_m693D8A944BB871616AA85060DC3BF0C83A459824_inline(Singleton_1_get_Instance_m693D8A944BB871616AA85060DC3BF0C83A459824_RuntimeMethod_var);
		NullCheck(L_0);
		GlassesCore_t5A44456D065E1327F5EAA342CF1373142192C837* L_1 = L_0->___glassesCore_1;
		NullCheck(L_1);
		Dictionary_2_tA16E81E89B239343E2536E642AAFA7C7E560F2AA* L_2 = L_1->___eyePositions_5;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Dictionary_2_get_Item_mC765916A206303D2F563FF1E8EB582EF2760B551(L_2, 0, Dictionary_2_get_Item_mC765916A206303D2F563FF1E8EB582EF2760B551_RuntimeMethod_var);
		return L_3;
	}
}
// UnityEngine.Vector3 TiltFive.Glasses::get_rightEyePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Glasses_get_rightEyePosition_mA940D0238E70E8AC9B3736C1E6F5DE14735AB148 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mC765916A206303D2F563FF1E8EB582EF2760B551_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_m693D8A944BB871616AA85060DC3BF0C83A459824_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_t3DE33EA244384F5B9B06179B7CC2ADCC575AFBCC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Vector3 rightEyePosition => Instance.glassesCore.eyePositions[AREyes.EYE_RIGHT];
		il2cpp_codegen_runtime_class_init_inline(Singleton_1_t3DE33EA244384F5B9B06179B7CC2ADCC575AFBCC_il2cpp_TypeInfo_var);
		Glasses_tD7352D8219D253B4BDA92806B35E4E1946313A95* L_0;
		L_0 = Singleton_1_get_Instance_m693D8A944BB871616AA85060DC3BF0C83A459824_inline(Singleton_1_get_Instance_m693D8A944BB871616AA85060DC3BF0C83A459824_RuntimeMethod_var);
		NullCheck(L_0);
		GlassesCore_t5A44456D065E1327F5EAA342CF1373142192C837* L_1 = L_0->___glassesCore_1;
		NullCheck(L_1);
		Dictionary_2_tA16E81E89B239343E2536E642AAFA7C7E560F2AA* L_2 = L_1->___eyePositions_5;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Dictionary_2_get_Item_mC765916A206303D2F563FF1E8EB582EF2760B551(L_2, 1, Dictionary_2_get_Item_mC765916A206303D2F563FF1E8EB582EF2760B551_RuntimeMethod_var);
		return L_3;
	}
}
// System.Boolean TiltFive.Glasses::get_glassesAvailable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Glasses_get_glassesAvailable_mD1875BDEF8F05E262FC2EF15C991F497DCCFAD24 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Glasses_tD7352D8219D253B4BDA92806B35E4E1946313A95_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool glassesAvailable {get; private set;}
		bool L_0 = ((Glasses_tD7352D8219D253B4BDA92806B35E4E1946313A95_StaticFields*)il2cpp_codegen_static_fields_for(Glasses_tD7352D8219D253B4BDA92806B35E4E1946313A95_il2cpp_TypeInfo_var))->___U3CglassesAvailableU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void TiltFive.Glasses::set_glassesAvailable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Glasses_set_glassesAvailable_mCA3C5781DA07674B024B89C86ACFE6C70BEE317C (bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Glasses_tD7352D8219D253B4BDA92806B35E4E1946313A95_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool glassesAvailable {get; private set;}
		bool L_0 = ___value0;
		((Glasses_tD7352D8219D253B4BDA92806B35E4E1946313A95_StaticFields*)il2cpp_codegen_static_fields_for(Glasses_tD7352D8219D253B4BDA92806B35E4E1946313A95_il2cpp_TypeInfo_var))->___U3CglassesAvailableU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Boolean TiltFive.Glasses::headPoseUpdated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Glasses_headPoseUpdated_m270B1F1486880336FD2A9ECE9886ADC388102FC1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_m693D8A944BB871616AA85060DC3BF0C83A459824_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_t3DE33EA244384F5B9B06179B7CC2ADCC575AFBCC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool headPoseUpdated() { return Instance.glassesCore.TrackingUpdated; }
		il2cpp_codegen_runtime_class_init_inline(Singleton_1_t3DE33EA244384F5B9B06179B7CC2ADCC575AFBCC_il2cpp_TypeInfo_var);
		Glasses_tD7352D8219D253B4BDA92806B35E4E1946313A95* L_0;
		L_0 = Singleton_1_get_Instance_m693D8A944BB871616AA85060DC3BF0C83A459824_inline(Singleton_1_get_Instance_m693D8A944BB871616AA85060DC3BF0C83A459824_RuntimeMethod_var);
		NullCheck(L_0);
		GlassesCore_t5A44456D065E1327F5EAA342CF1373142192C837* L_1 = L_0->___glassesCore_1;
		NullCheck(L_1);
		bool L_2;
		L_2 = GlassesCore_get_TrackingUpdated_m63C7F5E8D5E554C2697EF8B54E80B4BE7B947FF8_inline(L_1, NULL);
		return L_2;
	}
}
// System.Void TiltFive.Glasses::Reset(TiltFive.GlassesSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Glasses_Reset_m22FC0181390109137EC7C2969BE7C89CDA8F5A47 (GlassesSettings_tDE2641921BB452EF823D032185D46CBFA9E5782B* ___glassesSettings0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_m693D8A944BB871616AA85060DC3BF0C83A459824_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_t3DE33EA244384F5B9B06179B7CC2ADCC575AFBCC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instance.glassesCore.Reset(glassesSettings);
		il2cpp_codegen_runtime_class_init_inline(Singleton_1_t3DE33EA244384F5B9B06179B7CC2ADCC575AFBCC_il2cpp_TypeInfo_var);
		Glasses_tD7352D8219D253B4BDA92806B35E4E1946313A95* L_0;
		L_0 = Singleton_1_get_Instance_m693D8A944BB871616AA85060DC3BF0C83A459824_inline(Singleton_1_get_Instance_m693D8A944BB871616AA85060DC3BF0C83A459824_RuntimeMethod_var);
		NullCheck(L_0);
		GlassesCore_t5A44456D065E1327F5EAA342CF1373142192C837* L_1 = L_0->___glassesCore_1;
		GlassesSettings_tDE2641921BB452EF823D032185D46CBFA9E5782B* L_2 = ___glassesSettings0;
		NullCheck(L_1);
		GlassesCore_Reset_mEA90C955FB5998D3DDB53474BEB5C37997FB15FB(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Boolean TiltFive.Glasses::Validate(TiltFive.GlassesSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Glasses_Validate_mE32FBF60FA67F692B2DA97656CE4C9AAB4AFC063 (GlassesSettings_tDE2641921BB452EF823D032185D46CBFA9E5782B* ___glassesSettings0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_m693D8A944BB871616AA85060DC3BF0C83A459824_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_t3DE33EA244384F5B9B06179B7CC2ADCC575AFBCC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Instance.glassesCore.Validate(glassesSettings);
		il2cpp_codegen_runtime_class_init_inline(Singleton_1_t3DE33EA244384F5B9B06179B7CC2ADCC575AFBCC_il2cpp_TypeInfo_var);
		Glasses_tD7352D8219D253B4BDA92806B35E4E1946313A95* L_0;
		L_0 = Singleton_1_get_Instance_m693D8A944BB871616AA85060DC3BF0C83A459824_inline(Singleton_1_get_Instance_m693D8A944BB871616AA85060DC3BF0C83A459824_RuntimeMethod_var);
		NullCheck(L_0);
		GlassesCore_t5A44456D065E1327F5EAA342CF1373142192C837* L_1 = L_0->___glassesCore_1;
		GlassesSettings_tDE2641921BB452EF823D032185D46CBFA9E5782B* L_2 = ___glassesSettings0;
		NullCheck(L_1);
		bool L_3;
		L_3 = GlassesCore_Validate_mD5BA44A2A1343293738D48CBC3B029E2CE4E7D89(L_1, L_2, NULL);
		return L_3;
	}
}
// System.Void TiltFive.Glasses::Update(TiltFive.GlassesSettings,TiltFive.ScaleSettings,TiltFive.GameBoardSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Glasses_Update_m65EBFBADF1D53796DC08469B9FC9F587ED56B821 (GlassesSettings_tDE2641921BB452EF823D032185D46CBFA9E5782B* ___glassesSettings0, ScaleSettings_t4FE94D7555EF25D5286239492DE97AF448542507* ___scaleSettings1, GameBoardSettings_tA53FDF5FE8B4D937F945DB659EF5A76243634A4B* ___gameBoardSettings2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_m693D8A944BB871616AA85060DC3BF0C83A459824_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_t3DE33EA244384F5B9B06179B7CC2ADCC575AFBCC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instance.glassesCore.Update(glassesSettings, scaleSettings, gameBoardSettings);
		il2cpp_codegen_runtime_class_init_inline(Singleton_1_t3DE33EA244384F5B9B06179B7CC2ADCC575AFBCC_il2cpp_TypeInfo_var);
		Glasses_tD7352D8219D253B4BDA92806B35E4E1946313A95* L_0;
		L_0 = Singleton_1_get_Instance_m693D8A944BB871616AA85060DC3BF0C83A459824_inline(Singleton_1_get_Instance_m693D8A944BB871616AA85060DC3BF0C83A459824_RuntimeMethod_var);
		NullCheck(L_0);
		GlassesCore_t5A44456D065E1327F5EAA342CF1373142192C837* L_1 = L_0->___glassesCore_1;
		GlassesSettings_tDE2641921BB452EF823D032185D46CBFA9E5782B* L_2 = ___glassesSettings0;
		ScaleSettings_t4FE94D7555EF25D5286239492DE97AF448542507* L_3 = ___scaleSettings1;
		GameBoardSettings_tA53FDF5FE8B4D937F945DB659EF5A76243634A4B* L_4 = ___gameBoardSettings2;
		NullCheck(L_1);
		GlassesCore_Update_m12771DD699A4A1857CB49530190AB94C2D07828D(L_1, L_2, L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Boolean TiltFive.Glasses::IsTracked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Glasses_IsTracked_mD7DC998D5465EFA3E096CD3A17367932CAB78AB1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_m693D8A944BB871616AA85060DC3BF0C83A459824_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_t3DE33EA244384F5B9B06179B7CC2ADCC575AFBCC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackableCore_1_get_IsTracked_m968F4B43CC77660E5F0FB75A0B3F34EC1DFFD571_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Instance.glassesCore.IsTracked;
		il2cpp_codegen_runtime_class_init_inline(Singleton_1_t3DE33EA244384F5B9B06179B7CC2ADCC575AFBCC_il2cpp_TypeInfo_var);
		Glasses_tD7352D8219D253B4BDA92806B35E4E1946313A95* L_0;
		L_0 = Singleton_1_get_Instance_m693D8A944BB871616AA85060DC3BF0C83A459824_inline(Singleton_1_get_Instance_m693D8A944BB871616AA85060DC3BF0C83A459824_RuntimeMethod_var);
		NullCheck(L_0);
		GlassesCore_t5A44456D065E1327F5EAA342CF1373142192C837* L_1 = L_0->___glassesCore_1;
		NullCheck(L_1);
		bool L_2;
		L_2 = TrackableCore_1_get_IsTracked_m968F4B43CC77660E5F0FB75A0B3F34EC1DFFD571_inline(L_1, TrackableCore_1_get_IsTracked_m968F4B43CC77660E5F0FB75A0B3F34EC1DFFD571_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void TiltFive.Glasses::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Glasses__ctor_mC901412CB8C5654317F20FC74031CC0165405304 (Glasses_tD7352D8219D253B4BDA92806B35E4E1946313A95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlassesCore_t5A44456D065E1327F5EAA342CF1373142192C837_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1__ctor_m3F580F6C9BFB6FF2E8643945E8D43AD517F4B737_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_t3DE33EA244384F5B9B06179B7CC2ADCC575AFBCC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private GlassesCore glassesCore = new GlassesCore();
		GlassesCore_t5A44456D065E1327F5EAA342CF1373142192C837* L_0 = (GlassesCore_t5A44456D065E1327F5EAA342CF1373142192C837*)il2cpp_codegen_object_new(GlassesCore_t5A44456D065E1327F5EAA342CF1373142192C837_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		GlassesCore__ctor_m336DEA36FBA50D9573ACA80174BECC181C8E2CB5(L_0, NULL);
		__this->___glassesCore_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___glassesCore_1), (void*)L_0);
		il2cpp_codegen_runtime_class_init_inline(Singleton_1_t3DE33EA244384F5B9B06179B7CC2ADCC575AFBCC_il2cpp_TypeInfo_var);
		Singleton_1__ctor_m3F580F6C9BFB6FF2E8643945E8D43AD517F4B737(__this, Singleton_1__ctor_m3F580F6C9BFB6FF2E8643945E8D43AD517F4B737_RuntimeMethod_var);
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
// System.Boolean TiltFive.Glasses/GlassesCore::get_TrackingUpdated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GlassesCore_get_TrackingUpdated_m63C7F5E8D5E554C2697EF8B54E80B4BE7B947FF8 (GlassesCore_t5A44456D065E1327F5EAA342CF1373142192C837* __this, const RuntimeMethod* method) 
{
	{
		// public bool TrackingUpdated { get; private set; } = false;
		bool L_0 = __this->___U3CTrackingUpdatedU3Ek__BackingField_9;
		return L_0;
	}
}
// System.Void TiltFive.Glasses/GlassesCore::set_TrackingUpdated(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlassesCore_set_TrackingUpdated_m51BE49C9773B2D3A1C78C763D2A60122B991084F (GlassesCore_t5A44456D065E1327F5EAA342CF1373142192C837* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool TrackingUpdated { get; private set; } = false;
		bool L_0 = ___value0;
		__this->___U3CTrackingUpdatedU3Ek__BackingField_9 = L_0;
		return;
	}
}
// System.Void TiltFive.Glasses/GlassesCore::Reset(TiltFive.GlassesSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlassesCore_Reset_mEA90C955FB5998D3DDB53474BEB5C37997FB15FB (GlassesCore_t5A44456D065E1327F5EAA342CF1373142192C837* __this, GlassesSettings_tDE2641921BB452EF823D032185D46CBFA9E5782B* ___glassesSettings0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisSplitStereoCamera_t8E4D30C6028706D80A47E65C3110D750E000BEF5_mE33FC7E9FAA2CF8A2D32AFC8EA585A2BAD3A5DB1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_TryGetComponent_TisSplitStereoCamera_t8E4D30C6028706D80A47E65C3110D750E000BEF5_mECC920696FA3D39B3A9A646488B3AB44024B42E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackableCore_1_Reset_m2EFCB705F8DC9960090B677479BB89B2BE75A6F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9B8F305E0B92A08870B7AFBD92A414A5F4B0D46);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		// base.Reset(glassesSettings);
		GlassesSettings_tDE2641921BB452EF823D032185D46CBFA9E5782B* L_0 = ___glassesSettings0;
		TrackableCore_1_Reset_m2EFCB705F8DC9960090B677479BB89B2BE75A6F6(__this, L_0, TrackableCore_1_Reset_m2EFCB705F8DC9960090B677479BB89B2BE75A6F6_RuntimeMethod_var);
		// configured = false;
		__this->___configured_4 = (bool)0;
		// if (null == glassesSettings.headPoseCamera)
		GlassesSettings_tDE2641921BB452EF823D032185D46CBFA9E5782B* L_1 = ___glassesSettings0;
		NullCheck(L_1);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2 = L_1->___headPoseCamera_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, L_2, NULL);
		if (!L_3)
		{
			goto IL_0037;
		}
	}
	{
		// Log.Error($"Required Camera assignment missing from { GetType() }.");
		Type_t* L_4;
		L_4 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		String_t* L_5;
		L_5 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteralD9B8F305E0B92A08870B7AFBD92A414A5F4B0D46, L_4, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6;
		L_6 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		Log_Error_mFAEE822C890E48138381AB6D607FA252E0245A00(L_5, L_6, NULL);
		// return;
		return;
	}

IL_0037:
	{
		// if(glassesSettings.headPoseCamera.fieldOfView != glassesSettings.fieldOfView)
		GlassesSettings_tDE2641921BB452EF823D032185D46CBFA9E5782B* L_7 = ___glassesSettings0;
		NullCheck(L_7);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_8 = L_7->___headPoseCamera_2;
		NullCheck(L_8);
		float L_9;
		L_9 = Camera_get_fieldOfView_m9A93F17BBF89F496AE231C21817AFD1C1E833FBB(L_8, NULL);
		GlassesSettings_tDE2641921BB452EF823D032185D46CBFA9E5782B* L_10 = ___glassesSettings0;
		NullCheck(L_10);
		float L_11;
		L_11 = GlassesSettings_get_fieldOfView_m17B155D3AB6B108CB2BD2D38F59AD3B3794BFA50(L_10, NULL);
		if ((((float)L_9) == ((float)L_11)))
		{
			goto IL_005b;
		}
	}
	{
		// glassesSettings.headPoseCamera.fieldOfView = glassesSettings.fieldOfView;
		GlassesSettings_tDE2641921BB452EF823D032185D46CBFA9E5782B* L_12 = ___glassesSettings0;
		NullCheck(L_12);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_13 = L_12->___headPoseCamera_2;
		GlassesSettings_tDE2641921BB452EF823D032185D46CBFA9E5782B* L_14 = ___glassesSettings0;
		NullCheck(L_14);
		float L_15;
		L_15 = GlassesSettings_get_fieldOfView_m17B155D3AB6B108CB2BD2D38F59AD3B3794BFA50(L_14, NULL);
		NullCheck(L_13);
		Camera_set_fieldOfView_m5AA9EED4D1603A1DEDBF883D9C42814B2BDEB777(L_13, L_15, NULL);
	}

IL_005b:
	{
		// if (null == splitStereoCamera)
		SplitStereoCamera_t8E4D30C6028706D80A47E65C3110D750E000BEF5* L_16 = __this->___splitStereoCamera_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, L_16, NULL);
		if (!L_17)
		{
			goto IL_008f;
		}
	}
	{
		// GameObject cameraObject = glassesSettings.headPoseCamera.gameObject;
		GlassesSettings_tDE2641921BB452EF823D032185D46CBFA9E5782B* L_18 = ___glassesSettings0;
		NullCheck(L_18);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_19 = L_18->___headPoseCamera_2;
		NullCheck(L_19);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20;
		L_20 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_19, NULL);
		V_0 = L_20;
		// if (!cameraObject.TryGetComponent<SplitStereoCamera>(out splitStereoCamera))
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = V_0;
		SplitStereoCamera_t8E4D30C6028706D80A47E65C3110D750E000BEF5** L_22 = (&__this->___splitStereoCamera_10);
		NullCheck(L_21);
		bool L_23;
		L_23 = GameObject_TryGetComponent_TisSplitStereoCamera_t8E4D30C6028706D80A47E65C3110D750E000BEF5_mECC920696FA3D39B3A9A646488B3AB44024B42E4(L_21, L_22, GameObject_TryGetComponent_TisSplitStereoCamera_t8E4D30C6028706D80A47E65C3110D750E000BEF5_mECC920696FA3D39B3A9A646488B3AB44024B42E4_RuntimeMethod_var);
		if (L_23)
		{
			goto IL_008f;
		}
	}
	{
		// splitStereoCamera = cameraObject.AddComponent<SplitStereoCamera>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = V_0;
		NullCheck(L_24);
		SplitStereoCamera_t8E4D30C6028706D80A47E65C3110D750E000BEF5* L_25;
		L_25 = GameObject_AddComponent_TisSplitStereoCamera_t8E4D30C6028706D80A47E65C3110D750E000BEF5_mE33FC7E9FAA2CF8A2D32AFC8EA585A2BAD3A5DB1(L_24, GameObject_AddComponent_TisSplitStereoCamera_t8E4D30C6028706D80A47E65C3110D750E000BEF5_mE33FC7E9FAA2CF8A2D32AFC8EA585A2BAD3A5DB1_RuntimeMethod_var);
		__this->___splitStereoCamera_10 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___splitStereoCamera_10), (void*)L_25);
	}

IL_008f:
	{
		// configured = true;
		__this->___configured_4 = (bool)1;
		// }
		return;
	}
}
// System.Boolean TiltFive.Glasses/GlassesCore::Validate(TiltFive.GlassesSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GlassesCore_Validate_mD5BA44A2A1343293738D48CBC3B029E2CE4E7D89 (GlassesCore_t5A44456D065E1327F5EAA342CF1373142192C837* __this, GlassesSettings_tDE2641921BB452EF823D032185D46CBFA9E5782B* ___glassesSettings0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// bool valid = true;
		// valid &= (glassesSettings.headPoseCamera == splitStereoCamera.headPoseCamera);
		GlassesSettings_tDE2641921BB452EF823D032185D46CBFA9E5782B* L_0 = ___glassesSettings0;
		NullCheck(L_0);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1 = L_0->___headPoseCamera_2;
		SplitStereoCamera_t8E4D30C6028706D80A47E65C3110D750E000BEF5* L_2 = __this->___splitStereoCamera_10;
		NullCheck(L_2);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3;
		L_3 = SplitStereoCamera_get_headPoseCamera_m25FFE8B09223C391E92ABBA1DCDCB9CF19F2E0D2_inline(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_1, L_3, NULL);
		// valid &= (glassesSettings.headPoseCamera.fieldOfView == glassesSettings.fieldOfView);
		GlassesSettings_tDE2641921BB452EF823D032185D46CBFA9E5782B* L_5 = ___glassesSettings0;
		NullCheck(L_5);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_6 = L_5->___headPoseCamera_2;
		NullCheck(L_6);
		float L_7;
		L_7 = Camera_get_fieldOfView_m9A93F17BBF89F496AE231C21817AFD1C1E833FBB(L_6, NULL);
		GlassesSettings_tDE2641921BB452EF823D032185D46CBFA9E5782B* L_8 = ___glassesSettings0;
		NullCheck(L_8);
		float L_9;
		L_9 = GlassesSettings_get_fieldOfView_m17B155D3AB6B108CB2BD2D38F59AD3B3794BFA50(L_8, NULL);
		// return valid;
		return (bool)((int32_t)(((int32_t)(1&(int32_t)L_4))&((((float)L_7) == ((float)L_9))? 1 : 0)));
	}
}
// System.Boolean TiltFive.Glasses/GlassesCore::TryGetFriendlyName(System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GlassesCore_TryGetFriendlyName_m3E5DD0E082CABE4EBFAF0CF5F6281163AC20258A (GlassesCore_t5A44456D065E1327F5EAA342CF1373142192C837* __this, String_t** ___friendlyName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	T5_StringUTF8_t8AC81068B24B238DB0858B6081E88E9C67B549B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	Exception_t* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	String_t** G_B5_0 = NULL;
	String_t** G_B4_0 = NULL;
	T5_StringUTF8_t8AC81068B24B238DB0858B6081E88E9C67B549B2 G_B6_0;
	memset((&G_B6_0), 0, sizeof(G_B6_0));
	String_t** G_B6_1 = NULL;
	{
		// T5_StringUTF8 friendlyNameResult = "";
		T5_StringUTF8_t8AC81068B24B238DB0858B6081E88E9C67B549B2 L_0;
		L_0 = T5_StringUTF8_op_Implicit_m45088BAC0DB1CEE31F98A0BC83E7752D4801D66D(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		V_0 = L_0;
		// int result = 1;
		V_1 = 1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0034:
			{// begin finally (depth: 1)
				{
					// friendlyName = (result == 0)
					// ? friendlyNameResult
					// : null;
					String_t** L_1 = ___friendlyName0;
					int32_t L_2 = V_1;
					G_B4_0 = L_1;
					if (!L_2)
					{
						G_B5_0 = L_1;
						goto IL_0040;
					}
				}
				{
					T5_StringUTF8_t8AC81068B24B238DB0858B6081E88E9C67B549B2 L_3;
					L_3 = T5_StringUTF8_op_Implicit_m45088BAC0DB1CEE31F98A0BC83E7752D4801D66D((String_t*)NULL, NULL);
					G_B6_0 = L_3;
					G_B6_1 = G_B4_0;
					goto IL_0041;
				}

IL_0040:
				{
					T5_StringUTF8_t8AC81068B24B238DB0858B6081E88E9C67B549B2 L_4 = V_0;
					G_B6_0 = L_4;
					G_B6_1 = G_B5_0;
				}

IL_0041:
				{
					String_t* L_5;
					L_5 = T5_StringUTF8_op_Implicit_mC5F2D661832C37F3A7320043A2C916EF39BED179(G_B6_0, NULL);
					*((RuntimeObject**)G_B6_1) = (RuntimeObject*)L_5;
					Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)G_B6_1, (void*)(RuntimeObject*)L_5);
					// friendlyNameResult.Dispose();
					T5_StringUTF8_Dispose_m453ABFC5D1BAB64547C8D544E5698F634880DB2D((&V_0), NULL);
					// }
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			try
			{// begin try (depth: 2)
				// result = NativePlugin.GetGlassesFriendlyName(ref friendlyNameResult);
				int32_t L_6;
				L_6 = NativePlugin_GetGlassesFriendlyName_mF1CA9DB91770557A6581DC1C3135C3AD6D7B7239((&V_0), NULL);
				V_1 = L_6;
				// }
				goto IL_004f;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0017_1;
				}
				throw e;
			}

CATCH_0017_1:
			{// begin catch(System.Exception)
				// catch (System.Exception e)
				V_2 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
				// Log.Error($"Error getting friendly name: {e.Message}");
				Exception_t* L_7 = V_2;
				NullCheck(L_7);
				String_t* L_8;
				L_8 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_7);
				String_t* L_9;
				L_9 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral102F0816F543B98B96313F146B16B3325EBD6A6C)), L_8, NULL);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10;
				L_10 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var)));
				Log_Error_mFAEE822C890E48138381AB6D607FA252E0245A00(L_9, L_10, NULL);
				// }
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_004f;
			}// end catch (depth: 2)
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004f:
	{
		// return result == 0;
		int32_t L_11 = V_1;
		return (bool)((((int32_t)L_11) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void TiltFive.Glasses/GlassesCore::Update(TiltFive.GlassesSettings,TiltFive.ScaleSettings,TiltFive.GameBoardSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlassesCore_Update_m12771DD699A4A1857CB49530190AB94C2D07828D (GlassesCore_t5A44456D065E1327F5EAA342CF1373142192C837* __this, GlassesSettings_tDE2641921BB452EF823D032185D46CBFA9E5782B* ___glassesSettings0, ScaleSettings_t4FE94D7555EF25D5286239492DE97AF448542507* ___scaleSettings1, GameBoardSettings_tA53FDF5FE8B4D937F945DB659EF5A76243634A4B* ___gameBoardSettings2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mA2AB2D3E45850FF7B320638727DEA457D741491B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mC765916A206303D2F563FF1E8EB582EF2760B551_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m766CA45C200D9B717B47231D75BC392495B438FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mBBB7FF63984D2F9723DF998403B0EDD5B73A199A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlassesSettings_tDE2641921BB452EF823D032185D46CBFA9E5782B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackableCore_1_Update_m3C2F156D5EDD674F86BD0D0A64E52C6313902977_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral269C651531436C10B4B9A936BD164CE5CD9724A7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral311B6FE0EDFAF0854622D0E1767B2A7E87B75364);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4BA80371A735F97F75C815A56FF5BBE05BE867AE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84CE53FCF826D885E77CF8104647E93E4DF5C409);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA365DC044E149236ACDDB48DBB05D9AB80B2298E);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_1 = NULL;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* V_5 = NULL;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* V_6 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	float G_B11_0 = 0.0f;
	float G_B9_0 = 0.0f;
	float G_B10_0 = 0.0f;
	{
		// TrackingUpdated = false;
		GlassesCore_set_TrackingUpdated_m51BE49C9773B2D3A1C78C763D2A60122B991084F_inline(__this, (bool)0, NULL);
		// if (null == glassesSettings)
		GlassesSettings_tDE2641921BB452EF823D032185D46CBFA9E5782B* L_0 = ___glassesSettings0;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		// Log.Error("GlassesSettings configuration required for Glasses tracking Update.");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		Log_Error_mFAEE822C890E48138381AB6D607FA252E0245A00(_stringLiteral4BA80371A735F97F75C815A56FF5BBE05BE867AE, L_1, NULL);
		// return;
		return;
	}

IL_001a:
	{
		// if (null == splitStereoCamera)
		SplitStereoCamera_t8E4D30C6028706D80A47E65C3110D750E000BEF5* L_2 = __this->___splitStereoCamera_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, L_2, NULL);
		if (!L_3)
		{
			goto IL_0038;
		}
	}
	{
		// Log.Error("Stereo camera(s) missing from Glasses - aborting Update.");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4;
		L_4 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		Log_Error_mFAEE822C890E48138381AB6D607FA252E0245A00(_stringLiteral269C651531436C10B4B9A936BD164CE5CD9724A7, L_4, NULL);
		// return;
		return;
	}

IL_0038:
	{
		// if (glassesSettings.headPoseCamera != splitStereoCamera.headPoseCamera)
		GlassesSettings_tDE2641921BB452EF823D032185D46CBFA9E5782B* L_5 = ___glassesSettings0;
		NullCheck(L_5);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_6 = L_5->___headPoseCamera_2;
		SplitStereoCamera_t8E4D30C6028706D80A47E65C3110D750E000BEF5* L_7 = __this->___splitStereoCamera_10;
		NullCheck(L_7);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_8;
		L_8 = SplitStereoCamera_get_headPoseCamera_m25FFE8B09223C391E92ABBA1DCDCB9CF19F2E0D2_inline(L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_0060;
		}
	}
	{
		// Log.Warn("Found mismatched Cameras in GlassesCore Update - should call Reset.");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10;
		L_10 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		Log_Warn_mF40461B896B66C649888EB8AA1E437748439C28B(_stringLiteral311B6FE0EDFAF0854622D0E1767B2A7E87B75364, L_10, NULL);
		// return;
		return;
	}

IL_0060:
	{
		// glassesAvailable = GetTrackingAvailability(glassesSettings);
		GlassesSettings_tDE2641921BB452EF823D032185D46CBFA9E5782B* L_11 = ___glassesSettings0;
		bool L_12;
		L_12 = VirtualFuncInvoker1< bool, GlassesSettings_tDE2641921BB452EF823D032185D46CBFA9E5782B* >::Invoke(6 /* System.Boolean TiltFive.TrackableCore`1<TiltFive.GlassesSettings>::GetTrackingAvailability(T) */, __this, L_11);
		Glasses_set_glassesAvailable_mCA3C5781DA07674B024B89C86ACFE6C70BEE317C_inline(L_12, NULL);
		// splitStereoCamera.enabled = glassesAvailable;
		SplitStereoCamera_t8E4D30C6028706D80A47E65C3110D750E000BEF5* L_13 = __this->___splitStereoCamera_10;
		bool L_14;
		L_14 = Glasses_get_glassesAvailable_mD1875BDEF8F05E262FC2EF15C991F497DCCFAD24_inline(NULL);
		NullCheck(L_13);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_13, L_14, NULL);
		// splitStereoCamera.glassesMirrorMode = glassesSettings.glassesMirrorMode;
		SplitStereoCamera_t8E4D30C6028706D80A47E65C3110D750E000BEF5* L_15 = __this->___splitStereoCamera_10;
		GlassesSettings_tDE2641921BB452EF823D032185D46CBFA9E5782B* L_16 = ___glassesSettings0;
		NullCheck(L_16);
		int32_t L_17 = L_16->___glassesMirrorMode_12;
		NullCheck(L_15);
		L_15->___glassesMirrorMode_17 = L_17;
		// if (glassesSettings.headPoseCamera == null)
		GlassesSettings_tDE2641921BB452EF823D032185D46CBFA9E5782B* L_18 = ___glassesSettings0;
		NullCheck(L_18);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_19 = L_18->___headPoseCamera_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_19, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_20)
		{
			goto IL_00ab;
		}
	}
	{
		// Log.Error("Head pose camera required for Glasses tracking.");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21;
		L_21 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		Log_Error_mFAEE822C890E48138381AB6D607FA252E0245A00(_stringLiteral84CE53FCF826D885E77CF8104647E93E4DF5C409, L_21, NULL);
		// return;
		return;
	}

IL_00ab:
	{
		// base.Update(glassesSettings, scaleSettings, gameBoardSettings);
		GlassesSettings_tDE2641921BB452EF823D032185D46CBFA9E5782B* L_22 = ___glassesSettings0;
		ScaleSettings_t4FE94D7555EF25D5286239492DE97AF448542507* L_23 = ___scaleSettings1;
		GameBoardSettings_tA53FDF5FE8B4D937F945DB659EF5A76243634A4B* L_24 = ___gameBoardSettings2;
		TrackableCore_1_Update_m3C2F156D5EDD674F86BD0D0A64E52C6313902977(__this, L_22, L_23, L_24, TrackableCore_1_Update_m3C2F156D5EDD674F86BD0D0A64E52C6313902977_RuntimeMethod_var);
		// float scaleToUGBD_UWRLD = scaleSettings.physicalMetersPerWorldSpaceUnit * gameBoardSettings.gameBoardScale;
		ScaleSettings_t4FE94D7555EF25D5286239492DE97AF448542507* L_25 = ___scaleSettings1;
		NullCheck(L_25);
		float L_26;
		L_26 = ScaleSettings_get_physicalMetersPerWorldSpaceUnit_m88EA402A990B6B7AD083C18F8A022AB6A31D2BBA(L_25, NULL);
		GameBoardSettings_tA53FDF5FE8B4D937F945DB659EF5A76243634A4B* L_27 = ___gameBoardSettings2;
		NullCheck(L_27);
		float L_28;
		L_28 = GameBoardSettings_get_gameBoardScale_m95684BB3F820DA15309C661128F9C2280C5BEECB(L_27, NULL);
		V_0 = ((float)il2cpp_codegen_multiply(L_26, L_28));
		// float scaleToUWRLD_UGBD = scaleSettings.GetScaleToUWRLD_UGBD(gameBoardSettings.gameBoardScale);
		ScaleSettings_t4FE94D7555EF25D5286239492DE97AF448542507* L_29 = ___scaleSettings1;
		GameBoardSettings_tA53FDF5FE8B4D937F945DB659EF5A76243634A4B* L_30 = ___gameBoardSettings2;
		NullCheck(L_30);
		float L_31;
		L_31 = GameBoardSettings_get_gameBoardScale_m95684BB3F820DA15309C661128F9C2280C5BEECB(L_30, NULL);
		NullCheck(L_29);
		float L_32;
		L_32 = ScaleSettings_GetScaleToUWRLD_UGBD_mE688695B85E4DB6F3328DFCAA25092BC8F55122C(L_29, L_31, NULL);
		// splitStereoCamera.posUGBD_UWRLD = gameboardPose_UnityWorldSpace.position;
		SplitStereoCamera_t8E4D30C6028706D80A47E65C3110D750E000BEF5* L_33 = __this->___splitStereoCamera_10;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_34 = (&((TrackableCore_1_tBE6016DABBA8AFF5E8B98992E66F92F4B147EEC8*)__this)->___gameboardPose_UnityWorldSpace_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35 = L_34->___position_0;
		NullCheck(L_33);
		L_33->___posUGBD_UWRLD_12 = L_35;
		// splitStereoCamera.rotToUGBD_UWRLD = gameboardPose_UnityWorldSpace.rotation;
		SplitStereoCamera_t8E4D30C6028706D80A47E65C3110D750E000BEF5* L_36 = __this->___splitStereoCamera_10;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_37 = (&((TrackableCore_1_tBE6016DABBA8AFF5E8B98992E66F92F4B147EEC8*)__this)->___gameboardPose_UnityWorldSpace_3);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38 = L_37->___rotation_1;
		NullCheck(L_36);
		L_36->___rotToUGBD_UWRLD_13 = L_38;
		// splitStereoCamera.scaleToUGBD_UWRLD = scaleToUGBD_UWRLD;
		SplitStereoCamera_t8E4D30C6028706D80A47E65C3110D750E000BEF5* L_39 = __this->___splitStereoCamera_10;
		float L_40 = V_0;
		NullCheck(L_39);
		L_39->___scaleToUGBD_UWRLD_14 = L_40;
		// Transform headPose = glassesSettings.headPoseCamera.transform;
		GlassesSettings_tDE2641921BB452EF823D032185D46CBFA9E5782B* L_41 = ___glassesSettings0;
		NullCheck(L_41);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_42 = L_41->___headPoseCamera_2;
		NullCheck(L_42);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_43;
		L_43 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_42, NULL);
		V_1 = L_43;
		// float ipd_UGBD = GlassesSettings.DEFAULT_IPD_UGBD;
		V_2 = (0.0590000004f);
		// if(!Display.GetGlassesIPD(ref ipd_UGBD) && glassesAvailable)
		bool L_44;
		L_44 = Display_GetGlassesIPD_mD554B40B04B2EC688669269920F06CC209938D85((&V_2), NULL);
		G_B9_0 = L_32;
		if (L_44)
		{
			G_B11_0 = L_32;
			goto IL_0137;
		}
	}
	{
		bool L_45;
		L_45 = Glasses_get_glassesAvailable_mD1875BDEF8F05E262FC2EF15C991F497DCCFAD24_inline(NULL);
		G_B10_0 = G_B9_0;
		if (!L_45)
		{
			G_B11_0 = G_B9_0;
			goto IL_0137;
		}
	}
	{
		// Log.Error("Failed to obtain Glasses IPD");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_46;
		L_46 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		Log_Error_mFAEE822C890E48138381AB6D607FA252E0245A00(_stringLiteralA365DC044E149236ACDDB48DBB05D9AB80B2298E, L_46, NULL);
		G_B11_0 = G_B10_0;
	}

IL_0137:
	{
		// float ipd_UWRLD = scaleToUWRLD_UGBD * ipd_UGBD;
		float L_47 = V_2;
		V_3 = ((float)il2cpp_codegen_multiply(G_B11_0, L_47));
		// Vector3 eyeOffset = (headPose.right.normalized * (ipd_UWRLD * 0.5f));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_48 = V_1;
		NullCheck(L_48);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49;
		L_49 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_48, NULL);
		V_7 = L_49;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50;
		L_50 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_7), NULL);
		float L_51 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52;
		L_52 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_50, ((float)il2cpp_codegen_multiply(L_51, (0.5f))), NULL);
		V_4 = L_52;
		// eyePositions[AREyes.EYE_LEFT] = headPose.position - eyeOffset;
		Dictionary_2_tA16E81E89B239343E2536E642AAFA7C7E560F2AA* L_53 = __this->___eyePositions_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_54 = V_1;
		NullCheck(L_54);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55;
		L_55 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_54, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57;
		L_57 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_55, L_56, NULL);
		NullCheck(L_53);
		Dictionary_2_set_Item_mBBB7FF63984D2F9723DF998403B0EDD5B73A199A(L_53, 0, L_57, Dictionary_2_set_Item_mBBB7FF63984D2F9723DF998403B0EDD5B73A199A_RuntimeMethod_var);
		// eyeRotations[AREyes.EYE_LEFT] = headPose.rotation;
		Dictionary_2_tB850B26CB9CB2FDDA0FD474BA994D6AB9EF9C7AC* L_58 = __this->___eyeRotations_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_59 = V_1;
		NullCheck(L_59);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_60;
		L_60 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_59, NULL);
		NullCheck(L_58);
		Dictionary_2_set_Item_m766CA45C200D9B717B47231D75BC392495B438FE(L_58, 0, L_60, Dictionary_2_set_Item_m766CA45C200D9B717B47231D75BC392495B438FE_RuntimeMethod_var);
		// eyePositions[AREyes.EYE_RIGHT] = headPose.position + eyeOffset;
		Dictionary_2_tA16E81E89B239343E2536E642AAFA7C7E560F2AA* L_61 = __this->___eyePositions_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_62 = V_1;
		NullCheck(L_62);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63;
		L_63 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_62, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_64 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_65;
		L_65 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_63, L_64, NULL);
		NullCheck(L_61);
		Dictionary_2_set_Item_mBBB7FF63984D2F9723DF998403B0EDD5B73A199A(L_61, 1, L_65, Dictionary_2_set_Item_mBBB7FF63984D2F9723DF998403B0EDD5B73A199A_RuntimeMethod_var);
		// eyeRotations[AREyes.EYE_RIGHT] = headPose.rotation;
		Dictionary_2_tB850B26CB9CB2FDDA0FD474BA994D6AB9EF9C7AC* L_66 = __this->___eyeRotations_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_67 = V_1;
		NullCheck(L_67);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_68;
		L_68 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_67, NULL);
		NullCheck(L_66);
		Dictionary_2_set_Item_m766CA45C200D9B717B47231D75BC392495B438FE(L_66, 1, L_68, Dictionary_2_set_Item_m766CA45C200D9B717B47231D75BC392495B438FE_RuntimeMethod_var);
		// Camera leftEyeCamera = splitStereoCamera.leftEyeCamera;
		SplitStereoCamera_t8E4D30C6028706D80A47E65C3110D750E000BEF5* L_69 = __this->___splitStereoCamera_10;
		NullCheck(L_69);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_70;
		L_70 = SplitStereoCamera_get_leftEyeCamera_mD755856E8116BC9B7230773B9B5C4B05DFA62EA7(L_69, NULL);
		V_5 = L_70;
		// if (null != leftEyeCamera)
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_71 = V_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_72;
		L_72 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, L_71, NULL);
		if (!L_72)
		{
			goto IL_022e;
		}
	}
	{
		// GameObject leftEye = leftEyeCamera.gameObject;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_73 = V_5;
		NullCheck(L_73);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_74;
		L_74 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_73, NULL);
		// leftEye.transform.position = eyePositions[AREyes.EYE_LEFT];
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_75 = L_74;
		NullCheck(L_75);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_76;
		L_76 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_75, NULL);
		Dictionary_2_tA16E81E89B239343E2536E642AAFA7C7E560F2AA* L_77 = __this->___eyePositions_5;
		NullCheck(L_77);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78;
		L_78 = Dictionary_2_get_Item_mC765916A206303D2F563FF1E8EB582EF2760B551(L_77, 0, Dictionary_2_get_Item_mC765916A206303D2F563FF1E8EB582EF2760B551_RuntimeMethod_var);
		NullCheck(L_76);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_76, L_78, NULL);
		// leftEye.transform.rotation = eyeRotations[AREyes.EYE_LEFT];
		NullCheck(L_75);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_79;
		L_79 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_75, NULL);
		Dictionary_2_tB850B26CB9CB2FDDA0FD474BA994D6AB9EF9C7AC* L_80 = __this->___eyeRotations_6;
		NullCheck(L_80);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_81;
		L_81 = Dictionary_2_get_Item_mA2AB2D3E45850FF7B320638727DEA457D741491B(L_80, 0, Dictionary_2_get_Item_mA2AB2D3E45850FF7B320638727DEA457D741491B_RuntimeMethod_var);
		NullCheck(L_79);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_79, L_81, NULL);
		// leftEyeCamera.nearClipPlane = glassesSettings.headPoseCamera.nearClipPlane;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_82 = V_5;
		GlassesSettings_tDE2641921BB452EF823D032185D46CBFA9E5782B* L_83 = ___glassesSettings0;
		NullCheck(L_83);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_84 = L_83->___headPoseCamera_2;
		NullCheck(L_84);
		float L_85;
		L_85 = Camera_get_nearClipPlane_m5E8FAF84326E3192CB036BD29DCCDAF6A9861013(L_84, NULL);
		NullCheck(L_82);
		Camera_set_nearClipPlane_m78482B5E4E0CE4C195D9CE0332AA75B2D9CCDDF6(L_82, L_85, NULL);
		// leftEyeCamera.farClipPlane = glassesSettings.headPoseCamera.farClipPlane;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_86 = V_5;
		GlassesSettings_tDE2641921BB452EF823D032185D46CBFA9E5782B* L_87 = ___glassesSettings0;
		NullCheck(L_87);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_88 = L_87->___headPoseCamera_2;
		NullCheck(L_88);
		float L_89;
		L_89 = Camera_get_farClipPlane_m1D7128B85B5DB866F75FBE8CEBA48335716B67BD(L_88, NULL);
		NullCheck(L_86);
		Camera_set_farClipPlane_m84EF39B09573168734613481FD979BFF31C60139(L_86, L_89, NULL);
		// leftEyeCamera.fieldOfView = glassesSettings.headPoseCamera.fieldOfView;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_90 = V_5;
		GlassesSettings_tDE2641921BB452EF823D032185D46CBFA9E5782B* L_91 = ___glassesSettings0;
		NullCheck(L_91);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_92 = L_91->___headPoseCamera_2;
		NullCheck(L_92);
		float L_93;
		L_93 = Camera_get_fieldOfView_m9A93F17BBF89F496AE231C21817AFD1C1E833FBB(L_92, NULL);
		NullCheck(L_90);
		Camera_set_fieldOfView_m5AA9EED4D1603A1DEDBF883D9C42814B2BDEB777(L_90, L_93, NULL);
	}

IL_022e:
	{
		// Camera rightEyeCamera = splitStereoCamera.rightEyeCamera;
		SplitStereoCamera_t8E4D30C6028706D80A47E65C3110D750E000BEF5* L_94 = __this->___splitStereoCamera_10;
		NullCheck(L_94);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_95;
		L_95 = SplitStereoCamera_get_rightEyeCamera_mE638B3001D0EA00B89D872EECA44372505C656E3(L_94, NULL);
		V_6 = L_95;
		// if (null != rightEyeCamera)
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_96 = V_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_97;
		L_97 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, L_96, NULL);
		if (!L_97)
		{
			goto IL_02af;
		}
	}
	{
		// GameObject rightEye = rightEyeCamera.gameObject;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_98 = V_6;
		NullCheck(L_98);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_99;
		L_99 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_98, NULL);
		// rightEye.transform.position = eyePositions[AREyes.EYE_RIGHT];
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_100 = L_99;
		NullCheck(L_100);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_101;
		L_101 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_100, NULL);
		Dictionary_2_tA16E81E89B239343E2536E642AAFA7C7E560F2AA* L_102 = __this->___eyePositions_5;
		NullCheck(L_102);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_103;
		L_103 = Dictionary_2_get_Item_mC765916A206303D2F563FF1E8EB582EF2760B551(L_102, 1, Dictionary_2_get_Item_mC765916A206303D2F563FF1E8EB582EF2760B551_RuntimeMethod_var);
		NullCheck(L_101);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_101, L_103, NULL);
		// rightEye.transform.rotation = eyeRotations[AREyes.EYE_RIGHT];
		NullCheck(L_100);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_104;
		L_104 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_100, NULL);
		Dictionary_2_tB850B26CB9CB2FDDA0FD474BA994D6AB9EF9C7AC* L_105 = __this->___eyeRotations_6;
		NullCheck(L_105);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_106;
		L_106 = Dictionary_2_get_Item_mA2AB2D3E45850FF7B320638727DEA457D741491B(L_105, 1, Dictionary_2_get_Item_mA2AB2D3E45850FF7B320638727DEA457D741491B_RuntimeMethod_var);
		NullCheck(L_104);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_104, L_106, NULL);
		// rightEyeCamera.nearClipPlane = glassesSettings.headPoseCamera.nearClipPlane;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_107 = V_6;
		GlassesSettings_tDE2641921BB452EF823D032185D46CBFA9E5782B* L_108 = ___glassesSettings0;
		NullCheck(L_108);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_109 = L_108->___headPoseCamera_2;
		NullCheck(L_109);
		float L_110;
		L_110 = Camera_get_nearClipPlane_m5E8FAF84326E3192CB036BD29DCCDAF6A9861013(L_109, NULL);
		NullCheck(L_107);
		Camera_set_nearClipPlane_m78482B5E4E0CE4C195D9CE0332AA75B2D9CCDDF6(L_107, L_110, NULL);
		// rightEyeCamera.farClipPlane = glassesSettings.headPoseCamera.farClipPlane;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_111 = V_6;
		GlassesSettings_tDE2641921BB452EF823D032185D46CBFA9E5782B* L_112 = ___glassesSettings0;
		NullCheck(L_112);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_113 = L_112->___headPoseCamera_2;
		NullCheck(L_113);
		float L_114;
		L_114 = Camera_get_farClipPlane_m1D7128B85B5DB866F75FBE8CEBA48335716B67BD(L_113, NULL);
		NullCheck(L_111);
		Camera_set_farClipPlane_m84EF39B09573168734613481FD979BFF31C60139(L_111, L_114, NULL);
		// rightEyeCamera.fieldOfView = glassesSettings.headPoseCamera.fieldOfView;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_115 = V_6;
		GlassesSettings_tDE2641921BB452EF823D032185D46CBFA9E5782B* L_116 = ___glassesSettings0;
		NullCheck(L_116);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_117 = L_116->___headPoseCamera_2;
		NullCheck(L_117);
		float L_118;
		L_118 = Camera_get_fieldOfView_m9A93F17BBF89F496AE231C21817AFD1C1E833FBB(L_117, NULL);
		NullCheck(L_115);
		Camera_set_fieldOfView_m5AA9EED4D1603A1DEDBF883D9C42814B2BDEB777(L_115, L_118, NULL);
	}

IL_02af:
	{
		// glassesSettings.headPoseCamera.nearClipPlane = glassesSettings.nearClipPlane / scaleToUGBD_UWRLD;
		GlassesSettings_tDE2641921BB452EF823D032185D46CBFA9E5782B* L_119 = ___glassesSettings0;
		NullCheck(L_119);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_120 = L_119->___headPoseCamera_2;
		GlassesSettings_tDE2641921BB452EF823D032185D46CBFA9E5782B* L_121 = ___glassesSettings0;
		NullCheck(L_121);
		float L_122 = L_121->___nearClipPlane_3;
		float L_123 = V_0;
		NullCheck(L_120);
		Camera_set_nearClipPlane_m78482B5E4E0CE4C195D9CE0332AA75B2D9CCDDF6(L_120, ((float)(L_122/L_123)), NULL);
		// glassesSettings.headPoseCamera.farClipPlane = glassesSettings.farClipPlane / scaleToUGBD_UWRLD;
		GlassesSettings_tDE2641921BB452EF823D032185D46CBFA9E5782B* L_124 = ___glassesSettings0;
		NullCheck(L_124);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_125 = L_124->___headPoseCamera_2;
		GlassesSettings_tDE2641921BB452EF823D032185D46CBFA9E5782B* L_126 = ___glassesSettings0;
		NullCheck(L_126);
		float L_127 = L_126->___farClipPlane_4;
		float L_128 = V_0;
		NullCheck(L_125);
		Camera_set_farClipPlane_m84EF39B09573168734613481FD979BFF31C60139(L_125, ((float)(L_127/L_128)), NULL);
		// leftEyeCamera.nearClipPlane = glassesSettings.nearClipPlane / scaleToUGBD_UWRLD;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_129 = V_5;
		GlassesSettings_tDE2641921BB452EF823D032185D46CBFA9E5782B* L_130 = ___glassesSettings0;
		NullCheck(L_130);
		float L_131 = L_130->___nearClipPlane_3;
		float L_132 = V_0;
		NullCheck(L_129);
		Camera_set_nearClipPlane_m78482B5E4E0CE4C195D9CE0332AA75B2D9CCDDF6(L_129, ((float)(L_131/L_132)), NULL);
		// leftEyeCamera.farClipPlane = glassesSettings.farClipPlane / scaleToUGBD_UWRLD;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_133 = V_5;
		GlassesSettings_tDE2641921BB452EF823D032185D46CBFA9E5782B* L_134 = ___glassesSettings0;
		NullCheck(L_134);
		float L_135 = L_134->___farClipPlane_4;
		float L_136 = V_0;
		NullCheck(L_133);
		Camera_set_farClipPlane_m84EF39B09573168734613481FD979BFF31C60139(L_133, ((float)(L_135/L_136)), NULL);
		// rightEyeCamera.nearClipPlane = glassesSettings.nearClipPlane / scaleToUGBD_UWRLD;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_137 = V_6;
		GlassesSettings_tDE2641921BB452EF823D032185D46CBFA9E5782B* L_138 = ___glassesSettings0;
		NullCheck(L_138);
		float L_139 = L_138->___nearClipPlane_3;
		float L_140 = V_0;
		NullCheck(L_137);
		Camera_set_nearClipPlane_m78482B5E4E0CE4C195D9CE0332AA75B2D9CCDDF6(L_137, ((float)(L_139/L_140)), NULL);
		// rightEyeCamera.farClipPlane = glassesSettings.farClipPlane / scaleToUGBD_UWRLD;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_141 = V_6;
		GlassesSettings_tDE2641921BB452EF823D032185D46CBFA9E5782B* L_142 = ___glassesSettings0;
		NullCheck(L_142);
		float L_143 = L_142->___farClipPlane_4;
		float L_144 = V_0;
		NullCheck(L_141);
		Camera_set_farClipPlane_m84EF39B09573168734613481FD979BFF31C60139(L_141, ((float)(L_143/L_144)), NULL);
		// if (!TryGetFriendlyName(out glassesSettings.friendlyName))
		GlassesSettings_tDE2641921BB452EF823D032185D46CBFA9E5782B* L_145 = ___glassesSettings0;
		NullCheck(L_145);
		String_t** L_146 = (&L_145->___friendlyName_16);
		bool L_147;
		L_147 = GlassesCore_TryGetFriendlyName_m3E5DD0E082CABE4EBFAF0CF5F6281163AC20258A(__this, L_146, NULL);
		if (L_147)
		{
			goto IL_032a;
		}
	}
	{
		// glassesSettings.friendlyName = GlassesSettings.DEFAULT_FRIENDLY_NAME;
		GlassesSettings_tDE2641921BB452EF823D032185D46CBFA9E5782B* L_148 = ___glassesSettings0;
		il2cpp_codegen_runtime_class_init_inline(GlassesSettings_tDE2641921BB452EF823D032185D46CBFA9E5782B_il2cpp_TypeInfo_var);
		String_t* L_149 = ((GlassesSettings_tDE2641921BB452EF823D032185D46CBFA9E5782B_StaticFields*)il2cpp_codegen_static_fields_for(GlassesSettings_tDE2641921BB452EF823D032185D46CBFA9E5782B_il2cpp_TypeInfo_var))->___DEFAULT_FRIENDLY_NAME_15;
		NullCheck(L_148);
		L_148->___friendlyName_16 = L_149;
		Il2CppCodeGenWriteBarrier((void**)(&L_148->___friendlyName_16), (void*)L_149);
	}

IL_032a:
	{
		// }
		return;
	}
}
// System.Void TiltFive.Glasses/GlassesCore::SetDefaultPoseGameboardSpace(TiltFive.GlassesSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlassesCore_SetDefaultPoseGameboardSpace_mFCFE12832CE71D98A0DAB9BD2230A293509DC858 (GlassesCore_t5A44456D065E1327F5EAA342CF1373142192C837* __this, GlassesSettings_tDE2641921BB452EF823D032185D46CBFA9E5782B* ___settings0, const RuntimeMethod* method) 
{
	{
		// pose_GameboardSpace = new Pose(DEFAULT_GLASSES_POSITION_GAME_BOARD_SPACE, DEFAULT_GLASSES_ROTATION_GAME_BOARD_SPACE);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___DEFAULT_GLASSES_POSITION_GAME_BOARD_SPACE_7;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = __this->___DEFAULT_GLASSES_ROTATION_GAME_BOARD_SPACE_8;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Pose__ctor_m15CA45808A2BBF1956E836D22C387FAB80BED051((&L_2), L_0, L_1, /*hidden argument*/NULL);
		((TrackableCore_1_tBE6016DABBA8AFF5E8B98992E66F92F4B147EEC8*)__this)->___pose_GameboardSpace_0 = L_2;
		// }
		return;
	}
}
// System.Void TiltFive.Glasses/GlassesCore::SetPoseUnityWorldSpace(TiltFive.ScaleSettings,TiltFive.GameBoardSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlassesCore_SetPoseUnityWorldSpace_m36C72F3BD52EE885AD93E8798B049B484E052C2D (GlassesCore_t5A44456D065E1327F5EAA342CF1373142192C837* __this, ScaleSettings_t4FE94D7555EF25D5286239492DE97AF448542507* ___scaleSettings0, GameBoardSettings_tA53FDF5FE8B4D937F945DB659EF5A76243634A4B* ___gameBoardSettings1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackableCore_1_GameboardToWorldSpace_m90E48C3E34B43EE9AF8DFA2A469243417ED5E39B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// pose_UnityWorldSpace = GameboardToWorldSpace(pose_GameboardSpace, scaleSettings, gameBoardSettings);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_0 = ((TrackableCore_1_tBE6016DABBA8AFF5E8B98992E66F92F4B147EEC8*)__this)->___pose_GameboardSpace_0;
		ScaleSettings_t4FE94D7555EF25D5286239492DE97AF448542507* L_1 = ___scaleSettings0;
		GameBoardSettings_tA53FDF5FE8B4D937F945DB659EF5A76243634A4B* L_2 = ___gameBoardSettings1;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_3;
		L_3 = TrackableCore_1_GameboardToWorldSpace_m90E48C3E34B43EE9AF8DFA2A469243417ED5E39B(L_0, L_1, L_2, TrackableCore_1_GameboardToWorldSpace_m90E48C3E34B43EE9AF8DFA2A469243417ED5E39B_RuntimeMethod_var);
		((TrackableCore_1_tBE6016DABBA8AFF5E8B98992E66F92F4B147EEC8*)__this)->___pose_UnityWorldSpace_1 = L_3;
		// }
		return;
	}
}
// System.Boolean TiltFive.Glasses/GlassesCore::GetTrackingAvailability(TiltFive.GlassesSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GlassesCore_GetTrackingAvailability_m9E68D9DD3CED9482DBF74F060ED37D7D2DDBD262 (GlassesCore_t5A44456D065E1327F5EAA342CF1373142192C837* __this, GlassesSettings_tDE2641921BB452EF823D032185D46CBFA9E5782B* ___settings0, const RuntimeMethod* method) 
{
	{
		// return Display.GetGlassesAvailability();
		bool L_0;
		L_0 = Display_GetGlassesAvailability_mF1BF8B7E8413884C603712A158F02A30D2B797C2(NULL);
		return L_0;
	}
}
// System.Boolean TiltFive.Glasses/GlassesCore::TryGetPoseFromPlugin(UnityEngine.Pose&,TiltFive.GlassesSettings,TiltFive.ScaleSettings,TiltFive.GameBoardSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GlassesCore_TryGetPoseFromPlugin_m038C0C31EA9EF6EC22AA76A2C2D5EDE875CDE3CD (GlassesCore_t5A44456D065E1327F5EAA342CF1373142192C837* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* ___pose0, GlassesSettings_tDE2641921BB452EF823D032185D46CBFA9E5782B* ___settings1, ScaleSettings_t4FE94D7555EF25D5286239492DE97AF448542507* ___scaleSettings2, GameBoardSettings_tA53FDF5FE8B4D937F945DB659EF5A76243634A4B* ___gameBoardSettings3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackableCore_1_ConvertPosGBDToUGBD_m32A6871FF9CB8AF309B854D95085CA1E41C8BF12_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	T5_GlassesPose_tA745E39C2B88546A6934B1ADA0C2313BBBC5D6C1 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	T5_GlassesPose_tA745E39C2B88546A6934B1ADA0C2313BBBC5D6C1 V_6;
	memset((&V_6), 0, sizeof(V_6));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// Quaternion rotToDC_GBD = Quaternion.AngleAxis((-Mathf.PI / 2f) * Mathf.Rad2Deg, Vector3.right);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_right_m13B7C3EAA64DC921EC23346C56A5A597B5481FF5_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Quaternion_AngleAxis_m01A869DC10F976FAF493B66F15D6D6977BB61DA8((-90.0f), L_0, NULL);
		V_0 = L_1;
		// T5_GlassesPose glassesPose = new T5_GlassesPose {};
		il2cpp_codegen_initobj((&V_6), sizeof(T5_GlassesPose_tA745E39C2B88546A6934B1ADA0C2313BBBC5D6C1));
		T5_GlassesPose_tA745E39C2B88546A6934B1ADA0C2313BBBC5D6C1 L_2 = V_6;
		V_1 = L_2;
		// int result = 1;
		V_2 = 1;
	}
	try
	{// begin try (depth: 1)
		// result = NativePlugin.GetGlassesPose(ref glassesPose);
		int32_t L_3;
		L_3 = NativePlugin_GetGlassesPose_m44ADA79ECA1CDE6E888EAD91A4FBEC81C4B9D08D((&V_1), NULL);
		V_2 = L_3;
		// }
		goto IL_0038;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0027;
		}
		throw e;
	}

CATCH_0027:
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
		goto IL_0038;
	}// end catch (depth: 1)

IL_0038:
	{
		// if (result != 0) {
		int32_t L_6 = V_2;
		if (!L_6)
		{
			goto IL_0077;
		}
	}
	{
		// if (gameBoardSettings.currentGameBoard != null) {
		GameBoardSettings_tA53FDF5FE8B4D937F945DB659EF5A76243634A4B* L_7 = ___gameBoardSettings3;
		NullCheck(L_7);
		GameBoard_tA93C5A0FC9C6EDCE1B29BF1BCD616820EE60538A* L_8 = L_7->___currentGameBoard_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_9)
		{
			goto IL_0057;
		}
	}
	{
		// gameBoardSettings.currentGameBoard.GameboardType = GameboardType.GameboardType_None;
		GameBoardSettings_tA53FDF5FE8B4D937F945DB659EF5A76243634A4B* L_10 = ___gameBoardSettings3;
		NullCheck(L_10);
		GameBoard_tA93C5A0FC9C6EDCE1B29BF1BCD616820EE60538A* L_11 = L_10->___currentGameBoard_0;
		NullCheck(L_11);
		L_11->___GameboardType_10 = 1;
	}

IL_0057:
	{
		// pose = new Pose(DEFAULT_GLASSES_POSITION_GAME_BOARD_SPACE, DEFAULT_GLASSES_ROTATION_GAME_BOARD_SPACE);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_12 = ___pose0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = __this->___DEFAULT_GLASSES_POSITION_GAME_BOARD_SPACE_7;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = __this->___DEFAULT_GLASSES_ROTATION_GAME_BOARD_SPACE_8;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_15;
		memset((&L_15), 0, sizeof(L_15));
		Pose__ctor_m15CA45808A2BBF1956E836D22C387FAB80BED051((&L_15), L_13, L_14, /*hidden argument*/NULL);
		*(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*)L_12 = L_15;
		// isTracked = false;
		((TrackableCore_1_tBE6016DABBA8AFF5E8B98992E66F92F4B147EEC8*)__this)->___isTracked_2 = (bool)0;
		// return false;
		return (bool)0;
	}

IL_0077:
	{
		// if (gameBoardSettings.currentGameBoard != null) {
		GameBoardSettings_tA53FDF5FE8B4D937F945DB659EF5A76243634A4B* L_16 = ___gameBoardSettings3;
		NullCheck(L_16);
		GameBoard_tA93C5A0FC9C6EDCE1B29BF1BCD616820EE60538A* L_17 = L_16->___currentGameBoard_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_17, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_18)
		{
			goto IL_0098;
		}
	}
	{
		// gameBoardSettings.currentGameBoard.GameboardType = glassesPose.GameboardType;
		GameBoardSettings_tA53FDF5FE8B4D937F945DB659EF5A76243634A4B* L_19 = ___gameBoardSettings3;
		NullCheck(L_19);
		GameBoard_tA93C5A0FC9C6EDCE1B29BF1BCD616820EE60538A* L_20 = L_19->___currentGameBoard_0;
		T5_GlassesPose_tA745E39C2B88546A6934B1ADA0C2313BBBC5D6C1 L_21 = V_1;
		int32_t L_22 = L_21.___GameboardType_3;
		NullCheck(L_20);
		L_20->___GameboardType_10 = L_22;
	}

IL_0098:
	{
		// Quaternion rotToGLS_GBD = glassesPose.RotationToGLS_GBD;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_23;
		L_23 = T5_GlassesPose_get_RotationToGLS_GBD_mF27DCE1A8E9556EC8C81B817F6816F9CCA7C7C9E((&V_1), NULL);
		// Quaternion rotToGLS_DC = rotToGLS_GBD * Quaternion.Inverse(rotToDC_GBD);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_25;
		L_25 = Quaternion_Inverse_m7597DECDAD37194FAC86D1A11DCE3F0C7747F817(L_24, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26;
		L_26 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_23, L_25, NULL);
		V_3 = L_26;
		// Quaternion rotToUGBD_UGLS = new Quaternion(-rotToGLS_DC.x, -rotToGLS_DC.y, rotToGLS_DC.z, rotToGLS_DC.w);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_27 = V_3;
		float L_28 = L_27.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_29 = V_3;
		float L_30 = L_29.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_31 = V_3;
		float L_32 = L_31.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_33 = V_3;
		float L_34 = L_33.___w_3;
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&V_4), ((-L_28)), ((-L_30)), L_32, L_34, NULL);
		// Vector3 posOfUGLS_UGBD = ConvertPosGBDToUGBD(glassesPose.PosOfGLS_GBD);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = T5_GlassesPose_get_PosOfGLS_GBD_m723213ADF74954EC92CC2C1A05EDEF6DD1508F45((&V_1), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = TrackableCore_1_ConvertPosGBDToUGBD_m32A6871FF9CB8AF309B854D95085CA1E41C8BF12(L_35, TrackableCore_1_ConvertPosGBDToUGBD_m32A6871FF9CB8AF309B854D95085CA1E41C8BF12_RuntimeMethod_var);
		V_5 = L_36;
		// pose = new Pose(posOfUGLS_UGBD, rotToUGBD_UGLS);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_37 = ___pose0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38 = V_5;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_39 = V_4;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_40;
		memset((&L_40), 0, sizeof(L_40));
		Pose__ctor_m15CA45808A2BBF1956E836D22C387FAB80BED051((&L_40), L_38, L_39, /*hidden argument*/NULL);
		*(Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971*)L_37 = L_40;
		// isTracked = glassesPose.GameboardType != GameboardType.GameboardType_None;
		T5_GlassesPose_tA745E39C2B88546A6934B1ADA0C2313BBBC5D6C1 L_41 = V_1;
		int32_t L_42 = L_41.___GameboardType_3;
		((TrackableCore_1_tBE6016DABBA8AFF5E8B98992E66F92F4B147EEC8*)__this)->___isTracked_2 = (bool)((((int32_t)((((int32_t)L_42) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		// return result == 0;
		int32_t L_43 = V_2;
		return (bool)((((int32_t)L_43) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void TiltFive.Glasses/GlassesCore::SetDrivenObjectTransform(TiltFive.GlassesSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlassesCore_SetDrivenObjectTransform_m05EFEB3C0C618B5FE5BAB0950A7CE3A8BCB351E8 (GlassesCore_t5A44456D065E1327F5EAA342CF1373142192C837* __this, GlassesSettings_tDE2641921BB452EF823D032185D46CBFA9E5782B* ___settings0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// if(settings.headPoseCamera == null)
		GlassesSettings_tDE2641921BB452EF823D032185D46CBFA9E5782B* L_0 = ___settings0;
		NullCheck(L_0);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1 = L_0->___headPoseCamera_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// var glassesTransform = settings.headPoseCamera.transform;
		GlassesSettings_tDE2641921BB452EF823D032185D46CBFA9E5782B* L_3 = ___settings0;
		NullCheck(L_3);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4 = L_3->___headPoseCamera_2;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_4, NULL);
		V_0 = L_5;
		// if (!isTracked && settings.RejectUntrackedPositionData)
		bool L_6 = ((TrackableCore_1_tBE6016DABBA8AFF5E8B98992E66F92F4B147EEC8*)__this)->___isTracked_2;
		if (L_6)
		{
			goto IL_0082;
		}
	}
	{
		GlassesSettings_tDE2641921BB452EF823D032185D46CBFA9E5782B* L_7 = ___settings0;
		NullCheck(L_7);
		bool L_8 = ((TrackableSettings_t54076219B6A408E0FCC2EED6DAC35984CC69EC4F*)L_7)->___RejectUntrackedPositionData_0;
		if (!L_8)
		{
			goto IL_0082;
		}
	}
	{
		// switch (settings.FailureMode)
		GlassesSettings_tDE2641921BB452EF823D032185D46CBFA9E5782B* L_9 = ___settings0;
		NullCheck(L_9);
		int32_t L_10 = ((TrackableSettings_t54076219B6A408E0FCC2EED6DAC35984CC69EC4F*)L_9)->___FailureMode_1;
		V_1 = L_10;
		int32_t L_11 = V_1;
		switch (L_11)
		{
			case 0:
			{
				goto IL_0045;
			}
			case 1:
			{
				goto IL_009e;
			}
			case 2:
			{
				goto IL_005d;
			}
		}
	}
	{
		return;
	}

IL_0045:
	{
		// glassesTransform.SetPositionAndRotation(glassesTransform.position, pose_UnityWorldSpace.rotation);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = V_0;
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_15 = (&((TrackableCore_1_tBE6016DABBA8AFF5E8B98992E66F92F4B147EEC8*)__this)->___pose_UnityWorldSpace_1);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = L_15->___rotation_1;
		NullCheck(L_12);
		Transform_SetPositionAndRotation_m418859BF59086EEAA084FFD6F258A43FAB408F5A(L_12, L_14, L_16, NULL);
		// break;
		return;
	}

IL_005d:
	{
		// if (settings.usePreviewPose)
		GlassesSettings_tDE2641921BB452EF823D032185D46CBFA9E5782B* L_17 = ___settings0;
		NullCheck(L_17);
		bool L_18 = L_17->___usePreviewPose_13;
		if (!L_18)
		{
			goto IL_009e;
		}
	}
	{
		// glassesTransform.SetPositionAndRotation(
		//     settings.previewPose.position,
		//     settings.previewPose.rotation);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19 = V_0;
		GlassesSettings_tDE2641921BB452EF823D032185D46CBFA9E5782B* L_20 = ___settings0;
		NullCheck(L_20);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21 = L_20->___previewPose_14;
		NullCheck(L_21);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_21, NULL);
		GlassesSettings_tDE2641921BB452EF823D032185D46CBFA9E5782B* L_23 = ___settings0;
		NullCheck(L_23);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24 = L_23->___previewPose_14;
		NullCheck(L_24);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_25;
		L_25 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_24, NULL);
		NullCheck(L_19);
		Transform_SetPositionAndRotation_m418859BF59086EEAA084FFD6F258A43FAB408F5A(L_19, L_22, L_25, NULL);
		// break;
		return;
	}

IL_0082:
	{
		// glassesTransform.SetPositionAndRotation(pose_UnityWorldSpace.position, pose_UnityWorldSpace.rotation);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26 = V_0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_27 = (&((TrackableCore_1_tBE6016DABBA8AFF5E8B98992E66F92F4B147EEC8*)__this)->___pose_UnityWorldSpace_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = L_27->___position_0;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_29 = (&((TrackableCore_1_tBE6016DABBA8AFF5E8B98992E66F92F4B147EEC8*)__this)->___pose_UnityWorldSpace_1);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = L_29->___rotation_1;
		NullCheck(L_26);
		Transform_SetPositionAndRotation_m418859BF59086EEAA084FFD6F258A43FAB408F5A(L_26, L_28, L_30, NULL);
	}

IL_009e:
	{
		// }
		return;
	}
}
// System.Void TiltFive.Glasses/GlassesCore::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlassesCore__ctor_m336DEA36FBA50D9573ACA80174BECC181C8E2CB5 (GlassesCore_t5A44456D065E1327F5EAA342CF1373142192C837* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m72483D63C6D573D5D521C56A208CA861A52C5C23_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mB5D850FDC8B0579CEA642A0CA2FA0F5D267D517D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m5FF6DEE3F95C5AD37D359FF7C5EE1C034BDADD8E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m6FA1EC65AAC3BC14013AF23C315F35928E5CAB42_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA16E81E89B239343E2536E642AAFA7C7E560F2AA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tB850B26CB9CB2FDDA0FD474BA994D6AB9EF9C7AC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackableCore_1__ctor_m0A756B93F6040E5438F6B5BB9B07AE1C59967CF4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// public Dictionary<AREyes, Vector3> eyePositions = new Dictionary<AREyes, Vector3>()
		// {
		//     { AREyes.EYE_LEFT, new Vector3() },
		//     { AREyes.EYE_RIGHT, new Vector3() }
		// };
		Dictionary_2_tA16E81E89B239343E2536E642AAFA7C7E560F2AA* L_0 = (Dictionary_2_tA16E81E89B239343E2536E642AAFA7C7E560F2AA*)il2cpp_codegen_object_new(Dictionary_2_tA16E81E89B239343E2536E642AAFA7C7E560F2AA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m6FA1EC65AAC3BC14013AF23C315F35928E5CAB42(L_0, Dictionary_2__ctor_m6FA1EC65AAC3BC14013AF23C315F35928E5CAB42_RuntimeMethod_var);
		Dictionary_2_tA16E81E89B239343E2536E642AAFA7C7E560F2AA* L_1 = L_0;
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		NullCheck(L_1);
		Dictionary_2_Add_m72483D63C6D573D5D521C56A208CA861A52C5C23(L_1, 0, L_2, Dictionary_2_Add_m72483D63C6D573D5D521C56A208CA861A52C5C23_RuntimeMethod_var);
		Dictionary_2_tA16E81E89B239343E2536E642AAFA7C7E560F2AA* L_3 = L_1;
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		NullCheck(L_3);
		Dictionary_2_Add_m72483D63C6D573D5D521C56A208CA861A52C5C23(L_3, 1, L_4, Dictionary_2_Add_m72483D63C6D573D5D521C56A208CA861A52C5C23_RuntimeMethod_var);
		__this->___eyePositions_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___eyePositions_5), (void*)L_3);
		// public Dictionary<AREyes, Quaternion> eyeRotations = new Dictionary<AREyes, Quaternion>()
		// {
		//     { AREyes.EYE_LEFT, new Quaternion() },
		//     { AREyes.EYE_RIGHT, new Quaternion() }
		// };
		Dictionary_2_tB850B26CB9CB2FDDA0FD474BA994D6AB9EF9C7AC* L_5 = (Dictionary_2_tB850B26CB9CB2FDDA0FD474BA994D6AB9EF9C7AC*)il2cpp_codegen_object_new(Dictionary_2_tB850B26CB9CB2FDDA0FD474BA994D6AB9EF9C7AC_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Dictionary_2__ctor_m5FF6DEE3F95C5AD37D359FF7C5EE1C034BDADD8E(L_5, Dictionary_2__ctor_m5FF6DEE3F95C5AD37D359FF7C5EE1C034BDADD8E_RuntimeMethod_var);
		Dictionary_2_tB850B26CB9CB2FDDA0FD474BA994D6AB9EF9C7AC* L_6 = L_5;
		il2cpp_codegen_initobj((&V_1), sizeof(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7 = V_1;
		NullCheck(L_6);
		Dictionary_2_Add_mB5D850FDC8B0579CEA642A0CA2FA0F5D267D517D(L_6, 0, L_7, Dictionary_2_Add_mB5D850FDC8B0579CEA642A0CA2FA0F5D267D517D_RuntimeMethod_var);
		Dictionary_2_tB850B26CB9CB2FDDA0FD474BA994D6AB9EF9C7AC* L_8 = L_6;
		il2cpp_codegen_initobj((&V_1), sizeof(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9 = V_1;
		NullCheck(L_8);
		Dictionary_2_Add_mB5D850FDC8B0579CEA642A0CA2FA0F5D267D517D(L_8, 1, L_9, Dictionary_2_Add_mB5D850FDC8B0579CEA642A0CA2FA0F5D267D517D_RuntimeMethod_var);
		__this->___eyeRotations_6 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___eyeRotations_6), (void*)L_8);
		// private readonly Vector3 DEFAULT_GLASSES_POSITION_GAME_BOARD_SPACE = new Vector3(0f, 0.5f, -0.5f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_10), (0.0f), (0.5f), (-0.5f), /*hidden argument*/NULL);
		__this->___DEFAULT_GLASSES_POSITION_GAME_BOARD_SPACE_7 = L_10;
		// private readonly Quaternion DEFAULT_GLASSES_ROTATION_GAME_BOARD_SPACE = Quaternion.Euler(new Vector3(-45f, 0f, 0f));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_11), (-45.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		L_12 = Quaternion_Euler_m66E346161C9778DF8486DB4FE823D8F81A54AF1D_inline(L_11, NULL);
		__this->___DEFAULT_GLASSES_ROTATION_GAME_BOARD_SPACE_8 = L_12;
		TrackableCore_1__ctor_m0A756B93F6040E5438F6B5BB9B07AE1C59967CF4(__this, TrackableCore_1__ctor_m0A756B93F6040E5438F6B5BB9B07AE1C59967CF4_RuntimeMethod_var);
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
// TiltFive.DisplaySettings TiltFive.DisplaySettings::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DisplaySettings_t503F5A98E59CAAD41A2BED663812E6CEFF601464* DisplaySettings_get_Instance_mA2A26B3AB1CCF8E0136DC5A2A0E180F6E1BA1A39 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DisplaySettings_t503F5A98E59CAAD41A2BED663812E6CEFF601464_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(instance == null)
		DisplaySettings_t503F5A98E59CAAD41A2BED663812E6CEFF601464* L_0 = ((DisplaySettings_t503F5A98E59CAAD41A2BED663812E6CEFF601464_StaticFields*)il2cpp_codegen_static_fields_for(DisplaySettings_t503F5A98E59CAAD41A2BED663812E6CEFF601464_il2cpp_TypeInfo_var))->___instance_0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		// instance = new DisplaySettings();
		DisplaySettings_t503F5A98E59CAAD41A2BED663812E6CEFF601464* L_1 = (DisplaySettings_t503F5A98E59CAAD41A2BED663812E6CEFF601464*)il2cpp_codegen_object_new(DisplaySettings_t503F5A98E59CAAD41A2BED663812E6CEFF601464_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		DisplaySettings__ctor_m0758477DD03435B854E29BB86F3FD855FC528D96(L_1, NULL);
		((DisplaySettings_t503F5A98E59CAAD41A2BED663812E6CEFF601464_StaticFields*)il2cpp_codegen_static_fields_for(DisplaySettings_t503F5A98E59CAAD41A2BED663812E6CEFF601464_il2cpp_TypeInfo_var))->___instance_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((DisplaySettings_t503F5A98E59CAAD41A2BED663812E6CEFF601464_StaticFields*)il2cpp_codegen_static_fields_for(DisplaySettings_t503F5A98E59CAAD41A2BED663812E6CEFF601464_il2cpp_TypeInfo_var))->___instance_0), (void*)L_1);
	}

IL_0011:
	{
		// return instance;
		DisplaySettings_t503F5A98E59CAAD41A2BED663812E6CEFF601464* L_2 = ((DisplaySettings_t503F5A98E59CAAD41A2BED663812E6CEFF601464_StaticFields*)il2cpp_codegen_static_fields_for(DisplaySettings_t503F5A98E59CAAD41A2BED663812E6CEFF601464_il2cpp_TypeInfo_var))->___instance_0;
		return L_2;
	}
}
// System.Void TiltFive.DisplaySettings::set_Instance(TiltFive.DisplaySettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisplaySettings_set_Instance_m2EB100D04A51574166263E9545E25C4E3A2F1725 (DisplaySettings_t503F5A98E59CAAD41A2BED663812E6CEFF601464* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DisplaySettings_t503F5A98E59CAAD41A2BED663812E6CEFF601464_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set => instance = value;
		DisplaySettings_t503F5A98E59CAAD41A2BED663812E6CEFF601464* L_0 = ___value0;
		((DisplaySettings_t503F5A98E59CAAD41A2BED663812E6CEFF601464_StaticFields*)il2cpp_codegen_static_fields_for(DisplaySettings_t503F5A98E59CAAD41A2BED663812E6CEFF601464_il2cpp_TypeInfo_var))->___instance_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((DisplaySettings_t503F5A98E59CAAD41A2BED663812E6CEFF601464_StaticFields*)il2cpp_codegen_static_fields_for(DisplaySettings_t503F5A98E59CAAD41A2BED663812E6CEFF601464_il2cpp_TypeInfo_var))->___instance_0), (void*)L_0);
		return;
	}
}
// System.Void TiltFive.DisplaySettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisplaySettings__ctor_m0758477DD03435B854E29BB86F3FD855FC528D96 (DisplaySettings_t503F5A98E59CAAD41A2BED663812E6CEFF601464* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral296194A7F3371FF0BB4DAF2ADE9DDF82FF114DB9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly Vector2Int defaultDimensions = new Vector2Int(2432, 768);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline((&L_0), ((int32_t)2432), ((int32_t)768), /*hidden argument*/NULL);
		__this->___defaultDimensions_3 = L_0;
		// private DisplaySettings()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// if(!Display.GetDisplayDimensions(ref defaultDimensions))
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* L_1 = (&__this->___defaultDimensions_3);
		bool L_2;
		L_2 = Display_GetDisplayDimensions_m7E5E9BCB24E272B310D92093F3C13412ECB0E39B(L_1, NULL);
		if (L_2)
		{
			goto IL_0037;
		}
	}
	{
		// Log.Warn("Could not retrieve display settings from the plugin.");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3;
		L_3 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		Log_Warn_mF40461B896B66C649888EB8AA1E437748439C28B(_stringLiteral296194A7F3371FF0BB4DAF2ADE9DDF82FF114DB9, L_3, NULL);
	}

IL_0037:
	{
		// }
		return;
	}
}
// System.Int32 TiltFive.DisplaySettings::get_monoWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DisplaySettings_get_monoWidth_m8CFF0AA18A13F0FB1B891C4F13CD116B868AC777 (const RuntimeMethod* method) 
{
	{
		// public static int monoWidth => (stereoWidth / 2);
		int32_t L_0;
		L_0 = DisplaySettings_get_stereoWidth_mFB72CBBE4C8ED94C3BE971147713F462C115550F(NULL);
		return ((int32_t)(L_0/2));
	}
}
// System.Int32 TiltFive.DisplaySettings::get_stereoWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DisplaySettings_get_stereoWidth_mFB72CBBE4C8ED94C3BE971147713F462C115550F (const RuntimeMethod* method) 
{
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public static int stereoWidth => Instance.defaultDimensions.x;
		DisplaySettings_t503F5A98E59CAAD41A2BED663812E6CEFF601464* L_0;
		L_0 = DisplaySettings_get_Instance_mA2A26B3AB1CCF8E0136DC5A2A0E180F6E1BA1A39(NULL);
		NullCheck(L_0);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_1 = L_0->___defaultDimensions_3;
		V_0 = L_1;
		int32_t L_2;
		L_2 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&V_0), NULL);
		return L_2;
	}
}
// System.Int32 TiltFive.DisplaySettings::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DisplaySettings_get_height_m25F1F563259A368FDF6ABF1300D55A18046DE131 (const RuntimeMethod* method) 
{
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public static int height => Instance.defaultDimensions.y;
		DisplaySettings_t503F5A98E59CAAD41A2BED663812E6CEFF601464* L_0;
		L_0 = DisplaySettings_get_Instance_mA2A26B3AB1CCF8E0136DC5A2A0E180F6E1BA1A39(NULL);
		NullCheck(L_0);
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_1 = L_0->___defaultDimensions_3;
		V_0 = L_1;
		int32_t L_2;
		L_2 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&V_0), NULL);
		return L_2;
	}
}
// System.Single TiltFive.DisplaySettings::get_monoWidthToHeightRatio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DisplaySettings_get_monoWidthToHeightRatio_m81B572B64852E0F4618195121F382193B67E67FA (const RuntimeMethod* method) 
{
	{
		// public static float monoWidthToHeightRatio => (float) monoWidth / height;
		int32_t L_0;
		L_0 = DisplaySettings_get_monoWidth_m8CFF0AA18A13F0FB1B891C4F13CD116B868AC777(NULL);
		int32_t L_1;
		L_1 = DisplaySettings_get_height_m25F1F563259A368FDF6ABF1300D55A18046DE131(NULL);
		return ((float)(((float)L_0)/((float)L_1)));
	}
}
// System.Single TiltFive.DisplaySettings::get_stereoWidthToHeightRatio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DisplaySettings_get_stereoWidthToHeightRatio_mA30EC65254055C1694F30E279F3494DA8DB3BB74 (const RuntimeMethod* method) 
{
	{
		// public static float stereoWidthToHeightRatio => (float) stereoWidth / height;
		int32_t L_0;
		L_0 = DisplaySettings_get_stereoWidth_mFB72CBBE4C8ED94C3BE971147713F462C115550F(NULL);
		int32_t L_1;
		L_1 = DisplaySettings_get_height_m25F1F563259A368FDF6ABF1300D55A18046DE131(NULL);
		return ((float)(((float)L_0)/((float)L_1)));
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
// UnityEngine.Camera TiltFive.SplitStereoCamera::get_headPoseCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* SplitStereoCamera_get_headPoseCamera_m25FFE8B09223C391E92ABBA1DCDCB9CF19F2E0D2 (SplitStereoCamera_t8E4D30C6028706D80A47E65C3110D750E000BEF5* __this, const RuntimeMethod* method) 
{
	{
		// public Camera headPoseCamera { get { return theHeadPoseCamera; } }
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = __this->___theHeadPoseCamera_5;
		return L_0;
	}
}
// UnityEngine.GameObject TiltFive.SplitStereoCamera::get_headPose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* SplitStereoCamera_get_headPose_m08621D0518D30AD523CE3325B2E3D14D561DE2C1 (SplitStereoCamera_t8E4D30C6028706D80A47E65C3110D750E000BEF5* __this, const RuntimeMethod* method) 
{
	{
		// public GameObject headPose { get { return theHeadPoseCamera.gameObject; } }
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = __this->___theHeadPoseCamera_5;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		return L_1;
	}
}
// UnityEngine.Camera TiltFive.SplitStereoCamera::get_leftEyeCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* SplitStereoCamera_get_leftEyeCamera_mD755856E8116BC9B7230773B9B5C4B05DFA62EA7 (SplitStereoCamera_t8E4D30C6028706D80A47E65C3110D750E000BEF5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mD12D2AC2D4908A10C030F1C9855E2190EBD64F3A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Camera leftEyeCamera { get { return eyeCameras[AREyes.EYE_LEFT]; } }
		Dictionary_2_t71BFAA343ADBECF70319A33149AC4651F23EC3F6* L_0 = __this->___eyeCameras_11;
		NullCheck(L_0);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1;
		L_1 = Dictionary_2_get_Item_mD12D2AC2D4908A10C030F1C9855E2190EBD64F3A(L_0, 0, Dictionary_2_get_Item_mD12D2AC2D4908A10C030F1C9855E2190EBD64F3A_RuntimeMethod_var);
		return L_1;
	}
}
// UnityEngine.Camera TiltFive.SplitStereoCamera::get_rightEyeCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* SplitStereoCamera_get_rightEyeCamera_mE638B3001D0EA00B89D872EECA44372505C656E3 (SplitStereoCamera_t8E4D30C6028706D80A47E65C3110D750E000BEF5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mD12D2AC2D4908A10C030F1C9855E2190EBD64F3A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Camera rightEyeCamera { get { return eyeCameras[AREyes.EYE_RIGHT]; } }
		Dictionary_2_t71BFAA343ADBECF70319A33149AC4651F23EC3F6* L_0 = __this->___eyeCameras_11;
		NullCheck(L_0);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1;
		L_1 = Dictionary_2_get_Item_mD12D2AC2D4908A10C030F1C9855E2190EBD64F3A(L_0, 1, Dictionary_2_get_Item_mD12D2AC2D4908A10C030F1C9855E2190EBD64F3A_RuntimeMethod_var);
		return L_1;
	}
}
// System.Single TiltFive.SplitStereoCamera::get_fieldOfView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SplitStereoCamera_get_fieldOfView_m241BB535223F7416B2FC588B80F7E5F030FF9A9E (SplitStereoCamera_t8E4D30C6028706D80A47E65C3110D750E000BEF5* __this, const RuntimeMethod* method) 
{
	{
		// get { return headPoseCamera.fieldOfView; }
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = SplitStereoCamera_get_headPoseCamera_m25FFE8B09223C391E92ABBA1DCDCB9CF19F2E0D2_inline(__this, NULL);
		NullCheck(L_0);
		float L_1;
		L_1 = Camera_get_fieldOfView_m9A93F17BBF89F496AE231C21817AFD1C1E833FBB(L_0, NULL);
		return L_1;
	}
}
// System.Void TiltFive.SplitStereoCamera::set_fieldOfView(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplitStereoCamera_set_fieldOfView_m4959FC28833166D5E49279E833DA69A9E8B4EBDB (SplitStereoCamera_t8E4D30C6028706D80A47E65C3110D750E000BEF5* __this, float ___value0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// set { rightEyeCamera.fieldOfView = leftEyeCamera.fieldOfView = headPoseCamera.fieldOfView = value; }
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = SplitStereoCamera_get_rightEyeCamera_mE638B3001D0EA00B89D872EECA44372505C656E3(__this, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1;
		L_1 = SplitStereoCamera_get_leftEyeCamera_mD755856E8116BC9B7230773B9B5C4B05DFA62EA7(__this, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2;
		L_2 = SplitStereoCamera_get_headPoseCamera_m25FFE8B09223C391E92ABBA1DCDCB9CF19F2E0D2_inline(__this, NULL);
		float L_3 = ___value0;
		float L_4 = L_3;
		V_1 = L_4;
		NullCheck(L_2);
		Camera_set_fieldOfView_m5AA9EED4D1603A1DEDBF883D9C42814B2BDEB777(L_2, L_4, NULL);
		float L_5 = V_1;
		float L_6 = L_5;
		V_0 = L_6;
		NullCheck(L_1);
		Camera_set_fieldOfView_m5AA9EED4D1603A1DEDBF883D9C42814B2BDEB777(L_1, L_6, NULL);
		float L_7 = V_0;
		NullCheck(L_0);
		Camera_set_fieldOfView_m5AA9EED4D1603A1DEDBF883D9C42814B2BDEB777(L_0, L_7, NULL);
		// set { rightEyeCamera.fieldOfView = leftEyeCamera.fieldOfView = headPoseCamera.fieldOfView = value; }
		return;
	}
}
// System.Single TiltFive.SplitStereoCamera::get_nearClipPlane()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SplitStereoCamera_get_nearClipPlane_m992F20F02B97A31870D3A8454A1642B37B5E7F4D (SplitStereoCamera_t8E4D30C6028706D80A47E65C3110D750E000BEF5* __this, const RuntimeMethod* method) 
{
	{
		// get { return headPoseCamera.nearClipPlane; }
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = SplitStereoCamera_get_headPoseCamera_m25FFE8B09223C391E92ABBA1DCDCB9CF19F2E0D2_inline(__this, NULL);
		NullCheck(L_0);
		float L_1;
		L_1 = Camera_get_nearClipPlane_m5E8FAF84326E3192CB036BD29DCCDAF6A9861013(L_0, NULL);
		return L_1;
	}
}
// System.Void TiltFive.SplitStereoCamera::set_nearClipPlane(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplitStereoCamera_set_nearClipPlane_m8535E1281C6B8CEB7062C7149BA567B9A08AE45D (SplitStereoCamera_t8E4D30C6028706D80A47E65C3110D750E000BEF5* __this, float ___value0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// set { rightEyeCamera.nearClipPlane = leftEyeCamera.nearClipPlane = headPoseCamera.nearClipPlane = value; }
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = SplitStereoCamera_get_rightEyeCamera_mE638B3001D0EA00B89D872EECA44372505C656E3(__this, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1;
		L_1 = SplitStereoCamera_get_leftEyeCamera_mD755856E8116BC9B7230773B9B5C4B05DFA62EA7(__this, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2;
		L_2 = SplitStereoCamera_get_headPoseCamera_m25FFE8B09223C391E92ABBA1DCDCB9CF19F2E0D2_inline(__this, NULL);
		float L_3 = ___value0;
		float L_4 = L_3;
		V_1 = L_4;
		NullCheck(L_2);
		Camera_set_nearClipPlane_m78482B5E4E0CE4C195D9CE0332AA75B2D9CCDDF6(L_2, L_4, NULL);
		float L_5 = V_1;
		float L_6 = L_5;
		V_0 = L_6;
		NullCheck(L_1);
		Camera_set_nearClipPlane_m78482B5E4E0CE4C195D9CE0332AA75B2D9CCDDF6(L_1, L_6, NULL);
		float L_7 = V_0;
		NullCheck(L_0);
		Camera_set_nearClipPlane_m78482B5E4E0CE4C195D9CE0332AA75B2D9CCDDF6(L_0, L_7, NULL);
		// set { rightEyeCamera.nearClipPlane = leftEyeCamera.nearClipPlane = headPoseCamera.nearClipPlane = value; }
		return;
	}
}
// System.Single TiltFive.SplitStereoCamera::get_farClipPlane()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SplitStereoCamera_get_farClipPlane_m206F4D8AC9DF378343A654075F9E4925078AF808 (SplitStereoCamera_t8E4D30C6028706D80A47E65C3110D750E000BEF5* __this, const RuntimeMethod* method) 
{
	{
		// get { return headPoseCamera.farClipPlane; }
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = SplitStereoCamera_get_headPoseCamera_m25FFE8B09223C391E92ABBA1DCDCB9CF19F2E0D2_inline(__this, NULL);
		NullCheck(L_0);
		float L_1;
		L_1 = Camera_get_farClipPlane_m1D7128B85B5DB866F75FBE8CEBA48335716B67BD(L_0, NULL);
		return L_1;
	}
}
// System.Void TiltFive.SplitStereoCamera::set_farClipPlane(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplitStereoCamera_set_farClipPlane_mF8000FFEDCA48D3C47A2364330D396C41B120AFC (SplitStereoCamera_t8E4D30C6028706D80A47E65C3110D750E000BEF5* __this, float ___value0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// set { rightEyeCamera.farClipPlane = leftEyeCamera.farClipPlane = headPoseCamera.farClipPlane = value; }
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = SplitStereoCamera_get_rightEyeCamera_mE638B3001D0EA00B89D872EECA44372505C656E3(__this, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1;
		L_1 = SplitStereoCamera_get_leftEyeCamera_mD755856E8116BC9B7230773B9B5C4B05DFA62EA7(__this, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2;
		L_2 = SplitStereoCamera_get_headPoseCamera_m25FFE8B09223C391E92ABBA1DCDCB9CF19F2E0D2_inline(__this, NULL);
		float L_3 = ___value0;
		float L_4 = L_3;
		V_1 = L_4;
		NullCheck(L_2);
		Camera_set_farClipPlane_m84EF39B09573168734613481FD979BFF31C60139(L_2, L_4, NULL);
		float L_5 = V_1;
		float L_6 = L_5;
		V_0 = L_6;
		NullCheck(L_1);
		Camera_set_farClipPlane_m84EF39B09573168734613481FD979BFF31C60139(L_1, L_6, NULL);
		float L_7 = V_0;
		NullCheck(L_0);
		Camera_set_farClipPlane_m84EF39B09573168734613481FD979BFF31C60139(L_0, L_7, NULL);
		// set { rightEyeCamera.farClipPlane = leftEyeCamera.farClipPlane = headPoseCamera.farClipPlane = value; }
		return;
	}
}
// System.Single TiltFive.SplitStereoCamera::get_aspectRatio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SplitStereoCamera_get_aspectRatio_m7A701E6123BF8C9C00801B5BA12CE464F5B44A42 (SplitStereoCamera_t8E4D30C6028706D80A47E65C3110D750E000BEF5* __this, const RuntimeMethod* method) 
{
	{
		// get { return headPoseCamera.aspect; }
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = SplitStereoCamera_get_headPoseCamera_m25FFE8B09223C391E92ABBA1DCDCB9CF19F2E0D2_inline(__this, NULL);
		NullCheck(L_0);
		float L_1;
		L_1 = Camera_get_aspect_m48BF8820EA2D55BE0D154BC5546819FB65BE257D(L_0, NULL);
		return L_1;
	}
}
// System.Void TiltFive.SplitStereoCamera::set_aspectRatio(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplitStereoCamera_set_aspectRatio_mFA0A3E0392BD2B7C0DBD4475C30BD2775256CC92 (SplitStereoCamera_t8E4D30C6028706D80A47E65C3110D750E000BEF5* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// headPoseCamera.aspect = value;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = SplitStereoCamera_get_headPoseCamera_m25FFE8B09223C391E92ABBA1DCDCB9CF19F2E0D2_inline(__this, NULL);
		float L_1 = ___value0;
		NullCheck(L_0);
		Camera_set_aspect_m537F21B48FDD5C060DFF9D87F34F4FB2B0F9BEB6(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void TiltFive.SplitStereoCamera::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplitStereoCamera_Awake_m3591BDDE8AA73A50363F565ACEC9FF998CB31B90 (SplitStereoCamera_t8E4D30C6028706D80A47E65C3110D750E000BEF5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_TryGetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m1D22E7CA60B7DA94499EFF8D98588B2BD8950882_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_TryGetComponent_TisSplitStereoCamera_t8E4D30C6028706D80A47E65C3110D750E000BEF5_m8DBD7D4763F7BC903D35081EDA4C58AEFDBF5463_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m0933BC50E883CDEF6FA83FE190DA37CCB2802142_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral524C40172C0C622B2CEECBA355142D3901A5CA29);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5EC628ADCF7BC821327A635416F1EEC3EBDBDAC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9040D1740D2816E7D1238AE8C1807B29CB5FF992);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral94E767E32A138E288F6E441E48373398C260CF1F);
		s_Il2CppMethodInitialized = true;
	}
	SplitStereoCamera_t8E4D30C6028706D80A47E65C3110D750E000BEF5* V_0 = NULL;
	{
		// if(transform.parent.TryGetComponent<SplitStereoCamera>(out var parentSplitStereoCam))
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Component_TryGetComponent_TisSplitStereoCamera_t8E4D30C6028706D80A47E65C3110D750E000BEF5_m8DBD7D4763F7BC903D35081EDA4C58AEFDBF5463(L_1, (&V_0), Component_TryGetComponent_TisSplitStereoCamera_t8E4D30C6028706D80A47E65C3110D750E000BEF5_m8DBD7D4763F7BC903D35081EDA4C58AEFDBF5463_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// Destroy(this);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(__this, NULL);
		// return;
		return;
	}

IL_001b:
	{
		// if (!this.TryGetComponent<Camera>(out theHeadPoseCamera))
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184** L_3 = (&__this->___theHeadPoseCamera_5);
		bool L_4;
		L_4 = Component_TryGetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m1D22E7CA60B7DA94499EFF8D98588B2BD8950882(__this, L_3, Component_TryGetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m1D22E7CA60B7DA94499EFF8D98588B2BD8950882_RuntimeMethod_var);
		if (L_4)
		{
			goto IL_0062;
		}
	}
	{
		// theHeadPoseCamera = gameObject.AddComponent<Camera>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_5);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_6;
		L_6 = GameObject_AddComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m0933BC50E883CDEF6FA83FE190DA37CCB2802142(L_5, GameObject_AddComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m0933BC50E883CDEF6FA83FE190DA37CCB2802142_RuntimeMethod_var);
		__this->___theHeadPoseCamera_5 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___theHeadPoseCamera_5), (void*)L_6);
		// headPoseCamera.name = HEAD_CAMERA_NAME;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_7;
		L_7 = SplitStereoCamera_get_headPoseCamera_m25FFE8B09223C391E92ABBA1DCDCB9CF19F2E0D2_inline(__this, NULL);
		NullCheck(L_7);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_7, _stringLiteral94E767E32A138E288F6E441E48373398C260CF1F, NULL);
		// Log.Warn("Runtime AddComponent<Camera> to GameObject.name={0}", HEAD_CAMERA_NAME);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_8;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteral94E767E32A138E288F6E441E48373398C260CF1F);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteral94E767E32A138E288F6E441E48373398C260CF1F);
		Log_Warn_mF40461B896B66C649888EB8AA1E437748439C28B(_stringLiteral5EC628ADCF7BC821327A635416F1EEC3EBDBDAC7, L_9, NULL);
	}

IL_0062:
	{
		// headPoseCamera.enabled = true;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_10;
		L_10 = SplitStereoCamera_get_headPoseCamera_m25FFE8B09223C391E92ABBA1DCDCB9CF19F2E0D2_inline(__this, NULL);
		NullCheck(L_10);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_10, (bool)1, NULL);
		// InstantiateEyeCameras(out leftEye, out rightEye);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** L_11 = (&__this->___leftEye_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** L_12 = (&__this->___rightEye_9);
		SplitStereoCamera_InstantiateEyeCameras_mFEC7559CFCC5A7253143A2874C1B19E63F95F680(__this, L_11, L_12, NULL);
		// ConfigureEyeCameras();
		SplitStereoCamera_ConfigureEyeCameras_mBA06BAFAB9613BC9F1D59BEAB79224988D291A00(__this, NULL);
		// displayBlitShader = new Material(Shader.Find(SHADER_DISPLAY_BLIT));
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_13;
		L_13 = Shader_Find_mFF2A8FC042B9CFAA9800679CA674D52859BF3A72(_stringLiteral524C40172C0C622B2CEECBA355142D3901A5CA29, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_14 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_14, L_13, NULL);
		__this->___displayBlitShader_16 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___displayBlitShader_16), (void*)L_14);
		// if (null == displayBlitShader)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_15 = __this->___displayBlitShader_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, L_15, NULL);
		if (!L_16)
		{
			goto IL_00c1;
		}
	}
	{
		// Log.Error("Failed to load Shader '{0}'", SHADER_DISPLAY_BLIT);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18 = L_17;
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, _stringLiteral524C40172C0C622B2CEECBA355142D3901A5CA29);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteral524C40172C0C622B2CEECBA355142D3901A5CA29);
		Log_Error_mFAEE822C890E48138381AB6D607FA252E0245A00(_stringLiteral9040D1740D2816E7D1238AE8C1807B29CB5FF992, L_18, NULL);
	}

IL_00c1:
	{
		// SyncFields(headPoseCamera);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_19;
		L_19 = SplitStereoCamera_get_headPoseCamera_m25FFE8B09223C391E92ABBA1DCDCB9CF19F2E0D2_inline(__this, NULL);
		SplitStereoCamera_SyncFields_m78AE7FD595C86EB4F9BE716ABC85195A45AA4ACD(__this, L_19, NULL);
		// SyncTransform();
		SplitStereoCamera_SyncTransform_m3E18301451179106625BAFE9B1F58242167A8331(__this, NULL);
		// ShowHideCameras();
		SplitStereoCamera_ShowHideCameras_m56BA44E754AA299E3936CC274F07307F23E92FEA(__this, NULL);
		// }
		return;
	}
}
// System.Void TiltFive.SplitStereoCamera::InstantiateEyeCameras(UnityEngine.GameObject&,UnityEngine.GameObject&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplitStereoCamera_InstantiateEyeCameras_mFEC7559CFCC5A7253143A2874C1B19E63F95F680 (SplitStereoCamera_t8E4D30C6028706D80A47E65C3110D750E000BEF5* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** ___leftEye0, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** ___rightEye1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m54E7A1A8089213247DE94390576F98DAE27369BE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m887DD9E8844786738857F4A68C25C7AADC55FFA0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral114F57F23D9530272C53997D90AD8B77A569C82D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A9F16795C5361CAF64806CC119896915C20EA07);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B2B90BE3CA58B512008E85C5FB2979D34A00090);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9DDC23D135EF4B7633EAB47AB6F63B349AFB3082);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		// GameObject placeholder = new GameObject("Placeholder");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_0, _stringLiteral1A9F16795C5361CAF64806CC119896915C20EA07, NULL);
		V_0 = L_0;
		// placeholder.transform.parent = headPose.transform.parent;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = V_0;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = SplitStereoCamera_get_headPose_m08621D0518D30AD523CE3325B2E3D14D561DE2C1(__this, NULL);
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_4, NULL);
		NullCheck(L_2);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_2, L_5, NULL);
		goto IL_0044;
	}

IL_0028:
	{
		// headPose.transform.GetChild(0).parent = placeholder.transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = SplitStereoCamera_get_headPose_m08621D0518D30AD523CE3325B2E3D14D561DE2C1(__this, NULL);
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_7, 0, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = V_0;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_9, NULL);
		NullCheck(L_8);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_8, L_10, NULL);
	}

IL_0044:
	{
		// while(headPose.transform.childCount > 0)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = SplitStereoCamera_get_headPose_m08621D0518D30AD523CE3325B2E3D14D561DE2C1(__this, NULL);
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_11, NULL);
		NullCheck(L_12);
		int32_t L_13;
		L_13 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_12, NULL);
		if ((((int32_t)L_13) > ((int32_t)0)))
		{
			goto IL_0028;
		}
	}
	{
		// leftEye = GameObject.Find(LEFT_EYE_CAMERA_NAME);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** L_14 = ___leftEye0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15;
		L_15 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral4B2B90BE3CA58B512008E85C5FB2979D34A00090, NULL);
		*((RuntimeObject**)L_14) = (RuntimeObject*)L_15;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_14, (void*)(RuntimeObject*)L_15);
		// if (null != leftEye)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** L_16 = ___leftEye0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = *((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F**)L_16);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, L_17, NULL);
		if (!L_18)
		{
			goto IL_008f;
		}
	}
	{
		// Destroy(leftEye);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** L_19 = ___leftEye0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = *((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F**)L_19);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_20, NULL);
		// leftEye = null;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** L_21 = ___leftEye0;
		*((RuntimeObject**)L_21) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_21, (void*)(RuntimeObject*)NULL);
		// Log.Warn("Runtime replacement of Scene's pre-existing GameObject.name={0}", LEFT_EYE_CAMERA_NAME);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_22 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_23 = L_22;
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, _stringLiteral4B2B90BE3CA58B512008E85C5FB2979D34A00090);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteral4B2B90BE3CA58B512008E85C5FB2979D34A00090);
		Log_Warn_mF40461B896B66C649888EB8AA1E437748439C28B(_stringLiteral114F57F23D9530272C53997D90AD8B77A569C82D, L_23, NULL);
	}

IL_008f:
	{
		// leftEye = Instantiate(headPose, headPose.transform.position, headPose.transform.rotation, headPose.transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** L_24 = ___leftEye0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25;
		L_25 = SplitStereoCamera_get_headPose_m08621D0518D30AD523CE3325B2E3D14D561DE2C1(__this, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26;
		L_26 = SplitStereoCamera_get_headPose_m08621D0518D30AD523CE3325B2E3D14D561DE2C1(__this, NULL);
		NullCheck(L_26);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_26, NULL);
		NullCheck(L_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_27, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29;
		L_29 = SplitStereoCamera_get_headPose_m08621D0518D30AD523CE3325B2E3D14D561DE2C1(__this, NULL);
		NullCheck(L_29);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_29, NULL);
		NullCheck(L_30);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_31;
		L_31 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_30, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32;
		L_32 = SplitStereoCamera_get_headPose_m08621D0518D30AD523CE3325B2E3D14D561DE2C1(__this, NULL);
		NullCheck(L_32);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33;
		L_33 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_32, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_34;
		L_34 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m887DD9E8844786738857F4A68C25C7AADC55FFA0(L_25, L_28, L_31, L_33, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m887DD9E8844786738857F4A68C25C7AADC55FFA0_RuntimeMethod_var);
		*((RuntimeObject**)L_24) = (RuntimeObject*)L_34;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_24, (void*)(RuntimeObject*)L_34);
		// leftEye.transform.parent = placeholder.transform;   // Necessary to prevent the left eye camera from being cloned
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** L_35 = ___leftEye0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36 = *((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F**)L_35);
		NullCheck(L_36);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37;
		L_37 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_36, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_38 = V_0;
		NullCheck(L_38);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_39;
		L_39 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_38, NULL);
		NullCheck(L_37);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_37, L_39, NULL);
		// leftEye.name = LEFT_EYE_CAMERA_NAME;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** L_40 = ___leftEye0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_41 = *((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F**)L_40);
		NullCheck(L_41);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_41, _stringLiteral4B2B90BE3CA58B512008E85C5FB2979D34A00090, NULL);
		// eyeCameras[AREyes.EYE_LEFT] = leftEye.GetComponent<Camera>();
		Dictionary_2_t71BFAA343ADBECF70319A33149AC4651F23EC3F6* L_42 = __this->___eyeCameras_11;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** L_43 = ___leftEye0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_44 = *((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F**)L_43);
		NullCheck(L_44);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_45;
		L_45 = GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6(L_44, GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6_RuntimeMethod_var);
		NullCheck(L_42);
		Dictionary_2_set_Item_m54E7A1A8089213247DE94390576F98DAE27369BE(L_42, 0, L_45, Dictionary_2_set_Item_m54E7A1A8089213247DE94390576F98DAE27369BE_RuntimeMethod_var);
		// rightEye = GameObject.Find(RIGHT_EYE_CAMERA_NAME);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** L_46 = ___rightEye1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_47;
		L_47 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral9DDC23D135EF4B7633EAB47AB6F63B349AFB3082, NULL);
		*((RuntimeObject**)L_46) = (RuntimeObject*)L_47;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_46, (void*)(RuntimeObject*)L_47);
		// if (null != rightEye)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** L_48 = ___rightEye1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_49 = *((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F**)L_48);
		bool L_50;
		L_50 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, L_49, NULL);
		if (!L_50)
		{
			goto IL_0130;
		}
	}
	{
		// Destroy(rightEye);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** L_51 = ___rightEye1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_52 = *((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F**)L_51);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_52, NULL);
		// rightEye = null;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** L_53 = ___rightEye1;
		*((RuntimeObject**)L_53) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_53, (void*)(RuntimeObject*)NULL);
		// Log.Warn("Runtime replacement of Scene's pre-existing GameObject.name={0}", RIGHT_EYE_CAMERA_NAME);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_54 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_55 = L_54;
		NullCheck(L_55);
		ArrayElementTypeCheck (L_55, _stringLiteral9DDC23D135EF4B7633EAB47AB6F63B349AFB3082);
		(L_55)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteral9DDC23D135EF4B7633EAB47AB6F63B349AFB3082);
		Log_Warn_mF40461B896B66C649888EB8AA1E437748439C28B(_stringLiteral114F57F23D9530272C53997D90AD8B77A569C82D, L_55, NULL);
	}

IL_0130:
	{
		// rightEye = Instantiate(headPose, headPose.transform.position, headPose.transform.rotation, headPose.transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** L_56 = ___rightEye1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_57;
		L_57 = SplitStereoCamera_get_headPose_m08621D0518D30AD523CE3325B2E3D14D561DE2C1(__this, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_58;
		L_58 = SplitStereoCamera_get_headPose_m08621D0518D30AD523CE3325B2E3D14D561DE2C1(__this, NULL);
		NullCheck(L_58);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_59;
		L_59 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_58, NULL);
		NullCheck(L_59);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60;
		L_60 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_59, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_61;
		L_61 = SplitStereoCamera_get_headPose_m08621D0518D30AD523CE3325B2E3D14D561DE2C1(__this, NULL);
		NullCheck(L_61);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_62;
		L_62 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_61, NULL);
		NullCheck(L_62);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_63;
		L_63 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_62, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_64;
		L_64 = SplitStereoCamera_get_headPose_m08621D0518D30AD523CE3325B2E3D14D561DE2C1(__this, NULL);
		NullCheck(L_64);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_65;
		L_65 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_64, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_66;
		L_66 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m887DD9E8844786738857F4A68C25C7AADC55FFA0(L_57, L_60, L_63, L_65, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m887DD9E8844786738857F4A68C25C7AADC55FFA0_RuntimeMethod_var);
		*((RuntimeObject**)L_56) = (RuntimeObject*)L_66;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_56, (void*)(RuntimeObject*)L_66);
		// rightEye.transform.parent = placeholder.transform;  // Unnecessary, but makes the hierarchy slightly tidier by
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** L_67 = ___rightEye1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_68 = *((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F**)L_67);
		NullCheck(L_68);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_69;
		L_69 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_68, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_70 = V_0;
		NullCheck(L_70);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_71;
		L_71 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_70, NULL);
		NullCheck(L_69);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_69, L_71, NULL);
		// rightEye.name = RIGHT_EYE_CAMERA_NAME;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** L_72 = ___rightEye1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_73 = *((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F**)L_72);
		NullCheck(L_73);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_73, _stringLiteral9DDC23D135EF4B7633EAB47AB6F63B349AFB3082, NULL);
		// eyeCameras[AREyes.EYE_RIGHT] = rightEye.GetComponent<Camera>();
		Dictionary_2_t71BFAA343ADBECF70319A33149AC4651F23EC3F6* L_74 = __this->___eyeCameras_11;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** L_75 = ___rightEye1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_76 = *((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F**)L_75);
		NullCheck(L_76);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_77;
		L_77 = GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6(L_76, GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6_RuntimeMethod_var);
		NullCheck(L_74);
		Dictionary_2_set_Item_m54E7A1A8089213247DE94390576F98DAE27369BE(L_74, 1, L_77, Dictionary_2_set_Item_m54E7A1A8089213247DE94390576F98DAE27369BE_RuntimeMethod_var);
		goto IL_01b7;
	}

IL_019b:
	{
		// placeholder.transform.GetChild(0).parent = headPose.transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_78 = V_0;
		NullCheck(L_78);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_79;
		L_79 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_78, NULL);
		NullCheck(L_79);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_80;
		L_80 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_79, 0, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_81;
		L_81 = SplitStereoCamera_get_headPose_m08621D0518D30AD523CE3325B2E3D14D561DE2C1(__this, NULL);
		NullCheck(L_81);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_82;
		L_82 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_81, NULL);
		NullCheck(L_80);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_80, L_82, NULL);
	}

IL_01b7:
	{
		// while(placeholder.transform.childCount > 0)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_83 = V_0;
		NullCheck(L_83);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_84;
		L_84 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_83, NULL);
		NullCheck(L_84);
		int32_t L_85;
		L_85 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_84, NULL);
		if ((((int32_t)L_85) > ((int32_t)0)))
		{
			goto IL_019b;
		}
	}
	{
		// Destroy(placeholder);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_86 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_86, NULL);
		// }
		return;
	}
}
// System.Void TiltFive.SplitStereoCamera::ConfigureEyeCameras()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplitStereoCamera_ConfigureEyeCameras_mBA06BAFAB9613BC9F1D59BEAB79224988D291A00 (SplitStereoCamera_t8E4D30C6028706D80A47E65C3110D750E000BEF5* __this, const RuntimeMethod* method) 
{
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_0 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_1 = NULL;
	{
		// splitStereoTextures.Initialize();
		SplitStereoTextures_t2F64E25FADF72BE3FB1FCC7DD38D97D5684AB2C0* L_0 = __this->___splitStereoTextures_19;
		NullCheck(L_0);
		SplitStereoTextures_Initialize_m23C893FF8841B8DE8021B47E27F17893293E9129(L_0, NULL);
		// RenderTexture leftTex = splitStereoTextures.LeftTexture_GLS;
		SplitStereoTextures_t2F64E25FADF72BE3FB1FCC7DD38D97D5684AB2C0* L_1 = __this->___splitStereoTextures_19;
		NullCheck(L_1);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_2 = L_1->___LeftTexture_GLS_0;
		V_0 = L_2;
		// if (leftEyeCamera.allowMSAA && QualitySettings.antiAliasing > 1)
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3;
		L_3 = SplitStereoCamera_get_leftEyeCamera_mD755856E8116BC9B7230773B9B5C4B05DFA62EA7(__this, NULL);
		NullCheck(L_3);
		bool L_4;
		L_4 = Camera_get_allowMSAA_mC316155B22B679709F85BA9AE3F7931C30EE7AF4(L_3, NULL);
		if (!L_4)
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_5;
		L_5 = QualitySettings_get_antiAliasing_m1E38110F0E9A028F8CA4D3889D32E6B873912EB0(NULL);
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0037;
		}
	}
	{
		// leftTex.antiAliasing = QualitySettings.antiAliasing;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_6 = V_0;
		int32_t L_7;
		L_7 = QualitySettings_get_antiAliasing_m1E38110F0E9A028F8CA4D3889D32E6B873912EB0(NULL);
		NullCheck(L_6);
		RenderTexture_set_antiAliasing_mA578276F4827A5CD4007DFE00117250A9336BC7A(L_6, L_7, NULL);
	}

IL_0037:
	{
		// leftEyeCamera.targetTexture = leftTex;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_8;
		L_8 = SplitStereoCamera_get_leftEyeCamera_mD755856E8116BC9B7230773B9B5C4B05DFA62EA7(__this, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_9 = V_0;
		NullCheck(L_8);
		Camera_set_targetTexture_mE6C740F21A72DA47FB5B1D31D208710738A836C4(L_8, L_9, NULL);
		// leftEyeCamera.depth = headPoseCamera.depth - 1;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_10;
		L_10 = SplitStereoCamera_get_leftEyeCamera_mD755856E8116BC9B7230773B9B5C4B05DFA62EA7(__this, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_11;
		L_11 = SplitStereoCamera_get_headPoseCamera_m25FFE8B09223C391E92ABBA1DCDCB9CF19F2E0D2_inline(__this, NULL);
		NullCheck(L_11);
		float L_12;
		L_12 = Camera_get_depth_mDF67FFF8ED61750467DFC4C6D8F236850AD1BB1D(L_11, NULL);
		NullCheck(L_10);
		Camera_set_depth_m595FA2A4FEBC90E730810BBFB55E4A2C2134066F(L_10, ((float)il2cpp_codegen_subtract(L_12, (1.0f))), NULL);
		// RenderTexture rightTex = splitStereoTextures.RightTexture_GLS;
		SplitStereoTextures_t2F64E25FADF72BE3FB1FCC7DD38D97D5684AB2C0* L_13 = __this->___splitStereoTextures_19;
		NullCheck(L_13);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_14 = L_13->___RightTexture_GLS_1;
		V_1 = L_14;
		// if (rightEyeCamera.allowMSAA && QualitySettings.antiAliasing > 1)
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_15;
		L_15 = SplitStereoCamera_get_rightEyeCamera_mE638B3001D0EA00B89D872EECA44372505C656E3(__this, NULL);
		NullCheck(L_15);
		bool L_16;
		L_16 = Camera_get_allowMSAA_mC316155B22B679709F85BA9AE3F7931C30EE7AF4(L_15, NULL);
		if (!L_16)
		{
			goto IL_008b;
		}
	}
	{
		int32_t L_17;
		L_17 = QualitySettings_get_antiAliasing_m1E38110F0E9A028F8CA4D3889D32E6B873912EB0(NULL);
		if ((((int32_t)L_17) <= ((int32_t)1)))
		{
			goto IL_008b;
		}
	}
	{
		// rightTex.antiAliasing = QualitySettings.antiAliasing;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_18 = V_1;
		int32_t L_19;
		L_19 = QualitySettings_get_antiAliasing_m1E38110F0E9A028F8CA4D3889D32E6B873912EB0(NULL);
		NullCheck(L_18);
		RenderTexture_set_antiAliasing_mA578276F4827A5CD4007DFE00117250A9336BC7A(L_18, L_19, NULL);
	}

IL_008b:
	{
		// rightEyeCamera.targetTexture = rightTex;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_20;
		L_20 = SplitStereoCamera_get_rightEyeCamera_mE638B3001D0EA00B89D872EECA44372505C656E3(__this, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_21 = V_1;
		NullCheck(L_20);
		Camera_set_targetTexture_mE6C740F21A72DA47FB5B1D31D208710738A836C4(L_20, L_21, NULL);
		// rightEyeCamera.depth = headPoseCamera.depth - 1;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_22;
		L_22 = SplitStereoCamera_get_rightEyeCamera_mE638B3001D0EA00B89D872EECA44372505C656E3(__this, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_23;
		L_23 = SplitStereoCamera_get_headPoseCamera_m25FFE8B09223C391E92ABBA1DCDCB9CF19F2E0D2_inline(__this, NULL);
		NullCheck(L_23);
		float L_24;
		L_24 = Camera_get_depth_mDF67FFF8ED61750467DFC4C6D8F236850AD1BB1D(L_23, NULL);
		NullCheck(L_22);
		Camera_set_depth_m595FA2A4FEBC90E730810BBFB55E4A2C2134066F(L_22, ((float)il2cpp_codegen_subtract(L_24, (1.0f))), NULL);
		// }
		return;
	}
}
// System.Void TiltFive.SplitStereoCamera::SyncTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplitStereoCamera_SyncTransform_m3E18301451179106625BAFE9B1F58242167A8331 (SplitStereoCamera_t8E4D30C6028706D80A47E65C3110D750E000BEF5* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void TiltFive.SplitStereoCamera::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplitStereoCamera_OnEnable_m29F354F3F3E838E952C8373D69F61E5A96E1B136 (SplitStereoCamera_t8E4D30C6028706D80A47E65C3110D750E000BEF5* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(PresentStereoImagesCoroutine());
		RuntimeObject* L_0;
		L_0 = SplitStereoCamera_PresentStereoImagesCoroutine_m42558C12F4624B2BAA0CA46384012F370BBF8124(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void TiltFive.SplitStereoCamera::OnPreRender()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplitStereoCamera_OnPreRender_m3BE3EA228811E7A2443B59A1612A95606AE79C03 (SplitStereoCamera_t8E4D30C6028706D80A47E65C3110D750E000BEF5* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float G_B7_0 = 0.0f;
	{
		// theHeadPoseCamera.targetTexture = null;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = __this->___theHeadPoseCamera_5;
		NullCheck(L_0);
		Camera_set_targetTexture_mE6C740F21A72DA47FB5B1D31D208710738A836C4(L_0, (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)NULL, NULL);
		// if(glassesMirrorMode != previousMirrorMode)
		int32_t L_1 = __this->___glassesMirrorMode_17;
		int32_t L_2 = __this->___previousMirrorMode_18;
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_0032;
		}
	}
	{
		// GL.Clear(true, true, Color.black);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = Color_get_black_mBF96B603B41BED9BAFAA10CE8D946D24260F9729_inline(NULL);
		GL_Clear_m303329453ADB3495208897E282FD24910878F537((bool)1, (bool)1, L_3, NULL);
		// previousMirrorMode = glassesMirrorMode;
		int32_t L_4 = __this->___glassesMirrorMode_17;
		__this->___previousMirrorMode_18 = L_4;
	}

IL_0032:
	{
		// splitStereoTextures.ValidateNativeTexturePointers();
		SplitStereoTextures_t2F64E25FADF72BE3FB1FCC7DD38D97D5684AB2C0* L_5 = __this->___splitStereoTextures_19;
		NullCheck(L_5);
		SplitStereoTextures_ValidateNativeTexturePointers_m4E957817E6E1B401F45FA1784D89CAE4DE83DA7F(L_5, NULL);
		// if(glassesMirrorMode == GlassesMirrorMode.None)
		int32_t L_6 = __this->___glassesMirrorMode_17;
		if (L_6)
		{
			goto IL_0046;
		}
	}
	{
		// return;
		return;
	}

IL_0046:
	{
		// float screenRatio = Screen.width / (float)Screen.height;
		int32_t L_7;
		L_7 = Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C(NULL);
		int32_t L_8;
		L_8 = Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8(NULL);
		V_0 = ((float)(((float)L_7)/((float)L_8)));
		// float targetRatio = glassesMirrorMode == GlassesMirrorMode.Stereoscopic
		//     ? DisplaySettings.stereoWidthToHeightRatio
		//     : DisplaySettings.monoWidthToHeightRatio;
		int32_t L_9 = __this->___glassesMirrorMode_17;
		if ((((int32_t)L_9) == ((int32_t)3)))
		{
			goto IL_0064;
		}
	}
	{
		float L_10;
		L_10 = DisplaySettings_get_monoWidthToHeightRatio_m81B572B64852E0F4618195121F382193B67E67FA(NULL);
		G_B7_0 = L_10;
		goto IL_0069;
	}

IL_0064:
	{
		float L_11;
		L_11 = DisplaySettings_get_stereoWidthToHeightRatio_mA30EC65254055C1694F30E279F3494DA8DB3BB74(NULL);
		G_B7_0 = L_11;
	}

IL_0069:
	{
		V_1 = G_B7_0;
		// if(screenRatio > targetRatio) {
		float L_12 = V_0;
		float L_13 = V_1;
		if ((!(((float)L_12) > ((float)L_13))))
		{
			goto IL_009d;
		}
	}
	{
		// float normalizedWidth = targetRatio / screenRatio;
		float L_14 = V_1;
		float L_15 = V_0;
		V_2 = ((float)(L_14/L_15));
		// float barThickness = (1f - normalizedWidth) / 2f;
		float L_16 = V_2;
		V_3 = ((float)(((float)il2cpp_codegen_subtract((1.0f), L_16))/(2.0f)));
		// theHeadPoseCamera.rect = new Rect(barThickness, 0, normalizedWidth, 1);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_17 = __this->___theHeadPoseCamera_5;
		float L_18 = V_3;
		float L_19 = V_2;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_20;
		memset((&L_20), 0, sizeof(L_20));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_20), L_18, (0.0f), L_19, (1.0f), /*hidden argument*/NULL);
		NullCheck(L_17);
		Camera_set_rect_mA81158BC169AF8674DE240AE9460FC5A0EADBB19(L_17, L_20, NULL);
		return;
	}

IL_009d:
	{
		// float normalizedHeight = screenRatio / targetRatio;
		float L_21 = V_0;
		float L_22 = V_1;
		V_4 = ((float)(L_21/L_22));
		// float barThickness = (1f - normalizedHeight) / 2f;
		float L_23 = V_4;
		V_5 = ((float)(((float)il2cpp_codegen_subtract((1.0f), L_23))/(2.0f)));
		// theHeadPoseCamera.rect = new Rect(0, barThickness, 1, normalizedHeight);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_24 = __this->___theHeadPoseCamera_5;
		float L_25 = V_5;
		float L_26 = V_4;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_27;
		memset((&L_27), 0, sizeof(L_27));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_27), (0.0f), L_25, (1.0f), L_26, /*hidden argument*/NULL);
		NullCheck(L_24);
		Camera_set_rect_mA81158BC169AF8674DE240AE9460FC5A0EADBB19(L_24, L_27, NULL);
		// }
		return;
	}
}
// System.Void TiltFive.SplitStereoCamera::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplitStereoCamera_OnRenderImage_m76D200262A7773DD8DCE2C05F14C96755DD9BDFD (SplitStereoCamera_t8E4D30C6028706D80A47E65C3110D750E000BEF5* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___src0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___dst1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B4_0 = NULL;
	{
		// if(glassesMirrorMode != GlassesMirrorMode.None)
		int32_t L_0 = __this->___glassesMirrorMode_17;
		if (!L_0)
		{
			goto IL_004c;
		}
	}
	{
		// splitStereoTextures.SubmitPreviewTextures(glassesMirrorMode);
		SplitStereoTextures_t2F64E25FADF72BE3FB1FCC7DD38D97D5684AB2C0* L_1 = __this->___splitStereoTextures_19;
		int32_t L_2 = __this->___glassesMirrorMode_17;
		NullCheck(L_1);
		SplitStereoTextures_SubmitPreviewTextures_mAFFC60AF1B13F0A00E6D21C68A2EA3A95E21EB6D(L_1, L_2, NULL);
		// var previewTex = glassesMirrorMode == GlassesMirrorMode.Stereoscopic
		//     ? splitStereoTextures.StereoPreviewTex
		//     : splitStereoTextures.MonoPreviewTex;
		int32_t L_3 = __this->___glassesMirrorMode_17;
		if ((((int32_t)L_3) == ((int32_t)3)))
		{
			goto IL_002f;
		}
	}
	{
		SplitStereoTextures_t2F64E25FADF72BE3FB1FCC7DD38D97D5684AB2C0* L_4 = __this->___splitStereoTextures_19;
		NullCheck(L_4);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_5 = L_4->___MonoPreviewTex_4;
		G_B4_0 = L_5;
		goto IL_003a;
	}

IL_002f:
	{
		SplitStereoTextures_t2F64E25FADF72BE3FB1FCC7DD38D97D5684AB2C0* L_6 = __this->___splitStereoTextures_19;
		NullCheck(L_6);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_7 = L_6->___StereoPreviewTex_5;
		G_B4_0 = L_7;
	}

IL_003a:
	{
		// Graphics.Blit(previewTex,
		//     null as RenderTexture,
		//     Vector2.one,
		//     Vector2.zero);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = Vector2_get_one_m232E885D3C7BB6A96D5FEF4494709BA170447604_inline(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m9CD748971CC899CAE3BEFE9578F90861DAE6EC1E(G_B4_0, (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)NULL, L_8, L_9, NULL);
		goto IL_0053;
	}

IL_004c:
	{
		// else Graphics.Blit(src, null as RenderTexture);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_10 = ___src0;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_Blit_m066854D684B6042B266D306E8E012D2C6C1787BE(L_10, (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)NULL, NULL);
	}

IL_0053:
	{
		// theHeadPoseCamera.rect = new Rect(0, 0, 1, 1);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_11 = __this->___theHeadPoseCamera_5;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_12;
		memset((&L_12), 0, sizeof(L_12));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_12), (0.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_11);
		Camera_set_rect_mA81158BC169AF8674DE240AE9460FC5A0EADBB19(L_11, L_12, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator TiltFive.SplitStereoCamera::PresentStereoImagesCoroutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SplitStereoCamera_PresentStereoImagesCoroutine_m42558C12F4624B2BAA0CA46384012F370BBF8124 (SplitStereoCamera_t8E4D30C6028706D80A47E65C3110D750E000BEF5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPresentStereoImagesCoroutineU3Ed__43_t36E604556C1B7F8143A07F76DA68C2756FD32C18_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CPresentStereoImagesCoroutineU3Ed__43_t36E604556C1B7F8143A07F76DA68C2756FD32C18* L_0 = (U3CPresentStereoImagesCoroutineU3Ed__43_t36E604556C1B7F8143A07F76DA68C2756FD32C18*)il2cpp_codegen_object_new(U3CPresentStereoImagesCoroutineU3Ed__43_t36E604556C1B7F8143A07F76DA68C2756FD32C18_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CPresentStereoImagesCoroutineU3Ed__43__ctor_m1757550E5C8F25044EEDB254F481C18358C2E4DD(L_0, 0, NULL);
		U3CPresentStereoImagesCoroutineU3Ed__43_t36E604556C1B7F8143A07F76DA68C2756FD32C18* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void TiltFive.SplitStereoCamera::PresentStereoImages()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplitStereoCamera_PresentStereoImages_m21550B5901678F2B4D8B0D8E2B520BEB990BAB98 (SplitStereoCamera_t8E4D30C6028706D80A47E65C3110D750E000BEF5* __this, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_2 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_3 = NULL;
	bool V_4 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_8;
	memset((&V_8), 0, sizeof(V_8));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_9;
	memset((&V_9), 0, sizeof(V_9));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_10;
	memset((&V_10), 0, sizeof(V_10));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_11;
	memset((&V_11), 0, sizeof(V_11));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_12;
	memset((&V_12), 0, sizeof(V_12));
	{
		// splitStereoTextures.GetNativeTexturePointers(out var leftTexHandle, out var rightTexHandle);
		SplitStereoTextures_t2F64E25FADF72BE3FB1FCC7DD38D97D5684AB2C0* L_0 = __this->___splitStereoTextures_19;
		NullCheck(L_0);
		SplitStereoTextures_GetNativeTexturePointers_m6AED41A77DD06A775A0B0508A92B70AE5FA6E62E(L_0, (&V_0), (&V_1), NULL);
		// var leftTargetTex = splitStereoTextures.LeftTexture_GLS;
		SplitStereoTextures_t2F64E25FADF72BE3FB1FCC7DD38D97D5684AB2C0* L_1 = __this->___splitStereoTextures_19;
		NullCheck(L_1);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_2 = L_1->___LeftTexture_GLS_0;
		V_2 = L_2;
		// var rightTargetTex = splitStereoTextures.RightTexture_GLS;
		SplitStereoTextures_t2F64E25FADF72BE3FB1FCC7DD38D97D5684AB2C0* L_3 = __this->___splitStereoTextures_19;
		NullCheck(L_3);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_4 = L_3->___RightTexture_GLS_1;
		V_3 = L_4;
		// bool isSrgb = leftTargetTex.sRGB;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_5 = V_2;
		NullCheck(L_5);
		bool L_6;
		L_6 = RenderTexture_get_sRGB_m84B7CD257050BA42363E9D1562AFEF2854BB4E04(L_5, NULL);
		V_4 = L_6;
		// Vector3 posOfULVC_UWRLD = leftEyeCamera.transform.position;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_7;
		L_7 = SplitStereoCamera_get_leftEyeCamera_mD755856E8116BC9B7230773B9B5C4B05DFA62EA7(__this, NULL);
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_7, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		V_5 = L_9;
		// Quaternion rotToUWRLD_ULVC = leftEyeCamera.transform.rotation;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_10;
		L_10 = SplitStereoCamera_get_leftEyeCamera_mD755856E8116BC9B7230773B9B5C4B05DFA62EA7(__this, NULL);
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_10, NULL);
		NullCheck(L_11);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		L_12 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_11, NULL);
		V_6 = L_12;
		// Vector3 posOfURVC_UWRLD = rightEyeCamera.transform.position;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_13;
		L_13 = SplitStereoCamera_get_rightEyeCamera_mE638B3001D0EA00B89D872EECA44372505C656E3(__this, NULL);
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_13, NULL);
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_14, NULL);
		V_7 = L_15;
		// Quaternion rotToUWRLD_URVC = rightEyeCamera.transform.rotation;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_16;
		L_16 = SplitStereoCamera_get_rightEyeCamera_mE638B3001D0EA00B89D872EECA44372505C656E3(__this, NULL);
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_16, NULL);
		NullCheck(L_17);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_17, NULL);
		V_8 = L_18;
		// Vector3 posOfULVC_UGBD = rotToUGBD_UWRLD * (scaleToUGBD_UWRLD * (posOfULVC_UWRLD - posUGBD_UWRLD));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_19 = __this->___rotToUGBD_UWRLD_13;
		float L_20 = __this->___scaleToUGBD_UWRLD_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = __this->___posUGBD_UWRLD_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_21, L_22, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline(L_20, L_23, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_19, L_24, NULL);
		V_9 = L_25;
		// Quaternion rotToUGBD_ULVC = rotToUGBD_UWRLD * rotToUWRLD_ULVC;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = __this->___rotToUGBD_UWRLD_13;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_27 = V_6;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28;
		L_28 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_26, L_27, NULL);
		V_10 = L_28;
		// Vector3 posOfURVC_UGBD = rotToUGBD_UWRLD * (scaleToUGBD_UWRLD * (posOfURVC_UWRLD - posUGBD_UWRLD));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_29 = __this->___rotToUGBD_UWRLD_13;
		float L_30 = __this->___scaleToUGBD_UWRLD_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = __this->___posUGBD_UWRLD_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_31, L_32, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline(L_30, L_33, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_29, L_34, NULL);
		V_11 = L_35;
		// Quaternion rotToUGBD_URVC = rotToUGBD_UWRLD * rotToUWRLD_URVC;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36 = __this->___rotToUGBD_UWRLD_13;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_37 = V_8;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38;
		L_38 = Quaternion_op_Multiply_m5AC8B39C55015059BDD09122E04E47D4BFAB2276_inline(L_36, L_37, NULL);
		V_12 = L_38;
		// Display.PresentStereoImages(leftTexHandle, rightTexHandle,
		//                            leftTargetTex.width, rightTargetTex.height,
		//                            isSrgb,
		//                            fieldOfView,
		//                            DisplaySettings.monoWidthToHeightRatio,
		//                            rotToUGBD_ULVC,
		//                            posOfULVC_UGBD,
		//                            rotToUGBD_URVC,
		//                            posOfURVC_UGBD);
		intptr_t L_39 = V_0;
		intptr_t L_40 = V_1;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_41 = V_2;
		NullCheck(L_41);
		int32_t L_42;
		L_42 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_41);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_43 = V_3;
		NullCheck(L_43);
		int32_t L_44;
		L_44 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_43);
		bool L_45 = V_4;
		float L_46;
		L_46 = SplitStereoCamera_get_fieldOfView_m241BB535223F7416B2FC588B80F7E5F030FF9A9E(__this, NULL);
		float L_47;
		L_47 = DisplaySettings_get_monoWidthToHeightRatio_m81B572B64852E0F4618195121F382193B67E67FA(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48 = V_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49 = V_9;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50 = V_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51 = V_11;
		bool L_52;
		L_52 = Display_PresentStereoImages_m62D9916A8E8EFB5A0110C6522AD1A5FABDFB8141(L_39, L_40, L_42, L_44, L_45, L_46, L_47, L_48, L_49, L_50, L_51, NULL);
		// }
		return;
	}
}
// System.Void TiltFive.SplitStereoCamera::SyncFields(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplitStereoCamera_SyncFields_m78AE7FD595C86EB4F9BE716ABC85195A45AA4ACD (SplitStereoCamera_t8E4D30C6028706D80A47E65C3110D750E000BEF5* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___theCamera0, const RuntimeMethod* method) 
{
	{
		// fieldOfView = theCamera.fieldOfView;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = ___theCamera0;
		NullCheck(L_0);
		float L_1;
		L_1 = Camera_get_fieldOfView_m9A93F17BBF89F496AE231C21817AFD1C1E833FBB(L_0, NULL);
		SplitStereoCamera_set_fieldOfView_m4959FC28833166D5E49279E833DA69A9E8B4EBDB(__this, L_1, NULL);
		// nearClipPlane = theCamera.nearClipPlane;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2 = ___theCamera0;
		NullCheck(L_2);
		float L_3;
		L_3 = Camera_get_nearClipPlane_m5E8FAF84326E3192CB036BD29DCCDAF6A9861013(L_2, NULL);
		SplitStereoCamera_set_nearClipPlane_m8535E1281C6B8CEB7062C7149BA567B9A08AE45D(__this, L_3, NULL);
		// farClipPlane = theCamera.farClipPlane;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4 = ___theCamera0;
		NullCheck(L_4);
		float L_5;
		L_5 = Camera_get_farClipPlane_m1D7128B85B5DB866F75FBE8CEBA48335716B67BD(L_4, NULL);
		SplitStereoCamera_set_farClipPlane_mF8000FFEDCA48D3C47A2364330D396C41B120AFC(__this, L_5, NULL);
		// aspectRatio = theCamera.aspect;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_6 = ___theCamera0;
		NullCheck(L_6);
		float L_7;
		L_7 = Camera_get_aspect_m48BF8820EA2D55BE0D154BC5546819FB65BE257D(L_6, NULL);
		SplitStereoCamera_set_aspectRatio_mFA0A3E0392BD2B7C0DBD4475C30BD2775256CC92(__this, L_7, NULL);
		// }
		return;
	}
}
// System.Void TiltFive.SplitStereoCamera::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplitStereoCamera_OnValidate_m2B7B737F49F5465ACE1BCDEC37FB8435DEC0888A (SplitStereoCamera_t8E4D30C6028706D80A47E65C3110D750E000BEF5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (null == headPoseCamera)
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = SplitStereoCamera_get_headPoseCamera_m25FFE8B09223C391E92ABBA1DCDCB9CF19F2E0D2_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, L_0, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// if (null != leftEye && null != rightEye)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___leftEye_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, L_2, NULL);
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___rightEye_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, L_4, NULL);
		if (!L_5)
		{
			goto IL_0031;
		}
	}
	{
		// ShowHideCameras();
		SplitStereoCamera_ShowHideCameras_m56BA44E754AA299E3936CC274F07307F23E92FEA(__this, NULL);
	}

IL_0031:
	{
		// SyncFields(headPoseCamera);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_6;
		L_6 = SplitStereoCamera_get_headPoseCamera_m25FFE8B09223C391E92ABBA1DCDCB9CF19F2E0D2_inline(__this, NULL);
		SplitStereoCamera_SyncFields_m78AE7FD595C86EB4F9BE716ABC85195A45AA4ACD(__this, L_6, NULL);
		// SyncTransform();
		SplitStereoCamera_SyncTransform_m3E18301451179106625BAFE9B1F58242167A8331(__this, NULL);
		// }
		return;
	}
}
// System.Void TiltFive.SplitStereoCamera::ShowHideCameras()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplitStereoCamera_ShowHideCameras_m56BA44E754AA299E3936CC274F07307F23E92FEA (SplitStereoCamera_t8E4D30C6028706D80A47E65C3110D750E000BEF5* __this, const RuntimeMethod* method) 
{
	{
		// if (showCameras)
		bool L_0 = __this->___showCameras_10;
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		// leftEye.hideFlags = HideFlags.None;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___leftEye_7;
		NullCheck(L_1);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_1, 0, NULL);
		// rightEye.hideFlags = HideFlags.None;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___rightEye_9;
		NullCheck(L_2);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_2, 0, NULL);
		return;
	}

IL_0021:
	{
		// leftEye.hideFlags = HideFlags.HideInInspector | HideFlags.HideInHierarchy;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___leftEye_7;
		NullCheck(L_3);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_3, 3, NULL);
		// rightEye.hideFlags = HideFlags.HideInInspector | HideFlags.HideInHierarchy;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___rightEye_9;
		NullCheck(L_4);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_4, 3, NULL);
		// }
		return;
	}
}
// System.Void TiltFive.SplitStereoCamera::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplitStereoCamera__ctor_m0EB4E7FD51B85C761DCEA007754E8A7758DB9EED (SplitStereoCamera_t8E4D30C6028706D80A47E65C3110D750E000BEF5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mC932861BD28C9CFC332F53AA19AA5A680D147AFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mEB42A2538AD040F9B8B05A8A1D183C3472644E60_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t71BFAA343ADBECF70319A33149AC4651F23EC3F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SplitStereoTextures_t2F64E25FADF72BE3FB1FCC7DD38D97D5684AB2C0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool showCameras = true;
		__this->___showCameras_10 = (bool)1;
		// private Dictionary<AREyes, Camera> eyeCameras = new Dictionary<AREyes, Camera>()
		// {
		//     { AREyes.EYE_LEFT, null },
		//     { AREyes.EYE_RIGHT, null }
		// };
		Dictionary_2_t71BFAA343ADBECF70319A33149AC4651F23EC3F6* L_0 = (Dictionary_2_t71BFAA343ADBECF70319A33149AC4651F23EC3F6*)il2cpp_codegen_object_new(Dictionary_2_t71BFAA343ADBECF70319A33149AC4651F23EC3F6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mEB42A2538AD040F9B8B05A8A1D183C3472644E60(L_0, Dictionary_2__ctor_mEB42A2538AD040F9B8B05A8A1D183C3472644E60_RuntimeMethod_var);
		Dictionary_2_t71BFAA343ADBECF70319A33149AC4651F23EC3F6* L_1 = L_0;
		NullCheck(L_1);
		Dictionary_2_Add_mC932861BD28C9CFC332F53AA19AA5A680D147AFB(L_1, 0, (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*)NULL, Dictionary_2_Add_mC932861BD28C9CFC332F53AA19AA5A680D147AFB_RuntimeMethod_var);
		Dictionary_2_t71BFAA343ADBECF70319A33149AC4651F23EC3F6* L_2 = L_1;
		NullCheck(L_2);
		Dictionary_2_Add_mC932861BD28C9CFC332F53AA19AA5A680D147AFB(L_2, 1, (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*)NULL, Dictionary_2_Add_mC932861BD28C9CFC332F53AA19AA5A680D147AFB_RuntimeMethod_var);
		__this->___eyeCameras_11 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___eyeCameras_11), (void*)L_2);
		// public Vector3 posUGBD_UWRLD = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		__this->___posUGBD_UWRLD_12 = L_3;
		// public Quaternion rotToUGBD_UWRLD = Quaternion.identity;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		__this->___rotToUGBD_UWRLD_13 = L_4;
		// public float scaleToUGBD_UWRLD = 1.0f;
		__this->___scaleToUGBD_UWRLD_14 = (1.0f);
		// public GlassesMirrorMode glassesMirrorMode = GlassesMirrorMode.LeftEye;
		__this->___glassesMirrorMode_17 = 1;
		// private GlassesMirrorMode previousMirrorMode = GlassesMirrorMode.LeftEye;
		__this->___previousMirrorMode_18 = 1;
		// private SplitStereoTextures splitStereoTextures = new SplitStereoTextures();
		SplitStereoTextures_t2F64E25FADF72BE3FB1FCC7DD38D97D5684AB2C0* L_5 = (SplitStereoTextures_t2F64E25FADF72BE3FB1FCC7DD38D97D5684AB2C0*)il2cpp_codegen_object_new(SplitStereoTextures_t2F64E25FADF72BE3FB1FCC7DD38D97D5684AB2C0_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		SplitStereoTextures__ctor_m52E9570DB870208231899554F0353B3931C6D086(L_5, NULL);
		__this->___splitStereoTextures_19 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___splitStereoTextures_19), (void*)L_5);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void TiltFive.SplitStereoCamera/<PresentStereoImagesCoroutine>d__43::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPresentStereoImagesCoroutineU3Ed__43__ctor_m1757550E5C8F25044EEDB254F481C18358C2E4DD (U3CPresentStereoImagesCoroutineU3Ed__43_t36E604556C1B7F8143A07F76DA68C2756FD32C18* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void TiltFive.SplitStereoCamera/<PresentStereoImagesCoroutine>d__43::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPresentStereoImagesCoroutineU3Ed__43_System_IDisposable_Dispose_m9AC423AF998D06B5D87B00C7F5D1E8B37B8DD8DC (U3CPresentStereoImagesCoroutineU3Ed__43_t36E604556C1B7F8143A07F76DA68C2756FD32C18* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean TiltFive.SplitStereoCamera/<PresentStereoImagesCoroutine>d__43::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CPresentStereoImagesCoroutineU3Ed__43_MoveNext_m5FD9459861A57AE82147E1C8C2465F677787A37C (U3CPresentStereoImagesCoroutineU3Ed__43_t36E604556C1B7F8143A07F76DA68C2756FD32C18* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SplitStereoCamera_t8E4D30C6028706D80A47E65C3110D750E000BEF5* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		SplitStereoCamera_t8E4D30C6028706D80A47E65C3110D750E000BEF5* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0040;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// var cachedWaitForEndOfFrame = new WaitForEndOfFrame();
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_4 = (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663*)il2cpp_codegen_object_new(WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB(L_4, NULL);
		__this->___U3CcachedWaitForEndOfFrameU3E5__2_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcachedWaitForEndOfFrameU3E5__2_3), (void*)L_4);
		goto IL_004d;
	}

IL_002b:
	{
		// yield return cachedWaitForEndOfFrame;
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_5 = __this->___U3CcachedWaitForEndOfFrameU3E5__2_3;
		__this->___U3CU3E2__current_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_5);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0040:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// PresentStereoImages();
		SplitStereoCamera_t8E4D30C6028706D80A47E65C3110D750E000BEF5* L_6 = V_1;
		NullCheck(L_6);
		SplitStereoCamera_PresentStereoImages_m21550B5901678F2B4D8B0D8E2B520BEB990BAB98(L_6, NULL);
	}

IL_004d:
	{
		// while (enabled)
		SplitStereoCamera_t8E4D30C6028706D80A47E65C3110D750E000BEF5* L_7 = V_1;
		NullCheck(L_7);
		bool L_8;
		L_8 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(L_7, NULL);
		if (L_8)
		{
			goto IL_002b;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object TiltFive.SplitStereoCamera/<PresentStereoImagesCoroutine>d__43::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CPresentStereoImagesCoroutineU3Ed__43_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mE26E5081008FA9559DF0DA0EC21310086EE6C68D (U3CPresentStereoImagesCoroutineU3Ed__43_t36E604556C1B7F8143A07F76DA68C2756FD32C18* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void TiltFive.SplitStereoCamera/<PresentStereoImagesCoroutine>d__43::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPresentStereoImagesCoroutineU3Ed__43_System_Collections_IEnumerator_Reset_mE96FD819F17F8D55B494F83875A16BDA5B17D5B2 (U3CPresentStereoImagesCoroutineU3Ed__43_t36E604556C1B7F8143A07F76DA68C2756FD32C18* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CPresentStereoImagesCoroutineU3Ed__43_System_Collections_IEnumerator_Reset_mE96FD819F17F8D55B494F83875A16BDA5B17D5B2_RuntimeMethod_var)));
	}
}
// System.Object TiltFive.SplitStereoCamera/<PresentStereoImagesCoroutine>d__43::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CPresentStereoImagesCoroutineU3Ed__43_System_Collections_IEnumerator_get_Current_mD0C2B38F8FC7329A8336AC755C91AA8D83A1B3E1 (U3CPresentStereoImagesCoroutineU3Ed__43_t36E604556C1B7F8143A07F76DA68C2756FD32C18* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.IntPtr TiltFive.SplitStereoTextures::get_LeftTexHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SplitStereoTextures_get_LeftTexHandle_mDFA60480105689DEA17840845CDEDB2C9A6F38F1 (SplitStereoTextures_t2F64E25FADF72BE3FB1FCC7DD38D97D5684AB2C0* __this, const RuntimeMethod* method) 
{
	{
		// private IntPtr LeftTexHandle { get; set; }
		intptr_t L_0 = __this->___U3CLeftTexHandleU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void TiltFive.SplitStereoTextures::set_LeftTexHandle(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplitStereoTextures_set_LeftTexHandle_mE45B51FCC514B6BFD889E0C395866785BF9F7ECD (SplitStereoTextures_t2F64E25FADF72BE3FB1FCC7DD38D97D5684AB2C0* __this, intptr_t ___value0, const RuntimeMethod* method) 
{
	{
		// private IntPtr LeftTexHandle { get; set; }
		intptr_t L_0 = ___value0;
		__this->___U3CLeftTexHandleU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.IntPtr TiltFive.SplitStereoTextures::get_RightTexHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t SplitStereoTextures_get_RightTexHandle_mF08970173C4ED2057F76A430EECF07B92C504C3D (SplitStereoTextures_t2F64E25FADF72BE3FB1FCC7DD38D97D5684AB2C0* __this, const RuntimeMethod* method) 
{
	{
		// private IntPtr RightTexHandle { get; set; }
		intptr_t L_0 = __this->___U3CRightTexHandleU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void TiltFive.SplitStereoTextures::set_RightTexHandle(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplitStereoTextures_set_RightTexHandle_m2CF6A5B65F47C01A912BF218AA4BC7117A5E552D (SplitStereoTextures_t2F64E25FADF72BE3FB1FCC7DD38D97D5684AB2C0* __this, intptr_t ___value0, const RuntimeMethod* method) 
{
	{
		// private IntPtr RightTexHandle { get; set; }
		intptr_t L_0 = ___value0;
		__this->___U3CRightTexHandleU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Void TiltFive.SplitStereoTextures::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplitStereoTextures_Initialize_m23C893FF8841B8DE8021B47E27F17893293E9129 (SplitStereoTextures_t2F64E25FADF72BE3FB1FCC7DD38D97D5684AB2C0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4129396D4312D742E9EBBE94AB1D184601EC14EF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9C9F993163D0E3BE7C2BE28F92804AB66D3742DE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB12FAB89B8592A51144FD1841137252D483BCAAB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC724A83684FE5B0A2BAF470BCD935F60DC1650CE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// LeftTexture_GLS = new RenderTexture(
		//     DisplaySettings.monoWidth,
		//     DisplaySettings.height,
		//     DisplaySettings.depthBuffer,
		//     DisplaySettings.nativeTextureFormat);
		int32_t L_0;
		L_0 = DisplaySettings_get_monoWidth_m8CFF0AA18A13F0FB1B891C4F13CD116B868AC777(NULL);
		int32_t L_1;
		L_1 = DisplaySettings_get_height_m25F1F563259A368FDF6ABF1300D55A18046DE131(NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_2 = (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)il2cpp_codegen_object_new(RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		RenderTexture__ctor_m53215A8EDDE262932758186108347685F6A512C4(L_2, L_0, L_1, ((int32_t)24), 0, NULL);
		__this->___LeftTexture_GLS_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LeftTexture_GLS_0), (void*)L_2);
		// LeftTexture_GLS.name = "Left Eye Output RenderTexture";
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_3 = __this->___LeftTexture_GLS_0;
		NullCheck(L_3);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_3, _stringLiteralC724A83684FE5B0A2BAF470BCD935F60DC1650CE, NULL);
		// RightTexture_GLS = new RenderTexture(
		//     DisplaySettings.monoWidth,
		//     DisplaySettings.height,
		//     DisplaySettings.depthBuffer,
		//     DisplaySettings.nativeTextureFormat);
		int32_t L_4;
		L_4 = DisplaySettings_get_monoWidth_m8CFF0AA18A13F0FB1B891C4F13CD116B868AC777(NULL);
		int32_t L_5;
		L_5 = DisplaySettings_get_height_m25F1F563259A368FDF6ABF1300D55A18046DE131(NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_6 = (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)il2cpp_codegen_object_new(RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		RenderTexture__ctor_m53215A8EDDE262932758186108347685F6A512C4(L_6, L_4, L_5, ((int32_t)24), 0, NULL);
		__this->___RightTexture_GLS_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___RightTexture_GLS_1), (void*)L_6);
		// RightTexture_GLS.name = "Right Eye Output RenderTexture";
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_7 = __this->___RightTexture_GLS_1;
		NullCheck(L_7);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_7, _stringLiteralB12FAB89B8592A51144FD1841137252D483BCAAB, NULL);
		// MonoPreviewTex = new RenderTexture(
		//     DisplaySettings.monoWidth,
		//     DisplaySettings.height,
		//     DisplaySettings.depthBuffer,
		//     RenderTextureFormat.Default);
		int32_t L_8;
		L_8 = DisplaySettings_get_monoWidth_m8CFF0AA18A13F0FB1B891C4F13CD116B868AC777(NULL);
		int32_t L_9;
		L_9 = DisplaySettings_get_height_m25F1F563259A368FDF6ABF1300D55A18046DE131(NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_10 = (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)il2cpp_codegen_object_new(RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		RenderTexture__ctor_m53215A8EDDE262932758186108347685F6A512C4(L_10, L_8, L_9, ((int32_t)24), 7, NULL);
		__this->___MonoPreviewTex_4 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MonoPreviewTex_4), (void*)L_10);
		// MonoPreviewTex.name = "Mono Preview RenderTexture";
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_11 = __this->___MonoPreviewTex_4;
		NullCheck(L_11);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_11, _stringLiteral4129396D4312D742E9EBBE94AB1D184601EC14EF, NULL);
		// StereoPreviewTex = new RenderTexture(
		//     DisplaySettings.stereoWidth,
		//     DisplaySettings.height,
		//     DisplaySettings.depthBuffer,
		//     RenderTextureFormat.Default);
		int32_t L_12;
		L_12 = DisplaySettings_get_stereoWidth_mFB72CBBE4C8ED94C3BE971147713F462C115550F(NULL);
		int32_t L_13;
		L_13 = DisplaySettings_get_height_m25F1F563259A368FDF6ABF1300D55A18046DE131(NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_14 = (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)il2cpp_codegen_object_new(RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		RenderTexture__ctor_m53215A8EDDE262932758186108347685F6A512C4(L_14, L_12, L_13, ((int32_t)24), 7, NULL);
		__this->___StereoPreviewTex_5 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___StereoPreviewTex_5), (void*)L_14);
		// StereoPreviewTex.name = "Stereo Preview RenderTexture";
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_15 = __this->___StereoPreviewTex_5;
		NullCheck(L_15);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_15, _stringLiteral9C9F993163D0E3BE7C2BE28F92804AB66D3742DE, NULL);
		// }
		return;
	}
}
// System.Void TiltFive.SplitStereoTextures::ValidateNativeTexturePointers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplitStereoTextures_ValidateNativeTexturePointers_m4E957817E6E1B401F45FA1784D89CAE4DE83DA7F (SplitStereoTextures_t2F64E25FADF72BE3FB1FCC7DD38D97D5684AB2C0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!LeftTexture_GLS.IsCreated() || !RightTexture_GLS.IsCreated())
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_0 = __this->___LeftTexture_GLS_0;
		NullCheck(L_0);
		bool L_1;
		L_1 = RenderTexture_IsCreated_mB69D4DBD99D74AA5D1F3C9E84A08D6744A031006(L_0, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_2 = __this->___RightTexture_GLS_1;
		NullCheck(L_2);
		bool L_3;
		L_3 = RenderTexture_IsCreated_mB69D4DBD99D74AA5D1F3C9E84A08D6744A031006(L_2, NULL);
		if (L_3)
		{
			goto IL_0030;
		}
	}

IL_001a:
	{
		// LeftTexHandle = System.IntPtr.Zero;
		SplitStereoTextures_set_LeftTexHandle_mE45B51FCC514B6BFD889E0C395866785BF9F7ECD_inline(__this, (0), NULL);
		// RightTexHandle = System.IntPtr.Zero;
		SplitStereoTextures_set_RightTexHandle_m2CF6A5B65F47C01A912BF218AA4BC7117A5E552D_inline(__this, (0), NULL);
	}

IL_0030:
	{
		// }
		return;
	}
}
// System.Void TiltFive.SplitStereoTextures::GetNativeTexturePointers(System.IntPtr&,System.IntPtr&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplitStereoTextures_GetNativeTexturePointers_m6AED41A77DD06A775A0B0508A92B70AE5FA6E62E (SplitStereoTextures_t2F64E25FADF72BE3FB1FCC7DD38D97D5684AB2C0* __this, intptr_t* ___leftTexHandle0, intptr_t* ___rightTexHandle1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(LeftTexHandle == IntPtr.Zero || RightTexHandle == IntPtr.Zero)
		intptr_t L_0;
		L_0 = SplitStereoTextures_get_LeftTexHandle_mDFA60480105689DEA17840845CDEDB2C9A6F38F1_inline(__this, NULL);
		bool L_1;
		L_1 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_0, (0), NULL);
		if (L_1)
		{
			goto IL_0024;
		}
	}
	{
		intptr_t L_2;
		L_2 = SplitStereoTextures_get_RightTexHandle_mF08970173C4ED2057F76A430EECF07B92C504C3D_inline(__this, NULL);
		bool L_3;
		L_3 = IntPtr_op_Equality_m73759B51FE326460AC87A0E386480226EF2FABED(L_2, (0), NULL);
		if (!L_3)
		{
			goto IL_0046;
		}
	}

IL_0024:
	{
		// LeftTexHandle = LeftTexture_GLS.GetNativeTexturePtr();
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_4 = __this->___LeftTexture_GLS_0;
		NullCheck(L_4);
		intptr_t L_5;
		L_5 = Texture_GetNativeTexturePtr_mD3019CC9461338665885D431B86C03D3063867EE(L_4, NULL);
		SplitStereoTextures_set_LeftTexHandle_mE45B51FCC514B6BFD889E0C395866785BF9F7ECD_inline(__this, L_5, NULL);
		// RightTexHandle = RightTexture_GLS.GetNativeTexturePtr();
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_6 = __this->___RightTexture_GLS_1;
		NullCheck(L_6);
		intptr_t L_7;
		L_7 = Texture_GetNativeTexturePtr_mD3019CC9461338665885D431B86C03D3063867EE(L_6, NULL);
		SplitStereoTextures_set_RightTexHandle_m2CF6A5B65F47C01A912BF218AA4BC7117A5E552D_inline(__this, L_7, NULL);
	}

IL_0046:
	{
		// leftTexHandle = LeftTexHandle;
		intptr_t* L_8 = ___leftTexHandle0;
		intptr_t L_9;
		L_9 = SplitStereoTextures_get_LeftTexHandle_mDFA60480105689DEA17840845CDEDB2C9A6F38F1_inline(__this, NULL);
		*((intptr_t*)L_8) = (intptr_t)L_9;
		// rightTexHandle = RightTexHandle;
		intptr_t* L_10 = ___rightTexHandle1;
		intptr_t L_11;
		L_11 = SplitStereoTextures_get_RightTexHandle_mF08970173C4ED2057F76A430EECF07B92C504C3D_inline(__this, NULL);
		*((intptr_t*)L_10) = (intptr_t)L_11;
		// }
		return;
	}
}
// System.Void TiltFive.SplitStereoTextures::SubmitPreviewTextures(TiltFive.GlassesMirrorMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplitStereoTextures_SubmitPreviewTextures_mAFFC60AF1B13F0A00E6D21C68A2EA3A95E21EB6D (SplitStereoTextures_t2F64E25FADF72BE3FB1FCC7DD38D97D5684AB2C0* __this, int32_t ___glassesMirrorMode0, const RuntimeMethod* method) 
{
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_0 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B3_0 = NULL;
	{
		// var previewTex = glassesMirrorMode == GlassesMirrorMode.Stereoscopic ? StereoPreviewTex : MonoPreviewTex;
		int32_t L_0 = ___glassesMirrorMode0;
		if ((((int32_t)L_0) == ((int32_t)3)))
		{
			goto IL_000c;
		}
	}
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_1 = __this->___MonoPreviewTex_4;
		G_B3_0 = L_1;
		goto IL_0012;
	}

IL_000c:
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_2 = __this->___StereoPreviewTex_5;
		G_B3_0 = L_2;
	}

IL_0012:
	{
		V_0 = G_B3_0;
		int32_t L_3 = ___glassesMirrorMode0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_3, 1)))
		{
			case 0:
			{
				goto IL_0028;
			}
			case 1:
			{
				goto IL_0037;
			}
			case 2:
			{
				goto IL_0046;
			}
		}
	}
	{
		return;
	}

IL_0028:
	{
		// CopyTexture(LeftTexture_GLS, previewTex);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_4 = __this->___LeftTexture_GLS_0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_5 = V_0;
		SplitStereoTextures_CopyTexture_mE97C40BAEAD4003C6192B156B1212A0FDDD76416(__this, L_4, L_5, 0, NULL);
		// break;
		return;
	}

IL_0037:
	{
		// CopyTexture(RightTexture_GLS, previewTex);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_6 = __this->___RightTexture_GLS_1;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_7 = V_0;
		SplitStereoTextures_CopyTexture_mE97C40BAEAD4003C6192B156B1212A0FDDD76416(__this, L_6, L_7, 0, NULL);
		// break;
		return;
	}

IL_0046:
	{
		// CopyTexture(LeftTexture_GLS, previewTex);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_8 = __this->___LeftTexture_GLS_0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_9 = V_0;
		SplitStereoTextures_CopyTexture_mE97C40BAEAD4003C6192B156B1212A0FDDD76416(__this, L_8, L_9, 0, NULL);
		// CopyTexture(RightTexture_GLS, previewTex, LeftTexture_GLS.width);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_10 = __this->___RightTexture_GLS_1;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_11 = V_0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_12 = __this->___LeftTexture_GLS_0;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_12);
		SplitStereoTextures_CopyTexture_mE97C40BAEAD4003C6192B156B1212A0FDDD76416(__this, L_10, L_11, L_13, NULL);
		// }
		return;
	}
}
// System.Void TiltFive.SplitStereoTextures::CopyTexture(UnityEngine.RenderTexture,UnityEngine.RenderTexture,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplitStereoTextures_CopyTexture_mE97C40BAEAD4003C6192B156B1212A0FDDD76416 (SplitStereoTextures_t2F64E25FADF72BE3FB1FCC7DD38D97D5684AB2C0* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___sourceTex0, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___destinationTex1, int32_t ___xOffset2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Graphics.CopyTexture(
		//             sourceTex,
		//             0,      // srcElement
		//             0,      // srcMip
		//             0, 0,   // src offset
		//             sourceTex.width, sourceTex.height,  // src size
		//             destinationTex,
		//             0,      // dstElement
		//             0,      // dstMip
		//             xOffset, 0);  // dst offset
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_0 = ___sourceTex0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_1 = ___sourceTex0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_1);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_3 = ___sourceTex0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_3);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_5 = ___destinationTex1;
		int32_t L_6 = ___xOffset2;
		il2cpp_codegen_runtime_class_init_inline(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		Graphics_CopyTexture_m1174E36AE6E6DF2FFF25A028EFD0D7740C7CF91B(L_0, 0, 0, 0, 0, L_2, L_4, L_5, 0, 0, L_6, 0, NULL);
		// }
		return;
	}
}
// System.Void TiltFive.SplitStereoTextures::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplitStereoTextures__ctor_m52E9570DB870208231899554F0353B3931C6D086 (SplitStereoTextures_t2F64E25FADF72BE3FB1FCC7DD38D97D5684AB2C0* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2Int__ctor_mC20D1312133EB8CB63EC11067088B043660F11CE_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___x0;
		__this->___m_X_0 = L_0;
		int32_t L_1 = ___y1;
		__this->___m_Y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Matrix4x4_set_Item_mE84FC43629907DD1872E3100BCFF4A8EB671B603_inline (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, int32_t ___row0, int32_t ___column1, float ___value2, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___row0;
		int32_t L_1 = ___column1;
		float L_2 = ___value2;
		Matrix4x4_set_Item_m47C4DDBFAE6578D6008AEF433777D4B2FACB62B0(__this, ((int32_t)il2cpp_codegen_add(L_0, ((int32_t)il2cpp_codegen_multiply(L_1, 4)))), L_2, NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GlassesCore_get_TrackingUpdated_m63C7F5E8D5E554C2697EF8B54E80B4BE7B947FF8_inline (GlassesCore_t5A44456D065E1327F5EAA342CF1373142192C837* __this, const RuntimeMethod* method) 
{
	{
		// public bool TrackingUpdated { get; private set; } = false;
		bool L_0 = __this->___U3CTrackingUpdatedU3Ek__BackingField_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* SplitStereoCamera_get_headPoseCamera_m25FFE8B09223C391E92ABBA1DCDCB9CF19F2E0D2_inline (SplitStereoCamera_t8E4D30C6028706D80A47E65C3110D750E000BEF5* __this, const RuntimeMethod* method) 
{
	{
		// public Camera headPoseCamera { get { return theHeadPoseCamera; } }
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = __this->___theHeadPoseCamera_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GlassesCore_set_TrackingUpdated_m51BE49C9773B2D3A1C78C763D2A60122B991084F_inline (GlassesCore_t5A44456D065E1327F5EAA342CF1373142192C837* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool TrackingUpdated { get; private set; } = false;
		bool L_0 = ___value0;
		__this->___U3CTrackingUpdatedU3Ek__BackingField_9 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Glasses_set_glassesAvailable_mCA3C5781DA07674B024B89C86ACFE6C70BEE317C_inline (bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Glasses_tD7352D8219D253B4BDA92806B35E4E1946313A95_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool glassesAvailable {get; private set;}
		bool L_0 = ___value0;
		((Glasses_tD7352D8219D253B4BDA92806B35E4E1946313A95_StaticFields*)il2cpp_codegen_static_fields_for(Glasses_tD7352D8219D253B4BDA92806B35E4E1946313A95_il2cpp_TypeInfo_var))->___U3CglassesAvailableU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Glasses_get_glassesAvailable_mD1875BDEF8F05E262FC2EF15C991F497DCCFAD24_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Glasses_tD7352D8219D253B4BDA92806B35E4E1946313A95_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool glassesAvailable {get; private set;}
		bool L_0 = ((Glasses_tD7352D8219D253B4BDA92806B35E4E1946313A95_StaticFields*)il2cpp_codegen_static_fields_for(Glasses_tD7352D8219D253B4BDA92806B35E4E1946313A95_il2cpp_TypeInfo_var))->___U3CglassesAvailableU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_X_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Y_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mBF96B603B41BED9BAFAA10CE8D946D24260F9729_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_one_m232E885D3C7BB6A96D5FEF4494709BA170447604_inline (const RuntimeMethod* method) 
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
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___oneVector_3;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m29F4414A9D30B7C0CD8455C4B2F049E8CCF66745_inline (float ___d0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a1;
		float L_1 = L_0.___x_2;
		float L_2 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a1;
		float L_4 = L_3.___y_3;
		float L_5 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a1;
		float L_7 = L_6.___z_4;
		float L_8 = ___d0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SplitStereoTextures_set_LeftTexHandle_mE45B51FCC514B6BFD889E0C395866785BF9F7ECD_inline (SplitStereoTextures_t2F64E25FADF72BE3FB1FCC7DD38D97D5684AB2C0* __this, intptr_t ___value0, const RuntimeMethod* method) 
{
	{
		// private IntPtr LeftTexHandle { get; set; }
		intptr_t L_0 = ___value0;
		__this->___U3CLeftTexHandleU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SplitStereoTextures_set_RightTexHandle_m2CF6A5B65F47C01A912BF218AA4BC7117A5E552D_inline (SplitStereoTextures_t2F64E25FADF72BE3FB1FCC7DD38D97D5684AB2C0* __this, intptr_t ___value0, const RuntimeMethod* method) 
{
	{
		// private IntPtr RightTexHandle { get; set; }
		intptr_t L_0 = ___value0;
		__this->___U3CRightTexHandleU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t SplitStereoTextures_get_LeftTexHandle_mDFA60480105689DEA17840845CDEDB2C9A6F38F1_inline (SplitStereoTextures_t2F64E25FADF72BE3FB1FCC7DD38D97D5684AB2C0* __this, const RuntimeMethod* method) 
{
	{
		// private IntPtr LeftTexHandle { get; set; }
		intptr_t L_0 = __this->___U3CLeftTexHandleU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t SplitStereoTextures_get_RightTexHandle_mF08970173C4ED2057F76A430EECF07B92C504C3D_inline (SplitStereoTextures_t2F64E25FADF72BE3FB1FCC7DD38D97D5684AB2C0* __this, const RuntimeMethod* method) 
{
	{
		// private IntPtr RightTexHandle { get; set; }
		intptr_t L_0 = __this->___U3CRightTexHandleU3Ek__BackingField_3;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		float L_1;
		L_1 = Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___value0;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vector0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___vector0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___vector0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vector0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
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
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}

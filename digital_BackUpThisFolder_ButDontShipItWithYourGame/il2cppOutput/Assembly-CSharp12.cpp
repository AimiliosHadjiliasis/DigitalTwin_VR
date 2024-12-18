#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct InvokerFuncInvoker0
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		R ret;
		method->invoker_method(methodPtr, method, obj, NULL, &ret);
		return ret;
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
// System.Func`2<System.Object,System.Int32>
struct Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B;
// System.Func`2<ChartsAndGraphs3D.Slice,System.Boolean>
struct Func_2_tC7E4F6232A41EC3EBC2C1436F2E208CB2FC9CF57;
// System.Func`2<ChartsAndGraphs3D.TextRow,System.Boolean>
struct Func_2_t0EC61CE12B1876AB5F23C97DBA5F32C48783CD40;
// System.Func`2<ChartsAndGraphs3D.TextRow,System.Int32>
struct Func_2_t3EB45392DA7D875B4EDFC3E8B13E52F28B60AE48;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<ChartsAndGraphs3D.TextRow>
struct IEnumerable_1_t4238E62AFFDA7DE93160804BBF956E3B1F7C984E;
// System.Collections.Generic.IEnumerable`1<ChartsAndGraphs3D.TextRowInfo>
struct IEnumerable_1_t8D80A57FA4378BE043239DB907C7010A6963F4FC;
// System.Collections.Generic.List`1<UnityEngine.Color>
struct List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF;
// System.Collections.Generic.List`1<ChartsAndGraphs3D.GlowBehaivior>
struct List_1_t8B0F79AB5A56A47BF39FF7841C6F3DA8F09738E4;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918;
// System.Collections.Generic.List`1<ChartsAndGraphs3D.TextRow>
struct List_1_tC2554F62A6B69847B0230853A828830A7F21D225;
// System.Collections.Generic.List`1<ChartsAndGraphs3D.TextRowInfo>
struct List_1_t69084B05B550AFE6DAA6EA35CAF50DB319ED78D6;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D;
// UnityEngine.Color[]
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// ChartsAndGraphs3D.GlowBehaivior[]
struct GlowBehaiviorU5BU5D_t4CE9AEC6D2BC4B405AB0242C5F5D36217AC39248;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.Renderer[]
struct RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// ChartsAndGraphs3D.TextRow[]
struct TextRowU5BU5D_tDBC3464BD80E70588226D4AE092FBA3A3ABEA1F0;
// ChartsAndGraphs3D.TextRowInfo[]
struct TextRowInfoU5BU5D_tBA5F7122BE0D9FA0D4B6AD7E2BC547615FED92E5;
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// ChartsAndGraphs3D.GlowBehaivior
struct GlowBehaivior_tC7A4C4719FCE52D09BBB24E5E1E3B97128D711EE;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// ChartsAndGraphs3D.PieChart
struct PieChart_t460DED856D925CC2ABB75567D7AB5D36B5BD5EB2;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// ChartsAndGraphs3D.Slice
struct Slice_t1712FA5D8D82B4B58EBB251F87E15FA8E0C82699;
// System.String
struct String_t;
// ChartsAndGraphs3D.TextDisplay
struct TextDisplay_t62A0C3215899FC612D1F2AC5C2F55997D212944F;
// ChartsAndGraphs3D.TextDisplayCreator
struct TextDisplayCreator_t8F6344C7091FB69FCADF4B134160F095942913F9;
// UnityEngine.TextMesh
struct TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8;
// ChartsAndGraphs3D.TextRow
struct TextRow_t4DA6BF0E7C715C5D0CED684CFE9B2BAD37D30AEE;
// ChartsAndGraphs3D.TitleText
struct TitleText_tCCF206F7674AB35EA7AB3C716F088CAC6915C982;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// ChartsAndGraphs3D.ValueBarMaxTextUnityHelper
struct ValueBarMaxTextUnityHelper_t54EFFACAF3320A7509318572F7F3B7DF588720C6;
// ChartsAndGraphs3D.ValueCurrentTextUnityHelper
struct ValueCurrentTextUnityHelper_t51D417922AB5F0B103C81FD35C0732EC7D233DE3;
// ChartsAndGraphs3D.ValueDisplay
struct ValueDisplay_tC05AB01BD20EAF13FC1701E9B59957453AF4491B;
// ChartsAndGraphs3D.Vector3Method
struct Vector3Method_t11EABE8E6896F72E6A3E3CAC834265E52601F0F7;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// ChartsAndGraphs3D.SliceBehaivior/<>c
struct U3CU3Ec_t1313D790F7B2C02DC898AF3D76A7D24B7FB4E883;
// ChartsAndGraphs3D.TextDisplay/<>c
struct U3CU3Ec_t751DC3E5FA444880346D799B4143D6D4A18A5B3E;
// ChartsAndGraphs3D.TextDisplay/<>c__DisplayClass18_0
struct U3CU3Ec__DisplayClass18_0_t7874EBEDEF36AE4272ADA1F44ECDE3C4720C282F;
// ChartsAndGraphs3D.TextDisplay/InfoGetter
struct InfoGetter_tE75744DD40C706C13E49C55440153BC0203EDD0F;

IL2CPP_EXTERN_C RuntimeClass* Func_2_t0EC61CE12B1876AB5F23C97DBA5F32C48783CD40_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t3EB45392DA7D875B4EDFC3E8B13E52F28B60AE48_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InfoGetter_tE75744DD40C706C13E49C55440153BC0203EDD0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t69084B05B550AFE6DAA6EA35CAF50DB319ED78D6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t8B0F79AB5A56A47BF39FF7841C6F3DA8F09738E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tC2554F62A6B69847B0230853A828830A7F21D225_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass18_0_t7874EBEDEF36AE4272ADA1F44ECDE3C4720C282F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t1313D790F7B2C02DC898AF3D76A7D24B7FB4E883_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t751DC3E5FA444880346D799B4143D6D4A18A5B3E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3Method_t11EABE8E6896F72E6A3E3CAC834265E52601F0F7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral02385E2EB31AD27BC793E9DB4552E62A4365D125;
IL2CPP_EXTERN_C String_t* _stringLiteral0FB36CD1A00B1D1D6C215B9FE0CFB093081CBCFA;
IL2CPP_EXTERN_C String_t* _stringLiteral72D498F039FD562896966E064E8315EA0BCE68C5;
IL2CPP_EXTERN_C String_t* _stringLiteral92693503012265C685124755B8E076B10CE139F8;
IL2CPP_EXTERN_C String_t* _stringLiteralB92EF51E45166C91E2762DB6C9F27C8BD6EBE466;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m7CBAFA50AB995C9F53D6140718FCD31D7BEC7CC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisGlowBehaivior_tC7A4C4719FCE52D09BBB24E5E1E3B97128D711EE_mEAB41BBB4038173083BD11985DA32B2988EAF179_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTextRow_t4DA6BF0E7C715C5D0CED684CFE9B2BAD37D30AEE_m3EED5F6F03FA3BCAD077EAFCA4F0EFAEB8541C25_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_FirstOrDefault_TisTextRow_t4DA6BF0E7C715C5D0CED684CFE9B2BAD37D30AEE_mF095AF9B0A559A1C873A7C6C67EB73AF7BD085B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Max_TisTextRow_t4DA6BF0E7C715C5D0CED684CFE9B2BAD37D30AEE_m7671D2FC86DC96034256E69DE46BD325283E2840_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_SequenceEqual_TisTextRowInfo_t15E0C61105094CAB09472E42A2F32009BC8B5695_mA53A383B12F09695171E8848A87A93192B9F69A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisTextRow_t4DA6BF0E7C715C5D0CED684CFE9B2BAD37D30AEE_m77605AFC941DEC190C7583FDD7412B899E0CA614_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mE27B3ED7FB4C70CB1EF8BA67B0E1E29364DE328A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m9E541B813A57B13A3BAE1598E92E420138056CE3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mD583B167D4F9FE414B008B5A207629B6D414407F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTextDisplay_t62A0C3215899FC612D1F2AC5C2F55997D212944F_mA2960943D18287553F4C42EBE3508BFD42DF40D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8_mA4D0E031613166DF4F272D522F45B357243C2D16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mA2746088DB45856FD76C725AB403CEF5A8997734_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m58951F27C87AAE9CF1450B59AB35204C5BE9F886_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m77A325EA4A4E9DA96E846DB54DB191B24E36350D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mD7B66F5361E4985B85855F033E82B1015692C23A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m6AA29931A3E73E919F1F1CEF41811714643FE433_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m53CCCC881D715DEDA138EF9223D219B895ED0386_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m73941180ABB4CE892AA3F877BCF41BEC8BDDDA5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mB13CBC878616E7B618C7939C81789FED3A059370_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m628E74CB2EC83EE670876BB9DB8030350553D64D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m67A5F1C9C14B834F1ECE5DCFDC3C5235C5265ED6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m0ADCE90E346B75D621C274984C0E530774980B0A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m6E4F0D71EB5BC699E12884A4A4D48851F176EDDB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m74B53822969FB1631522E334FC4B7DC0BE3DE2E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mE616D49F5F6197745A12A06084EEE9E6FFCF017F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CAddRowU3Eb__15_0_mB8F6CFF9B7441A317AE068E5AB6E3E151C5CB260_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass18_0_U3CUpdateRowU3Eb__0_mCCED6E3CEC6CE1161A1AFB8FE6B89A81AD1D4A98_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueDisplay_LookAtMethod_m7AE12C3225750B022240A82C80DC108A214D5895_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueDisplay_TitlePositionMethod_m7148EDF7727D9B8D468628C8DC5886E69438192A_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Color>
struct List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<ChartsAndGraphs3D.GlowBehaivior>
struct List_1_t8B0F79AB5A56A47BF39FF7841C6F3DA8F09738E4  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GlowBehaiviorU5BU5D_t4CE9AEC6D2BC4B405AB0242C5F5D36217AC39248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t8B0F79AB5A56A47BF39FF7841C6F3DA8F09738E4_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GlowBehaiviorU5BU5D_t4CE9AEC6D2BC4B405AB0242C5F5D36217AC39248* ___s_emptyArray_5;
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

// System.Collections.Generic.List`1<System.Single>
struct List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<ChartsAndGraphs3D.TextRow>
struct List_1_tC2554F62A6B69847B0230853A828830A7F21D225  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TextRowU5BU5D_tDBC3464BD80E70588226D4AE092FBA3A3ABEA1F0* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tC2554F62A6B69847B0230853A828830A7F21D225_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TextRowU5BU5D_tDBC3464BD80E70588226D4AE092FBA3A3ABEA1F0* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<ChartsAndGraphs3D.TextRowInfo>
struct List_1_t69084B05B550AFE6DAA6EA35CAF50DB319ED78D6  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TextRowInfoU5BU5D_tBA5F7122BE0D9FA0D4B6AD7E2BC547615FED92E5* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t69084B05B550AFE6DAA6EA35CAF50DB319ED78D6_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TextRowInfoU5BU5D_tBA5F7122BE0D9FA0D4B6AD7E2BC547615FED92E5* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

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

// ChartsAndGraphs3D.SliceBehaivior/<>c
struct U3CU3Ec_t1313D790F7B2C02DC898AF3D76A7D24B7FB4E883  : public RuntimeObject
{
};

struct U3CU3Ec_t1313D790F7B2C02DC898AF3D76A7D24B7FB4E883_StaticFields
{
	// ChartsAndGraphs3D.SliceBehaivior/<>c ChartsAndGraphs3D.SliceBehaivior/<>c::<>9
	U3CU3Ec_t1313D790F7B2C02DC898AF3D76A7D24B7FB4E883* ___U3CU3E9_0;
	// System.Func`2<ChartsAndGraphs3D.Slice,System.Boolean> ChartsAndGraphs3D.SliceBehaivior/<>c::<>9__9_1
	Func_2_tC7E4F6232A41EC3EBC2C1436F2E208CB2FC9CF57* ___U3CU3E9__9_1_1;
};

// ChartsAndGraphs3D.TextDisplay/<>c
struct U3CU3Ec_t751DC3E5FA444880346D799B4143D6D4A18A5B3E  : public RuntimeObject
{
};

struct U3CU3Ec_t751DC3E5FA444880346D799B4143D6D4A18A5B3E_StaticFields
{
	// ChartsAndGraphs3D.TextDisplay/<>c ChartsAndGraphs3D.TextDisplay/<>c::<>9
	U3CU3Ec_t751DC3E5FA444880346D799B4143D6D4A18A5B3E* ___U3CU3E9_0;
	// System.Func`2<ChartsAndGraphs3D.TextRow,System.Int32> ChartsAndGraphs3D.TextDisplay/<>c::<>9__15_0
	Func_2_t3EB45392DA7D875B4EDFC3E8B13E52F28B60AE48* ___U3CU3E9__15_0_1;
};

// ChartsAndGraphs3D.TextDisplay/<>c__DisplayClass18_0
struct U3CU3Ec__DisplayClass18_0_t7874EBEDEF36AE4272ADA1F44ECDE3C4720C282F  : public RuntimeObject
{
	// System.Int32 ChartsAndGraphs3D.TextDisplay/<>c__DisplayClass18_0::id
	int32_t ___id_0;
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

// System.Collections.Generic.List`1/Enumerator<ChartsAndGraphs3D.TextRow>
struct Enumerator_t1369B73F0B0C20763B755FE8FC5E7DC9440029A7 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tC2554F62A6B69847B0230853A828830A7F21D225* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	TextRow_t4DA6BF0E7C715C5D0CED684CFE9B2BAD37D30AEE* ____current_3;
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

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12
struct __StaticArrayInitTypeSizeU3D12_t1BDD2193C3F925556BCD5FF35C0AC52DDB0CAB8F 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D12_t1BDD2193C3F925556BCD5FF35C0AC52DDB0CAB8F__padding[12];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24
struct __StaticArrayInitTypeSizeU3D24_t3464DA68B6CCAB9A0A43F94B3DB9AA7E7FDDB19A 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D24_t3464DA68B6CCAB9A0A43F94B3DB9AA7E7FDDB19A__padding[24];
	};
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::04841F4DCEC5FD57BE2018FC808EA3A6F022D53A90A2CC7BE3B174D29A7D5D96
	__StaticArrayInitTypeSizeU3D12_t1BDD2193C3F925556BCD5FF35C0AC52DDB0CAB8F ___04841F4DCEC5FD57BE2018FC808EA3A6F022D53A90A2CC7BE3B174D29A7D5D96_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::DB96679C1D0C73505AD9AF543CB906F56E002FE26A9E2CD34DA2FF02F61EBB53
	__StaticArrayInitTypeSizeU3D24_t3464DA68B6CCAB9A0A43F94B3DB9AA7E7FDDB19A ___DB96679C1D0C73505AD9AF543CB906F56E002FE26A9E2CD34DA2FF02F61EBB53_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::FE78C65211DD0B56A97024FB61111E686EF1FE054AA132BA58E2891AC496F1EE
	__StaticArrayInitTypeSizeU3D24_t3464DA68B6CCAB9A0A43F94B3DB9AA7E7FDDB19A ___FE78C65211DD0B56A97024FB61111E686EF1FE054AA132BA58E2891AC496F1EE_2;
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

// ChartsAndGraphs3D.Slice
struct Slice_t1712FA5D8D82B4B58EBB251F87E15FA8E0C82699  : public RuntimeObject
{
	// System.Int32 ChartsAndGraphs3D.Slice::ID
	int32_t ___ID_0;
	// System.Int32 ChartsAndGraphs3D.Slice::PartID
	int32_t ___PartID_1;
	// UnityEngine.Color ChartsAndGraphs3D.Slice::color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_2;
	// UnityEngine.GameObject ChartsAndGraphs3D.Slice::go
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___go_3;
	// System.Single ChartsAndGraphs3D.Slice::Height
	float ___Height_4;
	// System.Single ChartsAndGraphs3D.Slice::BuildUpSpeed
	float ___BuildUpSpeed_5;
	// System.Boolean ChartsAndGraphs3D.Slice::isBuildUp
	bool ___isBuildUp_6;
	// ChartsAndGraphs3D.PieChart ChartsAndGraphs3D.Slice::parent
	PieChart_t460DED856D925CC2ABB75567D7AB5D36B5BD5EB2* ___parent_7;
};

// ChartsAndGraphs3D.TextDisplayCreator
struct TextDisplayCreator_t8F6344C7091FB69FCADF4B134160F095942913F9  : public RuntimeObject
{
	// System.Boolean ChartsAndGraphs3D.TextDisplayCreator::TextDisplayActive
	bool ___TextDisplayActive_0;
	// UnityEngine.Vector3 ChartsAndGraphs3D.TextDisplayCreator::Position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Position_1;
	// System.String ChartsAndGraphs3D.TextDisplayCreator::PreText
	String_t* ___PreText_2;
	// System.Single ChartsAndGraphs3D.TextDisplayCreator::Scale
	float ___Scale_3;
	// System.Single ChartsAndGraphs3D.TextDisplayCreator::TextRowOffset
	float ___TextRowOffset_4;
	// System.String ChartsAndGraphs3D.TextDisplayCreator::PostText
	String_t* ___PostText_5;
	// ChartsAndGraphs3D.TextDisplay ChartsAndGraphs3D.TextDisplayCreator::TextDisplay
	TextDisplay_t62A0C3215899FC612D1F2AC5C2F55997D212944F* ___TextDisplay_6;
	// UnityEngine.GameObject ChartsAndGraphs3D.TextDisplayCreator::go
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___go_7;
	// ChartsAndGraphs3D.Vector3Method ChartsAndGraphs3D.TextDisplayCreator::LookAtMethod
	Vector3Method_t11EABE8E6896F72E6A3E3CAC834265E52601F0F7* ___LookAtMethod_8;
};

// ChartsAndGraphs3D.TextRowInfo
struct TextRowInfo_t15E0C61105094CAB09472E42A2F32009BC8B5695 
{
	// System.Int32 ChartsAndGraphs3D.TextRowInfo::ID
	int32_t ___ID_0;
	// System.String ChartsAndGraphs3D.TextRowInfo::PreText
	String_t* ___PreText_1;
	// System.Single ChartsAndGraphs3D.TextRowInfo::Value
	float ___Value_2;
	// System.String ChartsAndGraphs3D.TextRowInfo::PostText
	String_t* ___PostText_3;
	// UnityEngine.Color ChartsAndGraphs3D.TextRowInfo::c
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___c_4;
};
// Native definition for P/Invoke marshalling of ChartsAndGraphs3D.TextRowInfo
struct TextRowInfo_t15E0C61105094CAB09472E42A2F32009BC8B5695_marshaled_pinvoke
{
	int32_t ___ID_0;
	char* ___PreText_1;
	float ___Value_2;
	char* ___PostText_3;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___c_4;
};
// Native definition for COM marshalling of ChartsAndGraphs3D.TextRowInfo
struct TextRowInfo_t15E0C61105094CAB09472E42A2F32009BC8B5695_marshaled_com
{
	int32_t ___ID_0;
	Il2CppChar* ___PreText_1;
	float ___Value_2;
	Il2CppChar* ___PostText_3;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___c_4;
};

// ChartsAndGraphs3D.TitleText
struct TitleText_tCCF206F7674AB35EA7AB3C716F088CAC6915C982  : public RuntimeObject
{
	// System.Boolean ChartsAndGraphs3D.TitleText::Active
	bool ___Active_0;
	// UnityEngine.Vector3 ChartsAndGraphs3D.TitleText::PositionOffset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___PositionOffset_1;
	// System.String ChartsAndGraphs3D.TitleText::Text
	String_t* ___Text_2;
	// System.Single ChartsAndGraphs3D.TitleText::Scale
	float ___Scale_3;
	// UnityEngine.Transform ChartsAndGraphs3D.TitleText::go
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___go_4;
};

// ChartsAndGraphs3D.ValueBarMaxTextUnityHelper
struct ValueBarMaxTextUnityHelper_t54EFFACAF3320A7509318572F7F3B7DF588720C6  : public RuntimeObject
{
	// System.Boolean ChartsAndGraphs3D.ValueBarMaxTextUnityHelper::Active
	bool ___Active_0;
	// System.String ChartsAndGraphs3D.ValueBarMaxTextUnityHelper::preText
	String_t* ___preText_1;
	// System.String ChartsAndGraphs3D.ValueBarMaxTextUnityHelper::postText
	String_t* ___postText_2;
	// System.Single ChartsAndGraphs3D.ValueBarMaxTextUnityHelper::Scale
	float ___Scale_3;
	// UnityEngine.GameObject ChartsAndGraphs3D.ValueBarMaxTextUnityHelper::currentObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___currentObject_4;
	// UnityEngine.Vector3 ChartsAndGraphs3D.ValueBarMaxTextUnityHelper::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_5;
};

// ChartsAndGraphs3D.ValueCurrentTextUnityHelper
struct ValueCurrentTextUnityHelper_t51D417922AB5F0B103C81FD35C0732EC7D233DE3  : public RuntimeObject
{
	// System.Boolean ChartsAndGraphs3D.ValueCurrentTextUnityHelper::Active
	bool ___Active_0;
	// System.String ChartsAndGraphs3D.ValueCurrentTextUnityHelper::preText
	String_t* ___preText_1;
	// System.String ChartsAndGraphs3D.ValueCurrentTextUnityHelper::postText
	String_t* ___postText_2;
	// System.Single ChartsAndGraphs3D.ValueCurrentTextUnityHelper::Scale
	float ___Scale_3;
	// UnityEngine.GameObject ChartsAndGraphs3D.ValueCurrentTextUnityHelper::currentObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___currentObject_4;
	// UnityEngine.GameObject ChartsAndGraphs3D.ValueCurrentTextUnityHelper::currentTextMesh
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___currentTextMesh_5;
	// UnityEngine.Vector3 ChartsAndGraphs3D.ValueCurrentTextUnityHelper::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_6;
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

// System.Func`2<ChartsAndGraphs3D.TextRow,System.Boolean>
struct Func_2_t0EC61CE12B1876AB5F23C97DBA5F32C48783CD40  : public MulticastDelegate_t
{
};

// System.Func`2<ChartsAndGraphs3D.TextRow,System.Int32>
struct Func_2_t3EB45392DA7D875B4EDFC3E8B13E52F28B60AE48  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.TextMesh
struct TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// ChartsAndGraphs3D.Vector3Method
struct Vector3Method_t11EABE8E6896F72E6A3E3CAC834265E52601F0F7  : public MulticastDelegate_t
{
};

// ChartsAndGraphs3D.TextDisplay/InfoGetter
struct InfoGetter_tE75744DD40C706C13E49C55440153BC0203EDD0F  : public MulticastDelegate_t
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// ChartsAndGraphs3D.GlowBehaivior
struct GlowBehaivior_tC7A4C4719FCE52D09BBB24E5E1E3B97128D711EE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Renderer ChartsAndGraphs3D.GlowBehaivior::Renderer
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___Renderer_4;
};

// ChartsAndGraphs3D.TextDisplay
struct TextDisplay_t62A0C3215899FC612D1F2AC5C2F55997D212944F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<ChartsAndGraphs3D.TextRow> ChartsAndGraphs3D.TextDisplay::Rows
	List_1_tC2554F62A6B69847B0230853A828830A7F21D225* ___Rows_4;
	// System.Collections.Generic.List`1<ChartsAndGraphs3D.TextRowInfo> ChartsAndGraphs3D.TextDisplay::LastInfos
	List_1_t69084B05B550AFE6DAA6EA35CAF50DB319ED78D6* ___LastInfos_5;
	// UnityEngine.GameObject ChartsAndGraphs3D.TextDisplay::RowPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___RowPrefab_6;
	// ChartsAndGraphs3D.TextRowInfo ChartsAndGraphs3D.TextDisplay::Info
	TextRowInfo_t15E0C61105094CAB09472E42A2F32009BC8B5695 ___Info_7;
	// ChartsAndGraphs3D.TextDisplayCreator ChartsAndGraphs3D.TextDisplay::creator
	TextDisplayCreator_t8F6344C7091FB69FCADF4B134160F095942913F9* ___creator_8;
	// ChartsAndGraphs3D.TextDisplay/InfoGetter ChartsAndGraphs3D.TextDisplay::InfoGetterEvent
	InfoGetter_tE75744DD40C706C13E49C55440153BC0203EDD0F* ___InfoGetterEvent_9;
	// UnityEngine.Vector3 ChartsAndGraphs3D.TextDisplay::Position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Position_10;
};

// ChartsAndGraphs3D.TextRow
struct TextRow_t4DA6BF0E7C715C5D0CED684CFE9B2BAD37D30AEE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// ChartsAndGraphs3D.TextRowInfo ChartsAndGraphs3D.TextRow::info
	TextRowInfo_t15E0C61105094CAB09472E42A2F32009BC8B5695 ___info_4;
	// UnityEngine.TextMesh ChartsAndGraphs3D.TextRow::DisplayText
	TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* ___DisplayText_5;
	// UnityEngine.Renderer ChartsAndGraphs3D.TextRow::Cube
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___Cube_6;
};

// ChartsAndGraphs3D.ValueDisplay
struct ValueDisplay_tC05AB01BD20EAF13FC1701E9B59957453AF4491B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// ChartsAndGraphs3D.TitleText ChartsAndGraphs3D.ValueDisplay::TitleText
	TitleText_tCCF206F7674AB35EA7AB3C716F088CAC6915C982* ___TitleText_4;
	// UnityEngine.Color ChartsAndGraphs3D.ValueDisplay::BorderColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___BorderColor_5;
	// UnityEngine.Color ChartsAndGraphs3D.ValueDisplay::ValueBarColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___ValueBarColor_6;
	// UnityEngine.Color ChartsAndGraphs3D.ValueDisplay::ValueBarNotActiveColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___ValueBarNotActiveColor_7;
	// System.Single ChartsAndGraphs3D.ValueDisplay::Val
	float ___Val_8;
	// System.Single ChartsAndGraphs3D.ValueDisplay::MaxVal
	float ___MaxVal_9;
	// System.Boolean ChartsAndGraphs3D.ValueDisplay::Glow
	bool ___Glow_10;
	// ChartsAndGraphs3D.ValueCurrentTextUnityHelper ChartsAndGraphs3D.ValueDisplay::CurrentValueText
	ValueCurrentTextUnityHelper_t51D417922AB5F0B103C81FD35C0732EC7D233DE3* ___CurrentValueText_11;
	// ChartsAndGraphs3D.ValueBarMaxTextUnityHelper ChartsAndGraphs3D.ValueDisplay::MaxValueText
	ValueBarMaxTextUnityHelper_t54EFFACAF3320A7509318572F7F3B7DF588720C6* ___MaxValueText_12;
	// UnityEngine.GameObject ChartsAndGraphs3D.ValueDisplay::Border
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Border_13;
	// System.Collections.Generic.List`1<UnityEngine.Transform> ChartsAndGraphs3D.ValueDisplay::ValueBars
	List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* ___ValueBars_14;
	// System.Collections.Generic.List`1<ChartsAndGraphs3D.GlowBehaivior> ChartsAndGraphs3D.ValueDisplay::ValueBarsGlow
	List_1_t8B0F79AB5A56A47BF39FF7841C6F3DA8F09738E4* ___ValueBarsGlow_15;
	// System.Boolean ChartsAndGraphs3D.ValueDisplay::Changed
	bool ___Changed_16;
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
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D  : public RuntimeArray
{
	ALIGN_FIELD (8) Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* m_Items[1];

	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Renderer[]
struct RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A  : public RuntimeArray
{
	ALIGN_FIELD (8) Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* m_Items[1];

	inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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


// System.Boolean System.Linq.Enumerable::SequenceEqual<ChartsAndGraphs3D.TextRowInfo>(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_SequenceEqual_TisTextRowInfo_t15E0C61105094CAB09472E42A2F32009BC8B5695_mA53A383B12F09695171E8848A87A93192B9F69A9_gshared (RuntimeObject* ___first0, RuntimeObject* ___second1, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<ChartsAndGraphs3D.TextRowInfo>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextRowInfo_t15E0C61105094CAB09472E42A2F32009BC8B5695 List_1_get_Item_m74B53822969FB1631522E334FC4B7DC0BE3DE2E6_gshared (List_1_t69084B05B550AFE6DAA6EA35CAF50DB319ED78D6* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<ChartsAndGraphs3D.TextRowInfo>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m67A5F1C9C14B834F1ECE5DCFDC3C5235C5265ED6_gshared_inline (List_1_t69084B05B550AFE6DAA6EA35CAF50DB319ED78D6* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Single>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_gshared (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.Color>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F List_1_get_Item_mE616D49F5F6197745A12A06084EEE9E6FFCF017F_gshared (List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Single>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_gshared_inline (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mEB7603EDE6D79A62E5BD74A896F030D2C9F2A821_gshared (Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Int32 System.Linq.Enumerable::Max<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Enumerable_Max_TisRuntimeObject_m6BF1C87C9461609AC1B31FF140679A00DD798C2E_gshared (RuntimeObject* ___source0, Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* ___selector1, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m872899879F710B2E55BC157F35464F03877C8DFA_gshared (RuntimeObject* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Where_TisRuntimeObject_m046DED489E38F15407F5825AD753C4090F103893_gshared (RuntimeObject* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::FirstOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_FirstOrDefault_TisRuntimeObject_m9A7C2BF942D2CE1640896A41290BBD682568B6C8_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<ChartsAndGraphs3D.TextRowInfo>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m53CCCC881D715DEDA138EF9223D219B895ED0386_gshared (List_1_t69084B05B550AFE6DAA6EA35CAF50DB319ED78D6* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.GameObject::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* GameObject_GetComponentsInChildren_TisRuntimeObject_m6F69570C0224EE6620FD43C4DDB0F0AB152A1B20_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;

// System.Void ChartsAndGraphs3D.SliceBehaivior/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mF76A0CA85C8005485FC90A7C45228ED66649F332 (U3CU3Ec_t1313D790F7B2C02DC898AF3D76A7D24B7FB4E883* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_lossyScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 ChartsAndGraphs3D.Vector3Method::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3Method_Invoke_mF0EF5E8004EEB1649F0AAA3B1AE112C51EB02F47_inline (Vector3Method_t11EABE8E6896F72E6A3E3CAC834265E52601F0F7* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_LookAt_mFEF7353E4CAEB85D5F7CEEF9276C3B8D6E314C6C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<ChartsAndGraphs3D.TextRowInfo> ChartsAndGraphs3D.TextDisplay/InfoGetter::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t69084B05B550AFE6DAA6EA35CAF50DB319ED78D6* InfoGetter_Invoke_mFEFAB45F3F95421FCAD8CCB39812A75899648F4B_inline (InfoGetter_tE75744DD40C706C13E49C55440153BC0203EDD0F* __this, const RuntimeMethod* method) ;
// System.Boolean System.Linq.Enumerable::SequenceEqual<ChartsAndGraphs3D.TextRowInfo>(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
inline bool Enumerable_SequenceEqual_TisTextRowInfo_t15E0C61105094CAB09472E42A2F32009BC8B5695_mA53A383B12F09695171E8848A87A93192B9F69A9 (RuntimeObject* ___first0, RuntimeObject* ___second1, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Enumerable_SequenceEqual_TisTextRowInfo_t15E0C61105094CAB09472E42A2F32009BC8B5695_mA53A383B12F09695171E8848A87A93192B9F69A9_gshared)(___first0, ___second1, method);
}
// System.Void ChartsAndGraphs3D.TextDisplay::ResetRows()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextDisplay_ResetRows_mA5800F56001BF4876E06999AC7252501ECAA5C71 (TextDisplay_t62A0C3215899FC612D1F2AC5C2F55997D212944F* __this, const RuntimeMethod* method) ;
// System.Void ChartsAndGraphs3D.TextDisplay::AddRows(System.Collections.Generic.List`1<ChartsAndGraphs3D.TextRowInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextDisplay_AddRows_mE3B76542717A7E256BA50C497B5067503C3E2C0F (TextDisplay_t62A0C3215899FC612D1F2AC5C2F55997D212944F* __this, List_1_t69084B05B550AFE6DAA6EA35CAF50DB319ED78D6* ___infos0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<ChartsAndGraphs3D.TextRowInfo>::get_Item(System.Int32)
inline TextRowInfo_t15E0C61105094CAB09472E42A2F32009BC8B5695 List_1_get_Item_m74B53822969FB1631522E334FC4B7DC0BE3DE2E6 (List_1_t69084B05B550AFE6DAA6EA35CAF50DB319ED78D6* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  TextRowInfo_t15E0C61105094CAB09472E42A2F32009BC8B5695 (*) (List_1_t69084B05B550AFE6DAA6EA35CAF50DB319ED78D6*, int32_t, const RuntimeMethod*))List_1_get_Item_m74B53822969FB1631522E334FC4B7DC0BE3DE2E6_gshared)(__this, ___index0, method);
}
// System.Int32 ChartsAndGraphs3D.TextDisplay::AddRow(ChartsAndGraphs3D.TextRowInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextDisplay_AddRow_mB48546613B888E39DC4DC43E3769C82A7C62A331 (TextDisplay_t62A0C3215899FC612D1F2AC5C2F55997D212944F* __this, TextRowInfo_t15E0C61105094CAB09472E42A2F32009BC8B5695 ___info0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<ChartsAndGraphs3D.TextRowInfo>::get_Count()
inline int32_t List_1_get_Count_m67A5F1C9C14B834F1ECE5DCFDC3C5235C5265ED6_inline (List_1_t69084B05B550AFE6DAA6EA35CAF50DB319ED78D6* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t69084B05B550AFE6DAA6EA35CAF50DB319ED78D6*, const RuntimeMethod*))List_1_get_Count_m67A5F1C9C14B834F1ECE5DCFDC3C5235C5265ED6_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<System.Single>::get_Item(System.Int32)
inline float List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50 (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  float (*) (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*, int32_t, const RuntimeMethod*))List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_gshared)(__this, ___index0, method);
}
// T System.Collections.Generic.List`1<UnityEngine.Color>::get_Item(System.Int32)
inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F List_1_get_Item_mE616D49F5F6197745A12A06084EEE9E6FFCF017F (List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Color_tD001788D726C3A7F1379BEED0260B9591F440C1F (*) (List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF*, int32_t, const RuntimeMethod*))List_1_get_Item_mE616D49F5F6197745A12A06084EEE9E6FFCF017F_gshared)(__this, ___index0, method);
}
// System.Int32 ChartsAndGraphs3D.TextDisplay::AddRow(System.Single,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextDisplay_AddRow_mD006BBE49A61A591DDA1A05FB523E036364FBC61 (TextDisplay_t62A0C3215899FC612D1F2AC5C2F55997D212944F* __this, float ___val0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___c1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Single>::get_Count()
inline int32_t List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_inline (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*, const RuntimeMethod*))List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_gshared_inline)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<ChartsAndGraphs3D.TextRow>::get_Count()
inline int32_t List_1_get_Count_m628E74CB2EC83EE670876BB9DB8030350553D64D_inline (List_1_tC2554F62A6B69847B0230853A828830A7F21D225* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tC2554F62A6B69847B0230853A828830A7F21D225*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void System.Func`2<ChartsAndGraphs3D.TextRow,System.Int32>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mB4CD7ADB46626B59C80B522FB358586EFB35311C (Func_2_t3EB45392DA7D875B4EDFC3E8B13E52F28B60AE48* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t3EB45392DA7D875B4EDFC3E8B13E52F28B60AE48*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_mEB7603EDE6D79A62E5BD74A896F030D2C9F2A821_gshared)(__this, ___object0, ___method1, method);
}
// System.Int32 System.Linq.Enumerable::Max<ChartsAndGraphs3D.TextRow>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Int32>)
inline int32_t Enumerable_Max_TisTextRow_t4DA6BF0E7C715C5D0CED684CFE9B2BAD37D30AEE_m7671D2FC86DC96034256E69DE46BD325283E2840 (RuntimeObject* ___source0, Func_2_t3EB45392DA7D875B4EDFC3E8B13E52F28B60AE48* ___selector1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RuntimeObject*, Func_2_t3EB45392DA7D875B4EDFC3E8B13E52F28B60AE48*, const RuntimeMethod*))Enumerable_Max_TisRuntimeObject_m6BF1C87C9461609AC1B31FF140679A00DD798C2E_gshared)(___source0, ___selector1, method);
}
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Transform)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m872899879F710B2E55BC157F35464F03877C8DFA_gshared)(___original0, ___parent1, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<ChartsAndGraphs3D.TextRow>()
inline TextRow_t4DA6BF0E7C715C5D0CED684CFE9B2BAD37D30AEE* Component_GetComponent_TisTextRow_t4DA6BF0E7C715C5D0CED684CFE9B2BAD37D30AEE_m3EED5F6F03FA3BCAD077EAFCA4F0EFAEB8541C25 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  TextRow_t4DA6BF0E7C715C5D0CED684CFE9B2BAD37D30AEE* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void ChartsAndGraphs3D.TextRow::SetValues(ChartsAndGraphs3D.TextRowInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextRow_SetValues_mC17E9324EB787F48FE10E6A031F7454058BF36AA (TextRow_t4DA6BF0E7C715C5D0CED684CFE9B2BAD37D30AEE* __this, TextRowInfo_t15E0C61105094CAB09472E42A2F32009BC8B5695 ___i0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<ChartsAndGraphs3D.TextRow>::Add(T)
inline void List_1_Add_m77A325EA4A4E9DA96E846DB54DB191B24E36350D_inline (List_1_tC2554F62A6B69847B0230853A828830A7F21D225* __this, TextRow_t4DA6BF0E7C715C5D0CED684CFE9B2BAD37D30AEE* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC2554F62A6B69847B0230853A828830A7F21D225*, TextRow_t4DA6BF0E7C715C5D0CED684CFE9B2BAD37D30AEE*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void ChartsAndGraphs3D.TextDisplay::CheckPositions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextDisplay_CheckPositions_m478A793929AFBF8A6F4C026ED0B99CA812266ACB (TextDisplay_t62A0C3215899FC612D1F2AC5C2F55997D212944F* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<ChartsAndGraphs3D.TextRow>::get_Item(System.Int32)
inline TextRow_t4DA6BF0E7C715C5D0CED684CFE9B2BAD37D30AEE* List_1_get_Item_m0ADCE90E346B75D621C274984C0E530774980B0A (List_1_tC2554F62A6B69847B0230853A828830A7F21D225* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  TextRow_t4DA6BF0E7C715C5D0CED684CFE9B2BAD37D30AEE* (*) (List_1_tC2554F62A6B69847B0230853A828830A7F21D225*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<ChartsAndGraphs3D.TextRow>::GetEnumerator()
inline Enumerator_t1369B73F0B0C20763B755FE8FC5E7DC9440029A7 List_1_GetEnumerator_m6AA29931A3E73E919F1F1CEF41811714643FE433 (List_1_tC2554F62A6B69847B0230853A828830A7F21D225* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t1369B73F0B0C20763B755FE8FC5E7DC9440029A7 (*) (List_1_tC2554F62A6B69847B0230853A828830A7F21D225*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<ChartsAndGraphs3D.TextRow>::Dispose()
inline void Enumerator_Dispose_mE27B3ED7FB4C70CB1EF8BA67B0E1E29364DE328A (Enumerator_t1369B73F0B0C20763B755FE8FC5E7DC9440029A7* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t1369B73F0B0C20763B755FE8FC5E7DC9440029A7*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<ChartsAndGraphs3D.TextRow>::get_Current()
inline TextRow_t4DA6BF0E7C715C5D0CED684CFE9B2BAD37D30AEE* Enumerator_get_Current_mD583B167D4F9FE414B008B5A207629B6D414407F_inline (Enumerator_t1369B73F0B0C20763B755FE8FC5E7DC9440029A7* __this, const RuntimeMethod* method)
{
	return ((  TextRow_t4DA6BF0E7C715C5D0CED684CFE9B2BAD37D30AEE* (*) (Enumerator_t1369B73F0B0C20763B755FE8FC5E7DC9440029A7*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<ChartsAndGraphs3D.TextRow>::MoveNext()
inline bool Enumerator_MoveNext_m9E541B813A57B13A3BAE1598E92E420138056CE3 (Enumerator_t1369B73F0B0C20763B755FE8FC5E7DC9440029A7* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t1369B73F0B0C20763B755FE8FC5E7DC9440029A7*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<ChartsAndGraphs3D.TextRow>::Clear()
inline void List_1_Clear_mD7B66F5361E4985B85855F033E82B1015692C23A_inline (List_1_tC2554F62A6B69847B0230853A828830A7F21D225* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC2554F62A6B69847B0230853A828830A7F21D225*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void ChartsAndGraphs3D.TextDisplay/<>c__DisplayClass18_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass18_0__ctor_m8E5865D145FDFAF124877612718E608539C6863F (U3CU3Ec__DisplayClass18_0_t7874EBEDEF36AE4272ADA1F44ECDE3C4720C282F* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<ChartsAndGraphs3D.TextRow,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mA8B66DC9E34E1D02A53620F373216218439CA856 (Func_2_t0EC61CE12B1876AB5F23C97DBA5F32C48783CD40* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t0EC61CE12B1876AB5F23C97DBA5F32C48783CD40*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<ChartsAndGraphs3D.TextRow>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisTextRow_t4DA6BF0E7C715C5D0CED684CFE9B2BAD37D30AEE_m77605AFC941DEC190C7583FDD7412B899E0CA614 (RuntimeObject* ___source0, Func_2_t0EC61CE12B1876AB5F23C97DBA5F32C48783CD40* ___predicate1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t0EC61CE12B1876AB5F23C97DBA5F32C48783CD40*, const RuntimeMethod*))Enumerable_Where_TisRuntimeObject_m046DED489E38F15407F5825AD753C4090F103893_gshared)(___source0, ___predicate1, method);
}
// TSource System.Linq.Enumerable::FirstOrDefault<ChartsAndGraphs3D.TextRow>(System.Collections.Generic.IEnumerable`1<TSource>)
inline TextRow_t4DA6BF0E7C715C5D0CED684CFE9B2BAD37D30AEE* Enumerable_FirstOrDefault_TisTextRow_t4DA6BF0E7C715C5D0CED684CFE9B2BAD37D30AEE_mF095AF9B0A559A1C873A7C6C67EB73AF7BD085B6 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  TextRow_t4DA6BF0E7C715C5D0CED684CFE9B2BAD37D30AEE* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_FirstOrDefault_TisRuntimeObject_m9A7C2BF942D2CE1640896A41290BBD682568B6C8_gshared)(___source0, method);
}
// System.Void System.Collections.Generic.List`1<ChartsAndGraphs3D.TextRow>::.ctor()
inline void List_1__ctor_m73941180ABB4CE892AA3F877BCF41BEC8BDDDA5F (List_1_tC2554F62A6B69847B0230853A828830A7F21D225* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC2554F62A6B69847B0230853A828830A7F21D225*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<ChartsAndGraphs3D.TextRowInfo>::.ctor()
inline void List_1__ctor_m53CCCC881D715DEDA138EF9223D219B895ED0386 (List_1_t69084B05B550AFE6DAA6EA35CAF50DB319ED78D6* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t69084B05B550AFE6DAA6EA35CAF50DB319ED78D6*, const RuntimeMethod*))List_1__ctor_m53CCCC881D715DEDA138EF9223D219B895ED0386_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void ChartsAndGraphs3D.TextDisplay/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m9AEB63DCFF31DAC725C63C83D2B8F0FDCB952A91 (U3CU3Ec_t751DC3E5FA444880346D799B4143D6D4A18A5B3E* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337 (const RuntimeMethod* method) ;
// UnityEngine.Object UnityEngine.Resources::Load(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* Resources_Load_m9608D2902F542C0B7FD52EFED088323448B9FA35 (String_t* ___path0, const RuntimeMethod* method) ;
// UnityEngine.Object UnityEngine.Object::Instantiate(UnityEngine.Object,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* Object_Instantiate_m90EE7E6E78EB85F0B35D68943EEE7187F27F9021 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<ChartsAndGraphs3D.TextDisplay>()
inline TextDisplay_t62A0C3215899FC612D1F2AC5C2F55997D212944F* GameObject_GetComponent_TisTextDisplay_t62A0C3215899FC612D1F2AC5C2F55997D212944F_mA2960943D18287553F4C42EBE3508BFD42DF40D5 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  TextDisplay_t62A0C3215899FC612D1F2AC5C2F55997D212944F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void ChartsAndGraphs3D.TextDisplay::add_InfoGetterEvent(ChartsAndGraphs3D.TextDisplay/InfoGetter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextDisplay_add_InfoGetterEvent_m27DB92ADDF9BE83B5A13502D1FC6CD29C718C148 (TextDisplay_t62A0C3215899FC612D1F2AC5C2F55997D212944F* __this, InfoGetter_tE75744DD40C706C13E49C55440153BC0203EDD0F* ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.TextMesh>()
inline TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* GameObject_GetComponent_TisTextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8_mA4D0E031613166DF4F272D522F45B357243C2D16 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.TextMesh::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextMesh_set_text_mDF79D39638ED82797D0B0B3BB9E6B10712F8EA9E (TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// UnityEngine.Material[] UnityEngine.Renderer::get_materials()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* Renderer_get_materials_m43D33328432700524EAEAB093C67AE5689976118 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::EnableKeyword(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_EnableKeyword_mE8523EF6CF694284DF976D47ADEDE9363A1174AC (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___keyword0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetColor(System.String,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::DisableKeyword(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_DisableKeyword_mC123927EBF2F2A19220A4456C8EA19F2BA416E8C (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___keyword0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<UnityEngine.Renderer>()
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* Component_GetComponentInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m7CBAFA50AB995C9F53D6140718FCD31D7BEC7CC8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// System.Void ChartsAndGraphs3D.Vector3Method::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3Method__ctor_m2E07425EAD23FD8EB14F35D1406FC418C9676D81 (Vector3Method_t11EABE8E6896F72E6A3E3CAC834265E52601F0F7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void ChartsAndGraphs3D.TitleText::Create(UnityEngine.Transform,ChartsAndGraphs3D.Vector3Method,ChartsAndGraphs3D.Vector3Method)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TitleText_Create_m2A5B6AB7E6ABC77F96BDDF9D36E47F15387582D4 (TitleText_tCCF206F7674AB35EA7AB3C716F088CAC6915C982* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent0, Vector3Method_t11EABE8E6896F72E6A3E3CAC834265E52601F0F7* ___posMethod1, Vector3Method_t11EABE8E6896F72E6A3E3CAC834265E52601F0F7* ___directionMethod2, const RuntimeMethod* method) ;
// System.Void ChartsAndGraphs3D.ValueDisplay::UpdateTexts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueDisplay_UpdateTexts_mF12EF900345889DB05C0F020FFBE12A8B08DF0E0 (ValueDisplay_tC05AB01BD20EAF13FC1701E9B59957453AF4491B* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void ChartsAndGraphs3D.ValueDisplay::set_Value(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueDisplay_set_Value_mD55721728BC73B922F86F4A08EF6B2D470AFC753 (ValueDisplay_tC05AB01BD20EAF13FC1701E9B59957453AF4491B* __this, float ___value0, const RuntimeMethod* method) ;
// System.Single ChartsAndGraphs3D.ValueDisplay::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ValueDisplay_get_Value_m8A772E57F3925EB0124107AF6EFAC8AF646DA914_inline (ValueDisplay_tC05AB01BD20EAF13FC1701E9B59957453AF4491B* __this, const RuntimeMethod* method) ;
// System.Void ChartsAndGraphs3D.ValueDisplay::IncreaseValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueDisplay_IncreaseValue_m57538BA927856BCDEDD8B66C317165E5D986B0A5 (ValueDisplay_tC05AB01BD20EAF13FC1701E9B59957453AF4491B* __this, float ___val0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Renderer>()
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void ChartsAndGraphs3D.ValueDisplay::ToggleGlow(System.Boolean,UnityEngine.Renderer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueDisplay_ToggleGlow_m47DA8AA21F0FCC9087B476E73620078C931211FB (ValueDisplay_tC05AB01BD20EAF13FC1701E9B59957453AF4491B* __this, bool ___Glow0, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___r1, const RuntimeMethod* method) ;
// T[] UnityEngine.GameObject::GetComponentsInChildren<UnityEngine.Renderer>()
inline RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* GameObject_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mA2746088DB45856FD76C725AB403CEF5A8997734 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentsInChildren_TisRuntimeObject_m6F69570C0224EE6620FD43C4DDB0F0AB152A1B20_gshared)(__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.Transform>::get_Item(System.Int32)
inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// T UnityEngine.Component::GetComponent<ChartsAndGraphs3D.GlowBehaivior>()
inline GlowBehaivior_tC7A4C4719FCE52D09BBB24E5E1E3B97128D711EE* Component_GetComponent_TisGlowBehaivior_tC7A4C4719FCE52D09BBB24E5E1E3B97128D711EE_mEAB41BBB4038173083BD11985DA32B2988EAF179 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  GlowBehaivior_tC7A4C4719FCE52D09BBB24E5E1E3B97128D711EE* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<ChartsAndGraphs3D.GlowBehaivior>::Add(T)
inline void List_1_Add_m58951F27C87AAE9CF1450B59AB35204C5BE9F886_inline (List_1_t8B0F79AB5A56A47BF39FF7841C6F3DA8F09738E4* __this, GlowBehaivior_tC7A4C4719FCE52D09BBB24E5E1E3B97128D711EE* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8B0F79AB5A56A47BF39FF7841C6F3DA8F09738E4*, GlowBehaivior_tC7A4C4719FCE52D09BBB24E5E1E3B97128D711EE*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// T System.Collections.Generic.List`1<ChartsAndGraphs3D.GlowBehaivior>::get_Item(System.Int32)
inline GlowBehaivior_tC7A4C4719FCE52D09BBB24E5E1E3B97128D711EE* List_1_get_Item_m6E4F0D71EB5BC699E12884A4A4D48851F176EDDB (List_1_t8B0F79AB5A56A47BF39FF7841C6F3DA8F09738E4* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  GlowBehaivior_tC7A4C4719FCE52D09BBB24E5E1E3B97128D711EE* (*) (List_1_t8B0F79AB5A56A47BF39FF7841C6F3DA8F09738E4*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void ChartsAndGraphs3D.GlowBehaivior::SetEmissionColor(System.Int32,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlowBehaivior_SetEmissionColor_m3D263EF5E7891986C677FE42DF345AEAB2D7260A (GlowBehaivior_tC7A4C4719FCE52D09BBB24E5E1E3B97128D711EE* __this, int32_t ___i0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___c1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Transform>::get_Count()
inline int32_t List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_inline (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void ChartsAndGraphs3D.GlowBehaivior::Glow(System.Boolean,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlowBehaivior_Glow_m7E8156A30039E71673EF6DB6A5B954F3B89B98F6 (GlowBehaivior_tC7A4C4719FCE52D09BBB24E5E1E3B97128D711EE* __this, bool ___glow0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___c1, const RuntimeMethod* method) ;
// System.Double System.Math::Round(System.Double,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Math_Round_mAE7072AE69091258FAA8BD5923CE4A0E492B5B7D_inline (double ___value0, int32_t ___digits1, const RuntimeMethod* method) ;
// System.String System.Double::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Double_ToString_m7499A5D792419537DCB9470A3675CEF5117DE339 (double* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_blue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_blue_m0D04554379CB8606EF48E3091CDC3098B81DD86D_inline (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::.ctor()
inline void List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268 (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<ChartsAndGraphs3D.GlowBehaivior>::.ctor()
inline void List_1__ctor_mB13CBC878616E7B618C7939C81789FED3A059370 (List_1_t8B0F79AB5A56A47BF39FF7841C6F3DA8F09738E4* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8B0F79AB5A56A47BF39FF7841C6F3DA8F09738E4*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Double System.Math::Round(System.Double,System.Int32,System.MidpointRounding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Math_Round_mA90F6B1668D55BC6C538EBF0302B30E406E242B0 (double ___value0, int32_t ___digits1, int32_t ___mode2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ChartsAndGraphs3D.SliceBehaivior/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mC0F16EFC3D4E73CCD492A00378E5278A77E76028 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t1313D790F7B2C02DC898AF3D76A7D24B7FB4E883_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t1313D790F7B2C02DC898AF3D76A7D24B7FB4E883* L_0 = (U3CU3Ec_t1313D790F7B2C02DC898AF3D76A7D24B7FB4E883*)il2cpp_codegen_object_new(U3CU3Ec_t1313D790F7B2C02DC898AF3D76A7D24B7FB4E883_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mF76A0CA85C8005485FC90A7C45228ED66649F332(L_0, NULL);
		((U3CU3Ec_t1313D790F7B2C02DC898AF3D76A7D24B7FB4E883_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1313D790F7B2C02DC898AF3D76A7D24B7FB4E883_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t1313D790F7B2C02DC898AF3D76A7D24B7FB4E883_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1313D790F7B2C02DC898AF3D76A7D24B7FB4E883_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void ChartsAndGraphs3D.SliceBehaivior/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mF76A0CA85C8005485FC90A7C45228ED66649F332 (U3CU3Ec_t1313D790F7B2C02DC898AF3D76A7D24B7FB4E883* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean ChartsAndGraphs3D.SliceBehaivior/<>c::<Update>b__9_1(ChartsAndGraphs3D.Slice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CUpdateU3Eb__9_1_mD27E911A3BC7B1B370BCFF5F12621B8BB0C36E3A (U3CU3Ec_t1313D790F7B2C02DC898AF3D76A7D24B7FB4E883* __this, Slice_t1712FA5D8D82B4B58EBB251F87E15FA8E0C82699* ___s0, const RuntimeMethod* method) 
{
	{
		// if (info.parent.Slices.Where(s => s.PartID == info.PartID).All(s => s.isBuildUp))
		Slice_t1712FA5D8D82B4B58EBB251F87E15FA8E0C82699* L_0 = ___s0;
		NullCheck(L_0);
		bool L_1 = L_0->___isBuildUp_6;
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
Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3Method_Invoke_mF0EF5E8004EEB1649F0AAA3B1AE112C51EB02F47_Multicast(Vector3Method_t11EABE8E6896F72E6A3E3CAC834265E52601F0F7* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 retVal;
	memset((&retVal), 0, sizeof(retVal));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Vector3Method_t11EABE8E6896F72E6A3E3CAC834265E52601F0F7* currentDelegate = reinterpret_cast<Vector3Method_t11EABE8E6896F72E6A3E3CAC834265E52601F0F7*>(delegatesToInvoke[i]);
		typedef Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3Method_Invoke_mF0EF5E8004EEB1649F0AAA3B1AE112C51EB02F47_Open(Vector3Method_t11EABE8E6896F72E6A3E3CAC834265E52601F0F7* __this, const RuntimeMethod* method)
{
	typedef Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*FunctionPointerType) (const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(method);
}
Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3Method_Invoke_mF0EF5E8004EEB1649F0AAA3B1AE112C51EB02F47_OpenStaticInvoker(Vector3Method_t11EABE8E6896F72E6A3E3CAC834265E52601F0F7* __this, const RuntimeMethod* method)
{
	return InvokerFuncInvoker0< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(__this->___method_ptr_0, method, NULL);
}
Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3Method_Invoke_mF0EF5E8004EEB1649F0AAA3B1AE112C51EB02F47_ClosedStaticInvoker(Vector3Method_t11EABE8E6896F72E6A3E3CAC834265E52601F0F7* __this, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 DelegatePInvokeWrapper_Vector3Method_t11EABE8E6896F72E6A3E3CAC834265E52601F0F7 (Vector3Method_t11EABE8E6896F72E6A3E3CAC834265E52601F0F7* __this, const RuntimeMethod* method)
{
	typedef Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 returnValue = il2cppPInvokeFunc();

	return returnValue;
}
// System.Void ChartsAndGraphs3D.Vector3Method::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3Method__ctor_m2E07425EAD23FD8EB14F35D1406FC418C9676D81 (Vector3Method_t11EABE8E6896F72E6A3E3CAC834265E52601F0F7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&Vector3Method_Invoke_mF0EF5E8004EEB1649F0AAA3B1AE112C51EB02F47_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&Vector3Method_Invoke_mF0EF5E8004EEB1649F0AAA3B1AE112C51EB02F47_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&Vector3Method_Invoke_mF0EF5E8004EEB1649F0AAA3B1AE112C51EB02F47_Open;
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
	__this->___extra_arg_5 = (intptr_t)&Vector3Method_Invoke_mF0EF5E8004EEB1649F0AAA3B1AE112C51EB02F47_Multicast;
}
// UnityEngine.Vector3 ChartsAndGraphs3D.Vector3Method::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3Method_Invoke_mF0EF5E8004EEB1649F0AAA3B1AE112C51EB02F47 (Vector3Method_t11EABE8E6896F72E6A3E3CAC834265E52601F0F7* __this, const RuntimeMethod* method) 
{
	typedef Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult ChartsAndGraphs3D.Vector3Method::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Vector3Method_BeginInvoke_m1AFDD5DCF7AD5A2AD2FA75412EE7681E6A691182 (Vector3Method_t11EABE8E6896F72E6A3E3CAC834265E52601F0F7* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback0, RuntimeObject* ___object1, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// UnityEngine.Vector3 ChartsAndGraphs3D.Vector3Method::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3Method_EndInvoke_m14E8C222FFF7FD0982681D17813F53F0B5B05D45 (Vector3Method_t11EABE8E6896F72E6A3E3CAC834265E52601F0F7* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ChartsAndGraphs3D.TextDisplay::add_InfoGetterEvent(ChartsAndGraphs3D.TextDisplay/InfoGetter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextDisplay_add_InfoGetterEvent_m27DB92ADDF9BE83B5A13502D1FC6CD29C718C148 (TextDisplay_t62A0C3215899FC612D1F2AC5C2F55997D212944F* __this, InfoGetter_tE75744DD40C706C13E49C55440153BC0203EDD0F* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InfoGetter_tE75744DD40C706C13E49C55440153BC0203EDD0F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InfoGetter_tE75744DD40C706C13E49C55440153BC0203EDD0F* V_0 = NULL;
	InfoGetter_tE75744DD40C706C13E49C55440153BC0203EDD0F* V_1 = NULL;
	InfoGetter_tE75744DD40C706C13E49C55440153BC0203EDD0F* V_2 = NULL;
	{
		InfoGetter_tE75744DD40C706C13E49C55440153BC0203EDD0F* L_0 = __this->___InfoGetterEvent_9;
		V_0 = L_0;
	}

IL_0007:
	{
		InfoGetter_tE75744DD40C706C13E49C55440153BC0203EDD0F* L_1 = V_0;
		V_1 = L_1;
		InfoGetter_tE75744DD40C706C13E49C55440153BC0203EDD0F* L_2 = V_1;
		InfoGetter_tE75744DD40C706C13E49C55440153BC0203EDD0F* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_2, L_3, NULL);
		V_2 = ((InfoGetter_tE75744DD40C706C13E49C55440153BC0203EDD0F*)CastclassSealed((RuntimeObject*)L_4, InfoGetter_tE75744DD40C706C13E49C55440153BC0203EDD0F_il2cpp_TypeInfo_var));
		InfoGetter_tE75744DD40C706C13E49C55440153BC0203EDD0F** L_5 = (&__this->___InfoGetterEvent_9);
		InfoGetter_tE75744DD40C706C13E49C55440153BC0203EDD0F* L_6 = V_2;
		InfoGetter_tE75744DD40C706C13E49C55440153BC0203EDD0F* L_7 = V_1;
		InfoGetter_tE75744DD40C706C13E49C55440153BC0203EDD0F* L_8;
		L_8 = InterlockedCompareExchangeImpl<InfoGetter_tE75744DD40C706C13E49C55440153BC0203EDD0F*>(L_5, L_6, L_7);
		V_0 = L_8;
		InfoGetter_tE75744DD40C706C13E49C55440153BC0203EDD0F* L_9 = V_0;
		InfoGetter_tE75744DD40C706C13E49C55440153BC0203EDD0F* L_10 = V_1;
		if ((!(((RuntimeObject*)(InfoGetter_tE75744DD40C706C13E49C55440153BC0203EDD0F*)L_9) == ((RuntimeObject*)(InfoGetter_tE75744DD40C706C13E49C55440153BC0203EDD0F*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void ChartsAndGraphs3D.TextDisplay::remove_InfoGetterEvent(ChartsAndGraphs3D.TextDisplay/InfoGetter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextDisplay_remove_InfoGetterEvent_mD4D44AF4828E8C9D26AA3FC1A651036FF6B1977C (TextDisplay_t62A0C3215899FC612D1F2AC5C2F55997D212944F* __this, InfoGetter_tE75744DD40C706C13E49C55440153BC0203EDD0F* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InfoGetter_tE75744DD40C706C13E49C55440153BC0203EDD0F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InfoGetter_tE75744DD40C706C13E49C55440153BC0203EDD0F* V_0 = NULL;
	InfoGetter_tE75744DD40C706C13E49C55440153BC0203EDD0F* V_1 = NULL;
	InfoGetter_tE75744DD40C706C13E49C55440153BC0203EDD0F* V_2 = NULL;
	{
		InfoGetter_tE75744DD40C706C13E49C55440153BC0203EDD0F* L_0 = __this->___InfoGetterEvent_9;
		V_0 = L_0;
	}

IL_0007:
	{
		InfoGetter_tE75744DD40C706C13E49C55440153BC0203EDD0F* L_1 = V_0;
		V_1 = L_1;
		InfoGetter_tE75744DD40C706C13E49C55440153BC0203EDD0F* L_2 = V_1;
		InfoGetter_tE75744DD40C706C13E49C55440153BC0203EDD0F* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_2, L_3, NULL);
		V_2 = ((InfoGetter_tE75744DD40C706C13E49C55440153BC0203EDD0F*)CastclassSealed((RuntimeObject*)L_4, InfoGetter_tE75744DD40C706C13E49C55440153BC0203EDD0F_il2cpp_TypeInfo_var));
		InfoGetter_tE75744DD40C706C13E49C55440153BC0203EDD0F** L_5 = (&__this->___InfoGetterEvent_9);
		InfoGetter_tE75744DD40C706C13E49C55440153BC0203EDD0F* L_6 = V_2;
		InfoGetter_tE75744DD40C706C13E49C55440153BC0203EDD0F* L_7 = V_1;
		InfoGetter_tE75744DD40C706C13E49C55440153BC0203EDD0F* L_8;
		L_8 = InterlockedCompareExchangeImpl<InfoGetter_tE75744DD40C706C13E49C55440153BC0203EDD0F*>(L_5, L_6, L_7);
		V_0 = L_8;
		InfoGetter_tE75744DD40C706C13E49C55440153BC0203EDD0F* L_9 = V_0;
		InfoGetter_tE75744DD40C706C13E49C55440153BC0203EDD0F* L_10 = V_1;
		if ((!(((RuntimeObject*)(InfoGetter_tE75744DD40C706C13E49C55440153BC0203EDD0F*)L_9) == ((RuntimeObject*)(InfoGetter_tE75744DD40C706C13E49C55440153BC0203EDD0F*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void ChartsAndGraphs3D.TextDisplay::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextDisplay_Update_m4790C570B95F703E44D1FCD90700F6D972257D0C (TextDisplay_t62A0C3215899FC612D1F2AC5C2F55997D212944F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_SequenceEqual_TisTextRowInfo_t15E0C61105094CAB09472E42A2F32009BC8B5695_mA53A383B12F09695171E8848A87A93192B9F69A9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t69084B05B550AFE6DAA6EA35CAF50DB319ED78D6* V_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// transform.localPosition = Position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___Position_10;
		NullCheck(L_0);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_0, L_1, NULL);
		// if (transform.parent.parent.lossyScale.x == 0 || transform.parent.parent.lossyScale.y == 0 || transform.parent.parent.lossyScale.z == 0)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_2, NULL);
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_3, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07(L_4, NULL);
		float L_6 = L_5.___x_2;
		if ((((float)L_6) == ((float)(0.0f))))
		{
			goto IL_0074;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_7, NULL);
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_8, NULL);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07(L_9, NULL);
		float L_11 = L_10.___y_3;
		if ((((float)L_11) == ((float)(0.0f))))
		{
			goto IL_0074;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_12, NULL);
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_13, NULL);
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07(L_14, NULL);
		float L_16 = L_15.___z_4;
		if ((!(((float)L_16) == ((float)(0.0f)))))
		{
			goto IL_008b;
		}
	}

IL_0074:
	{
		// transform.parent.localScale = Vector3.zero;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_17);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_17, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		NullCheck(L_18);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_18, L_19, NULL);
		goto IL_0100;
	}

IL_008b:
	{
		// transform.parent.localScale = new Vector3(1 / transform.parent.parent.lossyScale.x, 1 / transform.parent.parent.lossyScale.y, 1 / transform.parent.parent.lossyScale.z);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_20);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_20, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_22);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_22, NULL);
		NullCheck(L_23);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_23, NULL);
		NullCheck(L_24);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07(L_24, NULL);
		float L_26 = L_25.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_27);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28;
		L_28 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_27, NULL);
		NullCheck(L_28);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
		L_29 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_28, NULL);
		NullCheck(L_29);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07(L_29, NULL);
		float L_31 = L_30.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32;
		L_32 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_32);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33;
		L_33 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_32, NULL);
		NullCheck(L_33);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34;
		L_34 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_33, NULL);
		NullCheck(L_34);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07(L_34, NULL);
		float L_36 = L_35.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		memset((&L_37), 0, sizeof(L_37));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_37), ((float)((1.0f)/L_26)), ((float)((1.0f)/L_31)), ((float)((1.0f)/L_36)), /*hidden argument*/NULL);
		NullCheck(L_21);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_21, L_37, NULL);
	}

IL_0100:
	{
		// transform.parent.localScale /= transform.parent.localScale.magnitude;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_38;
		L_38 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_38);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_39;
		L_39 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_38, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_40 = L_39;
		NullCheck(L_40);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_40, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_42;
		L_42 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_42);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_43;
		L_43 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_42, NULL);
		NullCheck(L_43);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		L_44 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_43, NULL);
		V_1 = L_44;
		float L_45;
		L_45 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_1), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline(L_41, L_45, NULL);
		NullCheck(L_40);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_40, L_46, NULL);
		// transform.LookAt(transform.position + creator.LookAtMethod());
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_47;
		L_47 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_48;
		L_48 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_48);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49;
		L_49 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_48, NULL);
		TextDisplayCreator_t8F6344C7091FB69FCADF4B134160F095942913F9* L_50 = __this->___creator_8;
		NullCheck(L_50);
		Vector3Method_t11EABE8E6896F72E6A3E3CAC834265E52601F0F7* L_51 = L_50->___LookAtMethod_8;
		NullCheck(L_51);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52;
		L_52 = Vector3Method_Invoke_mF0EF5E8004EEB1649F0AAA3B1AE112C51EB02F47_inline(L_51, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53;
		L_53 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_49, L_52, NULL);
		NullCheck(L_47);
		Transform_LookAt_mFEF7353E4CAEB85D5F7CEEF9276C3B8D6E314C6C(L_47, L_53, NULL);
		// List<TextRowInfo> newInfos = InfoGetterEvent();
		InfoGetter_tE75744DD40C706C13E49C55440153BC0203EDD0F* L_54 = __this->___InfoGetterEvent_9;
		NullCheck(L_54);
		List_1_t69084B05B550AFE6DAA6EA35CAF50DB319ED78D6* L_55;
		L_55 = InfoGetter_Invoke_mFEFAB45F3F95421FCAD8CCB39812A75899648F4B_inline(L_54, NULL);
		V_0 = L_55;
		// if (!LastInfos.SequenceEqual(newInfos))
		List_1_t69084B05B550AFE6DAA6EA35CAF50DB319ED78D6* L_56 = __this->___LastInfos_5;
		List_1_t69084B05B550AFE6DAA6EA35CAF50DB319ED78D6* L_57 = V_0;
		bool L_58;
		L_58 = Enumerable_SequenceEqual_TisTextRowInfo_t15E0C61105094CAB09472E42A2F32009BC8B5695_mA53A383B12F09695171E8848A87A93192B9F69A9(L_56, L_57, Enumerable_SequenceEqual_TisTextRowInfo_t15E0C61105094CAB09472E42A2F32009BC8B5695_mA53A383B12F09695171E8848A87A93192B9F69A9_RuntimeMethod_var);
		if (L_58)
		{
			goto IL_0191;
		}
	}
	{
		// LastInfos = newInfos;
		List_1_t69084B05B550AFE6DAA6EA35CAF50DB319ED78D6* L_59 = V_0;
		__this->___LastInfos_5 = L_59;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LastInfos_5), (void*)L_59);
		// ResetRows();
		TextDisplay_ResetRows_mA5800F56001BF4876E06999AC7252501ECAA5C71(__this, NULL);
		// AddRows(LastInfos);
		List_1_t69084B05B550AFE6DAA6EA35CAF50DB319ED78D6* L_60 = __this->___LastInfos_5;
		TextDisplay_AddRows_mE3B76542717A7E256BA50C497B5067503C3E2C0F(__this, L_60, NULL);
	}

IL_0191:
	{
		// }
		return;
	}
}
// System.Void ChartsAndGraphs3D.TextDisplay::SetTexts(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextDisplay_SetTexts_m57983E3EBFBD04304BD2EE57A6099A89196B6EE2 (TextDisplay_t62A0C3215899FC612D1F2AC5C2F55997D212944F* __this, String_t* ___pre0, String_t* ___post1, const RuntimeMethod* method) 
{
	{
		// Info.PreText = pre;
		TextRowInfo_t15E0C61105094CAB09472E42A2F32009BC8B5695* L_0 = (&__this->___Info_7);
		String_t* L_1 = ___pre0;
		L_0->___PreText_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->___PreText_1), (void*)L_1);
		// Info.PostText = post;
		TextRowInfo_t15E0C61105094CAB09472E42A2F32009BC8B5695* L_2 = (&__this->___Info_7);
		String_t* L_3 = ___post1;
		L_2->___PostText_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___PostText_3), (void*)L_3);
		// }
		return;
	}
}
// System.Void ChartsAndGraphs3D.TextDisplay::AddRows(System.Collections.Generic.List`1<ChartsAndGraphs3D.TextRowInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextDisplay_AddRows_mE3B76542717A7E256BA50C497B5067503C3E2C0F (TextDisplay_t62A0C3215899FC612D1F2AC5C2F55997D212944F* __this, List_1_t69084B05B550AFE6DAA6EA35CAF50DB319ED78D6* ___infos0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m67A5F1C9C14B834F1ECE5DCFDC3C5235C5265ED6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m74B53822969FB1631522E334FC4B7DC0BE3DE2E6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < infos.Count; i++)
		V_0 = 0;
		goto IL_0016;
	}

IL_0004:
	{
		// AddRow(infos[i]);
		List_1_t69084B05B550AFE6DAA6EA35CAF50DB319ED78D6* L_0 = ___infos0;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		TextRowInfo_t15E0C61105094CAB09472E42A2F32009BC8B5695 L_2;
		L_2 = List_1_get_Item_m74B53822969FB1631522E334FC4B7DC0BE3DE2E6(L_0, L_1, List_1_get_Item_m74B53822969FB1631522E334FC4B7DC0BE3DE2E6_RuntimeMethod_var);
		int32_t L_3;
		L_3 = TextDisplay_AddRow_mB48546613B888E39DC4DC43E3769C82A7C62A331(__this, L_2, NULL);
		// for (int i = 0; i < infos.Count; i++)
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0016:
	{
		// for (int i = 0; i < infos.Count; i++)
		int32_t L_5 = V_0;
		List_1_t69084B05B550AFE6DAA6EA35CAF50DB319ED78D6* L_6 = ___infos0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = List_1_get_Count_m67A5F1C9C14B834F1ECE5DCFDC3C5235C5265ED6_inline(L_6, List_1_get_Count_m67A5F1C9C14B834F1ECE5DCFDC3C5235C5265ED6_RuntimeMethod_var);
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ChartsAndGraphs3D.TextDisplay::AddRows(System.Collections.Generic.List`1<System.Single>,System.Collections.Generic.List`1<UnityEngine.Color>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextDisplay_AddRows_mEA2EE65220B0BE0D6C4D7F8117CAB3BC789FBB3A (TextDisplay_t62A0C3215899FC612D1F2AC5C2F55997D212944F* __this, List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* ___vals0, List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF* ___c1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE616D49F5F6197745A12A06084EEE9E6FFCF017F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < vals.Count; i++)
		V_0 = 0;
		goto IL_001d;
	}

IL_0004:
	{
		// AddRow(vals[i], c[i]);
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_0 = ___vals0;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		float L_2;
		L_2 = List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50(L_0, L_1, List_1_get_Item_mFE556F47C4CD09EAC6C898EF39D4A8EC112CFC50_RuntimeMethod_var);
		List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF* L_3 = ___c1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5;
		L_5 = List_1_get_Item_mE616D49F5F6197745A12A06084EEE9E6FFCF017F(L_3, L_4, List_1_get_Item_mE616D49F5F6197745A12A06084EEE9E6FFCF017F_RuntimeMethod_var);
		int32_t L_6;
		L_6 = TextDisplay_AddRow_mD006BBE49A61A591DDA1A05FB523E036364FBC61(__this, L_2, L_5, NULL);
		// for (int i = 0; i < vals.Count; i++)
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_001d:
	{
		// for (int i = 0; i < vals.Count; i++)
		int32_t L_8 = V_0;
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_9 = ___vals0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_inline(L_9, List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_RuntimeMethod_var);
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Int32 ChartsAndGraphs3D.TextDisplay::AddRow(System.Single,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextDisplay_AddRow_mD006BBE49A61A591DDA1A05FB523E036364FBC61 (TextDisplay_t62A0C3215899FC612D1F2AC5C2F55997D212944F* __this, float ___val0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___c1, const RuntimeMethod* method) 
{
	{
		// Info.Value = val;
		TextRowInfo_t15E0C61105094CAB09472E42A2F32009BC8B5695* L_0 = (&__this->___Info_7);
		float L_1 = ___val0;
		L_0->___Value_2 = L_1;
		// Info.c = c;
		TextRowInfo_t15E0C61105094CAB09472E42A2F32009BC8B5695* L_2 = (&__this->___Info_7);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ___c1;
		L_2->___c_4 = L_3;
		// return AddRow(Info);
		TextRowInfo_t15E0C61105094CAB09472E42A2F32009BC8B5695 L_4 = __this->___Info_7;
		int32_t L_5;
		L_5 = TextDisplay_AddRow_mB48546613B888E39DC4DC43E3769C82A7C62A331(__this, L_4, NULL);
		return L_5;
	}
}
// System.Int32 ChartsAndGraphs3D.TextDisplay::AddRow(ChartsAndGraphs3D.TextRowInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextDisplay_AddRow_mB48546613B888E39DC4DC43E3769C82A7C62A331 (TextDisplay_t62A0C3215899FC612D1F2AC5C2F55997D212944F* __this, TextRowInfo_t15E0C61105094CAB09472E42A2F32009BC8B5695 ___info0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTextRow_t4DA6BF0E7C715C5D0CED684CFE9B2BAD37D30AEE_m3EED5F6F03FA3BCAD077EAFCA4F0EFAEB8541C25_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Max_TisTextRow_t4DA6BF0E7C715C5D0CED684CFE9B2BAD37D30AEE_m7671D2FC86DC96034256E69DE46BD325283E2840_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t3EB45392DA7D875B4EDFC3E8B13E52F28B60AE48_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m77A325EA4A4E9DA96E846DB54DB191B24E36350D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m628E74CB2EC83EE670876BB9DB8030350553D64D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CAddRowU3Eb__15_0_mB8F6CFF9B7441A317AE068E5AB6E3E151C5CB260_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t751DC3E5FA444880346D799B4143D6D4A18A5B3E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TextRow_t4DA6BF0E7C715C5D0CED684CFE9B2BAD37D30AEE* V_0 = NULL;
	Func_2_t3EB45392DA7D875B4EDFC3E8B13E52F28B60AE48* G_B4_0 = NULL;
	List_1_tC2554F62A6B69847B0230853A828830A7F21D225* G_B4_1 = NULL;
	TextRowInfo_t15E0C61105094CAB09472E42A2F32009BC8B5695* G_B4_2 = NULL;
	Func_2_t3EB45392DA7D875B4EDFC3E8B13E52F28B60AE48* G_B3_0 = NULL;
	List_1_tC2554F62A6B69847B0230853A828830A7F21D225* G_B3_1 = NULL;
	TextRowInfo_t15E0C61105094CAB09472E42A2F32009BC8B5695* G_B3_2 = NULL;
	{
		// if (Rows.Count == 0)
		List_1_tC2554F62A6B69847B0230853A828830A7F21D225* L_0 = __this->___Rows_4;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m628E74CB2EC83EE670876BB9DB8030350553D64D_inline(L_0, List_1_get_Count_m628E74CB2EC83EE670876BB9DB8030350553D64D_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		// info.ID = 0;
		(&___info0)->___ID_0 = 0;
		goto IL_004a;
	}

IL_0017:
	{
		// info.ID = Rows.Max(x => x.info.ID) + 1;
		List_1_tC2554F62A6B69847B0230853A828830A7F21D225* L_2 = __this->___Rows_4;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t751DC3E5FA444880346D799B4143D6D4A18A5B3E_il2cpp_TypeInfo_var);
		Func_2_t3EB45392DA7D875B4EDFC3E8B13E52F28B60AE48* L_3 = ((U3CU3Ec_t751DC3E5FA444880346D799B4143D6D4A18A5B3E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t751DC3E5FA444880346D799B4143D6D4A18A5B3E_il2cpp_TypeInfo_var))->___U3CU3E9__15_0_1;
		Func_2_t3EB45392DA7D875B4EDFC3E8B13E52F28B60AE48* L_4 = L_3;
		G_B3_0 = L_4;
		G_B3_1 = L_2;
		G_B3_2 = (&___info0);
		if (L_4)
		{
			G_B4_0 = L_4;
			G_B4_1 = L_2;
			G_B4_2 = (&___info0);
			goto IL_003e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t751DC3E5FA444880346D799B4143D6D4A18A5B3E_il2cpp_TypeInfo_var);
		U3CU3Ec_t751DC3E5FA444880346D799B4143D6D4A18A5B3E* L_5 = ((U3CU3Ec_t751DC3E5FA444880346D799B4143D6D4A18A5B3E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t751DC3E5FA444880346D799B4143D6D4A18A5B3E_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t3EB45392DA7D875B4EDFC3E8B13E52F28B60AE48* L_6 = (Func_2_t3EB45392DA7D875B4EDFC3E8B13E52F28B60AE48*)il2cpp_codegen_object_new(Func_2_t3EB45392DA7D875B4EDFC3E8B13E52F28B60AE48_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Func_2__ctor_mB4CD7ADB46626B59C80B522FB358586EFB35311C(L_6, L_5, (intptr_t)((void*)U3CU3Ec_U3CAddRowU3Eb__15_0_mB8F6CFF9B7441A317AE068E5AB6E3E151C5CB260_RuntimeMethod_var), NULL);
		Func_2_t3EB45392DA7D875B4EDFC3E8B13E52F28B60AE48* L_7 = L_6;
		((U3CU3Ec_t751DC3E5FA444880346D799B4143D6D4A18A5B3E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t751DC3E5FA444880346D799B4143D6D4A18A5B3E_il2cpp_TypeInfo_var))->___U3CU3E9__15_0_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t751DC3E5FA444880346D799B4143D6D4A18A5B3E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t751DC3E5FA444880346D799B4143D6D4A18A5B3E_il2cpp_TypeInfo_var))->___U3CU3E9__15_0_1), (void*)L_7);
		G_B4_0 = L_7;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_003e:
	{
		int32_t L_8;
		L_8 = Enumerable_Max_TisTextRow_t4DA6BF0E7C715C5D0CED684CFE9B2BAD37D30AEE_m7671D2FC86DC96034256E69DE46BD325283E2840(G_B4_1, G_B4_0, Enumerable_Max_TisTextRow_t4DA6BF0E7C715C5D0CED684CFE9B2BAD37D30AEE_m7671D2FC86DC96034256E69DE46BD325283E2840_RuntimeMethod_var);
		G_B4_2->___ID_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_004a:
	{
		// Transform tr = Instantiate(RowPrefab, transform).transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___RowPrefab_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934(L_9, L_10, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_11, NULL);
		// TextRow row = tr.GetComponent<TextRow>();
		NullCheck(L_12);
		TextRow_t4DA6BF0E7C715C5D0CED684CFE9B2BAD37D30AEE* L_13;
		L_13 = Component_GetComponent_TisTextRow_t4DA6BF0E7C715C5D0CED684CFE9B2BAD37D30AEE_m3EED5F6F03FA3BCAD077EAFCA4F0EFAEB8541C25(L_12, Component_GetComponent_TisTextRow_t4DA6BF0E7C715C5D0CED684CFE9B2BAD37D30AEE_m3EED5F6F03FA3BCAD077EAFCA4F0EFAEB8541C25_RuntimeMethod_var);
		V_0 = L_13;
		// row.SetValues(info);
		TextRow_t4DA6BF0E7C715C5D0CED684CFE9B2BAD37D30AEE* L_14 = V_0;
		TextRowInfo_t15E0C61105094CAB09472E42A2F32009BC8B5695 L_15 = ___info0;
		NullCheck(L_14);
		TextRow_SetValues_mC17E9324EB787F48FE10E6A031F7454058BF36AA(L_14, L_15, NULL);
		// Rows.Add(row);
		List_1_tC2554F62A6B69847B0230853A828830A7F21D225* L_16 = __this->___Rows_4;
		TextRow_t4DA6BF0E7C715C5D0CED684CFE9B2BAD37D30AEE* L_17 = V_0;
		NullCheck(L_16);
		List_1_Add_m77A325EA4A4E9DA96E846DB54DB191B24E36350D_inline(L_16, L_17, List_1_Add_m77A325EA4A4E9DA96E846DB54DB191B24E36350D_RuntimeMethod_var);
		// CheckPositions();
		TextDisplay_CheckPositions_m478A793929AFBF8A6F4C026ED0B99CA812266ACB(__this, NULL);
		// return info.ID;
		TextRowInfo_t15E0C61105094CAB09472E42A2F32009BC8B5695 L_18 = ___info0;
		int32_t L_19 = L_18.___ID_0;
		return L_19;
	}
}
// System.Void ChartsAndGraphs3D.TextDisplay::CheckPositions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextDisplay_CheckPositions_m478A793929AFBF8A6F4C026ED0B99CA812266ACB (TextDisplay_t62A0C3215899FC612D1F2AC5C2F55997D212944F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m628E74CB2EC83EE670876BB9DB8030350553D64D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m0ADCE90E346B75D621C274984C0E530774980B0A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < Rows.Count; i++)
		V_0 = 0;
		goto IL_004e;
	}

IL_0004:
	{
		// Rows[i].transform.localPosition = new Vector3(0f, (i - (Rows.Count / 2f)) * creator.TextRowOffset, 0f);
		List_1_tC2554F62A6B69847B0230853A828830A7F21D225* L_0 = __this->___Rows_4;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		TextRow_t4DA6BF0E7C715C5D0CED684CFE9B2BAD37D30AEE* L_2;
		L_2 = List_1_get_Item_m0ADCE90E346B75D621C274984C0E530774980B0A(L_0, L_1, List_1_get_Item_m0ADCE90E346B75D621C274984C0E530774980B0A_RuntimeMethod_var);
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_2, NULL);
		int32_t L_4 = V_0;
		List_1_tC2554F62A6B69847B0230853A828830A7F21D225* L_5 = __this->___Rows_4;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = List_1_get_Count_m628E74CB2EC83EE670876BB9DB8030350553D64D_inline(L_5, List_1_get_Count_m628E74CB2EC83EE670876BB9DB8030350553D64D_RuntimeMethod_var);
		TextDisplayCreator_t8F6344C7091FB69FCADF4B134160F095942913F9* L_7 = __this->___creator_8;
		NullCheck(L_7);
		float L_8 = L_7->___TextRowOffset_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), (0.0f), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(((float)L_4), ((float)(((float)L_6)/(2.0f))))), L_8)), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_3, L_9, NULL);
		// for (int i = 0; i < Rows.Count; i++)
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_004e:
	{
		// for (int i = 0; i < Rows.Count; i++)
		int32_t L_11 = V_0;
		List_1_tC2554F62A6B69847B0230853A828830A7F21D225* L_12 = __this->___Rows_4;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = List_1_get_Count_m628E74CB2EC83EE670876BB9DB8030350553D64D_inline(L_12, List_1_get_Count_m628E74CB2EC83EE670876BB9DB8030350553D64D_RuntimeMethod_var);
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ChartsAndGraphs3D.TextDisplay::ResetRows()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextDisplay_ResetRows_mA5800F56001BF4876E06999AC7252501ECAA5C71 (TextDisplay_t62A0C3215899FC612D1F2AC5C2F55997D212944F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mE27B3ED7FB4C70CB1EF8BA67B0E1E29364DE328A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m9E541B813A57B13A3BAE1598E92E420138056CE3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mD583B167D4F9FE414B008B5A207629B6D414407F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mD7B66F5361E4985B85855F033E82B1015692C23A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m6AA29931A3E73E919F1F1CEF41811714643FE433_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t1369B73F0B0C20763B755FE8FC5E7DC9440029A7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// foreach (var item in Rows)
		List_1_tC2554F62A6B69847B0230853A828830A7F21D225* L_0 = __this->___Rows_4;
		NullCheck(L_0);
		Enumerator_t1369B73F0B0C20763B755FE8FC5E7DC9440029A7 L_1;
		L_1 = List_1_GetEnumerator_m6AA29931A3E73E919F1F1CEF41811714643FE433(L_0, List_1_GetEnumerator_m6AA29931A3E73E919F1F1CEF41811714643FE433_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002a:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mE27B3ED7FB4C70CB1EF8BA67B0E1E29364DE328A((&V_0), Enumerator_Dispose_mE27B3ED7FB4C70CB1EF8BA67B0E1E29364DE328A_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_001f_1;
			}

IL_000e_1:
			{
				// foreach (var item in Rows)
				TextRow_t4DA6BF0E7C715C5D0CED684CFE9B2BAD37D30AEE* L_2;
				L_2 = Enumerator_get_Current_mD583B167D4F9FE414B008B5A207629B6D414407F_inline((&V_0), Enumerator_get_Current_mD583B167D4F9FE414B008B5A207629B6D414407F_RuntimeMethod_var);
				// Destroy(item.gameObject);
				NullCheck(L_2);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
				L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_3, NULL);
			}

IL_001f_1:
			{
				// foreach (var item in Rows)
				bool L_4;
				L_4 = Enumerator_MoveNext_m9E541B813A57B13A3BAE1598E92E420138056CE3((&V_0), Enumerator_MoveNext_m9E541B813A57B13A3BAE1598E92E420138056CE3_RuntimeMethod_var);
				if (L_4)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0038;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0038:
	{
		// Rows.Clear();
		List_1_tC2554F62A6B69847B0230853A828830A7F21D225* L_5 = __this->___Rows_4;
		NullCheck(L_5);
		List_1_Clear_mD7B66F5361E4985B85855F033E82B1015692C23A_inline(L_5, List_1_Clear_mD7B66F5361E4985B85855F033E82B1015692C23A_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void ChartsAndGraphs3D.TextDisplay::UpdateRow(System.Int32,System.Single,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextDisplay_UpdateRow_m6AE2F2A7DB8ED38B7168658763B8648C3793F9A3 (TextDisplay_t62A0C3215899FC612D1F2AC5C2F55997D212944F* __this, int32_t ___id0, float ___val1, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___c2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_FirstOrDefault_TisTextRow_t4DA6BF0E7C715C5D0CED684CFE9B2BAD37D30AEE_mF095AF9B0A559A1C873A7C6C67EB73AF7BD085B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisTextRow_t4DA6BF0E7C715C5D0CED684CFE9B2BAD37D30AEE_m77605AFC941DEC190C7583FDD7412B899E0CA614_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t0EC61CE12B1876AB5F23C97DBA5F32C48783CD40_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass18_0_U3CUpdateRowU3Eb__0_mCCED6E3CEC6CE1161A1AFB8FE6B89A81AD1D4A98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass18_0_t7874EBEDEF36AE4272ADA1F44ECDE3C4720C282F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass18_0_t7874EBEDEF36AE4272ADA1F44ECDE3C4720C282F* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass18_0_t7874EBEDEF36AE4272ADA1F44ECDE3C4720C282F* L_0 = (U3CU3Ec__DisplayClass18_0_t7874EBEDEF36AE4272ADA1F44ECDE3C4720C282F*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass18_0_t7874EBEDEF36AE4272ADA1F44ECDE3C4720C282F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass18_0__ctor_m8E5865D145FDFAF124877612718E608539C6863F(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass18_0_t7874EBEDEF36AE4272ADA1F44ECDE3C4720C282F* L_1 = V_0;
		int32_t L_2 = ___id0;
		NullCheck(L_1);
		L_1->___id_0 = L_2;
		// Info.Value = val;
		TextRowInfo_t15E0C61105094CAB09472E42A2F32009BC8B5695* L_3 = (&__this->___Info_7);
		float L_4 = ___val1;
		L_3->___Value_2 = L_4;
		// Info.c = c;
		TextRowInfo_t15E0C61105094CAB09472E42A2F32009BC8B5695* L_5 = (&__this->___Info_7);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___c2;
		L_5->___c_4 = L_6;
		// TextRow row = Rows.Where(x => x.info.ID == id).FirstOrDefault();
		List_1_tC2554F62A6B69847B0230853A828830A7F21D225* L_7 = __this->___Rows_4;
		U3CU3Ec__DisplayClass18_0_t7874EBEDEF36AE4272ADA1F44ECDE3C4720C282F* L_8 = V_0;
		Func_2_t0EC61CE12B1876AB5F23C97DBA5F32C48783CD40* L_9 = (Func_2_t0EC61CE12B1876AB5F23C97DBA5F32C48783CD40*)il2cpp_codegen_object_new(Func_2_t0EC61CE12B1876AB5F23C97DBA5F32C48783CD40_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Func_2__ctor_mA8B66DC9E34E1D02A53620F373216218439CA856(L_9, L_8, (intptr_t)((void*)U3CU3Ec__DisplayClass18_0_U3CUpdateRowU3Eb__0_mCCED6E3CEC6CE1161A1AFB8FE6B89A81AD1D4A98_RuntimeMethod_var), NULL);
		RuntimeObject* L_10;
		L_10 = Enumerable_Where_TisTextRow_t4DA6BF0E7C715C5D0CED684CFE9B2BAD37D30AEE_m77605AFC941DEC190C7583FDD7412B899E0CA614(L_7, L_9, Enumerable_Where_TisTextRow_t4DA6BF0E7C715C5D0CED684CFE9B2BAD37D30AEE_m77605AFC941DEC190C7583FDD7412B899E0CA614_RuntimeMethod_var);
		TextRow_t4DA6BF0E7C715C5D0CED684CFE9B2BAD37D30AEE* L_11;
		L_11 = Enumerable_FirstOrDefault_TisTextRow_t4DA6BF0E7C715C5D0CED684CFE9B2BAD37D30AEE_mF095AF9B0A559A1C873A7C6C67EB73AF7BD085B6(L_10, Enumerable_FirstOrDefault_TisTextRow_t4DA6BF0E7C715C5D0CED684CFE9B2BAD37D30AEE_mF095AF9B0A559A1C873A7C6C67EB73AF7BD085B6_RuntimeMethod_var);
		// row.SetValues(Info);
		TextRowInfo_t15E0C61105094CAB09472E42A2F32009BC8B5695 L_12 = __this->___Info_7;
		NullCheck(L_11);
		TextRow_SetValues_mC17E9324EB787F48FE10E6A031F7454058BF36AA(L_11, L_12, NULL);
		// }
		return;
	}
}
// System.Void ChartsAndGraphs3D.TextDisplay::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextDisplay__ctor_m1AC1116EB72271977065085F2DCA3161C4B26D37 (TextDisplay_t62A0C3215899FC612D1F2AC5C2F55997D212944F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m53CCCC881D715DEDA138EF9223D219B895ED0386_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m73941180ABB4CE892AA3F877BCF41BEC8BDDDA5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t69084B05B550AFE6DAA6EA35CAF50DB319ED78D6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC2554F62A6B69847B0230853A828830A7F21D225_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal List<TextRow> Rows = new List<TextRow>();
		List_1_tC2554F62A6B69847B0230853A828830A7F21D225* L_0 = (List_1_tC2554F62A6B69847B0230853A828830A7F21D225*)il2cpp_codegen_object_new(List_1_tC2554F62A6B69847B0230853A828830A7F21D225_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m73941180ABB4CE892AA3F877BCF41BEC8BDDDA5F(L_0, List_1__ctor_m73941180ABB4CE892AA3F877BCF41BEC8BDDDA5F_RuntimeMethod_var);
		__this->___Rows_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Rows_4), (void*)L_0);
		// List<TextRowInfo> LastInfos = new List<TextRowInfo>();
		List_1_t69084B05B550AFE6DAA6EA35CAF50DB319ED78D6* L_1 = (List_1_t69084B05B550AFE6DAA6EA35CAF50DB319ED78D6*)il2cpp_codegen_object_new(List_1_t69084B05B550AFE6DAA6EA35CAF50DB319ED78D6_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m53CCCC881D715DEDA138EF9223D219B895ED0386(L_1, List_1__ctor_m53CCCC881D715DEDA138EF9223D219B895ED0386_RuntimeMethod_var);
		__this->___LastInfos_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LastInfos_5), (void*)L_1);
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
List_1_t69084B05B550AFE6DAA6EA35CAF50DB319ED78D6* InfoGetter_Invoke_mFEFAB45F3F95421FCAD8CCB39812A75899648F4B_Multicast(InfoGetter_tE75744DD40C706C13E49C55440153BC0203EDD0F* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	List_1_t69084B05B550AFE6DAA6EA35CAF50DB319ED78D6* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		InfoGetter_tE75744DD40C706C13E49C55440153BC0203EDD0F* currentDelegate = reinterpret_cast<InfoGetter_tE75744DD40C706C13E49C55440153BC0203EDD0F*>(delegatesToInvoke[i]);
		typedef List_1_t69084B05B550AFE6DAA6EA35CAF50DB319ED78D6* (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
List_1_t69084B05B550AFE6DAA6EA35CAF50DB319ED78D6* InfoGetter_Invoke_mFEFAB45F3F95421FCAD8CCB39812A75899648F4B_Open(InfoGetter_tE75744DD40C706C13E49C55440153BC0203EDD0F* __this, const RuntimeMethod* method)
{
	typedef List_1_t69084B05B550AFE6DAA6EA35CAF50DB319ED78D6* (*FunctionPointerType) (const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(method);
}
List_1_t69084B05B550AFE6DAA6EA35CAF50DB319ED78D6* InfoGetter_Invoke_mFEFAB45F3F95421FCAD8CCB39812A75899648F4B_OpenStaticInvoker(InfoGetter_tE75744DD40C706C13E49C55440153BC0203EDD0F* __this, const RuntimeMethod* method)
{
	return InvokerFuncInvoker0< List_1_t69084B05B550AFE6DAA6EA35CAF50DB319ED78D6* >::Invoke(__this->___method_ptr_0, method, NULL);
}
List_1_t69084B05B550AFE6DAA6EA35CAF50DB319ED78D6* InfoGetter_Invoke_mFEFAB45F3F95421FCAD8CCB39812A75899648F4B_ClosedStaticInvoker(InfoGetter_tE75744DD40C706C13E49C55440153BC0203EDD0F* __this, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< List_1_t69084B05B550AFE6DAA6EA35CAF50DB319ED78D6*, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
// System.Void ChartsAndGraphs3D.TextDisplay/InfoGetter::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InfoGetter__ctor_mD801F3981034B15A19FDEA2FB7C73F550E107E71 (InfoGetter_tE75744DD40C706C13E49C55440153BC0203EDD0F* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&InfoGetter_Invoke_mFEFAB45F3F95421FCAD8CCB39812A75899648F4B_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&InfoGetter_Invoke_mFEFAB45F3F95421FCAD8CCB39812A75899648F4B_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&InfoGetter_Invoke_mFEFAB45F3F95421FCAD8CCB39812A75899648F4B_Open;
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
	__this->___extra_arg_5 = (intptr_t)&InfoGetter_Invoke_mFEFAB45F3F95421FCAD8CCB39812A75899648F4B_Multicast;
}
// System.Collections.Generic.List`1<ChartsAndGraphs3D.TextRowInfo> ChartsAndGraphs3D.TextDisplay/InfoGetter::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t69084B05B550AFE6DAA6EA35CAF50DB319ED78D6* InfoGetter_Invoke_mFEFAB45F3F95421FCAD8CCB39812A75899648F4B (InfoGetter_tE75744DD40C706C13E49C55440153BC0203EDD0F* __this, const RuntimeMethod* method) 
{
	typedef List_1_t69084B05B550AFE6DAA6EA35CAF50DB319ED78D6* (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult ChartsAndGraphs3D.TextDisplay/InfoGetter::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InfoGetter_BeginInvoke_m6DF3C5E0C5398A1ED017F2F257723894E83BD0C3 (InfoGetter_tE75744DD40C706C13E49C55440153BC0203EDD0F* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback0, RuntimeObject* ___object1, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Collections.Generic.List`1<ChartsAndGraphs3D.TextRowInfo> ChartsAndGraphs3D.TextDisplay/InfoGetter::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t69084B05B550AFE6DAA6EA35CAF50DB319ED78D6* InfoGetter_EndInvoke_mD268CB14DE3CE1C2FC1EC0FBA47AD0BEF8E8D737 (InfoGetter_tE75744DD40C706C13E49C55440153BC0203EDD0F* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (List_1_t69084B05B550AFE6DAA6EA35CAF50DB319ED78D6*)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ChartsAndGraphs3D.TextDisplay/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m6036F020DC96A518D4999A1D2014A972CC31779A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t751DC3E5FA444880346D799B4143D6D4A18A5B3E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t751DC3E5FA444880346D799B4143D6D4A18A5B3E* L_0 = (U3CU3Ec_t751DC3E5FA444880346D799B4143D6D4A18A5B3E*)il2cpp_codegen_object_new(U3CU3Ec_t751DC3E5FA444880346D799B4143D6D4A18A5B3E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m9AEB63DCFF31DAC725C63C83D2B8F0FDCB952A91(L_0, NULL);
		((U3CU3Ec_t751DC3E5FA444880346D799B4143D6D4A18A5B3E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t751DC3E5FA444880346D799B4143D6D4A18A5B3E_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t751DC3E5FA444880346D799B4143D6D4A18A5B3E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t751DC3E5FA444880346D799B4143D6D4A18A5B3E_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void ChartsAndGraphs3D.TextDisplay/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m9AEB63DCFF31DAC725C63C83D2B8F0FDCB952A91 (U3CU3Ec_t751DC3E5FA444880346D799B4143D6D4A18A5B3E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Int32 ChartsAndGraphs3D.TextDisplay/<>c::<AddRow>b__15_0(ChartsAndGraphs3D.TextRow)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CAddRowU3Eb__15_0_mB8F6CFF9B7441A317AE068E5AB6E3E151C5CB260 (U3CU3Ec_t751DC3E5FA444880346D799B4143D6D4A18A5B3E* __this, TextRow_t4DA6BF0E7C715C5D0CED684CFE9B2BAD37D30AEE* ___x0, const RuntimeMethod* method) 
{
	{
		// info.ID = Rows.Max(x => x.info.ID) + 1;
		TextRow_t4DA6BF0E7C715C5D0CED684CFE9B2BAD37D30AEE* L_0 = ___x0;
		NullCheck(L_0);
		TextRowInfo_t15E0C61105094CAB09472E42A2F32009BC8B5695* L_1 = (&L_0->___info_4);
		int32_t L_2 = L_1->___ID_0;
		return L_2;
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
// System.Void ChartsAndGraphs3D.TextDisplay/<>c__DisplayClass18_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass18_0__ctor_m8E5865D145FDFAF124877612718E608539C6863F (U3CU3Ec__DisplayClass18_0_t7874EBEDEF36AE4272ADA1F44ECDE3C4720C282F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean ChartsAndGraphs3D.TextDisplay/<>c__DisplayClass18_0::<UpdateRow>b__0(ChartsAndGraphs3D.TextRow)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass18_0_U3CUpdateRowU3Eb__0_mCCED6E3CEC6CE1161A1AFB8FE6B89A81AD1D4A98 (U3CU3Ec__DisplayClass18_0_t7874EBEDEF36AE4272ADA1F44ECDE3C4720C282F* __this, TextRow_t4DA6BF0E7C715C5D0CED684CFE9B2BAD37D30AEE* ___x0, const RuntimeMethod* method) 
{
	{
		// TextRow row = Rows.Where(x => x.info.ID == id).FirstOrDefault();
		TextRow_t4DA6BF0E7C715C5D0CED684CFE9B2BAD37D30AEE* L_0 = ___x0;
		NullCheck(L_0);
		TextRowInfo_t15E0C61105094CAB09472E42A2F32009BC8B5695* L_1 = (&L_0->___info_4);
		int32_t L_2 = L_1->___ID_0;
		int32_t L_3 = __this->___id_0;
		return (bool)((((int32_t)L_2) == ((int32_t)L_3))? 1 : 0);
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
// System.Void ChartsAndGraphs3D.TextDisplayCreator::Create(UnityEngine.Transform,UnityEngine.Vector3,ChartsAndGraphs3D.TextDisplay/InfoGetter,ChartsAndGraphs3D.Vector3Method)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextDisplayCreator_Create_m4F74E6DAC3EB677518ACC820CAD0FA22EE69E645 (TextDisplayCreator_t8F6344C7091FB69FCADF4B134160F095942913F9* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos1, InfoGetter_tE75744DD40C706C13E49C55440153BC0203EDD0F* ___InfoGetterMethod2, Vector3Method_t11EABE8E6896F72E6A3E3CAC834265E52601F0F7* ___lookAtMethod3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTextDisplay_t62A0C3215899FC612D1F2AC5C2F55997D212944F_mA2960943D18287553F4C42EBE3508BFD42DF40D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral02385E2EB31AD27BC793E9DB4552E62A4365D125);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0FB36CD1A00B1D1D6C215B9FE0CFB093081CBCFA);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (!TextDisplayActive || !Application.isPlaying)
		bool L_0 = __this->___TextDisplayActive_0;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		bool L_1;
		L_1 = Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337(NULL);
		if (L_1)
		{
			goto IL_0010;
		}
	}

IL_000f:
	{
		// return;
		return;
	}

IL_0010:
	{
		// Transform nParent = (GameObject.Instantiate(Resources.Load("ChartsAndGraphs3D/Empty"), parent) as GameObject).transform;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_2;
		L_2 = Resources_Load_m9608D2902F542C0B7FD52EFED088323448B9FA35(_stringLiteral02385E2EB31AD27BC793E9DB4552E62A4365D125, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = ___parent0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_4;
		L_4 = Object_Instantiate_m90EE7E6E78EB85F0B35D68943EEE7187F27F9021(L_2, L_3, NULL);
		NullCheck(((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)IsInstSealed((RuntimeObject*)L_4, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var)));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)IsInstSealed((RuntimeObject*)L_4, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var)), NULL);
		V_0 = L_5;
		// nParent.localScale = new Vector3(1 / parent.lossyScale.x, 1 / parent.lossyScale.y, 1 / parent.lossyScale.z);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = ___parent0;
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07(L_7, NULL);
		float L_9 = L_8.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = ___parent0;
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07(L_10, NULL);
		float L_12 = L_11.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = ___parent0;
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07(L_13, NULL);
		float L_15 = L_14.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_16), ((float)((1.0f)/L_9)), ((float)((1.0f)/L_12)), ((float)((1.0f)/L_15)), /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_6, L_16, NULL);
		// nParent.localScale /= nParent.localScale.magnitude;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18 = L_17;
		NullCheck(L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_18, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20 = V_0;
		NullCheck(L_20);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_20, NULL);
		V_1 = L_21;
		float L_22;
		L_22 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_1), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline(L_19, L_22, NULL);
		NullCheck(L_18);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_18, L_23, NULL);
		// go = GameObject.Instantiate(Resources.Load("ChartsAndGraphs3D/TextDisplay"), nParent) as GameObject;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_24;
		L_24 = Resources_Load_m9608D2902F542C0B7FD52EFED088323448B9FA35(_stringLiteral0FB36CD1A00B1D1D6C215B9FE0CFB093081CBCFA, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25 = V_0;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26;
		L_26 = Object_Instantiate_m90EE7E6E78EB85F0B35D68943EEE7187F27F9021(L_24, L_25, NULL);
		__this->___go_7 = ((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)IsInstSealed((RuntimeObject*)L_26, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___go_7), (void*)((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)IsInstSealed((RuntimeObject*)L_26, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var)));
		// go.transform.localPosition = pos;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27 = __this->___go_7;
		NullCheck(L_27);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28;
		L_28 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_27, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = ___pos1;
		NullCheck(L_28);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_28, L_29, NULL);
		// go.transform.localScale = new Vector3(Scale, Scale, Scale);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30 = __this->___go_7;
		NullCheck(L_30);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
		L_31 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_30, NULL);
		float L_32 = __this->___Scale_3;
		float L_33 = __this->___Scale_3;
		float L_34 = __this->___Scale_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		memset((&L_35), 0, sizeof(L_35));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_35), L_32, L_33, L_34, /*hidden argument*/NULL);
		NullCheck(L_31);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_31, L_35, NULL);
		// TextDisplay = go.GetComponent<TextDisplay>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36 = __this->___go_7;
		NullCheck(L_36);
		TextDisplay_t62A0C3215899FC612D1F2AC5C2F55997D212944F* L_37;
		L_37 = GameObject_GetComponent_TisTextDisplay_t62A0C3215899FC612D1F2AC5C2F55997D212944F_mA2960943D18287553F4C42EBE3508BFD42DF40D5(L_36, GameObject_GetComponent_TisTextDisplay_t62A0C3215899FC612D1F2AC5C2F55997D212944F_mA2960943D18287553F4C42EBE3508BFD42DF40D5_RuntimeMethod_var);
		__this->___TextDisplay_6 = L_37;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TextDisplay_6), (void*)L_37);
		// TextDisplay.creator = this;
		TextDisplay_t62A0C3215899FC612D1F2AC5C2F55997D212944F* L_38 = __this->___TextDisplay_6;
		NullCheck(L_38);
		L_38->___creator_8 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_38->___creator_8), (void*)__this);
		// TextDisplay.Position = pos;
		TextDisplay_t62A0C3215899FC612D1F2AC5C2F55997D212944F* L_39 = __this->___TextDisplay_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40 = ___pos1;
		NullCheck(L_39);
		L_39->___Position_10 = L_40;
		// TextDisplay.InfoGetterEvent += InfoGetterMethod;
		TextDisplay_t62A0C3215899FC612D1F2AC5C2F55997D212944F* L_41 = __this->___TextDisplay_6;
		InfoGetter_tE75744DD40C706C13E49C55440153BC0203EDD0F* L_42 = ___InfoGetterMethod2;
		NullCheck(L_41);
		TextDisplay_add_InfoGetterEvent_m27DB92ADDF9BE83B5A13502D1FC6CD29C718C148(L_41, L_42, NULL);
		// LookAtMethod = lookAtMethod;
		Vector3Method_t11EABE8E6896F72E6A3E3CAC834265E52601F0F7* L_43 = ___lookAtMethod3;
		__this->___LookAtMethod_8 = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LookAtMethod_8), (void*)L_43);
		// }
		return;
	}
}
// System.Void ChartsAndGraphs3D.TextDisplayCreator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextDisplayCreator__ctor_m2ACA60A82772F0D5EA3BAC6EA801A3118E90BC3D (TextDisplayCreator_t8F6344C7091FB69FCADF4B134160F095942913F9* __this, const RuntimeMethod* method) 
{
	{
		// public bool TextDisplayActive = true;
		__this->___TextDisplayActive_0 = (bool)1;
		// public Vector3 Position = new Vector3(3, 4, 0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_0), (3.0f), (4.0f), (0.0f), /*hidden argument*/NULL);
		__this->___Position_1 = L_0;
		// public float Scale = 1f;
		__this->___Scale_3 = (1.0f);
		// public float TextRowOffset = 0.8f;
		__this->___TextRowOffset_4 = (0.800000012f);
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
// System.Void ChartsAndGraphs3D.TitleText::Create(UnityEngine.Transform,ChartsAndGraphs3D.Vector3Method,ChartsAndGraphs3D.Vector3Method)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TitleText_Create_m2A5B6AB7E6ABC77F96BDDF9D36E47F15387582D4 (TitleText_tCCF206F7674AB35EA7AB3C716F088CAC6915C982* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent0, Vector3Method_t11EABE8E6896F72E6A3E3CAC834265E52601F0F7* ___posMethod1, Vector3Method_t11EABE8E6896F72E6A3E3CAC834265E52601F0F7* ___directionMethod2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8_mA4D0E031613166DF4F272D522F45B357243C2D16_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral02385E2EB31AD27BC793E9DB4552E62A4365D125);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral92693503012265C685124755B8E076B10CE139F8);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (Active && Application.isPlaying)
		bool L_0 = __this->___Active_0;
		if (!L_0)
		{
			goto IL_010f;
		}
	}
	{
		bool L_1;
		L_1 = Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337(NULL);
		if (!L_1)
		{
			goto IL_010f;
		}
	}
	{
		// nParent = (GameObject.Instantiate(Resources.Load("ChartsAndGraphs3D/Empty"), parent) as GameObject).transform;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_2;
		L_2 = Resources_Load_m9608D2902F542C0B7FD52EFED088323448B9FA35(_stringLiteral02385E2EB31AD27BC793E9DB4552E62A4365D125, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = ___parent0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_4;
		L_4 = Object_Instantiate_m90EE7E6E78EB85F0B35D68943EEE7187F27F9021(L_2, L_3, NULL);
		NullCheck(((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)IsInstSealed((RuntimeObject*)L_4, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var)));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)IsInstSealed((RuntimeObject*)L_4, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var)), NULL);
		V_0 = L_5;
		// text3Dobj = GameObject.Instantiate(Resources.Load("ChartsAndGraphs3D/3DText"), nParent) as GameObject;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_6;
		L_6 = Resources_Load_m9608D2902F542C0B7FD52EFED088323448B9FA35(_stringLiteral92693503012265C685124755B8E076B10CE139F8, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = V_0;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_8;
		L_8 = Object_Instantiate_m90EE7E6E78EB85F0B35D68943EEE7187F27F9021(L_6, L_7, NULL);
		V_1 = ((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)IsInstSealed((RuntimeObject*)L_8, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var));
		// nParent.transform.localPosition = posMethod();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = V_0;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_9, NULL);
		Vector3Method_t11EABE8E6896F72E6A3E3CAC834265E52601F0F7* L_11 = ___posMethod1;
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3Method_Invoke_mF0EF5E8004EEB1649F0AAA3B1AE112C51EB02F47_inline(L_11, NULL);
		NullCheck(L_10);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_10, L_12, NULL);
		// nParent.localScale = new Vector3(1 / parent.lossyScale.x, 1 / parent.lossyScale.y, 1 / parent.lossyScale.z);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = ___parent0;
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07(L_14, NULL);
		float L_16 = L_15.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17 = ___parent0;
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07(L_17, NULL);
		float L_19 = L_18.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20 = ___parent0;
		NullCheck(L_20);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07(L_20, NULL);
		float L_22 = L_21.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), ((float)((1.0f)/L_16)), ((float)((1.0f)/L_19)), ((float)((1.0f)/L_22)), /*hidden argument*/NULL);
		NullCheck(L_13);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_13, L_23, NULL);
		// nParent.localScale /= nParent.localScale.magnitude;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25 = L_24;
		NullCheck(L_25);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_25, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27 = V_0;
		NullCheck(L_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_27, NULL);
		V_2 = L_28;
		float L_29;
		L_29 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_2), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline(L_26, L_29, NULL);
		NullCheck(L_25);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_25, L_30, NULL);
		// go = nParent;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31 = V_0;
		__this->___go_4 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___go_4), (void*)L_31);
		// text3Dobj.GetComponent<TextMesh>().text = Text;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32 = V_1;
		NullCheck(L_32);
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_33;
		L_33 = GameObject_GetComponent_TisTextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8_mA4D0E031613166DF4F272D522F45B357243C2D16(L_32, GameObject_GetComponent_TisTextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8_mA4D0E031613166DF4F272D522F45B357243C2D16_RuntimeMethod_var);
		String_t* L_34 = __this->___Text_2;
		NullCheck(L_33);
		TextMesh_set_text_mDF79D39638ED82797D0B0B3BB9E6B10712F8EA9E(L_33, L_34, NULL);
		// text3Dobj.transform.localScale = new Vector3(Scale, Scale, Scale);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35 = V_1;
		NullCheck(L_35);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36;
		L_36 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_35, NULL);
		float L_37 = __this->___Scale_3;
		float L_38 = __this->___Scale_3;
		float L_39 = __this->___Scale_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		memset((&L_40), 0, sizeof(L_40));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_40), L_37, L_38, L_39, /*hidden argument*/NULL);
		NullCheck(L_36);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_36, L_40, NULL);
		// text3Dobj.transform.LookAt(text3Dobj.transform.position + directionMethod());
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_41 = V_1;
		NullCheck(L_41);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_42;
		L_42 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_41, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_43 = V_1;
		NullCheck(L_43);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_44;
		L_44 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_43, NULL);
		NullCheck(L_44);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_44, NULL);
		Vector3Method_t11EABE8E6896F72E6A3E3CAC834265E52601F0F7* L_46 = ___directionMethod2;
		NullCheck(L_46);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector3Method_Invoke_mF0EF5E8004EEB1649F0AAA3B1AE112C51EB02F47_inline(L_46, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
		L_48 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_45, L_47, NULL);
		NullCheck(L_42);
		Transform_LookAt_mFEF7353E4CAEB85D5F7CEEF9276C3B8D6E314C6C(L_42, L_48, NULL);
	}

IL_010f:
	{
		// }
		return;
	}
}
// System.Void ChartsAndGraphs3D.TitleText::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TitleText__ctor_mA74E65FF96AAD000B4585A792E9FE5F4B8EECFC4 (TitleText_tCCF206F7674AB35EA7AB3C716F088CAC6915C982* __this, const RuntimeMethod* method) 
{
	{
		// public bool Active = true;
		__this->___Active_0 = (bool)1;
		// public float Scale = 0.18f;
		__this->___Scale_3 = (0.180000007f);
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
// System.Void ChartsAndGraphs3D.TextRow::SetValues(ChartsAndGraphs3D.TextRowInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextRow_SetValues_mC17E9324EB787F48FE10E6A031F7454058BF36AA (TextRow_t4DA6BF0E7C715C5D0CED684CFE9B2BAD37D30AEE* __this, TextRowInfo_t15E0C61105094CAB09472E42A2F32009BC8B5695 ___i0, const RuntimeMethod* method) 
{
	{
		// info = i;
		TextRowInfo_t15E0C61105094CAB09472E42A2F32009BC8B5695 L_0 = ___i0;
		__this->___info_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___info_4))->___PreText_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___info_4))->___PostText_3), (void*)NULL);
		#endif
		// DisplayText.text = info.PreText + info.Value.ToString() + info.PostText;
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_1 = __this->___DisplayText_5;
		TextRowInfo_t15E0C61105094CAB09472E42A2F32009BC8B5695* L_2 = (&__this->___info_4);
		String_t* L_3 = L_2->___PreText_1;
		TextRowInfo_t15E0C61105094CAB09472E42A2F32009BC8B5695* L_4 = (&__this->___info_4);
		float* L_5 = (&L_4->___Value_2);
		String_t* L_6;
		L_6 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_5, NULL);
		TextRowInfo_t15E0C61105094CAB09472E42A2F32009BC8B5695* L_7 = (&__this->___info_4);
		String_t* L_8 = L_7->___PostText_3;
		String_t* L_9;
		L_9 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_3, L_6, L_8, NULL);
		NullCheck(L_1);
		TextMesh_set_text_mDF79D39638ED82797D0B0B3BB9E6B10712F8EA9E(L_1, L_9, NULL);
		// Cube.material.color = info.c;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_10 = __this->___Cube_6;
		NullCheck(L_10);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_11;
		L_11 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_10, NULL);
		TextRowInfo_t15E0C61105094CAB09472E42A2F32009BC8B5695* L_12 = (&__this->___info_4);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = L_12->___c_4;
		NullCheck(L_11);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_11, L_13, NULL);
		// }
		return;
	}
}
// System.Void ChartsAndGraphs3D.TextRow::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextRow_Update_mA5ED072BD3249BB745AC5E8EE4B5BE5D55C07F9A (TextRow_t4DA6BF0E7C715C5D0CED684CFE9B2BAD37D30AEE* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ChartsAndGraphs3D.TextRow::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextRow__ctor_mAA16274DA7E76980F2CE34D256944AAC9A0CA4EC (TextRow_t4DA6BF0E7C715C5D0CED684CFE9B2BAD37D30AEE* __this, const RuntimeMethod* method) 
{
	{
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
// Conversion methods for marshalling of: ChartsAndGraphs3D.TextRowInfo
IL2CPP_EXTERN_C void TextRowInfo_t15E0C61105094CAB09472E42A2F32009BC8B5695_marshal_pinvoke(const TextRowInfo_t15E0C61105094CAB09472E42A2F32009BC8B5695& unmarshaled, TextRowInfo_t15E0C61105094CAB09472E42A2F32009BC8B5695_marshaled_pinvoke& marshaled)
{
	marshaled.___ID_0 = unmarshaled.___ID_0;
	marshaled.___PreText_1 = il2cpp_codegen_marshal_string(unmarshaled.___PreText_1);
	marshaled.___Value_2 = unmarshaled.___Value_2;
	marshaled.___PostText_3 = il2cpp_codegen_marshal_string(unmarshaled.___PostText_3);
	marshaled.___c_4 = unmarshaled.___c_4;
}
IL2CPP_EXTERN_C void TextRowInfo_t15E0C61105094CAB09472E42A2F32009BC8B5695_marshal_pinvoke_back(const TextRowInfo_t15E0C61105094CAB09472E42A2F32009BC8B5695_marshaled_pinvoke& marshaled, TextRowInfo_t15E0C61105094CAB09472E42A2F32009BC8B5695& unmarshaled)
{
	int32_t unmarshaledID_temp_0 = 0;
	unmarshaledID_temp_0 = marshaled.___ID_0;
	unmarshaled.___ID_0 = unmarshaledID_temp_0;
	unmarshaled.___PreText_1 = il2cpp_codegen_marshal_string_result(marshaled.___PreText_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___PreText_1), (void*)il2cpp_codegen_marshal_string_result(marshaled.___PreText_1));
	float unmarshaledValue_temp_2 = 0.0f;
	unmarshaledValue_temp_2 = marshaled.___Value_2;
	unmarshaled.___Value_2 = unmarshaledValue_temp_2;
	unmarshaled.___PostText_3 = il2cpp_codegen_marshal_string_result(marshaled.___PostText_3);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___PostText_3), (void*)il2cpp_codegen_marshal_string_result(marshaled.___PostText_3));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F unmarshaledc_temp_4;
	memset((&unmarshaledc_temp_4), 0, sizeof(unmarshaledc_temp_4));
	unmarshaledc_temp_4 = marshaled.___c_4;
	unmarshaled.___c_4 = unmarshaledc_temp_4;
}
// Conversion method for clean up from marshalling of: ChartsAndGraphs3D.TextRowInfo
IL2CPP_EXTERN_C void TextRowInfo_t15E0C61105094CAB09472E42A2F32009BC8B5695_marshal_pinvoke_cleanup(TextRowInfo_t15E0C61105094CAB09472E42A2F32009BC8B5695_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___PreText_1);
	marshaled.___PreText_1 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___PostText_3);
	marshaled.___PostText_3 = NULL;
}
// Conversion methods for marshalling of: ChartsAndGraphs3D.TextRowInfo
IL2CPP_EXTERN_C void TextRowInfo_t15E0C61105094CAB09472E42A2F32009BC8B5695_marshal_com(const TextRowInfo_t15E0C61105094CAB09472E42A2F32009BC8B5695& unmarshaled, TextRowInfo_t15E0C61105094CAB09472E42A2F32009BC8B5695_marshaled_com& marshaled)
{
	marshaled.___ID_0 = unmarshaled.___ID_0;
	marshaled.___PreText_1 = il2cpp_codegen_marshal_bstring(unmarshaled.___PreText_1);
	marshaled.___Value_2 = unmarshaled.___Value_2;
	marshaled.___PostText_3 = il2cpp_codegen_marshal_bstring(unmarshaled.___PostText_3);
	marshaled.___c_4 = unmarshaled.___c_4;
}
IL2CPP_EXTERN_C void TextRowInfo_t15E0C61105094CAB09472E42A2F32009BC8B5695_marshal_com_back(const TextRowInfo_t15E0C61105094CAB09472E42A2F32009BC8B5695_marshaled_com& marshaled, TextRowInfo_t15E0C61105094CAB09472E42A2F32009BC8B5695& unmarshaled)
{
	int32_t unmarshaledID_temp_0 = 0;
	unmarshaledID_temp_0 = marshaled.___ID_0;
	unmarshaled.___ID_0 = unmarshaledID_temp_0;
	unmarshaled.___PreText_1 = il2cpp_codegen_marshal_bstring_result(marshaled.___PreText_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___PreText_1), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___PreText_1));
	float unmarshaledValue_temp_2 = 0.0f;
	unmarshaledValue_temp_2 = marshaled.___Value_2;
	unmarshaled.___Value_2 = unmarshaledValue_temp_2;
	unmarshaled.___PostText_3 = il2cpp_codegen_marshal_bstring_result(marshaled.___PostText_3);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___PostText_3), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___PostText_3));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F unmarshaledc_temp_4;
	memset((&unmarshaledc_temp_4), 0, sizeof(unmarshaledc_temp_4));
	unmarshaledc_temp_4 = marshaled.___c_4;
	unmarshaled.___c_4 = unmarshaledc_temp_4;
}
// Conversion method for clean up from marshalling of: ChartsAndGraphs3D.TextRowInfo
IL2CPP_EXTERN_C void TextRowInfo_t15E0C61105094CAB09472E42A2F32009BC8B5695_marshal_com_cleanup(TextRowInfo_t15E0C61105094CAB09472E42A2F32009BC8B5695_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___PreText_1);
	marshaled.___PreText_1 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___PostText_3);
	marshaled.___PostText_3 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ChartsAndGraphs3D.GlowBehaivior::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlowBehaivior_Update_m848972FEB5C96FABFBC31E89E81E66D0E5D82BDE (GlowBehaivior_tC7A4C4719FCE52D09BBB24E5E1E3B97128D711EE* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ChartsAndGraphs3D.GlowBehaivior::Glow(System.Boolean,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlowBehaivior_Glow_m7E8156A30039E71673EF6DB6A5B954F3B89B98F6 (GlowBehaivior_tC7A4C4719FCE52D09BBB24E5E1E3B97128D711EE* __this, bool ___glow0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___c1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral72D498F039FD562896966E064E8315EA0BCE68C5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB92EF51E45166C91E2762DB6C9F27C8BD6EBE466);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (glow)
		bool L_0 = ___glow0;
		if (!L_0)
		{
			goto IL_0046;
		}
	}
	{
		// Renderer.materials[0].EnableKeyword("_EMISSION");
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_1 = __this->___Renderer_4;
		NullCheck(L_1);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_2;
		L_2 = Renderer_get_materials_m43D33328432700524EAEAB093C67AE5689976118(L_1, NULL);
		NullCheck(L_2);
		int32_t L_3 = 0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		Material_EnableKeyword_mE8523EF6CF694284DF976D47ADEDE9363A1174AC(L_4, _stringLiteral72D498F039FD562896966E064E8315EA0BCE68C5, NULL);
		// Renderer.materials[0].SetColor("_EmissionColor", c);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_5 = __this->___Renderer_4;
		NullCheck(L_5);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_6;
		L_6 = Renderer_get_materials_m43D33328432700524EAEAB093C67AE5689976118(L_5, NULL);
		NullCheck(L_6);
		int32_t L_7 = 0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = ___c1;
		NullCheck(L_8);
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_8, _stringLiteralB92EF51E45166C91E2762DB6C9F27C8BD6EBE466, L_9, NULL);
		// Renderer.materials[0].color = c;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_10 = __this->___Renderer_4;
		NullCheck(L_10);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_11;
		L_11 = Renderer_get_materials_m43D33328432700524EAEAB093C67AE5689976118(L_10, NULL);
		NullCheck(L_11);
		int32_t L_12 = 0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_14 = ___c1;
		NullCheck(L_13);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_13, L_14, NULL);
		return;
	}

IL_0046:
	{
		// Renderer.materials[0].DisableKeyword("_EMISSION");
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_15 = __this->___Renderer_4;
		NullCheck(L_15);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_16;
		L_16 = Renderer_get_materials_m43D33328432700524EAEAB093C67AE5689976118(L_15, NULL);
		NullCheck(L_16);
		int32_t L_17 = 0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_18 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_18);
		Material_DisableKeyword_mC123927EBF2F2A19220A4456C8EA19F2BA416E8C(L_18, _stringLiteral72D498F039FD562896966E064E8315EA0BCE68C5, NULL);
		// Renderer.materials[0].SetColor("_EmissionColor", c);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_19 = __this->___Renderer_4;
		NullCheck(L_19);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_20;
		L_20 = Renderer_get_materials_m43D33328432700524EAEAB093C67AE5689976118(L_19, NULL);
		NullCheck(L_20);
		int32_t L_21 = 0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_23 = ___c1;
		NullCheck(L_22);
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_22, _stringLiteralB92EF51E45166C91E2762DB6C9F27C8BD6EBE466, L_23, NULL);
		// Renderer.materials[0].color = c;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_24 = __this->___Renderer_4;
		NullCheck(L_24);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_25;
		L_25 = Renderer_get_materials_m43D33328432700524EAEAB093C67AE5689976118(L_24, NULL);
		NullCheck(L_25);
		int32_t L_26 = 0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_27 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_28 = ___c1;
		NullCheck(L_27);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_27, L_28, NULL);
		// }
		return;
	}
}
// System.Void ChartsAndGraphs3D.GlowBehaivior::SetEmissionColor(System.Int32,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlowBehaivior_SetEmissionColor_m3D263EF5E7891986C677FE42DF345AEAB2D7260A (GlowBehaivior_tC7A4C4719FCE52D09BBB24E5E1E3B97128D711EE* __this, int32_t ___i0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___c1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m7CBAFA50AB995C9F53D6140718FCD31D7BEC7CC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB92EF51E45166C91E2762DB6C9F27C8BD6EBE466);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Renderer == null)
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_0 = __this->___Renderer_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// Renderer = GetComponentInChildren<Renderer>();
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_2;
		L_2 = Component_GetComponentInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m7CBAFA50AB995C9F53D6140718FCD31D7BEC7CC8(__this, Component_GetComponentInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m7CBAFA50AB995C9F53D6140718FCD31D7BEC7CC8_RuntimeMethod_var);
		__this->___Renderer_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Renderer_4), (void*)L_2);
	}

IL_001a:
	{
		// c.b += i / 40f;
		float* L_3 = (&(&___c1)->___b_2);
		float* L_4 = L_3;
		float L_5 = *((float*)L_4);
		int32_t L_6 = ___i0;
		*((float*)L_4) = (float)((float)il2cpp_codegen_add(L_5, ((float)(((float)L_6)/(40.0f)))));
		// Renderer.materials[0].SetColor("_EmissionColor", c);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_7 = __this->___Renderer_4;
		NullCheck(L_7);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_8;
		L_8 = Renderer_get_materials_m43D33328432700524EAEAB093C67AE5689976118(L_7, NULL);
		NullCheck(L_8);
		int32_t L_9 = 0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11 = ___c1;
		NullCheck(L_10);
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_10, _stringLiteralB92EF51E45166C91E2762DB6C9F27C8BD6EBE466, L_11, NULL);
		// }
		return;
	}
}
// System.Void ChartsAndGraphs3D.GlowBehaivior::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlowBehaivior__ctor_m64A5957E78FC34CEB89863DE74CF154BA5B68DB2 (GlowBehaivior_tC7A4C4719FCE52D09BBB24E5E1E3B97128D711EE* __this, const RuntimeMethod* method) 
{
	{
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
// System.Single ChartsAndGraphs3D.ValueDisplay::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ValueDisplay_get_Value_m8A772E57F3925EB0124107AF6EFAC8AF646DA914 (ValueDisplay_tC05AB01BD20EAF13FC1701E9B59957453AF4491B* __this, const RuntimeMethod* method) 
{
	{
		// return Val;
		float L_0 = __this->___Val_8;
		return L_0;
	}
}
// System.Void ChartsAndGraphs3D.ValueDisplay::set_Value(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueDisplay_set_Value_mD55721728BC73B922F86F4A08EF6B2D470AFC753 (ValueDisplay_tC05AB01BD20EAF13FC1701E9B59957453AF4491B* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// if (Val == value)
		float L_0 = __this->___Val_8;
		float L_1 = ___value0;
		if ((!(((float)L_0) == ((float)L_1))))
		{
			goto IL_000a;
		}
	}
	{
		// return;
		return;
	}

IL_000a:
	{
		// Val = Mathf.Clamp(value, 0, MaxVal);
		float L_2 = ___value0;
		float L_3 = __this->___MaxVal_9;
		float L_4;
		L_4 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(L_2, (0.0f), L_3, NULL);
		__this->___Val_8 = L_4;
		// Changed = true;
		__this->___Changed_16 = (bool)1;
		// }
		return;
	}
}
// System.Void ChartsAndGraphs3D.ValueDisplay::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueDisplay_Start_m5E6546035245C92D27D7592B231810710A6F2BF5 (ValueDisplay_tC05AB01BD20EAF13FC1701E9B59957453AF4491B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueDisplay_LookAtMethod_m7AE12C3225750B022240A82C80DC108A214D5895_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueDisplay_TitlePositionMethod_m7148EDF7727D9B8D468628C8DC5886E69438192A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3Method_t11EABE8E6896F72E6A3E3CAC834265E52601F0F7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TitleText.Create(transform, TitlePositionMethod, LookAtMethod);
		TitleText_tCCF206F7674AB35EA7AB3C716F088CAC6915C982* L_0 = __this->___TitleText_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3Method_t11EABE8E6896F72E6A3E3CAC834265E52601F0F7* L_2 = (Vector3Method_t11EABE8E6896F72E6A3E3CAC834265E52601F0F7*)il2cpp_codegen_object_new(Vector3Method_t11EABE8E6896F72E6A3E3CAC834265E52601F0F7_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Vector3Method__ctor_m2E07425EAD23FD8EB14F35D1406FC418C9676D81(L_2, __this, (intptr_t)((void*)ValueDisplay_TitlePositionMethod_m7148EDF7727D9B8D468628C8DC5886E69438192A_RuntimeMethod_var), NULL);
		Vector3Method_t11EABE8E6896F72E6A3E3CAC834265E52601F0F7* L_3 = (Vector3Method_t11EABE8E6896F72E6A3E3CAC834265E52601F0F7*)il2cpp_codegen_object_new(Vector3Method_t11EABE8E6896F72E6A3E3CAC834265E52601F0F7_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Vector3Method__ctor_m2E07425EAD23FD8EB14F35D1406FC418C9676D81(L_3, __this, (intptr_t)((void*)ValueDisplay_LookAtMethod_m7AE12C3225750B022240A82C80DC108A214D5895_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		TitleText_Create_m2A5B6AB7E6ABC77F96BDDF9D36E47F15387582D4(L_0, L_1, L_2, L_3, NULL);
		// UpdateTexts();
		ValueDisplay_UpdateTexts_mF12EF900345889DB05C0F020FFBE12A8B08DF0E0(__this, NULL);
		// }
		return;
	}
}
// UnityEngine.Vector3 ChartsAndGraphs3D.ValueDisplay::TitlePositionMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ValueDisplay_TitlePositionMethod_m7148EDF7727D9B8D468628C8DC5886E69438192A (ValueDisplay_tC05AB01BD20EAF13FC1701E9B59957453AF4491B* __this, const RuntimeMethod* method) 
{
	{
		// return TitleText.PositionOffset;
		TitleText_tCCF206F7674AB35EA7AB3C716F088CAC6915C982* L_0 = __this->___TitleText_4;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = L_0->___PositionOffset_1;
		return L_1;
	}
}
// UnityEngine.Vector3 ChartsAndGraphs3D.ValueDisplay::LookAtMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ValueDisplay_LookAtMethod_m7AE12C3225750B022240A82C80DC108A214D5895 (ValueDisplay_tC05AB01BD20EAF13FC1701E9B59957453AF4491B* __this, const RuntimeMethod* method) 
{
	{
		// return transform.forward;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_0, NULL);
		return L_1;
	}
}
// System.Void ChartsAndGraphs3D.ValueDisplay::ToggleGlow(System.Boolean,UnityEngine.Renderer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueDisplay_ToggleGlow_m47DA8AA21F0FCC9087B476E73620078C931211FB (ValueDisplay_tC05AB01BD20EAF13FC1701E9B59957453AF4491B* __this, bool ___Glow0, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___r1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral72D498F039FD562896966E064E8315EA0BCE68C5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Glow)
		bool L_0 = ___Glow0;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		// r.materials[0].EnableKeyword("_EMISSION");
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_1 = ___r1;
		NullCheck(L_1);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_2;
		L_2 = Renderer_get_materials_m43D33328432700524EAEAB093C67AE5689976118(L_1, NULL);
		NullCheck(L_2);
		int32_t L_3 = 0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		Material_EnableKeyword_mE8523EF6CF694284DF976D47ADEDE9363A1174AC(L_4, _stringLiteral72D498F039FD562896966E064E8315EA0BCE68C5, NULL);
		return;
	}

IL_0016:
	{
		// r.materials[0].DisableKeyword("_EMISSION");
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_5 = ___r1;
		NullCheck(L_5);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_6;
		L_6 = Renderer_get_materials_m43D33328432700524EAEAB093C67AE5689976118(L_5, NULL);
		NullCheck(L_6);
		int32_t L_7 = 0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_8);
		Material_DisableKeyword_mC123927EBF2F2A19220A4456C8EA19F2BA416E8C(L_8, _stringLiteral72D498F039FD562896966E064E8315EA0BCE68C5, NULL);
		// }
		return;
	}
}
// System.Void ChartsAndGraphs3D.ValueDisplay::SetValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueDisplay_SetValue_m5A4C6609020819464E2B24E7809340A5B6895691 (ValueDisplay_tC05AB01BD20EAF13FC1701E9B59957453AF4491B* __this, float ___val0, const RuntimeMethod* method) 
{
	{
		// Value = val;
		float L_0 = ___val0;
		ValueDisplay_set_Value_mD55721728BC73B922F86F4A08EF6B2D470AFC753(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void ChartsAndGraphs3D.ValueDisplay::IncreaseValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueDisplay_IncreaseValue_m57538BA927856BCDEDD8B66C317165E5D986B0A5 (ValueDisplay_tC05AB01BD20EAF13FC1701E9B59957453AF4491B* __this, float ___val0, const RuntimeMethod* method) 
{
	{
		// Value += val;
		float L_0;
		L_0 = ValueDisplay_get_Value_m8A772E57F3925EB0124107AF6EFAC8AF646DA914_inline(__this, NULL);
		float L_1 = ___val0;
		ValueDisplay_set_Value_mD55721728BC73B922F86F4A08EF6B2D470AFC753(__this, ((float)il2cpp_codegen_add(L_0, L_1)), NULL);
		// }
		return;
	}
}
// System.Void ChartsAndGraphs3D.ValueDisplay::DecreaseValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueDisplay_DecreaseValue_m8387517DF80EDE409627F0D355C729413FF72ACA (ValueDisplay_tC05AB01BD20EAF13FC1701E9B59957453AF4491B* __this, float ___val0, const RuntimeMethod* method) 
{
	{
		// IncreaseValue(-val);
		float L_0 = ___val0;
		ValueDisplay_IncreaseValue_m57538BA927856BCDEDD8B66C317165E5D986B0A5(__this, ((-L_0)), NULL);
		// }
		return;
	}
}
// System.Void ChartsAndGraphs3D.ValueDisplay::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueDisplay_Update_m919FE315E13890E192F34F5B63C5383294D1D9A3 (ValueDisplay_tC05AB01BD20EAF13FC1701E9B59957453AF4491B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisGlowBehaivior_tC7A4C4719FCE52D09BBB24E5E1E3B97128D711EE_mEAB41BBB4038173083BD11985DA32B2988EAF179_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mA2746088DB45856FD76C725AB403CEF5A8997734_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m58951F27C87AAE9CF1450B59AB35204C5BE9F886_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m6E4F0D71EB5BC699E12884A4A4D48851F176EDDB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB92EF51E45166C91E2762DB6C9F27C8BD6EBE466);
		s_Il2CppMethodInitialized = true;
	}
	RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* V_0 = NULL;
	int32_t V_1 = 0;
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		// if (!Changed)
		bool L_0 = __this->___Changed_16;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// UpdateTexts();
		ValueDisplay_UpdateTexts_mF12EF900345889DB05C0F020FFBE12A8B08DF0E0(__this, NULL);
		// if (Border.GetComponent<Renderer>() != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___Border_13;
		NullCheck(L_1);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_2;
		L_2 = GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A(L_1, GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0039;
		}
	}
	{
		// ToggleGlow(Glow, Border.GetComponent<Renderer>());
		bool L_4 = __this->___Glow_10;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___Border_13;
		NullCheck(L_5);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_6;
		L_6 = GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A(L_5, GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		ValueDisplay_ToggleGlow_m47DA8AA21F0FCC9087B476E73620078C931211FB(__this, L_4, L_6, NULL);
	}

IL_0039:
	{
		// foreach (var item in Border.GetComponentsInChildren<Renderer>())
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___Border_13;
		NullCheck(L_7);
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_8;
		L_8 = GameObject_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mA2746088DB45856FD76C725AB403CEF5A8997734(L_7, GameObject_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mA2746088DB45856FD76C725AB403CEF5A8997734_RuntimeMethod_var);
		V_0 = L_8;
		V_1 = 0;
		goto IL_005e;
	}

IL_0049:
	{
		// foreach (var item in Border.GetComponentsInChildren<Renderer>())
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_9 = V_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_2 = L_12;
		// ToggleGlow(Glow, item);
		bool L_13 = __this->___Glow_10;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_14 = V_2;
		ValueDisplay_ToggleGlow_m47DA8AA21F0FCC9087B476E73620078C931211FB(__this, L_13, L_14, NULL);
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_005e:
	{
		// foreach (var item in Border.GetComponentsInChildren<Renderer>())
		int32_t L_16 = V_1;
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_17 = V_0;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length)))))
		{
			goto IL_0049;
		}
	}
	{
		// if (Border.GetComponent<Renderer>() != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = __this->___Border_13;
		NullCheck(L_18);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_19;
		L_19 = GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A(L_18, GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_19, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_20)
		{
			goto IL_00b8;
		}
	}
	{
		// Border.GetComponent<Renderer>().materials[0].color = BorderColor;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = __this->___Border_13;
		NullCheck(L_21);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_22;
		L_22 = GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A(L_21, GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		NullCheck(L_22);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_23;
		L_23 = Renderer_get_materials_m43D33328432700524EAEAB093C67AE5689976118(L_22, NULL);
		NullCheck(L_23);
		int32_t L_24 = 0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_25 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_26 = __this->___BorderColor_5;
		NullCheck(L_25);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_25, L_26, NULL);
		// Border.GetComponent<Renderer>().materials[0].SetColor("_EmissionColor", BorderColor);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27 = __this->___Border_13;
		NullCheck(L_27);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_28;
		L_28 = GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A(L_27, GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		NullCheck(L_28);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_29;
		L_29 = Renderer_get_materials_m43D33328432700524EAEAB093C67AE5689976118(L_28, NULL);
		NullCheck(L_29);
		int32_t L_30 = 0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_31 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_32 = __this->___BorderColor_5;
		NullCheck(L_31);
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_31, _stringLiteralB92EF51E45166C91E2762DB6C9F27C8BD6EBE466, L_32, NULL);
		goto IL_00ff;
	}

IL_00b8:
	{
		// foreach (var item in Border.GetComponentsInChildren<Renderer>())
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33 = __this->___Border_13;
		NullCheck(L_33);
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_34;
		L_34 = GameObject_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mA2746088DB45856FD76C725AB403CEF5A8997734(L_33, GameObject_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mA2746088DB45856FD76C725AB403CEF5A8997734_RuntimeMethod_var);
		V_0 = L_34;
		V_1 = 0;
		goto IL_00f9;
	}

IL_00c8:
	{
		// foreach (var item in Border.GetComponentsInChildren<Renderer>())
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_35 = V_0;
		int32_t L_36 = V_1;
		NullCheck(L_35);
		int32_t L_37 = L_36;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		// item.materials[0].color = BorderColor;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_39 = L_38;
		NullCheck(L_39);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_40;
		L_40 = Renderer_get_materials_m43D33328432700524EAEAB093C67AE5689976118(L_39, NULL);
		NullCheck(L_40);
		int32_t L_41 = 0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_42 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_43 = __this->___BorderColor_5;
		NullCheck(L_42);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_42, L_43, NULL);
		// item.materials[0].SetColor("_EmissionColor", BorderColor);
		NullCheck(L_39);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_44;
		L_44 = Renderer_get_materials_m43D33328432700524EAEAB093C67AE5689976118(L_39, NULL);
		NullCheck(L_44);
		int32_t L_45 = 0;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_46 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_47 = __this->___BorderColor_5;
		NullCheck(L_46);
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_46, _stringLiteralB92EF51E45166C91E2762DB6C9F27C8BD6EBE466, L_47, NULL);
		int32_t L_48 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_48, 1));
	}

IL_00f9:
	{
		// foreach (var item in Border.GetComponentsInChildren<Renderer>())
		int32_t L_49 = V_1;
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_50 = V_0;
		NullCheck(L_50);
		if ((((int32_t)L_49) < ((int32_t)((int32_t)(((RuntimeArray*)L_50)->max_length)))))
		{
			goto IL_00c8;
		}
	}

IL_00ff:
	{
		// for (int i = 0; i < ValueBars.Count; i++)
		V_3 = 0;
		goto IL_013b;
	}

IL_0103:
	{
		// ValueBarsGlow.Add(ValueBars[i].GetComponent<GlowBehaivior>());
		List_1_t8B0F79AB5A56A47BF39FF7841C6F3DA8F09738E4* L_51 = __this->___ValueBarsGlow_15;
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_52 = __this->___ValueBars_14;
		int32_t L_53 = V_3;
		NullCheck(L_52);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_54;
		L_54 = List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA(L_52, L_53, List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var);
		NullCheck(L_54);
		GlowBehaivior_tC7A4C4719FCE52D09BBB24E5E1E3B97128D711EE* L_55;
		L_55 = Component_GetComponent_TisGlowBehaivior_tC7A4C4719FCE52D09BBB24E5E1E3B97128D711EE_mEAB41BBB4038173083BD11985DA32B2988EAF179(L_54, Component_GetComponent_TisGlowBehaivior_tC7A4C4719FCE52D09BBB24E5E1E3B97128D711EE_mEAB41BBB4038173083BD11985DA32B2988EAF179_RuntimeMethod_var);
		NullCheck(L_51);
		List_1_Add_m58951F27C87AAE9CF1450B59AB35204C5BE9F886_inline(L_51, L_55, List_1_Add_m58951F27C87AAE9CF1450B59AB35204C5BE9F886_RuntimeMethod_var);
		// ValueBarsGlow[i].SetEmissionColor(i, ValueBarColor);
		List_1_t8B0F79AB5A56A47BF39FF7841C6F3DA8F09738E4* L_56 = __this->___ValueBarsGlow_15;
		int32_t L_57 = V_3;
		NullCheck(L_56);
		GlowBehaivior_tC7A4C4719FCE52D09BBB24E5E1E3B97128D711EE* L_58;
		L_58 = List_1_get_Item_m6E4F0D71EB5BC699E12884A4A4D48851F176EDDB(L_56, L_57, List_1_get_Item_m6E4F0D71EB5BC699E12884A4A4D48851F176EDDB_RuntimeMethod_var);
		int32_t L_59 = V_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_60 = __this->___ValueBarColor_6;
		NullCheck(L_58);
		GlowBehaivior_SetEmissionColor_m3D263EF5E7891986C677FE42DF345AEAB2D7260A(L_58, L_59, L_60, NULL);
		// for (int i = 0; i < ValueBars.Count; i++)
		int32_t L_61 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_61, 1));
	}

IL_013b:
	{
		// for (int i = 0; i < ValueBars.Count; i++)
		int32_t L_62 = V_3;
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_63 = __this->___ValueBars_14;
		NullCheck(L_63);
		int32_t L_64;
		L_64 = List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_inline(L_63, List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_RuntimeMethod_var);
		if ((((int32_t)L_62) < ((int32_t)L_64)))
		{
			goto IL_0103;
		}
	}
	{
		// for (int i = 0; i < 20; i++)
		V_4 = 0;
		goto IL_01a5;
	}

IL_014e:
	{
		// if (i > 20 * (Value / MaxVal))
		int32_t L_65 = V_4;
		float L_66;
		L_66 = ValueDisplay_get_Value_m8A772E57F3925EB0124107AF6EFAC8AF646DA914_inline(__this, NULL);
		float L_67 = __this->___MaxVal_9;
		if ((!(((float)((float)L_65)) > ((float)((float)il2cpp_codegen_multiply((20.0f), ((float)(L_66/L_67))))))))
		{
			goto IL_0181;
		}
	}
	{
		// ValueBarsGlow[i].Glow(false, ValueBarNotActiveColor);
		List_1_t8B0F79AB5A56A47BF39FF7841C6F3DA8F09738E4* L_68 = __this->___ValueBarsGlow_15;
		int32_t L_69 = V_4;
		NullCheck(L_68);
		GlowBehaivior_tC7A4C4719FCE52D09BBB24E5E1E3B97128D711EE* L_70;
		L_70 = List_1_get_Item_m6E4F0D71EB5BC699E12884A4A4D48851F176EDDB(L_68, L_69, List_1_get_Item_m6E4F0D71EB5BC699E12884A4A4D48851F176EDDB_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_71 = __this->___ValueBarNotActiveColor_7;
		NullCheck(L_70);
		GlowBehaivior_Glow_m7E8156A30039E71673EF6DB6A5B954F3B89B98F6(L_70, (bool)0, L_71, NULL);
		goto IL_019f;
	}

IL_0181:
	{
		// ValueBarsGlow[i].Glow(true && Glow, ValueBarColor);
		List_1_t8B0F79AB5A56A47BF39FF7841C6F3DA8F09738E4* L_72 = __this->___ValueBarsGlow_15;
		int32_t L_73 = V_4;
		NullCheck(L_72);
		GlowBehaivior_tC7A4C4719FCE52D09BBB24E5E1E3B97128D711EE* L_74;
		L_74 = List_1_get_Item_m6E4F0D71EB5BC699E12884A4A4D48851F176EDDB(L_72, L_73, List_1_get_Item_m6E4F0D71EB5BC699E12884A4A4D48851F176EDDB_RuntimeMethod_var);
		bool L_75 = __this->___Glow_10;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_76 = __this->___ValueBarColor_6;
		NullCheck(L_74);
		GlowBehaivior_Glow_m7E8156A30039E71673EF6DB6A5B954F3B89B98F6(L_74, L_75, L_76, NULL);
	}

IL_019f:
	{
		// for (int i = 0; i < 20; i++)
		int32_t L_77 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_01a5:
	{
		// for (int i = 0; i < 20; i++)
		int32_t L_78 = V_4;
		if ((((int32_t)L_78) < ((int32_t)((int32_t)20))))
		{
			goto IL_014e;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ChartsAndGraphs3D.ValueDisplay::UpdateTexts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueDisplay_UpdateTexts_mF12EF900345889DB05C0F020FFBE12A8B08DF0E0 (ValueDisplay_tC05AB01BD20EAF13FC1701E9B59957453AF4491B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8_mA4D0E031613166DF4F272D522F45B357243C2D16_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral02385E2EB31AD27BC793E9DB4552E62A4365D125);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral92693503012265C685124755B8E076B10CE139F8);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	float V_2 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	double V_4 = 0.0;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_5 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_6 = NULL;
	{
		// if (MaxValueText.Active)
		ValueBarMaxTextUnityHelper_t54EFFACAF3320A7509318572F7F3B7DF588720C6* L_0 = __this->___MaxValueText_12;
		NullCheck(L_0);
		bool L_1 = L_0->___Active_0;
		if (!L_1)
		{
			goto IL_019d;
		}
	}
	{
		// if (MaxValueText.currentObject != null)
		ValueBarMaxTextUnityHelper_t54EFFACAF3320A7509318572F7F3B7DF588720C6* L_2 = __this->___MaxValueText_12;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = L_2->___currentObject_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_003f;
		}
	}
	{
		// Destroy(MaxValueText.currentObject);
		ValueBarMaxTextUnityHelper_t54EFFACAF3320A7509318572F7F3B7DF588720C6* L_5 = __this->___MaxValueText_12;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = L_5->___currentObject_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_6, NULL);
		// MaxValueText.currentObject = null;
		ValueBarMaxTextUnityHelper_t54EFFACAF3320A7509318572F7F3B7DF588720C6* L_7 = __this->___MaxValueText_12;
		NullCheck(L_7);
		L_7->___currentObject_4 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_7->___currentObject_4), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
	}

IL_003f:
	{
		// Transform nParent = (GameObject.Instantiate(Resources.Load("ChartsAndGraphs3D/Empty"), transform) as GameObject).transform;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_8;
		L_8 = Resources_Load_m9608D2902F542C0B7FD52EFED088323448B9FA35(_stringLiteral02385E2EB31AD27BC793E9DB4552E62A4365D125, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_10;
		L_10 = Object_Instantiate_m90EE7E6E78EB85F0B35D68943EEE7187F27F9021(L_8, L_9, NULL);
		NullCheck(((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)IsInstSealed((RuntimeObject*)L_10, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var)));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)IsInstSealed((RuntimeObject*)L_10, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var)), NULL);
		V_0 = L_11;
		// nParent.transform.localPosition = MaxValueText.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = V_0;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_12, NULL);
		ValueBarMaxTextUnityHelper_t54EFFACAF3320A7509318572F7F3B7DF588720C6* L_14 = __this->___MaxValueText_12;
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = L_14->___position_5;
		NullCheck(L_13);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_13, L_15, NULL);
		// nParent.localScale = new Vector3(1 / transform.lossyScale.x, 1 / transform.lossyScale.y, 1 / transform.lossyScale.z);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07(L_17, NULL);
		float L_19 = L_18.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_20);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07(L_20, NULL);
		float L_22 = L_21.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_23);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07(L_23, NULL);
		float L_25 = L_24.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		memset((&L_26), 0, sizeof(L_26));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_26), ((float)((1.0f)/L_19)), ((float)((1.0f)/L_22)), ((float)((1.0f)/L_25)), /*hidden argument*/NULL);
		NullCheck(L_16);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_16, L_26, NULL);
		// nParent.localScale /= nParent.localScale.magnitude;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28 = L_27;
		NullCheck(L_28);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_28, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30 = V_0;
		NullCheck(L_30);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_30, NULL);
		V_3 = L_31;
		float L_32;
		L_32 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_3), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline(L_29, L_32, NULL);
		NullCheck(L_28);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_28, L_33, NULL);
		// GameObject text3Dobj = Instantiate(Resources.Load("ChartsAndGraphs3D/3DText"), nParent) as GameObject;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_34;
		L_34 = Resources_Load_m9608D2902F542C0B7FD52EFED088323448B9FA35(_stringLiteral92693503012265C685124755B8E076B10CE139F8, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_35 = V_0;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_36;
		L_36 = Object_Instantiate_m90EE7E6E78EB85F0B35D68943EEE7187F27F9021(L_34, L_35, NULL);
		V_1 = ((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)IsInstSealed((RuntimeObject*)L_36, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var));
		// float MaxValue = MaxVal;
		float L_37 = __this->___MaxVal_9;
		V_2 = L_37;
		// text3Dobj.GetComponent<TextMesh>().text = MaxValueText.preText + System.Math.Round(MaxValue, 2) + MaxValueText.postText;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_38 = V_1;
		NullCheck(L_38);
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_39;
		L_39 = GameObject_GetComponent_TisTextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8_mA4D0E031613166DF4F272D522F45B357243C2D16(L_38, GameObject_GetComponent_TisTextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8_mA4D0E031613166DF4F272D522F45B357243C2D16_RuntimeMethod_var);
		ValueBarMaxTextUnityHelper_t54EFFACAF3320A7509318572F7F3B7DF588720C6* L_40 = __this->___MaxValueText_12;
		NullCheck(L_40);
		String_t* L_41 = L_40->___preText_1;
		float L_42 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_43;
		L_43 = Math_Round_mAE7072AE69091258FAA8BD5923CE4A0E492B5B7D_inline(((double)L_42), 2, NULL);
		V_4 = L_43;
		String_t* L_44;
		L_44 = Double_ToString_m7499A5D792419537DCB9470A3675CEF5117DE339((&V_4), NULL);
		ValueBarMaxTextUnityHelper_t54EFFACAF3320A7509318572F7F3B7DF588720C6* L_45 = __this->___MaxValueText_12;
		NullCheck(L_45);
		String_t* L_46 = L_45->___postText_2;
		String_t* L_47;
		L_47 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_41, L_44, L_46, NULL);
		NullCheck(L_39);
		TextMesh_set_text_mDF79D39638ED82797D0B0B3BB9E6B10712F8EA9E(L_39, L_47, NULL);
		// text3Dobj.transform.localScale = new Vector3(MaxValueText.Scale, MaxValueText.Scale, MaxValueText.Scale);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_48 = V_1;
		NullCheck(L_48);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_49;
		L_49 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_48, NULL);
		ValueBarMaxTextUnityHelper_t54EFFACAF3320A7509318572F7F3B7DF588720C6* L_50 = __this->___MaxValueText_12;
		NullCheck(L_50);
		float L_51 = L_50->___Scale_3;
		ValueBarMaxTextUnityHelper_t54EFFACAF3320A7509318572F7F3B7DF588720C6* L_52 = __this->___MaxValueText_12;
		NullCheck(L_52);
		float L_53 = L_52->___Scale_3;
		ValueBarMaxTextUnityHelper_t54EFFACAF3320A7509318572F7F3B7DF588720C6* L_54 = __this->___MaxValueText_12;
		NullCheck(L_54);
		float L_55 = L_54->___Scale_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56;
		memset((&L_56), 0, sizeof(L_56));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_56), L_51, L_53, L_55, /*hidden argument*/NULL);
		NullCheck(L_49);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_49, L_56, NULL);
		// text3Dobj.transform.LookAt(text3Dobj.transform.position + transform.forward);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_57 = V_1;
		NullCheck(L_57);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_58;
		L_58 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_57, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_59 = V_1;
		NullCheck(L_59);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_60;
		L_60 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_59, NULL);
		NullCheck(L_60);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_61;
		L_61 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_60, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_62;
		L_62 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_62);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63;
		L_63 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_62, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_64;
		L_64 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_61, L_63, NULL);
		NullCheck(L_58);
		Transform_LookAt_mFEF7353E4CAEB85D5F7CEEF9276C3B8D6E314C6C(L_58, L_64, NULL);
		// MaxValueText.currentObject = nParent.gameObject;
		ValueBarMaxTextUnityHelper_t54EFFACAF3320A7509318572F7F3B7DF588720C6* L_65 = __this->___MaxValueText_12;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_66 = V_0;
		NullCheck(L_66);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_67;
		L_67 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_66, NULL);
		NullCheck(L_65);
		L_65->___currentObject_4 = L_67;
		Il2CppCodeGenWriteBarrier((void**)(&L_65->___currentObject_4), (void*)L_67);
	}

IL_019d:
	{
		// if (CurrentValueText.Active)
		ValueCurrentTextUnityHelper_t51D417922AB5F0B103C81FD35C0732EC7D233DE3* L_68 = __this->___CurrentValueText_11;
		NullCheck(L_68);
		bool L_69 = L_68->___Active_0;
		if (!L_69)
		{
			goto IL_037d;
		}
	}
	{
		// if (CurrentValueText.currentObject == null)
		ValueCurrentTextUnityHelper_t51D417922AB5F0B103C81FD35C0732EC7D233DE3* L_70 = __this->___CurrentValueText_11;
		NullCheck(L_70);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_71 = L_70->___currentObject_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_72;
		L_72 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_71, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_72)
		{
			goto IL_01f5;
		}
	}
	{
		// nParent = (GameObject.Instantiate(Resources.Load("ChartsAndGraphs3D/Empty"), transform) as GameObject).transform;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_73;
		L_73 = Resources_Load_m9608D2902F542C0B7FD52EFED088323448B9FA35(_stringLiteral02385E2EB31AD27BC793E9DB4552E62A4365D125, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_74;
		L_74 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_75;
		L_75 = Object_Instantiate_m90EE7E6E78EB85F0B35D68943EEE7187F27F9021(L_73, L_74, NULL);
		NullCheck(((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)IsInstSealed((RuntimeObject*)L_75, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var)));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_76;
		L_76 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)IsInstSealed((RuntimeObject*)L_75, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var)), NULL);
		V_5 = L_76;
		// CurrentValueText.currentObject = nParent.gameObject;
		ValueCurrentTextUnityHelper_t51D417922AB5F0B103C81FD35C0732EC7D233DE3* L_77 = __this->___CurrentValueText_11;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_78 = V_5;
		NullCheck(L_78);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_79;
		L_79 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_78, NULL);
		NullCheck(L_77);
		L_77->___currentObject_4 = L_79;
		Il2CppCodeGenWriteBarrier((void**)(&L_77->___currentObject_4), (void*)L_79);
		goto IL_0207;
	}

IL_01f5:
	{
		// nParent = CurrentValueText.currentObject.transform;
		ValueCurrentTextUnityHelper_t51D417922AB5F0B103C81FD35C0732EC7D233DE3* L_80 = __this->___CurrentValueText_11;
		NullCheck(L_80);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_81 = L_80->___currentObject_4;
		NullCheck(L_81);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_82;
		L_82 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_81, NULL);
		V_5 = L_82;
	}

IL_0207:
	{
		// if (CurrentValueText.currentTextMesh == null)
		ValueCurrentTextUnityHelper_t51D417922AB5F0B103C81FD35C0732EC7D233DE3* L_83 = __this->___CurrentValueText_11;
		NullCheck(L_83);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_84 = L_83->___currentTextMesh_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_85;
		L_85 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_84, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_85)
		{
			goto IL_0241;
		}
	}
	{
		// text3Dobj = Instantiate(Resources.Load("ChartsAndGraphs3D/3DText"), nParent) as GameObject;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_86;
		L_86 = Resources_Load_m9608D2902F542C0B7FD52EFED088323448B9FA35(_stringLiteral92693503012265C685124755B8E076B10CE139F8, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_87 = V_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_88;
		L_88 = Object_Instantiate_m90EE7E6E78EB85F0B35D68943EEE7187F27F9021(L_86, L_87, NULL);
		V_6 = ((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)IsInstSealed((RuntimeObject*)L_88, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var));
		// CurrentValueText.currentTextMesh = text3Dobj;
		ValueCurrentTextUnityHelper_t51D417922AB5F0B103C81FD35C0732EC7D233DE3* L_89 = __this->___CurrentValueText_11;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_90 = V_6;
		NullCheck(L_89);
		L_89->___currentTextMesh_5 = L_90;
		Il2CppCodeGenWriteBarrier((void**)(&L_89->___currentTextMesh_5), (void*)L_90);
		goto IL_024e;
	}

IL_0241:
	{
		// text3Dobj = CurrentValueText.currentTextMesh;
		ValueCurrentTextUnityHelper_t51D417922AB5F0B103C81FD35C0732EC7D233DE3* L_91 = __this->___CurrentValueText_11;
		NullCheck(L_91);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_92 = L_91->___currentTextMesh_5;
		V_6 = L_92;
	}

IL_024e:
	{
		// nParent.transform.localPosition = CurrentValueText.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_93 = V_5;
		NullCheck(L_93);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_94;
		L_94 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_93, NULL);
		ValueCurrentTextUnityHelper_t51D417922AB5F0B103C81FD35C0732EC7D233DE3* L_95 = __this->___CurrentValueText_11;
		NullCheck(L_95);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96 = L_95->___position_6;
		NullCheck(L_94);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_94, L_96, NULL);
		// nParent.localScale = new Vector3(1 / transform.lossyScale.x, 1 / transform.lossyScale.y, 1 / transform.lossyScale.z);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_97 = V_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_98;
		L_98 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_98);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_99;
		L_99 = Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07(L_98, NULL);
		float L_100 = L_99.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_101;
		L_101 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_101);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_102;
		L_102 = Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07(L_101, NULL);
		float L_103 = L_102.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_104;
		L_104 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_104);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_105;
		L_105 = Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07(L_104, NULL);
		float L_106 = L_105.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_107;
		memset((&L_107), 0, sizeof(L_107));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_107), ((float)((1.0f)/L_100)), ((float)((1.0f)/L_103)), ((float)((1.0f)/L_106)), /*hidden argument*/NULL);
		NullCheck(L_97);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_97, L_107, NULL);
		// nParent.localScale /= nParent.localScale.magnitude;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_108 = V_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_109 = L_108;
		NullCheck(L_109);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_110;
		L_110 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_109, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_111 = V_5;
		NullCheck(L_111);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_112;
		L_112 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_111, NULL);
		V_3 = L_112;
		float L_113;
		L_113 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_3), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_114;
		L_114 = Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline(L_110, L_113, NULL);
		NullCheck(L_109);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_109, L_114, NULL);
		// text3Dobj.GetComponent<TextMesh>().text = CurrentValueText.preText + System.Math.Round(Value, 2) + CurrentValueText.postText;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_115 = V_6;
		NullCheck(L_115);
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_116;
		L_116 = GameObject_GetComponent_TisTextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8_mA4D0E031613166DF4F272D522F45B357243C2D16(L_115, GameObject_GetComponent_TisTextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8_mA4D0E031613166DF4F272D522F45B357243C2D16_RuntimeMethod_var);
		ValueCurrentTextUnityHelper_t51D417922AB5F0B103C81FD35C0732EC7D233DE3* L_117 = __this->___CurrentValueText_11;
		NullCheck(L_117);
		String_t* L_118 = L_117->___preText_1;
		float L_119;
		L_119 = ValueDisplay_get_Value_m8A772E57F3925EB0124107AF6EFAC8AF646DA914_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_120;
		L_120 = Math_Round_mAE7072AE69091258FAA8BD5923CE4A0E492B5B7D_inline(((double)L_119), 2, NULL);
		V_4 = L_120;
		String_t* L_121;
		L_121 = Double_ToString_m7499A5D792419537DCB9470A3675CEF5117DE339((&V_4), NULL);
		ValueCurrentTextUnityHelper_t51D417922AB5F0B103C81FD35C0732EC7D233DE3* L_122 = __this->___CurrentValueText_11;
		NullCheck(L_122);
		String_t* L_123 = L_122->___postText_2;
		String_t* L_124;
		L_124 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_118, L_121, L_123, NULL);
		NullCheck(L_116);
		TextMesh_set_text_mDF79D39638ED82797D0B0B3BB9E6B10712F8EA9E(L_116, L_124, NULL);
		// text3Dobj.transform.localScale = new Vector3(CurrentValueText.Scale, CurrentValueText.Scale, CurrentValueText.Scale);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_125 = V_6;
		NullCheck(L_125);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_126;
		L_126 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_125, NULL);
		ValueCurrentTextUnityHelper_t51D417922AB5F0B103C81FD35C0732EC7D233DE3* L_127 = __this->___CurrentValueText_11;
		NullCheck(L_127);
		float L_128 = L_127->___Scale_3;
		ValueCurrentTextUnityHelper_t51D417922AB5F0B103C81FD35C0732EC7D233DE3* L_129 = __this->___CurrentValueText_11;
		NullCheck(L_129);
		float L_130 = L_129->___Scale_3;
		ValueCurrentTextUnityHelper_t51D417922AB5F0B103C81FD35C0732EC7D233DE3* L_131 = __this->___CurrentValueText_11;
		NullCheck(L_131);
		float L_132 = L_131->___Scale_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_133;
		memset((&L_133), 0, sizeof(L_133));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_133), L_128, L_130, L_132, /*hidden argument*/NULL);
		NullCheck(L_126);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_126, L_133, NULL);
		// text3Dobj.transform.LookAt(text3Dobj.transform.position + transform.forward);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_134 = V_6;
		NullCheck(L_134);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_135;
		L_135 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_134, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_136 = V_6;
		NullCheck(L_136);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_137;
		L_137 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_136, NULL);
		NullCheck(L_137);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_138;
		L_138 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_137, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_139;
		L_139 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_139);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_140;
		L_140 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_139, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_141;
		L_141 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_138, L_140, NULL);
		NullCheck(L_135);
		Transform_LookAt_mFEF7353E4CAEB85D5F7CEEF9276C3B8D6E314C6C(L_135, L_141, NULL);
		// CurrentValueText.currentObject = nParent.gameObject;
		ValueCurrentTextUnityHelper_t51D417922AB5F0B103C81FD35C0732EC7D233DE3* L_142 = __this->___CurrentValueText_11;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_143 = V_5;
		NullCheck(L_143);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_144;
		L_144 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_143, NULL);
		NullCheck(L_142);
		L_142->___currentObject_4 = L_144;
		Il2CppCodeGenWriteBarrier((void**)(&L_142->___currentObject_4), (void*)L_144);
	}

IL_037d:
	{
		// }
		return;
	}
}
// System.Void ChartsAndGraphs3D.ValueDisplay::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueDisplay__ctor_mEE71F22C2C3630FC1DE74057F97408AF0ECC0127 (ValueDisplay_tC05AB01BD20EAF13FC1701E9B59957453AF4491B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mB13CBC878616E7B618C7939C81789FED3A059370_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t8B0F79AB5A56A47BF39FF7841C6F3DA8F09738E4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Color BorderColor = new Color(0f, 0.4206896f, 1f), ValueBarColor = Color.blue, ValueBarNotActiveColor = new Color(0.2f, 0.2f, 0.2f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_0), (0.0f), (0.420689613f), (1.0f), /*hidden argument*/NULL);
		__this->___BorderColor_5 = L_0;
		// public Color BorderColor = new Color(0f, 0.4206896f, 1f), ValueBarColor = Color.blue, ValueBarNotActiveColor = new Color(0.2f, 0.2f, 0.2f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = Color_get_blue_m0D04554379CB8606EF48E3091CDC3098B81DD86D_inline(NULL);
		__this->___ValueBarColor_6 = L_1;
		// public Color BorderColor = new Color(0f, 0.4206896f, 1f), ValueBarColor = Color.blue, ValueBarNotActiveColor = new Color(0.2f, 0.2f, 0.2f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		memset((&L_2), 0, sizeof(L_2));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_2), (0.200000003f), (0.200000003f), (0.200000003f), /*hidden argument*/NULL);
		__this->___ValueBarNotActiveColor_7 = L_2;
		// public float Val = 5;
		__this->___Val_8 = (5.0f);
		// public bool Glow = true;
		__this->___Glow_10 = (bool)1;
		// public List<Transform> ValueBars = new List<Transform>();
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_3 = (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*)il2cpp_codegen_object_new(List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268(L_3, List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268_RuntimeMethod_var);
		__this->___ValueBars_14 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ValueBars_14), (void*)L_3);
		// List<GlowBehaivior> ValueBarsGlow = new List<GlowBehaivior>();
		List_1_t8B0F79AB5A56A47BF39FF7841C6F3DA8F09738E4* L_4 = (List_1_t8B0F79AB5A56A47BF39FF7841C6F3DA8F09738E4*)il2cpp_codegen_object_new(List_1_t8B0F79AB5A56A47BF39FF7841C6F3DA8F09738E4_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		List_1__ctor_mB13CBC878616E7B618C7939C81789FED3A059370(L_4, List_1__ctor_mB13CBC878616E7B618C7939C81789FED3A059370_RuntimeMethod_var);
		__this->___ValueBarsGlow_15 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ValueBarsGlow_15), (void*)L_4);
		// bool Changed = true;
		__this->___Changed_16 = (bool)1;
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
// System.Void ChartsAndGraphs3D.ValueBarMaxTextUnityHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueBarMaxTextUnityHelper__ctor_m325DC2FD1DBE2FC4A07EE5BEC55F20504E16DC55 (ValueBarMaxTextUnityHelper_t54EFFACAF3320A7509318572F7F3B7DF588720C6* __this, const RuntimeMethod* method) 
{
	{
		// public bool Active = true;
		__this->___Active_0 = (bool)1;
		// public float Scale = 0.1f;
		__this->___Scale_3 = (0.100000001f);
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
// System.Void ChartsAndGraphs3D.ValueCurrentTextUnityHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCurrentTextUnityHelper__ctor_mF41DB530E0CB942F4D148C05349890635DD8666F (ValueCurrentTextUnityHelper_t51D417922AB5F0B103C81FD35C0732EC7D233DE3* __this, const RuntimeMethod* method) 
{
	{
		// public bool Active = true;
		__this->___Active_0 = (bool)1;
		// public float Scale = 0.1f;
		__this->___Scale_3 = (0.100000001f);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3Method_Invoke_mF0EF5E8004EEB1649F0AAA3B1AE112C51EB02F47_inline (Vector3Method_t11EABE8E6896F72E6A3E3CAC834265E52601F0F7* __this, const RuntimeMethod* method) 
{
	typedef Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t69084B05B550AFE6DAA6EA35CAF50DB319ED78D6* InfoGetter_Invoke_mFEFAB45F3F95421FCAD8CCB39812A75899648F4B_inline (InfoGetter_tE75744DD40C706C13E49C55440153BC0203EDD0F* __this, const RuntimeMethod* method) 
{
	typedef List_1_t69084B05B550AFE6DAA6EA35CAF50DB319ED78D6* (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___value0;
		float L_1 = ___min1;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___value0;
		float L_5 = ___max2;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		float L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ValueDisplay_get_Value_m8A772E57F3925EB0124107AF6EFAC8AF646DA914_inline (ValueDisplay_tC05AB01BD20EAF13FC1701E9B59957453AF4491B* __this, const RuntimeMethod* method) 
{
	{
		// return Val;
		float L_0 = __this->___Val_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Math_Round_mAE7072AE69091258FAA8BD5923CE4A0E492B5B7D_inline (double ___value0, int32_t ___digits1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		double L_0 = ___value0;
		int32_t L_1 = ___digits1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_2;
		L_2 = Math_Round_mA90F6B1668D55BC6C538EBF0302B30E406E242B0(L_0, L_1, 0, NULL);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		__this->___a_3 = (1.0f);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_blue_m0D04554379CB8606EF48E3091CDC3098B81DD86D_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m67A5F1C9C14B834F1ECE5DCFDC3C5235C5265ED6_gshared_inline (List_1_t69084B05B550AFE6DAA6EA35CAF50DB319ED78D6* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m545762F67009314D9C63DD209B42FFF950569B05_gshared_inline (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
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

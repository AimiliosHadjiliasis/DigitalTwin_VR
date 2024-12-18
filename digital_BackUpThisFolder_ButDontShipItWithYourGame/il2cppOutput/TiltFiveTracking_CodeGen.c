#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 UnityEngine.Pose TiltFive.TrackableCore`1::get_Pose_GameboardSpace()
// 0x00000002 UnityEngine.Pose TiltFive.TrackableCore`1::get_Pose_UnityWorldSpace()
// 0x00000003 System.Boolean TiltFive.TrackableCore`1::get_IsTracked()
// 0x00000004 System.Void TiltFive.TrackableCore`1::Reset(T)
// 0x00000005 System.Void TiltFive.TrackableCore`1::Update(T,TiltFive.ScaleSettings,TiltFive.GameBoardSettings)
// 0x00000006 UnityEngine.Pose TiltFive.TrackableCore`1::GameboardToWorldSpace(UnityEngine.Pose,TiltFive.ScaleSettings,TiltFive.GameBoardSettings)
// 0x00000007 UnityEngine.Vector3 TiltFive.TrackableCore`1::GameboardToWorldSpace(UnityEngine.Vector3,TiltFive.ScaleSettings,TiltFive.GameBoardSettings)
// 0x00000008 UnityEngine.Vector3 TiltFive.TrackableCore`1::ConvertPosGBDToUGBD(UnityEngine.Vector3)
// 0x00000009 UnityEngine.Quaternion TiltFive.TrackableCore`1::GameboardToWorldSpace(UnityEngine.Quaternion,TiltFive.GameBoardSettings)
// 0x0000000A System.Void TiltFive.TrackableCore`1::SetDefaultPoseGameboardSpace(T)
// 0x0000000B System.Void TiltFive.TrackableCore`1::SetPoseUnityWorldSpace(TiltFive.ScaleSettings,TiltFive.GameBoardSettings)
// 0x0000000C System.Boolean TiltFive.TrackableCore`1::GetTrackingAvailability(T)
// 0x0000000D System.Boolean TiltFive.TrackableCore`1::TryGetPoseFromPlugin(UnityEngine.Pose&,T,TiltFive.ScaleSettings,TiltFive.GameBoardSettings)
// 0x0000000E System.Void TiltFive.TrackableCore`1::SetDrivenObjectTransform(T)
// 0x0000000F System.Void TiltFive.TrackableCore`1::.ctor()
static Il2CppMethodPointer s_methodPointers[15] = 
{
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const int32_t s_InvokerIndices[15] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
static const Il2CppTokenRangePair s_rgctxIndices[1] = 
{
	{ 0x02000002, { 0, 9 } },
};
extern const uint32_t g_rgctx_TrackableCore_1_t04D11A68AC8DA471F9D753C079586BE0AE2F523B;
extern const uint32_t g_rgctx_TrackableCore_1_SetDefaultPoseGameboardSpace_m8F79364A6764C690AFB9CA958B8A93E4AE0D97BA;
extern const uint32_t g_rgctx_T_tA3914F17690046EBC6AC858251EA72CF3571340B;
extern const uint32_t g_rgctx_TrackableCore_1_GetTrackingAvailability_m19E8A9D5A816C996D903F8D180A468EC62A62446;
extern const uint32_t g_rgctx_TrackableCore_1_TryGetPoseFromPlugin_m33907DD6F2299C44D94F56EE01163422A9A51AE4;
extern const uint32_t g_rgctx_TrackableCore_1_SetPoseUnityWorldSpace_mE28E22B77FC6EB6E00C9BF7E03249CFD709752F6;
extern const uint32_t g_rgctx_TrackableCore_1_SetDrivenObjectTransform_m22A24852DE7E5D2D7A192749CC014069B3E7F36A;
extern const uint32_t g_rgctx_TrackableCore_1_GameboardToWorldSpace_m1523A4F12A2F045A8DB409A1E5D99F9D35E36446;
extern const uint32_t g_rgctx_TrackableCore_1_t04D11A68AC8DA471F9D753C079586BE0AE2F523B;
static const Il2CppRGCTXDefinition s_rgctxValues[9] = 
{
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TrackableCore_1_t04D11A68AC8DA471F9D753C079586BE0AE2F523B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TrackableCore_1_SetDefaultPoseGameboardSpace_m8F79364A6764C690AFB9CA958B8A93E4AE0D97BA },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_tA3914F17690046EBC6AC858251EA72CF3571340B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TrackableCore_1_GetTrackingAvailability_m19E8A9D5A816C996D903F8D180A468EC62A62446 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TrackableCore_1_TryGetPoseFromPlugin_m33907DD6F2299C44D94F56EE01163422A9A51AE4 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TrackableCore_1_SetPoseUnityWorldSpace_mE28E22B77FC6EB6E00C9BF7E03249CFD709752F6 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TrackableCore_1_SetDrivenObjectTransform_m22A24852DE7E5D2D7A192749CC014069B3E7F36A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_TrackableCore_1_GameboardToWorldSpace_m1523A4F12A2F045A8DB409A1E5D99F9D35E36446 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TrackableCore_1_t04D11A68AC8DA471F9D753C079586BE0AE2F523B },
};
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_TiltFiveTracking_CodeGenModule;
const Il2CppCodeGenModule g_TiltFiveTracking_CodeGenModule = 
{
	"TiltFiveTracking.dll",
	15,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	1,
	s_rgctxIndices,
	9,
	s_rgctxValues,
	NULL,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};

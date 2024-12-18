#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Boolean TiltFive.GameBoard::TryGetGameboardType(TiltFive.GameboardType&)
extern void GameBoard_TryGetGameboardType_mA2A79BB241A7360D92A1C10BCDE2A6A4AA95B28E (void);
// 0x00000002 System.Boolean TiltFive.GameBoard::TryGetGameboardDimensions(TiltFive.GameboardType,TiltFive.GameBoard/GameboardDimensions&)
extern void GameBoard_TryGetGameboardDimensions_m688A1963677070ECD1C14E8F592F44B686C06355 (void);
// 0x00000003 System.Void TiltFive.GameBoard::.ctor()
extern void GameBoard__ctor_m886C0F745626DEA0171AA67D7D7D7FFE4C91B0EC (void);
// 0x00000004 TiltFive.Length TiltFive.GameBoard/GameboardDimensions::get_totalSpaceX()
extern void GameboardDimensions_get_totalSpaceX_m47B4B798608144D44FE383375FE4FB95C85C4B41 (void);
// 0x00000005 TiltFive.Length TiltFive.GameBoard/GameboardDimensions::get_totalSpaceY()
extern void GameboardDimensions_get_totalSpaceY_m6D8D15771CE2838DA80FAE2553CDC4BD07989779 (void);
// 0x00000006 System.Void TiltFive.GameBoard/GameboardDimensions::.ctor(TiltFive.T5_GameboardSize)
extern void GameboardDimensions__ctor_m05C851AEB3ACFD2DC22827EB7F6BFDDEA0E8F2CC (void);
// 0x00000007 System.Single TiltFive.GameBoardSettings::get_gameBoardScale()
extern void GameBoardSettings_get_gameBoardScale_m95684BB3F820DA15309C661128F9C2280C5BEECB (void);
// 0x00000008 UnityEngine.Vector3 TiltFive.GameBoardSettings::get_gameBoardCenter()
extern void GameBoardSettings_get_gameBoardCenter_m8A101407ACB4390891FC94F864D56B51DECCFE07 (void);
// 0x00000009 UnityEngine.Vector3 TiltFive.GameBoardSettings::get_gameBoardRotation()
extern void GameBoardSettings_get_gameBoardRotation_mF1B9C99BEBA0F4811C847315543731C5E213DDBC (void);
// 0x0000000A TiltFive.GameboardType TiltFive.GameBoardSettings::get_gameboardType()
extern void GameBoardSettings_get_gameboardType_m3416E2F36328DDA74CE9AB1D5469A6E75F52AB2C (void);
// 0x0000000B System.Void TiltFive.GameBoardSettings::.ctor()
extern void GameBoardSettings__ctor_mD2890485B34D5C411520D1FD74995DC81C319C0D (void);
static Il2CppMethodPointer s_methodPointers[11] = 
{
	GameBoard_TryGetGameboardType_mA2A79BB241A7360D92A1C10BCDE2A6A4AA95B28E,
	GameBoard_TryGetGameboardDimensions_m688A1963677070ECD1C14E8F592F44B686C06355,
	GameBoard__ctor_m886C0F745626DEA0171AA67D7D7D7FFE4C91B0EC,
	GameboardDimensions_get_totalSpaceX_m47B4B798608144D44FE383375FE4FB95C85C4B41,
	GameboardDimensions_get_totalSpaceY_m6D8D15771CE2838DA80FAE2553CDC4BD07989779,
	GameboardDimensions__ctor_m05C851AEB3ACFD2DC22827EB7F6BFDDEA0E8F2CC,
	GameBoardSettings_get_gameBoardScale_m95684BB3F820DA15309C661128F9C2280C5BEECB,
	GameBoardSettings_get_gameBoardCenter_m8A101407ACB4390891FC94F864D56B51DECCFE07,
	GameBoardSettings_get_gameBoardRotation_mF1B9C99BEBA0F4811C847315543731C5E213DDBC,
	GameBoardSettings_get_gameboardType_m3416E2F36328DDA74CE9AB1D5469A6E75F52AB2C,
	GameBoardSettings__ctor_mD2890485B34D5C411520D1FD74995DC81C319C0D,
};
extern void GameboardDimensions_get_totalSpaceX_m47B4B798608144D44FE383375FE4FB95C85C4B41_AdjustorThunk (void);
extern void GameboardDimensions_get_totalSpaceY_m6D8D15771CE2838DA80FAE2553CDC4BD07989779_AdjustorThunk (void);
extern void GameboardDimensions__ctor_m05C851AEB3ACFD2DC22827EB7F6BFDDEA0E8F2CC_AdjustorThunk (void);
static Il2CppTokenAdjustorThunkPair s_adjustorThunks[3] = 
{
	{ 0x06000004, GameboardDimensions_get_totalSpaceX_m47B4B798608144D44FE383375FE4FB95C85C4B41_AdjustorThunk },
	{ 0x06000005, GameboardDimensions_get_totalSpaceY_m6D8D15771CE2838DA80FAE2553CDC4BD07989779_AdjustorThunk },
	{ 0x06000006, GameboardDimensions__ctor_m05C851AEB3ACFD2DC22827EB7F6BFDDEA0E8F2CC_AdjustorThunk },
};
static const int32_t s_InvokerIndices[11] = 
{
	11090,
	10382,
	8115,
	7948,
	7948,
	6702,
	8019,
	8106,
	8106,
	7935,
	8115,
};
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_TiltFiveGameBoard_CodeGenModule;
const Il2CppCodeGenModule g_TiltFiveGameBoard_CodeGenModule = 
{
	"TiltFiveGameBoard.dll",
	11,
	s_methodPointers,
	3,
	s_adjustorThunks,
	s_InvokerIndices,
	0,
	NULL,
	0,
	NULL,
	0,
	NULL,
	NULL,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};

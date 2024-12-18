#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>



// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// TiltFive.GlassesSettings
struct GlassesSettings_tDE2641921BB452EF823D032185D46CBFA9E5782B;
// TiltFive.ScaleSettings
struct ScaleSettings_t4FE94D7555EF25D5286239492DE97AF448542507;
// System.String
struct String_t;
// TiltFive.TrackableSettings
struct TrackableSettings_t54076219B6A408E0FCC2EED6DAC35984CC69EC4F;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;

IL2CPP_EXTERN_C RuntimeClass* GlassesSettings_tDE2641921BB452EF823D032185D46CBFA9E5782B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral259AA5076CF6ED4251CE60F68584C520C2557368;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tEC9975362B7EB9796B7DBA0A2BA67FD12B3672F4 
{
};
struct Il2CppArrayBounds;

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

// TiltFive.Length
struct Length_tB42AD434EB12BFE64F8B2BAF2834C68DFF3B15D7 
{
	// System.Single TiltFive.Length::_meters
	float ____meters_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
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



// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// System.Void TiltFive.TrackableSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableSettings__ctor_m9E0CFBD28D8DB8596672D96C4EC1FE5BB0638ECF (TrackableSettings_t54076219B6A408E0FCC2EED6DAC35984CC69EC4F* __this, const RuntimeMethod* method) ;
// System.Void TiltFive.Length::.ctor(System.Single,TiltFive.LengthUnit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Length__ctor_m3D8B2098FB21C93C3F62AE2FABEB4BDC03D047F4 (Length_tB42AD434EB12BFE64F8B2BAF2834C68DFF3B15D7* __this, float ___value0, int32_t ___unit1, const RuntimeMethod* method) ;
// System.Single TiltFive.Length::get_ToMeters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Length_get_ToMeters_m2E766444A9049089DE628098721A710624922D62 (Length_tB42AD434EB12BFE64F8B2BAF2834C68DFF3B15D7* __this, const RuntimeMethod* method) ;
// System.Single TiltFive.ScaleSettings::get_physicalMetersPerWorldSpaceUnit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ScaleSettings_get_physicalMetersPerWorldSpaceUnit_m88EA402A990B6B7AD083C18F8A022AB6A31D2BBA (ScaleSettings_t4FE94D7555EF25D5286239492DE97AF448542507* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
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
// System.Single TiltFive.GlassesSettings::get_fieldOfView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GlassesSettings_get_fieldOfView_m17B155D3AB6B108CB2BD2D38F59AD3B3794BFA50 (GlassesSettings_tDE2641921BB452EF823D032185D46CBFA9E5782B* __this, const RuntimeMethod* method) 
{
	{
		// public float fieldOfView => overrideFOV
		//     ? Mathf.Clamp(customFOV, MIN_FOV, MAX_FOV)
		//     : DEFAULT_FOV;
		bool L_0 = __this->___overrideFOV_10;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		return (48.0f);
	}

IL_000e:
	{
		float L_1 = __this->___customFOV_11;
		float L_2;
		L_2 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(L_1, (35.0f), (64.0f), NULL);
		return L_2;
	}
}
// System.Void TiltFive.GlassesSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlassesSettings__ctor_m9E0CAC63CCEBAB54FF330E2203FB6F4EE904A90A (GlassesSettings_tDE2641921BB452EF823D032185D46CBFA9E5782B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlassesSettings_tDE2641921BB452EF823D032185D46CBFA9E5782B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float nearClipPlane = MIN_NEAR_CLIP_DISTANCE_IN_METERS;
		__this->___nearClipPlane_3 = (0.100000001f);
		// public float farClipPlane = 100f;
		__this->___farClipPlane_4 = (100.0f);
		// public float customFOV = DEFAULT_FOV;
		__this->___customFOV_11 = (48.0f);
		// public GlassesMirrorMode glassesMirrorMode = GlassesMirrorMode.LeftEye;
		__this->___glassesMirrorMode_12 = 1;
		// public bool usePreviewPose = true;
		__this->___usePreviewPose_13 = (bool)1;
		// public string friendlyName = DEFAULT_FRIENDLY_NAME;
		il2cpp_codegen_runtime_class_init_inline(GlassesSettings_tDE2641921BB452EF823D032185D46CBFA9E5782B_il2cpp_TypeInfo_var);
		String_t* L_0 = ((GlassesSettings_tDE2641921BB452EF823D032185D46CBFA9E5782B_StaticFields*)il2cpp_codegen_static_fields_for(GlassesSettings_tDE2641921BB452EF823D032185D46CBFA9E5782B_il2cpp_TypeInfo_var))->___DEFAULT_FRIENDLY_NAME_15;
		__this->___friendlyName_16 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___friendlyName_16), (void*)L_0);
		TrackableSettings__ctor_m9E0CFBD28D8DB8596672D96C4EC1FE5BB0638ECF(__this, NULL);
		return;
	}
}
// System.Void TiltFive.GlassesSettings::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlassesSettings__cctor_mFA61D37EF4986D3071E1CDE4C883C87848668FE5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlassesSettings_tDE2641921BB452EF823D032185D46CBFA9E5782B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral259AA5076CF6ED4251CE60F68584C520C2557368);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly string DEFAULT_FRIENDLY_NAME = "Tilt Five Glasses";
		((GlassesSettings_tDE2641921BB452EF823D032185D46CBFA9E5782B_StaticFields*)il2cpp_codegen_static_fields_for(GlassesSettings_tDE2641921BB452EF823D032185D46CBFA9E5782B_il2cpp_TypeInfo_var))->___DEFAULT_FRIENDLY_NAME_15 = _stringLiteral259AA5076CF6ED4251CE60F68584C520C2557368;
		Il2CppCodeGenWriteBarrier((void**)(&((GlassesSettings_tDE2641921BB452EF823D032185D46CBFA9E5782B_StaticFields*)il2cpp_codegen_static_fields_for(GlassesSettings_tDE2641921BB452EF823D032185D46CBFA9E5782B_il2cpp_TypeInfo_var))->___DEFAULT_FRIENDLY_NAME_15), (void*)_stringLiteral259AA5076CF6ED4251CE60F68584C520C2557368);
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
// System.Single TiltFive.ScaleSettings::get_physicalMetersPerWorldSpaceUnit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ScaleSettings_get_physicalMetersPerWorldSpaceUnit_m88EA402A990B6B7AD083C18F8A022AB6A31D2BBA (ScaleSettings_t4FE94D7555EF25D5286239492DE97AF448542507* __this, const RuntimeMethod* method) 
{
	Length_tB42AD434EB12BFE64F8B2BAF2834C68DFF3B15D7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public float physicalMetersPerWorldSpaceUnit => new Length(contentScaleRatio, contentScaleUnit).ToMeters;
		float L_0 = __this->___contentScaleRatio_1;
		int32_t L_1 = __this->___contentScaleUnit_0;
		Length_tB42AD434EB12BFE64F8B2BAF2834C68DFF3B15D7 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Length__ctor_m3D8B2098FB21C93C3F62AE2FABEB4BDC03D047F4((&L_2), L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3;
		L_3 = Length_get_ToMeters_m2E766444A9049089DE628098721A710624922D62((&V_0), NULL);
		return L_3;
	}
}
// System.Single TiltFive.ScaleSettings::get_worldSpaceUnitsPerPhysicalMeter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ScaleSettings_get_worldSpaceUnitsPerPhysicalMeter_mA3C43E8943117A64B62F2E716F46C73C3C26A6BC (ScaleSettings_t4FE94D7555EF25D5286239492DE97AF448542507* __this, const RuntimeMethod* method) 
{
	{
		// public float worldSpaceUnitsPerPhysicalMeter => 1 / Mathf.Max(physicalMetersPerWorldSpaceUnit, float.Epsilon);  // No dividing by zero.
		float L_0;
		L_0 = ScaleSettings_get_physicalMetersPerWorldSpaceUnit_m88EA402A990B6B7AD083C18F8A022AB6A31D2BBA(__this, NULL);
		float L_1;
		L_1 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline(L_0, (1.40129846E-45f), NULL);
		return ((float)((1.0f)/L_1));
	}
}
// System.Single TiltFive.ScaleSettings::get_oneUnitLengthInMeters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ScaleSettings_get_oneUnitLengthInMeters_m4728D19948DBDAF061490BF41205BA64A4E2F1FC (ScaleSettings_t4FE94D7555EF25D5286239492DE97AF448542507* __this, const RuntimeMethod* method) 
{
	Length_tB42AD434EB12BFE64F8B2BAF2834C68DFF3B15D7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public float oneUnitLengthInMeters => (new Length(1, contentScaleUnit)).ToMeters;
		int32_t L_0 = __this->___contentScaleUnit_0;
		Length_tB42AD434EB12BFE64F8B2BAF2834C68DFF3B15D7 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Length__ctor_m3D8B2098FB21C93C3F62AE2FABEB4BDC03D047F4((&L_1), (1.0f), L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		float L_2;
		L_2 = Length_get_ToMeters_m2E766444A9049089DE628098721A710624922D62((&V_0), NULL);
		return L_2;
	}
}
// System.Single TiltFive.ScaleSettings::GetScaleToUWRLD_UGBD(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ScaleSettings_GetScaleToUWRLD_UGBD_mE688695B85E4DB6F3328DFCAA25092BC8F55122C (ScaleSettings_t4FE94D7555EF25D5286239492DE97AF448542507* __this, float ___gameboardScale0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// float scaleToUGBD_UWRLD = physicalMetersPerWorldSpaceUnit * gameboardScale;
		float L_0;
		L_0 = ScaleSettings_get_physicalMetersPerWorldSpaceUnit_m88EA402A990B6B7AD083C18F8A022AB6A31D2BBA(__this, NULL);
		float L_1 = ___gameboardScale0;
		V_0 = ((float)il2cpp_codegen_multiply(L_0, L_1));
		// float scaleToUWRLD_UGBD = scaleToUGBD_UWRLD > 0
		//     ? 1f / scaleToUGBD_UWRLD
		//     : 1f / float.Epsilon;
		float L_2 = V_0;
		if ((((float)L_2) > ((float)(0.0f))))
		{
			goto IL_0017;
		}
	}
	{
		return (std::numeric_limits<float>::infinity());
	}

IL_0017:
	{
		float L_3 = V_0;
		// return scaleToUWRLD_UGBD;
		return ((float)((1.0f)/L_3));
	}
}
// System.Void TiltFive.ScaleSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScaleSettings__ctor_mDE6DB5D7EB046F465FAFA12B1923BA759C21A5E9 (ScaleSettings_t4FE94D7555EF25D5286239492DE97AF448542507* __this, const RuntimeMethod* method) 
{
	{
		// public LengthUnit contentScaleUnit = LengthUnit.Centimeters;
		__this->___contentScaleUnit_0 = 4;
		// public float contentScaleRatio = 5f;
		__this->___contentScaleRatio_1 = (5.0f);
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
// System.Void TiltFive.TrackableSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackableSettings__ctor_m9E0CFBD28D8DB8596672D96C4EC1FE5BB0638ECF (TrackableSettings_t54076219B6A408E0FCC2EED6DAC35984CC69EC4F* __this, const RuntimeMethod* method) 
{
	{
		// public bool RejectUntrackedPositionData = true;
		__this->___RejectUntrackedPositionData_0 = (bool)1;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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

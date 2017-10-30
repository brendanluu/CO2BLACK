#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "object-internals.h"

// System.Char[]
struct CharU5BU5D_t2005277873;
// System.Void
struct Void_t2550788216;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t865547100;
// System.String
struct String_t;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t3245477534;
// System.IAsyncResult
struct IAsyncResult_t3344177311;
// System.AsyncCallback
struct AsyncCallback_t2510284957;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFrameUpdate
struct ARFrameUpdate_t148237887;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorAdded
struct ARAnchorAdded_t2783252133;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorUpdated
struct ARAnchorUpdated_t1566318568;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorRemoved
struct ARAnchorRemoved_t1938576619;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorAdded
struct ARUserAnchorAdded_t3369803109;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorUpdated
struct ARUserAnchorUpdated_t2077321013;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorRemoved
struct ARUserAnchorRemoved_t3858116095;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionFailed
struct ARSessionFailed_t1827573426;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionCallback
struct ARSessionCallback_t3154612443;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionTrackingChanged
struct ARSessionTrackingChanged_t3156754292;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARFrameUpdate
struct internal_ARFrameUpdate_t3745128200;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARSessionTrackingChanged
struct internal_ARSessionTrackingChanged_t208978224;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorAdded
struct internal_ARAnchorAdded_t3297948615;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorUpdated
struct internal_ARAnchorUpdated_t1519908705;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorRemoved
struct internal_ARAnchorRemoved_t2496861394;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorAdded
struct internal_ARUserAnchorAdded_t3898537032;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorUpdated
struct internal_ARUserAnchorUpdated_t1059349429;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorRemoved
struct internal_ARUserAnchorRemoved_t751005791;

struct Vector3_t2384904679 ;



#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef VALUETYPE_T579926687_H
#define VALUETYPE_T579926687_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t579926687  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t579926687_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t579926687_marshaled_com
{
};
#endif // VALUETYPE_T579926687_H
#ifndef VECTOR3_T2384904679_H
#define VECTOR3_T2384904679_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t2384904679 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t2384904679, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t2384904679, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t2384904679, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t2384904679_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t2384904679  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t2384904679  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t2384904679  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t2384904679  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t2384904679  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t2384904679  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t2384904679  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t2384904679  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t2384904679  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t2384904679  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t2384904679_StaticFields, ___zeroVector_4)); }
	inline Vector3_t2384904679  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t2384904679 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t2384904679  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t2384904679_StaticFields, ___oneVector_5)); }
	inline Vector3_t2384904679  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t2384904679 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t2384904679  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t2384904679_StaticFields, ___upVector_6)); }
	inline Vector3_t2384904679  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t2384904679 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t2384904679  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t2384904679_StaticFields, ___downVector_7)); }
	inline Vector3_t2384904679  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t2384904679 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t2384904679  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t2384904679_StaticFields, ___leftVector_8)); }
	inline Vector3_t2384904679  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t2384904679 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t2384904679  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t2384904679_StaticFields, ___rightVector_9)); }
	inline Vector3_t2384904679  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t2384904679 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t2384904679  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t2384904679_StaticFields, ___forwardVector_10)); }
	inline Vector3_t2384904679  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t2384904679 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t2384904679  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t2384904679_StaticFields, ___backVector_11)); }
	inline Vector3_t2384904679  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t2384904679 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t2384904679  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t2384904679_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t2384904679  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t2384904679 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t2384904679  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t2384904679_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t2384904679  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t2384904679 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t2384904679  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T2384904679_H
#ifndef U24ARRAYTYPEU3D1024_T2953251151_H
#define U24ARRAYTYPEU3D1024_T2953251151_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType=1024
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D1024_t2953251151 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D1024_t2953251151__padding[1024];
	};

public:
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D1024_T2953251151_H
#ifndef U24ARRAYTYPEU3D100_T3747106016_H
#define U24ARRAYTYPEU3D100_T3747106016_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType=100
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D100_t3747106016 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D100_t3747106016__padding[100];
	};

public:
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D100_T3747106016_H
#ifndef U24ARRAYTYPEU3D2052_T4267972063_H
#define U24ARRAYTYPEU3D2052_T4267972063_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType=2052
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D2052_t4267972063 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D2052_t4267972063__padding[2052];
	};

public:
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D2052_T4267972063_H
#ifndef U24ARRAYTYPEU3D128_T2305094183_H
#define U24ARRAYTYPEU3D128_T2305094183_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType=128
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D128_t2305094183 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D128_t2305094183__padding[128];
	};

public:
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D128_T2305094183_H
#ifndef U24ARRAYTYPEU3D64_T2042006775_H
#define U24ARRAYTYPEU3D64_T2042006775_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType=64
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D64_t2042006775 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D64_t2042006775__padding[64];
	};

public:
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D64_T2042006775_H
#ifndef U24ARRAYTYPEU3D32_T3943856021_H
#define U24ARRAYTYPEU3D32_T3943856021_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType=32
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D32_t3943856021 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D32_t3943856021__padding[32];
	};

public:
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D32_T3943856021_H
#ifndef U24ARRAYTYPEU3D12_T1949145165_H
#define U24ARRAYTYPEU3D12_T1949145165_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType=12
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D12_t1949145165 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D12_t1949145165__padding[12];
	};

public:
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D12_T1949145165_H
#ifndef U24ARRAYTYPEU3D116_T886570147_H
#define U24ARRAYTYPEU3D116_T886570147_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType=116
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D116_t886570147 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D116_t886570147__padding[116];
	};

public:
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D116_T886570147_H
#ifndef U24ARRAYTYPEU3D20_T1302890685_H
#define U24ARRAYTYPEU3D20_T1302890685_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType=20
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D20_t1302890685 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D20_t1302890685__padding[20];
	};

public:
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D20_T1302890685_H
#ifndef U24ARRAYTYPEU3D24_T2443818269_H
#define U24ARRAYTYPEU3D24_T2443818269_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType=24
#pragma pack(push, tp, 1)
struct  U24ArrayTypeU3D24_t2443818269 
{
public:
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D24_t2443818269__padding[24];
	};

public:
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU3D24_T2443818269_H
#ifndef ENUM_T3804358676_H
#define ENUM_T3804358676_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t3804358676  : public ValueType_t579926687
{
public:

public:
};

struct Enum_t3804358676_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t2005277873* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t3804358676_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t2005277873* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t2005277873** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t2005277873* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t3804358676_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t3804358676_marshaled_com
{
};
#endif // ENUM_T3804358676_H
#ifndef MATRIX4X4_T2503387250_H
#define MATRIX4X4_T2503387250_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Matrix4x4
struct  Matrix4x4_t2503387250 
{
public:
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

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t2503387250, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t2503387250, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t2503387250, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t2503387250, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t2503387250, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t2503387250, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t2503387250, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t2503387250, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t2503387250, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t2503387250, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t2503387250, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t2503387250, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t2503387250, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t2503387250, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t2503387250, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t2503387250, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_t2503387250_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_t2503387250  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_t2503387250  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t2503387250_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_t2503387250  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_t2503387250 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_t2503387250  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_t2503387250_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_t2503387250  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_t2503387250 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_t2503387250  value)
	{
		___identityMatrix_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATRIX4X4_T2503387250_H
#ifndef VECTOR4_T2589102707_H
#define VECTOR4_T2589102707_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector4
struct  Vector4_t2589102707 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_t2589102707, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_t2589102707, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_t2589102707, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_t2589102707, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_t2589102707_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t2589102707  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t2589102707  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t2589102707  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t2589102707  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_t2589102707_StaticFields, ___zeroVector_5)); }
	inline Vector4_t2589102707  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_t2589102707 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_t2589102707  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_t2589102707_StaticFields, ___oneVector_6)); }
	inline Vector4_t2589102707  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_t2589102707 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_t2589102707  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_t2589102707_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_t2589102707  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_t2589102707 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_t2589102707  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_t2589102707_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_t2589102707  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_t2589102707 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_t2589102707  value)
	{
		___negativeInfinityVector_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR4_T2589102707_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef UNITYARLIGHTESTIMATE_T1292793666_H
#define UNITYARLIGHTESTIMATE_T1292793666_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARLightEstimate
struct  UnityARLightEstimate_t1292793666 
{
public:
	// System.Single UnityEngine.XR.iOS.UnityARLightEstimate::ambientIntensity
	float ___ambientIntensity_0;
	// System.Single UnityEngine.XR.iOS.UnityARLightEstimate::ambientColorTemperature
	float ___ambientColorTemperature_1;

public:
	inline static int32_t get_offset_of_ambientIntensity_0() { return static_cast<int32_t>(offsetof(UnityARLightEstimate_t1292793666, ___ambientIntensity_0)); }
	inline float get_ambientIntensity_0() const { return ___ambientIntensity_0; }
	inline float* get_address_of_ambientIntensity_0() { return &___ambientIntensity_0; }
	inline void set_ambientIntensity_0(float value)
	{
		___ambientIntensity_0 = value;
	}

	inline static int32_t get_offset_of_ambientColorTemperature_1() { return static_cast<int32_t>(offsetof(UnityARLightEstimate_t1292793666, ___ambientColorTemperature_1)); }
	inline float get_ambientColorTemperature_1() const { return ___ambientColorTemperature_1; }
	inline float* get_address_of_ambientColorTemperature_1() { return &___ambientColorTemperature_1; }
	inline void set_ambientColorTemperature_1(float value)
	{
		___ambientColorTemperature_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARLIGHTESTIMATE_T1292793666_H
#ifndef VOID_T2550788216_H
#define VOID_T2550788216_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t2550788216 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T2550788216_H
#ifndef ARPLANEANCHORALIGNMENT_T3570464862_H
#define ARPLANEANCHORALIGNMENT_T3570464862_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARPlaneAnchorAlignment
struct  ARPlaneAnchorAlignment_t3570464862 
{
public:
	// System.Int64 UnityEngine.XR.iOS.ARPlaneAnchorAlignment::value__
	int64_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ARPlaneAnchorAlignment_t3570464862, ___value___1)); }
	inline int64_t get_value___1() const { return ___value___1; }
	inline int64_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int64_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARPLANEANCHORALIGNMENT_T3570464862_H
#ifndef ARHITTESTRESULTTYPE_T1265830352_H
#define ARHITTESTRESULTTYPE_T1265830352_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARHitTestResultType
struct  ARHitTestResultType_t1265830352 
{
public:
	// System.Int64 UnityEngine.XR.iOS.ARHitTestResultType::value__
	int64_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ARHitTestResultType_t1265830352, ___value___1)); }
	inline int64_t get_value___1() const { return ___value___1; }
	inline int64_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int64_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARHITTESTRESULTTYPE_T1265830352_H
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3528821798_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3528821798_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t3528821798  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t3528821798_StaticFields
{
public:
	// <PrivateImplementationDetails>/$ArrayType=1024 <PrivateImplementationDetails>::$field-373B494F210C656134C5728D551D4C97B013EB33
	U24ArrayTypeU3D1024_t2953251151  ___U24fieldU2D373B494F210C656134C5728D551D4C97B013EB33_0;
	// <PrivateImplementationDetails>/$ArrayType=100 <PrivateImplementationDetails>::$field-F5B52AE718355A38E8190D5F947B52DFB427A1D7
	U24ArrayTypeU3D100_t3747106016  ___U24fieldU2DF5B52AE718355A38E8190D5F947B52DFB427A1D7_1;
	// <PrivateImplementationDetails>/$ArrayType=100 <PrivateImplementationDetails>::$field-81D5D8B4DDFA3FBB954AC400415044EB9F11E33E
	U24ArrayTypeU3D100_t3747106016  ___U24fieldU2D81D5D8B4DDFA3FBB954AC400415044EB9F11E33E_2;
	// <PrivateImplementationDetails>/$ArrayType=2052 <PrivateImplementationDetails>::$field-C0C10EC6AF4A4101F894B153E1CD493ADC01A67F
	U24ArrayTypeU3D2052_t4267972063  ___U24fieldU2DC0C10EC6AF4A4101F894B153E1CD493ADC01A67F_3;
	// <PrivateImplementationDetails>/$ArrayType=128 <PrivateImplementationDetails>::$field-6A94F0C3DCA389344CEDB99F171FA1E092E842E6
	U24ArrayTypeU3D128_t2305094183  ___U24fieldU2D6A94F0C3DCA389344CEDB99F171FA1E092E842E6_4;
	// <PrivateImplementationDetails>/$ArrayType=64 <PrivateImplementationDetails>::$field-8ED4E99B936B26A09EDFAB9E336CF75F4913B454
	U24ArrayTypeU3D64_t2042006775  ___U24fieldU2D8ED4E99B936B26A09EDFAB9E336CF75F4913B454_5;
	// <PrivateImplementationDetails>/$ArrayType=32 <PrivateImplementationDetails>::$field-F5F598DAC7D3E479CD72BAAB99EE6617D8190398
	U24ArrayTypeU3D32_t3943856021  ___U24fieldU2DF5F598DAC7D3E479CD72BAAB99EE6617D8190398_6;
	// <PrivateImplementationDetails>/$ArrayType=32 <PrivateImplementationDetails>::$field-2492606636F4A4666E0D617B51116A5A68539881
	U24ArrayTypeU3D32_t3943856021  ___U24fieldU2D2492606636F4A4666E0D617B51116A5A68539881_7;
	// <PrivateImplementationDetails>/$ArrayType=12 <PrivateImplementationDetails>::$field-472655E8FD2B8B97DB5D188D273A20E8834C19BB
	U24ArrayTypeU3D12_t1949145165  ___U24fieldU2D472655E8FD2B8B97DB5D188D273A20E8834C19BB_8;
	// <PrivateImplementationDetails>/$ArrayType=116 <PrivateImplementationDetails>::$field-D8E4ACBC2D957C3344A3CAD69FCF9A60C8034DBF
	U24ArrayTypeU3D116_t886570147  ___U24fieldU2DD8E4ACBC2D957C3344A3CAD69FCF9A60C8034DBF_9;
	// <PrivateImplementationDetails>/$ArrayType=128 <PrivateImplementationDetails>::$field-FD5BE77C4372533D7C16BF67D58A3ABBE604ED81
	U24ArrayTypeU3D128_t2305094183  ___U24fieldU2DFD5BE77C4372533D7C16BF67D58A3ABBE604ED81_10;
	// <PrivateImplementationDetails>/$ArrayType=20 <PrivateImplementationDetails>::$field-AE6B2897A8B88E297D61124152931A88D5D977F4
	U24ArrayTypeU3D20_t1302890685  ___U24fieldU2DAE6B2897A8B88E297D61124152931A88D5D977F4_11;
	// <PrivateImplementationDetails>/$ArrayType=32 <PrivateImplementationDetails>::$field-794CB2CC08B7EC30CA04323EFAC1B017E5B5D2C6
	U24ArrayTypeU3D32_t3943856021  ___U24fieldU2D794CB2CC08B7EC30CA04323EFAC1B017E5B5D2C6_12;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-BEEEBCEF33AF5B72B0463DF9185C0226DE5909AD
	U24ArrayTypeU3D24_t2443818269  ___U24fieldU2DBEEEBCEF33AF5B72B0463DF9185C0226DE5909AD_13;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-8E7629AD5AF686202B8CB7C014505C432FFE31E6
	U24ArrayTypeU3D24_t2443818269  ___U24fieldU2D8E7629AD5AF686202B8CB7C014505C432FFE31E6_14;

public:
	inline static int32_t get_offset_of_U24fieldU2D373B494F210C656134C5728D551D4C97B013EB33_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3528821798_StaticFields, ___U24fieldU2D373B494F210C656134C5728D551D4C97B013EB33_0)); }
	inline U24ArrayTypeU3D1024_t2953251151  get_U24fieldU2D373B494F210C656134C5728D551D4C97B013EB33_0() const { return ___U24fieldU2D373B494F210C656134C5728D551D4C97B013EB33_0; }
	inline U24ArrayTypeU3D1024_t2953251151 * get_address_of_U24fieldU2D373B494F210C656134C5728D551D4C97B013EB33_0() { return &___U24fieldU2D373B494F210C656134C5728D551D4C97B013EB33_0; }
	inline void set_U24fieldU2D373B494F210C656134C5728D551D4C97B013EB33_0(U24ArrayTypeU3D1024_t2953251151  value)
	{
		___U24fieldU2D373B494F210C656134C5728D551D4C97B013EB33_0 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DF5B52AE718355A38E8190D5F947B52DFB427A1D7_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3528821798_StaticFields, ___U24fieldU2DF5B52AE718355A38E8190D5F947B52DFB427A1D7_1)); }
	inline U24ArrayTypeU3D100_t3747106016  get_U24fieldU2DF5B52AE718355A38E8190D5F947B52DFB427A1D7_1() const { return ___U24fieldU2DF5B52AE718355A38E8190D5F947B52DFB427A1D7_1; }
	inline U24ArrayTypeU3D100_t3747106016 * get_address_of_U24fieldU2DF5B52AE718355A38E8190D5F947B52DFB427A1D7_1() { return &___U24fieldU2DF5B52AE718355A38E8190D5F947B52DFB427A1D7_1; }
	inline void set_U24fieldU2DF5B52AE718355A38E8190D5F947B52DFB427A1D7_1(U24ArrayTypeU3D100_t3747106016  value)
	{
		___U24fieldU2DF5B52AE718355A38E8190D5F947B52DFB427A1D7_1 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D81D5D8B4DDFA3FBB954AC400415044EB9F11E33E_2() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3528821798_StaticFields, ___U24fieldU2D81D5D8B4DDFA3FBB954AC400415044EB9F11E33E_2)); }
	inline U24ArrayTypeU3D100_t3747106016  get_U24fieldU2D81D5D8B4DDFA3FBB954AC400415044EB9F11E33E_2() const { return ___U24fieldU2D81D5D8B4DDFA3FBB954AC400415044EB9F11E33E_2; }
	inline U24ArrayTypeU3D100_t3747106016 * get_address_of_U24fieldU2D81D5D8B4DDFA3FBB954AC400415044EB9F11E33E_2() { return &___U24fieldU2D81D5D8B4DDFA3FBB954AC400415044EB9F11E33E_2; }
	inline void set_U24fieldU2D81D5D8B4DDFA3FBB954AC400415044EB9F11E33E_2(U24ArrayTypeU3D100_t3747106016  value)
	{
		___U24fieldU2D81D5D8B4DDFA3FBB954AC400415044EB9F11E33E_2 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DC0C10EC6AF4A4101F894B153E1CD493ADC01A67F_3() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3528821798_StaticFields, ___U24fieldU2DC0C10EC6AF4A4101F894B153E1CD493ADC01A67F_3)); }
	inline U24ArrayTypeU3D2052_t4267972063  get_U24fieldU2DC0C10EC6AF4A4101F894B153E1CD493ADC01A67F_3() const { return ___U24fieldU2DC0C10EC6AF4A4101F894B153E1CD493ADC01A67F_3; }
	inline U24ArrayTypeU3D2052_t4267972063 * get_address_of_U24fieldU2DC0C10EC6AF4A4101F894B153E1CD493ADC01A67F_3() { return &___U24fieldU2DC0C10EC6AF4A4101F894B153E1CD493ADC01A67F_3; }
	inline void set_U24fieldU2DC0C10EC6AF4A4101F894B153E1CD493ADC01A67F_3(U24ArrayTypeU3D2052_t4267972063  value)
	{
		___U24fieldU2DC0C10EC6AF4A4101F894B153E1CD493ADC01A67F_3 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D6A94F0C3DCA389344CEDB99F171FA1E092E842E6_4() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3528821798_StaticFields, ___U24fieldU2D6A94F0C3DCA389344CEDB99F171FA1E092E842E6_4)); }
	inline U24ArrayTypeU3D128_t2305094183  get_U24fieldU2D6A94F0C3DCA389344CEDB99F171FA1E092E842E6_4() const { return ___U24fieldU2D6A94F0C3DCA389344CEDB99F171FA1E092E842E6_4; }
	inline U24ArrayTypeU3D128_t2305094183 * get_address_of_U24fieldU2D6A94F0C3DCA389344CEDB99F171FA1E092E842E6_4() { return &___U24fieldU2D6A94F0C3DCA389344CEDB99F171FA1E092E842E6_4; }
	inline void set_U24fieldU2D6A94F0C3DCA389344CEDB99F171FA1E092E842E6_4(U24ArrayTypeU3D128_t2305094183  value)
	{
		___U24fieldU2D6A94F0C3DCA389344CEDB99F171FA1E092E842E6_4 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D8ED4E99B936B26A09EDFAB9E336CF75F4913B454_5() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3528821798_StaticFields, ___U24fieldU2D8ED4E99B936B26A09EDFAB9E336CF75F4913B454_5)); }
	inline U24ArrayTypeU3D64_t2042006775  get_U24fieldU2D8ED4E99B936B26A09EDFAB9E336CF75F4913B454_5() const { return ___U24fieldU2D8ED4E99B936B26A09EDFAB9E336CF75F4913B454_5; }
	inline U24ArrayTypeU3D64_t2042006775 * get_address_of_U24fieldU2D8ED4E99B936B26A09EDFAB9E336CF75F4913B454_5() { return &___U24fieldU2D8ED4E99B936B26A09EDFAB9E336CF75F4913B454_5; }
	inline void set_U24fieldU2D8ED4E99B936B26A09EDFAB9E336CF75F4913B454_5(U24ArrayTypeU3D64_t2042006775  value)
	{
		___U24fieldU2D8ED4E99B936B26A09EDFAB9E336CF75F4913B454_5 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DF5F598DAC7D3E479CD72BAAB99EE6617D8190398_6() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3528821798_StaticFields, ___U24fieldU2DF5F598DAC7D3E479CD72BAAB99EE6617D8190398_6)); }
	inline U24ArrayTypeU3D32_t3943856021  get_U24fieldU2DF5F598DAC7D3E479CD72BAAB99EE6617D8190398_6() const { return ___U24fieldU2DF5F598DAC7D3E479CD72BAAB99EE6617D8190398_6; }
	inline U24ArrayTypeU3D32_t3943856021 * get_address_of_U24fieldU2DF5F598DAC7D3E479CD72BAAB99EE6617D8190398_6() { return &___U24fieldU2DF5F598DAC7D3E479CD72BAAB99EE6617D8190398_6; }
	inline void set_U24fieldU2DF5F598DAC7D3E479CD72BAAB99EE6617D8190398_6(U24ArrayTypeU3D32_t3943856021  value)
	{
		___U24fieldU2DF5F598DAC7D3E479CD72BAAB99EE6617D8190398_6 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D2492606636F4A4666E0D617B51116A5A68539881_7() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3528821798_StaticFields, ___U24fieldU2D2492606636F4A4666E0D617B51116A5A68539881_7)); }
	inline U24ArrayTypeU3D32_t3943856021  get_U24fieldU2D2492606636F4A4666E0D617B51116A5A68539881_7() const { return ___U24fieldU2D2492606636F4A4666E0D617B51116A5A68539881_7; }
	inline U24ArrayTypeU3D32_t3943856021 * get_address_of_U24fieldU2D2492606636F4A4666E0D617B51116A5A68539881_7() { return &___U24fieldU2D2492606636F4A4666E0D617B51116A5A68539881_7; }
	inline void set_U24fieldU2D2492606636F4A4666E0D617B51116A5A68539881_7(U24ArrayTypeU3D32_t3943856021  value)
	{
		___U24fieldU2D2492606636F4A4666E0D617B51116A5A68539881_7 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D472655E8FD2B8B97DB5D188D273A20E8834C19BB_8() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3528821798_StaticFields, ___U24fieldU2D472655E8FD2B8B97DB5D188D273A20E8834C19BB_8)); }
	inline U24ArrayTypeU3D12_t1949145165  get_U24fieldU2D472655E8FD2B8B97DB5D188D273A20E8834C19BB_8() const { return ___U24fieldU2D472655E8FD2B8B97DB5D188D273A20E8834C19BB_8; }
	inline U24ArrayTypeU3D12_t1949145165 * get_address_of_U24fieldU2D472655E8FD2B8B97DB5D188D273A20E8834C19BB_8() { return &___U24fieldU2D472655E8FD2B8B97DB5D188D273A20E8834C19BB_8; }
	inline void set_U24fieldU2D472655E8FD2B8B97DB5D188D273A20E8834C19BB_8(U24ArrayTypeU3D12_t1949145165  value)
	{
		___U24fieldU2D472655E8FD2B8B97DB5D188D273A20E8834C19BB_8 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DD8E4ACBC2D957C3344A3CAD69FCF9A60C8034DBF_9() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3528821798_StaticFields, ___U24fieldU2DD8E4ACBC2D957C3344A3CAD69FCF9A60C8034DBF_9)); }
	inline U24ArrayTypeU3D116_t886570147  get_U24fieldU2DD8E4ACBC2D957C3344A3CAD69FCF9A60C8034DBF_9() const { return ___U24fieldU2DD8E4ACBC2D957C3344A3CAD69FCF9A60C8034DBF_9; }
	inline U24ArrayTypeU3D116_t886570147 * get_address_of_U24fieldU2DD8E4ACBC2D957C3344A3CAD69FCF9A60C8034DBF_9() { return &___U24fieldU2DD8E4ACBC2D957C3344A3CAD69FCF9A60C8034DBF_9; }
	inline void set_U24fieldU2DD8E4ACBC2D957C3344A3CAD69FCF9A60C8034DBF_9(U24ArrayTypeU3D116_t886570147  value)
	{
		___U24fieldU2DD8E4ACBC2D957C3344A3CAD69FCF9A60C8034DBF_9 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DFD5BE77C4372533D7C16BF67D58A3ABBE604ED81_10() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3528821798_StaticFields, ___U24fieldU2DFD5BE77C4372533D7C16BF67D58A3ABBE604ED81_10)); }
	inline U24ArrayTypeU3D128_t2305094183  get_U24fieldU2DFD5BE77C4372533D7C16BF67D58A3ABBE604ED81_10() const { return ___U24fieldU2DFD5BE77C4372533D7C16BF67D58A3ABBE604ED81_10; }
	inline U24ArrayTypeU3D128_t2305094183 * get_address_of_U24fieldU2DFD5BE77C4372533D7C16BF67D58A3ABBE604ED81_10() { return &___U24fieldU2DFD5BE77C4372533D7C16BF67D58A3ABBE604ED81_10; }
	inline void set_U24fieldU2DFD5BE77C4372533D7C16BF67D58A3ABBE604ED81_10(U24ArrayTypeU3D128_t2305094183  value)
	{
		___U24fieldU2DFD5BE77C4372533D7C16BF67D58A3ABBE604ED81_10 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DAE6B2897A8B88E297D61124152931A88D5D977F4_11() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3528821798_StaticFields, ___U24fieldU2DAE6B2897A8B88E297D61124152931A88D5D977F4_11)); }
	inline U24ArrayTypeU3D20_t1302890685  get_U24fieldU2DAE6B2897A8B88E297D61124152931A88D5D977F4_11() const { return ___U24fieldU2DAE6B2897A8B88E297D61124152931A88D5D977F4_11; }
	inline U24ArrayTypeU3D20_t1302890685 * get_address_of_U24fieldU2DAE6B2897A8B88E297D61124152931A88D5D977F4_11() { return &___U24fieldU2DAE6B2897A8B88E297D61124152931A88D5D977F4_11; }
	inline void set_U24fieldU2DAE6B2897A8B88E297D61124152931A88D5D977F4_11(U24ArrayTypeU3D20_t1302890685  value)
	{
		___U24fieldU2DAE6B2897A8B88E297D61124152931A88D5D977F4_11 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D794CB2CC08B7EC30CA04323EFAC1B017E5B5D2C6_12() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3528821798_StaticFields, ___U24fieldU2D794CB2CC08B7EC30CA04323EFAC1B017E5B5D2C6_12)); }
	inline U24ArrayTypeU3D32_t3943856021  get_U24fieldU2D794CB2CC08B7EC30CA04323EFAC1B017E5B5D2C6_12() const { return ___U24fieldU2D794CB2CC08B7EC30CA04323EFAC1B017E5B5D2C6_12; }
	inline U24ArrayTypeU3D32_t3943856021 * get_address_of_U24fieldU2D794CB2CC08B7EC30CA04323EFAC1B017E5B5D2C6_12() { return &___U24fieldU2D794CB2CC08B7EC30CA04323EFAC1B017E5B5D2C6_12; }
	inline void set_U24fieldU2D794CB2CC08B7EC30CA04323EFAC1B017E5B5D2C6_12(U24ArrayTypeU3D32_t3943856021  value)
	{
		___U24fieldU2D794CB2CC08B7EC30CA04323EFAC1B017E5B5D2C6_12 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2DBEEEBCEF33AF5B72B0463DF9185C0226DE5909AD_13() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3528821798_StaticFields, ___U24fieldU2DBEEEBCEF33AF5B72B0463DF9185C0226DE5909AD_13)); }
	inline U24ArrayTypeU3D24_t2443818269  get_U24fieldU2DBEEEBCEF33AF5B72B0463DF9185C0226DE5909AD_13() const { return ___U24fieldU2DBEEEBCEF33AF5B72B0463DF9185C0226DE5909AD_13; }
	inline U24ArrayTypeU3D24_t2443818269 * get_address_of_U24fieldU2DBEEEBCEF33AF5B72B0463DF9185C0226DE5909AD_13() { return &___U24fieldU2DBEEEBCEF33AF5B72B0463DF9185C0226DE5909AD_13; }
	inline void set_U24fieldU2DBEEEBCEF33AF5B72B0463DF9185C0226DE5909AD_13(U24ArrayTypeU3D24_t2443818269  value)
	{
		___U24fieldU2DBEEEBCEF33AF5B72B0463DF9185C0226DE5909AD_13 = value;
	}

	inline static int32_t get_offset_of_U24fieldU2D8E7629AD5AF686202B8CB7C014505C432FFE31E6_14() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3528821798_StaticFields, ___U24fieldU2D8E7629AD5AF686202B8CB7C014505C432FFE31E6_14)); }
	inline U24ArrayTypeU3D24_t2443818269  get_U24fieldU2D8E7629AD5AF686202B8CB7C014505C432FFE31E6_14() const { return ___U24fieldU2D8E7629AD5AF686202B8CB7C014505C432FFE31E6_14; }
	inline U24ArrayTypeU3D24_t2443818269 * get_address_of_U24fieldU2D8E7629AD5AF686202B8CB7C014505C432FFE31E6_14() { return &___U24fieldU2D8E7629AD5AF686202B8CB7C014505C432FFE31E6_14; }
	inline void set_U24fieldU2D8E7629AD5AF686202B8CB7C014505C432FFE31E6_14(U24ArrayTypeU3D24_t2443818269  value)
	{
		___U24fieldU2D8E7629AD5AF686202B8CB7C014505C432FFE31E6_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3528821798_H
#ifndef DELEGATE_T493521886_H
#define DELEGATE_T493521886_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t493521886  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t865547100 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t493521886, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t493521886, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t493521886, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t493521886, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t493521886, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t493521886, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t493521886, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t493521886, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t493521886, ___data_8)); }
	inline DelegateData_t865547100 * get_data_8() const { return ___data_8; }
	inline DelegateData_t865547100 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t865547100 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T493521886_H
#ifndef ARTRACKINGSTATE_T2435700148_H
#define ARTRACKINGSTATE_T2435700148_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARTrackingState
struct  ARTrackingState_t2435700148 
{
public:
	// System.Int32 UnityEngine.XR.iOS.ARTrackingState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ARTrackingState_t2435700148, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARTRACKINGSTATE_T2435700148_H
#ifndef UNITYARSESSIONRUNOPTION_T2104986192_H
#define UNITYARSESSIONRUNOPTION_T2104986192_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionRunOption
struct  UnityARSessionRunOption_t2104986192 
{
public:
	// System.Int32 UnityEngine.XR.iOS.UnityARSessionRunOption::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UnityARSessionRunOption_t2104986192, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARSESSIONRUNOPTION_T2104986192_H
#ifndef ARTRACKINGSTATEREASON_T3063632866_H
#define ARTRACKINGSTATEREASON_T3063632866_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARTrackingStateReason
struct  ARTrackingStateReason_t3063632866 
{
public:
	// System.Int32 UnityEngine.XR.iOS.ARTrackingStateReason::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ARTrackingStateReason_t3063632866, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARTRACKINGSTATEREASON_T3063632866_H
#ifndef UNITYARPLANEDETECTION_T2810981270_H
#define UNITYARPLANEDETECTION_T2810981270_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARPlaneDetection
struct  UnityARPlaneDetection_t2810981270 
{
public:
	// System.Int32 UnityEngine.XR.iOS.UnityARPlaneDetection::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UnityARPlaneDetection_t2810981270, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARPLANEDETECTION_T2810981270_H
#ifndef ARUSERANCHOR_T3356699483_H
#define ARUSERANCHOR_T3356699483_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARUserAnchor
struct  ARUserAnchor_t3356699483 
{
public:
	// System.String UnityEngine.XR.iOS.ARUserAnchor::identifier
	String_t* ___identifier_0;
	// UnityEngine.Matrix4x4 UnityEngine.XR.iOS.ARUserAnchor::transform
	Matrix4x4_t2503387250  ___transform_1;

public:
	inline static int32_t get_offset_of_identifier_0() { return static_cast<int32_t>(offsetof(ARUserAnchor_t3356699483, ___identifier_0)); }
	inline String_t* get_identifier_0() const { return ___identifier_0; }
	inline String_t** get_address_of_identifier_0() { return &___identifier_0; }
	inline void set_identifier_0(String_t* value)
	{
		___identifier_0 = value;
		Il2CppCodeGenWriteBarrier((&___identifier_0), value);
	}

	inline static int32_t get_offset_of_transform_1() { return static_cast<int32_t>(offsetof(ARUserAnchor_t3356699483, ___transform_1)); }
	inline Matrix4x4_t2503387250  get_transform_1() const { return ___transform_1; }
	inline Matrix4x4_t2503387250 * get_address_of_transform_1() { return &___transform_1; }
	inline void set_transform_1(Matrix4x4_t2503387250  value)
	{
		___transform_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.XR.iOS.ARUserAnchor
struct ARUserAnchor_t3356699483_marshaled_pinvoke
{
	char* ___identifier_0;
	Matrix4x4_t2503387250  ___transform_1;
};
// Native definition for COM marshalling of UnityEngine.XR.iOS.ARUserAnchor
struct ARUserAnchor_t3356699483_marshaled_com
{
	Il2CppChar* ___identifier_0;
	Matrix4x4_t2503387250  ___transform_1;
};
#endif // ARUSERANCHOR_T3356699483_H
#ifndef UNITYARMATRIX4X4_T372305534_H
#define UNITYARMATRIX4X4_T372305534_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARMatrix4x4
struct  UnityARMatrix4x4_t372305534 
{
public:
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARMatrix4x4::column0
	Vector4_t2589102707  ___column0_0;
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARMatrix4x4::column1
	Vector4_t2589102707  ___column1_1;
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARMatrix4x4::column2
	Vector4_t2589102707  ___column2_2;
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARMatrix4x4::column3
	Vector4_t2589102707  ___column3_3;

public:
	inline static int32_t get_offset_of_column0_0() { return static_cast<int32_t>(offsetof(UnityARMatrix4x4_t372305534, ___column0_0)); }
	inline Vector4_t2589102707  get_column0_0() const { return ___column0_0; }
	inline Vector4_t2589102707 * get_address_of_column0_0() { return &___column0_0; }
	inline void set_column0_0(Vector4_t2589102707  value)
	{
		___column0_0 = value;
	}

	inline static int32_t get_offset_of_column1_1() { return static_cast<int32_t>(offsetof(UnityARMatrix4x4_t372305534, ___column1_1)); }
	inline Vector4_t2589102707  get_column1_1() const { return ___column1_1; }
	inline Vector4_t2589102707 * get_address_of_column1_1() { return &___column1_1; }
	inline void set_column1_1(Vector4_t2589102707  value)
	{
		___column1_1 = value;
	}

	inline static int32_t get_offset_of_column2_2() { return static_cast<int32_t>(offsetof(UnityARMatrix4x4_t372305534, ___column2_2)); }
	inline Vector4_t2589102707  get_column2_2() const { return ___column2_2; }
	inline Vector4_t2589102707 * get_address_of_column2_2() { return &___column2_2; }
	inline void set_column2_2(Vector4_t2589102707  value)
	{
		___column2_2 = value;
	}

	inline static int32_t get_offset_of_column3_3() { return static_cast<int32_t>(offsetof(UnityARMatrix4x4_t372305534, ___column3_3)); }
	inline Vector4_t2589102707  get_column3_3() const { return ___column3_3; }
	inline Vector4_t2589102707 * get_address_of_column3_3() { return &___column3_3; }
	inline void set_column3_3(Vector4_t2589102707  value)
	{
		___column3_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARMATRIX4X4_T372305534_H
#ifndef UNITYVIDEOPARAMS_T3748383894_H
#define UNITYVIDEOPARAMS_T3748383894_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityVideoParams
struct  UnityVideoParams_t3748383894 
{
public:
	// System.Int32 UnityEngine.XR.iOS.UnityVideoParams::yWidth
	int32_t ___yWidth_0;
	// System.Int32 UnityEngine.XR.iOS.UnityVideoParams::yHeight
	int32_t ___yHeight_1;
	// System.Int32 UnityEngine.XR.iOS.UnityVideoParams::screenOrientation
	int32_t ___screenOrientation_2;
	// System.Single UnityEngine.XR.iOS.UnityVideoParams::texCoordScale
	float ___texCoordScale_3;
	// System.IntPtr UnityEngine.XR.iOS.UnityVideoParams::cvPixelBufferPtr
	intptr_t ___cvPixelBufferPtr_4;

public:
	inline static int32_t get_offset_of_yWidth_0() { return static_cast<int32_t>(offsetof(UnityVideoParams_t3748383894, ___yWidth_0)); }
	inline int32_t get_yWidth_0() const { return ___yWidth_0; }
	inline int32_t* get_address_of_yWidth_0() { return &___yWidth_0; }
	inline void set_yWidth_0(int32_t value)
	{
		___yWidth_0 = value;
	}

	inline static int32_t get_offset_of_yHeight_1() { return static_cast<int32_t>(offsetof(UnityVideoParams_t3748383894, ___yHeight_1)); }
	inline int32_t get_yHeight_1() const { return ___yHeight_1; }
	inline int32_t* get_address_of_yHeight_1() { return &___yHeight_1; }
	inline void set_yHeight_1(int32_t value)
	{
		___yHeight_1 = value;
	}

	inline static int32_t get_offset_of_screenOrientation_2() { return static_cast<int32_t>(offsetof(UnityVideoParams_t3748383894, ___screenOrientation_2)); }
	inline int32_t get_screenOrientation_2() const { return ___screenOrientation_2; }
	inline int32_t* get_address_of_screenOrientation_2() { return &___screenOrientation_2; }
	inline void set_screenOrientation_2(int32_t value)
	{
		___screenOrientation_2 = value;
	}

	inline static int32_t get_offset_of_texCoordScale_3() { return static_cast<int32_t>(offsetof(UnityVideoParams_t3748383894, ___texCoordScale_3)); }
	inline float get_texCoordScale_3() const { return ___texCoordScale_3; }
	inline float* get_address_of_texCoordScale_3() { return &___texCoordScale_3; }
	inline void set_texCoordScale_3(float value)
	{
		___texCoordScale_3 = value;
	}

	inline static int32_t get_offset_of_cvPixelBufferPtr_4() { return static_cast<int32_t>(offsetof(UnityVideoParams_t3748383894, ___cvPixelBufferPtr_4)); }
	inline intptr_t get_cvPixelBufferPtr_4() const { return ___cvPixelBufferPtr_4; }
	inline intptr_t* get_address_of_cvPixelBufferPtr_4() { return &___cvPixelBufferPtr_4; }
	inline void set_cvPixelBufferPtr_4(intptr_t value)
	{
		___cvPixelBufferPtr_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYVIDEOPARAMS_T3748383894_H
#ifndef UNITYARALIGNMENT_T3627120493_H
#define UNITYARALIGNMENT_T3627120493_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARAlignment
struct  UnityARAlignment_t3627120493 
{
public:
	// System.Int32 UnityEngine.XR.iOS.UnityARAlignment::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UnityARAlignment_t3627120493, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARALIGNMENT_T3627120493_H
#ifndef ARKITSESSIONCONFIGURATION_T3445466847_H
#define ARKITSESSIONCONFIGURATION_T3445466847_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARKitSessionConfiguration
struct  ARKitSessionConfiguration_t3445466847 
{
public:
	// UnityEngine.XR.iOS.UnityARAlignment UnityEngine.XR.iOS.ARKitSessionConfiguration::alignment
	int32_t ___alignment_0;
	// System.Boolean UnityEngine.XR.iOS.ARKitSessionConfiguration::getPointCloudData
	bool ___getPointCloudData_1;
	// System.Boolean UnityEngine.XR.iOS.ARKitSessionConfiguration::enableLightEstimation
	bool ___enableLightEstimation_2;

public:
	inline static int32_t get_offset_of_alignment_0() { return static_cast<int32_t>(offsetof(ARKitSessionConfiguration_t3445466847, ___alignment_0)); }
	inline int32_t get_alignment_0() const { return ___alignment_0; }
	inline int32_t* get_address_of_alignment_0() { return &___alignment_0; }
	inline void set_alignment_0(int32_t value)
	{
		___alignment_0 = value;
	}

	inline static int32_t get_offset_of_getPointCloudData_1() { return static_cast<int32_t>(offsetof(ARKitSessionConfiguration_t3445466847, ___getPointCloudData_1)); }
	inline bool get_getPointCloudData_1() const { return ___getPointCloudData_1; }
	inline bool* get_address_of_getPointCloudData_1() { return &___getPointCloudData_1; }
	inline void set_getPointCloudData_1(bool value)
	{
		___getPointCloudData_1 = value;
	}

	inline static int32_t get_offset_of_enableLightEstimation_2() { return static_cast<int32_t>(offsetof(ARKitSessionConfiguration_t3445466847, ___enableLightEstimation_2)); }
	inline bool get_enableLightEstimation_2() const { return ___enableLightEstimation_2; }
	inline bool* get_address_of_enableLightEstimation_2() { return &___enableLightEstimation_2; }
	inline void set_enableLightEstimation_2(bool value)
	{
		___enableLightEstimation_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.XR.iOS.ARKitSessionConfiguration
struct ARKitSessionConfiguration_t3445466847_marshaled_pinvoke
{
	int32_t ___alignment_0;
	int32_t ___getPointCloudData_1;
	int32_t ___enableLightEstimation_2;
};
// Native definition for COM marshalling of UnityEngine.XR.iOS.ARKitSessionConfiguration
struct ARKitSessionConfiguration_t3445466847_marshaled_com
{
	int32_t ___alignment_0;
	int32_t ___getPointCloudData_1;
	int32_t ___enableLightEstimation_2;
};
#endif // ARKITSESSIONCONFIGURATION_T3445466847_H
#ifndef UNITYARHITTESTRESULT_T4116825347_H
#define UNITYARHITTESTRESULT_T4116825347_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARHitTestResult
struct  UnityARHitTestResult_t4116825347 
{
public:
	// UnityEngine.XR.iOS.ARHitTestResultType UnityEngine.XR.iOS.UnityARHitTestResult::type
	int64_t ___type_0;
	// System.Double UnityEngine.XR.iOS.UnityARHitTestResult::distance
	double ___distance_1;
	// UnityEngine.Matrix4x4 UnityEngine.XR.iOS.UnityARHitTestResult::localTransform
	Matrix4x4_t2503387250  ___localTransform_2;
	// UnityEngine.Matrix4x4 UnityEngine.XR.iOS.UnityARHitTestResult::worldTransform
	Matrix4x4_t2503387250  ___worldTransform_3;
	// System.IntPtr UnityEngine.XR.iOS.UnityARHitTestResult::anchor
	intptr_t ___anchor_4;
	// System.Boolean UnityEngine.XR.iOS.UnityARHitTestResult::isValid
	bool ___isValid_5;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(UnityARHitTestResult_t4116825347, ___type_0)); }
	inline int64_t get_type_0() const { return ___type_0; }
	inline int64_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(int64_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_distance_1() { return static_cast<int32_t>(offsetof(UnityARHitTestResult_t4116825347, ___distance_1)); }
	inline double get_distance_1() const { return ___distance_1; }
	inline double* get_address_of_distance_1() { return &___distance_1; }
	inline void set_distance_1(double value)
	{
		___distance_1 = value;
	}

	inline static int32_t get_offset_of_localTransform_2() { return static_cast<int32_t>(offsetof(UnityARHitTestResult_t4116825347, ___localTransform_2)); }
	inline Matrix4x4_t2503387250  get_localTransform_2() const { return ___localTransform_2; }
	inline Matrix4x4_t2503387250 * get_address_of_localTransform_2() { return &___localTransform_2; }
	inline void set_localTransform_2(Matrix4x4_t2503387250  value)
	{
		___localTransform_2 = value;
	}

	inline static int32_t get_offset_of_worldTransform_3() { return static_cast<int32_t>(offsetof(UnityARHitTestResult_t4116825347, ___worldTransform_3)); }
	inline Matrix4x4_t2503387250  get_worldTransform_3() const { return ___worldTransform_3; }
	inline Matrix4x4_t2503387250 * get_address_of_worldTransform_3() { return &___worldTransform_3; }
	inline void set_worldTransform_3(Matrix4x4_t2503387250  value)
	{
		___worldTransform_3 = value;
	}

	inline static int32_t get_offset_of_anchor_4() { return static_cast<int32_t>(offsetof(UnityARHitTestResult_t4116825347, ___anchor_4)); }
	inline intptr_t get_anchor_4() const { return ___anchor_4; }
	inline intptr_t* get_address_of_anchor_4() { return &___anchor_4; }
	inline void set_anchor_4(intptr_t value)
	{
		___anchor_4 = value;
	}

	inline static int32_t get_offset_of_isValid_5() { return static_cast<int32_t>(offsetof(UnityARHitTestResult_t4116825347, ___isValid_5)); }
	inline bool get_isValid_5() const { return ___isValid_5; }
	inline bool* get_address_of_isValid_5() { return &___isValid_5; }
	inline void set_isValid_5(bool value)
	{
		___isValid_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.XR.iOS.UnityARHitTestResult
struct UnityARHitTestResult_t4116825347_marshaled_pinvoke
{
	int64_t ___type_0;
	double ___distance_1;
	Matrix4x4_t2503387250  ___localTransform_2;
	Matrix4x4_t2503387250  ___worldTransform_3;
	intptr_t ___anchor_4;
	int32_t ___isValid_5;
};
// Native definition for COM marshalling of UnityEngine.XR.iOS.UnityARHitTestResult
struct UnityARHitTestResult_t4116825347_marshaled_com
{
	int64_t ___type_0;
	double ___distance_1;
	Matrix4x4_t2503387250  ___localTransform_2;
	Matrix4x4_t2503387250  ___worldTransform_3;
	intptr_t ___anchor_4;
	int32_t ___isValid_5;
};
#endif // UNITYARHITTESTRESULT_T4116825347_H
#ifndef UNITYARUSERANCHORDATA_T3069126381_H
#define UNITYARUSERANCHORDATA_T3069126381_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARUserAnchorData
struct  UnityARUserAnchorData_t3069126381 
{
public:
	// System.IntPtr UnityEngine.XR.iOS.UnityARUserAnchorData::ptrIdentifier
	intptr_t ___ptrIdentifier_0;
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.UnityARUserAnchorData::transform
	UnityARMatrix4x4_t372305534  ___transform_1;

public:
	inline static int32_t get_offset_of_ptrIdentifier_0() { return static_cast<int32_t>(offsetof(UnityARUserAnchorData_t3069126381, ___ptrIdentifier_0)); }
	inline intptr_t get_ptrIdentifier_0() const { return ___ptrIdentifier_0; }
	inline intptr_t* get_address_of_ptrIdentifier_0() { return &___ptrIdentifier_0; }
	inline void set_ptrIdentifier_0(intptr_t value)
	{
		___ptrIdentifier_0 = value;
	}

	inline static int32_t get_offset_of_transform_1() { return static_cast<int32_t>(offsetof(UnityARUserAnchorData_t3069126381, ___transform_1)); }
	inline UnityARMatrix4x4_t372305534  get_transform_1() const { return ___transform_1; }
	inline UnityARMatrix4x4_t372305534 * get_address_of_transform_1() { return &___transform_1; }
	inline void set_transform_1(UnityARMatrix4x4_t372305534  value)
	{
		___transform_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARUSERANCHORDATA_T3069126381_H
#ifndef UNITYARCAMERA_T1592950704_H
#define UNITYARCAMERA_T1592950704_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARCamera
struct  UnityARCamera_t1592950704 
{
public:
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.UnityARCamera::worldTransform
	UnityARMatrix4x4_t372305534  ___worldTransform_0;
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.UnityARCamera::projectionMatrix
	UnityARMatrix4x4_t372305534  ___projectionMatrix_1;
	// UnityEngine.XR.iOS.ARTrackingState UnityEngine.XR.iOS.UnityARCamera::trackingState
	int32_t ___trackingState_2;
	// UnityEngine.XR.iOS.ARTrackingStateReason UnityEngine.XR.iOS.UnityARCamera::trackingReason
	int32_t ___trackingReason_3;
	// UnityEngine.XR.iOS.UnityVideoParams UnityEngine.XR.iOS.UnityARCamera::videoParams
	UnityVideoParams_t3748383894  ___videoParams_4;
	// UnityEngine.XR.iOS.UnityARLightEstimate UnityEngine.XR.iOS.UnityARCamera::lightEstimation
	UnityARLightEstimate_t1292793666  ___lightEstimation_5;
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.UnityARCamera::displayTransform
	UnityARMatrix4x4_t372305534  ___displayTransform_6;
	// UnityEngine.Vector3[] UnityEngine.XR.iOS.UnityARCamera::pointCloudData
	Vector3U5BU5D_t3245477534* ___pointCloudData_7;

public:
	inline static int32_t get_offset_of_worldTransform_0() { return static_cast<int32_t>(offsetof(UnityARCamera_t1592950704, ___worldTransform_0)); }
	inline UnityARMatrix4x4_t372305534  get_worldTransform_0() const { return ___worldTransform_0; }
	inline UnityARMatrix4x4_t372305534 * get_address_of_worldTransform_0() { return &___worldTransform_0; }
	inline void set_worldTransform_0(UnityARMatrix4x4_t372305534  value)
	{
		___worldTransform_0 = value;
	}

	inline static int32_t get_offset_of_projectionMatrix_1() { return static_cast<int32_t>(offsetof(UnityARCamera_t1592950704, ___projectionMatrix_1)); }
	inline UnityARMatrix4x4_t372305534  get_projectionMatrix_1() const { return ___projectionMatrix_1; }
	inline UnityARMatrix4x4_t372305534 * get_address_of_projectionMatrix_1() { return &___projectionMatrix_1; }
	inline void set_projectionMatrix_1(UnityARMatrix4x4_t372305534  value)
	{
		___projectionMatrix_1 = value;
	}

	inline static int32_t get_offset_of_trackingState_2() { return static_cast<int32_t>(offsetof(UnityARCamera_t1592950704, ___trackingState_2)); }
	inline int32_t get_trackingState_2() const { return ___trackingState_2; }
	inline int32_t* get_address_of_trackingState_2() { return &___trackingState_2; }
	inline void set_trackingState_2(int32_t value)
	{
		___trackingState_2 = value;
	}

	inline static int32_t get_offset_of_trackingReason_3() { return static_cast<int32_t>(offsetof(UnityARCamera_t1592950704, ___trackingReason_3)); }
	inline int32_t get_trackingReason_3() const { return ___trackingReason_3; }
	inline int32_t* get_address_of_trackingReason_3() { return &___trackingReason_3; }
	inline void set_trackingReason_3(int32_t value)
	{
		___trackingReason_3 = value;
	}

	inline static int32_t get_offset_of_videoParams_4() { return static_cast<int32_t>(offsetof(UnityARCamera_t1592950704, ___videoParams_4)); }
	inline UnityVideoParams_t3748383894  get_videoParams_4() const { return ___videoParams_4; }
	inline UnityVideoParams_t3748383894 * get_address_of_videoParams_4() { return &___videoParams_4; }
	inline void set_videoParams_4(UnityVideoParams_t3748383894  value)
	{
		___videoParams_4 = value;
	}

	inline static int32_t get_offset_of_lightEstimation_5() { return static_cast<int32_t>(offsetof(UnityARCamera_t1592950704, ___lightEstimation_5)); }
	inline UnityARLightEstimate_t1292793666  get_lightEstimation_5() const { return ___lightEstimation_5; }
	inline UnityARLightEstimate_t1292793666 * get_address_of_lightEstimation_5() { return &___lightEstimation_5; }
	inline void set_lightEstimation_5(UnityARLightEstimate_t1292793666  value)
	{
		___lightEstimation_5 = value;
	}

	inline static int32_t get_offset_of_displayTransform_6() { return static_cast<int32_t>(offsetof(UnityARCamera_t1592950704, ___displayTransform_6)); }
	inline UnityARMatrix4x4_t372305534  get_displayTransform_6() const { return ___displayTransform_6; }
	inline UnityARMatrix4x4_t372305534 * get_address_of_displayTransform_6() { return &___displayTransform_6; }
	inline void set_displayTransform_6(UnityARMatrix4x4_t372305534  value)
	{
		___displayTransform_6 = value;
	}

	inline static int32_t get_offset_of_pointCloudData_7() { return static_cast<int32_t>(offsetof(UnityARCamera_t1592950704, ___pointCloudData_7)); }
	inline Vector3U5BU5D_t3245477534* get_pointCloudData_7() const { return ___pointCloudData_7; }
	inline Vector3U5BU5D_t3245477534** get_address_of_pointCloudData_7() { return &___pointCloudData_7; }
	inline void set_pointCloudData_7(Vector3U5BU5D_t3245477534* value)
	{
		___pointCloudData_7 = value;
		Il2CppCodeGenWriteBarrier((&___pointCloudData_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.XR.iOS.UnityARCamera
struct UnityARCamera_t1592950704_marshaled_pinvoke
{
	UnityARMatrix4x4_t372305534  ___worldTransform_0;
	UnityARMatrix4x4_t372305534  ___projectionMatrix_1;
	int32_t ___trackingState_2;
	int32_t ___trackingReason_3;
	UnityVideoParams_t3748383894  ___videoParams_4;
	UnityARLightEstimate_t1292793666  ___lightEstimation_5;
	UnityARMatrix4x4_t372305534  ___displayTransform_6;
	Vector3_t2384904679 * ___pointCloudData_7;
};
// Native definition for COM marshalling of UnityEngine.XR.iOS.UnityARCamera
struct UnityARCamera_t1592950704_marshaled_com
{
	UnityARMatrix4x4_t372305534  ___worldTransform_0;
	UnityARMatrix4x4_t372305534  ___projectionMatrix_1;
	int32_t ___trackingState_2;
	int32_t ___trackingReason_3;
	UnityVideoParams_t3748383894  ___videoParams_4;
	UnityARLightEstimate_t1292793666  ___lightEstimation_5;
	UnityARMatrix4x4_t372305534  ___displayTransform_6;
	Vector3_t2384904679 * ___pointCloudData_7;
};
#endif // UNITYARCAMERA_T1592950704_H
#ifndef ARKITWORLDTRACKINGSESSIONCONFIGURATION_T680925311_H
#define ARKITWORLDTRACKINGSESSIONCONFIGURATION_T680925311_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration
struct  ARKitWorldTrackingSessionConfiguration_t680925311 
{
public:
	// UnityEngine.XR.iOS.UnityARAlignment UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration::alignment
	int32_t ___alignment_0;
	// UnityEngine.XR.iOS.UnityARPlaneDetection UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration::planeDetection
	int32_t ___planeDetection_1;
	// System.Boolean UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration::getPointCloudData
	bool ___getPointCloudData_2;
	// System.Boolean UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration::enableLightEstimation
	bool ___enableLightEstimation_3;

public:
	inline static int32_t get_offset_of_alignment_0() { return static_cast<int32_t>(offsetof(ARKitWorldTrackingSessionConfiguration_t680925311, ___alignment_0)); }
	inline int32_t get_alignment_0() const { return ___alignment_0; }
	inline int32_t* get_address_of_alignment_0() { return &___alignment_0; }
	inline void set_alignment_0(int32_t value)
	{
		___alignment_0 = value;
	}

	inline static int32_t get_offset_of_planeDetection_1() { return static_cast<int32_t>(offsetof(ARKitWorldTrackingSessionConfiguration_t680925311, ___planeDetection_1)); }
	inline int32_t get_planeDetection_1() const { return ___planeDetection_1; }
	inline int32_t* get_address_of_planeDetection_1() { return &___planeDetection_1; }
	inline void set_planeDetection_1(int32_t value)
	{
		___planeDetection_1 = value;
	}

	inline static int32_t get_offset_of_getPointCloudData_2() { return static_cast<int32_t>(offsetof(ARKitWorldTrackingSessionConfiguration_t680925311, ___getPointCloudData_2)); }
	inline bool get_getPointCloudData_2() const { return ___getPointCloudData_2; }
	inline bool* get_address_of_getPointCloudData_2() { return &___getPointCloudData_2; }
	inline void set_getPointCloudData_2(bool value)
	{
		___getPointCloudData_2 = value;
	}

	inline static int32_t get_offset_of_enableLightEstimation_3() { return static_cast<int32_t>(offsetof(ARKitWorldTrackingSessionConfiguration_t680925311, ___enableLightEstimation_3)); }
	inline bool get_enableLightEstimation_3() const { return ___enableLightEstimation_3; }
	inline bool* get_address_of_enableLightEstimation_3() { return &___enableLightEstimation_3; }
	inline void set_enableLightEstimation_3(bool value)
	{
		___enableLightEstimation_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration
struct ARKitWorldTrackingSessionConfiguration_t680925311_marshaled_pinvoke
{
	int32_t ___alignment_0;
	int32_t ___planeDetection_1;
	int32_t ___getPointCloudData_2;
	int32_t ___enableLightEstimation_3;
};
// Native definition for COM marshalling of UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration
struct ARKitWorldTrackingSessionConfiguration_t680925311_marshaled_com
{
	int32_t ___alignment_0;
	int32_t ___planeDetection_1;
	int32_t ___getPointCloudData_2;
	int32_t ___enableLightEstimation_3;
};
#endif // ARKITWORLDTRACKINGSESSIONCONFIGURATION_T680925311_H
#ifndef INTERNAL_UNITYARCAMERA_T2470329195_H
#define INTERNAL_UNITYARCAMERA_T2470329195_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.internal_UnityARCamera
struct  internal_UnityARCamera_t2470329195 
{
public:
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.internal_UnityARCamera::worldTransform
	UnityARMatrix4x4_t372305534  ___worldTransform_0;
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.internal_UnityARCamera::projectionMatrix
	UnityARMatrix4x4_t372305534  ___projectionMatrix_1;
	// UnityEngine.XR.iOS.ARTrackingState UnityEngine.XR.iOS.internal_UnityARCamera::trackingState
	int32_t ___trackingState_2;
	// UnityEngine.XR.iOS.ARTrackingStateReason UnityEngine.XR.iOS.internal_UnityARCamera::trackingReason
	int32_t ___trackingReason_3;
	// UnityEngine.XR.iOS.UnityVideoParams UnityEngine.XR.iOS.internal_UnityARCamera::videoParams
	UnityVideoParams_t3748383894  ___videoParams_4;
	// UnityEngine.XR.iOS.UnityARLightEstimate UnityEngine.XR.iOS.internal_UnityARCamera::lightEstimation
	UnityARLightEstimate_t1292793666  ___lightEstimation_5;
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.internal_UnityARCamera::displayTransform
	UnityARMatrix4x4_t372305534  ___displayTransform_6;
	// System.UInt32 UnityEngine.XR.iOS.internal_UnityARCamera::getPointCloudData
	uint32_t ___getPointCloudData_7;

public:
	inline static int32_t get_offset_of_worldTransform_0() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t2470329195, ___worldTransform_0)); }
	inline UnityARMatrix4x4_t372305534  get_worldTransform_0() const { return ___worldTransform_0; }
	inline UnityARMatrix4x4_t372305534 * get_address_of_worldTransform_0() { return &___worldTransform_0; }
	inline void set_worldTransform_0(UnityARMatrix4x4_t372305534  value)
	{
		___worldTransform_0 = value;
	}

	inline static int32_t get_offset_of_projectionMatrix_1() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t2470329195, ___projectionMatrix_1)); }
	inline UnityARMatrix4x4_t372305534  get_projectionMatrix_1() const { return ___projectionMatrix_1; }
	inline UnityARMatrix4x4_t372305534 * get_address_of_projectionMatrix_1() { return &___projectionMatrix_1; }
	inline void set_projectionMatrix_1(UnityARMatrix4x4_t372305534  value)
	{
		___projectionMatrix_1 = value;
	}

	inline static int32_t get_offset_of_trackingState_2() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t2470329195, ___trackingState_2)); }
	inline int32_t get_trackingState_2() const { return ___trackingState_2; }
	inline int32_t* get_address_of_trackingState_2() { return &___trackingState_2; }
	inline void set_trackingState_2(int32_t value)
	{
		___trackingState_2 = value;
	}

	inline static int32_t get_offset_of_trackingReason_3() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t2470329195, ___trackingReason_3)); }
	inline int32_t get_trackingReason_3() const { return ___trackingReason_3; }
	inline int32_t* get_address_of_trackingReason_3() { return &___trackingReason_3; }
	inline void set_trackingReason_3(int32_t value)
	{
		___trackingReason_3 = value;
	}

	inline static int32_t get_offset_of_videoParams_4() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t2470329195, ___videoParams_4)); }
	inline UnityVideoParams_t3748383894  get_videoParams_4() const { return ___videoParams_4; }
	inline UnityVideoParams_t3748383894 * get_address_of_videoParams_4() { return &___videoParams_4; }
	inline void set_videoParams_4(UnityVideoParams_t3748383894  value)
	{
		___videoParams_4 = value;
	}

	inline static int32_t get_offset_of_lightEstimation_5() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t2470329195, ___lightEstimation_5)); }
	inline UnityARLightEstimate_t1292793666  get_lightEstimation_5() const { return ___lightEstimation_5; }
	inline UnityARLightEstimate_t1292793666 * get_address_of_lightEstimation_5() { return &___lightEstimation_5; }
	inline void set_lightEstimation_5(UnityARLightEstimate_t1292793666  value)
	{
		___lightEstimation_5 = value;
	}

	inline static int32_t get_offset_of_displayTransform_6() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t2470329195, ___displayTransform_6)); }
	inline UnityARMatrix4x4_t372305534  get_displayTransform_6() const { return ___displayTransform_6; }
	inline UnityARMatrix4x4_t372305534 * get_address_of_displayTransform_6() { return &___displayTransform_6; }
	inline void set_displayTransform_6(UnityARMatrix4x4_t372305534  value)
	{
		___displayTransform_6 = value;
	}

	inline static int32_t get_offset_of_getPointCloudData_7() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t2470329195, ___getPointCloudData_7)); }
	inline uint32_t get_getPointCloudData_7() const { return ___getPointCloudData_7; }
	inline uint32_t* get_address_of_getPointCloudData_7() { return &___getPointCloudData_7; }
	inline void set_getPointCloudData_7(uint32_t value)
	{
		___getPointCloudData_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNAL_UNITYARCAMERA_T2470329195_H
#ifndef MULTICASTDELEGATE_T2683249572_H
#define MULTICASTDELEGATE_T2683249572_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t2683249572  : public Delegate_t493521886
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t2683249572 * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t2683249572 * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t2683249572, ___prev_9)); }
	inline MulticastDelegate_t2683249572 * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t2683249572 ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t2683249572 * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t2683249572, ___kpm_next_10)); }
	inline MulticastDelegate_t2683249572 * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t2683249572 ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t2683249572 * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T2683249572_H
#ifndef ARPLANEANCHOR_T2916125919_H
#define ARPLANEANCHOR_T2916125919_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARPlaneAnchor
struct  ARPlaneAnchor_t2916125919 
{
public:
	// System.String UnityEngine.XR.iOS.ARPlaneAnchor::identifier
	String_t* ___identifier_0;
	// UnityEngine.Matrix4x4 UnityEngine.XR.iOS.ARPlaneAnchor::transform
	Matrix4x4_t2503387250  ___transform_1;
	// UnityEngine.XR.iOS.ARPlaneAnchorAlignment UnityEngine.XR.iOS.ARPlaneAnchor::alignment
	int64_t ___alignment_2;
	// UnityEngine.Vector3 UnityEngine.XR.iOS.ARPlaneAnchor::center
	Vector3_t2384904679  ___center_3;
	// UnityEngine.Vector3 UnityEngine.XR.iOS.ARPlaneAnchor::extent
	Vector3_t2384904679  ___extent_4;

public:
	inline static int32_t get_offset_of_identifier_0() { return static_cast<int32_t>(offsetof(ARPlaneAnchor_t2916125919, ___identifier_0)); }
	inline String_t* get_identifier_0() const { return ___identifier_0; }
	inline String_t** get_address_of_identifier_0() { return &___identifier_0; }
	inline void set_identifier_0(String_t* value)
	{
		___identifier_0 = value;
		Il2CppCodeGenWriteBarrier((&___identifier_0), value);
	}

	inline static int32_t get_offset_of_transform_1() { return static_cast<int32_t>(offsetof(ARPlaneAnchor_t2916125919, ___transform_1)); }
	inline Matrix4x4_t2503387250  get_transform_1() const { return ___transform_1; }
	inline Matrix4x4_t2503387250 * get_address_of_transform_1() { return &___transform_1; }
	inline void set_transform_1(Matrix4x4_t2503387250  value)
	{
		___transform_1 = value;
	}

	inline static int32_t get_offset_of_alignment_2() { return static_cast<int32_t>(offsetof(ARPlaneAnchor_t2916125919, ___alignment_2)); }
	inline int64_t get_alignment_2() const { return ___alignment_2; }
	inline int64_t* get_address_of_alignment_2() { return &___alignment_2; }
	inline void set_alignment_2(int64_t value)
	{
		___alignment_2 = value;
	}

	inline static int32_t get_offset_of_center_3() { return static_cast<int32_t>(offsetof(ARPlaneAnchor_t2916125919, ___center_3)); }
	inline Vector3_t2384904679  get_center_3() const { return ___center_3; }
	inline Vector3_t2384904679 * get_address_of_center_3() { return &___center_3; }
	inline void set_center_3(Vector3_t2384904679  value)
	{
		___center_3 = value;
	}

	inline static int32_t get_offset_of_extent_4() { return static_cast<int32_t>(offsetof(ARPlaneAnchor_t2916125919, ___extent_4)); }
	inline Vector3_t2384904679  get_extent_4() const { return ___extent_4; }
	inline Vector3_t2384904679 * get_address_of_extent_4() { return &___extent_4; }
	inline void set_extent_4(Vector3_t2384904679  value)
	{
		___extent_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.XR.iOS.ARPlaneAnchor
struct ARPlaneAnchor_t2916125919_marshaled_pinvoke
{
	char* ___identifier_0;
	Matrix4x4_t2503387250  ___transform_1;
	int64_t ___alignment_2;
	Vector3_t2384904679  ___center_3;
	Vector3_t2384904679  ___extent_4;
};
// Native definition for COM marshalling of UnityEngine.XR.iOS.ARPlaneAnchor
struct ARPlaneAnchor_t2916125919_marshaled_com
{
	Il2CppChar* ___identifier_0;
	Matrix4x4_t2503387250  ___transform_1;
	int64_t ___alignment_2;
	Vector3_t2384904679  ___center_3;
	Vector3_t2384904679  ___extent_4;
};
#endif // ARPLANEANCHOR_T2916125919_H
#ifndef UNITYARANCHORDATA_T4134405035_H
#define UNITYARANCHORDATA_T4134405035_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARAnchorData
struct  UnityARAnchorData_t4134405035 
{
public:
	// System.IntPtr UnityEngine.XR.iOS.UnityARAnchorData::ptrIdentifier
	intptr_t ___ptrIdentifier_0;
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.UnityARAnchorData::transform
	UnityARMatrix4x4_t372305534  ___transform_1;
	// UnityEngine.XR.iOS.ARPlaneAnchorAlignment UnityEngine.XR.iOS.UnityARAnchorData::alignment
	int64_t ___alignment_2;
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARAnchorData::center
	Vector4_t2589102707  ___center_3;
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARAnchorData::extent
	Vector4_t2589102707  ___extent_4;

public:
	inline static int32_t get_offset_of_ptrIdentifier_0() { return static_cast<int32_t>(offsetof(UnityARAnchorData_t4134405035, ___ptrIdentifier_0)); }
	inline intptr_t get_ptrIdentifier_0() const { return ___ptrIdentifier_0; }
	inline intptr_t* get_address_of_ptrIdentifier_0() { return &___ptrIdentifier_0; }
	inline void set_ptrIdentifier_0(intptr_t value)
	{
		___ptrIdentifier_0 = value;
	}

	inline static int32_t get_offset_of_transform_1() { return static_cast<int32_t>(offsetof(UnityARAnchorData_t4134405035, ___transform_1)); }
	inline UnityARMatrix4x4_t372305534  get_transform_1() const { return ___transform_1; }
	inline UnityARMatrix4x4_t372305534 * get_address_of_transform_1() { return &___transform_1; }
	inline void set_transform_1(UnityARMatrix4x4_t372305534  value)
	{
		___transform_1 = value;
	}

	inline static int32_t get_offset_of_alignment_2() { return static_cast<int32_t>(offsetof(UnityARAnchorData_t4134405035, ___alignment_2)); }
	inline int64_t get_alignment_2() const { return ___alignment_2; }
	inline int64_t* get_address_of_alignment_2() { return &___alignment_2; }
	inline void set_alignment_2(int64_t value)
	{
		___alignment_2 = value;
	}

	inline static int32_t get_offset_of_center_3() { return static_cast<int32_t>(offsetof(UnityARAnchorData_t4134405035, ___center_3)); }
	inline Vector4_t2589102707  get_center_3() const { return ___center_3; }
	inline Vector4_t2589102707 * get_address_of_center_3() { return &___center_3; }
	inline void set_center_3(Vector4_t2589102707  value)
	{
		___center_3 = value;
	}

	inline static int32_t get_offset_of_extent_4() { return static_cast<int32_t>(offsetof(UnityARAnchorData_t4134405035, ___extent_4)); }
	inline Vector4_t2589102707  get_extent_4() const { return ___extent_4; }
	inline Vector4_t2589102707 * get_address_of_extent_4() { return &___extent_4; }
	inline void set_extent_4(Vector4_t2589102707  value)
	{
		___extent_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARANCHORDATA_T4134405035_H
#ifndef ARUSERANCHORREMOVED_T3858116095_H
#define ARUSERANCHORREMOVED_T3858116095_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorRemoved
struct  ARUserAnchorRemoved_t3858116095  : public MulticastDelegate_t2683249572
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARUSERANCHORREMOVED_T3858116095_H
#ifndef ARSESSIONFAILED_T1827573426_H
#define ARSESSIONFAILED_T1827573426_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionFailed
struct  ARSessionFailed_t1827573426  : public MulticastDelegate_t2683249572
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARSESSIONFAILED_T1827573426_H
#ifndef ARFRAMEUPDATE_T148237887_H
#define ARFRAMEUPDATE_T148237887_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFrameUpdate
struct  ARFrameUpdate_t148237887  : public MulticastDelegate_t2683249572
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARFRAMEUPDATE_T148237887_H
#ifndef ARSESSIONCALLBACK_T3154612443_H
#define ARSESSIONCALLBACK_T3154612443_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionCallback
struct  ARSessionCallback_t3154612443  : public MulticastDelegate_t2683249572
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARSESSIONCALLBACK_T3154612443_H
#ifndef ARSESSIONTRACKINGCHANGED_T3156754292_H
#define ARSESSIONTRACKINGCHANGED_T3156754292_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionTrackingChanged
struct  ARSessionTrackingChanged_t3156754292  : public MulticastDelegate_t2683249572
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARSESSIONTRACKINGCHANGED_T3156754292_H
#ifndef INTERNAL_ARFRAMEUPDATE_T3745128200_H
#define INTERNAL_ARFRAMEUPDATE_T3745128200_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARFrameUpdate
struct  internal_ARFrameUpdate_t3745128200  : public MulticastDelegate_t2683249572
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNAL_ARFRAMEUPDATE_T3745128200_H
#ifndef INTERNAL_ARANCHORADDED_T3297948615_H
#define INTERNAL_ARANCHORADDED_T3297948615_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorAdded
struct  internal_ARAnchorAdded_t3297948615  : public MulticastDelegate_t2683249572
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNAL_ARANCHORADDED_T3297948615_H
#ifndef ARUSERANCHORUPDATED_T2077321013_H
#define ARUSERANCHORUPDATED_T2077321013_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorUpdated
struct  ARUserAnchorUpdated_t2077321013  : public MulticastDelegate_t2683249572
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARUSERANCHORUPDATED_T2077321013_H
#ifndef INTERNAL_ARANCHORREMOVED_T2496861394_H
#define INTERNAL_ARANCHORREMOVED_T2496861394_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorRemoved
struct  internal_ARAnchorRemoved_t2496861394  : public MulticastDelegate_t2683249572
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNAL_ARANCHORREMOVED_T2496861394_H
#ifndef UNITYARSESSIONNATIVEINTERFACE_T2810392212_H
#define UNITYARSESSIONNATIVEINTERFACE_T2810392212_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface
struct  UnityARSessionNativeInterface_t2810392212  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.XR.iOS.UnityARSessionNativeInterface::m_NativeARSession
	intptr_t ___m_NativeARSession_11;

public:
	inline static int32_t get_offset_of_m_NativeARSession_11() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2810392212, ___m_NativeARSession_11)); }
	inline intptr_t get_m_NativeARSession_11() const { return ___m_NativeARSession_11; }
	inline intptr_t* get_address_of_m_NativeARSession_11() { return &___m_NativeARSession_11; }
	inline void set_m_NativeARSession_11(intptr_t value)
	{
		___m_NativeARSession_11 = value;
	}
};

struct UnityARSessionNativeInterface_t2810392212_StaticFields
{
public:
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARFrameUpdate UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARFrameUpdatedEvent
	ARFrameUpdate_t148237887 * ___ARFrameUpdatedEvent_0;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorAdded UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARAnchorAddedEvent
	ARAnchorAdded_t2783252133 * ___ARAnchorAddedEvent_1;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorUpdated UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARAnchorUpdatedEvent
	ARAnchorUpdated_t1566318568 * ___ARAnchorUpdatedEvent_2;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorRemoved UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARAnchorRemovedEvent
	ARAnchorRemoved_t1938576619 * ___ARAnchorRemovedEvent_3;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorAdded UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARUserAnchorAddedEvent
	ARUserAnchorAdded_t3369803109 * ___ARUserAnchorAddedEvent_4;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorUpdated UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARUserAnchorUpdatedEvent
	ARUserAnchorUpdated_t2077321013 * ___ARUserAnchorUpdatedEvent_5;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorRemoved UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARUserAnchorRemovedEvent
	ARUserAnchorRemoved_t3858116095 * ___ARUserAnchorRemovedEvent_6;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionFailed UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARSessionFailedEvent
	ARSessionFailed_t1827573426 * ___ARSessionFailedEvent_7;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionCallback UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARSessionInterruptedEvent
	ARSessionCallback_t3154612443 * ___ARSessionInterruptedEvent_8;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionCallback UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARSessioninterruptionEndedEvent
	ARSessionCallback_t3154612443 * ___ARSessioninterruptionEndedEvent_9;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionTrackingChanged UnityEngine.XR.iOS.UnityARSessionNativeInterface::ARSessionTrackingChangedEvent
	ARSessionTrackingChanged_t3156754292 * ___ARSessionTrackingChangedEvent_10;
	// UnityEngine.XR.iOS.UnityARCamera UnityEngine.XR.iOS.UnityARSessionNativeInterface::s_Camera
	UnityARCamera_t1592950704  ___s_Camera_12;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface UnityEngine.XR.iOS.UnityARSessionNativeInterface::s_UnityARSessionNativeInterface
	UnityARSessionNativeInterface_t2810392212 * ___s_UnityARSessionNativeInterface_13;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARFrameUpdate UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache0
	internal_ARFrameUpdate_t3745128200 * ___U3CU3Ef__mgU24cache0_14;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionFailed UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache1
	ARSessionFailed_t1827573426 * ___U3CU3Ef__mgU24cache1_15;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionCallback UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache2
	ARSessionCallback_t3154612443 * ___U3CU3Ef__mgU24cache2_16;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARSessionCallback UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache3
	ARSessionCallback_t3154612443 * ___U3CU3Ef__mgU24cache3_17;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARSessionTrackingChanged UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache4
	internal_ARSessionTrackingChanged_t208978224 * ___U3CU3Ef__mgU24cache4_18;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorAdded UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache5
	internal_ARAnchorAdded_t3297948615 * ___U3CU3Ef__mgU24cache5_19;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorUpdated UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache6
	internal_ARAnchorUpdated_t1519908705 * ___U3CU3Ef__mgU24cache6_20;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorRemoved UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache7
	internal_ARAnchorRemoved_t2496861394 * ___U3CU3Ef__mgU24cache7_21;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorAdded UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache8
	internal_ARUserAnchorAdded_t3898537032 * ___U3CU3Ef__mgU24cache8_22;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorUpdated UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cache9
	internal_ARUserAnchorUpdated_t1059349429 * ___U3CU3Ef__mgU24cache9_23;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorRemoved UnityEngine.XR.iOS.UnityARSessionNativeInterface::<>f__mg$cacheA
	internal_ARUserAnchorRemoved_t751005791 * ___U3CU3Ef__mgU24cacheA_24;

public:
	inline static int32_t get_offset_of_ARFrameUpdatedEvent_0() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2810392212_StaticFields, ___ARFrameUpdatedEvent_0)); }
	inline ARFrameUpdate_t148237887 * get_ARFrameUpdatedEvent_0() const { return ___ARFrameUpdatedEvent_0; }
	inline ARFrameUpdate_t148237887 ** get_address_of_ARFrameUpdatedEvent_0() { return &___ARFrameUpdatedEvent_0; }
	inline void set_ARFrameUpdatedEvent_0(ARFrameUpdate_t148237887 * value)
	{
		___ARFrameUpdatedEvent_0 = value;
		Il2CppCodeGenWriteBarrier((&___ARFrameUpdatedEvent_0), value);
	}

	inline static int32_t get_offset_of_ARAnchorAddedEvent_1() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2810392212_StaticFields, ___ARAnchorAddedEvent_1)); }
	inline ARAnchorAdded_t2783252133 * get_ARAnchorAddedEvent_1() const { return ___ARAnchorAddedEvent_1; }
	inline ARAnchorAdded_t2783252133 ** get_address_of_ARAnchorAddedEvent_1() { return &___ARAnchorAddedEvent_1; }
	inline void set_ARAnchorAddedEvent_1(ARAnchorAdded_t2783252133 * value)
	{
		___ARAnchorAddedEvent_1 = value;
		Il2CppCodeGenWriteBarrier((&___ARAnchorAddedEvent_1), value);
	}

	inline static int32_t get_offset_of_ARAnchorUpdatedEvent_2() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2810392212_StaticFields, ___ARAnchorUpdatedEvent_2)); }
	inline ARAnchorUpdated_t1566318568 * get_ARAnchorUpdatedEvent_2() const { return ___ARAnchorUpdatedEvent_2; }
	inline ARAnchorUpdated_t1566318568 ** get_address_of_ARAnchorUpdatedEvent_2() { return &___ARAnchorUpdatedEvent_2; }
	inline void set_ARAnchorUpdatedEvent_2(ARAnchorUpdated_t1566318568 * value)
	{
		___ARAnchorUpdatedEvent_2 = value;
		Il2CppCodeGenWriteBarrier((&___ARAnchorUpdatedEvent_2), value);
	}

	inline static int32_t get_offset_of_ARAnchorRemovedEvent_3() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2810392212_StaticFields, ___ARAnchorRemovedEvent_3)); }
	inline ARAnchorRemoved_t1938576619 * get_ARAnchorRemovedEvent_3() const { return ___ARAnchorRemovedEvent_3; }
	inline ARAnchorRemoved_t1938576619 ** get_address_of_ARAnchorRemovedEvent_3() { return &___ARAnchorRemovedEvent_3; }
	inline void set_ARAnchorRemovedEvent_3(ARAnchorRemoved_t1938576619 * value)
	{
		___ARAnchorRemovedEvent_3 = value;
		Il2CppCodeGenWriteBarrier((&___ARAnchorRemovedEvent_3), value);
	}

	inline static int32_t get_offset_of_ARUserAnchorAddedEvent_4() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2810392212_StaticFields, ___ARUserAnchorAddedEvent_4)); }
	inline ARUserAnchorAdded_t3369803109 * get_ARUserAnchorAddedEvent_4() const { return ___ARUserAnchorAddedEvent_4; }
	inline ARUserAnchorAdded_t3369803109 ** get_address_of_ARUserAnchorAddedEvent_4() { return &___ARUserAnchorAddedEvent_4; }
	inline void set_ARUserAnchorAddedEvent_4(ARUserAnchorAdded_t3369803109 * value)
	{
		___ARUserAnchorAddedEvent_4 = value;
		Il2CppCodeGenWriteBarrier((&___ARUserAnchorAddedEvent_4), value);
	}

	inline static int32_t get_offset_of_ARUserAnchorUpdatedEvent_5() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2810392212_StaticFields, ___ARUserAnchorUpdatedEvent_5)); }
	inline ARUserAnchorUpdated_t2077321013 * get_ARUserAnchorUpdatedEvent_5() const { return ___ARUserAnchorUpdatedEvent_5; }
	inline ARUserAnchorUpdated_t2077321013 ** get_address_of_ARUserAnchorUpdatedEvent_5() { return &___ARUserAnchorUpdatedEvent_5; }
	inline void set_ARUserAnchorUpdatedEvent_5(ARUserAnchorUpdated_t2077321013 * value)
	{
		___ARUserAnchorUpdatedEvent_5 = value;
		Il2CppCodeGenWriteBarrier((&___ARUserAnchorUpdatedEvent_5), value);
	}

	inline static int32_t get_offset_of_ARUserAnchorRemovedEvent_6() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2810392212_StaticFields, ___ARUserAnchorRemovedEvent_6)); }
	inline ARUserAnchorRemoved_t3858116095 * get_ARUserAnchorRemovedEvent_6() const { return ___ARUserAnchorRemovedEvent_6; }
	inline ARUserAnchorRemoved_t3858116095 ** get_address_of_ARUserAnchorRemovedEvent_6() { return &___ARUserAnchorRemovedEvent_6; }
	inline void set_ARUserAnchorRemovedEvent_6(ARUserAnchorRemoved_t3858116095 * value)
	{
		___ARUserAnchorRemovedEvent_6 = value;
		Il2CppCodeGenWriteBarrier((&___ARUserAnchorRemovedEvent_6), value);
	}

	inline static int32_t get_offset_of_ARSessionFailedEvent_7() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2810392212_StaticFields, ___ARSessionFailedEvent_7)); }
	inline ARSessionFailed_t1827573426 * get_ARSessionFailedEvent_7() const { return ___ARSessionFailedEvent_7; }
	inline ARSessionFailed_t1827573426 ** get_address_of_ARSessionFailedEvent_7() { return &___ARSessionFailedEvent_7; }
	inline void set_ARSessionFailedEvent_7(ARSessionFailed_t1827573426 * value)
	{
		___ARSessionFailedEvent_7 = value;
		Il2CppCodeGenWriteBarrier((&___ARSessionFailedEvent_7), value);
	}

	inline static int32_t get_offset_of_ARSessionInterruptedEvent_8() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2810392212_StaticFields, ___ARSessionInterruptedEvent_8)); }
	inline ARSessionCallback_t3154612443 * get_ARSessionInterruptedEvent_8() const { return ___ARSessionInterruptedEvent_8; }
	inline ARSessionCallback_t3154612443 ** get_address_of_ARSessionInterruptedEvent_8() { return &___ARSessionInterruptedEvent_8; }
	inline void set_ARSessionInterruptedEvent_8(ARSessionCallback_t3154612443 * value)
	{
		___ARSessionInterruptedEvent_8 = value;
		Il2CppCodeGenWriteBarrier((&___ARSessionInterruptedEvent_8), value);
	}

	inline static int32_t get_offset_of_ARSessioninterruptionEndedEvent_9() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2810392212_StaticFields, ___ARSessioninterruptionEndedEvent_9)); }
	inline ARSessionCallback_t3154612443 * get_ARSessioninterruptionEndedEvent_9() const { return ___ARSessioninterruptionEndedEvent_9; }
	inline ARSessionCallback_t3154612443 ** get_address_of_ARSessioninterruptionEndedEvent_9() { return &___ARSessioninterruptionEndedEvent_9; }
	inline void set_ARSessioninterruptionEndedEvent_9(ARSessionCallback_t3154612443 * value)
	{
		___ARSessioninterruptionEndedEvent_9 = value;
		Il2CppCodeGenWriteBarrier((&___ARSessioninterruptionEndedEvent_9), value);
	}

	inline static int32_t get_offset_of_ARSessionTrackingChangedEvent_10() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2810392212_StaticFields, ___ARSessionTrackingChangedEvent_10)); }
	inline ARSessionTrackingChanged_t3156754292 * get_ARSessionTrackingChangedEvent_10() const { return ___ARSessionTrackingChangedEvent_10; }
	inline ARSessionTrackingChanged_t3156754292 ** get_address_of_ARSessionTrackingChangedEvent_10() { return &___ARSessionTrackingChangedEvent_10; }
	inline void set_ARSessionTrackingChangedEvent_10(ARSessionTrackingChanged_t3156754292 * value)
	{
		___ARSessionTrackingChangedEvent_10 = value;
		Il2CppCodeGenWriteBarrier((&___ARSessionTrackingChangedEvent_10), value);
	}

	inline static int32_t get_offset_of_s_Camera_12() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2810392212_StaticFields, ___s_Camera_12)); }
	inline UnityARCamera_t1592950704  get_s_Camera_12() const { return ___s_Camera_12; }
	inline UnityARCamera_t1592950704 * get_address_of_s_Camera_12() { return &___s_Camera_12; }
	inline void set_s_Camera_12(UnityARCamera_t1592950704  value)
	{
		___s_Camera_12 = value;
	}

	inline static int32_t get_offset_of_s_UnityARSessionNativeInterface_13() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2810392212_StaticFields, ___s_UnityARSessionNativeInterface_13)); }
	inline UnityARSessionNativeInterface_t2810392212 * get_s_UnityARSessionNativeInterface_13() const { return ___s_UnityARSessionNativeInterface_13; }
	inline UnityARSessionNativeInterface_t2810392212 ** get_address_of_s_UnityARSessionNativeInterface_13() { return &___s_UnityARSessionNativeInterface_13; }
	inline void set_s_UnityARSessionNativeInterface_13(UnityARSessionNativeInterface_t2810392212 * value)
	{
		___s_UnityARSessionNativeInterface_13 = value;
		Il2CppCodeGenWriteBarrier((&___s_UnityARSessionNativeInterface_13), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_14() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2810392212_StaticFields, ___U3CU3Ef__mgU24cache0_14)); }
	inline internal_ARFrameUpdate_t3745128200 * get_U3CU3Ef__mgU24cache0_14() const { return ___U3CU3Ef__mgU24cache0_14; }
	inline internal_ARFrameUpdate_t3745128200 ** get_address_of_U3CU3Ef__mgU24cache0_14() { return &___U3CU3Ef__mgU24cache0_14; }
	inline void set_U3CU3Ef__mgU24cache0_14(internal_ARFrameUpdate_t3745128200 * value)
	{
		___U3CU3Ef__mgU24cache0_14 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_14), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_15() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2810392212_StaticFields, ___U3CU3Ef__mgU24cache1_15)); }
	inline ARSessionFailed_t1827573426 * get_U3CU3Ef__mgU24cache1_15() const { return ___U3CU3Ef__mgU24cache1_15; }
	inline ARSessionFailed_t1827573426 ** get_address_of_U3CU3Ef__mgU24cache1_15() { return &___U3CU3Ef__mgU24cache1_15; }
	inline void set_U3CU3Ef__mgU24cache1_15(ARSessionFailed_t1827573426 * value)
	{
		___U3CU3Ef__mgU24cache1_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache1_15), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache2_16() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2810392212_StaticFields, ___U3CU3Ef__mgU24cache2_16)); }
	inline ARSessionCallback_t3154612443 * get_U3CU3Ef__mgU24cache2_16() const { return ___U3CU3Ef__mgU24cache2_16; }
	inline ARSessionCallback_t3154612443 ** get_address_of_U3CU3Ef__mgU24cache2_16() { return &___U3CU3Ef__mgU24cache2_16; }
	inline void set_U3CU3Ef__mgU24cache2_16(ARSessionCallback_t3154612443 * value)
	{
		___U3CU3Ef__mgU24cache2_16 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache2_16), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache3_17() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2810392212_StaticFields, ___U3CU3Ef__mgU24cache3_17)); }
	inline ARSessionCallback_t3154612443 * get_U3CU3Ef__mgU24cache3_17() const { return ___U3CU3Ef__mgU24cache3_17; }
	inline ARSessionCallback_t3154612443 ** get_address_of_U3CU3Ef__mgU24cache3_17() { return &___U3CU3Ef__mgU24cache3_17; }
	inline void set_U3CU3Ef__mgU24cache3_17(ARSessionCallback_t3154612443 * value)
	{
		___U3CU3Ef__mgU24cache3_17 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache3_17), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache4_18() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2810392212_StaticFields, ___U3CU3Ef__mgU24cache4_18)); }
	inline internal_ARSessionTrackingChanged_t208978224 * get_U3CU3Ef__mgU24cache4_18() const { return ___U3CU3Ef__mgU24cache4_18; }
	inline internal_ARSessionTrackingChanged_t208978224 ** get_address_of_U3CU3Ef__mgU24cache4_18() { return &___U3CU3Ef__mgU24cache4_18; }
	inline void set_U3CU3Ef__mgU24cache4_18(internal_ARSessionTrackingChanged_t208978224 * value)
	{
		___U3CU3Ef__mgU24cache4_18 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache4_18), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache5_19() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2810392212_StaticFields, ___U3CU3Ef__mgU24cache5_19)); }
	inline internal_ARAnchorAdded_t3297948615 * get_U3CU3Ef__mgU24cache5_19() const { return ___U3CU3Ef__mgU24cache5_19; }
	inline internal_ARAnchorAdded_t3297948615 ** get_address_of_U3CU3Ef__mgU24cache5_19() { return &___U3CU3Ef__mgU24cache5_19; }
	inline void set_U3CU3Ef__mgU24cache5_19(internal_ARAnchorAdded_t3297948615 * value)
	{
		___U3CU3Ef__mgU24cache5_19 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache5_19), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache6_20() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2810392212_StaticFields, ___U3CU3Ef__mgU24cache6_20)); }
	inline internal_ARAnchorUpdated_t1519908705 * get_U3CU3Ef__mgU24cache6_20() const { return ___U3CU3Ef__mgU24cache6_20; }
	inline internal_ARAnchorUpdated_t1519908705 ** get_address_of_U3CU3Ef__mgU24cache6_20() { return &___U3CU3Ef__mgU24cache6_20; }
	inline void set_U3CU3Ef__mgU24cache6_20(internal_ARAnchorUpdated_t1519908705 * value)
	{
		___U3CU3Ef__mgU24cache6_20 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache6_20), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache7_21() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2810392212_StaticFields, ___U3CU3Ef__mgU24cache7_21)); }
	inline internal_ARAnchorRemoved_t2496861394 * get_U3CU3Ef__mgU24cache7_21() const { return ___U3CU3Ef__mgU24cache7_21; }
	inline internal_ARAnchorRemoved_t2496861394 ** get_address_of_U3CU3Ef__mgU24cache7_21() { return &___U3CU3Ef__mgU24cache7_21; }
	inline void set_U3CU3Ef__mgU24cache7_21(internal_ARAnchorRemoved_t2496861394 * value)
	{
		___U3CU3Ef__mgU24cache7_21 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache7_21), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache8_22() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2810392212_StaticFields, ___U3CU3Ef__mgU24cache8_22)); }
	inline internal_ARUserAnchorAdded_t3898537032 * get_U3CU3Ef__mgU24cache8_22() const { return ___U3CU3Ef__mgU24cache8_22; }
	inline internal_ARUserAnchorAdded_t3898537032 ** get_address_of_U3CU3Ef__mgU24cache8_22() { return &___U3CU3Ef__mgU24cache8_22; }
	inline void set_U3CU3Ef__mgU24cache8_22(internal_ARUserAnchorAdded_t3898537032 * value)
	{
		___U3CU3Ef__mgU24cache8_22 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache8_22), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache9_23() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2810392212_StaticFields, ___U3CU3Ef__mgU24cache9_23)); }
	inline internal_ARUserAnchorUpdated_t1059349429 * get_U3CU3Ef__mgU24cache9_23() const { return ___U3CU3Ef__mgU24cache9_23; }
	inline internal_ARUserAnchorUpdated_t1059349429 ** get_address_of_U3CU3Ef__mgU24cache9_23() { return &___U3CU3Ef__mgU24cache9_23; }
	inline void set_U3CU3Ef__mgU24cache9_23(internal_ARUserAnchorUpdated_t1059349429 * value)
	{
		___U3CU3Ef__mgU24cache9_23 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache9_23), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cacheA_24() { return static_cast<int32_t>(offsetof(UnityARSessionNativeInterface_t2810392212_StaticFields, ___U3CU3Ef__mgU24cacheA_24)); }
	inline internal_ARUserAnchorRemoved_t751005791 * get_U3CU3Ef__mgU24cacheA_24() const { return ___U3CU3Ef__mgU24cacheA_24; }
	inline internal_ARUserAnchorRemoved_t751005791 ** get_address_of_U3CU3Ef__mgU24cacheA_24() { return &___U3CU3Ef__mgU24cacheA_24; }
	inline void set_U3CU3Ef__mgU24cacheA_24(internal_ARUserAnchorRemoved_t751005791 * value)
	{
		___U3CU3Ef__mgU24cacheA_24 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cacheA_24), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARSESSIONNATIVEINTERFACE_T2810392212_H
#ifndef INTERNAL_ARUSERANCHORADDED_T3898537032_H
#define INTERNAL_ARUSERANCHORADDED_T3898537032_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorAdded
struct  internal_ARUserAnchorAdded_t3898537032  : public MulticastDelegate_t2683249572
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNAL_ARUSERANCHORADDED_T3898537032_H
#ifndef INTERNAL_ARUSERANCHORREMOVED_T751005791_H
#define INTERNAL_ARUSERANCHORREMOVED_T751005791_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorRemoved
struct  internal_ARUserAnchorRemoved_t751005791  : public MulticastDelegate_t2683249572
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNAL_ARUSERANCHORREMOVED_T751005791_H
#ifndef INTERNAL_ARSESSIONTRACKINGCHANGED_T208978224_H
#define INTERNAL_ARSESSIONTRACKINGCHANGED_T208978224_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARSessionTrackingChanged
struct  internal_ARSessionTrackingChanged_t208978224  : public MulticastDelegate_t2683249572
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNAL_ARSESSIONTRACKINGCHANGED_T208978224_H
#ifndef ARUSERANCHORADDED_T3369803109_H
#define ARUSERANCHORADDED_T3369803109_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARUserAnchorAdded
struct  ARUserAnchorAdded_t3369803109  : public MulticastDelegate_t2683249572
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARUSERANCHORADDED_T3369803109_H
#ifndef ARANCHORREMOVED_T1938576619_H
#define ARANCHORREMOVED_T1938576619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorRemoved
struct  ARAnchorRemoved_t1938576619  : public MulticastDelegate_t2683249572
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARANCHORREMOVED_T1938576619_H
#ifndef ARANCHORUPDATED_T1566318568_H
#define ARANCHORUPDATED_T1566318568_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorUpdated
struct  ARAnchorUpdated_t1566318568  : public MulticastDelegate_t2683249572
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARANCHORUPDATED_T1566318568_H
#ifndef ARANCHORADDED_T2783252133_H
#define ARANCHORADDED_T2783252133_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/ARAnchorAdded
struct  ARAnchorAdded_t2783252133  : public MulticastDelegate_t2683249572
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARANCHORADDED_T2783252133_H
#ifndef INTERNAL_ARUSERANCHORUPDATED_T1059349429_H
#define INTERNAL_ARUSERANCHORUPDATED_T1059349429_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARUserAnchorUpdated
struct  internal_ARUserAnchorUpdated_t1059349429  : public MulticastDelegate_t2683249572
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNAL_ARUSERANCHORUPDATED_T1059349429_H
#ifndef INTERNAL_ARANCHORUPDATED_T1519908705_H
#define INTERNAL_ARANCHORUPDATED_T1519908705_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionNativeInterface/internal_ARAnchorUpdated
struct  internal_ARAnchorUpdated_t1519908705  : public MulticastDelegate_t2683249572
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNAL_ARANCHORUPDATED_T1519908705_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3300 = { sizeof (ARTrackingState_t2435700148)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3300[4] = 
{
	ARTrackingState_t2435700148::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3301 = { sizeof (ARTrackingStateReason_t3063632866)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3301[5] = 
{
	ARTrackingStateReason_t3063632866::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3302 = { sizeof (ARUserAnchor_t3356699483)+ sizeof (RuntimeObject), sizeof(ARUserAnchor_t3356699483_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable3302[2] = 
{
	ARUserAnchor_t3356699483::get_offset_of_identifier_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ARUserAnchor_t3356699483::get_offset_of_transform_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3303 = { sizeof (UnityARMatrix4x4_t372305534)+ sizeof (RuntimeObject), sizeof(UnityARMatrix4x4_t372305534 ), 0, 0 };
extern const int32_t g_FieldOffsetTable3303[4] = 
{
	UnityARMatrix4x4_t372305534::get_offset_of_column0_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityARMatrix4x4_t372305534::get_offset_of_column1_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityARMatrix4x4_t372305534::get_offset_of_column2_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityARMatrix4x4_t372305534::get_offset_of_column3_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3304 = { sizeof (UnityVideoParams_t3748383894)+ sizeof (RuntimeObject), sizeof(UnityVideoParams_t3748383894 ), 0, 0 };
extern const int32_t g_FieldOffsetTable3304[5] = 
{
	UnityVideoParams_t3748383894::get_offset_of_yWidth_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityVideoParams_t3748383894::get_offset_of_yHeight_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityVideoParams_t3748383894::get_offset_of_screenOrientation_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityVideoParams_t3748383894::get_offset_of_texCoordScale_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityVideoParams_t3748383894::get_offset_of_cvPixelBufferPtr_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3305 = { sizeof (UnityARLightEstimate_t1292793666)+ sizeof (RuntimeObject), sizeof(UnityARLightEstimate_t1292793666 ), 0, 0 };
extern const int32_t g_FieldOffsetTable3305[2] = 
{
	UnityARLightEstimate_t1292793666::get_offset_of_ambientIntensity_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityARLightEstimate_t1292793666::get_offset_of_ambientColorTemperature_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3306 = { sizeof (internal_UnityARCamera_t2470329195)+ sizeof (RuntimeObject), sizeof(internal_UnityARCamera_t2470329195 ), 0, 0 };
extern const int32_t g_FieldOffsetTable3306[8] = 
{
	internal_UnityARCamera_t2470329195::get_offset_of_worldTransform_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	internal_UnityARCamera_t2470329195::get_offset_of_projectionMatrix_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	internal_UnityARCamera_t2470329195::get_offset_of_trackingState_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	internal_UnityARCamera_t2470329195::get_offset_of_trackingReason_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	internal_UnityARCamera_t2470329195::get_offset_of_videoParams_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	internal_UnityARCamera_t2470329195::get_offset_of_lightEstimation_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	internal_UnityARCamera_t2470329195::get_offset_of_displayTransform_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	internal_UnityARCamera_t2470329195::get_offset_of_getPointCloudData_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3307 = { sizeof (UnityARCamera_t1592950704)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3307[8] = 
{
	UnityARCamera_t1592950704::get_offset_of_worldTransform_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityARCamera_t1592950704::get_offset_of_projectionMatrix_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityARCamera_t1592950704::get_offset_of_trackingState_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityARCamera_t1592950704::get_offset_of_trackingReason_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityARCamera_t1592950704::get_offset_of_videoParams_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityARCamera_t1592950704::get_offset_of_lightEstimation_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityARCamera_t1592950704::get_offset_of_displayTransform_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityARCamera_t1592950704::get_offset_of_pointCloudData_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3308 = { sizeof (UnityARAnchorData_t4134405035)+ sizeof (RuntimeObject), sizeof(UnityARAnchorData_t4134405035 ), 0, 0 };
extern const int32_t g_FieldOffsetTable3308[5] = 
{
	UnityARAnchorData_t4134405035::get_offset_of_ptrIdentifier_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityARAnchorData_t4134405035::get_offset_of_transform_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityARAnchorData_t4134405035::get_offset_of_alignment_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityARAnchorData_t4134405035::get_offset_of_center_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityARAnchorData_t4134405035::get_offset_of_extent_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3309 = { sizeof (UnityARUserAnchorData_t3069126381)+ sizeof (RuntimeObject), sizeof(UnityARUserAnchorData_t3069126381 ), 0, 0 };
extern const int32_t g_FieldOffsetTable3309[2] = 
{
	UnityARUserAnchorData_t3069126381::get_offset_of_ptrIdentifier_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityARUserAnchorData_t3069126381::get_offset_of_transform_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3310 = { sizeof (UnityARHitTestResult_t4116825347)+ sizeof (RuntimeObject), sizeof(UnityARHitTestResult_t4116825347_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable3310[6] = 
{
	UnityARHitTestResult_t4116825347::get_offset_of_type_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityARHitTestResult_t4116825347::get_offset_of_distance_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityARHitTestResult_t4116825347::get_offset_of_localTransform_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityARHitTestResult_t4116825347::get_offset_of_worldTransform_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityARHitTestResult_t4116825347::get_offset_of_anchor_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityARHitTestResult_t4116825347::get_offset_of_isValid_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3311 = { sizeof (UnityARAlignment_t3627120493)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3311[4] = 
{
	UnityARAlignment_t3627120493::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3312 = { sizeof (UnityARPlaneDetection_t2810981270)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3312[3] = 
{
	UnityARPlaneDetection_t2810981270::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3313 = { sizeof (ARKitSessionConfiguration_t3445466847)+ sizeof (RuntimeObject), sizeof(ARKitSessionConfiguration_t3445466847_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable3313[3] = 
{
	ARKitSessionConfiguration_t3445466847::get_offset_of_alignment_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ARKitSessionConfiguration_t3445466847::get_offset_of_getPointCloudData_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ARKitSessionConfiguration_t3445466847::get_offset_of_enableLightEstimation_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3314 = { sizeof (ARKitWorldTrackingSessionConfiguration_t680925311)+ sizeof (RuntimeObject), sizeof(ARKitWorldTrackingSessionConfiguration_t680925311_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable3314[4] = 
{
	ARKitWorldTrackingSessionConfiguration_t680925311::get_offset_of_alignment_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ARKitWorldTrackingSessionConfiguration_t680925311::get_offset_of_planeDetection_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ARKitWorldTrackingSessionConfiguration_t680925311::get_offset_of_getPointCloudData_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ARKitWorldTrackingSessionConfiguration_t680925311::get_offset_of_enableLightEstimation_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3315 = { sizeof (UnityARSessionRunOption_t2104986192)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3315[3] = 
{
	UnityARSessionRunOption_t2104986192::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3316 = { sizeof (UnityARSessionNativeInterface_t2810392212), -1, sizeof(UnityARSessionNativeInterface_t2810392212_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3316[25] = 
{
	UnityARSessionNativeInterface_t2810392212_StaticFields::get_offset_of_ARFrameUpdatedEvent_0(),
	UnityARSessionNativeInterface_t2810392212_StaticFields::get_offset_of_ARAnchorAddedEvent_1(),
	UnityARSessionNativeInterface_t2810392212_StaticFields::get_offset_of_ARAnchorUpdatedEvent_2(),
	UnityARSessionNativeInterface_t2810392212_StaticFields::get_offset_of_ARAnchorRemovedEvent_3(),
	UnityARSessionNativeInterface_t2810392212_StaticFields::get_offset_of_ARUserAnchorAddedEvent_4(),
	UnityARSessionNativeInterface_t2810392212_StaticFields::get_offset_of_ARUserAnchorUpdatedEvent_5(),
	UnityARSessionNativeInterface_t2810392212_StaticFields::get_offset_of_ARUserAnchorRemovedEvent_6(),
	UnityARSessionNativeInterface_t2810392212_StaticFields::get_offset_of_ARSessionFailedEvent_7(),
	UnityARSessionNativeInterface_t2810392212_StaticFields::get_offset_of_ARSessionInterruptedEvent_8(),
	UnityARSessionNativeInterface_t2810392212_StaticFields::get_offset_of_ARSessioninterruptionEndedEvent_9(),
	UnityARSessionNativeInterface_t2810392212_StaticFields::get_offset_of_ARSessionTrackingChangedEvent_10(),
	UnityARSessionNativeInterface_t2810392212::get_offset_of_m_NativeARSession_11(),
	UnityARSessionNativeInterface_t2810392212_StaticFields::get_offset_of_s_Camera_12(),
	UnityARSessionNativeInterface_t2810392212_StaticFields::get_offset_of_s_UnityARSessionNativeInterface_13(),
	UnityARSessionNativeInterface_t2810392212_StaticFields::get_offset_of_U3CU3Ef__mgU24cache0_14(),
	UnityARSessionNativeInterface_t2810392212_StaticFields::get_offset_of_U3CU3Ef__mgU24cache1_15(),
	UnityARSessionNativeInterface_t2810392212_StaticFields::get_offset_of_U3CU3Ef__mgU24cache2_16(),
	UnityARSessionNativeInterface_t2810392212_StaticFields::get_offset_of_U3CU3Ef__mgU24cache3_17(),
	UnityARSessionNativeInterface_t2810392212_StaticFields::get_offset_of_U3CU3Ef__mgU24cache4_18(),
	UnityARSessionNativeInterface_t2810392212_StaticFields::get_offset_of_U3CU3Ef__mgU24cache5_19(),
	UnityARSessionNativeInterface_t2810392212_StaticFields::get_offset_of_U3CU3Ef__mgU24cache6_20(),
	UnityARSessionNativeInterface_t2810392212_StaticFields::get_offset_of_U3CU3Ef__mgU24cache7_21(),
	UnityARSessionNativeInterface_t2810392212_StaticFields::get_offset_of_U3CU3Ef__mgU24cache8_22(),
	UnityARSessionNativeInterface_t2810392212_StaticFields::get_offset_of_U3CU3Ef__mgU24cache9_23(),
	UnityARSessionNativeInterface_t2810392212_StaticFields::get_offset_of_U3CU3Ef__mgU24cacheA_24(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3317 = { sizeof (ARFrameUpdate_t148237887), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3318 = { sizeof (ARAnchorAdded_t2783252133), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3319 = { sizeof (ARAnchorUpdated_t1566318568), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3320 = { sizeof (ARAnchorRemoved_t1938576619), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3321 = { sizeof (ARUserAnchorAdded_t3369803109), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3322 = { sizeof (ARUserAnchorUpdated_t2077321013), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3323 = { sizeof (ARUserAnchorRemoved_t3858116095), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3324 = { sizeof (ARSessionFailed_t1827573426), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3325 = { sizeof (ARSessionCallback_t3154612443), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3326 = { sizeof (ARSessionTrackingChanged_t3156754292), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3327 = { sizeof (internal_ARFrameUpdate_t3745128200), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3328 = { sizeof (internal_ARAnchorAdded_t3297948615), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3329 = { sizeof (internal_ARAnchorUpdated_t1519908705), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3330 = { sizeof (internal_ARAnchorRemoved_t2496861394), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3331 = { sizeof (internal_ARUserAnchorAdded_t3898537032), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3332 = { sizeof (internal_ARUserAnchorUpdated_t1059349429), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3333 = { sizeof (internal_ARUserAnchorRemoved_t751005791), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3334 = { sizeof (internal_ARSessionTrackingChanged_t208978224), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3335 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3335[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3336 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3336[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3337 = { sizeof (U3CPrivateImplementationDetailsU3E_t3528821798), -1, sizeof(U3CPrivateImplementationDetailsU3E_t3528821798_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3337[15] = 
{
	U3CPrivateImplementationDetailsU3E_t3528821798_StaticFields::get_offset_of_U24fieldU2D373B494F210C656134C5728D551D4C97B013EB33_0(),
	U3CPrivateImplementationDetailsU3E_t3528821798_StaticFields::get_offset_of_U24fieldU2DF5B52AE718355A38E8190D5F947B52DFB427A1D7_1(),
	U3CPrivateImplementationDetailsU3E_t3528821798_StaticFields::get_offset_of_U24fieldU2D81D5D8B4DDFA3FBB954AC400415044EB9F11E33E_2(),
	U3CPrivateImplementationDetailsU3E_t3528821798_StaticFields::get_offset_of_U24fieldU2DC0C10EC6AF4A4101F894B153E1CD493ADC01A67F_3(),
	U3CPrivateImplementationDetailsU3E_t3528821798_StaticFields::get_offset_of_U24fieldU2D6A94F0C3DCA389344CEDB99F171FA1E092E842E6_4(),
	U3CPrivateImplementationDetailsU3E_t3528821798_StaticFields::get_offset_of_U24fieldU2D8ED4E99B936B26A09EDFAB9E336CF75F4913B454_5(),
	U3CPrivateImplementationDetailsU3E_t3528821798_StaticFields::get_offset_of_U24fieldU2DF5F598DAC7D3E479CD72BAAB99EE6617D8190398_6(),
	U3CPrivateImplementationDetailsU3E_t3528821798_StaticFields::get_offset_of_U24fieldU2D2492606636F4A4666E0D617B51116A5A68539881_7(),
	U3CPrivateImplementationDetailsU3E_t3528821798_StaticFields::get_offset_of_U24fieldU2D472655E8FD2B8B97DB5D188D273A20E8834C19BB_8(),
	U3CPrivateImplementationDetailsU3E_t3528821798_StaticFields::get_offset_of_U24fieldU2DD8E4ACBC2D957C3344A3CAD69FCF9A60C8034DBF_9(),
	U3CPrivateImplementationDetailsU3E_t3528821798_StaticFields::get_offset_of_U24fieldU2DFD5BE77C4372533D7C16BF67D58A3ABBE604ED81_10(),
	U3CPrivateImplementationDetailsU3E_t3528821798_StaticFields::get_offset_of_U24fieldU2DAE6B2897A8B88E297D61124152931A88D5D977F4_11(),
	U3CPrivateImplementationDetailsU3E_t3528821798_StaticFields::get_offset_of_U24fieldU2D794CB2CC08B7EC30CA04323EFAC1B017E5B5D2C6_12(),
	U3CPrivateImplementationDetailsU3E_t3528821798_StaticFields::get_offset_of_U24fieldU2DBEEEBCEF33AF5B72B0463DF9185C0226DE5909AD_13(),
	U3CPrivateImplementationDetailsU3E_t3528821798_StaticFields::get_offset_of_U24fieldU2D8E7629AD5AF686202B8CB7C014505C432FFE31E6_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3338 = { sizeof (U24ArrayTypeU3D1024_t2953251151)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU3D1024_t2953251151 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3339 = { sizeof (U24ArrayTypeU3D100_t3747106016)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU3D100_t3747106016 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3340 = { sizeof (U24ArrayTypeU3D2052_t4267972063)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU3D2052_t4267972063 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3341 = { sizeof (U24ArrayTypeU3D128_t2305094183)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU3D128_t2305094183 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3342 = { sizeof (U24ArrayTypeU3D64_t2042006775)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU3D64_t2042006775 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3343 = { sizeof (U24ArrayTypeU3D32_t3943856021)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU3D32_t3943856021 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3344 = { sizeof (U24ArrayTypeU3D12_t1949145165)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU3D12_t1949145165 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3345 = { sizeof (U24ArrayTypeU3D116_t886570147)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU3D116_t886570147 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3346 = { sizeof (U24ArrayTypeU3D20_t1302890685)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU3D20_t1302890685 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3347 = { sizeof (U24ArrayTypeU3D24_t2443818269)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU3D24_t2443818269 ), 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif

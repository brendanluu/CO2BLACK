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

// UnityStandardAssets.Vehicles.Ball.Ball
struct Ball_t2703741877;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t2619853198;
// UnityEngine.Component
struct Component_t1657615590;
// UnityEngine.Rigidbody
struct Rigidbody_t157520360;
// UnityEngine.Transform
struct Transform_t1780061342;
// UnityStandardAssets.Vehicles.Ball.BallUserControl
struct BallUserControl_t1288279154;
// UnityEngine.Camera
struct Camera_t3132456115;
// UnityEngine.Object
struct Object_t2397947810;
// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t1043538901;
// System.Void
struct Void_t87360347;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t2335366346;

extern const RuntimeMethod* Component_GetComponent_TisRigidbody_t157520360_m2030817405_RuntimeMethod_var;
extern const uint32_t Ball_Start_m2788636825_MetadataUsageId;
extern RuntimeClass* Vector3_t3070238175_il2cpp_TypeInfo_var;
extern const uint32_t Ball_Move_m2738865157_MetadataUsageId;
extern RuntimeClass* Object_t2397947810_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t3943621610_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Component_GetComponent_TisBall_t2703741877_m1447590629_RuntimeMethod_var;
extern Il2CppCodeGenString* _stringLiteral2112136883;
extern const uint32_t BallUserControl_Awake_m686649679_MetadataUsageId;
extern RuntimeClass* CrossPlatformInputManager_t184322598_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1780394468;
extern Il2CppCodeGenString* _stringLiteral715540782;
extern Il2CppCodeGenString* _stringLiteral3409595850;
extern const uint32_t BallUserControl_Update_m1263938804_MetadataUsageId;



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
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef VALUETYPE_T1845628612_H
#define VALUETYPE_T1845628612_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t1845628612  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t1845628612_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t1845628612_marshaled_com
{
};
#endif // VALUETYPE_T1845628612_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t1043538901* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t1043538901* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t1043538901** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t1043538901* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef ENUM_T1476219251_H
#define ENUM_T1476219251_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t1476219251  : public ValueType_t1845628612
{
public:

public:
};

struct Enum_t1476219251_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t1043538901* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t1476219251_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t1043538901* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t1043538901** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t1043538901* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t1476219251_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t1476219251_marshaled_com
{
};
#endif // ENUM_T1476219251_H
#ifndef VECTOR3_T3070238175_H
#define VECTOR3_T3070238175_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3070238175 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t3070238175, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t3070238175, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t3070238175, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t3070238175_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3070238175  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3070238175  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3070238175  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3070238175  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3070238175  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3070238175  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3070238175  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3070238175  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3070238175  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3070238175  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t3070238175_StaticFields, ___zeroVector_4)); }
	inline Vector3_t3070238175  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t3070238175 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t3070238175  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3070238175_StaticFields, ___oneVector_5)); }
	inline Vector3_t3070238175  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t3070238175 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t3070238175  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3070238175_StaticFields, ___upVector_6)); }
	inline Vector3_t3070238175  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t3070238175 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t3070238175  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3070238175_StaticFields, ___downVector_7)); }
	inline Vector3_t3070238175  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t3070238175 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t3070238175  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3070238175_StaticFields, ___leftVector_8)); }
	inline Vector3_t3070238175  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t3070238175 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t3070238175  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3070238175_StaticFields, ___rightVector_9)); }
	inline Vector3_t3070238175  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t3070238175 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t3070238175  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3070238175_StaticFields, ___forwardVector_10)); }
	inline Vector3_t3070238175  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t3070238175 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t3070238175  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3070238175_StaticFields, ___backVector_11)); }
	inline Vector3_t3070238175  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t3070238175 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t3070238175  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3070238175_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t3070238175  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t3070238175 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t3070238175  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3070238175_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t3070238175  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t3070238175 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t3070238175  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3070238175_H
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
#ifndef BOOLEAN_T526828194_H
#define BOOLEAN_T526828194_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t526828194 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t526828194, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t526828194_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t526828194_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t526828194_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T526828194_H
#ifndef SINGLE_T2431139716_H
#define SINGLE_T2431139716_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t2431139716 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t2431139716, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T2431139716_H
#ifndef VOID_T87360347_H
#define VOID_T87360347_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t87360347 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T87360347_H
#ifndef OBJECT_T2397947810_H
#define OBJECT_T2397947810_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t2397947810  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t2397947810, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t2397947810_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t2397947810_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t2397947810_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t2397947810_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T2397947810_H
#ifndef PROGRESSSTYLE_T3076856768_H
#define PROGRESSSTYLE_T3076856768_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.WaypointProgressTracker/ProgressStyle
struct  ProgressStyle_t3076856768 
{
public:
	// System.Int32 UnityStandardAssets.Utility.WaypointProgressTracker/ProgressStyle::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ProgressStyle_t3076856768, ___value___1)); }
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
#endif // PROGRESSSTYLE_T3076856768_H
#ifndef FORCEMODE_T2365603582_H
#define FORCEMODE_T2365603582_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ForceMode
struct  ForceMode_t2365603582 
{
public:
	// System.Int32 UnityEngine.ForceMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ForceMode_t2365603582, ___value___1)); }
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
#endif // FORCEMODE_T2365603582_H
#ifndef COMPONENT_T1657615590_H
#define COMPONENT_T1657615590_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1657615590  : public Object_t2397947810
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1657615590_H
#ifndef RIGIDBODY_T157520360_H
#define RIGIDBODY_T157520360_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rigidbody
struct  Rigidbody_t157520360  : public Component_t1657615590
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIGIDBODY_T157520360_H
#ifndef BEHAVIOUR_T1435031447_H
#define BEHAVIOUR_T1435031447_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1435031447  : public Component_t1657615590
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1435031447_H
#ifndef TRANSFORM_T1780061342_H
#define TRANSFORM_T1780061342_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t1780061342  : public Component_t1657615590
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T1780061342_H
#ifndef CAMERA_T3132456115_H
#define CAMERA_T3132456115_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Camera
struct  Camera_t3132456115  : public Behaviour_t1435031447
{
public:

public:
};

struct Camera_t3132456115_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t2335366346 * ___onPreCull_2;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t2335366346 * ___onPreRender_3;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t2335366346 * ___onPostRender_4;

public:
	inline static int32_t get_offset_of_onPreCull_2() { return static_cast<int32_t>(offsetof(Camera_t3132456115_StaticFields, ___onPreCull_2)); }
	inline CameraCallback_t2335366346 * get_onPreCull_2() const { return ___onPreCull_2; }
	inline CameraCallback_t2335366346 ** get_address_of_onPreCull_2() { return &___onPreCull_2; }
	inline void set_onPreCull_2(CameraCallback_t2335366346 * value)
	{
		___onPreCull_2 = value;
		Il2CppCodeGenWriteBarrier((&___onPreCull_2), value);
	}

	inline static int32_t get_offset_of_onPreRender_3() { return static_cast<int32_t>(offsetof(Camera_t3132456115_StaticFields, ___onPreRender_3)); }
	inline CameraCallback_t2335366346 * get_onPreRender_3() const { return ___onPreRender_3; }
	inline CameraCallback_t2335366346 ** get_address_of_onPreRender_3() { return &___onPreRender_3; }
	inline void set_onPreRender_3(CameraCallback_t2335366346 * value)
	{
		___onPreRender_3 = value;
		Il2CppCodeGenWriteBarrier((&___onPreRender_3), value);
	}

	inline static int32_t get_offset_of_onPostRender_4() { return static_cast<int32_t>(offsetof(Camera_t3132456115_StaticFields, ___onPostRender_4)); }
	inline CameraCallback_t2335366346 * get_onPostRender_4() const { return ___onPostRender_4; }
	inline CameraCallback_t2335366346 ** get_address_of_onPostRender_4() { return &___onPostRender_4; }
	inline void set_onPostRender_4(CameraCallback_t2335366346 * value)
	{
		___onPostRender_4 = value;
		Il2CppCodeGenWriteBarrier((&___onPostRender_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERA_T3132456115_H
#ifndef MONOBEHAVIOUR_T2619853198_H
#define MONOBEHAVIOUR_T2619853198_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t2619853198  : public Behaviour_t1435031447
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T2619853198_H
#ifndef BALLUSERCONTROL_T1288279154_H
#define BALLUSERCONTROL_T1288279154_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Vehicles.Ball.BallUserControl
struct  BallUserControl_t1288279154  : public MonoBehaviour_t2619853198
{
public:
	// UnityStandardAssets.Vehicles.Ball.Ball UnityStandardAssets.Vehicles.Ball.BallUserControl::ball
	Ball_t2703741877 * ___ball_2;
	// UnityEngine.Vector3 UnityStandardAssets.Vehicles.Ball.BallUserControl::move
	Vector3_t3070238175  ___move_3;
	// UnityEngine.Transform UnityStandardAssets.Vehicles.Ball.BallUserControl::cam
	Transform_t1780061342 * ___cam_4;
	// UnityEngine.Vector3 UnityStandardAssets.Vehicles.Ball.BallUserControl::camForward
	Vector3_t3070238175  ___camForward_5;
	// System.Boolean UnityStandardAssets.Vehicles.Ball.BallUserControl::jump
	bool ___jump_6;

public:
	inline static int32_t get_offset_of_ball_2() { return static_cast<int32_t>(offsetof(BallUserControl_t1288279154, ___ball_2)); }
	inline Ball_t2703741877 * get_ball_2() const { return ___ball_2; }
	inline Ball_t2703741877 ** get_address_of_ball_2() { return &___ball_2; }
	inline void set_ball_2(Ball_t2703741877 * value)
	{
		___ball_2 = value;
		Il2CppCodeGenWriteBarrier((&___ball_2), value);
	}

	inline static int32_t get_offset_of_move_3() { return static_cast<int32_t>(offsetof(BallUserControl_t1288279154, ___move_3)); }
	inline Vector3_t3070238175  get_move_3() const { return ___move_3; }
	inline Vector3_t3070238175 * get_address_of_move_3() { return &___move_3; }
	inline void set_move_3(Vector3_t3070238175  value)
	{
		___move_3 = value;
	}

	inline static int32_t get_offset_of_cam_4() { return static_cast<int32_t>(offsetof(BallUserControl_t1288279154, ___cam_4)); }
	inline Transform_t1780061342 * get_cam_4() const { return ___cam_4; }
	inline Transform_t1780061342 ** get_address_of_cam_4() { return &___cam_4; }
	inline void set_cam_4(Transform_t1780061342 * value)
	{
		___cam_4 = value;
		Il2CppCodeGenWriteBarrier((&___cam_4), value);
	}

	inline static int32_t get_offset_of_camForward_5() { return static_cast<int32_t>(offsetof(BallUserControl_t1288279154, ___camForward_5)); }
	inline Vector3_t3070238175  get_camForward_5() const { return ___camForward_5; }
	inline Vector3_t3070238175 * get_address_of_camForward_5() { return &___camForward_5; }
	inline void set_camForward_5(Vector3_t3070238175  value)
	{
		___camForward_5 = value;
	}

	inline static int32_t get_offset_of_jump_6() { return static_cast<int32_t>(offsetof(BallUserControl_t1288279154, ___jump_6)); }
	inline bool get_jump_6() const { return ___jump_6; }
	inline bool* get_address_of_jump_6() { return &___jump_6; }
	inline void set_jump_6(bool value)
	{
		___jump_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BALLUSERCONTROL_T1288279154_H
#ifndef BALL_T2703741877_H
#define BALL_T2703741877_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Vehicles.Ball.Ball
struct  Ball_t2703741877  : public MonoBehaviour_t2619853198
{
public:
	// System.Single UnityStandardAssets.Vehicles.Ball.Ball::m_MovePower
	float ___m_MovePower_2;
	// System.Boolean UnityStandardAssets.Vehicles.Ball.Ball::m_UseTorque
	bool ___m_UseTorque_3;
	// System.Single UnityStandardAssets.Vehicles.Ball.Ball::m_MaxAngularVelocity
	float ___m_MaxAngularVelocity_4;
	// System.Single UnityStandardAssets.Vehicles.Ball.Ball::m_JumpPower
	float ___m_JumpPower_5;
	// UnityEngine.Rigidbody UnityStandardAssets.Vehicles.Ball.Ball::m_Rigidbody
	Rigidbody_t157520360 * ___m_Rigidbody_7;

public:
	inline static int32_t get_offset_of_m_MovePower_2() { return static_cast<int32_t>(offsetof(Ball_t2703741877, ___m_MovePower_2)); }
	inline float get_m_MovePower_2() const { return ___m_MovePower_2; }
	inline float* get_address_of_m_MovePower_2() { return &___m_MovePower_2; }
	inline void set_m_MovePower_2(float value)
	{
		___m_MovePower_2 = value;
	}

	inline static int32_t get_offset_of_m_UseTorque_3() { return static_cast<int32_t>(offsetof(Ball_t2703741877, ___m_UseTorque_3)); }
	inline bool get_m_UseTorque_3() const { return ___m_UseTorque_3; }
	inline bool* get_address_of_m_UseTorque_3() { return &___m_UseTorque_3; }
	inline void set_m_UseTorque_3(bool value)
	{
		___m_UseTorque_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxAngularVelocity_4() { return static_cast<int32_t>(offsetof(Ball_t2703741877, ___m_MaxAngularVelocity_4)); }
	inline float get_m_MaxAngularVelocity_4() const { return ___m_MaxAngularVelocity_4; }
	inline float* get_address_of_m_MaxAngularVelocity_4() { return &___m_MaxAngularVelocity_4; }
	inline void set_m_MaxAngularVelocity_4(float value)
	{
		___m_MaxAngularVelocity_4 = value;
	}

	inline static int32_t get_offset_of_m_JumpPower_5() { return static_cast<int32_t>(offsetof(Ball_t2703741877, ___m_JumpPower_5)); }
	inline float get_m_JumpPower_5() const { return ___m_JumpPower_5; }
	inline float* get_address_of_m_JumpPower_5() { return &___m_JumpPower_5; }
	inline void set_m_JumpPower_5(float value)
	{
		___m_JumpPower_5 = value;
	}

	inline static int32_t get_offset_of_m_Rigidbody_7() { return static_cast<int32_t>(offsetof(Ball_t2703741877, ___m_Rigidbody_7)); }
	inline Rigidbody_t157520360 * get_m_Rigidbody_7() const { return ___m_Rigidbody_7; }
	inline Rigidbody_t157520360 ** get_address_of_m_Rigidbody_7() { return &___m_Rigidbody_7; }
	inline void set_m_Rigidbody_7(Rigidbody_t157520360 * value)
	{
		___m_Rigidbody_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_Rigidbody_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BALL_T2703741877_H


// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  RuntimeObject * Component_GetComponent_TisRuntimeObject_m3074922654_gshared (Component_t1657615590 * __this, const RuntimeMethod* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m222937151 (MonoBehaviour_t2619853198 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
#define Component_GetComponent_TisRigidbody_t157520360_m2030817405(__this, method) ((  Rigidbody_t157520360 * (*) (Component_t1657615590 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m3074922654_gshared)(__this, method)
// System.Void UnityEngine.Rigidbody::set_maxAngularVelocity(System.Single)
extern "C"  void Rigidbody_set_maxAngularVelocity_m2908191594 (Rigidbody_t157520360 * __this, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C"  void Vector3__ctor_m304208345 (Vector3_t3070238175 * __this, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t3070238175  Vector3_op_Multiply_m1656116947 (RuntimeObject * __this /* static, unused */, Vector3_t3070238175  p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::AddTorque(UnityEngine.Vector3)
extern "C"  void Rigidbody_AddTorque_m2940581070 (Rigidbody_t157520360 * __this, Vector3_t3070238175  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3)
extern "C"  void Rigidbody_AddForce_m4271119775 (Rigidbody_t157520360 * __this, Vector3_t3070238175  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C"  Transform_t1780061342 * Component_get_transform_m38154123 (Component_t1657615590 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C"  Vector3_t3070238175  Transform_get_position_m3828600496 (Transform_t1780061342 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
extern "C"  Vector3_t3070238175  Vector3_get_up_m1171008644 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
extern "C"  Vector3_t3070238175  Vector3_op_UnaryNegation_m1210950223 (RuntimeObject * __this /* static, unused */, Vector3_t3070238175  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C"  bool Physics_Raycast_m2574498950 (RuntimeObject * __this /* static, unused */, Vector3_t3070238175  p0, Vector3_t3070238175  p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3,UnityEngine.ForceMode)
extern "C"  void Rigidbody_AddForce_m34583229 (Rigidbody_t157520360 * __this, Vector3_t3070238175  p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityStandardAssets.Vehicles.Ball.Ball>()
#define Component_GetComponent_TisBall_t2703741877_m1447590629(__this, method) ((  Ball_t2703741877 * (*) (Component_t1657615590 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m3074922654_gshared)(__this, method)
// UnityEngine.Camera UnityEngine.Camera::get_main()
extern "C"  Camera_t3132456115 * Camera_get_main_m1505980616 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Inequality_m350414149 (RuntimeObject * __this /* static, unused */, Object_t2397947810 * p0, Object_t2397947810 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
extern "C"  void Debug_LogWarning_m4023375253 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetAxis(System.String)
extern "C"  float CrossPlatformInputManager_GetAxis_m624075210 (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetButton(System.String)
extern "C"  bool CrossPlatformInputManager_GetButton_m2029576006 (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
extern "C"  Vector3_t3070238175  Transform_get_forward_m1526433910 (Transform_t1780061342 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::Scale(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t3070238175  Vector3_Scale_m1596871626 (RuntimeObject * __this /* static, unused */, Vector3_t3070238175  p0, Vector3_t3070238175  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
extern "C"  Vector3_t3070238175  Vector3_get_normalized_m1038951203 (Vector3_t3070238175 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
extern "C"  Vector3_t3070238175  Vector3_op_Multiply_m727141186 (RuntimeObject * __this /* static, unused */, float p0, Vector3_t3070238175  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
extern "C"  Vector3_t3070238175  Transform_get_right_m3721253100 (Transform_t1780061342 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t3070238175  Vector3_op_Addition_m3876508232 (RuntimeObject * __this /* static, unused */, Vector3_t3070238175  p0, Vector3_t3070238175  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
extern "C"  Vector3_t3070238175  Vector3_get_forward_m1732236345 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
extern "C"  Vector3_t3070238175  Vector3_get_right_m2634882558 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Vehicles.Ball.Ball::Move(UnityEngine.Vector3,System.Boolean)
extern "C"  void Ball_Move_m2738865157 (Ball_t2703741877 * __this, Vector3_t3070238175  ___moveDirection0, bool ___jump1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityStandardAssets.Vehicles.Ball.Ball::.ctor()
extern "C"  void Ball__ctor_m1544026418 (Ball_t2703741877 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_MovePower_2((5.0f));
		__this->set_m_UseTorque_3((bool)1);
		__this->set_m_MaxAngularVelocity_4((25.0f));
		__this->set_m_JumpPower_5((2.0f));
		MonoBehaviour__ctor_m222937151(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.Vehicles.Ball.Ball::Start()
extern "C"  void Ball_Start_m2788636825 (Ball_t2703741877 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Ball_Start_m2788636825_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Rigidbody_t157520360 * L_0 = Component_GetComponent_TisRigidbody_t157520360_m2030817405(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t157520360_m2030817405_RuntimeMethod_var);
		__this->set_m_Rigidbody_7(L_0);
		Rigidbody_t157520360 * L_1 = Component_GetComponent_TisRigidbody_t157520360_m2030817405(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t157520360_m2030817405_RuntimeMethod_var);
		float L_2 = __this->get_m_MaxAngularVelocity_4();
		NullCheck(L_1);
		Rigidbody_set_maxAngularVelocity_m2908191594(L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.Vehicles.Ball.Ball::Move(UnityEngine.Vector3,System.Boolean)
extern "C"  void Ball_Move_m2738865157 (Ball_t2703741877 * __this, Vector3_t3070238175  ___moveDirection0, bool ___jump1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Ball_Move_m2738865157_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_m_UseTorque_3();
		if (!L_0)
		{
			goto IL_003f;
		}
	}
	{
		Rigidbody_t157520360 * L_1 = __this->get_m_Rigidbody_7();
		float L_2 = (&___moveDirection0)->get_z_3();
		float L_3 = (&___moveDirection0)->get_x_1();
		Vector3_t3070238175  L_4;
		memset(&L_4, 0, sizeof(L_4));
		Vector3__ctor_m304208345((&L_4), L_2, (0.0f), ((-L_3)), /*hidden argument*/NULL);
		float L_5 = __this->get_m_MovePower_2();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3070238175_il2cpp_TypeInfo_var);
		Vector3_t3070238175  L_6 = Vector3_op_Multiply_m1656116947(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		NullCheck(L_1);
		Rigidbody_AddTorque_m2940581070(L_1, L_6, /*hidden argument*/NULL);
		goto IL_0056;
	}

IL_003f:
	{
		Rigidbody_t157520360 * L_7 = __this->get_m_Rigidbody_7();
		Vector3_t3070238175  L_8 = ___moveDirection0;
		float L_9 = __this->get_m_MovePower_2();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3070238175_il2cpp_TypeInfo_var);
		Vector3_t3070238175  L_10 = Vector3_op_Multiply_m1656116947(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		NullCheck(L_7);
		Rigidbody_AddForce_m4271119775(L_7, L_10, /*hidden argument*/NULL);
	}

IL_0056:
	{
		Transform_t1780061342 * L_11 = Component_get_transform_m38154123(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		Vector3_t3070238175  L_12 = Transform_get_position_m3828600496(L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3070238175_il2cpp_TypeInfo_var);
		Vector3_t3070238175  L_13 = Vector3_get_up_m1171008644(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3070238175  L_14 = Vector3_op_UnaryNegation_m1210950223(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		bool L_15 = Physics_Raycast_m2574498950(NULL /*static, unused*/, L_12, L_14, (1.0f), /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_009c;
		}
	}
	{
		bool L_16 = ___jump1;
		if (!L_16)
		{
			goto IL_009c;
		}
	}
	{
		Rigidbody_t157520360 * L_17 = __this->get_m_Rigidbody_7();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3070238175_il2cpp_TypeInfo_var);
		Vector3_t3070238175  L_18 = Vector3_get_up_m1171008644(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_19 = __this->get_m_JumpPower_5();
		Vector3_t3070238175  L_20 = Vector3_op_Multiply_m1656116947(NULL /*static, unused*/, L_18, L_19, /*hidden argument*/NULL);
		NullCheck(L_17);
		Rigidbody_AddForce_m34583229(L_17, L_20, 1, /*hidden argument*/NULL);
	}

IL_009c:
	{
		return;
	}
}
// System.Void UnityStandardAssets.Vehicles.Ball.BallUserControl::.ctor()
extern "C"  void BallUserControl__ctor_m1043318448 (BallUserControl_t1288279154 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m222937151(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.Vehicles.Ball.BallUserControl::Awake()
extern "C"  void BallUserControl_Awake_m686649679 (BallUserControl_t1288279154 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BallUserControl_Awake_m686649679_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Ball_t2703741877 * L_0 = Component_GetComponent_TisBall_t2703741877_m1447590629(__this, /*hidden argument*/Component_GetComponent_TisBall_t2703741877_m1447590629_RuntimeMethod_var);
		__this->set_ball_2(L_0);
		Camera_t3132456115 * L_1 = Camera_get_main_m1505980616(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t2397947810_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m350414149(NULL /*static, unused*/, L_1, (Object_t2397947810 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0031;
		}
	}
	{
		Camera_t3132456115 * L_3 = Camera_get_main_m1505980616(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_t1780061342 * L_4 = Component_get_transform_m38154123(L_3, /*hidden argument*/NULL);
		__this->set_cam_4(L_4);
		goto IL_003b;
	}

IL_0031:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3943621610_il2cpp_TypeInfo_var);
		Debug_LogWarning_m4023375253(NULL /*static, unused*/, _stringLiteral2112136883, /*hidden argument*/NULL);
	}

IL_003b:
	{
		return;
	}
}
// System.Void UnityStandardAssets.Vehicles.Ball.BallUserControl::Update()
extern "C"  void BallUserControl_Update_m1263938804 (BallUserControl_t1288279154 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BallUserControl_Update_m1263938804_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t3070238175  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_t3070238175  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Vector3_t3070238175  V_4;
	memset(&V_4, 0, sizeof(V_4));
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t184322598_il2cpp_TypeInfo_var);
		float L_0 = CrossPlatformInputManager_GetAxis_m624075210(NULL /*static, unused*/, _stringLiteral1780394468, /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = CrossPlatformInputManager_GetAxis_m624075210(NULL /*static, unused*/, _stringLiteral715540782, /*hidden argument*/NULL);
		V_1 = L_1;
		bool L_2 = CrossPlatformInputManager_GetButton_m2029576006(NULL /*static, unused*/, _stringLiteral3409595850, /*hidden argument*/NULL);
		__this->set_jump_6(L_2);
		Transform_t1780061342 * L_3 = __this->get_cam_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t2397947810_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Inequality_m350414149(NULL /*static, unused*/, L_3, (Object_t2397947810 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_009e;
		}
	}
	{
		Transform_t1780061342 * L_5 = __this->get_cam_4();
		NullCheck(L_5);
		Vector3_t3070238175  L_6 = Transform_get_forward_m1526433910(L_5, /*hidden argument*/NULL);
		Vector3_t3070238175  L_7;
		memset(&L_7, 0, sizeof(L_7));
		Vector3__ctor_m304208345((&L_7), (1.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3070238175_il2cpp_TypeInfo_var);
		Vector3_t3070238175  L_8 = Vector3_Scale_m1596871626(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		V_2 = L_8;
		Vector3_t3070238175  L_9 = Vector3_get_normalized_m1038951203((&V_2), /*hidden argument*/NULL);
		__this->set_camForward_5(L_9);
		float L_10 = V_1;
		Vector3_t3070238175  L_11 = __this->get_camForward_5();
		Vector3_t3070238175  L_12 = Vector3_op_Multiply_m727141186(NULL /*static, unused*/, L_10, L_11, /*hidden argument*/NULL);
		float L_13 = V_0;
		Transform_t1780061342 * L_14 = __this->get_cam_4();
		NullCheck(L_14);
		Vector3_t3070238175  L_15 = Transform_get_right_m3721253100(L_14, /*hidden argument*/NULL);
		Vector3_t3070238175  L_16 = Vector3_op_Multiply_m727141186(NULL /*static, unused*/, L_13, L_15, /*hidden argument*/NULL);
		Vector3_t3070238175  L_17 = Vector3_op_Addition_m3876508232(NULL /*static, unused*/, L_12, L_16, /*hidden argument*/NULL);
		V_3 = L_17;
		Vector3_t3070238175  L_18 = Vector3_get_normalized_m1038951203((&V_3), /*hidden argument*/NULL);
		__this->set_move_3(L_18);
		goto IL_00c8;
	}

IL_009e:
	{
		float L_19 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3070238175_il2cpp_TypeInfo_var);
		Vector3_t3070238175  L_20 = Vector3_get_forward_m1732236345(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3070238175  L_21 = Vector3_op_Multiply_m727141186(NULL /*static, unused*/, L_19, L_20, /*hidden argument*/NULL);
		float L_22 = V_0;
		Vector3_t3070238175  L_23 = Vector3_get_right_m2634882558(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3070238175  L_24 = Vector3_op_Multiply_m727141186(NULL /*static, unused*/, L_22, L_23, /*hidden argument*/NULL);
		Vector3_t3070238175  L_25 = Vector3_op_Addition_m3876508232(NULL /*static, unused*/, L_21, L_24, /*hidden argument*/NULL);
		V_4 = L_25;
		Vector3_t3070238175  L_26 = Vector3_get_normalized_m1038951203((&V_4), /*hidden argument*/NULL);
		__this->set_move_3(L_26);
	}

IL_00c8:
	{
		return;
	}
}
// System.Void UnityStandardAssets.Vehicles.Ball.BallUserControl::FixedUpdate()
extern "C"  void BallUserControl_FixedUpdate_m2984611293 (BallUserControl_t1288279154 * __this, const RuntimeMethod* method)
{
	{
		Ball_t2703741877 * L_0 = __this->get_ball_2();
		Vector3_t3070238175  L_1 = __this->get_move_3();
		bool L_2 = __this->get_jump_6();
		NullCheck(L_0);
		Ball_Move_m2738865157(L_0, L_1, L_2, /*hidden argument*/NULL);
		__this->set_jump_6((bool)0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif

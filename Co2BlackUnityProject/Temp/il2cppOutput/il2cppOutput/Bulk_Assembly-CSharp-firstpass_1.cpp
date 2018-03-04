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
struct Ball_t4163464952;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t2271203965;
// UnityEngine.Component
struct Component_t1957192512;
// UnityEngine.Rigidbody
struct Rigidbody_t583294385;
// UnityEngine.Transform
struct Transform_t1980082724;
// UnityStandardAssets.Vehicles.Ball.BallUserControl
struct BallUserControl_t2031843756;
// UnityEngine.Camera
struct Camera_t806551009;
// UnityEngine.Object
struct Object_t4174709081;
// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t3978811185;
// System.Void
struct Void_t1307511435;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t837306771;

extern const RuntimeMethod* Component_GetComponent_TisRigidbody_t583294385_m893822349_RuntimeMethod_var;
extern const uint32_t Ball_Start_m256770362_MetadataUsageId;
extern RuntimeClass* Vector3_t291390628_il2cpp_TypeInfo_var;
extern const uint32_t Ball_Move_m3449834227_MetadataUsageId;
extern RuntimeClass* Object_t4174709081_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t1815970215_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Component_GetComponent_TisBall_t4163464952_m2882401480_RuntimeMethod_var;
extern Il2CppCodeGenString* _stringLiteral3827119917;
extern const uint32_t BallUserControl_Awake_m1246265210_MetadataUsageId;
extern RuntimeClass* CrossPlatformInputManager_t2095854187_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2966529147;
extern Il2CppCodeGenString* _stringLiteral273214632;
extern Il2CppCodeGenString* _stringLiteral1016597514;
extern const uint32_t BallUserControl_Update_m2102500323_MetadataUsageId;



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
#ifndef VALUETYPE_T1642587522_H
#define VALUETYPE_T1642587522_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t1642587522  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t1642587522_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t1642587522_marshaled_com
{
};
#endif // VALUETYPE_T1642587522_H
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
	CharU5BU5D_t3978811185* ___WhiteChars_3;

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
	inline CharU5BU5D_t3978811185* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3978811185** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3978811185* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef ENUM_T2966527543_H
#define ENUM_T2966527543_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t2966527543  : public ValueType_t1642587522
{
public:

public:
};

struct Enum_t2966527543_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3978811185* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t2966527543_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3978811185* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3978811185** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3978811185* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2966527543_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2966527543_marshaled_com
{
};
#endif // ENUM_T2966527543_H
#ifndef VECTOR3_T291390628_H
#define VECTOR3_T291390628_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t291390628 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t291390628, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t291390628, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t291390628, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t291390628_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t291390628  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t291390628  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t291390628  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t291390628  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t291390628  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t291390628  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t291390628  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t291390628  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t291390628  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t291390628  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t291390628_StaticFields, ___zeroVector_4)); }
	inline Vector3_t291390628  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t291390628 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t291390628  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t291390628_StaticFields, ___oneVector_5)); }
	inline Vector3_t291390628  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t291390628 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t291390628  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t291390628_StaticFields, ___upVector_6)); }
	inline Vector3_t291390628  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t291390628 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t291390628  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t291390628_StaticFields, ___downVector_7)); }
	inline Vector3_t291390628  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t291390628 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t291390628  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t291390628_StaticFields, ___leftVector_8)); }
	inline Vector3_t291390628  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t291390628 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t291390628  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t291390628_StaticFields, ___rightVector_9)); }
	inline Vector3_t291390628  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t291390628 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t291390628  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t291390628_StaticFields, ___forwardVector_10)); }
	inline Vector3_t291390628  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t291390628 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t291390628  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t291390628_StaticFields, ___backVector_11)); }
	inline Vector3_t291390628  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t291390628 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t291390628  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t291390628_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t291390628  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t291390628 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t291390628  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t291390628_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t291390628  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t291390628 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t291390628  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T291390628_H
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
#ifndef BOOLEAN_T1551809487_H
#define BOOLEAN_T1551809487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t1551809487 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t1551809487, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t1551809487_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t1551809487_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t1551809487_StaticFields, ___TrueString_1)); }
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
#endif // BOOLEAN_T1551809487_H
#ifndef SINGLE_T2990575018_H
#define SINGLE_T2990575018_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t2990575018 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t2990575018, ___m_value_7)); }
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
#endif // SINGLE_T2990575018_H
#ifndef VOID_T1307511435_H
#define VOID_T1307511435_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1307511435 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1307511435_H
#ifndef OBJECT_T4174709081_H
#define OBJECT_T4174709081_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t4174709081  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t4174709081, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t4174709081_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t4174709081_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
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
struct Object_t4174709081_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t4174709081_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T4174709081_H
#ifndef PROGRESSSTYLE_T3721564126_H
#define PROGRESSSTYLE_T3721564126_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.WaypointProgressTracker/ProgressStyle
struct  ProgressStyle_t3721564126 
{
public:
	// System.Int32 UnityStandardAssets.Utility.WaypointProgressTracker/ProgressStyle::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ProgressStyle_t3721564126, ___value___1)); }
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
#endif // PROGRESSSTYLE_T3721564126_H
#ifndef FORCEMODE_T1302782247_H
#define FORCEMODE_T1302782247_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ForceMode
struct  ForceMode_t1302782247 
{
public:
	// System.Int32 UnityEngine.ForceMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ForceMode_t1302782247, ___value___1)); }
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
#endif // FORCEMODE_T1302782247_H
#ifndef COMPONENT_T1957192512_H
#define COMPONENT_T1957192512_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1957192512  : public Object_t4174709081
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1957192512_H
#ifndef RIGIDBODY_T583294385_H
#define RIGIDBODY_T583294385_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rigidbody
struct  Rigidbody_t583294385  : public Component_t1957192512
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIGIDBODY_T583294385_H
#ifndef BEHAVIOUR_T2530630858_H
#define BEHAVIOUR_T2530630858_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t2530630858  : public Component_t1957192512
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T2530630858_H
#ifndef TRANSFORM_T1980082724_H
#define TRANSFORM_T1980082724_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t1980082724  : public Component_t1957192512
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T1980082724_H
#ifndef CAMERA_T806551009_H
#define CAMERA_T806551009_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Camera
struct  Camera_t806551009  : public Behaviour_t2530630858
{
public:

public:
};

struct Camera_t806551009_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t837306771 * ___onPreCull_2;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t837306771 * ___onPreRender_3;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t837306771 * ___onPostRender_4;

public:
	inline static int32_t get_offset_of_onPreCull_2() { return static_cast<int32_t>(offsetof(Camera_t806551009_StaticFields, ___onPreCull_2)); }
	inline CameraCallback_t837306771 * get_onPreCull_2() const { return ___onPreCull_2; }
	inline CameraCallback_t837306771 ** get_address_of_onPreCull_2() { return &___onPreCull_2; }
	inline void set_onPreCull_2(CameraCallback_t837306771 * value)
	{
		___onPreCull_2 = value;
		Il2CppCodeGenWriteBarrier((&___onPreCull_2), value);
	}

	inline static int32_t get_offset_of_onPreRender_3() { return static_cast<int32_t>(offsetof(Camera_t806551009_StaticFields, ___onPreRender_3)); }
	inline CameraCallback_t837306771 * get_onPreRender_3() const { return ___onPreRender_3; }
	inline CameraCallback_t837306771 ** get_address_of_onPreRender_3() { return &___onPreRender_3; }
	inline void set_onPreRender_3(CameraCallback_t837306771 * value)
	{
		___onPreRender_3 = value;
		Il2CppCodeGenWriteBarrier((&___onPreRender_3), value);
	}

	inline static int32_t get_offset_of_onPostRender_4() { return static_cast<int32_t>(offsetof(Camera_t806551009_StaticFields, ___onPostRender_4)); }
	inline CameraCallback_t837306771 * get_onPostRender_4() const { return ___onPostRender_4; }
	inline CameraCallback_t837306771 ** get_address_of_onPostRender_4() { return &___onPostRender_4; }
	inline void set_onPostRender_4(CameraCallback_t837306771 * value)
	{
		___onPostRender_4 = value;
		Il2CppCodeGenWriteBarrier((&___onPostRender_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERA_T806551009_H
#ifndef MONOBEHAVIOUR_T2271203965_H
#define MONOBEHAVIOUR_T2271203965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t2271203965  : public Behaviour_t2530630858
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T2271203965_H
#ifndef BALLUSERCONTROL_T2031843756_H
#define BALLUSERCONTROL_T2031843756_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Vehicles.Ball.BallUserControl
struct  BallUserControl_t2031843756  : public MonoBehaviour_t2271203965
{
public:
	// UnityStandardAssets.Vehicles.Ball.Ball UnityStandardAssets.Vehicles.Ball.BallUserControl::ball
	Ball_t4163464952 * ___ball_2;
	// UnityEngine.Vector3 UnityStandardAssets.Vehicles.Ball.BallUserControl::move
	Vector3_t291390628  ___move_3;
	// UnityEngine.Transform UnityStandardAssets.Vehicles.Ball.BallUserControl::cam
	Transform_t1980082724 * ___cam_4;
	// UnityEngine.Vector3 UnityStandardAssets.Vehicles.Ball.BallUserControl::camForward
	Vector3_t291390628  ___camForward_5;
	// System.Boolean UnityStandardAssets.Vehicles.Ball.BallUserControl::jump
	bool ___jump_6;

public:
	inline static int32_t get_offset_of_ball_2() { return static_cast<int32_t>(offsetof(BallUserControl_t2031843756, ___ball_2)); }
	inline Ball_t4163464952 * get_ball_2() const { return ___ball_2; }
	inline Ball_t4163464952 ** get_address_of_ball_2() { return &___ball_2; }
	inline void set_ball_2(Ball_t4163464952 * value)
	{
		___ball_2 = value;
		Il2CppCodeGenWriteBarrier((&___ball_2), value);
	}

	inline static int32_t get_offset_of_move_3() { return static_cast<int32_t>(offsetof(BallUserControl_t2031843756, ___move_3)); }
	inline Vector3_t291390628  get_move_3() const { return ___move_3; }
	inline Vector3_t291390628 * get_address_of_move_3() { return &___move_3; }
	inline void set_move_3(Vector3_t291390628  value)
	{
		___move_3 = value;
	}

	inline static int32_t get_offset_of_cam_4() { return static_cast<int32_t>(offsetof(BallUserControl_t2031843756, ___cam_4)); }
	inline Transform_t1980082724 * get_cam_4() const { return ___cam_4; }
	inline Transform_t1980082724 ** get_address_of_cam_4() { return &___cam_4; }
	inline void set_cam_4(Transform_t1980082724 * value)
	{
		___cam_4 = value;
		Il2CppCodeGenWriteBarrier((&___cam_4), value);
	}

	inline static int32_t get_offset_of_camForward_5() { return static_cast<int32_t>(offsetof(BallUserControl_t2031843756, ___camForward_5)); }
	inline Vector3_t291390628  get_camForward_5() const { return ___camForward_5; }
	inline Vector3_t291390628 * get_address_of_camForward_5() { return &___camForward_5; }
	inline void set_camForward_5(Vector3_t291390628  value)
	{
		___camForward_5 = value;
	}

	inline static int32_t get_offset_of_jump_6() { return static_cast<int32_t>(offsetof(BallUserControl_t2031843756, ___jump_6)); }
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
#endif // BALLUSERCONTROL_T2031843756_H
#ifndef BALL_T4163464952_H
#define BALL_T4163464952_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Vehicles.Ball.Ball
struct  Ball_t4163464952  : public MonoBehaviour_t2271203965
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
	Rigidbody_t583294385 * ___m_Rigidbody_7;

public:
	inline static int32_t get_offset_of_m_MovePower_2() { return static_cast<int32_t>(offsetof(Ball_t4163464952, ___m_MovePower_2)); }
	inline float get_m_MovePower_2() const { return ___m_MovePower_2; }
	inline float* get_address_of_m_MovePower_2() { return &___m_MovePower_2; }
	inline void set_m_MovePower_2(float value)
	{
		___m_MovePower_2 = value;
	}

	inline static int32_t get_offset_of_m_UseTorque_3() { return static_cast<int32_t>(offsetof(Ball_t4163464952, ___m_UseTorque_3)); }
	inline bool get_m_UseTorque_3() const { return ___m_UseTorque_3; }
	inline bool* get_address_of_m_UseTorque_3() { return &___m_UseTorque_3; }
	inline void set_m_UseTorque_3(bool value)
	{
		___m_UseTorque_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxAngularVelocity_4() { return static_cast<int32_t>(offsetof(Ball_t4163464952, ___m_MaxAngularVelocity_4)); }
	inline float get_m_MaxAngularVelocity_4() const { return ___m_MaxAngularVelocity_4; }
	inline float* get_address_of_m_MaxAngularVelocity_4() { return &___m_MaxAngularVelocity_4; }
	inline void set_m_MaxAngularVelocity_4(float value)
	{
		___m_MaxAngularVelocity_4 = value;
	}

	inline static int32_t get_offset_of_m_JumpPower_5() { return static_cast<int32_t>(offsetof(Ball_t4163464952, ___m_JumpPower_5)); }
	inline float get_m_JumpPower_5() const { return ___m_JumpPower_5; }
	inline float* get_address_of_m_JumpPower_5() { return &___m_JumpPower_5; }
	inline void set_m_JumpPower_5(float value)
	{
		___m_JumpPower_5 = value;
	}

	inline static int32_t get_offset_of_m_Rigidbody_7() { return static_cast<int32_t>(offsetof(Ball_t4163464952, ___m_Rigidbody_7)); }
	inline Rigidbody_t583294385 * get_m_Rigidbody_7() const { return ___m_Rigidbody_7; }
	inline Rigidbody_t583294385 ** get_address_of_m_Rigidbody_7() { return &___m_Rigidbody_7; }
	inline void set_m_Rigidbody_7(Rigidbody_t583294385 * value)
	{
		___m_Rigidbody_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_Rigidbody_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BALL_T4163464952_H


// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  RuntimeObject * Component_GetComponent_TisRuntimeObject_m3299107455_gshared (Component_t1957192512 * __this, const RuntimeMethod* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m3830754904 (MonoBehaviour_t2271203965 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
#define Component_GetComponent_TisRigidbody_t583294385_m893822349(__this, method) ((  Rigidbody_t583294385 * (*) (Component_t1957192512 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m3299107455_gshared)(__this, method)
// System.Void UnityEngine.Rigidbody::set_maxAngularVelocity(System.Single)
extern "C"  void Rigidbody_set_maxAngularVelocity_m1256496584 (Rigidbody_t583294385 * __this, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C"  void Vector3__ctor_m3436656091 (Vector3_t291390628 * __this, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t291390628  Vector3_op_Multiply_m2401892337 (RuntimeObject * __this /* static, unused */, Vector3_t291390628  p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::AddTorque(UnityEngine.Vector3)
extern "C"  void Rigidbody_AddTorque_m2816585621 (Rigidbody_t583294385 * __this, Vector3_t291390628  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3)
extern "C"  void Rigidbody_AddForce_m4200851839 (Rigidbody_t583294385 * __this, Vector3_t291390628  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C"  Transform_t1980082724 * Component_get_transform_m3483477522 (Component_t1957192512 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C"  Vector3_t291390628  Transform_get_position_m1964922411 (Transform_t1980082724 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
extern "C"  Vector3_t291390628  Vector3_get_up_m2253097744 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
extern "C"  Vector3_t291390628  Vector3_op_UnaryNegation_m1840099151 (RuntimeObject * __this /* static, unused */, Vector3_t291390628  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C"  bool Physics_Raycast_m1981025576 (RuntimeObject * __this /* static, unused */, Vector3_t291390628  p0, Vector3_t291390628  p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3,UnityEngine.ForceMode)
extern "C"  void Rigidbody_AddForce_m1675408389 (Rigidbody_t583294385 * __this, Vector3_t291390628  p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityStandardAssets.Vehicles.Ball.Ball>()
#define Component_GetComponent_TisBall_t4163464952_m2882401480(__this, method) ((  Ball_t4163464952 * (*) (Component_t1957192512 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m3299107455_gshared)(__this, method)
// UnityEngine.Camera UnityEngine.Camera::get_main()
extern "C"  Camera_t806551009 * Camera_get_main_m3540026161 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Inequality_m3602272515 (RuntimeObject * __this /* static, unused */, Object_t4174709081 * p0, Object_t4174709081 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
extern "C"  void Debug_LogWarning_m2193758856 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetAxis(System.String)
extern "C"  float CrossPlatformInputManager_GetAxis_m688424935 (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetButton(System.String)
extern "C"  bool CrossPlatformInputManager_GetButton_m2434636568 (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
extern "C"  Vector3_t291390628  Transform_get_forward_m2231575548 (Transform_t1980082724 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::Scale(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t291390628  Vector3_Scale_m769856119 (RuntimeObject * __this /* static, unused */, Vector3_t291390628  p0, Vector3_t291390628  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
extern "C"  Vector3_t291390628  Vector3_get_normalized_m3162548532 (Vector3_t291390628 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
extern "C"  Vector3_t291390628  Vector3_op_Multiply_m3827220810 (RuntimeObject * __this /* static, unused */, float p0, Vector3_t291390628  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
extern "C"  Vector3_t291390628  Transform_get_right_m2682607266 (Transform_t1980082724 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t291390628  Vector3_op_Addition_m3215421364 (RuntimeObject * __this /* static, unused */, Vector3_t291390628  p0, Vector3_t291390628  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
extern "C"  Vector3_t291390628  Vector3_get_forward_m916826421 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
extern "C"  Vector3_t291390628  Vector3_get_right_m2026391926 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Vehicles.Ball.Ball::Move(UnityEngine.Vector3,System.Boolean)
extern "C"  void Ball_Move_m3449834227 (Ball_t4163464952 * __this, Vector3_t291390628  ___moveDirection0, bool ___jump1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityStandardAssets.Vehicles.Ball.Ball::.ctor()
extern "C"  void Ball__ctor_m3700144898 (Ball_t4163464952 * __this, const RuntimeMethod* method)
{
	{
		__this->set_m_MovePower_2((5.0f));
		__this->set_m_UseTorque_3((bool)1);
		__this->set_m_MaxAngularVelocity_4((25.0f));
		__this->set_m_JumpPower_5((2.0f));
		MonoBehaviour__ctor_m3830754904(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.Vehicles.Ball.Ball::Start()
extern "C"  void Ball_Start_m256770362 (Ball_t4163464952 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Ball_Start_m256770362_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Rigidbody_t583294385 * L_0 = Component_GetComponent_TisRigidbody_t583294385_m893822349(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t583294385_m893822349_RuntimeMethod_var);
		__this->set_m_Rigidbody_7(L_0);
		Rigidbody_t583294385 * L_1 = Component_GetComponent_TisRigidbody_t583294385_m893822349(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t583294385_m893822349_RuntimeMethod_var);
		float L_2 = __this->get_m_MaxAngularVelocity_4();
		NullCheck(L_1);
		Rigidbody_set_maxAngularVelocity_m1256496584(L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.Vehicles.Ball.Ball::Move(UnityEngine.Vector3,System.Boolean)
extern "C"  void Ball_Move_m3449834227 (Ball_t4163464952 * __this, Vector3_t291390628  ___moveDirection0, bool ___jump1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Ball_Move_m3449834227_MetadataUsageId);
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
		Rigidbody_t583294385 * L_1 = __this->get_m_Rigidbody_7();
		float L_2 = (&___moveDirection0)->get_z_3();
		float L_3 = (&___moveDirection0)->get_x_1();
		Vector3_t291390628  L_4;
		memset(&L_4, 0, sizeof(L_4));
		Vector3__ctor_m3436656091((&L_4), L_2, (0.0f), ((-L_3)), /*hidden argument*/NULL);
		float L_5 = __this->get_m_MovePower_2();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t291390628_il2cpp_TypeInfo_var);
		Vector3_t291390628  L_6 = Vector3_op_Multiply_m2401892337(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		NullCheck(L_1);
		Rigidbody_AddTorque_m2816585621(L_1, L_6, /*hidden argument*/NULL);
		goto IL_0056;
	}

IL_003f:
	{
		Rigidbody_t583294385 * L_7 = __this->get_m_Rigidbody_7();
		Vector3_t291390628  L_8 = ___moveDirection0;
		float L_9 = __this->get_m_MovePower_2();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t291390628_il2cpp_TypeInfo_var);
		Vector3_t291390628  L_10 = Vector3_op_Multiply_m2401892337(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		NullCheck(L_7);
		Rigidbody_AddForce_m4200851839(L_7, L_10, /*hidden argument*/NULL);
	}

IL_0056:
	{
		Transform_t1980082724 * L_11 = Component_get_transform_m3483477522(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		Vector3_t291390628  L_12 = Transform_get_position_m1964922411(L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t291390628_il2cpp_TypeInfo_var);
		Vector3_t291390628  L_13 = Vector3_get_up_m2253097744(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t291390628  L_14 = Vector3_op_UnaryNegation_m1840099151(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		bool L_15 = Physics_Raycast_m1981025576(NULL /*static, unused*/, L_12, L_14, (1.0f), /*hidden argument*/NULL);
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
		Rigidbody_t583294385 * L_17 = __this->get_m_Rigidbody_7();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t291390628_il2cpp_TypeInfo_var);
		Vector3_t291390628  L_18 = Vector3_get_up_m2253097744(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_19 = __this->get_m_JumpPower_5();
		Vector3_t291390628  L_20 = Vector3_op_Multiply_m2401892337(NULL /*static, unused*/, L_18, L_19, /*hidden argument*/NULL);
		NullCheck(L_17);
		Rigidbody_AddForce_m1675408389(L_17, L_20, 1, /*hidden argument*/NULL);
	}

IL_009c:
	{
		return;
	}
}
// System.Void UnityStandardAssets.Vehicles.Ball.BallUserControl::.ctor()
extern "C"  void BallUserControl__ctor_m2485305011 (BallUserControl_t2031843756 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m3830754904(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.Vehicles.Ball.BallUserControl::Awake()
extern "C"  void BallUserControl_Awake_m1246265210 (BallUserControl_t2031843756 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BallUserControl_Awake_m1246265210_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Ball_t4163464952 * L_0 = Component_GetComponent_TisBall_t4163464952_m2882401480(__this, /*hidden argument*/Component_GetComponent_TisBall_t4163464952_m2882401480_RuntimeMethod_var);
		__this->set_ball_2(L_0);
		Camera_t806551009 * L_1 = Camera_get_main_m3540026161(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t4174709081_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m3602272515(NULL /*static, unused*/, L_1, (Object_t4174709081 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0031;
		}
	}
	{
		Camera_t806551009 * L_3 = Camera_get_main_m3540026161(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_t1980082724 * L_4 = Component_get_transform_m3483477522(L_3, /*hidden argument*/NULL);
		__this->set_cam_4(L_4);
		goto IL_003b;
	}

IL_0031:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t1815970215_il2cpp_TypeInfo_var);
		Debug_LogWarning_m2193758856(NULL /*static, unused*/, _stringLiteral3827119917, /*hidden argument*/NULL);
	}

IL_003b:
	{
		return;
	}
}
// System.Void UnityStandardAssets.Vehicles.Ball.BallUserControl::Update()
extern "C"  void BallUserControl_Update_m2102500323 (BallUserControl_t2031843756 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BallUserControl_Update_m2102500323_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t291390628  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_t291390628  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Vector3_t291390628  V_4;
	memset(&V_4, 0, sizeof(V_4));
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t2095854187_il2cpp_TypeInfo_var);
		float L_0 = CrossPlatformInputManager_GetAxis_m688424935(NULL /*static, unused*/, _stringLiteral2966529147, /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = CrossPlatformInputManager_GetAxis_m688424935(NULL /*static, unused*/, _stringLiteral273214632, /*hidden argument*/NULL);
		V_1 = L_1;
		bool L_2 = CrossPlatformInputManager_GetButton_m2434636568(NULL /*static, unused*/, _stringLiteral1016597514, /*hidden argument*/NULL);
		__this->set_jump_6(L_2);
		Transform_t1980082724 * L_3 = __this->get_cam_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t4174709081_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Inequality_m3602272515(NULL /*static, unused*/, L_3, (Object_t4174709081 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_009e;
		}
	}
	{
		Transform_t1980082724 * L_5 = __this->get_cam_4();
		NullCheck(L_5);
		Vector3_t291390628  L_6 = Transform_get_forward_m2231575548(L_5, /*hidden argument*/NULL);
		Vector3_t291390628  L_7;
		memset(&L_7, 0, sizeof(L_7));
		Vector3__ctor_m3436656091((&L_7), (1.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t291390628_il2cpp_TypeInfo_var);
		Vector3_t291390628  L_8 = Vector3_Scale_m769856119(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		V_2 = L_8;
		Vector3_t291390628  L_9 = Vector3_get_normalized_m3162548532((&V_2), /*hidden argument*/NULL);
		__this->set_camForward_5(L_9);
		float L_10 = V_1;
		Vector3_t291390628  L_11 = __this->get_camForward_5();
		Vector3_t291390628  L_12 = Vector3_op_Multiply_m3827220810(NULL /*static, unused*/, L_10, L_11, /*hidden argument*/NULL);
		float L_13 = V_0;
		Transform_t1980082724 * L_14 = __this->get_cam_4();
		NullCheck(L_14);
		Vector3_t291390628  L_15 = Transform_get_right_m2682607266(L_14, /*hidden argument*/NULL);
		Vector3_t291390628  L_16 = Vector3_op_Multiply_m3827220810(NULL /*static, unused*/, L_13, L_15, /*hidden argument*/NULL);
		Vector3_t291390628  L_17 = Vector3_op_Addition_m3215421364(NULL /*static, unused*/, L_12, L_16, /*hidden argument*/NULL);
		V_3 = L_17;
		Vector3_t291390628  L_18 = Vector3_get_normalized_m3162548532((&V_3), /*hidden argument*/NULL);
		__this->set_move_3(L_18);
		goto IL_00c8;
	}

IL_009e:
	{
		float L_19 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t291390628_il2cpp_TypeInfo_var);
		Vector3_t291390628  L_20 = Vector3_get_forward_m916826421(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t291390628  L_21 = Vector3_op_Multiply_m3827220810(NULL /*static, unused*/, L_19, L_20, /*hidden argument*/NULL);
		float L_22 = V_0;
		Vector3_t291390628  L_23 = Vector3_get_right_m2026391926(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t291390628  L_24 = Vector3_op_Multiply_m3827220810(NULL /*static, unused*/, L_22, L_23, /*hidden argument*/NULL);
		Vector3_t291390628  L_25 = Vector3_op_Addition_m3215421364(NULL /*static, unused*/, L_21, L_24, /*hidden argument*/NULL);
		V_4 = L_25;
		Vector3_t291390628  L_26 = Vector3_get_normalized_m3162548532((&V_4), /*hidden argument*/NULL);
		__this->set_move_3(L_26);
	}

IL_00c8:
	{
		return;
	}
}
// System.Void UnityStandardAssets.Vehicles.Ball.BallUserControl::FixedUpdate()
extern "C"  void BallUserControl_FixedUpdate_m3673952656 (BallUserControl_t2031843756 * __this, const RuntimeMethod* method)
{
	{
		Ball_t4163464952 * L_0 = __this->get_ball_2();
		Vector3_t291390628  L_1 = __this->get_move_3();
		bool L_2 = __this->get_jump_6();
		NullCheck(L_0);
		Ball_Move_m3449834227(L_0, L_1, L_2, /*hidden argument*/NULL);
		__this->set_jump_6((bool)0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif

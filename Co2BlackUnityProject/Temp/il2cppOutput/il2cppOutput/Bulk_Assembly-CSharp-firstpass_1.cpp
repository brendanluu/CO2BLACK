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
<<<<<<< HEAD
struct Ball_t2960981830;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t1754174423;
// UnityEngine.Component
struct Component_t1738686692;
// UnityEngine.Rigidbody
struct Rigidbody_t1480752739;
// UnityEngine.Transform
struct Transform_t2704483035;
// UnityStandardAssets.Vehicles.Ball.BallUserControl
struct BallUserControl_t3838849947;
// UnityEngine.Camera
struct Camera_t3459982980;
// UnityEngine.Object
struct Object_t2002357940;
// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t3928129731;
// System.Void
struct Void_t2682914905;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t2177992208;

extern const RuntimeMethod* Component_GetComponent_TisRigidbody_t1480752739_m147160589_RuntimeMethod_var;
extern const uint32_t Ball_Start_m2444680342_MetadataUsageId;
extern RuntimeClass* Vector3_t3940485_il2cpp_TypeInfo_var;
extern const uint32_t Ball_Move_m1867944823_MetadataUsageId;
extern RuntimeClass* Object_t2002357940_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t3177662366_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Component_GetComponent_TisBall_t2960981830_m2145107195_RuntimeMethod_var;
extern Il2CppCodeGenString* _stringLiteral1300392510;
extern const uint32_t BallUserControl_Awake_m702952942_MetadataUsageId;
extern RuntimeClass* CrossPlatformInputManager_t3880992450_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral169882546;
extern Il2CppCodeGenString* _stringLiteral2483698812;
extern Il2CppCodeGenString* _stringLiteral2224968032;
extern const uint32_t BallUserControl_Update_m772385050_MetadataUsageId;
=======
struct Ball_t763040781;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t1158329972;
// UnityEngine.Component
struct Component_t3819376471;
// UnityEngine.Rigidbody
struct Rigidbody_t4233889191;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityStandardAssets.Vehicles.Ball.BallUserControl
struct BallUserControl_t2040797921;
// UnityEngine.Camera
struct Camera_t189460977;
// UnityEngine.Object
struct Object_t1021602117;
// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t1328083999;
// System.Void
struct Void_t1841601450;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t834278767;

extern const RuntimeMethod* Component_GetComponent_TisRigidbody_t4233889191_m520013213_RuntimeMethod_var;
extern const uint32_t Ball_Start_m270734371_MetadataUsageId;
extern RuntimeClass* Vector3_t2243707580_il2cpp_TypeInfo_var;
extern const uint32_t Ball_Move_m1287008038_MetadataUsageId;
extern RuntimeClass* Object_t1021602117_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t1368543263_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Component_GetComponent_TisBall_t763040781_m1805461147_RuntimeMethod_var;
extern Il2CppCodeGenString* _stringLiteral847144784;
extern const uint32_t BallUserControl_Awake_m4216224384_MetadataUsageId;
extern RuntimeClass* CrossPlatformInputManager_t1746754562_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral855845486;
extern Il2CppCodeGenString* _stringLiteral1635882288;
extern Il2CppCodeGenString* _stringLiteral842948034;
extern const uint32_t BallUserControl_Update_m1471660078_MetadataUsageId;
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a



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
<<<<<<< HEAD
#ifndef VALUETYPE_T3693359752_H
#define VALUETYPE_T3693359752_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3693359752  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3693359752_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3693359752_marshaled_com
{
};
#endif // VALUETYPE_T3693359752_H
=======
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a
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
<<<<<<< HEAD
	CharU5BU5D_t3928129731* ___WhiteChars_3;
=======
	CharU5BU5D_t1328083999* ___WhiteChars_3;
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a

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
<<<<<<< HEAD
	inline CharU5BU5D_t3928129731* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3928129731** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3928129731* value)
=======
	inline CharU5BU5D_t1328083999* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t1328083999** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t1328083999* value)
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
<<<<<<< HEAD
#ifndef ENUM_T2725998971_H
#define ENUM_T2725998971_H
=======
#ifndef VALUETYPE_T3507792607_H
#define VALUETYPE_T3507792607_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3507792607  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3507792607_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3507792607_marshaled_com
{
};
#endif // VALUETYPE_T3507792607_H
#ifndef ENUM_T2459695545_H
#define ENUM_T2459695545_H
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
<<<<<<< HEAD
struct  Enum_t2725998971  : public ValueType_t3693359752
=======
struct  Enum_t2459695545  : public ValueType_t3507792607
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a
{
public:

public:
};

<<<<<<< HEAD
struct Enum_t2725998971_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3928129731* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t2725998971_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3928129731* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3928129731** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3928129731* value)
=======
struct Enum_t2459695545_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t1328083999* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t2459695545_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t1328083999* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t1328083999** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t1328083999* value)
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
<<<<<<< HEAD
struct Enum_t2725998971_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2725998971_marshaled_com
=======
struct Enum_t2459695545_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2459695545_marshaled_com
{
};
#endif // ENUM_T2459695545_H
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
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a
{
};
<<<<<<< HEAD
#endif // ENUM_T2725998971_H
#ifndef VECTOR3_T3940485_H
#define VECTOR3_T3940485_H
=======

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef VECTOR3_T2243707580_H
#define VECTOR3_T2243707580_H
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
<<<<<<< HEAD
struct  Vector3_t3940485 
=======
struct  Vector3_t2243707580 
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
<<<<<<< HEAD
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t3940485, ___x_1)); }
=======
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t2243707580, ___x_1)); }
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

<<<<<<< HEAD
	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t3940485, ___y_2)); }
=======
	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t2243707580, ___y_2)); }
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

<<<<<<< HEAD
	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t3940485, ___z_3)); }
=======
	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t2243707580, ___z_3)); }
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

<<<<<<< HEAD
struct Vector3_t3940485_StaticFields
=======
struct Vector3_t2243707580_StaticFields
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3940485  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3940485  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3940485  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3940485  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3940485  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3940485  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3940485  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3940485  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3940485  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3940485  ___negativeInfinityVector_13;

public:
<<<<<<< HEAD
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t3940485_StaticFields, ___zeroVector_4)); }
	inline Vector3_t3940485  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t3940485 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t3940485  value)
=======
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___zeroVector_4)); }
	inline Vector3_t2243707580  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t2243707580 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t2243707580  value)
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a
	{
		___zeroVector_4 = value;
	}

<<<<<<< HEAD
	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3940485_StaticFields, ___oneVector_5)); }
	inline Vector3_t3940485  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t3940485 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t3940485  value)
=======
	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___oneVector_5)); }
	inline Vector3_t2243707580  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t2243707580 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t2243707580  value)
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a
	{
		___oneVector_5 = value;
	}

<<<<<<< HEAD
	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3940485_StaticFields, ___upVector_6)); }
	inline Vector3_t3940485  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t3940485 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t3940485  value)
=======
	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___upVector_6)); }
	inline Vector3_t2243707580  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t2243707580 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t2243707580  value)
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a
	{
		___upVector_6 = value;
	}

<<<<<<< HEAD
	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3940485_StaticFields, ___downVector_7)); }
	inline Vector3_t3940485  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t3940485 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t3940485  value)
=======
	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___downVector_7)); }
	inline Vector3_t2243707580  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t2243707580 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t2243707580  value)
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a
	{
		___downVector_7 = value;
	}

<<<<<<< HEAD
	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3940485_StaticFields, ___leftVector_8)); }
	inline Vector3_t3940485  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t3940485 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t3940485  value)
=======
	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___leftVector_8)); }
	inline Vector3_t2243707580  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t2243707580 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t2243707580  value)
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a
	{
		___leftVector_8 = value;
	}

<<<<<<< HEAD
	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3940485_StaticFields, ___rightVector_9)); }
	inline Vector3_t3940485  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t3940485 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t3940485  value)
=======
	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___rightVector_9)); }
	inline Vector3_t2243707580  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t2243707580 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t2243707580  value)
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a
	{
		___rightVector_9 = value;
	}

<<<<<<< HEAD
	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3940485_StaticFields, ___forwardVector_10)); }
	inline Vector3_t3940485  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t3940485 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t3940485  value)
=======
	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___forwardVector_10)); }
	inline Vector3_t2243707580  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t2243707580 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t2243707580  value)
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a
	{
		___forwardVector_10 = value;
	}

<<<<<<< HEAD
	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3940485_StaticFields, ___backVector_11)); }
	inline Vector3_t3940485  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t3940485 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t3940485  value)
=======
	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___backVector_11)); }
	inline Vector3_t2243707580  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t2243707580 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t2243707580  value)
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a
	{
		___backVector_11 = value;
	}

<<<<<<< HEAD
	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3940485_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t3940485  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t3940485 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t3940485  value)
=======
	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t2243707580  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t2243707580 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t2243707580  value)
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a
	{
		___positiveInfinityVector_12 = value;
	}

<<<<<<< HEAD
	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3940485_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t3940485  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t3940485 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t3940485  value)
=======
	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t2243707580  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t2243707580 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t2243707580  value)
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // VECTOR3_T3940485_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
=======
#endif // VECTOR3_T2243707580_H
#ifndef VOID_T1841601450_H
#define VOID_T1841601450_H
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
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
=======
// System.Void
struct  Void_t1841601450 
{
public:

public:
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // INTPTR_T_H
#ifndef BOOLEAN_T4248761647_H
#define BOOLEAN_T4248761647_H
=======
#endif // VOID_T1841601450_H
#ifndef BOOLEAN_T3825574718_H
#define BOOLEAN_T3825574718_H
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
<<<<<<< HEAD
struct  Boolean_t4248761647 
=======
struct  Boolean_t3825574718 
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
<<<<<<< HEAD
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t4248761647, ___m_value_2)); }
=======
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t3825574718, ___m_value_2)); }
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

<<<<<<< HEAD
struct Boolean_t4248761647_StaticFields
=======
struct Boolean_t3825574718_StaticFields
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
<<<<<<< HEAD
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t4248761647_StaticFields, ___FalseString_0)); }
=======
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t3825574718_StaticFields, ___FalseString_0)); }
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

<<<<<<< HEAD
	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t4248761647_StaticFields, ___TrueString_1)); }
=======
	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t3825574718_StaticFields, ___TrueString_1)); }
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a
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
<<<<<<< HEAD
#endif // BOOLEAN_T4248761647_H
#ifndef SINGLE_T2130586693_H
#define SINGLE_T2130586693_H
=======
#endif // BOOLEAN_T3825574718_H
#ifndef SINGLE_T2076509932_H
#define SINGLE_T2076509932_H
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
<<<<<<< HEAD
struct  Single_t2130586693 
=======
struct  Single_t2076509932 
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
<<<<<<< HEAD
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t2130586693, ___m_value_7)); }
=======
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t2076509932, ___m_value_7)); }
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a
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
<<<<<<< HEAD
#endif // SINGLE_T2130586693_H
#ifndef VOID_T2682914905_H
#define VOID_T2682914905_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t2682914905 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T2682914905_H
#ifndef OBJECT_T2002357940_H
#define OBJECT_T2002357940_H
=======
#endif // SINGLE_T2076509932_H
#ifndef OBJECT_T1021602117_H
#define OBJECT_T1021602117_H
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
<<<<<<< HEAD
struct  Object_t2002357940  : public RuntimeObject
=======
struct  Object_t1021602117  : public RuntimeObject
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
<<<<<<< HEAD
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t2002357940, ___m_CachedPtr_0)); }
=======
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t1021602117, ___m_CachedPtr_0)); }
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

<<<<<<< HEAD
struct Object_t2002357940_StaticFields
=======
struct Object_t1021602117_StaticFields
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
<<<<<<< HEAD
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t2002357940_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
=======
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t1021602117_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a
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
<<<<<<< HEAD
struct Object_t2002357940_marshaled_pinvoke
=======
struct Object_t1021602117_marshaled_pinvoke
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
<<<<<<< HEAD
struct Object_t2002357940_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T2002357940_H
#ifndef PROGRESSSTYLE_T3235617665_H
#define PROGRESSSTYLE_T3235617665_H
=======
struct Object_t1021602117_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T1021602117_H
#ifndef PROGRESSSTYLE_T1659392090_H
#define PROGRESSSTYLE_T1659392090_H
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.WaypointProgressTracker/ProgressStyle
<<<<<<< HEAD
struct  ProgressStyle_t3235617665 
=======
struct  ProgressStyle_t1659392090 
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a
{
public:
	// System.Int32 UnityStandardAssets.Utility.WaypointProgressTracker/ProgressStyle::value__
	int32_t ___value___1;

public:
<<<<<<< HEAD
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ProgressStyle_t3235617665, ___value___1)); }
=======
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ProgressStyle_t1659392090, ___value___1)); }
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a
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
<<<<<<< HEAD
#endif // PROGRESSSTYLE_T3235617665_H
#ifndef FORCEMODE_T1261695009_H
#define FORCEMODE_T1261695009_H
=======
#endif // PROGRESSSTYLE_T1659392090_H
#ifndef FORCEMODE_T1856518252_H
#define FORCEMODE_T1856518252_H
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ForceMode
<<<<<<< HEAD
struct  ForceMode_t1261695009 
=======
struct  ForceMode_t1856518252 
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a
{
public:
	// System.Int32 UnityEngine.ForceMode::value__
	int32_t ___value___1;

public:
<<<<<<< HEAD
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ForceMode_t1261695009, ___value___1)); }
=======
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ForceMode_t1856518252, ___value___1)); }
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a
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
<<<<<<< HEAD
#endif // FORCEMODE_T1261695009_H
#ifndef COMPONENT_T1738686692_H
#define COMPONENT_T1738686692_H
=======
#endif // FORCEMODE_T1856518252_H
#ifndef COMPONENT_T3819376471_H
#define COMPONENT_T3819376471_H
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
<<<<<<< HEAD
struct  Component_t1738686692  : public Object_t2002357940
=======
struct  Component_t3819376471  : public Object_t1021602117
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // COMPONENT_T1738686692_H
#ifndef RIGIDBODY_T1480752739_H
#define RIGIDBODY_T1480752739_H
=======
#endif // COMPONENT_T3819376471_H
#ifndef BEHAVIOUR_T955675639_H
#define BEHAVIOUR_T955675639_H
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// UnityEngine.Rigidbody
struct  Rigidbody_t1480752739  : public Component_t1738686692
=======
// UnityEngine.Behaviour
struct  Behaviour_t955675639  : public Component_t3819376471
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // RIGIDBODY_T1480752739_H
#ifndef BEHAVIOUR_T4089493227_H
#define BEHAVIOUR_T4089493227_H
=======
#endif // BEHAVIOUR_T955675639_H
#ifndef RIGIDBODY_T4233889191_H
#define RIGIDBODY_T4233889191_H
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// UnityEngine.Behaviour
struct  Behaviour_t4089493227  : public Component_t1738686692
=======
// UnityEngine.Rigidbody
struct  Rigidbody_t4233889191  : public Component_t3819376471
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // BEHAVIOUR_T4089493227_H
#ifndef TRANSFORM_T2704483035_H
#define TRANSFORM_T2704483035_H
=======
#endif // RIGIDBODY_T4233889191_H
#ifndef TRANSFORM_T3275118058_H
#define TRANSFORM_T3275118058_H
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
<<<<<<< HEAD
struct  Transform_t2704483035  : public Component_t1738686692
=======
struct  Transform_t3275118058  : public Component_t3819376471
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // TRANSFORM_T2704483035_H
#ifndef CAMERA_T3459982980_H
#define CAMERA_T3459982980_H
=======
#endif // TRANSFORM_T3275118058_H
#ifndef CAMERA_T189460977_H
#define CAMERA_T189460977_H
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Camera
<<<<<<< HEAD
struct  Camera_t3459982980  : public Behaviour_t4089493227
=======
struct  Camera_t189460977  : public Behaviour_t955675639
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a
{
public:

public:
};

<<<<<<< HEAD
struct Camera_t3459982980_StaticFields
=======
struct Camera_t189460977_StaticFields
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t2177992208 * ___onPreCull_2;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t2177992208 * ___onPreRender_3;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t2177992208 * ___onPostRender_4;

public:
<<<<<<< HEAD
	inline static int32_t get_offset_of_onPreCull_2() { return static_cast<int32_t>(offsetof(Camera_t3459982980_StaticFields, ___onPreCull_2)); }
	inline CameraCallback_t2177992208 * get_onPreCull_2() const { return ___onPreCull_2; }
	inline CameraCallback_t2177992208 ** get_address_of_onPreCull_2() { return &___onPreCull_2; }
	inline void set_onPreCull_2(CameraCallback_t2177992208 * value)
=======
	inline static int32_t get_offset_of_onPreCull_2() { return static_cast<int32_t>(offsetof(Camera_t189460977_StaticFields, ___onPreCull_2)); }
	inline CameraCallback_t834278767 * get_onPreCull_2() const { return ___onPreCull_2; }
	inline CameraCallback_t834278767 ** get_address_of_onPreCull_2() { return &___onPreCull_2; }
	inline void set_onPreCull_2(CameraCallback_t834278767 * value)
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a
	{
		___onPreCull_2 = value;
		Il2CppCodeGenWriteBarrier((&___onPreCull_2), value);
	}

<<<<<<< HEAD
	inline static int32_t get_offset_of_onPreRender_3() { return static_cast<int32_t>(offsetof(Camera_t3459982980_StaticFields, ___onPreRender_3)); }
	inline CameraCallback_t2177992208 * get_onPreRender_3() const { return ___onPreRender_3; }
	inline CameraCallback_t2177992208 ** get_address_of_onPreRender_3() { return &___onPreRender_3; }
	inline void set_onPreRender_3(CameraCallback_t2177992208 * value)
=======
	inline static int32_t get_offset_of_onPreRender_3() { return static_cast<int32_t>(offsetof(Camera_t189460977_StaticFields, ___onPreRender_3)); }
	inline CameraCallback_t834278767 * get_onPreRender_3() const { return ___onPreRender_3; }
	inline CameraCallback_t834278767 ** get_address_of_onPreRender_3() { return &___onPreRender_3; }
	inline void set_onPreRender_3(CameraCallback_t834278767 * value)
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a
	{
		___onPreRender_3 = value;
		Il2CppCodeGenWriteBarrier((&___onPreRender_3), value);
	}

<<<<<<< HEAD
	inline static int32_t get_offset_of_onPostRender_4() { return static_cast<int32_t>(offsetof(Camera_t3459982980_StaticFields, ___onPostRender_4)); }
	inline CameraCallback_t2177992208 * get_onPostRender_4() const { return ___onPostRender_4; }
	inline CameraCallback_t2177992208 ** get_address_of_onPostRender_4() { return &___onPostRender_4; }
	inline void set_onPostRender_4(CameraCallback_t2177992208 * value)
=======
	inline static int32_t get_offset_of_onPostRender_4() { return static_cast<int32_t>(offsetof(Camera_t189460977_StaticFields, ___onPostRender_4)); }
	inline CameraCallback_t834278767 * get_onPostRender_4() const { return ___onPostRender_4; }
	inline CameraCallback_t834278767 ** get_address_of_onPostRender_4() { return &___onPostRender_4; }
	inline void set_onPostRender_4(CameraCallback_t834278767 * value)
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a
	{
		___onPostRender_4 = value;
		Il2CppCodeGenWriteBarrier((&___onPostRender_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // CAMERA_T3459982980_H
#ifndef MONOBEHAVIOUR_T1754174423_H
#define MONOBEHAVIOUR_T1754174423_H
=======
#endif // CAMERA_T189460977_H
#ifndef MONOBEHAVIOUR_T1158329972_H
#define MONOBEHAVIOUR_T1158329972_H
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
<<<<<<< HEAD
struct  MonoBehaviour_t1754174423  : public Behaviour_t4089493227
=======
struct  MonoBehaviour_t1158329972  : public Behaviour_t955675639
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // MONOBEHAVIOUR_T1754174423_H
#ifndef BALLUSERCONTROL_T3838849947_H
#define BALLUSERCONTROL_T3838849947_H
=======
#endif // MONOBEHAVIOUR_T1158329972_H
#ifndef BALL_T763040781_H
#define BALL_T763040781_H
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// UnityStandardAssets.Vehicles.Ball.BallUserControl
struct  BallUserControl_t3838849947  : public MonoBehaviour_t1754174423
{
public:
	// UnityStandardAssets.Vehicles.Ball.Ball UnityStandardAssets.Vehicles.Ball.BallUserControl::ball
	Ball_t2960981830 * ___ball_2;
	// UnityEngine.Vector3 UnityStandardAssets.Vehicles.Ball.BallUserControl::move
	Vector3_t3940485  ___move_3;
	// UnityEngine.Transform UnityStandardAssets.Vehicles.Ball.BallUserControl::cam
	Transform_t2704483035 * ___cam_4;
	// UnityEngine.Vector3 UnityStandardAssets.Vehicles.Ball.BallUserControl::camForward
	Vector3_t3940485  ___camForward_5;
	// System.Boolean UnityStandardAssets.Vehicles.Ball.BallUserControl::jump
	bool ___jump_6;

public:
	inline static int32_t get_offset_of_ball_2() { return static_cast<int32_t>(offsetof(BallUserControl_t3838849947, ___ball_2)); }
	inline Ball_t2960981830 * get_ball_2() const { return ___ball_2; }
	inline Ball_t2960981830 ** get_address_of_ball_2() { return &___ball_2; }
	inline void set_ball_2(Ball_t2960981830 * value)
	{
		___ball_2 = value;
		Il2CppCodeGenWriteBarrier((&___ball_2), value);
	}

	inline static int32_t get_offset_of_move_3() { return static_cast<int32_t>(offsetof(BallUserControl_t3838849947, ___move_3)); }
	inline Vector3_t3940485  get_move_3() const { return ___move_3; }
	inline Vector3_t3940485 * get_address_of_move_3() { return &___move_3; }
	inline void set_move_3(Vector3_t3940485  value)
	{
		___move_3 = value;
	}

	inline static int32_t get_offset_of_cam_4() { return static_cast<int32_t>(offsetof(BallUserControl_t3838849947, ___cam_4)); }
	inline Transform_t2704483035 * get_cam_4() const { return ___cam_4; }
	inline Transform_t2704483035 ** get_address_of_cam_4() { return &___cam_4; }
	inline void set_cam_4(Transform_t2704483035 * value)
	{
		___cam_4 = value;
		Il2CppCodeGenWriteBarrier((&___cam_4), value);
	}

	inline static int32_t get_offset_of_camForward_5() { return static_cast<int32_t>(offsetof(BallUserControl_t3838849947, ___camForward_5)); }
	inline Vector3_t3940485  get_camForward_5() const { return ___camForward_5; }
	inline Vector3_t3940485 * get_address_of_camForward_5() { return &___camForward_5; }
	inline void set_camForward_5(Vector3_t3940485  value)
	{
		___camForward_5 = value;
	}

	inline static int32_t get_offset_of_jump_6() { return static_cast<int32_t>(offsetof(BallUserControl_t3838849947, ___jump_6)); }
	inline bool get_jump_6() const { return ___jump_6; }
	inline bool* get_address_of_jump_6() { return &___jump_6; }
	inline void set_jump_6(bool value)
	{
		___jump_6 = value;
=======
// UnityStandardAssets.Vehicles.Ball.Ball
struct  Ball_t763040781  : public MonoBehaviour_t1158329972
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
	Rigidbody_t4233889191 * ___m_Rigidbody_7;

public:
	inline static int32_t get_offset_of_m_MovePower_2() { return static_cast<int32_t>(offsetof(Ball_t763040781, ___m_MovePower_2)); }
	inline float get_m_MovePower_2() const { return ___m_MovePower_2; }
	inline float* get_address_of_m_MovePower_2() { return &___m_MovePower_2; }
	inline void set_m_MovePower_2(float value)
	{
		___m_MovePower_2 = value;
	}

	inline static int32_t get_offset_of_m_UseTorque_3() { return static_cast<int32_t>(offsetof(Ball_t763040781, ___m_UseTorque_3)); }
	inline bool get_m_UseTorque_3() const { return ___m_UseTorque_3; }
	inline bool* get_address_of_m_UseTorque_3() { return &___m_UseTorque_3; }
	inline void set_m_UseTorque_3(bool value)
	{
		___m_UseTorque_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxAngularVelocity_4() { return static_cast<int32_t>(offsetof(Ball_t763040781, ___m_MaxAngularVelocity_4)); }
	inline float get_m_MaxAngularVelocity_4() const { return ___m_MaxAngularVelocity_4; }
	inline float* get_address_of_m_MaxAngularVelocity_4() { return &___m_MaxAngularVelocity_4; }
	inline void set_m_MaxAngularVelocity_4(float value)
	{
		___m_MaxAngularVelocity_4 = value;
	}

	inline static int32_t get_offset_of_m_JumpPower_5() { return static_cast<int32_t>(offsetof(Ball_t763040781, ___m_JumpPower_5)); }
	inline float get_m_JumpPower_5() const { return ___m_JumpPower_5; }
	inline float* get_address_of_m_JumpPower_5() { return &___m_JumpPower_5; }
	inline void set_m_JumpPower_5(float value)
	{
		___m_JumpPower_5 = value;
	}

	inline static int32_t get_offset_of_m_Rigidbody_7() { return static_cast<int32_t>(offsetof(Ball_t763040781, ___m_Rigidbody_7)); }
	inline Rigidbody_t4233889191 * get_m_Rigidbody_7() const { return ___m_Rigidbody_7; }
	inline Rigidbody_t4233889191 ** get_address_of_m_Rigidbody_7() { return &___m_Rigidbody_7; }
	inline void set_m_Rigidbody_7(Rigidbody_t4233889191 * value)
	{
		___m_Rigidbody_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_Rigidbody_7), value);
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // BALLUSERCONTROL_T3838849947_H
#ifndef BALL_T2960981830_H
#define BALL_T2960981830_H
=======
#endif // BALL_T763040781_H
#ifndef BALLUSERCONTROL_T2040797921_H
#define BALLUSERCONTROL_T2040797921_H
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// UnityStandardAssets.Vehicles.Ball.Ball
struct  Ball_t2960981830  : public MonoBehaviour_t1754174423
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
	Rigidbody_t1480752739 * ___m_Rigidbody_7;

public:
	inline static int32_t get_offset_of_m_MovePower_2() { return static_cast<int32_t>(offsetof(Ball_t2960981830, ___m_MovePower_2)); }
	inline float get_m_MovePower_2() const { return ___m_MovePower_2; }
	inline float* get_address_of_m_MovePower_2() { return &___m_MovePower_2; }
	inline void set_m_MovePower_2(float value)
	{
		___m_MovePower_2 = value;
	}

	inline static int32_t get_offset_of_m_UseTorque_3() { return static_cast<int32_t>(offsetof(Ball_t2960981830, ___m_UseTorque_3)); }
	inline bool get_m_UseTorque_3() const { return ___m_UseTorque_3; }
	inline bool* get_address_of_m_UseTorque_3() { return &___m_UseTorque_3; }
	inline void set_m_UseTorque_3(bool value)
	{
		___m_UseTorque_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxAngularVelocity_4() { return static_cast<int32_t>(offsetof(Ball_t2960981830, ___m_MaxAngularVelocity_4)); }
	inline float get_m_MaxAngularVelocity_4() const { return ___m_MaxAngularVelocity_4; }
	inline float* get_address_of_m_MaxAngularVelocity_4() { return &___m_MaxAngularVelocity_4; }
	inline void set_m_MaxAngularVelocity_4(float value)
	{
		___m_MaxAngularVelocity_4 = value;
	}

	inline static int32_t get_offset_of_m_JumpPower_5() { return static_cast<int32_t>(offsetof(Ball_t2960981830, ___m_JumpPower_5)); }
	inline float get_m_JumpPower_5() const { return ___m_JumpPower_5; }
	inline float* get_address_of_m_JumpPower_5() { return &___m_JumpPower_5; }
	inline void set_m_JumpPower_5(float value)
	{
		___m_JumpPower_5 = value;
	}

	inline static int32_t get_offset_of_m_Rigidbody_7() { return static_cast<int32_t>(offsetof(Ball_t2960981830, ___m_Rigidbody_7)); }
	inline Rigidbody_t1480752739 * get_m_Rigidbody_7() const { return ___m_Rigidbody_7; }
	inline Rigidbody_t1480752739 ** get_address_of_m_Rigidbody_7() { return &___m_Rigidbody_7; }
	inline void set_m_Rigidbody_7(Rigidbody_t1480752739 * value)
	{
		___m_Rigidbody_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_Rigidbody_7), value);
=======
// UnityStandardAssets.Vehicles.Ball.BallUserControl
struct  BallUserControl_t2040797921  : public MonoBehaviour_t1158329972
{
public:
	// UnityStandardAssets.Vehicles.Ball.Ball UnityStandardAssets.Vehicles.Ball.BallUserControl::ball
	Ball_t763040781 * ___ball_2;
	// UnityEngine.Vector3 UnityStandardAssets.Vehicles.Ball.BallUserControl::move
	Vector3_t2243707580  ___move_3;
	// UnityEngine.Transform UnityStandardAssets.Vehicles.Ball.BallUserControl::cam
	Transform_t3275118058 * ___cam_4;
	// UnityEngine.Vector3 UnityStandardAssets.Vehicles.Ball.BallUserControl::camForward
	Vector3_t2243707580  ___camForward_5;
	// System.Boolean UnityStandardAssets.Vehicles.Ball.BallUserControl::jump
	bool ___jump_6;

public:
	inline static int32_t get_offset_of_ball_2() { return static_cast<int32_t>(offsetof(BallUserControl_t2040797921, ___ball_2)); }
	inline Ball_t763040781 * get_ball_2() const { return ___ball_2; }
	inline Ball_t763040781 ** get_address_of_ball_2() { return &___ball_2; }
	inline void set_ball_2(Ball_t763040781 * value)
	{
		___ball_2 = value;
		Il2CppCodeGenWriteBarrier((&___ball_2), value);
	}

	inline static int32_t get_offset_of_move_3() { return static_cast<int32_t>(offsetof(BallUserControl_t2040797921, ___move_3)); }
	inline Vector3_t2243707580  get_move_3() const { return ___move_3; }
	inline Vector3_t2243707580 * get_address_of_move_3() { return &___move_3; }
	inline void set_move_3(Vector3_t2243707580  value)
	{
		___move_3 = value;
	}

	inline static int32_t get_offset_of_cam_4() { return static_cast<int32_t>(offsetof(BallUserControl_t2040797921, ___cam_4)); }
	inline Transform_t3275118058 * get_cam_4() const { return ___cam_4; }
	inline Transform_t3275118058 ** get_address_of_cam_4() { return &___cam_4; }
	inline void set_cam_4(Transform_t3275118058 * value)
	{
		___cam_4 = value;
		Il2CppCodeGenWriteBarrier((&___cam_4), value);
	}

	inline static int32_t get_offset_of_camForward_5() { return static_cast<int32_t>(offsetof(BallUserControl_t2040797921, ___camForward_5)); }
	inline Vector3_t2243707580  get_camForward_5() const { return ___camForward_5; }
	inline Vector3_t2243707580 * get_address_of_camForward_5() { return &___camForward_5; }
	inline void set_camForward_5(Vector3_t2243707580  value)
	{
		___camForward_5 = value;
	}

	inline static int32_t get_offset_of_jump_6() { return static_cast<int32_t>(offsetof(BallUserControl_t2040797921, ___jump_6)); }
	inline bool get_jump_6() const { return ___jump_6; }
	inline bool* get_address_of_jump_6() { return &___jump_6; }
	inline void set_jump_6(bool value)
	{
		___jump_6 = value;
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // BALL_T2960981830_H
=======
#endif // BALLUSERCONTROL_T2040797921_H
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a


// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  RuntimeObject * Component_GetComponent_TisRuntimeObject_m2881062235_gshared (Component_t1738686692 * __this, const RuntimeMethod* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m3519036632 (MonoBehaviour_t1754174423 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
#define Component_GetComponent_TisRigidbody_t1480752739_m147160589(__this, method) ((  Rigidbody_t1480752739 * (*) (Component_t1738686692 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2881062235_gshared)(__this, method)
// System.Void UnityEngine.Rigidbody::set_maxAngularVelocity(System.Single)
extern "C"  void Rigidbody_set_maxAngularVelocity_m3779195770 (Rigidbody_t1480752739 * __this, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C"  void Vector3__ctor_m1718558660 (Vector3_t3940485 * __this, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t3940485  Vector3_op_Multiply_m1540666821 (RuntimeObject * __this /* static, unused */, Vector3_t3940485  p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::AddTorque(UnityEngine.Vector3)
extern "C"  void Rigidbody_AddTorque_m332382445 (Rigidbody_t1480752739 * __this, Vector3_t3940485  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3)
extern "C"  void Rigidbody_AddForce_m3173930594 (Rigidbody_t1480752739 * __this, Vector3_t3940485  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C"  Transform_t2704483035 * Component_get_transform_m1237258720 (Component_t1738686692 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C"  Vector3_t3940485  Transform_get_position_m1602725950 (Transform_t2704483035 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
extern "C"  Vector3_t3940485  Vector3_get_up_m2618156121 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
extern "C"  Vector3_t3940485  Vector3_op_UnaryNegation_m4285681639 (RuntimeObject * __this /* static, unused */, Vector3_t3940485  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C"  bool Physics_Raycast_m3566333151 (RuntimeObject * __this /* static, unused */, Vector3_t3940485  p0, Vector3_t3940485  p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3,UnityEngine.ForceMode)
extern "C"  void Rigidbody_AddForce_m3141396952 (Rigidbody_t1480752739 * __this, Vector3_t3940485  p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityStandardAssets.Vehicles.Ball.Ball>()
#define Component_GetComponent_TisBall_t2960981830_m2145107195(__this, method) ((  Ball_t2960981830 * (*) (Component_t1738686692 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2881062235_gshared)(__this, method)
// UnityEngine.Camera UnityEngine.Camera::get_main()
extern "C"  Camera_t3459982980 * Camera_get_main_m1802314341 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Inequality_m1072048550 (RuntimeObject * __this /* static, unused */, Object_t2002357940 * p0, Object_t2002357940 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
extern "C"  void Debug_LogWarning_m2014327651 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetAxis(System.String)
extern "C"  float CrossPlatformInputManager_GetAxis_m861055999 (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetButton(System.String)
extern "C"  bool CrossPlatformInputManager_GetButton_m3587706575 (RuntimeObject * __this /* static, unused */, String_t* ___name0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
extern "C"  Vector3_t3940485  Transform_get_forward_m1364735027 (Transform_t2704483035 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::Scale(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t3940485  Vector3_Scale_m1991302037 (RuntimeObject * __this /* static, unused */, Vector3_t3940485  p0, Vector3_t3940485  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
extern "C"  Vector3_t3940485  Vector3_get_normalized_m1616674037 (Vector3_t3940485 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
extern "C"  Vector3_t3940485  Vector3_op_Multiply_m1259274498 (RuntimeObject * __this /* static, unused */, float p0, Vector3_t3940485  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
extern "C"  Vector3_t3940485  Transform_get_right_m3882324153 (Transform_t2704483035 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t3940485  Vector3_op_Addition_m1869562977 (RuntimeObject * __this /* static, unused */, Vector3_t3940485  p0, Vector3_t3940485  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
extern "C"  Vector3_t3940485  Vector3_get_forward_m2871367626 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
extern "C"  Vector3_t3940485  Vector3_get_right_m1095224978 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Vehicles.Ball.Ball::Move(UnityEngine.Vector3,System.Boolean)
<<<<<<< HEAD
extern "C"  void Ball_Move_m1867944823 (Ball_t2960981830 * __this, Vector3_t3940485  ___moveDirection0, bool ___jump1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
=======
extern "C"  void Ball_Move_m1287008038 (Ball_t763040781 * __this, Vector3_t2243707580  ___moveDirection0, bool ___jump1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityStandardAssets.Vehicles.Ball.Ball::.ctor()
<<<<<<< HEAD
extern "C"  void Ball__ctor_m1281823350 (Ball_t2960981830 * __this, const RuntimeMethod* method)
=======
extern "C"  void Ball__ctor_m310204807 (Ball_t763040781 * __this, const RuntimeMethod* method)
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a
{
	{
		__this->set_m_MovePower_2((5.0f));
		__this->set_m_UseTorque_3((bool)1);
		__this->set_m_MaxAngularVelocity_4((25.0f));
		__this->set_m_JumpPower_5((2.0f));
<<<<<<< HEAD
		MonoBehaviour__ctor_m3519036632(__this, /*hidden argument*/NULL);
=======
		MonoBehaviour__ctor_m1825328214(__this, /*hidden argument*/NULL);
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a
		return;
	}
}
// System.Void UnityStandardAssets.Vehicles.Ball.Ball::Start()
<<<<<<< HEAD
extern "C"  void Ball_Start_m2444680342 (Ball_t2960981830 * __this, const RuntimeMethod* method)
=======
extern "C"  void Ball_Start_m270734371 (Ball_t763040781 * __this, const RuntimeMethod* method)
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
<<<<<<< HEAD
		il2cpp_codegen_initialize_method (Ball_Start_m2444680342_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Rigidbody_t1480752739 * L_0 = Component_GetComponent_TisRigidbody_t1480752739_m147160589(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t1480752739_m147160589_RuntimeMethod_var);
		__this->set_m_Rigidbody_7(L_0);
		Rigidbody_t1480752739 * L_1 = Component_GetComponent_TisRigidbody_t1480752739_m147160589(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t1480752739_m147160589_RuntimeMethod_var);
		float L_2 = __this->get_m_MaxAngularVelocity_4();
		NullCheck(L_1);
		Rigidbody_set_maxAngularVelocity_m3779195770(L_1, L_2, /*hidden argument*/NULL);
=======
		il2cpp_codegen_initialize_method (Ball_Start_m270734371_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Rigidbody_t4233889191 * L_0 = Component_GetComponent_TisRigidbody_t4233889191_m520013213(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t4233889191_m520013213_RuntimeMethod_var);
		__this->set_m_Rigidbody_7(L_0);
		Rigidbody_t4233889191 * L_1 = Component_GetComponent_TisRigidbody_t4233889191_m520013213(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t4233889191_m520013213_RuntimeMethod_var);
		float L_2 = __this->get_m_MaxAngularVelocity_4();
		NullCheck(L_1);
		Rigidbody_set_maxAngularVelocity_m1398562340(L_1, L_2, /*hidden argument*/NULL);
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a
		return;
	}
}
// System.Void UnityStandardAssets.Vehicles.Ball.Ball::Move(UnityEngine.Vector3,System.Boolean)
<<<<<<< HEAD
extern "C"  void Ball_Move_m1867944823 (Ball_t2960981830 * __this, Vector3_t3940485  ___moveDirection0, bool ___jump1, const RuntimeMethod* method)
=======
extern "C"  void Ball_Move_m1287008038 (Ball_t763040781 * __this, Vector3_t2243707580  ___moveDirection0, bool ___jump1, const RuntimeMethod* method)
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
<<<<<<< HEAD
		il2cpp_codegen_initialize_method (Ball_Move_m1867944823_MetadataUsageId);
=======
		il2cpp_codegen_initialize_method (Ball_Move_m1287008038_MetadataUsageId);
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a
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
<<<<<<< HEAD
		Rigidbody_t1480752739 * L_1 = __this->get_m_Rigidbody_7();
		float L_2 = (&___moveDirection0)->get_z_3();
		float L_3 = (&___moveDirection0)->get_x_1();
		Vector3_t3940485  L_4;
		memset(&L_4, 0, sizeof(L_4));
		Vector3__ctor_m1718558660((&L_4), L_2, (0.0f), ((-L_3)), /*hidden argument*/NULL);
		float L_5 = __this->get_m_MovePower_2();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3940485_il2cpp_TypeInfo_var);
		Vector3_t3940485  L_6 = Vector3_op_Multiply_m1540666821(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		NullCheck(L_1);
		Rigidbody_AddTorque_m332382445(L_1, L_6, /*hidden argument*/NULL);
=======
		Rigidbody_t4233889191 * L_1 = __this->get_m_Rigidbody_7();
		float L_2 = (&___moveDirection0)->get_z_3();
		float L_3 = (&___moveDirection0)->get_x_1();
		Vector3_t2243707580  L_4;
		memset(&L_4, 0, sizeof(L_4));
		Vector3__ctor_m1555724485((&L_4), L_2, (0.0f), ((-L_3)), /*hidden argument*/NULL);
		float L_5 = __this->get_m_MovePower_2();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t2243707580_il2cpp_TypeInfo_var);
		Vector3_t2243707580  L_6 = Vector3_op_Multiply_m2498445460(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		NullCheck(L_1);
		Rigidbody_AddTorque_m3987265343(L_1, L_6, /*hidden argument*/NULL);
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a
		goto IL_0056;
	}

IL_003f:
	{
<<<<<<< HEAD
		Rigidbody_t1480752739 * L_7 = __this->get_m_Rigidbody_7();
		Vector3_t3940485  L_8 = ___moveDirection0;
=======
		Rigidbody_t4233889191 * L_7 = __this->get_m_Rigidbody_7();
		Vector3_t2243707580  L_8 = ___moveDirection0;
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a
		float L_9 = __this->get_m_MovePower_2();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3940485_il2cpp_TypeInfo_var);
		Vector3_t3940485  L_10 = Vector3_op_Multiply_m1540666821(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		NullCheck(L_7);
<<<<<<< HEAD
		Rigidbody_AddForce_m3173930594(L_7, L_10, /*hidden argument*/NULL);
=======
		Rigidbody_AddForce_m145544016(L_7, L_10, /*hidden argument*/NULL);
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a
	}

IL_0056:
	{
<<<<<<< HEAD
		Transform_t2704483035 * L_11 = Component_get_transform_m1237258720(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		Vector3_t3940485  L_12 = Transform_get_position_m1602725950(L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3940485_il2cpp_TypeInfo_var);
		Vector3_t3940485  L_13 = Vector3_get_up_m2618156121(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3940485  L_14 = Vector3_op_UnaryNegation_m4285681639(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		bool L_15 = Physics_Raycast_m3566333151(NULL /*static, unused*/, L_12, L_14, (1.0f), /*hidden argument*/NULL);
=======
		Transform_t3275118058 * L_11 = Component_get_transform_m3374354972(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		Vector3_t2243707580  L_12 = Transform_get_position_m2304215762(L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t2243707580_il2cpp_TypeInfo_var);
		Vector3_t2243707580  L_13 = Vector3_get_up_m3604115196(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t2243707580  L_14 = Vector3_op_UnaryNegation_m2337886919(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		bool L_15 = Physics_Raycast_m4094847631(NULL /*static, unused*/, L_12, L_14, (1.0f), /*hidden argument*/NULL);
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a
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
<<<<<<< HEAD
		Rigidbody_t1480752739 * L_17 = __this->get_m_Rigidbody_7();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3940485_il2cpp_TypeInfo_var);
		Vector3_t3940485  L_18 = Vector3_get_up_m2618156121(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_19 = __this->get_m_JumpPower_5();
		Vector3_t3940485  L_20 = Vector3_op_Multiply_m1540666821(NULL /*static, unused*/, L_18, L_19, /*hidden argument*/NULL);
		NullCheck(L_17);
		Rigidbody_AddForce_m3141396952(L_17, L_20, 1, /*hidden argument*/NULL);
=======
		Rigidbody_t4233889191 * L_17 = __this->get_m_Rigidbody_7();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t2243707580_il2cpp_TypeInfo_var);
		Vector3_t2243707580  L_18 = Vector3_get_up_m3604115196(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_19 = __this->get_m_JumpPower_5();
		Vector3_t2243707580  L_20 = Vector3_op_Multiply_m2498445460(NULL /*static, unused*/, L_18, L_19, /*hidden argument*/NULL);
		NullCheck(L_17);
		Rigidbody_AddForce_m3639708911(L_17, L_20, 1, /*hidden argument*/NULL);
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a
	}

IL_009c:
	{
		return;
	}
}
// System.Void UnityStandardAssets.Vehicles.Ball.BallUserControl::.ctor()
<<<<<<< HEAD
extern "C"  void BallUserControl__ctor_m1998307303 (BallUserControl_t3838849947 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m3519036632(__this, /*hidden argument*/NULL);
=======
extern "C"  void BallUserControl__ctor_m1854748185 (BallUserControl_t2040797921 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1825328214(__this, /*hidden argument*/NULL);
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a
		return;
	}
}
// System.Void UnityStandardAssets.Vehicles.Ball.BallUserControl::Awake()
<<<<<<< HEAD
extern "C"  void BallUserControl_Awake_m702952942 (BallUserControl_t3838849947 * __this, const RuntimeMethod* method)
=======
extern "C"  void BallUserControl_Awake_m4216224384 (BallUserControl_t2040797921 * __this, const RuntimeMethod* method)
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
<<<<<<< HEAD
		il2cpp_codegen_initialize_method (BallUserControl_Awake_m702952942_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Ball_t2960981830 * L_0 = Component_GetComponent_TisBall_t2960981830_m2145107195(__this, /*hidden argument*/Component_GetComponent_TisBall_t2960981830_m2145107195_RuntimeMethod_var);
		__this->set_ball_2(L_0);
		Camera_t3459982980 * L_1 = Camera_get_main_m1802314341(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t2002357940_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m1072048550(NULL /*static, unused*/, L_1, (Object_t2002357940 *)NULL, /*hidden argument*/NULL);
=======
		il2cpp_codegen_initialize_method (BallUserControl_Awake_m4216224384_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Ball_t763040781 * L_0 = Component_GetComponent_TisBall_t763040781_m1805461147(__this, /*hidden argument*/Component_GetComponent_TisBall_t763040781_m1805461147_RuntimeMethod_var);
		__this->set_ball_2(L_0);
		Camera_t189460977 * L_1 = Camera_get_main_m881971336(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m3768854296(NULL /*static, unused*/, L_1, (Object_t1021602117 *)NULL, /*hidden argument*/NULL);
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a
		if (!L_2)
		{
			goto IL_0031;
		}
	}
	{
<<<<<<< HEAD
		Camera_t3459982980 * L_3 = Camera_get_main_m1802314341(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_t2704483035 * L_4 = Component_get_transform_m1237258720(L_3, /*hidden argument*/NULL);
=======
		Camera_t189460977 * L_3 = Camera_get_main_m881971336(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_t3275118058 * L_4 = Component_get_transform_m3374354972(L_3, /*hidden argument*/NULL);
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a
		__this->set_cam_4(L_4);
		goto IL_003b;
	}

IL_0031:
	{
<<<<<<< HEAD
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3177662366_il2cpp_TypeInfo_var);
		Debug_LogWarning_m2014327651(NULL /*static, unused*/, _stringLiteral1300392510, /*hidden argument*/NULL);
=======
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t1368543263_il2cpp_TypeInfo_var);
		Debug_LogWarning_m1382493163(NULL /*static, unused*/, _stringLiteral847144784, /*hidden argument*/NULL);
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a
	}

IL_003b:
	{
		return;
	}
}
// System.Void UnityStandardAssets.Vehicles.Ball.BallUserControl::Update()
<<<<<<< HEAD
extern "C"  void BallUserControl_Update_m772385050 (BallUserControl_t3838849947 * __this, const RuntimeMethod* method)
=======
extern "C"  void BallUserControl_Update_m1471660078 (BallUserControl_t2040797921 * __this, const RuntimeMethod* method)
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
<<<<<<< HEAD
		il2cpp_codegen_initialize_method (BallUserControl_Update_m772385050_MetadataUsageId);
=======
		il2cpp_codegen_initialize_method (BallUserControl_Update_m1471660078_MetadataUsageId);
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
<<<<<<< HEAD
	Vector3_t3940485  V_2;
=======
	Vector3_t2243707580  V_2;
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a
	memset(&V_2, 0, sizeof(V_2));
	Vector3_t3940485  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Vector3_t3940485  V_4;
	memset(&V_4, 0, sizeof(V_4));
	{
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t3880992450_il2cpp_TypeInfo_var);
		float L_0 = CrossPlatformInputManager_GetAxis_m861055999(NULL /*static, unused*/, _stringLiteral169882546, /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = CrossPlatformInputManager_GetAxis_m861055999(NULL /*static, unused*/, _stringLiteral2483698812, /*hidden argument*/NULL);
		V_1 = L_1;
		bool L_2 = CrossPlatformInputManager_GetButton_m3587706575(NULL /*static, unused*/, _stringLiteral2224968032, /*hidden argument*/NULL);
		__this->set_jump_6(L_2);
<<<<<<< HEAD
		Transform_t2704483035 * L_3 = __this->get_cam_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t2002357940_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Inequality_m1072048550(NULL /*static, unused*/, L_3, (Object_t2002357940 *)NULL, /*hidden argument*/NULL);
=======
		Transform_t3275118058 * L_3 = __this->get_cam_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Inequality_m3768854296(NULL /*static, unused*/, L_3, (Object_t1021602117 *)NULL, /*hidden argument*/NULL);
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a
		if (!L_4)
		{
			goto IL_009e;
		}
	}
	{
<<<<<<< HEAD
		Transform_t2704483035 * L_5 = __this->get_cam_4();
		NullCheck(L_5);
		Vector3_t3940485  L_6 = Transform_get_forward_m1364735027(L_5, /*hidden argument*/NULL);
		Vector3_t3940485  L_7;
		memset(&L_7, 0, sizeof(L_7));
		Vector3__ctor_m1718558660((&L_7), (1.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3940485_il2cpp_TypeInfo_var);
		Vector3_t3940485  L_8 = Vector3_Scale_m1991302037(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		V_2 = L_8;
		Vector3_t3940485  L_9 = Vector3_get_normalized_m1616674037((&V_2), /*hidden argument*/NULL);
		__this->set_camForward_5(L_9);
		float L_10 = V_1;
		Vector3_t3940485  L_11 = __this->get_camForward_5();
		Vector3_t3940485  L_12 = Vector3_op_Multiply_m1259274498(NULL /*static, unused*/, L_10, L_11, /*hidden argument*/NULL);
		float L_13 = V_0;
		Transform_t2704483035 * L_14 = __this->get_cam_4();
		NullCheck(L_14);
		Vector3_t3940485  L_15 = Transform_get_right_m3882324153(L_14, /*hidden argument*/NULL);
		Vector3_t3940485  L_16 = Vector3_op_Multiply_m1259274498(NULL /*static, unused*/, L_13, L_15, /*hidden argument*/NULL);
		Vector3_t3940485  L_17 = Vector3_op_Addition_m1869562977(NULL /*static, unused*/, L_12, L_16, /*hidden argument*/NULL);
		V_3 = L_17;
		Vector3_t3940485  L_18 = Vector3_get_normalized_m1616674037((&V_3), /*hidden argument*/NULL);
=======
		Transform_t3275118058 * L_5 = __this->get_cam_4();
		NullCheck(L_5);
		Vector3_t2243707580  L_6 = Transform_get_forward_m2144220796(L_5, /*hidden argument*/NULL);
		Vector3_t2243707580  L_7;
		memset(&L_7, 0, sizeof(L_7));
		Vector3__ctor_m1555724485((&L_7), (1.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t2243707580_il2cpp_TypeInfo_var);
		Vector3_t2243707580  L_8 = Vector3_Scale_m1107596382(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		V_2 = L_8;
		Vector3_t2243707580  L_9 = Vector3_get_normalized_m1057036856((&V_2), /*hidden argument*/NULL);
		__this->set_camForward_5(L_9);
		float L_10 = V_1;
		Vector3_t2243707580  L_11 = __this->get_camForward_5();
		Vector3_t2243707580  L_12 = Vector3_op_Multiply_m1869676276(NULL /*static, unused*/, L_10, L_11, /*hidden argument*/NULL);
		float L_13 = V_0;
		Transform_t3275118058 * L_14 = __this->get_cam_4();
		NullCheck(L_14);
		Vector3_t2243707580  L_15 = Transform_get_right_m1162814389(L_14, /*hidden argument*/NULL);
		Vector3_t2243707580  L_16 = Vector3_op_Multiply_m1869676276(NULL /*static, unused*/, L_13, L_15, /*hidden argument*/NULL);
		Vector3_t2243707580  L_17 = Vector3_op_Addition_m394909128(NULL /*static, unused*/, L_12, L_16, /*hidden argument*/NULL);
		V_3 = L_17;
		Vector3_t2243707580  L_18 = Vector3_get_normalized_m1057036856((&V_3), /*hidden argument*/NULL);
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a
		__this->set_move_3(L_18);
		goto IL_00c8;
	}

IL_009e:
	{
		float L_19 = V_1;
<<<<<<< HEAD
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3940485_il2cpp_TypeInfo_var);
		Vector3_t3940485  L_20 = Vector3_get_forward_m2871367626(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3940485  L_21 = Vector3_op_Multiply_m1259274498(NULL /*static, unused*/, L_19, L_20, /*hidden argument*/NULL);
=======
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t2243707580_il2cpp_TypeInfo_var);
		Vector3_t2243707580  L_20 = Vector3_get_forward_m1316319684(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t2243707580  L_21 = Vector3_op_Multiply_m1869676276(NULL /*static, unused*/, L_19, L_20, /*hidden argument*/NULL);
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a
		float L_22 = V_0;
		Vector3_t3940485  L_23 = Vector3_get_right_m1095224978(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3940485  L_24 = Vector3_op_Multiply_m1259274498(NULL /*static, unused*/, L_22, L_23, /*hidden argument*/NULL);
		Vector3_t3940485  L_25 = Vector3_op_Addition_m1869562977(NULL /*static, unused*/, L_21, L_24, /*hidden argument*/NULL);
		V_4 = L_25;
<<<<<<< HEAD
		Vector3_t3940485  L_26 = Vector3_get_normalized_m1616674037((&V_4), /*hidden argument*/NULL);
=======
		Vector3_t2243707580  L_26 = Vector3_get_normalized_m1057036856((&V_4), /*hidden argument*/NULL);
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a
		__this->set_move_3(L_26);
	}

IL_00c8:
	{
		return;
	}
}
// System.Void UnityStandardAssets.Vehicles.Ball.BallUserControl::FixedUpdate()
<<<<<<< HEAD
extern "C"  void BallUserControl_FixedUpdate_m3890926886 (BallUserControl_t3838849947 * __this, const RuntimeMethod* method)
=======
extern "C"  void BallUserControl_FixedUpdate_m1908019444 (BallUserControl_t2040797921 * __this, const RuntimeMethod* method)
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a
{
	{
		Ball_t2960981830 * L_0 = __this->get_ball_2();
		Vector3_t3940485  L_1 = __this->get_move_3();
		bool L_2 = __this->get_jump_6();
		NullCheck(L_0);
<<<<<<< HEAD
		Ball_Move_m1867944823(L_0, L_1, L_2, /*hidden argument*/NULL);
=======
		Ball_Move_m1287008038(L_0, L_1, L_2, /*hidden argument*/NULL);
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a
		__this->set_jump_6((bool)0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif

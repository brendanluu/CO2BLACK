﻿#include "il2cpp-config.h"

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

// UnityStandardAssets.Utility.WaypointCircuit
struct WaypointCircuit_t2062768050;
// UnityEngine.Transform[]
struct TransformU5BU5D_t2745914573;
// System.Char[]
struct CharU5BU5D_t3978811185;
// System.Void
struct Void_t1307511435;
// UnityStandardAssets.Utility.WaypointCircuit/WaypointList
struct WaypointList_t1743079588;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t2067562573;
// System.Single[]
struct SingleU5BU5D_t1189266543;
// UnityEngine.Transform
struct Transform_t1980082724;




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
#ifndef WAYPOINTLIST_T1743079588_H
#define WAYPOINTLIST_T1743079588_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.WaypointCircuit/WaypointList
struct  WaypointList_t1743079588  : public RuntimeObject
{
public:
	// UnityStandardAssets.Utility.WaypointCircuit UnityStandardAssets.Utility.WaypointCircuit/WaypointList::circuit
	WaypointCircuit_t2062768050 * ___circuit_0;
	// UnityEngine.Transform[] UnityStandardAssets.Utility.WaypointCircuit/WaypointList::items
	TransformU5BU5D_t2745914573* ___items_1;

public:
	inline static int32_t get_offset_of_circuit_0() { return static_cast<int32_t>(offsetof(WaypointList_t1743079588, ___circuit_0)); }
	inline WaypointCircuit_t2062768050 * get_circuit_0() const { return ___circuit_0; }
	inline WaypointCircuit_t2062768050 ** get_address_of_circuit_0() { return &___circuit_0; }
	inline void set_circuit_0(WaypointCircuit_t2062768050 * value)
	{
		___circuit_0 = value;
		Il2CppCodeGenWriteBarrier((&___circuit_0), value);
	}

	inline static int32_t get_offset_of_items_1() { return static_cast<int32_t>(offsetof(WaypointList_t1743079588, ___items_1)); }
	inline TransformU5BU5D_t2745914573* get_items_1() const { return ___items_1; }
	inline TransformU5BU5D_t2745914573** get_address_of_items_1() { return &___items_1; }
	inline void set_items_1(TransformU5BU5D_t2745914573* value)
	{
		___items_1 = value;
		Il2CppCodeGenWriteBarrier((&___items_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAYPOINTLIST_T1743079588_H
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
#ifndef ROUTEPOINT_T1151890072_H
#define ROUTEPOINT_T1151890072_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.WaypointCircuit/RoutePoint
struct  RoutePoint_t1151890072 
{
public:
	// UnityEngine.Vector3 UnityStandardAssets.Utility.WaypointCircuit/RoutePoint::position
	Vector3_t291390628  ___position_0;
	// UnityEngine.Vector3 UnityStandardAssets.Utility.WaypointCircuit/RoutePoint::direction
	Vector3_t291390628  ___direction_1;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(RoutePoint_t1151890072, ___position_0)); }
	inline Vector3_t291390628  get_position_0() const { return ___position_0; }
	inline Vector3_t291390628 * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t291390628  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_direction_1() { return static_cast<int32_t>(offsetof(RoutePoint_t1151890072, ___direction_1)); }
	inline Vector3_t291390628  get_direction_1() const { return ___direction_1; }
	inline Vector3_t291390628 * get_address_of_direction_1() { return &___direction_1; }
	inline void set_direction_1(Vector3_t291390628  value)
	{
		___direction_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ROUTEPOINT_T1151890072_H
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
#ifndef WAYPOINTCIRCUIT_T2062768050_H
#define WAYPOINTCIRCUIT_T2062768050_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.WaypointCircuit
struct  WaypointCircuit_t2062768050  : public MonoBehaviour_t2271203965
{
public:
	// UnityStandardAssets.Utility.WaypointCircuit/WaypointList UnityStandardAssets.Utility.WaypointCircuit::waypointList
	WaypointList_t1743079588 * ___waypointList_2;
	// System.Boolean UnityStandardAssets.Utility.WaypointCircuit::smoothRoute
	bool ___smoothRoute_3;
	// System.Int32 UnityStandardAssets.Utility.WaypointCircuit::numPoints
	int32_t ___numPoints_4;
	// UnityEngine.Vector3[] UnityStandardAssets.Utility.WaypointCircuit::points
	Vector3U5BU5D_t2067562573* ___points_5;
	// System.Single[] UnityStandardAssets.Utility.WaypointCircuit::distances
	SingleU5BU5D_t1189266543* ___distances_6;
	// System.Single UnityStandardAssets.Utility.WaypointCircuit::editorVisualisationSubsteps
	float ___editorVisualisationSubsteps_7;
	// System.Single UnityStandardAssets.Utility.WaypointCircuit::<Length>k__BackingField
	float ___U3CLengthU3Ek__BackingField_8;
	// System.Int32 UnityStandardAssets.Utility.WaypointCircuit::p0n
	int32_t ___p0n_9;
	// System.Int32 UnityStandardAssets.Utility.WaypointCircuit::p1n
	int32_t ___p1n_10;
	// System.Int32 UnityStandardAssets.Utility.WaypointCircuit::p2n
	int32_t ___p2n_11;
	// System.Int32 UnityStandardAssets.Utility.WaypointCircuit::p3n
	int32_t ___p3n_12;
	// System.Single UnityStandardAssets.Utility.WaypointCircuit::i
	float ___i_13;
	// UnityEngine.Vector3 UnityStandardAssets.Utility.WaypointCircuit::P0
	Vector3_t291390628  ___P0_14;
	// UnityEngine.Vector3 UnityStandardAssets.Utility.WaypointCircuit::P1
	Vector3_t291390628  ___P1_15;
	// UnityEngine.Vector3 UnityStandardAssets.Utility.WaypointCircuit::P2
	Vector3_t291390628  ___P2_16;
	// UnityEngine.Vector3 UnityStandardAssets.Utility.WaypointCircuit::P3
	Vector3_t291390628  ___P3_17;

public:
	inline static int32_t get_offset_of_waypointList_2() { return static_cast<int32_t>(offsetof(WaypointCircuit_t2062768050, ___waypointList_2)); }
	inline WaypointList_t1743079588 * get_waypointList_2() const { return ___waypointList_2; }
	inline WaypointList_t1743079588 ** get_address_of_waypointList_2() { return &___waypointList_2; }
	inline void set_waypointList_2(WaypointList_t1743079588 * value)
	{
		___waypointList_2 = value;
		Il2CppCodeGenWriteBarrier((&___waypointList_2), value);
	}

	inline static int32_t get_offset_of_smoothRoute_3() { return static_cast<int32_t>(offsetof(WaypointCircuit_t2062768050, ___smoothRoute_3)); }
	inline bool get_smoothRoute_3() const { return ___smoothRoute_3; }
	inline bool* get_address_of_smoothRoute_3() { return &___smoothRoute_3; }
	inline void set_smoothRoute_3(bool value)
	{
		___smoothRoute_3 = value;
	}

	inline static int32_t get_offset_of_numPoints_4() { return static_cast<int32_t>(offsetof(WaypointCircuit_t2062768050, ___numPoints_4)); }
	inline int32_t get_numPoints_4() const { return ___numPoints_4; }
	inline int32_t* get_address_of_numPoints_4() { return &___numPoints_4; }
	inline void set_numPoints_4(int32_t value)
	{
		___numPoints_4 = value;
	}

	inline static int32_t get_offset_of_points_5() { return static_cast<int32_t>(offsetof(WaypointCircuit_t2062768050, ___points_5)); }
	inline Vector3U5BU5D_t2067562573* get_points_5() const { return ___points_5; }
	inline Vector3U5BU5D_t2067562573** get_address_of_points_5() { return &___points_5; }
	inline void set_points_5(Vector3U5BU5D_t2067562573* value)
	{
		___points_5 = value;
		Il2CppCodeGenWriteBarrier((&___points_5), value);
	}

	inline static int32_t get_offset_of_distances_6() { return static_cast<int32_t>(offsetof(WaypointCircuit_t2062768050, ___distances_6)); }
	inline SingleU5BU5D_t1189266543* get_distances_6() const { return ___distances_6; }
	inline SingleU5BU5D_t1189266543** get_address_of_distances_6() { return &___distances_6; }
	inline void set_distances_6(SingleU5BU5D_t1189266543* value)
	{
		___distances_6 = value;
		Il2CppCodeGenWriteBarrier((&___distances_6), value);
	}

	inline static int32_t get_offset_of_editorVisualisationSubsteps_7() { return static_cast<int32_t>(offsetof(WaypointCircuit_t2062768050, ___editorVisualisationSubsteps_7)); }
	inline float get_editorVisualisationSubsteps_7() const { return ___editorVisualisationSubsteps_7; }
	inline float* get_address_of_editorVisualisationSubsteps_7() { return &___editorVisualisationSubsteps_7; }
	inline void set_editorVisualisationSubsteps_7(float value)
	{
		___editorVisualisationSubsteps_7 = value;
	}

	inline static int32_t get_offset_of_U3CLengthU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(WaypointCircuit_t2062768050, ___U3CLengthU3Ek__BackingField_8)); }
	inline float get_U3CLengthU3Ek__BackingField_8() const { return ___U3CLengthU3Ek__BackingField_8; }
	inline float* get_address_of_U3CLengthU3Ek__BackingField_8() { return &___U3CLengthU3Ek__BackingField_8; }
	inline void set_U3CLengthU3Ek__BackingField_8(float value)
	{
		___U3CLengthU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_p0n_9() { return static_cast<int32_t>(offsetof(WaypointCircuit_t2062768050, ___p0n_9)); }
	inline int32_t get_p0n_9() const { return ___p0n_9; }
	inline int32_t* get_address_of_p0n_9() { return &___p0n_9; }
	inline void set_p0n_9(int32_t value)
	{
		___p0n_9 = value;
	}

	inline static int32_t get_offset_of_p1n_10() { return static_cast<int32_t>(offsetof(WaypointCircuit_t2062768050, ___p1n_10)); }
	inline int32_t get_p1n_10() const { return ___p1n_10; }
	inline int32_t* get_address_of_p1n_10() { return &___p1n_10; }
	inline void set_p1n_10(int32_t value)
	{
		___p1n_10 = value;
	}

	inline static int32_t get_offset_of_p2n_11() { return static_cast<int32_t>(offsetof(WaypointCircuit_t2062768050, ___p2n_11)); }
	inline int32_t get_p2n_11() const { return ___p2n_11; }
	inline int32_t* get_address_of_p2n_11() { return &___p2n_11; }
	inline void set_p2n_11(int32_t value)
	{
		___p2n_11 = value;
	}

	inline static int32_t get_offset_of_p3n_12() { return static_cast<int32_t>(offsetof(WaypointCircuit_t2062768050, ___p3n_12)); }
	inline int32_t get_p3n_12() const { return ___p3n_12; }
	inline int32_t* get_address_of_p3n_12() { return &___p3n_12; }
	inline void set_p3n_12(int32_t value)
	{
		___p3n_12 = value;
	}

	inline static int32_t get_offset_of_i_13() { return static_cast<int32_t>(offsetof(WaypointCircuit_t2062768050, ___i_13)); }
	inline float get_i_13() const { return ___i_13; }
	inline float* get_address_of_i_13() { return &___i_13; }
	inline void set_i_13(float value)
	{
		___i_13 = value;
	}

	inline static int32_t get_offset_of_P0_14() { return static_cast<int32_t>(offsetof(WaypointCircuit_t2062768050, ___P0_14)); }
	inline Vector3_t291390628  get_P0_14() const { return ___P0_14; }
	inline Vector3_t291390628 * get_address_of_P0_14() { return &___P0_14; }
	inline void set_P0_14(Vector3_t291390628  value)
	{
		___P0_14 = value;
	}

	inline static int32_t get_offset_of_P1_15() { return static_cast<int32_t>(offsetof(WaypointCircuit_t2062768050, ___P1_15)); }
	inline Vector3_t291390628  get_P1_15() const { return ___P1_15; }
	inline Vector3_t291390628 * get_address_of_P1_15() { return &___P1_15; }
	inline void set_P1_15(Vector3_t291390628  value)
	{
		___P1_15 = value;
	}

	inline static int32_t get_offset_of_P2_16() { return static_cast<int32_t>(offsetof(WaypointCircuit_t2062768050, ___P2_16)); }
	inline Vector3_t291390628  get_P2_16() const { return ___P2_16; }
	inline Vector3_t291390628 * get_address_of_P2_16() { return &___P2_16; }
	inline void set_P2_16(Vector3_t291390628  value)
	{
		___P2_16 = value;
	}

	inline static int32_t get_offset_of_P3_17() { return static_cast<int32_t>(offsetof(WaypointCircuit_t2062768050, ___P3_17)); }
	inline Vector3_t291390628  get_P3_17() const { return ___P3_17; }
	inline Vector3_t291390628 * get_address_of_P3_17() { return &___P3_17; }
	inline void set_P3_17(Vector3_t291390628  value)
	{
		___P3_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAYPOINTCIRCUIT_T2062768050_H
#ifndef WAYPOINTPROGRESSTRACKER_T2855022294_H
#define WAYPOINTPROGRESSTRACKER_T2855022294_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.WaypointProgressTracker
struct  WaypointProgressTracker_t2855022294  : public MonoBehaviour_t2271203965
{
public:
	// UnityStandardAssets.Utility.WaypointCircuit UnityStandardAssets.Utility.WaypointProgressTracker::circuit
	WaypointCircuit_t2062768050 * ___circuit_2;
	// System.Single UnityStandardAssets.Utility.WaypointProgressTracker::lookAheadForTargetOffset
	float ___lookAheadForTargetOffset_3;
	// System.Single UnityStandardAssets.Utility.WaypointProgressTracker::lookAheadForTargetFactor
	float ___lookAheadForTargetFactor_4;
	// System.Single UnityStandardAssets.Utility.WaypointProgressTracker::lookAheadForSpeedOffset
	float ___lookAheadForSpeedOffset_5;
	// System.Single UnityStandardAssets.Utility.WaypointProgressTracker::lookAheadForSpeedFactor
	float ___lookAheadForSpeedFactor_6;
	// UnityStandardAssets.Utility.WaypointProgressTracker/ProgressStyle UnityStandardAssets.Utility.WaypointProgressTracker::progressStyle
	int32_t ___progressStyle_7;
	// System.Single UnityStandardAssets.Utility.WaypointProgressTracker::pointToPointThreshold
	float ___pointToPointThreshold_8;
	// UnityStandardAssets.Utility.WaypointCircuit/RoutePoint UnityStandardAssets.Utility.WaypointProgressTracker::<targetPoint>k__BackingField
	RoutePoint_t1151890072  ___U3CtargetPointU3Ek__BackingField_9;
	// UnityStandardAssets.Utility.WaypointCircuit/RoutePoint UnityStandardAssets.Utility.WaypointProgressTracker::<speedPoint>k__BackingField
	RoutePoint_t1151890072  ___U3CspeedPointU3Ek__BackingField_10;
	// UnityStandardAssets.Utility.WaypointCircuit/RoutePoint UnityStandardAssets.Utility.WaypointProgressTracker::<progressPoint>k__BackingField
	RoutePoint_t1151890072  ___U3CprogressPointU3Ek__BackingField_11;
	// UnityEngine.Transform UnityStandardAssets.Utility.WaypointProgressTracker::target
	Transform_t1980082724 * ___target_12;
	// System.Single UnityStandardAssets.Utility.WaypointProgressTracker::progressDistance
	float ___progressDistance_13;
	// System.Int32 UnityStandardAssets.Utility.WaypointProgressTracker::progressNum
	int32_t ___progressNum_14;
	// UnityEngine.Vector3 UnityStandardAssets.Utility.WaypointProgressTracker::lastPosition
	Vector3_t291390628  ___lastPosition_15;
	// System.Single UnityStandardAssets.Utility.WaypointProgressTracker::speed
	float ___speed_16;

public:
	inline static int32_t get_offset_of_circuit_2() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t2855022294, ___circuit_2)); }
	inline WaypointCircuit_t2062768050 * get_circuit_2() const { return ___circuit_2; }
	inline WaypointCircuit_t2062768050 ** get_address_of_circuit_2() { return &___circuit_2; }
	inline void set_circuit_2(WaypointCircuit_t2062768050 * value)
	{
		___circuit_2 = value;
		Il2CppCodeGenWriteBarrier((&___circuit_2), value);
	}

	inline static int32_t get_offset_of_lookAheadForTargetOffset_3() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t2855022294, ___lookAheadForTargetOffset_3)); }
	inline float get_lookAheadForTargetOffset_3() const { return ___lookAheadForTargetOffset_3; }
	inline float* get_address_of_lookAheadForTargetOffset_3() { return &___lookAheadForTargetOffset_3; }
	inline void set_lookAheadForTargetOffset_3(float value)
	{
		___lookAheadForTargetOffset_3 = value;
	}

	inline static int32_t get_offset_of_lookAheadForTargetFactor_4() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t2855022294, ___lookAheadForTargetFactor_4)); }
	inline float get_lookAheadForTargetFactor_4() const { return ___lookAheadForTargetFactor_4; }
	inline float* get_address_of_lookAheadForTargetFactor_4() { return &___lookAheadForTargetFactor_4; }
	inline void set_lookAheadForTargetFactor_4(float value)
	{
		___lookAheadForTargetFactor_4 = value;
	}

	inline static int32_t get_offset_of_lookAheadForSpeedOffset_5() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t2855022294, ___lookAheadForSpeedOffset_5)); }
	inline float get_lookAheadForSpeedOffset_5() const { return ___lookAheadForSpeedOffset_5; }
	inline float* get_address_of_lookAheadForSpeedOffset_5() { return &___lookAheadForSpeedOffset_5; }
	inline void set_lookAheadForSpeedOffset_5(float value)
	{
		___lookAheadForSpeedOffset_5 = value;
	}

	inline static int32_t get_offset_of_lookAheadForSpeedFactor_6() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t2855022294, ___lookAheadForSpeedFactor_6)); }
	inline float get_lookAheadForSpeedFactor_6() const { return ___lookAheadForSpeedFactor_6; }
	inline float* get_address_of_lookAheadForSpeedFactor_6() { return &___lookAheadForSpeedFactor_6; }
	inline void set_lookAheadForSpeedFactor_6(float value)
	{
		___lookAheadForSpeedFactor_6 = value;
	}

	inline static int32_t get_offset_of_progressStyle_7() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t2855022294, ___progressStyle_7)); }
	inline int32_t get_progressStyle_7() const { return ___progressStyle_7; }
	inline int32_t* get_address_of_progressStyle_7() { return &___progressStyle_7; }
	inline void set_progressStyle_7(int32_t value)
	{
		___progressStyle_7 = value;
	}

	inline static int32_t get_offset_of_pointToPointThreshold_8() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t2855022294, ___pointToPointThreshold_8)); }
	inline float get_pointToPointThreshold_8() const { return ___pointToPointThreshold_8; }
	inline float* get_address_of_pointToPointThreshold_8() { return &___pointToPointThreshold_8; }
	inline void set_pointToPointThreshold_8(float value)
	{
		___pointToPointThreshold_8 = value;
	}

	inline static int32_t get_offset_of_U3CtargetPointU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t2855022294, ___U3CtargetPointU3Ek__BackingField_9)); }
	inline RoutePoint_t1151890072  get_U3CtargetPointU3Ek__BackingField_9() const { return ___U3CtargetPointU3Ek__BackingField_9; }
	inline RoutePoint_t1151890072 * get_address_of_U3CtargetPointU3Ek__BackingField_9() { return &___U3CtargetPointU3Ek__BackingField_9; }
	inline void set_U3CtargetPointU3Ek__BackingField_9(RoutePoint_t1151890072  value)
	{
		___U3CtargetPointU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CspeedPointU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t2855022294, ___U3CspeedPointU3Ek__BackingField_10)); }
	inline RoutePoint_t1151890072  get_U3CspeedPointU3Ek__BackingField_10() const { return ___U3CspeedPointU3Ek__BackingField_10; }
	inline RoutePoint_t1151890072 * get_address_of_U3CspeedPointU3Ek__BackingField_10() { return &___U3CspeedPointU3Ek__BackingField_10; }
	inline void set_U3CspeedPointU3Ek__BackingField_10(RoutePoint_t1151890072  value)
	{
		___U3CspeedPointU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CprogressPointU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t2855022294, ___U3CprogressPointU3Ek__BackingField_11)); }
	inline RoutePoint_t1151890072  get_U3CprogressPointU3Ek__BackingField_11() const { return ___U3CprogressPointU3Ek__BackingField_11; }
	inline RoutePoint_t1151890072 * get_address_of_U3CprogressPointU3Ek__BackingField_11() { return &___U3CprogressPointU3Ek__BackingField_11; }
	inline void set_U3CprogressPointU3Ek__BackingField_11(RoutePoint_t1151890072  value)
	{
		___U3CprogressPointU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_target_12() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t2855022294, ___target_12)); }
	inline Transform_t1980082724 * get_target_12() const { return ___target_12; }
	inline Transform_t1980082724 ** get_address_of_target_12() { return &___target_12; }
	inline void set_target_12(Transform_t1980082724 * value)
	{
		___target_12 = value;
		Il2CppCodeGenWriteBarrier((&___target_12), value);
	}

	inline static int32_t get_offset_of_progressDistance_13() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t2855022294, ___progressDistance_13)); }
	inline float get_progressDistance_13() const { return ___progressDistance_13; }
	inline float* get_address_of_progressDistance_13() { return &___progressDistance_13; }
	inline void set_progressDistance_13(float value)
	{
		___progressDistance_13 = value;
	}

	inline static int32_t get_offset_of_progressNum_14() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t2855022294, ___progressNum_14)); }
	inline int32_t get_progressNum_14() const { return ___progressNum_14; }
	inline int32_t* get_address_of_progressNum_14() { return &___progressNum_14; }
	inline void set_progressNum_14(int32_t value)
	{
		___progressNum_14 = value;
	}

	inline static int32_t get_offset_of_lastPosition_15() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t2855022294, ___lastPosition_15)); }
	inline Vector3_t291390628  get_lastPosition_15() const { return ___lastPosition_15; }
	inline Vector3_t291390628 * get_address_of_lastPosition_15() { return &___lastPosition_15; }
	inline void set_lastPosition_15(Vector3_t291390628  value)
	{
		___lastPosition_15 = value;
	}

	inline static int32_t get_offset_of_speed_16() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t2855022294, ___speed_16)); }
	inline float get_speed_16() const { return ___speed_16; }
	inline float* get_address_of_speed_16() { return &___speed_16; }
	inline void set_speed_16(float value)
	{
		___speed_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAYPOINTPROGRESSTRACKER_T2855022294_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3700 = { sizeof (WaypointCircuit_t2062768050), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3700[16] = 
{
	WaypointCircuit_t2062768050::get_offset_of_waypointList_2(),
	WaypointCircuit_t2062768050::get_offset_of_smoothRoute_3(),
	WaypointCircuit_t2062768050::get_offset_of_numPoints_4(),
	WaypointCircuit_t2062768050::get_offset_of_points_5(),
	WaypointCircuit_t2062768050::get_offset_of_distances_6(),
	WaypointCircuit_t2062768050::get_offset_of_editorVisualisationSubsteps_7(),
	WaypointCircuit_t2062768050::get_offset_of_U3CLengthU3Ek__BackingField_8(),
	WaypointCircuit_t2062768050::get_offset_of_p0n_9(),
	WaypointCircuit_t2062768050::get_offset_of_p1n_10(),
	WaypointCircuit_t2062768050::get_offset_of_p2n_11(),
	WaypointCircuit_t2062768050::get_offset_of_p3n_12(),
	WaypointCircuit_t2062768050::get_offset_of_i_13(),
	WaypointCircuit_t2062768050::get_offset_of_P0_14(),
	WaypointCircuit_t2062768050::get_offset_of_P1_15(),
	WaypointCircuit_t2062768050::get_offset_of_P2_16(),
	WaypointCircuit_t2062768050::get_offset_of_P3_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3701 = { sizeof (WaypointList_t1743079588), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3701[2] = 
{
	WaypointList_t1743079588::get_offset_of_circuit_0(),
	WaypointList_t1743079588::get_offset_of_items_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3702 = { sizeof (RoutePoint_t1151890072)+ sizeof (RuntimeObject), sizeof(RoutePoint_t1151890072 ), 0, 0 };
extern const int32_t g_FieldOffsetTable3702[2] = 
{
	RoutePoint_t1151890072::get_offset_of_position_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RoutePoint_t1151890072::get_offset_of_direction_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3703 = { sizeof (WaypointProgressTracker_t2855022294), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3703[15] = 
{
	WaypointProgressTracker_t2855022294::get_offset_of_circuit_2(),
	WaypointProgressTracker_t2855022294::get_offset_of_lookAheadForTargetOffset_3(),
	WaypointProgressTracker_t2855022294::get_offset_of_lookAheadForTargetFactor_4(),
	WaypointProgressTracker_t2855022294::get_offset_of_lookAheadForSpeedOffset_5(),
	WaypointProgressTracker_t2855022294::get_offset_of_lookAheadForSpeedFactor_6(),
	WaypointProgressTracker_t2855022294::get_offset_of_progressStyle_7(),
	WaypointProgressTracker_t2855022294::get_offset_of_pointToPointThreshold_8(),
	WaypointProgressTracker_t2855022294::get_offset_of_U3CtargetPointU3Ek__BackingField_9(),
	WaypointProgressTracker_t2855022294::get_offset_of_U3CspeedPointU3Ek__BackingField_10(),
	WaypointProgressTracker_t2855022294::get_offset_of_U3CprogressPointU3Ek__BackingField_11(),
	WaypointProgressTracker_t2855022294::get_offset_of_target_12(),
	WaypointProgressTracker_t2855022294::get_offset_of_progressDistance_13(),
	WaypointProgressTracker_t2855022294::get_offset_of_progressNum_14(),
	WaypointProgressTracker_t2855022294::get_offset_of_lastPosition_15(),
	WaypointProgressTracker_t2855022294::get_offset_of_speed_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3704 = { sizeof (ProgressStyle_t3721564126)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3704[3] = 
{
	ProgressStyle_t3721564126::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
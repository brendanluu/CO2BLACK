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

// System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>
struct List_1_t3333589015;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t2840981766;
// UnityEngine.Collider2D
struct Collider2D_t2668633351;
// UnityEngine.Rigidbody2D[]
struct Rigidbody2DU5BU5D_t1099441232;
// System.Void
struct Void_t4136374549;

extern RuntimeClass* List_1_t3333589015_il2cpp_TypeInfo_var;
extern RuntimeClass* Physics2D_t3913907731_il2cpp_TypeInfo_var;
extern const RuntimeMethod* List_1__ctor_m644676237_RuntimeMethod_var;
extern const uint32_t Physics2D__cctor_m3925668324_MetadataUsageId;



#ifndef U3CMODULEU3E_T1323879352_H
#define U3CMODULEU3E_T1323879352_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t1323879352 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T1323879352_H
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
#ifndef PHYSICS2D_T3913907731_H
#define PHYSICS2D_T3913907731_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Physics2D
struct  Physics2D_t3913907731  : public RuntimeObject
{
public:

public:
};

struct Physics2D_t3913907731_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Rigidbody2D> UnityEngine.Physics2D::m_LastDisabledRigidbody2D
	List_1_t3333589015 * ___m_LastDisabledRigidbody2D_0;

public:
	inline static int32_t get_offset_of_m_LastDisabledRigidbody2D_0() { return static_cast<int32_t>(offsetof(Physics2D_t3913907731_StaticFields, ___m_LastDisabledRigidbody2D_0)); }
	inline List_1_t3333589015 * get_m_LastDisabledRigidbody2D_0() const { return ___m_LastDisabledRigidbody2D_0; }
	inline List_1_t3333589015 ** get_address_of_m_LastDisabledRigidbody2D_0() { return &___m_LastDisabledRigidbody2D_0; }
	inline void set_m_LastDisabledRigidbody2D_0(List_1_t3333589015 * value)
	{
		___m_LastDisabledRigidbody2D_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_LastDisabledRigidbody2D_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PHYSICS2D_T3913907731_H
#ifndef LIST_1_T3333589015_H
#define LIST_1_T3333589015_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>
struct  List_1_t3333589015  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Rigidbody2DU5BU5D_t1099441232* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3333589015, ____items_1)); }
	inline Rigidbody2DU5BU5D_t1099441232* get__items_1() const { return ____items_1; }
	inline Rigidbody2DU5BU5D_t1099441232** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Rigidbody2DU5BU5D_t1099441232* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3333589015, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3333589015, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t3333589015_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	Rigidbody2DU5BU5D_t1099441232* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t3333589015_StaticFields, ___EmptyArray_4)); }
	inline Rigidbody2DU5BU5D_t1099441232* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline Rigidbody2DU5BU5D_t1099441232** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(Rigidbody2DU5BU5D_t1099441232* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3333589015_H
#ifndef VALUETYPE_T4009624709_H
#define VALUETYPE_T4009624709_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t4009624709  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4009624709_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4009624709_marshaled_com
{
};
#endif // VALUETYPE_T4009624709_H
#ifndef VOID_T4136374549_H
#define VOID_T4136374549_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t4136374549 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T4136374549_H
#ifndef VECTOR2_T1019859886_H
#define VECTOR2_T1019859886_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t1019859886 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t1019859886, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t1019859886, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t1019859886_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1019859886  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1019859886  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1019859886  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1019859886  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1019859886  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1019859886  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1019859886  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1019859886  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t1019859886_StaticFields, ___zeroVector_2)); }
	inline Vector2_t1019859886  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t1019859886 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t1019859886  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t1019859886_StaticFields, ___oneVector_3)); }
	inline Vector2_t1019859886  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t1019859886 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t1019859886  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t1019859886_StaticFields, ___upVector_4)); }
	inline Vector2_t1019859886  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t1019859886 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t1019859886  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t1019859886_StaticFields, ___downVector_5)); }
	inline Vector2_t1019859886  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t1019859886 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t1019859886  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t1019859886_StaticFields, ___leftVector_6)); }
	inline Vector2_t1019859886  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t1019859886 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t1019859886  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t1019859886_StaticFields, ___rightVector_7)); }
	inline Vector2_t1019859886  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t1019859886 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t1019859886  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t1019859886_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t1019859886  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t1019859886 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t1019859886  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t1019859886_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t1019859886  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t1019859886 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t1019859886  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T1019859886_H
#ifndef SINGLE_T293141975_H
#define SINGLE_T293141975_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t293141975 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t293141975, ___m_value_7)); }
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
#endif // SINGLE_T293141975_H
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
#ifndef RAYCASTHIT2D_T954040679_H
#define RAYCASTHIT2D_T954040679_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RaycastHit2D
struct  RaycastHit2D_t954040679 
{
public:
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Centroid
	Vector2_t1019859886  ___m_Centroid_0;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Point
	Vector2_t1019859886  ___m_Point_1;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Normal
	Vector2_t1019859886  ___m_Normal_2;
	// System.Single UnityEngine.RaycastHit2D::m_Distance
	float ___m_Distance_3;
	// System.Single UnityEngine.RaycastHit2D::m_Fraction
	float ___m_Fraction_4;
	// UnityEngine.Collider2D UnityEngine.RaycastHit2D::m_Collider
	Collider2D_t2668633351 * ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Centroid_0() { return static_cast<int32_t>(offsetof(RaycastHit2D_t954040679, ___m_Centroid_0)); }
	inline Vector2_t1019859886  get_m_Centroid_0() const { return ___m_Centroid_0; }
	inline Vector2_t1019859886 * get_address_of_m_Centroid_0() { return &___m_Centroid_0; }
	inline void set_m_Centroid_0(Vector2_t1019859886  value)
	{
		___m_Centroid_0 = value;
	}

	inline static int32_t get_offset_of_m_Point_1() { return static_cast<int32_t>(offsetof(RaycastHit2D_t954040679, ___m_Point_1)); }
	inline Vector2_t1019859886  get_m_Point_1() const { return ___m_Point_1; }
	inline Vector2_t1019859886 * get_address_of_m_Point_1() { return &___m_Point_1; }
	inline void set_m_Point_1(Vector2_t1019859886  value)
	{
		___m_Point_1 = value;
	}

	inline static int32_t get_offset_of_m_Normal_2() { return static_cast<int32_t>(offsetof(RaycastHit2D_t954040679, ___m_Normal_2)); }
	inline Vector2_t1019859886  get_m_Normal_2() const { return ___m_Normal_2; }
	inline Vector2_t1019859886 * get_address_of_m_Normal_2() { return &___m_Normal_2; }
	inline void set_m_Normal_2(Vector2_t1019859886  value)
	{
		___m_Normal_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit2D_t954040679, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_Fraction_4() { return static_cast<int32_t>(offsetof(RaycastHit2D_t954040679, ___m_Fraction_4)); }
	inline float get_m_Fraction_4() const { return ___m_Fraction_4; }
	inline float* get_address_of_m_Fraction_4() { return &___m_Fraction_4; }
	inline void set_m_Fraction_4(float value)
	{
		___m_Fraction_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit2D_t954040679, ___m_Collider_5)); }
	inline Collider2D_t2668633351 * get_m_Collider_5() const { return ___m_Collider_5; }
	inline Collider2D_t2668633351 ** get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(Collider2D_t2668633351 * value)
	{
		___m_Collider_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_Collider_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.RaycastHit2D
struct RaycastHit2D_t954040679_marshaled_pinvoke
{
	Vector2_t1019859886  ___m_Centroid_0;
	Vector2_t1019859886  ___m_Point_1;
	Vector2_t1019859886  ___m_Normal_2;
	float ___m_Distance_3;
	float ___m_Fraction_4;
	Collider2D_t2668633351 * ___m_Collider_5;
};
// Native definition for COM marshalling of UnityEngine.RaycastHit2D
struct RaycastHit2D_t954040679_marshaled_com
{
	Vector2_t1019859886  ___m_Centroid_0;
	Vector2_t1019859886  ___m_Point_1;
	Vector2_t1019859886  ___m_Normal_2;
	float ___m_Distance_3;
	float ___m_Fraction_4;
	Collider2D_t2668633351 * ___m_Collider_5;
};
#endif // RAYCASTHIT2D_T954040679_H
#ifndef OBJECT_T3749351635_H
#define OBJECT_T3749351635_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t3749351635  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t3749351635, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t3749351635_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t3749351635_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
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
struct Object_t3749351635_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t3749351635_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T3749351635_H
#ifndef COMPONENT_T831370363_H
#define COMPONENT_T831370363_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t831370363  : public Object_t3749351635
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T831370363_H
#ifndef RIGIDBODY2D_T3012562077_H
#define RIGIDBODY2D_T3012562077_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rigidbody2D
struct  Rigidbody2D_t3012562077  : public Component_t831370363
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIGIDBODY2D_T3012562077_H
#ifndef BEHAVIOUR_T698735183_H
#define BEHAVIOUR_T698735183_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t698735183  : public Component_t831370363
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T698735183_H
#ifndef COLLIDER2D_T2668633351_H
#define COLLIDER2D_T2668633351_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collider2D
struct  Collider2D_t2668633351  : public Behaviour_t698735183
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLIDER2D_T2668633351_H


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C"  void List_1__ctor_m272920015_gshared (List_1_t2840981766 * __this, const RuntimeMethod* method);

// System.Void System.Collections.Generic.List`1<UnityEngine.Rigidbody2D>::.ctor()
#define List_1__ctor_m644676237(__this, method) ((  void (*) (List_1_t3333589015 *, const RuntimeMethod*))List_1__ctor_m272920015_gshared)(__this, method)
// UnityEngine.Vector2 UnityEngine.RaycastHit2D::get_point()
extern "C"  Vector2_t1019859886  RaycastHit2D_get_point_m1589185578 (RaycastHit2D_t954040679 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.RaycastHit2D::get_normal()
extern "C"  Vector2_t1019859886  RaycastHit2D_get_normal_m1619081717 (RaycastHit2D_t954040679 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.RaycastHit2D::get_distance()
extern "C"  float RaycastHit2D_get_distance_m2607310481 (RaycastHit2D_t954040679 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider2D UnityEngine.RaycastHit2D::get_collider()
extern "C"  Collider2D_t2668633351 * RaycastHit2D_get_collider_m43197427 (RaycastHit2D_t954040679 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Physics2D::.cctor()
extern "C"  void Physics2D__cctor_m3925668324 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Physics2D__cctor_m3925668324_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t3333589015 * L_0 = (List_1_t3333589015 *)il2cpp_codegen_object_new(List_1_t3333589015_il2cpp_TypeInfo_var);
		List_1__ctor_m644676237(L_0, /*hidden argument*/List_1__ctor_m644676237_RuntimeMethod_var);
		((Physics2D_t3913907731_StaticFields*)il2cpp_codegen_static_fields_for(Physics2D_t3913907731_il2cpp_TypeInfo_var))->set_m_LastDisabledRigidbody2D_0(L_0);
		return;
	}
}
// Conversion methods for marshalling of: UnityEngine.RaycastHit2D
extern "C" void RaycastHit2D_t954040679_marshal_pinvoke(const RaycastHit2D_t954040679& unmarshaled, RaycastHit2D_t954040679_marshaled_pinvoke& marshaled)
{
	Il2CppCodeGenException* ___m_Collider_5Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Collider' of type 'RaycastHit2D': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Collider_5Exception);
}
extern "C" void RaycastHit2D_t954040679_marshal_pinvoke_back(const RaycastHit2D_t954040679_marshaled_pinvoke& marshaled, RaycastHit2D_t954040679& unmarshaled)
{
	Il2CppCodeGenException* ___m_Collider_5Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Collider' of type 'RaycastHit2D': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Collider_5Exception);
}
// Conversion method for clean up from marshalling of: UnityEngine.RaycastHit2D
extern "C" void RaycastHit2D_t954040679_marshal_pinvoke_cleanup(RaycastHit2D_t954040679_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.RaycastHit2D
extern "C" void RaycastHit2D_t954040679_marshal_com(const RaycastHit2D_t954040679& unmarshaled, RaycastHit2D_t954040679_marshaled_com& marshaled)
{
	Il2CppCodeGenException* ___m_Collider_5Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Collider' of type 'RaycastHit2D': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Collider_5Exception);
}
extern "C" void RaycastHit2D_t954040679_marshal_com_back(const RaycastHit2D_t954040679_marshaled_com& marshaled, RaycastHit2D_t954040679& unmarshaled)
{
	Il2CppCodeGenException* ___m_Collider_5Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Collider' of type 'RaycastHit2D': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Collider_5Exception);
}
// Conversion method for clean up from marshalling of: UnityEngine.RaycastHit2D
extern "C" void RaycastHit2D_t954040679_marshal_com_cleanup(RaycastHit2D_t954040679_marshaled_com& marshaled)
{
}
// UnityEngine.Vector2 UnityEngine.RaycastHit2D::get_point()
extern "C"  Vector2_t1019859886  RaycastHit2D_get_point_m1589185578 (RaycastHit2D_t954040679 * __this, const RuntimeMethod* method)
{
	Vector2_t1019859886  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Vector2_t1019859886  L_0 = __this->get_m_Point_1();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		Vector2_t1019859886  L_1 = V_0;
		return L_1;
	}
}
extern "C"  Vector2_t1019859886  RaycastHit2D_get_point_m1589185578_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	RaycastHit2D_t954040679 * _thisAdjusted = reinterpret_cast<RaycastHit2D_t954040679 *>(__this + 1);
	return RaycastHit2D_get_point_m1589185578(_thisAdjusted, method);
}
// UnityEngine.Vector2 UnityEngine.RaycastHit2D::get_normal()
extern "C"  Vector2_t1019859886  RaycastHit2D_get_normal_m1619081717 (RaycastHit2D_t954040679 * __this, const RuntimeMethod* method)
{
	Vector2_t1019859886  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Vector2_t1019859886  L_0 = __this->get_m_Normal_2();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		Vector2_t1019859886  L_1 = V_0;
		return L_1;
	}
}
extern "C"  Vector2_t1019859886  RaycastHit2D_get_normal_m1619081717_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	RaycastHit2D_t954040679 * _thisAdjusted = reinterpret_cast<RaycastHit2D_t954040679 *>(__this + 1);
	return RaycastHit2D_get_normal_m1619081717(_thisAdjusted, method);
}
// System.Single UnityEngine.RaycastHit2D::get_distance()
extern "C"  float RaycastHit2D_get_distance_m2607310481 (RaycastHit2D_t954040679 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_m_Distance_3();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		float L_1 = V_0;
		return L_1;
	}
}
extern "C"  float RaycastHit2D_get_distance_m2607310481_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	RaycastHit2D_t954040679 * _thisAdjusted = reinterpret_cast<RaycastHit2D_t954040679 *>(__this + 1);
	return RaycastHit2D_get_distance_m2607310481(_thisAdjusted, method);
}
// UnityEngine.Collider2D UnityEngine.RaycastHit2D::get_collider()
extern "C"  Collider2D_t2668633351 * RaycastHit2D_get_collider_m43197427 (RaycastHit2D_t954040679 * __this, const RuntimeMethod* method)
{
	Collider2D_t2668633351 * V_0 = NULL;
	{
		Collider2D_t2668633351 * L_0 = __this->get_m_Collider_5();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		Collider2D_t2668633351 * L_1 = V_0;
		return L_1;
	}
}
extern "C"  Collider2D_t2668633351 * RaycastHit2D_get_collider_m43197427_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	RaycastHit2D_t954040679 * _thisAdjusted = reinterpret_cast<RaycastHit2D_t954040679 *>(__this + 1);
	return RaycastHit2D_get_collider_m43197427(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif

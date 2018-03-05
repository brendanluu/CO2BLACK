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

// System.Runtime.Serialization.DataContractAttribute
<<<<<<< HEAD
struct DataContractAttribute_t694259282;
=======
<<<<<<< Updated upstream
struct DataContractAttribute_t3785936111;
>>>>>>> 24664fc6888101c0d50081b46e2eedafd056aeeb
// System.Runtime.Serialization.DataMemberAttribute
struct DataMemberAttribute_t398377566;
// System.String
struct String_t;
// System.Runtime.Serialization.EnumMemberAttribute
struct EnumMemberAttribute_t1958771489;
// System.Char[]
<<<<<<< HEAD
struct CharU5BU5D_t978687826;
=======
struct CharU5BU5D_t41054819;
=======
struct DataContractAttribute_t3299780397;
// System.Runtime.Serialization.DataMemberAttribute
struct DataMemberAttribute_t2540677455;
// System.String
struct String_t;
// System.Runtime.Serialization.EnumMemberAttribute
struct EnumMemberAttribute_t1682876612;
// System.Char[]
struct CharU5BU5D_t2530857420;
>>>>>>> Stashed changes
>>>>>>> 24664fc6888101c0d50081b46e2eedafd056aeeb




<<<<<<< HEAD
#ifndef U3CMODULEU3E_T3279528550_H
#define U3CMODULEU3E_T3279528550_H
=======
<<<<<<< Updated upstream
#ifndef U3CMODULEU3E_T604819507_H
#define U3CMODULEU3E_T604819507_H
=======
#ifndef U3CMODULEU3E_T407905632_H
#define U3CMODULEU3E_T407905632_H
>>>>>>> Stashed changes
>>>>>>> 24664fc6888101c0d50081b46e2eedafd056aeeb
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
<<<<<<< HEAD
struct  U3CModuleU3E_t3279528550 
=======
<<<<<<< Updated upstream
struct  U3CModuleU3E_t604819507 
=======
struct  U3CModuleU3E_t407905632 
>>>>>>> Stashed changes
>>>>>>> 24664fc6888101c0d50081b46e2eedafd056aeeb
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // U3CMODULEU3E_T3279528550_H
=======
<<<<<<< Updated upstream
#endif // U3CMODULEU3E_T604819507_H
=======
#endif // U3CMODULEU3E_T407905632_H
>>>>>>> Stashed changes
>>>>>>> 24664fc6888101c0d50081b46e2eedafd056aeeb
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
	CharU5BU5D_t978687826* ___WhiteChars_3;
=======
<<<<<<< Updated upstream
	CharU5BU5D_t41054819* ___WhiteChars_3;
=======
	CharU5BU5D_t2530857420* ___WhiteChars_3;
>>>>>>> Stashed changes
>>>>>>> 24664fc6888101c0d50081b46e2eedafd056aeeb

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
	inline CharU5BU5D_t978687826* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t978687826** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t978687826* value)
=======
<<<<<<< Updated upstream
	inline CharU5BU5D_t41054819* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t41054819** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t41054819* value)
=======
	inline CharU5BU5D_t2530857420* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t2530857420** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t2530857420* value)
>>>>>>> Stashed changes
>>>>>>> 24664fc6888101c0d50081b46e2eedafd056aeeb
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
#ifndef ATTRIBUTE_T1812881570_H
#define ATTRIBUTE_T1812881570_H
=======
<<<<<<< Updated upstream
#ifndef ATTRIBUTE_T1294900509_H
#define ATTRIBUTE_T1294900509_H
=======
#ifndef ATTRIBUTE_T2620286537_H
#define ATTRIBUTE_T2620286537_H
>>>>>>> Stashed changes
>>>>>>> 24664fc6888101c0d50081b46e2eedafd056aeeb
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
<<<<<<< HEAD
struct  Attribute_t1812881570  : public RuntimeObject
=======
<<<<<<< Updated upstream
struct  Attribute_t1294900509  : public RuntimeObject
=======
struct  Attribute_t2620286537  : public RuntimeObject
>>>>>>> Stashed changes
>>>>>>> 24664fc6888101c0d50081b46e2eedafd056aeeb
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // ATTRIBUTE_T1812881570_H
#ifndef VALUETYPE_T2847096293_H
#define VALUETYPE_T2847096293_H
=======
<<<<<<< Updated upstream
#endif // ATTRIBUTE_T1294900509_H
#ifndef VALUETYPE_T3976162219_H
#define VALUETYPE_T3976162219_H
=======
#endif // ATTRIBUTE_T2620286537_H
#ifndef VALUETYPE_T2823937718_H
#define VALUETYPE_T2823937718_H
>>>>>>> Stashed changes
>>>>>>> 24664fc6888101c0d50081b46e2eedafd056aeeb
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
<<<<<<< HEAD
struct  ValueType_t2847096293  : public RuntimeObject
=======
<<<<<<< Updated upstream
struct  ValueType_t3976162219  : public RuntimeObject
=======
struct  ValueType_t2823937718  : public RuntimeObject
>>>>>>> Stashed changes
>>>>>>> 24664fc6888101c0d50081b46e2eedafd056aeeb
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
<<<<<<< HEAD
struct ValueType_t2847096293_marshaled_pinvoke
=======
<<<<<<< Updated upstream
struct ValueType_t3976162219_marshaled_pinvoke
>>>>>>> 24664fc6888101c0d50081b46e2eedafd056aeeb
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t2847096293_marshaled_com
{
};
<<<<<<< HEAD
#endif // VALUETYPE_T2847096293_H
#ifndef DATACONTRACTATTRIBUTE_T694259282_H
#define DATACONTRACTATTRIBUTE_T694259282_H
=======
#endif // VALUETYPE_T3976162219_H
#ifndef DATACONTRACTATTRIBUTE_T3785936111_H
#define DATACONTRACTATTRIBUTE_T3785936111_H
=======
struct ValueType_t2823937718_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t2823937718_marshaled_com
{
};
#endif // VALUETYPE_T2823937718_H
#ifndef DATACONTRACTATTRIBUTE_T3299780397_H
#define DATACONTRACTATTRIBUTE_T3299780397_H
>>>>>>> Stashed changes
>>>>>>> 24664fc6888101c0d50081b46e2eedafd056aeeb
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.DataContractAttribute
<<<<<<< HEAD
struct  DataContractAttribute_t694259282  : public Attribute_t1812881570
=======
<<<<<<< Updated upstream
struct  DataContractAttribute_t3785936111  : public Attribute_t1294900509
=======
struct  DataContractAttribute_t3299780397  : public Attribute_t2620286537
>>>>>>> Stashed changes
>>>>>>> 24664fc6888101c0d50081b46e2eedafd056aeeb
{
public:
	// System.Boolean System.Runtime.Serialization.DataContractAttribute::<IsReference>k__BackingField
	bool ___U3CIsReferenceU3Ek__BackingField_0;

public:
<<<<<<< HEAD
	inline static int32_t get_offset_of_U3CIsReferenceU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(DataContractAttribute_t694259282, ___U3CIsReferenceU3Ek__BackingField_0)); }
=======
<<<<<<< Updated upstream
	inline static int32_t get_offset_of_U3CIsReferenceU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(DataContractAttribute_t3785936111, ___U3CIsReferenceU3Ek__BackingField_0)); }
=======
	inline static int32_t get_offset_of_U3CIsReferenceU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(DataContractAttribute_t3299780397, ___U3CIsReferenceU3Ek__BackingField_0)); }
>>>>>>> Stashed changes
>>>>>>> 24664fc6888101c0d50081b46e2eedafd056aeeb
	inline bool get_U3CIsReferenceU3Ek__BackingField_0() const { return ___U3CIsReferenceU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CIsReferenceU3Ek__BackingField_0() { return &___U3CIsReferenceU3Ek__BackingField_0; }
	inline void set_U3CIsReferenceU3Ek__BackingField_0(bool value)
	{
		___U3CIsReferenceU3Ek__BackingField_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // DATACONTRACTATTRIBUTE_T694259282_H
#ifndef BOOLEAN_T142808885_H
#define BOOLEAN_T142808885_H
=======
<<<<<<< Updated upstream
#endif // DATACONTRACTATTRIBUTE_T3785936111_H
#ifndef BOOLEAN_T4226870357_H
#define BOOLEAN_T4226870357_H
=======
#endif // DATACONTRACTATTRIBUTE_T3299780397_H
#ifndef BOOLEAN_T2039284079_H
#define BOOLEAN_T2039284079_H
>>>>>>> Stashed changes
>>>>>>> 24664fc6888101c0d50081b46e2eedafd056aeeb
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
<<<<<<< HEAD
struct  Boolean_t142808885 
=======
<<<<<<< Updated upstream
struct  Boolean_t4226870357 
=======
struct  Boolean_t2039284079 
>>>>>>> Stashed changes
>>>>>>> 24664fc6888101c0d50081b46e2eedafd056aeeb
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
<<<<<<< HEAD
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t142808885, ___m_value_2)); }
=======
<<<<<<< Updated upstream
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t4226870357, ___m_value_2)); }
=======
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t2039284079, ___m_value_2)); }
>>>>>>> Stashed changes
>>>>>>> 24664fc6888101c0d50081b46e2eedafd056aeeb
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

<<<<<<< HEAD
struct Boolean_t142808885_StaticFields
=======
<<<<<<< Updated upstream
struct Boolean_t4226870357_StaticFields
=======
struct Boolean_t2039284079_StaticFields
>>>>>>> Stashed changes
>>>>>>> 24664fc6888101c0d50081b46e2eedafd056aeeb
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
<<<<<<< HEAD
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t142808885_StaticFields, ___FalseString_0)); }
=======
<<<<<<< Updated upstream
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t4226870357_StaticFields, ___FalseString_0)); }
=======
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t2039284079_StaticFields, ___FalseString_0)); }
>>>>>>> Stashed changes
>>>>>>> 24664fc6888101c0d50081b46e2eedafd056aeeb
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

<<<<<<< HEAD
	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t142808885_StaticFields, ___TrueString_1)); }
=======
<<<<<<< Updated upstream
	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t4226870357_StaticFields, ___TrueString_1)); }
=======
	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t2039284079_StaticFields, ___TrueString_1)); }
>>>>>>> Stashed changes
>>>>>>> 24664fc6888101c0d50081b46e2eedafd056aeeb
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
#endif // BOOLEAN_T142808885_H
#ifndef DATAMEMBERATTRIBUTE_T398377566_H
#define DATAMEMBERATTRIBUTE_T398377566_H
=======
<<<<<<< Updated upstream
#endif // BOOLEAN_T4226870357_H
#ifndef DATAMEMBERATTRIBUTE_T3357624496_H
#define DATAMEMBERATTRIBUTE_T3357624496_H
=======
#endif // BOOLEAN_T2039284079_H
#ifndef DATAMEMBERATTRIBUTE_T2540677455_H
#define DATAMEMBERATTRIBUTE_T2540677455_H
>>>>>>> Stashed changes
>>>>>>> 24664fc6888101c0d50081b46e2eedafd056aeeb
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.DataMemberAttribute
<<<<<<< HEAD
struct  DataMemberAttribute_t398377566  : public Attribute_t1812881570
=======
<<<<<<< Updated upstream
struct  DataMemberAttribute_t3357624496  : public Attribute_t1294900509
=======
struct  DataMemberAttribute_t2540677455  : public Attribute_t2620286537
>>>>>>> Stashed changes
>>>>>>> 24664fc6888101c0d50081b46e2eedafd056aeeb
{
public:
	// System.Boolean System.Runtime.Serialization.DataMemberAttribute::is_required
	bool ___is_required_0;
	// System.Boolean System.Runtime.Serialization.DataMemberAttribute::emit_default
	bool ___emit_default_1;
	// System.String System.Runtime.Serialization.DataMemberAttribute::name
	String_t* ___name_2;
	// System.Int32 System.Runtime.Serialization.DataMemberAttribute::order
	int32_t ___order_3;

public:
<<<<<<< HEAD
	inline static int32_t get_offset_of_is_required_0() { return static_cast<int32_t>(offsetof(DataMemberAttribute_t398377566, ___is_required_0)); }
=======
<<<<<<< Updated upstream
	inline static int32_t get_offset_of_is_required_0() { return static_cast<int32_t>(offsetof(DataMemberAttribute_t3357624496, ___is_required_0)); }
=======
	inline static int32_t get_offset_of_is_required_0() { return static_cast<int32_t>(offsetof(DataMemberAttribute_t2540677455, ___is_required_0)); }
>>>>>>> Stashed changes
>>>>>>> 24664fc6888101c0d50081b46e2eedafd056aeeb
	inline bool get_is_required_0() const { return ___is_required_0; }
	inline bool* get_address_of_is_required_0() { return &___is_required_0; }
	inline void set_is_required_0(bool value)
	{
		___is_required_0 = value;
	}

<<<<<<< HEAD
	inline static int32_t get_offset_of_emit_default_1() { return static_cast<int32_t>(offsetof(DataMemberAttribute_t398377566, ___emit_default_1)); }
=======
<<<<<<< Updated upstream
	inline static int32_t get_offset_of_emit_default_1() { return static_cast<int32_t>(offsetof(DataMemberAttribute_t3357624496, ___emit_default_1)); }
=======
	inline static int32_t get_offset_of_emit_default_1() { return static_cast<int32_t>(offsetof(DataMemberAttribute_t2540677455, ___emit_default_1)); }
>>>>>>> Stashed changes
>>>>>>> 24664fc6888101c0d50081b46e2eedafd056aeeb
	inline bool get_emit_default_1() const { return ___emit_default_1; }
	inline bool* get_address_of_emit_default_1() { return &___emit_default_1; }
	inline void set_emit_default_1(bool value)
	{
		___emit_default_1 = value;
	}

<<<<<<< HEAD
	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(DataMemberAttribute_t398377566, ___name_2)); }
=======
<<<<<<< Updated upstream
	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(DataMemberAttribute_t3357624496, ___name_2)); }
=======
	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(DataMemberAttribute_t2540677455, ___name_2)); }
>>>>>>> Stashed changes
>>>>>>> 24664fc6888101c0d50081b46e2eedafd056aeeb
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((&___name_2), value);
	}

<<<<<<< HEAD
	inline static int32_t get_offset_of_order_3() { return static_cast<int32_t>(offsetof(DataMemberAttribute_t398377566, ___order_3)); }
=======
<<<<<<< Updated upstream
	inline static int32_t get_offset_of_order_3() { return static_cast<int32_t>(offsetof(DataMemberAttribute_t3357624496, ___order_3)); }
=======
	inline static int32_t get_offset_of_order_3() { return static_cast<int32_t>(offsetof(DataMemberAttribute_t2540677455, ___order_3)); }
>>>>>>> Stashed changes
>>>>>>> 24664fc6888101c0d50081b46e2eedafd056aeeb
	inline int32_t get_order_3() const { return ___order_3; }
	inline int32_t* get_address_of_order_3() { return &___order_3; }
	inline void set_order_3(int32_t value)
	{
		___order_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // DATAMEMBERATTRIBUTE_T398377566_H
#ifndef INT32_T95210643_H
#define INT32_T95210643_H
=======
<<<<<<< Updated upstream
#endif // DATAMEMBERATTRIBUTE_T3357624496_H
#ifndef INT32_T3654877811_H
#define INT32_T3654877811_H
=======
#endif // DATAMEMBERATTRIBUTE_T2540677455_H
#ifndef INT32_T453749467_H
#define INT32_T453749467_H
>>>>>>> Stashed changes
>>>>>>> 24664fc6888101c0d50081b46e2eedafd056aeeb
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
<<<<<<< HEAD
struct  Int32_t95210643 
=======
<<<<<<< Updated upstream
struct  Int32_t3654877811 
=======
struct  Int32_t453749467 
>>>>>>> Stashed changes
>>>>>>> 24664fc6888101c0d50081b46e2eedafd056aeeb
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
<<<<<<< HEAD
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t95210643, ___m_value_2)); }
=======
<<<<<<< Updated upstream
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t3654877811, ___m_value_2)); }
=======
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t453749467, ___m_value_2)); }
>>>>>>> Stashed changes
>>>>>>> 24664fc6888101c0d50081b46e2eedafd056aeeb
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // INT32_T95210643_H
#ifndef ENUMMEMBERATTRIBUTE_T1958771489_H
#define ENUMMEMBERATTRIBUTE_T1958771489_H
=======
<<<<<<< Updated upstream
#endif // INT32_T3654877811_H
#ifndef ENUMMEMBERATTRIBUTE_T4118291496_H
#define ENUMMEMBERATTRIBUTE_T4118291496_H
=======
#endif // INT32_T453749467_H
#ifndef ENUMMEMBERATTRIBUTE_T1682876612_H
#define ENUMMEMBERATTRIBUTE_T1682876612_H
>>>>>>> Stashed changes
>>>>>>> 24664fc6888101c0d50081b46e2eedafd056aeeb
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.EnumMemberAttribute
<<<<<<< HEAD
struct  EnumMemberAttribute_t1958771489  : public Attribute_t1812881570
=======
<<<<<<< Updated upstream
struct  EnumMemberAttribute_t4118291496  : public Attribute_t1294900509
=======
struct  EnumMemberAttribute_t1682876612  : public Attribute_t2620286537
>>>>>>> Stashed changes
>>>>>>> 24664fc6888101c0d50081b46e2eedafd056aeeb
{
public:
	// System.String System.Runtime.Serialization.EnumMemberAttribute::value
	String_t* ___value_0;

public:
<<<<<<< HEAD
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(EnumMemberAttribute_t1958771489, ___value_0)); }
=======
<<<<<<< Updated upstream
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(EnumMemberAttribute_t4118291496, ___value_0)); }
=======
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(EnumMemberAttribute_t1682876612, ___value_0)); }
>>>>>>> Stashed changes
>>>>>>> 24664fc6888101c0d50081b46e2eedafd056aeeb
	inline String_t* get_value_0() const { return ___value_0; }
	inline String_t** get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(String_t* value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((&___value_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // ENUMMEMBERATTRIBUTE_T1958771489_H
=======
<<<<<<< Updated upstream
#endif // ENUMMEMBERATTRIBUTE_T4118291496_H
=======
#endif // ENUMMEMBERATTRIBUTE_T1682876612_H
>>>>>>> Stashed changes
>>>>>>> 24664fc6888101c0d50081b46e2eedafd056aeeb



#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean System.Runtime.Serialization.DataContractAttribute::get_IsReference()
<<<<<<< HEAD
extern "C"  bool DataContractAttribute_get_IsReference_m1969425529 (DataContractAttribute_t694259282 * __this, const RuntimeMethod* method)
=======
<<<<<<< Updated upstream
extern "C"  bool DataContractAttribute_get_IsReference_m2356627818 (DataContractAttribute_t3785936111 * __this, const RuntimeMethod* method)
=======
extern "C"  bool DataContractAttribute_get_IsReference_m2097478745 (DataContractAttribute_t3299780397 * __this, const RuntimeMethod* method)
>>>>>>> Stashed changes
>>>>>>> 24664fc6888101c0d50081b46e2eedafd056aeeb
{
	{
		bool L_0 = __this->get_U3CIsReferenceU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Boolean System.Runtime.Serialization.DataMemberAttribute::get_EmitDefaultValue()
<<<<<<< HEAD
extern "C"  bool DataMemberAttribute_get_EmitDefaultValue_m4147430497 (DataMemberAttribute_t398377566 * __this, const RuntimeMethod* method)
=======
<<<<<<< Updated upstream
extern "C"  bool DataMemberAttribute_get_EmitDefaultValue_m1818359023 (DataMemberAttribute_t3357624496 * __this, const RuntimeMethod* method)
=======
extern "C"  bool DataMemberAttribute_get_EmitDefaultValue_m2055843860 (DataMemberAttribute_t2540677455 * __this, const RuntimeMethod* method)
>>>>>>> Stashed changes
>>>>>>> 24664fc6888101c0d50081b46e2eedafd056aeeb
{
	{
		bool L_0 = __this->get_emit_default_1();
		return L_0;
	}
}
// System.Boolean System.Runtime.Serialization.DataMemberAttribute::get_IsRequired()
<<<<<<< HEAD
extern "C"  bool DataMemberAttribute_get_IsRequired_m2007430512 (DataMemberAttribute_t398377566 * __this, const RuntimeMethod* method)
=======
<<<<<<< Updated upstream
extern "C"  bool DataMemberAttribute_get_IsRequired_m505600781 (DataMemberAttribute_t3357624496 * __this, const RuntimeMethod* method)
=======
extern "C"  bool DataMemberAttribute_get_IsRequired_m1960722716 (DataMemberAttribute_t2540677455 * __this, const RuntimeMethod* method)
>>>>>>> Stashed changes
>>>>>>> 24664fc6888101c0d50081b46e2eedafd056aeeb
{
	{
		bool L_0 = __this->get_is_required_0();
		return L_0;
	}
}
// System.String System.Runtime.Serialization.DataMemberAttribute::get_Name()
<<<<<<< HEAD
extern "C"  String_t* DataMemberAttribute_get_Name_m3206757161 (DataMemberAttribute_t398377566 * __this, const RuntimeMethod* method)
=======
<<<<<<< Updated upstream
extern "C"  String_t* DataMemberAttribute_get_Name_m757114566 (DataMemberAttribute_t3357624496 * __this, const RuntimeMethod* method)
=======
extern "C"  String_t* DataMemberAttribute_get_Name_m3426308909 (DataMemberAttribute_t2540677455 * __this, const RuntimeMethod* method)
>>>>>>> Stashed changes
>>>>>>> 24664fc6888101c0d50081b46e2eedafd056aeeb
{
	{
		String_t* L_0 = __this->get_name_2();
		return L_0;
	}
}
// System.Int32 System.Runtime.Serialization.DataMemberAttribute::get_Order()
<<<<<<< HEAD
extern "C"  int32_t DataMemberAttribute_get_Order_m2942995656 (DataMemberAttribute_t398377566 * __this, const RuntimeMethod* method)
=======
<<<<<<< Updated upstream
extern "C"  int32_t DataMemberAttribute_get_Order_m1231336042 (DataMemberAttribute_t3357624496 * __this, const RuntimeMethod* method)
=======
extern "C"  int32_t DataMemberAttribute_get_Order_m3840060053 (DataMemberAttribute_t2540677455 * __this, const RuntimeMethod* method)
>>>>>>> Stashed changes
>>>>>>> 24664fc6888101c0d50081b46e2eedafd056aeeb
{
	{
		int32_t L_0 = __this->get_order_3();
		return L_0;
	}
}
// System.String System.Runtime.Serialization.EnumMemberAttribute::get_Value()
<<<<<<< HEAD
extern "C"  String_t* EnumMemberAttribute_get_Value_m3026344090 (EnumMemberAttribute_t1958771489 * __this, const RuntimeMethod* method)
=======
<<<<<<< Updated upstream
extern "C"  String_t* EnumMemberAttribute_get_Value_m3276917888 (EnumMemberAttribute_t4118291496 * __this, const RuntimeMethod* method)
=======
extern "C"  String_t* EnumMemberAttribute_get_Value_m713203866 (EnumMemberAttribute_t1682876612 * __this, const RuntimeMethod* method)
>>>>>>> Stashed changes
>>>>>>> 24664fc6888101c0d50081b46e2eedafd056aeeb
{
	{
		String_t* L_0 = __this->get_value_0();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif

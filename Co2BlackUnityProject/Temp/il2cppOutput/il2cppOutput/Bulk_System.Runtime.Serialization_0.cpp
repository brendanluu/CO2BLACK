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
struct DataContractAttribute_t2559366940;
// System.Runtime.Serialization.DataMemberAttribute
struct DataMemberAttribute_t2355024019;
// System.String
struct String_t;
// System.Runtime.Serialization.EnumMemberAttribute
struct EnumMemberAttribute_t3293010316;
// System.Char[]
struct CharU5BU5D_t2771807430;




#ifndef U3CMODULEU3E_T2478423215_H
#define U3CMODULEU3E_T2478423215_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t2478423215 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T2478423215_H
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
	CharU5BU5D_t2771807430* ___WhiteChars_3;

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
	inline CharU5BU5D_t2771807430* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t2771807430** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t2771807430* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef ATTRIBUTE_T3027717003_H
#define ATTRIBUTE_T3027717003_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t3027717003  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T3027717003_H
#ifndef VALUETYPE_T4042970468_H
#define VALUETYPE_T4042970468_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t4042970468  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4042970468_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4042970468_marshaled_com
{
};
#endif // VALUETYPE_T4042970468_H
#ifndef DATACONTRACTATTRIBUTE_T2559366940_H
#define DATACONTRACTATTRIBUTE_T2559366940_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.DataContractAttribute
struct  DataContractAttribute_t2559366940  : public Attribute_t3027717003
{
public:
	// System.Boolean System.Runtime.Serialization.DataContractAttribute::<IsReference>k__BackingField
	bool ___U3CIsReferenceU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CIsReferenceU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(DataContractAttribute_t2559366940, ___U3CIsReferenceU3Ek__BackingField_0)); }
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
#endif // DATACONTRACTATTRIBUTE_T2559366940_H
#ifndef BOOLEAN_T2816051599_H
#define BOOLEAN_T2816051599_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t2816051599 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t2816051599, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t2816051599_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t2816051599_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t2816051599_StaticFields, ___TrueString_1)); }
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
#endif // BOOLEAN_T2816051599_H
#ifndef DATAMEMBERATTRIBUTE_T2355024019_H
#define DATAMEMBERATTRIBUTE_T2355024019_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.DataMemberAttribute
struct  DataMemberAttribute_t2355024019  : public Attribute_t3027717003
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
	inline static int32_t get_offset_of_is_required_0() { return static_cast<int32_t>(offsetof(DataMemberAttribute_t2355024019, ___is_required_0)); }
	inline bool get_is_required_0() const { return ___is_required_0; }
	inline bool* get_address_of_is_required_0() { return &___is_required_0; }
	inline void set_is_required_0(bool value)
	{
		___is_required_0 = value;
	}

	inline static int32_t get_offset_of_emit_default_1() { return static_cast<int32_t>(offsetof(DataMemberAttribute_t2355024019, ___emit_default_1)); }
	inline bool get_emit_default_1() const { return ___emit_default_1; }
	inline bool* get_address_of_emit_default_1() { return &___emit_default_1; }
	inline void set_emit_default_1(bool value)
	{
		___emit_default_1 = value;
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(DataMemberAttribute_t2355024019, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((&___name_2), value);
	}

	inline static int32_t get_offset_of_order_3() { return static_cast<int32_t>(offsetof(DataMemberAttribute_t2355024019, ___order_3)); }
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
#endif // DATAMEMBERATTRIBUTE_T2355024019_H
#ifndef INT32_T140644697_H
#define INT32_T140644697_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t140644697 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t140644697, ___m_value_2)); }
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
#endif // INT32_T140644697_H
#ifndef ENUMMEMBERATTRIBUTE_T3293010316_H
#define ENUMMEMBERATTRIBUTE_T3293010316_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.EnumMemberAttribute
struct  EnumMemberAttribute_t3293010316  : public Attribute_t3027717003
{
public:
	// System.String System.Runtime.Serialization.EnumMemberAttribute::value
	String_t* ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(EnumMemberAttribute_t3293010316, ___value_0)); }
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
#endif // ENUMMEMBERATTRIBUTE_T3293010316_H



#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean System.Runtime.Serialization.DataContractAttribute::get_IsReference()
extern "C"  bool DataContractAttribute_get_IsReference_m1852805771 (DataContractAttribute_t2559366940 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CIsReferenceU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Boolean System.Runtime.Serialization.DataMemberAttribute::get_EmitDefaultValue()
extern "C"  bool DataMemberAttribute_get_EmitDefaultValue_m1438023710 (DataMemberAttribute_t2355024019 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_emit_default_1();
		return L_0;
	}
}
// System.Boolean System.Runtime.Serialization.DataMemberAttribute::get_IsRequired()
extern "C"  bool DataMemberAttribute_get_IsRequired_m2346073779 (DataMemberAttribute_t2355024019 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_is_required_0();
		return L_0;
	}
}
// System.String System.Runtime.Serialization.DataMemberAttribute::get_Name()
extern "C"  String_t* DataMemberAttribute_get_Name_m2852840877 (DataMemberAttribute_t2355024019 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_name_2();
		return L_0;
	}
}
// System.Int32 System.Runtime.Serialization.DataMemberAttribute::get_Order()
extern "C"  int32_t DataMemberAttribute_get_Order_m2309185227 (DataMemberAttribute_t2355024019 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_order_3();
		return L_0;
	}
}
// System.String System.Runtime.Serialization.EnumMemberAttribute::get_Value()
extern "C"  String_t* EnumMemberAttribute_get_Value_m500542176 (EnumMemberAttribute_t3293010316 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_value_0();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif

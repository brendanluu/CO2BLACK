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
<<<<<<< Updated upstream
struct DataContractAttribute_t2315392897;
// System.Runtime.Serialization.DataMemberAttribute
struct DataMemberAttribute_t698213209;
// System.String
struct String_t;
// System.Runtime.Serialization.EnumMemberAttribute
struct EnumMemberAttribute_t3657563208;
// System.Char[]
struct CharU5BU5D_t815250530;
=======
struct DataContractAttribute_t4275427674;
// System.Runtime.Serialization.DataMemberAttribute
struct DataMemberAttribute_t746166757;
// System.String
struct String_t;
// System.Runtime.Serialization.EnumMemberAttribute
struct EnumMemberAttribute_t3808718732;
// System.Char[]
struct CharU5BU5D_t3572321290;
>>>>>>> Stashed changes




<<<<<<< Updated upstream
#ifndef U3CMODULEU3E_T1833731000_H
#define U3CMODULEU3E_T1833731000_H
=======
#ifndef U3CMODULEU3E_T3585700752_H
#define U3CMODULEU3E_T3585700752_H
>>>>>>> Stashed changes
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
<<<<<<< Updated upstream
struct  U3CModuleU3E_t1833731000 
=======
struct  U3CModuleU3E_t3585700752 
>>>>>>> Stashed changes
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< Updated upstream
#endif // U3CMODULEU3E_T1833731000_H
=======
#endif // U3CMODULEU3E_T3585700752_H
>>>>>>> Stashed changes
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
<<<<<<< Updated upstream
	CharU5BU5D_t815250530* ___WhiteChars_3;
=======
	CharU5BU5D_t3572321290* ___WhiteChars_3;
>>>>>>> Stashed changes

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
<<<<<<< Updated upstream
	inline CharU5BU5D_t815250530* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t815250530** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t815250530* value)
=======
	inline CharU5BU5D_t3572321290* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3572321290** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3572321290* value)
>>>>>>> Stashed changes
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
<<<<<<< Updated upstream
#ifndef ATTRIBUTE_T1031743249_H
#define ATTRIBUTE_T1031743249_H
=======
#ifndef ATTRIBUTE_T2663242530_H
#define ATTRIBUTE_T2663242530_H
>>>>>>> Stashed changes
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
<<<<<<< Updated upstream
struct  Attribute_t1031743249  : public RuntimeObject
=======
struct  Attribute_t2663242530  : public RuntimeObject
>>>>>>> Stashed changes
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< Updated upstream
#endif // ATTRIBUTE_T1031743249_H
#ifndef VALUETYPE_T4179911041_H
#define VALUETYPE_T4179911041_H
=======
#endif // ATTRIBUTE_T2663242530_H
#ifndef VALUETYPE_T3861366942_H
#define VALUETYPE_T3861366942_H
>>>>>>> Stashed changes
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
<<<<<<< Updated upstream
struct  ValueType_t4179911041  : public RuntimeObject
=======
struct  ValueType_t3861366942  : public RuntimeObject
>>>>>>> Stashed changes
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
<<<<<<< Updated upstream
struct ValueType_t4179911041_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4179911041_marshaled_com
{
};
#endif // VALUETYPE_T4179911041_H
#ifndef DATACONTRACTATTRIBUTE_T2315392897_H
#define DATACONTRACTATTRIBUTE_T2315392897_H
=======
struct ValueType_t3861366942_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3861366942_marshaled_com
{
};
#endif // VALUETYPE_T3861366942_H
#ifndef DATACONTRACTATTRIBUTE_T4275427674_H
#define DATACONTRACTATTRIBUTE_T4275427674_H
>>>>>>> Stashed changes
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.DataContractAttribute
<<<<<<< Updated upstream
struct  DataContractAttribute_t2315392897  : public Attribute_t1031743249
=======
struct  DataContractAttribute_t4275427674  : public Attribute_t2663242530
>>>>>>> Stashed changes
{
public:
	// System.Boolean System.Runtime.Serialization.DataContractAttribute::<IsReference>k__BackingField
	bool ___U3CIsReferenceU3Ek__BackingField_0;

public:
<<<<<<< Updated upstream
	inline static int32_t get_offset_of_U3CIsReferenceU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(DataContractAttribute_t2315392897, ___U3CIsReferenceU3Ek__BackingField_0)); }
=======
	inline static int32_t get_offset_of_U3CIsReferenceU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(DataContractAttribute_t4275427674, ___U3CIsReferenceU3Ek__BackingField_0)); }
>>>>>>> Stashed changes
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
<<<<<<< Updated upstream
#endif // DATACONTRACTATTRIBUTE_T2315392897_H
#ifndef BOOLEAN_T3465289843_H
#define BOOLEAN_T3465289843_H
=======
#endif // DATACONTRACTATTRIBUTE_T4275427674_H
#ifndef BOOLEAN_T164600428_H
#define BOOLEAN_T164600428_H
>>>>>>> Stashed changes
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
<<<<<<< Updated upstream
struct  Boolean_t3465289843 
=======
struct  Boolean_t164600428 
>>>>>>> Stashed changes
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
<<<<<<< Updated upstream
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t3465289843, ___m_value_2)); }
=======
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t164600428, ___m_value_2)); }
>>>>>>> Stashed changes
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

<<<<<<< Updated upstream
struct Boolean_t3465289843_StaticFields
=======
struct Boolean_t164600428_StaticFields
>>>>>>> Stashed changes
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
<<<<<<< Updated upstream
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t3465289843_StaticFields, ___FalseString_0)); }
=======
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t164600428_StaticFields, ___FalseString_0)); }
>>>>>>> Stashed changes
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

<<<<<<< Updated upstream
	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t3465289843_StaticFields, ___TrueString_1)); }
=======
	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t164600428_StaticFields, ___TrueString_1)); }
>>>>>>> Stashed changes
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
<<<<<<< Updated upstream
#endif // BOOLEAN_T3465289843_H
#ifndef DATAMEMBERATTRIBUTE_T698213209_H
#define DATAMEMBERATTRIBUTE_T698213209_H
=======
#endif // BOOLEAN_T164600428_H
#ifndef DATAMEMBERATTRIBUTE_T746166757_H
#define DATAMEMBERATTRIBUTE_T746166757_H
>>>>>>> Stashed changes
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.DataMemberAttribute
<<<<<<< Updated upstream
struct  DataMemberAttribute_t698213209  : public Attribute_t1031743249
=======
struct  DataMemberAttribute_t746166757  : public Attribute_t2663242530
>>>>>>> Stashed changes
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
<<<<<<< Updated upstream
	inline static int32_t get_offset_of_is_required_0() { return static_cast<int32_t>(offsetof(DataMemberAttribute_t698213209, ___is_required_0)); }
=======
	inline static int32_t get_offset_of_is_required_0() { return static_cast<int32_t>(offsetof(DataMemberAttribute_t746166757, ___is_required_0)); }
>>>>>>> Stashed changes
	inline bool get_is_required_0() const { return ___is_required_0; }
	inline bool* get_address_of_is_required_0() { return &___is_required_0; }
	inline void set_is_required_0(bool value)
	{
		___is_required_0 = value;
	}

<<<<<<< Updated upstream
	inline static int32_t get_offset_of_emit_default_1() { return static_cast<int32_t>(offsetof(DataMemberAttribute_t698213209, ___emit_default_1)); }
=======
	inline static int32_t get_offset_of_emit_default_1() { return static_cast<int32_t>(offsetof(DataMemberAttribute_t746166757, ___emit_default_1)); }
>>>>>>> Stashed changes
	inline bool get_emit_default_1() const { return ___emit_default_1; }
	inline bool* get_address_of_emit_default_1() { return &___emit_default_1; }
	inline void set_emit_default_1(bool value)
	{
		___emit_default_1 = value;
	}

<<<<<<< Updated upstream
	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(DataMemberAttribute_t698213209, ___name_2)); }
=======
	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(DataMemberAttribute_t746166757, ___name_2)); }
>>>>>>> Stashed changes
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((&___name_2), value);
	}

<<<<<<< Updated upstream
	inline static int32_t get_offset_of_order_3() { return static_cast<int32_t>(offsetof(DataMemberAttribute_t698213209, ___order_3)); }
=======
	inline static int32_t get_offset_of_order_3() { return static_cast<int32_t>(offsetof(DataMemberAttribute_t746166757, ___order_3)); }
>>>>>>> Stashed changes
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
<<<<<<< Updated upstream
#endif // DATAMEMBERATTRIBUTE_T698213209_H
#ifndef INT32_T18699385_H
#define INT32_T18699385_H
=======
#endif // DATAMEMBERATTRIBUTE_T746166757_H
#ifndef INT32_T1411856073_H
#define INT32_T1411856073_H
>>>>>>> Stashed changes
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
<<<<<<< Updated upstream
struct  Int32_t18699385 
=======
struct  Int32_t1411856073 
>>>>>>> Stashed changes
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
<<<<<<< Updated upstream
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t18699385, ___m_value_2)); }
=======
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t1411856073, ___m_value_2)); }
>>>>>>> Stashed changes
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
<<<<<<< Updated upstream
#endif // INT32_T18699385_H
#ifndef ENUMMEMBERATTRIBUTE_T3657563208_H
#define ENUMMEMBERATTRIBUTE_T3657563208_H
=======
#endif // INT32_T1411856073_H
#ifndef ENUMMEMBERATTRIBUTE_T3808718732_H
#define ENUMMEMBERATTRIBUTE_T3808718732_H
>>>>>>> Stashed changes
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.EnumMemberAttribute
<<<<<<< Updated upstream
struct  EnumMemberAttribute_t3657563208  : public Attribute_t1031743249
=======
struct  EnumMemberAttribute_t3808718732  : public Attribute_t2663242530
>>>>>>> Stashed changes
{
public:
	// System.String System.Runtime.Serialization.EnumMemberAttribute::value
	String_t* ___value_0;

public:
<<<<<<< Updated upstream
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(EnumMemberAttribute_t3657563208, ___value_0)); }
=======
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(EnumMemberAttribute_t3808718732, ___value_0)); }
>>>>>>> Stashed changes
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
<<<<<<< Updated upstream
#endif // ENUMMEMBERATTRIBUTE_T3657563208_H
=======
#endif // ENUMMEMBERATTRIBUTE_T3808718732_H
>>>>>>> Stashed changes



#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean System.Runtime.Serialization.DataContractAttribute::get_IsReference()
<<<<<<< Updated upstream
extern "C"  bool DataContractAttribute_get_IsReference_m2080287365 (DataContractAttribute_t2315392897 * __this, const RuntimeMethod* method)
=======
extern "C"  bool DataContractAttribute_get_IsReference_m109395315 (DataContractAttribute_t4275427674 * __this, const RuntimeMethod* method)
>>>>>>> Stashed changes
{
	{
		bool L_0 = __this->get_U3CIsReferenceU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Boolean System.Runtime.Serialization.DataMemberAttribute::get_EmitDefaultValue()
<<<<<<< Updated upstream
extern "C"  bool DataMemberAttribute_get_EmitDefaultValue_m2768006368 (DataMemberAttribute_t698213209 * __this, const RuntimeMethod* method)
=======
extern "C"  bool DataMemberAttribute_get_EmitDefaultValue_m3810286915 (DataMemberAttribute_t746166757 * __this, const RuntimeMethod* method)
>>>>>>> Stashed changes
{
	{
		bool L_0 = __this->get_emit_default_1();
		return L_0;
	}
}
// System.Boolean System.Runtime.Serialization.DataMemberAttribute::get_IsRequired()
<<<<<<< Updated upstream
extern "C"  bool DataMemberAttribute_get_IsRequired_m222599405 (DataMemberAttribute_t698213209 * __this, const RuntimeMethod* method)
=======
extern "C"  bool DataMemberAttribute_get_IsRequired_m1766635354 (DataMemberAttribute_t746166757 * __this, const RuntimeMethod* method)
>>>>>>> Stashed changes
{
	{
		bool L_0 = __this->get_is_required_0();
		return L_0;
	}
}
// System.String System.Runtime.Serialization.DataMemberAttribute::get_Name()
<<<<<<< Updated upstream
extern "C"  String_t* DataMemberAttribute_get_Name_m969590685 (DataMemberAttribute_t698213209 * __this, const RuntimeMethod* method)
=======
extern "C"  String_t* DataMemberAttribute_get_Name_m3594662221 (DataMemberAttribute_t746166757 * __this, const RuntimeMethod* method)
>>>>>>> Stashed changes
{
	{
		String_t* L_0 = __this->get_name_2();
		return L_0;
	}
}
// System.Int32 System.Runtime.Serialization.DataMemberAttribute::get_Order()
<<<<<<< Updated upstream
extern "C"  int32_t DataMemberAttribute_get_Order_m2735860564 (DataMemberAttribute_t698213209 * __this, const RuntimeMethod* method)
=======
extern "C"  int32_t DataMemberAttribute_get_Order_m3769602388 (DataMemberAttribute_t746166757 * __this, const RuntimeMethod* method)
>>>>>>> Stashed changes
{
	{
		int32_t L_0 = __this->get_order_3();
		return L_0;
	}
}
// System.String System.Runtime.Serialization.EnumMemberAttribute::get_Value()
<<<<<<< Updated upstream
extern "C"  String_t* EnumMemberAttribute_get_Value_m723537956 (EnumMemberAttribute_t3657563208 * __this, const RuntimeMethod* method)
=======
extern "C"  String_t* EnumMemberAttribute_get_Value_m748984980 (EnumMemberAttribute_t3808718732 * __this, const RuntimeMethod* method)
>>>>>>> Stashed changes
{
	{
		String_t* L_0 = __this->get_value_0();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif

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

// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t2618856944;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t4252256379;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t1921275525;
// System.ArgumentNullException
struct ArgumentNullException_t1093734427;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3249095650;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t1363253450;
// System.Object[]
struct ObjectU5BU5D_t3228797622;
// System.Collections.IEnumerator
struct IEnumerator_t4098453449;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_t494063815;
// System.ArgumentException
struct ArgumentException_t2829682871;
// System.Predicate`1<System.Object>
struct Predicate_1_t1785876169;
// System.NotImplementedException
struct NotImplementedException_t3498316797;
// System.IntPtr[]
struct IntPtrU5BU5D_t1716247715;
// System.Collections.IDictionary
struct IDictionary_t1399181752;
// System.Collections.Hashtable
struct Hashtable_t222409873;
// System.Collections.ArrayList
struct ArrayList_t3090282606;
// System.Runtime.Serialization.IFormatterConverter
struct IFormatterConverter_t862778347;
// System.Int32[]
struct Int32U5BU5D_t1740869865;
// System.Collections.Generic.HashSet`1/Link<System.Object>[]
struct LinkU5BU5D_t3355813421;
// System.Char[]
struct CharU5BU5D_t1049441433;
// System.Void
struct Void_t3603817228;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t3681205479;
// System.IAsyncResult
struct IAsyncResult_t1680771107;
// System.AsyncCallback
struct AsyncCallback_t1570980325;

extern RuntimeClass* ArgumentNullException_t1093734427_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_t4098453449_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t4138501957_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3802882113;
extern const uint32_t HashSet_1__ctor_m2686466034_MetadataUsageId;
extern RuntimeClass* ArgumentOutOfRangeException_t494063815_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3348334147;
extern const uint32_t HashSet_1_Init_m551299609_MetadataUsageId;
extern RuntimeClass* Int32U5BU5D_t1740869865_il2cpp_TypeInfo_var;
extern const uint32_t HashSet_1_InitArrays_m289125279_MetadataUsageId;
extern RuntimeClass* ArgumentException_t2829682871_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral692526959;
extern Il2CppCodeGenString* _stringLiteral58180282;
extern Il2CppCodeGenString* _stringLiteral1409818196;
extern Il2CppCodeGenString* _stringLiteral3015254211;
extern const uint32_t HashSet_1_CopyTo_m3586021936_MetadataUsageId;
extern const uint32_t HashSet_1_Resize_m555346133_MetadataUsageId;
extern RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
extern const uint32_t HashSet_1_Remove_m835676418_MetadataUsageId;
extern Il2CppCodeGenString* _stringLiteral1126183466;
extern const uint32_t HashSet_1_RemoveWhere_m2644337533_MetadataUsageId;
extern RuntimeClass* NotImplementedException_t3498316797_il2cpp_TypeInfo_var;
extern const uint32_t HashSet_1_GetObjectData_m2631563967_MetadataUsageId;
extern const uint32_t HashSet_1_OnDeserialization_m660187817_MetadataUsageId;

struct ObjectU5BU5D_t3228797622;
struct Int32U5BU5D_t1740869865;
struct LinkU5BU5D_t3355813421;


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
#ifndef EXCEPTION_T1027262420_H
#define EXCEPTION_T1027262420_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t1027262420  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t1716247715* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t1027262420 * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t1027262420, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t1716247715* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t1716247715** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t1716247715* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t1027262420, ___inner_exception_1)); }
	inline Exception_t1027262420 * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t1027262420 ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t1027262420 * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t1027262420, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t1027262420, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t1027262420, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t1027262420, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t1027262420, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t1027262420, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t1027262420, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t1027262420, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t1027262420, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T1027262420_H
#ifndef VALUETYPE_T3349089985_H
#define VALUETYPE_T3349089985_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3349089985  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3349089985_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3349089985_marshaled_com
{
};
#endif // VALUETYPE_T3349089985_H
#ifndef SERIALIZATIONINFO_T3249095650_H
#define SERIALIZATIONINFO_T3249095650_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.SerializationInfo
struct  SerializationInfo_t3249095650  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Runtime.Serialization.SerializationInfo::serialized
	Hashtable_t222409873 * ___serialized_0;
	// System.Collections.ArrayList System.Runtime.Serialization.SerializationInfo::values
	ArrayList_t3090282606 * ___values_1;
	// System.String System.Runtime.Serialization.SerializationInfo::assemblyName
	String_t* ___assemblyName_2;
	// System.String System.Runtime.Serialization.SerializationInfo::fullTypeName
	String_t* ___fullTypeName_3;
	// System.Runtime.Serialization.IFormatterConverter System.Runtime.Serialization.SerializationInfo::converter
	RuntimeObject* ___converter_4;

public:
	inline static int32_t get_offset_of_serialized_0() { return static_cast<int32_t>(offsetof(SerializationInfo_t3249095650, ___serialized_0)); }
	inline Hashtable_t222409873 * get_serialized_0() const { return ___serialized_0; }
	inline Hashtable_t222409873 ** get_address_of_serialized_0() { return &___serialized_0; }
	inline void set_serialized_0(Hashtable_t222409873 * value)
	{
		___serialized_0 = value;
		Il2CppCodeGenWriteBarrier((&___serialized_0), value);
	}

	inline static int32_t get_offset_of_values_1() { return static_cast<int32_t>(offsetof(SerializationInfo_t3249095650, ___values_1)); }
	inline ArrayList_t3090282606 * get_values_1() const { return ___values_1; }
	inline ArrayList_t3090282606 ** get_address_of_values_1() { return &___values_1; }
	inline void set_values_1(ArrayList_t3090282606 * value)
	{
		___values_1 = value;
		Il2CppCodeGenWriteBarrier((&___values_1), value);
	}

	inline static int32_t get_offset_of_assemblyName_2() { return static_cast<int32_t>(offsetof(SerializationInfo_t3249095650, ___assemblyName_2)); }
	inline String_t* get_assemblyName_2() const { return ___assemblyName_2; }
	inline String_t** get_address_of_assemblyName_2() { return &___assemblyName_2; }
	inline void set_assemblyName_2(String_t* value)
	{
		___assemblyName_2 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyName_2), value);
	}

	inline static int32_t get_offset_of_fullTypeName_3() { return static_cast<int32_t>(offsetof(SerializationInfo_t3249095650, ___fullTypeName_3)); }
	inline String_t* get_fullTypeName_3() const { return ___fullTypeName_3; }
	inline String_t** get_address_of_fullTypeName_3() { return &___fullTypeName_3; }
	inline void set_fullTypeName_3(String_t* value)
	{
		___fullTypeName_3 = value;
		Il2CppCodeGenWriteBarrier((&___fullTypeName_3), value);
	}

	inline static int32_t get_offset_of_converter_4() { return static_cast<int32_t>(offsetof(SerializationInfo_t3249095650, ___converter_4)); }
	inline RuntimeObject* get_converter_4() const { return ___converter_4; }
	inline RuntimeObject** get_address_of_converter_4() { return &___converter_4; }
	inline void set_converter_4(RuntimeObject* value)
	{
		___converter_4 = value;
		Il2CppCodeGenWriteBarrier((&___converter_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZATIONINFO_T3249095650_H
#ifndef EQUALITYCOMPARER_1_T3005990493_H
#define EQUALITYCOMPARER_1_T3005990493_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.EqualityComparer`1<System.Object>
struct  EqualityComparer_1_t3005990493  : public RuntimeObject
{
public:

public:
};

struct EqualityComparer_1_t3005990493_StaticFields
{
public:
	// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1::_default
	EqualityComparer_1_t3005990493 * ____default_0;

public:
	inline static int32_t get_offset_of__default_0() { return static_cast<int32_t>(offsetof(EqualityComparer_1_t3005990493_StaticFields, ____default_0)); }
	inline EqualityComparer_1_t3005990493 * get__default_0() const { return ____default_0; }
	inline EqualityComparer_1_t3005990493 ** get_address_of__default_0() { return &____default_0; }
	inline void set__default_0(EqualityComparer_1_t3005990493 * value)
	{
		____default_0 = value;
		Il2CppCodeGenWriteBarrier((&____default_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EQUALITYCOMPARER_1_T3005990493_H
#ifndef HASHSET_1_T2618856944_H
#define HASHSET_1_T2618856944_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.HashSet`1<System.Object>
struct  HashSet_1_t2618856944  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::table
	Int32U5BU5D_t1740869865* ___table_4;
	// System.Collections.Generic.HashSet`1/Link<T>[] System.Collections.Generic.HashSet`1::links
	LinkU5BU5D_t3355813421* ___links_5;
	// T[] System.Collections.Generic.HashSet`1::slots
	ObjectU5BU5D_t3228797622* ___slots_6;
	// System.Int32 System.Collections.Generic.HashSet`1::touched
	int32_t ___touched_7;
	// System.Int32 System.Collections.Generic.HashSet`1::empty_slot
	int32_t ___empty_slot_8;
	// System.Int32 System.Collections.Generic.HashSet`1::count
	int32_t ___count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::threshold
	int32_t ___threshold_10;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::comparer
	RuntimeObject* ___comparer_11;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::si
	SerializationInfo_t3249095650 * ___si_12;
	// System.Int32 System.Collections.Generic.HashSet`1::generation
	int32_t ___generation_13;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(HashSet_1_t2618856944, ___table_4)); }
	inline Int32U5BU5D_t1740869865* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t1740869865** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t1740869865* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_links_5() { return static_cast<int32_t>(offsetof(HashSet_1_t2618856944, ___links_5)); }
	inline LinkU5BU5D_t3355813421* get_links_5() const { return ___links_5; }
	inline LinkU5BU5D_t3355813421** get_address_of_links_5() { return &___links_5; }
	inline void set_links_5(LinkU5BU5D_t3355813421* value)
	{
		___links_5 = value;
		Il2CppCodeGenWriteBarrier((&___links_5), value);
	}

	inline static int32_t get_offset_of_slots_6() { return static_cast<int32_t>(offsetof(HashSet_1_t2618856944, ___slots_6)); }
	inline ObjectU5BU5D_t3228797622* get_slots_6() const { return ___slots_6; }
	inline ObjectU5BU5D_t3228797622** get_address_of_slots_6() { return &___slots_6; }
	inline void set_slots_6(ObjectU5BU5D_t3228797622* value)
	{
		___slots_6 = value;
		Il2CppCodeGenWriteBarrier((&___slots_6), value);
	}

	inline static int32_t get_offset_of_touched_7() { return static_cast<int32_t>(offsetof(HashSet_1_t2618856944, ___touched_7)); }
	inline int32_t get_touched_7() const { return ___touched_7; }
	inline int32_t* get_address_of_touched_7() { return &___touched_7; }
	inline void set_touched_7(int32_t value)
	{
		___touched_7 = value;
	}

	inline static int32_t get_offset_of_empty_slot_8() { return static_cast<int32_t>(offsetof(HashSet_1_t2618856944, ___empty_slot_8)); }
	inline int32_t get_empty_slot_8() const { return ___empty_slot_8; }
	inline int32_t* get_address_of_empty_slot_8() { return &___empty_slot_8; }
	inline void set_empty_slot_8(int32_t value)
	{
		___empty_slot_8 = value;
	}

	inline static int32_t get_offset_of_count_9() { return static_cast<int32_t>(offsetof(HashSet_1_t2618856944, ___count_9)); }
	inline int32_t get_count_9() const { return ___count_9; }
	inline int32_t* get_address_of_count_9() { return &___count_9; }
	inline void set_count_9(int32_t value)
	{
		___count_9 = value;
	}

	inline static int32_t get_offset_of_threshold_10() { return static_cast<int32_t>(offsetof(HashSet_1_t2618856944, ___threshold_10)); }
	inline int32_t get_threshold_10() const { return ___threshold_10; }
	inline int32_t* get_address_of_threshold_10() { return &___threshold_10; }
	inline void set_threshold_10(int32_t value)
	{
		___threshold_10 = value;
	}

	inline static int32_t get_offset_of_comparer_11() { return static_cast<int32_t>(offsetof(HashSet_1_t2618856944, ___comparer_11)); }
	inline RuntimeObject* get_comparer_11() const { return ___comparer_11; }
	inline RuntimeObject** get_address_of_comparer_11() { return &___comparer_11; }
	inline void set_comparer_11(RuntimeObject* value)
	{
		___comparer_11 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_11), value);
	}

	inline static int32_t get_offset_of_si_12() { return static_cast<int32_t>(offsetof(HashSet_1_t2618856944, ___si_12)); }
	inline SerializationInfo_t3249095650 * get_si_12() const { return ___si_12; }
	inline SerializationInfo_t3249095650 ** get_address_of_si_12() { return &___si_12; }
	inline void set_si_12(SerializationInfo_t3249095650 * value)
	{
		___si_12 = value;
		Il2CppCodeGenWriteBarrier((&___si_12), value);
	}

	inline static int32_t get_offset_of_generation_13() { return static_cast<int32_t>(offsetof(HashSet_1_t2618856944, ___generation_13)); }
	inline int32_t get_generation_13() const { return ___generation_13; }
	inline int32_t* get_address_of_generation_13() { return &___generation_13; }
	inline void set_generation_13(int32_t value)
	{
		___generation_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HASHSET_1_T2618856944_H
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
	CharU5BU5D_t1049441433* ___WhiteChars_3;

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
	inline CharU5BU5D_t1049441433* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t1049441433** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t1049441433* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
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
#ifndef BOOLEAN_T4083416736_H
#define BOOLEAN_T4083416736_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t4083416736 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t4083416736, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t4083416736_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t4083416736_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t4083416736_StaticFields, ___TrueString_1)); }
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
#endif // BOOLEAN_T4083416736_H
#ifndef INT32_T1740907320_H
#define INT32_T1740907320_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t1740907320 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t1740907320, ___m_value_2)); }
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
#endif // INT32_T1740907320_H
#ifndef ENUMERATOR_T2285132738_H
#define ENUMERATOR_T2285132738_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.HashSet`1/Enumerator<System.Object>
struct  Enumerator_t2285132738 
{
public:
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator::hashset
	HashSet_1_t2618856944 * ___hashset_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::stamp
	int32_t ___stamp_2;
	// T System.Collections.Generic.HashSet`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_hashset_0() { return static_cast<int32_t>(offsetof(Enumerator_t2285132738, ___hashset_0)); }
	inline HashSet_1_t2618856944 * get_hashset_0() const { return ___hashset_0; }
	inline HashSet_1_t2618856944 ** get_address_of_hashset_0() { return &___hashset_0; }
	inline void set_hashset_0(HashSet_1_t2618856944 * value)
	{
		___hashset_0 = value;
		Il2CppCodeGenWriteBarrier((&___hashset_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2285132738, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_stamp_2() { return static_cast<int32_t>(offsetof(Enumerator_t2285132738, ___stamp_2)); }
	inline int32_t get_stamp_2() const { return ___stamp_2; }
	inline int32_t* get_address_of_stamp_2() { return &___stamp_2; }
	inline void set_stamp_2(int32_t value)
	{
		___stamp_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2285132738, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2285132738_H
#ifndef ENUM_T1056064022_H
#define ENUM_T1056064022_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t1056064022  : public ValueType_t3349089985
{
public:

public:
};

struct Enum_t1056064022_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t1049441433* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t1056064022_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t1049441433* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t1049441433** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t1049441433* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t1056064022_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t1056064022_marshaled_com
{
};
#endif // ENUM_T1056064022_H
#ifndef LINK_T1939500100_H
#define LINK_T1939500100_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.HashSet`1/Link<System.Object>
struct  Link_t1939500100 
{
public:
	// System.Int32 System.Collections.Generic.HashSet`1/Link::HashCode
	int32_t ___HashCode_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Link::Next
	int32_t ___Next_1;

public:
	inline static int32_t get_offset_of_HashCode_0() { return static_cast<int32_t>(offsetof(Link_t1939500100, ___HashCode_0)); }
	inline int32_t get_HashCode_0() const { return ___HashCode_0; }
	inline int32_t* get_address_of_HashCode_0() { return &___HashCode_0; }
	inline void set_HashCode_0(int32_t value)
	{
		___HashCode_0 = value;
	}

	inline static int32_t get_offset_of_Next_1() { return static_cast<int32_t>(offsetof(Link_t1939500100, ___Next_1)); }
	inline int32_t get_Next_1() const { return ___Next_1; }
	inline int32_t* get_address_of_Next_1() { return &___Next_1; }
	inline void set_Next_1(int32_t value)
	{
		___Next_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LINK_T1939500100_H
#ifndef VOID_T3603817228_H
#define VOID_T3603817228_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t3603817228 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T3603817228_H
#ifndef SYSTEMEXCEPTION_T3453957444_H
#define SYSTEMEXCEPTION_T3453957444_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t3453957444  : public Exception_t1027262420
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T3453957444_H
#ifndef DELEGATE_T1059063825_H
#define DELEGATE_T1059063825_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1059063825  : public RuntimeObject
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
	DelegateData_t3681205479 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1059063825, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1059063825, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1059063825, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1059063825, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1059063825, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1059063825, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1059063825, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1059063825, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1059063825, ___data_8)); }
	inline DelegateData_t3681205479 * get_data_8() const { return ___data_8; }
	inline DelegateData_t3681205479 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t3681205479 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1059063825_H
#ifndef ARGUMENTEXCEPTION_T2829682871_H
#define ARGUMENTEXCEPTION_T2829682871_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_t2829682871  : public SystemException_t3453957444
{
public:
	// System.String System.ArgumentException::param_name
	String_t* ___param_name_12;

public:
	inline static int32_t get_offset_of_param_name_12() { return static_cast<int32_t>(offsetof(ArgumentException_t2829682871, ___param_name_12)); }
	inline String_t* get_param_name_12() const { return ___param_name_12; }
	inline String_t** get_address_of_param_name_12() { return &___param_name_12; }
	inline void set_param_name_12(String_t* value)
	{
		___param_name_12 = value;
		Il2CppCodeGenWriteBarrier((&___param_name_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTEXCEPTION_T2829682871_H
#ifndef NOTIMPLEMENTEDEXCEPTION_T3498316797_H
#define NOTIMPLEMENTEDEXCEPTION_T3498316797_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotImplementedException
struct  NotImplementedException_t3498316797  : public SystemException_t3453957444
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTIMPLEMENTEDEXCEPTION_T3498316797_H
#ifndef STREAMINGCONTEXTSTATES_T2806474729_H
#define STREAMINGCONTEXTSTATES_T2806474729_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.StreamingContextStates
struct  StreamingContextStates_t2806474729 
{
public:
	// System.Int32 System.Runtime.Serialization.StreamingContextStates::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StreamingContextStates_t2806474729, ___value___1)); }
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
#endif // STREAMINGCONTEXTSTATES_T2806474729_H
#ifndef ARGUMENTNULLEXCEPTION_T1093734427_H
#define ARGUMENTNULLEXCEPTION_T1093734427_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentNullException
struct  ArgumentNullException_t1093734427  : public ArgumentException_t2829682871
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTNULLEXCEPTION_T1093734427_H
#ifndef ARGUMENTOUTOFRANGEEXCEPTION_T494063815_H
#define ARGUMENTOUTOFRANGEEXCEPTION_T494063815_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentOutOfRangeException
struct  ArgumentOutOfRangeException_t494063815  : public ArgumentException_t2829682871
{
public:
	// System.Object System.ArgumentOutOfRangeException::actual_value
	RuntimeObject * ___actual_value_13;

public:
	inline static int32_t get_offset_of_actual_value_13() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t494063815, ___actual_value_13)); }
	inline RuntimeObject * get_actual_value_13() const { return ___actual_value_13; }
	inline RuntimeObject ** get_address_of_actual_value_13() { return &___actual_value_13; }
	inline void set_actual_value_13(RuntimeObject * value)
	{
		___actual_value_13 = value;
		Il2CppCodeGenWriteBarrier((&___actual_value_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTOUTOFRANGEEXCEPTION_T494063815_H
#ifndef STREAMINGCONTEXT_T1069071516_H
#define STREAMINGCONTEXT_T1069071516_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.StreamingContext
struct  StreamingContext_t1069071516 
{
public:
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::state
	int32_t ___state_0;
	// System.Object System.Runtime.Serialization.StreamingContext::additional
	RuntimeObject * ___additional_1;

public:
	inline static int32_t get_offset_of_state_0() { return static_cast<int32_t>(offsetof(StreamingContext_t1069071516, ___state_0)); }
	inline int32_t get_state_0() const { return ___state_0; }
	inline int32_t* get_address_of_state_0() { return &___state_0; }
	inline void set_state_0(int32_t value)
	{
		___state_0 = value;
	}

	inline static int32_t get_offset_of_additional_1() { return static_cast<int32_t>(offsetof(StreamingContext_t1069071516, ___additional_1)); }
	inline RuntimeObject * get_additional_1() const { return ___additional_1; }
	inline RuntimeObject ** get_address_of_additional_1() { return &___additional_1; }
	inline void set_additional_1(RuntimeObject * value)
	{
		___additional_1 = value;
		Il2CppCodeGenWriteBarrier((&___additional_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t1069071516_marshaled_pinvoke
{
	int32_t ___state_0;
	Il2CppIUnknown* ___additional_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t1069071516_marshaled_com
{
	int32_t ___state_0;
	Il2CppIUnknown* ___additional_1;
};
#endif // STREAMINGCONTEXT_T1069071516_H
#ifndef MULTICASTDELEGATE_T1691958082_H
#define MULTICASTDELEGATE_T1691958082_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t1691958082  : public Delegate_t1059063825
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t1691958082 * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t1691958082 * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t1691958082, ___prev_9)); }
	inline MulticastDelegate_t1691958082 * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t1691958082 ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t1691958082 * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t1691958082, ___kpm_next_10)); }
	inline MulticastDelegate_t1691958082 * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t1691958082 ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t1691958082 * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T1691958082_H
#ifndef PREDICATE_1_T1785876169_H
#define PREDICATE_1_T1785876169_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Predicate`1<System.Object>
struct  Predicate_1_t1785876169  : public MulticastDelegate_t1691958082
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PREDICATE_1_T1785876169_H
// System.Object[]
struct ObjectU5BU5D_t3228797622  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t1740869865  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Collections.Generic.HashSet`1/Link<System.Object>[]
struct LinkU5BU5D_t3355813421  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Link_t1939500100  m_Items[1];

public:
	inline Link_t1939500100  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Link_t1939500100 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Link_t1939500100  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Link_t1939500100  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Link_t1939500100 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Link_t1939500100  value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Collections.Generic.HashSet`1/Enumerator<System.Object>::.ctor(System.Collections.Generic.HashSet`1<T>)
extern "C"  void Enumerator__ctor_m2318597550_gshared (Enumerator_t2285132738 * __this, HashSet_1_t2618856944 * p0, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m1796771371 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentNullException::.ctor(System.String)
extern "C"  void ArgumentNullException__ctor_m1765345595 (ArgumentNullException_t1093734427 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.HashSet`1/Enumerator<System.Object>::.ctor(System.Collections.Generic.HashSet`1<T>)
#define Enumerator__ctor_m2318597550(__this, p0, method) ((  void (*) (Enumerator_t2285132738 *, HashSet_1_t2618856944 *, const RuntimeMethod*))Enumerator__ctor_m2318597550_gshared)(__this, p0, method)
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
extern "C"  void ArgumentOutOfRangeException__ctor_m1666684691 (ArgumentOutOfRangeException_t494063815 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::.ctor(System.String)
extern "C"  void ArgumentException__ctor_m2128012857 (ArgumentException_t2829682871 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
extern "C"  void Array_Copy_m705440050 (RuntimeObject * __this /* static, unused */, RuntimeArray * p0, int32_t p1, RuntimeArray * p2, int32_t p3, int32_t p4, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
extern "C"  void Array_Clear_m2791295959 (RuntimeObject * __this /* static, unused */, RuntimeArray * p0, int32_t p1, int32_t p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.NotImplementedException::.ctor()
extern "C"  void NotImplementedException__ctor_m4183698353 (NotImplementedException_t3498316797 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
extern "C"  void HashSet_1__ctor_m1264019165_gshared (HashSet_1_t2618856944 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m1796771371((RuntimeObject *)__this, /*hidden argument*/NULL);
		NullCheck((HashSet_1_t2618856944 *)__this);
		((  void (*) (HashSet_1_t2618856944 *, int32_t, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 0)->methodPointer)((HashSet_1_t2618856944 *)__this, (int32_t)((int32_t)10), (RuntimeObject*)NULL, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
extern "C"  void HashSet_1__ctor_m3131091974_gshared (HashSet_1_t2618856944 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m1796771371((RuntimeObject *)__this, /*hidden argument*/NULL);
		RuntimeObject* L_0 = ___comparer0;
		NullCheck((HashSet_1_t2618856944 *)__this);
		((  void (*) (HashSet_1_t2618856944 *, int32_t, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 0)->methodPointer)((HashSet_1_t2618856944 *)__this, (int32_t)((int32_t)10), (RuntimeObject*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 0));
		return;
	}
}
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>,System.Collections.Generic.IEqualityComparer`1<T>)
extern "C"  void HashSet_1__ctor_m2686466034_gshared (HashSet_1_t2618856944 * __this, RuntimeObject* ___collection0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HashSet_1__ctor_m2686466034_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	Exception_t1027262420 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1027262420 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m1796771371((RuntimeObject *)__this, /*hidden argument*/NULL);
		RuntimeObject* L_0 = ___collection0;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t1093734427 * L_1 = (ArgumentNullException_t1093734427 *)il2cpp_codegen_object_new(ArgumentNullException_t1093734427_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1765345595(L_1, (String_t*)_stringLiteral3802882113, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_0017:
	{
		V_0 = (int32_t)0;
		RuntimeObject* L_2 = ___collection0;
		V_1 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 1)));
		RuntimeObject* L_3 = V_1;
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		RuntimeObject* L_4 = V_1;
		NullCheck((RuntimeObject*)L_4);
		int32_t L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Object>::get_Count() */, IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 1), (RuntimeObject*)L_4);
		V_0 = (int32_t)L_5;
	}

IL_002d:
	{
		int32_t L_6 = V_0;
		RuntimeObject* L_7 = ___comparer1;
		NullCheck((HashSet_1_t2618856944 *)__this);
		((  void (*) (HashSet_1_t2618856944 *, int32_t, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 0)->methodPointer)((HashSet_1_t2618856944 *)__this, (int32_t)L_6, (RuntimeObject*)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 0));
		RuntimeObject* L_8 = ___collection0;
		NullCheck((RuntimeObject*)L_8);
		RuntimeObject* L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 2), (RuntimeObject*)L_8);
		V_3 = (RuntimeObject*)L_9;
	}

IL_003c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0050;
		}

IL_0041:
		{
			RuntimeObject* L_10 = V_3;
			NullCheck((RuntimeObject*)L_10);
			RuntimeObject * L_11 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 3), (RuntimeObject*)L_10);
			V_2 = (RuntimeObject *)L_11;
			RuntimeObject * L_12 = V_2;
			NullCheck((HashSet_1_t2618856944 *)__this);
			((  bool (*) (HashSet_1_t2618856944 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4)->methodPointer)((HashSet_1_t2618856944 *)__this, (RuntimeObject *)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4));
		}

IL_0050:
		{
			RuntimeObject* L_13 = V_3;
			NullCheck((RuntimeObject*)L_13);
			bool L_14 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t4098453449_il2cpp_TypeInfo_var, (RuntimeObject*)L_13);
			if (L_14)
			{
				goto IL_0041;
			}
		}

IL_005b:
		{
			IL2CPP_LEAVE(0x6B, FINALLY_0060);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t1027262420 *)e.ex;
		goto FINALLY_0060;
	}

FINALLY_0060:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_15 = V_3;
			if (L_15)
			{
				goto IL_0064;
			}
		}

IL_0063:
		{
			IL2CPP_END_FINALLY(96)
		}

IL_0064:
		{
			RuntimeObject* L_16 = V_3;
			NullCheck((RuntimeObject*)L_16);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t4138501957_il2cpp_TypeInfo_var, (RuntimeObject*)L_16);
			IL2CPP_END_FINALLY(96)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(96)
	{
		IL2CPP_JUMP_TBL(0x6B, IL_006b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1027262420 *)
	}

IL_006b:
	{
		return;
	}
}
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void HashSet_1__ctor_m2058138006_gshared (HashSet_1_t2618856944 * __this, SerializationInfo_t3249095650 * ___info0, StreamingContext_t1069071516  ___context1, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m1796771371((RuntimeObject *)__this, /*hidden argument*/NULL);
		SerializationInfo_t3249095650 * L_0 = ___info0;
		__this->set_si_12(L_0);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C"  RuntimeObject* HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m3575547191_gshared (HashSet_1_t2618856944 * __this, const RuntimeMethod* method)
{
	{
		Enumerator_t2285132738  L_0;
		memset(&L_0, 0, sizeof(L_0));
		Enumerator__ctor_m2318597550((&L_0), (HashSet_1_t2618856944 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 6));
		Enumerator_t2285132738  L_1 = L_0;
		RuntimeObject * L_2 = Box(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 5), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C"  bool HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m1894093931_gshared (HashSet_1_t2618856944 * __this, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.CopyTo(T[],System.Int32)
extern "C"  void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m3417523502_gshared (HashSet_1_t2618856944 * __this, ObjectU5BU5D_t3228797622* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		ObjectU5BU5D_t3228797622* L_0 = ___array0;
		int32_t L_1 = ___index1;
		NullCheck((HashSet_1_t2618856944 *)__this);
		((  void (*) (HashSet_1_t2618856944 *, ObjectU5BU5D_t3228797622*, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 7)->methodPointer)((HashSet_1_t2618856944 *)__this, (ObjectU5BU5D_t3228797622*)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 7));
		return;
	}
}
// System.Void System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.Add(T)
extern "C"  void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m4227257172_gshared (HashSet_1_t2618856944 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___item0;
		NullCheck((HashSet_1_t2618856944 *)__this);
		((  bool (*) (HashSet_1_t2618856944 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4)->methodPointer)((HashSet_1_t2618856944 *)__this, (RuntimeObject *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 4));
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Generic.HashSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  RuntimeObject* HashSet_1_System_Collections_IEnumerable_GetEnumerator_m2060128456_gshared (HashSet_1_t2618856944 * __this, const RuntimeMethod* method)
{
	{
		Enumerator_t2285132738  L_0;
		memset(&L_0, 0, sizeof(L_0));
		Enumerator__ctor_m2318597550((&L_0), (HashSet_1_t2618856944 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 6));
		Enumerator_t2285132738  L_1 = L_0;
		RuntimeObject * L_2 = Box(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 5), &L_1);
		return (RuntimeObject*)L_2;
	}
}
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::get_Count()
extern "C"  int32_t HashSet_1_get_Count_m4018913653_gshared (HashSet_1_t2618856944 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_count_9();
		return L_0;
	}
}
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<T>)
extern "C"  void HashSet_1_Init_m551299609_gshared (HashSet_1_t2618856944 * __this, int32_t ___capacity0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HashSet_1_Init_m551299609_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B4_0 = NULL;
	HashSet_1_t2618856944 * G_B4_1 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	HashSet_1_t2618856944 * G_B3_1 = NULL;
	{
		int32_t L_0 = ___capacity0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		ArgumentOutOfRangeException_t494063815 * L_1 = (ArgumentOutOfRangeException_t494063815 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t494063815_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m1666684691(L_1, (String_t*)_stringLiteral3348334147, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_0012:
	{
		RuntimeObject* L_2 = ___comparer1;
		RuntimeObject* L_3 = (RuntimeObject*)L_2;
		G_B3_0 = L_3;
		G_B3_1 = ((HashSet_1_t2618856944 *)(__this));
		if (L_3)
		{
			G_B4_0 = L_3;
			G_B4_1 = ((HashSet_1_t2618856944 *)(__this));
			goto IL_0020;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 9));
		EqualityComparer_1_t3005990493 * L_4 = ((  EqualityComparer_1_t3005990493 * (*) (RuntimeObject * /* static, unused */, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 8)->methodPointer)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 8));
		G_B4_0 = ((RuntimeObject*)(L_4));
		G_B4_1 = ((HashSet_1_t2618856944 *)(G_B3_1));
	}

IL_0020:
	{
		NullCheck(G_B4_1);
		G_B4_1->set_comparer_11(G_B4_0);
		int32_t L_5 = ___capacity0;
		if (L_5)
		{
			goto IL_002f;
		}
	}
	{
		___capacity0 = (int32_t)((int32_t)10);
	}

IL_002f:
	{
		int32_t L_6 = ___capacity0;
		___capacity0 = (int32_t)((int32_t)((int32_t)(((int32_t)((int32_t)((float)((float)(((float)((float)L_6)))/(float)(0.9f))))))+(int32_t)1));
		int32_t L_7 = ___capacity0;
		NullCheck((HashSet_1_t2618856944 *)__this);
		((  void (*) (HashSet_1_t2618856944 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 10)->methodPointer)((HashSet_1_t2618856944 *)__this, (int32_t)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 10));
		__this->set_generation_13(0);
		return;
	}
}
// System.Void System.Collections.Generic.HashSet`1<System.Object>::InitArrays(System.Int32)
extern "C"  void HashSet_1_InitArrays_m289125279_gshared (HashSet_1_t2618856944 * __this, int32_t ___size0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HashSet_1_InitArrays_m289125279_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___size0;
		__this->set_table_4(((Int32U5BU5D_t1740869865*)SZArrayNew(Int32U5BU5D_t1740869865_il2cpp_TypeInfo_var, (uint32_t)L_0)));
		int32_t L_1 = ___size0;
		__this->set_links_5(((LinkU5BU5D_t3355813421*)SZArrayNew(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 11), (uint32_t)L_1)));
		__this->set_empty_slot_8((-1));
		int32_t L_2 = ___size0;
		__this->set_slots_6(((ObjectU5BU5D_t3228797622*)SZArrayNew(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 12), (uint32_t)L_2)));
		__this->set_touched_7(0);
		Int32U5BU5D_t1740869865* L_3 = (Int32U5BU5D_t1740869865*)__this->get_table_4();
		NullCheck(L_3);
		__this->set_threshold_10((((int32_t)((int32_t)((float)((float)(((float)((float)(((int32_t)((int32_t)(((RuntimeArray *)L_3)->max_length)))))))*(float)(0.9f)))))));
		int32_t L_4 = (int32_t)__this->get_threshold_10();
		if (L_4)
		{
			goto IL_0068;
		}
	}
	{
		Int32U5BU5D_t1740869865* L_5 = (Int32U5BU5D_t1740869865*)__this->get_table_4();
		NullCheck(L_5);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_5)->max_length))))) <= ((int32_t)0)))
		{
			goto IL_0068;
		}
	}
	{
		__this->set_threshold_10(1);
	}

IL_0068:
	{
		return;
	}
}
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::SlotsContainsAt(System.Int32,System.Int32,T)
extern "C"  bool HashSet_1_SlotsContainsAt_m272787472_gshared (HashSet_1_t2618856944 * __this, int32_t ___index0, int32_t ___hash1, RuntimeObject * ___item2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Link_t1939500100  V_1;
	memset(&V_1, 0, sizeof(V_1));
	int32_t G_B8_0 = 0;
	int32_t G_B10_0 = 0;
	{
		Int32U5BU5D_t1740869865* L_0 = (Int32U5BU5D_t1740869865*)__this->get_table_4();
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		int32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = (int32_t)((int32_t)((int32_t)L_3-(int32_t)1));
		goto IL_00a9;
	}

IL_0010:
	{
		LinkU5BU5D_t3355813421* L_4 = (LinkU5BU5D_t3355813421*)__this->get_links_5();
		int32_t L_5 = V_0;
		NullCheck(L_4);
		V_1 = (Link_t1939500100 )(*(Link_t1939500100 *)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5))));
		int32_t L_6 = (int32_t)(&V_1)->get_HashCode_0();
		int32_t L_7 = ___hash1;
		if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
		{
			goto IL_00a1;
		}
	}
	{
		int32_t L_8 = ___hash1;
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)-2147483648LL)))))
		{
			goto IL_0082;
		}
	}
	{
		RuntimeObject * L_9 = ___item2;
		if (!L_9)
		{
			goto IL_005b;
		}
	}
	{
		ObjectU5BU5D_t3228797622* L_10 = (ObjectU5BU5D_t3228797622*)__this->get_slots_6();
		int32_t L_11 = V_0;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		RuntimeObject * L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		if (L_13)
		{
			goto IL_0082;
		}
	}

IL_005b:
	{
		RuntimeObject * L_14 = ___item2;
		if (L_14)
		{
			goto IL_007c;
		}
	}
	{
		ObjectU5BU5D_t3228797622* L_15 = (ObjectU5BU5D_t3228797622*)__this->get_slots_6();
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		RuntimeObject * L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		G_B8_0 = ((((RuntimeObject*)(RuntimeObject *)NULL) == ((RuntimeObject*)(RuntimeObject *)L_18))? 1 : 0);
		goto IL_007d;
	}

IL_007c:
	{
		G_B8_0 = 0;
	}

IL_007d:
	{
		G_B10_0 = G_B8_0;
		goto IL_009a;
	}

IL_0082:
	{
		RuntimeObject* L_19 = (RuntimeObject*)__this->get_comparer_11();
		RuntimeObject * L_20 = ___item2;
		ObjectU5BU5D_t3228797622* L_21 = (ObjectU5BU5D_t3228797622*)__this->get_slots_6();
		int32_t L_22 = V_0;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		RuntimeObject * L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		NullCheck((RuntimeObject*)L_19);
		bool L_25 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(!0,!0) */, IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 14), (RuntimeObject*)L_19, (RuntimeObject *)L_20, (RuntimeObject *)L_24);
		G_B10_0 = ((int32_t)(L_25));
	}

IL_009a:
	{
		if (!G_B10_0)
		{
			goto IL_00a1;
		}
	}
	{
		return (bool)1;
	}

IL_00a1:
	{
		int32_t L_26 = (int32_t)(&V_1)->get_Next_1();
		V_0 = (int32_t)L_26;
	}

IL_00a9:
	{
		int32_t L_27 = V_0;
		if ((!(((uint32_t)L_27) == ((uint32_t)(-1)))))
		{
			goto IL_0010;
		}
	}
	{
		return (bool)0;
	}
}
// System.Void System.Collections.Generic.HashSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C"  void HashSet_1_CopyTo_m3312432843_gshared (HashSet_1_t2618856944 * __this, ObjectU5BU5D_t3228797622* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		ObjectU5BU5D_t3228797622* L_0 = ___array0;
		int32_t L_1 = ___index1;
		int32_t L_2 = (int32_t)__this->get_count_9();
		NullCheck((HashSet_1_t2618856944 *)__this);
		((  void (*) (HashSet_1_t2618856944 *, ObjectU5BU5D_t3228797622*, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 15)->methodPointer)((HashSet_1_t2618856944 *)__this, (ObjectU5BU5D_t3228797622*)L_0, (int32_t)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 15));
		return;
	}
}
// System.Void System.Collections.Generic.HashSet`1<System.Object>::CopyTo(T[],System.Int32,System.Int32)
extern "C"  void HashSet_1_CopyTo_m3586021936_gshared (HashSet_1_t2618856944 * __this, ObjectU5BU5D_t3228797622* ___array0, int32_t ___index1, int32_t ___count2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HashSet_1_CopyTo_m3586021936_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ObjectU5BU5D_t3228797622* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1093734427 * L_1 = (ArgumentNullException_t1093734427 *)il2cpp_codegen_object_new(ArgumentNullException_t1093734427_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1765345595(L_1, (String_t*)_stringLiteral692526959, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_0011:
	{
		int32_t L_2 = ___index1;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0023;
		}
	}
	{
		ArgumentOutOfRangeException_t494063815 * L_3 = (ArgumentOutOfRangeException_t494063815 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t494063815_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m1666684691(L_3, (String_t*)_stringLiteral58180282, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3);
	}

IL_0023:
	{
		int32_t L_4 = ___index1;
		ObjectU5BU5D_t3228797622* L_5 = ___array0;
		NullCheck(L_5);
		if ((((int32_t)L_4) <= ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_5)->max_length)))))))
		{
			goto IL_0037;
		}
	}
	{
		ArgumentException_t2829682871 * L_6 = (ArgumentException_t2829682871 *)il2cpp_codegen_object_new(ArgumentException_t2829682871_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2128012857(L_6, (String_t*)_stringLiteral1409818196, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6);
	}

IL_0037:
	{
		ObjectU5BU5D_t3228797622* L_7 = ___array0;
		NullCheck(L_7);
		int32_t L_8 = ___index1;
		int32_t L_9 = ___count2;
		if ((((int32_t)((int32_t)((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_7)->max_length))))-(int32_t)L_8))) >= ((int32_t)L_9)))
		{
			goto IL_004d;
		}
	}
	{
		ArgumentException_t2829682871 * L_10 = (ArgumentException_t2829682871 *)il2cpp_codegen_object_new(ArgumentException_t2829682871_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2128012857(L_10, (String_t*)_stringLiteral3015254211, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10);
	}

IL_004d:
	{
		V_0 = (int32_t)0;
		V_1 = (int32_t)0;
		goto IL_007e;
	}

IL_0056:
	{
		int32_t L_11 = V_0;
		NullCheck((HashSet_1_t2618856944 *)__this);
		int32_t L_12 = ((  int32_t (*) (HashSet_1_t2618856944 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 16)->methodPointer)((HashSet_1_t2618856944 *)__this, (int32_t)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 16));
		if (!L_12)
		{
			goto IL_007a;
		}
	}
	{
		ObjectU5BU5D_t3228797622* L_13 = ___array0;
		int32_t L_14 = ___index1;
		int32_t L_15 = (int32_t)L_14;
		___index1 = (int32_t)((int32_t)((int32_t)L_15+(int32_t)1));
		ObjectU5BU5D_t3228797622* L_16 = (ObjectU5BU5D_t3228797622*)__this->get_slots_6();
		int32_t L_17 = V_0;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		RuntimeObject * L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (RuntimeObject *)L_19);
	}

IL_007a:
	{
		int32_t L_20 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_007e:
	{
		int32_t L_21 = V_0;
		int32_t L_22 = (int32_t)__this->get_touched_7();
		if ((((int32_t)L_21) >= ((int32_t)L_22)))
		{
			goto IL_0091;
		}
	}
	{
		int32_t L_23 = V_1;
		int32_t L_24 = ___count2;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0056;
		}
	}

IL_0091:
	{
		return;
	}
}
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Resize()
extern "C"  void HashSet_1_Resize_m555346133_gshared (HashSet_1_t2618856944 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HashSet_1_Resize_m555346133_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Int32U5BU5D_t1740869865* V_1 = NULL;
	LinkU5BU5D_t3355813421* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	ObjectU5BU5D_t3228797622* V_7 = NULL;
	int32_t V_8 = 0;
	{
		Int32U5BU5D_t1740869865* L_0 = (Int32U5BU5D_t1740869865*)__this->get_table_4();
		NullCheck(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 18));
		int32_t L_1 = ((  int32_t (*) (RuntimeObject * /* static, unused */, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 17)->methodPointer)(NULL /*static, unused*/, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length))))<<(int32_t)1))|(int32_t)1)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 17));
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		V_1 = (Int32U5BU5D_t1740869865*)((Int32U5BU5D_t1740869865*)SZArrayNew(Int32U5BU5D_t1740869865_il2cpp_TypeInfo_var, (uint32_t)L_2));
		int32_t L_3 = V_0;
		V_2 = (LinkU5BU5D_t3355813421*)((LinkU5BU5D_t3355813421*)SZArrayNew(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 11), (uint32_t)L_3));
		V_3 = (int32_t)0;
		goto IL_00a6;
	}

IL_0027:
	{
		Int32U5BU5D_t1740869865* L_4 = (Int32U5BU5D_t1740869865*)__this->get_table_4();
		int32_t L_5 = V_3;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		int32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_4 = (int32_t)((int32_t)((int32_t)L_7-(int32_t)1));
		goto IL_009a;
	}

IL_0038:
	{
		LinkU5BU5D_t3355813421* L_8 = V_2;
		int32_t L_9 = V_4;
		NullCheck(L_8);
		ObjectU5BU5D_t3228797622* L_10 = (ObjectU5BU5D_t3228797622*)__this->get_slots_6();
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		RuntimeObject * L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck((HashSet_1_t2618856944 *)__this);
		int32_t L_14 = ((  int32_t (*) (HashSet_1_t2618856944 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 19)->methodPointer)((HashSet_1_t2618856944 *)__this, (RuntimeObject *)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 19));
		int32_t L_15 = (int32_t)L_14;
		V_8 = (int32_t)L_15;
		((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)))->set_HashCode_0(L_15);
		int32_t L_16 = V_8;
		V_5 = (int32_t)L_16;
		int32_t L_17 = V_5;
		int32_t L_18 = V_0;
		V_6 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_17&(int32_t)((int32_t)2147483647LL)))%(int32_t)L_18));
		LinkU5BU5D_t3355813421* L_19 = V_2;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		Int32U5BU5D_t1740869865* L_21 = V_1;
		int32_t L_22 = V_6;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		int32_t L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->set_Next_1(((int32_t)((int32_t)L_24-(int32_t)1)));
		Int32U5BU5D_t1740869865* L_25 = V_1;
		int32_t L_26 = V_6;
		int32_t L_27 = V_4;
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(L_26), (int32_t)((int32_t)((int32_t)L_27+(int32_t)1)));
		LinkU5BU5D_t3355813421* L_28 = (LinkU5BU5D_t3355813421*)__this->get_links_5();
		int32_t L_29 = V_4;
		NullCheck(L_28);
		int32_t L_30 = (int32_t)((L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_29)))->get_Next_1();
		V_4 = (int32_t)L_30;
	}

IL_009a:
	{
		int32_t L_31 = V_4;
		if ((!(((uint32_t)L_31) == ((uint32_t)(-1)))))
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_32 = V_3;
		V_3 = (int32_t)((int32_t)((int32_t)L_32+(int32_t)1));
	}

IL_00a6:
	{
		int32_t L_33 = V_3;
		Int32U5BU5D_t1740869865* L_34 = (Int32U5BU5D_t1740869865*)__this->get_table_4();
		NullCheck(L_34);
		if ((((int32_t)L_33) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_34)->max_length)))))))
		{
			goto IL_0027;
		}
	}
	{
		Int32U5BU5D_t1740869865* L_35 = V_1;
		__this->set_table_4(L_35);
		LinkU5BU5D_t3355813421* L_36 = V_2;
		__this->set_links_5(L_36);
		int32_t L_37 = V_0;
		V_7 = (ObjectU5BU5D_t3228797622*)((ObjectU5BU5D_t3228797622*)SZArrayNew(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 12), (uint32_t)L_37));
		ObjectU5BU5D_t3228797622* L_38 = (ObjectU5BU5D_t3228797622*)__this->get_slots_6();
		ObjectU5BU5D_t3228797622* L_39 = V_7;
		int32_t L_40 = (int32_t)__this->get_touched_7();
		Array_Copy_m705440050(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_38, (int32_t)0, (RuntimeArray *)(RuntimeArray *)L_39, (int32_t)0, (int32_t)L_40, /*hidden argument*/NULL);
		ObjectU5BU5D_t3228797622* L_41 = V_7;
		__this->set_slots_6(L_41);
		int32_t L_42 = V_0;
		__this->set_threshold_10((((int32_t)((int32_t)((float)((float)(((float)((float)L_42)))*(float)(0.9f)))))));
		return;
	}
}
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::GetLinkHashCode(System.Int32)
extern "C"  int32_t HashSet_1_GetLinkHashCode_m3431825889_gshared (HashSet_1_t2618856944 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		LinkU5BU5D_t3355813421* L_0 = (LinkU5BU5D_t3355813421*)__this->get_links_5();
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		int32_t L_2 = (int32_t)((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)))->get_HashCode_0();
		return ((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2147483648LL)));
	}
}
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::GetItemHashCode(T)
extern "C"  int32_t HashSet_1_GetItemHashCode_m2060955890_gshared (HashSet_1_t2618856944 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___item0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		return ((int32_t)-2147483648LL);
	}

IL_0011:
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_comparer_11();
		RuntimeObject * L_2 = ___item0;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_3 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Object>::GetHashCode(!0) */, IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 14), (RuntimeObject*)L_1, (RuntimeObject *)L_2);
		return ((int32_t)((int32_t)L_3|(int32_t)((int32_t)-2147483648LL)));
	}
}
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(T)
extern "C"  bool HashSet_1_Add_m2564284912_gshared (HashSet_1_t2618856944 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		RuntimeObject * L_0 = ___item0;
		NullCheck((HashSet_1_t2618856944 *)__this);
		int32_t L_1 = ((  int32_t (*) (HashSet_1_t2618856944 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 19)->methodPointer)((HashSet_1_t2618856944 *)__this, (RuntimeObject *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 19));
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		Int32U5BU5D_t1740869865* L_3 = (Int32U5BU5D_t1740869865*)__this->get_table_4();
		NullCheck(L_3);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_2&(int32_t)((int32_t)2147483647LL)))%(int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_3)->max_length))))));
		int32_t L_4 = V_1;
		int32_t L_5 = V_0;
		RuntimeObject * L_6 = ___item0;
		NullCheck((HashSet_1_t2618856944 *)__this);
		bool L_7 = ((  bool (*) (HashSet_1_t2618856944 *, int32_t, int32_t, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 20)->methodPointer)((HashSet_1_t2618856944 *)__this, (int32_t)L_4, (int32_t)L_5, (RuntimeObject *)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 20));
		if (!L_7)
		{
			goto IL_0029;
		}
	}
	{
		return (bool)0;
	}

IL_0029:
	{
		int32_t L_8 = (int32_t)__this->get_count_9();
		int32_t L_9 = (int32_t)((int32_t)((int32_t)L_8+(int32_t)1));
		V_3 = (int32_t)L_9;
		__this->set_count_9(L_9);
		int32_t L_10 = V_3;
		int32_t L_11 = (int32_t)__this->get_threshold_10();
		if ((((int32_t)L_10) <= ((int32_t)L_11)))
		{
			goto IL_005c;
		}
	}
	{
		NullCheck((HashSet_1_t2618856944 *)__this);
		((  void (*) (HashSet_1_t2618856944 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 21)->methodPointer)((HashSet_1_t2618856944 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 21));
		int32_t L_12 = V_0;
		Int32U5BU5D_t1740869865* L_13 = (Int32U5BU5D_t1740869865*)__this->get_table_4();
		NullCheck(L_13);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_12&(int32_t)((int32_t)2147483647LL)))%(int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_13)->max_length))))));
	}

IL_005c:
	{
		int32_t L_14 = (int32_t)__this->get_empty_slot_8();
		V_2 = (int32_t)L_14;
		int32_t L_15 = V_2;
		if ((!(((uint32_t)L_15) == ((uint32_t)(-1)))))
		{
			goto IL_0081;
		}
	}
	{
		int32_t L_16 = (int32_t)__this->get_touched_7();
		int32_t L_17 = (int32_t)L_16;
		V_3 = (int32_t)L_17;
		__this->set_touched_7(((int32_t)((int32_t)L_17+(int32_t)1)));
		int32_t L_18 = V_3;
		V_2 = (int32_t)L_18;
		goto IL_0098;
	}

IL_0081:
	{
		LinkU5BU5D_t3355813421* L_19 = (LinkU5BU5D_t3355813421*)__this->get_links_5();
		int32_t L_20 = V_2;
		NullCheck(L_19);
		int32_t L_21 = (int32_t)((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->get_Next_1();
		__this->set_empty_slot_8(L_21);
	}

IL_0098:
	{
		LinkU5BU5D_t3355813421* L_22 = (LinkU5BU5D_t3355813421*)__this->get_links_5();
		int32_t L_23 = V_2;
		NullCheck(L_22);
		int32_t L_24 = V_0;
		((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->set_HashCode_0(L_24);
		LinkU5BU5D_t3355813421* L_25 = (LinkU5BU5D_t3355813421*)__this->get_links_5();
		int32_t L_26 = V_2;
		NullCheck(L_25);
		Int32U5BU5D_t1740869865* L_27 = (Int32U5BU5D_t1740869865*)__this->get_table_4();
		int32_t L_28 = V_1;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		int32_t L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->set_Next_1(((int32_t)((int32_t)L_30-(int32_t)1)));
		Int32U5BU5D_t1740869865* L_31 = (Int32U5BU5D_t1740869865*)__this->get_table_4();
		int32_t L_32 = V_1;
		int32_t L_33 = V_2;
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (int32_t)((int32_t)((int32_t)L_33+(int32_t)1)));
		ObjectU5BU5D_t3228797622* L_34 = (ObjectU5BU5D_t3228797622*)__this->get_slots_6();
		int32_t L_35 = V_2;
		RuntimeObject * L_36 = ___item0;
		NullCheck(L_34);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(L_35), (RuntimeObject *)L_36);
		int32_t L_37 = (int32_t)__this->get_generation_13();
		__this->set_generation_13(((int32_t)((int32_t)L_37+(int32_t)1)));
		return (bool)1;
	}
}
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Clear()
extern "C"  void HashSet_1_Clear_m4198176629_gshared (HashSet_1_t2618856944 * __this, const RuntimeMethod* method)
{
	{
		__this->set_count_9(0);
		Int32U5BU5D_t1740869865* L_0 = (Int32U5BU5D_t1740869865*)__this->get_table_4();
		Int32U5BU5D_t1740869865* L_1 = (Int32U5BU5D_t1740869865*)__this->get_table_4();
		NullCheck(L_1);
		Array_Clear_m2791295959(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_0, (int32_t)0, (int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length)))), /*hidden argument*/NULL);
		ObjectU5BU5D_t3228797622* L_2 = (ObjectU5BU5D_t3228797622*)__this->get_slots_6();
		ObjectU5BU5D_t3228797622* L_3 = (ObjectU5BU5D_t3228797622*)__this->get_slots_6();
		NullCheck(L_3);
		Array_Clear_m2791295959(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_2, (int32_t)0, (int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_3)->max_length)))), /*hidden argument*/NULL);
		LinkU5BU5D_t3355813421* L_4 = (LinkU5BU5D_t3355813421*)__this->get_links_5();
		LinkU5BU5D_t3355813421* L_5 = (LinkU5BU5D_t3355813421*)__this->get_links_5();
		NullCheck(L_5);
		Array_Clear_m2791295959(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_4, (int32_t)0, (int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_5)->max_length)))), /*hidden argument*/NULL);
		__this->set_empty_slot_8((-1));
		__this->set_touched_7(0);
		int32_t L_6 = (int32_t)__this->get_generation_13();
		__this->set_generation_13(((int32_t)((int32_t)L_6+(int32_t)1)));
		return;
	}
}
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Contains(T)
extern "C"  bool HashSet_1_Contains_m3179363827_gshared (HashSet_1_t2618856944 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		RuntimeObject * L_0 = ___item0;
		NullCheck((HashSet_1_t2618856944 *)__this);
		int32_t L_1 = ((  int32_t (*) (HashSet_1_t2618856944 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 19)->methodPointer)((HashSet_1_t2618856944 *)__this, (RuntimeObject *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 19));
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		Int32U5BU5D_t1740869865* L_3 = (Int32U5BU5D_t1740869865*)__this->get_table_4();
		NullCheck(L_3);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_2&(int32_t)((int32_t)2147483647LL)))%(int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_3)->max_length))))));
		int32_t L_4 = V_1;
		int32_t L_5 = V_0;
		RuntimeObject * L_6 = ___item0;
		NullCheck((HashSet_1_t2618856944 *)__this);
		bool L_7 = ((  bool (*) (HashSet_1_t2618856944 *, int32_t, int32_t, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 20)->methodPointer)((HashSet_1_t2618856944 *)__this, (int32_t)L_4, (int32_t)L_5, (RuntimeObject *)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 20));
		return L_7;
	}
}
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Remove(T)
extern "C"  bool HashSet_1_Remove_m835676418_gshared (HashSet_1_t2618856944 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HashSet_1_Remove_m835676418_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Link_t1939500100  V_4;
	memset(&V_4, 0, sizeof(V_4));
	RuntimeObject * V_5 = NULL;
	int32_t G_B10_0 = 0;
	int32_t G_B12_0 = 0;
	{
		RuntimeObject * L_0 = ___item0;
		NullCheck((HashSet_1_t2618856944 *)__this);
		int32_t L_1 = ((  int32_t (*) (HashSet_1_t2618856944 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 19)->methodPointer)((HashSet_1_t2618856944 *)__this, (RuntimeObject *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 19));
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		Int32U5BU5D_t1740869865* L_3 = (Int32U5BU5D_t1740869865*)__this->get_table_4();
		NullCheck(L_3);
		V_1 = (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_2&(int32_t)((int32_t)2147483647LL)))%(int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_3)->max_length))))));
		Int32U5BU5D_t1740869865* L_4 = (Int32U5BU5D_t1740869865*)__this->get_table_4();
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		int32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = (int32_t)((int32_t)((int32_t)L_7-(int32_t)1));
		int32_t L_8 = V_2;
		if ((!(((uint32_t)L_8) == ((uint32_t)(-1)))))
		{
			goto IL_002d;
		}
	}
	{
		return (bool)0;
	}

IL_002d:
	{
		V_3 = (int32_t)(-1);
	}

IL_002f:
	{
		LinkU5BU5D_t3355813421* L_9 = (LinkU5BU5D_t3355813421*)__this->get_links_5();
		int32_t L_10 = V_2;
		NullCheck(L_9);
		V_4 = (Link_t1939500100 )(*(Link_t1939500100 *)((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10))));
		int32_t L_11 = (int32_t)(&V_4)->get_HashCode_0();
		int32_t L_12 = V_0;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_00c4;
		}
	}
	{
		int32_t L_13 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)-2147483648LL)))))
		{
			goto IL_00a2;
		}
	}
	{
		RuntimeObject * L_14 = ___item0;
		if (!L_14)
		{
			goto IL_007b;
		}
	}
	{
		ObjectU5BU5D_t3228797622* L_15 = (ObjectU5BU5D_t3228797622*)__this->get_slots_6();
		int32_t L_16 = V_2;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		RuntimeObject * L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		if (L_18)
		{
			goto IL_00a2;
		}
	}

IL_007b:
	{
		RuntimeObject * L_19 = ___item0;
		if (L_19)
		{
			goto IL_009c;
		}
	}
	{
		ObjectU5BU5D_t3228797622* L_20 = (ObjectU5BU5D_t3228797622*)__this->get_slots_6();
		int32_t L_21 = V_2;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		RuntimeObject * L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		G_B10_0 = ((((RuntimeObject*)(RuntimeObject *)NULL) == ((RuntimeObject*)(RuntimeObject *)L_23))? 1 : 0);
		goto IL_009d;
	}

IL_009c:
	{
		G_B10_0 = 0;
	}

IL_009d:
	{
		G_B12_0 = G_B10_0;
		goto IL_00ba;
	}

IL_00a2:
	{
		RuntimeObject* L_24 = (RuntimeObject*)__this->get_comparer_11();
		ObjectU5BU5D_t3228797622* L_25 = (ObjectU5BU5D_t3228797622*)__this->get_slots_6();
		int32_t L_26 = V_2;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		RuntimeObject * L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		RuntimeObject * L_29 = ___item0;
		NullCheck((RuntimeObject*)L_24);
		bool L_30 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Object>::Equals(!0,!0) */, IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 14), (RuntimeObject*)L_24, (RuntimeObject *)L_28, (RuntimeObject *)L_29);
		G_B12_0 = ((int32_t)(L_30));
	}

IL_00ba:
	{
		if (!G_B12_0)
		{
			goto IL_00c4;
		}
	}
	{
		goto IL_00d5;
	}

IL_00c4:
	{
		int32_t L_31 = V_2;
		V_3 = (int32_t)L_31;
		int32_t L_32 = (int32_t)(&V_4)->get_Next_1();
		V_2 = (int32_t)L_32;
		int32_t L_33 = V_2;
		if ((!(((uint32_t)L_33) == ((uint32_t)(-1)))))
		{
			goto IL_002f;
		}
	}

IL_00d5:
	{
		int32_t L_34 = V_2;
		if ((!(((uint32_t)L_34) == ((uint32_t)(-1)))))
		{
			goto IL_00de;
		}
	}
	{
		return (bool)0;
	}

IL_00de:
	{
		int32_t L_35 = (int32_t)__this->get_count_9();
		__this->set_count_9(((int32_t)((int32_t)L_35-(int32_t)1)));
		int32_t L_36 = V_3;
		if ((!(((uint32_t)L_36) == ((uint32_t)(-1)))))
		{
			goto IL_0113;
		}
	}
	{
		Int32U5BU5D_t1740869865* L_37 = (Int32U5BU5D_t1740869865*)__this->get_table_4();
		int32_t L_38 = V_1;
		LinkU5BU5D_t3355813421* L_39 = (LinkU5BU5D_t3355813421*)__this->get_links_5();
		int32_t L_40 = V_2;
		NullCheck(L_39);
		int32_t L_41 = (int32_t)((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40)))->get_Next_1();
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (int32_t)((int32_t)((int32_t)L_41+(int32_t)1)));
		goto IL_0135;
	}

IL_0113:
	{
		LinkU5BU5D_t3355813421* L_42 = (LinkU5BU5D_t3355813421*)__this->get_links_5();
		int32_t L_43 = V_3;
		NullCheck(L_42);
		LinkU5BU5D_t3355813421* L_44 = (LinkU5BU5D_t3355813421*)__this->get_links_5();
		int32_t L_45 = V_2;
		NullCheck(L_44);
		int32_t L_46 = (int32_t)((L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_45)))->get_Next_1();
		((L_42)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_43)))->set_Next_1(L_46);
	}

IL_0135:
	{
		LinkU5BU5D_t3355813421* L_47 = (LinkU5BU5D_t3355813421*)__this->get_links_5();
		int32_t L_48 = V_2;
		NullCheck(L_47);
		int32_t L_49 = (int32_t)__this->get_empty_slot_8();
		((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->set_Next_1(L_49);
		int32_t L_50 = V_2;
		__this->set_empty_slot_8(L_50);
		LinkU5BU5D_t3355813421* L_51 = (LinkU5BU5D_t3355813421*)__this->get_links_5();
		int32_t L_52 = V_2;
		NullCheck(L_51);
		((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52)))->set_HashCode_0(0);
		ObjectU5BU5D_t3228797622* L_53 = (ObjectU5BU5D_t3228797622*)__this->get_slots_6();
		int32_t L_54 = V_2;
		Initobj (RuntimeObject_il2cpp_TypeInfo_var, (&V_5));
		RuntimeObject * L_55 = V_5;
		NullCheck(L_53);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(L_54), (RuntimeObject *)L_55);
		int32_t L_56 = (int32_t)__this->get_generation_13();
		__this->set_generation_13(((int32_t)((int32_t)L_56+(int32_t)1)));
		return (bool)1;
	}
}
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::RemoveWhere(System.Predicate`1<T>)
extern "C"  int32_t HashSet_1_RemoveWhere_m2644337533_gshared (HashSet_1_t2618856944 * __this, Predicate_1_t1785876169 * ___predicate0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HashSet_1_RemoveWhere_m2644337533_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ObjectU5BU5D_t3228797622* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	ObjectU5BU5D_t3228797622* V_3 = NULL;
	int32_t V_4 = 0;
	{
		Predicate_1_t1785876169 * L_0 = ___predicate0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1093734427 * L_1 = (ArgumentNullException_t1093734427 *)il2cpp_codegen_object_new(ArgumentNullException_t1093734427_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1765345595(L_1, (String_t*)_stringLiteral1126183466, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_0011:
	{
		V_0 = (int32_t)0;
		int32_t L_2 = (int32_t)__this->get_count_9();
		V_1 = (ObjectU5BU5D_t3228797622*)((ObjectU5BU5D_t3228797622*)SZArrayNew(IL2CPP_RGCTX_DATA(method->declaring_type->rgctx_data, 12), (uint32_t)L_2));
		ObjectU5BU5D_t3228797622* L_3 = V_1;
		NullCheck((HashSet_1_t2618856944 *)__this);
		((  void (*) (HashSet_1_t2618856944 *, ObjectU5BU5D_t3228797622*, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 7)->methodPointer)((HashSet_1_t2618856944 *)__this, (ObjectU5BU5D_t3228797622*)L_3, (int32_t)0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 7));
		ObjectU5BU5D_t3228797622* L_4 = V_1;
		V_3 = (ObjectU5BU5D_t3228797622*)L_4;
		V_4 = (int32_t)0;
		goto IL_0058;
	}

IL_0031:
	{
		ObjectU5BU5D_t3228797622* L_5 = V_3;
		int32_t L_6 = V_4;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		RuntimeObject * L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_2 = (RuntimeObject *)L_8;
		Predicate_1_t1785876169 * L_9 = ___predicate0;
		RuntimeObject * L_10 = V_2;
		NullCheck((Predicate_1_t1785876169 *)L_9);
		bool L_11 = ((  bool (*) (Predicate_1_t1785876169 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 22)->methodPointer)((Predicate_1_t1785876169 *)L_9, (RuntimeObject *)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 22));
		if (!L_11)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject * L_12 = V_2;
		NullCheck((HashSet_1_t2618856944 *)__this);
		((  bool (*) (HashSet_1_t2618856944 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 23)->methodPointer)((HashSet_1_t2618856944 *)__this, (RuntimeObject *)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 23));
		int32_t L_13 = V_0;
		V_0 = (int32_t)((int32_t)((int32_t)L_13+(int32_t)1));
	}

IL_0052:
	{
		int32_t L_14 = V_4;
		V_4 = (int32_t)((int32_t)((int32_t)L_14+(int32_t)1));
	}

IL_0058:
	{
		int32_t L_15 = V_4;
		ObjectU5BU5D_t3228797622* L_16 = V_3;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_16)->max_length)))))))
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_17 = V_0;
		return L_17;
	}
}
// System.Void System.Collections.Generic.HashSet`1<System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void HashSet_1_GetObjectData_m2631563967_gshared (HashSet_1_t2618856944 * __this, SerializationInfo_t3249095650 * ___info0, StreamingContext_t1069071516  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HashSet_1_GetObjectData_m2631563967_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotImplementedException_t3498316797 * L_0 = (NotImplementedException_t3498316797 *)il2cpp_codegen_object_new(NotImplementedException_t3498316797_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m4183698353(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
	}
}
// System.Void System.Collections.Generic.HashSet`1<System.Object>::OnDeserialization(System.Object)
extern "C"  void HashSet_1_OnDeserialization_m660187817_gshared (HashSet_1_t2618856944 * __this, RuntimeObject * ___sender0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HashSet_1_OnDeserialization_m660187817_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializationInfo_t3249095650 * L_0 = (SerializationInfo_t3249095650 *)__this->get_si_12();
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		NotImplementedException_t3498316797 * L_1 = (NotImplementedException_t3498316797 *)il2cpp_codegen_object_new(NotImplementedException_t3498316797_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m4183698353(L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}
}
// System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1<System.Object>::GetEnumerator()
extern "C"  Enumerator_t2285132738  HashSet_1_GetEnumerator_m510175803_gshared (HashSet_1_t2618856944 * __this, const RuntimeMethod* method)
{
	{
		Enumerator_t2285132738  L_0;
		memset(&L_0, 0, sizeof(L_0));
		Enumerator__ctor_m2318597550((&L_0), (HashSet_1_t2618856944 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->declaring_type->rgctx_data, 6));
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif

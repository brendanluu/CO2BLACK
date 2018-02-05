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

// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Char[]
<<<<<<< Updated upstream
struct CharU5BU5D_t815250530;
// System.Void
struct Void_t2358704652;
// System.Type[]
struct TypeU5BU5D_t3863813590;
// System.Reflection.MemberFilter
struct MemberFilter_t1191107317;
=======
struct CharU5BU5D_t3572321290;
// System.Void
struct Void_t1770888296;
// System.Type[]
struct TypeU5BU5D_t967117384;
// System.Reflection.MemberFilter
struct MemberFilter_t1504202910;
>>>>>>> Stashed changes




<<<<<<< Updated upstream
#ifndef U3CMODULEU3E_T1833730992_H
#define U3CMODULEU3E_T1833730992_H
=======
#ifndef U3CMODULEU3E_T3585700744_H
#define U3CMODULEU3E_T3585700744_H
>>>>>>> Stashed changes
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
<<<<<<< Updated upstream
struct  U3CModuleU3E_t1833730992 
=======
struct  U3CModuleU3E_t3585700744 
>>>>>>> Stashed changes
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< Updated upstream
#endif // U3CMODULEU3E_T1833730992_H
=======
#endif // U3CMODULEU3E_T3585700744_H
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
<<<<<<< Updated upstream
#ifndef JSONUTILITY_T1676018583_H
#define JSONUTILITY_T1676018583_H
=======
#ifndef JSONUTILITY_T3875002787_H
#define JSONUTILITY_T3875002787_H
>>>>>>> Stashed changes
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.JsonUtility
<<<<<<< Updated upstream
struct  JsonUtility_t1676018583  : public RuntimeObject
=======
struct  JsonUtility_t3875002787  : public RuntimeObject
>>>>>>> Stashed changes
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< Updated upstream
#endif // JSONUTILITY_T1676018583_H
=======
#endif // JSONUTILITY_T3875002787_H
>>>>>>> Stashed changes
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
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
<<<<<<< Updated upstream
#ifndef VALUETYPE_T4179911041_H
#define VALUETYPE_T4179911041_H
=======
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
#ifndef ENUM_T364249761_H
#define ENUM_T364249761_H
=======
struct ValueType_t3861366942_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3861366942_marshaled_com
{
};
#endif // VALUETYPE_T3861366942_H
#ifndef ENUM_T4252857293_H
#define ENUM_T4252857293_H
>>>>>>> Stashed changes
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
<<<<<<< Updated upstream
struct  Enum_t364249761  : public ValueType_t4179911041
=======
struct  Enum_t4252857293  : public ValueType_t3861366942
>>>>>>> Stashed changes
{
public:

public:
};

<<<<<<< Updated upstream
struct Enum_t364249761_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t815250530* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t364249761_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t815250530* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t815250530** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t815250530* value)
=======
struct Enum_t4252857293_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3572321290* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4252857293_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3572321290* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3572321290** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3572321290* value)
>>>>>>> Stashed changes
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
<<<<<<< Updated upstream
struct Enum_t364249761_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t364249761_marshaled_com
{
};
#endif // ENUM_T364249761_H
=======
struct Enum_t4252857293_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4252857293_marshaled_com
{
};
#endif // ENUM_T4252857293_H
>>>>>>> Stashed changes
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
<<<<<<< Updated upstream
#ifndef BINDINGFLAGS_T206954857_H
#define BINDINGFLAGS_T206954857_H
=======
#ifndef BINDINGFLAGS_T1369017961_H
#define BINDINGFLAGS_T1369017961_H
>>>>>>> Stashed changes
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
<<<<<<< Updated upstream
struct  BindingFlags_t206954857 
=======
struct  BindingFlags_t1369017961 
>>>>>>> Stashed changes
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___1;

public:
<<<<<<< Updated upstream
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BindingFlags_t206954857, ___value___1)); }
=======
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BindingFlags_t1369017961, ___value___1)); }
>>>>>>> Stashed changes
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
<<<<<<< Updated upstream
#endif // BINDINGFLAGS_T206954857_H
#ifndef RUNTIMETYPEHANDLE_T2219422446_H
#define RUNTIMETYPEHANDLE_T2219422446_H
=======
#endif // BINDINGFLAGS_T1369017961_H
#ifndef RUNTIMETYPEHANDLE_T1333215186_H
#define RUNTIMETYPEHANDLE_T1333215186_H
>>>>>>> Stashed changes
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
<<<<<<< Updated upstream
struct  RuntimeTypeHandle_t2219422446 
=======
struct  RuntimeTypeHandle_t1333215186 
>>>>>>> Stashed changes
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
<<<<<<< Updated upstream
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t2219422446, ___value_0)); }
=======
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t1333215186, ___value_0)); }
>>>>>>> Stashed changes
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< Updated upstream
#endif // RUNTIMETYPEHANDLE_T2219422446_H
=======
#endif // RUNTIMETYPEHANDLE_T1333215186_H
>>>>>>> Stashed changes
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
<<<<<<< Updated upstream
	RuntimeTypeHandle_t2219422446  ____impl_1;

public:
	inline static int32_t get_offset_of__impl_1() { return static_cast<int32_t>(offsetof(Type_t, ____impl_1)); }
	inline RuntimeTypeHandle_t2219422446  get__impl_1() const { return ____impl_1; }
	inline RuntimeTypeHandle_t2219422446 * get_address_of__impl_1() { return &____impl_1; }
	inline void set__impl_1(RuntimeTypeHandle_t2219422446  value)
=======
	RuntimeTypeHandle_t1333215186  ____impl_1;

public:
	inline static int32_t get_offset_of__impl_1() { return static_cast<int32_t>(offsetof(Type_t, ____impl_1)); }
	inline RuntimeTypeHandle_t1333215186  get__impl_1() const { return ____impl_1; }
	inline RuntimeTypeHandle_t1333215186 * get_address_of__impl_1() { return &____impl_1; }
	inline void set__impl_1(RuntimeTypeHandle_t1333215186  value)
>>>>>>> Stashed changes
	{
		____impl_1 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_2;
	// System.Type[] System.Type::EmptyTypes
<<<<<<< Updated upstream
	TypeU5BU5D_t3863813590* ___EmptyTypes_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t1191107317 * ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t1191107317 * ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t1191107317 * ___FilterNameIgnoreCase_6;
=======
	TypeU5BU5D_t967117384* ___EmptyTypes_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t1504202910 * ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t1504202910 * ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t1504202910 * ___FilterNameIgnoreCase_6;
>>>>>>> Stashed changes
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_7;

public:
	inline static int32_t get_offset_of_Delimiter_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_2)); }
	inline Il2CppChar get_Delimiter_2() const { return ___Delimiter_2; }
	inline Il2CppChar* get_address_of_Delimiter_2() { return &___Delimiter_2; }
	inline void set_Delimiter_2(Il2CppChar value)
	{
		___Delimiter_2 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_3)); }
<<<<<<< Updated upstream
	inline TypeU5BU5D_t3863813590* get_EmptyTypes_3() const { return ___EmptyTypes_3; }
	inline TypeU5BU5D_t3863813590** get_address_of_EmptyTypes_3() { return &___EmptyTypes_3; }
	inline void set_EmptyTypes_3(TypeU5BU5D_t3863813590* value)
=======
	inline TypeU5BU5D_t967117384* get_EmptyTypes_3() const { return ___EmptyTypes_3; }
	inline TypeU5BU5D_t967117384** get_address_of_EmptyTypes_3() { return &___EmptyTypes_3; }
	inline void set_EmptyTypes_3(TypeU5BU5D_t967117384* value)
>>>>>>> Stashed changes
	{
		___EmptyTypes_3 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_3), value);
	}

	inline static int32_t get_offset_of_FilterAttribute_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_4)); }
<<<<<<< Updated upstream
	inline MemberFilter_t1191107317 * get_FilterAttribute_4() const { return ___FilterAttribute_4; }
	inline MemberFilter_t1191107317 ** get_address_of_FilterAttribute_4() { return &___FilterAttribute_4; }
	inline void set_FilterAttribute_4(MemberFilter_t1191107317 * value)
=======
	inline MemberFilter_t1504202910 * get_FilterAttribute_4() const { return ___FilterAttribute_4; }
	inline MemberFilter_t1504202910 ** get_address_of_FilterAttribute_4() { return &___FilterAttribute_4; }
	inline void set_FilterAttribute_4(MemberFilter_t1504202910 * value)
>>>>>>> Stashed changes
	{
		___FilterAttribute_4 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_4), value);
	}

	inline static int32_t get_offset_of_FilterName_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_5)); }
<<<<<<< Updated upstream
	inline MemberFilter_t1191107317 * get_FilterName_5() const { return ___FilterName_5; }
	inline MemberFilter_t1191107317 ** get_address_of_FilterName_5() { return &___FilterName_5; }
	inline void set_FilterName_5(MemberFilter_t1191107317 * value)
=======
	inline MemberFilter_t1504202910 * get_FilterName_5() const { return ___FilterName_5; }
	inline MemberFilter_t1504202910 ** get_address_of_FilterName_5() { return &___FilterName_5; }
	inline void set_FilterName_5(MemberFilter_t1504202910 * value)
>>>>>>> Stashed changes
	{
		___FilterName_5 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_5), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_6)); }
<<<<<<< Updated upstream
	inline MemberFilter_t1191107317 * get_FilterNameIgnoreCase_6() const { return ___FilterNameIgnoreCase_6; }
	inline MemberFilter_t1191107317 ** get_address_of_FilterNameIgnoreCase_6() { return &___FilterNameIgnoreCase_6; }
	inline void set_FilterNameIgnoreCase_6(MemberFilter_t1191107317 * value)
=======
	inline MemberFilter_t1504202910 * get_FilterNameIgnoreCase_6() const { return ___FilterNameIgnoreCase_6; }
	inline MemberFilter_t1504202910 ** get_address_of_FilterNameIgnoreCase_6() { return &___FilterNameIgnoreCase_6; }
	inline void set_FilterNameIgnoreCase_6(MemberFilter_t1504202910 * value)
>>>>>>> Stashed changes
	{
		___FilterNameIgnoreCase_6 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_6), value);
	}

	inline static int32_t get_offset_of_Missing_7() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_7)); }
	inline RuntimeObject * get_Missing_7() const { return ___Missing_7; }
	inline RuntimeObject ** get_address_of_Missing_7() { return &___Missing_7; }
	inline void set_Missing_7(RuntimeObject * value)
	{
		___Missing_7 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H



#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Object UnityEngine.JsonUtility::FromJson(System.String,System.Type)
<<<<<<< Updated upstream
extern "C"  RuntimeObject * JsonUtility_FromJson_m2974463738 (RuntimeObject * __this /* static, unused */, String_t* ___json0, Type_t * ___type1, const RuntimeMethod* method)
{
	typedef RuntimeObject * (*JsonUtility_FromJson_m2974463738_ftn) (String_t*, Type_t *);
	static JsonUtility_FromJson_m2974463738_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (JsonUtility_FromJson_m2974463738_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.JsonUtility::FromJson(System.String,System.Type)");
=======
extern "C"  RuntimeObject * JsonUtility_FromJson_m3106467094 (RuntimeObject * __this /* static, unused */, String_t* ___json0, Type_t * ___type1, const RuntimeMethod* method)
{
	typedef RuntimeObject * (*JsonUtility_FromJson_m3106467094_ftn) (String_t*, Type_t *);
	static JsonUtility_FromJson_m3106467094_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (JsonUtility_FromJson_m3106467094_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.JsonUtility::FromJson(System.String,System.Type)");
>>>>>>> Stashed changes
	RuntimeObject * retVal = _il2cpp_icall_func(___json0, ___type1);
	return retVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif

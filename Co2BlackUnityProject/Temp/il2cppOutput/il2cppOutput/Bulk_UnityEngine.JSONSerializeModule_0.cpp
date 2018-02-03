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
<<<<<<< HEAD
struct CharU5BU5D_t2080128531;
// System.Void
struct Void_t3213303575;
// System.Type[]
struct TypeU5BU5D_t596451602;
// System.Reflection.MemberFilter
struct MemberFilter_t2313434306;
=======
struct CharU5BU5D_t3825954526;
// System.Void
struct Void_t1752747391;
// System.Type[]
struct TypeU5BU5D_t496715913;
// System.Reflection.MemberFilter
struct MemberFilter_t139352787;
>>>>>>> cf60945cbc5617ca689f7500106263bf99990762




<<<<<<< HEAD
#ifndef U3CMODULEU3E_T3289413121_H
#define U3CMODULEU3E_T3289413121_H
=======
#ifndef U3CMODULEU3E_T4164872546_H
#define U3CMODULEU3E_T4164872546_H
>>>>>>> cf60945cbc5617ca689f7500106263bf99990762
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
<<<<<<< HEAD
struct  U3CModuleU3E_t3289413121 
=======
struct  U3CModuleU3E_t4164872546 
>>>>>>> cf60945cbc5617ca689f7500106263bf99990762
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // U3CMODULEU3E_T3289413121_H
=======
#endif // U3CMODULEU3E_T4164872546_H
>>>>>>> cf60945cbc5617ca689f7500106263bf99990762
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
#ifndef JSONUTILITY_T2252056655_H
#define JSONUTILITY_T2252056655_H
=======
#ifndef JSONUTILITY_T3481415422_H
#define JSONUTILITY_T3481415422_H
>>>>>>> cf60945cbc5617ca689f7500106263bf99990762
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.JsonUtility
<<<<<<< HEAD
struct  JsonUtility_t2252056655  : public RuntimeObject
=======
struct  JsonUtility_t3481415422  : public RuntimeObject
>>>>>>> cf60945cbc5617ca689f7500106263bf99990762
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // JSONUTILITY_T2252056655_H
=======
#endif // JSONUTILITY_T3481415422_H
>>>>>>> cf60945cbc5617ca689f7500106263bf99990762
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
	CharU5BU5D_t2080128531* ___WhiteChars_3;
=======
	CharU5BU5D_t3825954526* ___WhiteChars_3;
>>>>>>> cf60945cbc5617ca689f7500106263bf99990762

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
	inline CharU5BU5D_t2080128531* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t2080128531** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t2080128531* value)
=======
	inline CharU5BU5D_t3825954526* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3825954526** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3825954526* value)
>>>>>>> cf60945cbc5617ca689f7500106263bf99990762
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
<<<<<<< HEAD
#ifndef VALUETYPE_T3249919482_H
#define VALUETYPE_T3249919482_H
=======
#ifndef VALUETYPE_T2609464153_H
#define VALUETYPE_T2609464153_H
>>>>>>> cf60945cbc5617ca689f7500106263bf99990762
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
<<<<<<< HEAD
struct  ValueType_t3249919482  : public RuntimeObject
=======
struct  ValueType_t2609464153  : public RuntimeObject
>>>>>>> cf60945cbc5617ca689f7500106263bf99990762
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
<<<<<<< HEAD
struct ValueType_t3249919482_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3249919482_marshaled_com
{
};
#endif // VALUETYPE_T3249919482_H
#ifndef ENUM_T1341287663_H
#define ENUM_T1341287663_H
=======
struct ValueType_t2609464153_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t2609464153_marshaled_com
{
};
#endif // VALUETYPE_T2609464153_H
#ifndef ENUM_T2414767330_H
#define ENUM_T2414767330_H
>>>>>>> cf60945cbc5617ca689f7500106263bf99990762
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
<<<<<<< HEAD
struct  Enum_t1341287663  : public ValueType_t3249919482
=======
struct  Enum_t2414767330  : public ValueType_t2609464153
>>>>>>> cf60945cbc5617ca689f7500106263bf99990762
{
public:

public:
};

<<<<<<< HEAD
struct Enum_t1341287663_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t2080128531* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t1341287663_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t2080128531* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t2080128531** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t2080128531* value)
=======
struct Enum_t2414767330_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3825954526* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t2414767330_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3825954526* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3825954526** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3825954526* value)
>>>>>>> cf60945cbc5617ca689f7500106263bf99990762
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
struct Enum_t1341287663_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t1341287663_marshaled_com
{
};
#endif // ENUM_T1341287663_H
=======
struct Enum_t2414767330_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2414767330_marshaled_com
{
};
#endif // ENUM_T2414767330_H
>>>>>>> cf60945cbc5617ca689f7500106263bf99990762
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
<<<<<<< HEAD
#ifndef BINDINGFLAGS_T2246025_H
#define BINDINGFLAGS_T2246025_H
=======
#ifndef BINDINGFLAGS_T3011827484_H
#define BINDINGFLAGS_T3011827484_H
>>>>>>> cf60945cbc5617ca689f7500106263bf99990762
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
<<<<<<< HEAD
struct  BindingFlags_t2246025 
=======
struct  BindingFlags_t3011827484 
>>>>>>> cf60945cbc5617ca689f7500106263bf99990762
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___1;

public:
<<<<<<< HEAD
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BindingFlags_t2246025, ___value___1)); }
=======
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BindingFlags_t3011827484, ___value___1)); }
>>>>>>> cf60945cbc5617ca689f7500106263bf99990762
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
#endif // BINDINGFLAGS_T2246025_H
#ifndef RUNTIMETYPEHANDLE_T936316844_H
#define RUNTIMETYPEHANDLE_T936316844_H
=======
#endif // BINDINGFLAGS_T3011827484_H
#ifndef RUNTIMETYPEHANDLE_T2109290658_H
#define RUNTIMETYPEHANDLE_T2109290658_H
>>>>>>> cf60945cbc5617ca689f7500106263bf99990762
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
<<<<<<< HEAD
struct  RuntimeTypeHandle_t936316844 
=======
struct  RuntimeTypeHandle_t2109290658 
>>>>>>> cf60945cbc5617ca689f7500106263bf99990762
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
<<<<<<< HEAD
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t936316844, ___value_0)); }
=======
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t2109290658, ___value_0)); }
>>>>>>> cf60945cbc5617ca689f7500106263bf99990762
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
<<<<<<< HEAD
#endif // RUNTIMETYPEHANDLE_T936316844_H
=======
#endif // RUNTIMETYPEHANDLE_T2109290658_H
>>>>>>> cf60945cbc5617ca689f7500106263bf99990762
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
<<<<<<< HEAD
	RuntimeTypeHandle_t936316844  ____impl_1;

public:
	inline static int32_t get_offset_of__impl_1() { return static_cast<int32_t>(offsetof(Type_t, ____impl_1)); }
	inline RuntimeTypeHandle_t936316844  get__impl_1() const { return ____impl_1; }
	inline RuntimeTypeHandle_t936316844 * get_address_of__impl_1() { return &____impl_1; }
	inline void set__impl_1(RuntimeTypeHandle_t936316844  value)
=======
	RuntimeTypeHandle_t2109290658  ____impl_1;

public:
	inline static int32_t get_offset_of__impl_1() { return static_cast<int32_t>(offsetof(Type_t, ____impl_1)); }
	inline RuntimeTypeHandle_t2109290658  get__impl_1() const { return ____impl_1; }
	inline RuntimeTypeHandle_t2109290658 * get_address_of__impl_1() { return &____impl_1; }
	inline void set__impl_1(RuntimeTypeHandle_t2109290658  value)
>>>>>>> cf60945cbc5617ca689f7500106263bf99990762
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
<<<<<<< HEAD
	TypeU5BU5D_t596451602* ___EmptyTypes_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t2313434306 * ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t2313434306 * ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t2313434306 * ___FilterNameIgnoreCase_6;
=======
	TypeU5BU5D_t496715913* ___EmptyTypes_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t139352787 * ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t139352787 * ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t139352787 * ___FilterNameIgnoreCase_6;
>>>>>>> cf60945cbc5617ca689f7500106263bf99990762
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
<<<<<<< HEAD
	inline TypeU5BU5D_t596451602* get_EmptyTypes_3() const { return ___EmptyTypes_3; }
	inline TypeU5BU5D_t596451602** get_address_of_EmptyTypes_3() { return &___EmptyTypes_3; }
	inline void set_EmptyTypes_3(TypeU5BU5D_t596451602* value)
=======
	inline TypeU5BU5D_t496715913* get_EmptyTypes_3() const { return ___EmptyTypes_3; }
	inline TypeU5BU5D_t496715913** get_address_of_EmptyTypes_3() { return &___EmptyTypes_3; }
	inline void set_EmptyTypes_3(TypeU5BU5D_t496715913* value)
>>>>>>> cf60945cbc5617ca689f7500106263bf99990762
	{
		___EmptyTypes_3 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_3), value);
	}

	inline static int32_t get_offset_of_FilterAttribute_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_4)); }
<<<<<<< HEAD
	inline MemberFilter_t2313434306 * get_FilterAttribute_4() const { return ___FilterAttribute_4; }
	inline MemberFilter_t2313434306 ** get_address_of_FilterAttribute_4() { return &___FilterAttribute_4; }
	inline void set_FilterAttribute_4(MemberFilter_t2313434306 * value)
=======
	inline MemberFilter_t139352787 * get_FilterAttribute_4() const { return ___FilterAttribute_4; }
	inline MemberFilter_t139352787 ** get_address_of_FilterAttribute_4() { return &___FilterAttribute_4; }
	inline void set_FilterAttribute_4(MemberFilter_t139352787 * value)
>>>>>>> cf60945cbc5617ca689f7500106263bf99990762
	{
		___FilterAttribute_4 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_4), value);
	}

	inline static int32_t get_offset_of_FilterName_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_5)); }
<<<<<<< HEAD
	inline MemberFilter_t2313434306 * get_FilterName_5() const { return ___FilterName_5; }
	inline MemberFilter_t2313434306 ** get_address_of_FilterName_5() { return &___FilterName_5; }
	inline void set_FilterName_5(MemberFilter_t2313434306 * value)
=======
	inline MemberFilter_t139352787 * get_FilterName_5() const { return ___FilterName_5; }
	inline MemberFilter_t139352787 ** get_address_of_FilterName_5() { return &___FilterName_5; }
	inline void set_FilterName_5(MemberFilter_t139352787 * value)
>>>>>>> cf60945cbc5617ca689f7500106263bf99990762
	{
		___FilterName_5 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_5), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_6)); }
<<<<<<< HEAD
	inline MemberFilter_t2313434306 * get_FilterNameIgnoreCase_6() const { return ___FilterNameIgnoreCase_6; }
	inline MemberFilter_t2313434306 ** get_address_of_FilterNameIgnoreCase_6() { return &___FilterNameIgnoreCase_6; }
	inline void set_FilterNameIgnoreCase_6(MemberFilter_t2313434306 * value)
=======
	inline MemberFilter_t139352787 * get_FilterNameIgnoreCase_6() const { return ___FilterNameIgnoreCase_6; }
	inline MemberFilter_t139352787 ** get_address_of_FilterNameIgnoreCase_6() { return &___FilterNameIgnoreCase_6; }
	inline void set_FilterNameIgnoreCase_6(MemberFilter_t139352787 * value)
>>>>>>> cf60945cbc5617ca689f7500106263bf99990762
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
<<<<<<< HEAD
extern "C"  RuntimeObject * JsonUtility_FromJson_m2316353071 (RuntimeObject * __this /* static, unused */, String_t* ___json0, Type_t * ___type1, const RuntimeMethod* method)
{
	typedef RuntimeObject * (*JsonUtility_FromJson_m2316353071_ftn) (String_t*, Type_t *);
	static JsonUtility_FromJson_m2316353071_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (JsonUtility_FromJson_m2316353071_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.JsonUtility::FromJson(System.String,System.Type)");
=======
extern "C"  RuntimeObject * JsonUtility_FromJson_m1667681737 (RuntimeObject * __this /* static, unused */, String_t* ___json0, Type_t * ___type1, const RuntimeMethod* method)
{
	typedef RuntimeObject * (*JsonUtility_FromJson_m1667681737_ftn) (String_t*, Type_t *);
	static JsonUtility_FromJson_m1667681737_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (JsonUtility_FromJson_m1667681737_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.JsonUtility::FromJson(System.String,System.Type)");
>>>>>>> cf60945cbc5617ca689f7500106263bf99990762
	RuntimeObject * retVal = _il2cpp_icall_func(___json0, ___type1);
	return retVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif

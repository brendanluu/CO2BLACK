#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "object-internals.h"

// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Exception
<<<<<<< Updated upstream
struct Exception_t4070620035;
// System.Text.StringBuilder
struct StringBuilder_t1490975588;
// System.MulticastDelegate
struct MulticastDelegate_t3431217064;
// System.Reflection.MethodBase
struct MethodBase_t3740105827;
// System.Reflection.Assembly
struct Assembly_t2479282248;
// System.Void
struct Void_t2358704652;
=======
struct Exception_t1621546179;
// System.Text.StringBuilder
struct StringBuilder_t695219194;
// System.MulticastDelegate
struct MulticastDelegate_t828797195;
// System.Reflection.MethodBase
struct MethodBase_t2131865403;
// System.Reflection.Assembly
struct Assembly_t2944291718;
// System.Void
struct Void_t1770888296;
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
=======
struct ValueType_t3861366942_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3861366942_marshaled_com
{
};
#endif // VALUETYPE_T3861366942_H
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
#ifndef RUNTIMETYPEHANDLE_T2219422446_H
#define RUNTIMETYPEHANDLE_T2219422446_H
=======
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
#ifndef RUNTIMEFIELDHANDLE_T3913074280_H
#define RUNTIMEFIELDHANDLE_T3913074280_H
=======
#endif // RUNTIMETYPEHANDLE_T1333215186_H
#ifndef RUNTIMEFIELDHANDLE_T3459521294_H
#define RUNTIMEFIELDHANDLE_T3459521294_H
>>>>>>> Stashed changes
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeFieldHandle
<<<<<<< Updated upstream
struct  RuntimeFieldHandle_t3913074280 
=======
struct  RuntimeFieldHandle_t3459521294 
>>>>>>> Stashed changes
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
<<<<<<< Updated upstream
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t3913074280, ___value_0)); }
=======
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t3459521294, ___value_0)); }
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
#endif // RUNTIMEFIELDHANDLE_T3913074280_H
#ifndef RUNTIMEARGUMENTHANDLE_T1449125457_H
#define RUNTIMEARGUMENTHANDLE_T1449125457_H
=======
#endif // RUNTIMEFIELDHANDLE_T3459521294_H
#ifndef RUNTIMEARGUMENTHANDLE_T4273449978_H
#define RUNTIMEARGUMENTHANDLE_T4273449978_H
>>>>>>> Stashed changes
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeArgumentHandle
<<<<<<< Updated upstream
struct  RuntimeArgumentHandle_t1449125457 
=======
struct  RuntimeArgumentHandle_t4273449978 
>>>>>>> Stashed changes
{
public:
	// System.IntPtr System.RuntimeArgumentHandle::args
	intptr_t ___args_0;

public:
<<<<<<< Updated upstream
	inline static int32_t get_offset_of_args_0() { return static_cast<int32_t>(offsetof(RuntimeArgumentHandle_t1449125457, ___args_0)); }
=======
	inline static int32_t get_offset_of_args_0() { return static_cast<int32_t>(offsetof(RuntimeArgumentHandle_t4273449978, ___args_0)); }
>>>>>>> Stashed changes
	inline intptr_t get_args_0() const { return ___args_0; }
	inline intptr_t* get_address_of_args_0() { return &___args_0; }
	inline void set_args_0(intptr_t value)
	{
		___args_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< Updated upstream
#endif // RUNTIMEARGUMENTHANDLE_T1449125457_H
#ifndef RUNTIMEMETHODHANDLE_T1340895778_H
#define RUNTIMEMETHODHANDLE_T1340895778_H
=======
#endif // RUNTIMEARGUMENTHANDLE_T4273449978_H
#ifndef RUNTIMEMETHODHANDLE_T387228011_H
#define RUNTIMEMETHODHANDLE_T387228011_H
>>>>>>> Stashed changes
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeMethodHandle
<<<<<<< Updated upstream
struct  RuntimeMethodHandle_t1340895778 
=======
struct  RuntimeMethodHandle_t387228011 
>>>>>>> Stashed changes
{
public:
	// System.IntPtr System.RuntimeMethodHandle::value
	intptr_t ___value_0;

public:
<<<<<<< Updated upstream
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeMethodHandle_t1340895778, ___value_0)); }
=======
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeMethodHandle_t387228011, ___value_0)); }
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
#endif // RUNTIMEMETHODHANDLE_T1340895778_H
=======
#endif // RUNTIMEMETHODHANDLE_T387228011_H
>>>>>>> Stashed changes



#pragma once
typedef String_t Il2CppCodeGenString;
typedef Type_t Il2CppCodeGenType;
<<<<<<< Updated upstream
typedef Exception_t4070620035 Il2CppCodeGenException;
typedef RuntimeTypeHandle_t2219422446 Il2CppCodeGenRuntimeTypeHandle;
typedef RuntimeFieldHandle_t3913074280 Il2CppCodeGenRuntimeFieldHandle;
typedef RuntimeArgumentHandle_t1449125457 Il2CppCodeGenRuntimeArgumentHandle;
typedef RuntimeMethodHandle_t1340895778 Il2CppCodeGenRuntimeMethodHandle;
typedef StringBuilder_t1490975588 Il2CppCodeGenStringBuilder;
typedef MulticastDelegate_t3431217064 Il2CppCodeGenMulticastDelegate;
typedef MethodBase_t3740105827 Il2CppCodeGenMethodBase;
typedef Assembly_t2479282248 Il2CppCodeGenAssembly;
=======
typedef Exception_t1621546179 Il2CppCodeGenException;
typedef RuntimeTypeHandle_t1333215186 Il2CppCodeGenRuntimeTypeHandle;
typedef RuntimeFieldHandle_t3459521294 Il2CppCodeGenRuntimeFieldHandle;
typedef RuntimeArgumentHandle_t4273449978 Il2CppCodeGenRuntimeArgumentHandle;
typedef RuntimeMethodHandle_t387228011 Il2CppCodeGenRuntimeMethodHandle;
typedef StringBuilder_t695219194 Il2CppCodeGenStringBuilder;
typedef MulticastDelegate_t828797195 Il2CppCodeGenMulticastDelegate;
typedef MethodBase_t2131865403 Il2CppCodeGenMethodBase;
typedef Assembly_t2944291718 Il2CppCodeGenAssembly;
>>>>>>> Stashed changes

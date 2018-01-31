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
<<<<<<< HEAD
struct Exception_t3333768149;
// System.Text.StringBuilder
struct StringBuilder_t3900911860;
// System.MulticastDelegate
struct MulticastDelegate_t112086692;
// System.Reflection.MethodBase
struct MethodBase_t217472556;
// System.Reflection.Assembly
struct Assembly_t3449585980;
// System.Void
struct Void_t292648814;
=======
struct Exception_t1927440687;
// System.Text.StringBuilder
struct StringBuilder_t1221177846;
// System.MulticastDelegate
struct MulticastDelegate_t3201952435;
// System.Reflection.MethodBase
struct MethodBase_t904190842;
// System.Reflection.Assembly
struct Assembly_t4268412390;
// System.Void
struct Void_t1841601450;
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8




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
<<<<<<< HEAD
#ifndef VALUETYPE_T3399951316_H
#define VALUETYPE_T3399951316_H
=======
#ifndef VALUETYPE_T3507792607_H
#define VALUETYPE_T3507792607_H
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
<<<<<<< HEAD
struct  ValueType_t3399951316  : public RuntimeObject
=======
struct  ValueType_t3507792607  : public RuntimeObject
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
<<<<<<< HEAD
struct ValueType_t3399951316_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3399951316_marshaled_com
{
};
#endif // VALUETYPE_T3399951316_H
=======
struct ValueType_t3507792607_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3507792607_marshaled_com
{
};
#endif // VALUETYPE_T3507792607_H
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
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
#ifndef RUNTIMETYPEHANDLE_T1285733734_H
#define RUNTIMETYPEHANDLE_T1285733734_H
=======
#ifndef RUNTIMETYPEHANDLE_T2330101084_H
#define RUNTIMETYPEHANDLE_T2330101084_H
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
<<<<<<< HEAD
struct  RuntimeTypeHandle_t1285733734 
=======
struct  RuntimeTypeHandle_t2330101084 
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
<<<<<<< HEAD
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t1285733734, ___value_0)); }
=======
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t2330101084, ___value_0)); }
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
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
#endif // RUNTIMETYPEHANDLE_T1285733734_H
#ifndef RUNTIMEFIELDHANDLE_T3769088830_H
#define RUNTIMEFIELDHANDLE_T3769088830_H
=======
#endif // RUNTIMETYPEHANDLE_T2330101084_H
#ifndef RUNTIMEFIELDHANDLE_T2331729674_H
#define RUNTIMEFIELDHANDLE_T2331729674_H
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeFieldHandle
<<<<<<< HEAD
struct  RuntimeFieldHandle_t3769088830 
=======
struct  RuntimeFieldHandle_t2331729674 
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
<<<<<<< HEAD
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t3769088830, ___value_0)); }
=======
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t2331729674, ___value_0)); }
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
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
#endif // RUNTIMEFIELDHANDLE_T3769088830_H
#ifndef RUNTIMEARGUMENTHANDLE_T294987459_H
#define RUNTIMEARGUMENTHANDLE_T294987459_H
=======
#endif // RUNTIMEFIELDHANDLE_T2331729674_H
#ifndef RUNTIMEARGUMENTHANDLE_T3259266975_H
#define RUNTIMEARGUMENTHANDLE_T3259266975_H
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeArgumentHandle
<<<<<<< HEAD
struct  RuntimeArgumentHandle_t294987459 
=======
struct  RuntimeArgumentHandle_t3259266975 
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
{
public:
	// System.IntPtr System.RuntimeArgumentHandle::args
	intptr_t ___args_0;

public:
<<<<<<< HEAD
	inline static int32_t get_offset_of_args_0() { return static_cast<int32_t>(offsetof(RuntimeArgumentHandle_t294987459, ___args_0)); }
=======
	inline static int32_t get_offset_of_args_0() { return static_cast<int32_t>(offsetof(RuntimeArgumentHandle_t3259266975, ___args_0)); }
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
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
<<<<<<< HEAD
#endif // RUNTIMEARGUMENTHANDLE_T294987459_H
#ifndef RUNTIMEMETHODHANDLE_T1344162384_H
#define RUNTIMEMETHODHANDLE_T1344162384_H
=======
#endif // RUNTIMEARGUMENTHANDLE_T3259266975_H
#ifndef RUNTIMEMETHODHANDLE_T894824333_H
#define RUNTIMEMETHODHANDLE_T894824333_H
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeMethodHandle
<<<<<<< HEAD
struct  RuntimeMethodHandle_t1344162384 
=======
struct  RuntimeMethodHandle_t894824333 
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
{
public:
	// System.IntPtr System.RuntimeMethodHandle::value
	intptr_t ___value_0;

public:
<<<<<<< HEAD
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeMethodHandle_t1344162384, ___value_0)); }
=======
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeMethodHandle_t894824333, ___value_0)); }
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
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
#endif // RUNTIMEMETHODHANDLE_T1344162384_H
=======
#endif // RUNTIMEMETHODHANDLE_T894824333_H
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8



#pragma once
typedef String_t Il2CppCodeGenString;
typedef Type_t Il2CppCodeGenType;
<<<<<<< HEAD
typedef Exception_t3333768149 Il2CppCodeGenException;
typedef RuntimeTypeHandle_t1285733734 Il2CppCodeGenRuntimeTypeHandle;
typedef RuntimeFieldHandle_t3769088830 Il2CppCodeGenRuntimeFieldHandle;
typedef RuntimeArgumentHandle_t294987459 Il2CppCodeGenRuntimeArgumentHandle;
typedef RuntimeMethodHandle_t1344162384 Il2CppCodeGenRuntimeMethodHandle;
typedef StringBuilder_t3900911860 Il2CppCodeGenStringBuilder;
typedef MulticastDelegate_t112086692 Il2CppCodeGenMulticastDelegate;
typedef MethodBase_t217472556 Il2CppCodeGenMethodBase;
typedef Assembly_t3449585980 Il2CppCodeGenAssembly;
=======
typedef Exception_t1927440687 Il2CppCodeGenException;
typedef RuntimeTypeHandle_t2330101084 Il2CppCodeGenRuntimeTypeHandle;
typedef RuntimeFieldHandle_t2331729674 Il2CppCodeGenRuntimeFieldHandle;
typedef RuntimeArgumentHandle_t3259266975 Il2CppCodeGenRuntimeArgumentHandle;
typedef RuntimeMethodHandle_t894824333 Il2CppCodeGenRuntimeMethodHandle;
typedef StringBuilder_t1221177846 Il2CppCodeGenStringBuilder;
typedef MulticastDelegate_t3201952435 Il2CppCodeGenMulticastDelegate;
typedef MethodBase_t904190842 Il2CppCodeGenMethodBase;
typedef Assembly_t4268412390 Il2CppCodeGenAssembly;
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8

﻿#pragma once

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
struct Exception_t1486376006;
// System.Text.StringBuilder
struct StringBuilder_t2661557271;
// System.MulticastDelegate
struct MulticastDelegate_t1459967157;
// System.Reflection.MethodBase
struct MethodBase_t577993080;
// System.Reflection.Assembly
struct Assembly_t1203482622;
// System.Void
struct Void_t2682914905;
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
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a




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
#ifndef VALUETYPE_T3693359752_H
#define VALUETYPE_T3693359752_H
=======
#ifndef VALUETYPE_T3507792607_H
#define VALUETYPE_T3507792607_H
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
<<<<<<< HEAD
struct  ValueType_t3693359752  : public RuntimeObject
=======
struct  ValueType_t3507792607  : public RuntimeObject
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
<<<<<<< HEAD
struct ValueType_t3693359752_marshaled_pinvoke
=======
struct ValueType_t3507792607_marshaled_pinvoke
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3693359752_marshaled_com
{
};
<<<<<<< HEAD
#endif // VALUETYPE_T3693359752_H
=======
#endif // VALUETYPE_T3507792607_H
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a
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
#ifndef RUNTIMETYPEHANDLE_T1577147426_H
#define RUNTIMETYPEHANDLE_T1577147426_H
=======
#ifndef RUNTIMETYPEHANDLE_T2330101084_H
#define RUNTIMETYPEHANDLE_T2330101084_H
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
<<<<<<< HEAD
struct  RuntimeTypeHandle_t1577147426 
=======
struct  RuntimeTypeHandle_t2330101084 
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
<<<<<<< HEAD
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t1577147426, ___value_0)); }
=======
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t2330101084, ___value_0)); }
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a
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
#endif // RUNTIMETYPEHANDLE_T1577147426_H
#ifndef RUNTIMEFIELDHANDLE_T3796963192_H
#define RUNTIMEFIELDHANDLE_T3796963192_H
=======
#endif // RUNTIMETYPEHANDLE_T2330101084_H
#ifndef RUNTIMEFIELDHANDLE_T2331729674_H
#define RUNTIMEFIELDHANDLE_T2331729674_H
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeFieldHandle
<<<<<<< HEAD
struct  RuntimeFieldHandle_t3796963192 
=======
struct  RuntimeFieldHandle_t2331729674 
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
<<<<<<< HEAD
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t3796963192, ___value_0)); }
=======
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t2331729674, ___value_0)); }
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a
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
#endif // RUNTIMEFIELDHANDLE_T3796963192_H
#ifndef RUNTIMEARGUMENTHANDLE_T301381705_H
#define RUNTIMEARGUMENTHANDLE_T301381705_H
=======
#endif // RUNTIMEFIELDHANDLE_T2331729674_H
#ifndef RUNTIMEARGUMENTHANDLE_T3259266975_H
#define RUNTIMEARGUMENTHANDLE_T3259266975_H
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeArgumentHandle
<<<<<<< HEAD
struct  RuntimeArgumentHandle_t301381705 
=======
struct  RuntimeArgumentHandle_t3259266975 
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a
{
public:
	// System.IntPtr System.RuntimeArgumentHandle::args
	intptr_t ___args_0;

public:
<<<<<<< HEAD
	inline static int32_t get_offset_of_args_0() { return static_cast<int32_t>(offsetof(RuntimeArgumentHandle_t301381705, ___args_0)); }
=======
	inline static int32_t get_offset_of_args_0() { return static_cast<int32_t>(offsetof(RuntimeArgumentHandle_t3259266975, ___args_0)); }
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a
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
#endif // RUNTIMEARGUMENTHANDLE_T301381705_H
#ifndef RUNTIMEMETHODHANDLE_T2557619394_H
#define RUNTIMEMETHODHANDLE_T2557619394_H
=======
#endif // RUNTIMEARGUMENTHANDLE_T3259266975_H
#ifndef RUNTIMEMETHODHANDLE_T894824333_H
#define RUNTIMEMETHODHANDLE_T894824333_H
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeMethodHandle
<<<<<<< HEAD
struct  RuntimeMethodHandle_t2557619394 
=======
struct  RuntimeMethodHandle_t894824333 
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a
{
public:
	// System.IntPtr System.RuntimeMethodHandle::value
	intptr_t ___value_0;

public:
<<<<<<< HEAD
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeMethodHandle_t2557619394, ___value_0)); }
=======
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeMethodHandle_t894824333, ___value_0)); }
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a
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
#endif // RUNTIMEMETHODHANDLE_T2557619394_H
=======
#endif // RUNTIMEMETHODHANDLE_T894824333_H
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a



#pragma once
typedef String_t Il2CppCodeGenString;
typedef Type_t Il2CppCodeGenType;
<<<<<<< HEAD
typedef Exception_t1486376006 Il2CppCodeGenException;
typedef RuntimeTypeHandle_t1577147426 Il2CppCodeGenRuntimeTypeHandle;
typedef RuntimeFieldHandle_t3796963192 Il2CppCodeGenRuntimeFieldHandle;
typedef RuntimeArgumentHandle_t301381705 Il2CppCodeGenRuntimeArgumentHandle;
typedef RuntimeMethodHandle_t2557619394 Il2CppCodeGenRuntimeMethodHandle;
typedef StringBuilder_t2661557271 Il2CppCodeGenStringBuilder;
typedef MulticastDelegate_t1459967157 Il2CppCodeGenMulticastDelegate;
typedef MethodBase_t577993080 Il2CppCodeGenMethodBase;
typedef Assembly_t1203482622 Il2CppCodeGenAssembly;
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
>>>>>>> 704d8026e8fc3f938aba771aa116e7b6a0cffc9a

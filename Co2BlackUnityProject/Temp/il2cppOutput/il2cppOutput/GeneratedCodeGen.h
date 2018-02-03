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
struct Exception_t503507648;
// System.Text.StringBuilder
struct StringBuilder_t3215543779;
// System.MulticastDelegate
struct MulticastDelegate_t3468473487;
// System.Reflection.MethodBase
struct MethodBase_t295141381;
// System.Reflection.Assembly
struct Assembly_t1828889443;
// System.Void
struct Void_t3213303575;
=======
struct Exception_t1641748846;
// System.Text.StringBuilder
struct StringBuilder_t392263800;
// System.MulticastDelegate
struct MulticastDelegate_t1220068439;
// System.Reflection.MethodBase
struct MethodBase_t2520100307;
// System.Reflection.Assembly
struct Assembly_t3600206286;
// System.Void
struct Void_t1752747391;
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
=======
struct ValueType_t2609464153_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t2609464153_marshaled_com
{
};
#endif // VALUETYPE_T2609464153_H
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
#ifndef RUNTIMETYPEHANDLE_T936316844_H
#define RUNTIMETYPEHANDLE_T936316844_H
=======
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
#ifndef RUNTIMEFIELDHANDLE_T2144036077_H
#define RUNTIMEFIELDHANDLE_T2144036077_H
=======
#endif // RUNTIMETYPEHANDLE_T2109290658_H
#ifndef RUNTIMEFIELDHANDLE_T3489901197_H
#define RUNTIMEFIELDHANDLE_T3489901197_H
>>>>>>> cf60945cbc5617ca689f7500106263bf99990762
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeFieldHandle
<<<<<<< HEAD
struct  RuntimeFieldHandle_t2144036077 
=======
struct  RuntimeFieldHandle_t3489901197 
>>>>>>> cf60945cbc5617ca689f7500106263bf99990762
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
<<<<<<< HEAD
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t2144036077, ___value_0)); }
=======
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t3489901197, ___value_0)); }
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
#endif // RUNTIMEFIELDHANDLE_T2144036077_H
#ifndef RUNTIMEARGUMENTHANDLE_T3193648968_H
#define RUNTIMEARGUMENTHANDLE_T3193648968_H
=======
#endif // RUNTIMEFIELDHANDLE_T3489901197_H
#ifndef RUNTIMEARGUMENTHANDLE_T2043014973_H
#define RUNTIMEARGUMENTHANDLE_T2043014973_H
>>>>>>> cf60945cbc5617ca689f7500106263bf99990762
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeArgumentHandle
<<<<<<< HEAD
struct  RuntimeArgumentHandle_t3193648968 
=======
struct  RuntimeArgumentHandle_t2043014973 
>>>>>>> cf60945cbc5617ca689f7500106263bf99990762
{
public:
	// System.IntPtr System.RuntimeArgumentHandle::args
	intptr_t ___args_0;

public:
<<<<<<< HEAD
	inline static int32_t get_offset_of_args_0() { return static_cast<int32_t>(offsetof(RuntimeArgumentHandle_t3193648968, ___args_0)); }
=======
	inline static int32_t get_offset_of_args_0() { return static_cast<int32_t>(offsetof(RuntimeArgumentHandle_t2043014973, ___args_0)); }
>>>>>>> cf60945cbc5617ca689f7500106263bf99990762
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
#endif // RUNTIMEARGUMENTHANDLE_T3193648968_H
#ifndef RUNTIMEMETHODHANDLE_T463710663_H
#define RUNTIMEMETHODHANDLE_T463710663_H
=======
#endif // RUNTIMEARGUMENTHANDLE_T2043014973_H
#ifndef RUNTIMEMETHODHANDLE_T2441237840_H
#define RUNTIMEMETHODHANDLE_T2441237840_H
>>>>>>> cf60945cbc5617ca689f7500106263bf99990762
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeMethodHandle
<<<<<<< HEAD
struct  RuntimeMethodHandle_t463710663 
=======
struct  RuntimeMethodHandle_t2441237840 
>>>>>>> cf60945cbc5617ca689f7500106263bf99990762
{
public:
	// System.IntPtr System.RuntimeMethodHandle::value
	intptr_t ___value_0;

public:
<<<<<<< HEAD
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeMethodHandle_t463710663, ___value_0)); }
=======
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeMethodHandle_t2441237840, ___value_0)); }
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
#endif // RUNTIMEMETHODHANDLE_T463710663_H
=======
#endif // RUNTIMEMETHODHANDLE_T2441237840_H
>>>>>>> cf60945cbc5617ca689f7500106263bf99990762



#pragma once
typedef String_t Il2CppCodeGenString;
typedef Type_t Il2CppCodeGenType;
<<<<<<< HEAD
typedef Exception_t503507648 Il2CppCodeGenException;
typedef RuntimeTypeHandle_t936316844 Il2CppCodeGenRuntimeTypeHandle;
typedef RuntimeFieldHandle_t2144036077 Il2CppCodeGenRuntimeFieldHandle;
typedef RuntimeArgumentHandle_t3193648968 Il2CppCodeGenRuntimeArgumentHandle;
typedef RuntimeMethodHandle_t463710663 Il2CppCodeGenRuntimeMethodHandle;
typedef StringBuilder_t3215543779 Il2CppCodeGenStringBuilder;
typedef MulticastDelegate_t3468473487 Il2CppCodeGenMulticastDelegate;
typedef MethodBase_t295141381 Il2CppCodeGenMethodBase;
typedef Assembly_t1828889443 Il2CppCodeGenAssembly;
=======
typedef Exception_t1641748846 Il2CppCodeGenException;
typedef RuntimeTypeHandle_t2109290658 Il2CppCodeGenRuntimeTypeHandle;
typedef RuntimeFieldHandle_t3489901197 Il2CppCodeGenRuntimeFieldHandle;
typedef RuntimeArgumentHandle_t2043014973 Il2CppCodeGenRuntimeArgumentHandle;
typedef RuntimeMethodHandle_t2441237840 Il2CppCodeGenRuntimeMethodHandle;
typedef StringBuilder_t392263800 Il2CppCodeGenStringBuilder;
typedef MulticastDelegate_t1220068439 Il2CppCodeGenMulticastDelegate;
typedef MethodBase_t2520100307 Il2CppCodeGenMethodBase;
typedef Assembly_t3600206286 Il2CppCodeGenAssembly;
>>>>>>> cf60945cbc5617ca689f7500106263bf99990762

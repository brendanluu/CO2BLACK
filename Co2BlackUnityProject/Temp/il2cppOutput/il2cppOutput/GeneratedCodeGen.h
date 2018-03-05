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
struct Exception_t2180154353;
// System.Text.StringBuilder
struct StringBuilder_t3536390786;
// System.MulticastDelegate
struct MulticastDelegate_t2481366615;
// System.Reflection.MethodBase
struct MethodBase_t1507418799;
// System.Reflection.Assembly
struct Assembly_t2095415243;
// System.Void
struct Void_t2997257317;
=======
struct Exception_t2037056314;
// System.Text.StringBuilder
struct StringBuilder_t921971751;
// System.MulticastDelegate
struct MulticastDelegate_t1569807397;
// System.Reflection.MethodBase
struct MethodBase_t1200843469;
// System.Reflection.Assembly
struct Assembly_t3476856417;
// System.Void
struct Void_t951523016;
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
#ifndef VALUETYPE_T3976162219_H
#define VALUETYPE_T3976162219_H
=======
#ifndef VALUETYPE_T2823937718_H
#define VALUETYPE_T2823937718_H
>>>>>>> Stashed changes
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
<<<<<<< Updated upstream
struct  ValueType_t3976162219  : public RuntimeObject
=======
struct  ValueType_t2823937718  : public RuntimeObject
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
struct ValueType_t3976162219_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3976162219_marshaled_com
{
};
#endif // VALUETYPE_T3976162219_H
=======
struct ValueType_t2823937718_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t2823937718_marshaled_com
{
};
#endif // VALUETYPE_T2823937718_H
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
#ifndef RUNTIMETYPEHANDLE_T1909299641_H
#define RUNTIMETYPEHANDLE_T1909299641_H
=======
#ifndef RUNTIMETYPEHANDLE_T936717068_H
#define RUNTIMETYPEHANDLE_T936717068_H
>>>>>>> Stashed changes
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
<<<<<<< Updated upstream
struct  RuntimeTypeHandle_t1909299641 
=======
struct  RuntimeTypeHandle_t936717068 
>>>>>>> Stashed changes
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
<<<<<<< Updated upstream
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t1909299641, ___value_0)); }
=======
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t936717068, ___value_0)); }
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
#endif // RUNTIMETYPEHANDLE_T1909299641_H
#ifndef RUNTIMEFIELDHANDLE_T4147307593_H
#define RUNTIMEFIELDHANDLE_T4147307593_H
=======
#endif // RUNTIMETYPEHANDLE_T936717068_H
#ifndef RUNTIMEFIELDHANDLE_T3336049957_H
#define RUNTIMEFIELDHANDLE_T3336049957_H
>>>>>>> Stashed changes
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeFieldHandle
<<<<<<< Updated upstream
struct  RuntimeFieldHandle_t4147307593 
=======
struct  RuntimeFieldHandle_t3336049957 
>>>>>>> Stashed changes
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
<<<<<<< Updated upstream
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t4147307593, ___value_0)); }
=======
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t3336049957, ___value_0)); }
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
#endif // RUNTIMEFIELDHANDLE_T4147307593_H
#ifndef RUNTIMEARGUMENTHANDLE_T3190666159_H
#define RUNTIMEARGUMENTHANDLE_T3190666159_H
=======
#endif // RUNTIMEFIELDHANDLE_T3336049957_H
#ifndef RUNTIMEARGUMENTHANDLE_T1098824792_H
#define RUNTIMEARGUMENTHANDLE_T1098824792_H
>>>>>>> Stashed changes
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeArgumentHandle
<<<<<<< Updated upstream
struct  RuntimeArgumentHandle_t3190666159 
=======
struct  RuntimeArgumentHandle_t1098824792 
>>>>>>> Stashed changes
{
public:
	// System.IntPtr System.RuntimeArgumentHandle::args
	intptr_t ___args_0;

public:
<<<<<<< Updated upstream
	inline static int32_t get_offset_of_args_0() { return static_cast<int32_t>(offsetof(RuntimeArgumentHandle_t3190666159, ___args_0)); }
=======
	inline static int32_t get_offset_of_args_0() { return static_cast<int32_t>(offsetof(RuntimeArgumentHandle_t1098824792, ___args_0)); }
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
#endif // RUNTIMEARGUMENTHANDLE_T3190666159_H
#ifndef RUNTIMEMETHODHANDLE_T1148064183_H
#define RUNTIMEMETHODHANDLE_T1148064183_H
=======
#endif // RUNTIMEARGUMENTHANDLE_T1098824792_H
#ifndef RUNTIMEMETHODHANDLE_T1425703503_H
#define RUNTIMEMETHODHANDLE_T1425703503_H
>>>>>>> Stashed changes
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeMethodHandle
<<<<<<< Updated upstream
struct  RuntimeMethodHandle_t1148064183 
=======
struct  RuntimeMethodHandle_t1425703503 
>>>>>>> Stashed changes
{
public:
	// System.IntPtr System.RuntimeMethodHandle::value
	intptr_t ___value_0;

public:
<<<<<<< Updated upstream
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeMethodHandle_t1148064183, ___value_0)); }
=======
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeMethodHandle_t1425703503, ___value_0)); }
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
#endif // RUNTIMEMETHODHANDLE_T1148064183_H
=======
#endif // RUNTIMEMETHODHANDLE_T1425703503_H
>>>>>>> Stashed changes



#pragma once
typedef String_t Il2CppCodeGenString;
typedef Type_t Il2CppCodeGenType;
<<<<<<< Updated upstream
typedef Exception_t2180154353 Il2CppCodeGenException;
typedef RuntimeTypeHandle_t1909299641 Il2CppCodeGenRuntimeTypeHandle;
typedef RuntimeFieldHandle_t4147307593 Il2CppCodeGenRuntimeFieldHandle;
typedef RuntimeArgumentHandle_t3190666159 Il2CppCodeGenRuntimeArgumentHandle;
typedef RuntimeMethodHandle_t1148064183 Il2CppCodeGenRuntimeMethodHandle;
typedef StringBuilder_t3536390786 Il2CppCodeGenStringBuilder;
typedef MulticastDelegate_t2481366615 Il2CppCodeGenMulticastDelegate;
typedef MethodBase_t1507418799 Il2CppCodeGenMethodBase;
typedef Assembly_t2095415243 Il2CppCodeGenAssembly;
=======
typedef Exception_t2037056314 Il2CppCodeGenException;
typedef RuntimeTypeHandle_t936717068 Il2CppCodeGenRuntimeTypeHandle;
typedef RuntimeFieldHandle_t3336049957 Il2CppCodeGenRuntimeFieldHandle;
typedef RuntimeArgumentHandle_t1098824792 Il2CppCodeGenRuntimeArgumentHandle;
typedef RuntimeMethodHandle_t1425703503 Il2CppCodeGenRuntimeMethodHandle;
typedef StringBuilder_t921971751 Il2CppCodeGenStringBuilder;
typedef MulticastDelegate_t1569807397 Il2CppCodeGenMulticastDelegate;
typedef MethodBase_t1200843469 Il2CppCodeGenMethodBase;
typedef Assembly_t3476856417 Il2CppCodeGenAssembly;
>>>>>>> Stashed changes

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
struct Exception_t251009993;
=======
<<<<<<< HEAD
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
=======
struct Exception_t1506159279;
>>>>>>> 2d99588e503a47cbe8688dd82d86bf37bf91be99
// System.Text.StringBuilder
struct StringBuilder_t2734665580;
// System.MulticastDelegate
struct MulticastDelegate_t958034981;
// System.Reflection.MethodBase
struct MethodBase_t2360333602;
// System.Reflection.Assembly
struct Assembly_t2983603885;
// System.Void
<<<<<<< HEAD
struct Void_t1454993405;
=======
struct Void_t1787403281;
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
>>>>>>> 2d99588e503a47cbe8688dd82d86bf37bf91be99




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
#ifndef VALUETYPE_T3736612346_H
#define VALUETYPE_T3736612346_H
=======
<<<<<<< HEAD
#ifndef VALUETYPE_T3507792607_H
#define VALUETYPE_T3507792607_H
=======
#ifndef VALUETYPE_T2664944137_H
#define VALUETYPE_T2664944137_H
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
>>>>>>> 2d99588e503a47cbe8688dd82d86bf37bf91be99
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
<<<<<<< HEAD
struct  ValueType_t3736612346  : public RuntimeObject
=======
<<<<<<< HEAD
struct  ValueType_t3507792607  : public RuntimeObject
=======
struct  ValueType_t2664944137  : public RuntimeObject
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
>>>>>>> 2d99588e503a47cbe8688dd82d86bf37bf91be99
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
<<<<<<< HEAD
struct ValueType_t3736612346_marshaled_pinvoke
=======
<<<<<<< HEAD
struct ValueType_t3507792607_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3507792607_marshaled_com
{
};
#endif // VALUETYPE_T3507792607_H
=======
struct ValueType_t2664944137_marshaled_pinvoke
>>>>>>> 2d99588e503a47cbe8688dd82d86bf37bf91be99
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3736612346_marshaled_com
{
};
<<<<<<< HEAD
#endif // VALUETYPE_T3736612346_H
=======
#endif // VALUETYPE_T2664944137_H
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
>>>>>>> 2d99588e503a47cbe8688dd82d86bf37bf91be99
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
#ifndef RUNTIMETYPEHANDLE_T2047626957_H
#define RUNTIMETYPEHANDLE_T2047626957_H
=======
<<<<<<< HEAD
#ifndef RUNTIMETYPEHANDLE_T2330101084_H
#define RUNTIMETYPEHANDLE_T2330101084_H
=======
#ifndef RUNTIMETYPEHANDLE_T1502552156_H
#define RUNTIMETYPEHANDLE_T1502552156_H
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
>>>>>>> 2d99588e503a47cbe8688dd82d86bf37bf91be99
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
<<<<<<< HEAD
struct  RuntimeTypeHandle_t2047626957 
=======
<<<<<<< HEAD
struct  RuntimeTypeHandle_t2330101084 
=======
struct  RuntimeTypeHandle_t1502552156 
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
>>>>>>> 2d99588e503a47cbe8688dd82d86bf37bf91be99
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
<<<<<<< HEAD
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t2047626957, ___value_0)); }
=======
<<<<<<< HEAD
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t2330101084, ___value_0)); }
=======
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t1502552156, ___value_0)); }
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
>>>>>>> 2d99588e503a47cbe8688dd82d86bf37bf91be99
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
#endif // RUNTIMETYPEHANDLE_T2047626957_H
#ifndef RUNTIMEFIELDHANDLE_T3654046340_H
#define RUNTIMEFIELDHANDLE_T3654046340_H
=======
<<<<<<< HEAD
#endif // RUNTIMETYPEHANDLE_T2330101084_H
#ifndef RUNTIMEFIELDHANDLE_T2331729674_H
#define RUNTIMEFIELDHANDLE_T2331729674_H
=======
#endif // RUNTIMETYPEHANDLE_T1502552156_H
#ifndef RUNTIMEFIELDHANDLE_T590238519_H
#define RUNTIMEFIELDHANDLE_T590238519_H
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
>>>>>>> 2d99588e503a47cbe8688dd82d86bf37bf91be99
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeFieldHandle
<<<<<<< HEAD
struct  RuntimeFieldHandle_t3654046340 
=======
<<<<<<< HEAD
struct  RuntimeFieldHandle_t2331729674 
=======
struct  RuntimeFieldHandle_t590238519 
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
>>>>>>> 2d99588e503a47cbe8688dd82d86bf37bf91be99
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
<<<<<<< HEAD
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t3654046340, ___value_0)); }
=======
<<<<<<< HEAD
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t2331729674, ___value_0)); }
=======
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t590238519, ___value_0)); }
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
>>>>>>> 2d99588e503a47cbe8688dd82d86bf37bf91be99
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
#endif // RUNTIMEFIELDHANDLE_T3654046340_H
#ifndef RUNTIMEARGUMENTHANDLE_T3934294880_H
#define RUNTIMEARGUMENTHANDLE_T3934294880_H
=======
<<<<<<< HEAD
#endif // RUNTIMEFIELDHANDLE_T2331729674_H
#ifndef RUNTIMEARGUMENTHANDLE_T3259266975_H
#define RUNTIMEARGUMENTHANDLE_T3259266975_H
=======
#endif // RUNTIMEFIELDHANDLE_T590238519_H
#ifndef RUNTIMEARGUMENTHANDLE_T583741_H
#define RUNTIMEARGUMENTHANDLE_T583741_H
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
>>>>>>> 2d99588e503a47cbe8688dd82d86bf37bf91be99
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeArgumentHandle
<<<<<<< HEAD
struct  RuntimeArgumentHandle_t3934294880 
=======
<<<<<<< HEAD
struct  RuntimeArgumentHandle_t3259266975 
=======
struct  RuntimeArgumentHandle_t583741 
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
>>>>>>> 2d99588e503a47cbe8688dd82d86bf37bf91be99
{
public:
	// System.IntPtr System.RuntimeArgumentHandle::args
	intptr_t ___args_0;

public:
<<<<<<< HEAD
	inline static int32_t get_offset_of_args_0() { return static_cast<int32_t>(offsetof(RuntimeArgumentHandle_t3934294880, ___args_0)); }
=======
<<<<<<< HEAD
	inline static int32_t get_offset_of_args_0() { return static_cast<int32_t>(offsetof(RuntimeArgumentHandle_t3259266975, ___args_0)); }
=======
	inline static int32_t get_offset_of_args_0() { return static_cast<int32_t>(offsetof(RuntimeArgumentHandle_t583741, ___args_0)); }
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
>>>>>>> 2d99588e503a47cbe8688dd82d86bf37bf91be99
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
#endif // RUNTIMEARGUMENTHANDLE_T3934294880_H
#ifndef RUNTIMEMETHODHANDLE_T4035780335_H
#define RUNTIMEMETHODHANDLE_T4035780335_H
=======
<<<<<<< HEAD
#endif // RUNTIMEARGUMENTHANDLE_T3259266975_H
#ifndef RUNTIMEMETHODHANDLE_T894824333_H
#define RUNTIMEMETHODHANDLE_T894824333_H
=======
#endif // RUNTIMEARGUMENTHANDLE_T583741_H
#ifndef RUNTIMEMETHODHANDLE_T2443574882_H
#define RUNTIMEMETHODHANDLE_T2443574882_H
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
>>>>>>> 2d99588e503a47cbe8688dd82d86bf37bf91be99
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeMethodHandle
<<<<<<< HEAD
struct  RuntimeMethodHandle_t4035780335 
=======
<<<<<<< HEAD
struct  RuntimeMethodHandle_t894824333 
=======
struct  RuntimeMethodHandle_t2443574882 
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
>>>>>>> 2d99588e503a47cbe8688dd82d86bf37bf91be99
{
public:
	// System.IntPtr System.RuntimeMethodHandle::value
	intptr_t ___value_0;

public:
<<<<<<< HEAD
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeMethodHandle_t4035780335, ___value_0)); }
=======
<<<<<<< HEAD
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeMethodHandle_t894824333, ___value_0)); }
=======
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeMethodHandle_t2443574882, ___value_0)); }
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
>>>>>>> 2d99588e503a47cbe8688dd82d86bf37bf91be99
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
#endif // RUNTIMEMETHODHANDLE_T4035780335_H
=======
<<<<<<< HEAD
#endif // RUNTIMEMETHODHANDLE_T894824333_H
=======
#endif // RUNTIMEMETHODHANDLE_T2443574882_H
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
>>>>>>> 2d99588e503a47cbe8688dd82d86bf37bf91be99



#pragma once
typedef String_t Il2CppCodeGenString;
typedef Type_t Il2CppCodeGenType;
<<<<<<< HEAD
typedef Exception_t251009993 Il2CppCodeGenException;
typedef RuntimeTypeHandle_t2047626957 Il2CppCodeGenRuntimeTypeHandle;
typedef RuntimeFieldHandle_t3654046340 Il2CppCodeGenRuntimeFieldHandle;
typedef RuntimeArgumentHandle_t3934294880 Il2CppCodeGenRuntimeArgumentHandle;
typedef RuntimeMethodHandle_t4035780335 Il2CppCodeGenRuntimeMethodHandle;
typedef StringBuilder_t2734665580 Il2CppCodeGenStringBuilder;
typedef MulticastDelegate_t958034981 Il2CppCodeGenMulticastDelegate;
typedef MethodBase_t2360333602 Il2CppCodeGenMethodBase;
typedef Assembly_t2983603885 Il2CppCodeGenAssembly;
=======
<<<<<<< HEAD
typedef Exception_t1927440687 Il2CppCodeGenException;
typedef RuntimeTypeHandle_t2330101084 Il2CppCodeGenRuntimeTypeHandle;
typedef RuntimeFieldHandle_t2331729674 Il2CppCodeGenRuntimeFieldHandle;
typedef RuntimeArgumentHandle_t3259266975 Il2CppCodeGenRuntimeArgumentHandle;
typedef RuntimeMethodHandle_t894824333 Il2CppCodeGenRuntimeMethodHandle;
typedef StringBuilder_t1221177846 Il2CppCodeGenStringBuilder;
typedef MulticastDelegate_t3201952435 Il2CppCodeGenMulticastDelegate;
typedef MethodBase_t904190842 Il2CppCodeGenMethodBase;
typedef Assembly_t4268412390 Il2CppCodeGenAssembly;
=======
typedef Exception_t1506159279 Il2CppCodeGenException;
typedef RuntimeTypeHandle_t1502552156 Il2CppCodeGenRuntimeTypeHandle;
typedef RuntimeFieldHandle_t590238519 Il2CppCodeGenRuntimeFieldHandle;
typedef RuntimeArgumentHandle_t583741 Il2CppCodeGenRuntimeArgumentHandle;
typedef RuntimeMethodHandle_t2443574882 Il2CppCodeGenRuntimeMethodHandle;
typedef StringBuilder_t858032204 Il2CppCodeGenStringBuilder;
typedef MulticastDelegate_t443335006 Il2CppCodeGenMulticastDelegate;
typedef MethodBase_t265850528 Il2CppCodeGenMethodBase;
typedef Assembly_t56872447 Il2CppCodeGenAssembly;
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
>>>>>>> 2d99588e503a47cbe8688dd82d86bf37bf91be99

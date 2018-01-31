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

<<<<<<< HEAD
// System.Collections.Hashtable
struct Hashtable_t1666795526;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Collections.ArrayList
struct ArrayList_t3711789787;
// System.Runtime.Remoting.Contexts.CrossContextChannel
struct CrossContextChannel_t1466357579;
// System.String
struct String_t;
// System.Collections.IList
struct IList_t1904509827;
// System.Object[]
struct ObjectU5BU5D_t1553377324;
// System.IntPtr[]
struct IntPtrU5BU5D_t3407872576;
// System.Collections.IDictionary
struct IDictionary_t3953456537;
// System.Resources.NameOrId
struct NameOrId_t67750828;
// System.Resources.IResourceReader
struct IResourceReader_t2461797509;
// System.Resources.ResourceReader
struct ResourceReader_t93257177;
// System.IO.BinaryReader
struct BinaryReader_t696963004;
// System.Runtime.Serialization.IFormatter
struct IFormatter_t1813010397;
// System.String[]
struct StringU5BU5D_t2127526927;
// System.Int32[]
struct Int32U5BU5D_t2999538502;
// System.Resources.ResourceReader/ResourceInfo[]
struct ResourceInfoU5BU5D_t4126082593;
// System.Resources.ResourceReader/ResourceCacheItem[]
struct ResourceCacheItemU5BU5D_t2219118741;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t3984433386;
// System.Type
struct Type_t;
// System.Runtime.Remoting.Activation.IActivator
struct IActivator_t1894603343;
// System.Byte[]
struct ByteU5BU5D_t757797699;
// System.Security.Cryptography.RSA
struct RSA_t278427376;
// System.Char[]
struct CharU5BU5D_t2117457135;
// System.Version
struct Version_t3739396922;
// System.Void
struct Void_t292648814;
// System.Type[]
struct TypeU5BU5D_t2699442290;
// System.Reflection.MemberFilter
struct MemberFilter_t1195501566;
=======
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t1656058977;
// System.Resources.NameOrId
struct NameOrId_t2460371499;
// System.String
struct String_t;
// System.Collections.Hashtable
struct Hashtable_t909839986;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.IntPtr[]
struct IntPtrU5BU5D_t169632028;
// System.Collections.IDictionary
struct IDictionary_t596158605;
// System.Collections.ArrayList
struct ArrayList_t4252133567;
// System.Runtime.Remoting.Contexts.CrossContextChannel
struct CrossContextChannel_t2302426108;
// System.Collections.IList
struct IList_t3321498491;
// System.Runtime.Remoting.Activation.IActivator
struct IActivator_t1538980900;
// System.Type
struct Type_t;
// System.IO.BinaryReader
struct BinaryReader_t2491843768;
// System.Runtime.Serialization.IFormatter
struct IFormatter_t936711909;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// System.Resources.ResourceReader/ResourceInfo[]
struct ResourceInfoU5BU5D_t1013133725;
// System.Resources.ResourceReader/ResourceCacheItem[]
struct ResourceCacheItemU5BU5D_t2265014744;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Security.Cryptography.RSA
struct RSA_t3719518354;
// System.Resources.IResourceReader
struct IResourceReader_t3222588482;
// System.Resources.ResourceReader
struct ResourceReader_t2463923611;
// System.Version
struct Version_t1755874712;
// System.Char[]
struct CharU5BU5D_t1328083999;
// System.Void
struct Void_t1841601450;
// System.Type[]
struct TypeU5BU5D_t1664964607;
// System.Reflection.MemberFilter
struct MemberFilter_t3405857066;
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
#ifndef CROSSAPPDOMAINSINK_T1605940783_H
#define CROSSAPPDOMAINSINK_T1605940783_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Channels.CrossAppDomainSink
struct  CrossAppDomainSink_t1605940783  : public RuntimeObject
{
public:
	// System.Int32 System.Runtime.Remoting.Channels.CrossAppDomainSink::_domainID
	int32_t ____domainID_2;

public:
	inline static int32_t get_offset_of__domainID_2() { return static_cast<int32_t>(offsetof(CrossAppDomainSink_t1605940783, ____domainID_2)); }
	inline int32_t get__domainID_2() const { return ____domainID_2; }
	inline int32_t* get_address_of__domainID_2() { return &____domainID_2; }
	inline void set__domainID_2(int32_t value)
	{
		____domainID_2 = value;
	}
};

struct CrossAppDomainSink_t1605940783_StaticFields
{
public:
	// System.Collections.Hashtable System.Runtime.Remoting.Channels.CrossAppDomainSink::s_sinks
	Hashtable_t1666795526 * ___s_sinks_0;
	// System.Reflection.MethodInfo System.Runtime.Remoting.Channels.CrossAppDomainSink::processMessageMethod
	MethodInfo_t * ___processMessageMethod_1;

public:
	inline static int32_t get_offset_of_s_sinks_0() { return static_cast<int32_t>(offsetof(CrossAppDomainSink_t1605940783_StaticFields, ___s_sinks_0)); }
	inline Hashtable_t1666795526 * get_s_sinks_0() const { return ___s_sinks_0; }
	inline Hashtable_t1666795526 ** get_address_of_s_sinks_0() { return &___s_sinks_0; }
	inline void set_s_sinks_0(Hashtable_t1666795526 * value)
	{
		___s_sinks_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_sinks_0), value);
	}

	inline static int32_t get_offset_of_processMessageMethod_1() { return static_cast<int32_t>(offsetof(CrossAppDomainSink_t1605940783_StaticFields, ___processMessageMethod_1)); }
	inline MethodInfo_t * get_processMessageMethod_1() const { return ___processMessageMethod_1; }
	inline MethodInfo_t ** get_address_of_processMessageMethod_1() { return &___processMessageMethod_1; }
	inline void set_processMessageMethod_1(MethodInfo_t * value)
	{
		___processMessageMethod_1 = value;
		Il2CppCodeGenWriteBarrier((&___processMessageMethod_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CROSSAPPDOMAINSINK_T1605940783_H
#ifndef ISVOLATILE_T59160537_H
#define ISVOLATILE_T59160537_H
=======
#ifndef ISVOLATILE_T700755342_H
#define ISVOLATILE_T700755342_H
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.IsVolatile
<<<<<<< HEAD
struct  IsVolatile_t59160537  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ISVOLATILE_T59160537_H
#ifndef VALUETYPE_T3399951316_H
#define VALUETYPE_T3399951316_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3399951316  : public RuntimeObject
=======
struct  IsVolatile_t700755342  : public RuntimeObject
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3399951316_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3399951316_marshaled_com
{
};
#endif // VALUETYPE_T3399951316_H
#ifndef CHANNELSERVICES_T3617701622_H
#define CHANNELSERVICES_T3617701622_H
=======
#endif // ISVOLATILE_T700755342_H
#ifndef CHANNELINFO_T709892715_H
#define CHANNELINFO_T709892715_H
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.Runtime.Remoting.Channels.ChannelServices
struct  ChannelServices_t3617701622  : public RuntimeObject
{
public:

public:
};

struct ChannelServices_t3617701622_StaticFields
{
public:
	// System.Collections.ArrayList System.Runtime.Remoting.Channels.ChannelServices::registeredChannels
	ArrayList_t3711789787 * ___registeredChannels_0;
	// System.Collections.ArrayList System.Runtime.Remoting.Channels.ChannelServices::delayedClientChannels
	ArrayList_t3711789787 * ___delayedClientChannels_1;
	// System.Runtime.Remoting.Contexts.CrossContextChannel System.Runtime.Remoting.Channels.ChannelServices::_crossContextSink
	CrossContextChannel_t1466357579 * ____crossContextSink_2;
	// System.String System.Runtime.Remoting.Channels.ChannelServices::CrossContextUrl
	String_t* ___CrossContextUrl_3;
	// System.Collections.IList System.Runtime.Remoting.Channels.ChannelServices::oldStartModeTypes
	RuntimeObject* ___oldStartModeTypes_4;

public:
	inline static int32_t get_offset_of_registeredChannels_0() { return static_cast<int32_t>(offsetof(ChannelServices_t3617701622_StaticFields, ___registeredChannels_0)); }
	inline ArrayList_t3711789787 * get_registeredChannels_0() const { return ___registeredChannels_0; }
	inline ArrayList_t3711789787 ** get_address_of_registeredChannels_0() { return &___registeredChannels_0; }
	inline void set_registeredChannels_0(ArrayList_t3711789787 * value)
	{
		___registeredChannels_0 = value;
		Il2CppCodeGenWriteBarrier((&___registeredChannels_0), value);
	}

	inline static int32_t get_offset_of_delayedClientChannels_1() { return static_cast<int32_t>(offsetof(ChannelServices_t3617701622_StaticFields, ___delayedClientChannels_1)); }
	inline ArrayList_t3711789787 * get_delayedClientChannels_1() const { return ___delayedClientChannels_1; }
	inline ArrayList_t3711789787 ** get_address_of_delayedClientChannels_1() { return &___delayedClientChannels_1; }
	inline void set_delayedClientChannels_1(ArrayList_t3711789787 * value)
	{
		___delayedClientChannels_1 = value;
		Il2CppCodeGenWriteBarrier((&___delayedClientChannels_1), value);
	}

	inline static int32_t get_offset_of__crossContextSink_2() { return static_cast<int32_t>(offsetof(ChannelServices_t3617701622_StaticFields, ____crossContextSink_2)); }
	inline CrossContextChannel_t1466357579 * get__crossContextSink_2() const { return ____crossContextSink_2; }
	inline CrossContextChannel_t1466357579 ** get_address_of__crossContextSink_2() { return &____crossContextSink_2; }
	inline void set__crossContextSink_2(CrossContextChannel_t1466357579 * value)
	{
		____crossContextSink_2 = value;
		Il2CppCodeGenWriteBarrier((&____crossContextSink_2), value);
	}

	inline static int32_t get_offset_of_CrossContextUrl_3() { return static_cast<int32_t>(offsetof(ChannelServices_t3617701622_StaticFields, ___CrossContextUrl_3)); }
	inline String_t* get_CrossContextUrl_3() const { return ___CrossContextUrl_3; }
	inline String_t** get_address_of_CrossContextUrl_3() { return &___CrossContextUrl_3; }
	inline void set_CrossContextUrl_3(String_t* value)
	{
		___CrossContextUrl_3 = value;
		Il2CppCodeGenWriteBarrier((&___CrossContextUrl_3), value);
	}

	inline static int32_t get_offset_of_oldStartModeTypes_4() { return static_cast<int32_t>(offsetof(ChannelServices_t3617701622_StaticFields, ___oldStartModeTypes_4)); }
	inline RuntimeObject* get_oldStartModeTypes_4() const { return ___oldStartModeTypes_4; }
	inline RuntimeObject** get_address_of_oldStartModeTypes_4() { return &___oldStartModeTypes_4; }
	inline void set_oldStartModeTypes_4(RuntimeObject* value)
	{
		___oldStartModeTypes_4 = value;
		Il2CppCodeGenWriteBarrier((&___oldStartModeTypes_4), value);
=======
// System.Runtime.Remoting.ChannelInfo
struct  ChannelInfo_t709892715  : public RuntimeObject
{
public:
	// System.Object[] System.Runtime.Remoting.ChannelInfo::channelData
	ObjectU5BU5D_t3614634134* ___channelData_0;

public:
	inline static int32_t get_offset_of_channelData_0() { return static_cast<int32_t>(offsetof(ChannelInfo_t709892715, ___channelData_0)); }
	inline ObjectU5BU5D_t3614634134* get_channelData_0() const { return ___channelData_0; }
	inline ObjectU5BU5D_t3614634134** get_address_of_channelData_0() { return &___channelData_0; }
	inline void set_channelData_0(ObjectU5BU5D_t3614634134* value)
	{
		___channelData_0 = value;
		Il2CppCodeGenWriteBarrier((&___channelData_0), value);
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // CHANNELSERVICES_T3617701622_H
#ifndef CHANNELINFO_T3383181039_H
#define CHANNELINFO_T3383181039_H
=======
#endif // CHANNELINFO_T709892715_H
#ifndef ERRORWRAPPER_T2775489663_H
#define ERRORWRAPPER_T2775489663_H
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.Runtime.Remoting.ChannelInfo
struct  ChannelInfo_t3383181039  : public RuntimeObject
{
public:
	// System.Object[] System.Runtime.Remoting.ChannelInfo::channelData
	ObjectU5BU5D_t1553377324* ___channelData_0;

public:
	inline static int32_t get_offset_of_channelData_0() { return static_cast<int32_t>(offsetof(ChannelInfo_t3383181039, ___channelData_0)); }
	inline ObjectU5BU5D_t1553377324* get_channelData_0() const { return ___channelData_0; }
	inline ObjectU5BU5D_t1553377324** get_address_of_channelData_0() { return &___channelData_0; }
	inline void set_channelData_0(ObjectU5BU5D_t1553377324* value)
	{
		___channelData_0 = value;
		Il2CppCodeGenWriteBarrier((&___channelData_0), value);
=======
// System.Runtime.InteropServices.ErrorWrapper
struct  ErrorWrapper_t2775489663  : public RuntimeObject
{
public:
	// System.Int32 System.Runtime.InteropServices.ErrorWrapper::errorCode
	int32_t ___errorCode_0;

public:
	inline static int32_t get_offset_of_errorCode_0() { return static_cast<int32_t>(offsetof(ErrorWrapper_t2775489663, ___errorCode_0)); }
	inline int32_t get_errorCode_0() const { return ___errorCode_0; }
	inline int32_t* get_address_of_errorCode_0() { return &___errorCode_0; }
	inline void set_errorCode_0(int32_t value)
	{
		___errorCode_0 = value;
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // CHANNELINFO_T3383181039_H
#ifndef EXCEPTION_T3333768149_H
#define EXCEPTION_T3333768149_H
=======
#endif // ERRORWRAPPER_T2775489663_H
#ifndef MARSHALBYREFOBJECT_T1285298191_H
#define MARSHALBYREFOBJECT_T1285298191_H
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.Exception
struct  Exception_t3333768149  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t3407872576* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t3333768149 * ___inner_exception_1;
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
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t3333768149, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t3407872576* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t3407872576** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t3407872576* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t3333768149, ___inner_exception_1)); }
	inline Exception_t3333768149 * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t3333768149 ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t3333768149 * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t3333768149, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t3333768149, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t3333768149, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t3333768149, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t3333768149, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t3333768149, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t3333768149, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t3333768149, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t3333768149, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
=======
// System.MarshalByRefObject
struct  MarshalByRefObject_t1285298191  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.ServerIdentity System.MarshalByRefObject::_identity
	ServerIdentity_t1656058977 * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_t1285298191, ____identity_0)); }
	inline ServerIdentity_t1656058977 * get__identity_0() const { return ____identity_0; }
	inline ServerIdentity_t1656058977 ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(ServerIdentity_t1656058977 * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((&____identity_0), value);
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // EXCEPTION_T3333768149_H
#ifndef WIN32RESOURCE_T1698239717_H
#define WIN32RESOURCE_T1698239717_H
=======
#endif // MARSHALBYREFOBJECT_T1285298191_H
#ifndef WIN32RESOURCE_T2185668907_H
#define WIN32RESOURCE_T2185668907_H
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.Win32Resource
<<<<<<< HEAD
struct  Win32Resource_t1698239717  : public RuntimeObject
{
public:
	// System.Resources.NameOrId System.Resources.Win32Resource::type
	NameOrId_t67750828 * ___type_0;
	// System.Resources.NameOrId System.Resources.Win32Resource::name
	NameOrId_t67750828 * ___name_1;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(Win32Resource_t1698239717, ___type_0)); }
	inline NameOrId_t67750828 * get_type_0() const { return ___type_0; }
	inline NameOrId_t67750828 ** get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(NameOrId_t67750828 * value)
=======
struct  Win32Resource_t2185668907  : public RuntimeObject
{
public:
	// System.Resources.NameOrId System.Resources.Win32Resource::type
	NameOrId_t2460371499 * ___type_0;
	// System.Resources.NameOrId System.Resources.Win32Resource::name
	NameOrId_t2460371499 * ___name_1;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(Win32Resource_t2185668907, ___type_0)); }
	inline NameOrId_t2460371499 * get_type_0() const { return ___type_0; }
	inline NameOrId_t2460371499 ** get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(NameOrId_t2460371499 * value)
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
	{
		___type_0 = value;
		Il2CppCodeGenWriteBarrier((&___type_0), value);
	}

<<<<<<< HEAD
	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(Win32Resource_t1698239717, ___name_1)); }
	inline NameOrId_t67750828 * get_name_1() const { return ___name_1; }
	inline NameOrId_t67750828 ** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(NameOrId_t67750828 * value)
=======
	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(Win32Resource_t2185668907, ___name_1)); }
	inline NameOrId_t2460371499 * get_name_1() const { return ___name_1; }
	inline NameOrId_t2460371499 ** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(NameOrId_t2460371499 * value)
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((&___name_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // WIN32RESOURCE_T1698239717_H
#ifndef NAMEORID_T67750828_H
#define NAMEORID_T67750828_H
=======
#endif // WIN32RESOURCE_T2185668907_H
#ifndef NAMEORID_T2460371499_H
#define NAMEORID_T2460371499_H
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.NameOrId
<<<<<<< HEAD
struct  NameOrId_t67750828  : public RuntimeObject
=======
struct  NameOrId_t2460371499  : public RuntimeObject
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
{
public:
	// System.String System.Resources.NameOrId::name
	String_t* ___name_0;
	// System.Int32 System.Resources.NameOrId::id
	int32_t ___id_1;

public:
<<<<<<< HEAD
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(NameOrId_t67750828, ___name_0)); }
=======
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(NameOrId_t2460371499, ___name_0)); }
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

<<<<<<< HEAD
	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(NameOrId_t67750828, ___id_1)); }
=======
	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(NameOrId_t2460371499, ___id_1)); }
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
	inline int32_t get_id_1() const { return ___id_1; }
	inline int32_t* get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(int32_t value)
	{
		___id_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // NAMEORID_T67750828_H
#ifndef ACTIVATIONARGUMENTS_T329123578_H
#define ACTIVATIONARGUMENTS_T329123578_H
=======
#endif // NAMEORID_T2460371499_H
#ifndef CROSSAPPDOMAINSINK_T2368859578_H
#define CROSSAPPDOMAINSINK_T2368859578_H
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.Runtime.Hosting.ActivationArguments
struct  ActivationArguments_t329123578  : public RuntimeObject
{
public:

public:
=======
// System.Runtime.Remoting.Channels.CrossAppDomainSink
struct  CrossAppDomainSink_t2368859578  : public RuntimeObject
{
public:
	// System.Int32 System.Runtime.Remoting.Channels.CrossAppDomainSink::_domainID
	int32_t ____domainID_2;

public:
	inline static int32_t get_offset_of__domainID_2() { return static_cast<int32_t>(offsetof(CrossAppDomainSink_t2368859578, ____domainID_2)); }
	inline int32_t get__domainID_2() const { return ____domainID_2; }
	inline int32_t* get_address_of__domainID_2() { return &____domainID_2; }
	inline void set__domainID_2(int32_t value)
	{
		____domainID_2 = value;
	}
};

struct CrossAppDomainSink_t2368859578_StaticFields
{
public:
	// System.Collections.Hashtable System.Runtime.Remoting.Channels.CrossAppDomainSink::s_sinks
	Hashtable_t909839986 * ___s_sinks_0;
	// System.Reflection.MethodInfo System.Runtime.Remoting.Channels.CrossAppDomainSink::processMessageMethod
	MethodInfo_t * ___processMessageMethod_1;

public:
	inline static int32_t get_offset_of_s_sinks_0() { return static_cast<int32_t>(offsetof(CrossAppDomainSink_t2368859578_StaticFields, ___s_sinks_0)); }
	inline Hashtable_t909839986 * get_s_sinks_0() const { return ___s_sinks_0; }
	inline Hashtable_t909839986 ** get_address_of_s_sinks_0() { return &___s_sinks_0; }
	inline void set_s_sinks_0(Hashtable_t909839986 * value)
	{
		___s_sinks_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_sinks_0), value);
	}

	inline static int32_t get_offset_of_processMessageMethod_1() { return static_cast<int32_t>(offsetof(CrossAppDomainSink_t2368859578_StaticFields, ___processMessageMethod_1)); }
	inline MethodInfo_t * get_processMessageMethod_1() const { return ___processMessageMethod_1; }
	inline MethodInfo_t ** get_address_of_processMessageMethod_1() { return &___processMessageMethod_1; }
	inline void set_processMessageMethod_1(MethodInfo_t * value)
	{
		___processMessageMethod_1 = value;
		Il2CppCodeGenWriteBarrier((&___processMessageMethod_1), value);
	}
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // ACTIVATIONARGUMENTS_T329123578_H
#ifndef ERRORWRAPPER_T1378886840_H
#define ERRORWRAPPER_T1378886840_H
=======
#endif // CROSSAPPDOMAINSINK_T2368859578_H
#ifndef VALUETYPE_T3507792607_H
#define VALUETYPE_T3507792607_H
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.Runtime.InteropServices.ErrorWrapper
struct  ErrorWrapper_t1378886840  : public RuntimeObject
{
public:
	// System.Int32 System.Runtime.InteropServices.ErrorWrapper::errorCode
	int32_t ___errorCode_0;

public:
	inline static int32_t get_offset_of_errorCode_0() { return static_cast<int32_t>(offsetof(ErrorWrapper_t1378886840, ___errorCode_0)); }
	inline int32_t get_errorCode_0() const { return ___errorCode_0; }
	inline int32_t* get_address_of_errorCode_0() { return &___errorCode_0; }
	inline void set_errorCode_0(int32_t value)
	{
		___errorCode_0 = value;
	}
=======
// System.ValueType
struct  ValueType_t3507792607  : public RuntimeObject
{
public:

public:
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // ERRORWRAPPER_T1378886840_H
#ifndef RESOURCESET_T2945760440_H
#define RESOURCESET_T2945760440_H
=======
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3507792607_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3507792607_marshaled_com
{
};
#endif // VALUETYPE_T3507792607_H
#ifndef CROSSAPPDOMAINCHANNEL_T2471623380_H
#define CROSSAPPDOMAINCHANNEL_T2471623380_H
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.Resources.ResourceSet
struct  ResourceSet_t2945760440  : public RuntimeObject
{
public:
	// System.Resources.IResourceReader System.Resources.ResourceSet::Reader
	RuntimeObject* ___Reader_0;
	// System.Collections.Hashtable System.Resources.ResourceSet::Table
	Hashtable_t1666795526 * ___Table_1;
	// System.Boolean System.Resources.ResourceSet::resources_read
	bool ___resources_read_2;
	// System.Boolean System.Resources.ResourceSet::disposed
	bool ___disposed_3;

public:
	inline static int32_t get_offset_of_Reader_0() { return static_cast<int32_t>(offsetof(ResourceSet_t2945760440, ___Reader_0)); }
	inline RuntimeObject* get_Reader_0() const { return ___Reader_0; }
	inline RuntimeObject** get_address_of_Reader_0() { return &___Reader_0; }
	inline void set_Reader_0(RuntimeObject* value)
	{
		___Reader_0 = value;
		Il2CppCodeGenWriteBarrier((&___Reader_0), value);
	}

	inline static int32_t get_offset_of_Table_1() { return static_cast<int32_t>(offsetof(ResourceSet_t2945760440, ___Table_1)); }
	inline Hashtable_t1666795526 * get_Table_1() const { return ___Table_1; }
	inline Hashtable_t1666795526 ** get_address_of_Table_1() { return &___Table_1; }
	inline void set_Table_1(Hashtable_t1666795526 * value)
	{
		___Table_1 = value;
		Il2CppCodeGenWriteBarrier((&___Table_1), value);
	}

	inline static int32_t get_offset_of_resources_read_2() { return static_cast<int32_t>(offsetof(ResourceSet_t2945760440, ___resources_read_2)); }
	inline bool get_resources_read_2() const { return ___resources_read_2; }
	inline bool* get_address_of_resources_read_2() { return &___resources_read_2; }
	inline void set_resources_read_2(bool value)
	{
		___resources_read_2 = value;
	}

	inline static int32_t get_offset_of_disposed_3() { return static_cast<int32_t>(offsetof(ResourceSet_t2945760440, ___disposed_3)); }
	inline bool get_disposed_3() const { return ___disposed_3; }
	inline bool* get_address_of_disposed_3() { return &___disposed_3; }
	inline void set_disposed_3(bool value)
	{
		___disposed_3 = value;
=======
// System.Runtime.Remoting.Channels.CrossAppDomainChannel
struct  CrossAppDomainChannel_t2471623380  : public RuntimeObject
{
public:

public:
};

struct CrossAppDomainChannel_t2471623380_StaticFields
{
public:
	// System.Object System.Runtime.Remoting.Channels.CrossAppDomainChannel::s_lock
	RuntimeObject * ___s_lock_0;

public:
	inline static int32_t get_offset_of_s_lock_0() { return static_cast<int32_t>(offsetof(CrossAppDomainChannel_t2471623380_StaticFields, ___s_lock_0)); }
	inline RuntimeObject * get_s_lock_0() const { return ___s_lock_0; }
	inline RuntimeObject ** get_address_of_s_lock_0() { return &___s_lock_0; }
	inline void set_s_lock_0(RuntimeObject * value)
	{
		___s_lock_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_lock_0), value);
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // RESOURCESET_T2945760440_H
#ifndef ATTRIBUTE_T723177756_H
#define ATTRIBUTE_T723177756_H
=======
#endif // CROSSAPPDOMAINCHANNEL_T2471623380_H
#ifndef CROSSAPPDOMAINDATA_T816071813_H
#define CROSSAPPDOMAINDATA_T816071813_H
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.Attribute
struct  Attribute_t723177756  : public RuntimeObject
{
public:

public:
=======
// System.Runtime.Remoting.Channels.CrossAppDomainData
struct  CrossAppDomainData_t816071813  : public RuntimeObject
{
public:
	// System.Object System.Runtime.Remoting.Channels.CrossAppDomainData::_ContextID
	RuntimeObject * ____ContextID_0;
	// System.Int32 System.Runtime.Remoting.Channels.CrossAppDomainData::_DomainID
	int32_t ____DomainID_1;
	// System.String System.Runtime.Remoting.Channels.CrossAppDomainData::_processGuid
	String_t* ____processGuid_2;

public:
	inline static int32_t get_offset_of__ContextID_0() { return static_cast<int32_t>(offsetof(CrossAppDomainData_t816071813, ____ContextID_0)); }
	inline RuntimeObject * get__ContextID_0() const { return ____ContextID_0; }
	inline RuntimeObject ** get_address_of__ContextID_0() { return &____ContextID_0; }
	inline void set__ContextID_0(RuntimeObject * value)
	{
		____ContextID_0 = value;
		Il2CppCodeGenWriteBarrier((&____ContextID_0), value);
	}

	inline static int32_t get_offset_of__DomainID_1() { return static_cast<int32_t>(offsetof(CrossAppDomainData_t816071813, ____DomainID_1)); }
	inline int32_t get__DomainID_1() const { return ____DomainID_1; }
	inline int32_t* get_address_of__DomainID_1() { return &____DomainID_1; }
	inline void set__DomainID_1(int32_t value)
	{
		____DomainID_1 = value;
	}

	inline static int32_t get_offset_of__processGuid_2() { return static_cast<int32_t>(offsetof(CrossAppDomainData_t816071813, ____processGuid_2)); }
	inline String_t* get__processGuid_2() const { return ____processGuid_2; }
	inline String_t** get_address_of__processGuid_2() { return &____processGuid_2; }
	inline void set__processGuid_2(String_t* value)
	{
		____processGuid_2 = value;
		Il2CppCodeGenWriteBarrier((&____processGuid_2), value);
	}
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // ATTRIBUTE_T723177756_H
#ifndef RESOURCEENUMERATOR_T2082933720_H
#define RESOURCEENUMERATOR_T2082933720_H
=======
#endif // CROSSAPPDOMAINDATA_T816071813_H
#ifndef ACTIVATIONARGUMENTS_T640021366_H
#define ACTIVATIONARGUMENTS_T640021366_H
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.Resources.ResourceReader/ResourceEnumerator
struct  ResourceEnumerator_t2082933720  : public RuntimeObject
{
public:
	// System.Resources.ResourceReader System.Resources.ResourceReader/ResourceEnumerator::reader
	ResourceReader_t93257177 * ___reader_0;
	// System.Int32 System.Resources.ResourceReader/ResourceEnumerator::index
	int32_t ___index_1;
	// System.Boolean System.Resources.ResourceReader/ResourceEnumerator::finished
	bool ___finished_2;

public:
	inline static int32_t get_offset_of_reader_0() { return static_cast<int32_t>(offsetof(ResourceEnumerator_t2082933720, ___reader_0)); }
	inline ResourceReader_t93257177 * get_reader_0() const { return ___reader_0; }
	inline ResourceReader_t93257177 ** get_address_of_reader_0() { return &___reader_0; }
	inline void set_reader_0(ResourceReader_t93257177 * value)
	{
		___reader_0 = value;
		Il2CppCodeGenWriteBarrier((&___reader_0), value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(ResourceEnumerator_t2082933720, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_finished_2() { return static_cast<int32_t>(offsetof(ResourceEnumerator_t2082933720, ___finished_2)); }
	inline bool get_finished_2() const { return ___finished_2; }
	inline bool* get_address_of_finished_2() { return &___finished_2; }
	inline void set_finished_2(bool value)
	{
		___finished_2 = value;
	}
=======
// System.Runtime.Hosting.ActivationArguments
struct  ActivationArguments_t640021366  : public RuntimeObject
{
public:

public:
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // RESOURCEENUMERATOR_T2082933720_H
#ifndef CRITICALFINALIZEROBJECT_T4186809588_H
#define CRITICALFINALIZEROBJECT_T4186809588_H
=======
#endif // ACTIVATIONARGUMENTS_T640021366_H
#ifndef CRITICALFINALIZEROBJECT_T1920899984_H
#define CRITICALFINALIZEROBJECT_T1920899984_H
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
<<<<<<< HEAD
struct  CriticalFinalizerObject_t4186809588  : public RuntimeObject
=======
struct  CriticalFinalizerObject_t1920899984  : public RuntimeObject
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // CRITICALFINALIZEROBJECT_T4186809588_H
#ifndef RESOURCEREADER_T93257177_H
#define RESOURCEREADER_T93257177_H
=======
#endif // CRITICALFINALIZEROBJECT_T1920899984_H
#ifndef EXCEPTION_T1927440687_H
#define EXCEPTION_T1927440687_H
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.Resources.ResourceReader
struct  ResourceReader_t93257177  : public RuntimeObject
{
public:
	// System.IO.BinaryReader System.Resources.ResourceReader::reader
	BinaryReader_t696963004 * ___reader_0;
	// System.Object System.Resources.ResourceReader::readerLock
	RuntimeObject * ___readerLock_1;
	// System.Runtime.Serialization.IFormatter System.Resources.ResourceReader::formatter
	RuntimeObject* ___formatter_2;
	// System.Int32 System.Resources.ResourceReader::resourceCount
	int32_t ___resourceCount_3;
	// System.Int32 System.Resources.ResourceReader::typeCount
	int32_t ___typeCount_4;
	// System.String[] System.Resources.ResourceReader::typeNames
	StringU5BU5D_t2127526927* ___typeNames_5;
	// System.Int32[] System.Resources.ResourceReader::hashes
	Int32U5BU5D_t2999538502* ___hashes_6;
	// System.Resources.ResourceReader/ResourceInfo[] System.Resources.ResourceReader::infos
	ResourceInfoU5BU5D_t4126082593* ___infos_7;
	// System.Int32 System.Resources.ResourceReader::dataSectionOffset
	int32_t ___dataSectionOffset_8;
	// System.Int64 System.Resources.ResourceReader::nameSectionOffset
	int64_t ___nameSectionOffset_9;
	// System.Int32 System.Resources.ResourceReader::resource_ver
	int32_t ___resource_ver_10;
	// System.Resources.ResourceReader/ResourceCacheItem[] System.Resources.ResourceReader::cache
	ResourceCacheItemU5BU5D_t2219118741* ___cache_11;
	// System.Object System.Resources.ResourceReader::cache_lock
	RuntimeObject * ___cache_lock_12;

public:
	inline static int32_t get_offset_of_reader_0() { return static_cast<int32_t>(offsetof(ResourceReader_t93257177, ___reader_0)); }
	inline BinaryReader_t696963004 * get_reader_0() const { return ___reader_0; }
	inline BinaryReader_t696963004 ** get_address_of_reader_0() { return &___reader_0; }
	inline void set_reader_0(BinaryReader_t696963004 * value)
	{
		___reader_0 = value;
		Il2CppCodeGenWriteBarrier((&___reader_0), value);
	}

	inline static int32_t get_offset_of_readerLock_1() { return static_cast<int32_t>(offsetof(ResourceReader_t93257177, ___readerLock_1)); }
	inline RuntimeObject * get_readerLock_1() const { return ___readerLock_1; }
	inline RuntimeObject ** get_address_of_readerLock_1() { return &___readerLock_1; }
	inline void set_readerLock_1(RuntimeObject * value)
	{
		___readerLock_1 = value;
		Il2CppCodeGenWriteBarrier((&___readerLock_1), value);
	}

	inline static int32_t get_offset_of_formatter_2() { return static_cast<int32_t>(offsetof(ResourceReader_t93257177, ___formatter_2)); }
	inline RuntimeObject* get_formatter_2() const { return ___formatter_2; }
	inline RuntimeObject** get_address_of_formatter_2() { return &___formatter_2; }
	inline void set_formatter_2(RuntimeObject* value)
	{
		___formatter_2 = value;
		Il2CppCodeGenWriteBarrier((&___formatter_2), value);
	}

	inline static int32_t get_offset_of_resourceCount_3() { return static_cast<int32_t>(offsetof(ResourceReader_t93257177, ___resourceCount_3)); }
	inline int32_t get_resourceCount_3() const { return ___resourceCount_3; }
	inline int32_t* get_address_of_resourceCount_3() { return &___resourceCount_3; }
	inline void set_resourceCount_3(int32_t value)
	{
		___resourceCount_3 = value;
	}

	inline static int32_t get_offset_of_typeCount_4() { return static_cast<int32_t>(offsetof(ResourceReader_t93257177, ___typeCount_4)); }
	inline int32_t get_typeCount_4() const { return ___typeCount_4; }
	inline int32_t* get_address_of_typeCount_4() { return &___typeCount_4; }
	inline void set_typeCount_4(int32_t value)
	{
		___typeCount_4 = value;
	}

	inline static int32_t get_offset_of_typeNames_5() { return static_cast<int32_t>(offsetof(ResourceReader_t93257177, ___typeNames_5)); }
	inline StringU5BU5D_t2127526927* get_typeNames_5() const { return ___typeNames_5; }
	inline StringU5BU5D_t2127526927** get_address_of_typeNames_5() { return &___typeNames_5; }
	inline void set_typeNames_5(StringU5BU5D_t2127526927* value)
	{
		___typeNames_5 = value;
		Il2CppCodeGenWriteBarrier((&___typeNames_5), value);
	}

	inline static int32_t get_offset_of_hashes_6() { return static_cast<int32_t>(offsetof(ResourceReader_t93257177, ___hashes_6)); }
	inline Int32U5BU5D_t2999538502* get_hashes_6() const { return ___hashes_6; }
	inline Int32U5BU5D_t2999538502** get_address_of_hashes_6() { return &___hashes_6; }
	inline void set_hashes_6(Int32U5BU5D_t2999538502* value)
	{
		___hashes_6 = value;
		Il2CppCodeGenWriteBarrier((&___hashes_6), value);
	}

	inline static int32_t get_offset_of_infos_7() { return static_cast<int32_t>(offsetof(ResourceReader_t93257177, ___infos_7)); }
	inline ResourceInfoU5BU5D_t4126082593* get_infos_7() const { return ___infos_7; }
	inline ResourceInfoU5BU5D_t4126082593** get_address_of_infos_7() { return &___infos_7; }
	inline void set_infos_7(ResourceInfoU5BU5D_t4126082593* value)
	{
		___infos_7 = value;
		Il2CppCodeGenWriteBarrier((&___infos_7), value);
	}

	inline static int32_t get_offset_of_dataSectionOffset_8() { return static_cast<int32_t>(offsetof(ResourceReader_t93257177, ___dataSectionOffset_8)); }
	inline int32_t get_dataSectionOffset_8() const { return ___dataSectionOffset_8; }
	inline int32_t* get_address_of_dataSectionOffset_8() { return &___dataSectionOffset_8; }
	inline void set_dataSectionOffset_8(int32_t value)
	{
		___dataSectionOffset_8 = value;
	}

	inline static int32_t get_offset_of_nameSectionOffset_9() { return static_cast<int32_t>(offsetof(ResourceReader_t93257177, ___nameSectionOffset_9)); }
	inline int64_t get_nameSectionOffset_9() const { return ___nameSectionOffset_9; }
	inline int64_t* get_address_of_nameSectionOffset_9() { return &___nameSectionOffset_9; }
	inline void set_nameSectionOffset_9(int64_t value)
	{
		___nameSectionOffset_9 = value;
	}

	inline static int32_t get_offset_of_resource_ver_10() { return static_cast<int32_t>(offsetof(ResourceReader_t93257177, ___resource_ver_10)); }
	inline int32_t get_resource_ver_10() const { return ___resource_ver_10; }
	inline int32_t* get_address_of_resource_ver_10() { return &___resource_ver_10; }
	inline void set_resource_ver_10(int32_t value)
	{
		___resource_ver_10 = value;
	}

	inline static int32_t get_offset_of_cache_11() { return static_cast<int32_t>(offsetof(ResourceReader_t93257177, ___cache_11)); }
	inline ResourceCacheItemU5BU5D_t2219118741* get_cache_11() const { return ___cache_11; }
	inline ResourceCacheItemU5BU5D_t2219118741** get_address_of_cache_11() { return &___cache_11; }
	inline void set_cache_11(ResourceCacheItemU5BU5D_t2219118741* value)
	{
		___cache_11 = value;
		Il2CppCodeGenWriteBarrier((&___cache_11), value);
	}

	inline static int32_t get_offset_of_cache_lock_12() { return static_cast<int32_t>(offsetof(ResourceReader_t93257177, ___cache_lock_12)); }
	inline RuntimeObject * get_cache_lock_12() const { return ___cache_lock_12; }
	inline RuntimeObject ** get_address_of_cache_lock_12() { return &___cache_lock_12; }
	inline void set_cache_lock_12(RuntimeObject * value)
	{
		___cache_lock_12 = value;
		Il2CppCodeGenWriteBarrier((&___cache_lock_12), value);
	}
=======
// System.Exception
struct  Exception_t1927440687  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t169632028* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t1927440687 * ___inner_exception_1;
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
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t169632028* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t169632028** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t169632028* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ___inner_exception_1)); }
	inline Exception_t1927440687 * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t1927440687 ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t1927440687 * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ____data_10)); }
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
#endif // EXCEPTION_T1927440687_H
#ifndef ATTRIBUTE_T542643598_H
#define ATTRIBUTE_T542643598_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t542643598  : public RuntimeObject
{
public:

public:
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // RESOURCEREADER_T93257177_H
#ifndef MARSHALBYREFOBJECT_T412758220_H
#define MARSHALBYREFOBJECT_T412758220_H
=======
#endif // ATTRIBUTE_T542643598_H
#ifndef CHANNELSERVICES_T2007814595_H
#define CHANNELSERVICES_T2007814595_H
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.MarshalByRefObject
struct  MarshalByRefObject_t412758220  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.ServerIdentity System.MarshalByRefObject::_identity
	ServerIdentity_t3984433386 * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_t412758220, ____identity_0)); }
	inline ServerIdentity_t3984433386 * get__identity_0() const { return ____identity_0; }
	inline ServerIdentity_t3984433386 ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(ServerIdentity_t3984433386 * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((&____identity_0), value);
=======
// System.Runtime.Remoting.Channels.ChannelServices
struct  ChannelServices_t2007814595  : public RuntimeObject
{
public:

public:
};

struct ChannelServices_t2007814595_StaticFields
{
public:
	// System.Collections.ArrayList System.Runtime.Remoting.Channels.ChannelServices::registeredChannels
	ArrayList_t4252133567 * ___registeredChannels_0;
	// System.Collections.ArrayList System.Runtime.Remoting.Channels.ChannelServices::delayedClientChannels
	ArrayList_t4252133567 * ___delayedClientChannels_1;
	// System.Runtime.Remoting.Contexts.CrossContextChannel System.Runtime.Remoting.Channels.ChannelServices::_crossContextSink
	CrossContextChannel_t2302426108 * ____crossContextSink_2;
	// System.String System.Runtime.Remoting.Channels.ChannelServices::CrossContextUrl
	String_t* ___CrossContextUrl_3;
	// System.Collections.IList System.Runtime.Remoting.Channels.ChannelServices::oldStartModeTypes
	RuntimeObject* ___oldStartModeTypes_4;

public:
	inline static int32_t get_offset_of_registeredChannels_0() { return static_cast<int32_t>(offsetof(ChannelServices_t2007814595_StaticFields, ___registeredChannels_0)); }
	inline ArrayList_t4252133567 * get_registeredChannels_0() const { return ___registeredChannels_0; }
	inline ArrayList_t4252133567 ** get_address_of_registeredChannels_0() { return &___registeredChannels_0; }
	inline void set_registeredChannels_0(ArrayList_t4252133567 * value)
	{
		___registeredChannels_0 = value;
		Il2CppCodeGenWriteBarrier((&___registeredChannels_0), value);
	}

	inline static int32_t get_offset_of_delayedClientChannels_1() { return static_cast<int32_t>(offsetof(ChannelServices_t2007814595_StaticFields, ___delayedClientChannels_1)); }
	inline ArrayList_t4252133567 * get_delayedClientChannels_1() const { return ___delayedClientChannels_1; }
	inline ArrayList_t4252133567 ** get_address_of_delayedClientChannels_1() { return &___delayedClientChannels_1; }
	inline void set_delayedClientChannels_1(ArrayList_t4252133567 * value)
	{
		___delayedClientChannels_1 = value;
		Il2CppCodeGenWriteBarrier((&___delayedClientChannels_1), value);
	}

	inline static int32_t get_offset_of__crossContextSink_2() { return static_cast<int32_t>(offsetof(ChannelServices_t2007814595_StaticFields, ____crossContextSink_2)); }
	inline CrossContextChannel_t2302426108 * get__crossContextSink_2() const { return ____crossContextSink_2; }
	inline CrossContextChannel_t2302426108 ** get_address_of__crossContextSink_2() { return &____crossContextSink_2; }
	inline void set__crossContextSink_2(CrossContextChannel_t2302426108 * value)
	{
		____crossContextSink_2 = value;
		Il2CppCodeGenWriteBarrier((&____crossContextSink_2), value);
	}

	inline static int32_t get_offset_of_CrossContextUrl_3() { return static_cast<int32_t>(offsetof(ChannelServices_t2007814595_StaticFields, ___CrossContextUrl_3)); }
	inline String_t* get_CrossContextUrl_3() const { return ___CrossContextUrl_3; }
	inline String_t** get_address_of_CrossContextUrl_3() { return &___CrossContextUrl_3; }
	inline void set_CrossContextUrl_3(String_t* value)
	{
		___CrossContextUrl_3 = value;
		Il2CppCodeGenWriteBarrier((&___CrossContextUrl_3), value);
	}

	inline static int32_t get_offset_of_oldStartModeTypes_4() { return static_cast<int32_t>(offsetof(ChannelServices_t2007814595_StaticFields, ___oldStartModeTypes_4)); }
	inline RuntimeObject* get_oldStartModeTypes_4() const { return ___oldStartModeTypes_4; }
	inline RuntimeObject** get_address_of_oldStartModeTypes_4() { return &___oldStartModeTypes_4; }
	inline void set_oldStartModeTypes_4(RuntimeObject* value)
	{
		___oldStartModeTypes_4 = value;
		Il2CppCodeGenWriteBarrier((&___oldStartModeTypes_4), value);
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // MARSHALBYREFOBJECT_T412758220_H
#ifndef RESOURCEMANAGER_T2395228493_H
#define RESOURCEMANAGER_T2395228493_H
=======
#endif // CHANNELSERVICES_T2007814595_H
#ifndef MARSHAL_T785896760_H
#define MARSHAL_T785896760_H
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.Resources.ResourceManager
struct  ResourceManager_t2395228493  : public RuntimeObject
{
public:
	// System.Type System.Resources.ResourceManager::resourceSetType
	Type_t * ___resourceSetType_4;

public:
	inline static int32_t get_offset_of_resourceSetType_4() { return static_cast<int32_t>(offsetof(ResourceManager_t2395228493, ___resourceSetType_4)); }
	inline Type_t * get_resourceSetType_4() const { return ___resourceSetType_4; }
	inline Type_t ** get_address_of_resourceSetType_4() { return &___resourceSetType_4; }
	inline void set_resourceSetType_4(Type_t * value)
	{
		___resourceSetType_4 = value;
		Il2CppCodeGenWriteBarrier((&___resourceSetType_4), value);
	}
};

struct ResourceManager_t2395228493_StaticFields
{
public:
	// System.Collections.Hashtable System.Resources.ResourceManager::ResourceCache
	Hashtable_t1666795526 * ___ResourceCache_0;
	// System.Collections.Hashtable System.Resources.ResourceManager::NonExistent
	Hashtable_t1666795526 * ___NonExistent_1;
	// System.Int32 System.Resources.ResourceManager::HeaderVersionNumber
	int32_t ___HeaderVersionNumber_2;
	// System.Int32 System.Resources.ResourceManager::MagicNumber
	int32_t ___MagicNumber_3;

public:
	inline static int32_t get_offset_of_ResourceCache_0() { return static_cast<int32_t>(offsetof(ResourceManager_t2395228493_StaticFields, ___ResourceCache_0)); }
	inline Hashtable_t1666795526 * get_ResourceCache_0() const { return ___ResourceCache_0; }
	inline Hashtable_t1666795526 ** get_address_of_ResourceCache_0() { return &___ResourceCache_0; }
	inline void set_ResourceCache_0(Hashtable_t1666795526 * value)
	{
		___ResourceCache_0 = value;
		Il2CppCodeGenWriteBarrier((&___ResourceCache_0), value);
	}

	inline static int32_t get_offset_of_NonExistent_1() { return static_cast<int32_t>(offsetof(ResourceManager_t2395228493_StaticFields, ___NonExistent_1)); }
	inline Hashtable_t1666795526 * get_NonExistent_1() const { return ___NonExistent_1; }
	inline Hashtable_t1666795526 ** get_address_of_NonExistent_1() { return &___NonExistent_1; }
	inline void set_NonExistent_1(Hashtable_t1666795526 * value)
	{
		___NonExistent_1 = value;
		Il2CppCodeGenWriteBarrier((&___NonExistent_1), value);
	}

	inline static int32_t get_offset_of_HeaderVersionNumber_2() { return static_cast<int32_t>(offsetof(ResourceManager_t2395228493_StaticFields, ___HeaderVersionNumber_2)); }
	inline int32_t get_HeaderVersionNumber_2() const { return ___HeaderVersionNumber_2; }
	inline int32_t* get_address_of_HeaderVersionNumber_2() { return &___HeaderVersionNumber_2; }
	inline void set_HeaderVersionNumber_2(int32_t value)
	{
		___HeaderVersionNumber_2 = value;
	}

	inline static int32_t get_offset_of_MagicNumber_3() { return static_cast<int32_t>(offsetof(ResourceManager_t2395228493_StaticFields, ___MagicNumber_3)); }
	inline int32_t get_MagicNumber_3() const { return ___MagicNumber_3; }
	inline int32_t* get_address_of_MagicNumber_3() { return &___MagicNumber_3; }
	inline void set_MagicNumber_3(int32_t value)
	{
		___MagicNumber_3 = value;
=======
// System.Runtime.InteropServices.Marshal
struct  Marshal_t785896760  : public RuntimeObject
{
public:

public:
};

struct Marshal_t785896760_StaticFields
{
public:
	// System.Int32 System.Runtime.InteropServices.Marshal::SystemMaxDBCSCharSize
	int32_t ___SystemMaxDBCSCharSize_0;
	// System.Int32 System.Runtime.InteropServices.Marshal::SystemDefaultCharSize
	int32_t ___SystemDefaultCharSize_1;

public:
	inline static int32_t get_offset_of_SystemMaxDBCSCharSize_0() { return static_cast<int32_t>(offsetof(Marshal_t785896760_StaticFields, ___SystemMaxDBCSCharSize_0)); }
	inline int32_t get_SystemMaxDBCSCharSize_0() const { return ___SystemMaxDBCSCharSize_0; }
	inline int32_t* get_address_of_SystemMaxDBCSCharSize_0() { return &___SystemMaxDBCSCharSize_0; }
	inline void set_SystemMaxDBCSCharSize_0(int32_t value)
	{
		___SystemMaxDBCSCharSize_0 = value;
	}

	inline static int32_t get_offset_of_SystemDefaultCharSize_1() { return static_cast<int32_t>(offsetof(Marshal_t785896760_StaticFields, ___SystemDefaultCharSize_1)); }
	inline int32_t get_SystemDefaultCharSize_1() const { return ___SystemDefaultCharSize_1; }
	inline int32_t* get_address_of_SystemDefaultCharSize_1() { return &___SystemDefaultCharSize_1; }
	inline void set_SystemDefaultCharSize_1(int32_t value)
	{
		___SystemDefaultCharSize_1 = value;
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // RESOURCEMANAGER_T2395228493_H
#ifndef CONSTRUCTIONLEVELACTIVATOR_T843695907_H
#define CONSTRUCTIONLEVELACTIVATOR_T843695907_H
=======
#endif // MARSHAL_T785896760_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.Runtime.Remoting.Activation.ConstructionLevelActivator
struct  ConstructionLevelActivator_t843695907  : public RuntimeObject
=======
// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // CONSTRUCTIONLEVELACTIVATOR_T843695907_H
#ifndef APPDOMAINLEVELACTIVATOR_T3730006795_H
#define APPDOMAINLEVELACTIVATOR_T3730006795_H
=======
#endif // MEMBERINFO_T_H
#ifndef APPDOMAINLEVELACTIVATOR_T834876328_H
#define APPDOMAINLEVELACTIVATOR_T834876328_H
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Activation.AppDomainLevelActivator
<<<<<<< HEAD
struct  AppDomainLevelActivator_t3730006795  : public RuntimeObject
=======
struct  AppDomainLevelActivator_t834876328  : public RuntimeObject
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
{
public:
	// System.String System.Runtime.Remoting.Activation.AppDomainLevelActivator::_activationUrl
	String_t* ____activationUrl_0;
	// System.Runtime.Remoting.Activation.IActivator System.Runtime.Remoting.Activation.AppDomainLevelActivator::_next
	RuntimeObject* ____next_1;

public:
<<<<<<< HEAD
	inline static int32_t get_offset_of__activationUrl_0() { return static_cast<int32_t>(offsetof(AppDomainLevelActivator_t3730006795, ____activationUrl_0)); }
=======
	inline static int32_t get_offset_of__activationUrl_0() { return static_cast<int32_t>(offsetof(AppDomainLevelActivator_t834876328, ____activationUrl_0)); }
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
	inline String_t* get__activationUrl_0() const { return ____activationUrl_0; }
	inline String_t** get_address_of__activationUrl_0() { return &____activationUrl_0; }
	inline void set__activationUrl_0(String_t* value)
	{
		____activationUrl_0 = value;
		Il2CppCodeGenWriteBarrier((&____activationUrl_0), value);
	}

<<<<<<< HEAD
	inline static int32_t get_offset_of__next_1() { return static_cast<int32_t>(offsetof(AppDomainLevelActivator_t3730006795, ____next_1)); }
=======
	inline static int32_t get_offset_of__next_1() { return static_cast<int32_t>(offsetof(AppDomainLevelActivator_t834876328, ____next_1)); }
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
	inline RuntimeObject* get__next_1() const { return ____next_1; }
	inline RuntimeObject** get_address_of__next_1() { return &____next_1; }
	inline void set__next_1(RuntimeObject* value)
	{
		____next_1 = value;
		Il2CppCodeGenWriteBarrier((&____next_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // APPDOMAINLEVELACTIVATOR_T3730006795_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
=======
#endif // APPDOMAINLEVELACTIVATOR_T834876328_H
#ifndef RESOURCEMANAGER_T264715885_H
#define RESOURCEMANAGER_T264715885_H
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
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
#ifndef MARSHAL_T113540030_H
#define MARSHAL_T113540030_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.Marshal
struct  Marshal_t113540030  : public RuntimeObject
{
public:

public:
};

struct Marshal_t113540030_StaticFields
{
public:
	// System.Int32 System.Runtime.InteropServices.Marshal::SystemMaxDBCSCharSize
	int32_t ___SystemMaxDBCSCharSize_0;
	// System.Int32 System.Runtime.InteropServices.Marshal::SystemDefaultCharSize
	int32_t ___SystemDefaultCharSize_1;

public:
	inline static int32_t get_offset_of_SystemMaxDBCSCharSize_0() { return static_cast<int32_t>(offsetof(Marshal_t113540030_StaticFields, ___SystemMaxDBCSCharSize_0)); }
	inline int32_t get_SystemMaxDBCSCharSize_0() const { return ___SystemMaxDBCSCharSize_0; }
	inline int32_t* get_address_of_SystemMaxDBCSCharSize_0() { return &___SystemMaxDBCSCharSize_0; }
	inline void set_SystemMaxDBCSCharSize_0(int32_t value)
	{
		___SystemMaxDBCSCharSize_0 = value;
	}

	inline static int32_t get_offset_of_SystemDefaultCharSize_1() { return static_cast<int32_t>(offsetof(Marshal_t113540030_StaticFields, ___SystemDefaultCharSize_1)); }
	inline int32_t get_SystemDefaultCharSize_1() const { return ___SystemDefaultCharSize_1; }
	inline int32_t* get_address_of_SystemDefaultCharSize_1() { return &___SystemDefaultCharSize_1; }
	inline void set_SystemDefaultCharSize_1(int32_t value)
	{
		___SystemDefaultCharSize_1 = value;
=======
// System.Resources.ResourceManager
struct  ResourceManager_t264715885  : public RuntimeObject
{
public:
	// System.Type System.Resources.ResourceManager::resourceSetType
	Type_t * ___resourceSetType_4;

public:
	inline static int32_t get_offset_of_resourceSetType_4() { return static_cast<int32_t>(offsetof(ResourceManager_t264715885, ___resourceSetType_4)); }
	inline Type_t * get_resourceSetType_4() const { return ___resourceSetType_4; }
	inline Type_t ** get_address_of_resourceSetType_4() { return &___resourceSetType_4; }
	inline void set_resourceSetType_4(Type_t * value)
	{
		___resourceSetType_4 = value;
		Il2CppCodeGenWriteBarrier((&___resourceSetType_4), value);
	}
};

struct ResourceManager_t264715885_StaticFields
{
public:
	// System.Collections.Hashtable System.Resources.ResourceManager::ResourceCache
	Hashtable_t909839986 * ___ResourceCache_0;
	// System.Collections.Hashtable System.Resources.ResourceManager::NonExistent
	Hashtable_t909839986 * ___NonExistent_1;
	// System.Int32 System.Resources.ResourceManager::HeaderVersionNumber
	int32_t ___HeaderVersionNumber_2;
	// System.Int32 System.Resources.ResourceManager::MagicNumber
	int32_t ___MagicNumber_3;

public:
	inline static int32_t get_offset_of_ResourceCache_0() { return static_cast<int32_t>(offsetof(ResourceManager_t264715885_StaticFields, ___ResourceCache_0)); }
	inline Hashtable_t909839986 * get_ResourceCache_0() const { return ___ResourceCache_0; }
	inline Hashtable_t909839986 ** get_address_of_ResourceCache_0() { return &___ResourceCache_0; }
	inline void set_ResourceCache_0(Hashtable_t909839986 * value)
	{
		___ResourceCache_0 = value;
		Il2CppCodeGenWriteBarrier((&___ResourceCache_0), value);
	}

	inline static int32_t get_offset_of_NonExistent_1() { return static_cast<int32_t>(offsetof(ResourceManager_t264715885_StaticFields, ___NonExistent_1)); }
	inline Hashtable_t909839986 * get_NonExistent_1() const { return ___NonExistent_1; }
	inline Hashtable_t909839986 ** get_address_of_NonExistent_1() { return &___NonExistent_1; }
	inline void set_NonExistent_1(Hashtable_t909839986 * value)
	{
		___NonExistent_1 = value;
		Il2CppCodeGenWriteBarrier((&___NonExistent_1), value);
	}

	inline static int32_t get_offset_of_HeaderVersionNumber_2() { return static_cast<int32_t>(offsetof(ResourceManager_t264715885_StaticFields, ___HeaderVersionNumber_2)); }
	inline int32_t get_HeaderVersionNumber_2() const { return ___HeaderVersionNumber_2; }
	inline int32_t* get_address_of_HeaderVersionNumber_2() { return &___HeaderVersionNumber_2; }
	inline void set_HeaderVersionNumber_2(int32_t value)
	{
		___HeaderVersionNumber_2 = value;
	}

	inline static int32_t get_offset_of_MagicNumber_3() { return static_cast<int32_t>(offsetof(ResourceManager_t264715885_StaticFields, ___MagicNumber_3)); }
	inline int32_t get_MagicNumber_3() const { return ___MagicNumber_3; }
	inline int32_t* get_address_of_MagicNumber_3() { return &___MagicNumber_3; }
	inline void set_MagicNumber_3(int32_t value)
	{
		___MagicNumber_3 = value;
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // MARSHAL_T113540030_H
#ifndef ACTIVATIONSERVICES_T1461598347_H
#define ACTIVATIONSERVICES_T1461598347_H
=======
#endif // RESOURCEMANAGER_T264715885_H
#ifndef ACTIVATIONSERVICES_T1532663650_H
#define ACTIVATIONSERVICES_T1532663650_H
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Activation.ActivationServices
<<<<<<< HEAD
struct  ActivationServices_t1461598347  : public RuntimeObject
=======
struct  ActivationServices_t1532663650  : public RuntimeObject
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
{
public:

public:
};

<<<<<<< HEAD
struct ActivationServices_t1461598347_StaticFields
=======
struct ActivationServices_t1532663650_StaticFields
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
{
public:
	// System.Runtime.Remoting.Activation.IActivator System.Runtime.Remoting.Activation.ActivationServices::_constructionActivator
	RuntimeObject* ____constructionActivator_0;

public:
<<<<<<< HEAD
	inline static int32_t get_offset_of__constructionActivator_0() { return static_cast<int32_t>(offsetof(ActivationServices_t1461598347_StaticFields, ____constructionActivator_0)); }
=======
	inline static int32_t get_offset_of__constructionActivator_0() { return static_cast<int32_t>(offsetof(ActivationServices_t1532663650_StaticFields, ____constructionActivator_0)); }
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
	inline RuntimeObject* get__constructionActivator_0() const { return ____constructionActivator_0; }
	inline RuntimeObject** get_address_of__constructionActivator_0() { return &____constructionActivator_0; }
	inline void set__constructionActivator_0(RuntimeObject* value)
	{
		____constructionActivator_0 = value;
		Il2CppCodeGenWriteBarrier((&____constructionActivator_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // ACTIVATIONSERVICES_T1461598347_H
#ifndef CROSSAPPDOMAINCHANNEL_T858402425_H
#define CROSSAPPDOMAINCHANNEL_T858402425_H
=======
#endif // ACTIVATIONSERVICES_T1532663650_H
#ifndef RESOURCEREADER_T2463923611_H
#define RESOURCEREADER_T2463923611_H
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.Runtime.Remoting.Channels.CrossAppDomainChannel
struct  CrossAppDomainChannel_t858402425  : public RuntimeObject
{
public:

public:
};

struct CrossAppDomainChannel_t858402425_StaticFields
{
public:
	// System.Object System.Runtime.Remoting.Channels.CrossAppDomainChannel::s_lock
	RuntimeObject * ___s_lock_0;

public:
	inline static int32_t get_offset_of_s_lock_0() { return static_cast<int32_t>(offsetof(CrossAppDomainChannel_t858402425_StaticFields, ___s_lock_0)); }
	inline RuntimeObject * get_s_lock_0() const { return ___s_lock_0; }
	inline RuntimeObject ** get_address_of_s_lock_0() { return &___s_lock_0; }
	inline void set_s_lock_0(RuntimeObject * value)
	{
		___s_lock_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_lock_0), value);
=======
// System.Resources.ResourceReader
struct  ResourceReader_t2463923611  : public RuntimeObject
{
public:
	// System.IO.BinaryReader System.Resources.ResourceReader::reader
	BinaryReader_t2491843768 * ___reader_0;
	// System.Object System.Resources.ResourceReader::readerLock
	RuntimeObject * ___readerLock_1;
	// System.Runtime.Serialization.IFormatter System.Resources.ResourceReader::formatter
	RuntimeObject* ___formatter_2;
	// System.Int32 System.Resources.ResourceReader::resourceCount
	int32_t ___resourceCount_3;
	// System.Int32 System.Resources.ResourceReader::typeCount
	int32_t ___typeCount_4;
	// System.String[] System.Resources.ResourceReader::typeNames
	StringU5BU5D_t1642385972* ___typeNames_5;
	// System.Int32[] System.Resources.ResourceReader::hashes
	Int32U5BU5D_t3030399641* ___hashes_6;
	// System.Resources.ResourceReader/ResourceInfo[] System.Resources.ResourceReader::infos
	ResourceInfoU5BU5D_t1013133725* ___infos_7;
	// System.Int32 System.Resources.ResourceReader::dataSectionOffset
	int32_t ___dataSectionOffset_8;
	// System.Int64 System.Resources.ResourceReader::nameSectionOffset
	int64_t ___nameSectionOffset_9;
	// System.Int32 System.Resources.ResourceReader::resource_ver
	int32_t ___resource_ver_10;
	// System.Resources.ResourceReader/ResourceCacheItem[] System.Resources.ResourceReader::cache
	ResourceCacheItemU5BU5D_t2265014744* ___cache_11;
	// System.Object System.Resources.ResourceReader::cache_lock
	RuntimeObject * ___cache_lock_12;

public:
	inline static int32_t get_offset_of_reader_0() { return static_cast<int32_t>(offsetof(ResourceReader_t2463923611, ___reader_0)); }
	inline BinaryReader_t2491843768 * get_reader_0() const { return ___reader_0; }
	inline BinaryReader_t2491843768 ** get_address_of_reader_0() { return &___reader_0; }
	inline void set_reader_0(BinaryReader_t2491843768 * value)
	{
		___reader_0 = value;
		Il2CppCodeGenWriteBarrier((&___reader_0), value);
	}

	inline static int32_t get_offset_of_readerLock_1() { return static_cast<int32_t>(offsetof(ResourceReader_t2463923611, ___readerLock_1)); }
	inline RuntimeObject * get_readerLock_1() const { return ___readerLock_1; }
	inline RuntimeObject ** get_address_of_readerLock_1() { return &___readerLock_1; }
	inline void set_readerLock_1(RuntimeObject * value)
	{
		___readerLock_1 = value;
		Il2CppCodeGenWriteBarrier((&___readerLock_1), value);
	}

	inline static int32_t get_offset_of_formatter_2() { return static_cast<int32_t>(offsetof(ResourceReader_t2463923611, ___formatter_2)); }
	inline RuntimeObject* get_formatter_2() const { return ___formatter_2; }
	inline RuntimeObject** get_address_of_formatter_2() { return &___formatter_2; }
	inline void set_formatter_2(RuntimeObject* value)
	{
		___formatter_2 = value;
		Il2CppCodeGenWriteBarrier((&___formatter_2), value);
	}

	inline static int32_t get_offset_of_resourceCount_3() { return static_cast<int32_t>(offsetof(ResourceReader_t2463923611, ___resourceCount_3)); }
	inline int32_t get_resourceCount_3() const { return ___resourceCount_3; }
	inline int32_t* get_address_of_resourceCount_3() { return &___resourceCount_3; }
	inline void set_resourceCount_3(int32_t value)
	{
		___resourceCount_3 = value;
	}

	inline static int32_t get_offset_of_typeCount_4() { return static_cast<int32_t>(offsetof(ResourceReader_t2463923611, ___typeCount_4)); }
	inline int32_t get_typeCount_4() const { return ___typeCount_4; }
	inline int32_t* get_address_of_typeCount_4() { return &___typeCount_4; }
	inline void set_typeCount_4(int32_t value)
	{
		___typeCount_4 = value;
	}

	inline static int32_t get_offset_of_typeNames_5() { return static_cast<int32_t>(offsetof(ResourceReader_t2463923611, ___typeNames_5)); }
	inline StringU5BU5D_t1642385972* get_typeNames_5() const { return ___typeNames_5; }
	inline StringU5BU5D_t1642385972** get_address_of_typeNames_5() { return &___typeNames_5; }
	inline void set_typeNames_5(StringU5BU5D_t1642385972* value)
	{
		___typeNames_5 = value;
		Il2CppCodeGenWriteBarrier((&___typeNames_5), value);
	}

	inline static int32_t get_offset_of_hashes_6() { return static_cast<int32_t>(offsetof(ResourceReader_t2463923611, ___hashes_6)); }
	inline Int32U5BU5D_t3030399641* get_hashes_6() const { return ___hashes_6; }
	inline Int32U5BU5D_t3030399641** get_address_of_hashes_6() { return &___hashes_6; }
	inline void set_hashes_6(Int32U5BU5D_t3030399641* value)
	{
		___hashes_6 = value;
		Il2CppCodeGenWriteBarrier((&___hashes_6), value);
	}

	inline static int32_t get_offset_of_infos_7() { return static_cast<int32_t>(offsetof(ResourceReader_t2463923611, ___infos_7)); }
	inline ResourceInfoU5BU5D_t1013133725* get_infos_7() const { return ___infos_7; }
	inline ResourceInfoU5BU5D_t1013133725** get_address_of_infos_7() { return &___infos_7; }
	inline void set_infos_7(ResourceInfoU5BU5D_t1013133725* value)
	{
		___infos_7 = value;
		Il2CppCodeGenWriteBarrier((&___infos_7), value);
	}

	inline static int32_t get_offset_of_dataSectionOffset_8() { return static_cast<int32_t>(offsetof(ResourceReader_t2463923611, ___dataSectionOffset_8)); }
	inline int32_t get_dataSectionOffset_8() const { return ___dataSectionOffset_8; }
	inline int32_t* get_address_of_dataSectionOffset_8() { return &___dataSectionOffset_8; }
	inline void set_dataSectionOffset_8(int32_t value)
	{
		___dataSectionOffset_8 = value;
	}

	inline static int32_t get_offset_of_nameSectionOffset_9() { return static_cast<int32_t>(offsetof(ResourceReader_t2463923611, ___nameSectionOffset_9)); }
	inline int64_t get_nameSectionOffset_9() const { return ___nameSectionOffset_9; }
	inline int64_t* get_address_of_nameSectionOffset_9() { return &___nameSectionOffset_9; }
	inline void set_nameSectionOffset_9(int64_t value)
	{
		___nameSectionOffset_9 = value;
	}

	inline static int32_t get_offset_of_resource_ver_10() { return static_cast<int32_t>(offsetof(ResourceReader_t2463923611, ___resource_ver_10)); }
	inline int32_t get_resource_ver_10() const { return ___resource_ver_10; }
	inline int32_t* get_address_of_resource_ver_10() { return &___resource_ver_10; }
	inline void set_resource_ver_10(int32_t value)
	{
		___resource_ver_10 = value;
	}

	inline static int32_t get_offset_of_cache_11() { return static_cast<int32_t>(offsetof(ResourceReader_t2463923611, ___cache_11)); }
	inline ResourceCacheItemU5BU5D_t2265014744* get_cache_11() const { return ___cache_11; }
	inline ResourceCacheItemU5BU5D_t2265014744** get_address_of_cache_11() { return &___cache_11; }
	inline void set_cache_11(ResourceCacheItemU5BU5D_t2265014744* value)
	{
		___cache_11 = value;
		Il2CppCodeGenWriteBarrier((&___cache_11), value);
	}

	inline static int32_t get_offset_of_cache_lock_12() { return static_cast<int32_t>(offsetof(ResourceReader_t2463923611, ___cache_lock_12)); }
	inline RuntimeObject * get_cache_lock_12() const { return ___cache_lock_12; }
	inline RuntimeObject ** get_address_of_cache_lock_12() { return &___cache_lock_12; }
	inline void set_cache_lock_12(RuntimeObject * value)
	{
		___cache_lock_12 = value;
		Il2CppCodeGenWriteBarrier((&___cache_lock_12), value);
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // CROSSAPPDOMAINCHANNEL_T858402425_H
#ifndef STRONGNAMEKEYPAIR_T2524123286_H
#define STRONGNAMEKEYPAIR_T2524123286_H
=======
#endif // RESOURCEREADER_T2463923611_H
#ifndef CONSTRUCTIONLEVELACTIVATOR_T2284932402_H
#define CONSTRUCTIONLEVELACTIVATOR_T2284932402_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Activation.ConstructionLevelActivator
struct  ConstructionLevelActivator_t2284932402  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTRUCTIONLEVELACTIVATOR_T2284932402_H
#ifndef STRONGNAMEKEYPAIR_T4090869089_H
#define STRONGNAMEKEYPAIR_T4090869089_H
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.StrongNameKeyPair
<<<<<<< HEAD
struct  StrongNameKeyPair_t2524123286  : public RuntimeObject
{
public:
	// System.Byte[] System.Reflection.StrongNameKeyPair::_publicKey
	ByteU5BU5D_t757797699* ____publicKey_0;
=======
struct  StrongNameKeyPair_t4090869089  : public RuntimeObject
{
public:
	// System.Byte[] System.Reflection.StrongNameKeyPair::_publicKey
	ByteU5BU5D_t3397334013* ____publicKey_0;
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
	// System.String System.Reflection.StrongNameKeyPair::_keyPairContainer
	String_t* ____keyPairContainer_1;
	// System.Boolean System.Reflection.StrongNameKeyPair::_keyPairExported
	bool ____keyPairExported_2;
	// System.Byte[] System.Reflection.StrongNameKeyPair::_keyPairArray
<<<<<<< HEAD
	ByteU5BU5D_t757797699* ____keyPairArray_3;
	// System.Security.Cryptography.RSA System.Reflection.StrongNameKeyPair::_rsa
	RSA_t278427376 * ____rsa_4;

public:
	inline static int32_t get_offset_of__publicKey_0() { return static_cast<int32_t>(offsetof(StrongNameKeyPair_t2524123286, ____publicKey_0)); }
	inline ByteU5BU5D_t757797699* get__publicKey_0() const { return ____publicKey_0; }
	inline ByteU5BU5D_t757797699** get_address_of__publicKey_0() { return &____publicKey_0; }
	inline void set__publicKey_0(ByteU5BU5D_t757797699* value)
=======
	ByteU5BU5D_t3397334013* ____keyPairArray_3;
	// System.Security.Cryptography.RSA System.Reflection.StrongNameKeyPair::_rsa
	RSA_t3719518354 * ____rsa_4;

public:
	inline static int32_t get_offset_of__publicKey_0() { return static_cast<int32_t>(offsetof(StrongNameKeyPair_t4090869089, ____publicKey_0)); }
	inline ByteU5BU5D_t3397334013* get__publicKey_0() const { return ____publicKey_0; }
	inline ByteU5BU5D_t3397334013** get_address_of__publicKey_0() { return &____publicKey_0; }
	inline void set__publicKey_0(ByteU5BU5D_t3397334013* value)
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
	{
		____publicKey_0 = value;
		Il2CppCodeGenWriteBarrier((&____publicKey_0), value);
	}

<<<<<<< HEAD
	inline static int32_t get_offset_of__keyPairContainer_1() { return static_cast<int32_t>(offsetof(StrongNameKeyPair_t2524123286, ____keyPairContainer_1)); }
=======
	inline static int32_t get_offset_of__keyPairContainer_1() { return static_cast<int32_t>(offsetof(StrongNameKeyPair_t4090869089, ____keyPairContainer_1)); }
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
	inline String_t* get__keyPairContainer_1() const { return ____keyPairContainer_1; }
	inline String_t** get_address_of__keyPairContainer_1() { return &____keyPairContainer_1; }
	inline void set__keyPairContainer_1(String_t* value)
	{
		____keyPairContainer_1 = value;
		Il2CppCodeGenWriteBarrier((&____keyPairContainer_1), value);
	}

<<<<<<< HEAD
	inline static int32_t get_offset_of__keyPairExported_2() { return static_cast<int32_t>(offsetof(StrongNameKeyPair_t2524123286, ____keyPairExported_2)); }
=======
	inline static int32_t get_offset_of__keyPairExported_2() { return static_cast<int32_t>(offsetof(StrongNameKeyPair_t4090869089, ____keyPairExported_2)); }
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
	inline bool get__keyPairExported_2() const { return ____keyPairExported_2; }
	inline bool* get_address_of__keyPairExported_2() { return &____keyPairExported_2; }
	inline void set__keyPairExported_2(bool value)
	{
		____keyPairExported_2 = value;
	}

<<<<<<< HEAD
	inline static int32_t get_offset_of__keyPairArray_3() { return static_cast<int32_t>(offsetof(StrongNameKeyPair_t2524123286, ____keyPairArray_3)); }
	inline ByteU5BU5D_t757797699* get__keyPairArray_3() const { return ____keyPairArray_3; }
	inline ByteU5BU5D_t757797699** get_address_of__keyPairArray_3() { return &____keyPairArray_3; }
	inline void set__keyPairArray_3(ByteU5BU5D_t757797699* value)
=======
	inline static int32_t get_offset_of__keyPairArray_3() { return static_cast<int32_t>(offsetof(StrongNameKeyPair_t4090869089, ____keyPairArray_3)); }
	inline ByteU5BU5D_t3397334013* get__keyPairArray_3() const { return ____keyPairArray_3; }
	inline ByteU5BU5D_t3397334013** get_address_of__keyPairArray_3() { return &____keyPairArray_3; }
	inline void set__keyPairArray_3(ByteU5BU5D_t3397334013* value)
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
	{
		____keyPairArray_3 = value;
		Il2CppCodeGenWriteBarrier((&____keyPairArray_3), value);
	}

<<<<<<< HEAD
	inline static int32_t get_offset_of__rsa_4() { return static_cast<int32_t>(offsetof(StrongNameKeyPair_t2524123286, ____rsa_4)); }
	inline RSA_t278427376 * get__rsa_4() const { return ____rsa_4; }
	inline RSA_t278427376 ** get_address_of__rsa_4() { return &____rsa_4; }
	inline void set__rsa_4(RSA_t278427376 * value)
=======
	inline static int32_t get_offset_of__rsa_4() { return static_cast<int32_t>(offsetof(StrongNameKeyPair_t4090869089, ____rsa_4)); }
	inline RSA_t3719518354 * get__rsa_4() const { return ____rsa_4; }
	inline RSA_t3719518354 ** get_address_of__rsa_4() { return &____rsa_4; }
	inline void set__rsa_4(RSA_t3719518354 * value)
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
	{
		____rsa_4 = value;
		Il2CppCodeGenWriteBarrier((&____rsa_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // STRONGNAMEKEYPAIR_T2524123286_H
#ifndef CONTEXTLEVELACTIVATOR_T4162002061_H
#define CONTEXTLEVELACTIVATOR_T4162002061_H
=======
#endif // STRONGNAMEKEYPAIR_T4090869089_H
#ifndef RESOURCESET_T1348327650_H
#define RESOURCESET_T1348327650_H
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.Runtime.Remoting.Activation.ContextLevelActivator
struct  ContextLevelActivator_t4162002061  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.Activation.IActivator System.Runtime.Remoting.Activation.ContextLevelActivator::m_NextActivator
	RuntimeObject* ___m_NextActivator_0;

public:
	inline static int32_t get_offset_of_m_NextActivator_0() { return static_cast<int32_t>(offsetof(ContextLevelActivator_t4162002061, ___m_NextActivator_0)); }
	inline RuntimeObject* get_m_NextActivator_0() const { return ___m_NextActivator_0; }
	inline RuntimeObject** get_address_of_m_NextActivator_0() { return &___m_NextActivator_0; }
	inline void set_m_NextActivator_0(RuntimeObject* value)
	{
		___m_NextActivator_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_NextActivator_0), value);
=======
// System.Resources.ResourceSet
struct  ResourceSet_t1348327650  : public RuntimeObject
{
public:
	// System.Resources.IResourceReader System.Resources.ResourceSet::Reader
	RuntimeObject* ___Reader_0;
	// System.Collections.Hashtable System.Resources.ResourceSet::Table
	Hashtable_t909839986 * ___Table_1;
	// System.Boolean System.Resources.ResourceSet::resources_read
	bool ___resources_read_2;
	// System.Boolean System.Resources.ResourceSet::disposed
	bool ___disposed_3;

public:
	inline static int32_t get_offset_of_Reader_0() { return static_cast<int32_t>(offsetof(ResourceSet_t1348327650, ___Reader_0)); }
	inline RuntimeObject* get_Reader_0() const { return ___Reader_0; }
	inline RuntimeObject** get_address_of_Reader_0() { return &___Reader_0; }
	inline void set_Reader_0(RuntimeObject* value)
	{
		___Reader_0 = value;
		Il2CppCodeGenWriteBarrier((&___Reader_0), value);
	}

	inline static int32_t get_offset_of_Table_1() { return static_cast<int32_t>(offsetof(ResourceSet_t1348327650, ___Table_1)); }
	inline Hashtable_t909839986 * get_Table_1() const { return ___Table_1; }
	inline Hashtable_t909839986 ** get_address_of_Table_1() { return &___Table_1; }
	inline void set_Table_1(Hashtable_t909839986 * value)
	{
		___Table_1 = value;
		Il2CppCodeGenWriteBarrier((&___Table_1), value);
	}

	inline static int32_t get_offset_of_resources_read_2() { return static_cast<int32_t>(offsetof(ResourceSet_t1348327650, ___resources_read_2)); }
	inline bool get_resources_read_2() const { return ___resources_read_2; }
	inline bool* get_address_of_resources_read_2() { return &___resources_read_2; }
	inline void set_resources_read_2(bool value)
	{
		___resources_read_2 = value;
	}

	inline static int32_t get_offset_of_disposed_3() { return static_cast<int32_t>(offsetof(ResourceSet_t1348327650, ___disposed_3)); }
	inline bool get_disposed_3() const { return ___disposed_3; }
	inline bool* get_address_of_disposed_3() { return &___disposed_3; }
	inline void set_disposed_3(bool value)
	{
		___disposed_3 = value;
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // CONTEXTLEVELACTIVATOR_T4162002061_H
#ifndef CROSSAPPDOMAINDATA_T420151536_H
#define CROSSAPPDOMAINDATA_T420151536_H
=======
#endif // RESOURCESET_T1348327650_H
#ifndef RESOURCEENUMERATOR_T2665690338_H
#define RESOURCEENUMERATOR_T2665690338_H
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.Runtime.Remoting.Channels.CrossAppDomainData
struct  CrossAppDomainData_t420151536  : public RuntimeObject
{
public:
	// System.Object System.Runtime.Remoting.Channels.CrossAppDomainData::_ContextID
	RuntimeObject * ____ContextID_0;
	// System.Int32 System.Runtime.Remoting.Channels.CrossAppDomainData::_DomainID
	int32_t ____DomainID_1;
	// System.String System.Runtime.Remoting.Channels.CrossAppDomainData::_processGuid
	String_t* ____processGuid_2;

public:
	inline static int32_t get_offset_of__ContextID_0() { return static_cast<int32_t>(offsetof(CrossAppDomainData_t420151536, ____ContextID_0)); }
	inline RuntimeObject * get__ContextID_0() const { return ____ContextID_0; }
	inline RuntimeObject ** get_address_of__ContextID_0() { return &____ContextID_0; }
	inline void set__ContextID_0(RuntimeObject * value)
	{
		____ContextID_0 = value;
		Il2CppCodeGenWriteBarrier((&____ContextID_0), value);
	}

	inline static int32_t get_offset_of__DomainID_1() { return static_cast<int32_t>(offsetof(CrossAppDomainData_t420151536, ____DomainID_1)); }
	inline int32_t get__DomainID_1() const { return ____DomainID_1; }
	inline int32_t* get_address_of__DomainID_1() { return &____DomainID_1; }
	inline void set__DomainID_1(int32_t value)
	{
		____DomainID_1 = value;
	}

	inline static int32_t get_offset_of__processGuid_2() { return static_cast<int32_t>(offsetof(CrossAppDomainData_t420151536, ____processGuid_2)); }
	inline String_t* get__processGuid_2() const { return ____processGuid_2; }
	inline String_t** get_address_of__processGuid_2() { return &____processGuid_2; }
	inline void set__processGuid_2(String_t* value)
	{
		____processGuid_2 = value;
		Il2CppCodeGenWriteBarrier((&____processGuid_2), value);
=======
// System.Resources.ResourceReader/ResourceEnumerator
struct  ResourceEnumerator_t2665690338  : public RuntimeObject
{
public:
	// System.Resources.ResourceReader System.Resources.ResourceReader/ResourceEnumerator::reader
	ResourceReader_t2463923611 * ___reader_0;
	// System.Int32 System.Resources.ResourceReader/ResourceEnumerator::index
	int32_t ___index_1;
	// System.Boolean System.Resources.ResourceReader/ResourceEnumerator::finished
	bool ___finished_2;

public:
	inline static int32_t get_offset_of_reader_0() { return static_cast<int32_t>(offsetof(ResourceEnumerator_t2665690338, ___reader_0)); }
	inline ResourceReader_t2463923611 * get_reader_0() const { return ___reader_0; }
	inline ResourceReader_t2463923611 ** get_address_of_reader_0() { return &___reader_0; }
	inline void set_reader_0(ResourceReader_t2463923611 * value)
	{
		___reader_0 = value;
		Il2CppCodeGenWriteBarrier((&___reader_0), value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(ResourceEnumerator_t2665690338, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_finished_2() { return static_cast<int32_t>(offsetof(ResourceEnumerator_t2665690338, ___finished_2)); }
	inline bool get_finished_2() const { return ___finished_2; }
	inline bool* get_address_of_finished_2() { return &___finished_2; }
	inline void set_finished_2(bool value)
	{
		___finished_2 = value;
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // CROSSAPPDOMAINDATA_T420151536_H
#ifndef DISPIDATTRIBUTE_T3823512475_H
#define DISPIDATTRIBUTE_T3823512475_H
=======
#endif // RESOURCEENUMERATOR_T2665690338_H
#ifndef CONTEXTLEVELACTIVATOR_T1784331636_H
#define CONTEXTLEVELACTIVATOR_T1784331636_H
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.Runtime.InteropServices.DispIdAttribute
struct  DispIdAttribute_t3823512475  : public Attribute_t723177756
{
public:
	// System.Int32 System.Runtime.InteropServices.DispIdAttribute::id
	int32_t ___id_0;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(DispIdAttribute_t3823512475, ___id_0)); }
	inline int32_t get_id_0() const { return ___id_0; }
	inline int32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(int32_t value)
	{
		___id_0 = value;
=======
// System.Runtime.Remoting.Activation.ContextLevelActivator
struct  ContextLevelActivator_t1784331636  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.Activation.IActivator System.Runtime.Remoting.Activation.ContextLevelActivator::m_NextActivator
	RuntimeObject* ___m_NextActivator_0;

public:
	inline static int32_t get_offset_of_m_NextActivator_0() { return static_cast<int32_t>(offsetof(ContextLevelActivator_t1784331636, ___m_NextActivator_0)); }
	inline RuntimeObject* get_m_NextActivator_0() const { return ___m_NextActivator_0; }
	inline RuntimeObject** get_address_of_m_NextActivator_0() { return &___m_NextActivator_0; }
	inline void set_m_NextActivator_0(RuntimeObject* value)
	{
		___m_NextActivator_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_NextActivator_0), value);
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // DISPIDATTRIBUTE_T3823512475_H
#ifndef REMOTEACTIVATOR_T3517897456_H
#define REMOTEACTIVATOR_T3517897456_H
=======
#endif // CONTEXTLEVELACTIVATOR_T1784331636_H
#ifndef TYPELIBVERSIONATTRIBUTE_T3346496961_H
#define TYPELIBVERSIONATTRIBUTE_T3346496961_H
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.Runtime.Remoting.Activation.RemoteActivator
struct  RemoteActivator_t3517897456  : public MarshalByRefObject_t412758220
{
public:

public:
=======
// System.Runtime.InteropServices.TypeLibVersionAttribute
struct  TypeLibVersionAttribute_t3346496961  : public Attribute_t542643598
{
public:
	// System.Int32 System.Runtime.InteropServices.TypeLibVersionAttribute::major
	int32_t ___major_0;
	// System.Int32 System.Runtime.InteropServices.TypeLibVersionAttribute::minor
	int32_t ___minor_1;

public:
	inline static int32_t get_offset_of_major_0() { return static_cast<int32_t>(offsetof(TypeLibVersionAttribute_t3346496961, ___major_0)); }
	inline int32_t get_major_0() const { return ___major_0; }
	inline int32_t* get_address_of_major_0() { return &___major_0; }
	inline void set_major_0(int32_t value)
	{
		___major_0 = value;
	}

	inline static int32_t get_offset_of_minor_1() { return static_cast<int32_t>(offsetof(TypeLibVersionAttribute_t3346496961, ___minor_1)); }
	inline int32_t get_minor_1() const { return ___minor_1; }
	inline int32_t* get_address_of_minor_1() { return &___minor_1; }
	inline void set_minor_1(int32_t value)
	{
		___minor_1 = value;
	}
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // REMOTEACTIVATOR_T3517897456_H
#ifndef GCHANDLE_T321279148_H
#define GCHANDLE_T321279148_H
=======
#endif // TYPELIBVERSIONATTRIBUTE_T3346496961_H
#ifndef TYPELIBIMPORTCLASSATTRIBUTE_T2390314680_H
#define TYPELIBIMPORTCLASSATTRIBUTE_T2390314680_H
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.Runtime.InteropServices.GCHandle
struct  GCHandle_t321279148 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t321279148, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
=======
// System.Runtime.InteropServices.TypeLibImportClassAttribute
struct  TypeLibImportClassAttribute_t2390314680  : public Attribute_t542643598
{
public:
	// System.String System.Runtime.InteropServices.TypeLibImportClassAttribute::_importClass
	String_t* ____importClass_0;

public:
	inline static int32_t get_offset_of__importClass_0() { return static_cast<int32_t>(offsetof(TypeLibImportClassAttribute_t2390314680, ____importClass_0)); }
	inline String_t* get__importClass_0() const { return ____importClass_0; }
	inline String_t** get_address_of__importClass_0() { return &____importClass_0; }
	inline void set__importClass_0(String_t* value)
	{
		____importClass_0 = value;
		Il2CppCodeGenWriteBarrier((&____importClass_0), value);
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // GCHANDLE_T321279148_H
#ifndef PRESERVESIGATTRIBUTE_T592324163_H
#define PRESERVESIGATTRIBUTE_T592324163_H
=======
#endif // TYPELIBIMPORTCLASSATTRIBUTE_T2390314680_H
#ifndef PRESERVESIGATTRIBUTE_T1564965109_H
#define PRESERVESIGATTRIBUTE_T1564965109_H
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.PreserveSigAttribute
<<<<<<< HEAD
struct  PreserveSigAttribute_t592324163  : public Attribute_t723177756
=======
struct  PreserveSigAttribute_t1564965109  : public Attribute_t542643598
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRESERVESIGATTRIBUTE_T1564965109_H
#ifndef REMOTEACTIVATOR_T213750447_H
#define REMOTEACTIVATOR_T213750447_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Activation.RemoteActivator
struct  RemoteActivator_t213750447  : public MarshalByRefObject_t1285298191
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // PRESERVESIGATTRIBUTE_T592324163_H
#ifndef COMCOMPATIBLEVERSIONATTRIBUTE_T2842168515_H
#define COMCOMPATIBLEVERSIONATTRIBUTE_T2842168515_H
=======
#endif // REMOTEACTIVATOR_T213750447_H
#ifndef COMCOMPATIBLEVERSIONATTRIBUTE_T1884740313_H
#define COMCOMPATIBLEVERSIONATTRIBUTE_T1884740313_H
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ComCompatibleVersionAttribute
<<<<<<< HEAD
struct  ComCompatibleVersionAttribute_t2842168515  : public Attribute_t723177756
=======
struct  ComCompatibleVersionAttribute_t1884740313  : public Attribute_t542643598
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
{
public:
	// System.Int32 System.Runtime.InteropServices.ComCompatibleVersionAttribute::major
	int32_t ___major_0;
	// System.Int32 System.Runtime.InteropServices.ComCompatibleVersionAttribute::minor
	int32_t ___minor_1;
	// System.Int32 System.Runtime.InteropServices.ComCompatibleVersionAttribute::build
	int32_t ___build_2;
	// System.Int32 System.Runtime.InteropServices.ComCompatibleVersionAttribute::revision
	int32_t ___revision_3;

public:
<<<<<<< HEAD
	inline static int32_t get_offset_of_major_0() { return static_cast<int32_t>(offsetof(ComCompatibleVersionAttribute_t2842168515, ___major_0)); }
=======
	inline static int32_t get_offset_of_major_0() { return static_cast<int32_t>(offsetof(ComCompatibleVersionAttribute_t1884740313, ___major_0)); }
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
	inline int32_t get_major_0() const { return ___major_0; }
	inline int32_t* get_address_of_major_0() { return &___major_0; }
	inline void set_major_0(int32_t value)
	{
		___major_0 = value;
	}

<<<<<<< HEAD
	inline static int32_t get_offset_of_minor_1() { return static_cast<int32_t>(offsetof(ComCompatibleVersionAttribute_t2842168515, ___minor_1)); }
=======
	inline static int32_t get_offset_of_minor_1() { return static_cast<int32_t>(offsetof(ComCompatibleVersionAttribute_t1884740313, ___minor_1)); }
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
	inline int32_t get_minor_1() const { return ___minor_1; }
	inline int32_t* get_address_of_minor_1() { return &___minor_1; }
	inline void set_minor_1(int32_t value)
	{
		___minor_1 = value;
	}

<<<<<<< HEAD
	inline static int32_t get_offset_of_build_2() { return static_cast<int32_t>(offsetof(ComCompatibleVersionAttribute_t2842168515, ___build_2)); }
=======
	inline static int32_t get_offset_of_build_2() { return static_cast<int32_t>(offsetof(ComCompatibleVersionAttribute_t1884740313, ___build_2)); }
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
	inline int32_t get_build_2() const { return ___build_2; }
	inline int32_t* get_address_of_build_2() { return &___build_2; }
	inline void set_build_2(int32_t value)
	{
		___build_2 = value;
	}

<<<<<<< HEAD
	inline static int32_t get_offset_of_revision_3() { return static_cast<int32_t>(offsetof(ComCompatibleVersionAttribute_t2842168515, ___revision_3)); }
=======
	inline static int32_t get_offset_of_revision_3() { return static_cast<int32_t>(offsetof(ComCompatibleVersionAttribute_t1884740313, ___revision_3)); }
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
	inline int32_t get_revision_3() const { return ___revision_3; }
	inline int32_t* get_address_of_revision_3() { return &___revision_3; }
	inline void set_revision_3(int32_t value)
	{
		___revision_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // COMCOMPATIBLEVERSIONATTRIBUTE_T2842168515_H
#ifndef COMDEFAULTINTERFACEATTRIBUTE_T3867912167_H
#define COMDEFAULTINTERFACEATTRIBUTE_T3867912167_H
=======
#endif // COMCOMPATIBLEVERSIONATTRIBUTE_T1884740313_H
#ifndef DISPIDATTRIBUTE_T607560947_H
#define DISPIDATTRIBUTE_T607560947_H
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.Runtime.InteropServices.ComDefaultInterfaceAttribute
struct  ComDefaultInterfaceAttribute_t3867912167  : public Attribute_t723177756
{
public:
	// System.Type System.Runtime.InteropServices.ComDefaultInterfaceAttribute::_type
	Type_t * ____type_0;

public:
	inline static int32_t get_offset_of__type_0() { return static_cast<int32_t>(offsetof(ComDefaultInterfaceAttribute_t3867912167, ____type_0)); }
	inline Type_t * get__type_0() const { return ____type_0; }
	inline Type_t ** get_address_of__type_0() { return &____type_0; }
	inline void set__type_0(Type_t * value)
	{
		____type_0 = value;
		Il2CppCodeGenWriteBarrier((&____type_0), value);
=======
// System.Runtime.InteropServices.DispIdAttribute
struct  DispIdAttribute_t607560947  : public Attribute_t542643598
{
public:
	// System.Int32 System.Runtime.InteropServices.DispIdAttribute::id
	int32_t ___id_0;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(DispIdAttribute_t607560947, ___id_0)); }
	inline int32_t get_id_0() const { return ___id_0; }
	inline int32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(int32_t value)
	{
		___id_0 = value;
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // COMDEFAULTINTERFACEATTRIBUTE_T3867912167_H
#ifndef STRINGFREEZINGATTRIBUTE_T987053149_H
#define STRINGFREEZINGATTRIBUTE_T987053149_H
=======
#endif // DISPIDATTRIBUTE_T607560947_H
#ifndef GCHANDLE_T3409268066_H
#define GCHANDLE_T3409268066_H
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.Runtime.CompilerServices.StringFreezingAttribute
struct  StringFreezingAttribute_t987053149  : public Attribute_t723177756
{
public:

public:
=======
// System.Runtime.InteropServices.GCHandle
struct  GCHandle_t3409268066 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t3409268066, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // STRINGFREEZINGATTRIBUTE_T987053149_H
#ifndef ENUM_T2148253514_H
#define ENUM_T2148253514_H
=======
#endif // GCHANDLE_T3409268066_H
#ifndef COMDEFAULTINTERFACEATTRIBUTE_T347642415_H
#define COMDEFAULTINTERFACEATTRIBUTE_T347642415_H
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.Enum
struct  Enum_t2148253514  : public ValueType_t3399951316
{
public:

public:
};

struct Enum_t2148253514_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t2117457135* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t2148253514_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t2117457135* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t2117457135** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t2117457135* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
=======
// System.Runtime.InteropServices.ComDefaultInterfaceAttribute
struct  ComDefaultInterfaceAttribute_t347642415  : public Attribute_t542643598
{
public:
	// System.Type System.Runtime.InteropServices.ComDefaultInterfaceAttribute::_type
	Type_t * ____type_0;

public:
	inline static int32_t get_offset_of__type_0() { return static_cast<int32_t>(offsetof(ComDefaultInterfaceAttribute_t347642415, ____type_0)); }
	inline Type_t * get__type_0() const { return ____type_0; }
	inline Type_t ** get_address_of__type_0() { return &____type_0; }
	inline void set__type_0(Type_t * value)
	{
		____type_0 = value;
		Il2CppCodeGenWriteBarrier((&____type_0), value);
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2148253514_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2148253514_marshaled_com
{
};
#endif // ENUM_T2148253514_H
#ifndef TARGETEXCEPTION_T3604352598_H
#define TARGETEXCEPTION_T3604352598_H
=======
#endif // COMDEFAULTINTERFACEATTRIBUTE_T347642415_H
#ifndef RUNTIMERESOURCESET_T1442459318_H
#define RUNTIMERESOURCESET_T1442459318_H
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.Reflection.TargetException
struct  TargetException_t3604352598  : public Exception_t3333768149
=======
// System.Resources.RuntimeResourceSet
struct  RuntimeResourceSet_t1442459318  : public ResourceSet_t1348327650
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // TARGETEXCEPTION_T3604352598_H
#ifndef TARGETINVOCATIONEXCEPTION_T4249121896_H
#define TARGETINVOCATIONEXCEPTION_T4249121896_H
=======
#endif // RUNTIMERESOURCESET_T1442459318_H
#ifndef RESOURCECACHEITEM_T333236149_H
#define RESOURCECACHEITEM_T333236149_H
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.Reflection.TargetInvocationException
struct  TargetInvocationException_t4249121896  : public Exception_t3333768149
{
public:

public:
=======
// System.Resources.ResourceReader/ResourceCacheItem
struct  ResourceCacheItem_t333236149 
{
public:
	// System.String System.Resources.ResourceReader/ResourceCacheItem::ResourceName
	String_t* ___ResourceName_0;
	// System.Object System.Resources.ResourceReader/ResourceCacheItem::ResourceValue
	RuntimeObject * ___ResourceValue_1;

public:
	inline static int32_t get_offset_of_ResourceName_0() { return static_cast<int32_t>(offsetof(ResourceCacheItem_t333236149, ___ResourceName_0)); }
	inline String_t* get_ResourceName_0() const { return ___ResourceName_0; }
	inline String_t** get_address_of_ResourceName_0() { return &___ResourceName_0; }
	inline void set_ResourceName_0(String_t* value)
	{
		___ResourceName_0 = value;
		Il2CppCodeGenWriteBarrier((&___ResourceName_0), value);
	}

	inline static int32_t get_offset_of_ResourceValue_1() { return static_cast<int32_t>(offsetof(ResourceCacheItem_t333236149, ___ResourceValue_1)); }
	inline RuntimeObject * get_ResourceValue_1() const { return ___ResourceValue_1; }
	inline RuntimeObject ** get_address_of_ResourceValue_1() { return &___ResourceValue_1; }
	inline void set_ResourceValue_1(RuntimeObject * value)
	{
		___ResourceValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___ResourceValue_1), value);
	}
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // TARGETINVOCATIONEXCEPTION_T4249121896_H
#ifndef TARGETPARAMETERCOUNTEXCEPTION_T2834415094_H
#define TARGETPARAMETERCOUNTEXCEPTION_T2834415094_H
=======
// Native definition for P/Invoke marshalling of System.Resources.ResourceReader/ResourceCacheItem
struct ResourceCacheItem_t333236149_marshaled_pinvoke
{
	char* ___ResourceName_0;
	Il2CppIUnknown* ___ResourceValue_1;
};
// Native definition for COM marshalling of System.Resources.ResourceReader/ResourceCacheItem
struct ResourceCacheItem_t333236149_marshaled_com
{
	Il2CppChar* ___ResourceName_0;
	Il2CppIUnknown* ___ResourceValue_1;
};
#endif // RESOURCECACHEITEM_T333236149_H
#ifndef RESOURCEINFO_T3933049236_H
#define RESOURCEINFO_T3933049236_H
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.Reflection.TargetParameterCountException
struct  TargetParameterCountException_t2834415094  : public Exception_t3333768149
{
public:

public:
=======
// System.Resources.ResourceReader/ResourceInfo
struct  ResourceInfo_t3933049236 
{
public:
	// System.Int64 System.Resources.ResourceReader/ResourceInfo::ValuePosition
	int64_t ___ValuePosition_0;
	// System.String System.Resources.ResourceReader/ResourceInfo::ResourceName
	String_t* ___ResourceName_1;
	// System.Int32 System.Resources.ResourceReader/ResourceInfo::TypeIndex
	int32_t ___TypeIndex_2;

public:
	inline static int32_t get_offset_of_ValuePosition_0() { return static_cast<int32_t>(offsetof(ResourceInfo_t3933049236, ___ValuePosition_0)); }
	inline int64_t get_ValuePosition_0() const { return ___ValuePosition_0; }
	inline int64_t* get_address_of_ValuePosition_0() { return &___ValuePosition_0; }
	inline void set_ValuePosition_0(int64_t value)
	{
		___ValuePosition_0 = value;
	}

	inline static int32_t get_offset_of_ResourceName_1() { return static_cast<int32_t>(offsetof(ResourceInfo_t3933049236, ___ResourceName_1)); }
	inline String_t* get_ResourceName_1() const { return ___ResourceName_1; }
	inline String_t** get_address_of_ResourceName_1() { return &___ResourceName_1; }
	inline void set_ResourceName_1(String_t* value)
	{
		___ResourceName_1 = value;
		Il2CppCodeGenWriteBarrier((&___ResourceName_1), value);
	}

	inline static int32_t get_offset_of_TypeIndex_2() { return static_cast<int32_t>(offsetof(ResourceInfo_t3933049236, ___TypeIndex_2)); }
	inline int32_t get_TypeIndex_2() const { return ___TypeIndex_2; }
	inline int32_t* get_address_of_TypeIndex_2() { return &___TypeIndex_2; }
	inline void set_TypeIndex_2(int32_t value)
	{
		___TypeIndex_2 = value;
	}
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // TARGETPARAMETERCOUNTEXCEPTION_T2834415094_H
#ifndef CONTEXTATTRIBUTE_T1014916617_H
#define CONTEXTATTRIBUTE_T1014916617_H
=======
// Native definition for P/Invoke marshalling of System.Resources.ResourceReader/ResourceInfo
struct ResourceInfo_t3933049236_marshaled_pinvoke
{
	int64_t ___ValuePosition_0;
	char* ___ResourceName_1;
	int32_t ___TypeIndex_2;
};
// Native definition for COM marshalling of System.Resources.ResourceReader/ResourceInfo
struct ResourceInfo_t3933049236_marshaled_com
{
	int64_t ___ValuePosition_0;
	Il2CppChar* ___ResourceName_1;
	int32_t ___TypeIndex_2;
};
#endif // RESOURCEINFO_T3933049236_H
#ifndef CONTEXTATTRIBUTE_T197102333_H
#define CONTEXTATTRIBUTE_T197102333_H
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Contexts.ContextAttribute
<<<<<<< HEAD
struct  ContextAttribute_t1014916617  : public Attribute_t723177756
=======
struct  ContextAttribute_t197102333  : public Attribute_t542643598
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
{
public:
	// System.String System.Runtime.Remoting.Contexts.ContextAttribute::AttributeName
	String_t* ___AttributeName_0;

public:
<<<<<<< HEAD
	inline static int32_t get_offset_of_AttributeName_0() { return static_cast<int32_t>(offsetof(ContextAttribute_t1014916617, ___AttributeName_0)); }
=======
	inline static int32_t get_offset_of_AttributeName_0() { return static_cast<int32_t>(offsetof(ContextAttribute_t197102333, ___AttributeName_0)); }
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
	inline String_t* get_AttributeName_0() const { return ___AttributeName_0; }
	inline String_t** get_address_of_AttributeName_0() { return &___AttributeName_0; }
	inline void set_AttributeName_0(String_t* value)
	{
		___AttributeName_0 = value;
		Il2CppCodeGenWriteBarrier((&___AttributeName_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // CONTEXTATTRIBUTE_T1014916617_H
#ifndef NEUTRALRESOURCESLANGUAGEATTRIBUTE_T3296785026_H
#define NEUTRALRESOURCESLANGUAGEATTRIBUTE_T3296785026_H
=======
#endif // CONTEXTATTRIBUTE_T197102333_H
#ifndef NEUTRALRESOURCESLANGUAGEATTRIBUTE_T3267676636_H
#define NEUTRALRESOURCESLANGUAGEATTRIBUTE_T3267676636_H
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.NeutralResourcesLanguageAttribute
<<<<<<< HEAD
struct  NeutralResourcesLanguageAttribute_t3296785026  : public Attribute_t723177756
=======
struct  NeutralResourcesLanguageAttribute_t3267676636  : public Attribute_t542643598
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
{
public:
	// System.String System.Resources.NeutralResourcesLanguageAttribute::culture
	String_t* ___culture_0;

public:
<<<<<<< HEAD
	inline static int32_t get_offset_of_culture_0() { return static_cast<int32_t>(offsetof(NeutralResourcesLanguageAttribute_t3296785026, ___culture_0)); }
=======
	inline static int32_t get_offset_of_culture_0() { return static_cast<int32_t>(offsetof(NeutralResourcesLanguageAttribute_t3267676636, ___culture_0)); }
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
	inline String_t* get_culture_0() const { return ___culture_0; }
	inline String_t** get_address_of_culture_0() { return &___culture_0; }
	inline void set_culture_0(String_t* value)
	{
		___culture_0 = value;
		Il2CppCodeGenWriteBarrier((&___culture_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // NEUTRALRESOURCESLANGUAGEATTRIBUTE_T3296785026_H
#ifndef RESOURCEINFO_T2802195552_H
#define RESOURCEINFO_T2802195552_H
=======
#endif // NEUTRALRESOURCESLANGUAGEATTRIBUTE_T3267676636_H
#ifndef TARGETPARAMETERCOUNTEXCEPTION_T1554451430_H
#define TARGETPARAMETERCOUNTEXCEPTION_T1554451430_H
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.Resources.ResourceReader/ResourceInfo
struct  ResourceInfo_t2802195552 
{
public:
	// System.Int64 System.Resources.ResourceReader/ResourceInfo::ValuePosition
	int64_t ___ValuePosition_0;
	// System.String System.Resources.ResourceReader/ResourceInfo::ResourceName
	String_t* ___ResourceName_1;
	// System.Int32 System.Resources.ResourceReader/ResourceInfo::TypeIndex
	int32_t ___TypeIndex_2;

public:
	inline static int32_t get_offset_of_ValuePosition_0() { return static_cast<int32_t>(offsetof(ResourceInfo_t2802195552, ___ValuePosition_0)); }
	inline int64_t get_ValuePosition_0() const { return ___ValuePosition_0; }
	inline int64_t* get_address_of_ValuePosition_0() { return &___ValuePosition_0; }
	inline void set_ValuePosition_0(int64_t value)
	{
		___ValuePosition_0 = value;
	}

	inline static int32_t get_offset_of_ResourceName_1() { return static_cast<int32_t>(offsetof(ResourceInfo_t2802195552, ___ResourceName_1)); }
	inline String_t* get_ResourceName_1() const { return ___ResourceName_1; }
	inline String_t** get_address_of_ResourceName_1() { return &___ResourceName_1; }
	inline void set_ResourceName_1(String_t* value)
	{
		___ResourceName_1 = value;
		Il2CppCodeGenWriteBarrier((&___ResourceName_1), value);
	}

	inline static int32_t get_offset_of_TypeIndex_2() { return static_cast<int32_t>(offsetof(ResourceInfo_t2802195552, ___TypeIndex_2)); }
	inline int32_t get_TypeIndex_2() const { return ___TypeIndex_2; }
	inline int32_t* get_address_of_TypeIndex_2() { return &___TypeIndex_2; }
	inline void set_TypeIndex_2(int32_t value)
	{
		___TypeIndex_2 = value;
	}
=======
// System.Reflection.TargetParameterCountException
struct  TargetParameterCountException_t1554451430  : public Exception_t1927440687
{
public:

public:
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
// Native definition for P/Invoke marshalling of System.Resources.ResourceReader/ResourceInfo
struct ResourceInfo_t2802195552_marshaled_pinvoke
{
	int64_t ___ValuePosition_0;
	char* ___ResourceName_1;
	int32_t ___TypeIndex_2;
};
// Native definition for COM marshalling of System.Resources.ResourceReader/ResourceInfo
struct ResourceInfo_t2802195552_marshaled_com
{
	int64_t ___ValuePosition_0;
	Il2CppChar* ___ResourceName_1;
	int32_t ___TypeIndex_2;
};
#endif // RESOURCEINFO_T2802195552_H
#ifndef BESTFITMAPPINGATTRIBUTE_T1145538616_H
#define BESTFITMAPPINGATTRIBUTE_T1145538616_H
=======
#endif // TARGETPARAMETERCOUNTEXCEPTION_T1554451430_H
#ifndef TARGETINVOCATIONEXCEPTION_T4098620458_H
#define TARGETINVOCATIONEXCEPTION_T4098620458_H
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.Runtime.InteropServices.BestFitMappingAttribute
struct  BestFitMappingAttribute_t1145538616  : public Attribute_t723177756
{
public:
	// System.Boolean System.Runtime.InteropServices.BestFitMappingAttribute::bfm
	bool ___bfm_0;

public:
	inline static int32_t get_offset_of_bfm_0() { return static_cast<int32_t>(offsetof(BestFitMappingAttribute_t1145538616, ___bfm_0)); }
	inline bool get_bfm_0() const { return ___bfm_0; }
	inline bool* get_address_of_bfm_0() { return &___bfm_0; }
	inline void set_bfm_0(bool value)
	{
		___bfm_0 = value;
	}
=======
// System.Reflection.TargetInvocationException
struct  TargetInvocationException_t4098620458  : public Exception_t1927440687
{
public:

public:
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // BESTFITMAPPINGATTRIBUTE_T1145538616_H
#ifndef RESOURCECACHEITEM_T2850788348_H
#define RESOURCECACHEITEM_T2850788348_H
=======
#endif // TARGETINVOCATIONEXCEPTION_T4098620458_H
#ifndef TARGETEXCEPTION_T1572104820_H
#define TARGETEXCEPTION_T1572104820_H
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.Resources.ResourceReader/ResourceCacheItem
struct  ResourceCacheItem_t2850788348 
{
public:
	// System.String System.Resources.ResourceReader/ResourceCacheItem::ResourceName
	String_t* ___ResourceName_0;
	// System.Object System.Resources.ResourceReader/ResourceCacheItem::ResourceValue
	RuntimeObject * ___ResourceValue_1;

public:
	inline static int32_t get_offset_of_ResourceName_0() { return static_cast<int32_t>(offsetof(ResourceCacheItem_t2850788348, ___ResourceName_0)); }
	inline String_t* get_ResourceName_0() const { return ___ResourceName_0; }
	inline String_t** get_address_of_ResourceName_0() { return &___ResourceName_0; }
	inline void set_ResourceName_0(String_t* value)
	{
		___ResourceName_0 = value;
		Il2CppCodeGenWriteBarrier((&___ResourceName_0), value);
	}

	inline static int32_t get_offset_of_ResourceValue_1() { return static_cast<int32_t>(offsetof(ResourceCacheItem_t2850788348, ___ResourceValue_1)); }
	inline RuntimeObject * get_ResourceValue_1() const { return ___ResourceValue_1; }
	inline RuntimeObject ** get_address_of_ResourceValue_1() { return &___ResourceValue_1; }
	inline void set_ResourceValue_1(RuntimeObject * value)
	{
		___ResourceValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___ResourceValue_1), value);
	}
=======
// System.Reflection.TargetException
struct  TargetException_t1572104820  : public Exception_t1927440687
{
public:

public:
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
// Native definition for P/Invoke marshalling of System.Resources.ResourceReader/ResourceCacheItem
struct ResourceCacheItem_t2850788348_marshaled_pinvoke
{
	char* ___ResourceName_0;
	Il2CppIUnknown* ___ResourceValue_1;
};
// Native definition for COM marshalling of System.Resources.ResourceReader/ResourceCacheItem
struct ResourceCacheItem_t2850788348_marshaled_com
{
	Il2CppChar* ___ResourceName_0;
	Il2CppIUnknown* ___ResourceValue_1;
};
#endif // RESOURCECACHEITEM_T2850788348_H
#ifndef SATELLITECONTRACTVERSIONATTRIBUTE_T2215692676_H
#define SATELLITECONTRACTVERSIONATTRIBUTE_T2215692676_H
=======
#endif // TARGETEXCEPTION_T1572104820_H
#ifndef SATELLITECONTRACTVERSIONATTRIBUTE_T2989984391_H
#define SATELLITECONTRACTVERSIONATTRIBUTE_T2989984391_H
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.SatelliteContractVersionAttribute
<<<<<<< HEAD
struct  SatelliteContractVersionAttribute_t2215692676  : public Attribute_t723177756
{
public:
	// System.Version System.Resources.SatelliteContractVersionAttribute::ver
	Version_t3739396922 * ___ver_0;

public:
	inline static int32_t get_offset_of_ver_0() { return static_cast<int32_t>(offsetof(SatelliteContractVersionAttribute_t2215692676, ___ver_0)); }
	inline Version_t3739396922 * get_ver_0() const { return ___ver_0; }
	inline Version_t3739396922 ** get_address_of_ver_0() { return &___ver_0; }
	inline void set_ver_0(Version_t3739396922 * value)
=======
struct  SatelliteContractVersionAttribute_t2989984391  : public Attribute_t542643598
{
public:
	// System.Version System.Resources.SatelliteContractVersionAttribute::ver
	Version_t1755874712 * ___ver_0;

public:
	inline static int32_t get_offset_of_ver_0() { return static_cast<int32_t>(offsetof(SatelliteContractVersionAttribute_t2989984391, ___ver_0)); }
	inline Version_t1755874712 * get_ver_0() const { return ___ver_0; }
	inline Version_t1755874712 ** get_address_of_ver_0() { return &___ver_0; }
	inline void set_ver_0(Version_t1755874712 * value)
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
	{
		___ver_0 = value;
		Il2CppCodeGenWriteBarrier((&___ver_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // SATELLITECONTRACTVERSIONATTRIBUTE_T2215692676_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
=======
#endif // SATELLITECONTRACTVERSIONATTRIBUTE_T2989984391_H
#ifndef ENUM_T2459695545_H
#define ENUM_T2459695545_H
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
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
=======
// System.Enum
struct  Enum_t2459695545  : public ValueType_t3507792607
{
public:

public:
};

struct Enum_t2459695545_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t1328083999* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t2459695545_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t1328083999* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t1328083999** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t1328083999* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2459695545_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2459695545_marshaled_com
{
};
#endif // ENUM_T2459695545_H
#ifndef BESTFITMAPPINGATTRIBUTE_T1604378579_H
#define BESTFITMAPPINGATTRIBUTE_T1604378579_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.BestFitMappingAttribute
struct  BestFitMappingAttribute_t1604378579  : public Attribute_t542643598
{
public:
	// System.Boolean System.Runtime.InteropServices.BestFitMappingAttribute::bfm
	bool ___bfm_0;

public:
	inline static int32_t get_offset_of_bfm_0() { return static_cast<int32_t>(offsetof(BestFitMappingAttribute_t1604378579, ___bfm_0)); }
	inline bool get_bfm_0() const { return ___bfm_0; }
	inline bool* get_address_of_bfm_0() { return &___bfm_0; }
	inline void set_bfm_0(bool value)
	{
		___bfm_0 = value;
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // INTPTR_T_H
#ifndef WIN32VERSIONRESOURCE_T1923678358_H
#define WIN32VERSIONRESOURCE_T1923678358_H
=======
#endif // BESTFITMAPPINGATTRIBUTE_T1604378579_H
#ifndef STRINGFREEZINGATTRIBUTE_T2691375565_H
#define STRINGFREEZINGATTRIBUTE_T2691375565_H
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.Resources.Win32VersionResource
struct  Win32VersionResource_t1923678358  : public Win32Resource_t1698239717
=======
// System.Runtime.CompilerServices.StringFreezingAttribute
struct  StringFreezingAttribute_t2691375565  : public Attribute_t542643598
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // WIN32VERSIONRESOURCE_T1923678358_H
#ifndef SYSTEMEXCEPTION_T1403592601_H
#define SYSTEMEXCEPTION_T1403592601_H
=======
#endif // STRINGFREEZINGATTRIBUTE_T2691375565_H
#ifndef SYSTEMEXCEPTION_T3877406272_H
#define SYSTEMEXCEPTION_T3877406272_H
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
<<<<<<< HEAD
struct  SystemException_t1403592601  : public Exception_t3333768149
=======
struct  SystemException_t3877406272  : public Exception_t1927440687
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // SYSTEMEXCEPTION_T1403592601_H
#ifndef COMPILATIONRELAXATIONSATTRIBUTE_T1365295251_H
#define COMPILATIONRELAXATIONSATTRIBUTE_T1365295251_H
=======
#endif // SYSTEMEXCEPTION_T3877406272_H
#ifndef COMPILATIONRELAXATIONSATTRIBUTE_T238494011_H
#define COMPILATIONRELAXATIONSATTRIBUTE_T238494011_H
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
<<<<<<< HEAD
struct  CompilationRelaxationsAttribute_t1365295251  : public Attribute_t723177756
=======
struct  CompilationRelaxationsAttribute_t238494011  : public Attribute_t542643598
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
{
public:
	// System.Int32 System.Runtime.CompilerServices.CompilationRelaxationsAttribute::relax
	int32_t ___relax_0;

public:
<<<<<<< HEAD
	inline static int32_t get_offset_of_relax_0() { return static_cast<int32_t>(offsetof(CompilationRelaxationsAttribute_t1365295251, ___relax_0)); }
=======
	inline static int32_t get_offset_of_relax_0() { return static_cast<int32_t>(offsetof(CompilationRelaxationsAttribute_t238494011, ___relax_0)); }
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
	inline int32_t get_relax_0() const { return ___relax_0; }
	inline int32_t* get_address_of_relax_0() { return &___relax_0; }
	inline void set_relax_0(int32_t value)
	{
		___relax_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // COMPILATIONRELAXATIONSATTRIBUTE_T1365295251_H
#ifndef TYPELIBIMPORTCLASSATTRIBUTE_T1663284664_H
#define TYPELIBIMPORTCLASSATTRIBUTE_T1663284664_H
=======
#endif // COMPILATIONRELAXATIONSATTRIBUTE_T238494011_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.Runtime.InteropServices.TypeLibImportClassAttribute
struct  TypeLibImportClassAttribute_t1663284664  : public Attribute_t723177756
{
public:
	// System.String System.Runtime.InteropServices.TypeLibImportClassAttribute::_importClass
	String_t* ____importClass_0;

public:
	inline static int32_t get_offset_of__importClass_0() { return static_cast<int32_t>(offsetof(TypeLibImportClassAttribute_t1663284664, ____importClass_0)); }
	inline String_t* get__importClass_0() const { return ____importClass_0; }
	inline String_t** get_address_of__importClass_0() { return &____importClass_0; }
	inline void set__importClass_0(String_t* value)
	{
		____importClass_0 = value;
		Il2CppCodeGenWriteBarrier((&____importClass_0), value);
=======
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
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // TYPELIBIMPORTCLASSATTRIBUTE_T1663284664_H
#ifndef RUNTIMERESOURCESET_T326793075_H
#define RUNTIMERESOURCESET_T326793075_H
=======
#endif // INTPTR_T_H
#ifndef WIN32VERSIONRESOURCE_T548350325_H
#define WIN32VERSIONRESOURCE_T548350325_H
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.Resources.RuntimeResourceSet
struct  RuntimeResourceSet_t326793075  : public ResourceSet_t2945760440
=======
// System.Resources.Win32VersionResource
struct  Win32VersionResource_t548350325  : public Win32Resource_t2185668907
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // RUNTIMERESOURCESET_T326793075_H
#ifndef TYPELIBVERSIONATTRIBUTE_T2944955417_H
#define TYPELIBVERSIONATTRIBUTE_T2944955417_H
=======
#endif // WIN32VERSIONRESOURCE_T548350325_H
#ifndef BINDINGFLAGS_T1082350898_H
#define BINDINGFLAGS_T1082350898_H
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.Runtime.InteropServices.TypeLibVersionAttribute
struct  TypeLibVersionAttribute_t2944955417  : public Attribute_t723177756
{
public:
	// System.Int32 System.Runtime.InteropServices.TypeLibVersionAttribute::major
	int32_t ___major_0;
	// System.Int32 System.Runtime.InteropServices.TypeLibVersionAttribute::minor
	int32_t ___minor_1;

public:
	inline static int32_t get_offset_of_major_0() { return static_cast<int32_t>(offsetof(TypeLibVersionAttribute_t2944955417, ___major_0)); }
	inline int32_t get_major_0() const { return ___major_0; }
	inline int32_t* get_address_of_major_0() { return &___major_0; }
	inline void set_major_0(int32_t value)
	{
		___major_0 = value;
	}

	inline static int32_t get_offset_of_minor_1() { return static_cast<int32_t>(offsetof(TypeLibVersionAttribute_t2944955417, ___minor_1)); }
	inline int32_t get_minor_1() const { return ___minor_1; }
	inline int32_t* get_address_of_minor_1() { return &___minor_1; }
	inline void set_minor_1(int32_t value)
	{
		___minor_1 = value;
=======
// System.Reflection.BindingFlags
struct  BindingFlags_t1082350898 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BindingFlags_t1082350898, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // TYPELIBVERSIONATTRIBUTE_T2944955417_H
#ifndef URLATTRIBUTE_T4151014314_H
#define URLATTRIBUTE_T4151014314_H
=======
#endif // BINDINGFLAGS_T1082350898_H
#ifndef URLATTRIBUTE_T1544437301_H
#define URLATTRIBUTE_T1544437301_H
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Activation.UrlAttribute
<<<<<<< HEAD
struct  UrlAttribute_t4151014314  : public ContextAttribute_t1014916617
=======
struct  UrlAttribute_t1544437301  : public ContextAttribute_t197102333
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
{
public:
	// System.String System.Runtime.Remoting.Activation.UrlAttribute::url
	String_t* ___url_1;

public:
<<<<<<< HEAD
	inline static int32_t get_offset_of_url_1() { return static_cast<int32_t>(offsetof(UrlAttribute_t4151014314, ___url_1)); }
=======
	inline static int32_t get_offset_of_url_1() { return static_cast<int32_t>(offsetof(UrlAttribute_t1544437301, ___url_1)); }
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
	inline String_t* get_url_1() const { return ___url_1; }
	inline String_t** get_address_of_url_1() { return &___url_1; }
	inline void set_url_1(String_t* value)
	{
		___url_1 = value;
		Il2CppCodeGenWriteBarrier((&___url_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // URLATTRIBUTE_T4151014314_H
#ifndef UNMANAGEDTYPE_T1225976977_H
#define UNMANAGEDTYPE_T1225976977_H
=======
#endif // URLATTRIBUTE_T1544437301_H
#ifndef UNMANAGEDTYPE_T2550630890_H
#define UNMANAGEDTYPE_T2550630890_H
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.UnmanagedType
<<<<<<< HEAD
struct  UnmanagedType_t1225976977 
=======
struct  UnmanagedType_t2550630890 
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
{
public:
	// System.Int32 System.Runtime.InteropServices.UnmanagedType::value__
	int32_t ___value___1;

public:
<<<<<<< HEAD
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UnmanagedType_t1225976977, ___value___1)); }
=======
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UnmanagedType_t2550630890, ___value___1)); }
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
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
#endif // UNMANAGEDTYPE_T1225976977_H
#ifndef RESOURCEATTRIBUTES_T3686395807_H
#define RESOURCEATTRIBUTES_T3686395807_H
=======
#endif // UNMANAGEDTYPE_T2550630890_H
#ifndef CHARSET_T2778376310_H
#define CHARSET_T2778376310_H
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.Reflection.ResourceAttributes
struct  ResourceAttributes_t3686395807 
{
public:
	// System.Int32 System.Reflection.ResourceAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ResourceAttributes_t3686395807, ___value___1)); }
=======
// System.Runtime.InteropServices.CharSet
struct  CharSet_t2778376310 
{
public:
	// System.Int32 System.Runtime.InteropServices.CharSet::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CharSet_t2778376310, ___value___1)); }
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
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
#endif // RESOURCEATTRIBUTES_T3686395807_H
#ifndef SAFEHANDLE_T1903725777_H
#define SAFEHANDLE_T1903725777_H
=======
#endif // CHARSET_T2778376310_H
#ifndef CALLINGCONVENTION_T3354538265_H
#define CALLINGCONVENTION_T3354538265_H
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.Runtime.InteropServices.SafeHandle
struct  SafeHandle_t1903725777  : public CriticalFinalizerObject_t4186809588
{
public:
	// System.IntPtr System.Runtime.InteropServices.SafeHandle::handle
	intptr_t ___handle_0;
	// System.IntPtr System.Runtime.InteropServices.SafeHandle::invalid_handle_value
	intptr_t ___invalid_handle_value_1;
	// System.Int32 System.Runtime.InteropServices.SafeHandle::refcount
	int32_t ___refcount_2;
	// System.Boolean System.Runtime.InteropServices.SafeHandle::owns_handle
	bool ___owns_handle_3;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(SafeHandle_t1903725777, ___handle_0)); }
	inline intptr_t get_handle_0() const { return ___handle_0; }
	inline intptr_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(intptr_t value)
	{
		___handle_0 = value;
	}

	inline static int32_t get_offset_of_invalid_handle_value_1() { return static_cast<int32_t>(offsetof(SafeHandle_t1903725777, ___invalid_handle_value_1)); }
	inline intptr_t get_invalid_handle_value_1() const { return ___invalid_handle_value_1; }
	inline intptr_t* get_address_of_invalid_handle_value_1() { return &___invalid_handle_value_1; }
	inline void set_invalid_handle_value_1(intptr_t value)
	{
		___invalid_handle_value_1 = value;
	}

	inline static int32_t get_offset_of_refcount_2() { return static_cast<int32_t>(offsetof(SafeHandle_t1903725777, ___refcount_2)); }
	inline int32_t get_refcount_2() const { return ___refcount_2; }
	inline int32_t* get_address_of_refcount_2() { return &___refcount_2; }
	inline void set_refcount_2(int32_t value)
	{
		___refcount_2 = value;
	}

	inline static int32_t get_offset_of_owns_handle_3() { return static_cast<int32_t>(offsetof(SafeHandle_t1903725777, ___owns_handle_3)); }
	inline bool get_owns_handle_3() const { return ___owns_handle_3; }
	inline bool* get_address_of_owns_handle_3() { return &___owns_handle_3; }
	inline void set_owns_handle_3(bool value)
	{
		___owns_handle_3 = value;
=======
// System.Runtime.InteropServices.CallingConvention
struct  CallingConvention_t3354538265 
{
public:
	// System.Int32 System.Runtime.InteropServices.CallingConvention::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CallingConvention_t3354538265, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // SAFEHANDLE_T1903725777_H
#ifndef TYPEATTRIBUTES_T3368447971_H
#define TYPEATTRIBUTES_T3368447971_H
=======
#endif // CALLINGCONVENTION_T3354538265_H
#ifndef CONSISTENCY_T1390725888_H
#define CONSISTENCY_T1390725888_H
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.Reflection.TypeAttributes
struct  TypeAttributes_t3368447971 
{
public:
	// System.Int32 System.Reflection.TypeAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TypeAttributes_t3368447971, ___value___1)); }
=======
// System.Runtime.ConstrainedExecution.Consistency
struct  Consistency_t1390725888 
{
public:
	// System.Int32 System.Runtime.ConstrainedExecution.Consistency::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Consistency_t1390725888, ___value___1)); }
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
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
#endif // TYPEATTRIBUTES_T3368447971_H
#ifndef PREDEFINEDRESOURCETYPE_T3139386999_H
#define PREDEFINEDRESOURCETYPE_T3139386999_H
=======
#endif // CONSISTENCY_T1390725888_H
#ifndef CER_T2101567438_H
#define CER_T2101567438_H
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.Resources.PredefinedResourceType
struct  PredefinedResourceType_t3139386999 
{
public:
	// System.Int32 System.Resources.PredefinedResourceType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PredefinedResourceType_t3139386999, ___value___1)); }
=======
// System.Runtime.ConstrainedExecution.Cer
struct  Cer_t2101567438 
{
public:
	// System.Int32 System.Runtime.ConstrainedExecution.Cer::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Cer_t2101567438, ___value___1)); }
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
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
#endif // PREDEFINEDRESOURCETYPE_T3139386999_H
#ifndef WIN32RESOURCETYPE_T988464197_H
#define WIN32RESOURCETYPE_T988464197_H
=======
#endif // CER_T2101567438_H
#ifndef LOADHINT_T3781660191_H
#define LOADHINT_T3781660191_H
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.Resources.Win32ResourceType
struct  Win32ResourceType_t988464197 
{
public:
	// System.Int32 System.Resources.Win32ResourceType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Win32ResourceType_t988464197, ___value___1)); }
=======
// System.Runtime.CompilerServices.LoadHint
struct  LoadHint_t3781660191 
{
public:
	// System.Int32 System.Runtime.CompilerServices.LoadHint::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LoadHint_t3781660191, ___value___1)); }
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
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
#endif // WIN32RESOURCETYPE_T988464197_H
#ifndef COMPILATIONRELAXATIONS_T3217016942_H
#define COMPILATIONRELAXATIONS_T3217016942_H
=======
#endif // LOADHINT_T3781660191_H
#ifndef COMPILATIONRELAXATIONS_T4211964247_H
#define COMPILATIONRELAXATIONS_T4211964247_H
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.CompilationRelaxations
<<<<<<< HEAD
struct  CompilationRelaxations_t3217016942 
=======
struct  CompilationRelaxations_t4211964247 
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
{
public:
	// System.Int32 System.Runtime.CompilerServices.CompilationRelaxations::value__
	int32_t ___value___1;

public:
<<<<<<< HEAD
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CompilationRelaxations_t3217016942, ___value___1)); }
=======
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CompilationRelaxations_t4211964247, ___value___1)); }
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
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
#endif // COMPILATIONRELAXATIONS_T3217016942_H
#ifndef LOADHINT_T1485122652_H
#define LOADHINT_T1485122652_H
=======
#endif // COMPILATIONRELAXATIONS_T4211964247_H
#ifndef WIN32RESOURCETYPE_T130810739_H
#define WIN32RESOURCETYPE_T130810739_H
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.Runtime.CompilerServices.LoadHint
struct  LoadHint_t1485122652 
{
public:
	// System.Int32 System.Runtime.CompilerServices.LoadHint::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LoadHint_t1485122652, ___value___1)); }
=======
// System.Resources.Win32ResourceType
struct  Win32ResourceType_t130810739 
{
public:
	// System.Int32 System.Resources.Win32ResourceType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Win32ResourceType_t130810739, ___value___1)); }
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
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
#endif // LOADHINT_T1485122652_H
#ifndef CER_T3750493428_H
#define CER_T3750493428_H
=======
#endif // WIN32RESOURCETYPE_T130810739_H
#ifndef PREDEFINEDRESOURCETYPE_T3623697780_H
#define PREDEFINEDRESOURCETYPE_T3623697780_H
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.Runtime.ConstrainedExecution.Cer
struct  Cer_t3750493428 
{
public:
	// System.Int32 System.Runtime.ConstrainedExecution.Cer::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Cer_t3750493428, ___value___1)); }
=======
// System.Resources.PredefinedResourceType
struct  PredefinedResourceType_t3623697780 
{
public:
	// System.Int32 System.Resources.PredefinedResourceType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PredefinedResourceType_t3623697780, ___value___1)); }
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
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
#endif // CER_T3750493428_H
#ifndef CONSISTENCY_T15520487_H
#define CONSISTENCY_T15520487_H
=======
#endif // PREDEFINEDRESOURCETYPE_T3623697780_H
#ifndef TYPEATTRIBUTES_T2229518203_H
#define TYPEATTRIBUTES_T2229518203_H
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.Runtime.ConstrainedExecution.Consistency
struct  Consistency_t15520487 
{
public:
	// System.Int32 System.Runtime.ConstrainedExecution.Consistency::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Consistency_t15520487, ___value___1)); }
=======
// System.Reflection.TypeAttributes
struct  TypeAttributes_t2229518203 
{
public:
	// System.Int32 System.Reflection.TypeAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TypeAttributes_t2229518203, ___value___1)); }
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
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
#endif // CONSISTENCY_T15520487_H
#ifndef CALLINGCONVENTION_T1401592305_H
#define CALLINGCONVENTION_T1401592305_H
=======
#endif // TYPEATTRIBUTES_T2229518203_H
#ifndef EXTERNALEXCEPTION_T1252662682_H
#define EXTERNALEXCEPTION_T1252662682_H
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.Runtime.InteropServices.CallingConvention
struct  CallingConvention_t1401592305 
{
public:
	// System.Int32 System.Runtime.InteropServices.CallingConvention::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CallingConvention_t1401592305, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
=======
// System.Runtime.InteropServices.ExternalException
struct  ExternalException_t1252662682  : public SystemException_t3877406272
{
public:

public:
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // CALLINGCONVENTION_T1401592305_H
#ifndef RUNTIMETYPEHANDLE_T1285733734_H
#define RUNTIMETYPEHANDLE_T1285733734_H
=======
#endif // EXTERNALEXCEPTION_T1252662682_H
#ifndef SAFEHANDLE_T2733794115_H
#define SAFEHANDLE_T2733794115_H
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t1285733734 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t1285733734, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
=======
// System.Runtime.InteropServices.SafeHandle
struct  SafeHandle_t2733794115  : public CriticalFinalizerObject_t1920899984
{
public:
	// System.IntPtr System.Runtime.InteropServices.SafeHandle::handle
	intptr_t ___handle_0;
	// System.IntPtr System.Runtime.InteropServices.SafeHandle::invalid_handle_value
	intptr_t ___invalid_handle_value_1;
	// System.Int32 System.Runtime.InteropServices.SafeHandle::refcount
	int32_t ___refcount_2;
	// System.Boolean System.Runtime.InteropServices.SafeHandle::owns_handle
	bool ___owns_handle_3;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(SafeHandle_t2733794115, ___handle_0)); }
	inline intptr_t get_handle_0() const { return ___handle_0; }
	inline intptr_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(intptr_t value)
	{
		___handle_0 = value;
	}

	inline static int32_t get_offset_of_invalid_handle_value_1() { return static_cast<int32_t>(offsetof(SafeHandle_t2733794115, ___invalid_handle_value_1)); }
	inline intptr_t get_invalid_handle_value_1() const { return ___invalid_handle_value_1; }
	inline intptr_t* get_address_of_invalid_handle_value_1() { return &___invalid_handle_value_1; }
	inline void set_invalid_handle_value_1(intptr_t value)
	{
		___invalid_handle_value_1 = value;
	}

	inline static int32_t get_offset_of_refcount_2() { return static_cast<int32_t>(offsetof(SafeHandle_t2733794115, ___refcount_2)); }
	inline int32_t get_refcount_2() const { return ___refcount_2; }
	inline int32_t* get_address_of_refcount_2() { return &___refcount_2; }
	inline void set_refcount_2(int32_t value)
	{
		___refcount_2 = value;
	}

	inline static int32_t get_offset_of_owns_handle_3() { return static_cast<int32_t>(offsetof(SafeHandle_t2733794115, ___owns_handle_3)); }
	inline bool get_owns_handle_3() const { return ___owns_handle_3; }
	inline bool* get_address_of_owns_handle_3() { return &___owns_handle_3; }
	inline void set_owns_handle_3(bool value)
	{
		___owns_handle_3 = value;
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // RUNTIMETYPEHANDLE_T1285733734_H
#ifndef CLASSINTERFACETYPE_T2523706223_H
#define CLASSINTERFACETYPE_T2523706223_H
=======
#endif // SAFEHANDLE_T2733794115_H
#ifndef MARSHALDIRECTIVEEXCEPTION_T1326890414_H
#define MARSHALDIRECTIVEEXCEPTION_T1326890414_H
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.Runtime.InteropServices.ClassInterfaceType
struct  ClassInterfaceType_t2523706223 
{
public:
	// System.Int32 System.Runtime.InteropServices.ClassInterfaceType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ClassInterfaceType_t2523706223, ___value___1)); }
=======
// System.Runtime.InteropServices.MarshalDirectiveException
struct  MarshalDirectiveException_t1326890414  : public SystemException_t3877406272
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHALDIRECTIVEEXCEPTION_T1326890414_H
#ifndef GCHANDLETYPE_T1970708122_H
#define GCHANDLETYPE_T1970708122_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.GCHandleType
struct  GCHandleType_t1970708122 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandleType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(GCHandleType_t1970708122, ___value___1)); }
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
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
#endif // CLASSINTERFACETYPE_T2523706223_H
#ifndef BINDINGFLAGS_T472809067_H
#define BINDINGFLAGS_T472809067_H
=======
#endif // GCHANDLETYPE_T1970708122_H
#ifndef RUNTIMETYPEHANDLE_T2330101084_H
#define RUNTIMETYPEHANDLE_T2330101084_H
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.Reflection.BindingFlags
struct  BindingFlags_t472809067 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BindingFlags_t472809067, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
=======
// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t2330101084 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t2330101084, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // BINDINGFLAGS_T472809067_H
#ifndef COMINTERFACETYPE_T693570889_H
#define COMINTERFACETYPE_T693570889_H
=======
#endif // RUNTIMETYPEHANDLE_T2330101084_H
#ifndef COMINTERFACETYPE_T1898221498_H
#define COMINTERFACETYPE_T1898221498_H
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ComInterfaceType
<<<<<<< HEAD
struct  ComInterfaceType_t693570889 
=======
struct  ComInterfaceType_t1898221498 
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
{
public:
	// System.Int32 System.Runtime.InteropServices.ComInterfaceType::value__
	int32_t ___value___1;

public:
<<<<<<< HEAD
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ComInterfaceType_t693570889, ___value___1)); }
=======
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ComInterfaceType_t1898221498, ___value___1)); }
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
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
#endif // COMINTERFACETYPE_T693570889_H
#ifndef EXTERNALEXCEPTION_T1977152776_H
#define EXTERNALEXCEPTION_T1977152776_H
=======
#endif // COMINTERFACETYPE_T1898221498_H
#ifndef CLASSINTERFACETYPE_T295178211_H
#define CLASSINTERFACETYPE_T295178211_H
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.Runtime.InteropServices.ExternalException
struct  ExternalException_t1977152776  : public SystemException_t1403592601
{
public:

public:
=======
// System.Runtime.InteropServices.ClassInterfaceType
struct  ClassInterfaceType_t295178211 
{
public:
	// System.Int32 System.Runtime.InteropServices.ClassInterfaceType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ClassInterfaceType_t295178211, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // EXTERNALEXCEPTION_T1977152776_H
#ifndef GCHANDLETYPE_T2496360846_H
#define GCHANDLETYPE_T2496360846_H
=======
#endif // CLASSINTERFACETYPE_T295178211_H
#ifndef RESOURCEATTRIBUTES_T2389678029_H
#define RESOURCEATTRIBUTES_T2389678029_H
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.Runtime.InteropServices.GCHandleType
struct  GCHandleType_t2496360846 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandleType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(GCHandleType_t2496360846, ___value___1)); }
=======
// System.Reflection.ResourceAttributes
struct  ResourceAttributes_t2389678029 
{
public:
	// System.Int32 System.Reflection.ResourceAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ResourceAttributes_t2389678029, ___value___1)); }
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
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
#endif // GCHANDLETYPE_T2496360846_H
#ifndef MARSHALDIRECTIVEEXCEPTION_T458284932_H
#define MARSHALDIRECTIVEEXCEPTION_T458284932_H
=======
#endif // RESOURCEATTRIBUTES_T2389678029_H
#ifndef UNMANAGEDFUNCTIONPOINTERATTRIBUTE_T1696564987_H
#define UNMANAGEDFUNCTIONPOINTERATTRIBUTE_T1696564987_H
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.Runtime.InteropServices.MarshalDirectiveException
struct  MarshalDirectiveException_t458284932  : public SystemException_t1403592601
{
public:

public:
=======
// System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute
struct  UnmanagedFunctionPointerAttribute_t1696564987  : public Attribute_t542643598
{
public:
	// System.Runtime.InteropServices.CallingConvention System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute::call_conv
	int32_t ___call_conv_0;

public:
	inline static int32_t get_offset_of_call_conv_0() { return static_cast<int32_t>(offsetof(UnmanagedFunctionPointerAttribute_t1696564987, ___call_conv_0)); }
	inline int32_t get_call_conv_0() const { return ___call_conv_0; }
	inline int32_t* get_address_of_call_conv_0() { return &___call_conv_0; }
	inline void set_call_conv_0(int32_t value)
	{
		___call_conv_0 = value;
	}
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // MARSHALDIRECTIVEEXCEPTION_T458284932_H
#ifndef CHARSET_T2074764021_H
#define CHARSET_T2074764021_H
=======
#endif // UNMANAGEDFUNCTIONPOINTERATTRIBUTE_T1696564987_H
#ifndef INTERFACETYPEATTRIBUTE_T4113096249_H
#define INTERFACETYPEATTRIBUTE_T4113096249_H
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.Runtime.InteropServices.CharSet
struct  CharSet_t2074764021 
{
public:
	// System.Int32 System.Runtime.InteropServices.CharSet::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CharSet_t2074764021, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
=======
// System.Runtime.InteropServices.InterfaceTypeAttribute
struct  InterfaceTypeAttribute_t4113096249  : public Attribute_t542643598
{
public:
	// System.Runtime.InteropServices.ComInterfaceType System.Runtime.InteropServices.InterfaceTypeAttribute::intType
	int32_t ___intType_0;

public:
	inline static int32_t get_offset_of_intType_0() { return static_cast<int32_t>(offsetof(InterfaceTypeAttribute_t4113096249, ___intType_0)); }
	inline int32_t get_intType_0() const { return ___intType_0; }
	inline int32_t* get_address_of_intType_0() { return &___intType_0; }
	inline void set_intType_0(int32_t value)
	{
		___intType_0 = value;
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // CHARSET_T2074764021_H
#ifndef CLASSINTERFACEATTRIBUTE_T3851060312_H
#define CLASSINTERFACEATTRIBUTE_T3851060312_H
=======
#endif // INTERFACETYPEATTRIBUTE_T4113096249_H
#ifndef DEFAULTDEPENDENCYATTRIBUTE_T3858269114_H
#define DEFAULTDEPENDENCYATTRIBUTE_T3858269114_H
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.Runtime.InteropServices.ClassInterfaceAttribute
struct  ClassInterfaceAttribute_t3851060312  : public Attribute_t723177756
{
public:
	// System.Runtime.InteropServices.ClassInterfaceType System.Runtime.InteropServices.ClassInterfaceAttribute::ciType
	int32_t ___ciType_0;

public:
	inline static int32_t get_offset_of_ciType_0() { return static_cast<int32_t>(offsetof(ClassInterfaceAttribute_t3851060312, ___ciType_0)); }
	inline int32_t get_ciType_0() const { return ___ciType_0; }
	inline int32_t* get_address_of_ciType_0() { return &___ciType_0; }
	inline void set_ciType_0(int32_t value)
	{
		___ciType_0 = value;
=======
// System.Runtime.CompilerServices.DefaultDependencyAttribute
struct  DefaultDependencyAttribute_t3858269114  : public Attribute_t542643598
{
public:
	// System.Runtime.CompilerServices.LoadHint System.Runtime.CompilerServices.DefaultDependencyAttribute::hint
	int32_t ___hint_0;

public:
	inline static int32_t get_offset_of_hint_0() { return static_cast<int32_t>(offsetof(DefaultDependencyAttribute_t3858269114, ___hint_0)); }
	inline int32_t get_hint_0() const { return ___hint_0; }
	inline int32_t* get_address_of_hint_0() { return &___hint_0; }
	inline void set_hint_0(int32_t value)
	{
		___hint_0 = value;
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // CLASSINTERFACEATTRIBUTE_T3851060312_H
#ifndef COMEXCEPTION_T2603905749_H
#define COMEXCEPTION_T2603905749_H
=======
#endif // DEFAULTDEPENDENCYATTRIBUTE_T3858269114_H
#ifndef COMEXCEPTION_T1790481504_H
#define COMEXCEPTION_T1790481504_H
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.COMException
<<<<<<< HEAD
struct  COMException_t2603905749  : public ExternalException_t1977152776
=======
struct  COMException_t1790481504  : public ExternalException_t1252662682
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // COMEXCEPTION_T2603905749_H
#ifndef UNMANAGEDFUNCTIONPOINTERATTRIBUTE_T3413099606_H
#define UNMANAGEDFUNCTIONPOINTERATTRIBUTE_T3413099606_H
=======
#endif // COMEXCEPTION_T1790481504_H
#ifndef RELIABILITYCONTRACTATTRIBUTE_T1625655220_H
#define RELIABILITYCONTRACTATTRIBUTE_T1625655220_H
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute
struct  UnmanagedFunctionPointerAttribute_t3413099606  : public Attribute_t723177756
{
public:
	// System.Runtime.InteropServices.CallingConvention System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute::call_conv
	int32_t ___call_conv_0;

public:
	inline static int32_t get_offset_of_call_conv_0() { return static_cast<int32_t>(offsetof(UnmanagedFunctionPointerAttribute_t3413099606, ___call_conv_0)); }
	inline int32_t get_call_conv_0() const { return ___call_conv_0; }
	inline int32_t* get_address_of_call_conv_0() { return &___call_conv_0; }
	inline void set_call_conv_0(int32_t value)
	{
		___call_conv_0 = value;
=======
// System.Runtime.ConstrainedExecution.ReliabilityContractAttribute
struct  ReliabilityContractAttribute_t1625655220  : public Attribute_t542643598
{
public:
	// System.Runtime.ConstrainedExecution.Consistency System.Runtime.ConstrainedExecution.ReliabilityContractAttribute::consistency
	int32_t ___consistency_0;
	// System.Runtime.ConstrainedExecution.Cer System.Runtime.ConstrainedExecution.ReliabilityContractAttribute::cer
	int32_t ___cer_1;

public:
	inline static int32_t get_offset_of_consistency_0() { return static_cast<int32_t>(offsetof(ReliabilityContractAttribute_t1625655220, ___consistency_0)); }
	inline int32_t get_consistency_0() const { return ___consistency_0; }
	inline int32_t* get_address_of_consistency_0() { return &___consistency_0; }
	inline void set_consistency_0(int32_t value)
	{
		___consistency_0 = value;
	}

	inline static int32_t get_offset_of_cer_1() { return static_cast<int32_t>(offsetof(ReliabilityContractAttribute_t1625655220, ___cer_1)); }
	inline int32_t get_cer_1() const { return ___cer_1; }
	inline int32_t* get_address_of_cer_1() { return &___cer_1; }
	inline void set_cer_1(int32_t value)
	{
		___cer_1 = value;
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // UNMANAGEDFUNCTIONPOINTERATTRIBUTE_T3413099606_H
=======
#endif // RELIABILITYCONTRACTATTRIBUTE_T1625655220_H
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
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
	RuntimeTypeHandle_t1285733734  ____impl_1;

public:
	inline static int32_t get_offset_of__impl_1() { return static_cast<int32_t>(offsetof(Type_t, ____impl_1)); }
	inline RuntimeTypeHandle_t1285733734  get__impl_1() const { return ____impl_1; }
	inline RuntimeTypeHandle_t1285733734 * get_address_of__impl_1() { return &____impl_1; }
	inline void set__impl_1(RuntimeTypeHandle_t1285733734  value)
=======
	RuntimeTypeHandle_t2330101084  ____impl_1;

public:
	inline static int32_t get_offset_of__impl_1() { return static_cast<int32_t>(offsetof(Type_t, ____impl_1)); }
	inline RuntimeTypeHandle_t2330101084  get__impl_1() const { return ____impl_1; }
	inline RuntimeTypeHandle_t2330101084 * get_address_of__impl_1() { return &____impl_1; }
	inline void set__impl_1(RuntimeTypeHandle_t2330101084  value)
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
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
	TypeU5BU5D_t2699442290* ___EmptyTypes_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t1195501566 * ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t1195501566 * ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t1195501566 * ___FilterNameIgnoreCase_6;
=======
	TypeU5BU5D_t1664964607* ___EmptyTypes_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t3405857066 * ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t3405857066 * ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t3405857066 * ___FilterNameIgnoreCase_6;
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
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
	inline TypeU5BU5D_t2699442290* get_EmptyTypes_3() const { return ___EmptyTypes_3; }
	inline TypeU5BU5D_t2699442290** get_address_of_EmptyTypes_3() { return &___EmptyTypes_3; }
	inline void set_EmptyTypes_3(TypeU5BU5D_t2699442290* value)
=======
	inline TypeU5BU5D_t1664964607* get_EmptyTypes_3() const { return ___EmptyTypes_3; }
	inline TypeU5BU5D_t1664964607** get_address_of_EmptyTypes_3() { return &___EmptyTypes_3; }
	inline void set_EmptyTypes_3(TypeU5BU5D_t1664964607* value)
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
	{
		___EmptyTypes_3 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_3), value);
	}

	inline static int32_t get_offset_of_FilterAttribute_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_4)); }
<<<<<<< HEAD
	inline MemberFilter_t1195501566 * get_FilterAttribute_4() const { return ___FilterAttribute_4; }
	inline MemberFilter_t1195501566 ** get_address_of_FilterAttribute_4() { return &___FilterAttribute_4; }
	inline void set_FilterAttribute_4(MemberFilter_t1195501566 * value)
=======
	inline MemberFilter_t3405857066 * get_FilterAttribute_4() const { return ___FilterAttribute_4; }
	inline MemberFilter_t3405857066 ** get_address_of_FilterAttribute_4() { return &___FilterAttribute_4; }
	inline void set_FilterAttribute_4(MemberFilter_t3405857066 * value)
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
	{
		___FilterAttribute_4 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_4), value);
	}

	inline static int32_t get_offset_of_FilterName_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_5)); }
<<<<<<< HEAD
	inline MemberFilter_t1195501566 * get_FilterName_5() const { return ___FilterName_5; }
	inline MemberFilter_t1195501566 ** get_address_of_FilterName_5() { return &___FilterName_5; }
	inline void set_FilterName_5(MemberFilter_t1195501566 * value)
=======
	inline MemberFilter_t3405857066 * get_FilterName_5() const { return ___FilterName_5; }
	inline MemberFilter_t3405857066 ** get_address_of_FilterName_5() { return &___FilterName_5; }
	inline void set_FilterName_5(MemberFilter_t3405857066 * value)
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
	{
		___FilterName_5 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_5), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_6)); }
<<<<<<< HEAD
	inline MemberFilter_t1195501566 * get_FilterNameIgnoreCase_6() const { return ___FilterNameIgnoreCase_6; }
	inline MemberFilter_t1195501566 ** get_address_of_FilterNameIgnoreCase_6() { return &___FilterNameIgnoreCase_6; }
	inline void set_FilterNameIgnoreCase_6(MemberFilter_t1195501566 * value)
=======
	inline MemberFilter_t3405857066 * get_FilterNameIgnoreCase_6() const { return ___FilterNameIgnoreCase_6; }
	inline MemberFilter_t3405857066 ** get_address_of_FilterNameIgnoreCase_6() { return &___FilterNameIgnoreCase_6; }
	inline void set_FilterNameIgnoreCase_6(MemberFilter_t3405857066 * value)
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
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
<<<<<<< HEAD
#ifndef DEFAULTDEPENDENCYATTRIBUTE_T351313417_H
#define DEFAULTDEPENDENCYATTRIBUTE_T351313417_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.DefaultDependencyAttribute
struct  DefaultDependencyAttribute_t351313417  : public Attribute_t723177756
{
public:
	// System.Runtime.CompilerServices.LoadHint System.Runtime.CompilerServices.DefaultDependencyAttribute::hint
	int32_t ___hint_0;

public:
	inline static int32_t get_offset_of_hint_0() { return static_cast<int32_t>(offsetof(DefaultDependencyAttribute_t351313417, ___hint_0)); }
	inline int32_t get_hint_0() const { return ___hint_0; }
	inline int32_t* get_address_of_hint_0() { return &___hint_0; }
	inline void set_hint_0(int32_t value)
	{
		___hint_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTDEPENDENCYATTRIBUTE_T351313417_H
#ifndef INTERFACETYPEATTRIBUTE_T906192402_H
#define INTERFACETYPEATTRIBUTE_T906192402_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.InterfaceTypeAttribute
struct  InterfaceTypeAttribute_t906192402  : public Attribute_t723177756
{
public:
	// System.Runtime.InteropServices.ComInterfaceType System.Runtime.InteropServices.InterfaceTypeAttribute::intType
	int32_t ___intType_0;

public:
	inline static int32_t get_offset_of_intType_0() { return static_cast<int32_t>(offsetof(InterfaceTypeAttribute_t906192402, ___intType_0)); }
	inline int32_t get_intType_0() const { return ___intType_0; }
	inline int32_t* get_address_of_intType_0() { return &___intType_0; }
	inline void set_intType_0(int32_t value)
	{
		___intType_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERFACETYPEATTRIBUTE_T906192402_H
#ifndef RELIABILITYCONTRACTATTRIBUTE_T2491659127_H
#define RELIABILITYCONTRACTATTRIBUTE_T2491659127_H
=======
#ifndef CLASSINTERFACEATTRIBUTE_T910653559_H
#define CLASSINTERFACEATTRIBUTE_T910653559_H
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.Runtime.ConstrainedExecution.ReliabilityContractAttribute
struct  ReliabilityContractAttribute_t2491659127  : public Attribute_t723177756
{
public:
	// System.Runtime.ConstrainedExecution.Consistency System.Runtime.ConstrainedExecution.ReliabilityContractAttribute::consistency
	int32_t ___consistency_0;
	// System.Runtime.ConstrainedExecution.Cer System.Runtime.ConstrainedExecution.ReliabilityContractAttribute::cer
	int32_t ___cer_1;

public:
	inline static int32_t get_offset_of_consistency_0() { return static_cast<int32_t>(offsetof(ReliabilityContractAttribute_t2491659127, ___consistency_0)); }
	inline int32_t get_consistency_0() const { return ___consistency_0; }
	inline int32_t* get_address_of_consistency_0() { return &___consistency_0; }
	inline void set_consistency_0(int32_t value)
	{
		___consistency_0 = value;
	}

	inline static int32_t get_offset_of_cer_1() { return static_cast<int32_t>(offsetof(ReliabilityContractAttribute_t2491659127, ___cer_1)); }
	inline int32_t get_cer_1() const { return ___cer_1; }
	inline int32_t* get_address_of_cer_1() { return &___cer_1; }
	inline void set_cer_1(int32_t value)
	{
		___cer_1 = value;
=======
// System.Runtime.InteropServices.ClassInterfaceAttribute
struct  ClassInterfaceAttribute_t910653559  : public Attribute_t542643598
{
public:
	// System.Runtime.InteropServices.ClassInterfaceType System.Runtime.InteropServices.ClassInterfaceAttribute::ciType
	int32_t ___ciType_0;

public:
	inline static int32_t get_offset_of_ciType_0() { return static_cast<int32_t>(offsetof(ClassInterfaceAttribute_t910653559, ___ciType_0)); }
	inline int32_t get_ciType_0() const { return ___ciType_0; }
	inline int32_t* get_address_of_ciType_0() { return &___ciType_0; }
	inline void set_ciType_0(int32_t value)
	{
		___ciType_0 = value;
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // RELIABILITYCONTRACTATTRIBUTE_T2491659127_H
#ifndef TYPEDELEGATOR_T615671842_H
#define TYPEDELEGATOR_T615671842_H
=======
#endif // CLASSINTERFACEATTRIBUTE_T910653559_H
#ifndef TYPEDELEGATOR_T1357031879_H
#define TYPEDELEGATOR_T1357031879_H
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.TypeDelegator
<<<<<<< HEAD
struct  TypeDelegator_t615671842  : public Type_t
=======
struct  TypeDelegator_t1357031879  : public Type_t
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
{
public:
	// System.Type System.Reflection.TypeDelegator::typeImpl
	Type_t * ___typeImpl_8;

public:
<<<<<<< HEAD
	inline static int32_t get_offset_of_typeImpl_8() { return static_cast<int32_t>(offsetof(TypeDelegator_t615671842, ___typeImpl_8)); }
=======
	inline static int32_t get_offset_of_typeImpl_8() { return static_cast<int32_t>(offsetof(TypeDelegator_t1357031879, ___typeImpl_8)); }
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
	inline Type_t * get_typeImpl_8() const { return ___typeImpl_8; }
	inline Type_t ** get_address_of_typeImpl_8() { return &___typeImpl_8; }
	inline void set_typeImpl_8(Type_t * value)
	{
		___typeImpl_8 = value;
		Il2CppCodeGenWriteBarrier((&___typeImpl_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // TYPEDELEGATOR_T615671842_H
=======
#endif // TYPEDELEGATOR_T1357031879_H
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
<<<<<<< HEAD
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize400 = { sizeof (ResourceAttributes_t3686395807)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable400[3] = 
{
	ResourceAttributes_t3686395807::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize401 = { sizeof (StrongNameKeyPair_t2524123286), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable401[5] = 
{
	StrongNameKeyPair_t2524123286::get_offset_of__publicKey_0(),
	StrongNameKeyPair_t2524123286::get_offset_of__keyPairContainer_1(),
	StrongNameKeyPair_t2524123286::get_offset_of__keyPairExported_2(),
	StrongNameKeyPair_t2524123286::get_offset_of__keyPairArray_3(),
	StrongNameKeyPair_t2524123286::get_offset_of__rsa_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize402 = { sizeof (TargetException_t3604352598), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize403 = { sizeof (TargetInvocationException_t4249121896), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize404 = { sizeof (TargetParameterCountException_t2834415094), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize405 = { sizeof (TypeAttributes_t3368447971)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable405[32] = 
{
	TypeAttributes_t3368447971::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
=======
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize400 = { sizeof (ResourceAttributes_t2389678029)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable400[3] = 
{
	ResourceAttributes_t2389678029::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize401 = { sizeof (StrongNameKeyPair_t4090869089), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable401[5] = 
{
	StrongNameKeyPair_t4090869089::get_offset_of__publicKey_0(),
	StrongNameKeyPair_t4090869089::get_offset_of__keyPairContainer_1(),
	StrongNameKeyPair_t4090869089::get_offset_of__keyPairExported_2(),
	StrongNameKeyPair_t4090869089::get_offset_of__keyPairArray_3(),
	StrongNameKeyPair_t4090869089::get_offset_of__rsa_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize402 = { sizeof (TargetException_t1572104820), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize403 = { sizeof (TargetInvocationException_t4098620458), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize404 = { sizeof (TargetParameterCountException_t1554451430), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize405 = { sizeof (TypeAttributes_t2229518203)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable405[32] = 
{
	TypeAttributes_t2229518203::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
<<<<<<< HEAD
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize406 = { sizeof (TypeDelegator_t615671842), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable406[1] = 
{
	TypeDelegator_t615671842::get_offset_of_typeImpl_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize407 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize408 = { sizeof (NeutralResourcesLanguageAttribute_t3296785026), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable408[1] = 
{
	NeutralResourcesLanguageAttribute_t3296785026::get_offset_of_culture_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize409 = { sizeof (ResourceManager_t2395228493), -1, sizeof(ResourceManager_t2395228493_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable409[5] = 
{
	ResourceManager_t2395228493_StaticFields::get_offset_of_ResourceCache_0(),
	ResourceManager_t2395228493_StaticFields::get_offset_of_NonExistent_1(),
	ResourceManager_t2395228493_StaticFields::get_offset_of_HeaderVersionNumber_2(),
	ResourceManager_t2395228493_StaticFields::get_offset_of_MagicNumber_3(),
	ResourceManager_t2395228493::get_offset_of_resourceSetType_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize410 = { sizeof (PredefinedResourceType_t3139386999)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable410[21] = 
{
	PredefinedResourceType_t3139386999::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
=======
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize406 = { sizeof (TypeDelegator_t1357031879), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable406[1] = 
{
	TypeDelegator_t1357031879::get_offset_of_typeImpl_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize407 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize408 = { sizeof (NeutralResourcesLanguageAttribute_t3267676636), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable408[1] = 
{
	NeutralResourcesLanguageAttribute_t3267676636::get_offset_of_culture_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize409 = { sizeof (ResourceManager_t264715885), -1, sizeof(ResourceManager_t264715885_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable409[5] = 
{
	ResourceManager_t264715885_StaticFields::get_offset_of_ResourceCache_0(),
	ResourceManager_t264715885_StaticFields::get_offset_of_NonExistent_1(),
	ResourceManager_t264715885_StaticFields::get_offset_of_HeaderVersionNumber_2(),
	ResourceManager_t264715885_StaticFields::get_offset_of_MagicNumber_3(),
	ResourceManager_t264715885::get_offset_of_resourceSetType_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize410 = { sizeof (PredefinedResourceType_t3623697780)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable410[21] = 
{
	PredefinedResourceType_t3623697780::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
<<<<<<< HEAD
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize411 = { sizeof (ResourceReader_t93257177), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable411[13] = 
{
	ResourceReader_t93257177::get_offset_of_reader_0(),
	ResourceReader_t93257177::get_offset_of_readerLock_1(),
	ResourceReader_t93257177::get_offset_of_formatter_2(),
	ResourceReader_t93257177::get_offset_of_resourceCount_3(),
	ResourceReader_t93257177::get_offset_of_typeCount_4(),
	ResourceReader_t93257177::get_offset_of_typeNames_5(),
	ResourceReader_t93257177::get_offset_of_hashes_6(),
	ResourceReader_t93257177::get_offset_of_infos_7(),
	ResourceReader_t93257177::get_offset_of_dataSectionOffset_8(),
	ResourceReader_t93257177::get_offset_of_nameSectionOffset_9(),
	ResourceReader_t93257177::get_offset_of_resource_ver_10(),
	ResourceReader_t93257177::get_offset_of_cache_11(),
	ResourceReader_t93257177::get_offset_of_cache_lock_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize412 = { sizeof (ResourceInfo_t2802195552)+ sizeof (RuntimeObject), sizeof(ResourceInfo_t2802195552_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable412[3] = 
{
	ResourceInfo_t2802195552::get_offset_of_ValuePosition_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ResourceInfo_t2802195552::get_offset_of_ResourceName_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ResourceInfo_t2802195552::get_offset_of_TypeIndex_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize413 = { sizeof (ResourceCacheItem_t2850788348)+ sizeof (RuntimeObject), sizeof(ResourceCacheItem_t2850788348_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable413[2] = 
{
	ResourceCacheItem_t2850788348::get_offset_of_ResourceName_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ResourceCacheItem_t2850788348::get_offset_of_ResourceValue_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize414 = { sizeof (ResourceEnumerator_t2082933720), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable414[3] = 
{
	ResourceEnumerator_t2082933720::get_offset_of_reader_0(),
	ResourceEnumerator_t2082933720::get_offset_of_index_1(),
	ResourceEnumerator_t2082933720::get_offset_of_finished_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize415 = { sizeof (ResourceSet_t2945760440), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable415[4] = 
{
	ResourceSet_t2945760440::get_offset_of_Reader_0(),
	ResourceSet_t2945760440::get_offset_of_Table_1(),
	ResourceSet_t2945760440::get_offset_of_resources_read_2(),
	ResourceSet_t2945760440::get_offset_of_disposed_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize416 = { sizeof (RuntimeResourceSet_t326793075), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize417 = { sizeof (SatelliteContractVersionAttribute_t2215692676), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable417[1] = 
{
	SatelliteContractVersionAttribute_t2215692676::get_offset_of_ver_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize418 = { sizeof (Win32ResourceType_t988464197)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable418[21] = 
{
	Win32ResourceType_t988464197::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
=======
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize411 = { sizeof (ResourceReader_t2463923611), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable411[13] = 
{
	ResourceReader_t2463923611::get_offset_of_reader_0(),
	ResourceReader_t2463923611::get_offset_of_readerLock_1(),
	ResourceReader_t2463923611::get_offset_of_formatter_2(),
	ResourceReader_t2463923611::get_offset_of_resourceCount_3(),
	ResourceReader_t2463923611::get_offset_of_typeCount_4(),
	ResourceReader_t2463923611::get_offset_of_typeNames_5(),
	ResourceReader_t2463923611::get_offset_of_hashes_6(),
	ResourceReader_t2463923611::get_offset_of_infos_7(),
	ResourceReader_t2463923611::get_offset_of_dataSectionOffset_8(),
	ResourceReader_t2463923611::get_offset_of_nameSectionOffset_9(),
	ResourceReader_t2463923611::get_offset_of_resource_ver_10(),
	ResourceReader_t2463923611::get_offset_of_cache_11(),
	ResourceReader_t2463923611::get_offset_of_cache_lock_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize412 = { sizeof (ResourceInfo_t3933049236)+ sizeof (RuntimeObject), sizeof(ResourceInfo_t3933049236_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable412[3] = 
{
	ResourceInfo_t3933049236::get_offset_of_ValuePosition_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ResourceInfo_t3933049236::get_offset_of_ResourceName_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ResourceInfo_t3933049236::get_offset_of_TypeIndex_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize413 = { sizeof (ResourceCacheItem_t333236149)+ sizeof (RuntimeObject), sizeof(ResourceCacheItem_t333236149_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable413[2] = 
{
	ResourceCacheItem_t333236149::get_offset_of_ResourceName_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ResourceCacheItem_t333236149::get_offset_of_ResourceValue_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize414 = { sizeof (ResourceEnumerator_t2665690338), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable414[3] = 
{
	ResourceEnumerator_t2665690338::get_offset_of_reader_0(),
	ResourceEnumerator_t2665690338::get_offset_of_index_1(),
	ResourceEnumerator_t2665690338::get_offset_of_finished_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize415 = { sizeof (ResourceSet_t1348327650), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable415[4] = 
{
	ResourceSet_t1348327650::get_offset_of_Reader_0(),
	ResourceSet_t1348327650::get_offset_of_Table_1(),
	ResourceSet_t1348327650::get_offset_of_resources_read_2(),
	ResourceSet_t1348327650::get_offset_of_disposed_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize416 = { sizeof (RuntimeResourceSet_t1442459318), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize417 = { sizeof (SatelliteContractVersionAttribute_t2989984391), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable417[1] = 
{
	SatelliteContractVersionAttribute_t2989984391::get_offset_of_ver_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize418 = { sizeof (Win32ResourceType_t130810739)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable418[21] = 
{
	Win32ResourceType_t130810739::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
<<<<<<< HEAD
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize419 = { sizeof (NameOrId_t67750828), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable419[2] = 
{
	NameOrId_t67750828::get_offset_of_name_0(),
	NameOrId_t67750828::get_offset_of_id_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize420 = { sizeof (Win32Resource_t1698239717), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable420[2] = 
{
	Win32Resource_t1698239717::get_offset_of_type_0(),
	Win32Resource_t1698239717::get_offset_of_name_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize421 = { sizeof (Win32VersionResource_t1923678358), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize422 = { sizeof (CompilationRelaxations_t3217016942)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable422[2] = 
{
	CompilationRelaxations_t3217016942::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize423 = { sizeof (CompilationRelaxationsAttribute_t1365295251), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable423[1] = 
{
	CompilationRelaxationsAttribute_t1365295251::get_offset_of_relax_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize424 = { sizeof (DefaultDependencyAttribute_t351313417), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable424[1] = 
{
	DefaultDependencyAttribute_t351313417::get_offset_of_hint_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize425 = { sizeof (IsVolatile_t59160537), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize426 = { sizeof (LoadHint_t1485122652)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable426[4] = 
{
	LoadHint_t1485122652::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
=======
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize419 = { sizeof (NameOrId_t2460371499), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable419[2] = 
{
	NameOrId_t2460371499::get_offset_of_name_0(),
	NameOrId_t2460371499::get_offset_of_id_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize420 = { sizeof (Win32Resource_t2185668907), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable420[2] = 
{
	Win32Resource_t2185668907::get_offset_of_type_0(),
	Win32Resource_t2185668907::get_offset_of_name_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize421 = { sizeof (Win32VersionResource_t548350325), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize422 = { sizeof (CompilationRelaxations_t4211964247)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable422[2] = 
{
	CompilationRelaxations_t4211964247::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize423 = { sizeof (CompilationRelaxationsAttribute_t238494011), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable423[1] = 
{
	CompilationRelaxationsAttribute_t238494011::get_offset_of_relax_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize424 = { sizeof (DefaultDependencyAttribute_t3858269114), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable424[1] = 
{
	DefaultDependencyAttribute_t3858269114::get_offset_of_hint_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize425 = { sizeof (IsVolatile_t700755342), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize426 = { sizeof (LoadHint_t3781660191)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable426[4] = 
{
	LoadHint_t3781660191::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
	0,
	0,
	0,
};
<<<<<<< HEAD
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize427 = { sizeof (StringFreezingAttribute_t987053149), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize428 = { sizeof (Cer_t3750493428)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable428[4] = 
{
	Cer_t3750493428::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
=======
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize427 = { sizeof (StringFreezingAttribute_t2691375565), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize428 = { sizeof (Cer_t2101567438)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable428[4] = 
{
	Cer_t2101567438::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
	0,
	0,
	0,
};
<<<<<<< HEAD
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize429 = { sizeof (Consistency_t15520487)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable429[5] = 
{
	Consistency_t15520487::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
=======
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize429 = { sizeof (Consistency_t1390725888)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable429[5] = 
{
	Consistency_t1390725888::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
	0,
	0,
	0,
	0,
};
<<<<<<< HEAD
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize430 = { sizeof (CriticalFinalizerObject_t4186809588), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize431 = { sizeof (ReliabilityContractAttribute_t2491659127), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable431[2] = 
{
	ReliabilityContractAttribute_t2491659127::get_offset_of_consistency_0(),
	ReliabilityContractAttribute_t2491659127::get_offset_of_cer_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize432 = { sizeof (ActivationArguments_t329123578), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize433 = { sizeof (BestFitMappingAttribute_t1145538616), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable433[1] = 
{
	BestFitMappingAttribute_t1145538616::get_offset_of_bfm_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize434 = { sizeof (COMException_t2603905749), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize435 = { sizeof (CallingConvention_t1401592305)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable435[6] = 
{
	CallingConvention_t1401592305::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
=======
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize430 = { sizeof (CriticalFinalizerObject_t1920899984), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize431 = { sizeof (ReliabilityContractAttribute_t1625655220), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable431[2] = 
{
	ReliabilityContractAttribute_t1625655220::get_offset_of_consistency_0(),
	ReliabilityContractAttribute_t1625655220::get_offset_of_cer_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize432 = { sizeof (ActivationArguments_t640021366), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize433 = { sizeof (BestFitMappingAttribute_t1604378579), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable433[1] = 
{
	BestFitMappingAttribute_t1604378579::get_offset_of_bfm_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize434 = { sizeof (COMException_t1790481504), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize435 = { sizeof (CallingConvention_t3354538265)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable435[6] = 
{
	CallingConvention_t3354538265::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
	0,
	0,
	0,
	0,
	0,
};
<<<<<<< HEAD
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize436 = { sizeof (CharSet_t2074764021)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable436[5] = 
{
	CharSet_t2074764021::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
=======
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize436 = { sizeof (CharSet_t2778376310)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable436[5] = 
{
	CharSet_t2778376310::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
	0,
	0,
	0,
	0,
};
<<<<<<< HEAD
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize437 = { sizeof (ClassInterfaceAttribute_t3851060312), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable437[1] = 
{
	ClassInterfaceAttribute_t3851060312::get_offset_of_ciType_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize438 = { sizeof (ClassInterfaceType_t2523706223)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable438[4] = 
{
	ClassInterfaceType_t2523706223::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
=======
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize437 = { sizeof (ClassInterfaceAttribute_t910653559), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable437[1] = 
{
	ClassInterfaceAttribute_t910653559::get_offset_of_ciType_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize438 = { sizeof (ClassInterfaceType_t295178211)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable438[4] = 
{
	ClassInterfaceType_t295178211::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
	0,
	0,
	0,
};
<<<<<<< HEAD
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize439 = { sizeof (ComCompatibleVersionAttribute_t2842168515), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable439[4] = 
{
	ComCompatibleVersionAttribute_t2842168515::get_offset_of_major_0(),
	ComCompatibleVersionAttribute_t2842168515::get_offset_of_minor_1(),
	ComCompatibleVersionAttribute_t2842168515::get_offset_of_build_2(),
	ComCompatibleVersionAttribute_t2842168515::get_offset_of_revision_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize440 = { sizeof (ComDefaultInterfaceAttribute_t3867912167), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable440[1] = 
{
	ComDefaultInterfaceAttribute_t3867912167::get_offset_of__type_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize441 = { sizeof (ComInterfaceType_t693570889)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable441[4] = 
{
	ComInterfaceType_t693570889::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
=======
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize439 = { sizeof (ComCompatibleVersionAttribute_t1884740313), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable439[4] = 
{
	ComCompatibleVersionAttribute_t1884740313::get_offset_of_major_0(),
	ComCompatibleVersionAttribute_t1884740313::get_offset_of_minor_1(),
	ComCompatibleVersionAttribute_t1884740313::get_offset_of_build_2(),
	ComCompatibleVersionAttribute_t1884740313::get_offset_of_revision_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize440 = { sizeof (ComDefaultInterfaceAttribute_t347642415), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable440[1] = 
{
	ComDefaultInterfaceAttribute_t347642415::get_offset_of__type_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize441 = { sizeof (ComInterfaceType_t1898221498)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable441[4] = 
{
	ComInterfaceType_t1898221498::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
	0,
	0,
	0,
};
<<<<<<< HEAD
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize442 = { sizeof (DispIdAttribute_t3823512475), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable442[1] = 
{
	DispIdAttribute_t3823512475::get_offset_of_id_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize443 = { sizeof (ErrorWrapper_t1378886840), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable443[1] = 
{
	ErrorWrapper_t1378886840::get_offset_of_errorCode_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize444 = { sizeof (ExternalException_t1977152776), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize445 = { sizeof (GCHandle_t321279148)+ sizeof (RuntimeObject), sizeof(GCHandle_t321279148 ), 0, 0 };
extern const int32_t g_FieldOffsetTable445[1] = 
{
	GCHandle_t321279148::get_offset_of_handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize446 = { sizeof (GCHandleType_t2496360846)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable446[5] = 
{
	GCHandleType_t2496360846::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
=======
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize442 = { sizeof (DispIdAttribute_t607560947), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable442[1] = 
{
	DispIdAttribute_t607560947::get_offset_of_id_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize443 = { sizeof (ErrorWrapper_t2775489663), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable443[1] = 
{
	ErrorWrapper_t2775489663::get_offset_of_errorCode_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize444 = { sizeof (ExternalException_t1252662682), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize445 = { sizeof (GCHandle_t3409268066)+ sizeof (RuntimeObject), sizeof(GCHandle_t3409268066 ), 0, 0 };
extern const int32_t g_FieldOffsetTable445[1] = 
{
	GCHandle_t3409268066::get_offset_of_handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize446 = { sizeof (GCHandleType_t1970708122)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable446[5] = 
{
	GCHandleType_t1970708122::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
	0,
	0,
	0,
	0,
};
<<<<<<< HEAD
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize447 = { sizeof (InterfaceTypeAttribute_t906192402), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable447[1] = 
{
	InterfaceTypeAttribute_t906192402::get_offset_of_intType_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize448 = { sizeof (Marshal_t113540030), -1, sizeof(Marshal_t113540030_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable448[2] = 
{
	Marshal_t113540030_StaticFields::get_offset_of_SystemMaxDBCSCharSize_0(),
	Marshal_t113540030_StaticFields::get_offset_of_SystemDefaultCharSize_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize449 = { sizeof (MarshalDirectiveException_t458284932), -1, 0, 0 };
=======
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize447 = { sizeof (InterfaceTypeAttribute_t4113096249), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable447[1] = 
{
	InterfaceTypeAttribute_t4113096249::get_offset_of_intType_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize448 = { sizeof (Marshal_t785896760), -1, sizeof(Marshal_t785896760_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable448[2] = 
{
	Marshal_t785896760_StaticFields::get_offset_of_SystemMaxDBCSCharSize_0(),
	Marshal_t785896760_StaticFields::get_offset_of_SystemDefaultCharSize_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize449 = { sizeof (MarshalDirectiveException_t1326890414), -1, 0, 0 };
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
extern const int32_t g_FieldOffsetTable449[1] = 
{
	0,
};
<<<<<<< HEAD
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize450 = { sizeof (PreserveSigAttribute_t592324163), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize451 = { sizeof (SafeHandle_t1903725777), sizeof(void*), 0, 0 };
extern const int32_t g_FieldOffsetTable451[4] = 
{
	SafeHandle_t1903725777::get_offset_of_handle_0(),
	SafeHandle_t1903725777::get_offset_of_invalid_handle_value_1(),
	SafeHandle_t1903725777::get_offset_of_refcount_2(),
	SafeHandle_t1903725777::get_offset_of_owns_handle_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize452 = { sizeof (TypeLibImportClassAttribute_t1663284664), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable452[1] = 
{
	TypeLibImportClassAttribute_t1663284664::get_offset_of__importClass_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize453 = { sizeof (TypeLibVersionAttribute_t2944955417), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable453[2] = 
{
	TypeLibVersionAttribute_t2944955417::get_offset_of_major_0(),
	TypeLibVersionAttribute_t2944955417::get_offset_of_minor_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize454 = { sizeof (UnmanagedFunctionPointerAttribute_t3413099606), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable454[1] = 
{
	UnmanagedFunctionPointerAttribute_t3413099606::get_offset_of_call_conv_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize455 = { sizeof (UnmanagedType_t1225976977)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable455[36] = 
{
	UnmanagedType_t1225976977::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
=======
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize450 = { sizeof (PreserveSigAttribute_t1564965109), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize451 = { sizeof (SafeHandle_t2733794115), sizeof(void*), 0, 0 };
extern const int32_t g_FieldOffsetTable451[4] = 
{
	SafeHandle_t2733794115::get_offset_of_handle_0(),
	SafeHandle_t2733794115::get_offset_of_invalid_handle_value_1(),
	SafeHandle_t2733794115::get_offset_of_refcount_2(),
	SafeHandle_t2733794115::get_offset_of_owns_handle_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize452 = { sizeof (TypeLibImportClassAttribute_t2390314680), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable452[1] = 
{
	TypeLibImportClassAttribute_t2390314680::get_offset_of__importClass_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize453 = { sizeof (TypeLibVersionAttribute_t3346496961), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable453[2] = 
{
	TypeLibVersionAttribute_t3346496961::get_offset_of_major_0(),
	TypeLibVersionAttribute_t3346496961::get_offset_of_minor_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize454 = { sizeof (UnmanagedFunctionPointerAttribute_t1696564987), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable454[1] = 
{
	UnmanagedFunctionPointerAttribute_t1696564987::get_offset_of_call_conv_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize455 = { sizeof (UnmanagedType_t2550630890)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable455[36] = 
{
	UnmanagedType_t2550630890::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize456 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize457 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize458 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize459 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize460 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize461 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize462 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize463 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize464 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize465 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize466 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize467 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize468 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize469 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize470 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize471 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize472 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize473 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize474 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize475 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize476 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize477 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize478 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize479 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize480 = { 0, -1, 0, 0 };
<<<<<<< HEAD
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize481 = { sizeof (ActivationServices_t1461598347), -1, sizeof(ActivationServices_t1461598347_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable481[1] = 
{
	ActivationServices_t1461598347_StaticFields::get_offset_of__constructionActivator_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize482 = { sizeof (AppDomainLevelActivator_t3730006795), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable482[2] = 
{
	AppDomainLevelActivator_t3730006795::get_offset_of__activationUrl_0(),
	AppDomainLevelActivator_t3730006795::get_offset_of__next_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize483 = { sizeof (ConstructionLevelActivator_t843695907), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize484 = { sizeof (ContextLevelActivator_t4162002061), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable484[1] = 
{
	ContextLevelActivator_t4162002061::get_offset_of_m_NextActivator_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize485 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize486 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize487 = { sizeof (RemoteActivator_t3517897456), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize488 = { sizeof (UrlAttribute_t4151014314), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable488[1] = 
{
	UrlAttribute_t4151014314::get_offset_of_url_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize489 = { sizeof (ChannelInfo_t3383181039), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable489[1] = 
{
	ChannelInfo_t3383181039::get_offset_of_channelData_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize490 = { sizeof (ChannelServices_t3617701622), -1, sizeof(ChannelServices_t3617701622_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable490[5] = 
{
	ChannelServices_t3617701622_StaticFields::get_offset_of_registeredChannels_0(),
	ChannelServices_t3617701622_StaticFields::get_offset_of_delayedClientChannels_1(),
	ChannelServices_t3617701622_StaticFields::get_offset_of__crossContextSink_2(),
	ChannelServices_t3617701622_StaticFields::get_offset_of_CrossContextUrl_3(),
	ChannelServices_t3617701622_StaticFields::get_offset_of_oldStartModeTypes_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize491 = { sizeof (CrossAppDomainData_t420151536), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable491[3] = 
{
	CrossAppDomainData_t420151536::get_offset_of__ContextID_0(),
	CrossAppDomainData_t420151536::get_offset_of__DomainID_1(),
	CrossAppDomainData_t420151536::get_offset_of__processGuid_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize492 = { sizeof (CrossAppDomainChannel_t858402425), -1, sizeof(CrossAppDomainChannel_t858402425_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable492[1] = 
{
	CrossAppDomainChannel_t858402425_StaticFields::get_offset_of_s_lock_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize493 = { sizeof (CrossAppDomainSink_t1605940783), -1, sizeof(CrossAppDomainSink_t1605940783_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable493[3] = 
{
	CrossAppDomainSink_t1605940783_StaticFields::get_offset_of_s_sinks_0(),
	CrossAppDomainSink_t1605940783_StaticFields::get_offset_of_processMessageMethod_1(),
	CrossAppDomainSink_t1605940783::get_offset_of__domainID_2(),
=======
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize481 = { sizeof (ActivationServices_t1532663650), -1, sizeof(ActivationServices_t1532663650_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable481[1] = 
{
	ActivationServices_t1532663650_StaticFields::get_offset_of__constructionActivator_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize482 = { sizeof (AppDomainLevelActivator_t834876328), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable482[2] = 
{
	AppDomainLevelActivator_t834876328::get_offset_of__activationUrl_0(),
	AppDomainLevelActivator_t834876328::get_offset_of__next_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize483 = { sizeof (ConstructionLevelActivator_t2284932402), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize484 = { sizeof (ContextLevelActivator_t1784331636), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable484[1] = 
{
	ContextLevelActivator_t1784331636::get_offset_of_m_NextActivator_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize485 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize486 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize487 = { sizeof (RemoteActivator_t213750447), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize488 = { sizeof (UrlAttribute_t1544437301), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable488[1] = 
{
	UrlAttribute_t1544437301::get_offset_of_url_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize489 = { sizeof (ChannelInfo_t709892715), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable489[1] = 
{
	ChannelInfo_t709892715::get_offset_of_channelData_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize490 = { sizeof (ChannelServices_t2007814595), -1, sizeof(ChannelServices_t2007814595_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable490[5] = 
{
	ChannelServices_t2007814595_StaticFields::get_offset_of_registeredChannels_0(),
	ChannelServices_t2007814595_StaticFields::get_offset_of_delayedClientChannels_1(),
	ChannelServices_t2007814595_StaticFields::get_offset_of__crossContextSink_2(),
	ChannelServices_t2007814595_StaticFields::get_offset_of_CrossContextUrl_3(),
	ChannelServices_t2007814595_StaticFields::get_offset_of_oldStartModeTypes_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize491 = { sizeof (CrossAppDomainData_t816071813), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable491[3] = 
{
	CrossAppDomainData_t816071813::get_offset_of__ContextID_0(),
	CrossAppDomainData_t816071813::get_offset_of__DomainID_1(),
	CrossAppDomainData_t816071813::get_offset_of__processGuid_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize492 = { sizeof (CrossAppDomainChannel_t2471623380), -1, sizeof(CrossAppDomainChannel_t2471623380_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable492[1] = 
{
	CrossAppDomainChannel_t2471623380_StaticFields::get_offset_of_s_lock_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize493 = { sizeof (CrossAppDomainSink_t2368859578), -1, sizeof(CrossAppDomainSink_t2368859578_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable493[3] = 
{
	CrossAppDomainSink_t2368859578_StaticFields::get_offset_of_s_sinks_0(),
	CrossAppDomainSink_t2368859578_StaticFields::get_offset_of_processMessageMethod_1(),
	CrossAppDomainSink_t2368859578::get_offset_of__domainID_2(),
>>>>>>> 32f40a0427d03e7b22541c9a7cf2abe6843614c8
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize494 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize495 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize496 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize497 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize498 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize499 = { 0, -1, 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif

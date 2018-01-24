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

// System.Object[]
struct ObjectU5BU5D_t3614634134;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t1656058977;
// System.Resources.NameOrId
struct NameOrId_t2460371499;
// System.String
struct String_t;
// System.Collections.Hashtable
<<<<<<< HEAD
struct Hashtable_t909839986;
=======
struct Hashtable_t31945240;
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.IntPtr[]
struct IntPtrU5BU5D_t169632028;
// System.Collections.IDictionary
struct IDictionary_t596158605;
// System.Collections.ArrayList
<<<<<<< HEAD
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
=======
struct ArrayList_t1432732436;
// System.Runtime.Remoting.Contexts.CrossContextChannel
struct CrossContextChannel_t2532330067;
// System.String
struct String_t;
// System.Collections.IList
struct IList_t1986026273;
// System.Object[]
struct ObjectU5BU5D_t646222758;
// System.IntPtr[]
struct IntPtrU5BU5D_t2117927235;
// System.Collections.IDictionary
struct IDictionary_t1760745379;
// System.Resources.NameOrId
struct NameOrId_t2163298507;
// System.Resources.IResourceReader
struct IResourceReader_t4282775245;
// System.Resources.ResourceReader
struct ResourceReader_t2604191431;
// System.IO.BinaryReader
struct BinaryReader_t2313688715;
// System.Runtime.Serialization.IFormatter
struct IFormatter_t2190244910;
// System.String[]
struct StringU5BU5D_t3684662999;
// System.Int32[]
struct Int32U5BU5D_t225491016;
// System.Resources.ResourceReader/ResourceInfo[]
struct ResourceInfoU5BU5D_t2485170363;
// System.Resources.ResourceReader/ResourceCacheItem[]
struct ResourceCacheItemU5BU5D_t482235848;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t2623066653;
// System.Type
struct Type_t;
// System.Runtime.Remoting.Activation.IActivator
struct IActivator_t3967165128;
// System.Byte[]
struct ByteU5BU5D_t1659287647;
// System.Security.Cryptography.RSA
struct RSA_t309483443;
// System.Char[]
struct CharU5BU5D_t3894503091;
// System.Version
struct Version_t2233809809;
// System.Void
struct Void_t1787403281;
// System.Type[]
struct TypeU5BU5D_t2809338828;
// System.Reflection.MemberFilter
struct MemberFilter_t1504268649;
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f




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
#ifndef ISVOLATILE_T700755342_H
#define ISVOLATILE_T700755342_H
=======
#ifndef CROSSAPPDOMAINSINK_T4136848305_H
#define CROSSAPPDOMAINSINK_T4136848305_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Channels.CrossAppDomainSink
struct  CrossAppDomainSink_t4136848305  : public RuntimeObject
{
public:
	// System.Int32 System.Runtime.Remoting.Channels.CrossAppDomainSink::_domainID
	int32_t ____domainID_2;

public:
	inline static int32_t get_offset_of__domainID_2() { return static_cast<int32_t>(offsetof(CrossAppDomainSink_t4136848305, ____domainID_2)); }
	inline int32_t get__domainID_2() const { return ____domainID_2; }
	inline int32_t* get_address_of__domainID_2() { return &____domainID_2; }
	inline void set__domainID_2(int32_t value)
	{
		____domainID_2 = value;
	}
};

struct CrossAppDomainSink_t4136848305_StaticFields
{
public:
	// System.Collections.Hashtable System.Runtime.Remoting.Channels.CrossAppDomainSink::s_sinks
	Hashtable_t31945240 * ___s_sinks_0;
	// System.Reflection.MethodInfo System.Runtime.Remoting.Channels.CrossAppDomainSink::processMessageMethod
	MethodInfo_t * ___processMessageMethod_1;

public:
	inline static int32_t get_offset_of_s_sinks_0() { return static_cast<int32_t>(offsetof(CrossAppDomainSink_t4136848305_StaticFields, ___s_sinks_0)); }
	inline Hashtable_t31945240 * get_s_sinks_0() const { return ___s_sinks_0; }
	inline Hashtable_t31945240 ** get_address_of_s_sinks_0() { return &___s_sinks_0; }
	inline void set_s_sinks_0(Hashtable_t31945240 * value)
	{
		___s_sinks_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_sinks_0), value);
	}

	inline static int32_t get_offset_of_processMessageMethod_1() { return static_cast<int32_t>(offsetof(CrossAppDomainSink_t4136848305_StaticFields, ___processMessageMethod_1)); }
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
#endif // CROSSAPPDOMAINSINK_T4136848305_H
#ifndef ISVOLATILE_T944769987_H
#define ISVOLATILE_T944769987_H
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.IsVolatile
<<<<<<< HEAD
struct  IsVolatile_t700755342  : public RuntimeObject
=======
struct  IsVolatile_t944769987  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ISVOLATILE_T944769987_H
#ifndef VALUETYPE_T2664944137_H
#define VALUETYPE_T2664944137_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t2664944137  : public RuntimeObject
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // ISVOLATILE_T700755342_H
#ifndef CHANNELINFO_T709892715_H
#define CHANNELINFO_T709892715_H
=======
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t2664944137_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t2664944137_marshaled_com
{
};
#endif // VALUETYPE_T2664944137_H
#ifndef CHANNELSERVICES_T2302099503_H
#define CHANNELSERVICES_T2302099503_H
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
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
=======
// System.Runtime.Remoting.Channels.ChannelServices
struct  ChannelServices_t2302099503  : public RuntimeObject
{
public:

public:
};

struct ChannelServices_t2302099503_StaticFields
{
public:
	// System.Collections.ArrayList System.Runtime.Remoting.Channels.ChannelServices::registeredChannels
	ArrayList_t1432732436 * ___registeredChannels_0;
	// System.Collections.ArrayList System.Runtime.Remoting.Channels.ChannelServices::delayedClientChannels
	ArrayList_t1432732436 * ___delayedClientChannels_1;
	// System.Runtime.Remoting.Contexts.CrossContextChannel System.Runtime.Remoting.Channels.ChannelServices::_crossContextSink
	CrossContextChannel_t2532330067 * ____crossContextSink_2;
	// System.String System.Runtime.Remoting.Channels.ChannelServices::CrossContextUrl
	String_t* ___CrossContextUrl_3;
	// System.Collections.IList System.Runtime.Remoting.Channels.ChannelServices::oldStartModeTypes
	RuntimeObject* ___oldStartModeTypes_4;

public:
	inline static int32_t get_offset_of_registeredChannels_0() { return static_cast<int32_t>(offsetof(ChannelServices_t2302099503_StaticFields, ___registeredChannels_0)); }
	inline ArrayList_t1432732436 * get_registeredChannels_0() const { return ___registeredChannels_0; }
	inline ArrayList_t1432732436 ** get_address_of_registeredChannels_0() { return &___registeredChannels_0; }
	inline void set_registeredChannels_0(ArrayList_t1432732436 * value)
	{
		___registeredChannels_0 = value;
		Il2CppCodeGenWriteBarrier((&___registeredChannels_0), value);
	}

	inline static int32_t get_offset_of_delayedClientChannels_1() { return static_cast<int32_t>(offsetof(ChannelServices_t2302099503_StaticFields, ___delayedClientChannels_1)); }
	inline ArrayList_t1432732436 * get_delayedClientChannels_1() const { return ___delayedClientChannels_1; }
	inline ArrayList_t1432732436 ** get_address_of_delayedClientChannels_1() { return &___delayedClientChannels_1; }
	inline void set_delayedClientChannels_1(ArrayList_t1432732436 * value)
	{
		___delayedClientChannels_1 = value;
		Il2CppCodeGenWriteBarrier((&___delayedClientChannels_1), value);
	}

	inline static int32_t get_offset_of__crossContextSink_2() { return static_cast<int32_t>(offsetof(ChannelServices_t2302099503_StaticFields, ____crossContextSink_2)); }
	inline CrossContextChannel_t2532330067 * get__crossContextSink_2() const { return ____crossContextSink_2; }
	inline CrossContextChannel_t2532330067 ** get_address_of__crossContextSink_2() { return &____crossContextSink_2; }
	inline void set__crossContextSink_2(CrossContextChannel_t2532330067 * value)
	{
		____crossContextSink_2 = value;
		Il2CppCodeGenWriteBarrier((&____crossContextSink_2), value);
	}

	inline static int32_t get_offset_of_CrossContextUrl_3() { return static_cast<int32_t>(offsetof(ChannelServices_t2302099503_StaticFields, ___CrossContextUrl_3)); }
	inline String_t* get_CrossContextUrl_3() const { return ___CrossContextUrl_3; }
	inline String_t** get_address_of_CrossContextUrl_3() { return &___CrossContextUrl_3; }
	inline void set_CrossContextUrl_3(String_t* value)
	{
		___CrossContextUrl_3 = value;
		Il2CppCodeGenWriteBarrier((&___CrossContextUrl_3), value);
	}

	inline static int32_t get_offset_of_oldStartModeTypes_4() { return static_cast<int32_t>(offsetof(ChannelServices_t2302099503_StaticFields, ___oldStartModeTypes_4)); }
	inline RuntimeObject* get_oldStartModeTypes_4() const { return ___oldStartModeTypes_4; }
	inline RuntimeObject** get_address_of_oldStartModeTypes_4() { return &___oldStartModeTypes_4; }
	inline void set_oldStartModeTypes_4(RuntimeObject* value)
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
	{
		___channelData_0 = value;
		Il2CppCodeGenWriteBarrier((&___channelData_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // CHANNELINFO_T709892715_H
#ifndef ERRORWRAPPER_T2775489663_H
#define ERRORWRAPPER_T2775489663_H
=======
#endif // CHANNELSERVICES_T2302099503_H
#ifndef CHANNELINFO_T1141549006_H
#define CHANNELINFO_T1141549006_H
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
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
=======
// System.Runtime.Remoting.ChannelInfo
struct  ChannelInfo_t1141549006  : public RuntimeObject
{
public:
	// System.Object[] System.Runtime.Remoting.ChannelInfo::channelData
	ObjectU5BU5D_t646222758* ___channelData_0;

public:
	inline static int32_t get_offset_of_channelData_0() { return static_cast<int32_t>(offsetof(ChannelInfo_t1141549006, ___channelData_0)); }
	inline ObjectU5BU5D_t646222758* get_channelData_0() const { return ___channelData_0; }
	inline ObjectU5BU5D_t646222758** get_address_of_channelData_0() { return &___channelData_0; }
	inline void set_channelData_0(ObjectU5BU5D_t646222758* value)
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
	{
		___errorCode_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // ERRORWRAPPER_T2775489663_H
#ifndef MARSHALBYREFOBJECT_T1285298191_H
#define MARSHALBYREFOBJECT_T1285298191_H
=======
#endif // CHANNELINFO_T1141549006_H
#ifndef EXCEPTION_T1506159279_H
#define EXCEPTION_T1506159279_H
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
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
=======
// System.Exception
struct  Exception_t1506159279  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t2117927235* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t1506159279 * ___inner_exception_1;
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
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t1506159279, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t2117927235* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t2117927235** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t2117927235* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t1506159279, ___inner_exception_1)); }
	inline Exception_t1506159279 * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t1506159279 ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t1506159279 * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t1506159279, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t1506159279, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t1506159279, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t1506159279, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t1506159279, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t1506159279, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t1506159279, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t1506159279, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t1506159279, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // MARSHALBYREFOBJECT_T1285298191_H
#ifndef WIN32RESOURCE_T2185668907_H
#define WIN32RESOURCE_T2185668907_H
=======
#endif // EXCEPTION_T1506159279_H
#ifndef WIN32RESOURCE_T1446037021_H
#define WIN32RESOURCE_T1446037021_H
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.Win32Resource
<<<<<<< HEAD
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
=======
struct  Win32Resource_t1446037021  : public RuntimeObject
{
public:
	// System.Resources.NameOrId System.Resources.Win32Resource::type
	NameOrId_t2163298507 * ___type_0;
	// System.Resources.NameOrId System.Resources.Win32Resource::name
	NameOrId_t2163298507 * ___name_1;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(Win32Resource_t1446037021, ___type_0)); }
	inline NameOrId_t2163298507 * get_type_0() const { return ___type_0; }
	inline NameOrId_t2163298507 ** get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(NameOrId_t2163298507 * value)
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
	{
		___type_0 = value;
		Il2CppCodeGenWriteBarrier((&___type_0), value);
	}

<<<<<<< HEAD
	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(Win32Resource_t2185668907, ___name_1)); }
	inline NameOrId_t2460371499 * get_name_1() const { return ___name_1; }
	inline NameOrId_t2460371499 ** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(NameOrId_t2460371499 * value)
=======
	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(Win32Resource_t1446037021, ___name_1)); }
	inline NameOrId_t2163298507 * get_name_1() const { return ___name_1; }
	inline NameOrId_t2163298507 ** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(NameOrId_t2163298507 * value)
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((&___name_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // WIN32RESOURCE_T2185668907_H
#ifndef NAMEORID_T2460371499_H
#define NAMEORID_T2460371499_H
=======
#endif // WIN32RESOURCE_T1446037021_H
#ifndef NAMEORID_T2163298507_H
#define NAMEORID_T2163298507_H
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.NameOrId
<<<<<<< HEAD
struct  NameOrId_t2460371499  : public RuntimeObject
=======
struct  NameOrId_t2163298507  : public RuntimeObject
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
{
public:
	// System.String System.Resources.NameOrId::name
	String_t* ___name_0;
	// System.Int32 System.Resources.NameOrId::id
	int32_t ___id_1;

public:
<<<<<<< HEAD
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(NameOrId_t2460371499, ___name_0)); }
=======
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(NameOrId_t2163298507, ___name_0)); }
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

<<<<<<< HEAD
	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(NameOrId_t2460371499, ___id_1)); }
=======
	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(NameOrId_t2163298507, ___id_1)); }
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
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
#endif // NAMEORID_T2460371499_H
#ifndef CROSSAPPDOMAINSINK_T2368859578_H
#define CROSSAPPDOMAINSINK_T2368859578_H
=======
#endif // NAMEORID_T2163298507_H
#ifndef ACTIVATIONARGUMENTS_T650420298_H
#define ACTIVATIONARGUMENTS_T650420298_H
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.Runtime.Remoting.Channels.CrossAppDomainSink
struct  CrossAppDomainSink_t2368859578  : public RuntimeObject
=======
// System.Runtime.Hosting.ActivationArguments
struct  ActivationArguments_t650420298  : public RuntimeObject
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
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
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // CROSSAPPDOMAINSINK_T2368859578_H
#ifndef VALUETYPE_T3507792607_H
#define VALUETYPE_T3507792607_H
=======
#endif // ACTIVATIONARGUMENTS_T650420298_H
#ifndef ERRORWRAPPER_T2438105464_H
#define ERRORWRAPPER_T2438105464_H
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.ValueType
struct  ValueType_t3507792607  : public RuntimeObject
=======
// System.Runtime.InteropServices.ErrorWrapper
struct  ErrorWrapper_t2438105464  : public RuntimeObject
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
{
public:

public:
<<<<<<< HEAD
=======
	inline static int32_t get_offset_of_errorCode_0() { return static_cast<int32_t>(offsetof(ErrorWrapper_t2438105464, ___errorCode_0)); }
	inline int32_t get_errorCode_0() const { return ___errorCode_0; }
	inline int32_t* get_address_of_errorCode_0() { return &___errorCode_0; }
	inline void set_errorCode_0(int32_t value)
	{
		___errorCode_0 = value;
	}
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
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
=======
#endif // ERRORWRAPPER_T2438105464_H
#ifndef RESOURCESET_T811453519_H
#define RESOURCESET_T811453519_H
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
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
=======
// System.Resources.ResourceSet
struct  ResourceSet_t811453519  : public RuntimeObject
{
public:
	// System.Resources.IResourceReader System.Resources.ResourceSet::Reader
	RuntimeObject* ___Reader_0;
	// System.Collections.Hashtable System.Resources.ResourceSet::Table
	Hashtable_t31945240 * ___Table_1;
	// System.Boolean System.Resources.ResourceSet::resources_read
	bool ___resources_read_2;
	// System.Boolean System.Resources.ResourceSet::disposed
	bool ___disposed_3;

public:
	inline static int32_t get_offset_of_Reader_0() { return static_cast<int32_t>(offsetof(ResourceSet_t811453519, ___Reader_0)); }
	inline RuntimeObject* get_Reader_0() const { return ___Reader_0; }
	inline RuntimeObject** get_address_of_Reader_0() { return &___Reader_0; }
	inline void set_Reader_0(RuntimeObject* value)
	{
		___Reader_0 = value;
		Il2CppCodeGenWriteBarrier((&___Reader_0), value);
	}

	inline static int32_t get_offset_of_Table_1() { return static_cast<int32_t>(offsetof(ResourceSet_t811453519, ___Table_1)); }
	inline Hashtable_t31945240 * get_Table_1() const { return ___Table_1; }
	inline Hashtable_t31945240 ** get_address_of_Table_1() { return &___Table_1; }
	inline void set_Table_1(Hashtable_t31945240 * value)
	{
		___Table_1 = value;
		Il2CppCodeGenWriteBarrier((&___Table_1), value);
	}

	inline static int32_t get_offset_of_resources_read_2() { return static_cast<int32_t>(offsetof(ResourceSet_t811453519, ___resources_read_2)); }
	inline bool get_resources_read_2() const { return ___resources_read_2; }
	inline bool* get_address_of_resources_read_2() { return &___resources_read_2; }
	inline void set_resources_read_2(bool value)
	{
		___resources_read_2 = value;
	}

	inline static int32_t get_offset_of_disposed_3() { return static_cast<int32_t>(offsetof(ResourceSet_t811453519, ___disposed_3)); }
	inline bool get_disposed_3() const { return ___disposed_3; }
	inline bool* get_address_of_disposed_3() { return &___disposed_3; }
	inline void set_disposed_3(bool value)
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
	{
		___s_lock_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_lock_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // CROSSAPPDOMAINCHANNEL_T2471623380_H
#ifndef CROSSAPPDOMAINDATA_T816071813_H
#define CROSSAPPDOMAINDATA_T816071813_H
=======
#endif // RESOURCESET_T811453519_H
#ifndef ATTRIBUTE_T512917069_H
#define ATTRIBUTE_T512917069_H
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.Runtime.Remoting.Channels.CrossAppDomainData
struct  CrossAppDomainData_t816071813  : public RuntimeObject
=======
// System.Attribute
struct  Attribute_t512917069  : public RuntimeObject
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
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
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // CROSSAPPDOMAINDATA_T816071813_H
#ifndef ACTIVATIONARGUMENTS_T640021366_H
#define ACTIVATIONARGUMENTS_T640021366_H
=======
#endif // ATTRIBUTE_T512917069_H
#ifndef RESOURCEENUMERATOR_T3773541503_H
#define RESOURCEENUMERATOR_T3773541503_H
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.Runtime.Hosting.ActivationArguments
struct  ActivationArguments_t640021366  : public RuntimeObject
{
public:

public:
=======
// System.Resources.ResourceReader/ResourceEnumerator
struct  ResourceEnumerator_t3773541503  : public RuntimeObject
{
public:
	// System.Resources.ResourceReader System.Resources.ResourceReader/ResourceEnumerator::reader
	ResourceReader_t2604191431 * ___reader_0;
	// System.Int32 System.Resources.ResourceReader/ResourceEnumerator::index
	int32_t ___index_1;
	// System.Boolean System.Resources.ResourceReader/ResourceEnumerator::finished
	bool ___finished_2;

public:
	inline static int32_t get_offset_of_reader_0() { return static_cast<int32_t>(offsetof(ResourceEnumerator_t3773541503, ___reader_0)); }
	inline ResourceReader_t2604191431 * get_reader_0() const { return ___reader_0; }
	inline ResourceReader_t2604191431 ** get_address_of_reader_0() { return &___reader_0; }
	inline void set_reader_0(ResourceReader_t2604191431 * value)
	{
		___reader_0 = value;
		Il2CppCodeGenWriteBarrier((&___reader_0), value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(ResourceEnumerator_t3773541503, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_finished_2() { return static_cast<int32_t>(offsetof(ResourceEnumerator_t3773541503, ___finished_2)); }
	inline bool get_finished_2() const { return ___finished_2; }
	inline bool* get_address_of_finished_2() { return &___finished_2; }
	inline void set_finished_2(bool value)
	{
		___finished_2 = value;
	}
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // ACTIVATIONARGUMENTS_T640021366_H
#ifndef CRITICALFINALIZEROBJECT_T1920899984_H
#define CRITICALFINALIZEROBJECT_T1920899984_H
=======
#endif // RESOURCEENUMERATOR_T3773541503_H
#ifndef CRITICALFINALIZEROBJECT_T2985894140_H
#define CRITICALFINALIZEROBJECT_T2985894140_H
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
<<<<<<< HEAD
struct  CriticalFinalizerObject_t1920899984  : public RuntimeObject
=======
struct  CriticalFinalizerObject_t2985894140  : public RuntimeObject
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // CRITICALFINALIZEROBJECT_T1920899984_H
#ifndef EXCEPTION_T1927440687_H
#define EXCEPTION_T1927440687_H
=======
#endif // CRITICALFINALIZEROBJECT_T2985894140_H
#ifndef RESOURCEREADER_T2604191431_H
#define RESOURCEREADER_T2604191431_H
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
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
=======
// System.Resources.ResourceReader
struct  ResourceReader_t2604191431  : public RuntimeObject
{
public:
	// System.IO.BinaryReader System.Resources.ResourceReader::reader
	BinaryReader_t2313688715 * ___reader_0;
	// System.Object System.Resources.ResourceReader::readerLock
	RuntimeObject * ___readerLock_1;
	// System.Runtime.Serialization.IFormatter System.Resources.ResourceReader::formatter
	RuntimeObject* ___formatter_2;
	// System.Int32 System.Resources.ResourceReader::resourceCount
	int32_t ___resourceCount_3;
	// System.Int32 System.Resources.ResourceReader::typeCount
	int32_t ___typeCount_4;
	// System.String[] System.Resources.ResourceReader::typeNames
	StringU5BU5D_t3684662999* ___typeNames_5;
	// System.Int32[] System.Resources.ResourceReader::hashes
	Int32U5BU5D_t225491016* ___hashes_6;
	// System.Resources.ResourceReader/ResourceInfo[] System.Resources.ResourceReader::infos
	ResourceInfoU5BU5D_t2485170363* ___infos_7;
	// System.Int32 System.Resources.ResourceReader::dataSectionOffset
	int32_t ___dataSectionOffset_8;
	// System.Int64 System.Resources.ResourceReader::nameSectionOffset
	int64_t ___nameSectionOffset_9;
	// System.Int32 System.Resources.ResourceReader::resource_ver
	int32_t ___resource_ver_10;
	// System.Resources.ResourceReader/ResourceCacheItem[] System.Resources.ResourceReader::cache
	ResourceCacheItemU5BU5D_t482235848* ___cache_11;
	// System.Object System.Resources.ResourceReader::cache_lock
	RuntimeObject * ___cache_lock_12;

public:
	inline static int32_t get_offset_of_reader_0() { return static_cast<int32_t>(offsetof(ResourceReader_t2604191431, ___reader_0)); }
	inline BinaryReader_t2313688715 * get_reader_0() const { return ___reader_0; }
	inline BinaryReader_t2313688715 ** get_address_of_reader_0() { return &___reader_0; }
	inline void set_reader_0(BinaryReader_t2313688715 * value)
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

<<<<<<< HEAD
	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ___inner_exception_1)); }
	inline Exception_t1927440687 * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t1927440687 ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t1927440687 * value)
=======
	inline static int32_t get_offset_of_readerLock_1() { return static_cast<int32_t>(offsetof(ResourceReader_t2604191431, ___readerLock_1)); }
	inline RuntimeObject * get_readerLock_1() const { return ___readerLock_1; }
	inline RuntimeObject ** get_address_of_readerLock_1() { return &___readerLock_1; }
	inline void set_readerLock_1(RuntimeObject * value)
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

<<<<<<< HEAD
	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
=======
	inline static int32_t get_offset_of_formatter_2() { return static_cast<int32_t>(offsetof(ResourceReader_t2604191431, ___formatter_2)); }
	inline RuntimeObject* get_formatter_2() const { return ___formatter_2; }
	inline RuntimeObject** get_address_of_formatter_2() { return &___formatter_2; }
	inline void set_formatter_2(RuntimeObject* value)
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

<<<<<<< HEAD
	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
=======
	inline static int32_t get_offset_of_resourceCount_3() { return static_cast<int32_t>(offsetof(ResourceReader_t2604191431, ___resourceCount_3)); }
	inline int32_t get_resourceCount_3() const { return ___resourceCount_3; }
	inline int32_t* get_address_of_resourceCount_3() { return &___resourceCount_3; }
	inline void set_resourceCount_3(int32_t value)
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

<<<<<<< HEAD
	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
=======
	inline static int32_t get_offset_of_typeCount_4() { return static_cast<int32_t>(offsetof(ResourceReader_t2604191431, ___typeCount_4)); }
	inline int32_t get_typeCount_4() const { return ___typeCount_4; }
	inline int32_t* get_address_of_typeCount_4() { return &___typeCount_4; }
	inline void set_typeCount_4(int32_t value)
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

<<<<<<< HEAD
	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
=======
	inline static int32_t get_offset_of_typeNames_5() { return static_cast<int32_t>(offsetof(ResourceReader_t2604191431, ___typeNames_5)); }
	inline StringU5BU5D_t3684662999* get_typeNames_5() const { return ___typeNames_5; }
	inline StringU5BU5D_t3684662999** get_address_of_typeNames_5() { return &___typeNames_5; }
	inline void set_typeNames_5(StringU5BU5D_t3684662999* value)
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

<<<<<<< HEAD
	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
=======
	inline static int32_t get_offset_of_hashes_6() { return static_cast<int32_t>(offsetof(ResourceReader_t2604191431, ___hashes_6)); }
	inline Int32U5BU5D_t225491016* get_hashes_6() const { return ___hashes_6; }
	inline Int32U5BU5D_t225491016** get_address_of_hashes_6() { return &___hashes_6; }
	inline void set_hashes_6(Int32U5BU5D_t225491016* value)
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

<<<<<<< HEAD
	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
=======
	inline static int32_t get_offset_of_infos_7() { return static_cast<int32_t>(offsetof(ResourceReader_t2604191431, ___infos_7)); }
	inline ResourceInfoU5BU5D_t2485170363* get_infos_7() const { return ___infos_7; }
	inline ResourceInfoU5BU5D_t2485170363** get_address_of_infos_7() { return &___infos_7; }
	inline void set_infos_7(ResourceInfoU5BU5D_t2485170363* value)
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
	{
		___remote_stack_index_7 = value;
	}

<<<<<<< HEAD
	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
=======
	inline static int32_t get_offset_of_dataSectionOffset_8() { return static_cast<int32_t>(offsetof(ResourceReader_t2604191431, ___dataSectionOffset_8)); }
	inline int32_t get_dataSectionOffset_8() const { return ___dataSectionOffset_8; }
	inline int32_t* get_address_of_dataSectionOffset_8() { return &___dataSectionOffset_8; }
	inline void set_dataSectionOffset_8(int32_t value)
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
	{
		___hresult_8 = value;
	}

<<<<<<< HEAD
	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
=======
	inline static int32_t get_offset_of_nameSectionOffset_9() { return static_cast<int32_t>(offsetof(ResourceReader_t2604191431, ___nameSectionOffset_9)); }
	inline int64_t get_nameSectionOffset_9() const { return ___nameSectionOffset_9; }
	inline int64_t* get_address_of_nameSectionOffset_9() { return &___nameSectionOffset_9; }
	inline void set_nameSectionOffset_9(int64_t value)
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

<<<<<<< HEAD
	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
=======
	inline static int32_t get_offset_of_resource_ver_10() { return static_cast<int32_t>(offsetof(ResourceReader_t2604191431, ___resource_ver_10)); }
	inline int32_t get_resource_ver_10() const { return ___resource_ver_10; }
	inline int32_t* get_address_of_resource_ver_10() { return &___resource_ver_10; }
	inline void set_resource_ver_10(int32_t value)
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

<<<<<<< HEAD
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
=======
	inline static int32_t get_offset_of_cache_11() { return static_cast<int32_t>(offsetof(ResourceReader_t2604191431, ___cache_11)); }
	inline ResourceCacheItemU5BU5D_t482235848* get_cache_11() const { return ___cache_11; }
	inline ResourceCacheItemU5BU5D_t482235848** get_address_of_cache_11() { return &___cache_11; }
	inline void set_cache_11(ResourceCacheItemU5BU5D_t482235848* value)
	{
		___cache_11 = value;
		Il2CppCodeGenWriteBarrier((&___cache_11), value);
	}

	inline static int32_t get_offset_of_cache_lock_12() { return static_cast<int32_t>(offsetof(ResourceReader_t2604191431, ___cache_lock_12)); }
	inline RuntimeObject * get_cache_lock_12() const { return ___cache_lock_12; }
	inline RuntimeObject ** get_address_of_cache_lock_12() { return &___cache_lock_12; }
	inline void set_cache_lock_12(RuntimeObject * value)
	{
		___cache_lock_12 = value;
		Il2CppCodeGenWriteBarrier((&___cache_lock_12), value);
	}
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // ATTRIBUTE_T542643598_H
#ifndef CHANNELSERVICES_T2007814595_H
#define CHANNELSERVICES_T2007814595_H
=======
#endif // RESOURCEREADER_T2604191431_H
#ifndef MARSHALBYREFOBJECT_T3618389600_H
#define MARSHALBYREFOBJECT_T3618389600_H
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
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
=======
// System.MarshalByRefObject
struct  MarshalByRefObject_t3618389600  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.ServerIdentity System.MarshalByRefObject::_identity
	ServerIdentity_t2623066653 * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_t3618389600, ____identity_0)); }
	inline ServerIdentity_t2623066653 * get__identity_0() const { return ____identity_0; }
	inline ServerIdentity_t2623066653 ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(ServerIdentity_t2623066653 * value)
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
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
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // CHANNELSERVICES_T2007814595_H
#ifndef MARSHAL_T785896760_H
#define MARSHAL_T785896760_H
=======
#endif // MARSHALBYREFOBJECT_T3618389600_H
#ifndef RESOURCEMANAGER_T2407228322_H
#define RESOURCEMANAGER_T2407228322_H
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.Runtime.InteropServices.Marshal
struct  Marshal_t785896760  : public RuntimeObject
=======
// System.Resources.ResourceManager
struct  ResourceManager_t2407228322  : public RuntimeObject
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
{
public:

public:
<<<<<<< HEAD
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
=======
	inline static int32_t get_offset_of_resourceSetType_4() { return static_cast<int32_t>(offsetof(ResourceManager_t2407228322, ___resourceSetType_4)); }
	inline Type_t * get_resourceSetType_4() const { return ___resourceSetType_4; }
	inline Type_t ** get_address_of_resourceSetType_4() { return &___resourceSetType_4; }
	inline void set_resourceSetType_4(Type_t * value)
	{
		___resourceSetType_4 = value;
		Il2CppCodeGenWriteBarrier((&___resourceSetType_4), value);
	}
};

struct ResourceManager_t2407228322_StaticFields
{
public:
	// System.Collections.Hashtable System.Resources.ResourceManager::ResourceCache
	Hashtable_t31945240 * ___ResourceCache_0;
	// System.Collections.Hashtable System.Resources.ResourceManager::NonExistent
	Hashtable_t31945240 * ___NonExistent_1;
	// System.Int32 System.Resources.ResourceManager::HeaderVersionNumber
	int32_t ___HeaderVersionNumber_2;
	// System.Int32 System.Resources.ResourceManager::MagicNumber
	int32_t ___MagicNumber_3;

public:
	inline static int32_t get_offset_of_ResourceCache_0() { return static_cast<int32_t>(offsetof(ResourceManager_t2407228322_StaticFields, ___ResourceCache_0)); }
	inline Hashtable_t31945240 * get_ResourceCache_0() const { return ___ResourceCache_0; }
	inline Hashtable_t31945240 ** get_address_of_ResourceCache_0() { return &___ResourceCache_0; }
	inline void set_ResourceCache_0(Hashtable_t31945240 * value)
	{
		___ResourceCache_0 = value;
		Il2CppCodeGenWriteBarrier((&___ResourceCache_0), value);
	}

	inline static int32_t get_offset_of_NonExistent_1() { return static_cast<int32_t>(offsetof(ResourceManager_t2407228322_StaticFields, ___NonExistent_1)); }
	inline Hashtable_t31945240 * get_NonExistent_1() const { return ___NonExistent_1; }
	inline Hashtable_t31945240 ** get_address_of_NonExistent_1() { return &___NonExistent_1; }
	inline void set_NonExistent_1(Hashtable_t31945240 * value)
	{
		___NonExistent_1 = value;
		Il2CppCodeGenWriteBarrier((&___NonExistent_1), value);
	}

	inline static int32_t get_offset_of_HeaderVersionNumber_2() { return static_cast<int32_t>(offsetof(ResourceManager_t2407228322_StaticFields, ___HeaderVersionNumber_2)); }
	inline int32_t get_HeaderVersionNumber_2() const { return ___HeaderVersionNumber_2; }
	inline int32_t* get_address_of_HeaderVersionNumber_2() { return &___HeaderVersionNumber_2; }
	inline void set_HeaderVersionNumber_2(int32_t value)
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
	{
		___SystemMaxDBCSCharSize_0 = value;
	}

<<<<<<< HEAD
	inline static int32_t get_offset_of_SystemDefaultCharSize_1() { return static_cast<int32_t>(offsetof(Marshal_t785896760_StaticFields, ___SystemDefaultCharSize_1)); }
	inline int32_t get_SystemDefaultCharSize_1() const { return ___SystemDefaultCharSize_1; }
	inline int32_t* get_address_of_SystemDefaultCharSize_1() { return &___SystemDefaultCharSize_1; }
	inline void set_SystemDefaultCharSize_1(int32_t value)
=======
	inline static int32_t get_offset_of_MagicNumber_3() { return static_cast<int32_t>(offsetof(ResourceManager_t2407228322_StaticFields, ___MagicNumber_3)); }
	inline int32_t get_MagicNumber_3() const { return ___MagicNumber_3; }
	inline int32_t* get_address_of_MagicNumber_3() { return &___MagicNumber_3; }
	inline void set_MagicNumber_3(int32_t value)
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
	{
		___SystemDefaultCharSize_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // MARSHAL_T785896760_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
=======
#endif // RESOURCEMANAGER_T2407228322_H
#ifndef CONSTRUCTIONLEVELACTIVATOR_T4012315814_H
#define CONSTRUCTIONLEVELACTIVATOR_T4012315814_H
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
=======
// System.Runtime.Remoting.Activation.ConstructionLevelActivator
struct  ConstructionLevelActivator_t4012315814  : public RuntimeObject
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // MEMBERINFO_T_H
#ifndef APPDOMAINLEVELACTIVATOR_T834876328_H
#define APPDOMAINLEVELACTIVATOR_T834876328_H
=======
#endif // CONSTRUCTIONLEVELACTIVATOR_T4012315814_H
#ifndef APPDOMAINLEVELACTIVATOR_T3954966648_H
#define APPDOMAINLEVELACTIVATOR_T3954966648_H
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Activation.AppDomainLevelActivator
<<<<<<< HEAD
struct  AppDomainLevelActivator_t834876328  : public RuntimeObject
=======
struct  AppDomainLevelActivator_t3954966648  : public RuntimeObject
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
{
public:
	// System.String System.Runtime.Remoting.Activation.AppDomainLevelActivator::_activationUrl
	String_t* ____activationUrl_0;
	// System.Runtime.Remoting.Activation.IActivator System.Runtime.Remoting.Activation.AppDomainLevelActivator::_next
	RuntimeObject* ____next_1;

public:
<<<<<<< HEAD
	inline static int32_t get_offset_of__activationUrl_0() { return static_cast<int32_t>(offsetof(AppDomainLevelActivator_t834876328, ____activationUrl_0)); }
=======
	inline static int32_t get_offset_of__activationUrl_0() { return static_cast<int32_t>(offsetof(AppDomainLevelActivator_t3954966648, ____activationUrl_0)); }
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
	inline String_t* get__activationUrl_0() const { return ____activationUrl_0; }
	inline String_t** get_address_of__activationUrl_0() { return &____activationUrl_0; }
	inline void set__activationUrl_0(String_t* value)
	{
		____activationUrl_0 = value;
		Il2CppCodeGenWriteBarrier((&____activationUrl_0), value);
	}

<<<<<<< HEAD
	inline static int32_t get_offset_of__next_1() { return static_cast<int32_t>(offsetof(AppDomainLevelActivator_t834876328, ____next_1)); }
=======
	inline static int32_t get_offset_of__next_1() { return static_cast<int32_t>(offsetof(AppDomainLevelActivator_t3954966648, ____next_1)); }
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
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
#endif // APPDOMAINLEVELACTIVATOR_T834876328_H
#ifndef RESOURCEMANAGER_T264715885_H
#define RESOURCEMANAGER_T264715885_H
=======
#endif // APPDOMAINLEVELACTIVATOR_T3954966648_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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

<<<<<<< HEAD
struct ResourceManager_t264715885_StaticFields
=======
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
#ifndef MARSHAL_T88230265_H
#define MARSHAL_T88230265_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.Marshal
struct  Marshal_t88230265  : public RuntimeObject
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
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

<<<<<<< HEAD
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
=======
struct Marshal_t88230265_StaticFields
{
public:
	// System.Int32 System.Runtime.InteropServices.Marshal::SystemMaxDBCSCharSize
	int32_t ___SystemMaxDBCSCharSize_0;
	// System.Int32 System.Runtime.InteropServices.Marshal::SystemDefaultCharSize
	int32_t ___SystemDefaultCharSize_1;

public:
	inline static int32_t get_offset_of_SystemMaxDBCSCharSize_0() { return static_cast<int32_t>(offsetof(Marshal_t88230265_StaticFields, ___SystemMaxDBCSCharSize_0)); }
	inline int32_t get_SystemMaxDBCSCharSize_0() const { return ___SystemMaxDBCSCharSize_0; }
	inline int32_t* get_address_of_SystemMaxDBCSCharSize_0() { return &___SystemMaxDBCSCharSize_0; }
	inline void set_SystemMaxDBCSCharSize_0(int32_t value)
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
	{
		___HeaderVersionNumber_2 = value;
	}

<<<<<<< HEAD
	inline static int32_t get_offset_of_MagicNumber_3() { return static_cast<int32_t>(offsetof(ResourceManager_t264715885_StaticFields, ___MagicNumber_3)); }
	inline int32_t get_MagicNumber_3() const { return ___MagicNumber_3; }
	inline int32_t* get_address_of_MagicNumber_3() { return &___MagicNumber_3; }
	inline void set_MagicNumber_3(int32_t value)
=======
	inline static int32_t get_offset_of_SystemDefaultCharSize_1() { return static_cast<int32_t>(offsetof(Marshal_t88230265_StaticFields, ___SystemDefaultCharSize_1)); }
	inline int32_t get_SystemDefaultCharSize_1() const { return ___SystemDefaultCharSize_1; }
	inline int32_t* get_address_of_SystemDefaultCharSize_1() { return &___SystemDefaultCharSize_1; }
	inline void set_SystemDefaultCharSize_1(int32_t value)
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
	{
		___MagicNumber_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // RESOURCEMANAGER_T264715885_H
#ifndef ACTIVATIONSERVICES_T1532663650_H
#define ACTIVATIONSERVICES_T1532663650_H
=======
#endif // MARSHAL_T88230265_H
#ifndef ACTIVATIONSERVICES_T2358209833_H
#define ACTIVATIONSERVICES_T2358209833_H
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Activation.ActivationServices
<<<<<<< HEAD
struct  ActivationServices_t1532663650  : public RuntimeObject
=======
struct  ActivationServices_t2358209833  : public RuntimeObject
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
{
public:

public:
};

<<<<<<< HEAD
struct ActivationServices_t1532663650_StaticFields
=======
struct ActivationServices_t2358209833_StaticFields
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
{
public:
	// System.Runtime.Remoting.Activation.IActivator System.Runtime.Remoting.Activation.ActivationServices::_constructionActivator
	RuntimeObject* ____constructionActivator_0;

public:
<<<<<<< HEAD
	inline static int32_t get_offset_of__constructionActivator_0() { return static_cast<int32_t>(offsetof(ActivationServices_t1532663650_StaticFields, ____constructionActivator_0)); }
=======
	inline static int32_t get_offset_of__constructionActivator_0() { return static_cast<int32_t>(offsetof(ActivationServices_t2358209833_StaticFields, ____constructionActivator_0)); }
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
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
#endif // ACTIVATIONSERVICES_T1532663650_H
#ifndef RESOURCEREADER_T2463923611_H
#define RESOURCEREADER_T2463923611_H
=======
#endif // ACTIVATIONSERVICES_T2358209833_H
#ifndef CROSSAPPDOMAINCHANNEL_T1541911488_H
#define CROSSAPPDOMAINCHANNEL_T1541911488_H
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.Resources.ResourceReader
struct  ResourceReader_t2463923611  : public RuntimeObject
=======
// System.Runtime.Remoting.Channels.CrossAppDomainChannel
struct  CrossAppDomainChannel_t1541911488  : public RuntimeObject
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
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

<<<<<<< HEAD
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
=======
struct CrossAppDomainChannel_t1541911488_StaticFields
{
public:
	// System.Object System.Runtime.Remoting.Channels.CrossAppDomainChannel::s_lock
	RuntimeObject * ___s_lock_0;

public:
	inline static int32_t get_offset_of_s_lock_0() { return static_cast<int32_t>(offsetof(CrossAppDomainChannel_t1541911488_StaticFields, ___s_lock_0)); }
	inline RuntimeObject * get_s_lock_0() const { return ___s_lock_0; }
	inline RuntimeObject ** get_address_of_s_lock_0() { return &___s_lock_0; }
	inline void set_s_lock_0(RuntimeObject * value)
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
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
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
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
=======
#endif // CROSSAPPDOMAINCHANNEL_T1541911488_H
#ifndef STRONGNAMEKEYPAIR_T3784948329_H
#define STRONGNAMEKEYPAIR_T3784948329_H
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.StrongNameKeyPair
<<<<<<< HEAD
struct  StrongNameKeyPair_t4090869089  : public RuntimeObject
{
public:
	// System.Byte[] System.Reflection.StrongNameKeyPair::_publicKey
	ByteU5BU5D_t3397334013* ____publicKey_0;
=======
struct  StrongNameKeyPair_t3784948329  : public RuntimeObject
{
public:
	// System.Byte[] System.Reflection.StrongNameKeyPair::_publicKey
	ByteU5BU5D_t1659287647* ____publicKey_0;
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
	// System.String System.Reflection.StrongNameKeyPair::_keyPairContainer
	String_t* ____keyPairContainer_1;
	// System.Boolean System.Reflection.StrongNameKeyPair::_keyPairExported
	bool ____keyPairExported_2;
	// System.Byte[] System.Reflection.StrongNameKeyPair::_keyPairArray
<<<<<<< HEAD
	ByteU5BU5D_t3397334013* ____keyPairArray_3;
	// System.Security.Cryptography.RSA System.Reflection.StrongNameKeyPair::_rsa
	RSA_t3719518354 * ____rsa_4;

public:
	inline static int32_t get_offset_of__publicKey_0() { return static_cast<int32_t>(offsetof(StrongNameKeyPair_t4090869089, ____publicKey_0)); }
	inline ByteU5BU5D_t3397334013* get__publicKey_0() const { return ____publicKey_0; }
	inline ByteU5BU5D_t3397334013** get_address_of__publicKey_0() { return &____publicKey_0; }
	inline void set__publicKey_0(ByteU5BU5D_t3397334013* value)
=======
	ByteU5BU5D_t1659287647* ____keyPairArray_3;
	// System.Security.Cryptography.RSA System.Reflection.StrongNameKeyPair::_rsa
	RSA_t309483443 * ____rsa_4;

public:
	inline static int32_t get_offset_of__publicKey_0() { return static_cast<int32_t>(offsetof(StrongNameKeyPair_t3784948329, ____publicKey_0)); }
	inline ByteU5BU5D_t1659287647* get__publicKey_0() const { return ____publicKey_0; }
	inline ByteU5BU5D_t1659287647** get_address_of__publicKey_0() { return &____publicKey_0; }
	inline void set__publicKey_0(ByteU5BU5D_t1659287647* value)
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
	{
		____publicKey_0 = value;
		Il2CppCodeGenWriteBarrier((&____publicKey_0), value);
	}

<<<<<<< HEAD
	inline static int32_t get_offset_of__keyPairContainer_1() { return static_cast<int32_t>(offsetof(StrongNameKeyPair_t4090869089, ____keyPairContainer_1)); }
=======
	inline static int32_t get_offset_of__keyPairContainer_1() { return static_cast<int32_t>(offsetof(StrongNameKeyPair_t3784948329, ____keyPairContainer_1)); }
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
	inline String_t* get__keyPairContainer_1() const { return ____keyPairContainer_1; }
	inline String_t** get_address_of__keyPairContainer_1() { return &____keyPairContainer_1; }
	inline void set__keyPairContainer_1(String_t* value)
	{
		____keyPairContainer_1 = value;
		Il2CppCodeGenWriteBarrier((&____keyPairContainer_1), value);
	}

<<<<<<< HEAD
	inline static int32_t get_offset_of__keyPairExported_2() { return static_cast<int32_t>(offsetof(StrongNameKeyPair_t4090869089, ____keyPairExported_2)); }
=======
	inline static int32_t get_offset_of__keyPairExported_2() { return static_cast<int32_t>(offsetof(StrongNameKeyPair_t3784948329, ____keyPairExported_2)); }
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
	inline bool get__keyPairExported_2() const { return ____keyPairExported_2; }
	inline bool* get_address_of__keyPairExported_2() { return &____keyPairExported_2; }
	inline void set__keyPairExported_2(bool value)
	{
		____keyPairExported_2 = value;
	}

<<<<<<< HEAD
	inline static int32_t get_offset_of__keyPairArray_3() { return static_cast<int32_t>(offsetof(StrongNameKeyPair_t4090869089, ____keyPairArray_3)); }
	inline ByteU5BU5D_t3397334013* get__keyPairArray_3() const { return ____keyPairArray_3; }
	inline ByteU5BU5D_t3397334013** get_address_of__keyPairArray_3() { return &____keyPairArray_3; }
	inline void set__keyPairArray_3(ByteU5BU5D_t3397334013* value)
=======
	inline static int32_t get_offset_of__keyPairArray_3() { return static_cast<int32_t>(offsetof(StrongNameKeyPair_t3784948329, ____keyPairArray_3)); }
	inline ByteU5BU5D_t1659287647* get__keyPairArray_3() const { return ____keyPairArray_3; }
	inline ByteU5BU5D_t1659287647** get_address_of__keyPairArray_3() { return &____keyPairArray_3; }
	inline void set__keyPairArray_3(ByteU5BU5D_t1659287647* value)
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
	{
		____keyPairArray_3 = value;
		Il2CppCodeGenWriteBarrier((&____keyPairArray_3), value);
	}

<<<<<<< HEAD
	inline static int32_t get_offset_of__rsa_4() { return static_cast<int32_t>(offsetof(StrongNameKeyPair_t4090869089, ____rsa_4)); }
	inline RSA_t3719518354 * get__rsa_4() const { return ____rsa_4; }
	inline RSA_t3719518354 ** get_address_of__rsa_4() { return &____rsa_4; }
	inline void set__rsa_4(RSA_t3719518354 * value)
=======
	inline static int32_t get_offset_of__rsa_4() { return static_cast<int32_t>(offsetof(StrongNameKeyPair_t3784948329, ____rsa_4)); }
	inline RSA_t309483443 * get__rsa_4() const { return ____rsa_4; }
	inline RSA_t309483443 ** get_address_of__rsa_4() { return &____rsa_4; }
	inline void set__rsa_4(RSA_t309483443 * value)
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
	{
		____rsa_4 = value;
		Il2CppCodeGenWriteBarrier((&____rsa_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // STRONGNAMEKEYPAIR_T4090869089_H
#ifndef RESOURCESET_T1348327650_H
#define RESOURCESET_T1348327650_H
=======
#endif // STRONGNAMEKEYPAIR_T3784948329_H
#ifndef CONTEXTLEVELACTIVATOR_T2597063062_H
#define CONTEXTLEVELACTIVATOR_T2597063062_H
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.Resources.ResourceSet
struct  ResourceSet_t1348327650  : public RuntimeObject
=======
// System.Runtime.Remoting.Activation.ContextLevelActivator
struct  ContextLevelActivator_t2597063062  : public RuntimeObject
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
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
<<<<<<< HEAD
	inline static int32_t get_offset_of_Reader_0() { return static_cast<int32_t>(offsetof(ResourceSet_t1348327650, ___Reader_0)); }
	inline RuntimeObject* get_Reader_0() const { return ___Reader_0; }
	inline RuntimeObject** get_address_of_Reader_0() { return &___Reader_0; }
	inline void set_Reader_0(RuntimeObject* value)
=======
	inline static int32_t get_offset_of_m_NextActivator_0() { return static_cast<int32_t>(offsetof(ContextLevelActivator_t2597063062, ___m_NextActivator_0)); }
	inline RuntimeObject* get_m_NextActivator_0() const { return ___m_NextActivator_0; }
	inline RuntimeObject** get_address_of_m_NextActivator_0() { return &___m_NextActivator_0; }
	inline void set_m_NextActivator_0(RuntimeObject* value)
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
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
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // RESOURCESET_T1348327650_H
#ifndef RESOURCEENUMERATOR_T2665690338_H
#define RESOURCEENUMERATOR_T2665690338_H
=======
#endif // CONTEXTLEVELACTIVATOR_T2597063062_H
#ifndef CROSSAPPDOMAINDATA_T3288642556_H
#define CROSSAPPDOMAINDATA_T3288642556_H
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.Resources.ResourceReader/ResourceEnumerator
struct  ResourceEnumerator_t2665690338  : public RuntimeObject
=======
// System.Runtime.Remoting.Channels.CrossAppDomainData
struct  CrossAppDomainData_t3288642556  : public RuntimeObject
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
{
public:
	// System.Resources.ResourceReader System.Resources.ResourceReader/ResourceEnumerator::reader
	ResourceReader_t2463923611 * ___reader_0;
	// System.Int32 System.Resources.ResourceReader/ResourceEnumerator::index
	int32_t ___index_1;
	// System.Boolean System.Resources.ResourceReader/ResourceEnumerator::finished
	bool ___finished_2;

public:
<<<<<<< HEAD
	inline static int32_t get_offset_of_reader_0() { return static_cast<int32_t>(offsetof(ResourceEnumerator_t2665690338, ___reader_0)); }
	inline ResourceReader_t2463923611 * get_reader_0() const { return ___reader_0; }
	inline ResourceReader_t2463923611 ** get_address_of_reader_0() { return &___reader_0; }
	inline void set_reader_0(ResourceReader_t2463923611 * value)
=======
	inline static int32_t get_offset_of__ContextID_0() { return static_cast<int32_t>(offsetof(CrossAppDomainData_t3288642556, ____ContextID_0)); }
	inline RuntimeObject * get__ContextID_0() const { return ____ContextID_0; }
	inline RuntimeObject ** get_address_of__ContextID_0() { return &____ContextID_0; }
	inline void set__ContextID_0(RuntimeObject * value)
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
	{
		___reader_0 = value;
		Il2CppCodeGenWriteBarrier((&___reader_0), value);
	}

<<<<<<< HEAD
	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(ResourceEnumerator_t2665690338, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
=======
	inline static int32_t get_offset_of__DomainID_1() { return static_cast<int32_t>(offsetof(CrossAppDomainData_t3288642556, ____DomainID_1)); }
	inline int32_t get__DomainID_1() const { return ____DomainID_1; }
	inline int32_t* get_address_of__DomainID_1() { return &____DomainID_1; }
	inline void set__DomainID_1(int32_t value)
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
	{
		___index_1 = value;
	}

<<<<<<< HEAD
	inline static int32_t get_offset_of_finished_2() { return static_cast<int32_t>(offsetof(ResourceEnumerator_t2665690338, ___finished_2)); }
	inline bool get_finished_2() const { return ___finished_2; }
	inline bool* get_address_of_finished_2() { return &___finished_2; }
	inline void set_finished_2(bool value)
=======
	inline static int32_t get_offset_of__processGuid_2() { return static_cast<int32_t>(offsetof(CrossAppDomainData_t3288642556, ____processGuid_2)); }
	inline String_t* get__processGuid_2() const { return ____processGuid_2; }
	inline String_t** get_address_of__processGuid_2() { return &____processGuid_2; }
	inline void set__processGuid_2(String_t* value)
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
	{
		___finished_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // RESOURCEENUMERATOR_T2665690338_H
#ifndef CONTEXTLEVELACTIVATOR_T1784331636_H
#define CONTEXTLEVELACTIVATOR_T1784331636_H
=======
#endif // CROSSAPPDOMAINDATA_T3288642556_H
#ifndef DISPIDATTRIBUTE_T3544301283_H
#define DISPIDATTRIBUTE_T3544301283_H
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.Runtime.Remoting.Activation.ContextLevelActivator
struct  ContextLevelActivator_t1784331636  : public RuntimeObject
=======
// System.Runtime.InteropServices.DispIdAttribute
struct  DispIdAttribute_t3544301283  : public Attribute_t512917069
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
{
public:
	// System.Runtime.Remoting.Activation.IActivator System.Runtime.Remoting.Activation.ContextLevelActivator::m_NextActivator
	RuntimeObject* ___m_NextActivator_0;

public:
<<<<<<< HEAD
	inline static int32_t get_offset_of_m_NextActivator_0() { return static_cast<int32_t>(offsetof(ContextLevelActivator_t1784331636, ___m_NextActivator_0)); }
	inline RuntimeObject* get_m_NextActivator_0() const { return ___m_NextActivator_0; }
	inline RuntimeObject** get_address_of_m_NextActivator_0() { return &___m_NextActivator_0; }
	inline void set_m_NextActivator_0(RuntimeObject* value)
=======
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(DispIdAttribute_t3544301283, ___id_0)); }
	inline int32_t get_id_0() const { return ___id_0; }
	inline int32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(int32_t value)
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
	{
		___m_NextActivator_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_NextActivator_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // CONTEXTLEVELACTIVATOR_T1784331636_H
#ifndef TYPELIBVERSIONATTRIBUTE_T3346496961_H
#define TYPELIBVERSIONATTRIBUTE_T3346496961_H
=======
#endif // DISPIDATTRIBUTE_T3544301283_H
#ifndef REMOTEACTIVATOR_T1059646665_H
#define REMOTEACTIVATOR_T1059646665_H
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.Runtime.InteropServices.TypeLibVersionAttribute
struct  TypeLibVersionAttribute_t3346496961  : public Attribute_t542643598
=======
// System.Runtime.Remoting.Activation.RemoteActivator
struct  RemoteActivator_t1059646665  : public MarshalByRefObject_t3618389600
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
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
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // TYPELIBVERSIONATTRIBUTE_T3346496961_H
#ifndef TYPELIBIMPORTCLASSATTRIBUTE_T2390314680_H
#define TYPELIBIMPORTCLASSATTRIBUTE_T2390314680_H
=======
#endif // REMOTEACTIVATOR_T1059646665_H
#ifndef GCHANDLE_T191853912_H
#define GCHANDLE_T191853912_H
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.Runtime.InteropServices.TypeLibImportClassAttribute
struct  TypeLibImportClassAttribute_t2390314680  : public Attribute_t542643598
=======
// System.Runtime.InteropServices.GCHandle
struct  GCHandle_t191853912 
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
{
public:
	// System.String System.Runtime.InteropServices.TypeLibImportClassAttribute::_importClass
	String_t* ____importClass_0;

public:
<<<<<<< HEAD
	inline static int32_t get_offset_of__importClass_0() { return static_cast<int32_t>(offsetof(TypeLibImportClassAttribute_t2390314680, ____importClass_0)); }
	inline String_t* get__importClass_0() const { return ____importClass_0; }
	inline String_t** get_address_of__importClass_0() { return &____importClass_0; }
	inline void set__importClass_0(String_t* value)
=======
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t191853912, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
	{
		____importClass_0 = value;
		Il2CppCodeGenWriteBarrier((&____importClass_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // TYPELIBIMPORTCLASSATTRIBUTE_T2390314680_H
#ifndef PRESERVESIGATTRIBUTE_T1564965109_H
#define PRESERVESIGATTRIBUTE_T1564965109_H
=======
#endif // GCHANDLE_T191853912_H
#ifndef PRESERVESIGATTRIBUTE_T3466380234_H
#define PRESERVESIGATTRIBUTE_T3466380234_H
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.PreserveSigAttribute
<<<<<<< HEAD
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
=======
struct  PreserveSigAttribute_t3466380234  : public Attribute_t512917069
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // REMOTEACTIVATOR_T213750447_H
#ifndef COMCOMPATIBLEVERSIONATTRIBUTE_T1884740313_H
#define COMCOMPATIBLEVERSIONATTRIBUTE_T1884740313_H
=======
#endif // PRESERVESIGATTRIBUTE_T3466380234_H
#ifndef COMCOMPATIBLEVERSIONATTRIBUTE_T2216412496_H
#define COMCOMPATIBLEVERSIONATTRIBUTE_T2216412496_H
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ComCompatibleVersionAttribute
<<<<<<< HEAD
struct  ComCompatibleVersionAttribute_t1884740313  : public Attribute_t542643598
=======
struct  ComCompatibleVersionAttribute_t2216412496  : public Attribute_t512917069
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
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
	inline static int32_t get_offset_of_major_0() { return static_cast<int32_t>(offsetof(ComCompatibleVersionAttribute_t1884740313, ___major_0)); }
=======
	inline static int32_t get_offset_of_major_0() { return static_cast<int32_t>(offsetof(ComCompatibleVersionAttribute_t2216412496, ___major_0)); }
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
	inline int32_t get_major_0() const { return ___major_0; }
	inline int32_t* get_address_of_major_0() { return &___major_0; }
	inline void set_major_0(int32_t value)
	{
		___major_0 = value;
	}

<<<<<<< HEAD
	inline static int32_t get_offset_of_minor_1() { return static_cast<int32_t>(offsetof(ComCompatibleVersionAttribute_t1884740313, ___minor_1)); }
=======
	inline static int32_t get_offset_of_minor_1() { return static_cast<int32_t>(offsetof(ComCompatibleVersionAttribute_t2216412496, ___minor_1)); }
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
	inline int32_t get_minor_1() const { return ___minor_1; }
	inline int32_t* get_address_of_minor_1() { return &___minor_1; }
	inline void set_minor_1(int32_t value)
	{
		___minor_1 = value;
	}

<<<<<<< HEAD
	inline static int32_t get_offset_of_build_2() { return static_cast<int32_t>(offsetof(ComCompatibleVersionAttribute_t1884740313, ___build_2)); }
=======
	inline static int32_t get_offset_of_build_2() { return static_cast<int32_t>(offsetof(ComCompatibleVersionAttribute_t2216412496, ___build_2)); }
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
	inline int32_t get_build_2() const { return ___build_2; }
	inline int32_t* get_address_of_build_2() { return &___build_2; }
	inline void set_build_2(int32_t value)
	{
		___build_2 = value;
	}

<<<<<<< HEAD
	inline static int32_t get_offset_of_revision_3() { return static_cast<int32_t>(offsetof(ComCompatibleVersionAttribute_t1884740313, ___revision_3)); }
=======
	inline static int32_t get_offset_of_revision_3() { return static_cast<int32_t>(offsetof(ComCompatibleVersionAttribute_t2216412496, ___revision_3)); }
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
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
#endif // COMCOMPATIBLEVERSIONATTRIBUTE_T1884740313_H
#ifndef DISPIDATTRIBUTE_T607560947_H
#define DISPIDATTRIBUTE_T607560947_H
=======
#endif // COMCOMPATIBLEVERSIONATTRIBUTE_T2216412496_H
#ifndef COMDEFAULTINTERFACEATTRIBUTE_T518242814_H
#define COMDEFAULTINTERFACEATTRIBUTE_T518242814_H
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.Runtime.InteropServices.DispIdAttribute
struct  DispIdAttribute_t607560947  : public Attribute_t542643598
=======
// System.Runtime.InteropServices.ComDefaultInterfaceAttribute
struct  ComDefaultInterfaceAttribute_t518242814  : public Attribute_t512917069
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
{
public:
	// System.Int32 System.Runtime.InteropServices.DispIdAttribute::id
	int32_t ___id_0;

public:
<<<<<<< HEAD
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(DispIdAttribute_t607560947, ___id_0)); }
	inline int32_t get_id_0() const { return ___id_0; }
	inline int32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(int32_t value)
=======
	inline static int32_t get_offset_of__type_0() { return static_cast<int32_t>(offsetof(ComDefaultInterfaceAttribute_t518242814, ____type_0)); }
	inline Type_t * get__type_0() const { return ____type_0; }
	inline Type_t ** get_address_of__type_0() { return &____type_0; }
	inline void set__type_0(Type_t * value)
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
	{
		___id_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // DISPIDATTRIBUTE_T607560947_H
#ifndef GCHANDLE_T3409268066_H
#define GCHANDLE_T3409268066_H
=======
#endif // COMDEFAULTINTERFACEATTRIBUTE_T518242814_H
#ifndef STRINGFREEZINGATTRIBUTE_T2963477818_H
#define STRINGFREEZINGATTRIBUTE_T2963477818_H
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.Runtime.InteropServices.GCHandle
struct  GCHandle_t3409268066 
=======
// System.Runtime.CompilerServices.StringFreezingAttribute
struct  StringFreezingAttribute_t2963477818  : public Attribute_t512917069
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
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
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // GCHANDLE_T3409268066_H
#ifndef COMDEFAULTINTERFACEATTRIBUTE_T347642415_H
#define COMDEFAULTINTERFACEATTRIBUTE_T347642415_H
=======
#endif // STRINGFREEZINGATTRIBUTE_T2963477818_H
#ifndef ENUM_T796736480_H
#define ENUM_T796736480_H
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
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
=======
// System.Enum
struct  Enum_t796736480  : public ValueType_t2664944137
{
public:

public:
};

struct Enum_t796736480_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3894503091* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t796736480_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3894503091* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3894503091** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3894503091* value)
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
	{
		____type_0 = value;
		Il2CppCodeGenWriteBarrier((&____type_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // COMDEFAULTINTERFACEATTRIBUTE_T347642415_H
#ifndef RUNTIMERESOURCESET_T1442459318_H
#define RUNTIMERESOURCESET_T1442459318_H
=======
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t796736480_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t796736480_marshaled_com
{
};
#endif // ENUM_T796736480_H
#ifndef TARGETEXCEPTION_T3835191981_H
#define TARGETEXCEPTION_T3835191981_H
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.Resources.RuntimeResourceSet
struct  RuntimeResourceSet_t1442459318  : public ResourceSet_t1348327650
=======
// System.Reflection.TargetException
struct  TargetException_t3835191981  : public Exception_t1506159279
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // RUNTIMERESOURCESET_T1442459318_H
#ifndef RESOURCECACHEITEM_T333236149_H
#define RESOURCECACHEITEM_T333236149_H
=======
#endif // TARGETEXCEPTION_T3835191981_H
#ifndef TARGETINVOCATIONEXCEPTION_T2807018114_H
#define TARGETINVOCATIONEXCEPTION_T2807018114_H
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.Resources.ResourceReader/ResourceCacheItem
struct  ResourceCacheItem_t333236149 
=======
// System.Reflection.TargetInvocationException
struct  TargetInvocationException_t2807018114  : public Exception_t1506159279
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
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
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
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
=======
#endif // TARGETINVOCATIONEXCEPTION_T2807018114_H
#ifndef TARGETPARAMETERCOUNTEXCEPTION_T952587530_H
#define TARGETPARAMETERCOUNTEXCEPTION_T952587530_H
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.Resources.ResourceReader/ResourceInfo
struct  ResourceInfo_t3933049236 
=======
// System.Reflection.TargetParameterCountException
struct  TargetParameterCountException_t952587530  : public Exception_t1506159279
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
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
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
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
=======
#endif // TARGETPARAMETERCOUNTEXCEPTION_T952587530_H
#ifndef CONTEXTATTRIBUTE_T2778268858_H
#define CONTEXTATTRIBUTE_T2778268858_H
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Contexts.ContextAttribute
<<<<<<< HEAD
struct  ContextAttribute_t197102333  : public Attribute_t542643598
=======
struct  ContextAttribute_t2778268858  : public Attribute_t512917069
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
{
public:
	// System.String System.Runtime.Remoting.Contexts.ContextAttribute::AttributeName
	String_t* ___AttributeName_0;

public:
<<<<<<< HEAD
	inline static int32_t get_offset_of_AttributeName_0() { return static_cast<int32_t>(offsetof(ContextAttribute_t197102333, ___AttributeName_0)); }
=======
	inline static int32_t get_offset_of_AttributeName_0() { return static_cast<int32_t>(offsetof(ContextAttribute_t2778268858, ___AttributeName_0)); }
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
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
#endif // CONTEXTATTRIBUTE_T197102333_H
#ifndef NEUTRALRESOURCESLANGUAGEATTRIBUTE_T3267676636_H
#define NEUTRALRESOURCESLANGUAGEATTRIBUTE_T3267676636_H
=======
#endif // CONTEXTATTRIBUTE_T2778268858_H
#ifndef NEUTRALRESOURCESLANGUAGEATTRIBUTE_T3783838449_H
#define NEUTRALRESOURCESLANGUAGEATTRIBUTE_T3783838449_H
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.NeutralResourcesLanguageAttribute
<<<<<<< HEAD
struct  NeutralResourcesLanguageAttribute_t3267676636  : public Attribute_t542643598
=======
struct  NeutralResourcesLanguageAttribute_t3783838449  : public Attribute_t512917069
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
{
public:
	// System.String System.Resources.NeutralResourcesLanguageAttribute::culture
	String_t* ___culture_0;

public:
<<<<<<< HEAD
	inline static int32_t get_offset_of_culture_0() { return static_cast<int32_t>(offsetof(NeutralResourcesLanguageAttribute_t3267676636, ___culture_0)); }
=======
	inline static int32_t get_offset_of_culture_0() { return static_cast<int32_t>(offsetof(NeutralResourcesLanguageAttribute_t3783838449, ___culture_0)); }
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
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
#endif // NEUTRALRESOURCESLANGUAGEATTRIBUTE_T3267676636_H
#ifndef TARGETPARAMETERCOUNTEXCEPTION_T1554451430_H
#define TARGETPARAMETERCOUNTEXCEPTION_T1554451430_H
=======
#endif // NEUTRALRESOURCESLANGUAGEATTRIBUTE_T3783838449_H
#ifndef RESOURCEINFO_T4108375630_H
#define RESOURCEINFO_T4108375630_H
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.Reflection.TargetParameterCountException
struct  TargetParameterCountException_t1554451430  : public Exception_t1927440687
=======
// System.Resources.ResourceReader/ResourceInfo
struct  ResourceInfo_t4108375630 
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
{
public:

public:
<<<<<<< HEAD
=======
	inline static int32_t get_offset_of_ValuePosition_0() { return static_cast<int32_t>(offsetof(ResourceInfo_t4108375630, ___ValuePosition_0)); }
	inline int64_t get_ValuePosition_0() const { return ___ValuePosition_0; }
	inline int64_t* get_address_of_ValuePosition_0() { return &___ValuePosition_0; }
	inline void set_ValuePosition_0(int64_t value)
	{
		___ValuePosition_0 = value;
	}

	inline static int32_t get_offset_of_ResourceName_1() { return static_cast<int32_t>(offsetof(ResourceInfo_t4108375630, ___ResourceName_1)); }
	inline String_t* get_ResourceName_1() const { return ___ResourceName_1; }
	inline String_t** get_address_of_ResourceName_1() { return &___ResourceName_1; }
	inline void set_ResourceName_1(String_t* value)
	{
		___ResourceName_1 = value;
		Il2CppCodeGenWriteBarrier((&___ResourceName_1), value);
	}

	inline static int32_t get_offset_of_TypeIndex_2() { return static_cast<int32_t>(offsetof(ResourceInfo_t4108375630, ___TypeIndex_2)); }
	inline int32_t get_TypeIndex_2() const { return ___TypeIndex_2; }
	inline int32_t* get_address_of_TypeIndex_2() { return &___TypeIndex_2; }
	inline void set_TypeIndex_2(int32_t value)
	{
		___TypeIndex_2 = value;
	}
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // TARGETPARAMETERCOUNTEXCEPTION_T1554451430_H
#ifndef TARGETINVOCATIONEXCEPTION_T4098620458_H
#define TARGETINVOCATIONEXCEPTION_T4098620458_H
=======
// Native definition for P/Invoke marshalling of System.Resources.ResourceReader/ResourceInfo
struct ResourceInfo_t4108375630_marshaled_pinvoke
{
	int64_t ___ValuePosition_0;
	char* ___ResourceName_1;
	int32_t ___TypeIndex_2;
};
// Native definition for COM marshalling of System.Resources.ResourceReader/ResourceInfo
struct ResourceInfo_t4108375630_marshaled_com
{
	int64_t ___ValuePosition_0;
	Il2CppChar* ___ResourceName_1;
	int32_t ___TypeIndex_2;
};
#endif // RESOURCEINFO_T4108375630_H
#ifndef BESTFITMAPPINGATTRIBUTE_T4038383014_H
#define BESTFITMAPPINGATTRIBUTE_T4038383014_H
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.Reflection.TargetInvocationException
struct  TargetInvocationException_t4098620458  : public Exception_t1927440687
=======
// System.Runtime.InteropServices.BestFitMappingAttribute
struct  BestFitMappingAttribute_t4038383014  : public Attribute_t512917069
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
{
public:

public:
<<<<<<< HEAD
=======
	inline static int32_t get_offset_of_bfm_0() { return static_cast<int32_t>(offsetof(BestFitMappingAttribute_t4038383014, ___bfm_0)); }
	inline bool get_bfm_0() const { return ___bfm_0; }
	inline bool* get_address_of_bfm_0() { return &___bfm_0; }
	inline void set_bfm_0(bool value)
	{
		___bfm_0 = value;
	}
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // TARGETINVOCATIONEXCEPTION_T4098620458_H
#ifndef TARGETEXCEPTION_T1572104820_H
#define TARGETEXCEPTION_T1572104820_H
=======
#endif // BESTFITMAPPINGATTRIBUTE_T4038383014_H
#ifndef RESOURCECACHEITEM_T210456197_H
#define RESOURCECACHEITEM_T210456197_H
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.Reflection.TargetException
struct  TargetException_t1572104820  : public Exception_t1927440687
=======
// System.Resources.ResourceReader/ResourceCacheItem
struct  ResourceCacheItem_t210456197 
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
{
public:

public:
<<<<<<< HEAD
=======
	inline static int32_t get_offset_of_ResourceName_0() { return static_cast<int32_t>(offsetof(ResourceCacheItem_t210456197, ___ResourceName_0)); }
	inline String_t* get_ResourceName_0() const { return ___ResourceName_0; }
	inline String_t** get_address_of_ResourceName_0() { return &___ResourceName_0; }
	inline void set_ResourceName_0(String_t* value)
	{
		___ResourceName_0 = value;
		Il2CppCodeGenWriteBarrier((&___ResourceName_0), value);
	}

	inline static int32_t get_offset_of_ResourceValue_1() { return static_cast<int32_t>(offsetof(ResourceCacheItem_t210456197, ___ResourceValue_1)); }
	inline RuntimeObject * get_ResourceValue_1() const { return ___ResourceValue_1; }
	inline RuntimeObject ** get_address_of_ResourceValue_1() { return &___ResourceValue_1; }
	inline void set_ResourceValue_1(RuntimeObject * value)
	{
		___ResourceValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___ResourceValue_1), value);
	}
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // TARGETEXCEPTION_T1572104820_H
#ifndef SATELLITECONTRACTVERSIONATTRIBUTE_T2989984391_H
#define SATELLITECONTRACTVERSIONATTRIBUTE_T2989984391_H
=======
// Native definition for P/Invoke marshalling of System.Resources.ResourceReader/ResourceCacheItem
struct ResourceCacheItem_t210456197_marshaled_pinvoke
{
	char* ___ResourceName_0;
	Il2CppIUnknown* ___ResourceValue_1;
};
// Native definition for COM marshalling of System.Resources.ResourceReader/ResourceCacheItem
struct ResourceCacheItem_t210456197_marshaled_com
{
	Il2CppChar* ___ResourceName_0;
	Il2CppIUnknown* ___ResourceValue_1;
};
#endif // RESOURCECACHEITEM_T210456197_H
#ifndef SATELLITECONTRACTVERSIONATTRIBUTE_T216834573_H
#define SATELLITECONTRACTVERSIONATTRIBUTE_T216834573_H
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.SatelliteContractVersionAttribute
<<<<<<< HEAD
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
=======
struct  SatelliteContractVersionAttribute_t216834573  : public Attribute_t512917069
{
public:
	// System.Version System.Resources.SatelliteContractVersionAttribute::ver
	Version_t2233809809 * ___ver_0;

public:
	inline static int32_t get_offset_of_ver_0() { return static_cast<int32_t>(offsetof(SatelliteContractVersionAttribute_t216834573, ___ver_0)); }
	inline Version_t2233809809 * get_ver_0() const { return ___ver_0; }
	inline Version_t2233809809 ** get_address_of_ver_0() { return &___ver_0; }
	inline void set_ver_0(Version_t2233809809 * value)
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
	{
		___ver_0 = value;
		Il2CppCodeGenWriteBarrier((&___ver_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // SATELLITECONTRACTVERSIONATTRIBUTE_T2989984391_H
#ifndef ENUM_T2459695545_H
#define ENUM_T2459695545_H
=======
#endif // SATELLITECONTRACTVERSIONATTRIBUTE_T216834573_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // BESTFITMAPPINGATTRIBUTE_T1604378579_H
#ifndef STRINGFREEZINGATTRIBUTE_T2691375565_H
#define STRINGFREEZINGATTRIBUTE_T2691375565_H
=======
#endif // INTPTR_T_H
#ifndef WIN32VERSIONRESOURCE_T272676701_H
#define WIN32VERSIONRESOURCE_T272676701_H
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.Runtime.CompilerServices.StringFreezingAttribute
struct  StringFreezingAttribute_t2691375565  : public Attribute_t542643598
=======
// System.Resources.Win32VersionResource
struct  Win32VersionResource_t272676701  : public Win32Resource_t1446037021
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // STRINGFREEZINGATTRIBUTE_T2691375565_H
#ifndef SYSTEMEXCEPTION_T3877406272_H
#define SYSTEMEXCEPTION_T3877406272_H
=======
#endif // WIN32VERSIONRESOURCE_T272676701_H
#ifndef SYSTEMEXCEPTION_T1314435123_H
#define SYSTEMEXCEPTION_T1314435123_H
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
<<<<<<< HEAD
struct  SystemException_t3877406272  : public Exception_t1927440687
=======
struct  SystemException_t1314435123  : public Exception_t1506159279
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // SYSTEMEXCEPTION_T3877406272_H
#ifndef COMPILATIONRELAXATIONSATTRIBUTE_T238494011_H
#define COMPILATIONRELAXATIONSATTRIBUTE_T238494011_H
=======
#endif // SYSTEMEXCEPTION_T1314435123_H
#ifndef COMPILATIONRELAXATIONSATTRIBUTE_T561620503_H
#define COMPILATIONRELAXATIONSATTRIBUTE_T561620503_H
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
<<<<<<< HEAD
struct  CompilationRelaxationsAttribute_t238494011  : public Attribute_t542643598
=======
struct  CompilationRelaxationsAttribute_t561620503  : public Attribute_t512917069
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
{
public:
	// System.Int32 System.Runtime.CompilerServices.CompilationRelaxationsAttribute::relax
	int32_t ___relax_0;

public:
<<<<<<< HEAD
	inline static int32_t get_offset_of_relax_0() { return static_cast<int32_t>(offsetof(CompilationRelaxationsAttribute_t238494011, ___relax_0)); }
=======
	inline static int32_t get_offset_of_relax_0() { return static_cast<int32_t>(offsetof(CompilationRelaxationsAttribute_t561620503, ___relax_0)); }
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
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
#endif // COMPILATIONRELAXATIONSATTRIBUTE_T238494011_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
=======
#endif // COMPILATIONRELAXATIONSATTRIBUTE_T561620503_H
#ifndef TYPELIBIMPORTCLASSATTRIBUTE_T595099735_H
#define TYPELIBIMPORTCLASSATTRIBUTE_T595099735_H
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.IntPtr
struct  IntPtr_t 
=======
// System.Runtime.InteropServices.TypeLibImportClassAttribute
struct  TypeLibImportClassAttribute_t595099735  : public Attribute_t512917069
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
<<<<<<< HEAD
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
=======
	inline static int32_t get_offset_of__importClass_0() { return static_cast<int32_t>(offsetof(TypeLibImportClassAttribute_t595099735, ____importClass_0)); }
	inline String_t* get__importClass_0() const { return ____importClass_0; }
	inline String_t** get_address_of__importClass_0() { return &____importClass_0; }
	inline void set__importClass_0(String_t* value)
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
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
<<<<<<< HEAD
#endif // INTPTR_T_H
#ifndef WIN32VERSIONRESOURCE_T548350325_H
#define WIN32VERSIONRESOURCE_T548350325_H
=======
#endif // TYPELIBIMPORTCLASSATTRIBUTE_T595099735_H
#ifndef RUNTIMERESOURCESET_T1057453506_H
#define RUNTIMERESOURCESET_T1057453506_H
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.Resources.Win32VersionResource
struct  Win32VersionResource_t548350325  : public Win32Resource_t2185668907
=======
// System.Resources.RuntimeResourceSet
struct  RuntimeResourceSet_t1057453506  : public ResourceSet_t811453519
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // WIN32VERSIONRESOURCE_T548350325_H
#ifndef BINDINGFLAGS_T1082350898_H
#define BINDINGFLAGS_T1082350898_H
=======
#endif // RUNTIMERESOURCESET_T1057453506_H
#ifndef TYPELIBVERSIONATTRIBUTE_T1215677521_H
#define TYPELIBVERSIONATTRIBUTE_T1215677521_H
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.Reflection.BindingFlags
struct  BindingFlags_t1082350898 
=======
// System.Runtime.InteropServices.TypeLibVersionAttribute
struct  TypeLibVersionAttribute_t1215677521  : public Attribute_t512917069
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___1;

public:
<<<<<<< HEAD
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BindingFlags_t1082350898, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
=======
	inline static int32_t get_offset_of_major_0() { return static_cast<int32_t>(offsetof(TypeLibVersionAttribute_t1215677521, ___major_0)); }
	inline int32_t get_major_0() const { return ___major_0; }
	inline int32_t* get_address_of_major_0() { return &___major_0; }
	inline void set_major_0(int32_t value)
	{
		___major_0 = value;
	}

	inline static int32_t get_offset_of_minor_1() { return static_cast<int32_t>(offsetof(TypeLibVersionAttribute_t1215677521, ___minor_1)); }
	inline int32_t get_minor_1() const { return ___minor_1; }
	inline int32_t* get_address_of_minor_1() { return &___minor_1; }
	inline void set_minor_1(int32_t value)
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // BINDINGFLAGS_T1082350898_H
#ifndef URLATTRIBUTE_T1544437301_H
#define URLATTRIBUTE_T1544437301_H
=======
#endif // TYPELIBVERSIONATTRIBUTE_T1215677521_H
#ifndef URLATTRIBUTE_T2395682002_H
#define URLATTRIBUTE_T2395682002_H
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Activation.UrlAttribute
<<<<<<< HEAD
struct  UrlAttribute_t1544437301  : public ContextAttribute_t197102333
=======
struct  UrlAttribute_t2395682002  : public ContextAttribute_t2778268858
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
{
public:
	// System.String System.Runtime.Remoting.Activation.UrlAttribute::url
	String_t* ___url_1;

public:
<<<<<<< HEAD
	inline static int32_t get_offset_of_url_1() { return static_cast<int32_t>(offsetof(UrlAttribute_t1544437301, ___url_1)); }
=======
	inline static int32_t get_offset_of_url_1() { return static_cast<int32_t>(offsetof(UrlAttribute_t2395682002, ___url_1)); }
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
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
#endif // URLATTRIBUTE_T1544437301_H
#ifndef UNMANAGEDTYPE_T2550630890_H
#define UNMANAGEDTYPE_T2550630890_H
=======
#endif // URLATTRIBUTE_T2395682002_H
#ifndef UNMANAGEDTYPE_T2386312033_H
#define UNMANAGEDTYPE_T2386312033_H
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.UnmanagedType
<<<<<<< HEAD
struct  UnmanagedType_t2550630890 
=======
struct  UnmanagedType_t2386312033 
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
{
public:
	// System.Int32 System.Runtime.InteropServices.UnmanagedType::value__
	int32_t ___value___1;

public:
<<<<<<< HEAD
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UnmanagedType_t2550630890, ___value___1)); }
=======
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UnmanagedType_t2386312033, ___value___1)); }
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
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
#endif // UNMANAGEDTYPE_T2550630890_H
#ifndef CHARSET_T2778376310_H
#define CHARSET_T2778376310_H
=======
#endif // UNMANAGEDTYPE_T2386312033_H
#ifndef RESOURCEATTRIBUTES_T1231318774_H
#define RESOURCEATTRIBUTES_T1231318774_H
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.Runtime.InteropServices.CharSet
struct  CharSet_t2778376310 
=======
// System.Reflection.ResourceAttributes
struct  ResourceAttributes_t1231318774 
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
{
public:
	// System.Int32 System.Runtime.InteropServices.CharSet::value__
	int32_t ___value___1;

public:
<<<<<<< HEAD
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CharSet_t2778376310, ___value___1)); }
=======
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ResourceAttributes_t1231318774, ___value___1)); }
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
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
#endif // CHARSET_T2778376310_H
#ifndef CALLINGCONVENTION_T3354538265_H
#define CALLINGCONVENTION_T3354538265_H
=======
#endif // RESOURCEATTRIBUTES_T1231318774_H
#ifndef SAFEHANDLE_T1291186937_H
#define SAFEHANDLE_T1291186937_H
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.Runtime.InteropServices.CallingConvention
struct  CallingConvention_t3354538265 
=======
// System.Runtime.InteropServices.SafeHandle
struct  SafeHandle_t1291186937  : public CriticalFinalizerObject_t2985894140
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
{
public:
	// System.Int32 System.Runtime.InteropServices.CallingConvention::value__
	int32_t ___value___1;

public:
<<<<<<< HEAD
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CallingConvention_t3354538265, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
=======
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(SafeHandle_t1291186937, ___handle_0)); }
	inline intptr_t get_handle_0() const { return ___handle_0; }
	inline intptr_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(intptr_t value)
	{
		___handle_0 = value;
	}

	inline static int32_t get_offset_of_invalid_handle_value_1() { return static_cast<int32_t>(offsetof(SafeHandle_t1291186937, ___invalid_handle_value_1)); }
	inline intptr_t get_invalid_handle_value_1() const { return ___invalid_handle_value_1; }
	inline intptr_t* get_address_of_invalid_handle_value_1() { return &___invalid_handle_value_1; }
	inline void set_invalid_handle_value_1(intptr_t value)
	{
		___invalid_handle_value_1 = value;
	}

	inline static int32_t get_offset_of_refcount_2() { return static_cast<int32_t>(offsetof(SafeHandle_t1291186937, ___refcount_2)); }
	inline int32_t get_refcount_2() const { return ___refcount_2; }
	inline int32_t* get_address_of_refcount_2() { return &___refcount_2; }
	inline void set_refcount_2(int32_t value)
	{
		___refcount_2 = value;
	}

	inline static int32_t get_offset_of_owns_handle_3() { return static_cast<int32_t>(offsetof(SafeHandle_t1291186937, ___owns_handle_3)); }
	inline bool get_owns_handle_3() const { return ___owns_handle_3; }
	inline bool* get_address_of_owns_handle_3() { return &___owns_handle_3; }
	inline void set_owns_handle_3(bool value)
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // CALLINGCONVENTION_T3354538265_H
#ifndef CONSISTENCY_T1390725888_H
#define CONSISTENCY_T1390725888_H
=======
#endif // SAFEHANDLE_T1291186937_H
#ifndef TYPEATTRIBUTES_T1970172337_H
#define TYPEATTRIBUTES_T1970172337_H
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.Runtime.ConstrainedExecution.Consistency
struct  Consistency_t1390725888 
=======
// System.Reflection.TypeAttributes
struct  TypeAttributes_t1970172337 
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
{
public:
	// System.Int32 System.Runtime.ConstrainedExecution.Consistency::value__
	int32_t ___value___1;

public:
<<<<<<< HEAD
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Consistency_t1390725888, ___value___1)); }
=======
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TypeAttributes_t1970172337, ___value___1)); }
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
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
#endif // CONSISTENCY_T1390725888_H
#ifndef CER_T2101567438_H
#define CER_T2101567438_H
=======
#endif // TYPEATTRIBUTES_T1970172337_H
#ifndef PREDEFINEDRESOURCETYPE_T446033631_H
#define PREDEFINEDRESOURCETYPE_T446033631_H
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.Runtime.ConstrainedExecution.Cer
struct  Cer_t2101567438 
=======
// System.Resources.PredefinedResourceType
struct  PredefinedResourceType_t446033631 
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
{
public:
	// System.Int32 System.Runtime.ConstrainedExecution.Cer::value__
	int32_t ___value___1;

public:
<<<<<<< HEAD
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Cer_t2101567438, ___value___1)); }
=======
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PredefinedResourceType_t446033631, ___value___1)); }
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
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
#endif // CER_T2101567438_H
#ifndef LOADHINT_T3781660191_H
#define LOADHINT_T3781660191_H
=======
#endif // PREDEFINEDRESOURCETYPE_T446033631_H
#ifndef WIN32RESOURCETYPE_T3000681415_H
#define WIN32RESOURCETYPE_T3000681415_H
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.Runtime.CompilerServices.LoadHint
struct  LoadHint_t3781660191 
=======
// System.Resources.Win32ResourceType
struct  Win32ResourceType_t3000681415 
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
{
public:
	// System.Int32 System.Runtime.CompilerServices.LoadHint::value__
	int32_t ___value___1;

public:
<<<<<<< HEAD
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LoadHint_t3781660191, ___value___1)); }
=======
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Win32ResourceType_t3000681415, ___value___1)); }
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
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
#endif // LOADHINT_T3781660191_H
#ifndef COMPILATIONRELAXATIONS_T4211964247_H
#define COMPILATIONRELAXATIONS_T4211964247_H
=======
#endif // WIN32RESOURCETYPE_T3000681415_H
#ifndef COMPILATIONRELAXATIONS_T2108548158_H
#define COMPILATIONRELAXATIONS_T2108548158_H
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.CompilationRelaxations
<<<<<<< HEAD
struct  CompilationRelaxations_t4211964247 
=======
struct  CompilationRelaxations_t2108548158 
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
{
public:
	// System.Int32 System.Runtime.CompilerServices.CompilationRelaxations::value__
	int32_t ___value___1;

public:
<<<<<<< HEAD
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CompilationRelaxations_t4211964247, ___value___1)); }
=======
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CompilationRelaxations_t2108548158, ___value___1)); }
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
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
#endif // COMPILATIONRELAXATIONS_T4211964247_H
#ifndef WIN32RESOURCETYPE_T130810739_H
#define WIN32RESOURCETYPE_T130810739_H
=======
#endif // COMPILATIONRELAXATIONS_T2108548158_H
#ifndef LOADHINT_T2788361850_H
#define LOADHINT_T2788361850_H
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.Resources.Win32ResourceType
struct  Win32ResourceType_t130810739 
=======
// System.Runtime.CompilerServices.LoadHint
struct  LoadHint_t2788361850 
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
{
public:
	// System.Int32 System.Resources.Win32ResourceType::value__
	int32_t ___value___1;

public:
<<<<<<< HEAD
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Win32ResourceType_t130810739, ___value___1)); }
=======
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LoadHint_t2788361850, ___value___1)); }
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
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
#endif // WIN32RESOURCETYPE_T130810739_H
#ifndef PREDEFINEDRESOURCETYPE_T3623697780_H
#define PREDEFINEDRESOURCETYPE_T3623697780_H
=======
#endif // LOADHINT_T2788361850_H
#ifndef CER_T2942816103_H
#define CER_T2942816103_H
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.Resources.PredefinedResourceType
struct  PredefinedResourceType_t3623697780 
=======
// System.Runtime.ConstrainedExecution.Cer
struct  Cer_t2942816103 
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
{
public:
	// System.Int32 System.Resources.PredefinedResourceType::value__
	int32_t ___value___1;

public:
<<<<<<< HEAD
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PredefinedResourceType_t3623697780, ___value___1)); }
=======
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Cer_t2942816103, ___value___1)); }
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
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
#endif // PREDEFINEDRESOURCETYPE_T3623697780_H
#ifndef TYPEATTRIBUTES_T2229518203_H
#define TYPEATTRIBUTES_T2229518203_H
=======
#endif // CER_T2942816103_H
#ifndef CONSISTENCY_T627620222_H
#define CONSISTENCY_T627620222_H
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.Reflection.TypeAttributes
struct  TypeAttributes_t2229518203 
=======
// System.Runtime.ConstrainedExecution.Consistency
struct  Consistency_t627620222 
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
{
public:
	// System.Int32 System.Reflection.TypeAttributes::value__
	int32_t ___value___1;

public:
<<<<<<< HEAD
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TypeAttributes_t2229518203, ___value___1)); }
=======
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Consistency_t627620222, ___value___1)); }
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
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
#endif // TYPEATTRIBUTES_T2229518203_H
#ifndef EXTERNALEXCEPTION_T1252662682_H
#define EXTERNALEXCEPTION_T1252662682_H
=======
#endif // CONSISTENCY_T627620222_H
#ifndef CALLINGCONVENTION_T1943058130_H
#define CALLINGCONVENTION_T1943058130_H
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.Runtime.InteropServices.ExternalException
struct  ExternalException_t1252662682  : public SystemException_t3877406272
=======
// System.Runtime.InteropServices.CallingConvention
struct  CallingConvention_t1943058130 
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
{
public:

public:
<<<<<<< HEAD
=======
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CallingConvention_t1943058130, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // EXTERNALEXCEPTION_T1252662682_H
#ifndef SAFEHANDLE_T2733794115_H
#define SAFEHANDLE_T2733794115_H
=======
#endif // CALLINGCONVENTION_T1943058130_H
#ifndef RUNTIMETYPEHANDLE_T1502552156_H
#define RUNTIMETYPEHANDLE_T1502552156_H
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.Runtime.InteropServices.SafeHandle
struct  SafeHandle_t2733794115  : public CriticalFinalizerObject_t1920899984
=======
// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t1502552156 
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
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
<<<<<<< HEAD
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(SafeHandle_t2733794115, ___handle_0)); }
	inline intptr_t get_handle_0() const { return ___handle_0; }
	inline intptr_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(intptr_t value)
=======
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t1502552156, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
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
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // SAFEHANDLE_T2733794115_H
#ifndef MARSHALDIRECTIVEEXCEPTION_T1326890414_H
#define MARSHALDIRECTIVEEXCEPTION_T1326890414_H
=======
#endif // RUNTIMETYPEHANDLE_T1502552156_H
#ifndef CLASSINTERFACETYPE_T2606851137_H
#define CLASSINTERFACETYPE_T2606851137_H
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.Runtime.InteropServices.MarshalDirectiveException
struct  MarshalDirectiveException_t1326890414  : public SystemException_t3877406272
=======
// System.Runtime.InteropServices.ClassInterfaceType
struct  ClassInterfaceType_t2606851137 
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
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
<<<<<<< HEAD
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(GCHandleType_t1970708122, ___value___1)); }
=======
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ClassInterfaceType_t2606851137, ___value___1)); }
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
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
#endif // GCHANDLETYPE_T1970708122_H
#ifndef RUNTIMETYPEHANDLE_T2330101084_H
#define RUNTIMETYPEHANDLE_T2330101084_H
=======
#endif // CLASSINTERFACETYPE_T2606851137_H
#ifndef BINDINGFLAGS_T2380363878_H
#define BINDINGFLAGS_T2380363878_H
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t2330101084 
=======
// System.Reflection.BindingFlags
struct  BindingFlags_t2380363878 
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
<<<<<<< HEAD
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t2330101084, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
=======
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BindingFlags_t2380363878, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // RUNTIMETYPEHANDLE_T2330101084_H
#ifndef COMINTERFACETYPE_T1898221498_H
#define COMINTERFACETYPE_T1898221498_H
=======
#endif // BINDINGFLAGS_T2380363878_H
#ifndef COMINTERFACETYPE_T237276718_H
#define COMINTERFACETYPE_T237276718_H
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ComInterfaceType
<<<<<<< HEAD
struct  ComInterfaceType_t1898221498 
=======
struct  ComInterfaceType_t237276718 
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
{
public:
	// System.Int32 System.Runtime.InteropServices.ComInterfaceType::value__
	int32_t ___value___1;

public:
<<<<<<< HEAD
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ComInterfaceType_t1898221498, ___value___1)); }
=======
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ComInterfaceType_t237276718, ___value___1)); }
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
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
#endif // COMINTERFACETYPE_T1898221498_H
#ifndef CLASSINTERFACETYPE_T295178211_H
#define CLASSINTERFACETYPE_T295178211_H
=======
#endif // COMINTERFACETYPE_T237276718_H
#ifndef EXTERNALEXCEPTION_T3528485664_H
#define EXTERNALEXCEPTION_T3528485664_H
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.Runtime.InteropServices.ClassInterfaceType
struct  ClassInterfaceType_t295178211 
=======
// System.Runtime.InteropServices.ExternalException
struct  ExternalException_t3528485664  : public SystemException_t1314435123
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
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
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // CLASSINTERFACETYPE_T295178211_H
#ifndef RESOURCEATTRIBUTES_T2389678029_H
#define RESOURCEATTRIBUTES_T2389678029_H
=======
#endif // EXTERNALEXCEPTION_T3528485664_H
#ifndef GCHANDLETYPE_T410138498_H
#define GCHANDLETYPE_T410138498_H
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.Reflection.ResourceAttributes
struct  ResourceAttributes_t2389678029 
=======
// System.Runtime.InteropServices.GCHandleType
struct  GCHandleType_t410138498 
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
{
public:
	// System.Int32 System.Reflection.ResourceAttributes::value__
	int32_t ___value___1;

public:
<<<<<<< HEAD
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ResourceAttributes_t2389678029, ___value___1)); }
=======
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(GCHandleType_t410138498, ___value___1)); }
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
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
#endif // RESOURCEATTRIBUTES_T2389678029_H
#ifndef UNMANAGEDFUNCTIONPOINTERATTRIBUTE_T1696564987_H
#define UNMANAGEDFUNCTIONPOINTERATTRIBUTE_T1696564987_H
=======
#endif // GCHANDLETYPE_T410138498_H
#ifndef MARSHALDIRECTIVEEXCEPTION_T2173622610_H
#define MARSHALDIRECTIVEEXCEPTION_T2173622610_H
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute
struct  UnmanagedFunctionPointerAttribute_t1696564987  : public Attribute_t542643598
=======
// System.Runtime.InteropServices.MarshalDirectiveException
struct  MarshalDirectiveException_t2173622610  : public SystemException_t1314435123
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
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
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // UNMANAGEDFUNCTIONPOINTERATTRIBUTE_T1696564987_H
#ifndef INTERFACETYPEATTRIBUTE_T4113096249_H
#define INTERFACETYPEATTRIBUTE_T4113096249_H
=======
#endif // MARSHALDIRECTIVEEXCEPTION_T2173622610_H
#ifndef CHARSET_T974906411_H
#define CHARSET_T974906411_H
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.Runtime.InteropServices.InterfaceTypeAttribute
struct  InterfaceTypeAttribute_t4113096249  : public Attribute_t542643598
=======
// System.Runtime.InteropServices.CharSet
struct  CharSet_t974906411 
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
{
public:
	// System.Runtime.InteropServices.ComInterfaceType System.Runtime.InteropServices.InterfaceTypeAttribute::intType
	int32_t ___intType_0;

public:
<<<<<<< HEAD
	inline static int32_t get_offset_of_intType_0() { return static_cast<int32_t>(offsetof(InterfaceTypeAttribute_t4113096249, ___intType_0)); }
	inline int32_t get_intType_0() const { return ___intType_0; }
	inline int32_t* get_address_of_intType_0() { return &___intType_0; }
	inline void set_intType_0(int32_t value)
=======
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CharSet_t974906411, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
	{
		___intType_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // INTERFACETYPEATTRIBUTE_T4113096249_H
#ifndef DEFAULTDEPENDENCYATTRIBUTE_T3858269114_H
#define DEFAULTDEPENDENCYATTRIBUTE_T3858269114_H
=======
#endif // CHARSET_T974906411_H
#ifndef CLASSINTERFACEATTRIBUTE_T4032990359_H
#define CLASSINTERFACEATTRIBUTE_T4032990359_H
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.Runtime.CompilerServices.DefaultDependencyAttribute
struct  DefaultDependencyAttribute_t3858269114  : public Attribute_t542643598
=======
// System.Runtime.InteropServices.ClassInterfaceAttribute
struct  ClassInterfaceAttribute_t4032990359  : public Attribute_t512917069
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
{
public:
	// System.Runtime.CompilerServices.LoadHint System.Runtime.CompilerServices.DefaultDependencyAttribute::hint
	int32_t ___hint_0;

public:
<<<<<<< HEAD
	inline static int32_t get_offset_of_hint_0() { return static_cast<int32_t>(offsetof(DefaultDependencyAttribute_t3858269114, ___hint_0)); }
	inline int32_t get_hint_0() const { return ___hint_0; }
	inline int32_t* get_address_of_hint_0() { return &___hint_0; }
	inline void set_hint_0(int32_t value)
=======
	inline static int32_t get_offset_of_ciType_0() { return static_cast<int32_t>(offsetof(ClassInterfaceAttribute_t4032990359, ___ciType_0)); }
	inline int32_t get_ciType_0() const { return ___ciType_0; }
	inline int32_t* get_address_of_ciType_0() { return &___ciType_0; }
	inline void set_ciType_0(int32_t value)
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
	{
		___hint_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // DEFAULTDEPENDENCYATTRIBUTE_T3858269114_H
#ifndef COMEXCEPTION_T1790481504_H
#define COMEXCEPTION_T1790481504_H
=======
#endif // CLASSINTERFACEATTRIBUTE_T4032990359_H
#ifndef COMEXCEPTION_T2654742230_H
#define COMEXCEPTION_T2654742230_H
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.COMException
<<<<<<< HEAD
struct  COMException_t1790481504  : public ExternalException_t1252662682
=======
struct  COMException_t2654742230  : public ExternalException_t3528485664
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // COMEXCEPTION_T1790481504_H
#ifndef RELIABILITYCONTRACTATTRIBUTE_T1625655220_H
#define RELIABILITYCONTRACTATTRIBUTE_T1625655220_H
=======
#endif // COMEXCEPTION_T2654742230_H
#ifndef UNMANAGEDFUNCTIONPOINTERATTRIBUTE_T776941199_H
#define UNMANAGEDFUNCTIONPOINTERATTRIBUTE_T776941199_H
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.Runtime.ConstrainedExecution.ReliabilityContractAttribute
struct  ReliabilityContractAttribute_t1625655220  : public Attribute_t542643598
=======
// System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute
struct  UnmanagedFunctionPointerAttribute_t776941199  : public Attribute_t512917069
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
{
public:
	// System.Runtime.ConstrainedExecution.Consistency System.Runtime.ConstrainedExecution.ReliabilityContractAttribute::consistency
	int32_t ___consistency_0;
	// System.Runtime.ConstrainedExecution.Cer System.Runtime.ConstrainedExecution.ReliabilityContractAttribute::cer
	int32_t ___cer_1;

public:
<<<<<<< HEAD
	inline static int32_t get_offset_of_consistency_0() { return static_cast<int32_t>(offsetof(ReliabilityContractAttribute_t1625655220, ___consistency_0)); }
	inline int32_t get_consistency_0() const { return ___consistency_0; }
	inline int32_t* get_address_of_consistency_0() { return &___consistency_0; }
	inline void set_consistency_0(int32_t value)
=======
	inline static int32_t get_offset_of_call_conv_0() { return static_cast<int32_t>(offsetof(UnmanagedFunctionPointerAttribute_t776941199, ___call_conv_0)); }
	inline int32_t get_call_conv_0() const { return ___call_conv_0; }
	inline int32_t* get_address_of_call_conv_0() { return &___call_conv_0; }
	inline void set_call_conv_0(int32_t value)
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
	{
		___consistency_0 = value;
	}

	inline static int32_t get_offset_of_cer_1() { return static_cast<int32_t>(offsetof(ReliabilityContractAttribute_t1625655220, ___cer_1)); }
	inline int32_t get_cer_1() const { return ___cer_1; }
	inline int32_t* get_address_of_cer_1() { return &___cer_1; }
	inline void set_cer_1(int32_t value)
	{
		___cer_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // RELIABILITYCONTRACTATTRIBUTE_T1625655220_H
=======
#endif // UNMANAGEDFUNCTIONPOINTERATTRIBUTE_T776941199_H
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
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
	RuntimeTypeHandle_t2330101084  ____impl_1;

public:
	inline static int32_t get_offset_of__impl_1() { return static_cast<int32_t>(offsetof(Type_t, ____impl_1)); }
	inline RuntimeTypeHandle_t2330101084  get__impl_1() const { return ____impl_1; }
	inline RuntimeTypeHandle_t2330101084 * get_address_of__impl_1() { return &____impl_1; }
	inline void set__impl_1(RuntimeTypeHandle_t2330101084  value)
=======
	RuntimeTypeHandle_t1502552156  ____impl_1;

public:
	inline static int32_t get_offset_of__impl_1() { return static_cast<int32_t>(offsetof(Type_t, ____impl_1)); }
	inline RuntimeTypeHandle_t1502552156  get__impl_1() const { return ____impl_1; }
	inline RuntimeTypeHandle_t1502552156 * get_address_of__impl_1() { return &____impl_1; }
	inline void set__impl_1(RuntimeTypeHandle_t1502552156  value)
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
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
	TypeU5BU5D_t1664964607* ___EmptyTypes_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t3405857066 * ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t3405857066 * ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t3405857066 * ___FilterNameIgnoreCase_6;
=======
	TypeU5BU5D_t2809338828* ___EmptyTypes_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t1504268649 * ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t1504268649 * ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t1504268649 * ___FilterNameIgnoreCase_6;
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
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
	inline TypeU5BU5D_t1664964607* get_EmptyTypes_3() const { return ___EmptyTypes_3; }
	inline TypeU5BU5D_t1664964607** get_address_of_EmptyTypes_3() { return &___EmptyTypes_3; }
	inline void set_EmptyTypes_3(TypeU5BU5D_t1664964607* value)
=======
	inline TypeU5BU5D_t2809338828* get_EmptyTypes_3() const { return ___EmptyTypes_3; }
	inline TypeU5BU5D_t2809338828** get_address_of_EmptyTypes_3() { return &___EmptyTypes_3; }
	inline void set_EmptyTypes_3(TypeU5BU5D_t2809338828* value)
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
	{
		___EmptyTypes_3 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_3), value);
	}

	inline static int32_t get_offset_of_FilterAttribute_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_4)); }
<<<<<<< HEAD
	inline MemberFilter_t3405857066 * get_FilterAttribute_4() const { return ___FilterAttribute_4; }
	inline MemberFilter_t3405857066 ** get_address_of_FilterAttribute_4() { return &___FilterAttribute_4; }
	inline void set_FilterAttribute_4(MemberFilter_t3405857066 * value)
=======
	inline MemberFilter_t1504268649 * get_FilterAttribute_4() const { return ___FilterAttribute_4; }
	inline MemberFilter_t1504268649 ** get_address_of_FilterAttribute_4() { return &___FilterAttribute_4; }
	inline void set_FilterAttribute_4(MemberFilter_t1504268649 * value)
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
	{
		___FilterAttribute_4 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_4), value);
	}

	inline static int32_t get_offset_of_FilterName_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_5)); }
<<<<<<< HEAD
	inline MemberFilter_t3405857066 * get_FilterName_5() const { return ___FilterName_5; }
	inline MemberFilter_t3405857066 ** get_address_of_FilterName_5() { return &___FilterName_5; }
	inline void set_FilterName_5(MemberFilter_t3405857066 * value)
=======
	inline MemberFilter_t1504268649 * get_FilterName_5() const { return ___FilterName_5; }
	inline MemberFilter_t1504268649 ** get_address_of_FilterName_5() { return &___FilterName_5; }
	inline void set_FilterName_5(MemberFilter_t1504268649 * value)
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
	{
		___FilterName_5 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_5), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_6)); }
<<<<<<< HEAD
	inline MemberFilter_t3405857066 * get_FilterNameIgnoreCase_6() const { return ___FilterNameIgnoreCase_6; }
	inline MemberFilter_t3405857066 ** get_address_of_FilterNameIgnoreCase_6() { return &___FilterNameIgnoreCase_6; }
	inline void set_FilterNameIgnoreCase_6(MemberFilter_t3405857066 * value)
=======
	inline MemberFilter_t1504268649 * get_FilterNameIgnoreCase_6() const { return ___FilterNameIgnoreCase_6; }
	inline MemberFilter_t1504268649 ** get_address_of_FilterNameIgnoreCase_6() { return &___FilterNameIgnoreCase_6; }
	inline void set_FilterNameIgnoreCase_6(MemberFilter_t1504268649 * value)
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
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
#ifndef CLASSINTERFACEATTRIBUTE_T910653559_H
#define CLASSINTERFACEATTRIBUTE_T910653559_H
=======
#ifndef DEFAULTDEPENDENCYATTRIBUTE_T2540506276_H
#define DEFAULTDEPENDENCYATTRIBUTE_T2540506276_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.DefaultDependencyAttribute
struct  DefaultDependencyAttribute_t2540506276  : public Attribute_t512917069
{
public:
	// System.Runtime.CompilerServices.LoadHint System.Runtime.CompilerServices.DefaultDependencyAttribute::hint
	int32_t ___hint_0;

public:
	inline static int32_t get_offset_of_hint_0() { return static_cast<int32_t>(offsetof(DefaultDependencyAttribute_t2540506276, ___hint_0)); }
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
#endif // DEFAULTDEPENDENCYATTRIBUTE_T2540506276_H
#ifndef INTERFACETYPEATTRIBUTE_T2490950931_H
#define INTERFACETYPEATTRIBUTE_T2490950931_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.InterfaceTypeAttribute
struct  InterfaceTypeAttribute_t2490950931  : public Attribute_t512917069
{
public:
	// System.Runtime.InteropServices.ComInterfaceType System.Runtime.InteropServices.InterfaceTypeAttribute::intType
	int32_t ___intType_0;

public:
	inline static int32_t get_offset_of_intType_0() { return static_cast<int32_t>(offsetof(InterfaceTypeAttribute_t2490950931, ___intType_0)); }
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
#endif // INTERFACETYPEATTRIBUTE_T2490950931_H
#ifndef RELIABILITYCONTRACTATTRIBUTE_T1995716992_H
#define RELIABILITYCONTRACTATTRIBUTE_T1995716992_H
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

<<<<<<< HEAD
// System.Runtime.InteropServices.ClassInterfaceAttribute
struct  ClassInterfaceAttribute_t910653559  : public Attribute_t542643598
=======
// System.Runtime.ConstrainedExecution.ReliabilityContractAttribute
struct  ReliabilityContractAttribute_t1995716992  : public Attribute_t512917069
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
{
public:
	// System.Runtime.InteropServices.ClassInterfaceType System.Runtime.InteropServices.ClassInterfaceAttribute::ciType
	int32_t ___ciType_0;

public:
<<<<<<< HEAD
	inline static int32_t get_offset_of_ciType_0() { return static_cast<int32_t>(offsetof(ClassInterfaceAttribute_t910653559, ___ciType_0)); }
	inline int32_t get_ciType_0() const { return ___ciType_0; }
	inline int32_t* get_address_of_ciType_0() { return &___ciType_0; }
	inline void set_ciType_0(int32_t value)
=======
	inline static int32_t get_offset_of_consistency_0() { return static_cast<int32_t>(offsetof(ReliabilityContractAttribute_t1995716992, ___consistency_0)); }
	inline int32_t get_consistency_0() const { return ___consistency_0; }
	inline int32_t* get_address_of_consistency_0() { return &___consistency_0; }
	inline void set_consistency_0(int32_t value)
	{
		___consistency_0 = value;
	}

	inline static int32_t get_offset_of_cer_1() { return static_cast<int32_t>(offsetof(ReliabilityContractAttribute_t1995716992, ___cer_1)); }
	inline int32_t get_cer_1() const { return ___cer_1; }
	inline int32_t* get_address_of_cer_1() { return &___cer_1; }
	inline void set_cer_1(int32_t value)
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
	{
		___ciType_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
<<<<<<< HEAD
#endif // CLASSINTERFACEATTRIBUTE_T910653559_H
#ifndef TYPEDELEGATOR_T1357031879_H
#define TYPEDELEGATOR_T1357031879_H
=======
#endif // RELIABILITYCONTRACTATTRIBUTE_T1995716992_H
#ifndef TYPEDELEGATOR_T3337889582_H
#define TYPEDELEGATOR_T3337889582_H
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.TypeDelegator
<<<<<<< HEAD
struct  TypeDelegator_t1357031879  : public Type_t
=======
struct  TypeDelegator_t3337889582  : public Type_t
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
{
public:
	// System.Type System.Reflection.TypeDelegator::typeImpl
	Type_t * ___typeImpl_8;

public:
<<<<<<< HEAD
	inline static int32_t get_offset_of_typeImpl_8() { return static_cast<int32_t>(offsetof(TypeDelegator_t1357031879, ___typeImpl_8)); }
=======
	inline static int32_t get_offset_of_typeImpl_8() { return static_cast<int32_t>(offsetof(TypeDelegator_t3337889582, ___typeImpl_8)); }
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
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
#endif // TYPEDELEGATOR_T1357031879_H
=======
#endif // TYPEDELEGATOR_T3337889582_H
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
<<<<<<< HEAD
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
=======
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize400 = { sizeof (ResourceAttributes_t1231318774)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable400[3] = 
{
	ResourceAttributes_t1231318774::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize401 = { sizeof (StrongNameKeyPair_t3784948329), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable401[5] = 
{
	StrongNameKeyPair_t3784948329::get_offset_of__publicKey_0(),
	StrongNameKeyPair_t3784948329::get_offset_of__keyPairContainer_1(),
	StrongNameKeyPair_t3784948329::get_offset_of__keyPairExported_2(),
	StrongNameKeyPair_t3784948329::get_offset_of__keyPairArray_3(),
	StrongNameKeyPair_t3784948329::get_offset_of__rsa_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize402 = { sizeof (TargetException_t3835191981), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize403 = { sizeof (TargetInvocationException_t2807018114), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize404 = { sizeof (TargetParameterCountException_t952587530), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize405 = { sizeof (TypeAttributes_t1970172337)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable405[32] = 
{
	TypeAttributes_t1970172337::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
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
=======
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize406 = { sizeof (TypeDelegator_t3337889582), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable406[1] = 
{
	TypeDelegator_t3337889582::get_offset_of_typeImpl_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize407 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize408 = { sizeof (NeutralResourcesLanguageAttribute_t3783838449), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable408[1] = 
{
	NeutralResourcesLanguageAttribute_t3783838449::get_offset_of_culture_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize409 = { sizeof (ResourceManager_t2407228322), -1, sizeof(ResourceManager_t2407228322_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable409[5] = 
{
	ResourceManager_t2407228322_StaticFields::get_offset_of_ResourceCache_0(),
	ResourceManager_t2407228322_StaticFields::get_offset_of_NonExistent_1(),
	ResourceManager_t2407228322_StaticFields::get_offset_of_HeaderVersionNumber_2(),
	ResourceManager_t2407228322_StaticFields::get_offset_of_MagicNumber_3(),
	ResourceManager_t2407228322::get_offset_of_resourceSetType_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize410 = { sizeof (PredefinedResourceType_t446033631)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable410[21] = 
{
	PredefinedResourceType_t446033631::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
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
=======
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize411 = { sizeof (ResourceReader_t2604191431), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable411[13] = 
{
	ResourceReader_t2604191431::get_offset_of_reader_0(),
	ResourceReader_t2604191431::get_offset_of_readerLock_1(),
	ResourceReader_t2604191431::get_offset_of_formatter_2(),
	ResourceReader_t2604191431::get_offset_of_resourceCount_3(),
	ResourceReader_t2604191431::get_offset_of_typeCount_4(),
	ResourceReader_t2604191431::get_offset_of_typeNames_5(),
	ResourceReader_t2604191431::get_offset_of_hashes_6(),
	ResourceReader_t2604191431::get_offset_of_infos_7(),
	ResourceReader_t2604191431::get_offset_of_dataSectionOffset_8(),
	ResourceReader_t2604191431::get_offset_of_nameSectionOffset_9(),
	ResourceReader_t2604191431::get_offset_of_resource_ver_10(),
	ResourceReader_t2604191431::get_offset_of_cache_11(),
	ResourceReader_t2604191431::get_offset_of_cache_lock_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize412 = { sizeof (ResourceInfo_t4108375630)+ sizeof (RuntimeObject), sizeof(ResourceInfo_t4108375630_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable412[3] = 
{
	ResourceInfo_t4108375630::get_offset_of_ValuePosition_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ResourceInfo_t4108375630::get_offset_of_ResourceName_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ResourceInfo_t4108375630::get_offset_of_TypeIndex_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize413 = { sizeof (ResourceCacheItem_t210456197)+ sizeof (RuntimeObject), sizeof(ResourceCacheItem_t210456197_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable413[2] = 
{
	ResourceCacheItem_t210456197::get_offset_of_ResourceName_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ResourceCacheItem_t210456197::get_offset_of_ResourceValue_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize414 = { sizeof (ResourceEnumerator_t3773541503), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable414[3] = 
{
	ResourceEnumerator_t3773541503::get_offset_of_reader_0(),
	ResourceEnumerator_t3773541503::get_offset_of_index_1(),
	ResourceEnumerator_t3773541503::get_offset_of_finished_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize415 = { sizeof (ResourceSet_t811453519), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable415[4] = 
{
	ResourceSet_t811453519::get_offset_of_Reader_0(),
	ResourceSet_t811453519::get_offset_of_Table_1(),
	ResourceSet_t811453519::get_offset_of_resources_read_2(),
	ResourceSet_t811453519::get_offset_of_disposed_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize416 = { sizeof (RuntimeResourceSet_t1057453506), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize417 = { sizeof (SatelliteContractVersionAttribute_t216834573), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable417[1] = 
{
	SatelliteContractVersionAttribute_t216834573::get_offset_of_ver_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize418 = { sizeof (Win32ResourceType_t3000681415)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable418[21] = 
{
	Win32ResourceType_t3000681415::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
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
=======
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize419 = { sizeof (NameOrId_t2163298507), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable419[2] = 
{
	NameOrId_t2163298507::get_offset_of_name_0(),
	NameOrId_t2163298507::get_offset_of_id_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize420 = { sizeof (Win32Resource_t1446037021), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable420[2] = 
{
	Win32Resource_t1446037021::get_offset_of_type_0(),
	Win32Resource_t1446037021::get_offset_of_name_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize421 = { sizeof (Win32VersionResource_t272676701), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize422 = { sizeof (CompilationRelaxations_t2108548158)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable422[2] = 
{
	CompilationRelaxations_t2108548158::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize423 = { sizeof (CompilationRelaxationsAttribute_t561620503), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable423[1] = 
{
	CompilationRelaxationsAttribute_t561620503::get_offset_of_relax_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize424 = { sizeof (DefaultDependencyAttribute_t2540506276), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable424[1] = 
{
	DefaultDependencyAttribute_t2540506276::get_offset_of_hint_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize425 = { sizeof (IsVolatile_t944769987), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize426 = { sizeof (LoadHint_t2788361850)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable426[4] = 
{
	LoadHint_t2788361850::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
	0,
	0,
	0,
};
<<<<<<< HEAD
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize427 = { sizeof (StringFreezingAttribute_t2691375565), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize428 = { sizeof (Cer_t2101567438)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable428[4] = 
{
	Cer_t2101567438::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
=======
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize427 = { sizeof (StringFreezingAttribute_t2963477818), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize428 = { sizeof (Cer_t2942816103)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable428[4] = 
{
	Cer_t2942816103::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
	0,
	0,
	0,
};
<<<<<<< HEAD
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize429 = { sizeof (Consistency_t1390725888)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable429[5] = 
{
	Consistency_t1390725888::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
=======
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize429 = { sizeof (Consistency_t627620222)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable429[5] = 
{
	Consistency_t627620222::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
	0,
	0,
	0,
	0,
};
<<<<<<< HEAD
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
=======
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize430 = { sizeof (CriticalFinalizerObject_t2985894140), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize431 = { sizeof (ReliabilityContractAttribute_t1995716992), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable431[2] = 
{
	ReliabilityContractAttribute_t1995716992::get_offset_of_consistency_0(),
	ReliabilityContractAttribute_t1995716992::get_offset_of_cer_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize432 = { sizeof (ActivationArguments_t650420298), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize433 = { sizeof (BestFitMappingAttribute_t4038383014), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable433[1] = 
{
	BestFitMappingAttribute_t4038383014::get_offset_of_bfm_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize434 = { sizeof (COMException_t2654742230), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize435 = { sizeof (CallingConvention_t1943058130)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable435[6] = 
{
	CallingConvention_t1943058130::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
	0,
	0,
	0,
	0,
	0,
};
<<<<<<< HEAD
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize436 = { sizeof (CharSet_t2778376310)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable436[5] = 
{
	CharSet_t2778376310::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
=======
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize436 = { sizeof (CharSet_t974906411)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable436[5] = 
{
	CharSet_t974906411::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
	0,
	0,
	0,
	0,
};
<<<<<<< HEAD
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize437 = { sizeof (ClassInterfaceAttribute_t910653559), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable437[1] = 
{
	ClassInterfaceAttribute_t910653559::get_offset_of_ciType_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize438 = { sizeof (ClassInterfaceType_t295178211)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable438[4] = 
{
	ClassInterfaceType_t295178211::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
=======
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize437 = { sizeof (ClassInterfaceAttribute_t4032990359), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable437[1] = 
{
	ClassInterfaceAttribute_t4032990359::get_offset_of_ciType_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize438 = { sizeof (ClassInterfaceType_t2606851137)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable438[4] = 
{
	ClassInterfaceType_t2606851137::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
	0,
	0,
	0,
};
<<<<<<< HEAD
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
=======
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize439 = { sizeof (ComCompatibleVersionAttribute_t2216412496), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable439[4] = 
{
	ComCompatibleVersionAttribute_t2216412496::get_offset_of_major_0(),
	ComCompatibleVersionAttribute_t2216412496::get_offset_of_minor_1(),
	ComCompatibleVersionAttribute_t2216412496::get_offset_of_build_2(),
	ComCompatibleVersionAttribute_t2216412496::get_offset_of_revision_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize440 = { sizeof (ComDefaultInterfaceAttribute_t518242814), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable440[1] = 
{
	ComDefaultInterfaceAttribute_t518242814::get_offset_of__type_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize441 = { sizeof (ComInterfaceType_t237276718)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable441[4] = 
{
	ComInterfaceType_t237276718::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
	0,
	0,
	0,
};
<<<<<<< HEAD
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
=======
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize442 = { sizeof (DispIdAttribute_t3544301283), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable442[1] = 
{
	DispIdAttribute_t3544301283::get_offset_of_id_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize443 = { sizeof (ErrorWrapper_t2438105464), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable443[1] = 
{
	ErrorWrapper_t2438105464::get_offset_of_errorCode_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize444 = { sizeof (ExternalException_t3528485664), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize445 = { sizeof (GCHandle_t191853912)+ sizeof (RuntimeObject), sizeof(GCHandle_t191853912 ), 0, 0 };
extern const int32_t g_FieldOffsetTable445[1] = 
{
	GCHandle_t191853912::get_offset_of_handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize446 = { sizeof (GCHandleType_t410138498)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable446[5] = 
{
	GCHandleType_t410138498::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
	0,
	0,
	0,
	0,
};
<<<<<<< HEAD
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
=======
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize447 = { sizeof (InterfaceTypeAttribute_t2490950931), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable447[1] = 
{
	InterfaceTypeAttribute_t2490950931::get_offset_of_intType_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize448 = { sizeof (Marshal_t88230265), -1, sizeof(Marshal_t88230265_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable448[2] = 
{
	Marshal_t88230265_StaticFields::get_offset_of_SystemMaxDBCSCharSize_0(),
	Marshal_t88230265_StaticFields::get_offset_of_SystemDefaultCharSize_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize449 = { sizeof (MarshalDirectiveException_t2173622610), -1, 0, 0 };
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
extern const int32_t g_FieldOffsetTable449[1] = 
{
	0,
};
<<<<<<< HEAD
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
=======
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize450 = { sizeof (PreserveSigAttribute_t3466380234), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize451 = { sizeof (SafeHandle_t1291186937), sizeof(void*), 0, 0 };
extern const int32_t g_FieldOffsetTable451[4] = 
{
	SafeHandle_t1291186937::get_offset_of_handle_0(),
	SafeHandle_t1291186937::get_offset_of_invalid_handle_value_1(),
	SafeHandle_t1291186937::get_offset_of_refcount_2(),
	SafeHandle_t1291186937::get_offset_of_owns_handle_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize452 = { sizeof (TypeLibImportClassAttribute_t595099735), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable452[1] = 
{
	TypeLibImportClassAttribute_t595099735::get_offset_of__importClass_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize453 = { sizeof (TypeLibVersionAttribute_t1215677521), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable453[2] = 
{
	TypeLibVersionAttribute_t1215677521::get_offset_of_major_0(),
	TypeLibVersionAttribute_t1215677521::get_offset_of_minor_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize454 = { sizeof (UnmanagedFunctionPointerAttribute_t776941199), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable454[1] = 
{
	UnmanagedFunctionPointerAttribute_t776941199::get_offset_of_call_conv_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize455 = { sizeof (UnmanagedType_t2386312033)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable455[36] = 
{
	UnmanagedType_t2386312033::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
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
=======
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize481 = { sizeof (ActivationServices_t2358209833), -1, sizeof(ActivationServices_t2358209833_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable481[1] = 
{
	ActivationServices_t2358209833_StaticFields::get_offset_of__constructionActivator_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize482 = { sizeof (AppDomainLevelActivator_t3954966648), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable482[2] = 
{
	AppDomainLevelActivator_t3954966648::get_offset_of__activationUrl_0(),
	AppDomainLevelActivator_t3954966648::get_offset_of__next_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize483 = { sizeof (ConstructionLevelActivator_t4012315814), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize484 = { sizeof (ContextLevelActivator_t2597063062), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable484[1] = 
{
	ContextLevelActivator_t2597063062::get_offset_of_m_NextActivator_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize485 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize486 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize487 = { sizeof (RemoteActivator_t1059646665), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize488 = { sizeof (UrlAttribute_t2395682002), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable488[1] = 
{
	UrlAttribute_t2395682002::get_offset_of_url_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize489 = { sizeof (ChannelInfo_t1141549006), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable489[1] = 
{
	ChannelInfo_t1141549006::get_offset_of_channelData_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize490 = { sizeof (ChannelServices_t2302099503), -1, sizeof(ChannelServices_t2302099503_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable490[5] = 
{
	ChannelServices_t2302099503_StaticFields::get_offset_of_registeredChannels_0(),
	ChannelServices_t2302099503_StaticFields::get_offset_of_delayedClientChannels_1(),
	ChannelServices_t2302099503_StaticFields::get_offset_of__crossContextSink_2(),
	ChannelServices_t2302099503_StaticFields::get_offset_of_CrossContextUrl_3(),
	ChannelServices_t2302099503_StaticFields::get_offset_of_oldStartModeTypes_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize491 = { sizeof (CrossAppDomainData_t3288642556), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable491[3] = 
{
	CrossAppDomainData_t3288642556::get_offset_of__ContextID_0(),
	CrossAppDomainData_t3288642556::get_offset_of__DomainID_1(),
	CrossAppDomainData_t3288642556::get_offset_of__processGuid_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize492 = { sizeof (CrossAppDomainChannel_t1541911488), -1, sizeof(CrossAppDomainChannel_t1541911488_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable492[1] = 
{
	CrossAppDomainChannel_t1541911488_StaticFields::get_offset_of_s_lock_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize493 = { sizeof (CrossAppDomainSink_t4136848305), -1, sizeof(CrossAppDomainSink_t4136848305_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable493[3] = 
{
	CrossAppDomainSink_t4136848305_StaticFields::get_offset_of_s_sinks_0(),
	CrossAppDomainSink_t4136848305_StaticFields::get_offset_of_processMessageMethod_1(),
	CrossAppDomainSink_t4136848305::get_offset_of__domainID_2(),
>>>>>>> 68f0c28e13e04d0558dc3c19888fe2476488331f
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

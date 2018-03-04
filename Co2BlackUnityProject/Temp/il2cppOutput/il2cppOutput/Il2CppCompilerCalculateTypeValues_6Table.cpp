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

// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t1547570597;
// System.Collections.ArrayList
struct ArrayList_t3867410345;
// System.Collections.Hashtable
struct Hashtable_t916193709;
// System.String
struct String_t;
// System.Runtime.Serialization.IFormatterConverter
struct IFormatterConverter_t1169374833;
// System.Collections.IEnumerator
struct IEnumerator_t2062334834;
// System.Runtime.Serialization.SerializationCallbacks
struct SerializationCallbacks_t119595541;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t429457497;
// System.Byte[]
struct ByteU5BU5D_t965135465;
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_t1827242508;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t3610262089;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t4085890488;
// System.Runtime.Serialization.ObjectIDGenerator/InstanceComparer
struct InstanceComparer_t816754153;
// System.IntPtr[]
struct IntPtrU5BU5D_t1175376876;
// System.Collections.IDictionary
struct IDictionary_t295350754;
// System.Type[]
struct TypeU5BU5D_t3146466164;
// System.Reflection.Emit.ModuleBuilder
struct ModuleBuilder_t3782524751;
// System.Runtime.Serialization.Formatters.Binary.TypeMetadata
struct TypeMetadata_t970315655;
// System.Type
struct Type_t;
// System.String[]
struct StringU5BU5D_t131720724;
// System.Reflection.MemberInfo[]
struct MemberInfoU5BU5D_t300533605;
// System.Security.Cryptography.DSA
struct DSA_t661194812;
// System.UInt32[]
struct UInt32U5BU5D_t1303042751;
// System.UInt16[]
struct UInt16U5BU5D_t2104570968;
// System.Char[]
struct CharU5BU5D_t3978811185;
// System.Void
struct Void_t1307511435;
// System.Int32[]
struct Int32U5BU5D_t1664692557;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t3960293763;
// Mono.Security.Cryptography.BlockProcessor
struct BlockProcessor_t1773263970;
// System.Security.Cryptography.TripleDES
struct TripleDES_t3634838650;
// Mono.Security.Cryptography.MACAlgorithm
struct MACAlgorithm_t2615932059;
// Mono.Security.Cryptography.KeyPairPersistence
struct KeyPairPersistence_t3200490395;
// Mono.Security.Cryptography.DSAManaged
struct DSAManaged_t1737000570;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t248777969;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t722839904;
// System.Runtime.Serialization.ISerializationSurrogate
struct ISerializationSurrogate_t4168595575;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t3823068484;
// System.Runtime.Serialization.BaseFixupRecord
struct BaseFixupRecord_t1056132251;
// System.Byte[,]
struct ByteU5BU2CU5D_t965135466;
// System.IAsyncResult
struct IAsyncResult_t3639464115;
// System.AsyncCallback
struct AsyncCallback_t1667242279;
// System.Runtime.Serialization.SerializationCallbacks/CallbackHandler
struct CallbackHandler_t3589417362;
// System.Runtime.Serialization.SerializationBinder
struct SerializationBinder_t3796606365;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t1152673527;
// System.Runtime.Serialization.ObjectIDGenerator
struct ObjectIDGenerator_t1480664618;
// System.Collections.Queue
struct Queue_t3726947550;
// System.Reflection.Assembly
struct Assembly_t2899238720;
// System.Runtime.Serialization.SerializationObjectManager
struct SerializationObjectManager_t3966029636;




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
#ifndef ASYMMETRICSIGNATUREFORMATTER_T2853573350_H
#define ASYMMETRICSIGNATUREFORMATTER_T2853573350_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsymmetricSignatureFormatter
struct  AsymmetricSignatureFormatter_t2853573350  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYMMETRICSIGNATUREFORMATTER_T2853573350_H
#ifndef BASEFIXUPRECORD_T1056132251_H
#define BASEFIXUPRECORD_T1056132251_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.BaseFixupRecord
struct  BaseFixupRecord_t1056132251  : public RuntimeObject
{
public:
	// System.Runtime.Serialization.ObjectRecord System.Runtime.Serialization.BaseFixupRecord::ObjectToBeFixed
	ObjectRecord_t1547570597 * ___ObjectToBeFixed_0;
	// System.Runtime.Serialization.ObjectRecord System.Runtime.Serialization.BaseFixupRecord::ObjectRequired
	ObjectRecord_t1547570597 * ___ObjectRequired_1;
	// System.Runtime.Serialization.BaseFixupRecord System.Runtime.Serialization.BaseFixupRecord::NextSameContainer
	BaseFixupRecord_t1056132251 * ___NextSameContainer_2;
	// System.Runtime.Serialization.BaseFixupRecord System.Runtime.Serialization.BaseFixupRecord::NextSameRequired
	BaseFixupRecord_t1056132251 * ___NextSameRequired_3;

public:
	inline static int32_t get_offset_of_ObjectToBeFixed_0() { return static_cast<int32_t>(offsetof(BaseFixupRecord_t1056132251, ___ObjectToBeFixed_0)); }
	inline ObjectRecord_t1547570597 * get_ObjectToBeFixed_0() const { return ___ObjectToBeFixed_0; }
	inline ObjectRecord_t1547570597 ** get_address_of_ObjectToBeFixed_0() { return &___ObjectToBeFixed_0; }
	inline void set_ObjectToBeFixed_0(ObjectRecord_t1547570597 * value)
	{
		___ObjectToBeFixed_0 = value;
		Il2CppCodeGenWriteBarrier((&___ObjectToBeFixed_0), value);
	}

	inline static int32_t get_offset_of_ObjectRequired_1() { return static_cast<int32_t>(offsetof(BaseFixupRecord_t1056132251, ___ObjectRequired_1)); }
	inline ObjectRecord_t1547570597 * get_ObjectRequired_1() const { return ___ObjectRequired_1; }
	inline ObjectRecord_t1547570597 ** get_address_of_ObjectRequired_1() { return &___ObjectRequired_1; }
	inline void set_ObjectRequired_1(ObjectRecord_t1547570597 * value)
	{
		___ObjectRequired_1 = value;
		Il2CppCodeGenWriteBarrier((&___ObjectRequired_1), value);
	}

	inline static int32_t get_offset_of_NextSameContainer_2() { return static_cast<int32_t>(offsetof(BaseFixupRecord_t1056132251, ___NextSameContainer_2)); }
	inline BaseFixupRecord_t1056132251 * get_NextSameContainer_2() const { return ___NextSameContainer_2; }
	inline BaseFixupRecord_t1056132251 ** get_address_of_NextSameContainer_2() { return &___NextSameContainer_2; }
	inline void set_NextSameContainer_2(BaseFixupRecord_t1056132251 * value)
	{
		___NextSameContainer_2 = value;
		Il2CppCodeGenWriteBarrier((&___NextSameContainer_2), value);
	}

	inline static int32_t get_offset_of_NextSameRequired_3() { return static_cast<int32_t>(offsetof(BaseFixupRecord_t1056132251, ___NextSameRequired_3)); }
	inline BaseFixupRecord_t1056132251 * get_NextSameRequired_3() const { return ___NextSameRequired_3; }
	inline BaseFixupRecord_t1056132251 ** get_address_of_NextSameRequired_3() { return &___NextSameRequired_3; }
	inline void set_NextSameRequired_3(BaseFixupRecord_t1056132251 * value)
	{
		___NextSameRequired_3 = value;
		Il2CppCodeGenWriteBarrier((&___NextSameRequired_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEFIXUPRECORD_T1056132251_H
#ifndef SERIALIZATIONBINDER_T3796606365_H
#define SERIALIZATIONBINDER_T3796606365_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.SerializationBinder
struct  SerializationBinder_t3796606365  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZATIONBINDER_T3796606365_H
#ifndef SERIALIZATIONCALLBACKS_T119595541_H
#define SERIALIZATIONCALLBACKS_T119595541_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.SerializationCallbacks
struct  SerializationCallbacks_t119595541  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Runtime.Serialization.SerializationCallbacks::onSerializingList
	ArrayList_t3867410345 * ___onSerializingList_0;
	// System.Collections.ArrayList System.Runtime.Serialization.SerializationCallbacks::onSerializedList
	ArrayList_t3867410345 * ___onSerializedList_1;
	// System.Collections.ArrayList System.Runtime.Serialization.SerializationCallbacks::onDeserializingList
	ArrayList_t3867410345 * ___onDeserializingList_2;
	// System.Collections.ArrayList System.Runtime.Serialization.SerializationCallbacks::onDeserializedList
	ArrayList_t3867410345 * ___onDeserializedList_3;

public:
	inline static int32_t get_offset_of_onSerializingList_0() { return static_cast<int32_t>(offsetof(SerializationCallbacks_t119595541, ___onSerializingList_0)); }
	inline ArrayList_t3867410345 * get_onSerializingList_0() const { return ___onSerializingList_0; }
	inline ArrayList_t3867410345 ** get_address_of_onSerializingList_0() { return &___onSerializingList_0; }
	inline void set_onSerializingList_0(ArrayList_t3867410345 * value)
	{
		___onSerializingList_0 = value;
		Il2CppCodeGenWriteBarrier((&___onSerializingList_0), value);
	}

	inline static int32_t get_offset_of_onSerializedList_1() { return static_cast<int32_t>(offsetof(SerializationCallbacks_t119595541, ___onSerializedList_1)); }
	inline ArrayList_t3867410345 * get_onSerializedList_1() const { return ___onSerializedList_1; }
	inline ArrayList_t3867410345 ** get_address_of_onSerializedList_1() { return &___onSerializedList_1; }
	inline void set_onSerializedList_1(ArrayList_t3867410345 * value)
	{
		___onSerializedList_1 = value;
		Il2CppCodeGenWriteBarrier((&___onSerializedList_1), value);
	}

	inline static int32_t get_offset_of_onDeserializingList_2() { return static_cast<int32_t>(offsetof(SerializationCallbacks_t119595541, ___onDeserializingList_2)); }
	inline ArrayList_t3867410345 * get_onDeserializingList_2() const { return ___onDeserializingList_2; }
	inline ArrayList_t3867410345 ** get_address_of_onDeserializingList_2() { return &___onDeserializingList_2; }
	inline void set_onDeserializingList_2(ArrayList_t3867410345 * value)
	{
		___onDeserializingList_2 = value;
		Il2CppCodeGenWriteBarrier((&___onDeserializingList_2), value);
	}

	inline static int32_t get_offset_of_onDeserializedList_3() { return static_cast<int32_t>(offsetof(SerializationCallbacks_t119595541, ___onDeserializedList_3)); }
	inline ArrayList_t3867410345 * get_onDeserializedList_3() const { return ___onDeserializedList_3; }
	inline ArrayList_t3867410345 ** get_address_of_onDeserializedList_3() { return &___onDeserializedList_3; }
	inline void set_onDeserializedList_3(ArrayList_t3867410345 * value)
	{
		___onDeserializedList_3 = value;
		Il2CppCodeGenWriteBarrier((&___onDeserializedList_3), value);
	}
};

struct SerializationCallbacks_t119595541_StaticFields
{
public:
	// System.Collections.Hashtable System.Runtime.Serialization.SerializationCallbacks::cache
	Hashtable_t916193709 * ___cache_4;
	// System.Object System.Runtime.Serialization.SerializationCallbacks::cache_lock
	RuntimeObject * ___cache_lock_5;

public:
	inline static int32_t get_offset_of_cache_4() { return static_cast<int32_t>(offsetof(SerializationCallbacks_t119595541_StaticFields, ___cache_4)); }
	inline Hashtable_t916193709 * get_cache_4() const { return ___cache_4; }
	inline Hashtable_t916193709 ** get_address_of_cache_4() { return &___cache_4; }
	inline void set_cache_4(Hashtable_t916193709 * value)
	{
		___cache_4 = value;
		Il2CppCodeGenWriteBarrier((&___cache_4), value);
	}

	inline static int32_t get_offset_of_cache_lock_5() { return static_cast<int32_t>(offsetof(SerializationCallbacks_t119595541_StaticFields, ___cache_lock_5)); }
	inline RuntimeObject * get_cache_lock_5() const { return ___cache_lock_5; }
	inline RuntimeObject ** get_address_of_cache_lock_5() { return &___cache_lock_5; }
	inline void set_cache_lock_5(RuntimeObject * value)
	{
		___cache_lock_5 = value;
		Il2CppCodeGenWriteBarrier((&___cache_lock_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZATIONCALLBACKS_T119595541_H
#ifndef SERIALIZATIONINFO_T722839904_H
#define SERIALIZATIONINFO_T722839904_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.SerializationInfo
struct  SerializationInfo_t722839904  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Runtime.Serialization.SerializationInfo::serialized
	Hashtable_t916193709 * ___serialized_0;
	// System.Collections.ArrayList System.Runtime.Serialization.SerializationInfo::values
	ArrayList_t3867410345 * ___values_1;
	// System.String System.Runtime.Serialization.SerializationInfo::assemblyName
	String_t* ___assemblyName_2;
	// System.String System.Runtime.Serialization.SerializationInfo::fullTypeName
	String_t* ___fullTypeName_3;
	// System.Runtime.Serialization.IFormatterConverter System.Runtime.Serialization.SerializationInfo::converter
	RuntimeObject* ___converter_4;

public:
	inline static int32_t get_offset_of_serialized_0() { return static_cast<int32_t>(offsetof(SerializationInfo_t722839904, ___serialized_0)); }
	inline Hashtable_t916193709 * get_serialized_0() const { return ___serialized_0; }
	inline Hashtable_t916193709 ** get_address_of_serialized_0() { return &___serialized_0; }
	inline void set_serialized_0(Hashtable_t916193709 * value)
	{
		___serialized_0 = value;
		Il2CppCodeGenWriteBarrier((&___serialized_0), value);
	}

	inline static int32_t get_offset_of_values_1() { return static_cast<int32_t>(offsetof(SerializationInfo_t722839904, ___values_1)); }
	inline ArrayList_t3867410345 * get_values_1() const { return ___values_1; }
	inline ArrayList_t3867410345 ** get_address_of_values_1() { return &___values_1; }
	inline void set_values_1(ArrayList_t3867410345 * value)
	{
		___values_1 = value;
		Il2CppCodeGenWriteBarrier((&___values_1), value);
	}

	inline static int32_t get_offset_of_assemblyName_2() { return static_cast<int32_t>(offsetof(SerializationInfo_t722839904, ___assemblyName_2)); }
	inline String_t* get_assemblyName_2() const { return ___assemblyName_2; }
	inline String_t** get_address_of_assemblyName_2() { return &___assemblyName_2; }
	inline void set_assemblyName_2(String_t* value)
	{
		___assemblyName_2 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyName_2), value);
	}

	inline static int32_t get_offset_of_fullTypeName_3() { return static_cast<int32_t>(offsetof(SerializationInfo_t722839904, ___fullTypeName_3)); }
	inline String_t* get_fullTypeName_3() const { return ___fullTypeName_3; }
	inline String_t** get_address_of_fullTypeName_3() { return &___fullTypeName_3; }
	inline void set_fullTypeName_3(String_t* value)
	{
		___fullTypeName_3 = value;
		Il2CppCodeGenWriteBarrier((&___fullTypeName_3), value);
	}

	inline static int32_t get_offset_of_converter_4() { return static_cast<int32_t>(offsetof(SerializationInfo_t722839904, ___converter_4)); }
	inline RuntimeObject* get_converter_4() const { return ___converter_4; }
	inline RuntimeObject** get_address_of_converter_4() { return &___converter_4; }
	inline void set_converter_4(RuntimeObject* value)
	{
		___converter_4 = value;
		Il2CppCodeGenWriteBarrier((&___converter_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZATIONINFO_T722839904_H
#ifndef SERIALIZATIONINFOENUMERATOR_T1538281971_H
#define SERIALIZATIONINFOENUMERATOR_T1538281971_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.SerializationInfoEnumerator
struct  SerializationInfoEnumerator_t1538281971  : public RuntimeObject
{
public:
	// System.Collections.IEnumerator System.Runtime.Serialization.SerializationInfoEnumerator::enumerator
	RuntimeObject* ___enumerator_0;

public:
	inline static int32_t get_offset_of_enumerator_0() { return static_cast<int32_t>(offsetof(SerializationInfoEnumerator_t1538281971, ___enumerator_0)); }
	inline RuntimeObject* get_enumerator_0() const { return ___enumerator_0; }
	inline RuntimeObject** get_address_of_enumerator_0() { return &___enumerator_0; }
	inline void set_enumerator_0(RuntimeObject* value)
	{
		___enumerator_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumerator_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZATIONINFOENUMERATOR_T1538281971_H
#ifndef U3CREGISTEROBJECTU3EC__ANONSTOREY3_T3086664498_H
#define U3CREGISTEROBJECTU3EC__ANONSTOREY3_T3086664498_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.SerializationObjectManager/<RegisterObject>c__AnonStorey3
struct  U3CRegisterObjectU3Ec__AnonStorey3_t3086664498  : public RuntimeObject
{
public:
	// System.Runtime.Serialization.SerializationCallbacks System.Runtime.Serialization.SerializationObjectManager/<RegisterObject>c__AnonStorey3::sc
	SerializationCallbacks_t119595541 * ___sc_0;
	// System.Object System.Runtime.Serialization.SerializationObjectManager/<RegisterObject>c__AnonStorey3::obj
	RuntimeObject * ___obj_1;

public:
	inline static int32_t get_offset_of_sc_0() { return static_cast<int32_t>(offsetof(U3CRegisterObjectU3Ec__AnonStorey3_t3086664498, ___sc_0)); }
	inline SerializationCallbacks_t119595541 * get_sc_0() const { return ___sc_0; }
	inline SerializationCallbacks_t119595541 ** get_address_of_sc_0() { return &___sc_0; }
	inline void set_sc_0(SerializationCallbacks_t119595541 * value)
	{
		___sc_0 = value;
		Il2CppCodeGenWriteBarrier((&___sc_0), value);
	}

	inline static int32_t get_offset_of_obj_1() { return static_cast<int32_t>(offsetof(U3CRegisterObjectU3Ec__AnonStorey3_t3086664498, ___obj_1)); }
	inline RuntimeObject * get_obj_1() const { return ___obj_1; }
	inline RuntimeObject ** get_address_of_obj_1() { return &___obj_1; }
	inline void set_obj_1(RuntimeObject * value)
	{
		___obj_1 = value;
		Il2CppCodeGenWriteBarrier((&___obj_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CREGISTEROBJECTU3EC__ANONSTOREY3_T3086664498_H
#ifndef X509CERTIFICATE_T1721638875_H
#define X509CERTIFICATE_T1721638875_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509Certificate
struct  X509Certificate_t1721638875  : public RuntimeObject
{
public:
	// Mono.Security.X509.X509Certificate System.Security.Cryptography.X509Certificates.X509Certificate::x509
	X509Certificate_t429457497 * ___x509_0;
	// System.Boolean System.Security.Cryptography.X509Certificates.X509Certificate::hideDates
	bool ___hideDates_1;
	// System.Byte[] System.Security.Cryptography.X509Certificates.X509Certificate::cachedCertificateHash
	ByteU5BU5D_t965135465* ___cachedCertificateHash_2;
	// System.String System.Security.Cryptography.X509Certificates.X509Certificate::issuer_name
	String_t* ___issuer_name_3;
	// System.String System.Security.Cryptography.X509Certificates.X509Certificate::subject_name
	String_t* ___subject_name_4;

public:
	inline static int32_t get_offset_of_x509_0() { return static_cast<int32_t>(offsetof(X509Certificate_t1721638875, ___x509_0)); }
	inline X509Certificate_t429457497 * get_x509_0() const { return ___x509_0; }
	inline X509Certificate_t429457497 ** get_address_of_x509_0() { return &___x509_0; }
	inline void set_x509_0(X509Certificate_t429457497 * value)
	{
		___x509_0 = value;
		Il2CppCodeGenWriteBarrier((&___x509_0), value);
	}

	inline static int32_t get_offset_of_hideDates_1() { return static_cast<int32_t>(offsetof(X509Certificate_t1721638875, ___hideDates_1)); }
	inline bool get_hideDates_1() const { return ___hideDates_1; }
	inline bool* get_address_of_hideDates_1() { return &___hideDates_1; }
	inline void set_hideDates_1(bool value)
	{
		___hideDates_1 = value;
	}

	inline static int32_t get_offset_of_cachedCertificateHash_2() { return static_cast<int32_t>(offsetof(X509Certificate_t1721638875, ___cachedCertificateHash_2)); }
	inline ByteU5BU5D_t965135465* get_cachedCertificateHash_2() const { return ___cachedCertificateHash_2; }
	inline ByteU5BU5D_t965135465** get_address_of_cachedCertificateHash_2() { return &___cachedCertificateHash_2; }
	inline void set_cachedCertificateHash_2(ByteU5BU5D_t965135465* value)
	{
		___cachedCertificateHash_2 = value;
		Il2CppCodeGenWriteBarrier((&___cachedCertificateHash_2), value);
	}

	inline static int32_t get_offset_of_issuer_name_3() { return static_cast<int32_t>(offsetof(X509Certificate_t1721638875, ___issuer_name_3)); }
	inline String_t* get_issuer_name_3() const { return ___issuer_name_3; }
	inline String_t** get_address_of_issuer_name_3() { return &___issuer_name_3; }
	inline void set_issuer_name_3(String_t* value)
	{
		___issuer_name_3 = value;
		Il2CppCodeGenWriteBarrier((&___issuer_name_3), value);
	}

	inline static int32_t get_offset_of_subject_name_4() { return static_cast<int32_t>(offsetof(X509Certificate_t1721638875, ___subject_name_4)); }
	inline String_t* get_subject_name_4() const { return ___subject_name_4; }
	inline String_t** get_address_of_subject_name_4() { return &___subject_name_4; }
	inline void set_subject_name_4(String_t* value)
	{
		___subject_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___subject_name_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CERTIFICATE_T1721638875_H
#ifndef ASYMMETRICALGORITHM_T1142002999_H
#define ASYMMETRICALGORITHM_T1142002999_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsymmetricAlgorithm
struct  AsymmetricAlgorithm_t1142002999  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.AsymmetricAlgorithm::KeySizeValue
	int32_t ___KeySizeValue_0;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.AsymmetricAlgorithm::LegalKeySizesValue
	KeySizesU5BU5D_t1827242508* ___LegalKeySizesValue_1;

public:
	inline static int32_t get_offset_of_KeySizeValue_0() { return static_cast<int32_t>(offsetof(AsymmetricAlgorithm_t1142002999, ___KeySizeValue_0)); }
	inline int32_t get_KeySizeValue_0() const { return ___KeySizeValue_0; }
	inline int32_t* get_address_of_KeySizeValue_0() { return &___KeySizeValue_0; }
	inline void set_KeySizeValue_0(int32_t value)
	{
		___KeySizeValue_0 = value;
	}

	inline static int32_t get_offset_of_LegalKeySizesValue_1() { return static_cast<int32_t>(offsetof(AsymmetricAlgorithm_t1142002999, ___LegalKeySizesValue_1)); }
	inline KeySizesU5BU5D_t1827242508* get_LegalKeySizesValue_1() const { return ___LegalKeySizesValue_1; }
	inline KeySizesU5BU5D_t1827242508** get_address_of_LegalKeySizesValue_1() { return &___LegalKeySizesValue_1; }
	inline void set_LegalKeySizesValue_1(KeySizesU5BU5D_t1827242508* value)
	{
		___LegalKeySizesValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___LegalKeySizesValue_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYMMETRICALGORITHM_T1142002999_H
#ifndef ASYMMETRICKEYEXCHANGEFORMATTER_T3826975405_H
#define ASYMMETRICKEYEXCHANGEFORMATTER_T3826975405_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsymmetricKeyExchangeFormatter
struct  AsymmetricKeyExchangeFormatter_t3826975405  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYMMETRICKEYEXCHANGEFORMATTER_T3826975405_H
#ifndef ASYMMETRICSIGNATUREDEFORMATTER_T3573254117_H
#define ASYMMETRICSIGNATUREDEFORMATTER_T3573254117_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsymmetricSignatureDeformatter
struct  AsymmetricSignatureDeformatter_t3573254117  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYMMETRICSIGNATUREDEFORMATTER_T3573254117_H
#ifndef BASE64CONSTANTS_T804313380_H
#define BASE64CONSTANTS_T804313380_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.Base64Constants
struct  Base64Constants_t804313380  : public RuntimeObject
{
public:

public:
};

struct Base64Constants_t804313380_StaticFields
{
public:
	// System.Byte[] System.Security.Cryptography.Base64Constants::EncodeTable
	ByteU5BU5D_t965135465* ___EncodeTable_0;
	// System.Byte[] System.Security.Cryptography.Base64Constants::DecodeTable
	ByteU5BU5D_t965135465* ___DecodeTable_1;

public:
	inline static int32_t get_offset_of_EncodeTable_0() { return static_cast<int32_t>(offsetof(Base64Constants_t804313380_StaticFields, ___EncodeTable_0)); }
	inline ByteU5BU5D_t965135465* get_EncodeTable_0() const { return ___EncodeTable_0; }
	inline ByteU5BU5D_t965135465** get_address_of_EncodeTable_0() { return &___EncodeTable_0; }
	inline void set_EncodeTable_0(ByteU5BU5D_t965135465* value)
	{
		___EncodeTable_0 = value;
		Il2CppCodeGenWriteBarrier((&___EncodeTable_0), value);
	}

	inline static int32_t get_offset_of_DecodeTable_1() { return static_cast<int32_t>(offsetof(Base64Constants_t804313380_StaticFields, ___DecodeTable_1)); }
	inline ByteU5BU5D_t965135465* get_DecodeTable_1() const { return ___DecodeTable_1; }
	inline ByteU5BU5D_t965135465** get_address_of_DecodeTable_1() { return &___DecodeTable_1; }
	inline void set_DecodeTable_1(ByteU5BU5D_t965135465* value)
	{
		___DecodeTable_1 = value;
		Il2CppCodeGenWriteBarrier((&___DecodeTable_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASE64CONSTANTS_T804313380_H
#ifndef CRYPTOCONFIG_T1015305726_H
#define CRYPTOCONFIG_T1015305726_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CryptoConfig
struct  CryptoConfig_t1015305726  : public RuntimeObject
{
public:

public:
};

struct CryptoConfig_t1015305726_StaticFields
{
public:
	// System.Object System.Security.Cryptography.CryptoConfig::lockObject
	RuntimeObject * ___lockObject_0;
	// System.Collections.Hashtable System.Security.Cryptography.CryptoConfig::algorithms
	Hashtable_t916193709 * ___algorithms_1;
	// System.Collections.Hashtable System.Security.Cryptography.CryptoConfig::oid
	Hashtable_t916193709 * ___oid_2;

public:
	inline static int32_t get_offset_of_lockObject_0() { return static_cast<int32_t>(offsetof(CryptoConfig_t1015305726_StaticFields, ___lockObject_0)); }
	inline RuntimeObject * get_lockObject_0() const { return ___lockObject_0; }
	inline RuntimeObject ** get_address_of_lockObject_0() { return &___lockObject_0; }
	inline void set_lockObject_0(RuntimeObject * value)
	{
		___lockObject_0 = value;
		Il2CppCodeGenWriteBarrier((&___lockObject_0), value);
	}

	inline static int32_t get_offset_of_algorithms_1() { return static_cast<int32_t>(offsetof(CryptoConfig_t1015305726_StaticFields, ___algorithms_1)); }
	inline Hashtable_t916193709 * get_algorithms_1() const { return ___algorithms_1; }
	inline Hashtable_t916193709 ** get_address_of_algorithms_1() { return &___algorithms_1; }
	inline void set_algorithms_1(Hashtable_t916193709 * value)
	{
		___algorithms_1 = value;
		Il2CppCodeGenWriteBarrier((&___algorithms_1), value);
	}

	inline static int32_t get_offset_of_oid_2() { return static_cast<int32_t>(offsetof(CryptoConfig_t1015305726_StaticFields, ___oid_2)); }
	inline Hashtable_t916193709 * get_oid_2() const { return ___oid_2; }
	inline Hashtable_t916193709 ** get_address_of_oid_2() { return &___oid_2; }
	inline void set_oid_2(Hashtable_t916193709 * value)
	{
		___oid_2 = value;
		Il2CppCodeGenWriteBarrier((&___oid_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRYPTOCONFIG_T1015305726_H
#ifndef HASHALGORITHM_T3960293763_H
#define HASHALGORITHM_T3960293763_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HashAlgorithm
struct  HashAlgorithm_t3960293763  : public RuntimeObject
{
public:
	// System.Byte[] System.Security.Cryptography.HashAlgorithm::HashValue
	ByteU5BU5D_t965135465* ___HashValue_0;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::HashSizeValue
	int32_t ___HashSizeValue_1;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::State
	int32_t ___State_2;
	// System.Boolean System.Security.Cryptography.HashAlgorithm::disposed
	bool ___disposed_3;

public:
	inline static int32_t get_offset_of_HashValue_0() { return static_cast<int32_t>(offsetof(HashAlgorithm_t3960293763, ___HashValue_0)); }
	inline ByteU5BU5D_t965135465* get_HashValue_0() const { return ___HashValue_0; }
	inline ByteU5BU5D_t965135465** get_address_of_HashValue_0() { return &___HashValue_0; }
	inline void set_HashValue_0(ByteU5BU5D_t965135465* value)
	{
		___HashValue_0 = value;
		Il2CppCodeGenWriteBarrier((&___HashValue_0), value);
	}

	inline static int32_t get_offset_of_HashSizeValue_1() { return static_cast<int32_t>(offsetof(HashAlgorithm_t3960293763, ___HashSizeValue_1)); }
	inline int32_t get_HashSizeValue_1() const { return ___HashSizeValue_1; }
	inline int32_t* get_address_of_HashSizeValue_1() { return &___HashSizeValue_1; }
	inline void set_HashSizeValue_1(int32_t value)
	{
		___HashSizeValue_1 = value;
	}

	inline static int32_t get_offset_of_State_2() { return static_cast<int32_t>(offsetof(HashAlgorithm_t3960293763, ___State_2)); }
	inline int32_t get_State_2() const { return ___State_2; }
	inline int32_t* get_address_of_State_2() { return &___State_2; }
	inline void set_State_2(int32_t value)
	{
		___State_2 = value;
	}

	inline static int32_t get_offset_of_disposed_3() { return static_cast<int32_t>(offsetof(HashAlgorithm_t3960293763, ___disposed_3)); }
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
#endif // HASHALGORITHM_T3960293763_H
#ifndef KEYSIZES_T742591633_H
#define KEYSIZES_T742591633_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.KeySizes
struct  KeySizes_t742591633  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.KeySizes::_maxSize
	int32_t ____maxSize_0;
	// System.Int32 System.Security.Cryptography.KeySizes::_minSize
	int32_t ____minSize_1;
	// System.Int32 System.Security.Cryptography.KeySizes::_skipSize
	int32_t ____skipSize_2;

public:
	inline static int32_t get_offset_of__maxSize_0() { return static_cast<int32_t>(offsetof(KeySizes_t742591633, ____maxSize_0)); }
	inline int32_t get__maxSize_0() const { return ____maxSize_0; }
	inline int32_t* get_address_of__maxSize_0() { return &____maxSize_0; }
	inline void set__maxSize_0(int32_t value)
	{
		____maxSize_0 = value;
	}

	inline static int32_t get_offset_of__minSize_1() { return static_cast<int32_t>(offsetof(KeySizes_t742591633, ____minSize_1)); }
	inline int32_t get__minSize_1() const { return ____minSize_1; }
	inline int32_t* get_address_of__minSize_1() { return &____minSize_1; }
	inline void set__minSize_1(int32_t value)
	{
		____minSize_1 = value;
	}

	inline static int32_t get_offset_of__skipSize_2() { return static_cast<int32_t>(offsetof(KeySizes_t742591633, ____skipSize_2)); }
	inline int32_t get__skipSize_2() const { return ____skipSize_2; }
	inline int32_t* get_address_of__skipSize_2() { return &____skipSize_2; }
	inline void set__skipSize_2(int32_t value)
	{
		____skipSize_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYSIZES_T742591633_H
#ifndef TYPEENTRY_T996228013_H
#define TYPEENTRY_T996228013_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.TypeEntry
struct  TypeEntry_t996228013  : public RuntimeObject
{
public:
	// System.String System.Runtime.Remoting.TypeEntry::assembly_name
	String_t* ___assembly_name_0;
	// System.String System.Runtime.Remoting.TypeEntry::type_name
	String_t* ___type_name_1;

public:
	inline static int32_t get_offset_of_assembly_name_0() { return static_cast<int32_t>(offsetof(TypeEntry_t996228013, ___assembly_name_0)); }
	inline String_t* get_assembly_name_0() const { return ___assembly_name_0; }
	inline String_t** get_address_of_assembly_name_0() { return &___assembly_name_0; }
	inline void set_assembly_name_0(String_t* value)
	{
		___assembly_name_0 = value;
		Il2CppCodeGenWriteBarrier((&___assembly_name_0), value);
	}

	inline static int32_t get_offset_of_type_name_1() { return static_cast<int32_t>(offsetof(TypeEntry_t996228013, ___type_name_1)); }
	inline String_t* get_type_name_1() const { return ___type_name_1; }
	inline String_t** get_address_of_type_name_1() { return &___type_name_1; }
	inline void set_type_name_1(String_t* value)
	{
		___type_name_1 = value;
		Il2CppCodeGenWriteBarrier((&___type_name_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEENTRY_T996228013_H
#ifndef ATTRIBUTE_T73266980_H
#define ATTRIBUTE_T73266980_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t73266980  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T73266980_H
#ifndef VALUETYPE_T1642587522_H
#define VALUETYPE_T1642587522_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t1642587522  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t1642587522_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t1642587522_marshaled_com
{
};
#endif // VALUETYPE_T1642587522_H
#ifndef SYMMETRICTRANSFORM_T2978785135_H
#define SYMMETRICTRANSFORM_T2978785135_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.SymmetricTransform
struct  SymmetricTransform_t2978785135  : public RuntimeObject
{
public:
	// System.Security.Cryptography.SymmetricAlgorithm Mono.Security.Cryptography.SymmetricTransform::algo
	SymmetricAlgorithm_t3610262089 * ___algo_0;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::encrypt
	bool ___encrypt_1;
	// System.Int32 Mono.Security.Cryptography.SymmetricTransform::BlockSizeByte
	int32_t ___BlockSizeByte_2;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::temp
	ByteU5BU5D_t965135465* ___temp_3;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::temp2
	ByteU5BU5D_t965135465* ___temp2_4;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::workBuff
	ByteU5BU5D_t965135465* ___workBuff_5;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::workout
	ByteU5BU5D_t965135465* ___workout_6;
	// System.Int32 Mono.Security.Cryptography.SymmetricTransform::FeedBackByte
	int32_t ___FeedBackByte_7;
	// System.Int32 Mono.Security.Cryptography.SymmetricTransform::FeedBackIter
	int32_t ___FeedBackIter_8;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::m_disposed
	bool ___m_disposed_9;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::lastBlock
	bool ___lastBlock_10;
	// System.Security.Cryptography.RandomNumberGenerator Mono.Security.Cryptography.SymmetricTransform::_rng
	RandomNumberGenerator_t4085890488 * ____rng_11;

public:
	inline static int32_t get_offset_of_algo_0() { return static_cast<int32_t>(offsetof(SymmetricTransform_t2978785135, ___algo_0)); }
	inline SymmetricAlgorithm_t3610262089 * get_algo_0() const { return ___algo_0; }
	inline SymmetricAlgorithm_t3610262089 ** get_address_of_algo_0() { return &___algo_0; }
	inline void set_algo_0(SymmetricAlgorithm_t3610262089 * value)
	{
		___algo_0 = value;
		Il2CppCodeGenWriteBarrier((&___algo_0), value);
	}

	inline static int32_t get_offset_of_encrypt_1() { return static_cast<int32_t>(offsetof(SymmetricTransform_t2978785135, ___encrypt_1)); }
	inline bool get_encrypt_1() const { return ___encrypt_1; }
	inline bool* get_address_of_encrypt_1() { return &___encrypt_1; }
	inline void set_encrypt_1(bool value)
	{
		___encrypt_1 = value;
	}

	inline static int32_t get_offset_of_BlockSizeByte_2() { return static_cast<int32_t>(offsetof(SymmetricTransform_t2978785135, ___BlockSizeByte_2)); }
	inline int32_t get_BlockSizeByte_2() const { return ___BlockSizeByte_2; }
	inline int32_t* get_address_of_BlockSizeByte_2() { return &___BlockSizeByte_2; }
	inline void set_BlockSizeByte_2(int32_t value)
	{
		___BlockSizeByte_2 = value;
	}

	inline static int32_t get_offset_of_temp_3() { return static_cast<int32_t>(offsetof(SymmetricTransform_t2978785135, ___temp_3)); }
	inline ByteU5BU5D_t965135465* get_temp_3() const { return ___temp_3; }
	inline ByteU5BU5D_t965135465** get_address_of_temp_3() { return &___temp_3; }
	inline void set_temp_3(ByteU5BU5D_t965135465* value)
	{
		___temp_3 = value;
		Il2CppCodeGenWriteBarrier((&___temp_3), value);
	}

	inline static int32_t get_offset_of_temp2_4() { return static_cast<int32_t>(offsetof(SymmetricTransform_t2978785135, ___temp2_4)); }
	inline ByteU5BU5D_t965135465* get_temp2_4() const { return ___temp2_4; }
	inline ByteU5BU5D_t965135465** get_address_of_temp2_4() { return &___temp2_4; }
	inline void set_temp2_4(ByteU5BU5D_t965135465* value)
	{
		___temp2_4 = value;
		Il2CppCodeGenWriteBarrier((&___temp2_4), value);
	}

	inline static int32_t get_offset_of_workBuff_5() { return static_cast<int32_t>(offsetof(SymmetricTransform_t2978785135, ___workBuff_5)); }
	inline ByteU5BU5D_t965135465* get_workBuff_5() const { return ___workBuff_5; }
	inline ByteU5BU5D_t965135465** get_address_of_workBuff_5() { return &___workBuff_5; }
	inline void set_workBuff_5(ByteU5BU5D_t965135465* value)
	{
		___workBuff_5 = value;
		Il2CppCodeGenWriteBarrier((&___workBuff_5), value);
	}

	inline static int32_t get_offset_of_workout_6() { return static_cast<int32_t>(offsetof(SymmetricTransform_t2978785135, ___workout_6)); }
	inline ByteU5BU5D_t965135465* get_workout_6() const { return ___workout_6; }
	inline ByteU5BU5D_t965135465** get_address_of_workout_6() { return &___workout_6; }
	inline void set_workout_6(ByteU5BU5D_t965135465* value)
	{
		___workout_6 = value;
		Il2CppCodeGenWriteBarrier((&___workout_6), value);
	}

	inline static int32_t get_offset_of_FeedBackByte_7() { return static_cast<int32_t>(offsetof(SymmetricTransform_t2978785135, ___FeedBackByte_7)); }
	inline int32_t get_FeedBackByte_7() const { return ___FeedBackByte_7; }
	inline int32_t* get_address_of_FeedBackByte_7() { return &___FeedBackByte_7; }
	inline void set_FeedBackByte_7(int32_t value)
	{
		___FeedBackByte_7 = value;
	}

	inline static int32_t get_offset_of_FeedBackIter_8() { return static_cast<int32_t>(offsetof(SymmetricTransform_t2978785135, ___FeedBackIter_8)); }
	inline int32_t get_FeedBackIter_8() const { return ___FeedBackIter_8; }
	inline int32_t* get_address_of_FeedBackIter_8() { return &___FeedBackIter_8; }
	inline void set_FeedBackIter_8(int32_t value)
	{
		___FeedBackIter_8 = value;
	}

	inline static int32_t get_offset_of_m_disposed_9() { return static_cast<int32_t>(offsetof(SymmetricTransform_t2978785135, ___m_disposed_9)); }
	inline bool get_m_disposed_9() const { return ___m_disposed_9; }
	inline bool* get_address_of_m_disposed_9() { return &___m_disposed_9; }
	inline void set_m_disposed_9(bool value)
	{
		___m_disposed_9 = value;
	}

	inline static int32_t get_offset_of_lastBlock_10() { return static_cast<int32_t>(offsetof(SymmetricTransform_t2978785135, ___lastBlock_10)); }
	inline bool get_lastBlock_10() const { return ___lastBlock_10; }
	inline bool* get_address_of_lastBlock_10() { return &___lastBlock_10; }
	inline void set_lastBlock_10(bool value)
	{
		___lastBlock_10 = value;
	}

	inline static int32_t get_offset_of__rng_11() { return static_cast<int32_t>(offsetof(SymmetricTransform_t2978785135, ____rng_11)); }
	inline RandomNumberGenerator_t4085890488 * get__rng_11() const { return ____rng_11; }
	inline RandomNumberGenerator_t4085890488 ** get_address_of__rng_11() { return &____rng_11; }
	inline void set__rng_11(RandomNumberGenerator_t4085890488 * value)
	{
		____rng_11 = value;
		Il2CppCodeGenWriteBarrier((&____rng_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYMMETRICTRANSFORM_T2978785135_H
#ifndef RANDOMNUMBERGENERATOR_T4085890488_H
#define RANDOMNUMBERGENERATOR_T4085890488_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RandomNumberGenerator
struct  RandomNumberGenerator_t4085890488  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANDOMNUMBERGENERATOR_T4085890488_H
#ifndef INSTANCECOMPARER_T816754153_H
#define INSTANCECOMPARER_T816754153_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.ObjectIDGenerator/InstanceComparer
struct  InstanceComparer_t816754153  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INSTANCECOMPARER_T816754153_H
#ifndef OBJECTIDGENERATOR_T1480664618_H
#define OBJECTIDGENERATOR_T1480664618_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.ObjectIDGenerator
struct  ObjectIDGenerator_t1480664618  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Runtime.Serialization.ObjectIDGenerator::table
	Hashtable_t916193709 * ___table_0;
	// System.Int64 System.Runtime.Serialization.ObjectIDGenerator::current
	int64_t ___current_1;

public:
	inline static int32_t get_offset_of_table_0() { return static_cast<int32_t>(offsetof(ObjectIDGenerator_t1480664618, ___table_0)); }
	inline Hashtable_t916193709 * get_table_0() const { return ___table_0; }
	inline Hashtable_t916193709 ** get_address_of_table_0() { return &___table_0; }
	inline void set_table_0(Hashtable_t916193709 * value)
	{
		___table_0 = value;
		Il2CppCodeGenWriteBarrier((&___table_0), value);
	}

	inline static int32_t get_offset_of_current_1() { return static_cast<int32_t>(offsetof(ObjectIDGenerator_t1480664618, ___current_1)); }
	inline int64_t get_current_1() const { return ___current_1; }
	inline int64_t* get_address_of_current_1() { return &___current_1; }
	inline void set_current_1(int64_t value)
	{
		___current_1 = value;
	}
};

struct ObjectIDGenerator_t1480664618_StaticFields
{
public:
	// System.Runtime.Serialization.ObjectIDGenerator/InstanceComparer System.Runtime.Serialization.ObjectIDGenerator::comparer
	InstanceComparer_t816754153 * ___comparer_2;

public:
	inline static int32_t get_offset_of_comparer_2() { return static_cast<int32_t>(offsetof(ObjectIDGenerator_t1480664618_StaticFields, ___comparer_2)); }
	inline InstanceComparer_t816754153 * get_comparer_2() const { return ___comparer_2; }
	inline InstanceComparer_t816754153 ** get_address_of_comparer_2() { return &___comparer_2; }
	inline void set_comparer_2(InstanceComparer_t816754153 * value)
	{
		___comparer_2 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTIDGENERATOR_T1480664618_H
#ifndef EXCEPTION_T2073411968_H
#define EXCEPTION_T2073411968_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t2073411968  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t1175376876* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t2073411968 * ___inner_exception_1;
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
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t2073411968, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t1175376876* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t1175376876** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t1175376876* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t2073411968, ___inner_exception_1)); }
	inline Exception_t2073411968 * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t2073411968 ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t2073411968 * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t2073411968, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t2073411968, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t2073411968, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t2073411968, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t2073411968, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t2073411968, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t2073411968, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t2073411968, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t2073411968, ____data_10)); }
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
#endif // EXCEPTION_T2073411968_H
#ifndef FORMATTERCONVERTER_T890185150_H
#define FORMATTERCONVERTER_T890185150_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.FormatterConverter
struct  FormatterConverter_t890185150  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORMATTERCONVERTER_T890185150_H
#ifndef BINARYCOMMON_T4079403018_H
#define BINARYCOMMON_T4079403018_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.BinaryCommon
struct  BinaryCommon_t4079403018  : public RuntimeObject
{
public:

public:
};

struct BinaryCommon_t4079403018_StaticFields
{
public:
	// System.Byte[] System.Runtime.Serialization.Formatters.Binary.BinaryCommon::BinaryHeader
	ByteU5BU5D_t965135465* ___BinaryHeader_0;
	// System.Type[] System.Runtime.Serialization.Formatters.Binary.BinaryCommon::_typeCodesToType
	TypeU5BU5D_t3146466164* ____typeCodesToType_1;
	// System.Byte[] System.Runtime.Serialization.Formatters.Binary.BinaryCommon::_typeCodeMap
	ByteU5BU5D_t965135465* ____typeCodeMap_2;
	// System.Boolean System.Runtime.Serialization.Formatters.Binary.BinaryCommon::UseReflectionSerialization
	bool ___UseReflectionSerialization_3;

public:
	inline static int32_t get_offset_of_BinaryHeader_0() { return static_cast<int32_t>(offsetof(BinaryCommon_t4079403018_StaticFields, ___BinaryHeader_0)); }
	inline ByteU5BU5D_t965135465* get_BinaryHeader_0() const { return ___BinaryHeader_0; }
	inline ByteU5BU5D_t965135465** get_address_of_BinaryHeader_0() { return &___BinaryHeader_0; }
	inline void set_BinaryHeader_0(ByteU5BU5D_t965135465* value)
	{
		___BinaryHeader_0 = value;
		Il2CppCodeGenWriteBarrier((&___BinaryHeader_0), value);
	}

	inline static int32_t get_offset_of__typeCodesToType_1() { return static_cast<int32_t>(offsetof(BinaryCommon_t4079403018_StaticFields, ____typeCodesToType_1)); }
	inline TypeU5BU5D_t3146466164* get__typeCodesToType_1() const { return ____typeCodesToType_1; }
	inline TypeU5BU5D_t3146466164** get_address_of__typeCodesToType_1() { return &____typeCodesToType_1; }
	inline void set__typeCodesToType_1(TypeU5BU5D_t3146466164* value)
	{
		____typeCodesToType_1 = value;
		Il2CppCodeGenWriteBarrier((&____typeCodesToType_1), value);
	}

	inline static int32_t get_offset_of__typeCodeMap_2() { return static_cast<int32_t>(offsetof(BinaryCommon_t4079403018_StaticFields, ____typeCodeMap_2)); }
	inline ByteU5BU5D_t965135465* get__typeCodeMap_2() const { return ____typeCodeMap_2; }
	inline ByteU5BU5D_t965135465** get_address_of__typeCodeMap_2() { return &____typeCodeMap_2; }
	inline void set__typeCodeMap_2(ByteU5BU5D_t965135465* value)
	{
		____typeCodeMap_2 = value;
		Il2CppCodeGenWriteBarrier((&____typeCodeMap_2), value);
	}

	inline static int32_t get_offset_of_UseReflectionSerialization_3() { return static_cast<int32_t>(offsetof(BinaryCommon_t4079403018_StaticFields, ___UseReflectionSerialization_3)); }
	inline bool get_UseReflectionSerialization_3() const { return ___UseReflectionSerialization_3; }
	inline bool* get_address_of_UseReflectionSerialization_3() { return &___UseReflectionSerialization_3; }
	inline void set_UseReflectionSerialization_3(bool value)
	{
		___UseReflectionSerialization_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINARYCOMMON_T4079403018_H
#ifndef FORMATTERSERVICES_T182543004_H
#define FORMATTERSERVICES_T182543004_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.FormatterServices
struct  FormatterServices_t182543004  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORMATTERSERVICES_T182543004_H
#ifndef MESSAGEFORMATTER_T3502090666_H
#define MESSAGEFORMATTER_T3502090666_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.MessageFormatter
struct  MessageFormatter_t3502090666  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESSAGEFORMATTER_T3502090666_H
#ifndef CODEGENERATOR_T283925109_H
#define CODEGENERATOR_T283925109_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.CodeGenerator
struct  CodeGenerator_t283925109  : public RuntimeObject
{
public:

public:
};

struct CodeGenerator_t283925109_StaticFields
{
public:
	// System.Object System.Runtime.Serialization.Formatters.Binary.CodeGenerator::monitor
	RuntimeObject * ___monitor_0;
	// System.Reflection.Emit.ModuleBuilder System.Runtime.Serialization.Formatters.Binary.CodeGenerator::_module
	ModuleBuilder_t3782524751 * ____module_1;

public:
	inline static int32_t get_offset_of_monitor_0() { return static_cast<int32_t>(offsetof(CodeGenerator_t283925109_StaticFields, ___monitor_0)); }
	inline RuntimeObject * get_monitor_0() const { return ___monitor_0; }
	inline RuntimeObject ** get_address_of_monitor_0() { return &___monitor_0; }
	inline void set_monitor_0(RuntimeObject * value)
	{
		___monitor_0 = value;
		Il2CppCodeGenWriteBarrier((&___monitor_0), value);
	}

	inline static int32_t get_offset_of__module_1() { return static_cast<int32_t>(offsetof(CodeGenerator_t283925109_StaticFields, ____module_1)); }
	inline ModuleBuilder_t3782524751 * get__module_1() const { return ____module_1; }
	inline ModuleBuilder_t3782524751 ** get_address_of__module_1() { return &____module_1; }
	inline void set__module_1(ModuleBuilder_t3782524751 * value)
	{
		____module_1 = value;
		Il2CppCodeGenWriteBarrier((&____module_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CODEGENERATOR_T283925109_H
#ifndef METADATAREFERENCE_T2625253365_H
#define METADATAREFERENCE_T2625253365_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.ObjectWriter/MetadataReference
struct  MetadataReference_t2625253365  : public RuntimeObject
{
public:
	// System.Runtime.Serialization.Formatters.Binary.TypeMetadata System.Runtime.Serialization.Formatters.Binary.ObjectWriter/MetadataReference::Metadata
	TypeMetadata_t970315655 * ___Metadata_0;
	// System.Int64 System.Runtime.Serialization.Formatters.Binary.ObjectWriter/MetadataReference::ObjectID
	int64_t ___ObjectID_1;

public:
	inline static int32_t get_offset_of_Metadata_0() { return static_cast<int32_t>(offsetof(MetadataReference_t2625253365, ___Metadata_0)); }
	inline TypeMetadata_t970315655 * get_Metadata_0() const { return ___Metadata_0; }
	inline TypeMetadata_t970315655 ** get_address_of_Metadata_0() { return &___Metadata_0; }
	inline void set_Metadata_0(TypeMetadata_t970315655 * value)
	{
		___Metadata_0 = value;
		Il2CppCodeGenWriteBarrier((&___Metadata_0), value);
	}

	inline static int32_t get_offset_of_ObjectID_1() { return static_cast<int32_t>(offsetof(MetadataReference_t2625253365, ___ObjectID_1)); }
	inline int64_t get_ObjectID_1() const { return ___ObjectID_1; }
	inline int64_t* get_address_of_ObjectID_1() { return &___ObjectID_1; }
	inline void set_ObjectID_1(int64_t value)
	{
		___ObjectID_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METADATAREFERENCE_T2625253365_H
#ifndef TYPEMETADATA_T2494809118_H
#define TYPEMETADATA_T2494809118_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.ObjectReader/TypeMetadata
struct  TypeMetadata_t2494809118  : public RuntimeObject
{
public:
	// System.Type System.Runtime.Serialization.Formatters.Binary.ObjectReader/TypeMetadata::Type
	Type_t * ___Type_0;
	// System.Type[] System.Runtime.Serialization.Formatters.Binary.ObjectReader/TypeMetadata::MemberTypes
	TypeU5BU5D_t3146466164* ___MemberTypes_1;
	// System.String[] System.Runtime.Serialization.Formatters.Binary.ObjectReader/TypeMetadata::MemberNames
	StringU5BU5D_t131720724* ___MemberNames_2;
	// System.Reflection.MemberInfo[] System.Runtime.Serialization.Formatters.Binary.ObjectReader/TypeMetadata::MemberInfos
	MemberInfoU5BU5D_t300533605* ___MemberInfos_3;
	// System.Int32 System.Runtime.Serialization.Formatters.Binary.ObjectReader/TypeMetadata::FieldCount
	int32_t ___FieldCount_4;
	// System.Boolean System.Runtime.Serialization.Formatters.Binary.ObjectReader/TypeMetadata::NeedsSerializationInfo
	bool ___NeedsSerializationInfo_5;

public:
	inline static int32_t get_offset_of_Type_0() { return static_cast<int32_t>(offsetof(TypeMetadata_t2494809118, ___Type_0)); }
	inline Type_t * get_Type_0() const { return ___Type_0; }
	inline Type_t ** get_address_of_Type_0() { return &___Type_0; }
	inline void set_Type_0(Type_t * value)
	{
		___Type_0 = value;
		Il2CppCodeGenWriteBarrier((&___Type_0), value);
	}

	inline static int32_t get_offset_of_MemberTypes_1() { return static_cast<int32_t>(offsetof(TypeMetadata_t2494809118, ___MemberTypes_1)); }
	inline TypeU5BU5D_t3146466164* get_MemberTypes_1() const { return ___MemberTypes_1; }
	inline TypeU5BU5D_t3146466164** get_address_of_MemberTypes_1() { return &___MemberTypes_1; }
	inline void set_MemberTypes_1(TypeU5BU5D_t3146466164* value)
	{
		___MemberTypes_1 = value;
		Il2CppCodeGenWriteBarrier((&___MemberTypes_1), value);
	}

	inline static int32_t get_offset_of_MemberNames_2() { return static_cast<int32_t>(offsetof(TypeMetadata_t2494809118, ___MemberNames_2)); }
	inline StringU5BU5D_t131720724* get_MemberNames_2() const { return ___MemberNames_2; }
	inline StringU5BU5D_t131720724** get_address_of_MemberNames_2() { return &___MemberNames_2; }
	inline void set_MemberNames_2(StringU5BU5D_t131720724* value)
	{
		___MemberNames_2 = value;
		Il2CppCodeGenWriteBarrier((&___MemberNames_2), value);
	}

	inline static int32_t get_offset_of_MemberInfos_3() { return static_cast<int32_t>(offsetof(TypeMetadata_t2494809118, ___MemberInfos_3)); }
	inline MemberInfoU5BU5D_t300533605* get_MemberInfos_3() const { return ___MemberInfos_3; }
	inline MemberInfoU5BU5D_t300533605** get_address_of_MemberInfos_3() { return &___MemberInfos_3; }
	inline void set_MemberInfos_3(MemberInfoU5BU5D_t300533605* value)
	{
		___MemberInfos_3 = value;
		Il2CppCodeGenWriteBarrier((&___MemberInfos_3), value);
	}

	inline static int32_t get_offset_of_FieldCount_4() { return static_cast<int32_t>(offsetof(TypeMetadata_t2494809118, ___FieldCount_4)); }
	inline int32_t get_FieldCount_4() const { return ___FieldCount_4; }
	inline int32_t* get_address_of_FieldCount_4() { return &___FieldCount_4; }
	inline void set_FieldCount_4(int32_t value)
	{
		___FieldCount_4 = value;
	}

	inline static int32_t get_offset_of_NeedsSerializationInfo_5() { return static_cast<int32_t>(offsetof(TypeMetadata_t2494809118, ___NeedsSerializationInfo_5)); }
	inline bool get_NeedsSerializationInfo_5() const { return ___NeedsSerializationInfo_5; }
	inline bool* get_address_of_NeedsSerializationInfo_5() { return &___NeedsSerializationInfo_5; }
	inline void set_NeedsSerializationInfo_5(bool value)
	{
		___NeedsSerializationInfo_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEMETADATA_T2494809118_H
#ifndef TYPEMETADATA_T970315655_H
#define TYPEMETADATA_T970315655_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.TypeMetadata
struct  TypeMetadata_t970315655  : public RuntimeObject
{
public:
	// System.String System.Runtime.Serialization.Formatters.Binary.TypeMetadata::TypeAssemblyName
	String_t* ___TypeAssemblyName_0;
	// System.String System.Runtime.Serialization.Formatters.Binary.TypeMetadata::InstanceTypeName
	String_t* ___InstanceTypeName_1;

public:
	inline static int32_t get_offset_of_TypeAssemblyName_0() { return static_cast<int32_t>(offsetof(TypeMetadata_t970315655, ___TypeAssemblyName_0)); }
	inline String_t* get_TypeAssemblyName_0() const { return ___TypeAssemblyName_0; }
	inline String_t** get_address_of_TypeAssemblyName_0() { return &___TypeAssemblyName_0; }
	inline void set_TypeAssemblyName_0(String_t* value)
	{
		___TypeAssemblyName_0 = value;
		Il2CppCodeGenWriteBarrier((&___TypeAssemblyName_0), value);
	}

	inline static int32_t get_offset_of_InstanceTypeName_1() { return static_cast<int32_t>(offsetof(TypeMetadata_t970315655, ___InstanceTypeName_1)); }
	inline String_t* get_InstanceTypeName_1() const { return ___InstanceTypeName_1; }
	inline String_t** get_address_of_InstanceTypeName_1() { return &___InstanceTypeName_1; }
	inline void set_InstanceTypeName_1(String_t* value)
	{
		___InstanceTypeName_1 = value;
		Il2CppCodeGenWriteBarrier((&___InstanceTypeName_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEMETADATA_T970315655_H
#ifndef ARRAYNULLFILLER_T96935862_H
#define ARRAYNULLFILLER_T96935862_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.ObjectReader/ArrayNullFiller
struct  ArrayNullFiller_t96935862  : public RuntimeObject
{
public:
	// System.Int32 System.Runtime.Serialization.Formatters.Binary.ObjectReader/ArrayNullFiller::NullCount
	int32_t ___NullCount_0;

public:
	inline static int32_t get_offset_of_NullCount_0() { return static_cast<int32_t>(offsetof(ArrayNullFiller_t96935862, ___NullCount_0)); }
	inline int32_t get_NullCount_0() const { return ___NullCount_0; }
	inline int32_t* get_address_of_NullCount_0() { return &___NullCount_0; }
	inline void set_NullCount_0(int32_t value)
	{
		___NullCount_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRAYNULLFILLER_T96935862_H
#ifndef DSASIGNATUREDEFORMATTER_T1203506807_H
#define DSASIGNATUREDEFORMATTER_T1203506807_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DSASignatureDeformatter
struct  DSASignatureDeformatter_t1203506807  : public AsymmetricSignatureDeformatter_t3573254117
{
public:
	// System.Security.Cryptography.DSA System.Security.Cryptography.DSASignatureDeformatter::dsa
	DSA_t661194812 * ___dsa_0;

public:
	inline static int32_t get_offset_of_dsa_0() { return static_cast<int32_t>(offsetof(DSASignatureDeformatter_t1203506807, ___dsa_0)); }
	inline DSA_t661194812 * get_dsa_0() const { return ___dsa_0; }
	inline DSA_t661194812 ** get_address_of_dsa_0() { return &___dsa_0; }
	inline void set_dsa_0(DSA_t661194812 * value)
	{
		___dsa_0 = value;
		Il2CppCodeGenWriteBarrier((&___dsa_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DSASIGNATUREDEFORMATTER_T1203506807_H
#ifndef SERIALIZABLETYPEMETADATA_T3973752499_H
#define SERIALIZABLETYPEMETADATA_T3973752499_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.SerializableTypeMetadata
struct  SerializableTypeMetadata_t3973752499  : public TypeMetadata_t970315655
{
public:
	// System.Type[] System.Runtime.Serialization.Formatters.Binary.SerializableTypeMetadata::types
	TypeU5BU5D_t3146466164* ___types_2;
	// System.String[] System.Runtime.Serialization.Formatters.Binary.SerializableTypeMetadata::names
	StringU5BU5D_t131720724* ___names_3;

public:
	inline static int32_t get_offset_of_types_2() { return static_cast<int32_t>(offsetof(SerializableTypeMetadata_t3973752499, ___types_2)); }
	inline TypeU5BU5D_t3146466164* get_types_2() const { return ___types_2; }
	inline TypeU5BU5D_t3146466164** get_address_of_types_2() { return &___types_2; }
	inline void set_types_2(TypeU5BU5D_t3146466164* value)
	{
		___types_2 = value;
		Il2CppCodeGenWriteBarrier((&___types_2), value);
	}

	inline static int32_t get_offset_of_names_3() { return static_cast<int32_t>(offsetof(SerializableTypeMetadata_t3973752499, ___names_3)); }
	inline StringU5BU5D_t131720724* get_names_3() const { return ___names_3; }
	inline StringU5BU5D_t131720724** get_address_of_names_3() { return &___names_3; }
	inline void set_names_3(StringU5BU5D_t131720724* value)
	{
		___names_3 = value;
		Il2CppCodeGenWriteBarrier((&___names_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZABLETYPEMETADATA_T3973752499_H
#ifndef RIPEMD160_T2910005609_H
#define RIPEMD160_T2910005609_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RIPEMD160
struct  RIPEMD160_t2910005609  : public HashAlgorithm_t3960293763
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIPEMD160_T2910005609_H
#ifndef CLRTYPEMETADATA_T3097028511_H
#define CLRTYPEMETADATA_T3097028511_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.ClrTypeMetadata
struct  ClrTypeMetadata_t3097028511  : public TypeMetadata_t970315655
{
public:
	// System.Type System.Runtime.Serialization.Formatters.Binary.ClrTypeMetadata::InstanceType
	Type_t * ___InstanceType_2;

public:
	inline static int32_t get_offset_of_InstanceType_2() { return static_cast<int32_t>(offsetof(ClrTypeMetadata_t3097028511, ___InstanceType_2)); }
	inline Type_t * get_InstanceType_2() const { return ___InstanceType_2; }
	inline Type_t ** get_address_of_InstanceType_2() { return &___InstanceType_2; }
	inline void set_InstanceType_2(Type_t * value)
	{
		___InstanceType_2 = value;
		Il2CppCodeGenWriteBarrier((&___InstanceType_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLRTYPEMETADATA_T3097028511_H
#ifndef MD5_T1477566663_H
#define MD5_T1477566663_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.MD5
struct  MD5_t1477566663  : public HashAlgorithm_t3960293763
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MD5_T1477566663_H
#ifndef KEYEDHASHALGORITHM_T2972318049_H
#define KEYEDHASHALGORITHM_T2972318049_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.KeyedHashAlgorithm
struct  KeyedHashAlgorithm_t2972318049  : public HashAlgorithm_t3960293763
{
public:
	// System.Byte[] System.Security.Cryptography.KeyedHashAlgorithm::KeyValue
	ByteU5BU5D_t965135465* ___KeyValue_4;

public:
	inline static int32_t get_offset_of_KeyValue_4() { return static_cast<int32_t>(offsetof(KeyedHashAlgorithm_t2972318049, ___KeyValue_4)); }
	inline ByteU5BU5D_t965135465* get_KeyValue_4() const { return ___KeyValue_4; }
	inline ByteU5BU5D_t965135465** get_address_of_KeyValue_4() { return &___KeyValue_4; }
	inline void set_KeyValue_4(ByteU5BU5D_t965135465* value)
	{
		___KeyValue_4 = value;
		Il2CppCodeGenWriteBarrier((&___KeyValue_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYEDHASHALGORITHM_T2972318049_H
#ifndef DESTRANSFORM_T4134365757_H
#define DESTRANSFORM_T4134365757_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DESTransform
struct  DESTransform_t4134365757  : public SymmetricTransform_t2978785135
{
public:
	// System.Byte[] System.Security.Cryptography.DESTransform::keySchedule
	ByteU5BU5D_t965135465* ___keySchedule_16;
	// System.Byte[] System.Security.Cryptography.DESTransform::byteBuff
	ByteU5BU5D_t965135465* ___byteBuff_17;
	// System.UInt32[] System.Security.Cryptography.DESTransform::dwordBuff
	UInt32U5BU5D_t1303042751* ___dwordBuff_18;

public:
	inline static int32_t get_offset_of_keySchedule_16() { return static_cast<int32_t>(offsetof(DESTransform_t4134365757, ___keySchedule_16)); }
	inline ByteU5BU5D_t965135465* get_keySchedule_16() const { return ___keySchedule_16; }
	inline ByteU5BU5D_t965135465** get_address_of_keySchedule_16() { return &___keySchedule_16; }
	inline void set_keySchedule_16(ByteU5BU5D_t965135465* value)
	{
		___keySchedule_16 = value;
		Il2CppCodeGenWriteBarrier((&___keySchedule_16), value);
	}

	inline static int32_t get_offset_of_byteBuff_17() { return static_cast<int32_t>(offsetof(DESTransform_t4134365757, ___byteBuff_17)); }
	inline ByteU5BU5D_t965135465* get_byteBuff_17() const { return ___byteBuff_17; }
	inline ByteU5BU5D_t965135465** get_address_of_byteBuff_17() { return &___byteBuff_17; }
	inline void set_byteBuff_17(ByteU5BU5D_t965135465* value)
	{
		___byteBuff_17 = value;
		Il2CppCodeGenWriteBarrier((&___byteBuff_17), value);
	}

	inline static int32_t get_offset_of_dwordBuff_18() { return static_cast<int32_t>(offsetof(DESTransform_t4134365757, ___dwordBuff_18)); }
	inline UInt32U5BU5D_t1303042751* get_dwordBuff_18() const { return ___dwordBuff_18; }
	inline UInt32U5BU5D_t1303042751** get_address_of_dwordBuff_18() { return &___dwordBuff_18; }
	inline void set_dwordBuff_18(UInt32U5BU5D_t1303042751* value)
	{
		___dwordBuff_18 = value;
		Il2CppCodeGenWriteBarrier((&___dwordBuff_18), value);
	}
};

struct DESTransform_t4134365757_StaticFields
{
public:
	// System.Int32 System.Security.Cryptography.DESTransform::KEY_BIT_SIZE
	int32_t ___KEY_BIT_SIZE_12;
	// System.Int32 System.Security.Cryptography.DESTransform::KEY_BYTE_SIZE
	int32_t ___KEY_BYTE_SIZE_13;
	// System.Int32 System.Security.Cryptography.DESTransform::BLOCK_BIT_SIZE
	int32_t ___BLOCK_BIT_SIZE_14;
	// System.Int32 System.Security.Cryptography.DESTransform::BLOCK_BYTE_SIZE
	int32_t ___BLOCK_BYTE_SIZE_15;
	// System.UInt32[] System.Security.Cryptography.DESTransform::spBoxes
	UInt32U5BU5D_t1303042751* ___spBoxes_19;
	// System.Byte[] System.Security.Cryptography.DESTransform::PC1
	ByteU5BU5D_t965135465* ___PC1_20;
	// System.Byte[] System.Security.Cryptography.DESTransform::leftRotTotal
	ByteU5BU5D_t965135465* ___leftRotTotal_21;
	// System.Byte[] System.Security.Cryptography.DESTransform::PC2
	ByteU5BU5D_t965135465* ___PC2_22;
	// System.UInt32[] System.Security.Cryptography.DESTransform::ipTab
	UInt32U5BU5D_t1303042751* ___ipTab_23;
	// System.UInt32[] System.Security.Cryptography.DESTransform::fpTab
	UInt32U5BU5D_t1303042751* ___fpTab_24;

public:
	inline static int32_t get_offset_of_KEY_BIT_SIZE_12() { return static_cast<int32_t>(offsetof(DESTransform_t4134365757_StaticFields, ___KEY_BIT_SIZE_12)); }
	inline int32_t get_KEY_BIT_SIZE_12() const { return ___KEY_BIT_SIZE_12; }
	inline int32_t* get_address_of_KEY_BIT_SIZE_12() { return &___KEY_BIT_SIZE_12; }
	inline void set_KEY_BIT_SIZE_12(int32_t value)
	{
		___KEY_BIT_SIZE_12 = value;
	}

	inline static int32_t get_offset_of_KEY_BYTE_SIZE_13() { return static_cast<int32_t>(offsetof(DESTransform_t4134365757_StaticFields, ___KEY_BYTE_SIZE_13)); }
	inline int32_t get_KEY_BYTE_SIZE_13() const { return ___KEY_BYTE_SIZE_13; }
	inline int32_t* get_address_of_KEY_BYTE_SIZE_13() { return &___KEY_BYTE_SIZE_13; }
	inline void set_KEY_BYTE_SIZE_13(int32_t value)
	{
		___KEY_BYTE_SIZE_13 = value;
	}

	inline static int32_t get_offset_of_BLOCK_BIT_SIZE_14() { return static_cast<int32_t>(offsetof(DESTransform_t4134365757_StaticFields, ___BLOCK_BIT_SIZE_14)); }
	inline int32_t get_BLOCK_BIT_SIZE_14() const { return ___BLOCK_BIT_SIZE_14; }
	inline int32_t* get_address_of_BLOCK_BIT_SIZE_14() { return &___BLOCK_BIT_SIZE_14; }
	inline void set_BLOCK_BIT_SIZE_14(int32_t value)
	{
		___BLOCK_BIT_SIZE_14 = value;
	}

	inline static int32_t get_offset_of_BLOCK_BYTE_SIZE_15() { return static_cast<int32_t>(offsetof(DESTransform_t4134365757_StaticFields, ___BLOCK_BYTE_SIZE_15)); }
	inline int32_t get_BLOCK_BYTE_SIZE_15() const { return ___BLOCK_BYTE_SIZE_15; }
	inline int32_t* get_address_of_BLOCK_BYTE_SIZE_15() { return &___BLOCK_BYTE_SIZE_15; }
	inline void set_BLOCK_BYTE_SIZE_15(int32_t value)
	{
		___BLOCK_BYTE_SIZE_15 = value;
	}

	inline static int32_t get_offset_of_spBoxes_19() { return static_cast<int32_t>(offsetof(DESTransform_t4134365757_StaticFields, ___spBoxes_19)); }
	inline UInt32U5BU5D_t1303042751* get_spBoxes_19() const { return ___spBoxes_19; }
	inline UInt32U5BU5D_t1303042751** get_address_of_spBoxes_19() { return &___spBoxes_19; }
	inline void set_spBoxes_19(UInt32U5BU5D_t1303042751* value)
	{
		___spBoxes_19 = value;
		Il2CppCodeGenWriteBarrier((&___spBoxes_19), value);
	}

	inline static int32_t get_offset_of_PC1_20() { return static_cast<int32_t>(offsetof(DESTransform_t4134365757_StaticFields, ___PC1_20)); }
	inline ByteU5BU5D_t965135465* get_PC1_20() const { return ___PC1_20; }
	inline ByteU5BU5D_t965135465** get_address_of_PC1_20() { return &___PC1_20; }
	inline void set_PC1_20(ByteU5BU5D_t965135465* value)
	{
		___PC1_20 = value;
		Il2CppCodeGenWriteBarrier((&___PC1_20), value);
	}

	inline static int32_t get_offset_of_leftRotTotal_21() { return static_cast<int32_t>(offsetof(DESTransform_t4134365757_StaticFields, ___leftRotTotal_21)); }
	inline ByteU5BU5D_t965135465* get_leftRotTotal_21() const { return ___leftRotTotal_21; }
	inline ByteU5BU5D_t965135465** get_address_of_leftRotTotal_21() { return &___leftRotTotal_21; }
	inline void set_leftRotTotal_21(ByteU5BU5D_t965135465* value)
	{
		___leftRotTotal_21 = value;
		Il2CppCodeGenWriteBarrier((&___leftRotTotal_21), value);
	}

	inline static int32_t get_offset_of_PC2_22() { return static_cast<int32_t>(offsetof(DESTransform_t4134365757_StaticFields, ___PC2_22)); }
	inline ByteU5BU5D_t965135465* get_PC2_22() const { return ___PC2_22; }
	inline ByteU5BU5D_t965135465** get_address_of_PC2_22() { return &___PC2_22; }
	inline void set_PC2_22(ByteU5BU5D_t965135465* value)
	{
		___PC2_22 = value;
		Il2CppCodeGenWriteBarrier((&___PC2_22), value);
	}

	inline static int32_t get_offset_of_ipTab_23() { return static_cast<int32_t>(offsetof(DESTransform_t4134365757_StaticFields, ___ipTab_23)); }
	inline UInt32U5BU5D_t1303042751* get_ipTab_23() const { return ___ipTab_23; }
	inline UInt32U5BU5D_t1303042751** get_address_of_ipTab_23() { return &___ipTab_23; }
	inline void set_ipTab_23(UInt32U5BU5D_t1303042751* value)
	{
		___ipTab_23 = value;
		Il2CppCodeGenWriteBarrier((&___ipTab_23), value);
	}

	inline static int32_t get_offset_of_fpTab_24() { return static_cast<int32_t>(offsetof(DESTransform_t4134365757_StaticFields, ___fpTab_24)); }
	inline UInt32U5BU5D_t1303042751* get_fpTab_24() const { return ___fpTab_24; }
	inline UInt32U5BU5D_t1303042751** get_address_of_fpTab_24() { return &___fpTab_24; }
	inline void set_fpTab_24(UInt32U5BU5D_t1303042751* value)
	{
		___fpTab_24 = value;
		Il2CppCodeGenWriteBarrier((&___fpTab_24), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESTRANSFORM_T4134365757_H
#ifndef DSA_T661194812_H
#define DSA_T661194812_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DSA
struct  DSA_t661194812  : public AsymmetricAlgorithm_t1142002999
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DSA_T661194812_H
#ifndef DSAPARAMETERS_T472533487_H
#define DSAPARAMETERS_T472533487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DSAParameters
struct  DSAParameters_t472533487 
{
public:
	// System.Int32 System.Security.Cryptography.DSAParameters::Counter
	int32_t ___Counter_0;
	// System.Byte[] System.Security.Cryptography.DSAParameters::G
	ByteU5BU5D_t965135465* ___G_1;
	// System.Byte[] System.Security.Cryptography.DSAParameters::J
	ByteU5BU5D_t965135465* ___J_2;
	// System.Byte[] System.Security.Cryptography.DSAParameters::P
	ByteU5BU5D_t965135465* ___P_3;
	// System.Byte[] System.Security.Cryptography.DSAParameters::Q
	ByteU5BU5D_t965135465* ___Q_4;
	// System.Byte[] System.Security.Cryptography.DSAParameters::Seed
	ByteU5BU5D_t965135465* ___Seed_5;
	// System.Byte[] System.Security.Cryptography.DSAParameters::X
	ByteU5BU5D_t965135465* ___X_6;
	// System.Byte[] System.Security.Cryptography.DSAParameters::Y
	ByteU5BU5D_t965135465* ___Y_7;

public:
	inline static int32_t get_offset_of_Counter_0() { return static_cast<int32_t>(offsetof(DSAParameters_t472533487, ___Counter_0)); }
	inline int32_t get_Counter_0() const { return ___Counter_0; }
	inline int32_t* get_address_of_Counter_0() { return &___Counter_0; }
	inline void set_Counter_0(int32_t value)
	{
		___Counter_0 = value;
	}

	inline static int32_t get_offset_of_G_1() { return static_cast<int32_t>(offsetof(DSAParameters_t472533487, ___G_1)); }
	inline ByteU5BU5D_t965135465* get_G_1() const { return ___G_1; }
	inline ByteU5BU5D_t965135465** get_address_of_G_1() { return &___G_1; }
	inline void set_G_1(ByteU5BU5D_t965135465* value)
	{
		___G_1 = value;
		Il2CppCodeGenWriteBarrier((&___G_1), value);
	}

	inline static int32_t get_offset_of_J_2() { return static_cast<int32_t>(offsetof(DSAParameters_t472533487, ___J_2)); }
	inline ByteU5BU5D_t965135465* get_J_2() const { return ___J_2; }
	inline ByteU5BU5D_t965135465** get_address_of_J_2() { return &___J_2; }
	inline void set_J_2(ByteU5BU5D_t965135465* value)
	{
		___J_2 = value;
		Il2CppCodeGenWriteBarrier((&___J_2), value);
	}

	inline static int32_t get_offset_of_P_3() { return static_cast<int32_t>(offsetof(DSAParameters_t472533487, ___P_3)); }
	inline ByteU5BU5D_t965135465* get_P_3() const { return ___P_3; }
	inline ByteU5BU5D_t965135465** get_address_of_P_3() { return &___P_3; }
	inline void set_P_3(ByteU5BU5D_t965135465* value)
	{
		___P_3 = value;
		Il2CppCodeGenWriteBarrier((&___P_3), value);
	}

	inline static int32_t get_offset_of_Q_4() { return static_cast<int32_t>(offsetof(DSAParameters_t472533487, ___Q_4)); }
	inline ByteU5BU5D_t965135465* get_Q_4() const { return ___Q_4; }
	inline ByteU5BU5D_t965135465** get_address_of_Q_4() { return &___Q_4; }
	inline void set_Q_4(ByteU5BU5D_t965135465* value)
	{
		___Q_4 = value;
		Il2CppCodeGenWriteBarrier((&___Q_4), value);
	}

	inline static int32_t get_offset_of_Seed_5() { return static_cast<int32_t>(offsetof(DSAParameters_t472533487, ___Seed_5)); }
	inline ByteU5BU5D_t965135465* get_Seed_5() const { return ___Seed_5; }
	inline ByteU5BU5D_t965135465** get_address_of_Seed_5() { return &___Seed_5; }
	inline void set_Seed_5(ByteU5BU5D_t965135465* value)
	{
		___Seed_5 = value;
		Il2CppCodeGenWriteBarrier((&___Seed_5), value);
	}

	inline static int32_t get_offset_of_X_6() { return static_cast<int32_t>(offsetof(DSAParameters_t472533487, ___X_6)); }
	inline ByteU5BU5D_t965135465* get_X_6() const { return ___X_6; }
	inline ByteU5BU5D_t965135465** get_address_of_X_6() { return &___X_6; }
	inline void set_X_6(ByteU5BU5D_t965135465* value)
	{
		___X_6 = value;
		Il2CppCodeGenWriteBarrier((&___X_6), value);
	}

	inline static int32_t get_offset_of_Y_7() { return static_cast<int32_t>(offsetof(DSAParameters_t472533487, ___Y_7)); }
	inline ByteU5BU5D_t965135465* get_Y_7() const { return ___Y_7; }
	inline ByteU5BU5D_t965135465** get_address_of_Y_7() { return &___Y_7; }
	inline void set_Y_7(ByteU5BU5D_t965135465* value)
	{
		___Y_7 = value;
		Il2CppCodeGenWriteBarrier((&___Y_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Security.Cryptography.DSAParameters
struct DSAParameters_t472533487_marshaled_pinvoke
{
	int32_t ___Counter_0;
	uint8_t* ___G_1;
	uint8_t* ___J_2;
	uint8_t* ___P_3;
	uint8_t* ___Q_4;
	uint8_t* ___Seed_5;
	uint8_t* ___X_6;
	uint8_t* ___Y_7;
};
// Native definition for COM marshalling of System.Security.Cryptography.DSAParameters
struct DSAParameters_t472533487_marshaled_com
{
	int32_t ___Counter_0;
	uint8_t* ___G_1;
	uint8_t* ___J_2;
	uint8_t* ___P_3;
	uint8_t* ___Q_4;
	uint8_t* ___Seed_5;
	uint8_t* ___X_6;
	uint8_t* ___Y_7;
};
#endif // DSAPARAMETERS_T472533487_H
#ifndef RC2TRANSFORM_T1328656091_H
#define RC2TRANSFORM_T1328656091_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RC2Transform
struct  RC2Transform_t1328656091  : public SymmetricTransform_t2978785135
{
public:
	// System.UInt16 System.Security.Cryptography.RC2Transform::R0
	uint16_t ___R0_12;
	// System.UInt16 System.Security.Cryptography.RC2Transform::R1
	uint16_t ___R1_13;
	// System.UInt16 System.Security.Cryptography.RC2Transform::R2
	uint16_t ___R2_14;
	// System.UInt16 System.Security.Cryptography.RC2Transform::R3
	uint16_t ___R3_15;
	// System.UInt16[] System.Security.Cryptography.RC2Transform::K
	UInt16U5BU5D_t2104570968* ___K_16;
	// System.Int32 System.Security.Cryptography.RC2Transform::j
	int32_t ___j_17;

public:
	inline static int32_t get_offset_of_R0_12() { return static_cast<int32_t>(offsetof(RC2Transform_t1328656091, ___R0_12)); }
	inline uint16_t get_R0_12() const { return ___R0_12; }
	inline uint16_t* get_address_of_R0_12() { return &___R0_12; }
	inline void set_R0_12(uint16_t value)
	{
		___R0_12 = value;
	}

	inline static int32_t get_offset_of_R1_13() { return static_cast<int32_t>(offsetof(RC2Transform_t1328656091, ___R1_13)); }
	inline uint16_t get_R1_13() const { return ___R1_13; }
	inline uint16_t* get_address_of_R1_13() { return &___R1_13; }
	inline void set_R1_13(uint16_t value)
	{
		___R1_13 = value;
	}

	inline static int32_t get_offset_of_R2_14() { return static_cast<int32_t>(offsetof(RC2Transform_t1328656091, ___R2_14)); }
	inline uint16_t get_R2_14() const { return ___R2_14; }
	inline uint16_t* get_address_of_R2_14() { return &___R2_14; }
	inline void set_R2_14(uint16_t value)
	{
		___R2_14 = value;
	}

	inline static int32_t get_offset_of_R3_15() { return static_cast<int32_t>(offsetof(RC2Transform_t1328656091, ___R3_15)); }
	inline uint16_t get_R3_15() const { return ___R3_15; }
	inline uint16_t* get_address_of_R3_15() { return &___R3_15; }
	inline void set_R3_15(uint16_t value)
	{
		___R3_15 = value;
	}

	inline static int32_t get_offset_of_K_16() { return static_cast<int32_t>(offsetof(RC2Transform_t1328656091, ___K_16)); }
	inline UInt16U5BU5D_t2104570968* get_K_16() const { return ___K_16; }
	inline UInt16U5BU5D_t2104570968** get_address_of_K_16() { return &___K_16; }
	inline void set_K_16(UInt16U5BU5D_t2104570968* value)
	{
		___K_16 = value;
		Il2CppCodeGenWriteBarrier((&___K_16), value);
	}

	inline static int32_t get_offset_of_j_17() { return static_cast<int32_t>(offsetof(RC2Transform_t1328656091, ___j_17)); }
	inline int32_t get_j_17() const { return ___j_17; }
	inline int32_t* get_address_of_j_17() { return &___j_17; }
	inline void set_j_17(int32_t value)
	{
		___j_17 = value;
	}
};

struct RC2Transform_t1328656091_StaticFields
{
public:
	// System.Byte[] System.Security.Cryptography.RC2Transform::pitable
	ByteU5BU5D_t965135465* ___pitable_18;

public:
	inline static int32_t get_offset_of_pitable_18() { return static_cast<int32_t>(offsetof(RC2Transform_t1328656091_StaticFields, ___pitable_18)); }
	inline ByteU5BU5D_t965135465* get_pitable_18() const { return ___pitable_18; }
	inline ByteU5BU5D_t965135465** get_address_of_pitable_18() { return &___pitable_18; }
	inline void set_pitable_18(ByteU5BU5D_t965135465* value)
	{
		___pitable_18 = value;
		Il2CppCodeGenWriteBarrier((&___pitable_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RC2TRANSFORM_T1328656091_H
#ifndef RSA_T3620770785_H
#define RSA_T3620770785_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSA
struct  RSA_t3620770785  : public AsymmetricAlgorithm_t1142002999
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSA_T3620770785_H
#ifndef DSASIGNATUREFORMATTER_T2577407923_H
#define DSASIGNATUREFORMATTER_T2577407923_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DSASignatureFormatter
struct  DSASignatureFormatter_t2577407923  : public AsymmetricSignatureFormatter_t2853573350
{
public:
	// System.Security.Cryptography.DSA System.Security.Cryptography.DSASignatureFormatter::dsa
	DSA_t661194812 * ___dsa_0;

public:
	inline static int32_t get_offset_of_dsa_0() { return static_cast<int32_t>(offsetof(DSASignatureFormatter_t2577407923, ___dsa_0)); }
	inline DSA_t661194812 * get_dsa_0() const { return ___dsa_0; }
	inline DSA_t661194812 ** get_address_of_dsa_0() { return &___dsa_0; }
	inline void set_dsa_0(DSA_t661194812 * value)
	{
		___dsa_0 = value;
		Il2CppCodeGenWriteBarrier((&___dsa_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DSASIGNATUREFORMATTER_T2577407923_H
#ifndef ENUM_T2966527543_H
#define ENUM_T2966527543_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t2966527543  : public ValueType_t1642587522
{
public:

public:
};

struct Enum_t2966527543_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3978811185* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t2966527543_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3978811185* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3978811185** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3978811185* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2966527543_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2966527543_marshaled_com
{
};
#endif // ENUM_T2966527543_H
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
#ifndef SERIALIZATIONENTRY_T589640112_H
#define SERIALIZATIONENTRY_T589640112_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.SerializationEntry
struct  SerializationEntry_t589640112 
{
public:
	// System.String System.Runtime.Serialization.SerializationEntry::name
	String_t* ___name_0;
	// System.Type System.Runtime.Serialization.SerializationEntry::objectType
	Type_t * ___objectType_1;
	// System.Object System.Runtime.Serialization.SerializationEntry::value
	RuntimeObject * ___value_2;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(SerializationEntry_t589640112, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_objectType_1() { return static_cast<int32_t>(offsetof(SerializationEntry_t589640112, ___objectType_1)); }
	inline Type_t * get_objectType_1() const { return ___objectType_1; }
	inline Type_t ** get_address_of_objectType_1() { return &___objectType_1; }
	inline void set_objectType_1(Type_t * value)
	{
		___objectType_1 = value;
		Il2CppCodeGenWriteBarrier((&___objectType_1), value);
	}

	inline static int32_t get_offset_of_value_2() { return static_cast<int32_t>(offsetof(SerializationEntry_t589640112, ___value_2)); }
	inline RuntimeObject * get_value_2() const { return ___value_2; }
	inline RuntimeObject ** get_address_of_value_2() { return &___value_2; }
	inline void set_value_2(RuntimeObject * value)
	{
		___value_2 = value;
		Il2CppCodeGenWriteBarrier((&___value_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.Serialization.SerializationEntry
struct SerializationEntry_t589640112_marshaled_pinvoke
{
	char* ___name_0;
	Type_t * ___objectType_1;
	Il2CppIUnknown* ___value_2;
};
// Native definition for COM marshalling of System.Runtime.Serialization.SerializationEntry
struct SerializationEntry_t589640112_marshaled_com
{
	Il2CppChar* ___name_0;
	Type_t * ___objectType_1;
	Il2CppIUnknown* ___value_2;
};
#endif // SERIALIZATIONENTRY_T589640112_H
#ifndef ARRAYFIXUPRECORD_T2408418398_H
#define ARRAYFIXUPRECORD_T2408418398_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.ArrayFixupRecord
struct  ArrayFixupRecord_t2408418398  : public BaseFixupRecord_t1056132251
{
public:
	// System.Int32 System.Runtime.Serialization.ArrayFixupRecord::_index
	int32_t ____index_4;

public:
	inline static int32_t get_offset_of__index_4() { return static_cast<int32_t>(offsetof(ArrayFixupRecord_t2408418398, ____index_4)); }
	inline int32_t get__index_4() const { return ____index_4; }
	inline int32_t* get_address_of__index_4() { return &____index_4; }
	inline void set__index_4(int32_t value)
	{
		____index_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRAYFIXUPRECORD_T2408418398_H
#ifndef VOID_T1307511435_H
#define VOID_T1307511435_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1307511435 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1307511435_H
#ifndef MULTIARRAYFIXUPRECORD_T2895622875_H
#define MULTIARRAYFIXUPRECORD_T2895622875_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.MultiArrayFixupRecord
struct  MultiArrayFixupRecord_t2895622875  : public BaseFixupRecord_t1056132251
{
public:
	// System.Int32[] System.Runtime.Serialization.MultiArrayFixupRecord::_indices
	Int32U5BU5D_t1664692557* ____indices_4;

public:
	inline static int32_t get_offset_of__indices_4() { return static_cast<int32_t>(offsetof(MultiArrayFixupRecord_t2895622875, ____indices_4)); }
	inline Int32U5BU5D_t1664692557* get__indices_4() const { return ____indices_4; }
	inline Int32U5BU5D_t1664692557** get_address_of__indices_4() { return &____indices_4; }
	inline void set__indices_4(Int32U5BU5D_t1664692557* value)
	{
		____indices_4 = value;
		Il2CppCodeGenWriteBarrier((&____indices_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTIARRAYFIXUPRECORD_T2895622875_H
#ifndef ONSERIALIZINGATTRIBUTE_T206381051_H
#define ONSERIALIZINGATTRIBUTE_T206381051_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.OnSerializingAttribute
struct  OnSerializingAttribute_t206381051  : public Attribute_t73266980
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONSERIALIZINGATTRIBUTE_T206381051_H
#ifndef ONSERIALIZEDATTRIBUTE_T191053725_H
#define ONSERIALIZEDATTRIBUTE_T191053725_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.OnSerializedAttribute
struct  OnSerializedAttribute_t191053725  : public Attribute_t73266980
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONSERIALIZEDATTRIBUTE_T191053725_H
#ifndef ONDESERIALIZINGATTRIBUTE_T948465276_H
#define ONDESERIALIZINGATTRIBUTE_T948465276_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.OnDeserializingAttribute
struct  OnDeserializingAttribute_t948465276  : public Attribute_t73266980
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONDESERIALIZINGATTRIBUTE_T948465276_H
#ifndef FIXUPRECORD_T1666242492_H
#define FIXUPRECORD_T1666242492_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.FixupRecord
struct  FixupRecord_t1666242492  : public BaseFixupRecord_t1056132251
{
public:
	// System.Reflection.MemberInfo System.Runtime.Serialization.FixupRecord::_member
	MemberInfo_t * ____member_4;

public:
	inline static int32_t get_offset_of__member_4() { return static_cast<int32_t>(offsetof(FixupRecord_t1666242492, ____member_4)); }
	inline MemberInfo_t * get__member_4() const { return ____member_4; }
	inline MemberInfo_t ** get_address_of__member_4() { return &____member_4; }
	inline void set__member_4(MemberInfo_t * value)
	{
		____member_4 = value;
		Il2CppCodeGenWriteBarrier((&____member_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIXUPRECORD_T1666242492_H
#ifndef ONDESERIALIZEDATTRIBUTE_T3229850254_H
#define ONDESERIALIZEDATTRIBUTE_T3229850254_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.OnDeserializedAttribute
struct  OnDeserializedAttribute_t3229850254  : public Attribute_t73266980
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONDESERIALIZEDATTRIBUTE_T3229850254_H
#ifndef DELAYEDFIXUPRECORD_T3436792777_H
#define DELAYEDFIXUPRECORD_T3436792777_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.DelayedFixupRecord
struct  DelayedFixupRecord_t3436792777  : public BaseFixupRecord_t1056132251
{
public:
	// System.String System.Runtime.Serialization.DelayedFixupRecord::_memberName
	String_t* ____memberName_4;

public:
	inline static int32_t get_offset_of__memberName_4() { return static_cast<int32_t>(offsetof(DelayedFixupRecord_t3436792777, ____memberName_4)); }
	inline String_t* get__memberName_4() const { return ____memberName_4; }
	inline String_t** get_address_of__memberName_4() { return &____memberName_4; }
	inline void set__memberName_4(String_t* value)
	{
		____memberName_4 = value;
		Il2CppCodeGenWriteBarrier((&____memberName_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELAYEDFIXUPRECORD_T3436792777_H
#ifndef SYSTEMEXCEPTION_T2446273261_H
#define SYSTEMEXCEPTION_T2446273261_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t2446273261  : public Exception_t2073411968
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T2446273261_H
#ifndef RETURNTYPETAG_T3756737149_H
#define RETURNTYPETAG_T3756737149_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag
struct  ReturnTypeTag_t3756737149 
{
public:
	// System.Byte System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag::value__
	uint8_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ReturnTypeTag_t3756737149, ___value___1)); }
	inline uint8_t get_value___1() const { return ___value___1; }
	inline uint8_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint8_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RETURNTYPETAG_T3756737149_H
#ifndef HMAC_T2695143592_H
#define HMAC_T2695143592_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HMAC
struct  HMAC_t2695143592  : public KeyedHashAlgorithm_t2972318049
{
public:
	// System.Boolean System.Security.Cryptography.HMAC::_disposed
	bool ____disposed_5;
	// System.String System.Security.Cryptography.HMAC::_hashName
	String_t* ____hashName_6;
	// System.Security.Cryptography.HashAlgorithm System.Security.Cryptography.HMAC::_algo
	HashAlgorithm_t3960293763 * ____algo_7;
	// Mono.Security.Cryptography.BlockProcessor System.Security.Cryptography.HMAC::_block
	BlockProcessor_t1773263970 * ____block_8;
	// System.Int32 System.Security.Cryptography.HMAC::_blockSizeValue
	int32_t ____blockSizeValue_9;

public:
	inline static int32_t get_offset_of__disposed_5() { return static_cast<int32_t>(offsetof(HMAC_t2695143592, ____disposed_5)); }
	inline bool get__disposed_5() const { return ____disposed_5; }
	inline bool* get_address_of__disposed_5() { return &____disposed_5; }
	inline void set__disposed_5(bool value)
	{
		____disposed_5 = value;
	}

	inline static int32_t get_offset_of__hashName_6() { return static_cast<int32_t>(offsetof(HMAC_t2695143592, ____hashName_6)); }
	inline String_t* get__hashName_6() const { return ____hashName_6; }
	inline String_t** get_address_of__hashName_6() { return &____hashName_6; }
	inline void set__hashName_6(String_t* value)
	{
		____hashName_6 = value;
		Il2CppCodeGenWriteBarrier((&____hashName_6), value);
	}

	inline static int32_t get_offset_of__algo_7() { return static_cast<int32_t>(offsetof(HMAC_t2695143592, ____algo_7)); }
	inline HashAlgorithm_t3960293763 * get__algo_7() const { return ____algo_7; }
	inline HashAlgorithm_t3960293763 ** get_address_of__algo_7() { return &____algo_7; }
	inline void set__algo_7(HashAlgorithm_t3960293763 * value)
	{
		____algo_7 = value;
		Il2CppCodeGenWriteBarrier((&____algo_7), value);
	}

	inline static int32_t get_offset_of__block_8() { return static_cast<int32_t>(offsetof(HMAC_t2695143592, ____block_8)); }
	inline BlockProcessor_t1773263970 * get__block_8() const { return ____block_8; }
	inline BlockProcessor_t1773263970 ** get_address_of__block_8() { return &____block_8; }
	inline void set__block_8(BlockProcessor_t1773263970 * value)
	{
		____block_8 = value;
		Il2CppCodeGenWriteBarrier((&____block_8), value);
	}

	inline static int32_t get_offset_of__blockSizeValue_9() { return static_cast<int32_t>(offsetof(HMAC_t2695143592, ____blockSizeValue_9)); }
	inline int32_t get__blockSizeValue_9() const { return ____blockSizeValue_9; }
	inline int32_t* get_address_of__blockSizeValue_9() { return &____blockSizeValue_9; }
	inline void set__blockSizeValue_9(int32_t value)
	{
		____blockSizeValue_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HMAC_T2695143592_H
#ifndef MD5CRYPTOSERVICEPROVIDER_T1392612660_H
#define MD5CRYPTOSERVICEPROVIDER_T1392612660_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.MD5CryptoServiceProvider
struct  MD5CryptoServiceProvider_t1392612660  : public MD5_t1477566663
{
public:
	// System.UInt32[] System.Security.Cryptography.MD5CryptoServiceProvider::_H
	UInt32U5BU5D_t1303042751* ____H_4;
	// System.UInt32[] System.Security.Cryptography.MD5CryptoServiceProvider::buff
	UInt32U5BU5D_t1303042751* ___buff_5;
	// System.UInt64 System.Security.Cryptography.MD5CryptoServiceProvider::count
	uint64_t ___count_6;
	// System.Byte[] System.Security.Cryptography.MD5CryptoServiceProvider::_ProcessingBuffer
	ByteU5BU5D_t965135465* ____ProcessingBuffer_7;
	// System.Int32 System.Security.Cryptography.MD5CryptoServiceProvider::_ProcessingBufferCount
	int32_t ____ProcessingBufferCount_8;

public:
	inline static int32_t get_offset_of__H_4() { return static_cast<int32_t>(offsetof(MD5CryptoServiceProvider_t1392612660, ____H_4)); }
	inline UInt32U5BU5D_t1303042751* get__H_4() const { return ____H_4; }
	inline UInt32U5BU5D_t1303042751** get_address_of__H_4() { return &____H_4; }
	inline void set__H_4(UInt32U5BU5D_t1303042751* value)
	{
		____H_4 = value;
		Il2CppCodeGenWriteBarrier((&____H_4), value);
	}

	inline static int32_t get_offset_of_buff_5() { return static_cast<int32_t>(offsetof(MD5CryptoServiceProvider_t1392612660, ___buff_5)); }
	inline UInt32U5BU5D_t1303042751* get_buff_5() const { return ___buff_5; }
	inline UInt32U5BU5D_t1303042751** get_address_of_buff_5() { return &___buff_5; }
	inline void set_buff_5(UInt32U5BU5D_t1303042751* value)
	{
		___buff_5 = value;
		Il2CppCodeGenWriteBarrier((&___buff_5), value);
	}

	inline static int32_t get_offset_of_count_6() { return static_cast<int32_t>(offsetof(MD5CryptoServiceProvider_t1392612660, ___count_6)); }
	inline uint64_t get_count_6() const { return ___count_6; }
	inline uint64_t* get_address_of_count_6() { return &___count_6; }
	inline void set_count_6(uint64_t value)
	{
		___count_6 = value;
	}

	inline static int32_t get_offset_of__ProcessingBuffer_7() { return static_cast<int32_t>(offsetof(MD5CryptoServiceProvider_t1392612660, ____ProcessingBuffer_7)); }
	inline ByteU5BU5D_t965135465* get__ProcessingBuffer_7() const { return ____ProcessingBuffer_7; }
	inline ByteU5BU5D_t965135465** get_address_of__ProcessingBuffer_7() { return &____ProcessingBuffer_7; }
	inline void set__ProcessingBuffer_7(ByteU5BU5D_t965135465* value)
	{
		____ProcessingBuffer_7 = value;
		Il2CppCodeGenWriteBarrier((&____ProcessingBuffer_7), value);
	}

	inline static int32_t get_offset_of__ProcessingBufferCount_8() { return static_cast<int32_t>(offsetof(MD5CryptoServiceProvider_t1392612660, ____ProcessingBufferCount_8)); }
	inline int32_t get__ProcessingBufferCount_8() const { return ____ProcessingBufferCount_8; }
	inline int32_t* get_address_of__ProcessingBufferCount_8() { return &____ProcessingBufferCount_8; }
	inline void set__ProcessingBufferCount_8(int32_t value)
	{
		____ProcessingBufferCount_8 = value;
	}
};

struct MD5CryptoServiceProvider_t1392612660_StaticFields
{
public:
	// System.UInt32[] System.Security.Cryptography.MD5CryptoServiceProvider::K
	UInt32U5BU5D_t1303042751* ___K_9;

public:
	inline static int32_t get_offset_of_K_9() { return static_cast<int32_t>(offsetof(MD5CryptoServiceProvider_t1392612660_StaticFields, ___K_9)); }
	inline UInt32U5BU5D_t1303042751* get_K_9() const { return ___K_9; }
	inline UInt32U5BU5D_t1303042751** get_address_of_K_9() { return &___K_9; }
	inline void set_K_9(UInt32U5BU5D_t1303042751* value)
	{
		___K_9 = value;
		Il2CppCodeGenWriteBarrier((&___K_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MD5CRYPTOSERVICEPROVIDER_T1392612660_H
#ifndef MACTRIPLEDES_T1015969162_H
#define MACTRIPLEDES_T1015969162_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.MACTripleDES
struct  MACTripleDES_t1015969162  : public KeyedHashAlgorithm_t2972318049
{
public:
	// System.Security.Cryptography.TripleDES System.Security.Cryptography.MACTripleDES::tdes
	TripleDES_t3634838650 * ___tdes_5;
	// Mono.Security.Cryptography.MACAlgorithm System.Security.Cryptography.MACTripleDES::mac
	MACAlgorithm_t2615932059 * ___mac_6;
	// System.Boolean System.Security.Cryptography.MACTripleDES::m_disposed
	bool ___m_disposed_7;

public:
	inline static int32_t get_offset_of_tdes_5() { return static_cast<int32_t>(offsetof(MACTripleDES_t1015969162, ___tdes_5)); }
	inline TripleDES_t3634838650 * get_tdes_5() const { return ___tdes_5; }
	inline TripleDES_t3634838650 ** get_address_of_tdes_5() { return &___tdes_5; }
	inline void set_tdes_5(TripleDES_t3634838650 * value)
	{
		___tdes_5 = value;
		Il2CppCodeGenWriteBarrier((&___tdes_5), value);
	}

	inline static int32_t get_offset_of_mac_6() { return static_cast<int32_t>(offsetof(MACTripleDES_t1015969162, ___mac_6)); }
	inline MACAlgorithm_t2615932059 * get_mac_6() const { return ___mac_6; }
	inline MACAlgorithm_t2615932059 ** get_address_of_mac_6() { return &___mac_6; }
	inline void set_mac_6(MACAlgorithm_t2615932059 * value)
	{
		___mac_6 = value;
		Il2CppCodeGenWriteBarrier((&___mac_6), value);
	}

	inline static int32_t get_offset_of_m_disposed_7() { return static_cast<int32_t>(offsetof(MACTripleDES_t1015969162, ___m_disposed_7)); }
	inline bool get_m_disposed_7() const { return ___m_disposed_7; }
	inline bool* get_address_of_m_disposed_7() { return &___m_disposed_7; }
	inline void set_m_disposed_7(bool value)
	{
		___m_disposed_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MACTRIPLEDES_T1015969162_H
#ifndef WELLKNOWNOBJECTMODE_T2529496380_H
#define WELLKNOWNOBJECTMODE_T2529496380_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.WellKnownObjectMode
struct  WellKnownObjectMode_t2529496380 
{
public:
	// System.Int32 System.Runtime.Remoting.WellKnownObjectMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(WellKnownObjectMode_t2529496380, ___value___1)); }
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
#endif // WELLKNOWNOBJECTMODE_T2529496380_H
#ifndef PADDINGMODE_T1738086749_H
#define PADDINGMODE_T1738086749_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.PaddingMode
struct  PaddingMode_t1738086749 
{
public:
	// System.Int32 System.Security.Cryptography.PaddingMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PaddingMode_t1738086749, ___value___1)); }
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
#endif // PADDINGMODE_T1738086749_H
#ifndef TYPETAG_T2876626053_H
#define TYPETAG_T2876626053_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.TypeTag
struct  TypeTag_t2876626053 
{
public:
	// System.Byte System.Runtime.Serialization.Formatters.Binary.TypeTag::value__
	uint8_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TypeTag_t2876626053, ___value___1)); }
	inline uint8_t get_value___1() const { return ___value___1; }
	inline uint8_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint8_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPETAG_T2876626053_H
#ifndef METHODFLAGS_T720614779_H
#define METHODFLAGS_T720614779_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.MethodFlags
struct  MethodFlags_t720614779 
{
public:
	// System.Int32 System.Runtime.Serialization.Formatters.Binary.MethodFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MethodFlags_t720614779, ___value___1)); }
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
#endif // METHODFLAGS_T720614779_H
#ifndef RIPEMD160MANAGED_T817756336_H
#define RIPEMD160MANAGED_T817756336_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RIPEMD160Managed
struct  RIPEMD160Managed_t817756336  : public RIPEMD160_t2910005609
{
public:
	// System.Byte[] System.Security.Cryptography.RIPEMD160Managed::_ProcessingBuffer
	ByteU5BU5D_t965135465* ____ProcessingBuffer_4;
	// System.UInt32[] System.Security.Cryptography.RIPEMD160Managed::_X
	UInt32U5BU5D_t1303042751* ____X_5;
	// System.UInt32[] System.Security.Cryptography.RIPEMD160Managed::_HashValue
	UInt32U5BU5D_t1303042751* ____HashValue_6;
	// System.UInt64 System.Security.Cryptography.RIPEMD160Managed::_Length
	uint64_t ____Length_7;
	// System.Int32 System.Security.Cryptography.RIPEMD160Managed::_ProcessingBufferCount
	int32_t ____ProcessingBufferCount_8;

public:
	inline static int32_t get_offset_of__ProcessingBuffer_4() { return static_cast<int32_t>(offsetof(RIPEMD160Managed_t817756336, ____ProcessingBuffer_4)); }
	inline ByteU5BU5D_t965135465* get__ProcessingBuffer_4() const { return ____ProcessingBuffer_4; }
	inline ByteU5BU5D_t965135465** get_address_of__ProcessingBuffer_4() { return &____ProcessingBuffer_4; }
	inline void set__ProcessingBuffer_4(ByteU5BU5D_t965135465* value)
	{
		____ProcessingBuffer_4 = value;
		Il2CppCodeGenWriteBarrier((&____ProcessingBuffer_4), value);
	}

	inline static int32_t get_offset_of__X_5() { return static_cast<int32_t>(offsetof(RIPEMD160Managed_t817756336, ____X_5)); }
	inline UInt32U5BU5D_t1303042751* get__X_5() const { return ____X_5; }
	inline UInt32U5BU5D_t1303042751** get_address_of__X_5() { return &____X_5; }
	inline void set__X_5(UInt32U5BU5D_t1303042751* value)
	{
		____X_5 = value;
		Il2CppCodeGenWriteBarrier((&____X_5), value);
	}

	inline static int32_t get_offset_of__HashValue_6() { return static_cast<int32_t>(offsetof(RIPEMD160Managed_t817756336, ____HashValue_6)); }
	inline UInt32U5BU5D_t1303042751* get__HashValue_6() const { return ____HashValue_6; }
	inline UInt32U5BU5D_t1303042751** get_address_of__HashValue_6() { return &____HashValue_6; }
	inline void set__HashValue_6(UInt32U5BU5D_t1303042751* value)
	{
		____HashValue_6 = value;
		Il2CppCodeGenWriteBarrier((&____HashValue_6), value);
	}

	inline static int32_t get_offset_of__Length_7() { return static_cast<int32_t>(offsetof(RIPEMD160Managed_t817756336, ____Length_7)); }
	inline uint64_t get__Length_7() const { return ____Length_7; }
	inline uint64_t* get_address_of__Length_7() { return &____Length_7; }
	inline void set__Length_7(uint64_t value)
	{
		____Length_7 = value;
	}

	inline static int32_t get_offset_of__ProcessingBufferCount_8() { return static_cast<int32_t>(offsetof(RIPEMD160Managed_t817756336, ____ProcessingBufferCount_8)); }
	inline int32_t get__ProcessingBufferCount_8() const { return ____ProcessingBufferCount_8; }
	inline int32_t* get_address_of__ProcessingBufferCount_8() { return &____ProcessingBufferCount_8; }
	inline void set__ProcessingBufferCount_8(int32_t value)
	{
		____ProcessingBufferCount_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIPEMD160MANAGED_T817756336_H
#ifndef BINARYELEMENT_T3293532381_H
#define BINARYELEMENT_T3293532381_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.BinaryElement
struct  BinaryElement_t3293532381 
{
public:
	// System.Byte System.Runtime.Serialization.Formatters.Binary.BinaryElement::value__
	uint8_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BinaryElement_t3293532381, ___value___1)); }
	inline uint8_t get_value___1() const { return ___value___1; }
	inline uint8_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint8_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINARYELEMENT_T3293532381_H
#ifndef RNGCRYPTOSERVICEPROVIDER_T1410523683_H
#define RNGCRYPTOSERVICEPROVIDER_T1410523683_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RNGCryptoServiceProvider
struct  RNGCryptoServiceProvider_t1410523683  : public RandomNumberGenerator_t4085890488
{
public:
	// System.IntPtr System.Security.Cryptography.RNGCryptoServiceProvider::_handle
	intptr_t ____handle_1;

public:
	inline static int32_t get_offset_of__handle_1() { return static_cast<int32_t>(offsetof(RNGCryptoServiceProvider_t1410523683, ____handle_1)); }
	inline intptr_t get__handle_1() const { return ____handle_1; }
	inline intptr_t* get_address_of__handle_1() { return &____handle_1; }
	inline void set__handle_1(intptr_t value)
	{
		____handle_1 = value;
	}
};

struct RNGCryptoServiceProvider_t1410523683_StaticFields
{
public:
	// System.Object System.Security.Cryptography.RNGCryptoServiceProvider::_lock
	RuntimeObject * ____lock_0;

public:
	inline static int32_t get_offset_of__lock_0() { return static_cast<int32_t>(offsetof(RNGCryptoServiceProvider_t1410523683_StaticFields, ____lock_0)); }
	inline RuntimeObject * get__lock_0() const { return ____lock_0; }
	inline RuntimeObject ** get_address_of__lock_0() { return &____lock_0; }
	inline void set__lock_0(RuntimeObject * value)
	{
		____lock_0 = value;
		Il2CppCodeGenWriteBarrier((&____lock_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RNGCRYPTOSERVICEPROVIDER_T1410523683_H
#ifndef DSACRYPTOSERVICEPROVIDER_T4013930519_H
#define DSACRYPTOSERVICEPROVIDER_T4013930519_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DSACryptoServiceProvider
struct  DSACryptoServiceProvider_t4013930519  : public DSA_t661194812
{
public:
	// Mono.Security.Cryptography.KeyPairPersistence System.Security.Cryptography.DSACryptoServiceProvider::store
	KeyPairPersistence_t3200490395 * ___store_2;
	// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::persistKey
	bool ___persistKey_3;
	// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::persisted
	bool ___persisted_4;
	// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::privateKeyExportable
	bool ___privateKeyExportable_5;
	// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::m_disposed
	bool ___m_disposed_6;
	// Mono.Security.Cryptography.DSAManaged System.Security.Cryptography.DSACryptoServiceProvider::dsa
	DSAManaged_t1737000570 * ___dsa_7;

public:
	inline static int32_t get_offset_of_store_2() { return static_cast<int32_t>(offsetof(DSACryptoServiceProvider_t4013930519, ___store_2)); }
	inline KeyPairPersistence_t3200490395 * get_store_2() const { return ___store_2; }
	inline KeyPairPersistence_t3200490395 ** get_address_of_store_2() { return &___store_2; }
	inline void set_store_2(KeyPairPersistence_t3200490395 * value)
	{
		___store_2 = value;
		Il2CppCodeGenWriteBarrier((&___store_2), value);
	}

	inline static int32_t get_offset_of_persistKey_3() { return static_cast<int32_t>(offsetof(DSACryptoServiceProvider_t4013930519, ___persistKey_3)); }
	inline bool get_persistKey_3() const { return ___persistKey_3; }
	inline bool* get_address_of_persistKey_3() { return &___persistKey_3; }
	inline void set_persistKey_3(bool value)
	{
		___persistKey_3 = value;
	}

	inline static int32_t get_offset_of_persisted_4() { return static_cast<int32_t>(offsetof(DSACryptoServiceProvider_t4013930519, ___persisted_4)); }
	inline bool get_persisted_4() const { return ___persisted_4; }
	inline bool* get_address_of_persisted_4() { return &___persisted_4; }
	inline void set_persisted_4(bool value)
	{
		___persisted_4 = value;
	}

	inline static int32_t get_offset_of_privateKeyExportable_5() { return static_cast<int32_t>(offsetof(DSACryptoServiceProvider_t4013930519, ___privateKeyExportable_5)); }
	inline bool get_privateKeyExportable_5() const { return ___privateKeyExportable_5; }
	inline bool* get_address_of_privateKeyExportable_5() { return &___privateKeyExportable_5; }
	inline void set_privateKeyExportable_5(bool value)
	{
		___privateKeyExportable_5 = value;
	}

	inline static int32_t get_offset_of_m_disposed_6() { return static_cast<int32_t>(offsetof(DSACryptoServiceProvider_t4013930519, ___m_disposed_6)); }
	inline bool get_m_disposed_6() const { return ___m_disposed_6; }
	inline bool* get_address_of_m_disposed_6() { return &___m_disposed_6; }
	inline void set_m_disposed_6(bool value)
	{
		___m_disposed_6 = value;
	}

	inline static int32_t get_offset_of_dsa_7() { return static_cast<int32_t>(offsetof(DSACryptoServiceProvider_t4013930519, ___dsa_7)); }
	inline DSAManaged_t1737000570 * get_dsa_7() const { return ___dsa_7; }
	inline DSAManaged_t1737000570 ** get_address_of_dsa_7() { return &___dsa_7; }
	inline void set_dsa_7(DSAManaged_t1737000570 * value)
	{
		___dsa_7 = value;
		Il2CppCodeGenWriteBarrier((&___dsa_7), value);
	}
};

struct DSACryptoServiceProvider_t4013930519_StaticFields
{
public:
	// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::useMachineKeyStore
	bool ___useMachineKeyStore_8;

public:
	inline static int32_t get_offset_of_useMachineKeyStore_8() { return static_cast<int32_t>(offsetof(DSACryptoServiceProvider_t4013930519_StaticFields, ___useMachineKeyStore_8)); }
	inline bool get_useMachineKeyStore_8() const { return ___useMachineKeyStore_8; }
	inline bool* get_address_of_useMachineKeyStore_8() { return &___useMachineKeyStore_8; }
	inline void set_useMachineKeyStore_8(bool value)
	{
		___useMachineKeyStore_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DSACRYPTOSERVICEPROVIDER_T4013930519_H
#ifndef X509KEYSTORAGEFLAGS_T751003861_H
#define X509KEYSTORAGEFLAGS_T751003861_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509KeyStorageFlags
struct  X509KeyStorageFlags_t751003861 
{
public:
	// System.Int32 System.Security.Cryptography.X509Certificates.X509KeyStorageFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(X509KeyStorageFlags_t751003861, ___value___1)); }
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
#endif // X509KEYSTORAGEFLAGS_T751003861_H
#ifndef CIPHERMODE_T1395510172_H
#define CIPHERMODE_T1395510172_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CipherMode
struct  CipherMode_t1395510172 
{
public:
	// System.Int32 System.Security.Cryptography.CipherMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CipherMode_t1395510172, ___value___1)); }
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
#endif // CIPHERMODE_T1395510172_H
#ifndef STREAMINGCONTEXTSTATES_T3925845859_H
#define STREAMINGCONTEXTSTATES_T3925845859_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.StreamingContextStates
struct  StreamingContextStates_t3925845859 
{
public:
	// System.Int32 System.Runtime.Serialization.StreamingContextStates::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StreamingContextStates_t3925845859, ___value___1)); }
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
#endif // STREAMINGCONTEXTSTATES_T3925845859_H
#ifndef CRYPTOGRAPHICEXCEPTION_T1750078668_H
#define CRYPTOGRAPHICEXCEPTION_T1750078668_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CryptographicException
struct  CryptographicException_t1750078668  : public SystemException_t2446273261
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRYPTOGRAPHICEXCEPTION_T1750078668_H
#ifndef MEMBERTYPEMETADATA_T2182683089_H
#define MEMBERTYPEMETADATA_T2182683089_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.MemberTypeMetadata
struct  MemberTypeMetadata_t2182683089  : public ClrTypeMetadata_t3097028511
{
public:
	// System.Reflection.MemberInfo[] System.Runtime.Serialization.Formatters.Binary.MemberTypeMetadata::members
	MemberInfoU5BU5D_t300533605* ___members_3;

public:
	inline static int32_t get_offset_of_members_3() { return static_cast<int32_t>(offsetof(MemberTypeMetadata_t2182683089, ___members_3)); }
	inline MemberInfoU5BU5D_t300533605* get_members_3() const { return ___members_3; }
	inline MemberInfoU5BU5D_t300533605** get_address_of_members_3() { return &___members_3; }
	inline void set_members_3(MemberInfoU5BU5D_t300533605* value)
	{
		___members_3 = value;
		Il2CppCodeGenWriteBarrier((&___members_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERTYPEMETADATA_T2182683089_H
#ifndef CSPPROVIDERFLAGS_T3037299409_H
#define CSPPROVIDERFLAGS_T3037299409_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CspProviderFlags
struct  CspProviderFlags_t3037299409 
{
public:
	// System.Int32 System.Security.Cryptography.CspProviderFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CspProviderFlags_t3037299409, ___value___1)); }
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
#endif // CSPPROVIDERFLAGS_T3037299409_H
#ifndef FROMBASE64TRANSFORMMODE_T2560192302_H
#define FROMBASE64TRANSFORMMODE_T2560192302_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.FromBase64TransformMode
struct  FromBase64TransformMode_t2560192302 
{
public:
	// System.Int32 System.Security.Cryptography.FromBase64TransformMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FromBase64TransformMode_t2560192302, ___value___1)); }
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
#endif // FROMBASE64TRANSFORMMODE_T2560192302_H
#ifndef SERIALIZATIONEXCEPTION_T179146664_H
#define SERIALIZATIONEXCEPTION_T179146664_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.SerializationException
struct  SerializationException_t179146664  : public SystemException_t2446273261
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZATIONEXCEPTION_T179146664_H
#ifndef FORMATTERASSEMBLYSTYLE_T2479039960_H
#define FORMATTERASSEMBLYSTYLE_T2479039960_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.FormatterAssemblyStyle
struct  FormatterAssemblyStyle_t2479039960 
{
public:
	// System.Int32 System.Runtime.Serialization.Formatters.FormatterAssemblyStyle::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FormatterAssemblyStyle_t2479039960, ___value___1)); }
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
#endif // FORMATTERASSEMBLYSTYLE_T2479039960_H
#ifndef FORMATTERTYPESTYLE_T61090199_H
#define FORMATTERTYPESTYLE_T61090199_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.FormatterTypeStyle
struct  FormatterTypeStyle_t61090199 
{
public:
	// System.Int32 System.Runtime.Serialization.Formatters.FormatterTypeStyle::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FormatterTypeStyle_t61090199, ___value___1)); }
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
#endif // FORMATTERTYPESTYLE_T61090199_H
#ifndef OBJECTRECORDSTATUS_T1786832619_H
#define OBJECTRECORDSTATUS_T1786832619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.ObjectRecordStatus
struct  ObjectRecordStatus_t1786832619 
{
public:
	// System.Byte System.Runtime.Serialization.ObjectRecordStatus::value__
	uint8_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ObjectRecordStatus_t1786832619, ___value___1)); }
	inline uint8_t get_value___1() const { return ___value___1; }
	inline uint8_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint8_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTRECORDSTATUS_T1786832619_H
#ifndef TYPEFILTERLEVEL_T1957521541_H
#define TYPEFILTERLEVEL_T1957521541_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.TypeFilterLevel
struct  TypeFilterLevel_t1957521541 
{
public:
	// System.Int32 System.Runtime.Serialization.Formatters.TypeFilterLevel::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TypeFilterLevel_t1957521541, ___value___1)); }
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
#endif // TYPEFILTERLEVEL_T1957521541_H
#ifndef DELEGATE_T378097376_H
#define DELEGATE_T378097376_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t378097376  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t248777969 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t378097376, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t378097376, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t378097376, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t378097376, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t378097376, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t378097376, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t378097376, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t378097376, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t378097376, ___data_8)); }
	inline DelegateData_t248777969 * get_data_8() const { return ___data_8; }
	inline DelegateData_t248777969 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t248777969 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T378097376_H
#ifndef OBJECTRECORD_T1547570597_H
#define OBJECTRECORD_T1547570597_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.ObjectRecord
struct  ObjectRecord_t1547570597  : public RuntimeObject
{
public:
	// System.Runtime.Serialization.ObjectRecordStatus System.Runtime.Serialization.ObjectRecord::Status
	uint8_t ___Status_0;
	// System.Object System.Runtime.Serialization.ObjectRecord::OriginalObject
	RuntimeObject * ___OriginalObject_1;
	// System.Object System.Runtime.Serialization.ObjectRecord::ObjectInstance
	RuntimeObject * ___ObjectInstance_2;
	// System.Int64 System.Runtime.Serialization.ObjectRecord::ObjectID
	int64_t ___ObjectID_3;
	// System.Runtime.Serialization.SerializationInfo System.Runtime.Serialization.ObjectRecord::Info
	SerializationInfo_t722839904 * ___Info_4;
	// System.Int64 System.Runtime.Serialization.ObjectRecord::IdOfContainingObj
	int64_t ___IdOfContainingObj_5;
	// System.Runtime.Serialization.ISerializationSurrogate System.Runtime.Serialization.ObjectRecord::Surrogate
	RuntimeObject* ___Surrogate_6;
	// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.ObjectRecord::SurrogateSelector
	RuntimeObject* ___SurrogateSelector_7;
	// System.Reflection.MemberInfo System.Runtime.Serialization.ObjectRecord::Member
	MemberInfo_t * ___Member_8;
	// System.Int32[] System.Runtime.Serialization.ObjectRecord::ArrayIndex
	Int32U5BU5D_t1664692557* ___ArrayIndex_9;
	// System.Runtime.Serialization.BaseFixupRecord System.Runtime.Serialization.ObjectRecord::FixupChainAsContainer
	BaseFixupRecord_t1056132251 * ___FixupChainAsContainer_10;
	// System.Runtime.Serialization.BaseFixupRecord System.Runtime.Serialization.ObjectRecord::FixupChainAsRequired
	BaseFixupRecord_t1056132251 * ___FixupChainAsRequired_11;
	// System.Runtime.Serialization.ObjectRecord System.Runtime.Serialization.ObjectRecord::Next
	ObjectRecord_t1547570597 * ___Next_12;

public:
	inline static int32_t get_offset_of_Status_0() { return static_cast<int32_t>(offsetof(ObjectRecord_t1547570597, ___Status_0)); }
	inline uint8_t get_Status_0() const { return ___Status_0; }
	inline uint8_t* get_address_of_Status_0() { return &___Status_0; }
	inline void set_Status_0(uint8_t value)
	{
		___Status_0 = value;
	}

	inline static int32_t get_offset_of_OriginalObject_1() { return static_cast<int32_t>(offsetof(ObjectRecord_t1547570597, ___OriginalObject_1)); }
	inline RuntimeObject * get_OriginalObject_1() const { return ___OriginalObject_1; }
	inline RuntimeObject ** get_address_of_OriginalObject_1() { return &___OriginalObject_1; }
	inline void set_OriginalObject_1(RuntimeObject * value)
	{
		___OriginalObject_1 = value;
		Il2CppCodeGenWriteBarrier((&___OriginalObject_1), value);
	}

	inline static int32_t get_offset_of_ObjectInstance_2() { return static_cast<int32_t>(offsetof(ObjectRecord_t1547570597, ___ObjectInstance_2)); }
	inline RuntimeObject * get_ObjectInstance_2() const { return ___ObjectInstance_2; }
	inline RuntimeObject ** get_address_of_ObjectInstance_2() { return &___ObjectInstance_2; }
	inline void set_ObjectInstance_2(RuntimeObject * value)
	{
		___ObjectInstance_2 = value;
		Il2CppCodeGenWriteBarrier((&___ObjectInstance_2), value);
	}

	inline static int32_t get_offset_of_ObjectID_3() { return static_cast<int32_t>(offsetof(ObjectRecord_t1547570597, ___ObjectID_3)); }
	inline int64_t get_ObjectID_3() const { return ___ObjectID_3; }
	inline int64_t* get_address_of_ObjectID_3() { return &___ObjectID_3; }
	inline void set_ObjectID_3(int64_t value)
	{
		___ObjectID_3 = value;
	}

	inline static int32_t get_offset_of_Info_4() { return static_cast<int32_t>(offsetof(ObjectRecord_t1547570597, ___Info_4)); }
	inline SerializationInfo_t722839904 * get_Info_4() const { return ___Info_4; }
	inline SerializationInfo_t722839904 ** get_address_of_Info_4() { return &___Info_4; }
	inline void set_Info_4(SerializationInfo_t722839904 * value)
	{
		___Info_4 = value;
		Il2CppCodeGenWriteBarrier((&___Info_4), value);
	}

	inline static int32_t get_offset_of_IdOfContainingObj_5() { return static_cast<int32_t>(offsetof(ObjectRecord_t1547570597, ___IdOfContainingObj_5)); }
	inline int64_t get_IdOfContainingObj_5() const { return ___IdOfContainingObj_5; }
	inline int64_t* get_address_of_IdOfContainingObj_5() { return &___IdOfContainingObj_5; }
	inline void set_IdOfContainingObj_5(int64_t value)
	{
		___IdOfContainingObj_5 = value;
	}

	inline static int32_t get_offset_of_Surrogate_6() { return static_cast<int32_t>(offsetof(ObjectRecord_t1547570597, ___Surrogate_6)); }
	inline RuntimeObject* get_Surrogate_6() const { return ___Surrogate_6; }
	inline RuntimeObject** get_address_of_Surrogate_6() { return &___Surrogate_6; }
	inline void set_Surrogate_6(RuntimeObject* value)
	{
		___Surrogate_6 = value;
		Il2CppCodeGenWriteBarrier((&___Surrogate_6), value);
	}

	inline static int32_t get_offset_of_SurrogateSelector_7() { return static_cast<int32_t>(offsetof(ObjectRecord_t1547570597, ___SurrogateSelector_7)); }
	inline RuntimeObject* get_SurrogateSelector_7() const { return ___SurrogateSelector_7; }
	inline RuntimeObject** get_address_of_SurrogateSelector_7() { return &___SurrogateSelector_7; }
	inline void set_SurrogateSelector_7(RuntimeObject* value)
	{
		___SurrogateSelector_7 = value;
		Il2CppCodeGenWriteBarrier((&___SurrogateSelector_7), value);
	}

	inline static int32_t get_offset_of_Member_8() { return static_cast<int32_t>(offsetof(ObjectRecord_t1547570597, ___Member_8)); }
	inline MemberInfo_t * get_Member_8() const { return ___Member_8; }
	inline MemberInfo_t ** get_address_of_Member_8() { return &___Member_8; }
	inline void set_Member_8(MemberInfo_t * value)
	{
		___Member_8 = value;
		Il2CppCodeGenWriteBarrier((&___Member_8), value);
	}

	inline static int32_t get_offset_of_ArrayIndex_9() { return static_cast<int32_t>(offsetof(ObjectRecord_t1547570597, ___ArrayIndex_9)); }
	inline Int32U5BU5D_t1664692557* get_ArrayIndex_9() const { return ___ArrayIndex_9; }
	inline Int32U5BU5D_t1664692557** get_address_of_ArrayIndex_9() { return &___ArrayIndex_9; }
	inline void set_ArrayIndex_9(Int32U5BU5D_t1664692557* value)
	{
		___ArrayIndex_9 = value;
		Il2CppCodeGenWriteBarrier((&___ArrayIndex_9), value);
	}

	inline static int32_t get_offset_of_FixupChainAsContainer_10() { return static_cast<int32_t>(offsetof(ObjectRecord_t1547570597, ___FixupChainAsContainer_10)); }
	inline BaseFixupRecord_t1056132251 * get_FixupChainAsContainer_10() const { return ___FixupChainAsContainer_10; }
	inline BaseFixupRecord_t1056132251 ** get_address_of_FixupChainAsContainer_10() { return &___FixupChainAsContainer_10; }
	inline void set_FixupChainAsContainer_10(BaseFixupRecord_t1056132251 * value)
	{
		___FixupChainAsContainer_10 = value;
		Il2CppCodeGenWriteBarrier((&___FixupChainAsContainer_10), value);
	}

	inline static int32_t get_offset_of_FixupChainAsRequired_11() { return static_cast<int32_t>(offsetof(ObjectRecord_t1547570597, ___FixupChainAsRequired_11)); }
	inline BaseFixupRecord_t1056132251 * get_FixupChainAsRequired_11() const { return ___FixupChainAsRequired_11; }
	inline BaseFixupRecord_t1056132251 ** get_address_of_FixupChainAsRequired_11() { return &___FixupChainAsRequired_11; }
	inline void set_FixupChainAsRequired_11(BaseFixupRecord_t1056132251 * value)
	{
		___FixupChainAsRequired_11 = value;
		Il2CppCodeGenWriteBarrier((&___FixupChainAsRequired_11), value);
	}

	inline static int32_t get_offset_of_Next_12() { return static_cast<int32_t>(offsetof(ObjectRecord_t1547570597, ___Next_12)); }
	inline ObjectRecord_t1547570597 * get_Next_12() const { return ___Next_12; }
	inline ObjectRecord_t1547570597 ** get_address_of_Next_12() { return &___Next_12; }
	inline void set_Next_12(ObjectRecord_t1547570597 * value)
	{
		___Next_12 = value;
		Il2CppCodeGenWriteBarrier((&___Next_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTRECORD_T1547570597_H
#ifndef STREAMINGCONTEXT_T3507466487_H
#define STREAMINGCONTEXT_T3507466487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.StreamingContext
struct  StreamingContext_t3507466487 
{
public:
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::state
	int32_t ___state_0;
	// System.Object System.Runtime.Serialization.StreamingContext::additional
	RuntimeObject * ___additional_1;

public:
	inline static int32_t get_offset_of_state_0() { return static_cast<int32_t>(offsetof(StreamingContext_t3507466487, ___state_0)); }
	inline int32_t get_state_0() const { return ___state_0; }
	inline int32_t* get_address_of_state_0() { return &___state_0; }
	inline void set_state_0(int32_t value)
	{
		___state_0 = value;
	}

	inline static int32_t get_offset_of_additional_1() { return static_cast<int32_t>(offsetof(StreamingContext_t3507466487, ___additional_1)); }
	inline RuntimeObject * get_additional_1() const { return ___additional_1; }
	inline RuntimeObject ** get_address_of_additional_1() { return &___additional_1; }
	inline void set_additional_1(RuntimeObject * value)
	{
		___additional_1 = value;
		Il2CppCodeGenWriteBarrier((&___additional_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t3507466487_marshaled_pinvoke
{
	int32_t ___state_0;
	Il2CppIUnknown* ___additional_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t3507466487_marshaled_com
{
	int32_t ___state_0;
	Il2CppIUnknown* ___additional_1;
};
#endif // STREAMINGCONTEXT_T3507466487_H
#ifndef SYMMETRICALGORITHM_T3610262089_H
#define SYMMETRICALGORITHM_T3610262089_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SymmetricAlgorithm
struct  SymmetricAlgorithm_t3610262089  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::BlockSizeValue
	int32_t ___BlockSizeValue_0;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::IVValue
	ByteU5BU5D_t965135465* ___IVValue_1;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::KeySizeValue
	int32_t ___KeySizeValue_2;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::KeyValue
	ByteU5BU5D_t965135465* ___KeyValue_3;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalBlockSizesValue
	KeySizesU5BU5D_t1827242508* ___LegalBlockSizesValue_4;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalKeySizesValue
	KeySizesU5BU5D_t1827242508* ___LegalKeySizesValue_5;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::FeedbackSizeValue
	int32_t ___FeedbackSizeValue_6;
	// System.Security.Cryptography.CipherMode System.Security.Cryptography.SymmetricAlgorithm::ModeValue
	int32_t ___ModeValue_7;
	// System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::PaddingValue
	int32_t ___PaddingValue_8;
	// System.Boolean System.Security.Cryptography.SymmetricAlgorithm::m_disposed
	bool ___m_disposed_9;

public:
	inline static int32_t get_offset_of_BlockSizeValue_0() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t3610262089, ___BlockSizeValue_0)); }
	inline int32_t get_BlockSizeValue_0() const { return ___BlockSizeValue_0; }
	inline int32_t* get_address_of_BlockSizeValue_0() { return &___BlockSizeValue_0; }
	inline void set_BlockSizeValue_0(int32_t value)
	{
		___BlockSizeValue_0 = value;
	}

	inline static int32_t get_offset_of_IVValue_1() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t3610262089, ___IVValue_1)); }
	inline ByteU5BU5D_t965135465* get_IVValue_1() const { return ___IVValue_1; }
	inline ByteU5BU5D_t965135465** get_address_of_IVValue_1() { return &___IVValue_1; }
	inline void set_IVValue_1(ByteU5BU5D_t965135465* value)
	{
		___IVValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___IVValue_1), value);
	}

	inline static int32_t get_offset_of_KeySizeValue_2() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t3610262089, ___KeySizeValue_2)); }
	inline int32_t get_KeySizeValue_2() const { return ___KeySizeValue_2; }
	inline int32_t* get_address_of_KeySizeValue_2() { return &___KeySizeValue_2; }
	inline void set_KeySizeValue_2(int32_t value)
	{
		___KeySizeValue_2 = value;
	}

	inline static int32_t get_offset_of_KeyValue_3() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t3610262089, ___KeyValue_3)); }
	inline ByteU5BU5D_t965135465* get_KeyValue_3() const { return ___KeyValue_3; }
	inline ByteU5BU5D_t965135465** get_address_of_KeyValue_3() { return &___KeyValue_3; }
	inline void set_KeyValue_3(ByteU5BU5D_t965135465* value)
	{
		___KeyValue_3 = value;
		Il2CppCodeGenWriteBarrier((&___KeyValue_3), value);
	}

	inline static int32_t get_offset_of_LegalBlockSizesValue_4() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t3610262089, ___LegalBlockSizesValue_4)); }
	inline KeySizesU5BU5D_t1827242508* get_LegalBlockSizesValue_4() const { return ___LegalBlockSizesValue_4; }
	inline KeySizesU5BU5D_t1827242508** get_address_of_LegalBlockSizesValue_4() { return &___LegalBlockSizesValue_4; }
	inline void set_LegalBlockSizesValue_4(KeySizesU5BU5D_t1827242508* value)
	{
		___LegalBlockSizesValue_4 = value;
		Il2CppCodeGenWriteBarrier((&___LegalBlockSizesValue_4), value);
	}

	inline static int32_t get_offset_of_LegalKeySizesValue_5() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t3610262089, ___LegalKeySizesValue_5)); }
	inline KeySizesU5BU5D_t1827242508* get_LegalKeySizesValue_5() const { return ___LegalKeySizesValue_5; }
	inline KeySizesU5BU5D_t1827242508** get_address_of_LegalKeySizesValue_5() { return &___LegalKeySizesValue_5; }
	inline void set_LegalKeySizesValue_5(KeySizesU5BU5D_t1827242508* value)
	{
		___LegalKeySizesValue_5 = value;
		Il2CppCodeGenWriteBarrier((&___LegalKeySizesValue_5), value);
	}

	inline static int32_t get_offset_of_FeedbackSizeValue_6() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t3610262089, ___FeedbackSizeValue_6)); }
	inline int32_t get_FeedbackSizeValue_6() const { return ___FeedbackSizeValue_6; }
	inline int32_t* get_address_of_FeedbackSizeValue_6() { return &___FeedbackSizeValue_6; }
	inline void set_FeedbackSizeValue_6(int32_t value)
	{
		___FeedbackSizeValue_6 = value;
	}

	inline static int32_t get_offset_of_ModeValue_7() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t3610262089, ___ModeValue_7)); }
	inline int32_t get_ModeValue_7() const { return ___ModeValue_7; }
	inline int32_t* get_address_of_ModeValue_7() { return &___ModeValue_7; }
	inline void set_ModeValue_7(int32_t value)
	{
		___ModeValue_7 = value;
	}

	inline static int32_t get_offset_of_PaddingValue_8() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t3610262089, ___PaddingValue_8)); }
	inline int32_t get_PaddingValue_8() const { return ___PaddingValue_8; }
	inline int32_t* get_address_of_PaddingValue_8() { return &___PaddingValue_8; }
	inline void set_PaddingValue_8(int32_t value)
	{
		___PaddingValue_8 = value;
	}

	inline static int32_t get_offset_of_m_disposed_9() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t3610262089, ___m_disposed_9)); }
	inline bool get_m_disposed_9() const { return ___m_disposed_9; }
	inline bool* get_address_of_m_disposed_9() { return &___m_disposed_9; }
	inline void set_m_disposed_9(bool value)
	{
		___m_disposed_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYMMETRICALGORITHM_T3610262089_H
#ifndef MULTICASTDELEGATE_T2906758302_H
#define MULTICASTDELEGATE_T2906758302_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t2906758302  : public Delegate_t378097376
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t2906758302 * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t2906758302 * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t2906758302, ___prev_9)); }
	inline MulticastDelegate_t2906758302 * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t2906758302 ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t2906758302 * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t2906758302, ___kpm_next_10)); }
	inline MulticastDelegate_t2906758302 * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t2906758302 ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t2906758302 * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T2906758302_H
#ifndef FROMBASE64TRANSFORM_T3516114175_H
#define FROMBASE64TRANSFORM_T3516114175_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.FromBase64Transform
struct  FromBase64Transform_t3516114175  : public RuntimeObject
{
public:
	// System.Security.Cryptography.FromBase64TransformMode System.Security.Cryptography.FromBase64Transform::mode
	int32_t ___mode_0;
	// System.Byte[] System.Security.Cryptography.FromBase64Transform::accumulator
	ByteU5BU5D_t965135465* ___accumulator_1;
	// System.Int32 System.Security.Cryptography.FromBase64Transform::accPtr
	int32_t ___accPtr_2;
	// System.Boolean System.Security.Cryptography.FromBase64Transform::m_disposed
	bool ___m_disposed_3;
	// System.Byte[] System.Security.Cryptography.FromBase64Transform::lookupTable
	ByteU5BU5D_t965135465* ___lookupTable_4;

public:
	inline static int32_t get_offset_of_mode_0() { return static_cast<int32_t>(offsetof(FromBase64Transform_t3516114175, ___mode_0)); }
	inline int32_t get_mode_0() const { return ___mode_0; }
	inline int32_t* get_address_of_mode_0() { return &___mode_0; }
	inline void set_mode_0(int32_t value)
	{
		___mode_0 = value;
	}

	inline static int32_t get_offset_of_accumulator_1() { return static_cast<int32_t>(offsetof(FromBase64Transform_t3516114175, ___accumulator_1)); }
	inline ByteU5BU5D_t965135465* get_accumulator_1() const { return ___accumulator_1; }
	inline ByteU5BU5D_t965135465** get_address_of_accumulator_1() { return &___accumulator_1; }
	inline void set_accumulator_1(ByteU5BU5D_t965135465* value)
	{
		___accumulator_1 = value;
		Il2CppCodeGenWriteBarrier((&___accumulator_1), value);
	}

	inline static int32_t get_offset_of_accPtr_2() { return static_cast<int32_t>(offsetof(FromBase64Transform_t3516114175, ___accPtr_2)); }
	inline int32_t get_accPtr_2() const { return ___accPtr_2; }
	inline int32_t* get_address_of_accPtr_2() { return &___accPtr_2; }
	inline void set_accPtr_2(int32_t value)
	{
		___accPtr_2 = value;
	}

	inline static int32_t get_offset_of_m_disposed_3() { return static_cast<int32_t>(offsetof(FromBase64Transform_t3516114175, ___m_disposed_3)); }
	inline bool get_m_disposed_3() const { return ___m_disposed_3; }
	inline bool* get_address_of_m_disposed_3() { return &___m_disposed_3; }
	inline void set_m_disposed_3(bool value)
	{
		___m_disposed_3 = value;
	}

	inline static int32_t get_offset_of_lookupTable_4() { return static_cast<int32_t>(offsetof(FromBase64Transform_t3516114175, ___lookupTable_4)); }
	inline ByteU5BU5D_t965135465* get_lookupTable_4() const { return ___lookupTable_4; }
	inline ByteU5BU5D_t965135465** get_address_of_lookupTable_4() { return &___lookupTable_4; }
	inline void set_lookupTable_4(ByteU5BU5D_t965135465* value)
	{
		___lookupTable_4 = value;
		Il2CppCodeGenWriteBarrier((&___lookupTable_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FROMBASE64TRANSFORM_T3516114175_H
#ifndef HMACSHA512_T2645299907_H
#define HMACSHA512_T2645299907_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HMACSHA512
struct  HMACSHA512_t2645299907  : public HMAC_t2695143592
{
public:
	// System.Boolean System.Security.Cryptography.HMACSHA512::legacy
	bool ___legacy_11;

public:
	inline static int32_t get_offset_of_legacy_11() { return static_cast<int32_t>(offsetof(HMACSHA512_t2645299907, ___legacy_11)); }
	inline bool get_legacy_11() const { return ___legacy_11; }
	inline bool* get_address_of_legacy_11() { return &___legacy_11; }
	inline void set_legacy_11(bool value)
	{
		___legacy_11 = value;
	}
};

struct HMACSHA512_t2645299907_StaticFields
{
public:
	// System.Boolean System.Security.Cryptography.HMACSHA512::legacy_mode
	bool ___legacy_mode_10;

public:
	inline static int32_t get_offset_of_legacy_mode_10() { return static_cast<int32_t>(offsetof(HMACSHA512_t2645299907_StaticFields, ___legacy_mode_10)); }
	inline bool get_legacy_mode_10() const { return ___legacy_mode_10; }
	inline bool* get_address_of_legacy_mode_10() { return &___legacy_mode_10; }
	inline void set_legacy_mode_10(bool value)
	{
		___legacy_mode_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HMACSHA512_T2645299907_H
#ifndef HMACMD5_T1412347803_H
#define HMACMD5_T1412347803_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HMACMD5
struct  HMACMD5_t1412347803  : public HMAC_t2695143592
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HMACMD5_T1412347803_H
#ifndef HMACRIPEMD160_T2035582163_H
#define HMACRIPEMD160_T2035582163_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HMACRIPEMD160
struct  HMACRIPEMD160_t2035582163  : public HMAC_t2695143592
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HMACRIPEMD160_T2035582163_H
#ifndef HMACSHA1_T653600648_H
#define HMACSHA1_T653600648_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HMACSHA1
struct  HMACSHA1_t653600648  : public HMAC_t2695143592
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HMACSHA1_T653600648_H
#ifndef HMACSHA256_T2260734254_H
#define HMACSHA256_T2260734254_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HMACSHA256
struct  HMACSHA256_t2260734254  : public HMAC_t2695143592
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HMACSHA256_T2260734254_H
#ifndef HMACSHA384_T370576120_H
#define HMACSHA384_T370576120_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HMACSHA384
struct  HMACSHA384_t370576120  : public HMAC_t2695143592
{
public:
	// System.Boolean System.Security.Cryptography.HMACSHA384::legacy
	bool ___legacy_11;

public:
	inline static int32_t get_offset_of_legacy_11() { return static_cast<int32_t>(offsetof(HMACSHA384_t370576120, ___legacy_11)); }
	inline bool get_legacy_11() const { return ___legacy_11; }
	inline bool* get_address_of_legacy_11() { return &___legacy_11; }
	inline void set_legacy_11(bool value)
	{
		___legacy_11 = value;
	}
};

struct HMACSHA384_t370576120_StaticFields
{
public:
	// System.Boolean System.Security.Cryptography.HMACSHA384::legacy_mode
	bool ___legacy_mode_10;

public:
	inline static int32_t get_offset_of_legacy_mode_10() { return static_cast<int32_t>(offsetof(HMACSHA384_t370576120_StaticFields, ___legacy_mode_10)); }
	inline bool get_legacy_mode_10() const { return ___legacy_mode_10; }
	inline bool* get_address_of_legacy_mode_10() { return &___legacy_mode_10; }
	inline void set_legacy_mode_10(bool value)
	{
		___legacy_mode_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HMACSHA384_T370576120_H
#ifndef WELLKNOWNSERVICETYPEENTRY_T780778922_H
#define WELLKNOWNSERVICETYPEENTRY_T780778922_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.WellKnownServiceTypeEntry
struct  WellKnownServiceTypeEntry_t780778922  : public TypeEntry_t996228013
{
public:
	// System.Type System.Runtime.Remoting.WellKnownServiceTypeEntry::obj_type
	Type_t * ___obj_type_2;
	// System.String System.Runtime.Remoting.WellKnownServiceTypeEntry::obj_uri
	String_t* ___obj_uri_3;
	// System.Runtime.Remoting.WellKnownObjectMode System.Runtime.Remoting.WellKnownServiceTypeEntry::obj_mode
	int32_t ___obj_mode_4;

public:
	inline static int32_t get_offset_of_obj_type_2() { return static_cast<int32_t>(offsetof(WellKnownServiceTypeEntry_t780778922, ___obj_type_2)); }
	inline Type_t * get_obj_type_2() const { return ___obj_type_2; }
	inline Type_t ** get_address_of_obj_type_2() { return &___obj_type_2; }
	inline void set_obj_type_2(Type_t * value)
	{
		___obj_type_2 = value;
		Il2CppCodeGenWriteBarrier((&___obj_type_2), value);
	}

	inline static int32_t get_offset_of_obj_uri_3() { return static_cast<int32_t>(offsetof(WellKnownServiceTypeEntry_t780778922, ___obj_uri_3)); }
	inline String_t* get_obj_uri_3() const { return ___obj_uri_3; }
	inline String_t** get_address_of_obj_uri_3() { return &___obj_uri_3; }
	inline void set_obj_uri_3(String_t* value)
	{
		___obj_uri_3 = value;
		Il2CppCodeGenWriteBarrier((&___obj_uri_3), value);
	}

	inline static int32_t get_offset_of_obj_mode_4() { return static_cast<int32_t>(offsetof(WellKnownServiceTypeEntry_t780778922, ___obj_mode_4)); }
	inline int32_t get_obj_mode_4() const { return ___obj_mode_4; }
	inline int32_t* get_address_of_obj_mode_4() { return &___obj_mode_4; }
	inline void set_obj_mode_4(int32_t value)
	{
		___obj_mode_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WELLKNOWNSERVICETYPEENTRY_T780778922_H
#ifndef CSPPARAMETERS_T1095570833_H
#define CSPPARAMETERS_T1095570833_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CspParameters
struct  CspParameters_t1095570833  : public RuntimeObject
{
public:
	// System.Security.Cryptography.CspProviderFlags System.Security.Cryptography.CspParameters::_Flags
	int32_t ____Flags_0;
	// System.String System.Security.Cryptography.CspParameters::KeyContainerName
	String_t* ___KeyContainerName_1;
	// System.Int32 System.Security.Cryptography.CspParameters::KeyNumber
	int32_t ___KeyNumber_2;
	// System.String System.Security.Cryptography.CspParameters::ProviderName
	String_t* ___ProviderName_3;
	// System.Int32 System.Security.Cryptography.CspParameters::ProviderType
	int32_t ___ProviderType_4;

public:
	inline static int32_t get_offset_of__Flags_0() { return static_cast<int32_t>(offsetof(CspParameters_t1095570833, ____Flags_0)); }
	inline int32_t get__Flags_0() const { return ____Flags_0; }
	inline int32_t* get_address_of__Flags_0() { return &____Flags_0; }
	inline void set__Flags_0(int32_t value)
	{
		____Flags_0 = value;
	}

	inline static int32_t get_offset_of_KeyContainerName_1() { return static_cast<int32_t>(offsetof(CspParameters_t1095570833, ___KeyContainerName_1)); }
	inline String_t* get_KeyContainerName_1() const { return ___KeyContainerName_1; }
	inline String_t** get_address_of_KeyContainerName_1() { return &___KeyContainerName_1; }
	inline void set_KeyContainerName_1(String_t* value)
	{
		___KeyContainerName_1 = value;
		Il2CppCodeGenWriteBarrier((&___KeyContainerName_1), value);
	}

	inline static int32_t get_offset_of_KeyNumber_2() { return static_cast<int32_t>(offsetof(CspParameters_t1095570833, ___KeyNumber_2)); }
	inline int32_t get_KeyNumber_2() const { return ___KeyNumber_2; }
	inline int32_t* get_address_of_KeyNumber_2() { return &___KeyNumber_2; }
	inline void set_KeyNumber_2(int32_t value)
	{
		___KeyNumber_2 = value;
	}

	inline static int32_t get_offset_of_ProviderName_3() { return static_cast<int32_t>(offsetof(CspParameters_t1095570833, ___ProviderName_3)); }
	inline String_t* get_ProviderName_3() const { return ___ProviderName_3; }
	inline String_t** get_address_of_ProviderName_3() { return &___ProviderName_3; }
	inline void set_ProviderName_3(String_t* value)
	{
		___ProviderName_3 = value;
		Il2CppCodeGenWriteBarrier((&___ProviderName_3), value);
	}

	inline static int32_t get_offset_of_ProviderType_4() { return static_cast<int32_t>(offsetof(CspParameters_t1095570833, ___ProviderType_4)); }
	inline int32_t get_ProviderType_4() const { return ___ProviderType_4; }
	inline int32_t* get_address_of_ProviderType_4() { return &___ProviderType_4; }
	inline void set_ProviderType_4(int32_t value)
	{
		___ProviderType_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CSPPARAMETERS_T1095570833_H
#ifndef CRYPTOGRAPHICUNEXPECTEDOPERATIONEXCEPTION_T2684701783_H
#define CRYPTOGRAPHICUNEXPECTEDOPERATIONEXCEPTION_T2684701783_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CryptographicUnexpectedOperationException
struct  CryptographicUnexpectedOperationException_t2684701783  : public CryptographicException_t1750078668
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRYPTOGRAPHICUNEXPECTEDOPERATIONEXCEPTION_T2684701783_H
#ifndef DES_T940759676_H
#define DES_T940759676_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DES
struct  DES_t940759676  : public SymmetricAlgorithm_t3610262089
{
public:

public:
};

struct DES_t940759676_StaticFields
{
public:
	// System.Byte[,] System.Security.Cryptography.DES::weakKeys
	ByteU5BU2CU5D_t965135466* ___weakKeys_10;
	// System.Byte[,] System.Security.Cryptography.DES::semiWeakKeys
	ByteU5BU2CU5D_t965135466* ___semiWeakKeys_11;

public:
	inline static int32_t get_offset_of_weakKeys_10() { return static_cast<int32_t>(offsetof(DES_t940759676_StaticFields, ___weakKeys_10)); }
	inline ByteU5BU2CU5D_t965135466* get_weakKeys_10() const { return ___weakKeys_10; }
	inline ByteU5BU2CU5D_t965135466** get_address_of_weakKeys_10() { return &___weakKeys_10; }
	inline void set_weakKeys_10(ByteU5BU2CU5D_t965135466* value)
	{
		___weakKeys_10 = value;
		Il2CppCodeGenWriteBarrier((&___weakKeys_10), value);
	}

	inline static int32_t get_offset_of_semiWeakKeys_11() { return static_cast<int32_t>(offsetof(DES_t940759676_StaticFields, ___semiWeakKeys_11)); }
	inline ByteU5BU2CU5D_t965135466* get_semiWeakKeys_11() const { return ___semiWeakKeys_11; }
	inline ByteU5BU2CU5D_t965135466** get_address_of_semiWeakKeys_11() { return &___semiWeakKeys_11; }
	inline void set_semiWeakKeys_11(ByteU5BU2CU5D_t965135466* value)
	{
		___semiWeakKeys_11 = value;
		Il2CppCodeGenWriteBarrier((&___semiWeakKeys_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DES_T940759676_H
#ifndef CALLBACKHANDLER_T3589417362_H
#define CALLBACKHANDLER_T3589417362_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.SerializationCallbacks/CallbackHandler
struct  CallbackHandler_t3589417362  : public MulticastDelegate_t2906758302
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CALLBACKHANDLER_T3589417362_H
#ifndef SERIALIZATIONOBJECTMANAGER_T3966029636_H
#define SERIALIZATIONOBJECTMANAGER_T3966029636_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.SerializationObjectManager
struct  SerializationObjectManager_t3966029636  : public RuntimeObject
{
public:
	// System.Runtime.Serialization.StreamingContext System.Runtime.Serialization.SerializationObjectManager::context
	StreamingContext_t3507466487  ___context_0;
	// System.Collections.Hashtable System.Runtime.Serialization.SerializationObjectManager::seen
	Hashtable_t916193709 * ___seen_1;
	// System.Runtime.Serialization.SerializationCallbacks/CallbackHandler System.Runtime.Serialization.SerializationObjectManager::callbacks
	CallbackHandler_t3589417362 * ___callbacks_2;

public:
	inline static int32_t get_offset_of_context_0() { return static_cast<int32_t>(offsetof(SerializationObjectManager_t3966029636, ___context_0)); }
	inline StreamingContext_t3507466487  get_context_0() const { return ___context_0; }
	inline StreamingContext_t3507466487 * get_address_of_context_0() { return &___context_0; }
	inline void set_context_0(StreamingContext_t3507466487  value)
	{
		___context_0 = value;
	}

	inline static int32_t get_offset_of_seen_1() { return static_cast<int32_t>(offsetof(SerializationObjectManager_t3966029636, ___seen_1)); }
	inline Hashtable_t916193709 * get_seen_1() const { return ___seen_1; }
	inline Hashtable_t916193709 ** get_address_of_seen_1() { return &___seen_1; }
	inline void set_seen_1(Hashtable_t916193709 * value)
	{
		___seen_1 = value;
		Il2CppCodeGenWriteBarrier((&___seen_1), value);
	}

	inline static int32_t get_offset_of_callbacks_2() { return static_cast<int32_t>(offsetof(SerializationObjectManager_t3966029636, ___callbacks_2)); }
	inline CallbackHandler_t3589417362 * get_callbacks_2() const { return ___callbacks_2; }
	inline CallbackHandler_t3589417362 ** get_address_of_callbacks_2() { return &___callbacks_2; }
	inline void set_callbacks_2(CallbackHandler_t3589417362 * value)
	{
		___callbacks_2 = value;
		Il2CppCodeGenWriteBarrier((&___callbacks_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZATIONOBJECTMANAGER_T3966029636_H
#ifndef BINARYFORMATTER_T4190503671_H
#define BINARYFORMATTER_T4190503671_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
struct  BinaryFormatter_t4190503671  : public RuntimeObject
{
public:
	// System.Runtime.Serialization.Formatters.FormatterAssemblyStyle System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::assembly_format
	int32_t ___assembly_format_0;
	// System.Runtime.Serialization.SerializationBinder System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::binder
	SerializationBinder_t3796606365 * ___binder_1;
	// System.Runtime.Serialization.StreamingContext System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::context
	StreamingContext_t3507466487  ___context_2;
	// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::surrogate_selector
	RuntimeObject* ___surrogate_selector_3;
	// System.Runtime.Serialization.Formatters.FormatterTypeStyle System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::type_format
	int32_t ___type_format_4;
	// System.Runtime.Serialization.Formatters.TypeFilterLevel System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::filter_level
	int32_t ___filter_level_5;

public:
	inline static int32_t get_offset_of_assembly_format_0() { return static_cast<int32_t>(offsetof(BinaryFormatter_t4190503671, ___assembly_format_0)); }
	inline int32_t get_assembly_format_0() const { return ___assembly_format_0; }
	inline int32_t* get_address_of_assembly_format_0() { return &___assembly_format_0; }
	inline void set_assembly_format_0(int32_t value)
	{
		___assembly_format_0 = value;
	}

	inline static int32_t get_offset_of_binder_1() { return static_cast<int32_t>(offsetof(BinaryFormatter_t4190503671, ___binder_1)); }
	inline SerializationBinder_t3796606365 * get_binder_1() const { return ___binder_1; }
	inline SerializationBinder_t3796606365 ** get_address_of_binder_1() { return &___binder_1; }
	inline void set_binder_1(SerializationBinder_t3796606365 * value)
	{
		___binder_1 = value;
		Il2CppCodeGenWriteBarrier((&___binder_1), value);
	}

	inline static int32_t get_offset_of_context_2() { return static_cast<int32_t>(offsetof(BinaryFormatter_t4190503671, ___context_2)); }
	inline StreamingContext_t3507466487  get_context_2() const { return ___context_2; }
	inline StreamingContext_t3507466487 * get_address_of_context_2() { return &___context_2; }
	inline void set_context_2(StreamingContext_t3507466487  value)
	{
		___context_2 = value;
	}

	inline static int32_t get_offset_of_surrogate_selector_3() { return static_cast<int32_t>(offsetof(BinaryFormatter_t4190503671, ___surrogate_selector_3)); }
	inline RuntimeObject* get_surrogate_selector_3() const { return ___surrogate_selector_3; }
	inline RuntimeObject** get_address_of_surrogate_selector_3() { return &___surrogate_selector_3; }
	inline void set_surrogate_selector_3(RuntimeObject* value)
	{
		___surrogate_selector_3 = value;
		Il2CppCodeGenWriteBarrier((&___surrogate_selector_3), value);
	}

	inline static int32_t get_offset_of_type_format_4() { return static_cast<int32_t>(offsetof(BinaryFormatter_t4190503671, ___type_format_4)); }
	inline int32_t get_type_format_4() const { return ___type_format_4; }
	inline int32_t* get_address_of_type_format_4() { return &___type_format_4; }
	inline void set_type_format_4(int32_t value)
	{
		___type_format_4 = value;
	}

	inline static int32_t get_offset_of_filter_level_5() { return static_cast<int32_t>(offsetof(BinaryFormatter_t4190503671, ___filter_level_5)); }
	inline int32_t get_filter_level_5() const { return ___filter_level_5; }
	inline int32_t* get_address_of_filter_level_5() { return &___filter_level_5; }
	inline void set_filter_level_5(int32_t value)
	{
		___filter_level_5 = value;
	}
};

struct BinaryFormatter_t4190503671_StaticFields
{
public:
	// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::<DefaultSurrogateSelector>k__BackingField
	RuntimeObject* ___U3CDefaultSurrogateSelectorU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CDefaultSurrogateSelectorU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(BinaryFormatter_t4190503671_StaticFields, ___U3CDefaultSurrogateSelectorU3Ek__BackingField_6)); }
	inline RuntimeObject* get_U3CDefaultSurrogateSelectorU3Ek__BackingField_6() const { return ___U3CDefaultSurrogateSelectorU3Ek__BackingField_6; }
	inline RuntimeObject** get_address_of_U3CDefaultSurrogateSelectorU3Ek__BackingField_6() { return &___U3CDefaultSurrogateSelectorU3Ek__BackingField_6; }
	inline void set_U3CDefaultSurrogateSelectorU3Ek__BackingField_6(RuntimeObject* value)
	{
		___U3CDefaultSurrogateSelectorU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CDefaultSurrogateSelectorU3Ek__BackingField_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINARYFORMATTER_T4190503671_H
#ifndef OBJECTREADER_T1813459519_H
#define OBJECTREADER_T1813459519_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.ObjectReader
struct  ObjectReader_t1813459519  : public RuntimeObject
{
public:
	// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.Formatters.Binary.ObjectReader::_surrogateSelector
	RuntimeObject* ____surrogateSelector_0;
	// System.Runtime.Serialization.StreamingContext System.Runtime.Serialization.Formatters.Binary.ObjectReader::_context
	StreamingContext_t3507466487  ____context_1;
	// System.Runtime.Serialization.SerializationBinder System.Runtime.Serialization.Formatters.Binary.ObjectReader::_binder
	SerializationBinder_t3796606365 * ____binder_2;
	// System.Runtime.Serialization.Formatters.TypeFilterLevel System.Runtime.Serialization.Formatters.Binary.ObjectReader::_filterLevel
	int32_t ____filterLevel_3;
	// System.Runtime.Serialization.ObjectManager System.Runtime.Serialization.Formatters.Binary.ObjectReader::_manager
	ObjectManager_t1152673527 * ____manager_4;
	// System.Collections.Hashtable System.Runtime.Serialization.Formatters.Binary.ObjectReader::_registeredAssemblies
	Hashtable_t916193709 * ____registeredAssemblies_5;
	// System.Collections.Hashtable System.Runtime.Serialization.Formatters.Binary.ObjectReader::_typeMetadataCache
	Hashtable_t916193709 * ____typeMetadataCache_6;
	// System.Object System.Runtime.Serialization.Formatters.Binary.ObjectReader::_lastObject
	RuntimeObject * ____lastObject_7;
	// System.Int64 System.Runtime.Serialization.Formatters.Binary.ObjectReader::_lastObjectID
	int64_t ____lastObjectID_8;
	// System.Int64 System.Runtime.Serialization.Formatters.Binary.ObjectReader::_rootObjectID
	int64_t ____rootObjectID_9;
	// System.Byte[] System.Runtime.Serialization.Formatters.Binary.ObjectReader::arrayBuffer
	ByteU5BU5D_t965135465* ___arrayBuffer_10;
	// System.Int32 System.Runtime.Serialization.Formatters.Binary.ObjectReader::ArrayBufferLength
	int32_t ___ArrayBufferLength_11;

public:
	inline static int32_t get_offset_of__surrogateSelector_0() { return static_cast<int32_t>(offsetof(ObjectReader_t1813459519, ____surrogateSelector_0)); }
	inline RuntimeObject* get__surrogateSelector_0() const { return ____surrogateSelector_0; }
	inline RuntimeObject** get_address_of__surrogateSelector_0() { return &____surrogateSelector_0; }
	inline void set__surrogateSelector_0(RuntimeObject* value)
	{
		____surrogateSelector_0 = value;
		Il2CppCodeGenWriteBarrier((&____surrogateSelector_0), value);
	}

	inline static int32_t get_offset_of__context_1() { return static_cast<int32_t>(offsetof(ObjectReader_t1813459519, ____context_1)); }
	inline StreamingContext_t3507466487  get__context_1() const { return ____context_1; }
	inline StreamingContext_t3507466487 * get_address_of__context_1() { return &____context_1; }
	inline void set__context_1(StreamingContext_t3507466487  value)
	{
		____context_1 = value;
	}

	inline static int32_t get_offset_of__binder_2() { return static_cast<int32_t>(offsetof(ObjectReader_t1813459519, ____binder_2)); }
	inline SerializationBinder_t3796606365 * get__binder_2() const { return ____binder_2; }
	inline SerializationBinder_t3796606365 ** get_address_of__binder_2() { return &____binder_2; }
	inline void set__binder_2(SerializationBinder_t3796606365 * value)
	{
		____binder_2 = value;
		Il2CppCodeGenWriteBarrier((&____binder_2), value);
	}

	inline static int32_t get_offset_of__filterLevel_3() { return static_cast<int32_t>(offsetof(ObjectReader_t1813459519, ____filterLevel_3)); }
	inline int32_t get__filterLevel_3() const { return ____filterLevel_3; }
	inline int32_t* get_address_of__filterLevel_3() { return &____filterLevel_3; }
	inline void set__filterLevel_3(int32_t value)
	{
		____filterLevel_3 = value;
	}

	inline static int32_t get_offset_of__manager_4() { return static_cast<int32_t>(offsetof(ObjectReader_t1813459519, ____manager_4)); }
	inline ObjectManager_t1152673527 * get__manager_4() const { return ____manager_4; }
	inline ObjectManager_t1152673527 ** get_address_of__manager_4() { return &____manager_4; }
	inline void set__manager_4(ObjectManager_t1152673527 * value)
	{
		____manager_4 = value;
		Il2CppCodeGenWriteBarrier((&____manager_4), value);
	}

	inline static int32_t get_offset_of__registeredAssemblies_5() { return static_cast<int32_t>(offsetof(ObjectReader_t1813459519, ____registeredAssemblies_5)); }
	inline Hashtable_t916193709 * get__registeredAssemblies_5() const { return ____registeredAssemblies_5; }
	inline Hashtable_t916193709 ** get_address_of__registeredAssemblies_5() { return &____registeredAssemblies_5; }
	inline void set__registeredAssemblies_5(Hashtable_t916193709 * value)
	{
		____registeredAssemblies_5 = value;
		Il2CppCodeGenWriteBarrier((&____registeredAssemblies_5), value);
	}

	inline static int32_t get_offset_of__typeMetadataCache_6() { return static_cast<int32_t>(offsetof(ObjectReader_t1813459519, ____typeMetadataCache_6)); }
	inline Hashtable_t916193709 * get__typeMetadataCache_6() const { return ____typeMetadataCache_6; }
	inline Hashtable_t916193709 ** get_address_of__typeMetadataCache_6() { return &____typeMetadataCache_6; }
	inline void set__typeMetadataCache_6(Hashtable_t916193709 * value)
	{
		____typeMetadataCache_6 = value;
		Il2CppCodeGenWriteBarrier((&____typeMetadataCache_6), value);
	}

	inline static int32_t get_offset_of__lastObject_7() { return static_cast<int32_t>(offsetof(ObjectReader_t1813459519, ____lastObject_7)); }
	inline RuntimeObject * get__lastObject_7() const { return ____lastObject_7; }
	inline RuntimeObject ** get_address_of__lastObject_7() { return &____lastObject_7; }
	inline void set__lastObject_7(RuntimeObject * value)
	{
		____lastObject_7 = value;
		Il2CppCodeGenWriteBarrier((&____lastObject_7), value);
	}

	inline static int32_t get_offset_of__lastObjectID_8() { return static_cast<int32_t>(offsetof(ObjectReader_t1813459519, ____lastObjectID_8)); }
	inline int64_t get__lastObjectID_8() const { return ____lastObjectID_8; }
	inline int64_t* get_address_of__lastObjectID_8() { return &____lastObjectID_8; }
	inline void set__lastObjectID_8(int64_t value)
	{
		____lastObjectID_8 = value;
	}

	inline static int32_t get_offset_of__rootObjectID_9() { return static_cast<int32_t>(offsetof(ObjectReader_t1813459519, ____rootObjectID_9)); }
	inline int64_t get__rootObjectID_9() const { return ____rootObjectID_9; }
	inline int64_t* get_address_of__rootObjectID_9() { return &____rootObjectID_9; }
	inline void set__rootObjectID_9(int64_t value)
	{
		____rootObjectID_9 = value;
	}

	inline static int32_t get_offset_of_arrayBuffer_10() { return static_cast<int32_t>(offsetof(ObjectReader_t1813459519, ___arrayBuffer_10)); }
	inline ByteU5BU5D_t965135465* get_arrayBuffer_10() const { return ___arrayBuffer_10; }
	inline ByteU5BU5D_t965135465** get_address_of_arrayBuffer_10() { return &___arrayBuffer_10; }
	inline void set_arrayBuffer_10(ByteU5BU5D_t965135465* value)
	{
		___arrayBuffer_10 = value;
		Il2CppCodeGenWriteBarrier((&___arrayBuffer_10), value);
	}

	inline static int32_t get_offset_of_ArrayBufferLength_11() { return static_cast<int32_t>(offsetof(ObjectReader_t1813459519, ___ArrayBufferLength_11)); }
	inline int32_t get_ArrayBufferLength_11() const { return ___ArrayBufferLength_11; }
	inline int32_t* get_address_of_ArrayBufferLength_11() { return &___ArrayBufferLength_11; }
	inline void set_ArrayBufferLength_11(int32_t value)
	{
		___ArrayBufferLength_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTREADER_T1813459519_H
#ifndef OBJECTMANAGER_T1152673527_H
#define OBJECTMANAGER_T1152673527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.ObjectManager
struct  ObjectManager_t1152673527  : public RuntimeObject
{
public:
	// System.Runtime.Serialization.ObjectRecord System.Runtime.Serialization.ObjectManager::_objectRecordChain
	ObjectRecord_t1547570597 * ____objectRecordChain_0;
	// System.Runtime.Serialization.ObjectRecord System.Runtime.Serialization.ObjectManager::_lastObjectRecord
	ObjectRecord_t1547570597 * ____lastObjectRecord_1;
	// System.Collections.ArrayList System.Runtime.Serialization.ObjectManager::_deserializedRecords
	ArrayList_t3867410345 * ____deserializedRecords_2;
	// System.Collections.ArrayList System.Runtime.Serialization.ObjectManager::_onDeserializedCallbackRecords
	ArrayList_t3867410345 * ____onDeserializedCallbackRecords_3;
	// System.Collections.Hashtable System.Runtime.Serialization.ObjectManager::_objectRecords
	Hashtable_t916193709 * ____objectRecords_4;
	// System.Boolean System.Runtime.Serialization.ObjectManager::_finalFixup
	bool ____finalFixup_5;
	// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.ObjectManager::_selector
	RuntimeObject* ____selector_6;
	// System.Runtime.Serialization.StreamingContext System.Runtime.Serialization.ObjectManager::_context
	StreamingContext_t3507466487  ____context_7;
	// System.Int32 System.Runtime.Serialization.ObjectManager::_registeredObjectsCount
	int32_t ____registeredObjectsCount_8;

public:
	inline static int32_t get_offset_of__objectRecordChain_0() { return static_cast<int32_t>(offsetof(ObjectManager_t1152673527, ____objectRecordChain_0)); }
	inline ObjectRecord_t1547570597 * get__objectRecordChain_0() const { return ____objectRecordChain_0; }
	inline ObjectRecord_t1547570597 ** get_address_of__objectRecordChain_0() { return &____objectRecordChain_0; }
	inline void set__objectRecordChain_0(ObjectRecord_t1547570597 * value)
	{
		____objectRecordChain_0 = value;
		Il2CppCodeGenWriteBarrier((&____objectRecordChain_0), value);
	}

	inline static int32_t get_offset_of__lastObjectRecord_1() { return static_cast<int32_t>(offsetof(ObjectManager_t1152673527, ____lastObjectRecord_1)); }
	inline ObjectRecord_t1547570597 * get__lastObjectRecord_1() const { return ____lastObjectRecord_1; }
	inline ObjectRecord_t1547570597 ** get_address_of__lastObjectRecord_1() { return &____lastObjectRecord_1; }
	inline void set__lastObjectRecord_1(ObjectRecord_t1547570597 * value)
	{
		____lastObjectRecord_1 = value;
		Il2CppCodeGenWriteBarrier((&____lastObjectRecord_1), value);
	}

	inline static int32_t get_offset_of__deserializedRecords_2() { return static_cast<int32_t>(offsetof(ObjectManager_t1152673527, ____deserializedRecords_2)); }
	inline ArrayList_t3867410345 * get__deserializedRecords_2() const { return ____deserializedRecords_2; }
	inline ArrayList_t3867410345 ** get_address_of__deserializedRecords_2() { return &____deserializedRecords_2; }
	inline void set__deserializedRecords_2(ArrayList_t3867410345 * value)
	{
		____deserializedRecords_2 = value;
		Il2CppCodeGenWriteBarrier((&____deserializedRecords_2), value);
	}

	inline static int32_t get_offset_of__onDeserializedCallbackRecords_3() { return static_cast<int32_t>(offsetof(ObjectManager_t1152673527, ____onDeserializedCallbackRecords_3)); }
	inline ArrayList_t3867410345 * get__onDeserializedCallbackRecords_3() const { return ____onDeserializedCallbackRecords_3; }
	inline ArrayList_t3867410345 ** get_address_of__onDeserializedCallbackRecords_3() { return &____onDeserializedCallbackRecords_3; }
	inline void set__onDeserializedCallbackRecords_3(ArrayList_t3867410345 * value)
	{
		____onDeserializedCallbackRecords_3 = value;
		Il2CppCodeGenWriteBarrier((&____onDeserializedCallbackRecords_3), value);
	}

	inline static int32_t get_offset_of__objectRecords_4() { return static_cast<int32_t>(offsetof(ObjectManager_t1152673527, ____objectRecords_4)); }
	inline Hashtable_t916193709 * get__objectRecords_4() const { return ____objectRecords_4; }
	inline Hashtable_t916193709 ** get_address_of__objectRecords_4() { return &____objectRecords_4; }
	inline void set__objectRecords_4(Hashtable_t916193709 * value)
	{
		____objectRecords_4 = value;
		Il2CppCodeGenWriteBarrier((&____objectRecords_4), value);
	}

	inline static int32_t get_offset_of__finalFixup_5() { return static_cast<int32_t>(offsetof(ObjectManager_t1152673527, ____finalFixup_5)); }
	inline bool get__finalFixup_5() const { return ____finalFixup_5; }
	inline bool* get_address_of__finalFixup_5() { return &____finalFixup_5; }
	inline void set__finalFixup_5(bool value)
	{
		____finalFixup_5 = value;
	}

	inline static int32_t get_offset_of__selector_6() { return static_cast<int32_t>(offsetof(ObjectManager_t1152673527, ____selector_6)); }
	inline RuntimeObject* get__selector_6() const { return ____selector_6; }
	inline RuntimeObject** get_address_of__selector_6() { return &____selector_6; }
	inline void set__selector_6(RuntimeObject* value)
	{
		____selector_6 = value;
		Il2CppCodeGenWriteBarrier((&____selector_6), value);
	}

	inline static int32_t get_offset_of__context_7() { return static_cast<int32_t>(offsetof(ObjectManager_t1152673527, ____context_7)); }
	inline StreamingContext_t3507466487  get__context_7() const { return ____context_7; }
	inline StreamingContext_t3507466487 * get_address_of__context_7() { return &____context_7; }
	inline void set__context_7(StreamingContext_t3507466487  value)
	{
		____context_7 = value;
	}

	inline static int32_t get_offset_of__registeredObjectsCount_8() { return static_cast<int32_t>(offsetof(ObjectManager_t1152673527, ____registeredObjectsCount_8)); }
	inline int32_t get__registeredObjectsCount_8() const { return ____registeredObjectsCount_8; }
	inline int32_t* get_address_of__registeredObjectsCount_8() { return &____registeredObjectsCount_8; }
	inline void set__registeredObjectsCount_8(int32_t value)
	{
		____registeredObjectsCount_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTMANAGER_T1152673527_H
#ifndef OBJECTWRITER_T768725276_H
#define OBJECTWRITER_T768725276_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.ObjectWriter
struct  ObjectWriter_t768725276  : public RuntimeObject
{
public:
	// System.Runtime.Serialization.ObjectIDGenerator System.Runtime.Serialization.Formatters.Binary.ObjectWriter::_idGenerator
	ObjectIDGenerator_t1480664618 * ____idGenerator_0;
	// System.Collections.Hashtable System.Runtime.Serialization.Formatters.Binary.ObjectWriter::_cachedMetadata
	Hashtable_t916193709 * ____cachedMetadata_1;
	// System.Collections.Queue System.Runtime.Serialization.Formatters.Binary.ObjectWriter::_pendingObjects
	Queue_t3726947550 * ____pendingObjects_2;
	// System.Collections.Hashtable System.Runtime.Serialization.Formatters.Binary.ObjectWriter::_assemblyCache
	Hashtable_t916193709 * ____assemblyCache_3;
	// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.Formatters.Binary.ObjectWriter::_surrogateSelector
	RuntimeObject* ____surrogateSelector_7;
	// System.Runtime.Serialization.StreamingContext System.Runtime.Serialization.Formatters.Binary.ObjectWriter::_context
	StreamingContext_t3507466487  ____context_8;
	// System.Runtime.Serialization.Formatters.FormatterAssemblyStyle System.Runtime.Serialization.Formatters.Binary.ObjectWriter::_assemblyFormat
	int32_t ____assemblyFormat_9;
	// System.Runtime.Serialization.Formatters.FormatterTypeStyle System.Runtime.Serialization.Formatters.Binary.ObjectWriter::_typeFormat
	int32_t ____typeFormat_10;
	// System.Byte[] System.Runtime.Serialization.Formatters.Binary.ObjectWriter::arrayBuffer
	ByteU5BU5D_t965135465* ___arrayBuffer_11;
	// System.Int32 System.Runtime.Serialization.Formatters.Binary.ObjectWriter::ArrayBufferLength
	int32_t ___ArrayBufferLength_12;
	// System.Runtime.Serialization.SerializationObjectManager System.Runtime.Serialization.Formatters.Binary.ObjectWriter::_manager
	SerializationObjectManager_t3966029636 * ____manager_13;

public:
	inline static int32_t get_offset_of__idGenerator_0() { return static_cast<int32_t>(offsetof(ObjectWriter_t768725276, ____idGenerator_0)); }
	inline ObjectIDGenerator_t1480664618 * get__idGenerator_0() const { return ____idGenerator_0; }
	inline ObjectIDGenerator_t1480664618 ** get_address_of__idGenerator_0() { return &____idGenerator_0; }
	inline void set__idGenerator_0(ObjectIDGenerator_t1480664618 * value)
	{
		____idGenerator_0 = value;
		Il2CppCodeGenWriteBarrier((&____idGenerator_0), value);
	}

	inline static int32_t get_offset_of__cachedMetadata_1() { return static_cast<int32_t>(offsetof(ObjectWriter_t768725276, ____cachedMetadata_1)); }
	inline Hashtable_t916193709 * get__cachedMetadata_1() const { return ____cachedMetadata_1; }
	inline Hashtable_t916193709 ** get_address_of__cachedMetadata_1() { return &____cachedMetadata_1; }
	inline void set__cachedMetadata_1(Hashtable_t916193709 * value)
	{
		____cachedMetadata_1 = value;
		Il2CppCodeGenWriteBarrier((&____cachedMetadata_1), value);
	}

	inline static int32_t get_offset_of__pendingObjects_2() { return static_cast<int32_t>(offsetof(ObjectWriter_t768725276, ____pendingObjects_2)); }
	inline Queue_t3726947550 * get__pendingObjects_2() const { return ____pendingObjects_2; }
	inline Queue_t3726947550 ** get_address_of__pendingObjects_2() { return &____pendingObjects_2; }
	inline void set__pendingObjects_2(Queue_t3726947550 * value)
	{
		____pendingObjects_2 = value;
		Il2CppCodeGenWriteBarrier((&____pendingObjects_2), value);
	}

	inline static int32_t get_offset_of__assemblyCache_3() { return static_cast<int32_t>(offsetof(ObjectWriter_t768725276, ____assemblyCache_3)); }
	inline Hashtable_t916193709 * get__assemblyCache_3() const { return ____assemblyCache_3; }
	inline Hashtable_t916193709 ** get_address_of__assemblyCache_3() { return &____assemblyCache_3; }
	inline void set__assemblyCache_3(Hashtable_t916193709 * value)
	{
		____assemblyCache_3 = value;
		Il2CppCodeGenWriteBarrier((&____assemblyCache_3), value);
	}

	inline static int32_t get_offset_of__surrogateSelector_7() { return static_cast<int32_t>(offsetof(ObjectWriter_t768725276, ____surrogateSelector_7)); }
	inline RuntimeObject* get__surrogateSelector_7() const { return ____surrogateSelector_7; }
	inline RuntimeObject** get_address_of__surrogateSelector_7() { return &____surrogateSelector_7; }
	inline void set__surrogateSelector_7(RuntimeObject* value)
	{
		____surrogateSelector_7 = value;
		Il2CppCodeGenWriteBarrier((&____surrogateSelector_7), value);
	}

	inline static int32_t get_offset_of__context_8() { return static_cast<int32_t>(offsetof(ObjectWriter_t768725276, ____context_8)); }
	inline StreamingContext_t3507466487  get__context_8() const { return ____context_8; }
	inline StreamingContext_t3507466487 * get_address_of__context_8() { return &____context_8; }
	inline void set__context_8(StreamingContext_t3507466487  value)
	{
		____context_8 = value;
	}

	inline static int32_t get_offset_of__assemblyFormat_9() { return static_cast<int32_t>(offsetof(ObjectWriter_t768725276, ____assemblyFormat_9)); }
	inline int32_t get__assemblyFormat_9() const { return ____assemblyFormat_9; }
	inline int32_t* get_address_of__assemblyFormat_9() { return &____assemblyFormat_9; }
	inline void set__assemblyFormat_9(int32_t value)
	{
		____assemblyFormat_9 = value;
	}

	inline static int32_t get_offset_of__typeFormat_10() { return static_cast<int32_t>(offsetof(ObjectWriter_t768725276, ____typeFormat_10)); }
	inline int32_t get__typeFormat_10() const { return ____typeFormat_10; }
	inline int32_t* get_address_of__typeFormat_10() { return &____typeFormat_10; }
	inline void set__typeFormat_10(int32_t value)
	{
		____typeFormat_10 = value;
	}

	inline static int32_t get_offset_of_arrayBuffer_11() { return static_cast<int32_t>(offsetof(ObjectWriter_t768725276, ___arrayBuffer_11)); }
	inline ByteU5BU5D_t965135465* get_arrayBuffer_11() const { return ___arrayBuffer_11; }
	inline ByteU5BU5D_t965135465** get_address_of_arrayBuffer_11() { return &___arrayBuffer_11; }
	inline void set_arrayBuffer_11(ByteU5BU5D_t965135465* value)
	{
		___arrayBuffer_11 = value;
		Il2CppCodeGenWriteBarrier((&___arrayBuffer_11), value);
	}

	inline static int32_t get_offset_of_ArrayBufferLength_12() { return static_cast<int32_t>(offsetof(ObjectWriter_t768725276, ___ArrayBufferLength_12)); }
	inline int32_t get_ArrayBufferLength_12() const { return ___ArrayBufferLength_12; }
	inline int32_t* get_address_of_ArrayBufferLength_12() { return &___ArrayBufferLength_12; }
	inline void set_ArrayBufferLength_12(int32_t value)
	{
		___ArrayBufferLength_12 = value;
	}

	inline static int32_t get_offset_of__manager_13() { return static_cast<int32_t>(offsetof(ObjectWriter_t768725276, ____manager_13)); }
	inline SerializationObjectManager_t3966029636 * get__manager_13() const { return ____manager_13; }
	inline SerializationObjectManager_t3966029636 ** get_address_of__manager_13() { return &____manager_13; }
	inline void set__manager_13(SerializationObjectManager_t3966029636 * value)
	{
		____manager_13 = value;
		Il2CppCodeGenWriteBarrier((&____manager_13), value);
	}
};

struct ObjectWriter_t768725276_StaticFields
{
public:
	// System.Collections.Hashtable System.Runtime.Serialization.Formatters.Binary.ObjectWriter::_cachedTypes
	Hashtable_t916193709 * ____cachedTypes_4;
	// System.Reflection.Assembly System.Runtime.Serialization.Formatters.Binary.ObjectWriter::CorlibAssembly
	Assembly_t2899238720 * ___CorlibAssembly_5;
	// System.String System.Runtime.Serialization.Formatters.Binary.ObjectWriter::CorlibAssemblyName
	String_t* ___CorlibAssemblyName_6;

public:
	inline static int32_t get_offset_of__cachedTypes_4() { return static_cast<int32_t>(offsetof(ObjectWriter_t768725276_StaticFields, ____cachedTypes_4)); }
	inline Hashtable_t916193709 * get__cachedTypes_4() const { return ____cachedTypes_4; }
	inline Hashtable_t916193709 ** get_address_of__cachedTypes_4() { return &____cachedTypes_4; }
	inline void set__cachedTypes_4(Hashtable_t916193709 * value)
	{
		____cachedTypes_4 = value;
		Il2CppCodeGenWriteBarrier((&____cachedTypes_4), value);
	}

	inline static int32_t get_offset_of_CorlibAssembly_5() { return static_cast<int32_t>(offsetof(ObjectWriter_t768725276_StaticFields, ___CorlibAssembly_5)); }
	inline Assembly_t2899238720 * get_CorlibAssembly_5() const { return ___CorlibAssembly_5; }
	inline Assembly_t2899238720 ** get_address_of_CorlibAssembly_5() { return &___CorlibAssembly_5; }
	inline void set_CorlibAssembly_5(Assembly_t2899238720 * value)
	{
		___CorlibAssembly_5 = value;
		Il2CppCodeGenWriteBarrier((&___CorlibAssembly_5), value);
	}

	inline static int32_t get_offset_of_CorlibAssemblyName_6() { return static_cast<int32_t>(offsetof(ObjectWriter_t768725276_StaticFields, ___CorlibAssemblyName_6)); }
	inline String_t* get_CorlibAssemblyName_6() const { return ___CorlibAssemblyName_6; }
	inline String_t** get_address_of_CorlibAssemblyName_6() { return &___CorlibAssemblyName_6; }
	inline void set_CorlibAssemblyName_6(String_t* value)
	{
		___CorlibAssemblyName_6 = value;
		Il2CppCodeGenWriteBarrier((&___CorlibAssemblyName_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTWRITER_T768725276_H
#ifndef RC2_T901134266_H
#define RC2_T901134266_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RC2
struct  RC2_t901134266  : public SymmetricAlgorithm_t3610262089
{
public:
	// System.Int32 System.Security.Cryptography.RC2::EffectiveKeySizeValue
	int32_t ___EffectiveKeySizeValue_10;

public:
	inline static int32_t get_offset_of_EffectiveKeySizeValue_10() { return static_cast<int32_t>(offsetof(RC2_t901134266, ___EffectiveKeySizeValue_10)); }
	inline int32_t get_EffectiveKeySizeValue_10() const { return ___EffectiveKeySizeValue_10; }
	inline int32_t* get_address_of_EffectiveKeySizeValue_10() { return &___EffectiveKeySizeValue_10; }
	inline void set_EffectiveKeySizeValue_10(int32_t value)
	{
		___EffectiveKeySizeValue_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RC2_T901134266_H
#ifndef RC2CRYPTOSERVICEPROVIDER_T399026184_H
#define RC2CRYPTOSERVICEPROVIDER_T399026184_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RC2CryptoServiceProvider
struct  RC2CryptoServiceProvider_t399026184  : public RC2_t901134266
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RC2CRYPTOSERVICEPROVIDER_T399026184_H
#ifndef DESCRYPTOSERVICEPROVIDER_T3260144200_H
#define DESCRYPTOSERVICEPROVIDER_T3260144200_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DESCryptoServiceProvider
struct  DESCryptoServiceProvider_t3260144200  : public DES_t940759676
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESCRYPTOSERVICEPROVIDER_T3260144200_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize600 = { sizeof (WellKnownServiceTypeEntry_t780778922), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable600[3] = 
{
	WellKnownServiceTypeEntry_t780778922::get_offset_of_obj_type_2(),
	WellKnownServiceTypeEntry_t780778922::get_offset_of_obj_uri_3(),
	WellKnownServiceTypeEntry_t780778922::get_offset_of_obj_mode_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize601 = { sizeof (BinaryCommon_t4079403018), -1, sizeof(BinaryCommon_t4079403018_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable601[4] = 
{
	BinaryCommon_t4079403018_StaticFields::get_offset_of_BinaryHeader_0(),
	BinaryCommon_t4079403018_StaticFields::get_offset_of__typeCodesToType_1(),
	BinaryCommon_t4079403018_StaticFields::get_offset_of__typeCodeMap_2(),
	BinaryCommon_t4079403018_StaticFields::get_offset_of_UseReflectionSerialization_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize602 = { sizeof (BinaryElement_t3293532381)+ sizeof (RuntimeObject), sizeof(uint8_t), 0, 0 };
extern const int32_t g_FieldOffsetTable602[24] = 
{
	BinaryElement_t3293532381::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize603 = { sizeof (TypeTag_t2876626053)+ sizeof (RuntimeObject), sizeof(uint8_t), 0, 0 };
extern const int32_t g_FieldOffsetTable603[9] = 
{
	TypeTag_t2876626053::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize604 = { sizeof (MethodFlags_t720614779)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable604[11] = 
{
	MethodFlags_t720614779::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize605 = { sizeof (ReturnTypeTag_t3756737149)+ sizeof (RuntimeObject), sizeof(uint8_t), 0, 0 };
extern const int32_t g_FieldOffsetTable605[5] = 
{
	ReturnTypeTag_t3756737149::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize606 = { sizeof (BinaryFormatter_t4190503671), -1, sizeof(BinaryFormatter_t4190503671_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable606[7] = 
{
	BinaryFormatter_t4190503671::get_offset_of_assembly_format_0(),
	BinaryFormatter_t4190503671::get_offset_of_binder_1(),
	BinaryFormatter_t4190503671::get_offset_of_context_2(),
	BinaryFormatter_t4190503671::get_offset_of_surrogate_selector_3(),
	BinaryFormatter_t4190503671::get_offset_of_type_format_4(),
	BinaryFormatter_t4190503671::get_offset_of_filter_level_5(),
	BinaryFormatter_t4190503671_StaticFields::get_offset_of_U3CDefaultSurrogateSelectorU3Ek__BackingField_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize607 = { sizeof (CodeGenerator_t283925109), -1, sizeof(CodeGenerator_t283925109_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable607[2] = 
{
	CodeGenerator_t283925109_StaticFields::get_offset_of_monitor_0(),
	CodeGenerator_t283925109_StaticFields::get_offset_of__module_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize608 = { sizeof (MessageFormatter_t3502090666), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize609 = { sizeof (ObjectReader_t1813459519), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable609[12] = 
{
	ObjectReader_t1813459519::get_offset_of__surrogateSelector_0(),
	ObjectReader_t1813459519::get_offset_of__context_1(),
	ObjectReader_t1813459519::get_offset_of__binder_2(),
	ObjectReader_t1813459519::get_offset_of__filterLevel_3(),
	ObjectReader_t1813459519::get_offset_of__manager_4(),
	ObjectReader_t1813459519::get_offset_of__registeredAssemblies_5(),
	ObjectReader_t1813459519::get_offset_of__typeMetadataCache_6(),
	ObjectReader_t1813459519::get_offset_of__lastObject_7(),
	ObjectReader_t1813459519::get_offset_of__lastObjectID_8(),
	ObjectReader_t1813459519::get_offset_of__rootObjectID_9(),
	ObjectReader_t1813459519::get_offset_of_arrayBuffer_10(),
	ObjectReader_t1813459519::get_offset_of_ArrayBufferLength_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize610 = { sizeof (TypeMetadata_t2494809118), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable610[6] = 
{
	TypeMetadata_t2494809118::get_offset_of_Type_0(),
	TypeMetadata_t2494809118::get_offset_of_MemberTypes_1(),
	TypeMetadata_t2494809118::get_offset_of_MemberNames_2(),
	TypeMetadata_t2494809118::get_offset_of_MemberInfos_3(),
	TypeMetadata_t2494809118::get_offset_of_FieldCount_4(),
	TypeMetadata_t2494809118::get_offset_of_NeedsSerializationInfo_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize611 = { sizeof (ArrayNullFiller_t96935862), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable611[1] = 
{
	ArrayNullFiller_t96935862::get_offset_of_NullCount_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize612 = { sizeof (TypeMetadata_t970315655), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable612[2] = 
{
	TypeMetadata_t970315655::get_offset_of_TypeAssemblyName_0(),
	TypeMetadata_t970315655::get_offset_of_InstanceTypeName_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize613 = { sizeof (ClrTypeMetadata_t3097028511), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable613[1] = 
{
	ClrTypeMetadata_t3097028511::get_offset_of_InstanceType_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize614 = { sizeof (SerializableTypeMetadata_t3973752499), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable614[2] = 
{
	SerializableTypeMetadata_t3973752499::get_offset_of_types_2(),
	SerializableTypeMetadata_t3973752499::get_offset_of_names_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize615 = { sizeof (MemberTypeMetadata_t2182683089), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable615[1] = 
{
	MemberTypeMetadata_t2182683089::get_offset_of_members_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize616 = { sizeof (ObjectWriter_t768725276), -1, sizeof(ObjectWriter_t768725276_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable616[14] = 
{
	ObjectWriter_t768725276::get_offset_of__idGenerator_0(),
	ObjectWriter_t768725276::get_offset_of__cachedMetadata_1(),
	ObjectWriter_t768725276::get_offset_of__pendingObjects_2(),
	ObjectWriter_t768725276::get_offset_of__assemblyCache_3(),
	ObjectWriter_t768725276_StaticFields::get_offset_of__cachedTypes_4(),
	ObjectWriter_t768725276_StaticFields::get_offset_of_CorlibAssembly_5(),
	ObjectWriter_t768725276_StaticFields::get_offset_of_CorlibAssemblyName_6(),
	ObjectWriter_t768725276::get_offset_of__surrogateSelector_7(),
	ObjectWriter_t768725276::get_offset_of__context_8(),
	ObjectWriter_t768725276::get_offset_of__assemblyFormat_9(),
	ObjectWriter_t768725276::get_offset_of__typeFormat_10(),
	ObjectWriter_t768725276::get_offset_of_arrayBuffer_11(),
	ObjectWriter_t768725276::get_offset_of_ArrayBufferLength_12(),
	ObjectWriter_t768725276::get_offset_of__manager_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize617 = { sizeof (MetadataReference_t2625253365), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable617[2] = 
{
	MetadataReference_t2625253365::get_offset_of_Metadata_0(),
	MetadataReference_t2625253365::get_offset_of_ObjectID_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize618 = { sizeof (FormatterAssemblyStyle_t2479039960)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable618[3] = 
{
	FormatterAssemblyStyle_t2479039960::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize619 = { sizeof (FormatterTypeStyle_t61090199)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable619[4] = 
{
	FormatterTypeStyle_t61090199::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize620 = { sizeof (TypeFilterLevel_t1957521541)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable620[3] = 
{
	TypeFilterLevel_t1957521541::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize621 = { sizeof (FormatterConverter_t890185150), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize622 = { sizeof (FormatterServices_t182543004), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize623 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize624 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize625 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize626 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize627 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize628 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize629 = { sizeof (ObjectIDGenerator_t1480664618), -1, sizeof(ObjectIDGenerator_t1480664618_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable629[3] = 
{
	ObjectIDGenerator_t1480664618::get_offset_of_table_0(),
	ObjectIDGenerator_t1480664618::get_offset_of_current_1(),
	ObjectIDGenerator_t1480664618_StaticFields::get_offset_of_comparer_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize630 = { sizeof (InstanceComparer_t816754153), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize631 = { sizeof (ObjectManager_t1152673527), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable631[9] = 
{
	ObjectManager_t1152673527::get_offset_of__objectRecordChain_0(),
	ObjectManager_t1152673527::get_offset_of__lastObjectRecord_1(),
	ObjectManager_t1152673527::get_offset_of__deserializedRecords_2(),
	ObjectManager_t1152673527::get_offset_of__onDeserializedCallbackRecords_3(),
	ObjectManager_t1152673527::get_offset_of__objectRecords_4(),
	ObjectManager_t1152673527::get_offset_of__finalFixup_5(),
	ObjectManager_t1152673527::get_offset_of__selector_6(),
	ObjectManager_t1152673527::get_offset_of__context_7(),
	ObjectManager_t1152673527::get_offset_of__registeredObjectsCount_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize632 = { sizeof (BaseFixupRecord_t1056132251), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable632[4] = 
{
	BaseFixupRecord_t1056132251::get_offset_of_ObjectToBeFixed_0(),
	BaseFixupRecord_t1056132251::get_offset_of_ObjectRequired_1(),
	BaseFixupRecord_t1056132251::get_offset_of_NextSameContainer_2(),
	BaseFixupRecord_t1056132251::get_offset_of_NextSameRequired_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize633 = { sizeof (ArrayFixupRecord_t2408418398), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable633[1] = 
{
	ArrayFixupRecord_t2408418398::get_offset_of__index_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize634 = { sizeof (MultiArrayFixupRecord_t2895622875), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable634[1] = 
{
	MultiArrayFixupRecord_t2895622875::get_offset_of__indices_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize635 = { sizeof (FixupRecord_t1666242492), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable635[1] = 
{
	FixupRecord_t1666242492::get_offset_of__member_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize636 = { sizeof (DelayedFixupRecord_t3436792777), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable636[1] = 
{
	DelayedFixupRecord_t3436792777::get_offset_of__memberName_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize637 = { sizeof (ObjectRecordStatus_t1786832619)+ sizeof (RuntimeObject), sizeof(uint8_t), 0, 0 };
extern const int32_t g_FieldOffsetTable637[5] = 
{
	ObjectRecordStatus_t1786832619::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize638 = { sizeof (ObjectRecord_t1547570597), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable638[13] = 
{
	ObjectRecord_t1547570597::get_offset_of_Status_0(),
	ObjectRecord_t1547570597::get_offset_of_OriginalObject_1(),
	ObjectRecord_t1547570597::get_offset_of_ObjectInstance_2(),
	ObjectRecord_t1547570597::get_offset_of_ObjectID_3(),
	ObjectRecord_t1547570597::get_offset_of_Info_4(),
	ObjectRecord_t1547570597::get_offset_of_IdOfContainingObj_5(),
	ObjectRecord_t1547570597::get_offset_of_Surrogate_6(),
	ObjectRecord_t1547570597::get_offset_of_SurrogateSelector_7(),
	ObjectRecord_t1547570597::get_offset_of_Member_8(),
	ObjectRecord_t1547570597::get_offset_of_ArrayIndex_9(),
	ObjectRecord_t1547570597::get_offset_of_FixupChainAsContainer_10(),
	ObjectRecord_t1547570597::get_offset_of_FixupChainAsRequired_11(),
	ObjectRecord_t1547570597::get_offset_of_Next_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize639 = { sizeof (OnDeserializedAttribute_t3229850254), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize640 = { sizeof (OnDeserializingAttribute_t948465276), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize641 = { sizeof (OnSerializedAttribute_t191053725), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize642 = { sizeof (OnSerializingAttribute_t206381051), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize643 = { sizeof (SerializationBinder_t3796606365), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize644 = { sizeof (SerializationCallbacks_t119595541), -1, sizeof(SerializationCallbacks_t119595541_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable644[6] = 
{
	SerializationCallbacks_t119595541::get_offset_of_onSerializingList_0(),
	SerializationCallbacks_t119595541::get_offset_of_onSerializedList_1(),
	SerializationCallbacks_t119595541::get_offset_of_onDeserializingList_2(),
	SerializationCallbacks_t119595541::get_offset_of_onDeserializedList_3(),
	SerializationCallbacks_t119595541_StaticFields::get_offset_of_cache_4(),
	SerializationCallbacks_t119595541_StaticFields::get_offset_of_cache_lock_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize645 = { sizeof (CallbackHandler_t3589417362), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize646 = { sizeof (SerializationEntry_t589640112)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable646[3] = 
{
	SerializationEntry_t589640112::get_offset_of_name_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SerializationEntry_t589640112::get_offset_of_objectType_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SerializationEntry_t589640112::get_offset_of_value_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize647 = { sizeof (SerializationException_t179146664), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize648 = { sizeof (SerializationInfo_t722839904), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable648[5] = 
{
	SerializationInfo_t722839904::get_offset_of_serialized_0(),
	SerializationInfo_t722839904::get_offset_of_values_1(),
	SerializationInfo_t722839904::get_offset_of_assemblyName_2(),
	SerializationInfo_t722839904::get_offset_of_fullTypeName_3(),
	SerializationInfo_t722839904::get_offset_of_converter_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize649 = { sizeof (SerializationInfoEnumerator_t1538281971), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable649[1] = 
{
	SerializationInfoEnumerator_t1538281971::get_offset_of_enumerator_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize650 = { sizeof (SerializationObjectManager_t3966029636), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable650[3] = 
{
	SerializationObjectManager_t3966029636::get_offset_of_context_0(),
	SerializationObjectManager_t3966029636::get_offset_of_seen_1(),
	SerializationObjectManager_t3966029636::get_offset_of_callbacks_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize651 = { sizeof (U3CRegisterObjectU3Ec__AnonStorey3_t3086664498), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable651[2] = 
{
	U3CRegisterObjectU3Ec__AnonStorey3_t3086664498::get_offset_of_sc_0(),
	U3CRegisterObjectU3Ec__AnonStorey3_t3086664498::get_offset_of_obj_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize652 = { sizeof (StreamingContext_t3507466487)+ sizeof (RuntimeObject), sizeof(StreamingContext_t3507466487_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable652[2] = 
{
	StreamingContext_t3507466487::get_offset_of_state_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	StreamingContext_t3507466487::get_offset_of_additional_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize653 = { sizeof (StreamingContextStates_t3925845859)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable653[10] = 
{
	StreamingContextStates_t3925845859::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize654 = { sizeof (X509Certificate_t1721638875), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable654[5] = 
{
	X509Certificate_t1721638875::get_offset_of_x509_0(),
	X509Certificate_t1721638875::get_offset_of_hideDates_1(),
	X509Certificate_t1721638875::get_offset_of_cachedCertificateHash_2(),
	X509Certificate_t1721638875::get_offset_of_issuer_name_3(),
	X509Certificate_t1721638875::get_offset_of_subject_name_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize655 = { sizeof (X509KeyStorageFlags_t751003861)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable655[7] = 
{
	X509KeyStorageFlags_t751003861::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize656 = { sizeof (AsymmetricAlgorithm_t1142002999), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable656[2] = 
{
	AsymmetricAlgorithm_t1142002999::get_offset_of_KeySizeValue_0(),
	AsymmetricAlgorithm_t1142002999::get_offset_of_LegalKeySizesValue_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize657 = { sizeof (AsymmetricKeyExchangeFormatter_t3826975405), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize658 = { sizeof (AsymmetricSignatureDeformatter_t3573254117), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize659 = { sizeof (AsymmetricSignatureFormatter_t2853573350), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize660 = { sizeof (Base64Constants_t804313380), -1, sizeof(Base64Constants_t804313380_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable660[2] = 
{
	Base64Constants_t804313380_StaticFields::get_offset_of_EncodeTable_0(),
	Base64Constants_t804313380_StaticFields::get_offset_of_DecodeTable_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize661 = { sizeof (CipherMode_t1395510172)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable661[6] = 
{
	CipherMode_t1395510172::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize662 = { sizeof (CryptoConfig_t1015305726), -1, sizeof(CryptoConfig_t1015305726_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable662[3] = 
{
	CryptoConfig_t1015305726_StaticFields::get_offset_of_lockObject_0(),
	CryptoConfig_t1015305726_StaticFields::get_offset_of_algorithms_1(),
	CryptoConfig_t1015305726_StaticFields::get_offset_of_oid_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize663 = { sizeof (CryptographicException_t1750078668), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize664 = { sizeof (CryptographicUnexpectedOperationException_t2684701783), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize665 = { sizeof (CspParameters_t1095570833), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable665[5] = 
{
	CspParameters_t1095570833::get_offset_of__Flags_0(),
	CspParameters_t1095570833::get_offset_of_KeyContainerName_1(),
	CspParameters_t1095570833::get_offset_of_KeyNumber_2(),
	CspParameters_t1095570833::get_offset_of_ProviderName_3(),
	CspParameters_t1095570833::get_offset_of_ProviderType_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize666 = { sizeof (CspProviderFlags_t3037299409)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable666[9] = 
{
	CspProviderFlags_t3037299409::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize667 = { sizeof (DES_t940759676), -1, sizeof(DES_t940759676_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable667[2] = 
{
	DES_t940759676_StaticFields::get_offset_of_weakKeys_10(),
	DES_t940759676_StaticFields::get_offset_of_semiWeakKeys_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize668 = { sizeof (DESTransform_t4134365757), -1, sizeof(DESTransform_t4134365757_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable668[13] = 
{
	DESTransform_t4134365757_StaticFields::get_offset_of_KEY_BIT_SIZE_12(),
	DESTransform_t4134365757_StaticFields::get_offset_of_KEY_BYTE_SIZE_13(),
	DESTransform_t4134365757_StaticFields::get_offset_of_BLOCK_BIT_SIZE_14(),
	DESTransform_t4134365757_StaticFields::get_offset_of_BLOCK_BYTE_SIZE_15(),
	DESTransform_t4134365757::get_offset_of_keySchedule_16(),
	DESTransform_t4134365757::get_offset_of_byteBuff_17(),
	DESTransform_t4134365757::get_offset_of_dwordBuff_18(),
	DESTransform_t4134365757_StaticFields::get_offset_of_spBoxes_19(),
	DESTransform_t4134365757_StaticFields::get_offset_of_PC1_20(),
	DESTransform_t4134365757_StaticFields::get_offset_of_leftRotTotal_21(),
	DESTransform_t4134365757_StaticFields::get_offset_of_PC2_22(),
	DESTransform_t4134365757_StaticFields::get_offset_of_ipTab_23(),
	DESTransform_t4134365757_StaticFields::get_offset_of_fpTab_24(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize669 = { sizeof (DESCryptoServiceProvider_t3260144200), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize670 = { sizeof (DSA_t661194812), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize671 = { sizeof (DSACryptoServiceProvider_t4013930519), -1, sizeof(DSACryptoServiceProvider_t4013930519_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable671[7] = 
{
	DSACryptoServiceProvider_t4013930519::get_offset_of_store_2(),
	DSACryptoServiceProvider_t4013930519::get_offset_of_persistKey_3(),
	DSACryptoServiceProvider_t4013930519::get_offset_of_persisted_4(),
	DSACryptoServiceProvider_t4013930519::get_offset_of_privateKeyExportable_5(),
	DSACryptoServiceProvider_t4013930519::get_offset_of_m_disposed_6(),
	DSACryptoServiceProvider_t4013930519::get_offset_of_dsa_7(),
	DSACryptoServiceProvider_t4013930519_StaticFields::get_offset_of_useMachineKeyStore_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize672 = { sizeof (DSAParameters_t472533487)+ sizeof (RuntimeObject), sizeof(DSAParameters_t472533487_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable672[8] = 
{
	DSAParameters_t472533487::get_offset_of_Counter_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DSAParameters_t472533487::get_offset_of_G_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DSAParameters_t472533487::get_offset_of_J_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DSAParameters_t472533487::get_offset_of_P_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DSAParameters_t472533487::get_offset_of_Q_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DSAParameters_t472533487::get_offset_of_Seed_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DSAParameters_t472533487::get_offset_of_X_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DSAParameters_t472533487::get_offset_of_Y_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize673 = { sizeof (DSASignatureDeformatter_t1203506807), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable673[1] = 
{
	DSASignatureDeformatter_t1203506807::get_offset_of_dsa_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize674 = { sizeof (DSASignatureFormatter_t2577407923), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable674[1] = 
{
	DSASignatureFormatter_t2577407923::get_offset_of_dsa_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize675 = { sizeof (FromBase64TransformMode_t2560192302)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable675[3] = 
{
	FromBase64TransformMode_t2560192302::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize676 = { sizeof (FromBase64Transform_t3516114175), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable676[5] = 
{
	FromBase64Transform_t3516114175::get_offset_of_mode_0(),
	FromBase64Transform_t3516114175::get_offset_of_accumulator_1(),
	FromBase64Transform_t3516114175::get_offset_of_accPtr_2(),
	FromBase64Transform_t3516114175::get_offset_of_m_disposed_3(),
	FromBase64Transform_t3516114175::get_offset_of_lookupTable_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize677 = { sizeof (HMAC_t2695143592), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable677[5] = 
{
	HMAC_t2695143592::get_offset_of__disposed_5(),
	HMAC_t2695143592::get_offset_of__hashName_6(),
	HMAC_t2695143592::get_offset_of__algo_7(),
	HMAC_t2695143592::get_offset_of__block_8(),
	HMAC_t2695143592::get_offset_of__blockSizeValue_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize678 = { sizeof (HMACMD5_t1412347803), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize679 = { sizeof (HMACRIPEMD160_t2035582163), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize680 = { sizeof (HMACSHA1_t653600648), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize681 = { sizeof (HMACSHA256_t2260734254), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize682 = { sizeof (HMACSHA384_t370576120), -1, sizeof(HMACSHA384_t370576120_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable682[2] = 
{
	HMACSHA384_t370576120_StaticFields::get_offset_of_legacy_mode_10(),
	HMACSHA384_t370576120::get_offset_of_legacy_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize683 = { sizeof (HMACSHA512_t2645299907), -1, sizeof(HMACSHA512_t2645299907_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable683[2] = 
{
	HMACSHA512_t2645299907_StaticFields::get_offset_of_legacy_mode_10(),
	HMACSHA512_t2645299907::get_offset_of_legacy_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize684 = { sizeof (HashAlgorithm_t3960293763), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable684[4] = 
{
	HashAlgorithm_t3960293763::get_offset_of_HashValue_0(),
	HashAlgorithm_t3960293763::get_offset_of_HashSizeValue_1(),
	HashAlgorithm_t3960293763::get_offset_of_State_2(),
	HashAlgorithm_t3960293763::get_offset_of_disposed_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize685 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize686 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize687 = { sizeof (KeySizes_t742591633), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable687[3] = 
{
	KeySizes_t742591633::get_offset_of__maxSize_0(),
	KeySizes_t742591633::get_offset_of__minSize_1(),
	KeySizes_t742591633::get_offset_of__skipSize_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize688 = { sizeof (KeyedHashAlgorithm_t2972318049), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable688[1] = 
{
	KeyedHashAlgorithm_t2972318049::get_offset_of_KeyValue_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize689 = { sizeof (MACTripleDES_t1015969162), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable689[3] = 
{
	MACTripleDES_t1015969162::get_offset_of_tdes_5(),
	MACTripleDES_t1015969162::get_offset_of_mac_6(),
	MACTripleDES_t1015969162::get_offset_of_m_disposed_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize690 = { sizeof (MD5_t1477566663), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize691 = { sizeof (MD5CryptoServiceProvider_t1392612660), -1, sizeof(MD5CryptoServiceProvider_t1392612660_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable691[6] = 
{
	MD5CryptoServiceProvider_t1392612660::get_offset_of__H_4(),
	MD5CryptoServiceProvider_t1392612660::get_offset_of_buff_5(),
	MD5CryptoServiceProvider_t1392612660::get_offset_of_count_6(),
	MD5CryptoServiceProvider_t1392612660::get_offset_of__ProcessingBuffer_7(),
	MD5CryptoServiceProvider_t1392612660::get_offset_of__ProcessingBufferCount_8(),
	MD5CryptoServiceProvider_t1392612660_StaticFields::get_offset_of_K_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize692 = { sizeof (PaddingMode_t1738086749)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable692[6] = 
{
	PaddingMode_t1738086749::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize693 = { sizeof (RC2_t901134266), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable693[1] = 
{
	RC2_t901134266::get_offset_of_EffectiveKeySizeValue_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize694 = { sizeof (RC2CryptoServiceProvider_t399026184), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize695 = { sizeof (RC2Transform_t1328656091), -1, sizeof(RC2Transform_t1328656091_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable695[7] = 
{
	RC2Transform_t1328656091::get_offset_of_R0_12(),
	RC2Transform_t1328656091::get_offset_of_R1_13(),
	RC2Transform_t1328656091::get_offset_of_R2_14(),
	RC2Transform_t1328656091::get_offset_of_R3_15(),
	RC2Transform_t1328656091::get_offset_of_K_16(),
	RC2Transform_t1328656091::get_offset_of_j_17(),
	RC2Transform_t1328656091_StaticFields::get_offset_of_pitable_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize696 = { sizeof (RIPEMD160_t2910005609), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize697 = { sizeof (RIPEMD160Managed_t817756336), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable697[5] = 
{
	RIPEMD160Managed_t817756336::get_offset_of__ProcessingBuffer_4(),
	RIPEMD160Managed_t817756336::get_offset_of__X_5(),
	RIPEMD160Managed_t817756336::get_offset_of__HashValue_6(),
	RIPEMD160Managed_t817756336::get_offset_of__Length_7(),
	RIPEMD160Managed_t817756336::get_offset_of__ProcessingBufferCount_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize698 = { sizeof (RNGCryptoServiceProvider_t1410523683), -1, sizeof(RNGCryptoServiceProvider_t1410523683_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable698[2] = 
{
	RNGCryptoServiceProvider_t1410523683_StaticFields::get_offset_of__lock_0(),
	RNGCryptoServiceProvider_t1410523683::get_offset_of__handle_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize699 = { sizeof (RSA_t3620770785), -1, 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif

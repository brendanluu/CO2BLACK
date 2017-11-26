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
struct ObjectRecord_t3234148837;
// System.Collections.ArrayList
struct ArrayList_t1004296020;
// System.Collections.Hashtable
struct Hashtable_t1579358919;
// System.String
struct String_t;
// System.Runtime.Serialization.IFormatterConverter
struct IFormatterConverter_t2069574291;
// System.Collections.IEnumerator
struct IEnumerator_t2790178461;
// System.Runtime.Serialization.SerializationCallbacks
struct SerializationCallbacks_t414149290;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t2462750002;
// System.Byte[]
struct ByteU5BU5D_t3990433866;
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_t1660291574;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t1498077059;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t4293320709;
// System.Runtime.Serialization.ObjectIDGenerator/InstanceComparer
struct InstanceComparer_t2244222394;
// System.IntPtr[]
struct IntPtrU5BU5D_t1958778070;
// System.Collections.IDictionary
struct IDictionary_t1650869250;
// System.Type[]
struct TypeU5BU5D_t1290050658;
// System.Reflection.Emit.ModuleBuilder
struct ModuleBuilder_t1182863580;
// System.Runtime.Serialization.Formatters.Binary.TypeMetadata
struct TypeMetadata_t1172931145;
// System.Type
struct Type_t;
// System.String[]
struct StringU5BU5D_t3517288861;
// System.Reflection.MemberInfo[]
struct MemberInfoU5BU5D_t2676182984;
// System.Security.Cryptography.DSA
struct DSA_t3608348530;
// System.UInt32[]
struct UInt32U5BU5D_t2763435308;
// System.UInt16[]
struct UInt16U5BU5D_t303111248;
// System.Char[]
struct CharU5BU5D_t204761021;
// System.Void
struct Void_t1270832600;
// System.Int32[]
struct Int32U5BU5D_t3162311898;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t3280178693;
// Mono.Security.Cryptography.BlockProcessor
struct BlockProcessor_t2739903637;
// System.Security.Cryptography.TripleDES
struct TripleDES_t3026490886;
// Mono.Security.Cryptography.MACAlgorithm
struct MACAlgorithm_t3061222185;
// Mono.Security.Cryptography.KeyPairPersistence
struct KeyPairPersistence_t3308873985;
// Mono.Security.Cryptography.DSAManaged
struct DSAManaged_t2037042650;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1573484868;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t885769560;
// System.Runtime.Serialization.ISerializationSurrogate
struct ISerializationSurrogate_t2989985920;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t1627169552;
// System.Runtime.Serialization.BaseFixupRecord
struct BaseFixupRecord_t3161779954;
// System.Byte[,]
struct ByteU5BU2CU5D_t3990433867;
// System.IAsyncResult
struct IAsyncResult_t2339644;
// System.AsyncCallback
struct AsyncCallback_t1866332126;
// System.Runtime.Serialization.SerializationCallbacks/CallbackHandler
struct CallbackHandler_t3526672660;
// System.Runtime.Serialization.SerializationBinder
struct SerializationBinder_t4050263501;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t1434841127;
// System.Runtime.Serialization.ObjectIDGenerator
struct ObjectIDGenerator_t4215037785;
// System.Collections.Queue
struct Queue_t2560182507;
// System.Reflection.Assembly
struct Assembly_t128959728;
// System.Runtime.Serialization.SerializationObjectManager
struct SerializationObjectManager_t3576185283;




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
#ifndef ASYMMETRICSIGNATUREFORMATTER_T1462125080_H
#define ASYMMETRICSIGNATUREFORMATTER_T1462125080_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsymmetricSignatureFormatter
struct  AsymmetricSignatureFormatter_t1462125080  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYMMETRICSIGNATUREFORMATTER_T1462125080_H
#ifndef BASEFIXUPRECORD_T3161779954_H
#define BASEFIXUPRECORD_T3161779954_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.BaseFixupRecord
struct  BaseFixupRecord_t3161779954  : public RuntimeObject
{
public:
	// System.Runtime.Serialization.ObjectRecord System.Runtime.Serialization.BaseFixupRecord::ObjectToBeFixed
	ObjectRecord_t3234148837 * ___ObjectToBeFixed_0;
	// System.Runtime.Serialization.ObjectRecord System.Runtime.Serialization.BaseFixupRecord::ObjectRequired
	ObjectRecord_t3234148837 * ___ObjectRequired_1;
	// System.Runtime.Serialization.BaseFixupRecord System.Runtime.Serialization.BaseFixupRecord::NextSameContainer
	BaseFixupRecord_t3161779954 * ___NextSameContainer_2;
	// System.Runtime.Serialization.BaseFixupRecord System.Runtime.Serialization.BaseFixupRecord::NextSameRequired
	BaseFixupRecord_t3161779954 * ___NextSameRequired_3;

public:
	inline static int32_t get_offset_of_ObjectToBeFixed_0() { return static_cast<int32_t>(offsetof(BaseFixupRecord_t3161779954, ___ObjectToBeFixed_0)); }
	inline ObjectRecord_t3234148837 * get_ObjectToBeFixed_0() const { return ___ObjectToBeFixed_0; }
	inline ObjectRecord_t3234148837 ** get_address_of_ObjectToBeFixed_0() { return &___ObjectToBeFixed_0; }
	inline void set_ObjectToBeFixed_0(ObjectRecord_t3234148837 * value)
	{
		___ObjectToBeFixed_0 = value;
		Il2CppCodeGenWriteBarrier((&___ObjectToBeFixed_0), value);
	}

	inline static int32_t get_offset_of_ObjectRequired_1() { return static_cast<int32_t>(offsetof(BaseFixupRecord_t3161779954, ___ObjectRequired_1)); }
	inline ObjectRecord_t3234148837 * get_ObjectRequired_1() const { return ___ObjectRequired_1; }
	inline ObjectRecord_t3234148837 ** get_address_of_ObjectRequired_1() { return &___ObjectRequired_1; }
	inline void set_ObjectRequired_1(ObjectRecord_t3234148837 * value)
	{
		___ObjectRequired_1 = value;
		Il2CppCodeGenWriteBarrier((&___ObjectRequired_1), value);
	}

	inline static int32_t get_offset_of_NextSameContainer_2() { return static_cast<int32_t>(offsetof(BaseFixupRecord_t3161779954, ___NextSameContainer_2)); }
	inline BaseFixupRecord_t3161779954 * get_NextSameContainer_2() const { return ___NextSameContainer_2; }
	inline BaseFixupRecord_t3161779954 ** get_address_of_NextSameContainer_2() { return &___NextSameContainer_2; }
	inline void set_NextSameContainer_2(BaseFixupRecord_t3161779954 * value)
	{
		___NextSameContainer_2 = value;
		Il2CppCodeGenWriteBarrier((&___NextSameContainer_2), value);
	}

	inline static int32_t get_offset_of_NextSameRequired_3() { return static_cast<int32_t>(offsetof(BaseFixupRecord_t3161779954, ___NextSameRequired_3)); }
	inline BaseFixupRecord_t3161779954 * get_NextSameRequired_3() const { return ___NextSameRequired_3; }
	inline BaseFixupRecord_t3161779954 ** get_address_of_NextSameRequired_3() { return &___NextSameRequired_3; }
	inline void set_NextSameRequired_3(BaseFixupRecord_t3161779954 * value)
	{
		___NextSameRequired_3 = value;
		Il2CppCodeGenWriteBarrier((&___NextSameRequired_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEFIXUPRECORD_T3161779954_H
#ifndef SERIALIZATIONBINDER_T4050263501_H
#define SERIALIZATIONBINDER_T4050263501_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.SerializationBinder
struct  SerializationBinder_t4050263501  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZATIONBINDER_T4050263501_H
#ifndef SERIALIZATIONCALLBACKS_T414149290_H
#define SERIALIZATIONCALLBACKS_T414149290_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.SerializationCallbacks
struct  SerializationCallbacks_t414149290  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Runtime.Serialization.SerializationCallbacks::onSerializingList
	ArrayList_t1004296020 * ___onSerializingList_0;
	// System.Collections.ArrayList System.Runtime.Serialization.SerializationCallbacks::onSerializedList
	ArrayList_t1004296020 * ___onSerializedList_1;
	// System.Collections.ArrayList System.Runtime.Serialization.SerializationCallbacks::onDeserializingList
	ArrayList_t1004296020 * ___onDeserializingList_2;
	// System.Collections.ArrayList System.Runtime.Serialization.SerializationCallbacks::onDeserializedList
	ArrayList_t1004296020 * ___onDeserializedList_3;

public:
	inline static int32_t get_offset_of_onSerializingList_0() { return static_cast<int32_t>(offsetof(SerializationCallbacks_t414149290, ___onSerializingList_0)); }
	inline ArrayList_t1004296020 * get_onSerializingList_0() const { return ___onSerializingList_0; }
	inline ArrayList_t1004296020 ** get_address_of_onSerializingList_0() { return &___onSerializingList_0; }
	inline void set_onSerializingList_0(ArrayList_t1004296020 * value)
	{
		___onSerializingList_0 = value;
		Il2CppCodeGenWriteBarrier((&___onSerializingList_0), value);
	}

	inline static int32_t get_offset_of_onSerializedList_1() { return static_cast<int32_t>(offsetof(SerializationCallbacks_t414149290, ___onSerializedList_1)); }
	inline ArrayList_t1004296020 * get_onSerializedList_1() const { return ___onSerializedList_1; }
	inline ArrayList_t1004296020 ** get_address_of_onSerializedList_1() { return &___onSerializedList_1; }
	inline void set_onSerializedList_1(ArrayList_t1004296020 * value)
	{
		___onSerializedList_1 = value;
		Il2CppCodeGenWriteBarrier((&___onSerializedList_1), value);
	}

	inline static int32_t get_offset_of_onDeserializingList_2() { return static_cast<int32_t>(offsetof(SerializationCallbacks_t414149290, ___onDeserializingList_2)); }
	inline ArrayList_t1004296020 * get_onDeserializingList_2() const { return ___onDeserializingList_2; }
	inline ArrayList_t1004296020 ** get_address_of_onDeserializingList_2() { return &___onDeserializingList_2; }
	inline void set_onDeserializingList_2(ArrayList_t1004296020 * value)
	{
		___onDeserializingList_2 = value;
		Il2CppCodeGenWriteBarrier((&___onDeserializingList_2), value);
	}

	inline static int32_t get_offset_of_onDeserializedList_3() { return static_cast<int32_t>(offsetof(SerializationCallbacks_t414149290, ___onDeserializedList_3)); }
	inline ArrayList_t1004296020 * get_onDeserializedList_3() const { return ___onDeserializedList_3; }
	inline ArrayList_t1004296020 ** get_address_of_onDeserializedList_3() { return &___onDeserializedList_3; }
	inline void set_onDeserializedList_3(ArrayList_t1004296020 * value)
	{
		___onDeserializedList_3 = value;
		Il2CppCodeGenWriteBarrier((&___onDeserializedList_3), value);
	}
};

struct SerializationCallbacks_t414149290_StaticFields
{
public:
	// System.Collections.Hashtable System.Runtime.Serialization.SerializationCallbacks::cache
	Hashtable_t1579358919 * ___cache_4;
	// System.Object System.Runtime.Serialization.SerializationCallbacks::cache_lock
	RuntimeObject * ___cache_lock_5;

public:
	inline static int32_t get_offset_of_cache_4() { return static_cast<int32_t>(offsetof(SerializationCallbacks_t414149290_StaticFields, ___cache_4)); }
	inline Hashtable_t1579358919 * get_cache_4() const { return ___cache_4; }
	inline Hashtable_t1579358919 ** get_address_of_cache_4() { return &___cache_4; }
	inline void set_cache_4(Hashtable_t1579358919 * value)
	{
		___cache_4 = value;
		Il2CppCodeGenWriteBarrier((&___cache_4), value);
	}

	inline static int32_t get_offset_of_cache_lock_5() { return static_cast<int32_t>(offsetof(SerializationCallbacks_t414149290_StaticFields, ___cache_lock_5)); }
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
#endif // SERIALIZATIONCALLBACKS_T414149290_H
#ifndef SERIALIZATIONINFO_T885769560_H
#define SERIALIZATIONINFO_T885769560_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.SerializationInfo
struct  SerializationInfo_t885769560  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Runtime.Serialization.SerializationInfo::serialized
	Hashtable_t1579358919 * ___serialized_0;
	// System.Collections.ArrayList System.Runtime.Serialization.SerializationInfo::values
	ArrayList_t1004296020 * ___values_1;
	// System.String System.Runtime.Serialization.SerializationInfo::assemblyName
	String_t* ___assemblyName_2;
	// System.String System.Runtime.Serialization.SerializationInfo::fullTypeName
	String_t* ___fullTypeName_3;
	// System.Runtime.Serialization.IFormatterConverter System.Runtime.Serialization.SerializationInfo::converter
	RuntimeObject* ___converter_4;

public:
	inline static int32_t get_offset_of_serialized_0() { return static_cast<int32_t>(offsetof(SerializationInfo_t885769560, ___serialized_0)); }
	inline Hashtable_t1579358919 * get_serialized_0() const { return ___serialized_0; }
	inline Hashtable_t1579358919 ** get_address_of_serialized_0() { return &___serialized_0; }
	inline void set_serialized_0(Hashtable_t1579358919 * value)
	{
		___serialized_0 = value;
		Il2CppCodeGenWriteBarrier((&___serialized_0), value);
	}

	inline static int32_t get_offset_of_values_1() { return static_cast<int32_t>(offsetof(SerializationInfo_t885769560, ___values_1)); }
	inline ArrayList_t1004296020 * get_values_1() const { return ___values_1; }
	inline ArrayList_t1004296020 ** get_address_of_values_1() { return &___values_1; }
	inline void set_values_1(ArrayList_t1004296020 * value)
	{
		___values_1 = value;
		Il2CppCodeGenWriteBarrier((&___values_1), value);
	}

	inline static int32_t get_offset_of_assemblyName_2() { return static_cast<int32_t>(offsetof(SerializationInfo_t885769560, ___assemblyName_2)); }
	inline String_t* get_assemblyName_2() const { return ___assemblyName_2; }
	inline String_t** get_address_of_assemblyName_2() { return &___assemblyName_2; }
	inline void set_assemblyName_2(String_t* value)
	{
		___assemblyName_2 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyName_2), value);
	}

	inline static int32_t get_offset_of_fullTypeName_3() { return static_cast<int32_t>(offsetof(SerializationInfo_t885769560, ___fullTypeName_3)); }
	inline String_t* get_fullTypeName_3() const { return ___fullTypeName_3; }
	inline String_t** get_address_of_fullTypeName_3() { return &___fullTypeName_3; }
	inline void set_fullTypeName_3(String_t* value)
	{
		___fullTypeName_3 = value;
		Il2CppCodeGenWriteBarrier((&___fullTypeName_3), value);
	}

	inline static int32_t get_offset_of_converter_4() { return static_cast<int32_t>(offsetof(SerializationInfo_t885769560, ___converter_4)); }
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
#endif // SERIALIZATIONINFO_T885769560_H
#ifndef SERIALIZATIONINFOENUMERATOR_T452831660_H
#define SERIALIZATIONINFOENUMERATOR_T452831660_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.SerializationInfoEnumerator
struct  SerializationInfoEnumerator_t452831660  : public RuntimeObject
{
public:
	// System.Collections.IEnumerator System.Runtime.Serialization.SerializationInfoEnumerator::enumerator
	RuntimeObject* ___enumerator_0;

public:
	inline static int32_t get_offset_of_enumerator_0() { return static_cast<int32_t>(offsetof(SerializationInfoEnumerator_t452831660, ___enumerator_0)); }
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
#endif // SERIALIZATIONINFOENUMERATOR_T452831660_H
#ifndef U3CREGISTEROBJECTU3EC__ANONSTOREY3_T1013927335_H
#define U3CREGISTEROBJECTU3EC__ANONSTOREY3_T1013927335_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.SerializationObjectManager/<RegisterObject>c__AnonStorey3
struct  U3CRegisterObjectU3Ec__AnonStorey3_t1013927335  : public RuntimeObject
{
public:
	// System.Runtime.Serialization.SerializationCallbacks System.Runtime.Serialization.SerializationObjectManager/<RegisterObject>c__AnonStorey3::sc
	SerializationCallbacks_t414149290 * ___sc_0;
	// System.Object System.Runtime.Serialization.SerializationObjectManager/<RegisterObject>c__AnonStorey3::obj
	RuntimeObject * ___obj_1;

public:
	inline static int32_t get_offset_of_sc_0() { return static_cast<int32_t>(offsetof(U3CRegisterObjectU3Ec__AnonStorey3_t1013927335, ___sc_0)); }
	inline SerializationCallbacks_t414149290 * get_sc_0() const { return ___sc_0; }
	inline SerializationCallbacks_t414149290 ** get_address_of_sc_0() { return &___sc_0; }
	inline void set_sc_0(SerializationCallbacks_t414149290 * value)
	{
		___sc_0 = value;
		Il2CppCodeGenWriteBarrier((&___sc_0), value);
	}

	inline static int32_t get_offset_of_obj_1() { return static_cast<int32_t>(offsetof(U3CRegisterObjectU3Ec__AnonStorey3_t1013927335, ___obj_1)); }
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
#endif // U3CREGISTEROBJECTU3EC__ANONSTOREY3_T1013927335_H
#ifndef X509CERTIFICATE_T1114503308_H
#define X509CERTIFICATE_T1114503308_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509Certificate
struct  X509Certificate_t1114503308  : public RuntimeObject
{
public:
	// Mono.Security.X509.X509Certificate System.Security.Cryptography.X509Certificates.X509Certificate::x509
	X509Certificate_t2462750002 * ___x509_0;
	// System.Boolean System.Security.Cryptography.X509Certificates.X509Certificate::hideDates
	bool ___hideDates_1;
	// System.Byte[] System.Security.Cryptography.X509Certificates.X509Certificate::cachedCertificateHash
	ByteU5BU5D_t3990433866* ___cachedCertificateHash_2;
	// System.String System.Security.Cryptography.X509Certificates.X509Certificate::issuer_name
	String_t* ___issuer_name_3;
	// System.String System.Security.Cryptography.X509Certificates.X509Certificate::subject_name
	String_t* ___subject_name_4;

public:
	inline static int32_t get_offset_of_x509_0() { return static_cast<int32_t>(offsetof(X509Certificate_t1114503308, ___x509_0)); }
	inline X509Certificate_t2462750002 * get_x509_0() const { return ___x509_0; }
	inline X509Certificate_t2462750002 ** get_address_of_x509_0() { return &___x509_0; }
	inline void set_x509_0(X509Certificate_t2462750002 * value)
	{
		___x509_0 = value;
		Il2CppCodeGenWriteBarrier((&___x509_0), value);
	}

	inline static int32_t get_offset_of_hideDates_1() { return static_cast<int32_t>(offsetof(X509Certificate_t1114503308, ___hideDates_1)); }
	inline bool get_hideDates_1() const { return ___hideDates_1; }
	inline bool* get_address_of_hideDates_1() { return &___hideDates_1; }
	inline void set_hideDates_1(bool value)
	{
		___hideDates_1 = value;
	}

	inline static int32_t get_offset_of_cachedCertificateHash_2() { return static_cast<int32_t>(offsetof(X509Certificate_t1114503308, ___cachedCertificateHash_2)); }
	inline ByteU5BU5D_t3990433866* get_cachedCertificateHash_2() const { return ___cachedCertificateHash_2; }
	inline ByteU5BU5D_t3990433866** get_address_of_cachedCertificateHash_2() { return &___cachedCertificateHash_2; }
	inline void set_cachedCertificateHash_2(ByteU5BU5D_t3990433866* value)
	{
		___cachedCertificateHash_2 = value;
		Il2CppCodeGenWriteBarrier((&___cachedCertificateHash_2), value);
	}

	inline static int32_t get_offset_of_issuer_name_3() { return static_cast<int32_t>(offsetof(X509Certificate_t1114503308, ___issuer_name_3)); }
	inline String_t* get_issuer_name_3() const { return ___issuer_name_3; }
	inline String_t** get_address_of_issuer_name_3() { return &___issuer_name_3; }
	inline void set_issuer_name_3(String_t* value)
	{
		___issuer_name_3 = value;
		Il2CppCodeGenWriteBarrier((&___issuer_name_3), value);
	}

	inline static int32_t get_offset_of_subject_name_4() { return static_cast<int32_t>(offsetof(X509Certificate_t1114503308, ___subject_name_4)); }
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
#endif // X509CERTIFICATE_T1114503308_H
#ifndef ASYMMETRICALGORITHM_T2026083050_H
#define ASYMMETRICALGORITHM_T2026083050_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsymmetricAlgorithm
struct  AsymmetricAlgorithm_t2026083050  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.AsymmetricAlgorithm::KeySizeValue
	int32_t ___KeySizeValue_0;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.AsymmetricAlgorithm::LegalKeySizesValue
	KeySizesU5BU5D_t1660291574* ___LegalKeySizesValue_1;

public:
	inline static int32_t get_offset_of_KeySizeValue_0() { return static_cast<int32_t>(offsetof(AsymmetricAlgorithm_t2026083050, ___KeySizeValue_0)); }
	inline int32_t get_KeySizeValue_0() const { return ___KeySizeValue_0; }
	inline int32_t* get_address_of_KeySizeValue_0() { return &___KeySizeValue_0; }
	inline void set_KeySizeValue_0(int32_t value)
	{
		___KeySizeValue_0 = value;
	}

	inline static int32_t get_offset_of_LegalKeySizesValue_1() { return static_cast<int32_t>(offsetof(AsymmetricAlgorithm_t2026083050, ___LegalKeySizesValue_1)); }
	inline KeySizesU5BU5D_t1660291574* get_LegalKeySizesValue_1() const { return ___LegalKeySizesValue_1; }
	inline KeySizesU5BU5D_t1660291574** get_address_of_LegalKeySizesValue_1() { return &___LegalKeySizesValue_1; }
	inline void set_LegalKeySizesValue_1(KeySizesU5BU5D_t1660291574* value)
	{
		___LegalKeySizesValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___LegalKeySizesValue_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYMMETRICALGORITHM_T2026083050_H
#ifndef ASYMMETRICKEYEXCHANGEFORMATTER_T1045272896_H
#define ASYMMETRICKEYEXCHANGEFORMATTER_T1045272896_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsymmetricKeyExchangeFormatter
struct  AsymmetricKeyExchangeFormatter_t1045272896  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYMMETRICKEYEXCHANGEFORMATTER_T1045272896_H
#ifndef ASYMMETRICSIGNATUREDEFORMATTER_T1028763045_H
#define ASYMMETRICSIGNATUREDEFORMATTER_T1028763045_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsymmetricSignatureDeformatter
struct  AsymmetricSignatureDeformatter_t1028763045  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYMMETRICSIGNATUREDEFORMATTER_T1028763045_H
#ifndef BASE64CONSTANTS_T2407081531_H
#define BASE64CONSTANTS_T2407081531_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.Base64Constants
struct  Base64Constants_t2407081531  : public RuntimeObject
{
public:

public:
};

struct Base64Constants_t2407081531_StaticFields
{
public:
	// System.Byte[] System.Security.Cryptography.Base64Constants::EncodeTable
	ByteU5BU5D_t3990433866* ___EncodeTable_0;
	// System.Byte[] System.Security.Cryptography.Base64Constants::DecodeTable
	ByteU5BU5D_t3990433866* ___DecodeTable_1;

public:
	inline static int32_t get_offset_of_EncodeTable_0() { return static_cast<int32_t>(offsetof(Base64Constants_t2407081531_StaticFields, ___EncodeTable_0)); }
	inline ByteU5BU5D_t3990433866* get_EncodeTable_0() const { return ___EncodeTable_0; }
	inline ByteU5BU5D_t3990433866** get_address_of_EncodeTable_0() { return &___EncodeTable_0; }
	inline void set_EncodeTable_0(ByteU5BU5D_t3990433866* value)
	{
		___EncodeTable_0 = value;
		Il2CppCodeGenWriteBarrier((&___EncodeTable_0), value);
	}

	inline static int32_t get_offset_of_DecodeTable_1() { return static_cast<int32_t>(offsetof(Base64Constants_t2407081531_StaticFields, ___DecodeTable_1)); }
	inline ByteU5BU5D_t3990433866* get_DecodeTable_1() const { return ___DecodeTable_1; }
	inline ByteU5BU5D_t3990433866** get_address_of_DecodeTable_1() { return &___DecodeTable_1; }
	inline void set_DecodeTable_1(ByteU5BU5D_t3990433866* value)
	{
		___DecodeTable_1 = value;
		Il2CppCodeGenWriteBarrier((&___DecodeTable_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASE64CONSTANTS_T2407081531_H
#ifndef CRYPTOCONFIG_T958348870_H
#define CRYPTOCONFIG_T958348870_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CryptoConfig
struct  CryptoConfig_t958348870  : public RuntimeObject
{
public:

public:
};

struct CryptoConfig_t958348870_StaticFields
{
public:
	// System.Object System.Security.Cryptography.CryptoConfig::lockObject
	RuntimeObject * ___lockObject_0;
	// System.Collections.Hashtable System.Security.Cryptography.CryptoConfig::algorithms
	Hashtable_t1579358919 * ___algorithms_1;
	// System.Collections.Hashtable System.Security.Cryptography.CryptoConfig::oid
	Hashtable_t1579358919 * ___oid_2;

public:
	inline static int32_t get_offset_of_lockObject_0() { return static_cast<int32_t>(offsetof(CryptoConfig_t958348870_StaticFields, ___lockObject_0)); }
	inline RuntimeObject * get_lockObject_0() const { return ___lockObject_0; }
	inline RuntimeObject ** get_address_of_lockObject_0() { return &___lockObject_0; }
	inline void set_lockObject_0(RuntimeObject * value)
	{
		___lockObject_0 = value;
		Il2CppCodeGenWriteBarrier((&___lockObject_0), value);
	}

	inline static int32_t get_offset_of_algorithms_1() { return static_cast<int32_t>(offsetof(CryptoConfig_t958348870_StaticFields, ___algorithms_1)); }
	inline Hashtable_t1579358919 * get_algorithms_1() const { return ___algorithms_1; }
	inline Hashtable_t1579358919 ** get_address_of_algorithms_1() { return &___algorithms_1; }
	inline void set_algorithms_1(Hashtable_t1579358919 * value)
	{
		___algorithms_1 = value;
		Il2CppCodeGenWriteBarrier((&___algorithms_1), value);
	}

	inline static int32_t get_offset_of_oid_2() { return static_cast<int32_t>(offsetof(CryptoConfig_t958348870_StaticFields, ___oid_2)); }
	inline Hashtable_t1579358919 * get_oid_2() const { return ___oid_2; }
	inline Hashtable_t1579358919 ** get_address_of_oid_2() { return &___oid_2; }
	inline void set_oid_2(Hashtable_t1579358919 * value)
	{
		___oid_2 = value;
		Il2CppCodeGenWriteBarrier((&___oid_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRYPTOCONFIG_T958348870_H
#ifndef HASHALGORITHM_T3280178693_H
#define HASHALGORITHM_T3280178693_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HashAlgorithm
struct  HashAlgorithm_t3280178693  : public RuntimeObject
{
public:
	// System.Byte[] System.Security.Cryptography.HashAlgorithm::HashValue
	ByteU5BU5D_t3990433866* ___HashValue_0;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::HashSizeValue
	int32_t ___HashSizeValue_1;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::State
	int32_t ___State_2;
	// System.Boolean System.Security.Cryptography.HashAlgorithm::disposed
	bool ___disposed_3;

public:
	inline static int32_t get_offset_of_HashValue_0() { return static_cast<int32_t>(offsetof(HashAlgorithm_t3280178693, ___HashValue_0)); }
	inline ByteU5BU5D_t3990433866* get_HashValue_0() const { return ___HashValue_0; }
	inline ByteU5BU5D_t3990433866** get_address_of_HashValue_0() { return &___HashValue_0; }
	inline void set_HashValue_0(ByteU5BU5D_t3990433866* value)
	{
		___HashValue_0 = value;
		Il2CppCodeGenWriteBarrier((&___HashValue_0), value);
	}

	inline static int32_t get_offset_of_HashSizeValue_1() { return static_cast<int32_t>(offsetof(HashAlgorithm_t3280178693, ___HashSizeValue_1)); }
	inline int32_t get_HashSizeValue_1() const { return ___HashSizeValue_1; }
	inline int32_t* get_address_of_HashSizeValue_1() { return &___HashSizeValue_1; }
	inline void set_HashSizeValue_1(int32_t value)
	{
		___HashSizeValue_1 = value;
	}

	inline static int32_t get_offset_of_State_2() { return static_cast<int32_t>(offsetof(HashAlgorithm_t3280178693, ___State_2)); }
	inline int32_t get_State_2() const { return ___State_2; }
	inline int32_t* get_address_of_State_2() { return &___State_2; }
	inline void set_State_2(int32_t value)
	{
		___State_2 = value;
	}

	inline static int32_t get_offset_of_disposed_3() { return static_cast<int32_t>(offsetof(HashAlgorithm_t3280178693, ___disposed_3)); }
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
#endif // HASHALGORITHM_T3280178693_H
#ifndef KEYSIZES_T1931695983_H
#define KEYSIZES_T1931695983_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.KeySizes
struct  KeySizes_t1931695983  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.KeySizes::_maxSize
	int32_t ____maxSize_0;
	// System.Int32 System.Security.Cryptography.KeySizes::_minSize
	int32_t ____minSize_1;
	// System.Int32 System.Security.Cryptography.KeySizes::_skipSize
	int32_t ____skipSize_2;

public:
	inline static int32_t get_offset_of__maxSize_0() { return static_cast<int32_t>(offsetof(KeySizes_t1931695983, ____maxSize_0)); }
	inline int32_t get__maxSize_0() const { return ____maxSize_0; }
	inline int32_t* get_address_of__maxSize_0() { return &____maxSize_0; }
	inline void set__maxSize_0(int32_t value)
	{
		____maxSize_0 = value;
	}

	inline static int32_t get_offset_of__minSize_1() { return static_cast<int32_t>(offsetof(KeySizes_t1931695983, ____minSize_1)); }
	inline int32_t get__minSize_1() const { return ____minSize_1; }
	inline int32_t* get_address_of__minSize_1() { return &____minSize_1; }
	inline void set__minSize_1(int32_t value)
	{
		____minSize_1 = value;
	}

	inline static int32_t get_offset_of__skipSize_2() { return static_cast<int32_t>(offsetof(KeySizes_t1931695983, ____skipSize_2)); }
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
#endif // KEYSIZES_T1931695983_H
#ifndef TYPEENTRY_T2395194071_H
#define TYPEENTRY_T2395194071_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.TypeEntry
struct  TypeEntry_t2395194071  : public RuntimeObject
{
public:
	// System.String System.Runtime.Remoting.TypeEntry::assembly_name
	String_t* ___assembly_name_0;
	// System.String System.Runtime.Remoting.TypeEntry::type_name
	String_t* ___type_name_1;

public:
	inline static int32_t get_offset_of_assembly_name_0() { return static_cast<int32_t>(offsetof(TypeEntry_t2395194071, ___assembly_name_0)); }
	inline String_t* get_assembly_name_0() const { return ___assembly_name_0; }
	inline String_t** get_address_of_assembly_name_0() { return &___assembly_name_0; }
	inline void set_assembly_name_0(String_t* value)
	{
		___assembly_name_0 = value;
		Il2CppCodeGenWriteBarrier((&___assembly_name_0), value);
	}

	inline static int32_t get_offset_of_type_name_1() { return static_cast<int32_t>(offsetof(TypeEntry_t2395194071, ___type_name_1)); }
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
#endif // TYPEENTRY_T2395194071_H
#ifndef ATTRIBUTE_T1176385794_H
#define ATTRIBUTE_T1176385794_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t1176385794  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T1176385794_H
#ifndef VALUETYPE_T3939321559_H
#define VALUETYPE_T3939321559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3939321559  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3939321559_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3939321559_marshaled_com
{
};
#endif // VALUETYPE_T3939321559_H
#ifndef SYMMETRICTRANSFORM_T1418834688_H
#define SYMMETRICTRANSFORM_T1418834688_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.SymmetricTransform
struct  SymmetricTransform_t1418834688  : public RuntimeObject
{
public:
	// System.Security.Cryptography.SymmetricAlgorithm Mono.Security.Cryptography.SymmetricTransform::algo
	SymmetricAlgorithm_t1498077059 * ___algo_0;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::encrypt
	bool ___encrypt_1;
	// System.Int32 Mono.Security.Cryptography.SymmetricTransform::BlockSizeByte
	int32_t ___BlockSizeByte_2;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::temp
	ByteU5BU5D_t3990433866* ___temp_3;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::temp2
	ByteU5BU5D_t3990433866* ___temp2_4;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::workBuff
	ByteU5BU5D_t3990433866* ___workBuff_5;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::workout
	ByteU5BU5D_t3990433866* ___workout_6;
	// System.Int32 Mono.Security.Cryptography.SymmetricTransform::FeedBackByte
	int32_t ___FeedBackByte_7;
	// System.Int32 Mono.Security.Cryptography.SymmetricTransform::FeedBackIter
	int32_t ___FeedBackIter_8;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::m_disposed
	bool ___m_disposed_9;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::lastBlock
	bool ___lastBlock_10;
	// System.Security.Cryptography.RandomNumberGenerator Mono.Security.Cryptography.SymmetricTransform::_rng
	RandomNumberGenerator_t4293320709 * ____rng_11;

public:
	inline static int32_t get_offset_of_algo_0() { return static_cast<int32_t>(offsetof(SymmetricTransform_t1418834688, ___algo_0)); }
	inline SymmetricAlgorithm_t1498077059 * get_algo_0() const { return ___algo_0; }
	inline SymmetricAlgorithm_t1498077059 ** get_address_of_algo_0() { return &___algo_0; }
	inline void set_algo_0(SymmetricAlgorithm_t1498077059 * value)
	{
		___algo_0 = value;
		Il2CppCodeGenWriteBarrier((&___algo_0), value);
	}

	inline static int32_t get_offset_of_encrypt_1() { return static_cast<int32_t>(offsetof(SymmetricTransform_t1418834688, ___encrypt_1)); }
	inline bool get_encrypt_1() const { return ___encrypt_1; }
	inline bool* get_address_of_encrypt_1() { return &___encrypt_1; }
	inline void set_encrypt_1(bool value)
	{
		___encrypt_1 = value;
	}

	inline static int32_t get_offset_of_BlockSizeByte_2() { return static_cast<int32_t>(offsetof(SymmetricTransform_t1418834688, ___BlockSizeByte_2)); }
	inline int32_t get_BlockSizeByte_2() const { return ___BlockSizeByte_2; }
	inline int32_t* get_address_of_BlockSizeByte_2() { return &___BlockSizeByte_2; }
	inline void set_BlockSizeByte_2(int32_t value)
	{
		___BlockSizeByte_2 = value;
	}

	inline static int32_t get_offset_of_temp_3() { return static_cast<int32_t>(offsetof(SymmetricTransform_t1418834688, ___temp_3)); }
	inline ByteU5BU5D_t3990433866* get_temp_3() const { return ___temp_3; }
	inline ByteU5BU5D_t3990433866** get_address_of_temp_3() { return &___temp_3; }
	inline void set_temp_3(ByteU5BU5D_t3990433866* value)
	{
		___temp_3 = value;
		Il2CppCodeGenWriteBarrier((&___temp_3), value);
	}

	inline static int32_t get_offset_of_temp2_4() { return static_cast<int32_t>(offsetof(SymmetricTransform_t1418834688, ___temp2_4)); }
	inline ByteU5BU5D_t3990433866* get_temp2_4() const { return ___temp2_4; }
	inline ByteU5BU5D_t3990433866** get_address_of_temp2_4() { return &___temp2_4; }
	inline void set_temp2_4(ByteU5BU5D_t3990433866* value)
	{
		___temp2_4 = value;
		Il2CppCodeGenWriteBarrier((&___temp2_4), value);
	}

	inline static int32_t get_offset_of_workBuff_5() { return static_cast<int32_t>(offsetof(SymmetricTransform_t1418834688, ___workBuff_5)); }
	inline ByteU5BU5D_t3990433866* get_workBuff_5() const { return ___workBuff_5; }
	inline ByteU5BU5D_t3990433866** get_address_of_workBuff_5() { return &___workBuff_5; }
	inline void set_workBuff_5(ByteU5BU5D_t3990433866* value)
	{
		___workBuff_5 = value;
		Il2CppCodeGenWriteBarrier((&___workBuff_5), value);
	}

	inline static int32_t get_offset_of_workout_6() { return static_cast<int32_t>(offsetof(SymmetricTransform_t1418834688, ___workout_6)); }
	inline ByteU5BU5D_t3990433866* get_workout_6() const { return ___workout_6; }
	inline ByteU5BU5D_t3990433866** get_address_of_workout_6() { return &___workout_6; }
	inline void set_workout_6(ByteU5BU5D_t3990433866* value)
	{
		___workout_6 = value;
		Il2CppCodeGenWriteBarrier((&___workout_6), value);
	}

	inline static int32_t get_offset_of_FeedBackByte_7() { return static_cast<int32_t>(offsetof(SymmetricTransform_t1418834688, ___FeedBackByte_7)); }
	inline int32_t get_FeedBackByte_7() const { return ___FeedBackByte_7; }
	inline int32_t* get_address_of_FeedBackByte_7() { return &___FeedBackByte_7; }
	inline void set_FeedBackByte_7(int32_t value)
	{
		___FeedBackByte_7 = value;
	}

	inline static int32_t get_offset_of_FeedBackIter_8() { return static_cast<int32_t>(offsetof(SymmetricTransform_t1418834688, ___FeedBackIter_8)); }
	inline int32_t get_FeedBackIter_8() const { return ___FeedBackIter_8; }
	inline int32_t* get_address_of_FeedBackIter_8() { return &___FeedBackIter_8; }
	inline void set_FeedBackIter_8(int32_t value)
	{
		___FeedBackIter_8 = value;
	}

	inline static int32_t get_offset_of_m_disposed_9() { return static_cast<int32_t>(offsetof(SymmetricTransform_t1418834688, ___m_disposed_9)); }
	inline bool get_m_disposed_9() const { return ___m_disposed_9; }
	inline bool* get_address_of_m_disposed_9() { return &___m_disposed_9; }
	inline void set_m_disposed_9(bool value)
	{
		___m_disposed_9 = value;
	}

	inline static int32_t get_offset_of_lastBlock_10() { return static_cast<int32_t>(offsetof(SymmetricTransform_t1418834688, ___lastBlock_10)); }
	inline bool get_lastBlock_10() const { return ___lastBlock_10; }
	inline bool* get_address_of_lastBlock_10() { return &___lastBlock_10; }
	inline void set_lastBlock_10(bool value)
	{
		___lastBlock_10 = value;
	}

	inline static int32_t get_offset_of__rng_11() { return static_cast<int32_t>(offsetof(SymmetricTransform_t1418834688, ____rng_11)); }
	inline RandomNumberGenerator_t4293320709 * get__rng_11() const { return ____rng_11; }
	inline RandomNumberGenerator_t4293320709 ** get_address_of__rng_11() { return &____rng_11; }
	inline void set__rng_11(RandomNumberGenerator_t4293320709 * value)
	{
		____rng_11 = value;
		Il2CppCodeGenWriteBarrier((&____rng_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYMMETRICTRANSFORM_T1418834688_H
#ifndef RANDOMNUMBERGENERATOR_T4293320709_H
#define RANDOMNUMBERGENERATOR_T4293320709_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RandomNumberGenerator
struct  RandomNumberGenerator_t4293320709  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANDOMNUMBERGENERATOR_T4293320709_H
#ifndef INSTANCECOMPARER_T2244222394_H
#define INSTANCECOMPARER_T2244222394_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.ObjectIDGenerator/InstanceComparer
struct  InstanceComparer_t2244222394  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INSTANCECOMPARER_T2244222394_H
#ifndef OBJECTIDGENERATOR_T4215037785_H
#define OBJECTIDGENERATOR_T4215037785_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.ObjectIDGenerator
struct  ObjectIDGenerator_t4215037785  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Runtime.Serialization.ObjectIDGenerator::table
	Hashtable_t1579358919 * ___table_0;
	// System.Int64 System.Runtime.Serialization.ObjectIDGenerator::current
	int64_t ___current_1;

public:
	inline static int32_t get_offset_of_table_0() { return static_cast<int32_t>(offsetof(ObjectIDGenerator_t4215037785, ___table_0)); }
	inline Hashtable_t1579358919 * get_table_0() const { return ___table_0; }
	inline Hashtable_t1579358919 ** get_address_of_table_0() { return &___table_0; }
	inline void set_table_0(Hashtable_t1579358919 * value)
	{
		___table_0 = value;
		Il2CppCodeGenWriteBarrier((&___table_0), value);
	}

	inline static int32_t get_offset_of_current_1() { return static_cast<int32_t>(offsetof(ObjectIDGenerator_t4215037785, ___current_1)); }
	inline int64_t get_current_1() const { return ___current_1; }
	inline int64_t* get_address_of_current_1() { return &___current_1; }
	inline void set_current_1(int64_t value)
	{
		___current_1 = value;
	}
};

struct ObjectIDGenerator_t4215037785_StaticFields
{
public:
	// System.Runtime.Serialization.ObjectIDGenerator/InstanceComparer System.Runtime.Serialization.ObjectIDGenerator::comparer
	InstanceComparer_t2244222394 * ___comparer_2;

public:
	inline static int32_t get_offset_of_comparer_2() { return static_cast<int32_t>(offsetof(ObjectIDGenerator_t4215037785_StaticFields, ___comparer_2)); }
	inline InstanceComparer_t2244222394 * get_comparer_2() const { return ___comparer_2; }
	inline InstanceComparer_t2244222394 ** get_address_of_comparer_2() { return &___comparer_2; }
	inline void set_comparer_2(InstanceComparer_t2244222394 * value)
	{
		___comparer_2 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTIDGENERATOR_T4215037785_H
#ifndef EXCEPTION_T2696948762_H
#define EXCEPTION_T2696948762_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t2696948762  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t1958778070* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t2696948762 * ___inner_exception_1;
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
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t2696948762, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t1958778070* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t1958778070** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t1958778070* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t2696948762, ___inner_exception_1)); }
	inline Exception_t2696948762 * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t2696948762 ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t2696948762 * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t2696948762, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t2696948762, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t2696948762, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t2696948762, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t2696948762, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t2696948762, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t2696948762, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t2696948762, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t2696948762, ____data_10)); }
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
#endif // EXCEPTION_T2696948762_H
#ifndef FORMATTERCONVERTER_T3065389309_H
#define FORMATTERCONVERTER_T3065389309_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.FormatterConverter
struct  FormatterConverter_t3065389309  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORMATTERCONVERTER_T3065389309_H
#ifndef BINARYCOMMON_T3280615919_H
#define BINARYCOMMON_T3280615919_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.BinaryCommon
struct  BinaryCommon_t3280615919  : public RuntimeObject
{
public:

public:
};

struct BinaryCommon_t3280615919_StaticFields
{
public:
	// System.Byte[] System.Runtime.Serialization.Formatters.Binary.BinaryCommon::BinaryHeader
	ByteU5BU5D_t3990433866* ___BinaryHeader_0;
	// System.Type[] System.Runtime.Serialization.Formatters.Binary.BinaryCommon::_typeCodesToType
	TypeU5BU5D_t1290050658* ____typeCodesToType_1;
	// System.Byte[] System.Runtime.Serialization.Formatters.Binary.BinaryCommon::_typeCodeMap
	ByteU5BU5D_t3990433866* ____typeCodeMap_2;
	// System.Boolean System.Runtime.Serialization.Formatters.Binary.BinaryCommon::UseReflectionSerialization
	bool ___UseReflectionSerialization_3;

public:
	inline static int32_t get_offset_of_BinaryHeader_0() { return static_cast<int32_t>(offsetof(BinaryCommon_t3280615919_StaticFields, ___BinaryHeader_0)); }
	inline ByteU5BU5D_t3990433866* get_BinaryHeader_0() const { return ___BinaryHeader_0; }
	inline ByteU5BU5D_t3990433866** get_address_of_BinaryHeader_0() { return &___BinaryHeader_0; }
	inline void set_BinaryHeader_0(ByteU5BU5D_t3990433866* value)
	{
		___BinaryHeader_0 = value;
		Il2CppCodeGenWriteBarrier((&___BinaryHeader_0), value);
	}

	inline static int32_t get_offset_of__typeCodesToType_1() { return static_cast<int32_t>(offsetof(BinaryCommon_t3280615919_StaticFields, ____typeCodesToType_1)); }
	inline TypeU5BU5D_t1290050658* get__typeCodesToType_1() const { return ____typeCodesToType_1; }
	inline TypeU5BU5D_t1290050658** get_address_of__typeCodesToType_1() { return &____typeCodesToType_1; }
	inline void set__typeCodesToType_1(TypeU5BU5D_t1290050658* value)
	{
		____typeCodesToType_1 = value;
		Il2CppCodeGenWriteBarrier((&____typeCodesToType_1), value);
	}

	inline static int32_t get_offset_of__typeCodeMap_2() { return static_cast<int32_t>(offsetof(BinaryCommon_t3280615919_StaticFields, ____typeCodeMap_2)); }
	inline ByteU5BU5D_t3990433866* get__typeCodeMap_2() const { return ____typeCodeMap_2; }
	inline ByteU5BU5D_t3990433866** get_address_of__typeCodeMap_2() { return &____typeCodeMap_2; }
	inline void set__typeCodeMap_2(ByteU5BU5D_t3990433866* value)
	{
		____typeCodeMap_2 = value;
		Il2CppCodeGenWriteBarrier((&____typeCodeMap_2), value);
	}

	inline static int32_t get_offset_of_UseReflectionSerialization_3() { return static_cast<int32_t>(offsetof(BinaryCommon_t3280615919_StaticFields, ___UseReflectionSerialization_3)); }
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
#endif // BINARYCOMMON_T3280615919_H
#ifndef FORMATTERSERVICES_T531267777_H
#define FORMATTERSERVICES_T531267777_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.FormatterServices
struct  FormatterServices_t531267777  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORMATTERSERVICES_T531267777_H
#ifndef MESSAGEFORMATTER_T3352875929_H
#define MESSAGEFORMATTER_T3352875929_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.MessageFormatter
struct  MessageFormatter_t3352875929  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESSAGEFORMATTER_T3352875929_H
#ifndef CODEGENERATOR_T1797531779_H
#define CODEGENERATOR_T1797531779_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.CodeGenerator
struct  CodeGenerator_t1797531779  : public RuntimeObject
{
public:

public:
};

struct CodeGenerator_t1797531779_StaticFields
{
public:
	// System.Object System.Runtime.Serialization.Formatters.Binary.CodeGenerator::monitor
	RuntimeObject * ___monitor_0;
	// System.Reflection.Emit.ModuleBuilder System.Runtime.Serialization.Formatters.Binary.CodeGenerator::_module
	ModuleBuilder_t1182863580 * ____module_1;

public:
	inline static int32_t get_offset_of_monitor_0() { return static_cast<int32_t>(offsetof(CodeGenerator_t1797531779_StaticFields, ___monitor_0)); }
	inline RuntimeObject * get_monitor_0() const { return ___monitor_0; }
	inline RuntimeObject ** get_address_of_monitor_0() { return &___monitor_0; }
	inline void set_monitor_0(RuntimeObject * value)
	{
		___monitor_0 = value;
		Il2CppCodeGenWriteBarrier((&___monitor_0), value);
	}

	inline static int32_t get_offset_of__module_1() { return static_cast<int32_t>(offsetof(CodeGenerator_t1797531779_StaticFields, ____module_1)); }
	inline ModuleBuilder_t1182863580 * get__module_1() const { return ____module_1; }
	inline ModuleBuilder_t1182863580 ** get_address_of__module_1() { return &____module_1; }
	inline void set__module_1(ModuleBuilder_t1182863580 * value)
	{
		____module_1 = value;
		Il2CppCodeGenWriteBarrier((&____module_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CODEGENERATOR_T1797531779_H
#ifndef METADATAREFERENCE_T918723199_H
#define METADATAREFERENCE_T918723199_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.ObjectWriter/MetadataReference
struct  MetadataReference_t918723199  : public RuntimeObject
{
public:
	// System.Runtime.Serialization.Formatters.Binary.TypeMetadata System.Runtime.Serialization.Formatters.Binary.ObjectWriter/MetadataReference::Metadata
	TypeMetadata_t1172931145 * ___Metadata_0;
	// System.Int64 System.Runtime.Serialization.Formatters.Binary.ObjectWriter/MetadataReference::ObjectID
	int64_t ___ObjectID_1;

public:
	inline static int32_t get_offset_of_Metadata_0() { return static_cast<int32_t>(offsetof(MetadataReference_t918723199, ___Metadata_0)); }
	inline TypeMetadata_t1172931145 * get_Metadata_0() const { return ___Metadata_0; }
	inline TypeMetadata_t1172931145 ** get_address_of_Metadata_0() { return &___Metadata_0; }
	inline void set_Metadata_0(TypeMetadata_t1172931145 * value)
	{
		___Metadata_0 = value;
		Il2CppCodeGenWriteBarrier((&___Metadata_0), value);
	}

	inline static int32_t get_offset_of_ObjectID_1() { return static_cast<int32_t>(offsetof(MetadataReference_t918723199, ___ObjectID_1)); }
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
#endif // METADATAREFERENCE_T918723199_H
#ifndef TYPEMETADATA_T3407038213_H
#define TYPEMETADATA_T3407038213_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.ObjectReader/TypeMetadata
struct  TypeMetadata_t3407038213  : public RuntimeObject
{
public:
	// System.Type System.Runtime.Serialization.Formatters.Binary.ObjectReader/TypeMetadata::Type
	Type_t * ___Type_0;
	// System.Type[] System.Runtime.Serialization.Formatters.Binary.ObjectReader/TypeMetadata::MemberTypes
	TypeU5BU5D_t1290050658* ___MemberTypes_1;
	// System.String[] System.Runtime.Serialization.Formatters.Binary.ObjectReader/TypeMetadata::MemberNames
	StringU5BU5D_t3517288861* ___MemberNames_2;
	// System.Reflection.MemberInfo[] System.Runtime.Serialization.Formatters.Binary.ObjectReader/TypeMetadata::MemberInfos
	MemberInfoU5BU5D_t2676182984* ___MemberInfos_3;
	// System.Int32 System.Runtime.Serialization.Formatters.Binary.ObjectReader/TypeMetadata::FieldCount
	int32_t ___FieldCount_4;
	// System.Boolean System.Runtime.Serialization.Formatters.Binary.ObjectReader/TypeMetadata::NeedsSerializationInfo
	bool ___NeedsSerializationInfo_5;

public:
	inline static int32_t get_offset_of_Type_0() { return static_cast<int32_t>(offsetof(TypeMetadata_t3407038213, ___Type_0)); }
	inline Type_t * get_Type_0() const { return ___Type_0; }
	inline Type_t ** get_address_of_Type_0() { return &___Type_0; }
	inline void set_Type_0(Type_t * value)
	{
		___Type_0 = value;
		Il2CppCodeGenWriteBarrier((&___Type_0), value);
	}

	inline static int32_t get_offset_of_MemberTypes_1() { return static_cast<int32_t>(offsetof(TypeMetadata_t3407038213, ___MemberTypes_1)); }
	inline TypeU5BU5D_t1290050658* get_MemberTypes_1() const { return ___MemberTypes_1; }
	inline TypeU5BU5D_t1290050658** get_address_of_MemberTypes_1() { return &___MemberTypes_1; }
	inline void set_MemberTypes_1(TypeU5BU5D_t1290050658* value)
	{
		___MemberTypes_1 = value;
		Il2CppCodeGenWriteBarrier((&___MemberTypes_1), value);
	}

	inline static int32_t get_offset_of_MemberNames_2() { return static_cast<int32_t>(offsetof(TypeMetadata_t3407038213, ___MemberNames_2)); }
	inline StringU5BU5D_t3517288861* get_MemberNames_2() const { return ___MemberNames_2; }
	inline StringU5BU5D_t3517288861** get_address_of_MemberNames_2() { return &___MemberNames_2; }
	inline void set_MemberNames_2(StringU5BU5D_t3517288861* value)
	{
		___MemberNames_2 = value;
		Il2CppCodeGenWriteBarrier((&___MemberNames_2), value);
	}

	inline static int32_t get_offset_of_MemberInfos_3() { return static_cast<int32_t>(offsetof(TypeMetadata_t3407038213, ___MemberInfos_3)); }
	inline MemberInfoU5BU5D_t2676182984* get_MemberInfos_3() const { return ___MemberInfos_3; }
	inline MemberInfoU5BU5D_t2676182984** get_address_of_MemberInfos_3() { return &___MemberInfos_3; }
	inline void set_MemberInfos_3(MemberInfoU5BU5D_t2676182984* value)
	{
		___MemberInfos_3 = value;
		Il2CppCodeGenWriteBarrier((&___MemberInfos_3), value);
	}

	inline static int32_t get_offset_of_FieldCount_4() { return static_cast<int32_t>(offsetof(TypeMetadata_t3407038213, ___FieldCount_4)); }
	inline int32_t get_FieldCount_4() const { return ___FieldCount_4; }
	inline int32_t* get_address_of_FieldCount_4() { return &___FieldCount_4; }
	inline void set_FieldCount_4(int32_t value)
	{
		___FieldCount_4 = value;
	}

	inline static int32_t get_offset_of_NeedsSerializationInfo_5() { return static_cast<int32_t>(offsetof(TypeMetadata_t3407038213, ___NeedsSerializationInfo_5)); }
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
#endif // TYPEMETADATA_T3407038213_H
#ifndef TYPEMETADATA_T1172931145_H
#define TYPEMETADATA_T1172931145_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.TypeMetadata
struct  TypeMetadata_t1172931145  : public RuntimeObject
{
public:
	// System.String System.Runtime.Serialization.Formatters.Binary.TypeMetadata::TypeAssemblyName
	String_t* ___TypeAssemblyName_0;
	// System.String System.Runtime.Serialization.Formatters.Binary.TypeMetadata::InstanceTypeName
	String_t* ___InstanceTypeName_1;

public:
	inline static int32_t get_offset_of_TypeAssemblyName_0() { return static_cast<int32_t>(offsetof(TypeMetadata_t1172931145, ___TypeAssemblyName_0)); }
	inline String_t* get_TypeAssemblyName_0() const { return ___TypeAssemblyName_0; }
	inline String_t** get_address_of_TypeAssemblyName_0() { return &___TypeAssemblyName_0; }
	inline void set_TypeAssemblyName_0(String_t* value)
	{
		___TypeAssemblyName_0 = value;
		Il2CppCodeGenWriteBarrier((&___TypeAssemblyName_0), value);
	}

	inline static int32_t get_offset_of_InstanceTypeName_1() { return static_cast<int32_t>(offsetof(TypeMetadata_t1172931145, ___InstanceTypeName_1)); }
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
#endif // TYPEMETADATA_T1172931145_H
#ifndef ARRAYNULLFILLER_T863975317_H
#define ARRAYNULLFILLER_T863975317_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.ObjectReader/ArrayNullFiller
struct  ArrayNullFiller_t863975317  : public RuntimeObject
{
public:
	// System.Int32 System.Runtime.Serialization.Formatters.Binary.ObjectReader/ArrayNullFiller::NullCount
	int32_t ___NullCount_0;

public:
	inline static int32_t get_offset_of_NullCount_0() { return static_cast<int32_t>(offsetof(ArrayNullFiller_t863975317, ___NullCount_0)); }
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
#endif // ARRAYNULLFILLER_T863975317_H
#ifndef DSASIGNATUREDEFORMATTER_T193203522_H
#define DSASIGNATUREDEFORMATTER_T193203522_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DSASignatureDeformatter
struct  DSASignatureDeformatter_t193203522  : public AsymmetricSignatureDeformatter_t1028763045
{
public:
	// System.Security.Cryptography.DSA System.Security.Cryptography.DSASignatureDeformatter::dsa
	DSA_t3608348530 * ___dsa_0;

public:
	inline static int32_t get_offset_of_dsa_0() { return static_cast<int32_t>(offsetof(DSASignatureDeformatter_t193203522, ___dsa_0)); }
	inline DSA_t3608348530 * get_dsa_0() const { return ___dsa_0; }
	inline DSA_t3608348530 ** get_address_of_dsa_0() { return &___dsa_0; }
	inline void set_dsa_0(DSA_t3608348530 * value)
	{
		___dsa_0 = value;
		Il2CppCodeGenWriteBarrier((&___dsa_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DSASIGNATUREDEFORMATTER_T193203522_H
#ifndef SERIALIZABLETYPEMETADATA_T3367208329_H
#define SERIALIZABLETYPEMETADATA_T3367208329_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.SerializableTypeMetadata
struct  SerializableTypeMetadata_t3367208329  : public TypeMetadata_t1172931145
{
public:
	// System.Type[] System.Runtime.Serialization.Formatters.Binary.SerializableTypeMetadata::types
	TypeU5BU5D_t1290050658* ___types_2;
	// System.String[] System.Runtime.Serialization.Formatters.Binary.SerializableTypeMetadata::names
	StringU5BU5D_t3517288861* ___names_3;

public:
	inline static int32_t get_offset_of_types_2() { return static_cast<int32_t>(offsetof(SerializableTypeMetadata_t3367208329, ___types_2)); }
	inline TypeU5BU5D_t1290050658* get_types_2() const { return ___types_2; }
	inline TypeU5BU5D_t1290050658** get_address_of_types_2() { return &___types_2; }
	inline void set_types_2(TypeU5BU5D_t1290050658* value)
	{
		___types_2 = value;
		Il2CppCodeGenWriteBarrier((&___types_2), value);
	}

	inline static int32_t get_offset_of_names_3() { return static_cast<int32_t>(offsetof(SerializableTypeMetadata_t3367208329, ___names_3)); }
	inline StringU5BU5D_t3517288861* get_names_3() const { return ___names_3; }
	inline StringU5BU5D_t3517288861** get_address_of_names_3() { return &___names_3; }
	inline void set_names_3(StringU5BU5D_t3517288861* value)
	{
		___names_3 = value;
		Il2CppCodeGenWriteBarrier((&___names_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZABLETYPEMETADATA_T3367208329_H
#ifndef RIPEMD160_T627160908_H
#define RIPEMD160_T627160908_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RIPEMD160
struct  RIPEMD160_t627160908  : public HashAlgorithm_t3280178693
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIPEMD160_T627160908_H
#ifndef CLRTYPEMETADATA_T466399263_H
#define CLRTYPEMETADATA_T466399263_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.ClrTypeMetadata
struct  ClrTypeMetadata_t466399263  : public TypeMetadata_t1172931145
{
public:
	// System.Type System.Runtime.Serialization.Formatters.Binary.ClrTypeMetadata::InstanceType
	Type_t * ___InstanceType_2;

public:
	inline static int32_t get_offset_of_InstanceType_2() { return static_cast<int32_t>(offsetof(ClrTypeMetadata_t466399263, ___InstanceType_2)); }
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
#endif // CLRTYPEMETADATA_T466399263_H
#ifndef MD5_T2860866956_H
#define MD5_T2860866956_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.MD5
struct  MD5_t2860866956  : public HashAlgorithm_t3280178693
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MD5_T2860866956_H
#ifndef KEYEDHASHALGORITHM_T2326381028_H
#define KEYEDHASHALGORITHM_T2326381028_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.KeyedHashAlgorithm
struct  KeyedHashAlgorithm_t2326381028  : public HashAlgorithm_t3280178693
{
public:
	// System.Byte[] System.Security.Cryptography.KeyedHashAlgorithm::KeyValue
	ByteU5BU5D_t3990433866* ___KeyValue_4;

public:
	inline static int32_t get_offset_of_KeyValue_4() { return static_cast<int32_t>(offsetof(KeyedHashAlgorithm_t2326381028, ___KeyValue_4)); }
	inline ByteU5BU5D_t3990433866* get_KeyValue_4() const { return ___KeyValue_4; }
	inline ByteU5BU5D_t3990433866** get_address_of_KeyValue_4() { return &___KeyValue_4; }
	inline void set_KeyValue_4(ByteU5BU5D_t3990433866* value)
	{
		___KeyValue_4 = value;
		Il2CppCodeGenWriteBarrier((&___KeyValue_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYEDHASHALGORITHM_T2326381028_H
#ifndef DESTRANSFORM_T3265887847_H
#define DESTRANSFORM_T3265887847_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DESTransform
struct  DESTransform_t3265887847  : public SymmetricTransform_t1418834688
{
public:
	// System.Byte[] System.Security.Cryptography.DESTransform::keySchedule
	ByteU5BU5D_t3990433866* ___keySchedule_16;
	// System.Byte[] System.Security.Cryptography.DESTransform::byteBuff
	ByteU5BU5D_t3990433866* ___byteBuff_17;
	// System.UInt32[] System.Security.Cryptography.DESTransform::dwordBuff
	UInt32U5BU5D_t2763435308* ___dwordBuff_18;

public:
	inline static int32_t get_offset_of_keySchedule_16() { return static_cast<int32_t>(offsetof(DESTransform_t3265887847, ___keySchedule_16)); }
	inline ByteU5BU5D_t3990433866* get_keySchedule_16() const { return ___keySchedule_16; }
	inline ByteU5BU5D_t3990433866** get_address_of_keySchedule_16() { return &___keySchedule_16; }
	inline void set_keySchedule_16(ByteU5BU5D_t3990433866* value)
	{
		___keySchedule_16 = value;
		Il2CppCodeGenWriteBarrier((&___keySchedule_16), value);
	}

	inline static int32_t get_offset_of_byteBuff_17() { return static_cast<int32_t>(offsetof(DESTransform_t3265887847, ___byteBuff_17)); }
	inline ByteU5BU5D_t3990433866* get_byteBuff_17() const { return ___byteBuff_17; }
	inline ByteU5BU5D_t3990433866** get_address_of_byteBuff_17() { return &___byteBuff_17; }
	inline void set_byteBuff_17(ByteU5BU5D_t3990433866* value)
	{
		___byteBuff_17 = value;
		Il2CppCodeGenWriteBarrier((&___byteBuff_17), value);
	}

	inline static int32_t get_offset_of_dwordBuff_18() { return static_cast<int32_t>(offsetof(DESTransform_t3265887847, ___dwordBuff_18)); }
	inline UInt32U5BU5D_t2763435308* get_dwordBuff_18() const { return ___dwordBuff_18; }
	inline UInt32U5BU5D_t2763435308** get_address_of_dwordBuff_18() { return &___dwordBuff_18; }
	inline void set_dwordBuff_18(UInt32U5BU5D_t2763435308* value)
	{
		___dwordBuff_18 = value;
		Il2CppCodeGenWriteBarrier((&___dwordBuff_18), value);
	}
};

struct DESTransform_t3265887847_StaticFields
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
	UInt32U5BU5D_t2763435308* ___spBoxes_19;
	// System.Byte[] System.Security.Cryptography.DESTransform::PC1
	ByteU5BU5D_t3990433866* ___PC1_20;
	// System.Byte[] System.Security.Cryptography.DESTransform::leftRotTotal
	ByteU5BU5D_t3990433866* ___leftRotTotal_21;
	// System.Byte[] System.Security.Cryptography.DESTransform::PC2
	ByteU5BU5D_t3990433866* ___PC2_22;
	// System.UInt32[] System.Security.Cryptography.DESTransform::ipTab
	UInt32U5BU5D_t2763435308* ___ipTab_23;
	// System.UInt32[] System.Security.Cryptography.DESTransform::fpTab
	UInt32U5BU5D_t2763435308* ___fpTab_24;

public:
	inline static int32_t get_offset_of_KEY_BIT_SIZE_12() { return static_cast<int32_t>(offsetof(DESTransform_t3265887847_StaticFields, ___KEY_BIT_SIZE_12)); }
	inline int32_t get_KEY_BIT_SIZE_12() const { return ___KEY_BIT_SIZE_12; }
	inline int32_t* get_address_of_KEY_BIT_SIZE_12() { return &___KEY_BIT_SIZE_12; }
	inline void set_KEY_BIT_SIZE_12(int32_t value)
	{
		___KEY_BIT_SIZE_12 = value;
	}

	inline static int32_t get_offset_of_KEY_BYTE_SIZE_13() { return static_cast<int32_t>(offsetof(DESTransform_t3265887847_StaticFields, ___KEY_BYTE_SIZE_13)); }
	inline int32_t get_KEY_BYTE_SIZE_13() const { return ___KEY_BYTE_SIZE_13; }
	inline int32_t* get_address_of_KEY_BYTE_SIZE_13() { return &___KEY_BYTE_SIZE_13; }
	inline void set_KEY_BYTE_SIZE_13(int32_t value)
	{
		___KEY_BYTE_SIZE_13 = value;
	}

	inline static int32_t get_offset_of_BLOCK_BIT_SIZE_14() { return static_cast<int32_t>(offsetof(DESTransform_t3265887847_StaticFields, ___BLOCK_BIT_SIZE_14)); }
	inline int32_t get_BLOCK_BIT_SIZE_14() const { return ___BLOCK_BIT_SIZE_14; }
	inline int32_t* get_address_of_BLOCK_BIT_SIZE_14() { return &___BLOCK_BIT_SIZE_14; }
	inline void set_BLOCK_BIT_SIZE_14(int32_t value)
	{
		___BLOCK_BIT_SIZE_14 = value;
	}

	inline static int32_t get_offset_of_BLOCK_BYTE_SIZE_15() { return static_cast<int32_t>(offsetof(DESTransform_t3265887847_StaticFields, ___BLOCK_BYTE_SIZE_15)); }
	inline int32_t get_BLOCK_BYTE_SIZE_15() const { return ___BLOCK_BYTE_SIZE_15; }
	inline int32_t* get_address_of_BLOCK_BYTE_SIZE_15() { return &___BLOCK_BYTE_SIZE_15; }
	inline void set_BLOCK_BYTE_SIZE_15(int32_t value)
	{
		___BLOCK_BYTE_SIZE_15 = value;
	}

	inline static int32_t get_offset_of_spBoxes_19() { return static_cast<int32_t>(offsetof(DESTransform_t3265887847_StaticFields, ___spBoxes_19)); }
	inline UInt32U5BU5D_t2763435308* get_spBoxes_19() const { return ___spBoxes_19; }
	inline UInt32U5BU5D_t2763435308** get_address_of_spBoxes_19() { return &___spBoxes_19; }
	inline void set_spBoxes_19(UInt32U5BU5D_t2763435308* value)
	{
		___spBoxes_19 = value;
		Il2CppCodeGenWriteBarrier((&___spBoxes_19), value);
	}

	inline static int32_t get_offset_of_PC1_20() { return static_cast<int32_t>(offsetof(DESTransform_t3265887847_StaticFields, ___PC1_20)); }
	inline ByteU5BU5D_t3990433866* get_PC1_20() const { return ___PC1_20; }
	inline ByteU5BU5D_t3990433866** get_address_of_PC1_20() { return &___PC1_20; }
	inline void set_PC1_20(ByteU5BU5D_t3990433866* value)
	{
		___PC1_20 = value;
		Il2CppCodeGenWriteBarrier((&___PC1_20), value);
	}

	inline static int32_t get_offset_of_leftRotTotal_21() { return static_cast<int32_t>(offsetof(DESTransform_t3265887847_StaticFields, ___leftRotTotal_21)); }
	inline ByteU5BU5D_t3990433866* get_leftRotTotal_21() const { return ___leftRotTotal_21; }
	inline ByteU5BU5D_t3990433866** get_address_of_leftRotTotal_21() { return &___leftRotTotal_21; }
	inline void set_leftRotTotal_21(ByteU5BU5D_t3990433866* value)
	{
		___leftRotTotal_21 = value;
		Il2CppCodeGenWriteBarrier((&___leftRotTotal_21), value);
	}

	inline static int32_t get_offset_of_PC2_22() { return static_cast<int32_t>(offsetof(DESTransform_t3265887847_StaticFields, ___PC2_22)); }
	inline ByteU5BU5D_t3990433866* get_PC2_22() const { return ___PC2_22; }
	inline ByteU5BU5D_t3990433866** get_address_of_PC2_22() { return &___PC2_22; }
	inline void set_PC2_22(ByteU5BU5D_t3990433866* value)
	{
		___PC2_22 = value;
		Il2CppCodeGenWriteBarrier((&___PC2_22), value);
	}

	inline static int32_t get_offset_of_ipTab_23() { return static_cast<int32_t>(offsetof(DESTransform_t3265887847_StaticFields, ___ipTab_23)); }
	inline UInt32U5BU5D_t2763435308* get_ipTab_23() const { return ___ipTab_23; }
	inline UInt32U5BU5D_t2763435308** get_address_of_ipTab_23() { return &___ipTab_23; }
	inline void set_ipTab_23(UInt32U5BU5D_t2763435308* value)
	{
		___ipTab_23 = value;
		Il2CppCodeGenWriteBarrier((&___ipTab_23), value);
	}

	inline static int32_t get_offset_of_fpTab_24() { return static_cast<int32_t>(offsetof(DESTransform_t3265887847_StaticFields, ___fpTab_24)); }
	inline UInt32U5BU5D_t2763435308* get_fpTab_24() const { return ___fpTab_24; }
	inline UInt32U5BU5D_t2763435308** get_address_of_fpTab_24() { return &___fpTab_24; }
	inline void set_fpTab_24(UInt32U5BU5D_t2763435308* value)
	{
		___fpTab_24 = value;
		Il2CppCodeGenWriteBarrier((&___fpTab_24), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESTRANSFORM_T3265887847_H
#ifndef DSA_T3608348530_H
#define DSA_T3608348530_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DSA
struct  DSA_t3608348530  : public AsymmetricAlgorithm_t2026083050
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DSA_T3608348530_H
#ifndef DSAPARAMETERS_T1046351410_H
#define DSAPARAMETERS_T1046351410_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DSAParameters
struct  DSAParameters_t1046351410 
{
public:
	// System.Int32 System.Security.Cryptography.DSAParameters::Counter
	int32_t ___Counter_0;
	// System.Byte[] System.Security.Cryptography.DSAParameters::G
	ByteU5BU5D_t3990433866* ___G_1;
	// System.Byte[] System.Security.Cryptography.DSAParameters::J
	ByteU5BU5D_t3990433866* ___J_2;
	// System.Byte[] System.Security.Cryptography.DSAParameters::P
	ByteU5BU5D_t3990433866* ___P_3;
	// System.Byte[] System.Security.Cryptography.DSAParameters::Q
	ByteU5BU5D_t3990433866* ___Q_4;
	// System.Byte[] System.Security.Cryptography.DSAParameters::Seed
	ByteU5BU5D_t3990433866* ___Seed_5;
	// System.Byte[] System.Security.Cryptography.DSAParameters::X
	ByteU5BU5D_t3990433866* ___X_6;
	// System.Byte[] System.Security.Cryptography.DSAParameters::Y
	ByteU5BU5D_t3990433866* ___Y_7;

public:
	inline static int32_t get_offset_of_Counter_0() { return static_cast<int32_t>(offsetof(DSAParameters_t1046351410, ___Counter_0)); }
	inline int32_t get_Counter_0() const { return ___Counter_0; }
	inline int32_t* get_address_of_Counter_0() { return &___Counter_0; }
	inline void set_Counter_0(int32_t value)
	{
		___Counter_0 = value;
	}

	inline static int32_t get_offset_of_G_1() { return static_cast<int32_t>(offsetof(DSAParameters_t1046351410, ___G_1)); }
	inline ByteU5BU5D_t3990433866* get_G_1() const { return ___G_1; }
	inline ByteU5BU5D_t3990433866** get_address_of_G_1() { return &___G_1; }
	inline void set_G_1(ByteU5BU5D_t3990433866* value)
	{
		___G_1 = value;
		Il2CppCodeGenWriteBarrier((&___G_1), value);
	}

	inline static int32_t get_offset_of_J_2() { return static_cast<int32_t>(offsetof(DSAParameters_t1046351410, ___J_2)); }
	inline ByteU5BU5D_t3990433866* get_J_2() const { return ___J_2; }
	inline ByteU5BU5D_t3990433866** get_address_of_J_2() { return &___J_2; }
	inline void set_J_2(ByteU5BU5D_t3990433866* value)
	{
		___J_2 = value;
		Il2CppCodeGenWriteBarrier((&___J_2), value);
	}

	inline static int32_t get_offset_of_P_3() { return static_cast<int32_t>(offsetof(DSAParameters_t1046351410, ___P_3)); }
	inline ByteU5BU5D_t3990433866* get_P_3() const { return ___P_3; }
	inline ByteU5BU5D_t3990433866** get_address_of_P_3() { return &___P_3; }
	inline void set_P_3(ByteU5BU5D_t3990433866* value)
	{
		___P_3 = value;
		Il2CppCodeGenWriteBarrier((&___P_3), value);
	}

	inline static int32_t get_offset_of_Q_4() { return static_cast<int32_t>(offsetof(DSAParameters_t1046351410, ___Q_4)); }
	inline ByteU5BU5D_t3990433866* get_Q_4() const { return ___Q_4; }
	inline ByteU5BU5D_t3990433866** get_address_of_Q_4() { return &___Q_4; }
	inline void set_Q_4(ByteU5BU5D_t3990433866* value)
	{
		___Q_4 = value;
		Il2CppCodeGenWriteBarrier((&___Q_4), value);
	}

	inline static int32_t get_offset_of_Seed_5() { return static_cast<int32_t>(offsetof(DSAParameters_t1046351410, ___Seed_5)); }
	inline ByteU5BU5D_t3990433866* get_Seed_5() const { return ___Seed_5; }
	inline ByteU5BU5D_t3990433866** get_address_of_Seed_5() { return &___Seed_5; }
	inline void set_Seed_5(ByteU5BU5D_t3990433866* value)
	{
		___Seed_5 = value;
		Il2CppCodeGenWriteBarrier((&___Seed_5), value);
	}

	inline static int32_t get_offset_of_X_6() { return static_cast<int32_t>(offsetof(DSAParameters_t1046351410, ___X_6)); }
	inline ByteU5BU5D_t3990433866* get_X_6() const { return ___X_6; }
	inline ByteU5BU5D_t3990433866** get_address_of_X_6() { return &___X_6; }
	inline void set_X_6(ByteU5BU5D_t3990433866* value)
	{
		___X_6 = value;
		Il2CppCodeGenWriteBarrier((&___X_6), value);
	}

	inline static int32_t get_offset_of_Y_7() { return static_cast<int32_t>(offsetof(DSAParameters_t1046351410, ___Y_7)); }
	inline ByteU5BU5D_t3990433866* get_Y_7() const { return ___Y_7; }
	inline ByteU5BU5D_t3990433866** get_address_of_Y_7() { return &___Y_7; }
	inline void set_Y_7(ByteU5BU5D_t3990433866* value)
	{
		___Y_7 = value;
		Il2CppCodeGenWriteBarrier((&___Y_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Security.Cryptography.DSAParameters
struct DSAParameters_t1046351410_marshaled_pinvoke
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
struct DSAParameters_t1046351410_marshaled_com
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
#endif // DSAPARAMETERS_T1046351410_H
#ifndef RC2TRANSFORM_T1938477350_H
#define RC2TRANSFORM_T1938477350_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RC2Transform
struct  RC2Transform_t1938477350  : public SymmetricTransform_t1418834688
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
	UInt16U5BU5D_t303111248* ___K_16;
	// System.Int32 System.Security.Cryptography.RC2Transform::j
	int32_t ___j_17;

public:
	inline static int32_t get_offset_of_R0_12() { return static_cast<int32_t>(offsetof(RC2Transform_t1938477350, ___R0_12)); }
	inline uint16_t get_R0_12() const { return ___R0_12; }
	inline uint16_t* get_address_of_R0_12() { return &___R0_12; }
	inline void set_R0_12(uint16_t value)
	{
		___R0_12 = value;
	}

	inline static int32_t get_offset_of_R1_13() { return static_cast<int32_t>(offsetof(RC2Transform_t1938477350, ___R1_13)); }
	inline uint16_t get_R1_13() const { return ___R1_13; }
	inline uint16_t* get_address_of_R1_13() { return &___R1_13; }
	inline void set_R1_13(uint16_t value)
	{
		___R1_13 = value;
	}

	inline static int32_t get_offset_of_R2_14() { return static_cast<int32_t>(offsetof(RC2Transform_t1938477350, ___R2_14)); }
	inline uint16_t get_R2_14() const { return ___R2_14; }
	inline uint16_t* get_address_of_R2_14() { return &___R2_14; }
	inline void set_R2_14(uint16_t value)
	{
		___R2_14 = value;
	}

	inline static int32_t get_offset_of_R3_15() { return static_cast<int32_t>(offsetof(RC2Transform_t1938477350, ___R3_15)); }
	inline uint16_t get_R3_15() const { return ___R3_15; }
	inline uint16_t* get_address_of_R3_15() { return &___R3_15; }
	inline void set_R3_15(uint16_t value)
	{
		___R3_15 = value;
	}

	inline static int32_t get_offset_of_K_16() { return static_cast<int32_t>(offsetof(RC2Transform_t1938477350, ___K_16)); }
	inline UInt16U5BU5D_t303111248* get_K_16() const { return ___K_16; }
	inline UInt16U5BU5D_t303111248** get_address_of_K_16() { return &___K_16; }
	inline void set_K_16(UInt16U5BU5D_t303111248* value)
	{
		___K_16 = value;
		Il2CppCodeGenWriteBarrier((&___K_16), value);
	}

	inline static int32_t get_offset_of_j_17() { return static_cast<int32_t>(offsetof(RC2Transform_t1938477350, ___j_17)); }
	inline int32_t get_j_17() const { return ___j_17; }
	inline int32_t* get_address_of_j_17() { return &___j_17; }
	inline void set_j_17(int32_t value)
	{
		___j_17 = value;
	}
};

struct RC2Transform_t1938477350_StaticFields
{
public:
	// System.Byte[] System.Security.Cryptography.RC2Transform::pitable
	ByteU5BU5D_t3990433866* ___pitable_18;

public:
	inline static int32_t get_offset_of_pitable_18() { return static_cast<int32_t>(offsetof(RC2Transform_t1938477350_StaticFields, ___pitable_18)); }
	inline ByteU5BU5D_t3990433866* get_pitable_18() const { return ___pitable_18; }
	inline ByteU5BU5D_t3990433866** get_address_of_pitable_18() { return &___pitable_18; }
	inline void set_pitable_18(ByteU5BU5D_t3990433866* value)
	{
		___pitable_18 = value;
		Il2CppCodeGenWriteBarrier((&___pitable_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RC2TRANSFORM_T1938477350_H
#ifndef RSA_T3500246450_H
#define RSA_T3500246450_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSA
struct  RSA_t3500246450  : public AsymmetricAlgorithm_t2026083050
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSA_T3500246450_H
#ifndef DSASIGNATUREFORMATTER_T1972382306_H
#define DSASIGNATUREFORMATTER_T1972382306_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DSASignatureFormatter
struct  DSASignatureFormatter_t1972382306  : public AsymmetricSignatureFormatter_t1462125080
{
public:
	// System.Security.Cryptography.DSA System.Security.Cryptography.DSASignatureFormatter::dsa
	DSA_t3608348530 * ___dsa_0;

public:
	inline static int32_t get_offset_of_dsa_0() { return static_cast<int32_t>(offsetof(DSASignatureFormatter_t1972382306, ___dsa_0)); }
	inline DSA_t3608348530 * get_dsa_0() const { return ___dsa_0; }
	inline DSA_t3608348530 ** get_address_of_dsa_0() { return &___dsa_0; }
	inline void set_dsa_0(DSA_t3608348530 * value)
	{
		___dsa_0 = value;
		Il2CppCodeGenWriteBarrier((&___dsa_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DSASIGNATUREFORMATTER_T1972382306_H
#ifndef ENUM_T2079274484_H
#define ENUM_T2079274484_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t2079274484  : public ValueType_t3939321559
{
public:

public:
};

struct Enum_t2079274484_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t204761021* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t2079274484_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t204761021* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t204761021** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t204761021* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2079274484_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2079274484_marshaled_com
{
};
#endif // ENUM_T2079274484_H
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
#ifndef SERIALIZATIONENTRY_T1915857778_H
#define SERIALIZATIONENTRY_T1915857778_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.SerializationEntry
struct  SerializationEntry_t1915857778 
{
public:
	// System.String System.Runtime.Serialization.SerializationEntry::name
	String_t* ___name_0;
	// System.Type System.Runtime.Serialization.SerializationEntry::objectType
	Type_t * ___objectType_1;
	// System.Object System.Runtime.Serialization.SerializationEntry::value
	RuntimeObject * ___value_2;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(SerializationEntry_t1915857778, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_objectType_1() { return static_cast<int32_t>(offsetof(SerializationEntry_t1915857778, ___objectType_1)); }
	inline Type_t * get_objectType_1() const { return ___objectType_1; }
	inline Type_t ** get_address_of_objectType_1() { return &___objectType_1; }
	inline void set_objectType_1(Type_t * value)
	{
		___objectType_1 = value;
		Il2CppCodeGenWriteBarrier((&___objectType_1), value);
	}

	inline static int32_t get_offset_of_value_2() { return static_cast<int32_t>(offsetof(SerializationEntry_t1915857778, ___value_2)); }
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
struct SerializationEntry_t1915857778_marshaled_pinvoke
{
	char* ___name_0;
	Type_t * ___objectType_1;
	Il2CppIUnknown* ___value_2;
};
// Native definition for COM marshalling of System.Runtime.Serialization.SerializationEntry
struct SerializationEntry_t1915857778_marshaled_com
{
	Il2CppChar* ___name_0;
	Type_t * ___objectType_1;
	Il2CppIUnknown* ___value_2;
};
#endif // SERIALIZATIONENTRY_T1915857778_H
#ifndef ARRAYFIXUPRECORD_T2582505736_H
#define ARRAYFIXUPRECORD_T2582505736_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.ArrayFixupRecord
struct  ArrayFixupRecord_t2582505736  : public BaseFixupRecord_t3161779954
{
public:
	// System.Int32 System.Runtime.Serialization.ArrayFixupRecord::_index
	int32_t ____index_4;

public:
	inline static int32_t get_offset_of__index_4() { return static_cast<int32_t>(offsetof(ArrayFixupRecord_t2582505736, ____index_4)); }
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
#endif // ARRAYFIXUPRECORD_T2582505736_H
#ifndef VOID_T1270832600_H
#define VOID_T1270832600_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1270832600 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1270832600_H
#ifndef MULTIARRAYFIXUPRECORD_T4067412189_H
#define MULTIARRAYFIXUPRECORD_T4067412189_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.MultiArrayFixupRecord
struct  MultiArrayFixupRecord_t4067412189  : public BaseFixupRecord_t3161779954
{
public:
	// System.Int32[] System.Runtime.Serialization.MultiArrayFixupRecord::_indices
	Int32U5BU5D_t3162311898* ____indices_4;

public:
	inline static int32_t get_offset_of__indices_4() { return static_cast<int32_t>(offsetof(MultiArrayFixupRecord_t4067412189, ____indices_4)); }
	inline Int32U5BU5D_t3162311898* get__indices_4() const { return ____indices_4; }
	inline Int32U5BU5D_t3162311898** get_address_of__indices_4() { return &____indices_4; }
	inline void set__indices_4(Int32U5BU5D_t3162311898* value)
	{
		____indices_4 = value;
		Il2CppCodeGenWriteBarrier((&____indices_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTIARRAYFIXUPRECORD_T4067412189_H
#ifndef ONSERIALIZINGATTRIBUTE_T2710306637_H
#define ONSERIALIZINGATTRIBUTE_T2710306637_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.OnSerializingAttribute
struct  OnSerializingAttribute_t2710306637  : public Attribute_t1176385794
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONSERIALIZINGATTRIBUTE_T2710306637_H
#ifndef ONSERIALIZEDATTRIBUTE_T1176355932_H
#define ONSERIALIZEDATTRIBUTE_T1176355932_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.OnSerializedAttribute
struct  OnSerializedAttribute_t1176355932  : public Attribute_t1176385794
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONSERIALIZEDATTRIBUTE_T1176355932_H
#ifndef ONDESERIALIZINGATTRIBUTE_T2863552900_H
#define ONDESERIALIZINGATTRIBUTE_T2863552900_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.OnDeserializingAttribute
struct  OnDeserializingAttribute_t2863552900  : public Attribute_t1176385794
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONDESERIALIZINGATTRIBUTE_T2863552900_H
#ifndef FIXUPRECORD_T3778010023_H
#define FIXUPRECORD_T3778010023_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.FixupRecord
struct  FixupRecord_t3778010023  : public BaseFixupRecord_t3161779954
{
public:
	// System.Reflection.MemberInfo System.Runtime.Serialization.FixupRecord::_member
	MemberInfo_t * ____member_4;

public:
	inline static int32_t get_offset_of__member_4() { return static_cast<int32_t>(offsetof(FixupRecord_t3778010023, ____member_4)); }
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
#endif // FIXUPRECORD_T3778010023_H
#ifndef ONDESERIALIZEDATTRIBUTE_T540460072_H
#define ONDESERIALIZEDATTRIBUTE_T540460072_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.OnDeserializedAttribute
struct  OnDeserializedAttribute_t540460072  : public Attribute_t1176385794
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONDESERIALIZEDATTRIBUTE_T540460072_H
#ifndef DELAYEDFIXUPRECORD_T3627057507_H
#define DELAYEDFIXUPRECORD_T3627057507_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.DelayedFixupRecord
struct  DelayedFixupRecord_t3627057507  : public BaseFixupRecord_t3161779954
{
public:
	// System.String System.Runtime.Serialization.DelayedFixupRecord::_memberName
	String_t* ____memberName_4;

public:
	inline static int32_t get_offset_of__memberName_4() { return static_cast<int32_t>(offsetof(DelayedFixupRecord_t3627057507, ____memberName_4)); }
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
#endif // DELAYEDFIXUPRECORD_T3627057507_H
#ifndef SYSTEMEXCEPTION_T1142596300_H
#define SYSTEMEXCEPTION_T1142596300_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t1142596300  : public Exception_t2696948762
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T1142596300_H
#ifndef RETURNTYPETAG_T668820960_H
#define RETURNTYPETAG_T668820960_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag
struct  ReturnTypeTag_t668820960 
{
public:
	// System.Byte System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag::value__
	uint8_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ReturnTypeTag_t668820960, ___value___1)); }
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
#endif // RETURNTYPETAG_T668820960_H
#ifndef HMAC_T3106782751_H
#define HMAC_T3106782751_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HMAC
struct  HMAC_t3106782751  : public KeyedHashAlgorithm_t2326381028
{
public:
	// System.Boolean System.Security.Cryptography.HMAC::_disposed
	bool ____disposed_5;
	// System.String System.Security.Cryptography.HMAC::_hashName
	String_t* ____hashName_6;
	// System.Security.Cryptography.HashAlgorithm System.Security.Cryptography.HMAC::_algo
	HashAlgorithm_t3280178693 * ____algo_7;
	// Mono.Security.Cryptography.BlockProcessor System.Security.Cryptography.HMAC::_block
	BlockProcessor_t2739903637 * ____block_8;
	// System.Int32 System.Security.Cryptography.HMAC::_blockSizeValue
	int32_t ____blockSizeValue_9;

public:
	inline static int32_t get_offset_of__disposed_5() { return static_cast<int32_t>(offsetof(HMAC_t3106782751, ____disposed_5)); }
	inline bool get__disposed_5() const { return ____disposed_5; }
	inline bool* get_address_of__disposed_5() { return &____disposed_5; }
	inline void set__disposed_5(bool value)
	{
		____disposed_5 = value;
	}

	inline static int32_t get_offset_of__hashName_6() { return static_cast<int32_t>(offsetof(HMAC_t3106782751, ____hashName_6)); }
	inline String_t* get__hashName_6() const { return ____hashName_6; }
	inline String_t** get_address_of__hashName_6() { return &____hashName_6; }
	inline void set__hashName_6(String_t* value)
	{
		____hashName_6 = value;
		Il2CppCodeGenWriteBarrier((&____hashName_6), value);
	}

	inline static int32_t get_offset_of__algo_7() { return static_cast<int32_t>(offsetof(HMAC_t3106782751, ____algo_7)); }
	inline HashAlgorithm_t3280178693 * get__algo_7() const { return ____algo_7; }
	inline HashAlgorithm_t3280178693 ** get_address_of__algo_7() { return &____algo_7; }
	inline void set__algo_7(HashAlgorithm_t3280178693 * value)
	{
		____algo_7 = value;
		Il2CppCodeGenWriteBarrier((&____algo_7), value);
	}

	inline static int32_t get_offset_of__block_8() { return static_cast<int32_t>(offsetof(HMAC_t3106782751, ____block_8)); }
	inline BlockProcessor_t2739903637 * get__block_8() const { return ____block_8; }
	inline BlockProcessor_t2739903637 ** get_address_of__block_8() { return &____block_8; }
	inline void set__block_8(BlockProcessor_t2739903637 * value)
	{
		____block_8 = value;
		Il2CppCodeGenWriteBarrier((&____block_8), value);
	}

	inline static int32_t get_offset_of__blockSizeValue_9() { return static_cast<int32_t>(offsetof(HMAC_t3106782751, ____blockSizeValue_9)); }
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
#endif // HMAC_T3106782751_H
#ifndef MD5CRYPTOSERVICEPROVIDER_T3036191160_H
#define MD5CRYPTOSERVICEPROVIDER_T3036191160_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.MD5CryptoServiceProvider
struct  MD5CryptoServiceProvider_t3036191160  : public MD5_t2860866956
{
public:
	// System.UInt32[] System.Security.Cryptography.MD5CryptoServiceProvider::_H
	UInt32U5BU5D_t2763435308* ____H_4;
	// System.UInt32[] System.Security.Cryptography.MD5CryptoServiceProvider::buff
	UInt32U5BU5D_t2763435308* ___buff_5;
	// System.UInt64 System.Security.Cryptography.MD5CryptoServiceProvider::count
	uint64_t ___count_6;
	// System.Byte[] System.Security.Cryptography.MD5CryptoServiceProvider::_ProcessingBuffer
	ByteU5BU5D_t3990433866* ____ProcessingBuffer_7;
	// System.Int32 System.Security.Cryptography.MD5CryptoServiceProvider::_ProcessingBufferCount
	int32_t ____ProcessingBufferCount_8;

public:
	inline static int32_t get_offset_of__H_4() { return static_cast<int32_t>(offsetof(MD5CryptoServiceProvider_t3036191160, ____H_4)); }
	inline UInt32U5BU5D_t2763435308* get__H_4() const { return ____H_4; }
	inline UInt32U5BU5D_t2763435308** get_address_of__H_4() { return &____H_4; }
	inline void set__H_4(UInt32U5BU5D_t2763435308* value)
	{
		____H_4 = value;
		Il2CppCodeGenWriteBarrier((&____H_4), value);
	}

	inline static int32_t get_offset_of_buff_5() { return static_cast<int32_t>(offsetof(MD5CryptoServiceProvider_t3036191160, ___buff_5)); }
	inline UInt32U5BU5D_t2763435308* get_buff_5() const { return ___buff_5; }
	inline UInt32U5BU5D_t2763435308** get_address_of_buff_5() { return &___buff_5; }
	inline void set_buff_5(UInt32U5BU5D_t2763435308* value)
	{
		___buff_5 = value;
		Il2CppCodeGenWriteBarrier((&___buff_5), value);
	}

	inline static int32_t get_offset_of_count_6() { return static_cast<int32_t>(offsetof(MD5CryptoServiceProvider_t3036191160, ___count_6)); }
	inline uint64_t get_count_6() const { return ___count_6; }
	inline uint64_t* get_address_of_count_6() { return &___count_6; }
	inline void set_count_6(uint64_t value)
	{
		___count_6 = value;
	}

	inline static int32_t get_offset_of__ProcessingBuffer_7() { return static_cast<int32_t>(offsetof(MD5CryptoServiceProvider_t3036191160, ____ProcessingBuffer_7)); }
	inline ByteU5BU5D_t3990433866* get__ProcessingBuffer_7() const { return ____ProcessingBuffer_7; }
	inline ByteU5BU5D_t3990433866** get_address_of__ProcessingBuffer_7() { return &____ProcessingBuffer_7; }
	inline void set__ProcessingBuffer_7(ByteU5BU5D_t3990433866* value)
	{
		____ProcessingBuffer_7 = value;
		Il2CppCodeGenWriteBarrier((&____ProcessingBuffer_7), value);
	}

	inline static int32_t get_offset_of__ProcessingBufferCount_8() { return static_cast<int32_t>(offsetof(MD5CryptoServiceProvider_t3036191160, ____ProcessingBufferCount_8)); }
	inline int32_t get__ProcessingBufferCount_8() const { return ____ProcessingBufferCount_8; }
	inline int32_t* get_address_of__ProcessingBufferCount_8() { return &____ProcessingBufferCount_8; }
	inline void set__ProcessingBufferCount_8(int32_t value)
	{
		____ProcessingBufferCount_8 = value;
	}
};

struct MD5CryptoServiceProvider_t3036191160_StaticFields
{
public:
	// System.UInt32[] System.Security.Cryptography.MD5CryptoServiceProvider::K
	UInt32U5BU5D_t2763435308* ___K_9;

public:
	inline static int32_t get_offset_of_K_9() { return static_cast<int32_t>(offsetof(MD5CryptoServiceProvider_t3036191160_StaticFields, ___K_9)); }
	inline UInt32U5BU5D_t2763435308* get_K_9() const { return ___K_9; }
	inline UInt32U5BU5D_t2763435308** get_address_of_K_9() { return &___K_9; }
	inline void set_K_9(UInt32U5BU5D_t2763435308* value)
	{
		___K_9 = value;
		Il2CppCodeGenWriteBarrier((&___K_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MD5CRYPTOSERVICEPROVIDER_T3036191160_H
#ifndef MACTRIPLEDES_T1419238681_H
#define MACTRIPLEDES_T1419238681_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.MACTripleDES
struct  MACTripleDES_t1419238681  : public KeyedHashAlgorithm_t2326381028
{
public:
	// System.Security.Cryptography.TripleDES System.Security.Cryptography.MACTripleDES::tdes
	TripleDES_t3026490886 * ___tdes_5;
	// Mono.Security.Cryptography.MACAlgorithm System.Security.Cryptography.MACTripleDES::mac
	MACAlgorithm_t3061222185 * ___mac_6;
	// System.Boolean System.Security.Cryptography.MACTripleDES::m_disposed
	bool ___m_disposed_7;

public:
	inline static int32_t get_offset_of_tdes_5() { return static_cast<int32_t>(offsetof(MACTripleDES_t1419238681, ___tdes_5)); }
	inline TripleDES_t3026490886 * get_tdes_5() const { return ___tdes_5; }
	inline TripleDES_t3026490886 ** get_address_of_tdes_5() { return &___tdes_5; }
	inline void set_tdes_5(TripleDES_t3026490886 * value)
	{
		___tdes_5 = value;
		Il2CppCodeGenWriteBarrier((&___tdes_5), value);
	}

	inline static int32_t get_offset_of_mac_6() { return static_cast<int32_t>(offsetof(MACTripleDES_t1419238681, ___mac_6)); }
	inline MACAlgorithm_t3061222185 * get_mac_6() const { return ___mac_6; }
	inline MACAlgorithm_t3061222185 ** get_address_of_mac_6() { return &___mac_6; }
	inline void set_mac_6(MACAlgorithm_t3061222185 * value)
	{
		___mac_6 = value;
		Il2CppCodeGenWriteBarrier((&___mac_6), value);
	}

	inline static int32_t get_offset_of_m_disposed_7() { return static_cast<int32_t>(offsetof(MACTripleDES_t1419238681, ___m_disposed_7)); }
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
#endif // MACTRIPLEDES_T1419238681_H
#ifndef WELLKNOWNOBJECTMODE_T2525209389_H
#define WELLKNOWNOBJECTMODE_T2525209389_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.WellKnownObjectMode
struct  WellKnownObjectMode_t2525209389 
{
public:
	// System.Int32 System.Runtime.Remoting.WellKnownObjectMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(WellKnownObjectMode_t2525209389, ___value___1)); }
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
#endif // WELLKNOWNOBJECTMODE_T2525209389_H
#ifndef PADDINGMODE_T3408293858_H
#define PADDINGMODE_T3408293858_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.PaddingMode
struct  PaddingMode_t3408293858 
{
public:
	// System.Int32 System.Security.Cryptography.PaddingMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PaddingMode_t3408293858, ___value___1)); }
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
#endif // PADDINGMODE_T3408293858_H
#ifndef TYPETAG_T2005931834_H
#define TYPETAG_T2005931834_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.TypeTag
struct  TypeTag_t2005931834 
{
public:
	// System.Byte System.Runtime.Serialization.Formatters.Binary.TypeTag::value__
	uint8_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TypeTag_t2005931834, ___value___1)); }
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
#endif // TYPETAG_T2005931834_H
#ifndef METHODFLAGS_T4003155618_H
#define METHODFLAGS_T4003155618_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.MethodFlags
struct  MethodFlags_t4003155618 
{
public:
	// System.Int32 System.Runtime.Serialization.Formatters.Binary.MethodFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MethodFlags_t4003155618, ___value___1)); }
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
#endif // METHODFLAGS_T4003155618_H
#ifndef RIPEMD160MANAGED_T623628547_H
#define RIPEMD160MANAGED_T623628547_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RIPEMD160Managed
struct  RIPEMD160Managed_t623628547  : public RIPEMD160_t627160908
{
public:
	// System.Byte[] System.Security.Cryptography.RIPEMD160Managed::_ProcessingBuffer
	ByteU5BU5D_t3990433866* ____ProcessingBuffer_4;
	// System.UInt32[] System.Security.Cryptography.RIPEMD160Managed::_X
	UInt32U5BU5D_t2763435308* ____X_5;
	// System.UInt32[] System.Security.Cryptography.RIPEMD160Managed::_HashValue
	UInt32U5BU5D_t2763435308* ____HashValue_6;
	// System.UInt64 System.Security.Cryptography.RIPEMD160Managed::_Length
	uint64_t ____Length_7;
	// System.Int32 System.Security.Cryptography.RIPEMD160Managed::_ProcessingBufferCount
	int32_t ____ProcessingBufferCount_8;

public:
	inline static int32_t get_offset_of__ProcessingBuffer_4() { return static_cast<int32_t>(offsetof(RIPEMD160Managed_t623628547, ____ProcessingBuffer_4)); }
	inline ByteU5BU5D_t3990433866* get__ProcessingBuffer_4() const { return ____ProcessingBuffer_4; }
	inline ByteU5BU5D_t3990433866** get_address_of__ProcessingBuffer_4() { return &____ProcessingBuffer_4; }
	inline void set__ProcessingBuffer_4(ByteU5BU5D_t3990433866* value)
	{
		____ProcessingBuffer_4 = value;
		Il2CppCodeGenWriteBarrier((&____ProcessingBuffer_4), value);
	}

	inline static int32_t get_offset_of__X_5() { return static_cast<int32_t>(offsetof(RIPEMD160Managed_t623628547, ____X_5)); }
	inline UInt32U5BU5D_t2763435308* get__X_5() const { return ____X_5; }
	inline UInt32U5BU5D_t2763435308** get_address_of__X_5() { return &____X_5; }
	inline void set__X_5(UInt32U5BU5D_t2763435308* value)
	{
		____X_5 = value;
		Il2CppCodeGenWriteBarrier((&____X_5), value);
	}

	inline static int32_t get_offset_of__HashValue_6() { return static_cast<int32_t>(offsetof(RIPEMD160Managed_t623628547, ____HashValue_6)); }
	inline UInt32U5BU5D_t2763435308* get__HashValue_6() const { return ____HashValue_6; }
	inline UInt32U5BU5D_t2763435308** get_address_of__HashValue_6() { return &____HashValue_6; }
	inline void set__HashValue_6(UInt32U5BU5D_t2763435308* value)
	{
		____HashValue_6 = value;
		Il2CppCodeGenWriteBarrier((&____HashValue_6), value);
	}

	inline static int32_t get_offset_of__Length_7() { return static_cast<int32_t>(offsetof(RIPEMD160Managed_t623628547, ____Length_7)); }
	inline uint64_t get__Length_7() const { return ____Length_7; }
	inline uint64_t* get_address_of__Length_7() { return &____Length_7; }
	inline void set__Length_7(uint64_t value)
	{
		____Length_7 = value;
	}

	inline static int32_t get_offset_of__ProcessingBufferCount_8() { return static_cast<int32_t>(offsetof(RIPEMD160Managed_t623628547, ____ProcessingBufferCount_8)); }
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
#endif // RIPEMD160MANAGED_T623628547_H
#ifndef BINARYELEMENT_T2963338380_H
#define BINARYELEMENT_T2963338380_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.BinaryElement
struct  BinaryElement_t2963338380 
{
public:
	// System.Byte System.Runtime.Serialization.Formatters.Binary.BinaryElement::value__
	uint8_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BinaryElement_t2963338380, ___value___1)); }
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
#endif // BINARYELEMENT_T2963338380_H
#ifndef RNGCRYPTOSERVICEPROVIDER_T1039878938_H
#define RNGCRYPTOSERVICEPROVIDER_T1039878938_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RNGCryptoServiceProvider
struct  RNGCryptoServiceProvider_t1039878938  : public RandomNumberGenerator_t4293320709
{
public:
	// System.IntPtr System.Security.Cryptography.RNGCryptoServiceProvider::_handle
	intptr_t ____handle_1;

public:
	inline static int32_t get_offset_of__handle_1() { return static_cast<int32_t>(offsetof(RNGCryptoServiceProvider_t1039878938, ____handle_1)); }
	inline intptr_t get__handle_1() const { return ____handle_1; }
	inline intptr_t* get_address_of__handle_1() { return &____handle_1; }
	inline void set__handle_1(intptr_t value)
	{
		____handle_1 = value;
	}
};

struct RNGCryptoServiceProvider_t1039878938_StaticFields
{
public:
	// System.Object System.Security.Cryptography.RNGCryptoServiceProvider::_lock
	RuntimeObject * ____lock_0;

public:
	inline static int32_t get_offset_of__lock_0() { return static_cast<int32_t>(offsetof(RNGCryptoServiceProvider_t1039878938_StaticFields, ____lock_0)); }
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
#endif // RNGCRYPTOSERVICEPROVIDER_T1039878938_H
#ifndef DSACRYPTOSERVICEPROVIDER_T2041294013_H
#define DSACRYPTOSERVICEPROVIDER_T2041294013_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DSACryptoServiceProvider
struct  DSACryptoServiceProvider_t2041294013  : public DSA_t3608348530
{
public:
	// Mono.Security.Cryptography.KeyPairPersistence System.Security.Cryptography.DSACryptoServiceProvider::store
	KeyPairPersistence_t3308873985 * ___store_2;
	// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::persistKey
	bool ___persistKey_3;
	// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::persisted
	bool ___persisted_4;
	// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::privateKeyExportable
	bool ___privateKeyExportable_5;
	// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::m_disposed
	bool ___m_disposed_6;
	// Mono.Security.Cryptography.DSAManaged System.Security.Cryptography.DSACryptoServiceProvider::dsa
	DSAManaged_t2037042650 * ___dsa_7;

public:
	inline static int32_t get_offset_of_store_2() { return static_cast<int32_t>(offsetof(DSACryptoServiceProvider_t2041294013, ___store_2)); }
	inline KeyPairPersistence_t3308873985 * get_store_2() const { return ___store_2; }
	inline KeyPairPersistence_t3308873985 ** get_address_of_store_2() { return &___store_2; }
	inline void set_store_2(KeyPairPersistence_t3308873985 * value)
	{
		___store_2 = value;
		Il2CppCodeGenWriteBarrier((&___store_2), value);
	}

	inline static int32_t get_offset_of_persistKey_3() { return static_cast<int32_t>(offsetof(DSACryptoServiceProvider_t2041294013, ___persistKey_3)); }
	inline bool get_persistKey_3() const { return ___persistKey_3; }
	inline bool* get_address_of_persistKey_3() { return &___persistKey_3; }
	inline void set_persistKey_3(bool value)
	{
		___persistKey_3 = value;
	}

	inline static int32_t get_offset_of_persisted_4() { return static_cast<int32_t>(offsetof(DSACryptoServiceProvider_t2041294013, ___persisted_4)); }
	inline bool get_persisted_4() const { return ___persisted_4; }
	inline bool* get_address_of_persisted_4() { return &___persisted_4; }
	inline void set_persisted_4(bool value)
	{
		___persisted_4 = value;
	}

	inline static int32_t get_offset_of_privateKeyExportable_5() { return static_cast<int32_t>(offsetof(DSACryptoServiceProvider_t2041294013, ___privateKeyExportable_5)); }
	inline bool get_privateKeyExportable_5() const { return ___privateKeyExportable_5; }
	inline bool* get_address_of_privateKeyExportable_5() { return &___privateKeyExportable_5; }
	inline void set_privateKeyExportable_5(bool value)
	{
		___privateKeyExportable_5 = value;
	}

	inline static int32_t get_offset_of_m_disposed_6() { return static_cast<int32_t>(offsetof(DSACryptoServiceProvider_t2041294013, ___m_disposed_6)); }
	inline bool get_m_disposed_6() const { return ___m_disposed_6; }
	inline bool* get_address_of_m_disposed_6() { return &___m_disposed_6; }
	inline void set_m_disposed_6(bool value)
	{
		___m_disposed_6 = value;
	}

	inline static int32_t get_offset_of_dsa_7() { return static_cast<int32_t>(offsetof(DSACryptoServiceProvider_t2041294013, ___dsa_7)); }
	inline DSAManaged_t2037042650 * get_dsa_7() const { return ___dsa_7; }
	inline DSAManaged_t2037042650 ** get_address_of_dsa_7() { return &___dsa_7; }
	inline void set_dsa_7(DSAManaged_t2037042650 * value)
	{
		___dsa_7 = value;
		Il2CppCodeGenWriteBarrier((&___dsa_7), value);
	}
};

struct DSACryptoServiceProvider_t2041294013_StaticFields
{
public:
	// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::useMachineKeyStore
	bool ___useMachineKeyStore_8;

public:
	inline static int32_t get_offset_of_useMachineKeyStore_8() { return static_cast<int32_t>(offsetof(DSACryptoServiceProvider_t2041294013_StaticFields, ___useMachineKeyStore_8)); }
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
#endif // DSACRYPTOSERVICEPROVIDER_T2041294013_H
#ifndef X509KEYSTORAGEFLAGS_T1469237_H
#define X509KEYSTORAGEFLAGS_T1469237_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509KeyStorageFlags
struct  X509KeyStorageFlags_t1469237 
{
public:
	// System.Int32 System.Security.Cryptography.X509Certificates.X509KeyStorageFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(X509KeyStorageFlags_t1469237, ___value___1)); }
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
#endif // X509KEYSTORAGEFLAGS_T1469237_H
#ifndef CIPHERMODE_T3345971367_H
#define CIPHERMODE_T3345971367_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CipherMode
struct  CipherMode_t3345971367 
{
public:
	// System.Int32 System.Security.Cryptography.CipherMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CipherMode_t3345971367, ___value___1)); }
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
#endif // CIPHERMODE_T3345971367_H
#ifndef STREAMINGCONTEXTSTATES_T1460552126_H
#define STREAMINGCONTEXTSTATES_T1460552126_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.StreamingContextStates
struct  StreamingContextStates_t1460552126 
{
public:
	// System.Int32 System.Runtime.Serialization.StreamingContextStates::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StreamingContextStates_t1460552126, ___value___1)); }
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
#endif // STREAMINGCONTEXTSTATES_T1460552126_H
#ifndef CRYPTOGRAPHICEXCEPTION_T3415653120_H
#define CRYPTOGRAPHICEXCEPTION_T3415653120_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CryptographicException
struct  CryptographicException_t3415653120  : public SystemException_t1142596300
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRYPTOGRAPHICEXCEPTION_T3415653120_H
#ifndef MEMBERTYPEMETADATA_T2320431195_H
#define MEMBERTYPEMETADATA_T2320431195_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.MemberTypeMetadata
struct  MemberTypeMetadata_t2320431195  : public ClrTypeMetadata_t466399263
{
public:
	// System.Reflection.MemberInfo[] System.Runtime.Serialization.Formatters.Binary.MemberTypeMetadata::members
	MemberInfoU5BU5D_t2676182984* ___members_3;

public:
	inline static int32_t get_offset_of_members_3() { return static_cast<int32_t>(offsetof(MemberTypeMetadata_t2320431195, ___members_3)); }
	inline MemberInfoU5BU5D_t2676182984* get_members_3() const { return ___members_3; }
	inline MemberInfoU5BU5D_t2676182984** get_address_of_members_3() { return &___members_3; }
	inline void set_members_3(MemberInfoU5BU5D_t2676182984* value)
	{
		___members_3 = value;
		Il2CppCodeGenWriteBarrier((&___members_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERTYPEMETADATA_T2320431195_H
#ifndef CSPPROVIDERFLAGS_T1588602502_H
#define CSPPROVIDERFLAGS_T1588602502_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CspProviderFlags
struct  CspProviderFlags_t1588602502 
{
public:
	// System.Int32 System.Security.Cryptography.CspProviderFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CspProviderFlags_t1588602502, ___value___1)); }
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
#endif // CSPPROVIDERFLAGS_T1588602502_H
#ifndef FROMBASE64TRANSFORMMODE_T1604798756_H
#define FROMBASE64TRANSFORMMODE_T1604798756_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.FromBase64TransformMode
struct  FromBase64TransformMode_t1604798756 
{
public:
	// System.Int32 System.Security.Cryptography.FromBase64TransformMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FromBase64TransformMode_t1604798756, ___value___1)); }
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
#endif // FROMBASE64TRANSFORMMODE_T1604798756_H
#ifndef SERIALIZATIONEXCEPTION_T4047060329_H
#define SERIALIZATIONEXCEPTION_T4047060329_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.SerializationException
struct  SerializationException_t4047060329  : public SystemException_t1142596300
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZATIONEXCEPTION_T4047060329_H
#ifndef FORMATTERASSEMBLYSTYLE_T2407195285_H
#define FORMATTERASSEMBLYSTYLE_T2407195285_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.FormatterAssemblyStyle
struct  FormatterAssemblyStyle_t2407195285 
{
public:
	// System.Int32 System.Runtime.Serialization.Formatters.FormatterAssemblyStyle::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FormatterAssemblyStyle_t2407195285, ___value___1)); }
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
#endif // FORMATTERASSEMBLYSTYLE_T2407195285_H
#ifndef FORMATTERTYPESTYLE_T2176684481_H
#define FORMATTERTYPESTYLE_T2176684481_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.FormatterTypeStyle
struct  FormatterTypeStyle_t2176684481 
{
public:
	// System.Int32 System.Runtime.Serialization.Formatters.FormatterTypeStyle::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FormatterTypeStyle_t2176684481, ___value___1)); }
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
#endif // FORMATTERTYPESTYLE_T2176684481_H
#ifndef OBJECTRECORDSTATUS_T1267464506_H
#define OBJECTRECORDSTATUS_T1267464506_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.ObjectRecordStatus
struct  ObjectRecordStatus_t1267464506 
{
public:
	// System.Byte System.Runtime.Serialization.ObjectRecordStatus::value__
	uint8_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ObjectRecordStatus_t1267464506, ___value___1)); }
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
#endif // OBJECTRECORDSTATUS_T1267464506_H
#ifndef TYPEFILTERLEVEL_T2647682971_H
#define TYPEFILTERLEVEL_T2647682971_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.TypeFilterLevel
struct  TypeFilterLevel_t2647682971 
{
public:
	// System.Int32 System.Runtime.Serialization.Formatters.TypeFilterLevel::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TypeFilterLevel_t2647682971, ___value___1)); }
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
#endif // TYPEFILTERLEVEL_T2647682971_H
#ifndef DELEGATE_T2757275082_H
#define DELEGATE_T2757275082_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t2757275082  : public RuntimeObject
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
	DelegateData_t1573484868 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t2757275082, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t2757275082, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t2757275082, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t2757275082, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t2757275082, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t2757275082, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t2757275082, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t2757275082, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t2757275082, ___data_8)); }
	inline DelegateData_t1573484868 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1573484868 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1573484868 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T2757275082_H
#ifndef OBJECTRECORD_T3234148837_H
#define OBJECTRECORD_T3234148837_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.ObjectRecord
struct  ObjectRecord_t3234148837  : public RuntimeObject
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
	SerializationInfo_t885769560 * ___Info_4;
	// System.Int64 System.Runtime.Serialization.ObjectRecord::IdOfContainingObj
	int64_t ___IdOfContainingObj_5;
	// System.Runtime.Serialization.ISerializationSurrogate System.Runtime.Serialization.ObjectRecord::Surrogate
	RuntimeObject* ___Surrogate_6;
	// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.ObjectRecord::SurrogateSelector
	RuntimeObject* ___SurrogateSelector_7;
	// System.Reflection.MemberInfo System.Runtime.Serialization.ObjectRecord::Member
	MemberInfo_t * ___Member_8;
	// System.Int32[] System.Runtime.Serialization.ObjectRecord::ArrayIndex
	Int32U5BU5D_t3162311898* ___ArrayIndex_9;
	// System.Runtime.Serialization.BaseFixupRecord System.Runtime.Serialization.ObjectRecord::FixupChainAsContainer
	BaseFixupRecord_t3161779954 * ___FixupChainAsContainer_10;
	// System.Runtime.Serialization.BaseFixupRecord System.Runtime.Serialization.ObjectRecord::FixupChainAsRequired
	BaseFixupRecord_t3161779954 * ___FixupChainAsRequired_11;
	// System.Runtime.Serialization.ObjectRecord System.Runtime.Serialization.ObjectRecord::Next
	ObjectRecord_t3234148837 * ___Next_12;

public:
	inline static int32_t get_offset_of_Status_0() { return static_cast<int32_t>(offsetof(ObjectRecord_t3234148837, ___Status_0)); }
	inline uint8_t get_Status_0() const { return ___Status_0; }
	inline uint8_t* get_address_of_Status_0() { return &___Status_0; }
	inline void set_Status_0(uint8_t value)
	{
		___Status_0 = value;
	}

	inline static int32_t get_offset_of_OriginalObject_1() { return static_cast<int32_t>(offsetof(ObjectRecord_t3234148837, ___OriginalObject_1)); }
	inline RuntimeObject * get_OriginalObject_1() const { return ___OriginalObject_1; }
	inline RuntimeObject ** get_address_of_OriginalObject_1() { return &___OriginalObject_1; }
	inline void set_OriginalObject_1(RuntimeObject * value)
	{
		___OriginalObject_1 = value;
		Il2CppCodeGenWriteBarrier((&___OriginalObject_1), value);
	}

	inline static int32_t get_offset_of_ObjectInstance_2() { return static_cast<int32_t>(offsetof(ObjectRecord_t3234148837, ___ObjectInstance_2)); }
	inline RuntimeObject * get_ObjectInstance_2() const { return ___ObjectInstance_2; }
	inline RuntimeObject ** get_address_of_ObjectInstance_2() { return &___ObjectInstance_2; }
	inline void set_ObjectInstance_2(RuntimeObject * value)
	{
		___ObjectInstance_2 = value;
		Il2CppCodeGenWriteBarrier((&___ObjectInstance_2), value);
	}

	inline static int32_t get_offset_of_ObjectID_3() { return static_cast<int32_t>(offsetof(ObjectRecord_t3234148837, ___ObjectID_3)); }
	inline int64_t get_ObjectID_3() const { return ___ObjectID_3; }
	inline int64_t* get_address_of_ObjectID_3() { return &___ObjectID_3; }
	inline void set_ObjectID_3(int64_t value)
	{
		___ObjectID_3 = value;
	}

	inline static int32_t get_offset_of_Info_4() { return static_cast<int32_t>(offsetof(ObjectRecord_t3234148837, ___Info_4)); }
	inline SerializationInfo_t885769560 * get_Info_4() const { return ___Info_4; }
	inline SerializationInfo_t885769560 ** get_address_of_Info_4() { return &___Info_4; }
	inline void set_Info_4(SerializationInfo_t885769560 * value)
	{
		___Info_4 = value;
		Il2CppCodeGenWriteBarrier((&___Info_4), value);
	}

	inline static int32_t get_offset_of_IdOfContainingObj_5() { return static_cast<int32_t>(offsetof(ObjectRecord_t3234148837, ___IdOfContainingObj_5)); }
	inline int64_t get_IdOfContainingObj_5() const { return ___IdOfContainingObj_5; }
	inline int64_t* get_address_of_IdOfContainingObj_5() { return &___IdOfContainingObj_5; }
	inline void set_IdOfContainingObj_5(int64_t value)
	{
		___IdOfContainingObj_5 = value;
	}

	inline static int32_t get_offset_of_Surrogate_6() { return static_cast<int32_t>(offsetof(ObjectRecord_t3234148837, ___Surrogate_6)); }
	inline RuntimeObject* get_Surrogate_6() const { return ___Surrogate_6; }
	inline RuntimeObject** get_address_of_Surrogate_6() { return &___Surrogate_6; }
	inline void set_Surrogate_6(RuntimeObject* value)
	{
		___Surrogate_6 = value;
		Il2CppCodeGenWriteBarrier((&___Surrogate_6), value);
	}

	inline static int32_t get_offset_of_SurrogateSelector_7() { return static_cast<int32_t>(offsetof(ObjectRecord_t3234148837, ___SurrogateSelector_7)); }
	inline RuntimeObject* get_SurrogateSelector_7() const { return ___SurrogateSelector_7; }
	inline RuntimeObject** get_address_of_SurrogateSelector_7() { return &___SurrogateSelector_7; }
	inline void set_SurrogateSelector_7(RuntimeObject* value)
	{
		___SurrogateSelector_7 = value;
		Il2CppCodeGenWriteBarrier((&___SurrogateSelector_7), value);
	}

	inline static int32_t get_offset_of_Member_8() { return static_cast<int32_t>(offsetof(ObjectRecord_t3234148837, ___Member_8)); }
	inline MemberInfo_t * get_Member_8() const { return ___Member_8; }
	inline MemberInfo_t ** get_address_of_Member_8() { return &___Member_8; }
	inline void set_Member_8(MemberInfo_t * value)
	{
		___Member_8 = value;
		Il2CppCodeGenWriteBarrier((&___Member_8), value);
	}

	inline static int32_t get_offset_of_ArrayIndex_9() { return static_cast<int32_t>(offsetof(ObjectRecord_t3234148837, ___ArrayIndex_9)); }
	inline Int32U5BU5D_t3162311898* get_ArrayIndex_9() const { return ___ArrayIndex_9; }
	inline Int32U5BU5D_t3162311898** get_address_of_ArrayIndex_9() { return &___ArrayIndex_9; }
	inline void set_ArrayIndex_9(Int32U5BU5D_t3162311898* value)
	{
		___ArrayIndex_9 = value;
		Il2CppCodeGenWriteBarrier((&___ArrayIndex_9), value);
	}

	inline static int32_t get_offset_of_FixupChainAsContainer_10() { return static_cast<int32_t>(offsetof(ObjectRecord_t3234148837, ___FixupChainAsContainer_10)); }
	inline BaseFixupRecord_t3161779954 * get_FixupChainAsContainer_10() const { return ___FixupChainAsContainer_10; }
	inline BaseFixupRecord_t3161779954 ** get_address_of_FixupChainAsContainer_10() { return &___FixupChainAsContainer_10; }
	inline void set_FixupChainAsContainer_10(BaseFixupRecord_t3161779954 * value)
	{
		___FixupChainAsContainer_10 = value;
		Il2CppCodeGenWriteBarrier((&___FixupChainAsContainer_10), value);
	}

	inline static int32_t get_offset_of_FixupChainAsRequired_11() { return static_cast<int32_t>(offsetof(ObjectRecord_t3234148837, ___FixupChainAsRequired_11)); }
	inline BaseFixupRecord_t3161779954 * get_FixupChainAsRequired_11() const { return ___FixupChainAsRequired_11; }
	inline BaseFixupRecord_t3161779954 ** get_address_of_FixupChainAsRequired_11() { return &___FixupChainAsRequired_11; }
	inline void set_FixupChainAsRequired_11(BaseFixupRecord_t3161779954 * value)
	{
		___FixupChainAsRequired_11 = value;
		Il2CppCodeGenWriteBarrier((&___FixupChainAsRequired_11), value);
	}

	inline static int32_t get_offset_of_Next_12() { return static_cast<int32_t>(offsetof(ObjectRecord_t3234148837, ___Next_12)); }
	inline ObjectRecord_t3234148837 * get_Next_12() const { return ___Next_12; }
	inline ObjectRecord_t3234148837 ** get_address_of_Next_12() { return &___Next_12; }
	inline void set_Next_12(ObjectRecord_t3234148837 * value)
	{
		___Next_12 = value;
		Il2CppCodeGenWriteBarrier((&___Next_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTRECORD_T3234148837_H
#ifndef STREAMINGCONTEXT_T1146178153_H
#define STREAMINGCONTEXT_T1146178153_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.StreamingContext
struct  StreamingContext_t1146178153 
{
public:
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::state
	int32_t ___state_0;
	// System.Object System.Runtime.Serialization.StreamingContext::additional
	RuntimeObject * ___additional_1;

public:
	inline static int32_t get_offset_of_state_0() { return static_cast<int32_t>(offsetof(StreamingContext_t1146178153, ___state_0)); }
	inline int32_t get_state_0() const { return ___state_0; }
	inline int32_t* get_address_of_state_0() { return &___state_0; }
	inline void set_state_0(int32_t value)
	{
		___state_0 = value;
	}

	inline static int32_t get_offset_of_additional_1() { return static_cast<int32_t>(offsetof(StreamingContext_t1146178153, ___additional_1)); }
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
struct StreamingContext_t1146178153_marshaled_pinvoke
{
	int32_t ___state_0;
	Il2CppIUnknown* ___additional_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t1146178153_marshaled_com
{
	int32_t ___state_0;
	Il2CppIUnknown* ___additional_1;
};
#endif // STREAMINGCONTEXT_T1146178153_H
#ifndef SYMMETRICALGORITHM_T1498077059_H
#define SYMMETRICALGORITHM_T1498077059_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SymmetricAlgorithm
struct  SymmetricAlgorithm_t1498077059  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::BlockSizeValue
	int32_t ___BlockSizeValue_0;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::IVValue
	ByteU5BU5D_t3990433866* ___IVValue_1;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::KeySizeValue
	int32_t ___KeySizeValue_2;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::KeyValue
	ByteU5BU5D_t3990433866* ___KeyValue_3;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalBlockSizesValue
	KeySizesU5BU5D_t1660291574* ___LegalBlockSizesValue_4;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalKeySizesValue
	KeySizesU5BU5D_t1660291574* ___LegalKeySizesValue_5;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::FeedbackSizeValue
	int32_t ___FeedbackSizeValue_6;
	// System.Security.Cryptography.CipherMode System.Security.Cryptography.SymmetricAlgorithm::ModeValue
	int32_t ___ModeValue_7;
	// System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::PaddingValue
	int32_t ___PaddingValue_8;
	// System.Boolean System.Security.Cryptography.SymmetricAlgorithm::m_disposed
	bool ___m_disposed_9;

public:
	inline static int32_t get_offset_of_BlockSizeValue_0() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t1498077059, ___BlockSizeValue_0)); }
	inline int32_t get_BlockSizeValue_0() const { return ___BlockSizeValue_0; }
	inline int32_t* get_address_of_BlockSizeValue_0() { return &___BlockSizeValue_0; }
	inline void set_BlockSizeValue_0(int32_t value)
	{
		___BlockSizeValue_0 = value;
	}

	inline static int32_t get_offset_of_IVValue_1() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t1498077059, ___IVValue_1)); }
	inline ByteU5BU5D_t3990433866* get_IVValue_1() const { return ___IVValue_1; }
	inline ByteU5BU5D_t3990433866** get_address_of_IVValue_1() { return &___IVValue_1; }
	inline void set_IVValue_1(ByteU5BU5D_t3990433866* value)
	{
		___IVValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___IVValue_1), value);
	}

	inline static int32_t get_offset_of_KeySizeValue_2() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t1498077059, ___KeySizeValue_2)); }
	inline int32_t get_KeySizeValue_2() const { return ___KeySizeValue_2; }
	inline int32_t* get_address_of_KeySizeValue_2() { return &___KeySizeValue_2; }
	inline void set_KeySizeValue_2(int32_t value)
	{
		___KeySizeValue_2 = value;
	}

	inline static int32_t get_offset_of_KeyValue_3() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t1498077059, ___KeyValue_3)); }
	inline ByteU5BU5D_t3990433866* get_KeyValue_3() const { return ___KeyValue_3; }
	inline ByteU5BU5D_t3990433866** get_address_of_KeyValue_3() { return &___KeyValue_3; }
	inline void set_KeyValue_3(ByteU5BU5D_t3990433866* value)
	{
		___KeyValue_3 = value;
		Il2CppCodeGenWriteBarrier((&___KeyValue_3), value);
	}

	inline static int32_t get_offset_of_LegalBlockSizesValue_4() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t1498077059, ___LegalBlockSizesValue_4)); }
	inline KeySizesU5BU5D_t1660291574* get_LegalBlockSizesValue_4() const { return ___LegalBlockSizesValue_4; }
	inline KeySizesU5BU5D_t1660291574** get_address_of_LegalBlockSizesValue_4() { return &___LegalBlockSizesValue_4; }
	inline void set_LegalBlockSizesValue_4(KeySizesU5BU5D_t1660291574* value)
	{
		___LegalBlockSizesValue_4 = value;
		Il2CppCodeGenWriteBarrier((&___LegalBlockSizesValue_4), value);
	}

	inline static int32_t get_offset_of_LegalKeySizesValue_5() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t1498077059, ___LegalKeySizesValue_5)); }
	inline KeySizesU5BU5D_t1660291574* get_LegalKeySizesValue_5() const { return ___LegalKeySizesValue_5; }
	inline KeySizesU5BU5D_t1660291574** get_address_of_LegalKeySizesValue_5() { return &___LegalKeySizesValue_5; }
	inline void set_LegalKeySizesValue_5(KeySizesU5BU5D_t1660291574* value)
	{
		___LegalKeySizesValue_5 = value;
		Il2CppCodeGenWriteBarrier((&___LegalKeySizesValue_5), value);
	}

	inline static int32_t get_offset_of_FeedbackSizeValue_6() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t1498077059, ___FeedbackSizeValue_6)); }
	inline int32_t get_FeedbackSizeValue_6() const { return ___FeedbackSizeValue_6; }
	inline int32_t* get_address_of_FeedbackSizeValue_6() { return &___FeedbackSizeValue_6; }
	inline void set_FeedbackSizeValue_6(int32_t value)
	{
		___FeedbackSizeValue_6 = value;
	}

	inline static int32_t get_offset_of_ModeValue_7() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t1498077059, ___ModeValue_7)); }
	inline int32_t get_ModeValue_7() const { return ___ModeValue_7; }
	inline int32_t* get_address_of_ModeValue_7() { return &___ModeValue_7; }
	inline void set_ModeValue_7(int32_t value)
	{
		___ModeValue_7 = value;
	}

	inline static int32_t get_offset_of_PaddingValue_8() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t1498077059, ___PaddingValue_8)); }
	inline int32_t get_PaddingValue_8() const { return ___PaddingValue_8; }
	inline int32_t* get_address_of_PaddingValue_8() { return &___PaddingValue_8; }
	inline void set_PaddingValue_8(int32_t value)
	{
		___PaddingValue_8 = value;
	}

	inline static int32_t get_offset_of_m_disposed_9() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t1498077059, ___m_disposed_9)); }
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
#endif // SYMMETRICALGORITHM_T1498077059_H
#ifndef MULTICASTDELEGATE_T3254873941_H
#define MULTICASTDELEGATE_T3254873941_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t3254873941  : public Delegate_t2757275082
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t3254873941 * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t3254873941 * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t3254873941, ___prev_9)); }
	inline MulticastDelegate_t3254873941 * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t3254873941 ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t3254873941 * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t3254873941, ___kpm_next_10)); }
	inline MulticastDelegate_t3254873941 * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t3254873941 ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t3254873941 * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T3254873941_H
#ifndef FROMBASE64TRANSFORM_T4221583335_H
#define FROMBASE64TRANSFORM_T4221583335_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.FromBase64Transform
struct  FromBase64Transform_t4221583335  : public RuntimeObject
{
public:
	// System.Security.Cryptography.FromBase64TransformMode System.Security.Cryptography.FromBase64Transform::mode
	int32_t ___mode_0;
	// System.Byte[] System.Security.Cryptography.FromBase64Transform::accumulator
	ByteU5BU5D_t3990433866* ___accumulator_1;
	// System.Int32 System.Security.Cryptography.FromBase64Transform::accPtr
	int32_t ___accPtr_2;
	// System.Boolean System.Security.Cryptography.FromBase64Transform::m_disposed
	bool ___m_disposed_3;
	// System.Byte[] System.Security.Cryptography.FromBase64Transform::lookupTable
	ByteU5BU5D_t3990433866* ___lookupTable_4;

public:
	inline static int32_t get_offset_of_mode_0() { return static_cast<int32_t>(offsetof(FromBase64Transform_t4221583335, ___mode_0)); }
	inline int32_t get_mode_0() const { return ___mode_0; }
	inline int32_t* get_address_of_mode_0() { return &___mode_0; }
	inline void set_mode_0(int32_t value)
	{
		___mode_0 = value;
	}

	inline static int32_t get_offset_of_accumulator_1() { return static_cast<int32_t>(offsetof(FromBase64Transform_t4221583335, ___accumulator_1)); }
	inline ByteU5BU5D_t3990433866* get_accumulator_1() const { return ___accumulator_1; }
	inline ByteU5BU5D_t3990433866** get_address_of_accumulator_1() { return &___accumulator_1; }
	inline void set_accumulator_1(ByteU5BU5D_t3990433866* value)
	{
		___accumulator_1 = value;
		Il2CppCodeGenWriteBarrier((&___accumulator_1), value);
	}

	inline static int32_t get_offset_of_accPtr_2() { return static_cast<int32_t>(offsetof(FromBase64Transform_t4221583335, ___accPtr_2)); }
	inline int32_t get_accPtr_2() const { return ___accPtr_2; }
	inline int32_t* get_address_of_accPtr_2() { return &___accPtr_2; }
	inline void set_accPtr_2(int32_t value)
	{
		___accPtr_2 = value;
	}

	inline static int32_t get_offset_of_m_disposed_3() { return static_cast<int32_t>(offsetof(FromBase64Transform_t4221583335, ___m_disposed_3)); }
	inline bool get_m_disposed_3() const { return ___m_disposed_3; }
	inline bool* get_address_of_m_disposed_3() { return &___m_disposed_3; }
	inline void set_m_disposed_3(bool value)
	{
		___m_disposed_3 = value;
	}

	inline static int32_t get_offset_of_lookupTable_4() { return static_cast<int32_t>(offsetof(FromBase64Transform_t4221583335, ___lookupTable_4)); }
	inline ByteU5BU5D_t3990433866* get_lookupTable_4() const { return ___lookupTable_4; }
	inline ByteU5BU5D_t3990433866** get_address_of_lookupTable_4() { return &___lookupTable_4; }
	inline void set_lookupTable_4(ByteU5BU5D_t3990433866* value)
	{
		___lookupTable_4 = value;
		Il2CppCodeGenWriteBarrier((&___lookupTable_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FROMBASE64TRANSFORM_T4221583335_H
#ifndef HMACSHA512_T3467374628_H
#define HMACSHA512_T3467374628_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HMACSHA512
struct  HMACSHA512_t3467374628  : public HMAC_t3106782751
{
public:
	// System.Boolean System.Security.Cryptography.HMACSHA512::legacy
	bool ___legacy_11;

public:
	inline static int32_t get_offset_of_legacy_11() { return static_cast<int32_t>(offsetof(HMACSHA512_t3467374628, ___legacy_11)); }
	inline bool get_legacy_11() const { return ___legacy_11; }
	inline bool* get_address_of_legacy_11() { return &___legacy_11; }
	inline void set_legacy_11(bool value)
	{
		___legacy_11 = value;
	}
};

struct HMACSHA512_t3467374628_StaticFields
{
public:
	// System.Boolean System.Security.Cryptography.HMACSHA512::legacy_mode
	bool ___legacy_mode_10;

public:
	inline static int32_t get_offset_of_legacy_mode_10() { return static_cast<int32_t>(offsetof(HMACSHA512_t3467374628_StaticFields, ___legacy_mode_10)); }
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
#endif // HMACSHA512_T3467374628_H
#ifndef HMACMD5_T3396472205_H
#define HMACMD5_T3396472205_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HMACMD5
struct  HMACMD5_t3396472205  : public HMAC_t3106782751
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HMACMD5_T3396472205_H
#ifndef HMACRIPEMD160_T3468624741_H
#define HMACRIPEMD160_T3468624741_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HMACRIPEMD160
struct  HMACRIPEMD160_t3468624741  : public HMAC_t3106782751
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HMACRIPEMD160_T3468624741_H
#ifndef HMACSHA1_T1565523469_H
#define HMACSHA1_T1565523469_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HMACSHA1
struct  HMACSHA1_t1565523469  : public HMAC_t3106782751
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HMACSHA1_T1565523469_H
#ifndef HMACSHA256_T3662492442_H
#define HMACSHA256_T3662492442_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HMACSHA256
struct  HMACSHA256_t3662492442  : public HMAC_t3106782751
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HMACSHA256_T3662492442_H
#ifndef HMACSHA384_T3105660592_H
#define HMACSHA384_T3105660592_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HMACSHA384
struct  HMACSHA384_t3105660592  : public HMAC_t3106782751
{
public:
	// System.Boolean System.Security.Cryptography.HMACSHA384::legacy
	bool ___legacy_11;

public:
	inline static int32_t get_offset_of_legacy_11() { return static_cast<int32_t>(offsetof(HMACSHA384_t3105660592, ___legacy_11)); }
	inline bool get_legacy_11() const { return ___legacy_11; }
	inline bool* get_address_of_legacy_11() { return &___legacy_11; }
	inline void set_legacy_11(bool value)
	{
		___legacy_11 = value;
	}
};

struct HMACSHA384_t3105660592_StaticFields
{
public:
	// System.Boolean System.Security.Cryptography.HMACSHA384::legacy_mode
	bool ___legacy_mode_10;

public:
	inline static int32_t get_offset_of_legacy_mode_10() { return static_cast<int32_t>(offsetof(HMACSHA384_t3105660592_StaticFields, ___legacy_mode_10)); }
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
#endif // HMACSHA384_T3105660592_H
#ifndef WELLKNOWNSERVICETYPEENTRY_T2921617485_H
#define WELLKNOWNSERVICETYPEENTRY_T2921617485_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.WellKnownServiceTypeEntry
struct  WellKnownServiceTypeEntry_t2921617485  : public TypeEntry_t2395194071
{
public:
	// System.Type System.Runtime.Remoting.WellKnownServiceTypeEntry::obj_type
	Type_t * ___obj_type_2;
	// System.String System.Runtime.Remoting.WellKnownServiceTypeEntry::obj_uri
	String_t* ___obj_uri_3;
	// System.Runtime.Remoting.WellKnownObjectMode System.Runtime.Remoting.WellKnownServiceTypeEntry::obj_mode
	int32_t ___obj_mode_4;

public:
	inline static int32_t get_offset_of_obj_type_2() { return static_cast<int32_t>(offsetof(WellKnownServiceTypeEntry_t2921617485, ___obj_type_2)); }
	inline Type_t * get_obj_type_2() const { return ___obj_type_2; }
	inline Type_t ** get_address_of_obj_type_2() { return &___obj_type_2; }
	inline void set_obj_type_2(Type_t * value)
	{
		___obj_type_2 = value;
		Il2CppCodeGenWriteBarrier((&___obj_type_2), value);
	}

	inline static int32_t get_offset_of_obj_uri_3() { return static_cast<int32_t>(offsetof(WellKnownServiceTypeEntry_t2921617485, ___obj_uri_3)); }
	inline String_t* get_obj_uri_3() const { return ___obj_uri_3; }
	inline String_t** get_address_of_obj_uri_3() { return &___obj_uri_3; }
	inline void set_obj_uri_3(String_t* value)
	{
		___obj_uri_3 = value;
		Il2CppCodeGenWriteBarrier((&___obj_uri_3), value);
	}

	inline static int32_t get_offset_of_obj_mode_4() { return static_cast<int32_t>(offsetof(WellKnownServiceTypeEntry_t2921617485, ___obj_mode_4)); }
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
#endif // WELLKNOWNSERVICETYPEENTRY_T2921617485_H
#ifndef CSPPARAMETERS_T1669159204_H
#define CSPPARAMETERS_T1669159204_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CspParameters
struct  CspParameters_t1669159204  : public RuntimeObject
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
	inline static int32_t get_offset_of__Flags_0() { return static_cast<int32_t>(offsetof(CspParameters_t1669159204, ____Flags_0)); }
	inline int32_t get__Flags_0() const { return ____Flags_0; }
	inline int32_t* get_address_of__Flags_0() { return &____Flags_0; }
	inline void set__Flags_0(int32_t value)
	{
		____Flags_0 = value;
	}

	inline static int32_t get_offset_of_KeyContainerName_1() { return static_cast<int32_t>(offsetof(CspParameters_t1669159204, ___KeyContainerName_1)); }
	inline String_t* get_KeyContainerName_1() const { return ___KeyContainerName_1; }
	inline String_t** get_address_of_KeyContainerName_1() { return &___KeyContainerName_1; }
	inline void set_KeyContainerName_1(String_t* value)
	{
		___KeyContainerName_1 = value;
		Il2CppCodeGenWriteBarrier((&___KeyContainerName_1), value);
	}

	inline static int32_t get_offset_of_KeyNumber_2() { return static_cast<int32_t>(offsetof(CspParameters_t1669159204, ___KeyNumber_2)); }
	inline int32_t get_KeyNumber_2() const { return ___KeyNumber_2; }
	inline int32_t* get_address_of_KeyNumber_2() { return &___KeyNumber_2; }
	inline void set_KeyNumber_2(int32_t value)
	{
		___KeyNumber_2 = value;
	}

	inline static int32_t get_offset_of_ProviderName_3() { return static_cast<int32_t>(offsetof(CspParameters_t1669159204, ___ProviderName_3)); }
	inline String_t* get_ProviderName_3() const { return ___ProviderName_3; }
	inline String_t** get_address_of_ProviderName_3() { return &___ProviderName_3; }
	inline void set_ProviderName_3(String_t* value)
	{
		___ProviderName_3 = value;
		Il2CppCodeGenWriteBarrier((&___ProviderName_3), value);
	}

	inline static int32_t get_offset_of_ProviderType_4() { return static_cast<int32_t>(offsetof(CspParameters_t1669159204, ___ProviderType_4)); }
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
#endif // CSPPARAMETERS_T1669159204_H
#ifndef CRYPTOGRAPHICUNEXPECTEDOPERATIONEXCEPTION_T2249076850_H
#define CRYPTOGRAPHICUNEXPECTEDOPERATIONEXCEPTION_T2249076850_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CryptographicUnexpectedOperationException
struct  CryptographicUnexpectedOperationException_t2249076850  : public CryptographicException_t3415653120
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRYPTOGRAPHICUNEXPECTEDOPERATIONEXCEPTION_T2249076850_H
#ifndef DES_T447963708_H
#define DES_T447963708_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DES
struct  DES_t447963708  : public SymmetricAlgorithm_t1498077059
{
public:

public:
};

struct DES_t447963708_StaticFields
{
public:
	// System.Byte[,] System.Security.Cryptography.DES::weakKeys
	ByteU5BU2CU5D_t3990433867* ___weakKeys_10;
	// System.Byte[,] System.Security.Cryptography.DES::semiWeakKeys
	ByteU5BU2CU5D_t3990433867* ___semiWeakKeys_11;

public:
	inline static int32_t get_offset_of_weakKeys_10() { return static_cast<int32_t>(offsetof(DES_t447963708_StaticFields, ___weakKeys_10)); }
	inline ByteU5BU2CU5D_t3990433867* get_weakKeys_10() const { return ___weakKeys_10; }
	inline ByteU5BU2CU5D_t3990433867** get_address_of_weakKeys_10() { return &___weakKeys_10; }
	inline void set_weakKeys_10(ByteU5BU2CU5D_t3990433867* value)
	{
		___weakKeys_10 = value;
		Il2CppCodeGenWriteBarrier((&___weakKeys_10), value);
	}

	inline static int32_t get_offset_of_semiWeakKeys_11() { return static_cast<int32_t>(offsetof(DES_t447963708_StaticFields, ___semiWeakKeys_11)); }
	inline ByteU5BU2CU5D_t3990433867* get_semiWeakKeys_11() const { return ___semiWeakKeys_11; }
	inline ByteU5BU2CU5D_t3990433867** get_address_of_semiWeakKeys_11() { return &___semiWeakKeys_11; }
	inline void set_semiWeakKeys_11(ByteU5BU2CU5D_t3990433867* value)
	{
		___semiWeakKeys_11 = value;
		Il2CppCodeGenWriteBarrier((&___semiWeakKeys_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DES_T447963708_H
#ifndef CALLBACKHANDLER_T3526672660_H
#define CALLBACKHANDLER_T3526672660_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.SerializationCallbacks/CallbackHandler
struct  CallbackHandler_t3526672660  : public MulticastDelegate_t3254873941
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CALLBACKHANDLER_T3526672660_H
#ifndef SERIALIZATIONOBJECTMANAGER_T3576185283_H
#define SERIALIZATIONOBJECTMANAGER_T3576185283_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.SerializationObjectManager
struct  SerializationObjectManager_t3576185283  : public RuntimeObject
{
public:
	// System.Runtime.Serialization.StreamingContext System.Runtime.Serialization.SerializationObjectManager::context
	StreamingContext_t1146178153  ___context_0;
	// System.Collections.Hashtable System.Runtime.Serialization.SerializationObjectManager::seen
	Hashtable_t1579358919 * ___seen_1;
	// System.Runtime.Serialization.SerializationCallbacks/CallbackHandler System.Runtime.Serialization.SerializationObjectManager::callbacks
	CallbackHandler_t3526672660 * ___callbacks_2;

public:
	inline static int32_t get_offset_of_context_0() { return static_cast<int32_t>(offsetof(SerializationObjectManager_t3576185283, ___context_0)); }
	inline StreamingContext_t1146178153  get_context_0() const { return ___context_0; }
	inline StreamingContext_t1146178153 * get_address_of_context_0() { return &___context_0; }
	inline void set_context_0(StreamingContext_t1146178153  value)
	{
		___context_0 = value;
	}

	inline static int32_t get_offset_of_seen_1() { return static_cast<int32_t>(offsetof(SerializationObjectManager_t3576185283, ___seen_1)); }
	inline Hashtable_t1579358919 * get_seen_1() const { return ___seen_1; }
	inline Hashtable_t1579358919 ** get_address_of_seen_1() { return &___seen_1; }
	inline void set_seen_1(Hashtable_t1579358919 * value)
	{
		___seen_1 = value;
		Il2CppCodeGenWriteBarrier((&___seen_1), value);
	}

	inline static int32_t get_offset_of_callbacks_2() { return static_cast<int32_t>(offsetof(SerializationObjectManager_t3576185283, ___callbacks_2)); }
	inline CallbackHandler_t3526672660 * get_callbacks_2() const { return ___callbacks_2; }
	inline CallbackHandler_t3526672660 ** get_address_of_callbacks_2() { return &___callbacks_2; }
	inline void set_callbacks_2(CallbackHandler_t3526672660 * value)
	{
		___callbacks_2 = value;
		Il2CppCodeGenWriteBarrier((&___callbacks_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZATIONOBJECTMANAGER_T3576185283_H
#ifndef BINARYFORMATTER_T1447415980_H
#define BINARYFORMATTER_T1447415980_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
struct  BinaryFormatter_t1447415980  : public RuntimeObject
{
public:
	// System.Runtime.Serialization.Formatters.FormatterAssemblyStyle System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::assembly_format
	int32_t ___assembly_format_0;
	// System.Runtime.Serialization.SerializationBinder System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::binder
	SerializationBinder_t4050263501 * ___binder_1;
	// System.Runtime.Serialization.StreamingContext System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::context
	StreamingContext_t1146178153  ___context_2;
	// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::surrogate_selector
	RuntimeObject* ___surrogate_selector_3;
	// System.Runtime.Serialization.Formatters.FormatterTypeStyle System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::type_format
	int32_t ___type_format_4;
	// System.Runtime.Serialization.Formatters.TypeFilterLevel System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::filter_level
	int32_t ___filter_level_5;

public:
	inline static int32_t get_offset_of_assembly_format_0() { return static_cast<int32_t>(offsetof(BinaryFormatter_t1447415980, ___assembly_format_0)); }
	inline int32_t get_assembly_format_0() const { return ___assembly_format_0; }
	inline int32_t* get_address_of_assembly_format_0() { return &___assembly_format_0; }
	inline void set_assembly_format_0(int32_t value)
	{
		___assembly_format_0 = value;
	}

	inline static int32_t get_offset_of_binder_1() { return static_cast<int32_t>(offsetof(BinaryFormatter_t1447415980, ___binder_1)); }
	inline SerializationBinder_t4050263501 * get_binder_1() const { return ___binder_1; }
	inline SerializationBinder_t4050263501 ** get_address_of_binder_1() { return &___binder_1; }
	inline void set_binder_1(SerializationBinder_t4050263501 * value)
	{
		___binder_1 = value;
		Il2CppCodeGenWriteBarrier((&___binder_1), value);
	}

	inline static int32_t get_offset_of_context_2() { return static_cast<int32_t>(offsetof(BinaryFormatter_t1447415980, ___context_2)); }
	inline StreamingContext_t1146178153  get_context_2() const { return ___context_2; }
	inline StreamingContext_t1146178153 * get_address_of_context_2() { return &___context_2; }
	inline void set_context_2(StreamingContext_t1146178153  value)
	{
		___context_2 = value;
	}

	inline static int32_t get_offset_of_surrogate_selector_3() { return static_cast<int32_t>(offsetof(BinaryFormatter_t1447415980, ___surrogate_selector_3)); }
	inline RuntimeObject* get_surrogate_selector_3() const { return ___surrogate_selector_3; }
	inline RuntimeObject** get_address_of_surrogate_selector_3() { return &___surrogate_selector_3; }
	inline void set_surrogate_selector_3(RuntimeObject* value)
	{
		___surrogate_selector_3 = value;
		Il2CppCodeGenWriteBarrier((&___surrogate_selector_3), value);
	}

	inline static int32_t get_offset_of_type_format_4() { return static_cast<int32_t>(offsetof(BinaryFormatter_t1447415980, ___type_format_4)); }
	inline int32_t get_type_format_4() const { return ___type_format_4; }
	inline int32_t* get_address_of_type_format_4() { return &___type_format_4; }
	inline void set_type_format_4(int32_t value)
	{
		___type_format_4 = value;
	}

	inline static int32_t get_offset_of_filter_level_5() { return static_cast<int32_t>(offsetof(BinaryFormatter_t1447415980, ___filter_level_5)); }
	inline int32_t get_filter_level_5() const { return ___filter_level_5; }
	inline int32_t* get_address_of_filter_level_5() { return &___filter_level_5; }
	inline void set_filter_level_5(int32_t value)
	{
		___filter_level_5 = value;
	}
};

struct BinaryFormatter_t1447415980_StaticFields
{
public:
	// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::<DefaultSurrogateSelector>k__BackingField
	RuntimeObject* ___U3CDefaultSurrogateSelectorU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CDefaultSurrogateSelectorU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(BinaryFormatter_t1447415980_StaticFields, ___U3CDefaultSurrogateSelectorU3Ek__BackingField_6)); }
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
#endif // BINARYFORMATTER_T1447415980_H
#ifndef OBJECTREADER_T1317585848_H
#define OBJECTREADER_T1317585848_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.ObjectReader
struct  ObjectReader_t1317585848  : public RuntimeObject
{
public:
	// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.Formatters.Binary.ObjectReader::_surrogateSelector
	RuntimeObject* ____surrogateSelector_0;
	// System.Runtime.Serialization.StreamingContext System.Runtime.Serialization.Formatters.Binary.ObjectReader::_context
	StreamingContext_t1146178153  ____context_1;
	// System.Runtime.Serialization.SerializationBinder System.Runtime.Serialization.Formatters.Binary.ObjectReader::_binder
	SerializationBinder_t4050263501 * ____binder_2;
	// System.Runtime.Serialization.Formatters.TypeFilterLevel System.Runtime.Serialization.Formatters.Binary.ObjectReader::_filterLevel
	int32_t ____filterLevel_3;
	// System.Runtime.Serialization.ObjectManager System.Runtime.Serialization.Formatters.Binary.ObjectReader::_manager
	ObjectManager_t1434841127 * ____manager_4;
	// System.Collections.Hashtable System.Runtime.Serialization.Formatters.Binary.ObjectReader::_registeredAssemblies
	Hashtable_t1579358919 * ____registeredAssemblies_5;
	// System.Collections.Hashtable System.Runtime.Serialization.Formatters.Binary.ObjectReader::_typeMetadataCache
	Hashtable_t1579358919 * ____typeMetadataCache_6;
	// System.Object System.Runtime.Serialization.Formatters.Binary.ObjectReader::_lastObject
	RuntimeObject * ____lastObject_7;
	// System.Int64 System.Runtime.Serialization.Formatters.Binary.ObjectReader::_lastObjectID
	int64_t ____lastObjectID_8;
	// System.Int64 System.Runtime.Serialization.Formatters.Binary.ObjectReader::_rootObjectID
	int64_t ____rootObjectID_9;
	// System.Byte[] System.Runtime.Serialization.Formatters.Binary.ObjectReader::arrayBuffer
	ByteU5BU5D_t3990433866* ___arrayBuffer_10;
	// System.Int32 System.Runtime.Serialization.Formatters.Binary.ObjectReader::ArrayBufferLength
	int32_t ___ArrayBufferLength_11;

public:
	inline static int32_t get_offset_of__surrogateSelector_0() { return static_cast<int32_t>(offsetof(ObjectReader_t1317585848, ____surrogateSelector_0)); }
	inline RuntimeObject* get__surrogateSelector_0() const { return ____surrogateSelector_0; }
	inline RuntimeObject** get_address_of__surrogateSelector_0() { return &____surrogateSelector_0; }
	inline void set__surrogateSelector_0(RuntimeObject* value)
	{
		____surrogateSelector_0 = value;
		Il2CppCodeGenWriteBarrier((&____surrogateSelector_0), value);
	}

	inline static int32_t get_offset_of__context_1() { return static_cast<int32_t>(offsetof(ObjectReader_t1317585848, ____context_1)); }
	inline StreamingContext_t1146178153  get__context_1() const { return ____context_1; }
	inline StreamingContext_t1146178153 * get_address_of__context_1() { return &____context_1; }
	inline void set__context_1(StreamingContext_t1146178153  value)
	{
		____context_1 = value;
	}

	inline static int32_t get_offset_of__binder_2() { return static_cast<int32_t>(offsetof(ObjectReader_t1317585848, ____binder_2)); }
	inline SerializationBinder_t4050263501 * get__binder_2() const { return ____binder_2; }
	inline SerializationBinder_t4050263501 ** get_address_of__binder_2() { return &____binder_2; }
	inline void set__binder_2(SerializationBinder_t4050263501 * value)
	{
		____binder_2 = value;
		Il2CppCodeGenWriteBarrier((&____binder_2), value);
	}

	inline static int32_t get_offset_of__filterLevel_3() { return static_cast<int32_t>(offsetof(ObjectReader_t1317585848, ____filterLevel_3)); }
	inline int32_t get__filterLevel_3() const { return ____filterLevel_3; }
	inline int32_t* get_address_of__filterLevel_3() { return &____filterLevel_3; }
	inline void set__filterLevel_3(int32_t value)
	{
		____filterLevel_3 = value;
	}

	inline static int32_t get_offset_of__manager_4() { return static_cast<int32_t>(offsetof(ObjectReader_t1317585848, ____manager_4)); }
	inline ObjectManager_t1434841127 * get__manager_4() const { return ____manager_4; }
	inline ObjectManager_t1434841127 ** get_address_of__manager_4() { return &____manager_4; }
	inline void set__manager_4(ObjectManager_t1434841127 * value)
	{
		____manager_4 = value;
		Il2CppCodeGenWriteBarrier((&____manager_4), value);
	}

	inline static int32_t get_offset_of__registeredAssemblies_5() { return static_cast<int32_t>(offsetof(ObjectReader_t1317585848, ____registeredAssemblies_5)); }
	inline Hashtable_t1579358919 * get__registeredAssemblies_5() const { return ____registeredAssemblies_5; }
	inline Hashtable_t1579358919 ** get_address_of__registeredAssemblies_5() { return &____registeredAssemblies_5; }
	inline void set__registeredAssemblies_5(Hashtable_t1579358919 * value)
	{
		____registeredAssemblies_5 = value;
		Il2CppCodeGenWriteBarrier((&____registeredAssemblies_5), value);
	}

	inline static int32_t get_offset_of__typeMetadataCache_6() { return static_cast<int32_t>(offsetof(ObjectReader_t1317585848, ____typeMetadataCache_6)); }
	inline Hashtable_t1579358919 * get__typeMetadataCache_6() const { return ____typeMetadataCache_6; }
	inline Hashtable_t1579358919 ** get_address_of__typeMetadataCache_6() { return &____typeMetadataCache_6; }
	inline void set__typeMetadataCache_6(Hashtable_t1579358919 * value)
	{
		____typeMetadataCache_6 = value;
		Il2CppCodeGenWriteBarrier((&____typeMetadataCache_6), value);
	}

	inline static int32_t get_offset_of__lastObject_7() { return static_cast<int32_t>(offsetof(ObjectReader_t1317585848, ____lastObject_7)); }
	inline RuntimeObject * get__lastObject_7() const { return ____lastObject_7; }
	inline RuntimeObject ** get_address_of__lastObject_7() { return &____lastObject_7; }
	inline void set__lastObject_7(RuntimeObject * value)
	{
		____lastObject_7 = value;
		Il2CppCodeGenWriteBarrier((&____lastObject_7), value);
	}

	inline static int32_t get_offset_of__lastObjectID_8() { return static_cast<int32_t>(offsetof(ObjectReader_t1317585848, ____lastObjectID_8)); }
	inline int64_t get__lastObjectID_8() const { return ____lastObjectID_8; }
	inline int64_t* get_address_of__lastObjectID_8() { return &____lastObjectID_8; }
	inline void set__lastObjectID_8(int64_t value)
	{
		____lastObjectID_8 = value;
	}

	inline static int32_t get_offset_of__rootObjectID_9() { return static_cast<int32_t>(offsetof(ObjectReader_t1317585848, ____rootObjectID_9)); }
	inline int64_t get__rootObjectID_9() const { return ____rootObjectID_9; }
	inline int64_t* get_address_of__rootObjectID_9() { return &____rootObjectID_9; }
	inline void set__rootObjectID_9(int64_t value)
	{
		____rootObjectID_9 = value;
	}

	inline static int32_t get_offset_of_arrayBuffer_10() { return static_cast<int32_t>(offsetof(ObjectReader_t1317585848, ___arrayBuffer_10)); }
	inline ByteU5BU5D_t3990433866* get_arrayBuffer_10() const { return ___arrayBuffer_10; }
	inline ByteU5BU5D_t3990433866** get_address_of_arrayBuffer_10() { return &___arrayBuffer_10; }
	inline void set_arrayBuffer_10(ByteU5BU5D_t3990433866* value)
	{
		___arrayBuffer_10 = value;
		Il2CppCodeGenWriteBarrier((&___arrayBuffer_10), value);
	}

	inline static int32_t get_offset_of_ArrayBufferLength_11() { return static_cast<int32_t>(offsetof(ObjectReader_t1317585848, ___ArrayBufferLength_11)); }
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
#endif // OBJECTREADER_T1317585848_H
#ifndef OBJECTMANAGER_T1434841127_H
#define OBJECTMANAGER_T1434841127_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.ObjectManager
struct  ObjectManager_t1434841127  : public RuntimeObject
{
public:
	// System.Runtime.Serialization.ObjectRecord System.Runtime.Serialization.ObjectManager::_objectRecordChain
	ObjectRecord_t3234148837 * ____objectRecordChain_0;
	// System.Runtime.Serialization.ObjectRecord System.Runtime.Serialization.ObjectManager::_lastObjectRecord
	ObjectRecord_t3234148837 * ____lastObjectRecord_1;
	// System.Collections.ArrayList System.Runtime.Serialization.ObjectManager::_deserializedRecords
	ArrayList_t1004296020 * ____deserializedRecords_2;
	// System.Collections.ArrayList System.Runtime.Serialization.ObjectManager::_onDeserializedCallbackRecords
	ArrayList_t1004296020 * ____onDeserializedCallbackRecords_3;
	// System.Collections.Hashtable System.Runtime.Serialization.ObjectManager::_objectRecords
	Hashtable_t1579358919 * ____objectRecords_4;
	// System.Boolean System.Runtime.Serialization.ObjectManager::_finalFixup
	bool ____finalFixup_5;
	// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.ObjectManager::_selector
	RuntimeObject* ____selector_6;
	// System.Runtime.Serialization.StreamingContext System.Runtime.Serialization.ObjectManager::_context
	StreamingContext_t1146178153  ____context_7;
	// System.Int32 System.Runtime.Serialization.ObjectManager::_registeredObjectsCount
	int32_t ____registeredObjectsCount_8;

public:
	inline static int32_t get_offset_of__objectRecordChain_0() { return static_cast<int32_t>(offsetof(ObjectManager_t1434841127, ____objectRecordChain_0)); }
	inline ObjectRecord_t3234148837 * get__objectRecordChain_0() const { return ____objectRecordChain_0; }
	inline ObjectRecord_t3234148837 ** get_address_of__objectRecordChain_0() { return &____objectRecordChain_0; }
	inline void set__objectRecordChain_0(ObjectRecord_t3234148837 * value)
	{
		____objectRecordChain_0 = value;
		Il2CppCodeGenWriteBarrier((&____objectRecordChain_0), value);
	}

	inline static int32_t get_offset_of__lastObjectRecord_1() { return static_cast<int32_t>(offsetof(ObjectManager_t1434841127, ____lastObjectRecord_1)); }
	inline ObjectRecord_t3234148837 * get__lastObjectRecord_1() const { return ____lastObjectRecord_1; }
	inline ObjectRecord_t3234148837 ** get_address_of__lastObjectRecord_1() { return &____lastObjectRecord_1; }
	inline void set__lastObjectRecord_1(ObjectRecord_t3234148837 * value)
	{
		____lastObjectRecord_1 = value;
		Il2CppCodeGenWriteBarrier((&____lastObjectRecord_1), value);
	}

	inline static int32_t get_offset_of__deserializedRecords_2() { return static_cast<int32_t>(offsetof(ObjectManager_t1434841127, ____deserializedRecords_2)); }
	inline ArrayList_t1004296020 * get__deserializedRecords_2() const { return ____deserializedRecords_2; }
	inline ArrayList_t1004296020 ** get_address_of__deserializedRecords_2() { return &____deserializedRecords_2; }
	inline void set__deserializedRecords_2(ArrayList_t1004296020 * value)
	{
		____deserializedRecords_2 = value;
		Il2CppCodeGenWriteBarrier((&____deserializedRecords_2), value);
	}

	inline static int32_t get_offset_of__onDeserializedCallbackRecords_3() { return static_cast<int32_t>(offsetof(ObjectManager_t1434841127, ____onDeserializedCallbackRecords_3)); }
	inline ArrayList_t1004296020 * get__onDeserializedCallbackRecords_3() const { return ____onDeserializedCallbackRecords_3; }
	inline ArrayList_t1004296020 ** get_address_of__onDeserializedCallbackRecords_3() { return &____onDeserializedCallbackRecords_3; }
	inline void set__onDeserializedCallbackRecords_3(ArrayList_t1004296020 * value)
	{
		____onDeserializedCallbackRecords_3 = value;
		Il2CppCodeGenWriteBarrier((&____onDeserializedCallbackRecords_3), value);
	}

	inline static int32_t get_offset_of__objectRecords_4() { return static_cast<int32_t>(offsetof(ObjectManager_t1434841127, ____objectRecords_4)); }
	inline Hashtable_t1579358919 * get__objectRecords_4() const { return ____objectRecords_4; }
	inline Hashtable_t1579358919 ** get_address_of__objectRecords_4() { return &____objectRecords_4; }
	inline void set__objectRecords_4(Hashtable_t1579358919 * value)
	{
		____objectRecords_4 = value;
		Il2CppCodeGenWriteBarrier((&____objectRecords_4), value);
	}

	inline static int32_t get_offset_of__finalFixup_5() { return static_cast<int32_t>(offsetof(ObjectManager_t1434841127, ____finalFixup_5)); }
	inline bool get__finalFixup_5() const { return ____finalFixup_5; }
	inline bool* get_address_of__finalFixup_5() { return &____finalFixup_5; }
	inline void set__finalFixup_5(bool value)
	{
		____finalFixup_5 = value;
	}

	inline static int32_t get_offset_of__selector_6() { return static_cast<int32_t>(offsetof(ObjectManager_t1434841127, ____selector_6)); }
	inline RuntimeObject* get__selector_6() const { return ____selector_6; }
	inline RuntimeObject** get_address_of__selector_6() { return &____selector_6; }
	inline void set__selector_6(RuntimeObject* value)
	{
		____selector_6 = value;
		Il2CppCodeGenWriteBarrier((&____selector_6), value);
	}

	inline static int32_t get_offset_of__context_7() { return static_cast<int32_t>(offsetof(ObjectManager_t1434841127, ____context_7)); }
	inline StreamingContext_t1146178153  get__context_7() const { return ____context_7; }
	inline StreamingContext_t1146178153 * get_address_of__context_7() { return &____context_7; }
	inline void set__context_7(StreamingContext_t1146178153  value)
	{
		____context_7 = value;
	}

	inline static int32_t get_offset_of__registeredObjectsCount_8() { return static_cast<int32_t>(offsetof(ObjectManager_t1434841127, ____registeredObjectsCount_8)); }
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
#endif // OBJECTMANAGER_T1434841127_H
#ifndef OBJECTWRITER_T511968513_H
#define OBJECTWRITER_T511968513_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.ObjectWriter
struct  ObjectWriter_t511968513  : public RuntimeObject
{
public:
	// System.Runtime.Serialization.ObjectIDGenerator System.Runtime.Serialization.Formatters.Binary.ObjectWriter::_idGenerator
	ObjectIDGenerator_t4215037785 * ____idGenerator_0;
	// System.Collections.Hashtable System.Runtime.Serialization.Formatters.Binary.ObjectWriter::_cachedMetadata
	Hashtable_t1579358919 * ____cachedMetadata_1;
	// System.Collections.Queue System.Runtime.Serialization.Formatters.Binary.ObjectWriter::_pendingObjects
	Queue_t2560182507 * ____pendingObjects_2;
	// System.Collections.Hashtable System.Runtime.Serialization.Formatters.Binary.ObjectWriter::_assemblyCache
	Hashtable_t1579358919 * ____assemblyCache_3;
	// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.Formatters.Binary.ObjectWriter::_surrogateSelector
	RuntimeObject* ____surrogateSelector_7;
	// System.Runtime.Serialization.StreamingContext System.Runtime.Serialization.Formatters.Binary.ObjectWriter::_context
	StreamingContext_t1146178153  ____context_8;
	// System.Runtime.Serialization.Formatters.FormatterAssemblyStyle System.Runtime.Serialization.Formatters.Binary.ObjectWriter::_assemblyFormat
	int32_t ____assemblyFormat_9;
	// System.Runtime.Serialization.Formatters.FormatterTypeStyle System.Runtime.Serialization.Formatters.Binary.ObjectWriter::_typeFormat
	int32_t ____typeFormat_10;
	// System.Byte[] System.Runtime.Serialization.Formatters.Binary.ObjectWriter::arrayBuffer
	ByteU5BU5D_t3990433866* ___arrayBuffer_11;
	// System.Int32 System.Runtime.Serialization.Formatters.Binary.ObjectWriter::ArrayBufferLength
	int32_t ___ArrayBufferLength_12;
	// System.Runtime.Serialization.SerializationObjectManager System.Runtime.Serialization.Formatters.Binary.ObjectWriter::_manager
	SerializationObjectManager_t3576185283 * ____manager_13;

public:
	inline static int32_t get_offset_of__idGenerator_0() { return static_cast<int32_t>(offsetof(ObjectWriter_t511968513, ____idGenerator_0)); }
	inline ObjectIDGenerator_t4215037785 * get__idGenerator_0() const { return ____idGenerator_0; }
	inline ObjectIDGenerator_t4215037785 ** get_address_of__idGenerator_0() { return &____idGenerator_0; }
	inline void set__idGenerator_0(ObjectIDGenerator_t4215037785 * value)
	{
		____idGenerator_0 = value;
		Il2CppCodeGenWriteBarrier((&____idGenerator_0), value);
	}

	inline static int32_t get_offset_of__cachedMetadata_1() { return static_cast<int32_t>(offsetof(ObjectWriter_t511968513, ____cachedMetadata_1)); }
	inline Hashtable_t1579358919 * get__cachedMetadata_1() const { return ____cachedMetadata_1; }
	inline Hashtable_t1579358919 ** get_address_of__cachedMetadata_1() { return &____cachedMetadata_1; }
	inline void set__cachedMetadata_1(Hashtable_t1579358919 * value)
	{
		____cachedMetadata_1 = value;
		Il2CppCodeGenWriteBarrier((&____cachedMetadata_1), value);
	}

	inline static int32_t get_offset_of__pendingObjects_2() { return static_cast<int32_t>(offsetof(ObjectWriter_t511968513, ____pendingObjects_2)); }
	inline Queue_t2560182507 * get__pendingObjects_2() const { return ____pendingObjects_2; }
	inline Queue_t2560182507 ** get_address_of__pendingObjects_2() { return &____pendingObjects_2; }
	inline void set__pendingObjects_2(Queue_t2560182507 * value)
	{
		____pendingObjects_2 = value;
		Il2CppCodeGenWriteBarrier((&____pendingObjects_2), value);
	}

	inline static int32_t get_offset_of__assemblyCache_3() { return static_cast<int32_t>(offsetof(ObjectWriter_t511968513, ____assemblyCache_3)); }
	inline Hashtable_t1579358919 * get__assemblyCache_3() const { return ____assemblyCache_3; }
	inline Hashtable_t1579358919 ** get_address_of__assemblyCache_3() { return &____assemblyCache_3; }
	inline void set__assemblyCache_3(Hashtable_t1579358919 * value)
	{
		____assemblyCache_3 = value;
		Il2CppCodeGenWriteBarrier((&____assemblyCache_3), value);
	}

	inline static int32_t get_offset_of__surrogateSelector_7() { return static_cast<int32_t>(offsetof(ObjectWriter_t511968513, ____surrogateSelector_7)); }
	inline RuntimeObject* get__surrogateSelector_7() const { return ____surrogateSelector_7; }
	inline RuntimeObject** get_address_of__surrogateSelector_7() { return &____surrogateSelector_7; }
	inline void set__surrogateSelector_7(RuntimeObject* value)
	{
		____surrogateSelector_7 = value;
		Il2CppCodeGenWriteBarrier((&____surrogateSelector_7), value);
	}

	inline static int32_t get_offset_of__context_8() { return static_cast<int32_t>(offsetof(ObjectWriter_t511968513, ____context_8)); }
	inline StreamingContext_t1146178153  get__context_8() const { return ____context_8; }
	inline StreamingContext_t1146178153 * get_address_of__context_8() { return &____context_8; }
	inline void set__context_8(StreamingContext_t1146178153  value)
	{
		____context_8 = value;
	}

	inline static int32_t get_offset_of__assemblyFormat_9() { return static_cast<int32_t>(offsetof(ObjectWriter_t511968513, ____assemblyFormat_9)); }
	inline int32_t get__assemblyFormat_9() const { return ____assemblyFormat_9; }
	inline int32_t* get_address_of__assemblyFormat_9() { return &____assemblyFormat_9; }
	inline void set__assemblyFormat_9(int32_t value)
	{
		____assemblyFormat_9 = value;
	}

	inline static int32_t get_offset_of__typeFormat_10() { return static_cast<int32_t>(offsetof(ObjectWriter_t511968513, ____typeFormat_10)); }
	inline int32_t get__typeFormat_10() const { return ____typeFormat_10; }
	inline int32_t* get_address_of__typeFormat_10() { return &____typeFormat_10; }
	inline void set__typeFormat_10(int32_t value)
	{
		____typeFormat_10 = value;
	}

	inline static int32_t get_offset_of_arrayBuffer_11() { return static_cast<int32_t>(offsetof(ObjectWriter_t511968513, ___arrayBuffer_11)); }
	inline ByteU5BU5D_t3990433866* get_arrayBuffer_11() const { return ___arrayBuffer_11; }
	inline ByteU5BU5D_t3990433866** get_address_of_arrayBuffer_11() { return &___arrayBuffer_11; }
	inline void set_arrayBuffer_11(ByteU5BU5D_t3990433866* value)
	{
		___arrayBuffer_11 = value;
		Il2CppCodeGenWriteBarrier((&___arrayBuffer_11), value);
	}

	inline static int32_t get_offset_of_ArrayBufferLength_12() { return static_cast<int32_t>(offsetof(ObjectWriter_t511968513, ___ArrayBufferLength_12)); }
	inline int32_t get_ArrayBufferLength_12() const { return ___ArrayBufferLength_12; }
	inline int32_t* get_address_of_ArrayBufferLength_12() { return &___ArrayBufferLength_12; }
	inline void set_ArrayBufferLength_12(int32_t value)
	{
		___ArrayBufferLength_12 = value;
	}

	inline static int32_t get_offset_of__manager_13() { return static_cast<int32_t>(offsetof(ObjectWriter_t511968513, ____manager_13)); }
	inline SerializationObjectManager_t3576185283 * get__manager_13() const { return ____manager_13; }
	inline SerializationObjectManager_t3576185283 ** get_address_of__manager_13() { return &____manager_13; }
	inline void set__manager_13(SerializationObjectManager_t3576185283 * value)
	{
		____manager_13 = value;
		Il2CppCodeGenWriteBarrier((&____manager_13), value);
	}
};

struct ObjectWriter_t511968513_StaticFields
{
public:
	// System.Collections.Hashtable System.Runtime.Serialization.Formatters.Binary.ObjectWriter::_cachedTypes
	Hashtable_t1579358919 * ____cachedTypes_4;
	// System.Reflection.Assembly System.Runtime.Serialization.Formatters.Binary.ObjectWriter::CorlibAssembly
	Assembly_t128959728 * ___CorlibAssembly_5;
	// System.String System.Runtime.Serialization.Formatters.Binary.ObjectWriter::CorlibAssemblyName
	String_t* ___CorlibAssemblyName_6;

public:
	inline static int32_t get_offset_of__cachedTypes_4() { return static_cast<int32_t>(offsetof(ObjectWriter_t511968513_StaticFields, ____cachedTypes_4)); }
	inline Hashtable_t1579358919 * get__cachedTypes_4() const { return ____cachedTypes_4; }
	inline Hashtable_t1579358919 ** get_address_of__cachedTypes_4() { return &____cachedTypes_4; }
	inline void set__cachedTypes_4(Hashtable_t1579358919 * value)
	{
		____cachedTypes_4 = value;
		Il2CppCodeGenWriteBarrier((&____cachedTypes_4), value);
	}

	inline static int32_t get_offset_of_CorlibAssembly_5() { return static_cast<int32_t>(offsetof(ObjectWriter_t511968513_StaticFields, ___CorlibAssembly_5)); }
	inline Assembly_t128959728 * get_CorlibAssembly_5() const { return ___CorlibAssembly_5; }
	inline Assembly_t128959728 ** get_address_of_CorlibAssembly_5() { return &___CorlibAssembly_5; }
	inline void set_CorlibAssembly_5(Assembly_t128959728 * value)
	{
		___CorlibAssembly_5 = value;
		Il2CppCodeGenWriteBarrier((&___CorlibAssembly_5), value);
	}

	inline static int32_t get_offset_of_CorlibAssemblyName_6() { return static_cast<int32_t>(offsetof(ObjectWriter_t511968513_StaticFields, ___CorlibAssemblyName_6)); }
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
#endif // OBJECTWRITER_T511968513_H
#ifndef RC2_T2264744279_H
#define RC2_T2264744279_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RC2
struct  RC2_t2264744279  : public SymmetricAlgorithm_t1498077059
{
public:
	// System.Int32 System.Security.Cryptography.RC2::EffectiveKeySizeValue
	int32_t ___EffectiveKeySizeValue_10;

public:
	inline static int32_t get_offset_of_EffectiveKeySizeValue_10() { return static_cast<int32_t>(offsetof(RC2_t2264744279, ___EffectiveKeySizeValue_10)); }
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
#endif // RC2_T2264744279_H
#ifndef RC2CRYPTOSERVICEPROVIDER_T1662150604_H
#define RC2CRYPTOSERVICEPROVIDER_T1662150604_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RC2CryptoServiceProvider
struct  RC2CryptoServiceProvider_t1662150604  : public RC2_t2264744279
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RC2CRYPTOSERVICEPROVIDER_T1662150604_H
#ifndef DESCRYPTOSERVICEPROVIDER_T879929259_H
#define DESCRYPTOSERVICEPROVIDER_T879929259_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DESCryptoServiceProvider
struct  DESCryptoServiceProvider_t879929259  : public DES_t447963708
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESCRYPTOSERVICEPROVIDER_T879929259_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize600 = { sizeof (WellKnownServiceTypeEntry_t2921617485), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable600[3] = 
{
	WellKnownServiceTypeEntry_t2921617485::get_offset_of_obj_type_2(),
	WellKnownServiceTypeEntry_t2921617485::get_offset_of_obj_uri_3(),
	WellKnownServiceTypeEntry_t2921617485::get_offset_of_obj_mode_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize601 = { sizeof (BinaryCommon_t3280615919), -1, sizeof(BinaryCommon_t3280615919_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable601[4] = 
{
	BinaryCommon_t3280615919_StaticFields::get_offset_of_BinaryHeader_0(),
	BinaryCommon_t3280615919_StaticFields::get_offset_of__typeCodesToType_1(),
	BinaryCommon_t3280615919_StaticFields::get_offset_of__typeCodeMap_2(),
	BinaryCommon_t3280615919_StaticFields::get_offset_of_UseReflectionSerialization_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize602 = { sizeof (BinaryElement_t2963338380)+ sizeof (RuntimeObject), sizeof(uint8_t), 0, 0 };
extern const int32_t g_FieldOffsetTable602[24] = 
{
	BinaryElement_t2963338380::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize603 = { sizeof (TypeTag_t2005931834)+ sizeof (RuntimeObject), sizeof(uint8_t), 0, 0 };
extern const int32_t g_FieldOffsetTable603[9] = 
{
	TypeTag_t2005931834::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize604 = { sizeof (MethodFlags_t4003155618)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable604[11] = 
{
	MethodFlags_t4003155618::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize605 = { sizeof (ReturnTypeTag_t668820960)+ sizeof (RuntimeObject), sizeof(uint8_t), 0, 0 };
extern const int32_t g_FieldOffsetTable605[5] = 
{
	ReturnTypeTag_t668820960::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize606 = { sizeof (BinaryFormatter_t1447415980), -1, sizeof(BinaryFormatter_t1447415980_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable606[7] = 
{
	BinaryFormatter_t1447415980::get_offset_of_assembly_format_0(),
	BinaryFormatter_t1447415980::get_offset_of_binder_1(),
	BinaryFormatter_t1447415980::get_offset_of_context_2(),
	BinaryFormatter_t1447415980::get_offset_of_surrogate_selector_3(),
	BinaryFormatter_t1447415980::get_offset_of_type_format_4(),
	BinaryFormatter_t1447415980::get_offset_of_filter_level_5(),
	BinaryFormatter_t1447415980_StaticFields::get_offset_of_U3CDefaultSurrogateSelectorU3Ek__BackingField_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize607 = { sizeof (CodeGenerator_t1797531779), -1, sizeof(CodeGenerator_t1797531779_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable607[2] = 
{
	CodeGenerator_t1797531779_StaticFields::get_offset_of_monitor_0(),
	CodeGenerator_t1797531779_StaticFields::get_offset_of__module_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize608 = { sizeof (MessageFormatter_t3352875929), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize609 = { sizeof (ObjectReader_t1317585848), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable609[12] = 
{
	ObjectReader_t1317585848::get_offset_of__surrogateSelector_0(),
	ObjectReader_t1317585848::get_offset_of__context_1(),
	ObjectReader_t1317585848::get_offset_of__binder_2(),
	ObjectReader_t1317585848::get_offset_of__filterLevel_3(),
	ObjectReader_t1317585848::get_offset_of__manager_4(),
	ObjectReader_t1317585848::get_offset_of__registeredAssemblies_5(),
	ObjectReader_t1317585848::get_offset_of__typeMetadataCache_6(),
	ObjectReader_t1317585848::get_offset_of__lastObject_7(),
	ObjectReader_t1317585848::get_offset_of__lastObjectID_8(),
	ObjectReader_t1317585848::get_offset_of__rootObjectID_9(),
	ObjectReader_t1317585848::get_offset_of_arrayBuffer_10(),
	ObjectReader_t1317585848::get_offset_of_ArrayBufferLength_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize610 = { sizeof (TypeMetadata_t3407038213), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable610[6] = 
{
	TypeMetadata_t3407038213::get_offset_of_Type_0(),
	TypeMetadata_t3407038213::get_offset_of_MemberTypes_1(),
	TypeMetadata_t3407038213::get_offset_of_MemberNames_2(),
	TypeMetadata_t3407038213::get_offset_of_MemberInfos_3(),
	TypeMetadata_t3407038213::get_offset_of_FieldCount_4(),
	TypeMetadata_t3407038213::get_offset_of_NeedsSerializationInfo_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize611 = { sizeof (ArrayNullFiller_t863975317), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable611[1] = 
{
	ArrayNullFiller_t863975317::get_offset_of_NullCount_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize612 = { sizeof (TypeMetadata_t1172931145), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable612[2] = 
{
	TypeMetadata_t1172931145::get_offset_of_TypeAssemblyName_0(),
	TypeMetadata_t1172931145::get_offset_of_InstanceTypeName_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize613 = { sizeof (ClrTypeMetadata_t466399263), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable613[1] = 
{
	ClrTypeMetadata_t466399263::get_offset_of_InstanceType_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize614 = { sizeof (SerializableTypeMetadata_t3367208329), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable614[2] = 
{
	SerializableTypeMetadata_t3367208329::get_offset_of_types_2(),
	SerializableTypeMetadata_t3367208329::get_offset_of_names_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize615 = { sizeof (MemberTypeMetadata_t2320431195), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable615[1] = 
{
	MemberTypeMetadata_t2320431195::get_offset_of_members_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize616 = { sizeof (ObjectWriter_t511968513), -1, sizeof(ObjectWriter_t511968513_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable616[14] = 
{
	ObjectWriter_t511968513::get_offset_of__idGenerator_0(),
	ObjectWriter_t511968513::get_offset_of__cachedMetadata_1(),
	ObjectWriter_t511968513::get_offset_of__pendingObjects_2(),
	ObjectWriter_t511968513::get_offset_of__assemblyCache_3(),
	ObjectWriter_t511968513_StaticFields::get_offset_of__cachedTypes_4(),
	ObjectWriter_t511968513_StaticFields::get_offset_of_CorlibAssembly_5(),
	ObjectWriter_t511968513_StaticFields::get_offset_of_CorlibAssemblyName_6(),
	ObjectWriter_t511968513::get_offset_of__surrogateSelector_7(),
	ObjectWriter_t511968513::get_offset_of__context_8(),
	ObjectWriter_t511968513::get_offset_of__assemblyFormat_9(),
	ObjectWriter_t511968513::get_offset_of__typeFormat_10(),
	ObjectWriter_t511968513::get_offset_of_arrayBuffer_11(),
	ObjectWriter_t511968513::get_offset_of_ArrayBufferLength_12(),
	ObjectWriter_t511968513::get_offset_of__manager_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize617 = { sizeof (MetadataReference_t918723199), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable617[2] = 
{
	MetadataReference_t918723199::get_offset_of_Metadata_0(),
	MetadataReference_t918723199::get_offset_of_ObjectID_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize618 = { sizeof (FormatterAssemblyStyle_t2407195285)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable618[3] = 
{
	FormatterAssemblyStyle_t2407195285::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize619 = { sizeof (FormatterTypeStyle_t2176684481)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable619[4] = 
{
	FormatterTypeStyle_t2176684481::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize620 = { sizeof (TypeFilterLevel_t2647682971)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable620[3] = 
{
	TypeFilterLevel_t2647682971::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize621 = { sizeof (FormatterConverter_t3065389309), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize622 = { sizeof (FormatterServices_t531267777), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize623 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize624 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize625 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize626 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize627 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize628 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize629 = { sizeof (ObjectIDGenerator_t4215037785), -1, sizeof(ObjectIDGenerator_t4215037785_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable629[3] = 
{
	ObjectIDGenerator_t4215037785::get_offset_of_table_0(),
	ObjectIDGenerator_t4215037785::get_offset_of_current_1(),
	ObjectIDGenerator_t4215037785_StaticFields::get_offset_of_comparer_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize630 = { sizeof (InstanceComparer_t2244222394), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize631 = { sizeof (ObjectManager_t1434841127), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable631[9] = 
{
	ObjectManager_t1434841127::get_offset_of__objectRecordChain_0(),
	ObjectManager_t1434841127::get_offset_of__lastObjectRecord_1(),
	ObjectManager_t1434841127::get_offset_of__deserializedRecords_2(),
	ObjectManager_t1434841127::get_offset_of__onDeserializedCallbackRecords_3(),
	ObjectManager_t1434841127::get_offset_of__objectRecords_4(),
	ObjectManager_t1434841127::get_offset_of__finalFixup_5(),
	ObjectManager_t1434841127::get_offset_of__selector_6(),
	ObjectManager_t1434841127::get_offset_of__context_7(),
	ObjectManager_t1434841127::get_offset_of__registeredObjectsCount_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize632 = { sizeof (BaseFixupRecord_t3161779954), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable632[4] = 
{
	BaseFixupRecord_t3161779954::get_offset_of_ObjectToBeFixed_0(),
	BaseFixupRecord_t3161779954::get_offset_of_ObjectRequired_1(),
	BaseFixupRecord_t3161779954::get_offset_of_NextSameContainer_2(),
	BaseFixupRecord_t3161779954::get_offset_of_NextSameRequired_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize633 = { sizeof (ArrayFixupRecord_t2582505736), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable633[1] = 
{
	ArrayFixupRecord_t2582505736::get_offset_of__index_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize634 = { sizeof (MultiArrayFixupRecord_t4067412189), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable634[1] = 
{
	MultiArrayFixupRecord_t4067412189::get_offset_of__indices_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize635 = { sizeof (FixupRecord_t3778010023), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable635[1] = 
{
	FixupRecord_t3778010023::get_offset_of__member_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize636 = { sizeof (DelayedFixupRecord_t3627057507), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable636[1] = 
{
	DelayedFixupRecord_t3627057507::get_offset_of__memberName_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize637 = { sizeof (ObjectRecordStatus_t1267464506)+ sizeof (RuntimeObject), sizeof(uint8_t), 0, 0 };
extern const int32_t g_FieldOffsetTable637[5] = 
{
	ObjectRecordStatus_t1267464506::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize638 = { sizeof (ObjectRecord_t3234148837), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable638[13] = 
{
	ObjectRecord_t3234148837::get_offset_of_Status_0(),
	ObjectRecord_t3234148837::get_offset_of_OriginalObject_1(),
	ObjectRecord_t3234148837::get_offset_of_ObjectInstance_2(),
	ObjectRecord_t3234148837::get_offset_of_ObjectID_3(),
	ObjectRecord_t3234148837::get_offset_of_Info_4(),
	ObjectRecord_t3234148837::get_offset_of_IdOfContainingObj_5(),
	ObjectRecord_t3234148837::get_offset_of_Surrogate_6(),
	ObjectRecord_t3234148837::get_offset_of_SurrogateSelector_7(),
	ObjectRecord_t3234148837::get_offset_of_Member_8(),
	ObjectRecord_t3234148837::get_offset_of_ArrayIndex_9(),
	ObjectRecord_t3234148837::get_offset_of_FixupChainAsContainer_10(),
	ObjectRecord_t3234148837::get_offset_of_FixupChainAsRequired_11(),
	ObjectRecord_t3234148837::get_offset_of_Next_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize639 = { sizeof (OnDeserializedAttribute_t540460072), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize640 = { sizeof (OnDeserializingAttribute_t2863552900), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize641 = { sizeof (OnSerializedAttribute_t1176355932), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize642 = { sizeof (OnSerializingAttribute_t2710306637), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize643 = { sizeof (SerializationBinder_t4050263501), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize644 = { sizeof (SerializationCallbacks_t414149290), -1, sizeof(SerializationCallbacks_t414149290_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable644[6] = 
{
	SerializationCallbacks_t414149290::get_offset_of_onSerializingList_0(),
	SerializationCallbacks_t414149290::get_offset_of_onSerializedList_1(),
	SerializationCallbacks_t414149290::get_offset_of_onDeserializingList_2(),
	SerializationCallbacks_t414149290::get_offset_of_onDeserializedList_3(),
	SerializationCallbacks_t414149290_StaticFields::get_offset_of_cache_4(),
	SerializationCallbacks_t414149290_StaticFields::get_offset_of_cache_lock_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize645 = { sizeof (CallbackHandler_t3526672660), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize646 = { sizeof (SerializationEntry_t1915857778)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable646[3] = 
{
	SerializationEntry_t1915857778::get_offset_of_name_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SerializationEntry_t1915857778::get_offset_of_objectType_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SerializationEntry_t1915857778::get_offset_of_value_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize647 = { sizeof (SerializationException_t4047060329), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize648 = { sizeof (SerializationInfo_t885769560), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable648[5] = 
{
	SerializationInfo_t885769560::get_offset_of_serialized_0(),
	SerializationInfo_t885769560::get_offset_of_values_1(),
	SerializationInfo_t885769560::get_offset_of_assemblyName_2(),
	SerializationInfo_t885769560::get_offset_of_fullTypeName_3(),
	SerializationInfo_t885769560::get_offset_of_converter_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize649 = { sizeof (SerializationInfoEnumerator_t452831660), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable649[1] = 
{
	SerializationInfoEnumerator_t452831660::get_offset_of_enumerator_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize650 = { sizeof (SerializationObjectManager_t3576185283), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable650[3] = 
{
	SerializationObjectManager_t3576185283::get_offset_of_context_0(),
	SerializationObjectManager_t3576185283::get_offset_of_seen_1(),
	SerializationObjectManager_t3576185283::get_offset_of_callbacks_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize651 = { sizeof (U3CRegisterObjectU3Ec__AnonStorey3_t1013927335), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable651[2] = 
{
	U3CRegisterObjectU3Ec__AnonStorey3_t1013927335::get_offset_of_sc_0(),
	U3CRegisterObjectU3Ec__AnonStorey3_t1013927335::get_offset_of_obj_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize652 = { sizeof (StreamingContext_t1146178153)+ sizeof (RuntimeObject), sizeof(StreamingContext_t1146178153_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable652[2] = 
{
	StreamingContext_t1146178153::get_offset_of_state_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	StreamingContext_t1146178153::get_offset_of_additional_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize653 = { sizeof (StreamingContextStates_t1460552126)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable653[10] = 
{
	StreamingContextStates_t1460552126::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize654 = { sizeof (X509Certificate_t1114503308), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable654[5] = 
{
	X509Certificate_t1114503308::get_offset_of_x509_0(),
	X509Certificate_t1114503308::get_offset_of_hideDates_1(),
	X509Certificate_t1114503308::get_offset_of_cachedCertificateHash_2(),
	X509Certificate_t1114503308::get_offset_of_issuer_name_3(),
	X509Certificate_t1114503308::get_offset_of_subject_name_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize655 = { sizeof (X509KeyStorageFlags_t1469237)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable655[7] = 
{
	X509KeyStorageFlags_t1469237::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize656 = { sizeof (AsymmetricAlgorithm_t2026083050), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable656[2] = 
{
	AsymmetricAlgorithm_t2026083050::get_offset_of_KeySizeValue_0(),
	AsymmetricAlgorithm_t2026083050::get_offset_of_LegalKeySizesValue_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize657 = { sizeof (AsymmetricKeyExchangeFormatter_t1045272896), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize658 = { sizeof (AsymmetricSignatureDeformatter_t1028763045), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize659 = { sizeof (AsymmetricSignatureFormatter_t1462125080), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize660 = { sizeof (Base64Constants_t2407081531), -1, sizeof(Base64Constants_t2407081531_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable660[2] = 
{
	Base64Constants_t2407081531_StaticFields::get_offset_of_EncodeTable_0(),
	Base64Constants_t2407081531_StaticFields::get_offset_of_DecodeTable_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize661 = { sizeof (CipherMode_t3345971367)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable661[6] = 
{
	CipherMode_t3345971367::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize662 = { sizeof (CryptoConfig_t958348870), -1, sizeof(CryptoConfig_t958348870_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable662[3] = 
{
	CryptoConfig_t958348870_StaticFields::get_offset_of_lockObject_0(),
	CryptoConfig_t958348870_StaticFields::get_offset_of_algorithms_1(),
	CryptoConfig_t958348870_StaticFields::get_offset_of_oid_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize663 = { sizeof (CryptographicException_t3415653120), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize664 = { sizeof (CryptographicUnexpectedOperationException_t2249076850), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize665 = { sizeof (CspParameters_t1669159204), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable665[5] = 
{
	CspParameters_t1669159204::get_offset_of__Flags_0(),
	CspParameters_t1669159204::get_offset_of_KeyContainerName_1(),
	CspParameters_t1669159204::get_offset_of_KeyNumber_2(),
	CspParameters_t1669159204::get_offset_of_ProviderName_3(),
	CspParameters_t1669159204::get_offset_of_ProviderType_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize666 = { sizeof (CspProviderFlags_t1588602502)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable666[9] = 
{
	CspProviderFlags_t1588602502::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize667 = { sizeof (DES_t447963708), -1, sizeof(DES_t447963708_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable667[2] = 
{
	DES_t447963708_StaticFields::get_offset_of_weakKeys_10(),
	DES_t447963708_StaticFields::get_offset_of_semiWeakKeys_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize668 = { sizeof (DESTransform_t3265887847), -1, sizeof(DESTransform_t3265887847_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable668[13] = 
{
	DESTransform_t3265887847_StaticFields::get_offset_of_KEY_BIT_SIZE_12(),
	DESTransform_t3265887847_StaticFields::get_offset_of_KEY_BYTE_SIZE_13(),
	DESTransform_t3265887847_StaticFields::get_offset_of_BLOCK_BIT_SIZE_14(),
	DESTransform_t3265887847_StaticFields::get_offset_of_BLOCK_BYTE_SIZE_15(),
	DESTransform_t3265887847::get_offset_of_keySchedule_16(),
	DESTransform_t3265887847::get_offset_of_byteBuff_17(),
	DESTransform_t3265887847::get_offset_of_dwordBuff_18(),
	DESTransform_t3265887847_StaticFields::get_offset_of_spBoxes_19(),
	DESTransform_t3265887847_StaticFields::get_offset_of_PC1_20(),
	DESTransform_t3265887847_StaticFields::get_offset_of_leftRotTotal_21(),
	DESTransform_t3265887847_StaticFields::get_offset_of_PC2_22(),
	DESTransform_t3265887847_StaticFields::get_offset_of_ipTab_23(),
	DESTransform_t3265887847_StaticFields::get_offset_of_fpTab_24(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize669 = { sizeof (DESCryptoServiceProvider_t879929259), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize670 = { sizeof (DSA_t3608348530), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize671 = { sizeof (DSACryptoServiceProvider_t2041294013), -1, sizeof(DSACryptoServiceProvider_t2041294013_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable671[7] = 
{
	DSACryptoServiceProvider_t2041294013::get_offset_of_store_2(),
	DSACryptoServiceProvider_t2041294013::get_offset_of_persistKey_3(),
	DSACryptoServiceProvider_t2041294013::get_offset_of_persisted_4(),
	DSACryptoServiceProvider_t2041294013::get_offset_of_privateKeyExportable_5(),
	DSACryptoServiceProvider_t2041294013::get_offset_of_m_disposed_6(),
	DSACryptoServiceProvider_t2041294013::get_offset_of_dsa_7(),
	DSACryptoServiceProvider_t2041294013_StaticFields::get_offset_of_useMachineKeyStore_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize672 = { sizeof (DSAParameters_t1046351410)+ sizeof (RuntimeObject), sizeof(DSAParameters_t1046351410_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable672[8] = 
{
	DSAParameters_t1046351410::get_offset_of_Counter_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DSAParameters_t1046351410::get_offset_of_G_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DSAParameters_t1046351410::get_offset_of_J_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DSAParameters_t1046351410::get_offset_of_P_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DSAParameters_t1046351410::get_offset_of_Q_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DSAParameters_t1046351410::get_offset_of_Seed_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DSAParameters_t1046351410::get_offset_of_X_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DSAParameters_t1046351410::get_offset_of_Y_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize673 = { sizeof (DSASignatureDeformatter_t193203522), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable673[1] = 
{
	DSASignatureDeformatter_t193203522::get_offset_of_dsa_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize674 = { sizeof (DSASignatureFormatter_t1972382306), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable674[1] = 
{
	DSASignatureFormatter_t1972382306::get_offset_of_dsa_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize675 = { sizeof (FromBase64TransformMode_t1604798756)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable675[3] = 
{
	FromBase64TransformMode_t1604798756::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize676 = { sizeof (FromBase64Transform_t4221583335), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable676[5] = 
{
	FromBase64Transform_t4221583335::get_offset_of_mode_0(),
	FromBase64Transform_t4221583335::get_offset_of_accumulator_1(),
	FromBase64Transform_t4221583335::get_offset_of_accPtr_2(),
	FromBase64Transform_t4221583335::get_offset_of_m_disposed_3(),
	FromBase64Transform_t4221583335::get_offset_of_lookupTable_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize677 = { sizeof (HMAC_t3106782751), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable677[5] = 
{
	HMAC_t3106782751::get_offset_of__disposed_5(),
	HMAC_t3106782751::get_offset_of__hashName_6(),
	HMAC_t3106782751::get_offset_of__algo_7(),
	HMAC_t3106782751::get_offset_of__block_8(),
	HMAC_t3106782751::get_offset_of__blockSizeValue_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize678 = { sizeof (HMACMD5_t3396472205), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize679 = { sizeof (HMACRIPEMD160_t3468624741), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize680 = { sizeof (HMACSHA1_t1565523469), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize681 = { sizeof (HMACSHA256_t3662492442), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize682 = { sizeof (HMACSHA384_t3105660592), -1, sizeof(HMACSHA384_t3105660592_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable682[2] = 
{
	HMACSHA384_t3105660592_StaticFields::get_offset_of_legacy_mode_10(),
	HMACSHA384_t3105660592::get_offset_of_legacy_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize683 = { sizeof (HMACSHA512_t3467374628), -1, sizeof(HMACSHA512_t3467374628_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable683[2] = 
{
	HMACSHA512_t3467374628_StaticFields::get_offset_of_legacy_mode_10(),
	HMACSHA512_t3467374628::get_offset_of_legacy_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize684 = { sizeof (HashAlgorithm_t3280178693), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable684[4] = 
{
	HashAlgorithm_t3280178693::get_offset_of_HashValue_0(),
	HashAlgorithm_t3280178693::get_offset_of_HashSizeValue_1(),
	HashAlgorithm_t3280178693::get_offset_of_State_2(),
	HashAlgorithm_t3280178693::get_offset_of_disposed_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize685 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize686 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize687 = { sizeof (KeySizes_t1931695983), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable687[3] = 
{
	KeySizes_t1931695983::get_offset_of__maxSize_0(),
	KeySizes_t1931695983::get_offset_of__minSize_1(),
	KeySizes_t1931695983::get_offset_of__skipSize_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize688 = { sizeof (KeyedHashAlgorithm_t2326381028), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable688[1] = 
{
	KeyedHashAlgorithm_t2326381028::get_offset_of_KeyValue_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize689 = { sizeof (MACTripleDES_t1419238681), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable689[3] = 
{
	MACTripleDES_t1419238681::get_offset_of_tdes_5(),
	MACTripleDES_t1419238681::get_offset_of_mac_6(),
	MACTripleDES_t1419238681::get_offset_of_m_disposed_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize690 = { sizeof (MD5_t2860866956), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize691 = { sizeof (MD5CryptoServiceProvider_t3036191160), -1, sizeof(MD5CryptoServiceProvider_t3036191160_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable691[6] = 
{
	MD5CryptoServiceProvider_t3036191160::get_offset_of__H_4(),
	MD5CryptoServiceProvider_t3036191160::get_offset_of_buff_5(),
	MD5CryptoServiceProvider_t3036191160::get_offset_of_count_6(),
	MD5CryptoServiceProvider_t3036191160::get_offset_of__ProcessingBuffer_7(),
	MD5CryptoServiceProvider_t3036191160::get_offset_of__ProcessingBufferCount_8(),
	MD5CryptoServiceProvider_t3036191160_StaticFields::get_offset_of_K_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize692 = { sizeof (PaddingMode_t3408293858)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable692[6] = 
{
	PaddingMode_t3408293858::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize693 = { sizeof (RC2_t2264744279), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable693[1] = 
{
	RC2_t2264744279::get_offset_of_EffectiveKeySizeValue_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize694 = { sizeof (RC2CryptoServiceProvider_t1662150604), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize695 = { sizeof (RC2Transform_t1938477350), -1, sizeof(RC2Transform_t1938477350_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable695[7] = 
{
	RC2Transform_t1938477350::get_offset_of_R0_12(),
	RC2Transform_t1938477350::get_offset_of_R1_13(),
	RC2Transform_t1938477350::get_offset_of_R2_14(),
	RC2Transform_t1938477350::get_offset_of_R3_15(),
	RC2Transform_t1938477350::get_offset_of_K_16(),
	RC2Transform_t1938477350::get_offset_of_j_17(),
	RC2Transform_t1938477350_StaticFields::get_offset_of_pitable_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize696 = { sizeof (RIPEMD160_t627160908), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize697 = { sizeof (RIPEMD160Managed_t623628547), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable697[5] = 
{
	RIPEMD160Managed_t623628547::get_offset_of__ProcessingBuffer_4(),
	RIPEMD160Managed_t623628547::get_offset_of__X_5(),
	RIPEMD160Managed_t623628547::get_offset_of__HashValue_6(),
	RIPEMD160Managed_t623628547::get_offset_of__Length_7(),
	RIPEMD160Managed_t623628547::get_offset_of__ProcessingBufferCount_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize698 = { sizeof (RNGCryptoServiceProvider_t1039878938), -1, sizeof(RNGCryptoServiceProvider_t1039878938_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable698[2] = 
{
	RNGCryptoServiceProvider_t1039878938_StaticFields::get_offset_of__lock_0(),
	RNGCryptoServiceProvider_t1039878938::get_offset_of__handle_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize699 = { sizeof (RSA_t3500246450), -1, 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif

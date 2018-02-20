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

// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t861333171;
// System.Byte[]
struct ByteU5BU5D_t250263739;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t3399161153;
// System.String
struct String_t;
// Mono.Security.ASN1
struct ASN1_t136638977;
// System.Collections.ArrayList
struct ArrayList_t1666010013;
// Mono.Math.BigInteger
struct BigInteger_t4229345892;
// System.UInt32[]
struct UInt32U5BU5D_t819860844;
// System.Int32[]
struct Int32U5BU5D_t632066244;
// System.IntPtr[]
struct IntPtrU5BU5D_t4221019038;
// System.Collections.IDictionary
struct IDictionary_t797860427;
// System.Char[]
struct CharU5BU5D_t3056575431;
// System.Globalization.CompareInfo
struct CompareInfo_t3479368114;
// System.Void
struct Void_t2367238524;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1049894561;
// System.Collections.Hashtable
struct Hashtable_t4275196815;
// System.Globalization.DaylightTime
struct DaylightTime_t1805797886;
// System.Version
struct Version_t1133533382;
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_t665079470;
// System.UnhandledExceptionEventArgs
struct UnhandledExceptionEventArgs_t525368780;
// System.IAsyncResult
struct IAsyncResult_t794594652;
// System.AsyncCallback
struct AsyncCallback_t1583086916;
// System.Reflection.Assembly
struct Assembly_t3233635170;
// System.ResolveEventArgs
struct ResolveEventArgs_t4290046187;
// System.EventArgs
struct EventArgs_t4100516242;
// System.AssemblyLoadEventArgs
struct AssemblyLoadEventArgs_t2359620872;
// System.String[]
struct StringU5BU5D_t2379194589;
// System.Runtime.Remoting.Messaging.Header[]
struct HeaderU5BU5D_t4151243302;
// Mono.Math.BigInteger
struct BigInteger_t4229345891;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Type
struct Type_t;




#ifndef U3CMODULEU3E_T3610364616_H
#define U3CMODULEU3E_T3610364616_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t3610364616 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T3610364616_H
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
#ifndef ENCRYPTEDDATA_T1420787818_H
#define ENCRYPTEDDATA_T1420787818_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.PKCS7/EncryptedData
struct  EncryptedData_t1420787818  : public RuntimeObject
{
public:
	// System.Byte Mono.Security.PKCS7/EncryptedData::_version
	uint8_t ____version_0;
	// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/EncryptedData::_content
	ContentInfo_t861333171 * ____content_1;
	// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/EncryptedData::_encryptionAlgorithm
	ContentInfo_t861333171 * ____encryptionAlgorithm_2;
	// System.Byte[] Mono.Security.PKCS7/EncryptedData::_encrypted
	ByteU5BU5D_t250263739* ____encrypted_3;

public:
	inline static int32_t get_offset_of__version_0() { return static_cast<int32_t>(offsetof(EncryptedData_t1420787818, ____version_0)); }
	inline uint8_t get__version_0() const { return ____version_0; }
	inline uint8_t* get_address_of__version_0() { return &____version_0; }
	inline void set__version_0(uint8_t value)
	{
		____version_0 = value;
	}

	inline static int32_t get_offset_of__content_1() { return static_cast<int32_t>(offsetof(EncryptedData_t1420787818, ____content_1)); }
	inline ContentInfo_t861333171 * get__content_1() const { return ____content_1; }
	inline ContentInfo_t861333171 ** get_address_of__content_1() { return &____content_1; }
	inline void set__content_1(ContentInfo_t861333171 * value)
	{
		____content_1 = value;
		Il2CppCodeGenWriteBarrier((&____content_1), value);
	}

	inline static int32_t get_offset_of__encryptionAlgorithm_2() { return static_cast<int32_t>(offsetof(EncryptedData_t1420787818, ____encryptionAlgorithm_2)); }
	inline ContentInfo_t861333171 * get__encryptionAlgorithm_2() const { return ____encryptionAlgorithm_2; }
	inline ContentInfo_t861333171 ** get_address_of__encryptionAlgorithm_2() { return &____encryptionAlgorithm_2; }
	inline void set__encryptionAlgorithm_2(ContentInfo_t861333171 * value)
	{
		____encryptionAlgorithm_2 = value;
		Il2CppCodeGenWriteBarrier((&____encryptionAlgorithm_2), value);
	}

	inline static int32_t get_offset_of__encrypted_3() { return static_cast<int32_t>(offsetof(EncryptedData_t1420787818, ____encrypted_3)); }
	inline ByteU5BU5D_t250263739* get__encrypted_3() const { return ____encrypted_3; }
	inline ByteU5BU5D_t250263739** get_address_of__encrypted_3() { return &____encrypted_3; }
	inline void set__encrypted_3(ByteU5BU5D_t250263739* value)
	{
		____encrypted_3 = value;
		Il2CppCodeGenWriteBarrier((&____encrypted_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCRYPTEDDATA_T1420787818_H
#ifndef PKCS8_T3695047643_H
#define PKCS8_T3695047643_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.PKCS8
struct  PKCS8_t3695047643  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PKCS8_T3695047643_H
#ifndef VERSION_T1133533382_H
#define VERSION_T1133533382_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Version
struct  Version_t1133533382  : public RuntimeObject
{
public:
	// System.Int32 System.Version::_Major
	int32_t ____Major_1;
	// System.Int32 System.Version::_Minor
	int32_t ____Minor_2;
	// System.Int32 System.Version::_Build
	int32_t ____Build_3;
	// System.Int32 System.Version::_Revision
	int32_t ____Revision_4;

public:
	inline static int32_t get_offset_of__Major_1() { return static_cast<int32_t>(offsetof(Version_t1133533382, ____Major_1)); }
	inline int32_t get__Major_1() const { return ____Major_1; }
	inline int32_t* get_address_of__Major_1() { return &____Major_1; }
	inline void set__Major_1(int32_t value)
	{
		____Major_1 = value;
	}

	inline static int32_t get_offset_of__Minor_2() { return static_cast<int32_t>(offsetof(Version_t1133533382, ____Minor_2)); }
	inline int32_t get__Minor_2() const { return ____Minor_2; }
	inline int32_t* get_address_of__Minor_2() { return &____Minor_2; }
	inline void set__Minor_2(int32_t value)
	{
		____Minor_2 = value;
	}

	inline static int32_t get_offset_of__Build_3() { return static_cast<int32_t>(offsetof(Version_t1133533382, ____Build_3)); }
	inline int32_t get__Build_3() const { return ____Build_3; }
	inline int32_t* get_address_of__Build_3() { return &____Build_3; }
	inline void set__Build_3(int32_t value)
	{
		____Build_3 = value;
	}

	inline static int32_t get_offset_of__Revision_4() { return static_cast<int32_t>(offsetof(Version_t1133533382, ____Revision_4)); }
	inline int32_t get__Revision_4() const { return ____Revision_4; }
	inline int32_t* get_address_of__Revision_4() { return &____Revision_4; }
	inline void set__Revision_4(int32_t value)
	{
		____Revision_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VERSION_T1133533382_H
#ifndef PKCS1_T1828926027_H
#define PKCS1_T1828926027_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.PKCS1
struct  PKCS1_t1828926027  : public RuntimeObject
{
public:

public:
};

struct PKCS1_t1828926027_StaticFields
{
public:
	// System.Byte[] Mono.Security.Cryptography.PKCS1::emptySHA1
	ByteU5BU5D_t250263739* ___emptySHA1_0;
	// System.Byte[] Mono.Security.Cryptography.PKCS1::emptySHA256
	ByteU5BU5D_t250263739* ___emptySHA256_1;
	// System.Byte[] Mono.Security.Cryptography.PKCS1::emptySHA384
	ByteU5BU5D_t250263739* ___emptySHA384_2;
	// System.Byte[] Mono.Security.Cryptography.PKCS1::emptySHA512
	ByteU5BU5D_t250263739* ___emptySHA512_3;

public:
	inline static int32_t get_offset_of_emptySHA1_0() { return static_cast<int32_t>(offsetof(PKCS1_t1828926027_StaticFields, ___emptySHA1_0)); }
	inline ByteU5BU5D_t250263739* get_emptySHA1_0() const { return ___emptySHA1_0; }
	inline ByteU5BU5D_t250263739** get_address_of_emptySHA1_0() { return &___emptySHA1_0; }
	inline void set_emptySHA1_0(ByteU5BU5D_t250263739* value)
	{
		___emptySHA1_0 = value;
		Il2CppCodeGenWriteBarrier((&___emptySHA1_0), value);
	}

	inline static int32_t get_offset_of_emptySHA256_1() { return static_cast<int32_t>(offsetof(PKCS1_t1828926027_StaticFields, ___emptySHA256_1)); }
	inline ByteU5BU5D_t250263739* get_emptySHA256_1() const { return ___emptySHA256_1; }
	inline ByteU5BU5D_t250263739** get_address_of_emptySHA256_1() { return &___emptySHA256_1; }
	inline void set_emptySHA256_1(ByteU5BU5D_t250263739* value)
	{
		___emptySHA256_1 = value;
		Il2CppCodeGenWriteBarrier((&___emptySHA256_1), value);
	}

	inline static int32_t get_offset_of_emptySHA384_2() { return static_cast<int32_t>(offsetof(PKCS1_t1828926027_StaticFields, ___emptySHA384_2)); }
	inline ByteU5BU5D_t250263739* get_emptySHA384_2() const { return ___emptySHA384_2; }
	inline ByteU5BU5D_t250263739** get_address_of_emptySHA384_2() { return &___emptySHA384_2; }
	inline void set_emptySHA384_2(ByteU5BU5D_t250263739* value)
	{
		___emptySHA384_2 = value;
		Il2CppCodeGenWriteBarrier((&___emptySHA384_2), value);
	}

	inline static int32_t get_offset_of_emptySHA512_3() { return static_cast<int32_t>(offsetof(PKCS1_t1828926027_StaticFields, ___emptySHA512_3)); }
	inline ByteU5BU5D_t250263739* get_emptySHA512_3() const { return ___emptySHA512_3; }
	inline ByteU5BU5D_t250263739** get_address_of_emptySHA512_3() { return &___emptySHA512_3; }
	inline void set_emptySHA512_3(ByteU5BU5D_t250263739* value)
	{
		___emptySHA512_3 = value;
		Il2CppCodeGenWriteBarrier((&___emptySHA512_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PKCS1_T1828926027_H
#ifndef KEYBUILDER_T1136152460_H
#define KEYBUILDER_T1136152460_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.KeyBuilder
struct  KeyBuilder_t1136152460  : public RuntimeObject
{
public:

public:
};

struct KeyBuilder_t1136152460_StaticFields
{
public:
	// System.Security.Cryptography.RandomNumberGenerator Mono.Security.Cryptography.KeyBuilder::rng
	RandomNumberGenerator_t3399161153 * ___rng_0;

public:
	inline static int32_t get_offset_of_rng_0() { return static_cast<int32_t>(offsetof(KeyBuilder_t1136152460_StaticFields, ___rng_0)); }
	inline RandomNumberGenerator_t3399161153 * get_rng_0() const { return ___rng_0; }
	inline RandomNumberGenerator_t3399161153 ** get_address_of_rng_0() { return &___rng_0; }
	inline void set_rng_0(RandomNumberGenerator_t3399161153 * value)
	{
		___rng_0 = value;
		Il2CppCodeGenWriteBarrier((&___rng_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYBUILDER_T1136152460_H
#ifndef CRYPTOCONVERT_T3290559052_H
#define CRYPTOCONVERT_T3290559052_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.CryptoConvert
struct  CryptoConvert_t3290559052  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRYPTOCONVERT_T3290559052_H
#ifndef LOCALE_T131769631_H
#define LOCALE_T131769631_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Locale
struct  Locale_t131769631  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCALE_T131769631_H
#ifndef CONTENTINFO_T861333171_H
#define CONTENTINFO_T861333171_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.PKCS7/ContentInfo
struct  ContentInfo_t861333171  : public RuntimeObject
{
public:
	// System.String Mono.Security.PKCS7/ContentInfo::contentType
	String_t* ___contentType_0;
	// Mono.Security.ASN1 Mono.Security.PKCS7/ContentInfo::content
	ASN1_t136638977 * ___content_1;

public:
	inline static int32_t get_offset_of_contentType_0() { return static_cast<int32_t>(offsetof(ContentInfo_t861333171, ___contentType_0)); }
	inline String_t* get_contentType_0() const { return ___contentType_0; }
	inline String_t** get_address_of_contentType_0() { return &___contentType_0; }
	inline void set_contentType_0(String_t* value)
	{
		___contentType_0 = value;
		Il2CppCodeGenWriteBarrier((&___contentType_0), value);
	}

	inline static int32_t get_offset_of_content_1() { return static_cast<int32_t>(offsetof(ContentInfo_t861333171, ___content_1)); }
	inline ASN1_t136638977 * get_content_1() const { return ___content_1; }
	inline ASN1_t136638977 ** get_address_of_content_1() { return &___content_1; }
	inline void set_content_1(ASN1_t136638977 * value)
	{
		___content_1 = value;
		Il2CppCodeGenWriteBarrier((&___content_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTENTINFO_T861333171_H
#ifndef BITCONVERTERLE_T1469525659_H
#define BITCONVERTERLE_T1469525659_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.BitConverterLE
struct  BitConverterLE_t1469525659  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BITCONVERTERLE_T1469525659_H
#ifndef ASN1CONVERT_T2592413998_H
#define ASN1CONVERT_T2592413998_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.ASN1Convert
struct  ASN1Convert_t2592413998  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASN1CONVERT_T2592413998_H
#ifndef ASN1_T136638977_H
#define ASN1_T136638977_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.ASN1
struct  ASN1_t136638977  : public RuntimeObject
{
public:
	// System.Byte Mono.Security.ASN1::m_nTag
	uint8_t ___m_nTag_0;
	// System.Byte[] Mono.Security.ASN1::m_aValue
	ByteU5BU5D_t250263739* ___m_aValue_1;
	// System.Collections.ArrayList Mono.Security.ASN1::elist
	ArrayList_t1666010013 * ___elist_2;

public:
	inline static int32_t get_offset_of_m_nTag_0() { return static_cast<int32_t>(offsetof(ASN1_t136638977, ___m_nTag_0)); }
	inline uint8_t get_m_nTag_0() const { return ___m_nTag_0; }
	inline uint8_t* get_address_of_m_nTag_0() { return &___m_nTag_0; }
	inline void set_m_nTag_0(uint8_t value)
	{
		___m_nTag_0 = value;
	}

	inline static int32_t get_offset_of_m_aValue_1() { return static_cast<int32_t>(offsetof(ASN1_t136638977, ___m_aValue_1)); }
	inline ByteU5BU5D_t250263739* get_m_aValue_1() const { return ___m_aValue_1; }
	inline ByteU5BU5D_t250263739** get_address_of_m_aValue_1() { return &___m_aValue_1; }
	inline void set_m_aValue_1(ByteU5BU5D_t250263739* value)
	{
		___m_aValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_aValue_1), value);
	}

	inline static int32_t get_offset_of_elist_2() { return static_cast<int32_t>(offsetof(ASN1_t136638977, ___elist_2)); }
	inline ArrayList_t1666010013 * get_elist_2() const { return ___elist_2; }
	inline ArrayList_t1666010013 ** get_address_of_elist_2() { return &___elist_2; }
	inline void set_elist_2(ArrayList_t1666010013 * value)
	{
		___elist_2 = value;
		Il2CppCodeGenWriteBarrier((&___elist_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASN1_T136638977_H
#ifndef PRIMEGENERATORBASE_T76912225_H
#define PRIMEGENERATORBASE_T76912225_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.Prime.Generator.PrimeGeneratorBase
struct  PrimeGeneratorBase_t76912225  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRIMEGENERATORBASE_T76912225_H
#ifndef PRIMALITYTESTS_T4178172327_H
#define PRIMALITYTESTS_T4178172327_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.Prime.PrimalityTests
struct  PrimalityTests_t4178172327  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRIMALITYTESTS_T4178172327_H
#ifndef KERNEL_T2640394687_H
#define KERNEL_T2640394687_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.BigInteger/Kernel
struct  Kernel_t2640394687  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KERNEL_T2640394687_H
#ifndef MODULUSRING_T1359643097_H
#define MODULUSRING_T1359643097_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.BigInteger/ModulusRing
struct  ModulusRing_t1359643097  : public RuntimeObject
{
public:
	// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::mod
	BigInteger_t4229345892 * ___mod_0;
	// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::constant
	BigInteger_t4229345892 * ___constant_1;

public:
	inline static int32_t get_offset_of_mod_0() { return static_cast<int32_t>(offsetof(ModulusRing_t1359643097, ___mod_0)); }
	inline BigInteger_t4229345892 * get_mod_0() const { return ___mod_0; }
	inline BigInteger_t4229345892 ** get_address_of_mod_0() { return &___mod_0; }
	inline void set_mod_0(BigInteger_t4229345892 * value)
	{
		___mod_0 = value;
		Il2CppCodeGenWriteBarrier((&___mod_0), value);
	}

	inline static int32_t get_offset_of_constant_1() { return static_cast<int32_t>(offsetof(ModulusRing_t1359643097, ___constant_1)); }
	inline BigInteger_t4229345892 * get_constant_1() const { return ___constant_1; }
	inline BigInteger_t4229345892 ** get_address_of_constant_1() { return &___constant_1; }
	inline void set_constant_1(BigInteger_t4229345892 * value)
	{
		___constant_1 = value;
		Il2CppCodeGenWriteBarrier((&___constant_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MODULUSRING_T1359643097_H
#ifndef IL2CPPCOMOBJECT_H
#define IL2CPPCOMOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.__Il2CppComObject

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IL2CPPCOMOBJECT_H
#ifndef PKCS7_T4236438594_H
#define PKCS7_T4236438594_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.PKCS7
struct  PKCS7_t4236438594  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PKCS7_T4236438594_H
#ifndef EVENTARGS_T4100516242_H
#define EVENTARGS_T4100516242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventArgs
struct  EventArgs_t4100516242  : public RuntimeObject
{
public:

public:
};

struct EventArgs_t4100516242_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t4100516242 * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_t4100516242_StaticFields, ___Empty_0)); }
	inline EventArgs_t4100516242 * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_t4100516242 ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_t4100516242 * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTARGS_T4100516242_H
#ifndef BIGINTEGER_T4229345892_H
#define BIGINTEGER_T4229345892_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.BigInteger
struct  BigInteger_t4229345892  : public RuntimeObject
{
public:
	// System.UInt32 Mono.Math.BigInteger::length
	uint32_t ___length_0;
	// System.UInt32[] Mono.Math.BigInteger::data
	UInt32U5BU5D_t819860844* ___data_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(BigInteger_t4229345892, ___length_0)); }
	inline uint32_t get_length_0() const { return ___length_0; }
	inline uint32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(uint32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(BigInteger_t4229345892, ___data_1)); }
	inline UInt32U5BU5D_t819860844* get_data_1() const { return ___data_1; }
	inline UInt32U5BU5D_t819860844** get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(UInt32U5BU5D_t819860844* value)
	{
		___data_1 = value;
		Il2CppCodeGenWriteBarrier((&___data_1), value);
	}
};

struct BigInteger_t4229345892_StaticFields
{
public:
	// System.UInt32[] Mono.Math.BigInteger::smallPrimes
	UInt32U5BU5D_t819860844* ___smallPrimes_2;
	// System.Security.Cryptography.RandomNumberGenerator Mono.Math.BigInteger::rng
	RandomNumberGenerator_t3399161153 * ___rng_3;

public:
	inline static int32_t get_offset_of_smallPrimes_2() { return static_cast<int32_t>(offsetof(BigInteger_t4229345892_StaticFields, ___smallPrimes_2)); }
	inline UInt32U5BU5D_t819860844* get_smallPrimes_2() const { return ___smallPrimes_2; }
	inline UInt32U5BU5D_t819860844** get_address_of_smallPrimes_2() { return &___smallPrimes_2; }
	inline void set_smallPrimes_2(UInt32U5BU5D_t819860844* value)
	{
		___smallPrimes_2 = value;
		Il2CppCodeGenWriteBarrier((&___smallPrimes_2), value);
	}

	inline static int32_t get_offset_of_rng_3() { return static_cast<int32_t>(offsetof(BigInteger_t4229345892_StaticFields, ___rng_3)); }
	inline RandomNumberGenerator_t3399161153 * get_rng_3() const { return ___rng_3; }
	inline RandomNumberGenerator_t3399161153 ** get_address_of_rng_3() { return &___rng_3; }
	inline void set_rng_3(RandomNumberGenerator_t3399161153 * value)
	{
		___rng_3 = value;
		Il2CppCodeGenWriteBarrier((&___rng_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BIGINTEGER_T4229345892_H
#ifndef TIMEZONE_T1162309287_H
#define TIMEZONE_T1162309287_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeZone
struct  TimeZone_t1162309287  : public RuntimeObject
{
public:

public:
};

struct TimeZone_t1162309287_StaticFields
{
public:
	// System.TimeZone System.TimeZone::currentTimeZone
	TimeZone_t1162309287 * ___currentTimeZone_0;
	// System.Object System.TimeZone::tz_lock
	RuntimeObject * ___tz_lock_1;
	// System.Int64 System.TimeZone::timezone_check
	int64_t ___timezone_check_2;

public:
	inline static int32_t get_offset_of_currentTimeZone_0() { return static_cast<int32_t>(offsetof(TimeZone_t1162309287_StaticFields, ___currentTimeZone_0)); }
	inline TimeZone_t1162309287 * get_currentTimeZone_0() const { return ___currentTimeZone_0; }
	inline TimeZone_t1162309287 ** get_address_of_currentTimeZone_0() { return &___currentTimeZone_0; }
	inline void set_currentTimeZone_0(TimeZone_t1162309287 * value)
	{
		___currentTimeZone_0 = value;
		Il2CppCodeGenWriteBarrier((&___currentTimeZone_0), value);
	}

	inline static int32_t get_offset_of_tz_lock_1() { return static_cast<int32_t>(offsetof(TimeZone_t1162309287_StaticFields, ___tz_lock_1)); }
	inline RuntimeObject * get_tz_lock_1() const { return ___tz_lock_1; }
	inline RuntimeObject ** get_address_of_tz_lock_1() { return &___tz_lock_1; }
	inline void set_tz_lock_1(RuntimeObject * value)
	{
		___tz_lock_1 = value;
		Il2CppCodeGenWriteBarrier((&___tz_lock_1), value);
	}

	inline static int32_t get_offset_of_timezone_check_2() { return static_cast<int32_t>(offsetof(TimeZone_t1162309287_StaticFields, ___timezone_check_2)); }
	inline int64_t get_timezone_check_2() const { return ___timezone_check_2; }
	inline int64_t* get_address_of_timezone_check_2() { return &___timezone_check_2; }
	inline void set_timezone_check_2(int64_t value)
	{
		___timezone_check_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMEZONE_T1162309287_H
#ifndef VALUETYPE_T214794469_H
#define VALUETYPE_T214794469_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t214794469  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t214794469_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t214794469_marshaled_com
{
};
#endif // VALUETYPE_T214794469_H
#ifndef HASHALGORITHM_T193810181_H
#define HASHALGORITHM_T193810181_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HashAlgorithm
struct  HashAlgorithm_t193810181  : public RuntimeObject
{
public:
	// System.Byte[] System.Security.Cryptography.HashAlgorithm::HashValue
	ByteU5BU5D_t250263739* ___HashValue_0;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::HashSizeValue
	int32_t ___HashSizeValue_1;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::State
	int32_t ___State_2;
	// System.Boolean System.Security.Cryptography.HashAlgorithm::disposed
	bool ___disposed_3;

public:
	inline static int32_t get_offset_of_HashValue_0() { return static_cast<int32_t>(offsetof(HashAlgorithm_t193810181, ___HashValue_0)); }
	inline ByteU5BU5D_t250263739* get_HashValue_0() const { return ___HashValue_0; }
	inline ByteU5BU5D_t250263739** get_address_of_HashValue_0() { return &___HashValue_0; }
	inline void set_HashValue_0(ByteU5BU5D_t250263739* value)
	{
		___HashValue_0 = value;
		Il2CppCodeGenWriteBarrier((&___HashValue_0), value);
	}

	inline static int32_t get_offset_of_HashSizeValue_1() { return static_cast<int32_t>(offsetof(HashAlgorithm_t193810181, ___HashSizeValue_1)); }
	inline int32_t get_HashSizeValue_1() const { return ___HashSizeValue_1; }
	inline int32_t* get_address_of_HashSizeValue_1() { return &___HashSizeValue_1; }
	inline void set_HashSizeValue_1(int32_t value)
	{
		___HashSizeValue_1 = value;
	}

	inline static int32_t get_offset_of_State_2() { return static_cast<int32_t>(offsetof(HashAlgorithm_t193810181, ___State_2)); }
	inline int32_t get_State_2() const { return ___State_2; }
	inline int32_t* get_address_of_State_2() { return &___State_2; }
	inline void set_State_2(int32_t value)
	{
		___State_2 = value;
	}

	inline static int32_t get_offset_of_disposed_3() { return static_cast<int32_t>(offsetof(HashAlgorithm_t193810181, ___disposed_3)); }
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
#endif // HASHALGORITHM_T193810181_H
#ifndef RANDOM_T950043034_H
#define RANDOM_T950043034_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Random
struct  Random_t950043034  : public RuntimeObject
{
public:
	// System.Int32 System.Random::inext
	int32_t ___inext_0;
	// System.Int32 System.Random::inextp
	int32_t ___inextp_1;
	// System.Int32[] System.Random::SeedArray
	Int32U5BU5D_t632066244* ___SeedArray_2;

public:
	inline static int32_t get_offset_of_inext_0() { return static_cast<int32_t>(offsetof(Random_t950043034, ___inext_0)); }
	inline int32_t get_inext_0() const { return ___inext_0; }
	inline int32_t* get_address_of_inext_0() { return &___inext_0; }
	inline void set_inext_0(int32_t value)
	{
		___inext_0 = value;
	}

	inline static int32_t get_offset_of_inextp_1() { return static_cast<int32_t>(offsetof(Random_t950043034, ___inextp_1)); }
	inline int32_t get_inextp_1() const { return ___inextp_1; }
	inline int32_t* get_address_of_inextp_1() { return &___inextp_1; }
	inline void set_inextp_1(int32_t value)
	{
		___inextp_1 = value;
	}

	inline static int32_t get_offset_of_SeedArray_2() { return static_cast<int32_t>(offsetof(Random_t950043034, ___SeedArray_2)); }
	inline Int32U5BU5D_t632066244* get_SeedArray_2() const { return ___SeedArray_2; }
	inline Int32U5BU5D_t632066244** get_address_of_SeedArray_2() { return &___SeedArray_2; }
	inline void set_SeedArray_2(Int32U5BU5D_t632066244* value)
	{
		___SeedArray_2 = value;
		Il2CppCodeGenWriteBarrier((&___SeedArray_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANDOM_T950043034_H
#ifndef PARSER_T735189028_H
#define PARSER_T735189028_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan/Parser
struct  Parser_t735189028  : public RuntimeObject
{
public:
	// System.String System.TimeSpan/Parser::_src
	String_t* ____src_0;
	// System.Int32 System.TimeSpan/Parser::_cur
	int32_t ____cur_1;
	// System.Int32 System.TimeSpan/Parser::_length
	int32_t ____length_2;
	// System.Boolean System.TimeSpan/Parser::formatError
	bool ___formatError_3;

public:
	inline static int32_t get_offset_of__src_0() { return static_cast<int32_t>(offsetof(Parser_t735189028, ____src_0)); }
	inline String_t* get__src_0() const { return ____src_0; }
	inline String_t** get_address_of__src_0() { return &____src_0; }
	inline void set__src_0(String_t* value)
	{
		____src_0 = value;
		Il2CppCodeGenWriteBarrier((&____src_0), value);
	}

	inline static int32_t get_offset_of__cur_1() { return static_cast<int32_t>(offsetof(Parser_t735189028, ____cur_1)); }
	inline int32_t get__cur_1() const { return ____cur_1; }
	inline int32_t* get_address_of__cur_1() { return &____cur_1; }
	inline void set__cur_1(int32_t value)
	{
		____cur_1 = value;
	}

	inline static int32_t get_offset_of__length_2() { return static_cast<int32_t>(offsetof(Parser_t735189028, ____length_2)); }
	inline int32_t get__length_2() const { return ____length_2; }
	inline int32_t* get_address_of__length_2() { return &____length_2; }
	inline void set__length_2(int32_t value)
	{
		____length_2 = value;
	}

	inline static int32_t get_offset_of_formatError_3() { return static_cast<int32_t>(offsetof(Parser_t735189028, ___formatError_3)); }
	inline bool get_formatError_3() const { return ___formatError_3; }
	inline bool* get_address_of_formatError_3() { return &___formatError_3; }
	inline void set_formatError_3(bool value)
	{
		___formatError_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARSER_T735189028_H
#ifndef ATTRIBUTE_T2825975485_H
#define ATTRIBUTE_T2825975485_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t2825975485  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T2825975485_H
#ifndef STRINGCOMPARER_T3025763281_H
#define STRINGCOMPARER_T3025763281_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.StringComparer
struct  StringComparer_t3025763281  : public RuntimeObject
{
public:

public:
};

struct StringComparer_t3025763281_StaticFields
{
public:
	// System.StringComparer System.StringComparer::invariantCultureIgnoreCase
	StringComparer_t3025763281 * ___invariantCultureIgnoreCase_0;
	// System.StringComparer System.StringComparer::invariantCulture
	StringComparer_t3025763281 * ___invariantCulture_1;
	// System.StringComparer System.StringComparer::ordinalIgnoreCase
	StringComparer_t3025763281 * ___ordinalIgnoreCase_2;
	// System.StringComparer System.StringComparer::ordinal
	StringComparer_t3025763281 * ___ordinal_3;

public:
	inline static int32_t get_offset_of_invariantCultureIgnoreCase_0() { return static_cast<int32_t>(offsetof(StringComparer_t3025763281_StaticFields, ___invariantCultureIgnoreCase_0)); }
	inline StringComparer_t3025763281 * get_invariantCultureIgnoreCase_0() const { return ___invariantCultureIgnoreCase_0; }
	inline StringComparer_t3025763281 ** get_address_of_invariantCultureIgnoreCase_0() { return &___invariantCultureIgnoreCase_0; }
	inline void set_invariantCultureIgnoreCase_0(StringComparer_t3025763281 * value)
	{
		___invariantCultureIgnoreCase_0 = value;
		Il2CppCodeGenWriteBarrier((&___invariantCultureIgnoreCase_0), value);
	}

	inline static int32_t get_offset_of_invariantCulture_1() { return static_cast<int32_t>(offsetof(StringComparer_t3025763281_StaticFields, ___invariantCulture_1)); }
	inline StringComparer_t3025763281 * get_invariantCulture_1() const { return ___invariantCulture_1; }
	inline StringComparer_t3025763281 ** get_address_of_invariantCulture_1() { return &___invariantCulture_1; }
	inline void set_invariantCulture_1(StringComparer_t3025763281 * value)
	{
		___invariantCulture_1 = value;
		Il2CppCodeGenWriteBarrier((&___invariantCulture_1), value);
	}

	inline static int32_t get_offset_of_ordinalIgnoreCase_2() { return static_cast<int32_t>(offsetof(StringComparer_t3025763281_StaticFields, ___ordinalIgnoreCase_2)); }
	inline StringComparer_t3025763281 * get_ordinalIgnoreCase_2() const { return ___ordinalIgnoreCase_2; }
	inline StringComparer_t3025763281 ** get_address_of_ordinalIgnoreCase_2() { return &___ordinalIgnoreCase_2; }
	inline void set_ordinalIgnoreCase_2(StringComparer_t3025763281 * value)
	{
		___ordinalIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((&___ordinalIgnoreCase_2), value);
	}

	inline static int32_t get_offset_of_ordinal_3() { return static_cast<int32_t>(offsetof(StringComparer_t3025763281_StaticFields, ___ordinal_3)); }
	inline StringComparer_t3025763281 * get_ordinal_3() const { return ___ordinal_3; }
	inline StringComparer_t3025763281 ** get_address_of_ordinal_3() { return &___ordinal_3; }
	inline void set_ordinal_3(StringComparer_t3025763281 * value)
	{
		___ordinal_3 = value;
		Il2CppCodeGenWriteBarrier((&___ordinal_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGCOMPARER_T3025763281_H
#ifndef EXCEPTION_T2643954813_H
#define EXCEPTION_T2643954813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t2643954813  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t4221019038* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t2643954813 * ___inner_exception_1;
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
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t2643954813, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t4221019038* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t4221019038** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t4221019038* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t2643954813, ___inner_exception_1)); }
	inline Exception_t2643954813 * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t2643954813 ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t2643954813 * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t2643954813, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t2643954813, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t2643954813, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t2643954813, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t2643954813, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t2643954813, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t2643954813, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t2643954813, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t2643954813, ____data_10)); }
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
#endif // EXCEPTION_T2643954813_H
#ifndef U24ARRAYTYPEU243132_T3470299486_H
#define U24ARRAYTYPEU243132_T3470299486_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$3132
struct  U24ArrayTypeU243132_t3470299486 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU243132_t3470299486__padding[3132];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU243132_T3470299486_H
#ifndef U24ARRAYTYPEU2420_T820113788_H
#define U24ARRAYTYPEU2420_T820113788_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$20
struct  U24ArrayTypeU2420_t820113788 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2420_t820113788__padding[20];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2420_T820113788_H
#ifndef U24ARRAYTYPEU2432_T868397469_H
#define U24ARRAYTYPEU2432_T868397469_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$32
struct  U24ArrayTypeU2432_t868397469 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2432_t868397469__padding[32];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2432_T868397469_H
#ifndef U24ARRAYTYPEU2448_T2679062403_H
#define U24ARRAYTYPEU2448_T2679062403_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$48
struct  U24ArrayTypeU2448_t2679062403 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2448_t2679062403__padding[48];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2448_T2679062403_H
#ifndef U24ARRAYTYPEU2464_T2400480182_H
#define U24ARRAYTYPEU2464_T2400480182_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$64
struct  U24ArrayTypeU2464_t2400480182 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2464_t2400480182__padding[64];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2464_T2400480182_H
#ifndef U24ARRAYTYPEU2412_T1618401966_H
#define U24ARRAYTYPEU2412_T1618401966_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$12
struct  U24ArrayTypeU2412_t1618401966 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2412_t1618401966__padding[12];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2412_T1618401966_H
#ifndef BOOLEAN_T3395475416_H
#define BOOLEAN_T3395475416_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t3395475416 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t3395475416, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t3395475416_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t3395475416_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t3395475416_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T3395475416_H
#ifndef U24ARRAYTYPEU248_T1047038965_H
#define U24ARRAYTYPEU248_T1047038965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$8
struct  U24ArrayTypeU248_t1047038965 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU248_t1047038965__padding[8];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU248_T1047038965_H
#ifndef U24ARRAYTYPEU2472_T4235473988_H
#define U24ARRAYTYPEU2472_T4235473988_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$72
struct  U24ArrayTypeU2472_t4235473988 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2472_t4235473988__padding[72];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2472_T4235473988_H
#ifndef U24ARRAYTYPEU24124_T3981583019_H
#define U24ARRAYTYPEU24124_T3981583019_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$124
struct  U24ArrayTypeU24124_t3981583019 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU24124_t3981583019__padding[124];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24124_T3981583019_H
#ifndef U24ARRAYTYPEU2496_T3327887044_H
#define U24ARRAYTYPEU2496_T3327887044_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$96
struct  U24ArrayTypeU2496_t3327887044 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2496_t3327887044__padding[96];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2496_T3327887044_H
#ifndef U24ARRAYTYPEU242048_T157123511_H
#define U24ARRAYTYPEU242048_T157123511_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$2048
struct  U24ArrayTypeU242048_t157123511 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU242048_t157123511__padding[2048];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU242048_T157123511_H
#ifndef U24ARRAYTYPEU24256_T2595027676_H
#define U24ARRAYTYPEU24256_T2595027676_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$256
struct  U24ArrayTypeU24256_t2595027676 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU24256_t2595027676__padding[256];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24256_T2595027676_H
#ifndef U24ARRAYTYPEU241024_T708480540_H
#define U24ARRAYTYPEU241024_T708480540_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$1024
struct  U24ArrayTypeU241024_t708480540 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU241024_t708480540__padding[1024];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU241024_T708480540_H
#ifndef U24ARRAYTYPEU24640_T2115262595_H
#define U24ARRAYTYPEU24640_T2115262595_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$640
struct  U24ArrayTypeU24640_t2115262595 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU24640_t2115262595__padding[640];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24640_T2115262595_H
#ifndef U24ARRAYTYPEU24128_T2408794763_H
#define U24ARRAYTYPEU24128_T2408794763_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$128
struct  U24ArrayTypeU24128_t2408794763 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU24128_t2408794763__padding[128];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24128_T2408794763_H
#ifndef U24ARRAYTYPEU2452_T2585479835_H
#define U24ARRAYTYPEU2452_T2585479835_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$52
struct  U24ArrayTypeU2452_t2585479835 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2452_t2585479835__padding[52];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2452_T2585479835_H
#ifndef __IL2CPPCOMDELEGATE_T109909865_H
#define __IL2CPPCOMDELEGATE_T109909865_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.__Il2CppComDelegate
struct  __Il2CppComDelegate_t109909865  : public Il2CppComObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __IL2CPPCOMDELEGATE_T109909865_H
#ifndef U24ARRAYTYPEU24120_T4230284466_H
#define U24ARRAYTYPEU24120_T4230284466_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$120
struct  U24ArrayTypeU24120_t4230284466 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU24120_t4230284466__padding[120];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24120_T4230284466_H
#ifndef U24ARRAYTYPEU2416_T1911017300_H
#define U24ARRAYTYPEU2416_T1911017300_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$16
struct  U24ArrayTypeU2416_t1911017300 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2416_t1911017300__padding[16];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2416_T1911017300_H
#ifndef VOID_T2367238524_H
#define VOID_T2367238524_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t2367238524 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T2367238524_H
#ifndef U24ARRAYTYPEU2456_T600203385_H
#define U24ARRAYTYPEU2456_T600203385_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$56
struct  U24ArrayTypeU2456_t600203385 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2456_t600203385__padding[56];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2456_T600203385_H
#ifndef ENUM_T454561195_H
#define ENUM_T454561195_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t454561195  : public ValueType_t214794469
{
public:

public:
};

struct Enum_t454561195_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3056575431* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t454561195_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3056575431* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3056575431** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3056575431* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t454561195_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t454561195_marshaled_com
{
};
#endif // ENUM_T454561195_H
#ifndef UNHANDLEDEXCEPTIONEVENTARGS_T525368780_H
#define UNHANDLEDEXCEPTIONEVENTARGS_T525368780_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnhandledExceptionEventArgs
struct  UnhandledExceptionEventArgs_t525368780  : public EventArgs_t4100516242
{
public:
	// System.Object System.UnhandledExceptionEventArgs::exception
	RuntimeObject * ___exception_1;
	// System.Boolean System.UnhandledExceptionEventArgs::m_isTerminating
	bool ___m_isTerminating_2;

public:
	inline static int32_t get_offset_of_exception_1() { return static_cast<int32_t>(offsetof(UnhandledExceptionEventArgs_t525368780, ___exception_1)); }
	inline RuntimeObject * get_exception_1() const { return ___exception_1; }
	inline RuntimeObject ** get_address_of_exception_1() { return &___exception_1; }
	inline void set_exception_1(RuntimeObject * value)
	{
		___exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___exception_1), value);
	}

	inline static int32_t get_offset_of_m_isTerminating_2() { return static_cast<int32_t>(offsetof(UnhandledExceptionEventArgs_t525368780, ___m_isTerminating_2)); }
	inline bool get_m_isTerminating_2() const { return ___m_isTerminating_2; }
	inline bool* get_address_of_m_isTerminating_2() { return &___m_isTerminating_2; }
	inline void set_m_isTerminating_2(bool value)
	{
		___m_isTerminating_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNHANDLEDEXCEPTIONEVENTARGS_T525368780_H
#ifndef TIMESPAN_T1627018810_H
#define TIMESPAN_T1627018810_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t1627018810 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t1627018810, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t1627018810_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t1627018810  ___MaxValue_0;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t1627018810  ___MinValue_1;
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t1627018810  ___Zero_2;

public:
	inline static int32_t get_offset_of_MaxValue_0() { return static_cast<int32_t>(offsetof(TimeSpan_t1627018810_StaticFields, ___MaxValue_0)); }
	inline TimeSpan_t1627018810  get_MaxValue_0() const { return ___MaxValue_0; }
	inline TimeSpan_t1627018810 * get_address_of_MaxValue_0() { return &___MaxValue_0; }
	inline void set_MaxValue_0(TimeSpan_t1627018810  value)
	{
		___MaxValue_0 = value;
	}

	inline static int32_t get_offset_of_MinValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t1627018810_StaticFields, ___MinValue_1)); }
	inline TimeSpan_t1627018810  get_MinValue_1() const { return ___MinValue_1; }
	inline TimeSpan_t1627018810 * get_address_of_MinValue_1() { return &___MinValue_1; }
	inline void set_MinValue_1(TimeSpan_t1627018810  value)
	{
		___MinValue_1 = value;
	}

	inline static int32_t get_offset_of_Zero_2() { return static_cast<int32_t>(offsetof(TimeSpan_t1627018810_StaticFields, ___Zero_2)); }
	inline TimeSpan_t1627018810  get_Zero_2() const { return ___Zero_2; }
	inline TimeSpan_t1627018810 * get_address_of_Zero_2() { return &___Zero_2; }
	inline void set_Zero_2(TimeSpan_t1627018810  value)
	{
		___Zero_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T1627018810_H
#ifndef THREADSTATICATTRIBUTE_T3444318701_H
#define THREADSTATICATTRIBUTE_T3444318701_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ThreadStaticAttribute
struct  ThreadStaticAttribute_t3444318701  : public Attribute_t2825975485
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREADSTATICATTRIBUTE_T3444318701_H
#ifndef SYSTEMEXCEPTION_T2247450559_H
#define SYSTEMEXCEPTION_T2247450559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t2247450559  : public Exception_t2643954813
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T2247450559_H
#ifndef U24ARRAYTYPEU2424_T992868333_H
#define U24ARRAYTYPEU2424_T992868333_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$24
struct  U24ArrayTypeU2424_t992868333 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2424_t992868333__padding[24];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2424_T992868333_H
#ifndef MD2_T2840516304_H
#define MD2_T2840516304_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.MD2
struct  MD2_t2840516304  : public HashAlgorithm_t193810181
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MD2_T2840516304_H
#ifndef MD4_T1133690861_H
#define MD4_T1133690861_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.MD4
struct  MD4_t1133690861  : public HashAlgorithm_t193810181
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MD4_T1133690861_H
#ifndef ORDINALCOMPARER_T3374545791_H
#define ORDINALCOMPARER_T3374545791_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.OrdinalComparer
struct  OrdinalComparer_t3374545791  : public StringComparer_t3025763281
{
public:
	// System.Boolean System.OrdinalComparer::_ignoreCase
	bool ____ignoreCase_4;

public:
	inline static int32_t get_offset_of__ignoreCase_4() { return static_cast<int32_t>(offsetof(OrdinalComparer_t3374545791, ____ignoreCase_4)); }
	inline bool get__ignoreCase_4() const { return ____ignoreCase_4; }
	inline bool* get_address_of__ignoreCase_4() { return &____ignoreCase_4; }
	inline void set__ignoreCase_4(bool value)
	{
		____ignoreCase_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ORDINALCOMPARER_T3374545791_H
#ifndef CULTUREAWARECOMPARER_T562010472_H
#define CULTUREAWARECOMPARER_T562010472_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.CultureAwareComparer
struct  CultureAwareComparer_t562010472  : public StringComparer_t3025763281
{
public:
	// System.Boolean System.CultureAwareComparer::_ignoreCase
	bool ____ignoreCase_4;
	// System.Globalization.CompareInfo System.CultureAwareComparer::_compareInfo
	CompareInfo_t3479368114 * ____compareInfo_5;

public:
	inline static int32_t get_offset_of__ignoreCase_4() { return static_cast<int32_t>(offsetof(CultureAwareComparer_t562010472, ____ignoreCase_4)); }
	inline bool get__ignoreCase_4() const { return ____ignoreCase_4; }
	inline bool* get_address_of__ignoreCase_4() { return &____ignoreCase_4; }
	inline void set__ignoreCase_4(bool value)
	{
		____ignoreCase_4 = value;
	}

	inline static int32_t get_offset_of__compareInfo_5() { return static_cast<int32_t>(offsetof(CultureAwareComparer_t562010472, ____compareInfo_5)); }
	inline CompareInfo_t3479368114 * get__compareInfo_5() const { return ____compareInfo_5; }
	inline CompareInfo_t3479368114 ** get_address_of__compareInfo_5() { return &____compareInfo_5; }
	inline void set__compareInfo_5(CompareInfo_t3479368114 * value)
	{
		____compareInfo_5 = value;
		Il2CppCodeGenWriteBarrier((&____compareInfo_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CULTUREAWARECOMPARER_T562010472_H
#ifndef GCHANDLE_T225103611_H
#define GCHANDLE_T225103611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.GCHandle
struct  GCHandle_t225103611 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t225103611, ___handle_0)); }
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
#endif // GCHANDLE_T225103611_H
#ifndef RESOLVEEVENTARGS_T4290046187_H
#define RESOLVEEVENTARGS_T4290046187_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ResolveEventArgs
struct  ResolveEventArgs_t4290046187  : public EventArgs_t4100516242
{
public:
	// System.String System.ResolveEventArgs::m_Name
	String_t* ___m_Name_1;

public:
	inline static int32_t get_offset_of_m_Name_1() { return static_cast<int32_t>(offsetof(ResolveEventArgs_t4290046187, ___m_Name_1)); }
	inline String_t* get_m_Name_1() const { return ___m_Name_1; }
	inline String_t** get_address_of_m_Name_1() { return &___m_Name_1; }
	inline void set_m_Name_1(String_t* value)
	{
		___m_Name_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Name_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOLVEEVENTARGS_T4290046187_H
#ifndef SEQUENTIALSEARCHPRIMEGENERATORBASE_T2089353874_H
#define SEQUENTIALSEARCHPRIMEGENERATORBASE_T2089353874_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase
struct  SequentialSearchPrimeGeneratorBase_t2089353874  : public PrimeGeneratorBase_t76912225
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SEQUENTIALSEARCHPRIMEGENERATORBASE_T2089353874_H
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
#ifndef U24ARRAYTYPEU24136_T2193125036_H
#define U24ARRAYTYPEU24136_T2193125036_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$136
struct  U24ArrayTypeU24136_t2193125036 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU24136_t2193125036__padding[136];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24136_T2193125036_H
#ifndef MD2MANAGED_T4159479188_H
#define MD2MANAGED_T4159479188_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.MD2Managed
struct  MD2Managed_t4159479188  : public MD2_t2840516304
{
public:
	// System.Byte[] Mono.Security.Cryptography.MD2Managed::state
	ByteU5BU5D_t250263739* ___state_4;
	// System.Byte[] Mono.Security.Cryptography.MD2Managed::checksum
	ByteU5BU5D_t250263739* ___checksum_5;
	// System.Byte[] Mono.Security.Cryptography.MD2Managed::buffer
	ByteU5BU5D_t250263739* ___buffer_6;
	// System.Int32 Mono.Security.Cryptography.MD2Managed::count
	int32_t ___count_7;
	// System.Byte[] Mono.Security.Cryptography.MD2Managed::x
	ByteU5BU5D_t250263739* ___x_8;

public:
	inline static int32_t get_offset_of_state_4() { return static_cast<int32_t>(offsetof(MD2Managed_t4159479188, ___state_4)); }
	inline ByteU5BU5D_t250263739* get_state_4() const { return ___state_4; }
	inline ByteU5BU5D_t250263739** get_address_of_state_4() { return &___state_4; }
	inline void set_state_4(ByteU5BU5D_t250263739* value)
	{
		___state_4 = value;
		Il2CppCodeGenWriteBarrier((&___state_4), value);
	}

	inline static int32_t get_offset_of_checksum_5() { return static_cast<int32_t>(offsetof(MD2Managed_t4159479188, ___checksum_5)); }
	inline ByteU5BU5D_t250263739* get_checksum_5() const { return ___checksum_5; }
	inline ByteU5BU5D_t250263739** get_address_of_checksum_5() { return &___checksum_5; }
	inline void set_checksum_5(ByteU5BU5D_t250263739* value)
	{
		___checksum_5 = value;
		Il2CppCodeGenWriteBarrier((&___checksum_5), value);
	}

	inline static int32_t get_offset_of_buffer_6() { return static_cast<int32_t>(offsetof(MD2Managed_t4159479188, ___buffer_6)); }
	inline ByteU5BU5D_t250263739* get_buffer_6() const { return ___buffer_6; }
	inline ByteU5BU5D_t250263739** get_address_of_buffer_6() { return &___buffer_6; }
	inline void set_buffer_6(ByteU5BU5D_t250263739* value)
	{
		___buffer_6 = value;
		Il2CppCodeGenWriteBarrier((&___buffer_6), value);
	}

	inline static int32_t get_offset_of_count_7() { return static_cast<int32_t>(offsetof(MD2Managed_t4159479188, ___count_7)); }
	inline int32_t get_count_7() const { return ___count_7; }
	inline int32_t* get_address_of_count_7() { return &___count_7; }
	inline void set_count_7(int32_t value)
	{
		___count_7 = value;
	}

	inline static int32_t get_offset_of_x_8() { return static_cast<int32_t>(offsetof(MD2Managed_t4159479188, ___x_8)); }
	inline ByteU5BU5D_t250263739* get_x_8() const { return ___x_8; }
	inline ByteU5BU5D_t250263739** get_address_of_x_8() { return &___x_8; }
	inline void set_x_8(ByteU5BU5D_t250263739* value)
	{
		___x_8 = value;
		Il2CppCodeGenWriteBarrier((&___x_8), value);
	}
};

struct MD2Managed_t4159479188_StaticFields
{
public:
	// System.Byte[] Mono.Security.Cryptography.MD2Managed::PI_SUBST
	ByteU5BU5D_t250263739* ___PI_SUBST_9;

public:
	inline static int32_t get_offset_of_PI_SUBST_9() { return static_cast<int32_t>(offsetof(MD2Managed_t4159479188_StaticFields, ___PI_SUBST_9)); }
	inline ByteU5BU5D_t250263739* get_PI_SUBST_9() const { return ___PI_SUBST_9; }
	inline ByteU5BU5D_t250263739** get_address_of_PI_SUBST_9() { return &___PI_SUBST_9; }
	inline void set_PI_SUBST_9(ByteU5BU5D_t250263739* value)
	{
		___PI_SUBST_9 = value;
		Il2CppCodeGenWriteBarrier((&___PI_SUBST_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MD2MANAGED_T4159479188_H
#ifndef MD4MANAGED_T4084791581_H
#define MD4MANAGED_T4084791581_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.MD4Managed
struct  MD4Managed_t4084791581  : public MD4_t1133690861
{
public:
	// System.UInt32[] Mono.Security.Cryptography.MD4Managed::state
	UInt32U5BU5D_t819860844* ___state_4;
	// System.Byte[] Mono.Security.Cryptography.MD4Managed::buffer
	ByteU5BU5D_t250263739* ___buffer_5;
	// System.UInt32[] Mono.Security.Cryptography.MD4Managed::count
	UInt32U5BU5D_t819860844* ___count_6;
	// System.UInt32[] Mono.Security.Cryptography.MD4Managed::x
	UInt32U5BU5D_t819860844* ___x_7;
	// System.Byte[] Mono.Security.Cryptography.MD4Managed::digest
	ByteU5BU5D_t250263739* ___digest_8;

public:
	inline static int32_t get_offset_of_state_4() { return static_cast<int32_t>(offsetof(MD4Managed_t4084791581, ___state_4)); }
	inline UInt32U5BU5D_t819860844* get_state_4() const { return ___state_4; }
	inline UInt32U5BU5D_t819860844** get_address_of_state_4() { return &___state_4; }
	inline void set_state_4(UInt32U5BU5D_t819860844* value)
	{
		___state_4 = value;
		Il2CppCodeGenWriteBarrier((&___state_4), value);
	}

	inline static int32_t get_offset_of_buffer_5() { return static_cast<int32_t>(offsetof(MD4Managed_t4084791581, ___buffer_5)); }
	inline ByteU5BU5D_t250263739* get_buffer_5() const { return ___buffer_5; }
	inline ByteU5BU5D_t250263739** get_address_of_buffer_5() { return &___buffer_5; }
	inline void set_buffer_5(ByteU5BU5D_t250263739* value)
	{
		___buffer_5 = value;
		Il2CppCodeGenWriteBarrier((&___buffer_5), value);
	}

	inline static int32_t get_offset_of_count_6() { return static_cast<int32_t>(offsetof(MD4Managed_t4084791581, ___count_6)); }
	inline UInt32U5BU5D_t819860844* get_count_6() const { return ___count_6; }
	inline UInt32U5BU5D_t819860844** get_address_of_count_6() { return &___count_6; }
	inline void set_count_6(UInt32U5BU5D_t819860844* value)
	{
		___count_6 = value;
		Il2CppCodeGenWriteBarrier((&___count_6), value);
	}

	inline static int32_t get_offset_of_x_7() { return static_cast<int32_t>(offsetof(MD4Managed_t4084791581, ___x_7)); }
	inline UInt32U5BU5D_t819860844* get_x_7() const { return ___x_7; }
	inline UInt32U5BU5D_t819860844** get_address_of_x_7() { return &___x_7; }
	inline void set_x_7(UInt32U5BU5D_t819860844* value)
	{
		___x_7 = value;
		Il2CppCodeGenWriteBarrier((&___x_7), value);
	}

	inline static int32_t get_offset_of_digest_8() { return static_cast<int32_t>(offsetof(MD4Managed_t4084791581, ___digest_8)); }
	inline ByteU5BU5D_t250263739* get_digest_8() const { return ___digest_8; }
	inline ByteU5BU5D_t250263739** get_address_of_digest_8() { return &___digest_8; }
	inline void set_digest_8(ByteU5BU5D_t250263739* value)
	{
		___digest_8 = value;
		Il2CppCodeGenWriteBarrier((&___digest_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MD4MANAGED_T4084791581_H
#ifndef CONFIDENCEFACTOR_T2513678966_H
#define CONFIDENCEFACTOR_T2513678966_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.Prime.ConfidenceFactor
struct  ConfidenceFactor_t2513678966 
{
public:
	// System.Int32 Mono.Math.Prime.ConfidenceFactor::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ConfidenceFactor_t2513678966, ___value___1)); }
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
#endif // CONFIDENCEFACTOR_T2513678966_H
#ifndef ARITHMETICEXCEPTION_T2551618271_H
#define ARITHMETICEXCEPTION_T2551618271_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArithmeticException
struct  ArithmeticException_t2551618271  : public SystemException_t2247450559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARITHMETICEXCEPTION_T2551618271_H
#ifndef CONFIDENCEFACTOR_T2513678967_H
#define CONFIDENCEFACTOR_T2513678967_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.Prime.ConfidenceFactor
struct  ConfidenceFactor_t2513678967 
{
public:
	// System.Int32 Mono.Math.Prime.ConfidenceFactor::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ConfidenceFactor_t2513678967, ___value___1)); }
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
#endif // CONFIDENCEFACTOR_T2513678967_H
#ifndef NOTSUPPORTEDEXCEPTION_T1008073539_H
#define NOTSUPPORTEDEXCEPTION_T1008073539_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotSupportedException
struct  NotSupportedException_t1008073539  : public SystemException_t2247450559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTSUPPORTEDEXCEPTION_T1008073539_H
#ifndef DELEGATE_T2507252419_H
#define DELEGATE_T2507252419_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t2507252419  : public RuntimeObject
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
	DelegateData_t1049894561 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t2507252419, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t2507252419, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t2507252419, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t2507252419, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t2507252419, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t2507252419, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t2507252419, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t2507252419, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t2507252419, ___data_8)); }
	inline DelegateData_t1049894561 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1049894561 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1049894561 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T2507252419_H
#ifndef PADDINGMODE_T3206104834_H
#define PADDINGMODE_T3206104834_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.PaddingMode
struct  PaddingMode_t3206104834 
{
public:
	// System.Int32 System.Security.Cryptography.PaddingMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PaddingMode_t3206104834, ___value___1)); }
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
#endif // PADDINGMODE_T3206104834_H
#ifndef CIPHERMODE_T2930961471_H
#define CIPHERMODE_T2930961471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CipherMode
struct  CipherMode_t2930961471 
{
public:
	// System.Int32 System.Security.Cryptography.CipherMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CipherMode_t2930961471, ___value___1)); }
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
#endif // CIPHERMODE_T2930961471_H
#ifndef OUTOFMEMORYEXCEPTION_T3345139716_H
#define OUTOFMEMORYEXCEPTION_T3345139716_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.OutOfMemoryException
struct  OutOfMemoryException_t3345139716  : public SystemException_t2247450559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OUTOFMEMORYEXCEPTION_T3345139716_H
#ifndef PLATFORMID_T2546983699_H
#define PLATFORMID_T2546983699_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.PlatformID
struct  PlatformID_t2546983699 
{
public:
	// System.Int32 System.PlatformID::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PlatformID_t2546983699, ___value___1)); }
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
#endif // PLATFORMID_T2546983699_H
#ifndef RANKEXCEPTION_T2905860407_H
#define RANKEXCEPTION_T2905860407_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RankException
struct  RankException_t2905860407  : public SystemException_t2247450559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANKEXCEPTION_T2905860407_H
#ifndef RUNTIMEMETHODHANDLE_T3097718312_H
#define RUNTIMEMETHODHANDLE_T3097718312_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeMethodHandle
struct  RuntimeMethodHandle_t3097718312 
{
public:
	// System.IntPtr System.RuntimeMethodHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeMethodHandle_t3097718312, ___value_0)); }
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
#endif // RUNTIMEMETHODHANDLE_T3097718312_H
#ifndef STACKOVERFLOWEXCEPTION_T1805531707_H
#define STACKOVERFLOWEXCEPTION_T1805531707_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.StackOverflowException
struct  StackOverflowException_t1805531707  : public SystemException_t2247450559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STACKOVERFLOWEXCEPTION_T1805531707_H
#ifndef STRINGCOMPARISON_T1830395845_H
#define STRINGCOMPARISON_T1830395845_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.StringComparison
struct  StringComparison_t1830395845 
{
public:
	// System.Int32 System.StringComparison::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StringComparison_t1830395845, ___value___1)); }
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
#endif // STRINGCOMPARISON_T1830395845_H
#ifndef STRINGSPLITOPTIONS_T2509599035_H
#define STRINGSPLITOPTIONS_T2509599035_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.StringSplitOptions
struct  StringSplitOptions_t2509599035 
{
public:
	// System.Int32 System.StringSplitOptions::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StringSplitOptions_t2509599035, ___value___1)); }
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
#endif // STRINGSPLITOPTIONS_T2509599035_H
#ifndef CURRENTSYSTEMTIMEZONE_T1349074817_H
#define CURRENTSYSTEMTIMEZONE_T1349074817_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.CurrentSystemTimeZone
struct  CurrentSystemTimeZone_t1349074817  : public TimeZone_t1162309287
{
public:
	// System.String System.CurrentSystemTimeZone::m_standardName
	String_t* ___m_standardName_3;
	// System.String System.CurrentSystemTimeZone::m_daylightName
	String_t* ___m_daylightName_4;
	// System.Collections.Hashtable System.CurrentSystemTimeZone::m_CachedDaylightChanges
	Hashtable_t4275196815 * ___m_CachedDaylightChanges_5;
	// System.Int64 System.CurrentSystemTimeZone::m_ticksOffset
	int64_t ___m_ticksOffset_6;
	// System.TimeSpan System.CurrentSystemTimeZone::utcOffsetWithOutDLS
	TimeSpan_t1627018810  ___utcOffsetWithOutDLS_7;
	// System.TimeSpan System.CurrentSystemTimeZone::utcOffsetWithDLS
	TimeSpan_t1627018810  ___utcOffsetWithDLS_8;

public:
	inline static int32_t get_offset_of_m_standardName_3() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t1349074817, ___m_standardName_3)); }
	inline String_t* get_m_standardName_3() const { return ___m_standardName_3; }
	inline String_t** get_address_of_m_standardName_3() { return &___m_standardName_3; }
	inline void set_m_standardName_3(String_t* value)
	{
		___m_standardName_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_standardName_3), value);
	}

	inline static int32_t get_offset_of_m_daylightName_4() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t1349074817, ___m_daylightName_4)); }
	inline String_t* get_m_daylightName_4() const { return ___m_daylightName_4; }
	inline String_t** get_address_of_m_daylightName_4() { return &___m_daylightName_4; }
	inline void set_m_daylightName_4(String_t* value)
	{
		___m_daylightName_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_daylightName_4), value);
	}

	inline static int32_t get_offset_of_m_CachedDaylightChanges_5() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t1349074817, ___m_CachedDaylightChanges_5)); }
	inline Hashtable_t4275196815 * get_m_CachedDaylightChanges_5() const { return ___m_CachedDaylightChanges_5; }
	inline Hashtable_t4275196815 ** get_address_of_m_CachedDaylightChanges_5() { return &___m_CachedDaylightChanges_5; }
	inline void set_m_CachedDaylightChanges_5(Hashtable_t4275196815 * value)
	{
		___m_CachedDaylightChanges_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_CachedDaylightChanges_5), value);
	}

	inline static int32_t get_offset_of_m_ticksOffset_6() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t1349074817, ___m_ticksOffset_6)); }
	inline int64_t get_m_ticksOffset_6() const { return ___m_ticksOffset_6; }
	inline int64_t* get_address_of_m_ticksOffset_6() { return &___m_ticksOffset_6; }
	inline void set_m_ticksOffset_6(int64_t value)
	{
		___m_ticksOffset_6 = value;
	}

	inline static int32_t get_offset_of_utcOffsetWithOutDLS_7() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t1349074817, ___utcOffsetWithOutDLS_7)); }
	inline TimeSpan_t1627018810  get_utcOffsetWithOutDLS_7() const { return ___utcOffsetWithOutDLS_7; }
	inline TimeSpan_t1627018810 * get_address_of_utcOffsetWithOutDLS_7() { return &___utcOffsetWithOutDLS_7; }
	inline void set_utcOffsetWithOutDLS_7(TimeSpan_t1627018810  value)
	{
		___utcOffsetWithOutDLS_7 = value;
	}

	inline static int32_t get_offset_of_utcOffsetWithDLS_8() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t1349074817, ___utcOffsetWithDLS_8)); }
	inline TimeSpan_t1627018810  get_utcOffsetWithDLS_8() const { return ___utcOffsetWithDLS_8; }
	inline TimeSpan_t1627018810 * get_address_of_utcOffsetWithDLS_8() { return &___utcOffsetWithDLS_8; }
	inline void set_utcOffsetWithDLS_8(TimeSpan_t1627018810  value)
	{
		___utcOffsetWithDLS_8 = value;
	}
};

struct CurrentSystemTimeZone_t1349074817_StaticFields
{
public:
	// System.Int32 System.CurrentSystemTimeZone::this_year
	int32_t ___this_year_9;
	// System.Globalization.DaylightTime System.CurrentSystemTimeZone::this_year_dlt
	DaylightTime_t1805797886 * ___this_year_dlt_10;

public:
	inline static int32_t get_offset_of_this_year_9() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t1349074817_StaticFields, ___this_year_9)); }
	inline int32_t get_this_year_9() const { return ___this_year_9; }
	inline int32_t* get_address_of_this_year_9() { return &___this_year_9; }
	inline void set_this_year_9(int32_t value)
	{
		___this_year_9 = value;
	}

	inline static int32_t get_offset_of_this_year_dlt_10() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t1349074817_StaticFields, ___this_year_dlt_10)); }
	inline DaylightTime_t1805797886 * get_this_year_dlt_10() const { return ___this_year_dlt_10; }
	inline DaylightTime_t1805797886 ** get_address_of_this_year_dlt_10() { return &___this_year_dlt_10; }
	inline void set_this_year_dlt_10(DaylightTime_t1805797886 * value)
	{
		___this_year_dlt_10 = value;
		Il2CppCodeGenWriteBarrier((&___this_year_dlt_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CURRENTSYSTEMTIMEZONE_T1349074817_H
#ifndef TYPECODE_T1480274827_H
#define TYPECODE_T1480274827_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypeCode
struct  TypeCode_t1480274827 
{
public:
	// System.Int32 System.TypeCode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TypeCode_t1480274827, ___value___1)); }
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
#endif // TYPECODE_T1480274827_H
#ifndef TYPEINITIALIZATIONEXCEPTION_T1804095535_H
#define TYPEINITIALIZATIONEXCEPTION_T1804095535_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypeInitializationException
struct  TypeInitializationException_t1804095535  : public SystemException_t2247450559
{
public:
	// System.String System.TypeInitializationException::type_name
	String_t* ___type_name_11;

public:
	inline static int32_t get_offset_of_type_name_11() { return static_cast<int32_t>(offsetof(TypeInitializationException_t1804095535, ___type_name_11)); }
	inline String_t* get_type_name_11() const { return ___type_name_11; }
	inline String_t** get_address_of_type_name_11() { return &___type_name_11; }
	inline void set_type_name_11(String_t* value)
	{
		___type_name_11 = value;
		Il2CppCodeGenWriteBarrier((&___type_name_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEINITIALIZATIONEXCEPTION_T1804095535_H
#ifndef TYPELOADEXCEPTION_T1423230533_H
#define TYPELOADEXCEPTION_T1423230533_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypeLoadException
struct  TypeLoadException_t1423230533  : public SystemException_t2247450559
{
public:
	// System.String System.TypeLoadException::className
	String_t* ___className_12;
	// System.String System.TypeLoadException::assemblyName
	String_t* ___assemblyName_13;

public:
	inline static int32_t get_offset_of_className_12() { return static_cast<int32_t>(offsetof(TypeLoadException_t1423230533, ___className_12)); }
	inline String_t* get_className_12() const { return ___className_12; }
	inline String_t** get_address_of_className_12() { return &___className_12; }
	inline void set_className_12(String_t* value)
	{
		___className_12 = value;
		Il2CppCodeGenWriteBarrier((&___className_12), value);
	}

	inline static int32_t get_offset_of_assemblyName_13() { return static_cast<int32_t>(offsetof(TypeLoadException_t1423230533, ___assemblyName_13)); }
	inline String_t* get_assemblyName_13() const { return ___assemblyName_13; }
	inline String_t** get_address_of_assemblyName_13() { return &___assemblyName_13; }
	inline void set_assemblyName_13(String_t* value)
	{
		___assemblyName_13 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyName_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPELOADEXCEPTION_T1423230533_H
#ifndef UNAUTHORIZEDACCESSEXCEPTION_T2193424038_H
#define UNAUTHORIZEDACCESSEXCEPTION_T2193424038_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnauthorizedAccessException
struct  UnauthorizedAccessException_t2193424038  : public SystemException_t2247450559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNAUTHORIZEDACCESSEXCEPTION_T2193424038_H
#ifndef SIGN_T4036904649_H
#define SIGN_T4036904649_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.BigInteger/Sign
struct  Sign_t4036904649 
{
public:
	// System.Int32 Mono.Math.BigInteger/Sign::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Sign_t4036904649, ___value___1)); }
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
#endif // SIGN_T4036904649_H
#ifndef WEAKREFERENCE_T4193322247_H
#define WEAKREFERENCE_T4193322247_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.WeakReference
struct  WeakReference_t4193322247  : public RuntimeObject
{
public:
	// System.Boolean System.WeakReference::isLongReference
	bool ___isLongReference_0;
	// System.Runtime.InteropServices.GCHandle System.WeakReference::gcHandle
	GCHandle_t225103611  ___gcHandle_1;

public:
	inline static int32_t get_offset_of_isLongReference_0() { return static_cast<int32_t>(offsetof(WeakReference_t4193322247, ___isLongReference_0)); }
	inline bool get_isLongReference_0() const { return ___isLongReference_0; }
	inline bool* get_address_of_isLongReference_0() { return &___isLongReference_0; }
	inline void set_isLongReference_0(bool value)
	{
		___isLongReference_0 = value;
	}

	inline static int32_t get_offset_of_gcHandle_1() { return static_cast<int32_t>(offsetof(WeakReference_t4193322247, ___gcHandle_1)); }
	inline GCHandle_t225103611  get_gcHandle_1() const { return ___gcHandle_1; }
	inline GCHandle_t225103611 * get_address_of_gcHandle_1() { return &___gcHandle_1; }
	inline void set_gcHandle_1(GCHandle_t225103611  value)
	{
		___gcHandle_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEAKREFERENCE_T4193322247_H
#ifndef UNITYTYPE_T1110263324_H
#define UNITYTYPE_T1110263324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnitySerializationHolder/UnityType
struct  UnityType_t1110263324 
{
public:
	// System.Byte System.UnitySerializationHolder/UnityType::value__
	uint8_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UnityType_t1110263324, ___value___1)); }
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
#endif // UNITYTYPE_T1110263324_H
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3793596152_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3793596152_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t3793596152  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t3793596152_StaticFields
{
public:
	// <PrivateImplementationDetails>/$ArrayType$56 <PrivateImplementationDetails>::$$field-0
	U24ArrayTypeU2456_t600203385  ___U24U24fieldU2D0_0;
	// <PrivateImplementationDetails>/$ArrayType$24 <PrivateImplementationDetails>::$$field-1
	U24ArrayTypeU2424_t992868333  ___U24U24fieldU2D1_1;
	// <PrivateImplementationDetails>/$ArrayType$24 <PrivateImplementationDetails>::$$field-2
	U24ArrayTypeU2424_t992868333  ___U24U24fieldU2D2_2;
	// <PrivateImplementationDetails>/$ArrayType$24 <PrivateImplementationDetails>::$$field-3
	U24ArrayTypeU2424_t992868333  ___U24U24fieldU2D3_3;
	// <PrivateImplementationDetails>/$ArrayType$24 <PrivateImplementationDetails>::$$field-4
	U24ArrayTypeU2424_t992868333  ___U24U24fieldU2D4_4;
	// <PrivateImplementationDetails>/$ArrayType$16 <PrivateImplementationDetails>::$$field-5
	U24ArrayTypeU2416_t1911017300  ___U24U24fieldU2D5_5;
	// <PrivateImplementationDetails>/$ArrayType$16 <PrivateImplementationDetails>::$$field-6
	U24ArrayTypeU2416_t1911017300  ___U24U24fieldU2D6_6;
	// <PrivateImplementationDetails>/$ArrayType$3132 <PrivateImplementationDetails>::$$field-15
	U24ArrayTypeU243132_t3470299486  ___U24U24fieldU2D15_7;
	// <PrivateImplementationDetails>/$ArrayType$20 <PrivateImplementationDetails>::$$field-16
	U24ArrayTypeU2420_t820113788  ___U24U24fieldU2D16_8;
	// <PrivateImplementationDetails>/$ArrayType$32 <PrivateImplementationDetails>::$$field-17
	U24ArrayTypeU2432_t868397469  ___U24U24fieldU2D17_9;
	// <PrivateImplementationDetails>/$ArrayType$48 <PrivateImplementationDetails>::$$field-18
	U24ArrayTypeU2448_t2679062403  ___U24U24fieldU2D18_10;
	// <PrivateImplementationDetails>/$ArrayType$64 <PrivateImplementationDetails>::$$field-19
	U24ArrayTypeU2464_t2400480182  ___U24U24fieldU2D19_11;
	// <PrivateImplementationDetails>/$ArrayType$64 <PrivateImplementationDetails>::$$field-20
	U24ArrayTypeU2464_t2400480182  ___U24U24fieldU2D20_12;
	// <PrivateImplementationDetails>/$ArrayType$64 <PrivateImplementationDetails>::$$field-21
	U24ArrayTypeU2464_t2400480182  ___U24U24fieldU2D21_13;
	// <PrivateImplementationDetails>/$ArrayType$64 <PrivateImplementationDetails>::$$field-22
	U24ArrayTypeU2464_t2400480182  ___U24U24fieldU2D22_14;
	// <PrivateImplementationDetails>/$ArrayType$12 <PrivateImplementationDetails>::$$field-23
	U24ArrayTypeU2412_t1618401966  ___U24U24fieldU2D23_15;
	// <PrivateImplementationDetails>/$ArrayType$12 <PrivateImplementationDetails>::$$field-24
	U24ArrayTypeU2412_t1618401966  ___U24U24fieldU2D24_16;
	// <PrivateImplementationDetails>/$ArrayType$12 <PrivateImplementationDetails>::$$field-25
	U24ArrayTypeU2412_t1618401966  ___U24U24fieldU2D25_17;
	// <PrivateImplementationDetails>/$ArrayType$16 <PrivateImplementationDetails>::$$field-26
	U24ArrayTypeU2416_t1911017300  ___U24U24fieldU2D26_18;
	// <PrivateImplementationDetails>/$ArrayType$136 <PrivateImplementationDetails>::$$field-27
	U24ArrayTypeU24136_t2193125036  ___U24U24fieldU2D27_19;
	// <PrivateImplementationDetails>/$ArrayType$72 <PrivateImplementationDetails>::$$field-30
	U24ArrayTypeU2472_t4235473988  ___U24U24fieldU2D30_20;
	// <PrivateImplementationDetails>/$ArrayType$8 <PrivateImplementationDetails>::$$field-31
	U24ArrayTypeU248_t1047038965  ___U24U24fieldU2D31_21;
	// <PrivateImplementationDetails>/$ArrayType$20 <PrivateImplementationDetails>::$$field-32
	U24ArrayTypeU2420_t820113788  ___U24U24fieldU2D32_22;
	// <PrivateImplementationDetails>/$ArrayType$64 <PrivateImplementationDetails>::$$field-33
	U24ArrayTypeU2464_t2400480182  ___U24U24fieldU2D33_23;
	// <PrivateImplementationDetails>/$ArrayType$124 <PrivateImplementationDetails>::$$field-34
	U24ArrayTypeU24124_t3981583019  ___U24U24fieldU2D34_24;
	// <PrivateImplementationDetails>/$ArrayType$32 <PrivateImplementationDetails>::$$field-35
	U24ArrayTypeU2432_t868397469  ___U24U24fieldU2D35_25;
	// <PrivateImplementationDetails>/$ArrayType$96 <PrivateImplementationDetails>::$$field-36
	U24ArrayTypeU2496_t3327887044  ___U24U24fieldU2D36_26;
	// <PrivateImplementationDetails>/$ArrayType$2048 <PrivateImplementationDetails>::$$field-37
	U24ArrayTypeU242048_t157123511  ___U24U24fieldU2D37_27;
	// <PrivateImplementationDetails>/$ArrayType$56 <PrivateImplementationDetails>::$$field-38
	U24ArrayTypeU2456_t600203385  ___U24U24fieldU2D38_28;
	// <PrivateImplementationDetails>/$ArrayType$16 <PrivateImplementationDetails>::$$field-39
	U24ArrayTypeU2416_t1911017300  ___U24U24fieldU2D39_29;
	// <PrivateImplementationDetails>/$ArrayType$48 <PrivateImplementationDetails>::$$field-40
	U24ArrayTypeU2448_t2679062403  ___U24U24fieldU2D40_30;
	// <PrivateImplementationDetails>/$ArrayType$2048 <PrivateImplementationDetails>::$$field-41
	U24ArrayTypeU242048_t157123511  ___U24U24fieldU2D41_31;
	// <PrivateImplementationDetails>/$ArrayType$2048 <PrivateImplementationDetails>::$$field-42
	U24ArrayTypeU242048_t157123511  ___U24U24fieldU2D42_32;
	// <PrivateImplementationDetails>/$ArrayType$256 <PrivateImplementationDetails>::$$field-43
	U24ArrayTypeU24256_t2595027676  ___U24U24fieldU2D43_33;
	// <PrivateImplementationDetails>/$ArrayType$256 <PrivateImplementationDetails>::$$field-44
	U24ArrayTypeU24256_t2595027676  ___U24U24fieldU2D44_34;
	// <PrivateImplementationDetails>/$ArrayType$120 <PrivateImplementationDetails>::$$field-45
	U24ArrayTypeU24120_t4230284466  ___U24U24fieldU2D45_35;
	// <PrivateImplementationDetails>/$ArrayType$256 <PrivateImplementationDetails>::$$field-46
	U24ArrayTypeU24256_t2595027676  ___U24U24fieldU2D46_36;
	// <PrivateImplementationDetails>/$ArrayType$256 <PrivateImplementationDetails>::$$field-47
	U24ArrayTypeU24256_t2595027676  ___U24U24fieldU2D47_37;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-48
	U24ArrayTypeU241024_t708480540  ___U24U24fieldU2D48_38;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-49
	U24ArrayTypeU241024_t708480540  ___U24U24fieldU2D49_39;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-50
	U24ArrayTypeU241024_t708480540  ___U24U24fieldU2D50_40;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-51
	U24ArrayTypeU241024_t708480540  ___U24U24fieldU2D51_41;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-52
	U24ArrayTypeU241024_t708480540  ___U24U24fieldU2D52_42;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-53
	U24ArrayTypeU241024_t708480540  ___U24U24fieldU2D53_43;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-54
	U24ArrayTypeU241024_t708480540  ___U24U24fieldU2D54_44;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-55
	U24ArrayTypeU241024_t708480540  ___U24U24fieldU2D55_45;
	// <PrivateImplementationDetails>/$ArrayType$256 <PrivateImplementationDetails>::$$field-56
	U24ArrayTypeU24256_t2595027676  ___U24U24fieldU2D56_46;
	// <PrivateImplementationDetails>/$ArrayType$640 <PrivateImplementationDetails>::$$field-57
	U24ArrayTypeU24640_t2115262595  ___U24U24fieldU2D57_47;
	// <PrivateImplementationDetails>/$ArrayType$12 <PrivateImplementationDetails>::$$field-60
	U24ArrayTypeU2412_t1618401966  ___U24U24fieldU2D60_48;
	// <PrivateImplementationDetails>/$ArrayType$128 <PrivateImplementationDetails>::$$field-62
	U24ArrayTypeU24128_t2408794763  ___U24U24fieldU2D62_49;
	// <PrivateImplementationDetails>/$ArrayType$256 <PrivateImplementationDetails>::$$field-63
	U24ArrayTypeU24256_t2595027676  ___U24U24fieldU2D63_50;
	// <PrivateImplementationDetails>/$ArrayType$52 <PrivateImplementationDetails>::$$field-64
	U24ArrayTypeU2452_t2585479835  ___U24U24fieldU2D64_51;
	// <PrivateImplementationDetails>/$ArrayType$52 <PrivateImplementationDetails>::$$field-65
	U24ArrayTypeU2452_t2585479835  ___U24U24fieldU2D65_52;

public:
	inline static int32_t get_offset_of_U24U24fieldU2D0_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3793596152_StaticFields, ___U24U24fieldU2D0_0)); }
	inline U24ArrayTypeU2456_t600203385  get_U24U24fieldU2D0_0() const { return ___U24U24fieldU2D0_0; }
	inline U24ArrayTypeU2456_t600203385 * get_address_of_U24U24fieldU2D0_0() { return &___U24U24fieldU2D0_0; }
	inline void set_U24U24fieldU2D0_0(U24ArrayTypeU2456_t600203385  value)
	{
		___U24U24fieldU2D0_0 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D1_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3793596152_StaticFields, ___U24U24fieldU2D1_1)); }
	inline U24ArrayTypeU2424_t992868333  get_U24U24fieldU2D1_1() const { return ___U24U24fieldU2D1_1; }
	inline U24ArrayTypeU2424_t992868333 * get_address_of_U24U24fieldU2D1_1() { return &___U24U24fieldU2D1_1; }
	inline void set_U24U24fieldU2D1_1(U24ArrayTypeU2424_t992868333  value)
	{
		___U24U24fieldU2D1_1 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D2_2() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3793596152_StaticFields, ___U24U24fieldU2D2_2)); }
	inline U24ArrayTypeU2424_t992868333  get_U24U24fieldU2D2_2() const { return ___U24U24fieldU2D2_2; }
	inline U24ArrayTypeU2424_t992868333 * get_address_of_U24U24fieldU2D2_2() { return &___U24U24fieldU2D2_2; }
	inline void set_U24U24fieldU2D2_2(U24ArrayTypeU2424_t992868333  value)
	{
		___U24U24fieldU2D2_2 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D3_3() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3793596152_StaticFields, ___U24U24fieldU2D3_3)); }
	inline U24ArrayTypeU2424_t992868333  get_U24U24fieldU2D3_3() const { return ___U24U24fieldU2D3_3; }
	inline U24ArrayTypeU2424_t992868333 * get_address_of_U24U24fieldU2D3_3() { return &___U24U24fieldU2D3_3; }
	inline void set_U24U24fieldU2D3_3(U24ArrayTypeU2424_t992868333  value)
	{
		___U24U24fieldU2D3_3 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D4_4() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3793596152_StaticFields, ___U24U24fieldU2D4_4)); }
	inline U24ArrayTypeU2424_t992868333  get_U24U24fieldU2D4_4() const { return ___U24U24fieldU2D4_4; }
	inline U24ArrayTypeU2424_t992868333 * get_address_of_U24U24fieldU2D4_4() { return &___U24U24fieldU2D4_4; }
	inline void set_U24U24fieldU2D4_4(U24ArrayTypeU2424_t992868333  value)
	{
		___U24U24fieldU2D4_4 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D5_5() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3793596152_StaticFields, ___U24U24fieldU2D5_5)); }
	inline U24ArrayTypeU2416_t1911017300  get_U24U24fieldU2D5_5() const { return ___U24U24fieldU2D5_5; }
	inline U24ArrayTypeU2416_t1911017300 * get_address_of_U24U24fieldU2D5_5() { return &___U24U24fieldU2D5_5; }
	inline void set_U24U24fieldU2D5_5(U24ArrayTypeU2416_t1911017300  value)
	{
		___U24U24fieldU2D5_5 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D6_6() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3793596152_StaticFields, ___U24U24fieldU2D6_6)); }
	inline U24ArrayTypeU2416_t1911017300  get_U24U24fieldU2D6_6() const { return ___U24U24fieldU2D6_6; }
	inline U24ArrayTypeU2416_t1911017300 * get_address_of_U24U24fieldU2D6_6() { return &___U24U24fieldU2D6_6; }
	inline void set_U24U24fieldU2D6_6(U24ArrayTypeU2416_t1911017300  value)
	{
		___U24U24fieldU2D6_6 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D15_7() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3793596152_StaticFields, ___U24U24fieldU2D15_7)); }
	inline U24ArrayTypeU243132_t3470299486  get_U24U24fieldU2D15_7() const { return ___U24U24fieldU2D15_7; }
	inline U24ArrayTypeU243132_t3470299486 * get_address_of_U24U24fieldU2D15_7() { return &___U24U24fieldU2D15_7; }
	inline void set_U24U24fieldU2D15_7(U24ArrayTypeU243132_t3470299486  value)
	{
		___U24U24fieldU2D15_7 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D16_8() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3793596152_StaticFields, ___U24U24fieldU2D16_8)); }
	inline U24ArrayTypeU2420_t820113788  get_U24U24fieldU2D16_8() const { return ___U24U24fieldU2D16_8; }
	inline U24ArrayTypeU2420_t820113788 * get_address_of_U24U24fieldU2D16_8() { return &___U24U24fieldU2D16_8; }
	inline void set_U24U24fieldU2D16_8(U24ArrayTypeU2420_t820113788  value)
	{
		___U24U24fieldU2D16_8 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D17_9() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3793596152_StaticFields, ___U24U24fieldU2D17_9)); }
	inline U24ArrayTypeU2432_t868397469  get_U24U24fieldU2D17_9() const { return ___U24U24fieldU2D17_9; }
	inline U24ArrayTypeU2432_t868397469 * get_address_of_U24U24fieldU2D17_9() { return &___U24U24fieldU2D17_9; }
	inline void set_U24U24fieldU2D17_9(U24ArrayTypeU2432_t868397469  value)
	{
		___U24U24fieldU2D17_9 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D18_10() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3793596152_StaticFields, ___U24U24fieldU2D18_10)); }
	inline U24ArrayTypeU2448_t2679062403  get_U24U24fieldU2D18_10() const { return ___U24U24fieldU2D18_10; }
	inline U24ArrayTypeU2448_t2679062403 * get_address_of_U24U24fieldU2D18_10() { return &___U24U24fieldU2D18_10; }
	inline void set_U24U24fieldU2D18_10(U24ArrayTypeU2448_t2679062403  value)
	{
		___U24U24fieldU2D18_10 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D19_11() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3793596152_StaticFields, ___U24U24fieldU2D19_11)); }
	inline U24ArrayTypeU2464_t2400480182  get_U24U24fieldU2D19_11() const { return ___U24U24fieldU2D19_11; }
	inline U24ArrayTypeU2464_t2400480182 * get_address_of_U24U24fieldU2D19_11() { return &___U24U24fieldU2D19_11; }
	inline void set_U24U24fieldU2D19_11(U24ArrayTypeU2464_t2400480182  value)
	{
		___U24U24fieldU2D19_11 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D20_12() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3793596152_StaticFields, ___U24U24fieldU2D20_12)); }
	inline U24ArrayTypeU2464_t2400480182  get_U24U24fieldU2D20_12() const { return ___U24U24fieldU2D20_12; }
	inline U24ArrayTypeU2464_t2400480182 * get_address_of_U24U24fieldU2D20_12() { return &___U24U24fieldU2D20_12; }
	inline void set_U24U24fieldU2D20_12(U24ArrayTypeU2464_t2400480182  value)
	{
		___U24U24fieldU2D20_12 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D21_13() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3793596152_StaticFields, ___U24U24fieldU2D21_13)); }
	inline U24ArrayTypeU2464_t2400480182  get_U24U24fieldU2D21_13() const { return ___U24U24fieldU2D21_13; }
	inline U24ArrayTypeU2464_t2400480182 * get_address_of_U24U24fieldU2D21_13() { return &___U24U24fieldU2D21_13; }
	inline void set_U24U24fieldU2D21_13(U24ArrayTypeU2464_t2400480182  value)
	{
		___U24U24fieldU2D21_13 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D22_14() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3793596152_StaticFields, ___U24U24fieldU2D22_14)); }
	inline U24ArrayTypeU2464_t2400480182  get_U24U24fieldU2D22_14() const { return ___U24U24fieldU2D22_14; }
	inline U24ArrayTypeU2464_t2400480182 * get_address_of_U24U24fieldU2D22_14() { return &___U24U24fieldU2D22_14; }
	inline void set_U24U24fieldU2D22_14(U24ArrayTypeU2464_t2400480182  value)
	{
		___U24U24fieldU2D22_14 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D23_15() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3793596152_StaticFields, ___U24U24fieldU2D23_15)); }
	inline U24ArrayTypeU2412_t1618401966  get_U24U24fieldU2D23_15() const { return ___U24U24fieldU2D23_15; }
	inline U24ArrayTypeU2412_t1618401966 * get_address_of_U24U24fieldU2D23_15() { return &___U24U24fieldU2D23_15; }
	inline void set_U24U24fieldU2D23_15(U24ArrayTypeU2412_t1618401966  value)
	{
		___U24U24fieldU2D23_15 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D24_16() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3793596152_StaticFields, ___U24U24fieldU2D24_16)); }
	inline U24ArrayTypeU2412_t1618401966  get_U24U24fieldU2D24_16() const { return ___U24U24fieldU2D24_16; }
	inline U24ArrayTypeU2412_t1618401966 * get_address_of_U24U24fieldU2D24_16() { return &___U24U24fieldU2D24_16; }
	inline void set_U24U24fieldU2D24_16(U24ArrayTypeU2412_t1618401966  value)
	{
		___U24U24fieldU2D24_16 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D25_17() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3793596152_StaticFields, ___U24U24fieldU2D25_17)); }
	inline U24ArrayTypeU2412_t1618401966  get_U24U24fieldU2D25_17() const { return ___U24U24fieldU2D25_17; }
	inline U24ArrayTypeU2412_t1618401966 * get_address_of_U24U24fieldU2D25_17() { return &___U24U24fieldU2D25_17; }
	inline void set_U24U24fieldU2D25_17(U24ArrayTypeU2412_t1618401966  value)
	{
		___U24U24fieldU2D25_17 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D26_18() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3793596152_StaticFields, ___U24U24fieldU2D26_18)); }
	inline U24ArrayTypeU2416_t1911017300  get_U24U24fieldU2D26_18() const { return ___U24U24fieldU2D26_18; }
	inline U24ArrayTypeU2416_t1911017300 * get_address_of_U24U24fieldU2D26_18() { return &___U24U24fieldU2D26_18; }
	inline void set_U24U24fieldU2D26_18(U24ArrayTypeU2416_t1911017300  value)
	{
		___U24U24fieldU2D26_18 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D27_19() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3793596152_StaticFields, ___U24U24fieldU2D27_19)); }
	inline U24ArrayTypeU24136_t2193125036  get_U24U24fieldU2D27_19() const { return ___U24U24fieldU2D27_19; }
	inline U24ArrayTypeU24136_t2193125036 * get_address_of_U24U24fieldU2D27_19() { return &___U24U24fieldU2D27_19; }
	inline void set_U24U24fieldU2D27_19(U24ArrayTypeU24136_t2193125036  value)
	{
		___U24U24fieldU2D27_19 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D30_20() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3793596152_StaticFields, ___U24U24fieldU2D30_20)); }
	inline U24ArrayTypeU2472_t4235473988  get_U24U24fieldU2D30_20() const { return ___U24U24fieldU2D30_20; }
	inline U24ArrayTypeU2472_t4235473988 * get_address_of_U24U24fieldU2D30_20() { return &___U24U24fieldU2D30_20; }
	inline void set_U24U24fieldU2D30_20(U24ArrayTypeU2472_t4235473988  value)
	{
		___U24U24fieldU2D30_20 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D31_21() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3793596152_StaticFields, ___U24U24fieldU2D31_21)); }
	inline U24ArrayTypeU248_t1047038965  get_U24U24fieldU2D31_21() const { return ___U24U24fieldU2D31_21; }
	inline U24ArrayTypeU248_t1047038965 * get_address_of_U24U24fieldU2D31_21() { return &___U24U24fieldU2D31_21; }
	inline void set_U24U24fieldU2D31_21(U24ArrayTypeU248_t1047038965  value)
	{
		___U24U24fieldU2D31_21 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D32_22() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3793596152_StaticFields, ___U24U24fieldU2D32_22)); }
	inline U24ArrayTypeU2420_t820113788  get_U24U24fieldU2D32_22() const { return ___U24U24fieldU2D32_22; }
	inline U24ArrayTypeU2420_t820113788 * get_address_of_U24U24fieldU2D32_22() { return &___U24U24fieldU2D32_22; }
	inline void set_U24U24fieldU2D32_22(U24ArrayTypeU2420_t820113788  value)
	{
		___U24U24fieldU2D32_22 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D33_23() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3793596152_StaticFields, ___U24U24fieldU2D33_23)); }
	inline U24ArrayTypeU2464_t2400480182  get_U24U24fieldU2D33_23() const { return ___U24U24fieldU2D33_23; }
	inline U24ArrayTypeU2464_t2400480182 * get_address_of_U24U24fieldU2D33_23() { return &___U24U24fieldU2D33_23; }
	inline void set_U24U24fieldU2D33_23(U24ArrayTypeU2464_t2400480182  value)
	{
		___U24U24fieldU2D33_23 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D34_24() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3793596152_StaticFields, ___U24U24fieldU2D34_24)); }
	inline U24ArrayTypeU24124_t3981583019  get_U24U24fieldU2D34_24() const { return ___U24U24fieldU2D34_24; }
	inline U24ArrayTypeU24124_t3981583019 * get_address_of_U24U24fieldU2D34_24() { return &___U24U24fieldU2D34_24; }
	inline void set_U24U24fieldU2D34_24(U24ArrayTypeU24124_t3981583019  value)
	{
		___U24U24fieldU2D34_24 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D35_25() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3793596152_StaticFields, ___U24U24fieldU2D35_25)); }
	inline U24ArrayTypeU2432_t868397469  get_U24U24fieldU2D35_25() const { return ___U24U24fieldU2D35_25; }
	inline U24ArrayTypeU2432_t868397469 * get_address_of_U24U24fieldU2D35_25() { return &___U24U24fieldU2D35_25; }
	inline void set_U24U24fieldU2D35_25(U24ArrayTypeU2432_t868397469  value)
	{
		___U24U24fieldU2D35_25 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D36_26() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3793596152_StaticFields, ___U24U24fieldU2D36_26)); }
	inline U24ArrayTypeU2496_t3327887044  get_U24U24fieldU2D36_26() const { return ___U24U24fieldU2D36_26; }
	inline U24ArrayTypeU2496_t3327887044 * get_address_of_U24U24fieldU2D36_26() { return &___U24U24fieldU2D36_26; }
	inline void set_U24U24fieldU2D36_26(U24ArrayTypeU2496_t3327887044  value)
	{
		___U24U24fieldU2D36_26 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D37_27() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3793596152_StaticFields, ___U24U24fieldU2D37_27)); }
	inline U24ArrayTypeU242048_t157123511  get_U24U24fieldU2D37_27() const { return ___U24U24fieldU2D37_27; }
	inline U24ArrayTypeU242048_t157123511 * get_address_of_U24U24fieldU2D37_27() { return &___U24U24fieldU2D37_27; }
	inline void set_U24U24fieldU2D37_27(U24ArrayTypeU242048_t157123511  value)
	{
		___U24U24fieldU2D37_27 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D38_28() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3793596152_StaticFields, ___U24U24fieldU2D38_28)); }
	inline U24ArrayTypeU2456_t600203385  get_U24U24fieldU2D38_28() const { return ___U24U24fieldU2D38_28; }
	inline U24ArrayTypeU2456_t600203385 * get_address_of_U24U24fieldU2D38_28() { return &___U24U24fieldU2D38_28; }
	inline void set_U24U24fieldU2D38_28(U24ArrayTypeU2456_t600203385  value)
	{
		___U24U24fieldU2D38_28 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D39_29() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3793596152_StaticFields, ___U24U24fieldU2D39_29)); }
	inline U24ArrayTypeU2416_t1911017300  get_U24U24fieldU2D39_29() const { return ___U24U24fieldU2D39_29; }
	inline U24ArrayTypeU2416_t1911017300 * get_address_of_U24U24fieldU2D39_29() { return &___U24U24fieldU2D39_29; }
	inline void set_U24U24fieldU2D39_29(U24ArrayTypeU2416_t1911017300  value)
	{
		___U24U24fieldU2D39_29 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D40_30() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3793596152_StaticFields, ___U24U24fieldU2D40_30)); }
	inline U24ArrayTypeU2448_t2679062403  get_U24U24fieldU2D40_30() const { return ___U24U24fieldU2D40_30; }
	inline U24ArrayTypeU2448_t2679062403 * get_address_of_U24U24fieldU2D40_30() { return &___U24U24fieldU2D40_30; }
	inline void set_U24U24fieldU2D40_30(U24ArrayTypeU2448_t2679062403  value)
	{
		___U24U24fieldU2D40_30 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D41_31() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3793596152_StaticFields, ___U24U24fieldU2D41_31)); }
	inline U24ArrayTypeU242048_t157123511  get_U24U24fieldU2D41_31() const { return ___U24U24fieldU2D41_31; }
	inline U24ArrayTypeU242048_t157123511 * get_address_of_U24U24fieldU2D41_31() { return &___U24U24fieldU2D41_31; }
	inline void set_U24U24fieldU2D41_31(U24ArrayTypeU242048_t157123511  value)
	{
		___U24U24fieldU2D41_31 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D42_32() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3793596152_StaticFields, ___U24U24fieldU2D42_32)); }
	inline U24ArrayTypeU242048_t157123511  get_U24U24fieldU2D42_32() const { return ___U24U24fieldU2D42_32; }
	inline U24ArrayTypeU242048_t157123511 * get_address_of_U24U24fieldU2D42_32() { return &___U24U24fieldU2D42_32; }
	inline void set_U24U24fieldU2D42_32(U24ArrayTypeU242048_t157123511  value)
	{
		___U24U24fieldU2D42_32 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D43_33() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3793596152_StaticFields, ___U24U24fieldU2D43_33)); }
	inline U24ArrayTypeU24256_t2595027676  get_U24U24fieldU2D43_33() const { return ___U24U24fieldU2D43_33; }
	inline U24ArrayTypeU24256_t2595027676 * get_address_of_U24U24fieldU2D43_33() { return &___U24U24fieldU2D43_33; }
	inline void set_U24U24fieldU2D43_33(U24ArrayTypeU24256_t2595027676  value)
	{
		___U24U24fieldU2D43_33 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D44_34() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3793596152_StaticFields, ___U24U24fieldU2D44_34)); }
	inline U24ArrayTypeU24256_t2595027676  get_U24U24fieldU2D44_34() const { return ___U24U24fieldU2D44_34; }
	inline U24ArrayTypeU24256_t2595027676 * get_address_of_U24U24fieldU2D44_34() { return &___U24U24fieldU2D44_34; }
	inline void set_U24U24fieldU2D44_34(U24ArrayTypeU24256_t2595027676  value)
	{
		___U24U24fieldU2D44_34 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D45_35() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3793596152_StaticFields, ___U24U24fieldU2D45_35)); }
	inline U24ArrayTypeU24120_t4230284466  get_U24U24fieldU2D45_35() const { return ___U24U24fieldU2D45_35; }
	inline U24ArrayTypeU24120_t4230284466 * get_address_of_U24U24fieldU2D45_35() { return &___U24U24fieldU2D45_35; }
	inline void set_U24U24fieldU2D45_35(U24ArrayTypeU24120_t4230284466  value)
	{
		___U24U24fieldU2D45_35 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D46_36() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3793596152_StaticFields, ___U24U24fieldU2D46_36)); }
	inline U24ArrayTypeU24256_t2595027676  get_U24U24fieldU2D46_36() const { return ___U24U24fieldU2D46_36; }
	inline U24ArrayTypeU24256_t2595027676 * get_address_of_U24U24fieldU2D46_36() { return &___U24U24fieldU2D46_36; }
	inline void set_U24U24fieldU2D46_36(U24ArrayTypeU24256_t2595027676  value)
	{
		___U24U24fieldU2D46_36 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D47_37() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3793596152_StaticFields, ___U24U24fieldU2D47_37)); }
	inline U24ArrayTypeU24256_t2595027676  get_U24U24fieldU2D47_37() const { return ___U24U24fieldU2D47_37; }
	inline U24ArrayTypeU24256_t2595027676 * get_address_of_U24U24fieldU2D47_37() { return &___U24U24fieldU2D47_37; }
	inline void set_U24U24fieldU2D47_37(U24ArrayTypeU24256_t2595027676  value)
	{
		___U24U24fieldU2D47_37 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D48_38() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3793596152_StaticFields, ___U24U24fieldU2D48_38)); }
	inline U24ArrayTypeU241024_t708480540  get_U24U24fieldU2D48_38() const { return ___U24U24fieldU2D48_38; }
	inline U24ArrayTypeU241024_t708480540 * get_address_of_U24U24fieldU2D48_38() { return &___U24U24fieldU2D48_38; }
	inline void set_U24U24fieldU2D48_38(U24ArrayTypeU241024_t708480540  value)
	{
		___U24U24fieldU2D48_38 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D49_39() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3793596152_StaticFields, ___U24U24fieldU2D49_39)); }
	inline U24ArrayTypeU241024_t708480540  get_U24U24fieldU2D49_39() const { return ___U24U24fieldU2D49_39; }
	inline U24ArrayTypeU241024_t708480540 * get_address_of_U24U24fieldU2D49_39() { return &___U24U24fieldU2D49_39; }
	inline void set_U24U24fieldU2D49_39(U24ArrayTypeU241024_t708480540  value)
	{
		___U24U24fieldU2D49_39 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D50_40() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3793596152_StaticFields, ___U24U24fieldU2D50_40)); }
	inline U24ArrayTypeU241024_t708480540  get_U24U24fieldU2D50_40() const { return ___U24U24fieldU2D50_40; }
	inline U24ArrayTypeU241024_t708480540 * get_address_of_U24U24fieldU2D50_40() { return &___U24U24fieldU2D50_40; }
	inline void set_U24U24fieldU2D50_40(U24ArrayTypeU241024_t708480540  value)
	{
		___U24U24fieldU2D50_40 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D51_41() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3793596152_StaticFields, ___U24U24fieldU2D51_41)); }
	inline U24ArrayTypeU241024_t708480540  get_U24U24fieldU2D51_41() const { return ___U24U24fieldU2D51_41; }
	inline U24ArrayTypeU241024_t708480540 * get_address_of_U24U24fieldU2D51_41() { return &___U24U24fieldU2D51_41; }
	inline void set_U24U24fieldU2D51_41(U24ArrayTypeU241024_t708480540  value)
	{
		___U24U24fieldU2D51_41 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D52_42() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3793596152_StaticFields, ___U24U24fieldU2D52_42)); }
	inline U24ArrayTypeU241024_t708480540  get_U24U24fieldU2D52_42() const { return ___U24U24fieldU2D52_42; }
	inline U24ArrayTypeU241024_t708480540 * get_address_of_U24U24fieldU2D52_42() { return &___U24U24fieldU2D52_42; }
	inline void set_U24U24fieldU2D52_42(U24ArrayTypeU241024_t708480540  value)
	{
		___U24U24fieldU2D52_42 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D53_43() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3793596152_StaticFields, ___U24U24fieldU2D53_43)); }
	inline U24ArrayTypeU241024_t708480540  get_U24U24fieldU2D53_43() const { return ___U24U24fieldU2D53_43; }
	inline U24ArrayTypeU241024_t708480540 * get_address_of_U24U24fieldU2D53_43() { return &___U24U24fieldU2D53_43; }
	inline void set_U24U24fieldU2D53_43(U24ArrayTypeU241024_t708480540  value)
	{
		___U24U24fieldU2D53_43 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D54_44() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3793596152_StaticFields, ___U24U24fieldU2D54_44)); }
	inline U24ArrayTypeU241024_t708480540  get_U24U24fieldU2D54_44() const { return ___U24U24fieldU2D54_44; }
	inline U24ArrayTypeU241024_t708480540 * get_address_of_U24U24fieldU2D54_44() { return &___U24U24fieldU2D54_44; }
	inline void set_U24U24fieldU2D54_44(U24ArrayTypeU241024_t708480540  value)
	{
		___U24U24fieldU2D54_44 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D55_45() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3793596152_StaticFields, ___U24U24fieldU2D55_45)); }
	inline U24ArrayTypeU241024_t708480540  get_U24U24fieldU2D55_45() const { return ___U24U24fieldU2D55_45; }
	inline U24ArrayTypeU241024_t708480540 * get_address_of_U24U24fieldU2D55_45() { return &___U24U24fieldU2D55_45; }
	inline void set_U24U24fieldU2D55_45(U24ArrayTypeU241024_t708480540  value)
	{
		___U24U24fieldU2D55_45 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D56_46() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3793596152_StaticFields, ___U24U24fieldU2D56_46)); }
	inline U24ArrayTypeU24256_t2595027676  get_U24U24fieldU2D56_46() const { return ___U24U24fieldU2D56_46; }
	inline U24ArrayTypeU24256_t2595027676 * get_address_of_U24U24fieldU2D56_46() { return &___U24U24fieldU2D56_46; }
	inline void set_U24U24fieldU2D56_46(U24ArrayTypeU24256_t2595027676  value)
	{
		___U24U24fieldU2D56_46 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D57_47() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3793596152_StaticFields, ___U24U24fieldU2D57_47)); }
	inline U24ArrayTypeU24640_t2115262595  get_U24U24fieldU2D57_47() const { return ___U24U24fieldU2D57_47; }
	inline U24ArrayTypeU24640_t2115262595 * get_address_of_U24U24fieldU2D57_47() { return &___U24U24fieldU2D57_47; }
	inline void set_U24U24fieldU2D57_47(U24ArrayTypeU24640_t2115262595  value)
	{
		___U24U24fieldU2D57_47 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D60_48() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3793596152_StaticFields, ___U24U24fieldU2D60_48)); }
	inline U24ArrayTypeU2412_t1618401966  get_U24U24fieldU2D60_48() const { return ___U24U24fieldU2D60_48; }
	inline U24ArrayTypeU2412_t1618401966 * get_address_of_U24U24fieldU2D60_48() { return &___U24U24fieldU2D60_48; }
	inline void set_U24U24fieldU2D60_48(U24ArrayTypeU2412_t1618401966  value)
	{
		___U24U24fieldU2D60_48 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D62_49() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3793596152_StaticFields, ___U24U24fieldU2D62_49)); }
	inline U24ArrayTypeU24128_t2408794763  get_U24U24fieldU2D62_49() const { return ___U24U24fieldU2D62_49; }
	inline U24ArrayTypeU24128_t2408794763 * get_address_of_U24U24fieldU2D62_49() { return &___U24U24fieldU2D62_49; }
	inline void set_U24U24fieldU2D62_49(U24ArrayTypeU24128_t2408794763  value)
	{
		___U24U24fieldU2D62_49 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D63_50() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3793596152_StaticFields, ___U24U24fieldU2D63_50)); }
	inline U24ArrayTypeU24256_t2595027676  get_U24U24fieldU2D63_50() const { return ___U24U24fieldU2D63_50; }
	inline U24ArrayTypeU24256_t2595027676 * get_address_of_U24U24fieldU2D63_50() { return &___U24U24fieldU2D63_50; }
	inline void set_U24U24fieldU2D63_50(U24ArrayTypeU24256_t2595027676  value)
	{
		___U24U24fieldU2D63_50 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D64_51() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3793596152_StaticFields, ___U24U24fieldU2D64_51)); }
	inline U24ArrayTypeU2452_t2585479835  get_U24U24fieldU2D64_51() const { return ___U24U24fieldU2D64_51; }
	inline U24ArrayTypeU2452_t2585479835 * get_address_of_U24U24fieldU2D64_51() { return &___U24U24fieldU2D64_51; }
	inline void set_U24U24fieldU2D64_51(U24ArrayTypeU2452_t2585479835  value)
	{
		___U24U24fieldU2D64_51 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D65_52() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3793596152_StaticFields, ___U24U24fieldU2D65_52)); }
	inline U24ArrayTypeU2452_t2585479835  get_U24U24fieldU2D65_52() const { return ___U24U24fieldU2D65_52; }
	inline U24ArrayTypeU2452_t2585479835 * get_address_of_U24U24fieldU2D65_52() { return &___U24U24fieldU2D65_52; }
	inline void set_U24U24fieldU2D65_52(U24ArrayTypeU2452_t2585479835  value)
	{
		___U24U24fieldU2D65_52 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3793596152_H
#ifndef OPERATINGSYSTEM_T2399018157_H
#define OPERATINGSYSTEM_T2399018157_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.OperatingSystem
struct  OperatingSystem_t2399018157  : public RuntimeObject
{
public:
	// System.PlatformID System.OperatingSystem::_platform
	int32_t ____platform_0;
	// System.Version System.OperatingSystem::_version
	Version_t1133533382 * ____version_1;
	// System.String System.OperatingSystem::_servicePack
	String_t* ____servicePack_2;

public:
	inline static int32_t get_offset_of__platform_0() { return static_cast<int32_t>(offsetof(OperatingSystem_t2399018157, ____platform_0)); }
	inline int32_t get__platform_0() const { return ____platform_0; }
	inline int32_t* get_address_of__platform_0() { return &____platform_0; }
	inline void set__platform_0(int32_t value)
	{
		____platform_0 = value;
	}

	inline static int32_t get_offset_of__version_1() { return static_cast<int32_t>(offsetof(OperatingSystem_t2399018157, ____version_1)); }
	inline Version_t1133533382 * get__version_1() const { return ____version_1; }
	inline Version_t1133533382 ** get_address_of__version_1() { return &____version_1; }
	inline void set__version_1(Version_t1133533382 * value)
	{
		____version_1 = value;
		Il2CppCodeGenWriteBarrier((&____version_1), value);
	}

	inline static int32_t get_offset_of__servicePack_2() { return static_cast<int32_t>(offsetof(OperatingSystem_t2399018157, ____servicePack_2)); }
	inline String_t* get__servicePack_2() const { return ____servicePack_2; }
	inline String_t** get_address_of__servicePack_2() { return &____servicePack_2; }
	inline void set__servicePack_2(String_t* value)
	{
		____servicePack_2 = value;
		Il2CppCodeGenWriteBarrier((&____servicePack_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OPERATINGSYSTEM_T2399018157_H
#ifndef SYMMETRICALGORITHM_T2359443873_H
#define SYMMETRICALGORITHM_T2359443873_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SymmetricAlgorithm
struct  SymmetricAlgorithm_t2359443873  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::BlockSizeValue
	int32_t ___BlockSizeValue_0;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::IVValue
	ByteU5BU5D_t250263739* ___IVValue_1;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::KeySizeValue
	int32_t ___KeySizeValue_2;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::KeyValue
	ByteU5BU5D_t250263739* ___KeyValue_3;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalBlockSizesValue
	KeySizesU5BU5D_t665079470* ___LegalBlockSizesValue_4;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalKeySizesValue
	KeySizesU5BU5D_t665079470* ___LegalKeySizesValue_5;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::FeedbackSizeValue
	int32_t ___FeedbackSizeValue_6;
	// System.Security.Cryptography.CipherMode System.Security.Cryptography.SymmetricAlgorithm::ModeValue
	int32_t ___ModeValue_7;
	// System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::PaddingValue
	int32_t ___PaddingValue_8;
	// System.Boolean System.Security.Cryptography.SymmetricAlgorithm::m_disposed
	bool ___m_disposed_9;

public:
	inline static int32_t get_offset_of_BlockSizeValue_0() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t2359443873, ___BlockSizeValue_0)); }
	inline int32_t get_BlockSizeValue_0() const { return ___BlockSizeValue_0; }
	inline int32_t* get_address_of_BlockSizeValue_0() { return &___BlockSizeValue_0; }
	inline void set_BlockSizeValue_0(int32_t value)
	{
		___BlockSizeValue_0 = value;
	}

	inline static int32_t get_offset_of_IVValue_1() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t2359443873, ___IVValue_1)); }
	inline ByteU5BU5D_t250263739* get_IVValue_1() const { return ___IVValue_1; }
	inline ByteU5BU5D_t250263739** get_address_of_IVValue_1() { return &___IVValue_1; }
	inline void set_IVValue_1(ByteU5BU5D_t250263739* value)
	{
		___IVValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___IVValue_1), value);
	}

	inline static int32_t get_offset_of_KeySizeValue_2() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t2359443873, ___KeySizeValue_2)); }
	inline int32_t get_KeySizeValue_2() const { return ___KeySizeValue_2; }
	inline int32_t* get_address_of_KeySizeValue_2() { return &___KeySizeValue_2; }
	inline void set_KeySizeValue_2(int32_t value)
	{
		___KeySizeValue_2 = value;
	}

	inline static int32_t get_offset_of_KeyValue_3() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t2359443873, ___KeyValue_3)); }
	inline ByteU5BU5D_t250263739* get_KeyValue_3() const { return ___KeyValue_3; }
	inline ByteU5BU5D_t250263739** get_address_of_KeyValue_3() { return &___KeyValue_3; }
	inline void set_KeyValue_3(ByteU5BU5D_t250263739* value)
	{
		___KeyValue_3 = value;
		Il2CppCodeGenWriteBarrier((&___KeyValue_3), value);
	}

	inline static int32_t get_offset_of_LegalBlockSizesValue_4() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t2359443873, ___LegalBlockSizesValue_4)); }
	inline KeySizesU5BU5D_t665079470* get_LegalBlockSizesValue_4() const { return ___LegalBlockSizesValue_4; }
	inline KeySizesU5BU5D_t665079470** get_address_of_LegalBlockSizesValue_4() { return &___LegalBlockSizesValue_4; }
	inline void set_LegalBlockSizesValue_4(KeySizesU5BU5D_t665079470* value)
	{
		___LegalBlockSizesValue_4 = value;
		Il2CppCodeGenWriteBarrier((&___LegalBlockSizesValue_4), value);
	}

	inline static int32_t get_offset_of_LegalKeySizesValue_5() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t2359443873, ___LegalKeySizesValue_5)); }
	inline KeySizesU5BU5D_t665079470* get_LegalKeySizesValue_5() const { return ___LegalKeySizesValue_5; }
	inline KeySizesU5BU5D_t665079470** get_address_of_LegalKeySizesValue_5() { return &___LegalKeySizesValue_5; }
	inline void set_LegalKeySizesValue_5(KeySizesU5BU5D_t665079470* value)
	{
		___LegalKeySizesValue_5 = value;
		Il2CppCodeGenWriteBarrier((&___LegalKeySizesValue_5), value);
	}

	inline static int32_t get_offset_of_FeedbackSizeValue_6() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t2359443873, ___FeedbackSizeValue_6)); }
	inline int32_t get_FeedbackSizeValue_6() const { return ___FeedbackSizeValue_6; }
	inline int32_t* get_address_of_FeedbackSizeValue_6() { return &___FeedbackSizeValue_6; }
	inline void set_FeedbackSizeValue_6(int32_t value)
	{
		___FeedbackSizeValue_6 = value;
	}

	inline static int32_t get_offset_of_ModeValue_7() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t2359443873, ___ModeValue_7)); }
	inline int32_t get_ModeValue_7() const { return ___ModeValue_7; }
	inline int32_t* get_address_of_ModeValue_7() { return &___ModeValue_7; }
	inline void set_ModeValue_7(int32_t value)
	{
		___ModeValue_7 = value;
	}

	inline static int32_t get_offset_of_PaddingValue_8() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t2359443873, ___PaddingValue_8)); }
	inline int32_t get_PaddingValue_8() const { return ___PaddingValue_8; }
	inline int32_t* get_address_of_PaddingValue_8() { return &___PaddingValue_8; }
	inline void set_PaddingValue_8(int32_t value)
	{
		___PaddingValue_8 = value;
	}

	inline static int32_t get_offset_of_m_disposed_9() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t2359443873, ___m_disposed_9)); }
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
#endif // SYMMETRICALGORITHM_T2359443873_H
#ifndef OVERFLOWEXCEPTION_T955744989_H
#define OVERFLOWEXCEPTION_T955744989_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.OverflowException
struct  OverflowException_t955744989  : public ArithmeticException_t2551618271
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OVERFLOWEXCEPTION_T955744989_H
#ifndef UNITYSERIALIZATIONHOLDER_T1499123569_H
#define UNITYSERIALIZATIONHOLDER_T1499123569_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnitySerializationHolder
struct  UnitySerializationHolder_t1499123569  : public RuntimeObject
{
public:
	// System.String System.UnitySerializationHolder::_data
	String_t* ____data_0;
	// System.UnitySerializationHolder/UnityType System.UnitySerializationHolder::_unityType
	uint8_t ____unityType_1;
	// System.String System.UnitySerializationHolder::_assemblyName
	String_t* ____assemblyName_2;

public:
	inline static int32_t get_offset_of__data_0() { return static_cast<int32_t>(offsetof(UnitySerializationHolder_t1499123569, ____data_0)); }
	inline String_t* get__data_0() const { return ____data_0; }
	inline String_t** get_address_of__data_0() { return &____data_0; }
	inline void set__data_0(String_t* value)
	{
		____data_0 = value;
		Il2CppCodeGenWriteBarrier((&____data_0), value);
	}

	inline static int32_t get_offset_of__unityType_1() { return static_cast<int32_t>(offsetof(UnitySerializationHolder_t1499123569, ____unityType_1)); }
	inline uint8_t get__unityType_1() const { return ____unityType_1; }
	inline uint8_t* get_address_of__unityType_1() { return &____unityType_1; }
	inline void set__unityType_1(uint8_t value)
	{
		____unityType_1 = value;
	}

	inline static int32_t get_offset_of__assemblyName_2() { return static_cast<int32_t>(offsetof(UnitySerializationHolder_t1499123569, ____assemblyName_2)); }
	inline String_t* get__assemblyName_2() const { return ____assemblyName_2; }
	inline String_t** get_address_of__assemblyName_2() { return &____assemblyName_2; }
	inline void set__assemblyName_2(String_t* value)
	{
		____assemblyName_2 = value;
		Il2CppCodeGenWriteBarrier((&____assemblyName_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYSERIALIZATIONHOLDER_T1499123569_H
#ifndef PLATFORMNOTSUPPORTEDEXCEPTION_T3167241842_H
#define PLATFORMNOTSUPPORTEDEXCEPTION_T3167241842_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.PlatformNotSupportedException
struct  PlatformNotSupportedException_t3167241842  : public NotSupportedException_t1008073539
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLATFORMNOTSUPPORTEDEXCEPTION_T3167241842_H
#ifndef MULTICASTDELEGATE_T547090853_H
#define MULTICASTDELEGATE_T547090853_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t547090853  : public Delegate_t2507252419
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t547090853 * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t547090853 * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t547090853, ___prev_9)); }
	inline MulticastDelegate_t547090853 * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t547090853 ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t547090853 * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t547090853, ___kpm_next_10)); }
	inline MulticastDelegate_t547090853 * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t547090853 ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t547090853 * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T547090853_H
#ifndef RC4_T480599576_H
#define RC4_T480599576_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.RC4
struct  RC4_t480599576  : public SymmetricAlgorithm_t2359443873
{
public:

public:
};

struct RC4_t480599576_StaticFields
{
public:
	// System.Security.Cryptography.KeySizes[] Mono.Security.Cryptography.RC4::s_legalBlockSizes
	KeySizesU5BU5D_t665079470* ___s_legalBlockSizes_10;
	// System.Security.Cryptography.KeySizes[] Mono.Security.Cryptography.RC4::s_legalKeySizes
	KeySizesU5BU5D_t665079470* ___s_legalKeySizes_11;

public:
	inline static int32_t get_offset_of_s_legalBlockSizes_10() { return static_cast<int32_t>(offsetof(RC4_t480599576_StaticFields, ___s_legalBlockSizes_10)); }
	inline KeySizesU5BU5D_t665079470* get_s_legalBlockSizes_10() const { return ___s_legalBlockSizes_10; }
	inline KeySizesU5BU5D_t665079470** get_address_of_s_legalBlockSizes_10() { return &___s_legalBlockSizes_10; }
	inline void set_s_legalBlockSizes_10(KeySizesU5BU5D_t665079470* value)
	{
		___s_legalBlockSizes_10 = value;
		Il2CppCodeGenWriteBarrier((&___s_legalBlockSizes_10), value);
	}

	inline static int32_t get_offset_of_s_legalKeySizes_11() { return static_cast<int32_t>(offsetof(RC4_t480599576_StaticFields, ___s_legalKeySizes_11)); }
	inline KeySizesU5BU5D_t665079470* get_s_legalKeySizes_11() const { return ___s_legalKeySizes_11; }
	inline KeySizesU5BU5D_t665079470** get_address_of_s_legalKeySizes_11() { return &___s_legalKeySizes_11; }
	inline void set_s_legalKeySizes_11(KeySizesU5BU5D_t665079470* value)
	{
		___s_legalKeySizes_11 = value;
		Il2CppCodeGenWriteBarrier((&___s_legalKeySizes_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RC4_T480599576_H
#ifndef UNHANDLEDEXCEPTIONEVENTHANDLER_T3891140403_H
#define UNHANDLEDEXCEPTIONEVENTHANDLER_T3891140403_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnhandledExceptionEventHandler
struct  UnhandledExceptionEventHandler_t3891140403  : public MulticastDelegate_t547090853
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNHANDLEDEXCEPTIONEVENTHANDLER_T3891140403_H
#ifndef RESOLVEEVENTHANDLER_T3829556744_H
#define RESOLVEEVENTHANDLER_T3829556744_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ResolveEventHandler
struct  ResolveEventHandler_t3829556744  : public MulticastDelegate_t547090853
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOLVEEVENTHANDLER_T3829556744_H
#ifndef EVENTHANDLER_T1367251737_H
#define EVENTHANDLER_T1367251737_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventHandler
struct  EventHandler_t1367251737  : public MulticastDelegate_t547090853
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTHANDLER_T1367251737_H
#ifndef ASSEMBLYLOADEVENTHANDLER_T162783384_H
#define ASSEMBLYLOADEVENTHANDLER_T162783384_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AssemblyLoadEventHandler
struct  AssemblyLoadEventHandler_t162783384  : public MulticastDelegate_t547090853
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYLOADEVENTHANDLER_T162783384_H
#ifndef APPDOMAININITIALIZER_T2470545872_H
#define APPDOMAININITIALIZER_T2470545872_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AppDomainInitializer
struct  AppDomainInitializer_t2470545872  : public MulticastDelegate_t547090853
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPDOMAININITIALIZER_T2470545872_H
#ifndef WAITORTIMERCALLBACK_T5256888_H
#define WAITORTIMERCALLBACK_T5256888_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.WaitOrTimerCallback
struct  WaitOrTimerCallback_t5256888  : public MulticastDelegate_t547090853
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAITORTIMERCALLBACK_T5256888_H
#ifndef WAITCALLBACK_T1807434753_H
#define WAITCALLBACK_T1807434753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.WaitCallback
struct  WaitCallback_t1807434753  : public MulticastDelegate_t547090853
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAITCALLBACK_T1807434753_H
#ifndef TIMERCALLBACK_T3111261853_H
#define TIMERCALLBACK_T3111261853_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.TimerCallback
struct  TimerCallback_t3111261853  : public MulticastDelegate_t547090853
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMERCALLBACK_T3111261853_H
#ifndef THREADSTART_T1891668219_H
#define THREADSTART_T1891668219_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.ThreadStart
struct  ThreadStart_t1891668219  : public MulticastDelegate_t547090853
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREADSTART_T1891668219_H
#ifndef SENDORPOSTCALLBACK_T4202807534_H
#define SENDORPOSTCALLBACK_T4202807534_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.SendOrPostCallback
struct  SendOrPostCallback_t4202807534  : public MulticastDelegate_t547090853
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SENDORPOSTCALLBACK_T4202807534_H
#ifndef PARAMETERIZEDTHREADSTART_T1679779427_H
#define PARAMETERIZEDTHREADSTART_T1679779427_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.ParameterizedThreadStart
struct  ParameterizedThreadStart_t1679779427  : public MulticastDelegate_t547090853
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARAMETERIZEDTHREADSTART_T1679779427_H
#ifndef HEADERHANDLER_T3105003593_H
#define HEADERHANDLER_T3105003593_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.HeaderHandler
struct  HeaderHandler_t3105003593  : public MulticastDelegate_t547090853
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HEADERHANDLER_T3105003593_H
#ifndef PRIMALITYTEST_T2196405954_H
#define PRIMALITYTEST_T2196405954_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.Prime.PrimalityTest
struct  PrimalityTest_t2196405954  : public MulticastDelegate_t547090853
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRIMALITYTEST_T2196405954_H
#ifndef MEMBERFILTER_T545008097_H
#define MEMBERFILTER_T545008097_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberFilter
struct  MemberFilter_t545008097  : public MulticastDelegate_t547090853
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERFILTER_T545008097_H
#ifndef CROSSCONTEXTDELEGATE_T214294203_H
#define CROSSCONTEXTDELEGATE_T214294203_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Contexts.CrossContextDelegate
struct  CrossContextDelegate_t214294203  : public MulticastDelegate_t547090853
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CROSSCONTEXTDELEGATE_T214294203_H
#ifndef TYPEFILTER_T3600251020_H
#define TYPEFILTER_T3600251020_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.TypeFilter
struct  TypeFilter_t3600251020  : public MulticastDelegate_t547090853
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEFILTER_T3600251020_H
#ifndef ARC4MANAGED_T2250592228_H
#define ARC4MANAGED_T2250592228_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.ARC4Managed
struct  ARC4Managed_t2250592228  : public RC4_t480599576
{
public:
	// System.Byte[] Mono.Security.Cryptography.ARC4Managed::key
	ByteU5BU5D_t250263739* ___key_12;
	// System.Byte[] Mono.Security.Cryptography.ARC4Managed::state
	ByteU5BU5D_t250263739* ___state_13;
	// System.Byte Mono.Security.Cryptography.ARC4Managed::x
	uint8_t ___x_14;
	// System.Byte Mono.Security.Cryptography.ARC4Managed::y
	uint8_t ___y_15;
	// System.Boolean Mono.Security.Cryptography.ARC4Managed::m_disposed
	bool ___m_disposed_16;

public:
	inline static int32_t get_offset_of_key_12() { return static_cast<int32_t>(offsetof(ARC4Managed_t2250592228, ___key_12)); }
	inline ByteU5BU5D_t250263739* get_key_12() const { return ___key_12; }
	inline ByteU5BU5D_t250263739** get_address_of_key_12() { return &___key_12; }
	inline void set_key_12(ByteU5BU5D_t250263739* value)
	{
		___key_12 = value;
		Il2CppCodeGenWriteBarrier((&___key_12), value);
	}

	inline static int32_t get_offset_of_state_13() { return static_cast<int32_t>(offsetof(ARC4Managed_t2250592228, ___state_13)); }
	inline ByteU5BU5D_t250263739* get_state_13() const { return ___state_13; }
	inline ByteU5BU5D_t250263739** get_address_of_state_13() { return &___state_13; }
	inline void set_state_13(ByteU5BU5D_t250263739* value)
	{
		___state_13 = value;
		Il2CppCodeGenWriteBarrier((&___state_13), value);
	}

	inline static int32_t get_offset_of_x_14() { return static_cast<int32_t>(offsetof(ARC4Managed_t2250592228, ___x_14)); }
	inline uint8_t get_x_14() const { return ___x_14; }
	inline uint8_t* get_address_of_x_14() { return &___x_14; }
	inline void set_x_14(uint8_t value)
	{
		___x_14 = value;
	}

	inline static int32_t get_offset_of_y_15() { return static_cast<int32_t>(offsetof(ARC4Managed_t2250592228, ___y_15)); }
	inline uint8_t get_y_15() const { return ___y_15; }
	inline uint8_t* get_address_of_y_15() { return &___y_15; }
	inline void set_y_15(uint8_t value)
	{
		___y_15 = value;
	}

	inline static int32_t get_offset_of_m_disposed_16() { return static_cast<int32_t>(offsetof(ARC4Managed_t2250592228, ___m_disposed_16)); }
	inline bool get_m_disposed_16() const { return ___m_disposed_16; }
	inline bool* get_address_of_m_disposed_16() { return &___m_disposed_16; }
	inline void set_m_disposed_16(bool value)
	{
		___m_disposed_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARC4MANAGED_T2250592228_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize900 = { sizeof (OperatingSystem_t2399018157), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable900[3] = 
{
	OperatingSystem_t2399018157::get_offset_of__platform_0(),
	OperatingSystem_t2399018157::get_offset_of__version_1(),
	OperatingSystem_t2399018157::get_offset_of__servicePack_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize901 = { sizeof (OutOfMemoryException_t3345139716), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable901[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize902 = { sizeof (OverflowException_t955744989), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable902[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize903 = { sizeof (PlatformID_t2546983699)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable903[8] = 
{
	PlatformID_t2546983699::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize904 = { sizeof (PlatformNotSupportedException_t3167241842), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable904[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize905 = { sizeof (Random_t950043034), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable905[3] = 
{
	Random_t950043034::get_offset_of_inext_0(),
	Random_t950043034::get_offset_of_inextp_1(),
	Random_t950043034::get_offset_of_SeedArray_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize906 = { sizeof (RankException_t2905860407), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize907 = { sizeof (ResolveEventArgs_t4290046187), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable907[1] = 
{
	ResolveEventArgs_t4290046187::get_offset_of_m_Name_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize908 = { sizeof (RuntimeMethodHandle_t3097718312)+ sizeof (RuntimeObject), sizeof(RuntimeMethodHandle_t3097718312 ), 0, 0 };
extern const int32_t g_FieldOffsetTable908[1] = 
{
	RuntimeMethodHandle_t3097718312::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize909 = { sizeof (StackOverflowException_t1805531707), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize910 = { sizeof (StringComparer_t3025763281), -1, sizeof(StringComparer_t3025763281_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable910[4] = 
{
	StringComparer_t3025763281_StaticFields::get_offset_of_invariantCultureIgnoreCase_0(),
	StringComparer_t3025763281_StaticFields::get_offset_of_invariantCulture_1(),
	StringComparer_t3025763281_StaticFields::get_offset_of_ordinalIgnoreCase_2(),
	StringComparer_t3025763281_StaticFields::get_offset_of_ordinal_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize911 = { sizeof (CultureAwareComparer_t562010472), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable911[2] = 
{
	CultureAwareComparer_t562010472::get_offset_of__ignoreCase_4(),
	CultureAwareComparer_t562010472::get_offset_of__compareInfo_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize912 = { sizeof (OrdinalComparer_t3374545791), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable912[1] = 
{
	OrdinalComparer_t3374545791::get_offset_of__ignoreCase_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize913 = { sizeof (StringComparison_t1830395845)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable913[7] = 
{
	StringComparison_t1830395845::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize914 = { sizeof (StringSplitOptions_t2509599035)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable914[3] = 
{
	StringSplitOptions_t2509599035::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize915 = { sizeof (SystemException_t2247450559), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize916 = { sizeof (ThreadStaticAttribute_t3444318701), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize917 = { sizeof (TimeSpan_t1627018810)+ sizeof (RuntimeObject), sizeof(TimeSpan_t1627018810 ), sizeof(TimeSpan_t1627018810_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable917[4] = 
{
	TimeSpan_t1627018810_StaticFields::get_offset_of_MaxValue_0(),
	TimeSpan_t1627018810_StaticFields::get_offset_of_MinValue_1(),
	TimeSpan_t1627018810_StaticFields::get_offset_of_Zero_2(),
	TimeSpan_t1627018810::get_offset_of__ticks_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize918 = { sizeof (Parser_t735189028), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable918[4] = 
{
	Parser_t735189028::get_offset_of__src_0(),
	Parser_t735189028::get_offset_of__cur_1(),
	Parser_t735189028::get_offset_of__length_2(),
	Parser_t735189028::get_offset_of_formatError_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize919 = { sizeof (TimeZone_t1162309287), -1, sizeof(TimeZone_t1162309287_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable919[3] = 
{
	TimeZone_t1162309287_StaticFields::get_offset_of_currentTimeZone_0(),
	TimeZone_t1162309287_StaticFields::get_offset_of_tz_lock_1(),
	TimeZone_t1162309287_StaticFields::get_offset_of_timezone_check_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize920 = { sizeof (CurrentSystemTimeZone_t1349074817), -1, sizeof(CurrentSystemTimeZone_t1349074817_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable920[8] = 
{
	CurrentSystemTimeZone_t1349074817::get_offset_of_m_standardName_3(),
	CurrentSystemTimeZone_t1349074817::get_offset_of_m_daylightName_4(),
	CurrentSystemTimeZone_t1349074817::get_offset_of_m_CachedDaylightChanges_5(),
	CurrentSystemTimeZone_t1349074817::get_offset_of_m_ticksOffset_6(),
	CurrentSystemTimeZone_t1349074817::get_offset_of_utcOffsetWithOutDLS_7(),
	CurrentSystemTimeZone_t1349074817::get_offset_of_utcOffsetWithDLS_8(),
	CurrentSystemTimeZone_t1349074817_StaticFields::get_offset_of_this_year_9(),
	CurrentSystemTimeZone_t1349074817_StaticFields::get_offset_of_this_year_dlt_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize921 = { sizeof (TypeCode_t1480274827)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable921[19] = 
{
	TypeCode_t1480274827::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize922 = { sizeof (TypeInitializationException_t1804095535), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable922[1] = 
{
	TypeInitializationException_t1804095535::get_offset_of_type_name_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize923 = { sizeof (TypeLoadException_t1423230533), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable923[3] = 
{
	0,
	TypeLoadException_t1423230533::get_offset_of_className_12(),
	TypeLoadException_t1423230533::get_offset_of_assemblyName_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize924 = { sizeof (UnauthorizedAccessException_t2193424038), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize925 = { sizeof (UnhandledExceptionEventArgs_t525368780), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable925[2] = 
{
	UnhandledExceptionEventArgs_t525368780::get_offset_of_exception_1(),
	UnhandledExceptionEventArgs_t525368780::get_offset_of_m_isTerminating_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize926 = { sizeof (UnitySerializationHolder_t1499123569), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable926[3] = 
{
	UnitySerializationHolder_t1499123569::get_offset_of__data_0(),
	UnitySerializationHolder_t1499123569::get_offset_of__unityType_1(),
	UnitySerializationHolder_t1499123569::get_offset_of__assemblyName_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize927 = { sizeof (UnityType_t1110263324)+ sizeof (RuntimeObject), sizeof(uint8_t), 0, 0 };
extern const int32_t g_FieldOffsetTable927[5] = 
{
	UnityType_t1110263324::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize928 = { sizeof (Version_t1133533382), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable928[5] = 
{
	0,
	Version_t1133533382::get_offset_of__Major_1(),
	Version_t1133533382::get_offset_of__Minor_2(),
	Version_t1133533382::get_offset_of__Build_3(),
	Version_t1133533382::get_offset_of__Revision_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize929 = { sizeof (WeakReference_t4193322247), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable929[2] = 
{
	WeakReference_t4193322247::get_offset_of_isLongReference_0(),
	WeakReference_t4193322247::get_offset_of_gcHandle_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize930 = { sizeof (PrimalityTest_t2196405954), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize931 = { sizeof (MemberFilter_t545008097), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize932 = { sizeof (TypeFilter_t3600251020), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize933 = { sizeof (CrossContextDelegate_t214294203), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize934 = { sizeof (HeaderHandler_t3105003593), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize935 = { sizeof (ParameterizedThreadStart_t1679779427), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize936 = { sizeof (SendOrPostCallback_t4202807534), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize937 = { sizeof (ThreadStart_t1891668219), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize938 = { sizeof (TimerCallback_t3111261853), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize939 = { sizeof (WaitCallback_t1807434753), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize940 = { sizeof (WaitOrTimerCallback_t5256888), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize941 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize942 = { sizeof (AppDomainInitializer_t2470545872), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize943 = { sizeof (AssemblyLoadEventHandler_t162783384), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize944 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize945 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize946 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize947 = { sizeof (EventHandler_t1367251737), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize948 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize949 = { sizeof (ResolveEventHandler_t3829556744), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize950 = { sizeof (UnhandledExceptionEventHandler_t3891140403), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize951 = { sizeof (U3CPrivateImplementationDetailsU3E_t3793596152), -1, sizeof(U3CPrivateImplementationDetailsU3E_t3793596152_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable951[53] = 
{
	U3CPrivateImplementationDetailsU3E_t3793596152_StaticFields::get_offset_of_U24U24fieldU2D0_0(),
	U3CPrivateImplementationDetailsU3E_t3793596152_StaticFields::get_offset_of_U24U24fieldU2D1_1(),
	U3CPrivateImplementationDetailsU3E_t3793596152_StaticFields::get_offset_of_U24U24fieldU2D2_2(),
	U3CPrivateImplementationDetailsU3E_t3793596152_StaticFields::get_offset_of_U24U24fieldU2D3_3(),
	U3CPrivateImplementationDetailsU3E_t3793596152_StaticFields::get_offset_of_U24U24fieldU2D4_4(),
	U3CPrivateImplementationDetailsU3E_t3793596152_StaticFields::get_offset_of_U24U24fieldU2D5_5(),
	U3CPrivateImplementationDetailsU3E_t3793596152_StaticFields::get_offset_of_U24U24fieldU2D6_6(),
	U3CPrivateImplementationDetailsU3E_t3793596152_StaticFields::get_offset_of_U24U24fieldU2D15_7(),
	U3CPrivateImplementationDetailsU3E_t3793596152_StaticFields::get_offset_of_U24U24fieldU2D16_8(),
	U3CPrivateImplementationDetailsU3E_t3793596152_StaticFields::get_offset_of_U24U24fieldU2D17_9(),
	U3CPrivateImplementationDetailsU3E_t3793596152_StaticFields::get_offset_of_U24U24fieldU2D18_10(),
	U3CPrivateImplementationDetailsU3E_t3793596152_StaticFields::get_offset_of_U24U24fieldU2D19_11(),
	U3CPrivateImplementationDetailsU3E_t3793596152_StaticFields::get_offset_of_U24U24fieldU2D20_12(),
	U3CPrivateImplementationDetailsU3E_t3793596152_StaticFields::get_offset_of_U24U24fieldU2D21_13(),
	U3CPrivateImplementationDetailsU3E_t3793596152_StaticFields::get_offset_of_U24U24fieldU2D22_14(),
	U3CPrivateImplementationDetailsU3E_t3793596152_StaticFields::get_offset_of_U24U24fieldU2D23_15(),
	U3CPrivateImplementationDetailsU3E_t3793596152_StaticFields::get_offset_of_U24U24fieldU2D24_16(),
	U3CPrivateImplementationDetailsU3E_t3793596152_StaticFields::get_offset_of_U24U24fieldU2D25_17(),
	U3CPrivateImplementationDetailsU3E_t3793596152_StaticFields::get_offset_of_U24U24fieldU2D26_18(),
	U3CPrivateImplementationDetailsU3E_t3793596152_StaticFields::get_offset_of_U24U24fieldU2D27_19(),
	U3CPrivateImplementationDetailsU3E_t3793596152_StaticFields::get_offset_of_U24U24fieldU2D30_20(),
	U3CPrivateImplementationDetailsU3E_t3793596152_StaticFields::get_offset_of_U24U24fieldU2D31_21(),
	U3CPrivateImplementationDetailsU3E_t3793596152_StaticFields::get_offset_of_U24U24fieldU2D32_22(),
	U3CPrivateImplementationDetailsU3E_t3793596152_StaticFields::get_offset_of_U24U24fieldU2D33_23(),
	U3CPrivateImplementationDetailsU3E_t3793596152_StaticFields::get_offset_of_U24U24fieldU2D34_24(),
	U3CPrivateImplementationDetailsU3E_t3793596152_StaticFields::get_offset_of_U24U24fieldU2D35_25(),
	U3CPrivateImplementationDetailsU3E_t3793596152_StaticFields::get_offset_of_U24U24fieldU2D36_26(),
	U3CPrivateImplementationDetailsU3E_t3793596152_StaticFields::get_offset_of_U24U24fieldU2D37_27(),
	U3CPrivateImplementationDetailsU3E_t3793596152_StaticFields::get_offset_of_U24U24fieldU2D38_28(),
	U3CPrivateImplementationDetailsU3E_t3793596152_StaticFields::get_offset_of_U24U24fieldU2D39_29(),
	U3CPrivateImplementationDetailsU3E_t3793596152_StaticFields::get_offset_of_U24U24fieldU2D40_30(),
	U3CPrivateImplementationDetailsU3E_t3793596152_StaticFields::get_offset_of_U24U24fieldU2D41_31(),
	U3CPrivateImplementationDetailsU3E_t3793596152_StaticFields::get_offset_of_U24U24fieldU2D42_32(),
	U3CPrivateImplementationDetailsU3E_t3793596152_StaticFields::get_offset_of_U24U24fieldU2D43_33(),
	U3CPrivateImplementationDetailsU3E_t3793596152_StaticFields::get_offset_of_U24U24fieldU2D44_34(),
	U3CPrivateImplementationDetailsU3E_t3793596152_StaticFields::get_offset_of_U24U24fieldU2D45_35(),
	U3CPrivateImplementationDetailsU3E_t3793596152_StaticFields::get_offset_of_U24U24fieldU2D46_36(),
	U3CPrivateImplementationDetailsU3E_t3793596152_StaticFields::get_offset_of_U24U24fieldU2D47_37(),
	U3CPrivateImplementationDetailsU3E_t3793596152_StaticFields::get_offset_of_U24U24fieldU2D48_38(),
	U3CPrivateImplementationDetailsU3E_t3793596152_StaticFields::get_offset_of_U24U24fieldU2D49_39(),
	U3CPrivateImplementationDetailsU3E_t3793596152_StaticFields::get_offset_of_U24U24fieldU2D50_40(),
	U3CPrivateImplementationDetailsU3E_t3793596152_StaticFields::get_offset_of_U24U24fieldU2D51_41(),
	U3CPrivateImplementationDetailsU3E_t3793596152_StaticFields::get_offset_of_U24U24fieldU2D52_42(),
	U3CPrivateImplementationDetailsU3E_t3793596152_StaticFields::get_offset_of_U24U24fieldU2D53_43(),
	U3CPrivateImplementationDetailsU3E_t3793596152_StaticFields::get_offset_of_U24U24fieldU2D54_44(),
	U3CPrivateImplementationDetailsU3E_t3793596152_StaticFields::get_offset_of_U24U24fieldU2D55_45(),
	U3CPrivateImplementationDetailsU3E_t3793596152_StaticFields::get_offset_of_U24U24fieldU2D56_46(),
	U3CPrivateImplementationDetailsU3E_t3793596152_StaticFields::get_offset_of_U24U24fieldU2D57_47(),
	U3CPrivateImplementationDetailsU3E_t3793596152_StaticFields::get_offset_of_U24U24fieldU2D60_48(),
	U3CPrivateImplementationDetailsU3E_t3793596152_StaticFields::get_offset_of_U24U24fieldU2D62_49(),
	U3CPrivateImplementationDetailsU3E_t3793596152_StaticFields::get_offset_of_U24U24fieldU2D63_50(),
	U3CPrivateImplementationDetailsU3E_t3793596152_StaticFields::get_offset_of_U24U24fieldU2D64_51(),
	U3CPrivateImplementationDetailsU3E_t3793596152_StaticFields::get_offset_of_U24U24fieldU2D65_52(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize952 = { sizeof (U24ArrayTypeU2456_t600203385)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2456_t600203385 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize953 = { sizeof (U24ArrayTypeU2424_t992868333)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2424_t992868333 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize954 = { sizeof (U24ArrayTypeU2416_t1911017300)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2416_t1911017300 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize955 = { sizeof (U24ArrayTypeU24120_t4230284466)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU24120_t4230284466 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize956 = { sizeof (U24ArrayTypeU243132_t3470299486)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU243132_t3470299486 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize957 = { sizeof (U24ArrayTypeU2420_t820113788)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2420_t820113788 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize958 = { sizeof (U24ArrayTypeU2432_t868397469)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2432_t868397469 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize959 = { sizeof (U24ArrayTypeU2448_t2679062403)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2448_t2679062403 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize960 = { sizeof (U24ArrayTypeU2464_t2400480182)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2464_t2400480182 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize961 = { sizeof (U24ArrayTypeU2412_t1618401966)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2412_t1618401966 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize962 = { sizeof (U24ArrayTypeU24136_t2193125036)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU24136_t2193125036 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize963 = { sizeof (U24ArrayTypeU248_t1047038965)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU248_t1047038965 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize964 = { sizeof (U24ArrayTypeU2472_t4235473988)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2472_t4235473988 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize965 = { sizeof (U24ArrayTypeU24124_t3981583019)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU24124_t3981583019 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize966 = { sizeof (U24ArrayTypeU2496_t3327887044)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2496_t3327887044 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize967 = { sizeof (U24ArrayTypeU242048_t157123511)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU242048_t157123511 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize968 = { sizeof (U24ArrayTypeU24256_t2595027676)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU24256_t2595027676 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize969 = { sizeof (U24ArrayTypeU241024_t708480540)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU241024_t708480540 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize970 = { sizeof (U24ArrayTypeU24640_t2115262595)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU24640_t2115262595 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize971 = { sizeof (U24ArrayTypeU24128_t2408794763)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU24128_t2408794763 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize972 = { sizeof (U24ArrayTypeU2452_t2585479835)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2452_t2585479835 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize973 = { sizeof (Il2CppComObject), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize974 = { sizeof (__Il2CppComDelegate_t109909865), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize975 = { sizeof (U3CModuleU3E_t3610364616), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize976 = { sizeof (Locale_t131769631), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize977 = { sizeof (BigInteger_t4229345892), -1, sizeof(BigInteger_t4229345892_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable977[4] = 
{
	BigInteger_t4229345892::get_offset_of_length_0(),
	BigInteger_t4229345892::get_offset_of_data_1(),
	BigInteger_t4229345892_StaticFields::get_offset_of_smallPrimes_2(),
	BigInteger_t4229345892_StaticFields::get_offset_of_rng_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize978 = { sizeof (Sign_t4036904649)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable978[4] = 
{
	Sign_t4036904649::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize979 = { sizeof (ModulusRing_t1359643097), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable979[2] = 
{
	ModulusRing_t1359643097::get_offset_of_mod_0(),
	ModulusRing_t1359643097::get_offset_of_constant_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize980 = { sizeof (Kernel_t2640394687), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize981 = { sizeof (ConfidenceFactor_t2513678967)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable981[7] = 
{
	ConfidenceFactor_t2513678967::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize982 = { sizeof (PrimalityTests_t4178172327), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize983 = { sizeof (PrimeGeneratorBase_t76912225), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize984 = { sizeof (SequentialSearchPrimeGeneratorBase_t2089353874), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize985 = { sizeof (ASN1_t136638977), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable985[3] = 
{
	ASN1_t136638977::get_offset_of_m_nTag_0(),
	ASN1_t136638977::get_offset_of_m_aValue_1(),
	ASN1_t136638977::get_offset_of_elist_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize986 = { sizeof (ASN1Convert_t2592413998), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize987 = { sizeof (BitConverterLE_t1469525659), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize988 = { sizeof (PKCS7_t4236438594), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize989 = { sizeof (ContentInfo_t861333171), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable989[2] = 
{
	ContentInfo_t861333171::get_offset_of_contentType_0(),
	ContentInfo_t861333171::get_offset_of_content_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize990 = { sizeof (EncryptedData_t1420787818), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable990[4] = 
{
	EncryptedData_t1420787818::get_offset_of__version_0(),
	EncryptedData_t1420787818::get_offset_of__content_1(),
	EncryptedData_t1420787818::get_offset_of__encryptionAlgorithm_2(),
	EncryptedData_t1420787818::get_offset_of__encrypted_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize991 = { sizeof (ARC4Managed_t2250592228), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable991[5] = 
{
	ARC4Managed_t2250592228::get_offset_of_key_12(),
	ARC4Managed_t2250592228::get_offset_of_state_13(),
	ARC4Managed_t2250592228::get_offset_of_x_14(),
	ARC4Managed_t2250592228::get_offset_of_y_15(),
	ARC4Managed_t2250592228::get_offset_of_m_disposed_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize992 = { sizeof (CryptoConvert_t3290559052), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize993 = { sizeof (KeyBuilder_t1136152460), -1, sizeof(KeyBuilder_t1136152460_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable993[1] = 
{
	KeyBuilder_t1136152460_StaticFields::get_offset_of_rng_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize994 = { sizeof (MD2_t2840516304), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize995 = { sizeof (MD2Managed_t4159479188), -1, sizeof(MD2Managed_t4159479188_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable995[6] = 
{
	MD2Managed_t4159479188::get_offset_of_state_4(),
	MD2Managed_t4159479188::get_offset_of_checksum_5(),
	MD2Managed_t4159479188::get_offset_of_buffer_6(),
	MD2Managed_t4159479188::get_offset_of_count_7(),
	MD2Managed_t4159479188::get_offset_of_x_8(),
	MD2Managed_t4159479188_StaticFields::get_offset_of_PI_SUBST_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize996 = { sizeof (MD4_t1133690861), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize997 = { sizeof (MD4Managed_t4084791581), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable997[5] = 
{
	MD4Managed_t4084791581::get_offset_of_state_4(),
	MD4Managed_t4084791581::get_offset_of_buffer_5(),
	MD4Managed_t4084791581::get_offset_of_count_6(),
	MD4Managed_t4084791581::get_offset_of_x_7(),
	MD4Managed_t4084791581::get_offset_of_digest_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize998 = { sizeof (PKCS1_t1828926027), -1, sizeof(PKCS1_t1828926027_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable998[4] = 
{
	PKCS1_t1828926027_StaticFields::get_offset_of_emptySHA1_0(),
	PKCS1_t1828926027_StaticFields::get_offset_of_emptySHA256_1(),
	PKCS1_t1828926027_StaticFields::get_offset_of_emptySHA384_2(),
	PKCS1_t1828926027_StaticFields::get_offset_of_emptySHA512_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize999 = { sizeof (PKCS8_t3695047643), -1, 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif

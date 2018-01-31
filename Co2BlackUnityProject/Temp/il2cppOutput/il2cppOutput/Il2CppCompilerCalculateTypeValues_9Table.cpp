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
struct ContentInfo_t2653599359;
// System.Byte[]
struct ByteU5BU5D_t2082625487;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2747279508;
// System.String
struct String_t;
// Mono.Security.ASN1
struct ASN1_t3645405092;
// System.Collections.ArrayList
struct ArrayList_t3814578932;
// Mono.Math.BigInteger
struct BigInteger_t861477058;
// System.UInt32[]
struct UInt32U5BU5D_t3351239686;
// System.Int32[]
struct Int32U5BU5D_t2698460932;
// System.IntPtr[]
struct IntPtrU5BU5D_t1731056910;
// System.Collections.IDictionary
struct IDictionary_t3161049719;
// System.Char[]
struct CharU5BU5D_t2660974271;
// System.Globalization.CompareInfo
struct CompareInfo_t2775324986;
// System.Void
struct Void_t2865415851;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t3388760574;
// System.Collections.Hashtable
struct Hashtable_t1655244623;
// System.Globalization.DaylightTime
struct DaylightTime_t4160004796;
// System.Version
struct Version_t145090496;
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_t3907905111;
// System.UnhandledExceptionEventArgs
struct UnhandledExceptionEventArgs_t1562737222;
// System.IAsyncResult
struct IAsyncResult_t716060561;
// System.AsyncCallback
struct AsyncCallback_t1478992003;
// System.Reflection.Assembly
struct Assembly_t4216287879;
// System.ResolveEventArgs
struct ResolveEventArgs_t2100816415;
// System.EventArgs
struct EventArgs_t3221083573;
// System.AssemblyLoadEventArgs
struct AssemblyLoadEventArgs_t690571889;
// System.String[]
struct StringU5BU5D_t2367344467;
// System.Runtime.Remoting.Messaging.Header[]
struct HeaderU5BU5D_t3273191305;
// Mono.Math.BigInteger
struct BigInteger_t861477057;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Type
struct Type_t;




#ifndef U3CMODULEU3E_T3323630713_H
#define U3CMODULEU3E_T3323630713_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t3323630713 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T3323630713_H
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
#ifndef ENCRYPTEDDATA_T695399794_H
#define ENCRYPTEDDATA_T695399794_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.PKCS7/EncryptedData
struct  EncryptedData_t695399794  : public RuntimeObject
{
public:
	// System.Byte Mono.Security.PKCS7/EncryptedData::_version
	uint8_t ____version_0;
	// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/EncryptedData::_content
	ContentInfo_t2653599359 * ____content_1;
	// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/EncryptedData::_encryptionAlgorithm
	ContentInfo_t2653599359 * ____encryptionAlgorithm_2;
	// System.Byte[] Mono.Security.PKCS7/EncryptedData::_encrypted
	ByteU5BU5D_t2082625487* ____encrypted_3;

public:
	inline static int32_t get_offset_of__version_0() { return static_cast<int32_t>(offsetof(EncryptedData_t695399794, ____version_0)); }
	inline uint8_t get__version_0() const { return ____version_0; }
	inline uint8_t* get_address_of__version_0() { return &____version_0; }
	inline void set__version_0(uint8_t value)
	{
		____version_0 = value;
	}

	inline static int32_t get_offset_of__content_1() { return static_cast<int32_t>(offsetof(EncryptedData_t695399794, ____content_1)); }
	inline ContentInfo_t2653599359 * get__content_1() const { return ____content_1; }
	inline ContentInfo_t2653599359 ** get_address_of__content_1() { return &____content_1; }
	inline void set__content_1(ContentInfo_t2653599359 * value)
	{
		____content_1 = value;
		Il2CppCodeGenWriteBarrier((&____content_1), value);
	}

	inline static int32_t get_offset_of__encryptionAlgorithm_2() { return static_cast<int32_t>(offsetof(EncryptedData_t695399794, ____encryptionAlgorithm_2)); }
	inline ContentInfo_t2653599359 * get__encryptionAlgorithm_2() const { return ____encryptionAlgorithm_2; }
	inline ContentInfo_t2653599359 ** get_address_of__encryptionAlgorithm_2() { return &____encryptionAlgorithm_2; }
	inline void set__encryptionAlgorithm_2(ContentInfo_t2653599359 * value)
	{
		____encryptionAlgorithm_2 = value;
		Il2CppCodeGenWriteBarrier((&____encryptionAlgorithm_2), value);
	}

	inline static int32_t get_offset_of__encrypted_3() { return static_cast<int32_t>(offsetof(EncryptedData_t695399794, ____encrypted_3)); }
	inline ByteU5BU5D_t2082625487* get__encrypted_3() const { return ____encrypted_3; }
	inline ByteU5BU5D_t2082625487** get_address_of__encrypted_3() { return &____encrypted_3; }
	inline void set__encrypted_3(ByteU5BU5D_t2082625487* value)
	{
		____encrypted_3 = value;
		Il2CppCodeGenWriteBarrier((&____encrypted_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCRYPTEDDATA_T695399794_H
#ifndef PKCS8_T2181476744_H
#define PKCS8_T2181476744_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.PKCS8
struct  PKCS8_t2181476744  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PKCS8_T2181476744_H
#ifndef VERSION_T145090496_H
#define VERSION_T145090496_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Version
struct  Version_t145090496  : public RuntimeObject
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
	inline static int32_t get_offset_of__Major_1() { return static_cast<int32_t>(offsetof(Version_t145090496, ____Major_1)); }
	inline int32_t get__Major_1() const { return ____Major_1; }
	inline int32_t* get_address_of__Major_1() { return &____Major_1; }
	inline void set__Major_1(int32_t value)
	{
		____Major_1 = value;
	}

	inline static int32_t get_offset_of__Minor_2() { return static_cast<int32_t>(offsetof(Version_t145090496, ____Minor_2)); }
	inline int32_t get__Minor_2() const { return ____Minor_2; }
	inline int32_t* get_address_of__Minor_2() { return &____Minor_2; }
	inline void set__Minor_2(int32_t value)
	{
		____Minor_2 = value;
	}

	inline static int32_t get_offset_of__Build_3() { return static_cast<int32_t>(offsetof(Version_t145090496, ____Build_3)); }
	inline int32_t get__Build_3() const { return ____Build_3; }
	inline int32_t* get_address_of__Build_3() { return &____Build_3; }
	inline void set__Build_3(int32_t value)
	{
		____Build_3 = value;
	}

	inline static int32_t get_offset_of__Revision_4() { return static_cast<int32_t>(offsetof(Version_t145090496, ____Revision_4)); }
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
#endif // VERSION_T145090496_H
#ifndef PKCS1_T4202992875_H
#define PKCS1_T4202992875_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.PKCS1
struct  PKCS1_t4202992875  : public RuntimeObject
{
public:

public:
};

struct PKCS1_t4202992875_StaticFields
{
public:
	// System.Byte[] Mono.Security.Cryptography.PKCS1::emptySHA1
	ByteU5BU5D_t2082625487* ___emptySHA1_0;
	// System.Byte[] Mono.Security.Cryptography.PKCS1::emptySHA256
	ByteU5BU5D_t2082625487* ___emptySHA256_1;
	// System.Byte[] Mono.Security.Cryptography.PKCS1::emptySHA384
	ByteU5BU5D_t2082625487* ___emptySHA384_2;
	// System.Byte[] Mono.Security.Cryptography.PKCS1::emptySHA512
	ByteU5BU5D_t2082625487* ___emptySHA512_3;

public:
	inline static int32_t get_offset_of_emptySHA1_0() { return static_cast<int32_t>(offsetof(PKCS1_t4202992875_StaticFields, ___emptySHA1_0)); }
	inline ByteU5BU5D_t2082625487* get_emptySHA1_0() const { return ___emptySHA1_0; }
	inline ByteU5BU5D_t2082625487** get_address_of_emptySHA1_0() { return &___emptySHA1_0; }
	inline void set_emptySHA1_0(ByteU5BU5D_t2082625487* value)
	{
		___emptySHA1_0 = value;
		Il2CppCodeGenWriteBarrier((&___emptySHA1_0), value);
	}

	inline static int32_t get_offset_of_emptySHA256_1() { return static_cast<int32_t>(offsetof(PKCS1_t4202992875_StaticFields, ___emptySHA256_1)); }
	inline ByteU5BU5D_t2082625487* get_emptySHA256_1() const { return ___emptySHA256_1; }
	inline ByteU5BU5D_t2082625487** get_address_of_emptySHA256_1() { return &___emptySHA256_1; }
	inline void set_emptySHA256_1(ByteU5BU5D_t2082625487* value)
	{
		___emptySHA256_1 = value;
		Il2CppCodeGenWriteBarrier((&___emptySHA256_1), value);
	}

	inline static int32_t get_offset_of_emptySHA384_2() { return static_cast<int32_t>(offsetof(PKCS1_t4202992875_StaticFields, ___emptySHA384_2)); }
	inline ByteU5BU5D_t2082625487* get_emptySHA384_2() const { return ___emptySHA384_2; }
	inline ByteU5BU5D_t2082625487** get_address_of_emptySHA384_2() { return &___emptySHA384_2; }
	inline void set_emptySHA384_2(ByteU5BU5D_t2082625487* value)
	{
		___emptySHA384_2 = value;
		Il2CppCodeGenWriteBarrier((&___emptySHA384_2), value);
	}

	inline static int32_t get_offset_of_emptySHA512_3() { return static_cast<int32_t>(offsetof(PKCS1_t4202992875_StaticFields, ___emptySHA512_3)); }
	inline ByteU5BU5D_t2082625487* get_emptySHA512_3() const { return ___emptySHA512_3; }
	inline ByteU5BU5D_t2082625487** get_address_of_emptySHA512_3() { return &___emptySHA512_3; }
	inline void set_emptySHA512_3(ByteU5BU5D_t2082625487* value)
	{
		___emptySHA512_3 = value;
		Il2CppCodeGenWriteBarrier((&___emptySHA512_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PKCS1_T4202992875_H
#ifndef KEYBUILDER_T2811277435_H
#define KEYBUILDER_T2811277435_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.KeyBuilder
struct  KeyBuilder_t2811277435  : public RuntimeObject
{
public:

public:
};

struct KeyBuilder_t2811277435_StaticFields
{
public:
	// System.Security.Cryptography.RandomNumberGenerator Mono.Security.Cryptography.KeyBuilder::rng
	RandomNumberGenerator_t2747279508 * ___rng_0;

public:
	inline static int32_t get_offset_of_rng_0() { return static_cast<int32_t>(offsetof(KeyBuilder_t2811277435_StaticFields, ___rng_0)); }
	inline RandomNumberGenerator_t2747279508 * get_rng_0() const { return ___rng_0; }
	inline RandomNumberGenerator_t2747279508 ** get_address_of_rng_0() { return &___rng_0; }
	inline void set_rng_0(RandomNumberGenerator_t2747279508 * value)
	{
		___rng_0 = value;
		Il2CppCodeGenWriteBarrier((&___rng_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYBUILDER_T2811277435_H
#ifndef CRYPTOCONVERT_T633261263_H
#define CRYPTOCONVERT_T633261263_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.CryptoConvert
struct  CryptoConvert_t633261263  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRYPTOCONVERT_T633261263_H
#ifndef LOCALE_T2539833171_H
#define LOCALE_T2539833171_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Locale
struct  Locale_t2539833171  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCALE_T2539833171_H
#ifndef CONTENTINFO_T2653599359_H
#define CONTENTINFO_T2653599359_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.PKCS7/ContentInfo
struct  ContentInfo_t2653599359  : public RuntimeObject
{
public:
	// System.String Mono.Security.PKCS7/ContentInfo::contentType
	String_t* ___contentType_0;
	// Mono.Security.ASN1 Mono.Security.PKCS7/ContentInfo::content
	ASN1_t3645405092 * ___content_1;

public:
	inline static int32_t get_offset_of_contentType_0() { return static_cast<int32_t>(offsetof(ContentInfo_t2653599359, ___contentType_0)); }
	inline String_t* get_contentType_0() const { return ___contentType_0; }
	inline String_t** get_address_of_contentType_0() { return &___contentType_0; }
	inline void set_contentType_0(String_t* value)
	{
		___contentType_0 = value;
		Il2CppCodeGenWriteBarrier((&___contentType_0), value);
	}

	inline static int32_t get_offset_of_content_1() { return static_cast<int32_t>(offsetof(ContentInfo_t2653599359, ___content_1)); }
	inline ASN1_t3645405092 * get_content_1() const { return ___content_1; }
	inline ASN1_t3645405092 ** get_address_of_content_1() { return &___content_1; }
	inline void set_content_1(ASN1_t3645405092 * value)
	{
		___content_1 = value;
		Il2CppCodeGenWriteBarrier((&___content_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTENTINFO_T2653599359_H
#ifndef BITCONVERTERLE_T1658920548_H
#define BITCONVERTERLE_T1658920548_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.BitConverterLE
struct  BitConverterLE_t1658920548  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BITCONVERTERLE_T1658920548_H
#ifndef ASN1CONVERT_T769194489_H
#define ASN1CONVERT_T769194489_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.ASN1Convert
struct  ASN1Convert_t769194489  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASN1CONVERT_T769194489_H
#ifndef ASN1_T3645405092_H
#define ASN1_T3645405092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.ASN1
struct  ASN1_t3645405092  : public RuntimeObject
{
public:
	// System.Byte Mono.Security.ASN1::m_nTag
	uint8_t ___m_nTag_0;
	// System.Byte[] Mono.Security.ASN1::m_aValue
	ByteU5BU5D_t2082625487* ___m_aValue_1;
	// System.Collections.ArrayList Mono.Security.ASN1::elist
	ArrayList_t3814578932 * ___elist_2;

public:
	inline static int32_t get_offset_of_m_nTag_0() { return static_cast<int32_t>(offsetof(ASN1_t3645405092, ___m_nTag_0)); }
	inline uint8_t get_m_nTag_0() const { return ___m_nTag_0; }
	inline uint8_t* get_address_of_m_nTag_0() { return &___m_nTag_0; }
	inline void set_m_nTag_0(uint8_t value)
	{
		___m_nTag_0 = value;
	}

	inline static int32_t get_offset_of_m_aValue_1() { return static_cast<int32_t>(offsetof(ASN1_t3645405092, ___m_aValue_1)); }
	inline ByteU5BU5D_t2082625487* get_m_aValue_1() const { return ___m_aValue_1; }
	inline ByteU5BU5D_t2082625487** get_address_of_m_aValue_1() { return &___m_aValue_1; }
	inline void set_m_aValue_1(ByteU5BU5D_t2082625487* value)
	{
		___m_aValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_aValue_1), value);
	}

	inline static int32_t get_offset_of_elist_2() { return static_cast<int32_t>(offsetof(ASN1_t3645405092, ___elist_2)); }
	inline ArrayList_t3814578932 * get_elist_2() const { return ___elist_2; }
	inline ArrayList_t3814578932 ** get_address_of_elist_2() { return &___elist_2; }
	inline void set_elist_2(ArrayList_t3814578932 * value)
	{
		___elist_2 = value;
		Il2CppCodeGenWriteBarrier((&___elist_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASN1_T3645405092_H
#ifndef PRIMEGENERATORBASE_T652853711_H
#define PRIMEGENERATORBASE_T652853711_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.Prime.Generator.PrimeGeneratorBase
struct  PrimeGeneratorBase_t652853711  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRIMEGENERATORBASE_T652853711_H
#ifndef PRIMALITYTESTS_T2035598654_H
#define PRIMALITYTESTS_T2035598654_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.Prime.PrimalityTests
struct  PrimalityTests_t2035598654  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRIMALITYTESTS_T2035598654_H
#ifndef KERNEL_T4065016017_H
#define KERNEL_T4065016017_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.BigInteger/Kernel
struct  Kernel_t4065016017  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KERNEL_T4065016017_H
#ifndef MODULUSRING_T1762511487_H
#define MODULUSRING_T1762511487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.BigInteger/ModulusRing
struct  ModulusRing_t1762511487  : public RuntimeObject
{
public:
	// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::mod
	BigInteger_t861477058 * ___mod_0;
	// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::constant
	BigInteger_t861477058 * ___constant_1;

public:
	inline static int32_t get_offset_of_mod_0() { return static_cast<int32_t>(offsetof(ModulusRing_t1762511487, ___mod_0)); }
	inline BigInteger_t861477058 * get_mod_0() const { return ___mod_0; }
	inline BigInteger_t861477058 ** get_address_of_mod_0() { return &___mod_0; }
	inline void set_mod_0(BigInteger_t861477058 * value)
	{
		___mod_0 = value;
		Il2CppCodeGenWriteBarrier((&___mod_0), value);
	}

	inline static int32_t get_offset_of_constant_1() { return static_cast<int32_t>(offsetof(ModulusRing_t1762511487, ___constant_1)); }
	inline BigInteger_t861477058 * get_constant_1() const { return ___constant_1; }
	inline BigInteger_t861477058 ** get_address_of_constant_1() { return &___constant_1; }
	inline void set_constant_1(BigInteger_t861477058 * value)
	{
		___constant_1 = value;
		Il2CppCodeGenWriteBarrier((&___constant_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MODULUSRING_T1762511487_H
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
#ifndef PKCS7_T399180591_H
#define PKCS7_T399180591_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.PKCS7
struct  PKCS7_t399180591  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PKCS7_T399180591_H
#ifndef EVENTARGS_T3221083573_H
#define EVENTARGS_T3221083573_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventArgs
struct  EventArgs_t3221083573  : public RuntimeObject
{
public:

public:
};

struct EventArgs_t3221083573_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t3221083573 * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_t3221083573_StaticFields, ___Empty_0)); }
	inline EventArgs_t3221083573 * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_t3221083573 ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_t3221083573 * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTARGS_T3221083573_H
#ifndef BIGINTEGER_T861477058_H
#define BIGINTEGER_T861477058_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.BigInteger
struct  BigInteger_t861477058  : public RuntimeObject
{
public:
	// System.UInt32 Mono.Math.BigInteger::length
	uint32_t ___length_0;
	// System.UInt32[] Mono.Math.BigInteger::data
	UInt32U5BU5D_t3351239686* ___data_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(BigInteger_t861477058, ___length_0)); }
	inline uint32_t get_length_0() const { return ___length_0; }
	inline uint32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(uint32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(BigInteger_t861477058, ___data_1)); }
	inline UInt32U5BU5D_t3351239686* get_data_1() const { return ___data_1; }
	inline UInt32U5BU5D_t3351239686** get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(UInt32U5BU5D_t3351239686* value)
	{
		___data_1 = value;
		Il2CppCodeGenWriteBarrier((&___data_1), value);
	}
};

struct BigInteger_t861477058_StaticFields
{
public:
	// System.UInt32[] Mono.Math.BigInteger::smallPrimes
	UInt32U5BU5D_t3351239686* ___smallPrimes_2;
	// System.Security.Cryptography.RandomNumberGenerator Mono.Math.BigInteger::rng
	RandomNumberGenerator_t2747279508 * ___rng_3;

public:
	inline static int32_t get_offset_of_smallPrimes_2() { return static_cast<int32_t>(offsetof(BigInteger_t861477058_StaticFields, ___smallPrimes_2)); }
	inline UInt32U5BU5D_t3351239686* get_smallPrimes_2() const { return ___smallPrimes_2; }
	inline UInt32U5BU5D_t3351239686** get_address_of_smallPrimes_2() { return &___smallPrimes_2; }
	inline void set_smallPrimes_2(UInt32U5BU5D_t3351239686* value)
	{
		___smallPrimes_2 = value;
		Il2CppCodeGenWriteBarrier((&___smallPrimes_2), value);
	}

	inline static int32_t get_offset_of_rng_3() { return static_cast<int32_t>(offsetof(BigInteger_t861477058_StaticFields, ___rng_3)); }
	inline RandomNumberGenerator_t2747279508 * get_rng_3() const { return ___rng_3; }
	inline RandomNumberGenerator_t2747279508 ** get_address_of_rng_3() { return &___rng_3; }
	inline void set_rng_3(RandomNumberGenerator_t2747279508 * value)
	{
		___rng_3 = value;
		Il2CppCodeGenWriteBarrier((&___rng_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BIGINTEGER_T861477058_H
#ifndef TIMEZONE_T4242859709_H
#define TIMEZONE_T4242859709_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeZone
struct  TimeZone_t4242859709  : public RuntimeObject
{
public:

public:
};

struct TimeZone_t4242859709_StaticFields
{
public:
	// System.TimeZone System.TimeZone::currentTimeZone
	TimeZone_t4242859709 * ___currentTimeZone_0;
	// System.Object System.TimeZone::tz_lock
	RuntimeObject * ___tz_lock_1;
	// System.Int64 System.TimeZone::timezone_check
	int64_t ___timezone_check_2;

public:
	inline static int32_t get_offset_of_currentTimeZone_0() { return static_cast<int32_t>(offsetof(TimeZone_t4242859709_StaticFields, ___currentTimeZone_0)); }
	inline TimeZone_t4242859709 * get_currentTimeZone_0() const { return ___currentTimeZone_0; }
	inline TimeZone_t4242859709 ** get_address_of_currentTimeZone_0() { return &___currentTimeZone_0; }
	inline void set_currentTimeZone_0(TimeZone_t4242859709 * value)
	{
		___currentTimeZone_0 = value;
		Il2CppCodeGenWriteBarrier((&___currentTimeZone_0), value);
	}

	inline static int32_t get_offset_of_tz_lock_1() { return static_cast<int32_t>(offsetof(TimeZone_t4242859709_StaticFields, ___tz_lock_1)); }
	inline RuntimeObject * get_tz_lock_1() const { return ___tz_lock_1; }
	inline RuntimeObject ** get_address_of_tz_lock_1() { return &___tz_lock_1; }
	inline void set_tz_lock_1(RuntimeObject * value)
	{
		___tz_lock_1 = value;
		Il2CppCodeGenWriteBarrier((&___tz_lock_1), value);
	}

	inline static int32_t get_offset_of_timezone_check_2() { return static_cast<int32_t>(offsetof(TimeZone_t4242859709_StaticFields, ___timezone_check_2)); }
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
#endif // TIMEZONE_T4242859709_H
#ifndef VALUETYPE_T2278504123_H
#define VALUETYPE_T2278504123_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t2278504123  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t2278504123_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t2278504123_marshaled_com
{
};
#endif // VALUETYPE_T2278504123_H
#ifndef HASHALGORITHM_T1648846986_H
#define HASHALGORITHM_T1648846986_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HashAlgorithm
struct  HashAlgorithm_t1648846986  : public RuntimeObject
{
public:
	// System.Byte[] System.Security.Cryptography.HashAlgorithm::HashValue
	ByteU5BU5D_t2082625487* ___HashValue_0;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::HashSizeValue
	int32_t ___HashSizeValue_1;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::State
	int32_t ___State_2;
	// System.Boolean System.Security.Cryptography.HashAlgorithm::disposed
	bool ___disposed_3;

public:
	inline static int32_t get_offset_of_HashValue_0() { return static_cast<int32_t>(offsetof(HashAlgorithm_t1648846986, ___HashValue_0)); }
	inline ByteU5BU5D_t2082625487* get_HashValue_0() const { return ___HashValue_0; }
	inline ByteU5BU5D_t2082625487** get_address_of_HashValue_0() { return &___HashValue_0; }
	inline void set_HashValue_0(ByteU5BU5D_t2082625487* value)
	{
		___HashValue_0 = value;
		Il2CppCodeGenWriteBarrier((&___HashValue_0), value);
	}

	inline static int32_t get_offset_of_HashSizeValue_1() { return static_cast<int32_t>(offsetof(HashAlgorithm_t1648846986, ___HashSizeValue_1)); }
	inline int32_t get_HashSizeValue_1() const { return ___HashSizeValue_1; }
	inline int32_t* get_address_of_HashSizeValue_1() { return &___HashSizeValue_1; }
	inline void set_HashSizeValue_1(int32_t value)
	{
		___HashSizeValue_1 = value;
	}

	inline static int32_t get_offset_of_State_2() { return static_cast<int32_t>(offsetof(HashAlgorithm_t1648846986, ___State_2)); }
	inline int32_t get_State_2() const { return ___State_2; }
	inline int32_t* get_address_of_State_2() { return &___State_2; }
	inline void set_State_2(int32_t value)
	{
		___State_2 = value;
	}

	inline static int32_t get_offset_of_disposed_3() { return static_cast<int32_t>(offsetof(HashAlgorithm_t1648846986, ___disposed_3)); }
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
#endif // HASHALGORITHM_T1648846986_H
#ifndef RANDOM_T805094303_H
#define RANDOM_T805094303_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Random
struct  Random_t805094303  : public RuntimeObject
{
public:
	// System.Int32 System.Random::inext
	int32_t ___inext_0;
	// System.Int32 System.Random::inextp
	int32_t ___inextp_1;
	// System.Int32[] System.Random::SeedArray
	Int32U5BU5D_t2698460932* ___SeedArray_2;

public:
	inline static int32_t get_offset_of_inext_0() { return static_cast<int32_t>(offsetof(Random_t805094303, ___inext_0)); }
	inline int32_t get_inext_0() const { return ___inext_0; }
	inline int32_t* get_address_of_inext_0() { return &___inext_0; }
	inline void set_inext_0(int32_t value)
	{
		___inext_0 = value;
	}

	inline static int32_t get_offset_of_inextp_1() { return static_cast<int32_t>(offsetof(Random_t805094303, ___inextp_1)); }
	inline int32_t get_inextp_1() const { return ___inextp_1; }
	inline int32_t* get_address_of_inextp_1() { return &___inextp_1; }
	inline void set_inextp_1(int32_t value)
	{
		___inextp_1 = value;
	}

	inline static int32_t get_offset_of_SeedArray_2() { return static_cast<int32_t>(offsetof(Random_t805094303, ___SeedArray_2)); }
	inline Int32U5BU5D_t2698460932* get_SeedArray_2() const { return ___SeedArray_2; }
	inline Int32U5BU5D_t2698460932** get_address_of_SeedArray_2() { return &___SeedArray_2; }
	inline void set_SeedArray_2(Int32U5BU5D_t2698460932* value)
	{
		___SeedArray_2 = value;
		Il2CppCodeGenWriteBarrier((&___SeedArray_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANDOM_T805094303_H
#ifndef PARSER_T2182809363_H
#define PARSER_T2182809363_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan/Parser
struct  Parser_t2182809363  : public RuntimeObject
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
	inline static int32_t get_offset_of__src_0() { return static_cast<int32_t>(offsetof(Parser_t2182809363, ____src_0)); }
	inline String_t* get__src_0() const { return ____src_0; }
	inline String_t** get_address_of__src_0() { return &____src_0; }
	inline void set__src_0(String_t* value)
	{
		____src_0 = value;
		Il2CppCodeGenWriteBarrier((&____src_0), value);
	}

	inline static int32_t get_offset_of__cur_1() { return static_cast<int32_t>(offsetof(Parser_t2182809363, ____cur_1)); }
	inline int32_t get__cur_1() const { return ____cur_1; }
	inline int32_t* get_address_of__cur_1() { return &____cur_1; }
	inline void set__cur_1(int32_t value)
	{
		____cur_1 = value;
	}

	inline static int32_t get_offset_of__length_2() { return static_cast<int32_t>(offsetof(Parser_t2182809363, ____length_2)); }
	inline int32_t get__length_2() const { return ____length_2; }
	inline int32_t* get_address_of__length_2() { return &____length_2; }
	inline void set__length_2(int32_t value)
	{
		____length_2 = value;
	}

	inline static int32_t get_offset_of_formatError_3() { return static_cast<int32_t>(offsetof(Parser_t2182809363, ___formatError_3)); }
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
#endif // PARSER_T2182809363_H
#ifndef ATTRIBUTE_T1938213249_H
#define ATTRIBUTE_T1938213249_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t1938213249  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T1938213249_H
#ifndef STRINGCOMPARER_T1808373940_H
#define STRINGCOMPARER_T1808373940_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.StringComparer
struct  StringComparer_t1808373940  : public RuntimeObject
{
public:

public:
};

struct StringComparer_t1808373940_StaticFields
{
public:
	// System.StringComparer System.StringComparer::invariantCultureIgnoreCase
	StringComparer_t1808373940 * ___invariantCultureIgnoreCase_0;
	// System.StringComparer System.StringComparer::invariantCulture
	StringComparer_t1808373940 * ___invariantCulture_1;
	// System.StringComparer System.StringComparer::ordinalIgnoreCase
	StringComparer_t1808373940 * ___ordinalIgnoreCase_2;
	// System.StringComparer System.StringComparer::ordinal
	StringComparer_t1808373940 * ___ordinal_3;

public:
	inline static int32_t get_offset_of_invariantCultureIgnoreCase_0() { return static_cast<int32_t>(offsetof(StringComparer_t1808373940_StaticFields, ___invariantCultureIgnoreCase_0)); }
	inline StringComparer_t1808373940 * get_invariantCultureIgnoreCase_0() const { return ___invariantCultureIgnoreCase_0; }
	inline StringComparer_t1808373940 ** get_address_of_invariantCultureIgnoreCase_0() { return &___invariantCultureIgnoreCase_0; }
	inline void set_invariantCultureIgnoreCase_0(StringComparer_t1808373940 * value)
	{
		___invariantCultureIgnoreCase_0 = value;
		Il2CppCodeGenWriteBarrier((&___invariantCultureIgnoreCase_0), value);
	}

	inline static int32_t get_offset_of_invariantCulture_1() { return static_cast<int32_t>(offsetof(StringComparer_t1808373940_StaticFields, ___invariantCulture_1)); }
	inline StringComparer_t1808373940 * get_invariantCulture_1() const { return ___invariantCulture_1; }
	inline StringComparer_t1808373940 ** get_address_of_invariantCulture_1() { return &___invariantCulture_1; }
	inline void set_invariantCulture_1(StringComparer_t1808373940 * value)
	{
		___invariantCulture_1 = value;
		Il2CppCodeGenWriteBarrier((&___invariantCulture_1), value);
	}

	inline static int32_t get_offset_of_ordinalIgnoreCase_2() { return static_cast<int32_t>(offsetof(StringComparer_t1808373940_StaticFields, ___ordinalIgnoreCase_2)); }
	inline StringComparer_t1808373940 * get_ordinalIgnoreCase_2() const { return ___ordinalIgnoreCase_2; }
	inline StringComparer_t1808373940 ** get_address_of_ordinalIgnoreCase_2() { return &___ordinalIgnoreCase_2; }
	inline void set_ordinalIgnoreCase_2(StringComparer_t1808373940 * value)
	{
		___ordinalIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((&___ordinalIgnoreCase_2), value);
	}

	inline static int32_t get_offset_of_ordinal_3() { return static_cast<int32_t>(offsetof(StringComparer_t1808373940_StaticFields, ___ordinal_3)); }
	inline StringComparer_t1808373940 * get_ordinal_3() const { return ___ordinal_3; }
	inline StringComparer_t1808373940 ** get_address_of_ordinal_3() { return &___ordinal_3; }
	inline void set_ordinal_3(StringComparer_t1808373940 * value)
	{
		___ordinal_3 = value;
		Il2CppCodeGenWriteBarrier((&___ordinal_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGCOMPARER_T1808373940_H
#ifndef EXCEPTION_T639709710_H
#define EXCEPTION_T639709710_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t639709710  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t1731056910* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t639709710 * ___inner_exception_1;
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
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t639709710, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t1731056910* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t1731056910** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t1731056910* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t639709710, ___inner_exception_1)); }
	inline Exception_t639709710 * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t639709710 ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t639709710 * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t639709710, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t639709710, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t639709710, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t639709710, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t639709710, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t639709710, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t639709710, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t639709710, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t639709710, ____data_10)); }
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
#endif // EXCEPTION_T639709710_H
#ifndef U24ARRAYTYPEU243132_T3471060236_H
#define U24ARRAYTYPEU243132_T3471060236_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$3132
struct  U24ArrayTypeU243132_t3471060236 
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
		uint8_t U24ArrayTypeU243132_t3471060236__padding[3132];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU243132_T3471060236_H
#ifndef U24ARRAYTYPEU2420_T2842077923_H
#define U24ARRAYTYPEU2420_T2842077923_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$20
struct  U24ArrayTypeU2420_t2842077923 
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
		uint8_t U24ArrayTypeU2420_t2842077923__padding[20];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2420_T2842077923_H
#ifndef U24ARRAYTYPEU2432_T2663078516_H
#define U24ARRAYTYPEU2432_T2663078516_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$32
struct  U24ArrayTypeU2432_t2663078516 
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
		uint8_t U24ArrayTypeU2432_t2663078516__padding[32];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2432_T2663078516_H
#ifndef U24ARRAYTYPEU2448_T1477348490_H
#define U24ARRAYTYPEU2448_T1477348490_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$48
struct  U24ArrayTypeU2448_t1477348490 
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
		uint8_t U24ArrayTypeU2448_t1477348490__padding[48];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2448_T1477348490_H
#ifndef U24ARRAYTYPEU2464_T1806936230_H
#define U24ARRAYTYPEU2464_T1806936230_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$64
struct  U24ArrayTypeU2464_t1806936230 
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
		uint8_t U24ArrayTypeU2464_t1806936230__padding[64];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2464_T1806936230_H
#ifndef U24ARRAYTYPEU2412_T1613890990_H
#define U24ARRAYTYPEU2412_T1613890990_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$12
struct  U24ArrayTypeU2412_t1613890990 
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
		uint8_t U24ArrayTypeU2412_t1613890990__padding[12];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2412_T1613890990_H
#ifndef BOOLEAN_T282626834_H
#define BOOLEAN_T282626834_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t282626834 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t282626834, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t282626834_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t282626834_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t282626834_StaticFields, ___TrueString_1)); }
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
#endif // BOOLEAN_T282626834_H
#ifndef U24ARRAYTYPEU248_T3144299232_H
#define U24ARRAYTYPEU248_T3144299232_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$8
struct  U24ArrayTypeU248_t3144299232 
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
		uint8_t U24ArrayTypeU248_t3144299232__padding[8];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU248_T3144299232_H
#ifndef U24ARRAYTYPEU2472_T1440235392_H
#define U24ARRAYTYPEU2472_T1440235392_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$72
struct  U24ArrayTypeU2472_t1440235392 
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
		uint8_t U24ArrayTypeU2472_t1440235392__padding[72];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2472_T1440235392_H
#ifndef U24ARRAYTYPEU24124_T3776489364_H
#define U24ARRAYTYPEU24124_T3776489364_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$124
struct  U24ArrayTypeU24124_t3776489364 
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
		uint8_t U24ArrayTypeU24124_t3776489364__padding[124];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24124_T3776489364_H
#ifndef U24ARRAYTYPEU2496_T1251209259_H
#define U24ARRAYTYPEU2496_T1251209259_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$96
struct  U24ArrayTypeU2496_t1251209259 
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
		uint8_t U24ArrayTypeU2496_t1251209259__padding[96];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2496_T1251209259_H
#ifndef U24ARRAYTYPEU242048_T3502187460_H
#define U24ARRAYTYPEU242048_T3502187460_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$2048
struct  U24ArrayTypeU242048_t3502187460 
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
		uint8_t U24ArrayTypeU242048_t3502187460__padding[2048];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU242048_T3502187460_H
#ifndef U24ARRAYTYPEU24256_T2959064577_H
#define U24ARRAYTYPEU24256_T2959064577_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$256
struct  U24ArrayTypeU24256_t2959064577 
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
		uint8_t U24ArrayTypeU24256_t2959064577__padding[256];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24256_T2959064577_H
#ifndef U24ARRAYTYPEU241024_T512068566_H
#define U24ARRAYTYPEU241024_T512068566_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$1024
struct  U24ArrayTypeU241024_t512068566 
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
		uint8_t U24ArrayTypeU241024_t512068566__padding[1024];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU241024_T512068566_H
#ifndef U24ARRAYTYPEU24640_T3354467406_H
#define U24ARRAYTYPEU24640_T3354467406_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$640
struct  U24ArrayTypeU24640_t3354467406 
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
		uint8_t U24ArrayTypeU24640_t3354467406__padding[640];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24640_T3354467406_H
#ifndef U24ARRAYTYPEU24128_T2277346503_H
#define U24ARRAYTYPEU24128_T2277346503_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$128
struct  U24ArrayTypeU24128_t2277346503 
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
		uint8_t U24ArrayTypeU24128_t2277346503__padding[128];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24128_T2277346503_H
#ifndef U24ARRAYTYPEU2452_T263736692_H
#define U24ARRAYTYPEU2452_T263736692_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$52
struct  U24ArrayTypeU2452_t263736692 
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
		uint8_t U24ArrayTypeU2452_t263736692__padding[52];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2452_T263736692_H
#ifndef __IL2CPPCOMDELEGATE_T1729496221_H
#define __IL2CPPCOMDELEGATE_T1729496221_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.__Il2CppComDelegate
struct  __Il2CppComDelegate_t1729496221  : public Il2CppComObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __IL2CPPCOMDELEGATE_T1729496221_H
#ifndef U24ARRAYTYPEU24120_T102593309_H
#define U24ARRAYTYPEU24120_T102593309_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$120
struct  U24ArrayTypeU24120_t102593309 
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
		uint8_t U24ArrayTypeU24120_t102593309__padding[120];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24120_T102593309_H
#ifndef U24ARRAYTYPEU2416_T1729160021_H
#define U24ARRAYTYPEU2416_T1729160021_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$16
struct  U24ArrayTypeU2416_t1729160021 
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
		uint8_t U24ArrayTypeU2416_t1729160021__padding[16];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2416_T1729160021_H
#ifndef VOID_T2865415851_H
#define VOID_T2865415851_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t2865415851 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T2865415851_H
#ifndef U24ARRAYTYPEU2456_T3048275482_H
#define U24ARRAYTYPEU2456_T3048275482_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$56
struct  U24ArrayTypeU2456_t3048275482 
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
		uint8_t U24ArrayTypeU2456_t3048275482__padding[56];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2456_T3048275482_H
#ifndef ENUM_T3279049482_H
#define ENUM_T3279049482_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t3279049482  : public ValueType_t2278504123
{
public:

public:
};

struct Enum_t3279049482_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t2660974271* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t3279049482_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t2660974271* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t2660974271** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t2660974271* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t3279049482_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t3279049482_marshaled_com
{
};
#endif // ENUM_T3279049482_H
#ifndef UNHANDLEDEXCEPTIONEVENTARGS_T1562737222_H
#define UNHANDLEDEXCEPTIONEVENTARGS_T1562737222_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnhandledExceptionEventArgs
struct  UnhandledExceptionEventArgs_t1562737222  : public EventArgs_t3221083573
{
public:
	// System.Object System.UnhandledExceptionEventArgs::exception
	RuntimeObject * ___exception_1;
	// System.Boolean System.UnhandledExceptionEventArgs::m_isTerminating
	bool ___m_isTerminating_2;

public:
	inline static int32_t get_offset_of_exception_1() { return static_cast<int32_t>(offsetof(UnhandledExceptionEventArgs_t1562737222, ___exception_1)); }
	inline RuntimeObject * get_exception_1() const { return ___exception_1; }
	inline RuntimeObject ** get_address_of_exception_1() { return &___exception_1; }
	inline void set_exception_1(RuntimeObject * value)
	{
		___exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___exception_1), value);
	}

	inline static int32_t get_offset_of_m_isTerminating_2() { return static_cast<int32_t>(offsetof(UnhandledExceptionEventArgs_t1562737222, ___m_isTerminating_2)); }
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
#endif // UNHANDLEDEXCEPTIONEVENTARGS_T1562737222_H
#ifndef TIMESPAN_T511213213_H
#define TIMESPAN_T511213213_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t511213213 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t511213213, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t511213213_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t511213213  ___MaxValue_0;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t511213213  ___MinValue_1;
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t511213213  ___Zero_2;

public:
	inline static int32_t get_offset_of_MaxValue_0() { return static_cast<int32_t>(offsetof(TimeSpan_t511213213_StaticFields, ___MaxValue_0)); }
	inline TimeSpan_t511213213  get_MaxValue_0() const { return ___MaxValue_0; }
	inline TimeSpan_t511213213 * get_address_of_MaxValue_0() { return &___MaxValue_0; }
	inline void set_MaxValue_0(TimeSpan_t511213213  value)
	{
		___MaxValue_0 = value;
	}

	inline static int32_t get_offset_of_MinValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t511213213_StaticFields, ___MinValue_1)); }
	inline TimeSpan_t511213213  get_MinValue_1() const { return ___MinValue_1; }
	inline TimeSpan_t511213213 * get_address_of_MinValue_1() { return &___MinValue_1; }
	inline void set_MinValue_1(TimeSpan_t511213213  value)
	{
		___MinValue_1 = value;
	}

	inline static int32_t get_offset_of_Zero_2() { return static_cast<int32_t>(offsetof(TimeSpan_t511213213_StaticFields, ___Zero_2)); }
	inline TimeSpan_t511213213  get_Zero_2() const { return ___Zero_2; }
	inline TimeSpan_t511213213 * get_address_of_Zero_2() { return &___Zero_2; }
	inline void set_Zero_2(TimeSpan_t511213213  value)
	{
		___Zero_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T511213213_H
#ifndef THREADSTATICATTRIBUTE_T2171151442_H
#define THREADSTATICATTRIBUTE_T2171151442_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ThreadStaticAttribute
struct  ThreadStaticAttribute_t2171151442  : public Attribute_t1938213249
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREADSTATICATTRIBUTE_T2171151442_H
#ifndef SYSTEMEXCEPTION_T856067145_H
#define SYSTEMEXCEPTION_T856067145_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t856067145  : public Exception_t639709710
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T856067145_H
#ifndef U24ARRAYTYPEU2424_T3533350014_H
#define U24ARRAYTYPEU2424_T3533350014_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$24
struct  U24ArrayTypeU2424_t3533350014 
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
		uint8_t U24ArrayTypeU2424_t3533350014__padding[24];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2424_T3533350014_H
#ifndef MD2_T477883742_H
#define MD2_T477883742_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.MD2
struct  MD2_t477883742  : public HashAlgorithm_t1648846986
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MD2_T477883742_H
#ifndef MD4_T1561856440_H
#define MD4_T1561856440_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.MD4
struct  MD4_t1561856440  : public HashAlgorithm_t1648846986
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MD4_T1561856440_H
#ifndef ORDINALCOMPARER_T563536219_H
#define ORDINALCOMPARER_T563536219_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.OrdinalComparer
struct  OrdinalComparer_t563536219  : public StringComparer_t1808373940
{
public:
	// System.Boolean System.OrdinalComparer::_ignoreCase
	bool ____ignoreCase_4;

public:
	inline static int32_t get_offset_of__ignoreCase_4() { return static_cast<int32_t>(offsetof(OrdinalComparer_t563536219, ____ignoreCase_4)); }
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
#endif // ORDINALCOMPARER_T563536219_H
#ifndef CULTUREAWARECOMPARER_T1955490556_H
#define CULTUREAWARECOMPARER_T1955490556_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.CultureAwareComparer
struct  CultureAwareComparer_t1955490556  : public StringComparer_t1808373940
{
public:
	// System.Boolean System.CultureAwareComparer::_ignoreCase
	bool ____ignoreCase_4;
	// System.Globalization.CompareInfo System.CultureAwareComparer::_compareInfo
	CompareInfo_t2775324986 * ____compareInfo_5;

public:
	inline static int32_t get_offset_of__ignoreCase_4() { return static_cast<int32_t>(offsetof(CultureAwareComparer_t1955490556, ____ignoreCase_4)); }
	inline bool get__ignoreCase_4() const { return ____ignoreCase_4; }
	inline bool* get_address_of__ignoreCase_4() { return &____ignoreCase_4; }
	inline void set__ignoreCase_4(bool value)
	{
		____ignoreCase_4 = value;
	}

	inline static int32_t get_offset_of__compareInfo_5() { return static_cast<int32_t>(offsetof(CultureAwareComparer_t1955490556, ____compareInfo_5)); }
	inline CompareInfo_t2775324986 * get__compareInfo_5() const { return ____compareInfo_5; }
	inline CompareInfo_t2775324986 ** get_address_of__compareInfo_5() { return &____compareInfo_5; }
	inline void set__compareInfo_5(CompareInfo_t2775324986 * value)
	{
		____compareInfo_5 = value;
		Il2CppCodeGenWriteBarrier((&____compareInfo_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CULTUREAWARECOMPARER_T1955490556_H
#ifndef GCHANDLE_T26721591_H
#define GCHANDLE_T26721591_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.GCHandle
struct  GCHandle_t26721591 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t26721591, ___handle_0)); }
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
#endif // GCHANDLE_T26721591_H
#ifndef RESOLVEEVENTARGS_T2100816415_H
#define RESOLVEEVENTARGS_T2100816415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ResolveEventArgs
struct  ResolveEventArgs_t2100816415  : public EventArgs_t3221083573
{
public:
	// System.String System.ResolveEventArgs::m_Name
	String_t* ___m_Name_1;

public:
	inline static int32_t get_offset_of_m_Name_1() { return static_cast<int32_t>(offsetof(ResolveEventArgs_t2100816415, ___m_Name_1)); }
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
#endif // RESOLVEEVENTARGS_T2100816415_H
#ifndef SEQUENTIALSEARCHPRIMEGENERATORBASE_T398525451_H
#define SEQUENTIALSEARCHPRIMEGENERATORBASE_T398525451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase
struct  SequentialSearchPrimeGeneratorBase_t398525451  : public PrimeGeneratorBase_t652853711
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SEQUENTIALSEARCHPRIMEGENERATORBASE_T398525451_H
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
#ifndef U24ARRAYTYPEU24136_T2569156269_H
#define U24ARRAYTYPEU24136_T2569156269_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$136
struct  U24ArrayTypeU24136_t2569156269 
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
		uint8_t U24ArrayTypeU24136_t2569156269__padding[136];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24136_T2569156269_H
#ifndef MD2MANAGED_T3678235734_H
#define MD2MANAGED_T3678235734_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.MD2Managed
struct  MD2Managed_t3678235734  : public MD2_t477883742
{
public:
	// System.Byte[] Mono.Security.Cryptography.MD2Managed::state
	ByteU5BU5D_t2082625487* ___state_4;
	// System.Byte[] Mono.Security.Cryptography.MD2Managed::checksum
	ByteU5BU5D_t2082625487* ___checksum_5;
	// System.Byte[] Mono.Security.Cryptography.MD2Managed::buffer
	ByteU5BU5D_t2082625487* ___buffer_6;
	// System.Int32 Mono.Security.Cryptography.MD2Managed::count
	int32_t ___count_7;
	// System.Byte[] Mono.Security.Cryptography.MD2Managed::x
	ByteU5BU5D_t2082625487* ___x_8;

public:
	inline static int32_t get_offset_of_state_4() { return static_cast<int32_t>(offsetof(MD2Managed_t3678235734, ___state_4)); }
	inline ByteU5BU5D_t2082625487* get_state_4() const { return ___state_4; }
	inline ByteU5BU5D_t2082625487** get_address_of_state_4() { return &___state_4; }
	inline void set_state_4(ByteU5BU5D_t2082625487* value)
	{
		___state_4 = value;
		Il2CppCodeGenWriteBarrier((&___state_4), value);
	}

	inline static int32_t get_offset_of_checksum_5() { return static_cast<int32_t>(offsetof(MD2Managed_t3678235734, ___checksum_5)); }
	inline ByteU5BU5D_t2082625487* get_checksum_5() const { return ___checksum_5; }
	inline ByteU5BU5D_t2082625487** get_address_of_checksum_5() { return &___checksum_5; }
	inline void set_checksum_5(ByteU5BU5D_t2082625487* value)
	{
		___checksum_5 = value;
		Il2CppCodeGenWriteBarrier((&___checksum_5), value);
	}

	inline static int32_t get_offset_of_buffer_6() { return static_cast<int32_t>(offsetof(MD2Managed_t3678235734, ___buffer_6)); }
	inline ByteU5BU5D_t2082625487* get_buffer_6() const { return ___buffer_6; }
	inline ByteU5BU5D_t2082625487** get_address_of_buffer_6() { return &___buffer_6; }
	inline void set_buffer_6(ByteU5BU5D_t2082625487* value)
	{
		___buffer_6 = value;
		Il2CppCodeGenWriteBarrier((&___buffer_6), value);
	}

	inline static int32_t get_offset_of_count_7() { return static_cast<int32_t>(offsetof(MD2Managed_t3678235734, ___count_7)); }
	inline int32_t get_count_7() const { return ___count_7; }
	inline int32_t* get_address_of_count_7() { return &___count_7; }
	inline void set_count_7(int32_t value)
	{
		___count_7 = value;
	}

	inline static int32_t get_offset_of_x_8() { return static_cast<int32_t>(offsetof(MD2Managed_t3678235734, ___x_8)); }
	inline ByteU5BU5D_t2082625487* get_x_8() const { return ___x_8; }
	inline ByteU5BU5D_t2082625487** get_address_of_x_8() { return &___x_8; }
	inline void set_x_8(ByteU5BU5D_t2082625487* value)
	{
		___x_8 = value;
		Il2CppCodeGenWriteBarrier((&___x_8), value);
	}
};

struct MD2Managed_t3678235734_StaticFields
{
public:
	// System.Byte[] Mono.Security.Cryptography.MD2Managed::PI_SUBST
	ByteU5BU5D_t2082625487* ___PI_SUBST_9;

public:
	inline static int32_t get_offset_of_PI_SUBST_9() { return static_cast<int32_t>(offsetof(MD2Managed_t3678235734_StaticFields, ___PI_SUBST_9)); }
	inline ByteU5BU5D_t2082625487* get_PI_SUBST_9() const { return ___PI_SUBST_9; }
	inline ByteU5BU5D_t2082625487** get_address_of_PI_SUBST_9() { return &___PI_SUBST_9; }
	inline void set_PI_SUBST_9(ByteU5BU5D_t2082625487* value)
	{
		___PI_SUBST_9 = value;
		Il2CppCodeGenWriteBarrier((&___PI_SUBST_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MD2MANAGED_T3678235734_H
#ifndef MD4MANAGED_T3082125420_H
#define MD4MANAGED_T3082125420_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.MD4Managed
struct  MD4Managed_t3082125420  : public MD4_t1561856440
{
public:
	// System.UInt32[] Mono.Security.Cryptography.MD4Managed::state
	UInt32U5BU5D_t3351239686* ___state_4;
	// System.Byte[] Mono.Security.Cryptography.MD4Managed::buffer
	ByteU5BU5D_t2082625487* ___buffer_5;
	// System.UInt32[] Mono.Security.Cryptography.MD4Managed::count
	UInt32U5BU5D_t3351239686* ___count_6;
	// System.UInt32[] Mono.Security.Cryptography.MD4Managed::x
	UInt32U5BU5D_t3351239686* ___x_7;
	// System.Byte[] Mono.Security.Cryptography.MD4Managed::digest
	ByteU5BU5D_t2082625487* ___digest_8;

public:
	inline static int32_t get_offset_of_state_4() { return static_cast<int32_t>(offsetof(MD4Managed_t3082125420, ___state_4)); }
	inline UInt32U5BU5D_t3351239686* get_state_4() const { return ___state_4; }
	inline UInt32U5BU5D_t3351239686** get_address_of_state_4() { return &___state_4; }
	inline void set_state_4(UInt32U5BU5D_t3351239686* value)
	{
		___state_4 = value;
		Il2CppCodeGenWriteBarrier((&___state_4), value);
	}

	inline static int32_t get_offset_of_buffer_5() { return static_cast<int32_t>(offsetof(MD4Managed_t3082125420, ___buffer_5)); }
	inline ByteU5BU5D_t2082625487* get_buffer_5() const { return ___buffer_5; }
	inline ByteU5BU5D_t2082625487** get_address_of_buffer_5() { return &___buffer_5; }
	inline void set_buffer_5(ByteU5BU5D_t2082625487* value)
	{
		___buffer_5 = value;
		Il2CppCodeGenWriteBarrier((&___buffer_5), value);
	}

	inline static int32_t get_offset_of_count_6() { return static_cast<int32_t>(offsetof(MD4Managed_t3082125420, ___count_6)); }
	inline UInt32U5BU5D_t3351239686* get_count_6() const { return ___count_6; }
	inline UInt32U5BU5D_t3351239686** get_address_of_count_6() { return &___count_6; }
	inline void set_count_6(UInt32U5BU5D_t3351239686* value)
	{
		___count_6 = value;
		Il2CppCodeGenWriteBarrier((&___count_6), value);
	}

	inline static int32_t get_offset_of_x_7() { return static_cast<int32_t>(offsetof(MD4Managed_t3082125420, ___x_7)); }
	inline UInt32U5BU5D_t3351239686* get_x_7() const { return ___x_7; }
	inline UInt32U5BU5D_t3351239686** get_address_of_x_7() { return &___x_7; }
	inline void set_x_7(UInt32U5BU5D_t3351239686* value)
	{
		___x_7 = value;
		Il2CppCodeGenWriteBarrier((&___x_7), value);
	}

	inline static int32_t get_offset_of_digest_8() { return static_cast<int32_t>(offsetof(MD4Managed_t3082125420, ___digest_8)); }
	inline ByteU5BU5D_t2082625487* get_digest_8() const { return ___digest_8; }
	inline ByteU5BU5D_t2082625487** get_address_of_digest_8() { return &___digest_8; }
	inline void set_digest_8(ByteU5BU5D_t2082625487* value)
	{
		___digest_8 = value;
		Il2CppCodeGenWriteBarrier((&___digest_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MD4MANAGED_T3082125420_H
#ifndef CONFIDENCEFACTOR_T2479975111_H
#define CONFIDENCEFACTOR_T2479975111_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.Prime.ConfidenceFactor
struct  ConfidenceFactor_t2479975111 
{
public:
	// System.Int32 Mono.Math.Prime.ConfidenceFactor::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ConfidenceFactor_t2479975111, ___value___1)); }
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
#endif // CONFIDENCEFACTOR_T2479975111_H
#ifndef ARITHMETICEXCEPTION_T77059102_H
#define ARITHMETICEXCEPTION_T77059102_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArithmeticException
struct  ArithmeticException_t77059102  : public SystemException_t856067145
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARITHMETICEXCEPTION_T77059102_H
#ifndef CONFIDENCEFACTOR_T2479975112_H
#define CONFIDENCEFACTOR_T2479975112_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.Prime.ConfidenceFactor
struct  ConfidenceFactor_t2479975112 
{
public:
	// System.Int32 Mono.Math.Prime.ConfidenceFactor::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ConfidenceFactor_t2479975112, ___value___1)); }
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
#endif // CONFIDENCEFACTOR_T2479975112_H
#ifndef NOTSUPPORTEDEXCEPTION_T3436490580_H
#define NOTSUPPORTEDEXCEPTION_T3436490580_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotSupportedException
struct  NotSupportedException_t3436490580  : public SystemException_t856067145
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTSUPPORTEDEXCEPTION_T3436490580_H
#ifndef DELEGATE_T2422993427_H
#define DELEGATE_T2422993427_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t2422993427  : public RuntimeObject
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
	DelegateData_t3388760574 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t2422993427, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t2422993427, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t2422993427, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t2422993427, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t2422993427, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t2422993427, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t2422993427, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t2422993427, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t2422993427, ___data_8)); }
	inline DelegateData_t3388760574 * get_data_8() const { return ___data_8; }
	inline DelegateData_t3388760574 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t3388760574 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T2422993427_H
#ifndef PADDINGMODE_T3667887856_H
#define PADDINGMODE_T3667887856_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.PaddingMode
struct  PaddingMode_t3667887856 
{
public:
	// System.Int32 System.Security.Cryptography.PaddingMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PaddingMode_t3667887856, ___value___1)); }
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
#endif // PADDINGMODE_T3667887856_H
#ifndef CIPHERMODE_T2633863610_H
#define CIPHERMODE_T2633863610_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CipherMode
struct  CipherMode_t2633863610 
{
public:
	// System.Int32 System.Security.Cryptography.CipherMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CipherMode_t2633863610, ___value___1)); }
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
#endif // CIPHERMODE_T2633863610_H
#ifndef OUTOFMEMORYEXCEPTION_T3546768104_H
#define OUTOFMEMORYEXCEPTION_T3546768104_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.OutOfMemoryException
struct  OutOfMemoryException_t3546768104  : public SystemException_t856067145
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OUTOFMEMORYEXCEPTION_T3546768104_H
#ifndef PLATFORMID_T675399565_H
#define PLATFORMID_T675399565_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.PlatformID
struct  PlatformID_t675399565 
{
public:
	// System.Int32 System.PlatformID::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PlatformID_t675399565, ___value___1)); }
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
#endif // PLATFORMID_T675399565_H
#ifndef RANKEXCEPTION_T979625556_H
#define RANKEXCEPTION_T979625556_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RankException
struct  RankException_t979625556  : public SystemException_t856067145
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANKEXCEPTION_T979625556_H
#ifndef RUNTIMEMETHODHANDLE_T3780496107_H
#define RUNTIMEMETHODHANDLE_T3780496107_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeMethodHandle
struct  RuntimeMethodHandle_t3780496107 
{
public:
	// System.IntPtr System.RuntimeMethodHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeMethodHandle_t3780496107, ___value_0)); }
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
#endif // RUNTIMEMETHODHANDLE_T3780496107_H
#ifndef STACKOVERFLOWEXCEPTION_T3854462613_H
#define STACKOVERFLOWEXCEPTION_T3854462613_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.StackOverflowException
struct  StackOverflowException_t3854462613  : public SystemException_t856067145
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STACKOVERFLOWEXCEPTION_T3854462613_H
#ifndef STRINGCOMPARISON_T2872670672_H
#define STRINGCOMPARISON_T2872670672_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.StringComparison
struct  StringComparison_t2872670672 
{
public:
	// System.Int32 System.StringComparison::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StringComparison_t2872670672, ___value___1)); }
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
#endif // STRINGCOMPARISON_T2872670672_H
#ifndef STRINGSPLITOPTIONS_T4258874580_H
#define STRINGSPLITOPTIONS_T4258874580_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.StringSplitOptions
struct  StringSplitOptions_t4258874580 
{
public:
	// System.Int32 System.StringSplitOptions::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StringSplitOptions_t4258874580, ___value___1)); }
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
#endif // STRINGSPLITOPTIONS_T4258874580_H
#ifndef CURRENTSYSTEMTIMEZONE_T3798914082_H
#define CURRENTSYSTEMTIMEZONE_T3798914082_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.CurrentSystemTimeZone
struct  CurrentSystemTimeZone_t3798914082  : public TimeZone_t4242859709
{
public:
	// System.String System.CurrentSystemTimeZone::m_standardName
	String_t* ___m_standardName_3;
	// System.String System.CurrentSystemTimeZone::m_daylightName
	String_t* ___m_daylightName_4;
	// System.Collections.Hashtable System.CurrentSystemTimeZone::m_CachedDaylightChanges
	Hashtable_t1655244623 * ___m_CachedDaylightChanges_5;
	// System.Int64 System.CurrentSystemTimeZone::m_ticksOffset
	int64_t ___m_ticksOffset_6;
	// System.TimeSpan System.CurrentSystemTimeZone::utcOffsetWithOutDLS
	TimeSpan_t511213213  ___utcOffsetWithOutDLS_7;
	// System.TimeSpan System.CurrentSystemTimeZone::utcOffsetWithDLS
	TimeSpan_t511213213  ___utcOffsetWithDLS_8;

public:
	inline static int32_t get_offset_of_m_standardName_3() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t3798914082, ___m_standardName_3)); }
	inline String_t* get_m_standardName_3() const { return ___m_standardName_3; }
	inline String_t** get_address_of_m_standardName_3() { return &___m_standardName_3; }
	inline void set_m_standardName_3(String_t* value)
	{
		___m_standardName_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_standardName_3), value);
	}

	inline static int32_t get_offset_of_m_daylightName_4() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t3798914082, ___m_daylightName_4)); }
	inline String_t* get_m_daylightName_4() const { return ___m_daylightName_4; }
	inline String_t** get_address_of_m_daylightName_4() { return &___m_daylightName_4; }
	inline void set_m_daylightName_4(String_t* value)
	{
		___m_daylightName_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_daylightName_4), value);
	}

	inline static int32_t get_offset_of_m_CachedDaylightChanges_5() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t3798914082, ___m_CachedDaylightChanges_5)); }
	inline Hashtable_t1655244623 * get_m_CachedDaylightChanges_5() const { return ___m_CachedDaylightChanges_5; }
	inline Hashtable_t1655244623 ** get_address_of_m_CachedDaylightChanges_5() { return &___m_CachedDaylightChanges_5; }
	inline void set_m_CachedDaylightChanges_5(Hashtable_t1655244623 * value)
	{
		___m_CachedDaylightChanges_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_CachedDaylightChanges_5), value);
	}

	inline static int32_t get_offset_of_m_ticksOffset_6() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t3798914082, ___m_ticksOffset_6)); }
	inline int64_t get_m_ticksOffset_6() const { return ___m_ticksOffset_6; }
	inline int64_t* get_address_of_m_ticksOffset_6() { return &___m_ticksOffset_6; }
	inline void set_m_ticksOffset_6(int64_t value)
	{
		___m_ticksOffset_6 = value;
	}

	inline static int32_t get_offset_of_utcOffsetWithOutDLS_7() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t3798914082, ___utcOffsetWithOutDLS_7)); }
	inline TimeSpan_t511213213  get_utcOffsetWithOutDLS_7() const { return ___utcOffsetWithOutDLS_7; }
	inline TimeSpan_t511213213 * get_address_of_utcOffsetWithOutDLS_7() { return &___utcOffsetWithOutDLS_7; }
	inline void set_utcOffsetWithOutDLS_7(TimeSpan_t511213213  value)
	{
		___utcOffsetWithOutDLS_7 = value;
	}

	inline static int32_t get_offset_of_utcOffsetWithDLS_8() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t3798914082, ___utcOffsetWithDLS_8)); }
	inline TimeSpan_t511213213  get_utcOffsetWithDLS_8() const { return ___utcOffsetWithDLS_8; }
	inline TimeSpan_t511213213 * get_address_of_utcOffsetWithDLS_8() { return &___utcOffsetWithDLS_8; }
	inline void set_utcOffsetWithDLS_8(TimeSpan_t511213213  value)
	{
		___utcOffsetWithDLS_8 = value;
	}
};

struct CurrentSystemTimeZone_t3798914082_StaticFields
{
public:
	// System.Int32 System.CurrentSystemTimeZone::this_year
	int32_t ___this_year_9;
	// System.Globalization.DaylightTime System.CurrentSystemTimeZone::this_year_dlt
	DaylightTime_t4160004796 * ___this_year_dlt_10;

public:
	inline static int32_t get_offset_of_this_year_9() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t3798914082_StaticFields, ___this_year_9)); }
	inline int32_t get_this_year_9() const { return ___this_year_9; }
	inline int32_t* get_address_of_this_year_9() { return &___this_year_9; }
	inline void set_this_year_9(int32_t value)
	{
		___this_year_9 = value;
	}

	inline static int32_t get_offset_of_this_year_dlt_10() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t3798914082_StaticFields, ___this_year_dlt_10)); }
	inline DaylightTime_t4160004796 * get_this_year_dlt_10() const { return ___this_year_dlt_10; }
	inline DaylightTime_t4160004796 ** get_address_of_this_year_dlt_10() { return &___this_year_dlt_10; }
	inline void set_this_year_dlt_10(DaylightTime_t4160004796 * value)
	{
		___this_year_dlt_10 = value;
		Il2CppCodeGenWriteBarrier((&___this_year_dlt_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CURRENTSYSTEMTIMEZONE_T3798914082_H
#ifndef TYPECODE_T844145206_H
#define TYPECODE_T844145206_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypeCode
struct  TypeCode_t844145206 
{
public:
	// System.Int32 System.TypeCode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TypeCode_t844145206, ___value___1)); }
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
#endif // TYPECODE_T844145206_H
#ifndef TYPEINITIALIZATIONEXCEPTION_T1062717930_H
#define TYPEINITIALIZATIONEXCEPTION_T1062717930_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypeInitializationException
struct  TypeInitializationException_t1062717930  : public SystemException_t856067145
{
public:
	// System.String System.TypeInitializationException::type_name
	String_t* ___type_name_11;

public:
	inline static int32_t get_offset_of_type_name_11() { return static_cast<int32_t>(offsetof(TypeInitializationException_t1062717930, ___type_name_11)); }
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
#endif // TYPEINITIALIZATIONEXCEPTION_T1062717930_H
#ifndef TYPELOADEXCEPTION_T1594567378_H
#define TYPELOADEXCEPTION_T1594567378_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypeLoadException
struct  TypeLoadException_t1594567378  : public SystemException_t856067145
{
public:
	// System.String System.TypeLoadException::className
	String_t* ___className_12;
	// System.String System.TypeLoadException::assemblyName
	String_t* ___assemblyName_13;

public:
	inline static int32_t get_offset_of_className_12() { return static_cast<int32_t>(offsetof(TypeLoadException_t1594567378, ___className_12)); }
	inline String_t* get_className_12() const { return ___className_12; }
	inline String_t** get_address_of_className_12() { return &___className_12; }
	inline void set_className_12(String_t* value)
	{
		___className_12 = value;
		Il2CppCodeGenWriteBarrier((&___className_12), value);
	}

	inline static int32_t get_offset_of_assemblyName_13() { return static_cast<int32_t>(offsetof(TypeLoadException_t1594567378, ___assemblyName_13)); }
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
#endif // TYPELOADEXCEPTION_T1594567378_H
#ifndef UNAUTHORIZEDACCESSEXCEPTION_T3422442481_H
#define UNAUTHORIZEDACCESSEXCEPTION_T3422442481_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnauthorizedAccessException
struct  UnauthorizedAccessException_t3422442481  : public SystemException_t856067145
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNAUTHORIZEDACCESSEXCEPTION_T3422442481_H
#ifndef SIGN_T897018574_H
#define SIGN_T897018574_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.BigInteger/Sign
struct  Sign_t897018574 
{
public:
	// System.Int32 Mono.Math.BigInteger/Sign::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Sign_t897018574, ___value___1)); }
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
#endif // SIGN_T897018574_H
#ifndef WEAKREFERENCE_T1023263538_H
#define WEAKREFERENCE_T1023263538_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.WeakReference
struct  WeakReference_t1023263538  : public RuntimeObject
{
public:
	// System.Boolean System.WeakReference::isLongReference
	bool ___isLongReference_0;
	// System.Runtime.InteropServices.GCHandle System.WeakReference::gcHandle
	GCHandle_t26721591  ___gcHandle_1;

public:
	inline static int32_t get_offset_of_isLongReference_0() { return static_cast<int32_t>(offsetof(WeakReference_t1023263538, ___isLongReference_0)); }
	inline bool get_isLongReference_0() const { return ___isLongReference_0; }
	inline bool* get_address_of_isLongReference_0() { return &___isLongReference_0; }
	inline void set_isLongReference_0(bool value)
	{
		___isLongReference_0 = value;
	}

	inline static int32_t get_offset_of_gcHandle_1() { return static_cast<int32_t>(offsetof(WeakReference_t1023263538, ___gcHandle_1)); }
	inline GCHandle_t26721591  get_gcHandle_1() const { return ___gcHandle_1; }
	inline GCHandle_t26721591 * get_address_of_gcHandle_1() { return &___gcHandle_1; }
	inline void set_gcHandle_1(GCHandle_t26721591  value)
	{
		___gcHandle_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEAKREFERENCE_T1023263538_H
#ifndef UNITYTYPE_T576954711_H
#define UNITYTYPE_T576954711_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnitySerializationHolder/UnityType
struct  UnityType_t576954711 
{
public:
	// System.Byte System.UnitySerializationHolder/UnityType::value__
	uint8_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UnityType_t576954711, ___value___1)); }
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
#endif // UNITYTYPE_T576954711_H
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3144279525_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3144279525_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t3144279525  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t3144279525_StaticFields
{
public:
	// <PrivateImplementationDetails>/$ArrayType$56 <PrivateImplementationDetails>::$$field-0
	U24ArrayTypeU2456_t3048275482  ___U24U24fieldU2D0_0;
	// <PrivateImplementationDetails>/$ArrayType$24 <PrivateImplementationDetails>::$$field-1
	U24ArrayTypeU2424_t3533350014  ___U24U24fieldU2D1_1;
	// <PrivateImplementationDetails>/$ArrayType$24 <PrivateImplementationDetails>::$$field-2
	U24ArrayTypeU2424_t3533350014  ___U24U24fieldU2D2_2;
	// <PrivateImplementationDetails>/$ArrayType$24 <PrivateImplementationDetails>::$$field-3
	U24ArrayTypeU2424_t3533350014  ___U24U24fieldU2D3_3;
	// <PrivateImplementationDetails>/$ArrayType$24 <PrivateImplementationDetails>::$$field-4
	U24ArrayTypeU2424_t3533350014  ___U24U24fieldU2D4_4;
	// <PrivateImplementationDetails>/$ArrayType$16 <PrivateImplementationDetails>::$$field-5
	U24ArrayTypeU2416_t1729160021  ___U24U24fieldU2D5_5;
	// <PrivateImplementationDetails>/$ArrayType$16 <PrivateImplementationDetails>::$$field-6
	U24ArrayTypeU2416_t1729160021  ___U24U24fieldU2D6_6;
	// <PrivateImplementationDetails>/$ArrayType$3132 <PrivateImplementationDetails>::$$field-15
	U24ArrayTypeU243132_t3471060236  ___U24U24fieldU2D15_7;
	// <PrivateImplementationDetails>/$ArrayType$20 <PrivateImplementationDetails>::$$field-16
	U24ArrayTypeU2420_t2842077923  ___U24U24fieldU2D16_8;
	// <PrivateImplementationDetails>/$ArrayType$32 <PrivateImplementationDetails>::$$field-17
	U24ArrayTypeU2432_t2663078516  ___U24U24fieldU2D17_9;
	// <PrivateImplementationDetails>/$ArrayType$48 <PrivateImplementationDetails>::$$field-18
	U24ArrayTypeU2448_t1477348490  ___U24U24fieldU2D18_10;
	// <PrivateImplementationDetails>/$ArrayType$64 <PrivateImplementationDetails>::$$field-19
	U24ArrayTypeU2464_t1806936230  ___U24U24fieldU2D19_11;
	// <PrivateImplementationDetails>/$ArrayType$64 <PrivateImplementationDetails>::$$field-20
	U24ArrayTypeU2464_t1806936230  ___U24U24fieldU2D20_12;
	// <PrivateImplementationDetails>/$ArrayType$64 <PrivateImplementationDetails>::$$field-21
	U24ArrayTypeU2464_t1806936230  ___U24U24fieldU2D21_13;
	// <PrivateImplementationDetails>/$ArrayType$64 <PrivateImplementationDetails>::$$field-22
	U24ArrayTypeU2464_t1806936230  ___U24U24fieldU2D22_14;
	// <PrivateImplementationDetails>/$ArrayType$12 <PrivateImplementationDetails>::$$field-23
	U24ArrayTypeU2412_t1613890990  ___U24U24fieldU2D23_15;
	// <PrivateImplementationDetails>/$ArrayType$12 <PrivateImplementationDetails>::$$field-24
	U24ArrayTypeU2412_t1613890990  ___U24U24fieldU2D24_16;
	// <PrivateImplementationDetails>/$ArrayType$12 <PrivateImplementationDetails>::$$field-25
	U24ArrayTypeU2412_t1613890990  ___U24U24fieldU2D25_17;
	// <PrivateImplementationDetails>/$ArrayType$16 <PrivateImplementationDetails>::$$field-26
	U24ArrayTypeU2416_t1729160021  ___U24U24fieldU2D26_18;
	// <PrivateImplementationDetails>/$ArrayType$136 <PrivateImplementationDetails>::$$field-27
	U24ArrayTypeU24136_t2569156269  ___U24U24fieldU2D27_19;
	// <PrivateImplementationDetails>/$ArrayType$72 <PrivateImplementationDetails>::$$field-30
	U24ArrayTypeU2472_t1440235392  ___U24U24fieldU2D30_20;
	// <PrivateImplementationDetails>/$ArrayType$8 <PrivateImplementationDetails>::$$field-31
	U24ArrayTypeU248_t3144299232  ___U24U24fieldU2D31_21;
	// <PrivateImplementationDetails>/$ArrayType$20 <PrivateImplementationDetails>::$$field-32
	U24ArrayTypeU2420_t2842077923  ___U24U24fieldU2D32_22;
	// <PrivateImplementationDetails>/$ArrayType$64 <PrivateImplementationDetails>::$$field-33
	U24ArrayTypeU2464_t1806936230  ___U24U24fieldU2D33_23;
	// <PrivateImplementationDetails>/$ArrayType$124 <PrivateImplementationDetails>::$$field-34
	U24ArrayTypeU24124_t3776489364  ___U24U24fieldU2D34_24;
	// <PrivateImplementationDetails>/$ArrayType$32 <PrivateImplementationDetails>::$$field-35
	U24ArrayTypeU2432_t2663078516  ___U24U24fieldU2D35_25;
	// <PrivateImplementationDetails>/$ArrayType$96 <PrivateImplementationDetails>::$$field-36
	U24ArrayTypeU2496_t1251209259  ___U24U24fieldU2D36_26;
	// <PrivateImplementationDetails>/$ArrayType$2048 <PrivateImplementationDetails>::$$field-37
	U24ArrayTypeU242048_t3502187460  ___U24U24fieldU2D37_27;
	// <PrivateImplementationDetails>/$ArrayType$56 <PrivateImplementationDetails>::$$field-38
	U24ArrayTypeU2456_t3048275482  ___U24U24fieldU2D38_28;
	// <PrivateImplementationDetails>/$ArrayType$16 <PrivateImplementationDetails>::$$field-39
	U24ArrayTypeU2416_t1729160021  ___U24U24fieldU2D39_29;
	// <PrivateImplementationDetails>/$ArrayType$48 <PrivateImplementationDetails>::$$field-40
	U24ArrayTypeU2448_t1477348490  ___U24U24fieldU2D40_30;
	// <PrivateImplementationDetails>/$ArrayType$2048 <PrivateImplementationDetails>::$$field-41
	U24ArrayTypeU242048_t3502187460  ___U24U24fieldU2D41_31;
	// <PrivateImplementationDetails>/$ArrayType$2048 <PrivateImplementationDetails>::$$field-42
	U24ArrayTypeU242048_t3502187460  ___U24U24fieldU2D42_32;
	// <PrivateImplementationDetails>/$ArrayType$256 <PrivateImplementationDetails>::$$field-43
	U24ArrayTypeU24256_t2959064577  ___U24U24fieldU2D43_33;
	// <PrivateImplementationDetails>/$ArrayType$256 <PrivateImplementationDetails>::$$field-44
	U24ArrayTypeU24256_t2959064577  ___U24U24fieldU2D44_34;
	// <PrivateImplementationDetails>/$ArrayType$120 <PrivateImplementationDetails>::$$field-45
	U24ArrayTypeU24120_t102593309  ___U24U24fieldU2D45_35;
	// <PrivateImplementationDetails>/$ArrayType$256 <PrivateImplementationDetails>::$$field-46
	U24ArrayTypeU24256_t2959064577  ___U24U24fieldU2D46_36;
	// <PrivateImplementationDetails>/$ArrayType$256 <PrivateImplementationDetails>::$$field-47
	U24ArrayTypeU24256_t2959064577  ___U24U24fieldU2D47_37;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-48
	U24ArrayTypeU241024_t512068566  ___U24U24fieldU2D48_38;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-49
	U24ArrayTypeU241024_t512068566  ___U24U24fieldU2D49_39;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-50
	U24ArrayTypeU241024_t512068566  ___U24U24fieldU2D50_40;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-51
	U24ArrayTypeU241024_t512068566  ___U24U24fieldU2D51_41;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-52
	U24ArrayTypeU241024_t512068566  ___U24U24fieldU2D52_42;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-53
	U24ArrayTypeU241024_t512068566  ___U24U24fieldU2D53_43;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-54
	U24ArrayTypeU241024_t512068566  ___U24U24fieldU2D54_44;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-55
	U24ArrayTypeU241024_t512068566  ___U24U24fieldU2D55_45;
	// <PrivateImplementationDetails>/$ArrayType$256 <PrivateImplementationDetails>::$$field-56
	U24ArrayTypeU24256_t2959064577  ___U24U24fieldU2D56_46;
	// <PrivateImplementationDetails>/$ArrayType$640 <PrivateImplementationDetails>::$$field-57
	U24ArrayTypeU24640_t3354467406  ___U24U24fieldU2D57_47;
	// <PrivateImplementationDetails>/$ArrayType$12 <PrivateImplementationDetails>::$$field-60
	U24ArrayTypeU2412_t1613890990  ___U24U24fieldU2D60_48;
	// <PrivateImplementationDetails>/$ArrayType$128 <PrivateImplementationDetails>::$$field-62
	U24ArrayTypeU24128_t2277346503  ___U24U24fieldU2D62_49;
	// <PrivateImplementationDetails>/$ArrayType$256 <PrivateImplementationDetails>::$$field-63
	U24ArrayTypeU24256_t2959064577  ___U24U24fieldU2D63_50;
	// <PrivateImplementationDetails>/$ArrayType$52 <PrivateImplementationDetails>::$$field-64
	U24ArrayTypeU2452_t263736692  ___U24U24fieldU2D64_51;
	// <PrivateImplementationDetails>/$ArrayType$52 <PrivateImplementationDetails>::$$field-65
	U24ArrayTypeU2452_t263736692  ___U24U24fieldU2D65_52;

public:
	inline static int32_t get_offset_of_U24U24fieldU2D0_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3144279525_StaticFields, ___U24U24fieldU2D0_0)); }
	inline U24ArrayTypeU2456_t3048275482  get_U24U24fieldU2D0_0() const { return ___U24U24fieldU2D0_0; }
	inline U24ArrayTypeU2456_t3048275482 * get_address_of_U24U24fieldU2D0_0() { return &___U24U24fieldU2D0_0; }
	inline void set_U24U24fieldU2D0_0(U24ArrayTypeU2456_t3048275482  value)
	{
		___U24U24fieldU2D0_0 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D1_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3144279525_StaticFields, ___U24U24fieldU2D1_1)); }
	inline U24ArrayTypeU2424_t3533350014  get_U24U24fieldU2D1_1() const { return ___U24U24fieldU2D1_1; }
	inline U24ArrayTypeU2424_t3533350014 * get_address_of_U24U24fieldU2D1_1() { return &___U24U24fieldU2D1_1; }
	inline void set_U24U24fieldU2D1_1(U24ArrayTypeU2424_t3533350014  value)
	{
		___U24U24fieldU2D1_1 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D2_2() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3144279525_StaticFields, ___U24U24fieldU2D2_2)); }
	inline U24ArrayTypeU2424_t3533350014  get_U24U24fieldU2D2_2() const { return ___U24U24fieldU2D2_2; }
	inline U24ArrayTypeU2424_t3533350014 * get_address_of_U24U24fieldU2D2_2() { return &___U24U24fieldU2D2_2; }
	inline void set_U24U24fieldU2D2_2(U24ArrayTypeU2424_t3533350014  value)
	{
		___U24U24fieldU2D2_2 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D3_3() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3144279525_StaticFields, ___U24U24fieldU2D3_3)); }
	inline U24ArrayTypeU2424_t3533350014  get_U24U24fieldU2D3_3() const { return ___U24U24fieldU2D3_3; }
	inline U24ArrayTypeU2424_t3533350014 * get_address_of_U24U24fieldU2D3_3() { return &___U24U24fieldU2D3_3; }
	inline void set_U24U24fieldU2D3_3(U24ArrayTypeU2424_t3533350014  value)
	{
		___U24U24fieldU2D3_3 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D4_4() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3144279525_StaticFields, ___U24U24fieldU2D4_4)); }
	inline U24ArrayTypeU2424_t3533350014  get_U24U24fieldU2D4_4() const { return ___U24U24fieldU2D4_4; }
	inline U24ArrayTypeU2424_t3533350014 * get_address_of_U24U24fieldU2D4_4() { return &___U24U24fieldU2D4_4; }
	inline void set_U24U24fieldU2D4_4(U24ArrayTypeU2424_t3533350014  value)
	{
		___U24U24fieldU2D4_4 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D5_5() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3144279525_StaticFields, ___U24U24fieldU2D5_5)); }
	inline U24ArrayTypeU2416_t1729160021  get_U24U24fieldU2D5_5() const { return ___U24U24fieldU2D5_5; }
	inline U24ArrayTypeU2416_t1729160021 * get_address_of_U24U24fieldU2D5_5() { return &___U24U24fieldU2D5_5; }
	inline void set_U24U24fieldU2D5_5(U24ArrayTypeU2416_t1729160021  value)
	{
		___U24U24fieldU2D5_5 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D6_6() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3144279525_StaticFields, ___U24U24fieldU2D6_6)); }
	inline U24ArrayTypeU2416_t1729160021  get_U24U24fieldU2D6_6() const { return ___U24U24fieldU2D6_6; }
	inline U24ArrayTypeU2416_t1729160021 * get_address_of_U24U24fieldU2D6_6() { return &___U24U24fieldU2D6_6; }
	inline void set_U24U24fieldU2D6_6(U24ArrayTypeU2416_t1729160021  value)
	{
		___U24U24fieldU2D6_6 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D15_7() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3144279525_StaticFields, ___U24U24fieldU2D15_7)); }
	inline U24ArrayTypeU243132_t3471060236  get_U24U24fieldU2D15_7() const { return ___U24U24fieldU2D15_7; }
	inline U24ArrayTypeU243132_t3471060236 * get_address_of_U24U24fieldU2D15_7() { return &___U24U24fieldU2D15_7; }
	inline void set_U24U24fieldU2D15_7(U24ArrayTypeU243132_t3471060236  value)
	{
		___U24U24fieldU2D15_7 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D16_8() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3144279525_StaticFields, ___U24U24fieldU2D16_8)); }
	inline U24ArrayTypeU2420_t2842077923  get_U24U24fieldU2D16_8() const { return ___U24U24fieldU2D16_8; }
	inline U24ArrayTypeU2420_t2842077923 * get_address_of_U24U24fieldU2D16_8() { return &___U24U24fieldU2D16_8; }
	inline void set_U24U24fieldU2D16_8(U24ArrayTypeU2420_t2842077923  value)
	{
		___U24U24fieldU2D16_8 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D17_9() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3144279525_StaticFields, ___U24U24fieldU2D17_9)); }
	inline U24ArrayTypeU2432_t2663078516  get_U24U24fieldU2D17_9() const { return ___U24U24fieldU2D17_9; }
	inline U24ArrayTypeU2432_t2663078516 * get_address_of_U24U24fieldU2D17_9() { return &___U24U24fieldU2D17_9; }
	inline void set_U24U24fieldU2D17_9(U24ArrayTypeU2432_t2663078516  value)
	{
		___U24U24fieldU2D17_9 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D18_10() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3144279525_StaticFields, ___U24U24fieldU2D18_10)); }
	inline U24ArrayTypeU2448_t1477348490  get_U24U24fieldU2D18_10() const { return ___U24U24fieldU2D18_10; }
	inline U24ArrayTypeU2448_t1477348490 * get_address_of_U24U24fieldU2D18_10() { return &___U24U24fieldU2D18_10; }
	inline void set_U24U24fieldU2D18_10(U24ArrayTypeU2448_t1477348490  value)
	{
		___U24U24fieldU2D18_10 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D19_11() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3144279525_StaticFields, ___U24U24fieldU2D19_11)); }
	inline U24ArrayTypeU2464_t1806936230  get_U24U24fieldU2D19_11() const { return ___U24U24fieldU2D19_11; }
	inline U24ArrayTypeU2464_t1806936230 * get_address_of_U24U24fieldU2D19_11() { return &___U24U24fieldU2D19_11; }
	inline void set_U24U24fieldU2D19_11(U24ArrayTypeU2464_t1806936230  value)
	{
		___U24U24fieldU2D19_11 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D20_12() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3144279525_StaticFields, ___U24U24fieldU2D20_12)); }
	inline U24ArrayTypeU2464_t1806936230  get_U24U24fieldU2D20_12() const { return ___U24U24fieldU2D20_12; }
	inline U24ArrayTypeU2464_t1806936230 * get_address_of_U24U24fieldU2D20_12() { return &___U24U24fieldU2D20_12; }
	inline void set_U24U24fieldU2D20_12(U24ArrayTypeU2464_t1806936230  value)
	{
		___U24U24fieldU2D20_12 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D21_13() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3144279525_StaticFields, ___U24U24fieldU2D21_13)); }
	inline U24ArrayTypeU2464_t1806936230  get_U24U24fieldU2D21_13() const { return ___U24U24fieldU2D21_13; }
	inline U24ArrayTypeU2464_t1806936230 * get_address_of_U24U24fieldU2D21_13() { return &___U24U24fieldU2D21_13; }
	inline void set_U24U24fieldU2D21_13(U24ArrayTypeU2464_t1806936230  value)
	{
		___U24U24fieldU2D21_13 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D22_14() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3144279525_StaticFields, ___U24U24fieldU2D22_14)); }
	inline U24ArrayTypeU2464_t1806936230  get_U24U24fieldU2D22_14() const { return ___U24U24fieldU2D22_14; }
	inline U24ArrayTypeU2464_t1806936230 * get_address_of_U24U24fieldU2D22_14() { return &___U24U24fieldU2D22_14; }
	inline void set_U24U24fieldU2D22_14(U24ArrayTypeU2464_t1806936230  value)
	{
		___U24U24fieldU2D22_14 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D23_15() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3144279525_StaticFields, ___U24U24fieldU2D23_15)); }
	inline U24ArrayTypeU2412_t1613890990  get_U24U24fieldU2D23_15() const { return ___U24U24fieldU2D23_15; }
	inline U24ArrayTypeU2412_t1613890990 * get_address_of_U24U24fieldU2D23_15() { return &___U24U24fieldU2D23_15; }
	inline void set_U24U24fieldU2D23_15(U24ArrayTypeU2412_t1613890990  value)
	{
		___U24U24fieldU2D23_15 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D24_16() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3144279525_StaticFields, ___U24U24fieldU2D24_16)); }
	inline U24ArrayTypeU2412_t1613890990  get_U24U24fieldU2D24_16() const { return ___U24U24fieldU2D24_16; }
	inline U24ArrayTypeU2412_t1613890990 * get_address_of_U24U24fieldU2D24_16() { return &___U24U24fieldU2D24_16; }
	inline void set_U24U24fieldU2D24_16(U24ArrayTypeU2412_t1613890990  value)
	{
		___U24U24fieldU2D24_16 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D25_17() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3144279525_StaticFields, ___U24U24fieldU2D25_17)); }
	inline U24ArrayTypeU2412_t1613890990  get_U24U24fieldU2D25_17() const { return ___U24U24fieldU2D25_17; }
	inline U24ArrayTypeU2412_t1613890990 * get_address_of_U24U24fieldU2D25_17() { return &___U24U24fieldU2D25_17; }
	inline void set_U24U24fieldU2D25_17(U24ArrayTypeU2412_t1613890990  value)
	{
		___U24U24fieldU2D25_17 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D26_18() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3144279525_StaticFields, ___U24U24fieldU2D26_18)); }
	inline U24ArrayTypeU2416_t1729160021  get_U24U24fieldU2D26_18() const { return ___U24U24fieldU2D26_18; }
	inline U24ArrayTypeU2416_t1729160021 * get_address_of_U24U24fieldU2D26_18() { return &___U24U24fieldU2D26_18; }
	inline void set_U24U24fieldU2D26_18(U24ArrayTypeU2416_t1729160021  value)
	{
		___U24U24fieldU2D26_18 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D27_19() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3144279525_StaticFields, ___U24U24fieldU2D27_19)); }
	inline U24ArrayTypeU24136_t2569156269  get_U24U24fieldU2D27_19() const { return ___U24U24fieldU2D27_19; }
	inline U24ArrayTypeU24136_t2569156269 * get_address_of_U24U24fieldU2D27_19() { return &___U24U24fieldU2D27_19; }
	inline void set_U24U24fieldU2D27_19(U24ArrayTypeU24136_t2569156269  value)
	{
		___U24U24fieldU2D27_19 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D30_20() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3144279525_StaticFields, ___U24U24fieldU2D30_20)); }
	inline U24ArrayTypeU2472_t1440235392  get_U24U24fieldU2D30_20() const { return ___U24U24fieldU2D30_20; }
	inline U24ArrayTypeU2472_t1440235392 * get_address_of_U24U24fieldU2D30_20() { return &___U24U24fieldU2D30_20; }
	inline void set_U24U24fieldU2D30_20(U24ArrayTypeU2472_t1440235392  value)
	{
		___U24U24fieldU2D30_20 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D31_21() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3144279525_StaticFields, ___U24U24fieldU2D31_21)); }
	inline U24ArrayTypeU248_t3144299232  get_U24U24fieldU2D31_21() const { return ___U24U24fieldU2D31_21; }
	inline U24ArrayTypeU248_t3144299232 * get_address_of_U24U24fieldU2D31_21() { return &___U24U24fieldU2D31_21; }
	inline void set_U24U24fieldU2D31_21(U24ArrayTypeU248_t3144299232  value)
	{
		___U24U24fieldU2D31_21 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D32_22() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3144279525_StaticFields, ___U24U24fieldU2D32_22)); }
	inline U24ArrayTypeU2420_t2842077923  get_U24U24fieldU2D32_22() const { return ___U24U24fieldU2D32_22; }
	inline U24ArrayTypeU2420_t2842077923 * get_address_of_U24U24fieldU2D32_22() { return &___U24U24fieldU2D32_22; }
	inline void set_U24U24fieldU2D32_22(U24ArrayTypeU2420_t2842077923  value)
	{
		___U24U24fieldU2D32_22 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D33_23() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3144279525_StaticFields, ___U24U24fieldU2D33_23)); }
	inline U24ArrayTypeU2464_t1806936230  get_U24U24fieldU2D33_23() const { return ___U24U24fieldU2D33_23; }
	inline U24ArrayTypeU2464_t1806936230 * get_address_of_U24U24fieldU2D33_23() { return &___U24U24fieldU2D33_23; }
	inline void set_U24U24fieldU2D33_23(U24ArrayTypeU2464_t1806936230  value)
	{
		___U24U24fieldU2D33_23 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D34_24() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3144279525_StaticFields, ___U24U24fieldU2D34_24)); }
	inline U24ArrayTypeU24124_t3776489364  get_U24U24fieldU2D34_24() const { return ___U24U24fieldU2D34_24; }
	inline U24ArrayTypeU24124_t3776489364 * get_address_of_U24U24fieldU2D34_24() { return &___U24U24fieldU2D34_24; }
	inline void set_U24U24fieldU2D34_24(U24ArrayTypeU24124_t3776489364  value)
	{
		___U24U24fieldU2D34_24 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D35_25() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3144279525_StaticFields, ___U24U24fieldU2D35_25)); }
	inline U24ArrayTypeU2432_t2663078516  get_U24U24fieldU2D35_25() const { return ___U24U24fieldU2D35_25; }
	inline U24ArrayTypeU2432_t2663078516 * get_address_of_U24U24fieldU2D35_25() { return &___U24U24fieldU2D35_25; }
	inline void set_U24U24fieldU2D35_25(U24ArrayTypeU2432_t2663078516  value)
	{
		___U24U24fieldU2D35_25 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D36_26() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3144279525_StaticFields, ___U24U24fieldU2D36_26)); }
	inline U24ArrayTypeU2496_t1251209259  get_U24U24fieldU2D36_26() const { return ___U24U24fieldU2D36_26; }
	inline U24ArrayTypeU2496_t1251209259 * get_address_of_U24U24fieldU2D36_26() { return &___U24U24fieldU2D36_26; }
	inline void set_U24U24fieldU2D36_26(U24ArrayTypeU2496_t1251209259  value)
	{
		___U24U24fieldU2D36_26 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D37_27() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3144279525_StaticFields, ___U24U24fieldU2D37_27)); }
	inline U24ArrayTypeU242048_t3502187460  get_U24U24fieldU2D37_27() const { return ___U24U24fieldU2D37_27; }
	inline U24ArrayTypeU242048_t3502187460 * get_address_of_U24U24fieldU2D37_27() { return &___U24U24fieldU2D37_27; }
	inline void set_U24U24fieldU2D37_27(U24ArrayTypeU242048_t3502187460  value)
	{
		___U24U24fieldU2D37_27 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D38_28() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3144279525_StaticFields, ___U24U24fieldU2D38_28)); }
	inline U24ArrayTypeU2456_t3048275482  get_U24U24fieldU2D38_28() const { return ___U24U24fieldU2D38_28; }
	inline U24ArrayTypeU2456_t3048275482 * get_address_of_U24U24fieldU2D38_28() { return &___U24U24fieldU2D38_28; }
	inline void set_U24U24fieldU2D38_28(U24ArrayTypeU2456_t3048275482  value)
	{
		___U24U24fieldU2D38_28 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D39_29() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3144279525_StaticFields, ___U24U24fieldU2D39_29)); }
	inline U24ArrayTypeU2416_t1729160021  get_U24U24fieldU2D39_29() const { return ___U24U24fieldU2D39_29; }
	inline U24ArrayTypeU2416_t1729160021 * get_address_of_U24U24fieldU2D39_29() { return &___U24U24fieldU2D39_29; }
	inline void set_U24U24fieldU2D39_29(U24ArrayTypeU2416_t1729160021  value)
	{
		___U24U24fieldU2D39_29 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D40_30() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3144279525_StaticFields, ___U24U24fieldU2D40_30)); }
	inline U24ArrayTypeU2448_t1477348490  get_U24U24fieldU2D40_30() const { return ___U24U24fieldU2D40_30; }
	inline U24ArrayTypeU2448_t1477348490 * get_address_of_U24U24fieldU2D40_30() { return &___U24U24fieldU2D40_30; }
	inline void set_U24U24fieldU2D40_30(U24ArrayTypeU2448_t1477348490  value)
	{
		___U24U24fieldU2D40_30 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D41_31() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3144279525_StaticFields, ___U24U24fieldU2D41_31)); }
	inline U24ArrayTypeU242048_t3502187460  get_U24U24fieldU2D41_31() const { return ___U24U24fieldU2D41_31; }
	inline U24ArrayTypeU242048_t3502187460 * get_address_of_U24U24fieldU2D41_31() { return &___U24U24fieldU2D41_31; }
	inline void set_U24U24fieldU2D41_31(U24ArrayTypeU242048_t3502187460  value)
	{
		___U24U24fieldU2D41_31 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D42_32() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3144279525_StaticFields, ___U24U24fieldU2D42_32)); }
	inline U24ArrayTypeU242048_t3502187460  get_U24U24fieldU2D42_32() const { return ___U24U24fieldU2D42_32; }
	inline U24ArrayTypeU242048_t3502187460 * get_address_of_U24U24fieldU2D42_32() { return &___U24U24fieldU2D42_32; }
	inline void set_U24U24fieldU2D42_32(U24ArrayTypeU242048_t3502187460  value)
	{
		___U24U24fieldU2D42_32 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D43_33() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3144279525_StaticFields, ___U24U24fieldU2D43_33)); }
	inline U24ArrayTypeU24256_t2959064577  get_U24U24fieldU2D43_33() const { return ___U24U24fieldU2D43_33; }
	inline U24ArrayTypeU24256_t2959064577 * get_address_of_U24U24fieldU2D43_33() { return &___U24U24fieldU2D43_33; }
	inline void set_U24U24fieldU2D43_33(U24ArrayTypeU24256_t2959064577  value)
	{
		___U24U24fieldU2D43_33 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D44_34() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3144279525_StaticFields, ___U24U24fieldU2D44_34)); }
	inline U24ArrayTypeU24256_t2959064577  get_U24U24fieldU2D44_34() const { return ___U24U24fieldU2D44_34; }
	inline U24ArrayTypeU24256_t2959064577 * get_address_of_U24U24fieldU2D44_34() { return &___U24U24fieldU2D44_34; }
	inline void set_U24U24fieldU2D44_34(U24ArrayTypeU24256_t2959064577  value)
	{
		___U24U24fieldU2D44_34 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D45_35() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3144279525_StaticFields, ___U24U24fieldU2D45_35)); }
	inline U24ArrayTypeU24120_t102593309  get_U24U24fieldU2D45_35() const { return ___U24U24fieldU2D45_35; }
	inline U24ArrayTypeU24120_t102593309 * get_address_of_U24U24fieldU2D45_35() { return &___U24U24fieldU2D45_35; }
	inline void set_U24U24fieldU2D45_35(U24ArrayTypeU24120_t102593309  value)
	{
		___U24U24fieldU2D45_35 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D46_36() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3144279525_StaticFields, ___U24U24fieldU2D46_36)); }
	inline U24ArrayTypeU24256_t2959064577  get_U24U24fieldU2D46_36() const { return ___U24U24fieldU2D46_36; }
	inline U24ArrayTypeU24256_t2959064577 * get_address_of_U24U24fieldU2D46_36() { return &___U24U24fieldU2D46_36; }
	inline void set_U24U24fieldU2D46_36(U24ArrayTypeU24256_t2959064577  value)
	{
		___U24U24fieldU2D46_36 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D47_37() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3144279525_StaticFields, ___U24U24fieldU2D47_37)); }
	inline U24ArrayTypeU24256_t2959064577  get_U24U24fieldU2D47_37() const { return ___U24U24fieldU2D47_37; }
	inline U24ArrayTypeU24256_t2959064577 * get_address_of_U24U24fieldU2D47_37() { return &___U24U24fieldU2D47_37; }
	inline void set_U24U24fieldU2D47_37(U24ArrayTypeU24256_t2959064577  value)
	{
		___U24U24fieldU2D47_37 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D48_38() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3144279525_StaticFields, ___U24U24fieldU2D48_38)); }
	inline U24ArrayTypeU241024_t512068566  get_U24U24fieldU2D48_38() const { return ___U24U24fieldU2D48_38; }
	inline U24ArrayTypeU241024_t512068566 * get_address_of_U24U24fieldU2D48_38() { return &___U24U24fieldU2D48_38; }
	inline void set_U24U24fieldU2D48_38(U24ArrayTypeU241024_t512068566  value)
	{
		___U24U24fieldU2D48_38 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D49_39() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3144279525_StaticFields, ___U24U24fieldU2D49_39)); }
	inline U24ArrayTypeU241024_t512068566  get_U24U24fieldU2D49_39() const { return ___U24U24fieldU2D49_39; }
	inline U24ArrayTypeU241024_t512068566 * get_address_of_U24U24fieldU2D49_39() { return &___U24U24fieldU2D49_39; }
	inline void set_U24U24fieldU2D49_39(U24ArrayTypeU241024_t512068566  value)
	{
		___U24U24fieldU2D49_39 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D50_40() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3144279525_StaticFields, ___U24U24fieldU2D50_40)); }
	inline U24ArrayTypeU241024_t512068566  get_U24U24fieldU2D50_40() const { return ___U24U24fieldU2D50_40; }
	inline U24ArrayTypeU241024_t512068566 * get_address_of_U24U24fieldU2D50_40() { return &___U24U24fieldU2D50_40; }
	inline void set_U24U24fieldU2D50_40(U24ArrayTypeU241024_t512068566  value)
	{
		___U24U24fieldU2D50_40 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D51_41() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3144279525_StaticFields, ___U24U24fieldU2D51_41)); }
	inline U24ArrayTypeU241024_t512068566  get_U24U24fieldU2D51_41() const { return ___U24U24fieldU2D51_41; }
	inline U24ArrayTypeU241024_t512068566 * get_address_of_U24U24fieldU2D51_41() { return &___U24U24fieldU2D51_41; }
	inline void set_U24U24fieldU2D51_41(U24ArrayTypeU241024_t512068566  value)
	{
		___U24U24fieldU2D51_41 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D52_42() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3144279525_StaticFields, ___U24U24fieldU2D52_42)); }
	inline U24ArrayTypeU241024_t512068566  get_U24U24fieldU2D52_42() const { return ___U24U24fieldU2D52_42; }
	inline U24ArrayTypeU241024_t512068566 * get_address_of_U24U24fieldU2D52_42() { return &___U24U24fieldU2D52_42; }
	inline void set_U24U24fieldU2D52_42(U24ArrayTypeU241024_t512068566  value)
	{
		___U24U24fieldU2D52_42 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D53_43() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3144279525_StaticFields, ___U24U24fieldU2D53_43)); }
	inline U24ArrayTypeU241024_t512068566  get_U24U24fieldU2D53_43() const { return ___U24U24fieldU2D53_43; }
	inline U24ArrayTypeU241024_t512068566 * get_address_of_U24U24fieldU2D53_43() { return &___U24U24fieldU2D53_43; }
	inline void set_U24U24fieldU2D53_43(U24ArrayTypeU241024_t512068566  value)
	{
		___U24U24fieldU2D53_43 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D54_44() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3144279525_StaticFields, ___U24U24fieldU2D54_44)); }
	inline U24ArrayTypeU241024_t512068566  get_U24U24fieldU2D54_44() const { return ___U24U24fieldU2D54_44; }
	inline U24ArrayTypeU241024_t512068566 * get_address_of_U24U24fieldU2D54_44() { return &___U24U24fieldU2D54_44; }
	inline void set_U24U24fieldU2D54_44(U24ArrayTypeU241024_t512068566  value)
	{
		___U24U24fieldU2D54_44 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D55_45() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3144279525_StaticFields, ___U24U24fieldU2D55_45)); }
	inline U24ArrayTypeU241024_t512068566  get_U24U24fieldU2D55_45() const { return ___U24U24fieldU2D55_45; }
	inline U24ArrayTypeU241024_t512068566 * get_address_of_U24U24fieldU2D55_45() { return &___U24U24fieldU2D55_45; }
	inline void set_U24U24fieldU2D55_45(U24ArrayTypeU241024_t512068566  value)
	{
		___U24U24fieldU2D55_45 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D56_46() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3144279525_StaticFields, ___U24U24fieldU2D56_46)); }
	inline U24ArrayTypeU24256_t2959064577  get_U24U24fieldU2D56_46() const { return ___U24U24fieldU2D56_46; }
	inline U24ArrayTypeU24256_t2959064577 * get_address_of_U24U24fieldU2D56_46() { return &___U24U24fieldU2D56_46; }
	inline void set_U24U24fieldU2D56_46(U24ArrayTypeU24256_t2959064577  value)
	{
		___U24U24fieldU2D56_46 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D57_47() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3144279525_StaticFields, ___U24U24fieldU2D57_47)); }
	inline U24ArrayTypeU24640_t3354467406  get_U24U24fieldU2D57_47() const { return ___U24U24fieldU2D57_47; }
	inline U24ArrayTypeU24640_t3354467406 * get_address_of_U24U24fieldU2D57_47() { return &___U24U24fieldU2D57_47; }
	inline void set_U24U24fieldU2D57_47(U24ArrayTypeU24640_t3354467406  value)
	{
		___U24U24fieldU2D57_47 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D60_48() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3144279525_StaticFields, ___U24U24fieldU2D60_48)); }
	inline U24ArrayTypeU2412_t1613890990  get_U24U24fieldU2D60_48() const { return ___U24U24fieldU2D60_48; }
	inline U24ArrayTypeU2412_t1613890990 * get_address_of_U24U24fieldU2D60_48() { return &___U24U24fieldU2D60_48; }
	inline void set_U24U24fieldU2D60_48(U24ArrayTypeU2412_t1613890990  value)
	{
		___U24U24fieldU2D60_48 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D62_49() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3144279525_StaticFields, ___U24U24fieldU2D62_49)); }
	inline U24ArrayTypeU24128_t2277346503  get_U24U24fieldU2D62_49() const { return ___U24U24fieldU2D62_49; }
	inline U24ArrayTypeU24128_t2277346503 * get_address_of_U24U24fieldU2D62_49() { return &___U24U24fieldU2D62_49; }
	inline void set_U24U24fieldU2D62_49(U24ArrayTypeU24128_t2277346503  value)
	{
		___U24U24fieldU2D62_49 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D63_50() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3144279525_StaticFields, ___U24U24fieldU2D63_50)); }
	inline U24ArrayTypeU24256_t2959064577  get_U24U24fieldU2D63_50() const { return ___U24U24fieldU2D63_50; }
	inline U24ArrayTypeU24256_t2959064577 * get_address_of_U24U24fieldU2D63_50() { return &___U24U24fieldU2D63_50; }
	inline void set_U24U24fieldU2D63_50(U24ArrayTypeU24256_t2959064577  value)
	{
		___U24U24fieldU2D63_50 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D64_51() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3144279525_StaticFields, ___U24U24fieldU2D64_51)); }
	inline U24ArrayTypeU2452_t263736692  get_U24U24fieldU2D64_51() const { return ___U24U24fieldU2D64_51; }
	inline U24ArrayTypeU2452_t263736692 * get_address_of_U24U24fieldU2D64_51() { return &___U24U24fieldU2D64_51; }
	inline void set_U24U24fieldU2D64_51(U24ArrayTypeU2452_t263736692  value)
	{
		___U24U24fieldU2D64_51 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D65_52() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3144279525_StaticFields, ___U24U24fieldU2D65_52)); }
	inline U24ArrayTypeU2452_t263736692  get_U24U24fieldU2D65_52() const { return ___U24U24fieldU2D65_52; }
	inline U24ArrayTypeU2452_t263736692 * get_address_of_U24U24fieldU2D65_52() { return &___U24U24fieldU2D65_52; }
	inline void set_U24U24fieldU2D65_52(U24ArrayTypeU2452_t263736692  value)
	{
		___U24U24fieldU2D65_52 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3144279525_H
#ifndef OPERATINGSYSTEM_T713407616_H
#define OPERATINGSYSTEM_T713407616_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.OperatingSystem
struct  OperatingSystem_t713407616  : public RuntimeObject
{
public:
	// System.PlatformID System.OperatingSystem::_platform
	int32_t ____platform_0;
	// System.Version System.OperatingSystem::_version
	Version_t145090496 * ____version_1;
	// System.String System.OperatingSystem::_servicePack
	String_t* ____servicePack_2;

public:
	inline static int32_t get_offset_of__platform_0() { return static_cast<int32_t>(offsetof(OperatingSystem_t713407616, ____platform_0)); }
	inline int32_t get__platform_0() const { return ____platform_0; }
	inline int32_t* get_address_of__platform_0() { return &____platform_0; }
	inline void set__platform_0(int32_t value)
	{
		____platform_0 = value;
	}

	inline static int32_t get_offset_of__version_1() { return static_cast<int32_t>(offsetof(OperatingSystem_t713407616, ____version_1)); }
	inline Version_t145090496 * get__version_1() const { return ____version_1; }
	inline Version_t145090496 ** get_address_of__version_1() { return &____version_1; }
	inline void set__version_1(Version_t145090496 * value)
	{
		____version_1 = value;
		Il2CppCodeGenWriteBarrier((&____version_1), value);
	}

	inline static int32_t get_offset_of__servicePack_2() { return static_cast<int32_t>(offsetof(OperatingSystem_t713407616, ____servicePack_2)); }
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
#endif // OPERATINGSYSTEM_T713407616_H
#ifndef SYMMETRICALGORITHM_T153562825_H
#define SYMMETRICALGORITHM_T153562825_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SymmetricAlgorithm
struct  SymmetricAlgorithm_t153562825  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::BlockSizeValue
	int32_t ___BlockSizeValue_0;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::IVValue
	ByteU5BU5D_t2082625487* ___IVValue_1;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::KeySizeValue
	int32_t ___KeySizeValue_2;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::KeyValue
	ByteU5BU5D_t2082625487* ___KeyValue_3;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalBlockSizesValue
	KeySizesU5BU5D_t3907905111* ___LegalBlockSizesValue_4;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalKeySizesValue
	KeySizesU5BU5D_t3907905111* ___LegalKeySizesValue_5;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::FeedbackSizeValue
	int32_t ___FeedbackSizeValue_6;
	// System.Security.Cryptography.CipherMode System.Security.Cryptography.SymmetricAlgorithm::ModeValue
	int32_t ___ModeValue_7;
	// System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::PaddingValue
	int32_t ___PaddingValue_8;
	// System.Boolean System.Security.Cryptography.SymmetricAlgorithm::m_disposed
	bool ___m_disposed_9;

public:
	inline static int32_t get_offset_of_BlockSizeValue_0() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t153562825, ___BlockSizeValue_0)); }
	inline int32_t get_BlockSizeValue_0() const { return ___BlockSizeValue_0; }
	inline int32_t* get_address_of_BlockSizeValue_0() { return &___BlockSizeValue_0; }
	inline void set_BlockSizeValue_0(int32_t value)
	{
		___BlockSizeValue_0 = value;
	}

	inline static int32_t get_offset_of_IVValue_1() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t153562825, ___IVValue_1)); }
	inline ByteU5BU5D_t2082625487* get_IVValue_1() const { return ___IVValue_1; }
	inline ByteU5BU5D_t2082625487** get_address_of_IVValue_1() { return &___IVValue_1; }
	inline void set_IVValue_1(ByteU5BU5D_t2082625487* value)
	{
		___IVValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___IVValue_1), value);
	}

	inline static int32_t get_offset_of_KeySizeValue_2() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t153562825, ___KeySizeValue_2)); }
	inline int32_t get_KeySizeValue_2() const { return ___KeySizeValue_2; }
	inline int32_t* get_address_of_KeySizeValue_2() { return &___KeySizeValue_2; }
	inline void set_KeySizeValue_2(int32_t value)
	{
		___KeySizeValue_2 = value;
	}

	inline static int32_t get_offset_of_KeyValue_3() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t153562825, ___KeyValue_3)); }
	inline ByteU5BU5D_t2082625487* get_KeyValue_3() const { return ___KeyValue_3; }
	inline ByteU5BU5D_t2082625487** get_address_of_KeyValue_3() { return &___KeyValue_3; }
	inline void set_KeyValue_3(ByteU5BU5D_t2082625487* value)
	{
		___KeyValue_3 = value;
		Il2CppCodeGenWriteBarrier((&___KeyValue_3), value);
	}

	inline static int32_t get_offset_of_LegalBlockSizesValue_4() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t153562825, ___LegalBlockSizesValue_4)); }
	inline KeySizesU5BU5D_t3907905111* get_LegalBlockSizesValue_4() const { return ___LegalBlockSizesValue_4; }
	inline KeySizesU5BU5D_t3907905111** get_address_of_LegalBlockSizesValue_4() { return &___LegalBlockSizesValue_4; }
	inline void set_LegalBlockSizesValue_4(KeySizesU5BU5D_t3907905111* value)
	{
		___LegalBlockSizesValue_4 = value;
		Il2CppCodeGenWriteBarrier((&___LegalBlockSizesValue_4), value);
	}

	inline static int32_t get_offset_of_LegalKeySizesValue_5() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t153562825, ___LegalKeySizesValue_5)); }
	inline KeySizesU5BU5D_t3907905111* get_LegalKeySizesValue_5() const { return ___LegalKeySizesValue_5; }
	inline KeySizesU5BU5D_t3907905111** get_address_of_LegalKeySizesValue_5() { return &___LegalKeySizesValue_5; }
	inline void set_LegalKeySizesValue_5(KeySizesU5BU5D_t3907905111* value)
	{
		___LegalKeySizesValue_5 = value;
		Il2CppCodeGenWriteBarrier((&___LegalKeySizesValue_5), value);
	}

	inline static int32_t get_offset_of_FeedbackSizeValue_6() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t153562825, ___FeedbackSizeValue_6)); }
	inline int32_t get_FeedbackSizeValue_6() const { return ___FeedbackSizeValue_6; }
	inline int32_t* get_address_of_FeedbackSizeValue_6() { return &___FeedbackSizeValue_6; }
	inline void set_FeedbackSizeValue_6(int32_t value)
	{
		___FeedbackSizeValue_6 = value;
	}

	inline static int32_t get_offset_of_ModeValue_7() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t153562825, ___ModeValue_7)); }
	inline int32_t get_ModeValue_7() const { return ___ModeValue_7; }
	inline int32_t* get_address_of_ModeValue_7() { return &___ModeValue_7; }
	inline void set_ModeValue_7(int32_t value)
	{
		___ModeValue_7 = value;
	}

	inline static int32_t get_offset_of_PaddingValue_8() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t153562825, ___PaddingValue_8)); }
	inline int32_t get_PaddingValue_8() const { return ___PaddingValue_8; }
	inline int32_t* get_address_of_PaddingValue_8() { return &___PaddingValue_8; }
	inline void set_PaddingValue_8(int32_t value)
	{
		___PaddingValue_8 = value;
	}

	inline static int32_t get_offset_of_m_disposed_9() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t153562825, ___m_disposed_9)); }
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
#endif // SYMMETRICALGORITHM_T153562825_H
#ifndef OVERFLOWEXCEPTION_T3239271721_H
#define OVERFLOWEXCEPTION_T3239271721_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.OverflowException
struct  OverflowException_t3239271721  : public ArithmeticException_t77059102
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OVERFLOWEXCEPTION_T3239271721_H
#ifndef UNITYSERIALIZATIONHOLDER_T2419834627_H
#define UNITYSERIALIZATIONHOLDER_T2419834627_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnitySerializationHolder
struct  UnitySerializationHolder_t2419834627  : public RuntimeObject
{
public:
	// System.String System.UnitySerializationHolder::_data
	String_t* ____data_0;
	// System.UnitySerializationHolder/UnityType System.UnitySerializationHolder::_unityType
	uint8_t ____unityType_1;
	// System.String System.UnitySerializationHolder::_assemblyName
	String_t* ____assemblyName_2;

public:
	inline static int32_t get_offset_of__data_0() { return static_cast<int32_t>(offsetof(UnitySerializationHolder_t2419834627, ____data_0)); }
	inline String_t* get__data_0() const { return ____data_0; }
	inline String_t** get_address_of__data_0() { return &____data_0; }
	inline void set__data_0(String_t* value)
	{
		____data_0 = value;
		Il2CppCodeGenWriteBarrier((&____data_0), value);
	}

	inline static int32_t get_offset_of__unityType_1() { return static_cast<int32_t>(offsetof(UnitySerializationHolder_t2419834627, ____unityType_1)); }
	inline uint8_t get__unityType_1() const { return ____unityType_1; }
	inline uint8_t* get_address_of__unityType_1() { return &____unityType_1; }
	inline void set__unityType_1(uint8_t value)
	{
		____unityType_1 = value;
	}

	inline static int32_t get_offset_of__assemblyName_2() { return static_cast<int32_t>(offsetof(UnitySerializationHolder_t2419834627, ____assemblyName_2)); }
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
#endif // UNITYSERIALIZATIONHOLDER_T2419834627_H
#ifndef PLATFORMNOTSUPPORTEDEXCEPTION_T2711772588_H
#define PLATFORMNOTSUPPORTEDEXCEPTION_T2711772588_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.PlatformNotSupportedException
struct  PlatformNotSupportedException_t2711772588  : public NotSupportedException_t3436490580
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLATFORMNOTSUPPORTEDEXCEPTION_T2711772588_H
#ifndef MULTICASTDELEGATE_T2218130089_H
#define MULTICASTDELEGATE_T2218130089_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t2218130089  : public Delegate_t2422993427
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t2218130089 * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t2218130089 * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t2218130089, ___prev_9)); }
	inline MulticastDelegate_t2218130089 * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t2218130089 ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t2218130089 * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t2218130089, ___kpm_next_10)); }
	inline MulticastDelegate_t2218130089 * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t2218130089 ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t2218130089 * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T2218130089_H
#ifndef RC4_T1855031097_H
#define RC4_T1855031097_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.RC4
struct  RC4_t1855031097  : public SymmetricAlgorithm_t153562825
{
public:

public:
};

struct RC4_t1855031097_StaticFields
{
public:
	// System.Security.Cryptography.KeySizes[] Mono.Security.Cryptography.RC4::s_legalBlockSizes
	KeySizesU5BU5D_t3907905111* ___s_legalBlockSizes_10;
	// System.Security.Cryptography.KeySizes[] Mono.Security.Cryptography.RC4::s_legalKeySizes
	KeySizesU5BU5D_t3907905111* ___s_legalKeySizes_11;

public:
	inline static int32_t get_offset_of_s_legalBlockSizes_10() { return static_cast<int32_t>(offsetof(RC4_t1855031097_StaticFields, ___s_legalBlockSizes_10)); }
	inline KeySizesU5BU5D_t3907905111* get_s_legalBlockSizes_10() const { return ___s_legalBlockSizes_10; }
	inline KeySizesU5BU5D_t3907905111** get_address_of_s_legalBlockSizes_10() { return &___s_legalBlockSizes_10; }
	inline void set_s_legalBlockSizes_10(KeySizesU5BU5D_t3907905111* value)
	{
		___s_legalBlockSizes_10 = value;
		Il2CppCodeGenWriteBarrier((&___s_legalBlockSizes_10), value);
	}

	inline static int32_t get_offset_of_s_legalKeySizes_11() { return static_cast<int32_t>(offsetof(RC4_t1855031097_StaticFields, ___s_legalKeySizes_11)); }
	inline KeySizesU5BU5D_t3907905111* get_s_legalKeySizes_11() const { return ___s_legalKeySizes_11; }
	inline KeySizesU5BU5D_t3907905111** get_address_of_s_legalKeySizes_11() { return &___s_legalKeySizes_11; }
	inline void set_s_legalKeySizes_11(KeySizesU5BU5D_t3907905111* value)
	{
		___s_legalKeySizes_11 = value;
		Il2CppCodeGenWriteBarrier((&___s_legalKeySizes_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RC4_T1855031097_H
#ifndef UNHANDLEDEXCEPTIONEVENTHANDLER_T1268118178_H
#define UNHANDLEDEXCEPTIONEVENTHANDLER_T1268118178_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnhandledExceptionEventHandler
struct  UnhandledExceptionEventHandler_t1268118178  : public MulticastDelegate_t2218130089
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNHANDLEDEXCEPTIONEVENTHANDLER_T1268118178_H
#ifndef RESOLVEEVENTHANDLER_T3337939994_H
#define RESOLVEEVENTHANDLER_T3337939994_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ResolveEventHandler
struct  ResolveEventHandler_t3337939994  : public MulticastDelegate_t2218130089
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOLVEEVENTHANDLER_T3337939994_H
#ifndef EVENTHANDLER_T1446829267_H
#define EVENTHANDLER_T1446829267_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventHandler
struct  EventHandler_t1446829267  : public MulticastDelegate_t2218130089
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTHANDLER_T1446829267_H
#ifndef ASSEMBLYLOADEVENTHANDLER_T336174792_H
#define ASSEMBLYLOADEVENTHANDLER_T336174792_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AssemblyLoadEventHandler
struct  AssemblyLoadEventHandler_t336174792  : public MulticastDelegate_t2218130089
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYLOADEVENTHANDLER_T336174792_H
#ifndef APPDOMAININITIALIZER_T2495430868_H
#define APPDOMAININITIALIZER_T2495430868_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AppDomainInitializer
struct  AppDomainInitializer_t2495430868  : public MulticastDelegate_t2218130089
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPDOMAININITIALIZER_T2495430868_H
#ifndef WAITORTIMERCALLBACK_T490849800_H
#define WAITORTIMERCALLBACK_T490849800_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.WaitOrTimerCallback
struct  WaitOrTimerCallback_t490849800  : public MulticastDelegate_t2218130089
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAITORTIMERCALLBACK_T490849800_H
#ifndef WAITCALLBACK_T3900919614_H
#define WAITCALLBACK_T3900919614_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.WaitCallback
struct  WaitCallback_t3900919614  : public MulticastDelegate_t2218130089
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAITCALLBACK_T3900919614_H
#ifndef TIMERCALLBACK_T384673667_H
#define TIMERCALLBACK_T384673667_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.TimerCallback
struct  TimerCallback_t384673667  : public MulticastDelegate_t2218130089
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMERCALLBACK_T384673667_H
#ifndef THREADSTART_T3851658657_H
#define THREADSTART_T3851658657_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.ThreadStart
struct  ThreadStart_t3851658657  : public MulticastDelegate_t2218130089
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREADSTART_T3851658657_H
#ifndef SENDORPOSTCALLBACK_T4203533569_H
#define SENDORPOSTCALLBACK_T4203533569_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.SendOrPostCallback
struct  SendOrPostCallback_t4203533569  : public MulticastDelegate_t2218130089
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SENDORPOSTCALLBACK_T4203533569_H
#ifndef PARAMETERIZEDTHREADSTART_T2558642722_H
#define PARAMETERIZEDTHREADSTART_T2558642722_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.ParameterizedThreadStart
struct  ParameterizedThreadStart_t2558642722  : public MulticastDelegate_t2218130089
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARAMETERIZEDTHREADSTART_T2558642722_H
#ifndef HEADERHANDLER_T958455352_H
#define HEADERHANDLER_T958455352_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.HeaderHandler
struct  HeaderHandler_t958455352  : public MulticastDelegate_t2218130089
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HEADERHANDLER_T958455352_H
#ifndef PRIMALITYTEST_T2285690847_H
#define PRIMALITYTEST_T2285690847_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.Prime.PrimalityTest
struct  PrimalityTest_t2285690847  : public MulticastDelegate_t2218130089
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRIMALITYTEST_T2285690847_H
#ifndef MEMBERFILTER_T201265492_H
#define MEMBERFILTER_T201265492_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberFilter
struct  MemberFilter_t201265492  : public MulticastDelegate_t2218130089
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERFILTER_T201265492_H
#ifndef CROSSCONTEXTDELEGATE_T2705603331_H
#define CROSSCONTEXTDELEGATE_T2705603331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Contexts.CrossContextDelegate
struct  CrossContextDelegate_t2705603331  : public MulticastDelegate_t2218130089
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CROSSCONTEXTDELEGATE_T2705603331_H
#ifndef TYPEFILTER_T3561798200_H
#define TYPEFILTER_T3561798200_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.TypeFilter
struct  TypeFilter_t3561798200  : public MulticastDelegate_t2218130089
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEFILTER_T3561798200_H
#ifndef ARC4MANAGED_T1834880953_H
#define ARC4MANAGED_T1834880953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.ARC4Managed
struct  ARC4Managed_t1834880953  : public RC4_t1855031097
{
public:
	// System.Byte[] Mono.Security.Cryptography.ARC4Managed::key
	ByteU5BU5D_t2082625487* ___key_12;
	// System.Byte[] Mono.Security.Cryptography.ARC4Managed::state
	ByteU5BU5D_t2082625487* ___state_13;
	// System.Byte Mono.Security.Cryptography.ARC4Managed::x
	uint8_t ___x_14;
	// System.Byte Mono.Security.Cryptography.ARC4Managed::y
	uint8_t ___y_15;
	// System.Boolean Mono.Security.Cryptography.ARC4Managed::m_disposed
	bool ___m_disposed_16;

public:
	inline static int32_t get_offset_of_key_12() { return static_cast<int32_t>(offsetof(ARC4Managed_t1834880953, ___key_12)); }
	inline ByteU5BU5D_t2082625487* get_key_12() const { return ___key_12; }
	inline ByteU5BU5D_t2082625487** get_address_of_key_12() { return &___key_12; }
	inline void set_key_12(ByteU5BU5D_t2082625487* value)
	{
		___key_12 = value;
		Il2CppCodeGenWriteBarrier((&___key_12), value);
	}

	inline static int32_t get_offset_of_state_13() { return static_cast<int32_t>(offsetof(ARC4Managed_t1834880953, ___state_13)); }
	inline ByteU5BU5D_t2082625487* get_state_13() const { return ___state_13; }
	inline ByteU5BU5D_t2082625487** get_address_of_state_13() { return &___state_13; }
	inline void set_state_13(ByteU5BU5D_t2082625487* value)
	{
		___state_13 = value;
		Il2CppCodeGenWriteBarrier((&___state_13), value);
	}

	inline static int32_t get_offset_of_x_14() { return static_cast<int32_t>(offsetof(ARC4Managed_t1834880953, ___x_14)); }
	inline uint8_t get_x_14() const { return ___x_14; }
	inline uint8_t* get_address_of_x_14() { return &___x_14; }
	inline void set_x_14(uint8_t value)
	{
		___x_14 = value;
	}

	inline static int32_t get_offset_of_y_15() { return static_cast<int32_t>(offsetof(ARC4Managed_t1834880953, ___y_15)); }
	inline uint8_t get_y_15() const { return ___y_15; }
	inline uint8_t* get_address_of_y_15() { return &___y_15; }
	inline void set_y_15(uint8_t value)
	{
		___y_15 = value;
	}

	inline static int32_t get_offset_of_m_disposed_16() { return static_cast<int32_t>(offsetof(ARC4Managed_t1834880953, ___m_disposed_16)); }
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
#endif // ARC4MANAGED_T1834880953_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize900 = { sizeof (OperatingSystem_t713407616), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable900[3] = 
{
	OperatingSystem_t713407616::get_offset_of__platform_0(),
	OperatingSystem_t713407616::get_offset_of__version_1(),
	OperatingSystem_t713407616::get_offset_of__servicePack_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize901 = { sizeof (OutOfMemoryException_t3546768104), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable901[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize902 = { sizeof (OverflowException_t3239271721), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable902[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize903 = { sizeof (PlatformID_t675399565)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable903[8] = 
{
	PlatformID_t675399565::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize904 = { sizeof (PlatformNotSupportedException_t2711772588), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable904[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize905 = { sizeof (Random_t805094303), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable905[3] = 
{
	Random_t805094303::get_offset_of_inext_0(),
	Random_t805094303::get_offset_of_inextp_1(),
	Random_t805094303::get_offset_of_SeedArray_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize906 = { sizeof (RankException_t979625556), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize907 = { sizeof (ResolveEventArgs_t2100816415), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable907[1] = 
{
	ResolveEventArgs_t2100816415::get_offset_of_m_Name_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize908 = { sizeof (RuntimeMethodHandle_t3780496107)+ sizeof (RuntimeObject), sizeof(RuntimeMethodHandle_t3780496107 ), 0, 0 };
extern const int32_t g_FieldOffsetTable908[1] = 
{
	RuntimeMethodHandle_t3780496107::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize909 = { sizeof (StackOverflowException_t3854462613), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize910 = { sizeof (StringComparer_t1808373940), -1, sizeof(StringComparer_t1808373940_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable910[4] = 
{
	StringComparer_t1808373940_StaticFields::get_offset_of_invariantCultureIgnoreCase_0(),
	StringComparer_t1808373940_StaticFields::get_offset_of_invariantCulture_1(),
	StringComparer_t1808373940_StaticFields::get_offset_of_ordinalIgnoreCase_2(),
	StringComparer_t1808373940_StaticFields::get_offset_of_ordinal_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize911 = { sizeof (CultureAwareComparer_t1955490556), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable911[2] = 
{
	CultureAwareComparer_t1955490556::get_offset_of__ignoreCase_4(),
	CultureAwareComparer_t1955490556::get_offset_of__compareInfo_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize912 = { sizeof (OrdinalComparer_t563536219), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable912[1] = 
{
	OrdinalComparer_t563536219::get_offset_of__ignoreCase_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize913 = { sizeof (StringComparison_t2872670672)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable913[7] = 
{
	StringComparison_t2872670672::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize914 = { sizeof (StringSplitOptions_t4258874580)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable914[3] = 
{
	StringSplitOptions_t4258874580::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize915 = { sizeof (SystemException_t856067145), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize916 = { sizeof (ThreadStaticAttribute_t2171151442), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize917 = { sizeof (TimeSpan_t511213213)+ sizeof (RuntimeObject), sizeof(TimeSpan_t511213213 ), sizeof(TimeSpan_t511213213_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable917[4] = 
{
	TimeSpan_t511213213_StaticFields::get_offset_of_MaxValue_0(),
	TimeSpan_t511213213_StaticFields::get_offset_of_MinValue_1(),
	TimeSpan_t511213213_StaticFields::get_offset_of_Zero_2(),
	TimeSpan_t511213213::get_offset_of__ticks_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize918 = { sizeof (Parser_t2182809363), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable918[4] = 
{
	Parser_t2182809363::get_offset_of__src_0(),
	Parser_t2182809363::get_offset_of__cur_1(),
	Parser_t2182809363::get_offset_of__length_2(),
	Parser_t2182809363::get_offset_of_formatError_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize919 = { sizeof (TimeZone_t4242859709), -1, sizeof(TimeZone_t4242859709_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable919[3] = 
{
	TimeZone_t4242859709_StaticFields::get_offset_of_currentTimeZone_0(),
	TimeZone_t4242859709_StaticFields::get_offset_of_tz_lock_1(),
	TimeZone_t4242859709_StaticFields::get_offset_of_timezone_check_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize920 = { sizeof (CurrentSystemTimeZone_t3798914082), -1, sizeof(CurrentSystemTimeZone_t3798914082_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable920[8] = 
{
	CurrentSystemTimeZone_t3798914082::get_offset_of_m_standardName_3(),
	CurrentSystemTimeZone_t3798914082::get_offset_of_m_daylightName_4(),
	CurrentSystemTimeZone_t3798914082::get_offset_of_m_CachedDaylightChanges_5(),
	CurrentSystemTimeZone_t3798914082::get_offset_of_m_ticksOffset_6(),
	CurrentSystemTimeZone_t3798914082::get_offset_of_utcOffsetWithOutDLS_7(),
	CurrentSystemTimeZone_t3798914082::get_offset_of_utcOffsetWithDLS_8(),
	CurrentSystemTimeZone_t3798914082_StaticFields::get_offset_of_this_year_9(),
	CurrentSystemTimeZone_t3798914082_StaticFields::get_offset_of_this_year_dlt_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize921 = { sizeof (TypeCode_t844145206)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable921[19] = 
{
	TypeCode_t844145206::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize922 = { sizeof (TypeInitializationException_t1062717930), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable922[1] = 
{
	TypeInitializationException_t1062717930::get_offset_of_type_name_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize923 = { sizeof (TypeLoadException_t1594567378), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable923[3] = 
{
	0,
	TypeLoadException_t1594567378::get_offset_of_className_12(),
	TypeLoadException_t1594567378::get_offset_of_assemblyName_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize924 = { sizeof (UnauthorizedAccessException_t3422442481), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize925 = { sizeof (UnhandledExceptionEventArgs_t1562737222), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable925[2] = 
{
	UnhandledExceptionEventArgs_t1562737222::get_offset_of_exception_1(),
	UnhandledExceptionEventArgs_t1562737222::get_offset_of_m_isTerminating_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize926 = { sizeof (UnitySerializationHolder_t2419834627), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable926[3] = 
{
	UnitySerializationHolder_t2419834627::get_offset_of__data_0(),
	UnitySerializationHolder_t2419834627::get_offset_of__unityType_1(),
	UnitySerializationHolder_t2419834627::get_offset_of__assemblyName_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize927 = { sizeof (UnityType_t576954711)+ sizeof (RuntimeObject), sizeof(uint8_t), 0, 0 };
extern const int32_t g_FieldOffsetTable927[5] = 
{
	UnityType_t576954711::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize928 = { sizeof (Version_t145090496), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable928[5] = 
{
	0,
	Version_t145090496::get_offset_of__Major_1(),
	Version_t145090496::get_offset_of__Minor_2(),
	Version_t145090496::get_offset_of__Build_3(),
	Version_t145090496::get_offset_of__Revision_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize929 = { sizeof (WeakReference_t1023263538), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable929[2] = 
{
	WeakReference_t1023263538::get_offset_of_isLongReference_0(),
	WeakReference_t1023263538::get_offset_of_gcHandle_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize930 = { sizeof (PrimalityTest_t2285690847), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize931 = { sizeof (MemberFilter_t201265492), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize932 = { sizeof (TypeFilter_t3561798200), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize933 = { sizeof (CrossContextDelegate_t2705603331), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize934 = { sizeof (HeaderHandler_t958455352), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize935 = { sizeof (ParameterizedThreadStart_t2558642722), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize936 = { sizeof (SendOrPostCallback_t4203533569), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize937 = { sizeof (ThreadStart_t3851658657), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize938 = { sizeof (TimerCallback_t384673667), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize939 = { sizeof (WaitCallback_t3900919614), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize940 = { sizeof (WaitOrTimerCallback_t490849800), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize941 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize942 = { sizeof (AppDomainInitializer_t2495430868), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize943 = { sizeof (AssemblyLoadEventHandler_t336174792), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize944 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize945 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize946 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize947 = { sizeof (EventHandler_t1446829267), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize948 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize949 = { sizeof (ResolveEventHandler_t3337939994), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize950 = { sizeof (UnhandledExceptionEventHandler_t1268118178), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize951 = { sizeof (U3CPrivateImplementationDetailsU3E_t3144279525), -1, sizeof(U3CPrivateImplementationDetailsU3E_t3144279525_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable951[53] = 
{
	U3CPrivateImplementationDetailsU3E_t3144279525_StaticFields::get_offset_of_U24U24fieldU2D0_0(),
	U3CPrivateImplementationDetailsU3E_t3144279525_StaticFields::get_offset_of_U24U24fieldU2D1_1(),
	U3CPrivateImplementationDetailsU3E_t3144279525_StaticFields::get_offset_of_U24U24fieldU2D2_2(),
	U3CPrivateImplementationDetailsU3E_t3144279525_StaticFields::get_offset_of_U24U24fieldU2D3_3(),
	U3CPrivateImplementationDetailsU3E_t3144279525_StaticFields::get_offset_of_U24U24fieldU2D4_4(),
	U3CPrivateImplementationDetailsU3E_t3144279525_StaticFields::get_offset_of_U24U24fieldU2D5_5(),
	U3CPrivateImplementationDetailsU3E_t3144279525_StaticFields::get_offset_of_U24U24fieldU2D6_6(),
	U3CPrivateImplementationDetailsU3E_t3144279525_StaticFields::get_offset_of_U24U24fieldU2D15_7(),
	U3CPrivateImplementationDetailsU3E_t3144279525_StaticFields::get_offset_of_U24U24fieldU2D16_8(),
	U3CPrivateImplementationDetailsU3E_t3144279525_StaticFields::get_offset_of_U24U24fieldU2D17_9(),
	U3CPrivateImplementationDetailsU3E_t3144279525_StaticFields::get_offset_of_U24U24fieldU2D18_10(),
	U3CPrivateImplementationDetailsU3E_t3144279525_StaticFields::get_offset_of_U24U24fieldU2D19_11(),
	U3CPrivateImplementationDetailsU3E_t3144279525_StaticFields::get_offset_of_U24U24fieldU2D20_12(),
	U3CPrivateImplementationDetailsU3E_t3144279525_StaticFields::get_offset_of_U24U24fieldU2D21_13(),
	U3CPrivateImplementationDetailsU3E_t3144279525_StaticFields::get_offset_of_U24U24fieldU2D22_14(),
	U3CPrivateImplementationDetailsU3E_t3144279525_StaticFields::get_offset_of_U24U24fieldU2D23_15(),
	U3CPrivateImplementationDetailsU3E_t3144279525_StaticFields::get_offset_of_U24U24fieldU2D24_16(),
	U3CPrivateImplementationDetailsU3E_t3144279525_StaticFields::get_offset_of_U24U24fieldU2D25_17(),
	U3CPrivateImplementationDetailsU3E_t3144279525_StaticFields::get_offset_of_U24U24fieldU2D26_18(),
	U3CPrivateImplementationDetailsU3E_t3144279525_StaticFields::get_offset_of_U24U24fieldU2D27_19(),
	U3CPrivateImplementationDetailsU3E_t3144279525_StaticFields::get_offset_of_U24U24fieldU2D30_20(),
	U3CPrivateImplementationDetailsU3E_t3144279525_StaticFields::get_offset_of_U24U24fieldU2D31_21(),
	U3CPrivateImplementationDetailsU3E_t3144279525_StaticFields::get_offset_of_U24U24fieldU2D32_22(),
	U3CPrivateImplementationDetailsU3E_t3144279525_StaticFields::get_offset_of_U24U24fieldU2D33_23(),
	U3CPrivateImplementationDetailsU3E_t3144279525_StaticFields::get_offset_of_U24U24fieldU2D34_24(),
	U3CPrivateImplementationDetailsU3E_t3144279525_StaticFields::get_offset_of_U24U24fieldU2D35_25(),
	U3CPrivateImplementationDetailsU3E_t3144279525_StaticFields::get_offset_of_U24U24fieldU2D36_26(),
	U3CPrivateImplementationDetailsU3E_t3144279525_StaticFields::get_offset_of_U24U24fieldU2D37_27(),
	U3CPrivateImplementationDetailsU3E_t3144279525_StaticFields::get_offset_of_U24U24fieldU2D38_28(),
	U3CPrivateImplementationDetailsU3E_t3144279525_StaticFields::get_offset_of_U24U24fieldU2D39_29(),
	U3CPrivateImplementationDetailsU3E_t3144279525_StaticFields::get_offset_of_U24U24fieldU2D40_30(),
	U3CPrivateImplementationDetailsU3E_t3144279525_StaticFields::get_offset_of_U24U24fieldU2D41_31(),
	U3CPrivateImplementationDetailsU3E_t3144279525_StaticFields::get_offset_of_U24U24fieldU2D42_32(),
	U3CPrivateImplementationDetailsU3E_t3144279525_StaticFields::get_offset_of_U24U24fieldU2D43_33(),
	U3CPrivateImplementationDetailsU3E_t3144279525_StaticFields::get_offset_of_U24U24fieldU2D44_34(),
	U3CPrivateImplementationDetailsU3E_t3144279525_StaticFields::get_offset_of_U24U24fieldU2D45_35(),
	U3CPrivateImplementationDetailsU3E_t3144279525_StaticFields::get_offset_of_U24U24fieldU2D46_36(),
	U3CPrivateImplementationDetailsU3E_t3144279525_StaticFields::get_offset_of_U24U24fieldU2D47_37(),
	U3CPrivateImplementationDetailsU3E_t3144279525_StaticFields::get_offset_of_U24U24fieldU2D48_38(),
	U3CPrivateImplementationDetailsU3E_t3144279525_StaticFields::get_offset_of_U24U24fieldU2D49_39(),
	U3CPrivateImplementationDetailsU3E_t3144279525_StaticFields::get_offset_of_U24U24fieldU2D50_40(),
	U3CPrivateImplementationDetailsU3E_t3144279525_StaticFields::get_offset_of_U24U24fieldU2D51_41(),
	U3CPrivateImplementationDetailsU3E_t3144279525_StaticFields::get_offset_of_U24U24fieldU2D52_42(),
	U3CPrivateImplementationDetailsU3E_t3144279525_StaticFields::get_offset_of_U24U24fieldU2D53_43(),
	U3CPrivateImplementationDetailsU3E_t3144279525_StaticFields::get_offset_of_U24U24fieldU2D54_44(),
	U3CPrivateImplementationDetailsU3E_t3144279525_StaticFields::get_offset_of_U24U24fieldU2D55_45(),
	U3CPrivateImplementationDetailsU3E_t3144279525_StaticFields::get_offset_of_U24U24fieldU2D56_46(),
	U3CPrivateImplementationDetailsU3E_t3144279525_StaticFields::get_offset_of_U24U24fieldU2D57_47(),
	U3CPrivateImplementationDetailsU3E_t3144279525_StaticFields::get_offset_of_U24U24fieldU2D60_48(),
	U3CPrivateImplementationDetailsU3E_t3144279525_StaticFields::get_offset_of_U24U24fieldU2D62_49(),
	U3CPrivateImplementationDetailsU3E_t3144279525_StaticFields::get_offset_of_U24U24fieldU2D63_50(),
	U3CPrivateImplementationDetailsU3E_t3144279525_StaticFields::get_offset_of_U24U24fieldU2D64_51(),
	U3CPrivateImplementationDetailsU3E_t3144279525_StaticFields::get_offset_of_U24U24fieldU2D65_52(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize952 = { sizeof (U24ArrayTypeU2456_t3048275482)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2456_t3048275482 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize953 = { sizeof (U24ArrayTypeU2424_t3533350014)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2424_t3533350014 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize954 = { sizeof (U24ArrayTypeU2416_t1729160021)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2416_t1729160021 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize955 = { sizeof (U24ArrayTypeU24120_t102593309)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU24120_t102593309 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize956 = { sizeof (U24ArrayTypeU243132_t3471060236)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU243132_t3471060236 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize957 = { sizeof (U24ArrayTypeU2420_t2842077923)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2420_t2842077923 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize958 = { sizeof (U24ArrayTypeU2432_t2663078516)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2432_t2663078516 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize959 = { sizeof (U24ArrayTypeU2448_t1477348490)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2448_t1477348490 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize960 = { sizeof (U24ArrayTypeU2464_t1806936230)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2464_t1806936230 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize961 = { sizeof (U24ArrayTypeU2412_t1613890990)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2412_t1613890990 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize962 = { sizeof (U24ArrayTypeU24136_t2569156269)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU24136_t2569156269 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize963 = { sizeof (U24ArrayTypeU248_t3144299232)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU248_t3144299232 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize964 = { sizeof (U24ArrayTypeU2472_t1440235392)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2472_t1440235392 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize965 = { sizeof (U24ArrayTypeU24124_t3776489364)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU24124_t3776489364 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize966 = { sizeof (U24ArrayTypeU2496_t1251209259)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2496_t1251209259 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize967 = { sizeof (U24ArrayTypeU242048_t3502187460)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU242048_t3502187460 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize968 = { sizeof (U24ArrayTypeU24256_t2959064577)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU24256_t2959064577 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize969 = { sizeof (U24ArrayTypeU241024_t512068566)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU241024_t512068566 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize970 = { sizeof (U24ArrayTypeU24640_t3354467406)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU24640_t3354467406 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize971 = { sizeof (U24ArrayTypeU24128_t2277346503)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU24128_t2277346503 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize972 = { sizeof (U24ArrayTypeU2452_t263736692)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2452_t263736692 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize973 = { sizeof (Il2CppComObject), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize974 = { sizeof (__Il2CppComDelegate_t1729496221), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize975 = { sizeof (U3CModuleU3E_t3323630713), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize976 = { sizeof (Locale_t2539833171), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize977 = { sizeof (BigInteger_t861477058), -1, sizeof(BigInteger_t861477058_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable977[4] = 
{
	BigInteger_t861477058::get_offset_of_length_0(),
	BigInteger_t861477058::get_offset_of_data_1(),
	BigInteger_t861477058_StaticFields::get_offset_of_smallPrimes_2(),
	BigInteger_t861477058_StaticFields::get_offset_of_rng_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize978 = { sizeof (Sign_t897018574)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable978[4] = 
{
	Sign_t897018574::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize979 = { sizeof (ModulusRing_t1762511487), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable979[2] = 
{
	ModulusRing_t1762511487::get_offset_of_mod_0(),
	ModulusRing_t1762511487::get_offset_of_constant_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize980 = { sizeof (Kernel_t4065016017), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize981 = { sizeof (ConfidenceFactor_t2479975112)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable981[7] = 
{
	ConfidenceFactor_t2479975112::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize982 = { sizeof (PrimalityTests_t2035598654), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize983 = { sizeof (PrimeGeneratorBase_t652853711), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize984 = { sizeof (SequentialSearchPrimeGeneratorBase_t398525451), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize985 = { sizeof (ASN1_t3645405092), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable985[3] = 
{
	ASN1_t3645405092::get_offset_of_m_nTag_0(),
	ASN1_t3645405092::get_offset_of_m_aValue_1(),
	ASN1_t3645405092::get_offset_of_elist_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize986 = { sizeof (ASN1Convert_t769194489), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize987 = { sizeof (BitConverterLE_t1658920548), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize988 = { sizeof (PKCS7_t399180591), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize989 = { sizeof (ContentInfo_t2653599359), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable989[2] = 
{
	ContentInfo_t2653599359::get_offset_of_contentType_0(),
	ContentInfo_t2653599359::get_offset_of_content_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize990 = { sizeof (EncryptedData_t695399794), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable990[4] = 
{
	EncryptedData_t695399794::get_offset_of__version_0(),
	EncryptedData_t695399794::get_offset_of__content_1(),
	EncryptedData_t695399794::get_offset_of__encryptionAlgorithm_2(),
	EncryptedData_t695399794::get_offset_of__encrypted_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize991 = { sizeof (ARC4Managed_t1834880953), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable991[5] = 
{
	ARC4Managed_t1834880953::get_offset_of_key_12(),
	ARC4Managed_t1834880953::get_offset_of_state_13(),
	ARC4Managed_t1834880953::get_offset_of_x_14(),
	ARC4Managed_t1834880953::get_offset_of_y_15(),
	ARC4Managed_t1834880953::get_offset_of_m_disposed_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize992 = { sizeof (CryptoConvert_t633261263), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize993 = { sizeof (KeyBuilder_t2811277435), -1, sizeof(KeyBuilder_t2811277435_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable993[1] = 
{
	KeyBuilder_t2811277435_StaticFields::get_offset_of_rng_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize994 = { sizeof (MD2_t477883742), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize995 = { sizeof (MD2Managed_t3678235734), -1, sizeof(MD2Managed_t3678235734_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable995[6] = 
{
	MD2Managed_t3678235734::get_offset_of_state_4(),
	MD2Managed_t3678235734::get_offset_of_checksum_5(),
	MD2Managed_t3678235734::get_offset_of_buffer_6(),
	MD2Managed_t3678235734::get_offset_of_count_7(),
	MD2Managed_t3678235734::get_offset_of_x_8(),
	MD2Managed_t3678235734_StaticFields::get_offset_of_PI_SUBST_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize996 = { sizeof (MD4_t1561856440), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize997 = { sizeof (MD4Managed_t3082125420), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable997[5] = 
{
	MD4Managed_t3082125420::get_offset_of_state_4(),
	MD4Managed_t3082125420::get_offset_of_buffer_5(),
	MD4Managed_t3082125420::get_offset_of_count_6(),
	MD4Managed_t3082125420::get_offset_of_x_7(),
	MD4Managed_t3082125420::get_offset_of_digest_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize998 = { sizeof (PKCS1_t4202992875), -1, sizeof(PKCS1_t4202992875_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable998[4] = 
{
	PKCS1_t4202992875_StaticFields::get_offset_of_emptySHA1_0(),
	PKCS1_t4202992875_StaticFields::get_offset_of_emptySHA256_1(),
	PKCS1_t4202992875_StaticFields::get_offset_of_emptySHA384_2(),
	PKCS1_t4202992875_StaticFields::get_offset_of_emptySHA512_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize999 = { sizeof (PKCS8_t2181476744), -1, 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif

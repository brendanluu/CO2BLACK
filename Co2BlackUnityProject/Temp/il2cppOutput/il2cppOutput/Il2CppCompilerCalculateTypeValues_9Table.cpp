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
struct ContentInfo_t4466516;
// System.Byte[]
struct ByteU5BU5D_t3990433866;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t4293320709;
// System.String
struct String_t;
// Mono.Security.ASN1
struct ASN1_t1165924037;
// System.Collections.ArrayList
struct ArrayList_t1004296020;
// Mono.Math.BigInteger
struct BigInteger_t2277584885;
// System.UInt32[]
struct UInt32U5BU5D_t2763435308;
// System.Int32[]
struct Int32U5BU5D_t3162311898;
// System.IntPtr[]
struct IntPtrU5BU5D_t1958778070;
// System.Collections.IDictionary
struct IDictionary_t1650869250;
// System.Char[]
struct CharU5BU5D_t204761021;
// System.Globalization.CompareInfo
struct CompareInfo_t2628715801;
// System.Void
struct Void_t1270832600;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1573484868;
// System.Collections.Hashtable
struct Hashtable_t1579358919;
// System.Globalization.DaylightTime
struct DaylightTime_t3143608337;
// System.Version
struct Version_t1424531886;
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_t1660291574;
// System.UnhandledExceptionEventArgs
struct UnhandledExceptionEventArgs_t2717029072;
// System.IAsyncResult
struct IAsyncResult_t2339644;
// System.AsyncCallback
struct AsyncCallback_t1866332126;
// System.Reflection.Assembly
struct Assembly_t128959728;
// System.ResolveEventArgs
struct ResolveEventArgs_t4059759978;
// System.EventArgs
struct EventArgs_t1070293258;
// System.AssemblyLoadEventArgs
struct AssemblyLoadEventArgs_t3848297194;
// System.String[]
struct StringU5BU5D_t3517288861;
// System.Runtime.Remoting.Messaging.Header[]
struct HeaderU5BU5D_t679118663;
// Mono.Math.BigInteger
struct BigInteger_t2277584884;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Type
struct Type_t;




#ifndef U3CMODULEU3E_T1550132600_H
#define U3CMODULEU3E_T1550132600_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t1550132600 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T1550132600_H
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
#ifndef ENCRYPTEDDATA_T1558483112_H
#define ENCRYPTEDDATA_T1558483112_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.PKCS7/EncryptedData
struct  EncryptedData_t1558483112  : public RuntimeObject
{
public:
	// System.Byte Mono.Security.PKCS7/EncryptedData::_version
	uint8_t ____version_0;
	// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/EncryptedData::_content
	ContentInfo_t4466516 * ____content_1;
	// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/EncryptedData::_encryptionAlgorithm
	ContentInfo_t4466516 * ____encryptionAlgorithm_2;
	// System.Byte[] Mono.Security.PKCS7/EncryptedData::_encrypted
	ByteU5BU5D_t3990433866* ____encrypted_3;

public:
	inline static int32_t get_offset_of__version_0() { return static_cast<int32_t>(offsetof(EncryptedData_t1558483112, ____version_0)); }
	inline uint8_t get__version_0() const { return ____version_0; }
	inline uint8_t* get_address_of__version_0() { return &____version_0; }
	inline void set__version_0(uint8_t value)
	{
		____version_0 = value;
	}

	inline static int32_t get_offset_of__content_1() { return static_cast<int32_t>(offsetof(EncryptedData_t1558483112, ____content_1)); }
	inline ContentInfo_t4466516 * get__content_1() const { return ____content_1; }
	inline ContentInfo_t4466516 ** get_address_of__content_1() { return &____content_1; }
	inline void set__content_1(ContentInfo_t4466516 * value)
	{
		____content_1 = value;
		Il2CppCodeGenWriteBarrier((&____content_1), value);
	}

	inline static int32_t get_offset_of__encryptionAlgorithm_2() { return static_cast<int32_t>(offsetof(EncryptedData_t1558483112, ____encryptionAlgorithm_2)); }
	inline ContentInfo_t4466516 * get__encryptionAlgorithm_2() const { return ____encryptionAlgorithm_2; }
	inline ContentInfo_t4466516 ** get_address_of__encryptionAlgorithm_2() { return &____encryptionAlgorithm_2; }
	inline void set__encryptionAlgorithm_2(ContentInfo_t4466516 * value)
	{
		____encryptionAlgorithm_2 = value;
		Il2CppCodeGenWriteBarrier((&____encryptionAlgorithm_2), value);
	}

	inline static int32_t get_offset_of__encrypted_3() { return static_cast<int32_t>(offsetof(EncryptedData_t1558483112, ____encrypted_3)); }
	inline ByteU5BU5D_t3990433866* get__encrypted_3() const { return ____encrypted_3; }
	inline ByteU5BU5D_t3990433866** get_address_of__encrypted_3() { return &____encrypted_3; }
	inline void set__encrypted_3(ByteU5BU5D_t3990433866* value)
	{
		____encrypted_3 = value;
		Il2CppCodeGenWriteBarrier((&____encrypted_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCRYPTEDDATA_T1558483112_H
#ifndef PKCS8_T3920153275_H
#define PKCS8_T3920153275_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.PKCS8
struct  PKCS8_t3920153275  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PKCS8_T3920153275_H
#ifndef VERSION_T1424531886_H
#define VERSION_T1424531886_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Version
struct  Version_t1424531886  : public RuntimeObject
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
	inline static int32_t get_offset_of__Major_1() { return static_cast<int32_t>(offsetof(Version_t1424531886, ____Major_1)); }
	inline int32_t get__Major_1() const { return ____Major_1; }
	inline int32_t* get_address_of__Major_1() { return &____Major_1; }
	inline void set__Major_1(int32_t value)
	{
		____Major_1 = value;
	}

	inline static int32_t get_offset_of__Minor_2() { return static_cast<int32_t>(offsetof(Version_t1424531886, ____Minor_2)); }
	inline int32_t get__Minor_2() const { return ____Minor_2; }
	inline int32_t* get_address_of__Minor_2() { return &____Minor_2; }
	inline void set__Minor_2(int32_t value)
	{
		____Minor_2 = value;
	}

	inline static int32_t get_offset_of__Build_3() { return static_cast<int32_t>(offsetof(Version_t1424531886, ____Build_3)); }
	inline int32_t get__Build_3() const { return ____Build_3; }
	inline int32_t* get_address_of__Build_3() { return &____Build_3; }
	inline void set__Build_3(int32_t value)
	{
		____Build_3 = value;
	}

	inline static int32_t get_offset_of__Revision_4() { return static_cast<int32_t>(offsetof(Version_t1424531886, ____Revision_4)); }
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
#endif // VERSION_T1424531886_H
#ifndef PKCS1_T1634690126_H
#define PKCS1_T1634690126_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.PKCS1
struct  PKCS1_t1634690126  : public RuntimeObject
{
public:

public:
};

struct PKCS1_t1634690126_StaticFields
{
public:
	// System.Byte[] Mono.Security.Cryptography.PKCS1::emptySHA1
	ByteU5BU5D_t3990433866* ___emptySHA1_0;
	// System.Byte[] Mono.Security.Cryptography.PKCS1::emptySHA256
	ByteU5BU5D_t3990433866* ___emptySHA256_1;
	// System.Byte[] Mono.Security.Cryptography.PKCS1::emptySHA384
	ByteU5BU5D_t3990433866* ___emptySHA384_2;
	// System.Byte[] Mono.Security.Cryptography.PKCS1::emptySHA512
	ByteU5BU5D_t3990433866* ___emptySHA512_3;

public:
	inline static int32_t get_offset_of_emptySHA1_0() { return static_cast<int32_t>(offsetof(PKCS1_t1634690126_StaticFields, ___emptySHA1_0)); }
	inline ByteU5BU5D_t3990433866* get_emptySHA1_0() const { return ___emptySHA1_0; }
	inline ByteU5BU5D_t3990433866** get_address_of_emptySHA1_0() { return &___emptySHA1_0; }
	inline void set_emptySHA1_0(ByteU5BU5D_t3990433866* value)
	{
		___emptySHA1_0 = value;
		Il2CppCodeGenWriteBarrier((&___emptySHA1_0), value);
	}

	inline static int32_t get_offset_of_emptySHA256_1() { return static_cast<int32_t>(offsetof(PKCS1_t1634690126_StaticFields, ___emptySHA256_1)); }
	inline ByteU5BU5D_t3990433866* get_emptySHA256_1() const { return ___emptySHA256_1; }
	inline ByteU5BU5D_t3990433866** get_address_of_emptySHA256_1() { return &___emptySHA256_1; }
	inline void set_emptySHA256_1(ByteU5BU5D_t3990433866* value)
	{
		___emptySHA256_1 = value;
		Il2CppCodeGenWriteBarrier((&___emptySHA256_1), value);
	}

	inline static int32_t get_offset_of_emptySHA384_2() { return static_cast<int32_t>(offsetof(PKCS1_t1634690126_StaticFields, ___emptySHA384_2)); }
	inline ByteU5BU5D_t3990433866* get_emptySHA384_2() const { return ___emptySHA384_2; }
	inline ByteU5BU5D_t3990433866** get_address_of_emptySHA384_2() { return &___emptySHA384_2; }
	inline void set_emptySHA384_2(ByteU5BU5D_t3990433866* value)
	{
		___emptySHA384_2 = value;
		Il2CppCodeGenWriteBarrier((&___emptySHA384_2), value);
	}

	inline static int32_t get_offset_of_emptySHA512_3() { return static_cast<int32_t>(offsetof(PKCS1_t1634690126_StaticFields, ___emptySHA512_3)); }
	inline ByteU5BU5D_t3990433866* get_emptySHA512_3() const { return ___emptySHA512_3; }
	inline ByteU5BU5D_t3990433866** get_address_of_emptySHA512_3() { return &___emptySHA512_3; }
	inline void set_emptySHA512_3(ByteU5BU5D_t3990433866* value)
	{
		___emptySHA512_3 = value;
		Il2CppCodeGenWriteBarrier((&___emptySHA512_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PKCS1_T1634690126_H
#ifndef KEYBUILDER_T3451634565_H
#define KEYBUILDER_T3451634565_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.KeyBuilder
struct  KeyBuilder_t3451634565  : public RuntimeObject
{
public:

public:
};

struct KeyBuilder_t3451634565_StaticFields
{
public:
	// System.Security.Cryptography.RandomNumberGenerator Mono.Security.Cryptography.KeyBuilder::rng
	RandomNumberGenerator_t4293320709 * ___rng_0;

public:
	inline static int32_t get_offset_of_rng_0() { return static_cast<int32_t>(offsetof(KeyBuilder_t3451634565_StaticFields, ___rng_0)); }
	inline RandomNumberGenerator_t4293320709 * get_rng_0() const { return ___rng_0; }
	inline RandomNumberGenerator_t4293320709 ** get_address_of_rng_0() { return &___rng_0; }
	inline void set_rng_0(RandomNumberGenerator_t4293320709 * value)
	{
		___rng_0 = value;
		Il2CppCodeGenWriteBarrier((&___rng_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYBUILDER_T3451634565_H
#ifndef CRYPTOCONVERT_T2714714884_H
#define CRYPTOCONVERT_T2714714884_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.CryptoConvert
struct  CryptoConvert_t2714714884  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRYPTOCONVERT_T2714714884_H
#ifndef LOCALE_T2127861558_H
#define LOCALE_T2127861558_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Locale
struct  Locale_t2127861558  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCALE_T2127861558_H
#ifndef CONTENTINFO_T4466516_H
#define CONTENTINFO_T4466516_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.PKCS7/ContentInfo
struct  ContentInfo_t4466516  : public RuntimeObject
{
public:
	// System.String Mono.Security.PKCS7/ContentInfo::contentType
	String_t* ___contentType_0;
	// Mono.Security.ASN1 Mono.Security.PKCS7/ContentInfo::content
	ASN1_t1165924037 * ___content_1;

public:
	inline static int32_t get_offset_of_contentType_0() { return static_cast<int32_t>(offsetof(ContentInfo_t4466516, ___contentType_0)); }
	inline String_t* get_contentType_0() const { return ___contentType_0; }
	inline String_t** get_address_of_contentType_0() { return &___contentType_0; }
	inline void set_contentType_0(String_t* value)
	{
		___contentType_0 = value;
		Il2CppCodeGenWriteBarrier((&___contentType_0), value);
	}

	inline static int32_t get_offset_of_content_1() { return static_cast<int32_t>(offsetof(ContentInfo_t4466516, ___content_1)); }
	inline ASN1_t1165924037 * get_content_1() const { return ___content_1; }
	inline ASN1_t1165924037 ** get_address_of_content_1() { return &___content_1; }
	inline void set_content_1(ASN1_t1165924037 * value)
	{
		___content_1 = value;
		Il2CppCodeGenWriteBarrier((&___content_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTENTINFO_T4466516_H
#ifndef BITCONVERTERLE_T3817231965_H
#define BITCONVERTERLE_T3817231965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.BitConverterLE
struct  BitConverterLE_t3817231965  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BITCONVERTERLE_T3817231965_H
#ifndef ASN1CONVERT_T3229810623_H
#define ASN1CONVERT_T3229810623_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.ASN1Convert
struct  ASN1Convert_t3229810623  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASN1CONVERT_T3229810623_H
#ifndef ASN1_T1165924037_H
#define ASN1_T1165924037_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.ASN1
struct  ASN1_t1165924037  : public RuntimeObject
{
public:
	// System.Byte Mono.Security.ASN1::m_nTag
	uint8_t ___m_nTag_0;
	// System.Byte[] Mono.Security.ASN1::m_aValue
	ByteU5BU5D_t3990433866* ___m_aValue_1;
	// System.Collections.ArrayList Mono.Security.ASN1::elist
	ArrayList_t1004296020 * ___elist_2;

public:
	inline static int32_t get_offset_of_m_nTag_0() { return static_cast<int32_t>(offsetof(ASN1_t1165924037, ___m_nTag_0)); }
	inline uint8_t get_m_nTag_0() const { return ___m_nTag_0; }
	inline uint8_t* get_address_of_m_nTag_0() { return &___m_nTag_0; }
	inline void set_m_nTag_0(uint8_t value)
	{
		___m_nTag_0 = value;
	}

	inline static int32_t get_offset_of_m_aValue_1() { return static_cast<int32_t>(offsetof(ASN1_t1165924037, ___m_aValue_1)); }
	inline ByteU5BU5D_t3990433866* get_m_aValue_1() const { return ___m_aValue_1; }
	inline ByteU5BU5D_t3990433866** get_address_of_m_aValue_1() { return &___m_aValue_1; }
	inline void set_m_aValue_1(ByteU5BU5D_t3990433866* value)
	{
		___m_aValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_aValue_1), value);
	}

	inline static int32_t get_offset_of_elist_2() { return static_cast<int32_t>(offsetof(ASN1_t1165924037, ___elist_2)); }
	inline ArrayList_t1004296020 * get_elist_2() const { return ___elist_2; }
	inline ArrayList_t1004296020 ** get_address_of_elist_2() { return &___elist_2; }
	inline void set_elist_2(ArrayList_t1004296020 * value)
	{
		___elist_2 = value;
		Il2CppCodeGenWriteBarrier((&___elist_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASN1_T1165924037_H
#ifndef PRIMEGENERATORBASE_T4236485941_H
#define PRIMEGENERATORBASE_T4236485941_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.Prime.Generator.PrimeGeneratorBase
struct  PrimeGeneratorBase_t4236485941  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRIMEGENERATORBASE_T4236485941_H
#ifndef PRIMALITYTESTS_T2012446421_H
#define PRIMALITYTESTS_T2012446421_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.Prime.PrimalityTests
struct  PrimalityTests_t2012446421  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRIMALITYTESTS_T2012446421_H
#ifndef KERNEL_T3340881266_H
#define KERNEL_T3340881266_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.BigInteger/Kernel
struct  Kernel_t3340881266  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KERNEL_T3340881266_H
#ifndef MODULUSRING_T641790530_H
#define MODULUSRING_T641790530_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.BigInteger/ModulusRing
struct  ModulusRing_t641790530  : public RuntimeObject
{
public:
	// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::mod
	BigInteger_t2277584885 * ___mod_0;
	// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::constant
	BigInteger_t2277584885 * ___constant_1;

public:
	inline static int32_t get_offset_of_mod_0() { return static_cast<int32_t>(offsetof(ModulusRing_t641790530, ___mod_0)); }
	inline BigInteger_t2277584885 * get_mod_0() const { return ___mod_0; }
	inline BigInteger_t2277584885 ** get_address_of_mod_0() { return &___mod_0; }
	inline void set_mod_0(BigInteger_t2277584885 * value)
	{
		___mod_0 = value;
		Il2CppCodeGenWriteBarrier((&___mod_0), value);
	}

	inline static int32_t get_offset_of_constant_1() { return static_cast<int32_t>(offsetof(ModulusRing_t641790530, ___constant_1)); }
	inline BigInteger_t2277584885 * get_constant_1() const { return ___constant_1; }
	inline BigInteger_t2277584885 ** get_address_of_constant_1() { return &___constant_1; }
	inline void set_constant_1(BigInteger_t2277584885 * value)
	{
		___constant_1 = value;
		Il2CppCodeGenWriteBarrier((&___constant_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MODULUSRING_T641790530_H
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
#ifndef PKCS7_T3658348133_H
#define PKCS7_T3658348133_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.PKCS7
struct  PKCS7_t3658348133  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PKCS7_T3658348133_H
#ifndef EVENTARGS_T1070293258_H
#define EVENTARGS_T1070293258_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventArgs
struct  EventArgs_t1070293258  : public RuntimeObject
{
public:

public:
};

struct EventArgs_t1070293258_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t1070293258 * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_t1070293258_StaticFields, ___Empty_0)); }
	inline EventArgs_t1070293258 * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_t1070293258 ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_t1070293258 * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTARGS_T1070293258_H
#ifndef BIGINTEGER_T2277584885_H
#define BIGINTEGER_T2277584885_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.BigInteger
struct  BigInteger_t2277584885  : public RuntimeObject
{
public:
	// System.UInt32 Mono.Math.BigInteger::length
	uint32_t ___length_0;
	// System.UInt32[] Mono.Math.BigInteger::data
	UInt32U5BU5D_t2763435308* ___data_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(BigInteger_t2277584885, ___length_0)); }
	inline uint32_t get_length_0() const { return ___length_0; }
	inline uint32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(uint32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(BigInteger_t2277584885, ___data_1)); }
	inline UInt32U5BU5D_t2763435308* get_data_1() const { return ___data_1; }
	inline UInt32U5BU5D_t2763435308** get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(UInt32U5BU5D_t2763435308* value)
	{
		___data_1 = value;
		Il2CppCodeGenWriteBarrier((&___data_1), value);
	}
};

struct BigInteger_t2277584885_StaticFields
{
public:
	// System.UInt32[] Mono.Math.BigInteger::smallPrimes
	UInt32U5BU5D_t2763435308* ___smallPrimes_2;
	// System.Security.Cryptography.RandomNumberGenerator Mono.Math.BigInteger::rng
	RandomNumberGenerator_t4293320709 * ___rng_3;

public:
	inline static int32_t get_offset_of_smallPrimes_2() { return static_cast<int32_t>(offsetof(BigInteger_t2277584885_StaticFields, ___smallPrimes_2)); }
	inline UInt32U5BU5D_t2763435308* get_smallPrimes_2() const { return ___smallPrimes_2; }
	inline UInt32U5BU5D_t2763435308** get_address_of_smallPrimes_2() { return &___smallPrimes_2; }
	inline void set_smallPrimes_2(UInt32U5BU5D_t2763435308* value)
	{
		___smallPrimes_2 = value;
		Il2CppCodeGenWriteBarrier((&___smallPrimes_2), value);
	}

	inline static int32_t get_offset_of_rng_3() { return static_cast<int32_t>(offsetof(BigInteger_t2277584885_StaticFields, ___rng_3)); }
	inline RandomNumberGenerator_t4293320709 * get_rng_3() const { return ___rng_3; }
	inline RandomNumberGenerator_t4293320709 ** get_address_of_rng_3() { return &___rng_3; }
	inline void set_rng_3(RandomNumberGenerator_t4293320709 * value)
	{
		___rng_3 = value;
		Il2CppCodeGenWriteBarrier((&___rng_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BIGINTEGER_T2277584885_H
#ifndef TIMEZONE_T4204515528_H
#define TIMEZONE_T4204515528_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeZone
struct  TimeZone_t4204515528  : public RuntimeObject
{
public:

public:
};

struct TimeZone_t4204515528_StaticFields
{
public:
	// System.TimeZone System.TimeZone::currentTimeZone
	TimeZone_t4204515528 * ___currentTimeZone_0;
	// System.Object System.TimeZone::tz_lock
	RuntimeObject * ___tz_lock_1;
	// System.Int64 System.TimeZone::timezone_check
	int64_t ___timezone_check_2;

public:
	inline static int32_t get_offset_of_currentTimeZone_0() { return static_cast<int32_t>(offsetof(TimeZone_t4204515528_StaticFields, ___currentTimeZone_0)); }
	inline TimeZone_t4204515528 * get_currentTimeZone_0() const { return ___currentTimeZone_0; }
	inline TimeZone_t4204515528 ** get_address_of_currentTimeZone_0() { return &___currentTimeZone_0; }
	inline void set_currentTimeZone_0(TimeZone_t4204515528 * value)
	{
		___currentTimeZone_0 = value;
		Il2CppCodeGenWriteBarrier((&___currentTimeZone_0), value);
	}

	inline static int32_t get_offset_of_tz_lock_1() { return static_cast<int32_t>(offsetof(TimeZone_t4204515528_StaticFields, ___tz_lock_1)); }
	inline RuntimeObject * get_tz_lock_1() const { return ___tz_lock_1; }
	inline RuntimeObject ** get_address_of_tz_lock_1() { return &___tz_lock_1; }
	inline void set_tz_lock_1(RuntimeObject * value)
	{
		___tz_lock_1 = value;
		Il2CppCodeGenWriteBarrier((&___tz_lock_1), value);
	}

	inline static int32_t get_offset_of_timezone_check_2() { return static_cast<int32_t>(offsetof(TimeZone_t4204515528_StaticFields, ___timezone_check_2)); }
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
#endif // TIMEZONE_T4204515528_H
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
#ifndef RANDOM_T1675491652_H
#define RANDOM_T1675491652_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Random
struct  Random_t1675491652  : public RuntimeObject
{
public:
	// System.Int32 System.Random::inext
	int32_t ___inext_0;
	// System.Int32 System.Random::inextp
	int32_t ___inextp_1;
	// System.Int32[] System.Random::SeedArray
	Int32U5BU5D_t3162311898* ___SeedArray_2;

public:
	inline static int32_t get_offset_of_inext_0() { return static_cast<int32_t>(offsetof(Random_t1675491652, ___inext_0)); }
	inline int32_t get_inext_0() const { return ___inext_0; }
	inline int32_t* get_address_of_inext_0() { return &___inext_0; }
	inline void set_inext_0(int32_t value)
	{
		___inext_0 = value;
	}

	inline static int32_t get_offset_of_inextp_1() { return static_cast<int32_t>(offsetof(Random_t1675491652, ___inextp_1)); }
	inline int32_t get_inextp_1() const { return ___inextp_1; }
	inline int32_t* get_address_of_inextp_1() { return &___inextp_1; }
	inline void set_inextp_1(int32_t value)
	{
		___inextp_1 = value;
	}

	inline static int32_t get_offset_of_SeedArray_2() { return static_cast<int32_t>(offsetof(Random_t1675491652, ___SeedArray_2)); }
	inline Int32U5BU5D_t3162311898* get_SeedArray_2() const { return ___SeedArray_2; }
	inline Int32U5BU5D_t3162311898** get_address_of_SeedArray_2() { return &___SeedArray_2; }
	inline void set_SeedArray_2(Int32U5BU5D_t3162311898* value)
	{
		___SeedArray_2 = value;
		Il2CppCodeGenWriteBarrier((&___SeedArray_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANDOM_T1675491652_H
#ifndef PARSER_T1169693439_H
#define PARSER_T1169693439_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan/Parser
struct  Parser_t1169693439  : public RuntimeObject
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
	inline static int32_t get_offset_of__src_0() { return static_cast<int32_t>(offsetof(Parser_t1169693439, ____src_0)); }
	inline String_t* get__src_0() const { return ____src_0; }
	inline String_t** get_address_of__src_0() { return &____src_0; }
	inline void set__src_0(String_t* value)
	{
		____src_0 = value;
		Il2CppCodeGenWriteBarrier((&____src_0), value);
	}

	inline static int32_t get_offset_of__cur_1() { return static_cast<int32_t>(offsetof(Parser_t1169693439, ____cur_1)); }
	inline int32_t get__cur_1() const { return ____cur_1; }
	inline int32_t* get_address_of__cur_1() { return &____cur_1; }
	inline void set__cur_1(int32_t value)
	{
		____cur_1 = value;
	}

	inline static int32_t get_offset_of__length_2() { return static_cast<int32_t>(offsetof(Parser_t1169693439, ____length_2)); }
	inline int32_t get__length_2() const { return ____length_2; }
	inline int32_t* get_address_of__length_2() { return &____length_2; }
	inline void set__length_2(int32_t value)
	{
		____length_2 = value;
	}

	inline static int32_t get_offset_of_formatError_3() { return static_cast<int32_t>(offsetof(Parser_t1169693439, ___formatError_3)); }
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
#endif // PARSER_T1169693439_H
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
#ifndef STRINGCOMPARER_T3330776541_H
#define STRINGCOMPARER_T3330776541_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.StringComparer
struct  StringComparer_t3330776541  : public RuntimeObject
{
public:

public:
};

struct StringComparer_t3330776541_StaticFields
{
public:
	// System.StringComparer System.StringComparer::invariantCultureIgnoreCase
	StringComparer_t3330776541 * ___invariantCultureIgnoreCase_0;
	// System.StringComparer System.StringComparer::invariantCulture
	StringComparer_t3330776541 * ___invariantCulture_1;
	// System.StringComparer System.StringComparer::ordinalIgnoreCase
	StringComparer_t3330776541 * ___ordinalIgnoreCase_2;
	// System.StringComparer System.StringComparer::ordinal
	StringComparer_t3330776541 * ___ordinal_3;

public:
	inline static int32_t get_offset_of_invariantCultureIgnoreCase_0() { return static_cast<int32_t>(offsetof(StringComparer_t3330776541_StaticFields, ___invariantCultureIgnoreCase_0)); }
	inline StringComparer_t3330776541 * get_invariantCultureIgnoreCase_0() const { return ___invariantCultureIgnoreCase_0; }
	inline StringComparer_t3330776541 ** get_address_of_invariantCultureIgnoreCase_0() { return &___invariantCultureIgnoreCase_0; }
	inline void set_invariantCultureIgnoreCase_0(StringComparer_t3330776541 * value)
	{
		___invariantCultureIgnoreCase_0 = value;
		Il2CppCodeGenWriteBarrier((&___invariantCultureIgnoreCase_0), value);
	}

	inline static int32_t get_offset_of_invariantCulture_1() { return static_cast<int32_t>(offsetof(StringComparer_t3330776541_StaticFields, ___invariantCulture_1)); }
	inline StringComparer_t3330776541 * get_invariantCulture_1() const { return ___invariantCulture_1; }
	inline StringComparer_t3330776541 ** get_address_of_invariantCulture_1() { return &___invariantCulture_1; }
	inline void set_invariantCulture_1(StringComparer_t3330776541 * value)
	{
		___invariantCulture_1 = value;
		Il2CppCodeGenWriteBarrier((&___invariantCulture_1), value);
	}

	inline static int32_t get_offset_of_ordinalIgnoreCase_2() { return static_cast<int32_t>(offsetof(StringComparer_t3330776541_StaticFields, ___ordinalIgnoreCase_2)); }
	inline StringComparer_t3330776541 * get_ordinalIgnoreCase_2() const { return ___ordinalIgnoreCase_2; }
	inline StringComparer_t3330776541 ** get_address_of_ordinalIgnoreCase_2() { return &___ordinalIgnoreCase_2; }
	inline void set_ordinalIgnoreCase_2(StringComparer_t3330776541 * value)
	{
		___ordinalIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((&___ordinalIgnoreCase_2), value);
	}

	inline static int32_t get_offset_of_ordinal_3() { return static_cast<int32_t>(offsetof(StringComparer_t3330776541_StaticFields, ___ordinal_3)); }
	inline StringComparer_t3330776541 * get_ordinal_3() const { return ___ordinal_3; }
	inline StringComparer_t3330776541 ** get_address_of_ordinal_3() { return &___ordinal_3; }
	inline void set_ordinal_3(StringComparer_t3330776541 * value)
	{
		___ordinal_3 = value;
		Il2CppCodeGenWriteBarrier((&___ordinal_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGCOMPARER_T3330776541_H
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
#ifndef U24ARRAYTYPEU243132_T3841156690_H
#define U24ARRAYTYPEU243132_T3841156690_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$3132
struct  U24ArrayTypeU243132_t3841156690 
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
		uint8_t U24ArrayTypeU243132_t3841156690__padding[3132];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU243132_T3841156690_H
#ifndef U24ARRAYTYPEU2420_T3138775208_H
#define U24ARRAYTYPEU2420_T3138775208_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$20
struct  U24ArrayTypeU2420_t3138775208 
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
		uint8_t U24ArrayTypeU2420_t3138775208__padding[20];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2420_T3138775208_H
#ifndef U24ARRAYTYPEU2432_T3859783016_H
#define U24ARRAYTYPEU2432_T3859783016_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$32
struct  U24ArrayTypeU2432_t3859783016 
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
		uint8_t U24ArrayTypeU2432_t3859783016__padding[32];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2432_T3859783016_H
#ifndef U24ARRAYTYPEU2448_T3247860447_H
#define U24ARRAYTYPEU2448_T3247860447_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$48
struct  U24ArrayTypeU2448_t3247860447 
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
		uint8_t U24ArrayTypeU2448_t3247860447__padding[48];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2448_T3247860447_H
#ifndef U24ARRAYTYPEU2464_T576514567_H
#define U24ARRAYTYPEU2464_T576514567_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$64
struct  U24ArrayTypeU2464_t576514567 
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
		uint8_t U24ArrayTypeU2464_t576514567__padding[64];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2464_T576514567_H
#ifndef U24ARRAYTYPEU2412_T99387221_H
#define U24ARRAYTYPEU2412_T99387221_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$12
struct  U24ArrayTypeU2412_t99387221 
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
		uint8_t U24ArrayTypeU2412_t99387221__padding[12];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2412_T99387221_H
#ifndef BOOLEAN_T3622474677_H
#define BOOLEAN_T3622474677_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t3622474677 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t3622474677, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t3622474677_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t3622474677_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t3622474677_StaticFields, ___TrueString_1)); }
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
#endif // BOOLEAN_T3622474677_H
#ifndef U24ARRAYTYPEU248_T1411500877_H
#define U24ARRAYTYPEU248_T1411500877_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$8
struct  U24ArrayTypeU248_t1411500877 
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
		uint8_t U24ArrayTypeU248_t1411500877__padding[8];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU248_T1411500877_H
#ifndef U24ARRAYTYPEU2472_T3372676604_H
#define U24ARRAYTYPEU2472_T3372676604_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$72
struct  U24ArrayTypeU2472_t3372676604 
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
		uint8_t U24ArrayTypeU2472_t3372676604__padding[72];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2472_T3372676604_H
#ifndef U24ARRAYTYPEU24124_T1060395960_H
#define U24ARRAYTYPEU24124_T1060395960_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$124
struct  U24ArrayTypeU24124_t1060395960 
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
		uint8_t U24ArrayTypeU24124_t1060395960__padding[124];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24124_T1060395960_H
#ifndef U24ARRAYTYPEU2496_T2666517524_H
#define U24ARRAYTYPEU2496_T2666517524_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$96
struct  U24ArrayTypeU2496_t2666517524 
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
		uint8_t U24ArrayTypeU2496_t2666517524__padding[96];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2496_T2666517524_H
#ifndef U24ARRAYTYPEU242048_T109220664_H
#define U24ARRAYTYPEU242048_T109220664_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$2048
struct  U24ArrayTypeU242048_t109220664 
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
		uint8_t U24ArrayTypeU242048_t109220664__padding[2048];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU242048_T109220664_H
#ifndef U24ARRAYTYPEU24256_T856796148_H
#define U24ARRAYTYPEU24256_T856796148_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$256
struct  U24ArrayTypeU24256_t856796148 
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
		uint8_t U24ArrayTypeU24256_t856796148__padding[256];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24256_T856796148_H
#ifndef U24ARRAYTYPEU241024_T29942718_H
#define U24ARRAYTYPEU241024_T29942718_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$1024
struct  U24ArrayTypeU241024_t29942718 
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
		uint8_t U24ArrayTypeU241024_t29942718__padding[1024];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU241024_T29942718_H
#ifndef U24ARRAYTYPEU24640_T2996305577_H
#define U24ARRAYTYPEU24640_T2996305577_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$640
struct  U24ArrayTypeU24640_t2996305577 
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
		uint8_t U24ArrayTypeU24640_t2996305577__padding[640];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24640_T2996305577_H
#ifndef U24ARRAYTYPEU24128_T1267203091_H
#define U24ARRAYTYPEU24128_T1267203091_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$128
struct  U24ArrayTypeU24128_t1267203091 
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
		uint8_t U24ArrayTypeU24128_t1267203091__padding[128];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24128_T1267203091_H
#ifndef U24ARRAYTYPEU2452_T302455132_H
#define U24ARRAYTYPEU2452_T302455132_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$52
struct  U24ArrayTypeU2452_t302455132 
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
		uint8_t U24ArrayTypeU2452_t302455132__padding[52];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2452_T302455132_H
#ifndef __IL2CPPCOMDELEGATE_T1745187719_H
#define __IL2CPPCOMDELEGATE_T1745187719_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.__Il2CppComDelegate
struct  __Il2CppComDelegate_t1745187719  : public Il2CppComObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __IL2CPPCOMDELEGATE_T1745187719_H
#ifndef U24ARRAYTYPEU24120_T1454327024_H
#define U24ARRAYTYPEU24120_T1454327024_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$120
struct  U24ArrayTypeU24120_t1454327024 
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
		uint8_t U24ArrayTypeU24120_t1454327024__padding[120];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24120_T1454327024_H
#ifndef U24ARRAYTYPEU2416_T1106822058_H
#define U24ARRAYTYPEU2416_T1106822058_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$16
struct  U24ArrayTypeU2416_t1106822058 
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
		uint8_t U24ArrayTypeU2416_t1106822058__padding[16];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2416_T1106822058_H
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
#ifndef U24ARRAYTYPEU2456_T1643933315_H
#define U24ARRAYTYPEU2456_T1643933315_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$56
struct  U24ArrayTypeU2456_t1643933315 
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
		uint8_t U24ArrayTypeU2456_t1643933315__padding[56];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2456_T1643933315_H
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
#ifndef UNHANDLEDEXCEPTIONEVENTARGS_T2717029072_H
#define UNHANDLEDEXCEPTIONEVENTARGS_T2717029072_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnhandledExceptionEventArgs
struct  UnhandledExceptionEventArgs_t2717029072  : public EventArgs_t1070293258
{
public:
	// System.Object System.UnhandledExceptionEventArgs::exception
	RuntimeObject * ___exception_1;
	// System.Boolean System.UnhandledExceptionEventArgs::m_isTerminating
	bool ___m_isTerminating_2;

public:
	inline static int32_t get_offset_of_exception_1() { return static_cast<int32_t>(offsetof(UnhandledExceptionEventArgs_t2717029072, ___exception_1)); }
	inline RuntimeObject * get_exception_1() const { return ___exception_1; }
	inline RuntimeObject ** get_address_of_exception_1() { return &___exception_1; }
	inline void set_exception_1(RuntimeObject * value)
	{
		___exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___exception_1), value);
	}

	inline static int32_t get_offset_of_m_isTerminating_2() { return static_cast<int32_t>(offsetof(UnhandledExceptionEventArgs_t2717029072, ___m_isTerminating_2)); }
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
#endif // UNHANDLEDEXCEPTIONEVENTARGS_T2717029072_H
#ifndef TIMESPAN_T732814339_H
#define TIMESPAN_T732814339_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t732814339 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t732814339, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t732814339_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t732814339  ___MaxValue_0;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t732814339  ___MinValue_1;
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t732814339  ___Zero_2;

public:
	inline static int32_t get_offset_of_MaxValue_0() { return static_cast<int32_t>(offsetof(TimeSpan_t732814339_StaticFields, ___MaxValue_0)); }
	inline TimeSpan_t732814339  get_MaxValue_0() const { return ___MaxValue_0; }
	inline TimeSpan_t732814339 * get_address_of_MaxValue_0() { return &___MaxValue_0; }
	inline void set_MaxValue_0(TimeSpan_t732814339  value)
	{
		___MaxValue_0 = value;
	}

	inline static int32_t get_offset_of_MinValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t732814339_StaticFields, ___MinValue_1)); }
	inline TimeSpan_t732814339  get_MinValue_1() const { return ___MinValue_1; }
	inline TimeSpan_t732814339 * get_address_of_MinValue_1() { return &___MinValue_1; }
	inline void set_MinValue_1(TimeSpan_t732814339  value)
	{
		___MinValue_1 = value;
	}

	inline static int32_t get_offset_of_Zero_2() { return static_cast<int32_t>(offsetof(TimeSpan_t732814339_StaticFields, ___Zero_2)); }
	inline TimeSpan_t732814339  get_Zero_2() const { return ___Zero_2; }
	inline TimeSpan_t732814339 * get_address_of_Zero_2() { return &___Zero_2; }
	inline void set_Zero_2(TimeSpan_t732814339  value)
	{
		___Zero_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T732814339_H
#ifndef THREADSTATICATTRIBUTE_T3482216553_H
#define THREADSTATICATTRIBUTE_T3482216553_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ThreadStaticAttribute
struct  ThreadStaticAttribute_t3482216553  : public Attribute_t1176385794
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREADSTATICATTRIBUTE_T3482216553_H
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
#ifndef U24ARRAYTYPEU2424_T3433776814_H
#define U24ARRAYTYPEU2424_T3433776814_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$24
struct  U24ArrayTypeU2424_t3433776814 
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
		uint8_t U24ArrayTypeU2424_t3433776814__padding[24];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2424_T3433776814_H
#ifndef MD2_T1984760486_H
#define MD2_T1984760486_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.MD2
struct  MD2_t1984760486  : public HashAlgorithm_t3280178693
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MD2_T1984760486_H
#ifndef MD4_T2166282422_H
#define MD4_T2166282422_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.MD4
struct  MD4_t2166282422  : public HashAlgorithm_t3280178693
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MD4_T2166282422_H
#ifndef ORDINALCOMPARER_T104826955_H
#define ORDINALCOMPARER_T104826955_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.OrdinalComparer
struct  OrdinalComparer_t104826955  : public StringComparer_t3330776541
{
public:
	// System.Boolean System.OrdinalComparer::_ignoreCase
	bool ____ignoreCase_4;

public:
	inline static int32_t get_offset_of__ignoreCase_4() { return static_cast<int32_t>(offsetof(OrdinalComparer_t104826955, ____ignoreCase_4)); }
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
#endif // ORDINALCOMPARER_T104826955_H
#ifndef CULTUREAWARECOMPARER_T1326799568_H
#define CULTUREAWARECOMPARER_T1326799568_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.CultureAwareComparer
struct  CultureAwareComparer_t1326799568  : public StringComparer_t3330776541
{
public:
	// System.Boolean System.CultureAwareComparer::_ignoreCase
	bool ____ignoreCase_4;
	// System.Globalization.CompareInfo System.CultureAwareComparer::_compareInfo
	CompareInfo_t2628715801 * ____compareInfo_5;

public:
	inline static int32_t get_offset_of__ignoreCase_4() { return static_cast<int32_t>(offsetof(CultureAwareComparer_t1326799568, ____ignoreCase_4)); }
	inline bool get__ignoreCase_4() const { return ____ignoreCase_4; }
	inline bool* get_address_of__ignoreCase_4() { return &____ignoreCase_4; }
	inline void set__ignoreCase_4(bool value)
	{
		____ignoreCase_4 = value;
	}

	inline static int32_t get_offset_of__compareInfo_5() { return static_cast<int32_t>(offsetof(CultureAwareComparer_t1326799568, ____compareInfo_5)); }
	inline CompareInfo_t2628715801 * get__compareInfo_5() const { return ____compareInfo_5; }
	inline CompareInfo_t2628715801 ** get_address_of__compareInfo_5() { return &____compareInfo_5; }
	inline void set__compareInfo_5(CompareInfo_t2628715801 * value)
	{
		____compareInfo_5 = value;
		Il2CppCodeGenWriteBarrier((&____compareInfo_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CULTUREAWARECOMPARER_T1326799568_H
#ifndef GCHANDLE_T3707682716_H
#define GCHANDLE_T3707682716_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.GCHandle
struct  GCHandle_t3707682716 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t3707682716, ___handle_0)); }
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
#endif // GCHANDLE_T3707682716_H
#ifndef RESOLVEEVENTARGS_T4059759978_H
#define RESOLVEEVENTARGS_T4059759978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ResolveEventArgs
struct  ResolveEventArgs_t4059759978  : public EventArgs_t1070293258
{
public:
	// System.String System.ResolveEventArgs::m_Name
	String_t* ___m_Name_1;

public:
	inline static int32_t get_offset_of_m_Name_1() { return static_cast<int32_t>(offsetof(ResolveEventArgs_t4059759978, ___m_Name_1)); }
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
#endif // RESOLVEEVENTARGS_T4059759978_H
#ifndef SEQUENTIALSEARCHPRIMEGENERATORBASE_T2621017452_H
#define SEQUENTIALSEARCHPRIMEGENERATORBASE_T2621017452_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase
struct  SequentialSearchPrimeGeneratorBase_t2621017452  : public PrimeGeneratorBase_t4236485941
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SEQUENTIALSEARCHPRIMEGENERATORBASE_T2621017452_H
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
#ifndef U24ARRAYTYPEU24136_T821082809_H
#define U24ARRAYTYPEU24136_T821082809_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$136
struct  U24ArrayTypeU24136_t821082809 
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
		uint8_t U24ArrayTypeU24136_t821082809__padding[136];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24136_T821082809_H
#ifndef MD2MANAGED_T4090624548_H
#define MD2MANAGED_T4090624548_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.MD2Managed
struct  MD2Managed_t4090624548  : public MD2_t1984760486
{
public:
	// System.Byte[] Mono.Security.Cryptography.MD2Managed::state
	ByteU5BU5D_t3990433866* ___state_4;
	// System.Byte[] Mono.Security.Cryptography.MD2Managed::checksum
	ByteU5BU5D_t3990433866* ___checksum_5;
	// System.Byte[] Mono.Security.Cryptography.MD2Managed::buffer
	ByteU5BU5D_t3990433866* ___buffer_6;
	// System.Int32 Mono.Security.Cryptography.MD2Managed::count
	int32_t ___count_7;
	// System.Byte[] Mono.Security.Cryptography.MD2Managed::x
	ByteU5BU5D_t3990433866* ___x_8;

public:
	inline static int32_t get_offset_of_state_4() { return static_cast<int32_t>(offsetof(MD2Managed_t4090624548, ___state_4)); }
	inline ByteU5BU5D_t3990433866* get_state_4() const { return ___state_4; }
	inline ByteU5BU5D_t3990433866** get_address_of_state_4() { return &___state_4; }
	inline void set_state_4(ByteU5BU5D_t3990433866* value)
	{
		___state_4 = value;
		Il2CppCodeGenWriteBarrier((&___state_4), value);
	}

	inline static int32_t get_offset_of_checksum_5() { return static_cast<int32_t>(offsetof(MD2Managed_t4090624548, ___checksum_5)); }
	inline ByteU5BU5D_t3990433866* get_checksum_5() const { return ___checksum_5; }
	inline ByteU5BU5D_t3990433866** get_address_of_checksum_5() { return &___checksum_5; }
	inline void set_checksum_5(ByteU5BU5D_t3990433866* value)
	{
		___checksum_5 = value;
		Il2CppCodeGenWriteBarrier((&___checksum_5), value);
	}

	inline static int32_t get_offset_of_buffer_6() { return static_cast<int32_t>(offsetof(MD2Managed_t4090624548, ___buffer_6)); }
	inline ByteU5BU5D_t3990433866* get_buffer_6() const { return ___buffer_6; }
	inline ByteU5BU5D_t3990433866** get_address_of_buffer_6() { return &___buffer_6; }
	inline void set_buffer_6(ByteU5BU5D_t3990433866* value)
	{
		___buffer_6 = value;
		Il2CppCodeGenWriteBarrier((&___buffer_6), value);
	}

	inline static int32_t get_offset_of_count_7() { return static_cast<int32_t>(offsetof(MD2Managed_t4090624548, ___count_7)); }
	inline int32_t get_count_7() const { return ___count_7; }
	inline int32_t* get_address_of_count_7() { return &___count_7; }
	inline void set_count_7(int32_t value)
	{
		___count_7 = value;
	}

	inline static int32_t get_offset_of_x_8() { return static_cast<int32_t>(offsetof(MD2Managed_t4090624548, ___x_8)); }
	inline ByteU5BU5D_t3990433866* get_x_8() const { return ___x_8; }
	inline ByteU5BU5D_t3990433866** get_address_of_x_8() { return &___x_8; }
	inline void set_x_8(ByteU5BU5D_t3990433866* value)
	{
		___x_8 = value;
		Il2CppCodeGenWriteBarrier((&___x_8), value);
	}
};

struct MD2Managed_t4090624548_StaticFields
{
public:
	// System.Byte[] Mono.Security.Cryptography.MD2Managed::PI_SUBST
	ByteU5BU5D_t3990433866* ___PI_SUBST_9;

public:
	inline static int32_t get_offset_of_PI_SUBST_9() { return static_cast<int32_t>(offsetof(MD2Managed_t4090624548_StaticFields, ___PI_SUBST_9)); }
	inline ByteU5BU5D_t3990433866* get_PI_SUBST_9() const { return ___PI_SUBST_9; }
	inline ByteU5BU5D_t3990433866** get_address_of_PI_SUBST_9() { return &___PI_SUBST_9; }
	inline void set_PI_SUBST_9(ByteU5BU5D_t3990433866* value)
	{
		___PI_SUBST_9 = value;
		Il2CppCodeGenWriteBarrier((&___PI_SUBST_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MD2MANAGED_T4090624548_H
#ifndef MD4MANAGED_T51601562_H
#define MD4MANAGED_T51601562_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.MD4Managed
struct  MD4Managed_t51601562  : public MD4_t2166282422
{
public:
	// System.UInt32[] Mono.Security.Cryptography.MD4Managed::state
	UInt32U5BU5D_t2763435308* ___state_4;
	// System.Byte[] Mono.Security.Cryptography.MD4Managed::buffer
	ByteU5BU5D_t3990433866* ___buffer_5;
	// System.UInt32[] Mono.Security.Cryptography.MD4Managed::count
	UInt32U5BU5D_t2763435308* ___count_6;
	// System.UInt32[] Mono.Security.Cryptography.MD4Managed::x
	UInt32U5BU5D_t2763435308* ___x_7;
	// System.Byte[] Mono.Security.Cryptography.MD4Managed::digest
	ByteU5BU5D_t3990433866* ___digest_8;

public:
	inline static int32_t get_offset_of_state_4() { return static_cast<int32_t>(offsetof(MD4Managed_t51601562, ___state_4)); }
	inline UInt32U5BU5D_t2763435308* get_state_4() const { return ___state_4; }
	inline UInt32U5BU5D_t2763435308** get_address_of_state_4() { return &___state_4; }
	inline void set_state_4(UInt32U5BU5D_t2763435308* value)
	{
		___state_4 = value;
		Il2CppCodeGenWriteBarrier((&___state_4), value);
	}

	inline static int32_t get_offset_of_buffer_5() { return static_cast<int32_t>(offsetof(MD4Managed_t51601562, ___buffer_5)); }
	inline ByteU5BU5D_t3990433866* get_buffer_5() const { return ___buffer_5; }
	inline ByteU5BU5D_t3990433866** get_address_of_buffer_5() { return &___buffer_5; }
	inline void set_buffer_5(ByteU5BU5D_t3990433866* value)
	{
		___buffer_5 = value;
		Il2CppCodeGenWriteBarrier((&___buffer_5), value);
	}

	inline static int32_t get_offset_of_count_6() { return static_cast<int32_t>(offsetof(MD4Managed_t51601562, ___count_6)); }
	inline UInt32U5BU5D_t2763435308* get_count_6() const { return ___count_6; }
	inline UInt32U5BU5D_t2763435308** get_address_of_count_6() { return &___count_6; }
	inline void set_count_6(UInt32U5BU5D_t2763435308* value)
	{
		___count_6 = value;
		Il2CppCodeGenWriteBarrier((&___count_6), value);
	}

	inline static int32_t get_offset_of_x_7() { return static_cast<int32_t>(offsetof(MD4Managed_t51601562, ___x_7)); }
	inline UInt32U5BU5D_t2763435308* get_x_7() const { return ___x_7; }
	inline UInt32U5BU5D_t2763435308** get_address_of_x_7() { return &___x_7; }
	inline void set_x_7(UInt32U5BU5D_t2763435308* value)
	{
		___x_7 = value;
		Il2CppCodeGenWriteBarrier((&___x_7), value);
	}

	inline static int32_t get_offset_of_digest_8() { return static_cast<int32_t>(offsetof(MD4Managed_t51601562, ___digest_8)); }
	inline ByteU5BU5D_t3990433866* get_digest_8() const { return ___digest_8; }
	inline ByteU5BU5D_t3990433866** get_address_of_digest_8() { return &___digest_8; }
	inline void set_digest_8(ByteU5BU5D_t3990433866* value)
	{
		___digest_8 = value;
		Il2CppCodeGenWriteBarrier((&___digest_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MD4MANAGED_T51601562_H
#ifndef CONFIDENCEFACTOR_T470587627_H
#define CONFIDENCEFACTOR_T470587627_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.Prime.ConfidenceFactor
struct  ConfidenceFactor_t470587627 
{
public:
	// System.Int32 Mono.Math.Prime.ConfidenceFactor::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ConfidenceFactor_t470587627, ___value___1)); }
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
#endif // CONFIDENCEFACTOR_T470587627_H
#ifndef ARITHMETICEXCEPTION_T2770510680_H
#define ARITHMETICEXCEPTION_T2770510680_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArithmeticException
struct  ArithmeticException_t2770510680  : public SystemException_t1142596300
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARITHMETICEXCEPTION_T2770510680_H
#ifndef CONFIDENCEFACTOR_T470587628_H
#define CONFIDENCEFACTOR_T470587628_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.Prime.ConfidenceFactor
struct  ConfidenceFactor_t470587628 
{
public:
	// System.Int32 Mono.Math.Prime.ConfidenceFactor::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ConfidenceFactor_t470587628, ___value___1)); }
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
#endif // CONFIDENCEFACTOR_T470587628_H
#ifndef NOTSUPPORTEDEXCEPTION_T4036800119_H
#define NOTSUPPORTEDEXCEPTION_T4036800119_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotSupportedException
struct  NotSupportedException_t4036800119  : public SystemException_t1142596300
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTSUPPORTEDEXCEPTION_T4036800119_H
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
#ifndef OUTOFMEMORYEXCEPTION_T4070029370_H
#define OUTOFMEMORYEXCEPTION_T4070029370_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.OutOfMemoryException
struct  OutOfMemoryException_t4070029370  : public SystemException_t1142596300
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OUTOFMEMORYEXCEPTION_T4070029370_H
#ifndef PLATFORMID_T3422453041_H
#define PLATFORMID_T3422453041_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.PlatformID
struct  PlatformID_t3422453041 
{
public:
	// System.Int32 System.PlatformID::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PlatformID_t3422453041, ___value___1)); }
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
#endif // PLATFORMID_T3422453041_H
#ifndef RANKEXCEPTION_T3140096266_H
#define RANKEXCEPTION_T3140096266_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RankException
struct  RankException_t3140096266  : public SystemException_t1142596300
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANKEXCEPTION_T3140096266_H
#ifndef RUNTIMEMETHODHANDLE_T3532211545_H
#define RUNTIMEMETHODHANDLE_T3532211545_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeMethodHandle
struct  RuntimeMethodHandle_t3532211545 
{
public:
	// System.IntPtr System.RuntimeMethodHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeMethodHandle_t3532211545, ___value_0)); }
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
#endif // RUNTIMEMETHODHANDLE_T3532211545_H
#ifndef STACKOVERFLOWEXCEPTION_T1587604695_H
#define STACKOVERFLOWEXCEPTION_T1587604695_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.StackOverflowException
struct  StackOverflowException_t1587604695  : public SystemException_t1142596300
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STACKOVERFLOWEXCEPTION_T1587604695_H
#ifndef STRINGCOMPARISON_T274985830_H
#define STRINGCOMPARISON_T274985830_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.StringComparison
struct  StringComparison_t274985830 
{
public:
	// System.Int32 System.StringComparison::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StringComparison_t274985830, ___value___1)); }
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
#endif // STRINGCOMPARISON_T274985830_H
#ifndef STRINGSPLITOPTIONS_T89086037_H
#define STRINGSPLITOPTIONS_T89086037_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.StringSplitOptions
struct  StringSplitOptions_t89086037 
{
public:
	// System.Int32 System.StringSplitOptions::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StringSplitOptions_t89086037, ___value___1)); }
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
#endif // STRINGSPLITOPTIONS_T89086037_H
#ifndef CURRENTSYSTEMTIMEZONE_T1938437716_H
#define CURRENTSYSTEMTIMEZONE_T1938437716_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.CurrentSystemTimeZone
struct  CurrentSystemTimeZone_t1938437716  : public TimeZone_t4204515528
{
public:
	// System.String System.CurrentSystemTimeZone::m_standardName
	String_t* ___m_standardName_3;
	// System.String System.CurrentSystemTimeZone::m_daylightName
	String_t* ___m_daylightName_4;
	// System.Collections.Hashtable System.CurrentSystemTimeZone::m_CachedDaylightChanges
	Hashtable_t1579358919 * ___m_CachedDaylightChanges_5;
	// System.Int64 System.CurrentSystemTimeZone::m_ticksOffset
	int64_t ___m_ticksOffset_6;
	// System.TimeSpan System.CurrentSystemTimeZone::utcOffsetWithOutDLS
	TimeSpan_t732814339  ___utcOffsetWithOutDLS_7;
	// System.TimeSpan System.CurrentSystemTimeZone::utcOffsetWithDLS
	TimeSpan_t732814339  ___utcOffsetWithDLS_8;

public:
	inline static int32_t get_offset_of_m_standardName_3() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t1938437716, ___m_standardName_3)); }
	inline String_t* get_m_standardName_3() const { return ___m_standardName_3; }
	inline String_t** get_address_of_m_standardName_3() { return &___m_standardName_3; }
	inline void set_m_standardName_3(String_t* value)
	{
		___m_standardName_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_standardName_3), value);
	}

	inline static int32_t get_offset_of_m_daylightName_4() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t1938437716, ___m_daylightName_4)); }
	inline String_t* get_m_daylightName_4() const { return ___m_daylightName_4; }
	inline String_t** get_address_of_m_daylightName_4() { return &___m_daylightName_4; }
	inline void set_m_daylightName_4(String_t* value)
	{
		___m_daylightName_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_daylightName_4), value);
	}

	inline static int32_t get_offset_of_m_CachedDaylightChanges_5() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t1938437716, ___m_CachedDaylightChanges_5)); }
	inline Hashtable_t1579358919 * get_m_CachedDaylightChanges_5() const { return ___m_CachedDaylightChanges_5; }
	inline Hashtable_t1579358919 ** get_address_of_m_CachedDaylightChanges_5() { return &___m_CachedDaylightChanges_5; }
	inline void set_m_CachedDaylightChanges_5(Hashtable_t1579358919 * value)
	{
		___m_CachedDaylightChanges_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_CachedDaylightChanges_5), value);
	}

	inline static int32_t get_offset_of_m_ticksOffset_6() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t1938437716, ___m_ticksOffset_6)); }
	inline int64_t get_m_ticksOffset_6() const { return ___m_ticksOffset_6; }
	inline int64_t* get_address_of_m_ticksOffset_6() { return &___m_ticksOffset_6; }
	inline void set_m_ticksOffset_6(int64_t value)
	{
		___m_ticksOffset_6 = value;
	}

	inline static int32_t get_offset_of_utcOffsetWithOutDLS_7() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t1938437716, ___utcOffsetWithOutDLS_7)); }
	inline TimeSpan_t732814339  get_utcOffsetWithOutDLS_7() const { return ___utcOffsetWithOutDLS_7; }
	inline TimeSpan_t732814339 * get_address_of_utcOffsetWithOutDLS_7() { return &___utcOffsetWithOutDLS_7; }
	inline void set_utcOffsetWithOutDLS_7(TimeSpan_t732814339  value)
	{
		___utcOffsetWithOutDLS_7 = value;
	}

	inline static int32_t get_offset_of_utcOffsetWithDLS_8() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t1938437716, ___utcOffsetWithDLS_8)); }
	inline TimeSpan_t732814339  get_utcOffsetWithDLS_8() const { return ___utcOffsetWithDLS_8; }
	inline TimeSpan_t732814339 * get_address_of_utcOffsetWithDLS_8() { return &___utcOffsetWithDLS_8; }
	inline void set_utcOffsetWithDLS_8(TimeSpan_t732814339  value)
	{
		___utcOffsetWithDLS_8 = value;
	}
};

struct CurrentSystemTimeZone_t1938437716_StaticFields
{
public:
	// System.Int32 System.CurrentSystemTimeZone::this_year
	int32_t ___this_year_9;
	// System.Globalization.DaylightTime System.CurrentSystemTimeZone::this_year_dlt
	DaylightTime_t3143608337 * ___this_year_dlt_10;

public:
	inline static int32_t get_offset_of_this_year_9() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t1938437716_StaticFields, ___this_year_9)); }
	inline int32_t get_this_year_9() const { return ___this_year_9; }
	inline int32_t* get_address_of_this_year_9() { return &___this_year_9; }
	inline void set_this_year_9(int32_t value)
	{
		___this_year_9 = value;
	}

	inline static int32_t get_offset_of_this_year_dlt_10() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t1938437716_StaticFields, ___this_year_dlt_10)); }
	inline DaylightTime_t3143608337 * get_this_year_dlt_10() const { return ___this_year_dlt_10; }
	inline DaylightTime_t3143608337 ** get_address_of_this_year_dlt_10() { return &___this_year_dlt_10; }
	inline void set_this_year_dlt_10(DaylightTime_t3143608337 * value)
	{
		___this_year_dlt_10 = value;
		Il2CppCodeGenWriteBarrier((&___this_year_dlt_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CURRENTSYSTEMTIMEZONE_T1938437716_H
#ifndef TYPECODE_T517079440_H
#define TYPECODE_T517079440_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypeCode
struct  TypeCode_t517079440 
{
public:
	// System.Int32 System.TypeCode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TypeCode_t517079440, ___value___1)); }
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
#endif // TYPECODE_T517079440_H
#ifndef TYPEINITIALIZATIONEXCEPTION_T2692912257_H
#define TYPEINITIALIZATIONEXCEPTION_T2692912257_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypeInitializationException
struct  TypeInitializationException_t2692912257  : public SystemException_t1142596300
{
public:
	// System.String System.TypeInitializationException::type_name
	String_t* ___type_name_11;

public:
	inline static int32_t get_offset_of_type_name_11() { return static_cast<int32_t>(offsetof(TypeInitializationException_t2692912257, ___type_name_11)); }
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
#endif // TYPEINITIALIZATIONEXCEPTION_T2692912257_H
#ifndef TYPELOADEXCEPTION_T1966414668_H
#define TYPELOADEXCEPTION_T1966414668_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypeLoadException
struct  TypeLoadException_t1966414668  : public SystemException_t1142596300
{
public:
	// System.String System.TypeLoadException::className
	String_t* ___className_12;
	// System.String System.TypeLoadException::assemblyName
	String_t* ___assemblyName_13;

public:
	inline static int32_t get_offset_of_className_12() { return static_cast<int32_t>(offsetof(TypeLoadException_t1966414668, ___className_12)); }
	inline String_t* get_className_12() const { return ___className_12; }
	inline String_t** get_address_of_className_12() { return &___className_12; }
	inline void set_className_12(String_t* value)
	{
		___className_12 = value;
		Il2CppCodeGenWriteBarrier((&___className_12), value);
	}

	inline static int32_t get_offset_of_assemblyName_13() { return static_cast<int32_t>(offsetof(TypeLoadException_t1966414668, ___assemblyName_13)); }
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
#endif // TYPELOADEXCEPTION_T1966414668_H
#ifndef UNAUTHORIZEDACCESSEXCEPTION_T2280091743_H
#define UNAUTHORIZEDACCESSEXCEPTION_T2280091743_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnauthorizedAccessException
struct  UnauthorizedAccessException_t2280091743  : public SystemException_t1142596300
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNAUTHORIZEDACCESSEXCEPTION_T2280091743_H
#ifndef SIGN_T2094138786_H
#define SIGN_T2094138786_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.BigInteger/Sign
struct  Sign_t2094138786 
{
public:
	// System.Int32 Mono.Math.BigInteger/Sign::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Sign_t2094138786, ___value___1)); }
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
#endif // SIGN_T2094138786_H
#ifndef WEAKREFERENCE_T1306613799_H
#define WEAKREFERENCE_T1306613799_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.WeakReference
struct  WeakReference_t1306613799  : public RuntimeObject
{
public:
	// System.Boolean System.WeakReference::isLongReference
	bool ___isLongReference_0;
	// System.Runtime.InteropServices.GCHandle System.WeakReference::gcHandle
	GCHandle_t3707682716  ___gcHandle_1;

public:
	inline static int32_t get_offset_of_isLongReference_0() { return static_cast<int32_t>(offsetof(WeakReference_t1306613799, ___isLongReference_0)); }
	inline bool get_isLongReference_0() const { return ___isLongReference_0; }
	inline bool* get_address_of_isLongReference_0() { return &___isLongReference_0; }
	inline void set_isLongReference_0(bool value)
	{
		___isLongReference_0 = value;
	}

	inline static int32_t get_offset_of_gcHandle_1() { return static_cast<int32_t>(offsetof(WeakReference_t1306613799, ___gcHandle_1)); }
	inline GCHandle_t3707682716  get_gcHandle_1() const { return ___gcHandle_1; }
	inline GCHandle_t3707682716 * get_address_of_gcHandle_1() { return &___gcHandle_1; }
	inline void set_gcHandle_1(GCHandle_t3707682716  value)
	{
		___gcHandle_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEAKREFERENCE_T1306613799_H
#ifndef UNITYTYPE_T1006333530_H
#define UNITYTYPE_T1006333530_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnitySerializationHolder/UnityType
struct  UnityType_t1006333530 
{
public:
	// System.Byte System.UnitySerializationHolder/UnityType::value__
	uint8_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UnityType_t1006333530, ___value___1)); }
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
#endif // UNITYTYPE_T1006333530_H
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T1444045952_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T1444045952_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t1444045952  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t1444045952_StaticFields
{
public:
	// <PrivateImplementationDetails>/$ArrayType$56 <PrivateImplementationDetails>::$$field-0
	U24ArrayTypeU2456_t1643933315  ___U24U24fieldU2D0_0;
	// <PrivateImplementationDetails>/$ArrayType$24 <PrivateImplementationDetails>::$$field-1
	U24ArrayTypeU2424_t3433776814  ___U24U24fieldU2D1_1;
	// <PrivateImplementationDetails>/$ArrayType$24 <PrivateImplementationDetails>::$$field-2
	U24ArrayTypeU2424_t3433776814  ___U24U24fieldU2D2_2;
	// <PrivateImplementationDetails>/$ArrayType$24 <PrivateImplementationDetails>::$$field-3
	U24ArrayTypeU2424_t3433776814  ___U24U24fieldU2D3_3;
	// <PrivateImplementationDetails>/$ArrayType$24 <PrivateImplementationDetails>::$$field-4
	U24ArrayTypeU2424_t3433776814  ___U24U24fieldU2D4_4;
	// <PrivateImplementationDetails>/$ArrayType$16 <PrivateImplementationDetails>::$$field-5
	U24ArrayTypeU2416_t1106822058  ___U24U24fieldU2D5_5;
	// <PrivateImplementationDetails>/$ArrayType$16 <PrivateImplementationDetails>::$$field-6
	U24ArrayTypeU2416_t1106822058  ___U24U24fieldU2D6_6;
	// <PrivateImplementationDetails>/$ArrayType$3132 <PrivateImplementationDetails>::$$field-15
	U24ArrayTypeU243132_t3841156690  ___U24U24fieldU2D15_7;
	// <PrivateImplementationDetails>/$ArrayType$20 <PrivateImplementationDetails>::$$field-16
	U24ArrayTypeU2420_t3138775208  ___U24U24fieldU2D16_8;
	// <PrivateImplementationDetails>/$ArrayType$32 <PrivateImplementationDetails>::$$field-17
	U24ArrayTypeU2432_t3859783016  ___U24U24fieldU2D17_9;
	// <PrivateImplementationDetails>/$ArrayType$48 <PrivateImplementationDetails>::$$field-18
	U24ArrayTypeU2448_t3247860447  ___U24U24fieldU2D18_10;
	// <PrivateImplementationDetails>/$ArrayType$64 <PrivateImplementationDetails>::$$field-19
	U24ArrayTypeU2464_t576514567  ___U24U24fieldU2D19_11;
	// <PrivateImplementationDetails>/$ArrayType$64 <PrivateImplementationDetails>::$$field-20
	U24ArrayTypeU2464_t576514567  ___U24U24fieldU2D20_12;
	// <PrivateImplementationDetails>/$ArrayType$64 <PrivateImplementationDetails>::$$field-21
	U24ArrayTypeU2464_t576514567  ___U24U24fieldU2D21_13;
	// <PrivateImplementationDetails>/$ArrayType$64 <PrivateImplementationDetails>::$$field-22
	U24ArrayTypeU2464_t576514567  ___U24U24fieldU2D22_14;
	// <PrivateImplementationDetails>/$ArrayType$12 <PrivateImplementationDetails>::$$field-23
	U24ArrayTypeU2412_t99387221  ___U24U24fieldU2D23_15;
	// <PrivateImplementationDetails>/$ArrayType$12 <PrivateImplementationDetails>::$$field-24
	U24ArrayTypeU2412_t99387221  ___U24U24fieldU2D24_16;
	// <PrivateImplementationDetails>/$ArrayType$12 <PrivateImplementationDetails>::$$field-25
	U24ArrayTypeU2412_t99387221  ___U24U24fieldU2D25_17;
	// <PrivateImplementationDetails>/$ArrayType$16 <PrivateImplementationDetails>::$$field-26
	U24ArrayTypeU2416_t1106822058  ___U24U24fieldU2D26_18;
	// <PrivateImplementationDetails>/$ArrayType$136 <PrivateImplementationDetails>::$$field-27
	U24ArrayTypeU24136_t821082809  ___U24U24fieldU2D27_19;
	// <PrivateImplementationDetails>/$ArrayType$72 <PrivateImplementationDetails>::$$field-30
	U24ArrayTypeU2472_t3372676604  ___U24U24fieldU2D30_20;
	// <PrivateImplementationDetails>/$ArrayType$8 <PrivateImplementationDetails>::$$field-31
	U24ArrayTypeU248_t1411500877  ___U24U24fieldU2D31_21;
	// <PrivateImplementationDetails>/$ArrayType$20 <PrivateImplementationDetails>::$$field-32
	U24ArrayTypeU2420_t3138775208  ___U24U24fieldU2D32_22;
	// <PrivateImplementationDetails>/$ArrayType$64 <PrivateImplementationDetails>::$$field-33
	U24ArrayTypeU2464_t576514567  ___U24U24fieldU2D33_23;
	// <PrivateImplementationDetails>/$ArrayType$124 <PrivateImplementationDetails>::$$field-34
	U24ArrayTypeU24124_t1060395960  ___U24U24fieldU2D34_24;
	// <PrivateImplementationDetails>/$ArrayType$32 <PrivateImplementationDetails>::$$field-35
	U24ArrayTypeU2432_t3859783016  ___U24U24fieldU2D35_25;
	// <PrivateImplementationDetails>/$ArrayType$96 <PrivateImplementationDetails>::$$field-36
	U24ArrayTypeU2496_t2666517524  ___U24U24fieldU2D36_26;
	// <PrivateImplementationDetails>/$ArrayType$2048 <PrivateImplementationDetails>::$$field-37
	U24ArrayTypeU242048_t109220664  ___U24U24fieldU2D37_27;
	// <PrivateImplementationDetails>/$ArrayType$56 <PrivateImplementationDetails>::$$field-38
	U24ArrayTypeU2456_t1643933315  ___U24U24fieldU2D38_28;
	// <PrivateImplementationDetails>/$ArrayType$16 <PrivateImplementationDetails>::$$field-39
	U24ArrayTypeU2416_t1106822058  ___U24U24fieldU2D39_29;
	// <PrivateImplementationDetails>/$ArrayType$48 <PrivateImplementationDetails>::$$field-40
	U24ArrayTypeU2448_t3247860447  ___U24U24fieldU2D40_30;
	// <PrivateImplementationDetails>/$ArrayType$2048 <PrivateImplementationDetails>::$$field-41
	U24ArrayTypeU242048_t109220664  ___U24U24fieldU2D41_31;
	// <PrivateImplementationDetails>/$ArrayType$2048 <PrivateImplementationDetails>::$$field-42
	U24ArrayTypeU242048_t109220664  ___U24U24fieldU2D42_32;
	// <PrivateImplementationDetails>/$ArrayType$256 <PrivateImplementationDetails>::$$field-43
	U24ArrayTypeU24256_t856796148  ___U24U24fieldU2D43_33;
	// <PrivateImplementationDetails>/$ArrayType$256 <PrivateImplementationDetails>::$$field-44
	U24ArrayTypeU24256_t856796148  ___U24U24fieldU2D44_34;
	// <PrivateImplementationDetails>/$ArrayType$120 <PrivateImplementationDetails>::$$field-45
	U24ArrayTypeU24120_t1454327024  ___U24U24fieldU2D45_35;
	// <PrivateImplementationDetails>/$ArrayType$256 <PrivateImplementationDetails>::$$field-46
	U24ArrayTypeU24256_t856796148  ___U24U24fieldU2D46_36;
	// <PrivateImplementationDetails>/$ArrayType$256 <PrivateImplementationDetails>::$$field-47
	U24ArrayTypeU24256_t856796148  ___U24U24fieldU2D47_37;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-48
	U24ArrayTypeU241024_t29942718  ___U24U24fieldU2D48_38;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-49
	U24ArrayTypeU241024_t29942718  ___U24U24fieldU2D49_39;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-50
	U24ArrayTypeU241024_t29942718  ___U24U24fieldU2D50_40;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-51
	U24ArrayTypeU241024_t29942718  ___U24U24fieldU2D51_41;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-52
	U24ArrayTypeU241024_t29942718  ___U24U24fieldU2D52_42;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-53
	U24ArrayTypeU241024_t29942718  ___U24U24fieldU2D53_43;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-54
	U24ArrayTypeU241024_t29942718  ___U24U24fieldU2D54_44;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-55
	U24ArrayTypeU241024_t29942718  ___U24U24fieldU2D55_45;
	// <PrivateImplementationDetails>/$ArrayType$256 <PrivateImplementationDetails>::$$field-56
	U24ArrayTypeU24256_t856796148  ___U24U24fieldU2D56_46;
	// <PrivateImplementationDetails>/$ArrayType$640 <PrivateImplementationDetails>::$$field-57
	U24ArrayTypeU24640_t2996305577  ___U24U24fieldU2D57_47;
	// <PrivateImplementationDetails>/$ArrayType$12 <PrivateImplementationDetails>::$$field-60
	U24ArrayTypeU2412_t99387221  ___U24U24fieldU2D60_48;
	// <PrivateImplementationDetails>/$ArrayType$128 <PrivateImplementationDetails>::$$field-62
	U24ArrayTypeU24128_t1267203091  ___U24U24fieldU2D62_49;
	// <PrivateImplementationDetails>/$ArrayType$256 <PrivateImplementationDetails>::$$field-63
	U24ArrayTypeU24256_t856796148  ___U24U24fieldU2D63_50;
	// <PrivateImplementationDetails>/$ArrayType$52 <PrivateImplementationDetails>::$$field-64
	U24ArrayTypeU2452_t302455132  ___U24U24fieldU2D64_51;
	// <PrivateImplementationDetails>/$ArrayType$52 <PrivateImplementationDetails>::$$field-65
	U24ArrayTypeU2452_t302455132  ___U24U24fieldU2D65_52;

public:
	inline static int32_t get_offset_of_U24U24fieldU2D0_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1444045952_StaticFields, ___U24U24fieldU2D0_0)); }
	inline U24ArrayTypeU2456_t1643933315  get_U24U24fieldU2D0_0() const { return ___U24U24fieldU2D0_0; }
	inline U24ArrayTypeU2456_t1643933315 * get_address_of_U24U24fieldU2D0_0() { return &___U24U24fieldU2D0_0; }
	inline void set_U24U24fieldU2D0_0(U24ArrayTypeU2456_t1643933315  value)
	{
		___U24U24fieldU2D0_0 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D1_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1444045952_StaticFields, ___U24U24fieldU2D1_1)); }
	inline U24ArrayTypeU2424_t3433776814  get_U24U24fieldU2D1_1() const { return ___U24U24fieldU2D1_1; }
	inline U24ArrayTypeU2424_t3433776814 * get_address_of_U24U24fieldU2D1_1() { return &___U24U24fieldU2D1_1; }
	inline void set_U24U24fieldU2D1_1(U24ArrayTypeU2424_t3433776814  value)
	{
		___U24U24fieldU2D1_1 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D2_2() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1444045952_StaticFields, ___U24U24fieldU2D2_2)); }
	inline U24ArrayTypeU2424_t3433776814  get_U24U24fieldU2D2_2() const { return ___U24U24fieldU2D2_2; }
	inline U24ArrayTypeU2424_t3433776814 * get_address_of_U24U24fieldU2D2_2() { return &___U24U24fieldU2D2_2; }
	inline void set_U24U24fieldU2D2_2(U24ArrayTypeU2424_t3433776814  value)
	{
		___U24U24fieldU2D2_2 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D3_3() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1444045952_StaticFields, ___U24U24fieldU2D3_3)); }
	inline U24ArrayTypeU2424_t3433776814  get_U24U24fieldU2D3_3() const { return ___U24U24fieldU2D3_3; }
	inline U24ArrayTypeU2424_t3433776814 * get_address_of_U24U24fieldU2D3_3() { return &___U24U24fieldU2D3_3; }
	inline void set_U24U24fieldU2D3_3(U24ArrayTypeU2424_t3433776814  value)
	{
		___U24U24fieldU2D3_3 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D4_4() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1444045952_StaticFields, ___U24U24fieldU2D4_4)); }
	inline U24ArrayTypeU2424_t3433776814  get_U24U24fieldU2D4_4() const { return ___U24U24fieldU2D4_4; }
	inline U24ArrayTypeU2424_t3433776814 * get_address_of_U24U24fieldU2D4_4() { return &___U24U24fieldU2D4_4; }
	inline void set_U24U24fieldU2D4_4(U24ArrayTypeU2424_t3433776814  value)
	{
		___U24U24fieldU2D4_4 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D5_5() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1444045952_StaticFields, ___U24U24fieldU2D5_5)); }
	inline U24ArrayTypeU2416_t1106822058  get_U24U24fieldU2D5_5() const { return ___U24U24fieldU2D5_5; }
	inline U24ArrayTypeU2416_t1106822058 * get_address_of_U24U24fieldU2D5_5() { return &___U24U24fieldU2D5_5; }
	inline void set_U24U24fieldU2D5_5(U24ArrayTypeU2416_t1106822058  value)
	{
		___U24U24fieldU2D5_5 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D6_6() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1444045952_StaticFields, ___U24U24fieldU2D6_6)); }
	inline U24ArrayTypeU2416_t1106822058  get_U24U24fieldU2D6_6() const { return ___U24U24fieldU2D6_6; }
	inline U24ArrayTypeU2416_t1106822058 * get_address_of_U24U24fieldU2D6_6() { return &___U24U24fieldU2D6_6; }
	inline void set_U24U24fieldU2D6_6(U24ArrayTypeU2416_t1106822058  value)
	{
		___U24U24fieldU2D6_6 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D15_7() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1444045952_StaticFields, ___U24U24fieldU2D15_7)); }
	inline U24ArrayTypeU243132_t3841156690  get_U24U24fieldU2D15_7() const { return ___U24U24fieldU2D15_7; }
	inline U24ArrayTypeU243132_t3841156690 * get_address_of_U24U24fieldU2D15_7() { return &___U24U24fieldU2D15_7; }
	inline void set_U24U24fieldU2D15_7(U24ArrayTypeU243132_t3841156690  value)
	{
		___U24U24fieldU2D15_7 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D16_8() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1444045952_StaticFields, ___U24U24fieldU2D16_8)); }
	inline U24ArrayTypeU2420_t3138775208  get_U24U24fieldU2D16_8() const { return ___U24U24fieldU2D16_8; }
	inline U24ArrayTypeU2420_t3138775208 * get_address_of_U24U24fieldU2D16_8() { return &___U24U24fieldU2D16_8; }
	inline void set_U24U24fieldU2D16_8(U24ArrayTypeU2420_t3138775208  value)
	{
		___U24U24fieldU2D16_8 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D17_9() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1444045952_StaticFields, ___U24U24fieldU2D17_9)); }
	inline U24ArrayTypeU2432_t3859783016  get_U24U24fieldU2D17_9() const { return ___U24U24fieldU2D17_9; }
	inline U24ArrayTypeU2432_t3859783016 * get_address_of_U24U24fieldU2D17_9() { return &___U24U24fieldU2D17_9; }
	inline void set_U24U24fieldU2D17_9(U24ArrayTypeU2432_t3859783016  value)
	{
		___U24U24fieldU2D17_9 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D18_10() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1444045952_StaticFields, ___U24U24fieldU2D18_10)); }
	inline U24ArrayTypeU2448_t3247860447  get_U24U24fieldU2D18_10() const { return ___U24U24fieldU2D18_10; }
	inline U24ArrayTypeU2448_t3247860447 * get_address_of_U24U24fieldU2D18_10() { return &___U24U24fieldU2D18_10; }
	inline void set_U24U24fieldU2D18_10(U24ArrayTypeU2448_t3247860447  value)
	{
		___U24U24fieldU2D18_10 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D19_11() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1444045952_StaticFields, ___U24U24fieldU2D19_11)); }
	inline U24ArrayTypeU2464_t576514567  get_U24U24fieldU2D19_11() const { return ___U24U24fieldU2D19_11; }
	inline U24ArrayTypeU2464_t576514567 * get_address_of_U24U24fieldU2D19_11() { return &___U24U24fieldU2D19_11; }
	inline void set_U24U24fieldU2D19_11(U24ArrayTypeU2464_t576514567  value)
	{
		___U24U24fieldU2D19_11 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D20_12() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1444045952_StaticFields, ___U24U24fieldU2D20_12)); }
	inline U24ArrayTypeU2464_t576514567  get_U24U24fieldU2D20_12() const { return ___U24U24fieldU2D20_12; }
	inline U24ArrayTypeU2464_t576514567 * get_address_of_U24U24fieldU2D20_12() { return &___U24U24fieldU2D20_12; }
	inline void set_U24U24fieldU2D20_12(U24ArrayTypeU2464_t576514567  value)
	{
		___U24U24fieldU2D20_12 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D21_13() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1444045952_StaticFields, ___U24U24fieldU2D21_13)); }
	inline U24ArrayTypeU2464_t576514567  get_U24U24fieldU2D21_13() const { return ___U24U24fieldU2D21_13; }
	inline U24ArrayTypeU2464_t576514567 * get_address_of_U24U24fieldU2D21_13() { return &___U24U24fieldU2D21_13; }
	inline void set_U24U24fieldU2D21_13(U24ArrayTypeU2464_t576514567  value)
	{
		___U24U24fieldU2D21_13 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D22_14() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1444045952_StaticFields, ___U24U24fieldU2D22_14)); }
	inline U24ArrayTypeU2464_t576514567  get_U24U24fieldU2D22_14() const { return ___U24U24fieldU2D22_14; }
	inline U24ArrayTypeU2464_t576514567 * get_address_of_U24U24fieldU2D22_14() { return &___U24U24fieldU2D22_14; }
	inline void set_U24U24fieldU2D22_14(U24ArrayTypeU2464_t576514567  value)
	{
		___U24U24fieldU2D22_14 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D23_15() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1444045952_StaticFields, ___U24U24fieldU2D23_15)); }
	inline U24ArrayTypeU2412_t99387221  get_U24U24fieldU2D23_15() const { return ___U24U24fieldU2D23_15; }
	inline U24ArrayTypeU2412_t99387221 * get_address_of_U24U24fieldU2D23_15() { return &___U24U24fieldU2D23_15; }
	inline void set_U24U24fieldU2D23_15(U24ArrayTypeU2412_t99387221  value)
	{
		___U24U24fieldU2D23_15 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D24_16() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1444045952_StaticFields, ___U24U24fieldU2D24_16)); }
	inline U24ArrayTypeU2412_t99387221  get_U24U24fieldU2D24_16() const { return ___U24U24fieldU2D24_16; }
	inline U24ArrayTypeU2412_t99387221 * get_address_of_U24U24fieldU2D24_16() { return &___U24U24fieldU2D24_16; }
	inline void set_U24U24fieldU2D24_16(U24ArrayTypeU2412_t99387221  value)
	{
		___U24U24fieldU2D24_16 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D25_17() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1444045952_StaticFields, ___U24U24fieldU2D25_17)); }
	inline U24ArrayTypeU2412_t99387221  get_U24U24fieldU2D25_17() const { return ___U24U24fieldU2D25_17; }
	inline U24ArrayTypeU2412_t99387221 * get_address_of_U24U24fieldU2D25_17() { return &___U24U24fieldU2D25_17; }
	inline void set_U24U24fieldU2D25_17(U24ArrayTypeU2412_t99387221  value)
	{
		___U24U24fieldU2D25_17 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D26_18() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1444045952_StaticFields, ___U24U24fieldU2D26_18)); }
	inline U24ArrayTypeU2416_t1106822058  get_U24U24fieldU2D26_18() const { return ___U24U24fieldU2D26_18; }
	inline U24ArrayTypeU2416_t1106822058 * get_address_of_U24U24fieldU2D26_18() { return &___U24U24fieldU2D26_18; }
	inline void set_U24U24fieldU2D26_18(U24ArrayTypeU2416_t1106822058  value)
	{
		___U24U24fieldU2D26_18 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D27_19() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1444045952_StaticFields, ___U24U24fieldU2D27_19)); }
	inline U24ArrayTypeU24136_t821082809  get_U24U24fieldU2D27_19() const { return ___U24U24fieldU2D27_19; }
	inline U24ArrayTypeU24136_t821082809 * get_address_of_U24U24fieldU2D27_19() { return &___U24U24fieldU2D27_19; }
	inline void set_U24U24fieldU2D27_19(U24ArrayTypeU24136_t821082809  value)
	{
		___U24U24fieldU2D27_19 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D30_20() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1444045952_StaticFields, ___U24U24fieldU2D30_20)); }
	inline U24ArrayTypeU2472_t3372676604  get_U24U24fieldU2D30_20() const { return ___U24U24fieldU2D30_20; }
	inline U24ArrayTypeU2472_t3372676604 * get_address_of_U24U24fieldU2D30_20() { return &___U24U24fieldU2D30_20; }
	inline void set_U24U24fieldU2D30_20(U24ArrayTypeU2472_t3372676604  value)
	{
		___U24U24fieldU2D30_20 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D31_21() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1444045952_StaticFields, ___U24U24fieldU2D31_21)); }
	inline U24ArrayTypeU248_t1411500877  get_U24U24fieldU2D31_21() const { return ___U24U24fieldU2D31_21; }
	inline U24ArrayTypeU248_t1411500877 * get_address_of_U24U24fieldU2D31_21() { return &___U24U24fieldU2D31_21; }
	inline void set_U24U24fieldU2D31_21(U24ArrayTypeU248_t1411500877  value)
	{
		___U24U24fieldU2D31_21 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D32_22() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1444045952_StaticFields, ___U24U24fieldU2D32_22)); }
	inline U24ArrayTypeU2420_t3138775208  get_U24U24fieldU2D32_22() const { return ___U24U24fieldU2D32_22; }
	inline U24ArrayTypeU2420_t3138775208 * get_address_of_U24U24fieldU2D32_22() { return &___U24U24fieldU2D32_22; }
	inline void set_U24U24fieldU2D32_22(U24ArrayTypeU2420_t3138775208  value)
	{
		___U24U24fieldU2D32_22 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D33_23() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1444045952_StaticFields, ___U24U24fieldU2D33_23)); }
	inline U24ArrayTypeU2464_t576514567  get_U24U24fieldU2D33_23() const { return ___U24U24fieldU2D33_23; }
	inline U24ArrayTypeU2464_t576514567 * get_address_of_U24U24fieldU2D33_23() { return &___U24U24fieldU2D33_23; }
	inline void set_U24U24fieldU2D33_23(U24ArrayTypeU2464_t576514567  value)
	{
		___U24U24fieldU2D33_23 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D34_24() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1444045952_StaticFields, ___U24U24fieldU2D34_24)); }
	inline U24ArrayTypeU24124_t1060395960  get_U24U24fieldU2D34_24() const { return ___U24U24fieldU2D34_24; }
	inline U24ArrayTypeU24124_t1060395960 * get_address_of_U24U24fieldU2D34_24() { return &___U24U24fieldU2D34_24; }
	inline void set_U24U24fieldU2D34_24(U24ArrayTypeU24124_t1060395960  value)
	{
		___U24U24fieldU2D34_24 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D35_25() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1444045952_StaticFields, ___U24U24fieldU2D35_25)); }
	inline U24ArrayTypeU2432_t3859783016  get_U24U24fieldU2D35_25() const { return ___U24U24fieldU2D35_25; }
	inline U24ArrayTypeU2432_t3859783016 * get_address_of_U24U24fieldU2D35_25() { return &___U24U24fieldU2D35_25; }
	inline void set_U24U24fieldU2D35_25(U24ArrayTypeU2432_t3859783016  value)
	{
		___U24U24fieldU2D35_25 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D36_26() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1444045952_StaticFields, ___U24U24fieldU2D36_26)); }
	inline U24ArrayTypeU2496_t2666517524  get_U24U24fieldU2D36_26() const { return ___U24U24fieldU2D36_26; }
	inline U24ArrayTypeU2496_t2666517524 * get_address_of_U24U24fieldU2D36_26() { return &___U24U24fieldU2D36_26; }
	inline void set_U24U24fieldU2D36_26(U24ArrayTypeU2496_t2666517524  value)
	{
		___U24U24fieldU2D36_26 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D37_27() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1444045952_StaticFields, ___U24U24fieldU2D37_27)); }
	inline U24ArrayTypeU242048_t109220664  get_U24U24fieldU2D37_27() const { return ___U24U24fieldU2D37_27; }
	inline U24ArrayTypeU242048_t109220664 * get_address_of_U24U24fieldU2D37_27() { return &___U24U24fieldU2D37_27; }
	inline void set_U24U24fieldU2D37_27(U24ArrayTypeU242048_t109220664  value)
	{
		___U24U24fieldU2D37_27 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D38_28() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1444045952_StaticFields, ___U24U24fieldU2D38_28)); }
	inline U24ArrayTypeU2456_t1643933315  get_U24U24fieldU2D38_28() const { return ___U24U24fieldU2D38_28; }
	inline U24ArrayTypeU2456_t1643933315 * get_address_of_U24U24fieldU2D38_28() { return &___U24U24fieldU2D38_28; }
	inline void set_U24U24fieldU2D38_28(U24ArrayTypeU2456_t1643933315  value)
	{
		___U24U24fieldU2D38_28 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D39_29() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1444045952_StaticFields, ___U24U24fieldU2D39_29)); }
	inline U24ArrayTypeU2416_t1106822058  get_U24U24fieldU2D39_29() const { return ___U24U24fieldU2D39_29; }
	inline U24ArrayTypeU2416_t1106822058 * get_address_of_U24U24fieldU2D39_29() { return &___U24U24fieldU2D39_29; }
	inline void set_U24U24fieldU2D39_29(U24ArrayTypeU2416_t1106822058  value)
	{
		___U24U24fieldU2D39_29 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D40_30() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1444045952_StaticFields, ___U24U24fieldU2D40_30)); }
	inline U24ArrayTypeU2448_t3247860447  get_U24U24fieldU2D40_30() const { return ___U24U24fieldU2D40_30; }
	inline U24ArrayTypeU2448_t3247860447 * get_address_of_U24U24fieldU2D40_30() { return &___U24U24fieldU2D40_30; }
	inline void set_U24U24fieldU2D40_30(U24ArrayTypeU2448_t3247860447  value)
	{
		___U24U24fieldU2D40_30 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D41_31() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1444045952_StaticFields, ___U24U24fieldU2D41_31)); }
	inline U24ArrayTypeU242048_t109220664  get_U24U24fieldU2D41_31() const { return ___U24U24fieldU2D41_31; }
	inline U24ArrayTypeU242048_t109220664 * get_address_of_U24U24fieldU2D41_31() { return &___U24U24fieldU2D41_31; }
	inline void set_U24U24fieldU2D41_31(U24ArrayTypeU242048_t109220664  value)
	{
		___U24U24fieldU2D41_31 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D42_32() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1444045952_StaticFields, ___U24U24fieldU2D42_32)); }
	inline U24ArrayTypeU242048_t109220664  get_U24U24fieldU2D42_32() const { return ___U24U24fieldU2D42_32; }
	inline U24ArrayTypeU242048_t109220664 * get_address_of_U24U24fieldU2D42_32() { return &___U24U24fieldU2D42_32; }
	inline void set_U24U24fieldU2D42_32(U24ArrayTypeU242048_t109220664  value)
	{
		___U24U24fieldU2D42_32 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D43_33() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1444045952_StaticFields, ___U24U24fieldU2D43_33)); }
	inline U24ArrayTypeU24256_t856796148  get_U24U24fieldU2D43_33() const { return ___U24U24fieldU2D43_33; }
	inline U24ArrayTypeU24256_t856796148 * get_address_of_U24U24fieldU2D43_33() { return &___U24U24fieldU2D43_33; }
	inline void set_U24U24fieldU2D43_33(U24ArrayTypeU24256_t856796148  value)
	{
		___U24U24fieldU2D43_33 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D44_34() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1444045952_StaticFields, ___U24U24fieldU2D44_34)); }
	inline U24ArrayTypeU24256_t856796148  get_U24U24fieldU2D44_34() const { return ___U24U24fieldU2D44_34; }
	inline U24ArrayTypeU24256_t856796148 * get_address_of_U24U24fieldU2D44_34() { return &___U24U24fieldU2D44_34; }
	inline void set_U24U24fieldU2D44_34(U24ArrayTypeU24256_t856796148  value)
	{
		___U24U24fieldU2D44_34 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D45_35() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1444045952_StaticFields, ___U24U24fieldU2D45_35)); }
	inline U24ArrayTypeU24120_t1454327024  get_U24U24fieldU2D45_35() const { return ___U24U24fieldU2D45_35; }
	inline U24ArrayTypeU24120_t1454327024 * get_address_of_U24U24fieldU2D45_35() { return &___U24U24fieldU2D45_35; }
	inline void set_U24U24fieldU2D45_35(U24ArrayTypeU24120_t1454327024  value)
	{
		___U24U24fieldU2D45_35 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D46_36() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1444045952_StaticFields, ___U24U24fieldU2D46_36)); }
	inline U24ArrayTypeU24256_t856796148  get_U24U24fieldU2D46_36() const { return ___U24U24fieldU2D46_36; }
	inline U24ArrayTypeU24256_t856796148 * get_address_of_U24U24fieldU2D46_36() { return &___U24U24fieldU2D46_36; }
	inline void set_U24U24fieldU2D46_36(U24ArrayTypeU24256_t856796148  value)
	{
		___U24U24fieldU2D46_36 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D47_37() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1444045952_StaticFields, ___U24U24fieldU2D47_37)); }
	inline U24ArrayTypeU24256_t856796148  get_U24U24fieldU2D47_37() const { return ___U24U24fieldU2D47_37; }
	inline U24ArrayTypeU24256_t856796148 * get_address_of_U24U24fieldU2D47_37() { return &___U24U24fieldU2D47_37; }
	inline void set_U24U24fieldU2D47_37(U24ArrayTypeU24256_t856796148  value)
	{
		___U24U24fieldU2D47_37 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D48_38() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1444045952_StaticFields, ___U24U24fieldU2D48_38)); }
	inline U24ArrayTypeU241024_t29942718  get_U24U24fieldU2D48_38() const { return ___U24U24fieldU2D48_38; }
	inline U24ArrayTypeU241024_t29942718 * get_address_of_U24U24fieldU2D48_38() { return &___U24U24fieldU2D48_38; }
	inline void set_U24U24fieldU2D48_38(U24ArrayTypeU241024_t29942718  value)
	{
		___U24U24fieldU2D48_38 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D49_39() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1444045952_StaticFields, ___U24U24fieldU2D49_39)); }
	inline U24ArrayTypeU241024_t29942718  get_U24U24fieldU2D49_39() const { return ___U24U24fieldU2D49_39; }
	inline U24ArrayTypeU241024_t29942718 * get_address_of_U24U24fieldU2D49_39() { return &___U24U24fieldU2D49_39; }
	inline void set_U24U24fieldU2D49_39(U24ArrayTypeU241024_t29942718  value)
	{
		___U24U24fieldU2D49_39 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D50_40() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1444045952_StaticFields, ___U24U24fieldU2D50_40)); }
	inline U24ArrayTypeU241024_t29942718  get_U24U24fieldU2D50_40() const { return ___U24U24fieldU2D50_40; }
	inline U24ArrayTypeU241024_t29942718 * get_address_of_U24U24fieldU2D50_40() { return &___U24U24fieldU2D50_40; }
	inline void set_U24U24fieldU2D50_40(U24ArrayTypeU241024_t29942718  value)
	{
		___U24U24fieldU2D50_40 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D51_41() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1444045952_StaticFields, ___U24U24fieldU2D51_41)); }
	inline U24ArrayTypeU241024_t29942718  get_U24U24fieldU2D51_41() const { return ___U24U24fieldU2D51_41; }
	inline U24ArrayTypeU241024_t29942718 * get_address_of_U24U24fieldU2D51_41() { return &___U24U24fieldU2D51_41; }
	inline void set_U24U24fieldU2D51_41(U24ArrayTypeU241024_t29942718  value)
	{
		___U24U24fieldU2D51_41 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D52_42() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1444045952_StaticFields, ___U24U24fieldU2D52_42)); }
	inline U24ArrayTypeU241024_t29942718  get_U24U24fieldU2D52_42() const { return ___U24U24fieldU2D52_42; }
	inline U24ArrayTypeU241024_t29942718 * get_address_of_U24U24fieldU2D52_42() { return &___U24U24fieldU2D52_42; }
	inline void set_U24U24fieldU2D52_42(U24ArrayTypeU241024_t29942718  value)
	{
		___U24U24fieldU2D52_42 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D53_43() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1444045952_StaticFields, ___U24U24fieldU2D53_43)); }
	inline U24ArrayTypeU241024_t29942718  get_U24U24fieldU2D53_43() const { return ___U24U24fieldU2D53_43; }
	inline U24ArrayTypeU241024_t29942718 * get_address_of_U24U24fieldU2D53_43() { return &___U24U24fieldU2D53_43; }
	inline void set_U24U24fieldU2D53_43(U24ArrayTypeU241024_t29942718  value)
	{
		___U24U24fieldU2D53_43 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D54_44() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1444045952_StaticFields, ___U24U24fieldU2D54_44)); }
	inline U24ArrayTypeU241024_t29942718  get_U24U24fieldU2D54_44() const { return ___U24U24fieldU2D54_44; }
	inline U24ArrayTypeU241024_t29942718 * get_address_of_U24U24fieldU2D54_44() { return &___U24U24fieldU2D54_44; }
	inline void set_U24U24fieldU2D54_44(U24ArrayTypeU241024_t29942718  value)
	{
		___U24U24fieldU2D54_44 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D55_45() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1444045952_StaticFields, ___U24U24fieldU2D55_45)); }
	inline U24ArrayTypeU241024_t29942718  get_U24U24fieldU2D55_45() const { return ___U24U24fieldU2D55_45; }
	inline U24ArrayTypeU241024_t29942718 * get_address_of_U24U24fieldU2D55_45() { return &___U24U24fieldU2D55_45; }
	inline void set_U24U24fieldU2D55_45(U24ArrayTypeU241024_t29942718  value)
	{
		___U24U24fieldU2D55_45 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D56_46() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1444045952_StaticFields, ___U24U24fieldU2D56_46)); }
	inline U24ArrayTypeU24256_t856796148  get_U24U24fieldU2D56_46() const { return ___U24U24fieldU2D56_46; }
	inline U24ArrayTypeU24256_t856796148 * get_address_of_U24U24fieldU2D56_46() { return &___U24U24fieldU2D56_46; }
	inline void set_U24U24fieldU2D56_46(U24ArrayTypeU24256_t856796148  value)
	{
		___U24U24fieldU2D56_46 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D57_47() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1444045952_StaticFields, ___U24U24fieldU2D57_47)); }
	inline U24ArrayTypeU24640_t2996305577  get_U24U24fieldU2D57_47() const { return ___U24U24fieldU2D57_47; }
	inline U24ArrayTypeU24640_t2996305577 * get_address_of_U24U24fieldU2D57_47() { return &___U24U24fieldU2D57_47; }
	inline void set_U24U24fieldU2D57_47(U24ArrayTypeU24640_t2996305577  value)
	{
		___U24U24fieldU2D57_47 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D60_48() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1444045952_StaticFields, ___U24U24fieldU2D60_48)); }
	inline U24ArrayTypeU2412_t99387221  get_U24U24fieldU2D60_48() const { return ___U24U24fieldU2D60_48; }
	inline U24ArrayTypeU2412_t99387221 * get_address_of_U24U24fieldU2D60_48() { return &___U24U24fieldU2D60_48; }
	inline void set_U24U24fieldU2D60_48(U24ArrayTypeU2412_t99387221  value)
	{
		___U24U24fieldU2D60_48 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D62_49() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1444045952_StaticFields, ___U24U24fieldU2D62_49)); }
	inline U24ArrayTypeU24128_t1267203091  get_U24U24fieldU2D62_49() const { return ___U24U24fieldU2D62_49; }
	inline U24ArrayTypeU24128_t1267203091 * get_address_of_U24U24fieldU2D62_49() { return &___U24U24fieldU2D62_49; }
	inline void set_U24U24fieldU2D62_49(U24ArrayTypeU24128_t1267203091  value)
	{
		___U24U24fieldU2D62_49 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D63_50() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1444045952_StaticFields, ___U24U24fieldU2D63_50)); }
	inline U24ArrayTypeU24256_t856796148  get_U24U24fieldU2D63_50() const { return ___U24U24fieldU2D63_50; }
	inline U24ArrayTypeU24256_t856796148 * get_address_of_U24U24fieldU2D63_50() { return &___U24U24fieldU2D63_50; }
	inline void set_U24U24fieldU2D63_50(U24ArrayTypeU24256_t856796148  value)
	{
		___U24U24fieldU2D63_50 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D64_51() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1444045952_StaticFields, ___U24U24fieldU2D64_51)); }
	inline U24ArrayTypeU2452_t302455132  get_U24U24fieldU2D64_51() const { return ___U24U24fieldU2D64_51; }
	inline U24ArrayTypeU2452_t302455132 * get_address_of_U24U24fieldU2D64_51() { return &___U24U24fieldU2D64_51; }
	inline void set_U24U24fieldU2D64_51(U24ArrayTypeU2452_t302455132  value)
	{
		___U24U24fieldU2D64_51 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D65_52() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t1444045952_StaticFields, ___U24U24fieldU2D65_52)); }
	inline U24ArrayTypeU2452_t302455132  get_U24U24fieldU2D65_52() const { return ___U24U24fieldU2D65_52; }
	inline U24ArrayTypeU2452_t302455132 * get_address_of_U24U24fieldU2D65_52() { return &___U24U24fieldU2D65_52; }
	inline void set_U24U24fieldU2D65_52(U24ArrayTypeU2452_t302455132  value)
	{
		___U24U24fieldU2D65_52 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T1444045952_H
#ifndef OPERATINGSYSTEM_T1202916457_H
#define OPERATINGSYSTEM_T1202916457_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.OperatingSystem
struct  OperatingSystem_t1202916457  : public RuntimeObject
{
public:
	// System.PlatformID System.OperatingSystem::_platform
	int32_t ____platform_0;
	// System.Version System.OperatingSystem::_version
	Version_t1424531886 * ____version_1;
	// System.String System.OperatingSystem::_servicePack
	String_t* ____servicePack_2;

public:
	inline static int32_t get_offset_of__platform_0() { return static_cast<int32_t>(offsetof(OperatingSystem_t1202916457, ____platform_0)); }
	inline int32_t get__platform_0() const { return ____platform_0; }
	inline int32_t* get_address_of__platform_0() { return &____platform_0; }
	inline void set__platform_0(int32_t value)
	{
		____platform_0 = value;
	}

	inline static int32_t get_offset_of__version_1() { return static_cast<int32_t>(offsetof(OperatingSystem_t1202916457, ____version_1)); }
	inline Version_t1424531886 * get__version_1() const { return ____version_1; }
	inline Version_t1424531886 ** get_address_of__version_1() { return &____version_1; }
	inline void set__version_1(Version_t1424531886 * value)
	{
		____version_1 = value;
		Il2CppCodeGenWriteBarrier((&____version_1), value);
	}

	inline static int32_t get_offset_of__servicePack_2() { return static_cast<int32_t>(offsetof(OperatingSystem_t1202916457, ____servicePack_2)); }
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
#endif // OPERATINGSYSTEM_T1202916457_H
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
#ifndef OVERFLOWEXCEPTION_T3392151407_H
#define OVERFLOWEXCEPTION_T3392151407_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.OverflowException
struct  OverflowException_t3392151407  : public ArithmeticException_t2770510680
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OVERFLOWEXCEPTION_T3392151407_H
#ifndef UNITYSERIALIZATIONHOLDER_T440457689_H
#define UNITYSERIALIZATIONHOLDER_T440457689_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnitySerializationHolder
struct  UnitySerializationHolder_t440457689  : public RuntimeObject
{
public:
	// System.String System.UnitySerializationHolder::_data
	String_t* ____data_0;
	// System.UnitySerializationHolder/UnityType System.UnitySerializationHolder::_unityType
	uint8_t ____unityType_1;
	// System.String System.UnitySerializationHolder::_assemblyName
	String_t* ____assemblyName_2;

public:
	inline static int32_t get_offset_of__data_0() { return static_cast<int32_t>(offsetof(UnitySerializationHolder_t440457689, ____data_0)); }
	inline String_t* get__data_0() const { return ____data_0; }
	inline String_t** get_address_of__data_0() { return &____data_0; }
	inline void set__data_0(String_t* value)
	{
		____data_0 = value;
		Il2CppCodeGenWriteBarrier((&____data_0), value);
	}

	inline static int32_t get_offset_of__unityType_1() { return static_cast<int32_t>(offsetof(UnitySerializationHolder_t440457689, ____unityType_1)); }
	inline uint8_t get__unityType_1() const { return ____unityType_1; }
	inline uint8_t* get_address_of__unityType_1() { return &____unityType_1; }
	inline void set__unityType_1(uint8_t value)
	{
		____unityType_1 = value;
	}

	inline static int32_t get_offset_of__assemblyName_2() { return static_cast<int32_t>(offsetof(UnitySerializationHolder_t440457689, ____assemblyName_2)); }
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
#endif // UNITYSERIALIZATIONHOLDER_T440457689_H
#ifndef PLATFORMNOTSUPPORTEDEXCEPTION_T423502430_H
#define PLATFORMNOTSUPPORTEDEXCEPTION_T423502430_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.PlatformNotSupportedException
struct  PlatformNotSupportedException_t423502430  : public NotSupportedException_t4036800119
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLATFORMNOTSUPPORTEDEXCEPTION_T423502430_H
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
#ifndef RC4_T2103311274_H
#define RC4_T2103311274_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.RC4
struct  RC4_t2103311274  : public SymmetricAlgorithm_t1498077059
{
public:

public:
};

struct RC4_t2103311274_StaticFields
{
public:
	// System.Security.Cryptography.KeySizes[] Mono.Security.Cryptography.RC4::s_legalBlockSizes
	KeySizesU5BU5D_t1660291574* ___s_legalBlockSizes_10;
	// System.Security.Cryptography.KeySizes[] Mono.Security.Cryptography.RC4::s_legalKeySizes
	KeySizesU5BU5D_t1660291574* ___s_legalKeySizes_11;

public:
	inline static int32_t get_offset_of_s_legalBlockSizes_10() { return static_cast<int32_t>(offsetof(RC4_t2103311274_StaticFields, ___s_legalBlockSizes_10)); }
	inline KeySizesU5BU5D_t1660291574* get_s_legalBlockSizes_10() const { return ___s_legalBlockSizes_10; }
	inline KeySizesU5BU5D_t1660291574** get_address_of_s_legalBlockSizes_10() { return &___s_legalBlockSizes_10; }
	inline void set_s_legalBlockSizes_10(KeySizesU5BU5D_t1660291574* value)
	{
		___s_legalBlockSizes_10 = value;
		Il2CppCodeGenWriteBarrier((&___s_legalBlockSizes_10), value);
	}

	inline static int32_t get_offset_of_s_legalKeySizes_11() { return static_cast<int32_t>(offsetof(RC4_t2103311274_StaticFields, ___s_legalKeySizes_11)); }
	inline KeySizesU5BU5D_t1660291574* get_s_legalKeySizes_11() const { return ___s_legalKeySizes_11; }
	inline KeySizesU5BU5D_t1660291574** get_address_of_s_legalKeySizes_11() { return &___s_legalKeySizes_11; }
	inline void set_s_legalKeySizes_11(KeySizesU5BU5D_t1660291574* value)
	{
		___s_legalKeySizes_11 = value;
		Il2CppCodeGenWriteBarrier((&___s_legalKeySizes_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RC4_T2103311274_H
#ifndef UNHANDLEDEXCEPTIONEVENTHANDLER_T547537529_H
#define UNHANDLEDEXCEPTIONEVENTHANDLER_T547537529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnhandledExceptionEventHandler
struct  UnhandledExceptionEventHandler_t547537529  : public MulticastDelegate_t3254873941
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNHANDLEDEXCEPTIONEVENTHANDLER_T547537529_H
#ifndef RESOLVEEVENTHANDLER_T1600503546_H
#define RESOLVEEVENTHANDLER_T1600503546_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ResolveEventHandler
struct  ResolveEventHandler_t1600503546  : public MulticastDelegate_t3254873941
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOLVEEVENTHANDLER_T1600503546_H
#ifndef EVENTHANDLER_T4141471572_H
#define EVENTHANDLER_T4141471572_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventHandler
struct  EventHandler_t4141471572  : public MulticastDelegate_t3254873941
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTHANDLER_T4141471572_H
#ifndef ASSEMBLYLOADEVENTHANDLER_T1497075503_H
#define ASSEMBLYLOADEVENTHANDLER_T1497075503_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AssemblyLoadEventHandler
struct  AssemblyLoadEventHandler_t1497075503  : public MulticastDelegate_t3254873941
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYLOADEVENTHANDLER_T1497075503_H
#ifndef APPDOMAININITIALIZER_T2755333219_H
#define APPDOMAININITIALIZER_T2755333219_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AppDomainInitializer
struct  AppDomainInitializer_t2755333219  : public MulticastDelegate_t3254873941
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPDOMAININITIALIZER_T2755333219_H
#ifndef WAITORTIMERCALLBACK_T815677555_H
#define WAITORTIMERCALLBACK_T815677555_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.WaitOrTimerCallback
struct  WaitOrTimerCallback_t815677555  : public MulticastDelegate_t3254873941
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAITORTIMERCALLBACK_T815677555_H
#ifndef WAITCALLBACK_T2874777647_H
#define WAITCALLBACK_T2874777647_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.WaitCallback
struct  WaitCallback_t2874777647  : public MulticastDelegate_t3254873941
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAITCALLBACK_T2874777647_H
#ifndef TIMERCALLBACK_T2671139078_H
#define TIMERCALLBACK_T2671139078_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.TimerCallback
struct  TimerCallback_t2671139078  : public MulticastDelegate_t3254873941
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMERCALLBACK_T2671139078_H
#ifndef THREADSTART_T3818430460_H
#define THREADSTART_T3818430460_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.ThreadStart
struct  ThreadStart_t3818430460  : public MulticastDelegate_t3254873941
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREADSTART_T3818430460_H
#ifndef SENDORPOSTCALLBACK_T1732189088_H
#define SENDORPOSTCALLBACK_T1732189088_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.SendOrPostCallback
struct  SendOrPostCallback_t1732189088  : public MulticastDelegate_t3254873941
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SENDORPOSTCALLBACK_T1732189088_H
#ifndef PARAMETERIZEDTHREADSTART_T3977704323_H
#define PARAMETERIZEDTHREADSTART_T3977704323_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.ParameterizedThreadStart
struct  ParameterizedThreadStart_t3977704323  : public MulticastDelegate_t3254873941
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARAMETERIZEDTHREADSTART_T3977704323_H
#ifndef HEADERHANDLER_T1639894115_H
#define HEADERHANDLER_T1639894115_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.HeaderHandler
struct  HeaderHandler_t1639894115  : public MulticastDelegate_t3254873941
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HEADERHANDLER_T1639894115_H
#ifndef PRIMALITYTEST_T3955317940_H
#define PRIMALITYTEST_T3955317940_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.Prime.PrimalityTest
struct  PrimalityTest_t3955317940  : public MulticastDelegate_t3254873941
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRIMALITYTEST_T3955317940_H
#ifndef MEMBERFILTER_T2516008887_H
#define MEMBERFILTER_T2516008887_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberFilter
struct  MemberFilter_t2516008887  : public MulticastDelegate_t3254873941
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERFILTER_T2516008887_H
#ifndef CROSSCONTEXTDELEGATE_T1289678289_H
#define CROSSCONTEXTDELEGATE_T1289678289_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Contexts.CrossContextDelegate
struct  CrossContextDelegate_t1289678289  : public MulticastDelegate_t3254873941
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CROSSCONTEXTDELEGATE_T1289678289_H
#ifndef TYPEFILTER_T4108097659_H
#define TYPEFILTER_T4108097659_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.TypeFilter
struct  TypeFilter_t4108097659  : public MulticastDelegate_t3254873941
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEFILTER_T4108097659_H
#ifndef ARC4MANAGED_T1406635650_H
#define ARC4MANAGED_T1406635650_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.ARC4Managed
struct  ARC4Managed_t1406635650  : public RC4_t2103311274
{
public:
	// System.Byte[] Mono.Security.Cryptography.ARC4Managed::key
	ByteU5BU5D_t3990433866* ___key_12;
	// System.Byte[] Mono.Security.Cryptography.ARC4Managed::state
	ByteU5BU5D_t3990433866* ___state_13;
	// System.Byte Mono.Security.Cryptography.ARC4Managed::x
	uint8_t ___x_14;
	// System.Byte Mono.Security.Cryptography.ARC4Managed::y
	uint8_t ___y_15;
	// System.Boolean Mono.Security.Cryptography.ARC4Managed::m_disposed
	bool ___m_disposed_16;

public:
	inline static int32_t get_offset_of_key_12() { return static_cast<int32_t>(offsetof(ARC4Managed_t1406635650, ___key_12)); }
	inline ByteU5BU5D_t3990433866* get_key_12() const { return ___key_12; }
	inline ByteU5BU5D_t3990433866** get_address_of_key_12() { return &___key_12; }
	inline void set_key_12(ByteU5BU5D_t3990433866* value)
	{
		___key_12 = value;
		Il2CppCodeGenWriteBarrier((&___key_12), value);
	}

	inline static int32_t get_offset_of_state_13() { return static_cast<int32_t>(offsetof(ARC4Managed_t1406635650, ___state_13)); }
	inline ByteU5BU5D_t3990433866* get_state_13() const { return ___state_13; }
	inline ByteU5BU5D_t3990433866** get_address_of_state_13() { return &___state_13; }
	inline void set_state_13(ByteU5BU5D_t3990433866* value)
	{
		___state_13 = value;
		Il2CppCodeGenWriteBarrier((&___state_13), value);
	}

	inline static int32_t get_offset_of_x_14() { return static_cast<int32_t>(offsetof(ARC4Managed_t1406635650, ___x_14)); }
	inline uint8_t get_x_14() const { return ___x_14; }
	inline uint8_t* get_address_of_x_14() { return &___x_14; }
	inline void set_x_14(uint8_t value)
	{
		___x_14 = value;
	}

	inline static int32_t get_offset_of_y_15() { return static_cast<int32_t>(offsetof(ARC4Managed_t1406635650, ___y_15)); }
	inline uint8_t get_y_15() const { return ___y_15; }
	inline uint8_t* get_address_of_y_15() { return &___y_15; }
	inline void set_y_15(uint8_t value)
	{
		___y_15 = value;
	}

	inline static int32_t get_offset_of_m_disposed_16() { return static_cast<int32_t>(offsetof(ARC4Managed_t1406635650, ___m_disposed_16)); }
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
#endif // ARC4MANAGED_T1406635650_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize900 = { sizeof (OperatingSystem_t1202916457), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable900[3] = 
{
	OperatingSystem_t1202916457::get_offset_of__platform_0(),
	OperatingSystem_t1202916457::get_offset_of__version_1(),
	OperatingSystem_t1202916457::get_offset_of__servicePack_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize901 = { sizeof (OutOfMemoryException_t4070029370), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable901[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize902 = { sizeof (OverflowException_t3392151407), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable902[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize903 = { sizeof (PlatformID_t3422453041)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable903[8] = 
{
	PlatformID_t3422453041::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize904 = { sizeof (PlatformNotSupportedException_t423502430), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable904[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize905 = { sizeof (Random_t1675491652), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable905[3] = 
{
	Random_t1675491652::get_offset_of_inext_0(),
	Random_t1675491652::get_offset_of_inextp_1(),
	Random_t1675491652::get_offset_of_SeedArray_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize906 = { sizeof (RankException_t3140096266), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize907 = { sizeof (ResolveEventArgs_t4059759978), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable907[1] = 
{
	ResolveEventArgs_t4059759978::get_offset_of_m_Name_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize908 = { sizeof (RuntimeMethodHandle_t3532211545)+ sizeof (RuntimeObject), sizeof(RuntimeMethodHandle_t3532211545 ), 0, 0 };
extern const int32_t g_FieldOffsetTable908[1] = 
{
	RuntimeMethodHandle_t3532211545::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize909 = { sizeof (StackOverflowException_t1587604695), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize910 = { sizeof (StringComparer_t3330776541), -1, sizeof(StringComparer_t3330776541_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable910[4] = 
{
	StringComparer_t3330776541_StaticFields::get_offset_of_invariantCultureIgnoreCase_0(),
	StringComparer_t3330776541_StaticFields::get_offset_of_invariantCulture_1(),
	StringComparer_t3330776541_StaticFields::get_offset_of_ordinalIgnoreCase_2(),
	StringComparer_t3330776541_StaticFields::get_offset_of_ordinal_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize911 = { sizeof (CultureAwareComparer_t1326799568), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable911[2] = 
{
	CultureAwareComparer_t1326799568::get_offset_of__ignoreCase_4(),
	CultureAwareComparer_t1326799568::get_offset_of__compareInfo_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize912 = { sizeof (OrdinalComparer_t104826955), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable912[1] = 
{
	OrdinalComparer_t104826955::get_offset_of__ignoreCase_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize913 = { sizeof (StringComparison_t274985830)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable913[7] = 
{
	StringComparison_t274985830::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize914 = { sizeof (StringSplitOptions_t89086037)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable914[3] = 
{
	StringSplitOptions_t89086037::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize915 = { sizeof (SystemException_t1142596300), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize916 = { sizeof (ThreadStaticAttribute_t3482216553), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize917 = { sizeof (TimeSpan_t732814339)+ sizeof (RuntimeObject), sizeof(TimeSpan_t732814339 ), sizeof(TimeSpan_t732814339_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable917[4] = 
{
	TimeSpan_t732814339_StaticFields::get_offset_of_MaxValue_0(),
	TimeSpan_t732814339_StaticFields::get_offset_of_MinValue_1(),
	TimeSpan_t732814339_StaticFields::get_offset_of_Zero_2(),
	TimeSpan_t732814339::get_offset_of__ticks_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize918 = { sizeof (Parser_t1169693439), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable918[4] = 
{
	Parser_t1169693439::get_offset_of__src_0(),
	Parser_t1169693439::get_offset_of__cur_1(),
	Parser_t1169693439::get_offset_of__length_2(),
	Parser_t1169693439::get_offset_of_formatError_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize919 = { sizeof (TimeZone_t4204515528), -1, sizeof(TimeZone_t4204515528_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable919[3] = 
{
	TimeZone_t4204515528_StaticFields::get_offset_of_currentTimeZone_0(),
	TimeZone_t4204515528_StaticFields::get_offset_of_tz_lock_1(),
	TimeZone_t4204515528_StaticFields::get_offset_of_timezone_check_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize920 = { sizeof (CurrentSystemTimeZone_t1938437716), -1, sizeof(CurrentSystemTimeZone_t1938437716_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable920[8] = 
{
	CurrentSystemTimeZone_t1938437716::get_offset_of_m_standardName_3(),
	CurrentSystemTimeZone_t1938437716::get_offset_of_m_daylightName_4(),
	CurrentSystemTimeZone_t1938437716::get_offset_of_m_CachedDaylightChanges_5(),
	CurrentSystemTimeZone_t1938437716::get_offset_of_m_ticksOffset_6(),
	CurrentSystemTimeZone_t1938437716::get_offset_of_utcOffsetWithOutDLS_7(),
	CurrentSystemTimeZone_t1938437716::get_offset_of_utcOffsetWithDLS_8(),
	CurrentSystemTimeZone_t1938437716_StaticFields::get_offset_of_this_year_9(),
	CurrentSystemTimeZone_t1938437716_StaticFields::get_offset_of_this_year_dlt_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize921 = { sizeof (TypeCode_t517079440)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable921[19] = 
{
	TypeCode_t517079440::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize922 = { sizeof (TypeInitializationException_t2692912257), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable922[1] = 
{
	TypeInitializationException_t2692912257::get_offset_of_type_name_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize923 = { sizeof (TypeLoadException_t1966414668), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable923[3] = 
{
	0,
	TypeLoadException_t1966414668::get_offset_of_className_12(),
	TypeLoadException_t1966414668::get_offset_of_assemblyName_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize924 = { sizeof (UnauthorizedAccessException_t2280091743), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize925 = { sizeof (UnhandledExceptionEventArgs_t2717029072), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable925[2] = 
{
	UnhandledExceptionEventArgs_t2717029072::get_offset_of_exception_1(),
	UnhandledExceptionEventArgs_t2717029072::get_offset_of_m_isTerminating_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize926 = { sizeof (UnitySerializationHolder_t440457689), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable926[3] = 
{
	UnitySerializationHolder_t440457689::get_offset_of__data_0(),
	UnitySerializationHolder_t440457689::get_offset_of__unityType_1(),
	UnitySerializationHolder_t440457689::get_offset_of__assemblyName_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize927 = { sizeof (UnityType_t1006333530)+ sizeof (RuntimeObject), sizeof(uint8_t), 0, 0 };
extern const int32_t g_FieldOffsetTable927[5] = 
{
	UnityType_t1006333530::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize928 = { sizeof (Version_t1424531886), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable928[5] = 
{
	0,
	Version_t1424531886::get_offset_of__Major_1(),
	Version_t1424531886::get_offset_of__Minor_2(),
	Version_t1424531886::get_offset_of__Build_3(),
	Version_t1424531886::get_offset_of__Revision_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize929 = { sizeof (WeakReference_t1306613799), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable929[2] = 
{
	WeakReference_t1306613799::get_offset_of_isLongReference_0(),
	WeakReference_t1306613799::get_offset_of_gcHandle_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize930 = { sizeof (PrimalityTest_t3955317940), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize931 = { sizeof (MemberFilter_t2516008887), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize932 = { sizeof (TypeFilter_t4108097659), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize933 = { sizeof (CrossContextDelegate_t1289678289), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize934 = { sizeof (HeaderHandler_t1639894115), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize935 = { sizeof (ParameterizedThreadStart_t3977704323), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize936 = { sizeof (SendOrPostCallback_t1732189088), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize937 = { sizeof (ThreadStart_t3818430460), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize938 = { sizeof (TimerCallback_t2671139078), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize939 = { sizeof (WaitCallback_t2874777647), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize940 = { sizeof (WaitOrTimerCallback_t815677555), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize941 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize942 = { sizeof (AppDomainInitializer_t2755333219), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize943 = { sizeof (AssemblyLoadEventHandler_t1497075503), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize944 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize945 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize946 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize947 = { sizeof (EventHandler_t4141471572), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize948 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize949 = { sizeof (ResolveEventHandler_t1600503546), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize950 = { sizeof (UnhandledExceptionEventHandler_t547537529), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize951 = { sizeof (U3CPrivateImplementationDetailsU3E_t1444045952), -1, sizeof(U3CPrivateImplementationDetailsU3E_t1444045952_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable951[53] = 
{
	U3CPrivateImplementationDetailsU3E_t1444045952_StaticFields::get_offset_of_U24U24fieldU2D0_0(),
	U3CPrivateImplementationDetailsU3E_t1444045952_StaticFields::get_offset_of_U24U24fieldU2D1_1(),
	U3CPrivateImplementationDetailsU3E_t1444045952_StaticFields::get_offset_of_U24U24fieldU2D2_2(),
	U3CPrivateImplementationDetailsU3E_t1444045952_StaticFields::get_offset_of_U24U24fieldU2D3_3(),
	U3CPrivateImplementationDetailsU3E_t1444045952_StaticFields::get_offset_of_U24U24fieldU2D4_4(),
	U3CPrivateImplementationDetailsU3E_t1444045952_StaticFields::get_offset_of_U24U24fieldU2D5_5(),
	U3CPrivateImplementationDetailsU3E_t1444045952_StaticFields::get_offset_of_U24U24fieldU2D6_6(),
	U3CPrivateImplementationDetailsU3E_t1444045952_StaticFields::get_offset_of_U24U24fieldU2D15_7(),
	U3CPrivateImplementationDetailsU3E_t1444045952_StaticFields::get_offset_of_U24U24fieldU2D16_8(),
	U3CPrivateImplementationDetailsU3E_t1444045952_StaticFields::get_offset_of_U24U24fieldU2D17_9(),
	U3CPrivateImplementationDetailsU3E_t1444045952_StaticFields::get_offset_of_U24U24fieldU2D18_10(),
	U3CPrivateImplementationDetailsU3E_t1444045952_StaticFields::get_offset_of_U24U24fieldU2D19_11(),
	U3CPrivateImplementationDetailsU3E_t1444045952_StaticFields::get_offset_of_U24U24fieldU2D20_12(),
	U3CPrivateImplementationDetailsU3E_t1444045952_StaticFields::get_offset_of_U24U24fieldU2D21_13(),
	U3CPrivateImplementationDetailsU3E_t1444045952_StaticFields::get_offset_of_U24U24fieldU2D22_14(),
	U3CPrivateImplementationDetailsU3E_t1444045952_StaticFields::get_offset_of_U24U24fieldU2D23_15(),
	U3CPrivateImplementationDetailsU3E_t1444045952_StaticFields::get_offset_of_U24U24fieldU2D24_16(),
	U3CPrivateImplementationDetailsU3E_t1444045952_StaticFields::get_offset_of_U24U24fieldU2D25_17(),
	U3CPrivateImplementationDetailsU3E_t1444045952_StaticFields::get_offset_of_U24U24fieldU2D26_18(),
	U3CPrivateImplementationDetailsU3E_t1444045952_StaticFields::get_offset_of_U24U24fieldU2D27_19(),
	U3CPrivateImplementationDetailsU3E_t1444045952_StaticFields::get_offset_of_U24U24fieldU2D30_20(),
	U3CPrivateImplementationDetailsU3E_t1444045952_StaticFields::get_offset_of_U24U24fieldU2D31_21(),
	U3CPrivateImplementationDetailsU3E_t1444045952_StaticFields::get_offset_of_U24U24fieldU2D32_22(),
	U3CPrivateImplementationDetailsU3E_t1444045952_StaticFields::get_offset_of_U24U24fieldU2D33_23(),
	U3CPrivateImplementationDetailsU3E_t1444045952_StaticFields::get_offset_of_U24U24fieldU2D34_24(),
	U3CPrivateImplementationDetailsU3E_t1444045952_StaticFields::get_offset_of_U24U24fieldU2D35_25(),
	U3CPrivateImplementationDetailsU3E_t1444045952_StaticFields::get_offset_of_U24U24fieldU2D36_26(),
	U3CPrivateImplementationDetailsU3E_t1444045952_StaticFields::get_offset_of_U24U24fieldU2D37_27(),
	U3CPrivateImplementationDetailsU3E_t1444045952_StaticFields::get_offset_of_U24U24fieldU2D38_28(),
	U3CPrivateImplementationDetailsU3E_t1444045952_StaticFields::get_offset_of_U24U24fieldU2D39_29(),
	U3CPrivateImplementationDetailsU3E_t1444045952_StaticFields::get_offset_of_U24U24fieldU2D40_30(),
	U3CPrivateImplementationDetailsU3E_t1444045952_StaticFields::get_offset_of_U24U24fieldU2D41_31(),
	U3CPrivateImplementationDetailsU3E_t1444045952_StaticFields::get_offset_of_U24U24fieldU2D42_32(),
	U3CPrivateImplementationDetailsU3E_t1444045952_StaticFields::get_offset_of_U24U24fieldU2D43_33(),
	U3CPrivateImplementationDetailsU3E_t1444045952_StaticFields::get_offset_of_U24U24fieldU2D44_34(),
	U3CPrivateImplementationDetailsU3E_t1444045952_StaticFields::get_offset_of_U24U24fieldU2D45_35(),
	U3CPrivateImplementationDetailsU3E_t1444045952_StaticFields::get_offset_of_U24U24fieldU2D46_36(),
	U3CPrivateImplementationDetailsU3E_t1444045952_StaticFields::get_offset_of_U24U24fieldU2D47_37(),
	U3CPrivateImplementationDetailsU3E_t1444045952_StaticFields::get_offset_of_U24U24fieldU2D48_38(),
	U3CPrivateImplementationDetailsU3E_t1444045952_StaticFields::get_offset_of_U24U24fieldU2D49_39(),
	U3CPrivateImplementationDetailsU3E_t1444045952_StaticFields::get_offset_of_U24U24fieldU2D50_40(),
	U3CPrivateImplementationDetailsU3E_t1444045952_StaticFields::get_offset_of_U24U24fieldU2D51_41(),
	U3CPrivateImplementationDetailsU3E_t1444045952_StaticFields::get_offset_of_U24U24fieldU2D52_42(),
	U3CPrivateImplementationDetailsU3E_t1444045952_StaticFields::get_offset_of_U24U24fieldU2D53_43(),
	U3CPrivateImplementationDetailsU3E_t1444045952_StaticFields::get_offset_of_U24U24fieldU2D54_44(),
	U3CPrivateImplementationDetailsU3E_t1444045952_StaticFields::get_offset_of_U24U24fieldU2D55_45(),
	U3CPrivateImplementationDetailsU3E_t1444045952_StaticFields::get_offset_of_U24U24fieldU2D56_46(),
	U3CPrivateImplementationDetailsU3E_t1444045952_StaticFields::get_offset_of_U24U24fieldU2D57_47(),
	U3CPrivateImplementationDetailsU3E_t1444045952_StaticFields::get_offset_of_U24U24fieldU2D60_48(),
	U3CPrivateImplementationDetailsU3E_t1444045952_StaticFields::get_offset_of_U24U24fieldU2D62_49(),
	U3CPrivateImplementationDetailsU3E_t1444045952_StaticFields::get_offset_of_U24U24fieldU2D63_50(),
	U3CPrivateImplementationDetailsU3E_t1444045952_StaticFields::get_offset_of_U24U24fieldU2D64_51(),
	U3CPrivateImplementationDetailsU3E_t1444045952_StaticFields::get_offset_of_U24U24fieldU2D65_52(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize952 = { sizeof (U24ArrayTypeU2456_t1643933315)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2456_t1643933315 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize953 = { sizeof (U24ArrayTypeU2424_t3433776814)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2424_t3433776814 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize954 = { sizeof (U24ArrayTypeU2416_t1106822058)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2416_t1106822058 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize955 = { sizeof (U24ArrayTypeU24120_t1454327024)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU24120_t1454327024 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize956 = { sizeof (U24ArrayTypeU243132_t3841156690)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU243132_t3841156690 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize957 = { sizeof (U24ArrayTypeU2420_t3138775208)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2420_t3138775208 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize958 = { sizeof (U24ArrayTypeU2432_t3859783016)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2432_t3859783016 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize959 = { sizeof (U24ArrayTypeU2448_t3247860447)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2448_t3247860447 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize960 = { sizeof (U24ArrayTypeU2464_t576514567)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2464_t576514567 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize961 = { sizeof (U24ArrayTypeU2412_t99387221)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2412_t99387221 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize962 = { sizeof (U24ArrayTypeU24136_t821082809)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU24136_t821082809 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize963 = { sizeof (U24ArrayTypeU248_t1411500877)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU248_t1411500877 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize964 = { sizeof (U24ArrayTypeU2472_t3372676604)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2472_t3372676604 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize965 = { sizeof (U24ArrayTypeU24124_t1060395960)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU24124_t1060395960 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize966 = { sizeof (U24ArrayTypeU2496_t2666517524)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2496_t2666517524 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize967 = { sizeof (U24ArrayTypeU242048_t109220664)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU242048_t109220664 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize968 = { sizeof (U24ArrayTypeU24256_t856796148)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU24256_t856796148 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize969 = { sizeof (U24ArrayTypeU241024_t29942718)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU241024_t29942718 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize970 = { sizeof (U24ArrayTypeU24640_t2996305577)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU24640_t2996305577 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize971 = { sizeof (U24ArrayTypeU24128_t1267203091)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU24128_t1267203091 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize972 = { sizeof (U24ArrayTypeU2452_t302455132)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2452_t302455132 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize973 = { sizeof (Il2CppComObject), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize974 = { sizeof (__Il2CppComDelegate_t1745187719), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize975 = { sizeof (U3CModuleU3E_t1550132600), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize976 = { sizeof (Locale_t2127861558), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize977 = { sizeof (BigInteger_t2277584885), -1, sizeof(BigInteger_t2277584885_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable977[4] = 
{
	BigInteger_t2277584885::get_offset_of_length_0(),
	BigInteger_t2277584885::get_offset_of_data_1(),
	BigInteger_t2277584885_StaticFields::get_offset_of_smallPrimes_2(),
	BigInteger_t2277584885_StaticFields::get_offset_of_rng_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize978 = { sizeof (Sign_t2094138786)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable978[4] = 
{
	Sign_t2094138786::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize979 = { sizeof (ModulusRing_t641790530), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable979[2] = 
{
	ModulusRing_t641790530::get_offset_of_mod_0(),
	ModulusRing_t641790530::get_offset_of_constant_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize980 = { sizeof (Kernel_t3340881266), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize981 = { sizeof (ConfidenceFactor_t470587628)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable981[7] = 
{
	ConfidenceFactor_t470587628::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize982 = { sizeof (PrimalityTests_t2012446421), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize983 = { sizeof (PrimeGeneratorBase_t4236485941), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize984 = { sizeof (SequentialSearchPrimeGeneratorBase_t2621017452), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize985 = { sizeof (ASN1_t1165924037), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable985[3] = 
{
	ASN1_t1165924037::get_offset_of_m_nTag_0(),
	ASN1_t1165924037::get_offset_of_m_aValue_1(),
	ASN1_t1165924037::get_offset_of_elist_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize986 = { sizeof (ASN1Convert_t3229810623), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize987 = { sizeof (BitConverterLE_t3817231965), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize988 = { sizeof (PKCS7_t3658348133), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize989 = { sizeof (ContentInfo_t4466516), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable989[2] = 
{
	ContentInfo_t4466516::get_offset_of_contentType_0(),
	ContentInfo_t4466516::get_offset_of_content_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize990 = { sizeof (EncryptedData_t1558483112), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable990[4] = 
{
	EncryptedData_t1558483112::get_offset_of__version_0(),
	EncryptedData_t1558483112::get_offset_of__content_1(),
	EncryptedData_t1558483112::get_offset_of__encryptionAlgorithm_2(),
	EncryptedData_t1558483112::get_offset_of__encrypted_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize991 = { sizeof (ARC4Managed_t1406635650), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable991[5] = 
{
	ARC4Managed_t1406635650::get_offset_of_key_12(),
	ARC4Managed_t1406635650::get_offset_of_state_13(),
	ARC4Managed_t1406635650::get_offset_of_x_14(),
	ARC4Managed_t1406635650::get_offset_of_y_15(),
	ARC4Managed_t1406635650::get_offset_of_m_disposed_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize992 = { sizeof (CryptoConvert_t2714714884), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize993 = { sizeof (KeyBuilder_t3451634565), -1, sizeof(KeyBuilder_t3451634565_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable993[1] = 
{
	KeyBuilder_t3451634565_StaticFields::get_offset_of_rng_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize994 = { sizeof (MD2_t1984760486), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize995 = { sizeof (MD2Managed_t4090624548), -1, sizeof(MD2Managed_t4090624548_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable995[6] = 
{
	MD2Managed_t4090624548::get_offset_of_state_4(),
	MD2Managed_t4090624548::get_offset_of_checksum_5(),
	MD2Managed_t4090624548::get_offset_of_buffer_6(),
	MD2Managed_t4090624548::get_offset_of_count_7(),
	MD2Managed_t4090624548::get_offset_of_x_8(),
	MD2Managed_t4090624548_StaticFields::get_offset_of_PI_SUBST_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize996 = { sizeof (MD4_t2166282422), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize997 = { sizeof (MD4Managed_t51601562), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable997[5] = 
{
	MD4Managed_t51601562::get_offset_of_state_4(),
	MD4Managed_t51601562::get_offset_of_buffer_5(),
	MD4Managed_t51601562::get_offset_of_count_6(),
	MD4Managed_t51601562::get_offset_of_x_7(),
	MD4Managed_t51601562::get_offset_of_digest_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize998 = { sizeof (PKCS1_t1634690126), -1, sizeof(PKCS1_t1634690126_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable998[4] = 
{
	PKCS1_t1634690126_StaticFields::get_offset_of_emptySHA1_0(),
	PKCS1_t1634690126_StaticFields::get_offset_of_emptySHA256_1(),
	PKCS1_t1634690126_StaticFields::get_offset_of_emptySHA384_2(),
	PKCS1_t1634690126_StaticFields::get_offset_of_emptySHA512_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize999 = { sizeof (PKCS8_t3920153275), -1, 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif

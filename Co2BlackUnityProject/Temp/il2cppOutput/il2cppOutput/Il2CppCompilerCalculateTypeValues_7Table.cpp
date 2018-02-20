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

// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t2892052603;
// System.String
struct String_t;
// System.Collections.ArrayList
struct ArrayList_t1666010013;
// System.Char[]
struct CharU5BU5D_t3056575431;
// System.Text.DecoderFallback
struct DecoderFallback_t3871842754;
// System.Text.DecoderFallbackBuffer
struct DecoderFallbackBuffer_t2111995526;
// System.Security.Permissions.StrongNamePublicKeyBlob
struct StrongNamePublicKeyBlob_t936902416;
// System.Version
struct Version_t1133533382;
// System.Text.EncoderFallback
struct EncoderFallback_t2317521021;
// System.Reflection.Assembly
struct Assembly_t3233635170;
// System.Object[]
struct ObjectU5BU5D_t4181569305;
// System.Text.Encoding
struct Encoding_t314924375;
// System.Byte[]
struct ByteU5BU5D_t250263739;
// System.Collections.Generic.IList`1<System.Security.Policy.StrongName>
struct IList_1_t1271025323;
// System.Collections.IEnumerator
struct IEnumerator_t601917740;
// System.UInt32[]
struct UInt32U5BU5D_t819860844;
// System.UInt64[]
struct UInt64U5BU5D_t2319310096;
// System.IntPtr[]
struct IntPtrU5BU5D_t4221019038;
// System.Collections.IDictionary
struct IDictionary_t797860427;
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_t665079470;
// System.Collections.Hashtable
struct Hashtable_t4275196815;
// System.Security.Permissions.SecurityPermission
struct SecurityPermission_t2282903104;
// System.Security.Cryptography.RijndaelTransform
struct RijndaelTransform_t2775089468;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t2359443873;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t3399161153;
// System.Void
struct Void_t2367238524;
// System.SByte[]
struct SByteU5BU5D_t2484129797;
// System.AppDomain
struct AppDomain_t398665589;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Security.PermissionSet
struct PermissionSet_t1484169221;
// System.Security.Cryptography.RSA
struct RSA_t76874314;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t193810181;
// System.Security.Cryptography.DESTransform
struct DESTransform_t3186821195;
// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_t2554555006;
// System.Type
struct Type_t;
// System.Security.IPermission
struct IPermission_t3052156154;
// System.Security.Policy.Evidence
struct Evidence_t1703590093;
// System.Security.Cryptography.SHA1Internal
struct SHA1Internal_t3901366001;
// System.Threading.CompressedStack
struct CompressedStack_t4197464022;
// Mono.Security.Cryptography.KeyPairPersistence
struct KeyPairPersistence_t4020066663;
// Mono.Security.Cryptography.RSAManaged
struct RSAManaged_t861136104;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1689471073;




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
#ifndef MARSHALBYREFOBJECT_T2301485505_H
#define MARSHALBYREFOBJECT_T2301485505_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MarshalByRefObject
struct  MarshalByRefObject_t2301485505  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.ServerIdentity System.MarshalByRefObject::_identity
	ServerIdentity_t2892052603 * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_t2301485505, ____identity_0)); }
	inline ServerIdentity_t2892052603 * get__identity_0() const { return ____identity_0; }
	inline ServerIdentity_t2892052603 ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(ServerIdentity_t2892052603 * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((&____identity_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHALBYREFOBJECT_T2301485505_H
#ifndef SIGNATUREDESCRIPTION_T763271396_H
#define SIGNATUREDESCRIPTION_T763271396_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SignatureDescription
struct  SignatureDescription_t763271396  : public RuntimeObject
{
public:
	// System.String System.Security.Cryptography.SignatureDescription::_DeformatterAlgorithm
	String_t* ____DeformatterAlgorithm_0;
	// System.String System.Security.Cryptography.SignatureDescription::_DigestAlgorithm
	String_t* ____DigestAlgorithm_1;
	// System.String System.Security.Cryptography.SignatureDescription::_FormatterAlgorithm
	String_t* ____FormatterAlgorithm_2;
	// System.String System.Security.Cryptography.SignatureDescription::_KeyAlgorithm
	String_t* ____KeyAlgorithm_3;

public:
	inline static int32_t get_offset_of__DeformatterAlgorithm_0() { return static_cast<int32_t>(offsetof(SignatureDescription_t763271396, ____DeformatterAlgorithm_0)); }
	inline String_t* get__DeformatterAlgorithm_0() const { return ____DeformatterAlgorithm_0; }
	inline String_t** get_address_of__DeformatterAlgorithm_0() { return &____DeformatterAlgorithm_0; }
	inline void set__DeformatterAlgorithm_0(String_t* value)
	{
		____DeformatterAlgorithm_0 = value;
		Il2CppCodeGenWriteBarrier((&____DeformatterAlgorithm_0), value);
	}

	inline static int32_t get_offset_of__DigestAlgorithm_1() { return static_cast<int32_t>(offsetof(SignatureDescription_t763271396, ____DigestAlgorithm_1)); }
	inline String_t* get__DigestAlgorithm_1() const { return ____DigestAlgorithm_1; }
	inline String_t** get_address_of__DigestAlgorithm_1() { return &____DigestAlgorithm_1; }
	inline void set__DigestAlgorithm_1(String_t* value)
	{
		____DigestAlgorithm_1 = value;
		Il2CppCodeGenWriteBarrier((&____DigestAlgorithm_1), value);
	}

	inline static int32_t get_offset_of__FormatterAlgorithm_2() { return static_cast<int32_t>(offsetof(SignatureDescription_t763271396, ____FormatterAlgorithm_2)); }
	inline String_t* get__FormatterAlgorithm_2() const { return ____FormatterAlgorithm_2; }
	inline String_t** get_address_of__FormatterAlgorithm_2() { return &____FormatterAlgorithm_2; }
	inline void set__FormatterAlgorithm_2(String_t* value)
	{
		____FormatterAlgorithm_2 = value;
		Il2CppCodeGenWriteBarrier((&____FormatterAlgorithm_2), value);
	}

	inline static int32_t get_offset_of__KeyAlgorithm_3() { return static_cast<int32_t>(offsetof(SignatureDescription_t763271396, ____KeyAlgorithm_3)); }
	inline String_t* get__KeyAlgorithm_3() const { return ____KeyAlgorithm_3; }
	inline String_t** get_address_of__KeyAlgorithm_3() { return &____KeyAlgorithm_3; }
	inline void set__KeyAlgorithm_3(String_t* value)
	{
		____KeyAlgorithm_3 = value;
		Il2CppCodeGenWriteBarrier((&____KeyAlgorithm_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIGNATUREDESCRIPTION_T763271396_H
#ifndef SECURITYATTRIBUTE_T2622143265_H
#define SECURITYATTRIBUTE_T2622143265_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecurityElement/SecurityAttribute
struct  SecurityAttribute_t2622143265  : public RuntimeObject
{
public:
	// System.String System.Security.SecurityElement/SecurityAttribute::_name
	String_t* ____name_0;
	// System.String System.Security.SecurityElement/SecurityAttribute::_value
	String_t* ____value_1;

public:
	inline static int32_t get_offset_of__name_0() { return static_cast<int32_t>(offsetof(SecurityAttribute_t2622143265, ____name_0)); }
	inline String_t* get__name_0() const { return ____name_0; }
	inline String_t** get_address_of__name_0() { return &____name_0; }
	inline void set__name_0(String_t* value)
	{
		____name_0 = value;
		Il2CppCodeGenWriteBarrier((&____name_0), value);
	}

	inline static int32_t get_offset_of__value_1() { return static_cast<int32_t>(offsetof(SecurityAttribute_t2622143265, ____value_1)); }
	inline String_t* get__value_1() const { return ____value_1; }
	inline String_t** get_address_of__value_1() { return &____value_1; }
	inline void set__value_1(String_t* value)
	{
		____value_1 = value;
		Il2CppCodeGenWriteBarrier((&____value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYATTRIBUTE_T2622143265_H
#ifndef SECURITYELEMENT_T1126158185_H
#define SECURITYELEMENT_T1126158185_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecurityElement
struct  SecurityElement_t1126158185  : public RuntimeObject
{
public:
	// System.String System.Security.SecurityElement::text
	String_t* ___text_0;
	// System.String System.Security.SecurityElement::tag
	String_t* ___tag_1;
	// System.Collections.ArrayList System.Security.SecurityElement::attributes
	ArrayList_t1666010013 * ___attributes_2;
	// System.Collections.ArrayList System.Security.SecurityElement::children
	ArrayList_t1666010013 * ___children_3;

public:
	inline static int32_t get_offset_of_text_0() { return static_cast<int32_t>(offsetof(SecurityElement_t1126158185, ___text_0)); }
	inline String_t* get_text_0() const { return ___text_0; }
	inline String_t** get_address_of_text_0() { return &___text_0; }
	inline void set_text_0(String_t* value)
	{
		___text_0 = value;
		Il2CppCodeGenWriteBarrier((&___text_0), value);
	}

	inline static int32_t get_offset_of_tag_1() { return static_cast<int32_t>(offsetof(SecurityElement_t1126158185, ___tag_1)); }
	inline String_t* get_tag_1() const { return ___tag_1; }
	inline String_t** get_address_of_tag_1() { return &___tag_1; }
	inline void set_tag_1(String_t* value)
	{
		___tag_1 = value;
		Il2CppCodeGenWriteBarrier((&___tag_1), value);
	}

	inline static int32_t get_offset_of_attributes_2() { return static_cast<int32_t>(offsetof(SecurityElement_t1126158185, ___attributes_2)); }
	inline ArrayList_t1666010013 * get_attributes_2() const { return ___attributes_2; }
	inline ArrayList_t1666010013 ** get_address_of_attributes_2() { return &___attributes_2; }
	inline void set_attributes_2(ArrayList_t1666010013 * value)
	{
		___attributes_2 = value;
		Il2CppCodeGenWriteBarrier((&___attributes_2), value);
	}

	inline static int32_t get_offset_of_children_3() { return static_cast<int32_t>(offsetof(SecurityElement_t1126158185, ___children_3)); }
	inline ArrayList_t1666010013 * get_children_3() const { return ___children_3; }
	inline ArrayList_t1666010013 ** get_address_of_children_3() { return &___children_3; }
	inline void set_children_3(ArrayList_t1666010013 * value)
	{
		___children_3 = value;
		Il2CppCodeGenWriteBarrier((&___children_3), value);
	}
};

struct SecurityElement_t1126158185_StaticFields
{
public:
	// System.Char[] System.Security.SecurityElement::invalid_tag_chars
	CharU5BU5D_t3056575431* ___invalid_tag_chars_4;
	// System.Char[] System.Security.SecurityElement::invalid_text_chars
	CharU5BU5D_t3056575431* ___invalid_text_chars_5;
	// System.Char[] System.Security.SecurityElement::invalid_attr_name_chars
	CharU5BU5D_t3056575431* ___invalid_attr_name_chars_6;
	// System.Char[] System.Security.SecurityElement::invalid_attr_value_chars
	CharU5BU5D_t3056575431* ___invalid_attr_value_chars_7;
	// System.Char[] System.Security.SecurityElement::invalid_chars
	CharU5BU5D_t3056575431* ___invalid_chars_8;

public:
	inline static int32_t get_offset_of_invalid_tag_chars_4() { return static_cast<int32_t>(offsetof(SecurityElement_t1126158185_StaticFields, ___invalid_tag_chars_4)); }
	inline CharU5BU5D_t3056575431* get_invalid_tag_chars_4() const { return ___invalid_tag_chars_4; }
	inline CharU5BU5D_t3056575431** get_address_of_invalid_tag_chars_4() { return &___invalid_tag_chars_4; }
	inline void set_invalid_tag_chars_4(CharU5BU5D_t3056575431* value)
	{
		___invalid_tag_chars_4 = value;
		Il2CppCodeGenWriteBarrier((&___invalid_tag_chars_4), value);
	}

	inline static int32_t get_offset_of_invalid_text_chars_5() { return static_cast<int32_t>(offsetof(SecurityElement_t1126158185_StaticFields, ___invalid_text_chars_5)); }
	inline CharU5BU5D_t3056575431* get_invalid_text_chars_5() const { return ___invalid_text_chars_5; }
	inline CharU5BU5D_t3056575431** get_address_of_invalid_text_chars_5() { return &___invalid_text_chars_5; }
	inline void set_invalid_text_chars_5(CharU5BU5D_t3056575431* value)
	{
		___invalid_text_chars_5 = value;
		Il2CppCodeGenWriteBarrier((&___invalid_text_chars_5), value);
	}

	inline static int32_t get_offset_of_invalid_attr_name_chars_6() { return static_cast<int32_t>(offsetof(SecurityElement_t1126158185_StaticFields, ___invalid_attr_name_chars_6)); }
	inline CharU5BU5D_t3056575431* get_invalid_attr_name_chars_6() const { return ___invalid_attr_name_chars_6; }
	inline CharU5BU5D_t3056575431** get_address_of_invalid_attr_name_chars_6() { return &___invalid_attr_name_chars_6; }
	inline void set_invalid_attr_name_chars_6(CharU5BU5D_t3056575431* value)
	{
		___invalid_attr_name_chars_6 = value;
		Il2CppCodeGenWriteBarrier((&___invalid_attr_name_chars_6), value);
	}

	inline static int32_t get_offset_of_invalid_attr_value_chars_7() { return static_cast<int32_t>(offsetof(SecurityElement_t1126158185_StaticFields, ___invalid_attr_value_chars_7)); }
	inline CharU5BU5D_t3056575431* get_invalid_attr_value_chars_7() const { return ___invalid_attr_value_chars_7; }
	inline CharU5BU5D_t3056575431** get_address_of_invalid_attr_value_chars_7() { return &___invalid_attr_value_chars_7; }
	inline void set_invalid_attr_value_chars_7(CharU5BU5D_t3056575431* value)
	{
		___invalid_attr_value_chars_7 = value;
		Il2CppCodeGenWriteBarrier((&___invalid_attr_value_chars_7), value);
	}

	inline static int32_t get_offset_of_invalid_chars_8() { return static_cast<int32_t>(offsetof(SecurityElement_t1126158185_StaticFields, ___invalid_chars_8)); }
	inline CharU5BU5D_t3056575431* get_invalid_chars_8() const { return ___invalid_chars_8; }
	inline CharU5BU5D_t3056575431** get_address_of_invalid_chars_8() { return &___invalid_chars_8; }
	inline void set_invalid_chars_8(CharU5BU5D_t3056575431* value)
	{
		___invalid_chars_8 = value;
		Il2CppCodeGenWriteBarrier((&___invalid_chars_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYELEMENT_T1126158185_H
#ifndef TOBASE64TRANSFORM_T1324414163_H
#define TOBASE64TRANSFORM_T1324414163_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.ToBase64Transform
struct  ToBase64Transform_t1324414163  : public RuntimeObject
{
public:
	// System.Boolean System.Security.Cryptography.ToBase64Transform::m_disposed
	bool ___m_disposed_0;

public:
	inline static int32_t get_offset_of_m_disposed_0() { return static_cast<int32_t>(offsetof(ToBase64Transform_t1324414163, ___m_disposed_0)); }
	inline bool get_m_disposed_0() const { return ___m_disposed_0; }
	inline bool* get_address_of_m_disposed_0() { return &___m_disposed_0; }
	inline void set_m_disposed_0(bool value)
	{
		___m_disposed_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOBASE64TRANSFORM_T1324414163_H
#ifndef DECODER_T2580404822_H
#define DECODER_T2580404822_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Decoder
struct  Decoder_t2580404822  : public RuntimeObject
{
public:
	// System.Text.DecoderFallback System.Text.Decoder::fallback
	DecoderFallback_t3871842754 * ___fallback_0;
	// System.Text.DecoderFallbackBuffer System.Text.Decoder::fallback_buffer
	DecoderFallbackBuffer_t2111995526 * ___fallback_buffer_1;

public:
	inline static int32_t get_offset_of_fallback_0() { return static_cast<int32_t>(offsetof(Decoder_t2580404822, ___fallback_0)); }
	inline DecoderFallback_t3871842754 * get_fallback_0() const { return ___fallback_0; }
	inline DecoderFallback_t3871842754 ** get_address_of_fallback_0() { return &___fallback_0; }
	inline void set_fallback_0(DecoderFallback_t3871842754 * value)
	{
		___fallback_0 = value;
		Il2CppCodeGenWriteBarrier((&___fallback_0), value);
	}

	inline static int32_t get_offset_of_fallback_buffer_1() { return static_cast<int32_t>(offsetof(Decoder_t2580404822, ___fallback_buffer_1)); }
	inline DecoderFallbackBuffer_t2111995526 * get_fallback_buffer_1() const { return ___fallback_buffer_1; }
	inline DecoderFallbackBuffer_t2111995526 ** get_address_of_fallback_buffer_1() { return &___fallback_buffer_1; }
	inline void set_fallback_buffer_1(DecoderFallbackBuffer_t2111995526 * value)
	{
		___fallback_buffer_1 = value;
		Il2CppCodeGenWriteBarrier((&___fallback_buffer_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODER_T2580404822_H
#ifndef PERMISSIONSET_T1484169221_H
#define PERMISSIONSET_T1484169221_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.PermissionSet
struct  PermissionSet_t1484169221  : public RuntimeObject
{
public:
	// System.Boolean System.Security.PermissionSet::<DeclarativeSecurity>k__BackingField
	bool ___U3CDeclarativeSecurityU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CDeclarativeSecurityU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(PermissionSet_t1484169221, ___U3CDeclarativeSecurityU3Ek__BackingField_0)); }
	inline bool get_U3CDeclarativeSecurityU3Ek__BackingField_0() const { return ___U3CDeclarativeSecurityU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CDeclarativeSecurityU3Ek__BackingField_0() { return &___U3CDeclarativeSecurityU3Ek__BackingField_0; }
	inline void set_U3CDeclarativeSecurityU3Ek__BackingField_0(bool value)
	{
		___U3CDeclarativeSecurityU3Ek__BackingField_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PERMISSIONSET_T1484169221_H
#ifndef STRONGNAME_T633292705_H
#define STRONGNAME_T633292705_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.StrongName
struct  StrongName_t633292705  : public RuntimeObject
{
public:
	// System.Security.Permissions.StrongNamePublicKeyBlob System.Security.Policy.StrongName::publickey
	StrongNamePublicKeyBlob_t936902416 * ___publickey_0;
	// System.String System.Security.Policy.StrongName::name
	String_t* ___name_1;
	// System.Version System.Security.Policy.StrongName::version
	Version_t1133533382 * ___version_2;

public:
	inline static int32_t get_offset_of_publickey_0() { return static_cast<int32_t>(offsetof(StrongName_t633292705, ___publickey_0)); }
	inline StrongNamePublicKeyBlob_t936902416 * get_publickey_0() const { return ___publickey_0; }
	inline StrongNamePublicKeyBlob_t936902416 ** get_address_of_publickey_0() { return &___publickey_0; }
	inline void set_publickey_0(StrongNamePublicKeyBlob_t936902416 * value)
	{
		___publickey_0 = value;
		Il2CppCodeGenWriteBarrier((&___publickey_0), value);
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(StrongName_t633292705, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((&___name_1), value);
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(StrongName_t633292705, ___version_2)); }
	inline Version_t1133533382 * get_version_2() const { return ___version_2; }
	inline Version_t1133533382 ** get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(Version_t1133533382 * value)
	{
		___version_2 = value;
		Il2CppCodeGenWriteBarrier((&___version_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRONGNAME_T633292705_H
#ifndef STRINGBUILDER_T2957267887_H
#define STRINGBUILDER_T2957267887_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.StringBuilder
struct  StringBuilder_t2957267887  : public RuntimeObject
{
public:
	// System.Int32 System.Text.StringBuilder::_length
	int32_t ____length_1;
	// System.String System.Text.StringBuilder::_str
	String_t* ____str_2;
	// System.String System.Text.StringBuilder::_cached_str
	String_t* ____cached_str_3;
	// System.Int32 System.Text.StringBuilder::_maxCapacity
	int32_t ____maxCapacity_4;

public:
	inline static int32_t get_offset_of__length_1() { return static_cast<int32_t>(offsetof(StringBuilder_t2957267887, ____length_1)); }
	inline int32_t get__length_1() const { return ____length_1; }
	inline int32_t* get_address_of__length_1() { return &____length_1; }
	inline void set__length_1(int32_t value)
	{
		____length_1 = value;
	}

	inline static int32_t get_offset_of__str_2() { return static_cast<int32_t>(offsetof(StringBuilder_t2957267887, ____str_2)); }
	inline String_t* get__str_2() const { return ____str_2; }
	inline String_t** get_address_of__str_2() { return &____str_2; }
	inline void set__str_2(String_t* value)
	{
		____str_2 = value;
		Il2CppCodeGenWriteBarrier((&____str_2), value);
	}

	inline static int32_t get_offset_of__cached_str_3() { return static_cast<int32_t>(offsetof(StringBuilder_t2957267887, ____cached_str_3)); }
	inline String_t* get__cached_str_3() const { return ____cached_str_3; }
	inline String_t** get_address_of__cached_str_3() { return &____cached_str_3; }
	inline void set__cached_str_3(String_t* value)
	{
		____cached_str_3 = value;
		Il2CppCodeGenWriteBarrier((&____cached_str_3), value);
	}

	inline static int32_t get_offset_of__maxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t2957267887, ____maxCapacity_4)); }
	inline int32_t get__maxCapacity_4() const { return ____maxCapacity_4; }
	inline int32_t* get_address_of__maxCapacity_4() { return &____maxCapacity_4; }
	inline void set__maxCapacity_4(int32_t value)
	{
		____maxCapacity_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGBUILDER_T2957267887_H
#ifndef ENCODERFALLBACK_T2317521021_H
#define ENCODERFALLBACK_T2317521021_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.EncoderFallback
struct  EncoderFallback_t2317521021  : public RuntimeObject
{
public:

public:
};

struct EncoderFallback_t2317521021_StaticFields
{
public:
	// System.Text.EncoderFallback System.Text.EncoderFallback::exception_fallback
	EncoderFallback_t2317521021 * ___exception_fallback_0;
	// System.Text.EncoderFallback System.Text.EncoderFallback::replacement_fallback
	EncoderFallback_t2317521021 * ___replacement_fallback_1;
	// System.Text.EncoderFallback System.Text.EncoderFallback::standard_safe_fallback
	EncoderFallback_t2317521021 * ___standard_safe_fallback_2;

public:
	inline static int32_t get_offset_of_exception_fallback_0() { return static_cast<int32_t>(offsetof(EncoderFallback_t2317521021_StaticFields, ___exception_fallback_0)); }
	inline EncoderFallback_t2317521021 * get_exception_fallback_0() const { return ___exception_fallback_0; }
	inline EncoderFallback_t2317521021 ** get_address_of_exception_fallback_0() { return &___exception_fallback_0; }
	inline void set_exception_fallback_0(EncoderFallback_t2317521021 * value)
	{
		___exception_fallback_0 = value;
		Il2CppCodeGenWriteBarrier((&___exception_fallback_0), value);
	}

	inline static int32_t get_offset_of_replacement_fallback_1() { return static_cast<int32_t>(offsetof(EncoderFallback_t2317521021_StaticFields, ___replacement_fallback_1)); }
	inline EncoderFallback_t2317521021 * get_replacement_fallback_1() const { return ___replacement_fallback_1; }
	inline EncoderFallback_t2317521021 ** get_address_of_replacement_fallback_1() { return &___replacement_fallback_1; }
	inline void set_replacement_fallback_1(EncoderFallback_t2317521021 * value)
	{
		___replacement_fallback_1 = value;
		Il2CppCodeGenWriteBarrier((&___replacement_fallback_1), value);
	}

	inline static int32_t get_offset_of_standard_safe_fallback_2() { return static_cast<int32_t>(offsetof(EncoderFallback_t2317521021_StaticFields, ___standard_safe_fallback_2)); }
	inline EncoderFallback_t2317521021 * get_standard_safe_fallback_2() const { return ___standard_safe_fallback_2; }
	inline EncoderFallback_t2317521021 ** get_address_of_standard_safe_fallback_2() { return &___standard_safe_fallback_2; }
	inline void set_standard_safe_fallback_2(EncoderFallback_t2317521021 * value)
	{
		___standard_safe_fallback_2 = value;
		Il2CppCodeGenWriteBarrier((&___standard_safe_fallback_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODERFALLBACK_T2317521021_H
#ifndef ENCODING_T314924375_H
#define ENCODING_T314924375_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Encoding
struct  Encoding_t314924375  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::codePage
	int32_t ___codePage_0;
	// System.Int32 System.Text.Encoding::windows_code_page
	int32_t ___windows_code_page_1;
	// System.Boolean System.Text.Encoding::is_readonly
	bool ___is_readonly_2;
	// System.Text.DecoderFallback System.Text.Encoding::decoder_fallback
	DecoderFallback_t3871842754 * ___decoder_fallback_3;
	// System.Text.EncoderFallback System.Text.Encoding::encoder_fallback
	EncoderFallback_t2317521021 * ___encoder_fallback_4;
	// System.String System.Text.Encoding::body_name
	String_t* ___body_name_8;
	// System.String System.Text.Encoding::encoding_name
	String_t* ___encoding_name_9;
	// System.String System.Text.Encoding::header_name
	String_t* ___header_name_10;
	// System.Boolean System.Text.Encoding::is_mail_news_display
	bool ___is_mail_news_display_11;
	// System.Boolean System.Text.Encoding::is_mail_news_save
	bool ___is_mail_news_save_12;
	// System.Boolean System.Text.Encoding::is_browser_save
	bool ___is_browser_save_13;
	// System.Boolean System.Text.Encoding::is_browser_display
	bool ___is_browser_display_14;
	// System.String System.Text.Encoding::web_name
	String_t* ___web_name_15;

public:
	inline static int32_t get_offset_of_codePage_0() { return static_cast<int32_t>(offsetof(Encoding_t314924375, ___codePage_0)); }
	inline int32_t get_codePage_0() const { return ___codePage_0; }
	inline int32_t* get_address_of_codePage_0() { return &___codePage_0; }
	inline void set_codePage_0(int32_t value)
	{
		___codePage_0 = value;
	}

	inline static int32_t get_offset_of_windows_code_page_1() { return static_cast<int32_t>(offsetof(Encoding_t314924375, ___windows_code_page_1)); }
	inline int32_t get_windows_code_page_1() const { return ___windows_code_page_1; }
	inline int32_t* get_address_of_windows_code_page_1() { return &___windows_code_page_1; }
	inline void set_windows_code_page_1(int32_t value)
	{
		___windows_code_page_1 = value;
	}

	inline static int32_t get_offset_of_is_readonly_2() { return static_cast<int32_t>(offsetof(Encoding_t314924375, ___is_readonly_2)); }
	inline bool get_is_readonly_2() const { return ___is_readonly_2; }
	inline bool* get_address_of_is_readonly_2() { return &___is_readonly_2; }
	inline void set_is_readonly_2(bool value)
	{
		___is_readonly_2 = value;
	}

	inline static int32_t get_offset_of_decoder_fallback_3() { return static_cast<int32_t>(offsetof(Encoding_t314924375, ___decoder_fallback_3)); }
	inline DecoderFallback_t3871842754 * get_decoder_fallback_3() const { return ___decoder_fallback_3; }
	inline DecoderFallback_t3871842754 ** get_address_of_decoder_fallback_3() { return &___decoder_fallback_3; }
	inline void set_decoder_fallback_3(DecoderFallback_t3871842754 * value)
	{
		___decoder_fallback_3 = value;
		Il2CppCodeGenWriteBarrier((&___decoder_fallback_3), value);
	}

	inline static int32_t get_offset_of_encoder_fallback_4() { return static_cast<int32_t>(offsetof(Encoding_t314924375, ___encoder_fallback_4)); }
	inline EncoderFallback_t2317521021 * get_encoder_fallback_4() const { return ___encoder_fallback_4; }
	inline EncoderFallback_t2317521021 ** get_address_of_encoder_fallback_4() { return &___encoder_fallback_4; }
	inline void set_encoder_fallback_4(EncoderFallback_t2317521021 * value)
	{
		___encoder_fallback_4 = value;
		Il2CppCodeGenWriteBarrier((&___encoder_fallback_4), value);
	}

	inline static int32_t get_offset_of_body_name_8() { return static_cast<int32_t>(offsetof(Encoding_t314924375, ___body_name_8)); }
	inline String_t* get_body_name_8() const { return ___body_name_8; }
	inline String_t** get_address_of_body_name_8() { return &___body_name_8; }
	inline void set_body_name_8(String_t* value)
	{
		___body_name_8 = value;
		Il2CppCodeGenWriteBarrier((&___body_name_8), value);
	}

	inline static int32_t get_offset_of_encoding_name_9() { return static_cast<int32_t>(offsetof(Encoding_t314924375, ___encoding_name_9)); }
	inline String_t* get_encoding_name_9() const { return ___encoding_name_9; }
	inline String_t** get_address_of_encoding_name_9() { return &___encoding_name_9; }
	inline void set_encoding_name_9(String_t* value)
	{
		___encoding_name_9 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_name_9), value);
	}

	inline static int32_t get_offset_of_header_name_10() { return static_cast<int32_t>(offsetof(Encoding_t314924375, ___header_name_10)); }
	inline String_t* get_header_name_10() const { return ___header_name_10; }
	inline String_t** get_address_of_header_name_10() { return &___header_name_10; }
	inline void set_header_name_10(String_t* value)
	{
		___header_name_10 = value;
		Il2CppCodeGenWriteBarrier((&___header_name_10), value);
	}

	inline static int32_t get_offset_of_is_mail_news_display_11() { return static_cast<int32_t>(offsetof(Encoding_t314924375, ___is_mail_news_display_11)); }
	inline bool get_is_mail_news_display_11() const { return ___is_mail_news_display_11; }
	inline bool* get_address_of_is_mail_news_display_11() { return &___is_mail_news_display_11; }
	inline void set_is_mail_news_display_11(bool value)
	{
		___is_mail_news_display_11 = value;
	}

	inline static int32_t get_offset_of_is_mail_news_save_12() { return static_cast<int32_t>(offsetof(Encoding_t314924375, ___is_mail_news_save_12)); }
	inline bool get_is_mail_news_save_12() const { return ___is_mail_news_save_12; }
	inline bool* get_address_of_is_mail_news_save_12() { return &___is_mail_news_save_12; }
	inline void set_is_mail_news_save_12(bool value)
	{
		___is_mail_news_save_12 = value;
	}

	inline static int32_t get_offset_of_is_browser_save_13() { return static_cast<int32_t>(offsetof(Encoding_t314924375, ___is_browser_save_13)); }
	inline bool get_is_browser_save_13() const { return ___is_browser_save_13; }
	inline bool* get_address_of_is_browser_save_13() { return &___is_browser_save_13; }
	inline void set_is_browser_save_13(bool value)
	{
		___is_browser_save_13 = value;
	}

	inline static int32_t get_offset_of_is_browser_display_14() { return static_cast<int32_t>(offsetof(Encoding_t314924375, ___is_browser_display_14)); }
	inline bool get_is_browser_display_14() const { return ___is_browser_display_14; }
	inline bool* get_address_of_is_browser_display_14() { return &___is_browser_display_14; }
	inline void set_is_browser_display_14(bool value)
	{
		___is_browser_display_14 = value;
	}

	inline static int32_t get_offset_of_web_name_15() { return static_cast<int32_t>(offsetof(Encoding_t314924375, ___web_name_15)); }
	inline String_t* get_web_name_15() const { return ___web_name_15; }
	inline String_t** get_address_of_web_name_15() { return &___web_name_15; }
	inline void set_web_name_15(String_t* value)
	{
		___web_name_15 = value;
		Il2CppCodeGenWriteBarrier((&___web_name_15), value);
	}
};

struct Encoding_t314924375_StaticFields
{
public:
	// System.Reflection.Assembly System.Text.Encoding::i18nAssembly
	Assembly_t3233635170 * ___i18nAssembly_5;
	// System.Boolean System.Text.Encoding::i18nDisabled
	bool ___i18nDisabled_6;
	// System.Object[] System.Text.Encoding::encodings
	ObjectU5BU5D_t4181569305* ___encodings_7;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t314924375 * ___asciiEncoding_16;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianEncoding
	Encoding_t314924375 * ___bigEndianEncoding_17;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t314924375 * ___defaultEncoding_18;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t314924375 * ___utf7Encoding_19;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8EncodingWithMarkers
	Encoding_t314924375 * ___utf8EncodingWithMarkers_20;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8EncodingWithoutMarkers
	Encoding_t314924375 * ___utf8EncodingWithoutMarkers_21;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t314924375 * ___unicodeEncoding_22;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::isoLatin1Encoding
	Encoding_t314924375 * ___isoLatin1Encoding_23;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8EncodingUnsafe
	Encoding_t314924375 * ___utf8EncodingUnsafe_24;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t314924375 * ___utf32Encoding_25;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUTF32Encoding
	Encoding_t314924375 * ___bigEndianUTF32Encoding_26;
	// System.Object System.Text.Encoding::lockobj
	RuntimeObject * ___lockobj_27;

public:
	inline static int32_t get_offset_of_i18nAssembly_5() { return static_cast<int32_t>(offsetof(Encoding_t314924375_StaticFields, ___i18nAssembly_5)); }
	inline Assembly_t3233635170 * get_i18nAssembly_5() const { return ___i18nAssembly_5; }
	inline Assembly_t3233635170 ** get_address_of_i18nAssembly_5() { return &___i18nAssembly_5; }
	inline void set_i18nAssembly_5(Assembly_t3233635170 * value)
	{
		___i18nAssembly_5 = value;
		Il2CppCodeGenWriteBarrier((&___i18nAssembly_5), value);
	}

	inline static int32_t get_offset_of_i18nDisabled_6() { return static_cast<int32_t>(offsetof(Encoding_t314924375_StaticFields, ___i18nDisabled_6)); }
	inline bool get_i18nDisabled_6() const { return ___i18nDisabled_6; }
	inline bool* get_address_of_i18nDisabled_6() { return &___i18nDisabled_6; }
	inline void set_i18nDisabled_6(bool value)
	{
		___i18nDisabled_6 = value;
	}

	inline static int32_t get_offset_of_encodings_7() { return static_cast<int32_t>(offsetof(Encoding_t314924375_StaticFields, ___encodings_7)); }
	inline ObjectU5BU5D_t4181569305* get_encodings_7() const { return ___encodings_7; }
	inline ObjectU5BU5D_t4181569305** get_address_of_encodings_7() { return &___encodings_7; }
	inline void set_encodings_7(ObjectU5BU5D_t4181569305* value)
	{
		___encodings_7 = value;
		Il2CppCodeGenWriteBarrier((&___encodings_7), value);
	}

	inline static int32_t get_offset_of_asciiEncoding_16() { return static_cast<int32_t>(offsetof(Encoding_t314924375_StaticFields, ___asciiEncoding_16)); }
	inline Encoding_t314924375 * get_asciiEncoding_16() const { return ___asciiEncoding_16; }
	inline Encoding_t314924375 ** get_address_of_asciiEncoding_16() { return &___asciiEncoding_16; }
	inline void set_asciiEncoding_16(Encoding_t314924375 * value)
	{
		___asciiEncoding_16 = value;
		Il2CppCodeGenWriteBarrier((&___asciiEncoding_16), value);
	}

	inline static int32_t get_offset_of_bigEndianEncoding_17() { return static_cast<int32_t>(offsetof(Encoding_t314924375_StaticFields, ___bigEndianEncoding_17)); }
	inline Encoding_t314924375 * get_bigEndianEncoding_17() const { return ___bigEndianEncoding_17; }
	inline Encoding_t314924375 ** get_address_of_bigEndianEncoding_17() { return &___bigEndianEncoding_17; }
	inline void set_bigEndianEncoding_17(Encoding_t314924375 * value)
	{
		___bigEndianEncoding_17 = value;
		Il2CppCodeGenWriteBarrier((&___bigEndianEncoding_17), value);
	}

	inline static int32_t get_offset_of_defaultEncoding_18() { return static_cast<int32_t>(offsetof(Encoding_t314924375_StaticFields, ___defaultEncoding_18)); }
	inline Encoding_t314924375 * get_defaultEncoding_18() const { return ___defaultEncoding_18; }
	inline Encoding_t314924375 ** get_address_of_defaultEncoding_18() { return &___defaultEncoding_18; }
	inline void set_defaultEncoding_18(Encoding_t314924375 * value)
	{
		___defaultEncoding_18 = value;
		Il2CppCodeGenWriteBarrier((&___defaultEncoding_18), value);
	}

	inline static int32_t get_offset_of_utf7Encoding_19() { return static_cast<int32_t>(offsetof(Encoding_t314924375_StaticFields, ___utf7Encoding_19)); }
	inline Encoding_t314924375 * get_utf7Encoding_19() const { return ___utf7Encoding_19; }
	inline Encoding_t314924375 ** get_address_of_utf7Encoding_19() { return &___utf7Encoding_19; }
	inline void set_utf7Encoding_19(Encoding_t314924375 * value)
	{
		___utf7Encoding_19 = value;
		Il2CppCodeGenWriteBarrier((&___utf7Encoding_19), value);
	}

	inline static int32_t get_offset_of_utf8EncodingWithMarkers_20() { return static_cast<int32_t>(offsetof(Encoding_t314924375_StaticFields, ___utf8EncodingWithMarkers_20)); }
	inline Encoding_t314924375 * get_utf8EncodingWithMarkers_20() const { return ___utf8EncodingWithMarkers_20; }
	inline Encoding_t314924375 ** get_address_of_utf8EncodingWithMarkers_20() { return &___utf8EncodingWithMarkers_20; }
	inline void set_utf8EncodingWithMarkers_20(Encoding_t314924375 * value)
	{
		___utf8EncodingWithMarkers_20 = value;
		Il2CppCodeGenWriteBarrier((&___utf8EncodingWithMarkers_20), value);
	}

	inline static int32_t get_offset_of_utf8EncodingWithoutMarkers_21() { return static_cast<int32_t>(offsetof(Encoding_t314924375_StaticFields, ___utf8EncodingWithoutMarkers_21)); }
	inline Encoding_t314924375 * get_utf8EncodingWithoutMarkers_21() const { return ___utf8EncodingWithoutMarkers_21; }
	inline Encoding_t314924375 ** get_address_of_utf8EncodingWithoutMarkers_21() { return &___utf8EncodingWithoutMarkers_21; }
	inline void set_utf8EncodingWithoutMarkers_21(Encoding_t314924375 * value)
	{
		___utf8EncodingWithoutMarkers_21 = value;
		Il2CppCodeGenWriteBarrier((&___utf8EncodingWithoutMarkers_21), value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_22() { return static_cast<int32_t>(offsetof(Encoding_t314924375_StaticFields, ___unicodeEncoding_22)); }
	inline Encoding_t314924375 * get_unicodeEncoding_22() const { return ___unicodeEncoding_22; }
	inline Encoding_t314924375 ** get_address_of_unicodeEncoding_22() { return &___unicodeEncoding_22; }
	inline void set_unicodeEncoding_22(Encoding_t314924375 * value)
	{
		___unicodeEncoding_22 = value;
		Il2CppCodeGenWriteBarrier((&___unicodeEncoding_22), value);
	}

	inline static int32_t get_offset_of_isoLatin1Encoding_23() { return static_cast<int32_t>(offsetof(Encoding_t314924375_StaticFields, ___isoLatin1Encoding_23)); }
	inline Encoding_t314924375 * get_isoLatin1Encoding_23() const { return ___isoLatin1Encoding_23; }
	inline Encoding_t314924375 ** get_address_of_isoLatin1Encoding_23() { return &___isoLatin1Encoding_23; }
	inline void set_isoLatin1Encoding_23(Encoding_t314924375 * value)
	{
		___isoLatin1Encoding_23 = value;
		Il2CppCodeGenWriteBarrier((&___isoLatin1Encoding_23), value);
	}

	inline static int32_t get_offset_of_utf8EncodingUnsafe_24() { return static_cast<int32_t>(offsetof(Encoding_t314924375_StaticFields, ___utf8EncodingUnsafe_24)); }
	inline Encoding_t314924375 * get_utf8EncodingUnsafe_24() const { return ___utf8EncodingUnsafe_24; }
	inline Encoding_t314924375 ** get_address_of_utf8EncodingUnsafe_24() { return &___utf8EncodingUnsafe_24; }
	inline void set_utf8EncodingUnsafe_24(Encoding_t314924375 * value)
	{
		___utf8EncodingUnsafe_24 = value;
		Il2CppCodeGenWriteBarrier((&___utf8EncodingUnsafe_24), value);
	}

	inline static int32_t get_offset_of_utf32Encoding_25() { return static_cast<int32_t>(offsetof(Encoding_t314924375_StaticFields, ___utf32Encoding_25)); }
	inline Encoding_t314924375 * get_utf32Encoding_25() const { return ___utf32Encoding_25; }
	inline Encoding_t314924375 ** get_address_of_utf32Encoding_25() { return &___utf32Encoding_25; }
	inline void set_utf32Encoding_25(Encoding_t314924375 * value)
	{
		___utf32Encoding_25 = value;
		Il2CppCodeGenWriteBarrier((&___utf32Encoding_25), value);
	}

	inline static int32_t get_offset_of_bigEndianUTF32Encoding_26() { return static_cast<int32_t>(offsetof(Encoding_t314924375_StaticFields, ___bigEndianUTF32Encoding_26)); }
	inline Encoding_t314924375 * get_bigEndianUTF32Encoding_26() const { return ___bigEndianUTF32Encoding_26; }
	inline Encoding_t314924375 ** get_address_of_bigEndianUTF32Encoding_26() { return &___bigEndianUTF32Encoding_26; }
	inline void set_bigEndianUTF32Encoding_26(Encoding_t314924375 * value)
	{
		___bigEndianUTF32Encoding_26 = value;
		Il2CppCodeGenWriteBarrier((&___bigEndianUTF32Encoding_26), value);
	}

	inline static int32_t get_offset_of_lockobj_27() { return static_cast<int32_t>(offsetof(Encoding_t314924375_StaticFields, ___lockobj_27)); }
	inline RuntimeObject * get_lockobj_27() const { return ___lockobj_27; }
	inline RuntimeObject ** get_address_of_lockobj_27() { return &___lockobj_27; }
	inline void set_lockobj_27(RuntimeObject * value)
	{
		___lockobj_27 = value;
		Il2CppCodeGenWriteBarrier((&___lockobj_27), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODING_T314924375_H
#ifndef STRONGNAMEPUBLICKEYBLOB_T936902416_H
#define STRONGNAMEPUBLICKEYBLOB_T936902416_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.StrongNamePublicKeyBlob
struct  StrongNamePublicKeyBlob_t936902416  : public RuntimeObject
{
public:
	// System.Byte[] System.Security.Permissions.StrongNamePublicKeyBlob::pubkey
	ByteU5BU5D_t250263739* ___pubkey_0;

public:
	inline static int32_t get_offset_of_pubkey_0() { return static_cast<int32_t>(offsetof(StrongNamePublicKeyBlob_t936902416, ___pubkey_0)); }
	inline ByteU5BU5D_t250263739* get_pubkey_0() const { return ___pubkey_0; }
	inline ByteU5BU5D_t250263739** get_address_of_pubkey_0() { return &___pubkey_0; }
	inline void set_pubkey_0(ByteU5BU5D_t250263739* value)
	{
		___pubkey_0 = value;
		Il2CppCodeGenWriteBarrier((&___pubkey_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRONGNAMEPUBLICKEYBLOB_T936902416_H
#ifndef APPLICATIONTRUST_T2165093397_H
#define APPLICATIONTRUST_T2165093397_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.ApplicationTrust
struct  ApplicationTrust_t2165093397  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<System.Security.Policy.StrongName> System.Security.Policy.ApplicationTrust::fullTrustAssemblies
	RuntimeObject* ___fullTrustAssemblies_0;

public:
	inline static int32_t get_offset_of_fullTrustAssemblies_0() { return static_cast<int32_t>(offsetof(ApplicationTrust_t2165093397, ___fullTrustAssemblies_0)); }
	inline RuntimeObject* get_fullTrustAssemblies_0() const { return ___fullTrustAssemblies_0; }
	inline RuntimeObject** get_address_of_fullTrustAssemblies_0() { return &___fullTrustAssemblies_0; }
	inline void set_fullTrustAssemblies_0(RuntimeObject* value)
	{
		___fullTrustAssemblies_0 = value;
		Il2CppCodeGenWriteBarrier((&___fullTrustAssemblies_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPLICATIONTRUST_T2165093397_H
#ifndef EVIDENCE_T1703590093_H
#define EVIDENCE_T1703590093_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.Evidence
struct  Evidence_t1703590093  : public RuntimeObject
{
public:
	// System.Boolean System.Security.Policy.Evidence::_locked
	bool ____locked_0;
	// System.Collections.ArrayList System.Security.Policy.Evidence::hostEvidenceList
	ArrayList_t1666010013 * ___hostEvidenceList_1;
	// System.Collections.ArrayList System.Security.Policy.Evidence::assemblyEvidenceList
	ArrayList_t1666010013 * ___assemblyEvidenceList_2;
	// System.Int32 System.Security.Policy.Evidence::_hashCode
	int32_t ____hashCode_3;

public:
	inline static int32_t get_offset_of__locked_0() { return static_cast<int32_t>(offsetof(Evidence_t1703590093, ____locked_0)); }
	inline bool get__locked_0() const { return ____locked_0; }
	inline bool* get_address_of__locked_0() { return &____locked_0; }
	inline void set__locked_0(bool value)
	{
		____locked_0 = value;
	}

	inline static int32_t get_offset_of_hostEvidenceList_1() { return static_cast<int32_t>(offsetof(Evidence_t1703590093, ___hostEvidenceList_1)); }
	inline ArrayList_t1666010013 * get_hostEvidenceList_1() const { return ___hostEvidenceList_1; }
	inline ArrayList_t1666010013 ** get_address_of_hostEvidenceList_1() { return &___hostEvidenceList_1; }
	inline void set_hostEvidenceList_1(ArrayList_t1666010013 * value)
	{
		___hostEvidenceList_1 = value;
		Il2CppCodeGenWriteBarrier((&___hostEvidenceList_1), value);
	}

	inline static int32_t get_offset_of_assemblyEvidenceList_2() { return static_cast<int32_t>(offsetof(Evidence_t1703590093, ___assemblyEvidenceList_2)); }
	inline ArrayList_t1666010013 * get_assemblyEvidenceList_2() const { return ___assemblyEvidenceList_2; }
	inline ArrayList_t1666010013 ** get_address_of_assemblyEvidenceList_2() { return &___assemblyEvidenceList_2; }
	inline void set_assemblyEvidenceList_2(ArrayList_t1666010013 * value)
	{
		___assemblyEvidenceList_2 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyEvidenceList_2), value);
	}

	inline static int32_t get_offset_of__hashCode_3() { return static_cast<int32_t>(offsetof(Evidence_t1703590093, ____hashCode_3)); }
	inline int32_t get__hashCode_3() const { return ____hashCode_3; }
	inline int32_t* get_address_of__hashCode_3() { return &____hashCode_3; }
	inline void set__hashCode_3(int32_t value)
	{
		____hashCode_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVIDENCE_T1703590093_H
#ifndef EVIDENCEENUMERATOR_T2479891710_H
#define EVIDENCEENUMERATOR_T2479891710_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.Evidence/EvidenceEnumerator
struct  EvidenceEnumerator_t2479891710  : public RuntimeObject
{
public:
	// System.Collections.IEnumerator System.Security.Policy.Evidence/EvidenceEnumerator::currentEnum
	RuntimeObject* ___currentEnum_0;
	// System.Collections.IEnumerator System.Security.Policy.Evidence/EvidenceEnumerator::hostEnum
	RuntimeObject* ___hostEnum_1;
	// System.Collections.IEnumerator System.Security.Policy.Evidence/EvidenceEnumerator::assemblyEnum
	RuntimeObject* ___assemblyEnum_2;

public:
	inline static int32_t get_offset_of_currentEnum_0() { return static_cast<int32_t>(offsetof(EvidenceEnumerator_t2479891710, ___currentEnum_0)); }
	inline RuntimeObject* get_currentEnum_0() const { return ___currentEnum_0; }
	inline RuntimeObject** get_address_of_currentEnum_0() { return &___currentEnum_0; }
	inline void set_currentEnum_0(RuntimeObject* value)
	{
		___currentEnum_0 = value;
		Il2CppCodeGenWriteBarrier((&___currentEnum_0), value);
	}

	inline static int32_t get_offset_of_hostEnum_1() { return static_cast<int32_t>(offsetof(EvidenceEnumerator_t2479891710, ___hostEnum_1)); }
	inline RuntimeObject* get_hostEnum_1() const { return ___hostEnum_1; }
	inline RuntimeObject** get_address_of_hostEnum_1() { return &___hostEnum_1; }
	inline void set_hostEnum_1(RuntimeObject* value)
	{
		___hostEnum_1 = value;
		Il2CppCodeGenWriteBarrier((&___hostEnum_1), value);
	}

	inline static int32_t get_offset_of_assemblyEnum_2() { return static_cast<int32_t>(offsetof(EvidenceEnumerator_t2479891710, ___assemblyEnum_2)); }
	inline RuntimeObject* get_assemblyEnum_2() const { return ___assemblyEnum_2; }
	inline RuntimeObject** get_address_of_assemblyEnum_2() { return &___assemblyEnum_2; }
	inline void set_assemblyEnum_2(RuntimeObject* value)
	{
		___assemblyEnum_2 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyEnum_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVIDENCEENUMERATOR_T2479891710_H
#ifndef HASH_T2152572517_H
#define HASH_T2152572517_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.Hash
struct  Hash_t2152572517  : public RuntimeObject
{
public:
	// System.Reflection.Assembly System.Security.Policy.Hash::assembly
	Assembly_t3233635170 * ___assembly_0;
	// System.Byte[] System.Security.Policy.Hash::data
	ByteU5BU5D_t250263739* ___data_1;

public:
	inline static int32_t get_offset_of_assembly_0() { return static_cast<int32_t>(offsetof(Hash_t2152572517, ___assembly_0)); }
	inline Assembly_t3233635170 * get_assembly_0() const { return ___assembly_0; }
	inline Assembly_t3233635170 ** get_address_of_assembly_0() { return &___assembly_0; }
	inline void set_assembly_0(Assembly_t3233635170 * value)
	{
		___assembly_0 = value;
		Il2CppCodeGenWriteBarrier((&___assembly_0), value);
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(Hash_t2152572517, ___data_1)); }
	inline ByteU5BU5D_t250263739* get_data_1() const { return ___data_1; }
	inline ByteU5BU5D_t250263739** get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(ByteU5BU5D_t250263739* value)
	{
		___data_1 = value;
		Il2CppCodeGenWriteBarrier((&___data_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HASH_T2152572517_H
#ifndef CODEACCESSPERMISSION_T4144283223_H
#define CODEACCESSPERMISSION_T4144283223_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.CodeAccessPermission
struct  CodeAccessPermission_t4144283223  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CODEACCESSPERMISSION_T4144283223_H
#ifndef COMPRESSEDSTACK_T4197464022_H
#define COMPRESSEDSTACK_T4197464022_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.CompressedStack
struct  CompressedStack_t4197464022  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Threading.CompressedStack::_list
	ArrayList_t1666010013 * ____list_0;

public:
	inline static int32_t get_offset_of__list_0() { return static_cast<int32_t>(offsetof(CompressedStack_t4197464022, ____list_0)); }
	inline ArrayList_t1666010013 * get__list_0() const { return ____list_0; }
	inline ArrayList_t1666010013 ** get_address_of__list_0() { return &____list_0; }
	inline void set__list_0(ArrayList_t1666010013 * value)
	{
		____list_0 = value;
		Il2CppCodeGenWriteBarrier((&____list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPRESSEDSTACK_T4197464022_H
#ifndef SHACONSTANTS_T926846232_H
#define SHACONSTANTS_T926846232_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHAConstants
struct  SHAConstants_t926846232  : public RuntimeObject
{
public:

public:
};

struct SHAConstants_t926846232_StaticFields
{
public:
	// System.UInt32[] System.Security.Cryptography.SHAConstants::K1
	UInt32U5BU5D_t819860844* ___K1_0;
	// System.UInt64[] System.Security.Cryptography.SHAConstants::K2
	UInt64U5BU5D_t2319310096* ___K2_1;

public:
	inline static int32_t get_offset_of_K1_0() { return static_cast<int32_t>(offsetof(SHAConstants_t926846232_StaticFields, ___K1_0)); }
	inline UInt32U5BU5D_t819860844* get_K1_0() const { return ___K1_0; }
	inline UInt32U5BU5D_t819860844** get_address_of_K1_0() { return &___K1_0; }
	inline void set_K1_0(UInt32U5BU5D_t819860844* value)
	{
		___K1_0 = value;
		Il2CppCodeGenWriteBarrier((&___K1_0), value);
	}

	inline static int32_t get_offset_of_K2_1() { return static_cast<int32_t>(offsetof(SHAConstants_t926846232_StaticFields, ___K2_1)); }
	inline UInt64U5BU5D_t2319310096* get_K2_1() const { return ___K2_1; }
	inline UInt64U5BU5D_t2319310096** get_address_of_K2_1() { return &___K2_1; }
	inline void set_K2_1(UInt64U5BU5D_t2319310096* value)
	{
		___K2_1 = value;
		Il2CppCodeGenWriteBarrier((&___K2_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHACONSTANTS_T926846232_H
#ifndef ASYMMETRICKEYEXCHANGEFORMATTER_T2750091873_H
#define ASYMMETRICKEYEXCHANGEFORMATTER_T2750091873_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsymmetricKeyExchangeFormatter
struct  AsymmetricKeyExchangeFormatter_t2750091873  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYMMETRICKEYEXCHANGEFORMATTER_T2750091873_H
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
#ifndef ASYMMETRICALGORITHM_T889780810_H
#define ASYMMETRICALGORITHM_T889780810_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsymmetricAlgorithm
struct  AsymmetricAlgorithm_t889780810  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.AsymmetricAlgorithm::KeySizeValue
	int32_t ___KeySizeValue_0;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.AsymmetricAlgorithm::LegalKeySizesValue
	KeySizesU5BU5D_t665079470* ___LegalKeySizesValue_1;

public:
	inline static int32_t get_offset_of_KeySizeValue_0() { return static_cast<int32_t>(offsetof(AsymmetricAlgorithm_t889780810, ___KeySizeValue_0)); }
	inline int32_t get_KeySizeValue_0() const { return ___KeySizeValue_0; }
	inline int32_t* get_address_of_KeySizeValue_0() { return &___KeySizeValue_0; }
	inline void set_KeySizeValue_0(int32_t value)
	{
		___KeySizeValue_0 = value;
	}

	inline static int32_t get_offset_of_LegalKeySizesValue_1() { return static_cast<int32_t>(offsetof(AsymmetricAlgorithm_t889780810, ___LegalKeySizesValue_1)); }
	inline KeySizesU5BU5D_t665079470* get_LegalKeySizesValue_1() const { return ___LegalKeySizesValue_1; }
	inline KeySizesU5BU5D_t665079470** get_address_of_LegalKeySizesValue_1() { return &___LegalKeySizesValue_1; }
	inline void set_LegalKeySizesValue_1(KeySizesU5BU5D_t665079470* value)
	{
		___LegalKeySizesValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___LegalKeySizesValue_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYMMETRICALGORITHM_T889780810_H
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
#ifndef RANDOMNUMBERGENERATOR_T3399161153_H
#define RANDOMNUMBERGENERATOR_T3399161153_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RandomNumberGenerator
struct  RandomNumberGenerator_t3399161153  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANDOMNUMBERGENERATOR_T3399161153_H
#ifndef SECURITYMANAGER_T810594993_H
#define SECURITYMANAGER_T810594993_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecurityManager
struct  SecurityManager_t810594993  : public RuntimeObject
{
public:

public:
};

struct SecurityManager_t810594993_StaticFields
{
public:
	// System.Object System.Security.SecurityManager::_lockObject
	RuntimeObject * ____lockObject_0;
	// System.Collections.Hashtable System.Security.SecurityManager::_declsecCache
	Hashtable_t4275196815 * ____declsecCache_1;
	// System.Security.Permissions.SecurityPermission System.Security.SecurityManager::_execution
	SecurityPermission_t2282903104 * ____execution_2;

public:
	inline static int32_t get_offset_of__lockObject_0() { return static_cast<int32_t>(offsetof(SecurityManager_t810594993_StaticFields, ____lockObject_0)); }
	inline RuntimeObject * get__lockObject_0() const { return ____lockObject_0; }
	inline RuntimeObject ** get_address_of__lockObject_0() { return &____lockObject_0; }
	inline void set__lockObject_0(RuntimeObject * value)
	{
		____lockObject_0 = value;
		Il2CppCodeGenWriteBarrier((&____lockObject_0), value);
	}

	inline static int32_t get_offset_of__declsecCache_1() { return static_cast<int32_t>(offsetof(SecurityManager_t810594993_StaticFields, ____declsecCache_1)); }
	inline Hashtable_t4275196815 * get__declsecCache_1() const { return ____declsecCache_1; }
	inline Hashtable_t4275196815 ** get_address_of__declsecCache_1() { return &____declsecCache_1; }
	inline void set__declsecCache_1(Hashtable_t4275196815 * value)
	{
		____declsecCache_1 = value;
		Il2CppCodeGenWriteBarrier((&____declsecCache_1), value);
	}

	inline static int32_t get_offset_of__execution_2() { return static_cast<int32_t>(offsetof(SecurityManager_t810594993_StaticFields, ____execution_2)); }
	inline SecurityPermission_t2282903104 * get__execution_2() const { return ____execution_2; }
	inline SecurityPermission_t2282903104 ** get_address_of__execution_2() { return &____execution_2; }
	inline void set__execution_2(SecurityPermission_t2282903104 * value)
	{
		____execution_2 = value;
		Il2CppCodeGenWriteBarrier((&____execution_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYMANAGER_T810594993_H
#ifndef DECODERFALLBACK_T3871842754_H
#define DECODERFALLBACK_T3871842754_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.DecoderFallback
struct  DecoderFallback_t3871842754  : public RuntimeObject
{
public:

public:
};

struct DecoderFallback_t3871842754_StaticFields
{
public:
	// System.Text.DecoderFallback System.Text.DecoderFallback::exception_fallback
	DecoderFallback_t3871842754 * ___exception_fallback_0;
	// System.Text.DecoderFallback System.Text.DecoderFallback::replacement_fallback
	DecoderFallback_t3871842754 * ___replacement_fallback_1;
	// System.Text.DecoderFallback System.Text.DecoderFallback::standard_safe_fallback
	DecoderFallback_t3871842754 * ___standard_safe_fallback_2;

public:
	inline static int32_t get_offset_of_exception_fallback_0() { return static_cast<int32_t>(offsetof(DecoderFallback_t3871842754_StaticFields, ___exception_fallback_0)); }
	inline DecoderFallback_t3871842754 * get_exception_fallback_0() const { return ___exception_fallback_0; }
	inline DecoderFallback_t3871842754 ** get_address_of_exception_fallback_0() { return &___exception_fallback_0; }
	inline void set_exception_fallback_0(DecoderFallback_t3871842754 * value)
	{
		___exception_fallback_0 = value;
		Il2CppCodeGenWriteBarrier((&___exception_fallback_0), value);
	}

	inline static int32_t get_offset_of_replacement_fallback_1() { return static_cast<int32_t>(offsetof(DecoderFallback_t3871842754_StaticFields, ___replacement_fallback_1)); }
	inline DecoderFallback_t3871842754 * get_replacement_fallback_1() const { return ___replacement_fallback_1; }
	inline DecoderFallback_t3871842754 ** get_address_of_replacement_fallback_1() { return &___replacement_fallback_1; }
	inline void set_replacement_fallback_1(DecoderFallback_t3871842754 * value)
	{
		___replacement_fallback_1 = value;
		Il2CppCodeGenWriteBarrier((&___replacement_fallback_1), value);
	}

	inline static int32_t get_offset_of_standard_safe_fallback_2() { return static_cast<int32_t>(offsetof(DecoderFallback_t3871842754_StaticFields, ___standard_safe_fallback_2)); }
	inline DecoderFallback_t3871842754 * get_standard_safe_fallback_2() const { return ___standard_safe_fallback_2; }
	inline DecoderFallback_t3871842754 ** get_address_of_standard_safe_fallback_2() { return &___standard_safe_fallback_2; }
	inline void set_standard_safe_fallback_2(DecoderFallback_t3871842754 * value)
	{
		___standard_safe_fallback_2 = value;
		Il2CppCodeGenWriteBarrier((&___standard_safe_fallback_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODERFALLBACK_T3871842754_H
#ifndef RIJNDAELMANAGEDTRANSFORM_T1451861562_H
#define RIJNDAELMANAGEDTRANSFORM_T1451861562_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RijndaelManagedTransform
struct  RijndaelManagedTransform_t1451861562  : public RuntimeObject
{
public:
	// System.Security.Cryptography.RijndaelTransform System.Security.Cryptography.RijndaelManagedTransform::_st
	RijndaelTransform_t2775089468 * ____st_0;
	// System.Int32 System.Security.Cryptography.RijndaelManagedTransform::_bs
	int32_t ____bs_1;

public:
	inline static int32_t get_offset_of__st_0() { return static_cast<int32_t>(offsetof(RijndaelManagedTransform_t1451861562, ____st_0)); }
	inline RijndaelTransform_t2775089468 * get__st_0() const { return ____st_0; }
	inline RijndaelTransform_t2775089468 ** get_address_of__st_0() { return &____st_0; }
	inline void set__st_0(RijndaelTransform_t2775089468 * value)
	{
		____st_0 = value;
		Il2CppCodeGenWriteBarrier((&____st_0), value);
	}

	inline static int32_t get_offset_of__bs_1() { return static_cast<int32_t>(offsetof(RijndaelManagedTransform_t1451861562, ____bs_1)); }
	inline int32_t get__bs_1() const { return ____bs_1; }
	inline int32_t* get_address_of__bs_1() { return &____bs_1; }
	inline void set__bs_1(int32_t value)
	{
		____bs_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIJNDAELMANAGEDTRANSFORM_T1451861562_H
#ifndef DECODERFALLBACKBUFFER_T2111995526_H
#define DECODERFALLBACKBUFFER_T2111995526_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.DecoderFallbackBuffer
struct  DecoderFallbackBuffer_t2111995526  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODERFALLBACKBUFFER_T2111995526_H
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
#ifndef SYMMETRICTRANSFORM_T2127398341_H
#define SYMMETRICTRANSFORM_T2127398341_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.SymmetricTransform
struct  SymmetricTransform_t2127398341  : public RuntimeObject
{
public:
	// System.Security.Cryptography.SymmetricAlgorithm Mono.Security.Cryptography.SymmetricTransform::algo
	SymmetricAlgorithm_t2359443873 * ___algo_0;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::encrypt
	bool ___encrypt_1;
	// System.Int32 Mono.Security.Cryptography.SymmetricTransform::BlockSizeByte
	int32_t ___BlockSizeByte_2;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::temp
	ByteU5BU5D_t250263739* ___temp_3;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::temp2
	ByteU5BU5D_t250263739* ___temp2_4;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::workBuff
	ByteU5BU5D_t250263739* ___workBuff_5;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::workout
	ByteU5BU5D_t250263739* ___workout_6;
	// System.Int32 Mono.Security.Cryptography.SymmetricTransform::FeedBackByte
	int32_t ___FeedBackByte_7;
	// System.Int32 Mono.Security.Cryptography.SymmetricTransform::FeedBackIter
	int32_t ___FeedBackIter_8;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::m_disposed
	bool ___m_disposed_9;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::lastBlock
	bool ___lastBlock_10;
	// System.Security.Cryptography.RandomNumberGenerator Mono.Security.Cryptography.SymmetricTransform::_rng
	RandomNumberGenerator_t3399161153 * ____rng_11;

public:
	inline static int32_t get_offset_of_algo_0() { return static_cast<int32_t>(offsetof(SymmetricTransform_t2127398341, ___algo_0)); }
	inline SymmetricAlgorithm_t2359443873 * get_algo_0() const { return ___algo_0; }
	inline SymmetricAlgorithm_t2359443873 ** get_address_of_algo_0() { return &___algo_0; }
	inline void set_algo_0(SymmetricAlgorithm_t2359443873 * value)
	{
		___algo_0 = value;
		Il2CppCodeGenWriteBarrier((&___algo_0), value);
	}

	inline static int32_t get_offset_of_encrypt_1() { return static_cast<int32_t>(offsetof(SymmetricTransform_t2127398341, ___encrypt_1)); }
	inline bool get_encrypt_1() const { return ___encrypt_1; }
	inline bool* get_address_of_encrypt_1() { return &___encrypt_1; }
	inline void set_encrypt_1(bool value)
	{
		___encrypt_1 = value;
	}

	inline static int32_t get_offset_of_BlockSizeByte_2() { return static_cast<int32_t>(offsetof(SymmetricTransform_t2127398341, ___BlockSizeByte_2)); }
	inline int32_t get_BlockSizeByte_2() const { return ___BlockSizeByte_2; }
	inline int32_t* get_address_of_BlockSizeByte_2() { return &___BlockSizeByte_2; }
	inline void set_BlockSizeByte_2(int32_t value)
	{
		___BlockSizeByte_2 = value;
	}

	inline static int32_t get_offset_of_temp_3() { return static_cast<int32_t>(offsetof(SymmetricTransform_t2127398341, ___temp_3)); }
	inline ByteU5BU5D_t250263739* get_temp_3() const { return ___temp_3; }
	inline ByteU5BU5D_t250263739** get_address_of_temp_3() { return &___temp_3; }
	inline void set_temp_3(ByteU5BU5D_t250263739* value)
	{
		___temp_3 = value;
		Il2CppCodeGenWriteBarrier((&___temp_3), value);
	}

	inline static int32_t get_offset_of_temp2_4() { return static_cast<int32_t>(offsetof(SymmetricTransform_t2127398341, ___temp2_4)); }
	inline ByteU5BU5D_t250263739* get_temp2_4() const { return ___temp2_4; }
	inline ByteU5BU5D_t250263739** get_address_of_temp2_4() { return &___temp2_4; }
	inline void set_temp2_4(ByteU5BU5D_t250263739* value)
	{
		___temp2_4 = value;
		Il2CppCodeGenWriteBarrier((&___temp2_4), value);
	}

	inline static int32_t get_offset_of_workBuff_5() { return static_cast<int32_t>(offsetof(SymmetricTransform_t2127398341, ___workBuff_5)); }
	inline ByteU5BU5D_t250263739* get_workBuff_5() const { return ___workBuff_5; }
	inline ByteU5BU5D_t250263739** get_address_of_workBuff_5() { return &___workBuff_5; }
	inline void set_workBuff_5(ByteU5BU5D_t250263739* value)
	{
		___workBuff_5 = value;
		Il2CppCodeGenWriteBarrier((&___workBuff_5), value);
	}

	inline static int32_t get_offset_of_workout_6() { return static_cast<int32_t>(offsetof(SymmetricTransform_t2127398341, ___workout_6)); }
	inline ByteU5BU5D_t250263739* get_workout_6() const { return ___workout_6; }
	inline ByteU5BU5D_t250263739** get_address_of_workout_6() { return &___workout_6; }
	inline void set_workout_6(ByteU5BU5D_t250263739* value)
	{
		___workout_6 = value;
		Il2CppCodeGenWriteBarrier((&___workout_6), value);
	}

	inline static int32_t get_offset_of_FeedBackByte_7() { return static_cast<int32_t>(offsetof(SymmetricTransform_t2127398341, ___FeedBackByte_7)); }
	inline int32_t get_FeedBackByte_7() const { return ___FeedBackByte_7; }
	inline int32_t* get_address_of_FeedBackByte_7() { return &___FeedBackByte_7; }
	inline void set_FeedBackByte_7(int32_t value)
	{
		___FeedBackByte_7 = value;
	}

	inline static int32_t get_offset_of_FeedBackIter_8() { return static_cast<int32_t>(offsetof(SymmetricTransform_t2127398341, ___FeedBackIter_8)); }
	inline int32_t get_FeedBackIter_8() const { return ___FeedBackIter_8; }
	inline int32_t* get_address_of_FeedBackIter_8() { return &___FeedBackIter_8; }
	inline void set_FeedBackIter_8(int32_t value)
	{
		___FeedBackIter_8 = value;
	}

	inline static int32_t get_offset_of_m_disposed_9() { return static_cast<int32_t>(offsetof(SymmetricTransform_t2127398341, ___m_disposed_9)); }
	inline bool get_m_disposed_9() const { return ___m_disposed_9; }
	inline bool* get_address_of_m_disposed_9() { return &___m_disposed_9; }
	inline void set_m_disposed_9(bool value)
	{
		___m_disposed_9 = value;
	}

	inline static int32_t get_offset_of_lastBlock_10() { return static_cast<int32_t>(offsetof(SymmetricTransform_t2127398341, ___lastBlock_10)); }
	inline bool get_lastBlock_10() const { return ___lastBlock_10; }
	inline bool* get_address_of_lastBlock_10() { return &___lastBlock_10; }
	inline void set_lastBlock_10(bool value)
	{
		___lastBlock_10 = value;
	}

	inline static int32_t get_offset_of__rng_11() { return static_cast<int32_t>(offsetof(SymmetricTransform_t2127398341, ____rng_11)); }
	inline RandomNumberGenerator_t3399161153 * get__rng_11() const { return ____rng_11; }
	inline RandomNumberGenerator_t3399161153 ** get_address_of__rng_11() { return &____rng_11; }
	inline void set__rng_11(RandomNumberGenerator_t3399161153 * value)
	{
		____rng_11 = value;
		Il2CppCodeGenWriteBarrier((&____rng_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYMMETRICTRANSFORM_T2127398341_H
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
#ifndef ASYMMETRICSIGNATUREFORMATTER_T2269944817_H
#define ASYMMETRICSIGNATUREFORMATTER_T2269944817_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsymmetricSignatureFormatter
struct  AsymmetricSignatureFormatter_t2269944817  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYMMETRICSIGNATUREFORMATTER_T2269944817_H
#ifndef ASYMMETRICSIGNATUREDEFORMATTER_T4049447603_H
#define ASYMMETRICSIGNATUREDEFORMATTER_T4049447603_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsymmetricSignatureDeformatter
struct  AsymmetricSignatureDeformatter_t4049447603  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYMMETRICSIGNATUREDEFORMATTER_T4049447603_H
#ifndef SHA1INTERNAL_T3901366001_H
#define SHA1INTERNAL_T3901366001_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA1Internal
struct  SHA1Internal_t3901366001  : public RuntimeObject
{
public:
	// System.UInt32[] System.Security.Cryptography.SHA1Internal::_H
	UInt32U5BU5D_t819860844* ____H_0;
	// System.UInt64 System.Security.Cryptography.SHA1Internal::count
	uint64_t ___count_1;
	// System.Byte[] System.Security.Cryptography.SHA1Internal::_ProcessingBuffer
	ByteU5BU5D_t250263739* ____ProcessingBuffer_2;
	// System.Int32 System.Security.Cryptography.SHA1Internal::_ProcessingBufferCount
	int32_t ____ProcessingBufferCount_3;
	// System.UInt32[] System.Security.Cryptography.SHA1Internal::buff
	UInt32U5BU5D_t819860844* ___buff_4;

public:
	inline static int32_t get_offset_of__H_0() { return static_cast<int32_t>(offsetof(SHA1Internal_t3901366001, ____H_0)); }
	inline UInt32U5BU5D_t819860844* get__H_0() const { return ____H_0; }
	inline UInt32U5BU5D_t819860844** get_address_of__H_0() { return &____H_0; }
	inline void set__H_0(UInt32U5BU5D_t819860844* value)
	{
		____H_0 = value;
		Il2CppCodeGenWriteBarrier((&____H_0), value);
	}

	inline static int32_t get_offset_of_count_1() { return static_cast<int32_t>(offsetof(SHA1Internal_t3901366001, ___count_1)); }
	inline uint64_t get_count_1() const { return ___count_1; }
	inline uint64_t* get_address_of_count_1() { return &___count_1; }
	inline void set_count_1(uint64_t value)
	{
		___count_1 = value;
	}

	inline static int32_t get_offset_of__ProcessingBuffer_2() { return static_cast<int32_t>(offsetof(SHA1Internal_t3901366001, ____ProcessingBuffer_2)); }
	inline ByteU5BU5D_t250263739* get__ProcessingBuffer_2() const { return ____ProcessingBuffer_2; }
	inline ByteU5BU5D_t250263739** get_address_of__ProcessingBuffer_2() { return &____ProcessingBuffer_2; }
	inline void set__ProcessingBuffer_2(ByteU5BU5D_t250263739* value)
	{
		____ProcessingBuffer_2 = value;
		Il2CppCodeGenWriteBarrier((&____ProcessingBuffer_2), value);
	}

	inline static int32_t get_offset_of__ProcessingBufferCount_3() { return static_cast<int32_t>(offsetof(SHA1Internal_t3901366001, ____ProcessingBufferCount_3)); }
	inline int32_t get__ProcessingBufferCount_3() const { return ____ProcessingBufferCount_3; }
	inline int32_t* get_address_of__ProcessingBufferCount_3() { return &____ProcessingBufferCount_3; }
	inline void set__ProcessingBufferCount_3(int32_t value)
	{
		____ProcessingBufferCount_3 = value;
	}

	inline static int32_t get_offset_of_buff_4() { return static_cast<int32_t>(offsetof(SHA1Internal_t3901366001, ___buff_4)); }
	inline UInt32U5BU5D_t819860844* get_buff_4() const { return ___buff_4; }
	inline UInt32U5BU5D_t819860844** get_address_of_buff_4() { return &___buff_4; }
	inline void set_buff_4(UInt32U5BU5D_t819860844* value)
	{
		___buff_4 = value;
		Il2CppCodeGenWriteBarrier((&___buff_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA1INTERNAL_T3901366001_H
#ifndef ENCODERFALLBACKBUFFER_T3328225182_H
#define ENCODERFALLBACKBUFFER_T3328225182_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.EncoderFallbackBuffer
struct  EncoderFallbackBuffer_t3328225182  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODERFALLBACKBUFFER_T3328225182_H
#ifndef ENCODEREXCEPTIONFALLBACKBUFFER_T2405517468_H
#define ENCODEREXCEPTIONFALLBACKBUFFER_T2405517468_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.EncoderExceptionFallbackBuffer
struct  EncoderExceptionFallbackBuffer_t2405517468  : public EncoderFallbackBuffer_t3328225182
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODEREXCEPTIONFALLBACKBUFFER_T2405517468_H
#ifndef ENCODEREXCEPTIONFALLBACK_T297178561_H
#define ENCODEREXCEPTIONFALLBACK_T297178561_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.EncoderExceptionFallback
struct  EncoderExceptionFallback_t297178561  : public EncoderFallback_t2317521021
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODEREXCEPTIONFALLBACK_T297178561_H
#ifndef DECODERREPLACEMENTFALLBACKBUFFER_T310394184_H
#define DECODERREPLACEMENTFALLBACKBUFFER_T310394184_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.DecoderReplacementFallbackBuffer
struct  DecoderReplacementFallbackBuffer_t310394184  : public DecoderFallbackBuffer_t2111995526
{
public:
	// System.Boolean System.Text.DecoderReplacementFallbackBuffer::fallback_assigned
	bool ___fallback_assigned_0;
	// System.Int32 System.Text.DecoderReplacementFallbackBuffer::current
	int32_t ___current_1;
	// System.String System.Text.DecoderReplacementFallbackBuffer::replacement
	String_t* ___replacement_2;

public:
	inline static int32_t get_offset_of_fallback_assigned_0() { return static_cast<int32_t>(offsetof(DecoderReplacementFallbackBuffer_t310394184, ___fallback_assigned_0)); }
	inline bool get_fallback_assigned_0() const { return ___fallback_assigned_0; }
	inline bool* get_address_of_fallback_assigned_0() { return &___fallback_assigned_0; }
	inline void set_fallback_assigned_0(bool value)
	{
		___fallback_assigned_0 = value;
	}

	inline static int32_t get_offset_of_current_1() { return static_cast<int32_t>(offsetof(DecoderReplacementFallbackBuffer_t310394184, ___current_1)); }
	inline int32_t get_current_1() const { return ___current_1; }
	inline int32_t* get_address_of_current_1() { return &___current_1; }
	inline void set_current_1(int32_t value)
	{
		___current_1 = value;
	}

	inline static int32_t get_offset_of_replacement_2() { return static_cast<int32_t>(offsetof(DecoderReplacementFallbackBuffer_t310394184, ___replacement_2)); }
	inline String_t* get_replacement_2() const { return ___replacement_2; }
	inline String_t** get_address_of_replacement_2() { return &___replacement_2; }
	inline void set_replacement_2(String_t* value)
	{
		___replacement_2 = value;
		Il2CppCodeGenWriteBarrier((&___replacement_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODERREPLACEMENTFALLBACKBUFFER_T310394184_H
#ifndef DECODEREXCEPTIONFALLBACKBUFFER_T3339059755_H
#define DECODEREXCEPTIONFALLBACKBUFFER_T3339059755_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.DecoderExceptionFallbackBuffer
struct  DecoderExceptionFallbackBuffer_t3339059755  : public DecoderFallbackBuffer_t2111995526
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODEREXCEPTIONFALLBACKBUFFER_T3339059755_H
#ifndef DECODEREXCEPTIONFALLBACK_T3259366613_H
#define DECODEREXCEPTIONFALLBACK_T3259366613_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.DecoderExceptionFallback
struct  DecoderExceptionFallback_t3259366613  : public DecoderFallback_t3871842754
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODEREXCEPTIONFALLBACK_T3259366613_H
#ifndef DECODERREPLACEMENTFALLBACK_T2062361839_H
#define DECODERREPLACEMENTFALLBACK_T2062361839_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.DecoderReplacementFallback
struct  DecoderReplacementFallback_t2062361839  : public DecoderFallback_t3871842754
{
public:
	// System.String System.Text.DecoderReplacementFallback::replacement
	String_t* ___replacement_3;

public:
	inline static int32_t get_offset_of_replacement_3() { return static_cast<int32_t>(offsetof(DecoderReplacementFallback_t2062361839, ___replacement_3)); }
	inline String_t* get_replacement_3() const { return ___replacement_3; }
	inline String_t** get_address_of_replacement_3() { return &___replacement_3; }
	inline void set_replacement_3(String_t* value)
	{
		___replacement_3 = value;
		Il2CppCodeGenWriteBarrier((&___replacement_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODERREPLACEMENTFALLBACK_T2062361839_H
#ifndef UTF32DECODER_T492983515_H
#define UTF32DECODER_T492983515_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UTF32Encoding/UTF32Decoder
struct  UTF32Decoder_t492983515  : public Decoder_t2580404822
{
public:
	// System.Boolean System.Text.UTF32Encoding/UTF32Decoder::bigEndian
	bool ___bigEndian_2;
	// System.Int32 System.Text.UTF32Encoding/UTF32Decoder::leftOverByte
	int32_t ___leftOverByte_3;
	// System.Int32 System.Text.UTF32Encoding/UTF32Decoder::leftOverLength
	int32_t ___leftOverLength_4;

public:
	inline static int32_t get_offset_of_bigEndian_2() { return static_cast<int32_t>(offsetof(UTF32Decoder_t492983515, ___bigEndian_2)); }
	inline bool get_bigEndian_2() const { return ___bigEndian_2; }
	inline bool* get_address_of_bigEndian_2() { return &___bigEndian_2; }
	inline void set_bigEndian_2(bool value)
	{
		___bigEndian_2 = value;
	}

	inline static int32_t get_offset_of_leftOverByte_3() { return static_cast<int32_t>(offsetof(UTF32Decoder_t492983515, ___leftOverByte_3)); }
	inline int32_t get_leftOverByte_3() const { return ___leftOverByte_3; }
	inline int32_t* get_address_of_leftOverByte_3() { return &___leftOverByte_3; }
	inline void set_leftOverByte_3(int32_t value)
	{
		___leftOverByte_3 = value;
	}

	inline static int32_t get_offset_of_leftOverLength_4() { return static_cast<int32_t>(offsetof(UTF32Decoder_t492983515, ___leftOverLength_4)); }
	inline int32_t get_leftOverLength_4() const { return ___leftOverLength_4; }
	inline int32_t* get_address_of_leftOverLength_4() { return &___leftOverLength_4; }
	inline void set_leftOverLength_4(int32_t value)
	{
		___leftOverLength_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UTF32DECODER_T492983515_H
#ifndef ENCODERREPLACEMENTFALLBACKBUFFER_T4159324089_H
#define ENCODERREPLACEMENTFALLBACKBUFFER_T4159324089_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.EncoderReplacementFallbackBuffer
struct  EncoderReplacementFallbackBuffer_t4159324089  : public EncoderFallbackBuffer_t3328225182
{
public:
	// System.String System.Text.EncoderReplacementFallbackBuffer::replacement
	String_t* ___replacement_0;
	// System.Int32 System.Text.EncoderReplacementFallbackBuffer::current
	int32_t ___current_1;
	// System.Boolean System.Text.EncoderReplacementFallbackBuffer::fallback_assigned
	bool ___fallback_assigned_2;

public:
	inline static int32_t get_offset_of_replacement_0() { return static_cast<int32_t>(offsetof(EncoderReplacementFallbackBuffer_t4159324089, ___replacement_0)); }
	inline String_t* get_replacement_0() const { return ___replacement_0; }
	inline String_t** get_address_of_replacement_0() { return &___replacement_0; }
	inline void set_replacement_0(String_t* value)
	{
		___replacement_0 = value;
		Il2CppCodeGenWriteBarrier((&___replacement_0), value);
	}

	inline static int32_t get_offset_of_current_1() { return static_cast<int32_t>(offsetof(EncoderReplacementFallbackBuffer_t4159324089, ___current_1)); }
	inline int32_t get_current_1() const { return ___current_1; }
	inline int32_t* get_address_of_current_1() { return &___current_1; }
	inline void set_current_1(int32_t value)
	{
		___current_1 = value;
	}

	inline static int32_t get_offset_of_fallback_assigned_2() { return static_cast<int32_t>(offsetof(EncoderReplacementFallbackBuffer_t4159324089, ___fallback_assigned_2)); }
	inline bool get_fallback_assigned_2() const { return ___fallback_assigned_2; }
	inline bool* get_address_of_fallback_assigned_2() { return &___fallback_assigned_2; }
	inline void set_fallback_assigned_2(bool value)
	{
		___fallback_assigned_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODERREPLACEMENTFALLBACKBUFFER_T4159324089_H
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
#ifndef SECURITYATTRIBUTE_T3975255812_H
#define SECURITYATTRIBUTE_T3975255812_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.SecurityAttribute
struct  SecurityAttribute_t3975255812  : public Attribute_t2825975485
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYATTRIBUTE_T3975255812_H
#ifndef RSA_T76874314_H
#define RSA_T76874314_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSA
struct  RSA_t76874314  : public AsymmetricAlgorithm_t889780810
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSA_T76874314_H
#ifndef UNICODEDECODER_T3314387579_H
#define UNICODEDECODER_T3314387579_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UnicodeEncoding/UnicodeDecoder
struct  UnicodeDecoder_t3314387579  : public Decoder_t2580404822
{
public:
	// System.Boolean System.Text.UnicodeEncoding/UnicodeDecoder::bigEndian
	bool ___bigEndian_2;
	// System.Int32 System.Text.UnicodeEncoding/UnicodeDecoder::leftOverByte
	int32_t ___leftOverByte_3;

public:
	inline static int32_t get_offset_of_bigEndian_2() { return static_cast<int32_t>(offsetof(UnicodeDecoder_t3314387579, ___bigEndian_2)); }
	inline bool get_bigEndian_2() const { return ___bigEndian_2; }
	inline bool* get_address_of_bigEndian_2() { return &___bigEndian_2; }
	inline void set_bigEndian_2(bool value)
	{
		___bigEndian_2 = value;
	}

	inline static int32_t get_offset_of_leftOverByte_3() { return static_cast<int32_t>(offsetof(UnicodeDecoder_t3314387579, ___leftOverByte_3)); }
	inline int32_t get_leftOverByte_3() const { return ___leftOverByte_3; }
	inline int32_t* get_address_of_leftOverByte_3() { return &___leftOverByte_3; }
	inline void set_leftOverByte_3(int32_t value)
	{
		___leftOverByte_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNICODEDECODER_T3314387579_H
#ifndef ENCODERREPLACEMENTFALLBACK_T1442163840_H
#define ENCODERREPLACEMENTFALLBACK_T1442163840_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.EncoderReplacementFallback
struct  EncoderReplacementFallback_t1442163840  : public EncoderFallback_t2317521021
{
public:
	// System.String System.Text.EncoderReplacementFallback::replacement
	String_t* ___replacement_3;

public:
	inline static int32_t get_offset_of_replacement_3() { return static_cast<int32_t>(offsetof(EncoderReplacementFallback_t1442163840, ___replacement_3)); }
	inline String_t* get_replacement_3() const { return ___replacement_3; }
	inline String_t** get_address_of_replacement_3() { return &___replacement_3; }
	inline void set_replacement_3(String_t* value)
	{
		___replacement_3 = value;
		Il2CppCodeGenWriteBarrier((&___replacement_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODERREPLACEMENTFALLBACK_T1442163840_H
#ifndef UNICODEENCODING_T2387548882_H
#define UNICODEENCODING_T2387548882_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UnicodeEncoding
struct  UnicodeEncoding_t2387548882  : public Encoding_t314924375
{
public:
	// System.Boolean System.Text.UnicodeEncoding::bigEndian
	bool ___bigEndian_28;
	// System.Boolean System.Text.UnicodeEncoding::byteOrderMark
	bool ___byteOrderMark_29;

public:
	inline static int32_t get_offset_of_bigEndian_28() { return static_cast<int32_t>(offsetof(UnicodeEncoding_t2387548882, ___bigEndian_28)); }
	inline bool get_bigEndian_28() const { return ___bigEndian_28; }
	inline bool* get_address_of_bigEndian_28() { return &___bigEndian_28; }
	inline void set_bigEndian_28(bool value)
	{
		___bigEndian_28 = value;
	}

	inline static int32_t get_offset_of_byteOrderMark_29() { return static_cast<int32_t>(offsetof(UnicodeEncoding_t2387548882, ___byteOrderMark_29)); }
	inline bool get_byteOrderMark_29() const { return ___byteOrderMark_29; }
	inline bool* get_address_of_byteOrderMark_29() { return &___byteOrderMark_29; }
	inline void set_byteOrderMark_29(bool value)
	{
		___byteOrderMark_29 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNICODEENCODING_T2387548882_H
#ifndef UTF8ENCODING_T3315974484_H
#define UTF8ENCODING_T3315974484_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UTF8Encoding
struct  UTF8Encoding_t3315974484  : public Encoding_t314924375
{
public:
	// System.Boolean System.Text.UTF8Encoding::emitIdentifier
	bool ___emitIdentifier_28;

public:
	inline static int32_t get_offset_of_emitIdentifier_28() { return static_cast<int32_t>(offsetof(UTF8Encoding_t3315974484, ___emitIdentifier_28)); }
	inline bool get_emitIdentifier_28() const { return ___emitIdentifier_28; }
	inline bool* get_address_of_emitIdentifier_28() { return &___emitIdentifier_28; }
	inline void set_emitIdentifier_28(bool value)
	{
		___emitIdentifier_28 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UTF8ENCODING_T3315974484_H
#ifndef UTF7DECODER_T1629765230_H
#define UTF7DECODER_T1629765230_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UTF7Encoding/UTF7Decoder
struct  UTF7Decoder_t1629765230  : public Decoder_t2580404822
{
public:
	// System.Int32 System.Text.UTF7Encoding/UTF7Decoder::leftOver
	int32_t ___leftOver_2;

public:
	inline static int32_t get_offset_of_leftOver_2() { return static_cast<int32_t>(offsetof(UTF7Decoder_t1629765230, ___leftOver_2)); }
	inline int32_t get_leftOver_2() const { return ___leftOver_2; }
	inline int32_t* get_address_of_leftOver_2() { return &___leftOver_2; }
	inline void set_leftOver_2(int32_t value)
	{
		___leftOver_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UTF7DECODER_T1629765230_H
#ifndef UTF7ENCODING_T3121866920_H
#define UTF7ENCODING_T3121866920_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UTF7Encoding
struct  UTF7Encoding_t3121866920  : public Encoding_t314924375
{
public:
	// System.Boolean System.Text.UTF7Encoding::allowOptionals
	bool ___allowOptionals_28;

public:
	inline static int32_t get_offset_of_allowOptionals_28() { return static_cast<int32_t>(offsetof(UTF7Encoding_t3121866920, ___allowOptionals_28)); }
	inline bool get_allowOptionals_28() const { return ___allowOptionals_28; }
	inline bool* get_address_of_allowOptionals_28() { return &___allowOptionals_28; }
	inline void set_allowOptionals_28(bool value)
	{
		___allowOptionals_28 = value;
	}
};

struct UTF7Encoding_t3121866920_StaticFields
{
public:
	// System.Byte[] System.Text.UTF7Encoding::encodingRules
	ByteU5BU5D_t250263739* ___encodingRules_29;
	// System.SByte[] System.Text.UTF7Encoding::base64Values
	SByteU5BU5D_t2484129797* ___base64Values_30;

public:
	inline static int32_t get_offset_of_encodingRules_29() { return static_cast<int32_t>(offsetof(UTF7Encoding_t3121866920_StaticFields, ___encodingRules_29)); }
	inline ByteU5BU5D_t250263739* get_encodingRules_29() const { return ___encodingRules_29; }
	inline ByteU5BU5D_t250263739** get_address_of_encodingRules_29() { return &___encodingRules_29; }
	inline void set_encodingRules_29(ByteU5BU5D_t250263739* value)
	{
		___encodingRules_29 = value;
		Il2CppCodeGenWriteBarrier((&___encodingRules_29), value);
	}

	inline static int32_t get_offset_of_base64Values_30() { return static_cast<int32_t>(offsetof(UTF7Encoding_t3121866920_StaticFields, ___base64Values_30)); }
	inline SByteU5BU5D_t2484129797* get_base64Values_30() const { return ___base64Values_30; }
	inline SByteU5BU5D_t2484129797** get_address_of_base64Values_30() { return &___base64Values_30; }
	inline void set_base64Values_30(SByteU5BU5D_t2484129797* value)
	{
		___base64Values_30 = value;
		Il2CppCodeGenWriteBarrier((&___base64Values_30), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UTF7ENCODING_T3121866920_H
#ifndef UTF32ENCODING_T3261746724_H
#define UTF32ENCODING_T3261746724_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UTF32Encoding
struct  UTF32Encoding_t3261746724  : public Encoding_t314924375
{
public:
	// System.Boolean System.Text.UTF32Encoding::bigEndian
	bool ___bigEndian_28;
	// System.Boolean System.Text.UTF32Encoding::byteOrderMark
	bool ___byteOrderMark_29;

public:
	inline static int32_t get_offset_of_bigEndian_28() { return static_cast<int32_t>(offsetof(UTF32Encoding_t3261746724, ___bigEndian_28)); }
	inline bool get_bigEndian_28() const { return ___bigEndian_28; }
	inline bool* get_address_of_bigEndian_28() { return &___bigEndian_28; }
	inline void set_bigEndian_28(bool value)
	{
		___bigEndian_28 = value;
	}

	inline static int32_t get_offset_of_byteOrderMark_29() { return static_cast<int32_t>(offsetof(UTF32Encoding_t3261746724, ___byteOrderMark_29)); }
	inline bool get_byteOrderMark_29() const { return ___byteOrderMark_29; }
	inline bool* get_address_of_byteOrderMark_29() { return &___byteOrderMark_29; }
	inline void set_byteOrderMark_29(bool value)
	{
		___byteOrderMark_29 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UTF32ENCODING_T3261746724_H
#ifndef LATIN1ENCODING_T2680521409_H
#define LATIN1ENCODING_T2680521409_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Latin1Encoding
struct  Latin1Encoding_t2680521409  : public Encoding_t314924375
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LATIN1ENCODING_T2680521409_H
#ifndef FORWARDINGDECODER_T3591468115_H
#define FORWARDINGDECODER_T3591468115_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Encoding/ForwardingDecoder
struct  ForwardingDecoder_t3591468115  : public Decoder_t2580404822
{
public:
	// System.Text.Encoding System.Text.Encoding/ForwardingDecoder::encoding
	Encoding_t314924375 * ___encoding_2;

public:
	inline static int32_t get_offset_of_encoding_2() { return static_cast<int32_t>(offsetof(ForwardingDecoder_t3591468115, ___encoding_2)); }
	inline Encoding_t314924375 * get_encoding_2() const { return ___encoding_2; }
	inline Encoding_t314924375 ** get_address_of_encoding_2() { return &___encoding_2; }
	inline void set_encoding_2(Encoding_t314924375 * value)
	{
		___encoding_2 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORWARDINGDECODER_T3591468115_H
#ifndef UTF8DECODER_T2150941491_H
#define UTF8DECODER_T2150941491_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.UTF8Encoding/UTF8Decoder
struct  UTF8Decoder_t2150941491  : public Decoder_t2580404822
{
public:
	// System.UInt32 System.Text.UTF8Encoding/UTF8Decoder::leftOverBits
	uint32_t ___leftOverBits_2;
	// System.UInt32 System.Text.UTF8Encoding/UTF8Decoder::leftOverCount
	uint32_t ___leftOverCount_3;

public:
	inline static int32_t get_offset_of_leftOverBits_2() { return static_cast<int32_t>(offsetof(UTF8Decoder_t2150941491, ___leftOverBits_2)); }
	inline uint32_t get_leftOverBits_2() const { return ___leftOverBits_2; }
	inline uint32_t* get_address_of_leftOverBits_2() { return &___leftOverBits_2; }
	inline void set_leftOverBits_2(uint32_t value)
	{
		___leftOverBits_2 = value;
	}

	inline static int32_t get_offset_of_leftOverCount_3() { return static_cast<int32_t>(offsetof(UTF8Decoder_t2150941491, ___leftOverCount_3)); }
	inline uint32_t get_leftOverCount_3() const { return ___leftOverCount_3; }
	inline uint32_t* get_address_of_leftOverCount_3() { return &___leftOverCount_3; }
	inline void set_leftOverCount_3(uint32_t value)
	{
		___leftOverCount_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UTF8DECODER_T2150941491_H
#ifndef ASCIIENCODING_T2226524866_H
#define ASCIIENCODING_T2226524866_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.ASCIIEncoding
struct  ASCIIEncoding_t2226524866  : public Encoding_t314924375
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASCIIENCODING_T2226524866_H
#ifndef SECURITYFRAME_T2135789231_H
#define SECURITYFRAME_T2135789231_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecurityFrame
struct  SecurityFrame_t2135789231 
{
public:
	// System.AppDomain System.Security.SecurityFrame::_domain
	AppDomain_t398665589 * ____domain_0;
	// System.Reflection.MethodInfo System.Security.SecurityFrame::_method
	MethodInfo_t * ____method_1;
	// System.Security.PermissionSet System.Security.SecurityFrame::_assert
	PermissionSet_t1484169221 * ____assert_2;
	// System.Security.PermissionSet System.Security.SecurityFrame::_deny
	PermissionSet_t1484169221 * ____deny_3;
	// System.Security.PermissionSet System.Security.SecurityFrame::_permitonly
	PermissionSet_t1484169221 * ____permitonly_4;

public:
	inline static int32_t get_offset_of__domain_0() { return static_cast<int32_t>(offsetof(SecurityFrame_t2135789231, ____domain_0)); }
	inline AppDomain_t398665589 * get__domain_0() const { return ____domain_0; }
	inline AppDomain_t398665589 ** get_address_of__domain_0() { return &____domain_0; }
	inline void set__domain_0(AppDomain_t398665589 * value)
	{
		____domain_0 = value;
		Il2CppCodeGenWriteBarrier((&____domain_0), value);
	}

	inline static int32_t get_offset_of__method_1() { return static_cast<int32_t>(offsetof(SecurityFrame_t2135789231, ____method_1)); }
	inline MethodInfo_t * get__method_1() const { return ____method_1; }
	inline MethodInfo_t ** get_address_of__method_1() { return &____method_1; }
	inline void set__method_1(MethodInfo_t * value)
	{
		____method_1 = value;
		Il2CppCodeGenWriteBarrier((&____method_1), value);
	}

	inline static int32_t get_offset_of__assert_2() { return static_cast<int32_t>(offsetof(SecurityFrame_t2135789231, ____assert_2)); }
	inline PermissionSet_t1484169221 * get__assert_2() const { return ____assert_2; }
	inline PermissionSet_t1484169221 ** get_address_of__assert_2() { return &____assert_2; }
	inline void set__assert_2(PermissionSet_t1484169221 * value)
	{
		____assert_2 = value;
		Il2CppCodeGenWriteBarrier((&____assert_2), value);
	}

	inline static int32_t get_offset_of__deny_3() { return static_cast<int32_t>(offsetof(SecurityFrame_t2135789231, ____deny_3)); }
	inline PermissionSet_t1484169221 * get__deny_3() const { return ____deny_3; }
	inline PermissionSet_t1484169221 ** get_address_of__deny_3() { return &____deny_3; }
	inline void set__deny_3(PermissionSet_t1484169221 * value)
	{
		____deny_3 = value;
		Il2CppCodeGenWriteBarrier((&____deny_3), value);
	}

	inline static int32_t get_offset_of__permitonly_4() { return static_cast<int32_t>(offsetof(SecurityFrame_t2135789231, ____permitonly_4)); }
	inline PermissionSet_t1484169221 * get__permitonly_4() const { return ____permitonly_4; }
	inline PermissionSet_t1484169221 ** get_address_of__permitonly_4() { return &____permitonly_4; }
	inline void set__permitonly_4(PermissionSet_t1484169221 * value)
	{
		____permitonly_4 = value;
		Il2CppCodeGenWriteBarrier((&____permitonly_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Security.SecurityFrame
struct SecurityFrame_t2135789231_marshaled_pinvoke
{
	AppDomain_t398665589 * ____domain_0;
	MethodInfo_t * ____method_1;
	PermissionSet_t1484169221 * ____assert_2;
	PermissionSet_t1484169221 * ____deny_3;
	PermissionSet_t1484169221 * ____permitonly_4;
};
// Native definition for COM marshalling of System.Security.SecurityFrame
struct SecurityFrame_t2135789231_marshaled_com
{
	AppDomain_t398665589 * ____domain_0;
	MethodInfo_t * ____method_1;
	PermissionSet_t1484169221 * ____assert_2;
	PermissionSet_t1484169221 * ____deny_3;
	PermissionSet_t1484169221 * ____permitonly_4;
};
#endif // SECURITYFRAME_T2135789231_H
#ifndef SUPPRESSUNMANAGEDCODESECURITYATTRIBUTE_T2148483381_H
#define SUPPRESSUNMANAGEDCODESECURITYATTRIBUTE_T2148483381_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SuppressUnmanagedCodeSecurityAttribute
struct  SuppressUnmanagedCodeSecurityAttribute_t2148483381  : public Attribute_t2825975485
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SUPPRESSUNMANAGEDCODESECURITYATTRIBUTE_T2148483381_H
#ifndef RSAPKCS1KEYEXCHANGEFORMATTER_T1189083464_H
#define RSAPKCS1KEYEXCHANGEFORMATTER_T1189083464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter
struct  RSAPKCS1KeyExchangeFormatter_t1189083464  : public AsymmetricKeyExchangeFormatter_t2750091873
{
public:
	// System.Security.Cryptography.RSA System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::rsa
	RSA_t76874314 * ___rsa_0;
	// System.Security.Cryptography.RandomNumberGenerator System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::random
	RandomNumberGenerator_t3399161153 * ___random_1;

public:
	inline static int32_t get_offset_of_rsa_0() { return static_cast<int32_t>(offsetof(RSAPKCS1KeyExchangeFormatter_t1189083464, ___rsa_0)); }
	inline RSA_t76874314 * get_rsa_0() const { return ___rsa_0; }
	inline RSA_t76874314 ** get_address_of_rsa_0() { return &___rsa_0; }
	inline void set_rsa_0(RSA_t76874314 * value)
	{
		___rsa_0 = value;
		Il2CppCodeGenWriteBarrier((&___rsa_0), value);
	}

	inline static int32_t get_offset_of_random_1() { return static_cast<int32_t>(offsetof(RSAPKCS1KeyExchangeFormatter_t1189083464, ___random_1)); }
	inline RandomNumberGenerator_t3399161153 * get_random_1() const { return ___random_1; }
	inline RandomNumberGenerator_t3399161153 ** get_address_of_random_1() { return &___random_1; }
	inline void set_random_1(RandomNumberGenerator_t3399161153 * value)
	{
		___random_1 = value;
		Il2CppCodeGenWriteBarrier((&___random_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSAPKCS1KEYEXCHANGEFORMATTER_T1189083464_H
#ifndef RSAPKCS1SIGNATUREDEFORMATTER_T200457136_H
#define RSAPKCS1SIGNATUREDEFORMATTER_T200457136_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSAPKCS1SignatureDeformatter
struct  RSAPKCS1SignatureDeformatter_t200457136  : public AsymmetricSignatureDeformatter_t4049447603
{
public:
	// System.Security.Cryptography.RSA System.Security.Cryptography.RSAPKCS1SignatureDeformatter::rsa
	RSA_t76874314 * ___rsa_0;
	// System.String System.Security.Cryptography.RSAPKCS1SignatureDeformatter::hashName
	String_t* ___hashName_1;

public:
	inline static int32_t get_offset_of_rsa_0() { return static_cast<int32_t>(offsetof(RSAPKCS1SignatureDeformatter_t200457136, ___rsa_0)); }
	inline RSA_t76874314 * get_rsa_0() const { return ___rsa_0; }
	inline RSA_t76874314 ** get_address_of_rsa_0() { return &___rsa_0; }
	inline void set_rsa_0(RSA_t76874314 * value)
	{
		___rsa_0 = value;
		Il2CppCodeGenWriteBarrier((&___rsa_0), value);
	}

	inline static int32_t get_offset_of_hashName_1() { return static_cast<int32_t>(offsetof(RSAPKCS1SignatureDeformatter_t200457136, ___hashName_1)); }
	inline String_t* get_hashName_1() const { return ___hashName_1; }
	inline String_t** get_address_of_hashName_1() { return &___hashName_1; }
	inline void set_hashName_1(String_t* value)
	{
		___hashName_1 = value;
		Il2CppCodeGenWriteBarrier((&___hashName_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSAPKCS1SIGNATUREDEFORMATTER_T200457136_H
#ifndef RSAPKCS1SIGNATUREFORMATTER_T2261619966_H
#define RSAPKCS1SIGNATUREFORMATTER_T2261619966_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSAPKCS1SignatureFormatter
struct  RSAPKCS1SignatureFormatter_t2261619966  : public AsymmetricSignatureFormatter_t2269944817
{
public:
	// System.Security.Cryptography.RSA System.Security.Cryptography.RSAPKCS1SignatureFormatter::rsa
	RSA_t76874314 * ___rsa_0;
	// System.Security.Cryptography.HashAlgorithm System.Security.Cryptography.RSAPKCS1SignatureFormatter::hash
	HashAlgorithm_t193810181 * ___hash_1;

public:
	inline static int32_t get_offset_of_rsa_0() { return static_cast<int32_t>(offsetof(RSAPKCS1SignatureFormatter_t2261619966, ___rsa_0)); }
	inline RSA_t76874314 * get_rsa_0() const { return ___rsa_0; }
	inline RSA_t76874314 ** get_address_of_rsa_0() { return &___rsa_0; }
	inline void set_rsa_0(RSA_t76874314 * value)
	{
		___rsa_0 = value;
		Il2CppCodeGenWriteBarrier((&___rsa_0), value);
	}

	inline static int32_t get_offset_of_hash_1() { return static_cast<int32_t>(offsetof(RSAPKCS1SignatureFormatter_t2261619966, ___hash_1)); }
	inline HashAlgorithm_t193810181 * get_hash_1() const { return ___hash_1; }
	inline HashAlgorithm_t193810181 ** get_address_of_hash_1() { return &___hash_1; }
	inline void set_hash_1(HashAlgorithm_t193810181 * value)
	{
		___hash_1 = value;
		Il2CppCodeGenWriteBarrier((&___hash_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSAPKCS1SIGNATUREFORMATTER_T2261619966_H
#ifndef RSAPARAMETERS_T2197775318_H
#define RSAPARAMETERS_T2197775318_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSAParameters
struct  RSAParameters_t2197775318 
{
public:
	// System.Byte[] System.Security.Cryptography.RSAParameters::P
	ByteU5BU5D_t250263739* ___P_0;
	// System.Byte[] System.Security.Cryptography.RSAParameters::Q
	ByteU5BU5D_t250263739* ___Q_1;
	// System.Byte[] System.Security.Cryptography.RSAParameters::D
	ByteU5BU5D_t250263739* ___D_2;
	// System.Byte[] System.Security.Cryptography.RSAParameters::DP
	ByteU5BU5D_t250263739* ___DP_3;
	// System.Byte[] System.Security.Cryptography.RSAParameters::DQ
	ByteU5BU5D_t250263739* ___DQ_4;
	// System.Byte[] System.Security.Cryptography.RSAParameters::InverseQ
	ByteU5BU5D_t250263739* ___InverseQ_5;
	// System.Byte[] System.Security.Cryptography.RSAParameters::Modulus
	ByteU5BU5D_t250263739* ___Modulus_6;
	// System.Byte[] System.Security.Cryptography.RSAParameters::Exponent
	ByteU5BU5D_t250263739* ___Exponent_7;

public:
	inline static int32_t get_offset_of_P_0() { return static_cast<int32_t>(offsetof(RSAParameters_t2197775318, ___P_0)); }
	inline ByteU5BU5D_t250263739* get_P_0() const { return ___P_0; }
	inline ByteU5BU5D_t250263739** get_address_of_P_0() { return &___P_0; }
	inline void set_P_0(ByteU5BU5D_t250263739* value)
	{
		___P_0 = value;
		Il2CppCodeGenWriteBarrier((&___P_0), value);
	}

	inline static int32_t get_offset_of_Q_1() { return static_cast<int32_t>(offsetof(RSAParameters_t2197775318, ___Q_1)); }
	inline ByteU5BU5D_t250263739* get_Q_1() const { return ___Q_1; }
	inline ByteU5BU5D_t250263739** get_address_of_Q_1() { return &___Q_1; }
	inline void set_Q_1(ByteU5BU5D_t250263739* value)
	{
		___Q_1 = value;
		Il2CppCodeGenWriteBarrier((&___Q_1), value);
	}

	inline static int32_t get_offset_of_D_2() { return static_cast<int32_t>(offsetof(RSAParameters_t2197775318, ___D_2)); }
	inline ByteU5BU5D_t250263739* get_D_2() const { return ___D_2; }
	inline ByteU5BU5D_t250263739** get_address_of_D_2() { return &___D_2; }
	inline void set_D_2(ByteU5BU5D_t250263739* value)
	{
		___D_2 = value;
		Il2CppCodeGenWriteBarrier((&___D_2), value);
	}

	inline static int32_t get_offset_of_DP_3() { return static_cast<int32_t>(offsetof(RSAParameters_t2197775318, ___DP_3)); }
	inline ByteU5BU5D_t250263739* get_DP_3() const { return ___DP_3; }
	inline ByteU5BU5D_t250263739** get_address_of_DP_3() { return &___DP_3; }
	inline void set_DP_3(ByteU5BU5D_t250263739* value)
	{
		___DP_3 = value;
		Il2CppCodeGenWriteBarrier((&___DP_3), value);
	}

	inline static int32_t get_offset_of_DQ_4() { return static_cast<int32_t>(offsetof(RSAParameters_t2197775318, ___DQ_4)); }
	inline ByteU5BU5D_t250263739* get_DQ_4() const { return ___DQ_4; }
	inline ByteU5BU5D_t250263739** get_address_of_DQ_4() { return &___DQ_4; }
	inline void set_DQ_4(ByteU5BU5D_t250263739* value)
	{
		___DQ_4 = value;
		Il2CppCodeGenWriteBarrier((&___DQ_4), value);
	}

	inline static int32_t get_offset_of_InverseQ_5() { return static_cast<int32_t>(offsetof(RSAParameters_t2197775318, ___InverseQ_5)); }
	inline ByteU5BU5D_t250263739* get_InverseQ_5() const { return ___InverseQ_5; }
	inline ByteU5BU5D_t250263739** get_address_of_InverseQ_5() { return &___InverseQ_5; }
	inline void set_InverseQ_5(ByteU5BU5D_t250263739* value)
	{
		___InverseQ_5 = value;
		Il2CppCodeGenWriteBarrier((&___InverseQ_5), value);
	}

	inline static int32_t get_offset_of_Modulus_6() { return static_cast<int32_t>(offsetof(RSAParameters_t2197775318, ___Modulus_6)); }
	inline ByteU5BU5D_t250263739* get_Modulus_6() const { return ___Modulus_6; }
	inline ByteU5BU5D_t250263739** get_address_of_Modulus_6() { return &___Modulus_6; }
	inline void set_Modulus_6(ByteU5BU5D_t250263739* value)
	{
		___Modulus_6 = value;
		Il2CppCodeGenWriteBarrier((&___Modulus_6), value);
	}

	inline static int32_t get_offset_of_Exponent_7() { return static_cast<int32_t>(offsetof(RSAParameters_t2197775318, ___Exponent_7)); }
	inline ByteU5BU5D_t250263739* get_Exponent_7() const { return ___Exponent_7; }
	inline ByteU5BU5D_t250263739** get_address_of_Exponent_7() { return &___Exponent_7; }
	inline void set_Exponent_7(ByteU5BU5D_t250263739* value)
	{
		___Exponent_7 = value;
		Il2CppCodeGenWriteBarrier((&___Exponent_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Security.Cryptography.RSAParameters
struct RSAParameters_t2197775318_marshaled_pinvoke
{
	uint8_t* ___P_0;
	uint8_t* ___Q_1;
	uint8_t* ___D_2;
	uint8_t* ___DP_3;
	uint8_t* ___DQ_4;
	uint8_t* ___InverseQ_5;
	uint8_t* ___Modulus_6;
	uint8_t* ___Exponent_7;
};
// Native definition for COM marshalling of System.Security.Cryptography.RSAParameters
struct RSAParameters_t2197775318_marshaled_com
{
	uint8_t* ___P_0;
	uint8_t* ___Q_1;
	uint8_t* ___D_2;
	uint8_t* ___DP_3;
	uint8_t* ___DQ_4;
	uint8_t* ___InverseQ_5;
	uint8_t* ___Modulus_6;
	uint8_t* ___Exponent_7;
};
#endif // RSAPARAMETERS_T2197775318_H
#ifndef RIJNDAELTRANSFORM_T2775089468_H
#define RIJNDAELTRANSFORM_T2775089468_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RijndaelTransform
struct  RijndaelTransform_t2775089468  : public SymmetricTransform_t2127398341
{
public:
	// System.UInt32[] System.Security.Cryptography.RijndaelTransform::expandedKey
	UInt32U5BU5D_t819860844* ___expandedKey_12;
	// System.Int32 System.Security.Cryptography.RijndaelTransform::Nb
	int32_t ___Nb_13;
	// System.Int32 System.Security.Cryptography.RijndaelTransform::Nk
	int32_t ___Nk_14;
	// System.Int32 System.Security.Cryptography.RijndaelTransform::Nr
	int32_t ___Nr_15;

public:
	inline static int32_t get_offset_of_expandedKey_12() { return static_cast<int32_t>(offsetof(RijndaelTransform_t2775089468, ___expandedKey_12)); }
	inline UInt32U5BU5D_t819860844* get_expandedKey_12() const { return ___expandedKey_12; }
	inline UInt32U5BU5D_t819860844** get_address_of_expandedKey_12() { return &___expandedKey_12; }
	inline void set_expandedKey_12(UInt32U5BU5D_t819860844* value)
	{
		___expandedKey_12 = value;
		Il2CppCodeGenWriteBarrier((&___expandedKey_12), value);
	}

	inline static int32_t get_offset_of_Nb_13() { return static_cast<int32_t>(offsetof(RijndaelTransform_t2775089468, ___Nb_13)); }
	inline int32_t get_Nb_13() const { return ___Nb_13; }
	inline int32_t* get_address_of_Nb_13() { return &___Nb_13; }
	inline void set_Nb_13(int32_t value)
	{
		___Nb_13 = value;
	}

	inline static int32_t get_offset_of_Nk_14() { return static_cast<int32_t>(offsetof(RijndaelTransform_t2775089468, ___Nk_14)); }
	inline int32_t get_Nk_14() const { return ___Nk_14; }
	inline int32_t* get_address_of_Nk_14() { return &___Nk_14; }
	inline void set_Nk_14(int32_t value)
	{
		___Nk_14 = value;
	}

	inline static int32_t get_offset_of_Nr_15() { return static_cast<int32_t>(offsetof(RijndaelTransform_t2775089468, ___Nr_15)); }
	inline int32_t get_Nr_15() const { return ___Nr_15; }
	inline int32_t* get_address_of_Nr_15() { return &___Nr_15; }
	inline void set_Nr_15(int32_t value)
	{
		___Nr_15 = value;
	}
};

struct RijndaelTransform_t2775089468_StaticFields
{
public:
	// System.UInt32[] System.Security.Cryptography.RijndaelTransform::Rcon
	UInt32U5BU5D_t819860844* ___Rcon_16;
	// System.Byte[] System.Security.Cryptography.RijndaelTransform::SBox
	ByteU5BU5D_t250263739* ___SBox_17;
	// System.Byte[] System.Security.Cryptography.RijndaelTransform::iSBox
	ByteU5BU5D_t250263739* ___iSBox_18;
	// System.UInt32[] System.Security.Cryptography.RijndaelTransform::T0
	UInt32U5BU5D_t819860844* ___T0_19;
	// System.UInt32[] System.Security.Cryptography.RijndaelTransform::T1
	UInt32U5BU5D_t819860844* ___T1_20;
	// System.UInt32[] System.Security.Cryptography.RijndaelTransform::T2
	UInt32U5BU5D_t819860844* ___T2_21;
	// System.UInt32[] System.Security.Cryptography.RijndaelTransform::T3
	UInt32U5BU5D_t819860844* ___T3_22;
	// System.UInt32[] System.Security.Cryptography.RijndaelTransform::iT0
	UInt32U5BU5D_t819860844* ___iT0_23;
	// System.UInt32[] System.Security.Cryptography.RijndaelTransform::iT1
	UInt32U5BU5D_t819860844* ___iT1_24;
	// System.UInt32[] System.Security.Cryptography.RijndaelTransform::iT2
	UInt32U5BU5D_t819860844* ___iT2_25;
	// System.UInt32[] System.Security.Cryptography.RijndaelTransform::iT3
	UInt32U5BU5D_t819860844* ___iT3_26;

public:
	inline static int32_t get_offset_of_Rcon_16() { return static_cast<int32_t>(offsetof(RijndaelTransform_t2775089468_StaticFields, ___Rcon_16)); }
	inline UInt32U5BU5D_t819860844* get_Rcon_16() const { return ___Rcon_16; }
	inline UInt32U5BU5D_t819860844** get_address_of_Rcon_16() { return &___Rcon_16; }
	inline void set_Rcon_16(UInt32U5BU5D_t819860844* value)
	{
		___Rcon_16 = value;
		Il2CppCodeGenWriteBarrier((&___Rcon_16), value);
	}

	inline static int32_t get_offset_of_SBox_17() { return static_cast<int32_t>(offsetof(RijndaelTransform_t2775089468_StaticFields, ___SBox_17)); }
	inline ByteU5BU5D_t250263739* get_SBox_17() const { return ___SBox_17; }
	inline ByteU5BU5D_t250263739** get_address_of_SBox_17() { return &___SBox_17; }
	inline void set_SBox_17(ByteU5BU5D_t250263739* value)
	{
		___SBox_17 = value;
		Il2CppCodeGenWriteBarrier((&___SBox_17), value);
	}

	inline static int32_t get_offset_of_iSBox_18() { return static_cast<int32_t>(offsetof(RijndaelTransform_t2775089468_StaticFields, ___iSBox_18)); }
	inline ByteU5BU5D_t250263739* get_iSBox_18() const { return ___iSBox_18; }
	inline ByteU5BU5D_t250263739** get_address_of_iSBox_18() { return &___iSBox_18; }
	inline void set_iSBox_18(ByteU5BU5D_t250263739* value)
	{
		___iSBox_18 = value;
		Il2CppCodeGenWriteBarrier((&___iSBox_18), value);
	}

	inline static int32_t get_offset_of_T0_19() { return static_cast<int32_t>(offsetof(RijndaelTransform_t2775089468_StaticFields, ___T0_19)); }
	inline UInt32U5BU5D_t819860844* get_T0_19() const { return ___T0_19; }
	inline UInt32U5BU5D_t819860844** get_address_of_T0_19() { return &___T0_19; }
	inline void set_T0_19(UInt32U5BU5D_t819860844* value)
	{
		___T0_19 = value;
		Il2CppCodeGenWriteBarrier((&___T0_19), value);
	}

	inline static int32_t get_offset_of_T1_20() { return static_cast<int32_t>(offsetof(RijndaelTransform_t2775089468_StaticFields, ___T1_20)); }
	inline UInt32U5BU5D_t819860844* get_T1_20() const { return ___T1_20; }
	inline UInt32U5BU5D_t819860844** get_address_of_T1_20() { return &___T1_20; }
	inline void set_T1_20(UInt32U5BU5D_t819860844* value)
	{
		___T1_20 = value;
		Il2CppCodeGenWriteBarrier((&___T1_20), value);
	}

	inline static int32_t get_offset_of_T2_21() { return static_cast<int32_t>(offsetof(RijndaelTransform_t2775089468_StaticFields, ___T2_21)); }
	inline UInt32U5BU5D_t819860844* get_T2_21() const { return ___T2_21; }
	inline UInt32U5BU5D_t819860844** get_address_of_T2_21() { return &___T2_21; }
	inline void set_T2_21(UInt32U5BU5D_t819860844* value)
	{
		___T2_21 = value;
		Il2CppCodeGenWriteBarrier((&___T2_21), value);
	}

	inline static int32_t get_offset_of_T3_22() { return static_cast<int32_t>(offsetof(RijndaelTransform_t2775089468_StaticFields, ___T3_22)); }
	inline UInt32U5BU5D_t819860844* get_T3_22() const { return ___T3_22; }
	inline UInt32U5BU5D_t819860844** get_address_of_T3_22() { return &___T3_22; }
	inline void set_T3_22(UInt32U5BU5D_t819860844* value)
	{
		___T3_22 = value;
		Il2CppCodeGenWriteBarrier((&___T3_22), value);
	}

	inline static int32_t get_offset_of_iT0_23() { return static_cast<int32_t>(offsetof(RijndaelTransform_t2775089468_StaticFields, ___iT0_23)); }
	inline UInt32U5BU5D_t819860844* get_iT0_23() const { return ___iT0_23; }
	inline UInt32U5BU5D_t819860844** get_address_of_iT0_23() { return &___iT0_23; }
	inline void set_iT0_23(UInt32U5BU5D_t819860844* value)
	{
		___iT0_23 = value;
		Il2CppCodeGenWriteBarrier((&___iT0_23), value);
	}

	inline static int32_t get_offset_of_iT1_24() { return static_cast<int32_t>(offsetof(RijndaelTransform_t2775089468_StaticFields, ___iT1_24)); }
	inline UInt32U5BU5D_t819860844* get_iT1_24() const { return ___iT1_24; }
	inline UInt32U5BU5D_t819860844** get_address_of_iT1_24() { return &___iT1_24; }
	inline void set_iT1_24(UInt32U5BU5D_t819860844* value)
	{
		___iT1_24 = value;
		Il2CppCodeGenWriteBarrier((&___iT1_24), value);
	}

	inline static int32_t get_offset_of_iT2_25() { return static_cast<int32_t>(offsetof(RijndaelTransform_t2775089468_StaticFields, ___iT2_25)); }
	inline UInt32U5BU5D_t819860844* get_iT2_25() const { return ___iT2_25; }
	inline UInt32U5BU5D_t819860844** get_address_of_iT2_25() { return &___iT2_25; }
	inline void set_iT2_25(UInt32U5BU5D_t819860844* value)
	{
		___iT2_25 = value;
		Il2CppCodeGenWriteBarrier((&___iT2_25), value);
	}

	inline static int32_t get_offset_of_iT3_26() { return static_cast<int32_t>(offsetof(RijndaelTransform_t2775089468_StaticFields, ___iT3_26)); }
	inline UInt32U5BU5D_t819860844* get_iT3_26() const { return ___iT3_26; }
	inline UInt32U5BU5D_t819860844** get_address_of_iT3_26() { return &___iT3_26; }
	inline void set_iT3_26(UInt32U5BU5D_t819860844* value)
	{
		___iT3_26 = value;
		Il2CppCodeGenWriteBarrier((&___iT3_26), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIJNDAELTRANSFORM_T2775089468_H
#ifndef SHA1_T344965996_H
#define SHA1_T344965996_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA1
struct  SHA1_t344965996  : public HashAlgorithm_t193810181
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA1_T344965996_H
#ifndef SHA256_T3827380899_H
#define SHA256_T3827380899_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA256
struct  SHA256_t3827380899  : public HashAlgorithm_t193810181
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA256_T3827380899_H
#ifndef SHA384_T3997616894_H
#define SHA384_T3997616894_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA384
struct  SHA384_t3997616894  : public HashAlgorithm_t193810181
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA384_T3997616894_H
#ifndef SHA512_T1488557438_H
#define SHA512_T1488557438_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA512
struct  SHA512_t1488557438  : public HashAlgorithm_t193810181
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA512_T1488557438_H
#ifndef DSASIGNATUREDESCRIPTION_T1704610795_H
#define DSASIGNATUREDESCRIPTION_T1704610795_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DSASignatureDescription
struct  DSASignatureDescription_t1704610795  : public SignatureDescription_t763271396
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DSASIGNATUREDESCRIPTION_T1704610795_H
#ifndef UNVERIFIABLECODEATTRIBUTE_T2986773691_H
#define UNVERIFIABLECODEATTRIBUTE_T2986773691_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.UnverifiableCodeAttribute
struct  UnverifiableCodeAttribute_t2986773691  : public Attribute_t2825975485
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNVERIFIABLECODEATTRIBUTE_T2986773691_H
#ifndef TRIPLEDESTRANSFORM_T4057757275_H
#define TRIPLEDESTRANSFORM_T4057757275_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.TripleDESTransform
struct  TripleDESTransform_t4057757275  : public SymmetricTransform_t2127398341
{
public:
	// System.Security.Cryptography.DESTransform System.Security.Cryptography.TripleDESTransform::E1
	DESTransform_t3186821195 * ___E1_12;
	// System.Security.Cryptography.DESTransform System.Security.Cryptography.TripleDESTransform::D2
	DESTransform_t3186821195 * ___D2_13;
	// System.Security.Cryptography.DESTransform System.Security.Cryptography.TripleDESTransform::E3
	DESTransform_t3186821195 * ___E3_14;
	// System.Security.Cryptography.DESTransform System.Security.Cryptography.TripleDESTransform::D1
	DESTransform_t3186821195 * ___D1_15;
	// System.Security.Cryptography.DESTransform System.Security.Cryptography.TripleDESTransform::E2
	DESTransform_t3186821195 * ___E2_16;
	// System.Security.Cryptography.DESTransform System.Security.Cryptography.TripleDESTransform::D3
	DESTransform_t3186821195 * ___D3_17;

public:
	inline static int32_t get_offset_of_E1_12() { return static_cast<int32_t>(offsetof(TripleDESTransform_t4057757275, ___E1_12)); }
	inline DESTransform_t3186821195 * get_E1_12() const { return ___E1_12; }
	inline DESTransform_t3186821195 ** get_address_of_E1_12() { return &___E1_12; }
	inline void set_E1_12(DESTransform_t3186821195 * value)
	{
		___E1_12 = value;
		Il2CppCodeGenWriteBarrier((&___E1_12), value);
	}

	inline static int32_t get_offset_of_D2_13() { return static_cast<int32_t>(offsetof(TripleDESTransform_t4057757275, ___D2_13)); }
	inline DESTransform_t3186821195 * get_D2_13() const { return ___D2_13; }
	inline DESTransform_t3186821195 ** get_address_of_D2_13() { return &___D2_13; }
	inline void set_D2_13(DESTransform_t3186821195 * value)
	{
		___D2_13 = value;
		Il2CppCodeGenWriteBarrier((&___D2_13), value);
	}

	inline static int32_t get_offset_of_E3_14() { return static_cast<int32_t>(offsetof(TripleDESTransform_t4057757275, ___E3_14)); }
	inline DESTransform_t3186821195 * get_E3_14() const { return ___E3_14; }
	inline DESTransform_t3186821195 ** get_address_of_E3_14() { return &___E3_14; }
	inline void set_E3_14(DESTransform_t3186821195 * value)
	{
		___E3_14 = value;
		Il2CppCodeGenWriteBarrier((&___E3_14), value);
	}

	inline static int32_t get_offset_of_D1_15() { return static_cast<int32_t>(offsetof(TripleDESTransform_t4057757275, ___D1_15)); }
	inline DESTransform_t3186821195 * get_D1_15() const { return ___D1_15; }
	inline DESTransform_t3186821195 ** get_address_of_D1_15() { return &___D1_15; }
	inline void set_D1_15(DESTransform_t3186821195 * value)
	{
		___D1_15 = value;
		Il2CppCodeGenWriteBarrier((&___D1_15), value);
	}

	inline static int32_t get_offset_of_E2_16() { return static_cast<int32_t>(offsetof(TripleDESTransform_t4057757275, ___E2_16)); }
	inline DESTransform_t3186821195 * get_E2_16() const { return ___E2_16; }
	inline DESTransform_t3186821195 ** get_address_of_E2_16() { return &___E2_16; }
	inline void set_E2_16(DESTransform_t3186821195 * value)
	{
		___E2_16 = value;
		Il2CppCodeGenWriteBarrier((&___E2_16), value);
	}

	inline static int32_t get_offset_of_D3_17() { return static_cast<int32_t>(offsetof(TripleDESTransform_t4057757275, ___D3_17)); }
	inline DESTransform_t3186821195 * get_D3_17() const { return ___D3_17; }
	inline DESTransform_t3186821195 ** get_address_of_D3_17() { return &___D3_17; }
	inline void set_D3_17(DESTransform_t3186821195 * value)
	{
		___D3_17 = value;
		Il2CppCodeGenWriteBarrier((&___D3_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRIPLEDESTRANSFORM_T4057757275_H
#ifndef RSAPKCS1SHA1SIGNATUREDESCRIPTION_T1291656777_H
#define RSAPKCS1SHA1SIGNATUREDESCRIPTION_T1291656777_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSAPKCS1SHA1SignatureDescription
struct  RSAPKCS1SHA1SignatureDescription_t1291656777  : public SignatureDescription_t763271396
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSAPKCS1SHA1SIGNATUREDESCRIPTION_T1291656777_H
#ifndef SECURITYSAFECRITICALATTRIBUTE_T2540965085_H
#define SECURITYSAFECRITICALATTRIBUTE_T2540965085_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecuritySafeCriticalAttribute
struct  SecuritySafeCriticalAttribute_t2540965085  : public Attribute_t2825975485
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYSAFECRITICALATTRIBUTE_T2540965085_H
#ifndef ALLOWPARTIALLYTRUSTEDCALLERSATTRIBUTE_T2479300046_H
#define ALLOWPARTIALLYTRUSTEDCALLERSATTRIBUTE_T2479300046_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.AllowPartiallyTrustedCallersAttribute
struct  AllowPartiallyTrustedCallersAttribute_t2479300046  : public Attribute_t2825975485
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ALLOWPARTIALLYTRUSTEDCALLERSATTRIBUTE_T2479300046_H
#ifndef PRINCIPALPOLICY_T2786093285_H
#define PRINCIPALPOLICY_T2786093285_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Principal.PrincipalPolicy
struct  PrincipalPolicy_t2786093285 
{
public:
	// System.Int32 System.Security.Principal.PrincipalPolicy::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PrincipalPolicy_t2786093285, ___value___1)); }
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
#endif // PRINCIPALPOLICY_T2786093285_H
#ifndef WAITHANDLE_T756492389_H
#define WAITHANDLE_T756492389_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.WaitHandle
struct  WaitHandle_t756492389  : public MarshalByRefObject_t2301485505
{
public:
	// Microsoft.Win32.SafeHandles.SafeWaitHandle System.Threading.WaitHandle::safe_wait_handle
	SafeWaitHandle_t2554555006 * ___safe_wait_handle_2;
	// System.Boolean System.Threading.WaitHandle::disposed
	bool ___disposed_4;

public:
	inline static int32_t get_offset_of_safe_wait_handle_2() { return static_cast<int32_t>(offsetof(WaitHandle_t756492389, ___safe_wait_handle_2)); }
	inline SafeWaitHandle_t2554555006 * get_safe_wait_handle_2() const { return ___safe_wait_handle_2; }
	inline SafeWaitHandle_t2554555006 ** get_address_of_safe_wait_handle_2() { return &___safe_wait_handle_2; }
	inline void set_safe_wait_handle_2(SafeWaitHandle_t2554555006 * value)
	{
		___safe_wait_handle_2 = value;
		Il2CppCodeGenWriteBarrier((&___safe_wait_handle_2), value);
	}

	inline static int32_t get_offset_of_disposed_4() { return static_cast<int32_t>(offsetof(WaitHandle_t756492389, ___disposed_4)); }
	inline bool get_disposed_4() const { return ___disposed_4; }
	inline bool* get_address_of_disposed_4() { return &___disposed_4; }
	inline void set_disposed_4(bool value)
	{
		___disposed_4 = value;
	}
};

struct WaitHandle_t756492389_StaticFields
{
public:
	// System.IntPtr System.Threading.WaitHandle::InvalidHandle
	intptr_t ___InvalidHandle_3;

public:
	inline static int32_t get_offset_of_InvalidHandle_3() { return static_cast<int32_t>(offsetof(WaitHandle_t756492389_StaticFields, ___InvalidHandle_3)); }
	inline intptr_t get_InvalidHandle_3() const { return ___InvalidHandle_3; }
	inline intptr_t* get_address_of_InvalidHandle_3() { return &___InvalidHandle_3; }
	inline void set_InvalidHandle_3(intptr_t value)
	{
		___InvalidHandle_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAITHANDLE_T756492389_H
#ifndef ARGUMENTEXCEPTION_T3170582089_H
#define ARGUMENTEXCEPTION_T3170582089_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_t3170582089  : public SystemException_t2247450559
{
public:
	// System.String System.ArgumentException::param_name
	String_t* ___param_name_12;

public:
	inline static int32_t get_offset_of_param_name_12() { return static_cast<int32_t>(offsetof(ArgumentException_t3170582089, ___param_name_12)); }
	inline String_t* get_param_name_12() const { return ___param_name_12; }
	inline String_t** get_address_of_param_name_12() { return &___param_name_12; }
	inline void set_param_name_12(String_t* value)
	{
		___param_name_12 = value;
		Il2CppCodeGenWriteBarrier((&___param_name_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTEXCEPTION_T3170582089_H
#ifndef RUNTIMEDECLSECURITYENTRY_T1794386577_H
#define RUNTIMEDECLSECURITYENTRY_T1794386577_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.RuntimeDeclSecurityEntry
struct  RuntimeDeclSecurityEntry_t1794386577 
{
public:
	// System.IntPtr System.Security.RuntimeDeclSecurityEntry::blob
	intptr_t ___blob_0;
	// System.Int32 System.Security.RuntimeDeclSecurityEntry::size
	int32_t ___size_1;
	// System.Int32 System.Security.RuntimeDeclSecurityEntry::index
	int32_t ___index_2;

public:
	inline static int32_t get_offset_of_blob_0() { return static_cast<int32_t>(offsetof(RuntimeDeclSecurityEntry_t1794386577, ___blob_0)); }
	inline intptr_t get_blob_0() const { return ___blob_0; }
	inline intptr_t* get_address_of_blob_0() { return &___blob_0; }
	inline void set_blob_0(intptr_t value)
	{
		___blob_0 = value;
	}

	inline static int32_t get_offset_of_size_1() { return static_cast<int32_t>(offsetof(RuntimeDeclSecurityEntry_t1794386577, ___size_1)); }
	inline int32_t get_size_1() const { return ___size_1; }
	inline int32_t* get_address_of_size_1() { return &___size_1; }
	inline void set_size_1(int32_t value)
	{
		___size_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(RuntimeDeclSecurityEntry_t1794386577, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEDECLSECURITYENTRY_T1794386577_H
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
#ifndef SECURITYEXCEPTION_T2332365416_H
#define SECURITYEXCEPTION_T2332365416_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecurityException
struct  SecurityException_t2332365416  : public SystemException_t2247450559
{
public:
	// System.String System.Security.SecurityException::permissionState
	String_t* ___permissionState_11;
	// System.Type System.Security.SecurityException::permissionType
	Type_t * ___permissionType_12;
	// System.String System.Security.SecurityException::_granted
	String_t* ____granted_13;
	// System.String System.Security.SecurityException::_refused
	String_t* ____refused_14;
	// System.Object System.Security.SecurityException::_demanded
	RuntimeObject * ____demanded_15;
	// System.Security.IPermission System.Security.SecurityException::_firstperm
	RuntimeObject* ____firstperm_16;
	// System.Reflection.MethodInfo System.Security.SecurityException::_method
	MethodInfo_t * ____method_17;
	// System.Security.Policy.Evidence System.Security.SecurityException::_evidence
	Evidence_t1703590093 * ____evidence_18;

public:
	inline static int32_t get_offset_of_permissionState_11() { return static_cast<int32_t>(offsetof(SecurityException_t2332365416, ___permissionState_11)); }
	inline String_t* get_permissionState_11() const { return ___permissionState_11; }
	inline String_t** get_address_of_permissionState_11() { return &___permissionState_11; }
	inline void set_permissionState_11(String_t* value)
	{
		___permissionState_11 = value;
		Il2CppCodeGenWriteBarrier((&___permissionState_11), value);
	}

	inline static int32_t get_offset_of_permissionType_12() { return static_cast<int32_t>(offsetof(SecurityException_t2332365416, ___permissionType_12)); }
	inline Type_t * get_permissionType_12() const { return ___permissionType_12; }
	inline Type_t ** get_address_of_permissionType_12() { return &___permissionType_12; }
	inline void set_permissionType_12(Type_t * value)
	{
		___permissionType_12 = value;
		Il2CppCodeGenWriteBarrier((&___permissionType_12), value);
	}

	inline static int32_t get_offset_of__granted_13() { return static_cast<int32_t>(offsetof(SecurityException_t2332365416, ____granted_13)); }
	inline String_t* get__granted_13() const { return ____granted_13; }
	inline String_t** get_address_of__granted_13() { return &____granted_13; }
	inline void set__granted_13(String_t* value)
	{
		____granted_13 = value;
		Il2CppCodeGenWriteBarrier((&____granted_13), value);
	}

	inline static int32_t get_offset_of__refused_14() { return static_cast<int32_t>(offsetof(SecurityException_t2332365416, ____refused_14)); }
	inline String_t* get__refused_14() const { return ____refused_14; }
	inline String_t** get_address_of__refused_14() { return &____refused_14; }
	inline void set__refused_14(String_t* value)
	{
		____refused_14 = value;
		Il2CppCodeGenWriteBarrier((&____refused_14), value);
	}

	inline static int32_t get_offset_of__demanded_15() { return static_cast<int32_t>(offsetof(SecurityException_t2332365416, ____demanded_15)); }
	inline RuntimeObject * get__demanded_15() const { return ____demanded_15; }
	inline RuntimeObject ** get_address_of__demanded_15() { return &____demanded_15; }
	inline void set__demanded_15(RuntimeObject * value)
	{
		____demanded_15 = value;
		Il2CppCodeGenWriteBarrier((&____demanded_15), value);
	}

	inline static int32_t get_offset_of__firstperm_16() { return static_cast<int32_t>(offsetof(SecurityException_t2332365416, ____firstperm_16)); }
	inline RuntimeObject* get__firstperm_16() const { return ____firstperm_16; }
	inline RuntimeObject** get_address_of__firstperm_16() { return &____firstperm_16; }
	inline void set__firstperm_16(RuntimeObject* value)
	{
		____firstperm_16 = value;
		Il2CppCodeGenWriteBarrier((&____firstperm_16), value);
	}

	inline static int32_t get_offset_of__method_17() { return static_cast<int32_t>(offsetof(SecurityException_t2332365416, ____method_17)); }
	inline MethodInfo_t * get__method_17() const { return ____method_17; }
	inline MethodInfo_t ** get_address_of__method_17() { return &____method_17; }
	inline void set__method_17(MethodInfo_t * value)
	{
		____method_17 = value;
		Il2CppCodeGenWriteBarrier((&____method_17), value);
	}

	inline static int32_t get_offset_of__evidence_18() { return static_cast<int32_t>(offsetof(SecurityException_t2332365416, ____evidence_18)); }
	inline Evidence_t1703590093 * get__evidence_18() const { return ____evidence_18; }
	inline Evidence_t1703590093 ** get_address_of__evidence_18() { return &____evidence_18; }
	inline void set__evidence_18(Evidence_t1703590093 * value)
	{
		____evidence_18 = value;
		Il2CppCodeGenWriteBarrier((&____evidence_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYEXCEPTION_T2332365416_H
#ifndef SHA1CRYPTOSERVICEPROVIDER_T3800152076_H
#define SHA1CRYPTOSERVICEPROVIDER_T3800152076_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA1CryptoServiceProvider
struct  SHA1CryptoServiceProvider_t3800152076  : public SHA1_t344965996
{
public:
	// System.Security.Cryptography.SHA1Internal System.Security.Cryptography.SHA1CryptoServiceProvider::sha
	SHA1Internal_t3901366001 * ___sha_4;

public:
	inline static int32_t get_offset_of_sha_4() { return static_cast<int32_t>(offsetof(SHA1CryptoServiceProvider_t3800152076, ___sha_4)); }
	inline SHA1Internal_t3901366001 * get_sha_4() const { return ___sha_4; }
	inline SHA1Internal_t3901366001 ** get_address_of_sha_4() { return &___sha_4; }
	inline void set_sha_4(SHA1Internal_t3901366001 * value)
	{
		___sha_4 = value;
		Il2CppCodeGenWriteBarrier((&___sha_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA1CRYPTOSERVICEPROVIDER_T3800152076_H
#ifndef SHA1MANAGED_T1679719948_H
#define SHA1MANAGED_T1679719948_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA1Managed
struct  SHA1Managed_t1679719948  : public SHA1_t344965996
{
public:
	// System.Security.Cryptography.SHA1Internal System.Security.Cryptography.SHA1Managed::sha
	SHA1Internal_t3901366001 * ___sha_4;

public:
	inline static int32_t get_offset_of_sha_4() { return static_cast<int32_t>(offsetof(SHA1Managed_t1679719948, ___sha_4)); }
	inline SHA1Internal_t3901366001 * get_sha_4() const { return ___sha_4; }
	inline SHA1Internal_t3901366001 ** get_address_of_sha_4() { return &___sha_4; }
	inline void set_sha_4(SHA1Internal_t3901366001 * value)
	{
		___sha_4 = value;
		Il2CppCodeGenWriteBarrier((&___sha_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA1MANAGED_T1679719948_H
#ifndef SECURITYCRITICALSCOPE_T2202220421_H
#define SECURITYCRITICALSCOPE_T2202220421_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecurityCriticalScope
struct  SecurityCriticalScope_t2202220421 
{
public:
	// System.Int32 System.Security.SecurityCriticalScope::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SecurityCriticalScope_t2202220421, ___value___1)); }
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
#endif // SECURITYCRITICALSCOPE_T2202220421_H
#ifndef SHA256MANAGED_T119750231_H
#define SHA256MANAGED_T119750231_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA256Managed
struct  SHA256Managed_t119750231  : public SHA256_t3827380899
{
public:
	// System.UInt32[] System.Security.Cryptography.SHA256Managed::_H
	UInt32U5BU5D_t819860844* ____H_4;
	// System.UInt64 System.Security.Cryptography.SHA256Managed::count
	uint64_t ___count_5;
	// System.Byte[] System.Security.Cryptography.SHA256Managed::_ProcessingBuffer
	ByteU5BU5D_t250263739* ____ProcessingBuffer_6;
	// System.Int32 System.Security.Cryptography.SHA256Managed::_ProcessingBufferCount
	int32_t ____ProcessingBufferCount_7;
	// System.UInt32[] System.Security.Cryptography.SHA256Managed::buff
	UInt32U5BU5D_t819860844* ___buff_8;

public:
	inline static int32_t get_offset_of__H_4() { return static_cast<int32_t>(offsetof(SHA256Managed_t119750231, ____H_4)); }
	inline UInt32U5BU5D_t819860844* get__H_4() const { return ____H_4; }
	inline UInt32U5BU5D_t819860844** get_address_of__H_4() { return &____H_4; }
	inline void set__H_4(UInt32U5BU5D_t819860844* value)
	{
		____H_4 = value;
		Il2CppCodeGenWriteBarrier((&____H_4), value);
	}

	inline static int32_t get_offset_of_count_5() { return static_cast<int32_t>(offsetof(SHA256Managed_t119750231, ___count_5)); }
	inline uint64_t get_count_5() const { return ___count_5; }
	inline uint64_t* get_address_of_count_5() { return &___count_5; }
	inline void set_count_5(uint64_t value)
	{
		___count_5 = value;
	}

	inline static int32_t get_offset_of__ProcessingBuffer_6() { return static_cast<int32_t>(offsetof(SHA256Managed_t119750231, ____ProcessingBuffer_6)); }
	inline ByteU5BU5D_t250263739* get__ProcessingBuffer_6() const { return ____ProcessingBuffer_6; }
	inline ByteU5BU5D_t250263739** get_address_of__ProcessingBuffer_6() { return &____ProcessingBuffer_6; }
	inline void set__ProcessingBuffer_6(ByteU5BU5D_t250263739* value)
	{
		____ProcessingBuffer_6 = value;
		Il2CppCodeGenWriteBarrier((&____ProcessingBuffer_6), value);
	}

	inline static int32_t get_offset_of__ProcessingBufferCount_7() { return static_cast<int32_t>(offsetof(SHA256Managed_t119750231, ____ProcessingBufferCount_7)); }
	inline int32_t get__ProcessingBufferCount_7() const { return ____ProcessingBufferCount_7; }
	inline int32_t* get_address_of__ProcessingBufferCount_7() { return &____ProcessingBufferCount_7; }
	inline void set__ProcessingBufferCount_7(int32_t value)
	{
		____ProcessingBufferCount_7 = value;
	}

	inline static int32_t get_offset_of_buff_8() { return static_cast<int32_t>(offsetof(SHA256Managed_t119750231, ___buff_8)); }
	inline UInt32U5BU5D_t819860844* get_buff_8() const { return ___buff_8; }
	inline UInt32U5BU5D_t819860844** get_address_of_buff_8() { return &___buff_8; }
	inline void set_buff_8(UInt32U5BU5D_t819860844* value)
	{
		___buff_8 = value;
		Il2CppCodeGenWriteBarrier((&___buff_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA256MANAGED_T119750231_H
#ifndef WINDOWSACCOUNTTYPE_T2380903394_H
#define WINDOWSACCOUNTTYPE_T2380903394_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Principal.WindowsAccountType
struct  WindowsAccountType_t2380903394 
{
public:
	// System.Int32 System.Security.Principal.WindowsAccountType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(WindowsAccountType_t2380903394, ___value___1)); }
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
#endif // WINDOWSACCOUNTTYPE_T2380903394_H
#ifndef SHA384MANAGED_T2895677514_H
#define SHA384MANAGED_T2895677514_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA384Managed
struct  SHA384Managed_t2895677514  : public SHA384_t3997616894
{
public:
	// System.Byte[] System.Security.Cryptography.SHA384Managed::xBuf
	ByteU5BU5D_t250263739* ___xBuf_4;
	// System.Int32 System.Security.Cryptography.SHA384Managed::xBufOff
	int32_t ___xBufOff_5;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::byteCount1
	uint64_t ___byteCount1_6;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::byteCount2
	uint64_t ___byteCount2_7;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::H1
	uint64_t ___H1_8;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::H2
	uint64_t ___H2_9;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::H3
	uint64_t ___H3_10;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::H4
	uint64_t ___H4_11;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::H5
	uint64_t ___H5_12;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::H6
	uint64_t ___H6_13;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::H7
	uint64_t ___H7_14;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::H8
	uint64_t ___H8_15;
	// System.UInt64[] System.Security.Cryptography.SHA384Managed::W
	UInt64U5BU5D_t2319310096* ___W_16;
	// System.Int32 System.Security.Cryptography.SHA384Managed::wOff
	int32_t ___wOff_17;

public:
	inline static int32_t get_offset_of_xBuf_4() { return static_cast<int32_t>(offsetof(SHA384Managed_t2895677514, ___xBuf_4)); }
	inline ByteU5BU5D_t250263739* get_xBuf_4() const { return ___xBuf_4; }
	inline ByteU5BU5D_t250263739** get_address_of_xBuf_4() { return &___xBuf_4; }
	inline void set_xBuf_4(ByteU5BU5D_t250263739* value)
	{
		___xBuf_4 = value;
		Il2CppCodeGenWriteBarrier((&___xBuf_4), value);
	}

	inline static int32_t get_offset_of_xBufOff_5() { return static_cast<int32_t>(offsetof(SHA384Managed_t2895677514, ___xBufOff_5)); }
	inline int32_t get_xBufOff_5() const { return ___xBufOff_5; }
	inline int32_t* get_address_of_xBufOff_5() { return &___xBufOff_5; }
	inline void set_xBufOff_5(int32_t value)
	{
		___xBufOff_5 = value;
	}

	inline static int32_t get_offset_of_byteCount1_6() { return static_cast<int32_t>(offsetof(SHA384Managed_t2895677514, ___byteCount1_6)); }
	inline uint64_t get_byteCount1_6() const { return ___byteCount1_6; }
	inline uint64_t* get_address_of_byteCount1_6() { return &___byteCount1_6; }
	inline void set_byteCount1_6(uint64_t value)
	{
		___byteCount1_6 = value;
	}

	inline static int32_t get_offset_of_byteCount2_7() { return static_cast<int32_t>(offsetof(SHA384Managed_t2895677514, ___byteCount2_7)); }
	inline uint64_t get_byteCount2_7() const { return ___byteCount2_7; }
	inline uint64_t* get_address_of_byteCount2_7() { return &___byteCount2_7; }
	inline void set_byteCount2_7(uint64_t value)
	{
		___byteCount2_7 = value;
	}

	inline static int32_t get_offset_of_H1_8() { return static_cast<int32_t>(offsetof(SHA384Managed_t2895677514, ___H1_8)); }
	inline uint64_t get_H1_8() const { return ___H1_8; }
	inline uint64_t* get_address_of_H1_8() { return &___H1_8; }
	inline void set_H1_8(uint64_t value)
	{
		___H1_8 = value;
	}

	inline static int32_t get_offset_of_H2_9() { return static_cast<int32_t>(offsetof(SHA384Managed_t2895677514, ___H2_9)); }
	inline uint64_t get_H2_9() const { return ___H2_9; }
	inline uint64_t* get_address_of_H2_9() { return &___H2_9; }
	inline void set_H2_9(uint64_t value)
	{
		___H2_9 = value;
	}

	inline static int32_t get_offset_of_H3_10() { return static_cast<int32_t>(offsetof(SHA384Managed_t2895677514, ___H3_10)); }
	inline uint64_t get_H3_10() const { return ___H3_10; }
	inline uint64_t* get_address_of_H3_10() { return &___H3_10; }
	inline void set_H3_10(uint64_t value)
	{
		___H3_10 = value;
	}

	inline static int32_t get_offset_of_H4_11() { return static_cast<int32_t>(offsetof(SHA384Managed_t2895677514, ___H4_11)); }
	inline uint64_t get_H4_11() const { return ___H4_11; }
	inline uint64_t* get_address_of_H4_11() { return &___H4_11; }
	inline void set_H4_11(uint64_t value)
	{
		___H4_11 = value;
	}

	inline static int32_t get_offset_of_H5_12() { return static_cast<int32_t>(offsetof(SHA384Managed_t2895677514, ___H5_12)); }
	inline uint64_t get_H5_12() const { return ___H5_12; }
	inline uint64_t* get_address_of_H5_12() { return &___H5_12; }
	inline void set_H5_12(uint64_t value)
	{
		___H5_12 = value;
	}

	inline static int32_t get_offset_of_H6_13() { return static_cast<int32_t>(offsetof(SHA384Managed_t2895677514, ___H6_13)); }
	inline uint64_t get_H6_13() const { return ___H6_13; }
	inline uint64_t* get_address_of_H6_13() { return &___H6_13; }
	inline void set_H6_13(uint64_t value)
	{
		___H6_13 = value;
	}

	inline static int32_t get_offset_of_H7_14() { return static_cast<int32_t>(offsetof(SHA384Managed_t2895677514, ___H7_14)); }
	inline uint64_t get_H7_14() const { return ___H7_14; }
	inline uint64_t* get_address_of_H7_14() { return &___H7_14; }
	inline void set_H7_14(uint64_t value)
	{
		___H7_14 = value;
	}

	inline static int32_t get_offset_of_H8_15() { return static_cast<int32_t>(offsetof(SHA384Managed_t2895677514, ___H8_15)); }
	inline uint64_t get_H8_15() const { return ___H8_15; }
	inline uint64_t* get_address_of_H8_15() { return &___H8_15; }
	inline void set_H8_15(uint64_t value)
	{
		___H8_15 = value;
	}

	inline static int32_t get_offset_of_W_16() { return static_cast<int32_t>(offsetof(SHA384Managed_t2895677514, ___W_16)); }
	inline UInt64U5BU5D_t2319310096* get_W_16() const { return ___W_16; }
	inline UInt64U5BU5D_t2319310096** get_address_of_W_16() { return &___W_16; }
	inline void set_W_16(UInt64U5BU5D_t2319310096* value)
	{
		___W_16 = value;
		Il2CppCodeGenWriteBarrier((&___W_16), value);
	}

	inline static int32_t get_offset_of_wOff_17() { return static_cast<int32_t>(offsetof(SHA384Managed_t2895677514, ___wOff_17)); }
	inline int32_t get_wOff_17() const { return ___wOff_17; }
	inline int32_t* get_address_of_wOff_17() { return &___wOff_17; }
	inline void set_wOff_17(int32_t value)
	{
		___wOff_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA384MANAGED_T2895677514_H
#ifndef SECURITYCONTEXT_T134910927_H
#define SECURITYCONTEXT_T134910927_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecurityContext
struct  SecurityContext_t134910927  : public RuntimeObject
{
public:
	// System.Boolean System.Security.SecurityContext::_capture
	bool ____capture_0;
	// System.IntPtr System.Security.SecurityContext::_winid
	intptr_t ____winid_1;
	// System.Threading.CompressedStack System.Security.SecurityContext::_stack
	CompressedStack_t4197464022 * ____stack_2;
	// System.Boolean System.Security.SecurityContext::_suppressFlow
	bool ____suppressFlow_3;

public:
	inline static int32_t get_offset_of__capture_0() { return static_cast<int32_t>(offsetof(SecurityContext_t134910927, ____capture_0)); }
	inline bool get__capture_0() const { return ____capture_0; }
	inline bool* get_address_of__capture_0() { return &____capture_0; }
	inline void set__capture_0(bool value)
	{
		____capture_0 = value;
	}

	inline static int32_t get_offset_of__winid_1() { return static_cast<int32_t>(offsetof(SecurityContext_t134910927, ____winid_1)); }
	inline intptr_t get__winid_1() const { return ____winid_1; }
	inline intptr_t* get_address_of__winid_1() { return &____winid_1; }
	inline void set__winid_1(intptr_t value)
	{
		____winid_1 = value;
	}

	inline static int32_t get_offset_of__stack_2() { return static_cast<int32_t>(offsetof(SecurityContext_t134910927, ____stack_2)); }
	inline CompressedStack_t4197464022 * get__stack_2() const { return ____stack_2; }
	inline CompressedStack_t4197464022 ** get_address_of__stack_2() { return &____stack_2; }
	inline void set__stack_2(CompressedStack_t4197464022 * value)
	{
		____stack_2 = value;
		Il2CppCodeGenWriteBarrier((&____stack_2), value);
	}

	inline static int32_t get_offset_of__suppressFlow_3() { return static_cast<int32_t>(offsetof(SecurityContext_t134910927, ____suppressFlow_3)); }
	inline bool get__suppressFlow_3() const { return ____suppressFlow_3; }
	inline bool* get_address_of__suppressFlow_3() { return &____suppressFlow_3; }
	inline void set__suppressFlow_3(bool value)
	{
		____suppressFlow_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYCONTEXT_T134910927_H
#ifndef RSACRYPTOSERVICEPROVIDER_T2322236861_H
#define RSACRYPTOSERVICEPROVIDER_T2322236861_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSACryptoServiceProvider
struct  RSACryptoServiceProvider_t2322236861  : public RSA_t76874314
{
public:
	// Mono.Security.Cryptography.KeyPairPersistence System.Security.Cryptography.RSACryptoServiceProvider::store
	KeyPairPersistence_t4020066663 * ___store_2;
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::persistKey
	bool ___persistKey_3;
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::persisted
	bool ___persisted_4;
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::privateKeyExportable
	bool ___privateKeyExportable_5;
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::m_disposed
	bool ___m_disposed_6;
	// Mono.Security.Cryptography.RSAManaged System.Security.Cryptography.RSACryptoServiceProvider::rsa
	RSAManaged_t861136104 * ___rsa_7;

public:
	inline static int32_t get_offset_of_store_2() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_t2322236861, ___store_2)); }
	inline KeyPairPersistence_t4020066663 * get_store_2() const { return ___store_2; }
	inline KeyPairPersistence_t4020066663 ** get_address_of_store_2() { return &___store_2; }
	inline void set_store_2(KeyPairPersistence_t4020066663 * value)
	{
		___store_2 = value;
		Il2CppCodeGenWriteBarrier((&___store_2), value);
	}

	inline static int32_t get_offset_of_persistKey_3() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_t2322236861, ___persistKey_3)); }
	inline bool get_persistKey_3() const { return ___persistKey_3; }
	inline bool* get_address_of_persistKey_3() { return &___persistKey_3; }
	inline void set_persistKey_3(bool value)
	{
		___persistKey_3 = value;
	}

	inline static int32_t get_offset_of_persisted_4() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_t2322236861, ___persisted_4)); }
	inline bool get_persisted_4() const { return ___persisted_4; }
	inline bool* get_address_of_persisted_4() { return &___persisted_4; }
	inline void set_persisted_4(bool value)
	{
		___persisted_4 = value;
	}

	inline static int32_t get_offset_of_privateKeyExportable_5() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_t2322236861, ___privateKeyExportable_5)); }
	inline bool get_privateKeyExportable_5() const { return ___privateKeyExportable_5; }
	inline bool* get_address_of_privateKeyExportable_5() { return &___privateKeyExportable_5; }
	inline void set_privateKeyExportable_5(bool value)
	{
		___privateKeyExportable_5 = value;
	}

	inline static int32_t get_offset_of_m_disposed_6() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_t2322236861, ___m_disposed_6)); }
	inline bool get_m_disposed_6() const { return ___m_disposed_6; }
	inline bool* get_address_of_m_disposed_6() { return &___m_disposed_6; }
	inline void set_m_disposed_6(bool value)
	{
		___m_disposed_6 = value;
	}

	inline static int32_t get_offset_of_rsa_7() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_t2322236861, ___rsa_7)); }
	inline RSAManaged_t861136104 * get_rsa_7() const { return ___rsa_7; }
	inline RSAManaged_t861136104 ** get_address_of_rsa_7() { return &___rsa_7; }
	inline void set_rsa_7(RSAManaged_t861136104 * value)
	{
		___rsa_7 = value;
		Il2CppCodeGenWriteBarrier((&___rsa_7), value);
	}
};

struct RSACryptoServiceProvider_t2322236861_StaticFields
{
public:
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::useMachineKeyStore
	bool ___useMachineKeyStore_8;

public:
	inline static int32_t get_offset_of_useMachineKeyStore_8() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_t2322236861_StaticFields, ___useMachineKeyStore_8)); }
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
#endif // RSACRYPTOSERVICEPROVIDER_T2322236861_H
#ifndef SHA512MANAGED_T3097156491_H
#define SHA512MANAGED_T3097156491_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA512Managed
struct  SHA512Managed_t3097156491  : public SHA512_t1488557438
{
public:
	// System.Byte[] System.Security.Cryptography.SHA512Managed::xBuf
	ByteU5BU5D_t250263739* ___xBuf_4;
	// System.Int32 System.Security.Cryptography.SHA512Managed::xBufOff
	int32_t ___xBufOff_5;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::byteCount1
	uint64_t ___byteCount1_6;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::byteCount2
	uint64_t ___byteCount2_7;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::H1
	uint64_t ___H1_8;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::H2
	uint64_t ___H2_9;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::H3
	uint64_t ___H3_10;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::H4
	uint64_t ___H4_11;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::H5
	uint64_t ___H5_12;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::H6
	uint64_t ___H6_13;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::H7
	uint64_t ___H7_14;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::H8
	uint64_t ___H8_15;
	// System.UInt64[] System.Security.Cryptography.SHA512Managed::W
	UInt64U5BU5D_t2319310096* ___W_16;
	// System.Int32 System.Security.Cryptography.SHA512Managed::wOff
	int32_t ___wOff_17;

public:
	inline static int32_t get_offset_of_xBuf_4() { return static_cast<int32_t>(offsetof(SHA512Managed_t3097156491, ___xBuf_4)); }
	inline ByteU5BU5D_t250263739* get_xBuf_4() const { return ___xBuf_4; }
	inline ByteU5BU5D_t250263739** get_address_of_xBuf_4() { return &___xBuf_4; }
	inline void set_xBuf_4(ByteU5BU5D_t250263739* value)
	{
		___xBuf_4 = value;
		Il2CppCodeGenWriteBarrier((&___xBuf_4), value);
	}

	inline static int32_t get_offset_of_xBufOff_5() { return static_cast<int32_t>(offsetof(SHA512Managed_t3097156491, ___xBufOff_5)); }
	inline int32_t get_xBufOff_5() const { return ___xBufOff_5; }
	inline int32_t* get_address_of_xBufOff_5() { return &___xBufOff_5; }
	inline void set_xBufOff_5(int32_t value)
	{
		___xBufOff_5 = value;
	}

	inline static int32_t get_offset_of_byteCount1_6() { return static_cast<int32_t>(offsetof(SHA512Managed_t3097156491, ___byteCount1_6)); }
	inline uint64_t get_byteCount1_6() const { return ___byteCount1_6; }
	inline uint64_t* get_address_of_byteCount1_6() { return &___byteCount1_6; }
	inline void set_byteCount1_6(uint64_t value)
	{
		___byteCount1_6 = value;
	}

	inline static int32_t get_offset_of_byteCount2_7() { return static_cast<int32_t>(offsetof(SHA512Managed_t3097156491, ___byteCount2_7)); }
	inline uint64_t get_byteCount2_7() const { return ___byteCount2_7; }
	inline uint64_t* get_address_of_byteCount2_7() { return &___byteCount2_7; }
	inline void set_byteCount2_7(uint64_t value)
	{
		___byteCount2_7 = value;
	}

	inline static int32_t get_offset_of_H1_8() { return static_cast<int32_t>(offsetof(SHA512Managed_t3097156491, ___H1_8)); }
	inline uint64_t get_H1_8() const { return ___H1_8; }
	inline uint64_t* get_address_of_H1_8() { return &___H1_8; }
	inline void set_H1_8(uint64_t value)
	{
		___H1_8 = value;
	}

	inline static int32_t get_offset_of_H2_9() { return static_cast<int32_t>(offsetof(SHA512Managed_t3097156491, ___H2_9)); }
	inline uint64_t get_H2_9() const { return ___H2_9; }
	inline uint64_t* get_address_of_H2_9() { return &___H2_9; }
	inline void set_H2_9(uint64_t value)
	{
		___H2_9 = value;
	}

	inline static int32_t get_offset_of_H3_10() { return static_cast<int32_t>(offsetof(SHA512Managed_t3097156491, ___H3_10)); }
	inline uint64_t get_H3_10() const { return ___H3_10; }
	inline uint64_t* get_address_of_H3_10() { return &___H3_10; }
	inline void set_H3_10(uint64_t value)
	{
		___H3_10 = value;
	}

	inline static int32_t get_offset_of_H4_11() { return static_cast<int32_t>(offsetof(SHA512Managed_t3097156491, ___H4_11)); }
	inline uint64_t get_H4_11() const { return ___H4_11; }
	inline uint64_t* get_address_of_H4_11() { return &___H4_11; }
	inline void set_H4_11(uint64_t value)
	{
		___H4_11 = value;
	}

	inline static int32_t get_offset_of_H5_12() { return static_cast<int32_t>(offsetof(SHA512Managed_t3097156491, ___H5_12)); }
	inline uint64_t get_H5_12() const { return ___H5_12; }
	inline uint64_t* get_address_of_H5_12() { return &___H5_12; }
	inline void set_H5_12(uint64_t value)
	{
		___H5_12 = value;
	}

	inline static int32_t get_offset_of_H6_13() { return static_cast<int32_t>(offsetof(SHA512Managed_t3097156491, ___H6_13)); }
	inline uint64_t get_H6_13() const { return ___H6_13; }
	inline uint64_t* get_address_of_H6_13() { return &___H6_13; }
	inline void set_H6_13(uint64_t value)
	{
		___H6_13 = value;
	}

	inline static int32_t get_offset_of_H7_14() { return static_cast<int32_t>(offsetof(SHA512Managed_t3097156491, ___H7_14)); }
	inline uint64_t get_H7_14() const { return ___H7_14; }
	inline uint64_t* get_address_of_H7_14() { return &___H7_14; }
	inline void set_H7_14(uint64_t value)
	{
		___H7_14 = value;
	}

	inline static int32_t get_offset_of_H8_15() { return static_cast<int32_t>(offsetof(SHA512Managed_t3097156491, ___H8_15)); }
	inline uint64_t get_H8_15() const { return ___H8_15; }
	inline uint64_t* get_address_of_H8_15() { return &___H8_15; }
	inline void set_H8_15(uint64_t value)
	{
		___H8_15 = value;
	}

	inline static int32_t get_offset_of_W_16() { return static_cast<int32_t>(offsetof(SHA512Managed_t3097156491, ___W_16)); }
	inline UInt64U5BU5D_t2319310096* get_W_16() const { return ___W_16; }
	inline UInt64U5BU5D_t2319310096** get_address_of_W_16() { return &___W_16; }
	inline void set_W_16(UInt64U5BU5D_t2319310096* value)
	{
		___W_16 = value;
		Il2CppCodeGenWriteBarrier((&___W_16), value);
	}

	inline static int32_t get_offset_of_wOff_17() { return static_cast<int32_t>(offsetof(SHA512Managed_t3097156491, ___wOff_17)); }
	inline int32_t get_wOff_17() const { return ___wOff_17; }
	inline int32_t* get_address_of_wOff_17() { return &___wOff_17; }
	inline void set_wOff_17(int32_t value)
	{
		___wOff_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA512MANAGED_T3097156491_H
#ifndef SECURITYPERMISSIONFLAG_T1677324112_H
#define SECURITYPERMISSIONFLAG_T1677324112_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.SecurityPermissionFlag
struct  SecurityPermissionFlag_t1677324112 
{
public:
	// System.Int32 System.Security.Permissions.SecurityPermissionFlag::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SecurityPermissionFlag_t1677324112, ___value___1)); }
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
#endif // SECURITYPERMISSIONFLAG_T1677324112_H
#ifndef SECURITYACTION_T780845443_H
#define SECURITYACTION_T780845443_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.SecurityAction
struct  SecurityAction_t780845443 
{
public:
	// System.Int32 System.Security.Permissions.SecurityAction::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SecurityAction_t780845443, ___value___1)); }
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
#endif // SECURITYACTION_T780845443_H
#ifndef CODEACCESSSECURITYATTRIBUTE_T298520354_H
#define CODEACCESSSECURITYATTRIBUTE_T298520354_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.CodeAccessSecurityAttribute
struct  CodeAccessSecurityAttribute_t298520354  : public SecurityAttribute_t3975255812
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CODEACCESSSECURITYATTRIBUTE_T298520354_H
#ifndef PERMISSIONSTATE_T3185432566_H
#define PERMISSIONSTATE_T3185432566_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.PermissionState
struct  PermissionState_t3185432566 
{
public:
	// System.Int32 System.Security.Permissions.PermissionState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PermissionState_t3185432566, ___value___1)); }
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
#endif // PERMISSIONSTATE_T3185432566_H
#ifndef EVENTRESETMODE_T2677453215_H
#define EVENTRESETMODE_T2677453215_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.EventResetMode
struct  EventResetMode_t2677453215 
{
public:
	// System.Int32 System.Threading.EventResetMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(EventResetMode_t2677453215, ___value___1)); }
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
#endif // EVENTRESETMODE_T2677453215_H
#ifndef SECURITYPERMISSIONATTRIBUTE_T1613035566_H
#define SECURITYPERMISSIONATTRIBUTE_T1613035566_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.SecurityPermissionAttribute
struct  SecurityPermissionAttribute_t1613035566  : public CodeAccessSecurityAttribute_t298520354
{
public:
	// System.Security.Permissions.SecurityPermissionFlag System.Security.Permissions.SecurityPermissionAttribute::m_Flags
	int32_t ___m_Flags_0;

public:
	inline static int32_t get_offset_of_m_Flags_0() { return static_cast<int32_t>(offsetof(SecurityPermissionAttribute_t1613035566, ___m_Flags_0)); }
	inline int32_t get_m_Flags_0() const { return ___m_Flags_0; }
	inline int32_t* get_address_of_m_Flags_0() { return &___m_Flags_0; }
	inline void set_m_Flags_0(int32_t value)
	{
		___m_Flags_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYPERMISSIONATTRIBUTE_T1613035566_H
#ifndef EVENTWAITHANDLE_T477210530_H
#define EVENTWAITHANDLE_T477210530_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.EventWaitHandle
struct  EventWaitHandle_t477210530  : public WaitHandle_t756492389
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTWAITHANDLE_T477210530_H
#ifndef SECURITYPERMISSION_T2282903104_H
#define SECURITYPERMISSION_T2282903104_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.SecurityPermission
struct  SecurityPermission_t2282903104  : public CodeAccessPermission_t4144283223
{
public:
	// System.Security.Permissions.SecurityPermissionFlag System.Security.Permissions.SecurityPermission::flags
	int32_t ___flags_0;

public:
	inline static int32_t get_offset_of_flags_0() { return static_cast<int32_t>(offsetof(SecurityPermission_t2282903104, ___flags_0)); }
	inline int32_t get_flags_0() const { return ___flags_0; }
	inline int32_t* get_address_of_flags_0() { return &___flags_0; }
	inline void set_flags_0(int32_t value)
	{
		___flags_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYPERMISSION_T2282903104_H
#ifndef RUNTIMESECURITYFRAME_T1227625594_H
#define RUNTIMESECURITYFRAME_T1227625594_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.RuntimeSecurityFrame
struct  RuntimeSecurityFrame_t1227625594  : public RuntimeObject
{
public:
	// System.AppDomain System.Security.RuntimeSecurityFrame::domain
	AppDomain_t398665589 * ___domain_0;
	// System.Reflection.MethodInfo System.Security.RuntimeSecurityFrame::method
	MethodInfo_t * ___method_1;
	// System.Security.RuntimeDeclSecurityEntry System.Security.RuntimeSecurityFrame::assert
	RuntimeDeclSecurityEntry_t1794386577  ___assert_2;
	// System.Security.RuntimeDeclSecurityEntry System.Security.RuntimeSecurityFrame::deny
	RuntimeDeclSecurityEntry_t1794386577  ___deny_3;
	// System.Security.RuntimeDeclSecurityEntry System.Security.RuntimeSecurityFrame::permitonly
	RuntimeDeclSecurityEntry_t1794386577  ___permitonly_4;

public:
	inline static int32_t get_offset_of_domain_0() { return static_cast<int32_t>(offsetof(RuntimeSecurityFrame_t1227625594, ___domain_0)); }
	inline AppDomain_t398665589 * get_domain_0() const { return ___domain_0; }
	inline AppDomain_t398665589 ** get_address_of_domain_0() { return &___domain_0; }
	inline void set_domain_0(AppDomain_t398665589 * value)
	{
		___domain_0 = value;
		Il2CppCodeGenWriteBarrier((&___domain_0), value);
	}

	inline static int32_t get_offset_of_method_1() { return static_cast<int32_t>(offsetof(RuntimeSecurityFrame_t1227625594, ___method_1)); }
	inline MethodInfo_t * get_method_1() const { return ___method_1; }
	inline MethodInfo_t ** get_address_of_method_1() { return &___method_1; }
	inline void set_method_1(MethodInfo_t * value)
	{
		___method_1 = value;
		Il2CppCodeGenWriteBarrier((&___method_1), value);
	}

	inline static int32_t get_offset_of_assert_2() { return static_cast<int32_t>(offsetof(RuntimeSecurityFrame_t1227625594, ___assert_2)); }
	inline RuntimeDeclSecurityEntry_t1794386577  get_assert_2() const { return ___assert_2; }
	inline RuntimeDeclSecurityEntry_t1794386577 * get_address_of_assert_2() { return &___assert_2; }
	inline void set_assert_2(RuntimeDeclSecurityEntry_t1794386577  value)
	{
		___assert_2 = value;
	}

	inline static int32_t get_offset_of_deny_3() { return static_cast<int32_t>(offsetof(RuntimeSecurityFrame_t1227625594, ___deny_3)); }
	inline RuntimeDeclSecurityEntry_t1794386577  get_deny_3() const { return ___deny_3; }
	inline RuntimeDeclSecurityEntry_t1794386577 * get_address_of_deny_3() { return &___deny_3; }
	inline void set_deny_3(RuntimeDeclSecurityEntry_t1794386577  value)
	{
		___deny_3 = value;
	}

	inline static int32_t get_offset_of_permitonly_4() { return static_cast<int32_t>(offsetof(RuntimeSecurityFrame_t1227625594, ___permitonly_4)); }
	inline RuntimeDeclSecurityEntry_t1794386577  get_permitonly_4() const { return ___permitonly_4; }
	inline RuntimeDeclSecurityEntry_t1794386577 * get_address_of_permitonly_4() { return &___permitonly_4; }
	inline void set_permitonly_4(RuntimeDeclSecurityEntry_t1794386577  value)
	{
		___permitonly_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMESECURITYFRAME_T1227625594_H
#ifndef DECODERFALLBACKEXCEPTION_T4260190123_H
#define DECODERFALLBACKEXCEPTION_T4260190123_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.DecoderFallbackException
struct  DecoderFallbackException_t4260190123  : public ArgumentException_t3170582089
{
public:
	// System.Byte[] System.Text.DecoderFallbackException::bytes_unknown
	ByteU5BU5D_t250263739* ___bytes_unknown_13;
	// System.Int32 System.Text.DecoderFallbackException::index
	int32_t ___index_14;

public:
	inline static int32_t get_offset_of_bytes_unknown_13() { return static_cast<int32_t>(offsetof(DecoderFallbackException_t4260190123, ___bytes_unknown_13)); }
	inline ByteU5BU5D_t250263739* get_bytes_unknown_13() const { return ___bytes_unknown_13; }
	inline ByteU5BU5D_t250263739** get_address_of_bytes_unknown_13() { return &___bytes_unknown_13; }
	inline void set_bytes_unknown_13(ByteU5BU5D_t250263739* value)
	{
		___bytes_unknown_13 = value;
		Il2CppCodeGenWriteBarrier((&___bytes_unknown_13), value);
	}

	inline static int32_t get_offset_of_index_14() { return static_cast<int32_t>(offsetof(DecoderFallbackException_t4260190123, ___index_14)); }
	inline int32_t get_index_14() const { return ___index_14; }
	inline int32_t* get_address_of_index_14() { return &___index_14; }
	inline void set_index_14(int32_t value)
	{
		___index_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODERFALLBACKEXCEPTION_T4260190123_H
#ifndef ENCODERFALLBACKEXCEPTION_T2907061470_H
#define ENCODERFALLBACKEXCEPTION_T2907061470_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.EncoderFallbackException
struct  EncoderFallbackException_t2907061470  : public ArgumentException_t3170582089
{
public:
	// System.Char System.Text.EncoderFallbackException::char_unknown
	Il2CppChar ___char_unknown_13;
	// System.Char System.Text.EncoderFallbackException::char_unknown_high
	Il2CppChar ___char_unknown_high_14;
	// System.Char System.Text.EncoderFallbackException::char_unknown_low
	Il2CppChar ___char_unknown_low_15;
	// System.Int32 System.Text.EncoderFallbackException::index
	int32_t ___index_16;

public:
	inline static int32_t get_offset_of_char_unknown_13() { return static_cast<int32_t>(offsetof(EncoderFallbackException_t2907061470, ___char_unknown_13)); }
	inline Il2CppChar get_char_unknown_13() const { return ___char_unknown_13; }
	inline Il2CppChar* get_address_of_char_unknown_13() { return &___char_unknown_13; }
	inline void set_char_unknown_13(Il2CppChar value)
	{
		___char_unknown_13 = value;
	}

	inline static int32_t get_offset_of_char_unknown_high_14() { return static_cast<int32_t>(offsetof(EncoderFallbackException_t2907061470, ___char_unknown_high_14)); }
	inline Il2CppChar get_char_unknown_high_14() const { return ___char_unknown_high_14; }
	inline Il2CppChar* get_address_of_char_unknown_high_14() { return &___char_unknown_high_14; }
	inline void set_char_unknown_high_14(Il2CppChar value)
	{
		___char_unknown_high_14 = value;
	}

	inline static int32_t get_offset_of_char_unknown_low_15() { return static_cast<int32_t>(offsetof(EncoderFallbackException_t2907061470, ___char_unknown_low_15)); }
	inline Il2CppChar get_char_unknown_low_15() const { return ___char_unknown_low_15; }
	inline Il2CppChar* get_address_of_char_unknown_low_15() { return &___char_unknown_low_15; }
	inline void set_char_unknown_low_15(Il2CppChar value)
	{
		___char_unknown_low_15 = value;
	}

	inline static int32_t get_offset_of_index_16() { return static_cast<int32_t>(offsetof(EncoderFallbackException_t2907061470, ___index_16)); }
	inline int32_t get_index_16() const { return ___index_16; }
	inline int32_t* get_address_of_index_16() { return &___index_16; }
	inline void set_index_16(int32_t value)
	{
		___index_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODERFALLBACKEXCEPTION_T2907061470_H
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
#ifndef WINDOWSIDENTITY_T2991741821_H
#define WINDOWSIDENTITY_T2991741821_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Principal.WindowsIdentity
struct  WindowsIdentity_t2991741821  : public RuntimeObject
{
public:
	// System.IntPtr System.Security.Principal.WindowsIdentity::_token
	intptr_t ____token_0;
	// System.String System.Security.Principal.WindowsIdentity::_type
	String_t* ____type_1;
	// System.Security.Principal.WindowsAccountType System.Security.Principal.WindowsIdentity::_account
	int32_t ____account_2;
	// System.Boolean System.Security.Principal.WindowsIdentity::_authenticated
	bool ____authenticated_3;
	// System.String System.Security.Principal.WindowsIdentity::_name
	String_t* ____name_4;
	// System.Runtime.Serialization.SerializationInfo System.Security.Principal.WindowsIdentity::_info
	SerializationInfo_t1689471073 * ____info_5;

public:
	inline static int32_t get_offset_of__token_0() { return static_cast<int32_t>(offsetof(WindowsIdentity_t2991741821, ____token_0)); }
	inline intptr_t get__token_0() const { return ____token_0; }
	inline intptr_t* get_address_of__token_0() { return &____token_0; }
	inline void set__token_0(intptr_t value)
	{
		____token_0 = value;
	}

	inline static int32_t get_offset_of__type_1() { return static_cast<int32_t>(offsetof(WindowsIdentity_t2991741821, ____type_1)); }
	inline String_t* get__type_1() const { return ____type_1; }
	inline String_t** get_address_of__type_1() { return &____type_1; }
	inline void set__type_1(String_t* value)
	{
		____type_1 = value;
		Il2CppCodeGenWriteBarrier((&____type_1), value);
	}

	inline static int32_t get_offset_of__account_2() { return static_cast<int32_t>(offsetof(WindowsIdentity_t2991741821, ____account_2)); }
	inline int32_t get__account_2() const { return ____account_2; }
	inline int32_t* get_address_of__account_2() { return &____account_2; }
	inline void set__account_2(int32_t value)
	{
		____account_2 = value;
	}

	inline static int32_t get_offset_of__authenticated_3() { return static_cast<int32_t>(offsetof(WindowsIdentity_t2991741821, ____authenticated_3)); }
	inline bool get__authenticated_3() const { return ____authenticated_3; }
	inline bool* get_address_of__authenticated_3() { return &____authenticated_3; }
	inline void set__authenticated_3(bool value)
	{
		____authenticated_3 = value;
	}

	inline static int32_t get_offset_of__name_4() { return static_cast<int32_t>(offsetof(WindowsIdentity_t2991741821, ____name_4)); }
	inline String_t* get__name_4() const { return ____name_4; }
	inline String_t** get_address_of__name_4() { return &____name_4; }
	inline void set__name_4(String_t* value)
	{
		____name_4 = value;
		Il2CppCodeGenWriteBarrier((&____name_4), value);
	}

	inline static int32_t get_offset_of__info_5() { return static_cast<int32_t>(offsetof(WindowsIdentity_t2991741821, ____info_5)); }
	inline SerializationInfo_t1689471073 * get__info_5() const { return ____info_5; }
	inline SerializationInfo_t1689471073 ** get_address_of__info_5() { return &____info_5; }
	inline void set__info_5(SerializationInfo_t1689471073 * value)
	{
		____info_5 = value;
		Il2CppCodeGenWriteBarrier((&____info_5), value);
	}
};

struct WindowsIdentity_t2991741821_StaticFields
{
public:
	// System.IntPtr System.Security.Principal.WindowsIdentity::invalidWindows
	intptr_t ___invalidWindows_6;

public:
	inline static int32_t get_offset_of_invalidWindows_6() { return static_cast<int32_t>(offsetof(WindowsIdentity_t2991741821_StaticFields, ___invalidWindows_6)); }
	inline intptr_t get_invalidWindows_6() const { return ___invalidWindows_6; }
	inline intptr_t* get_address_of_invalidWindows_6() { return &___invalidWindows_6; }
	inline void set_invalidWindows_6(intptr_t value)
	{
		___invalidWindows_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WINDOWSIDENTITY_T2991741821_H
#ifndef SECURITYCRITICALATTRIBUTE_T3916279943_H
#define SECURITYCRITICALATTRIBUTE_T3916279943_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecurityCriticalAttribute
struct  SecurityCriticalAttribute_t3916279943  : public Attribute_t2825975485
{
public:
	// System.Security.SecurityCriticalScope System.Security.SecurityCriticalAttribute::_scope
	int32_t ____scope_0;

public:
	inline static int32_t get_offset_of__scope_0() { return static_cast<int32_t>(offsetof(SecurityCriticalAttribute_t3916279943, ____scope_0)); }
	inline int32_t get__scope_0() const { return ____scope_0; }
	inline int32_t* get_address_of__scope_0() { return &____scope_0; }
	inline void set__scope_0(int32_t value)
	{
		____scope_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYCRITICALATTRIBUTE_T3916279943_H
#ifndef RIJNDAEL_T46461784_H
#define RIJNDAEL_T46461784_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.Rijndael
struct  Rijndael_t46461784  : public SymmetricAlgorithm_t2359443873
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIJNDAEL_T46461784_H
#ifndef TRIPLEDES_T1942116827_H
#define TRIPLEDES_T1942116827_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.TripleDES
struct  TripleDES_t1942116827  : public SymmetricAlgorithm_t2359443873
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRIPLEDES_T1942116827_H
#ifndef AUTORESETEVENT_T2680965318_H
#define AUTORESETEVENT_T2680965318_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.AutoResetEvent
struct  AutoResetEvent_t2680965318  : public EventWaitHandle_t477210530
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUTORESETEVENT_T2680965318_H
#ifndef TRIPLEDESCRYPTOSERVICEPROVIDER_T3143696090_H
#define TRIPLEDESCRYPTOSERVICEPROVIDER_T3143696090_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.TripleDESCryptoServiceProvider
struct  TripleDESCryptoServiceProvider_t3143696090  : public TripleDES_t1942116827
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRIPLEDESCRYPTOSERVICEPROVIDER_T3143696090_H
#ifndef RIJNDAELMANAGED_T1415074057_H
#define RIJNDAELMANAGED_T1415074057_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RijndaelManaged
struct  RijndaelManaged_t1415074057  : public Rijndael_t46461784
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIJNDAELMANAGED_T1415074057_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize700 = { sizeof (RSACryptoServiceProvider_t2322236861), -1, sizeof(RSACryptoServiceProvider_t2322236861_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable700[7] = 
{
	RSACryptoServiceProvider_t2322236861::get_offset_of_store_2(),
	RSACryptoServiceProvider_t2322236861::get_offset_of_persistKey_3(),
	RSACryptoServiceProvider_t2322236861::get_offset_of_persisted_4(),
	RSACryptoServiceProvider_t2322236861::get_offset_of_privateKeyExportable_5(),
	RSACryptoServiceProvider_t2322236861::get_offset_of_m_disposed_6(),
	RSACryptoServiceProvider_t2322236861::get_offset_of_rsa_7(),
	RSACryptoServiceProvider_t2322236861_StaticFields::get_offset_of_useMachineKeyStore_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize701 = { sizeof (RSAPKCS1KeyExchangeFormatter_t1189083464), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable701[2] = 
{
	RSAPKCS1KeyExchangeFormatter_t1189083464::get_offset_of_rsa_0(),
	RSAPKCS1KeyExchangeFormatter_t1189083464::get_offset_of_random_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize702 = { sizeof (RSAPKCS1SignatureDeformatter_t200457136), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable702[2] = 
{
	RSAPKCS1SignatureDeformatter_t200457136::get_offset_of_rsa_0(),
	RSAPKCS1SignatureDeformatter_t200457136::get_offset_of_hashName_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize703 = { sizeof (RSAPKCS1SignatureFormatter_t2261619966), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable703[2] = 
{
	RSAPKCS1SignatureFormatter_t2261619966::get_offset_of_rsa_0(),
	RSAPKCS1SignatureFormatter_t2261619966::get_offset_of_hash_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize704 = { sizeof (RSAParameters_t2197775318)+ sizeof (RuntimeObject), sizeof(RSAParameters_t2197775318_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable704[8] = 
{
	RSAParameters_t2197775318::get_offset_of_P_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RSAParameters_t2197775318::get_offset_of_Q_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RSAParameters_t2197775318::get_offset_of_D_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RSAParameters_t2197775318::get_offset_of_DP_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RSAParameters_t2197775318::get_offset_of_DQ_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RSAParameters_t2197775318::get_offset_of_InverseQ_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RSAParameters_t2197775318::get_offset_of_Modulus_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RSAParameters_t2197775318::get_offset_of_Exponent_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize705 = { sizeof (RandomNumberGenerator_t3399161153), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize706 = { sizeof (Rijndael_t46461784), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize707 = { sizeof (RijndaelManaged_t1415074057), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize708 = { sizeof (RijndaelTransform_t2775089468), -1, sizeof(RijndaelTransform_t2775089468_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable708[15] = 
{
	RijndaelTransform_t2775089468::get_offset_of_expandedKey_12(),
	RijndaelTransform_t2775089468::get_offset_of_Nb_13(),
	RijndaelTransform_t2775089468::get_offset_of_Nk_14(),
	RijndaelTransform_t2775089468::get_offset_of_Nr_15(),
	RijndaelTransform_t2775089468_StaticFields::get_offset_of_Rcon_16(),
	RijndaelTransform_t2775089468_StaticFields::get_offset_of_SBox_17(),
	RijndaelTransform_t2775089468_StaticFields::get_offset_of_iSBox_18(),
	RijndaelTransform_t2775089468_StaticFields::get_offset_of_T0_19(),
	RijndaelTransform_t2775089468_StaticFields::get_offset_of_T1_20(),
	RijndaelTransform_t2775089468_StaticFields::get_offset_of_T2_21(),
	RijndaelTransform_t2775089468_StaticFields::get_offset_of_T3_22(),
	RijndaelTransform_t2775089468_StaticFields::get_offset_of_iT0_23(),
	RijndaelTransform_t2775089468_StaticFields::get_offset_of_iT1_24(),
	RijndaelTransform_t2775089468_StaticFields::get_offset_of_iT2_25(),
	RijndaelTransform_t2775089468_StaticFields::get_offset_of_iT3_26(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize709 = { sizeof (RijndaelManagedTransform_t1451861562), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable709[2] = 
{
	RijndaelManagedTransform_t1451861562::get_offset_of__st_0(),
	RijndaelManagedTransform_t1451861562::get_offset_of__bs_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize710 = { sizeof (SHA1_t344965996), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize711 = { sizeof (SHA1Internal_t3901366001), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable711[5] = 
{
	SHA1Internal_t3901366001::get_offset_of__H_0(),
	SHA1Internal_t3901366001::get_offset_of_count_1(),
	SHA1Internal_t3901366001::get_offset_of__ProcessingBuffer_2(),
	SHA1Internal_t3901366001::get_offset_of__ProcessingBufferCount_3(),
	SHA1Internal_t3901366001::get_offset_of_buff_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize712 = { sizeof (SHA1CryptoServiceProvider_t3800152076), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable712[1] = 
{
	SHA1CryptoServiceProvider_t3800152076::get_offset_of_sha_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize713 = { sizeof (SHA1Managed_t1679719948), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable713[1] = 
{
	SHA1Managed_t1679719948::get_offset_of_sha_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize714 = { sizeof (SHA256_t3827380899), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize715 = { sizeof (SHA256Managed_t119750231), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable715[5] = 
{
	SHA256Managed_t119750231::get_offset_of__H_4(),
	SHA256Managed_t119750231::get_offset_of_count_5(),
	SHA256Managed_t119750231::get_offset_of__ProcessingBuffer_6(),
	SHA256Managed_t119750231::get_offset_of__ProcessingBufferCount_7(),
	SHA256Managed_t119750231::get_offset_of_buff_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize716 = { sizeof (SHA384_t3997616894), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize717 = { sizeof (SHA384Managed_t2895677514), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable717[14] = 
{
	SHA384Managed_t2895677514::get_offset_of_xBuf_4(),
	SHA384Managed_t2895677514::get_offset_of_xBufOff_5(),
	SHA384Managed_t2895677514::get_offset_of_byteCount1_6(),
	SHA384Managed_t2895677514::get_offset_of_byteCount2_7(),
	SHA384Managed_t2895677514::get_offset_of_H1_8(),
	SHA384Managed_t2895677514::get_offset_of_H2_9(),
	SHA384Managed_t2895677514::get_offset_of_H3_10(),
	SHA384Managed_t2895677514::get_offset_of_H4_11(),
	SHA384Managed_t2895677514::get_offset_of_H5_12(),
	SHA384Managed_t2895677514::get_offset_of_H6_13(),
	SHA384Managed_t2895677514::get_offset_of_H7_14(),
	SHA384Managed_t2895677514::get_offset_of_H8_15(),
	SHA384Managed_t2895677514::get_offset_of_W_16(),
	SHA384Managed_t2895677514::get_offset_of_wOff_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize718 = { sizeof (SHA512_t1488557438), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize719 = { sizeof (SHA512Managed_t3097156491), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable719[14] = 
{
	SHA512Managed_t3097156491::get_offset_of_xBuf_4(),
	SHA512Managed_t3097156491::get_offset_of_xBufOff_5(),
	SHA512Managed_t3097156491::get_offset_of_byteCount1_6(),
	SHA512Managed_t3097156491::get_offset_of_byteCount2_7(),
	SHA512Managed_t3097156491::get_offset_of_H1_8(),
	SHA512Managed_t3097156491::get_offset_of_H2_9(),
	SHA512Managed_t3097156491::get_offset_of_H3_10(),
	SHA512Managed_t3097156491::get_offset_of_H4_11(),
	SHA512Managed_t3097156491::get_offset_of_H5_12(),
	SHA512Managed_t3097156491::get_offset_of_H6_13(),
	SHA512Managed_t3097156491::get_offset_of_H7_14(),
	SHA512Managed_t3097156491::get_offset_of_H8_15(),
	SHA512Managed_t3097156491::get_offset_of_W_16(),
	SHA512Managed_t3097156491::get_offset_of_wOff_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize720 = { sizeof (SHAConstants_t926846232), -1, sizeof(SHAConstants_t926846232_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable720[2] = 
{
	SHAConstants_t926846232_StaticFields::get_offset_of_K1_0(),
	SHAConstants_t926846232_StaticFields::get_offset_of_K2_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize721 = { sizeof (SignatureDescription_t763271396), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable721[4] = 
{
	SignatureDescription_t763271396::get_offset_of__DeformatterAlgorithm_0(),
	SignatureDescription_t763271396::get_offset_of__DigestAlgorithm_1(),
	SignatureDescription_t763271396::get_offset_of__FormatterAlgorithm_2(),
	SignatureDescription_t763271396::get_offset_of__KeyAlgorithm_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize722 = { sizeof (DSASignatureDescription_t1704610795), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize723 = { sizeof (RSAPKCS1SHA1SignatureDescription_t1291656777), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize724 = { sizeof (SymmetricAlgorithm_t2359443873), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable724[10] = 
{
	SymmetricAlgorithm_t2359443873::get_offset_of_BlockSizeValue_0(),
	SymmetricAlgorithm_t2359443873::get_offset_of_IVValue_1(),
	SymmetricAlgorithm_t2359443873::get_offset_of_KeySizeValue_2(),
	SymmetricAlgorithm_t2359443873::get_offset_of_KeyValue_3(),
	SymmetricAlgorithm_t2359443873::get_offset_of_LegalBlockSizesValue_4(),
	SymmetricAlgorithm_t2359443873::get_offset_of_LegalKeySizesValue_5(),
	SymmetricAlgorithm_t2359443873::get_offset_of_FeedbackSizeValue_6(),
	SymmetricAlgorithm_t2359443873::get_offset_of_ModeValue_7(),
	SymmetricAlgorithm_t2359443873::get_offset_of_PaddingValue_8(),
	SymmetricAlgorithm_t2359443873::get_offset_of_m_disposed_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize725 = { sizeof (ToBase64Transform_t1324414163), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable725[1] = 
{
	ToBase64Transform_t1324414163::get_offset_of_m_disposed_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize726 = { sizeof (TripleDES_t1942116827), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize727 = { sizeof (TripleDESCryptoServiceProvider_t3143696090), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize728 = { sizeof (TripleDESTransform_t4057757275), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable728[6] = 
{
	TripleDESTransform_t4057757275::get_offset_of_E1_12(),
	TripleDESTransform_t4057757275::get_offset_of_D2_13(),
	TripleDESTransform_t4057757275::get_offset_of_E3_14(),
	TripleDESTransform_t4057757275::get_offset_of_D1_15(),
	TripleDESTransform_t4057757275::get_offset_of_E2_16(),
	TripleDESTransform_t4057757275::get_offset_of_D3_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize729 = { sizeof (CodeAccessSecurityAttribute_t298520354), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize730 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize731 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize732 = { sizeof (PermissionState_t3185432566)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable732[3] = 
{
	PermissionState_t3185432566::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize733 = { sizeof (SecurityAction_t780845443)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable733[10] = 
{
	SecurityAction_t780845443::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize734 = { sizeof (SecurityPermission_t2282903104), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable734[1] = 
{
	SecurityPermission_t2282903104::get_offset_of_flags_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize735 = { sizeof (SecurityPermissionAttribute_t1613035566), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable735[1] = 
{
	SecurityPermissionAttribute_t1613035566::get_offset_of_m_Flags_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize736 = { sizeof (SecurityPermissionFlag_t1677324112)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable736[17] = 
{
	SecurityPermissionFlag_t1677324112::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize737 = { sizeof (StrongNamePublicKeyBlob_t936902416), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable737[1] = 
{
	StrongNamePublicKeyBlob_t936902416::get_offset_of_pubkey_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize738 = { sizeof (ApplicationTrust_t2165093397), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable738[1] = 
{
	ApplicationTrust_t2165093397::get_offset_of_fullTrustAssemblies_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize739 = { sizeof (Evidence_t1703590093), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable739[4] = 
{
	Evidence_t1703590093::get_offset_of__locked_0(),
	Evidence_t1703590093::get_offset_of_hostEvidenceList_1(),
	Evidence_t1703590093::get_offset_of_assemblyEvidenceList_2(),
	Evidence_t1703590093::get_offset_of__hashCode_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize740 = { sizeof (EvidenceEnumerator_t2479891710), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable740[3] = 
{
	EvidenceEnumerator_t2479891710::get_offset_of_currentEnum_0(),
	EvidenceEnumerator_t2479891710::get_offset_of_hostEnum_1(),
	EvidenceEnumerator_t2479891710::get_offset_of_assemblyEnum_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize741 = { sizeof (Hash_t2152572517), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable741[2] = 
{
	Hash_t2152572517::get_offset_of_assembly_0(),
	Hash_t2152572517::get_offset_of_data_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize742 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize743 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize744 = { sizeof (StrongName_t633292705), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable744[3] = 
{
	StrongName_t633292705::get_offset_of_publickey_0(),
	StrongName_t633292705::get_offset_of_name_1(),
	StrongName_t633292705::get_offset_of_version_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize745 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize746 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize747 = { sizeof (PrincipalPolicy_t2786093285)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable747[4] = 
{
	PrincipalPolicy_t2786093285::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize748 = { sizeof (WindowsAccountType_t2380903394)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable748[5] = 
{
	WindowsAccountType_t2380903394::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize749 = { sizeof (WindowsIdentity_t2991741821), -1, sizeof(WindowsIdentity_t2991741821_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable749[7] = 
{
	WindowsIdentity_t2991741821::get_offset_of__token_0(),
	WindowsIdentity_t2991741821::get_offset_of__type_1(),
	WindowsIdentity_t2991741821::get_offset_of__account_2(),
	WindowsIdentity_t2991741821::get_offset_of__authenticated_3(),
	WindowsIdentity_t2991741821::get_offset_of__name_4(),
	WindowsIdentity_t2991741821::get_offset_of__info_5(),
	WindowsIdentity_t2991741821_StaticFields::get_offset_of_invalidWindows_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize750 = { sizeof (AllowPartiallyTrustedCallersAttribute_t2479300046), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize751 = { sizeof (CodeAccessPermission_t4144283223), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize752 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize753 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize754 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize755 = { sizeof (PermissionSet_t1484169221), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable755[1] = 
{
	PermissionSet_t1484169221::get_offset_of_U3CDeclarativeSecurityU3Ek__BackingField_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize756 = { sizeof (SecurityContext_t134910927), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable756[4] = 
{
	SecurityContext_t134910927::get_offset_of__capture_0(),
	SecurityContext_t134910927::get_offset_of__winid_1(),
	SecurityContext_t134910927::get_offset_of__stack_2(),
	SecurityContext_t134910927::get_offset_of__suppressFlow_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize757 = { sizeof (SecurityCriticalAttribute_t3916279943), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable757[1] = 
{
	SecurityCriticalAttribute_t3916279943::get_offset_of__scope_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize758 = { sizeof (SecurityCriticalScope_t2202220421)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable758[3] = 
{
	SecurityCriticalScope_t2202220421::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize759 = { sizeof (SecurityElement_t1126158185), -1, sizeof(SecurityElement_t1126158185_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable759[9] = 
{
	SecurityElement_t1126158185::get_offset_of_text_0(),
	SecurityElement_t1126158185::get_offset_of_tag_1(),
	SecurityElement_t1126158185::get_offset_of_attributes_2(),
	SecurityElement_t1126158185::get_offset_of_children_3(),
	SecurityElement_t1126158185_StaticFields::get_offset_of_invalid_tag_chars_4(),
	SecurityElement_t1126158185_StaticFields::get_offset_of_invalid_text_chars_5(),
	SecurityElement_t1126158185_StaticFields::get_offset_of_invalid_attr_name_chars_6(),
	SecurityElement_t1126158185_StaticFields::get_offset_of_invalid_attr_value_chars_7(),
	SecurityElement_t1126158185_StaticFields::get_offset_of_invalid_chars_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize760 = { sizeof (SecurityAttribute_t2622143265), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable760[2] = 
{
	SecurityAttribute_t2622143265::get_offset_of__name_0(),
	SecurityAttribute_t2622143265::get_offset_of__value_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize761 = { sizeof (SecurityException_t2332365416), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable761[8] = 
{
	SecurityException_t2332365416::get_offset_of_permissionState_11(),
	SecurityException_t2332365416::get_offset_of_permissionType_12(),
	SecurityException_t2332365416::get_offset_of__granted_13(),
	SecurityException_t2332365416::get_offset_of__refused_14(),
	SecurityException_t2332365416::get_offset_of__demanded_15(),
	SecurityException_t2332365416::get_offset_of__firstperm_16(),
	SecurityException_t2332365416::get_offset_of__method_17(),
	SecurityException_t2332365416::get_offset_of__evidence_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize762 = { sizeof (RuntimeDeclSecurityEntry_t1794386577)+ sizeof (RuntimeObject), sizeof(RuntimeDeclSecurityEntry_t1794386577 ), 0, 0 };
extern const int32_t g_FieldOffsetTable762[3] = 
{
	RuntimeDeclSecurityEntry_t1794386577::get_offset_of_blob_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RuntimeDeclSecurityEntry_t1794386577::get_offset_of_size_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RuntimeDeclSecurityEntry_t1794386577::get_offset_of_index_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize763 = { sizeof (RuntimeSecurityFrame_t1227625594), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable763[5] = 
{
	RuntimeSecurityFrame_t1227625594::get_offset_of_domain_0(),
	RuntimeSecurityFrame_t1227625594::get_offset_of_method_1(),
	RuntimeSecurityFrame_t1227625594::get_offset_of_assert_2(),
	RuntimeSecurityFrame_t1227625594::get_offset_of_deny_3(),
	RuntimeSecurityFrame_t1227625594::get_offset_of_permitonly_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize764 = { sizeof (SecurityFrame_t2135789231)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable764[5] = 
{
	SecurityFrame_t2135789231::get_offset_of__domain_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SecurityFrame_t2135789231::get_offset_of__method_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SecurityFrame_t2135789231::get_offset_of__assert_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SecurityFrame_t2135789231::get_offset_of__deny_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SecurityFrame_t2135789231::get_offset_of__permitonly_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize765 = { sizeof (SecurityManager_t810594993), -1, sizeof(SecurityManager_t810594993_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable765[3] = 
{
	SecurityManager_t810594993_StaticFields::get_offset_of__lockObject_0(),
	SecurityManager_t810594993_StaticFields::get_offset_of__declsecCache_1(),
	SecurityManager_t810594993_StaticFields::get_offset_of__execution_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize766 = { sizeof (SecuritySafeCriticalAttribute_t2540965085), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize767 = { sizeof (SuppressUnmanagedCodeSecurityAttribute_t2148483381), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize768 = { sizeof (UnverifiableCodeAttribute_t2986773691), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize769 = { sizeof (ASCIIEncoding_t2226524866), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize770 = { sizeof (Decoder_t2580404822), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable770[2] = 
{
	Decoder_t2580404822::get_offset_of_fallback_0(),
	Decoder_t2580404822::get_offset_of_fallback_buffer_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize771 = { sizeof (DecoderExceptionFallback_t3259366613), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize772 = { sizeof (DecoderExceptionFallbackBuffer_t3339059755), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize773 = { sizeof (DecoderFallback_t3871842754), -1, sizeof(DecoderFallback_t3871842754_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable773[3] = 
{
	DecoderFallback_t3871842754_StaticFields::get_offset_of_exception_fallback_0(),
	DecoderFallback_t3871842754_StaticFields::get_offset_of_replacement_fallback_1(),
	DecoderFallback_t3871842754_StaticFields::get_offset_of_standard_safe_fallback_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize774 = { sizeof (DecoderFallbackBuffer_t2111995526), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize775 = { sizeof (DecoderFallbackException_t4260190123), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable775[2] = 
{
	DecoderFallbackException_t4260190123::get_offset_of_bytes_unknown_13(),
	DecoderFallbackException_t4260190123::get_offset_of_index_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize776 = { sizeof (DecoderReplacementFallback_t2062361839), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable776[1] = 
{
	DecoderReplacementFallback_t2062361839::get_offset_of_replacement_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize777 = { sizeof (DecoderReplacementFallbackBuffer_t310394184), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable777[3] = 
{
	DecoderReplacementFallbackBuffer_t310394184::get_offset_of_fallback_assigned_0(),
	DecoderReplacementFallbackBuffer_t310394184::get_offset_of_current_1(),
	DecoderReplacementFallbackBuffer_t310394184::get_offset_of_replacement_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize778 = { sizeof (EncoderExceptionFallback_t297178561), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize779 = { sizeof (EncoderExceptionFallbackBuffer_t2405517468), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize780 = { sizeof (EncoderFallback_t2317521021), -1, sizeof(EncoderFallback_t2317521021_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable780[3] = 
{
	EncoderFallback_t2317521021_StaticFields::get_offset_of_exception_fallback_0(),
	EncoderFallback_t2317521021_StaticFields::get_offset_of_replacement_fallback_1(),
	EncoderFallback_t2317521021_StaticFields::get_offset_of_standard_safe_fallback_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize781 = { sizeof (EncoderFallbackBuffer_t3328225182), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize782 = { sizeof (EncoderFallbackException_t2907061470), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable782[4] = 
{
	EncoderFallbackException_t2907061470::get_offset_of_char_unknown_13(),
	EncoderFallbackException_t2907061470::get_offset_of_char_unknown_high_14(),
	EncoderFallbackException_t2907061470::get_offset_of_char_unknown_low_15(),
	EncoderFallbackException_t2907061470::get_offset_of_index_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize783 = { sizeof (EncoderReplacementFallback_t1442163840), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable783[1] = 
{
	EncoderReplacementFallback_t1442163840::get_offset_of_replacement_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize784 = { sizeof (EncoderReplacementFallbackBuffer_t4159324089), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable784[3] = 
{
	EncoderReplacementFallbackBuffer_t4159324089::get_offset_of_replacement_0(),
	EncoderReplacementFallbackBuffer_t4159324089::get_offset_of_current_1(),
	EncoderReplacementFallbackBuffer_t4159324089::get_offset_of_fallback_assigned_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize785 = { sizeof (Encoding_t314924375), -1, sizeof(Encoding_t314924375_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable785[28] = 
{
	Encoding_t314924375::get_offset_of_codePage_0(),
	Encoding_t314924375::get_offset_of_windows_code_page_1(),
	Encoding_t314924375::get_offset_of_is_readonly_2(),
	Encoding_t314924375::get_offset_of_decoder_fallback_3(),
	Encoding_t314924375::get_offset_of_encoder_fallback_4(),
	Encoding_t314924375_StaticFields::get_offset_of_i18nAssembly_5(),
	Encoding_t314924375_StaticFields::get_offset_of_i18nDisabled_6(),
	Encoding_t314924375_StaticFields::get_offset_of_encodings_7(),
	Encoding_t314924375::get_offset_of_body_name_8(),
	Encoding_t314924375::get_offset_of_encoding_name_9(),
	Encoding_t314924375::get_offset_of_header_name_10(),
	Encoding_t314924375::get_offset_of_is_mail_news_display_11(),
	Encoding_t314924375::get_offset_of_is_mail_news_save_12(),
	Encoding_t314924375::get_offset_of_is_browser_save_13(),
	Encoding_t314924375::get_offset_of_is_browser_display_14(),
	Encoding_t314924375::get_offset_of_web_name_15(),
	Encoding_t314924375_StaticFields::get_offset_of_asciiEncoding_16(),
	Encoding_t314924375_StaticFields::get_offset_of_bigEndianEncoding_17(),
	Encoding_t314924375_StaticFields::get_offset_of_defaultEncoding_18(),
	Encoding_t314924375_StaticFields::get_offset_of_utf7Encoding_19(),
	Encoding_t314924375_StaticFields::get_offset_of_utf8EncodingWithMarkers_20(),
	Encoding_t314924375_StaticFields::get_offset_of_utf8EncodingWithoutMarkers_21(),
	Encoding_t314924375_StaticFields::get_offset_of_unicodeEncoding_22(),
	Encoding_t314924375_StaticFields::get_offset_of_isoLatin1Encoding_23(),
	Encoding_t314924375_StaticFields::get_offset_of_utf8EncodingUnsafe_24(),
	Encoding_t314924375_StaticFields::get_offset_of_utf32Encoding_25(),
	Encoding_t314924375_StaticFields::get_offset_of_bigEndianUTF32Encoding_26(),
	Encoding_t314924375_StaticFields::get_offset_of_lockobj_27(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize786 = { sizeof (ForwardingDecoder_t3591468115), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable786[1] = 
{
	ForwardingDecoder_t3591468115::get_offset_of_encoding_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize787 = { sizeof (Latin1Encoding_t2680521409), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize788 = { sizeof (StringBuilder_t2957267887), sizeof(char*), 0, 0 };
extern const int32_t g_FieldOffsetTable788[5] = 
{
	0,
	StringBuilder_t2957267887::get_offset_of__length_1(),
	StringBuilder_t2957267887::get_offset_of__str_2(),
	StringBuilder_t2957267887::get_offset_of__cached_str_3(),
	StringBuilder_t2957267887::get_offset_of__maxCapacity_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize789 = { sizeof (UTF32Encoding_t3261746724), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable789[2] = 
{
	UTF32Encoding_t3261746724::get_offset_of_bigEndian_28(),
	UTF32Encoding_t3261746724::get_offset_of_byteOrderMark_29(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize790 = { sizeof (UTF32Decoder_t492983515), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable790[3] = 
{
	UTF32Decoder_t492983515::get_offset_of_bigEndian_2(),
	UTF32Decoder_t492983515::get_offset_of_leftOverByte_3(),
	UTF32Decoder_t492983515::get_offset_of_leftOverLength_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize791 = { sizeof (UTF7Encoding_t3121866920), -1, sizeof(UTF7Encoding_t3121866920_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable791[3] = 
{
	UTF7Encoding_t3121866920::get_offset_of_allowOptionals_28(),
	UTF7Encoding_t3121866920_StaticFields::get_offset_of_encodingRules_29(),
	UTF7Encoding_t3121866920_StaticFields::get_offset_of_base64Values_30(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize792 = { sizeof (UTF7Decoder_t1629765230), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable792[1] = 
{
	UTF7Decoder_t1629765230::get_offset_of_leftOver_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize793 = { sizeof (UTF8Encoding_t3315974484), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable793[1] = 
{
	UTF8Encoding_t3315974484::get_offset_of_emitIdentifier_28(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize794 = { sizeof (UTF8Decoder_t2150941491), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable794[2] = 
{
	UTF8Decoder_t2150941491::get_offset_of_leftOverBits_2(),
	UTF8Decoder_t2150941491::get_offset_of_leftOverCount_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize795 = { sizeof (UnicodeEncoding_t2387548882), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable795[2] = 
{
	UnicodeEncoding_t2387548882::get_offset_of_bigEndian_28(),
	UnicodeEncoding_t2387548882::get_offset_of_byteOrderMark_29(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize796 = { sizeof (UnicodeDecoder_t3314387579), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable796[2] = 
{
	UnicodeDecoder_t3314387579::get_offset_of_bigEndian_2(),
	UnicodeDecoder_t3314387579::get_offset_of_leftOverByte_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize797 = { sizeof (AutoResetEvent_t2680965318), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize798 = { sizeof (CompressedStack_t4197464022), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable798[1] = 
{
	CompressedStack_t4197464022::get_offset_of__list_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize799 = { sizeof (EventResetMode_t2677453215)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable799[3] = 
{
	EventResetMode_t2677453215::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif

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

// Utils.serializableUnityARCamera
struct serializableUnityARCamera_t1479866927;
// Utils.serializableUnityARMatrix4x4
struct serializableUnityARMatrix4x4_t2915064193;
// Utils.serializablePointCloud
struct serializablePointCloud_t3916281303;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t2380659656;
// Utils.SerializableVector4
struct SerializableVector4_t1399205435;
// Utils.serializableUnityARPlaneAnchor
struct serializableUnityARPlaneAnchor_t4107818447;
// System.Byte[]
struct ByteU5BU5D_t1557752011;
// System.Text.Encoding
struct Encoding_t1498994424;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t3389082662;
// System.Char[]
struct CharU5BU5D_t3928129731;
// System.Text.DecoderFallback
struct DecoderFallback_t2581086691;
// System.Text.EncoderFallback
struct EncoderFallback_t997544634;
// System.Reflection.Assembly
struct Assembly_t1203482622;
// System.Void
struct Void_t2682914905;

extern RuntimeClass* serializableUnityARCamera_t1479866927_il2cpp_TypeInfo_var;
extern const uint32_t serializableUnityARCamera_op_Implicit_m1697303898_MetadataUsageId;
extern RuntimeClass* serializableUnityARMatrix4x4_t2915064193_il2cpp_TypeInfo_var;
extern const uint32_t serializableUnityARMatrix4x4_op_Implicit_m1903192487_MetadataUsageId;
extern const uint32_t serializableUnityARMatrix4x4_op_Implicit_m3682396343_MetadataUsageId;
extern RuntimeClass* SerializableVector4_t1399205435_il2cpp_TypeInfo_var;
extern RuntimeClass* Encoding_t1498994424_il2cpp_TypeInfo_var;
extern RuntimeClass* serializableUnityARPlaneAnchor_t4107818447_il2cpp_TypeInfo_var;
extern const uint32_t serializableUnityARPlaneAnchor_op_Implicit_m1078646073_MetadataUsageId;
extern const uint32_t serializableUnityARPlaneAnchor_op_Implicit_m4137221161_MetadataUsageId;
extern RuntimeClass* ObjectU5BU5D_t3389082662_il2cpp_TypeInfo_var;
extern RuntimeClass* Single_t2130586693_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3985907710;
extern const uint32_t SerializableVector4_ToString_m568273410_MetadataUsageId;
extern const uint32_t SerializableVector4_op_Implicit_m3848775500_MetadataUsageId;
struct Vector3_t3940485 ;

struct Vector3U5BU5D_t2380659656;
struct ByteU5BU5D_t1557752011;
struct ObjectU5BU5D_t3389082662;


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
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3928129731* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3928129731* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3928129731** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3928129731* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef ENCODING_T1498994424_H
#define ENCODING_T1498994424_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Encoding
struct  Encoding_t1498994424  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::codePage
	int32_t ___codePage_0;
	// System.Int32 System.Text.Encoding::windows_code_page
	int32_t ___windows_code_page_1;
	// System.Boolean System.Text.Encoding::is_readonly
	bool ___is_readonly_2;
	// System.Text.DecoderFallback System.Text.Encoding::decoder_fallback
	DecoderFallback_t2581086691 * ___decoder_fallback_3;
	// System.Text.EncoderFallback System.Text.Encoding::encoder_fallback
	EncoderFallback_t997544634 * ___encoder_fallback_4;
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
	inline static int32_t get_offset_of_codePage_0() { return static_cast<int32_t>(offsetof(Encoding_t1498994424, ___codePage_0)); }
	inline int32_t get_codePage_0() const { return ___codePage_0; }
	inline int32_t* get_address_of_codePage_0() { return &___codePage_0; }
	inline void set_codePage_0(int32_t value)
	{
		___codePage_0 = value;
	}

	inline static int32_t get_offset_of_windows_code_page_1() { return static_cast<int32_t>(offsetof(Encoding_t1498994424, ___windows_code_page_1)); }
	inline int32_t get_windows_code_page_1() const { return ___windows_code_page_1; }
	inline int32_t* get_address_of_windows_code_page_1() { return &___windows_code_page_1; }
	inline void set_windows_code_page_1(int32_t value)
	{
		___windows_code_page_1 = value;
	}

	inline static int32_t get_offset_of_is_readonly_2() { return static_cast<int32_t>(offsetof(Encoding_t1498994424, ___is_readonly_2)); }
	inline bool get_is_readonly_2() const { return ___is_readonly_2; }
	inline bool* get_address_of_is_readonly_2() { return &___is_readonly_2; }
	inline void set_is_readonly_2(bool value)
	{
		___is_readonly_2 = value;
	}

	inline static int32_t get_offset_of_decoder_fallback_3() { return static_cast<int32_t>(offsetof(Encoding_t1498994424, ___decoder_fallback_3)); }
	inline DecoderFallback_t2581086691 * get_decoder_fallback_3() const { return ___decoder_fallback_3; }
	inline DecoderFallback_t2581086691 ** get_address_of_decoder_fallback_3() { return &___decoder_fallback_3; }
	inline void set_decoder_fallback_3(DecoderFallback_t2581086691 * value)
	{
		___decoder_fallback_3 = value;
		Il2CppCodeGenWriteBarrier((&___decoder_fallback_3), value);
	}

	inline static int32_t get_offset_of_encoder_fallback_4() { return static_cast<int32_t>(offsetof(Encoding_t1498994424, ___encoder_fallback_4)); }
	inline EncoderFallback_t997544634 * get_encoder_fallback_4() const { return ___encoder_fallback_4; }
	inline EncoderFallback_t997544634 ** get_address_of_encoder_fallback_4() { return &___encoder_fallback_4; }
	inline void set_encoder_fallback_4(EncoderFallback_t997544634 * value)
	{
		___encoder_fallback_4 = value;
		Il2CppCodeGenWriteBarrier((&___encoder_fallback_4), value);
	}

	inline static int32_t get_offset_of_body_name_8() { return static_cast<int32_t>(offsetof(Encoding_t1498994424, ___body_name_8)); }
	inline String_t* get_body_name_8() const { return ___body_name_8; }
	inline String_t** get_address_of_body_name_8() { return &___body_name_8; }
	inline void set_body_name_8(String_t* value)
	{
		___body_name_8 = value;
		Il2CppCodeGenWriteBarrier((&___body_name_8), value);
	}

	inline static int32_t get_offset_of_encoding_name_9() { return static_cast<int32_t>(offsetof(Encoding_t1498994424, ___encoding_name_9)); }
	inline String_t* get_encoding_name_9() const { return ___encoding_name_9; }
	inline String_t** get_address_of_encoding_name_9() { return &___encoding_name_9; }
	inline void set_encoding_name_9(String_t* value)
	{
		___encoding_name_9 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_name_9), value);
	}

	inline static int32_t get_offset_of_header_name_10() { return static_cast<int32_t>(offsetof(Encoding_t1498994424, ___header_name_10)); }
	inline String_t* get_header_name_10() const { return ___header_name_10; }
	inline String_t** get_address_of_header_name_10() { return &___header_name_10; }
	inline void set_header_name_10(String_t* value)
	{
		___header_name_10 = value;
		Il2CppCodeGenWriteBarrier((&___header_name_10), value);
	}

	inline static int32_t get_offset_of_is_mail_news_display_11() { return static_cast<int32_t>(offsetof(Encoding_t1498994424, ___is_mail_news_display_11)); }
	inline bool get_is_mail_news_display_11() const { return ___is_mail_news_display_11; }
	inline bool* get_address_of_is_mail_news_display_11() { return &___is_mail_news_display_11; }
	inline void set_is_mail_news_display_11(bool value)
	{
		___is_mail_news_display_11 = value;
	}

	inline static int32_t get_offset_of_is_mail_news_save_12() { return static_cast<int32_t>(offsetof(Encoding_t1498994424, ___is_mail_news_save_12)); }
	inline bool get_is_mail_news_save_12() const { return ___is_mail_news_save_12; }
	inline bool* get_address_of_is_mail_news_save_12() { return &___is_mail_news_save_12; }
	inline void set_is_mail_news_save_12(bool value)
	{
		___is_mail_news_save_12 = value;
	}

	inline static int32_t get_offset_of_is_browser_save_13() { return static_cast<int32_t>(offsetof(Encoding_t1498994424, ___is_browser_save_13)); }
	inline bool get_is_browser_save_13() const { return ___is_browser_save_13; }
	inline bool* get_address_of_is_browser_save_13() { return &___is_browser_save_13; }
	inline void set_is_browser_save_13(bool value)
	{
		___is_browser_save_13 = value;
	}

	inline static int32_t get_offset_of_is_browser_display_14() { return static_cast<int32_t>(offsetof(Encoding_t1498994424, ___is_browser_display_14)); }
	inline bool get_is_browser_display_14() const { return ___is_browser_display_14; }
	inline bool* get_address_of_is_browser_display_14() { return &___is_browser_display_14; }
	inline void set_is_browser_display_14(bool value)
	{
		___is_browser_display_14 = value;
	}

	inline static int32_t get_offset_of_web_name_15() { return static_cast<int32_t>(offsetof(Encoding_t1498994424, ___web_name_15)); }
	inline String_t* get_web_name_15() const { return ___web_name_15; }
	inline String_t** get_address_of_web_name_15() { return &___web_name_15; }
	inline void set_web_name_15(String_t* value)
	{
		___web_name_15 = value;
		Il2CppCodeGenWriteBarrier((&___web_name_15), value);
	}
};

struct Encoding_t1498994424_StaticFields
{
public:
	// System.Reflection.Assembly System.Text.Encoding::i18nAssembly
	Assembly_t1203482622 * ___i18nAssembly_5;
	// System.Boolean System.Text.Encoding::i18nDisabled
	bool ___i18nDisabled_6;
	// System.Object[] System.Text.Encoding::encodings
	ObjectU5BU5D_t3389082662* ___encodings_7;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t1498994424 * ___asciiEncoding_16;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianEncoding
	Encoding_t1498994424 * ___bigEndianEncoding_17;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t1498994424 * ___defaultEncoding_18;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t1498994424 * ___utf7Encoding_19;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8EncodingWithMarkers
	Encoding_t1498994424 * ___utf8EncodingWithMarkers_20;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8EncodingWithoutMarkers
	Encoding_t1498994424 * ___utf8EncodingWithoutMarkers_21;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t1498994424 * ___unicodeEncoding_22;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::isoLatin1Encoding
	Encoding_t1498994424 * ___isoLatin1Encoding_23;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8EncodingUnsafe
	Encoding_t1498994424 * ___utf8EncodingUnsafe_24;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t1498994424 * ___utf32Encoding_25;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUTF32Encoding
	Encoding_t1498994424 * ___bigEndianUTF32Encoding_26;
	// System.Object System.Text.Encoding::lockobj
	RuntimeObject * ___lockobj_27;

public:
	inline static int32_t get_offset_of_i18nAssembly_5() { return static_cast<int32_t>(offsetof(Encoding_t1498994424_StaticFields, ___i18nAssembly_5)); }
	inline Assembly_t1203482622 * get_i18nAssembly_5() const { return ___i18nAssembly_5; }
	inline Assembly_t1203482622 ** get_address_of_i18nAssembly_5() { return &___i18nAssembly_5; }
	inline void set_i18nAssembly_5(Assembly_t1203482622 * value)
	{
		___i18nAssembly_5 = value;
		Il2CppCodeGenWriteBarrier((&___i18nAssembly_5), value);
	}

	inline static int32_t get_offset_of_i18nDisabled_6() { return static_cast<int32_t>(offsetof(Encoding_t1498994424_StaticFields, ___i18nDisabled_6)); }
	inline bool get_i18nDisabled_6() const { return ___i18nDisabled_6; }
	inline bool* get_address_of_i18nDisabled_6() { return &___i18nDisabled_6; }
	inline void set_i18nDisabled_6(bool value)
	{
		___i18nDisabled_6 = value;
	}

	inline static int32_t get_offset_of_encodings_7() { return static_cast<int32_t>(offsetof(Encoding_t1498994424_StaticFields, ___encodings_7)); }
	inline ObjectU5BU5D_t3389082662* get_encodings_7() const { return ___encodings_7; }
	inline ObjectU5BU5D_t3389082662** get_address_of_encodings_7() { return &___encodings_7; }
	inline void set_encodings_7(ObjectU5BU5D_t3389082662* value)
	{
		___encodings_7 = value;
		Il2CppCodeGenWriteBarrier((&___encodings_7), value);
	}

	inline static int32_t get_offset_of_asciiEncoding_16() { return static_cast<int32_t>(offsetof(Encoding_t1498994424_StaticFields, ___asciiEncoding_16)); }
	inline Encoding_t1498994424 * get_asciiEncoding_16() const { return ___asciiEncoding_16; }
	inline Encoding_t1498994424 ** get_address_of_asciiEncoding_16() { return &___asciiEncoding_16; }
	inline void set_asciiEncoding_16(Encoding_t1498994424 * value)
	{
		___asciiEncoding_16 = value;
		Il2CppCodeGenWriteBarrier((&___asciiEncoding_16), value);
	}

	inline static int32_t get_offset_of_bigEndianEncoding_17() { return static_cast<int32_t>(offsetof(Encoding_t1498994424_StaticFields, ___bigEndianEncoding_17)); }
	inline Encoding_t1498994424 * get_bigEndianEncoding_17() const { return ___bigEndianEncoding_17; }
	inline Encoding_t1498994424 ** get_address_of_bigEndianEncoding_17() { return &___bigEndianEncoding_17; }
	inline void set_bigEndianEncoding_17(Encoding_t1498994424 * value)
	{
		___bigEndianEncoding_17 = value;
		Il2CppCodeGenWriteBarrier((&___bigEndianEncoding_17), value);
	}

	inline static int32_t get_offset_of_defaultEncoding_18() { return static_cast<int32_t>(offsetof(Encoding_t1498994424_StaticFields, ___defaultEncoding_18)); }
	inline Encoding_t1498994424 * get_defaultEncoding_18() const { return ___defaultEncoding_18; }
	inline Encoding_t1498994424 ** get_address_of_defaultEncoding_18() { return &___defaultEncoding_18; }
	inline void set_defaultEncoding_18(Encoding_t1498994424 * value)
	{
		___defaultEncoding_18 = value;
		Il2CppCodeGenWriteBarrier((&___defaultEncoding_18), value);
	}

	inline static int32_t get_offset_of_utf7Encoding_19() { return static_cast<int32_t>(offsetof(Encoding_t1498994424_StaticFields, ___utf7Encoding_19)); }
	inline Encoding_t1498994424 * get_utf7Encoding_19() const { return ___utf7Encoding_19; }
	inline Encoding_t1498994424 ** get_address_of_utf7Encoding_19() { return &___utf7Encoding_19; }
	inline void set_utf7Encoding_19(Encoding_t1498994424 * value)
	{
		___utf7Encoding_19 = value;
		Il2CppCodeGenWriteBarrier((&___utf7Encoding_19), value);
	}

	inline static int32_t get_offset_of_utf8EncodingWithMarkers_20() { return static_cast<int32_t>(offsetof(Encoding_t1498994424_StaticFields, ___utf8EncodingWithMarkers_20)); }
	inline Encoding_t1498994424 * get_utf8EncodingWithMarkers_20() const { return ___utf8EncodingWithMarkers_20; }
	inline Encoding_t1498994424 ** get_address_of_utf8EncodingWithMarkers_20() { return &___utf8EncodingWithMarkers_20; }
	inline void set_utf8EncodingWithMarkers_20(Encoding_t1498994424 * value)
	{
		___utf8EncodingWithMarkers_20 = value;
		Il2CppCodeGenWriteBarrier((&___utf8EncodingWithMarkers_20), value);
	}

	inline static int32_t get_offset_of_utf8EncodingWithoutMarkers_21() { return static_cast<int32_t>(offsetof(Encoding_t1498994424_StaticFields, ___utf8EncodingWithoutMarkers_21)); }
	inline Encoding_t1498994424 * get_utf8EncodingWithoutMarkers_21() const { return ___utf8EncodingWithoutMarkers_21; }
	inline Encoding_t1498994424 ** get_address_of_utf8EncodingWithoutMarkers_21() { return &___utf8EncodingWithoutMarkers_21; }
	inline void set_utf8EncodingWithoutMarkers_21(Encoding_t1498994424 * value)
	{
		___utf8EncodingWithoutMarkers_21 = value;
		Il2CppCodeGenWriteBarrier((&___utf8EncodingWithoutMarkers_21), value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_22() { return static_cast<int32_t>(offsetof(Encoding_t1498994424_StaticFields, ___unicodeEncoding_22)); }
	inline Encoding_t1498994424 * get_unicodeEncoding_22() const { return ___unicodeEncoding_22; }
	inline Encoding_t1498994424 ** get_address_of_unicodeEncoding_22() { return &___unicodeEncoding_22; }
	inline void set_unicodeEncoding_22(Encoding_t1498994424 * value)
	{
		___unicodeEncoding_22 = value;
		Il2CppCodeGenWriteBarrier((&___unicodeEncoding_22), value);
	}

	inline static int32_t get_offset_of_isoLatin1Encoding_23() { return static_cast<int32_t>(offsetof(Encoding_t1498994424_StaticFields, ___isoLatin1Encoding_23)); }
	inline Encoding_t1498994424 * get_isoLatin1Encoding_23() const { return ___isoLatin1Encoding_23; }
	inline Encoding_t1498994424 ** get_address_of_isoLatin1Encoding_23() { return &___isoLatin1Encoding_23; }
	inline void set_isoLatin1Encoding_23(Encoding_t1498994424 * value)
	{
		___isoLatin1Encoding_23 = value;
		Il2CppCodeGenWriteBarrier((&___isoLatin1Encoding_23), value);
	}

	inline static int32_t get_offset_of_utf8EncodingUnsafe_24() { return static_cast<int32_t>(offsetof(Encoding_t1498994424_StaticFields, ___utf8EncodingUnsafe_24)); }
	inline Encoding_t1498994424 * get_utf8EncodingUnsafe_24() const { return ___utf8EncodingUnsafe_24; }
	inline Encoding_t1498994424 ** get_address_of_utf8EncodingUnsafe_24() { return &___utf8EncodingUnsafe_24; }
	inline void set_utf8EncodingUnsafe_24(Encoding_t1498994424 * value)
	{
		___utf8EncodingUnsafe_24 = value;
		Il2CppCodeGenWriteBarrier((&___utf8EncodingUnsafe_24), value);
	}

	inline static int32_t get_offset_of_utf32Encoding_25() { return static_cast<int32_t>(offsetof(Encoding_t1498994424_StaticFields, ___utf32Encoding_25)); }
	inline Encoding_t1498994424 * get_utf32Encoding_25() const { return ___utf32Encoding_25; }
	inline Encoding_t1498994424 ** get_address_of_utf32Encoding_25() { return &___utf32Encoding_25; }
	inline void set_utf32Encoding_25(Encoding_t1498994424 * value)
	{
		___utf32Encoding_25 = value;
		Il2CppCodeGenWriteBarrier((&___utf32Encoding_25), value);
	}

	inline static int32_t get_offset_of_bigEndianUTF32Encoding_26() { return static_cast<int32_t>(offsetof(Encoding_t1498994424_StaticFields, ___bigEndianUTF32Encoding_26)); }
	inline Encoding_t1498994424 * get_bigEndianUTF32Encoding_26() const { return ___bigEndianUTF32Encoding_26; }
	inline Encoding_t1498994424 ** get_address_of_bigEndianUTF32Encoding_26() { return &___bigEndianUTF32Encoding_26; }
	inline void set_bigEndianUTF32Encoding_26(Encoding_t1498994424 * value)
	{
		___bigEndianUTF32Encoding_26 = value;
		Il2CppCodeGenWriteBarrier((&___bigEndianUTF32Encoding_26), value);
	}

	inline static int32_t get_offset_of_lockobj_27() { return static_cast<int32_t>(offsetof(Encoding_t1498994424_StaticFields, ___lockobj_27)); }
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
#endif // ENCODING_T1498994424_H
#ifndef VALUETYPE_T3693359752_H
#define VALUETYPE_T3693359752_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3693359752  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3693359752_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3693359752_marshaled_com
{
};
#endif // VALUETYPE_T3693359752_H
#ifndef SERIALIZABLEPOINTCLOUD_T3916281303_H
#define SERIALIZABLEPOINTCLOUD_T3916281303_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Utils.serializablePointCloud
struct  serializablePointCloud_t3916281303  : public RuntimeObject
{
public:
	// System.Byte[] Utils.serializablePointCloud::pointCloudData
	ByteU5BU5D_t1557752011* ___pointCloudData_0;

public:
	inline static int32_t get_offset_of_pointCloudData_0() { return static_cast<int32_t>(offsetof(serializablePointCloud_t3916281303, ___pointCloudData_0)); }
	inline ByteU5BU5D_t1557752011* get_pointCloudData_0() const { return ___pointCloudData_0; }
	inline ByteU5BU5D_t1557752011** get_address_of_pointCloudData_0() { return &___pointCloudData_0; }
	inline void set_pointCloudData_0(ByteU5BU5D_t1557752011* value)
	{
		___pointCloudData_0 = value;
		Il2CppCodeGenWriteBarrier((&___pointCloudData_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZABLEPOINTCLOUD_T3916281303_H
#ifndef SERIALIZABLEVECTOR4_T1399205435_H
#define SERIALIZABLEVECTOR4_T1399205435_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Utils.SerializableVector4
struct  SerializableVector4_t1399205435  : public RuntimeObject
{
public:
	// System.Single Utils.SerializableVector4::x
	float ___x_0;
	// System.Single Utils.SerializableVector4::y
	float ___y_1;
	// System.Single Utils.SerializableVector4::z
	float ___z_2;
	// System.Single Utils.SerializableVector4::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(SerializableVector4_t1399205435, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(SerializableVector4_t1399205435, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(SerializableVector4_t1399205435, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(SerializableVector4_t1399205435, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZABLEVECTOR4_T1399205435_H
#ifndef SERIALIZABLEUNITYARMATRIX4X4_T2915064193_H
#define SERIALIZABLEUNITYARMATRIX4X4_T2915064193_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Utils.serializableUnityARMatrix4x4
struct  serializableUnityARMatrix4x4_t2915064193  : public RuntimeObject
{
public:
	// Utils.SerializableVector4 Utils.serializableUnityARMatrix4x4::column0
	SerializableVector4_t1399205435 * ___column0_0;
	// Utils.SerializableVector4 Utils.serializableUnityARMatrix4x4::column1
	SerializableVector4_t1399205435 * ___column1_1;
	// Utils.SerializableVector4 Utils.serializableUnityARMatrix4x4::column2
	SerializableVector4_t1399205435 * ___column2_2;
	// Utils.SerializableVector4 Utils.serializableUnityARMatrix4x4::column3
	SerializableVector4_t1399205435 * ___column3_3;

public:
	inline static int32_t get_offset_of_column0_0() { return static_cast<int32_t>(offsetof(serializableUnityARMatrix4x4_t2915064193, ___column0_0)); }
	inline SerializableVector4_t1399205435 * get_column0_0() const { return ___column0_0; }
	inline SerializableVector4_t1399205435 ** get_address_of_column0_0() { return &___column0_0; }
	inline void set_column0_0(SerializableVector4_t1399205435 * value)
	{
		___column0_0 = value;
		Il2CppCodeGenWriteBarrier((&___column0_0), value);
	}

	inline static int32_t get_offset_of_column1_1() { return static_cast<int32_t>(offsetof(serializableUnityARMatrix4x4_t2915064193, ___column1_1)); }
	inline SerializableVector4_t1399205435 * get_column1_1() const { return ___column1_1; }
	inline SerializableVector4_t1399205435 ** get_address_of_column1_1() { return &___column1_1; }
	inline void set_column1_1(SerializableVector4_t1399205435 * value)
	{
		___column1_1 = value;
		Il2CppCodeGenWriteBarrier((&___column1_1), value);
	}

	inline static int32_t get_offset_of_column2_2() { return static_cast<int32_t>(offsetof(serializableUnityARMatrix4x4_t2915064193, ___column2_2)); }
	inline SerializableVector4_t1399205435 * get_column2_2() const { return ___column2_2; }
	inline SerializableVector4_t1399205435 ** get_address_of_column2_2() { return &___column2_2; }
	inline void set_column2_2(SerializableVector4_t1399205435 * value)
	{
		___column2_2 = value;
		Il2CppCodeGenWriteBarrier((&___column2_2), value);
	}

	inline static int32_t get_offset_of_column3_3() { return static_cast<int32_t>(offsetof(serializableUnityARMatrix4x4_t2915064193, ___column3_3)); }
	inline SerializableVector4_t1399205435 * get_column3_3() const { return ___column3_3; }
	inline SerializableVector4_t1399205435 ** get_address_of_column3_3() { return &___column3_3; }
	inline void set_column3_3(SerializableVector4_t1399205435 * value)
	{
		___column3_3 = value;
		Il2CppCodeGenWriteBarrier((&___column3_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZABLEUNITYARMATRIX4X4_T2915064193_H
#ifndef INT32_T693475151_H
#define INT32_T693475151_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t693475151 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t693475151, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T693475151_H
#ifndef ENUM_T2725998971_H
#define ENUM_T2725998971_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t2725998971  : public ValueType_t3693359752
{
public:

public:
};

struct Enum_t2725998971_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3928129731* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t2725998971_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3928129731* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3928129731** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3928129731* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2725998971_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2725998971_marshaled_com
{
};
#endif // ENUM_T2725998971_H
#ifndef SINGLE_T2130586693_H
#define SINGLE_T2130586693_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t2130586693 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t2130586693, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T2130586693_H
#ifndef BYTE_T1835340670_H
#define BYTE_T1835340670_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Byte
struct  Byte_t1835340670 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Byte_t1835340670, ___m_value_2)); }
	inline uint8_t get_m_value_2() const { return ___m_value_2; }
	inline uint8_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint8_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTE_T1835340670_H
#ifndef UNITYARLIGHTESTIMATE_T1687952017_H
#define UNITYARLIGHTESTIMATE_T1687952017_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARLightEstimate
struct  UnityARLightEstimate_t1687952017 
{
public:
	// System.Single UnityEngine.XR.iOS.UnityARLightEstimate::ambientIntensity
	float ___ambientIntensity_0;
	// System.Single UnityEngine.XR.iOS.UnityARLightEstimate::ambientColorTemperature
	float ___ambientColorTemperature_1;

public:
	inline static int32_t get_offset_of_ambientIntensity_0() { return static_cast<int32_t>(offsetof(UnityARLightEstimate_t1687952017, ___ambientIntensity_0)); }
	inline float get_ambientIntensity_0() const { return ___ambientIntensity_0; }
	inline float* get_address_of_ambientIntensity_0() { return &___ambientIntensity_0; }
	inline void set_ambientIntensity_0(float value)
	{
		___ambientIntensity_0 = value;
	}

	inline static int32_t get_offset_of_ambientColorTemperature_1() { return static_cast<int32_t>(offsetof(UnityARLightEstimate_t1687952017, ___ambientColorTemperature_1)); }
	inline float get_ambientColorTemperature_1() const { return ___ambientColorTemperature_1; }
	inline float* get_address_of_ambientColorTemperature_1() { return &___ambientColorTemperature_1; }
	inline void set_ambientColorTemperature_1(float value)
	{
		___ambientColorTemperature_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARLIGHTESTIMATE_T1687952017_H
#ifndef MATRIX4X4_T2943786656_H
#define MATRIX4X4_T2943786656_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Matrix4x4
struct  Matrix4x4_t2943786656 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t2943786656, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t2943786656, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t2943786656, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t2943786656, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t2943786656, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t2943786656, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t2943786656, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t2943786656, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t2943786656, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t2943786656, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t2943786656, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t2943786656, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t2943786656, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t2943786656, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t2943786656, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t2943786656, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_t2943786656_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_t2943786656  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_t2943786656  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t2943786656_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_t2943786656  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_t2943786656 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_t2943786656  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_t2943786656_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_t2943786656  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_t2943786656 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_t2943786656  value)
	{
		___identityMatrix_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATRIX4X4_T2943786656_H
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
#ifndef VECTOR3_T3940485_H
#define VECTOR3_T3940485_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3940485 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t3940485, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t3940485, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t3940485, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t3940485_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3940485  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3940485  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3940485  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3940485  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3940485  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3940485  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3940485  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3940485  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3940485  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3940485  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t3940485_StaticFields, ___zeroVector_4)); }
	inline Vector3_t3940485  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t3940485 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t3940485  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3940485_StaticFields, ___oneVector_5)); }
	inline Vector3_t3940485  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t3940485 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t3940485  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3940485_StaticFields, ___upVector_6)); }
	inline Vector3_t3940485  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t3940485 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t3940485  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3940485_StaticFields, ___downVector_7)); }
	inline Vector3_t3940485  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t3940485 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t3940485  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3940485_StaticFields, ___leftVector_8)); }
	inline Vector3_t3940485  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t3940485 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t3940485  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3940485_StaticFields, ___rightVector_9)); }
	inline Vector3_t3940485  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t3940485 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t3940485  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3940485_StaticFields, ___forwardVector_10)); }
	inline Vector3_t3940485  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t3940485 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t3940485  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3940485_StaticFields, ___backVector_11)); }
	inline Vector3_t3940485  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t3940485 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t3940485  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3940485_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t3940485  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t3940485 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t3940485  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3940485_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t3940485  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t3940485 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t3940485  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3940485_H
#ifndef VOID_T2682914905_H
#define VOID_T2682914905_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t2682914905 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T2682914905_H
#ifndef VECTOR4_T2495583457_H
#define VECTOR4_T2495583457_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector4
struct  Vector4_t2495583457 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_t2495583457, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_t2495583457, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_t2495583457, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_t2495583457, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_t2495583457_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t2495583457  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t2495583457  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t2495583457  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t2495583457  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_t2495583457_StaticFields, ___zeroVector_5)); }
	inline Vector4_t2495583457  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_t2495583457 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_t2495583457  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_t2495583457_StaticFields, ___oneVector_6)); }
	inline Vector4_t2495583457  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_t2495583457 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_t2495583457  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_t2495583457_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_t2495583457  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_t2495583457 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_t2495583457  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_t2495583457_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_t2495583457  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_t2495583457 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_t2495583457  value)
	{
		___negativeInfinityVector_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR4_T2495583457_H
#ifndef ARTRACKINGSTATE_T1731383584_H
#define ARTRACKINGSTATE_T1731383584_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARTrackingState
struct  ARTrackingState_t1731383584 
{
public:
	// System.Int32 UnityEngine.XR.iOS.ARTrackingState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ARTrackingState_t1731383584, ___value___1)); }
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
#endif // ARTRACKINGSTATE_T1731383584_H
#ifndef ARPLANEANCHORALIGNMENT_T3310361647_H
#define ARPLANEANCHORALIGNMENT_T3310361647_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARPlaneAnchorAlignment
struct  ARPlaneAnchorAlignment_t3310361647 
{
public:
	// System.Int64 UnityEngine.XR.iOS.ARPlaneAnchorAlignment::value__
	int64_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ARPlaneAnchorAlignment_t3310361647, ___value___1)); }
	inline int64_t get_value___1() const { return ___value___1; }
	inline int64_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int64_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARPLANEANCHORALIGNMENT_T3310361647_H
#ifndef UNITYARMATRIX4X4_T617019936_H
#define UNITYARMATRIX4X4_T617019936_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARMatrix4x4
struct  UnityARMatrix4x4_t617019936 
{
public:
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARMatrix4x4::column0
	Vector4_t2495583457  ___column0_0;
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARMatrix4x4::column1
	Vector4_t2495583457  ___column1_1;
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARMatrix4x4::column2
	Vector4_t2495583457  ___column2_2;
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARMatrix4x4::column3
	Vector4_t2495583457  ___column3_3;

public:
	inline static int32_t get_offset_of_column0_0() { return static_cast<int32_t>(offsetof(UnityARMatrix4x4_t617019936, ___column0_0)); }
	inline Vector4_t2495583457  get_column0_0() const { return ___column0_0; }
	inline Vector4_t2495583457 * get_address_of_column0_0() { return &___column0_0; }
	inline void set_column0_0(Vector4_t2495583457  value)
	{
		___column0_0 = value;
	}

	inline static int32_t get_offset_of_column1_1() { return static_cast<int32_t>(offsetof(UnityARMatrix4x4_t617019936, ___column1_1)); }
	inline Vector4_t2495583457  get_column1_1() const { return ___column1_1; }
	inline Vector4_t2495583457 * get_address_of_column1_1() { return &___column1_1; }
	inline void set_column1_1(Vector4_t2495583457  value)
	{
		___column1_1 = value;
	}

	inline static int32_t get_offset_of_column2_2() { return static_cast<int32_t>(offsetof(UnityARMatrix4x4_t617019936, ___column2_2)); }
	inline Vector4_t2495583457  get_column2_2() const { return ___column2_2; }
	inline Vector4_t2495583457 * get_address_of_column2_2() { return &___column2_2; }
	inline void set_column2_2(Vector4_t2495583457  value)
	{
		___column2_2 = value;
	}

	inline static int32_t get_offset_of_column3_3() { return static_cast<int32_t>(offsetof(UnityARMatrix4x4_t617019936, ___column3_3)); }
	inline Vector4_t2495583457  get_column3_3() const { return ___column3_3; }
	inline Vector4_t2495583457 * get_address_of_column3_3() { return &___column3_3; }
	inline void set_column3_3(Vector4_t2495583457  value)
	{
		___column3_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARMATRIX4X4_T617019936_H
#ifndef ARTRACKINGSTATEREASON_T4217549160_H
#define ARTRACKINGSTATEREASON_T4217549160_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARTrackingStateReason
struct  ARTrackingStateReason_t4217549160 
{
public:
	// System.Int32 UnityEngine.XR.iOS.ARTrackingStateReason::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ARTrackingStateReason_t4217549160, ___value___1)); }
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
#endif // ARTRACKINGSTATEREASON_T4217549160_H
#ifndef UNITYVIDEOPARAMS_T266225262_H
#define UNITYVIDEOPARAMS_T266225262_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityVideoParams
struct  UnityVideoParams_t266225262 
{
public:
	// System.Int32 UnityEngine.XR.iOS.UnityVideoParams::yWidth
	int32_t ___yWidth_0;
	// System.Int32 UnityEngine.XR.iOS.UnityVideoParams::yHeight
	int32_t ___yHeight_1;
	// System.Int32 UnityEngine.XR.iOS.UnityVideoParams::screenOrientation
	int32_t ___screenOrientation_2;
	// System.Single UnityEngine.XR.iOS.UnityVideoParams::texCoordScale
	float ___texCoordScale_3;
	// System.IntPtr UnityEngine.XR.iOS.UnityVideoParams::cvPixelBufferPtr
	intptr_t ___cvPixelBufferPtr_4;

public:
	inline static int32_t get_offset_of_yWidth_0() { return static_cast<int32_t>(offsetof(UnityVideoParams_t266225262, ___yWidth_0)); }
	inline int32_t get_yWidth_0() const { return ___yWidth_0; }
	inline int32_t* get_address_of_yWidth_0() { return &___yWidth_0; }
	inline void set_yWidth_0(int32_t value)
	{
		___yWidth_0 = value;
	}

	inline static int32_t get_offset_of_yHeight_1() { return static_cast<int32_t>(offsetof(UnityVideoParams_t266225262, ___yHeight_1)); }
	inline int32_t get_yHeight_1() const { return ___yHeight_1; }
	inline int32_t* get_address_of_yHeight_1() { return &___yHeight_1; }
	inline void set_yHeight_1(int32_t value)
	{
		___yHeight_1 = value;
	}

	inline static int32_t get_offset_of_screenOrientation_2() { return static_cast<int32_t>(offsetof(UnityVideoParams_t266225262, ___screenOrientation_2)); }
	inline int32_t get_screenOrientation_2() const { return ___screenOrientation_2; }
	inline int32_t* get_address_of_screenOrientation_2() { return &___screenOrientation_2; }
	inline void set_screenOrientation_2(int32_t value)
	{
		___screenOrientation_2 = value;
	}

	inline static int32_t get_offset_of_texCoordScale_3() { return static_cast<int32_t>(offsetof(UnityVideoParams_t266225262, ___texCoordScale_3)); }
	inline float get_texCoordScale_3() const { return ___texCoordScale_3; }
	inline float* get_address_of_texCoordScale_3() { return &___texCoordScale_3; }
	inline void set_texCoordScale_3(float value)
	{
		___texCoordScale_3 = value;
	}

	inline static int32_t get_offset_of_cvPixelBufferPtr_4() { return static_cast<int32_t>(offsetof(UnityVideoParams_t266225262, ___cvPixelBufferPtr_4)); }
	inline intptr_t get_cvPixelBufferPtr_4() const { return ___cvPixelBufferPtr_4; }
	inline intptr_t* get_address_of_cvPixelBufferPtr_4() { return &___cvPixelBufferPtr_4; }
	inline void set_cvPixelBufferPtr_4(intptr_t value)
	{
		___cvPixelBufferPtr_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYVIDEOPARAMS_T266225262_H
#ifndef SERIALIZABLEUNITYARPLANEANCHOR_T4107818447_H
#define SERIALIZABLEUNITYARPLANEANCHOR_T4107818447_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Utils.serializableUnityARPlaneAnchor
struct  serializableUnityARPlaneAnchor_t4107818447  : public RuntimeObject
{
public:
	// Utils.serializableUnityARMatrix4x4 Utils.serializableUnityARPlaneAnchor::worldTransform
	serializableUnityARMatrix4x4_t2915064193 * ___worldTransform_0;
	// Utils.SerializableVector4 Utils.serializableUnityARPlaneAnchor::center
	SerializableVector4_t1399205435 * ___center_1;
	// Utils.SerializableVector4 Utils.serializableUnityARPlaneAnchor::extent
	SerializableVector4_t1399205435 * ___extent_2;
	// UnityEngine.XR.iOS.ARPlaneAnchorAlignment Utils.serializableUnityARPlaneAnchor::planeAlignment
	int64_t ___planeAlignment_3;
	// System.Byte[] Utils.serializableUnityARPlaneAnchor::identifierStr
	ByteU5BU5D_t1557752011* ___identifierStr_4;

public:
	inline static int32_t get_offset_of_worldTransform_0() { return static_cast<int32_t>(offsetof(serializableUnityARPlaneAnchor_t4107818447, ___worldTransform_0)); }
	inline serializableUnityARMatrix4x4_t2915064193 * get_worldTransform_0() const { return ___worldTransform_0; }
	inline serializableUnityARMatrix4x4_t2915064193 ** get_address_of_worldTransform_0() { return &___worldTransform_0; }
	inline void set_worldTransform_0(serializableUnityARMatrix4x4_t2915064193 * value)
	{
		___worldTransform_0 = value;
		Il2CppCodeGenWriteBarrier((&___worldTransform_0), value);
	}

	inline static int32_t get_offset_of_center_1() { return static_cast<int32_t>(offsetof(serializableUnityARPlaneAnchor_t4107818447, ___center_1)); }
	inline SerializableVector4_t1399205435 * get_center_1() const { return ___center_1; }
	inline SerializableVector4_t1399205435 ** get_address_of_center_1() { return &___center_1; }
	inline void set_center_1(SerializableVector4_t1399205435 * value)
	{
		___center_1 = value;
		Il2CppCodeGenWriteBarrier((&___center_1), value);
	}

	inline static int32_t get_offset_of_extent_2() { return static_cast<int32_t>(offsetof(serializableUnityARPlaneAnchor_t4107818447, ___extent_2)); }
	inline SerializableVector4_t1399205435 * get_extent_2() const { return ___extent_2; }
	inline SerializableVector4_t1399205435 ** get_address_of_extent_2() { return &___extent_2; }
	inline void set_extent_2(SerializableVector4_t1399205435 * value)
	{
		___extent_2 = value;
		Il2CppCodeGenWriteBarrier((&___extent_2), value);
	}

	inline static int32_t get_offset_of_planeAlignment_3() { return static_cast<int32_t>(offsetof(serializableUnityARPlaneAnchor_t4107818447, ___planeAlignment_3)); }
	inline int64_t get_planeAlignment_3() const { return ___planeAlignment_3; }
	inline int64_t* get_address_of_planeAlignment_3() { return &___planeAlignment_3; }
	inline void set_planeAlignment_3(int64_t value)
	{
		___planeAlignment_3 = value;
	}

	inline static int32_t get_offset_of_identifierStr_4() { return static_cast<int32_t>(offsetof(serializableUnityARPlaneAnchor_t4107818447, ___identifierStr_4)); }
	inline ByteU5BU5D_t1557752011* get_identifierStr_4() const { return ___identifierStr_4; }
	inline ByteU5BU5D_t1557752011** get_address_of_identifierStr_4() { return &___identifierStr_4; }
	inline void set_identifierStr_4(ByteU5BU5D_t1557752011* value)
	{
		___identifierStr_4 = value;
		Il2CppCodeGenWriteBarrier((&___identifierStr_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZABLEUNITYARPLANEANCHOR_T4107818447_H
#ifndef ARPLANEANCHOR_T890021806_H
#define ARPLANEANCHOR_T890021806_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARPlaneAnchor
struct  ARPlaneAnchor_t890021806 
{
public:
	// System.String UnityEngine.XR.iOS.ARPlaneAnchor::identifier
	String_t* ___identifier_0;
	// UnityEngine.Matrix4x4 UnityEngine.XR.iOS.ARPlaneAnchor::transform
	Matrix4x4_t2943786656  ___transform_1;
	// UnityEngine.XR.iOS.ARPlaneAnchorAlignment UnityEngine.XR.iOS.ARPlaneAnchor::alignment
	int64_t ___alignment_2;
	// UnityEngine.Vector3 UnityEngine.XR.iOS.ARPlaneAnchor::center
	Vector3_t3940485  ___center_3;
	// UnityEngine.Vector3 UnityEngine.XR.iOS.ARPlaneAnchor::extent
	Vector3_t3940485  ___extent_4;

public:
	inline static int32_t get_offset_of_identifier_0() { return static_cast<int32_t>(offsetof(ARPlaneAnchor_t890021806, ___identifier_0)); }
	inline String_t* get_identifier_0() const { return ___identifier_0; }
	inline String_t** get_address_of_identifier_0() { return &___identifier_0; }
	inline void set_identifier_0(String_t* value)
	{
		___identifier_0 = value;
		Il2CppCodeGenWriteBarrier((&___identifier_0), value);
	}

	inline static int32_t get_offset_of_transform_1() { return static_cast<int32_t>(offsetof(ARPlaneAnchor_t890021806, ___transform_1)); }
	inline Matrix4x4_t2943786656  get_transform_1() const { return ___transform_1; }
	inline Matrix4x4_t2943786656 * get_address_of_transform_1() { return &___transform_1; }
	inline void set_transform_1(Matrix4x4_t2943786656  value)
	{
		___transform_1 = value;
	}

	inline static int32_t get_offset_of_alignment_2() { return static_cast<int32_t>(offsetof(ARPlaneAnchor_t890021806, ___alignment_2)); }
	inline int64_t get_alignment_2() const { return ___alignment_2; }
	inline int64_t* get_address_of_alignment_2() { return &___alignment_2; }
	inline void set_alignment_2(int64_t value)
	{
		___alignment_2 = value;
	}

	inline static int32_t get_offset_of_center_3() { return static_cast<int32_t>(offsetof(ARPlaneAnchor_t890021806, ___center_3)); }
	inline Vector3_t3940485  get_center_3() const { return ___center_3; }
	inline Vector3_t3940485 * get_address_of_center_3() { return &___center_3; }
	inline void set_center_3(Vector3_t3940485  value)
	{
		___center_3 = value;
	}

	inline static int32_t get_offset_of_extent_4() { return static_cast<int32_t>(offsetof(ARPlaneAnchor_t890021806, ___extent_4)); }
	inline Vector3_t3940485  get_extent_4() const { return ___extent_4; }
	inline Vector3_t3940485 * get_address_of_extent_4() { return &___extent_4; }
	inline void set_extent_4(Vector3_t3940485  value)
	{
		___extent_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.XR.iOS.ARPlaneAnchor
struct ARPlaneAnchor_t890021806_marshaled_pinvoke
{
	char* ___identifier_0;
	Matrix4x4_t2943786656  ___transform_1;
	int64_t ___alignment_2;
	Vector3_t3940485  ___center_3;
	Vector3_t3940485  ___extent_4;
};
// Native definition for COM marshalling of UnityEngine.XR.iOS.ARPlaneAnchor
struct ARPlaneAnchor_t890021806_marshaled_com
{
	Il2CppChar* ___identifier_0;
	Matrix4x4_t2943786656  ___transform_1;
	int64_t ___alignment_2;
	Vector3_t3940485  ___center_3;
	Vector3_t3940485  ___extent_4;
};
#endif // ARPLANEANCHOR_T890021806_H
#ifndef UNITYARCAMERA_T1287293980_H
#define UNITYARCAMERA_T1287293980_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARCamera
struct  UnityARCamera_t1287293980 
{
public:
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.UnityARCamera::worldTransform
	UnityARMatrix4x4_t617019936  ___worldTransform_0;
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.UnityARCamera::projectionMatrix
	UnityARMatrix4x4_t617019936  ___projectionMatrix_1;
	// UnityEngine.XR.iOS.ARTrackingState UnityEngine.XR.iOS.UnityARCamera::trackingState
	int32_t ___trackingState_2;
	// UnityEngine.XR.iOS.ARTrackingStateReason UnityEngine.XR.iOS.UnityARCamera::trackingReason
	int32_t ___trackingReason_3;
	// UnityEngine.XR.iOS.UnityVideoParams UnityEngine.XR.iOS.UnityARCamera::videoParams
	UnityVideoParams_t266225262  ___videoParams_4;
	// UnityEngine.XR.iOS.UnityARLightEstimate UnityEngine.XR.iOS.UnityARCamera::lightEstimation
	UnityARLightEstimate_t1687952017  ___lightEstimation_5;
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.UnityARCamera::displayTransform
	UnityARMatrix4x4_t617019936  ___displayTransform_6;
	// UnityEngine.Vector3[] UnityEngine.XR.iOS.UnityARCamera::pointCloudData
	Vector3U5BU5D_t2380659656* ___pointCloudData_7;

public:
	inline static int32_t get_offset_of_worldTransform_0() { return static_cast<int32_t>(offsetof(UnityARCamera_t1287293980, ___worldTransform_0)); }
	inline UnityARMatrix4x4_t617019936  get_worldTransform_0() const { return ___worldTransform_0; }
	inline UnityARMatrix4x4_t617019936 * get_address_of_worldTransform_0() { return &___worldTransform_0; }
	inline void set_worldTransform_0(UnityARMatrix4x4_t617019936  value)
	{
		___worldTransform_0 = value;
	}

	inline static int32_t get_offset_of_projectionMatrix_1() { return static_cast<int32_t>(offsetof(UnityARCamera_t1287293980, ___projectionMatrix_1)); }
	inline UnityARMatrix4x4_t617019936  get_projectionMatrix_1() const { return ___projectionMatrix_1; }
	inline UnityARMatrix4x4_t617019936 * get_address_of_projectionMatrix_1() { return &___projectionMatrix_1; }
	inline void set_projectionMatrix_1(UnityARMatrix4x4_t617019936  value)
	{
		___projectionMatrix_1 = value;
	}

	inline static int32_t get_offset_of_trackingState_2() { return static_cast<int32_t>(offsetof(UnityARCamera_t1287293980, ___trackingState_2)); }
	inline int32_t get_trackingState_2() const { return ___trackingState_2; }
	inline int32_t* get_address_of_trackingState_2() { return &___trackingState_2; }
	inline void set_trackingState_2(int32_t value)
	{
		___trackingState_2 = value;
	}

	inline static int32_t get_offset_of_trackingReason_3() { return static_cast<int32_t>(offsetof(UnityARCamera_t1287293980, ___trackingReason_3)); }
	inline int32_t get_trackingReason_3() const { return ___trackingReason_3; }
	inline int32_t* get_address_of_trackingReason_3() { return &___trackingReason_3; }
	inline void set_trackingReason_3(int32_t value)
	{
		___trackingReason_3 = value;
	}

	inline static int32_t get_offset_of_videoParams_4() { return static_cast<int32_t>(offsetof(UnityARCamera_t1287293980, ___videoParams_4)); }
	inline UnityVideoParams_t266225262  get_videoParams_4() const { return ___videoParams_4; }
	inline UnityVideoParams_t266225262 * get_address_of_videoParams_4() { return &___videoParams_4; }
	inline void set_videoParams_4(UnityVideoParams_t266225262  value)
	{
		___videoParams_4 = value;
	}

	inline static int32_t get_offset_of_lightEstimation_5() { return static_cast<int32_t>(offsetof(UnityARCamera_t1287293980, ___lightEstimation_5)); }
	inline UnityARLightEstimate_t1687952017  get_lightEstimation_5() const { return ___lightEstimation_5; }
	inline UnityARLightEstimate_t1687952017 * get_address_of_lightEstimation_5() { return &___lightEstimation_5; }
	inline void set_lightEstimation_5(UnityARLightEstimate_t1687952017  value)
	{
		___lightEstimation_5 = value;
	}

	inline static int32_t get_offset_of_displayTransform_6() { return static_cast<int32_t>(offsetof(UnityARCamera_t1287293980, ___displayTransform_6)); }
	inline UnityARMatrix4x4_t617019936  get_displayTransform_6() const { return ___displayTransform_6; }
	inline UnityARMatrix4x4_t617019936 * get_address_of_displayTransform_6() { return &___displayTransform_6; }
	inline void set_displayTransform_6(UnityARMatrix4x4_t617019936  value)
	{
		___displayTransform_6 = value;
	}

	inline static int32_t get_offset_of_pointCloudData_7() { return static_cast<int32_t>(offsetof(UnityARCamera_t1287293980, ___pointCloudData_7)); }
	inline Vector3U5BU5D_t2380659656* get_pointCloudData_7() const { return ___pointCloudData_7; }
	inline Vector3U5BU5D_t2380659656** get_address_of_pointCloudData_7() { return &___pointCloudData_7; }
	inline void set_pointCloudData_7(Vector3U5BU5D_t2380659656* value)
	{
		___pointCloudData_7 = value;
		Il2CppCodeGenWriteBarrier((&___pointCloudData_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.XR.iOS.UnityARCamera
struct UnityARCamera_t1287293980_marshaled_pinvoke
{
	UnityARMatrix4x4_t617019936  ___worldTransform_0;
	UnityARMatrix4x4_t617019936  ___projectionMatrix_1;
	int32_t ___trackingState_2;
	int32_t ___trackingReason_3;
	UnityVideoParams_t266225262  ___videoParams_4;
	UnityARLightEstimate_t1687952017  ___lightEstimation_5;
	UnityARMatrix4x4_t617019936  ___displayTransform_6;
	Vector3_t3940485 * ___pointCloudData_7;
};
// Native definition for COM marshalling of UnityEngine.XR.iOS.UnityARCamera
struct UnityARCamera_t1287293980_marshaled_com
{
	UnityARMatrix4x4_t617019936  ___worldTransform_0;
	UnityARMatrix4x4_t617019936  ___projectionMatrix_1;
	int32_t ___trackingState_2;
	int32_t ___trackingReason_3;
	UnityVideoParams_t266225262  ___videoParams_4;
	UnityARLightEstimate_t1687952017  ___lightEstimation_5;
	UnityARMatrix4x4_t617019936  ___displayTransform_6;
	Vector3_t3940485 * ___pointCloudData_7;
};
#endif // UNITYARCAMERA_T1287293980_H
#ifndef SERIALIZABLEUNITYARCAMERA_T1479866927_H
#define SERIALIZABLEUNITYARCAMERA_T1479866927_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Utils.serializableUnityARCamera
struct  serializableUnityARCamera_t1479866927  : public RuntimeObject
{
public:
	// Utils.serializableUnityARMatrix4x4 Utils.serializableUnityARCamera::worldTransform
	serializableUnityARMatrix4x4_t2915064193 * ___worldTransform_0;
	// Utils.serializableUnityARMatrix4x4 Utils.serializableUnityARCamera::projectionMatrix
	serializableUnityARMatrix4x4_t2915064193 * ___projectionMatrix_1;
	// UnityEngine.XR.iOS.ARTrackingState Utils.serializableUnityARCamera::trackingState
	int32_t ___trackingState_2;
	// UnityEngine.XR.iOS.ARTrackingStateReason Utils.serializableUnityARCamera::trackingReason
	int32_t ___trackingReason_3;
	// UnityEngine.XR.iOS.UnityVideoParams Utils.serializableUnityARCamera::videoParams
	UnityVideoParams_t266225262  ___videoParams_4;
	// UnityEngine.XR.iOS.UnityARLightEstimate Utils.serializableUnityARCamera::lightEstimation
	UnityARLightEstimate_t1687952017  ___lightEstimation_5;
	// Utils.serializablePointCloud Utils.serializableUnityARCamera::pointCloud
	serializablePointCloud_t3916281303 * ___pointCloud_6;
	// Utils.serializableUnityARMatrix4x4 Utils.serializableUnityARCamera::displayTransform
	serializableUnityARMatrix4x4_t2915064193 * ___displayTransform_7;

public:
	inline static int32_t get_offset_of_worldTransform_0() { return static_cast<int32_t>(offsetof(serializableUnityARCamera_t1479866927, ___worldTransform_0)); }
	inline serializableUnityARMatrix4x4_t2915064193 * get_worldTransform_0() const { return ___worldTransform_0; }
	inline serializableUnityARMatrix4x4_t2915064193 ** get_address_of_worldTransform_0() { return &___worldTransform_0; }
	inline void set_worldTransform_0(serializableUnityARMatrix4x4_t2915064193 * value)
	{
		___worldTransform_0 = value;
		Il2CppCodeGenWriteBarrier((&___worldTransform_0), value);
	}

	inline static int32_t get_offset_of_projectionMatrix_1() { return static_cast<int32_t>(offsetof(serializableUnityARCamera_t1479866927, ___projectionMatrix_1)); }
	inline serializableUnityARMatrix4x4_t2915064193 * get_projectionMatrix_1() const { return ___projectionMatrix_1; }
	inline serializableUnityARMatrix4x4_t2915064193 ** get_address_of_projectionMatrix_1() { return &___projectionMatrix_1; }
	inline void set_projectionMatrix_1(serializableUnityARMatrix4x4_t2915064193 * value)
	{
		___projectionMatrix_1 = value;
		Il2CppCodeGenWriteBarrier((&___projectionMatrix_1), value);
	}

	inline static int32_t get_offset_of_trackingState_2() { return static_cast<int32_t>(offsetof(serializableUnityARCamera_t1479866927, ___trackingState_2)); }
	inline int32_t get_trackingState_2() const { return ___trackingState_2; }
	inline int32_t* get_address_of_trackingState_2() { return &___trackingState_2; }
	inline void set_trackingState_2(int32_t value)
	{
		___trackingState_2 = value;
	}

	inline static int32_t get_offset_of_trackingReason_3() { return static_cast<int32_t>(offsetof(serializableUnityARCamera_t1479866927, ___trackingReason_3)); }
	inline int32_t get_trackingReason_3() const { return ___trackingReason_3; }
	inline int32_t* get_address_of_trackingReason_3() { return &___trackingReason_3; }
	inline void set_trackingReason_3(int32_t value)
	{
		___trackingReason_3 = value;
	}

	inline static int32_t get_offset_of_videoParams_4() { return static_cast<int32_t>(offsetof(serializableUnityARCamera_t1479866927, ___videoParams_4)); }
	inline UnityVideoParams_t266225262  get_videoParams_4() const { return ___videoParams_4; }
	inline UnityVideoParams_t266225262 * get_address_of_videoParams_4() { return &___videoParams_4; }
	inline void set_videoParams_4(UnityVideoParams_t266225262  value)
	{
		___videoParams_4 = value;
	}

	inline static int32_t get_offset_of_lightEstimation_5() { return static_cast<int32_t>(offsetof(serializableUnityARCamera_t1479866927, ___lightEstimation_5)); }
	inline UnityARLightEstimate_t1687952017  get_lightEstimation_5() const { return ___lightEstimation_5; }
	inline UnityARLightEstimate_t1687952017 * get_address_of_lightEstimation_5() { return &___lightEstimation_5; }
	inline void set_lightEstimation_5(UnityARLightEstimate_t1687952017  value)
	{
		___lightEstimation_5 = value;
	}

	inline static int32_t get_offset_of_pointCloud_6() { return static_cast<int32_t>(offsetof(serializableUnityARCamera_t1479866927, ___pointCloud_6)); }
	inline serializablePointCloud_t3916281303 * get_pointCloud_6() const { return ___pointCloud_6; }
	inline serializablePointCloud_t3916281303 ** get_address_of_pointCloud_6() { return &___pointCloud_6; }
	inline void set_pointCloud_6(serializablePointCloud_t3916281303 * value)
	{
		___pointCloud_6 = value;
		Il2CppCodeGenWriteBarrier((&___pointCloud_6), value);
	}

	inline static int32_t get_offset_of_displayTransform_7() { return static_cast<int32_t>(offsetof(serializableUnityARCamera_t1479866927, ___displayTransform_7)); }
	inline serializableUnityARMatrix4x4_t2915064193 * get_displayTransform_7() const { return ___displayTransform_7; }
	inline serializableUnityARMatrix4x4_t2915064193 ** get_address_of_displayTransform_7() { return &___displayTransform_7; }
	inline void set_displayTransform_7(serializableUnityARMatrix4x4_t2915064193 * value)
	{
		___displayTransform_7 = value;
		Il2CppCodeGenWriteBarrier((&___displayTransform_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZABLEUNITYARCAMERA_T1479866927_H
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t2380659656  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_t3940485  m_Items[1];

public:
	inline Vector3_t3940485  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t3940485 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t3940485  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t3940485  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t3940485 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t3940485  value)
	{
		m_Items[index] = value;
	}
};
// System.Byte[]
struct ByteU5BU5D_t1557752011  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t3389082662  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};



// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m3637813681 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Utils.serializableUnityARMatrix4x4 Utils.serializableUnityARMatrix4x4::op_Implicit(UnityEngine.XR.iOS.UnityARMatrix4x4)
extern "C"  serializableUnityARMatrix4x4_t2915064193 * serializableUnityARMatrix4x4_op_Implicit_m1903192487 (RuntimeObject * __this /* static, unused */, UnityARMatrix4x4_t617019936  ___rValue0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Utils.serializablePointCloud Utils.serializablePointCloud::op_Implicit(UnityEngine.Vector3[])
extern "C"  serializablePointCloud_t3916281303 * serializablePointCloud_op_Implicit_m1522730843 (RuntimeObject * __this /* static, unused */, Vector3U5BU5D_t2380659656* ___vecPointCloud0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Utils.serializableUnityARCamera::.ctor(Utils.serializableUnityARMatrix4x4,Utils.serializableUnityARMatrix4x4,UnityEngine.XR.iOS.ARTrackingState,UnityEngine.XR.iOS.ARTrackingStateReason,UnityEngine.XR.iOS.UnityVideoParams,UnityEngine.XR.iOS.UnityARLightEstimate,Utils.serializableUnityARMatrix4x4,Utils.serializablePointCloud)
extern "C"  void serializableUnityARCamera__ctor_m2134989796 (serializableUnityARCamera_t1479866927 * __this, serializableUnityARMatrix4x4_t2915064193 * ___wt0, serializableUnityARMatrix4x4_t2915064193 * ___pm1, int32_t ___ats2, int32_t ___atsr3, UnityVideoParams_t266225262  ___uvp4, UnityARLightEstimate_t1687952017  ___lightEst5, serializableUnityARMatrix4x4_t2915064193 * ___dt6, serializablePointCloud_t3916281303 * ___spc7, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.XR.iOS.UnityARMatrix4x4 Utils.serializableUnityARMatrix4x4::op_Implicit(Utils.serializableUnityARMatrix4x4)
extern "C"  UnityARMatrix4x4_t617019936  serializableUnityARMatrix4x4_op_Implicit_m1626196323 (RuntimeObject * __this /* static, unused */, serializableUnityARMatrix4x4_t2915064193 * ___rValue0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] Utils.serializablePointCloud::op_Implicit(Utils.serializablePointCloud)
extern "C"  Vector3U5BU5D_t2380659656* serializablePointCloud_op_Implicit_m2730301998 (RuntimeObject * __this /* static, unused */, serializablePointCloud_t3916281303 * ___spc0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.XR.iOS.UnityARCamera::.ctor(UnityEngine.XR.iOS.UnityARMatrix4x4,UnityEngine.XR.iOS.UnityARMatrix4x4,UnityEngine.XR.iOS.ARTrackingState,UnityEngine.XR.iOS.ARTrackingStateReason,UnityEngine.XR.iOS.UnityVideoParams,UnityEngine.XR.iOS.UnityARLightEstimate,UnityEngine.XR.iOS.UnityARMatrix4x4,UnityEngine.Vector3[])
extern "C"  void UnityARCamera__ctor_m2168637484 (UnityARCamera_t1287293980 * __this, UnityARMatrix4x4_t617019936  ___wt0, UnityARMatrix4x4_t617019936  ___pm1, int32_t ___ats2, int32_t ___atsr3, UnityVideoParams_t266225262  ___uvp4, UnityARLightEstimate_t1687952017  ___lightEst5, UnityARMatrix4x4_t617019936  ___dt6, Vector3U5BU5D_t2380659656* ___pointCloud7, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Utils.SerializableVector4 Utils.SerializableVector4::op_Implicit(UnityEngine.Vector4)
extern "C"  SerializableVector4_t1399205435 * SerializableVector4_op_Implicit_m3848775500 (RuntimeObject * __this /* static, unused */, Vector4_t2495583457  ___rValue0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Utils.serializableUnityARMatrix4x4::.ctor(Utils.SerializableVector4,Utils.SerializableVector4,Utils.SerializableVector4,Utils.SerializableVector4)
extern "C"  void serializableUnityARMatrix4x4__ctor_m4038603604 (serializableUnityARMatrix4x4_t2915064193 * __this, SerializableVector4_t1399205435 * ___v00, SerializableVector4_t1399205435 * ___v11, SerializableVector4_t1399205435 * ___v22, SerializableVector4_t1399205435 * ___v33, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 Utils.SerializableVector4::op_Implicit(Utils.SerializableVector4)
extern "C"  Vector4_t2495583457  SerializableVector4_op_Implicit_m4097841552 (RuntimeObject * __this /* static, unused */, SerializableVector4_t1399205435 * ___rValue0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.XR.iOS.UnityARMatrix4x4::.ctor(UnityEngine.Vector4,UnityEngine.Vector4,UnityEngine.Vector4,UnityEngine.Vector4)
extern "C"  void UnityARMatrix4x4__ctor_m1411915885 (UnityARMatrix4x4_t617019936 * __this, Vector4_t2495583457  ___c00, Vector4_t2495583457  ___c11, Vector4_t2495583457  ___c22, Vector4_t2495583457  ___c33, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Matrix4x4::GetColumn(System.Int32)
extern "C"  Vector4_t2495583457  Matrix4x4_GetColumn_m2590135558 (Matrix4x4_t2943786656 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Matrix4x4::.ctor(UnityEngine.Vector4,UnityEngine.Vector4,UnityEngine.Vector4,UnityEngine.Vector4)
extern "C"  void Matrix4x4__ctor_m1978481103 (Matrix4x4_t2943786656 * __this, Vector4_t2495583457  p0, Vector4_t2495583457  p1, Vector4_t2495583457  p2, Vector4_t2495583457  p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Utils.serializableUnityARMatrix4x4 Utils.serializableUnityARMatrix4x4::op_Implicit(UnityEngine.Matrix4x4)
extern "C"  serializableUnityARMatrix4x4_t2915064193 * serializableUnityARMatrix4x4_op_Implicit_m3682396343 (RuntimeObject * __this /* static, unused */, Matrix4x4_t2943786656  ___rValue0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Utils.SerializableVector4::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C"  void SerializableVector4__ctor_m1312160089 (SerializableVector4_t1399205435 * __this, float ___rX0, float ___rY1, float ___rZ2, float ___rW3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
extern "C"  Encoding_t1498994424 * Encoding_get_UTF8_m2253463599 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Utils.serializableUnityARPlaneAnchor::.ctor(Utils.serializableUnityARMatrix4x4,Utils.SerializableVector4,Utils.SerializableVector4,UnityEngine.XR.iOS.ARPlaneAnchorAlignment,System.Byte[])
extern "C"  void serializableUnityARPlaneAnchor__ctor_m4210772605 (serializableUnityARPlaneAnchor_t4107818447 * __this, serializableUnityARMatrix4x4_t2915064193 * ___wt0, SerializableVector4_t1399205435 * ___ctr1, SerializableVector4_t1399205435 * ___ext2, int64_t ___apaa3, ByteU5BU5D_t1557752011* ___idstr4, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C"  void Vector3__ctor_m1718558660 (Vector3_t3940485 * __this, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 Utils.serializableUnityARMatrix4x4::op_Implicit(Utils.serializableUnityARMatrix4x4)
extern "C"  Matrix4x4_t2943786656  serializableUnityARMatrix4x4_op_Implicit_m4095083978 (RuntimeObject * __this /* static, unused */, serializableUnityARMatrix4x4_t2915064193 * ___rValue0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.String,System.Object[])
extern "C"  String_t* String_Format_m336192248 (RuntimeObject * __this /* static, unused */, String_t* p0, ObjectU5BU5D_t3389082662* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C"  void Vector4__ctor_m3551743590 (Vector4_t2495583457 * __this, float p0, float p1, float p2, float p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Utils.serializableUnityARCamera::.ctor(Utils.serializableUnityARMatrix4x4,Utils.serializableUnityARMatrix4x4,UnityEngine.XR.iOS.ARTrackingState,UnityEngine.XR.iOS.ARTrackingStateReason,UnityEngine.XR.iOS.UnityVideoParams,UnityEngine.XR.iOS.UnityARLightEstimate,Utils.serializableUnityARMatrix4x4,Utils.serializablePointCloud)
extern "C"  void serializableUnityARCamera__ctor_m2134989796 (serializableUnityARCamera_t1479866927 * __this, serializableUnityARMatrix4x4_t2915064193 * ___wt0, serializableUnityARMatrix4x4_t2915064193 * ___pm1, int32_t ___ats2, int32_t ___atsr3, UnityVideoParams_t266225262  ___uvp4, UnityARLightEstimate_t1687952017  ___lightEst5, serializableUnityARMatrix4x4_t2915064193 * ___dt6, serializablePointCloud_t3916281303 * ___spc7, const RuntimeMethod* method)
{
	{
		Object__ctor_m3637813681(__this, /*hidden argument*/NULL);
		serializableUnityARMatrix4x4_t2915064193 * L_0 = ___wt0;
		__this->set_worldTransform_0(L_0);
		serializableUnityARMatrix4x4_t2915064193 * L_1 = ___pm1;
		__this->set_projectionMatrix_1(L_1);
		int32_t L_2 = ___ats2;
		__this->set_trackingState_2(L_2);
		int32_t L_3 = ___atsr3;
		__this->set_trackingReason_3(L_3);
		UnityVideoParams_t266225262  L_4 = ___uvp4;
		__this->set_videoParams_4(L_4);
		UnityARLightEstimate_t1687952017  L_5 = ___lightEst5;
		__this->set_lightEstimation_5(L_5);
		serializableUnityARMatrix4x4_t2915064193 * L_6 = ___dt6;
		__this->set_displayTransform_7(L_6);
		serializablePointCloud_t3916281303 * L_7 = ___spc7;
		__this->set_pointCloud_6(L_7);
		return;
	}
}
// Utils.serializableUnityARCamera Utils.serializableUnityARCamera::op_Implicit(UnityEngine.XR.iOS.UnityARCamera)
extern "C"  serializableUnityARCamera_t1479866927 * serializableUnityARCamera_op_Implicit_m1697303898 (RuntimeObject * __this /* static, unused */, UnityARCamera_t1287293980  ___rValue0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (serializableUnityARCamera_op_Implicit_m1697303898_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityARMatrix4x4_t617019936  L_0 = (&___rValue0)->get_worldTransform_0();
		serializableUnityARMatrix4x4_t2915064193 * L_1 = serializableUnityARMatrix4x4_op_Implicit_m1903192487(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		UnityARMatrix4x4_t617019936  L_2 = (&___rValue0)->get_projectionMatrix_1();
		serializableUnityARMatrix4x4_t2915064193 * L_3 = serializableUnityARMatrix4x4_op_Implicit_m1903192487(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		int32_t L_4 = (&___rValue0)->get_trackingState_2();
		int32_t L_5 = (&___rValue0)->get_trackingReason_3();
		UnityVideoParams_t266225262  L_6 = (&___rValue0)->get_videoParams_4();
		UnityARLightEstimate_t1687952017  L_7 = (&___rValue0)->get_lightEstimation_5();
		UnityARMatrix4x4_t617019936  L_8 = (&___rValue0)->get_displayTransform_6();
		serializableUnityARMatrix4x4_t2915064193 * L_9 = serializableUnityARMatrix4x4_op_Implicit_m1903192487(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		Vector3U5BU5D_t2380659656* L_10 = (&___rValue0)->get_pointCloudData_7();
		serializablePointCloud_t3916281303 * L_11 = serializablePointCloud_op_Implicit_m1522730843(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		serializableUnityARCamera_t1479866927 * L_12 = (serializableUnityARCamera_t1479866927 *)il2cpp_codegen_object_new(serializableUnityARCamera_t1479866927_il2cpp_TypeInfo_var);
		serializableUnityARCamera__ctor_m2134989796(L_12, L_1, L_3, L_4, L_5, L_6, L_7, L_9, L_11, /*hidden argument*/NULL);
		return L_12;
	}
}
// UnityEngine.XR.iOS.UnityARCamera Utils.serializableUnityARCamera::op_Implicit(Utils.serializableUnityARCamera)
extern "C"  UnityARCamera_t1287293980  serializableUnityARCamera_op_Implicit_m3650198370 (RuntimeObject * __this /* static, unused */, serializableUnityARCamera_t1479866927 * ___rValue0, const RuntimeMethod* method)
{
	{
		serializableUnityARCamera_t1479866927 * L_0 = ___rValue0;
		NullCheck(L_0);
		serializableUnityARMatrix4x4_t2915064193 * L_1 = L_0->get_worldTransform_0();
		UnityARMatrix4x4_t617019936  L_2 = serializableUnityARMatrix4x4_op_Implicit_m1626196323(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		serializableUnityARCamera_t1479866927 * L_3 = ___rValue0;
		NullCheck(L_3);
		serializableUnityARMatrix4x4_t2915064193 * L_4 = L_3->get_projectionMatrix_1();
		UnityARMatrix4x4_t617019936  L_5 = serializableUnityARMatrix4x4_op_Implicit_m1626196323(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		serializableUnityARCamera_t1479866927 * L_6 = ___rValue0;
		NullCheck(L_6);
		int32_t L_7 = L_6->get_trackingState_2();
		serializableUnityARCamera_t1479866927 * L_8 = ___rValue0;
		NullCheck(L_8);
		int32_t L_9 = L_8->get_trackingReason_3();
		serializableUnityARCamera_t1479866927 * L_10 = ___rValue0;
		NullCheck(L_10);
		UnityVideoParams_t266225262  L_11 = L_10->get_videoParams_4();
		serializableUnityARCamera_t1479866927 * L_12 = ___rValue0;
		NullCheck(L_12);
		UnityARLightEstimate_t1687952017  L_13 = L_12->get_lightEstimation_5();
		serializableUnityARCamera_t1479866927 * L_14 = ___rValue0;
		NullCheck(L_14);
		serializableUnityARMatrix4x4_t2915064193 * L_15 = L_14->get_displayTransform_7();
		UnityARMatrix4x4_t617019936  L_16 = serializableUnityARMatrix4x4_op_Implicit_m1626196323(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		serializableUnityARCamera_t1479866927 * L_17 = ___rValue0;
		NullCheck(L_17);
		serializablePointCloud_t3916281303 * L_18 = L_17->get_pointCloud_6();
		Vector3U5BU5D_t2380659656* L_19 = serializablePointCloud_op_Implicit_m2730301998(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		UnityARCamera_t1287293980  L_20;
		memset(&L_20, 0, sizeof(L_20));
		UnityARCamera__ctor_m2168637484((&L_20), L_2, L_5, L_7, L_9, L_11, L_13, L_16, L_19, /*hidden argument*/NULL);
		return L_20;
	}
}
// System.Void Utils.serializableUnityARMatrix4x4::.ctor(Utils.SerializableVector4,Utils.SerializableVector4,Utils.SerializableVector4,Utils.SerializableVector4)
extern "C"  void serializableUnityARMatrix4x4__ctor_m4038603604 (serializableUnityARMatrix4x4_t2915064193 * __this, SerializableVector4_t1399205435 * ___v00, SerializableVector4_t1399205435 * ___v11, SerializableVector4_t1399205435 * ___v22, SerializableVector4_t1399205435 * ___v33, const RuntimeMethod* method)
{
	{
		Object__ctor_m3637813681(__this, /*hidden argument*/NULL);
		SerializableVector4_t1399205435 * L_0 = ___v00;
		__this->set_column0_0(L_0);
		SerializableVector4_t1399205435 * L_1 = ___v11;
		__this->set_column1_1(L_1);
		SerializableVector4_t1399205435 * L_2 = ___v22;
		__this->set_column2_2(L_2);
		SerializableVector4_t1399205435 * L_3 = ___v33;
		__this->set_column3_3(L_3);
		return;
	}
}
// Utils.serializableUnityARMatrix4x4 Utils.serializableUnityARMatrix4x4::op_Implicit(UnityEngine.XR.iOS.UnityARMatrix4x4)
extern "C"  serializableUnityARMatrix4x4_t2915064193 * serializableUnityARMatrix4x4_op_Implicit_m1903192487 (RuntimeObject * __this /* static, unused */, UnityARMatrix4x4_t617019936  ___rValue0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (serializableUnityARMatrix4x4_op_Implicit_m1903192487_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector4_t2495583457  L_0 = (&___rValue0)->get_column0_0();
		SerializableVector4_t1399205435 * L_1 = SerializableVector4_op_Implicit_m3848775500(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		Vector4_t2495583457  L_2 = (&___rValue0)->get_column1_1();
		SerializableVector4_t1399205435 * L_3 = SerializableVector4_op_Implicit_m3848775500(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		Vector4_t2495583457  L_4 = (&___rValue0)->get_column2_2();
		SerializableVector4_t1399205435 * L_5 = SerializableVector4_op_Implicit_m3848775500(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		Vector4_t2495583457  L_6 = (&___rValue0)->get_column3_3();
		SerializableVector4_t1399205435 * L_7 = SerializableVector4_op_Implicit_m3848775500(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		serializableUnityARMatrix4x4_t2915064193 * L_8 = (serializableUnityARMatrix4x4_t2915064193 *)il2cpp_codegen_object_new(serializableUnityARMatrix4x4_t2915064193_il2cpp_TypeInfo_var);
		serializableUnityARMatrix4x4__ctor_m4038603604(L_8, L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// UnityEngine.XR.iOS.UnityARMatrix4x4 Utils.serializableUnityARMatrix4x4::op_Implicit(Utils.serializableUnityARMatrix4x4)
extern "C"  UnityARMatrix4x4_t617019936  serializableUnityARMatrix4x4_op_Implicit_m1626196323 (RuntimeObject * __this /* static, unused */, serializableUnityARMatrix4x4_t2915064193 * ___rValue0, const RuntimeMethod* method)
{
	{
		serializableUnityARMatrix4x4_t2915064193 * L_0 = ___rValue0;
		NullCheck(L_0);
		SerializableVector4_t1399205435 * L_1 = L_0->get_column0_0();
		Vector4_t2495583457  L_2 = SerializableVector4_op_Implicit_m4097841552(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		serializableUnityARMatrix4x4_t2915064193 * L_3 = ___rValue0;
		NullCheck(L_3);
		SerializableVector4_t1399205435 * L_4 = L_3->get_column1_1();
		Vector4_t2495583457  L_5 = SerializableVector4_op_Implicit_m4097841552(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		serializableUnityARMatrix4x4_t2915064193 * L_6 = ___rValue0;
		NullCheck(L_6);
		SerializableVector4_t1399205435 * L_7 = L_6->get_column2_2();
		Vector4_t2495583457  L_8 = SerializableVector4_op_Implicit_m4097841552(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		serializableUnityARMatrix4x4_t2915064193 * L_9 = ___rValue0;
		NullCheck(L_9);
		SerializableVector4_t1399205435 * L_10 = L_9->get_column3_3();
		Vector4_t2495583457  L_11 = SerializableVector4_op_Implicit_m4097841552(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		UnityARMatrix4x4_t617019936  L_12;
		memset(&L_12, 0, sizeof(L_12));
		UnityARMatrix4x4__ctor_m1411915885((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		return L_12;
	}
}
// Utils.serializableUnityARMatrix4x4 Utils.serializableUnityARMatrix4x4::op_Implicit(UnityEngine.Matrix4x4)
extern "C"  serializableUnityARMatrix4x4_t2915064193 * serializableUnityARMatrix4x4_op_Implicit_m3682396343 (RuntimeObject * __this /* static, unused */, Matrix4x4_t2943786656  ___rValue0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (serializableUnityARMatrix4x4_op_Implicit_m3682396343_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector4_t2495583457  L_0 = Matrix4x4_GetColumn_m2590135558((&___rValue0), 0, /*hidden argument*/NULL);
		SerializableVector4_t1399205435 * L_1 = SerializableVector4_op_Implicit_m3848775500(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		Vector4_t2495583457  L_2 = Matrix4x4_GetColumn_m2590135558((&___rValue0), 1, /*hidden argument*/NULL);
		SerializableVector4_t1399205435 * L_3 = SerializableVector4_op_Implicit_m3848775500(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		Vector4_t2495583457  L_4 = Matrix4x4_GetColumn_m2590135558((&___rValue0), 2, /*hidden argument*/NULL);
		SerializableVector4_t1399205435 * L_5 = SerializableVector4_op_Implicit_m3848775500(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		Vector4_t2495583457  L_6 = Matrix4x4_GetColumn_m2590135558((&___rValue0), 3, /*hidden argument*/NULL);
		SerializableVector4_t1399205435 * L_7 = SerializableVector4_op_Implicit_m3848775500(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		serializableUnityARMatrix4x4_t2915064193 * L_8 = (serializableUnityARMatrix4x4_t2915064193 *)il2cpp_codegen_object_new(serializableUnityARMatrix4x4_t2915064193_il2cpp_TypeInfo_var);
		serializableUnityARMatrix4x4__ctor_m4038603604(L_8, L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// UnityEngine.Matrix4x4 Utils.serializableUnityARMatrix4x4::op_Implicit(Utils.serializableUnityARMatrix4x4)
extern "C"  Matrix4x4_t2943786656  serializableUnityARMatrix4x4_op_Implicit_m4095083978 (RuntimeObject * __this /* static, unused */, serializableUnityARMatrix4x4_t2915064193 * ___rValue0, const RuntimeMethod* method)
{
	{
		serializableUnityARMatrix4x4_t2915064193 * L_0 = ___rValue0;
		NullCheck(L_0);
		SerializableVector4_t1399205435 * L_1 = L_0->get_column0_0();
		Vector4_t2495583457  L_2 = SerializableVector4_op_Implicit_m4097841552(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		serializableUnityARMatrix4x4_t2915064193 * L_3 = ___rValue0;
		NullCheck(L_3);
		SerializableVector4_t1399205435 * L_4 = L_3->get_column1_1();
		Vector4_t2495583457  L_5 = SerializableVector4_op_Implicit_m4097841552(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		serializableUnityARMatrix4x4_t2915064193 * L_6 = ___rValue0;
		NullCheck(L_6);
		SerializableVector4_t1399205435 * L_7 = L_6->get_column2_2();
		Vector4_t2495583457  L_8 = SerializableVector4_op_Implicit_m4097841552(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		serializableUnityARMatrix4x4_t2915064193 * L_9 = ___rValue0;
		NullCheck(L_9);
		SerializableVector4_t1399205435 * L_10 = L_9->get_column3_3();
		Vector4_t2495583457  L_11 = SerializableVector4_op_Implicit_m4097841552(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		Matrix4x4_t2943786656  L_12;
		memset(&L_12, 0, sizeof(L_12));
		Matrix4x4__ctor_m1978481103((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		return L_12;
	}
}
// System.Void Utils.serializableUnityARPlaneAnchor::.ctor(Utils.serializableUnityARMatrix4x4,Utils.SerializableVector4,Utils.SerializableVector4,UnityEngine.XR.iOS.ARPlaneAnchorAlignment,System.Byte[])
extern "C"  void serializableUnityARPlaneAnchor__ctor_m4210772605 (serializableUnityARPlaneAnchor_t4107818447 * __this, serializableUnityARMatrix4x4_t2915064193 * ___wt0, SerializableVector4_t1399205435 * ___ctr1, SerializableVector4_t1399205435 * ___ext2, int64_t ___apaa3, ByteU5BU5D_t1557752011* ___idstr4, const RuntimeMethod* method)
{
	{
		Object__ctor_m3637813681(__this, /*hidden argument*/NULL);
		serializableUnityARMatrix4x4_t2915064193 * L_0 = ___wt0;
		__this->set_worldTransform_0(L_0);
		SerializableVector4_t1399205435 * L_1 = ___ctr1;
		__this->set_center_1(L_1);
		SerializableVector4_t1399205435 * L_2 = ___ext2;
		__this->set_extent_2(L_2);
		int64_t L_3 = ___apaa3;
		__this->set_planeAlignment_3(L_3);
		ByteU5BU5D_t1557752011* L_4 = ___idstr4;
		__this->set_identifierStr_4(L_4);
		return;
	}
}
// Utils.serializableUnityARPlaneAnchor Utils.serializableUnityARPlaneAnchor::op_Implicit(UnityEngine.XR.iOS.ARPlaneAnchor)
extern "C"  serializableUnityARPlaneAnchor_t4107818447 * serializableUnityARPlaneAnchor_op_Implicit_m1078646073 (RuntimeObject * __this /* static, unused */, ARPlaneAnchor_t890021806  ___rValue0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (serializableUnityARPlaneAnchor_op_Implicit_m1078646073_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	serializableUnityARMatrix4x4_t2915064193 * V_0 = NULL;
	SerializableVector4_t1399205435 * V_1 = NULL;
	SerializableVector4_t1399205435 * V_2 = NULL;
	ByteU5BU5D_t1557752011* V_3 = NULL;
	{
		Matrix4x4_t2943786656  L_0 = (&___rValue0)->get_transform_1();
		serializableUnityARMatrix4x4_t2915064193 * L_1 = serializableUnityARMatrix4x4_op_Implicit_m3682396343(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Vector3_t3940485 * L_2 = (&___rValue0)->get_address_of_center_3();
		float L_3 = L_2->get_x_1();
		Vector3_t3940485 * L_4 = (&___rValue0)->get_address_of_center_3();
		float L_5 = L_4->get_y_2();
		Vector3_t3940485 * L_6 = (&___rValue0)->get_address_of_center_3();
		float L_7 = L_6->get_z_3();
		SerializableVector4_t1399205435 * L_8 = (SerializableVector4_t1399205435 *)il2cpp_codegen_object_new(SerializableVector4_t1399205435_il2cpp_TypeInfo_var);
		SerializableVector4__ctor_m1312160089(L_8, L_3, L_5, L_7, (1.0f), /*hidden argument*/NULL);
		V_1 = L_8;
		Vector3_t3940485 * L_9 = (&___rValue0)->get_address_of_extent_4();
		float L_10 = L_9->get_x_1();
		Vector3_t3940485 * L_11 = (&___rValue0)->get_address_of_extent_4();
		float L_12 = L_11->get_y_2();
		Vector3_t3940485 * L_13 = (&___rValue0)->get_address_of_extent_4();
		float L_14 = L_13->get_z_3();
		SerializableVector4_t1399205435 * L_15 = (SerializableVector4_t1399205435 *)il2cpp_codegen_object_new(SerializableVector4_t1399205435_il2cpp_TypeInfo_var);
		SerializableVector4__ctor_m1312160089(L_15, L_10, L_12, L_14, (1.0f), /*hidden argument*/NULL);
		V_2 = L_15;
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t1498994424_il2cpp_TypeInfo_var);
		Encoding_t1498994424 * L_16 = Encoding_get_UTF8_m2253463599(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_17 = (&___rValue0)->get_identifier_0();
		NullCheck(L_16);
		ByteU5BU5D_t1557752011* L_18 = VirtFuncInvoker1< ByteU5BU5D_t1557752011*, String_t* >::Invoke(10 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_16, L_17);
		V_3 = L_18;
		serializableUnityARMatrix4x4_t2915064193 * L_19 = V_0;
		SerializableVector4_t1399205435 * L_20 = V_1;
		SerializableVector4_t1399205435 * L_21 = V_2;
		int64_t L_22 = (&___rValue0)->get_alignment_2();
		ByteU5BU5D_t1557752011* L_23 = V_3;
		serializableUnityARPlaneAnchor_t4107818447 * L_24 = (serializableUnityARPlaneAnchor_t4107818447 *)il2cpp_codegen_object_new(serializableUnityARPlaneAnchor_t4107818447_il2cpp_TypeInfo_var);
		serializableUnityARPlaneAnchor__ctor_m4210772605(L_24, L_19, L_20, L_21, L_22, L_23, /*hidden argument*/NULL);
		return L_24;
	}
}
// UnityEngine.XR.iOS.ARPlaneAnchor Utils.serializableUnityARPlaneAnchor::op_Implicit(Utils.serializableUnityARPlaneAnchor)
extern "C"  ARPlaneAnchor_t890021806  serializableUnityARPlaneAnchor_op_Implicit_m4137221161 (RuntimeObject * __this /* static, unused */, serializableUnityARPlaneAnchor_t4107818447 * ___rValue0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (serializableUnityARPlaneAnchor_op_Implicit_m4137221161_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ARPlaneAnchor_t890021806  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t1498994424_il2cpp_TypeInfo_var);
		Encoding_t1498994424 * L_0 = Encoding_get_UTF8_m2253463599(NULL /*static, unused*/, /*hidden argument*/NULL);
		serializableUnityARPlaneAnchor_t4107818447 * L_1 = ___rValue0;
		NullCheck(L_1);
		ByteU5BU5D_t1557752011* L_2 = L_1->get_identifierStr_4();
		NullCheck(L_0);
		String_t* L_3 = VirtFuncInvoker1< String_t*, ByteU5BU5D_t1557752011* >::Invoke(23 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_0, L_2);
		(&V_0)->set_identifier_0(L_3);
		serializableUnityARPlaneAnchor_t4107818447 * L_4 = ___rValue0;
		NullCheck(L_4);
		SerializableVector4_t1399205435 * L_5 = L_4->get_center_1();
		NullCheck(L_5);
		float L_6 = L_5->get_x_0();
		serializableUnityARPlaneAnchor_t4107818447 * L_7 = ___rValue0;
		NullCheck(L_7);
		SerializableVector4_t1399205435 * L_8 = L_7->get_center_1();
		NullCheck(L_8);
		float L_9 = L_8->get_y_1();
		serializableUnityARPlaneAnchor_t4107818447 * L_10 = ___rValue0;
		NullCheck(L_10);
		SerializableVector4_t1399205435 * L_11 = L_10->get_center_1();
		NullCheck(L_11);
		float L_12 = L_11->get_z_2();
		Vector3_t3940485  L_13;
		memset(&L_13, 0, sizeof(L_13));
		Vector3__ctor_m1718558660((&L_13), L_6, L_9, L_12, /*hidden argument*/NULL);
		(&V_0)->set_center_3(L_13);
		serializableUnityARPlaneAnchor_t4107818447 * L_14 = ___rValue0;
		NullCheck(L_14);
		SerializableVector4_t1399205435 * L_15 = L_14->get_extent_2();
		NullCheck(L_15);
		float L_16 = L_15->get_x_0();
		serializableUnityARPlaneAnchor_t4107818447 * L_17 = ___rValue0;
		NullCheck(L_17);
		SerializableVector4_t1399205435 * L_18 = L_17->get_extent_2();
		NullCheck(L_18);
		float L_19 = L_18->get_y_1();
		serializableUnityARPlaneAnchor_t4107818447 * L_20 = ___rValue0;
		NullCheck(L_20);
		SerializableVector4_t1399205435 * L_21 = L_20->get_extent_2();
		NullCheck(L_21);
		float L_22 = L_21->get_z_2();
		Vector3_t3940485  L_23;
		memset(&L_23, 0, sizeof(L_23));
		Vector3__ctor_m1718558660((&L_23), L_16, L_19, L_22, /*hidden argument*/NULL);
		(&V_0)->set_extent_4(L_23);
		serializableUnityARPlaneAnchor_t4107818447 * L_24 = ___rValue0;
		NullCheck(L_24);
		int64_t L_25 = L_24->get_planeAlignment_3();
		(&V_0)->set_alignment_2(L_25);
		serializableUnityARPlaneAnchor_t4107818447 * L_26 = ___rValue0;
		NullCheck(L_26);
		serializableUnityARMatrix4x4_t2915064193 * L_27 = L_26->get_worldTransform_0();
		Matrix4x4_t2943786656  L_28 = serializableUnityARMatrix4x4_op_Implicit_m4095083978(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
		(&V_0)->set_transform_1(L_28);
		ARPlaneAnchor_t890021806  L_29 = V_0;
		return L_29;
	}
}
// System.Void Utils.SerializableVector4::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C"  void SerializableVector4__ctor_m1312160089 (SerializableVector4_t1399205435 * __this, float ___rX0, float ___rY1, float ___rZ2, float ___rW3, const RuntimeMethod* method)
{
	{
		Object__ctor_m3637813681(__this, /*hidden argument*/NULL);
		float L_0 = ___rX0;
		__this->set_x_0(L_0);
		float L_1 = ___rY1;
		__this->set_y_1(L_1);
		float L_2 = ___rZ2;
		__this->set_z_2(L_2);
		float L_3 = ___rW3;
		__this->set_w_3(L_3);
		return;
	}
}
// System.String Utils.SerializableVector4::ToString()
extern "C"  String_t* SerializableVector4_ToString_m568273410 (SerializableVector4_t1399205435 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SerializableVector4_ToString_m568273410_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t3389082662* L_0 = ((ObjectU5BU5D_t3389082662*)SZArrayNew(ObjectU5BU5D_t3389082662_il2cpp_TypeInfo_var, (uint32_t)4));
		float L_1 = __this->get_x_0();
		float L_2 = L_1;
		RuntimeObject * L_3 = Box(Single_t2130586693_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, L_3);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_t3389082662* L_4 = L_0;
		float L_5 = __this->get_y_1();
		float L_6 = L_5;
		RuntimeObject * L_7 = Box(Single_t2130586693_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_7);
		ObjectU5BU5D_t3389082662* L_8 = L_4;
		float L_9 = __this->get_z_2();
		float L_10 = L_9;
		RuntimeObject * L_11 = Box(Single_t2130586693_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_11);
		ObjectU5BU5D_t3389082662* L_12 = L_8;
		float L_13 = __this->get_w_3();
		float L_14 = L_13;
		RuntimeObject * L_15 = Box(Single_t2130586693_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_15);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_16 = String_Format_m336192248(NULL /*static, unused*/, _stringLiteral3985907710, L_12, /*hidden argument*/NULL);
		return L_16;
	}
}
// UnityEngine.Vector4 Utils.SerializableVector4::op_Implicit(Utils.SerializableVector4)
extern "C"  Vector4_t2495583457  SerializableVector4_op_Implicit_m4097841552 (RuntimeObject * __this /* static, unused */, SerializableVector4_t1399205435 * ___rValue0, const RuntimeMethod* method)
{
	{
		SerializableVector4_t1399205435 * L_0 = ___rValue0;
		NullCheck(L_0);
		float L_1 = L_0->get_x_0();
		SerializableVector4_t1399205435 * L_2 = ___rValue0;
		NullCheck(L_2);
		float L_3 = L_2->get_y_1();
		SerializableVector4_t1399205435 * L_4 = ___rValue0;
		NullCheck(L_4);
		float L_5 = L_4->get_z_2();
		SerializableVector4_t1399205435 * L_6 = ___rValue0;
		NullCheck(L_6);
		float L_7 = L_6->get_w_3();
		Vector4_t2495583457  L_8;
		memset(&L_8, 0, sizeof(L_8));
		Vector4__ctor_m3551743590((&L_8), L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// Utils.SerializableVector4 Utils.SerializableVector4::op_Implicit(UnityEngine.Vector4)
extern "C"  SerializableVector4_t1399205435 * SerializableVector4_op_Implicit_m3848775500 (RuntimeObject * __this /* static, unused */, Vector4_t2495583457  ___rValue0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SerializableVector4_op_Implicit_m3848775500_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = (&___rValue0)->get_x_1();
		float L_1 = (&___rValue0)->get_y_2();
		float L_2 = (&___rValue0)->get_z_3();
		float L_3 = (&___rValue0)->get_w_4();
		SerializableVector4_t1399205435 * L_4 = (SerializableVector4_t1399205435 *)il2cpp_codegen_object_new(SerializableVector4_t1399205435_il2cpp_TypeInfo_var);
		SerializableVector4__ctor_m1312160089(L_4, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif

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

// Utils.serializableUnityARPlaneAnchor
struct serializableUnityARPlaneAnchor_t3186085038;
// Utils.serializableUnityARMatrix4x4
struct serializableUnityARMatrix4x4_t3252701909;
// Utils.SerializableVector4
struct SerializableVector4_t2721314724;
// System.Byte[]
struct ByteU5BU5D_t757797699;
// System.Text.Encoding
struct Encoding_t780636494;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t1553377324;
// System.Char[]
struct CharU5BU5D_t2117457135;
// System.Text.DecoderFallback
struct DecoderFallback_t1845550661;
// System.Text.EncoderFallback
struct EncoderFallback_t407696650;
// System.Reflection.Assembly
struct Assembly_t3449585980;

extern RuntimeClass* SerializableVector4_t2721314724_il2cpp_TypeInfo_var;
extern RuntimeClass* Encoding_t780636494_il2cpp_TypeInfo_var;
extern RuntimeClass* serializableUnityARPlaneAnchor_t3186085038_il2cpp_TypeInfo_var;
extern const uint32_t serializableUnityARPlaneAnchor_op_Implicit_m1294788761_MetadataUsageId;
extern const uint32_t serializableUnityARPlaneAnchor_op_Implicit_m2159857494_MetadataUsageId;
extern RuntimeClass* ObjectU5BU5D_t1553377324_il2cpp_TypeInfo_var;
extern RuntimeClass* Single_t2821956796_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral52163440;
extern const uint32_t SerializableVector4_ToString_m234487079_MetadataUsageId;
extern const uint32_t SerializableVector4_op_Implicit_m1935864812_MetadataUsageId;

struct ByteU5BU5D_t757797699;
struct ObjectU5BU5D_t1553377324;


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
	CharU5BU5D_t2117457135* ___WhiteChars_3;

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
	inline CharU5BU5D_t2117457135* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t2117457135** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t2117457135* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef ENCODING_T780636494_H
#define ENCODING_T780636494_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Encoding
struct  Encoding_t780636494  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::codePage
	int32_t ___codePage_0;
	// System.Int32 System.Text.Encoding::windows_code_page
	int32_t ___windows_code_page_1;
	// System.Boolean System.Text.Encoding::is_readonly
	bool ___is_readonly_2;
	// System.Text.DecoderFallback System.Text.Encoding::decoder_fallback
	DecoderFallback_t1845550661 * ___decoder_fallback_3;
	// System.Text.EncoderFallback System.Text.Encoding::encoder_fallback
	EncoderFallback_t407696650 * ___encoder_fallback_4;
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
	inline static int32_t get_offset_of_codePage_0() { return static_cast<int32_t>(offsetof(Encoding_t780636494, ___codePage_0)); }
	inline int32_t get_codePage_0() const { return ___codePage_0; }
	inline int32_t* get_address_of_codePage_0() { return &___codePage_0; }
	inline void set_codePage_0(int32_t value)
	{
		___codePage_0 = value;
	}

	inline static int32_t get_offset_of_windows_code_page_1() { return static_cast<int32_t>(offsetof(Encoding_t780636494, ___windows_code_page_1)); }
	inline int32_t get_windows_code_page_1() const { return ___windows_code_page_1; }
	inline int32_t* get_address_of_windows_code_page_1() { return &___windows_code_page_1; }
	inline void set_windows_code_page_1(int32_t value)
	{
		___windows_code_page_1 = value;
	}

	inline static int32_t get_offset_of_is_readonly_2() { return static_cast<int32_t>(offsetof(Encoding_t780636494, ___is_readonly_2)); }
	inline bool get_is_readonly_2() const { return ___is_readonly_2; }
	inline bool* get_address_of_is_readonly_2() { return &___is_readonly_2; }
	inline void set_is_readonly_2(bool value)
	{
		___is_readonly_2 = value;
	}

	inline static int32_t get_offset_of_decoder_fallback_3() { return static_cast<int32_t>(offsetof(Encoding_t780636494, ___decoder_fallback_3)); }
	inline DecoderFallback_t1845550661 * get_decoder_fallback_3() const { return ___decoder_fallback_3; }
	inline DecoderFallback_t1845550661 ** get_address_of_decoder_fallback_3() { return &___decoder_fallback_3; }
	inline void set_decoder_fallback_3(DecoderFallback_t1845550661 * value)
	{
		___decoder_fallback_3 = value;
		Il2CppCodeGenWriteBarrier((&___decoder_fallback_3), value);
	}

	inline static int32_t get_offset_of_encoder_fallback_4() { return static_cast<int32_t>(offsetof(Encoding_t780636494, ___encoder_fallback_4)); }
	inline EncoderFallback_t407696650 * get_encoder_fallback_4() const { return ___encoder_fallback_4; }
	inline EncoderFallback_t407696650 ** get_address_of_encoder_fallback_4() { return &___encoder_fallback_4; }
	inline void set_encoder_fallback_4(EncoderFallback_t407696650 * value)
	{
		___encoder_fallback_4 = value;
		Il2CppCodeGenWriteBarrier((&___encoder_fallback_4), value);
	}

	inline static int32_t get_offset_of_body_name_8() { return static_cast<int32_t>(offsetof(Encoding_t780636494, ___body_name_8)); }
	inline String_t* get_body_name_8() const { return ___body_name_8; }
	inline String_t** get_address_of_body_name_8() { return &___body_name_8; }
	inline void set_body_name_8(String_t* value)
	{
		___body_name_8 = value;
		Il2CppCodeGenWriteBarrier((&___body_name_8), value);
	}

	inline static int32_t get_offset_of_encoding_name_9() { return static_cast<int32_t>(offsetof(Encoding_t780636494, ___encoding_name_9)); }
	inline String_t* get_encoding_name_9() const { return ___encoding_name_9; }
	inline String_t** get_address_of_encoding_name_9() { return &___encoding_name_9; }
	inline void set_encoding_name_9(String_t* value)
	{
		___encoding_name_9 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_name_9), value);
	}

	inline static int32_t get_offset_of_header_name_10() { return static_cast<int32_t>(offsetof(Encoding_t780636494, ___header_name_10)); }
	inline String_t* get_header_name_10() const { return ___header_name_10; }
	inline String_t** get_address_of_header_name_10() { return &___header_name_10; }
	inline void set_header_name_10(String_t* value)
	{
		___header_name_10 = value;
		Il2CppCodeGenWriteBarrier((&___header_name_10), value);
	}

	inline static int32_t get_offset_of_is_mail_news_display_11() { return static_cast<int32_t>(offsetof(Encoding_t780636494, ___is_mail_news_display_11)); }
	inline bool get_is_mail_news_display_11() const { return ___is_mail_news_display_11; }
	inline bool* get_address_of_is_mail_news_display_11() { return &___is_mail_news_display_11; }
	inline void set_is_mail_news_display_11(bool value)
	{
		___is_mail_news_display_11 = value;
	}

	inline static int32_t get_offset_of_is_mail_news_save_12() { return static_cast<int32_t>(offsetof(Encoding_t780636494, ___is_mail_news_save_12)); }
	inline bool get_is_mail_news_save_12() const { return ___is_mail_news_save_12; }
	inline bool* get_address_of_is_mail_news_save_12() { return &___is_mail_news_save_12; }
	inline void set_is_mail_news_save_12(bool value)
	{
		___is_mail_news_save_12 = value;
	}

	inline static int32_t get_offset_of_is_browser_save_13() { return static_cast<int32_t>(offsetof(Encoding_t780636494, ___is_browser_save_13)); }
	inline bool get_is_browser_save_13() const { return ___is_browser_save_13; }
	inline bool* get_address_of_is_browser_save_13() { return &___is_browser_save_13; }
	inline void set_is_browser_save_13(bool value)
	{
		___is_browser_save_13 = value;
	}

	inline static int32_t get_offset_of_is_browser_display_14() { return static_cast<int32_t>(offsetof(Encoding_t780636494, ___is_browser_display_14)); }
	inline bool get_is_browser_display_14() const { return ___is_browser_display_14; }
	inline bool* get_address_of_is_browser_display_14() { return &___is_browser_display_14; }
	inline void set_is_browser_display_14(bool value)
	{
		___is_browser_display_14 = value;
	}

	inline static int32_t get_offset_of_web_name_15() { return static_cast<int32_t>(offsetof(Encoding_t780636494, ___web_name_15)); }
	inline String_t* get_web_name_15() const { return ___web_name_15; }
	inline String_t** get_address_of_web_name_15() { return &___web_name_15; }
	inline void set_web_name_15(String_t* value)
	{
		___web_name_15 = value;
		Il2CppCodeGenWriteBarrier((&___web_name_15), value);
	}
};

struct Encoding_t780636494_StaticFields
{
public:
	// System.Reflection.Assembly System.Text.Encoding::i18nAssembly
	Assembly_t3449585980 * ___i18nAssembly_5;
	// System.Boolean System.Text.Encoding::i18nDisabled
	bool ___i18nDisabled_6;
	// System.Object[] System.Text.Encoding::encodings
	ObjectU5BU5D_t1553377324* ___encodings_7;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t780636494 * ___asciiEncoding_16;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianEncoding
	Encoding_t780636494 * ___bigEndianEncoding_17;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t780636494 * ___defaultEncoding_18;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t780636494 * ___utf7Encoding_19;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8EncodingWithMarkers
	Encoding_t780636494 * ___utf8EncodingWithMarkers_20;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8EncodingWithoutMarkers
	Encoding_t780636494 * ___utf8EncodingWithoutMarkers_21;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t780636494 * ___unicodeEncoding_22;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::isoLatin1Encoding
	Encoding_t780636494 * ___isoLatin1Encoding_23;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8EncodingUnsafe
	Encoding_t780636494 * ___utf8EncodingUnsafe_24;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t780636494 * ___utf32Encoding_25;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUTF32Encoding
	Encoding_t780636494 * ___bigEndianUTF32Encoding_26;
	// System.Object System.Text.Encoding::lockobj
	RuntimeObject * ___lockobj_27;

public:
	inline static int32_t get_offset_of_i18nAssembly_5() { return static_cast<int32_t>(offsetof(Encoding_t780636494_StaticFields, ___i18nAssembly_5)); }
	inline Assembly_t3449585980 * get_i18nAssembly_5() const { return ___i18nAssembly_5; }
	inline Assembly_t3449585980 ** get_address_of_i18nAssembly_5() { return &___i18nAssembly_5; }
	inline void set_i18nAssembly_5(Assembly_t3449585980 * value)
	{
		___i18nAssembly_5 = value;
		Il2CppCodeGenWriteBarrier((&___i18nAssembly_5), value);
	}

	inline static int32_t get_offset_of_i18nDisabled_6() { return static_cast<int32_t>(offsetof(Encoding_t780636494_StaticFields, ___i18nDisabled_6)); }
	inline bool get_i18nDisabled_6() const { return ___i18nDisabled_6; }
	inline bool* get_address_of_i18nDisabled_6() { return &___i18nDisabled_6; }
	inline void set_i18nDisabled_6(bool value)
	{
		___i18nDisabled_6 = value;
	}

	inline static int32_t get_offset_of_encodings_7() { return static_cast<int32_t>(offsetof(Encoding_t780636494_StaticFields, ___encodings_7)); }
	inline ObjectU5BU5D_t1553377324* get_encodings_7() const { return ___encodings_7; }
	inline ObjectU5BU5D_t1553377324** get_address_of_encodings_7() { return &___encodings_7; }
	inline void set_encodings_7(ObjectU5BU5D_t1553377324* value)
	{
		___encodings_7 = value;
		Il2CppCodeGenWriteBarrier((&___encodings_7), value);
	}

	inline static int32_t get_offset_of_asciiEncoding_16() { return static_cast<int32_t>(offsetof(Encoding_t780636494_StaticFields, ___asciiEncoding_16)); }
	inline Encoding_t780636494 * get_asciiEncoding_16() const { return ___asciiEncoding_16; }
	inline Encoding_t780636494 ** get_address_of_asciiEncoding_16() { return &___asciiEncoding_16; }
	inline void set_asciiEncoding_16(Encoding_t780636494 * value)
	{
		___asciiEncoding_16 = value;
		Il2CppCodeGenWriteBarrier((&___asciiEncoding_16), value);
	}

	inline static int32_t get_offset_of_bigEndianEncoding_17() { return static_cast<int32_t>(offsetof(Encoding_t780636494_StaticFields, ___bigEndianEncoding_17)); }
	inline Encoding_t780636494 * get_bigEndianEncoding_17() const { return ___bigEndianEncoding_17; }
	inline Encoding_t780636494 ** get_address_of_bigEndianEncoding_17() { return &___bigEndianEncoding_17; }
	inline void set_bigEndianEncoding_17(Encoding_t780636494 * value)
	{
		___bigEndianEncoding_17 = value;
		Il2CppCodeGenWriteBarrier((&___bigEndianEncoding_17), value);
	}

	inline static int32_t get_offset_of_defaultEncoding_18() { return static_cast<int32_t>(offsetof(Encoding_t780636494_StaticFields, ___defaultEncoding_18)); }
	inline Encoding_t780636494 * get_defaultEncoding_18() const { return ___defaultEncoding_18; }
	inline Encoding_t780636494 ** get_address_of_defaultEncoding_18() { return &___defaultEncoding_18; }
	inline void set_defaultEncoding_18(Encoding_t780636494 * value)
	{
		___defaultEncoding_18 = value;
		Il2CppCodeGenWriteBarrier((&___defaultEncoding_18), value);
	}

	inline static int32_t get_offset_of_utf7Encoding_19() { return static_cast<int32_t>(offsetof(Encoding_t780636494_StaticFields, ___utf7Encoding_19)); }
	inline Encoding_t780636494 * get_utf7Encoding_19() const { return ___utf7Encoding_19; }
	inline Encoding_t780636494 ** get_address_of_utf7Encoding_19() { return &___utf7Encoding_19; }
	inline void set_utf7Encoding_19(Encoding_t780636494 * value)
	{
		___utf7Encoding_19 = value;
		Il2CppCodeGenWriteBarrier((&___utf7Encoding_19), value);
	}

	inline static int32_t get_offset_of_utf8EncodingWithMarkers_20() { return static_cast<int32_t>(offsetof(Encoding_t780636494_StaticFields, ___utf8EncodingWithMarkers_20)); }
	inline Encoding_t780636494 * get_utf8EncodingWithMarkers_20() const { return ___utf8EncodingWithMarkers_20; }
	inline Encoding_t780636494 ** get_address_of_utf8EncodingWithMarkers_20() { return &___utf8EncodingWithMarkers_20; }
	inline void set_utf8EncodingWithMarkers_20(Encoding_t780636494 * value)
	{
		___utf8EncodingWithMarkers_20 = value;
		Il2CppCodeGenWriteBarrier((&___utf8EncodingWithMarkers_20), value);
	}

	inline static int32_t get_offset_of_utf8EncodingWithoutMarkers_21() { return static_cast<int32_t>(offsetof(Encoding_t780636494_StaticFields, ___utf8EncodingWithoutMarkers_21)); }
	inline Encoding_t780636494 * get_utf8EncodingWithoutMarkers_21() const { return ___utf8EncodingWithoutMarkers_21; }
	inline Encoding_t780636494 ** get_address_of_utf8EncodingWithoutMarkers_21() { return &___utf8EncodingWithoutMarkers_21; }
	inline void set_utf8EncodingWithoutMarkers_21(Encoding_t780636494 * value)
	{
		___utf8EncodingWithoutMarkers_21 = value;
		Il2CppCodeGenWriteBarrier((&___utf8EncodingWithoutMarkers_21), value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_22() { return static_cast<int32_t>(offsetof(Encoding_t780636494_StaticFields, ___unicodeEncoding_22)); }
	inline Encoding_t780636494 * get_unicodeEncoding_22() const { return ___unicodeEncoding_22; }
	inline Encoding_t780636494 ** get_address_of_unicodeEncoding_22() { return &___unicodeEncoding_22; }
	inline void set_unicodeEncoding_22(Encoding_t780636494 * value)
	{
		___unicodeEncoding_22 = value;
		Il2CppCodeGenWriteBarrier((&___unicodeEncoding_22), value);
	}

	inline static int32_t get_offset_of_isoLatin1Encoding_23() { return static_cast<int32_t>(offsetof(Encoding_t780636494_StaticFields, ___isoLatin1Encoding_23)); }
	inline Encoding_t780636494 * get_isoLatin1Encoding_23() const { return ___isoLatin1Encoding_23; }
	inline Encoding_t780636494 ** get_address_of_isoLatin1Encoding_23() { return &___isoLatin1Encoding_23; }
	inline void set_isoLatin1Encoding_23(Encoding_t780636494 * value)
	{
		___isoLatin1Encoding_23 = value;
		Il2CppCodeGenWriteBarrier((&___isoLatin1Encoding_23), value);
	}

	inline static int32_t get_offset_of_utf8EncodingUnsafe_24() { return static_cast<int32_t>(offsetof(Encoding_t780636494_StaticFields, ___utf8EncodingUnsafe_24)); }
	inline Encoding_t780636494 * get_utf8EncodingUnsafe_24() const { return ___utf8EncodingUnsafe_24; }
	inline Encoding_t780636494 ** get_address_of_utf8EncodingUnsafe_24() { return &___utf8EncodingUnsafe_24; }
	inline void set_utf8EncodingUnsafe_24(Encoding_t780636494 * value)
	{
		___utf8EncodingUnsafe_24 = value;
		Il2CppCodeGenWriteBarrier((&___utf8EncodingUnsafe_24), value);
	}

	inline static int32_t get_offset_of_utf32Encoding_25() { return static_cast<int32_t>(offsetof(Encoding_t780636494_StaticFields, ___utf32Encoding_25)); }
	inline Encoding_t780636494 * get_utf32Encoding_25() const { return ___utf32Encoding_25; }
	inline Encoding_t780636494 ** get_address_of_utf32Encoding_25() { return &___utf32Encoding_25; }
	inline void set_utf32Encoding_25(Encoding_t780636494 * value)
	{
		___utf32Encoding_25 = value;
		Il2CppCodeGenWriteBarrier((&___utf32Encoding_25), value);
	}

	inline static int32_t get_offset_of_bigEndianUTF32Encoding_26() { return static_cast<int32_t>(offsetof(Encoding_t780636494_StaticFields, ___bigEndianUTF32Encoding_26)); }
	inline Encoding_t780636494 * get_bigEndianUTF32Encoding_26() const { return ___bigEndianUTF32Encoding_26; }
	inline Encoding_t780636494 ** get_address_of_bigEndianUTF32Encoding_26() { return &___bigEndianUTF32Encoding_26; }
	inline void set_bigEndianUTF32Encoding_26(Encoding_t780636494 * value)
	{
		___bigEndianUTF32Encoding_26 = value;
		Il2CppCodeGenWriteBarrier((&___bigEndianUTF32Encoding_26), value);
	}

	inline static int32_t get_offset_of_lockobj_27() { return static_cast<int32_t>(offsetof(Encoding_t780636494_StaticFields, ___lockobj_27)); }
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
#endif // ENCODING_T780636494_H
#ifndef VALUETYPE_T3399951316_H
#define VALUETYPE_T3399951316_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3399951316  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3399951316_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3399951316_marshaled_com
{
};
#endif // VALUETYPE_T3399951316_H
#ifndef SERIALIZABLEVECTOR4_T2721314724_H
#define SERIALIZABLEVECTOR4_T2721314724_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Utils.SerializableVector4
struct  SerializableVector4_t2721314724  : public RuntimeObject
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
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(SerializableVector4_t2721314724, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(SerializableVector4_t2721314724, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(SerializableVector4_t2721314724, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(SerializableVector4_t2721314724, ___w_3)); }
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
#endif // SERIALIZABLEVECTOR4_T2721314724_H
#ifndef SERIALIZABLEUNITYARMATRIX4X4_T3252701909_H
#define SERIALIZABLEUNITYARMATRIX4X4_T3252701909_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Utils.serializableUnityARMatrix4x4
struct  serializableUnityARMatrix4x4_t3252701909  : public RuntimeObject
{
public:
	// Utils.SerializableVector4 Utils.serializableUnityARMatrix4x4::column0
	SerializableVector4_t2721314724 * ___column0_0;
	// Utils.SerializableVector4 Utils.serializableUnityARMatrix4x4::column1
	SerializableVector4_t2721314724 * ___column1_1;
	// Utils.SerializableVector4 Utils.serializableUnityARMatrix4x4::column2
	SerializableVector4_t2721314724 * ___column2_2;
	// Utils.SerializableVector4 Utils.serializableUnityARMatrix4x4::column3
	SerializableVector4_t2721314724 * ___column3_3;

public:
	inline static int32_t get_offset_of_column0_0() { return static_cast<int32_t>(offsetof(serializableUnityARMatrix4x4_t3252701909, ___column0_0)); }
	inline SerializableVector4_t2721314724 * get_column0_0() const { return ___column0_0; }
	inline SerializableVector4_t2721314724 ** get_address_of_column0_0() { return &___column0_0; }
	inline void set_column0_0(SerializableVector4_t2721314724 * value)
	{
		___column0_0 = value;
		Il2CppCodeGenWriteBarrier((&___column0_0), value);
	}

	inline static int32_t get_offset_of_column1_1() { return static_cast<int32_t>(offsetof(serializableUnityARMatrix4x4_t3252701909, ___column1_1)); }
	inline SerializableVector4_t2721314724 * get_column1_1() const { return ___column1_1; }
	inline SerializableVector4_t2721314724 ** get_address_of_column1_1() { return &___column1_1; }
	inline void set_column1_1(SerializableVector4_t2721314724 * value)
	{
		___column1_1 = value;
		Il2CppCodeGenWriteBarrier((&___column1_1), value);
	}

	inline static int32_t get_offset_of_column2_2() { return static_cast<int32_t>(offsetof(serializableUnityARMatrix4x4_t3252701909, ___column2_2)); }
	inline SerializableVector4_t2721314724 * get_column2_2() const { return ___column2_2; }
	inline SerializableVector4_t2721314724 ** get_address_of_column2_2() { return &___column2_2; }
	inline void set_column2_2(SerializableVector4_t2721314724 * value)
	{
		___column2_2 = value;
		Il2CppCodeGenWriteBarrier((&___column2_2), value);
	}

	inline static int32_t get_offset_of_column3_3() { return static_cast<int32_t>(offsetof(serializableUnityARMatrix4x4_t3252701909, ___column3_3)); }
	inline SerializableVector4_t2721314724 * get_column3_3() const { return ___column3_3; }
	inline SerializableVector4_t2721314724 ** get_address_of_column3_3() { return &___column3_3; }
	inline void set_column3_3(SerializableVector4_t2721314724 * value)
	{
		___column3_3 = value;
		Il2CppCodeGenWriteBarrier((&___column3_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZABLEUNITYARMATRIX4X4_T3252701909_H
#ifndef VOID_T292648814_H
#define VOID_T292648814_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t292648814 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T292648814_H
#ifndef BYTE_T2215219302_H
#define BYTE_T2215219302_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Byte
struct  Byte_t2215219302 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Byte_t2215219302, ___m_value_2)); }
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
#endif // BYTE_T2215219302_H
#ifndef ENUM_T2148253514_H
#define ENUM_T2148253514_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2148253514_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2148253514_marshaled_com
{
};
#endif // ENUM_T2148253514_H
#ifndef MATRIX4X4_T2357404995_H
#define MATRIX4X4_T2357404995_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Matrix4x4
struct  Matrix4x4_t2357404995 
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
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t2357404995, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t2357404995, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t2357404995, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t2357404995, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t2357404995, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t2357404995, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t2357404995, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t2357404995, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t2357404995, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t2357404995, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t2357404995, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t2357404995, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t2357404995, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t2357404995, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t2357404995, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t2357404995, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_t2357404995_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_t2357404995  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_t2357404995  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t2357404995_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_t2357404995  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_t2357404995 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_t2357404995  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_t2357404995_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_t2357404995  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_t2357404995 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_t2357404995  value)
	{
		___identityMatrix_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATRIX4X4_T2357404995_H
#ifndef VECTOR3_T1548304438_H
#define VECTOR3_T1548304438_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t1548304438 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t1548304438, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t1548304438, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t1548304438, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t1548304438_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t1548304438  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t1548304438  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t1548304438  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t1548304438  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t1548304438  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t1548304438  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t1548304438  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t1548304438  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t1548304438  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t1548304438  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t1548304438_StaticFields, ___zeroVector_4)); }
	inline Vector3_t1548304438  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t1548304438 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t1548304438  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t1548304438_StaticFields, ___oneVector_5)); }
	inline Vector3_t1548304438  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t1548304438 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t1548304438  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t1548304438_StaticFields, ___upVector_6)); }
	inline Vector3_t1548304438  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t1548304438 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t1548304438  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t1548304438_StaticFields, ___downVector_7)); }
	inline Vector3_t1548304438  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t1548304438 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t1548304438  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t1548304438_StaticFields, ___leftVector_8)); }
	inline Vector3_t1548304438  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t1548304438 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t1548304438  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t1548304438_StaticFields, ___rightVector_9)); }
	inline Vector3_t1548304438  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t1548304438 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t1548304438  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t1548304438_StaticFields, ___forwardVector_10)); }
	inline Vector3_t1548304438  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t1548304438 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t1548304438  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t1548304438_StaticFields, ___backVector_11)); }
	inline Vector3_t1548304438  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t1548304438 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t1548304438  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t1548304438_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t1548304438  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t1548304438 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t1548304438  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t1548304438_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t1548304438  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t1548304438 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t1548304438  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T1548304438_H
#ifndef SINGLE_T2821956796_H
#define SINGLE_T2821956796_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t2821956796 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t2821956796, ___m_value_7)); }
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
#endif // SINGLE_T2821956796_H
#ifndef VECTOR4_T1711707763_H
#define VECTOR4_T1711707763_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector4
struct  Vector4_t1711707763 
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
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_t1711707763, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_t1711707763, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_t1711707763, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_t1711707763, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_t1711707763_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t1711707763  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t1711707763  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t1711707763  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t1711707763  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_t1711707763_StaticFields, ___zeroVector_5)); }
	inline Vector4_t1711707763  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_t1711707763 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_t1711707763  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_t1711707763_StaticFields, ___oneVector_6)); }
	inline Vector4_t1711707763  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_t1711707763 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_t1711707763  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_t1711707763_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_t1711707763  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_t1711707763 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_t1711707763  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_t1711707763_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_t1711707763  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_t1711707763 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_t1711707763  value)
	{
		___negativeInfinityVector_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR4_T1711707763_H
#ifndef ARPLANEANCHORALIGNMENT_T2681738049_H
#define ARPLANEANCHORALIGNMENT_T2681738049_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARPlaneAnchorAlignment
struct  ARPlaneAnchorAlignment_t2681738049 
{
public:
	// System.Int64 UnityEngine.XR.iOS.ARPlaneAnchorAlignment::value__
	int64_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ARPlaneAnchorAlignment_t2681738049, ___value___1)); }
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
#endif // ARPLANEANCHORALIGNMENT_T2681738049_H
#ifndef SERIALIZABLEUNITYARPLANEANCHOR_T3186085038_H
#define SERIALIZABLEUNITYARPLANEANCHOR_T3186085038_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Utils.serializableUnityARPlaneAnchor
struct  serializableUnityARPlaneAnchor_t3186085038  : public RuntimeObject
{
public:
	// Utils.serializableUnityARMatrix4x4 Utils.serializableUnityARPlaneAnchor::worldTransform
	serializableUnityARMatrix4x4_t3252701909 * ___worldTransform_0;
	// Utils.SerializableVector4 Utils.serializableUnityARPlaneAnchor::center
	SerializableVector4_t2721314724 * ___center_1;
	// Utils.SerializableVector4 Utils.serializableUnityARPlaneAnchor::extent
	SerializableVector4_t2721314724 * ___extent_2;
	// UnityEngine.XR.iOS.ARPlaneAnchorAlignment Utils.serializableUnityARPlaneAnchor::planeAlignment
	int64_t ___planeAlignment_3;
	// System.Byte[] Utils.serializableUnityARPlaneAnchor::identifierStr
	ByteU5BU5D_t757797699* ___identifierStr_4;

public:
	inline static int32_t get_offset_of_worldTransform_0() { return static_cast<int32_t>(offsetof(serializableUnityARPlaneAnchor_t3186085038, ___worldTransform_0)); }
	inline serializableUnityARMatrix4x4_t3252701909 * get_worldTransform_0() const { return ___worldTransform_0; }
	inline serializableUnityARMatrix4x4_t3252701909 ** get_address_of_worldTransform_0() { return &___worldTransform_0; }
	inline void set_worldTransform_0(serializableUnityARMatrix4x4_t3252701909 * value)
	{
		___worldTransform_0 = value;
		Il2CppCodeGenWriteBarrier((&___worldTransform_0), value);
	}

	inline static int32_t get_offset_of_center_1() { return static_cast<int32_t>(offsetof(serializableUnityARPlaneAnchor_t3186085038, ___center_1)); }
	inline SerializableVector4_t2721314724 * get_center_1() const { return ___center_1; }
	inline SerializableVector4_t2721314724 ** get_address_of_center_1() { return &___center_1; }
	inline void set_center_1(SerializableVector4_t2721314724 * value)
	{
		___center_1 = value;
		Il2CppCodeGenWriteBarrier((&___center_1), value);
	}

	inline static int32_t get_offset_of_extent_2() { return static_cast<int32_t>(offsetof(serializableUnityARPlaneAnchor_t3186085038, ___extent_2)); }
	inline SerializableVector4_t2721314724 * get_extent_2() const { return ___extent_2; }
	inline SerializableVector4_t2721314724 ** get_address_of_extent_2() { return &___extent_2; }
	inline void set_extent_2(SerializableVector4_t2721314724 * value)
	{
		___extent_2 = value;
		Il2CppCodeGenWriteBarrier((&___extent_2), value);
	}

	inline static int32_t get_offset_of_planeAlignment_3() { return static_cast<int32_t>(offsetof(serializableUnityARPlaneAnchor_t3186085038, ___planeAlignment_3)); }
	inline int64_t get_planeAlignment_3() const { return ___planeAlignment_3; }
	inline int64_t* get_address_of_planeAlignment_3() { return &___planeAlignment_3; }
	inline void set_planeAlignment_3(int64_t value)
	{
		___planeAlignment_3 = value;
	}

	inline static int32_t get_offset_of_identifierStr_4() { return static_cast<int32_t>(offsetof(serializableUnityARPlaneAnchor_t3186085038, ___identifierStr_4)); }
	inline ByteU5BU5D_t757797699* get_identifierStr_4() const { return ___identifierStr_4; }
	inline ByteU5BU5D_t757797699** get_address_of_identifierStr_4() { return &___identifierStr_4; }
	inline void set_identifierStr_4(ByteU5BU5D_t757797699* value)
	{
		___identifierStr_4 = value;
		Il2CppCodeGenWriteBarrier((&___identifierStr_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZABLEUNITYARPLANEANCHOR_T3186085038_H
#ifndef ARPLANEANCHOR_T1908457607_H
#define ARPLANEANCHOR_T1908457607_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARPlaneAnchor
struct  ARPlaneAnchor_t1908457607 
{
public:
	// System.String UnityEngine.XR.iOS.ARPlaneAnchor::identifier
	String_t* ___identifier_0;
	// UnityEngine.Matrix4x4 UnityEngine.XR.iOS.ARPlaneAnchor::transform
	Matrix4x4_t2357404995  ___transform_1;
	// UnityEngine.XR.iOS.ARPlaneAnchorAlignment UnityEngine.XR.iOS.ARPlaneAnchor::alignment
	int64_t ___alignment_2;
	// UnityEngine.Vector3 UnityEngine.XR.iOS.ARPlaneAnchor::center
	Vector3_t1548304438  ___center_3;
	// UnityEngine.Vector3 UnityEngine.XR.iOS.ARPlaneAnchor::extent
	Vector3_t1548304438  ___extent_4;

public:
	inline static int32_t get_offset_of_identifier_0() { return static_cast<int32_t>(offsetof(ARPlaneAnchor_t1908457607, ___identifier_0)); }
	inline String_t* get_identifier_0() const { return ___identifier_0; }
	inline String_t** get_address_of_identifier_0() { return &___identifier_0; }
	inline void set_identifier_0(String_t* value)
	{
		___identifier_0 = value;
		Il2CppCodeGenWriteBarrier((&___identifier_0), value);
	}

	inline static int32_t get_offset_of_transform_1() { return static_cast<int32_t>(offsetof(ARPlaneAnchor_t1908457607, ___transform_1)); }
	inline Matrix4x4_t2357404995  get_transform_1() const { return ___transform_1; }
	inline Matrix4x4_t2357404995 * get_address_of_transform_1() { return &___transform_1; }
	inline void set_transform_1(Matrix4x4_t2357404995  value)
	{
		___transform_1 = value;
	}

	inline static int32_t get_offset_of_alignment_2() { return static_cast<int32_t>(offsetof(ARPlaneAnchor_t1908457607, ___alignment_2)); }
	inline int64_t get_alignment_2() const { return ___alignment_2; }
	inline int64_t* get_address_of_alignment_2() { return &___alignment_2; }
	inline void set_alignment_2(int64_t value)
	{
		___alignment_2 = value;
	}

	inline static int32_t get_offset_of_center_3() { return static_cast<int32_t>(offsetof(ARPlaneAnchor_t1908457607, ___center_3)); }
	inline Vector3_t1548304438  get_center_3() const { return ___center_3; }
	inline Vector3_t1548304438 * get_address_of_center_3() { return &___center_3; }
	inline void set_center_3(Vector3_t1548304438  value)
	{
		___center_3 = value;
	}

	inline static int32_t get_offset_of_extent_4() { return static_cast<int32_t>(offsetof(ARPlaneAnchor_t1908457607, ___extent_4)); }
	inline Vector3_t1548304438  get_extent_4() const { return ___extent_4; }
	inline Vector3_t1548304438 * get_address_of_extent_4() { return &___extent_4; }
	inline void set_extent_4(Vector3_t1548304438  value)
	{
		___extent_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.XR.iOS.ARPlaneAnchor
struct ARPlaneAnchor_t1908457607_marshaled_pinvoke
{
	char* ___identifier_0;
	Matrix4x4_t2357404995  ___transform_1;
	int64_t ___alignment_2;
	Vector3_t1548304438  ___center_3;
	Vector3_t1548304438  ___extent_4;
};
// Native definition for COM marshalling of UnityEngine.XR.iOS.ARPlaneAnchor
struct ARPlaneAnchor_t1908457607_marshaled_com
{
	Il2CppChar* ___identifier_0;
	Matrix4x4_t2357404995  ___transform_1;
	int64_t ___alignment_2;
	Vector3_t1548304438  ___center_3;
	Vector3_t1548304438  ___extent_4;
};
#endif // ARPLANEANCHOR_T1908457607_H
// System.Byte[]
struct ByteU5BU5D_t757797699  : public RuntimeArray
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
struct ObjectU5BU5D_t1553377324  : public RuntimeArray
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
extern "C"  void Object__ctor_m1629195763 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Utils.serializableUnityARMatrix4x4 Utils.serializableUnityARMatrix4x4::op_Implicit(UnityEngine.Matrix4x4)
extern "C"  serializableUnityARMatrix4x4_t3252701909 * serializableUnityARMatrix4x4_op_Implicit_m3185638599 (RuntimeObject * __this /* static, unused */, Matrix4x4_t2357404995  ___rValue0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Utils.SerializableVector4::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C"  void SerializableVector4__ctor_m1840945390 (SerializableVector4_t2721314724 * __this, float ___rX0, float ___rY1, float ___rZ2, float ___rW3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
extern "C"  Encoding_t780636494 * Encoding_get_UTF8_m4044068108 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Utils.serializableUnityARPlaneAnchor::.ctor(Utils.serializableUnityARMatrix4x4,Utils.SerializableVector4,Utils.SerializableVector4,UnityEngine.XR.iOS.ARPlaneAnchorAlignment,System.Byte[])
extern "C"  void serializableUnityARPlaneAnchor__ctor_m4263652463 (serializableUnityARPlaneAnchor_t3186085038 * __this, serializableUnityARMatrix4x4_t3252701909 * ___wt0, SerializableVector4_t2721314724 * ___ctr1, SerializableVector4_t2721314724 * ___ext2, int64_t ___apaa3, ByteU5BU5D_t757797699* ___idstr4, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C"  void Vector3__ctor_m1684116453 (Vector3_t1548304438 * __this, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 Utils.serializableUnityARMatrix4x4::op_Implicit(Utils.serializableUnityARMatrix4x4)
extern "C"  Matrix4x4_t2357404995  serializableUnityARMatrix4x4_op_Implicit_m60920491 (RuntimeObject * __this /* static, unused */, serializableUnityARMatrix4x4_t3252701909 * ___rValue0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.String,System.Object[])
extern "C"  String_t* String_Format_m50329369 (RuntimeObject * __this /* static, unused */, String_t* p0, ObjectU5BU5D_t1553377324* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C"  void Vector4__ctor_m3812070843 (Vector4_t1711707763 * __this, float p0, float p1, float p2, float p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Utils.serializableUnityARPlaneAnchor::.ctor(Utils.serializableUnityARMatrix4x4,Utils.SerializableVector4,Utils.SerializableVector4,UnityEngine.XR.iOS.ARPlaneAnchorAlignment,System.Byte[])
extern "C"  void serializableUnityARPlaneAnchor__ctor_m4263652463 (serializableUnityARPlaneAnchor_t3186085038 * __this, serializableUnityARMatrix4x4_t3252701909 * ___wt0, SerializableVector4_t2721314724 * ___ctr1, SerializableVector4_t2721314724 * ___ext2, int64_t ___apaa3, ByteU5BU5D_t757797699* ___idstr4, const RuntimeMethod* method)
{
	{
		Object__ctor_m1629195763(__this, /*hidden argument*/NULL);
		serializableUnityARMatrix4x4_t3252701909 * L_0 = ___wt0;
		__this->set_worldTransform_0(L_0);
		SerializableVector4_t2721314724 * L_1 = ___ctr1;
		__this->set_center_1(L_1);
		SerializableVector4_t2721314724 * L_2 = ___ext2;
		__this->set_extent_2(L_2);
		int64_t L_3 = ___apaa3;
		__this->set_planeAlignment_3(L_3);
		ByteU5BU5D_t757797699* L_4 = ___idstr4;
		__this->set_identifierStr_4(L_4);
		return;
	}
}
// Utils.serializableUnityARPlaneAnchor Utils.serializableUnityARPlaneAnchor::op_Implicit(UnityEngine.XR.iOS.ARPlaneAnchor)
extern "C"  serializableUnityARPlaneAnchor_t3186085038 * serializableUnityARPlaneAnchor_op_Implicit_m1294788761 (RuntimeObject * __this /* static, unused */, ARPlaneAnchor_t1908457607  ___rValue0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (serializableUnityARPlaneAnchor_op_Implicit_m1294788761_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	serializableUnityARMatrix4x4_t3252701909 * V_0 = NULL;
	SerializableVector4_t2721314724 * V_1 = NULL;
	SerializableVector4_t2721314724 * V_2 = NULL;
	ByteU5BU5D_t757797699* V_3 = NULL;
	{
		Matrix4x4_t2357404995  L_0 = (&___rValue0)->get_transform_1();
		serializableUnityARMatrix4x4_t3252701909 * L_1 = serializableUnityARMatrix4x4_op_Implicit_m3185638599(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Vector3_t1548304438 * L_2 = (&___rValue0)->get_address_of_center_3();
		float L_3 = L_2->get_x_1();
		Vector3_t1548304438 * L_4 = (&___rValue0)->get_address_of_center_3();
		float L_5 = L_4->get_y_2();
		Vector3_t1548304438 * L_6 = (&___rValue0)->get_address_of_center_3();
		float L_7 = L_6->get_z_3();
		SerializableVector4_t2721314724 * L_8 = (SerializableVector4_t2721314724 *)il2cpp_codegen_object_new(SerializableVector4_t2721314724_il2cpp_TypeInfo_var);
		SerializableVector4__ctor_m1840945390(L_8, L_3, L_5, L_7, (1.0f), /*hidden argument*/NULL);
		V_1 = L_8;
		Vector3_t1548304438 * L_9 = (&___rValue0)->get_address_of_extent_4();
		float L_10 = L_9->get_x_1();
		Vector3_t1548304438 * L_11 = (&___rValue0)->get_address_of_extent_4();
		float L_12 = L_11->get_y_2();
		Vector3_t1548304438 * L_13 = (&___rValue0)->get_address_of_extent_4();
		float L_14 = L_13->get_z_3();
		SerializableVector4_t2721314724 * L_15 = (SerializableVector4_t2721314724 *)il2cpp_codegen_object_new(SerializableVector4_t2721314724_il2cpp_TypeInfo_var);
		SerializableVector4__ctor_m1840945390(L_15, L_10, L_12, L_14, (1.0f), /*hidden argument*/NULL);
		V_2 = L_15;
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t780636494_il2cpp_TypeInfo_var);
		Encoding_t780636494 * L_16 = Encoding_get_UTF8_m4044068108(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_17 = (&___rValue0)->get_identifier_0();
		NullCheck(L_16);
		ByteU5BU5D_t757797699* L_18 = VirtFuncInvoker1< ByteU5BU5D_t757797699*, String_t* >::Invoke(10 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_16, L_17);
		V_3 = L_18;
		serializableUnityARMatrix4x4_t3252701909 * L_19 = V_0;
		SerializableVector4_t2721314724 * L_20 = V_1;
		SerializableVector4_t2721314724 * L_21 = V_2;
		int64_t L_22 = (&___rValue0)->get_alignment_2();
		ByteU5BU5D_t757797699* L_23 = V_3;
		serializableUnityARPlaneAnchor_t3186085038 * L_24 = (serializableUnityARPlaneAnchor_t3186085038 *)il2cpp_codegen_object_new(serializableUnityARPlaneAnchor_t3186085038_il2cpp_TypeInfo_var);
		serializableUnityARPlaneAnchor__ctor_m4263652463(L_24, L_19, L_20, L_21, L_22, L_23, /*hidden argument*/NULL);
		return L_24;
	}
}
// UnityEngine.XR.iOS.ARPlaneAnchor Utils.serializableUnityARPlaneAnchor::op_Implicit(Utils.serializableUnityARPlaneAnchor)
extern "C"  ARPlaneAnchor_t1908457607  serializableUnityARPlaneAnchor_op_Implicit_m2159857494 (RuntimeObject * __this /* static, unused */, serializableUnityARPlaneAnchor_t3186085038 * ___rValue0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (serializableUnityARPlaneAnchor_op_Implicit_m2159857494_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ARPlaneAnchor_t1908457607  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t780636494_il2cpp_TypeInfo_var);
		Encoding_t780636494 * L_0 = Encoding_get_UTF8_m4044068108(NULL /*static, unused*/, /*hidden argument*/NULL);
		serializableUnityARPlaneAnchor_t3186085038 * L_1 = ___rValue0;
		NullCheck(L_1);
		ByteU5BU5D_t757797699* L_2 = L_1->get_identifierStr_4();
		NullCheck(L_0);
		String_t* L_3 = VirtFuncInvoker1< String_t*, ByteU5BU5D_t757797699* >::Invoke(23 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_0, L_2);
		(&V_0)->set_identifier_0(L_3);
		serializableUnityARPlaneAnchor_t3186085038 * L_4 = ___rValue0;
		NullCheck(L_4);
		SerializableVector4_t2721314724 * L_5 = L_4->get_center_1();
		NullCheck(L_5);
		float L_6 = L_5->get_x_0();
		serializableUnityARPlaneAnchor_t3186085038 * L_7 = ___rValue0;
		NullCheck(L_7);
		SerializableVector4_t2721314724 * L_8 = L_7->get_center_1();
		NullCheck(L_8);
		float L_9 = L_8->get_y_1();
		serializableUnityARPlaneAnchor_t3186085038 * L_10 = ___rValue0;
		NullCheck(L_10);
		SerializableVector4_t2721314724 * L_11 = L_10->get_center_1();
		NullCheck(L_11);
		float L_12 = L_11->get_z_2();
		Vector3_t1548304438  L_13;
		memset(&L_13, 0, sizeof(L_13));
		Vector3__ctor_m1684116453((&L_13), L_6, L_9, L_12, /*hidden argument*/NULL);
		(&V_0)->set_center_3(L_13);
		serializableUnityARPlaneAnchor_t3186085038 * L_14 = ___rValue0;
		NullCheck(L_14);
		SerializableVector4_t2721314724 * L_15 = L_14->get_extent_2();
		NullCheck(L_15);
		float L_16 = L_15->get_x_0();
		serializableUnityARPlaneAnchor_t3186085038 * L_17 = ___rValue0;
		NullCheck(L_17);
		SerializableVector4_t2721314724 * L_18 = L_17->get_extent_2();
		NullCheck(L_18);
		float L_19 = L_18->get_y_1();
		serializableUnityARPlaneAnchor_t3186085038 * L_20 = ___rValue0;
		NullCheck(L_20);
		SerializableVector4_t2721314724 * L_21 = L_20->get_extent_2();
		NullCheck(L_21);
		float L_22 = L_21->get_z_2();
		Vector3_t1548304438  L_23;
		memset(&L_23, 0, sizeof(L_23));
		Vector3__ctor_m1684116453((&L_23), L_16, L_19, L_22, /*hidden argument*/NULL);
		(&V_0)->set_extent_4(L_23);
		serializableUnityARPlaneAnchor_t3186085038 * L_24 = ___rValue0;
		NullCheck(L_24);
		int64_t L_25 = L_24->get_planeAlignment_3();
		(&V_0)->set_alignment_2(L_25);
		serializableUnityARPlaneAnchor_t3186085038 * L_26 = ___rValue0;
		NullCheck(L_26);
		serializableUnityARMatrix4x4_t3252701909 * L_27 = L_26->get_worldTransform_0();
		Matrix4x4_t2357404995  L_28 = serializableUnityARMatrix4x4_op_Implicit_m60920491(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
		(&V_0)->set_transform_1(L_28);
		ARPlaneAnchor_t1908457607  L_29 = V_0;
		return L_29;
	}
}
// System.Void Utils.SerializableVector4::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C"  void SerializableVector4__ctor_m1840945390 (SerializableVector4_t2721314724 * __this, float ___rX0, float ___rY1, float ___rZ2, float ___rW3, const RuntimeMethod* method)
{
	{
		Object__ctor_m1629195763(__this, /*hidden argument*/NULL);
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
extern "C"  String_t* SerializableVector4_ToString_m234487079 (SerializableVector4_t2721314724 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SerializableVector4_ToString_m234487079_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t1553377324* L_0 = ((ObjectU5BU5D_t1553377324*)SZArrayNew(ObjectU5BU5D_t1553377324_il2cpp_TypeInfo_var, (uint32_t)4));
		float L_1 = __this->get_x_0();
		float L_2 = L_1;
		RuntimeObject * L_3 = Box(Single_t2821956796_il2cpp_TypeInfo_var, &L_2);
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, L_3);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_t1553377324* L_4 = L_0;
		float L_5 = __this->get_y_1();
		float L_6 = L_5;
		RuntimeObject * L_7 = Box(Single_t2821956796_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_7);
		ObjectU5BU5D_t1553377324* L_8 = L_4;
		float L_9 = __this->get_z_2();
		float L_10 = L_9;
		RuntimeObject * L_11 = Box(Single_t2821956796_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_11);
		ObjectU5BU5D_t1553377324* L_12 = L_8;
		float L_13 = __this->get_w_3();
		float L_14 = L_13;
		RuntimeObject * L_15 = Box(Single_t2821956796_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_15);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_16 = String_Format_m50329369(NULL /*static, unused*/, _stringLiteral52163440, L_12, /*hidden argument*/NULL);
		return L_16;
	}
}
// UnityEngine.Vector4 Utils.SerializableVector4::op_Implicit(Utils.SerializableVector4)
extern "C"  Vector4_t1711707763  SerializableVector4_op_Implicit_m552182236 (RuntimeObject * __this /* static, unused */, SerializableVector4_t2721314724 * ___rValue0, const RuntimeMethod* method)
{
	{
		SerializableVector4_t2721314724 * L_0 = ___rValue0;
		NullCheck(L_0);
		float L_1 = L_0->get_x_0();
		SerializableVector4_t2721314724 * L_2 = ___rValue0;
		NullCheck(L_2);
		float L_3 = L_2->get_y_1();
		SerializableVector4_t2721314724 * L_4 = ___rValue0;
		NullCheck(L_4);
		float L_5 = L_4->get_z_2();
		SerializableVector4_t2721314724 * L_6 = ___rValue0;
		NullCheck(L_6);
		float L_7 = L_6->get_w_3();
		Vector4_t1711707763  L_8;
		memset(&L_8, 0, sizeof(L_8));
		Vector4__ctor_m3812070843((&L_8), L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// Utils.SerializableVector4 Utils.SerializableVector4::op_Implicit(UnityEngine.Vector4)
extern "C"  SerializableVector4_t2721314724 * SerializableVector4_op_Implicit_m1935864812 (RuntimeObject * __this /* static, unused */, Vector4_t1711707763  ___rValue0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SerializableVector4_op_Implicit_m1935864812_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = (&___rValue0)->get_x_1();
		float L_1 = (&___rValue0)->get_y_2();
		float L_2 = (&___rValue0)->get_z_3();
		float L_3 = (&___rValue0)->get_w_4();
		SerializableVector4_t2721314724 * L_4 = (SerializableVector4_t2721314724 *)il2cpp_codegen_object_new(SerializableVector4_t2721314724_il2cpp_TypeInfo_var);
		SerializableVector4__ctor_m1840945390(L_4, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif

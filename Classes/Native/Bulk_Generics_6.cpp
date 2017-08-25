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

// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t2179077646;
// System.Char[]
struct CharU5BU5D_t3627984832;
// System.Void
struct Void_t3526548579;

extern RuntimeClass* StringU5BU5D_t2179077646_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral4118971342;
extern Il2CppCodeGenString* _stringLiteral1533108750;
extern Il2CppCodeGenString* _stringLiteral1511173054;
extern const uint32_t KeyValuePair_2_ToString_m2127250830_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m1885984361_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m4267913181_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m1065183325_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m427248250_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m763756453_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m907306452_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m3054812538_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m123715502_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m420889086_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m4015106371_MetadataUsageId;

struct StringU5BU5D_t2179077646;


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
#ifndef VALUETYPE_T2954110875_H
#define VALUETYPE_T2954110875_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t2954110875  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t2954110875_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t2954110875_marshaled_com
{
};
#endif // VALUETYPE_T2954110875_H
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
	CharU5BU5D_t3627984832* ___WhiteChars_3;

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
	inline CharU5BU5D_t3627984832* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3627984832** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3627984832* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef VEC2I_T1577557756_H
#define VEC2I_T1577557756_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaRenderer/Vec2I
#pragma pack(push, tp, 1)
struct  Vec2I_t1577557756 
{
public:
	// System.Int32 Vuforia.VuforiaRenderer/Vec2I::x
	int32_t ___x_0;
	// System.Int32 Vuforia.VuforiaRenderer/Vec2I::y
	int32_t ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vec2I_t1577557756, ___x_0)); }
	inline int32_t get_x_0() const { return ___x_0; }
	inline int32_t* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(int32_t value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vec2I_t1577557756, ___y_1)); }
	inline int32_t get_y_1() const { return ___y_1; }
	inline int32_t* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(int32_t value)
	{
		___y_1 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VEC2I_T1577557756_H
#ifndef ENUM_T1650246525_H
#define ENUM_T1650246525_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t1650246525  : public ValueType_t2954110875
{
public:

public:
};

struct Enum_t1650246525_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3627984832* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t1650246525_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3627984832* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3627984832** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3627984832* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t1650246525_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t1650246525_marshaled_com
{
};
#endif // ENUM_T1650246525_H
#ifndef TRACKABLEIDPAIR_T4255691917_H
#define TRACKABLEIDPAIR_T4255691917_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaManager/TrackableIdPair
struct  TrackableIdPair_t4255691917 
{
public:
	// System.Int32 Vuforia.VuforiaManager/TrackableIdPair::TrackableId
	int32_t ___TrackableId_0;
	// System.Int32 Vuforia.VuforiaManager/TrackableIdPair::ResultId
	int32_t ___ResultId_1;

public:
	inline static int32_t get_offset_of_TrackableId_0() { return static_cast<int32_t>(offsetof(TrackableIdPair_t4255691917, ___TrackableId_0)); }
	inline int32_t get_TrackableId_0() const { return ___TrackableId_0; }
	inline int32_t* get_address_of_TrackableId_0() { return &___TrackableId_0; }
	inline void set_TrackableId_0(int32_t value)
	{
		___TrackableId_0 = value;
	}

	inline static int32_t get_offset_of_ResultId_1() { return static_cast<int32_t>(offsetof(TrackableIdPair_t4255691917, ___ResultId_1)); }
	inline int32_t get_ResultId_1() const { return ___ResultId_1; }
	inline int32_t* get_address_of_ResultId_1() { return &___ResultId_1; }
	inline void set_ResultId_1(int32_t value)
	{
		___ResultId_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKABLEIDPAIR_T4255691917_H
#ifndef UINT16_T667348412_H
#define UINT16_T667348412_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt16
struct  UInt16_t667348412 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(UInt16_t667348412, ___m_value_2)); }
	inline uint16_t get_m_value_2() const { return ___m_value_2; }
	inline uint16_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint16_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT16_T667348412_H
#ifndef KEYVALUEPAIR_2_T20122363_H
#define KEYVALUEPAIR_2_T20122363_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>
struct  KeyValuePair_2_t20122363 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	uint16_t ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t20122363, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t20122363, ___value_1)); }
	inline uint16_t get_value_1() const { return ___value_1; }
	inline uint16_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(uint16_t value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T20122363_H
#ifndef VECTOR3_T78000146_H
#define VECTOR3_T78000146_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t78000146 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t78000146, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t78000146, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t78000146, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t78000146_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t78000146  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t78000146  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t78000146  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t78000146  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t78000146  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t78000146  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t78000146  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t78000146  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t78000146  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t78000146  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t78000146_StaticFields, ___zeroVector_4)); }
	inline Vector3_t78000146  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t78000146 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t78000146  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t78000146_StaticFields, ___oneVector_5)); }
	inline Vector3_t78000146  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t78000146 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t78000146  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t78000146_StaticFields, ___upVector_6)); }
	inline Vector3_t78000146  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t78000146 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t78000146  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t78000146_StaticFields, ___downVector_7)); }
	inline Vector3_t78000146  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t78000146 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t78000146  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t78000146_StaticFields, ___leftVector_8)); }
	inline Vector3_t78000146  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t78000146 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t78000146  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t78000146_StaticFields, ___rightVector_9)); }
	inline Vector3_t78000146  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t78000146 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t78000146  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t78000146_StaticFields, ___forwardVector_10)); }
	inline Vector3_t78000146  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t78000146 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t78000146  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t78000146_StaticFields, ___backVector_11)); }
	inline Vector3_t78000146  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t78000146 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t78000146  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t78000146_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t78000146  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t78000146 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t78000146  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t78000146_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t78000146  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t78000146 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t78000146  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T78000146_H
#ifndef KEYVALUEPAIR_2_T2967435355_H
#define KEYVALUEPAIR_2_T2967435355_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
struct  KeyValuePair_2_t2967435355 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	int32_t ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2967435355, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2967435355, ___value_1)); }
	inline int32_t get_value_1() const { return ___value_1; }
	inline int32_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(int32_t value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T2967435355_H
#ifndef BOOLEAN_T1155360460_H
#define BOOLEAN_T1155360460_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t1155360460 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t1155360460, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t1155360460_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t1155360460_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t1155360460_StaticFields, ___TrueString_1)); }
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
#endif // BOOLEAN_T1155360460_H
#ifndef KEYVALUEPAIR_2_T3901178844_H
#define KEYVALUEPAIR_2_T3901178844_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct  KeyValuePair_2_t3901178844 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3901178844, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3901178844, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T3901178844_H
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
	IntPtr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline IntPtr_t get_Zero_1() const { return ___Zero_1; }
	inline IntPtr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(IntPtr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef KEYVALUEPAIR_2_T1161464449_H
#define KEYVALUEPAIR_2_T1161464449_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
struct  KeyValuePair_2_t1161464449 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1161464449, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1161464449, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T1161464449_H
#ifndef VOID_T3526548579_H
#define VOID_T3526548579_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t3526548579 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T3526548579_H
#ifndef INT32_T3614661404_H
#define INT32_T3614661404_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t3614661404 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t3614661404, ___m_value_2)); }
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
#endif // INT32_T3614661404_H
#ifndef KEYVALUEPAIR_2_T508134411_H
#define KEYVALUEPAIR_2_T508134411_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>
struct  KeyValuePair_2_t508134411 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	bool ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t508134411, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t508134411, ___value_1)); }
	inline bool get_value_1() const { return ___value_1; }
	inline bool* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(bool value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T508134411_H
#ifndef QUATERNION_T790973058_H
#define QUATERNION_T790973058_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t790973058 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t790973058, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t790973058, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t790973058, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t790973058, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t790973058_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t790973058  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t790973058_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t790973058  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t790973058 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t790973058  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T790973058_H
#ifndef VIRTUALBUTTONDATA_T2708325948_H
#define VIRTUALBUTTONDATA_T2708325948_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaManagerImpl/VirtualButtonData
#pragma pack(push, tp, 1)
struct  VirtualButtonData_t2708325948 
{
public:
	// System.Int32 Vuforia.VuforiaManagerImpl/VirtualButtonData::id
	int32_t ___id_0;
	// System.Int32 Vuforia.VuforiaManagerImpl/VirtualButtonData::isPressed
	int32_t ___isPressed_1;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(VirtualButtonData_t2708325948, ___id_0)); }
	inline int32_t get_id_0() const { return ___id_0; }
	inline int32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(int32_t value)
	{
		___id_0 = value;
	}

	inline static int32_t get_offset_of_isPressed_1() { return static_cast<int32_t>(offsetof(VirtualButtonData_t2708325948, ___isPressed_1)); }
	inline int32_t get_isPressed_1() const { return ___isPressed_1; }
	inline int32_t* get_address_of_isPressed_1() { return &___isPressed_1; }
	inline void set_isPressed_1(int32_t value)
	{
		___isPressed_1 = value;
	}
};
#pragma pack(pop, tp)

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIRTUALBUTTONDATA_T2708325948_H
#ifndef PROFILEDATA_T3131620333_H
#define PROFILEDATA_T3131620333_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.WebCamProfile/ProfileData
struct  ProfileData_t3131620333 
{
public:
	// Vuforia.VuforiaRenderer/Vec2I Vuforia.WebCamProfile/ProfileData::RequestedTextureSize
	Vec2I_t1577557756  ___RequestedTextureSize_0;
	// Vuforia.VuforiaRenderer/Vec2I Vuforia.WebCamProfile/ProfileData::ResampledTextureSize
	Vec2I_t1577557756  ___ResampledTextureSize_1;
	// System.Int32 Vuforia.WebCamProfile/ProfileData::RequestedFPS
	int32_t ___RequestedFPS_2;

public:
	inline static int32_t get_offset_of_RequestedTextureSize_0() { return static_cast<int32_t>(offsetof(ProfileData_t3131620333, ___RequestedTextureSize_0)); }
	inline Vec2I_t1577557756  get_RequestedTextureSize_0() const { return ___RequestedTextureSize_0; }
	inline Vec2I_t1577557756 * get_address_of_RequestedTextureSize_0() { return &___RequestedTextureSize_0; }
	inline void set_RequestedTextureSize_0(Vec2I_t1577557756  value)
	{
		___RequestedTextureSize_0 = value;
	}

	inline static int32_t get_offset_of_ResampledTextureSize_1() { return static_cast<int32_t>(offsetof(ProfileData_t3131620333, ___ResampledTextureSize_1)); }
	inline Vec2I_t1577557756  get_ResampledTextureSize_1() const { return ___ResampledTextureSize_1; }
	inline Vec2I_t1577557756 * get_address_of_ResampledTextureSize_1() { return &___ResampledTextureSize_1; }
	inline void set_ResampledTextureSize_1(Vec2I_t1577557756  value)
	{
		___ResampledTextureSize_1 = value;
	}

	inline static int32_t get_offset_of_RequestedFPS_2() { return static_cast<int32_t>(offsetof(ProfileData_t3131620333, ___RequestedFPS_2)); }
	inline int32_t get_RequestedFPS_2() const { return ___RequestedFPS_2; }
	inline int32_t* get_address_of_RequestedFPS_2() { return &___RequestedFPS_2; }
	inline void set_RequestedFPS_2(int32_t value)
	{
		___RequestedFPS_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROFILEDATA_T3131620333_H
#ifndef STATUS_T662371839_H
#define STATUS_T662371839_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TrackableBehaviour/Status
struct  Status_t662371839 
{
public:
	// System.Int32 Vuforia.TrackableBehaviour/Status::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Status_t662371839, ___value___1)); }
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
#endif // STATUS_T662371839_H
#ifndef KEYVALUEPAIR_2_T3616352800_H
#define KEYVALUEPAIR_2_T3616352800_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>
struct  KeyValuePair_2_t3616352800 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	VirtualButtonData_t2708325948  ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3616352800, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3616352800, ___value_1)); }
	inline VirtualButtonData_t2708325948  get_value_1() const { return ___value_1; }
	inline VirtualButtonData_t2708325948 * get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(VirtualButtonData_t2708325948  value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T3616352800_H
#ifndef KEYVALUEPAIR_2_T2933178761_H
#define KEYVALUEPAIR_2_T2933178761_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>
struct  KeyValuePair_2_t2933178761 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	IntPtr_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2933178761, ___key_0)); }
	inline IntPtr_t get_key_0() const { return ___key_0; }
	inline IntPtr_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(IntPtr_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2933178761, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T2933178761_H
#ifndef POSEINFO_T2150925637_H
#define POSEINFO_T2150925637_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.HoloLensExtendedTrackingManager/PoseInfo
struct  PoseInfo_t2150925637 
{
public:
	// UnityEngine.Vector3 Vuforia.HoloLensExtendedTrackingManager/PoseInfo::Position
	Vector3_t78000146  ___Position_0;
	// UnityEngine.Quaternion Vuforia.HoloLensExtendedTrackingManager/PoseInfo::Rotation
	Quaternion_t790973058  ___Rotation_1;
	// System.Int32 Vuforia.HoloLensExtendedTrackingManager/PoseInfo::NumFramesPoseWasOff
	int32_t ___NumFramesPoseWasOff_2;

public:
	inline static int32_t get_offset_of_Position_0() { return static_cast<int32_t>(offsetof(PoseInfo_t2150925637, ___Position_0)); }
	inline Vector3_t78000146  get_Position_0() const { return ___Position_0; }
	inline Vector3_t78000146 * get_address_of_Position_0() { return &___Position_0; }
	inline void set_Position_0(Vector3_t78000146  value)
	{
		___Position_0 = value;
	}

	inline static int32_t get_offset_of_Rotation_1() { return static_cast<int32_t>(offsetof(PoseInfo_t2150925637, ___Rotation_1)); }
	inline Quaternion_t790973058  get_Rotation_1() const { return ___Rotation_1; }
	inline Quaternion_t790973058 * get_address_of_Rotation_1() { return &___Rotation_1; }
	inline void set_Rotation_1(Quaternion_t790973058  value)
	{
		___Rotation_1 = value;
	}

	inline static int32_t get_offset_of_NumFramesPoseWasOff_2() { return static_cast<int32_t>(offsetof(PoseInfo_t2150925637, ___NumFramesPoseWasOff_2)); }
	inline int32_t get_NumFramesPoseWasOff_2() const { return ___NumFramesPoseWasOff_2; }
	inline int32_t* get_address_of_NumFramesPoseWasOff_2() { return &___NumFramesPoseWasOff_2; }
	inline void set_NumFramesPoseWasOff_2(int32_t value)
	{
		___NumFramesPoseWasOff_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSEINFO_T2150925637_H
#ifndef PIXEL_FORMAT_T2021000666_H
#define PIXEL_FORMAT_T2021000666_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.Image/PIXEL_FORMAT
struct  PIXEL_FORMAT_t2021000666 
{
public:
	// System.Int32 Vuforia.Image/PIXEL_FORMAT::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PIXEL_FORMAT_t2021000666, ___value___1)); }
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
#endif // PIXEL_FORMAT_T2021000666_H
#ifndef KEYVALUEPAIR_2_T941283083_H
#define KEYVALUEPAIR_2_T941283083_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<Vuforia.Image/PIXEL_FORMAT,System.Object>
struct  KeyValuePair_2_t941283083 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t941283083, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t941283083, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T941283083_H
#ifndef KEYVALUEPAIR_2_T1570398691_H
#define KEYVALUEPAIR_2_T1570398691_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackableBehaviour/Status>
struct  KeyValuePair_2_t1570398691 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	int32_t ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1570398691, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1570398691, ___value_1)); }
	inline int32_t get_value_1() const { return ___value_1; }
	inline int32_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(int32_t value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T1570398691_H
#ifndef POSEAGEENTRY_T2217900307_H
#define POSEAGEENTRY_T2217900307_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.HoloLensExtendedTrackingManager/PoseAgeEntry
struct  PoseAgeEntry_t2217900307 
{
public:
	// Vuforia.HoloLensExtendedTrackingManager/PoseInfo Vuforia.HoloLensExtendedTrackingManager/PoseAgeEntry::Pose
	PoseInfo_t2150925637  ___Pose_0;
	// Vuforia.HoloLensExtendedTrackingManager/PoseInfo Vuforia.HoloLensExtendedTrackingManager/PoseAgeEntry::CameraPose
	PoseInfo_t2150925637  ___CameraPose_1;
	// System.Int32 Vuforia.HoloLensExtendedTrackingManager/PoseAgeEntry::Age
	int32_t ___Age_2;

public:
	inline static int32_t get_offset_of_Pose_0() { return static_cast<int32_t>(offsetof(PoseAgeEntry_t2217900307, ___Pose_0)); }
	inline PoseInfo_t2150925637  get_Pose_0() const { return ___Pose_0; }
	inline PoseInfo_t2150925637 * get_address_of_Pose_0() { return &___Pose_0; }
	inline void set_Pose_0(PoseInfo_t2150925637  value)
	{
		___Pose_0 = value;
	}

	inline static int32_t get_offset_of_CameraPose_1() { return static_cast<int32_t>(offsetof(PoseAgeEntry_t2217900307, ___CameraPose_1)); }
	inline PoseInfo_t2150925637  get_CameraPose_1() const { return ___CameraPose_1; }
	inline PoseInfo_t2150925637 * get_address_of_CameraPose_1() { return &___CameraPose_1; }
	inline void set_CameraPose_1(PoseInfo_t2150925637  value)
	{
		___CameraPose_1 = value;
	}

	inline static int32_t get_offset_of_Age_2() { return static_cast<int32_t>(offsetof(PoseAgeEntry_t2217900307, ___Age_2)); }
	inline int32_t get_Age_2() const { return ___Age_2; }
	inline int32_t* get_address_of_Age_2() { return &___Age_2; }
	inline void set_Age_2(int32_t value)
	{
		___Age_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSEAGEENTRY_T2217900307_H
#ifndef KEYVALUEPAIR_2_T2484394284_H
#define KEYVALUEPAIR_2_T2484394284_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>
struct  KeyValuePair_2_t2484394284 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	ProfileData_t3131620333  ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2484394284, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2484394284, ___value_1)); }
	inline ProfileData_t3131620333  get_value_1() const { return ___value_1; }
	inline ProfileData_t3131620333 * get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(ProfileData_t3131620333  value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T2484394284_H
#ifndef KEYVALUEPAIR_2_T3773358754_H
#define KEYVALUEPAIR_2_T3773358754_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<Vuforia.VuforiaManager/TrackableIdPair,Vuforia.HoloLensExtendedTrackingManager/PoseAgeEntry>
struct  KeyValuePair_2_t3773358754 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	TrackableIdPair_t4255691917  ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	PoseAgeEntry_t2217900307  ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3773358754, ___key_0)); }
	inline TrackableIdPair_t4255691917  get_key_0() const { return ___key_0; }
	inline TrackableIdPair_t4255691917 * get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(TrackableIdPair_t4255691917  value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3773358754, ___value_1)); }
	inline PoseAgeEntry_t2217900307  get_value_1() const { return ___value_1; }
	inline PoseAgeEntry_t2217900307 * get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(PoseAgeEntry_t2217900307  value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T3773358754_H
// System.String[]
struct StringU5BU5D_t2179077646  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m2469821297_gshared (KeyValuePair_2_t1161464449 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m1121743911_gshared (KeyValuePair_2_t1161464449 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m2697762855_gshared (KeyValuePair_2_t1161464449 * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m1653160118_gshared (KeyValuePair_2_t1161464449 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m3700957392_gshared (KeyValuePair_2_t1161464449 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m2127250830_gshared (KeyValuePair_2_t1161464449 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackableBehaviour/Status>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m1759500591_gshared (KeyValuePair_2_t1570398691 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackableBehaviour/Status>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m724333818_gshared (KeyValuePair_2_t1570398691 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackableBehaviour/Status>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m2379010050_gshared (KeyValuePair_2_t1570398691 * __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackableBehaviour/Status>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m2009373607_gshared (KeyValuePair_2_t1570398691 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackableBehaviour/Status>::get_Value()
extern "C"  int32_t KeyValuePair_2_get_Value_m779885350_gshared (KeyValuePair_2_t1570398691 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackableBehaviour/Status>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m1885984361_gshared (KeyValuePair_2_t1570398691 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m3506227210_gshared (KeyValuePair_2_t3616352800 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m2434934245_gshared (KeyValuePair_2_t3616352800 * __this, VirtualButtonData_t2708325948  p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m3224094774_gshared (KeyValuePair_2_t3616352800 * __this, int32_t ___key0, VirtualButtonData_t2708325948  ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m1207325156_gshared (KeyValuePair_2_t3616352800 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::get_Value()
extern "C"  VirtualButtonData_t2708325948  KeyValuePair_2_get_Value_m4154581269_gshared (KeyValuePair_2_t3616352800 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m4267913181_gshared (KeyValuePair_2_t3616352800 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m3289625251_gshared (KeyValuePair_2_t2933178761 * __this, IntPtr_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m2780240142_gshared (KeyValuePair_2_t2933178761 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m2940850506_gshared (KeyValuePair_2_t2933178761 * __this, IntPtr_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::get_Key()
extern "C"  IntPtr_t KeyValuePair_2_get_Key_m2102233778_gshared (KeyValuePair_2_t2933178761 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m373860731_gshared (KeyValuePair_2_t2933178761 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m1065183325_gshared (KeyValuePair_2_t2933178761 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m1314152455_gshared (KeyValuePair_2_t508134411 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m3604702556_gshared (KeyValuePair_2_t508134411 * __this, bool p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m3915773238_gshared (KeyValuePair_2_t508134411 * __this, RuntimeObject * ___key0, bool ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::get_Key()
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m1951441576_gshared (KeyValuePair_2_t508134411 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::get_Value()
extern "C"  bool KeyValuePair_2_get_Value_m3023192191_gshared (KeyValuePair_2_t508134411 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m427248250_gshared (KeyValuePair_2_t508134411 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m1163124296_gshared (KeyValuePair_2_t2967435355 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m3506739646_gshared (KeyValuePair_2_t2967435355 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m1235741332_gshared (KeyValuePair_2_t2967435355 * __this, RuntimeObject * ___key0, int32_t ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::get_Key()
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m3906650716_gshared (KeyValuePair_2_t2967435355 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::get_Value()
extern "C"  int32_t KeyValuePair_2_get_Value_m2872738962_gshared (KeyValuePair_2_t2967435355 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m763756453_gshared (KeyValuePair_2_t2967435355 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m3047980312_gshared (KeyValuePair_2_t3901178844 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m3422630202_gshared (KeyValuePair_2_t3901178844 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m3687987201_gshared (KeyValuePair_2_t3901178844 * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m2162789216_gshared (KeyValuePair_2_t3901178844 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m573677215_gshared (KeyValuePair_2_t3901178844 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m907306452_gshared (KeyValuePair_2_t3901178844 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m738471254_gshared (KeyValuePair_2_t20122363 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m3669787756_gshared (KeyValuePair_2_t20122363 * __this, uint16_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m3275593276_gshared (KeyValuePair_2_t20122363 * __this, RuntimeObject * ___key0, uint16_t ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>::get_Key()
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m3067782990_gshared (KeyValuePair_2_t20122363 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>::get_Value()
extern "C"  uint16_t KeyValuePair_2_get_Value_m1632375845_gshared (KeyValuePair_2_t20122363 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m3054812538_gshared (KeyValuePair_2_t20122363 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m1093655464_gshared (KeyValuePair_2_t2484394284 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m3869704371_gshared (KeyValuePair_2_t2484394284 * __this, ProfileData_t3131620333  p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m2949041667_gshared (KeyValuePair_2_t2484394284 * __this, RuntimeObject * ___key0, ProfileData_t3131620333  ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>::get_Key()
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m2237543448_gshared (KeyValuePair_2_t2484394284 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>::get_Value()
extern "C"  ProfileData_t3131620333  KeyValuePair_2_get_Value_m1026319116_gshared (KeyValuePair_2_t2484394284 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m123715502_gshared (KeyValuePair_2_t2484394284 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m3048823269_gshared (KeyValuePair_2_t941283083 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m1525508223_gshared (KeyValuePair_2_t941283083 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m461332189_gshared (KeyValuePair_2_t941283083 * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m2084471977_gshared (KeyValuePair_2_t941283083 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m1621817662_gshared (KeyValuePair_2_t941283083 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m420889086_gshared (KeyValuePair_2_t941283083 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<Vuforia.VuforiaManager/TrackableIdPair,Vuforia.HoloLensExtendedTrackingManager/PoseAgeEntry>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m521404300_gshared (KeyValuePair_2_t3773358754 * __this, TrackableIdPair_t4255691917  p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<Vuforia.VuforiaManager/TrackableIdPair,Vuforia.HoloLensExtendedTrackingManager/PoseAgeEntry>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m3432471001_gshared (KeyValuePair_2_t3773358754 * __this, PoseAgeEntry_t2217900307  p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<Vuforia.VuforiaManager/TrackableIdPair,Vuforia.HoloLensExtendedTrackingManager/PoseAgeEntry>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m174197927_gshared (KeyValuePair_2_t3773358754 * __this, TrackableIdPair_t4255691917  ___key0, PoseAgeEntry_t2217900307  ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<Vuforia.VuforiaManager/TrackableIdPair,Vuforia.HoloLensExtendedTrackingManager/PoseAgeEntry>::get_Key()
extern "C"  TrackableIdPair_t4255691917  KeyValuePair_2_get_Key_m2237848790_gshared (KeyValuePair_2_t3773358754 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<Vuforia.VuforiaManager/TrackableIdPair,Vuforia.HoloLensExtendedTrackingManager/PoseAgeEntry>::get_Value()
extern "C"  PoseAgeEntry_t2217900307  KeyValuePair_2_get_Value_m1820595918_gshared (KeyValuePair_2_t3773358754 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<Vuforia.VuforiaManager/TrackableIdPair,Vuforia.HoloLensExtendedTrackingManager/PoseAgeEntry>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m4015106371_gshared (KeyValuePair_2_t3773358754 * __this, const RuntimeMethod* method);

// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m2469821297(__this, p0, method) ((  void (*) (KeyValuePair_2_t1161464449 *, int32_t, const RuntimeMethod*))KeyValuePair_2_set_Key_m2469821297_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m1121743911(__this, p0, method) ((  void (*) (KeyValuePair_2_t1161464449 *, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2_set_Value_m1121743911_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m2697762855(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t1161464449 *, int32_t, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2__ctor_m2697762855_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Key()
#define KeyValuePair_2_get_Key_m1653160118(__this, method) ((  int32_t (*) (KeyValuePair_2_t1161464449 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m1653160118_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Value()
#define KeyValuePair_2_get_Value_m3700957392(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t1161464449 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m3700957392_gshared)(__this, method)
// System.String System.Int32::ToString()
extern "C"  String_t* Int32_ToString_m3360977712 (int32_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String[])
extern "C"  String_t* String_Concat_m3320911088 (RuntimeObject * __this /* static, unused */, StringU5BU5D_t2179077646* ___values0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::ToString()
#define KeyValuePair_2_ToString_m2127250830(__this, method) ((  String_t* (*) (KeyValuePair_2_t1161464449 *, const RuntimeMethod*))KeyValuePair_2_ToString_m2127250830_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackableBehaviour/Status>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m1759500591(__this, p0, method) ((  void (*) (KeyValuePair_2_t1570398691 *, int32_t, const RuntimeMethod*))KeyValuePair_2_set_Key_m1759500591_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackableBehaviour/Status>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m724333818(__this, p0, method) ((  void (*) (KeyValuePair_2_t1570398691 *, int32_t, const RuntimeMethod*))KeyValuePair_2_set_Value_m724333818_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackableBehaviour/Status>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m2379010050(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t1570398691 *, int32_t, int32_t, const RuntimeMethod*))KeyValuePair_2__ctor_m2379010050_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackableBehaviour/Status>::get_Key()
#define KeyValuePair_2_get_Key_m2009373607(__this, method) ((  int32_t (*) (KeyValuePair_2_t1570398691 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m2009373607_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackableBehaviour/Status>::get_Value()
#define KeyValuePair_2_get_Value_m779885350(__this, method) ((  int32_t (*) (KeyValuePair_2_t1570398691 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m779885350_gshared)(__this, method)
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackableBehaviour/Status>::ToString()
#define KeyValuePair_2_ToString_m1885984361(__this, method) ((  String_t* (*) (KeyValuePair_2_t1570398691 *, const RuntimeMethod*))KeyValuePair_2_ToString_m1885984361_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m3506227210(__this, p0, method) ((  void (*) (KeyValuePair_2_t3616352800 *, int32_t, const RuntimeMethod*))KeyValuePair_2_set_Key_m3506227210_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m2434934245(__this, p0, method) ((  void (*) (KeyValuePair_2_t3616352800 *, VirtualButtonData_t2708325948 , const RuntimeMethod*))KeyValuePair_2_set_Value_m2434934245_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m3224094774(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t3616352800 *, int32_t, VirtualButtonData_t2708325948 , const RuntimeMethod*))KeyValuePair_2__ctor_m3224094774_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::get_Key()
#define KeyValuePair_2_get_Key_m1207325156(__this, method) ((  int32_t (*) (KeyValuePair_2_t3616352800 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m1207325156_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::get_Value()
#define KeyValuePair_2_get_Value_m4154581269(__this, method) ((  VirtualButtonData_t2708325948  (*) (KeyValuePair_2_t3616352800 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m4154581269_gshared)(__this, method)
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::ToString()
#define KeyValuePair_2_ToString_m4267913181(__this, method) ((  String_t* (*) (KeyValuePair_2_t3616352800 *, const RuntimeMethod*))KeyValuePair_2_ToString_m4267913181_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m3289625251(__this, p0, method) ((  void (*) (KeyValuePair_2_t2933178761 *, IntPtr_t, const RuntimeMethod*))KeyValuePair_2_set_Key_m3289625251_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m2780240142(__this, p0, method) ((  void (*) (KeyValuePair_2_t2933178761 *, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2_set_Value_m2780240142_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m2940850506(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t2933178761 *, IntPtr_t, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2__ctor_m2940850506_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::get_Key()
#define KeyValuePair_2_get_Key_m2102233778(__this, method) ((  IntPtr_t (*) (KeyValuePair_2_t2933178761 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m2102233778_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::get_Value()
#define KeyValuePair_2_get_Value_m373860731(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t2933178761 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m373860731_gshared)(__this, method)
// System.String System.IntPtr::ToString()
extern "C"  String_t* IntPtr_ToString_m1850665798 (IntPtr_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::ToString()
#define KeyValuePair_2_ToString_m1065183325(__this, method) ((  String_t* (*) (KeyValuePair_2_t2933178761 *, const RuntimeMethod*))KeyValuePair_2_ToString_m1065183325_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m1314152455(__this, p0, method) ((  void (*) (KeyValuePair_2_t508134411 *, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2_set_Key_m1314152455_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m3604702556(__this, p0, method) ((  void (*) (KeyValuePair_2_t508134411 *, bool, const RuntimeMethod*))KeyValuePair_2_set_Value_m3604702556_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m3915773238(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t508134411 *, RuntimeObject *, bool, const RuntimeMethod*))KeyValuePair_2__ctor_m3915773238_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::get_Key()
#define KeyValuePair_2_get_Key_m1951441576(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t508134411 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m1951441576_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::get_Value()
#define KeyValuePair_2_get_Value_m3023192191(__this, method) ((  bool (*) (KeyValuePair_2_t508134411 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m3023192191_gshared)(__this, method)
// System.String System.Boolean::ToString()
extern "C"  String_t* Boolean_ToString_m4045160678 (bool* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::ToString()
#define KeyValuePair_2_ToString_m427248250(__this, method) ((  String_t* (*) (KeyValuePair_2_t508134411 *, const RuntimeMethod*))KeyValuePair_2_ToString_m427248250_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m1163124296(__this, p0, method) ((  void (*) (KeyValuePair_2_t2967435355 *, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2_set_Key_m1163124296_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m3506739646(__this, p0, method) ((  void (*) (KeyValuePair_2_t2967435355 *, int32_t, const RuntimeMethod*))KeyValuePair_2_set_Value_m3506739646_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m1235741332(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t2967435355 *, RuntimeObject *, int32_t, const RuntimeMethod*))KeyValuePair_2__ctor_m1235741332_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::get_Key()
#define KeyValuePair_2_get_Key_m3906650716(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t2967435355 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m3906650716_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::get_Value()
#define KeyValuePair_2_get_Value_m2872738962(__this, method) ((  int32_t (*) (KeyValuePair_2_t2967435355 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m2872738962_gshared)(__this, method)
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::ToString()
#define KeyValuePair_2_ToString_m763756453(__this, method) ((  String_t* (*) (KeyValuePair_2_t2967435355 *, const RuntimeMethod*))KeyValuePair_2_ToString_m763756453_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m3047980312(__this, p0, method) ((  void (*) (KeyValuePair_2_t3901178844 *, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2_set_Key_m3047980312_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m3422630202(__this, p0, method) ((  void (*) (KeyValuePair_2_t3901178844 *, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2_set_Value_m3422630202_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m3687987201(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t3901178844 *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2__ctor_m3687987201_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
#define KeyValuePair_2_get_Key_m2162789216(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t3901178844 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m2162789216_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
#define KeyValuePair_2_get_Value_m573677215(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t3901178844 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m573677215_gshared)(__this, method)
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::ToString()
#define KeyValuePair_2_ToString_m907306452(__this, method) ((  String_t* (*) (KeyValuePair_2_t3901178844 *, const RuntimeMethod*))KeyValuePair_2_ToString_m907306452_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m738471254(__this, p0, method) ((  void (*) (KeyValuePair_2_t20122363 *, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2_set_Key_m738471254_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m3669787756(__this, p0, method) ((  void (*) (KeyValuePair_2_t20122363 *, uint16_t, const RuntimeMethod*))KeyValuePair_2_set_Value_m3669787756_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m3275593276(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t20122363 *, RuntimeObject *, uint16_t, const RuntimeMethod*))KeyValuePair_2__ctor_m3275593276_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>::get_Key()
#define KeyValuePair_2_get_Key_m3067782990(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t20122363 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m3067782990_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>::get_Value()
#define KeyValuePair_2_get_Value_m1632375845(__this, method) ((  uint16_t (*) (KeyValuePair_2_t20122363 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m1632375845_gshared)(__this, method)
// System.String System.UInt16::ToString()
extern "C"  String_t* UInt16_ToString_m269188658 (uint16_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>::ToString()
#define KeyValuePair_2_ToString_m3054812538(__this, method) ((  String_t* (*) (KeyValuePair_2_t20122363 *, const RuntimeMethod*))KeyValuePair_2_ToString_m3054812538_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m1093655464(__this, p0, method) ((  void (*) (KeyValuePair_2_t2484394284 *, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2_set_Key_m1093655464_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m3869704371(__this, p0, method) ((  void (*) (KeyValuePair_2_t2484394284 *, ProfileData_t3131620333 , const RuntimeMethod*))KeyValuePair_2_set_Value_m3869704371_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m2949041667(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t2484394284 *, RuntimeObject *, ProfileData_t3131620333 , const RuntimeMethod*))KeyValuePair_2__ctor_m2949041667_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>::get_Key()
#define KeyValuePair_2_get_Key_m2237543448(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t2484394284 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m2237543448_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>::get_Value()
#define KeyValuePair_2_get_Value_m1026319116(__this, method) ((  ProfileData_t3131620333  (*) (KeyValuePair_2_t2484394284 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m1026319116_gshared)(__this, method)
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>::ToString()
#define KeyValuePair_2_ToString_m123715502(__this, method) ((  String_t* (*) (KeyValuePair_2_t2484394284 *, const RuntimeMethod*))KeyValuePair_2_ToString_m123715502_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m3048823269(__this, p0, method) ((  void (*) (KeyValuePair_2_t941283083 *, int32_t, const RuntimeMethod*))KeyValuePair_2_set_Key_m3048823269_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m1525508223(__this, p0, method) ((  void (*) (KeyValuePair_2_t941283083 *, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2_set_Value_m1525508223_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m461332189(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t941283083 *, int32_t, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2__ctor_m461332189_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::get_Key()
#define KeyValuePair_2_get_Key_m2084471977(__this, method) ((  int32_t (*) (KeyValuePair_2_t941283083 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m2084471977_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::get_Value()
#define KeyValuePair_2_get_Value_m1621817662(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t941283083 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m1621817662_gshared)(__this, method)
// System.String System.Collections.Generic.KeyValuePair`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::ToString()
#define KeyValuePair_2_ToString_m420889086(__this, method) ((  String_t* (*) (KeyValuePair_2_t941283083 *, const RuntimeMethod*))KeyValuePair_2_ToString_m420889086_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<Vuforia.VuforiaManager/TrackableIdPair,Vuforia.HoloLensExtendedTrackingManager/PoseAgeEntry>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m521404300(__this, p0, method) ((  void (*) (KeyValuePair_2_t3773358754 *, TrackableIdPair_t4255691917 , const RuntimeMethod*))KeyValuePair_2_set_Key_m521404300_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<Vuforia.VuforiaManager/TrackableIdPair,Vuforia.HoloLensExtendedTrackingManager/PoseAgeEntry>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m3432471001(__this, p0, method) ((  void (*) (KeyValuePair_2_t3773358754 *, PoseAgeEntry_t2217900307 , const RuntimeMethod*))KeyValuePair_2_set_Value_m3432471001_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<Vuforia.VuforiaManager/TrackableIdPair,Vuforia.HoloLensExtendedTrackingManager/PoseAgeEntry>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m174197927(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t3773358754 *, TrackableIdPair_t4255691917 , PoseAgeEntry_t2217900307 , const RuntimeMethod*))KeyValuePair_2__ctor_m174197927_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<Vuforia.VuforiaManager/TrackableIdPair,Vuforia.HoloLensExtendedTrackingManager/PoseAgeEntry>::get_Key()
#define KeyValuePair_2_get_Key_m2237848790(__this, method) ((  TrackableIdPair_t4255691917  (*) (KeyValuePair_2_t3773358754 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m2237848790_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<Vuforia.VuforiaManager/TrackableIdPair,Vuforia.HoloLensExtendedTrackingManager/PoseAgeEntry>::get_Value()
#define KeyValuePair_2_get_Value_m1820595918(__this, method) ((  PoseAgeEntry_t2217900307  (*) (KeyValuePair_2_t3773358754 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m1820595918_gshared)(__this, method)
// System.String System.Collections.Generic.KeyValuePair`2<Vuforia.VuforiaManager/TrackableIdPair,Vuforia.HoloLensExtendedTrackingManager/PoseAgeEntry>::ToString()
#define KeyValuePair_2_ToString_m4015106371(__this, method) ((  String_t* (*) (KeyValuePair_2_t3773358754 *, const RuntimeMethod*))KeyValuePair_2_ToString_m4015106371_gshared)(__this, method)
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m2697762855_gshared (KeyValuePair_2_t1161464449 * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___key0;
		KeyValuePair_2_set_Key_m2469821297((KeyValuePair_2_t1161464449 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		RuntimeObject * L_1 = ___value1;
		KeyValuePair_2_set_Value_m1121743911((KeyValuePair_2_t1161464449 *)__this, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m2697762855_AdjustorThunk (RuntimeObject * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t1161464449 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1161464449 *>(__this + 1);
	KeyValuePair_2__ctor_m2697762855(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m1653160118_gshared (KeyValuePair_2_t1161464449 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_key_0();
		return L_0;
	}
}
extern "C"  int32_t KeyValuePair_2_get_Key_m1653160118_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t1161464449 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1161464449 *>(__this + 1);
	return KeyValuePair_2_get_Key_m1653160118(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m2469821297_gshared (KeyValuePair_2_t1161464449 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m2469821297_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t1161464449 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1161464449 *>(__this + 1);
	KeyValuePair_2_set_Key_m2469821297(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m3700957392_gshared (KeyValuePair_2_t1161464449 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return L_0;
	}
}
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m3700957392_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t1161464449 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1161464449 *>(__this + 1);
	return KeyValuePair_2_get_Value_m3700957392(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m1121743911_gshared (KeyValuePair_2_t1161464449 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m1121743911_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t1161464449 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1161464449 *>(__this + 1);
	KeyValuePair_2_set_Value_m1121743911(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m2127250830_gshared (KeyValuePair_2_t1161464449 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m2127250830_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t2179077646* G_B2_1 = NULL;
	StringU5BU5D_t2179077646* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t2179077646* G_B1_1 = NULL;
	StringU5BU5D_t2179077646* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t2179077646* G_B3_2 = NULL;
	StringU5BU5D_t2179077646* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t2179077646* G_B5_1 = NULL;
	StringU5BU5D_t2179077646* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t2179077646* G_B4_1 = NULL;
	StringU5BU5D_t2179077646* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t2179077646* G_B6_2 = NULL;
	StringU5BU5D_t2179077646* G_B6_3 = NULL;
	{
		StringU5BU5D_t2179077646* L_0 = (StringU5BU5D_t2179077646*)((StringU5BU5D_t2179077646*)SZArrayNew(StringU5BU5D_t2179077646_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral4118971342);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral4118971342);
		StringU5BU5D_t2179077646* L_1 = (StringU5BU5D_t2179077646*)L_0;
		int32_t L_2 = KeyValuePair_2_get_Key_m1653160118((KeyValuePair_2_t1161464449 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
	}
	{
		int32_t L_3 = KeyValuePair_2_get_Key_m1653160118((KeyValuePair_2_t1161464449 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (int32_t)L_3;
		String_t* L_4 = Int32_ToString_m3360977712((int32_t*)(&V_0), /*hidden argument*/NULL);
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_003e;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_003e:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		StringU5BU5D_t2179077646* L_6 = (StringU5BU5D_t2179077646*)G_B3_3;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral1533108750);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral1533108750);
		StringU5BU5D_t2179077646* L_7 = (StringU5BU5D_t2179077646*)L_6;
		RuntimeObject * L_8 = KeyValuePair_2_get_Value_m3700957392((KeyValuePair_2_t1161464449 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		G_B4_0 = 3;
		G_B4_1 = L_7;
		G_B4_2 = L_7;
		if (!L_8)
		{
			G_B5_0 = 3;
			G_B5_1 = L_7;
			G_B5_2 = L_7;
			goto IL_0072;
		}
	}
	{
		RuntimeObject * L_9 = KeyValuePair_2_get_Value_m3700957392((KeyValuePair_2_t1161464449 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (RuntimeObject *)L_9;
		NullCheck((RuntimeObject *)(*(&V_1)));
		String_t* L_10 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*(&V_1)));
		G_B6_0 = L_10;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0077;
	}

IL_0072:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B6_0 = L_11;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0077:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (String_t*)G_B6_0);
		StringU5BU5D_t2179077646* L_12 = (StringU5BU5D_t2179077646*)G_B6_3;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral1511173054);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral1511173054);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m3320911088(NULL /*static, unused*/, (StringU5BU5D_t2179077646*)L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m2127250830_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t1161464449 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1161464449 *>(__this + 1);
	return KeyValuePair_2_ToString_m2127250830(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackableBehaviour/Status>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m2379010050_gshared (KeyValuePair_2_t1570398691 * __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___key0;
		KeyValuePair_2_set_Key_m1759500591((KeyValuePair_2_t1570398691 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_1 = ___value1;
		KeyValuePair_2_set_Value_m724333818((KeyValuePair_2_t1570398691 *)__this, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m2379010050_AdjustorThunk (RuntimeObject * __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t1570398691 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1570398691 *>(__this + 1);
	KeyValuePair_2__ctor_m2379010050(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackableBehaviour/Status>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m2009373607_gshared (KeyValuePair_2_t1570398691 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_key_0();
		return L_0;
	}
}
extern "C"  int32_t KeyValuePair_2_get_Key_m2009373607_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t1570398691 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1570398691 *>(__this + 1);
	return KeyValuePair_2_get_Key_m2009373607(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackableBehaviour/Status>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m1759500591_gshared (KeyValuePair_2_t1570398691 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m1759500591_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t1570398691 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1570398691 *>(__this + 1);
	KeyValuePair_2_set_Key_m1759500591(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackableBehaviour/Status>::get_Value()
extern "C"  int32_t KeyValuePair_2_get_Value_m779885350_gshared (KeyValuePair_2_t1570398691 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_value_1();
		return L_0;
	}
}
extern "C"  int32_t KeyValuePair_2_get_Value_m779885350_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t1570398691 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1570398691 *>(__this + 1);
	return KeyValuePair_2_get_Value_m779885350(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackableBehaviour/Status>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m724333818_gshared (KeyValuePair_2_t1570398691 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m724333818_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t1570398691 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1570398691 *>(__this + 1);
	KeyValuePair_2_set_Value_m724333818(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackableBehaviour/Status>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m1885984361_gshared (KeyValuePair_2_t1570398691 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m1885984361_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t2179077646* G_B2_1 = NULL;
	StringU5BU5D_t2179077646* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t2179077646* G_B1_1 = NULL;
	StringU5BU5D_t2179077646* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t2179077646* G_B3_2 = NULL;
	StringU5BU5D_t2179077646* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t2179077646* G_B5_1 = NULL;
	StringU5BU5D_t2179077646* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t2179077646* G_B4_1 = NULL;
	StringU5BU5D_t2179077646* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t2179077646* G_B6_2 = NULL;
	StringU5BU5D_t2179077646* G_B6_3 = NULL;
	{
		StringU5BU5D_t2179077646* L_0 = (StringU5BU5D_t2179077646*)((StringU5BU5D_t2179077646*)SZArrayNew(StringU5BU5D_t2179077646_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral4118971342);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral4118971342);
		StringU5BU5D_t2179077646* L_1 = (StringU5BU5D_t2179077646*)L_0;
		int32_t L_2 = KeyValuePair_2_get_Key_m2009373607((KeyValuePair_2_t1570398691 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
	}
	{
		int32_t L_3 = KeyValuePair_2_get_Key_m2009373607((KeyValuePair_2_t1570398691 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (int32_t)L_3;
		String_t* L_4 = Int32_ToString_m3360977712((int32_t*)(&V_0), /*hidden argument*/NULL);
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_003e;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_003e:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		StringU5BU5D_t2179077646* L_6 = (StringU5BU5D_t2179077646*)G_B3_3;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral1533108750);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral1533108750);
		StringU5BU5D_t2179077646* L_7 = (StringU5BU5D_t2179077646*)L_6;
		int32_t L_8 = KeyValuePair_2_get_Value_m779885350((KeyValuePair_2_t1570398691 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		G_B4_0 = 3;
		G_B4_1 = L_7;
		G_B4_2 = L_7;
	}
	{
		int32_t L_9 = KeyValuePair_2_get_Value_m779885350((KeyValuePair_2_t1570398691 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (int32_t)L_9;
		RuntimeObject * L_10 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (&V_1));
		NullCheck((RuntimeObject *)L_10);
		String_t* L_11 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_10);
		*(&V_1) = *(int32_t*)UnBox(L_10);
		G_B6_0 = L_11;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0077;
	}

IL_0072:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B6_0 = L_12;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0077:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (String_t*)G_B6_0);
		StringU5BU5D_t2179077646* L_13 = (StringU5BU5D_t2179077646*)G_B6_3;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteral1511173054);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral1511173054);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = String_Concat_m3320911088(NULL /*static, unused*/, (StringU5BU5D_t2179077646*)L_13, /*hidden argument*/NULL);
		return L_14;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m1885984361_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t1570398691 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1570398691 *>(__this + 1);
	return KeyValuePair_2_ToString_m1885984361(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m3224094774_gshared (KeyValuePair_2_t3616352800 * __this, int32_t ___key0, VirtualButtonData_t2708325948  ___value1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___key0;
		KeyValuePair_2_set_Key_m3506227210((KeyValuePair_2_t3616352800 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		VirtualButtonData_t2708325948  L_1 = ___value1;
		KeyValuePair_2_set_Value_m2434934245((KeyValuePair_2_t3616352800 *)__this, (VirtualButtonData_t2708325948 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m3224094774_AdjustorThunk (RuntimeObject * __this, int32_t ___key0, VirtualButtonData_t2708325948  ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t3616352800 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3616352800 *>(__this + 1);
	KeyValuePair_2__ctor_m3224094774(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m1207325156_gshared (KeyValuePair_2_t3616352800 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_key_0();
		return L_0;
	}
}
extern "C"  int32_t KeyValuePair_2_get_Key_m1207325156_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t3616352800 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3616352800 *>(__this + 1);
	return KeyValuePair_2_get_Key_m1207325156(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m3506227210_gshared (KeyValuePair_2_t3616352800 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m3506227210_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t3616352800 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3616352800 *>(__this + 1);
	KeyValuePair_2_set_Key_m3506227210(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::get_Value()
extern "C"  VirtualButtonData_t2708325948  KeyValuePair_2_get_Value_m4154581269_gshared (KeyValuePair_2_t3616352800 * __this, const RuntimeMethod* method)
{
	{
		VirtualButtonData_t2708325948  L_0 = (VirtualButtonData_t2708325948 )__this->get_value_1();
		return L_0;
	}
}
extern "C"  VirtualButtonData_t2708325948  KeyValuePair_2_get_Value_m4154581269_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t3616352800 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3616352800 *>(__this + 1);
	return KeyValuePair_2_get_Value_m4154581269(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m2434934245_gshared (KeyValuePair_2_t3616352800 * __this, VirtualButtonData_t2708325948  ___value0, const RuntimeMethod* method)
{
	{
		VirtualButtonData_t2708325948  L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m2434934245_AdjustorThunk (RuntimeObject * __this, VirtualButtonData_t2708325948  ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t3616352800 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3616352800 *>(__this + 1);
	KeyValuePair_2_set_Value_m2434934245(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m4267913181_gshared (KeyValuePair_2_t3616352800 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m4267913181_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	VirtualButtonData_t2708325948  V_1;
	memset(&V_1, 0, sizeof(V_1));
	int32_t G_B2_0 = 0;
	StringU5BU5D_t2179077646* G_B2_1 = NULL;
	StringU5BU5D_t2179077646* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t2179077646* G_B1_1 = NULL;
	StringU5BU5D_t2179077646* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t2179077646* G_B3_2 = NULL;
	StringU5BU5D_t2179077646* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t2179077646* G_B5_1 = NULL;
	StringU5BU5D_t2179077646* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t2179077646* G_B4_1 = NULL;
	StringU5BU5D_t2179077646* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t2179077646* G_B6_2 = NULL;
	StringU5BU5D_t2179077646* G_B6_3 = NULL;
	{
		StringU5BU5D_t2179077646* L_0 = (StringU5BU5D_t2179077646*)((StringU5BU5D_t2179077646*)SZArrayNew(StringU5BU5D_t2179077646_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral4118971342);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral4118971342);
		StringU5BU5D_t2179077646* L_1 = (StringU5BU5D_t2179077646*)L_0;
		int32_t L_2 = KeyValuePair_2_get_Key_m1207325156((KeyValuePair_2_t3616352800 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
	}
	{
		int32_t L_3 = KeyValuePair_2_get_Key_m1207325156((KeyValuePair_2_t3616352800 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (int32_t)L_3;
		String_t* L_4 = Int32_ToString_m3360977712((int32_t*)(&V_0), /*hidden argument*/NULL);
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_003e;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_003e:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		StringU5BU5D_t2179077646* L_6 = (StringU5BU5D_t2179077646*)G_B3_3;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral1533108750);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral1533108750);
		StringU5BU5D_t2179077646* L_7 = (StringU5BU5D_t2179077646*)L_6;
		VirtualButtonData_t2708325948  L_8 = KeyValuePair_2_get_Value_m4154581269((KeyValuePair_2_t3616352800 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		G_B4_0 = 3;
		G_B4_1 = L_7;
		G_B4_2 = L_7;
	}
	{
		VirtualButtonData_t2708325948  L_9 = KeyValuePair_2_get_Value_m4154581269((KeyValuePair_2_t3616352800 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (VirtualButtonData_t2708325948 )L_9;
		RuntimeObject * L_10 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (&V_1));
		NullCheck((RuntimeObject *)L_10);
		String_t* L_11 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_10);
		*(&V_1) = *(VirtualButtonData_t2708325948 *)UnBox(L_10);
		G_B6_0 = L_11;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0077;
	}

IL_0072:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B6_0 = L_12;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0077:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (String_t*)G_B6_0);
		StringU5BU5D_t2179077646* L_13 = (StringU5BU5D_t2179077646*)G_B6_3;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteral1511173054);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral1511173054);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = String_Concat_m3320911088(NULL /*static, unused*/, (StringU5BU5D_t2179077646*)L_13, /*hidden argument*/NULL);
		return L_14;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m4267913181_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t3616352800 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3616352800 *>(__this + 1);
	return KeyValuePair_2_ToString_m4267913181(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m2940850506_gshared (KeyValuePair_2_t2933178761 * __this, IntPtr_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___key0;
		KeyValuePair_2_set_Key_m3289625251((KeyValuePair_2_t2933178761 *)__this, (IntPtr_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		RuntimeObject * L_1 = ___value1;
		KeyValuePair_2_set_Value_m2780240142((KeyValuePair_2_t2933178761 *)__this, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m2940850506_AdjustorThunk (RuntimeObject * __this, IntPtr_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t2933178761 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2933178761 *>(__this + 1);
	KeyValuePair_2__ctor_m2940850506(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::get_Key()
extern "C"  IntPtr_t KeyValuePair_2_get_Key_m2102233778_gshared (KeyValuePair_2_t2933178761 * __this, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = (IntPtr_t)__this->get_key_0();
		return L_0;
	}
}
extern "C"  IntPtr_t KeyValuePair_2_get_Key_m2102233778_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t2933178761 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2933178761 *>(__this + 1);
	return KeyValuePair_2_get_Key_m2102233778(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m3289625251_gshared (KeyValuePair_2_t2933178761 * __this, IntPtr_t ___value0, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m3289625251_AdjustorThunk (RuntimeObject * __this, IntPtr_t ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t2933178761 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2933178761 *>(__this + 1);
	KeyValuePair_2_set_Key_m3289625251(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m373860731_gshared (KeyValuePair_2_t2933178761 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return L_0;
	}
}
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m373860731_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t2933178761 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2933178761 *>(__this + 1);
	return KeyValuePair_2_get_Value_m373860731(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m2780240142_gshared (KeyValuePair_2_t2933178761 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m2780240142_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t2933178761 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2933178761 *>(__this + 1);
	KeyValuePair_2_set_Value_m2780240142(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m1065183325_gshared (KeyValuePair_2_t2933178761 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m1065183325_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IntPtr_t V_0;
	memset(&V_0, 0, sizeof(V_0));
	RuntimeObject * V_1 = NULL;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t2179077646* G_B2_1 = NULL;
	StringU5BU5D_t2179077646* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t2179077646* G_B1_1 = NULL;
	StringU5BU5D_t2179077646* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t2179077646* G_B3_2 = NULL;
	StringU5BU5D_t2179077646* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t2179077646* G_B5_1 = NULL;
	StringU5BU5D_t2179077646* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t2179077646* G_B4_1 = NULL;
	StringU5BU5D_t2179077646* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t2179077646* G_B6_2 = NULL;
	StringU5BU5D_t2179077646* G_B6_3 = NULL;
	{
		StringU5BU5D_t2179077646* L_0 = (StringU5BU5D_t2179077646*)((StringU5BU5D_t2179077646*)SZArrayNew(StringU5BU5D_t2179077646_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral4118971342);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral4118971342);
		StringU5BU5D_t2179077646* L_1 = (StringU5BU5D_t2179077646*)L_0;
		IntPtr_t L_2 = KeyValuePair_2_get_Key_m2102233778((KeyValuePair_2_t2933178761 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
	}
	{
		IntPtr_t L_3 = KeyValuePair_2_get_Key_m2102233778((KeyValuePair_2_t2933178761 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (IntPtr_t)L_3;
		String_t* L_4 = IntPtr_ToString_m1850665798((IntPtr_t*)(&V_0), /*hidden argument*/NULL);
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_003e;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_003e:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		StringU5BU5D_t2179077646* L_6 = (StringU5BU5D_t2179077646*)G_B3_3;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral1533108750);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral1533108750);
		StringU5BU5D_t2179077646* L_7 = (StringU5BU5D_t2179077646*)L_6;
		RuntimeObject * L_8 = KeyValuePair_2_get_Value_m373860731((KeyValuePair_2_t2933178761 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		G_B4_0 = 3;
		G_B4_1 = L_7;
		G_B4_2 = L_7;
		if (!L_8)
		{
			G_B5_0 = 3;
			G_B5_1 = L_7;
			G_B5_2 = L_7;
			goto IL_0072;
		}
	}
	{
		RuntimeObject * L_9 = KeyValuePair_2_get_Value_m373860731((KeyValuePair_2_t2933178761 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (RuntimeObject *)L_9;
		NullCheck((RuntimeObject *)(*(&V_1)));
		String_t* L_10 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*(&V_1)));
		G_B6_0 = L_10;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0077;
	}

IL_0072:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B6_0 = L_11;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0077:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (String_t*)G_B6_0);
		StringU5BU5D_t2179077646* L_12 = (StringU5BU5D_t2179077646*)G_B6_3;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral1511173054);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral1511173054);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m3320911088(NULL /*static, unused*/, (StringU5BU5D_t2179077646*)L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m1065183325_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t2933178761 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2933178761 *>(__this + 1);
	return KeyValuePair_2_ToString_m1065183325(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m3915773238_gshared (KeyValuePair_2_t508134411 * __this, RuntimeObject * ___key0, bool ___value1, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___key0;
		KeyValuePair_2_set_Key_m1314152455((KeyValuePair_2_t508134411 *)__this, (RuntimeObject *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		bool L_1 = ___value1;
		KeyValuePair_2_set_Value_m3604702556((KeyValuePair_2_t508134411 *)__this, (bool)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m3915773238_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___key0, bool ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t508134411 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t508134411 *>(__this + 1);
	KeyValuePair_2__ctor_m3915773238(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::get_Key()
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m1951441576_gshared (KeyValuePair_2_t508134411 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return L_0;
	}
}
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m1951441576_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t508134411 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t508134411 *>(__this + 1);
	return KeyValuePair_2_get_Key_m1951441576(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m1314152455_gshared (KeyValuePair_2_t508134411 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m1314152455_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t508134411 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t508134411 *>(__this + 1);
	KeyValuePair_2_set_Key_m1314152455(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::get_Value()
extern "C"  bool KeyValuePair_2_get_Value_m3023192191_gshared (KeyValuePair_2_t508134411 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_value_1();
		return L_0;
	}
}
extern "C"  bool KeyValuePair_2_get_Value_m3023192191_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t508134411 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t508134411 *>(__this + 1);
	return KeyValuePair_2_get_Value_m3023192191(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m3604702556_gshared (KeyValuePair_2_t508134411 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m3604702556_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t508134411 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t508134411 *>(__this + 1);
	KeyValuePair_2_set_Value_m3604702556(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m427248250_gshared (KeyValuePair_2_t508134411 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m427248250_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t2179077646* G_B2_1 = NULL;
	StringU5BU5D_t2179077646* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t2179077646* G_B1_1 = NULL;
	StringU5BU5D_t2179077646* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t2179077646* G_B3_2 = NULL;
	StringU5BU5D_t2179077646* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t2179077646* G_B5_1 = NULL;
	StringU5BU5D_t2179077646* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t2179077646* G_B4_1 = NULL;
	StringU5BU5D_t2179077646* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t2179077646* G_B6_2 = NULL;
	StringU5BU5D_t2179077646* G_B6_3 = NULL;
	{
		StringU5BU5D_t2179077646* L_0 = (StringU5BU5D_t2179077646*)((StringU5BU5D_t2179077646*)SZArrayNew(StringU5BU5D_t2179077646_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral4118971342);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral4118971342);
		StringU5BU5D_t2179077646* L_1 = (StringU5BU5D_t2179077646*)L_0;
		RuntimeObject * L_2 = KeyValuePair_2_get_Key_m1951441576((KeyValuePair_2_t508134411 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
		if (!L_2)
		{
			G_B2_0 = 1;
			G_B2_1 = L_1;
			G_B2_2 = L_1;
			goto IL_0039;
		}
	}
	{
		RuntimeObject * L_3 = KeyValuePair_2_get_Key_m1951441576((KeyValuePair_2_t508134411 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (RuntimeObject *)L_3;
		NullCheck((RuntimeObject *)(*(&V_0)));
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*(&V_0)));
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_003e;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_003e:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		StringU5BU5D_t2179077646* L_6 = (StringU5BU5D_t2179077646*)G_B3_3;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral1533108750);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral1533108750);
		StringU5BU5D_t2179077646* L_7 = (StringU5BU5D_t2179077646*)L_6;
		bool L_8 = KeyValuePair_2_get_Value_m3023192191((KeyValuePair_2_t508134411 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		G_B4_0 = 3;
		G_B4_1 = L_7;
		G_B4_2 = L_7;
	}
	{
		bool L_9 = KeyValuePair_2_get_Value_m3023192191((KeyValuePair_2_t508134411 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (bool)L_9;
		String_t* L_10 = Boolean_ToString_m4045160678((bool*)(&V_1), /*hidden argument*/NULL);
		G_B6_0 = L_10;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0077;
	}

IL_0072:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B6_0 = L_11;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0077:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (String_t*)G_B6_0);
		StringU5BU5D_t2179077646* L_12 = (StringU5BU5D_t2179077646*)G_B6_3;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral1511173054);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral1511173054);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m3320911088(NULL /*static, unused*/, (StringU5BU5D_t2179077646*)L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m427248250_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t508134411 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t508134411 *>(__this + 1);
	return KeyValuePair_2_ToString_m427248250(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m1235741332_gshared (KeyValuePair_2_t2967435355 * __this, RuntimeObject * ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___key0;
		KeyValuePair_2_set_Key_m1163124296((KeyValuePair_2_t2967435355 *)__this, (RuntimeObject *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_1 = ___value1;
		KeyValuePair_2_set_Value_m3506739646((KeyValuePair_2_t2967435355 *)__this, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m1235741332_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t2967435355 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2967435355 *>(__this + 1);
	KeyValuePair_2__ctor_m1235741332(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::get_Key()
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m3906650716_gshared (KeyValuePair_2_t2967435355 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return L_0;
	}
}
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m3906650716_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t2967435355 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2967435355 *>(__this + 1);
	return KeyValuePair_2_get_Key_m3906650716(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m1163124296_gshared (KeyValuePair_2_t2967435355 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m1163124296_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t2967435355 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2967435355 *>(__this + 1);
	KeyValuePair_2_set_Key_m1163124296(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::get_Value()
extern "C"  int32_t KeyValuePair_2_get_Value_m2872738962_gshared (KeyValuePair_2_t2967435355 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_value_1();
		return L_0;
	}
}
extern "C"  int32_t KeyValuePair_2_get_Value_m2872738962_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t2967435355 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2967435355 *>(__this + 1);
	return KeyValuePair_2_get_Value_m2872738962(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m3506739646_gshared (KeyValuePair_2_t2967435355 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m3506739646_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t2967435355 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2967435355 *>(__this + 1);
	KeyValuePair_2_set_Value_m3506739646(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m763756453_gshared (KeyValuePair_2_t2967435355 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m763756453_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t2179077646* G_B2_1 = NULL;
	StringU5BU5D_t2179077646* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t2179077646* G_B1_1 = NULL;
	StringU5BU5D_t2179077646* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t2179077646* G_B3_2 = NULL;
	StringU5BU5D_t2179077646* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t2179077646* G_B5_1 = NULL;
	StringU5BU5D_t2179077646* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t2179077646* G_B4_1 = NULL;
	StringU5BU5D_t2179077646* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t2179077646* G_B6_2 = NULL;
	StringU5BU5D_t2179077646* G_B6_3 = NULL;
	{
		StringU5BU5D_t2179077646* L_0 = (StringU5BU5D_t2179077646*)((StringU5BU5D_t2179077646*)SZArrayNew(StringU5BU5D_t2179077646_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral4118971342);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral4118971342);
		StringU5BU5D_t2179077646* L_1 = (StringU5BU5D_t2179077646*)L_0;
		RuntimeObject * L_2 = KeyValuePair_2_get_Key_m3906650716((KeyValuePair_2_t2967435355 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
		if (!L_2)
		{
			G_B2_0 = 1;
			G_B2_1 = L_1;
			G_B2_2 = L_1;
			goto IL_0039;
		}
	}
	{
		RuntimeObject * L_3 = KeyValuePair_2_get_Key_m3906650716((KeyValuePair_2_t2967435355 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (RuntimeObject *)L_3;
		NullCheck((RuntimeObject *)(*(&V_0)));
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*(&V_0)));
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_003e;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_003e:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		StringU5BU5D_t2179077646* L_6 = (StringU5BU5D_t2179077646*)G_B3_3;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral1533108750);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral1533108750);
		StringU5BU5D_t2179077646* L_7 = (StringU5BU5D_t2179077646*)L_6;
		int32_t L_8 = KeyValuePair_2_get_Value_m2872738962((KeyValuePair_2_t2967435355 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		G_B4_0 = 3;
		G_B4_1 = L_7;
		G_B4_2 = L_7;
	}
	{
		int32_t L_9 = KeyValuePair_2_get_Value_m2872738962((KeyValuePair_2_t2967435355 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (int32_t)L_9;
		String_t* L_10 = Int32_ToString_m3360977712((int32_t*)(&V_1), /*hidden argument*/NULL);
		G_B6_0 = L_10;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0077;
	}

IL_0072:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B6_0 = L_11;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0077:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (String_t*)G_B6_0);
		StringU5BU5D_t2179077646* L_12 = (StringU5BU5D_t2179077646*)G_B6_3;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral1511173054);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral1511173054);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m3320911088(NULL /*static, unused*/, (StringU5BU5D_t2179077646*)L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m763756453_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t2967435355 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2967435355 *>(__this + 1);
	return KeyValuePair_2_ToString_m763756453(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m3687987201_gshared (KeyValuePair_2_t3901178844 * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___key0;
		KeyValuePair_2_set_Key_m3047980312((KeyValuePair_2_t3901178844 *)__this, (RuntimeObject *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		RuntimeObject * L_1 = ___value1;
		KeyValuePair_2_set_Value_m3422630202((KeyValuePair_2_t3901178844 *)__this, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m3687987201_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t3901178844 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3901178844 *>(__this + 1);
	KeyValuePair_2__ctor_m3687987201(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m2162789216_gshared (KeyValuePair_2_t3901178844 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return L_0;
	}
}
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m2162789216_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t3901178844 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3901178844 *>(__this + 1);
	return KeyValuePair_2_get_Key_m2162789216(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m3047980312_gshared (KeyValuePair_2_t3901178844 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m3047980312_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t3901178844 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3901178844 *>(__this + 1);
	KeyValuePair_2_set_Key_m3047980312(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m573677215_gshared (KeyValuePair_2_t3901178844 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return L_0;
	}
}
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m573677215_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t3901178844 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3901178844 *>(__this + 1);
	return KeyValuePair_2_get_Value_m573677215(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m3422630202_gshared (KeyValuePair_2_t3901178844 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m3422630202_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t3901178844 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3901178844 *>(__this + 1);
	KeyValuePair_2_set_Value_m3422630202(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m907306452_gshared (KeyValuePair_2_t3901178844 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m907306452_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t2179077646* G_B2_1 = NULL;
	StringU5BU5D_t2179077646* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t2179077646* G_B1_1 = NULL;
	StringU5BU5D_t2179077646* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t2179077646* G_B3_2 = NULL;
	StringU5BU5D_t2179077646* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t2179077646* G_B5_1 = NULL;
	StringU5BU5D_t2179077646* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t2179077646* G_B4_1 = NULL;
	StringU5BU5D_t2179077646* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t2179077646* G_B6_2 = NULL;
	StringU5BU5D_t2179077646* G_B6_3 = NULL;
	{
		StringU5BU5D_t2179077646* L_0 = (StringU5BU5D_t2179077646*)((StringU5BU5D_t2179077646*)SZArrayNew(StringU5BU5D_t2179077646_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral4118971342);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral4118971342);
		StringU5BU5D_t2179077646* L_1 = (StringU5BU5D_t2179077646*)L_0;
		RuntimeObject * L_2 = KeyValuePair_2_get_Key_m2162789216((KeyValuePair_2_t3901178844 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
		if (!L_2)
		{
			G_B2_0 = 1;
			G_B2_1 = L_1;
			G_B2_2 = L_1;
			goto IL_0039;
		}
	}
	{
		RuntimeObject * L_3 = KeyValuePair_2_get_Key_m2162789216((KeyValuePair_2_t3901178844 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (RuntimeObject *)L_3;
		NullCheck((RuntimeObject *)(*(&V_0)));
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*(&V_0)));
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_003e;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_003e:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		StringU5BU5D_t2179077646* L_6 = (StringU5BU5D_t2179077646*)G_B3_3;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral1533108750);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral1533108750);
		StringU5BU5D_t2179077646* L_7 = (StringU5BU5D_t2179077646*)L_6;
		RuntimeObject * L_8 = KeyValuePair_2_get_Value_m573677215((KeyValuePair_2_t3901178844 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		G_B4_0 = 3;
		G_B4_1 = L_7;
		G_B4_2 = L_7;
		if (!L_8)
		{
			G_B5_0 = 3;
			G_B5_1 = L_7;
			G_B5_2 = L_7;
			goto IL_0072;
		}
	}
	{
		RuntimeObject * L_9 = KeyValuePair_2_get_Value_m573677215((KeyValuePair_2_t3901178844 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (RuntimeObject *)L_9;
		NullCheck((RuntimeObject *)(*(&V_1)));
		String_t* L_10 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*(&V_1)));
		G_B6_0 = L_10;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0077;
	}

IL_0072:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B6_0 = L_11;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0077:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (String_t*)G_B6_0);
		StringU5BU5D_t2179077646* L_12 = (StringU5BU5D_t2179077646*)G_B6_3;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral1511173054);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral1511173054);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m3320911088(NULL /*static, unused*/, (StringU5BU5D_t2179077646*)L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m907306452_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t3901178844 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3901178844 *>(__this + 1);
	return KeyValuePair_2_ToString_m907306452(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m3275593276_gshared (KeyValuePair_2_t20122363 * __this, RuntimeObject * ___key0, uint16_t ___value1, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___key0;
		KeyValuePair_2_set_Key_m738471254((KeyValuePair_2_t20122363 *)__this, (RuntimeObject *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		uint16_t L_1 = ___value1;
		KeyValuePair_2_set_Value_m3669787756((KeyValuePair_2_t20122363 *)__this, (uint16_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m3275593276_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___key0, uint16_t ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t20122363 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t20122363 *>(__this + 1);
	KeyValuePair_2__ctor_m3275593276(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>::get_Key()
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m3067782990_gshared (KeyValuePair_2_t20122363 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return L_0;
	}
}
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m3067782990_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t20122363 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t20122363 *>(__this + 1);
	return KeyValuePair_2_get_Key_m3067782990(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m738471254_gshared (KeyValuePair_2_t20122363 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m738471254_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t20122363 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t20122363 *>(__this + 1);
	KeyValuePair_2_set_Key_m738471254(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>::get_Value()
extern "C"  uint16_t KeyValuePair_2_get_Value_m1632375845_gshared (KeyValuePair_2_t20122363 * __this, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = (uint16_t)__this->get_value_1();
		return L_0;
	}
}
extern "C"  uint16_t KeyValuePair_2_get_Value_m1632375845_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t20122363 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t20122363 *>(__this + 1);
	return KeyValuePair_2_get_Value_m1632375845(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m3669787756_gshared (KeyValuePair_2_t20122363 * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m3669787756_AdjustorThunk (RuntimeObject * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t20122363 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t20122363 *>(__this + 1);
	KeyValuePair_2_set_Value_m3669787756(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m3054812538_gshared (KeyValuePair_2_t20122363 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m3054812538_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	uint16_t V_1 = 0;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t2179077646* G_B2_1 = NULL;
	StringU5BU5D_t2179077646* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t2179077646* G_B1_1 = NULL;
	StringU5BU5D_t2179077646* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t2179077646* G_B3_2 = NULL;
	StringU5BU5D_t2179077646* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t2179077646* G_B5_1 = NULL;
	StringU5BU5D_t2179077646* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t2179077646* G_B4_1 = NULL;
	StringU5BU5D_t2179077646* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t2179077646* G_B6_2 = NULL;
	StringU5BU5D_t2179077646* G_B6_3 = NULL;
	{
		StringU5BU5D_t2179077646* L_0 = (StringU5BU5D_t2179077646*)((StringU5BU5D_t2179077646*)SZArrayNew(StringU5BU5D_t2179077646_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral4118971342);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral4118971342);
		StringU5BU5D_t2179077646* L_1 = (StringU5BU5D_t2179077646*)L_0;
		RuntimeObject * L_2 = KeyValuePair_2_get_Key_m3067782990((KeyValuePair_2_t20122363 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
		if (!L_2)
		{
			G_B2_0 = 1;
			G_B2_1 = L_1;
			G_B2_2 = L_1;
			goto IL_0039;
		}
	}
	{
		RuntimeObject * L_3 = KeyValuePair_2_get_Key_m3067782990((KeyValuePair_2_t20122363 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (RuntimeObject *)L_3;
		NullCheck((RuntimeObject *)(*(&V_0)));
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*(&V_0)));
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_003e;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_003e:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		StringU5BU5D_t2179077646* L_6 = (StringU5BU5D_t2179077646*)G_B3_3;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral1533108750);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral1533108750);
		StringU5BU5D_t2179077646* L_7 = (StringU5BU5D_t2179077646*)L_6;
		uint16_t L_8 = KeyValuePair_2_get_Value_m1632375845((KeyValuePair_2_t20122363 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		G_B4_0 = 3;
		G_B4_1 = L_7;
		G_B4_2 = L_7;
	}
	{
		uint16_t L_9 = KeyValuePair_2_get_Value_m1632375845((KeyValuePair_2_t20122363 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (uint16_t)L_9;
		String_t* L_10 = UInt16_ToString_m269188658((uint16_t*)(&V_1), /*hidden argument*/NULL);
		G_B6_0 = L_10;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0077;
	}

IL_0072:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B6_0 = L_11;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0077:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (String_t*)G_B6_0);
		StringU5BU5D_t2179077646* L_12 = (StringU5BU5D_t2179077646*)G_B6_3;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral1511173054);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral1511173054);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m3320911088(NULL /*static, unused*/, (StringU5BU5D_t2179077646*)L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m3054812538_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t20122363 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t20122363 *>(__this + 1);
	return KeyValuePair_2_ToString_m3054812538(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m2949041667_gshared (KeyValuePair_2_t2484394284 * __this, RuntimeObject * ___key0, ProfileData_t3131620333  ___value1, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___key0;
		KeyValuePair_2_set_Key_m1093655464((KeyValuePair_2_t2484394284 *)__this, (RuntimeObject *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		ProfileData_t3131620333  L_1 = ___value1;
		KeyValuePair_2_set_Value_m3869704371((KeyValuePair_2_t2484394284 *)__this, (ProfileData_t3131620333 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m2949041667_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___key0, ProfileData_t3131620333  ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t2484394284 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2484394284 *>(__this + 1);
	KeyValuePair_2__ctor_m2949041667(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>::get_Key()
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m2237543448_gshared (KeyValuePair_2_t2484394284 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return L_0;
	}
}
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m2237543448_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t2484394284 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2484394284 *>(__this + 1);
	return KeyValuePair_2_get_Key_m2237543448(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m1093655464_gshared (KeyValuePair_2_t2484394284 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m1093655464_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t2484394284 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2484394284 *>(__this + 1);
	KeyValuePair_2_set_Key_m1093655464(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>::get_Value()
extern "C"  ProfileData_t3131620333  KeyValuePair_2_get_Value_m1026319116_gshared (KeyValuePair_2_t2484394284 * __this, const RuntimeMethod* method)
{
	{
		ProfileData_t3131620333  L_0 = (ProfileData_t3131620333 )__this->get_value_1();
		return L_0;
	}
}
extern "C"  ProfileData_t3131620333  KeyValuePair_2_get_Value_m1026319116_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t2484394284 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2484394284 *>(__this + 1);
	return KeyValuePair_2_get_Value_m1026319116(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m3869704371_gshared (KeyValuePair_2_t2484394284 * __this, ProfileData_t3131620333  ___value0, const RuntimeMethod* method)
{
	{
		ProfileData_t3131620333  L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m3869704371_AdjustorThunk (RuntimeObject * __this, ProfileData_t3131620333  ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t2484394284 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2484394284 *>(__this + 1);
	KeyValuePair_2_set_Value_m3869704371(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m123715502_gshared (KeyValuePair_2_t2484394284 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m123715502_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	ProfileData_t3131620333  V_1;
	memset(&V_1, 0, sizeof(V_1));
	int32_t G_B2_0 = 0;
	StringU5BU5D_t2179077646* G_B2_1 = NULL;
	StringU5BU5D_t2179077646* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t2179077646* G_B1_1 = NULL;
	StringU5BU5D_t2179077646* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t2179077646* G_B3_2 = NULL;
	StringU5BU5D_t2179077646* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t2179077646* G_B5_1 = NULL;
	StringU5BU5D_t2179077646* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t2179077646* G_B4_1 = NULL;
	StringU5BU5D_t2179077646* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t2179077646* G_B6_2 = NULL;
	StringU5BU5D_t2179077646* G_B6_3 = NULL;
	{
		StringU5BU5D_t2179077646* L_0 = (StringU5BU5D_t2179077646*)((StringU5BU5D_t2179077646*)SZArrayNew(StringU5BU5D_t2179077646_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral4118971342);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral4118971342);
		StringU5BU5D_t2179077646* L_1 = (StringU5BU5D_t2179077646*)L_0;
		RuntimeObject * L_2 = KeyValuePair_2_get_Key_m2237543448((KeyValuePair_2_t2484394284 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
		if (!L_2)
		{
			G_B2_0 = 1;
			G_B2_1 = L_1;
			G_B2_2 = L_1;
			goto IL_0039;
		}
	}
	{
		RuntimeObject * L_3 = KeyValuePair_2_get_Key_m2237543448((KeyValuePair_2_t2484394284 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (RuntimeObject *)L_3;
		NullCheck((RuntimeObject *)(*(&V_0)));
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*(&V_0)));
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_003e;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_003e:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		StringU5BU5D_t2179077646* L_6 = (StringU5BU5D_t2179077646*)G_B3_3;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral1533108750);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral1533108750);
		StringU5BU5D_t2179077646* L_7 = (StringU5BU5D_t2179077646*)L_6;
		ProfileData_t3131620333  L_8 = KeyValuePair_2_get_Value_m1026319116((KeyValuePair_2_t2484394284 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		G_B4_0 = 3;
		G_B4_1 = L_7;
		G_B4_2 = L_7;
	}
	{
		ProfileData_t3131620333  L_9 = KeyValuePair_2_get_Value_m1026319116((KeyValuePair_2_t2484394284 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (ProfileData_t3131620333 )L_9;
		RuntimeObject * L_10 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (&V_1));
		NullCheck((RuntimeObject *)L_10);
		String_t* L_11 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_10);
		*(&V_1) = *(ProfileData_t3131620333 *)UnBox(L_10);
		G_B6_0 = L_11;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0077;
	}

IL_0072:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B6_0 = L_12;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0077:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (String_t*)G_B6_0);
		StringU5BU5D_t2179077646* L_13 = (StringU5BU5D_t2179077646*)G_B6_3;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteral1511173054);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral1511173054);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = String_Concat_m3320911088(NULL /*static, unused*/, (StringU5BU5D_t2179077646*)L_13, /*hidden argument*/NULL);
		return L_14;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m123715502_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t2484394284 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2484394284 *>(__this + 1);
	return KeyValuePair_2_ToString_m123715502(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m461332189_gshared (KeyValuePair_2_t941283083 * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___key0;
		KeyValuePair_2_set_Key_m3048823269((KeyValuePair_2_t941283083 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		RuntimeObject * L_1 = ___value1;
		KeyValuePair_2_set_Value_m1525508223((KeyValuePair_2_t941283083 *)__this, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m461332189_AdjustorThunk (RuntimeObject * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t941283083 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t941283083 *>(__this + 1);
	KeyValuePair_2__ctor_m461332189(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m2084471977_gshared (KeyValuePair_2_t941283083 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_key_0();
		return L_0;
	}
}
extern "C"  int32_t KeyValuePair_2_get_Key_m2084471977_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t941283083 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t941283083 *>(__this + 1);
	return KeyValuePair_2_get_Key_m2084471977(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m3048823269_gshared (KeyValuePair_2_t941283083 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m3048823269_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t941283083 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t941283083 *>(__this + 1);
	KeyValuePair_2_set_Key_m3048823269(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m1621817662_gshared (KeyValuePair_2_t941283083 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return L_0;
	}
}
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m1621817662_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t941283083 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t941283083 *>(__this + 1);
	return KeyValuePair_2_get_Value_m1621817662(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m1525508223_gshared (KeyValuePair_2_t941283083 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m1525508223_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t941283083 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t941283083 *>(__this + 1);
	KeyValuePair_2_set_Value_m1525508223(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m420889086_gshared (KeyValuePair_2_t941283083 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m420889086_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t2179077646* G_B2_1 = NULL;
	StringU5BU5D_t2179077646* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t2179077646* G_B1_1 = NULL;
	StringU5BU5D_t2179077646* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t2179077646* G_B3_2 = NULL;
	StringU5BU5D_t2179077646* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t2179077646* G_B5_1 = NULL;
	StringU5BU5D_t2179077646* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t2179077646* G_B4_1 = NULL;
	StringU5BU5D_t2179077646* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t2179077646* G_B6_2 = NULL;
	StringU5BU5D_t2179077646* G_B6_3 = NULL;
	{
		StringU5BU5D_t2179077646* L_0 = (StringU5BU5D_t2179077646*)((StringU5BU5D_t2179077646*)SZArrayNew(StringU5BU5D_t2179077646_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral4118971342);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral4118971342);
		StringU5BU5D_t2179077646* L_1 = (StringU5BU5D_t2179077646*)L_0;
		int32_t L_2 = KeyValuePair_2_get_Key_m2084471977((KeyValuePair_2_t941283083 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
	}
	{
		int32_t L_3 = KeyValuePair_2_get_Key_m2084471977((KeyValuePair_2_t941283083 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (int32_t)L_3;
		RuntimeObject * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (&V_0));
		NullCheck((RuntimeObject *)L_4);
		String_t* L_5 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_4);
		*(&V_0) = *(int32_t*)UnBox(L_4);
		G_B3_0 = L_5;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_003e;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B3_0 = L_6;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_003e:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		StringU5BU5D_t2179077646* L_7 = (StringU5BU5D_t2179077646*)G_B3_3;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral1533108750);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral1533108750);
		StringU5BU5D_t2179077646* L_8 = (StringU5BU5D_t2179077646*)L_7;
		RuntimeObject * L_9 = KeyValuePair_2_get_Value_m1621817662((KeyValuePair_2_t941283083 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		G_B4_0 = 3;
		G_B4_1 = L_8;
		G_B4_2 = L_8;
		if (!L_9)
		{
			G_B5_0 = 3;
			G_B5_1 = L_8;
			G_B5_2 = L_8;
			goto IL_0072;
		}
	}
	{
		RuntimeObject * L_10 = KeyValuePair_2_get_Value_m1621817662((KeyValuePair_2_t941283083 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (RuntimeObject *)L_10;
		NullCheck((RuntimeObject *)(*(&V_1)));
		String_t* L_11 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*(&V_1)));
		G_B6_0 = L_11;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0077;
	}

IL_0072:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B6_0 = L_12;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0077:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (String_t*)G_B6_0);
		StringU5BU5D_t2179077646* L_13 = (StringU5BU5D_t2179077646*)G_B6_3;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteral1511173054);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral1511173054);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = String_Concat_m3320911088(NULL /*static, unused*/, (StringU5BU5D_t2179077646*)L_13, /*hidden argument*/NULL);
		return L_14;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m420889086_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t941283083 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t941283083 *>(__this + 1);
	return KeyValuePair_2_ToString_m420889086(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<Vuforia.VuforiaManager/TrackableIdPair,Vuforia.HoloLensExtendedTrackingManager/PoseAgeEntry>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m174197927_gshared (KeyValuePair_2_t3773358754 * __this, TrackableIdPair_t4255691917  ___key0, PoseAgeEntry_t2217900307  ___value1, const RuntimeMethod* method)
{
	{
		TrackableIdPair_t4255691917  L_0 = ___key0;
		KeyValuePair_2_set_Key_m521404300((KeyValuePair_2_t3773358754 *)__this, (TrackableIdPair_t4255691917 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		PoseAgeEntry_t2217900307  L_1 = ___value1;
		KeyValuePair_2_set_Value_m3432471001((KeyValuePair_2_t3773358754 *)__this, (PoseAgeEntry_t2217900307 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m174197927_AdjustorThunk (RuntimeObject * __this, TrackableIdPair_t4255691917  ___key0, PoseAgeEntry_t2217900307  ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t3773358754 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3773358754 *>(__this + 1);
	KeyValuePair_2__ctor_m174197927(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<Vuforia.VuforiaManager/TrackableIdPair,Vuforia.HoloLensExtendedTrackingManager/PoseAgeEntry>::get_Key()
extern "C"  TrackableIdPair_t4255691917  KeyValuePair_2_get_Key_m2237848790_gshared (KeyValuePair_2_t3773358754 * __this, const RuntimeMethod* method)
{
	{
		TrackableIdPair_t4255691917  L_0 = (TrackableIdPair_t4255691917 )__this->get_key_0();
		return L_0;
	}
}
extern "C"  TrackableIdPair_t4255691917  KeyValuePair_2_get_Key_m2237848790_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t3773358754 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3773358754 *>(__this + 1);
	return KeyValuePair_2_get_Key_m2237848790(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<Vuforia.VuforiaManager/TrackableIdPair,Vuforia.HoloLensExtendedTrackingManager/PoseAgeEntry>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m521404300_gshared (KeyValuePair_2_t3773358754 * __this, TrackableIdPair_t4255691917  ___value0, const RuntimeMethod* method)
{
	{
		TrackableIdPair_t4255691917  L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m521404300_AdjustorThunk (RuntimeObject * __this, TrackableIdPair_t4255691917  ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t3773358754 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3773358754 *>(__this + 1);
	KeyValuePair_2_set_Key_m521404300(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<Vuforia.VuforiaManager/TrackableIdPair,Vuforia.HoloLensExtendedTrackingManager/PoseAgeEntry>::get_Value()
extern "C"  PoseAgeEntry_t2217900307  KeyValuePair_2_get_Value_m1820595918_gshared (KeyValuePair_2_t3773358754 * __this, const RuntimeMethod* method)
{
	{
		PoseAgeEntry_t2217900307  L_0 = (PoseAgeEntry_t2217900307 )__this->get_value_1();
		return L_0;
	}
}
extern "C"  PoseAgeEntry_t2217900307  KeyValuePair_2_get_Value_m1820595918_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t3773358754 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3773358754 *>(__this + 1);
	return KeyValuePair_2_get_Value_m1820595918(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<Vuforia.VuforiaManager/TrackableIdPair,Vuforia.HoloLensExtendedTrackingManager/PoseAgeEntry>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m3432471001_gshared (KeyValuePair_2_t3773358754 * __this, PoseAgeEntry_t2217900307  ___value0, const RuntimeMethod* method)
{
	{
		PoseAgeEntry_t2217900307  L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m3432471001_AdjustorThunk (RuntimeObject * __this, PoseAgeEntry_t2217900307  ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t3773358754 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3773358754 *>(__this + 1);
	KeyValuePair_2_set_Value_m3432471001(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<Vuforia.VuforiaManager/TrackableIdPair,Vuforia.HoloLensExtendedTrackingManager/PoseAgeEntry>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m4015106371_gshared (KeyValuePair_2_t3773358754 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m4015106371_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TrackableIdPair_t4255691917  V_0;
	memset(&V_0, 0, sizeof(V_0));
	PoseAgeEntry_t2217900307  V_1;
	memset(&V_1, 0, sizeof(V_1));
	int32_t G_B2_0 = 0;
	StringU5BU5D_t2179077646* G_B2_1 = NULL;
	StringU5BU5D_t2179077646* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t2179077646* G_B1_1 = NULL;
	StringU5BU5D_t2179077646* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t2179077646* G_B3_2 = NULL;
	StringU5BU5D_t2179077646* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t2179077646* G_B5_1 = NULL;
	StringU5BU5D_t2179077646* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t2179077646* G_B4_1 = NULL;
	StringU5BU5D_t2179077646* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t2179077646* G_B6_2 = NULL;
	StringU5BU5D_t2179077646* G_B6_3 = NULL;
	{
		StringU5BU5D_t2179077646* L_0 = (StringU5BU5D_t2179077646*)((StringU5BU5D_t2179077646*)SZArrayNew(StringU5BU5D_t2179077646_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral4118971342);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral4118971342);
		StringU5BU5D_t2179077646* L_1 = (StringU5BU5D_t2179077646*)L_0;
		TrackableIdPair_t4255691917  L_2 = KeyValuePair_2_get_Key_m2237848790((KeyValuePair_2_t3773358754 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
	}
	{
		TrackableIdPair_t4255691917  L_3 = KeyValuePair_2_get_Key_m2237848790((KeyValuePair_2_t3773358754 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (TrackableIdPair_t4255691917 )L_3;
		RuntimeObject * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (&V_0));
		NullCheck((RuntimeObject *)L_4);
		String_t* L_5 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_4);
		*(&V_0) = *(TrackableIdPair_t4255691917 *)UnBox(L_4);
		G_B3_0 = L_5;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_003e;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B3_0 = L_6;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_003e:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		StringU5BU5D_t2179077646* L_7 = (StringU5BU5D_t2179077646*)G_B3_3;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral1533108750);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral1533108750);
		StringU5BU5D_t2179077646* L_8 = (StringU5BU5D_t2179077646*)L_7;
		PoseAgeEntry_t2217900307  L_9 = KeyValuePair_2_get_Value_m1820595918((KeyValuePair_2_t3773358754 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		G_B4_0 = 3;
		G_B4_1 = L_8;
		G_B4_2 = L_8;
	}
	{
		PoseAgeEntry_t2217900307  L_10 = KeyValuePair_2_get_Value_m1820595918((KeyValuePair_2_t3773358754 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (PoseAgeEntry_t2217900307 )L_10;
		RuntimeObject * L_11 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (&V_1));
		NullCheck((RuntimeObject *)L_11);
		String_t* L_12 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_11);
		*(&V_1) = *(PoseAgeEntry_t2217900307 *)UnBox(L_11);
		G_B6_0 = L_12;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0077;
	}

IL_0072:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B6_0 = L_13;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0077:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (String_t*)G_B6_0);
		StringU5BU5D_t2179077646* L_14 = (StringU5BU5D_t2179077646*)G_B6_3;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, _stringLiteral1511173054);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral1511173054);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_15 = String_Concat_m3320911088(NULL /*static, unused*/, (StringU5BU5D_t2179077646*)L_14, /*hidden argument*/NULL);
		return L_15;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m4015106371_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t3773358754 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3773358754 *>(__this + 1);
	return KeyValuePair_2_ToString_m4015106371(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif

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
struct StringU5BU5D_t616564297;
// System.Char[]
struct CharU5BU5D_t1106971146;
// System.Void
struct Void_t646970209;

extern RuntimeClass* StringU5BU5D_t616564297_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral628932642;
extern Il2CppCodeGenString* _stringLiteral421113991;
extern Il2CppCodeGenString* _stringLiteral1561315052;
extern const uint32_t KeyValuePair_2_ToString_m3512550156_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m1407072634_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m1954330763_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m1252078240_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m1582055755_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m3559928212_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m1805888552_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m3957531914_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m3225744020_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m422623202_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m3715587859_MetadataUsageId;

struct StringU5BU5D_t616564297;


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
#ifndef VALUETYPE_T1181226757_H
#define VALUETYPE_T1181226757_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t1181226757  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t1181226757_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t1181226757_marshaled_com
{
};
#endif // VALUETYPE_T1181226757_H
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
	CharU5BU5D_t1106971146* ___WhiteChars_3;

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
	inline CharU5BU5D_t1106971146* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t1106971146** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t1106971146* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef VEC2I_T1893502572_H
#define VEC2I_T1893502572_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaRenderer/Vec2I
#pragma pack(push, tp, 1)
struct  Vec2I_t1893502572 
{
public:
	// System.Int32 Vuforia.VuforiaRenderer/Vec2I::x
	int32_t ___x_0;
	// System.Int32 Vuforia.VuforiaRenderer/Vec2I::y
	int32_t ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vec2I_t1893502572, ___x_0)); }
	inline int32_t get_x_0() const { return ___x_0; }
	inline int32_t* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(int32_t value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vec2I_t1893502572, ___y_1)); }
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
#endif // VEC2I_T1893502572_H
#ifndef ENUM_T1709559904_H
#define ENUM_T1709559904_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t1709559904  : public ValueType_t1181226757
{
public:

public:
};

struct Enum_t1709559904_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t1106971146* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t1709559904_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t1106971146* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t1106971146** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t1106971146* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t1709559904_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t1709559904_marshaled_com
{
};
#endif // ENUM_T1709559904_H
#ifndef TRACKABLEIDPAIR_T1651355943_H
#define TRACKABLEIDPAIR_T1651355943_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaManager/TrackableIdPair
struct  TrackableIdPair_t1651355943 
{
public:
	// System.Int32 Vuforia.VuforiaManager/TrackableIdPair::TrackableId
	int32_t ___TrackableId_0;
	// System.Int32 Vuforia.VuforiaManager/TrackableIdPair::ResultId
	int32_t ___ResultId_1;

public:
	inline static int32_t get_offset_of_TrackableId_0() { return static_cast<int32_t>(offsetof(TrackableIdPair_t1651355943, ___TrackableId_0)); }
	inline int32_t get_TrackableId_0() const { return ___TrackableId_0; }
	inline int32_t* get_address_of_TrackableId_0() { return &___TrackableId_0; }
	inline void set_TrackableId_0(int32_t value)
	{
		___TrackableId_0 = value;
	}

	inline static int32_t get_offset_of_ResultId_1() { return static_cast<int32_t>(offsetof(TrackableIdPair_t1651355943, ___ResultId_1)); }
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
#endif // TRACKABLEIDPAIR_T1651355943_H
#ifndef UINT16_T1793823254_H
#define UINT16_T1793823254_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt16
struct  UInt16_t1793823254 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(UInt16_t1793823254, ___m_value_2)); }
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
#endif // UINT16_T1793823254_H
#ifndef KEYVALUEPAIR_2_T1090996106_H
#define KEYVALUEPAIR_2_T1090996106_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>
struct  KeyValuePair_2_t1090996106 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	uint16_t ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1090996106, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1090996106, ___value_1)); }
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
#endif // KEYVALUEPAIR_2_T1090996106_H
#ifndef VECTOR3_T2298658367_H
#define VECTOR3_T2298658367_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t2298658367 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t2298658367, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t2298658367, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t2298658367, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t2298658367_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t2298658367  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t2298658367  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t2298658367  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t2298658367  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t2298658367  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t2298658367  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t2298658367  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t2298658367  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t2298658367  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t2298658367  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t2298658367_StaticFields, ___zeroVector_4)); }
	inline Vector3_t2298658367  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t2298658367 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t2298658367  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t2298658367_StaticFields, ___oneVector_5)); }
	inline Vector3_t2298658367  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t2298658367 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t2298658367  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t2298658367_StaticFields, ___upVector_6)); }
	inline Vector3_t2298658367  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t2298658367 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t2298658367  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t2298658367_StaticFields, ___downVector_7)); }
	inline Vector3_t2298658367  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t2298658367 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t2298658367  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t2298658367_StaticFields, ___leftVector_8)); }
	inline Vector3_t2298658367  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t2298658367 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t2298658367  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t2298658367_StaticFields, ___rightVector_9)); }
	inline Vector3_t2298658367  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t2298658367 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t2298658367  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t2298658367_StaticFields, ___forwardVector_10)); }
	inline Vector3_t2298658367  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t2298658367 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t2298658367  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t2298658367_StaticFields, ___backVector_11)); }
	inline Vector3_t2298658367  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t2298658367 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t2298658367  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t2298658367_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t2298658367  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t2298658367 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t2298658367  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t2298658367_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t2298658367  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t2298658367 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t2298658367  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T2298658367_H
#ifndef KEYVALUEPAIR_2_T1697066796_H
#define KEYVALUEPAIR_2_T1697066796_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
struct  KeyValuePair_2_t1697066796 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	int32_t ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1697066796, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1697066796, ___value_1)); }
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
#endif // KEYVALUEPAIR_2_T1697066796_H
#ifndef BOOLEAN_T2830622493_H
#define BOOLEAN_T2830622493_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t2830622493 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t2830622493, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t2830622493_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t2830622493_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t2830622493_StaticFields, ___TrueString_1)); }
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
#endif // BOOLEAN_T2830622493_H
#ifndef KEYVALUEPAIR_2_T3597094838_H
#define KEYVALUEPAIR_2_T3597094838_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct  KeyValuePair_2_t3597094838 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3597094838, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3597094838, ___value_1)); }
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
#endif // KEYVALUEPAIR_2_T3597094838_H
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
#ifndef KEYVALUEPAIR_2_T2167416232_H
#define KEYVALUEPAIR_2_T2167416232_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
struct  KeyValuePair_2_t2167416232 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2167416232, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2167416232, ___value_1)); }
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
#endif // KEYVALUEPAIR_2_T2167416232_H
#ifndef VOID_T646970209_H
#define VOID_T646970209_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t646970209 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T646970209_H
#ifndef INT32_T2399893944_H
#define INT32_T2399893944_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2399893944 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2399893944, ___m_value_2)); }
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
#endif // INT32_T2399893944_H
#ifndef KEYVALUEPAIR_2_T2127795345_H
#define KEYVALUEPAIR_2_T2127795345_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>
struct  KeyValuePair_2_t2127795345 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	bool ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2127795345, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2127795345, ___value_1)); }
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
#endif // KEYVALUEPAIR_2_T2127795345_H
#ifndef QUATERNION_T2042570925_H
#define QUATERNION_T2042570925_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t2042570925 
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
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t2042570925, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t2042570925, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t2042570925, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t2042570925, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t2042570925_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t2042570925  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t2042570925_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t2042570925  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t2042570925 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t2042570925  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T2042570925_H
#ifndef VIRTUALBUTTONDATA_T454529797_H
#define VIRTUALBUTTONDATA_T454529797_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaManagerImpl/VirtualButtonData
#pragma pack(push, tp, 1)
struct  VirtualButtonData_t454529797 
{
public:
	// System.Int32 Vuforia.VuforiaManagerImpl/VirtualButtonData::id
	int32_t ___id_0;
	// System.Int32 Vuforia.VuforiaManagerImpl/VirtualButtonData::isPressed
	int32_t ___isPressed_1;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(VirtualButtonData_t454529797, ___id_0)); }
	inline int32_t get_id_0() const { return ___id_0; }
	inline int32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(int32_t value)
	{
		___id_0 = value;
	}

	inline static int32_t get_offset_of_isPressed_1() { return static_cast<int32_t>(offsetof(VirtualButtonData_t454529797, ___isPressed_1)); }
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
#endif // VIRTUALBUTTONDATA_T454529797_H
#ifndef PROFILEDATA_T1540527732_H
#define PROFILEDATA_T1540527732_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.WebCamProfile/ProfileData
struct  ProfileData_t1540527732 
{
public:
	// Vuforia.VuforiaRenderer/Vec2I Vuforia.WebCamProfile/ProfileData::RequestedTextureSize
	Vec2I_t1893502572  ___RequestedTextureSize_0;
	// Vuforia.VuforiaRenderer/Vec2I Vuforia.WebCamProfile/ProfileData::ResampledTextureSize
	Vec2I_t1893502572  ___ResampledTextureSize_1;
	// System.Int32 Vuforia.WebCamProfile/ProfileData::RequestedFPS
	int32_t ___RequestedFPS_2;

public:
	inline static int32_t get_offset_of_RequestedTextureSize_0() { return static_cast<int32_t>(offsetof(ProfileData_t1540527732, ___RequestedTextureSize_0)); }
	inline Vec2I_t1893502572  get_RequestedTextureSize_0() const { return ___RequestedTextureSize_0; }
	inline Vec2I_t1893502572 * get_address_of_RequestedTextureSize_0() { return &___RequestedTextureSize_0; }
	inline void set_RequestedTextureSize_0(Vec2I_t1893502572  value)
	{
		___RequestedTextureSize_0 = value;
	}

	inline static int32_t get_offset_of_ResampledTextureSize_1() { return static_cast<int32_t>(offsetof(ProfileData_t1540527732, ___ResampledTextureSize_1)); }
	inline Vec2I_t1893502572  get_ResampledTextureSize_1() const { return ___ResampledTextureSize_1; }
	inline Vec2I_t1893502572 * get_address_of_ResampledTextureSize_1() { return &___ResampledTextureSize_1; }
	inline void set_ResampledTextureSize_1(Vec2I_t1893502572  value)
	{
		___ResampledTextureSize_1 = value;
	}

	inline static int32_t get_offset_of_RequestedFPS_2() { return static_cast<int32_t>(offsetof(ProfileData_t1540527732, ___RequestedFPS_2)); }
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
#endif // PROFILEDATA_T1540527732_H
#ifndef STATUS_T400244547_H
#define STATUS_T400244547_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.TrackableBehaviour/Status
struct  Status_t400244547 
{
public:
	// System.Int32 Vuforia.TrackableBehaviour/Status::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Status_t400244547, ___value___1)); }
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
#endif // STATUS_T400244547_H
#ifndef KEYVALUEPAIR_2_T2616991339_H
#define KEYVALUEPAIR_2_T2616991339_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>
struct  KeyValuePair_2_t2616991339 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	VirtualButtonData_t454529797  ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2616991339, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2616991339, ___value_1)); }
	inline VirtualButtonData_t454529797  get_value_1() const { return ___value_1; }
	inline VirtualButtonData_t454529797 * get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(VirtualButtonData_t454529797  value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T2616991339_H
#ifndef KEYVALUEPAIR_2_T2145437879_H
#define KEYVALUEPAIR_2_T2145437879_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>
struct  KeyValuePair_2_t2145437879 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	IntPtr_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2145437879, ___key_0)); }
	inline IntPtr_t get_key_0() const { return ___key_0; }
	inline IntPtr_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(IntPtr_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2145437879, ___value_1)); }
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
#endif // KEYVALUEPAIR_2_T2145437879_H
#ifndef POSEINFO_T208060697_H
#define POSEINFO_T208060697_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.HoloLensExtendedTrackingManager/PoseInfo
struct  PoseInfo_t208060697 
{
public:
	// UnityEngine.Vector3 Vuforia.HoloLensExtendedTrackingManager/PoseInfo::Position
	Vector3_t2298658367  ___Position_0;
	// UnityEngine.Quaternion Vuforia.HoloLensExtendedTrackingManager/PoseInfo::Rotation
	Quaternion_t2042570925  ___Rotation_1;
	// System.Int32 Vuforia.HoloLensExtendedTrackingManager/PoseInfo::NumFramesPoseWasOff
	int32_t ___NumFramesPoseWasOff_2;

public:
	inline static int32_t get_offset_of_Position_0() { return static_cast<int32_t>(offsetof(PoseInfo_t208060697, ___Position_0)); }
	inline Vector3_t2298658367  get_Position_0() const { return ___Position_0; }
	inline Vector3_t2298658367 * get_address_of_Position_0() { return &___Position_0; }
	inline void set_Position_0(Vector3_t2298658367  value)
	{
		___Position_0 = value;
	}

	inline static int32_t get_offset_of_Rotation_1() { return static_cast<int32_t>(offsetof(PoseInfo_t208060697, ___Rotation_1)); }
	inline Quaternion_t2042570925  get_Rotation_1() const { return ___Rotation_1; }
	inline Quaternion_t2042570925 * get_address_of_Rotation_1() { return &___Rotation_1; }
	inline void set_Rotation_1(Quaternion_t2042570925  value)
	{
		___Rotation_1 = value;
	}

	inline static int32_t get_offset_of_NumFramesPoseWasOff_2() { return static_cast<int32_t>(offsetof(PoseInfo_t208060697, ___NumFramesPoseWasOff_2)); }
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
#endif // POSEINFO_T208060697_H
#ifndef PIXEL_FORMAT_T1903916645_H
#define PIXEL_FORMAT_T1903916645_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.Image/PIXEL_FORMAT
struct  PIXEL_FORMAT_t1903916645 
{
public:
	// System.Int32 Vuforia.Image/PIXEL_FORMAT::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PIXEL_FORMAT_t1903916645, ___value___1)); }
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
#endif // PIXEL_FORMAT_T1903916645_H
#ifndef KEYVALUEPAIR_2_T3251947431_H
#define KEYVALUEPAIR_2_T3251947431_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<Vuforia.Image/PIXEL_FORMAT,System.Object>
struct  KeyValuePair_2_t3251947431 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3251947431, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3251947431, ___value_1)); }
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
#endif // KEYVALUEPAIR_2_T3251947431_H
#ifndef KEYVALUEPAIR_2_T2562706089_H
#define KEYVALUEPAIR_2_T2562706089_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackableBehaviour/Status>
struct  KeyValuePair_2_t2562706089 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	int32_t ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2562706089, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2562706089, ___value_1)); }
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
#endif // KEYVALUEPAIR_2_T2562706089_H
#ifndef POSEAGEENTRY_T2070329090_H
#define POSEAGEENTRY_T2070329090_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.HoloLensExtendedTrackingManager/PoseAgeEntry
struct  PoseAgeEntry_t2070329090 
{
public:
	// Vuforia.HoloLensExtendedTrackingManager/PoseInfo Vuforia.HoloLensExtendedTrackingManager/PoseAgeEntry::Pose
	PoseInfo_t208060697  ___Pose_0;
	// Vuforia.HoloLensExtendedTrackingManager/PoseInfo Vuforia.HoloLensExtendedTrackingManager/PoseAgeEntry::CameraPose
	PoseInfo_t208060697  ___CameraPose_1;
	// System.Int32 Vuforia.HoloLensExtendedTrackingManager/PoseAgeEntry::Age
	int32_t ___Age_2;

public:
	inline static int32_t get_offset_of_Pose_0() { return static_cast<int32_t>(offsetof(PoseAgeEntry_t2070329090, ___Pose_0)); }
	inline PoseInfo_t208060697  get_Pose_0() const { return ___Pose_0; }
	inline PoseInfo_t208060697 * get_address_of_Pose_0() { return &___Pose_0; }
	inline void set_Pose_0(PoseInfo_t208060697  value)
	{
		___Pose_0 = value;
	}

	inline static int32_t get_offset_of_CameraPose_1() { return static_cast<int32_t>(offsetof(PoseAgeEntry_t2070329090, ___CameraPose_1)); }
	inline PoseInfo_t208060697  get_CameraPose_1() const { return ___CameraPose_1; }
	inline PoseInfo_t208060697 * get_address_of_CameraPose_1() { return &___CameraPose_1; }
	inline void set_CameraPose_1(PoseInfo_t208060697  value)
	{
		___CameraPose_1 = value;
	}

	inline static int32_t get_offset_of_Age_2() { return static_cast<int32_t>(offsetof(PoseAgeEntry_t2070329090, ___Age_2)); }
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
#endif // POSEAGEENTRY_T2070329090_H
#ifndef KEYVALUEPAIR_2_T837700584_H
#define KEYVALUEPAIR_2_T837700584_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>
struct  KeyValuePair_2_t837700584 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	ProfileData_t1540527732  ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t837700584, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t837700584, ___value_1)); }
	inline ProfileData_t1540527732  get_value_1() const { return ___value_1; }
	inline ProfileData_t1540527732 * get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(ProfileData_t1540527732  value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T837700584_H
#ifndef KEYVALUEPAIR_2_T1053486173_H
#define KEYVALUEPAIR_2_T1053486173_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<Vuforia.VuforiaManager/TrackableIdPair,Vuforia.HoloLensExtendedTrackingManager/PoseAgeEntry>
struct  KeyValuePair_2_t1053486173 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	TrackableIdPair_t1651355943  ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	PoseAgeEntry_t2070329090  ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1053486173, ___key_0)); }
	inline TrackableIdPair_t1651355943  get_key_0() const { return ___key_0; }
	inline TrackableIdPair_t1651355943 * get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(TrackableIdPair_t1651355943  value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1053486173, ___value_1)); }
	inline PoseAgeEntry_t2070329090  get_value_1() const { return ___value_1; }
	inline PoseAgeEntry_t2070329090 * get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(PoseAgeEntry_t2070329090  value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T1053486173_H
// System.String[]
struct StringU5BU5D_t616564297  : public RuntimeArray
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
extern "C"  void KeyValuePair_2_set_Key_m2333557257_gshared (KeyValuePair_2_t2167416232 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m1380155344_gshared (KeyValuePair_2_t2167416232 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m3572425317_gshared (KeyValuePair_2_t2167416232 * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m2027760912_gshared (KeyValuePair_2_t2167416232 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m1332859342_gshared (KeyValuePair_2_t2167416232 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m3512550156_gshared (KeyValuePair_2_t2167416232 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackableBehaviour/Status>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m300076548_gshared (KeyValuePair_2_t2562706089 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackableBehaviour/Status>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m3445753360_gshared (KeyValuePair_2_t2562706089 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackableBehaviour/Status>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m2664170502_gshared (KeyValuePair_2_t2562706089 * __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackableBehaviour/Status>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m963341254_gshared (KeyValuePair_2_t2562706089 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackableBehaviour/Status>::get_Value()
extern "C"  int32_t KeyValuePair_2_get_Value_m2109012636_gshared (KeyValuePair_2_t2562706089 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackableBehaviour/Status>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m1407072634_gshared (KeyValuePair_2_t2562706089 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m3727651908_gshared (KeyValuePair_2_t2616991339 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m1574977124_gshared (KeyValuePair_2_t2616991339 * __this, VirtualButtonData_t454529797  p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m1256781571_gshared (KeyValuePair_2_t2616991339 * __this, int32_t ___key0, VirtualButtonData_t454529797  ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m60011026_gshared (KeyValuePair_2_t2616991339 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::get_Value()
extern "C"  VirtualButtonData_t454529797  KeyValuePair_2_get_Value_m580840937_gshared (KeyValuePair_2_t2616991339 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m1954330763_gshared (KeyValuePair_2_t2616991339 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m833207785_gshared (KeyValuePair_2_t2145437879 * __this, IntPtr_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m2081603763_gshared (KeyValuePair_2_t2145437879 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m3572357296_gshared (KeyValuePair_2_t2145437879 * __this, IntPtr_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::get_Key()
extern "C"  IntPtr_t KeyValuePair_2_get_Key_m927551766_gshared (KeyValuePair_2_t2145437879 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m3195849613_gshared (KeyValuePair_2_t2145437879 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m1252078240_gshared (KeyValuePair_2_t2145437879 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m1097582470_gshared (KeyValuePair_2_t2127795345 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m2412768290_gshared (KeyValuePair_2_t2127795345 * __this, bool p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m1033110173_gshared (KeyValuePair_2_t2127795345 * __this, RuntimeObject * ___key0, bool ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::get_Key()
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m1061960381_gshared (KeyValuePair_2_t2127795345 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::get_Value()
extern "C"  bool KeyValuePair_2_get_Value_m465714260_gshared (KeyValuePair_2_t2127795345 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m1582055755_gshared (KeyValuePair_2_t2127795345 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m2364588800_gshared (KeyValuePair_2_t1697066796 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m3143178925_gshared (KeyValuePair_2_t1697066796 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m1912248122_gshared (KeyValuePair_2_t1697066796 * __this, RuntimeObject * ___key0, int32_t ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::get_Key()
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m3616138842_gshared (KeyValuePair_2_t1697066796 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::get_Value()
extern "C"  int32_t KeyValuePair_2_get_Value_m1001976845_gshared (KeyValuePair_2_t1697066796 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m3559928212_gshared (KeyValuePair_2_t1697066796 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m402466306_gshared (KeyValuePair_2_t3597094838 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m2732515761_gshared (KeyValuePair_2_t3597094838 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m7490237_gshared (KeyValuePair_2_t3597094838 * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m3853179282_gshared (KeyValuePair_2_t3597094838 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m4130655347_gshared (KeyValuePair_2_t3597094838 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m1805888552_gshared (KeyValuePair_2_t3597094838 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m2182934166_gshared (KeyValuePair_2_t1090996106 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m2422985794_gshared (KeyValuePair_2_t1090996106 * __this, uint16_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m2183117739_gshared (KeyValuePair_2_t1090996106 * __this, RuntimeObject * ___key0, uint16_t ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>::get_Key()
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m3785602198_gshared (KeyValuePair_2_t1090996106 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>::get_Value()
extern "C"  uint16_t KeyValuePair_2_get_Value_m363600934_gshared (KeyValuePair_2_t1090996106 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m3957531914_gshared (KeyValuePair_2_t1090996106 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m1730256355_gshared (KeyValuePair_2_t837700584 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m2266583795_gshared (KeyValuePair_2_t837700584 * __this, ProfileData_t1540527732  p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m956416699_gshared (KeyValuePair_2_t837700584 * __this, RuntimeObject * ___key0, ProfileData_t1540527732  ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>::get_Key()
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m4102351182_gshared (KeyValuePair_2_t837700584 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>::get_Value()
extern "C"  ProfileData_t1540527732  KeyValuePair_2_get_Value_m554734539_gshared (KeyValuePair_2_t837700584 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m3225744020_gshared (KeyValuePair_2_t837700584 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m1576423706_gshared (KeyValuePair_2_t3251947431 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m801296788_gshared (KeyValuePair_2_t3251947431 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m3303824572_gshared (KeyValuePair_2_t3251947431 * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m912665991_gshared (KeyValuePair_2_t3251947431 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m3435123857_gshared (KeyValuePair_2_t3251947431 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m422623202_gshared (KeyValuePair_2_t3251947431 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<Vuforia.VuforiaManager/TrackableIdPair,Vuforia.HoloLensExtendedTrackingManager/PoseAgeEntry>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m2410733331_gshared (KeyValuePair_2_t1053486173 * __this, TrackableIdPair_t1651355943  p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<Vuforia.VuforiaManager/TrackableIdPair,Vuforia.HoloLensExtendedTrackingManager/PoseAgeEntry>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m407979537_gshared (KeyValuePair_2_t1053486173 * __this, PoseAgeEntry_t2070329090  p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<Vuforia.VuforiaManager/TrackableIdPair,Vuforia.HoloLensExtendedTrackingManager/PoseAgeEntry>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m2867703224_gshared (KeyValuePair_2_t1053486173 * __this, TrackableIdPair_t1651355943  ___key0, PoseAgeEntry_t2070329090  ___value1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<Vuforia.VuforiaManager/TrackableIdPair,Vuforia.HoloLensExtendedTrackingManager/PoseAgeEntry>::get_Key()
extern "C"  TrackableIdPair_t1651355943  KeyValuePair_2_get_Key_m1191135648_gshared (KeyValuePair_2_t1053486173 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<Vuforia.VuforiaManager/TrackableIdPair,Vuforia.HoloLensExtendedTrackingManager/PoseAgeEntry>::get_Value()
extern "C"  PoseAgeEntry_t2070329090  KeyValuePair_2_get_Value_m1149868203_gshared (KeyValuePair_2_t1053486173 * __this, const RuntimeMethod* method);
// System.String System.Collections.Generic.KeyValuePair`2<Vuforia.VuforiaManager/TrackableIdPair,Vuforia.HoloLensExtendedTrackingManager/PoseAgeEntry>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m3715587859_gshared (KeyValuePair_2_t1053486173 * __this, const RuntimeMethod* method);

// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m2333557257(__this, p0, method) ((  void (*) (KeyValuePair_2_t2167416232 *, int32_t, const RuntimeMethod*))KeyValuePair_2_set_Key_m2333557257_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m1380155344(__this, p0, method) ((  void (*) (KeyValuePair_2_t2167416232 *, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2_set_Value_m1380155344_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m3572425317(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t2167416232 *, int32_t, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2__ctor_m3572425317_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Key()
#define KeyValuePair_2_get_Key_m2027760912(__this, method) ((  int32_t (*) (KeyValuePair_2_t2167416232 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m2027760912_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Value()
#define KeyValuePair_2_get_Value_m1332859342(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t2167416232 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m1332859342_gshared)(__this, method)
// System.String System.Int32::ToString()
extern "C"  String_t* Int32_ToString_m828178388 (int32_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String[])
extern "C"  String_t* String_Concat_m2204586567 (RuntimeObject * __this /* static, unused */, StringU5BU5D_t616564297* ___values0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::ToString()
#define KeyValuePair_2_ToString_m3512550156(__this, method) ((  String_t* (*) (KeyValuePair_2_t2167416232 *, const RuntimeMethod*))KeyValuePair_2_ToString_m3512550156_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackableBehaviour/Status>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m300076548(__this, p0, method) ((  void (*) (KeyValuePair_2_t2562706089 *, int32_t, const RuntimeMethod*))KeyValuePair_2_set_Key_m300076548_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackableBehaviour/Status>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m3445753360(__this, p0, method) ((  void (*) (KeyValuePair_2_t2562706089 *, int32_t, const RuntimeMethod*))KeyValuePair_2_set_Value_m3445753360_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackableBehaviour/Status>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m2664170502(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t2562706089 *, int32_t, int32_t, const RuntimeMethod*))KeyValuePair_2__ctor_m2664170502_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackableBehaviour/Status>::get_Key()
#define KeyValuePair_2_get_Key_m963341254(__this, method) ((  int32_t (*) (KeyValuePair_2_t2562706089 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m963341254_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackableBehaviour/Status>::get_Value()
#define KeyValuePair_2_get_Value_m2109012636(__this, method) ((  int32_t (*) (KeyValuePair_2_t2562706089 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m2109012636_gshared)(__this, method)
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackableBehaviour/Status>::ToString()
#define KeyValuePair_2_ToString_m1407072634(__this, method) ((  String_t* (*) (KeyValuePair_2_t2562706089 *, const RuntimeMethod*))KeyValuePair_2_ToString_m1407072634_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m3727651908(__this, p0, method) ((  void (*) (KeyValuePair_2_t2616991339 *, int32_t, const RuntimeMethod*))KeyValuePair_2_set_Key_m3727651908_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m1574977124(__this, p0, method) ((  void (*) (KeyValuePair_2_t2616991339 *, VirtualButtonData_t454529797 , const RuntimeMethod*))KeyValuePair_2_set_Value_m1574977124_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m1256781571(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t2616991339 *, int32_t, VirtualButtonData_t454529797 , const RuntimeMethod*))KeyValuePair_2__ctor_m1256781571_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::get_Key()
#define KeyValuePair_2_get_Key_m60011026(__this, method) ((  int32_t (*) (KeyValuePair_2_t2616991339 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m60011026_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::get_Value()
#define KeyValuePair_2_get_Value_m580840937(__this, method) ((  VirtualButtonData_t454529797  (*) (KeyValuePair_2_t2616991339 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m580840937_gshared)(__this, method)
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::ToString()
#define KeyValuePair_2_ToString_m1954330763(__this, method) ((  String_t* (*) (KeyValuePair_2_t2616991339 *, const RuntimeMethod*))KeyValuePair_2_ToString_m1954330763_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m833207785(__this, p0, method) ((  void (*) (KeyValuePair_2_t2145437879 *, IntPtr_t, const RuntimeMethod*))KeyValuePair_2_set_Key_m833207785_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m2081603763(__this, p0, method) ((  void (*) (KeyValuePair_2_t2145437879 *, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2_set_Value_m2081603763_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m3572357296(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t2145437879 *, IntPtr_t, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2__ctor_m3572357296_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::get_Key()
#define KeyValuePair_2_get_Key_m927551766(__this, method) ((  IntPtr_t (*) (KeyValuePair_2_t2145437879 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m927551766_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::get_Value()
#define KeyValuePair_2_get_Value_m3195849613(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t2145437879 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m3195849613_gshared)(__this, method)
// System.String System.IntPtr::ToString()
extern "C"  String_t* IntPtr_ToString_m2844707735 (IntPtr_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::ToString()
#define KeyValuePair_2_ToString_m1252078240(__this, method) ((  String_t* (*) (KeyValuePair_2_t2145437879 *, const RuntimeMethod*))KeyValuePair_2_ToString_m1252078240_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m1097582470(__this, p0, method) ((  void (*) (KeyValuePair_2_t2127795345 *, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2_set_Key_m1097582470_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m2412768290(__this, p0, method) ((  void (*) (KeyValuePair_2_t2127795345 *, bool, const RuntimeMethod*))KeyValuePair_2_set_Value_m2412768290_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m1033110173(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t2127795345 *, RuntimeObject *, bool, const RuntimeMethod*))KeyValuePair_2__ctor_m1033110173_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::get_Key()
#define KeyValuePair_2_get_Key_m1061960381(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t2127795345 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m1061960381_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::get_Value()
#define KeyValuePair_2_get_Value_m465714260(__this, method) ((  bool (*) (KeyValuePair_2_t2127795345 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m465714260_gshared)(__this, method)
// System.String System.Boolean::ToString()
extern "C"  String_t* Boolean_ToString_m1383552677 (bool* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::ToString()
#define KeyValuePair_2_ToString_m1582055755(__this, method) ((  String_t* (*) (KeyValuePair_2_t2127795345 *, const RuntimeMethod*))KeyValuePair_2_ToString_m1582055755_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m2364588800(__this, p0, method) ((  void (*) (KeyValuePair_2_t1697066796 *, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2_set_Key_m2364588800_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m3143178925(__this, p0, method) ((  void (*) (KeyValuePair_2_t1697066796 *, int32_t, const RuntimeMethod*))KeyValuePair_2_set_Value_m3143178925_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m1912248122(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t1697066796 *, RuntimeObject *, int32_t, const RuntimeMethod*))KeyValuePair_2__ctor_m1912248122_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::get_Key()
#define KeyValuePair_2_get_Key_m3616138842(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t1697066796 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m3616138842_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::get_Value()
#define KeyValuePair_2_get_Value_m1001976845(__this, method) ((  int32_t (*) (KeyValuePair_2_t1697066796 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m1001976845_gshared)(__this, method)
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::ToString()
#define KeyValuePair_2_ToString_m3559928212(__this, method) ((  String_t* (*) (KeyValuePair_2_t1697066796 *, const RuntimeMethod*))KeyValuePair_2_ToString_m3559928212_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m402466306(__this, p0, method) ((  void (*) (KeyValuePair_2_t3597094838 *, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2_set_Key_m402466306_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m2732515761(__this, p0, method) ((  void (*) (KeyValuePair_2_t3597094838 *, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2_set_Value_m2732515761_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m7490237(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t3597094838 *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2__ctor_m7490237_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
#define KeyValuePair_2_get_Key_m3853179282(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t3597094838 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m3853179282_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
#define KeyValuePair_2_get_Value_m4130655347(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t3597094838 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m4130655347_gshared)(__this, method)
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::ToString()
#define KeyValuePair_2_ToString_m1805888552(__this, method) ((  String_t* (*) (KeyValuePair_2_t3597094838 *, const RuntimeMethod*))KeyValuePair_2_ToString_m1805888552_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m2182934166(__this, p0, method) ((  void (*) (KeyValuePair_2_t1090996106 *, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2_set_Key_m2182934166_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m2422985794(__this, p0, method) ((  void (*) (KeyValuePair_2_t1090996106 *, uint16_t, const RuntimeMethod*))KeyValuePair_2_set_Value_m2422985794_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m2183117739(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t1090996106 *, RuntimeObject *, uint16_t, const RuntimeMethod*))KeyValuePair_2__ctor_m2183117739_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>::get_Key()
#define KeyValuePair_2_get_Key_m3785602198(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t1090996106 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m3785602198_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>::get_Value()
#define KeyValuePair_2_get_Value_m363600934(__this, method) ((  uint16_t (*) (KeyValuePair_2_t1090996106 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m363600934_gshared)(__this, method)
// System.String System.UInt16::ToString()
extern "C"  String_t* UInt16_ToString_m1146058735 (uint16_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>::ToString()
#define KeyValuePair_2_ToString_m3957531914(__this, method) ((  String_t* (*) (KeyValuePair_2_t1090996106 *, const RuntimeMethod*))KeyValuePair_2_ToString_m3957531914_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m1730256355(__this, p0, method) ((  void (*) (KeyValuePair_2_t837700584 *, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2_set_Key_m1730256355_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m2266583795(__this, p0, method) ((  void (*) (KeyValuePair_2_t837700584 *, ProfileData_t1540527732 , const RuntimeMethod*))KeyValuePair_2_set_Value_m2266583795_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m956416699(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t837700584 *, RuntimeObject *, ProfileData_t1540527732 , const RuntimeMethod*))KeyValuePair_2__ctor_m956416699_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>::get_Key()
#define KeyValuePair_2_get_Key_m4102351182(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t837700584 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m4102351182_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>::get_Value()
#define KeyValuePair_2_get_Value_m554734539(__this, method) ((  ProfileData_t1540527732  (*) (KeyValuePair_2_t837700584 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m554734539_gshared)(__this, method)
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>::ToString()
#define KeyValuePair_2_ToString_m3225744020(__this, method) ((  String_t* (*) (KeyValuePair_2_t837700584 *, const RuntimeMethod*))KeyValuePair_2_ToString_m3225744020_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m1576423706(__this, p0, method) ((  void (*) (KeyValuePair_2_t3251947431 *, int32_t, const RuntimeMethod*))KeyValuePair_2_set_Key_m1576423706_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m801296788(__this, p0, method) ((  void (*) (KeyValuePair_2_t3251947431 *, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2_set_Value_m801296788_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m3303824572(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t3251947431 *, int32_t, RuntimeObject *, const RuntimeMethod*))KeyValuePair_2__ctor_m3303824572_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::get_Key()
#define KeyValuePair_2_get_Key_m912665991(__this, method) ((  int32_t (*) (KeyValuePair_2_t3251947431 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m912665991_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::get_Value()
#define KeyValuePair_2_get_Value_m3435123857(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t3251947431 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m3435123857_gshared)(__this, method)
// System.String System.Collections.Generic.KeyValuePair`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::ToString()
#define KeyValuePair_2_ToString_m422623202(__this, method) ((  String_t* (*) (KeyValuePair_2_t3251947431 *, const RuntimeMethod*))KeyValuePair_2_ToString_m422623202_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<Vuforia.VuforiaManager/TrackableIdPair,Vuforia.HoloLensExtendedTrackingManager/PoseAgeEntry>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m2410733331(__this, p0, method) ((  void (*) (KeyValuePair_2_t1053486173 *, TrackableIdPair_t1651355943 , const RuntimeMethod*))KeyValuePair_2_set_Key_m2410733331_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<Vuforia.VuforiaManager/TrackableIdPair,Vuforia.HoloLensExtendedTrackingManager/PoseAgeEntry>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m407979537(__this, p0, method) ((  void (*) (KeyValuePair_2_t1053486173 *, PoseAgeEntry_t2070329090 , const RuntimeMethod*))KeyValuePair_2_set_Value_m407979537_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<Vuforia.VuforiaManager/TrackableIdPair,Vuforia.HoloLensExtendedTrackingManager/PoseAgeEntry>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m2867703224(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t1053486173 *, TrackableIdPair_t1651355943 , PoseAgeEntry_t2070329090 , const RuntimeMethod*))KeyValuePair_2__ctor_m2867703224_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<Vuforia.VuforiaManager/TrackableIdPair,Vuforia.HoloLensExtendedTrackingManager/PoseAgeEntry>::get_Key()
#define KeyValuePair_2_get_Key_m1191135648(__this, method) ((  TrackableIdPair_t1651355943  (*) (KeyValuePair_2_t1053486173 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m1191135648_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<Vuforia.VuforiaManager/TrackableIdPair,Vuforia.HoloLensExtendedTrackingManager/PoseAgeEntry>::get_Value()
#define KeyValuePair_2_get_Value_m1149868203(__this, method) ((  PoseAgeEntry_t2070329090  (*) (KeyValuePair_2_t1053486173 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m1149868203_gshared)(__this, method)
// System.String System.Collections.Generic.KeyValuePair`2<Vuforia.VuforiaManager/TrackableIdPair,Vuforia.HoloLensExtendedTrackingManager/PoseAgeEntry>::ToString()
#define KeyValuePair_2_ToString_m3715587859(__this, method) ((  String_t* (*) (KeyValuePair_2_t1053486173 *, const RuntimeMethod*))KeyValuePair_2_ToString_m3715587859_gshared)(__this, method)
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m3572425317_gshared (KeyValuePair_2_t2167416232 * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___key0;
		KeyValuePair_2_set_Key_m2333557257((KeyValuePair_2_t2167416232 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		RuntimeObject * L_1 = ___value1;
		KeyValuePair_2_set_Value_m1380155344((KeyValuePair_2_t2167416232 *)__this, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m3572425317_AdjustorThunk (RuntimeObject * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t2167416232 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2167416232 *>(__this + 1);
	KeyValuePair_2__ctor_m3572425317(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m2027760912_gshared (KeyValuePair_2_t2167416232 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_key_0();
		return L_0;
	}
}
extern "C"  int32_t KeyValuePair_2_get_Key_m2027760912_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t2167416232 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2167416232 *>(__this + 1);
	return KeyValuePair_2_get_Key_m2027760912(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m2333557257_gshared (KeyValuePair_2_t2167416232 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m2333557257_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t2167416232 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2167416232 *>(__this + 1);
	KeyValuePair_2_set_Key_m2333557257(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m1332859342_gshared (KeyValuePair_2_t2167416232 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return L_0;
	}
}
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m1332859342_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t2167416232 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2167416232 *>(__this + 1);
	return KeyValuePair_2_get_Value_m1332859342(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m1380155344_gshared (KeyValuePair_2_t2167416232 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m1380155344_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t2167416232 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2167416232 *>(__this + 1);
	KeyValuePair_2_set_Value_m1380155344(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m3512550156_gshared (KeyValuePair_2_t2167416232 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m3512550156_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t616564297* G_B2_1 = NULL;
	StringU5BU5D_t616564297* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t616564297* G_B1_1 = NULL;
	StringU5BU5D_t616564297* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t616564297* G_B3_2 = NULL;
	StringU5BU5D_t616564297* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t616564297* G_B5_1 = NULL;
	StringU5BU5D_t616564297* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t616564297* G_B4_1 = NULL;
	StringU5BU5D_t616564297* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t616564297* G_B6_2 = NULL;
	StringU5BU5D_t616564297* G_B6_3 = NULL;
	{
		StringU5BU5D_t616564297* L_0 = (StringU5BU5D_t616564297*)((StringU5BU5D_t616564297*)SZArrayNew(StringU5BU5D_t616564297_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral628932642);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral628932642);
		StringU5BU5D_t616564297* L_1 = (StringU5BU5D_t616564297*)L_0;
		int32_t L_2 = KeyValuePair_2_get_Key_m2027760912((KeyValuePair_2_t2167416232 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
	}
	{
		int32_t L_3 = KeyValuePair_2_get_Key_m2027760912((KeyValuePair_2_t2167416232 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (int32_t)L_3;
		String_t* L_4 = Int32_ToString_m828178388((int32_t*)(&V_0), /*hidden argument*/NULL);
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
		StringU5BU5D_t616564297* L_6 = (StringU5BU5D_t616564297*)G_B3_3;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral421113991);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral421113991);
		StringU5BU5D_t616564297* L_7 = (StringU5BU5D_t616564297*)L_6;
		RuntimeObject * L_8 = KeyValuePair_2_get_Value_m1332859342((KeyValuePair_2_t2167416232 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
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
		RuntimeObject * L_9 = KeyValuePair_2_get_Value_m1332859342((KeyValuePair_2_t2167416232 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
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
		StringU5BU5D_t616564297* L_12 = (StringU5BU5D_t616564297*)G_B6_3;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral1561315052);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral1561315052);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m2204586567(NULL /*static, unused*/, (StringU5BU5D_t616564297*)L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m3512550156_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t2167416232 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2167416232 *>(__this + 1);
	return KeyValuePair_2_ToString_m3512550156(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackableBehaviour/Status>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m2664170502_gshared (KeyValuePair_2_t2562706089 * __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___key0;
		KeyValuePair_2_set_Key_m300076548((KeyValuePair_2_t2562706089 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_1 = ___value1;
		KeyValuePair_2_set_Value_m3445753360((KeyValuePair_2_t2562706089 *)__this, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m2664170502_AdjustorThunk (RuntimeObject * __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t2562706089 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2562706089 *>(__this + 1);
	KeyValuePair_2__ctor_m2664170502(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackableBehaviour/Status>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m963341254_gshared (KeyValuePair_2_t2562706089 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_key_0();
		return L_0;
	}
}
extern "C"  int32_t KeyValuePair_2_get_Key_m963341254_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t2562706089 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2562706089 *>(__this + 1);
	return KeyValuePair_2_get_Key_m963341254(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackableBehaviour/Status>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m300076548_gshared (KeyValuePair_2_t2562706089 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m300076548_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t2562706089 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2562706089 *>(__this + 1);
	KeyValuePair_2_set_Key_m300076548(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackableBehaviour/Status>::get_Value()
extern "C"  int32_t KeyValuePair_2_get_Value_m2109012636_gshared (KeyValuePair_2_t2562706089 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_value_1();
		return L_0;
	}
}
extern "C"  int32_t KeyValuePair_2_get_Value_m2109012636_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t2562706089 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2562706089 *>(__this + 1);
	return KeyValuePair_2_get_Value_m2109012636(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackableBehaviour/Status>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m3445753360_gshared (KeyValuePair_2_t2562706089 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m3445753360_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t2562706089 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2562706089 *>(__this + 1);
	KeyValuePair_2_set_Value_m3445753360(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.TrackableBehaviour/Status>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m1407072634_gshared (KeyValuePair_2_t2562706089 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m1407072634_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t616564297* G_B2_1 = NULL;
	StringU5BU5D_t616564297* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t616564297* G_B1_1 = NULL;
	StringU5BU5D_t616564297* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t616564297* G_B3_2 = NULL;
	StringU5BU5D_t616564297* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t616564297* G_B5_1 = NULL;
	StringU5BU5D_t616564297* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t616564297* G_B4_1 = NULL;
	StringU5BU5D_t616564297* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t616564297* G_B6_2 = NULL;
	StringU5BU5D_t616564297* G_B6_3 = NULL;
	{
		StringU5BU5D_t616564297* L_0 = (StringU5BU5D_t616564297*)((StringU5BU5D_t616564297*)SZArrayNew(StringU5BU5D_t616564297_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral628932642);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral628932642);
		StringU5BU5D_t616564297* L_1 = (StringU5BU5D_t616564297*)L_0;
		int32_t L_2 = KeyValuePair_2_get_Key_m963341254((KeyValuePair_2_t2562706089 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
	}
	{
		int32_t L_3 = KeyValuePair_2_get_Key_m963341254((KeyValuePair_2_t2562706089 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (int32_t)L_3;
		String_t* L_4 = Int32_ToString_m828178388((int32_t*)(&V_0), /*hidden argument*/NULL);
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
		StringU5BU5D_t616564297* L_6 = (StringU5BU5D_t616564297*)G_B3_3;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral421113991);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral421113991);
		StringU5BU5D_t616564297* L_7 = (StringU5BU5D_t616564297*)L_6;
		int32_t L_8 = KeyValuePair_2_get_Value_m2109012636((KeyValuePair_2_t2562706089 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		G_B4_0 = 3;
		G_B4_1 = L_7;
		G_B4_2 = L_7;
	}
	{
		int32_t L_9 = KeyValuePair_2_get_Value_m2109012636((KeyValuePair_2_t2562706089 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
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
		StringU5BU5D_t616564297* L_13 = (StringU5BU5D_t616564297*)G_B6_3;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteral1561315052);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral1561315052);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = String_Concat_m2204586567(NULL /*static, unused*/, (StringU5BU5D_t616564297*)L_13, /*hidden argument*/NULL);
		return L_14;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m1407072634_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t2562706089 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2562706089 *>(__this + 1);
	return KeyValuePair_2_ToString_m1407072634(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m1256781571_gshared (KeyValuePair_2_t2616991339 * __this, int32_t ___key0, VirtualButtonData_t454529797  ___value1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___key0;
		KeyValuePair_2_set_Key_m3727651908((KeyValuePair_2_t2616991339 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		VirtualButtonData_t454529797  L_1 = ___value1;
		KeyValuePair_2_set_Value_m1574977124((KeyValuePair_2_t2616991339 *)__this, (VirtualButtonData_t454529797 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m1256781571_AdjustorThunk (RuntimeObject * __this, int32_t ___key0, VirtualButtonData_t454529797  ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t2616991339 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2616991339 *>(__this + 1);
	KeyValuePair_2__ctor_m1256781571(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m60011026_gshared (KeyValuePair_2_t2616991339 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_key_0();
		return L_0;
	}
}
extern "C"  int32_t KeyValuePair_2_get_Key_m60011026_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t2616991339 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2616991339 *>(__this + 1);
	return KeyValuePair_2_get_Key_m60011026(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m3727651908_gshared (KeyValuePair_2_t2616991339 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m3727651908_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t2616991339 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2616991339 *>(__this + 1);
	KeyValuePair_2_set_Key_m3727651908(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::get_Value()
extern "C"  VirtualButtonData_t454529797  KeyValuePair_2_get_Value_m580840937_gshared (KeyValuePair_2_t2616991339 * __this, const RuntimeMethod* method)
{
	{
		VirtualButtonData_t454529797  L_0 = (VirtualButtonData_t454529797 )__this->get_value_1();
		return L_0;
	}
}
extern "C"  VirtualButtonData_t454529797  KeyValuePair_2_get_Value_m580840937_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t2616991339 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2616991339 *>(__this + 1);
	return KeyValuePair_2_get_Value_m580840937(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m1574977124_gshared (KeyValuePair_2_t2616991339 * __this, VirtualButtonData_t454529797  ___value0, const RuntimeMethod* method)
{
	{
		VirtualButtonData_t454529797  L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m1574977124_AdjustorThunk (RuntimeObject * __this, VirtualButtonData_t454529797  ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t2616991339 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2616991339 *>(__this + 1);
	KeyValuePair_2_set_Value_m1574977124(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.VuforiaManagerImpl/VirtualButtonData>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m1954330763_gshared (KeyValuePair_2_t2616991339 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m1954330763_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	VirtualButtonData_t454529797  V_1;
	memset(&V_1, 0, sizeof(V_1));
	int32_t G_B2_0 = 0;
	StringU5BU5D_t616564297* G_B2_1 = NULL;
	StringU5BU5D_t616564297* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t616564297* G_B1_1 = NULL;
	StringU5BU5D_t616564297* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t616564297* G_B3_2 = NULL;
	StringU5BU5D_t616564297* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t616564297* G_B5_1 = NULL;
	StringU5BU5D_t616564297* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t616564297* G_B4_1 = NULL;
	StringU5BU5D_t616564297* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t616564297* G_B6_2 = NULL;
	StringU5BU5D_t616564297* G_B6_3 = NULL;
	{
		StringU5BU5D_t616564297* L_0 = (StringU5BU5D_t616564297*)((StringU5BU5D_t616564297*)SZArrayNew(StringU5BU5D_t616564297_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral628932642);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral628932642);
		StringU5BU5D_t616564297* L_1 = (StringU5BU5D_t616564297*)L_0;
		int32_t L_2 = KeyValuePair_2_get_Key_m60011026((KeyValuePair_2_t2616991339 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
	}
	{
		int32_t L_3 = KeyValuePair_2_get_Key_m60011026((KeyValuePair_2_t2616991339 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (int32_t)L_3;
		String_t* L_4 = Int32_ToString_m828178388((int32_t*)(&V_0), /*hidden argument*/NULL);
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
		StringU5BU5D_t616564297* L_6 = (StringU5BU5D_t616564297*)G_B3_3;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral421113991);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral421113991);
		StringU5BU5D_t616564297* L_7 = (StringU5BU5D_t616564297*)L_6;
		VirtualButtonData_t454529797  L_8 = KeyValuePair_2_get_Value_m580840937((KeyValuePair_2_t2616991339 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		G_B4_0 = 3;
		G_B4_1 = L_7;
		G_B4_2 = L_7;
	}
	{
		VirtualButtonData_t454529797  L_9 = KeyValuePair_2_get_Value_m580840937((KeyValuePair_2_t2616991339 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (VirtualButtonData_t454529797 )L_9;
		RuntimeObject * L_10 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (&V_1));
		NullCheck((RuntimeObject *)L_10);
		String_t* L_11 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_10);
		*(&V_1) = *(VirtualButtonData_t454529797 *)UnBox(L_10);
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
		StringU5BU5D_t616564297* L_13 = (StringU5BU5D_t616564297*)G_B6_3;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteral1561315052);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral1561315052);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = String_Concat_m2204586567(NULL /*static, unused*/, (StringU5BU5D_t616564297*)L_13, /*hidden argument*/NULL);
		return L_14;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m1954330763_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t2616991339 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2616991339 *>(__this + 1);
	return KeyValuePair_2_ToString_m1954330763(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m3572357296_gshared (KeyValuePair_2_t2145437879 * __this, IntPtr_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___key0;
		KeyValuePair_2_set_Key_m833207785((KeyValuePair_2_t2145437879 *)__this, (IntPtr_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		RuntimeObject * L_1 = ___value1;
		KeyValuePair_2_set_Value_m2081603763((KeyValuePair_2_t2145437879 *)__this, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m3572357296_AdjustorThunk (RuntimeObject * __this, IntPtr_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t2145437879 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2145437879 *>(__this + 1);
	KeyValuePair_2__ctor_m3572357296(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::get_Key()
extern "C"  IntPtr_t KeyValuePair_2_get_Key_m927551766_gshared (KeyValuePair_2_t2145437879 * __this, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = (IntPtr_t)__this->get_key_0();
		return L_0;
	}
}
extern "C"  IntPtr_t KeyValuePair_2_get_Key_m927551766_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t2145437879 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2145437879 *>(__this + 1);
	return KeyValuePair_2_get_Key_m927551766(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m833207785_gshared (KeyValuePair_2_t2145437879 * __this, IntPtr_t ___value0, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m833207785_AdjustorThunk (RuntimeObject * __this, IntPtr_t ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t2145437879 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2145437879 *>(__this + 1);
	KeyValuePair_2_set_Key_m833207785(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m3195849613_gshared (KeyValuePair_2_t2145437879 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return L_0;
	}
}
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m3195849613_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t2145437879 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2145437879 *>(__this + 1);
	return KeyValuePair_2_get_Value_m3195849613(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m2081603763_gshared (KeyValuePair_2_t2145437879 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m2081603763_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t2145437879 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2145437879 *>(__this + 1);
	KeyValuePair_2_set_Value_m2081603763(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.IntPtr,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m1252078240_gshared (KeyValuePair_2_t2145437879 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m1252078240_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IntPtr_t V_0;
	memset(&V_0, 0, sizeof(V_0));
	RuntimeObject * V_1 = NULL;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t616564297* G_B2_1 = NULL;
	StringU5BU5D_t616564297* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t616564297* G_B1_1 = NULL;
	StringU5BU5D_t616564297* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t616564297* G_B3_2 = NULL;
	StringU5BU5D_t616564297* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t616564297* G_B5_1 = NULL;
	StringU5BU5D_t616564297* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t616564297* G_B4_1 = NULL;
	StringU5BU5D_t616564297* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t616564297* G_B6_2 = NULL;
	StringU5BU5D_t616564297* G_B6_3 = NULL;
	{
		StringU5BU5D_t616564297* L_0 = (StringU5BU5D_t616564297*)((StringU5BU5D_t616564297*)SZArrayNew(StringU5BU5D_t616564297_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral628932642);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral628932642);
		StringU5BU5D_t616564297* L_1 = (StringU5BU5D_t616564297*)L_0;
		IntPtr_t L_2 = KeyValuePair_2_get_Key_m927551766((KeyValuePair_2_t2145437879 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
	}
	{
		IntPtr_t L_3 = KeyValuePair_2_get_Key_m927551766((KeyValuePair_2_t2145437879 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (IntPtr_t)L_3;
		String_t* L_4 = IntPtr_ToString_m2844707735((IntPtr_t*)(&V_0), /*hidden argument*/NULL);
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
		StringU5BU5D_t616564297* L_6 = (StringU5BU5D_t616564297*)G_B3_3;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral421113991);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral421113991);
		StringU5BU5D_t616564297* L_7 = (StringU5BU5D_t616564297*)L_6;
		RuntimeObject * L_8 = KeyValuePair_2_get_Value_m3195849613((KeyValuePair_2_t2145437879 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
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
		RuntimeObject * L_9 = KeyValuePair_2_get_Value_m3195849613((KeyValuePair_2_t2145437879 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
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
		StringU5BU5D_t616564297* L_12 = (StringU5BU5D_t616564297*)G_B6_3;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral1561315052);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral1561315052);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m2204586567(NULL /*static, unused*/, (StringU5BU5D_t616564297*)L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m1252078240_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t2145437879 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2145437879 *>(__this + 1);
	return KeyValuePair_2_ToString_m1252078240(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m1033110173_gshared (KeyValuePair_2_t2127795345 * __this, RuntimeObject * ___key0, bool ___value1, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___key0;
		KeyValuePair_2_set_Key_m1097582470((KeyValuePair_2_t2127795345 *)__this, (RuntimeObject *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		bool L_1 = ___value1;
		KeyValuePair_2_set_Value_m2412768290((KeyValuePair_2_t2127795345 *)__this, (bool)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m1033110173_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___key0, bool ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t2127795345 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2127795345 *>(__this + 1);
	KeyValuePair_2__ctor_m1033110173(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::get_Key()
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m1061960381_gshared (KeyValuePair_2_t2127795345 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return L_0;
	}
}
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m1061960381_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t2127795345 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2127795345 *>(__this + 1);
	return KeyValuePair_2_get_Key_m1061960381(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m1097582470_gshared (KeyValuePair_2_t2127795345 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m1097582470_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t2127795345 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2127795345 *>(__this + 1);
	KeyValuePair_2_set_Key_m1097582470(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::get_Value()
extern "C"  bool KeyValuePair_2_get_Value_m465714260_gshared (KeyValuePair_2_t2127795345 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_value_1();
		return L_0;
	}
}
extern "C"  bool KeyValuePair_2_get_Value_m465714260_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t2127795345 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2127795345 *>(__this + 1);
	return KeyValuePair_2_get_Value_m465714260(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m2412768290_gshared (KeyValuePair_2_t2127795345 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m2412768290_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t2127795345 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2127795345 *>(__this + 1);
	KeyValuePair_2_set_Value_m2412768290(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m1582055755_gshared (KeyValuePair_2_t2127795345 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m1582055755_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t616564297* G_B2_1 = NULL;
	StringU5BU5D_t616564297* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t616564297* G_B1_1 = NULL;
	StringU5BU5D_t616564297* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t616564297* G_B3_2 = NULL;
	StringU5BU5D_t616564297* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t616564297* G_B5_1 = NULL;
	StringU5BU5D_t616564297* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t616564297* G_B4_1 = NULL;
	StringU5BU5D_t616564297* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t616564297* G_B6_2 = NULL;
	StringU5BU5D_t616564297* G_B6_3 = NULL;
	{
		StringU5BU5D_t616564297* L_0 = (StringU5BU5D_t616564297*)((StringU5BU5D_t616564297*)SZArrayNew(StringU5BU5D_t616564297_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral628932642);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral628932642);
		StringU5BU5D_t616564297* L_1 = (StringU5BU5D_t616564297*)L_0;
		RuntimeObject * L_2 = KeyValuePair_2_get_Key_m1061960381((KeyValuePair_2_t2127795345 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
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
		RuntimeObject * L_3 = KeyValuePair_2_get_Key_m1061960381((KeyValuePair_2_t2127795345 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
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
		StringU5BU5D_t616564297* L_6 = (StringU5BU5D_t616564297*)G_B3_3;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral421113991);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral421113991);
		StringU5BU5D_t616564297* L_7 = (StringU5BU5D_t616564297*)L_6;
		bool L_8 = KeyValuePair_2_get_Value_m465714260((KeyValuePair_2_t2127795345 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		G_B4_0 = 3;
		G_B4_1 = L_7;
		G_B4_2 = L_7;
	}
	{
		bool L_9 = KeyValuePair_2_get_Value_m465714260((KeyValuePair_2_t2127795345 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (bool)L_9;
		String_t* L_10 = Boolean_ToString_m1383552677((bool*)(&V_1), /*hidden argument*/NULL);
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
		StringU5BU5D_t616564297* L_12 = (StringU5BU5D_t616564297*)G_B6_3;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral1561315052);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral1561315052);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m2204586567(NULL /*static, unused*/, (StringU5BU5D_t616564297*)L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m1582055755_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t2127795345 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2127795345 *>(__this + 1);
	return KeyValuePair_2_ToString_m1582055755(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m1912248122_gshared (KeyValuePair_2_t1697066796 * __this, RuntimeObject * ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___key0;
		KeyValuePair_2_set_Key_m2364588800((KeyValuePair_2_t1697066796 *)__this, (RuntimeObject *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_1 = ___value1;
		KeyValuePair_2_set_Value_m3143178925((KeyValuePair_2_t1697066796 *)__this, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m1912248122_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t1697066796 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1697066796 *>(__this + 1);
	KeyValuePair_2__ctor_m1912248122(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::get_Key()
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m3616138842_gshared (KeyValuePair_2_t1697066796 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return L_0;
	}
}
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m3616138842_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t1697066796 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1697066796 *>(__this + 1);
	return KeyValuePair_2_get_Key_m3616138842(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m2364588800_gshared (KeyValuePair_2_t1697066796 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m2364588800_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t1697066796 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1697066796 *>(__this + 1);
	KeyValuePair_2_set_Key_m2364588800(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::get_Value()
extern "C"  int32_t KeyValuePair_2_get_Value_m1001976845_gshared (KeyValuePair_2_t1697066796 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_value_1();
		return L_0;
	}
}
extern "C"  int32_t KeyValuePair_2_get_Value_m1001976845_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t1697066796 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1697066796 *>(__this + 1);
	return KeyValuePair_2_get_Value_m1001976845(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m3143178925_gshared (KeyValuePair_2_t1697066796 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m3143178925_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t1697066796 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1697066796 *>(__this + 1);
	KeyValuePair_2_set_Value_m3143178925(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m3559928212_gshared (KeyValuePair_2_t1697066796 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m3559928212_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t616564297* G_B2_1 = NULL;
	StringU5BU5D_t616564297* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t616564297* G_B1_1 = NULL;
	StringU5BU5D_t616564297* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t616564297* G_B3_2 = NULL;
	StringU5BU5D_t616564297* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t616564297* G_B5_1 = NULL;
	StringU5BU5D_t616564297* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t616564297* G_B4_1 = NULL;
	StringU5BU5D_t616564297* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t616564297* G_B6_2 = NULL;
	StringU5BU5D_t616564297* G_B6_3 = NULL;
	{
		StringU5BU5D_t616564297* L_0 = (StringU5BU5D_t616564297*)((StringU5BU5D_t616564297*)SZArrayNew(StringU5BU5D_t616564297_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral628932642);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral628932642);
		StringU5BU5D_t616564297* L_1 = (StringU5BU5D_t616564297*)L_0;
		RuntimeObject * L_2 = KeyValuePair_2_get_Key_m3616138842((KeyValuePair_2_t1697066796 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
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
		RuntimeObject * L_3 = KeyValuePair_2_get_Key_m3616138842((KeyValuePair_2_t1697066796 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
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
		StringU5BU5D_t616564297* L_6 = (StringU5BU5D_t616564297*)G_B3_3;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral421113991);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral421113991);
		StringU5BU5D_t616564297* L_7 = (StringU5BU5D_t616564297*)L_6;
		int32_t L_8 = KeyValuePair_2_get_Value_m1001976845((KeyValuePair_2_t1697066796 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		G_B4_0 = 3;
		G_B4_1 = L_7;
		G_B4_2 = L_7;
	}
	{
		int32_t L_9 = KeyValuePair_2_get_Value_m1001976845((KeyValuePair_2_t1697066796 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (int32_t)L_9;
		String_t* L_10 = Int32_ToString_m828178388((int32_t*)(&V_1), /*hidden argument*/NULL);
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
		StringU5BU5D_t616564297* L_12 = (StringU5BU5D_t616564297*)G_B6_3;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral1561315052);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral1561315052);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m2204586567(NULL /*static, unused*/, (StringU5BU5D_t616564297*)L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m3559928212_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t1697066796 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1697066796 *>(__this + 1);
	return KeyValuePair_2_ToString_m3559928212(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m7490237_gshared (KeyValuePair_2_t3597094838 * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___key0;
		KeyValuePair_2_set_Key_m402466306((KeyValuePair_2_t3597094838 *)__this, (RuntimeObject *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		RuntimeObject * L_1 = ___value1;
		KeyValuePair_2_set_Value_m2732515761((KeyValuePair_2_t3597094838 *)__this, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m7490237_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t3597094838 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3597094838 *>(__this + 1);
	KeyValuePair_2__ctor_m7490237(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m3853179282_gshared (KeyValuePair_2_t3597094838 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return L_0;
	}
}
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m3853179282_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t3597094838 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3597094838 *>(__this + 1);
	return KeyValuePair_2_get_Key_m3853179282(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m402466306_gshared (KeyValuePair_2_t3597094838 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m402466306_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t3597094838 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3597094838 *>(__this + 1);
	KeyValuePair_2_set_Key_m402466306(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m4130655347_gshared (KeyValuePair_2_t3597094838 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return L_0;
	}
}
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m4130655347_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t3597094838 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3597094838 *>(__this + 1);
	return KeyValuePair_2_get_Value_m4130655347(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m2732515761_gshared (KeyValuePair_2_t3597094838 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m2732515761_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t3597094838 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3597094838 *>(__this + 1);
	KeyValuePair_2_set_Value_m2732515761(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m1805888552_gshared (KeyValuePair_2_t3597094838 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m1805888552_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t616564297* G_B2_1 = NULL;
	StringU5BU5D_t616564297* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t616564297* G_B1_1 = NULL;
	StringU5BU5D_t616564297* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t616564297* G_B3_2 = NULL;
	StringU5BU5D_t616564297* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t616564297* G_B5_1 = NULL;
	StringU5BU5D_t616564297* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t616564297* G_B4_1 = NULL;
	StringU5BU5D_t616564297* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t616564297* G_B6_2 = NULL;
	StringU5BU5D_t616564297* G_B6_3 = NULL;
	{
		StringU5BU5D_t616564297* L_0 = (StringU5BU5D_t616564297*)((StringU5BU5D_t616564297*)SZArrayNew(StringU5BU5D_t616564297_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral628932642);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral628932642);
		StringU5BU5D_t616564297* L_1 = (StringU5BU5D_t616564297*)L_0;
		RuntimeObject * L_2 = KeyValuePair_2_get_Key_m3853179282((KeyValuePair_2_t3597094838 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
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
		RuntimeObject * L_3 = KeyValuePair_2_get_Key_m3853179282((KeyValuePair_2_t3597094838 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
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
		StringU5BU5D_t616564297* L_6 = (StringU5BU5D_t616564297*)G_B3_3;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral421113991);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral421113991);
		StringU5BU5D_t616564297* L_7 = (StringU5BU5D_t616564297*)L_6;
		RuntimeObject * L_8 = KeyValuePair_2_get_Value_m4130655347((KeyValuePair_2_t3597094838 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
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
		RuntimeObject * L_9 = KeyValuePair_2_get_Value_m4130655347((KeyValuePair_2_t3597094838 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
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
		StringU5BU5D_t616564297* L_12 = (StringU5BU5D_t616564297*)G_B6_3;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral1561315052);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral1561315052);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m2204586567(NULL /*static, unused*/, (StringU5BU5D_t616564297*)L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m1805888552_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t3597094838 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3597094838 *>(__this + 1);
	return KeyValuePair_2_ToString_m1805888552(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m2183117739_gshared (KeyValuePair_2_t1090996106 * __this, RuntimeObject * ___key0, uint16_t ___value1, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___key0;
		KeyValuePair_2_set_Key_m2182934166((KeyValuePair_2_t1090996106 *)__this, (RuntimeObject *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		uint16_t L_1 = ___value1;
		KeyValuePair_2_set_Value_m2422985794((KeyValuePair_2_t1090996106 *)__this, (uint16_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m2183117739_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___key0, uint16_t ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t1090996106 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1090996106 *>(__this + 1);
	KeyValuePair_2__ctor_m2183117739(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>::get_Key()
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m3785602198_gshared (KeyValuePair_2_t1090996106 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return L_0;
	}
}
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m3785602198_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t1090996106 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1090996106 *>(__this + 1);
	return KeyValuePair_2_get_Key_m3785602198(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m2182934166_gshared (KeyValuePair_2_t1090996106 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m2182934166_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t1090996106 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1090996106 *>(__this + 1);
	KeyValuePair_2_set_Key_m2182934166(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>::get_Value()
extern "C"  uint16_t KeyValuePair_2_get_Value_m363600934_gshared (KeyValuePair_2_t1090996106 * __this, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = (uint16_t)__this->get_value_1();
		return L_0;
	}
}
extern "C"  uint16_t KeyValuePair_2_get_Value_m363600934_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t1090996106 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1090996106 *>(__this + 1);
	return KeyValuePair_2_get_Value_m363600934(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m2422985794_gshared (KeyValuePair_2_t1090996106 * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m2422985794_AdjustorThunk (RuntimeObject * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t1090996106 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1090996106 *>(__this + 1);
	KeyValuePair_2_set_Value_m2422985794(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m3957531914_gshared (KeyValuePair_2_t1090996106 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m3957531914_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	uint16_t V_1 = 0;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t616564297* G_B2_1 = NULL;
	StringU5BU5D_t616564297* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t616564297* G_B1_1 = NULL;
	StringU5BU5D_t616564297* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t616564297* G_B3_2 = NULL;
	StringU5BU5D_t616564297* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t616564297* G_B5_1 = NULL;
	StringU5BU5D_t616564297* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t616564297* G_B4_1 = NULL;
	StringU5BU5D_t616564297* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t616564297* G_B6_2 = NULL;
	StringU5BU5D_t616564297* G_B6_3 = NULL;
	{
		StringU5BU5D_t616564297* L_0 = (StringU5BU5D_t616564297*)((StringU5BU5D_t616564297*)SZArrayNew(StringU5BU5D_t616564297_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral628932642);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral628932642);
		StringU5BU5D_t616564297* L_1 = (StringU5BU5D_t616564297*)L_0;
		RuntimeObject * L_2 = KeyValuePair_2_get_Key_m3785602198((KeyValuePair_2_t1090996106 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
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
		RuntimeObject * L_3 = KeyValuePair_2_get_Key_m3785602198((KeyValuePair_2_t1090996106 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
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
		StringU5BU5D_t616564297* L_6 = (StringU5BU5D_t616564297*)G_B3_3;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral421113991);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral421113991);
		StringU5BU5D_t616564297* L_7 = (StringU5BU5D_t616564297*)L_6;
		uint16_t L_8 = KeyValuePair_2_get_Value_m363600934((KeyValuePair_2_t1090996106 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		G_B4_0 = 3;
		G_B4_1 = L_7;
		G_B4_2 = L_7;
	}
	{
		uint16_t L_9 = KeyValuePair_2_get_Value_m363600934((KeyValuePair_2_t1090996106 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (uint16_t)L_9;
		String_t* L_10 = UInt16_ToString_m1146058735((uint16_t*)(&V_1), /*hidden argument*/NULL);
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
		StringU5BU5D_t616564297* L_12 = (StringU5BU5D_t616564297*)G_B6_3;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral1561315052);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral1561315052);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m2204586567(NULL /*static, unused*/, (StringU5BU5D_t616564297*)L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m3957531914_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t1090996106 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1090996106 *>(__this + 1);
	return KeyValuePair_2_ToString_m3957531914(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m956416699_gshared (KeyValuePair_2_t837700584 * __this, RuntimeObject * ___key0, ProfileData_t1540527732  ___value1, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___key0;
		KeyValuePair_2_set_Key_m1730256355((KeyValuePair_2_t837700584 *)__this, (RuntimeObject *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		ProfileData_t1540527732  L_1 = ___value1;
		KeyValuePair_2_set_Value_m2266583795((KeyValuePair_2_t837700584 *)__this, (ProfileData_t1540527732 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m956416699_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___key0, ProfileData_t1540527732  ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t837700584 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t837700584 *>(__this + 1);
	KeyValuePair_2__ctor_m956416699(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>::get_Key()
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m4102351182_gshared (KeyValuePair_2_t837700584 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return L_0;
	}
}
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m4102351182_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t837700584 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t837700584 *>(__this + 1);
	return KeyValuePair_2_get_Key_m4102351182(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m1730256355_gshared (KeyValuePair_2_t837700584 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m1730256355_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t837700584 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t837700584 *>(__this + 1);
	KeyValuePair_2_set_Key_m1730256355(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>::get_Value()
extern "C"  ProfileData_t1540527732  KeyValuePair_2_get_Value_m554734539_gshared (KeyValuePair_2_t837700584 * __this, const RuntimeMethod* method)
{
	{
		ProfileData_t1540527732  L_0 = (ProfileData_t1540527732 )__this->get_value_1();
		return L_0;
	}
}
extern "C"  ProfileData_t1540527732  KeyValuePair_2_get_Value_m554734539_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t837700584 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t837700584 *>(__this + 1);
	return KeyValuePair_2_get_Value_m554734539(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m2266583795_gshared (KeyValuePair_2_t837700584 * __this, ProfileData_t1540527732  ___value0, const RuntimeMethod* method)
{
	{
		ProfileData_t1540527732  L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m2266583795_AdjustorThunk (RuntimeObject * __this, ProfileData_t1540527732  ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t837700584 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t837700584 *>(__this + 1);
	KeyValuePair_2_set_Value_m2266583795(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m3225744020_gshared (KeyValuePair_2_t837700584 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m3225744020_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	ProfileData_t1540527732  V_1;
	memset(&V_1, 0, sizeof(V_1));
	int32_t G_B2_0 = 0;
	StringU5BU5D_t616564297* G_B2_1 = NULL;
	StringU5BU5D_t616564297* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t616564297* G_B1_1 = NULL;
	StringU5BU5D_t616564297* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t616564297* G_B3_2 = NULL;
	StringU5BU5D_t616564297* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t616564297* G_B5_1 = NULL;
	StringU5BU5D_t616564297* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t616564297* G_B4_1 = NULL;
	StringU5BU5D_t616564297* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t616564297* G_B6_2 = NULL;
	StringU5BU5D_t616564297* G_B6_3 = NULL;
	{
		StringU5BU5D_t616564297* L_0 = (StringU5BU5D_t616564297*)((StringU5BU5D_t616564297*)SZArrayNew(StringU5BU5D_t616564297_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral628932642);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral628932642);
		StringU5BU5D_t616564297* L_1 = (StringU5BU5D_t616564297*)L_0;
		RuntimeObject * L_2 = KeyValuePair_2_get_Key_m4102351182((KeyValuePair_2_t837700584 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
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
		RuntimeObject * L_3 = KeyValuePair_2_get_Key_m4102351182((KeyValuePair_2_t837700584 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
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
		StringU5BU5D_t616564297* L_6 = (StringU5BU5D_t616564297*)G_B3_3;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral421113991);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral421113991);
		StringU5BU5D_t616564297* L_7 = (StringU5BU5D_t616564297*)L_6;
		ProfileData_t1540527732  L_8 = KeyValuePair_2_get_Value_m554734539((KeyValuePair_2_t837700584 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		G_B4_0 = 3;
		G_B4_1 = L_7;
		G_B4_2 = L_7;
	}
	{
		ProfileData_t1540527732  L_9 = KeyValuePair_2_get_Value_m554734539((KeyValuePair_2_t837700584 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (ProfileData_t1540527732 )L_9;
		RuntimeObject * L_10 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (&V_1));
		NullCheck((RuntimeObject *)L_10);
		String_t* L_11 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_10);
		*(&V_1) = *(ProfileData_t1540527732 *)UnBox(L_10);
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
		StringU5BU5D_t616564297* L_13 = (StringU5BU5D_t616564297*)G_B6_3;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteral1561315052);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral1561315052);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = String_Concat_m2204586567(NULL /*static, unused*/, (StringU5BU5D_t616564297*)L_13, /*hidden argument*/NULL);
		return L_14;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m3225744020_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t837700584 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t837700584 *>(__this + 1);
	return KeyValuePair_2_ToString_m3225744020(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m3303824572_gshared (KeyValuePair_2_t3251947431 * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___key0;
		KeyValuePair_2_set_Key_m1576423706((KeyValuePair_2_t3251947431 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		RuntimeObject * L_1 = ___value1;
		KeyValuePair_2_set_Value_m801296788((KeyValuePair_2_t3251947431 *)__this, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m3303824572_AdjustorThunk (RuntimeObject * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t3251947431 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3251947431 *>(__this + 1);
	KeyValuePair_2__ctor_m3303824572(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m912665991_gshared (KeyValuePair_2_t3251947431 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_key_0();
		return L_0;
	}
}
extern "C"  int32_t KeyValuePair_2_get_Key_m912665991_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t3251947431 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3251947431 *>(__this + 1);
	return KeyValuePair_2_get_Key_m912665991(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m1576423706_gshared (KeyValuePair_2_t3251947431 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m1576423706_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t3251947431 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3251947431 *>(__this + 1);
	KeyValuePair_2_set_Key_m1576423706(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m3435123857_gshared (KeyValuePair_2_t3251947431 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return L_0;
	}
}
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m3435123857_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t3251947431 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3251947431 *>(__this + 1);
	return KeyValuePair_2_get_Value_m3435123857(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m801296788_gshared (KeyValuePair_2_t3251947431 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m801296788_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t3251947431 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3251947431 *>(__this + 1);
	KeyValuePair_2_set_Value_m801296788(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<Vuforia.Image/PIXEL_FORMAT,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m422623202_gshared (KeyValuePair_2_t3251947431 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m422623202_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t616564297* G_B2_1 = NULL;
	StringU5BU5D_t616564297* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t616564297* G_B1_1 = NULL;
	StringU5BU5D_t616564297* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t616564297* G_B3_2 = NULL;
	StringU5BU5D_t616564297* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t616564297* G_B5_1 = NULL;
	StringU5BU5D_t616564297* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t616564297* G_B4_1 = NULL;
	StringU5BU5D_t616564297* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t616564297* G_B6_2 = NULL;
	StringU5BU5D_t616564297* G_B6_3 = NULL;
	{
		StringU5BU5D_t616564297* L_0 = (StringU5BU5D_t616564297*)((StringU5BU5D_t616564297*)SZArrayNew(StringU5BU5D_t616564297_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral628932642);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral628932642);
		StringU5BU5D_t616564297* L_1 = (StringU5BU5D_t616564297*)L_0;
		int32_t L_2 = KeyValuePair_2_get_Key_m912665991((KeyValuePair_2_t3251947431 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
	}
	{
		int32_t L_3 = KeyValuePair_2_get_Key_m912665991((KeyValuePair_2_t3251947431 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
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
		StringU5BU5D_t616564297* L_7 = (StringU5BU5D_t616564297*)G_B3_3;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral421113991);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral421113991);
		StringU5BU5D_t616564297* L_8 = (StringU5BU5D_t616564297*)L_7;
		RuntimeObject * L_9 = KeyValuePair_2_get_Value_m3435123857((KeyValuePair_2_t3251947431 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
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
		RuntimeObject * L_10 = KeyValuePair_2_get_Value_m3435123857((KeyValuePair_2_t3251947431 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
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
		StringU5BU5D_t616564297* L_13 = (StringU5BU5D_t616564297*)G_B6_3;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteral1561315052);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral1561315052);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = String_Concat_m2204586567(NULL /*static, unused*/, (StringU5BU5D_t616564297*)L_13, /*hidden argument*/NULL);
		return L_14;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m422623202_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t3251947431 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3251947431 *>(__this + 1);
	return KeyValuePair_2_ToString_m422623202(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<Vuforia.VuforiaManager/TrackableIdPair,Vuforia.HoloLensExtendedTrackingManager/PoseAgeEntry>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m2867703224_gshared (KeyValuePair_2_t1053486173 * __this, TrackableIdPair_t1651355943  ___key0, PoseAgeEntry_t2070329090  ___value1, const RuntimeMethod* method)
{
	{
		TrackableIdPair_t1651355943  L_0 = ___key0;
		KeyValuePair_2_set_Key_m2410733331((KeyValuePair_2_t1053486173 *)__this, (TrackableIdPair_t1651355943 )L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		PoseAgeEntry_t2070329090  L_1 = ___value1;
		KeyValuePair_2_set_Value_m407979537((KeyValuePair_2_t1053486173 *)__this, (PoseAgeEntry_t2070329090 )L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m2867703224_AdjustorThunk (RuntimeObject * __this, TrackableIdPair_t1651355943  ___key0, PoseAgeEntry_t2070329090  ___value1, const RuntimeMethod* method)
{
	KeyValuePair_2_t1053486173 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1053486173 *>(__this + 1);
	KeyValuePair_2__ctor_m2867703224(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<Vuforia.VuforiaManager/TrackableIdPair,Vuforia.HoloLensExtendedTrackingManager/PoseAgeEntry>::get_Key()
extern "C"  TrackableIdPair_t1651355943  KeyValuePair_2_get_Key_m1191135648_gshared (KeyValuePair_2_t1053486173 * __this, const RuntimeMethod* method)
{
	{
		TrackableIdPair_t1651355943  L_0 = (TrackableIdPair_t1651355943 )__this->get_key_0();
		return L_0;
	}
}
extern "C"  TrackableIdPair_t1651355943  KeyValuePair_2_get_Key_m1191135648_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t1053486173 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1053486173 *>(__this + 1);
	return KeyValuePair_2_get_Key_m1191135648(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<Vuforia.VuforiaManager/TrackableIdPair,Vuforia.HoloLensExtendedTrackingManager/PoseAgeEntry>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m2410733331_gshared (KeyValuePair_2_t1053486173 * __this, TrackableIdPair_t1651355943  ___value0, const RuntimeMethod* method)
{
	{
		TrackableIdPair_t1651355943  L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m2410733331_AdjustorThunk (RuntimeObject * __this, TrackableIdPair_t1651355943  ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t1053486173 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1053486173 *>(__this + 1);
	KeyValuePair_2_set_Key_m2410733331(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<Vuforia.VuforiaManager/TrackableIdPair,Vuforia.HoloLensExtendedTrackingManager/PoseAgeEntry>::get_Value()
extern "C"  PoseAgeEntry_t2070329090  KeyValuePair_2_get_Value_m1149868203_gshared (KeyValuePair_2_t1053486173 * __this, const RuntimeMethod* method)
{
	{
		PoseAgeEntry_t2070329090  L_0 = (PoseAgeEntry_t2070329090 )__this->get_value_1();
		return L_0;
	}
}
extern "C"  PoseAgeEntry_t2070329090  KeyValuePair_2_get_Value_m1149868203_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t1053486173 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1053486173 *>(__this + 1);
	return KeyValuePair_2_get_Value_m1149868203(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<Vuforia.VuforiaManager/TrackableIdPair,Vuforia.HoloLensExtendedTrackingManager/PoseAgeEntry>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m407979537_gshared (KeyValuePair_2_t1053486173 * __this, PoseAgeEntry_t2070329090  ___value0, const RuntimeMethod* method)
{
	{
		PoseAgeEntry_t2070329090  L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m407979537_AdjustorThunk (RuntimeObject * __this, PoseAgeEntry_t2070329090  ___value0, const RuntimeMethod* method)
{
	KeyValuePair_2_t1053486173 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1053486173 *>(__this + 1);
	KeyValuePair_2_set_Value_m407979537(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<Vuforia.VuforiaManager/TrackableIdPair,Vuforia.HoloLensExtendedTrackingManager/PoseAgeEntry>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m3715587859_gshared (KeyValuePair_2_t1053486173 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m3715587859_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TrackableIdPair_t1651355943  V_0;
	memset(&V_0, 0, sizeof(V_0));
	PoseAgeEntry_t2070329090  V_1;
	memset(&V_1, 0, sizeof(V_1));
	int32_t G_B2_0 = 0;
	StringU5BU5D_t616564297* G_B2_1 = NULL;
	StringU5BU5D_t616564297* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t616564297* G_B1_1 = NULL;
	StringU5BU5D_t616564297* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t616564297* G_B3_2 = NULL;
	StringU5BU5D_t616564297* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t616564297* G_B5_1 = NULL;
	StringU5BU5D_t616564297* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t616564297* G_B4_1 = NULL;
	StringU5BU5D_t616564297* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t616564297* G_B6_2 = NULL;
	StringU5BU5D_t616564297* G_B6_3 = NULL;
	{
		StringU5BU5D_t616564297* L_0 = (StringU5BU5D_t616564297*)((StringU5BU5D_t616564297*)SZArrayNew(StringU5BU5D_t616564297_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral628932642);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral628932642);
		StringU5BU5D_t616564297* L_1 = (StringU5BU5D_t616564297*)L_0;
		TrackableIdPair_t1651355943  L_2 = KeyValuePair_2_get_Key_m1191135648((KeyValuePair_2_t1053486173 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
	}
	{
		TrackableIdPair_t1651355943  L_3 = KeyValuePair_2_get_Key_m1191135648((KeyValuePair_2_t1053486173 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (TrackableIdPair_t1651355943 )L_3;
		RuntimeObject * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), (&V_0));
		NullCheck((RuntimeObject *)L_4);
		String_t* L_5 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_4);
		*(&V_0) = *(TrackableIdPair_t1651355943 *)UnBox(L_4);
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
		StringU5BU5D_t616564297* L_7 = (StringU5BU5D_t616564297*)G_B3_3;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral421113991);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral421113991);
		StringU5BU5D_t616564297* L_8 = (StringU5BU5D_t616564297*)L_7;
		PoseAgeEntry_t2070329090  L_9 = KeyValuePair_2_get_Value_m1149868203((KeyValuePair_2_t1053486173 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		G_B4_0 = 3;
		G_B4_1 = L_8;
		G_B4_2 = L_8;
	}
	{
		PoseAgeEntry_t2070329090  L_10 = KeyValuePair_2_get_Value_m1149868203((KeyValuePair_2_t1053486173 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (PoseAgeEntry_t2070329090 )L_10;
		RuntimeObject * L_11 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), (&V_1));
		NullCheck((RuntimeObject *)L_11);
		String_t* L_12 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_11);
		*(&V_1) = *(PoseAgeEntry_t2070329090 *)UnBox(L_11);
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
		StringU5BU5D_t616564297* L_14 = (StringU5BU5D_t616564297*)G_B6_3;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, _stringLiteral1561315052);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral1561315052);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_15 = String_Concat_m2204586567(NULL /*static, unused*/, (StringU5BU5D_t616564297*)L_14, /*hidden argument*/NULL);
		return L_15;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m3715587859_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	KeyValuePair_2_t1053486173 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t1053486173 *>(__this + 1);
	return KeyValuePair_2_ToString_m3715587859(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif

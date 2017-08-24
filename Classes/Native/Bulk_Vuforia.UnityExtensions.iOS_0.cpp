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

// Vuforia.VuforiaNativeIosWrapper
struct VuforiaNativeIosWrapper_t1584108885;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t2306688936;
// System.Char[]
struct CharU5BU5D_t1106971146;
// System.Void
struct Void_t646970209;




#ifndef U3CMODULEU3E_T2146754702_H
#define U3CMODULEU3E_T2146754702_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t2146754702 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T2146754702_H
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
#ifndef VUFORIANATIVEIOSWRAPPER_T1584108885_H
#define VUFORIANATIVEIOSWRAPPER_T1584108885_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.VuforiaNativeIosWrapper
struct  VuforiaNativeIosWrapper_t1584108885  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VUFORIANATIVEIOSWRAPPER_T1584108885_H
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
#ifndef STRINGBUILDER_T2306688936_H
#define STRINGBUILDER_T2306688936_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.StringBuilder
struct  StringBuilder_t2306688936  : public RuntimeObject
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
	inline static int32_t get_offset_of__length_1() { return static_cast<int32_t>(offsetof(StringBuilder_t2306688936, ____length_1)); }
	inline int32_t get__length_1() const { return ____length_1; }
	inline int32_t* get_address_of__length_1() { return &____length_1; }
	inline void set__length_1(int32_t value)
	{
		____length_1 = value;
	}

	inline static int32_t get_offset_of__str_2() { return static_cast<int32_t>(offsetof(StringBuilder_t2306688936, ____str_2)); }
	inline String_t* get__str_2() const { return ____str_2; }
	inline String_t** get_address_of__str_2() { return &____str_2; }
	inline void set__str_2(String_t* value)
	{
		____str_2 = value;
		Il2CppCodeGenWriteBarrier((&____str_2), value);
	}

	inline static int32_t get_offset_of__cached_str_3() { return static_cast<int32_t>(offsetof(StringBuilder_t2306688936, ____cached_str_3)); }
	inline String_t* get__cached_str_3() const { return ____cached_str_3; }
	inline String_t** get_address_of__cached_str_3() { return &____cached_str_3; }
	inline void set__cached_str_3(String_t* value)
	{
		____cached_str_3 = value;
		Il2CppCodeGenWriteBarrier((&____cached_str_3), value);
	}

	inline static int32_t get_offset_of__maxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t2306688936, ____maxCapacity_4)); }
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
#endif // STRINGBUILDER_T2306688936_H
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
#ifndef SINGLE_T3502454660_H
#define SINGLE_T3502454660_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t3502454660 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t3502454660, ___m_value_7)); }
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
#endif // SINGLE_T3502454660_H
#ifndef INT64_T181208622_H
#define INT64_T181208622_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int64
struct  Int64_t181208622 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t181208622, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64_T181208622_H
#ifndef UINT32_T959602546_H
#define UINT32_T959602546_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t959602546 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t959602546, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T959602546_H



// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceDeinitCamera()
extern "C"  int32_t VuforiaNativeIosWrapper_cameraDeviceDeinitCamera_m644094069 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceGetCameraDirection()
extern "C"  int32_t VuforiaNativeIosWrapper_cameraDeviceGetCameraDirection_m874580439 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::cameraDeviceGetCameraField(System.IntPtr,System.Int32)
extern "C"  void VuforiaNativeIosWrapper_cameraDeviceGetCameraField_m297532260 (RuntimeObject * __this /* static, unused */, IntPtr_t ___cameraField0, int32_t ___idx1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceGetCameraFieldOfViewRads(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_cameraDeviceGetCameraFieldOfViewRads_m2251503585 (RuntimeObject * __this /* static, unused */, IntPtr_t ___fovVectorContainer0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceGetFieldBool(System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_cameraDeviceGetFieldBool_m2925748338 (RuntimeObject * __this /* static, unused */, String_t* ___key0, IntPtr_t ___value1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceGetFieldFloat(System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_cameraDeviceGetFieldFloat_m714523531 (RuntimeObject * __this /* static, unused */, String_t* ___key0, IntPtr_t ___value1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceGetFieldInt64(System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_cameraDeviceGetFieldInt64_m2056193684 (RuntimeObject * __this /* static, unused */, String_t* ___key0, IntPtr_t ___value1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceGetFieldInt64Range(System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_cameraDeviceGetFieldInt64Range_m1063827171 (RuntimeObject * __this /* static, unused */, String_t* ___key0, IntPtr_t ___intRange1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceGetFieldString(System.String,System.Text.StringBuilder,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_cameraDeviceGetFieldString_m969437432 (RuntimeObject * __this /* static, unused */, String_t* ___key0, StringBuilder_t2306688936 * ___value1, int32_t ___maxLength2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceGetNumCameraFields()
extern "C"  int32_t VuforiaNativeIosWrapper_cameraDeviceGetNumCameraFields_m622964704 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceGetNumVideoModes()
extern "C"  int32_t VuforiaNativeIosWrapper_cameraDeviceGetNumVideoModes_m2446775446 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::cameraDeviceGetVideoMode(System.Int32,System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_cameraDeviceGetVideoMode_m4000617089 (RuntimeObject * __this /* static, unused */, int32_t ___idx0, IntPtr_t ___videoMode1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceInitCamera(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_cameraDeviceInitCamera_m2826145961 (RuntimeObject * __this /* static, unused */, int32_t ___camera0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceSelectVideoMode(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_cameraDeviceSelectVideoMode_m2393162409 (RuntimeObject * __this /* static, unused */, int32_t ___idx0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::cameraDeviceSetCameraConfiguration(System.Int32,System.Int32)
extern "C"  void VuforiaNativeIosWrapper_cameraDeviceSetCameraConfiguration_m3394980764 (RuntimeObject * __this /* static, unused */, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceSetFieldBool(System.String,System.Boolean)
extern "C"  int32_t VuforiaNativeIosWrapper_cameraDeviceSetFieldBool_m1927910692 (RuntimeObject * __this /* static, unused */, String_t* ___key0, bool ___value1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceSetFieldFloat(System.String,System.Single)
extern "C"  int32_t VuforiaNativeIosWrapper_cameraDeviceSetFieldFloat_m172734831 (RuntimeObject * __this /* static, unused */, String_t* ___key0, float ___value1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceSetFieldInt64(System.String,System.Int64)
extern "C"  int32_t VuforiaNativeIosWrapper_cameraDeviceSetFieldInt64_m3712224070 (RuntimeObject * __this /* static, unused */, String_t* ___key0, int64_t ___value1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceSetFieldInt64Range(System.String,System.Int64,System.Int64)
extern "C"  int32_t VuforiaNativeIosWrapper_cameraDeviceSetFieldInt64Range_m3836252703 (RuntimeObject * __this /* static, unused */, String_t* ___key0, int64_t ___intRangeFrom1, int64_t ___intRangeTo2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceSetFieldString(System.String,System.String)
extern "C"  int32_t VuforiaNativeIosWrapper_cameraDeviceSetFieldString_m3836835561 (RuntimeObject * __this /* static, unused */, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceSetFlashTorchMode(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_cameraDeviceSetFlashTorchMode_m4086721926 (RuntimeObject * __this /* static, unused */, int32_t ___on0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceSetFocusMode(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_cameraDeviceSetFocusMode_m2652732454 (RuntimeObject * __this /* static, unused */, int32_t ___focusMode0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceStartCamera()
extern "C"  int32_t VuforiaNativeIosWrapper_cameraDeviceStartCamera_m2697665266 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceStopCamera()
extern "C"  int32_t VuforiaNativeIosWrapper_cameraDeviceStopCamera_m1035779002 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::customViewerParameters_AddDistortionCoefficient(System.IntPtr,System.Single)
extern "C"  void VuforiaNativeIosWrapper_customViewerParameters_AddDistortionCoefficient_m595790826 (RuntimeObject * __this /* static, unused */, IntPtr_t ___obj0, float ___val1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::customViewerParameters_ClearDistortionCoefficients(System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_customViewerParameters_ClearDistortionCoefficients_m3605298064 (RuntimeObject * __this /* static, unused */, IntPtr_t ___obj0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::customViewerParameters_delete(System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_customViewerParameters_delete_m22360893 (RuntimeObject * __this /* static, unused */, IntPtr_t ___obj0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::customViewerParameters_new(System.Single,System.String,System.String)
extern "C"  IntPtr_t VuforiaNativeIosWrapper_customViewerParameters_new_m961749849 (RuntimeObject * __this /* static, unused */, float ___version0, String_t* ___name1, String_t* ___manufacturer2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::customViewerParameters_SetButtonType(System.IntPtr,System.Int32)
extern "C"  void VuforiaNativeIosWrapper_customViewerParameters_SetButtonType_m3305097786 (RuntimeObject * __this /* static, unused */, IntPtr_t ___obj0, int32_t ___val1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::customViewerParameters_SetContainsMagnet(System.IntPtr,System.Boolean)
extern "C"  void VuforiaNativeIosWrapper_customViewerParameters_SetContainsMagnet_m3735288030 (RuntimeObject * __this /* static, unused */, IntPtr_t ___obj0, bool ___val1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::customViewerParameters_SetFieldOfView(System.IntPtr,System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_customViewerParameters_SetFieldOfView_m2156563939 (RuntimeObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___val1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::customViewerParameters_SetInterLensDistance(System.IntPtr,System.Single)
extern "C"  void VuforiaNativeIosWrapper_customViewerParameters_SetInterLensDistance_m1227026709 (RuntimeObject * __this /* static, unused */, IntPtr_t ___obj0, float ___val1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::customViewerParameters_SetLensCentreToTrayDistance(System.IntPtr,System.Single)
extern "C"  void VuforiaNativeIosWrapper_customViewerParameters_SetLensCentreToTrayDistance_m4130243934 (RuntimeObject * __this /* static, unused */, IntPtr_t ___obj0, float ___val1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::customViewerParameters_SetScreenToLensDistance(System.IntPtr,System.Single)
extern "C"  void VuforiaNativeIosWrapper_customViewerParameters_SetScreenToLensDistance_m155651693 (RuntimeObject * __this /* static, unused */, IntPtr_t ___obj0, float ___val1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::customViewerParameters_SetTrayAlignment(System.IntPtr,System.Int32)
extern "C"  void VuforiaNativeIosWrapper_customViewerParameters_SetTrayAlignment_m764243699 (RuntimeObject * __this /* static, unused */, IntPtr_t ___obj0, int32_t ___val1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cylinderTargetGetDimensions(System.IntPtr,System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_cylinderTargetGetDimensions_m689074590 (RuntimeObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, IntPtr_t ___dimensionPtr2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cylinderTargetSetBottomDiameter(System.IntPtr,System.String,System.Single)
extern "C"  int32_t VuforiaNativeIosWrapper_cylinderTargetSetBottomDiameter_m1588341980 (RuntimeObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, float ___bottomDiameter2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cylinderTargetSetSideLength(System.IntPtr,System.String,System.Single)
extern "C"  int32_t VuforiaNativeIosWrapper_cylinderTargetSetSideLength_m2751361136 (RuntimeObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, float ___sideLength2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cylinderTargetSetTopDiameter(System.IntPtr,System.String,System.Single)
extern "C"  int32_t VuforiaNativeIosWrapper_cylinderTargetSetTopDiameter_m2575892271 (RuntimeObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, float ___topDiameter2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::dataSetCreateTrackable(System.IntPtr,System.IntPtr,System.Text.StringBuilder,System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_dataSetCreateTrackable_m707891030 (RuntimeObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, IntPtr_t ___trackableSourcePtr1, StringBuilder_t2306688936 * ___trackableName2, int32_t ___nameMaxLength3, IntPtr_t ___trackableData4, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::dataSetDestroyTrackable(System.IntPtr,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_dataSetDestroyTrackable_m1987951726 (RuntimeObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, int32_t ___trackableId1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::dataSetExists(System.String,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_dataSetExists_m2951807909 (RuntimeObject * __this /* static, unused */, String_t* ___relativePath0, int32_t ___storageType1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::dataSetGetNumTrackableType(System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_dataSetGetNumTrackableType_m3274016832 (RuntimeObject * __this /* static, unused */, int32_t ___trackableType0, IntPtr_t ___dataSetPtr1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::dataSetGetTrackableName(System.IntPtr,System.Int32,System.Text.StringBuilder,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_dataSetGetTrackableName_m2865305945 (RuntimeObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, int32_t ___trackableId1, StringBuilder_t2306688936 * ___trackableName2, int32_t ___nameMaxLength3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::dataSetGetTrackablesOfType(System.Int32,System.IntPtr,System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_dataSetGetTrackablesOfType_m2713386226 (RuntimeObject * __this /* static, unused */, int32_t ___trackableType0, IntPtr_t ___trackableDataArray1, int32_t ___trackableDataArrayLength2, IntPtr_t ___dataSetPtr3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::dataSetHasReachedTrackableLimit(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_dataSetHasReachedTrackableLimit_m2379687699 (RuntimeObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::dataSetLoad(System.String,System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_dataSetLoad_m2289800793 (RuntimeObject * __this /* static, unused */, String_t* ___relativePath0, int32_t ___storageType1, IntPtr_t ___dataSetPtr2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::deinitFrameState(System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_deinitFrameState_m2932199064 (RuntimeObject * __this /* static, unused */, IntPtr_t ___frameState0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::device_GetMode()
extern "C"  int32_t VuforiaNativeIosWrapper_device_GetMode_m1204040679 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::device_GetSelectedViewer()
extern "C"  IntPtr_t VuforiaNativeIosWrapper_device_GetSelectedViewer_m197299371 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::device_GetViewerList()
extern "C"  IntPtr_t VuforiaNativeIosWrapper_device_GetViewerList_m3833757648 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::device_IsViewerPresent()
extern "C"  int32_t VuforiaNativeIosWrapper_device_IsViewerPresent_m2930722795 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::device_SelectViewer(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_device_SelectViewer_m3407804499 (RuntimeObject * __this /* static, unused */, IntPtr_t ___vp0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::device_SetMode(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_device_SetMode_m3375717477 (RuntimeObject * __this /* static, unused */, int32_t ___mode0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::device_SetViewerPresent(System.Boolean)
extern "C"  void VuforiaNativeIosWrapper_device_SetViewerPresent_m889751553 (RuntimeObject * __this /* static, unused */, bool ___present0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::deviceIsEyewearDevice()
extern "C"  int32_t VuforiaNativeIosWrapper_deviceIsEyewearDevice_m1524877531 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearCPMClearProfile(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_eyewearCPMClearProfile_m104473578 (RuntimeObject * __this /* static, unused */, int32_t ___profileID0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearCPMGetActiveProfile()
extern "C"  int32_t VuforiaNativeIosWrapper_eyewearCPMGetActiveProfile_m2829112770 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearCPMGetCameraToEyePose(System.Int32,System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_eyewearCPMGetCameraToEyePose_m2664676430 (RuntimeObject * __this /* static, unused */, int32_t ___profileID0, int32_t ___eyeID1, IntPtr_t ___matrix2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearCPMGetEyeProjection(System.Int32,System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_eyewearCPMGetEyeProjection_m567037565 (RuntimeObject * __this /* static, unused */, int32_t ___profileID0, int32_t ___eyeID1, IntPtr_t ___matrix2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearCPMGetMaxCount()
extern "C"  int32_t VuforiaNativeIosWrapper_eyewearCPMGetMaxCount_m999055914 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::eyewearCPMGetProfileName(System.Int32)
extern "C"  IntPtr_t VuforiaNativeIosWrapper_eyewearCPMGetProfileName_m389668892 (RuntimeObject * __this /* static, unused */, int32_t ___profileID0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearCPMGetUsedCount()
extern "C"  int32_t VuforiaNativeIosWrapper_eyewearCPMGetUsedCount_m2319284829 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearCPMIsProfileUsed(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_eyewearCPMIsProfileUsed_m1883130519 (RuntimeObject * __this /* static, unused */, int32_t ___profileID0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearCPMSetActiveProfile(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_eyewearCPMSetActiveProfile_m991942122 (RuntimeObject * __this /* static, unused */, int32_t ___profileID0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearCPMSetCameraToEyePose(System.Int32,System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_eyewearCPMSetCameraToEyePose_m4052877384 (RuntimeObject * __this /* static, unused */, int32_t ___profileID0, int32_t ___eyeID1, IntPtr_t ___matrix2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearCPMSetEyeProjection(System.Int32,System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_eyewearCPMSetEyeProjection_m2549866316 (RuntimeObject * __this /* static, unused */, int32_t ___profileID0, int32_t ___eyeID1, IntPtr_t ___matrix2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearCPMSetProfileName(System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_eyewearCPMSetProfileName_m952353418 (RuntimeObject * __this /* static, unused */, int32_t ___profileID0, IntPtr_t ___name1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearDeviceGetScreenOrientation()
extern "C"  int32_t VuforiaNativeIosWrapper_eyewearDeviceGetScreenOrientation_m2937103899 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearDeviceIsDisplayExtended()
extern "C"  int32_t VuforiaNativeIosWrapper_eyewearDeviceIsDisplayExtended_m170673209 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearDeviceIsDisplayExtendedGLOnly()
extern "C"  int32_t VuforiaNativeIosWrapper_eyewearDeviceIsDisplayExtendedGLOnly_m601921115 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearDeviceIsDualDisplay()
extern "C"  int32_t VuforiaNativeIosWrapper_eyewearDeviceIsDualDisplay_m2216700016 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearDeviceIsPredictiveTrackingEnabled()
extern "C"  int32_t VuforiaNativeIosWrapper_eyewearDeviceIsPredictiveTrackingEnabled_m2964659958 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearDeviceIsSeeThru()
extern "C"  int32_t VuforiaNativeIosWrapper_eyewearDeviceIsSeeThru_m3763542170 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearDeviceSetDisplayExtended(System.Boolean)
extern "C"  int32_t VuforiaNativeIosWrapper_eyewearDeviceSetDisplayExtended_m2149284956 (RuntimeObject * __this /* static, unused */, bool ___enable0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearDeviceSetPredictiveTracking(System.Boolean)
extern "C"  int32_t VuforiaNativeIosWrapper_eyewearDeviceSetPredictiveTracking_m4113271758 (RuntimeObject * __this /* static, unused */, bool ___enable0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNativeIosWrapper::eyewearUserCalibratorGetMaxScaleHint()
extern "C"  float VuforiaNativeIosWrapper_eyewearUserCalibratorGetMaxScaleHint_m2312389075 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNativeIosWrapper::eyewearUserCalibratorGetMinScaleHint()
extern "C"  float VuforiaNativeIosWrapper_eyewearUserCalibratorGetMinScaleHint_m2509050588 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearUserCalibratorGetProjectionMatrix(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_eyewearUserCalibratorGetProjectionMatrix_m3137946758 (RuntimeObject * __this /* static, unused */, IntPtr_t ___readingsDataArray0, int32_t ___numReadings1, IntPtr_t ___cameraToEyeContainer2, IntPtr_t ___projectionContainer3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearUserCalibratorInit(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_eyewearUserCalibratorInit_m2164347232 (RuntimeObject * __this /* static, unused */, int32_t ___surfaceWidth0, int32_t ___surfaceHeight1, int32_t ___targetWidth2, int32_t ___targetHeight3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearUserCalibratorIsStereoStretched()
extern "C"  int32_t VuforiaNativeIosWrapper_eyewearUserCalibratorIsStereoStretched_m2416238973 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::frameCounterGetBenchmarkingData(System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_frameCounterGetBenchmarkingData_m3925012415 (RuntimeObject * __this /* static, unused */, IntPtr_t ___benchmarkingData0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::getCameraThreadID()
extern "C"  int32_t VuforiaNativeIosWrapper_getCameraThreadID_m689876198 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::getProjectionGL(System.Single,System.Single,System.IntPtr,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_getProjectionGL_m1439849627 (RuntimeObject * __this /* static, unused */, float ___nearPlane0, float ___farPlane1, IntPtr_t ___projectionContainer2, int32_t ___screenOrientation3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::getVuforiaLibraryVersion(System.Text.StringBuilder,System.Int32)
extern "C"  void VuforiaNativeIosWrapper_getVuforiaLibraryVersion_m2930290393 (RuntimeObject * __this /* static, unused */, StringBuilder_t2306688936 * ___value0, int32_t ___maxLength1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::hasSurfaceBeenRecreated()
extern "C"  int32_t VuforiaNativeIosWrapper_hasSurfaceBeenRecreated_m804277311 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::imageTargetBuilderBuild(System.String,System.Single)
extern "C"  int32_t VuforiaNativeIosWrapper_imageTargetBuilderBuild_m1240693818 (RuntimeObject * __this /* static, unused */, String_t* ___name0, float ___screenSizeWidth1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::imageTargetBuilderGetFrameQuality()
extern "C"  int32_t VuforiaNativeIosWrapper_imageTargetBuilderGetFrameQuality_m3420033185 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::imageTargetBuilderGetTrackableSource()
extern "C"  IntPtr_t VuforiaNativeIosWrapper_imageTargetBuilderGetTrackableSource_m1740860804 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::imageTargetBuilderStartScan()
extern "C"  void VuforiaNativeIosWrapper_imageTargetBuilderStartScan_m2086861328 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::imageTargetBuilderStopScan()
extern "C"  void VuforiaNativeIosWrapper_imageTargetBuilderStopScan_m3463034272 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::imageTargetCreateVirtualButton(System.IntPtr,System.String,System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_imageTargetCreateVirtualButton_m1991862334 (RuntimeObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, String_t* ___virtualButtonName2, IntPtr_t ___rectData3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::imageTargetDestroyVirtualButton(System.IntPtr,System.String,System.String)
extern "C"  int32_t VuforiaNativeIosWrapper_imageTargetDestroyVirtualButton_m2583018860 (RuntimeObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, String_t* ___virtualButtonName2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::imageTargetGetNumVirtualButtons(System.IntPtr,System.String)
extern "C"  int32_t VuforiaNativeIosWrapper_imageTargetGetNumVirtualButtons_m190284725 (RuntimeObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::imageTargetGetVirtualButtonName(System.IntPtr,System.String,System.Int32,System.Text.StringBuilder,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_imageTargetGetVirtualButtonName_m2973844062 (RuntimeObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, int32_t ___idx2, StringBuilder_t2306688936 * ___vbName3, int32_t ___nameMaxLength4, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::imageTargetGetVirtualButtons(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr,System.String)
extern "C"  int32_t VuforiaNativeIosWrapper_imageTargetGetVirtualButtons_m981693174 (RuntimeObject * __this /* static, unused */, IntPtr_t ___virtualButtonDataArray0, IntPtr_t ___rectangleDataArray1, int32_t ___virtualButtonDataArrayLength2, IntPtr_t ___dataSetPtr3, String_t* ___trackableName4, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::initFrameState(System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_initFrameState_m2167343978 (RuntimeObject * __this /* static, unused */, IntPtr_t ___frameState0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::initPlatformNative()
extern "C"  void VuforiaNativeIosWrapper_initPlatformNative_m282526069 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNativeIosWrapper::multiTargetGetLargestSizeComponent(System.IntPtr,System.String)
extern "C"  float VuforiaNativeIosWrapper_multiTargetGetLargestSizeComponent_m4104809896 (RuntimeObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::objectTargetGetSize(System.IntPtr,System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_objectTargetGetSize_m3156986922 (RuntimeObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, IntPtr_t ___sizePtr2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::objectTargetSetSize(System.IntPtr,System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_objectTargetSetSize_m248924059 (RuntimeObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, IntPtr_t ___sizePtr2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::objectTrackerActivateDataSet(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_objectTrackerActivateDataSet_m1762331192 (RuntimeObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::objectTrackerCreateDataSet()
extern "C"  IntPtr_t VuforiaNativeIosWrapper_objectTrackerCreateDataSet_m1102607328 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::objectTrackerDeactivateDataSet(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_objectTrackerDeactivateDataSet_m63750779 (RuntimeObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::objectTrackerDestroyDataSet(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_objectTrackerDestroyDataSet_m738631455 (RuntimeObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::objectTrackerPersistExtendedTracking(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_objectTrackerPersistExtendedTracking_m796298604 (RuntimeObject * __this /* static, unused */, int32_t ___on0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::objectTrackerResetExtendedTracking()
extern "C"  int32_t VuforiaNativeIosWrapper_objectTrackerResetExtendedTracking_m3695438047 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::onPause()
extern "C"  void VuforiaNativeIosWrapper_onPause_m1634305509 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::onResume()
extern "C"  void VuforiaNativeIosWrapper_onResume_m4126093517 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::onSurfaceChanged(System.Int32,System.Int32)
extern "C"  void VuforiaNativeIosWrapper_onSurfaceChanged_m2745151961 (RuntimeObject * __this /* static, unused */, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::qcarAddCameraFrame(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void VuforiaNativeIosWrapper_qcarAddCameraFrame_m524464080 (RuntimeObject * __this /* static, unused */, IntPtr_t ___pixels0, int32_t ___width1, int32_t ___height2, int32_t ___format3, int32_t ___stride4, int32_t ___frameIdx5, int32_t ___flipHorizontally6, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::qcarDeinit()
extern "C"  void VuforiaNativeIosWrapper_qcarDeinit_m592135147 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::qcarGetBufferSize(System.Int32,System.Int32,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_qcarGetBufferSize_m2453225049 (RuntimeObject * __this /* static, unused */, int32_t ___width0, int32_t ___height1, int32_t ___format2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::qcarInit(System.String)
extern "C"  int32_t VuforiaNativeIosWrapper_qcarInit_m3319756304 (RuntimeObject * __this /* static, unused */, String_t* ___licenseKey0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::qcarSetFrameFormat(System.Int32,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_qcarSetFrameFormat_m2426127075 (RuntimeObject * __this /* static, unused */, int32_t ___format0, int32_t ___enabled1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::qcarSetHint(System.UInt32,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_qcarSetHint_m4051405981 (RuntimeObject * __this /* static, unused */, uint32_t ___hint0, int32_t ___value1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::reconstructioFromEnvironmentGetReconstructionState(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_reconstructioFromEnvironmentGetReconstructionState_m719606706 (RuntimeObject * __this /* static, unused */, IntPtr_t ___reconstruction0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::reconstructionFromTargetSetInitializationTarget(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.Single)
extern "C"  int32_t VuforiaNativeIosWrapper_reconstructionFromTargetSetInitializationTarget_m4240861014 (RuntimeObject * __this /* static, unused */, IntPtr_t ___reconstruction0, IntPtr_t ___dataSetPtr1, int32_t ___trackableID2, IntPtr_t ___occluderMin3, IntPtr_t ___occluderMax4, IntPtr_t ___offsetToOccluder5, IntPtr_t ___rotationAxisToOccluder6, float ___rotationAngleToOccluder7, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::reconstructionIsReconstructing(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_reconstructionIsReconstructing_m3764948990 (RuntimeObject * __this /* static, unused */, IntPtr_t ___reconstruction0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::reconstructionReset(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_reconstructionReset_m2004151938 (RuntimeObject * __this /* static, unused */, IntPtr_t ___reconstruction0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::reconstructionSetMaximumArea(System.IntPtr,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_reconstructionSetMaximumArea_m590564581 (RuntimeObject * __this /* static, unused */, IntPtr_t ___reconstruction0, IntPtr_t ___maximumArea1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::reconstructionSetNavMeshPadding(System.IntPtr,System.Single)
extern "C"  void VuforiaNativeIosWrapper_reconstructionSetNavMeshPadding_m857886394 (RuntimeObject * __this /* static, unused */, IntPtr_t ___reconstruction0, float ___padding1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::reconstructionStart(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_reconstructionStart_m1027296631 (RuntimeObject * __this /* static, unused */, IntPtr_t ___reconstruction0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::reconstructionStop(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_reconstructionStop_m1563772861 (RuntimeObject * __this /* static, unused */, IntPtr_t ___reconstruction0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::rendererCreateNativeTexture(System.UInt32,System.UInt32,System.Int32)
extern "C"  IntPtr_t VuforiaNativeIosWrapper_rendererCreateNativeTexture_m1968102219 (RuntimeObject * __this /* static, unused */, uint32_t ___width0, uint32_t ___height1, int32_t ___format2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::rendererEnd()
extern "C"  void VuforiaNativeIosWrapper_rendererEnd_m1637940568 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::rendererGetGraphicsAPI()
extern "C"  int32_t VuforiaNativeIosWrapper_rendererGetGraphicsAPI_m3554303693 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::rendererGetRecommendedFps(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_rendererGetRecommendedFps_m3891389397 (RuntimeObject * __this /* static, unused */, int32_t ___flags0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::rendererGetVideoBackgroundCfg(System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_rendererGetVideoBackgroundCfg_m355150956 (RuntimeObject * __this /* static, unused */, IntPtr_t ___bgCfg0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::rendererGetVideoBackgroundTextureInfo(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_rendererGetVideoBackgroundTextureInfo_m3559516304 (RuntimeObject * __this /* static, unused */, IntPtr_t ___texInfo0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::rendererIsVideoBackgroundTextureInfoAvailable()
extern "C"  int32_t VuforiaNativeIosWrapper_rendererIsVideoBackgroundTextureInfoAvailable_m1224522403 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::rendererSetVideoBackgroundCfg(System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_rendererSetVideoBackgroundCfg_m1593180317 (RuntimeObject * __this /* static, unused */, IntPtr_t ___bgCfg0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::rendererSetVideoBackgroundTextureID(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_rendererSetVideoBackgroundTextureID_m2914291807 (RuntimeObject * __this /* static, unused */, int32_t ___textureID0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::rendererSetVideoBackgroundTexturePtr(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_rendererSetVideoBackgroundTexturePtr_m2747521198 (RuntimeObject * __this /* static, unused */, IntPtr_t ___texturePtr0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::renderingPrimitives_DeleteCopy()
extern "C"  void VuforiaNativeIosWrapper_renderingPrimitives_DeleteCopy_m4284476518 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::renderingPrimitives_GetDistortionMesh(System.Int32,System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_renderingPrimitives_GetDistortionMesh_m1485569470 (RuntimeObject * __this /* static, unused */, int32_t ___viewId0, IntPtr_t ___meshData1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::renderingPrimitives_GetDistortionMeshSize(System.Int32,System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_renderingPrimitives_GetDistortionMeshSize_m1294493921 (RuntimeObject * __this /* static, unused */, int32_t ___viewId0, IntPtr_t ___size1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::renderingPrimitives_GetDistortionTextureViewport(System.Int32,System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_renderingPrimitives_GetDistortionTextureViewport_m3045094392 (RuntimeObject * __this /* static, unused */, int32_t ___viewID0, IntPtr_t ___viewportContainer1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::renderingPrimitives_GetEffectiveFov(System.Int32,System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_renderingPrimitives_GetEffectiveFov_m4033596179 (RuntimeObject * __this /* static, unused */, int32_t ___viewID0, IntPtr_t ___fovContainer1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::renderingPrimitives_GetEyeDisplayAdjustmentMatrix(System.Int32,System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_renderingPrimitives_GetEyeDisplayAdjustmentMatrix_m839958557 (RuntimeObject * __this /* static, unused */, int32_t ___viewID0, IntPtr_t ___matrixContainer1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::renderingPrimitives_GetNormalizedViewport(System.Int32,System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_renderingPrimitives_GetNormalizedViewport_m1008211075 (RuntimeObject * __this /* static, unused */, int32_t ___viewID0, IntPtr_t ___viewportContainer1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::renderingPrimitives_GetProjectionMatrix(System.Int32,System.Single,System.Single,System.IntPtr,System.Int32)
extern "C"  void VuforiaNativeIosWrapper_renderingPrimitives_GetProjectionMatrix_m3150043204 (RuntimeObject * __this /* static, unused */, int32_t ___viewID0, float ___near1, float ___far2, IntPtr_t ___projectionContainer3, int32_t ___screenOrientation4, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::renderingPrimitives_GetViewport(System.Int32,System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_renderingPrimitives_GetViewport_m1917217805 (RuntimeObject * __this /* static, unused */, int32_t ___viewID0, IntPtr_t ___viewportContainer1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::renderingPrimitives_GetViewportCentreToEyeAxis(System.Int32,System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_renderingPrimitives_GetViewportCentreToEyeAxis_m2882545447 (RuntimeObject * __this /* static, unused */, int32_t ___viewID0, IntPtr_t ___vectorContainer1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::renderingPrimitives_UpdateCopy()
extern "C"  void VuforiaNativeIosWrapper_renderingPrimitives_UpdateCopy_m4246901472 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::rotationalDeviceTracker_GetModelCorrectionMode()
extern "C"  int32_t VuforiaNativeIosWrapper_rotationalDeviceTracker_GetModelCorrectionMode_m1665164313 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::rotationalDeviceTracker_GetModelCorrectionTransform(System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_rotationalDeviceTracker_GetModelCorrectionTransform_m2518107080 (RuntimeObject * __this /* static, unused */, IntPtr_t ___pivot0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::rotationalDeviceTracker_GetPosePrediction()
extern "C"  int32_t VuforiaNativeIosWrapper_rotationalDeviceTracker_GetPosePrediction_m349093224 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::rotationalDeviceTracker_Recenter()
extern "C"  int32_t VuforiaNativeIosWrapper_rotationalDeviceTracker_Recenter_m4014575558 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::rotationalDeviceTracker_SetModelCorrectionMode(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_rotationalDeviceTracker_SetModelCorrectionMode_m2260534072 (RuntimeObject * __this /* static, unused */, int32_t ___mode0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::rotationalDeviceTracker_SetModelCorrectionModeWithTransform(System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_rotationalDeviceTracker_SetModelCorrectionModeWithTransform_m2550796783 (RuntimeObject * __this /* static, unused */, int32_t ___mode0, IntPtr_t ___pivot1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::rotationalDeviceTracker_SetPosePrediction(System.Boolean)
extern "C"  int32_t VuforiaNativeIosWrapper_rotationalDeviceTracker_SetPosePrediction_m306258204 (RuntimeObject * __this /* static, unused */, bool ___mode0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::setApplicationEnvironment(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void VuforiaNativeIosWrapper_setApplicationEnvironment_m3180531107 (RuntimeObject * __this /* static, unused */, int32_t ___unityVersionMajor0, int32_t ___unityVersionMinor1, int32_t ___unityVersionChange2, int32_t ___sdkWrapperType3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::setHolographicAppCS(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_setHolographicAppCS_m3474711345 (RuntimeObject * __this /* static, unused */, IntPtr_t ___appSpecifiedCS0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::setRenderBuffers(System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_setRenderBuffers_m2942731362 (RuntimeObject * __this /* static, unused */, IntPtr_t ___colorBuffer0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::setStateBufferSize(System.Int32)
extern "C"  void VuforiaNativeIosWrapper_setStateBufferSize_m2503428096 (RuntimeObject * __this /* static, unused */, int32_t ___size0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::smartTerrainBuilderAddReconstruction(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_smartTerrainBuilderAddReconstruction_m4282467679 (RuntimeObject * __this /* static, unused */, IntPtr_t ___reconstruction0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::smartTerrainBuilderCreateReconstructionFromEnvironment()
extern "C"  IntPtr_t VuforiaNativeIosWrapper_smartTerrainBuilderCreateReconstructionFromEnvironment_m750780024 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::smartTerrainBuilderCreateReconstructionFromTarget()
extern "C"  IntPtr_t VuforiaNativeIosWrapper_smartTerrainBuilderCreateReconstructionFromTarget_m115541585 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::smartTerrainBuilderDestroyReconstruction(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_smartTerrainBuilderDestroyReconstruction_m3760270767 (RuntimeObject * __this /* static, unused */, IntPtr_t ___reconstruction0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::smartTerrainBuilderRemoveReconstruction(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_smartTerrainBuilderRemoveReconstruction_m1168953388 (RuntimeObject * __this /* static, unused */, IntPtr_t ___reconstruction0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::smartTerrainTrackerDeinitBuilder()
extern "C"  int32_t VuforiaNativeIosWrapper_smartTerrainTrackerDeinitBuilder_m862648353 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::smartTerrainTrackerInitBuilder()
extern "C"  int32_t VuforiaNativeIosWrapper_smartTerrainTrackerInitBuilder_m786166929 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::smartTerrainTrackerSetScaleToMillimeter(System.Single)
extern "C"  int32_t VuforiaNativeIosWrapper_smartTerrainTrackerSetScaleToMillimeter_m313994157 (RuntimeObject * __this /* static, unused */, float ___scaleToMillimenters0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::startExtendedTracking(System.IntPtr,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_startExtendedTracking_m1122849092 (RuntimeObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, int32_t ___trackableID1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::stopExtendedTracking(System.IntPtr,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_stopExtendedTracking_m3905826888 (RuntimeObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, int32_t ___trackableID1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::targetFinderClearTrackables()
extern "C"  void VuforiaNativeIosWrapper_targetFinderClearTrackables_m4187968851 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::targetFinderDeinit()
extern "C"  int32_t VuforiaNativeIosWrapper_targetFinderDeinit_m983259518 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::targetFinderEnableTracking(System.IntPtr,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_targetFinderEnableTracking_m2448418215 (RuntimeObject * __this /* static, unused */, IntPtr_t ___searchResult0, IntPtr_t ___trackableData1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::targetFinderGetImageTargets(System.IntPtr,System.Int32)
extern "C"  void VuforiaNativeIosWrapper_targetFinderGetImageTargets_m981824355 (RuntimeObject * __this /* static, unused */, IntPtr_t ___trackableIdArray0, int32_t ___trackableIdArrayLength1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::targetFinderGetInitState()
extern "C"  int32_t VuforiaNativeIosWrapper_targetFinderGetInitState_m4222749029 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::targetFinderGetResults(System.IntPtr,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_targetFinderGetResults_m1879124834 (RuntimeObject * __this /* static, unused */, IntPtr_t ___searchResultArray0, int32_t ___searchResultArrayLength1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::targetFinderStartInit(System.String,System.String)
extern "C"  int32_t VuforiaNativeIosWrapper_targetFinderStartInit_m3653974033 (RuntimeObject * __this /* static, unused */, String_t* ___userKey0, String_t* ___secretKey1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::targetFinderStartRecognition()
extern "C"  int32_t VuforiaNativeIosWrapper_targetFinderStartRecognition_m1589074166 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::targetFinderStop()
extern "C"  int32_t VuforiaNativeIosWrapper_targetFinderStop_m1289539814 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::targetFinderUpdate(System.IntPtr,System.Int32)
extern "C"  void VuforiaNativeIosWrapper_targetFinderUpdate_m1996478393 (RuntimeObject * __this /* static, unused */, IntPtr_t ___targetFinderState0, int32_t ___filterMode1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::textTrackerGetRegionOfInterest(System.IntPtr,System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_textTrackerGetRegionOfInterest_m494308765 (RuntimeObject * __this /* static, unused */, IntPtr_t ___detectionROI0, IntPtr_t ___trackingROI1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::textTrackerSetRegionOfInterest(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_textTrackerSetRegionOfInterest_m2406724781 (RuntimeObject * __this /* static, unused */, int32_t ___detectionLeftTopX0, int32_t ___detectionLeftTopY1, int32_t ___detectionRightBottomX2, int32_t ___detectionRightBottomY3, int32_t ___trackingLeftTopX4, int32_t ___trackingLeftTopY5, int32_t ___trackingRightBottomX6, int32_t ___trackingRightBottomY7, int32_t ___upDirection8, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::trackerManagerDeinitTracker(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_trackerManagerDeinitTracker_m2174100662 (RuntimeObject * __this /* static, unused */, int32_t ___trackerTypeID0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::trackerManagerInitTracker(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_trackerManagerInitTracker_m2961365684 (RuntimeObject * __this /* static, unused */, int32_t ___trackerTypeID0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::trackerStart(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_trackerStart_m2485622754 (RuntimeObject * __this /* static, unused */, int32_t ___trackerTypeID0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::trackerStop(System.Int32)
extern "C"  void VuforiaNativeIosWrapper_trackerStop_m2532593528 (RuntimeObject * __this /* static, unused */, int32_t ___trackerTypeID0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::updateQCAR(System.IntPtr,System.Int32,System.IntPtr,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_updateQCAR_m3512176518 (RuntimeObject * __this /* static, unused */, IntPtr_t ___imageHeaderDataArray0, int32_t ___imageHeaderArrayLength1, IntPtr_t ___frameState2, int32_t ___screenOrientation3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::viewerParameters_ContainsMagnet(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_viewerParameters_ContainsMagnet_m3404053190 (RuntimeObject * __this /* static, unused */, IntPtr_t ___obj0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::viewerParameters_copy(System.IntPtr)
extern "C"  IntPtr_t VuforiaNativeIosWrapper_viewerParameters_copy_m483521122 (RuntimeObject * __this /* static, unused */, IntPtr_t ___obj0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::viewerParameters_delete(System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_viewerParameters_delete_m2299903074 (RuntimeObject * __this /* static, unused */, IntPtr_t ___obj0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::viewerParameters_GetButtonType(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_viewerParameters_GetButtonType_m1307592737 (RuntimeObject * __this /* static, unused */, IntPtr_t ___obj0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNativeIosWrapper::viewerParameters_GetDistortionCoefficient(System.IntPtr,System.Int32)
extern "C"  float VuforiaNativeIosWrapper_viewerParameters_GetDistortionCoefficient_m3835343078 (RuntimeObject * __this /* static, unused */, IntPtr_t ___obj0, int32_t ___idx1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::viewerParameters_GetFieldOfView(System.IntPtr,System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_viewerParameters_GetFieldOfView_m2849157524 (RuntimeObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___result1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNativeIosWrapper::viewerParameters_GetInterLensDistance(System.IntPtr)
extern "C"  float VuforiaNativeIosWrapper_viewerParameters_GetInterLensDistance_m2525665738 (RuntimeObject * __this /* static, unused */, IntPtr_t ___obj0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNativeIosWrapper::viewerParameters_GetLensCentreToTrayDistance(System.IntPtr)
extern "C"  float VuforiaNativeIosWrapper_viewerParameters_GetLensCentreToTrayDistance_m2796376155 (RuntimeObject * __this /* static, unused */, IntPtr_t ___obj0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::viewerParameters_GetManufacturer(System.IntPtr)
extern "C"  IntPtr_t VuforiaNativeIosWrapper_viewerParameters_GetManufacturer_m3612854118 (RuntimeObject * __this /* static, unused */, IntPtr_t ___obj0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::viewerParameters_GetName(System.IntPtr)
extern "C"  IntPtr_t VuforiaNativeIosWrapper_viewerParameters_GetName_m2526646331 (RuntimeObject * __this /* static, unused */, IntPtr_t ___obj0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::viewerParameters_GetNumDistortionCoefficients(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_viewerParameters_GetNumDistortionCoefficients_m2743546755 (RuntimeObject * __this /* static, unused */, IntPtr_t ___obj0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNativeIosWrapper::viewerParameters_GetScreenToLensDistance(System.IntPtr)
extern "C"  float VuforiaNativeIosWrapper_viewerParameters_GetScreenToLensDistance_m2150660099 (RuntimeObject * __this /* static, unused */, IntPtr_t ___obj0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::viewerParameters_GetTrayAlignment(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_viewerParameters_GetTrayAlignment_m1514126060 (RuntimeObject * __this /* static, unused */, IntPtr_t ___obj0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.VuforiaNativeIosWrapper::viewerParameters_GetVersion(System.IntPtr)
extern "C"  float VuforiaNativeIosWrapper_viewerParameters_GetVersion_m3077411522 (RuntimeObject * __this /* static, unused */, IntPtr_t ___obj0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::viewerParametersList_Begin(System.IntPtr)
extern "C"  IntPtr_t VuforiaNativeIosWrapper_viewerParametersList_Begin_m62241854 (RuntimeObject * __this /* static, unused */, IntPtr_t ___vpList0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::viewerParametersList_GetByIndex(System.IntPtr,System.Int32)
extern "C"  IntPtr_t VuforiaNativeIosWrapper_viewerParametersList_GetByIndex_m2700664943 (RuntimeObject * __this /* static, unused */, IntPtr_t ___vpList0, int32_t ___idx1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::viewerParametersList_GetByNameManufacturer(System.IntPtr,System.String,System.String)
extern "C"  IntPtr_t VuforiaNativeIosWrapper_viewerParametersList_GetByNameManufacturer_m3947847597 (RuntimeObject * __this /* static, unused */, IntPtr_t ___vpList0, String_t* ___name1, String_t* ___manufacturer2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::viewerParametersList_GetListForAuthoringTools()
extern "C"  IntPtr_t VuforiaNativeIosWrapper_viewerParametersList_GetListForAuthoringTools_m72560898 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::viewerParametersList_Next(System.IntPtr,System.IntPtr)
extern "C"  IntPtr_t VuforiaNativeIosWrapper_viewerParametersList_Next_m282216182 (RuntimeObject * __this /* static, unused */, IntPtr_t ___vpList0, IntPtr_t ___vpLast1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaNativeIosWrapper::viewerParametersList_SetSDKFilter(System.IntPtr,System.String)
extern "C"  void VuforiaNativeIosWrapper_viewerParametersList_SetSDKFilter_m2725056494 (RuntimeObject * __this /* static, unused */, IntPtr_t ___vpList0, String_t* ___filter1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::viewerParametersList_Size(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_viewerParametersList_Size_m1715051476 (RuntimeObject * __this /* static, unused */, IntPtr_t ___vpList0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::virtualButtonGetId(System.IntPtr,System.String,System.String)
extern "C"  int32_t VuforiaNativeIosWrapper_virtualButtonGetId_m2872628959 (RuntimeObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, String_t* ___virtualButtonName2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::virtualButtonSetAreaRectangle(System.IntPtr,System.String,System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_virtualButtonSetAreaRectangle_m2149311299 (RuntimeObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, String_t* ___virtualButtonName2, IntPtr_t ___rectData3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::virtualButtonSetEnabled(System.IntPtr,System.String,System.String,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_virtualButtonSetEnabled_m1130838900 (RuntimeObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, String_t* ___virtualButtonName2, int32_t ___enabled3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::virtualButtonSetSensitivity(System.IntPtr,System.String,System.String,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_virtualButtonSetSensitivity_m1128794600 (RuntimeObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, String_t* ___virtualButtonName2, int32_t ___sensitivity3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::vuforiaGetRenderEventCallback()
extern "C"  IntPtr_t VuforiaNativeIosWrapper_vuforiaGetRenderEventCallback_m3555660133 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::vuMarkTargetGetInstanceImage(System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_vuMarkTargetGetInstanceImage_m2674287387 (RuntimeObject * __this /* static, unused */, int32_t ___vuMarkTargetID0, IntPtr_t ___instanceImage1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::vuMarkTemplateGetOrigin(System.IntPtr,System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_vuMarkTemplateGetOrigin_m3601309644 (RuntimeObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, IntPtr_t ___originPtr2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::vuMarkTemplateGetVuMarkUserData(System.IntPtr,System.String,System.Text.StringBuilder,System.UInt32)
extern "C"  int32_t VuforiaNativeIosWrapper_vuMarkTemplateGetVuMarkUserData_m1712451288 (RuntimeObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, StringBuilder_t2306688936 * ___data2, uint32_t ___dataLength3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::vuMarkTemplateSetTrackingFromRuntimeAppearance(System.IntPtr,System.String,System.Boolean)
extern "C"  int32_t VuforiaNativeIosWrapper_vuMarkTemplateSetTrackingFromRuntimeAppearance_m2239458546 (RuntimeObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, bool ___enable2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::wordGetLetterBoundingBoxes(System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_wordGetLetterBoundingBoxes_m3993191038 (RuntimeObject * __this /* static, unused */, int32_t ___wordID0, IntPtr_t ___letterBoundingBoxes1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::wordGetLetterMask(System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_wordGetLetterMask_m2712222170 (RuntimeObject * __this /* static, unused */, int32_t ___wordID0, IntPtr_t ___letterMaskImage1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::wordListAddWordsFromFile(System.String,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_wordListAddWordsFromFile_m4142686626 (RuntimeObject * __this /* static, unused */, String_t* ___path0, int32_t ___storageType1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::wordListAddWordToFilterListU(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_wordListAddWordToFilterListU_m2127630879 (RuntimeObject * __this /* static, unused */, IntPtr_t ___word0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::wordListAddWordU(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_wordListAddWordU_m430450375 (RuntimeObject * __this /* static, unused */, IntPtr_t ___word0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::wordListClearFilterList()
extern "C"  int32_t VuforiaNativeIosWrapper_wordListClearFilterList_m880805531 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::wordListContainsWordU(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_wordListContainsWordU_m3302894438 (RuntimeObject * __this /* static, unused */, IntPtr_t ___word0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::wordListGetFilterListWordCount()
extern "C"  int32_t VuforiaNativeIosWrapper_wordListGetFilterListWordCount_m1648409397 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::wordListGetFilterListWordU(System.Int32)
extern "C"  IntPtr_t VuforiaNativeIosWrapper_wordListGetFilterListWordU_m3199133604 (RuntimeObject * __this /* static, unused */, int32_t ___i0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::wordListGetFilterMode()
extern "C"  int32_t VuforiaNativeIosWrapper_wordListGetFilterMode_m2845743601 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::wordListLoadFilterList(System.String,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_wordListLoadFilterList_m3268824786 (RuntimeObject * __this /* static, unused */, String_t* ___path0, int32_t ___storageType1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::wordListLoadWordList(System.String,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_wordListLoadWordList_m1994671799 (RuntimeObject * __this /* static, unused */, String_t* ___path0, int32_t ___storageType1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::wordListRemoveWordFromFilterListU(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_wordListRemoveWordFromFilterListU_m2751967863 (RuntimeObject * __this /* static, unused */, IntPtr_t ___word0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::wordListRemoveWordU(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_wordListRemoveWordU_m1405418933 (RuntimeObject * __this /* static, unused */, IntPtr_t ___word0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::wordListSetFilterMode(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_wordListSetFilterMode_m3944972900 (RuntimeObject * __this /* static, unused */, int32_t ___mode0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaNativeIosWrapper::wordListUnloadAllLists()
extern "C"  int32_t VuforiaNativeIosWrapper_wordListUnloadAllLists_m2647922363 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m3992662532 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 Vuforia.VuforiaNativeIosWrapper::CameraDeviceDeinitCamera()
extern "C"  int32_t VuforiaNativeIosWrapper_CameraDeviceDeinitCamera_m1744559791 (VuforiaNativeIosWrapper_t1584108885 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = VuforiaNativeIosWrapper_cameraDeviceDeinitCamera_m644094069(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::CameraDeviceGetCameraDirection()
extern "C"  int32_t VuforiaNativeIosWrapper_CameraDeviceGetCameraDirection_m1379751757 (VuforiaNativeIosWrapper_t1584108885 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = VuforiaNativeIosWrapper_cameraDeviceGetCameraDirection_m874580439(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void Vuforia.VuforiaNativeIosWrapper::CameraDeviceGetCameraField(System.IntPtr,System.Int32)
extern "C"  void VuforiaNativeIosWrapper_CameraDeviceGetCameraField_m2351344930 (VuforiaNativeIosWrapper_t1584108885 * __this, IntPtr_t ___cameraField0, int32_t ___idx1, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___cameraField0;
		int32_t L_1 = ___idx1;
		VuforiaNativeIosWrapper_cameraDeviceGetCameraField_m297532260(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::CameraDeviceGetCameraFieldOfViewRads(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_CameraDeviceGetCameraFieldOfViewRads_m1132208507 (VuforiaNativeIosWrapper_t1584108885 * __this, IntPtr_t ___fovVectorContainer0, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___fovVectorContainer0;
		int32_t L_1 = VuforiaNativeIosWrapper_cameraDeviceGetCameraFieldOfViewRads_m2251503585(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::CameraDeviceGetFieldBool(System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_CameraDeviceGetFieldBool_m2190477250 (VuforiaNativeIosWrapper_t1584108885 * __this, String_t* ___key0, IntPtr_t ___value1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___key0;
		IntPtr_t L_1 = ___value1;
		int32_t L_2 = VuforiaNativeIosWrapper_cameraDeviceGetFieldBool_m2925748338(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::CameraDeviceGetFieldFloat(System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_CameraDeviceGetFieldFloat_m4161530 (VuforiaNativeIosWrapper_t1584108885 * __this, String_t* ___key0, IntPtr_t ___value1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___key0;
		IntPtr_t L_1 = ___value1;
		int32_t L_2 = VuforiaNativeIosWrapper_cameraDeviceGetFieldFloat_m714523531(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::CameraDeviceGetFieldInt64(System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_CameraDeviceGetFieldInt64_m593118361 (VuforiaNativeIosWrapper_t1584108885 * __this, String_t* ___key0, IntPtr_t ___value1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___key0;
		IntPtr_t L_1 = ___value1;
		int32_t L_2 = VuforiaNativeIosWrapper_cameraDeviceGetFieldInt64_m2056193684(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::CameraDeviceGetFieldInt64Range(System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_CameraDeviceGetFieldInt64Range_m2319892505 (VuforiaNativeIosWrapper_t1584108885 * __this, String_t* ___key0, IntPtr_t ___intRange1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___key0;
		IntPtr_t L_1 = ___intRange1;
		int32_t L_2 = VuforiaNativeIosWrapper_cameraDeviceGetFieldInt64Range_m1063827171(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::CameraDeviceGetFieldString(System.String,System.Text.StringBuilder,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_CameraDeviceGetFieldString_m403280116 (VuforiaNativeIosWrapper_t1584108885 * __this, String_t* ___key0, StringBuilder_t2306688936 * ___value1, int32_t ___maxLength2, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___key0;
		StringBuilder_t2306688936 * L_1 = ___value1;
		int32_t L_2 = ___maxLength2;
		int32_t L_3 = VuforiaNativeIosWrapper_cameraDeviceGetFieldString_m969437432(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::CameraDeviceGetNumCameraFields()
extern "C"  int32_t VuforiaNativeIosWrapper_CameraDeviceGetNumCameraFields_m2501734255 (VuforiaNativeIosWrapper_t1584108885 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = VuforiaNativeIosWrapper_cameraDeviceGetNumCameraFields_m622964704(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::CameraDeviceGetNumVideoModes()
extern "C"  int32_t VuforiaNativeIosWrapper_CameraDeviceGetNumVideoModes_m4195235703 (VuforiaNativeIosWrapper_t1584108885 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = VuforiaNativeIosWrapper_cameraDeviceGetNumVideoModes_m2446775446(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void Vuforia.VuforiaNativeIosWrapper::CameraDeviceGetVideoMode(System.Int32,System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_CameraDeviceGetVideoMode_m3673347316 (VuforiaNativeIosWrapper_t1584108885 * __this, int32_t ___idx0, IntPtr_t ___videoMode1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___idx0;
		IntPtr_t L_1 = ___videoMode1;
		VuforiaNativeIosWrapper_cameraDeviceGetVideoMode_m4000617089(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::CameraDeviceInitCamera(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_CameraDeviceInitCamera_m3870300230 (VuforiaNativeIosWrapper_t1584108885 * __this, int32_t ___camera0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___camera0;
		int32_t L_1 = VuforiaNativeIosWrapper_cameraDeviceInitCamera_m2826145961(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::CameraDeviceSelectVideoMode(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_CameraDeviceSelectVideoMode_m36186397 (VuforiaNativeIosWrapper_t1584108885 * __this, int32_t ___idx0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___idx0;
		int32_t L_1 = VuforiaNativeIosWrapper_cameraDeviceSelectVideoMode_m2393162409(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Vuforia.VuforiaNativeIosWrapper::CameraDeviceSetCameraConfiguration(System.Int32,System.Int32)
extern "C"  void VuforiaNativeIosWrapper_CameraDeviceSetCameraConfiguration_m2136620544 (VuforiaNativeIosWrapper_t1584108885 * __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___width0;
		int32_t L_1 = ___height1;
		VuforiaNativeIosWrapper_cameraDeviceSetCameraConfiguration_m3394980764(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::CameraDeviceSetFieldBool(System.String,System.Boolean)
extern "C"  int32_t VuforiaNativeIosWrapper_CameraDeviceSetFieldBool_m4055331045 (VuforiaNativeIosWrapper_t1584108885 * __this, String_t* ___key0, bool ___value1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___key0;
		bool L_1 = ___value1;
		int32_t L_2 = VuforiaNativeIosWrapper_cameraDeviceSetFieldBool_m1927910692(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::CameraDeviceSetFieldFloat(System.String,System.Single)
extern "C"  int32_t VuforiaNativeIosWrapper_CameraDeviceSetFieldFloat_m98093877 (VuforiaNativeIosWrapper_t1584108885 * __this, String_t* ___key0, float ___value1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___key0;
		float L_1 = ___value1;
		int32_t L_2 = VuforiaNativeIosWrapper_cameraDeviceSetFieldFloat_m172734831(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::CameraDeviceSetFieldInt64(System.String,System.Int64)
extern "C"  int32_t VuforiaNativeIosWrapper_CameraDeviceSetFieldInt64_m1843983403 (VuforiaNativeIosWrapper_t1584108885 * __this, String_t* ___key0, int64_t ___value1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___key0;
		int64_t L_1 = ___value1;
		int32_t L_2 = VuforiaNativeIosWrapper_cameraDeviceSetFieldInt64_m3712224070(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::CameraDeviceSetFieldInt64Range(System.String,System.Int64,System.Int64)
extern "C"  int32_t VuforiaNativeIosWrapper_CameraDeviceSetFieldInt64Range_m2586090031 (VuforiaNativeIosWrapper_t1584108885 * __this, String_t* ___key0, int64_t ___intRangeFrom1, int64_t ___intRangeTo2, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___key0;
		int64_t L_1 = ___intRangeFrom1;
		int64_t L_2 = ___intRangeTo2;
		int32_t L_3 = VuforiaNativeIosWrapper_cameraDeviceSetFieldInt64Range_m3836252703(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::CameraDeviceSetFieldString(System.String,System.String)
extern "C"  int32_t VuforiaNativeIosWrapper_CameraDeviceSetFieldString_m2048777708 (VuforiaNativeIosWrapper_t1584108885 * __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___key0;
		String_t* L_1 = ___value1;
		int32_t L_2 = VuforiaNativeIosWrapper_cameraDeviceSetFieldString_m3836835561(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::CameraDeviceSetFlashTorchMode(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_CameraDeviceSetFlashTorchMode_m1971478562 (VuforiaNativeIosWrapper_t1584108885 * __this, int32_t ___on0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___on0;
		int32_t L_1 = VuforiaNativeIosWrapper_cameraDeviceSetFlashTorchMode_m4086721926(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::CameraDeviceSetFocusMode(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_CameraDeviceSetFocusMode_m2099543137 (VuforiaNativeIosWrapper_t1584108885 * __this, int32_t ___focusMode0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___focusMode0;
		int32_t L_1 = VuforiaNativeIosWrapper_cameraDeviceSetFocusMode_m2652732454(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::CameraDeviceStartCamera()
extern "C"  int32_t VuforiaNativeIosWrapper_CameraDeviceStartCamera_m3865834 (VuforiaNativeIosWrapper_t1584108885 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = VuforiaNativeIosWrapper_cameraDeviceStartCamera_m2697665266(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::CameraDeviceStopCamera()
extern "C"  int32_t VuforiaNativeIosWrapper_CameraDeviceStopCamera_m958597172 (VuforiaNativeIosWrapper_t1584108885 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = VuforiaNativeIosWrapper_cameraDeviceStopCamera_m1035779002(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void Vuforia.VuforiaNativeIosWrapper::CustomViewerParameters_AddDistortionCoefficient(System.IntPtr,System.Single)
extern "C"  void VuforiaNativeIosWrapper_CustomViewerParameters_AddDistortionCoefficient_m197287701 (VuforiaNativeIosWrapper_t1584108885 * __this, IntPtr_t ___obj0, float ___val1, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___obj0;
		float L_1 = ___val1;
		VuforiaNativeIosWrapper_customViewerParameters_AddDistortionCoefficient_m595790826(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.VuforiaNativeIosWrapper::CustomViewerParameters_ClearDistortionCoefficients(System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_CustomViewerParameters_ClearDistortionCoefficients_m2084012075 (VuforiaNativeIosWrapper_t1584108885 * __this, IntPtr_t ___obj0, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___obj0;
		VuforiaNativeIosWrapper_customViewerParameters_ClearDistortionCoefficients_m3605298064(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.VuforiaNativeIosWrapper::CustomViewerParameters_delete(System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_CustomViewerParameters_delete_m2913245885 (VuforiaNativeIosWrapper_t1584108885 * __this, IntPtr_t ___obj0, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___obj0;
		VuforiaNativeIosWrapper_customViewerParameters_delete_m22360893(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::CustomViewerParameters_new(System.Single,System.String,System.String)
extern "C"  IntPtr_t VuforiaNativeIosWrapper_CustomViewerParameters_new_m3416079040 (VuforiaNativeIosWrapper_t1584108885 * __this, float ___version0, String_t* ___name1, String_t* ___manufacturer2, const RuntimeMethod* method)
{
	{
		float L_0 = ___version0;
		String_t* L_1 = ___name1;
		String_t* L_2 = ___manufacturer2;
		IntPtr_t L_3 = VuforiaNativeIosWrapper_customViewerParameters_new_m961749849(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void Vuforia.VuforiaNativeIosWrapper::CustomViewerParameters_SetButtonType(System.IntPtr,System.Int32)
extern "C"  void VuforiaNativeIosWrapper_CustomViewerParameters_SetButtonType_m2594923367 (VuforiaNativeIosWrapper_t1584108885 * __this, IntPtr_t ___obj0, int32_t ___val1, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___obj0;
		int32_t L_1 = ___val1;
		VuforiaNativeIosWrapper_customViewerParameters_SetButtonType_m3305097786(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.VuforiaNativeIosWrapper::CustomViewerParameters_SetContainsMagnet(System.IntPtr,System.Boolean)
extern "C"  void VuforiaNativeIosWrapper_CustomViewerParameters_SetContainsMagnet_m37487098 (VuforiaNativeIosWrapper_t1584108885 * __this, IntPtr_t ___obj0, bool ___val1, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___obj0;
		bool L_1 = ___val1;
		VuforiaNativeIosWrapper_customViewerParameters_SetContainsMagnet_m3735288030(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.VuforiaNativeIosWrapper::CustomViewerParameters_SetFieldOfView(System.IntPtr,System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_CustomViewerParameters_SetFieldOfView_m3194750943 (VuforiaNativeIosWrapper_t1584108885 * __this, IntPtr_t ___obj0, IntPtr_t ___val1, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___obj0;
		IntPtr_t L_1 = ___val1;
		VuforiaNativeIosWrapper_customViewerParameters_SetFieldOfView_m2156563939(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.VuforiaNativeIosWrapper::CustomViewerParameters_SetInterLensDistance(System.IntPtr,System.Single)
extern "C"  void VuforiaNativeIosWrapper_CustomViewerParameters_SetInterLensDistance_m553679002 (VuforiaNativeIosWrapper_t1584108885 * __this, IntPtr_t ___obj0, float ___val1, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___obj0;
		float L_1 = ___val1;
		VuforiaNativeIosWrapper_customViewerParameters_SetInterLensDistance_m1227026709(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.VuforiaNativeIosWrapper::CustomViewerParameters_SetLensCentreToTrayDistance(System.IntPtr,System.Single)
extern "C"  void VuforiaNativeIosWrapper_CustomViewerParameters_SetLensCentreToTrayDistance_m264706482 (VuforiaNativeIosWrapper_t1584108885 * __this, IntPtr_t ___obj0, float ___val1, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___obj0;
		float L_1 = ___val1;
		VuforiaNativeIosWrapper_customViewerParameters_SetLensCentreToTrayDistance_m4130243934(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.VuforiaNativeIosWrapper::CustomViewerParameters_SetScreenToLensDistance(System.IntPtr,System.Single)
extern "C"  void VuforiaNativeIosWrapper_CustomViewerParameters_SetScreenToLensDistance_m3727976547 (VuforiaNativeIosWrapper_t1584108885 * __this, IntPtr_t ___obj0, float ___val1, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___obj0;
		float L_1 = ___val1;
		VuforiaNativeIosWrapper_customViewerParameters_SetScreenToLensDistance_m155651693(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.VuforiaNativeIosWrapper::CustomViewerParameters_SetTrayAlignment(System.IntPtr,System.Int32)
extern "C"  void VuforiaNativeIosWrapper_CustomViewerParameters_SetTrayAlignment_m1416650285 (VuforiaNativeIosWrapper_t1584108885 * __this, IntPtr_t ___obj0, int32_t ___val1, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___obj0;
		int32_t L_1 = ___val1;
		VuforiaNativeIosWrapper_customViewerParameters_SetTrayAlignment_m764243699(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::CylinderTargetGetDimensions(System.IntPtr,System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_CylinderTargetGetDimensions_m1138985619 (VuforiaNativeIosWrapper_t1584108885 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, IntPtr_t ___dimensionPtr2, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___dataSetPtr0;
		String_t* L_1 = ___trackableName1;
		IntPtr_t L_2 = ___dimensionPtr2;
		int32_t L_3 = VuforiaNativeIosWrapper_cylinderTargetGetDimensions_m689074590(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::CylinderTargetSetBottomDiameter(System.IntPtr,System.String,System.Single)
extern "C"  int32_t VuforiaNativeIosWrapper_CylinderTargetSetBottomDiameter_m1384682432 (VuforiaNativeIosWrapper_t1584108885 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, float ___bottomDiameter2, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___dataSetPtr0;
		String_t* L_1 = ___trackableName1;
		float L_2 = ___bottomDiameter2;
		int32_t L_3 = VuforiaNativeIosWrapper_cylinderTargetSetBottomDiameter_m1588341980(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::CylinderTargetSetSideLength(System.IntPtr,System.String,System.Single)
extern "C"  int32_t VuforiaNativeIosWrapper_CylinderTargetSetSideLength_m3978890810 (VuforiaNativeIosWrapper_t1584108885 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, float ___sideLength2, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___dataSetPtr0;
		String_t* L_1 = ___trackableName1;
		float L_2 = ___sideLength2;
		int32_t L_3 = VuforiaNativeIosWrapper_cylinderTargetSetSideLength_m2751361136(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::CylinderTargetSetTopDiameter(System.IntPtr,System.String,System.Single)
extern "C"  int32_t VuforiaNativeIosWrapper_CylinderTargetSetTopDiameter_m150049751 (VuforiaNativeIosWrapper_t1584108885 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, float ___topDiameter2, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___dataSetPtr0;
		String_t* L_1 = ___trackableName1;
		float L_2 = ___topDiameter2;
		int32_t L_3 = VuforiaNativeIosWrapper_cylinderTargetSetTopDiameter_m2575892271(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::DataSetCreateTrackable(System.IntPtr,System.IntPtr,System.Text.StringBuilder,System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_DataSetCreateTrackable_m2582780026 (VuforiaNativeIosWrapper_t1584108885 * __this, IntPtr_t ___dataSetPtr0, IntPtr_t ___trackableSourcePtr1, StringBuilder_t2306688936 * ___trackableName2, int32_t ___nameMaxLength3, IntPtr_t ___trackableData4, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___dataSetPtr0;
		IntPtr_t L_1 = ___trackableSourcePtr1;
		StringBuilder_t2306688936 * L_2 = ___trackableName2;
		int32_t L_3 = ___nameMaxLength3;
		IntPtr_t L_4 = ___trackableData4;
		int32_t L_5 = VuforiaNativeIosWrapper_dataSetCreateTrackable_m707891030(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::DataSetDestroyTrackable(System.IntPtr,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_DataSetDestroyTrackable_m3783309494 (VuforiaNativeIosWrapper_t1584108885 * __this, IntPtr_t ___dataSetPtr0, int32_t ___trackableId1, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___dataSetPtr0;
		int32_t L_1 = ___trackableId1;
		int32_t L_2 = VuforiaNativeIosWrapper_dataSetDestroyTrackable_m1987951726(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::DataSetExists(System.String,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_DataSetExists_m4258315539 (VuforiaNativeIosWrapper_t1584108885 * __this, String_t* ___relativePath0, int32_t ___storageType1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___relativePath0;
		int32_t L_1 = ___storageType1;
		int32_t L_2 = VuforiaNativeIosWrapper_dataSetExists_m2951807909(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::DataSetGetNumTrackableType(System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_DataSetGetNumTrackableType_m1706641422 (VuforiaNativeIosWrapper_t1584108885 * __this, int32_t ___trackableType0, IntPtr_t ___dataSetPtr1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___trackableType0;
		IntPtr_t L_1 = ___dataSetPtr1;
		int32_t L_2 = VuforiaNativeIosWrapper_dataSetGetNumTrackableType_m3274016832(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::DataSetGetTrackableName(System.IntPtr,System.Int32,System.Text.StringBuilder,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_DataSetGetTrackableName_m3414429325 (VuforiaNativeIosWrapper_t1584108885 * __this, IntPtr_t ___dataSetPtr0, int32_t ___trackableId1, StringBuilder_t2306688936 * ___trackableName2, int32_t ___nameMaxLength3, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___dataSetPtr0;
		int32_t L_1 = ___trackableId1;
		StringBuilder_t2306688936 * L_2 = ___trackableName2;
		int32_t L_3 = ___nameMaxLength3;
		int32_t L_4 = VuforiaNativeIosWrapper_dataSetGetTrackableName_m2865305945(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::DataSetGetTrackablesOfType(System.Int32,System.IntPtr,System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_DataSetGetTrackablesOfType_m1525394949 (VuforiaNativeIosWrapper_t1584108885 * __this, int32_t ___trackableType0, IntPtr_t ___trackableDataArray1, int32_t ___trackableDataArrayLength2, IntPtr_t ___dataSetPtr3, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___trackableType0;
		IntPtr_t L_1 = ___trackableDataArray1;
		int32_t L_2 = ___trackableDataArrayLength2;
		IntPtr_t L_3 = ___dataSetPtr3;
		int32_t L_4 = VuforiaNativeIosWrapper_dataSetGetTrackablesOfType_m2713386226(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::DataSetHasReachedTrackableLimit(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_DataSetHasReachedTrackableLimit_m177538130 (VuforiaNativeIosWrapper_t1584108885 * __this, IntPtr_t ___dataSetPtr0, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___dataSetPtr0;
		int32_t L_1 = VuforiaNativeIosWrapper_dataSetHasReachedTrackableLimit_m2379687699(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::DataSetLoad(System.String,System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_DataSetLoad_m2039653337 (VuforiaNativeIosWrapper_t1584108885 * __this, String_t* ___relativePath0, int32_t ___storageType1, IntPtr_t ___dataSetPtr2, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___relativePath0;
		int32_t L_1 = ___storageType1;
		IntPtr_t L_2 = ___dataSetPtr2;
		int32_t L_3 = VuforiaNativeIosWrapper_dataSetLoad_m2289800793(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void Vuforia.VuforiaNativeIosWrapper::DeinitFrameState(System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_DeinitFrameState_m488028191 (VuforiaNativeIosWrapper_t1584108885 * __this, IntPtr_t ___frameState0, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___frameState0;
		VuforiaNativeIosWrapper_deinitFrameState_m2932199064(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::Device_GetMode()
extern "C"  int32_t VuforiaNativeIosWrapper_Device_GetMode_m779323388 (VuforiaNativeIosWrapper_t1584108885 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = VuforiaNativeIosWrapper_device_GetMode_m1204040679(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::Device_GetSelectedViewer()
extern "C"  IntPtr_t VuforiaNativeIosWrapper_Device_GetSelectedViewer_m1231937089 (VuforiaNativeIosWrapper_t1584108885 * __this, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = VuforiaNativeIosWrapper_device_GetSelectedViewer_m197299371(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::Device_GetViewerList()
extern "C"  IntPtr_t VuforiaNativeIosWrapper_Device_GetViewerList_m1804445114 (VuforiaNativeIosWrapper_t1584108885 * __this, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = VuforiaNativeIosWrapper_device_GetViewerList_m3833757648(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::Device_IsViewerPresent()
extern "C"  int32_t VuforiaNativeIosWrapper_Device_IsViewerPresent_m2864440598 (VuforiaNativeIosWrapper_t1584108885 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = VuforiaNativeIosWrapper_device_IsViewerPresent_m2930722795(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::Device_SelectViewer(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_Device_SelectViewer_m125966339 (VuforiaNativeIosWrapper_t1584108885 * __this, IntPtr_t ___vp0, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___vp0;
		int32_t L_1 = VuforiaNativeIosWrapper_device_SelectViewer_m3407804499(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::Device_SetMode(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_Device_SetMode_m99818722 (VuforiaNativeIosWrapper_t1584108885 * __this, int32_t ___mode0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___mode0;
		int32_t L_1 = VuforiaNativeIosWrapper_device_SetMode_m3375717477(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Vuforia.VuforiaNativeIosWrapper::Device_SetViewerPresent(System.Boolean)
extern "C"  void VuforiaNativeIosWrapper_Device_SetViewerPresent_m4107538347 (VuforiaNativeIosWrapper_t1584108885 * __this, bool ___present0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___present0;
		VuforiaNativeIosWrapper_device_SetViewerPresent_m889751553(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::DeviceIsEyewearDevice()
extern "C"  int32_t VuforiaNativeIosWrapper_DeviceIsEyewearDevice_m491239848 (VuforiaNativeIosWrapper_t1584108885 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = VuforiaNativeIosWrapper_deviceIsEyewearDevice_m1524877531(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::EyewearCPMClearProfile(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_EyewearCPMClearProfile_m333631807 (VuforiaNativeIosWrapper_t1584108885 * __this, int32_t ___profileID0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___profileID0;
		int32_t L_1 = VuforiaNativeIosWrapper_eyewearCPMClearProfile_m104473578(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::EyewearCPMGetActiveProfile()
extern "C"  int32_t VuforiaNativeIosWrapper_EyewearCPMGetActiveProfile_m4027705627 (VuforiaNativeIosWrapper_t1584108885 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = VuforiaNativeIosWrapper_eyewearCPMGetActiveProfile_m2829112770(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::EyewearCPMGetCameraToEyePose(System.Int32,System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_EyewearCPMGetCameraToEyePose_m4186281516 (VuforiaNativeIosWrapper_t1584108885 * __this, int32_t ___profileID0, int32_t ___eyeID1, IntPtr_t ___matrix2, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___profileID0;
		int32_t L_1 = ___eyeID1;
		IntPtr_t L_2 = ___matrix2;
		int32_t L_3 = VuforiaNativeIosWrapper_eyewearCPMGetCameraToEyePose_m2664676430(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::EyewearCPMGetEyeProjection(System.Int32,System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_EyewearCPMGetEyeProjection_m1871601198 (VuforiaNativeIosWrapper_t1584108885 * __this, int32_t ___profileID0, int32_t ___eyeID1, IntPtr_t ___matrix2, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___profileID0;
		int32_t L_1 = ___eyeID1;
		IntPtr_t L_2 = ___matrix2;
		int32_t L_3 = VuforiaNativeIosWrapper_eyewearCPMGetEyeProjection_m567037565(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::EyewearCPMGetMaxCount()
extern "C"  int32_t VuforiaNativeIosWrapper_EyewearCPMGetMaxCount_m2352028326 (VuforiaNativeIosWrapper_t1584108885 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = VuforiaNativeIosWrapper_eyewearCPMGetMaxCount_m999055914(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::EyewearCPMGetProfileName(System.Int32)
extern "C"  IntPtr_t VuforiaNativeIosWrapper_EyewearCPMGetProfileName_m2455754155 (VuforiaNativeIosWrapper_t1584108885 * __this, int32_t ___profileID0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___profileID0;
		IntPtr_t L_1 = VuforiaNativeIosWrapper_eyewearCPMGetProfileName_m389668892(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::EyewearCPMGetUsedCount()
extern "C"  int32_t VuforiaNativeIosWrapper_EyewearCPMGetUsedCount_m270978454 (VuforiaNativeIosWrapper_t1584108885 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = VuforiaNativeIosWrapper_eyewearCPMGetUsedCount_m2319284829(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::EyewearCPMIsProfileUsed(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_EyewearCPMIsProfileUsed_m2260679930 (VuforiaNativeIosWrapper_t1584108885 * __this, int32_t ___profileID0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___profileID0;
		int32_t L_1 = VuforiaNativeIosWrapper_eyewearCPMIsProfileUsed_m1883130519(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::EyewearCPMSetActiveProfile(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_EyewearCPMSetActiveProfile_m2337372423 (VuforiaNativeIosWrapper_t1584108885 * __this, int32_t ___profileID0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___profileID0;
		int32_t L_1 = VuforiaNativeIosWrapper_eyewearCPMSetActiveProfile_m991942122(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::EyewearCPMSetCameraToEyePose(System.Int32,System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_EyewearCPMSetCameraToEyePose_m1271645079 (VuforiaNativeIosWrapper_t1584108885 * __this, int32_t ___profileID0, int32_t ___eyeID1, IntPtr_t ___matrix2, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___profileID0;
		int32_t L_1 = ___eyeID1;
		IntPtr_t L_2 = ___matrix2;
		int32_t L_3 = VuforiaNativeIosWrapper_eyewearCPMSetCameraToEyePose_m4052877384(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::EyewearCPMSetEyeProjection(System.Int32,System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_EyewearCPMSetEyeProjection_m205614130 (VuforiaNativeIosWrapper_t1584108885 * __this, int32_t ___profileID0, int32_t ___eyeID1, IntPtr_t ___matrix2, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___profileID0;
		int32_t L_1 = ___eyeID1;
		IntPtr_t L_2 = ___matrix2;
		int32_t L_3 = VuforiaNativeIosWrapper_eyewearCPMSetEyeProjection_m2549866316(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::EyewearCPMSetProfileName(System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_EyewearCPMSetProfileName_m553555731 (VuforiaNativeIosWrapper_t1584108885 * __this, int32_t ___profileID0, IntPtr_t ___name1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___profileID0;
		IntPtr_t L_1 = ___name1;
		int32_t L_2 = VuforiaNativeIosWrapper_eyewearCPMSetProfileName_m952353418(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::EyewearDeviceGetScreenOrientation()
extern "C"  int32_t VuforiaNativeIosWrapper_EyewearDeviceGetScreenOrientation_m4021250272 (VuforiaNativeIosWrapper_t1584108885 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = VuforiaNativeIosWrapper_eyewearDeviceGetScreenOrientation_m2937103899(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::EyewearDeviceIsDisplayExtended()
extern "C"  int32_t VuforiaNativeIosWrapper_EyewearDeviceIsDisplayExtended_m1253976745 (VuforiaNativeIosWrapper_t1584108885 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = VuforiaNativeIosWrapper_eyewearDeviceIsDisplayExtended_m170673209(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::EyewearDeviceIsDisplayExtendedGLOnly()
extern "C"  int32_t VuforiaNativeIosWrapper_EyewearDeviceIsDisplayExtendedGLOnly_m2835395873 (VuforiaNativeIosWrapper_t1584108885 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = VuforiaNativeIosWrapper_eyewearDeviceIsDisplayExtendedGLOnly_m601921115(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::EyewearDeviceIsDualDisplay()
extern "C"  int32_t VuforiaNativeIosWrapper_EyewearDeviceIsDualDisplay_m525720496 (VuforiaNativeIosWrapper_t1584108885 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = VuforiaNativeIosWrapper_eyewearDeviceIsDualDisplay_m2216700016(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::EyewearDeviceIsPredictiveTrackingEnabled()
extern "C"  int32_t VuforiaNativeIosWrapper_EyewearDeviceIsPredictiveTrackingEnabled_m4004792792 (VuforiaNativeIosWrapper_t1584108885 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = VuforiaNativeIosWrapper_eyewearDeviceIsPredictiveTrackingEnabled_m2964659958(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::EyewearDeviceIsSeeThru()
extern "C"  int32_t VuforiaNativeIosWrapper_EyewearDeviceIsSeeThru_m2654250173 (VuforiaNativeIosWrapper_t1584108885 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = VuforiaNativeIosWrapper_eyewearDeviceIsSeeThru_m3763542170(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::EyewearDeviceSetDisplayExtended(System.Boolean)
extern "C"  int32_t VuforiaNativeIosWrapper_EyewearDeviceSetDisplayExtended_m280629731 (VuforiaNativeIosWrapper_t1584108885 * __this, bool ___enable0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___enable0;
		int32_t L_1 = VuforiaNativeIosWrapper_eyewearDeviceSetDisplayExtended_m2149284956(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::EyewearDeviceSetPredictiveTracking(System.Boolean)
extern "C"  int32_t VuforiaNativeIosWrapper_EyewearDeviceSetPredictiveTracking_m3494418782 (VuforiaNativeIosWrapper_t1584108885 * __this, bool ___enable0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___enable0;
		int32_t L_1 = VuforiaNativeIosWrapper_eyewearDeviceSetPredictiveTracking_m4113271758(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Single Vuforia.VuforiaNativeIosWrapper::EyewearUserCalibratorGetMaxScaleHint()
extern "C"  float VuforiaNativeIosWrapper_EyewearUserCalibratorGetMaxScaleHint_m2232811401 (VuforiaNativeIosWrapper_t1584108885 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = VuforiaNativeIosWrapper_eyewearUserCalibratorGetMaxScaleHint_m2312389075(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Single Vuforia.VuforiaNativeIosWrapper::EyewearUserCalibratorGetMinScaleHint()
extern "C"  float VuforiaNativeIosWrapper_EyewearUserCalibratorGetMinScaleHint_m3321180621 (VuforiaNativeIosWrapper_t1584108885 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = VuforiaNativeIosWrapper_eyewearUserCalibratorGetMinScaleHint_m2509050588(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::EyewearUserCalibratorGetProjectionMatrix(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_EyewearUserCalibratorGetProjectionMatrix_m1935232797 (VuforiaNativeIosWrapper_t1584108885 * __this, IntPtr_t ___readingsDataArray0, int32_t ___numReadings1, IntPtr_t ___cameraToEyeContainer2, IntPtr_t ___projectionContainer3, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___readingsDataArray0;
		int32_t L_1 = ___numReadings1;
		IntPtr_t L_2 = ___cameraToEyeContainer2;
		IntPtr_t L_3 = ___projectionContainer3;
		int32_t L_4 = VuforiaNativeIosWrapper_eyewearUserCalibratorGetProjectionMatrix_m3137946758(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::EyewearUserCalibratorInit(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_EyewearUserCalibratorInit_m1930258049 (VuforiaNativeIosWrapper_t1584108885 * __this, int32_t ___surfaceWidth0, int32_t ___surfaceHeight1, int32_t ___targetWidth2, int32_t ___targetHeight3, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___surfaceWidth0;
		int32_t L_1 = ___surfaceHeight1;
		int32_t L_2 = ___targetWidth2;
		int32_t L_3 = ___targetHeight3;
		int32_t L_4 = VuforiaNativeIosWrapper_eyewearUserCalibratorInit_m2164347232(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::EyewearUserCalibratorIsStereoStretched()
extern "C"  int32_t VuforiaNativeIosWrapper_EyewearUserCalibratorIsStereoStretched_m821637343 (VuforiaNativeIosWrapper_t1584108885 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = VuforiaNativeIosWrapper_eyewearUserCalibratorIsStereoStretched_m2416238973(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void Vuforia.VuforiaNativeIosWrapper::FrameCounterGetBenchmarkingData(System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_FrameCounterGetBenchmarkingData_m1854455644 (VuforiaNativeIosWrapper_t1584108885 * __this, IntPtr_t ___benchmarkingData0, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___benchmarkingData0;
		VuforiaNativeIosWrapper_frameCounterGetBenchmarkingData_m3925012415(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::GetCameraThreadID()
extern "C"  int32_t VuforiaNativeIosWrapper_GetCameraThreadID_m4189630200 (VuforiaNativeIosWrapper_t1584108885 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = VuforiaNativeIosWrapper_getCameraThreadID_m689876198(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::GetProjectionGL(System.Single,System.Single,System.IntPtr,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_GetProjectionGL_m3724068858 (VuforiaNativeIosWrapper_t1584108885 * __this, float ___nearPlane0, float ___farPlane1, IntPtr_t ___projectionContainer2, int32_t ___screenOrientation3, const RuntimeMethod* method)
{
	{
		float L_0 = ___nearPlane0;
		float L_1 = ___farPlane1;
		IntPtr_t L_2 = ___projectionContainer2;
		int32_t L_3 = ___screenOrientation3;
		int32_t L_4 = VuforiaNativeIosWrapper_getProjectionGL_m1439849627(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void Vuforia.VuforiaNativeIosWrapper::GetVuforiaLibraryVersion(System.Text.StringBuilder,System.Int32)
extern "C"  void VuforiaNativeIosWrapper_GetVuforiaLibraryVersion_m2818263864 (VuforiaNativeIosWrapper_t1584108885 * __this, StringBuilder_t2306688936 * ___value0, int32_t ___maxLength1, const RuntimeMethod* method)
{
	{
		StringBuilder_t2306688936 * L_0 = ___value0;
		int32_t L_1 = ___maxLength1;
		VuforiaNativeIosWrapper_getVuforiaLibraryVersion_m2930290393(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::HasSurfaceBeenRecreated()
extern "C"  int32_t VuforiaNativeIosWrapper_HasSurfaceBeenRecreated_m2344572333 (VuforiaNativeIosWrapper_t1584108885 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = VuforiaNativeIosWrapper_hasSurfaceBeenRecreated_m804277311(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ImageTargetBuilderBuild(System.String,System.Single)
extern "C"  int32_t VuforiaNativeIosWrapper_ImageTargetBuilderBuild_m3758912561 (VuforiaNativeIosWrapper_t1584108885 * __this, String_t* ___name0, float ___screenSizeWidth1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
		float L_1 = ___screenSizeWidth1;
		int32_t L_2 = VuforiaNativeIosWrapper_imageTargetBuilderBuild_m1240693818(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ImageTargetBuilderGetFrameQuality()
extern "C"  int32_t VuforiaNativeIosWrapper_ImageTargetBuilderGetFrameQuality_m97098664 (VuforiaNativeIosWrapper_t1584108885 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = VuforiaNativeIosWrapper_imageTargetBuilderGetFrameQuality_m3420033185(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::ImageTargetBuilderGetTrackableSource()
extern "C"  IntPtr_t VuforiaNativeIosWrapper_ImageTargetBuilderGetTrackableSource_m1104438597 (VuforiaNativeIosWrapper_t1584108885 * __this, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = VuforiaNativeIosWrapper_imageTargetBuilderGetTrackableSource_m1740860804(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void Vuforia.VuforiaNativeIosWrapper::ImageTargetBuilderStartScan()
extern "C"  void VuforiaNativeIosWrapper_ImageTargetBuilderStartScan_m3385883332 (VuforiaNativeIosWrapper_t1584108885 * __this, const RuntimeMethod* method)
{
	{
		VuforiaNativeIosWrapper_imageTargetBuilderStartScan_m2086861328(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.VuforiaNativeIosWrapper::ImageTargetBuilderStopScan()
extern "C"  void VuforiaNativeIosWrapper_ImageTargetBuilderStopScan_m1431671193 (VuforiaNativeIosWrapper_t1584108885 * __this, const RuntimeMethod* method)
{
	{
		VuforiaNativeIosWrapper_imageTargetBuilderStopScan_m3463034272(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ImageTargetCreateVirtualButton(System.IntPtr,System.String,System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_ImageTargetCreateVirtualButton_m2319926332 (VuforiaNativeIosWrapper_t1584108885 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, String_t* ___virtualButtonName2, IntPtr_t ___rectData3, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___dataSetPtr0;
		String_t* L_1 = ___trackableName1;
		String_t* L_2 = ___virtualButtonName2;
		IntPtr_t L_3 = ___rectData3;
		int32_t L_4 = VuforiaNativeIosWrapper_imageTargetCreateVirtualButton_m1991862334(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ImageTargetDestroyVirtualButton(System.IntPtr,System.String,System.String)
extern "C"  int32_t VuforiaNativeIosWrapper_ImageTargetDestroyVirtualButton_m4151966742 (VuforiaNativeIosWrapper_t1584108885 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, String_t* ___virtualButtonName2, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___dataSetPtr0;
		String_t* L_1 = ___trackableName1;
		String_t* L_2 = ___virtualButtonName2;
		int32_t L_3 = VuforiaNativeIosWrapper_imageTargetDestroyVirtualButton_m2583018860(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ImageTargetGetNumVirtualButtons(System.IntPtr,System.String)
extern "C"  int32_t VuforiaNativeIosWrapper_ImageTargetGetNumVirtualButtons_m2452572070 (VuforiaNativeIosWrapper_t1584108885 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___dataSetPtr0;
		String_t* L_1 = ___trackableName1;
		int32_t L_2 = VuforiaNativeIosWrapper_imageTargetGetNumVirtualButtons_m190284725(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ImageTargetGetVirtualButtonName(System.IntPtr,System.String,System.Int32,System.Text.StringBuilder,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_ImageTargetGetVirtualButtonName_m3367940273 (VuforiaNativeIosWrapper_t1584108885 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, int32_t ___idx2, StringBuilder_t2306688936 * ___vbName3, int32_t ___nameMaxLength4, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___dataSetPtr0;
		String_t* L_1 = ___trackableName1;
		int32_t L_2 = ___idx2;
		StringBuilder_t2306688936 * L_3 = ___vbName3;
		int32_t L_4 = ___nameMaxLength4;
		int32_t L_5 = VuforiaNativeIosWrapper_imageTargetGetVirtualButtonName_m2973844062(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ImageTargetGetVirtualButtons(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr,System.String)
extern "C"  int32_t VuforiaNativeIosWrapper_ImageTargetGetVirtualButtons_m1701869680 (VuforiaNativeIosWrapper_t1584108885 * __this, IntPtr_t ___virtualButtonDataArray0, IntPtr_t ___rectangleDataArray1, int32_t ___virtualButtonDataArrayLength2, IntPtr_t ___dataSetPtr3, String_t* ___trackableName4, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___virtualButtonDataArray0;
		IntPtr_t L_1 = ___rectangleDataArray1;
		int32_t L_2 = ___virtualButtonDataArrayLength2;
		IntPtr_t L_3 = ___dataSetPtr3;
		String_t* L_4 = ___trackableName4;
		int32_t L_5 = VuforiaNativeIosWrapper_imageTargetGetVirtualButtons_m981693174(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Void Vuforia.VuforiaNativeIosWrapper::InitFrameState(System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_InitFrameState_m3128384245 (VuforiaNativeIosWrapper_t1584108885 * __this, IntPtr_t ___frameState0, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___frameState0;
		VuforiaNativeIosWrapper_initFrameState_m2167343978(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.VuforiaNativeIosWrapper::InitPlatformNative()
extern "C"  void VuforiaNativeIosWrapper_InitPlatformNative_m2613918511 (VuforiaNativeIosWrapper_t1584108885 * __this, const RuntimeMethod* method)
{
	{
		VuforiaNativeIosWrapper_initPlatformNative_m282526069(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Single Vuforia.VuforiaNativeIosWrapper::MultiTargetGetLargestSizeComponent(System.IntPtr,System.String)
extern "C"  float VuforiaNativeIosWrapper_MultiTargetGetLargestSizeComponent_m2907338419 (VuforiaNativeIosWrapper_t1584108885 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___dataSetPtr0;
		String_t* L_1 = ___trackableName1;
		float L_2 = VuforiaNativeIosWrapper_multiTargetGetLargestSizeComponent_m4104809896(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ObjectTargetGetSize(System.IntPtr,System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_ObjectTargetGetSize_m22868400 (VuforiaNativeIosWrapper_t1584108885 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, IntPtr_t ___sizePtr2, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___dataSetPtr0;
		String_t* L_1 = ___trackableName1;
		IntPtr_t L_2 = ___sizePtr2;
		int32_t L_3 = VuforiaNativeIosWrapper_objectTargetGetSize_m3156986922(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ObjectTargetSetSize(System.IntPtr,System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_ObjectTargetSetSize_m1444598140 (VuforiaNativeIosWrapper_t1584108885 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, IntPtr_t ___sizePtr2, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___dataSetPtr0;
		String_t* L_1 = ___trackableName1;
		IntPtr_t L_2 = ___sizePtr2;
		int32_t L_3 = VuforiaNativeIosWrapper_objectTargetSetSize_m248924059(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ObjectTrackerActivateDataSet(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_ObjectTrackerActivateDataSet_m2641090200 (VuforiaNativeIosWrapper_t1584108885 * __this, IntPtr_t ___dataSetPtr0, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___dataSetPtr0;
		int32_t L_1 = VuforiaNativeIosWrapper_objectTrackerActivateDataSet_m1762331192(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::ObjectTrackerCreateDataSet()
extern "C"  IntPtr_t VuforiaNativeIosWrapper_ObjectTrackerCreateDataSet_m1385957554 (VuforiaNativeIosWrapper_t1584108885 * __this, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = VuforiaNativeIosWrapper_objectTrackerCreateDataSet_m1102607328(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ObjectTrackerDeactivateDataSet(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_ObjectTrackerDeactivateDataSet_m3816710383 (VuforiaNativeIosWrapper_t1584108885 * __this, IntPtr_t ___dataSetPtr0, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___dataSetPtr0;
		int32_t L_1 = VuforiaNativeIosWrapper_objectTrackerDeactivateDataSet_m63750779(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ObjectTrackerDestroyDataSet(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_ObjectTrackerDestroyDataSet_m3897809824 (VuforiaNativeIosWrapper_t1584108885 * __this, IntPtr_t ___dataSetPtr0, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___dataSetPtr0;
		int32_t L_1 = VuforiaNativeIosWrapper_objectTrackerDestroyDataSet_m738631455(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ObjectTrackerPersistExtendedTracking(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_ObjectTrackerPersistExtendedTracking_m140587967 (VuforiaNativeIosWrapper_t1584108885 * __this, int32_t ___on0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___on0;
		int32_t L_1 = VuforiaNativeIosWrapper_objectTrackerPersistExtendedTracking_m796298604(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ObjectTrackerResetExtendedTracking()
extern "C"  int32_t VuforiaNativeIosWrapper_ObjectTrackerResetExtendedTracking_m3344536015 (VuforiaNativeIosWrapper_t1584108885 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = VuforiaNativeIosWrapper_objectTrackerResetExtendedTracking_m3695438047(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void Vuforia.VuforiaNativeIosWrapper::OnPause()
extern "C"  void VuforiaNativeIosWrapper_OnPause_m270303089 (VuforiaNativeIosWrapper_t1584108885 * __this, const RuntimeMethod* method)
{
	{
		VuforiaNativeIosWrapper_onPause_m1634305509(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.VuforiaNativeIosWrapper::OnResume()
extern "C"  void VuforiaNativeIosWrapper_OnResume_m2023808897 (VuforiaNativeIosWrapper_t1584108885 * __this, const RuntimeMethod* method)
{
	{
		VuforiaNativeIosWrapper_onResume_m4126093517(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.VuforiaNativeIosWrapper::OnSurfaceChanged(System.Int32,System.Int32)
extern "C"  void VuforiaNativeIosWrapper_OnSurfaceChanged_m415641637 (VuforiaNativeIosWrapper_t1584108885 * __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___width0;
		int32_t L_1 = ___height1;
		VuforiaNativeIosWrapper_onSurfaceChanged_m2745151961(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.VuforiaNativeIosWrapper::QcarAddCameraFrame(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void VuforiaNativeIosWrapper_QcarAddCameraFrame_m1458457691 (VuforiaNativeIosWrapper_t1584108885 * __this, IntPtr_t ___pixels0, int32_t ___width1, int32_t ___height2, int32_t ___format3, int32_t ___stride4, int32_t ___frameIdx5, int32_t ___flipHorizontally6, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___pixels0;
		int32_t L_1 = ___width1;
		int32_t L_2 = ___height2;
		int32_t L_3 = ___format3;
		int32_t L_4 = ___stride4;
		int32_t L_5 = ___frameIdx5;
		int32_t L_6 = ___flipHorizontally6;
		VuforiaNativeIosWrapper_qcarAddCameraFrame_m524464080(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.VuforiaNativeIosWrapper::QcarDeinit()
extern "C"  void VuforiaNativeIosWrapper_QcarDeinit_m169613955 (VuforiaNativeIosWrapper_t1584108885 * __this, const RuntimeMethod* method)
{
	{
		VuforiaNativeIosWrapper_qcarDeinit_m592135147(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::QcarGetBufferSize(System.Int32,System.Int32,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_QcarGetBufferSize_m3651010040 (VuforiaNativeIosWrapper_t1584108885 * __this, int32_t ___width0, int32_t ___height1, int32_t ___format2, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___width0;
		int32_t L_1 = ___height1;
		int32_t L_2 = ___format2;
		int32_t L_3 = VuforiaNativeIosWrapper_qcarGetBufferSize_m2453225049(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::QcarInit(System.String)
extern "C"  int32_t VuforiaNativeIosWrapper_QcarInit_m4134541968 (VuforiaNativeIosWrapper_t1584108885 * __this, String_t* ___licenseKey0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___licenseKey0;
		int32_t L_1 = VuforiaNativeIosWrapper_qcarInit_m3319756304(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::QcarSetFrameFormat(System.Int32,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_QcarSetFrameFormat_m2312847388 (VuforiaNativeIosWrapper_t1584108885 * __this, int32_t ___format0, int32_t ___enabled1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___format0;
		int32_t L_1 = ___enabled1;
		int32_t L_2 = VuforiaNativeIosWrapper_qcarSetFrameFormat_m2426127075(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::QcarSetHint(System.UInt32,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_QcarSetHint_m4062034039 (VuforiaNativeIosWrapper_t1584108885 * __this, uint32_t ___hint0, int32_t ___value1, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = ___hint0;
		int32_t L_1 = ___value1;
		int32_t L_2 = VuforiaNativeIosWrapper_qcarSetHint_m4051405981(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ReconstructioFromEnvironmentGetReconstructionState(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_ReconstructioFromEnvironmentGetReconstructionState_m3132440215 (VuforiaNativeIosWrapper_t1584108885 * __this, IntPtr_t ___reconstruction0, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___reconstruction0;
		int32_t L_1 = VuforiaNativeIosWrapper_reconstructioFromEnvironmentGetReconstructionState_m719606706(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ReconstructionFromTargetSetInitializationTarget(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.Single)
extern "C"  int32_t VuforiaNativeIosWrapper_ReconstructionFromTargetSetInitializationTarget_m3379592048 (VuforiaNativeIosWrapper_t1584108885 * __this, IntPtr_t ___reconstruction0, IntPtr_t ___dataSetPtr1, int32_t ___trackableID2, IntPtr_t ___occluderMin3, IntPtr_t ___occluderMax4, IntPtr_t ___offsetToOccluder5, IntPtr_t ___rotationAxisToOccluder6, float ___rotationAngleToOccluder7, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___reconstruction0;
		IntPtr_t L_1 = ___dataSetPtr1;
		int32_t L_2 = ___trackableID2;
		IntPtr_t L_3 = ___occluderMin3;
		IntPtr_t L_4 = ___occluderMax4;
		IntPtr_t L_5 = ___offsetToOccluder5;
		IntPtr_t L_6 = ___rotationAxisToOccluder6;
		float L_7 = ___rotationAngleToOccluder7;
		int32_t L_8 = VuforiaNativeIosWrapper_reconstructionFromTargetSetInitializationTarget_m4240861014(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ReconstructionIsReconstructing(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_ReconstructionIsReconstructing_m1033704160 (VuforiaNativeIosWrapper_t1584108885 * __this, IntPtr_t ___reconstruction0, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___reconstruction0;
		int32_t L_1 = VuforiaNativeIosWrapper_reconstructionIsReconstructing_m3764948990(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ReconstructionReset(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_ReconstructionReset_m3303129296 (VuforiaNativeIosWrapper_t1584108885 * __this, IntPtr_t ___reconstruction0, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___reconstruction0;
		int32_t L_1 = VuforiaNativeIosWrapper_reconstructionReset_m2004151938(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ReconstructionSetMaximumArea(System.IntPtr,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_ReconstructionSetMaximumArea_m1523976838 (VuforiaNativeIosWrapper_t1584108885 * __this, IntPtr_t ___reconstruction0, IntPtr_t ___maximumArea1, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___reconstruction0;
		IntPtr_t L_1 = ___maximumArea1;
		int32_t L_2 = VuforiaNativeIosWrapper_reconstructionSetMaximumArea_m590564581(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void Vuforia.VuforiaNativeIosWrapper::ReconstructionSetNavMeshPadding(System.IntPtr,System.Single)
extern "C"  void VuforiaNativeIosWrapper_ReconstructionSetNavMeshPadding_m1175509467 (VuforiaNativeIosWrapper_t1584108885 * __this, IntPtr_t ___reconstruction0, float ___padding1, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___reconstruction0;
		float L_1 = ___padding1;
		VuforiaNativeIosWrapper_reconstructionSetNavMeshPadding_m857886394(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ReconstructionStart(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_ReconstructionStart_m4040088383 (VuforiaNativeIosWrapper_t1584108885 * __this, IntPtr_t ___reconstruction0, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___reconstruction0;
		int32_t L_1 = VuforiaNativeIosWrapper_reconstructionStart_m1027296631(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ReconstructionStop(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_ReconstructionStop_m30709638 (VuforiaNativeIosWrapper_t1584108885 * __this, IntPtr_t ___reconstruction0, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___reconstruction0;
		int32_t L_1 = VuforiaNativeIosWrapper_reconstructionStop_m1563772861(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::RendererCreateNativeTexture(System.UInt32,System.UInt32,System.Int32)
extern "C"  IntPtr_t VuforiaNativeIosWrapper_RendererCreateNativeTexture_m2825571637 (VuforiaNativeIosWrapper_t1584108885 * __this, uint32_t ___width0, uint32_t ___height1, int32_t ___format2, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = ___width0;
		uint32_t L_1 = ___height1;
		int32_t L_2 = ___format2;
		IntPtr_t L_3 = VuforiaNativeIosWrapper_rendererCreateNativeTexture_m1968102219(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void Vuforia.VuforiaNativeIosWrapper::RendererEnd()
extern "C"  void VuforiaNativeIosWrapper_RendererEnd_m644566167 (VuforiaNativeIosWrapper_t1584108885 * __this, const RuntimeMethod* method)
{
	{
		VuforiaNativeIosWrapper_rendererEnd_m1637940568(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::RendererGetGraphicsAPI()
extern "C"  int32_t VuforiaNativeIosWrapper_RendererGetGraphicsAPI_m3567483027 (VuforiaNativeIosWrapper_t1584108885 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = VuforiaNativeIosWrapper_rendererGetGraphicsAPI_m3554303693(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::RendererGetRecommendedFps(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_RendererGetRecommendedFps_m664046494 (VuforiaNativeIosWrapper_t1584108885 * __this, int32_t ___flags0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___flags0;
		int32_t L_1 = VuforiaNativeIosWrapper_rendererGetRecommendedFps_m3891389397(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Vuforia.VuforiaNativeIosWrapper::RendererGetVideoBackgroundCfg(System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_RendererGetVideoBackgroundCfg_m3618741967 (VuforiaNativeIosWrapper_t1584108885 * __this, IntPtr_t ___bgCfg0, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___bgCfg0;
		VuforiaNativeIosWrapper_rendererGetVideoBackgroundCfg_m355150956(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::RendererGetVideoBackgroundTextureInfo(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_RendererGetVideoBackgroundTextureInfo_m3776877715 (VuforiaNativeIosWrapper_t1584108885 * __this, IntPtr_t ___texInfo0, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___texInfo0;
		int32_t L_1 = VuforiaNativeIosWrapper_rendererGetVideoBackgroundTextureInfo_m3559516304(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::RendererIsVideoBackgroundTextureInfoAvailable()
extern "C"  int32_t VuforiaNativeIosWrapper_RendererIsVideoBackgroundTextureInfoAvailable_m2571961314 (VuforiaNativeIosWrapper_t1584108885 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = VuforiaNativeIosWrapper_rendererIsVideoBackgroundTextureInfoAvailable_m1224522403(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void Vuforia.VuforiaNativeIosWrapper::RendererSetVideoBackgroundCfg(System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_RendererSetVideoBackgroundCfg_m642575302 (VuforiaNativeIosWrapper_t1584108885 * __this, IntPtr_t ___bgCfg0, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___bgCfg0;
		VuforiaNativeIosWrapper_rendererSetVideoBackgroundCfg_m1593180317(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::RendererSetVideoBackgroundTextureID(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_RendererSetVideoBackgroundTextureID_m84933506 (VuforiaNativeIosWrapper_t1584108885 * __this, int32_t ___textureID0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___textureID0;
		int32_t L_1 = VuforiaNativeIosWrapper_rendererSetVideoBackgroundTextureID_m2914291807(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::RendererSetVideoBackgroundTexturePtr(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_RendererSetVideoBackgroundTexturePtr_m2668454210 (VuforiaNativeIosWrapper_t1584108885 * __this, IntPtr_t ___texturePtr0, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___texturePtr0;
		int32_t L_1 = VuforiaNativeIosWrapper_rendererSetVideoBackgroundTexturePtr_m2747521198(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Vuforia.VuforiaNativeIosWrapper::RenderingPrimitives_DeleteCopy()
extern "C"  void VuforiaNativeIosWrapper_RenderingPrimitives_DeleteCopy_m1151399013 (VuforiaNativeIosWrapper_t1584108885 * __this, const RuntimeMethod* method)
{
	{
		VuforiaNativeIosWrapper_renderingPrimitives_DeleteCopy_m4284476518(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.VuforiaNativeIosWrapper::RenderingPrimitives_GetDistortionMesh(System.Int32,System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_RenderingPrimitives_GetDistortionMesh_m2523619777 (VuforiaNativeIosWrapper_t1584108885 * __this, int32_t ___viewId0, IntPtr_t ___meshData1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___viewId0;
		IntPtr_t L_1 = ___meshData1;
		VuforiaNativeIosWrapper_renderingPrimitives_GetDistortionMesh_m1485569470(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.VuforiaNativeIosWrapper::RenderingPrimitives_GetDistortionMeshSize(System.Int32,System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_RenderingPrimitives_GetDistortionMeshSize_m980175643 (VuforiaNativeIosWrapper_t1584108885 * __this, int32_t ___viewId0, IntPtr_t ___size1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___viewId0;
		IntPtr_t L_1 = ___size1;
		VuforiaNativeIosWrapper_renderingPrimitives_GetDistortionMeshSize_m1294493921(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.VuforiaNativeIosWrapper::RenderingPrimitives_GetDistortionTextureViewport(System.Int32,System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_RenderingPrimitives_GetDistortionTextureViewport_m1708149120 (VuforiaNativeIosWrapper_t1584108885 * __this, int32_t ___viewID0, IntPtr_t ___viewportContainer1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___viewID0;
		IntPtr_t L_1 = ___viewportContainer1;
		VuforiaNativeIosWrapper_renderingPrimitives_GetDistortionTextureViewport_m3045094392(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.VuforiaNativeIosWrapper::RenderingPrimitives_GetEffectiveFov(System.Int32,System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_RenderingPrimitives_GetEffectiveFov_m2547562386 (VuforiaNativeIosWrapper_t1584108885 * __this, int32_t ___viewID0, IntPtr_t ___fovContainer1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___viewID0;
		IntPtr_t L_1 = ___fovContainer1;
		VuforiaNativeIosWrapper_renderingPrimitives_GetEffectiveFov_m4033596179(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.VuforiaNativeIosWrapper::RenderingPrimitives_GetEyeDisplayAdjustmentMatrix(System.Int32,System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_RenderingPrimitives_GetEyeDisplayAdjustmentMatrix_m1887941865 (VuforiaNativeIosWrapper_t1584108885 * __this, int32_t ___viewID0, IntPtr_t ___matrixContainer1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___viewID0;
		IntPtr_t L_1 = ___matrixContainer1;
		VuforiaNativeIosWrapper_renderingPrimitives_GetEyeDisplayAdjustmentMatrix_m839958557(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.VuforiaNativeIosWrapper::RenderingPrimitives_GetNormalizedViewport(System.Int32,System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_RenderingPrimitives_GetNormalizedViewport_m1442547014 (VuforiaNativeIosWrapper_t1584108885 * __this, int32_t ___viewID0, IntPtr_t ___viewportContainer1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___viewID0;
		IntPtr_t L_1 = ___viewportContainer1;
		VuforiaNativeIosWrapper_renderingPrimitives_GetNormalizedViewport_m1008211075(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.VuforiaNativeIosWrapper::RenderingPrimitives_GetProjectionMatrix(System.Int32,System.Single,System.Single,System.IntPtr,System.Int32)
extern "C"  void VuforiaNativeIosWrapper_RenderingPrimitives_GetProjectionMatrix_m4008656369 (VuforiaNativeIosWrapper_t1584108885 * __this, int32_t ___viewID0, float ___near1, float ___far2, IntPtr_t ___projectionContainer3, int32_t ___screenOrientation4, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___viewID0;
		float L_1 = ___near1;
		float L_2 = ___far2;
		IntPtr_t L_3 = ___projectionContainer3;
		int32_t L_4 = ___screenOrientation4;
		VuforiaNativeIosWrapper_renderingPrimitives_GetProjectionMatrix_m3150043204(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.VuforiaNativeIosWrapper::RenderingPrimitives_GetViewport(System.Int32,System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_RenderingPrimitives_GetViewport_m2191858096 (VuforiaNativeIosWrapper_t1584108885 * __this, int32_t ___viewID0, IntPtr_t ___viewportContainer1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___viewID0;
		IntPtr_t L_1 = ___viewportContainer1;
		VuforiaNativeIosWrapper_renderingPrimitives_GetViewport_m1917217805(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.VuforiaNativeIosWrapper::RenderingPrimitives_GetViewportCentreToEyeAxis(System.Int32,System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_RenderingPrimitives_GetViewportCentreToEyeAxis_m2120722005 (VuforiaNativeIosWrapper_t1584108885 * __this, int32_t ___viewID0, IntPtr_t ___vectorContainer1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___viewID0;
		IntPtr_t L_1 = ___vectorContainer1;
		VuforiaNativeIosWrapper_renderingPrimitives_GetViewportCentreToEyeAxis_m2882545447(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.VuforiaNativeIosWrapper::RenderingPrimitives_UpdateCopy()
extern "C"  void VuforiaNativeIosWrapper_RenderingPrimitives_UpdateCopy_m17824299 (VuforiaNativeIosWrapper_t1584108885 * __this, const RuntimeMethod* method)
{
	{
		VuforiaNativeIosWrapper_renderingPrimitives_UpdateCopy_m4246901472(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::RotationalDeviceTracker_GetModelCorrectionMode()
extern "C"  int32_t VuforiaNativeIosWrapper_RotationalDeviceTracker_GetModelCorrectionMode_m4286603945 (VuforiaNativeIosWrapper_t1584108885 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = VuforiaNativeIosWrapper_rotationalDeviceTracker_GetModelCorrectionMode_m1665164313(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void Vuforia.VuforiaNativeIosWrapper::RotationalDeviceTracker_GetModelCorrectionTransform(System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_RotationalDeviceTracker_GetModelCorrectionTransform_m1686345114 (VuforiaNativeIosWrapper_t1584108885 * __this, IntPtr_t ___pivot0, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___pivot0;
		VuforiaNativeIosWrapper_rotationalDeviceTracker_GetModelCorrectionTransform_m2518107080(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::RotationalDeviceTracker_GetPosePrediction()
extern "C"  int32_t VuforiaNativeIosWrapper_RotationalDeviceTracker_GetPosePrediction_m3850489523 (VuforiaNativeIosWrapper_t1584108885 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = VuforiaNativeIosWrapper_rotationalDeviceTracker_GetPosePrediction_m349093224(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::RotationalDeviceTracker_Recenter()
extern "C"  int32_t VuforiaNativeIosWrapper_RotationalDeviceTracker_Recenter_m3993490640 (VuforiaNativeIosWrapper_t1584108885 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = VuforiaNativeIosWrapper_rotationalDeviceTracker_Recenter_m4014575558(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::RotationalDeviceTracker_SetModelCorrectionMode(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_RotationalDeviceTracker_SetModelCorrectionMode_m1914351855 (VuforiaNativeIosWrapper_t1584108885 * __this, int32_t ___mode0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___mode0;
		int32_t L_1 = VuforiaNativeIosWrapper_rotationalDeviceTracker_SetModelCorrectionMode_m2260534072(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::RotationalDeviceTracker_SetModelCorrectionModeWithTransform(System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_RotationalDeviceTracker_SetModelCorrectionModeWithTransform_m2535574843 (VuforiaNativeIosWrapper_t1584108885 * __this, int32_t ___mode0, IntPtr_t ___pivot1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___mode0;
		IntPtr_t L_1 = ___pivot1;
		int32_t L_2 = VuforiaNativeIosWrapper_rotationalDeviceTracker_SetModelCorrectionModeWithTransform_m2550796783(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::RotationalDeviceTracker_SetPosePrediction(System.Boolean)
extern "C"  int32_t VuforiaNativeIosWrapper_RotationalDeviceTracker_SetPosePrediction_m721576813 (VuforiaNativeIosWrapper_t1584108885 * __this, bool ___mode0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___mode0;
		int32_t L_1 = VuforiaNativeIosWrapper_rotationalDeviceTracker_SetPosePrediction_m306258204(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Vuforia.VuforiaNativeIosWrapper::SetApplicationEnvironment(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void VuforiaNativeIosWrapper_SetApplicationEnvironment_m2083052270 (VuforiaNativeIosWrapper_t1584108885 * __this, int32_t ___unityVersionMajor0, int32_t ___unityVersionMinor1, int32_t ___unityVersionChange2, int32_t ___sdkWrapperType3, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___unityVersionMajor0;
		int32_t L_1 = ___unityVersionMinor1;
		int32_t L_2 = ___unityVersionChange2;
		int32_t L_3 = ___sdkWrapperType3;
		VuforiaNativeIosWrapper_setApplicationEnvironment_m3180531107(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::SetHolographicAppCS(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_SetHolographicAppCS_m540861387 (VuforiaNativeIosWrapper_t1584108885 * __this, IntPtr_t ___appSpecifiedCS0, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___appSpecifiedCS0;
		int32_t L_1 = VuforiaNativeIosWrapper_setHolographicAppCS_m3474711345(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Vuforia.VuforiaNativeIosWrapper::SetRenderBuffers(System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_SetRenderBuffers_m3815875013 (VuforiaNativeIosWrapper_t1584108885 * __this, IntPtr_t ___colorBuffer0, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___colorBuffer0;
		VuforiaNativeIosWrapper_setRenderBuffers_m2942731362(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.VuforiaNativeIosWrapper::SetStateBufferSize(System.Int32)
extern "C"  void VuforiaNativeIosWrapper_SetStateBufferSize_m416382662 (VuforiaNativeIosWrapper_t1584108885 * __this, int32_t ___size0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___size0;
		VuforiaNativeIosWrapper_setStateBufferSize_m2503428096(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::SmartTerrainBuilderAddReconstruction(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_SmartTerrainBuilderAddReconstruction_m878218662 (VuforiaNativeIosWrapper_t1584108885 * __this, IntPtr_t ___reconstruction0, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___reconstruction0;
		int32_t L_1 = VuforiaNativeIosWrapper_smartTerrainBuilderAddReconstruction_m4282467679(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::SmartTerrainBuilderCreateReconstructionFromEnvironment()
extern "C"  IntPtr_t VuforiaNativeIosWrapper_SmartTerrainBuilderCreateReconstructionFromEnvironment_m4009521861 (VuforiaNativeIosWrapper_t1584108885 * __this, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = VuforiaNativeIosWrapper_smartTerrainBuilderCreateReconstructionFromEnvironment_m750780024(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::SmartTerrainBuilderCreateReconstructionFromTarget()
extern "C"  IntPtr_t VuforiaNativeIosWrapper_SmartTerrainBuilderCreateReconstructionFromTarget_m3949358226 (VuforiaNativeIosWrapper_t1584108885 * __this, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = VuforiaNativeIosWrapper_smartTerrainBuilderCreateReconstructionFromTarget_m115541585(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::SmartTerrainBuilderDestroyReconstruction(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_SmartTerrainBuilderDestroyReconstruction_m3923346826 (VuforiaNativeIosWrapper_t1584108885 * __this, IntPtr_t ___reconstruction0, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___reconstruction0;
		int32_t L_1 = VuforiaNativeIosWrapper_smartTerrainBuilderDestroyReconstruction_m3760270767(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::SmartTerrainBuilderRemoveReconstruction(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_SmartTerrainBuilderRemoveReconstruction_m23104685 (VuforiaNativeIosWrapper_t1584108885 * __this, IntPtr_t ___reconstruction0, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___reconstruction0;
		int32_t L_1 = VuforiaNativeIosWrapper_smartTerrainBuilderRemoveReconstruction_m1168953388(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::SmartTerrainTrackerDeinitBuilder()
extern "C"  int32_t VuforiaNativeIosWrapper_SmartTerrainTrackerDeinitBuilder_m2472406576 (VuforiaNativeIosWrapper_t1584108885 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = VuforiaNativeIosWrapper_smartTerrainTrackerDeinitBuilder_m862648353(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::SmartTerrainTrackerInitBuilder()
extern "C"  int32_t VuforiaNativeIosWrapper_SmartTerrainTrackerInitBuilder_m145195545 (VuforiaNativeIosWrapper_t1584108885 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = VuforiaNativeIosWrapper_smartTerrainTrackerInitBuilder_m786166929(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::SmartTerrainTrackerSetScaleToMillimeter(System.Single)
extern "C"  int32_t VuforiaNativeIosWrapper_SmartTerrainTrackerSetScaleToMillimeter_m3234458767 (VuforiaNativeIosWrapper_t1584108885 * __this, float ___scaleToMillimenters0, const RuntimeMethod* method)
{
	{
		float L_0 = ___scaleToMillimenters0;
		int32_t L_1 = VuforiaNativeIosWrapper_smartTerrainTrackerSetScaleToMillimeter_m313994157(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::StartExtendedTracking(System.IntPtr,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_StartExtendedTracking_m300946550 (VuforiaNativeIosWrapper_t1584108885 * __this, IntPtr_t ___dataSetPtr0, int32_t ___trackableID1, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___dataSetPtr0;
		int32_t L_1 = ___trackableID1;
		int32_t L_2 = VuforiaNativeIosWrapper_startExtendedTracking_m1122849092(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::StopExtendedTracking(System.IntPtr,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_StopExtendedTracking_m2782007264 (VuforiaNativeIosWrapper_t1584108885 * __this, IntPtr_t ___dataSetPtr0, int32_t ___trackableID1, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___dataSetPtr0;
		int32_t L_1 = ___trackableID1;
		int32_t L_2 = VuforiaNativeIosWrapper_stopExtendedTracking_m3905826888(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void Vuforia.VuforiaNativeIosWrapper::TargetFinderClearTrackables()
extern "C"  void VuforiaNativeIosWrapper_TargetFinderClearTrackables_m4243836172 (VuforiaNativeIosWrapper_t1584108885 * __this, const RuntimeMethod* method)
{
	{
		VuforiaNativeIosWrapper_targetFinderClearTrackables_m4187968851(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::TargetFinderDeinit()
extern "C"  int32_t VuforiaNativeIosWrapper_TargetFinderDeinit_m1345760913 (VuforiaNativeIosWrapper_t1584108885 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = VuforiaNativeIosWrapper_targetFinderDeinit_m983259518(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::TargetFinderEnableTracking(System.IntPtr,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_TargetFinderEnableTracking_m3717022062 (VuforiaNativeIosWrapper_t1584108885 * __this, IntPtr_t ___searchResult0, IntPtr_t ___trackableData1, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___searchResult0;
		IntPtr_t L_1 = ___trackableData1;
		int32_t L_2 = VuforiaNativeIosWrapper_targetFinderEnableTracking_m2448418215(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void Vuforia.VuforiaNativeIosWrapper::TargetFinderGetImageTargets(System.IntPtr,System.Int32)
extern "C"  void VuforiaNativeIosWrapper_TargetFinderGetImageTargets_m1656092868 (VuforiaNativeIosWrapper_t1584108885 * __this, IntPtr_t ___trackableIdArray0, int32_t ___trackableIdArrayLength1, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___trackableIdArray0;
		int32_t L_1 = ___trackableIdArrayLength1;
		VuforiaNativeIosWrapper_targetFinderGetImageTargets_m981824355(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::TargetFinderGetInitState()
extern "C"  int32_t VuforiaNativeIosWrapper_TargetFinderGetInitState_m3594368043 (VuforiaNativeIosWrapper_t1584108885 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = VuforiaNativeIosWrapper_targetFinderGetInitState_m4222749029(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::TargetFinderGetResults(System.IntPtr,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_TargetFinderGetResults_m3009960742 (VuforiaNativeIosWrapper_t1584108885 * __this, IntPtr_t ___searchResultArray0, int32_t ___searchResultArrayLength1, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___searchResultArray0;
		int32_t L_1 = ___searchResultArrayLength1;
		int32_t L_2 = VuforiaNativeIosWrapper_targetFinderGetResults_m1879124834(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::TargetFinderStartInit(System.String,System.String)
extern "C"  int32_t VuforiaNativeIosWrapper_TargetFinderStartInit_m445598871 (VuforiaNativeIosWrapper_t1584108885 * __this, String_t* ___userKey0, String_t* ___secretKey1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___userKey0;
		String_t* L_1 = ___secretKey1;
		int32_t L_2 = VuforiaNativeIosWrapper_targetFinderStartInit_m3653974033(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::TargetFinderStartRecognition()
extern "C"  int32_t VuforiaNativeIosWrapper_TargetFinderStartRecognition_m1781636152 (VuforiaNativeIosWrapper_t1584108885 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = VuforiaNativeIosWrapper_targetFinderStartRecognition_m1589074166(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::TargetFinderStop()
extern "C"  int32_t VuforiaNativeIosWrapper_TargetFinderStop_m3145715506 (VuforiaNativeIosWrapper_t1584108885 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = VuforiaNativeIosWrapper_targetFinderStop_m1289539814(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void Vuforia.VuforiaNativeIosWrapper::TargetFinderUpdate(System.IntPtr,System.Int32)
extern "C"  void VuforiaNativeIosWrapper_TargetFinderUpdate_m1136480575 (VuforiaNativeIosWrapper_t1584108885 * __this, IntPtr_t ___targetFinderState0, int32_t ___filterMode1, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___targetFinderState0;
		int32_t L_1 = ___filterMode1;
		VuforiaNativeIosWrapper_targetFinderUpdate_m1996478393(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Vuforia.VuforiaNativeIosWrapper::TextTrackerGetRegionOfInterest(System.IntPtr,System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_TextTrackerGetRegionOfInterest_m1789289335 (VuforiaNativeIosWrapper_t1584108885 * __this, IntPtr_t ___detectionROI0, IntPtr_t ___trackingROI1, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___detectionROI0;
		IntPtr_t L_1 = ___trackingROI1;
		VuforiaNativeIosWrapper_textTrackerGetRegionOfInterest_m494308765(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::TextTrackerSetRegionOfInterest(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_TextTrackerSetRegionOfInterest_m3537601477 (VuforiaNativeIosWrapper_t1584108885 * __this, int32_t ___detectionLeftTopX0, int32_t ___detectionLeftTopY1, int32_t ___detectionRightBottomX2, int32_t ___detectionRightBottomY3, int32_t ___trackingLeftTopX4, int32_t ___trackingLeftTopY5, int32_t ___trackingRightBottomX6, int32_t ___trackingRightBottomY7, int32_t ___upDirection8, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___detectionLeftTopX0;
		int32_t L_1 = ___detectionLeftTopY1;
		int32_t L_2 = ___detectionRightBottomX2;
		int32_t L_3 = ___detectionRightBottomY3;
		int32_t L_4 = ___trackingLeftTopX4;
		int32_t L_5 = ___trackingLeftTopY5;
		int32_t L_6 = ___trackingRightBottomX6;
		int32_t L_7 = ___trackingRightBottomY7;
		int32_t L_8 = ___upDirection8;
		int32_t L_9 = VuforiaNativeIosWrapper_textTrackerSetRegionOfInterest_m2406724781(NULL /*static, unused*/, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::TrackerManagerDeinitTracker(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_TrackerManagerDeinitTracker_m946221747 (VuforiaNativeIosWrapper_t1584108885 * __this, int32_t ___trackerTypeID0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___trackerTypeID0;
		int32_t L_1 = VuforiaNativeIosWrapper_trackerManagerDeinitTracker_m2174100662(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::TrackerManagerInitTracker(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_TrackerManagerInitTracker_m4010557556 (VuforiaNativeIosWrapper_t1584108885 * __this, int32_t ___trackerTypeID0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___trackerTypeID0;
		int32_t L_1 = VuforiaNativeIosWrapper_trackerManagerInitTracker_m2961365684(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::TrackerStart(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_TrackerStart_m3521560335 (VuforiaNativeIosWrapper_t1584108885 * __this, int32_t ___trackerTypeID0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___trackerTypeID0;
		int32_t L_1 = VuforiaNativeIosWrapper_trackerStart_m2485622754(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Vuforia.VuforiaNativeIosWrapper::TrackerStop(System.Int32)
extern "C"  void VuforiaNativeIosWrapper_TrackerStop_m1433148794 (VuforiaNativeIosWrapper_t1584108885 * __this, int32_t ___trackerTypeID0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___trackerTypeID0;
		VuforiaNativeIosWrapper_trackerStop_m2532593528(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::UpdateQCAR(System.IntPtr,System.Int32,System.IntPtr,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_UpdateQCAR_m2373130575 (VuforiaNativeIosWrapper_t1584108885 * __this, IntPtr_t ___imageHeaderDataArray0, int32_t ___imageHeaderArrayLength1, IntPtr_t ___frameState2, int32_t ___screenOrientation3, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___imageHeaderDataArray0;
		int32_t L_1 = ___imageHeaderArrayLength1;
		IntPtr_t L_2 = ___frameState2;
		int32_t L_3 = ___screenOrientation3;
		int32_t L_4 = VuforiaNativeIosWrapper_updateQCAR_m3512176518(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ViewerParameters_ContainsMagnet(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_ViewerParameters_ContainsMagnet_m3951277668 (VuforiaNativeIosWrapper_t1584108885 * __this, IntPtr_t ___obj0, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___obj0;
		int32_t L_1 = VuforiaNativeIosWrapper_viewerParameters_ContainsMagnet_m3404053190(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::ViewerParameters_copy(System.IntPtr)
extern "C"  IntPtr_t VuforiaNativeIosWrapper_ViewerParameters_copy_m2173030125 (VuforiaNativeIosWrapper_t1584108885 * __this, IntPtr_t ___obj0, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___obj0;
		IntPtr_t L_1 = VuforiaNativeIosWrapper_viewerParameters_copy_m483521122(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Vuforia.VuforiaNativeIosWrapper::ViewerParameters_delete(System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_ViewerParameters_delete_m1360709470 (VuforiaNativeIosWrapper_t1584108885 * __this, IntPtr_t ___obj0, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___obj0;
		VuforiaNativeIosWrapper_viewerParameters_delete_m2299903074(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ViewerParameters_GetButtonType(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_ViewerParameters_GetButtonType_m3939099345 (VuforiaNativeIosWrapper_t1584108885 * __this, IntPtr_t ___obj0, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___obj0;
		int32_t L_1 = VuforiaNativeIosWrapper_viewerParameters_GetButtonType_m1307592737(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Single Vuforia.VuforiaNativeIosWrapper::ViewerParameters_GetDistortionCoefficient(System.IntPtr,System.Int32)
extern "C"  float VuforiaNativeIosWrapper_ViewerParameters_GetDistortionCoefficient_m2096980214 (VuforiaNativeIosWrapper_t1584108885 * __this, IntPtr_t ___obj0, int32_t ___idx1, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___obj0;
		int32_t L_1 = ___idx1;
		float L_2 = VuforiaNativeIosWrapper_viewerParameters_GetDistortionCoefficient_m3835343078(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void Vuforia.VuforiaNativeIosWrapper::ViewerParameters_GetFieldOfView(System.IntPtr,System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_ViewerParameters_GetFieldOfView_m1671024194 (VuforiaNativeIosWrapper_t1584108885 * __this, IntPtr_t ___obj0, IntPtr_t ___result1, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___obj0;
		IntPtr_t L_1 = ___result1;
		VuforiaNativeIosWrapper_viewerParameters_GetFieldOfView_m2849157524(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Single Vuforia.VuforiaNativeIosWrapper::ViewerParameters_GetInterLensDistance(System.IntPtr)
extern "C"  float VuforiaNativeIosWrapper_ViewerParameters_GetInterLensDistance_m1730330849 (VuforiaNativeIosWrapper_t1584108885 * __this, IntPtr_t ___obj0, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___obj0;
		float L_1 = VuforiaNativeIosWrapper_viewerParameters_GetInterLensDistance_m2525665738(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Single Vuforia.VuforiaNativeIosWrapper::ViewerParameters_GetLensCentreToTrayDistance(System.IntPtr)
extern "C"  float VuforiaNativeIosWrapper_ViewerParameters_GetLensCentreToTrayDistance_m3985739800 (VuforiaNativeIosWrapper_t1584108885 * __this, IntPtr_t ___obj0, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___obj0;
		float L_1 = VuforiaNativeIosWrapper_viewerParameters_GetLensCentreToTrayDistance_m2796376155(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::ViewerParameters_GetManufacturer(System.IntPtr)
extern "C"  IntPtr_t VuforiaNativeIosWrapper_ViewerParameters_GetManufacturer_m3910323448 (VuforiaNativeIosWrapper_t1584108885 * __this, IntPtr_t ___obj0, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___obj0;
		IntPtr_t L_1 = VuforiaNativeIosWrapper_viewerParameters_GetManufacturer_m3612854118(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::ViewerParameters_GetName(System.IntPtr)
extern "C"  IntPtr_t VuforiaNativeIosWrapper_ViewerParameters_GetName_m1016908924 (VuforiaNativeIosWrapper_t1584108885 * __this, IntPtr_t ___obj0, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___obj0;
		IntPtr_t L_1 = VuforiaNativeIosWrapper_viewerParameters_GetName_m2526646331(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ViewerParameters_GetNumDistortionCoefficients(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_ViewerParameters_GetNumDistortionCoefficients_m1124056634 (VuforiaNativeIosWrapper_t1584108885 * __this, IntPtr_t ___obj0, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___obj0;
		int32_t L_1 = VuforiaNativeIosWrapper_viewerParameters_GetNumDistortionCoefficients_m2743546755(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Single Vuforia.VuforiaNativeIosWrapper::ViewerParameters_GetScreenToLensDistance(System.IntPtr)
extern "C"  float VuforiaNativeIosWrapper_ViewerParameters_GetScreenToLensDistance_m2013559242 (VuforiaNativeIosWrapper_t1584108885 * __this, IntPtr_t ___obj0, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___obj0;
		float L_1 = VuforiaNativeIosWrapper_viewerParameters_GetScreenToLensDistance_m2150660099(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ViewerParameters_GetTrayAlignment(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_ViewerParameters_GetTrayAlignment_m3124367064 (VuforiaNativeIosWrapper_t1584108885 * __this, IntPtr_t ___obj0, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___obj0;
		int32_t L_1 = VuforiaNativeIosWrapper_viewerParameters_GetTrayAlignment_m1514126060(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Single Vuforia.VuforiaNativeIosWrapper::ViewerParameters_GetVersion(System.IntPtr)
extern "C"  float VuforiaNativeIosWrapper_ViewerParameters_GetVersion_m2084393811 (VuforiaNativeIosWrapper_t1584108885 * __this, IntPtr_t ___obj0, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___obj0;
		float L_1 = VuforiaNativeIosWrapper_viewerParameters_GetVersion_m3077411522(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::ViewerParametersList_Begin(System.IntPtr)
extern "C"  IntPtr_t VuforiaNativeIosWrapper_ViewerParametersList_Begin_m2169524872 (VuforiaNativeIosWrapper_t1584108885 * __this, IntPtr_t ___vpList0, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___vpList0;
		IntPtr_t L_1 = VuforiaNativeIosWrapper_viewerParametersList_Begin_m62241854(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::ViewerParametersList_GetByIndex(System.IntPtr,System.Int32)
extern "C"  IntPtr_t VuforiaNativeIosWrapper_ViewerParametersList_GetByIndex_m1251822410 (VuforiaNativeIosWrapper_t1584108885 * __this, IntPtr_t ___vpList0, int32_t ___idx1, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___vpList0;
		int32_t L_1 = ___idx1;
		IntPtr_t L_2 = VuforiaNativeIosWrapper_viewerParametersList_GetByIndex_m2700664943(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::ViewerParametersList_GetByNameManufacturer(System.IntPtr,System.String,System.String)
extern "C"  IntPtr_t VuforiaNativeIosWrapper_ViewerParametersList_GetByNameManufacturer_m3373741045 (VuforiaNativeIosWrapper_t1584108885 * __this, IntPtr_t ___vpList0, String_t* ___name1, String_t* ___manufacturer2, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___vpList0;
		String_t* L_1 = ___name1;
		String_t* L_2 = ___manufacturer2;
		IntPtr_t L_3 = VuforiaNativeIosWrapper_viewerParametersList_GetByNameManufacturer_m3947847597(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::ViewerParametersList_GetListForAuthoringTools()
extern "C"  IntPtr_t VuforiaNativeIosWrapper_ViewerParametersList_GetListForAuthoringTools_m3330451981 (VuforiaNativeIosWrapper_t1584108885 * __this, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = VuforiaNativeIosWrapper_viewerParametersList_GetListForAuthoringTools_m72560898(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::ViewerParametersList_Next(System.IntPtr,System.IntPtr)
extern "C"  IntPtr_t VuforiaNativeIosWrapper_ViewerParametersList_Next_m196658708 (VuforiaNativeIosWrapper_t1584108885 * __this, IntPtr_t ___vpList0, IntPtr_t ___vpLast1, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___vpList0;
		IntPtr_t L_1 = ___vpLast1;
		IntPtr_t L_2 = VuforiaNativeIosWrapper_viewerParametersList_Next_m282216182(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void Vuforia.VuforiaNativeIosWrapper::ViewerParametersList_SetSDKFilter(System.IntPtr,System.String)
extern "C"  void VuforiaNativeIosWrapper_ViewerParametersList_SetSDKFilter_m4102139462 (VuforiaNativeIosWrapper_t1584108885 * __this, IntPtr_t ___vpList0, String_t* ___filter1, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___vpList0;
		String_t* L_1 = ___filter1;
		VuforiaNativeIosWrapper_viewerParametersList_SetSDKFilter_m2725056494(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::ViewerParametersList_Size(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_ViewerParametersList_Size_m3553874705 (VuforiaNativeIosWrapper_t1584108885 * __this, IntPtr_t ___vpList0, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___vpList0;
		int32_t L_1 = VuforiaNativeIosWrapper_viewerParametersList_Size_m1715051476(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::VirtualButtonGetId(System.IntPtr,System.String,System.String)
extern "C"  int32_t VuforiaNativeIosWrapper_VirtualButtonGetId_m3836801918 (VuforiaNativeIosWrapper_t1584108885 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, String_t* ___virtualButtonName2, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___dataSetPtr0;
		String_t* L_1 = ___trackableName1;
		String_t* L_2 = ___virtualButtonName2;
		int32_t L_3 = VuforiaNativeIosWrapper_virtualButtonGetId_m2872628959(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::VirtualButtonSetAreaRectangle(System.IntPtr,System.String,System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_VirtualButtonSetAreaRectangle_m371533472 (VuforiaNativeIosWrapper_t1584108885 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, String_t* ___virtualButtonName2, IntPtr_t ___rectData3, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___dataSetPtr0;
		String_t* L_1 = ___trackableName1;
		String_t* L_2 = ___virtualButtonName2;
		IntPtr_t L_3 = ___rectData3;
		int32_t L_4 = VuforiaNativeIosWrapper_virtualButtonSetAreaRectangle_m2149311299(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::VirtualButtonSetEnabled(System.IntPtr,System.String,System.String,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_VirtualButtonSetEnabled_m976988715 (VuforiaNativeIosWrapper_t1584108885 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, String_t* ___virtualButtonName2, int32_t ___enabled3, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___dataSetPtr0;
		String_t* L_1 = ___trackableName1;
		String_t* L_2 = ___virtualButtonName2;
		int32_t L_3 = ___enabled3;
		int32_t L_4 = VuforiaNativeIosWrapper_virtualButtonSetEnabled_m1130838900(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::VirtualButtonSetSensitivity(System.IntPtr,System.String,System.String,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_VirtualButtonSetSensitivity_m2859243593 (VuforiaNativeIosWrapper_t1584108885 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, String_t* ___virtualButtonName2, int32_t ___sensitivity3, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___dataSetPtr0;
		String_t* L_1 = ___trackableName1;
		String_t* L_2 = ___virtualButtonName2;
		int32_t L_3 = ___sensitivity3;
		int32_t L_4 = VuforiaNativeIosWrapper_virtualButtonSetSensitivity_m1128794600(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::VuforiaGetRenderEventCallback()
extern "C"  IntPtr_t VuforiaNativeIosWrapper_VuforiaGetRenderEventCallback_m3715884881 (VuforiaNativeIosWrapper_t1584108885 * __this, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = VuforiaNativeIosWrapper_vuforiaGetRenderEventCallback_m3555660133(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::VuMarkTargetGetInstanceImage(System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_VuMarkTargetGetInstanceImage_m2285836537 (VuforiaNativeIosWrapper_t1584108885 * __this, int32_t ___vuMarkTargetID0, IntPtr_t ___instanceImage1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___vuMarkTargetID0;
		IntPtr_t L_1 = ___instanceImage1;
		int32_t L_2 = VuforiaNativeIosWrapper_vuMarkTargetGetInstanceImage_m2674287387(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::VuMarkTemplateGetOrigin(System.IntPtr,System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_VuMarkTemplateGetOrigin_m2358811565 (VuforiaNativeIosWrapper_t1584108885 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, IntPtr_t ___originPtr2, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___dataSetPtr0;
		String_t* L_1 = ___trackableName1;
		IntPtr_t L_2 = ___originPtr2;
		int32_t L_3 = VuforiaNativeIosWrapper_vuMarkTemplateGetOrigin_m3601309644(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::VuMarkTemplateGetVuMarkUserData(System.IntPtr,System.String,System.Text.StringBuilder,System.UInt32)
extern "C"  int32_t VuforiaNativeIosWrapper_VuMarkTemplateGetVuMarkUserData_m1925512316 (VuforiaNativeIosWrapper_t1584108885 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, StringBuilder_t2306688936 * ___data2, uint32_t ___dataLength3, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___dataSetPtr0;
		String_t* L_1 = ___trackableName1;
		StringBuilder_t2306688936 * L_2 = ___data2;
		uint32_t L_3 = ___dataLength3;
		int32_t L_4 = VuforiaNativeIosWrapper_vuMarkTemplateGetVuMarkUserData_m1712451288(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::VuMarkTemplateSetTrackingFromRuntimeAppearance(System.IntPtr,System.String,System.Boolean)
extern "C"  int32_t VuforiaNativeIosWrapper_VuMarkTemplateSetTrackingFromRuntimeAppearance_m519795615 (VuforiaNativeIosWrapper_t1584108885 * __this, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, bool ___enable2, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___dataSetPtr0;
		String_t* L_1 = ___trackableName1;
		bool L_2 = ___enable2;
		int32_t L_3 = VuforiaNativeIosWrapper_vuMarkTemplateSetTrackingFromRuntimeAppearance_m2239458546(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::WordGetLetterBoundingBoxes(System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_WordGetLetterBoundingBoxes_m4193041657 (VuforiaNativeIosWrapper_t1584108885 * __this, int32_t ___wordID0, IntPtr_t ___letterBoundingBoxes1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___wordID0;
		IntPtr_t L_1 = ___letterBoundingBoxes1;
		int32_t L_2 = VuforiaNativeIosWrapper_wordGetLetterBoundingBoxes_m3993191038(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::WordGetLetterMask(System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_WordGetLetterMask_m696967372 (VuforiaNativeIosWrapper_t1584108885 * __this, int32_t ___wordID0, IntPtr_t ___letterMaskImage1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___wordID0;
		IntPtr_t L_1 = ___letterMaskImage1;
		int32_t L_2 = VuforiaNativeIosWrapper_wordGetLetterMask_m2712222170(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::WordListAddWordsFromFile(System.String,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_WordListAddWordsFromFile_m1551229073 (VuforiaNativeIosWrapper_t1584108885 * __this, String_t* ___path0, int32_t ___storageType1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___path0;
		int32_t L_1 = ___storageType1;
		int32_t L_2 = VuforiaNativeIosWrapper_wordListAddWordsFromFile_m4142686626(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::WordListAddWordToFilterListU(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_WordListAddWordToFilterListU_m3745476989 (VuforiaNativeIosWrapper_t1584108885 * __this, IntPtr_t ___word0, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___word0;
		int32_t L_1 = VuforiaNativeIosWrapper_wordListAddWordToFilterListU_m2127630879(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::WordListAddWordU(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_WordListAddWordU_m2277049411 (VuforiaNativeIosWrapper_t1584108885 * __this, IntPtr_t ___word0, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___word0;
		int32_t L_1 = VuforiaNativeIosWrapper_wordListAddWordU_m430450375(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::WordListClearFilterList()
extern "C"  int32_t VuforiaNativeIosWrapper_WordListClearFilterList_m1414306764 (VuforiaNativeIosWrapper_t1584108885 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = VuforiaNativeIosWrapper_wordListClearFilterList_m880805531(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::WordListContainsWordU(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_WordListContainsWordU_m1870714395 (VuforiaNativeIosWrapper_t1584108885 * __this, IntPtr_t ___word0, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___word0;
		int32_t L_1 = VuforiaNativeIosWrapper_wordListContainsWordU_m3302894438(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::WordListGetFilterListWordCount()
extern "C"  int32_t VuforiaNativeIosWrapper_WordListGetFilterListWordCount_m3553936963 (VuforiaNativeIosWrapper_t1584108885 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = VuforiaNativeIosWrapper_wordListGetFilterListWordCount_m1648409397(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::WordListGetFilterListWordU(System.Int32)
extern "C"  IntPtr_t VuforiaNativeIosWrapper_WordListGetFilterListWordU_m728449520 (VuforiaNativeIosWrapper_t1584108885 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___i0;
		IntPtr_t L_1 = VuforiaNativeIosWrapper_wordListGetFilterListWordU_m3199133604(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::WordListGetFilterMode()
extern "C"  int32_t VuforiaNativeIosWrapper_WordListGetFilterMode_m2574077516 (VuforiaNativeIosWrapper_t1584108885 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = VuforiaNativeIosWrapper_wordListGetFilterMode_m2845743601(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::WordListLoadFilterList(System.String,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_WordListLoadFilterList_m121756869 (VuforiaNativeIosWrapper_t1584108885 * __this, String_t* ___path0, int32_t ___storageType1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___path0;
		int32_t L_1 = ___storageType1;
		int32_t L_2 = VuforiaNativeIosWrapper_wordListLoadFilterList_m3268824786(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::WordListLoadWordList(System.String,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_WordListLoadWordList_m2783311221 (VuforiaNativeIosWrapper_t1584108885 * __this, String_t* ___path0, int32_t ___storageType1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___path0;
		int32_t L_1 = ___storageType1;
		int32_t L_2 = VuforiaNativeIosWrapper_wordListLoadWordList_m1994671799(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::WordListRemoveWordFromFilterListU(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_WordListRemoveWordFromFilterListU_m2734811354 (VuforiaNativeIosWrapper_t1584108885 * __this, IntPtr_t ___word0, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___word0;
		int32_t L_1 = VuforiaNativeIosWrapper_wordListRemoveWordFromFilterListU_m2751967863(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::WordListRemoveWordU(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_WordListRemoveWordU_m2546717354 (VuforiaNativeIosWrapper_t1584108885 * __this, IntPtr_t ___word0, const RuntimeMethod* method)
{
	{
		IntPtr_t L_0 = ___word0;
		int32_t L_1 = VuforiaNativeIosWrapper_wordListRemoveWordU_m1405418933(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::WordListSetFilterMode(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_WordListSetFilterMode_m1439610924 (VuforiaNativeIosWrapper_t1584108885 * __this, int32_t ___mode0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___mode0;
		int32_t L_1 = VuforiaNativeIosWrapper_wordListSetFilterMode_m3944972900(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 Vuforia.VuforiaNativeIosWrapper::WordListUnloadAllLists()
extern "C"  int32_t VuforiaNativeIosWrapper_WordListUnloadAllLists_m1241733610 (VuforiaNativeIosWrapper_t1584108885 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = VuforiaNativeIosWrapper_wordListUnloadAllLists_m2647922363(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
extern "C" int32_t DEFAULT_CALL cameraDeviceDeinitCamera();
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceDeinitCamera()
extern "C"  int32_t VuforiaNativeIosWrapper_cameraDeviceDeinitCamera_m644094069 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(cameraDeviceDeinitCamera)();

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL cameraDeviceGetCameraDirection();
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceGetCameraDirection()
extern "C"  int32_t VuforiaNativeIosWrapper_cameraDeviceGetCameraDirection_m874580439 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(cameraDeviceGetCameraDirection)();

	return returnValue;
}
extern "C" void DEFAULT_CALL cameraDeviceGetCameraField(intptr_t, int32_t);
// System.Void Vuforia.VuforiaNativeIosWrapper::cameraDeviceGetCameraField(System.IntPtr,System.Int32)
extern "C"  void VuforiaNativeIosWrapper_cameraDeviceGetCameraField_m297532260 (RuntimeObject * __this /* static, unused */, IntPtr_t ___cameraField0, int32_t ___idx1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(cameraDeviceGetCameraField)(reinterpret_cast<intptr_t>((___cameraField0).get_m_value_0()), ___idx1);

}
extern "C" int32_t DEFAULT_CALL cameraDeviceGetCameraFieldOfViewRads(intptr_t);
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceGetCameraFieldOfViewRads(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_cameraDeviceGetCameraFieldOfViewRads_m2251503585 (RuntimeObject * __this /* static, unused */, IntPtr_t ___fovVectorContainer0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(cameraDeviceGetCameraFieldOfViewRads)(reinterpret_cast<intptr_t>((___fovVectorContainer0).get_m_value_0()));

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL cameraDeviceGetFieldBool(char*, intptr_t);
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceGetFieldBool(System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_cameraDeviceGetFieldBool_m2925748338 (RuntimeObject * __this /* static, unused */, String_t* ___key0, IntPtr_t ___value1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (char*, intptr_t);

	// Marshaling of parameter '___key0' to native representation
	char* ____key0_marshaled = NULL;
	____key0_marshaled = il2cpp_codegen_marshal_string(___key0);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(cameraDeviceGetFieldBool)(____key0_marshaled, reinterpret_cast<intptr_t>((___value1).get_m_value_0()));

	// Marshaling cleanup of parameter '___key0' native representation
	il2cpp_codegen_marshal_free(____key0_marshaled);
	____key0_marshaled = NULL;

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL cameraDeviceGetFieldFloat(char*, intptr_t);
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceGetFieldFloat(System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_cameraDeviceGetFieldFloat_m714523531 (RuntimeObject * __this /* static, unused */, String_t* ___key0, IntPtr_t ___value1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (char*, intptr_t);

	// Marshaling of parameter '___key0' to native representation
	char* ____key0_marshaled = NULL;
	____key0_marshaled = il2cpp_codegen_marshal_string(___key0);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(cameraDeviceGetFieldFloat)(____key0_marshaled, reinterpret_cast<intptr_t>((___value1).get_m_value_0()));

	// Marshaling cleanup of parameter '___key0' native representation
	il2cpp_codegen_marshal_free(____key0_marshaled);
	____key0_marshaled = NULL;

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL cameraDeviceGetFieldInt64(char*, intptr_t);
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceGetFieldInt64(System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_cameraDeviceGetFieldInt64_m2056193684 (RuntimeObject * __this /* static, unused */, String_t* ___key0, IntPtr_t ___value1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (char*, intptr_t);

	// Marshaling of parameter '___key0' to native representation
	char* ____key0_marshaled = NULL;
	____key0_marshaled = il2cpp_codegen_marshal_string(___key0);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(cameraDeviceGetFieldInt64)(____key0_marshaled, reinterpret_cast<intptr_t>((___value1).get_m_value_0()));

	// Marshaling cleanup of parameter '___key0' native representation
	il2cpp_codegen_marshal_free(____key0_marshaled);
	____key0_marshaled = NULL;

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL cameraDeviceGetFieldInt64Range(char*, intptr_t);
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceGetFieldInt64Range(System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_cameraDeviceGetFieldInt64Range_m1063827171 (RuntimeObject * __this /* static, unused */, String_t* ___key0, IntPtr_t ___intRange1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (char*, intptr_t);

	// Marshaling of parameter '___key0' to native representation
	char* ____key0_marshaled = NULL;
	____key0_marshaled = il2cpp_codegen_marshal_string(___key0);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(cameraDeviceGetFieldInt64Range)(____key0_marshaled, reinterpret_cast<intptr_t>((___intRange1).get_m_value_0()));

	// Marshaling cleanup of parameter '___key0' native representation
	il2cpp_codegen_marshal_free(____key0_marshaled);
	____key0_marshaled = NULL;

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL cameraDeviceGetFieldString(char*, char*, int32_t);
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceGetFieldString(System.String,System.Text.StringBuilder,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_cameraDeviceGetFieldString_m969437432 (RuntimeObject * __this /* static, unused */, String_t* ___key0, StringBuilder_t2306688936 * ___value1, int32_t ___maxLength2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (char*, char*, int32_t);

	// Marshaling of parameter '___key0' to native representation
	char* ____key0_marshaled = NULL;
	____key0_marshaled = il2cpp_codegen_marshal_string(___key0);

	// Marshaling of parameter '___value1' to native representation
	char* ____value1_marshaled = NULL;
	____value1_marshaled = il2cpp_codegen_marshal_string_builder(___value1);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(cameraDeviceGetFieldString)(____key0_marshaled, ____value1_marshaled, ___maxLength2);

	// Marshaling cleanup of parameter '___key0' native representation
	il2cpp_codegen_marshal_free(____key0_marshaled);
	____key0_marshaled = NULL;

	// Marshaling of parameter '___value1' back from native representation
	il2cpp_codegen_marshal_string_builder_result(___value1, ____value1_marshaled);

	// Marshaling cleanup of parameter '___value1' native representation
	il2cpp_codegen_marshal_free(____value1_marshaled);
	____value1_marshaled = NULL;

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL cameraDeviceGetNumCameraFields();
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceGetNumCameraFields()
extern "C"  int32_t VuforiaNativeIosWrapper_cameraDeviceGetNumCameraFields_m622964704 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(cameraDeviceGetNumCameraFields)();

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL cameraDeviceGetNumVideoModes();
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceGetNumVideoModes()
extern "C"  int32_t VuforiaNativeIosWrapper_cameraDeviceGetNumVideoModes_m2446775446 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(cameraDeviceGetNumVideoModes)();

	return returnValue;
}
extern "C" void DEFAULT_CALL cameraDeviceGetVideoMode(int32_t, intptr_t);
// System.Void Vuforia.VuforiaNativeIosWrapper::cameraDeviceGetVideoMode(System.Int32,System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_cameraDeviceGetVideoMode_m4000617089 (RuntimeObject * __this /* static, unused */, int32_t ___idx0, IntPtr_t ___videoMode1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(cameraDeviceGetVideoMode)(___idx0, reinterpret_cast<intptr_t>((___videoMode1).get_m_value_0()));

}
extern "C" int32_t DEFAULT_CALL cameraDeviceInitCamera(int32_t);
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceInitCamera(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_cameraDeviceInitCamera_m2826145961 (RuntimeObject * __this /* static, unused */, int32_t ___camera0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(cameraDeviceInitCamera)(___camera0);

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL cameraDeviceSelectVideoMode(int32_t);
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceSelectVideoMode(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_cameraDeviceSelectVideoMode_m2393162409 (RuntimeObject * __this /* static, unused */, int32_t ___idx0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(cameraDeviceSelectVideoMode)(___idx0);

	return returnValue;
}
extern "C" void DEFAULT_CALL cameraDeviceSetCameraConfiguration(int32_t, int32_t);
// System.Void Vuforia.VuforiaNativeIosWrapper::cameraDeviceSetCameraConfiguration(System.Int32,System.Int32)
extern "C"  void VuforiaNativeIosWrapper_cameraDeviceSetCameraConfiguration_m3394980764 (RuntimeObject * __this /* static, unused */, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(cameraDeviceSetCameraConfiguration)(___width0, ___height1);

}
extern "C" int32_t DEFAULT_CALL cameraDeviceSetFieldBool(char*, int32_t);
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceSetFieldBool(System.String,System.Boolean)
extern "C"  int32_t VuforiaNativeIosWrapper_cameraDeviceSetFieldBool_m1927910692 (RuntimeObject * __this /* static, unused */, String_t* ___key0, bool ___value1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (char*, int32_t);

	// Marshaling of parameter '___key0' to native representation
	char* ____key0_marshaled = NULL;
	____key0_marshaled = il2cpp_codegen_marshal_string(___key0);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(cameraDeviceSetFieldBool)(____key0_marshaled, static_cast<int32_t>(___value1));

	// Marshaling cleanup of parameter '___key0' native representation
	il2cpp_codegen_marshal_free(____key0_marshaled);
	____key0_marshaled = NULL;

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL cameraDeviceSetFieldFloat(char*, float);
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceSetFieldFloat(System.String,System.Single)
extern "C"  int32_t VuforiaNativeIosWrapper_cameraDeviceSetFieldFloat_m172734831 (RuntimeObject * __this /* static, unused */, String_t* ___key0, float ___value1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (char*, float);

	// Marshaling of parameter '___key0' to native representation
	char* ____key0_marshaled = NULL;
	____key0_marshaled = il2cpp_codegen_marshal_string(___key0);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(cameraDeviceSetFieldFloat)(____key0_marshaled, ___value1);

	// Marshaling cleanup of parameter '___key0' native representation
	il2cpp_codegen_marshal_free(____key0_marshaled);
	____key0_marshaled = NULL;

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL cameraDeviceSetFieldInt64(char*, int64_t);
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceSetFieldInt64(System.String,System.Int64)
extern "C"  int32_t VuforiaNativeIosWrapper_cameraDeviceSetFieldInt64_m3712224070 (RuntimeObject * __this /* static, unused */, String_t* ___key0, int64_t ___value1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (char*, int64_t);

	// Marshaling of parameter '___key0' to native representation
	char* ____key0_marshaled = NULL;
	____key0_marshaled = il2cpp_codegen_marshal_string(___key0);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(cameraDeviceSetFieldInt64)(____key0_marshaled, ___value1);

	// Marshaling cleanup of parameter '___key0' native representation
	il2cpp_codegen_marshal_free(____key0_marshaled);
	____key0_marshaled = NULL;

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL cameraDeviceSetFieldInt64Range(char*, int64_t, int64_t);
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceSetFieldInt64Range(System.String,System.Int64,System.Int64)
extern "C"  int32_t VuforiaNativeIosWrapper_cameraDeviceSetFieldInt64Range_m3836252703 (RuntimeObject * __this /* static, unused */, String_t* ___key0, int64_t ___intRangeFrom1, int64_t ___intRangeTo2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (char*, int64_t, int64_t);

	// Marshaling of parameter '___key0' to native representation
	char* ____key0_marshaled = NULL;
	____key0_marshaled = il2cpp_codegen_marshal_string(___key0);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(cameraDeviceSetFieldInt64Range)(____key0_marshaled, ___intRangeFrom1, ___intRangeTo2);

	// Marshaling cleanup of parameter '___key0' native representation
	il2cpp_codegen_marshal_free(____key0_marshaled);
	____key0_marshaled = NULL;

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL cameraDeviceSetFieldString(char*, char*);
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceSetFieldString(System.String,System.String)
extern "C"  int32_t VuforiaNativeIosWrapper_cameraDeviceSetFieldString_m3836835561 (RuntimeObject * __this /* static, unused */, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (char*, char*);

	// Marshaling of parameter '___key0' to native representation
	char* ____key0_marshaled = NULL;
	____key0_marshaled = il2cpp_codegen_marshal_string(___key0);

	// Marshaling of parameter '___value1' to native representation
	char* ____value1_marshaled = NULL;
	____value1_marshaled = il2cpp_codegen_marshal_string(___value1);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(cameraDeviceSetFieldString)(____key0_marshaled, ____value1_marshaled);

	// Marshaling cleanup of parameter '___key0' native representation
	il2cpp_codegen_marshal_free(____key0_marshaled);
	____key0_marshaled = NULL;

	// Marshaling cleanup of parameter '___value1' native representation
	il2cpp_codegen_marshal_free(____value1_marshaled);
	____value1_marshaled = NULL;

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL cameraDeviceSetFlashTorchMode(int32_t);
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceSetFlashTorchMode(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_cameraDeviceSetFlashTorchMode_m4086721926 (RuntimeObject * __this /* static, unused */, int32_t ___on0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(cameraDeviceSetFlashTorchMode)(___on0);

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL cameraDeviceSetFocusMode(int32_t);
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceSetFocusMode(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_cameraDeviceSetFocusMode_m2652732454 (RuntimeObject * __this /* static, unused */, int32_t ___focusMode0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(cameraDeviceSetFocusMode)(___focusMode0);

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL cameraDeviceStartCamera();
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceStartCamera()
extern "C"  int32_t VuforiaNativeIosWrapper_cameraDeviceStartCamera_m2697665266 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(cameraDeviceStartCamera)();

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL cameraDeviceStopCamera();
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cameraDeviceStopCamera()
extern "C"  int32_t VuforiaNativeIosWrapper_cameraDeviceStopCamera_m1035779002 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(cameraDeviceStopCamera)();

	return returnValue;
}
extern "C" void DEFAULT_CALL customViewerParameters_AddDistortionCoefficient(intptr_t, float);
// System.Void Vuforia.VuforiaNativeIosWrapper::customViewerParameters_AddDistortionCoefficient(System.IntPtr,System.Single)
extern "C"  void VuforiaNativeIosWrapper_customViewerParameters_AddDistortionCoefficient_m595790826 (RuntimeObject * __this /* static, unused */, IntPtr_t ___obj0, float ___val1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, float);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(customViewerParameters_AddDistortionCoefficient)(reinterpret_cast<intptr_t>((___obj0).get_m_value_0()), ___val1);

}
extern "C" void DEFAULT_CALL customViewerParameters_ClearDistortionCoefficients(intptr_t);
// System.Void Vuforia.VuforiaNativeIosWrapper::customViewerParameters_ClearDistortionCoefficients(System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_customViewerParameters_ClearDistortionCoefficients_m3605298064 (RuntimeObject * __this /* static, unused */, IntPtr_t ___obj0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(customViewerParameters_ClearDistortionCoefficients)(reinterpret_cast<intptr_t>((___obj0).get_m_value_0()));

}
extern "C" void DEFAULT_CALL customViewerParameters_delete(intptr_t);
// System.Void Vuforia.VuforiaNativeIosWrapper::customViewerParameters_delete(System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_customViewerParameters_delete_m22360893 (RuntimeObject * __this /* static, unused */, IntPtr_t ___obj0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(customViewerParameters_delete)(reinterpret_cast<intptr_t>((___obj0).get_m_value_0()));

}
extern "C" intptr_t DEFAULT_CALL customViewerParameters_new(float, char*, char*);
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::customViewerParameters_new(System.Single,System.String,System.String)
extern "C"  IntPtr_t VuforiaNativeIosWrapper_customViewerParameters_new_m961749849 (RuntimeObject * __this /* static, unused */, float ___version0, String_t* ___name1, String_t* ___manufacturer2, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (float, char*, char*);

	// Marshaling of parameter '___name1' to native representation
	char* ____name1_marshaled = NULL;
	____name1_marshaled = il2cpp_codegen_marshal_string(___name1);

	// Marshaling of parameter '___manufacturer2' to native representation
	char* ____manufacturer2_marshaled = NULL;
	____manufacturer2_marshaled = il2cpp_codegen_marshal_string(___manufacturer2);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(customViewerParameters_new)(___version0, ____name1_marshaled, ____manufacturer2_marshaled);

	// Marshaling of return value back from native representation
	IntPtr_t _returnValue_unmarshaled;
	_returnValue_unmarshaled.set_m_value_0(reinterpret_cast<void*>((intptr_t)(returnValue)));

	// Marshaling cleanup of parameter '___name1' native representation
	il2cpp_codegen_marshal_free(____name1_marshaled);
	____name1_marshaled = NULL;

	// Marshaling cleanup of parameter '___manufacturer2' native representation
	il2cpp_codegen_marshal_free(____manufacturer2_marshaled);
	____manufacturer2_marshaled = NULL;

	return _returnValue_unmarshaled;
}
extern "C" void DEFAULT_CALL customViewerParameters_SetButtonType(intptr_t, int32_t);
// System.Void Vuforia.VuforiaNativeIosWrapper::customViewerParameters_SetButtonType(System.IntPtr,System.Int32)
extern "C"  void VuforiaNativeIosWrapper_customViewerParameters_SetButtonType_m3305097786 (RuntimeObject * __this /* static, unused */, IntPtr_t ___obj0, int32_t ___val1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(customViewerParameters_SetButtonType)(reinterpret_cast<intptr_t>((___obj0).get_m_value_0()), ___val1);

}
extern "C" void DEFAULT_CALL customViewerParameters_SetContainsMagnet(intptr_t, int32_t);
// System.Void Vuforia.VuforiaNativeIosWrapper::customViewerParameters_SetContainsMagnet(System.IntPtr,System.Boolean)
extern "C"  void VuforiaNativeIosWrapper_customViewerParameters_SetContainsMagnet_m3735288030 (RuntimeObject * __this /* static, unused */, IntPtr_t ___obj0, bool ___val1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(customViewerParameters_SetContainsMagnet)(reinterpret_cast<intptr_t>((___obj0).get_m_value_0()), static_cast<int32_t>(___val1));

}
extern "C" void DEFAULT_CALL customViewerParameters_SetFieldOfView(intptr_t, intptr_t);
// System.Void Vuforia.VuforiaNativeIosWrapper::customViewerParameters_SetFieldOfView(System.IntPtr,System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_customViewerParameters_SetFieldOfView_m2156563939 (RuntimeObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___val1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(customViewerParameters_SetFieldOfView)(reinterpret_cast<intptr_t>((___obj0).get_m_value_0()), reinterpret_cast<intptr_t>((___val1).get_m_value_0()));

}
extern "C" void DEFAULT_CALL customViewerParameters_SetInterLensDistance(intptr_t, float);
// System.Void Vuforia.VuforiaNativeIosWrapper::customViewerParameters_SetInterLensDistance(System.IntPtr,System.Single)
extern "C"  void VuforiaNativeIosWrapper_customViewerParameters_SetInterLensDistance_m1227026709 (RuntimeObject * __this /* static, unused */, IntPtr_t ___obj0, float ___val1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, float);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(customViewerParameters_SetInterLensDistance)(reinterpret_cast<intptr_t>((___obj0).get_m_value_0()), ___val1);

}
extern "C" void DEFAULT_CALL customViewerParameters_SetLensCentreToTrayDistance(intptr_t, float);
// System.Void Vuforia.VuforiaNativeIosWrapper::customViewerParameters_SetLensCentreToTrayDistance(System.IntPtr,System.Single)
extern "C"  void VuforiaNativeIosWrapper_customViewerParameters_SetLensCentreToTrayDistance_m4130243934 (RuntimeObject * __this /* static, unused */, IntPtr_t ___obj0, float ___val1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, float);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(customViewerParameters_SetLensCentreToTrayDistance)(reinterpret_cast<intptr_t>((___obj0).get_m_value_0()), ___val1);

}
extern "C" void DEFAULT_CALL customViewerParameters_SetScreenToLensDistance(intptr_t, float);
// System.Void Vuforia.VuforiaNativeIosWrapper::customViewerParameters_SetScreenToLensDistance(System.IntPtr,System.Single)
extern "C"  void VuforiaNativeIosWrapper_customViewerParameters_SetScreenToLensDistance_m155651693 (RuntimeObject * __this /* static, unused */, IntPtr_t ___obj0, float ___val1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, float);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(customViewerParameters_SetScreenToLensDistance)(reinterpret_cast<intptr_t>((___obj0).get_m_value_0()), ___val1);

}
extern "C" void DEFAULT_CALL customViewerParameters_SetTrayAlignment(intptr_t, int32_t);
// System.Void Vuforia.VuforiaNativeIosWrapper::customViewerParameters_SetTrayAlignment(System.IntPtr,System.Int32)
extern "C"  void VuforiaNativeIosWrapper_customViewerParameters_SetTrayAlignment_m764243699 (RuntimeObject * __this /* static, unused */, IntPtr_t ___obj0, int32_t ___val1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(customViewerParameters_SetTrayAlignment)(reinterpret_cast<intptr_t>((___obj0).get_m_value_0()), ___val1);

}
extern "C" int32_t DEFAULT_CALL cylinderTargetGetDimensions(intptr_t, char*, intptr_t);
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cylinderTargetGetDimensions(System.IntPtr,System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_cylinderTargetGetDimensions_m689074590 (RuntimeObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, IntPtr_t ___dimensionPtr2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, char*, intptr_t);

	// Marshaling of parameter '___trackableName1' to native representation
	char* ____trackableName1_marshaled = NULL;
	____trackableName1_marshaled = il2cpp_codegen_marshal_string(___trackableName1);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(cylinderTargetGetDimensions)(reinterpret_cast<intptr_t>((___dataSetPtr0).get_m_value_0()), ____trackableName1_marshaled, reinterpret_cast<intptr_t>((___dimensionPtr2).get_m_value_0()));

	// Marshaling cleanup of parameter '___trackableName1' native representation
	il2cpp_codegen_marshal_free(____trackableName1_marshaled);
	____trackableName1_marshaled = NULL;

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL cylinderTargetSetBottomDiameter(intptr_t, char*, float);
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cylinderTargetSetBottomDiameter(System.IntPtr,System.String,System.Single)
extern "C"  int32_t VuforiaNativeIosWrapper_cylinderTargetSetBottomDiameter_m1588341980 (RuntimeObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, float ___bottomDiameter2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, char*, float);

	// Marshaling of parameter '___trackableName1' to native representation
	char* ____trackableName1_marshaled = NULL;
	____trackableName1_marshaled = il2cpp_codegen_marshal_string(___trackableName1);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(cylinderTargetSetBottomDiameter)(reinterpret_cast<intptr_t>((___dataSetPtr0).get_m_value_0()), ____trackableName1_marshaled, ___bottomDiameter2);

	// Marshaling cleanup of parameter '___trackableName1' native representation
	il2cpp_codegen_marshal_free(____trackableName1_marshaled);
	____trackableName1_marshaled = NULL;

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL cylinderTargetSetSideLength(intptr_t, char*, float);
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cylinderTargetSetSideLength(System.IntPtr,System.String,System.Single)
extern "C"  int32_t VuforiaNativeIosWrapper_cylinderTargetSetSideLength_m2751361136 (RuntimeObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, float ___sideLength2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, char*, float);

	// Marshaling of parameter '___trackableName1' to native representation
	char* ____trackableName1_marshaled = NULL;
	____trackableName1_marshaled = il2cpp_codegen_marshal_string(___trackableName1);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(cylinderTargetSetSideLength)(reinterpret_cast<intptr_t>((___dataSetPtr0).get_m_value_0()), ____trackableName1_marshaled, ___sideLength2);

	// Marshaling cleanup of parameter '___trackableName1' native representation
	il2cpp_codegen_marshal_free(____trackableName1_marshaled);
	____trackableName1_marshaled = NULL;

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL cylinderTargetSetTopDiameter(intptr_t, char*, float);
// System.Int32 Vuforia.VuforiaNativeIosWrapper::cylinderTargetSetTopDiameter(System.IntPtr,System.String,System.Single)
extern "C"  int32_t VuforiaNativeIosWrapper_cylinderTargetSetTopDiameter_m2575892271 (RuntimeObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, float ___topDiameter2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, char*, float);

	// Marshaling of parameter '___trackableName1' to native representation
	char* ____trackableName1_marshaled = NULL;
	____trackableName1_marshaled = il2cpp_codegen_marshal_string(___trackableName1);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(cylinderTargetSetTopDiameter)(reinterpret_cast<intptr_t>((___dataSetPtr0).get_m_value_0()), ____trackableName1_marshaled, ___topDiameter2);

	// Marshaling cleanup of parameter '___trackableName1' native representation
	il2cpp_codegen_marshal_free(____trackableName1_marshaled);
	____trackableName1_marshaled = NULL;

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL dataSetCreateTrackable(intptr_t, intptr_t, char*, int32_t, intptr_t);
// System.Int32 Vuforia.VuforiaNativeIosWrapper::dataSetCreateTrackable(System.IntPtr,System.IntPtr,System.Text.StringBuilder,System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_dataSetCreateTrackable_m707891030 (RuntimeObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, IntPtr_t ___trackableSourcePtr1, StringBuilder_t2306688936 * ___trackableName2, int32_t ___nameMaxLength3, IntPtr_t ___trackableData4, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, char*, int32_t, intptr_t);

	// Marshaling of parameter '___trackableName2' to native representation
	char* ____trackableName2_marshaled = NULL;
	____trackableName2_marshaled = il2cpp_codegen_marshal_string_builder(___trackableName2);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(dataSetCreateTrackable)(reinterpret_cast<intptr_t>((___dataSetPtr0).get_m_value_0()), reinterpret_cast<intptr_t>((___trackableSourcePtr1).get_m_value_0()), ____trackableName2_marshaled, ___nameMaxLength3, reinterpret_cast<intptr_t>((___trackableData4).get_m_value_0()));

	// Marshaling of parameter '___trackableName2' back from native representation
	il2cpp_codegen_marshal_string_builder_result(___trackableName2, ____trackableName2_marshaled);

	// Marshaling cleanup of parameter '___trackableName2' native representation
	il2cpp_codegen_marshal_free(____trackableName2_marshaled);
	____trackableName2_marshaled = NULL;

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL dataSetDestroyTrackable(intptr_t, int32_t);
// System.Int32 Vuforia.VuforiaNativeIosWrapper::dataSetDestroyTrackable(System.IntPtr,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_dataSetDestroyTrackable_m1987951726 (RuntimeObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, int32_t ___trackableId1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(dataSetDestroyTrackable)(reinterpret_cast<intptr_t>((___dataSetPtr0).get_m_value_0()), ___trackableId1);

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL dataSetExists(char*, int32_t);
// System.Int32 Vuforia.VuforiaNativeIosWrapper::dataSetExists(System.String,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_dataSetExists_m2951807909 (RuntimeObject * __this /* static, unused */, String_t* ___relativePath0, int32_t ___storageType1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (char*, int32_t);

	// Marshaling of parameter '___relativePath0' to native representation
	char* ____relativePath0_marshaled = NULL;
	____relativePath0_marshaled = il2cpp_codegen_marshal_string(___relativePath0);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(dataSetExists)(____relativePath0_marshaled, ___storageType1);

	// Marshaling cleanup of parameter '___relativePath0' native representation
	il2cpp_codegen_marshal_free(____relativePath0_marshaled);
	____relativePath0_marshaled = NULL;

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL dataSetGetNumTrackableType(int32_t, intptr_t);
// System.Int32 Vuforia.VuforiaNativeIosWrapper::dataSetGetNumTrackableType(System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_dataSetGetNumTrackableType_m3274016832 (RuntimeObject * __this /* static, unused */, int32_t ___trackableType0, IntPtr_t ___dataSetPtr1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, intptr_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(dataSetGetNumTrackableType)(___trackableType0, reinterpret_cast<intptr_t>((___dataSetPtr1).get_m_value_0()));

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL dataSetGetTrackableName(intptr_t, int32_t, char*, int32_t);
// System.Int32 Vuforia.VuforiaNativeIosWrapper::dataSetGetTrackableName(System.IntPtr,System.Int32,System.Text.StringBuilder,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_dataSetGetTrackableName_m2865305945 (RuntimeObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, int32_t ___trackableId1, StringBuilder_t2306688936 * ___trackableName2, int32_t ___nameMaxLength3, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t, char*, int32_t);

	// Marshaling of parameter '___trackableName2' to native representation
	char* ____trackableName2_marshaled = NULL;
	____trackableName2_marshaled = il2cpp_codegen_marshal_string_builder(___trackableName2);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(dataSetGetTrackableName)(reinterpret_cast<intptr_t>((___dataSetPtr0).get_m_value_0()), ___trackableId1, ____trackableName2_marshaled, ___nameMaxLength3);

	// Marshaling of parameter '___trackableName2' back from native representation
	il2cpp_codegen_marshal_string_builder_result(___trackableName2, ____trackableName2_marshaled);

	// Marshaling cleanup of parameter '___trackableName2' native representation
	il2cpp_codegen_marshal_free(____trackableName2_marshaled);
	____trackableName2_marshaled = NULL;

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL dataSetGetTrackablesOfType(int32_t, intptr_t, int32_t, intptr_t);
// System.Int32 Vuforia.VuforiaNativeIosWrapper::dataSetGetTrackablesOfType(System.Int32,System.IntPtr,System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_dataSetGetTrackablesOfType_m2713386226 (RuntimeObject * __this /* static, unused */, int32_t ___trackableType0, IntPtr_t ___trackableDataArray1, int32_t ___trackableDataArrayLength2, IntPtr_t ___dataSetPtr3, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, intptr_t, int32_t, intptr_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(dataSetGetTrackablesOfType)(___trackableType0, reinterpret_cast<intptr_t>((___trackableDataArray1).get_m_value_0()), ___trackableDataArrayLength2, reinterpret_cast<intptr_t>((___dataSetPtr3).get_m_value_0()));

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL dataSetHasReachedTrackableLimit(intptr_t);
// System.Int32 Vuforia.VuforiaNativeIosWrapper::dataSetHasReachedTrackableLimit(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_dataSetHasReachedTrackableLimit_m2379687699 (RuntimeObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(dataSetHasReachedTrackableLimit)(reinterpret_cast<intptr_t>((___dataSetPtr0).get_m_value_0()));

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL dataSetLoad(char*, int32_t, intptr_t);
// System.Int32 Vuforia.VuforiaNativeIosWrapper::dataSetLoad(System.String,System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_dataSetLoad_m2289800793 (RuntimeObject * __this /* static, unused */, String_t* ___relativePath0, int32_t ___storageType1, IntPtr_t ___dataSetPtr2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (char*, int32_t, intptr_t);

	// Marshaling of parameter '___relativePath0' to native representation
	char* ____relativePath0_marshaled = NULL;
	____relativePath0_marshaled = il2cpp_codegen_marshal_string(___relativePath0);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(dataSetLoad)(____relativePath0_marshaled, ___storageType1, reinterpret_cast<intptr_t>((___dataSetPtr2).get_m_value_0()));

	// Marshaling cleanup of parameter '___relativePath0' native representation
	il2cpp_codegen_marshal_free(____relativePath0_marshaled);
	____relativePath0_marshaled = NULL;

	return returnValue;
}
extern "C" void DEFAULT_CALL deinitFrameState(intptr_t);
// System.Void Vuforia.VuforiaNativeIosWrapper::deinitFrameState(System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_deinitFrameState_m2932199064 (RuntimeObject * __this /* static, unused */, IntPtr_t ___frameState0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(deinitFrameState)(reinterpret_cast<intptr_t>((___frameState0).get_m_value_0()));

}
extern "C" int32_t DEFAULT_CALL device_GetMode();
// System.Int32 Vuforia.VuforiaNativeIosWrapper::device_GetMode()
extern "C"  int32_t VuforiaNativeIosWrapper_device_GetMode_m1204040679 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(device_GetMode)();

	return returnValue;
}
extern "C" intptr_t DEFAULT_CALL device_GetSelectedViewer();
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::device_GetSelectedViewer()
extern "C"  IntPtr_t VuforiaNativeIosWrapper_device_GetSelectedViewer_m197299371 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(device_GetSelectedViewer)();

	// Marshaling of return value back from native representation
	IntPtr_t _returnValue_unmarshaled;
	_returnValue_unmarshaled.set_m_value_0(reinterpret_cast<void*>((intptr_t)(returnValue)));

	return _returnValue_unmarshaled;
}
extern "C" intptr_t DEFAULT_CALL device_GetViewerList();
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::device_GetViewerList()
extern "C"  IntPtr_t VuforiaNativeIosWrapper_device_GetViewerList_m3833757648 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(device_GetViewerList)();

	// Marshaling of return value back from native representation
	IntPtr_t _returnValue_unmarshaled;
	_returnValue_unmarshaled.set_m_value_0(reinterpret_cast<void*>((intptr_t)(returnValue)));

	return _returnValue_unmarshaled;
}
extern "C" int32_t DEFAULT_CALL device_IsViewerPresent();
// System.Int32 Vuforia.VuforiaNativeIosWrapper::device_IsViewerPresent()
extern "C"  int32_t VuforiaNativeIosWrapper_device_IsViewerPresent_m2930722795 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(device_IsViewerPresent)();

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL device_SelectViewer(intptr_t);
// System.Int32 Vuforia.VuforiaNativeIosWrapper::device_SelectViewer(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_device_SelectViewer_m3407804499 (RuntimeObject * __this /* static, unused */, IntPtr_t ___vp0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(device_SelectViewer)(reinterpret_cast<intptr_t>((___vp0).get_m_value_0()));

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL device_SetMode(int32_t);
// System.Int32 Vuforia.VuforiaNativeIosWrapper::device_SetMode(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_device_SetMode_m3375717477 (RuntimeObject * __this /* static, unused */, int32_t ___mode0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(device_SetMode)(___mode0);

	return returnValue;
}
extern "C" void DEFAULT_CALL device_SetViewerPresent(int32_t);
// System.Void Vuforia.VuforiaNativeIosWrapper::device_SetViewerPresent(System.Boolean)
extern "C"  void VuforiaNativeIosWrapper_device_SetViewerPresent_m889751553 (RuntimeObject * __this /* static, unused */, bool ___present0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(device_SetViewerPresent)(static_cast<int32_t>(___present0));

}
extern "C" int32_t DEFAULT_CALL deviceIsEyewearDevice();
// System.Int32 Vuforia.VuforiaNativeIosWrapper::deviceIsEyewearDevice()
extern "C"  int32_t VuforiaNativeIosWrapper_deviceIsEyewearDevice_m1524877531 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(deviceIsEyewearDevice)();

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL eyewearCPMClearProfile(int32_t);
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearCPMClearProfile(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_eyewearCPMClearProfile_m104473578 (RuntimeObject * __this /* static, unused */, int32_t ___profileID0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(eyewearCPMClearProfile)(___profileID0);

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL eyewearCPMGetActiveProfile();
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearCPMGetActiveProfile()
extern "C"  int32_t VuforiaNativeIosWrapper_eyewearCPMGetActiveProfile_m2829112770 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(eyewearCPMGetActiveProfile)();

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL eyewearCPMGetCameraToEyePose(int32_t, int32_t, intptr_t);
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearCPMGetCameraToEyePose(System.Int32,System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_eyewearCPMGetCameraToEyePose_m2664676430 (RuntimeObject * __this /* static, unused */, int32_t ___profileID0, int32_t ___eyeID1, IntPtr_t ___matrix2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, int32_t, intptr_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(eyewearCPMGetCameraToEyePose)(___profileID0, ___eyeID1, reinterpret_cast<intptr_t>((___matrix2).get_m_value_0()));

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL eyewearCPMGetEyeProjection(int32_t, int32_t, intptr_t);
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearCPMGetEyeProjection(System.Int32,System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_eyewearCPMGetEyeProjection_m567037565 (RuntimeObject * __this /* static, unused */, int32_t ___profileID0, int32_t ___eyeID1, IntPtr_t ___matrix2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, int32_t, intptr_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(eyewearCPMGetEyeProjection)(___profileID0, ___eyeID1, reinterpret_cast<intptr_t>((___matrix2).get_m_value_0()));

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL eyewearCPMGetMaxCount();
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearCPMGetMaxCount()
extern "C"  int32_t VuforiaNativeIosWrapper_eyewearCPMGetMaxCount_m999055914 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(eyewearCPMGetMaxCount)();

	return returnValue;
}
extern "C" intptr_t DEFAULT_CALL eyewearCPMGetProfileName(int32_t);
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::eyewearCPMGetProfileName(System.Int32)
extern "C"  IntPtr_t VuforiaNativeIosWrapper_eyewearCPMGetProfileName_m389668892 (RuntimeObject * __this /* static, unused */, int32_t ___profileID0, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(eyewearCPMGetProfileName)(___profileID0);

	// Marshaling of return value back from native representation
	IntPtr_t _returnValue_unmarshaled;
	_returnValue_unmarshaled.set_m_value_0(reinterpret_cast<void*>((intptr_t)(returnValue)));

	return _returnValue_unmarshaled;
}
extern "C" int32_t DEFAULT_CALL eyewearCPMGetUsedCount();
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearCPMGetUsedCount()
extern "C"  int32_t VuforiaNativeIosWrapper_eyewearCPMGetUsedCount_m2319284829 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(eyewearCPMGetUsedCount)();

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL eyewearCPMIsProfileUsed(int32_t);
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearCPMIsProfileUsed(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_eyewearCPMIsProfileUsed_m1883130519 (RuntimeObject * __this /* static, unused */, int32_t ___profileID0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(eyewearCPMIsProfileUsed)(___profileID0);

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL eyewearCPMSetActiveProfile(int32_t);
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearCPMSetActiveProfile(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_eyewearCPMSetActiveProfile_m991942122 (RuntimeObject * __this /* static, unused */, int32_t ___profileID0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(eyewearCPMSetActiveProfile)(___profileID0);

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL eyewearCPMSetCameraToEyePose(int32_t, int32_t, intptr_t);
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearCPMSetCameraToEyePose(System.Int32,System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_eyewearCPMSetCameraToEyePose_m4052877384 (RuntimeObject * __this /* static, unused */, int32_t ___profileID0, int32_t ___eyeID1, IntPtr_t ___matrix2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, int32_t, intptr_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(eyewearCPMSetCameraToEyePose)(___profileID0, ___eyeID1, reinterpret_cast<intptr_t>((___matrix2).get_m_value_0()));

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL eyewearCPMSetEyeProjection(int32_t, int32_t, intptr_t);
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearCPMSetEyeProjection(System.Int32,System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_eyewearCPMSetEyeProjection_m2549866316 (RuntimeObject * __this /* static, unused */, int32_t ___profileID0, int32_t ___eyeID1, IntPtr_t ___matrix2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, int32_t, intptr_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(eyewearCPMSetEyeProjection)(___profileID0, ___eyeID1, reinterpret_cast<intptr_t>((___matrix2).get_m_value_0()));

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL eyewearCPMSetProfileName(int32_t, intptr_t);
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearCPMSetProfileName(System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_eyewearCPMSetProfileName_m952353418 (RuntimeObject * __this /* static, unused */, int32_t ___profileID0, IntPtr_t ___name1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, intptr_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(eyewearCPMSetProfileName)(___profileID0, reinterpret_cast<intptr_t>((___name1).get_m_value_0()));

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL eyewearDeviceGetScreenOrientation();
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearDeviceGetScreenOrientation()
extern "C"  int32_t VuforiaNativeIosWrapper_eyewearDeviceGetScreenOrientation_m2937103899 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(eyewearDeviceGetScreenOrientation)();

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL eyewearDeviceIsDisplayExtended();
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearDeviceIsDisplayExtended()
extern "C"  int32_t VuforiaNativeIosWrapper_eyewearDeviceIsDisplayExtended_m170673209 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(eyewearDeviceIsDisplayExtended)();

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL eyewearDeviceIsDisplayExtendedGLOnly();
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearDeviceIsDisplayExtendedGLOnly()
extern "C"  int32_t VuforiaNativeIosWrapper_eyewearDeviceIsDisplayExtendedGLOnly_m601921115 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(eyewearDeviceIsDisplayExtendedGLOnly)();

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL eyewearDeviceIsDualDisplay();
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearDeviceIsDualDisplay()
extern "C"  int32_t VuforiaNativeIosWrapper_eyewearDeviceIsDualDisplay_m2216700016 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(eyewearDeviceIsDualDisplay)();

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL eyewearDeviceIsPredictiveTrackingEnabled();
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearDeviceIsPredictiveTrackingEnabled()
extern "C"  int32_t VuforiaNativeIosWrapper_eyewearDeviceIsPredictiveTrackingEnabled_m2964659958 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(eyewearDeviceIsPredictiveTrackingEnabled)();

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL eyewearDeviceIsSeeThru();
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearDeviceIsSeeThru()
extern "C"  int32_t VuforiaNativeIosWrapper_eyewearDeviceIsSeeThru_m3763542170 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(eyewearDeviceIsSeeThru)();

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL eyewearDeviceSetDisplayExtended(int32_t);
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearDeviceSetDisplayExtended(System.Boolean)
extern "C"  int32_t VuforiaNativeIosWrapper_eyewearDeviceSetDisplayExtended_m2149284956 (RuntimeObject * __this /* static, unused */, bool ___enable0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(eyewearDeviceSetDisplayExtended)(static_cast<int32_t>(___enable0));

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL eyewearDeviceSetPredictiveTracking(int32_t);
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearDeviceSetPredictiveTracking(System.Boolean)
extern "C"  int32_t VuforiaNativeIosWrapper_eyewearDeviceSetPredictiveTracking_m4113271758 (RuntimeObject * __this /* static, unused */, bool ___enable0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(eyewearDeviceSetPredictiveTracking)(static_cast<int32_t>(___enable0));

	return returnValue;
}
extern "C" float DEFAULT_CALL eyewearUserCalibratorGetMaxScaleHint();
// System.Single Vuforia.VuforiaNativeIosWrapper::eyewearUserCalibratorGetMaxScaleHint()
extern "C"  float VuforiaNativeIosWrapper_eyewearUserCalibratorGetMaxScaleHint_m2312389075 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef float (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	float returnValue = reinterpret_cast<PInvokeFunc>(eyewearUserCalibratorGetMaxScaleHint)();

	return returnValue;
}
extern "C" float DEFAULT_CALL eyewearUserCalibratorGetMinScaleHint();
// System.Single Vuforia.VuforiaNativeIosWrapper::eyewearUserCalibratorGetMinScaleHint()
extern "C"  float VuforiaNativeIosWrapper_eyewearUserCalibratorGetMinScaleHint_m2509050588 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef float (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	float returnValue = reinterpret_cast<PInvokeFunc>(eyewearUserCalibratorGetMinScaleHint)();

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL eyewearUserCalibratorGetProjectionMatrix(intptr_t, int32_t, intptr_t, intptr_t);
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearUserCalibratorGetProjectionMatrix(System.IntPtr,System.Int32,System.IntPtr,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_eyewearUserCalibratorGetProjectionMatrix_m3137946758 (RuntimeObject * __this /* static, unused */, IntPtr_t ___readingsDataArray0, int32_t ___numReadings1, IntPtr_t ___cameraToEyeContainer2, IntPtr_t ___projectionContainer3, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t, intptr_t, intptr_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(eyewearUserCalibratorGetProjectionMatrix)(reinterpret_cast<intptr_t>((___readingsDataArray0).get_m_value_0()), ___numReadings1, reinterpret_cast<intptr_t>((___cameraToEyeContainer2).get_m_value_0()), reinterpret_cast<intptr_t>((___projectionContainer3).get_m_value_0()));

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL eyewearUserCalibratorInit(int32_t, int32_t, int32_t, int32_t);
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearUserCalibratorInit(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_eyewearUserCalibratorInit_m2164347232 (RuntimeObject * __this /* static, unused */, int32_t ___surfaceWidth0, int32_t ___surfaceHeight1, int32_t ___targetWidth2, int32_t ___targetHeight3, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, int32_t, int32_t, int32_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(eyewearUserCalibratorInit)(___surfaceWidth0, ___surfaceHeight1, ___targetWidth2, ___targetHeight3);

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL eyewearUserCalibratorIsStereoStretched();
// System.Int32 Vuforia.VuforiaNativeIosWrapper::eyewearUserCalibratorIsStereoStretched()
extern "C"  int32_t VuforiaNativeIosWrapper_eyewearUserCalibratorIsStereoStretched_m2416238973 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(eyewearUserCalibratorIsStereoStretched)();

	return returnValue;
}
extern "C" void DEFAULT_CALL frameCounterGetBenchmarkingData(intptr_t);
// System.Void Vuforia.VuforiaNativeIosWrapper::frameCounterGetBenchmarkingData(System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_frameCounterGetBenchmarkingData_m3925012415 (RuntimeObject * __this /* static, unused */, IntPtr_t ___benchmarkingData0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(frameCounterGetBenchmarkingData)(reinterpret_cast<intptr_t>((___benchmarkingData0).get_m_value_0()));

}
extern "C" int32_t DEFAULT_CALL getCameraThreadID();
// System.Int32 Vuforia.VuforiaNativeIosWrapper::getCameraThreadID()
extern "C"  int32_t VuforiaNativeIosWrapper_getCameraThreadID_m689876198 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(getCameraThreadID)();

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL getProjectionGL(float, float, intptr_t, int32_t);
// System.Int32 Vuforia.VuforiaNativeIosWrapper::getProjectionGL(System.Single,System.Single,System.IntPtr,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_getProjectionGL_m1439849627 (RuntimeObject * __this /* static, unused */, float ___nearPlane0, float ___farPlane1, IntPtr_t ___projectionContainer2, int32_t ___screenOrientation3, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (float, float, intptr_t, int32_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(getProjectionGL)(___nearPlane0, ___farPlane1, reinterpret_cast<intptr_t>((___projectionContainer2).get_m_value_0()), ___screenOrientation3);

	return returnValue;
}
extern "C" void DEFAULT_CALL getVuforiaLibraryVersion(char*, int32_t);
// System.Void Vuforia.VuforiaNativeIosWrapper::getVuforiaLibraryVersion(System.Text.StringBuilder,System.Int32)
extern "C"  void VuforiaNativeIosWrapper_getVuforiaLibraryVersion_m2930290393 (RuntimeObject * __this /* static, unused */, StringBuilder_t2306688936 * ___value0, int32_t ___maxLength1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, int32_t);

	// Marshaling of parameter '___value0' to native representation
	char* ____value0_marshaled = NULL;
	____value0_marshaled = il2cpp_codegen_marshal_string_builder(___value0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(getVuforiaLibraryVersion)(____value0_marshaled, ___maxLength1);

	// Marshaling of parameter '___value0' back from native representation
	il2cpp_codegen_marshal_string_builder_result(___value0, ____value0_marshaled);

	// Marshaling cleanup of parameter '___value0' native representation
	il2cpp_codegen_marshal_free(____value0_marshaled);
	____value0_marshaled = NULL;

}
extern "C" int32_t DEFAULT_CALL hasSurfaceBeenRecreated();
// System.Int32 Vuforia.VuforiaNativeIosWrapper::hasSurfaceBeenRecreated()
extern "C"  int32_t VuforiaNativeIosWrapper_hasSurfaceBeenRecreated_m804277311 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(hasSurfaceBeenRecreated)();

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL imageTargetBuilderBuild(char*, float);
// System.Int32 Vuforia.VuforiaNativeIosWrapper::imageTargetBuilderBuild(System.String,System.Single)
extern "C"  int32_t VuforiaNativeIosWrapper_imageTargetBuilderBuild_m1240693818 (RuntimeObject * __this /* static, unused */, String_t* ___name0, float ___screenSizeWidth1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (char*, float);

	// Marshaling of parameter '___name0' to native representation
	char* ____name0_marshaled = NULL;
	____name0_marshaled = il2cpp_codegen_marshal_string(___name0);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(imageTargetBuilderBuild)(____name0_marshaled, ___screenSizeWidth1);

	// Marshaling cleanup of parameter '___name0' native representation
	il2cpp_codegen_marshal_free(____name0_marshaled);
	____name0_marshaled = NULL;

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL imageTargetBuilderGetFrameQuality();
// System.Int32 Vuforia.VuforiaNativeIosWrapper::imageTargetBuilderGetFrameQuality()
extern "C"  int32_t VuforiaNativeIosWrapper_imageTargetBuilderGetFrameQuality_m3420033185 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(imageTargetBuilderGetFrameQuality)();

	return returnValue;
}
extern "C" intptr_t DEFAULT_CALL imageTargetBuilderGetTrackableSource();
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::imageTargetBuilderGetTrackableSource()
extern "C"  IntPtr_t VuforiaNativeIosWrapper_imageTargetBuilderGetTrackableSource_m1740860804 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(imageTargetBuilderGetTrackableSource)();

	// Marshaling of return value back from native representation
	IntPtr_t _returnValue_unmarshaled;
	_returnValue_unmarshaled.set_m_value_0(reinterpret_cast<void*>((intptr_t)(returnValue)));

	return _returnValue_unmarshaled;
}
extern "C" void DEFAULT_CALL imageTargetBuilderStartScan();
// System.Void Vuforia.VuforiaNativeIosWrapper::imageTargetBuilderStartScan()
extern "C"  void VuforiaNativeIosWrapper_imageTargetBuilderStartScan_m2086861328 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(imageTargetBuilderStartScan)();

}
extern "C" void DEFAULT_CALL imageTargetBuilderStopScan();
// System.Void Vuforia.VuforiaNativeIosWrapper::imageTargetBuilderStopScan()
extern "C"  void VuforiaNativeIosWrapper_imageTargetBuilderStopScan_m3463034272 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(imageTargetBuilderStopScan)();

}
extern "C" int32_t DEFAULT_CALL imageTargetCreateVirtualButton(intptr_t, char*, char*, intptr_t);
// System.Int32 Vuforia.VuforiaNativeIosWrapper::imageTargetCreateVirtualButton(System.IntPtr,System.String,System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_imageTargetCreateVirtualButton_m1991862334 (RuntimeObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, String_t* ___virtualButtonName2, IntPtr_t ___rectData3, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, char*, char*, intptr_t);

	// Marshaling of parameter '___trackableName1' to native representation
	char* ____trackableName1_marshaled = NULL;
	____trackableName1_marshaled = il2cpp_codegen_marshal_string(___trackableName1);

	// Marshaling of parameter '___virtualButtonName2' to native representation
	char* ____virtualButtonName2_marshaled = NULL;
	____virtualButtonName2_marshaled = il2cpp_codegen_marshal_string(___virtualButtonName2);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(imageTargetCreateVirtualButton)(reinterpret_cast<intptr_t>((___dataSetPtr0).get_m_value_0()), ____trackableName1_marshaled, ____virtualButtonName2_marshaled, reinterpret_cast<intptr_t>((___rectData3).get_m_value_0()));

	// Marshaling cleanup of parameter '___trackableName1' native representation
	il2cpp_codegen_marshal_free(____trackableName1_marshaled);
	____trackableName1_marshaled = NULL;

	// Marshaling cleanup of parameter '___virtualButtonName2' native representation
	il2cpp_codegen_marshal_free(____virtualButtonName2_marshaled);
	____virtualButtonName2_marshaled = NULL;

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL imageTargetDestroyVirtualButton(intptr_t, char*, char*);
// System.Int32 Vuforia.VuforiaNativeIosWrapper::imageTargetDestroyVirtualButton(System.IntPtr,System.String,System.String)
extern "C"  int32_t VuforiaNativeIosWrapper_imageTargetDestroyVirtualButton_m2583018860 (RuntimeObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, String_t* ___virtualButtonName2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, char*, char*);

	// Marshaling of parameter '___trackableName1' to native representation
	char* ____trackableName1_marshaled = NULL;
	____trackableName1_marshaled = il2cpp_codegen_marshal_string(___trackableName1);

	// Marshaling of parameter '___virtualButtonName2' to native representation
	char* ____virtualButtonName2_marshaled = NULL;
	____virtualButtonName2_marshaled = il2cpp_codegen_marshal_string(___virtualButtonName2);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(imageTargetDestroyVirtualButton)(reinterpret_cast<intptr_t>((___dataSetPtr0).get_m_value_0()), ____trackableName1_marshaled, ____virtualButtonName2_marshaled);

	// Marshaling cleanup of parameter '___trackableName1' native representation
	il2cpp_codegen_marshal_free(____trackableName1_marshaled);
	____trackableName1_marshaled = NULL;

	// Marshaling cleanup of parameter '___virtualButtonName2' native representation
	il2cpp_codegen_marshal_free(____virtualButtonName2_marshaled);
	____virtualButtonName2_marshaled = NULL;

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL imageTargetGetNumVirtualButtons(intptr_t, char*);
// System.Int32 Vuforia.VuforiaNativeIosWrapper::imageTargetGetNumVirtualButtons(System.IntPtr,System.String)
extern "C"  int32_t VuforiaNativeIosWrapper_imageTargetGetNumVirtualButtons_m190284725 (RuntimeObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, char*);

	// Marshaling of parameter '___trackableName1' to native representation
	char* ____trackableName1_marshaled = NULL;
	____trackableName1_marshaled = il2cpp_codegen_marshal_string(___trackableName1);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(imageTargetGetNumVirtualButtons)(reinterpret_cast<intptr_t>((___dataSetPtr0).get_m_value_0()), ____trackableName1_marshaled);

	// Marshaling cleanup of parameter '___trackableName1' native representation
	il2cpp_codegen_marshal_free(____trackableName1_marshaled);
	____trackableName1_marshaled = NULL;

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL imageTargetGetVirtualButtonName(intptr_t, char*, int32_t, char*, int32_t);
// System.Int32 Vuforia.VuforiaNativeIosWrapper::imageTargetGetVirtualButtonName(System.IntPtr,System.String,System.Int32,System.Text.StringBuilder,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_imageTargetGetVirtualButtonName_m2973844062 (RuntimeObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, int32_t ___idx2, StringBuilder_t2306688936 * ___vbName3, int32_t ___nameMaxLength4, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, char*, int32_t, char*, int32_t);

	// Marshaling of parameter '___trackableName1' to native representation
	char* ____trackableName1_marshaled = NULL;
	____trackableName1_marshaled = il2cpp_codegen_marshal_string(___trackableName1);

	// Marshaling of parameter '___vbName3' to native representation
	char* ____vbName3_marshaled = NULL;
	____vbName3_marshaled = il2cpp_codegen_marshal_string_builder(___vbName3);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(imageTargetGetVirtualButtonName)(reinterpret_cast<intptr_t>((___dataSetPtr0).get_m_value_0()), ____trackableName1_marshaled, ___idx2, ____vbName3_marshaled, ___nameMaxLength4);

	// Marshaling cleanup of parameter '___trackableName1' native representation
	il2cpp_codegen_marshal_free(____trackableName1_marshaled);
	____trackableName1_marshaled = NULL;

	// Marshaling of parameter '___vbName3' back from native representation
	il2cpp_codegen_marshal_string_builder_result(___vbName3, ____vbName3_marshaled);

	// Marshaling cleanup of parameter '___vbName3' native representation
	il2cpp_codegen_marshal_free(____vbName3_marshaled);
	____vbName3_marshaled = NULL;

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL imageTargetGetVirtualButtons(intptr_t, intptr_t, int32_t, intptr_t, char*);
// System.Int32 Vuforia.VuforiaNativeIosWrapper::imageTargetGetVirtualButtons(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr,System.String)
extern "C"  int32_t VuforiaNativeIosWrapper_imageTargetGetVirtualButtons_m981693174 (RuntimeObject * __this /* static, unused */, IntPtr_t ___virtualButtonDataArray0, IntPtr_t ___rectangleDataArray1, int32_t ___virtualButtonDataArrayLength2, IntPtr_t ___dataSetPtr3, String_t* ___trackableName4, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, int32_t, intptr_t, char*);

	// Marshaling of parameter '___trackableName4' to native representation
	char* ____trackableName4_marshaled = NULL;
	____trackableName4_marshaled = il2cpp_codegen_marshal_string(___trackableName4);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(imageTargetGetVirtualButtons)(reinterpret_cast<intptr_t>((___virtualButtonDataArray0).get_m_value_0()), reinterpret_cast<intptr_t>((___rectangleDataArray1).get_m_value_0()), ___virtualButtonDataArrayLength2, reinterpret_cast<intptr_t>((___dataSetPtr3).get_m_value_0()), ____trackableName4_marshaled);

	// Marshaling cleanup of parameter '___trackableName4' native representation
	il2cpp_codegen_marshal_free(____trackableName4_marshaled);
	____trackableName4_marshaled = NULL;

	return returnValue;
}
extern "C" void DEFAULT_CALL initFrameState(intptr_t);
// System.Void Vuforia.VuforiaNativeIosWrapper::initFrameState(System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_initFrameState_m2167343978 (RuntimeObject * __this /* static, unused */, IntPtr_t ___frameState0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(initFrameState)(reinterpret_cast<intptr_t>((___frameState0).get_m_value_0()));

}
extern "C" void DEFAULT_CALL initPlatformNative();
// System.Void Vuforia.VuforiaNativeIosWrapper::initPlatformNative()
extern "C"  void VuforiaNativeIosWrapper_initPlatformNative_m282526069 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(initPlatformNative)();

}
extern "C" float DEFAULT_CALL multiTargetGetLargestSizeComponent(intptr_t, char*);
// System.Single Vuforia.VuforiaNativeIosWrapper::multiTargetGetLargestSizeComponent(System.IntPtr,System.String)
extern "C"  float VuforiaNativeIosWrapper_multiTargetGetLargestSizeComponent_m4104809896 (RuntimeObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, const RuntimeMethod* method)
{
	typedef float (DEFAULT_CALL *PInvokeFunc) (intptr_t, char*);

	// Marshaling of parameter '___trackableName1' to native representation
	char* ____trackableName1_marshaled = NULL;
	____trackableName1_marshaled = il2cpp_codegen_marshal_string(___trackableName1);

	// Native function invocation
	float returnValue = reinterpret_cast<PInvokeFunc>(multiTargetGetLargestSizeComponent)(reinterpret_cast<intptr_t>((___dataSetPtr0).get_m_value_0()), ____trackableName1_marshaled);

	// Marshaling cleanup of parameter '___trackableName1' native representation
	il2cpp_codegen_marshal_free(____trackableName1_marshaled);
	____trackableName1_marshaled = NULL;

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL objectTargetGetSize(intptr_t, char*, intptr_t);
// System.Int32 Vuforia.VuforiaNativeIosWrapper::objectTargetGetSize(System.IntPtr,System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_objectTargetGetSize_m3156986922 (RuntimeObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, IntPtr_t ___sizePtr2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, char*, intptr_t);

	// Marshaling of parameter '___trackableName1' to native representation
	char* ____trackableName1_marshaled = NULL;
	____trackableName1_marshaled = il2cpp_codegen_marshal_string(___trackableName1);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(objectTargetGetSize)(reinterpret_cast<intptr_t>((___dataSetPtr0).get_m_value_0()), ____trackableName1_marshaled, reinterpret_cast<intptr_t>((___sizePtr2).get_m_value_0()));

	// Marshaling cleanup of parameter '___trackableName1' native representation
	il2cpp_codegen_marshal_free(____trackableName1_marshaled);
	____trackableName1_marshaled = NULL;

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL objectTargetSetSize(intptr_t, char*, intptr_t);
// System.Int32 Vuforia.VuforiaNativeIosWrapper::objectTargetSetSize(System.IntPtr,System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_objectTargetSetSize_m248924059 (RuntimeObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, IntPtr_t ___sizePtr2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, char*, intptr_t);

	// Marshaling of parameter '___trackableName1' to native representation
	char* ____trackableName1_marshaled = NULL;
	____trackableName1_marshaled = il2cpp_codegen_marshal_string(___trackableName1);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(objectTargetSetSize)(reinterpret_cast<intptr_t>((___dataSetPtr0).get_m_value_0()), ____trackableName1_marshaled, reinterpret_cast<intptr_t>((___sizePtr2).get_m_value_0()));

	// Marshaling cleanup of parameter '___trackableName1' native representation
	il2cpp_codegen_marshal_free(____trackableName1_marshaled);
	____trackableName1_marshaled = NULL;

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL objectTrackerActivateDataSet(intptr_t);
// System.Int32 Vuforia.VuforiaNativeIosWrapper::objectTrackerActivateDataSet(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_objectTrackerActivateDataSet_m1762331192 (RuntimeObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(objectTrackerActivateDataSet)(reinterpret_cast<intptr_t>((___dataSetPtr0).get_m_value_0()));

	return returnValue;
}
extern "C" intptr_t DEFAULT_CALL objectTrackerCreateDataSet();
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::objectTrackerCreateDataSet()
extern "C"  IntPtr_t VuforiaNativeIosWrapper_objectTrackerCreateDataSet_m1102607328 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(objectTrackerCreateDataSet)();

	// Marshaling of return value back from native representation
	IntPtr_t _returnValue_unmarshaled;
	_returnValue_unmarshaled.set_m_value_0(reinterpret_cast<void*>((intptr_t)(returnValue)));

	return _returnValue_unmarshaled;
}
extern "C" int32_t DEFAULT_CALL objectTrackerDeactivateDataSet(intptr_t);
// System.Int32 Vuforia.VuforiaNativeIosWrapper::objectTrackerDeactivateDataSet(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_objectTrackerDeactivateDataSet_m63750779 (RuntimeObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(objectTrackerDeactivateDataSet)(reinterpret_cast<intptr_t>((___dataSetPtr0).get_m_value_0()));

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL objectTrackerDestroyDataSet(intptr_t);
// System.Int32 Vuforia.VuforiaNativeIosWrapper::objectTrackerDestroyDataSet(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_objectTrackerDestroyDataSet_m738631455 (RuntimeObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(objectTrackerDestroyDataSet)(reinterpret_cast<intptr_t>((___dataSetPtr0).get_m_value_0()));

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL objectTrackerPersistExtendedTracking(int32_t);
// System.Int32 Vuforia.VuforiaNativeIosWrapper::objectTrackerPersistExtendedTracking(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_objectTrackerPersistExtendedTracking_m796298604 (RuntimeObject * __this /* static, unused */, int32_t ___on0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(objectTrackerPersistExtendedTracking)(___on0);

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL objectTrackerResetExtendedTracking();
// System.Int32 Vuforia.VuforiaNativeIosWrapper::objectTrackerResetExtendedTracking()
extern "C"  int32_t VuforiaNativeIosWrapper_objectTrackerResetExtendedTracking_m3695438047 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(objectTrackerResetExtendedTracking)();

	return returnValue;
}
extern "C" void DEFAULT_CALL onPause();
// System.Void Vuforia.VuforiaNativeIosWrapper::onPause()
extern "C"  void VuforiaNativeIosWrapper_onPause_m1634305509 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(onPause)();

}
extern "C" void DEFAULT_CALL onResume();
// System.Void Vuforia.VuforiaNativeIosWrapper::onResume()
extern "C"  void VuforiaNativeIosWrapper_onResume_m4126093517 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(onResume)();

}
extern "C" void DEFAULT_CALL onSurfaceChanged(int32_t, int32_t);
// System.Void Vuforia.VuforiaNativeIosWrapper::onSurfaceChanged(System.Int32,System.Int32)
extern "C"  void VuforiaNativeIosWrapper_onSurfaceChanged_m2745151961 (RuntimeObject * __this /* static, unused */, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(onSurfaceChanged)(___width0, ___height1);

}
extern "C" void DEFAULT_CALL qcarAddCameraFrame(intptr_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t);
// System.Void Vuforia.VuforiaNativeIosWrapper::qcarAddCameraFrame(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void VuforiaNativeIosWrapper_qcarAddCameraFrame_m524464080 (RuntimeObject * __this /* static, unused */, IntPtr_t ___pixels0, int32_t ___width1, int32_t ___height2, int32_t ___format3, int32_t ___stride4, int32_t ___frameIdx5, int32_t ___flipHorizontally6, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(qcarAddCameraFrame)(reinterpret_cast<intptr_t>((___pixels0).get_m_value_0()), ___width1, ___height2, ___format3, ___stride4, ___frameIdx5, ___flipHorizontally6);

}
extern "C" void DEFAULT_CALL qcarDeinit();
// System.Void Vuforia.VuforiaNativeIosWrapper::qcarDeinit()
extern "C"  void VuforiaNativeIosWrapper_qcarDeinit_m592135147 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(qcarDeinit)();

}
extern "C" int32_t DEFAULT_CALL qcarGetBufferSize(int32_t, int32_t, int32_t);
// System.Int32 Vuforia.VuforiaNativeIosWrapper::qcarGetBufferSize(System.Int32,System.Int32,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_qcarGetBufferSize_m2453225049 (RuntimeObject * __this /* static, unused */, int32_t ___width0, int32_t ___height1, int32_t ___format2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, int32_t, int32_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(qcarGetBufferSize)(___width0, ___height1, ___format2);

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL qcarInit(char*);
// System.Int32 Vuforia.VuforiaNativeIosWrapper::qcarInit(System.String)
extern "C"  int32_t VuforiaNativeIosWrapper_qcarInit_m3319756304 (RuntimeObject * __this /* static, unused */, String_t* ___licenseKey0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___licenseKey0' to native representation
	char* ____licenseKey0_marshaled = NULL;
	____licenseKey0_marshaled = il2cpp_codegen_marshal_string(___licenseKey0);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(qcarInit)(____licenseKey0_marshaled);

	// Marshaling cleanup of parameter '___licenseKey0' native representation
	il2cpp_codegen_marshal_free(____licenseKey0_marshaled);
	____licenseKey0_marshaled = NULL;

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL qcarSetFrameFormat(int32_t, int32_t);
// System.Int32 Vuforia.VuforiaNativeIosWrapper::qcarSetFrameFormat(System.Int32,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_qcarSetFrameFormat_m2426127075 (RuntimeObject * __this /* static, unused */, int32_t ___format0, int32_t ___enabled1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, int32_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(qcarSetFrameFormat)(___format0, ___enabled1);

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL qcarSetHint(uint32_t, int32_t);
// System.Int32 Vuforia.VuforiaNativeIosWrapper::qcarSetHint(System.UInt32,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_qcarSetHint_m4051405981 (RuntimeObject * __this /* static, unused */, uint32_t ___hint0, int32_t ___value1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (uint32_t, int32_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(qcarSetHint)(___hint0, ___value1);

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL reconstructioFromEnvironmentGetReconstructionState(intptr_t);
// System.Int32 Vuforia.VuforiaNativeIosWrapper::reconstructioFromEnvironmentGetReconstructionState(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_reconstructioFromEnvironmentGetReconstructionState_m719606706 (RuntimeObject * __this /* static, unused */, IntPtr_t ___reconstruction0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(reconstructioFromEnvironmentGetReconstructionState)(reinterpret_cast<intptr_t>((___reconstruction0).get_m_value_0()));

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL reconstructionFromTargetSetInitializationTarget(intptr_t, intptr_t, int32_t, intptr_t, intptr_t, intptr_t, intptr_t, float);
// System.Int32 Vuforia.VuforiaNativeIosWrapper::reconstructionFromTargetSetInitializationTarget(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.Single)
extern "C"  int32_t VuforiaNativeIosWrapper_reconstructionFromTargetSetInitializationTarget_m4240861014 (RuntimeObject * __this /* static, unused */, IntPtr_t ___reconstruction0, IntPtr_t ___dataSetPtr1, int32_t ___trackableID2, IntPtr_t ___occluderMin3, IntPtr_t ___occluderMax4, IntPtr_t ___offsetToOccluder5, IntPtr_t ___rotationAxisToOccluder6, float ___rotationAngleToOccluder7, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, int32_t, intptr_t, intptr_t, intptr_t, intptr_t, float);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(reconstructionFromTargetSetInitializationTarget)(reinterpret_cast<intptr_t>((___reconstruction0).get_m_value_0()), reinterpret_cast<intptr_t>((___dataSetPtr1).get_m_value_0()), ___trackableID2, reinterpret_cast<intptr_t>((___occluderMin3).get_m_value_0()), reinterpret_cast<intptr_t>((___occluderMax4).get_m_value_0()), reinterpret_cast<intptr_t>((___offsetToOccluder5).get_m_value_0()), reinterpret_cast<intptr_t>((___rotationAxisToOccluder6).get_m_value_0()), ___rotationAngleToOccluder7);

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL reconstructionIsReconstructing(intptr_t);
// System.Int32 Vuforia.VuforiaNativeIosWrapper::reconstructionIsReconstructing(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_reconstructionIsReconstructing_m3764948990 (RuntimeObject * __this /* static, unused */, IntPtr_t ___reconstruction0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(reconstructionIsReconstructing)(reinterpret_cast<intptr_t>((___reconstruction0).get_m_value_0()));

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL reconstructionReset(intptr_t);
// System.Int32 Vuforia.VuforiaNativeIosWrapper::reconstructionReset(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_reconstructionReset_m2004151938 (RuntimeObject * __this /* static, unused */, IntPtr_t ___reconstruction0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(reconstructionReset)(reinterpret_cast<intptr_t>((___reconstruction0).get_m_value_0()));

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL reconstructionSetMaximumArea(intptr_t, intptr_t);
// System.Int32 Vuforia.VuforiaNativeIosWrapper::reconstructionSetMaximumArea(System.IntPtr,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_reconstructionSetMaximumArea_m590564581 (RuntimeObject * __this /* static, unused */, IntPtr_t ___reconstruction0, IntPtr_t ___maximumArea1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(reconstructionSetMaximumArea)(reinterpret_cast<intptr_t>((___reconstruction0).get_m_value_0()), reinterpret_cast<intptr_t>((___maximumArea1).get_m_value_0()));

	return returnValue;
}
extern "C" void DEFAULT_CALL reconstructionSetNavMeshPadding(intptr_t, float);
// System.Void Vuforia.VuforiaNativeIosWrapper::reconstructionSetNavMeshPadding(System.IntPtr,System.Single)
extern "C"  void VuforiaNativeIosWrapper_reconstructionSetNavMeshPadding_m857886394 (RuntimeObject * __this /* static, unused */, IntPtr_t ___reconstruction0, float ___padding1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, float);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(reconstructionSetNavMeshPadding)(reinterpret_cast<intptr_t>((___reconstruction0).get_m_value_0()), ___padding1);

}
extern "C" int32_t DEFAULT_CALL reconstructionStart(intptr_t);
// System.Int32 Vuforia.VuforiaNativeIosWrapper::reconstructionStart(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_reconstructionStart_m1027296631 (RuntimeObject * __this /* static, unused */, IntPtr_t ___reconstruction0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(reconstructionStart)(reinterpret_cast<intptr_t>((___reconstruction0).get_m_value_0()));

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL reconstructionStop(intptr_t);
// System.Int32 Vuforia.VuforiaNativeIosWrapper::reconstructionStop(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_reconstructionStop_m1563772861 (RuntimeObject * __this /* static, unused */, IntPtr_t ___reconstruction0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(reconstructionStop)(reinterpret_cast<intptr_t>((___reconstruction0).get_m_value_0()));

	return returnValue;
}
extern "C" intptr_t DEFAULT_CALL rendererCreateNativeTexture(uint32_t, uint32_t, int32_t);
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::rendererCreateNativeTexture(System.UInt32,System.UInt32,System.Int32)
extern "C"  IntPtr_t VuforiaNativeIosWrapper_rendererCreateNativeTexture_m1968102219 (RuntimeObject * __this /* static, unused */, uint32_t ___width0, uint32_t ___height1, int32_t ___format2, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (uint32_t, uint32_t, int32_t);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(rendererCreateNativeTexture)(___width0, ___height1, ___format2);

	// Marshaling of return value back from native representation
	IntPtr_t _returnValue_unmarshaled;
	_returnValue_unmarshaled.set_m_value_0(reinterpret_cast<void*>((intptr_t)(returnValue)));

	return _returnValue_unmarshaled;
}
extern "C" void DEFAULT_CALL rendererEnd();
// System.Void Vuforia.VuforiaNativeIosWrapper::rendererEnd()
extern "C"  void VuforiaNativeIosWrapper_rendererEnd_m1637940568 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(rendererEnd)();

}
extern "C" int32_t DEFAULT_CALL rendererGetGraphicsAPI();
// System.Int32 Vuforia.VuforiaNativeIosWrapper::rendererGetGraphicsAPI()
extern "C"  int32_t VuforiaNativeIosWrapper_rendererGetGraphicsAPI_m3554303693 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(rendererGetGraphicsAPI)();

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL rendererGetRecommendedFps(int32_t);
// System.Int32 Vuforia.VuforiaNativeIosWrapper::rendererGetRecommendedFps(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_rendererGetRecommendedFps_m3891389397 (RuntimeObject * __this /* static, unused */, int32_t ___flags0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(rendererGetRecommendedFps)(___flags0);

	return returnValue;
}
extern "C" void DEFAULT_CALL rendererGetVideoBackgroundCfg(intptr_t);
// System.Void Vuforia.VuforiaNativeIosWrapper::rendererGetVideoBackgroundCfg(System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_rendererGetVideoBackgroundCfg_m355150956 (RuntimeObject * __this /* static, unused */, IntPtr_t ___bgCfg0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(rendererGetVideoBackgroundCfg)(reinterpret_cast<intptr_t>((___bgCfg0).get_m_value_0()));

}
extern "C" int32_t DEFAULT_CALL rendererGetVideoBackgroundTextureInfo(intptr_t);
// System.Int32 Vuforia.VuforiaNativeIosWrapper::rendererGetVideoBackgroundTextureInfo(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_rendererGetVideoBackgroundTextureInfo_m3559516304 (RuntimeObject * __this /* static, unused */, IntPtr_t ___texInfo0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(rendererGetVideoBackgroundTextureInfo)(reinterpret_cast<intptr_t>((___texInfo0).get_m_value_0()));

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL rendererIsVideoBackgroundTextureInfoAvailable();
// System.Int32 Vuforia.VuforiaNativeIosWrapper::rendererIsVideoBackgroundTextureInfoAvailable()
extern "C"  int32_t VuforiaNativeIosWrapper_rendererIsVideoBackgroundTextureInfoAvailable_m1224522403 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(rendererIsVideoBackgroundTextureInfoAvailable)();

	return returnValue;
}
extern "C" void DEFAULT_CALL rendererSetVideoBackgroundCfg(intptr_t);
// System.Void Vuforia.VuforiaNativeIosWrapper::rendererSetVideoBackgroundCfg(System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_rendererSetVideoBackgroundCfg_m1593180317 (RuntimeObject * __this /* static, unused */, IntPtr_t ___bgCfg0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(rendererSetVideoBackgroundCfg)(reinterpret_cast<intptr_t>((___bgCfg0).get_m_value_0()));

}
extern "C" int32_t DEFAULT_CALL rendererSetVideoBackgroundTextureID(int32_t);
// System.Int32 Vuforia.VuforiaNativeIosWrapper::rendererSetVideoBackgroundTextureID(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_rendererSetVideoBackgroundTextureID_m2914291807 (RuntimeObject * __this /* static, unused */, int32_t ___textureID0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(rendererSetVideoBackgroundTextureID)(___textureID0);

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL rendererSetVideoBackgroundTexturePtr(intptr_t);
// System.Int32 Vuforia.VuforiaNativeIosWrapper::rendererSetVideoBackgroundTexturePtr(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_rendererSetVideoBackgroundTexturePtr_m2747521198 (RuntimeObject * __this /* static, unused */, IntPtr_t ___texturePtr0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(rendererSetVideoBackgroundTexturePtr)(reinterpret_cast<intptr_t>((___texturePtr0).get_m_value_0()));

	return returnValue;
}
extern "C" void DEFAULT_CALL renderingPrimitives_DeleteCopy();
// System.Void Vuforia.VuforiaNativeIosWrapper::renderingPrimitives_DeleteCopy()
extern "C"  void VuforiaNativeIosWrapper_renderingPrimitives_DeleteCopy_m4284476518 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(renderingPrimitives_DeleteCopy)();

}
extern "C" void DEFAULT_CALL renderingPrimitives_GetDistortionMesh(int32_t, intptr_t);
// System.Void Vuforia.VuforiaNativeIosWrapper::renderingPrimitives_GetDistortionMesh(System.Int32,System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_renderingPrimitives_GetDistortionMesh_m1485569470 (RuntimeObject * __this /* static, unused */, int32_t ___viewId0, IntPtr_t ___meshData1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(renderingPrimitives_GetDistortionMesh)(___viewId0, reinterpret_cast<intptr_t>((___meshData1).get_m_value_0()));

}
extern "C" void DEFAULT_CALL renderingPrimitives_GetDistortionMeshSize(int32_t, intptr_t);
// System.Void Vuforia.VuforiaNativeIosWrapper::renderingPrimitives_GetDistortionMeshSize(System.Int32,System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_renderingPrimitives_GetDistortionMeshSize_m1294493921 (RuntimeObject * __this /* static, unused */, int32_t ___viewId0, IntPtr_t ___size1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(renderingPrimitives_GetDistortionMeshSize)(___viewId0, reinterpret_cast<intptr_t>((___size1).get_m_value_0()));

}
extern "C" void DEFAULT_CALL renderingPrimitives_GetDistortionTextureViewport(int32_t, intptr_t);
// System.Void Vuforia.VuforiaNativeIosWrapper::renderingPrimitives_GetDistortionTextureViewport(System.Int32,System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_renderingPrimitives_GetDistortionTextureViewport_m3045094392 (RuntimeObject * __this /* static, unused */, int32_t ___viewID0, IntPtr_t ___viewportContainer1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(renderingPrimitives_GetDistortionTextureViewport)(___viewID0, reinterpret_cast<intptr_t>((___viewportContainer1).get_m_value_0()));

}
extern "C" void DEFAULT_CALL renderingPrimitives_GetEffectiveFov(int32_t, intptr_t);
// System.Void Vuforia.VuforiaNativeIosWrapper::renderingPrimitives_GetEffectiveFov(System.Int32,System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_renderingPrimitives_GetEffectiveFov_m4033596179 (RuntimeObject * __this /* static, unused */, int32_t ___viewID0, IntPtr_t ___fovContainer1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(renderingPrimitives_GetEffectiveFov)(___viewID0, reinterpret_cast<intptr_t>((___fovContainer1).get_m_value_0()));

}
extern "C" void DEFAULT_CALL renderingPrimitives_GetEyeDisplayAdjustmentMatrix(int32_t, intptr_t);
// System.Void Vuforia.VuforiaNativeIosWrapper::renderingPrimitives_GetEyeDisplayAdjustmentMatrix(System.Int32,System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_renderingPrimitives_GetEyeDisplayAdjustmentMatrix_m839958557 (RuntimeObject * __this /* static, unused */, int32_t ___viewID0, IntPtr_t ___matrixContainer1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(renderingPrimitives_GetEyeDisplayAdjustmentMatrix)(___viewID0, reinterpret_cast<intptr_t>((___matrixContainer1).get_m_value_0()));

}
extern "C" void DEFAULT_CALL renderingPrimitives_GetNormalizedViewport(int32_t, intptr_t);
// System.Void Vuforia.VuforiaNativeIosWrapper::renderingPrimitives_GetNormalizedViewport(System.Int32,System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_renderingPrimitives_GetNormalizedViewport_m1008211075 (RuntimeObject * __this /* static, unused */, int32_t ___viewID0, IntPtr_t ___viewportContainer1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(renderingPrimitives_GetNormalizedViewport)(___viewID0, reinterpret_cast<intptr_t>((___viewportContainer1).get_m_value_0()));

}
extern "C" void DEFAULT_CALL renderingPrimitives_GetProjectionMatrix(int32_t, float, float, intptr_t, int32_t);
// System.Void Vuforia.VuforiaNativeIosWrapper::renderingPrimitives_GetProjectionMatrix(System.Int32,System.Single,System.Single,System.IntPtr,System.Int32)
extern "C"  void VuforiaNativeIosWrapper_renderingPrimitives_GetProjectionMatrix_m3150043204 (RuntimeObject * __this /* static, unused */, int32_t ___viewID0, float ___near1, float ___far2, IntPtr_t ___projectionContainer3, int32_t ___screenOrientation4, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, float, float, intptr_t, int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(renderingPrimitives_GetProjectionMatrix)(___viewID0, ___near1, ___far2, reinterpret_cast<intptr_t>((___projectionContainer3).get_m_value_0()), ___screenOrientation4);

}
extern "C" void DEFAULT_CALL renderingPrimitives_GetViewport(int32_t, intptr_t);
// System.Void Vuforia.VuforiaNativeIosWrapper::renderingPrimitives_GetViewport(System.Int32,System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_renderingPrimitives_GetViewport_m1917217805 (RuntimeObject * __this /* static, unused */, int32_t ___viewID0, IntPtr_t ___viewportContainer1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(renderingPrimitives_GetViewport)(___viewID0, reinterpret_cast<intptr_t>((___viewportContainer1).get_m_value_0()));

}
extern "C" void DEFAULT_CALL renderingPrimitives_GetViewportCentreToEyeAxis(int32_t, intptr_t);
// System.Void Vuforia.VuforiaNativeIosWrapper::renderingPrimitives_GetViewportCentreToEyeAxis(System.Int32,System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_renderingPrimitives_GetViewportCentreToEyeAxis_m2882545447 (RuntimeObject * __this /* static, unused */, int32_t ___viewID0, IntPtr_t ___vectorContainer1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(renderingPrimitives_GetViewportCentreToEyeAxis)(___viewID0, reinterpret_cast<intptr_t>((___vectorContainer1).get_m_value_0()));

}
extern "C" void DEFAULT_CALL renderingPrimitives_UpdateCopy();
// System.Void Vuforia.VuforiaNativeIosWrapper::renderingPrimitives_UpdateCopy()
extern "C"  void VuforiaNativeIosWrapper_renderingPrimitives_UpdateCopy_m4246901472 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(renderingPrimitives_UpdateCopy)();

}
extern "C" int32_t DEFAULT_CALL rotationalDeviceTracker_GetModelCorrectionMode();
// System.Int32 Vuforia.VuforiaNativeIosWrapper::rotationalDeviceTracker_GetModelCorrectionMode()
extern "C"  int32_t VuforiaNativeIosWrapper_rotationalDeviceTracker_GetModelCorrectionMode_m1665164313 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(rotationalDeviceTracker_GetModelCorrectionMode)();

	return returnValue;
}
extern "C" void DEFAULT_CALL rotationalDeviceTracker_GetModelCorrectionTransform(intptr_t);
// System.Void Vuforia.VuforiaNativeIosWrapper::rotationalDeviceTracker_GetModelCorrectionTransform(System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_rotationalDeviceTracker_GetModelCorrectionTransform_m2518107080 (RuntimeObject * __this /* static, unused */, IntPtr_t ___pivot0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(rotationalDeviceTracker_GetModelCorrectionTransform)(reinterpret_cast<intptr_t>((___pivot0).get_m_value_0()));

}
extern "C" int32_t DEFAULT_CALL rotationalDeviceTracker_GetPosePrediction();
// System.Int32 Vuforia.VuforiaNativeIosWrapper::rotationalDeviceTracker_GetPosePrediction()
extern "C"  int32_t VuforiaNativeIosWrapper_rotationalDeviceTracker_GetPosePrediction_m349093224 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(rotationalDeviceTracker_GetPosePrediction)();

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL rotationalDeviceTracker_Recenter();
// System.Int32 Vuforia.VuforiaNativeIosWrapper::rotationalDeviceTracker_Recenter()
extern "C"  int32_t VuforiaNativeIosWrapper_rotationalDeviceTracker_Recenter_m4014575558 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(rotationalDeviceTracker_Recenter)();

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL rotationalDeviceTracker_SetModelCorrectionMode(int32_t);
// System.Int32 Vuforia.VuforiaNativeIosWrapper::rotationalDeviceTracker_SetModelCorrectionMode(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_rotationalDeviceTracker_SetModelCorrectionMode_m2260534072 (RuntimeObject * __this /* static, unused */, int32_t ___mode0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(rotationalDeviceTracker_SetModelCorrectionMode)(___mode0);

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL rotationalDeviceTracker_SetModelCorrectionModeWithTransform(int32_t, intptr_t);
// System.Int32 Vuforia.VuforiaNativeIosWrapper::rotationalDeviceTracker_SetModelCorrectionModeWithTransform(System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_rotationalDeviceTracker_SetModelCorrectionModeWithTransform_m2550796783 (RuntimeObject * __this /* static, unused */, int32_t ___mode0, IntPtr_t ___pivot1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, intptr_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(rotationalDeviceTracker_SetModelCorrectionModeWithTransform)(___mode0, reinterpret_cast<intptr_t>((___pivot1).get_m_value_0()));

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL rotationalDeviceTracker_SetPosePrediction(int32_t);
// System.Int32 Vuforia.VuforiaNativeIosWrapper::rotationalDeviceTracker_SetPosePrediction(System.Boolean)
extern "C"  int32_t VuforiaNativeIosWrapper_rotationalDeviceTracker_SetPosePrediction_m306258204 (RuntimeObject * __this /* static, unused */, bool ___mode0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(rotationalDeviceTracker_SetPosePrediction)(static_cast<int32_t>(___mode0));

	return returnValue;
}
extern "C" void DEFAULT_CALL setApplicationEnvironment(int32_t, int32_t, int32_t, int32_t);
// System.Void Vuforia.VuforiaNativeIosWrapper::setApplicationEnvironment(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void VuforiaNativeIosWrapper_setApplicationEnvironment_m3180531107 (RuntimeObject * __this /* static, unused */, int32_t ___unityVersionMajor0, int32_t ___unityVersionMinor1, int32_t ___unityVersionChange2, int32_t ___sdkWrapperType3, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, int32_t, int32_t, int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(setApplicationEnvironment)(___unityVersionMajor0, ___unityVersionMinor1, ___unityVersionChange2, ___sdkWrapperType3);

}
extern "C" int32_t DEFAULT_CALL setHolographicAppCS(intptr_t);
// System.Int32 Vuforia.VuforiaNativeIosWrapper::setHolographicAppCS(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_setHolographicAppCS_m3474711345 (RuntimeObject * __this /* static, unused */, IntPtr_t ___appSpecifiedCS0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(setHolographicAppCS)(reinterpret_cast<intptr_t>((___appSpecifiedCS0).get_m_value_0()));

	return returnValue;
}
extern "C" void DEFAULT_CALL setRenderBuffers(intptr_t);
// System.Void Vuforia.VuforiaNativeIosWrapper::setRenderBuffers(System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_setRenderBuffers_m2942731362 (RuntimeObject * __this /* static, unused */, IntPtr_t ___colorBuffer0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(setRenderBuffers)(reinterpret_cast<intptr_t>((___colorBuffer0).get_m_value_0()));

}
extern "C" void DEFAULT_CALL setStateBufferSize(int32_t);
// System.Void Vuforia.VuforiaNativeIosWrapper::setStateBufferSize(System.Int32)
extern "C"  void VuforiaNativeIosWrapper_setStateBufferSize_m2503428096 (RuntimeObject * __this /* static, unused */, int32_t ___size0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(setStateBufferSize)(___size0);

}
extern "C" int32_t DEFAULT_CALL smartTerrainBuilderAddReconstruction(intptr_t);
// System.Int32 Vuforia.VuforiaNativeIosWrapper::smartTerrainBuilderAddReconstruction(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_smartTerrainBuilderAddReconstruction_m4282467679 (RuntimeObject * __this /* static, unused */, IntPtr_t ___reconstruction0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(smartTerrainBuilderAddReconstruction)(reinterpret_cast<intptr_t>((___reconstruction0).get_m_value_0()));

	return returnValue;
}
extern "C" intptr_t DEFAULT_CALL smartTerrainBuilderCreateReconstructionFromEnvironment();
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::smartTerrainBuilderCreateReconstructionFromEnvironment()
extern "C"  IntPtr_t VuforiaNativeIosWrapper_smartTerrainBuilderCreateReconstructionFromEnvironment_m750780024 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(smartTerrainBuilderCreateReconstructionFromEnvironment)();

	// Marshaling of return value back from native representation
	IntPtr_t _returnValue_unmarshaled;
	_returnValue_unmarshaled.set_m_value_0(reinterpret_cast<void*>((intptr_t)(returnValue)));

	return _returnValue_unmarshaled;
}
extern "C" intptr_t DEFAULT_CALL smartTerrainBuilderCreateReconstructionFromTarget();
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::smartTerrainBuilderCreateReconstructionFromTarget()
extern "C"  IntPtr_t VuforiaNativeIosWrapper_smartTerrainBuilderCreateReconstructionFromTarget_m115541585 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(smartTerrainBuilderCreateReconstructionFromTarget)();

	// Marshaling of return value back from native representation
	IntPtr_t _returnValue_unmarshaled;
	_returnValue_unmarshaled.set_m_value_0(reinterpret_cast<void*>((intptr_t)(returnValue)));

	return _returnValue_unmarshaled;
}
extern "C" int32_t DEFAULT_CALL smartTerrainBuilderDestroyReconstruction(intptr_t);
// System.Int32 Vuforia.VuforiaNativeIosWrapper::smartTerrainBuilderDestroyReconstruction(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_smartTerrainBuilderDestroyReconstruction_m3760270767 (RuntimeObject * __this /* static, unused */, IntPtr_t ___reconstruction0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(smartTerrainBuilderDestroyReconstruction)(reinterpret_cast<intptr_t>((___reconstruction0).get_m_value_0()));

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL smartTerrainBuilderRemoveReconstruction(intptr_t);
// System.Int32 Vuforia.VuforiaNativeIosWrapper::smartTerrainBuilderRemoveReconstruction(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_smartTerrainBuilderRemoveReconstruction_m1168953388 (RuntimeObject * __this /* static, unused */, IntPtr_t ___reconstruction0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(smartTerrainBuilderRemoveReconstruction)(reinterpret_cast<intptr_t>((___reconstruction0).get_m_value_0()));

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL smartTerrainTrackerDeinitBuilder();
// System.Int32 Vuforia.VuforiaNativeIosWrapper::smartTerrainTrackerDeinitBuilder()
extern "C"  int32_t VuforiaNativeIosWrapper_smartTerrainTrackerDeinitBuilder_m862648353 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(smartTerrainTrackerDeinitBuilder)();

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL smartTerrainTrackerInitBuilder();
// System.Int32 Vuforia.VuforiaNativeIosWrapper::smartTerrainTrackerInitBuilder()
extern "C"  int32_t VuforiaNativeIosWrapper_smartTerrainTrackerInitBuilder_m786166929 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(smartTerrainTrackerInitBuilder)();

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL smartTerrainTrackerSetScaleToMillimeter(float);
// System.Int32 Vuforia.VuforiaNativeIosWrapper::smartTerrainTrackerSetScaleToMillimeter(System.Single)
extern "C"  int32_t VuforiaNativeIosWrapper_smartTerrainTrackerSetScaleToMillimeter_m313994157 (RuntimeObject * __this /* static, unused */, float ___scaleToMillimenters0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (float);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(smartTerrainTrackerSetScaleToMillimeter)(___scaleToMillimenters0);

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL startExtendedTracking(intptr_t, int32_t);
// System.Int32 Vuforia.VuforiaNativeIosWrapper::startExtendedTracking(System.IntPtr,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_startExtendedTracking_m1122849092 (RuntimeObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, int32_t ___trackableID1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(startExtendedTracking)(reinterpret_cast<intptr_t>((___dataSetPtr0).get_m_value_0()), ___trackableID1);

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL stopExtendedTracking(intptr_t, int32_t);
// System.Int32 Vuforia.VuforiaNativeIosWrapper::stopExtendedTracking(System.IntPtr,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_stopExtendedTracking_m3905826888 (RuntimeObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, int32_t ___trackableID1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(stopExtendedTracking)(reinterpret_cast<intptr_t>((___dataSetPtr0).get_m_value_0()), ___trackableID1);

	return returnValue;
}
extern "C" void DEFAULT_CALL targetFinderClearTrackables();
// System.Void Vuforia.VuforiaNativeIosWrapper::targetFinderClearTrackables()
extern "C"  void VuforiaNativeIosWrapper_targetFinderClearTrackables_m4187968851 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(targetFinderClearTrackables)();

}
extern "C" int32_t DEFAULT_CALL targetFinderDeinit();
// System.Int32 Vuforia.VuforiaNativeIosWrapper::targetFinderDeinit()
extern "C"  int32_t VuforiaNativeIosWrapper_targetFinderDeinit_m983259518 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(targetFinderDeinit)();

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL targetFinderEnableTracking(intptr_t, intptr_t);
// System.Int32 Vuforia.VuforiaNativeIosWrapper::targetFinderEnableTracking(System.IntPtr,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_targetFinderEnableTracking_m2448418215 (RuntimeObject * __this /* static, unused */, IntPtr_t ___searchResult0, IntPtr_t ___trackableData1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(targetFinderEnableTracking)(reinterpret_cast<intptr_t>((___searchResult0).get_m_value_0()), reinterpret_cast<intptr_t>((___trackableData1).get_m_value_0()));

	return returnValue;
}
extern "C" void DEFAULT_CALL targetFinderGetImageTargets(intptr_t, int32_t);
// System.Void Vuforia.VuforiaNativeIosWrapper::targetFinderGetImageTargets(System.IntPtr,System.Int32)
extern "C"  void VuforiaNativeIosWrapper_targetFinderGetImageTargets_m981824355 (RuntimeObject * __this /* static, unused */, IntPtr_t ___trackableIdArray0, int32_t ___trackableIdArrayLength1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(targetFinderGetImageTargets)(reinterpret_cast<intptr_t>((___trackableIdArray0).get_m_value_0()), ___trackableIdArrayLength1);

}
extern "C" int32_t DEFAULT_CALL targetFinderGetInitState();
// System.Int32 Vuforia.VuforiaNativeIosWrapper::targetFinderGetInitState()
extern "C"  int32_t VuforiaNativeIosWrapper_targetFinderGetInitState_m4222749029 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(targetFinderGetInitState)();

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL targetFinderGetResults(intptr_t, int32_t);
// System.Int32 Vuforia.VuforiaNativeIosWrapper::targetFinderGetResults(System.IntPtr,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_targetFinderGetResults_m1879124834 (RuntimeObject * __this /* static, unused */, IntPtr_t ___searchResultArray0, int32_t ___searchResultArrayLength1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(targetFinderGetResults)(reinterpret_cast<intptr_t>((___searchResultArray0).get_m_value_0()), ___searchResultArrayLength1);

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL targetFinderStartInit(char*, char*);
// System.Int32 Vuforia.VuforiaNativeIosWrapper::targetFinderStartInit(System.String,System.String)
extern "C"  int32_t VuforiaNativeIosWrapper_targetFinderStartInit_m3653974033 (RuntimeObject * __this /* static, unused */, String_t* ___userKey0, String_t* ___secretKey1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (char*, char*);

	// Marshaling of parameter '___userKey0' to native representation
	char* ____userKey0_marshaled = NULL;
	____userKey0_marshaled = il2cpp_codegen_marshal_string(___userKey0);

	// Marshaling of parameter '___secretKey1' to native representation
	char* ____secretKey1_marshaled = NULL;
	____secretKey1_marshaled = il2cpp_codegen_marshal_string(___secretKey1);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(targetFinderStartInit)(____userKey0_marshaled, ____secretKey1_marshaled);

	// Marshaling cleanup of parameter '___userKey0' native representation
	il2cpp_codegen_marshal_free(____userKey0_marshaled);
	____userKey0_marshaled = NULL;

	// Marshaling cleanup of parameter '___secretKey1' native representation
	il2cpp_codegen_marshal_free(____secretKey1_marshaled);
	____secretKey1_marshaled = NULL;

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL targetFinderStartRecognition();
// System.Int32 Vuforia.VuforiaNativeIosWrapper::targetFinderStartRecognition()
extern "C"  int32_t VuforiaNativeIosWrapper_targetFinderStartRecognition_m1589074166 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(targetFinderStartRecognition)();

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL targetFinderStop();
// System.Int32 Vuforia.VuforiaNativeIosWrapper::targetFinderStop()
extern "C"  int32_t VuforiaNativeIosWrapper_targetFinderStop_m1289539814 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(targetFinderStop)();

	return returnValue;
}
extern "C" void DEFAULT_CALL targetFinderUpdate(intptr_t, int32_t);
// System.Void Vuforia.VuforiaNativeIosWrapper::targetFinderUpdate(System.IntPtr,System.Int32)
extern "C"  void VuforiaNativeIosWrapper_targetFinderUpdate_m1996478393 (RuntimeObject * __this /* static, unused */, IntPtr_t ___targetFinderState0, int32_t ___filterMode1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(targetFinderUpdate)(reinterpret_cast<intptr_t>((___targetFinderState0).get_m_value_0()), ___filterMode1);

}
extern "C" void DEFAULT_CALL textTrackerGetRegionOfInterest(intptr_t, intptr_t);
// System.Void Vuforia.VuforiaNativeIosWrapper::textTrackerGetRegionOfInterest(System.IntPtr,System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_textTrackerGetRegionOfInterest_m494308765 (RuntimeObject * __this /* static, unused */, IntPtr_t ___detectionROI0, IntPtr_t ___trackingROI1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(textTrackerGetRegionOfInterest)(reinterpret_cast<intptr_t>((___detectionROI0).get_m_value_0()), reinterpret_cast<intptr_t>((___trackingROI1).get_m_value_0()));

}
extern "C" int32_t DEFAULT_CALL textTrackerSetRegionOfInterest(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t);
// System.Int32 Vuforia.VuforiaNativeIosWrapper::textTrackerSetRegionOfInterest(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_textTrackerSetRegionOfInterest_m2406724781 (RuntimeObject * __this /* static, unused */, int32_t ___detectionLeftTopX0, int32_t ___detectionLeftTopY1, int32_t ___detectionRightBottomX2, int32_t ___detectionRightBottomY3, int32_t ___trackingLeftTopX4, int32_t ___trackingLeftTopY5, int32_t ___trackingRightBottomX6, int32_t ___trackingRightBottomY7, int32_t ___upDirection8, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(textTrackerSetRegionOfInterest)(___detectionLeftTopX0, ___detectionLeftTopY1, ___detectionRightBottomX2, ___detectionRightBottomY3, ___trackingLeftTopX4, ___trackingLeftTopY5, ___trackingRightBottomX6, ___trackingRightBottomY7, ___upDirection8);

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL trackerManagerDeinitTracker(int32_t);
// System.Int32 Vuforia.VuforiaNativeIosWrapper::trackerManagerDeinitTracker(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_trackerManagerDeinitTracker_m2174100662 (RuntimeObject * __this /* static, unused */, int32_t ___trackerTypeID0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(trackerManagerDeinitTracker)(___trackerTypeID0);

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL trackerManagerInitTracker(int32_t);
// System.Int32 Vuforia.VuforiaNativeIosWrapper::trackerManagerInitTracker(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_trackerManagerInitTracker_m2961365684 (RuntimeObject * __this /* static, unused */, int32_t ___trackerTypeID0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(trackerManagerInitTracker)(___trackerTypeID0);

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL trackerStart(int32_t);
// System.Int32 Vuforia.VuforiaNativeIosWrapper::trackerStart(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_trackerStart_m2485622754 (RuntimeObject * __this /* static, unused */, int32_t ___trackerTypeID0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(trackerStart)(___trackerTypeID0);

	return returnValue;
}
extern "C" void DEFAULT_CALL trackerStop(int32_t);
// System.Void Vuforia.VuforiaNativeIosWrapper::trackerStop(System.Int32)
extern "C"  void VuforiaNativeIosWrapper_trackerStop_m2532593528 (RuntimeObject * __this /* static, unused */, int32_t ___trackerTypeID0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(trackerStop)(___trackerTypeID0);

}
extern "C" int32_t DEFAULT_CALL updateQCAR(intptr_t, int32_t, intptr_t, int32_t);
// System.Int32 Vuforia.VuforiaNativeIosWrapper::updateQCAR(System.IntPtr,System.Int32,System.IntPtr,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_updateQCAR_m3512176518 (RuntimeObject * __this /* static, unused */, IntPtr_t ___imageHeaderDataArray0, int32_t ___imageHeaderArrayLength1, IntPtr_t ___frameState2, int32_t ___screenOrientation3, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t, intptr_t, int32_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(updateQCAR)(reinterpret_cast<intptr_t>((___imageHeaderDataArray0).get_m_value_0()), ___imageHeaderArrayLength1, reinterpret_cast<intptr_t>((___frameState2).get_m_value_0()), ___screenOrientation3);

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL viewerParameters_ContainsMagnet(intptr_t);
// System.Int32 Vuforia.VuforiaNativeIosWrapper::viewerParameters_ContainsMagnet(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_viewerParameters_ContainsMagnet_m3404053190 (RuntimeObject * __this /* static, unused */, IntPtr_t ___obj0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(viewerParameters_ContainsMagnet)(reinterpret_cast<intptr_t>((___obj0).get_m_value_0()));

	return returnValue;
}
extern "C" intptr_t DEFAULT_CALL viewerParameters_copy(intptr_t);
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::viewerParameters_copy(System.IntPtr)
extern "C"  IntPtr_t VuforiaNativeIosWrapper_viewerParameters_copy_m483521122 (RuntimeObject * __this /* static, unused */, IntPtr_t ___obj0, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(viewerParameters_copy)(reinterpret_cast<intptr_t>((___obj0).get_m_value_0()));

	// Marshaling of return value back from native representation
	IntPtr_t _returnValue_unmarshaled;
	_returnValue_unmarshaled.set_m_value_0(reinterpret_cast<void*>((intptr_t)(returnValue)));

	return _returnValue_unmarshaled;
}
extern "C" void DEFAULT_CALL viewerParameters_delete(intptr_t);
// System.Void Vuforia.VuforiaNativeIosWrapper::viewerParameters_delete(System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_viewerParameters_delete_m2299903074 (RuntimeObject * __this /* static, unused */, IntPtr_t ___obj0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(viewerParameters_delete)(reinterpret_cast<intptr_t>((___obj0).get_m_value_0()));

}
extern "C" int32_t DEFAULT_CALL viewerParameters_GetButtonType(intptr_t);
// System.Int32 Vuforia.VuforiaNativeIosWrapper::viewerParameters_GetButtonType(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_viewerParameters_GetButtonType_m1307592737 (RuntimeObject * __this /* static, unused */, IntPtr_t ___obj0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(viewerParameters_GetButtonType)(reinterpret_cast<intptr_t>((___obj0).get_m_value_0()));

	return returnValue;
}
extern "C" float DEFAULT_CALL viewerParameters_GetDistortionCoefficient(intptr_t, int32_t);
// System.Single Vuforia.VuforiaNativeIosWrapper::viewerParameters_GetDistortionCoefficient(System.IntPtr,System.Int32)
extern "C"  float VuforiaNativeIosWrapper_viewerParameters_GetDistortionCoefficient_m3835343078 (RuntimeObject * __this /* static, unused */, IntPtr_t ___obj0, int32_t ___idx1, const RuntimeMethod* method)
{
	typedef float (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t);

	// Native function invocation
	float returnValue = reinterpret_cast<PInvokeFunc>(viewerParameters_GetDistortionCoefficient)(reinterpret_cast<intptr_t>((___obj0).get_m_value_0()), ___idx1);

	return returnValue;
}
extern "C" void DEFAULT_CALL viewerParameters_GetFieldOfView(intptr_t, intptr_t);
// System.Void Vuforia.VuforiaNativeIosWrapper::viewerParameters_GetFieldOfView(System.IntPtr,System.IntPtr)
extern "C"  void VuforiaNativeIosWrapper_viewerParameters_GetFieldOfView_m2849157524 (RuntimeObject * __this /* static, unused */, IntPtr_t ___obj0, IntPtr_t ___result1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(viewerParameters_GetFieldOfView)(reinterpret_cast<intptr_t>((___obj0).get_m_value_0()), reinterpret_cast<intptr_t>((___result1).get_m_value_0()));

}
extern "C" float DEFAULT_CALL viewerParameters_GetInterLensDistance(intptr_t);
// System.Single Vuforia.VuforiaNativeIosWrapper::viewerParameters_GetInterLensDistance(System.IntPtr)
extern "C"  float VuforiaNativeIosWrapper_viewerParameters_GetInterLensDistance_m2525665738 (RuntimeObject * __this /* static, unused */, IntPtr_t ___obj0, const RuntimeMethod* method)
{
	typedef float (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	float returnValue = reinterpret_cast<PInvokeFunc>(viewerParameters_GetInterLensDistance)(reinterpret_cast<intptr_t>((___obj0).get_m_value_0()));

	return returnValue;
}
extern "C" float DEFAULT_CALL viewerParameters_GetLensCentreToTrayDistance(intptr_t);
// System.Single Vuforia.VuforiaNativeIosWrapper::viewerParameters_GetLensCentreToTrayDistance(System.IntPtr)
extern "C"  float VuforiaNativeIosWrapper_viewerParameters_GetLensCentreToTrayDistance_m2796376155 (RuntimeObject * __this /* static, unused */, IntPtr_t ___obj0, const RuntimeMethod* method)
{
	typedef float (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	float returnValue = reinterpret_cast<PInvokeFunc>(viewerParameters_GetLensCentreToTrayDistance)(reinterpret_cast<intptr_t>((___obj0).get_m_value_0()));

	return returnValue;
}
extern "C" intptr_t DEFAULT_CALL viewerParameters_GetManufacturer(intptr_t);
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::viewerParameters_GetManufacturer(System.IntPtr)
extern "C"  IntPtr_t VuforiaNativeIosWrapper_viewerParameters_GetManufacturer_m3612854118 (RuntimeObject * __this /* static, unused */, IntPtr_t ___obj0, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(viewerParameters_GetManufacturer)(reinterpret_cast<intptr_t>((___obj0).get_m_value_0()));

	// Marshaling of return value back from native representation
	IntPtr_t _returnValue_unmarshaled;
	_returnValue_unmarshaled.set_m_value_0(reinterpret_cast<void*>((intptr_t)(returnValue)));

	return _returnValue_unmarshaled;
}
extern "C" intptr_t DEFAULT_CALL viewerParameters_GetName(intptr_t);
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::viewerParameters_GetName(System.IntPtr)
extern "C"  IntPtr_t VuforiaNativeIosWrapper_viewerParameters_GetName_m2526646331 (RuntimeObject * __this /* static, unused */, IntPtr_t ___obj0, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(viewerParameters_GetName)(reinterpret_cast<intptr_t>((___obj0).get_m_value_0()));

	// Marshaling of return value back from native representation
	IntPtr_t _returnValue_unmarshaled;
	_returnValue_unmarshaled.set_m_value_0(reinterpret_cast<void*>((intptr_t)(returnValue)));

	return _returnValue_unmarshaled;
}
extern "C" int32_t DEFAULT_CALL viewerParameters_GetNumDistortionCoefficients(intptr_t);
// System.Int32 Vuforia.VuforiaNativeIosWrapper::viewerParameters_GetNumDistortionCoefficients(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_viewerParameters_GetNumDistortionCoefficients_m2743546755 (RuntimeObject * __this /* static, unused */, IntPtr_t ___obj0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(viewerParameters_GetNumDistortionCoefficients)(reinterpret_cast<intptr_t>((___obj0).get_m_value_0()));

	return returnValue;
}
extern "C" float DEFAULT_CALL viewerParameters_GetScreenToLensDistance(intptr_t);
// System.Single Vuforia.VuforiaNativeIosWrapper::viewerParameters_GetScreenToLensDistance(System.IntPtr)
extern "C"  float VuforiaNativeIosWrapper_viewerParameters_GetScreenToLensDistance_m2150660099 (RuntimeObject * __this /* static, unused */, IntPtr_t ___obj0, const RuntimeMethod* method)
{
	typedef float (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	float returnValue = reinterpret_cast<PInvokeFunc>(viewerParameters_GetScreenToLensDistance)(reinterpret_cast<intptr_t>((___obj0).get_m_value_0()));

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL viewerParameters_GetTrayAlignment(intptr_t);
// System.Int32 Vuforia.VuforiaNativeIosWrapper::viewerParameters_GetTrayAlignment(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_viewerParameters_GetTrayAlignment_m1514126060 (RuntimeObject * __this /* static, unused */, IntPtr_t ___obj0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(viewerParameters_GetTrayAlignment)(reinterpret_cast<intptr_t>((___obj0).get_m_value_0()));

	return returnValue;
}
extern "C" float DEFAULT_CALL viewerParameters_GetVersion(intptr_t);
// System.Single Vuforia.VuforiaNativeIosWrapper::viewerParameters_GetVersion(System.IntPtr)
extern "C"  float VuforiaNativeIosWrapper_viewerParameters_GetVersion_m3077411522 (RuntimeObject * __this /* static, unused */, IntPtr_t ___obj0, const RuntimeMethod* method)
{
	typedef float (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	float returnValue = reinterpret_cast<PInvokeFunc>(viewerParameters_GetVersion)(reinterpret_cast<intptr_t>((___obj0).get_m_value_0()));

	return returnValue;
}
extern "C" intptr_t DEFAULT_CALL viewerParametersList_Begin(intptr_t);
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::viewerParametersList_Begin(System.IntPtr)
extern "C"  IntPtr_t VuforiaNativeIosWrapper_viewerParametersList_Begin_m62241854 (RuntimeObject * __this /* static, unused */, IntPtr_t ___vpList0, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(viewerParametersList_Begin)(reinterpret_cast<intptr_t>((___vpList0).get_m_value_0()));

	// Marshaling of return value back from native representation
	IntPtr_t _returnValue_unmarshaled;
	_returnValue_unmarshaled.set_m_value_0(reinterpret_cast<void*>((intptr_t)(returnValue)));

	return _returnValue_unmarshaled;
}
extern "C" intptr_t DEFAULT_CALL viewerParametersList_GetByIndex(intptr_t, int32_t);
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::viewerParametersList_GetByIndex(System.IntPtr,System.Int32)
extern "C"  IntPtr_t VuforiaNativeIosWrapper_viewerParametersList_GetByIndex_m2700664943 (RuntimeObject * __this /* static, unused */, IntPtr_t ___vpList0, int32_t ___idx1, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(viewerParametersList_GetByIndex)(reinterpret_cast<intptr_t>((___vpList0).get_m_value_0()), ___idx1);

	// Marshaling of return value back from native representation
	IntPtr_t _returnValue_unmarshaled;
	_returnValue_unmarshaled.set_m_value_0(reinterpret_cast<void*>((intptr_t)(returnValue)));

	return _returnValue_unmarshaled;
}
extern "C" intptr_t DEFAULT_CALL viewerParametersList_GetByNameManufacturer(intptr_t, char*, char*);
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::viewerParametersList_GetByNameManufacturer(System.IntPtr,System.String,System.String)
extern "C"  IntPtr_t VuforiaNativeIosWrapper_viewerParametersList_GetByNameManufacturer_m3947847597 (RuntimeObject * __this /* static, unused */, IntPtr_t ___vpList0, String_t* ___name1, String_t* ___manufacturer2, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, char*, char*);

	// Marshaling of parameter '___name1' to native representation
	char* ____name1_marshaled = NULL;
	____name1_marshaled = il2cpp_codegen_marshal_string(___name1);

	// Marshaling of parameter '___manufacturer2' to native representation
	char* ____manufacturer2_marshaled = NULL;
	____manufacturer2_marshaled = il2cpp_codegen_marshal_string(___manufacturer2);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(viewerParametersList_GetByNameManufacturer)(reinterpret_cast<intptr_t>((___vpList0).get_m_value_0()), ____name1_marshaled, ____manufacturer2_marshaled);

	// Marshaling of return value back from native representation
	IntPtr_t _returnValue_unmarshaled;
	_returnValue_unmarshaled.set_m_value_0(reinterpret_cast<void*>((intptr_t)(returnValue)));

	// Marshaling cleanup of parameter '___name1' native representation
	il2cpp_codegen_marshal_free(____name1_marshaled);
	____name1_marshaled = NULL;

	// Marshaling cleanup of parameter '___manufacturer2' native representation
	il2cpp_codegen_marshal_free(____manufacturer2_marshaled);
	____manufacturer2_marshaled = NULL;

	return _returnValue_unmarshaled;
}
extern "C" intptr_t DEFAULT_CALL viewerParametersList_GetListForAuthoringTools();
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::viewerParametersList_GetListForAuthoringTools()
extern "C"  IntPtr_t VuforiaNativeIosWrapper_viewerParametersList_GetListForAuthoringTools_m72560898 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(viewerParametersList_GetListForAuthoringTools)();

	// Marshaling of return value back from native representation
	IntPtr_t _returnValue_unmarshaled;
	_returnValue_unmarshaled.set_m_value_0(reinterpret_cast<void*>((intptr_t)(returnValue)));

	return _returnValue_unmarshaled;
}
extern "C" intptr_t DEFAULT_CALL viewerParametersList_Next(intptr_t, intptr_t);
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::viewerParametersList_Next(System.IntPtr,System.IntPtr)
extern "C"  IntPtr_t VuforiaNativeIosWrapper_viewerParametersList_Next_m282216182 (RuntimeObject * __this /* static, unused */, IntPtr_t ___vpList0, IntPtr_t ___vpLast1, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(viewerParametersList_Next)(reinterpret_cast<intptr_t>((___vpList0).get_m_value_0()), reinterpret_cast<intptr_t>((___vpLast1).get_m_value_0()));

	// Marshaling of return value back from native representation
	IntPtr_t _returnValue_unmarshaled;
	_returnValue_unmarshaled.set_m_value_0(reinterpret_cast<void*>((intptr_t)(returnValue)));

	return _returnValue_unmarshaled;
}
extern "C" void DEFAULT_CALL viewerParametersList_SetSDKFilter(intptr_t, char*);
// System.Void Vuforia.VuforiaNativeIosWrapper::viewerParametersList_SetSDKFilter(System.IntPtr,System.String)
extern "C"  void VuforiaNativeIosWrapper_viewerParametersList_SetSDKFilter_m2725056494 (RuntimeObject * __this /* static, unused */, IntPtr_t ___vpList0, String_t* ___filter1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, char*);

	// Marshaling of parameter '___filter1' to native representation
	char* ____filter1_marshaled = NULL;
	____filter1_marshaled = il2cpp_codegen_marshal_string(___filter1);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(viewerParametersList_SetSDKFilter)(reinterpret_cast<intptr_t>((___vpList0).get_m_value_0()), ____filter1_marshaled);

	// Marshaling cleanup of parameter '___filter1' native representation
	il2cpp_codegen_marshal_free(____filter1_marshaled);
	____filter1_marshaled = NULL;

}
extern "C" int32_t DEFAULT_CALL viewerParametersList_Size(intptr_t);
// System.Int32 Vuforia.VuforiaNativeIosWrapper::viewerParametersList_Size(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_viewerParametersList_Size_m1715051476 (RuntimeObject * __this /* static, unused */, IntPtr_t ___vpList0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(viewerParametersList_Size)(reinterpret_cast<intptr_t>((___vpList0).get_m_value_0()));

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL virtualButtonGetId(intptr_t, char*, char*);
// System.Int32 Vuforia.VuforiaNativeIosWrapper::virtualButtonGetId(System.IntPtr,System.String,System.String)
extern "C"  int32_t VuforiaNativeIosWrapper_virtualButtonGetId_m2872628959 (RuntimeObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, String_t* ___virtualButtonName2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, char*, char*);

	// Marshaling of parameter '___trackableName1' to native representation
	char* ____trackableName1_marshaled = NULL;
	____trackableName1_marshaled = il2cpp_codegen_marshal_string(___trackableName1);

	// Marshaling of parameter '___virtualButtonName2' to native representation
	char* ____virtualButtonName2_marshaled = NULL;
	____virtualButtonName2_marshaled = il2cpp_codegen_marshal_string(___virtualButtonName2);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(virtualButtonGetId)(reinterpret_cast<intptr_t>((___dataSetPtr0).get_m_value_0()), ____trackableName1_marshaled, ____virtualButtonName2_marshaled);

	// Marshaling cleanup of parameter '___trackableName1' native representation
	il2cpp_codegen_marshal_free(____trackableName1_marshaled);
	____trackableName1_marshaled = NULL;

	// Marshaling cleanup of parameter '___virtualButtonName2' native representation
	il2cpp_codegen_marshal_free(____virtualButtonName2_marshaled);
	____virtualButtonName2_marshaled = NULL;

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL virtualButtonSetAreaRectangle(intptr_t, char*, char*, intptr_t);
// System.Int32 Vuforia.VuforiaNativeIosWrapper::virtualButtonSetAreaRectangle(System.IntPtr,System.String,System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_virtualButtonSetAreaRectangle_m2149311299 (RuntimeObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, String_t* ___virtualButtonName2, IntPtr_t ___rectData3, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, char*, char*, intptr_t);

	// Marshaling of parameter '___trackableName1' to native representation
	char* ____trackableName1_marshaled = NULL;
	____trackableName1_marshaled = il2cpp_codegen_marshal_string(___trackableName1);

	// Marshaling of parameter '___virtualButtonName2' to native representation
	char* ____virtualButtonName2_marshaled = NULL;
	____virtualButtonName2_marshaled = il2cpp_codegen_marshal_string(___virtualButtonName2);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(virtualButtonSetAreaRectangle)(reinterpret_cast<intptr_t>((___dataSetPtr0).get_m_value_0()), ____trackableName1_marshaled, ____virtualButtonName2_marshaled, reinterpret_cast<intptr_t>((___rectData3).get_m_value_0()));

	// Marshaling cleanup of parameter '___trackableName1' native representation
	il2cpp_codegen_marshal_free(____trackableName1_marshaled);
	____trackableName1_marshaled = NULL;

	// Marshaling cleanup of parameter '___virtualButtonName2' native representation
	il2cpp_codegen_marshal_free(____virtualButtonName2_marshaled);
	____virtualButtonName2_marshaled = NULL;

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL virtualButtonSetEnabled(intptr_t, char*, char*, int32_t);
// System.Int32 Vuforia.VuforiaNativeIosWrapper::virtualButtonSetEnabled(System.IntPtr,System.String,System.String,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_virtualButtonSetEnabled_m1130838900 (RuntimeObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, String_t* ___virtualButtonName2, int32_t ___enabled3, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, char*, char*, int32_t);

	// Marshaling of parameter '___trackableName1' to native representation
	char* ____trackableName1_marshaled = NULL;
	____trackableName1_marshaled = il2cpp_codegen_marshal_string(___trackableName1);

	// Marshaling of parameter '___virtualButtonName2' to native representation
	char* ____virtualButtonName2_marshaled = NULL;
	____virtualButtonName2_marshaled = il2cpp_codegen_marshal_string(___virtualButtonName2);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(virtualButtonSetEnabled)(reinterpret_cast<intptr_t>((___dataSetPtr0).get_m_value_0()), ____trackableName1_marshaled, ____virtualButtonName2_marshaled, ___enabled3);

	// Marshaling cleanup of parameter '___trackableName1' native representation
	il2cpp_codegen_marshal_free(____trackableName1_marshaled);
	____trackableName1_marshaled = NULL;

	// Marshaling cleanup of parameter '___virtualButtonName2' native representation
	il2cpp_codegen_marshal_free(____virtualButtonName2_marshaled);
	____virtualButtonName2_marshaled = NULL;

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL virtualButtonSetSensitivity(intptr_t, char*, char*, int32_t);
// System.Int32 Vuforia.VuforiaNativeIosWrapper::virtualButtonSetSensitivity(System.IntPtr,System.String,System.String,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_virtualButtonSetSensitivity_m1128794600 (RuntimeObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, String_t* ___virtualButtonName2, int32_t ___sensitivity3, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, char*, char*, int32_t);

	// Marshaling of parameter '___trackableName1' to native representation
	char* ____trackableName1_marshaled = NULL;
	____trackableName1_marshaled = il2cpp_codegen_marshal_string(___trackableName1);

	// Marshaling of parameter '___virtualButtonName2' to native representation
	char* ____virtualButtonName2_marshaled = NULL;
	____virtualButtonName2_marshaled = il2cpp_codegen_marshal_string(___virtualButtonName2);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(virtualButtonSetSensitivity)(reinterpret_cast<intptr_t>((___dataSetPtr0).get_m_value_0()), ____trackableName1_marshaled, ____virtualButtonName2_marshaled, ___sensitivity3);

	// Marshaling cleanup of parameter '___trackableName1' native representation
	il2cpp_codegen_marshal_free(____trackableName1_marshaled);
	____trackableName1_marshaled = NULL;

	// Marshaling cleanup of parameter '___virtualButtonName2' native representation
	il2cpp_codegen_marshal_free(____virtualButtonName2_marshaled);
	____virtualButtonName2_marshaled = NULL;

	return returnValue;
}
extern "C" intptr_t DEFAULT_CALL vuforiaGetRenderEventCallback();
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::vuforiaGetRenderEventCallback()
extern "C"  IntPtr_t VuforiaNativeIosWrapper_vuforiaGetRenderEventCallback_m3555660133 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(vuforiaGetRenderEventCallback)();

	// Marshaling of return value back from native representation
	IntPtr_t _returnValue_unmarshaled;
	_returnValue_unmarshaled.set_m_value_0(reinterpret_cast<void*>((intptr_t)(returnValue)));

	return _returnValue_unmarshaled;
}
extern "C" int32_t DEFAULT_CALL vuMarkTargetGetInstanceImage(int32_t, intptr_t);
// System.Int32 Vuforia.VuforiaNativeIosWrapper::vuMarkTargetGetInstanceImage(System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_vuMarkTargetGetInstanceImage_m2674287387 (RuntimeObject * __this /* static, unused */, int32_t ___vuMarkTargetID0, IntPtr_t ___instanceImage1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, intptr_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(vuMarkTargetGetInstanceImage)(___vuMarkTargetID0, reinterpret_cast<intptr_t>((___instanceImage1).get_m_value_0()));

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL vuMarkTemplateGetOrigin(intptr_t, char*, intptr_t);
// System.Int32 Vuforia.VuforiaNativeIosWrapper::vuMarkTemplateGetOrigin(System.IntPtr,System.String,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_vuMarkTemplateGetOrigin_m3601309644 (RuntimeObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, IntPtr_t ___originPtr2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, char*, intptr_t);

	// Marshaling of parameter '___trackableName1' to native representation
	char* ____trackableName1_marshaled = NULL;
	____trackableName1_marshaled = il2cpp_codegen_marshal_string(___trackableName1);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(vuMarkTemplateGetOrigin)(reinterpret_cast<intptr_t>((___dataSetPtr0).get_m_value_0()), ____trackableName1_marshaled, reinterpret_cast<intptr_t>((___originPtr2).get_m_value_0()));

	// Marshaling cleanup of parameter '___trackableName1' native representation
	il2cpp_codegen_marshal_free(____trackableName1_marshaled);
	____trackableName1_marshaled = NULL;

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL vuMarkTemplateGetVuMarkUserData(intptr_t, char*, char*, uint32_t);
// System.Int32 Vuforia.VuforiaNativeIosWrapper::vuMarkTemplateGetVuMarkUserData(System.IntPtr,System.String,System.Text.StringBuilder,System.UInt32)
extern "C"  int32_t VuforiaNativeIosWrapper_vuMarkTemplateGetVuMarkUserData_m1712451288 (RuntimeObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, StringBuilder_t2306688936 * ___data2, uint32_t ___dataLength3, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, char*, char*, uint32_t);

	// Marshaling of parameter '___trackableName1' to native representation
	char* ____trackableName1_marshaled = NULL;
	____trackableName1_marshaled = il2cpp_codegen_marshal_string(___trackableName1);

	// Marshaling of parameter '___data2' to native representation
	char* ____data2_marshaled = NULL;
	____data2_marshaled = il2cpp_codegen_marshal_string_builder(___data2);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(vuMarkTemplateGetVuMarkUserData)(reinterpret_cast<intptr_t>((___dataSetPtr0).get_m_value_0()), ____trackableName1_marshaled, ____data2_marshaled, ___dataLength3);

	// Marshaling cleanup of parameter '___trackableName1' native representation
	il2cpp_codegen_marshal_free(____trackableName1_marshaled);
	____trackableName1_marshaled = NULL;

	// Marshaling of parameter '___data2' back from native representation
	il2cpp_codegen_marshal_string_builder_result(___data2, ____data2_marshaled);

	// Marshaling cleanup of parameter '___data2' native representation
	il2cpp_codegen_marshal_free(____data2_marshaled);
	____data2_marshaled = NULL;

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL vuMarkTemplateSetTrackingFromRuntimeAppearance(intptr_t, char*, int32_t);
// System.Int32 Vuforia.VuforiaNativeIosWrapper::vuMarkTemplateSetTrackingFromRuntimeAppearance(System.IntPtr,System.String,System.Boolean)
extern "C"  int32_t VuforiaNativeIosWrapper_vuMarkTemplateSetTrackingFromRuntimeAppearance_m2239458546 (RuntimeObject * __this /* static, unused */, IntPtr_t ___dataSetPtr0, String_t* ___trackableName1, bool ___enable2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, char*, int32_t);

	// Marshaling of parameter '___trackableName1' to native representation
	char* ____trackableName1_marshaled = NULL;
	____trackableName1_marshaled = il2cpp_codegen_marshal_string(___trackableName1);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(vuMarkTemplateSetTrackingFromRuntimeAppearance)(reinterpret_cast<intptr_t>((___dataSetPtr0).get_m_value_0()), ____trackableName1_marshaled, static_cast<int32_t>(___enable2));

	// Marshaling cleanup of parameter '___trackableName1' native representation
	il2cpp_codegen_marshal_free(____trackableName1_marshaled);
	____trackableName1_marshaled = NULL;

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL wordGetLetterBoundingBoxes(int32_t, intptr_t);
// System.Int32 Vuforia.VuforiaNativeIosWrapper::wordGetLetterBoundingBoxes(System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_wordGetLetterBoundingBoxes_m3993191038 (RuntimeObject * __this /* static, unused */, int32_t ___wordID0, IntPtr_t ___letterBoundingBoxes1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, intptr_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(wordGetLetterBoundingBoxes)(___wordID0, reinterpret_cast<intptr_t>((___letterBoundingBoxes1).get_m_value_0()));

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL wordGetLetterMask(int32_t, intptr_t);
// System.Int32 Vuforia.VuforiaNativeIosWrapper::wordGetLetterMask(System.Int32,System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_wordGetLetterMask_m2712222170 (RuntimeObject * __this /* static, unused */, int32_t ___wordID0, IntPtr_t ___letterMaskImage1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, intptr_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(wordGetLetterMask)(___wordID0, reinterpret_cast<intptr_t>((___letterMaskImage1).get_m_value_0()));

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL wordListAddWordsFromFile(char*, int32_t);
// System.Int32 Vuforia.VuforiaNativeIosWrapper::wordListAddWordsFromFile(System.String,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_wordListAddWordsFromFile_m4142686626 (RuntimeObject * __this /* static, unused */, String_t* ___path0, int32_t ___storageType1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (char*, int32_t);

	// Marshaling of parameter '___path0' to native representation
	char* ____path0_marshaled = NULL;
	____path0_marshaled = il2cpp_codegen_marshal_string(___path0);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(wordListAddWordsFromFile)(____path0_marshaled, ___storageType1);

	// Marshaling cleanup of parameter '___path0' native representation
	il2cpp_codegen_marshal_free(____path0_marshaled);
	____path0_marshaled = NULL;

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL wordListAddWordToFilterListU(intptr_t);
// System.Int32 Vuforia.VuforiaNativeIosWrapper::wordListAddWordToFilterListU(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_wordListAddWordToFilterListU_m2127630879 (RuntimeObject * __this /* static, unused */, IntPtr_t ___word0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(wordListAddWordToFilterListU)(reinterpret_cast<intptr_t>((___word0).get_m_value_0()));

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL wordListAddWordU(intptr_t);
// System.Int32 Vuforia.VuforiaNativeIosWrapper::wordListAddWordU(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_wordListAddWordU_m430450375 (RuntimeObject * __this /* static, unused */, IntPtr_t ___word0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(wordListAddWordU)(reinterpret_cast<intptr_t>((___word0).get_m_value_0()));

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL wordListClearFilterList();
// System.Int32 Vuforia.VuforiaNativeIosWrapper::wordListClearFilterList()
extern "C"  int32_t VuforiaNativeIosWrapper_wordListClearFilterList_m880805531 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(wordListClearFilterList)();

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL wordListContainsWordU(intptr_t);
// System.Int32 Vuforia.VuforiaNativeIosWrapper::wordListContainsWordU(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_wordListContainsWordU_m3302894438 (RuntimeObject * __this /* static, unused */, IntPtr_t ___word0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(wordListContainsWordU)(reinterpret_cast<intptr_t>((___word0).get_m_value_0()));

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL wordListGetFilterListWordCount();
// System.Int32 Vuforia.VuforiaNativeIosWrapper::wordListGetFilterListWordCount()
extern "C"  int32_t VuforiaNativeIosWrapper_wordListGetFilterListWordCount_m1648409397 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(wordListGetFilterListWordCount)();

	return returnValue;
}
extern "C" intptr_t DEFAULT_CALL wordListGetFilterListWordU(int32_t);
// System.IntPtr Vuforia.VuforiaNativeIosWrapper::wordListGetFilterListWordU(System.Int32)
extern "C"  IntPtr_t VuforiaNativeIosWrapper_wordListGetFilterListWordU_m3199133604 (RuntimeObject * __this /* static, unused */, int32_t ___i0, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(wordListGetFilterListWordU)(___i0);

	// Marshaling of return value back from native representation
	IntPtr_t _returnValue_unmarshaled;
	_returnValue_unmarshaled.set_m_value_0(reinterpret_cast<void*>((intptr_t)(returnValue)));

	return _returnValue_unmarshaled;
}
extern "C" int32_t DEFAULT_CALL wordListGetFilterMode();
// System.Int32 Vuforia.VuforiaNativeIosWrapper::wordListGetFilterMode()
extern "C"  int32_t VuforiaNativeIosWrapper_wordListGetFilterMode_m2845743601 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(wordListGetFilterMode)();

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL wordListLoadFilterList(char*, int32_t);
// System.Int32 Vuforia.VuforiaNativeIosWrapper::wordListLoadFilterList(System.String,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_wordListLoadFilterList_m3268824786 (RuntimeObject * __this /* static, unused */, String_t* ___path0, int32_t ___storageType1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (char*, int32_t);

	// Marshaling of parameter '___path0' to native representation
	char* ____path0_marshaled = NULL;
	____path0_marshaled = il2cpp_codegen_marshal_string(___path0);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(wordListLoadFilterList)(____path0_marshaled, ___storageType1);

	// Marshaling cleanup of parameter '___path0' native representation
	il2cpp_codegen_marshal_free(____path0_marshaled);
	____path0_marshaled = NULL;

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL wordListLoadWordList(char*, int32_t);
// System.Int32 Vuforia.VuforiaNativeIosWrapper::wordListLoadWordList(System.String,System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_wordListLoadWordList_m1994671799 (RuntimeObject * __this /* static, unused */, String_t* ___path0, int32_t ___storageType1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (char*, int32_t);

	// Marshaling of parameter '___path0' to native representation
	char* ____path0_marshaled = NULL;
	____path0_marshaled = il2cpp_codegen_marshal_string(___path0);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(wordListLoadWordList)(____path0_marshaled, ___storageType1);

	// Marshaling cleanup of parameter '___path0' native representation
	il2cpp_codegen_marshal_free(____path0_marshaled);
	____path0_marshaled = NULL;

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL wordListRemoveWordFromFilterListU(intptr_t);
// System.Int32 Vuforia.VuforiaNativeIosWrapper::wordListRemoveWordFromFilterListU(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_wordListRemoveWordFromFilterListU_m2751967863 (RuntimeObject * __this /* static, unused */, IntPtr_t ___word0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(wordListRemoveWordFromFilterListU)(reinterpret_cast<intptr_t>((___word0).get_m_value_0()));

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL wordListRemoveWordU(intptr_t);
// System.Int32 Vuforia.VuforiaNativeIosWrapper::wordListRemoveWordU(System.IntPtr)
extern "C"  int32_t VuforiaNativeIosWrapper_wordListRemoveWordU_m1405418933 (RuntimeObject * __this /* static, unused */, IntPtr_t ___word0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(wordListRemoveWordU)(reinterpret_cast<intptr_t>((___word0).get_m_value_0()));

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL wordListSetFilterMode(int32_t);
// System.Int32 Vuforia.VuforiaNativeIosWrapper::wordListSetFilterMode(System.Int32)
extern "C"  int32_t VuforiaNativeIosWrapper_wordListSetFilterMode_m3944972900 (RuntimeObject * __this /* static, unused */, int32_t ___mode0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(wordListSetFilterMode)(___mode0);

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL wordListUnloadAllLists();
// System.Int32 Vuforia.VuforiaNativeIosWrapper::wordListUnloadAllLists()
extern "C"  int32_t VuforiaNativeIosWrapper_wordListUnloadAllLists_m2647922363 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(wordListUnloadAllLists)();

	return returnValue;
}
// System.Void Vuforia.VuforiaNativeIosWrapper::.ctor()
extern "C"  void VuforiaNativeIosWrapper__ctor_m1668444699 (VuforiaNativeIosWrapper_t1584108885 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m3992662532(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif

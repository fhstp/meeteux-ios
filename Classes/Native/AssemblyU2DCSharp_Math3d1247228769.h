#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t3275118058;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Math3d
struct  Math3d_t1247228769  : public MonoBehaviour_t1158329972
{
public:

public:
};

struct Math3d_t1247228769_StaticFields
{
public:
	// UnityEngine.Transform Math3d::tempChild
	Transform_t3275118058 * ___tempChild_2;
	// UnityEngine.Transform Math3d::tempParent
	Transform_t3275118058 * ___tempParent_3;

public:
	inline static int32_t get_offset_of_tempChild_2() { return static_cast<int32_t>(offsetof(Math3d_t1247228769_StaticFields, ___tempChild_2)); }
	inline Transform_t3275118058 * get_tempChild_2() const { return ___tempChild_2; }
	inline Transform_t3275118058 ** get_address_of_tempChild_2() { return &___tempChild_2; }
	inline void set_tempChild_2(Transform_t3275118058 * value)
	{
		___tempChild_2 = value;
		Il2CppCodeGenWriteBarrier(&___tempChild_2, value);
	}

	inline static int32_t get_offset_of_tempParent_3() { return static_cast<int32_t>(offsetof(Math3d_t1247228769_StaticFields, ___tempParent_3)); }
	inline Transform_t3275118058 * get_tempParent_3() const { return ___tempParent_3; }
	inline Transform_t3275118058 ** get_address_of_tempParent_3() { return &___tempParent_3; }
	inline void set_tempParent_3(Transform_t3275118058 * value)
	{
		___tempParent_3 = value;
		Il2CppCodeGenWriteBarrier(&___tempParent_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

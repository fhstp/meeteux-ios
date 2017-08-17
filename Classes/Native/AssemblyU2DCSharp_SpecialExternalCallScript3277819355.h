#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SpecialExternalCallScript
struct  SpecialExternalCallScript_t3277819355  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject SpecialExternalCallScript::SayingManager
	GameObject_t1756533147 * ___SayingManager_2;
	// UnityEngine.GameObject SpecialExternalCallScript::StateManager
	GameObject_t1756533147 * ___StateManager_3;
	// UnityEngine.GameObject SpecialExternalCallScript::ItemManager
	GameObject_t1756533147 * ___ItemManager_4;

public:
	inline static int32_t get_offset_of_SayingManager_2() { return static_cast<int32_t>(offsetof(SpecialExternalCallScript_t3277819355, ___SayingManager_2)); }
	inline GameObject_t1756533147 * get_SayingManager_2() const { return ___SayingManager_2; }
	inline GameObject_t1756533147 ** get_address_of_SayingManager_2() { return &___SayingManager_2; }
	inline void set_SayingManager_2(GameObject_t1756533147 * value)
	{
		___SayingManager_2 = value;
		Il2CppCodeGenWriteBarrier(&___SayingManager_2, value);
	}

	inline static int32_t get_offset_of_StateManager_3() { return static_cast<int32_t>(offsetof(SpecialExternalCallScript_t3277819355, ___StateManager_3)); }
	inline GameObject_t1756533147 * get_StateManager_3() const { return ___StateManager_3; }
	inline GameObject_t1756533147 ** get_address_of_StateManager_3() { return &___StateManager_3; }
	inline void set_StateManager_3(GameObject_t1756533147 * value)
	{
		___StateManager_3 = value;
		Il2CppCodeGenWriteBarrier(&___StateManager_3, value);
	}

	inline static int32_t get_offset_of_ItemManager_4() { return static_cast<int32_t>(offsetof(SpecialExternalCallScript_t3277819355, ___ItemManager_4)); }
	inline GameObject_t1756533147 * get_ItemManager_4() const { return ___ItemManager_4; }
	inline GameObject_t1756533147 ** get_address_of_ItemManager_4() { return &___ItemManager_4; }
	inline void set_ItemManager_4(GameObject_t1756533147 * value)
	{
		___ItemManager_4 = value;
		Il2CppCodeGenWriteBarrier(&___ItemManager_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

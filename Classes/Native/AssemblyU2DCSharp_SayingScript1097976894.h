#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String[]
struct StringU5BU5D_t1642385972;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// StateManagement
struct StateManagement_t3338349946;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SayingScript
struct  SayingScript_t1097976894  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 SayingScript::SayingId
	int32_t ___SayingId_2;
	// System.String[] SayingScript::DialogueStrings
	StringU5BU5D_t1642385972* ___DialogueStrings_3;
	// UnityEngine.GameObject SayingScript::SayingManager
	GameObject_t1756533147 * ___SayingManager_4;
	// StateManagement SayingScript::StateManager
	StateManagement_t3338349946 * ___StateManager_5;

public:
	inline static int32_t get_offset_of_SayingId_2() { return static_cast<int32_t>(offsetof(SayingScript_t1097976894, ___SayingId_2)); }
	inline int32_t get_SayingId_2() const { return ___SayingId_2; }
	inline int32_t* get_address_of_SayingId_2() { return &___SayingId_2; }
	inline void set_SayingId_2(int32_t value)
	{
		___SayingId_2 = value;
	}

	inline static int32_t get_offset_of_DialogueStrings_3() { return static_cast<int32_t>(offsetof(SayingScript_t1097976894, ___DialogueStrings_3)); }
	inline StringU5BU5D_t1642385972* get_DialogueStrings_3() const { return ___DialogueStrings_3; }
	inline StringU5BU5D_t1642385972** get_address_of_DialogueStrings_3() { return &___DialogueStrings_3; }
	inline void set_DialogueStrings_3(StringU5BU5D_t1642385972* value)
	{
		___DialogueStrings_3 = value;
		Il2CppCodeGenWriteBarrier(&___DialogueStrings_3, value);
	}

	inline static int32_t get_offset_of_SayingManager_4() { return static_cast<int32_t>(offsetof(SayingScript_t1097976894, ___SayingManager_4)); }
	inline GameObject_t1756533147 * get_SayingManager_4() const { return ___SayingManager_4; }
	inline GameObject_t1756533147 ** get_address_of_SayingManager_4() { return &___SayingManager_4; }
	inline void set_SayingManager_4(GameObject_t1756533147 * value)
	{
		___SayingManager_4 = value;
		Il2CppCodeGenWriteBarrier(&___SayingManager_4, value);
	}

	inline static int32_t get_offset_of_StateManager_5() { return static_cast<int32_t>(offsetof(SayingScript_t1097976894, ___StateManager_5)); }
	inline StateManagement_t3338349946 * get_StateManager_5() const { return ___StateManager_5; }
	inline StateManagement_t3338349946 ** get_address_of_StateManager_5() { return &___StateManager_5; }
	inline void set_StateManager_5(StateManagement_t3338349946 * value)
	{
		___StateManager_5 = value;
		Il2CppCodeGenWriteBarrier(&___StateManager_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

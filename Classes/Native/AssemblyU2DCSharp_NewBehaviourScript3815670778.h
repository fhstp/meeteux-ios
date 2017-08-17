#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1125654279;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NewBehaviourScript
struct  NewBehaviourScript_t3815670778  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 NewBehaviourScript::testVar
	int32_t ___testVar_2;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> NewBehaviourScript::li
	List_1_t1125654279 * ___li_3;
	// System.Boolean NewBehaviourScript::act
	bool ___act_4;

public:
	inline static int32_t get_offset_of_testVar_2() { return static_cast<int32_t>(offsetof(NewBehaviourScript_t3815670778, ___testVar_2)); }
	inline int32_t get_testVar_2() const { return ___testVar_2; }
	inline int32_t* get_address_of_testVar_2() { return &___testVar_2; }
	inline void set_testVar_2(int32_t value)
	{
		___testVar_2 = value;
	}

	inline static int32_t get_offset_of_li_3() { return static_cast<int32_t>(offsetof(NewBehaviourScript_t3815670778, ___li_3)); }
	inline List_1_t1125654279 * get_li_3() const { return ___li_3; }
	inline List_1_t1125654279 ** get_address_of_li_3() { return &___li_3; }
	inline void set_li_3(List_1_t1125654279 * value)
	{
		___li_3 = value;
		Il2CppCodeGenWriteBarrier(&___li_3, value);
	}

	inline static int32_t get_offset_of_act_4() { return static_cast<int32_t>(offsetof(NewBehaviourScript_t3815670778, ___act_4)); }
	inline bool get_act_4() const { return ___act_4; }
	inline bool* get_address_of_act_4() { return &___act_4; }
	inline void set_act_4(bool value)
	{
		___act_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// StateManagement
struct  StateManagement_t3338349946  : public MonoBehaviour_t1158329972
{
public:
	// System.String StateManagement::currentTriggerName
	String_t* ___currentTriggerName_2;
	// System.Boolean StateManagement::moneyToRoommateDone
	bool ___moneyToRoommateDone_3;
	// System.Boolean StateManagement::freeForNextSaying
	bool ___freeForNextSaying_4;

public:
	inline static int32_t get_offset_of_currentTriggerName_2() { return static_cast<int32_t>(offsetof(StateManagement_t3338349946, ___currentTriggerName_2)); }
	inline String_t* get_currentTriggerName_2() const { return ___currentTriggerName_2; }
	inline String_t** get_address_of_currentTriggerName_2() { return &___currentTriggerName_2; }
	inline void set_currentTriggerName_2(String_t* value)
	{
		___currentTriggerName_2 = value;
		Il2CppCodeGenWriteBarrier(&___currentTriggerName_2, value);
	}

	inline static int32_t get_offset_of_moneyToRoommateDone_3() { return static_cast<int32_t>(offsetof(StateManagement_t3338349946, ___moneyToRoommateDone_3)); }
	inline bool get_moneyToRoommateDone_3() const { return ___moneyToRoommateDone_3; }
	inline bool* get_address_of_moneyToRoommateDone_3() { return &___moneyToRoommateDone_3; }
	inline void set_moneyToRoommateDone_3(bool value)
	{
		___moneyToRoommateDone_3 = value;
	}

	inline static int32_t get_offset_of_freeForNextSaying_4() { return static_cast<int32_t>(offsetof(StateManagement_t3338349946, ___freeForNextSaying_4)); }
	inline bool get_freeForNextSaying_4() const { return ___freeForNextSaying_4; }
	inline bool* get_address_of_freeForNextSaying_4() { return &___freeForNextSaying_4; }
	inline void set_freeForNextSaying_4(bool value)
	{
		___freeForNextSaying_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

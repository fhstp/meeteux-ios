#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.Int32,System.String[]>>
struct Dictionary_2_t2564990869;
// AbstractPersonSayingManager
struct AbstractPersonSayingManager_t2791179751;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// StateManagement
struct StateManagement_t3338349946;
// System.String[]
struct StringU5BU5D_t1642385972;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SayingManagement
struct  SayingManagement_t3175795430  : public MonoBehaviour_t1158329972
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.Int32,System.String[]>> SayingManagement::SayingConfig
	Dictionary_2_t2564990869 * ___SayingConfig_2;
	// AbstractPersonSayingManager SayingManagement::CurrentPersonSayingManager
	AbstractPersonSayingManager_t2791179751 * ___CurrentPersonSayingManager_3;
	// UnityEngine.GameObject SayingManagement::DisplaySaying
	GameObject_t1756533147 * ___DisplaySaying_4;
	// UnityEngine.GameObject SayingManagement::SayingPanel
	GameObject_t1756533147 * ___SayingPanel_5;
	// StateManagement SayingManagement::StateManager
	StateManagement_t3338349946 * ___StateManager_6;
	// System.Boolean SayingManagement::talkingActive
	bool ___talkingActive_7;
	// System.Boolean SayingManagement::talkingJumpPossible
	bool ___talkingJumpPossible_8;
	// UnityEngine.GameObject SayingManagement::DisplayIcons
	GameObject_t1756533147 * ___DisplayIcons_9;
	// System.Int32 SayingManagement::TempSayingId
	int32_t ___TempSayingId_10;
	// System.String[] SayingManagement::TempSayingDialogueStrings
	StringU5BU5D_t1642385972* ___TempSayingDialogueStrings_11;
	// System.Boolean SayingManagement::TempBlocked
	bool ___TempBlocked_12;
	// UnityEngine.GameObject[] SayingManagement::Sayings
	GameObjectU5BU5D_t3057952154* ___Sayings_13;
	// System.Int32 SayingManagement::DialogPartsDone
	int32_t ___DialogPartsDone_14;

public:
	inline static int32_t get_offset_of_SayingConfig_2() { return static_cast<int32_t>(offsetof(SayingManagement_t3175795430, ___SayingConfig_2)); }
	inline Dictionary_2_t2564990869 * get_SayingConfig_2() const { return ___SayingConfig_2; }
	inline Dictionary_2_t2564990869 ** get_address_of_SayingConfig_2() { return &___SayingConfig_2; }
	inline void set_SayingConfig_2(Dictionary_2_t2564990869 * value)
	{
		___SayingConfig_2 = value;
		Il2CppCodeGenWriteBarrier(&___SayingConfig_2, value);
	}

	inline static int32_t get_offset_of_CurrentPersonSayingManager_3() { return static_cast<int32_t>(offsetof(SayingManagement_t3175795430, ___CurrentPersonSayingManager_3)); }
	inline AbstractPersonSayingManager_t2791179751 * get_CurrentPersonSayingManager_3() const { return ___CurrentPersonSayingManager_3; }
	inline AbstractPersonSayingManager_t2791179751 ** get_address_of_CurrentPersonSayingManager_3() { return &___CurrentPersonSayingManager_3; }
	inline void set_CurrentPersonSayingManager_3(AbstractPersonSayingManager_t2791179751 * value)
	{
		___CurrentPersonSayingManager_3 = value;
		Il2CppCodeGenWriteBarrier(&___CurrentPersonSayingManager_3, value);
	}

	inline static int32_t get_offset_of_DisplaySaying_4() { return static_cast<int32_t>(offsetof(SayingManagement_t3175795430, ___DisplaySaying_4)); }
	inline GameObject_t1756533147 * get_DisplaySaying_4() const { return ___DisplaySaying_4; }
	inline GameObject_t1756533147 ** get_address_of_DisplaySaying_4() { return &___DisplaySaying_4; }
	inline void set_DisplaySaying_4(GameObject_t1756533147 * value)
	{
		___DisplaySaying_4 = value;
		Il2CppCodeGenWriteBarrier(&___DisplaySaying_4, value);
	}

	inline static int32_t get_offset_of_SayingPanel_5() { return static_cast<int32_t>(offsetof(SayingManagement_t3175795430, ___SayingPanel_5)); }
	inline GameObject_t1756533147 * get_SayingPanel_5() const { return ___SayingPanel_5; }
	inline GameObject_t1756533147 ** get_address_of_SayingPanel_5() { return &___SayingPanel_5; }
	inline void set_SayingPanel_5(GameObject_t1756533147 * value)
	{
		___SayingPanel_5 = value;
		Il2CppCodeGenWriteBarrier(&___SayingPanel_5, value);
	}

	inline static int32_t get_offset_of_StateManager_6() { return static_cast<int32_t>(offsetof(SayingManagement_t3175795430, ___StateManager_6)); }
	inline StateManagement_t3338349946 * get_StateManager_6() const { return ___StateManager_6; }
	inline StateManagement_t3338349946 ** get_address_of_StateManager_6() { return &___StateManager_6; }
	inline void set_StateManager_6(StateManagement_t3338349946 * value)
	{
		___StateManager_6 = value;
		Il2CppCodeGenWriteBarrier(&___StateManager_6, value);
	}

	inline static int32_t get_offset_of_talkingActive_7() { return static_cast<int32_t>(offsetof(SayingManagement_t3175795430, ___talkingActive_7)); }
	inline bool get_talkingActive_7() const { return ___talkingActive_7; }
	inline bool* get_address_of_talkingActive_7() { return &___talkingActive_7; }
	inline void set_talkingActive_7(bool value)
	{
		___talkingActive_7 = value;
	}

	inline static int32_t get_offset_of_talkingJumpPossible_8() { return static_cast<int32_t>(offsetof(SayingManagement_t3175795430, ___talkingJumpPossible_8)); }
	inline bool get_talkingJumpPossible_8() const { return ___talkingJumpPossible_8; }
	inline bool* get_address_of_talkingJumpPossible_8() { return &___talkingJumpPossible_8; }
	inline void set_talkingJumpPossible_8(bool value)
	{
		___talkingJumpPossible_8 = value;
	}

	inline static int32_t get_offset_of_DisplayIcons_9() { return static_cast<int32_t>(offsetof(SayingManagement_t3175795430, ___DisplayIcons_9)); }
	inline GameObject_t1756533147 * get_DisplayIcons_9() const { return ___DisplayIcons_9; }
	inline GameObject_t1756533147 ** get_address_of_DisplayIcons_9() { return &___DisplayIcons_9; }
	inline void set_DisplayIcons_9(GameObject_t1756533147 * value)
	{
		___DisplayIcons_9 = value;
		Il2CppCodeGenWriteBarrier(&___DisplayIcons_9, value);
	}

	inline static int32_t get_offset_of_TempSayingId_10() { return static_cast<int32_t>(offsetof(SayingManagement_t3175795430, ___TempSayingId_10)); }
	inline int32_t get_TempSayingId_10() const { return ___TempSayingId_10; }
	inline int32_t* get_address_of_TempSayingId_10() { return &___TempSayingId_10; }
	inline void set_TempSayingId_10(int32_t value)
	{
		___TempSayingId_10 = value;
	}

	inline static int32_t get_offset_of_TempSayingDialogueStrings_11() { return static_cast<int32_t>(offsetof(SayingManagement_t3175795430, ___TempSayingDialogueStrings_11)); }
	inline StringU5BU5D_t1642385972* get_TempSayingDialogueStrings_11() const { return ___TempSayingDialogueStrings_11; }
	inline StringU5BU5D_t1642385972** get_address_of_TempSayingDialogueStrings_11() { return &___TempSayingDialogueStrings_11; }
	inline void set_TempSayingDialogueStrings_11(StringU5BU5D_t1642385972* value)
	{
		___TempSayingDialogueStrings_11 = value;
		Il2CppCodeGenWriteBarrier(&___TempSayingDialogueStrings_11, value);
	}

	inline static int32_t get_offset_of_TempBlocked_12() { return static_cast<int32_t>(offsetof(SayingManagement_t3175795430, ___TempBlocked_12)); }
	inline bool get_TempBlocked_12() const { return ___TempBlocked_12; }
	inline bool* get_address_of_TempBlocked_12() { return &___TempBlocked_12; }
	inline void set_TempBlocked_12(bool value)
	{
		___TempBlocked_12 = value;
	}

	inline static int32_t get_offset_of_Sayings_13() { return static_cast<int32_t>(offsetof(SayingManagement_t3175795430, ___Sayings_13)); }
	inline GameObjectU5BU5D_t3057952154* get_Sayings_13() const { return ___Sayings_13; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_Sayings_13() { return &___Sayings_13; }
	inline void set_Sayings_13(GameObjectU5BU5D_t3057952154* value)
	{
		___Sayings_13 = value;
		Il2CppCodeGenWriteBarrier(&___Sayings_13, value);
	}

	inline static int32_t get_offset_of_DialogPartsDone_14() { return static_cast<int32_t>(offsetof(SayingManagement_t3175795430, ___DialogPartsDone_14)); }
	inline int32_t get_DialogPartsDone_14() const { return ___DialogPartsDone_14; }
	inline int32_t* get_address_of_DialogPartsDone_14() { return &___DialogPartsDone_14; }
	inline void set_DialogPartsDone_14(int32_t value)
	{
		___DialogPartsDone_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

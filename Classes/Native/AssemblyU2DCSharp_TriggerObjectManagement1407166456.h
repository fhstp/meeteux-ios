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

// TriggerObjectManagement
struct  TriggerObjectManagement_t1407166456  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject TriggerObjectManagement::SayingManager
	GameObject_t1756533147 * ___SayingManager_2;
	// UnityEngine.GameObject TriggerObjectManagement::ItemManager
	GameObject_t1756533147 * ___ItemManager_3;
	// UnityEngine.GameObject TriggerObjectManagement::StateManager
	GameObject_t1756533147 * ___StateManager_4;
	// UnityEngine.GameObject TriggerObjectManagement::DisplayIcons
	GameObject_t1756533147 * ___DisplayIcons_5;
	// UnityEngine.GameObject TriggerObjectManagement::DisplaySayings
	GameObject_t1756533147 * ___DisplaySayings_6;
	// UnityEngine.GameObject TriggerObjectManagement::SayingPanel
	GameObject_t1756533147 * ___SayingPanel_7;
	// System.Boolean TriggerObjectManagement::SomethingTriggered
	bool ___SomethingTriggered_8;

public:
	inline static int32_t get_offset_of_SayingManager_2() { return static_cast<int32_t>(offsetof(TriggerObjectManagement_t1407166456, ___SayingManager_2)); }
	inline GameObject_t1756533147 * get_SayingManager_2() const { return ___SayingManager_2; }
	inline GameObject_t1756533147 ** get_address_of_SayingManager_2() { return &___SayingManager_2; }
	inline void set_SayingManager_2(GameObject_t1756533147 * value)
	{
		___SayingManager_2 = value;
		Il2CppCodeGenWriteBarrier(&___SayingManager_2, value);
	}

	inline static int32_t get_offset_of_ItemManager_3() { return static_cast<int32_t>(offsetof(TriggerObjectManagement_t1407166456, ___ItemManager_3)); }
	inline GameObject_t1756533147 * get_ItemManager_3() const { return ___ItemManager_3; }
	inline GameObject_t1756533147 ** get_address_of_ItemManager_3() { return &___ItemManager_3; }
	inline void set_ItemManager_3(GameObject_t1756533147 * value)
	{
		___ItemManager_3 = value;
		Il2CppCodeGenWriteBarrier(&___ItemManager_3, value);
	}

	inline static int32_t get_offset_of_StateManager_4() { return static_cast<int32_t>(offsetof(TriggerObjectManagement_t1407166456, ___StateManager_4)); }
	inline GameObject_t1756533147 * get_StateManager_4() const { return ___StateManager_4; }
	inline GameObject_t1756533147 ** get_address_of_StateManager_4() { return &___StateManager_4; }
	inline void set_StateManager_4(GameObject_t1756533147 * value)
	{
		___StateManager_4 = value;
		Il2CppCodeGenWriteBarrier(&___StateManager_4, value);
	}

	inline static int32_t get_offset_of_DisplayIcons_5() { return static_cast<int32_t>(offsetof(TriggerObjectManagement_t1407166456, ___DisplayIcons_5)); }
	inline GameObject_t1756533147 * get_DisplayIcons_5() const { return ___DisplayIcons_5; }
	inline GameObject_t1756533147 ** get_address_of_DisplayIcons_5() { return &___DisplayIcons_5; }
	inline void set_DisplayIcons_5(GameObject_t1756533147 * value)
	{
		___DisplayIcons_5 = value;
		Il2CppCodeGenWriteBarrier(&___DisplayIcons_5, value);
	}

	inline static int32_t get_offset_of_DisplaySayings_6() { return static_cast<int32_t>(offsetof(TriggerObjectManagement_t1407166456, ___DisplaySayings_6)); }
	inline GameObject_t1756533147 * get_DisplaySayings_6() const { return ___DisplaySayings_6; }
	inline GameObject_t1756533147 ** get_address_of_DisplaySayings_6() { return &___DisplaySayings_6; }
	inline void set_DisplaySayings_6(GameObject_t1756533147 * value)
	{
		___DisplaySayings_6 = value;
		Il2CppCodeGenWriteBarrier(&___DisplaySayings_6, value);
	}

	inline static int32_t get_offset_of_SayingPanel_7() { return static_cast<int32_t>(offsetof(TriggerObjectManagement_t1407166456, ___SayingPanel_7)); }
	inline GameObject_t1756533147 * get_SayingPanel_7() const { return ___SayingPanel_7; }
	inline GameObject_t1756533147 ** get_address_of_SayingPanel_7() { return &___SayingPanel_7; }
	inline void set_SayingPanel_7(GameObject_t1756533147 * value)
	{
		___SayingPanel_7 = value;
		Il2CppCodeGenWriteBarrier(&___SayingPanel_7, value);
	}

	inline static int32_t get_offset_of_SomethingTriggered_8() { return static_cast<int32_t>(offsetof(TriggerObjectManagement_t1407166456, ___SomethingTriggered_8)); }
	inline bool get_SomethingTriggered_8() const { return ___SomethingTriggered_8; }
	inline bool* get_address_of_SomethingTriggered_8() { return &___SomethingTriggered_8; }
	inline void set_SomethingTriggered_8(bool value)
	{
		___SomethingTriggered_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

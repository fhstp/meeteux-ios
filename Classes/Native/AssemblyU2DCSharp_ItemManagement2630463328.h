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
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ItemManagement
struct  ItemManagement_t2630463328  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject ItemManagement::CurrentItem
	GameObject_t1756533147 * ___CurrentItem_2;
	// UnityEngine.GameObject ItemManagement::DisplaySaying
	GameObject_t1756533147 * ___DisplaySaying_3;
	// UnityEngine.GameObject ItemManagement::DisplayIcons
	GameObject_t1756533147 * ___DisplayIcons_4;
	// System.Boolean ItemManagement::TempBlocked
	bool ___TempBlocked_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> ItemManagement::ItemViewSayings
	Dictionary_2_t3943999495 * ___ItemViewSayings_6;

public:
	inline static int32_t get_offset_of_CurrentItem_2() { return static_cast<int32_t>(offsetof(ItemManagement_t2630463328, ___CurrentItem_2)); }
	inline GameObject_t1756533147 * get_CurrentItem_2() const { return ___CurrentItem_2; }
	inline GameObject_t1756533147 ** get_address_of_CurrentItem_2() { return &___CurrentItem_2; }
	inline void set_CurrentItem_2(GameObject_t1756533147 * value)
	{
		___CurrentItem_2 = value;
		Il2CppCodeGenWriteBarrier(&___CurrentItem_2, value);
	}

	inline static int32_t get_offset_of_DisplaySaying_3() { return static_cast<int32_t>(offsetof(ItemManagement_t2630463328, ___DisplaySaying_3)); }
	inline GameObject_t1756533147 * get_DisplaySaying_3() const { return ___DisplaySaying_3; }
	inline GameObject_t1756533147 ** get_address_of_DisplaySaying_3() { return &___DisplaySaying_3; }
	inline void set_DisplaySaying_3(GameObject_t1756533147 * value)
	{
		___DisplaySaying_3 = value;
		Il2CppCodeGenWriteBarrier(&___DisplaySaying_3, value);
	}

	inline static int32_t get_offset_of_DisplayIcons_4() { return static_cast<int32_t>(offsetof(ItemManagement_t2630463328, ___DisplayIcons_4)); }
	inline GameObject_t1756533147 * get_DisplayIcons_4() const { return ___DisplayIcons_4; }
	inline GameObject_t1756533147 ** get_address_of_DisplayIcons_4() { return &___DisplayIcons_4; }
	inline void set_DisplayIcons_4(GameObject_t1756533147 * value)
	{
		___DisplayIcons_4 = value;
		Il2CppCodeGenWriteBarrier(&___DisplayIcons_4, value);
	}

	inline static int32_t get_offset_of_TempBlocked_5() { return static_cast<int32_t>(offsetof(ItemManagement_t2630463328, ___TempBlocked_5)); }
	inline bool get_TempBlocked_5() const { return ___TempBlocked_5; }
	inline bool* get_address_of_TempBlocked_5() { return &___TempBlocked_5; }
	inline void set_TempBlocked_5(bool value)
	{
		___TempBlocked_5 = value;
	}

	inline static int32_t get_offset_of_ItemViewSayings_6() { return static_cast<int32_t>(offsetof(ItemManagement_t2630463328, ___ItemViewSayings_6)); }
	inline Dictionary_2_t3943999495 * get_ItemViewSayings_6() const { return ___ItemViewSayings_6; }
	inline Dictionary_2_t3943999495 ** get_address_of_ItemViewSayings_6() { return &___ItemViewSayings_6; }
	inline void set_ItemViewSayings_6(Dictionary_2_t3943999495 * value)
	{
		___ItemViewSayings_6 = value;
		Il2CppCodeGenWriteBarrier(&___ItemViewSayings_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

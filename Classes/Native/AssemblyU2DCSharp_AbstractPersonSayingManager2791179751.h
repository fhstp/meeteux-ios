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
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// SayingManagement
struct SayingManagement_t3175795430;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t1079703083;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AbstractPersonSayingManager
struct  AbstractPersonSayingManager_t2791179751  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject AbstractPersonSayingManager::PersonModel
	GameObject_t1756533147 * ___PersonModel_2;
	// UnityEngine.GameObject[] AbstractPersonSayingManager::PersonCurrentSayings
	GameObjectU5BU5D_t3057952154* ___PersonCurrentSayings_3;
	// SayingManagement AbstractPersonSayingManager::SayingManagementComponent
	SayingManagement_t3175795430 * ___SayingManagementComponent_4;
	// System.String AbstractPersonSayingManager::PersonName
	String_t* ___PersonName_5;
	// System.Boolean AbstractPersonSayingManager::HasBeenInitialized
	bool ___HasBeenInitialized_6;
	// System.Int32 AbstractPersonSayingManager::LatestSaying
	int32_t ___LatestSaying_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> AbstractPersonSayingManager::SayingsDoneChecklist
	Dictionary_2_t1079703083 * ___SayingsDoneChecklist_8;

public:
	inline static int32_t get_offset_of_PersonModel_2() { return static_cast<int32_t>(offsetof(AbstractPersonSayingManager_t2791179751, ___PersonModel_2)); }
	inline GameObject_t1756533147 * get_PersonModel_2() const { return ___PersonModel_2; }
	inline GameObject_t1756533147 ** get_address_of_PersonModel_2() { return &___PersonModel_2; }
	inline void set_PersonModel_2(GameObject_t1756533147 * value)
	{
		___PersonModel_2 = value;
		Il2CppCodeGenWriteBarrier(&___PersonModel_2, value);
	}

	inline static int32_t get_offset_of_PersonCurrentSayings_3() { return static_cast<int32_t>(offsetof(AbstractPersonSayingManager_t2791179751, ___PersonCurrentSayings_3)); }
	inline GameObjectU5BU5D_t3057952154* get_PersonCurrentSayings_3() const { return ___PersonCurrentSayings_3; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_PersonCurrentSayings_3() { return &___PersonCurrentSayings_3; }
	inline void set_PersonCurrentSayings_3(GameObjectU5BU5D_t3057952154* value)
	{
		___PersonCurrentSayings_3 = value;
		Il2CppCodeGenWriteBarrier(&___PersonCurrentSayings_3, value);
	}

	inline static int32_t get_offset_of_SayingManagementComponent_4() { return static_cast<int32_t>(offsetof(AbstractPersonSayingManager_t2791179751, ___SayingManagementComponent_4)); }
	inline SayingManagement_t3175795430 * get_SayingManagementComponent_4() const { return ___SayingManagementComponent_4; }
	inline SayingManagement_t3175795430 ** get_address_of_SayingManagementComponent_4() { return &___SayingManagementComponent_4; }
	inline void set_SayingManagementComponent_4(SayingManagement_t3175795430 * value)
	{
		___SayingManagementComponent_4 = value;
		Il2CppCodeGenWriteBarrier(&___SayingManagementComponent_4, value);
	}

	inline static int32_t get_offset_of_PersonName_5() { return static_cast<int32_t>(offsetof(AbstractPersonSayingManager_t2791179751, ___PersonName_5)); }
	inline String_t* get_PersonName_5() const { return ___PersonName_5; }
	inline String_t** get_address_of_PersonName_5() { return &___PersonName_5; }
	inline void set_PersonName_5(String_t* value)
	{
		___PersonName_5 = value;
		Il2CppCodeGenWriteBarrier(&___PersonName_5, value);
	}

	inline static int32_t get_offset_of_HasBeenInitialized_6() { return static_cast<int32_t>(offsetof(AbstractPersonSayingManager_t2791179751, ___HasBeenInitialized_6)); }
	inline bool get_HasBeenInitialized_6() const { return ___HasBeenInitialized_6; }
	inline bool* get_address_of_HasBeenInitialized_6() { return &___HasBeenInitialized_6; }
	inline void set_HasBeenInitialized_6(bool value)
	{
		___HasBeenInitialized_6 = value;
	}

	inline static int32_t get_offset_of_LatestSaying_7() { return static_cast<int32_t>(offsetof(AbstractPersonSayingManager_t2791179751, ___LatestSaying_7)); }
	inline int32_t get_LatestSaying_7() const { return ___LatestSaying_7; }
	inline int32_t* get_address_of_LatestSaying_7() { return &___LatestSaying_7; }
	inline void set_LatestSaying_7(int32_t value)
	{
		___LatestSaying_7 = value;
	}

	inline static int32_t get_offset_of_SayingsDoneChecklist_8() { return static_cast<int32_t>(offsetof(AbstractPersonSayingManager_t2791179751, ___SayingsDoneChecklist_8)); }
	inline Dictionary_2_t1079703083 * get_SayingsDoneChecklist_8() const { return ___SayingsDoneChecklist_8; }
	inline Dictionary_2_t1079703083 ** get_address_of_SayingsDoneChecklist_8() { return &___SayingsDoneChecklist_8; }
	inline void set_SayingsDoneChecklist_8(Dictionary_2_t1079703083 * value)
	{
		___SayingsDoneChecklist_8 = value;
		Il2CppCodeGenWriteBarrier(&___SayingsDoneChecklist_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

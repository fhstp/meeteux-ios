#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// AbstractPersonSayingManager
struct AbstractPersonSayingManager_t2791179751;
// SayingManagement
struct SayingManagement_t3175795430;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Collections.Generic.Dictionary`2<System.Int32,System.String>
struct Dictionary_2_t1037045868;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_SayingManagement3175795430.h"
#include "mscorlib_System_String2029220233.h"

// System.Void AbstractPersonSayingManager::.ctor()
extern "C"  void AbstractPersonSayingManager__ctor_m2129246288 (AbstractPersonSayingManager_t2791179751 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AbstractPersonSayingManager::UpdateCurrentSayingsForNext(System.Int32)
extern "C"  bool AbstractPersonSayingManager_UpdateCurrentSayingsForNext_m2047307547 (AbstractPersonSayingManager_t2791179751 * __this, int32_t ___SayingId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AbstractPersonSayingManager::GetHasBeenInitialized()
extern "C"  bool AbstractPersonSayingManager_GetHasBeenInitialized_m2872545362 (AbstractPersonSayingManager_t2791179751 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AbstractPersonSayingManager::SetHasBeenInitialized()
extern "C"  void AbstractPersonSayingManager_SetHasBeenInitialized_m2824774420 (AbstractPersonSayingManager_t2791179751 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AbstractPersonSayingManager::Initialize(SayingManagement)
extern "C"  void AbstractPersonSayingManager_Initialize_m2820443182 (AbstractPersonSayingManager_t2791179751 * __this, SayingManagement_t3175795430 * ___SMC0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AbstractPersonSayingManager::SetPersonName(System.String)
extern "C"  void AbstractPersonSayingManager_SetPersonName_m3998583020 (AbstractPersonSayingManager_t2791179751 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AbstractPersonSayingManager::SetSayingManagement(SayingManagement)
extern "C"  void AbstractPersonSayingManager_SetSayingManagement_m2999155272 (AbstractPersonSayingManager_t2791179751 * __this, SayingManagement_t3175795430 * ___SMC0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AbstractPersonSayingManager::SayingObjectChosen(System.Int32)
extern "C"  void AbstractPersonSayingManager_SayingObjectChosen_m392509701 (AbstractPersonSayingManager_t2791179751 * __this, int32_t ___SayingId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AbstractPersonSayingManager::DestroyOldSayings()
extern "C"  void AbstractPersonSayingManager_DestroyOldSayings_m1023830579 (AbstractPersonSayingManager_t2791179751 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject AbstractPersonSayingManager::CreateSayingObject(System.Int32,System.Int32,System.Collections.Generic.Dictionary`2<System.Int32,System.String>)
extern "C"  GameObject_t1756533147 * AbstractPersonSayingManager_CreateSayingObject_m2626818971 (AbstractPersonSayingManager_t2791179751 * __this, int32_t ___Position0, int32_t ___SayingId1, Dictionary_2_t1037045868 * ___DynamicSayings2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String AbstractPersonSayingManager::ExecuteSayingDynamic(System.String,System.Int32,System.String,System.Boolean)
extern "C"  String_t* AbstractPersonSayingManager_ExecuteSayingDynamic_m3400019494 (AbstractPersonSayingManager_t2791179751 * __this, String_t* ___saying0, int32_t ___index1, String_t* ___dynamicString2, bool ___removeLeftSayingDynamics3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject[] AbstractPersonSayingManager::GetCurrentSayings()
extern "C"  GameObjectU5BU5D_t3057952154* AbstractPersonSayingManager_GetCurrentSayings_m1794593264 (AbstractPersonSayingManager_t2791179751 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AbstractPersonSayingManager::Start()
extern "C"  void AbstractPersonSayingManager_Start_m1741475052 (AbstractPersonSayingManager_t2791179751 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AbstractPersonSayingManager::Update()
extern "C"  void AbstractPersonSayingManager_Update_m2745152947 (AbstractPersonSayingManager_t2791179751 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

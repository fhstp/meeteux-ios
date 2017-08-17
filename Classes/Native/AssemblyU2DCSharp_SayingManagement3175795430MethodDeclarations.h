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

// SayingManagement
struct SayingManagement_t3175795430;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.String
struct String_t;
// AbstractPersonSayingManager
struct AbstractPersonSayingManager_t2791179751;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "AssemblyU2DCSharp_AbstractPersonSayingManager2791179751.h"

// System.Void SayingManagement::.ctor()
extern "C"  void SayingManagement__ctor_m4277167799 (SayingManagement_t3175795430 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SayingManagement::StartSayingManagement(UnityEngine.GameObject)
extern "C"  void SayingManagement_StartSayingManagement_m3303328295 (SayingManagement_t3175795430 * __this, GameObject_t1756533147 * ___TalkingPerson0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SayingManagement::SomethingSaid(System.String[],System.Int32)
extern "C"  void SayingManagement_SomethingSaid_m3226185377 (SayingManagement_t3175795430 * __this, StringU5BU5D_t1642385972* ___DialogueStrings0, int32_t ___SayingId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SayingManagement::DoNextDialoguePart()
extern "C"  void SayingManagement_DoNextDialoguePart_m760761506 (SayingManagement_t3175795430 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SayingManagement::CancelInvokesAndResetEverything()
extern "C"  void SayingManagement_CancelInvokesAndResetEverything_m4203285821 (SayingManagement_t3175795430 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SayingManagement::GoToNextDialoguePart()
extern "C"  void SayingManagement_GoToNextDialoguePart_m3467394928 (SayingManagement_t3175795430 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SayingManagement::MakeJumpPossible()
extern "C"  void SayingManagement_MakeJumpPossible_m1731233868 (SayingManagement_t3175795430 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SayingManagement::FreeForNextSaying()
extern "C"  void SayingManagement_FreeForNextSaying_m1126474136 (SayingManagement_t3175795430 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SayingManagement::SayingDone()
extern "C"  void SayingManagement_SayingDone_m117255460 (SayingManagement_t3175795430 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SayingManagement::GetShortText(System.Int32,AbstractPersonSayingManager)
extern "C"  String_t* SayingManagement_GetShortText_m2242465107 (SayingManagement_t3175795430 * __this, int32_t ___SayingId0, AbstractPersonSayingManager_t2791179751 * ___SayingManager1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] SayingManagement::GetLongText(System.Int32,AbstractPersonSayingManager)
extern "C"  StringU5BU5D_t1642385972* SayingManagement_GetLongText_m1587119609 (SayingManagement_t3175795430 * __this, int32_t ___SayingId0, AbstractPersonSayingManager_t2791179751 * ___SayingManager1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SayingManagement::Start()
extern "C"  void SayingManagement_Start_m2113490099 (SayingManagement_t3175795430 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SayingManagement::Update()
extern "C"  void SayingManagement_Update_m733130832 (SayingManagement_t3175795430 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

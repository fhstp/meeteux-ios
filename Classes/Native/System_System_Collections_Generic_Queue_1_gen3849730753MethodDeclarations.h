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

// System.Collections.Generic.Queue`1<UnityEngine.Quaternion>
struct Queue_1_t3849730753;
// System.Array
struct Il2CppArray;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Quaternion>
struct IEnumerator_1_t1505597745;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// UnityEngine.Quaternion[]
struct QuaternionU5BU5D_t1854387467;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"
#include "System_System_Collections_Generic_Queue_1_Enumerator64826537.h"

// System.Void System.Collections.Generic.Queue`1<UnityEngine.Quaternion>::.ctor()
extern "C"  void Queue_1__ctor_m4103294650_gshared (Queue_1_t3849730753 * __this, const MethodInfo* method);
#define Queue_1__ctor_m4103294650(__this, method) ((  void (*) (Queue_1_t3849730753 *, const MethodInfo*))Queue_1__ctor_m4103294650_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<UnityEngine.Quaternion>::.ctor(System.Int32)
extern "C"  void Queue_1__ctor_m1890882290_gshared (Queue_1_t3849730753 * __this, int32_t ___count0, const MethodInfo* method);
#define Queue_1__ctor_m1890882290(__this, ___count0, method) ((  void (*) (Queue_1_t3849730753 *, int32_t, const MethodInfo*))Queue_1__ctor_m1890882290_gshared)(__this, ___count0, method)
// System.Void System.Collections.Generic.Queue`1<UnityEngine.Quaternion>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void Queue_1_System_Collections_ICollection_CopyTo_m4001616362_gshared (Queue_1_t3849730753 * __this, Il2CppArray * ___array0, int32_t ___idx1, const MethodInfo* method);
#define Queue_1_System_Collections_ICollection_CopyTo_m4001616362(__this, ___array0, ___idx1, method) ((  void (*) (Queue_1_t3849730753 *, Il2CppArray *, int32_t, const MethodInfo*))Queue_1_System_Collections_ICollection_CopyTo_m4001616362_gshared)(__this, ___array0, ___idx1, method)
// System.Boolean System.Collections.Generic.Queue`1<UnityEngine.Quaternion>::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool Queue_1_System_Collections_ICollection_get_IsSynchronized_m763768694_gshared (Queue_1_t3849730753 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_ICollection_get_IsSynchronized_m763768694(__this, method) ((  bool (*) (Queue_1_t3849730753 *, const MethodInfo*))Queue_1_System_Collections_ICollection_get_IsSynchronized_m763768694_gshared)(__this, method)
// System.Object System.Collections.Generic.Queue`1<UnityEngine.Quaternion>::System.Collections.ICollection.get_SyncRoot()
extern "C"  Il2CppObject * Queue_1_System_Collections_ICollection_get_SyncRoot_m1695689194_gshared (Queue_1_t3849730753 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_ICollection_get_SyncRoot_m1695689194(__this, method) ((  Il2CppObject * (*) (Queue_1_t3849730753 *, const MethodInfo*))Queue_1_System_Collections_ICollection_get_SyncRoot_m1695689194_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Queue`1<UnityEngine.Quaternion>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C"  Il2CppObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m3114813492_gshared (Queue_1_t3849730753 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m3114813492(__this, method) ((  Il2CppObject* (*) (Queue_1_t3849730753 *, const MethodInfo*))Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m3114813492_gshared)(__this, method)
// System.Collections.IEnumerator System.Collections.Generic.Queue`1<UnityEngine.Quaternion>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * Queue_1_System_Collections_IEnumerable_GetEnumerator_m3976920377_gshared (Queue_1_t3849730753 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_IEnumerable_GetEnumerator_m3976920377(__this, method) ((  Il2CppObject * (*) (Queue_1_t3849730753 *, const MethodInfo*))Queue_1_System_Collections_IEnumerable_GetEnumerator_m3976920377_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<UnityEngine.Quaternion>::CopyTo(T[],System.Int32)
extern "C"  void Queue_1_CopyTo_m2919026409_gshared (Queue_1_t3849730753 * __this, QuaternionU5BU5D_t1854387467* ___array0, int32_t ___idx1, const MethodInfo* method);
#define Queue_1_CopyTo_m2919026409(__this, ___array0, ___idx1, method) ((  void (*) (Queue_1_t3849730753 *, QuaternionU5BU5D_t1854387467*, int32_t, const MethodInfo*))Queue_1_CopyTo_m2919026409_gshared)(__this, ___array0, ___idx1, method)
// T System.Collections.Generic.Queue`1<UnityEngine.Quaternion>::Dequeue()
extern "C"  Quaternion_t4030073918  Queue_1_Dequeue_m1335826491_gshared (Queue_1_t3849730753 * __this, const MethodInfo* method);
#define Queue_1_Dequeue_m1335826491(__this, method) ((  Quaternion_t4030073918  (*) (Queue_1_t3849730753 *, const MethodInfo*))Queue_1_Dequeue_m1335826491_gshared)(__this, method)
// T System.Collections.Generic.Queue`1<UnityEngine.Quaternion>::Peek()
extern "C"  Quaternion_t4030073918  Queue_1_Peek_m221477408_gshared (Queue_1_t3849730753 * __this, const MethodInfo* method);
#define Queue_1_Peek_m221477408(__this, method) ((  Quaternion_t4030073918  (*) (Queue_1_t3849730753 *, const MethodInfo*))Queue_1_Peek_m221477408_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<UnityEngine.Quaternion>::Enqueue(T)
extern "C"  void Queue_1_Enqueue_m2354928458_gshared (Queue_1_t3849730753 * __this, Quaternion_t4030073918  ___item0, const MethodInfo* method);
#define Queue_1_Enqueue_m2354928458(__this, ___item0, method) ((  void (*) (Queue_1_t3849730753 *, Quaternion_t4030073918 , const MethodInfo*))Queue_1_Enqueue_m2354928458_gshared)(__this, ___item0, method)
// System.Void System.Collections.Generic.Queue`1<UnityEngine.Quaternion>::SetCapacity(System.Int32)
extern "C"  void Queue_1_SetCapacity_m1723665051_gshared (Queue_1_t3849730753 * __this, int32_t ___new_size0, const MethodInfo* method);
#define Queue_1_SetCapacity_m1723665051(__this, ___new_size0, method) ((  void (*) (Queue_1_t3849730753 *, int32_t, const MethodInfo*))Queue_1_SetCapacity_m1723665051_gshared)(__this, ___new_size0, method)
// System.Int32 System.Collections.Generic.Queue`1<UnityEngine.Quaternion>::get_Count()
extern "C"  int32_t Queue_1_get_Count_m1624796893_gshared (Queue_1_t3849730753 * __this, const MethodInfo* method);
#define Queue_1_get_Count_m1624796893(__this, method) ((  int32_t (*) (Queue_1_t3849730753 *, const MethodInfo*))Queue_1_get_Count_m1624796893_gshared)(__this, method)
// System.Collections.Generic.Queue`1/Enumerator<T> System.Collections.Generic.Queue`1<UnityEngine.Quaternion>::GetEnumerator()
extern "C"  Enumerator_t64826537  Queue_1_GetEnumerator_m508473619_gshared (Queue_1_t3849730753 * __this, const MethodInfo* method);
#define Queue_1_GetEnumerator_m508473619(__this, method) ((  Enumerator_t64826537  (*) (Queue_1_t3849730753 *, const MethodInfo*))Queue_1_GetEnumerator_m508473619_gshared)(__this, method)

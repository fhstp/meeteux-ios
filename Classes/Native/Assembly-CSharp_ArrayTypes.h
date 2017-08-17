#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// AbstractPersonSayingManager
struct AbstractPersonSayingManager_t2791179751;
// Vuforia.WireframeBehaviour
struct WireframeBehaviour_t2494532455;

#include "mscorlib_System_Array3829468939.h"
#include "AssemblyU2DCSharp_AbstractPersonSayingManager2791179751.h"
#include "AssemblyU2DCSharp_Vuforia_WireframeBehaviour2494532455.h"

#pragma once
// AbstractPersonSayingManager[]
struct AbstractPersonSayingManagerU5BU5D_t3653319326  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) AbstractPersonSayingManager_t2791179751 * m_Items[1];

public:
	inline AbstractPersonSayingManager_t2791179751 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AbstractPersonSayingManager_t2791179751 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AbstractPersonSayingManager_t2791179751 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline AbstractPersonSayingManager_t2791179751 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AbstractPersonSayingManager_t2791179751 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AbstractPersonSayingManager_t2791179751 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Vuforia.WireframeBehaviour[]
struct WireframeBehaviourU5BU5D_t2935582494  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) WireframeBehaviour_t2494532455 * m_Items[1];

public:
	inline WireframeBehaviour_t2494532455 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline WireframeBehaviour_t2494532455 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, WireframeBehaviour_t2494532455 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline WireframeBehaviour_t2494532455 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline WireframeBehaviour_t2494532455 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, WireframeBehaviour_t2494532455 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t1632706988;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// VirtualButtonEventHandler
struct VirtualButtonEventHandler_t1548763206;
// UnityEngine.CanvasGroup
struct CanvasGroup_t4083511760;
// UDTEventHandler
struct UDTEventHandler_t2349357857;
// UnityEngine.Sprite
struct Sprite_t280657092;
// VuMarkHandler
struct VuMarkHandler_t1415762101;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Void
struct Void_t1185182177;
// Vuforia.TrackableBehaviour
struct TrackableBehaviour_t1113559212;
// UnityEngine.GUIStyle
struct GUIStyle_t3956901511;
// UnityEngine.Texture2D
struct Texture2D_t3840446185;
// Vuforia.ImageTargetBehaviour
struct ImageTargetBehaviour_t2200418350;
// Vuforia.UserDefinedTargetBuildingBehaviour
struct UserDefinedTargetBuildingBehaviour_t4262637471;
// QualityDialog
struct QualityDialog_t529473262;
// Vuforia.ObjectTracker
struct ObjectTracker_t4177997237;
// TrackableSettings
struct TrackableSettings_t2862243993;
// FrameQualityMeter
struct FrameQualityMeter_t3206426345;
// Vuforia.DataSet
struct DataSet_t3286034874;
// UnityEngine.Material
struct Material_t340375123;
// Vuforia.VirtualButtonBehaviour[]
struct VirtualButtonBehaviourU5BU5D_t2153394082;
// OptionsConfig/Option[]
struct OptionU5BU5D_t153379540;
// UnityEngine.UI.RawImage
struct RawImage_t3182918964;
// UnityEngine.Canvas
struct Canvas_t3310196443;
// UnityEngine.UI.Text
struct Text_t1901882714;
// SamplesAboutScreenInfo
struct SamplesAboutScreenInfo_t802360490;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t2736202052;
// PanelShowHide
struct PanelShowHide_t3128188850;
// Vuforia.VuMarkManager
struct VuMarkManager_t2982459596;
// Vuforia.VuMarkTarget
struct VuMarkTarget_t1129573803;
// MenuAnimator
struct MenuAnimator_t2112910832;
// OptionsConfig
struct OptionsConfig_t900326454;
// UnityEngine.Animator
struct Animator_t434523843;
// UnityEngine.UI.Image
struct Image_t2670269651;




#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef SAMPLESABOUTSCREENINFO_T802360490_H
#define SAMPLESABOUTSCREENINFO_T802360490_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SamplesAboutScreenInfo
struct  SamplesAboutScreenInfo_t802360490  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.String> SamplesAboutScreenInfo::titles
	Dictionary_2_t1632706988 * ___titles_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> SamplesAboutScreenInfo::descriptions
	Dictionary_2_t1632706988 * ___descriptions_1;

public:
	inline static int32_t get_offset_of_titles_0() { return static_cast<int32_t>(offsetof(SamplesAboutScreenInfo_t802360490, ___titles_0)); }
	inline Dictionary_2_t1632706988 * get_titles_0() const { return ___titles_0; }
	inline Dictionary_2_t1632706988 ** get_address_of_titles_0() { return &___titles_0; }
	inline void set_titles_0(Dictionary_2_t1632706988 * value)
	{
		___titles_0 = value;
		Il2CppCodeGenWriteBarrier((&___titles_0), value);
	}

	inline static int32_t get_offset_of_descriptions_1() { return static_cast<int32_t>(offsetof(SamplesAboutScreenInfo_t802360490, ___descriptions_1)); }
	inline Dictionary_2_t1632706988 * get_descriptions_1() const { return ___descriptions_1; }
	inline Dictionary_2_t1632706988 ** get_address_of_descriptions_1() { return &___descriptions_1; }
	inline void set_descriptions_1(Dictionary_2_t1632706988 * value)
	{
		___descriptions_1 = value;
		Il2CppCodeGenWriteBarrier((&___descriptions_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SAMPLESABOUTSCREENINFO_T802360490_H
#ifndef OPTION_T3694458217_H
#define OPTION_T3694458217_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OptionsConfig/Option
struct  Option_t3694458217  : public RuntimeObject
{
public:
	// System.String OptionsConfig/Option::name
	String_t* ___name_0;
	// System.Boolean OptionsConfig/Option::enabled
	bool ___enabled_1;
	// UnityEngine.GameObject OptionsConfig/Option::m_Object
	GameObject_t1113636619 * ___m_Object_2;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(Option_t3694458217, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_enabled_1() { return static_cast<int32_t>(offsetof(Option_t3694458217, ___enabled_1)); }
	inline bool get_enabled_1() const { return ___enabled_1; }
	inline bool* get_address_of_enabled_1() { return &___enabled_1; }
	inline void set_enabled_1(bool value)
	{
		___enabled_1 = value;
	}

	inline static int32_t get_offset_of_m_Object_2() { return static_cast<int32_t>(offsetof(Option_t3694458217, ___m_Object_2)); }
	inline GameObject_t1113636619 * get_m_Object_2() const { return ___m_Object_2; }
	inline GameObject_t1113636619 ** get_address_of_m_Object_2() { return &___m_Object_2; }
	inline void set_m_Object_2(GameObject_t1113636619 * value)
	{
		___m_Object_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Object_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OPTION_T3694458217_H
#ifndef U3CDELAYONBUTTONRELEASEDEVENTU3EC__ITERATOR0_T2119283297_H
#define U3CDELAYONBUTTONRELEASEDEVENTU3EC__ITERATOR0_T2119283297_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VirtualButtonEventHandler/<DelayOnButtonReleasedEvent>c__Iterator0
struct  U3CDelayOnButtonReleasedEventU3Ec__Iterator0_t2119283297  : public RuntimeObject
{
public:
	// System.Single VirtualButtonEventHandler/<DelayOnButtonReleasedEvent>c__Iterator0::waitTime
	float ___waitTime_0;
	// VirtualButtonEventHandler VirtualButtonEventHandler/<DelayOnButtonReleasedEvent>c__Iterator0::$this
	VirtualButtonEventHandler_t1548763206 * ___U24this_1;
	// System.Object VirtualButtonEventHandler/<DelayOnButtonReleasedEvent>c__Iterator0::$current
	RuntimeObject * ___U24current_2;
	// System.Boolean VirtualButtonEventHandler/<DelayOnButtonReleasedEvent>c__Iterator0::$disposing
	bool ___U24disposing_3;
	// System.Int32 VirtualButtonEventHandler/<DelayOnButtonReleasedEvent>c__Iterator0::$PC
	int32_t ___U24PC_4;

public:
	inline static int32_t get_offset_of_waitTime_0() { return static_cast<int32_t>(offsetof(U3CDelayOnButtonReleasedEventU3Ec__Iterator0_t2119283297, ___waitTime_0)); }
	inline float get_waitTime_0() const { return ___waitTime_0; }
	inline float* get_address_of_waitTime_0() { return &___waitTime_0; }
	inline void set_waitTime_0(float value)
	{
		___waitTime_0 = value;
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CDelayOnButtonReleasedEventU3Ec__Iterator0_t2119283297, ___U24this_1)); }
	inline VirtualButtonEventHandler_t1548763206 * get_U24this_1() const { return ___U24this_1; }
	inline VirtualButtonEventHandler_t1548763206 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(VirtualButtonEventHandler_t1548763206 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_1), value);
	}

	inline static int32_t get_offset_of_U24current_2() { return static_cast<int32_t>(offsetof(U3CDelayOnButtonReleasedEventU3Ec__Iterator0_t2119283297, ___U24current_2)); }
	inline RuntimeObject * get_U24current_2() const { return ___U24current_2; }
	inline RuntimeObject ** get_address_of_U24current_2() { return &___U24current_2; }
	inline void set_U24current_2(RuntimeObject * value)
	{
		___U24current_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_2), value);
	}

	inline static int32_t get_offset_of_U24disposing_3() { return static_cast<int32_t>(offsetof(U3CDelayOnButtonReleasedEventU3Ec__Iterator0_t2119283297, ___U24disposing_3)); }
	inline bool get_U24disposing_3() const { return ___U24disposing_3; }
	inline bool* get_address_of_U24disposing_3() { return &___U24disposing_3; }
	inline void set_U24disposing_3(bool value)
	{
		___U24disposing_3 = value;
	}

	inline static int32_t get_offset_of_U24PC_4() { return static_cast<int32_t>(offsetof(U3CDelayOnButtonReleasedEventU3Ec__Iterator0_t2119283297, ___U24PC_4)); }
	inline int32_t get_U24PC_4() const { return ___U24PC_4; }
	inline int32_t* get_address_of_U24PC_4() { return &___U24PC_4; }
	inline void set_U24PC_4(int32_t value)
	{
		___U24PC_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CDELAYONBUTTONRELEASEDEVENTU3EC__ITERATOR0_T2119283297_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef U3CFADEOUTQUALITYDIALOGU3EC__ITERATOR0_T2977426494_H
#define U3CFADEOUTQUALITYDIALOGU3EC__ITERATOR0_T2977426494_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UDTEventHandler/<FadeOutQualityDialog>c__Iterator0
struct  U3CFadeOutQualityDialogU3Ec__Iterator0_t2977426494  : public RuntimeObject
{
public:
	// UnityEngine.CanvasGroup UDTEventHandler/<FadeOutQualityDialog>c__Iterator0::<canvasGroup>__0
	CanvasGroup_t4083511760 * ___U3CcanvasGroupU3E__0_0;
	// System.Single UDTEventHandler/<FadeOutQualityDialog>c__Iterator0::<f>__1
	float ___U3CfU3E__1_1;
	// UDTEventHandler UDTEventHandler/<FadeOutQualityDialog>c__Iterator0::$this
	UDTEventHandler_t2349357857 * ___U24this_2;
	// System.Object UDTEventHandler/<FadeOutQualityDialog>c__Iterator0::$current
	RuntimeObject * ___U24current_3;
	// System.Boolean UDTEventHandler/<FadeOutQualityDialog>c__Iterator0::$disposing
	bool ___U24disposing_4;
	// System.Int32 UDTEventHandler/<FadeOutQualityDialog>c__Iterator0::$PC
	int32_t ___U24PC_5;

public:
	inline static int32_t get_offset_of_U3CcanvasGroupU3E__0_0() { return static_cast<int32_t>(offsetof(U3CFadeOutQualityDialogU3Ec__Iterator0_t2977426494, ___U3CcanvasGroupU3E__0_0)); }
	inline CanvasGroup_t4083511760 * get_U3CcanvasGroupU3E__0_0() const { return ___U3CcanvasGroupU3E__0_0; }
	inline CanvasGroup_t4083511760 ** get_address_of_U3CcanvasGroupU3E__0_0() { return &___U3CcanvasGroupU3E__0_0; }
	inline void set_U3CcanvasGroupU3E__0_0(CanvasGroup_t4083511760 * value)
	{
		___U3CcanvasGroupU3E__0_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CcanvasGroupU3E__0_0), value);
	}

	inline static int32_t get_offset_of_U3CfU3E__1_1() { return static_cast<int32_t>(offsetof(U3CFadeOutQualityDialogU3Ec__Iterator0_t2977426494, ___U3CfU3E__1_1)); }
	inline float get_U3CfU3E__1_1() const { return ___U3CfU3E__1_1; }
	inline float* get_address_of_U3CfU3E__1_1() { return &___U3CfU3E__1_1; }
	inline void set_U3CfU3E__1_1(float value)
	{
		___U3CfU3E__1_1 = value;
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CFadeOutQualityDialogU3Ec__Iterator0_t2977426494, ___U24this_2)); }
	inline UDTEventHandler_t2349357857 * get_U24this_2() const { return ___U24this_2; }
	inline UDTEventHandler_t2349357857 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(UDTEventHandler_t2349357857 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_2), value);
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CFadeOutQualityDialogU3Ec__Iterator0_t2977426494, ___U24current_3)); }
	inline RuntimeObject * get_U24current_3() const { return ___U24current_3; }
	inline RuntimeObject ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(RuntimeObject * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_3), value);
	}

	inline static int32_t get_offset_of_U24disposing_4() { return static_cast<int32_t>(offsetof(U3CFadeOutQualityDialogU3Ec__Iterator0_t2977426494, ___U24disposing_4)); }
	inline bool get_U24disposing_4() const { return ___U24disposing_4; }
	inline bool* get_address_of_U24disposing_4() { return &___U24disposing_4; }
	inline void set_U24disposing_4(bool value)
	{
		___U24disposing_4 = value;
	}

	inline static int32_t get_offset_of_U24PC_5() { return static_cast<int32_t>(offsetof(U3CFadeOutQualityDialogU3Ec__Iterator0_t2977426494, ___U24PC_5)); }
	inline int32_t get_U24PC_5() const { return ___U24PC_5; }
	inline int32_t* get_address_of_U24PC_5() { return &___U24PC_5; }
	inline void set_U24PC_5(int32_t value)
	{
		___U24PC_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CFADEOUTQUALITYDIALOGU3EC__ITERATOR0_T2977426494_H
#ifndef U3CSHOWPANELAFTERU3EC__ITERATOR0_T1638888630_H
#define U3CSHOWPANELAFTERU3EC__ITERATOR0_T1638888630_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VuMarkHandler/<ShowPanelAfter>c__Iterator0
struct  U3CShowPanelAfterU3Ec__Iterator0_t1638888630  : public RuntimeObject
{
public:
	// System.Single VuMarkHandler/<ShowPanelAfter>c__Iterator0::seconds
	float ___seconds_0;
	// System.String VuMarkHandler/<ShowPanelAfter>c__Iterator0::vuMarkId
	String_t* ___vuMarkId_1;
	// System.String VuMarkHandler/<ShowPanelAfter>c__Iterator0::vuMarkDataType
	String_t* ___vuMarkDataType_2;
	// System.String VuMarkHandler/<ShowPanelAfter>c__Iterator0::vuMarkDesc
	String_t* ___vuMarkDesc_3;
	// UnityEngine.Sprite VuMarkHandler/<ShowPanelAfter>c__Iterator0::vuMarkImage
	Sprite_t280657092 * ___vuMarkImage_4;
	// VuMarkHandler VuMarkHandler/<ShowPanelAfter>c__Iterator0::$this
	VuMarkHandler_t1415762101 * ___U24this_5;
	// System.Object VuMarkHandler/<ShowPanelAfter>c__Iterator0::$current
	RuntimeObject * ___U24current_6;
	// System.Boolean VuMarkHandler/<ShowPanelAfter>c__Iterator0::$disposing
	bool ___U24disposing_7;
	// System.Int32 VuMarkHandler/<ShowPanelAfter>c__Iterator0::$PC
	int32_t ___U24PC_8;

public:
	inline static int32_t get_offset_of_seconds_0() { return static_cast<int32_t>(offsetof(U3CShowPanelAfterU3Ec__Iterator0_t1638888630, ___seconds_0)); }
	inline float get_seconds_0() const { return ___seconds_0; }
	inline float* get_address_of_seconds_0() { return &___seconds_0; }
	inline void set_seconds_0(float value)
	{
		___seconds_0 = value;
	}

	inline static int32_t get_offset_of_vuMarkId_1() { return static_cast<int32_t>(offsetof(U3CShowPanelAfterU3Ec__Iterator0_t1638888630, ___vuMarkId_1)); }
	inline String_t* get_vuMarkId_1() const { return ___vuMarkId_1; }
	inline String_t** get_address_of_vuMarkId_1() { return &___vuMarkId_1; }
	inline void set_vuMarkId_1(String_t* value)
	{
		___vuMarkId_1 = value;
		Il2CppCodeGenWriteBarrier((&___vuMarkId_1), value);
	}

	inline static int32_t get_offset_of_vuMarkDataType_2() { return static_cast<int32_t>(offsetof(U3CShowPanelAfterU3Ec__Iterator0_t1638888630, ___vuMarkDataType_2)); }
	inline String_t* get_vuMarkDataType_2() const { return ___vuMarkDataType_2; }
	inline String_t** get_address_of_vuMarkDataType_2() { return &___vuMarkDataType_2; }
	inline void set_vuMarkDataType_2(String_t* value)
	{
		___vuMarkDataType_2 = value;
		Il2CppCodeGenWriteBarrier((&___vuMarkDataType_2), value);
	}

	inline static int32_t get_offset_of_vuMarkDesc_3() { return static_cast<int32_t>(offsetof(U3CShowPanelAfterU3Ec__Iterator0_t1638888630, ___vuMarkDesc_3)); }
	inline String_t* get_vuMarkDesc_3() const { return ___vuMarkDesc_3; }
	inline String_t** get_address_of_vuMarkDesc_3() { return &___vuMarkDesc_3; }
	inline void set_vuMarkDesc_3(String_t* value)
	{
		___vuMarkDesc_3 = value;
		Il2CppCodeGenWriteBarrier((&___vuMarkDesc_3), value);
	}

	inline static int32_t get_offset_of_vuMarkImage_4() { return static_cast<int32_t>(offsetof(U3CShowPanelAfterU3Ec__Iterator0_t1638888630, ___vuMarkImage_4)); }
	inline Sprite_t280657092 * get_vuMarkImage_4() const { return ___vuMarkImage_4; }
	inline Sprite_t280657092 ** get_address_of_vuMarkImage_4() { return &___vuMarkImage_4; }
	inline void set_vuMarkImage_4(Sprite_t280657092 * value)
	{
		___vuMarkImage_4 = value;
		Il2CppCodeGenWriteBarrier((&___vuMarkImage_4), value);
	}

	inline static int32_t get_offset_of_U24this_5() { return static_cast<int32_t>(offsetof(U3CShowPanelAfterU3Ec__Iterator0_t1638888630, ___U24this_5)); }
	inline VuMarkHandler_t1415762101 * get_U24this_5() const { return ___U24this_5; }
	inline VuMarkHandler_t1415762101 ** get_address_of_U24this_5() { return &___U24this_5; }
	inline void set_U24this_5(VuMarkHandler_t1415762101 * value)
	{
		___U24this_5 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_5), value);
	}

	inline static int32_t get_offset_of_U24current_6() { return static_cast<int32_t>(offsetof(U3CShowPanelAfterU3Ec__Iterator0_t1638888630, ___U24current_6)); }
	inline RuntimeObject * get_U24current_6() const { return ___U24current_6; }
	inline RuntimeObject ** get_address_of_U24current_6() { return &___U24current_6; }
	inline void set_U24current_6(RuntimeObject * value)
	{
		___U24current_6 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_6), value);
	}

	inline static int32_t get_offset_of_U24disposing_7() { return static_cast<int32_t>(offsetof(U3CShowPanelAfterU3Ec__Iterator0_t1638888630, ___U24disposing_7)); }
	inline bool get_U24disposing_7() const { return ___U24disposing_7; }
	inline bool* get_address_of_U24disposing_7() { return &___U24disposing_7; }
	inline void set_U24disposing_7(bool value)
	{
		___U24disposing_7 = value;
	}

	inline static int32_t get_offset_of_U24PC_8() { return static_cast<int32_t>(offsetof(U3CShowPanelAfterU3Ec__Iterator0_t1638888630, ___U24PC_8)); }
	inline int32_t get_U24PC_8() const { return ___U24PC_8; }
	inline int32_t* get_address_of_U24PC_8() { return &___U24PC_8; }
	inline void set_U24PC_8(int32_t value)
	{
		___U24PC_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSHOWPANELAFTERU3EC__ITERATOR0_T1638888630_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef FRAMEQUALITY_T46289180_H
#define FRAMEQUALITY_T46289180_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.ImageTargetBuilder/FrameQuality
struct  FrameQuality_t46289180 
{
public:
	// System.Int32 Vuforia.ImageTargetBuilder/FrameQuality::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FrameQuality_t46289180, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FRAMEQUALITY_T46289180_H
#ifndef MENUITEM_T4061609034_H
#define MENUITEM_T4061609034_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SamplesMainMenu/MenuItem
struct  MenuItem_t4061609034 
{
public:
	// System.Int32 SamplesMainMenu/MenuItem::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MenuItem_t4061609034, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MENUITEM_T4061609034_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef TRACKABLESETTINGS_T2862243993_H
#define TRACKABLESETTINGS_T2862243993_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TrackableSettings
struct  TrackableSettings_t2862243993  : public MonoBehaviour_t3962482529
{
public:
	// System.Boolean TrackableSettings::mExtTrackingEnabled
	bool ___mExtTrackingEnabled_2;

public:
	inline static int32_t get_offset_of_mExtTrackingEnabled_2() { return static_cast<int32_t>(offsetof(TrackableSettings_t2862243993, ___mExtTrackingEnabled_2)); }
	inline bool get_mExtTrackingEnabled_2() const { return ___mExtTrackingEnabled_2; }
	inline bool* get_address_of_mExtTrackingEnabled_2() { return &___mExtTrackingEnabled_2; }
	inline void set_mExtTrackingEnabled_2(bool value)
	{
		___mExtTrackingEnabled_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKABLESETTINGS_T2862243993_H
#ifndef DEFAULTTRACKABLEEVENTHANDLER_T1588957063_H
#define DEFAULTTRACKABLEEVENTHANDLER_T1588957063_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DefaultTrackableEventHandler
struct  DefaultTrackableEventHandler_t1588957063  : public MonoBehaviour_t3962482529
{
public:
	// Vuforia.TrackableBehaviour DefaultTrackableEventHandler::mTrackableBehaviour
	TrackableBehaviour_t1113559212 * ___mTrackableBehaviour_2;

public:
	inline static int32_t get_offset_of_mTrackableBehaviour_2() { return static_cast<int32_t>(offsetof(DefaultTrackableEventHandler_t1588957063, ___mTrackableBehaviour_2)); }
	inline TrackableBehaviour_t1113559212 * get_mTrackableBehaviour_2() const { return ___mTrackableBehaviour_2; }
	inline TrackableBehaviour_t1113559212 ** get_address_of_mTrackableBehaviour_2() { return &___mTrackableBehaviour_2; }
	inline void set_mTrackableBehaviour_2(TrackableBehaviour_t1113559212 * value)
	{
		___mTrackableBehaviour_2 = value;
		Il2CppCodeGenWriteBarrier((&___mTrackableBehaviour_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTTRACKABLEEVENTHANDLER_T1588957063_H
#ifndef DEFAULTINITIALIZATIONERRORHANDLER_T3109936861_H
#define DEFAULTINITIALIZATIONERRORHANDLER_T3109936861_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DefaultInitializationErrorHandler
struct  DefaultInitializationErrorHandler_t3109936861  : public MonoBehaviour_t3962482529
{
public:
	// System.String DefaultInitializationErrorHandler::mErrorText
	String_t* ___mErrorText_2;
	// System.Boolean DefaultInitializationErrorHandler::mErrorOccurred
	bool ___mErrorOccurred_3;
	// UnityEngine.GUIStyle DefaultInitializationErrorHandler::bodyStyle
	GUIStyle_t3956901511 * ___bodyStyle_5;
	// UnityEngine.GUIStyle DefaultInitializationErrorHandler::headerStyle
	GUIStyle_t3956901511 * ___headerStyle_6;
	// UnityEngine.GUIStyle DefaultInitializationErrorHandler::footerStyle
	GUIStyle_t3956901511 * ___footerStyle_7;
	// UnityEngine.Texture2D DefaultInitializationErrorHandler::bodyTexture
	Texture2D_t3840446185 * ___bodyTexture_8;
	// UnityEngine.Texture2D DefaultInitializationErrorHandler::headerTexture
	Texture2D_t3840446185 * ___headerTexture_9;
	// UnityEngine.Texture2D DefaultInitializationErrorHandler::footerTexture
	Texture2D_t3840446185 * ___footerTexture_10;

public:
	inline static int32_t get_offset_of_mErrorText_2() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t3109936861, ___mErrorText_2)); }
	inline String_t* get_mErrorText_2() const { return ___mErrorText_2; }
	inline String_t** get_address_of_mErrorText_2() { return &___mErrorText_2; }
	inline void set_mErrorText_2(String_t* value)
	{
		___mErrorText_2 = value;
		Il2CppCodeGenWriteBarrier((&___mErrorText_2), value);
	}

	inline static int32_t get_offset_of_mErrorOccurred_3() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t3109936861, ___mErrorOccurred_3)); }
	inline bool get_mErrorOccurred_3() const { return ___mErrorOccurred_3; }
	inline bool* get_address_of_mErrorOccurred_3() { return &___mErrorOccurred_3; }
	inline void set_mErrorOccurred_3(bool value)
	{
		___mErrorOccurred_3 = value;
	}

	inline static int32_t get_offset_of_bodyStyle_5() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t3109936861, ___bodyStyle_5)); }
	inline GUIStyle_t3956901511 * get_bodyStyle_5() const { return ___bodyStyle_5; }
	inline GUIStyle_t3956901511 ** get_address_of_bodyStyle_5() { return &___bodyStyle_5; }
	inline void set_bodyStyle_5(GUIStyle_t3956901511 * value)
	{
		___bodyStyle_5 = value;
		Il2CppCodeGenWriteBarrier((&___bodyStyle_5), value);
	}

	inline static int32_t get_offset_of_headerStyle_6() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t3109936861, ___headerStyle_6)); }
	inline GUIStyle_t3956901511 * get_headerStyle_6() const { return ___headerStyle_6; }
	inline GUIStyle_t3956901511 ** get_address_of_headerStyle_6() { return &___headerStyle_6; }
	inline void set_headerStyle_6(GUIStyle_t3956901511 * value)
	{
		___headerStyle_6 = value;
		Il2CppCodeGenWriteBarrier((&___headerStyle_6), value);
	}

	inline static int32_t get_offset_of_footerStyle_7() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t3109936861, ___footerStyle_7)); }
	inline GUIStyle_t3956901511 * get_footerStyle_7() const { return ___footerStyle_7; }
	inline GUIStyle_t3956901511 ** get_address_of_footerStyle_7() { return &___footerStyle_7; }
	inline void set_footerStyle_7(GUIStyle_t3956901511 * value)
	{
		___footerStyle_7 = value;
		Il2CppCodeGenWriteBarrier((&___footerStyle_7), value);
	}

	inline static int32_t get_offset_of_bodyTexture_8() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t3109936861, ___bodyTexture_8)); }
	inline Texture2D_t3840446185 * get_bodyTexture_8() const { return ___bodyTexture_8; }
	inline Texture2D_t3840446185 ** get_address_of_bodyTexture_8() { return &___bodyTexture_8; }
	inline void set_bodyTexture_8(Texture2D_t3840446185 * value)
	{
		___bodyTexture_8 = value;
		Il2CppCodeGenWriteBarrier((&___bodyTexture_8), value);
	}

	inline static int32_t get_offset_of_headerTexture_9() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t3109936861, ___headerTexture_9)); }
	inline Texture2D_t3840446185 * get_headerTexture_9() const { return ___headerTexture_9; }
	inline Texture2D_t3840446185 ** get_address_of_headerTexture_9() { return &___headerTexture_9; }
	inline void set_headerTexture_9(Texture2D_t3840446185 * value)
	{
		___headerTexture_9 = value;
		Il2CppCodeGenWriteBarrier((&___headerTexture_9), value);
	}

	inline static int32_t get_offset_of_footerTexture_10() { return static_cast<int32_t>(offsetof(DefaultInitializationErrorHandler_t3109936861, ___footerTexture_10)); }
	inline Texture2D_t3840446185 * get_footerTexture_10() const { return ___footerTexture_10; }
	inline Texture2D_t3840446185 ** get_address_of_footerTexture_10() { return &___footerTexture_10; }
	inline void set_footerTexture_10(Texture2D_t3840446185 * value)
	{
		___footerTexture_10 = value;
		Il2CppCodeGenWriteBarrier((&___footerTexture_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTINITIALIZATIONERRORHANDLER_T3109936861_H
#ifndef UDTEVENTHANDLER_T2349357857_H
#define UDTEVENTHANDLER_T2349357857_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UDTEventHandler
struct  UDTEventHandler_t2349357857  : public MonoBehaviour_t3962482529
{
public:
	// Vuforia.ImageTargetBehaviour UDTEventHandler::ImageTargetTemplate
	ImageTargetBehaviour_t2200418350 * ___ImageTargetTemplate_2;
	// Vuforia.UserDefinedTargetBuildingBehaviour UDTEventHandler::m_TargetBuildingBehaviour
	UserDefinedTargetBuildingBehaviour_t4262637471 * ___m_TargetBuildingBehaviour_4;
	// QualityDialog UDTEventHandler::m_QualityDialog
	QualityDialog_t529473262 * ___m_QualityDialog_5;
	// Vuforia.ObjectTracker UDTEventHandler::m_ObjectTracker
	ObjectTracker_t4177997237 * ___m_ObjectTracker_6;
	// TrackableSettings UDTEventHandler::m_TrackableSettings
	TrackableSettings_t2862243993 * ___m_TrackableSettings_7;
	// FrameQualityMeter UDTEventHandler::m_FrameQualityMeter
	FrameQualityMeter_t3206426345 * ___m_FrameQualityMeter_8;
	// Vuforia.DataSet UDTEventHandler::m_UDT_DataSet
	DataSet_t3286034874 * ___m_UDT_DataSet_9;
	// Vuforia.ImageTargetBuilder/FrameQuality UDTEventHandler::m_FrameQuality
	int32_t ___m_FrameQuality_10;
	// System.Int32 UDTEventHandler::m_TargetCounter
	int32_t ___m_TargetCounter_11;

public:
	inline static int32_t get_offset_of_ImageTargetTemplate_2() { return static_cast<int32_t>(offsetof(UDTEventHandler_t2349357857, ___ImageTargetTemplate_2)); }
	inline ImageTargetBehaviour_t2200418350 * get_ImageTargetTemplate_2() const { return ___ImageTargetTemplate_2; }
	inline ImageTargetBehaviour_t2200418350 ** get_address_of_ImageTargetTemplate_2() { return &___ImageTargetTemplate_2; }
	inline void set_ImageTargetTemplate_2(ImageTargetBehaviour_t2200418350 * value)
	{
		___ImageTargetTemplate_2 = value;
		Il2CppCodeGenWriteBarrier((&___ImageTargetTemplate_2), value);
	}

	inline static int32_t get_offset_of_m_TargetBuildingBehaviour_4() { return static_cast<int32_t>(offsetof(UDTEventHandler_t2349357857, ___m_TargetBuildingBehaviour_4)); }
	inline UserDefinedTargetBuildingBehaviour_t4262637471 * get_m_TargetBuildingBehaviour_4() const { return ___m_TargetBuildingBehaviour_4; }
	inline UserDefinedTargetBuildingBehaviour_t4262637471 ** get_address_of_m_TargetBuildingBehaviour_4() { return &___m_TargetBuildingBehaviour_4; }
	inline void set_m_TargetBuildingBehaviour_4(UserDefinedTargetBuildingBehaviour_t4262637471 * value)
	{
		___m_TargetBuildingBehaviour_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_TargetBuildingBehaviour_4), value);
	}

	inline static int32_t get_offset_of_m_QualityDialog_5() { return static_cast<int32_t>(offsetof(UDTEventHandler_t2349357857, ___m_QualityDialog_5)); }
	inline QualityDialog_t529473262 * get_m_QualityDialog_5() const { return ___m_QualityDialog_5; }
	inline QualityDialog_t529473262 ** get_address_of_m_QualityDialog_5() { return &___m_QualityDialog_5; }
	inline void set_m_QualityDialog_5(QualityDialog_t529473262 * value)
	{
		___m_QualityDialog_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_QualityDialog_5), value);
	}

	inline static int32_t get_offset_of_m_ObjectTracker_6() { return static_cast<int32_t>(offsetof(UDTEventHandler_t2349357857, ___m_ObjectTracker_6)); }
	inline ObjectTracker_t4177997237 * get_m_ObjectTracker_6() const { return ___m_ObjectTracker_6; }
	inline ObjectTracker_t4177997237 ** get_address_of_m_ObjectTracker_6() { return &___m_ObjectTracker_6; }
	inline void set_m_ObjectTracker_6(ObjectTracker_t4177997237 * value)
	{
		___m_ObjectTracker_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_ObjectTracker_6), value);
	}

	inline static int32_t get_offset_of_m_TrackableSettings_7() { return static_cast<int32_t>(offsetof(UDTEventHandler_t2349357857, ___m_TrackableSettings_7)); }
	inline TrackableSettings_t2862243993 * get_m_TrackableSettings_7() const { return ___m_TrackableSettings_7; }
	inline TrackableSettings_t2862243993 ** get_address_of_m_TrackableSettings_7() { return &___m_TrackableSettings_7; }
	inline void set_m_TrackableSettings_7(TrackableSettings_t2862243993 * value)
	{
		___m_TrackableSettings_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_TrackableSettings_7), value);
	}

	inline static int32_t get_offset_of_m_FrameQualityMeter_8() { return static_cast<int32_t>(offsetof(UDTEventHandler_t2349357857, ___m_FrameQualityMeter_8)); }
	inline FrameQualityMeter_t3206426345 * get_m_FrameQualityMeter_8() const { return ___m_FrameQualityMeter_8; }
	inline FrameQualityMeter_t3206426345 ** get_address_of_m_FrameQualityMeter_8() { return &___m_FrameQualityMeter_8; }
	inline void set_m_FrameQualityMeter_8(FrameQualityMeter_t3206426345 * value)
	{
		___m_FrameQualityMeter_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_FrameQualityMeter_8), value);
	}

	inline static int32_t get_offset_of_m_UDT_DataSet_9() { return static_cast<int32_t>(offsetof(UDTEventHandler_t2349357857, ___m_UDT_DataSet_9)); }
	inline DataSet_t3286034874 * get_m_UDT_DataSet_9() const { return ___m_UDT_DataSet_9; }
	inline DataSet_t3286034874 ** get_address_of_m_UDT_DataSet_9() { return &___m_UDT_DataSet_9; }
	inline void set_m_UDT_DataSet_9(DataSet_t3286034874 * value)
	{
		___m_UDT_DataSet_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_UDT_DataSet_9), value);
	}

	inline static int32_t get_offset_of_m_FrameQuality_10() { return static_cast<int32_t>(offsetof(UDTEventHandler_t2349357857, ___m_FrameQuality_10)); }
	inline int32_t get_m_FrameQuality_10() const { return ___m_FrameQuality_10; }
	inline int32_t* get_address_of_m_FrameQuality_10() { return &___m_FrameQuality_10; }
	inline void set_m_FrameQuality_10(int32_t value)
	{
		___m_FrameQuality_10 = value;
	}

	inline static int32_t get_offset_of_m_TargetCounter_11() { return static_cast<int32_t>(offsetof(UDTEventHandler_t2349357857, ___m_TargetCounter_11)); }
	inline int32_t get_m_TargetCounter_11() const { return ___m_TargetCounter_11; }
	inline int32_t* get_address_of_m_TargetCounter_11() { return &___m_TargetCounter_11; }
	inline void set_m_TargetCounter_11(int32_t value)
	{
		___m_TargetCounter_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UDTEVENTHANDLER_T2349357857_H
#ifndef VIRTUALBUTTONEVENTHANDLER_T1548763206_H
#define VIRTUALBUTTONEVENTHANDLER_T1548763206_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VirtualButtonEventHandler
struct  VirtualButtonEventHandler_t1548763206  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Material VirtualButtonEventHandler::m_VirtualButtonDefault
	Material_t340375123 * ___m_VirtualButtonDefault_2;
	// UnityEngine.Material VirtualButtonEventHandler::m_VirtualButtonPressed
	Material_t340375123 * ___m_VirtualButtonPressed_3;
	// System.Single VirtualButtonEventHandler::m_ButtonReleaseTimeDelay
	float ___m_ButtonReleaseTimeDelay_4;
	// Vuforia.VirtualButtonBehaviour[] VirtualButtonEventHandler::virtualButtonBehaviours
	VirtualButtonBehaviourU5BU5D_t2153394082* ___virtualButtonBehaviours_5;

public:
	inline static int32_t get_offset_of_m_VirtualButtonDefault_2() { return static_cast<int32_t>(offsetof(VirtualButtonEventHandler_t1548763206, ___m_VirtualButtonDefault_2)); }
	inline Material_t340375123 * get_m_VirtualButtonDefault_2() const { return ___m_VirtualButtonDefault_2; }
	inline Material_t340375123 ** get_address_of_m_VirtualButtonDefault_2() { return &___m_VirtualButtonDefault_2; }
	inline void set_m_VirtualButtonDefault_2(Material_t340375123 * value)
	{
		___m_VirtualButtonDefault_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_VirtualButtonDefault_2), value);
	}

	inline static int32_t get_offset_of_m_VirtualButtonPressed_3() { return static_cast<int32_t>(offsetof(VirtualButtonEventHandler_t1548763206, ___m_VirtualButtonPressed_3)); }
	inline Material_t340375123 * get_m_VirtualButtonPressed_3() const { return ___m_VirtualButtonPressed_3; }
	inline Material_t340375123 ** get_address_of_m_VirtualButtonPressed_3() { return &___m_VirtualButtonPressed_3; }
	inline void set_m_VirtualButtonPressed_3(Material_t340375123 * value)
	{
		___m_VirtualButtonPressed_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_VirtualButtonPressed_3), value);
	}

	inline static int32_t get_offset_of_m_ButtonReleaseTimeDelay_4() { return static_cast<int32_t>(offsetof(VirtualButtonEventHandler_t1548763206, ___m_ButtonReleaseTimeDelay_4)); }
	inline float get_m_ButtonReleaseTimeDelay_4() const { return ___m_ButtonReleaseTimeDelay_4; }
	inline float* get_address_of_m_ButtonReleaseTimeDelay_4() { return &___m_ButtonReleaseTimeDelay_4; }
	inline void set_m_ButtonReleaseTimeDelay_4(float value)
	{
		___m_ButtonReleaseTimeDelay_4 = value;
	}

	inline static int32_t get_offset_of_virtualButtonBehaviours_5() { return static_cast<int32_t>(offsetof(VirtualButtonEventHandler_t1548763206, ___virtualButtonBehaviours_5)); }
	inline VirtualButtonBehaviourU5BU5D_t2153394082* get_virtualButtonBehaviours_5() const { return ___virtualButtonBehaviours_5; }
	inline VirtualButtonBehaviourU5BU5D_t2153394082** get_address_of_virtualButtonBehaviours_5() { return &___virtualButtonBehaviours_5; }
	inline void set_virtualButtonBehaviours_5(VirtualButtonBehaviourU5BU5D_t2153394082* value)
	{
		___virtualButtonBehaviours_5 = value;
		Il2CppCodeGenWriteBarrier((&___virtualButtonBehaviours_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIRTUALBUTTONEVENTHANDLER_T1548763206_H
#ifndef OPTIONSCONFIG_T900326454_H
#define OPTIONSCONFIG_T900326454_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OptionsConfig
struct  OptionsConfig_t900326454  : public MonoBehaviour_t3962482529
{
public:
	// OptionsConfig/Option[] OptionsConfig::options
	OptionU5BU5D_t153379540* ___options_2;

public:
	inline static int32_t get_offset_of_options_2() { return static_cast<int32_t>(offsetof(OptionsConfig_t900326454, ___options_2)); }
	inline OptionU5BU5D_t153379540* get_options_2() const { return ___options_2; }
	inline OptionU5BU5D_t153379540** get_address_of_options_2() { return &___options_2; }
	inline void set_options_2(OptionU5BU5D_t153379540* value)
	{
		___options_2 = value;
		Il2CppCodeGenWriteBarrier((&___options_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OPTIONSCONFIG_T900326454_H
#ifndef SAMPLESLOADINGSCREEN_T4131087415_H
#define SAMPLESLOADINGSCREEN_T4131087415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SamplesLoadingScreen
struct  SamplesLoadingScreen_t4131087415  : public MonoBehaviour_t3962482529
{
public:
	// System.Boolean SamplesLoadingScreen::mChangeLevel
	bool ___mChangeLevel_2;
	// UnityEngine.UI.RawImage SamplesLoadingScreen::mUISpinner
	RawImage_t3182918964 * ___mUISpinner_3;

public:
	inline static int32_t get_offset_of_mChangeLevel_2() { return static_cast<int32_t>(offsetof(SamplesLoadingScreen_t4131087415, ___mChangeLevel_2)); }
	inline bool get_mChangeLevel_2() const { return ___mChangeLevel_2; }
	inline bool* get_address_of_mChangeLevel_2() { return &___mChangeLevel_2; }
	inline void set_mChangeLevel_2(bool value)
	{
		___mChangeLevel_2 = value;
	}

	inline static int32_t get_offset_of_mUISpinner_3() { return static_cast<int32_t>(offsetof(SamplesLoadingScreen_t4131087415, ___mUISpinner_3)); }
	inline RawImage_t3182918964 * get_mUISpinner_3() const { return ___mUISpinner_3; }
	inline RawImage_t3182918964 ** get_address_of_mUISpinner_3() { return &___mUISpinner_3; }
	inline void set_mUISpinner_3(RawImage_t3182918964 * value)
	{
		___mUISpinner_3 = value;
		Il2CppCodeGenWriteBarrier((&___mUISpinner_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SAMPLESLOADINGSCREEN_T4131087415_H
#ifndef SAMPLESMAINMENU_T83803002_H
#define SAMPLESMAINMENU_T83803002_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SamplesMainMenu
struct  SamplesMainMenu_t83803002  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Canvas SamplesMainMenu::AboutCanvas
	Canvas_t3310196443 * ___AboutCanvas_2;
	// UnityEngine.UI.Text SamplesMainMenu::AboutTitle
	Text_t1901882714 * ___AboutTitle_3;
	// UnityEngine.UI.Text SamplesMainMenu::AboutDescription
	Text_t1901882714 * ___AboutDescription_4;
	// SamplesAboutScreenInfo SamplesMainMenu::aboutScreenInfo
	SamplesAboutScreenInfo_t802360490 * ___aboutScreenInfo_9;

public:
	inline static int32_t get_offset_of_AboutCanvas_2() { return static_cast<int32_t>(offsetof(SamplesMainMenu_t83803002, ___AboutCanvas_2)); }
	inline Canvas_t3310196443 * get_AboutCanvas_2() const { return ___AboutCanvas_2; }
	inline Canvas_t3310196443 ** get_address_of_AboutCanvas_2() { return &___AboutCanvas_2; }
	inline void set_AboutCanvas_2(Canvas_t3310196443 * value)
	{
		___AboutCanvas_2 = value;
		Il2CppCodeGenWriteBarrier((&___AboutCanvas_2), value);
	}

	inline static int32_t get_offset_of_AboutTitle_3() { return static_cast<int32_t>(offsetof(SamplesMainMenu_t83803002, ___AboutTitle_3)); }
	inline Text_t1901882714 * get_AboutTitle_3() const { return ___AboutTitle_3; }
	inline Text_t1901882714 ** get_address_of_AboutTitle_3() { return &___AboutTitle_3; }
	inline void set_AboutTitle_3(Text_t1901882714 * value)
	{
		___AboutTitle_3 = value;
		Il2CppCodeGenWriteBarrier((&___AboutTitle_3), value);
	}

	inline static int32_t get_offset_of_AboutDescription_4() { return static_cast<int32_t>(offsetof(SamplesMainMenu_t83803002, ___AboutDescription_4)); }
	inline Text_t1901882714 * get_AboutDescription_4() const { return ___AboutDescription_4; }
	inline Text_t1901882714 ** get_address_of_AboutDescription_4() { return &___AboutDescription_4; }
	inline void set_AboutDescription_4(Text_t1901882714 * value)
	{
		___AboutDescription_4 = value;
		Il2CppCodeGenWriteBarrier((&___AboutDescription_4), value);
	}

	inline static int32_t get_offset_of_aboutScreenInfo_9() { return static_cast<int32_t>(offsetof(SamplesMainMenu_t83803002, ___aboutScreenInfo_9)); }
	inline SamplesAboutScreenInfo_t802360490 * get_aboutScreenInfo_9() const { return ___aboutScreenInfo_9; }
	inline SamplesAboutScreenInfo_t802360490 ** get_address_of_aboutScreenInfo_9() { return &___aboutScreenInfo_9; }
	inline void set_aboutScreenInfo_9(SamplesAboutScreenInfo_t802360490 * value)
	{
		___aboutScreenInfo_9 = value;
		Il2CppCodeGenWriteBarrier((&___aboutScreenInfo_9), value);
	}
};

struct SamplesMainMenu_t83803002_StaticFields
{
public:
	// System.Boolean SamplesMainMenu::isAboutScreenVisible
	bool ___isAboutScreenVisible_5;
	// SamplesMainMenu/MenuItem SamplesMainMenu::menuItem
	int32_t ___menuItem_6;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> SamplesMainMenu::<>f__switch$map0
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map0_10;

public:
	inline static int32_t get_offset_of_isAboutScreenVisible_5() { return static_cast<int32_t>(offsetof(SamplesMainMenu_t83803002_StaticFields, ___isAboutScreenVisible_5)); }
	inline bool get_isAboutScreenVisible_5() const { return ___isAboutScreenVisible_5; }
	inline bool* get_address_of_isAboutScreenVisible_5() { return &___isAboutScreenVisible_5; }
	inline void set_isAboutScreenVisible_5(bool value)
	{
		___isAboutScreenVisible_5 = value;
	}

	inline static int32_t get_offset_of_menuItem_6() { return static_cast<int32_t>(offsetof(SamplesMainMenu_t83803002_StaticFields, ___menuItem_6)); }
	inline int32_t get_menuItem_6() const { return ___menuItem_6; }
	inline int32_t* get_address_of_menuItem_6() { return &___menuItem_6; }
	inline void set_menuItem_6(int32_t value)
	{
		___menuItem_6 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map0_10() { return static_cast<int32_t>(offsetof(SamplesMainMenu_t83803002_StaticFields, ___U3CU3Ef__switchU24map0_10)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map0_10() const { return ___U3CU3Ef__switchU24map0_10; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map0_10() { return &___U3CU3Ef__switchU24map0_10; }
	inline void set_U3CU3Ef__switchU24map0_10(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map0_10 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map0_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SAMPLESMAINMENU_T83803002_H
#ifndef VUMARKHANDLER_T1415762101_H
#define VUMARKHANDLER_T1415762101_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VuMarkHandler
struct  VuMarkHandler_t1415762101  : public MonoBehaviour_t3962482529
{
public:
	// PanelShowHide VuMarkHandler::m_IdPanel
	PanelShowHide_t3128188850 * ___m_IdPanel_2;
	// Vuforia.VuMarkManager VuMarkHandler::m_VuMarkManager
	VuMarkManager_t2982459596 * ___m_VuMarkManager_3;
	// Vuforia.VuMarkTarget VuMarkHandler::m_ClosestVuMark
	RuntimeObject* ___m_ClosestVuMark_4;
	// Vuforia.VuMarkTarget VuMarkHandler::m_CurrentVuMark
	RuntimeObject* ___m_CurrentVuMark_5;

public:
	inline static int32_t get_offset_of_m_IdPanel_2() { return static_cast<int32_t>(offsetof(VuMarkHandler_t1415762101, ___m_IdPanel_2)); }
	inline PanelShowHide_t3128188850 * get_m_IdPanel_2() const { return ___m_IdPanel_2; }
	inline PanelShowHide_t3128188850 ** get_address_of_m_IdPanel_2() { return &___m_IdPanel_2; }
	inline void set_m_IdPanel_2(PanelShowHide_t3128188850 * value)
	{
		___m_IdPanel_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_IdPanel_2), value);
	}

	inline static int32_t get_offset_of_m_VuMarkManager_3() { return static_cast<int32_t>(offsetof(VuMarkHandler_t1415762101, ___m_VuMarkManager_3)); }
	inline VuMarkManager_t2982459596 * get_m_VuMarkManager_3() const { return ___m_VuMarkManager_3; }
	inline VuMarkManager_t2982459596 ** get_address_of_m_VuMarkManager_3() { return &___m_VuMarkManager_3; }
	inline void set_m_VuMarkManager_3(VuMarkManager_t2982459596 * value)
	{
		___m_VuMarkManager_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_VuMarkManager_3), value);
	}

	inline static int32_t get_offset_of_m_ClosestVuMark_4() { return static_cast<int32_t>(offsetof(VuMarkHandler_t1415762101, ___m_ClosestVuMark_4)); }
	inline RuntimeObject* get_m_ClosestVuMark_4() const { return ___m_ClosestVuMark_4; }
	inline RuntimeObject** get_address_of_m_ClosestVuMark_4() { return &___m_ClosestVuMark_4; }
	inline void set_m_ClosestVuMark_4(RuntimeObject* value)
	{
		___m_ClosestVuMark_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_ClosestVuMark_4), value);
	}

	inline static int32_t get_offset_of_m_CurrentVuMark_5() { return static_cast<int32_t>(offsetof(VuMarkHandler_t1415762101, ___m_CurrentVuMark_5)); }
	inline RuntimeObject* get_m_CurrentVuMark_5() const { return ___m_CurrentVuMark_5; }
	inline RuntimeObject** get_address_of_m_CurrentVuMark_5() { return &___m_CurrentVuMark_5; }
	inline void set_m_CurrentVuMark_5(RuntimeObject* value)
	{
		___m_CurrentVuMark_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_CurrentVuMark_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VUMARKHANDLER_T1415762101_H
#ifndef QUALITYDIALOG_T529473262_H
#define QUALITYDIALOG_T529473262_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// QualityDialog
struct  QualityDialog_t529473262  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUALITYDIALOG_T529473262_H
#ifndef SAMPLESTAPHANDLER_T1775262109_H
#define SAMPLESTAPHANDLER_T1775262109_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SamplesTapHandler
struct  SamplesTapHandler_t1775262109  : public MonoBehaviour_t3962482529
{
public:
	// System.Single SamplesTapHandler::mTimeSinceLastTap
	float ___mTimeSinceLastTap_3;
	// MenuAnimator SamplesTapHandler::mMenuAnim
	MenuAnimator_t2112910832 * ___mMenuAnim_4;
	// OptionsConfig SamplesTapHandler::optionsConfig
	OptionsConfig_t900326454 * ___optionsConfig_5;
	// System.Int32 SamplesTapHandler::mTapCount
	int32_t ___mTapCount_6;

public:
	inline static int32_t get_offset_of_mTimeSinceLastTap_3() { return static_cast<int32_t>(offsetof(SamplesTapHandler_t1775262109, ___mTimeSinceLastTap_3)); }
	inline float get_mTimeSinceLastTap_3() const { return ___mTimeSinceLastTap_3; }
	inline float* get_address_of_mTimeSinceLastTap_3() { return &___mTimeSinceLastTap_3; }
	inline void set_mTimeSinceLastTap_3(float value)
	{
		___mTimeSinceLastTap_3 = value;
	}

	inline static int32_t get_offset_of_mMenuAnim_4() { return static_cast<int32_t>(offsetof(SamplesTapHandler_t1775262109, ___mMenuAnim_4)); }
	inline MenuAnimator_t2112910832 * get_mMenuAnim_4() const { return ___mMenuAnim_4; }
	inline MenuAnimator_t2112910832 ** get_address_of_mMenuAnim_4() { return &___mMenuAnim_4; }
	inline void set_mMenuAnim_4(MenuAnimator_t2112910832 * value)
	{
		___mMenuAnim_4 = value;
		Il2CppCodeGenWriteBarrier((&___mMenuAnim_4), value);
	}

	inline static int32_t get_offset_of_optionsConfig_5() { return static_cast<int32_t>(offsetof(SamplesTapHandler_t1775262109, ___optionsConfig_5)); }
	inline OptionsConfig_t900326454 * get_optionsConfig_5() const { return ___optionsConfig_5; }
	inline OptionsConfig_t900326454 ** get_address_of_optionsConfig_5() { return &___optionsConfig_5; }
	inline void set_optionsConfig_5(OptionsConfig_t900326454 * value)
	{
		___optionsConfig_5 = value;
		Il2CppCodeGenWriteBarrier((&___optionsConfig_5), value);
	}

	inline static int32_t get_offset_of_mTapCount_6() { return static_cast<int32_t>(offsetof(SamplesTapHandler_t1775262109, ___mTapCount_6)); }
	inline int32_t get_mTapCount_6() const { return ___mTapCount_6; }
	inline int32_t* get_address_of_mTapCount_6() { return &___mTapCount_6; }
	inline void set_mTapCount_6(int32_t value)
	{
		___mTapCount_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SAMPLESTAPHANDLER_T1775262109_H
#ifndef SAMPLESNAVIGATIONHANDLER_T3426315339_H
#define SAMPLESNAVIGATIONHANDLER_T3426315339_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SamplesNavigationHandler
struct  SamplesNavigationHandler_t3426315339  : public MonoBehaviour_t3962482529
{
public:
	// System.String SamplesNavigationHandler::currentSceneName
	String_t* ___currentSceneName_2;

public:
	inline static int32_t get_offset_of_currentSceneName_2() { return static_cast<int32_t>(offsetof(SamplesNavigationHandler_t3426315339, ___currentSceneName_2)); }
	inline String_t* get_currentSceneName_2() const { return ___currentSceneName_2; }
	inline String_t** get_address_of_currentSceneName_2() { return &___currentSceneName_2; }
	inline void set_currentSceneName_2(String_t* value)
	{
		___currentSceneName_2 = value;
		Il2CppCodeGenWriteBarrier((&___currentSceneName_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SAMPLESNAVIGATIONHANDLER_T3426315339_H
#ifndef PANELSHOWHIDE_T3128188850_H
#define PANELSHOWHIDE_T3128188850_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PanelShowHide
struct  PanelShowHide_t3128188850  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Animator PanelShowHide::m_Animator
	Animator_t434523843 * ___m_Animator_2;
	// UnityEngine.UI.Image PanelShowHide::m_Image
	Image_t2670269651 * ___m_Image_3;
	// UnityEngine.UI.Text PanelShowHide::m_Info
	Text_t1901882714 * ___m_Info_4;

public:
	inline static int32_t get_offset_of_m_Animator_2() { return static_cast<int32_t>(offsetof(PanelShowHide_t3128188850, ___m_Animator_2)); }
	inline Animator_t434523843 * get_m_Animator_2() const { return ___m_Animator_2; }
	inline Animator_t434523843 ** get_address_of_m_Animator_2() { return &___m_Animator_2; }
	inline void set_m_Animator_2(Animator_t434523843 * value)
	{
		___m_Animator_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Animator_2), value);
	}

	inline static int32_t get_offset_of_m_Image_3() { return static_cast<int32_t>(offsetof(PanelShowHide_t3128188850, ___m_Image_3)); }
	inline Image_t2670269651 * get_m_Image_3() const { return ___m_Image_3; }
	inline Image_t2670269651 ** get_address_of_m_Image_3() { return &___m_Image_3; }
	inline void set_m_Image_3(Image_t2670269651 * value)
	{
		___m_Image_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Image_3), value);
	}

	inline static int32_t get_offset_of_m_Info_4() { return static_cast<int32_t>(offsetof(PanelShowHide_t3128188850, ___m_Info_4)); }
	inline Text_t1901882714 * get_m_Info_4() const { return ___m_Info_4; }
	inline Text_t1901882714 ** get_address_of_m_Info_4() { return &___m_Info_4; }
	inline void set_m_Info_4(Text_t1901882714 * value)
	{
		___m_Info_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Info_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PANELSHOWHIDE_T3128188850_H
#ifndef UDTSETTINGS_T145698775_H
#define UDTSETTINGS_T145698775_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UDTSettings
struct  UDTSettings_t145698775  : public TrackableSettings_t2862243993
{
public:
	// UDTEventHandler UDTSettings::m_UDTEventHandler
	UDTEventHandler_t2349357857 * ___m_UDTEventHandler_3;

public:
	inline static int32_t get_offset_of_m_UDTEventHandler_3() { return static_cast<int32_t>(offsetof(UDTSettings_t145698775, ___m_UDTEventHandler_3)); }
	inline UDTEventHandler_t2349357857 * get_m_UDTEventHandler_3() const { return ___m_UDTEventHandler_3; }
	inline UDTEventHandler_t2349357857 ** get_address_of_m_UDTEventHandler_3() { return &___m_UDTEventHandler_3; }
	inline void set_m_UDTEventHandler_3(UDTEventHandler_t2349357857 * value)
	{
		___m_UDTEventHandler_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_UDTEventHandler_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UDTSETTINGS_T145698775_H
#ifndef VUMARKTRACKABLEEVENTHANDLER_T4082851918_H
#define VUMARKTRACKABLEEVENTHANDLER_T4082851918_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VuMarkTrackableEventHandler
struct  VuMarkTrackableEventHandler_t4082851918  : public DefaultTrackableEventHandler_t1588957063
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VUMARKTRACKABLEEVENTHANDLER_T4082851918_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2200 = { sizeof (QualityDialog_t529473262), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2201 = { sizeof (UDTEventHandler_t2349357857), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2201[10] = 
{
	UDTEventHandler_t2349357857::get_offset_of_ImageTargetTemplate_2(),
	0,
	UDTEventHandler_t2349357857::get_offset_of_m_TargetBuildingBehaviour_4(),
	UDTEventHandler_t2349357857::get_offset_of_m_QualityDialog_5(),
	UDTEventHandler_t2349357857::get_offset_of_m_ObjectTracker_6(),
	UDTEventHandler_t2349357857::get_offset_of_m_TrackableSettings_7(),
	UDTEventHandler_t2349357857::get_offset_of_m_FrameQualityMeter_8(),
	UDTEventHandler_t2349357857::get_offset_of_m_UDT_DataSet_9(),
	UDTEventHandler_t2349357857::get_offset_of_m_FrameQuality_10(),
	UDTEventHandler_t2349357857::get_offset_of_m_TargetCounter_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2202 = { sizeof (U3CFadeOutQualityDialogU3Ec__Iterator0_t2977426494), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2202[6] = 
{
	U3CFadeOutQualityDialogU3Ec__Iterator0_t2977426494::get_offset_of_U3CcanvasGroupU3E__0_0(),
	U3CFadeOutQualityDialogU3Ec__Iterator0_t2977426494::get_offset_of_U3CfU3E__1_1(),
	U3CFadeOutQualityDialogU3Ec__Iterator0_t2977426494::get_offset_of_U24this_2(),
	U3CFadeOutQualityDialogU3Ec__Iterator0_t2977426494::get_offset_of_U24current_3(),
	U3CFadeOutQualityDialogU3Ec__Iterator0_t2977426494::get_offset_of_U24disposing_4(),
	U3CFadeOutQualityDialogU3Ec__Iterator0_t2977426494::get_offset_of_U24PC_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2203 = { sizeof (UDTSettings_t145698775), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2203[1] = 
{
	UDTSettings_t145698775::get_offset_of_m_UDTEventHandler_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2204 = { sizeof (VirtualButtonEventHandler_t1548763206), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2204[4] = 
{
	VirtualButtonEventHandler_t1548763206::get_offset_of_m_VirtualButtonDefault_2(),
	VirtualButtonEventHandler_t1548763206::get_offset_of_m_VirtualButtonPressed_3(),
	VirtualButtonEventHandler_t1548763206::get_offset_of_m_ButtonReleaseTimeDelay_4(),
	VirtualButtonEventHandler_t1548763206::get_offset_of_virtualButtonBehaviours_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2205 = { sizeof (U3CDelayOnButtonReleasedEventU3Ec__Iterator0_t2119283297), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2205[5] = 
{
	U3CDelayOnButtonReleasedEventU3Ec__Iterator0_t2119283297::get_offset_of_waitTime_0(),
	U3CDelayOnButtonReleasedEventU3Ec__Iterator0_t2119283297::get_offset_of_U24this_1(),
	U3CDelayOnButtonReleasedEventU3Ec__Iterator0_t2119283297::get_offset_of_U24current_2(),
	U3CDelayOnButtonReleasedEventU3Ec__Iterator0_t2119283297::get_offset_of_U24disposing_3(),
	U3CDelayOnButtonReleasedEventU3Ec__Iterator0_t2119283297::get_offset_of_U24PC_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2206 = { sizeof (OptionsConfig_t900326454), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2206[1] = 
{
	OptionsConfig_t900326454::get_offset_of_options_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2207 = { sizeof (Option_t3694458217), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2207[3] = 
{
	Option_t3694458217::get_offset_of_name_0(),
	Option_t3694458217::get_offset_of_enabled_1(),
	Option_t3694458217::get_offset_of_m_Object_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2208 = { sizeof (SamplesAboutScreenInfo_t802360490), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2208[2] = 
{
	SamplesAboutScreenInfo_t802360490::get_offset_of_titles_0(),
	SamplesAboutScreenInfo_t802360490::get_offset_of_descriptions_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2209 = { sizeof (SamplesLoadingScreen_t4131087415), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2209[2] = 
{
	SamplesLoadingScreen_t4131087415::get_offset_of_mChangeLevel_2(),
	SamplesLoadingScreen_t4131087415::get_offset_of_mUISpinner_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2210 = { sizeof (SamplesMainMenu_t83803002), -1, sizeof(SamplesMainMenu_t83803002_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2210[9] = 
{
	SamplesMainMenu_t83803002::get_offset_of_AboutCanvas_2(),
	SamplesMainMenu_t83803002::get_offset_of_AboutTitle_3(),
	SamplesMainMenu_t83803002::get_offset_of_AboutDescription_4(),
	SamplesMainMenu_t83803002_StaticFields::get_offset_of_isAboutScreenVisible_5(),
	SamplesMainMenu_t83803002_StaticFields::get_offset_of_menuItem_6(),
	0,
	0,
	SamplesMainMenu_t83803002::get_offset_of_aboutScreenInfo_9(),
	SamplesMainMenu_t83803002_StaticFields::get_offset_of_U3CU3Ef__switchU24map0_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2211 = { sizeof (MenuItem_t4061609034)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2211[9] = 
{
	MenuItem_t4061609034::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2212 = { sizeof (SamplesNavigationHandler_t3426315339), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2212[1] = 
{
	SamplesNavigationHandler_t3426315339::get_offset_of_currentSceneName_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2213 = { sizeof (SamplesTapHandler_t1775262109), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2213[5] = 
{
	0,
	SamplesTapHandler_t1775262109::get_offset_of_mTimeSinceLastTap_3(),
	SamplesTapHandler_t1775262109::get_offset_of_mMenuAnim_4(),
	SamplesTapHandler_t1775262109::get_offset_of_optionsConfig_5(),
	SamplesTapHandler_t1775262109::get_offset_of_mTapCount_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2214 = { sizeof (PanelShowHide_t3128188850), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2214[3] = 
{
	PanelShowHide_t3128188850::get_offset_of_m_Animator_2(),
	PanelShowHide_t3128188850::get_offset_of_m_Image_3(),
	PanelShowHide_t3128188850::get_offset_of_m_Info_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2215 = { sizeof (VuMarkHandler_t1415762101), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2215[4] = 
{
	VuMarkHandler_t1415762101::get_offset_of_m_IdPanel_2(),
	VuMarkHandler_t1415762101::get_offset_of_m_VuMarkManager_3(),
	VuMarkHandler_t1415762101::get_offset_of_m_ClosestVuMark_4(),
	VuMarkHandler_t1415762101::get_offset_of_m_CurrentVuMark_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2216 = { sizeof (U3CShowPanelAfterU3Ec__Iterator0_t1638888630), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2216[9] = 
{
	U3CShowPanelAfterU3Ec__Iterator0_t1638888630::get_offset_of_seconds_0(),
	U3CShowPanelAfterU3Ec__Iterator0_t1638888630::get_offset_of_vuMarkId_1(),
	U3CShowPanelAfterU3Ec__Iterator0_t1638888630::get_offset_of_vuMarkDataType_2(),
	U3CShowPanelAfterU3Ec__Iterator0_t1638888630::get_offset_of_vuMarkDesc_3(),
	U3CShowPanelAfterU3Ec__Iterator0_t1638888630::get_offset_of_vuMarkImage_4(),
	U3CShowPanelAfterU3Ec__Iterator0_t1638888630::get_offset_of_U24this_5(),
	U3CShowPanelAfterU3Ec__Iterator0_t1638888630::get_offset_of_U24current_6(),
	U3CShowPanelAfterU3Ec__Iterator0_t1638888630::get_offset_of_U24disposing_7(),
	U3CShowPanelAfterU3Ec__Iterator0_t1638888630::get_offset_of_U24PC_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2217 = { sizeof (VuMarkTrackableEventHandler_t4082851918), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2218 = { sizeof (DefaultInitializationErrorHandler_t3109936861), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2218[9] = 
{
	DefaultInitializationErrorHandler_t3109936861::get_offset_of_mErrorText_2(),
	DefaultInitializationErrorHandler_t3109936861::get_offset_of_mErrorOccurred_3(),
	0,
	DefaultInitializationErrorHandler_t3109936861::get_offset_of_bodyStyle_5(),
	DefaultInitializationErrorHandler_t3109936861::get_offset_of_headerStyle_6(),
	DefaultInitializationErrorHandler_t3109936861::get_offset_of_footerStyle_7(),
	DefaultInitializationErrorHandler_t3109936861::get_offset_of_bodyTexture_8(),
	DefaultInitializationErrorHandler_t3109936861::get_offset_of_headerTexture_9(),
	DefaultInitializationErrorHandler_t3109936861::get_offset_of_footerTexture_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2219 = { sizeof (DefaultTrackableEventHandler_t1588957063), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2219[1] = 
{
	DefaultTrackableEventHandler_t1588957063::get_offset_of_mTrackableBehaviour_2(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif

﻿#include "il2cpp-config.h"

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

struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// RenderListenerUtility
struct RenderListenerUtility_t3043937243;
// System.Action
struct Action_t1264377477;
// System.Action`1<System.Boolean>
struct Action_1_t269755560;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Delegate
struct Delegate_t1188392813;
// System.DelegateData
struct DelegateData_t1677132599;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Void
struct Void_t1185182177;
// TBEasyWebCam.CallBack.EasyWebCamStartedDelegate
struct EasyWebCamStartedDelegate_t3632458601;
// TBEasyWebCam.CallBack.EasyWebCamStopedDelegate
struct EasyWebCamStopedDelegate_t3449998840;
// TBEasyWebCam.CallBack.EasyWebCamUpdateDelegate
struct EasyWebCamUpdateDelegate_t3486667909;
// TBEasyWebCam.EasyWebCamiOS
struct EasyWebCamiOS_t1455782605;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// UnityEngine.Object
struct Object_t631007953;
// UnityEngine.Texture2D
struct Texture2D_t3840446185;

extern RuntimeClass* Action_1_t269755560_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_t1264377477_il2cpp_TypeInfo_var;
extern RuntimeClass* ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var;
extern RuntimeClass* EasyWebCamBase_t3558876437_il2cpp_TypeInfo_var;
extern RuntimeClass* EasyWebCamStartedDelegate_t3632458601_il2cpp_TypeInfo_var;
extern RuntimeClass* EasyWebCamStopedDelegate_t3449998840_il2cpp_TypeInfo_var;
extern RuntimeClass* EasyWebCamUpdateDelegate_t3486667909_il2cpp_TypeInfo_var;
extern RuntimeClass* GameObject_t1113636619_il2cpp_TypeInfo_var;
extern RuntimeClass* Marshal_t1757017490_il2cpp_TypeInfo_var;
extern RuntimeClass* NativePlugin_t1231223992_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern RuntimeClass* RenderListenerUtility_t3043937243_il2cpp_TypeInfo_var;
extern RuntimeClass* Texture2D_t3840446185_il2cpp_TypeInfo_var;
extern RuntimeClass* Thread_t2300836069_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral2105916758;
extern const RuntimeMethod* Action_1_Invoke_m1933767679_RuntimeMethod_var;
extern const RuntimeMethod* EasyWebCamBase_EasyWebCamStarted_m2267316720_RuntimeMethod_var;
extern const RuntimeMethod* EasyWebCamBase_EasyWebCamStoped_m279443148_RuntimeMethod_var;
extern const RuntimeMethod* EasyWebCamBase_EasyWebCamUpdate_m3201891160_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_AddComponent_TisRenderListenerUtility_t3043937243_m155516371_RuntimeMethod_var;
extern const uint32_t EasyWebCamBase_EasyWebCamStarted_m2267316720_MetadataUsageId;
extern const uint32_t EasyWebCamBase_EasyWebCamStoped_m279443148_MetadataUsageId;
extern const uint32_t EasyWebCamBase_EasyWebCamUpdate_m3201891160_MetadataUsageId;
extern const uint32_t EasyWebCamBase__cctor_m4220247809_MetadataUsageId;
extern const uint32_t EasyWebCamBase_add_OnEasyWebCamStoped_m1602944552_MetadataUsageId;
extern const uint32_t EasyWebCamBase_add_OnEasyWebCamUpdate_m3812250433_MetadataUsageId;
extern const uint32_t EasyWebCamBase_add_onEasyWebCamStart_m107122034_MetadataUsageId;
extern const uint32_t EasyWebCamBase_remove_OnEasyWebCamStoped_m3869662624_MetadataUsageId;
extern const uint32_t EasyWebCamBase_remove_OnEasyWebCamUpdate_m3972191902_MetadataUsageId;
extern const uint32_t EasyWebCamBase_remove_onEasyWebCamStart_m2638947424_MetadataUsageId;
extern const uint32_t EasyWebCamiOS_Release_m176114132_MetadataUsageId;
extern const uint32_t EasyWebCamiOS_UpdateImage_m2010818234_MetadataUsageId;
extern const uint32_t EasyWebCamiOS__ctor_m550363941_MetadataUsageId;
extern const uint32_t EasyWebCamiOS_get_WebCamPreview_m3841362568_MetadataUsageId;
extern const uint32_t NativePlugin__cctor_m145533777_MetadataUsageId;
extern const uint32_t RenderListenerUtility_OnApplicationPause_m1698890616_MetadataUsageId;
extern const uint32_t RenderListenerUtility_OnApplicationQuit_m1418408213_MetadataUsageId;
extern const uint32_t RenderListenerUtility__cctor_m2171300670_MetadataUsageId;
extern const uint32_t RenderListenerUtility_add_onPause_m151179965_MetadataUsageId;
extern const uint32_t RenderListenerUtility_add_onQuit_m1183491272_MetadataUsageId;
extern const uint32_t RenderListenerUtility_remove_onPause_m1489899085_MetadataUsageId;
extern const uint32_t RenderListenerUtility_remove_onQuit_m3703832130_MetadataUsageId;

struct ByteU5BU5D_t4116647657;


#ifndef U3CMODULEU3E_T692745549_H
#define U3CMODULEU3E_T692745549_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745549 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745549_H
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
#ifndef NATIVEPLUGIN_T1231223992_H
#define NATIVEPLUGIN_T1231223992_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NativePlugin
struct  NativePlugin_t1231223992  : public RuntimeObject
{
public:

public:
};

struct NativePlugin_t1231223992_StaticFields
{
public:
	// System.Int32 NativePlugin::LogStr
	int32_t ___LogStr_0;

public:
	inline static int32_t get_offset_of_LogStr_0() { return static_cast<int32_t>(offsetof(NativePlugin_t1231223992_StaticFields, ___LogStr_0)); }
	inline int32_t get_LogStr_0() const { return ___LogStr_0; }
	inline int32_t* get_address_of_LogStr_0() { return &___LogStr_0; }
	inline void set_LogStr_0(int32_t value)
	{
		___LogStr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVEPLUGIN_T1231223992_H
#ifndef NATIVEPLUGINSTATIC_T2493466246_H
#define NATIVEPLUGINSTATIC_T2493466246_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NativePluginStatic
struct  NativePluginStatic_t2493466246  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVEPLUGINSTATIC_T2493466246_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
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
#ifndef EASYWEBCAMBASE_T3558876437_H
#define EASYWEBCAMBASE_T3558876437_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TBEasyWebCam.EasyWebCamBase
struct  EasyWebCamBase_t3558876437  : public RuntimeObject
{
public:

public:
};

struct EasyWebCamBase_t3558876437_StaticFields
{
public:
	// TBEasyWebCam.CallBack.EasyWebCamStartedDelegate TBEasyWebCam.EasyWebCamBase::onEasyWebCamStart
	EasyWebCamStartedDelegate_t3632458601 * ___onEasyWebCamStart_0;
	// TBEasyWebCam.CallBack.EasyWebCamUpdateDelegate TBEasyWebCam.EasyWebCamBase::OnEasyWebCamUpdate
	EasyWebCamUpdateDelegate_t3486667909 * ___OnEasyWebCamUpdate_1;
	// TBEasyWebCam.CallBack.EasyWebCamStopedDelegate TBEasyWebCam.EasyWebCamBase::OnEasyWebCamStoped
	EasyWebCamStopedDelegate_t3449998840 * ___OnEasyWebCamStoped_2;
	// System.Boolean TBEasyWebCam.EasyWebCamBase::isRunning
	bool ___isRunning_3;

public:
	inline static int32_t get_offset_of_onEasyWebCamStart_0() { return static_cast<int32_t>(offsetof(EasyWebCamBase_t3558876437_StaticFields, ___onEasyWebCamStart_0)); }
	inline EasyWebCamStartedDelegate_t3632458601 * get_onEasyWebCamStart_0() const { return ___onEasyWebCamStart_0; }
	inline EasyWebCamStartedDelegate_t3632458601 ** get_address_of_onEasyWebCamStart_0() { return &___onEasyWebCamStart_0; }
	inline void set_onEasyWebCamStart_0(EasyWebCamStartedDelegate_t3632458601 * value)
	{
		___onEasyWebCamStart_0 = value;
		Il2CppCodeGenWriteBarrier((&___onEasyWebCamStart_0), value);
	}

	inline static int32_t get_offset_of_OnEasyWebCamUpdate_1() { return static_cast<int32_t>(offsetof(EasyWebCamBase_t3558876437_StaticFields, ___OnEasyWebCamUpdate_1)); }
	inline EasyWebCamUpdateDelegate_t3486667909 * get_OnEasyWebCamUpdate_1() const { return ___OnEasyWebCamUpdate_1; }
	inline EasyWebCamUpdateDelegate_t3486667909 ** get_address_of_OnEasyWebCamUpdate_1() { return &___OnEasyWebCamUpdate_1; }
	inline void set_OnEasyWebCamUpdate_1(EasyWebCamUpdateDelegate_t3486667909 * value)
	{
		___OnEasyWebCamUpdate_1 = value;
		Il2CppCodeGenWriteBarrier((&___OnEasyWebCamUpdate_1), value);
	}

	inline static int32_t get_offset_of_OnEasyWebCamStoped_2() { return static_cast<int32_t>(offsetof(EasyWebCamBase_t3558876437_StaticFields, ___OnEasyWebCamStoped_2)); }
	inline EasyWebCamStopedDelegate_t3449998840 * get_OnEasyWebCamStoped_2() const { return ___OnEasyWebCamStoped_2; }
	inline EasyWebCamStopedDelegate_t3449998840 ** get_address_of_OnEasyWebCamStoped_2() { return &___OnEasyWebCamStoped_2; }
	inline void set_OnEasyWebCamStoped_2(EasyWebCamStopedDelegate_t3449998840 * value)
	{
		___OnEasyWebCamStoped_2 = value;
		Il2CppCodeGenWriteBarrier((&___OnEasyWebCamStoped_2), value);
	}

	inline static int32_t get_offset_of_isRunning_3() { return static_cast<int32_t>(offsetof(EasyWebCamBase_t3558876437_StaticFields, ___isRunning_3)); }
	inline bool get_isRunning_3() const { return ___isRunning_3; }
	inline bool* get_address_of_isRunning_3() { return &___isRunning_3; }
	inline void set_isRunning_3(bool value)
	{
		___isRunning_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EASYWEBCAMBASE_T3558876437_H
#ifndef EASYWEBCAMIOS_T1455782605_H
#define EASYWEBCAMIOS_T1455782605_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TBEasyWebCam.EasyWebCamiOS
struct  EasyWebCamiOS_t1455782605  : public RuntimeObject
{
public:
	// System.Int32 TBEasyWebCam.EasyWebCamiOS::mPreviewWidth
	int32_t ___mPreviewWidth_0;
	// System.Int32 TBEasyWebCam.EasyWebCamiOS::mPreviewHeight
	int32_t ___mPreviewHeight_1;
	// UnityEngine.Texture2D TBEasyWebCam.EasyWebCamiOS::mPreview
	Texture2D_t3840446185 * ___mPreview_2;
	// System.Byte[] TBEasyWebCam.EasyWebCamiOS::buffer
	ByteU5BU5D_t4116647657* ___buffer_3;

public:
	inline static int32_t get_offset_of_mPreviewWidth_0() { return static_cast<int32_t>(offsetof(EasyWebCamiOS_t1455782605, ___mPreviewWidth_0)); }
	inline int32_t get_mPreviewWidth_0() const { return ___mPreviewWidth_0; }
	inline int32_t* get_address_of_mPreviewWidth_0() { return &___mPreviewWidth_0; }
	inline void set_mPreviewWidth_0(int32_t value)
	{
		___mPreviewWidth_0 = value;
	}

	inline static int32_t get_offset_of_mPreviewHeight_1() { return static_cast<int32_t>(offsetof(EasyWebCamiOS_t1455782605, ___mPreviewHeight_1)); }
	inline int32_t get_mPreviewHeight_1() const { return ___mPreviewHeight_1; }
	inline int32_t* get_address_of_mPreviewHeight_1() { return &___mPreviewHeight_1; }
	inline void set_mPreviewHeight_1(int32_t value)
	{
		___mPreviewHeight_1 = value;
	}

	inline static int32_t get_offset_of_mPreview_2() { return static_cast<int32_t>(offsetof(EasyWebCamiOS_t1455782605, ___mPreview_2)); }
	inline Texture2D_t3840446185 * get_mPreview_2() const { return ___mPreview_2; }
	inline Texture2D_t3840446185 ** get_address_of_mPreview_2() { return &___mPreview_2; }
	inline void set_mPreview_2(Texture2D_t3840446185 * value)
	{
		___mPreview_2 = value;
		Il2CppCodeGenWriteBarrier((&___mPreview_2), value);
	}

	inline static int32_t get_offset_of_buffer_3() { return static_cast<int32_t>(offsetof(EasyWebCamiOS_t1455782605, ___buffer_3)); }
	inline ByteU5BU5D_t4116647657* get_buffer_3() const { return ___buffer_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_buffer_3() { return &___buffer_3; }
	inline void set_buffer_3(ByteU5BU5D_t4116647657* value)
	{
		___buffer_3 = value;
		Il2CppCodeGenWriteBarrier((&___buffer_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EASYWEBCAMIOS_T1455782605_H
#ifndef UTILITIES_T119640997_H
#define UTILITIES_T119640997_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TBEasyWebCam.Setting.Utilities
struct  Utilities_t119640997  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UTILITIES_T119640997_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef BYTE_T1134296376_H
#define BYTE_T1134296376_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Byte
struct  Byte_t1134296376 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Byte_t1134296376, ___m_value_2)); }
	inline uint8_t get_m_value_2() const { return ___m_value_2; }
	inline uint8_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint8_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTE_T1134296376_H
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
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
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
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_8)); }
	inline DelegateData_t1677132599 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1677132599 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1677132599 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1188392813_H
#ifndef FLASHMODE_T2873197416_H
#define FLASHMODE_T2873197416_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TBEasyWebCam.Setting.FlashMode
struct  FlashMode_t2873197416 
{
public:
	// System.Int32 TBEasyWebCam.Setting.FlashMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FlashMode_t2873197416, ___value___1)); }
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
#endif // FLASHMODE_T2873197416_H
#ifndef FOCUSMODE_T783397341_H
#define FOCUSMODE_T783397341_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TBEasyWebCam.Setting.FocusMode
struct  FocusMode_t783397341 
{
public:
	// System.Int32 TBEasyWebCam.Setting.FocusMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FocusMode_t783397341, ___value___1)); }
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
#endif // FOCUSMODE_T783397341_H
#ifndef RESOLUTIONMODE_T2859863976_H
#define RESOLUTIONMODE_T2859863976_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TBEasyWebCam.Setting.ResolutionMode
struct  ResolutionMode_t2859863976 
{
public:
	// System.Byte TBEasyWebCam.Setting.ResolutionMode::value__
	uint8_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ResolutionMode_t2859863976, ___value___1)); }
	inline uint8_t get_value___1() const { return ___value___1; }
	inline uint8_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint8_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOLUTIONMODE_T2859863976_H
#ifndef TORCHMODE_T284144627_H
#define TORCHMODE_T284144627_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TBEasyWebCam.Setting.TorchMode
struct  TorchMode_t284144627 
{
public:
	// System.Int32 TBEasyWebCam.Setting.TorchMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TorchMode_t284144627, ___value___1)); }
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
#endif // TORCHMODE_T284144627_H
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
#ifndef TEXTUREFORMAT_T2701165832_H
#define TEXTUREFORMAT_T2701165832_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextureFormat
struct  TextureFormat_t2701165832 
{
public:
	// System.Int32 UnityEngine.TextureFormat::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TextureFormat_t2701165832, ___value___1)); }
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
#endif // TEXTUREFORMAT_T2701165832_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___prev_9)); }
	inline MulticastDelegate_t * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___kpm_next_10)); }
	inline MulticastDelegate_t * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T_H
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
#ifndef GAMEOBJECT_T1113636619_H
#define GAMEOBJECT_T1113636619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t1113636619  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T1113636619_H
#ifndef TEXTURE_T3661962703_H
#define TEXTURE_T3661962703_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture
struct  Texture_t3661962703  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE_T3661962703_H
#ifndef ACTION_T1264377477_H
#define ACTION_T1264377477_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action
struct  Action_t1264377477  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_T1264377477_H
#ifndef ACTION_1_T269755560_H
#define ACTION_1_T269755560_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<System.Boolean>
struct  Action_1_t269755560  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T269755560_H
#ifndef ASYNCCALLBACK_T3962456242_H
#define ASYNCCALLBACK_T3962456242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AsyncCallback
struct  AsyncCallback_t3962456242  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCALLBACK_T3962456242_H
#ifndef EASYWEBCAMSTARTEDDELEGATE_T3632458601_H
#define EASYWEBCAMSTARTEDDELEGATE_T3632458601_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TBEasyWebCam.CallBack.EasyWebCamStartedDelegate
struct  EasyWebCamStartedDelegate_t3632458601  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EASYWEBCAMSTARTEDDELEGATE_T3632458601_H
#ifndef EASYWEBCAMSTOPEDDELEGATE_T3449998840_H
#define EASYWEBCAMSTOPEDDELEGATE_T3449998840_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TBEasyWebCam.CallBack.EasyWebCamStopedDelegate
struct  EasyWebCamStopedDelegate_t3449998840  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EASYWEBCAMSTOPEDDELEGATE_T3449998840_H
#ifndef EASYWEBCAMUPDATEDELEGATE_T3486667909_H
#define EASYWEBCAMUPDATEDELEGATE_T3486667909_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TBEasyWebCam.CallBack.EasyWebCamUpdateDelegate
struct  EasyWebCamUpdateDelegate_t3486667909  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EASYWEBCAMUPDATEDELEGATE_T3486667909_H
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
#ifndef TEXTURE2D_T3840446185_H
#define TEXTURE2D_T3840446185_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture2D
struct  Texture2D_t3840446185  : public Texture_t3661962703
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE2D_T3840446185_H
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
#ifndef RENDERLISTENERUTILITY_T3043937243_H
#define RENDERLISTENERUTILITY_T3043937243_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RenderListenerUtility
struct  RenderListenerUtility_t3043937243  : public MonoBehaviour_t3962482529
{
public:

public:
};

struct RenderListenerUtility_t3043937243_StaticFields
{
public:
	// System.Action RenderListenerUtility::onQuit
	Action_t1264377477 * ___onQuit_4;
	// System.Action`1<System.Boolean> RenderListenerUtility::onPause
	Action_1_t269755560 * ___onPause_5;
	// RenderListenerUtility RenderListenerUtility::instance
	RenderListenerUtility_t3043937243 * ___instance_6;

public:
	inline static int32_t get_offset_of_onQuit_4() { return static_cast<int32_t>(offsetof(RenderListenerUtility_t3043937243_StaticFields, ___onQuit_4)); }
	inline Action_t1264377477 * get_onQuit_4() const { return ___onQuit_4; }
	inline Action_t1264377477 ** get_address_of_onQuit_4() { return &___onQuit_4; }
	inline void set_onQuit_4(Action_t1264377477 * value)
	{
		___onQuit_4 = value;
		Il2CppCodeGenWriteBarrier((&___onQuit_4), value);
	}

	inline static int32_t get_offset_of_onPause_5() { return static_cast<int32_t>(offsetof(RenderListenerUtility_t3043937243_StaticFields, ___onPause_5)); }
	inline Action_1_t269755560 * get_onPause_5() const { return ___onPause_5; }
	inline Action_1_t269755560 ** get_address_of_onPause_5() { return &___onPause_5; }
	inline void set_onPause_5(Action_1_t269755560 * value)
	{
		___onPause_5 = value;
		Il2CppCodeGenWriteBarrier((&___onPause_5), value);
	}

	inline static int32_t get_offset_of_instance_6() { return static_cast<int32_t>(offsetof(RenderListenerUtility_t3043937243_StaticFields, ___instance_6)); }
	inline RenderListenerUtility_t3043937243 * get_instance_6() const { return ___instance_6; }
	inline RenderListenerUtility_t3043937243 ** get_address_of_instance_6() { return &___instance_6; }
	inline void set_instance_6(RenderListenerUtility_t3043937243 * value)
	{
		___instance_6 = value;
		Il2CppCodeGenWriteBarrier((&___instance_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERLISTENERUTILITY_T3043937243_H
// System.Byte[]
struct ByteU5BU5D_t4116647657  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};


// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_m341300652_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Boolean>::Invoke(!0)
extern "C" IL2CPP_METHOD_ATTR void Action_1_Invoke_m1933767679_gshared (Action_1_t269755560 * __this, bool p0, const RuntimeMethod* method);

// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
extern "C" IL2CPP_METHOD_ATTR Delegate_t1188392813 * Delegate_Combine_m1859655160 (RuntimeObject * __this /* static, unused */, Delegate_t1188392813 * p0, Delegate_t1188392813 * p1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
extern "C" IL2CPP_METHOD_ATTR Delegate_t1188392813 * Delegate_Remove_m334097152 (RuntimeObject * __this /* static, unused */, Delegate_t1188392813 * p0, Delegate_t1188392813 * p1, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void GameObject__ctor_m2093116449 (GameObject_t1113636619 * __this, String_t* p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<RenderListenerUtility>()
inline RenderListenerUtility_t3043937243 * GameObject_AddComponent_TisRenderListenerUtility_t3043937243_m155516371 (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	return ((  RenderListenerUtility_t3043937243 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m341300652_gshared)(__this, method);
}
// System.Void System.Action`1<System.Boolean>::Invoke(!0)
inline void Action_1_Invoke_m1933767679 (Action_1_t269755560 * __this, bool p0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t269755560 *, bool, const RuntimeMethod*))Action_1_Invoke_m1933767679_gshared)(__this, p0, method);
}
// System.Void System.Action::Invoke()
extern "C" IL2CPP_METHOD_ATTR void Action_Invoke_m937035532 (Action_t1264377477 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method);
// System.Void TBEasyWebCam.CallBack.EasyWebCamStartedDelegate::Invoke()
extern "C" IL2CPP_METHOD_ATTR void EasyWebCamStartedDelegate_Invoke_m71694761 (EasyWebCamStartedDelegate_t3632458601 * __this, const RuntimeMethod* method);
// System.Void TBEasyWebCam.CallBack.EasyWebCamStopedDelegate::Invoke()
extern "C" IL2CPP_METHOD_ATTR void EasyWebCamStopedDelegate_Invoke_m2778931565 (EasyWebCamStopedDelegate_t3449998840 * __this, const RuntimeMethod* method);
// System.Void TBEasyWebCam.CallBack.EasyWebCamUpdateDelegate::Invoke()
extern "C" IL2CPP_METHOD_ATTR void EasyWebCamUpdateDelegate_Invoke_m1343638707 (EasyWebCamUpdateDelegate_t3486667909 * __this, const RuntimeMethod* method);
// System.Void TBEasyWebCam.EasyWebCamBase::EasyWebCamStarted()
extern "C" IL2CPP_METHOD_ATTR void EasyWebCamBase_EasyWebCamStarted_m2267316720 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void TBEasyWebCam.EasyWebCamBase::EasyWebCamUpdate()
extern "C" IL2CPP_METHOD_ATTR void EasyWebCamBase_EasyWebCamUpdate_m3201891160 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void TBEasyWebCam.EasyWebCamBase::EasyWebCamStoped()
extern "C" IL2CPP_METHOD_ATTR void EasyWebCamBase_EasyWebCamStoped_m279443148 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Equality_m1810815630 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Texture2D__ctor_m2862217990 (Texture2D_t3840446185 * __this, int32_t p0, int32_t p1, int32_t p2, bool p3, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void NativePluginStatic::aruRequestCamera()
extern "C" IL2CPP_METHOD_ATTR void NativePluginStatic_aruRequestCamera_m3834418387 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void System.Threading.Thread::Sleep(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Thread_Sleep_m483098292 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method);
// System.Int32 NativePluginStatic::Init()
extern "C" IL2CPP_METHOD_ATTR int32_t NativePluginStatic_Init_m1108317229 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void TBEasyWebCam.CallBack.EasyWebCamStartedDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void EasyWebCamStartedDelegate__ctor_m1385840420 (EasyWebCamStartedDelegate_t3632458601 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void TBEasyWebCam.CallBack.EasyWebCamUpdateDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void EasyWebCamUpdateDelegate__ctor_m3114280526 (EasyWebCamUpdateDelegate_t3486667909 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void TBEasyWebCam.CallBack.EasyWebCamStopedDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void EasyWebCamStopedDelegate__ctor_m4128878161 (EasyWebCamStopedDelegate_t3449998840 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Boolean NativePluginStatic::RegisterCallbacks(TBEasyWebCam.CallBack.EasyWebCamStartedDelegate,TBEasyWebCam.CallBack.EasyWebCamUpdateDelegate,TBEasyWebCam.CallBack.EasyWebCamStopedDelegate)
extern "C" IL2CPP_METHOD_ATTR bool NativePluginStatic_RegisterCallbacks_m21830296 (RuntimeObject * __this /* static, unused */, EasyWebCamStartedDelegate_t3632458601 * ___start0, EasyWebCamUpdateDelegate_t3486667909 * ___update1, EasyWebCamStopedDelegate_t3449998840 * ___stop2, const RuntimeMethod* method);
// System.Void NativePluginStatic::setPreviewResolution(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void NativePluginStatic_setPreviewResolution_m635627585 (RuntimeObject * __this /* static, unused */, int32_t ___w0, int32_t ___h1, const RuntimeMethod* method);
// System.Void NativePluginStatic::Play()
extern "C" IL2CPP_METHOD_ATTR void NativePluginStatic_Play_m2603868519 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void NativePluginStatic::Stop()
extern "C" IL2CPP_METHOD_ATTR void NativePluginStatic_Stop_m3052544022 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void TBEasyWebCam.EasyWebCamiOS::Release()
extern "C" IL2CPP_METHOD_ATTR void EasyWebCamiOS_Release_m176114132 (EasyWebCamiOS_t1455782605 * __this, const RuntimeMethod* method);
// System.Void NativePluginStatic::setFocusMode(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void NativePluginStatic_setFocusMode_m1709423898 (RuntimeObject * __this /* static, unused */, int32_t ___mode0, const RuntimeMethod* method);
// System.Void NativePluginStatic::setTorchMode(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void NativePluginStatic_setTorchMode_m2400691106 (RuntimeObject * __this /* static, unused */, int32_t ___mode0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4071470834 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR void Object_Destroy_m565254235 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method);
// System.Int32 NativePluginStatic::UpdateTextureByte(System.IntPtr&,System.Int32&)
extern "C" IL2CPP_METHOD_ATTR int32_t NativePluginStatic_UpdateTextureByte_m3321388016 (RuntimeObject * __this /* static, unused */, intptr_t* ___colors320, int32_t* ___length1, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Byte[],System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Marshal_Copy_m1222846562 (RuntimeObject * __this /* static, unused */, intptr_t p0, ByteU5BU5D_t4116647657* p1, int32_t p2, int32_t p3, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::LoadRawTextureData(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void Texture2D_LoadRawTextureData_m1232009149 (Texture2D_t3840446185 * __this, ByteU5BU5D_t4116647657* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::Apply()
extern "C" IL2CPP_METHOD_ATTR void Texture2D_Apply_m2271746283 (Texture2D_t3840446185 * __this, const RuntimeMethod* method);
// System.Void NativePluginStatic::SwitchCamera(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void NativePluginStatic_SwitchCamera_m2078388192 (RuntimeObject * __this /* static, unused */, int32_t ___mode0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void NativePlugin::.cctor()
extern "C" IL2CPP_METHOD_ATTR void NativePlugin__cctor_m145533777 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativePlugin__cctor_m145533777_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((NativePlugin_t1231223992_StaticFields*)il2cpp_codegen_static_fields_for(NativePlugin_t1231223992_il2cpp_TypeInfo_var))->set_LogStr_0(((int32_t)200));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C" void DEFAULT_CALL aruRequestCamera();
// System.Void NativePluginStatic::aruRequestCamera()
extern "C" IL2CPP_METHOD_ATTR void NativePluginStatic_aruRequestCamera_m3834418387 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(aruRequestCamera)();

}
extern "C" int32_t DEFAULT_CALL Init();
// System.Int32 NativePluginStatic::Init()
extern "C" IL2CPP_METHOD_ATTR int32_t NativePluginStatic_Init_m1108317229 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(Init)();

	return returnValue;
}
extern "C" void DEFAULT_CALL Play();
// System.Void NativePluginStatic::Play()
extern "C" IL2CPP_METHOD_ATTR void NativePluginStatic_Play_m2603868519 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Play)();

}
extern "C" void DEFAULT_CALL Stop();
// System.Void NativePluginStatic::Stop()
extern "C" IL2CPP_METHOD_ATTR void NativePluginStatic_Stop_m3052544022 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Stop)();

}
extern "C" void DEFAULT_CALL setFocusMode(int32_t);
// System.Void NativePluginStatic::setFocusMode(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void NativePluginStatic_setFocusMode_m1709423898 (RuntimeObject * __this /* static, unused */, int32_t ___mode0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(setFocusMode)(___mode0);

}
extern "C" void DEFAULT_CALL setTorchMode(int32_t);
// System.Void NativePluginStatic::setTorchMode(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void NativePluginStatic_setTorchMode_m2400691106 (RuntimeObject * __this /* static, unused */, int32_t ___mode0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(setTorchMode)(___mode0);

}
extern "C" void DEFAULT_CALL SwitchCamera(int32_t);
// System.Void NativePluginStatic::SwitchCamera(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void NativePluginStatic_SwitchCamera_m2078388192 (RuntimeObject * __this /* static, unused */, int32_t ___mode0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(SwitchCamera)(___mode0);

}
extern "C" int32_t DEFAULT_CALL UpdateTextureByte(intptr_t*, int32_t*);
// System.Int32 NativePluginStatic::UpdateTextureByte(System.IntPtr&,System.Int32&)
extern "C" IL2CPP_METHOD_ATTR int32_t NativePluginStatic_UpdateTextureByte_m3321388016 (RuntimeObject * __this /* static, unused */, intptr_t* ___colors320, int32_t* ___length1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t*, int32_t*);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(UpdateTextureByte)(___colors320, ___length1);

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL RegisterCallbacks(Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
// System.Boolean NativePluginStatic::RegisterCallbacks(TBEasyWebCam.CallBack.EasyWebCamStartedDelegate,TBEasyWebCam.CallBack.EasyWebCamUpdateDelegate,TBEasyWebCam.CallBack.EasyWebCamStopedDelegate)
extern "C" IL2CPP_METHOD_ATTR bool NativePluginStatic_RegisterCallbacks_m21830296 (RuntimeObject * __this /* static, unused */, EasyWebCamStartedDelegate_t3632458601 * ___start0, EasyWebCamUpdateDelegate_t3486667909 * ___update1, EasyWebCamStopedDelegate_t3449998840 * ___stop2, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);

	// Marshaling of parameter '___start0' to native representation
	Il2CppMethodPointer ____start0_marshaled = NULL;
	____start0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___start0));

	// Marshaling of parameter '___update1' to native representation
	Il2CppMethodPointer ____update1_marshaled = NULL;
	____update1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___update1));

	// Marshaling of parameter '___stop2' to native representation
	Il2CppMethodPointer ____stop2_marshaled = NULL;
	____stop2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___stop2));

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(RegisterCallbacks)(____start0_marshaled, ____update1_marshaled, ____stop2_marshaled);

	return static_cast<bool>(returnValue);
}
extern "C" void DEFAULT_CALL setPreviewResolution(int32_t, int32_t);
// System.Void NativePluginStatic::setPreviewResolution(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void NativePluginStatic_setPreviewResolution_m635627585 (RuntimeObject * __this /* static, unused */, int32_t ___w0, int32_t ___h1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(setPreviewResolution)(___w0, ___h1);

}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RenderListenerUtility::add_onQuit(System.Action)
extern "C" IL2CPP_METHOD_ATTR void RenderListenerUtility_add_onQuit_m1183491272 (RuntimeObject * __this /* static, unused */, Action_t1264377477 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RenderListenerUtility_add_onQuit_m1183491272_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_t1264377477 * V_0 = NULL;
	Action_t1264377477 * V_1 = NULL;
	Action_t1264377477 * V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(RenderListenerUtility_t3043937243_il2cpp_TypeInfo_var);
		Action_t1264377477 * L_0 = ((RenderListenerUtility_t3043937243_StaticFields*)il2cpp_codegen_static_fields_for(RenderListenerUtility_t3043937243_il2cpp_TypeInfo_var))->get_onQuit_4();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_t1264377477 * L_1 = V_0;
		V_1 = L_1;
		Action_t1264377477 * L_2 = V_1;
		Action_t1264377477 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_t1264377477 *)CastclassSealed((RuntimeObject*)L_4, Action_t1264377477_il2cpp_TypeInfo_var));
		IL2CPP_RUNTIME_CLASS_INIT(RenderListenerUtility_t3043937243_il2cpp_TypeInfo_var);
		Action_t1264377477 * L_5 = V_2;
		Action_t1264377477 * L_6 = V_1;
		Action_t1264377477 * L_7 = InterlockedCompareExchangeImpl<Action_t1264377477 *>((Action_t1264377477 **)(((RenderListenerUtility_t3043937243_StaticFields*)il2cpp_codegen_static_fields_for(RenderListenerUtility_t3043937243_il2cpp_TypeInfo_var))->get_address_of_onQuit_4()), L_5, L_6);
		V_0 = L_7;
		Action_t1264377477 * L_8 = V_0;
		Action_t1264377477 * L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_t1264377477 *)L_8) == ((RuntimeObject*)(Action_t1264377477 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void RenderListenerUtility::remove_onQuit(System.Action)
extern "C" IL2CPP_METHOD_ATTR void RenderListenerUtility_remove_onQuit_m3703832130 (RuntimeObject * __this /* static, unused */, Action_t1264377477 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RenderListenerUtility_remove_onQuit_m3703832130_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_t1264377477 * V_0 = NULL;
	Action_t1264377477 * V_1 = NULL;
	Action_t1264377477 * V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(RenderListenerUtility_t3043937243_il2cpp_TypeInfo_var);
		Action_t1264377477 * L_0 = ((RenderListenerUtility_t3043937243_StaticFields*)il2cpp_codegen_static_fields_for(RenderListenerUtility_t3043937243_il2cpp_TypeInfo_var))->get_onQuit_4();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_t1264377477 * L_1 = V_0;
		V_1 = L_1;
		Action_t1264377477 * L_2 = V_1;
		Action_t1264377477 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_t1264377477 *)CastclassSealed((RuntimeObject*)L_4, Action_t1264377477_il2cpp_TypeInfo_var));
		IL2CPP_RUNTIME_CLASS_INIT(RenderListenerUtility_t3043937243_il2cpp_TypeInfo_var);
		Action_t1264377477 * L_5 = V_2;
		Action_t1264377477 * L_6 = V_1;
		Action_t1264377477 * L_7 = InterlockedCompareExchangeImpl<Action_t1264377477 *>((Action_t1264377477 **)(((RenderListenerUtility_t3043937243_StaticFields*)il2cpp_codegen_static_fields_for(RenderListenerUtility_t3043937243_il2cpp_TypeInfo_var))->get_address_of_onQuit_4()), L_5, L_6);
		V_0 = L_7;
		Action_t1264377477 * L_8 = V_0;
		Action_t1264377477 * L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_t1264377477 *)L_8) == ((RuntimeObject*)(Action_t1264377477 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void RenderListenerUtility::add_onPause(System.Action`1<System.Boolean>)
extern "C" IL2CPP_METHOD_ATTR void RenderListenerUtility_add_onPause_m151179965 (RuntimeObject * __this /* static, unused */, Action_1_t269755560 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RenderListenerUtility_add_onPause_m151179965_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t269755560 * V_0 = NULL;
	Action_1_t269755560 * V_1 = NULL;
	Action_1_t269755560 * V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(RenderListenerUtility_t3043937243_il2cpp_TypeInfo_var);
		Action_1_t269755560 * L_0 = ((RenderListenerUtility_t3043937243_StaticFields*)il2cpp_codegen_static_fields_for(RenderListenerUtility_t3043937243_il2cpp_TypeInfo_var))->get_onPause_5();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t269755560 * L_1 = V_0;
		V_1 = L_1;
		Action_1_t269755560 * L_2 = V_1;
		Action_1_t269755560 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_1_t269755560 *)CastclassSealed((RuntimeObject*)L_4, Action_1_t269755560_il2cpp_TypeInfo_var));
		IL2CPP_RUNTIME_CLASS_INIT(RenderListenerUtility_t3043937243_il2cpp_TypeInfo_var);
		Action_1_t269755560 * L_5 = V_2;
		Action_1_t269755560 * L_6 = V_1;
		Action_1_t269755560 * L_7 = InterlockedCompareExchangeImpl<Action_1_t269755560 *>((Action_1_t269755560 **)(((RenderListenerUtility_t3043937243_StaticFields*)il2cpp_codegen_static_fields_for(RenderListenerUtility_t3043937243_il2cpp_TypeInfo_var))->get_address_of_onPause_5()), L_5, L_6);
		V_0 = L_7;
		Action_1_t269755560 * L_8 = V_0;
		Action_1_t269755560 * L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t269755560 *)L_8) == ((RuntimeObject*)(Action_1_t269755560 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void RenderListenerUtility::remove_onPause(System.Action`1<System.Boolean>)
extern "C" IL2CPP_METHOD_ATTR void RenderListenerUtility_remove_onPause_m1489899085 (RuntimeObject * __this /* static, unused */, Action_1_t269755560 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RenderListenerUtility_remove_onPause_m1489899085_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t269755560 * V_0 = NULL;
	Action_1_t269755560 * V_1 = NULL;
	Action_1_t269755560 * V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(RenderListenerUtility_t3043937243_il2cpp_TypeInfo_var);
		Action_1_t269755560 * L_0 = ((RenderListenerUtility_t3043937243_StaticFields*)il2cpp_codegen_static_fields_for(RenderListenerUtility_t3043937243_il2cpp_TypeInfo_var))->get_onPause_5();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t269755560 * L_1 = V_0;
		V_1 = L_1;
		Action_1_t269755560 * L_2 = V_1;
		Action_1_t269755560 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_1_t269755560 *)CastclassSealed((RuntimeObject*)L_4, Action_1_t269755560_il2cpp_TypeInfo_var));
		IL2CPP_RUNTIME_CLASS_INIT(RenderListenerUtility_t3043937243_il2cpp_TypeInfo_var);
		Action_1_t269755560 * L_5 = V_2;
		Action_1_t269755560 * L_6 = V_1;
		Action_1_t269755560 * L_7 = InterlockedCompareExchangeImpl<Action_1_t269755560 *>((Action_1_t269755560 **)(((RenderListenerUtility_t3043937243_StaticFields*)il2cpp_codegen_static_fields_for(RenderListenerUtility_t3043937243_il2cpp_TypeInfo_var))->get_address_of_onPause_5()), L_5, L_6);
		V_0 = L_7;
		Action_1_t269755560 * L_8 = V_0;
		Action_1_t269755560 * L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t269755560 *)L_8) == ((RuntimeObject*)(Action_1_t269755560 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void RenderListenerUtility::.cctor()
extern "C" IL2CPP_METHOD_ATTR void RenderListenerUtility__cctor_m2171300670 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RenderListenerUtility__cctor_m2171300670_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = (GameObject_t1113636619 *)il2cpp_codegen_object_new(GameObject_t1113636619_il2cpp_TypeInfo_var);
		GameObject__ctor_m2093116449(L_0, _stringLiteral2105916758, /*hidden argument*/NULL);
		NullCheck(L_0);
		RenderListenerUtility_t3043937243 * L_1 = GameObject_AddComponent_TisRenderListenerUtility_t3043937243_m155516371(L_0, /*hidden argument*/GameObject_AddComponent_TisRenderListenerUtility_t3043937243_m155516371_RuntimeMethod_var);
		((RenderListenerUtility_t3043937243_StaticFields*)il2cpp_codegen_static_fields_for(RenderListenerUtility_t3043937243_il2cpp_TypeInfo_var))->set_instance_6(L_1);
		return;
	}
}
// System.Void RenderListenerUtility::Start()
extern "C" IL2CPP_METHOD_ATTR void RenderListenerUtility_Start_m1458100086 (RenderListenerUtility_t3043937243 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void RenderListenerUtility::Update()
extern "C" IL2CPP_METHOD_ATTR void RenderListenerUtility_Update_m158561904 (RenderListenerUtility_t3043937243 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void RenderListenerUtility::OnApplicationPause(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void RenderListenerUtility_OnApplicationPause_m1698890616 (RenderListenerUtility_t3043937243 * __this, bool ___paused0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RenderListenerUtility_OnApplicationPause_m1698890616_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(RenderListenerUtility_t3043937243_il2cpp_TypeInfo_var);
		Action_1_t269755560 * L_0 = ((RenderListenerUtility_t3043937243_StaticFields*)il2cpp_codegen_static_fields_for(RenderListenerUtility_t3043937243_il2cpp_TypeInfo_var))->get_onPause_5();
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(RenderListenerUtility_t3043937243_il2cpp_TypeInfo_var);
		Action_1_t269755560 * L_1 = ((RenderListenerUtility_t3043937243_StaticFields*)il2cpp_codegen_static_fields_for(RenderListenerUtility_t3043937243_il2cpp_TypeInfo_var))->get_onPause_5();
		bool L_2 = ___paused0;
		NullCheck(L_1);
		Action_1_Invoke_m1933767679(L_1, L_2, /*hidden argument*/Action_1_Invoke_m1933767679_RuntimeMethod_var);
	}

IL_0012:
	{
		return;
	}
}
// System.Void RenderListenerUtility::OnApplicationQuit()
extern "C" IL2CPP_METHOD_ATTR void RenderListenerUtility_OnApplicationQuit_m1418408213 (RenderListenerUtility_t3043937243 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RenderListenerUtility_OnApplicationQuit_m1418408213_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(RenderListenerUtility_t3043937243_il2cpp_TypeInfo_var);
		Action_t1264377477 * L_0 = ((RenderListenerUtility_t3043937243_StaticFields*)il2cpp_codegen_static_fields_for(RenderListenerUtility_t3043937243_il2cpp_TypeInfo_var))->get_onQuit_4();
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(RenderListenerUtility_t3043937243_il2cpp_TypeInfo_var);
		Action_t1264377477 * L_1 = ((RenderListenerUtility_t3043937243_StaticFields*)il2cpp_codegen_static_fields_for(RenderListenerUtility_t3043937243_il2cpp_TypeInfo_var))->get_onQuit_4();
		NullCheck(L_1);
		Action_Invoke_m937035532(L_1, /*hidden argument*/NULL);
	}

IL_0011:
	{
		return;
	}
}
// System.Void RenderListenerUtility::.ctor()
extern "C" IL2CPP_METHOD_ATTR void RenderListenerUtility__ctor_m190771250 (RenderListenerUtility_t3043937243 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_EasyWebCamStartedDelegate_t3632458601 (EasyWebCamStartedDelegate_t3632458601 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void TBEasyWebCam.CallBack.EasyWebCamStartedDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void EasyWebCamStartedDelegate__ctor_m1385840420 (EasyWebCamStartedDelegate_t3632458601 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void TBEasyWebCam.CallBack.EasyWebCamStartedDelegate::Invoke()
extern "C" IL2CPP_METHOD_ATTR void EasyWebCamStartedDelegate_Invoke_m71694761 (EasyWebCamStartedDelegate_t3632458601 * __this, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		EasyWebCamStartedDelegate_Invoke_m71694761((EasyWebCamStartedDelegate_t3632458601 *)__this->get_prev_9(), method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 0)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult TBEasyWebCam.CallBack.EasyWebCamStartedDelegate::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* EasyWebCamStartedDelegate_BeginInvoke_m3059908762 (EasyWebCamStartedDelegate_t3632458601 * __this, AsyncCallback_t3962456242 * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void TBEasyWebCam.CallBack.EasyWebCamStartedDelegate::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void EasyWebCamStartedDelegate_EndInvoke_m3709693201 (EasyWebCamStartedDelegate_t3632458601 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_EasyWebCamStopedDelegate_t3449998840 (EasyWebCamStopedDelegate_t3449998840 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void TBEasyWebCam.CallBack.EasyWebCamStopedDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void EasyWebCamStopedDelegate__ctor_m4128878161 (EasyWebCamStopedDelegate_t3449998840 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void TBEasyWebCam.CallBack.EasyWebCamStopedDelegate::Invoke()
extern "C" IL2CPP_METHOD_ATTR void EasyWebCamStopedDelegate_Invoke_m2778931565 (EasyWebCamStopedDelegate_t3449998840 * __this, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		EasyWebCamStopedDelegate_Invoke_m2778931565((EasyWebCamStopedDelegate_t3449998840 *)__this->get_prev_9(), method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 0)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult TBEasyWebCam.CallBack.EasyWebCamStopedDelegate::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* EasyWebCamStopedDelegate_BeginInvoke_m1310067397 (EasyWebCamStopedDelegate_t3449998840 * __this, AsyncCallback_t3962456242 * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void TBEasyWebCam.CallBack.EasyWebCamStopedDelegate::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void EasyWebCamStopedDelegate_EndInvoke_m3788655490 (EasyWebCamStopedDelegate_t3449998840 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_EasyWebCamUpdateDelegate_t3486667909 (EasyWebCamUpdateDelegate_t3486667909 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void TBEasyWebCam.CallBack.EasyWebCamUpdateDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void EasyWebCamUpdateDelegate__ctor_m3114280526 (EasyWebCamUpdateDelegate_t3486667909 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void TBEasyWebCam.CallBack.EasyWebCamUpdateDelegate::Invoke()
extern "C" IL2CPP_METHOD_ATTR void EasyWebCamUpdateDelegate_Invoke_m1343638707 (EasyWebCamUpdateDelegate_t3486667909 * __this, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		EasyWebCamUpdateDelegate_Invoke_m1343638707((EasyWebCamUpdateDelegate_t3486667909 *)__this->get_prev_9(), method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 0)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult TBEasyWebCam.CallBack.EasyWebCamUpdateDelegate::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* EasyWebCamUpdateDelegate_BeginInvoke_m2405577617 (EasyWebCamUpdateDelegate_t3486667909 * __this, AsyncCallback_t3962456242 * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void TBEasyWebCam.CallBack.EasyWebCamUpdateDelegate::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void EasyWebCamUpdateDelegate_EndInvoke_m1201270580 (EasyWebCamUpdateDelegate_t3486667909 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_EasyWebCamBase_EasyWebCamStarted_m2267316720()
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	EasyWebCamBase_EasyWebCamStarted_m2267316720(NULL, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_EasyWebCamBase_EasyWebCamUpdate_m3201891160()
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	EasyWebCamBase_EasyWebCamUpdate_m3201891160(NULL, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_EasyWebCamBase_EasyWebCamStoped_m279443148()
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	EasyWebCamBase_EasyWebCamStoped_m279443148(NULL, NULL);

}
// System.Void TBEasyWebCam.EasyWebCamBase::add_onEasyWebCamStart(TBEasyWebCam.CallBack.EasyWebCamStartedDelegate)
extern "C" IL2CPP_METHOD_ATTR void EasyWebCamBase_add_onEasyWebCamStart_m107122034 (RuntimeObject * __this /* static, unused */, EasyWebCamStartedDelegate_t3632458601 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EasyWebCamBase_add_onEasyWebCamStart_m107122034_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EasyWebCamStartedDelegate_t3632458601 * V_0 = NULL;
	EasyWebCamStartedDelegate_t3632458601 * V_1 = NULL;
	EasyWebCamStartedDelegate_t3632458601 * V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(EasyWebCamBase_t3558876437_il2cpp_TypeInfo_var);
		EasyWebCamStartedDelegate_t3632458601 * L_0 = ((EasyWebCamBase_t3558876437_StaticFields*)il2cpp_codegen_static_fields_for(EasyWebCamBase_t3558876437_il2cpp_TypeInfo_var))->get_onEasyWebCamStart_0();
		V_0 = L_0;
	}

IL_0006:
	{
		EasyWebCamStartedDelegate_t3632458601 * L_1 = V_0;
		V_1 = L_1;
		EasyWebCamStartedDelegate_t3632458601 * L_2 = V_1;
		EasyWebCamStartedDelegate_t3632458601 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EasyWebCamStartedDelegate_t3632458601 *)CastclassSealed((RuntimeObject*)L_4, EasyWebCamStartedDelegate_t3632458601_il2cpp_TypeInfo_var));
		IL2CPP_RUNTIME_CLASS_INIT(EasyWebCamBase_t3558876437_il2cpp_TypeInfo_var);
		EasyWebCamStartedDelegate_t3632458601 * L_5 = V_2;
		EasyWebCamStartedDelegate_t3632458601 * L_6 = V_1;
		EasyWebCamStartedDelegate_t3632458601 * L_7 = InterlockedCompareExchangeImpl<EasyWebCamStartedDelegate_t3632458601 *>((EasyWebCamStartedDelegate_t3632458601 **)(((EasyWebCamBase_t3558876437_StaticFields*)il2cpp_codegen_static_fields_for(EasyWebCamBase_t3558876437_il2cpp_TypeInfo_var))->get_address_of_onEasyWebCamStart_0()), L_5, L_6);
		V_0 = L_7;
		EasyWebCamStartedDelegate_t3632458601 * L_8 = V_0;
		EasyWebCamStartedDelegate_t3632458601 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EasyWebCamStartedDelegate_t3632458601 *)L_8) == ((RuntimeObject*)(EasyWebCamStartedDelegate_t3632458601 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void TBEasyWebCam.EasyWebCamBase::remove_onEasyWebCamStart(TBEasyWebCam.CallBack.EasyWebCamStartedDelegate)
extern "C" IL2CPP_METHOD_ATTR void EasyWebCamBase_remove_onEasyWebCamStart_m2638947424 (RuntimeObject * __this /* static, unused */, EasyWebCamStartedDelegate_t3632458601 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EasyWebCamBase_remove_onEasyWebCamStart_m2638947424_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EasyWebCamStartedDelegate_t3632458601 * V_0 = NULL;
	EasyWebCamStartedDelegate_t3632458601 * V_1 = NULL;
	EasyWebCamStartedDelegate_t3632458601 * V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(EasyWebCamBase_t3558876437_il2cpp_TypeInfo_var);
		EasyWebCamStartedDelegate_t3632458601 * L_0 = ((EasyWebCamBase_t3558876437_StaticFields*)il2cpp_codegen_static_fields_for(EasyWebCamBase_t3558876437_il2cpp_TypeInfo_var))->get_onEasyWebCamStart_0();
		V_0 = L_0;
	}

IL_0006:
	{
		EasyWebCamStartedDelegate_t3632458601 * L_1 = V_0;
		V_1 = L_1;
		EasyWebCamStartedDelegate_t3632458601 * L_2 = V_1;
		EasyWebCamStartedDelegate_t3632458601 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EasyWebCamStartedDelegate_t3632458601 *)CastclassSealed((RuntimeObject*)L_4, EasyWebCamStartedDelegate_t3632458601_il2cpp_TypeInfo_var));
		IL2CPP_RUNTIME_CLASS_INIT(EasyWebCamBase_t3558876437_il2cpp_TypeInfo_var);
		EasyWebCamStartedDelegate_t3632458601 * L_5 = V_2;
		EasyWebCamStartedDelegate_t3632458601 * L_6 = V_1;
		EasyWebCamStartedDelegate_t3632458601 * L_7 = InterlockedCompareExchangeImpl<EasyWebCamStartedDelegate_t3632458601 *>((EasyWebCamStartedDelegate_t3632458601 **)(((EasyWebCamBase_t3558876437_StaticFields*)il2cpp_codegen_static_fields_for(EasyWebCamBase_t3558876437_il2cpp_TypeInfo_var))->get_address_of_onEasyWebCamStart_0()), L_5, L_6);
		V_0 = L_7;
		EasyWebCamStartedDelegate_t3632458601 * L_8 = V_0;
		EasyWebCamStartedDelegate_t3632458601 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EasyWebCamStartedDelegate_t3632458601 *)L_8) == ((RuntimeObject*)(EasyWebCamStartedDelegate_t3632458601 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void TBEasyWebCam.EasyWebCamBase::add_OnEasyWebCamUpdate(TBEasyWebCam.CallBack.EasyWebCamUpdateDelegate)
extern "C" IL2CPP_METHOD_ATTR void EasyWebCamBase_add_OnEasyWebCamUpdate_m3812250433 (RuntimeObject * __this /* static, unused */, EasyWebCamUpdateDelegate_t3486667909 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EasyWebCamBase_add_OnEasyWebCamUpdate_m3812250433_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EasyWebCamUpdateDelegate_t3486667909 * V_0 = NULL;
	EasyWebCamUpdateDelegate_t3486667909 * V_1 = NULL;
	EasyWebCamUpdateDelegate_t3486667909 * V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(EasyWebCamBase_t3558876437_il2cpp_TypeInfo_var);
		EasyWebCamUpdateDelegate_t3486667909 * L_0 = ((EasyWebCamBase_t3558876437_StaticFields*)il2cpp_codegen_static_fields_for(EasyWebCamBase_t3558876437_il2cpp_TypeInfo_var))->get_OnEasyWebCamUpdate_1();
		V_0 = L_0;
	}

IL_0006:
	{
		EasyWebCamUpdateDelegate_t3486667909 * L_1 = V_0;
		V_1 = L_1;
		EasyWebCamUpdateDelegate_t3486667909 * L_2 = V_1;
		EasyWebCamUpdateDelegate_t3486667909 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EasyWebCamUpdateDelegate_t3486667909 *)CastclassSealed((RuntimeObject*)L_4, EasyWebCamUpdateDelegate_t3486667909_il2cpp_TypeInfo_var));
		IL2CPP_RUNTIME_CLASS_INIT(EasyWebCamBase_t3558876437_il2cpp_TypeInfo_var);
		EasyWebCamUpdateDelegate_t3486667909 * L_5 = V_2;
		EasyWebCamUpdateDelegate_t3486667909 * L_6 = V_1;
		EasyWebCamUpdateDelegate_t3486667909 * L_7 = InterlockedCompareExchangeImpl<EasyWebCamUpdateDelegate_t3486667909 *>((EasyWebCamUpdateDelegate_t3486667909 **)(((EasyWebCamBase_t3558876437_StaticFields*)il2cpp_codegen_static_fields_for(EasyWebCamBase_t3558876437_il2cpp_TypeInfo_var))->get_address_of_OnEasyWebCamUpdate_1()), L_5, L_6);
		V_0 = L_7;
		EasyWebCamUpdateDelegate_t3486667909 * L_8 = V_0;
		EasyWebCamUpdateDelegate_t3486667909 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EasyWebCamUpdateDelegate_t3486667909 *)L_8) == ((RuntimeObject*)(EasyWebCamUpdateDelegate_t3486667909 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void TBEasyWebCam.EasyWebCamBase::remove_OnEasyWebCamUpdate(TBEasyWebCam.CallBack.EasyWebCamUpdateDelegate)
extern "C" IL2CPP_METHOD_ATTR void EasyWebCamBase_remove_OnEasyWebCamUpdate_m3972191902 (RuntimeObject * __this /* static, unused */, EasyWebCamUpdateDelegate_t3486667909 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EasyWebCamBase_remove_OnEasyWebCamUpdate_m3972191902_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EasyWebCamUpdateDelegate_t3486667909 * V_0 = NULL;
	EasyWebCamUpdateDelegate_t3486667909 * V_1 = NULL;
	EasyWebCamUpdateDelegate_t3486667909 * V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(EasyWebCamBase_t3558876437_il2cpp_TypeInfo_var);
		EasyWebCamUpdateDelegate_t3486667909 * L_0 = ((EasyWebCamBase_t3558876437_StaticFields*)il2cpp_codegen_static_fields_for(EasyWebCamBase_t3558876437_il2cpp_TypeInfo_var))->get_OnEasyWebCamUpdate_1();
		V_0 = L_0;
	}

IL_0006:
	{
		EasyWebCamUpdateDelegate_t3486667909 * L_1 = V_0;
		V_1 = L_1;
		EasyWebCamUpdateDelegate_t3486667909 * L_2 = V_1;
		EasyWebCamUpdateDelegate_t3486667909 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EasyWebCamUpdateDelegate_t3486667909 *)CastclassSealed((RuntimeObject*)L_4, EasyWebCamUpdateDelegate_t3486667909_il2cpp_TypeInfo_var));
		IL2CPP_RUNTIME_CLASS_INIT(EasyWebCamBase_t3558876437_il2cpp_TypeInfo_var);
		EasyWebCamUpdateDelegate_t3486667909 * L_5 = V_2;
		EasyWebCamUpdateDelegate_t3486667909 * L_6 = V_1;
		EasyWebCamUpdateDelegate_t3486667909 * L_7 = InterlockedCompareExchangeImpl<EasyWebCamUpdateDelegate_t3486667909 *>((EasyWebCamUpdateDelegate_t3486667909 **)(((EasyWebCamBase_t3558876437_StaticFields*)il2cpp_codegen_static_fields_for(EasyWebCamBase_t3558876437_il2cpp_TypeInfo_var))->get_address_of_OnEasyWebCamUpdate_1()), L_5, L_6);
		V_0 = L_7;
		EasyWebCamUpdateDelegate_t3486667909 * L_8 = V_0;
		EasyWebCamUpdateDelegate_t3486667909 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EasyWebCamUpdateDelegate_t3486667909 *)L_8) == ((RuntimeObject*)(EasyWebCamUpdateDelegate_t3486667909 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void TBEasyWebCam.EasyWebCamBase::add_OnEasyWebCamStoped(TBEasyWebCam.CallBack.EasyWebCamStopedDelegate)
extern "C" IL2CPP_METHOD_ATTR void EasyWebCamBase_add_OnEasyWebCamStoped_m1602944552 (RuntimeObject * __this /* static, unused */, EasyWebCamStopedDelegate_t3449998840 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EasyWebCamBase_add_OnEasyWebCamStoped_m1602944552_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EasyWebCamStopedDelegate_t3449998840 * V_0 = NULL;
	EasyWebCamStopedDelegate_t3449998840 * V_1 = NULL;
	EasyWebCamStopedDelegate_t3449998840 * V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(EasyWebCamBase_t3558876437_il2cpp_TypeInfo_var);
		EasyWebCamStopedDelegate_t3449998840 * L_0 = ((EasyWebCamBase_t3558876437_StaticFields*)il2cpp_codegen_static_fields_for(EasyWebCamBase_t3558876437_il2cpp_TypeInfo_var))->get_OnEasyWebCamStoped_2();
		V_0 = L_0;
	}

IL_0006:
	{
		EasyWebCamStopedDelegate_t3449998840 * L_1 = V_0;
		V_1 = L_1;
		EasyWebCamStopedDelegate_t3449998840 * L_2 = V_1;
		EasyWebCamStopedDelegate_t3449998840 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Combine_m1859655160(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EasyWebCamStopedDelegate_t3449998840 *)CastclassSealed((RuntimeObject*)L_4, EasyWebCamStopedDelegate_t3449998840_il2cpp_TypeInfo_var));
		IL2CPP_RUNTIME_CLASS_INIT(EasyWebCamBase_t3558876437_il2cpp_TypeInfo_var);
		EasyWebCamStopedDelegate_t3449998840 * L_5 = V_2;
		EasyWebCamStopedDelegate_t3449998840 * L_6 = V_1;
		EasyWebCamStopedDelegate_t3449998840 * L_7 = InterlockedCompareExchangeImpl<EasyWebCamStopedDelegate_t3449998840 *>((EasyWebCamStopedDelegate_t3449998840 **)(((EasyWebCamBase_t3558876437_StaticFields*)il2cpp_codegen_static_fields_for(EasyWebCamBase_t3558876437_il2cpp_TypeInfo_var))->get_address_of_OnEasyWebCamStoped_2()), L_5, L_6);
		V_0 = L_7;
		EasyWebCamStopedDelegate_t3449998840 * L_8 = V_0;
		EasyWebCamStopedDelegate_t3449998840 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EasyWebCamStopedDelegate_t3449998840 *)L_8) == ((RuntimeObject*)(EasyWebCamStopedDelegate_t3449998840 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void TBEasyWebCam.EasyWebCamBase::remove_OnEasyWebCamStoped(TBEasyWebCam.CallBack.EasyWebCamStopedDelegate)
extern "C" IL2CPP_METHOD_ATTR void EasyWebCamBase_remove_OnEasyWebCamStoped_m3869662624 (RuntimeObject * __this /* static, unused */, EasyWebCamStopedDelegate_t3449998840 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EasyWebCamBase_remove_OnEasyWebCamStoped_m3869662624_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EasyWebCamStopedDelegate_t3449998840 * V_0 = NULL;
	EasyWebCamStopedDelegate_t3449998840 * V_1 = NULL;
	EasyWebCamStopedDelegate_t3449998840 * V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(EasyWebCamBase_t3558876437_il2cpp_TypeInfo_var);
		EasyWebCamStopedDelegate_t3449998840 * L_0 = ((EasyWebCamBase_t3558876437_StaticFields*)il2cpp_codegen_static_fields_for(EasyWebCamBase_t3558876437_il2cpp_TypeInfo_var))->get_OnEasyWebCamStoped_2();
		V_0 = L_0;
	}

IL_0006:
	{
		EasyWebCamStopedDelegate_t3449998840 * L_1 = V_0;
		V_1 = L_1;
		EasyWebCamStopedDelegate_t3449998840 * L_2 = V_1;
		EasyWebCamStopedDelegate_t3449998840 * L_3 = ___value0;
		Delegate_t1188392813 * L_4 = Delegate_Remove_m334097152(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((EasyWebCamStopedDelegate_t3449998840 *)CastclassSealed((RuntimeObject*)L_4, EasyWebCamStopedDelegate_t3449998840_il2cpp_TypeInfo_var));
		IL2CPP_RUNTIME_CLASS_INIT(EasyWebCamBase_t3558876437_il2cpp_TypeInfo_var);
		EasyWebCamStopedDelegate_t3449998840 * L_5 = V_2;
		EasyWebCamStopedDelegate_t3449998840 * L_6 = V_1;
		EasyWebCamStopedDelegate_t3449998840 * L_7 = InterlockedCompareExchangeImpl<EasyWebCamStopedDelegate_t3449998840 *>((EasyWebCamStopedDelegate_t3449998840 **)(((EasyWebCamBase_t3558876437_StaticFields*)il2cpp_codegen_static_fields_for(EasyWebCamBase_t3558876437_il2cpp_TypeInfo_var))->get_address_of_OnEasyWebCamStoped_2()), L_5, L_6);
		V_0 = L_7;
		EasyWebCamStopedDelegate_t3449998840 * L_8 = V_0;
		EasyWebCamStopedDelegate_t3449998840 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EasyWebCamStopedDelegate_t3449998840 *)L_8) == ((RuntimeObject*)(EasyWebCamStopedDelegate_t3449998840 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void TBEasyWebCam.EasyWebCamBase::EasyWebCamStarted()
extern "C" IL2CPP_METHOD_ATTR void EasyWebCamBase_EasyWebCamStarted_m2267316720 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EasyWebCamBase_EasyWebCamStarted_m2267316720_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EasyWebCamBase_t3558876437_il2cpp_TypeInfo_var);
		EasyWebCamStartedDelegate_t3632458601 * L_0 = ((EasyWebCamBase_t3558876437_StaticFields*)il2cpp_codegen_static_fields_for(EasyWebCamBase_t3558876437_il2cpp_TypeInfo_var))->get_onEasyWebCamStart_0();
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EasyWebCamBase_t3558876437_il2cpp_TypeInfo_var);
		EasyWebCamStartedDelegate_t3632458601 * L_1 = ((EasyWebCamBase_t3558876437_StaticFields*)il2cpp_codegen_static_fields_for(EasyWebCamBase_t3558876437_il2cpp_TypeInfo_var))->get_onEasyWebCamStart_0();
		NullCheck(L_1);
		EasyWebCamStartedDelegate_Invoke_m71694761(L_1, /*hidden argument*/NULL);
	}

IL_0011:
	{
		IL2CPP_RUNTIME_CLASS_INIT(EasyWebCamBase_t3558876437_il2cpp_TypeInfo_var);
		((EasyWebCamBase_t3558876437_StaticFields*)il2cpp_codegen_static_fields_for(EasyWebCamBase_t3558876437_il2cpp_TypeInfo_var))->set_isRunning_3((bool)1);
		return;
	}
}
// System.Void TBEasyWebCam.EasyWebCamBase::EasyWebCamUpdate()
extern "C" IL2CPP_METHOD_ATTR void EasyWebCamBase_EasyWebCamUpdate_m3201891160 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EasyWebCamBase_EasyWebCamUpdate_m3201891160_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EasyWebCamBase_t3558876437_il2cpp_TypeInfo_var);
		EasyWebCamUpdateDelegate_t3486667909 * L_0 = ((EasyWebCamBase_t3558876437_StaticFields*)il2cpp_codegen_static_fields_for(EasyWebCamBase_t3558876437_il2cpp_TypeInfo_var))->get_OnEasyWebCamUpdate_1();
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EasyWebCamBase_t3558876437_il2cpp_TypeInfo_var);
		EasyWebCamUpdateDelegate_t3486667909 * L_1 = ((EasyWebCamBase_t3558876437_StaticFields*)il2cpp_codegen_static_fields_for(EasyWebCamBase_t3558876437_il2cpp_TypeInfo_var))->get_OnEasyWebCamUpdate_1();
		NullCheck(L_1);
		EasyWebCamUpdateDelegate_Invoke_m1343638707(L_1, /*hidden argument*/NULL);
	}

IL_0011:
	{
		return;
	}
}
// System.Void TBEasyWebCam.EasyWebCamBase::EasyWebCamStoped()
extern "C" IL2CPP_METHOD_ATTR void EasyWebCamBase_EasyWebCamStoped_m279443148 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EasyWebCamBase_EasyWebCamStoped_m279443148_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EasyWebCamBase_t3558876437_il2cpp_TypeInfo_var);
		EasyWebCamStopedDelegate_t3449998840 * L_0 = ((EasyWebCamBase_t3558876437_StaticFields*)il2cpp_codegen_static_fields_for(EasyWebCamBase_t3558876437_il2cpp_TypeInfo_var))->get_OnEasyWebCamStoped_2();
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EasyWebCamBase_t3558876437_il2cpp_TypeInfo_var);
		EasyWebCamStopedDelegate_t3449998840 * L_1 = ((EasyWebCamBase_t3558876437_StaticFields*)il2cpp_codegen_static_fields_for(EasyWebCamBase_t3558876437_il2cpp_TypeInfo_var))->get_OnEasyWebCamStoped_2();
		NullCheck(L_1);
		EasyWebCamStopedDelegate_Invoke_m2778931565(L_1, /*hidden argument*/NULL);
	}

IL_0011:
	{
		IL2CPP_RUNTIME_CLASS_INIT(EasyWebCamBase_t3558876437_il2cpp_TypeInfo_var);
		((EasyWebCamBase_t3558876437_StaticFields*)il2cpp_codegen_static_fields_for(EasyWebCamBase_t3558876437_il2cpp_TypeInfo_var))->set_isRunning_3((bool)0);
		return;
	}
}
// System.Void TBEasyWebCam.EasyWebCamBase::.cctor()
extern "C" IL2CPP_METHOD_ATTR void EasyWebCamBase__cctor_m4220247809 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EasyWebCamBase__cctor_m4220247809_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((EasyWebCamBase_t3558876437_StaticFields*)il2cpp_codegen_static_fields_for(EasyWebCamBase_t3558876437_il2cpp_TypeInfo_var))->set_isRunning_3((bool)0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 TBEasyWebCam.EasyWebCamiOS::get_previewWidth()
extern "C" IL2CPP_METHOD_ATTR int32_t EasyWebCamiOS_get_previewWidth_m1281213632 (EasyWebCamiOS_t1455782605 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_mPreviewWidth_0();
		return L_0;
	}
}
// System.Int32 TBEasyWebCam.EasyWebCamiOS::get_previewHeight()
extern "C" IL2CPP_METHOD_ATTR int32_t EasyWebCamiOS_get_previewHeight_m2716612695 (EasyWebCamiOS_t1455782605 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_mPreviewHeight_1();
		return L_0;
	}
}
// UnityEngine.Texture2D TBEasyWebCam.EasyWebCamiOS::get_WebCamPreview()
extern "C" IL2CPP_METHOD_ATTR Texture2D_t3840446185 * EasyWebCamiOS_get_WebCamPreview_m3841362568 (EasyWebCamiOS_t1455782605 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EasyWebCamiOS_get_WebCamPreview_m3841362568_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Texture2D_t3840446185 * L_0 = __this->get_mPreview_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0033;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NativePlugin_t1231223992_il2cpp_TypeInfo_var);
		((NativePlugin_t1231223992_StaticFields*)il2cpp_codegen_static_fields_for(NativePlugin_t1231223992_il2cpp_TypeInfo_var))->set_LogStr_0(((int32_t)400));
		V_0 = 4;
		int32_t L_2 = __this->get_mPreviewWidth_0();
		int32_t L_3 = __this->get_mPreviewHeight_1();
		int32_t L_4 = V_0;
		Texture2D_t3840446185 * L_5 = (Texture2D_t3840446185 *)il2cpp_codegen_object_new(Texture2D_t3840446185_il2cpp_TypeInfo_var);
		Texture2D__ctor_m2862217990(L_5, L_2, L_3, L_4, (bool)0, /*hidden argument*/NULL);
		__this->set_mPreview_2(L_5);
	}

IL_0033:
	{
		Texture2D_t3840446185 * L_6 = __this->get_mPreview_2();
		return L_6;
	}
}
// System.Void TBEasyWebCam.EasyWebCamiOS::.ctor()
extern "C" IL2CPP_METHOD_ATTR void EasyWebCamiOS__ctor_m550363941 (EasyWebCamiOS_t1455782605 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EasyWebCamiOS__ctor_m550363941_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		NativePluginStatic_aruRequestCamera_m3834418387(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Thread_t2300836069_il2cpp_TypeInfo_var);
		Thread_Sleep_m483098292(NULL /*static, unused*/, ((int32_t)200), /*hidden argument*/NULL);
		NativePluginStatic_Init_m1108317229(NULL /*static, unused*/, /*hidden argument*/NULL);
		intptr_t L_0 = (intptr_t)EasyWebCamBase_EasyWebCamStarted_m2267316720_RuntimeMethod_var;
		EasyWebCamStartedDelegate_t3632458601 * L_1 = (EasyWebCamStartedDelegate_t3632458601 *)il2cpp_codegen_object_new(EasyWebCamStartedDelegate_t3632458601_il2cpp_TypeInfo_var);
		EasyWebCamStartedDelegate__ctor_m1385840420(L_1, NULL, L_0, /*hidden argument*/NULL);
		intptr_t L_2 = (intptr_t)EasyWebCamBase_EasyWebCamUpdate_m3201891160_RuntimeMethod_var;
		EasyWebCamUpdateDelegate_t3486667909 * L_3 = (EasyWebCamUpdateDelegate_t3486667909 *)il2cpp_codegen_object_new(EasyWebCamUpdateDelegate_t3486667909_il2cpp_TypeInfo_var);
		EasyWebCamUpdateDelegate__ctor_m3114280526(L_3, NULL, L_2, /*hidden argument*/NULL);
		intptr_t L_4 = (intptr_t)EasyWebCamBase_EasyWebCamStoped_m279443148_RuntimeMethod_var;
		EasyWebCamStopedDelegate_t3449998840 * L_5 = (EasyWebCamStopedDelegate_t3449998840 *)il2cpp_codegen_object_new(EasyWebCamStopedDelegate_t3449998840_il2cpp_TypeInfo_var);
		EasyWebCamStopedDelegate__ctor_m4128878161(L_5, NULL, L_4, /*hidden argument*/NULL);
		NativePluginStatic_RegisterCallbacks_m21830296(NULL /*static, unused*/, L_1, L_3, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TBEasyWebCam.EasyWebCamiOS::setPreviewResolution(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void EasyWebCamiOS_setPreviewResolution_m2254963634 (EasyWebCamiOS_t1455782605 * __this, int32_t ___preWidth0, int32_t ___preHeight1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___preWidth0;
		__this->set_mPreviewWidth_0(L_0);
		int32_t L_1 = ___preHeight1;
		__this->set_mPreviewHeight_1(L_1);
		int32_t L_2 = ___preWidth0;
		int32_t L_3 = ___preHeight1;
		NativePluginStatic_setPreviewResolution_m635627585(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TBEasyWebCam.EasyWebCamiOS::Play()
extern "C" IL2CPP_METHOD_ATTR void EasyWebCamiOS_Play_m2739578594 (EasyWebCamiOS_t1455782605 * __this, const RuntimeMethod* method)
{
	{
		NativePluginStatic_Play_m2603868519(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TBEasyWebCam.EasyWebCamiOS::Stop()
extern "C" IL2CPP_METHOD_ATTR void EasyWebCamiOS_Stop_m3235774307 (EasyWebCamiOS_t1455782605 * __this, const RuntimeMethod* method)
{
	{
		NativePluginStatic_Stop_m3052544022(NULL /*static, unused*/, /*hidden argument*/NULL);
		EasyWebCamiOS_Release_m176114132(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TBEasyWebCam.EasyWebCamiOS::setFocusMode(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void EasyWebCamiOS_setFocusMode_m407443602 (EasyWebCamiOS_t1455782605 * __this, int32_t ___paramode0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___paramode0;
		NativePluginStatic_setFocusMode_m1709423898(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TBEasyWebCam.EasyWebCamiOS::setTorchMode(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void EasyWebCamiOS_setTorchMode_m1125573313 (EasyWebCamiOS_t1455782605 * __this, int32_t ___paramode0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___paramode0;
		NativePluginStatic_setTorchMode_m2400691106(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TBEasyWebCam.EasyWebCamiOS::TakePhoto()
extern "C" IL2CPP_METHOD_ATTR void EasyWebCamiOS_TakePhoto_m1661697878 (EasyWebCamiOS_t1455782605 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void TBEasyWebCam.EasyWebCamiOS::OnPause(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void EasyWebCamiOS_OnPause_m752539763 (EasyWebCamiOS_t1455782605 * __this, bool ___paused0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void TBEasyWebCam.EasyWebCamiOS::Release()
extern "C" IL2CPP_METHOD_ATTR void EasyWebCamiOS_Release_m176114132 (EasyWebCamiOS_t1455782605 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EasyWebCamiOS_Release_m176114132_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Texture2D_t3840446185 * L_0 = __this->get_mPreview_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		Texture2D_t3840446185 * L_2 = __this->get_mPreview_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		__this->set_mPreview_2((Texture2D_t3840446185 *)NULL);
	}

IL_0020:
	{
		return;
	}
}
// System.Void TBEasyWebCam.EasyWebCamiOS::UpdateImage()
extern "C" IL2CPP_METHOD_ATTR void EasyWebCamiOS_UpdateImage_m2010818234 (EasyWebCamiOS_t1455782605 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EasyWebCamiOS_UpdateImage_m2010818234_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset(&V_0, 0, sizeof(V_0));
	int32_t V_1 = 0;
	ByteU5BU5D_t4116647657* G_B5_0 = NULL;
	EasyWebCamiOS_t1455782605 * G_B5_1 = NULL;
	ByteU5BU5D_t4116647657* G_B4_0 = NULL;
	EasyWebCamiOS_t1455782605 * G_B4_1 = NULL;
	{
		Texture2D_t3840446185 * L_0 = __this->get_mPreview_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_005d;
		}
	}
	{
		NativePluginStatic_UpdateTextureByte_m3321388016(NULL /*static, unused*/, (intptr_t*)(&V_0), (int32_t*)(&V_1), /*hidden argument*/NULL);
		int32_t L_2 = V_1;
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		return;
	}

IL_001d:
	{
		ByteU5BU5D_t4116647657* L_3 = __this->get_buffer_3();
		ByteU5BU5D_t4116647657* L_4 = L_3;
		G_B4_0 = L_4;
		G_B4_1 = __this;
		if (L_4)
		{
			G_B5_0 = L_4;
			G_B5_1 = __this;
			goto IL_002e;
		}
	}
	{
		int32_t L_5 = V_1;
		ByteU5BU5D_t4116647657* L_6 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)L_5);
		G_B5_0 = L_6;
		G_B5_1 = G_B4_1;
	}

IL_002e:
	{
		NullCheck(G_B5_1);
		G_B5_1->set_buffer_3(G_B5_0);
		intptr_t L_7 = V_0;
		ByteU5BU5D_t4116647657* L_8 = __this->get_buffer_3();
		int32_t L_9 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		Marshal_Copy_m1222846562(NULL /*static, unused*/, L_7, L_8, 0, L_9, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_10 = __this->get_mPreview_2();
		ByteU5BU5D_t4116647657* L_11 = __this->get_buffer_3();
		NullCheck(L_10);
		Texture2D_LoadRawTextureData_m1232009149(L_10, L_11, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_12 = __this->get_mPreview_2();
		NullCheck(L_12);
		Texture2D_Apply_m2271746283(L_12, /*hidden argument*/NULL);
	}

IL_005d:
	{
		return;
	}
}
// System.Int32 TBEasyWebCam.EasyWebCamiOS::getEnterFrame()
extern "C" IL2CPP_METHOD_ATTR int32_t EasyWebCamiOS_getEnterFrame_m2963714205 (EasyWebCamiOS_t1455782605 * __this, const RuntimeMethod* method)
{
	{
		return 1;
	}
}
// System.Void TBEasyWebCam.EasyWebCamiOS::SwitchCamera(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void EasyWebCamiOS_SwitchCamera_m3805619697 (EasyWebCamiOS_t1455782605 * __this, int32_t ___mode0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___mode0;
		NativePluginStatic_SwitchCamera_m2078388192(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TBEasyWebCam.Setting.Utilities::Dimensions(TBEasyWebCam.Setting.ResolutionMode,System.Int32&,System.Int32&)
extern "C" IL2CPP_METHOD_ATTR void Utilities_Dimensions_m1284048621 (RuntimeObject * __this /* static, unused */, uint8_t ___preset0, int32_t* ___width1, int32_t* ___height2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	uint8_t V_1 = 0;
	{
		int32_t* L_0 = ___width1;
		int32_t* L_1 = ___height2;
		int32_t L_2 = ((int32_t)600);
		V_0 = L_2;
		*((int32_t*)(L_1)) = (int32_t)L_2;
		int32_t L_3 = V_0;
		*((int32_t*)(L_0)) = (int32_t)L_3;
		uint8_t L_4 = ___preset0;
		V_1 = L_4;
		uint8_t L_5 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)1)))
		{
			case 0:
			{
				goto IL_0030;
			}
			case 1:
			{
				goto IL_003f;
			}
			case 2:
			{
				goto IL_0074;
			}
			case 3:
			{
				goto IL_004e;
			}
		}
	}
	{
		uint8_t L_6 = V_1;
		if ((((int32_t)L_6) == ((int32_t)8)))
		{
			goto IL_005d;
		}
	}
	{
		uint8_t L_7 = V_1;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)16))))
		{
			goto IL_006c;
		}
	}
	{
		return;
	}

IL_0030:
	{
		int32_t* L_8 = ___width1;
		*((int32_t*)(L_8)) = (int32_t)((int32_t)1280);
		int32_t* L_9 = ___height2;
		*((int32_t*)(L_9)) = (int32_t)((int32_t)720);
		return;
	}

IL_003f:
	{
		int32_t* L_10 = ___width1;
		*((int32_t*)(L_10)) = (int32_t)((int32_t)1920);
		int32_t* L_11 = ___height2;
		*((int32_t*)(L_11)) = (int32_t)((int32_t)1080);
		return;
	}

IL_004e:
	{
		int32_t* L_12 = ___width1;
		*((int32_t*)(L_12)) = (int32_t)((int32_t)1920);
		int32_t* L_13 = ___height2;
		*((int32_t*)(L_13)) = (int32_t)((int32_t)1080);
		return;
	}

IL_005d:
	{
		int32_t* L_14 = ___width1;
		*((int32_t*)(L_14)) = (int32_t)((int32_t)640);
		int32_t* L_15 = ___height2;
		*((int32_t*)(L_15)) = (int32_t)((int32_t)480);
		return;
	}

IL_006c:
	{
		int32_t* L_16 = ___width1;
		*((int32_t*)(L_16)) = (int32_t)((int32_t)50);
		int32_t* L_17 = ___height2;
		*((int32_t*)(L_17)) = (int32_t)((int32_t)50);
	}

IL_0074:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
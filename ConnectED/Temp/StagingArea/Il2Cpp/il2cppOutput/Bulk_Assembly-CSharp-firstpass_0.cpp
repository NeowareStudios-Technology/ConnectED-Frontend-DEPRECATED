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

template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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

// NativeGallery/MediaPickCallback
struct MediaPickCallback_t2468098299;
// NativeGallery/MediaPickMultipleCallback
struct MediaPickMultipleCallback_t2483155519;
// NativeGallery/MediaSaveCallback
struct MediaSaveCallback_t1711154875;
// NativeGalleryNamespace.NGMediaReceiveCallbackAndroid
struct NGMediaReceiveCallbackAndroid_t379387538;
// NativeGalleryNamespace.NGPermissionCallbackAndroid
struct NGPermissionCallbackAndroid_t270292349;
// System.ArgumentException
struct ArgumentException_t132251570;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Byte
struct Byte_t1134296376;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Double
struct Double_t594665363;
// System.Exception
struct Exception_t;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.IO.DirectoryInfo
struct DirectoryInfo_t35957480;
// System.IO.FileNotFoundException
struct FileNotFoundException_t225391025;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t2342208608;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.UInt16
struct UInt16_t2177724958;
// System.Void
struct Void_t1185182177;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_t32045322;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t4131667876;
// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_t2835824643;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t3225273728;
// UnityEngine.Object
struct Object_t631007953;
// UnityEngine.Texture2D
struct Texture2D_t3840446185;

extern RuntimeClass* AndroidJavaClass_t32045322_il2cpp_TypeInfo_var;
extern RuntimeClass* AndroidJavaProxy_t2835824643_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentException_t132251570_il2cpp_TypeInfo_var;
extern RuntimeClass* Boolean_t97287965_il2cpp_TypeInfo_var;
extern RuntimeClass* CharU5BU5D_t3528271667_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
extern RuntimeClass* FileNotFoundException_t225391025_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern RuntimeClass* NGMediaReceiveCallbackAndroid_t379387538_il2cpp_TypeInfo_var;
extern RuntimeClass* NGPermissionCallbackAndroid_t270292349_il2cpp_TypeInfo_var;
extern RuntimeClass* NativeGallery_t2808515514_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern RuntimeClass* Path_t1605229823_il2cpp_TypeInfo_var;
extern RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
extern RuntimeClass* StringU5BU5D_t1281789340_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Texture2D_t3840446185_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1041934514;
extern String_t* _stringLiteral1045150428;
extern String_t* _stringLiteral1089377795;
extern String_t* _stringLiteral1140819868;
extern String_t* _stringLiteral1212739322;
extern String_t* _stringLiteral1377815833;
extern String_t* _stringLiteral1392880498;
extern String_t* _stringLiteral1685319404;
extern String_t* _stringLiteral1732096641;
extern String_t* _stringLiteral1791034210;
extern String_t* _stringLiteral1929714747;
extern String_t* _stringLiteral1981470027;
extern String_t* _stringLiteral2045074213;
extern String_t* _stringLiteral2063196619;
extern String_t* _stringLiteral2149247999;
extern String_t* _stringLiteral2308311817;
extern String_t* _stringLiteral2410385622;
extern String_t* _stringLiteral2508466260;
extern String_t* _stringLiteral2541873353;
extern String_t* _stringLiteral2755812117;
extern String_t* _stringLiteral2860068956;
extern String_t* _stringLiteral2869855759;
extern String_t* _stringLiteral3452315504;
extern String_t* _stringLiteral3464665864;
extern String_t* _stringLiteral3595539794;
extern String_t* _stringLiteral374804532;
extern String_t* _stringLiteral3951825263;
extern String_t* _stringLiteral3988015567;
extern String_t* _stringLiteral4074557623;
extern String_t* _stringLiteral4123781296;
extern String_t* _stringLiteral4146698754;
extern String_t* _stringLiteral563961164;
extern String_t* _stringLiteral628085470;
extern String_t* _stringLiteral961731482;
extern const RuntimeMethod* AndroidJavaObject_CallStatic_TisBoolean_t97287965_m3361755856_RuntimeMethod_var;
extern const RuntimeMethod* AndroidJavaObject_CallStatic_TisInt32_t2950945753_m1426675528_RuntimeMethod_var;
extern const RuntimeMethod* AndroidJavaObject_CallStatic_TisString_t_m3599693027_RuntimeMethod_var;
extern const RuntimeMethod* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t4131667876_m1414442298_RuntimeMethod_var;
extern const RuntimeMethod* NativeGallery_GetImageProperties_m3966117691_RuntimeMethod_var;
extern const RuntimeMethod* NativeGallery_GetVideoProperties_m2359809206_RuntimeMethod_var;
extern const RuntimeMethod* NativeGallery_LoadImageAtPath_m3208821149_RuntimeMethod_var;
extern const RuntimeMethod* NativeGallery_SaveImageToGallery_m1342837694_RuntimeMethod_var;
extern const RuntimeMethod* NativeGallery_SaveToGallery_m3366416885_RuntimeMethod_var;
extern const RuntimeMethod* NativeGallery_SaveToGallery_m4000209401_RuntimeMethod_var;
extern const uint32_t NGMediaReceiveCallbackAndroid_OnMultipleMediaReceived_m318794684_MetadataUsageId;
extern const uint32_t NGMediaReceiveCallbackAndroid__ctor_m3579569150_MetadataUsageId;
extern const uint32_t NGPermissionCallbackAndroid__ctor_m1136313408_MetadataUsageId;
extern const uint32_t NativeGallery_CanSelectMultipleFilesFromGallery_m1434233298_MetadataUsageId;
extern const uint32_t NativeGallery_CheckPermission_m1786438771_MetadataUsageId;
extern const uint32_t NativeGallery_GetImageFromGallery_m775556130_MetadataUsageId;
extern const uint32_t NativeGallery_GetImageProperties_m3966117691_MetadataUsageId;
extern const uint32_t NativeGallery_GetImagesFromGallery_m3043034140_MetadataUsageId;
extern const uint32_t NativeGallery_GetMediaFromGallery_m2807044920_MetadataUsageId;
extern const uint32_t NativeGallery_GetMultipleMediaFromGallery_m1977049241_MetadataUsageId;
extern const uint32_t NativeGallery_GetSavePath_m938747003_MetadataUsageId;
extern const uint32_t NativeGallery_GetVideoFromGallery_m3000217725_MetadataUsageId;
extern const uint32_t NativeGallery_GetVideoProperties_m2359809206_MetadataUsageId;
extern const uint32_t NativeGallery_GetVideosFromGallery_m134385912_MetadataUsageId;
extern const uint32_t NativeGallery_LoadImageAtPath_m3208821149_MetadataUsageId;
extern const uint32_t NativeGallery_OpenSettings_m2073715281_MetadataUsageId;
extern const uint32_t NativeGallery_RequestPermission_m3085250992_MetadataUsageId;
extern const uint32_t NativeGallery_SaveImageToGallery_m1342837694_MetadataUsageId;
extern const uint32_t NativeGallery_SaveImageToGallery_m2353988206_MetadataUsageId;
extern const uint32_t NativeGallery_SaveImageToGallery_m3348418455_MetadataUsageId;
extern const uint32_t NativeGallery_SaveToGalleryInternal_m2106641_MetadataUsageId;
extern const uint32_t NativeGallery_SaveToGallery_m3366416885_MetadataUsageId;
extern const uint32_t NativeGallery_SaveToGallery_m4000209401_MetadataUsageId;
extern const uint32_t NativeGallery_SaveVideoToGallery_m2509233189_MetadataUsageId;
extern const uint32_t NativeGallery_SaveVideoToGallery_m3473076284_MetadataUsageId;
extern const uint32_t NativeGallery_get_AJC_m2581125024_MetadataUsageId;
extern const uint32_t NativeGallery_get_Context_m328758169_MetadataUsageId;
extern const uint32_t NativeGallery_get_TemporaryImagePath_m1358311393_MetadataUsageId;

struct ByteU5BU5D_t4116647657;
struct CharU5BU5D_t3528271667;
struct ObjectU5BU5D_t2843939325;
struct StringU5BU5D_t1281789340;


#ifndef U3CMODULEU3E_T692745554_H
#define U3CMODULEU3E_T692745554_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745554 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745554_H
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
#ifndef NATIVEGALLERY_T2808515514_H
#define NATIVEGALLERY_T2808515514_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NativeGallery
struct  NativeGallery_t2808515514  : public RuntimeObject
{
public:

public:
};

struct NativeGallery_t2808515514_StaticFields
{
public:
	// UnityEngine.AndroidJavaClass NativeGallery::m_ajc
	AndroidJavaClass_t32045322 * ___m_ajc_0;
	// UnityEngine.AndroidJavaObject NativeGallery::m_context
	AndroidJavaObject_t4131667876 * ___m_context_1;
	// System.String NativeGallery::m_temporaryImagePath
	String_t* ___m_temporaryImagePath_2;

public:
	inline static int32_t get_offset_of_m_ajc_0() { return static_cast<int32_t>(offsetof(NativeGallery_t2808515514_StaticFields, ___m_ajc_0)); }
	inline AndroidJavaClass_t32045322 * get_m_ajc_0() const { return ___m_ajc_0; }
	inline AndroidJavaClass_t32045322 ** get_address_of_m_ajc_0() { return &___m_ajc_0; }
	inline void set_m_ajc_0(AndroidJavaClass_t32045322 * value)
	{
		___m_ajc_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ajc_0), value);
	}

	inline static int32_t get_offset_of_m_context_1() { return static_cast<int32_t>(offsetof(NativeGallery_t2808515514_StaticFields, ___m_context_1)); }
	inline AndroidJavaObject_t4131667876 * get_m_context_1() const { return ___m_context_1; }
	inline AndroidJavaObject_t4131667876 ** get_address_of_m_context_1() { return &___m_context_1; }
	inline void set_m_context_1(AndroidJavaObject_t4131667876 * value)
	{
		___m_context_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_context_1), value);
	}

	inline static int32_t get_offset_of_m_temporaryImagePath_2() { return static_cast<int32_t>(offsetof(NativeGallery_t2808515514_StaticFields, ___m_temporaryImagePath_2)); }
	inline String_t* get_m_temporaryImagePath_2() const { return ___m_temporaryImagePath_2; }
	inline String_t** get_address_of_m_temporaryImagePath_2() { return &___m_temporaryImagePath_2; }
	inline void set_m_temporaryImagePath_2(String_t* value)
	{
		___m_temporaryImagePath_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_temporaryImagePath_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVEGALLERY_T2808515514_H
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
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t4013366056* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t4013366056* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t4013366056* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t, ___inner_exception_1)); }
	inline Exception_t * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T_H
#ifndef MARSHALBYREFOBJECT_T2760389100_H
#define MARSHALBYREFOBJECT_T2760389100_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MarshalByRefObject
struct  MarshalByRefObject_t2760389100  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.ServerIdentity System.MarshalByRefObject::_identity
	ServerIdentity_t2342208608 * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_t2760389100, ____identity_0)); }
	inline ServerIdentity_t2342208608 * get__identity_0() const { return ____identity_0; }
	inline ServerIdentity_t2342208608 ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(ServerIdentity_t2342208608 * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((&____identity_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHALBYREFOBJECT_T2760389100_H
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
#ifndef ANDROIDJAVAOBJECT_T4131667876_H
#define ANDROIDJAVAOBJECT_T4131667876_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AndroidJavaObject
struct  AndroidJavaObject_t4131667876  : public RuntimeObject
{
public:
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t3225273728 * ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t3225273728 * ___m_jclass_2;

public:
	inline static int32_t get_offset_of_m_jobject_1() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t4131667876, ___m_jobject_1)); }
	inline GlobalJavaObjectRef_t3225273728 * get_m_jobject_1() const { return ___m_jobject_1; }
	inline GlobalJavaObjectRef_t3225273728 ** get_address_of_m_jobject_1() { return &___m_jobject_1; }
	inline void set_m_jobject_1(GlobalJavaObjectRef_t3225273728 * value)
	{
		___m_jobject_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_jobject_1), value);
	}

	inline static int32_t get_offset_of_m_jclass_2() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t4131667876, ___m_jclass_2)); }
	inline GlobalJavaObjectRef_t3225273728 * get_m_jclass_2() const { return ___m_jclass_2; }
	inline GlobalJavaObjectRef_t3225273728 ** get_address_of_m_jclass_2() { return &___m_jclass_2; }
	inline void set_m_jclass_2(GlobalJavaObjectRef_t3225273728 * value)
	{
		___m_jclass_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_jclass_2), value);
	}
};

struct AndroidJavaObject_t4131667876_StaticFields
{
public:
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;
	// UnityEngine.AndroidJavaClass UnityEngine.AndroidJavaObject::s_JavaLangClass
	AndroidJavaClass_t32045322 * ___s_JavaLangClass_3;

public:
	inline static int32_t get_offset_of_enableDebugPrints_0() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t4131667876_StaticFields, ___enableDebugPrints_0)); }
	inline bool get_enableDebugPrints_0() const { return ___enableDebugPrints_0; }
	inline bool* get_address_of_enableDebugPrints_0() { return &___enableDebugPrints_0; }
	inline void set_enableDebugPrints_0(bool value)
	{
		___enableDebugPrints_0 = value;
	}

	inline static int32_t get_offset_of_s_JavaLangClass_3() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t4131667876_StaticFields, ___s_JavaLangClass_3)); }
	inline AndroidJavaClass_t32045322 * get_s_JavaLangClass_3() const { return ___s_JavaLangClass_3; }
	inline AndroidJavaClass_t32045322 ** get_address_of_s_JavaLangClass_3() { return &___s_JavaLangClass_3; }
	inline void set_s_JavaLangClass_3(AndroidJavaClass_t32045322 * value)
	{
		___s_JavaLangClass_3 = value;
		Il2CppCodeGenWriteBarrier((&___s_JavaLangClass_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANDROIDJAVAOBJECT_T4131667876_H
#ifndef VIDEOPROPERTIES_T196727450_H
#define VIDEOPROPERTIES_T196727450_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NativeGallery/VideoProperties
struct  VideoProperties_t196727450 
{
public:
	// System.Int32 NativeGallery/VideoProperties::width
	int32_t ___width_0;
	// System.Int32 NativeGallery/VideoProperties::height
	int32_t ___height_1;
	// System.Int64 NativeGallery/VideoProperties::duration
	int64_t ___duration_2;
	// System.Single NativeGallery/VideoProperties::rotation
	float ___rotation_3;

public:
	inline static int32_t get_offset_of_width_0() { return static_cast<int32_t>(offsetof(VideoProperties_t196727450, ___width_0)); }
	inline int32_t get_width_0() const { return ___width_0; }
	inline int32_t* get_address_of_width_0() { return &___width_0; }
	inline void set_width_0(int32_t value)
	{
		___width_0 = value;
	}

	inline static int32_t get_offset_of_height_1() { return static_cast<int32_t>(offsetof(VideoProperties_t196727450, ___height_1)); }
	inline int32_t get_height_1() const { return ___height_1; }
	inline int32_t* get_address_of_height_1() { return &___height_1; }
	inline void set_height_1(int32_t value)
	{
		___height_1 = value;
	}

	inline static int32_t get_offset_of_duration_2() { return static_cast<int32_t>(offsetof(VideoProperties_t196727450, ___duration_2)); }
	inline int64_t get_duration_2() const { return ___duration_2; }
	inline int64_t* get_address_of_duration_2() { return &___duration_2; }
	inline void set_duration_2(int64_t value)
	{
		___duration_2 = value;
	}

	inline static int32_t get_offset_of_rotation_3() { return static_cast<int32_t>(offsetof(VideoProperties_t196727450, ___rotation_3)); }
	inline float get_rotation_3() const { return ___rotation_3; }
	inline float* get_address_of_rotation_3() { return &___rotation_3; }
	inline void set_rotation_3(float value)
	{
		___rotation_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIDEOPROPERTIES_T196727450_H
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
#ifndef CHAR_T3634460470_H
#define CHAR_T3634460470_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Char
struct  Char_t3634460470 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Char_t3634460470, ___m_value_2)); }
	inline Il2CppChar get_m_value_2() const { return ___m_value_2; }
	inline Il2CppChar* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(Il2CppChar value)
	{
		___m_value_2 = value;
	}
};

struct Char_t3634460470_StaticFields
{
public:
	// System.Byte* System.Char::category_data
	uint8_t* ___category_data_3;
	// System.Byte* System.Char::numeric_data
	uint8_t* ___numeric_data_4;
	// System.Double* System.Char::numeric_data_values
	double* ___numeric_data_values_5;
	// System.UInt16* System.Char::to_lower_data_low
	uint16_t* ___to_lower_data_low_6;
	// System.UInt16* System.Char::to_lower_data_high
	uint16_t* ___to_lower_data_high_7;
	// System.UInt16* System.Char::to_upper_data_low
	uint16_t* ___to_upper_data_low_8;
	// System.UInt16* System.Char::to_upper_data_high
	uint16_t* ___to_upper_data_high_9;

public:
	inline static int32_t get_offset_of_category_data_3() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___category_data_3)); }
	inline uint8_t* get_category_data_3() const { return ___category_data_3; }
	inline uint8_t** get_address_of_category_data_3() { return &___category_data_3; }
	inline void set_category_data_3(uint8_t* value)
	{
		___category_data_3 = value;
	}

	inline static int32_t get_offset_of_numeric_data_4() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___numeric_data_4)); }
	inline uint8_t* get_numeric_data_4() const { return ___numeric_data_4; }
	inline uint8_t** get_address_of_numeric_data_4() { return &___numeric_data_4; }
	inline void set_numeric_data_4(uint8_t* value)
	{
		___numeric_data_4 = value;
	}

	inline static int32_t get_offset_of_numeric_data_values_5() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___numeric_data_values_5)); }
	inline double* get_numeric_data_values_5() const { return ___numeric_data_values_5; }
	inline double** get_address_of_numeric_data_values_5() { return &___numeric_data_values_5; }
	inline void set_numeric_data_values_5(double* value)
	{
		___numeric_data_values_5 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_low_6() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_lower_data_low_6)); }
	inline uint16_t* get_to_lower_data_low_6() const { return ___to_lower_data_low_6; }
	inline uint16_t** get_address_of_to_lower_data_low_6() { return &___to_lower_data_low_6; }
	inline void set_to_lower_data_low_6(uint16_t* value)
	{
		___to_lower_data_low_6 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_high_7() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_lower_data_high_7)); }
	inline uint16_t* get_to_lower_data_high_7() const { return ___to_lower_data_high_7; }
	inline uint16_t** get_address_of_to_lower_data_high_7() { return &___to_lower_data_high_7; }
	inline void set_to_lower_data_high_7(uint16_t* value)
	{
		___to_lower_data_high_7 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_low_8() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_upper_data_low_8)); }
	inline uint16_t* get_to_upper_data_low_8() const { return ___to_upper_data_low_8; }
	inline uint16_t** get_address_of_to_upper_data_low_8() { return &___to_upper_data_low_8; }
	inline void set_to_upper_data_low_8(uint16_t* value)
	{
		___to_upper_data_low_8 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_high_9() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_upper_data_high_9)); }
	inline uint16_t* get_to_upper_data_high_9() const { return ___to_upper_data_high_9; }
	inline uint16_t** get_address_of_to_upper_data_high_9() { return &___to_upper_data_high_9; }
	inline void set_to_upper_data_high_9(uint16_t* value)
	{
		___to_upper_data_high_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHAR_T3634460470_H
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
#ifndef INT64_T3736567304_H
#define INT64_T3736567304_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int64
struct  Int64_t3736567304 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int64_t3736567304, ___m_value_2)); }
	inline int64_t get_m_value_2() const { return ___m_value_2; }
	inline int64_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int64_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64_T3736567304_H
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
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef SYSTEMEXCEPTION_T176217640_H
#define SYSTEMEXCEPTION_T176217640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t176217640  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T176217640_H
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
#ifndef ANDROIDJAVACLASS_T32045322_H
#define ANDROIDJAVACLASS_T32045322_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AndroidJavaClass
struct  AndroidJavaClass_t32045322  : public AndroidJavaObject_t4131667876
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANDROIDJAVACLASS_T32045322_H
#ifndef IMAGEORIENTATION_T1544028654_H
#define IMAGEORIENTATION_T1544028654_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NativeGallery/ImageOrientation
struct  ImageOrientation_t1544028654 
{
public:
	// System.Int32 NativeGallery/ImageOrientation::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ImageOrientation_t1544028654, ___value___1)); }
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
#endif // IMAGEORIENTATION_T1544028654_H
#ifndef PERMISSION_T4107725739_H
#define PERMISSION_T4107725739_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NativeGallery/Permission
struct  Permission_t4107725739 
{
public:
	// System.Int32 NativeGallery/Permission::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Permission_t4107725739, ___value___1)); }
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
#endif // PERMISSION_T4107725739_H
#ifndef ARGUMENTEXCEPTION_T132251570_H
#define ARGUMENTEXCEPTION_T132251570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_t132251570  : public SystemException_t176217640
{
public:
	// System.String System.ArgumentException::param_name
	String_t* ___param_name_12;

public:
	inline static int32_t get_offset_of_param_name_12() { return static_cast<int32_t>(offsetof(ArgumentException_t132251570, ___param_name_12)); }
	inline String_t* get_param_name_12() const { return ___param_name_12; }
	inline String_t** get_address_of_param_name_12() { return &___param_name_12; }
	inline void set_param_name_12(String_t* value)
	{
		___param_name_12 = value;
		Il2CppCodeGenWriteBarrier((&___param_name_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTEXCEPTION_T132251570_H
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
#ifndef FILEATTRIBUTES_T3417205536_H
#define FILEATTRIBUTES_T3417205536_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileAttributes
struct  FileAttributes_t3417205536 
{
public:
	// System.Int32 System.IO.FileAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FileAttributes_t3417205536, ___value___1)); }
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
#endif // FILEATTRIBUTES_T3417205536_H
#ifndef IOEXCEPTION_T4088381929_H
#define IOEXCEPTION_T4088381929_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.IOException
struct  IOException_t4088381929  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IOEXCEPTION_T4088381929_H
#ifndef ANDROIDJAVAPROXY_T2835824643_H
#define ANDROIDJAVAPROXY_T2835824643_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AndroidJavaProxy
struct  AndroidJavaProxy_t2835824643  : public RuntimeObject
{
public:
	// UnityEngine.AndroidJavaClass UnityEngine.AndroidJavaProxy::javaInterface
	AndroidJavaClass_t32045322 * ___javaInterface_0;
	// UnityEngine.AndroidJavaObject UnityEngine.AndroidJavaProxy::proxyObject
	AndroidJavaObject_t4131667876 * ___proxyObject_1;

public:
	inline static int32_t get_offset_of_javaInterface_0() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_t2835824643, ___javaInterface_0)); }
	inline AndroidJavaClass_t32045322 * get_javaInterface_0() const { return ___javaInterface_0; }
	inline AndroidJavaClass_t32045322 ** get_address_of_javaInterface_0() { return &___javaInterface_0; }
	inline void set_javaInterface_0(AndroidJavaClass_t32045322 * value)
	{
		___javaInterface_0 = value;
		Il2CppCodeGenWriteBarrier((&___javaInterface_0), value);
	}

	inline static int32_t get_offset_of_proxyObject_1() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_t2835824643, ___proxyObject_1)); }
	inline AndroidJavaObject_t4131667876 * get_proxyObject_1() const { return ___proxyObject_1; }
	inline AndroidJavaObject_t4131667876 ** get_address_of_proxyObject_1() { return &___proxyObject_1; }
	inline void set_proxyObject_1(AndroidJavaObject_t4131667876 * value)
	{
		___proxyObject_1 = value;
		Il2CppCodeGenWriteBarrier((&___proxyObject_1), value);
	}
};

struct AndroidJavaProxy_t2835824643_StaticFields
{
public:
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaProxy::s_JavaLangSystemClass
	GlobalJavaObjectRef_t3225273728 * ___s_JavaLangSystemClass_2;
	// System.IntPtr UnityEngine.AndroidJavaProxy::s_HashCodeMethodID
	intptr_t ___s_HashCodeMethodID_3;

public:
	inline static int32_t get_offset_of_s_JavaLangSystemClass_2() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_t2835824643_StaticFields, ___s_JavaLangSystemClass_2)); }
	inline GlobalJavaObjectRef_t3225273728 * get_s_JavaLangSystemClass_2() const { return ___s_JavaLangSystemClass_2; }
	inline GlobalJavaObjectRef_t3225273728 ** get_address_of_s_JavaLangSystemClass_2() { return &___s_JavaLangSystemClass_2; }
	inline void set_s_JavaLangSystemClass_2(GlobalJavaObjectRef_t3225273728 * value)
	{
		___s_JavaLangSystemClass_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_JavaLangSystemClass_2), value);
	}

	inline static int32_t get_offset_of_s_HashCodeMethodID_3() { return static_cast<int32_t>(offsetof(AndroidJavaProxy_t2835824643_StaticFields, ___s_HashCodeMethodID_3)); }
	inline intptr_t get_s_HashCodeMethodID_3() const { return ___s_HashCodeMethodID_3; }
	inline intptr_t* get_address_of_s_HashCodeMethodID_3() { return &___s_HashCodeMethodID_3; }
	inline void set_s_HashCodeMethodID_3(intptr_t value)
	{
		___s_HashCodeMethodID_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANDROIDJAVAPROXY_T2835824643_H
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
#ifndef IMAGEPROPERTIES_T914339828_H
#define IMAGEPROPERTIES_T914339828_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NativeGallery/ImageProperties
struct  ImageProperties_t914339828 
{
public:
	// System.Int32 NativeGallery/ImageProperties::width
	int32_t ___width_0;
	// System.Int32 NativeGallery/ImageProperties::height
	int32_t ___height_1;
	// System.String NativeGallery/ImageProperties::mimeType
	String_t* ___mimeType_2;
	// NativeGallery/ImageOrientation NativeGallery/ImageProperties::orientation
	int32_t ___orientation_3;

public:
	inline static int32_t get_offset_of_width_0() { return static_cast<int32_t>(offsetof(ImageProperties_t914339828, ___width_0)); }
	inline int32_t get_width_0() const { return ___width_0; }
	inline int32_t* get_address_of_width_0() { return &___width_0; }
	inline void set_width_0(int32_t value)
	{
		___width_0 = value;
	}

	inline static int32_t get_offset_of_height_1() { return static_cast<int32_t>(offsetof(ImageProperties_t914339828, ___height_1)); }
	inline int32_t get_height_1() const { return ___height_1; }
	inline int32_t* get_address_of_height_1() { return &___height_1; }
	inline void set_height_1(int32_t value)
	{
		___height_1 = value;
	}

	inline static int32_t get_offset_of_mimeType_2() { return static_cast<int32_t>(offsetof(ImageProperties_t914339828, ___mimeType_2)); }
	inline String_t* get_mimeType_2() const { return ___mimeType_2; }
	inline String_t** get_address_of_mimeType_2() { return &___mimeType_2; }
	inline void set_mimeType_2(String_t* value)
	{
		___mimeType_2 = value;
		Il2CppCodeGenWriteBarrier((&___mimeType_2), value);
	}

	inline static int32_t get_offset_of_orientation_3() { return static_cast<int32_t>(offsetof(ImageProperties_t914339828, ___orientation_3)); }
	inline int32_t get_orientation_3() const { return ___orientation_3; }
	inline int32_t* get_address_of_orientation_3() { return &___orientation_3; }
	inline void set_orientation_3(int32_t value)
	{
		___orientation_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of NativeGallery/ImageProperties
struct ImageProperties_t914339828_marshaled_pinvoke
{
	int32_t ___width_0;
	int32_t ___height_1;
	char* ___mimeType_2;
	int32_t ___orientation_3;
};
// Native definition for COM marshalling of NativeGallery/ImageProperties
struct ImageProperties_t914339828_marshaled_com
{
	int32_t ___width_0;
	int32_t ___height_1;
	Il2CppChar* ___mimeType_2;
	int32_t ___orientation_3;
};
#endif // IMAGEPROPERTIES_T914339828_H
#ifndef NGMEDIARECEIVECALLBACKANDROID_T379387538_H
#define NGMEDIARECEIVECALLBACKANDROID_T379387538_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NativeGalleryNamespace.NGMediaReceiveCallbackAndroid
struct  NGMediaReceiveCallbackAndroid_t379387538  : public AndroidJavaProxy_t2835824643
{
public:
	// System.Object NativeGalleryNamespace.NGMediaReceiveCallbackAndroid::threadLock
	RuntimeObject * ___threadLock_4;
	// System.String NativeGalleryNamespace.NGMediaReceiveCallbackAndroid::<Path>k__BackingField
	String_t* ___U3CPathU3Ek__BackingField_5;
	// System.String[] NativeGalleryNamespace.NGMediaReceiveCallbackAndroid::<Paths>k__BackingField
	StringU5BU5D_t1281789340* ___U3CPathsU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_threadLock_4() { return static_cast<int32_t>(offsetof(NGMediaReceiveCallbackAndroid_t379387538, ___threadLock_4)); }
	inline RuntimeObject * get_threadLock_4() const { return ___threadLock_4; }
	inline RuntimeObject ** get_address_of_threadLock_4() { return &___threadLock_4; }
	inline void set_threadLock_4(RuntimeObject * value)
	{
		___threadLock_4 = value;
		Il2CppCodeGenWriteBarrier((&___threadLock_4), value);
	}

	inline static int32_t get_offset_of_U3CPathU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(NGMediaReceiveCallbackAndroid_t379387538, ___U3CPathU3Ek__BackingField_5)); }
	inline String_t* get_U3CPathU3Ek__BackingField_5() const { return ___U3CPathU3Ek__BackingField_5; }
	inline String_t** get_address_of_U3CPathU3Ek__BackingField_5() { return &___U3CPathU3Ek__BackingField_5; }
	inline void set_U3CPathU3Ek__BackingField_5(String_t* value)
	{
		___U3CPathU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CPathU3Ek__BackingField_5), value);
	}

	inline static int32_t get_offset_of_U3CPathsU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(NGMediaReceiveCallbackAndroid_t379387538, ___U3CPathsU3Ek__BackingField_6)); }
	inline StringU5BU5D_t1281789340* get_U3CPathsU3Ek__BackingField_6() const { return ___U3CPathsU3Ek__BackingField_6; }
	inline StringU5BU5D_t1281789340** get_address_of_U3CPathsU3Ek__BackingField_6() { return &___U3CPathsU3Ek__BackingField_6; }
	inline void set_U3CPathsU3Ek__BackingField_6(StringU5BU5D_t1281789340* value)
	{
		___U3CPathsU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CPathsU3Ek__BackingField_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NGMEDIARECEIVECALLBACKANDROID_T379387538_H
#ifndef NGPERMISSIONCALLBACKANDROID_T270292349_H
#define NGPERMISSIONCALLBACKANDROID_T270292349_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NativeGalleryNamespace.NGPermissionCallbackAndroid
struct  NGPermissionCallbackAndroid_t270292349  : public AndroidJavaProxy_t2835824643
{
public:
	// System.Object NativeGalleryNamespace.NGPermissionCallbackAndroid::threadLock
	RuntimeObject * ___threadLock_4;
	// System.Int32 NativeGalleryNamespace.NGPermissionCallbackAndroid::<Result>k__BackingField
	int32_t ___U3CResultU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_threadLock_4() { return static_cast<int32_t>(offsetof(NGPermissionCallbackAndroid_t270292349, ___threadLock_4)); }
	inline RuntimeObject * get_threadLock_4() const { return ___threadLock_4; }
	inline RuntimeObject ** get_address_of_threadLock_4() { return &___threadLock_4; }
	inline void set_threadLock_4(RuntimeObject * value)
	{
		___threadLock_4 = value;
		Il2CppCodeGenWriteBarrier((&___threadLock_4), value);
	}

	inline static int32_t get_offset_of_U3CResultU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(NGPermissionCallbackAndroid_t270292349, ___U3CResultU3Ek__BackingField_5)); }
	inline int32_t get_U3CResultU3Ek__BackingField_5() const { return ___U3CResultU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CResultU3Ek__BackingField_5() { return &___U3CResultU3Ek__BackingField_5; }
	inline void set_U3CResultU3Ek__BackingField_5(int32_t value)
	{
		___U3CResultU3Ek__BackingField_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NGPERMISSIONCALLBACKANDROID_T270292349_H
#ifndef FILENOTFOUNDEXCEPTION_T225391025_H
#define FILENOTFOUNDEXCEPTION_T225391025_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileNotFoundException
struct  FileNotFoundException_t225391025  : public IOException_t4088381929
{
public:
	// System.String System.IO.FileNotFoundException::fileName
	String_t* ___fileName_11;
	// System.String System.IO.FileNotFoundException::fusionLog
	String_t* ___fusionLog_12;

public:
	inline static int32_t get_offset_of_fileName_11() { return static_cast<int32_t>(offsetof(FileNotFoundException_t225391025, ___fileName_11)); }
	inline String_t* get_fileName_11() const { return ___fileName_11; }
	inline String_t** get_address_of_fileName_11() { return &___fileName_11; }
	inline void set_fileName_11(String_t* value)
	{
		___fileName_11 = value;
		Il2CppCodeGenWriteBarrier((&___fileName_11), value);
	}

	inline static int32_t get_offset_of_fusionLog_12() { return static_cast<int32_t>(offsetof(FileNotFoundException_t225391025, ___fusionLog_12)); }
	inline String_t* get_fusionLog_12() const { return ___fusionLog_12; }
	inline String_t** get_address_of_fusionLog_12() { return &___fusionLog_12; }
	inline void set_fusionLog_12(String_t* value)
	{
		___fusionLog_12 = value;
		Il2CppCodeGenWriteBarrier((&___fusionLog_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILENOTFOUNDEXCEPTION_T225391025_H
#ifndef MONOIOSTAT_T592533987_H
#define MONOIOSTAT_T592533987_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.MonoIOStat
struct  MonoIOStat_t592533987 
{
public:
	// System.String System.IO.MonoIOStat::Name
	String_t* ___Name_0;
	// System.IO.FileAttributes System.IO.MonoIOStat::Attributes
	int32_t ___Attributes_1;
	// System.Int64 System.IO.MonoIOStat::Length
	int64_t ___Length_2;
	// System.Int64 System.IO.MonoIOStat::CreationTime
	int64_t ___CreationTime_3;
	// System.Int64 System.IO.MonoIOStat::LastAccessTime
	int64_t ___LastAccessTime_4;
	// System.Int64 System.IO.MonoIOStat::LastWriteTime
	int64_t ___LastWriteTime_5;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(MonoIOStat_t592533987, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier((&___Name_0), value);
	}

	inline static int32_t get_offset_of_Attributes_1() { return static_cast<int32_t>(offsetof(MonoIOStat_t592533987, ___Attributes_1)); }
	inline int32_t get_Attributes_1() const { return ___Attributes_1; }
	inline int32_t* get_address_of_Attributes_1() { return &___Attributes_1; }
	inline void set_Attributes_1(int32_t value)
	{
		___Attributes_1 = value;
	}

	inline static int32_t get_offset_of_Length_2() { return static_cast<int32_t>(offsetof(MonoIOStat_t592533987, ___Length_2)); }
	inline int64_t get_Length_2() const { return ___Length_2; }
	inline int64_t* get_address_of_Length_2() { return &___Length_2; }
	inline void set_Length_2(int64_t value)
	{
		___Length_2 = value;
	}

	inline static int32_t get_offset_of_CreationTime_3() { return static_cast<int32_t>(offsetof(MonoIOStat_t592533987, ___CreationTime_3)); }
	inline int64_t get_CreationTime_3() const { return ___CreationTime_3; }
	inline int64_t* get_address_of_CreationTime_3() { return &___CreationTime_3; }
	inline void set_CreationTime_3(int64_t value)
	{
		___CreationTime_3 = value;
	}

	inline static int32_t get_offset_of_LastAccessTime_4() { return static_cast<int32_t>(offsetof(MonoIOStat_t592533987, ___LastAccessTime_4)); }
	inline int64_t get_LastAccessTime_4() const { return ___LastAccessTime_4; }
	inline int64_t* get_address_of_LastAccessTime_4() { return &___LastAccessTime_4; }
	inline void set_LastAccessTime_4(int64_t value)
	{
		___LastAccessTime_4 = value;
	}

	inline static int32_t get_offset_of_LastWriteTime_5() { return static_cast<int32_t>(offsetof(MonoIOStat_t592533987, ___LastWriteTime_5)); }
	inline int64_t get_LastWriteTime_5() const { return ___LastWriteTime_5; }
	inline int64_t* get_address_of_LastWriteTime_5() { return &___LastWriteTime_5; }
	inline void set_LastWriteTime_5(int64_t value)
	{
		___LastWriteTime_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.IO.MonoIOStat
struct MonoIOStat_t592533987_marshaled_pinvoke
{
	char* ___Name_0;
	int32_t ___Attributes_1;
	int64_t ___Length_2;
	int64_t ___CreationTime_3;
	int64_t ___LastAccessTime_4;
	int64_t ___LastWriteTime_5;
};
// Native definition for COM marshalling of System.IO.MonoIOStat
struct MonoIOStat_t592533987_marshaled_com
{
	Il2CppChar* ___Name_0;
	int32_t ___Attributes_1;
	int64_t ___Length_2;
	int64_t ___CreationTime_3;
	int64_t ___LastAccessTime_4;
	int64_t ___LastWriteTime_5;
};
#endif // MONOIOSTAT_T592533987_H
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
#ifndef MEDIAPICKCALLBACK_T2468098299_H
#define MEDIAPICKCALLBACK_T2468098299_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NativeGallery/MediaPickCallback
struct  MediaPickCallback_t2468098299  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEDIAPICKCALLBACK_T2468098299_H
#ifndef MEDIAPICKMULTIPLECALLBACK_T2483155519_H
#define MEDIAPICKMULTIPLECALLBACK_T2483155519_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NativeGallery/MediaPickMultipleCallback
struct  MediaPickMultipleCallback_t2483155519  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEDIAPICKMULTIPLECALLBACK_T2483155519_H
#ifndef MEDIASAVECALLBACK_T1711154875_H
#define MEDIASAVECALLBACK_T1711154875_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NativeGallery/MediaSaveCallback
struct  MediaSaveCallback_t1711154875  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEDIASAVECALLBACK_T1711154875_H
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
#ifndef FILESYSTEMINFO_T3745885336_H
#define FILESYSTEMINFO_T3745885336_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileSystemInfo
struct  FileSystemInfo_t3745885336  : public MarshalByRefObject_t2760389100
{
public:
	// System.String System.IO.FileSystemInfo::FullPath
	String_t* ___FullPath_1;
	// System.String System.IO.FileSystemInfo::OriginalPath
	String_t* ___OriginalPath_2;
	// System.IO.MonoIOStat System.IO.FileSystemInfo::stat
	MonoIOStat_t592533987  ___stat_3;
	// System.Boolean System.IO.FileSystemInfo::valid
	bool ___valid_4;

public:
	inline static int32_t get_offset_of_FullPath_1() { return static_cast<int32_t>(offsetof(FileSystemInfo_t3745885336, ___FullPath_1)); }
	inline String_t* get_FullPath_1() const { return ___FullPath_1; }
	inline String_t** get_address_of_FullPath_1() { return &___FullPath_1; }
	inline void set_FullPath_1(String_t* value)
	{
		___FullPath_1 = value;
		Il2CppCodeGenWriteBarrier((&___FullPath_1), value);
	}

	inline static int32_t get_offset_of_OriginalPath_2() { return static_cast<int32_t>(offsetof(FileSystemInfo_t3745885336, ___OriginalPath_2)); }
	inline String_t* get_OriginalPath_2() const { return ___OriginalPath_2; }
	inline String_t** get_address_of_OriginalPath_2() { return &___OriginalPath_2; }
	inline void set_OriginalPath_2(String_t* value)
	{
		___OriginalPath_2 = value;
		Il2CppCodeGenWriteBarrier((&___OriginalPath_2), value);
	}

	inline static int32_t get_offset_of_stat_3() { return static_cast<int32_t>(offsetof(FileSystemInfo_t3745885336, ___stat_3)); }
	inline MonoIOStat_t592533987  get_stat_3() const { return ___stat_3; }
	inline MonoIOStat_t592533987 * get_address_of_stat_3() { return &___stat_3; }
	inline void set_stat_3(MonoIOStat_t592533987  value)
	{
		___stat_3 = value;
	}

	inline static int32_t get_offset_of_valid_4() { return static_cast<int32_t>(offsetof(FileSystemInfo_t3745885336, ___valid_4)); }
	inline bool get_valid_4() const { return ___valid_4; }
	inline bool* get_address_of_valid_4() { return &___valid_4; }
	inline void set_valid_4(bool value)
	{
		___valid_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILESYSTEMINFO_T3745885336_H
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
#ifndef DIRECTORYINFO_T35957480_H
#define DIRECTORYINFO_T35957480_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.DirectoryInfo
struct  DirectoryInfo_t35957480  : public FileSystemInfo_t3745885336
{
public:
	// System.String System.IO.DirectoryInfo::current
	String_t* ___current_5;
	// System.String System.IO.DirectoryInfo::parent
	String_t* ___parent_6;

public:
	inline static int32_t get_offset_of_current_5() { return static_cast<int32_t>(offsetof(DirectoryInfo_t35957480, ___current_5)); }
	inline String_t* get_current_5() const { return ___current_5; }
	inline String_t** get_address_of_current_5() { return &___current_5; }
	inline void set_current_5(String_t* value)
	{
		___current_5 = value;
		Il2CppCodeGenWriteBarrier((&___current_5), value);
	}

	inline static int32_t get_offset_of_parent_6() { return static_cast<int32_t>(offsetof(DirectoryInfo_t35957480, ___parent_6)); }
	inline String_t* get_parent_6() const { return ___parent_6; }
	inline String_t** get_address_of_parent_6() { return &___parent_6; }
	inline void set_parent_6(String_t* value)
	{
		___parent_6 = value;
		Il2CppCodeGenWriteBarrier((&___parent_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DIRECTORYINFO_T35957480_H
// System.Object[]
struct ObjectU5BU5D_t2843939325  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
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
// System.String[]
struct StringU5BU5D_t1281789340  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Char[]
struct CharU5BU5D_t3528271667  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};


// !!0 UnityEngine.AndroidJavaObject::GetStatic<System.Object>(System.String)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * AndroidJavaObject_GetStatic_TisRuntimeObject_m3787108634_gshared (AndroidJavaObject_t4131667876 * __this, String_t* p0, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::CallStatic<System.Int32>(System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR int32_t AndroidJavaObject_CallStatic_TisInt32_t2950945753_m1426675528_gshared (AndroidJavaObject_t4131667876 * __this, String_t* p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::CallStatic<System.Boolean>(System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR bool AndroidJavaObject_CallStatic_TisBoolean_t97287965_m3361755856_gshared (AndroidJavaObject_t4131667876 * __this, String_t* p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::CallStatic<System.Object>(System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * AndroidJavaObject_CallStatic_TisRuntimeObject_m1663918964_gshared (AndroidJavaObject_t4131667876 * __this, String_t* p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method);

// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_m366853020 (AndroidJavaClass_t32045322 * __this, String_t* p0, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::GetStatic<UnityEngine.AndroidJavaObject>(System.String)
inline AndroidJavaObject_t4131667876 * AndroidJavaObject_GetStatic_TisAndroidJavaObject_t4131667876_m1414442298 (AndroidJavaObject_t4131667876 * __this, String_t* p0, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t4131667876 * (*) (AndroidJavaObject_t4131667876 *, String_t*, const RuntimeMethod*))AndroidJavaObject_GetStatic_TisRuntimeObject_m3787108634_gshared)(__this, p0, method);
}
// System.String UnityEngine.Application::get_temporaryCachePath()
extern "C" IL2CPP_METHOD_ATTR String_t* Application_get_temporaryCachePath_m1214546342 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String System.IO.Path::Combine(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* Path_Combine_m3389272516 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.IO.DirectoryInfo System.IO.Directory::CreateDirectory(System.String)
extern "C" IL2CPP_METHOD_ATTR DirectoryInfo_t35957480 * Directory_CreateDirectory_m751642867 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// UnityEngine.AndroidJavaClass NativeGallery::get_AJC()
extern "C" IL2CPP_METHOD_ATTR AndroidJavaClass_t32045322 * NativeGallery_get_AJC_m2581125024 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.AndroidJavaObject NativeGallery::get_Context()
extern "C" IL2CPP_METHOD_ATTR AndroidJavaObject_t4131667876 * NativeGallery_get_Context_m328758169 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::CallStatic<System.Int32>(System.String,System.Object[])
inline int32_t AndroidJavaObject_CallStatic_TisInt32_t2950945753_m1426675528 (AndroidJavaObject_t4131667876 * __this, String_t* p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AndroidJavaObject_t4131667876 *, String_t*, ObjectU5BU5D_t2843939325*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisInt32_t2950945753_m1426675528_gshared)(__this, p0, p1, method);
}
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m1299643124 (RuntimeObject * __this /* static, unused */, String_t* p0, int32_t p1, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Monitor_Enter_m2249409497 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void NativeGalleryNamespace.NGPermissionCallbackAndroid::.ctor(System.Object)
extern "C" IL2CPP_METHOD_ATTR void NGPermissionCallbackAndroid__ctor_m1136313408 (NGPermissionCallbackAndroid_t270292349 * __this, RuntimeObject * ___threadLock0, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaObject::CallStatic(System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR void AndroidJavaObject_CallStatic_m2922144688 (AndroidJavaObject_t4131667876 * __this, String_t* p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method);
// System.Int32 NativeGalleryNamespace.NGPermissionCallbackAndroid::get_Result()
extern "C" IL2CPP_METHOD_ATTR int32_t NGPermissionCallbackAndroid_get_Result_m4141800061 (NGPermissionCallbackAndroid_t270292349 * __this, const RuntimeMethod* method);
// System.Boolean System.Threading.Monitor::Wait(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool Monitor_Wait_m2644425468 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_m2842000469 (RuntimeObject * __this /* static, unused */, String_t* p0, int32_t p1, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::Save()
extern "C" IL2CPP_METHOD_ATTR void PlayerPrefs_Save_m2701929462 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Exit(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Monitor_Exit_m3585316909 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// NativeGallery/Permission NativeGallery::SaveToGallery(System.Byte[],System.String,System.String,System.Boolean,NativeGallery/MediaSaveCallback)
extern "C" IL2CPP_METHOD_ATTR int32_t NativeGallery_SaveToGallery_m3366416885 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___mediaBytes0, String_t* ___album1, String_t* ___filenameFormatted2, bool ___isImage3, MediaSaveCallback_t1711154875 * ___callback4, const RuntimeMethod* method);
// NativeGallery/Permission NativeGallery::SaveToGallery(System.String,System.String,System.String,System.Boolean,NativeGallery/MediaSaveCallback)
extern "C" IL2CPP_METHOD_ATTR int32_t NativeGallery_SaveToGallery_m4000209401 (RuntimeObject * __this /* static, unused */, String_t* ___existingMediaPath0, String_t* ___album1, String_t* ___filenameFormatted2, bool ___isImage3, MediaSaveCallback_t1711154875 * ___callback4, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Equality_m1810815630 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentException__ctor_m1312628991 (ArgumentException_t132251570 * __this, String_t* p0, const RuntimeMethod* method);
// System.Boolean System.String::EndsWith(System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_EndsWith_m1901926500 (String_t* __this, String_t* p0, const RuntimeMethod* method);
// System.Byte[] UnityEngine.ImageConversion::EncodeToJPG(UnityEngine.Texture2D,System.Int32)
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* ImageConversion_EncodeToJPG_m2489668130 (RuntimeObject * __this /* static, unused */, Texture2D_t3840446185 * p0, int32_t p1, const RuntimeMethod* method);
// System.Byte[] UnityEngine.ImageConversion::EncodeToPNG(UnityEngine.Texture2D)
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* ImageConversion_EncodeToPNG_m2292631531 (RuntimeObject * __this /* static, unused */, Texture2D_t3840446185 * p0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m3937257545 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::CallStatic<System.Boolean>(System.String,System.Object[])
inline bool AndroidJavaObject_CallStatic_TisBoolean_t97287965_m3361755856 (AndroidJavaObject_t4131667876 * __this, String_t* p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method)
{
	return ((  bool (*) (AndroidJavaObject_t4131667876 *, String_t*, ObjectU5BU5D_t2843939325*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisBoolean_t97287965_m3361755856_gshared)(__this, p0, p1, method);
}
// NativeGallery/Permission NativeGallery::GetMediaFromGallery(NativeGallery/MediaPickCallback,System.Boolean,System.String,System.String,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t NativeGallery_GetMediaFromGallery_m2807044920 (RuntimeObject * __this /* static, unused */, MediaPickCallback_t2468098299 * ___callback0, bool ___imageMode1, String_t* ___mime2, String_t* ___title3, int32_t ___maxSize4, const RuntimeMethod* method);
// NativeGallery/Permission NativeGallery::GetMultipleMediaFromGallery(NativeGallery/MediaPickMultipleCallback,System.Boolean,System.String,System.String,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t NativeGallery_GetMultipleMediaFromGallery_m1977049241 (RuntimeObject * __this /* static, unused */, MediaPickMultipleCallback_t2483155519 * ___callback0, bool ___imageMode1, String_t* ___mime2, String_t* ___title3, int32_t ___maxSize4, const RuntimeMethod* method);
// NativeGallery/Permission NativeGallery::RequestPermission()
extern "C" IL2CPP_METHOD_ATTR int32_t NativeGallery_RequestPermission_m3085250992 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
extern "C" IL2CPP_METHOD_ATTR int32_t String_get_Length_m3847582255 (String_t* __this, const RuntimeMethod* method);
// System.String NativeGallery::GetSavePath(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* NativeGallery_GetSavePath_m938747003 (RuntimeObject * __this /* static, unused */, String_t* ___album0, String_t* ___filenameFormatted1, const RuntimeMethod* method);
// System.Void System.IO.File::WriteAllBytes(System.String,System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void File_WriteAllBytes_m4252682105 (RuntimeObject * __this /* static, unused */, String_t* p0, ByteU5BU5D_t4116647657* p1, const RuntimeMethod* method);
// System.Void NativeGallery::SaveToGalleryInternal(System.String,System.String,System.Boolean,NativeGallery/MediaSaveCallback)
extern "C" IL2CPP_METHOD_ATTR void NativeGallery_SaveToGalleryInternal_m2106641 (RuntimeObject * __this /* static, unused */, String_t* ___path0, String_t* ___album1, bool ___isImage2, MediaSaveCallback_t1711154875 * ___callback3, const RuntimeMethod* method);
// System.Boolean System.IO.File::Exists(System.String)
extern "C" IL2CPP_METHOD_ATTR bool File_Exists_m3943585060 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Void System.IO.FileNotFoundException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void FileNotFoundException__ctor_m3252664930 (FileNotFoundException_t225391025 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void System.IO.File::Copy(System.String,System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void File_Copy_m3433232803 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, bool p2, const RuntimeMethod* method);
// System.Void NativeGallery/MediaSaveCallback::Invoke(System.String)
extern "C" IL2CPP_METHOD_ATTR void MediaSaveCallback_Invoke_m1355652789 (MediaSaveCallback_t1711154875 * __this, String_t* ___error0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_Log_m4051431634 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// !!0 UnityEngine.AndroidJavaObject::CallStatic<System.String>(System.String,System.Object[])
inline String_t* AndroidJavaObject_CallStatic_TisString_t_m3599693027 (AndroidJavaObject_t4131667876 * __this, String_t* p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method)
{
	return ((  String_t* (*) (AndroidJavaObject_t4131667876 *, String_t*, ObjectU5BU5D_t2843939325*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisRuntimeObject_m1663918964_gshared)(__this, p0, p1, method);
}
// System.Boolean System.String::Contains(System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_Contains_m1147431944 (String_t* __this, String_t* p0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m2844511972 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Boolean NativeGallery::IsMediaPickerBusy()
extern "C" IL2CPP_METHOD_ATTR bool NativeGallery_IsMediaPickerBusy_m3841585438 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void NativeGalleryNamespace.NGMediaReceiveCallbackAndroid::.ctor(System.Object)
extern "C" IL2CPP_METHOD_ATTR void NGMediaReceiveCallbackAndroid__ctor_m3579569150 (NGMediaReceiveCallbackAndroid_t379387538 * __this, RuntimeObject * ___threadLock0, const RuntimeMethod* method);
// System.String NativeGalleryNamespace.NGMediaReceiveCallbackAndroid::get_Path()
extern "C" IL2CPP_METHOD_ATTR String_t* NGMediaReceiveCallbackAndroid_get_Path_m40710785 (NGMediaReceiveCallbackAndroid_t379387538 * __this, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m2969720369 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Void NativeGallery/MediaPickCallback::Invoke(System.String)
extern "C" IL2CPP_METHOD_ATTR void MediaPickCallback_Invoke_m771420990 (MediaPickCallback_t2468098299 * __this, String_t* ___path0, const RuntimeMethod* method);
// System.Boolean NativeGallery::CanSelectMultipleFilesFromGallery()
extern "C" IL2CPP_METHOD_ATTR bool NativeGallery_CanSelectMultipleFilesFromGallery_m1434233298 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String[] NativeGalleryNamespace.NGMediaReceiveCallbackAndroid::get_Paths()
extern "C" IL2CPP_METHOD_ATTR StringU5BU5D_t1281789340* NGMediaReceiveCallbackAndroid_get_Paths_m70167007 (NGMediaReceiveCallbackAndroid_t379387538 * __this, const RuntimeMethod* method);
// System.Void NativeGallery/MediaPickMultipleCallback::Invoke(System.String[])
extern "C" IL2CPP_METHOD_ATTR void MediaPickMultipleCallback_Invoke_m898928969 (MediaPickMultipleCallback_t2483155519 * __this, StringU5BU5D_t1281789340* ___paths0, const RuntimeMethod* method);
// System.Int32 UnityEngine.SystemInfo::get_maxTextureSize()
extern "C" IL2CPP_METHOD_ATTR int32_t SystemInfo_get_maxTextureSize_m2715296278 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String NativeGallery::get_TemporaryImagePath()
extern "C" IL2CPP_METHOD_ATTR String_t* NativeGallery_get_TemporaryImagePath_m1358311393 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String System.IO.Path::GetExtension(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* Path_GetExtension_m1021339115 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.String System.String::ToLowerInvariant()
extern "C" IL2CPP_METHOD_ATTR String_t* String_ToLowerInvariant_m110751226 (String_t* __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_op_Equality_m920492651 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Texture2D__ctor_m1269666504 (Texture2D_t3840446185 * __this, int32_t p0, int32_t p1, int32_t p2, bool p3, bool p4, const RuntimeMethod* method);
// System.Byte[] System.IO.File::ReadAllBytes(System.String)
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* File_ReadAllBytes_m1435775076 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.ImageConversion::LoadImage(UnityEngine.Texture2D,System.Byte[],System.Boolean)
extern "C" IL2CPP_METHOD_ATTR bool ImageConversion_LoadImage_m601733642 (RuntimeObject * __this /* static, unused */, Texture2D_t3840446185 * p0, ByteU5BU5D_t4116647657* p1, bool p2, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR void Object_DestroyImmediate_m3193525861 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogException(System.Exception)
extern "C" IL2CPP_METHOD_ATTR void Debug_LogException_m2207318968 (RuntimeObject * __this /* static, unused */, Exception_t * p0, const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_op_Inequality_m215368492 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void System.IO.File::Delete(System.String)
extern "C" IL2CPP_METHOD_ATTR void File_Delete_m321251800 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.String[] System.String::Split(System.Char[])
extern "C" IL2CPP_METHOD_ATTR StringU5BU5D_t1281789340* String_Split_m3646115398 (String_t* __this, CharU5BU5D_t3528271667* p0, const RuntimeMethod* method);
// System.String System.String::Trim()
extern "C" IL2CPP_METHOD_ATTR String_t* String_Trim_m923598732 (String_t* __this, const RuntimeMethod* method);
// System.Boolean System.Int32::TryParse(System.String,System.Int32&)
extern "C" IL2CPP_METHOD_ATTR bool Int32_TryParse_m2404707562 (RuntimeObject * __this /* static, unused */, String_t* p0, int32_t* p1, const RuntimeMethod* method);
// System.Void NativeGallery/ImageProperties::.ctor(System.Int32,System.Int32,System.String,NativeGallery/ImageOrientation)
extern "C" IL2CPP_METHOD_ATTR void ImageProperties__ctor_m3374032026 (ImageProperties_t914339828 * __this, int32_t ___width0, int32_t ___height1, String_t* ___mimeType2, int32_t ___orientation3, const RuntimeMethod* method);
// System.Boolean System.Int64::TryParse(System.String,System.Int64&)
extern "C" IL2CPP_METHOD_ATTR bool Int64_TryParse_m2208578514 (RuntimeObject * __this /* static, unused */, String_t* p0, int64_t* p1, const RuntimeMethod* method);
// System.Boolean System.Single::TryParse(System.String,System.Single&)
extern "C" IL2CPP_METHOD_ATTR bool Single_TryParse_m4264970052 (RuntimeObject * __this /* static, unused */, String_t* p0, float* p1, const RuntimeMethod* method);
// System.Void NativeGallery/VideoProperties::.ctor(System.Int32,System.Int32,System.Int64,System.Single)
extern "C" IL2CPP_METHOD_ATTR void VideoProperties__ctor_m870185782 (VideoProperties_t196727450 * __this, int32_t ___width0, int32_t ___height1, int64_t ___duration2, float ___rotation3, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaProxy::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void AndroidJavaProxy__ctor_m545570009 (AndroidJavaProxy_t2835824643 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void NativeGalleryNamespace.NGMediaReceiveCallbackAndroid::set_Path(System.String)
extern "C" IL2CPP_METHOD_ATTR void NGMediaReceiveCallbackAndroid_set_Path_m3190655345 (NGMediaReceiveCallbackAndroid_t379387538 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Pulse(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Monitor_Pulse_m82725344 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void NativeGalleryNamespace.NGMediaReceiveCallbackAndroid::set_Paths(System.String[])
extern "C" IL2CPP_METHOD_ATTR void NGMediaReceiveCallbackAndroid_set_Paths_m3892898157 (NGMediaReceiveCallbackAndroid_t379387538 * __this, StringU5BU5D_t1281789340* ___value0, const RuntimeMethod* method);
// System.Void NativeGalleryNamespace.NGPermissionCallbackAndroid::set_Result(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void NGPermissionCallbackAndroid_set_Result_m2198825033 (NGPermissionCallbackAndroid_t270292349 * __this, int32_t ___value0, const RuntimeMethod* method);
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
// UnityEngine.AndroidJavaClass NativeGallery::get_AJC()
extern "C" IL2CPP_METHOD_ATTR AndroidJavaClass_t32045322 * NativeGallery_get_AJC_m2581125024 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeGallery_get_AJC_m2581125024_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_t2808515514_il2cpp_TypeInfo_var);
		AndroidJavaClass_t32045322 * L_0 = ((NativeGallery_t2808515514_StaticFields*)il2cpp_codegen_static_fields_for(NativeGallery_t2808515514_il2cpp_TypeInfo_var))->get_m_ajc_0();
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		AndroidJavaClass_t32045322 * L_1 = (AndroidJavaClass_t32045322 *)il2cpp_codegen_object_new(AndroidJavaClass_t32045322_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_m366853020(L_1, _stringLiteral374804532, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_t2808515514_il2cpp_TypeInfo_var);
		((NativeGallery_t2808515514_StaticFields*)il2cpp_codegen_static_fields_for(NativeGallery_t2808515514_il2cpp_TypeInfo_var))->set_m_ajc_0(L_1);
	}

IL_0019:
	{
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_t2808515514_il2cpp_TypeInfo_var);
		AndroidJavaClass_t32045322 * L_2 = ((NativeGallery_t2808515514_StaticFields*)il2cpp_codegen_static_fields_for(NativeGallery_t2808515514_il2cpp_TypeInfo_var))->get_m_ajc_0();
		return L_2;
	}
}
// UnityEngine.AndroidJavaObject NativeGallery::get_Context()
extern "C" IL2CPP_METHOD_ATTR AndroidJavaObject_t4131667876 * NativeGallery_get_Context_m328758169 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeGallery_get_Context_m328758169_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t4131667876 * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_t2808515514_il2cpp_TypeInfo_var);
		AndroidJavaObject_t4131667876 * L_0 = ((NativeGallery_t2808515514_StaticFields*)il2cpp_codegen_static_fields_for(NativeGallery_t2808515514_il2cpp_TypeInfo_var))->get_m_context_1();
		if (L_0)
		{
			goto IL_0037;
		}
	}
	{
		AndroidJavaClass_t32045322 * L_1 = (AndroidJavaClass_t32045322 *)il2cpp_codegen_object_new(AndroidJavaClass_t32045322_il2cpp_TypeInfo_var);
		AndroidJavaClass__ctor_m366853020(L_1, _stringLiteral2149247999, /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_0015:
	try
	{ // begin try (depth: 1)
		AndroidJavaObject_t4131667876 * L_2 = V_0;
		NullCheck(L_2);
		AndroidJavaObject_t4131667876 * L_3 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t4131667876_m1414442298(L_2, _stringLiteral3452315504, /*hidden argument*/AndroidJavaObject_GetStatic_TisAndroidJavaObject_t4131667876_m1414442298_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_t2808515514_il2cpp_TypeInfo_var);
		((NativeGallery_t2808515514_StaticFields*)il2cpp_codegen_static_fields_for(NativeGallery_t2808515514_il2cpp_TypeInfo_var))->set_m_context_1(L_3);
		IL2CPP_LEAVE(0x37, FINALLY_002a);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002a;
	}

FINALLY_002a:
	{ // begin finally (depth: 1)
		{
			AndroidJavaObject_t4131667876 * L_4 = V_0;
			if (!L_4)
			{
				goto IL_0036;
			}
		}

IL_0030:
		{
			AndroidJavaObject_t4131667876 * L_5 = V_0;
			NullCheck(L_5);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_5);
		}

IL_0036:
		{
			IL2CPP_END_FINALLY(42)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(42)
	{
		IL2CPP_JUMP_TBL(0x37, IL_0037)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0037:
	{
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_t2808515514_il2cpp_TypeInfo_var);
		AndroidJavaObject_t4131667876 * L_6 = ((NativeGallery_t2808515514_StaticFields*)il2cpp_codegen_static_fields_for(NativeGallery_t2808515514_il2cpp_TypeInfo_var))->get_m_context_1();
		return L_6;
	}
}
// System.String NativeGallery::get_TemporaryImagePath()
extern "C" IL2CPP_METHOD_ATTR String_t* NativeGallery_get_TemporaryImagePath_m1358311393 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeGallery_get_TemporaryImagePath_m1358311393_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_t2808515514_il2cpp_TypeInfo_var);
		String_t* L_0 = ((NativeGallery_t2808515514_StaticFields*)il2cpp_codegen_static_fields_for(NativeGallery_t2808515514_il2cpp_TypeInfo_var))->get_m_temporaryImagePath_2();
		if (L_0)
		{
			goto IL_0029;
		}
	}
	{
		String_t* L_1 = Application_get_temporaryCachePath_m1214546342(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_t1605229823_il2cpp_TypeInfo_var);
		String_t* L_2 = Path_Combine_m3389272516(NULL /*static, unused*/, L_1, _stringLiteral1392880498, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_t2808515514_il2cpp_TypeInfo_var);
		((NativeGallery_t2808515514_StaticFields*)il2cpp_codegen_static_fields_for(NativeGallery_t2808515514_il2cpp_TypeInfo_var))->set_m_temporaryImagePath_2(L_2);
		String_t* L_3 = Application_get_temporaryCachePath_m1214546342(NULL /*static, unused*/, /*hidden argument*/NULL);
		Directory_CreateDirectory_m751642867(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
	}

IL_0029:
	{
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_t2808515514_il2cpp_TypeInfo_var);
		String_t* L_4 = ((NativeGallery_t2808515514_StaticFields*)il2cpp_codegen_static_fields_for(NativeGallery_t2808515514_il2cpp_TypeInfo_var))->get_m_temporaryImagePath_2();
		return L_4;
	}
}
// NativeGallery/Permission NativeGallery::CheckPermission()
extern "C" IL2CPP_METHOD_ATTR int32_t NativeGallery_CheckPermission_m1786438771 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeGallery_CheckPermission_m1786438771_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_t2808515514_il2cpp_TypeInfo_var);
		AndroidJavaClass_t32045322 * L_0 = NativeGallery_get_AJC_m2581125024(NULL /*static, unused*/, /*hidden argument*/NULL);
		ObjectU5BU5D_t2843939325* L_1 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t2843939325* L_2 = L_1;
		AndroidJavaObject_t4131667876 * L_3 = NativeGallery_get_Context_m328758169(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		NullCheck(L_0);
		int32_t L_4 = AndroidJavaObject_CallStatic_TisInt32_t2950945753_m1426675528(L_0, _stringLiteral1981470027, L_2, /*hidden argument*/AndroidJavaObject_CallStatic_TisInt32_t2950945753_m1426675528_RuntimeMethod_var);
		V_0 = L_4;
		int32_t L_5 = V_0;
		if (L_5)
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_6 = PlayerPrefs_GetInt_m1299643124(NULL /*static, unused*/, _stringLiteral4123781296, 2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)2))))
		{
			goto IL_0037;
		}
	}
	{
		V_0 = 2;
	}

IL_0037:
	{
		int32_t L_7 = V_0;
		return L_7;
	}
}
// NativeGallery/Permission NativeGallery::RequestPermission()
extern "C" IL2CPP_METHOD_ATTR int32_t NativeGallery_RequestPermission_m3085250992 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeGallery_RequestPermission_m3085250992_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	NGPermissionCallbackAndroid_t270292349 * V_2 = NULL;
	int32_t V_3 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject * L_0 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m297566312(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		V_1 = L_1;
		RuntimeObject * L_2 = V_1;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			RuntimeObject * L_3 = V_0;
			NGPermissionCallbackAndroid_t270292349 * L_4 = (NGPermissionCallbackAndroid_t270292349 *)il2cpp_codegen_object_new(NGPermissionCallbackAndroid_t270292349_il2cpp_TypeInfo_var);
			NGPermissionCallbackAndroid__ctor_m1136313408(L_4, L_3, /*hidden argument*/NULL);
			V_2 = L_4;
			IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_t2808515514_il2cpp_TypeInfo_var);
			AndroidJavaClass_t32045322 * L_5 = NativeGallery_get_AJC_m2581125024(NULL /*static, unused*/, /*hidden argument*/NULL);
			ObjectU5BU5D_t2843939325* L_6 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)3);
			ObjectU5BU5D_t2843939325* L_7 = L_6;
			AndroidJavaObject_t4131667876 * L_8 = NativeGallery_get_Context_m328758169(NULL /*static, unused*/, /*hidden argument*/NULL);
			NullCheck(L_7);
			ArrayElementTypeCheck (L_7, L_8);
			(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_8);
			ObjectU5BU5D_t2843939325* L_9 = L_7;
			NGPermissionCallbackAndroid_t270292349 * L_10 = V_2;
			NullCheck(L_9);
			ArrayElementTypeCheck (L_9, L_10);
			(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_10);
			ObjectU5BU5D_t2843939325* L_11 = L_9;
			int32_t L_12 = PlayerPrefs_GetInt_m1299643124(NULL /*static, unused*/, _stringLiteral4123781296, 2, /*hidden argument*/NULL);
			int32_t L_13 = L_12;
			RuntimeObject * L_14 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_13);
			NullCheck(L_11);
			ArrayElementTypeCheck (L_11, L_14);
			(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_14);
			NullCheck(L_5);
			AndroidJavaObject_CallStatic_m2922144688(L_5, _stringLiteral1732096641, L_11, /*hidden argument*/NULL);
			NGPermissionCallbackAndroid_t270292349 * L_15 = V_2;
			NullCheck(L_15);
			int32_t L_16 = NGPermissionCallbackAndroid_get_Result_m4141800061(L_15, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_16) == ((uint32_t)(-1)))))
			{
				goto IL_005c;
			}
		}

IL_0055:
		{
			RuntimeObject * L_17 = V_0;
			Monitor_Wait_m2644425468(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		}

IL_005c:
		{
			NGPermissionCallbackAndroid_t270292349 * L_18 = V_2;
			NullCheck(L_18);
			int32_t L_19 = NGPermissionCallbackAndroid_get_Result_m4141800061(L_18, /*hidden argument*/NULL);
			if ((((int32_t)L_19) == ((int32_t)2)))
			{
				goto IL_0093;
			}
		}

IL_0068:
		{
			int32_t L_20 = PlayerPrefs_GetInt_m1299643124(NULL /*static, unused*/, _stringLiteral4123781296, (-1), /*hidden argument*/NULL);
			NGPermissionCallbackAndroid_t270292349 * L_21 = V_2;
			NullCheck(L_21);
			int32_t L_22 = NGPermissionCallbackAndroid_get_Result_m4141800061(L_21, /*hidden argument*/NULL);
			if ((((int32_t)L_20) == ((int32_t)L_22)))
			{
				goto IL_0093;
			}
		}

IL_007e:
		{
			NGPermissionCallbackAndroid_t270292349 * L_23 = V_2;
			NullCheck(L_23);
			int32_t L_24 = NGPermissionCallbackAndroid_get_Result_m4141800061(L_23, /*hidden argument*/NULL);
			PlayerPrefs_SetInt_m2842000469(NULL /*static, unused*/, _stringLiteral4123781296, L_24, /*hidden argument*/NULL);
			PlayerPrefs_Save_m2701929462(NULL /*static, unused*/, /*hidden argument*/NULL);
		}

IL_0093:
		{
			NGPermissionCallbackAndroid_t270292349 * L_25 = V_2;
			NullCheck(L_25);
			int32_t L_26 = NGPermissionCallbackAndroid_get_Result_m4141800061(L_25, /*hidden argument*/NULL);
			V_3 = L_26;
			IL2CPP_LEAVE(0xA6, FINALLY_009f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_009f;
	}

FINALLY_009f:
	{ // begin finally (depth: 1)
		RuntimeObject * L_27 = V_1;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(159)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(159)
	{
		IL2CPP_JUMP_TBL(0xA6, IL_00a6)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00a6:
	{
		int32_t L_28 = V_3;
		return L_28;
	}
}
// System.Boolean NativeGallery::CanOpenSettings()
extern "C" IL2CPP_METHOD_ATTR bool NativeGallery_CanOpenSettings_m2865431573 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Void NativeGallery::OpenSettings()
extern "C" IL2CPP_METHOD_ATTR void NativeGallery_OpenSettings_m2073715281 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeGallery_OpenSettings_m2073715281_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_t2808515514_il2cpp_TypeInfo_var);
		AndroidJavaClass_t32045322 * L_0 = NativeGallery_get_AJC_m2581125024(NULL /*static, unused*/, /*hidden argument*/NULL);
		ObjectU5BU5D_t2843939325* L_1 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t2843939325* L_2 = L_1;
		AndroidJavaObject_t4131667876 * L_3 = NativeGallery_get_Context_m328758169(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m2922144688(L_0, _stringLiteral3464665864, L_2, /*hidden argument*/NULL);
		return;
	}
}
// NativeGallery/Permission NativeGallery::SaveImageToGallery(System.Byte[],System.String,System.String,NativeGallery/MediaSaveCallback)
extern "C" IL2CPP_METHOD_ATTR int32_t NativeGallery_SaveImageToGallery_m3348418455 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___mediaBytes0, String_t* ___album1, String_t* ___filenameFormatted2, MediaSaveCallback_t1711154875 * ___callback3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeGallery_SaveImageToGallery_m3348418455_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_t4116647657* L_0 = ___mediaBytes0;
		String_t* L_1 = ___album1;
		String_t* L_2 = ___filenameFormatted2;
		MediaSaveCallback_t1711154875 * L_3 = ___callback3;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_t2808515514_il2cpp_TypeInfo_var);
		int32_t L_4 = NativeGallery_SaveToGallery_m3366416885(NULL /*static, unused*/, L_0, L_1, L_2, (bool)1, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// NativeGallery/Permission NativeGallery::SaveImageToGallery(System.String,System.String,System.String,NativeGallery/MediaSaveCallback)
extern "C" IL2CPP_METHOD_ATTR int32_t NativeGallery_SaveImageToGallery_m2353988206 (RuntimeObject * __this /* static, unused */, String_t* ___existingMediaPath0, String_t* ___album1, String_t* ___filenameFormatted2, MediaSaveCallback_t1711154875 * ___callback3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeGallery_SaveImageToGallery_m2353988206_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___existingMediaPath0;
		String_t* L_1 = ___album1;
		String_t* L_2 = ___filenameFormatted2;
		MediaSaveCallback_t1711154875 * L_3 = ___callback3;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_t2808515514_il2cpp_TypeInfo_var);
		int32_t L_4 = NativeGallery_SaveToGallery_m4000209401(NULL /*static, unused*/, L_0, L_1, L_2, (bool)1, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// NativeGallery/Permission NativeGallery::SaveImageToGallery(UnityEngine.Texture2D,System.String,System.String,NativeGallery/MediaSaveCallback)
extern "C" IL2CPP_METHOD_ATTR int32_t NativeGallery_SaveImageToGallery_m1342837694 (RuntimeObject * __this /* static, unused */, Texture2D_t3840446185 * ___image0, String_t* ___album1, String_t* ___filenameFormatted2, MediaSaveCallback_t1711154875 * ___callback3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeGallery_SaveImageToGallery_m1342837694_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Texture2D_t3840446185 * L_0 = ___image0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentException_t132251570 * L_2 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_2, _stringLiteral563961164, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, NativeGallery_SaveImageToGallery_m1342837694_RuntimeMethod_var);
	}

IL_0017:
	{
		String_t* L_3 = ___filenameFormatted2;
		NullCheck(L_3);
		bool L_4 = String_EndsWith_m1901926500(L_3, _stringLiteral2063196619, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0037;
		}
	}
	{
		String_t* L_5 = ___filenameFormatted2;
		NullCheck(L_5);
		bool L_6 = String_EndsWith_m1901926500(L_5, _stringLiteral2860068956, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0049;
		}
	}

IL_0037:
	{
		Texture2D_t3840446185 * L_7 = ___image0;
		ByteU5BU5D_t4116647657* L_8 = ImageConversion_EncodeToJPG_m2489668130(NULL /*static, unused*/, L_7, ((int32_t)100), /*hidden argument*/NULL);
		String_t* L_9 = ___album1;
		String_t* L_10 = ___filenameFormatted2;
		MediaSaveCallback_t1711154875 * L_11 = ___callback3;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_t2808515514_il2cpp_TypeInfo_var);
		int32_t L_12 = NativeGallery_SaveToGallery_m3366416885(NULL /*static, unused*/, L_8, L_9, L_10, (bool)1, L_11, /*hidden argument*/NULL);
		return L_12;
	}

IL_0049:
	{
		String_t* L_13 = ___filenameFormatted2;
		NullCheck(L_13);
		bool L_14 = String_EndsWith_m1901926500(L_13, _stringLiteral2410385622, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0069;
		}
	}
	{
		Texture2D_t3840446185 * L_15 = ___image0;
		ByteU5BU5D_t4116647657* L_16 = ImageConversion_EncodeToPNG_m2292631531(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		String_t* L_17 = ___album1;
		String_t* L_18 = ___filenameFormatted2;
		MediaSaveCallback_t1711154875 * L_19 = ___callback3;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_t2808515514_il2cpp_TypeInfo_var);
		int32_t L_20 = NativeGallery_SaveToGallery_m3366416885(NULL /*static, unused*/, L_16, L_17, L_18, (bool)1, L_19, /*hidden argument*/NULL);
		return L_20;
	}

IL_0069:
	{
		Texture2D_t3840446185 * L_21 = ___image0;
		ByteU5BU5D_t4116647657* L_22 = ImageConversion_EncodeToPNG_m2292631531(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
		String_t* L_23 = ___album1;
		String_t* L_24 = ___filenameFormatted2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_25 = String_Concat_m3937257545(NULL /*static, unused*/, L_24, _stringLiteral2410385622, /*hidden argument*/NULL);
		MediaSaveCallback_t1711154875 * L_26 = ___callback3;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_t2808515514_il2cpp_TypeInfo_var);
		int32_t L_27 = NativeGallery_SaveToGallery_m3366416885(NULL /*static, unused*/, L_22, L_23, L_25, (bool)1, L_26, /*hidden argument*/NULL);
		return L_27;
	}
}
// NativeGallery/Permission NativeGallery::SaveVideoToGallery(System.Byte[],System.String,System.String,NativeGallery/MediaSaveCallback)
extern "C" IL2CPP_METHOD_ATTR int32_t NativeGallery_SaveVideoToGallery_m3473076284 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___mediaBytes0, String_t* ___album1, String_t* ___filenameFormatted2, MediaSaveCallback_t1711154875 * ___callback3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeGallery_SaveVideoToGallery_m3473076284_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_t4116647657* L_0 = ___mediaBytes0;
		String_t* L_1 = ___album1;
		String_t* L_2 = ___filenameFormatted2;
		MediaSaveCallback_t1711154875 * L_3 = ___callback3;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_t2808515514_il2cpp_TypeInfo_var);
		int32_t L_4 = NativeGallery_SaveToGallery_m3366416885(NULL /*static, unused*/, L_0, L_1, L_2, (bool)0, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// NativeGallery/Permission NativeGallery::SaveVideoToGallery(System.String,System.String,System.String,NativeGallery/MediaSaveCallback)
extern "C" IL2CPP_METHOD_ATTR int32_t NativeGallery_SaveVideoToGallery_m2509233189 (RuntimeObject * __this /* static, unused */, String_t* ___existingMediaPath0, String_t* ___album1, String_t* ___filenameFormatted2, MediaSaveCallback_t1711154875 * ___callback3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeGallery_SaveVideoToGallery_m2509233189_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___existingMediaPath0;
		String_t* L_1 = ___album1;
		String_t* L_2 = ___filenameFormatted2;
		MediaSaveCallback_t1711154875 * L_3 = ___callback3;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_t2808515514_il2cpp_TypeInfo_var);
		int32_t L_4 = NativeGallery_SaveToGallery_m4000209401(NULL /*static, unused*/, L_0, L_1, L_2, (bool)0, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean NativeGallery::CanSelectMultipleFilesFromGallery()
extern "C" IL2CPP_METHOD_ATTR bool NativeGallery_CanSelectMultipleFilesFromGallery_m1434233298 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeGallery_CanSelectMultipleFilesFromGallery_m1434233298_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_t2808515514_il2cpp_TypeInfo_var);
		AndroidJavaClass_t32045322 * L_0 = NativeGallery_get_AJC_m2581125024(NULL /*static, unused*/, /*hidden argument*/NULL);
		ObjectU5BU5D_t2843939325* L_1 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(L_0);
		bool L_2 = AndroidJavaObject_CallStatic_TisBoolean_t97287965_m3361755856(L_0, _stringLiteral4074557623, L_1, /*hidden argument*/AndroidJavaObject_CallStatic_TisBoolean_t97287965_m3361755856_RuntimeMethod_var);
		return L_2;
	}
}
// NativeGallery/Permission NativeGallery::GetImageFromGallery(NativeGallery/MediaPickCallback,System.String,System.String,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t NativeGallery_GetImageFromGallery_m775556130 (RuntimeObject * __this /* static, unused */, MediaPickCallback_t2468098299 * ___callback0, String_t* ___title1, String_t* ___mime2, int32_t ___maxSize3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeGallery_GetImageFromGallery_m775556130_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MediaPickCallback_t2468098299 * L_0 = ___callback0;
		String_t* L_1 = ___mime2;
		String_t* L_2 = ___title1;
		int32_t L_3 = ___maxSize3;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_t2808515514_il2cpp_TypeInfo_var);
		int32_t L_4 = NativeGallery_GetMediaFromGallery_m2807044920(NULL /*static, unused*/, L_0, (bool)1, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// NativeGallery/Permission NativeGallery::GetVideoFromGallery(NativeGallery/MediaPickCallback,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t NativeGallery_GetVideoFromGallery_m3000217725 (RuntimeObject * __this /* static, unused */, MediaPickCallback_t2468098299 * ___callback0, String_t* ___title1, String_t* ___mime2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeGallery_GetVideoFromGallery_m3000217725_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MediaPickCallback_t2468098299 * L_0 = ___callback0;
		String_t* L_1 = ___mime2;
		String_t* L_2 = ___title1;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_t2808515514_il2cpp_TypeInfo_var);
		int32_t L_3 = NativeGallery_GetMediaFromGallery_m2807044920(NULL /*static, unused*/, L_0, (bool)0, L_1, L_2, (-1), /*hidden argument*/NULL);
		return L_3;
	}
}
// NativeGallery/Permission NativeGallery::GetImagesFromGallery(NativeGallery/MediaPickMultipleCallback,System.String,System.String,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t NativeGallery_GetImagesFromGallery_m3043034140 (RuntimeObject * __this /* static, unused */, MediaPickMultipleCallback_t2483155519 * ___callback0, String_t* ___title1, String_t* ___mime2, int32_t ___maxSize3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeGallery_GetImagesFromGallery_m3043034140_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MediaPickMultipleCallback_t2483155519 * L_0 = ___callback0;
		String_t* L_1 = ___mime2;
		String_t* L_2 = ___title1;
		int32_t L_3 = ___maxSize3;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_t2808515514_il2cpp_TypeInfo_var);
		int32_t L_4 = NativeGallery_GetMultipleMediaFromGallery_m1977049241(NULL /*static, unused*/, L_0, (bool)1, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// NativeGallery/Permission NativeGallery::GetVideosFromGallery(NativeGallery/MediaPickMultipleCallback,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t NativeGallery_GetVideosFromGallery_m134385912 (RuntimeObject * __this /* static, unused */, MediaPickMultipleCallback_t2483155519 * ___callback0, String_t* ___title1, String_t* ___mime2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeGallery_GetVideosFromGallery_m134385912_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MediaPickMultipleCallback_t2483155519 * L_0 = ___callback0;
		String_t* L_1 = ___mime2;
		String_t* L_2 = ___title1;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_t2808515514_il2cpp_TypeInfo_var);
		int32_t L_3 = NativeGallery_GetMultipleMediaFromGallery_m1977049241(NULL /*static, unused*/, L_0, (bool)0, L_1, L_2, (-1), /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean NativeGallery::IsMediaPickerBusy()
extern "C" IL2CPP_METHOD_ATTR bool NativeGallery_IsMediaPickerBusy_m3841585438 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// NativeGallery/Permission NativeGallery::SaveToGallery(System.Byte[],System.String,System.String,System.Boolean,NativeGallery/MediaSaveCallback)
extern "C" IL2CPP_METHOD_ATTR int32_t NativeGallery_SaveToGallery_m3366416885 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___mediaBytes0, String_t* ___album1, String_t* ___filenameFormatted2, bool ___isImage3, MediaSaveCallback_t1711154875 * ___callback4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeGallery_SaveToGallery_m3366416885_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_t2808515514_il2cpp_TypeInfo_var);
		int32_t L_0 = NativeGallery_RequestPermission_m3085250992(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0077;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_2 = ___mediaBytes0;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_3 = ___mediaBytes0;
		NullCheck(L_3);
		if ((((int32_t)((int32_t)(((RuntimeArray *)L_3)->max_length)))))
		{
			goto IL_0026;
		}
	}

IL_001b:
	{
		ArgumentException_t132251570 * L_4 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_4, _stringLiteral1212739322, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, NativeGallery_SaveToGallery_m3366416885_RuntimeMethod_var);
	}

IL_0026:
	{
		String_t* L_5 = ___album1;
		if (!L_5)
		{
			goto IL_0037;
		}
	}
	{
		String_t* L_6 = ___album1;
		NullCheck(L_6);
		int32_t L_7 = String_get_Length_m3847582255(L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0042;
		}
	}

IL_0037:
	{
		ArgumentException_t132251570 * L_8 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_8, _stringLiteral2755812117, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, NULL, NativeGallery_SaveToGallery_m3366416885_RuntimeMethod_var);
	}

IL_0042:
	{
		String_t* L_9 = ___filenameFormatted2;
		if (!L_9)
		{
			goto IL_0053;
		}
	}
	{
		String_t* L_10 = ___filenameFormatted2;
		NullCheck(L_10);
		int32_t L_11 = String_get_Length_m3847582255(L_10, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_005e;
		}
	}

IL_0053:
	{
		ArgumentException_t132251570 * L_12 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_12, _stringLiteral1041934514, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, NULL, NativeGallery_SaveToGallery_m3366416885_RuntimeMethod_var);
	}

IL_005e:
	{
		String_t* L_13 = ___album1;
		String_t* L_14 = ___filenameFormatted2;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_t2808515514_il2cpp_TypeInfo_var);
		String_t* L_15 = NativeGallery_GetSavePath_m938747003(NULL /*static, unused*/, L_13, L_14, /*hidden argument*/NULL);
		V_1 = L_15;
		String_t* L_16 = V_1;
		ByteU5BU5D_t4116647657* L_17 = ___mediaBytes0;
		File_WriteAllBytes_m4252682105(NULL /*static, unused*/, L_16, L_17, /*hidden argument*/NULL);
		String_t* L_18 = V_1;
		String_t* L_19 = ___album1;
		bool L_20 = ___isImage3;
		MediaSaveCallback_t1711154875 * L_21 = ___callback4;
		NativeGallery_SaveToGalleryInternal_m2106641(NULL /*static, unused*/, L_18, L_19, L_20, L_21, /*hidden argument*/NULL);
	}

IL_0077:
	{
		int32_t L_22 = V_0;
		return L_22;
	}
}
// NativeGallery/Permission NativeGallery::SaveToGallery(System.String,System.String,System.String,System.Boolean,NativeGallery/MediaSaveCallback)
extern "C" IL2CPP_METHOD_ATTR int32_t NativeGallery_SaveToGallery_m4000209401 (RuntimeObject * __this /* static, unused */, String_t* ___existingMediaPath0, String_t* ___album1, String_t* ___filenameFormatted2, bool ___isImage3, MediaSaveCallback_t1711154875 * ___callback4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeGallery_SaveToGallery_m4000209401_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_t2808515514_il2cpp_TypeInfo_var);
		int32_t L_0 = NativeGallery_RequestPermission_m3085250992(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_007b;
		}
	}
	{
		String_t* L_2 = ___existingMediaPath0;
		bool L_3 = File_Exists_m3943585060(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0029;
		}
	}
	{
		String_t* L_4 = ___existingMediaPath0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral1685319404, L_4, /*hidden argument*/NULL);
		FileNotFoundException_t225391025 * L_6 = (FileNotFoundException_t225391025 *)il2cpp_codegen_object_new(FileNotFoundException_t225391025_il2cpp_TypeInfo_var);
		FileNotFoundException__ctor_m3252664930(L_6, L_5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, NULL, NativeGallery_SaveToGallery_m4000209401_RuntimeMethod_var);
	}

IL_0029:
	{
		String_t* L_7 = ___album1;
		if (!L_7)
		{
			goto IL_003a;
		}
	}
	{
		String_t* L_8 = ___album1;
		NullCheck(L_8);
		int32_t L_9 = String_get_Length_m3847582255(L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0045;
		}
	}

IL_003a:
	{
		ArgumentException_t132251570 * L_10 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_10, _stringLiteral2755812117, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, NULL, NativeGallery_SaveToGallery_m4000209401_RuntimeMethod_var);
	}

IL_0045:
	{
		String_t* L_11 = ___filenameFormatted2;
		if (!L_11)
		{
			goto IL_0056;
		}
	}
	{
		String_t* L_12 = ___filenameFormatted2;
		NullCheck(L_12);
		int32_t L_13 = String_get_Length_m3847582255(L_12, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_0061;
		}
	}

IL_0056:
	{
		ArgumentException_t132251570 * L_14 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_14, _stringLiteral1041934514, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, NULL, NativeGallery_SaveToGallery_m4000209401_RuntimeMethod_var);
	}

IL_0061:
	{
		String_t* L_15 = ___album1;
		String_t* L_16 = ___filenameFormatted2;
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_t2808515514_il2cpp_TypeInfo_var);
		String_t* L_17 = NativeGallery_GetSavePath_m938747003(NULL /*static, unused*/, L_15, L_16, /*hidden argument*/NULL);
		V_1 = L_17;
		String_t* L_18 = ___existingMediaPath0;
		String_t* L_19 = V_1;
		File_Copy_m3433232803(NULL /*static, unused*/, L_18, L_19, (bool)1, /*hidden argument*/NULL);
		String_t* L_20 = V_1;
		String_t* L_21 = ___album1;
		bool L_22 = ___isImage3;
		MediaSaveCallback_t1711154875 * L_23 = ___callback4;
		NativeGallery_SaveToGalleryInternal_m2106641(NULL /*static, unused*/, L_20, L_21, L_22, L_23, /*hidden argument*/NULL);
	}

IL_007b:
	{
		int32_t L_24 = V_0;
		return L_24;
	}
}
// System.Void NativeGallery::SaveToGalleryInternal(System.String,System.String,System.Boolean,NativeGallery/MediaSaveCallback)
extern "C" IL2CPP_METHOD_ATTR void NativeGallery_SaveToGalleryInternal_m2106641 (RuntimeObject * __this /* static, unused */, String_t* ___path0, String_t* ___album1, bool ___isImage2, MediaSaveCallback_t1711154875 * ___callback3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeGallery_SaveToGalleryInternal_m2106641_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_t2808515514_il2cpp_TypeInfo_var);
		AndroidJavaClass_t32045322 * L_0 = NativeGallery_get_AJC_m2581125024(NULL /*static, unused*/, /*hidden argument*/NULL);
		ObjectU5BU5D_t2843939325* L_1 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t2843939325* L_2 = L_1;
		AndroidJavaObject_t4131667876 * L_3 = NativeGallery_get_Context_m328758169(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		ObjectU5BU5D_t2843939325* L_4 = L_2;
		String_t* L_5 = ___path0;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_5);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_m2922144688(L_0, _stringLiteral2308311817, L_4, /*hidden argument*/NULL);
		MediaSaveCallback_t1711154875 * L_6 = ___callback3;
		if (!L_6)
		{
			goto IL_002e;
		}
	}
	{
		MediaSaveCallback_t1711154875 * L_7 = ___callback3;
		NullCheck(L_7);
		MediaSaveCallback_Invoke_m1355652789(L_7, (String_t*)NULL, /*hidden argument*/NULL);
	}

IL_002e:
	{
		String_t* L_8 = ___path0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral3951825263, L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.String NativeGallery::GetSavePath(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* NativeGallery_GetSavePath_m938747003 (RuntimeObject * __this /* static, unused */, String_t* ___album0, String_t* ___filenameFormatted1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeGallery_GetSavePath_m938747003_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_t2808515514_il2cpp_TypeInfo_var);
		AndroidJavaClass_t32045322 * L_0 = NativeGallery_get_AJC_m2581125024(NULL /*static, unused*/, /*hidden argument*/NULL);
		ObjectU5BU5D_t2843939325* L_1 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t2843939325* L_2 = L_1;
		String_t* L_3 = ___album0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		NullCheck(L_0);
		String_t* L_4 = AndroidJavaObject_CallStatic_TisString_t_m3599693027(L_0, _stringLiteral3595539794, L_2, /*hidden argument*/AndroidJavaObject_CallStatic_TisString_t_m3599693027_RuntimeMethod_var);
		V_0 = L_4;
		String_t* L_5 = ___filenameFormatted1;
		NullCheck(L_5);
		bool L_6 = String_Contains_m1147431944(L_5, _stringLiteral628085470, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0050;
		}
	}
	{
		V_1 = 0;
	}

IL_002c:
	{
		String_t* L_7 = V_0;
		String_t* L_8 = ___filenameFormatted1;
		int32_t L_9 = V_1;
		int32_t L_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
		V_1 = L_10;
		int32_t L_11 = L_10;
		RuntimeObject * L_12 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_11);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Format_m2844511972(NULL /*static, unused*/, L_8, L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_t1605229823_il2cpp_TypeInfo_var);
		String_t* L_14 = Path_Combine_m3389272516(NULL /*static, unused*/, L_7, L_13, /*hidden argument*/NULL);
		V_2 = L_14;
		String_t* L_15 = V_2;
		bool L_16 = File_Exists_m3943585060(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		if (L_16)
		{
			goto IL_002c;
		}
	}
	{
		String_t* L_17 = V_2;
		return L_17;
	}

IL_0050:
	{
		String_t* L_18 = V_0;
		String_t* L_19 = ___filenameFormatted1;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t1605229823_il2cpp_TypeInfo_var);
		String_t* L_20 = Path_Combine_m3389272516(NULL /*static, unused*/, L_18, L_19, /*hidden argument*/NULL);
		V_0 = L_20;
		String_t* L_21 = V_0;
		return L_21;
	}
}
// NativeGallery/Permission NativeGallery::GetMediaFromGallery(NativeGallery/MediaPickCallback,System.Boolean,System.String,System.String,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t NativeGallery_GetMediaFromGallery_m2807044920 (RuntimeObject * __this /* static, unused */, MediaPickCallback_t2468098299 * ___callback0, bool ___imageMode1, String_t* ___mime2, String_t* ___title3, int32_t ___maxSize4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeGallery_GetMediaFromGallery_m2807044920_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	NGMediaReceiveCallbackAndroid_t379387538 * V_3 = NULL;
	String_t* V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_t2808515514_il2cpp_TypeInfo_var);
		int32_t L_0 = NativeGallery_RequestPermission_m3085250992(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_00af;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_t2808515514_il2cpp_TypeInfo_var);
		bool L_2 = NativeGallery_IsMediaPickerBusy_m3841585438(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_00af;
		}
	}
	{
		RuntimeObject * L_3 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m297566312(L_3, /*hidden argument*/NULL);
		V_1 = L_3;
		RuntimeObject * L_4 = V_1;
		V_2 = L_4;
		RuntimeObject * L_5 = V_2;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
	}

IL_0025:
	try
	{ // begin try (depth: 1)
		{
			RuntimeObject * L_6 = V_1;
			NGMediaReceiveCallbackAndroid_t379387538 * L_7 = (NGMediaReceiveCallbackAndroid_t379387538 *)il2cpp_codegen_object_new(NGMediaReceiveCallbackAndroid_t379387538_il2cpp_TypeInfo_var);
			NGMediaReceiveCallbackAndroid__ctor_m3579569150(L_7, L_6, /*hidden argument*/NULL);
			V_3 = L_7;
			IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_t2808515514_il2cpp_TypeInfo_var);
			AndroidJavaClass_t32045322 * L_8 = NativeGallery_get_AJC_m2581125024(NULL /*static, unused*/, /*hidden argument*/NULL);
			ObjectU5BU5D_t2843939325* L_9 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)6);
			ObjectU5BU5D_t2843939325* L_10 = L_9;
			AndroidJavaObject_t4131667876 * L_11 = NativeGallery_get_Context_m328758169(NULL /*static, unused*/, /*hidden argument*/NULL);
			NullCheck(L_10);
			ArrayElementTypeCheck (L_10, L_11);
			(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_11);
			ObjectU5BU5D_t2843939325* L_12 = L_10;
			NGMediaReceiveCallbackAndroid_t379387538 * L_13 = V_3;
			NullCheck(L_12);
			ArrayElementTypeCheck (L_12, L_13);
			(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_13);
			ObjectU5BU5D_t2843939325* L_14 = L_12;
			bool L_15 = ___imageMode1;
			bool L_16 = L_15;
			RuntimeObject * L_17 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_16);
			NullCheck(L_14);
			ArrayElementTypeCheck (L_14, L_17);
			(L_14)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_17);
			ObjectU5BU5D_t2843939325* L_18 = L_14;
			bool L_19 = ((bool)0);
			RuntimeObject * L_20 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_19);
			NullCheck(L_18);
			ArrayElementTypeCheck (L_18, L_20);
			(L_18)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_20);
			ObjectU5BU5D_t2843939325* L_21 = L_18;
			String_t* L_22 = ___mime2;
			NullCheck(L_21);
			ArrayElementTypeCheck (L_21, L_22);
			(L_21)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_22);
			ObjectU5BU5D_t2843939325* L_23 = L_21;
			String_t* L_24 = ___title3;
			NullCheck(L_23);
			ArrayElementTypeCheck (L_23, L_24);
			(L_23)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_24);
			NullCheck(L_8);
			AndroidJavaObject_CallStatic_m2922144688(L_8, _stringLiteral4146698754, L_23, /*hidden argument*/NULL);
			NGMediaReceiveCallbackAndroid_t379387538 * L_25 = V_3;
			NullCheck(L_25);
			String_t* L_26 = NGMediaReceiveCallbackAndroid_get_Path_m40710785(L_25, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_27 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
			if (!L_27)
			{
				goto IL_007e;
			}
		}

IL_0077:
		{
			RuntimeObject * L_28 = V_1;
			Monitor_Wait_m2644425468(NULL /*static, unused*/, L_28, /*hidden argument*/NULL);
		}

IL_007e:
		{
			NGMediaReceiveCallbackAndroid_t379387538 * L_29 = V_3;
			NullCheck(L_29);
			String_t* L_30 = NGMediaReceiveCallbackAndroid_get_Path_m40710785(L_29, /*hidden argument*/NULL);
			V_4 = L_30;
			String_t* L_31 = V_4;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_32 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_31, /*hidden argument*/NULL);
			if (!L_32)
			{
				goto IL_0095;
			}
		}

IL_0092:
		{
			V_4 = (String_t*)NULL;
		}

IL_0095:
		{
			MediaPickCallback_t2468098299 * L_33 = ___callback0;
			if (!L_33)
			{
				goto IL_00a3;
			}
		}

IL_009b:
		{
			MediaPickCallback_t2468098299 * L_34 = ___callback0;
			String_t* L_35 = V_4;
			NullCheck(L_34);
			MediaPickCallback_Invoke_m771420990(L_34, L_35, /*hidden argument*/NULL);
		}

IL_00a3:
		{
			IL2CPP_LEAVE(0xAF, FINALLY_00a8);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00a8;
	}

FINALLY_00a8:
	{ // begin finally (depth: 1)
		RuntimeObject * L_36 = V_2;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_36, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(168)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(168)
	{
		IL2CPP_JUMP_TBL(0xAF, IL_00af)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00af:
	{
		int32_t L_37 = V_0;
		return L_37;
	}
}
// NativeGallery/Permission NativeGallery::GetMultipleMediaFromGallery(NativeGallery/MediaPickMultipleCallback,System.Boolean,System.String,System.String,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t NativeGallery_GetMultipleMediaFromGallery_m1977049241 (RuntimeObject * __this /* static, unused */, MediaPickMultipleCallback_t2483155519 * ___callback0, bool ___imageMode1, String_t* ___mime2, String_t* ___title3, int32_t ___maxSize4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeGallery_GetMultipleMediaFromGallery_m1977049241_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	NGMediaReceiveCallbackAndroid_t379387538 * V_3 = NULL;
	StringU5BU5D_t1281789340* V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_t2808515514_il2cpp_TypeInfo_var);
		int32_t L_0 = NativeGallery_RequestPermission_m3085250992(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_00ca;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_t2808515514_il2cpp_TypeInfo_var);
		bool L_2 = NativeGallery_IsMediaPickerBusy_m3841585438(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_00ca;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_t2808515514_il2cpp_TypeInfo_var);
		bool L_3 = NativeGallery_CanSelectMultipleFilesFromGallery_m1434233298(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_00bd;
		}
	}
	{
		RuntimeObject * L_4 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m297566312(L_4, /*hidden argument*/NULL);
		V_1 = L_4;
		RuntimeObject * L_5 = V_1;
		V_2 = L_5;
		RuntimeObject * L_6 = V_2;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
	}

IL_002f:
	try
	{ // begin try (depth: 1)
		{
			RuntimeObject * L_7 = V_1;
			NGMediaReceiveCallbackAndroid_t379387538 * L_8 = (NGMediaReceiveCallbackAndroid_t379387538 *)il2cpp_codegen_object_new(NGMediaReceiveCallbackAndroid_t379387538_il2cpp_TypeInfo_var);
			NGMediaReceiveCallbackAndroid__ctor_m3579569150(L_8, L_7, /*hidden argument*/NULL);
			V_3 = L_8;
			IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_t2808515514_il2cpp_TypeInfo_var);
			AndroidJavaClass_t32045322 * L_9 = NativeGallery_get_AJC_m2581125024(NULL /*static, unused*/, /*hidden argument*/NULL);
			ObjectU5BU5D_t2843939325* L_10 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)6);
			ObjectU5BU5D_t2843939325* L_11 = L_10;
			AndroidJavaObject_t4131667876 * L_12 = NativeGallery_get_Context_m328758169(NULL /*static, unused*/, /*hidden argument*/NULL);
			NullCheck(L_11);
			ArrayElementTypeCheck (L_11, L_12);
			(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_12);
			ObjectU5BU5D_t2843939325* L_13 = L_11;
			NGMediaReceiveCallbackAndroid_t379387538 * L_14 = V_3;
			NullCheck(L_13);
			ArrayElementTypeCheck (L_13, L_14);
			(L_13)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_14);
			ObjectU5BU5D_t2843939325* L_15 = L_13;
			bool L_16 = ___imageMode1;
			bool L_17 = L_16;
			RuntimeObject * L_18 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_17);
			NullCheck(L_15);
			ArrayElementTypeCheck (L_15, L_18);
			(L_15)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_18);
			ObjectU5BU5D_t2843939325* L_19 = L_15;
			bool L_20 = ((bool)1);
			RuntimeObject * L_21 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_20);
			NullCheck(L_19);
			ArrayElementTypeCheck (L_19, L_21);
			(L_19)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_21);
			ObjectU5BU5D_t2843939325* L_22 = L_19;
			String_t* L_23 = ___mime2;
			NullCheck(L_22);
			ArrayElementTypeCheck (L_22, L_23);
			(L_22)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_23);
			ObjectU5BU5D_t2843939325* L_24 = L_22;
			String_t* L_25 = ___title3;
			NullCheck(L_24);
			ArrayElementTypeCheck (L_24, L_25);
			(L_24)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_25);
			NullCheck(L_9);
			AndroidJavaObject_CallStatic_m2922144688(L_9, _stringLiteral4146698754, L_24, /*hidden argument*/NULL);
			NGMediaReceiveCallbackAndroid_t379387538 * L_26 = V_3;
			NullCheck(L_26);
			StringU5BU5D_t1281789340* L_27 = NGMediaReceiveCallbackAndroid_get_Paths_m70167007(L_26, /*hidden argument*/NULL);
			if (L_27)
			{
				goto IL_0083;
			}
		}

IL_007c:
		{
			RuntimeObject * L_28 = V_1;
			Monitor_Wait_m2644425468(NULL /*static, unused*/, L_28, /*hidden argument*/NULL);
		}

IL_0083:
		{
			NGMediaReceiveCallbackAndroid_t379387538 * L_29 = V_3;
			NullCheck(L_29);
			StringU5BU5D_t1281789340* L_30 = NGMediaReceiveCallbackAndroid_get_Paths_m70167007(L_29, /*hidden argument*/NULL);
			V_4 = L_30;
			StringU5BU5D_t1281789340* L_31 = V_4;
			if (!L_31)
			{
				goto IL_009e;
			}
		}

IL_0092:
		{
			StringU5BU5D_t1281789340* L_32 = V_4;
			NullCheck(L_32);
			if ((((int32_t)((int32_t)(((RuntimeArray *)L_32)->max_length)))))
			{
				goto IL_009e;
			}
		}

IL_009b:
		{
			V_4 = (StringU5BU5D_t1281789340*)NULL;
		}

IL_009e:
		{
			MediaPickMultipleCallback_t2483155519 * L_33 = ___callback0;
			if (!L_33)
			{
				goto IL_00ac;
			}
		}

IL_00a4:
		{
			MediaPickMultipleCallback_t2483155519 * L_34 = ___callback0;
			StringU5BU5D_t1281789340* L_35 = V_4;
			NullCheck(L_34);
			MediaPickMultipleCallback_Invoke_m898928969(L_34, L_35, /*hidden argument*/NULL);
		}

IL_00ac:
		{
			IL2CPP_LEAVE(0xB8, FINALLY_00b1);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00b1;
	}

FINALLY_00b1:
	{ // begin finally (depth: 1)
		RuntimeObject * L_36 = V_2;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_36, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(177)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(177)
	{
		IL2CPP_JUMP_TBL(0xB8, IL_00b8)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00b8:
	{
		goto IL_00ca;
	}

IL_00bd:
	{
		MediaPickMultipleCallback_t2483155519 * L_37 = ___callback0;
		if (!L_37)
		{
			goto IL_00ca;
		}
	}
	{
		MediaPickMultipleCallback_t2483155519 * L_38 = ___callback0;
		NullCheck(L_38);
		MediaPickMultipleCallback_Invoke_m898928969(L_38, (StringU5BU5D_t1281789340*)(StringU5BU5D_t1281789340*)NULL, /*hidden argument*/NULL);
	}

IL_00ca:
	{
		int32_t L_39 = V_0;
		return L_39;
	}
}
// UnityEngine.Texture2D NativeGallery::LoadImageAtPath(System.String,System.Int32,System.Boolean,System.Boolean,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR Texture2D_t3840446185 * NativeGallery_LoadImageAtPath_m3208821149 (RuntimeObject * __this /* static, unused */, String_t* ___imagePath0, int32_t ___maxSize1, bool ___markTextureNonReadable2, bool ___generateMipmaps3, bool ___linearColorSpace4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeGallery_LoadImageAtPath_m3208821149_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	Texture2D_t3840446185 * V_3 = NULL;
	Texture2D_t3840446185 * V_4 = NULL;
	Exception_t * V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B10_0 = 0;
	{
		String_t* L_0 = ___imagePath0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		ArgumentException_t132251570 * L_2 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_2, _stringLiteral1045150428, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, NativeGallery_LoadImageAtPath_m3208821149_RuntimeMethod_var);
	}

IL_0016:
	{
		String_t* L_3 = ___imagePath0;
		bool L_4 = File_Exists_m3943585060(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0032;
		}
	}
	{
		String_t* L_5 = ___imagePath0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral1685319404, L_5, /*hidden argument*/NULL);
		FileNotFoundException_t225391025 * L_7 = (FileNotFoundException_t225391025 *)il2cpp_codegen_object_new(FileNotFoundException_t225391025_il2cpp_TypeInfo_var);
		FileNotFoundException__ctor_m3252664930(L_7, L_6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, NULL, NativeGallery_LoadImageAtPath_m3208821149_RuntimeMethod_var);
	}

IL_0032:
	{
		int32_t L_8 = ___maxSize1;
		if ((((int32_t)L_8) > ((int32_t)0)))
		{
			goto IL_0040;
		}
	}
	{
		int32_t L_9 = SystemInfo_get_maxTextureSize_m2715296278(NULL /*static, unused*/, /*hidden argument*/NULL);
		___maxSize1 = L_9;
	}

IL_0040:
	{
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_t2808515514_il2cpp_TypeInfo_var);
		AndroidJavaClass_t32045322 * L_10 = NativeGallery_get_AJC_m2581125024(NULL /*static, unused*/, /*hidden argument*/NULL);
		ObjectU5BU5D_t2843939325* L_11 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t2843939325* L_12 = L_11;
		AndroidJavaObject_t4131667876 * L_13 = NativeGallery_get_Context_m328758169(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_13);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_13);
		ObjectU5BU5D_t2843939325* L_14 = L_12;
		String_t* L_15 = ___imagePath0;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_15);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_15);
		ObjectU5BU5D_t2843939325* L_16 = L_14;
		String_t* L_17 = NativeGallery_get_TemporaryImagePath_m1358311393(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_17);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_17);
		ObjectU5BU5D_t2843939325* L_18 = L_16;
		int32_t L_19 = ___maxSize1;
		int32_t L_20 = L_19;
		RuntimeObject * L_21 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_20);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_21);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_21);
		NullCheck(L_10);
		String_t* L_22 = AndroidJavaObject_CallStatic_TisString_t_m3599693027(L_10, _stringLiteral961731482, L_18, /*hidden argument*/AndroidJavaObject_CallStatic_TisString_t_m3599693027_RuntimeMethod_var);
		V_0 = L_22;
		String_t* L_23 = ___imagePath0;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t1605229823_il2cpp_TypeInfo_var);
		String_t* L_24 = Path_GetExtension_m1021339115(NULL /*static, unused*/, L_23, /*hidden argument*/NULL);
		NullCheck(L_24);
		String_t* L_25 = String_ToLowerInvariant_m110751226(L_24, /*hidden argument*/NULL);
		V_1 = L_25;
		String_t* L_26 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_27 = String_op_Equality_m920492651(NULL /*static, unused*/, L_26, _stringLiteral2860068956, /*hidden argument*/NULL);
		if (L_27)
		{
			goto IL_009f;
		}
	}
	{
		String_t* L_28 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_29 = String_op_Equality_m920492651(NULL /*static, unused*/, L_28, _stringLiteral2063196619, /*hidden argument*/NULL);
		if (!L_29)
		{
			goto IL_00a5;
		}
	}

IL_009f:
	{
		G_B10_0 = 3;
		goto IL_00a6;
	}

IL_00a5:
	{
		G_B10_0 = 4;
	}

IL_00a6:
	{
		V_2 = G_B10_0;
		int32_t L_30 = V_2;
		bool L_31 = ___generateMipmaps3;
		bool L_32 = ___linearColorSpace4;
		Texture2D_t3840446185 * L_33 = (Texture2D_t3840446185 *)il2cpp_codegen_object_new(Texture2D_t3840446185_il2cpp_TypeInfo_var);
		Texture2D__ctor_m1269666504(L_33, 2, 2, L_30, L_31, L_32, /*hidden argument*/NULL);
		V_3 = L_33;
	}

IL_00b3:
	try
	{ // begin try (depth: 1)
		try
		{ // begin try (depth: 2)
			{
				Texture2D_t3840446185 * L_34 = V_3;
				String_t* L_35 = V_0;
				ByteU5BU5D_t4116647657* L_36 = File_ReadAllBytes_m1435775076(NULL /*static, unused*/, L_35, /*hidden argument*/NULL);
				bool L_37 = ___markTextureNonReadable2;
				bool L_38 = ImageConversion_LoadImage_m601733642(NULL /*static, unused*/, L_34, L_36, L_37, /*hidden argument*/NULL);
				if (L_38)
				{
					goto IL_00d3;
				}
			}

IL_00c5:
			{
				Texture2D_t3840446185 * L_39 = V_3;
				IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
				Object_DestroyImmediate_m3193525861(NULL /*static, unused*/, L_39, /*hidden argument*/NULL);
				V_4 = (Texture2D_t3840446185 *)NULL;
				IL2CPP_LEAVE(0x10F, FINALLY_00ef);
			}

IL_00d3:
			{
				IL2CPP_LEAVE(0x10D, FINALLY_00ef);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
				goto CATCH_00d8;
			throw e;
		}

CATCH_00d8:
		{ // begin catch(System.Exception)
			V_5 = ((Exception_t *)__exception_local);
			Exception_t * L_40 = V_5;
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
			Debug_LogException_m2207318968(NULL /*static, unused*/, L_40, /*hidden argument*/NULL);
			Texture2D_t3840446185 * L_41 = V_3;
			IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
			Object_DestroyImmediate_m3193525861(NULL /*static, unused*/, L_41, /*hidden argument*/NULL);
			V_4 = (Texture2D_t3840446185 *)NULL;
			IL2CPP_LEAVE(0x10F, FINALLY_00ef);
		} // end catch (depth: 2)
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00ef;
	}

FINALLY_00ef:
	{ // begin finally (depth: 1)
		{
			String_t* L_42 = V_0;
			String_t* L_43 = ___imagePath0;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_44 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_42, L_43, /*hidden argument*/NULL);
			if (!L_44)
			{
				goto IL_010c;
			}
		}

IL_00fb:
		try
		{ // begin try (depth: 2)
			String_t* L_45 = V_0;
			File_Delete_m321251800(NULL /*static, unused*/, L_45, /*hidden argument*/NULL);
			goto IL_010c;
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
				goto CATCH_0106;
			throw e;
		}

CATCH_0106:
		{ // begin catch(System.Object)
			goto IL_010c;
		} // end catch (depth: 2)

IL_010c:
		{
			IL2CPP_END_FINALLY(239)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(239)
	{
		IL2CPP_JUMP_TBL(0x10F, IL_010f)
		IL2CPP_JUMP_TBL(0x10D, IL_010d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_010d:
	{
		Texture2D_t3840446185 * L_46 = V_3;
		return L_46;
	}

IL_010f:
	{
		Texture2D_t3840446185 * L_47 = V_4;
		return L_47;
	}
}
// NativeGallery/ImageProperties NativeGallery::GetImageProperties(System.String)
extern "C" IL2CPP_METHOD_ATTR ImageProperties_t914339828  NativeGallery_GetImageProperties_m3966117691 (RuntimeObject * __this /* static, unused */, String_t* ___imagePath0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeGallery_GetImageProperties_m3966117691_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	int32_t V_4 = 0;
	StringU5BU5D_t1281789340* V_5 = NULL;
	String_t* V_6 = NULL;
	int32_t V_7 = 0;
	{
		String_t* L_0 = ___imagePath0;
		bool L_1 = File_Exists_m3943585060(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		String_t* L_2 = ___imagePath0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral1685319404, L_2, /*hidden argument*/NULL);
		FileNotFoundException_t225391025 * L_4 = (FileNotFoundException_t225391025 *)il2cpp_codegen_object_new(FileNotFoundException_t225391025_il2cpp_TypeInfo_var);
		FileNotFoundException__ctor_m3252664930(L_4, L_3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, NativeGallery_GetImageProperties_m3966117691_RuntimeMethod_var);
	}

IL_001c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_t2808515514_il2cpp_TypeInfo_var);
		AndroidJavaClass_t32045322 * L_5 = NativeGallery_get_AJC_m2581125024(NULL /*static, unused*/, /*hidden argument*/NULL);
		ObjectU5BU5D_t2843939325* L_6 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t2843939325* L_7 = L_6;
		AndroidJavaObject_t4131667876 * L_8 = NativeGallery_get_Context_m328758169(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_8);
		ObjectU5BU5D_t2843939325* L_9 = L_7;
		String_t* L_10 = ___imagePath0;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_10);
		NullCheck(L_5);
		String_t* L_11 = AndroidJavaObject_CallStatic_TisString_t_m3599693027(L_5, _stringLiteral1089377795, L_9, /*hidden argument*/AndroidJavaObject_CallStatic_TisString_t_m3599693027_RuntimeMethod_var);
		V_0 = L_11;
		V_1 = 0;
		V_2 = 0;
		V_3 = (String_t*)NULL;
		V_4 = (-1);
		String_t* L_12 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_13 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_0162;
		}
	}
	{
		String_t* L_14 = V_0;
		CharU5BU5D_t3528271667* L_15 = (CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t3528271667* L_16 = L_15;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)62));
		NullCheck(L_14);
		StringU5BU5D_t1281789340* L_17 = String_Split_m3646115398(L_14, L_16, /*hidden argument*/NULL);
		V_5 = L_17;
		StringU5BU5D_t1281789340* L_18 = V_5;
		if (!L_18)
		{
			goto IL_0162;
		}
	}
	{
		StringU5BU5D_t1281789340* L_19 = V_5;
		NullCheck(L_19);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_19)->max_length))))) < ((int32_t)4)))
		{
			goto IL_0162;
		}
	}
	{
		StringU5BU5D_t1281789340* L_20 = V_5;
		NullCheck(L_20);
		int32_t L_21 = 0;
		String_t* L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_22);
		String_t* L_23 = String_Trim_m923598732(L_22, /*hidden argument*/NULL);
		bool L_24 = Int32_TryParse_m2404707562(NULL /*static, unused*/, L_23, (int32_t*)(&V_1), /*hidden argument*/NULL);
		if (L_24)
		{
			goto IL_008d;
		}
	}
	{
		V_1 = 0;
	}

IL_008d:
	{
		StringU5BU5D_t1281789340* L_25 = V_5;
		NullCheck(L_25);
		int32_t L_26 = 1;
		String_t* L_27 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		NullCheck(L_27);
		String_t* L_28 = String_Trim_m923598732(L_27, /*hidden argument*/NULL);
		bool L_29 = Int32_TryParse_m2404707562(NULL /*static, unused*/, L_28, (int32_t*)(&V_2), /*hidden argument*/NULL);
		if (L_29)
		{
			goto IL_00a4;
		}
	}
	{
		V_2 = 0;
	}

IL_00a4:
	{
		StringU5BU5D_t1281789340* L_30 = V_5;
		NullCheck(L_30);
		int32_t L_31 = 2;
		String_t* L_32 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		NullCheck(L_32);
		String_t* L_33 = String_Trim_m923598732(L_32, /*hidden argument*/NULL);
		V_3 = L_33;
		String_t* L_34 = V_3;
		NullCheck(L_34);
		int32_t L_35 = String_get_Length_m3847582255(L_34, /*hidden argument*/NULL);
		if (L_35)
		{
			goto IL_0149;
		}
	}
	{
		String_t* L_36 = ___imagePath0;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t1605229823_il2cpp_TypeInfo_var);
		String_t* L_37 = Path_GetExtension_m1021339115(NULL /*static, unused*/, L_36, /*hidden argument*/NULL);
		NullCheck(L_37);
		String_t* L_38 = String_ToLowerInvariant_m110751226(L_37, /*hidden argument*/NULL);
		V_6 = L_38;
		String_t* L_39 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_40 = String_op_Equality_m920492651(NULL /*static, unused*/, L_39, _stringLiteral2410385622, /*hidden argument*/NULL);
		if (!L_40)
		{
			goto IL_00e2;
		}
	}
	{
		V_3 = _stringLiteral2045074213;
		goto IL_0149;
	}

IL_00e2:
	{
		String_t* L_41 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_42 = String_op_Equality_m920492651(NULL /*static, unused*/, L_41, _stringLiteral2860068956, /*hidden argument*/NULL);
		if (L_42)
		{
			goto IL_0104;
		}
	}
	{
		String_t* L_43 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_44 = String_op_Equality_m920492651(NULL /*static, unused*/, L_43, _stringLiteral2063196619, /*hidden argument*/NULL);
		if (!L_44)
		{
			goto IL_010f;
		}
	}

IL_0104:
	{
		V_3 = _stringLiteral1377815833;
		goto IL_0149;
	}

IL_010f:
	{
		String_t* L_45 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_46 = String_op_Equality_m920492651(NULL /*static, unused*/, L_45, _stringLiteral3988015567, /*hidden argument*/NULL);
		if (!L_46)
		{
			goto IL_012b;
		}
	}
	{
		V_3 = _stringLiteral2869855759;
		goto IL_0149;
	}

IL_012b:
	{
		String_t* L_47 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_48 = String_op_Equality_m920492651(NULL /*static, unused*/, L_47, _stringLiteral1929714747, /*hidden argument*/NULL);
		if (!L_48)
		{
			goto IL_0147;
		}
	}
	{
		V_3 = _stringLiteral2508466260;
		goto IL_0149;
	}

IL_0147:
	{
		V_3 = (String_t*)NULL;
	}

IL_0149:
	{
		StringU5BU5D_t1281789340* L_49 = V_5;
		NullCheck(L_49);
		int32_t L_50 = 3;
		String_t* L_51 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		NullCheck(L_51);
		String_t* L_52 = String_Trim_m923598732(L_51, /*hidden argument*/NULL);
		bool L_53 = Int32_TryParse_m2404707562(NULL /*static, unused*/, L_52, (int32_t*)(&V_7), /*hidden argument*/NULL);
		if (!L_53)
		{
			goto IL_0162;
		}
	}
	{
		int32_t L_54 = V_7;
		V_4 = L_54;
	}

IL_0162:
	{
		int32_t L_55 = V_1;
		int32_t L_56 = V_2;
		String_t* L_57 = V_3;
		int32_t L_58 = V_4;
		ImageProperties_t914339828  L_59;
		memset(&L_59, 0, sizeof(L_59));
		ImageProperties__ctor_m3374032026((&L_59), L_55, L_56, L_57, L_58, /*hidden argument*/NULL);
		return L_59;
	}
}
// NativeGallery/VideoProperties NativeGallery::GetVideoProperties(System.String)
extern "C" IL2CPP_METHOD_ATTR VideoProperties_t196727450  NativeGallery_GetVideoProperties_m2359809206 (RuntimeObject * __this /* static, unused */, String_t* ___videoPath0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeGallery_GetVideoProperties_m2359809206_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int64_t V_3 = 0;
	float V_4 = 0.0f;
	StringU5BU5D_t1281789340* V_5 = NULL;
	{
		String_t* L_0 = ___videoPath0;
		bool L_1 = File_Exists_m3943585060(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		String_t* L_2 = ___videoPath0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral1685319404, L_2, /*hidden argument*/NULL);
		FileNotFoundException_t225391025 * L_4 = (FileNotFoundException_t225391025 *)il2cpp_codegen_object_new(FileNotFoundException_t225391025_il2cpp_TypeInfo_var);
		FileNotFoundException__ctor_m3252664930(L_4, L_3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, NativeGallery_GetVideoProperties_m2359809206_RuntimeMethod_var);
	}

IL_001c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(NativeGallery_t2808515514_il2cpp_TypeInfo_var);
		AndroidJavaClass_t32045322 * L_5 = NativeGallery_get_AJC_m2581125024(NULL /*static, unused*/, /*hidden argument*/NULL);
		ObjectU5BU5D_t2843939325* L_6 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t2843939325* L_7 = L_6;
		AndroidJavaObject_t4131667876 * L_8 = NativeGallery_get_Context_m328758169(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_8);
		ObjectU5BU5D_t2843939325* L_9 = L_7;
		String_t* L_10 = ___videoPath0;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_10);
		NullCheck(L_5);
		String_t* L_11 = AndroidJavaObject_CallStatic_TisString_t_m3599693027(L_5, _stringLiteral1791034210, L_9, /*hidden argument*/AndroidJavaObject_CallStatic_TisString_t_m3599693027_RuntimeMethod_var);
		V_0 = L_11;
		V_1 = 0;
		V_2 = 0;
		V_3 = (((int64_t)((int64_t)0)));
		V_4 = (0.0f);
		String_t* L_12 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_13 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_00dd;
		}
	}
	{
		String_t* L_14 = V_0;
		CharU5BU5D_t3528271667* L_15 = (CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t3528271667* L_16 = L_15;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)62));
		NullCheck(L_14);
		StringU5BU5D_t1281789340* L_17 = String_Split_m3646115398(L_14, L_16, /*hidden argument*/NULL);
		V_5 = L_17;
		StringU5BU5D_t1281789340* L_18 = V_5;
		if (!L_18)
		{
			goto IL_00dd;
		}
	}
	{
		StringU5BU5D_t1281789340* L_19 = V_5;
		NullCheck(L_19);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_19)->max_length))))) < ((int32_t)4)))
		{
			goto IL_00dd;
		}
	}
	{
		StringU5BU5D_t1281789340* L_20 = V_5;
		NullCheck(L_20);
		int32_t L_21 = 0;
		String_t* L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_22);
		String_t* L_23 = String_Trim_m923598732(L_22, /*hidden argument*/NULL);
		bool L_24 = Int32_TryParse_m2404707562(NULL /*static, unused*/, L_23, (int32_t*)(&V_1), /*hidden argument*/NULL);
		if (L_24)
		{
			goto IL_0092;
		}
	}
	{
		V_1 = 0;
	}

IL_0092:
	{
		StringU5BU5D_t1281789340* L_25 = V_5;
		NullCheck(L_25);
		int32_t L_26 = 1;
		String_t* L_27 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		NullCheck(L_27);
		String_t* L_28 = String_Trim_m923598732(L_27, /*hidden argument*/NULL);
		bool L_29 = Int32_TryParse_m2404707562(NULL /*static, unused*/, L_28, (int32_t*)(&V_2), /*hidden argument*/NULL);
		if (L_29)
		{
			goto IL_00a9;
		}
	}
	{
		V_2 = 0;
	}

IL_00a9:
	{
		StringU5BU5D_t1281789340* L_30 = V_5;
		NullCheck(L_30);
		int32_t L_31 = 2;
		String_t* L_32 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		NullCheck(L_32);
		String_t* L_33 = String_Trim_m923598732(L_32, /*hidden argument*/NULL);
		bool L_34 = Int64_TryParse_m2208578514(NULL /*static, unused*/, L_33, (int64_t*)(&V_3), /*hidden argument*/NULL);
		if (L_34)
		{
			goto IL_00c1;
		}
	}
	{
		V_3 = (((int64_t)((int64_t)0)));
	}

IL_00c1:
	{
		StringU5BU5D_t1281789340* L_35 = V_5;
		NullCheck(L_35);
		int32_t L_36 = 3;
		String_t* L_37 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		NullCheck(L_37);
		String_t* L_38 = String_Trim_m923598732(L_37, /*hidden argument*/NULL);
		bool L_39 = Single_TryParse_m4264970052(NULL /*static, unused*/, L_38, (float*)(&V_4), /*hidden argument*/NULL);
		if (L_39)
		{
			goto IL_00dd;
		}
	}
	{
		V_4 = (0.0f);
	}

IL_00dd:
	{
		float L_40 = V_4;
		if ((!(((float)L_40) == ((float)(-90.0f)))))
		{
			goto IL_00f0;
		}
	}
	{
		V_4 = (270.0f);
	}

IL_00f0:
	{
		int32_t L_41 = V_1;
		int32_t L_42 = V_2;
		int64_t L_43 = V_3;
		float L_44 = V_4;
		VideoProperties_t196727450  L_45;
		memset(&L_45, 0, sizeof(L_45));
		VideoProperties__ctor_m870185782((&L_45), L_41, L_42, L_43, L_44, /*hidden argument*/NULL);
		return L_45;
	}
}
// System.Void NativeGallery::.cctor()
extern "C" IL2CPP_METHOD_ATTR void NativeGallery__cctor_m693180091 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	{
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
// Conversion methods for marshalling of: NativeGallery/ImageProperties
extern "C" void ImageProperties_t914339828_marshal_pinvoke(const ImageProperties_t914339828& unmarshaled, ImageProperties_t914339828_marshaled_pinvoke& marshaled)
{
	marshaled.___width_0 = unmarshaled.get_width_0();
	marshaled.___height_1 = unmarshaled.get_height_1();
	marshaled.___mimeType_2 = il2cpp_codegen_marshal_string(unmarshaled.get_mimeType_2());
	marshaled.___orientation_3 = unmarshaled.get_orientation_3();
}
extern "C" void ImageProperties_t914339828_marshal_pinvoke_back(const ImageProperties_t914339828_marshaled_pinvoke& marshaled, ImageProperties_t914339828& unmarshaled)
{
	int32_t unmarshaled_width_temp_0 = 0;
	unmarshaled_width_temp_0 = marshaled.___width_0;
	unmarshaled.set_width_0(unmarshaled_width_temp_0);
	int32_t unmarshaled_height_temp_1 = 0;
	unmarshaled_height_temp_1 = marshaled.___height_1;
	unmarshaled.set_height_1(unmarshaled_height_temp_1);
	unmarshaled.set_mimeType_2(il2cpp_codegen_marshal_string_result(marshaled.___mimeType_2));
	int32_t unmarshaled_orientation_temp_3 = 0;
	unmarshaled_orientation_temp_3 = marshaled.___orientation_3;
	unmarshaled.set_orientation_3(unmarshaled_orientation_temp_3);
}
// Conversion method for clean up from marshalling of: NativeGallery/ImageProperties
extern "C" void ImageProperties_t914339828_marshal_pinvoke_cleanup(ImageProperties_t914339828_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___mimeType_2);
	marshaled.___mimeType_2 = NULL;
}
// Conversion methods for marshalling of: NativeGallery/ImageProperties
extern "C" void ImageProperties_t914339828_marshal_com(const ImageProperties_t914339828& unmarshaled, ImageProperties_t914339828_marshaled_com& marshaled)
{
	marshaled.___width_0 = unmarshaled.get_width_0();
	marshaled.___height_1 = unmarshaled.get_height_1();
	marshaled.___mimeType_2 = il2cpp_codegen_marshal_bstring(unmarshaled.get_mimeType_2());
	marshaled.___orientation_3 = unmarshaled.get_orientation_3();
}
extern "C" void ImageProperties_t914339828_marshal_com_back(const ImageProperties_t914339828_marshaled_com& marshaled, ImageProperties_t914339828& unmarshaled)
{
	int32_t unmarshaled_width_temp_0 = 0;
	unmarshaled_width_temp_0 = marshaled.___width_0;
	unmarshaled.set_width_0(unmarshaled_width_temp_0);
	int32_t unmarshaled_height_temp_1 = 0;
	unmarshaled_height_temp_1 = marshaled.___height_1;
	unmarshaled.set_height_1(unmarshaled_height_temp_1);
	unmarshaled.set_mimeType_2(il2cpp_codegen_marshal_bstring_result(marshaled.___mimeType_2));
	int32_t unmarshaled_orientation_temp_3 = 0;
	unmarshaled_orientation_temp_3 = marshaled.___orientation_3;
	unmarshaled.set_orientation_3(unmarshaled_orientation_temp_3);
}
// Conversion method for clean up from marshalling of: NativeGallery/ImageProperties
extern "C" void ImageProperties_t914339828_marshal_com_cleanup(ImageProperties_t914339828_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___mimeType_2);
	marshaled.___mimeType_2 = NULL;
}
// System.Void NativeGallery/ImageProperties::.ctor(System.Int32,System.Int32,System.String,NativeGallery/ImageOrientation)
extern "C" IL2CPP_METHOD_ATTR void ImageProperties__ctor_m3374032026 (ImageProperties_t914339828 * __this, int32_t ___width0, int32_t ___height1, String_t* ___mimeType2, int32_t ___orientation3, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___width0;
		__this->set_width_0(L_0);
		int32_t L_1 = ___height1;
		__this->set_height_1(L_1);
		String_t* L_2 = ___mimeType2;
		__this->set_mimeType_2(L_2);
		int32_t L_3 = ___orientation3;
		__this->set_orientation_3(L_3);
		return;
	}
}
extern "C"  void ImageProperties__ctor_m3374032026_AdjustorThunk (RuntimeObject * __this, int32_t ___width0, int32_t ___height1, String_t* ___mimeType2, int32_t ___orientation3, const RuntimeMethod* method)
{
	ImageProperties_t914339828 * _thisAdjusted = reinterpret_cast<ImageProperties_t914339828 *>(__this + 1);
	ImageProperties__ctor_m3374032026(_thisAdjusted, ___width0, ___height1, ___mimeType2, ___orientation3, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_MediaPickCallback_t2468098299 (MediaPickCallback_t2468098299 * __this, String_t* ___path0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___path0' to native representation
	char* ____path0_marshaled = NULL;
	____path0_marshaled = il2cpp_codegen_marshal_string(___path0);

	// Native function invocation
	il2cppPInvokeFunc(____path0_marshaled);

	// Marshaling cleanup of parameter '___path0' native representation
	il2cpp_codegen_marshal_free(____path0_marshaled);
	____path0_marshaled = NULL;

}
// System.Void NativeGallery/MediaPickCallback::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void MediaPickCallback__ctor_m2823130793 (MediaPickCallback_t2468098299 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void NativeGallery/MediaPickCallback::Invoke(System.String)
extern "C" IL2CPP_METHOD_ATTR void MediaPickCallback_Invoke_m771420990 (MediaPickCallback_t2468098299 * __this, String_t* ___path0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		MediaPickCallback_Invoke_m771420990((MediaPickCallback_t2468098299 *)__this->get_prev_9(), ___path0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___path0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___path0, targetMethod);
			}
		}
	}
	else
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___path0);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___path0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___path0);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___path0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___path0, targetMethod);
			}
		}
		else
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___path0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___path0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___path0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___path0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___path0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult NativeGallery/MediaPickCallback::BeginInvoke(System.String,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* MediaPickCallback_BeginInvoke_m331196563 (MediaPickCallback_t2468098299 * __this, String_t* ___path0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___path0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void NativeGallery/MediaPickCallback::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void MediaPickCallback_EndInvoke_m736713469 (MediaPickCallback_t2468098299 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
extern "C"  void DelegatePInvokeWrapper_MediaPickMultipleCallback_t2483155519 (MediaPickMultipleCallback_t2483155519 * __this, StringU5BU5D_t1281789340* ___paths0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char**);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___paths0' to native representation
	char** ____paths0_marshaled = NULL;
	if (___paths0 != NULL)
	{
		il2cpp_array_size_t ____paths0_Length = (___paths0)->max_length;
		____paths0_marshaled = il2cpp_codegen_marshal_allocate_array<char*>(____paths0_Length + 1);
		(____paths0_marshaled)[____paths0_Length] = NULL;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____paths0_Length); i++)
		{
			(____paths0_marshaled)[i] = il2cpp_codegen_marshal_string((___paths0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
		}
	}
	else
	{
		____paths0_marshaled = NULL;
	}

	// Native function invocation
	il2cppPInvokeFunc(____paths0_marshaled);

	// Marshaling cleanup of parameter '___paths0' native representation
	if (____paths0_marshaled != NULL)
	{
		const il2cpp_array_size_t ____paths0_marshaled_CleanupLoopCount = (___paths0 != NULL) ? (___paths0)->max_length : 0;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____paths0_marshaled_CleanupLoopCount); i++)
		{
			il2cpp_codegen_marshal_free((____paths0_marshaled)[i]);
			(____paths0_marshaled)[i] = NULL;
		}
		il2cpp_codegen_marshal_free(____paths0_marshaled);
		____paths0_marshaled = NULL;
	}

}
// System.Void NativeGallery/MediaPickMultipleCallback::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void MediaPickMultipleCallback__ctor_m1645103251 (MediaPickMultipleCallback_t2483155519 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void NativeGallery/MediaPickMultipleCallback::Invoke(System.String[])
extern "C" IL2CPP_METHOD_ATTR void MediaPickMultipleCallback_Invoke_m898928969 (MediaPickMultipleCallback_t2483155519 * __this, StringU5BU5D_t1281789340* ___paths0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		MediaPickMultipleCallback_Invoke_m898928969((MediaPickMultipleCallback_t2483155519 *)__this->get_prev_9(), ___paths0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, StringU5BU5D_t1281789340*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___paths0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, StringU5BU5D_t1281789340*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___paths0, targetMethod);
			}
		}
	}
	else
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< StringU5BU5D_t1281789340* >::Invoke(targetMethod, targetThis, ___paths0);
					else
						GenericVirtActionInvoker1< StringU5BU5D_t1281789340* >::Invoke(targetMethod, targetThis, ___paths0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< StringU5BU5D_t1281789340* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___paths0);
					else
						VirtActionInvoker1< StringU5BU5D_t1281789340* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___paths0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, StringU5BU5D_t1281789340*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___paths0, targetMethod);
			}
		}
		else
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___paths0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___paths0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___paths0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___paths0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (StringU5BU5D_t1281789340*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___paths0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult NativeGallery/MediaPickMultipleCallback::BeginInvoke(System.String[],System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* MediaPickMultipleCallback_BeginInvoke_m1426129778 (MediaPickMultipleCallback_t2483155519 * __this, StringU5BU5D_t1281789340* ___paths0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___paths0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void NativeGallery/MediaPickMultipleCallback::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void MediaPickMultipleCallback_EndInvoke_m1817353642 (MediaPickMultipleCallback_t2483155519 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
extern "C"  void DelegatePInvokeWrapper_MediaSaveCallback_t1711154875 (MediaSaveCallback_t1711154875 * __this, String_t* ___error0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___error0' to native representation
	char* ____error0_marshaled = NULL;
	____error0_marshaled = il2cpp_codegen_marshal_string(___error0);

	// Native function invocation
	il2cppPInvokeFunc(____error0_marshaled);

	// Marshaling cleanup of parameter '___error0' native representation
	il2cpp_codegen_marshal_free(____error0_marshaled);
	____error0_marshaled = NULL;

}
// System.Void NativeGallery/MediaSaveCallback::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void MediaSaveCallback__ctor_m796243933 (MediaSaveCallback_t1711154875 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void NativeGallery/MediaSaveCallback::Invoke(System.String)
extern "C" IL2CPP_METHOD_ATTR void MediaSaveCallback_Invoke_m1355652789 (MediaSaveCallback_t1711154875 * __this, String_t* ___error0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		MediaSaveCallback_Invoke_m1355652789((MediaSaveCallback_t1711154875 *)__this->get_prev_9(), ___error0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___error0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___error0, targetMethod);
			}
		}
	}
	else
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___error0);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___error0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___error0);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___error0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___error0, targetMethod);
			}
		}
		else
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___error0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___error0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___error0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___error0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___error0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult NativeGallery/MediaSaveCallback::BeginInvoke(System.String,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* MediaSaveCallback_BeginInvoke_m3218738691 (MediaSaveCallback_t1711154875 * __this, String_t* ___error0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___error0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void NativeGallery/MediaSaveCallback::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void MediaSaveCallback_EndInvoke_m3783509556 (MediaSaveCallback_t1711154875 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void NativeGallery/VideoProperties::.ctor(System.Int32,System.Int32,System.Int64,System.Single)
extern "C" IL2CPP_METHOD_ATTR void VideoProperties__ctor_m870185782 (VideoProperties_t196727450 * __this, int32_t ___width0, int32_t ___height1, int64_t ___duration2, float ___rotation3, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___width0;
		__this->set_width_0(L_0);
		int32_t L_1 = ___height1;
		__this->set_height_1(L_1);
		int64_t L_2 = ___duration2;
		__this->set_duration_2(L_2);
		float L_3 = ___rotation3;
		__this->set_rotation_3(L_3);
		return;
	}
}
extern "C"  void VideoProperties__ctor_m870185782_AdjustorThunk (RuntimeObject * __this, int32_t ___width0, int32_t ___height1, int64_t ___duration2, float ___rotation3, const RuntimeMethod* method)
{
	VideoProperties_t196727450 * _thisAdjusted = reinterpret_cast<VideoProperties_t196727450 *>(__this + 1);
	VideoProperties__ctor_m870185782(_thisAdjusted, ___width0, ___height1, ___duration2, ___rotation3, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void NativeGalleryNamespace.NGMediaReceiveCallbackAndroid::.ctor(System.Object)
extern "C" IL2CPP_METHOD_ATTR void NGMediaReceiveCallbackAndroid__ctor_m3579569150 (NGMediaReceiveCallbackAndroid_t379387538 * __this, RuntimeObject * ___threadLock0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NGMediaReceiveCallbackAndroid__ctor_m3579569150_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AndroidJavaProxy_t2835824643_il2cpp_TypeInfo_var);
		AndroidJavaProxy__ctor_m545570009(__this, _stringLiteral1140819868, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		NGMediaReceiveCallbackAndroid_set_Path_m3190655345(__this, L_0, /*hidden argument*/NULL);
		RuntimeObject * L_1 = ___threadLock0;
		__this->set_threadLock_4(L_1);
		return;
	}
}
// System.String NativeGalleryNamespace.NGMediaReceiveCallbackAndroid::get_Path()
extern "C" IL2CPP_METHOD_ATTR String_t* NGMediaReceiveCallbackAndroid_get_Path_m40710785 (NGMediaReceiveCallbackAndroid_t379387538 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CPathU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void NativeGalleryNamespace.NGMediaReceiveCallbackAndroid::set_Path(System.String)
extern "C" IL2CPP_METHOD_ATTR void NGMediaReceiveCallbackAndroid_set_Path_m3190655345 (NGMediaReceiveCallbackAndroid_t379387538 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CPathU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.String[] NativeGalleryNamespace.NGMediaReceiveCallbackAndroid::get_Paths()
extern "C" IL2CPP_METHOD_ATTR StringU5BU5D_t1281789340* NGMediaReceiveCallbackAndroid_get_Paths_m70167007 (NGMediaReceiveCallbackAndroid_t379387538 * __this, const RuntimeMethod* method)
{
	{
		StringU5BU5D_t1281789340* L_0 = __this->get_U3CPathsU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void NativeGalleryNamespace.NGMediaReceiveCallbackAndroid::set_Paths(System.String[])
extern "C" IL2CPP_METHOD_ATTR void NGMediaReceiveCallbackAndroid_set_Paths_m3892898157 (NGMediaReceiveCallbackAndroid_t379387538 * __this, StringU5BU5D_t1281789340* ___value0, const RuntimeMethod* method)
{
	{
		StringU5BU5D_t1281789340* L_0 = ___value0;
		__this->set_U3CPathsU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.Void NativeGalleryNamespace.NGMediaReceiveCallbackAndroid::OnMediaReceived(System.String)
extern "C" IL2CPP_METHOD_ATTR void NGMediaReceiveCallbackAndroid_OnMediaReceived_m964364251 (NGMediaReceiveCallbackAndroid_t379387538 * __this, String_t* ___path0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = ___path0;
		NGMediaReceiveCallbackAndroid_set_Path_m3190655345(__this, L_0, /*hidden argument*/NULL);
		RuntimeObject * L_1 = __this->get_threadLock_4();
		V_0 = L_1;
		RuntimeObject * L_2 = V_0;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
	}

IL_0014:
	try
	{ // begin try (depth: 1)
		RuntimeObject * L_3 = __this->get_threadLock_4();
		Monitor_Pulse_m82725344(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x2B, FINALLY_0024);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0024;
	}

FINALLY_0024:
	{ // begin finally (depth: 1)
		RuntimeObject * L_4 = V_0;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(36)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(36)
	{
		IL2CPP_JUMP_TBL(0x2B, IL_002b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_002b:
	{
		return;
	}
}
// System.Void NativeGalleryNamespace.NGMediaReceiveCallbackAndroid::OnMultipleMediaReceived(System.String)
extern "C" IL2CPP_METHOD_ATTR void NGMediaReceiveCallbackAndroid_OnMultipleMediaReceived_m318794684 (NGMediaReceiveCallbackAndroid_t379387538 * __this, String_t* ___paths0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NGMediaReceiveCallbackAndroid_OnMultipleMediaReceived_m318794684_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t1281789340* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	StringU5BU5D_t1281789340* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject * V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = ___paths0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		StringU5BU5D_t1281789340* L_2 = (StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)0);
		NGMediaReceiveCallbackAndroid_set_Paths_m3892898157(__this, L_2, /*hidden argument*/NULL);
		goto IL_00b6;
	}

IL_001c:
	{
		String_t* L_3 = ___paths0;
		CharU5BU5D_t3528271667* L_4 = (CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t3528271667* L_5 = L_4;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)62));
		NullCheck(L_3);
		StringU5BU5D_t1281789340* L_6 = String_Split_m3646115398(L_3, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		V_1 = 0;
		V_2 = 0;
		goto IL_004c;
	}

IL_0037:
	{
		StringU5BU5D_t1281789340* L_7 = V_0;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		String_t* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_11 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_0048;
		}
	}
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0048:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_004c:
	{
		int32_t L_14 = V_2;
		StringU5BU5D_t1281789340* L_15 = V_0;
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_15)->max_length)))))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_16 = V_1;
		if (L_16)
		{
			goto IL_0067;
		}
	}
	{
		StringU5BU5D_t1281789340* L_17 = (StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)0);
		V_0 = L_17;
		goto IL_00af;
	}

IL_0067:
	{
		int32_t L_18 = V_1;
		StringU5BU5D_t1281789340* L_19 = V_0;
		NullCheck(L_19);
		if ((((int32_t)L_18) == ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_19)->max_length)))))))
		{
			goto IL_00af;
		}
	}
	{
		int32_t L_20 = V_1;
		StringU5BU5D_t1281789340* L_21 = (StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)L_20);
		V_3 = L_21;
		V_4 = 0;
		V_5 = 0;
		goto IL_00a3;
	}

IL_0082:
	{
		StringU5BU5D_t1281789340* L_22 = V_0;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		String_t* L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_26 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_25, /*hidden argument*/NULL);
		if (L_26)
		{
			goto IL_009d;
		}
	}
	{
		StringU5BU5D_t1281789340* L_27 = V_3;
		int32_t L_28 = V_5;
		int32_t L_29 = L_28;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)1));
		StringU5BU5D_t1281789340* L_30 = V_0;
		int32_t L_31 = V_4;
		NullCheck(L_30);
		int32_t L_32 = L_31;
		String_t* L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_33);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_29), (String_t*)L_33);
	}

IL_009d:
	{
		int32_t L_34 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)1));
	}

IL_00a3:
	{
		int32_t L_35 = V_4;
		StringU5BU5D_t1281789340* L_36 = V_0;
		NullCheck(L_36);
		if ((((int32_t)L_35) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_36)->max_length)))))))
		{
			goto IL_0082;
		}
	}
	{
		StringU5BU5D_t1281789340* L_37 = V_3;
		V_0 = L_37;
	}

IL_00af:
	{
		StringU5BU5D_t1281789340* L_38 = V_0;
		NGMediaReceiveCallbackAndroid_set_Paths_m3892898157(__this, L_38, /*hidden argument*/NULL);
	}

IL_00b6:
	{
		RuntimeObject * L_39 = __this->get_threadLock_4();
		V_6 = L_39;
		RuntimeObject * L_40 = V_6;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_40, /*hidden argument*/NULL);
	}

IL_00c5:
	try
	{ // begin try (depth: 1)
		RuntimeObject * L_41 = __this->get_threadLock_4();
		Monitor_Pulse_m82725344(NULL /*static, unused*/, L_41, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0xDD, FINALLY_00d5);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00d5;
	}

FINALLY_00d5:
	{ // begin finally (depth: 1)
		RuntimeObject * L_42 = V_6;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_42, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(213)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(213)
	{
		IL2CPP_JUMP_TBL(0xDD, IL_00dd)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00dd:
	{
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
// System.Void NativeGalleryNamespace.NGPermissionCallbackAndroid::.ctor(System.Object)
extern "C" IL2CPP_METHOD_ATTR void NGPermissionCallbackAndroid__ctor_m1136313408 (NGPermissionCallbackAndroid_t270292349 * __this, RuntimeObject * ___threadLock0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NGPermissionCallbackAndroid__ctor_m1136313408_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(AndroidJavaProxy_t2835824643_il2cpp_TypeInfo_var);
		AndroidJavaProxy__ctor_m545570009(__this, _stringLiteral2541873353, /*hidden argument*/NULL);
		NGPermissionCallbackAndroid_set_Result_m2198825033(__this, (-1), /*hidden argument*/NULL);
		RuntimeObject * L_0 = ___threadLock0;
		__this->set_threadLock_4(L_0);
		return;
	}
}
// System.Int32 NativeGalleryNamespace.NGPermissionCallbackAndroid::get_Result()
extern "C" IL2CPP_METHOD_ATTR int32_t NGPermissionCallbackAndroid_get_Result_m4141800061 (NGPermissionCallbackAndroid_t270292349 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CResultU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void NativeGalleryNamespace.NGPermissionCallbackAndroid::set_Result(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void NGPermissionCallbackAndroid_set_Result_m2198825033 (NGPermissionCallbackAndroid_t270292349 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CResultU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Void NativeGalleryNamespace.NGPermissionCallbackAndroid::OnPermissionResult(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void NGPermissionCallbackAndroid_OnPermissionResult_m3094518843 (NGPermissionCallbackAndroid_t270292349 * __this, int32_t ___result0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = ___result0;
		NGPermissionCallbackAndroid_set_Result_m2198825033(__this, L_0, /*hidden argument*/NULL);
		RuntimeObject * L_1 = __this->get_threadLock_4();
		V_0 = L_1;
		RuntimeObject * L_2 = V_0;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
	}

IL_0014:
	try
	{ // begin try (depth: 1)
		RuntimeObject * L_3 = __this->get_threadLock_4();
		Monitor_Pulse_m82725344(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x2B, FINALLY_0024);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0024;
	}

FINALLY_0024:
	{ // begin finally (depth: 1)
		RuntimeObject * L_4 = V_0;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(36)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(36)
	{
		IL2CPP_JUMP_TBL(0x2B, IL_002b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_002b:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif

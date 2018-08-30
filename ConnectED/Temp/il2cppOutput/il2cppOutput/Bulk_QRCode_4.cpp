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

template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
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
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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

// System.ArgumentException
struct ArgumentException_t132251570;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Byte
struct Byte_t1134296376;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Byte[][]
struct ByteU5BU5DU5BU5D_t457913172;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.Dictionary`2/Transform`1<ZXing.ResultMetadataType,System.Object,System.Collections.DictionaryEntry>
struct Transform_1_t3234404619;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t2736202052;
// System.Collections.Generic.Dictionary`2<ZXing.ResultMetadataType,System.Object>
struct Dictionary_2_t2380125725;
// System.Collections.Generic.IDictionary`2<ZXing.DecodeHintType,System.Object>
struct IDictionary_2_t3788232239;
// System.Collections.Generic.IDictionary`2<ZXing.EncodeHintType,System.Object>
struct IDictionary_2_t1434567506;
// System.Collections.Generic.IDictionary`2<ZXing.ResultMetadataType,System.Object>
struct IDictionary_2_t843977116;
// System.Collections.Generic.IEqualityComparer`1<ZXing.ResultMetadataType>
struct IEqualityComparer_1_t2328215373;
// System.Collections.Generic.IList`1<System.Byte[]>
struct IList_1_t1637000144;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t964245573;
// System.Collections.Hashtable
struct Hashtable_t1853889766;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Double
struct Double_t594665363;
// System.Exception
struct Exception_t;
// System.Globalization.Calendar
struct Calendar_t1661121569;
// System.Globalization.Calendar[]
struct CalendarU5BU5D_t3985046076;
// System.Globalization.CompareInfo
struct CompareInfo_t1092934962;
// System.Globalization.CultureInfo
struct CultureInfo_t4157843068;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t2405853701;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t435877138;
// System.Globalization.TextInfo
struct TextInfo_t3810425522;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.IFormatProvider
struct IFormatProvider_t2518567562;
// System.Int32
struct Int32_t2950945753;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.InvalidOperationException
struct InvalidOperationException_t56020091;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.UInt16
struct UInt16_t2177724958;
// System.Void
struct Void_t1185182177;
// ZXing.BaseLuminanceSource
struct BaseLuminanceSource_t3215128144;
// ZXing.Binarizer
struct Binarizer_t2848741980;
// ZXing.BinaryBitmap
struct BinaryBitmap_t3514195023;
// ZXing.Common.BitMatrix
struct BitMatrix_t2873240750;
// ZXing.Common.DecoderResult
struct DecoderResult_t4252639067;
// ZXing.Common.DetectorResult
struct DetectorResult_t2934418424;
// ZXing.Common.ReedSolomon.ReedSolomonDecoder
struct ReedSolomonDecoder_t4136138852;
// ZXing.LuminanceSource
struct LuminanceSource_t3713829503;
// ZXing.QrCode.Internal.ByteMatrix
struct ByteMatrix_t2868153292;
// ZXing.QrCode.Internal.Decoder
struct Decoder_t1927175606;
// ZXing.QrCode.Internal.Detector
struct Detector_t1946199639;
// ZXing.QrCode.Internal.ErrorCorrectionLevel
struct ErrorCorrectionLevel_t2910789944;
// ZXing.QrCode.Internal.ErrorCorrectionLevel[]
struct ErrorCorrectionLevelU5BU5D_t1870060265;
// ZXing.QrCode.Internal.Mode
struct Mode_t636918511;
// ZXing.QrCode.Internal.QRCode
struct QRCode_t4150242837;
// ZXing.QrCode.Internal.QRCodeDecoderMetaData
struct QRCodeDecoderMetaData_t3242363773;
// ZXing.QrCode.Internal.Version
struct Version_t833662726;
// ZXing.QrCode.Internal.Version/ECB
struct ECB_t144347634;
// ZXing.QrCode.Internal.Version/ECB[]
struct ECBU5BU5D_t719977991;
// ZXing.QrCode.Internal.Version/ECBlocks
struct ECBlocks_t2689482655;
// ZXing.QrCode.QRCodeReader
struct QRCodeReader_t3363387111;
// ZXing.QrCode.QRCodeWriter
struct QRCodeWriter_t1467281458;
// ZXing.RGBLuminanceSource
struct RGBLuminanceSource_t91581829;
// ZXing.ReaderException
struct ReaderException_t3787909692;
// ZXing.Result
struct Result_t940650810;
// ZXing.ResultMetadataType[]
struct ResultMetadataTypeU5BU5D_t796552602;
// ZXing.ResultPoint
struct ResultPoint_t1473505336;
// ZXing.ResultPointCallback
struct ResultPointCallback_t922799438;
// ZXing.ResultPoint[]
struct ResultPointU5BU5D_t569055209;
// ZXing.WriterException
struct WriterException_t375399354;

extern RuntimeClass* ArgumentException_t132251570_il2cpp_TypeInfo_var;
extern RuntimeClass* BarcodeFormat_t1017833927_il2cpp_TypeInfo_var;
extern RuntimeClass* BitConverter_t3118986983_il2cpp_TypeInfo_var;
extern RuntimeClass* BitMatrix_t2873240750_il2cpp_TypeInfo_var;
extern RuntimeClass* BitmapFormat_t3323075775_il2cpp_TypeInfo_var;
extern RuntimeClass* CharU5BU5D_t3528271667_il2cpp_TypeInfo_var;
extern RuntimeClass* Char_t3634460470_il2cpp_TypeInfo_var;
extern RuntimeClass* CultureInfo_t4157843068_il2cpp_TypeInfo_var;
extern RuntimeClass* DateTime_t3738529785_il2cpp_TypeInfo_var;
extern RuntimeClass* Decoder_t1927175606_il2cpp_TypeInfo_var;
extern RuntimeClass* Detector_t1946199639_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t2380125725_il2cpp_TypeInfo_var;
extern RuntimeClass* Encoder_t1190713841_il2cpp_TypeInfo_var;
extern RuntimeClass* ErrorCorrectionLevel_t2910789944_il2cpp_TypeInfo_var;
extern RuntimeClass* IDictionary_2_t1434567506_il2cpp_TypeInfo_var;
extern RuntimeClass* IDictionary_2_t3788232239_il2cpp_TypeInfo_var;
extern RuntimeClass* IDictionary_2_t843977116_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerable_1_t3757650781_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_1_t915401064_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_t1853284238_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern RuntimeClass* InvalidOperationException_t56020091_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern RuntimeClass* QRCodeDecoderMetaData_t3242363773_il2cpp_TypeInfo_var;
extern RuntimeClass* QRCodeReader_t3363387111_il2cpp_TypeInfo_var;
extern RuntimeClass* RGBLuminanceSource_t91581829_il2cpp_TypeInfo_var;
extern RuntimeClass* ResultPointU5BU5D_t569055209_il2cpp_TypeInfo_var;
extern RuntimeClass* ResultPoint_t1473505336_il2cpp_TypeInfo_var;
extern RuntimeClass* Result_t940650810_il2cpp_TypeInfo_var;
extern RuntimeClass* Single_t1397266774_il2cpp_TypeInfo_var;
extern RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1003240159;
extern String_t* _stringLiteral1229876613;
extern String_t* _stringLiteral1669413489;
extern String_t* _stringLiteral210055874;
extern String_t* _stringLiteral2505242827;
extern String_t* _stringLiteral2975982805;
extern String_t* _stringLiteral3452614645;
extern String_t* _stringLiteral404267128;
extern String_t* _stringLiteral791040696;
extern const RuntimeMethod* Dictionary_2__ctor_m654493593_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Key_m719319599_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Value_m2188744717_RuntimeMethod_var;
extern const RuntimeMethod* Nullable_1__ctor_m3852020309_RuntimeMethod_var;
extern const RuntimeMethod* Nullable_1_get_HasValue_m3011319823_RuntimeMethod_var;
extern const RuntimeMethod* Nullable_1_get_Value_m1752496362_RuntimeMethod_var;
extern const RuntimeMethod* QRCodeWriter_encode_m894986042_RuntimeMethod_var;
extern const RuntimeMethod* QRCodeWriter_renderResult_m1094602221_RuntimeMethod_var;
extern const RuntimeMethod* RGBLuminanceSource_CalculateLuminance_m1406356467_RuntimeMethod_var;
extern const RuntimeMethod* RGBLuminanceSource_DetermineBitmapFormat_m2494281707_RuntimeMethod_var;
extern const RuntimeMethod* Result__ctor_m2700342944_RuntimeMethod_var;
extern const uint32_t QRCodeReader__cctor_m3777472529_MetadataUsageId;
extern const uint32_t QRCodeReader__ctor_m631173690_MetadataUsageId;
extern const uint32_t QRCodeReader_decode_m3097525869_MetadataUsageId;
extern const uint32_t QRCodeReader_extractPureBits_m6681055_MetadataUsageId;
extern const uint32_t QRCodeWriter_encode_m894986042_MetadataUsageId;
extern const uint32_t QRCodeWriter_renderResult_m1094602221_MetadataUsageId;
extern const uint32_t RGBLuminanceSource_CalculateLuminance_m1406356467_MetadataUsageId;
extern const uint32_t RGBLuminanceSource_CreateLuminanceSource_m3839951721_MetadataUsageId;
extern const uint32_t RGBLuminanceSource_DetermineBitmapFormat_m2494281707_MetadataUsageId;
extern const uint32_t ResultPoint_Equals_m1652042900_MetadataUsageId;
extern const uint32_t ResultPoint_ToString_m3877991453_MetadataUsageId;
extern const uint32_t ResultPoint__ctor_m1099496600_MetadataUsageId;
extern const uint32_t Result_ToString_m1592039857_MetadataUsageId;
extern const uint32_t Result__ctor_m2700342944_MetadataUsageId;
extern const uint32_t Result__ctor_m734742369_MetadataUsageId;
extern const uint32_t Result_addResultPoints_m2440015003_MetadataUsageId;
extern const uint32_t Result_putAllMetadata_m2385773696_MetadataUsageId;
extern const uint32_t Result_putMetadata_m1190422464_MetadataUsageId;
extern const uint32_t SupportClass_ToBinaryString_m1361511538_MetadataUsageId;

struct ByteU5BU5D_t4116647657;
struct CharU5BU5D_t3528271667;
struct Int32U5BU5D_t385246372;
struct ObjectU5BU5D_t2843939325;
struct ECBU5BU5D_t719977991;
struct ResultPointU5BU5D_t569055209;


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
#ifndef DICTIONARY_2_T2380125725_H
#define DICTIONARY_2_T2380125725_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<ZXing.ResultMetadataType,System.Object>
struct  Dictionary_2_t2380125725  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	ResultMetadataTypeU5BU5D_t796552602* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	ObjectU5BU5D_t2843939325* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t2380125725, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t2380125725, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t2380125725, ___keySlots_6)); }
	inline ResultMetadataTypeU5BU5D_t796552602* get_keySlots_6() const { return ___keySlots_6; }
	inline ResultMetadataTypeU5BU5D_t796552602** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(ResultMetadataTypeU5BU5D_t796552602* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t2380125725, ___valueSlots_7)); }
	inline ObjectU5BU5D_t2843939325* get_valueSlots_7() const { return ___valueSlots_7; }
	inline ObjectU5BU5D_t2843939325** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(ObjectU5BU5D_t2843939325* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t2380125725, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t2380125725, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t2380125725, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t2380125725, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t2380125725, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t2380125725, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t2380125725, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t2380125725_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t3234404619 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t2380125725_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t3234404619 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t3234404619 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t3234404619 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T2380125725_H
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
#ifndef CULTUREINFO_T4157843068_H
#define CULTUREINFO_T4157843068_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.CultureInfo
struct  CultureInfo_t4157843068  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_7;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_8;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_9;
	// System.Int32 System.Globalization.CultureInfo::specific_lcid
	int32_t ___specific_lcid_10;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_11;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_12;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_13;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t435877138 * ___numInfo_14;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t2405853701 * ___dateTimeInfo_15;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_t3810425522 * ___textInfo_16;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_17;
	// System.String System.Globalization.CultureInfo::displayname
	String_t* ___displayname_18;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_19;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_20;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_21;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_22;
	// System.String System.Globalization.CultureInfo::icu_name
	String_t* ___icu_name_23;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_24;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_25;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1092934962 * ___compareInfo_26;
	// System.Int32* System.Globalization.CultureInfo::calendar_data
	int32_t* ___calendar_data_27;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_28;
	// System.Globalization.Calendar[] System.Globalization.CultureInfo::optional_calendars
	CalendarU5BU5D_t3985046076* ___optional_calendars_29;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t4157843068 * ___parent_culture_30;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_31;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t1661121569 * ___calendar_32;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_33;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_t4116647657* ___cached_serialized_form_34;

public:
	inline static int32_t get_offset_of_m_isReadOnly_7() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_isReadOnly_7)); }
	inline bool get_m_isReadOnly_7() const { return ___m_isReadOnly_7; }
	inline bool* get_address_of_m_isReadOnly_7() { return &___m_isReadOnly_7; }
	inline void set_m_isReadOnly_7(bool value)
	{
		___m_isReadOnly_7 = value;
	}

	inline static int32_t get_offset_of_cultureID_8() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___cultureID_8)); }
	inline int32_t get_cultureID_8() const { return ___cultureID_8; }
	inline int32_t* get_address_of_cultureID_8() { return &___cultureID_8; }
	inline void set_cultureID_8(int32_t value)
	{
		___cultureID_8 = value;
	}

	inline static int32_t get_offset_of_parent_lcid_9() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___parent_lcid_9)); }
	inline int32_t get_parent_lcid_9() const { return ___parent_lcid_9; }
	inline int32_t* get_address_of_parent_lcid_9() { return &___parent_lcid_9; }
	inline void set_parent_lcid_9(int32_t value)
	{
		___parent_lcid_9 = value;
	}

	inline static int32_t get_offset_of_specific_lcid_10() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___specific_lcid_10)); }
	inline int32_t get_specific_lcid_10() const { return ___specific_lcid_10; }
	inline int32_t* get_address_of_specific_lcid_10() { return &___specific_lcid_10; }
	inline void set_specific_lcid_10(int32_t value)
	{
		___specific_lcid_10 = value;
	}

	inline static int32_t get_offset_of_datetime_index_11() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___datetime_index_11)); }
	inline int32_t get_datetime_index_11() const { return ___datetime_index_11; }
	inline int32_t* get_address_of_datetime_index_11() { return &___datetime_index_11; }
	inline void set_datetime_index_11(int32_t value)
	{
		___datetime_index_11 = value;
	}

	inline static int32_t get_offset_of_number_index_12() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___number_index_12)); }
	inline int32_t get_number_index_12() const { return ___number_index_12; }
	inline int32_t* get_address_of_number_index_12() { return &___number_index_12; }
	inline void set_number_index_12(int32_t value)
	{
		___number_index_12 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_13() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_useUserOverride_13)); }
	inline bool get_m_useUserOverride_13() const { return ___m_useUserOverride_13; }
	inline bool* get_address_of_m_useUserOverride_13() { return &___m_useUserOverride_13; }
	inline void set_m_useUserOverride_13(bool value)
	{
		___m_useUserOverride_13 = value;
	}

	inline static int32_t get_offset_of_numInfo_14() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___numInfo_14)); }
	inline NumberFormatInfo_t435877138 * get_numInfo_14() const { return ___numInfo_14; }
	inline NumberFormatInfo_t435877138 ** get_address_of_numInfo_14() { return &___numInfo_14; }
	inline void set_numInfo_14(NumberFormatInfo_t435877138 * value)
	{
		___numInfo_14 = value;
		Il2CppCodeGenWriteBarrier((&___numInfo_14), value);
	}

	inline static int32_t get_offset_of_dateTimeInfo_15() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___dateTimeInfo_15)); }
	inline DateTimeFormatInfo_t2405853701 * get_dateTimeInfo_15() const { return ___dateTimeInfo_15; }
	inline DateTimeFormatInfo_t2405853701 ** get_address_of_dateTimeInfo_15() { return &___dateTimeInfo_15; }
	inline void set_dateTimeInfo_15(DateTimeFormatInfo_t2405853701 * value)
	{
		___dateTimeInfo_15 = value;
		Il2CppCodeGenWriteBarrier((&___dateTimeInfo_15), value);
	}

	inline static int32_t get_offset_of_textInfo_16() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___textInfo_16)); }
	inline TextInfo_t3810425522 * get_textInfo_16() const { return ___textInfo_16; }
	inline TextInfo_t3810425522 ** get_address_of_textInfo_16() { return &___textInfo_16; }
	inline void set_textInfo_16(TextInfo_t3810425522 * value)
	{
		___textInfo_16 = value;
		Il2CppCodeGenWriteBarrier((&___textInfo_16), value);
	}

	inline static int32_t get_offset_of_m_name_17() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_name_17)); }
	inline String_t* get_m_name_17() const { return ___m_name_17; }
	inline String_t** get_address_of_m_name_17() { return &___m_name_17; }
	inline void set_m_name_17(String_t* value)
	{
		___m_name_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_name_17), value);
	}

	inline static int32_t get_offset_of_displayname_18() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___displayname_18)); }
	inline String_t* get_displayname_18() const { return ___displayname_18; }
	inline String_t** get_address_of_displayname_18() { return &___displayname_18; }
	inline void set_displayname_18(String_t* value)
	{
		___displayname_18 = value;
		Il2CppCodeGenWriteBarrier((&___displayname_18), value);
	}

	inline static int32_t get_offset_of_englishname_19() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___englishname_19)); }
	inline String_t* get_englishname_19() const { return ___englishname_19; }
	inline String_t** get_address_of_englishname_19() { return &___englishname_19; }
	inline void set_englishname_19(String_t* value)
	{
		___englishname_19 = value;
		Il2CppCodeGenWriteBarrier((&___englishname_19), value);
	}

	inline static int32_t get_offset_of_nativename_20() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___nativename_20)); }
	inline String_t* get_nativename_20() const { return ___nativename_20; }
	inline String_t** get_address_of_nativename_20() { return &___nativename_20; }
	inline void set_nativename_20(String_t* value)
	{
		___nativename_20 = value;
		Il2CppCodeGenWriteBarrier((&___nativename_20), value);
	}

	inline static int32_t get_offset_of_iso3lang_21() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___iso3lang_21)); }
	inline String_t* get_iso3lang_21() const { return ___iso3lang_21; }
	inline String_t** get_address_of_iso3lang_21() { return &___iso3lang_21; }
	inline void set_iso3lang_21(String_t* value)
	{
		___iso3lang_21 = value;
		Il2CppCodeGenWriteBarrier((&___iso3lang_21), value);
	}

	inline static int32_t get_offset_of_iso2lang_22() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___iso2lang_22)); }
	inline String_t* get_iso2lang_22() const { return ___iso2lang_22; }
	inline String_t** get_address_of_iso2lang_22() { return &___iso2lang_22; }
	inline void set_iso2lang_22(String_t* value)
	{
		___iso2lang_22 = value;
		Il2CppCodeGenWriteBarrier((&___iso2lang_22), value);
	}

	inline static int32_t get_offset_of_icu_name_23() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___icu_name_23)); }
	inline String_t* get_icu_name_23() const { return ___icu_name_23; }
	inline String_t** get_address_of_icu_name_23() { return &___icu_name_23; }
	inline void set_icu_name_23(String_t* value)
	{
		___icu_name_23 = value;
		Il2CppCodeGenWriteBarrier((&___icu_name_23), value);
	}

	inline static int32_t get_offset_of_win3lang_24() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___win3lang_24)); }
	inline String_t* get_win3lang_24() const { return ___win3lang_24; }
	inline String_t** get_address_of_win3lang_24() { return &___win3lang_24; }
	inline void set_win3lang_24(String_t* value)
	{
		___win3lang_24 = value;
		Il2CppCodeGenWriteBarrier((&___win3lang_24), value);
	}

	inline static int32_t get_offset_of_territory_25() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___territory_25)); }
	inline String_t* get_territory_25() const { return ___territory_25; }
	inline String_t** get_address_of_territory_25() { return &___territory_25; }
	inline void set_territory_25(String_t* value)
	{
		___territory_25 = value;
		Il2CppCodeGenWriteBarrier((&___territory_25), value);
	}

	inline static int32_t get_offset_of_compareInfo_26() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___compareInfo_26)); }
	inline CompareInfo_t1092934962 * get_compareInfo_26() const { return ___compareInfo_26; }
	inline CompareInfo_t1092934962 ** get_address_of_compareInfo_26() { return &___compareInfo_26; }
	inline void set_compareInfo_26(CompareInfo_t1092934962 * value)
	{
		___compareInfo_26 = value;
		Il2CppCodeGenWriteBarrier((&___compareInfo_26), value);
	}

	inline static int32_t get_offset_of_calendar_data_27() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___calendar_data_27)); }
	inline int32_t* get_calendar_data_27() const { return ___calendar_data_27; }
	inline int32_t** get_address_of_calendar_data_27() { return &___calendar_data_27; }
	inline void set_calendar_data_27(int32_t* value)
	{
		___calendar_data_27 = value;
	}

	inline static int32_t get_offset_of_textinfo_data_28() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___textinfo_data_28)); }
	inline void* get_textinfo_data_28() const { return ___textinfo_data_28; }
	inline void** get_address_of_textinfo_data_28() { return &___textinfo_data_28; }
	inline void set_textinfo_data_28(void* value)
	{
		___textinfo_data_28 = value;
	}

	inline static int32_t get_offset_of_optional_calendars_29() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___optional_calendars_29)); }
	inline CalendarU5BU5D_t3985046076* get_optional_calendars_29() const { return ___optional_calendars_29; }
	inline CalendarU5BU5D_t3985046076** get_address_of_optional_calendars_29() { return &___optional_calendars_29; }
	inline void set_optional_calendars_29(CalendarU5BU5D_t3985046076* value)
	{
		___optional_calendars_29 = value;
		Il2CppCodeGenWriteBarrier((&___optional_calendars_29), value);
	}

	inline static int32_t get_offset_of_parent_culture_30() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___parent_culture_30)); }
	inline CultureInfo_t4157843068 * get_parent_culture_30() const { return ___parent_culture_30; }
	inline CultureInfo_t4157843068 ** get_address_of_parent_culture_30() { return &___parent_culture_30; }
	inline void set_parent_culture_30(CultureInfo_t4157843068 * value)
	{
		___parent_culture_30 = value;
		Il2CppCodeGenWriteBarrier((&___parent_culture_30), value);
	}

	inline static int32_t get_offset_of_m_dataItem_31() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_dataItem_31)); }
	inline int32_t get_m_dataItem_31() const { return ___m_dataItem_31; }
	inline int32_t* get_address_of_m_dataItem_31() { return &___m_dataItem_31; }
	inline void set_m_dataItem_31(int32_t value)
	{
		___m_dataItem_31 = value;
	}

	inline static int32_t get_offset_of_calendar_32() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___calendar_32)); }
	inline Calendar_t1661121569 * get_calendar_32() const { return ___calendar_32; }
	inline Calendar_t1661121569 ** get_address_of_calendar_32() { return &___calendar_32; }
	inline void set_calendar_32(Calendar_t1661121569 * value)
	{
		___calendar_32 = value;
		Il2CppCodeGenWriteBarrier((&___calendar_32), value);
	}

	inline static int32_t get_offset_of_constructed_33() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___constructed_33)); }
	inline bool get_constructed_33() const { return ___constructed_33; }
	inline bool* get_address_of_constructed_33() { return &___constructed_33; }
	inline void set_constructed_33(bool value)
	{
		___constructed_33 = value;
	}

	inline static int32_t get_offset_of_cached_serialized_form_34() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___cached_serialized_form_34)); }
	inline ByteU5BU5D_t4116647657* get_cached_serialized_form_34() const { return ___cached_serialized_form_34; }
	inline ByteU5BU5D_t4116647657** get_address_of_cached_serialized_form_34() { return &___cached_serialized_form_34; }
	inline void set_cached_serialized_form_34(ByteU5BU5D_t4116647657* value)
	{
		___cached_serialized_form_34 = value;
		Il2CppCodeGenWriteBarrier((&___cached_serialized_form_34), value);
	}
};

struct CultureInfo_t4157843068_StaticFields
{
public:
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t4157843068 * ___invariant_culture_info_4;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject * ___shared_table_lock_5;
	// System.Int32 System.Globalization.CultureInfo::BootstrapCultureID
	int32_t ___BootstrapCultureID_6;
	// System.String System.Globalization.CultureInfo::MSG_READONLY
	String_t* ___MSG_READONLY_35;
	// System.Collections.Hashtable System.Globalization.CultureInfo::shared_by_number
	Hashtable_t1853889766 * ___shared_by_number_36;
	// System.Collections.Hashtable System.Globalization.CultureInfo::shared_by_name
	Hashtable_t1853889766 * ___shared_by_name_37;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Globalization.CultureInfo::<>f__switch$map19
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map19_38;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Globalization.CultureInfo::<>f__switch$map1A
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map1A_39;

public:
	inline static int32_t get_offset_of_invariant_culture_info_4() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___invariant_culture_info_4)); }
	inline CultureInfo_t4157843068 * get_invariant_culture_info_4() const { return ___invariant_culture_info_4; }
	inline CultureInfo_t4157843068 ** get_address_of_invariant_culture_info_4() { return &___invariant_culture_info_4; }
	inline void set_invariant_culture_info_4(CultureInfo_t4157843068 * value)
	{
		___invariant_culture_info_4 = value;
		Il2CppCodeGenWriteBarrier((&___invariant_culture_info_4), value);
	}

	inline static int32_t get_offset_of_shared_table_lock_5() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___shared_table_lock_5)); }
	inline RuntimeObject * get_shared_table_lock_5() const { return ___shared_table_lock_5; }
	inline RuntimeObject ** get_address_of_shared_table_lock_5() { return &___shared_table_lock_5; }
	inline void set_shared_table_lock_5(RuntimeObject * value)
	{
		___shared_table_lock_5 = value;
		Il2CppCodeGenWriteBarrier((&___shared_table_lock_5), value);
	}

	inline static int32_t get_offset_of_BootstrapCultureID_6() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___BootstrapCultureID_6)); }
	inline int32_t get_BootstrapCultureID_6() const { return ___BootstrapCultureID_6; }
	inline int32_t* get_address_of_BootstrapCultureID_6() { return &___BootstrapCultureID_6; }
	inline void set_BootstrapCultureID_6(int32_t value)
	{
		___BootstrapCultureID_6 = value;
	}

	inline static int32_t get_offset_of_MSG_READONLY_35() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___MSG_READONLY_35)); }
	inline String_t* get_MSG_READONLY_35() const { return ___MSG_READONLY_35; }
	inline String_t** get_address_of_MSG_READONLY_35() { return &___MSG_READONLY_35; }
	inline void set_MSG_READONLY_35(String_t* value)
	{
		___MSG_READONLY_35 = value;
		Il2CppCodeGenWriteBarrier((&___MSG_READONLY_35), value);
	}

	inline static int32_t get_offset_of_shared_by_number_36() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___shared_by_number_36)); }
	inline Hashtable_t1853889766 * get_shared_by_number_36() const { return ___shared_by_number_36; }
	inline Hashtable_t1853889766 ** get_address_of_shared_by_number_36() { return &___shared_by_number_36; }
	inline void set_shared_by_number_36(Hashtable_t1853889766 * value)
	{
		___shared_by_number_36 = value;
		Il2CppCodeGenWriteBarrier((&___shared_by_number_36), value);
	}

	inline static int32_t get_offset_of_shared_by_name_37() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___shared_by_name_37)); }
	inline Hashtable_t1853889766 * get_shared_by_name_37() const { return ___shared_by_name_37; }
	inline Hashtable_t1853889766 ** get_address_of_shared_by_name_37() { return &___shared_by_name_37; }
	inline void set_shared_by_name_37(Hashtable_t1853889766 * value)
	{
		___shared_by_name_37 = value;
		Il2CppCodeGenWriteBarrier((&___shared_by_name_37), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map19_38() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___U3CU3Ef__switchU24map19_38)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map19_38() const { return ___U3CU3Ef__switchU24map19_38; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map19_38() { return &___U3CU3Ef__switchU24map19_38; }
	inline void set_U3CU3Ef__switchU24map19_38(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map19_38 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map19_38), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map1A_39() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___U3CU3Ef__switchU24map1A_39)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map1A_39() const { return ___U3CU3Ef__switchU24map1A_39; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map1A_39() { return &___U3CU3Ef__switchU24map1A_39; }
	inline void set_U3CU3Ef__switchU24map1A_39(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map1A_39 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map1A_39), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CULTUREINFO_T4157843068_H
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
#ifndef STRINGBUILDER_T_H
#define STRINGBUILDER_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.StringBuilder
struct  StringBuilder_t  : public RuntimeObject
{
public:
	// System.Int32 System.Text.StringBuilder::_length
	int32_t ____length_1;
	// System.String System.Text.StringBuilder::_str
	String_t* ____str_2;
	// System.String System.Text.StringBuilder::_cached_str
	String_t* ____cached_str_3;
	// System.Int32 System.Text.StringBuilder::_maxCapacity
	int32_t ____maxCapacity_4;

public:
	inline static int32_t get_offset_of__length_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____length_1)); }
	inline int32_t get__length_1() const { return ____length_1; }
	inline int32_t* get_address_of__length_1() { return &____length_1; }
	inline void set__length_1(int32_t value)
	{
		____length_1 = value;
	}

	inline static int32_t get_offset_of__str_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____str_2)); }
	inline String_t* get__str_2() const { return ____str_2; }
	inline String_t** get_address_of__str_2() { return &____str_2; }
	inline void set__str_2(String_t* value)
	{
		____str_2 = value;
		Il2CppCodeGenWriteBarrier((&____str_2), value);
	}

	inline static int32_t get_offset_of__cached_str_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____cached_str_3)); }
	inline String_t* get__cached_str_3() const { return ____cached_str_3; }
	inline String_t** get_address_of__cached_str_3() { return &____cached_str_3; }
	inline void set__cached_str_3(String_t* value)
	{
		____cached_str_3 = value;
		Il2CppCodeGenWriteBarrier((&____cached_str_3), value);
	}

	inline static int32_t get_offset_of__maxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____maxCapacity_4)); }
	inline int32_t get__maxCapacity_4() const { return ____maxCapacity_4; }
	inline int32_t* get_address_of__maxCapacity_4() { return &____maxCapacity_4; }
	inline void set__maxCapacity_4(int32_t value)
	{
		____maxCapacity_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGBUILDER_T_H
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
#ifndef BINARYBITMAP_T3514195023_H
#define BINARYBITMAP_T3514195023_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.BinaryBitmap
struct  BinaryBitmap_t3514195023  : public RuntimeObject
{
public:
	// ZXing.Binarizer ZXing.BinaryBitmap::binarizer
	Binarizer_t2848741980 * ___binarizer_0;
	// ZXing.Common.BitMatrix ZXing.BinaryBitmap::matrix
	BitMatrix_t2873240750 * ___matrix_1;

public:
	inline static int32_t get_offset_of_binarizer_0() { return static_cast<int32_t>(offsetof(BinaryBitmap_t3514195023, ___binarizer_0)); }
	inline Binarizer_t2848741980 * get_binarizer_0() const { return ___binarizer_0; }
	inline Binarizer_t2848741980 ** get_address_of_binarizer_0() { return &___binarizer_0; }
	inline void set_binarizer_0(Binarizer_t2848741980 * value)
	{
		___binarizer_0 = value;
		Il2CppCodeGenWriteBarrier((&___binarizer_0), value);
	}

	inline static int32_t get_offset_of_matrix_1() { return static_cast<int32_t>(offsetof(BinaryBitmap_t3514195023, ___matrix_1)); }
	inline BitMatrix_t2873240750 * get_matrix_1() const { return ___matrix_1; }
	inline BitMatrix_t2873240750 ** get_address_of_matrix_1() { return &___matrix_1; }
	inline void set_matrix_1(BitMatrix_t2873240750 * value)
	{
		___matrix_1 = value;
		Il2CppCodeGenWriteBarrier((&___matrix_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINARYBITMAP_T3514195023_H
#ifndef BITMATRIX_T2873240750_H
#define BITMATRIX_T2873240750_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.Common.BitMatrix
struct  BitMatrix_t2873240750  : public RuntimeObject
{
public:
	// System.Int32 ZXing.Common.BitMatrix::width
	int32_t ___width_0;
	// System.Int32 ZXing.Common.BitMatrix::height
	int32_t ___height_1;
	// System.Int32 ZXing.Common.BitMatrix::rowSize
	int32_t ___rowSize_2;
	// System.Int32[] ZXing.Common.BitMatrix::bits
	Int32U5BU5D_t385246372* ___bits_3;

public:
	inline static int32_t get_offset_of_width_0() { return static_cast<int32_t>(offsetof(BitMatrix_t2873240750, ___width_0)); }
	inline int32_t get_width_0() const { return ___width_0; }
	inline int32_t* get_address_of_width_0() { return &___width_0; }
	inline void set_width_0(int32_t value)
	{
		___width_0 = value;
	}

	inline static int32_t get_offset_of_height_1() { return static_cast<int32_t>(offsetof(BitMatrix_t2873240750, ___height_1)); }
	inline int32_t get_height_1() const { return ___height_1; }
	inline int32_t* get_address_of_height_1() { return &___height_1; }
	inline void set_height_1(int32_t value)
	{
		___height_1 = value;
	}

	inline static int32_t get_offset_of_rowSize_2() { return static_cast<int32_t>(offsetof(BitMatrix_t2873240750, ___rowSize_2)); }
	inline int32_t get_rowSize_2() const { return ___rowSize_2; }
	inline int32_t* get_address_of_rowSize_2() { return &___rowSize_2; }
	inline void set_rowSize_2(int32_t value)
	{
		___rowSize_2 = value;
	}

	inline static int32_t get_offset_of_bits_3() { return static_cast<int32_t>(offsetof(BitMatrix_t2873240750, ___bits_3)); }
	inline Int32U5BU5D_t385246372* get_bits_3() const { return ___bits_3; }
	inline Int32U5BU5D_t385246372** get_address_of_bits_3() { return &___bits_3; }
	inline void set_bits_3(Int32U5BU5D_t385246372* value)
	{
		___bits_3 = value;
		Il2CppCodeGenWriteBarrier((&___bits_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BITMATRIX_T2873240750_H
#ifndef DECODERRESULT_T4252639067_H
#define DECODERRESULT_T4252639067_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.Common.DecoderResult
struct  DecoderResult_t4252639067  : public RuntimeObject
{
public:
	// System.Byte[] ZXing.Common.DecoderResult::<RawBytes>k__BackingField
	ByteU5BU5D_t4116647657* ___U3CRawBytesU3Ek__BackingField_0;
	// System.String ZXing.Common.DecoderResult::<Text>k__BackingField
	String_t* ___U3CTextU3Ek__BackingField_1;
	// System.Collections.Generic.IList`1<System.Byte[]> ZXing.Common.DecoderResult::<ByteSegments>k__BackingField
	RuntimeObject* ___U3CByteSegmentsU3Ek__BackingField_2;
	// System.String ZXing.Common.DecoderResult::<ECLevel>k__BackingField
	String_t* ___U3CECLevelU3Ek__BackingField_3;
	// System.Int32 ZXing.Common.DecoderResult::<ErrorsCorrected>k__BackingField
	int32_t ___U3CErrorsCorrectedU3Ek__BackingField_4;
	// System.Int32 ZXing.Common.DecoderResult::<StructuredAppendSequenceNumber>k__BackingField
	int32_t ___U3CStructuredAppendSequenceNumberU3Ek__BackingField_5;
	// System.Int32 ZXing.Common.DecoderResult::<Erasures>k__BackingField
	int32_t ___U3CErasuresU3Ek__BackingField_6;
	// System.Int32 ZXing.Common.DecoderResult::<StructuredAppendParity>k__BackingField
	int32_t ___U3CStructuredAppendParityU3Ek__BackingField_7;
	// System.Object ZXing.Common.DecoderResult::<Other>k__BackingField
	RuntimeObject * ___U3COtherU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_U3CRawBytesU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(DecoderResult_t4252639067, ___U3CRawBytesU3Ek__BackingField_0)); }
	inline ByteU5BU5D_t4116647657* get_U3CRawBytesU3Ek__BackingField_0() const { return ___U3CRawBytesU3Ek__BackingField_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_U3CRawBytesU3Ek__BackingField_0() { return &___U3CRawBytesU3Ek__BackingField_0; }
	inline void set_U3CRawBytesU3Ek__BackingField_0(ByteU5BU5D_t4116647657* value)
	{
		___U3CRawBytesU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CRawBytesU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CTextU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(DecoderResult_t4252639067, ___U3CTextU3Ek__BackingField_1)); }
	inline String_t* get_U3CTextU3Ek__BackingField_1() const { return ___U3CTextU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CTextU3Ek__BackingField_1() { return &___U3CTextU3Ek__BackingField_1; }
	inline void set_U3CTextU3Ek__BackingField_1(String_t* value)
	{
		___U3CTextU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTextU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CByteSegmentsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(DecoderResult_t4252639067, ___U3CByteSegmentsU3Ek__BackingField_2)); }
	inline RuntimeObject* get_U3CByteSegmentsU3Ek__BackingField_2() const { return ___U3CByteSegmentsU3Ek__BackingField_2; }
	inline RuntimeObject** get_address_of_U3CByteSegmentsU3Ek__BackingField_2() { return &___U3CByteSegmentsU3Ek__BackingField_2; }
	inline void set_U3CByteSegmentsU3Ek__BackingField_2(RuntimeObject* value)
	{
		___U3CByteSegmentsU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CByteSegmentsU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CECLevelU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(DecoderResult_t4252639067, ___U3CECLevelU3Ek__BackingField_3)); }
	inline String_t* get_U3CECLevelU3Ek__BackingField_3() const { return ___U3CECLevelU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CECLevelU3Ek__BackingField_3() { return &___U3CECLevelU3Ek__BackingField_3; }
	inline void set_U3CECLevelU3Ek__BackingField_3(String_t* value)
	{
		___U3CECLevelU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CECLevelU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3CErrorsCorrectedU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(DecoderResult_t4252639067, ___U3CErrorsCorrectedU3Ek__BackingField_4)); }
	inline int32_t get_U3CErrorsCorrectedU3Ek__BackingField_4() const { return ___U3CErrorsCorrectedU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CErrorsCorrectedU3Ek__BackingField_4() { return &___U3CErrorsCorrectedU3Ek__BackingField_4; }
	inline void set_U3CErrorsCorrectedU3Ek__BackingField_4(int32_t value)
	{
		___U3CErrorsCorrectedU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CStructuredAppendSequenceNumberU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(DecoderResult_t4252639067, ___U3CStructuredAppendSequenceNumberU3Ek__BackingField_5)); }
	inline int32_t get_U3CStructuredAppendSequenceNumberU3Ek__BackingField_5() const { return ___U3CStructuredAppendSequenceNumberU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CStructuredAppendSequenceNumberU3Ek__BackingField_5() { return &___U3CStructuredAppendSequenceNumberU3Ek__BackingField_5; }
	inline void set_U3CStructuredAppendSequenceNumberU3Ek__BackingField_5(int32_t value)
	{
		___U3CStructuredAppendSequenceNumberU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CErasuresU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(DecoderResult_t4252639067, ___U3CErasuresU3Ek__BackingField_6)); }
	inline int32_t get_U3CErasuresU3Ek__BackingField_6() const { return ___U3CErasuresU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CErasuresU3Ek__BackingField_6() { return &___U3CErasuresU3Ek__BackingField_6; }
	inline void set_U3CErasuresU3Ek__BackingField_6(int32_t value)
	{
		___U3CErasuresU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CStructuredAppendParityU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(DecoderResult_t4252639067, ___U3CStructuredAppendParityU3Ek__BackingField_7)); }
	inline int32_t get_U3CStructuredAppendParityU3Ek__BackingField_7() const { return ___U3CStructuredAppendParityU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3CStructuredAppendParityU3Ek__BackingField_7() { return &___U3CStructuredAppendParityU3Ek__BackingField_7; }
	inline void set_U3CStructuredAppendParityU3Ek__BackingField_7(int32_t value)
	{
		___U3CStructuredAppendParityU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3COtherU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(DecoderResult_t4252639067, ___U3COtherU3Ek__BackingField_8)); }
	inline RuntimeObject * get_U3COtherU3Ek__BackingField_8() const { return ___U3COtherU3Ek__BackingField_8; }
	inline RuntimeObject ** get_address_of_U3COtherU3Ek__BackingField_8() { return &___U3COtherU3Ek__BackingField_8; }
	inline void set_U3COtherU3Ek__BackingField_8(RuntimeObject * value)
	{
		___U3COtherU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3COtherU3Ek__BackingField_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODERRESULT_T4252639067_H
#ifndef DETECTORRESULT_T2934418424_H
#define DETECTORRESULT_T2934418424_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.Common.DetectorResult
struct  DetectorResult_t2934418424  : public RuntimeObject
{
public:
	// ZXing.Common.BitMatrix ZXing.Common.DetectorResult::<Bits>k__BackingField
	BitMatrix_t2873240750 * ___U3CBitsU3Ek__BackingField_0;
	// ZXing.ResultPoint[] ZXing.Common.DetectorResult::<Points>k__BackingField
	ResultPointU5BU5D_t569055209* ___U3CPointsU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CBitsU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(DetectorResult_t2934418424, ___U3CBitsU3Ek__BackingField_0)); }
	inline BitMatrix_t2873240750 * get_U3CBitsU3Ek__BackingField_0() const { return ___U3CBitsU3Ek__BackingField_0; }
	inline BitMatrix_t2873240750 ** get_address_of_U3CBitsU3Ek__BackingField_0() { return &___U3CBitsU3Ek__BackingField_0; }
	inline void set_U3CBitsU3Ek__BackingField_0(BitMatrix_t2873240750 * value)
	{
		___U3CBitsU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CBitsU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CPointsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(DetectorResult_t2934418424, ___U3CPointsU3Ek__BackingField_1)); }
	inline ResultPointU5BU5D_t569055209* get_U3CPointsU3Ek__BackingField_1() const { return ___U3CPointsU3Ek__BackingField_1; }
	inline ResultPointU5BU5D_t569055209** get_address_of_U3CPointsU3Ek__BackingField_1() { return &___U3CPointsU3Ek__BackingField_1; }
	inline void set_U3CPointsU3Ek__BackingField_1(ResultPointU5BU5D_t569055209* value)
	{
		___U3CPointsU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CPointsU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DETECTORRESULT_T2934418424_H
#ifndef LUMINANCESOURCE_T3713829503_H
#define LUMINANCESOURCE_T3713829503_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.LuminanceSource
struct  LuminanceSource_t3713829503  : public RuntimeObject
{
public:
	// System.Int32 ZXing.LuminanceSource::width
	int32_t ___width_0;
	// System.Int32 ZXing.LuminanceSource::height
	int32_t ___height_1;

public:
	inline static int32_t get_offset_of_width_0() { return static_cast<int32_t>(offsetof(LuminanceSource_t3713829503, ___width_0)); }
	inline int32_t get_width_0() const { return ___width_0; }
	inline int32_t* get_address_of_width_0() { return &___width_0; }
	inline void set_width_0(int32_t value)
	{
		___width_0 = value;
	}

	inline static int32_t get_offset_of_height_1() { return static_cast<int32_t>(offsetof(LuminanceSource_t3713829503, ___height_1)); }
	inline int32_t get_height_1() const { return ___height_1; }
	inline int32_t* get_address_of_height_1() { return &___height_1; }
	inline void set_height_1(int32_t value)
	{
		___height_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LUMINANCESOURCE_T3713829503_H
#ifndef BYTEMATRIX_T2868153292_H
#define BYTEMATRIX_T2868153292_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.QrCode.Internal.ByteMatrix
struct  ByteMatrix_t2868153292  : public RuntimeObject
{
public:
	// System.Byte[][] ZXing.QrCode.Internal.ByteMatrix::bytes
	ByteU5BU5DU5BU5D_t457913172* ___bytes_0;
	// System.Int32 ZXing.QrCode.Internal.ByteMatrix::width
	int32_t ___width_1;
	// System.Int32 ZXing.QrCode.Internal.ByteMatrix::height
	int32_t ___height_2;

public:
	inline static int32_t get_offset_of_bytes_0() { return static_cast<int32_t>(offsetof(ByteMatrix_t2868153292, ___bytes_0)); }
	inline ByteU5BU5DU5BU5D_t457913172* get_bytes_0() const { return ___bytes_0; }
	inline ByteU5BU5DU5BU5D_t457913172** get_address_of_bytes_0() { return &___bytes_0; }
	inline void set_bytes_0(ByteU5BU5DU5BU5D_t457913172* value)
	{
		___bytes_0 = value;
		Il2CppCodeGenWriteBarrier((&___bytes_0), value);
	}

	inline static int32_t get_offset_of_width_1() { return static_cast<int32_t>(offsetof(ByteMatrix_t2868153292, ___width_1)); }
	inline int32_t get_width_1() const { return ___width_1; }
	inline int32_t* get_address_of_width_1() { return &___width_1; }
	inline void set_width_1(int32_t value)
	{
		___width_1 = value;
	}

	inline static int32_t get_offset_of_height_2() { return static_cast<int32_t>(offsetof(ByteMatrix_t2868153292, ___height_2)); }
	inline int32_t get_height_2() const { return ___height_2; }
	inline int32_t* get_address_of_height_2() { return &___height_2; }
	inline void set_height_2(int32_t value)
	{
		___height_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTEMATRIX_T2868153292_H
#ifndef DECODER_T1927175606_H
#define DECODER_T1927175606_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.QrCode.Internal.Decoder
struct  Decoder_t1927175606  : public RuntimeObject
{
public:
	// ZXing.Common.ReedSolomon.ReedSolomonDecoder ZXing.QrCode.Internal.Decoder::rsDecoder
	ReedSolomonDecoder_t4136138852 * ___rsDecoder_0;

public:
	inline static int32_t get_offset_of_rsDecoder_0() { return static_cast<int32_t>(offsetof(Decoder_t1927175606, ___rsDecoder_0)); }
	inline ReedSolomonDecoder_t4136138852 * get_rsDecoder_0() const { return ___rsDecoder_0; }
	inline ReedSolomonDecoder_t4136138852 ** get_address_of_rsDecoder_0() { return &___rsDecoder_0; }
	inline void set_rsDecoder_0(ReedSolomonDecoder_t4136138852 * value)
	{
		___rsDecoder_0 = value;
		Il2CppCodeGenWriteBarrier((&___rsDecoder_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECODER_T1927175606_H
#ifndef DETECTOR_T1946199639_H
#define DETECTOR_T1946199639_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.QrCode.Internal.Detector
struct  Detector_t1946199639  : public RuntimeObject
{
public:
	// ZXing.Common.BitMatrix ZXing.QrCode.Internal.Detector::image
	BitMatrix_t2873240750 * ___image_0;
	// ZXing.ResultPointCallback ZXing.QrCode.Internal.Detector::resultPointCallback
	ResultPointCallback_t922799438 * ___resultPointCallback_1;

public:
	inline static int32_t get_offset_of_image_0() { return static_cast<int32_t>(offsetof(Detector_t1946199639, ___image_0)); }
	inline BitMatrix_t2873240750 * get_image_0() const { return ___image_0; }
	inline BitMatrix_t2873240750 ** get_address_of_image_0() { return &___image_0; }
	inline void set_image_0(BitMatrix_t2873240750 * value)
	{
		___image_0 = value;
		Il2CppCodeGenWriteBarrier((&___image_0), value);
	}

	inline static int32_t get_offset_of_resultPointCallback_1() { return static_cast<int32_t>(offsetof(Detector_t1946199639, ___resultPointCallback_1)); }
	inline ResultPointCallback_t922799438 * get_resultPointCallback_1() const { return ___resultPointCallback_1; }
	inline ResultPointCallback_t922799438 ** get_address_of_resultPointCallback_1() { return &___resultPointCallback_1; }
	inline void set_resultPointCallback_1(ResultPointCallback_t922799438 * value)
	{
		___resultPointCallback_1 = value;
		Il2CppCodeGenWriteBarrier((&___resultPointCallback_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DETECTOR_T1946199639_H
#ifndef ERRORCORRECTIONLEVEL_T2910789944_H
#define ERRORCORRECTIONLEVEL_T2910789944_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.QrCode.Internal.ErrorCorrectionLevel
struct  ErrorCorrectionLevel_t2910789944  : public RuntimeObject
{
public:
	// System.Int32 ZXing.QrCode.Internal.ErrorCorrectionLevel::bits
	int32_t ___bits_5;
	// System.Int32 ZXing.QrCode.Internal.ErrorCorrectionLevel::ordinal_Renamed_Field
	int32_t ___ordinal_Renamed_Field_6;
	// System.String ZXing.QrCode.Internal.ErrorCorrectionLevel::name
	String_t* ___name_7;

public:
	inline static int32_t get_offset_of_bits_5() { return static_cast<int32_t>(offsetof(ErrorCorrectionLevel_t2910789944, ___bits_5)); }
	inline int32_t get_bits_5() const { return ___bits_5; }
	inline int32_t* get_address_of_bits_5() { return &___bits_5; }
	inline void set_bits_5(int32_t value)
	{
		___bits_5 = value;
	}

	inline static int32_t get_offset_of_ordinal_Renamed_Field_6() { return static_cast<int32_t>(offsetof(ErrorCorrectionLevel_t2910789944, ___ordinal_Renamed_Field_6)); }
	inline int32_t get_ordinal_Renamed_Field_6() const { return ___ordinal_Renamed_Field_6; }
	inline int32_t* get_address_of_ordinal_Renamed_Field_6() { return &___ordinal_Renamed_Field_6; }
	inline void set_ordinal_Renamed_Field_6(int32_t value)
	{
		___ordinal_Renamed_Field_6 = value;
	}

	inline static int32_t get_offset_of_name_7() { return static_cast<int32_t>(offsetof(ErrorCorrectionLevel_t2910789944, ___name_7)); }
	inline String_t* get_name_7() const { return ___name_7; }
	inline String_t** get_address_of_name_7() { return &___name_7; }
	inline void set_name_7(String_t* value)
	{
		___name_7 = value;
		Il2CppCodeGenWriteBarrier((&___name_7), value);
	}
};

struct ErrorCorrectionLevel_t2910789944_StaticFields
{
public:
	// ZXing.QrCode.Internal.ErrorCorrectionLevel ZXing.QrCode.Internal.ErrorCorrectionLevel::L
	ErrorCorrectionLevel_t2910789944 * ___L_0;
	// ZXing.QrCode.Internal.ErrorCorrectionLevel ZXing.QrCode.Internal.ErrorCorrectionLevel::M
	ErrorCorrectionLevel_t2910789944 * ___M_1;
	// ZXing.QrCode.Internal.ErrorCorrectionLevel ZXing.QrCode.Internal.ErrorCorrectionLevel::Q
	ErrorCorrectionLevel_t2910789944 * ___Q_2;
	// ZXing.QrCode.Internal.ErrorCorrectionLevel ZXing.QrCode.Internal.ErrorCorrectionLevel::H
	ErrorCorrectionLevel_t2910789944 * ___H_3;
	// ZXing.QrCode.Internal.ErrorCorrectionLevel[] ZXing.QrCode.Internal.ErrorCorrectionLevel::FOR_BITS
	ErrorCorrectionLevelU5BU5D_t1870060265* ___FOR_BITS_4;

public:
	inline static int32_t get_offset_of_L_0() { return static_cast<int32_t>(offsetof(ErrorCorrectionLevel_t2910789944_StaticFields, ___L_0)); }
	inline ErrorCorrectionLevel_t2910789944 * get_L_0() const { return ___L_0; }
	inline ErrorCorrectionLevel_t2910789944 ** get_address_of_L_0() { return &___L_0; }
	inline void set_L_0(ErrorCorrectionLevel_t2910789944 * value)
	{
		___L_0 = value;
		Il2CppCodeGenWriteBarrier((&___L_0), value);
	}

	inline static int32_t get_offset_of_M_1() { return static_cast<int32_t>(offsetof(ErrorCorrectionLevel_t2910789944_StaticFields, ___M_1)); }
	inline ErrorCorrectionLevel_t2910789944 * get_M_1() const { return ___M_1; }
	inline ErrorCorrectionLevel_t2910789944 ** get_address_of_M_1() { return &___M_1; }
	inline void set_M_1(ErrorCorrectionLevel_t2910789944 * value)
	{
		___M_1 = value;
		Il2CppCodeGenWriteBarrier((&___M_1), value);
	}

	inline static int32_t get_offset_of_Q_2() { return static_cast<int32_t>(offsetof(ErrorCorrectionLevel_t2910789944_StaticFields, ___Q_2)); }
	inline ErrorCorrectionLevel_t2910789944 * get_Q_2() const { return ___Q_2; }
	inline ErrorCorrectionLevel_t2910789944 ** get_address_of_Q_2() { return &___Q_2; }
	inline void set_Q_2(ErrorCorrectionLevel_t2910789944 * value)
	{
		___Q_2 = value;
		Il2CppCodeGenWriteBarrier((&___Q_2), value);
	}

	inline static int32_t get_offset_of_H_3() { return static_cast<int32_t>(offsetof(ErrorCorrectionLevel_t2910789944_StaticFields, ___H_3)); }
	inline ErrorCorrectionLevel_t2910789944 * get_H_3() const { return ___H_3; }
	inline ErrorCorrectionLevel_t2910789944 ** get_address_of_H_3() { return &___H_3; }
	inline void set_H_3(ErrorCorrectionLevel_t2910789944 * value)
	{
		___H_3 = value;
		Il2CppCodeGenWriteBarrier((&___H_3), value);
	}

	inline static int32_t get_offset_of_FOR_BITS_4() { return static_cast<int32_t>(offsetof(ErrorCorrectionLevel_t2910789944_StaticFields, ___FOR_BITS_4)); }
	inline ErrorCorrectionLevelU5BU5D_t1870060265* get_FOR_BITS_4() const { return ___FOR_BITS_4; }
	inline ErrorCorrectionLevelU5BU5D_t1870060265** get_address_of_FOR_BITS_4() { return &___FOR_BITS_4; }
	inline void set_FOR_BITS_4(ErrorCorrectionLevelU5BU5D_t1870060265* value)
	{
		___FOR_BITS_4 = value;
		Il2CppCodeGenWriteBarrier((&___FOR_BITS_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ERRORCORRECTIONLEVEL_T2910789944_H
#ifndef QRCODE_T4150242837_H
#define QRCODE_T4150242837_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.QrCode.Internal.QRCode
struct  QRCode_t4150242837  : public RuntimeObject
{
public:
	// ZXing.QrCode.Internal.Mode ZXing.QrCode.Internal.QRCode::<Mode>k__BackingField
	Mode_t636918511 * ___U3CModeU3Ek__BackingField_1;
	// ZXing.QrCode.Internal.ErrorCorrectionLevel ZXing.QrCode.Internal.QRCode::<ECLevel>k__BackingField
	ErrorCorrectionLevel_t2910789944 * ___U3CECLevelU3Ek__BackingField_2;
	// ZXing.QrCode.Internal.Version ZXing.QrCode.Internal.QRCode::<Version>k__BackingField
	Version_t833662726 * ___U3CVersionU3Ek__BackingField_3;
	// System.Int32 ZXing.QrCode.Internal.QRCode::<MaskPattern>k__BackingField
	int32_t ___U3CMaskPatternU3Ek__BackingField_4;
	// ZXing.QrCode.Internal.ByteMatrix ZXing.QrCode.Internal.QRCode::<Matrix>k__BackingField
	ByteMatrix_t2868153292 * ___U3CMatrixU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CModeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(QRCode_t4150242837, ___U3CModeU3Ek__BackingField_1)); }
	inline Mode_t636918511 * get_U3CModeU3Ek__BackingField_1() const { return ___U3CModeU3Ek__BackingField_1; }
	inline Mode_t636918511 ** get_address_of_U3CModeU3Ek__BackingField_1() { return &___U3CModeU3Ek__BackingField_1; }
	inline void set_U3CModeU3Ek__BackingField_1(Mode_t636918511 * value)
	{
		___U3CModeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CModeU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CECLevelU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(QRCode_t4150242837, ___U3CECLevelU3Ek__BackingField_2)); }
	inline ErrorCorrectionLevel_t2910789944 * get_U3CECLevelU3Ek__BackingField_2() const { return ___U3CECLevelU3Ek__BackingField_2; }
	inline ErrorCorrectionLevel_t2910789944 ** get_address_of_U3CECLevelU3Ek__BackingField_2() { return &___U3CECLevelU3Ek__BackingField_2; }
	inline void set_U3CECLevelU3Ek__BackingField_2(ErrorCorrectionLevel_t2910789944 * value)
	{
		___U3CECLevelU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CECLevelU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CVersionU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(QRCode_t4150242837, ___U3CVersionU3Ek__BackingField_3)); }
	inline Version_t833662726 * get_U3CVersionU3Ek__BackingField_3() const { return ___U3CVersionU3Ek__BackingField_3; }
	inline Version_t833662726 ** get_address_of_U3CVersionU3Ek__BackingField_3() { return &___U3CVersionU3Ek__BackingField_3; }
	inline void set_U3CVersionU3Ek__BackingField_3(Version_t833662726 * value)
	{
		___U3CVersionU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CVersionU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3CMaskPatternU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(QRCode_t4150242837, ___U3CMaskPatternU3Ek__BackingField_4)); }
	inline int32_t get_U3CMaskPatternU3Ek__BackingField_4() const { return ___U3CMaskPatternU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CMaskPatternU3Ek__BackingField_4() { return &___U3CMaskPatternU3Ek__BackingField_4; }
	inline void set_U3CMaskPatternU3Ek__BackingField_4(int32_t value)
	{
		___U3CMaskPatternU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CMatrixU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(QRCode_t4150242837, ___U3CMatrixU3Ek__BackingField_5)); }
	inline ByteMatrix_t2868153292 * get_U3CMatrixU3Ek__BackingField_5() const { return ___U3CMatrixU3Ek__BackingField_5; }
	inline ByteMatrix_t2868153292 ** get_address_of_U3CMatrixU3Ek__BackingField_5() { return &___U3CMatrixU3Ek__BackingField_5; }
	inline void set_U3CMatrixU3Ek__BackingField_5(ByteMatrix_t2868153292 * value)
	{
		___U3CMatrixU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CMatrixU3Ek__BackingField_5), value);
	}
};

struct QRCode_t4150242837_StaticFields
{
public:
	// System.Int32 ZXing.QrCode.Internal.QRCode::NUM_MASK_PATTERNS
	int32_t ___NUM_MASK_PATTERNS_0;

public:
	inline static int32_t get_offset_of_NUM_MASK_PATTERNS_0() { return static_cast<int32_t>(offsetof(QRCode_t4150242837_StaticFields, ___NUM_MASK_PATTERNS_0)); }
	inline int32_t get_NUM_MASK_PATTERNS_0() const { return ___NUM_MASK_PATTERNS_0; }
	inline int32_t* get_address_of_NUM_MASK_PATTERNS_0() { return &___NUM_MASK_PATTERNS_0; }
	inline void set_NUM_MASK_PATTERNS_0(int32_t value)
	{
		___NUM_MASK_PATTERNS_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QRCODE_T4150242837_H
#ifndef QRCODEDECODERMETADATA_T3242363773_H
#define QRCODEDECODERMETADATA_T3242363773_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.QrCode.Internal.QRCodeDecoderMetaData
struct  QRCodeDecoderMetaData_t3242363773  : public RuntimeObject
{
public:
	// System.Boolean ZXing.QrCode.Internal.QRCodeDecoderMetaData::mirrored
	bool ___mirrored_0;

public:
	inline static int32_t get_offset_of_mirrored_0() { return static_cast<int32_t>(offsetof(QRCodeDecoderMetaData_t3242363773, ___mirrored_0)); }
	inline bool get_mirrored_0() const { return ___mirrored_0; }
	inline bool* get_address_of_mirrored_0() { return &___mirrored_0; }
	inline void set_mirrored_0(bool value)
	{
		___mirrored_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QRCODEDECODERMETADATA_T3242363773_H
#ifndef ECB_T144347634_H
#define ECB_T144347634_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.QrCode.Internal.Version/ECB
struct  ECB_t144347634  : public RuntimeObject
{
public:
	// System.Int32 ZXing.QrCode.Internal.Version/ECB::count
	int32_t ___count_0;
	// System.Int32 ZXing.QrCode.Internal.Version/ECB::dataCodewords
	int32_t ___dataCodewords_1;

public:
	inline static int32_t get_offset_of_count_0() { return static_cast<int32_t>(offsetof(ECB_t144347634, ___count_0)); }
	inline int32_t get_count_0() const { return ___count_0; }
	inline int32_t* get_address_of_count_0() { return &___count_0; }
	inline void set_count_0(int32_t value)
	{
		___count_0 = value;
	}

	inline static int32_t get_offset_of_dataCodewords_1() { return static_cast<int32_t>(offsetof(ECB_t144347634, ___dataCodewords_1)); }
	inline int32_t get_dataCodewords_1() const { return ___dataCodewords_1; }
	inline int32_t* get_address_of_dataCodewords_1() { return &___dataCodewords_1; }
	inline void set_dataCodewords_1(int32_t value)
	{
		___dataCodewords_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ECB_T144347634_H
#ifndef ECBLOCKS_T2689482655_H
#define ECBLOCKS_T2689482655_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.QrCode.Internal.Version/ECBlocks
struct  ECBlocks_t2689482655  : public RuntimeObject
{
public:
	// System.Int32 ZXing.QrCode.Internal.Version/ECBlocks::ecCodewordsPerBlock
	int32_t ___ecCodewordsPerBlock_0;
	// ZXing.QrCode.Internal.Version/ECB[] ZXing.QrCode.Internal.Version/ECBlocks::ecBlocks
	ECBU5BU5D_t719977991* ___ecBlocks_1;

public:
	inline static int32_t get_offset_of_ecCodewordsPerBlock_0() { return static_cast<int32_t>(offsetof(ECBlocks_t2689482655, ___ecCodewordsPerBlock_0)); }
	inline int32_t get_ecCodewordsPerBlock_0() const { return ___ecCodewordsPerBlock_0; }
	inline int32_t* get_address_of_ecCodewordsPerBlock_0() { return &___ecCodewordsPerBlock_0; }
	inline void set_ecCodewordsPerBlock_0(int32_t value)
	{
		___ecCodewordsPerBlock_0 = value;
	}

	inline static int32_t get_offset_of_ecBlocks_1() { return static_cast<int32_t>(offsetof(ECBlocks_t2689482655, ___ecBlocks_1)); }
	inline ECBU5BU5D_t719977991* get_ecBlocks_1() const { return ___ecBlocks_1; }
	inline ECBU5BU5D_t719977991** get_address_of_ecBlocks_1() { return &___ecBlocks_1; }
	inline void set_ecBlocks_1(ECBU5BU5D_t719977991* value)
	{
		___ecBlocks_1 = value;
		Il2CppCodeGenWriteBarrier((&___ecBlocks_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ECBLOCKS_T2689482655_H
#ifndef QRCODEREADER_T3363387111_H
#define QRCODEREADER_T3363387111_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.QrCode.QRCodeReader
struct  QRCodeReader_t3363387111  : public RuntimeObject
{
public:
	// ZXing.QrCode.Internal.Decoder ZXing.QrCode.QRCodeReader::decoder
	Decoder_t1927175606 * ___decoder_1;

public:
	inline static int32_t get_offset_of_decoder_1() { return static_cast<int32_t>(offsetof(QRCodeReader_t3363387111, ___decoder_1)); }
	inline Decoder_t1927175606 * get_decoder_1() const { return ___decoder_1; }
	inline Decoder_t1927175606 ** get_address_of_decoder_1() { return &___decoder_1; }
	inline void set_decoder_1(Decoder_t1927175606 * value)
	{
		___decoder_1 = value;
		Il2CppCodeGenWriteBarrier((&___decoder_1), value);
	}
};

struct QRCodeReader_t3363387111_StaticFields
{
public:
	// ZXing.ResultPoint[] ZXing.QrCode.QRCodeReader::NO_POINTS
	ResultPointU5BU5D_t569055209* ___NO_POINTS_0;

public:
	inline static int32_t get_offset_of_NO_POINTS_0() { return static_cast<int32_t>(offsetof(QRCodeReader_t3363387111_StaticFields, ___NO_POINTS_0)); }
	inline ResultPointU5BU5D_t569055209* get_NO_POINTS_0() const { return ___NO_POINTS_0; }
	inline ResultPointU5BU5D_t569055209** get_address_of_NO_POINTS_0() { return &___NO_POINTS_0; }
	inline void set_NO_POINTS_0(ResultPointU5BU5D_t569055209* value)
	{
		___NO_POINTS_0 = value;
		Il2CppCodeGenWriteBarrier((&___NO_POINTS_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QRCODEREADER_T3363387111_H
#ifndef QRCODEWRITER_T1467281458_H
#define QRCODEWRITER_T1467281458_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.QrCode.QRCodeWriter
struct  QRCodeWriter_t1467281458  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QRCODEWRITER_T1467281458_H
#ifndef RESULTPOINT_T1473505336_H
#define RESULTPOINT_T1473505336_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.ResultPoint
struct  ResultPoint_t1473505336  : public RuntimeObject
{
public:
	// System.Single ZXing.ResultPoint::x
	float ___x_0;
	// System.Single ZXing.ResultPoint::y
	float ___y_1;
	// System.Byte[] ZXing.ResultPoint::bytesX
	ByteU5BU5D_t4116647657* ___bytesX_2;
	// System.Byte[] ZXing.ResultPoint::bytesY
	ByteU5BU5D_t4116647657* ___bytesY_3;
	// System.String ZXing.ResultPoint::toString
	String_t* ___toString_4;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(ResultPoint_t1473505336, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(ResultPoint_t1473505336, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_bytesX_2() { return static_cast<int32_t>(offsetof(ResultPoint_t1473505336, ___bytesX_2)); }
	inline ByteU5BU5D_t4116647657* get_bytesX_2() const { return ___bytesX_2; }
	inline ByteU5BU5D_t4116647657** get_address_of_bytesX_2() { return &___bytesX_2; }
	inline void set_bytesX_2(ByteU5BU5D_t4116647657* value)
	{
		___bytesX_2 = value;
		Il2CppCodeGenWriteBarrier((&___bytesX_2), value);
	}

	inline static int32_t get_offset_of_bytesY_3() { return static_cast<int32_t>(offsetof(ResultPoint_t1473505336, ___bytesY_3)); }
	inline ByteU5BU5D_t4116647657* get_bytesY_3() const { return ___bytesY_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_bytesY_3() { return &___bytesY_3; }
	inline void set_bytesY_3(ByteU5BU5D_t4116647657* value)
	{
		___bytesY_3 = value;
		Il2CppCodeGenWriteBarrier((&___bytesY_3), value);
	}

	inline static int32_t get_offset_of_toString_4() { return static_cast<int32_t>(offsetof(ResultPoint_t1473505336, ___toString_4)); }
	inline String_t* get_toString_4() const { return ___toString_4; }
	inline String_t** get_address_of_toString_4() { return &___toString_4; }
	inline void set_toString_4(String_t* value)
	{
		___toString_4 = value;
		Il2CppCodeGenWriteBarrier((&___toString_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESULTPOINT_T1473505336_H
#ifndef SUPPORTCLASS_T3136216679_H
#define SUPPORTCLASS_T3136216679_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.SupportClass
struct  SupportClass_t3136216679  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SUPPORTCLASS_T3136216679_H
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
#ifndef DOUBLE_T594665363_H
#define DOUBLE_T594665363_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Double
struct  Double_t594665363 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_13;

public:
	inline static int32_t get_offset_of_m_value_13() { return static_cast<int32_t>(offsetof(Double_t594665363, ___m_value_13)); }
	inline double get_m_value_13() const { return ___m_value_13; }
	inline double* get_address_of_m_value_13() { return &___m_value_13; }
	inline void set_m_value_13(double value)
	{
		___m_value_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLE_T594665363_H
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
#ifndef NULLABLE_1_T378540539_H
#define NULLABLE_1_T378540539_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<System.Int32>
struct  Nullable_1_t378540539 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t378540539, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t378540539, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T378540539_H
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
#ifndef TIMESPAN_T881159249_H
#define TIMESPAN_T881159249_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t881159249 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t881159249_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t881159249  ___MaxValue_0;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t881159249  ___MinValue_1;
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t881159249  ___Zero_2;

public:
	inline static int32_t get_offset_of_MaxValue_0() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MaxValue_0)); }
	inline TimeSpan_t881159249  get_MaxValue_0() const { return ___MaxValue_0; }
	inline TimeSpan_t881159249 * get_address_of_MaxValue_0() { return &___MaxValue_0; }
	inline void set_MaxValue_0(TimeSpan_t881159249  value)
	{
		___MaxValue_0 = value;
	}

	inline static int32_t get_offset_of_MinValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MinValue_1)); }
	inline TimeSpan_t881159249  get_MinValue_1() const { return ___MinValue_1; }
	inline TimeSpan_t881159249 * get_address_of_MinValue_1() { return &___MinValue_1; }
	inline void set_MinValue_1(TimeSpan_t881159249  value)
	{
		___MinValue_1 = value;
	}

	inline static int32_t get_offset_of_Zero_2() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___Zero_2)); }
	inline TimeSpan_t881159249  get_Zero_2() const { return ___Zero_2; }
	inline TimeSpan_t881159249 * get_address_of_Zero_2() { return &___Zero_2; }
	inline void set_Zero_2(TimeSpan_t881159249  value)
	{
		___Zero_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T881159249_H
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
#ifndef BASELUMINANCESOURCE_T3215128144_H
#define BASELUMINANCESOURCE_T3215128144_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.BaseLuminanceSource
struct  BaseLuminanceSource_t3215128144  : public LuminanceSource_t3713829503
{
public:
	// System.Byte[] ZXing.BaseLuminanceSource::luminances
	ByteU5BU5D_t4116647657* ___luminances_2;

public:
	inline static int32_t get_offset_of_luminances_2() { return static_cast<int32_t>(offsetof(BaseLuminanceSource_t3215128144, ___luminances_2)); }
	inline ByteU5BU5D_t4116647657* get_luminances_2() const { return ___luminances_2; }
	inline ByteU5BU5D_t4116647657** get_address_of_luminances_2() { return &___luminances_2; }
	inline void set_luminances_2(ByteU5BU5D_t4116647657* value)
	{
		___luminances_2 = value;
		Il2CppCodeGenWriteBarrier((&___luminances_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASELUMINANCESOURCE_T3215128144_H
#ifndef READEREXCEPTION_T3787909692_H
#define READEREXCEPTION_T3787909692_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.ReaderException
struct  ReaderException_t3787909692  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READEREXCEPTION_T3787909692_H
#ifndef WRITEREXCEPTION_T375399354_H
#define WRITEREXCEPTION_T375399354_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.WriterException
struct  WriterException_t375399354  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WRITEREXCEPTION_T375399354_H
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
#ifndef DATETIMEKIND_T3468814247_H
#define DATETIMEKIND_T3468814247_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeKind
struct  DateTimeKind_t3468814247 
{
public:
	// System.Int32 System.DateTimeKind::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DateTimeKind_t3468814247, ___value___1)); }
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
#endif // DATETIMEKIND_T3468814247_H
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
#ifndef INVALIDOPERATIONEXCEPTION_T56020091_H
#define INVALIDOPERATIONEXCEPTION_T56020091_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InvalidOperationException
struct  InvalidOperationException_t56020091  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDOPERATIONEXCEPTION_T56020091_H
#ifndef BARCODEFORMAT_T1017833927_H
#define BARCODEFORMAT_T1017833927_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.BarcodeFormat
struct  BarcodeFormat_t1017833927 
{
public:
	// System.Int32 ZXing.BarcodeFormat::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BarcodeFormat_t1017833927, ___value___1)); }
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
#endif // BARCODEFORMAT_T1017833927_H
#ifndef DECODEHINTTYPE_T1227477060_H
#define DECODEHINTTYPE_T1227477060_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.DecodeHintType
struct  DecodeHintType_t1227477060 
{
public:
	// System.Int32 ZXing.DecodeHintType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DecodeHintType_t1227477060, ___value___1)); }
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
#endif // DECODEHINTTYPE_T1227477060_H
#ifndef ENCODEHINTTYPE_T1815309725_H
#define ENCODEHINTTYPE_T1815309725_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.EncodeHintType
struct  EncodeHintType_t1815309725 
{
public:
	// System.Int32 ZXing.EncodeHintType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(EncodeHintType_t1815309725, ___value___1)); }
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
#endif // ENCODEHINTTYPE_T1815309725_H
#ifndef RGBLUMINANCESOURCE_T91581829_H
#define RGBLUMINANCESOURCE_T91581829_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.RGBLuminanceSource
struct  RGBLuminanceSource_t91581829  : public BaseLuminanceSource_t3215128144
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RGBLUMINANCESOURCE_T91581829_H
#ifndef BITMAPFORMAT_T3323075775_H
#define BITMAPFORMAT_T3323075775_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.RGBLuminanceSource/BitmapFormat
struct  BitmapFormat_t3323075775 
{
public:
	// System.Int32 ZXing.RGBLuminanceSource/BitmapFormat::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BitmapFormat_t3323075775, ___value___1)); }
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
#endif // BITMAPFORMAT_T3323075775_H
#ifndef RESULTMETADATATYPE_T220883355_H
#define RESULTMETADATATYPE_T220883355_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.ResultMetadataType
struct  ResultMetadataType_t220883355 
{
public:
	// System.Int32 ZXing.ResultMetadataType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ResultMetadataType_t220883355, ___value___1)); }
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
#endif // RESULTMETADATATYPE_T220883355_H
#ifndef KEYVALUEPAIR_2_T482830596_H
#define KEYVALUEPAIR_2_T482830596_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<ZXing.ResultMetadataType,System.Object>
struct  KeyValuePair_2_t482830596 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t482830596, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t482830596, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T482830596_H
#ifndef DATETIME_T3738529785_H
#define DATETIME_T3738529785_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t3738529785 
{
public:
	// System.TimeSpan System.DateTime::ticks
	TimeSpan_t881159249  ___ticks_0;
	// System.DateTimeKind System.DateTime::kind
	int32_t ___kind_1;

public:
	inline static int32_t get_offset_of_ticks_0() { return static_cast<int32_t>(offsetof(DateTime_t3738529785, ___ticks_0)); }
	inline TimeSpan_t881159249  get_ticks_0() const { return ___ticks_0; }
	inline TimeSpan_t881159249 * get_address_of_ticks_0() { return &___ticks_0; }
	inline void set_ticks_0(TimeSpan_t881159249  value)
	{
		___ticks_0 = value;
	}

	inline static int32_t get_offset_of_kind_1() { return static_cast<int32_t>(offsetof(DateTime_t3738529785, ___kind_1)); }
	inline int32_t get_kind_1() const { return ___kind_1; }
	inline int32_t* get_address_of_kind_1() { return &___kind_1; }
	inline void set_kind_1(int32_t value)
	{
		___kind_1 = value;
	}
};

struct DateTime_t3738529785_StaticFields
{
public:
	// System.DateTime System.DateTime::MaxValue
	DateTime_t3738529785  ___MaxValue_2;
	// System.DateTime System.DateTime::MinValue
	DateTime_t3738529785  ___MinValue_3;
	// System.String[] System.DateTime::ParseTimeFormats
	StringU5BU5D_t1281789340* ___ParseTimeFormats_4;
	// System.String[] System.DateTime::ParseYearDayMonthFormats
	StringU5BU5D_t1281789340* ___ParseYearDayMonthFormats_5;
	// System.String[] System.DateTime::ParseYearMonthDayFormats
	StringU5BU5D_t1281789340* ___ParseYearMonthDayFormats_6;
	// System.String[] System.DateTime::ParseDayMonthYearFormats
	StringU5BU5D_t1281789340* ___ParseDayMonthYearFormats_7;
	// System.String[] System.DateTime::ParseMonthDayYearFormats
	StringU5BU5D_t1281789340* ___ParseMonthDayYearFormats_8;
	// System.String[] System.DateTime::MonthDayShortFormats
	StringU5BU5D_t1281789340* ___MonthDayShortFormats_9;
	// System.String[] System.DateTime::DayMonthShortFormats
	StringU5BU5D_t1281789340* ___DayMonthShortFormats_10;
	// System.Int32[] System.DateTime::daysmonth
	Int32U5BU5D_t385246372* ___daysmonth_11;
	// System.Int32[] System.DateTime::daysmonthleap
	Int32U5BU5D_t385246372* ___daysmonthleap_12;
	// System.Object System.DateTime::to_local_time_span_object
	RuntimeObject * ___to_local_time_span_object_13;
	// System.Int64 System.DateTime::last_now
	int64_t ___last_now_14;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MaxValue_2)); }
	inline DateTime_t3738529785  get_MaxValue_2() const { return ___MaxValue_2; }
	inline DateTime_t3738529785 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(DateTime_t3738529785  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MinValue_3)); }
	inline DateTime_t3738529785  get_MinValue_3() const { return ___MinValue_3; }
	inline DateTime_t3738529785 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(DateTime_t3738529785  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_ParseTimeFormats_4() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseTimeFormats_4)); }
	inline StringU5BU5D_t1281789340* get_ParseTimeFormats_4() const { return ___ParseTimeFormats_4; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseTimeFormats_4() { return &___ParseTimeFormats_4; }
	inline void set_ParseTimeFormats_4(StringU5BU5D_t1281789340* value)
	{
		___ParseTimeFormats_4 = value;
		Il2CppCodeGenWriteBarrier((&___ParseTimeFormats_4), value);
	}

	inline static int32_t get_offset_of_ParseYearDayMonthFormats_5() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseYearDayMonthFormats_5)); }
	inline StringU5BU5D_t1281789340* get_ParseYearDayMonthFormats_5() const { return ___ParseYearDayMonthFormats_5; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseYearDayMonthFormats_5() { return &___ParseYearDayMonthFormats_5; }
	inline void set_ParseYearDayMonthFormats_5(StringU5BU5D_t1281789340* value)
	{
		___ParseYearDayMonthFormats_5 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearDayMonthFormats_5), value);
	}

	inline static int32_t get_offset_of_ParseYearMonthDayFormats_6() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseYearMonthDayFormats_6)); }
	inline StringU5BU5D_t1281789340* get_ParseYearMonthDayFormats_6() const { return ___ParseYearMonthDayFormats_6; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseYearMonthDayFormats_6() { return &___ParseYearMonthDayFormats_6; }
	inline void set_ParseYearMonthDayFormats_6(StringU5BU5D_t1281789340* value)
	{
		___ParseYearMonthDayFormats_6 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearMonthDayFormats_6), value);
	}

	inline static int32_t get_offset_of_ParseDayMonthYearFormats_7() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseDayMonthYearFormats_7)); }
	inline StringU5BU5D_t1281789340* get_ParseDayMonthYearFormats_7() const { return ___ParseDayMonthYearFormats_7; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseDayMonthYearFormats_7() { return &___ParseDayMonthYearFormats_7; }
	inline void set_ParseDayMonthYearFormats_7(StringU5BU5D_t1281789340* value)
	{
		___ParseDayMonthYearFormats_7 = value;
		Il2CppCodeGenWriteBarrier((&___ParseDayMonthYearFormats_7), value);
	}

	inline static int32_t get_offset_of_ParseMonthDayYearFormats_8() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseMonthDayYearFormats_8)); }
	inline StringU5BU5D_t1281789340* get_ParseMonthDayYearFormats_8() const { return ___ParseMonthDayYearFormats_8; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseMonthDayYearFormats_8() { return &___ParseMonthDayYearFormats_8; }
	inline void set_ParseMonthDayYearFormats_8(StringU5BU5D_t1281789340* value)
	{
		___ParseMonthDayYearFormats_8 = value;
		Il2CppCodeGenWriteBarrier((&___ParseMonthDayYearFormats_8), value);
	}

	inline static int32_t get_offset_of_MonthDayShortFormats_9() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MonthDayShortFormats_9)); }
	inline StringU5BU5D_t1281789340* get_MonthDayShortFormats_9() const { return ___MonthDayShortFormats_9; }
	inline StringU5BU5D_t1281789340** get_address_of_MonthDayShortFormats_9() { return &___MonthDayShortFormats_9; }
	inline void set_MonthDayShortFormats_9(StringU5BU5D_t1281789340* value)
	{
		___MonthDayShortFormats_9 = value;
		Il2CppCodeGenWriteBarrier((&___MonthDayShortFormats_9), value);
	}

	inline static int32_t get_offset_of_DayMonthShortFormats_10() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___DayMonthShortFormats_10)); }
	inline StringU5BU5D_t1281789340* get_DayMonthShortFormats_10() const { return ___DayMonthShortFormats_10; }
	inline StringU5BU5D_t1281789340** get_address_of_DayMonthShortFormats_10() { return &___DayMonthShortFormats_10; }
	inline void set_DayMonthShortFormats_10(StringU5BU5D_t1281789340* value)
	{
		___DayMonthShortFormats_10 = value;
		Il2CppCodeGenWriteBarrier((&___DayMonthShortFormats_10), value);
	}

	inline static int32_t get_offset_of_daysmonth_11() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___daysmonth_11)); }
	inline Int32U5BU5D_t385246372* get_daysmonth_11() const { return ___daysmonth_11; }
	inline Int32U5BU5D_t385246372** get_address_of_daysmonth_11() { return &___daysmonth_11; }
	inline void set_daysmonth_11(Int32U5BU5D_t385246372* value)
	{
		___daysmonth_11 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonth_11), value);
	}

	inline static int32_t get_offset_of_daysmonthleap_12() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___daysmonthleap_12)); }
	inline Int32U5BU5D_t385246372* get_daysmonthleap_12() const { return ___daysmonthleap_12; }
	inline Int32U5BU5D_t385246372** get_address_of_daysmonthleap_12() { return &___daysmonthleap_12; }
	inline void set_daysmonthleap_12(Int32U5BU5D_t385246372* value)
	{
		___daysmonthleap_12 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonthleap_12), value);
	}

	inline static int32_t get_offset_of_to_local_time_span_object_13() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___to_local_time_span_object_13)); }
	inline RuntimeObject * get_to_local_time_span_object_13() const { return ___to_local_time_span_object_13; }
	inline RuntimeObject ** get_address_of_to_local_time_span_object_13() { return &___to_local_time_span_object_13; }
	inline void set_to_local_time_span_object_13(RuntimeObject * value)
	{
		___to_local_time_span_object_13 = value;
		Il2CppCodeGenWriteBarrier((&___to_local_time_span_object_13), value);
	}

	inline static int32_t get_offset_of_last_now_14() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___last_now_14)); }
	inline int64_t get_last_now_14() const { return ___last_now_14; }
	inline int64_t* get_address_of_last_now_14() { return &___last_now_14; }
	inline void set_last_now_14(int64_t value)
	{
		___last_now_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T3738529785_H
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
#ifndef RESULT_T940650810_H
#define RESULT_T940650810_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.Result
struct  Result_t940650810  : public RuntimeObject
{
public:
	// System.String ZXing.Result::<Text>k__BackingField
	String_t* ___U3CTextU3Ek__BackingField_0;
	// System.Byte[] ZXing.Result::<RawBytes>k__BackingField
	ByteU5BU5D_t4116647657* ___U3CRawBytesU3Ek__BackingField_1;
	// ZXing.ResultPoint[] ZXing.Result::<ResultPoints>k__BackingField
	ResultPointU5BU5D_t569055209* ___U3CResultPointsU3Ek__BackingField_2;
	// ZXing.BarcodeFormat ZXing.Result::<BarcodeFormat>k__BackingField
	int32_t ___U3CBarcodeFormatU3Ek__BackingField_3;
	// System.Collections.Generic.IDictionary`2<ZXing.ResultMetadataType,System.Object> ZXing.Result::<ResultMetadata>k__BackingField
	RuntimeObject* ___U3CResultMetadataU3Ek__BackingField_4;
	// System.Int64 ZXing.Result::<Timestamp>k__BackingField
	int64_t ___U3CTimestampU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CTextU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Result_t940650810, ___U3CTextU3Ek__BackingField_0)); }
	inline String_t* get_U3CTextU3Ek__BackingField_0() const { return ___U3CTextU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CTextU3Ek__BackingField_0() { return &___U3CTextU3Ek__BackingField_0; }
	inline void set_U3CTextU3Ek__BackingField_0(String_t* value)
	{
		___U3CTextU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTextU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CRawBytesU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Result_t940650810, ___U3CRawBytesU3Ek__BackingField_1)); }
	inline ByteU5BU5D_t4116647657* get_U3CRawBytesU3Ek__BackingField_1() const { return ___U3CRawBytesU3Ek__BackingField_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_U3CRawBytesU3Ek__BackingField_1() { return &___U3CRawBytesU3Ek__BackingField_1; }
	inline void set_U3CRawBytesU3Ek__BackingField_1(ByteU5BU5D_t4116647657* value)
	{
		___U3CRawBytesU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CRawBytesU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CResultPointsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Result_t940650810, ___U3CResultPointsU3Ek__BackingField_2)); }
	inline ResultPointU5BU5D_t569055209* get_U3CResultPointsU3Ek__BackingField_2() const { return ___U3CResultPointsU3Ek__BackingField_2; }
	inline ResultPointU5BU5D_t569055209** get_address_of_U3CResultPointsU3Ek__BackingField_2() { return &___U3CResultPointsU3Ek__BackingField_2; }
	inline void set_U3CResultPointsU3Ek__BackingField_2(ResultPointU5BU5D_t569055209* value)
	{
		___U3CResultPointsU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CResultPointsU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CBarcodeFormatU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Result_t940650810, ___U3CBarcodeFormatU3Ek__BackingField_3)); }
	inline int32_t get_U3CBarcodeFormatU3Ek__BackingField_3() const { return ___U3CBarcodeFormatU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CBarcodeFormatU3Ek__BackingField_3() { return &___U3CBarcodeFormatU3Ek__BackingField_3; }
	inline void set_U3CBarcodeFormatU3Ek__BackingField_3(int32_t value)
	{
		___U3CBarcodeFormatU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CResultMetadataU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Result_t940650810, ___U3CResultMetadataU3Ek__BackingField_4)); }
	inline RuntimeObject* get_U3CResultMetadataU3Ek__BackingField_4() const { return ___U3CResultMetadataU3Ek__BackingField_4; }
	inline RuntimeObject** get_address_of_U3CResultMetadataU3Ek__BackingField_4() { return &___U3CResultMetadataU3Ek__BackingField_4; }
	inline void set_U3CResultMetadataU3Ek__BackingField_4(RuntimeObject* value)
	{
		___U3CResultMetadataU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CResultMetadataU3Ek__BackingField_4), value);
	}

	inline static int32_t get_offset_of_U3CTimestampU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Result_t940650810, ___U3CTimestampU3Ek__BackingField_5)); }
	inline int64_t get_U3CTimestampU3Ek__BackingField_5() const { return ___U3CTimestampU3Ek__BackingField_5; }
	inline int64_t* get_address_of_U3CTimestampU3Ek__BackingField_5() { return &___U3CTimestampU3Ek__BackingField_5; }
	inline void set_U3CTimestampU3Ek__BackingField_5(int64_t value)
	{
		___U3CTimestampU3Ek__BackingField_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESULT_T940650810_H
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
#ifndef RESULTPOINTCALLBACK_T922799438_H
#define RESULTPOINTCALLBACK_T922799438_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.ResultPointCallback
struct  ResultPointCallback_t922799438  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESULTPOINTCALLBACK_T922799438_H
// ZXing.QrCode.Internal.Version/ECB[]
struct ECBU5BU5D_t719977991  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ECB_t144347634 * m_Items[1];

public:
	inline ECB_t144347634 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ECB_t144347634 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ECB_t144347634 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline ECB_t144347634 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ECB_t144347634 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ECB_t144347634 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// ZXing.ResultPoint[]
struct ResultPointU5BU5D_t569055209  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ResultPoint_t1473505336 * m_Items[1];

public:
	inline ResultPoint_t1473505336 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ResultPoint_t1473505336 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ResultPoint_t1473505336 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline ResultPoint_t1473505336 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ResultPoint_t1473505336 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ResultPoint_t1473505336 * value)
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
// System.Int32[]
struct Int32U5BU5D_t385246372  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
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


// System.Void System.Nullable`1<System.Int32>::.ctor(!0)
extern "C" IL2CPP_METHOD_ATTR void Nullable_1__ctor_m3852020309_gshared (Nullable_1_t378540539 * __this, int32_t p0, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
extern "C" IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m3011319823_gshared (Nullable_1_t378540539 * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Int32>::get_Value()
extern "C" IL2CPP_METHOD_ATTR int32_t Nullable_1_get_Value_m1752496362_gshared (Nullable_1_t378540539 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<ZXing.ResultMetadataType,System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m654493593_gshared (Dictionary_2_t2380125725 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<ZXing.ResultMetadataType,System.Object>::get_Key()
extern "C" IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_m719319599_gshared (KeyValuePair_2_t482830596 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<ZXing.ResultMetadataType,System.Object>::get_Value()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m2188744717_gshared (KeyValuePair_2_t482830596 * __this, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Int32 ZXing.QrCode.Internal.Version/ECB::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t ECB_get_Count_m1687145382 (ECB_t144347634 * __this, const RuntimeMethod* method);
// System.Int32 ZXing.QrCode.Internal.Version/ECBlocks::get_NumBlocks()
extern "C" IL2CPP_METHOD_ATTR int32_t ECBlocks_get_NumBlocks_m2208369685 (ECBlocks_t2689482655 * __this, const RuntimeMethod* method);
// ZXing.Common.BitMatrix ZXing.BinaryBitmap::get_BlackMatrix()
extern "C" IL2CPP_METHOD_ATTR BitMatrix_t2873240750 * BinaryBitmap_get_BlackMatrix_m3765943204 (BinaryBitmap_t3514195023 * __this, const RuntimeMethod* method);
// ZXing.Common.BitMatrix ZXing.QrCode.QRCodeReader::extractPureBits(ZXing.Common.BitMatrix)
extern "C" IL2CPP_METHOD_ATTR BitMatrix_t2873240750 * QRCodeReader_extractPureBits_m6681055 (RuntimeObject * __this /* static, unused */, BitMatrix_t2873240750 * ___image0, const RuntimeMethod* method);
// ZXing.Common.DecoderResult ZXing.QrCode.Internal.Decoder::decode(ZXing.Common.BitMatrix,System.Collections.Generic.IDictionary`2<ZXing.DecodeHintType,System.Object>)
extern "C" IL2CPP_METHOD_ATTR DecoderResult_t4252639067 * Decoder_decode_m281244706 (Decoder_t1927175606 * __this, BitMatrix_t2873240750 * ___bits0, RuntimeObject* ___hints1, const RuntimeMethod* method);
// System.Void ZXing.QrCode.Internal.Detector::.ctor(ZXing.Common.BitMatrix)
extern "C" IL2CPP_METHOD_ATTR void Detector__ctor_m3768420790 (Detector_t1946199639 * __this, BitMatrix_t2873240750 * ___image0, const RuntimeMethod* method);
// ZXing.Common.BitMatrix ZXing.Common.DetectorResult::get_Bits()
extern "C" IL2CPP_METHOD_ATTR BitMatrix_t2873240750 * DetectorResult_get_Bits_m957845305 (DetectorResult_t2934418424 * __this, const RuntimeMethod* method);
// ZXing.ResultPoint[] ZXing.Common.DetectorResult::get_Points()
extern "C" IL2CPP_METHOD_ATTR ResultPointU5BU5D_t569055209* DetectorResult_get_Points_m1463591357 (DetectorResult_t2934418424 * __this, const RuntimeMethod* method);
// System.Object ZXing.Common.DecoderResult::get_Other()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * DecoderResult_get_Other_m276647380 (DecoderResult_t4252639067 * __this, const RuntimeMethod* method);
// System.Void ZXing.QrCode.Internal.QRCodeDecoderMetaData::applyMirroredCorrection(ZXing.ResultPoint[])
extern "C" IL2CPP_METHOD_ATTR void QRCodeDecoderMetaData_applyMirroredCorrection_m598498853 (QRCodeDecoderMetaData_t3242363773 * __this, ResultPointU5BU5D_t569055209* ___points0, const RuntimeMethod* method);
// System.String ZXing.Common.DecoderResult::get_Text()
extern "C" IL2CPP_METHOD_ATTR String_t* DecoderResult_get_Text_m1281360944 (DecoderResult_t4252639067 * __this, const RuntimeMethod* method);
// System.Byte[] ZXing.Common.DecoderResult::get_RawBytes()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* DecoderResult_get_RawBytes_m3293831512 (DecoderResult_t4252639067 * __this, const RuntimeMethod* method);
// System.Void ZXing.Result::.ctor(System.String,System.Byte[],ZXing.ResultPoint[],ZXing.BarcodeFormat)
extern "C" IL2CPP_METHOD_ATTR void Result__ctor_m734742369 (Result_t940650810 * __this, String_t* ___text0, ByteU5BU5D_t4116647657* ___rawBytes1, ResultPointU5BU5D_t569055209* ___resultPoints2, int32_t ___format3, const RuntimeMethod* method);
// System.Collections.Generic.IList`1<System.Byte[]> ZXing.Common.DecoderResult::get_ByteSegments()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* DecoderResult_get_ByteSegments_m2110517699 (DecoderResult_t4252639067 * __this, const RuntimeMethod* method);
// System.Void ZXing.Result::putMetadata(ZXing.ResultMetadataType,System.Object)
extern "C" IL2CPP_METHOD_ATTR void Result_putMetadata_m1190422464 (Result_t940650810 * __this, int32_t ___type0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.String ZXing.Common.DecoderResult::get_ECLevel()
extern "C" IL2CPP_METHOD_ATTR String_t* DecoderResult_get_ECLevel_m739967107 (DecoderResult_t4252639067 * __this, const RuntimeMethod* method);
// System.Boolean ZXing.Common.DecoderResult::get_StructuredAppend()
extern "C" IL2CPP_METHOD_ATTR bool DecoderResult_get_StructuredAppend_m1157932853 (DecoderResult_t4252639067 * __this, const RuntimeMethod* method);
// System.Int32 ZXing.Common.DecoderResult::get_StructuredAppendSequenceNumber()
extern "C" IL2CPP_METHOD_ATTR int32_t DecoderResult_get_StructuredAppendSequenceNumber_m2312300598 (DecoderResult_t4252639067 * __this, const RuntimeMethod* method);
// System.Int32 ZXing.Common.DecoderResult::get_StructuredAppendParity()
extern "C" IL2CPP_METHOD_ATTR int32_t DecoderResult_get_StructuredAppendParity_m2283728334 (DecoderResult_t4252639067 * __this, const RuntimeMethod* method);
// System.Int32[] ZXing.Common.BitMatrix::getTopLeftOnBit()
extern "C" IL2CPP_METHOD_ATTR Int32U5BU5D_t385246372* BitMatrix_getTopLeftOnBit_m3430169641 (BitMatrix_t2873240750 * __this, const RuntimeMethod* method);
// System.Int32[] ZXing.Common.BitMatrix::getBottomRightOnBit()
extern "C" IL2CPP_METHOD_ATTR Int32U5BU5D_t385246372* BitMatrix_getBottomRightOnBit_m4102573155 (BitMatrix_t2873240750 * __this, const RuntimeMethod* method);
// System.Boolean ZXing.QrCode.QRCodeReader::moduleSize(System.Int32[],ZXing.Common.BitMatrix,System.Single&)
extern "C" IL2CPP_METHOD_ATTR bool QRCodeReader_moduleSize_m4165967419 (RuntimeObject * __this /* static, unused */, Int32U5BU5D_t385246372* ___leftTopBlack0, BitMatrix_t2873240750 * ___image1, float* ___msize2, const RuntimeMethod* method);
// System.Void ZXing.Common.BitMatrix::.ctor(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void BitMatrix__ctor_m2506302167 (BitMatrix_t2873240750 * __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method);
// System.Boolean ZXing.Common.BitMatrix::get_Item(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR bool BitMatrix_get_Item_m2523865119 (BitMatrix_t2873240750 * __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method);
// System.Void ZXing.Common.BitMatrix::set_Item(System.Int32,System.Int32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void BitMatrix_set_Item_m2037280244 (BitMatrix_t2873240750 * __this, int32_t ___x0, int32_t ___y1, bool ___value2, const RuntimeMethod* method);
// System.Int32 ZXing.Common.BitMatrix::get_Height()
extern "C" IL2CPP_METHOD_ATTR int32_t BitMatrix_get_Height_m2434472889 (BitMatrix_t2873240750 * __this, const RuntimeMethod* method);
// System.Int32 ZXing.Common.BitMatrix::get_Width()
extern "C" IL2CPP_METHOD_ATTR int32_t BitMatrix_get_Width_m3530487944 (BitMatrix_t2873240750 * __this, const RuntimeMethod* method);
// System.Void ZXing.QrCode.Internal.Decoder::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Decoder__ctor_m3728973696 (Decoder_t1927175606 * __this, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m2969720369 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentException__ctor_m1312628991 (ArgumentException_t132251570 * __this, String_t* p0, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m904156431 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m2971454694 (RuntimeObject * __this /* static, unused */, ObjectU5BU5D_t2843939325* p0, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Int32>::.ctor(!0)
inline void Nullable_1__ctor_m3852020309 (Nullable_1_t378540539 * __this, int32_t p0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t378540539 *, int32_t, const RuntimeMethod*))Nullable_1__ctor_m3852020309_gshared)(__this, p0, method);
}
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
inline bool Nullable_1_get_HasValue_m3011319823 (Nullable_1_t378540539 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t378540539 *, const RuntimeMethod*))Nullable_1_get_HasValue_m3011319823_gshared)(__this, method);
}
// !0 System.Nullable`1<System.Int32>::get_Value()
inline int32_t Nullable_1_get_Value_m1752496362 (Nullable_1_t378540539 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_t378540539 *, const RuntimeMethod*))Nullable_1_get_Value_m1752496362_gshared)(__this, method);
}
// ZXing.QrCode.Internal.QRCode ZXing.QrCode.Internal.Encoder::encode(System.String,ZXing.QrCode.Internal.ErrorCorrectionLevel,System.Collections.Generic.IDictionary`2<ZXing.EncodeHintType,System.Object>)
extern "C" IL2CPP_METHOD_ATTR QRCode_t4150242837 * Encoder_encode_m1413850817 (RuntimeObject * __this /* static, unused */, String_t* ___content0, ErrorCorrectionLevel_t2910789944 * ___ecLevel1, RuntimeObject* ___hints2, const RuntimeMethod* method);
// ZXing.Common.BitMatrix ZXing.QrCode.QRCodeWriter::renderResult(ZXing.QrCode.Internal.QRCode,System.Int32,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR BitMatrix_t2873240750 * QRCodeWriter_renderResult_m1094602221 (RuntimeObject * __this /* static, unused */, QRCode_t4150242837 * ___code0, int32_t ___width1, int32_t ___height2, int32_t ___quietZone3, const RuntimeMethod* method);
// ZXing.QrCode.Internal.ByteMatrix ZXing.QrCode.Internal.QRCode::get_Matrix()
extern "C" IL2CPP_METHOD_ATTR ByteMatrix_t2868153292 * QRCode_get_Matrix_m1122117869 (QRCode_t4150242837 * __this, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m2734335978 (InvalidOperationException_t56020091 * __this, const RuntimeMethod* method);
// System.Int32 ZXing.QrCode.Internal.ByteMatrix::get_Width()
extern "C" IL2CPP_METHOD_ATTR int32_t ByteMatrix_get_Width_m2340592646 (ByteMatrix_t2868153292 * __this, const RuntimeMethod* method);
// System.Int32 ZXing.QrCode.Internal.ByteMatrix::get_Height()
extern "C" IL2CPP_METHOD_ATTR int32_t ByteMatrix_get_Height_m309600017 (ByteMatrix_t2868153292 * __this, const RuntimeMethod* method);
// System.Int32 System.Math::Max(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Math_Max_m1873195862 (RuntimeObject * __this /* static, unused */, int32_t p0, int32_t p1, const RuntimeMethod* method);
// System.Int32 System.Math::Min(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Math_Min_m3468062251 (RuntimeObject * __this /* static, unused */, int32_t p0, int32_t p1, const RuntimeMethod* method);
// System.Int32 ZXing.QrCode.Internal.ByteMatrix::get_Item(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t ByteMatrix_get_Item_m1891686978 (ByteMatrix_t2868153292 * __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method);
// System.Void ZXing.Common.BitMatrix::setRegion(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void BitMatrix_setRegion_m136840845 (BitMatrix_t2873240750 * __this, int32_t ___left0, int32_t ___top1, int32_t ___width2, int32_t ___height3, const RuntimeMethod* method);
// System.Void ZXing.BaseLuminanceSource::.ctor(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void BaseLuminanceSource__ctor_m2383661027 (BaseLuminanceSource_t3215128144 * __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method);
// System.Void ZXing.RGBLuminanceSource::CalculateLuminance(System.Byte[],ZXing.RGBLuminanceSource/BitmapFormat)
extern "C" IL2CPP_METHOD_ATTR void RGBLuminanceSource_CalculateLuminance_m1406356467 (RGBLuminanceSource_t91581829 * __this, ByteU5BU5D_t4116647657* ___rgbRawBytes0, int32_t ___bitmapFormat1, const RuntimeMethod* method);
// System.Void ZXing.RGBLuminanceSource::.ctor(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void RGBLuminanceSource__ctor_m1359303021 (RGBLuminanceSource_t91581829 * __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method);
// ZXing.RGBLuminanceSource/BitmapFormat ZXing.RGBLuminanceSource::DetermineBitmapFormat(System.Byte[],System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t RGBLuminanceSource_DetermineBitmapFormat_m2494281707 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___rgbRawBytes0, int32_t ___width1, int32_t ___height2, const RuntimeMethod* method);
// System.Void System.Buffer::BlockCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Buffer_BlockCopy_m2884209081 (RuntimeObject * __this /* static, unused */, RuntimeArray * p0, int32_t p1, RuntimeArray * p2, int32_t p3, int32_t p4, const RuntimeMethod* method);
// System.Void ZXing.RGBLuminanceSource::CalculateLuminanceRGB24(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void RGBLuminanceSource_CalculateLuminanceRGB24_m3698380013 (RGBLuminanceSource_t91581829 * __this, ByteU5BU5D_t4116647657* ___rgbRawBytes0, const RuntimeMethod* method);
// System.Void ZXing.RGBLuminanceSource::CalculateLuminanceBGR24(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void RGBLuminanceSource_CalculateLuminanceBGR24_m1853523775 (RGBLuminanceSource_t91581829 * __this, ByteU5BU5D_t4116647657* ___rgbRawBytes0, const RuntimeMethod* method);
// System.Void ZXing.RGBLuminanceSource::CalculateLuminanceRGB32(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void RGBLuminanceSource_CalculateLuminanceRGB32_m2543323953 (RGBLuminanceSource_t91581829 * __this, ByteU5BU5D_t4116647657* ___rgbRawBytes0, const RuntimeMethod* method);
// System.Void ZXing.RGBLuminanceSource::CalculateLuminanceBGR32(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void RGBLuminanceSource_CalculateLuminanceBGR32_m1773636966 (RGBLuminanceSource_t91581829 * __this, ByteU5BU5D_t4116647657* ___rgbRawBytes0, const RuntimeMethod* method);
// System.Void ZXing.RGBLuminanceSource::CalculateLuminanceRGBA32(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void RGBLuminanceSource_CalculateLuminanceRGBA32_m171125628 (RGBLuminanceSource_t91581829 * __this, ByteU5BU5D_t4116647657* ___rgbRawBytes0, const RuntimeMethod* method);
// System.Void ZXing.RGBLuminanceSource::CalculateLuminanceARGB32(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void RGBLuminanceSource_CalculateLuminanceARGB32_m2667616074 (RGBLuminanceSource_t91581829 * __this, ByteU5BU5D_t4116647657* ___rgbRawBytes0, const RuntimeMethod* method);
// System.Void ZXing.RGBLuminanceSource::CalculateLuminanceBGRA32(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void RGBLuminanceSource_CalculateLuminanceBGRA32_m2919798760 (RGBLuminanceSource_t91581829 * __this, ByteU5BU5D_t4116647657* ___rgbRawBytes0, const RuntimeMethod* method);
// System.Void ZXing.RGBLuminanceSource::CalculateLuminanceRGB565(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void RGBLuminanceSource_CalculateLuminanceRGB565_m63314896 (RGBLuminanceSource_t91581829 * __this, ByteU5BU5D_t4116647657* ___rgb565RawData0, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentException__ctor_m1216717135 (ArgumentException_t132251570 * __this, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void System.Exception::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Exception__ctor_m213470898 (Exception_t * __this, const RuntimeMethod* method);
// System.DateTime System.DateTime::get_Now()
extern "C" IL2CPP_METHOD_ATTR DateTime_t3738529785  DateTime_get_Now_m1277138875 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Int64 System.DateTime::get_Ticks()
extern "C" IL2CPP_METHOD_ATTR int64_t DateTime_get_Ticks_m1550640881 (DateTime_t3738529785 * __this, const RuntimeMethod* method);
// System.Void ZXing.Result::.ctor(System.String,System.Byte[],ZXing.ResultPoint[],ZXing.BarcodeFormat,System.Int64)
extern "C" IL2CPP_METHOD_ATTR void Result__ctor_m2700342944 (Result_t940650810 * __this, String_t* ___text0, ByteU5BU5D_t4116647657* ___rawBytes1, ResultPointU5BU5D_t569055209* ___resultPoints2, int32_t ___format3, int64_t ___timestamp4, const RuntimeMethod* method);
// System.Void ZXing.Result::set_Text(System.String)
extern "C" IL2CPP_METHOD_ATTR void Result_set_Text_m1958406773 (Result_t940650810 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void ZXing.Result::set_RawBytes(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void Result_set_RawBytes_m4011611957 (Result_t940650810 * __this, ByteU5BU5D_t4116647657* ___value0, const RuntimeMethod* method);
// System.Void ZXing.Result::set_ResultPoints(ZXing.ResultPoint[])
extern "C" IL2CPP_METHOD_ATTR void Result_set_ResultPoints_m77278087 (Result_t940650810 * __this, ResultPointU5BU5D_t569055209* ___value0, const RuntimeMethod* method);
// System.Void ZXing.Result::set_BarcodeFormat(ZXing.BarcodeFormat)
extern "C" IL2CPP_METHOD_ATTR void Result_set_BarcodeFormat_m2974682071 (Result_t940650810 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void ZXing.Result::set_ResultMetadata(System.Collections.Generic.IDictionary`2<ZXing.ResultMetadataType,System.Object>)
extern "C" IL2CPP_METHOD_ATTR void Result_set_ResultMetadata_m254978922 (Result_t940650810 * __this, RuntimeObject* ___value0, const RuntimeMethod* method);
// System.Void ZXing.Result::set_Timestamp(System.Int64)
extern "C" IL2CPP_METHOD_ATTR void Result_set_Timestamp_m1153465057 (Result_t940650810 * __this, int64_t ___value0, const RuntimeMethod* method);
// System.Collections.Generic.IDictionary`2<ZXing.ResultMetadataType,System.Object> ZXing.Result::get_ResultMetadata()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Result_get_ResultMetadata_m1230695185 (Result_t940650810 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<ZXing.ResultMetadataType,System.Object>::.ctor()
inline void Dictionary_2__ctor_m654493593 (Dictionary_2_t2380125725 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2380125725 *, const RuntimeMethod*))Dictionary_2__ctor_m654493593_gshared)(__this, method);
}
// !0 System.Collections.Generic.KeyValuePair`2<ZXing.ResultMetadataType,System.Object>::get_Key()
inline int32_t KeyValuePair_2_get_Key_m719319599 (KeyValuePair_2_t482830596 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyValuePair_2_t482830596 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m719319599_gshared)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<ZXing.ResultMetadataType,System.Object>::get_Value()
inline RuntimeObject * KeyValuePair_2_get_Value_m2188744717 (KeyValuePair_2_t482830596 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (KeyValuePair_2_t482830596 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m2188744717_gshared)(__this, method);
}
// ZXing.ResultPoint[] ZXing.Result::get_ResultPoints()
extern "C" IL2CPP_METHOD_ATTR ResultPointU5BU5D_t569055209* Result_get_ResultPoints_m3228066833 (Result_t940650810 * __this, const RuntimeMethod* method);
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Array_Copy_m344457298 (RuntimeObject * __this /* static, unused */, RuntimeArray * p0, int32_t p1, RuntimeArray * p2, int32_t p3, int32_t p4, const RuntimeMethod* method);
// System.String ZXing.Result::get_Text()
extern "C" IL2CPP_METHOD_ATTR String_t* Result_get_Text_m3705300161 (Result_t940650810 * __this, const RuntimeMethod* method);
// System.Byte[] ZXing.Result::get_RawBytes()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* Result_get_RawBytes_m2892930176 (Result_t940650810 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m1715369213 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, RuntimeObject * p2, const RuntimeMethod* method);
// System.Byte[] System.BitConverter::GetBytes(System.Single)
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* BitConverter_GetBytes_m692533364 (RuntimeObject * __this /* static, unused */, float p0, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void StringBuilder__ctor_m2367297767 (StringBuilder_t * __this, int32_t p0, const RuntimeMethod* method);
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_CurrentUICulture()
extern "C" IL2CPP_METHOD_ATTR CultureInfo_t4157843068 * CultureInfo_get_CurrentUICulture_m959203371 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.IFormatProvider,System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_AppendFormat_m4227532852 (StringBuilder_t * __this, RuntimeObject* p0, String_t* p1, ObjectU5BU5D_t2843939325* p2, const RuntimeMethod* method);
// System.Single ZXing.ResultPoint::distance(ZXing.ResultPoint,ZXing.ResultPoint)
extern "C" IL2CPP_METHOD_ATTR float ResultPoint_distance_m402304744 (RuntimeObject * __this /* static, unused */, ResultPoint_t1473505336 * ___pattern10, ResultPoint_t1473505336 * ___pattern21, const RuntimeMethod* method);
// System.Single ZXing.ResultPoint::crossProductZ(ZXing.ResultPoint,ZXing.ResultPoint,ZXing.ResultPoint)
extern "C" IL2CPP_METHOD_ATTR float ResultPoint_crossProductZ_m1444032178 (RuntimeObject * __this /* static, unused */, ResultPoint_t1473505336 * ___pointA0, ResultPoint_t1473505336 * ___pointB1, ResultPoint_t1473505336 * ___pointC2, const RuntimeMethod* method);
// System.Single ZXing.Common.Detector.MathUtils::distance(System.Single,System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR float MathUtils_distance_m2947813469 (RuntimeObject * __this /* static, unused */, float ___aX0, float ___aY1, float ___bX2, float ___bY3, const RuntimeMethod* method);
// System.Void ZXing.ResultPointCallback::Invoke(ZXing.ResultPoint)
extern "C" IL2CPP_METHOD_ATTR void ResultPointCallback_Invoke_m375854897 (ResultPointCallback_t922799438 * __this, ResultPoint_t1473505336 * ___point0, const RuntimeMethod* method);
// System.Void System.Array::Reverse(System.Array,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Array_Reverse_m816310962 (RuntimeObject * __this /* static, unused */, RuntimeArray * p0, int32_t p1, int32_t p2, const RuntimeMethod* method);
// System.String System.String::CreateString(System.Char[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_CreateString_m2818852475 (String_t* __this, CharU5BU5D_t3528271667* ___val0, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void Exception__ctor_m1152696503 (Exception_t * __this, String_t* p0, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String,System.Exception)
extern "C" IL2CPP_METHOD_ATTR void Exception__ctor_m1406832249 (Exception_t * __this, String_t* p0, Exception_t * p1, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ZXing.QrCode.Internal.Version/ECB::.ctor(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void ECB__ctor_m3278564688 (ECB_t144347634 * __this, int32_t ___count0, int32_t ___dataCodewords1, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___count0;
		__this->set_count_0(L_0);
		int32_t L_1 = ___dataCodewords1;
		__this->set_dataCodewords_1(L_1);
		return;
	}
}
// System.Int32 ZXing.QrCode.Internal.Version/ECB::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t ECB_get_Count_m1687145382 (ECB_t144347634 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_count_0();
		return L_0;
	}
}
// System.Int32 ZXing.QrCode.Internal.Version/ECB::get_DataCodewords()
extern "C" IL2CPP_METHOD_ATTR int32_t ECB_get_DataCodewords_m3346822461 (ECB_t144347634 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_dataCodewords_1();
		return L_0;
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
// System.Void ZXing.QrCode.Internal.Version/ECBlocks::.ctor(System.Int32,ZXing.QrCode.Internal.Version/ECB[])
extern "C" IL2CPP_METHOD_ATTR void ECBlocks__ctor_m1327820879 (ECBlocks_t2689482655 * __this, int32_t ___ecCodewordsPerBlock0, ECBU5BU5D_t719977991* ___ecBlocks1, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___ecCodewordsPerBlock0;
		__this->set_ecCodewordsPerBlock_0(L_0);
		ECBU5BU5D_t719977991* L_1 = ___ecBlocks1;
		__this->set_ecBlocks_1(L_1);
		return;
	}
}
// System.Int32 ZXing.QrCode.Internal.Version/ECBlocks::get_ECCodewordsPerBlock()
extern "C" IL2CPP_METHOD_ATTR int32_t ECBlocks_get_ECCodewordsPerBlock_m3757837832 (ECBlocks_t2689482655 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_ecCodewordsPerBlock_0();
		return L_0;
	}
}
// System.Int32 ZXing.QrCode.Internal.Version/ECBlocks::get_NumBlocks()
extern "C" IL2CPP_METHOD_ATTR int32_t ECBlocks_get_NumBlocks_m2208369685 (ECBlocks_t2689482655 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	ECB_t144347634 * V_1 = NULL;
	ECBU5BU5D_t719977991* V_2 = NULL;
	int32_t V_3 = 0;
	{
		V_0 = 0;
		ECBU5BU5D_t719977991* L_0 = __this->get_ecBlocks_1();
		V_2 = L_0;
		V_3 = 0;
		goto IL_001e;
	}

IL_000d:
	{
		ECBU5BU5D_t719977991* L_1 = V_2;
		int32_t L_2 = V_3;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		ECB_t144347634 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_1 = L_4;
		int32_t L_5 = V_0;
		ECB_t144347634 * L_6 = V_1;
		NullCheck(L_6);
		int32_t L_7 = ECB_get_Count_m1687145382(L_6, /*hidden argument*/NULL);
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)L_7));
		int32_t L_8 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_001e:
	{
		int32_t L_9 = V_3;
		ECBU5BU5D_t719977991* L_10 = V_2;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_10)->max_length)))))))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_11 = V_0;
		return L_11;
	}
}
// System.Int32 ZXing.QrCode.Internal.Version/ECBlocks::get_TotalECCodewords()
extern "C" IL2CPP_METHOD_ATTR int32_t ECBlocks_get_TotalECCodewords_m2767793473 (ECBlocks_t2689482655 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_ecCodewordsPerBlock_0();
		int32_t L_1 = ECBlocks_get_NumBlocks_m2208369685(__this, /*hidden argument*/NULL);
		return ((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)L_1));
	}
}
// ZXing.QrCode.Internal.Version/ECB[] ZXing.QrCode.Internal.Version/ECBlocks::getECBlocks()
extern "C" IL2CPP_METHOD_ATTR ECBU5BU5D_t719977991* ECBlocks_getECBlocks_m34603104 (ECBlocks_t2689482655 * __this, const RuntimeMethod* method)
{
	{
		ECBU5BU5D_t719977991* L_0 = __this->get_ecBlocks_1();
		return L_0;
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
// ZXing.Result ZXing.QrCode.QRCodeReader::decode(ZXing.BinaryBitmap,System.Collections.Generic.IDictionary`2<ZXing.DecodeHintType,System.Object>)
extern "C" IL2CPP_METHOD_ATTR Result_t940650810 * QRCodeReader_decode_m3097525869 (QRCodeReader_t3363387111 * __this, BinaryBitmap_t3514195023 * ___image0, RuntimeObject* ___hints1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (QRCodeReader_decode_m3097525869_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DecoderResult_t4252639067 * V_0 = NULL;
	ResultPointU5BU5D_t569055209* V_1 = NULL;
	BitMatrix_t2873240750 * V_2 = NULL;
	DetectorResult_t2934418424 * V_3 = NULL;
	QRCodeDecoderMetaData_t3242363773 * V_4 = NULL;
	Result_t940650810 * V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	String_t* V_7 = NULL;
	{
		BinaryBitmap_t3514195023 * L_0 = ___image0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		BinaryBitmap_t3514195023 * L_1 = ___image0;
		NullCheck(L_1);
		BitMatrix_t2873240750 * L_2 = BinaryBitmap_get_BlackMatrix_m3765943204(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_000d;
		}
	}

IL_000b:
	{
		return (Result_t940650810 *)NULL;
	}

IL_000d:
	{
		RuntimeObject* L_3 = ___hints1;
		if (!L_3)
		{
			goto IL_0040;
		}
	}
	{
		RuntimeObject* L_4 = ___hints1;
		NullCheck(L_4);
		bool L_5 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(1 /* System.Boolean System.Collections.Generic.IDictionary`2<ZXing.DecodeHintType,System.Object>::ContainsKey(!0) */, IDictionary_2_t3788232239_il2cpp_TypeInfo_var, L_4, 1);
		if (!L_5)
		{
			goto IL_0040;
		}
	}
	{
		BinaryBitmap_t3514195023 * L_6 = ___image0;
		NullCheck(L_6);
		BitMatrix_t2873240750 * L_7 = BinaryBitmap_get_BlackMatrix_m3765943204(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(QRCodeReader_t3363387111_il2cpp_TypeInfo_var);
		BitMatrix_t2873240750 * L_8 = QRCodeReader_extractPureBits_m6681055(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		V_2 = L_8;
		BitMatrix_t2873240750 * L_9 = V_2;
		if (L_9)
		{
			goto IL_002a;
		}
	}
	{
		return (Result_t940650810 *)NULL;
	}

IL_002a:
	{
		Decoder_t1927175606 * L_10 = __this->get_decoder_1();
		BitMatrix_t2873240750 * L_11 = V_2;
		RuntimeObject* L_12 = ___hints1;
		NullCheck(L_10);
		DecoderResult_t4252639067 * L_13 = Decoder_decode_m281244706(L_10, L_11, L_12, /*hidden argument*/NULL);
		V_0 = L_13;
		IL2CPP_RUNTIME_CLASS_INIT(QRCodeReader_t3363387111_il2cpp_TypeInfo_var);
		ResultPointU5BU5D_t569055209* L_14 = ((QRCodeReader_t3363387111_StaticFields*)il2cpp_codegen_static_fields_for(QRCodeReader_t3363387111_il2cpp_TypeInfo_var))->get_NO_POINTS_0();
		V_1 = L_14;
		goto IL_0071;
	}

IL_0040:
	{
		BinaryBitmap_t3514195023 * L_15 = ___image0;
		NullCheck(L_15);
		BitMatrix_t2873240750 * L_16 = BinaryBitmap_get_BlackMatrix_m3765943204(L_15, /*hidden argument*/NULL);
		Detector_t1946199639 * L_17 = (Detector_t1946199639 *)il2cpp_codegen_object_new(Detector_t1946199639_il2cpp_TypeInfo_var);
		Detector__ctor_m3768420790(L_17, L_16, /*hidden argument*/NULL);
		RuntimeObject* L_18 = ___hints1;
		NullCheck(L_17);
		DetectorResult_t2934418424 * L_19 = VirtFuncInvoker1< DetectorResult_t2934418424 *, RuntimeObject* >::Invoke(4 /* ZXing.Common.DetectorResult ZXing.QrCode.Internal.Detector::detect(System.Collections.Generic.IDictionary`2<ZXing.DecodeHintType,System.Object>) */, L_17, L_18);
		V_3 = L_19;
		DetectorResult_t2934418424 * L_20 = V_3;
		if (L_20)
		{
			goto IL_0057;
		}
	}
	{
		return (Result_t940650810 *)NULL;
	}

IL_0057:
	{
		Decoder_t1927175606 * L_21 = __this->get_decoder_1();
		DetectorResult_t2934418424 * L_22 = V_3;
		NullCheck(L_22);
		BitMatrix_t2873240750 * L_23 = DetectorResult_get_Bits_m957845305(L_22, /*hidden argument*/NULL);
		RuntimeObject* L_24 = ___hints1;
		NullCheck(L_21);
		DecoderResult_t4252639067 * L_25 = Decoder_decode_m281244706(L_21, L_23, L_24, /*hidden argument*/NULL);
		V_0 = L_25;
		DetectorResult_t2934418424 * L_26 = V_3;
		NullCheck(L_26);
		ResultPointU5BU5D_t569055209* L_27 = DetectorResult_get_Points_m1463591357(L_26, /*hidden argument*/NULL);
		V_1 = L_27;
	}

IL_0071:
	{
		DecoderResult_t4252639067 * L_28 = V_0;
		if (L_28)
		{
			goto IL_0076;
		}
	}
	{
		return (Result_t940650810 *)NULL;
	}

IL_0076:
	{
		DecoderResult_t4252639067 * L_29 = V_0;
		NullCheck(L_29);
		RuntimeObject * L_30 = DecoderResult_get_Other_m276647380(L_29, /*hidden argument*/NULL);
		V_4 = ((QRCodeDecoderMetaData_t3242363773 *)IsInstSealed((RuntimeObject*)L_30, QRCodeDecoderMetaData_t3242363773_il2cpp_TypeInfo_var));
		QRCodeDecoderMetaData_t3242363773 * L_31 = V_4;
		if (!L_31)
		{
			goto IL_008f;
		}
	}
	{
		QRCodeDecoderMetaData_t3242363773 * L_32 = V_4;
		ResultPointU5BU5D_t569055209* L_33 = V_1;
		NullCheck(L_32);
		QRCodeDecoderMetaData_applyMirroredCorrection_m598498853(L_32, L_33, /*hidden argument*/NULL);
	}

IL_008f:
	{
		DecoderResult_t4252639067 * L_34 = V_0;
		NullCheck(L_34);
		String_t* L_35 = DecoderResult_get_Text_m1281360944(L_34, /*hidden argument*/NULL);
		DecoderResult_t4252639067 * L_36 = V_0;
		NullCheck(L_36);
		ByteU5BU5D_t4116647657* L_37 = DecoderResult_get_RawBytes_m3293831512(L_36, /*hidden argument*/NULL);
		ResultPointU5BU5D_t569055209* L_38 = V_1;
		Result_t940650810 * L_39 = (Result_t940650810 *)il2cpp_codegen_object_new(Result_t940650810_il2cpp_TypeInfo_var);
		Result__ctor_m734742369(L_39, L_35, L_37, L_38, ((int32_t)2048), /*hidden argument*/NULL);
		V_5 = L_39;
		DecoderResult_t4252639067 * L_40 = V_0;
		NullCheck(L_40);
		RuntimeObject* L_41 = DecoderResult_get_ByteSegments_m2110517699(L_40, /*hidden argument*/NULL);
		V_6 = L_41;
		RuntimeObject* L_42 = V_6;
		if (!L_42)
		{
			goto IL_00be;
		}
	}
	{
		Result_t940650810 * L_43 = V_5;
		RuntimeObject* L_44 = V_6;
		NullCheck(L_43);
		Result_putMetadata_m1190422464(L_43, 2, L_44, /*hidden argument*/NULL);
	}

IL_00be:
	{
		DecoderResult_t4252639067 * L_45 = V_0;
		NullCheck(L_45);
		String_t* L_46 = DecoderResult_get_ECLevel_m739967107(L_45, /*hidden argument*/NULL);
		V_7 = L_46;
		String_t* L_47 = V_7;
		if (!L_47)
		{
			goto IL_00d4;
		}
	}
	{
		Result_t940650810 * L_48 = V_5;
		String_t* L_49 = V_7;
		NullCheck(L_48);
		Result_putMetadata_m1190422464(L_48, 3, L_49, /*hidden argument*/NULL);
	}

IL_00d4:
	{
		DecoderResult_t4252639067 * L_50 = V_0;
		NullCheck(L_50);
		bool L_51 = DecoderResult_get_StructuredAppend_m1157932853(L_50, /*hidden argument*/NULL);
		if (!L_51)
		{
			goto IL_0103;
		}
	}
	{
		Result_t940650810 * L_52 = V_5;
		DecoderResult_t4252639067 * L_53 = V_0;
		NullCheck(L_53);
		int32_t L_54 = DecoderResult_get_StructuredAppendSequenceNumber_m2312300598(L_53, /*hidden argument*/NULL);
		int32_t L_55 = L_54;
		RuntimeObject * L_56 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_55);
		NullCheck(L_52);
		Result_putMetadata_m1190422464(L_52, 8, L_56, /*hidden argument*/NULL);
		Result_t940650810 * L_57 = V_5;
		DecoderResult_t4252639067 * L_58 = V_0;
		NullCheck(L_58);
		int32_t L_59 = DecoderResult_get_StructuredAppendParity_m2283728334(L_58, /*hidden argument*/NULL);
		int32_t L_60 = L_59;
		RuntimeObject * L_61 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_60);
		NullCheck(L_57);
		Result_putMetadata_m1190422464(L_57, ((int32_t)9), L_61, /*hidden argument*/NULL);
	}

IL_0103:
	{
		Result_t940650810 * L_62 = V_5;
		return L_62;
	}
}
// System.Void ZXing.QrCode.QRCodeReader::reset()
extern "C" IL2CPP_METHOD_ATTR void QRCodeReader_reset_m3993618379 (QRCodeReader_t3363387111 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// ZXing.Common.BitMatrix ZXing.QrCode.QRCodeReader::extractPureBits(ZXing.Common.BitMatrix)
extern "C" IL2CPP_METHOD_ATTR BitMatrix_t2873240750 * QRCodeReader_extractPureBits_m6681055 (RuntimeObject * __this /* static, unused */, BitMatrix_t2873240750 * ___image0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (QRCodeReader_extractPureBits_m6681055_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t385246372* V_0 = NULL;
	Int32U5BU5D_t385246372* V_1 = NULL;
	float V_2 = 0.0f;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	BitMatrix_t2873240750 * V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	{
		BitMatrix_t2873240750 * L_0 = ___image0;
		NullCheck(L_0);
		Int32U5BU5D_t385246372* L_1 = BitMatrix_getTopLeftOnBit_m3430169641(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		BitMatrix_t2873240750 * L_2 = ___image0;
		NullCheck(L_2);
		Int32U5BU5D_t385246372* L_3 = BitMatrix_getBottomRightOnBit_m4102573155(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		Int32U5BU5D_t385246372* L_4 = V_0;
		if (!L_4)
		{
			goto IL_0014;
		}
	}
	{
		Int32U5BU5D_t385246372* L_5 = V_1;
		if (L_5)
		{
			goto IL_0016;
		}
	}

IL_0014:
	{
		return (BitMatrix_t2873240750 *)NULL;
	}

IL_0016:
	{
		Int32U5BU5D_t385246372* L_6 = V_0;
		BitMatrix_t2873240750 * L_7 = ___image0;
		IL2CPP_RUNTIME_CLASS_INIT(QRCodeReader_t3363387111_il2cpp_TypeInfo_var);
		bool L_8 = QRCodeReader_moduleSize_m4165967419(NULL /*static, unused*/, L_6, L_7, (float*)(&V_2), /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0023;
		}
	}
	{
		return (BitMatrix_t2873240750 *)NULL;
	}

IL_0023:
	{
		Int32U5BU5D_t385246372* L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10 = 1;
		int32_t L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_3 = L_11;
		Int32U5BU5D_t385246372* L_12 = V_1;
		NullCheck(L_12);
		int32_t L_13 = 1;
		int32_t L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_4 = L_14;
		Int32U5BU5D_t385246372* L_15 = V_0;
		NullCheck(L_15);
		int32_t L_16 = 0;
		int32_t L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_5 = L_17;
		Int32U5BU5D_t385246372* L_18 = V_1;
		NullCheck(L_18);
		int32_t L_19 = 0;
		int32_t L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		V_6 = L_20;
		int32_t L_21 = V_5;
		int32_t L_22 = V_6;
		if ((((int32_t)L_21) >= ((int32_t)L_22)))
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_23 = V_3;
		int32_t L_24 = V_4;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_0043;
		}
	}

IL_0041:
	{
		return (BitMatrix_t2873240750 *)NULL;
	}

IL_0043:
	{
		int32_t L_25 = V_4;
		int32_t L_26 = V_3;
		int32_t L_27 = V_6;
		int32_t L_28 = V_5;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_25, (int32_t)L_26))) == ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_27, (int32_t)L_28)))))
		{
			goto IL_0057;
		}
	}
	{
		int32_t L_29 = V_5;
		int32_t L_30 = V_4;
		int32_t L_31 = V_3;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_30, (int32_t)L_31))));
	}

IL_0057:
	{
		int32_t L_32 = V_6;
		int32_t L_33 = V_5;
		float L_34 = V_2;
		double L_35 = bankers_round((((double)((double)((float)((float)(((float)((float)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_32, (int32_t)L_33)), (int32_t)1)))))/(float)L_34))))));
		V_7 = (((int32_t)((int32_t)L_35)));
		int32_t L_36 = V_4;
		int32_t L_37 = V_3;
		float L_38 = V_2;
		double L_39 = bankers_round((((double)((double)((float)((float)(((float)((float)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_36, (int32_t)L_37)), (int32_t)1)))))/(float)L_38))))));
		V_8 = (((int32_t)((int32_t)L_39)));
		int32_t L_40 = V_7;
		if ((((int32_t)L_40) <= ((int32_t)0)))
		{
			goto IL_0086;
		}
	}
	{
		int32_t L_41 = V_8;
		if ((((int32_t)L_41) > ((int32_t)0)))
		{
			goto IL_0088;
		}
	}

IL_0086:
	{
		return (BitMatrix_t2873240750 *)NULL;
	}

IL_0088:
	{
		int32_t L_42 = V_8;
		int32_t L_43 = V_7;
		if ((((int32_t)L_42) == ((int32_t)L_43)))
		{
			goto IL_0090;
		}
	}
	{
		return (BitMatrix_t2873240750 *)NULL;
	}

IL_0090:
	{
		float L_44 = V_2;
		V_9 = (((int32_t)((int32_t)((float)((float)L_44/(float)(2.0f))))));
		int32_t L_45 = V_3;
		int32_t L_46 = V_9;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_45, (int32_t)L_46));
		int32_t L_47 = V_5;
		int32_t L_48 = V_9;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_47, (int32_t)L_48));
		int32_t L_49 = V_5;
		int32_t L_50 = V_7;
		float L_51 = V_2;
		int32_t L_52 = V_6;
		V_10 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_49, (int32_t)(((int32_t)((int32_t)((float)il2cpp_codegen_multiply((float)(((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_50, (int32_t)1))))), (float)L_51))))))), (int32_t)L_52));
		int32_t L_53 = V_10;
		if ((((int32_t)L_53) <= ((int32_t)0)))
		{
			goto IL_00ca;
		}
	}
	{
		int32_t L_54 = V_10;
		int32_t L_55 = V_9;
		if ((((int32_t)L_54) <= ((int32_t)L_55)))
		{
			goto IL_00c3;
		}
	}
	{
		return (BitMatrix_t2873240750 *)NULL;
	}

IL_00c3:
	{
		int32_t L_56 = V_5;
		int32_t L_57 = V_10;
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_56, (int32_t)L_57));
	}

IL_00ca:
	{
		int32_t L_58 = V_3;
		int32_t L_59 = V_8;
		float L_60 = V_2;
		int32_t L_61 = V_4;
		V_11 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_58, (int32_t)(((int32_t)((int32_t)((float)il2cpp_codegen_multiply((float)(((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_59, (int32_t)1))))), (float)L_60))))))), (int32_t)L_61));
		int32_t L_62 = V_11;
		if ((((int32_t)L_62) <= ((int32_t)0)))
		{
			goto IL_00eb;
		}
	}
	{
		int32_t L_63 = V_11;
		int32_t L_64 = V_9;
		if ((((int32_t)L_63) <= ((int32_t)L_64)))
		{
			goto IL_00e6;
		}
	}
	{
		return (BitMatrix_t2873240750 *)NULL;
	}

IL_00e6:
	{
		int32_t L_65 = V_3;
		int32_t L_66 = V_11;
		V_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_65, (int32_t)L_66));
	}

IL_00eb:
	{
		int32_t L_67 = V_7;
		int32_t L_68 = V_8;
		BitMatrix_t2873240750 * L_69 = (BitMatrix_t2873240750 *)il2cpp_codegen_object_new(BitMatrix_t2873240750_il2cpp_TypeInfo_var);
		BitMatrix__ctor_m2506302167(L_69, L_67, L_68, /*hidden argument*/NULL);
		V_12 = L_69;
		V_13 = 0;
		goto IL_013b;
	}

IL_00fb:
	{
		int32_t L_70 = V_3;
		int32_t L_71 = V_13;
		float L_72 = V_2;
		V_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_70, (int32_t)(((int32_t)((int32_t)((float)il2cpp_codegen_multiply((float)(((float)((float)L_71))), (float)L_72)))))));
		V_15 = 0;
		goto IL_012f;
	}

IL_010a:
	{
		BitMatrix_t2873240750 * L_73 = ___image0;
		int32_t L_74 = V_5;
		int32_t L_75 = V_15;
		float L_76 = V_2;
		int32_t L_77 = V_14;
		NullCheck(L_73);
		bool L_78 = BitMatrix_get_Item_m2523865119(L_73, ((int32_t)il2cpp_codegen_add((int32_t)L_74, (int32_t)(((int32_t)((int32_t)((float)il2cpp_codegen_multiply((float)(((float)((float)L_75))), (float)L_76))))))), L_77, /*hidden argument*/NULL);
		if (!L_78)
		{
			goto IL_0129;
		}
	}
	{
		BitMatrix_t2873240750 * L_79 = V_12;
		int32_t L_80 = V_15;
		int32_t L_81 = V_13;
		NullCheck(L_79);
		BitMatrix_set_Item_m2037280244(L_79, L_80, L_81, (bool)1, /*hidden argument*/NULL);
	}

IL_0129:
	{
		int32_t L_82 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add((int32_t)L_82, (int32_t)1));
	}

IL_012f:
	{
		int32_t L_83 = V_15;
		int32_t L_84 = V_7;
		if ((((int32_t)L_83) < ((int32_t)L_84)))
		{
			goto IL_010a;
		}
	}
	{
		int32_t L_85 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add((int32_t)L_85, (int32_t)1));
	}

IL_013b:
	{
		int32_t L_86 = V_13;
		int32_t L_87 = V_8;
		if ((((int32_t)L_86) < ((int32_t)L_87)))
		{
			goto IL_00fb;
		}
	}
	{
		BitMatrix_t2873240750 * L_88 = V_12;
		return L_88;
	}
}
// System.Boolean ZXing.QrCode.QRCodeReader::moduleSize(System.Int32[],ZXing.Common.BitMatrix,System.Single&)
extern "C" IL2CPP_METHOD_ATTR bool QRCodeReader_moduleSize_m4165967419 (RuntimeObject * __this /* static, unused */, Int32U5BU5D_t385246372* ___leftTopBlack0, BitMatrix_t2873240750 * ___image1, float* ___msize2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	int32_t V_5 = 0;
	{
		BitMatrix_t2873240750 * L_0 = ___image1;
		NullCheck(L_0);
		int32_t L_1 = BitMatrix_get_Height_m2434472889(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		BitMatrix_t2873240750 * L_2 = ___image1;
		NullCheck(L_2);
		int32_t L_3 = BitMatrix_get_Width_m3530487944(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		Int32U5BU5D_t385246372* L_4 = ___leftTopBlack0;
		NullCheck(L_4);
		int32_t L_5 = 0;
		int32_t L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_2 = L_6;
		Int32U5BU5D_t385246372* L_7 = ___leftTopBlack0;
		NullCheck(L_7);
		int32_t L_8 = 1;
		int32_t L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_3 = L_9;
		V_4 = (bool)1;
		V_5 = 0;
		goto IL_0043;
	}

IL_001e:
	{
		bool L_10 = V_4;
		BitMatrix_t2873240750 * L_11 = ___image1;
		int32_t L_12 = V_2;
		int32_t L_13 = V_3;
		NullCheck(L_11);
		bool L_14 = BitMatrix_get_Item_m2523865119(L_11, L_12, L_13, /*hidden argument*/NULL);
		if ((((int32_t)L_10) == ((int32_t)L_14)))
		{
			goto IL_003b;
		}
	}
	{
		int32_t L_15 = V_5;
		int32_t L_16 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
		V_5 = L_16;
		if ((((int32_t)L_16) == ((int32_t)5)))
		{
			goto IL_004b;
		}
	}
	{
		bool L_17 = V_4;
		V_4 = (bool)((((int32_t)L_17) == ((int32_t)0))? 1 : 0);
	}

IL_003b:
	{
		int32_t L_18 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
		int32_t L_19 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_0043:
	{
		int32_t L_20 = V_2;
		int32_t L_21 = V_1;
		if ((((int32_t)L_20) >= ((int32_t)L_21)))
		{
			goto IL_004b;
		}
	}
	{
		int32_t L_22 = V_3;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_001e;
		}
	}

IL_004b:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_1;
		if ((((int32_t)L_24) == ((int32_t)L_25)))
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_26 = V_3;
		int32_t L_27 = V_0;
		if ((!(((uint32_t)L_26) == ((uint32_t)L_27))))
		{
			goto IL_005c;
		}
	}

IL_0053:
	{
		float* L_28 = ___msize2;
		*((float*)(L_28)) = (float)(0.0f);
		return (bool)0;
	}

IL_005c:
	{
		float* L_29 = ___msize2;
		int32_t L_30 = V_2;
		Int32U5BU5D_t385246372* L_31 = ___leftTopBlack0;
		NullCheck(L_31);
		int32_t L_32 = 0;
		int32_t L_33 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		*((float*)(L_29)) = (float)((float)((float)(((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_30, (int32_t)L_33)))))/(float)(7.0f)));
		return (bool)1;
	}
}
// System.Void ZXing.QrCode.QRCodeReader::.ctor()
extern "C" IL2CPP_METHOD_ATTR void QRCodeReader__ctor_m631173690 (QRCodeReader_t3363387111 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (QRCodeReader__ctor_m631173690_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Decoder_t1927175606 * L_0 = (Decoder_t1927175606 *)il2cpp_codegen_object_new(Decoder_t1927175606_il2cpp_TypeInfo_var);
		Decoder__ctor_m3728973696(L_0, /*hidden argument*/NULL);
		__this->set_decoder_1(L_0);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ZXing.QrCode.QRCodeReader::.cctor()
extern "C" IL2CPP_METHOD_ATTR void QRCodeReader__cctor_m3777472529 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (QRCodeReader__cctor_m3777472529_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ResultPointU5BU5D_t569055209* L_0 = (ResultPointU5BU5D_t569055209*)SZArrayNew(ResultPointU5BU5D_t569055209_il2cpp_TypeInfo_var, (uint32_t)0);
		((QRCodeReader_t3363387111_StaticFields*)il2cpp_codegen_static_fields_for(QRCodeReader_t3363387111_il2cpp_TypeInfo_var))->set_NO_POINTS_0(L_0);
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
// ZXing.Common.BitMatrix ZXing.QrCode.QRCodeWriter::encode(System.String,ZXing.BarcodeFormat,System.Int32,System.Int32,System.Collections.Generic.IDictionary`2<ZXing.EncodeHintType,System.Object>)
extern "C" IL2CPP_METHOD_ATTR BitMatrix_t2873240750 * QRCodeWriter_encode_m894986042 (QRCodeWriter_t1467281458 * __this, String_t* ___contents0, int32_t ___format1, int32_t ___width2, int32_t ___height3, RuntimeObject* ___hints4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (QRCodeWriter_encode_m894986042_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ErrorCorrectionLevel_t2910789944 * V_0 = NULL;
	int32_t V_1 = 0;
	ErrorCorrectionLevel_t2910789944 * V_2 = NULL;
	Nullable_1_t378540539  V_3;
	memset(&V_3, 0, sizeof(V_3));
	QRCode_t4150242837 * V_4 = NULL;
	ObjectU5BU5D_t2843939325* V_5 = NULL;
	Nullable_1_t378540539  V_6;
	memset(&V_6, 0, sizeof(V_6));
	ErrorCorrectionLevel_t2910789944 * G_B11_0 = NULL;
	Nullable_1_t378540539  G_B16_0;
	memset(&G_B16_0, 0, sizeof(G_B16_0));
	{
		String_t* L_0 = ___contents0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentException_t132251570 * L_2 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_2, _stringLiteral1003240159, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, QRCodeWriter_encode_m894986042_RuntimeMethod_var);
	}

IL_0013:
	{
		int32_t L_3 = ___format1;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)2048))))
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_4 = ___format1;
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = Box(BarcodeFormat_t1017833927_il2cpp_TypeInfo_var, &L_5);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral1669413489, L_6, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_8 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_8, L_7, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, NULL, QRCodeWriter_encode_m894986042_RuntimeMethod_var);
	}

IL_0031:
	{
		int32_t L_9 = ___width2;
		if ((((int32_t)L_9) < ((int32_t)0)))
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_10 = ___height3;
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_0078;
		}
	}

IL_003a:
	{
		ObjectU5BU5D_t2843939325* L_11 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)4);
		V_5 = L_11;
		ObjectU5BU5D_t2843939325* L_12 = V_5;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral210055874);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral210055874);
		ObjectU5BU5D_t2843939325* L_13 = V_5;
		int32_t L_14 = ___width2;
		int32_t L_15 = L_14;
		RuntimeObject * L_16 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_16);
		ObjectU5BU5D_t2843939325* L_17 = V_5;
		Il2CppChar L_18 = ((Il2CppChar)((int32_t)120));
		RuntimeObject * L_19 = Box(Char_t3634460470_il2cpp_TypeInfo_var, &L_18);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_19);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_19);
		ObjectU5BU5D_t2843939325* L_20 = V_5;
		int32_t L_21 = ___height3;
		int32_t L_22 = L_21;
		RuntimeObject * L_23 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_22);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_23);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_23);
		ObjectU5BU5D_t2843939325* L_24 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_25 = String_Concat_m2971454694(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_26 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_26, L_25, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_26, NULL, QRCodeWriter_encode_m894986042_RuntimeMethod_var);
	}

IL_0078:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ErrorCorrectionLevel_t2910789944_il2cpp_TypeInfo_var);
		ErrorCorrectionLevel_t2910789944 * L_27 = ((ErrorCorrectionLevel_t2910789944_StaticFields*)il2cpp_codegen_static_fields_for(ErrorCorrectionLevel_t2910789944_il2cpp_TypeInfo_var))->get_L_0();
		V_0 = L_27;
		V_1 = 4;
		RuntimeObject* L_28 = ___hints4;
		if (!L_28)
		{
			goto IL_00de;
		}
	}
	{
		RuntimeObject* L_29 = ___hints4;
		NullCheck(L_29);
		bool L_30 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(1 /* System.Boolean System.Collections.Generic.IDictionary`2<ZXing.EncodeHintType,System.Object>::ContainsKey(!0) */, IDictionary_2_t1434567506_il2cpp_TypeInfo_var, L_29, 3);
		if (L_30)
		{
			goto IL_0091;
		}
	}
	{
		G_B11_0 = ((ErrorCorrectionLevel_t2910789944 *)(NULL));
		goto IL_009e;
	}

IL_0091:
	{
		RuntimeObject* L_31 = ___hints4;
		NullCheck(L_31);
		RuntimeObject * L_32 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(4 /* !1 System.Collections.Generic.IDictionary`2<ZXing.EncodeHintType,System.Object>::get_Item(!0) */, IDictionary_2_t1434567506_il2cpp_TypeInfo_var, L_31, 3);
		G_B11_0 = ((ErrorCorrectionLevel_t2910789944 *)CastclassSealed((RuntimeObject*)L_32, ErrorCorrectionLevel_t2910789944_il2cpp_TypeInfo_var));
	}

IL_009e:
	{
		V_2 = G_B11_0;
		ErrorCorrectionLevel_t2910789944 * L_33 = V_2;
		if (!L_33)
		{
			goto IL_00a4;
		}
	}
	{
		ErrorCorrectionLevel_t2910789944 * L_34 = V_2;
		V_0 = L_34;
	}

IL_00a4:
	{
		RuntimeObject* L_35 = ___hints4;
		NullCheck(L_35);
		bool L_36 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(1 /* System.Boolean System.Collections.Generic.IDictionary`2<ZXing.EncodeHintType,System.Object>::ContainsKey(!0) */, IDictionary_2_t1434567506_il2cpp_TypeInfo_var, L_35, 5);
		if (L_36)
		{
			goto IL_00ba;
		}
	}
	{
		il2cpp_codegen_initobj((&V_6), sizeof(Nullable_1_t378540539 ));
		Nullable_1_t378540539  L_37 = V_6;
		G_B16_0 = L_37;
		goto IL_00cc;
	}

IL_00ba:
	{
		RuntimeObject* L_38 = ___hints4;
		NullCheck(L_38);
		RuntimeObject * L_39 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(4 /* !1 System.Collections.Generic.IDictionary`2<ZXing.EncodeHintType,System.Object>::get_Item(!0) */, IDictionary_2_t1434567506_il2cpp_TypeInfo_var, L_38, 5);
		Nullable_1_t378540539  L_40;
		memset(&L_40, 0, sizeof(L_40));
		Nullable_1__ctor_m3852020309((&L_40), ((*(int32_t*)((int32_t*)UnBox(L_39, Int32_t2950945753_il2cpp_TypeInfo_var)))), /*hidden argument*/Nullable_1__ctor_m3852020309_RuntimeMethod_var);
		G_B16_0 = L_40;
	}

IL_00cc:
	{
		V_3 = G_B16_0;
		bool L_41 = Nullable_1_get_HasValue_m3011319823((Nullable_1_t378540539 *)(&V_3), /*hidden argument*/Nullable_1_get_HasValue_m3011319823_RuntimeMethod_var);
		if (!L_41)
		{
			goto IL_00de;
		}
	}
	{
		int32_t L_42 = Nullable_1_get_Value_m1752496362((Nullable_1_t378540539 *)(&V_3), /*hidden argument*/Nullable_1_get_Value_m1752496362_RuntimeMethod_var);
		V_1 = L_42;
	}

IL_00de:
	{
		String_t* L_43 = ___contents0;
		ErrorCorrectionLevel_t2910789944 * L_44 = V_0;
		RuntimeObject* L_45 = ___hints4;
		IL2CPP_RUNTIME_CLASS_INIT(Encoder_t1190713841_il2cpp_TypeInfo_var);
		QRCode_t4150242837 * L_46 = Encoder_encode_m1413850817(NULL /*static, unused*/, L_43, L_44, L_45, /*hidden argument*/NULL);
		V_4 = L_46;
		QRCode_t4150242837 * L_47 = V_4;
		int32_t L_48 = ___width2;
		int32_t L_49 = ___height3;
		int32_t L_50 = V_1;
		BitMatrix_t2873240750 * L_51 = QRCodeWriter_renderResult_m1094602221(NULL /*static, unused*/, L_47, L_48, L_49, L_50, /*hidden argument*/NULL);
		return L_51;
	}
}
// ZXing.Common.BitMatrix ZXing.QrCode.QRCodeWriter::renderResult(ZXing.QrCode.Internal.QRCode,System.Int32,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR BitMatrix_t2873240750 * QRCodeWriter_renderResult_m1094602221 (RuntimeObject * __this /* static, unused */, QRCode_t4150242837 * ___code0, int32_t ___width1, int32_t ___height2, int32_t ___quietZone3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (QRCodeWriter_renderResult_m1094602221_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteMatrix_t2868153292 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	BitMatrix_t2873240750 * V_10 = NULL;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	{
		QRCode_t4150242837 * L_0 = ___code0;
		NullCheck(L_0);
		ByteMatrix_t2868153292 * L_1 = QRCode_get_Matrix_m1122117869(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		ByteMatrix_t2868153292 * L_2 = V_0;
		if (L_2)
		{
			goto IL_0010;
		}
	}
	{
		InvalidOperationException_t56020091 * L_3 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m2734335978(L_3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, QRCodeWriter_renderResult_m1094602221_RuntimeMethod_var);
	}

IL_0010:
	{
		ByteMatrix_t2868153292 * L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = ByteMatrix_get_Width_m2340592646(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		ByteMatrix_t2868153292 * L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = ByteMatrix_get_Height_m309600017(L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		int32_t L_8 = V_1;
		int32_t L_9 = ___quietZone3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)((int32_t)((int32_t)L_9<<(int32_t)1))));
		int32_t L_10 = V_2;
		int32_t L_11 = ___quietZone3;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)((int32_t)((int32_t)L_11<<(int32_t)1))));
		int32_t L_12 = ___width1;
		int32_t L_13 = V_3;
		int32_t L_14 = Math_Max_m1873195862(NULL /*static, unused*/, L_12, L_13, /*hidden argument*/NULL);
		V_5 = L_14;
		int32_t L_15 = ___height2;
		int32_t L_16 = V_4;
		int32_t L_17 = Math_Max_m1873195862(NULL /*static, unused*/, L_15, L_16, /*hidden argument*/NULL);
		V_6 = L_17;
		int32_t L_18 = V_5;
		int32_t L_19 = V_3;
		int32_t L_20 = V_6;
		int32_t L_21 = V_4;
		int32_t L_22 = Math_Min_m3468062251(NULL /*static, unused*/, ((int32_t)((int32_t)L_18/(int32_t)L_19)), ((int32_t)((int32_t)L_20/(int32_t)L_21)), /*hidden argument*/NULL);
		V_7 = L_22;
		int32_t L_23 = V_5;
		int32_t L_24 = V_1;
		int32_t L_25 = V_7;
		V_8 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_23, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_24, (int32_t)L_25))))/(int32_t)2));
		int32_t L_26 = V_6;
		int32_t L_27 = V_2;
		int32_t L_28 = V_7;
		V_9 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_26, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_27, (int32_t)L_28))))/(int32_t)2));
		int32_t L_29 = V_5;
		int32_t L_30 = V_6;
		BitMatrix_t2873240750 * L_31 = (BitMatrix_t2873240750 *)il2cpp_codegen_object_new(BitMatrix_t2873240750_il2cpp_TypeInfo_var);
		BitMatrix__ctor_m2506302167(L_31, L_29, L_30, /*hidden argument*/NULL);
		V_10 = L_31;
		V_11 = 0;
		int32_t L_32 = V_9;
		V_12 = L_32;
		goto IL_00bc;
	}

IL_0078:
	{
		V_13 = 0;
		int32_t L_33 = V_8;
		V_14 = L_33;
		goto IL_00aa;
	}

IL_0081:
	{
		ByteMatrix_t2868153292 * L_34 = V_0;
		int32_t L_35 = V_13;
		int32_t L_36 = V_11;
		NullCheck(L_34);
		int32_t L_37 = ByteMatrix_get_Item_m1891686978(L_34, L_35, L_36, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_37) == ((uint32_t)1))))
		{
			goto IL_009d;
		}
	}
	{
		BitMatrix_t2873240750 * L_38 = V_10;
		int32_t L_39 = V_14;
		int32_t L_40 = V_12;
		int32_t L_41 = V_7;
		int32_t L_42 = V_7;
		NullCheck(L_38);
		BitMatrix_setRegion_m136840845(L_38, L_39, L_40, L_41, L_42, /*hidden argument*/NULL);
	}

IL_009d:
	{
		int32_t L_43 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)1));
		int32_t L_44 = V_14;
		int32_t L_45 = V_7;
		V_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)L_45));
	}

IL_00aa:
	{
		int32_t L_46 = V_13;
		int32_t L_47 = V_1;
		if ((((int32_t)L_46) < ((int32_t)L_47)))
		{
			goto IL_0081;
		}
	}
	{
		int32_t L_48 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_48, (int32_t)1));
		int32_t L_49 = V_12;
		int32_t L_50 = V_7;
		V_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_49, (int32_t)L_50));
	}

IL_00bc:
	{
		int32_t L_51 = V_11;
		int32_t L_52 = V_2;
		if ((((int32_t)L_51) < ((int32_t)L_52)))
		{
			goto IL_0078;
		}
	}
	{
		BitMatrix_t2873240750 * L_53 = V_10;
		return L_53;
	}
}
// System.Void ZXing.QrCode.QRCodeWriter::.ctor()
extern "C" IL2CPP_METHOD_ATTR void QRCodeWriter__ctor_m2862527280 (QRCodeWriter_t1467281458 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
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
// System.Void ZXing.RGBLuminanceSource::.ctor(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void RGBLuminanceSource__ctor_m1359303021 (RGBLuminanceSource_t91581829 * __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___width0;
		int32_t L_1 = ___height1;
		BaseLuminanceSource__ctor_m2383661027(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ZXing.RGBLuminanceSource::.ctor(System.Byte[],System.Int32,System.Int32,ZXing.RGBLuminanceSource/BitmapFormat)
extern "C" IL2CPP_METHOD_ATTR void RGBLuminanceSource__ctor_m1916549953 (RGBLuminanceSource_t91581829 * __this, ByteU5BU5D_t4116647657* ___rgbRawBytes0, int32_t ___width1, int32_t ___height2, int32_t ___bitmapFormat3, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___width1;
		int32_t L_1 = ___height2;
		BaseLuminanceSource__ctor_m2383661027(__this, L_0, L_1, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_2 = ___rgbRawBytes0;
		int32_t L_3 = ___bitmapFormat3;
		RGBLuminanceSource_CalculateLuminance_m1406356467(__this, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// ZXing.LuminanceSource ZXing.RGBLuminanceSource::CreateLuminanceSource(System.Byte[],System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR LuminanceSource_t3713829503 * RGBLuminanceSource_CreateLuminanceSource_m3839951721 (RGBLuminanceSource_t91581829 * __this, ByteU5BU5D_t4116647657* ___newLuminances0, int32_t ___width1, int32_t ___height2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RGBLuminanceSource_CreateLuminanceSource_m3839951721_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RGBLuminanceSource_t91581829 * V_0 = NULL;
	{
		int32_t L_0 = ___width1;
		int32_t L_1 = ___height2;
		RGBLuminanceSource_t91581829 * L_2 = (RGBLuminanceSource_t91581829 *)il2cpp_codegen_object_new(RGBLuminanceSource_t91581829_il2cpp_TypeInfo_var);
		RGBLuminanceSource__ctor_m1359303021(L_2, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		RGBLuminanceSource_t91581829 * L_3 = V_0;
		ByteU5BU5D_t4116647657* L_4 = ___newLuminances0;
		NullCheck(L_3);
		((BaseLuminanceSource_t3215128144 *)L_3)->set_luminances_2(L_4);
		RGBLuminanceSource_t91581829 * L_5 = V_0;
		return L_5;
	}
}
// ZXing.RGBLuminanceSource/BitmapFormat ZXing.RGBLuminanceSource::DetermineBitmapFormat(System.Byte[],System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t RGBLuminanceSource_DetermineBitmapFormat_m2494281707 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___rgbRawBytes0, int32_t ___width1, int32_t ___height2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RGBLuminanceSource_DetermineBitmapFormat_m2494281707_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___width1;
		int32_t L_1 = ___height2;
		V_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)L_1));
		ByteU5BU5D_t4116647657* L_2 = ___rgbRawBytes0;
		NullCheck(L_2);
		int32_t L_3 = V_0;
		V_1 = ((int32_t)((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_2)->max_length))))/(int32_t)L_3));
		int32_t L_4 = V_1;
		V_2 = L_4;
		int32_t L_5 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)1)))
		{
			case 0:
			{
				goto IL_0026;
			}
			case 1:
			{
				goto IL_0028;
			}
			case 2:
			{
				goto IL_002a;
			}
			case 3:
			{
				goto IL_002c;
			}
		}
	}
	{
		goto IL_002e;
	}

IL_0026:
	{
		return (int32_t)(1);
	}

IL_0028:
	{
		return (int32_t)(8);
	}

IL_002a:
	{
		return (int32_t)(2);
	}

IL_002c:
	{
		return (int32_t)(3);
	}

IL_002e:
	{
		ArgumentException_t132251570 * L_6 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_6, _stringLiteral404267128, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, NULL, RGBLuminanceSource_DetermineBitmapFormat_m2494281707_RuntimeMethod_var);
	}
}
// System.Void ZXing.RGBLuminanceSource::CalculateLuminance(System.Byte[],ZXing.RGBLuminanceSource/BitmapFormat)
extern "C" IL2CPP_METHOD_ATTR void RGBLuminanceSource_CalculateLuminance_m1406356467 (RGBLuminanceSource_t91581829 * __this, ByteU5BU5D_t4116647657* ___rgbRawBytes0, int32_t ___bitmapFormat1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RGBLuminanceSource_CalculateLuminance_m1406356467_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t G_B6_0 = 0;
	ByteU5BU5D_t4116647657* G_B6_1 = NULL;
	int32_t G_B6_2 = 0;
	ByteU5BU5D_t4116647657* G_B6_3 = NULL;
	int32_t G_B5_0 = 0;
	ByteU5BU5D_t4116647657* G_B5_1 = NULL;
	int32_t G_B5_2 = 0;
	ByteU5BU5D_t4116647657* G_B5_3 = NULL;
	int32_t G_B7_0 = 0;
	int32_t G_B7_1 = 0;
	ByteU5BU5D_t4116647657* G_B7_2 = NULL;
	int32_t G_B7_3 = 0;
	ByteU5BU5D_t4116647657* G_B7_4 = NULL;
	{
		int32_t L_0 = ___bitmapFormat1;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_1 = ___rgbRawBytes0;
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 ZXing.LuminanceSource::get_Width() */, __this);
		int32_t L_3 = VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 ZXing.LuminanceSource::get_Height() */, __this);
		int32_t L_4 = RGBLuminanceSource_DetermineBitmapFormat_m2494281707(NULL /*static, unused*/, L_1, L_2, L_3, /*hidden argument*/NULL);
		___bitmapFormat1 = L_4;
	}

IL_0017:
	{
		int32_t L_5 = ___bitmapFormat1;
		V_0 = L_5;
		int32_t L_6 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)1)))
		{
			case 0:
			{
				goto IL_0047;
			}
			case 1:
			{
				goto IL_0070;
			}
			case 2:
			{
				goto IL_0080;
			}
			case 3:
			{
				goto IL_0098;
			}
			case 4:
			{
				goto IL_0078;
			}
			case 5:
			{
				goto IL_0088;
			}
			case 6:
			{
				goto IL_00a0;
			}
			case 7:
			{
				goto IL_00a8;
			}
			case 8:
			{
				goto IL_0090;
			}
		}
	}
	{
		goto IL_00b0;
	}

IL_0047:
	{
		ByteU5BU5D_t4116647657* L_7 = ___rgbRawBytes0;
		ByteU5BU5D_t4116647657* L_8 = ((BaseLuminanceSource_t3215128144 *)__this)->get_luminances_2();
		ByteU5BU5D_t4116647657* L_9 = ___rgbRawBytes0;
		NullCheck(L_9);
		ByteU5BU5D_t4116647657* L_10 = ((BaseLuminanceSource_t3215128144 *)__this)->get_luminances_2();
		NullCheck(L_10);
		G_B5_0 = 0;
		G_B5_1 = L_8;
		G_B5_2 = 0;
		G_B5_3 = L_7;
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_9)->max_length))))) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_10)->max_length)))))))
		{
			G_B6_0 = 0;
			G_B6_1 = L_8;
			G_B6_2 = 0;
			G_B6_3 = L_7;
			goto IL_0067;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_11 = ((BaseLuminanceSource_t3215128144 *)__this)->get_luminances_2();
		NullCheck(L_11);
		G_B7_0 = (((int32_t)((int32_t)(((RuntimeArray *)L_11)->max_length))));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		G_B7_3 = G_B5_2;
		G_B7_4 = G_B5_3;
		goto IL_006a;
	}

IL_0067:
	{
		ByteU5BU5D_t4116647657* L_12 = ___rgbRawBytes0;
		NullCheck(L_12);
		G_B7_0 = (((int32_t)((int32_t)(((RuntimeArray *)L_12)->max_length))));
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
		G_B7_3 = G_B6_2;
		G_B7_4 = G_B6_3;
	}

IL_006a:
	{
		Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)G_B7_4, G_B7_3, (RuntimeArray *)(RuntimeArray *)G_B7_2, G_B7_1, G_B7_0, /*hidden argument*/NULL);
		return;
	}

IL_0070:
	{
		ByteU5BU5D_t4116647657* L_13 = ___rgbRawBytes0;
		RGBLuminanceSource_CalculateLuminanceRGB24_m3698380013(__this, L_13, /*hidden argument*/NULL);
		return;
	}

IL_0078:
	{
		ByteU5BU5D_t4116647657* L_14 = ___rgbRawBytes0;
		RGBLuminanceSource_CalculateLuminanceBGR24_m1853523775(__this, L_14, /*hidden argument*/NULL);
		return;
	}

IL_0080:
	{
		ByteU5BU5D_t4116647657* L_15 = ___rgbRawBytes0;
		RGBLuminanceSource_CalculateLuminanceRGB32_m2543323953(__this, L_15, /*hidden argument*/NULL);
		return;
	}

IL_0088:
	{
		ByteU5BU5D_t4116647657* L_16 = ___rgbRawBytes0;
		RGBLuminanceSource_CalculateLuminanceBGR32_m1773636966(__this, L_16, /*hidden argument*/NULL);
		return;
	}

IL_0090:
	{
		ByteU5BU5D_t4116647657* L_17 = ___rgbRawBytes0;
		RGBLuminanceSource_CalculateLuminanceRGBA32_m171125628(__this, L_17, /*hidden argument*/NULL);
		return;
	}

IL_0098:
	{
		ByteU5BU5D_t4116647657* L_18 = ___rgbRawBytes0;
		RGBLuminanceSource_CalculateLuminanceARGB32_m2667616074(__this, L_18, /*hidden argument*/NULL);
		return;
	}

IL_00a0:
	{
		ByteU5BU5D_t4116647657* L_19 = ___rgbRawBytes0;
		RGBLuminanceSource_CalculateLuminanceBGRA32_m2919798760(__this, L_19, /*hidden argument*/NULL);
		return;
	}

IL_00a8:
	{
		ByteU5BU5D_t4116647657* L_20 = ___rgbRawBytes0;
		RGBLuminanceSource_CalculateLuminanceRGB565_m63314896(__this, L_20, /*hidden argument*/NULL);
		return;
	}

IL_00b0:
	{
		int32_t L_21 = ___bitmapFormat1;
		int32_t L_22 = L_21;
		RuntimeObject * L_23 = Box(BitmapFormat_t3323075775_il2cpp_TypeInfo_var, &L_22);
		NullCheck(L_23);
		String_t* L_24 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_23);
		ArgumentException_t132251570 * L_25 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1216717135(L_25, _stringLiteral2975982805, L_24, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_25, NULL, RGBLuminanceSource_CalculateLuminance_m1406356467_RuntimeMethod_var);
	}
}
// System.Void ZXing.RGBLuminanceSource::CalculateLuminanceRGB565(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void RGBLuminanceSource_CalculateLuminanceRGB565_m63314896 (RGBLuminanceSource_t91581829 * __this, ByteU5BU5D_t4116647657* ___rgb565RawData0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint8_t V_2 = 0x0;
	uint8_t V_3 = 0x0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0090;
	}

IL_0009:
	{
		ByteU5BU5D_t4116647657* L_0 = ___rgb565RawData0;
		int32_t L_1 = V_1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_2 = L_3;
		ByteU5BU5D_t4116647657* L_4 = ___rgb565RawData0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
		uint8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		uint8_t L_8 = V_2;
		V_4 = ((int32_t)((int32_t)L_8&(int32_t)((int32_t)31)));
		uint8_t L_9 = V_2;
		uint8_t L_10 = V_3;
		V_5 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_9&(int32_t)((int32_t)224)))>>(int32_t)5))|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_10&(int32_t)3))<<(int32_t)3))))&(int32_t)((int32_t)31)));
		uint8_t L_11 = V_3;
		V_6 = ((int32_t)((int32_t)((int32_t)((int32_t)L_11>>(int32_t)2))&(int32_t)((int32_t)31)));
		int32_t L_12 = V_6;
		V_7 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_12, (int32_t)((int32_t)527))), (int32_t)((int32_t)23)))>>(int32_t)6));
		int32_t L_13 = V_5;
		V_8 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_13, (int32_t)((int32_t)527))), (int32_t)((int32_t)23)))>>(int32_t)6));
		int32_t L_14 = V_4;
		V_9 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_14, (int32_t)((int32_t)527))), (int32_t)((int32_t)23)))>>(int32_t)6));
		ByteU5BU5D_t4116647657* L_15 = ((BaseLuminanceSource_t3215128144 *)__this)->get_luminances_2();
		int32_t L_16 = V_0;
		int32_t L_17 = V_7;
		int32_t L_18 = V_8;
		int32_t L_19 = V_9;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)19562), (int32_t)L_17)), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)38550), (int32_t)L_18)))), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)7424), (int32_t)L_19))))>>(int32_t)((int32_t)16)))))));
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)2));
		int32_t L_21 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
	}

IL_0090:
	{
		int32_t L_22 = V_1;
		ByteU5BU5D_t4116647657* L_23 = ___rgb565RawData0;
		NullCheck(L_23);
		if ((((int32_t)L_22) >= ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_23)->max_length)))))))
		{
			goto IL_00a4;
		}
	}
	{
		int32_t L_24 = V_0;
		ByteU5BU5D_t4116647657* L_25 = ((BaseLuminanceSource_t3215128144 *)__this)->get_luminances_2();
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_25)->max_length)))))))
		{
			goto IL_0009;
		}
	}

IL_00a4:
	{
		return;
	}
}
// System.Void ZXing.RGBLuminanceSource::CalculateLuminanceRGB24(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void RGBLuminanceSource_CalculateLuminanceRGB24_m3698380013 (RGBLuminanceSource_t91581829 * __this, ByteU5BU5D_t4116647657* ___rgbRawBytes0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0047;
	}

IL_0006:
	{
		ByteU5BU5D_t4116647657* L_0 = ___rgbRawBytes0;
		int32_t L_1 = V_0;
		int32_t L_2 = L_1;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
		NullCheck(L_0);
		int32_t L_3 = L_2;
		uint8_t L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		ByteU5BU5D_t4116647657* L_5 = ___rgbRawBytes0;
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
		NullCheck(L_5);
		int32_t L_8 = L_7;
		uint8_t L_9 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_3 = L_9;
		ByteU5BU5D_t4116647657* L_10 = ___rgbRawBytes0;
		int32_t L_11 = V_0;
		int32_t L_12 = L_11;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
		NullCheck(L_10);
		int32_t L_13 = L_12;
		uint8_t L_14 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_4 = L_14;
		ByteU5BU5D_t4116647657* L_15 = ((BaseLuminanceSource_t3215128144 *)__this)->get_luminances_2();
		int32_t L_16 = V_1;
		int32_t L_17 = V_2;
		int32_t L_18 = V_3;
		int32_t L_19 = V_4;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)19562), (int32_t)L_17)), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)38550), (int32_t)L_18)))), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)7424), (int32_t)L_19))))>>(int32_t)((int32_t)16)))))));
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_0047:
	{
		int32_t L_21 = V_0;
		ByteU5BU5D_t4116647657* L_22 = ___rgbRawBytes0;
		NullCheck(L_22);
		if ((((int32_t)L_21) >= ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_22)->max_length)))))))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_23 = V_1;
		ByteU5BU5D_t4116647657* L_24 = ((BaseLuminanceSource_t3215128144 *)__this)->get_luminances_2();
		NullCheck(L_24);
		if ((((int32_t)L_23) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_24)->max_length)))))))
		{
			goto IL_0006;
		}
	}

IL_0058:
	{
		return;
	}
}
// System.Void ZXing.RGBLuminanceSource::CalculateLuminanceBGR24(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void RGBLuminanceSource_CalculateLuminanceBGR24_m1853523775 (RGBLuminanceSource_t91581829 * __this, ByteU5BU5D_t4116647657* ___rgbRawBytes0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0047;
	}

IL_0006:
	{
		ByteU5BU5D_t4116647657* L_0 = ___rgbRawBytes0;
		int32_t L_1 = V_0;
		int32_t L_2 = L_1;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
		NullCheck(L_0);
		int32_t L_3 = L_2;
		uint8_t L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		ByteU5BU5D_t4116647657* L_5 = ___rgbRawBytes0;
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
		NullCheck(L_5);
		int32_t L_8 = L_7;
		uint8_t L_9 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_3 = L_9;
		ByteU5BU5D_t4116647657* L_10 = ___rgbRawBytes0;
		int32_t L_11 = V_0;
		int32_t L_12 = L_11;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
		NullCheck(L_10);
		int32_t L_13 = L_12;
		uint8_t L_14 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_4 = L_14;
		ByteU5BU5D_t4116647657* L_15 = ((BaseLuminanceSource_t3215128144 *)__this)->get_luminances_2();
		int32_t L_16 = V_1;
		int32_t L_17 = V_4;
		int32_t L_18 = V_3;
		int32_t L_19 = V_2;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)19562), (int32_t)L_17)), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)38550), (int32_t)L_18)))), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)7424), (int32_t)L_19))))>>(int32_t)((int32_t)16)))))));
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_0047:
	{
		int32_t L_21 = V_0;
		ByteU5BU5D_t4116647657* L_22 = ___rgbRawBytes0;
		NullCheck(L_22);
		if ((((int32_t)L_21) >= ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_22)->max_length)))))))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_23 = V_1;
		ByteU5BU5D_t4116647657* L_24 = ((BaseLuminanceSource_t3215128144 *)__this)->get_luminances_2();
		NullCheck(L_24);
		if ((((int32_t)L_23) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_24)->max_length)))))))
		{
			goto IL_0006;
		}
	}

IL_0058:
	{
		return;
	}
}
// System.Void ZXing.RGBLuminanceSource::CalculateLuminanceRGB32(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void RGBLuminanceSource_CalculateLuminanceRGB32_m2543323953 (RGBLuminanceSource_t91581829 * __this, ByteU5BU5D_t4116647657* ___rgbRawBytes0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_004b;
	}

IL_0006:
	{
		ByteU5BU5D_t4116647657* L_0 = ___rgbRawBytes0;
		int32_t L_1 = V_0;
		int32_t L_2 = L_1;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
		NullCheck(L_0);
		int32_t L_3 = L_2;
		uint8_t L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		ByteU5BU5D_t4116647657* L_5 = ___rgbRawBytes0;
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
		NullCheck(L_5);
		int32_t L_8 = L_7;
		uint8_t L_9 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_3 = L_9;
		ByteU5BU5D_t4116647657* L_10 = ___rgbRawBytes0;
		int32_t L_11 = V_0;
		int32_t L_12 = L_11;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
		NullCheck(L_10);
		int32_t L_13 = L_12;
		uint8_t L_14 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_4 = L_14;
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
		ByteU5BU5D_t4116647657* L_16 = ((BaseLuminanceSource_t3215128144 *)__this)->get_luminances_2();
		int32_t L_17 = V_1;
		int32_t L_18 = V_2;
		int32_t L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)19562), (int32_t)L_18)), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)38550), (int32_t)L_19)))), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)7424), (int32_t)L_20))))>>(int32_t)((int32_t)16)))))));
		int32_t L_21 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
	}

IL_004b:
	{
		int32_t L_22 = V_0;
		ByteU5BU5D_t4116647657* L_23 = ___rgbRawBytes0;
		NullCheck(L_23);
		if ((((int32_t)L_22) >= ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_23)->max_length)))))))
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_24 = V_1;
		ByteU5BU5D_t4116647657* L_25 = ((BaseLuminanceSource_t3215128144 *)__this)->get_luminances_2();
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_25)->max_length)))))))
		{
			goto IL_0006;
		}
	}

IL_005c:
	{
		return;
	}
}
// System.Void ZXing.RGBLuminanceSource::CalculateLuminanceBGR32(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void RGBLuminanceSource_CalculateLuminanceBGR32_m1773636966 (RGBLuminanceSource_t91581829 * __this, ByteU5BU5D_t4116647657* ___rgbRawBytes0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_004b;
	}

IL_0006:
	{
		ByteU5BU5D_t4116647657* L_0 = ___rgbRawBytes0;
		int32_t L_1 = V_0;
		int32_t L_2 = L_1;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
		NullCheck(L_0);
		int32_t L_3 = L_2;
		uint8_t L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		ByteU5BU5D_t4116647657* L_5 = ___rgbRawBytes0;
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
		NullCheck(L_5);
		int32_t L_8 = L_7;
		uint8_t L_9 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_3 = L_9;
		ByteU5BU5D_t4116647657* L_10 = ___rgbRawBytes0;
		int32_t L_11 = V_0;
		int32_t L_12 = L_11;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
		NullCheck(L_10);
		int32_t L_13 = L_12;
		uint8_t L_14 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_4 = L_14;
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
		ByteU5BU5D_t4116647657* L_16 = ((BaseLuminanceSource_t3215128144 *)__this)->get_luminances_2();
		int32_t L_17 = V_1;
		int32_t L_18 = V_4;
		int32_t L_19 = V_3;
		int32_t L_20 = V_2;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)19562), (int32_t)L_18)), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)38550), (int32_t)L_19)))), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)7424), (int32_t)L_20))))>>(int32_t)((int32_t)16)))))));
		int32_t L_21 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
	}

IL_004b:
	{
		int32_t L_22 = V_0;
		ByteU5BU5D_t4116647657* L_23 = ___rgbRawBytes0;
		NullCheck(L_23);
		if ((((int32_t)L_22) >= ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_23)->max_length)))))))
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_24 = V_1;
		ByteU5BU5D_t4116647657* L_25 = ((BaseLuminanceSource_t3215128144 *)__this)->get_luminances_2();
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_25)->max_length)))))))
		{
			goto IL_0006;
		}
	}

IL_005c:
	{
		return;
	}
}
// System.Void ZXing.RGBLuminanceSource::CalculateLuminanceBGRA32(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void RGBLuminanceSource_CalculateLuminanceBGRA32_m2919798760 (RGBLuminanceSource_t91581829 * __this, ByteU5BU5D_t4116647657* ___rgbRawBytes0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint8_t V_2 = 0x0;
	uint8_t V_3 = 0x0;
	uint8_t V_4 = 0x0;
	uint8_t V_5 = 0x0;
	uint8_t V_6 = 0x0;
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_006b;
	}

IL_0006:
	{
		ByteU5BU5D_t4116647657* L_0 = ___rgbRawBytes0;
		int32_t L_1 = V_0;
		int32_t L_2 = L_1;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
		NullCheck(L_0);
		int32_t L_3 = L_2;
		uint8_t L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		ByteU5BU5D_t4116647657* L_5 = ___rgbRawBytes0;
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
		NullCheck(L_5);
		int32_t L_8 = L_7;
		uint8_t L_9 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_3 = L_9;
		ByteU5BU5D_t4116647657* L_10 = ___rgbRawBytes0;
		int32_t L_11 = V_0;
		int32_t L_12 = L_11;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
		NullCheck(L_10);
		int32_t L_13 = L_12;
		uint8_t L_14 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_4 = L_14;
		ByteU5BU5D_t4116647657* L_15 = ___rgbRawBytes0;
		int32_t L_16 = V_0;
		int32_t L_17 = L_16;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
		NullCheck(L_15);
		int32_t L_18 = L_17;
		uint8_t L_19 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_5 = L_19;
		uint8_t L_20 = V_4;
		uint8_t L_21 = V_3;
		uint8_t L_22 = V_2;
		V_6 = (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)19562), (int32_t)L_20)), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)38550), (int32_t)L_21)))), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)7424), (int32_t)L_22))))>>(int32_t)((int32_t)16))))));
		ByteU5BU5D_t4116647657* L_23 = ((BaseLuminanceSource_t3215128144 *)__this)->get_luminances_2();
		int32_t L_24 = V_1;
		uint8_t L_25 = V_6;
		uint8_t L_26 = V_5;
		uint8_t L_27 = V_5;
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (uint8_t)(((int32_t)((uint8_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_25, (int32_t)L_26))>>(int32_t)8)), (int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)255), (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)255), (int32_t)L_27))))>>(int32_t)8))))))));
		int32_t L_28 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
	}

IL_006b:
	{
		int32_t L_29 = V_0;
		ByteU5BU5D_t4116647657* L_30 = ___rgbRawBytes0;
		NullCheck(L_30);
		if ((((int32_t)L_29) >= ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_30)->max_length)))))))
		{
			goto IL_007c;
		}
	}
	{
		int32_t L_31 = V_1;
		ByteU5BU5D_t4116647657* L_32 = ((BaseLuminanceSource_t3215128144 *)__this)->get_luminances_2();
		NullCheck(L_32);
		if ((((int32_t)L_31) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_32)->max_length)))))))
		{
			goto IL_0006;
		}
	}

IL_007c:
	{
		return;
	}
}
// System.Void ZXing.RGBLuminanceSource::CalculateLuminanceRGBA32(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void RGBLuminanceSource_CalculateLuminanceRGBA32_m171125628 (RGBLuminanceSource_t91581829 * __this, ByteU5BU5D_t4116647657* ___rgbRawBytes0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint8_t V_2 = 0x0;
	uint8_t V_3 = 0x0;
	uint8_t V_4 = 0x0;
	uint8_t V_5 = 0x0;
	uint8_t V_6 = 0x0;
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_006b;
	}

IL_0006:
	{
		ByteU5BU5D_t4116647657* L_0 = ___rgbRawBytes0;
		int32_t L_1 = V_0;
		int32_t L_2 = L_1;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
		NullCheck(L_0);
		int32_t L_3 = L_2;
		uint8_t L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		ByteU5BU5D_t4116647657* L_5 = ___rgbRawBytes0;
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
		NullCheck(L_5);
		int32_t L_8 = L_7;
		uint8_t L_9 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_3 = L_9;
		ByteU5BU5D_t4116647657* L_10 = ___rgbRawBytes0;
		int32_t L_11 = V_0;
		int32_t L_12 = L_11;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
		NullCheck(L_10);
		int32_t L_13 = L_12;
		uint8_t L_14 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_4 = L_14;
		ByteU5BU5D_t4116647657* L_15 = ___rgbRawBytes0;
		int32_t L_16 = V_0;
		int32_t L_17 = L_16;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
		NullCheck(L_15);
		int32_t L_18 = L_17;
		uint8_t L_19 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_5 = L_19;
		uint8_t L_20 = V_2;
		uint8_t L_21 = V_3;
		uint8_t L_22 = V_4;
		V_6 = (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)19562), (int32_t)L_20)), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)38550), (int32_t)L_21)))), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)7424), (int32_t)L_22))))>>(int32_t)((int32_t)16))))));
		ByteU5BU5D_t4116647657* L_23 = ((BaseLuminanceSource_t3215128144 *)__this)->get_luminances_2();
		int32_t L_24 = V_1;
		uint8_t L_25 = V_6;
		uint8_t L_26 = V_5;
		uint8_t L_27 = V_5;
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (uint8_t)(((int32_t)((uint8_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_25, (int32_t)L_26))>>(int32_t)8)), (int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)255), (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)255), (int32_t)L_27))))>>(int32_t)8))))))));
		int32_t L_28 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
	}

IL_006b:
	{
		int32_t L_29 = V_0;
		ByteU5BU5D_t4116647657* L_30 = ___rgbRawBytes0;
		NullCheck(L_30);
		if ((((int32_t)L_29) >= ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_30)->max_length)))))))
		{
			goto IL_007c;
		}
	}
	{
		int32_t L_31 = V_1;
		ByteU5BU5D_t4116647657* L_32 = ((BaseLuminanceSource_t3215128144 *)__this)->get_luminances_2();
		NullCheck(L_32);
		if ((((int32_t)L_31) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_32)->max_length)))))))
		{
			goto IL_0006;
		}
	}

IL_007c:
	{
		return;
	}
}
// System.Void ZXing.RGBLuminanceSource::CalculateLuminanceARGB32(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void RGBLuminanceSource_CalculateLuminanceARGB32_m2667616074 (RGBLuminanceSource_t91581829 * __this, ByteU5BU5D_t4116647657* ___rgbRawBytes0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint8_t V_2 = 0x0;
	uint8_t V_3 = 0x0;
	uint8_t V_4 = 0x0;
	uint8_t V_5 = 0x0;
	uint8_t V_6 = 0x0;
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_006a;
	}

IL_0006:
	{
		ByteU5BU5D_t4116647657* L_0 = ___rgbRawBytes0;
		int32_t L_1 = V_0;
		int32_t L_2 = L_1;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
		NullCheck(L_0);
		int32_t L_3 = L_2;
		uint8_t L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		ByteU5BU5D_t4116647657* L_5 = ___rgbRawBytes0;
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
		NullCheck(L_5);
		int32_t L_8 = L_7;
		uint8_t L_9 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_3 = L_9;
		ByteU5BU5D_t4116647657* L_10 = ___rgbRawBytes0;
		int32_t L_11 = V_0;
		int32_t L_12 = L_11;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
		NullCheck(L_10);
		int32_t L_13 = L_12;
		uint8_t L_14 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_4 = L_14;
		ByteU5BU5D_t4116647657* L_15 = ___rgbRawBytes0;
		int32_t L_16 = V_0;
		int32_t L_17 = L_16;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
		NullCheck(L_15);
		int32_t L_18 = L_17;
		uint8_t L_19 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_5 = L_19;
		uint8_t L_20 = V_3;
		uint8_t L_21 = V_4;
		uint8_t L_22 = V_5;
		V_6 = (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)19562), (int32_t)L_20)), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)38550), (int32_t)L_21)))), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)7424), (int32_t)L_22))))>>(int32_t)((int32_t)16))))));
		ByteU5BU5D_t4116647657* L_23 = ((BaseLuminanceSource_t3215128144 *)__this)->get_luminances_2();
		int32_t L_24 = V_1;
		uint8_t L_25 = V_6;
		uint8_t L_26 = V_2;
		uint8_t L_27 = V_2;
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (uint8_t)(((int32_t)((uint8_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_25, (int32_t)L_26))>>(int32_t)8)), (int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)255), (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)255), (int32_t)L_27))))>>(int32_t)8))))))));
		int32_t L_28 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
	}

IL_006a:
	{
		int32_t L_29 = V_0;
		ByteU5BU5D_t4116647657* L_30 = ___rgbRawBytes0;
		NullCheck(L_30);
		if ((((int32_t)L_29) >= ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_30)->max_length)))))))
		{
			goto IL_007b;
		}
	}
	{
		int32_t L_31 = V_1;
		ByteU5BU5D_t4116647657* L_32 = ((BaseLuminanceSource_t3215128144 *)__this)->get_luminances_2();
		NullCheck(L_32);
		if ((((int32_t)L_31) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_32)->max_length)))))))
		{
			goto IL_0006;
		}
	}

IL_007b:
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
// System.Void ZXing.ReaderException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ReaderException__ctor_m2718500500 (ReaderException_t3787909692 * __this, const RuntimeMethod* method)
{
	{
		Exception__ctor_m213470898(__this, /*hidden argument*/NULL);
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
// System.String ZXing.Result::get_Text()
extern "C" IL2CPP_METHOD_ATTR String_t* Result_get_Text_m3705300161 (Result_t940650810 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CTextU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void ZXing.Result::set_Text(System.String)
extern "C" IL2CPP_METHOD_ATTR void Result_set_Text_m1958406773 (Result_t940650810 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CTextU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Byte[] ZXing.Result::get_RawBytes()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* Result_get_RawBytes_m2892930176 (Result_t940650810 * __this, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_t4116647657* L_0 = __this->get_U3CRawBytesU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void ZXing.Result::set_RawBytes(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR void Result_set_RawBytes_m4011611957 (Result_t940650810 * __this, ByteU5BU5D_t4116647657* ___value0, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_t4116647657* L_0 = ___value0;
		__this->set_U3CRawBytesU3Ek__BackingField_1(L_0);
		return;
	}
}
// ZXing.ResultPoint[] ZXing.Result::get_ResultPoints()
extern "C" IL2CPP_METHOD_ATTR ResultPointU5BU5D_t569055209* Result_get_ResultPoints_m3228066833 (Result_t940650810 * __this, const RuntimeMethod* method)
{
	{
		ResultPointU5BU5D_t569055209* L_0 = __this->get_U3CResultPointsU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void ZXing.Result::set_ResultPoints(ZXing.ResultPoint[])
extern "C" IL2CPP_METHOD_ATTR void Result_set_ResultPoints_m77278087 (Result_t940650810 * __this, ResultPointU5BU5D_t569055209* ___value0, const RuntimeMethod* method)
{
	{
		ResultPointU5BU5D_t569055209* L_0 = ___value0;
		__this->set_U3CResultPointsU3Ek__BackingField_2(L_0);
		return;
	}
}
// ZXing.BarcodeFormat ZXing.Result::get_BarcodeFormat()
extern "C" IL2CPP_METHOD_ATTR int32_t Result_get_BarcodeFormat_m396675222 (Result_t940650810 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CBarcodeFormatU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void ZXing.Result::set_BarcodeFormat(ZXing.BarcodeFormat)
extern "C" IL2CPP_METHOD_ATTR void Result_set_BarcodeFormat_m2974682071 (Result_t940650810 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CBarcodeFormatU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Collections.Generic.IDictionary`2<ZXing.ResultMetadataType,System.Object> ZXing.Result::get_ResultMetadata()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Result_get_ResultMetadata_m1230695185 (Result_t940650810 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = __this->get_U3CResultMetadataU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void ZXing.Result::set_ResultMetadata(System.Collections.Generic.IDictionary`2<ZXing.ResultMetadataType,System.Object>)
extern "C" IL2CPP_METHOD_ATTR void Result_set_ResultMetadata_m254978922 (Result_t940650810 * __this, RuntimeObject* ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->set_U3CResultMetadataU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Void ZXing.Result::set_Timestamp(System.Int64)
extern "C" IL2CPP_METHOD_ATTR void Result_set_Timestamp_m1153465057 (Result_t940650810 * __this, int64_t ___value0, const RuntimeMethod* method)
{
	{
		int64_t L_0 = ___value0;
		__this->set_U3CTimestampU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Void ZXing.Result::.ctor(System.String,System.Byte[],ZXing.ResultPoint[],ZXing.BarcodeFormat)
extern "C" IL2CPP_METHOD_ATTR void Result__ctor_m734742369 (Result_t940650810 * __this, String_t* ___text0, ByteU5BU5D_t4116647657* ___rawBytes1, ResultPointU5BU5D_t569055209* ___resultPoints2, int32_t ___format3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Result__ctor_m734742369_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t3738529785  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		String_t* L_0 = ___text0;
		ByteU5BU5D_t4116647657* L_1 = ___rawBytes1;
		ResultPointU5BU5D_t569055209* L_2 = ___resultPoints2;
		int32_t L_3 = ___format3;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_4 = DateTime_get_Now_m1277138875(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_4;
		int64_t L_5 = DateTime_get_Ticks_m1550640881((DateTime_t3738529785 *)(&V_0), /*hidden argument*/NULL);
		Result__ctor_m2700342944(__this, L_0, L_1, L_2, L_3, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ZXing.Result::.ctor(System.String,System.Byte[],ZXing.ResultPoint[],ZXing.BarcodeFormat,System.Int64)
extern "C" IL2CPP_METHOD_ATTR void Result__ctor_m2700342944 (Result_t940650810 * __this, String_t* ___text0, ByteU5BU5D_t4116647657* ___rawBytes1, ResultPointU5BU5D_t569055209* ___resultPoints2, int32_t ___format3, int64_t ___timestamp4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Result__ctor_m2700342944_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___text0;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_1 = ___rawBytes1;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentException_t132251570 * L_2 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_2, _stringLiteral2505242827, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, Result__ctor_m2700342944_RuntimeMethod_var);
	}

IL_0017:
	{
		String_t* L_3 = ___text0;
		Result_set_Text_m1958406773(__this, L_3, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_4 = ___rawBytes1;
		Result_set_RawBytes_m4011611957(__this, L_4, /*hidden argument*/NULL);
		ResultPointU5BU5D_t569055209* L_5 = ___resultPoints2;
		Result_set_ResultPoints_m77278087(__this, L_5, /*hidden argument*/NULL);
		int32_t L_6 = ___format3;
		Result_set_BarcodeFormat_m2974682071(__this, L_6, /*hidden argument*/NULL);
		Result_set_ResultMetadata_m254978922(__this, (RuntimeObject*)NULL, /*hidden argument*/NULL);
		int64_t L_7 = ___timestamp4;
		Result_set_Timestamp_m1153465057(__this, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ZXing.Result::putMetadata(ZXing.ResultMetadataType,System.Object)
extern "C" IL2CPP_METHOD_ATTR void Result_putMetadata_m1190422464 (Result_t940650810 * __this, int32_t ___type0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Result_putMetadata_m1190422464_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = Result_get_ResultMetadata_m1230695185(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		Dictionary_2_t2380125725 * L_1 = (Dictionary_2_t2380125725 *)il2cpp_codegen_object_new(Dictionary_2_t2380125725_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m654493593(L_1, /*hidden argument*/Dictionary_2__ctor_m654493593_RuntimeMethod_var);
		Result_set_ResultMetadata_m254978922(__this, L_1, /*hidden argument*/NULL);
	}

IL_0013:
	{
		RuntimeObject* L_2 = Result_get_ResultMetadata_m1230695185(__this, /*hidden argument*/NULL);
		int32_t L_3 = ___type0;
		RuntimeObject * L_4 = ___value1;
		NullCheck(L_2);
		InterfaceActionInvoker2< int32_t, RuntimeObject * >::Invoke(5 /* System.Void System.Collections.Generic.IDictionary`2<ZXing.ResultMetadataType,System.Object>::set_Item(!0,!1) */, IDictionary_2_t843977116_il2cpp_TypeInfo_var, L_2, L_3, L_4);
		return;
	}
}
// System.Void ZXing.Result::putAllMetadata(System.Collections.Generic.IDictionary`2<ZXing.ResultMetadataType,System.Object>)
extern "C" IL2CPP_METHOD_ATTR void Result_putAllMetadata_m2385773696 (Result_t940650810 * __this, RuntimeObject* ___metadata0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Result_putAllMetadata_m2385773696_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2_t482830596  V_0;
	memset(&V_0, 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		RuntimeObject* L_0 = ___metadata0;
		if (!L_0)
		{
			goto IL_0050;
		}
	}
	{
		RuntimeObject* L_1 = Result_get_ResultMetadata_m1230695185(__this, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_2 = ___metadata0;
		Result_set_ResultMetadata_m254978922(__this, L_2, /*hidden argument*/NULL);
		return;
	}

IL_0013:
	{
		RuntimeObject* L_3 = ___metadata0;
		NullCheck(L_3);
		RuntimeObject* L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<ZXing.ResultMetadataType,System.Object>>::GetEnumerator() */, IEnumerable_1_t3757650781_il2cpp_TypeInfo_var, L_3);
		V_1 = L_4;
	}

IL_001a:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003c;
		}

IL_001c:
		{
			RuntimeObject* L_5 = V_1;
			NullCheck(L_5);
			KeyValuePair_2_t482830596  L_6 = InterfaceFuncInvoker0< KeyValuePair_2_t482830596  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<ZXing.ResultMetadataType,System.Object>>::get_Current() */, IEnumerator_1_t915401064_il2cpp_TypeInfo_var, L_5);
			V_0 = L_6;
			RuntimeObject* L_7 = Result_get_ResultMetadata_m1230695185(__this, /*hidden argument*/NULL);
			int32_t L_8 = KeyValuePair_2_get_Key_m719319599((KeyValuePair_2_t482830596 *)(&V_0), /*hidden argument*/KeyValuePair_2_get_Key_m719319599_RuntimeMethod_var);
			RuntimeObject * L_9 = KeyValuePair_2_get_Value_m2188744717((KeyValuePair_2_t482830596 *)(&V_0), /*hidden argument*/KeyValuePair_2_get_Value_m2188744717_RuntimeMethod_var);
			NullCheck(L_7);
			InterfaceActionInvoker2< int32_t, RuntimeObject * >::Invoke(5 /* System.Void System.Collections.Generic.IDictionary`2<ZXing.ResultMetadataType,System.Object>::set_Item(!0,!1) */, IDictionary_2_t843977116_il2cpp_TypeInfo_var, L_7, L_8, L_9);
		}

IL_003c:
		{
			RuntimeObject* L_10 = V_1;
			NullCheck(L_10);
			bool L_11 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_10);
			if (L_11)
			{
				goto IL_001c;
			}
		}

IL_0044:
		{
			IL2CPP_LEAVE(0x50, FINALLY_0046);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0046;
	}

FINALLY_0046:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_12 = V_1;
			if (!L_12)
			{
				goto IL_004f;
			}
		}

IL_0049:
		{
			RuntimeObject* L_13 = V_1;
			NullCheck(L_13);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_13);
		}

IL_004f:
		{
			IL2CPP_END_FINALLY(70)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(70)
	{
		IL2CPP_JUMP_TBL(0x50, IL_0050)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0050:
	{
		return;
	}
}
// System.Void ZXing.Result::addResultPoints(ZXing.ResultPoint[])
extern "C" IL2CPP_METHOD_ATTR void Result_addResultPoints_m2440015003 (Result_t940650810 * __this, ResultPointU5BU5D_t569055209* ___newPoints0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Result_addResultPoints_m2440015003_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ResultPointU5BU5D_t569055209* V_0 = NULL;
	ResultPointU5BU5D_t569055209* V_1 = NULL;
	{
		ResultPointU5BU5D_t569055209* L_0 = Result_get_ResultPoints_m3228066833(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		ResultPointU5BU5D_t569055209* L_1 = V_0;
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		ResultPointU5BU5D_t569055209* L_2 = ___newPoints0;
		Result_set_ResultPoints_m77278087(__this, L_2, /*hidden argument*/NULL);
		return;
	}

IL_0012:
	{
		ResultPointU5BU5D_t569055209* L_3 = ___newPoints0;
		if (!L_3)
		{
			goto IL_0049;
		}
	}
	{
		ResultPointU5BU5D_t569055209* L_4 = ___newPoints0;
		NullCheck(L_4);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_4)->max_length))))) <= ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		ResultPointU5BU5D_t569055209* L_5 = V_0;
		NullCheck(L_5);
		ResultPointU5BU5D_t569055209* L_6 = ___newPoints0;
		NullCheck(L_6);
		ResultPointU5BU5D_t569055209* L_7 = (ResultPointU5BU5D_t569055209*)SZArrayNew(ResultPointU5BU5D_t569055209_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_5)->max_length)))), (int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_6)->max_length)))))));
		V_1 = L_7;
		ResultPointU5BU5D_t569055209* L_8 = V_0;
		ResultPointU5BU5D_t569055209* L_9 = V_1;
		ResultPointU5BU5D_t569055209* L_10 = V_0;
		NullCheck(L_10);
		Array_Copy_m344457298(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_8, 0, (RuntimeArray *)(RuntimeArray *)L_9, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_10)->max_length)))), /*hidden argument*/NULL);
		ResultPointU5BU5D_t569055209* L_11 = ___newPoints0;
		ResultPointU5BU5D_t569055209* L_12 = V_1;
		ResultPointU5BU5D_t569055209* L_13 = V_0;
		NullCheck(L_13);
		ResultPointU5BU5D_t569055209* L_14 = ___newPoints0;
		NullCheck(L_14);
		Array_Copy_m344457298(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_11, 0, (RuntimeArray *)(RuntimeArray *)L_12, (((int32_t)((int32_t)(((RuntimeArray *)L_13)->max_length)))), (((int32_t)((int32_t)(((RuntimeArray *)L_14)->max_length)))), /*hidden argument*/NULL);
		ResultPointU5BU5D_t569055209* L_15 = V_1;
		Result_set_ResultPoints_m77278087(__this, L_15, /*hidden argument*/NULL);
	}

IL_0049:
	{
		return;
	}
}
// System.String ZXing.Result::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Result_ToString_m1592039857 (Result_t940650810 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Result_ToString_m1592039857_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = Result_get_Text_m3705300161(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0025;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_1 = Result_get_RawBytes_m2892930176(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = (((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length))));
		RuntimeObject * L_3 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m1715369213(NULL /*static, unused*/, _stringLiteral3452614645, L_3, _stringLiteral1229876613, /*hidden argument*/NULL);
		return L_4;
	}

IL_0025:
	{
		String_t* L_5 = Result_get_Text_m3705300161(__this, /*hidden argument*/NULL);
		return L_5;
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
// System.Void ZXing.ResultPoint::.ctor(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void ResultPoint__ctor_m1099496600 (ResultPoint_t1473505336 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ResultPoint__ctor_m1099496600_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		float L_2 = ___x0;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t3118986983_il2cpp_TypeInfo_var);
		ByteU5BU5D_t4116647657* L_3 = BitConverter_GetBytes_m692533364(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		__this->set_bytesX_2(L_3);
		float L_4 = ___y1;
		ByteU5BU5D_t4116647657* L_5 = BitConverter_GetBytes_m692533364(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		__this->set_bytesY_3(L_5);
		return;
	}
}
// System.Single ZXing.ResultPoint::get_X()
extern "C" IL2CPP_METHOD_ATTR float ResultPoint_get_X_m1810528020 (ResultPoint_t1473505336 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_x_0();
		return L_0;
	}
}
// System.Single ZXing.ResultPoint::get_Y()
extern "C" IL2CPP_METHOD_ATTR float ResultPoint_get_Y_m1810528021 (ResultPoint_t1473505336 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_y_1();
		return L_0;
	}
}
// System.Boolean ZXing.ResultPoint::Equals(System.Object)
extern "C" IL2CPP_METHOD_ATTR bool ResultPoint_Equals_m1652042900 (ResultPoint_t1473505336 * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ResultPoint_Equals_m1652042900_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ResultPoint_t1473505336 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___other0;
		V_0 = ((ResultPoint_t1473505336 *)IsInstClass((RuntimeObject*)L_0, ResultPoint_t1473505336_il2cpp_TypeInfo_var));
		ResultPoint_t1473505336 * L_1 = V_0;
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		return (bool)0;
	}

IL_000c:
	{
		float L_2 = __this->get_x_0();
		ResultPoint_t1473505336 * L_3 = V_0;
		NullCheck(L_3);
		float L_4 = L_3->get_x_0();
		if ((!(((float)L_2) == ((float)L_4))))
		{
			goto IL_0029;
		}
	}
	{
		float L_5 = __this->get_y_1();
		ResultPoint_t1473505336 * L_6 = V_0;
		NullCheck(L_6);
		float L_7 = L_6->get_y_1();
		return (bool)((((float)L_5) == ((float)L_7))? 1 : 0);
	}

IL_0029:
	{
		return (bool)0;
	}
}
// System.Int32 ZXing.ResultPoint::GetHashCode()
extern "C" IL2CPP_METHOD_ATTR int32_t ResultPoint_GetHashCode_m1171139719 (ResultPoint_t1473505336 * __this, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_t4116647657* L_0 = __this->get_bytesX_2();
		NullCheck(L_0);
		int32_t L_1 = 0;
		uint8_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		ByteU5BU5D_t4116647657* L_3 = __this->get_bytesX_2();
		NullCheck(L_3);
		int32_t L_4 = 1;
		uint8_t L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		ByteU5BU5D_t4116647657* L_6 = __this->get_bytesX_2();
		NullCheck(L_6);
		int32_t L_7 = 2;
		uint8_t L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		ByteU5BU5D_t4116647657* L_9 = __this->get_bytesX_2();
		NullCheck(L_9);
		int32_t L_10 = 3;
		uint8_t L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		ByteU5BU5D_t4116647657* L_12 = __this->get_bytesY_3();
		NullCheck(L_12);
		int32_t L_13 = 0;
		uint8_t L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		ByteU5BU5D_t4116647657* L_15 = __this->get_bytesY_3();
		NullCheck(L_15);
		int32_t L_16 = 1;
		uint8_t L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		ByteU5BU5D_t4116647657* L_18 = __this->get_bytesY_3();
		NullCheck(L_18);
		int32_t L_19 = 2;
		uint8_t L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		ByteU5BU5D_t4116647657* L_21 = __this->get_bytesY_3();
		NullCheck(L_21);
		int32_t L_22 = 3;
		uint8_t L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)31), (int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_2<<(int32_t)((int32_t)24))), (int32_t)((int32_t)((int32_t)L_5<<(int32_t)((int32_t)16))))), (int32_t)((int32_t)((int32_t)L_8<<(int32_t)8)))), (int32_t)L_11)))), (int32_t)((int32_t)((int32_t)L_14<<(int32_t)((int32_t)24))))), (int32_t)((int32_t)((int32_t)L_17<<(int32_t)((int32_t)16))))), (int32_t)((int32_t)((int32_t)L_20<<(int32_t)8)))), (int32_t)L_23));
	}
}
// System.String ZXing.ResultPoint::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* ResultPoint_ToString_m3877991453 (ResultPoint_t1473505336 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ResultPoint_ToString_m3877991453_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	ObjectU5BU5D_t2843939325* V_1 = NULL;
	{
		String_t* L_0 = __this->get_toString_4();
		if (L_0)
		{
			goto IL_0051;
		}
	}
	{
		StringBuilder_t * L_1 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m2367297767(L_1, ((int32_t)25), /*hidden argument*/NULL);
		V_0 = L_1;
		StringBuilder_t * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_3 = CultureInfo_get_CurrentUICulture_m959203371(NULL /*static, unused*/, /*hidden argument*/NULL);
		ObjectU5BU5D_t2843939325* L_4 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)2);
		V_1 = L_4;
		ObjectU5BU5D_t2843939325* L_5 = V_1;
		float L_6 = __this->get_x_0();
		float L_7 = L_6;
		RuntimeObject * L_8 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_8);
		ObjectU5BU5D_t2843939325* L_9 = V_1;
		float L_10 = __this->get_y_1();
		float L_11 = L_10;
		RuntimeObject * L_12 = Box(Single_t1397266774_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_12);
		ObjectU5BU5D_t2843939325* L_13 = V_1;
		NullCheck(L_2);
		StringBuilder_AppendFormat_m4227532852(L_2, L_3, _stringLiteral791040696, L_13, /*hidden argument*/NULL);
		StringBuilder_t * L_14 = V_0;
		NullCheck(L_14);
		String_t* L_15 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_14);
		__this->set_toString_4(L_15);
	}

IL_0051:
	{
		String_t* L_16 = __this->get_toString_4();
		return L_16;
	}
}
// System.Void ZXing.ResultPoint::orderBestPatterns(ZXing.ResultPoint[])
extern "C" IL2CPP_METHOD_ATTR void ResultPoint_orderBestPatterns_m462933149 (RuntimeObject * __this /* static, unused */, ResultPointU5BU5D_t569055209* ___patterns0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	ResultPoint_t1473505336 * V_3 = NULL;
	ResultPoint_t1473505336 * V_4 = NULL;
	ResultPoint_t1473505336 * V_5 = NULL;
	ResultPoint_t1473505336 * V_6 = NULL;
	{
		ResultPointU5BU5D_t569055209* L_0 = ___patterns0;
		NullCheck(L_0);
		int32_t L_1 = 0;
		ResultPoint_t1473505336 * L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		ResultPointU5BU5D_t569055209* L_3 = ___patterns0;
		NullCheck(L_3);
		int32_t L_4 = 1;
		ResultPoint_t1473505336 * L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		float L_6 = ResultPoint_distance_m402304744(NULL /*static, unused*/, L_2, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		ResultPointU5BU5D_t569055209* L_7 = ___patterns0;
		NullCheck(L_7);
		int32_t L_8 = 1;
		ResultPoint_t1473505336 * L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		ResultPointU5BU5D_t569055209* L_10 = ___patterns0;
		NullCheck(L_10);
		int32_t L_11 = 2;
		ResultPoint_t1473505336 * L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		float L_13 = ResultPoint_distance_m402304744(NULL /*static, unused*/, L_9, L_12, /*hidden argument*/NULL);
		V_1 = L_13;
		ResultPointU5BU5D_t569055209* L_14 = ___patterns0;
		NullCheck(L_14);
		int32_t L_15 = 0;
		ResultPoint_t1473505336 * L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		ResultPointU5BU5D_t569055209* L_17 = ___patterns0;
		NullCheck(L_17);
		int32_t L_18 = 2;
		ResultPoint_t1473505336 * L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		float L_20 = ResultPoint_distance_m402304744(NULL /*static, unused*/, L_16, L_19, /*hidden argument*/NULL);
		V_2 = L_20;
		float L_21 = V_1;
		float L_22 = V_0;
		if ((!(((float)L_21) >= ((float)L_22))))
		{
			goto IL_003c;
		}
	}
	{
		float L_23 = V_1;
		float L_24 = V_2;
		if ((!(((float)L_23) >= ((float)L_24))))
		{
			goto IL_003c;
		}
	}
	{
		ResultPointU5BU5D_t569055209* L_25 = ___patterns0;
		NullCheck(L_25);
		int32_t L_26 = 0;
		ResultPoint_t1473505336 * L_27 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		V_4 = L_27;
		ResultPointU5BU5D_t569055209* L_28 = ___patterns0;
		NullCheck(L_28);
		int32_t L_29 = 1;
		ResultPoint_t1473505336 * L_30 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		V_3 = L_30;
		ResultPointU5BU5D_t569055209* L_31 = ___patterns0;
		NullCheck(L_31);
		int32_t L_32 = 2;
		ResultPoint_t1473505336 * L_33 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		V_5 = L_33;
		goto IL_0062;
	}

IL_003c:
	{
		float L_34 = V_2;
		float L_35 = V_1;
		if ((!(((float)L_34) >= ((float)L_35))))
		{
			goto IL_0054;
		}
	}
	{
		float L_36 = V_2;
		float L_37 = V_0;
		if ((!(((float)L_36) >= ((float)L_37))))
		{
			goto IL_0054;
		}
	}
	{
		ResultPointU5BU5D_t569055209* L_38 = ___patterns0;
		NullCheck(L_38);
		int32_t L_39 = 1;
		ResultPoint_t1473505336 * L_40 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		V_4 = L_40;
		ResultPointU5BU5D_t569055209* L_41 = ___patterns0;
		NullCheck(L_41);
		int32_t L_42 = 0;
		ResultPoint_t1473505336 * L_43 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		V_3 = L_43;
		ResultPointU5BU5D_t569055209* L_44 = ___patterns0;
		NullCheck(L_44);
		int32_t L_45 = 2;
		ResultPoint_t1473505336 * L_46 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		V_5 = L_46;
		goto IL_0062;
	}

IL_0054:
	{
		ResultPointU5BU5D_t569055209* L_47 = ___patterns0;
		NullCheck(L_47);
		int32_t L_48 = 2;
		ResultPoint_t1473505336 * L_49 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		V_4 = L_49;
		ResultPointU5BU5D_t569055209* L_50 = ___patterns0;
		NullCheck(L_50);
		int32_t L_51 = 0;
		ResultPoint_t1473505336 * L_52 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		V_3 = L_52;
		ResultPointU5BU5D_t569055209* L_53 = ___patterns0;
		NullCheck(L_53);
		int32_t L_54 = 1;
		ResultPoint_t1473505336 * L_55 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		V_5 = L_55;
	}

IL_0062:
	{
		ResultPoint_t1473505336 * L_56 = V_3;
		ResultPoint_t1473505336 * L_57 = V_4;
		ResultPoint_t1473505336 * L_58 = V_5;
		float L_59 = ResultPoint_crossProductZ_m1444032178(NULL /*static, unused*/, L_56, L_57, L_58, /*hidden argument*/NULL);
		if ((!(((float)L_59) < ((float)(0.0f)))))
		{
			goto IL_007d;
		}
	}
	{
		ResultPoint_t1473505336 * L_60 = V_3;
		V_6 = L_60;
		ResultPoint_t1473505336 * L_61 = V_5;
		V_3 = L_61;
		ResultPoint_t1473505336 * L_62 = V_6;
		V_5 = L_62;
	}

IL_007d:
	{
		ResultPointU5BU5D_t569055209* L_63 = ___patterns0;
		ResultPoint_t1473505336 * L_64 = V_3;
		NullCheck(L_63);
		ArrayElementTypeCheck (L_63, L_64);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(0), (ResultPoint_t1473505336 *)L_64);
		ResultPointU5BU5D_t569055209* L_65 = ___patterns0;
		ResultPoint_t1473505336 * L_66 = V_4;
		NullCheck(L_65);
		ArrayElementTypeCheck (L_65, L_66);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(1), (ResultPoint_t1473505336 *)L_66);
		ResultPointU5BU5D_t569055209* L_67 = ___patterns0;
		ResultPoint_t1473505336 * L_68 = V_5;
		NullCheck(L_67);
		ArrayElementTypeCheck (L_67, L_68);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(2), (ResultPoint_t1473505336 *)L_68);
		return;
	}
}
// System.Single ZXing.ResultPoint::distance(ZXing.ResultPoint,ZXing.ResultPoint)
extern "C" IL2CPP_METHOD_ATTR float ResultPoint_distance_m402304744 (RuntimeObject * __this /* static, unused */, ResultPoint_t1473505336 * ___pattern10, ResultPoint_t1473505336 * ___pattern21, const RuntimeMethod* method)
{
	{
		ResultPoint_t1473505336 * L_0 = ___pattern10;
		NullCheck(L_0);
		float L_1 = L_0->get_x_0();
		ResultPoint_t1473505336 * L_2 = ___pattern10;
		NullCheck(L_2);
		float L_3 = L_2->get_y_1();
		ResultPoint_t1473505336 * L_4 = ___pattern21;
		NullCheck(L_4);
		float L_5 = L_4->get_x_0();
		ResultPoint_t1473505336 * L_6 = ___pattern21;
		NullCheck(L_6);
		float L_7 = L_6->get_y_1();
		float L_8 = MathUtils_distance_m2947813469(NULL /*static, unused*/, L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Single ZXing.ResultPoint::crossProductZ(ZXing.ResultPoint,ZXing.ResultPoint,ZXing.ResultPoint)
extern "C" IL2CPP_METHOD_ATTR float ResultPoint_crossProductZ_m1444032178 (RuntimeObject * __this /* static, unused */, ResultPoint_t1473505336 * ___pointA0, ResultPoint_t1473505336 * ___pointB1, ResultPoint_t1473505336 * ___pointC2, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		ResultPoint_t1473505336 * L_0 = ___pointB1;
		NullCheck(L_0);
		float L_1 = L_0->get_x_0();
		V_0 = L_1;
		ResultPoint_t1473505336 * L_2 = ___pointB1;
		NullCheck(L_2);
		float L_3 = L_2->get_y_1();
		V_1 = L_3;
		ResultPoint_t1473505336 * L_4 = ___pointC2;
		NullCheck(L_4);
		float L_5 = L_4->get_x_0();
		float L_6 = V_0;
		ResultPoint_t1473505336 * L_7 = ___pointA0;
		NullCheck(L_7);
		float L_8 = L_7->get_y_1();
		float L_9 = V_1;
		ResultPoint_t1473505336 * L_10 = ___pointC2;
		NullCheck(L_10);
		float L_11 = L_10->get_y_1();
		float L_12 = V_1;
		ResultPoint_t1473505336 * L_13 = ___pointA0;
		NullCheck(L_13);
		float L_14 = L_13->get_x_0();
		float L_15 = V_0;
		return ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_5, (float)L_6)), (float)((float)il2cpp_codegen_subtract((float)L_8, (float)L_9)))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_11, (float)L_12)), (float)((float)il2cpp_codegen_subtract((float)L_14, (float)L_15))))));
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
// System.Void ZXing.ResultPointCallback::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void ResultPointCallback__ctor_m4052332274 (ResultPointCallback_t922799438 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void ZXing.ResultPointCallback::Invoke(ZXing.ResultPoint)
extern "C" IL2CPP_METHOD_ATTR void ResultPointCallback_Invoke_m375854897 (ResultPointCallback_t922799438 * __this, ResultPoint_t1473505336 * ___point0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		ResultPointCallback_Invoke_m375854897((ResultPointCallback_t922799438 *)__this->get_prev_9(), ___point0, method);
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
				typedef void (*FunctionPointerType) (RuntimeObject *, ResultPoint_t1473505336 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___point0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, ResultPoint_t1473505336 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___point0, targetMethod);
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
						GenericInterfaceActionInvoker1< ResultPoint_t1473505336 * >::Invoke(targetMethod, targetThis, ___point0);
					else
						GenericVirtActionInvoker1< ResultPoint_t1473505336 * >::Invoke(targetMethod, targetThis, ___point0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< ResultPoint_t1473505336 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___point0);
					else
						VirtActionInvoker1< ResultPoint_t1473505336 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___point0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, ResultPoint_t1473505336 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___point0, targetMethod);
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
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___point0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___point0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___point0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___point0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (ResultPoint_t1473505336 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___point0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult ZXing.ResultPointCallback::BeginInvoke(ZXing.ResultPoint,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* ResultPointCallback_BeginInvoke_m3015835629 (ResultPointCallback_t922799438 * __this, ResultPoint_t1473505336 * ___point0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___point0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void ZXing.ResultPointCallback::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void ResultPointCallback_EndInvoke_m355912238 (ResultPointCallback_t922799438 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.String ZXing.SupportClass::ToBinaryString(System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* SupportClass_ToBinaryString_m1361511538 (RuntimeObject * __this /* static, unused */, int32_t ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportClass_ToBinaryString_m1361511538_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t3528271667* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t G_B3_0 = 0;
	CharU5BU5D_t3528271667* G_B3_1 = NULL;
	int32_t G_B2_0 = 0;
	CharU5BU5D_t3528271667* G_B2_1 = NULL;
	int32_t G_B4_0 = 0;
	int32_t G_B4_1 = 0;
	CharU5BU5D_t3528271667* G_B4_2 = NULL;
	{
		CharU5BU5D_t3528271667* L_0 = (CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		V_0 = L_0;
		V_1 = 0;
		goto IL_0024;
	}

IL_000c:
	{
		CharU5BU5D_t3528271667* L_1 = V_0;
		int32_t L_2 = V_1;
		int32_t L_3 = L_2;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1));
		int32_t L_4 = ___x0;
		G_B2_0 = L_3;
		G_B2_1 = L_1;
		if ((((int32_t)((int32_t)((int32_t)L_4&(int32_t)1))) == ((int32_t)1)))
		{
			G_B3_0 = L_3;
			G_B3_1 = L_1;
			goto IL_001c;
		}
	}
	{
		G_B4_0 = ((int32_t)48);
		G_B4_1 = G_B2_0;
		G_B4_2 = G_B2_1;
		goto IL_001e;
	}

IL_001c:
	{
		G_B4_0 = ((int32_t)49);
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
	}

IL_001e:
	{
		NullCheck(G_B4_2);
		(G_B4_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B4_1), (Il2CppChar)G_B4_0);
		int32_t L_5 = ___x0;
		___x0 = ((int32_t)((int32_t)L_5>>(int32_t)1));
	}

IL_0024:
	{
		int32_t L_6 = ___x0;
		if (L_6)
		{
			goto IL_000c;
		}
	}
	{
		CharU5BU5D_t3528271667* L_7 = V_0;
		int32_t L_8 = V_1;
		Array_Reverse_m816310962(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_7, 0, L_8, /*hidden argument*/NULL);
		CharU5BU5D_t3528271667* L_9 = V_0;
		String_t* L_10 = String_CreateString_m2818852475(NULL, L_9, /*hidden argument*/NULL);
		return L_10;
	}
}
// System.Int32 ZXing.SupportClass::bitCount(System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t SupportClass_bitCount_m962403590 (RuntimeObject * __this /* static, unused */, int32_t ___n0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_000f;
	}

IL_0004:
	{
		int32_t L_0 = ___n0;
		int32_t L_1 = ___n0;
		___n0 = ((int32_t)((int32_t)L_0&(int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1))));
		int32_t L_2 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
	}

IL_000f:
	{
		int32_t L_3 = ___n0;
		if (L_3)
		{
			goto IL_0004;
		}
	}
	{
		int32_t L_4 = V_0;
		return L_4;
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
// System.Void ZXing.WriterException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void WriterException__ctor_m3187122756 (WriterException_t375399354 * __this, const RuntimeMethod* method)
{
	{
		Exception__ctor_m213470898(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ZXing.WriterException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void WriterException__ctor_m3393739451 (WriterException_t375399354 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___message0;
		Exception__ctor_m1152696503(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ZXing.WriterException::.ctor(System.String,System.Exception)
extern "C" IL2CPP_METHOD_ATTR void WriterException__ctor_m3277792715 (WriterException_t375399354 * __this, String_t* ___message0, Exception_t * ___innerExc1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = ___innerExc1;
		Exception__ctor_m1406832249(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif

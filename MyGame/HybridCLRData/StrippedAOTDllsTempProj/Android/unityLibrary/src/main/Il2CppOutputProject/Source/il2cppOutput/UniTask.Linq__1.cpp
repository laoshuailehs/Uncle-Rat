﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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
struct InterfaceActionInvoker1Invoker;
template <typename T1>
struct InterfaceActionInvoker1Invoker<T1*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[0]);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2Invoker;
template <typename T1, typename T2>
struct InterfaceActionInvoker2Invoker<T1, T2*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[2] = { &p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[1]);
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
template <typename R>
struct InterfaceFuncInvoker0Invoker
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		R ret;
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, NULL, &ret);
		return ret;
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
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename R>
struct InvokerFuncInvoker0
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		R ret;
		method->invoker_method(methodPtr, method, obj, NULL, &ret);
		return ret;
	}
};
template <typename T1>
struct ConstrainedActionInvoker1;
template <typename T1>
struct ConstrainedActionInvoker1<T1*>
{
	static inline void Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, params, params[0]);
	}
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99;
// Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise`1<System.Nullable`1<System.Decimal>>
struct IStateMachineRunnerPromise_1_t8D57C4F4548F3BCD478D68C0B1214D4BF62AA68D;
// Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct IStateMachineRunnerPromise_1_t33359314377828B79D5AB55278350F65F2237DD9;
// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<System.Nullable`1<System.Decimal>>
struct IUniTaskAsyncEnumerable_1_t016F5F22E1CA4055B580B1F00A608FC3379E1C1C;
// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Nullable`1<System.Decimal>>
struct IUniTaskAsyncEnumerator_1_t68A43C56BC32FC3158BCFEA38925F8DF21EE77C6;
// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<Cysharp.Threading.Tasks.AsyncUnit>
struct IUniTaskAsyncEnumerator_1_t21358676B8858ABFBD647A323B3FFAB2FC05EA93;
// Cysharp.Threading.Tasks.IUniTaskSource`1<Cysharp.Threading.Tasks.AsyncUnit>
struct IUniTaskSource_1_t41EA7A95FBAE1E11C685B8E76E3A864529B3A81A;
// Cysharp.Threading.Tasks.IUniTaskSource`1<System.Boolean>
struct IUniTaskSource_1_tB6B218F9BB467453A6CBAEE053820D3B3E8F891C;
// Cysharp.Threading.Tasks.IUniTaskSource`1<System.Int32>
struct IUniTaskSource_1_t8F97352CA996D0781DB009E630AB2143DE1614D3;
// Cysharp.Threading.Tasks.IUniTaskSource`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct IUniTaskSource_1_tA27C284FF17E3AAB5B5D07A7E4DE207B56F764AB;
// System.Threading.SparselyPopulatedArrayFragment`1<System.Threading.CancellationCallbackInfo>
struct SparselyPopulatedArrayFragment_1_tB32DA8C2B7461E80CE4C271B76C103629BDFA035;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Threading.CancellationCallbackInfo
struct CancellationCallbackInfo_tC8BE558ED1E173434DD1919D574C9FAFE501E22D;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Cysharp.Threading.Tasks.Linq.EveryUpdate
struct EveryUpdate_t2661E947245C694121EECD8246C501F29E146F61;
// System.Exception
struct Exception_t;
// System.Runtime.ExceptionServices.ExceptionDispatchInfo
struct ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// Cysharp.Threading.Tasks.IPlayerLoopItem
struct IPlayerLoopItem_tB73003A682F5D754D64D74135621FC47F638F66F;
// Cysharp.Threading.Tasks.IUniTaskSource
struct IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Cysharp.Threading.Tasks.MoveNextSource
struct MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// Cysharp.Threading.Tasks.Linq.Timer
struct Timer_t263FFAEC1D68951855ECAD0BB631C1073A2DEFB5;
// Cysharp.Threading.Tasks.Linq.TimerFrame
struct TimerFrame_t6DBA1A02DCEED3F0790B5E1A256E7EB7A09C16D8;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Cysharp.Threading.Tasks.Linq.EveryUpdate/_EveryUpdate
struct _EveryUpdate_t1BDE92B21B6FC1B5BDD80BE162E182EC0AFA9310;
// Cysharp.Threading.Tasks.Linq.Timer/_Timer
struct _Timer_t02D4B03E9C868588091570453DD875CF717280FE;
// Cysharp.Threading.Tasks.Linq.TimerFrame/_TimerFrame
struct _TimerFrame_tB2FB05F5E7C41CD1D9B2EDC7381873F0595DE6C2;
// Cysharp.Threading.Tasks.Linq.EveryUpdate/_EveryUpdate/<>c
struct U3CU3Ec_t57525BDCDD10CDB8F2F080B2090B0B0288D38422;
// Cysharp.Threading.Tasks.Linq.Timer/_Timer/<>c
struct U3CU3Ec_tE019F895E3EC2750F0145C152E501C6B241F1E77;
// Cysharp.Threading.Tasks.Linq.TimerFrame/_TimerFrame/<>c
struct U3CU3Ec_t229871E1A199FD7FF8F49B81D66131E4FDC0F2A9;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CancellationTokenExtensions_tDCF32020B3569F58EFEE1EE41A992652A6F720E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CompletedTasks_t3D6A58059BB55C44DE470DE0D29C78D1817DB19B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUniTaskAsyncEnumerable_1_t016F5F22E1CA4055B580B1F00A608FC3379E1C1C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUniTaskAsyncEnumerator_1_t68A43C56BC32FC3158BCFEA38925F8DF21EE77C6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerLoopHelper_tA497C2C44D13E21B40E76B01973260BB49C9CF01_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t229871E1A199FD7FF8F49B81D66131E4FDC0F2A9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t57525BDCDD10CDB8F2F080B2090B0B0288D38422_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tE019F895E3EC2750F0145C152E501C6B241F1E77_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _EveryUpdate_t1BDE92B21B6FC1B5BDD80BE162E182EC0AFA9310_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _TimerFrame_tB2FB05F5E7C41CD1D9B2EDC7381873F0595DE6C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _Timer_t02D4B03E9C868588091570453DD875CF717280FE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15_TisU3CSumAsyncU3Ed__36_t4C034823FAA34B6492E2CBF8CACB73FCC36C1120_mE2179EA3F28B95507B9A432BC3E12119106A32F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CSumAsyncU3Ed__36_t4C034823FAA34B6492E2CBF8CACB73FCC36C1120_mE70CCBECC3D2BEBB4789FCC5F1345ABDFF7A51A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetException_m8D4C6191ACA2210A1146C534BFEA2B8377E517DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetResult_m5E9AE3F4120C95AA6163C3A9319D7A5241EA3B4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_SetStateMachine_m8D1EF422C20DEACE8A23D5E50046CF8BC3B1C3FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_mDF31F287C18310089D30F30E18DE4D15403C87AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_mBA16BFEE85735510F7F78085FFF37FEBEB6A2AC7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mD63976C410D14373D6D1D3E713C09B1E152F2166_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mC7511CCEBD1BB6FEEA7903DBB81ED7290D00DDD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSumAsyncU3Ed__36_MoveNext_mCA17D75D9E0291E49E84EEA219852162795369B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__11_0_mC0ED724BEC945D3F1A6EAC63C6660EE7D87AEF6F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__4_0_m819AE164F7F119D264F64FBF6515DD3EAA730FB2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__9_0_m5DA0C8480AA49E7740546EFA46B93AC42D7321F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTaskCompletionSourceCore_1_TrySetCanceled_mD66F5F925074EA6E22B0422A10F073A1447C7168_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cysharp.Threading.Tasks.CompletedTasks
struct CompletedTasks_t3D6A58059BB55C44DE470DE0D29C78D1817DB19B  : public RuntimeObject
{
};

// Cysharp.Threading.Tasks.Linq.EveryUpdate
struct EveryUpdate_t2661E947245C694121EECD8246C501F29E146F61  : public RuntimeObject
{
	// Cysharp.Threading.Tasks.PlayerLoopTiming Cysharp.Threading.Tasks.Linq.EveryUpdate::updateTiming
	int32_t ___updateTiming_0;
	// System.Boolean Cysharp.Threading.Tasks.Linq.EveryUpdate::cancelImmediately
	bool ___cancelImmediately_1;
};

// System.Runtime.ExceptionServices.ExceptionDispatchInfo
struct ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757  : public RuntimeObject
{
	// System.Exception System.Runtime.ExceptionServices.ExceptionDispatchInfo::m_Exception
	Exception_t* ___m_Exception_0;
	// System.Object System.Runtime.ExceptionServices.ExceptionDispatchInfo::m_stackTrace
	RuntimeObject* ___m_stackTrace_1;
};

// Cysharp.Threading.Tasks.Linq.ToArray
struct ToArray_t9931BB55F8990AEF071F22770776E09E11EB3850  : public RuntimeObject
{
};

// Cysharp.Threading.Tasks.Linq.ToDictionary
struct ToDictionary_tCCE6990526133E75A8EE7B61971F72A8626AC490  : public RuntimeObject
{
};

// Cysharp.Threading.Tasks.Linq.ToHashSet
struct ToHashSet_tD68FEA2E90C9C80F5EE080D40C2B736C99141F70  : public RuntimeObject
{
};

// Cysharp.Threading.Tasks.Linq.ToList
struct ToList_t90752F50EAB4E91997B69B0822A3BCF91B46F9C2  : public RuntimeObject
{
};

// Cysharp.Threading.Tasks.Linq.ToLookup
struct ToLookup_t58CBA9FBB8FF71B254E4343DD5226DB5C6713C19  : public RuntimeObject
{
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// Cysharp.Threading.Tasks.Linq.EveryUpdate/_EveryUpdate/<>c
struct U3CU3Ec_t57525BDCDD10CDB8F2F080B2090B0B0288D38422  : public RuntimeObject
{
};

// Cysharp.Threading.Tasks.Linq.Timer/_Timer/<>c
struct U3CU3Ec_tE019F895E3EC2750F0145C152E501C6B241F1E77  : public RuntimeObject
{
};

// Cysharp.Threading.Tasks.Linq.TimerFrame/_TimerFrame/<>c
struct U3CU3Ec_t229871E1A199FD7FF8F49B81D66131E4FDC0F2A9  : public RuntimeObject
{
};

// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
typedef Il2CppFullySharedGenericStruct AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52;

// System.Nullable`1<System.Int32>
struct Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<System.Single>
struct Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	float ___value_1;
};

// System.Nullable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>
typedef Il2CppFullySharedGenericStruct Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339;

// System.Threading.SparselyPopulatedArrayAddInfo`1<System.Threading.CancellationCallbackInfo>
struct SparselyPopulatedArrayAddInfo_1_t3C73DC53EB2CF8545348E3275C09690FFA1E5359 
{
	// System.Threading.SparselyPopulatedArrayFragment`1<T> System.Threading.SparselyPopulatedArrayAddInfo`1::_source
	SparselyPopulatedArrayFragment_1_tB32DA8C2B7461E80CE4C271B76C103629BDFA035* ____source_0;
	// System.Int32 System.Threading.SparselyPopulatedArrayAddInfo`1::_index
	int32_t ____index_1;
};

// Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.Boolean>
struct UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2 
{
	// TResult Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::result
	bool ___result_0;
	// System.Object Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::error
	RuntimeObject* ___error_1;
	// System.Int16 Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::version
	int16_t ___version_2;
	// System.Boolean Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::hasUnhandledError
	bool ___hasUnhandledError_3;
	// System.Int32 Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::completedCount
	int32_t ___completedCount_4;
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::continuation
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___continuation_5;
	// System.Object Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::continuationState
	RuntimeObject* ___continuationState_6;
};

// Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
typedef Il2CppFullySharedGenericStruct UniTaskCompletionSourceCore_1_t146409427AB3F018819917FFA1FDC70FDB5C0BBF;

// Cysharp.Threading.Tasks.UniTask`1<System.Boolean>
struct UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 
{
	// Cysharp.Threading.Tasks.IUniTaskSource`1<T> Cysharp.Threading.Tasks.UniTask`1::source
	RuntimeObject* ___source_0;
	// T Cysharp.Threading.Tasks.UniTask`1::result
	bool ___result_1;
	// System.Int16 Cysharp.Threading.Tasks.UniTask`1::token
	int16_t ___token_2;
};

// Cysharp.Threading.Tasks.UniTask`1<System.Int32>
struct UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48 
{
	// Cysharp.Threading.Tasks.IUniTaskSource`1<T> Cysharp.Threading.Tasks.UniTask`1::source
	RuntimeObject* ___source_0;
	// T Cysharp.Threading.Tasks.UniTask`1::result
	int32_t ___result_1;
	// System.Int16 Cysharp.Threading.Tasks.UniTask`1::token
	int16_t ___token_2;
};

// Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
typedef Il2CppFullySharedGenericStruct UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483;

// Cysharp.Threading.Tasks.AsyncUnit
struct AsyncUnit_t28ED8F3D14C76244CF24D9C7A627585A9EC7491A 
{
	union
	{
		struct
		{
		};
		uint8_t AsyncUnit_t28ED8F3D14C76244CF24D9C7A627585A9EC7491A__padding[1];
	};
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED 
{
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::_source
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};
// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};

// System.Decimal
struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 System.Decimal::flags
			int32_t ___flags_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___flags_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___hi_9_OffsetPadding[4];
			// System.Int32 System.Decimal::hi
			int32_t ___hi_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___hi_9_OffsetPadding_forAlignmentOnly[4];
			int32_t ___hi_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___lo_10_OffsetPadding[8];
			// System.Int32 System.Decimal::lo
			int32_t ___lo_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___lo_10_OffsetPadding_forAlignmentOnly[8];
			int32_t ___lo_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___mid_11_OffsetPadding[12];
			// System.Int32 System.Decimal::mid
			int32_t ___mid_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___mid_11_OffsetPadding_forAlignmentOnly[12];
			int32_t ___mid_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ulomidLE_12_OffsetPadding[8];
			// System.UInt64 System.Decimal::ulomidLE
			uint64_t ___ulomidLE_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ulomidLE_12_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___ulomidLE_12_forAlignmentOnly;
		};
	};
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

// Cysharp.Threading.Tasks.UniTask
struct UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 
{
	// Cysharp.Threading.Tasks.IUniTaskSource Cysharp.Threading.Tasks.UniTask::source
	RuntimeObject* ___source_0;
	// System.Int16 Cysharp.Threading.Tasks.UniTask::token
	int16_t ___token_1;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean>
struct Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 
{
	// Cysharp.Threading.Tasks.UniTask`1<T> Cysharp.Threading.Tasks.UniTask`1/Awaiter::task
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 ___task_0;
};

// Cysharp.Threading.Tasks.UniTask`1/Awaiter<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
typedef Il2CppFullySharedGenericStruct Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C;

// System.Nullable`1<System.Decimal>
struct Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___value_1;
};

// System.Nullable`1<System.TimeSpan>
struct Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___value_1;
};

// Cysharp.Threading.Tasks.UniTask`1<Cysharp.Threading.Tasks.AsyncUnit>
struct UniTask_1_tF16183324C23C2BED9F2F4151405F68DC5AD994A 
{
	// Cysharp.Threading.Tasks.IUniTaskSource`1<T> Cysharp.Threading.Tasks.UniTask`1::source
	RuntimeObject* ___source_0;
	// T Cysharp.Threading.Tasks.UniTask`1::result
	AsyncUnit_t28ED8F3D14C76244CF24D9C7A627585A9EC7491A ___result_1;
	// System.Int16 Cysharp.Threading.Tasks.UniTask`1::token
	int16_t ___token_2;
};

// System.Threading.CancellationTokenRegistration
struct CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 
{
	// System.Threading.CancellationCallbackInfo System.Threading.CancellationTokenRegistration::m_callbackInfo
	CancellationCallbackInfo_tC8BE558ED1E173434DD1919D574C9FAFE501E22D* ___m_callbackInfo_0;
	// System.Threading.SparselyPopulatedArrayAddInfo`1<System.Threading.CancellationCallbackInfo> System.Threading.CancellationTokenRegistration::m_registrationInfo
	SparselyPopulatedArrayAddInfo_1_t3C73DC53EB2CF8545348E3275C09690FFA1E5359 ___m_registrationInfo_1;
};
// Native definition for P/Invoke marshalling of System.Threading.CancellationTokenRegistration
struct CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_marshaled_pinvoke
{
	CancellationCallbackInfo_tC8BE558ED1E173434DD1919D574C9FAFE501E22D* ___m_callbackInfo_0;
	SparselyPopulatedArrayAddInfo_1_t3C73DC53EB2CF8545348E3275C09690FFA1E5359 ___m_registrationInfo_1;
};
// Native definition for COM marshalling of System.Threading.CancellationTokenRegistration
struct CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_marshaled_com
{
	CancellationCallbackInfo_tC8BE558ED1E173434DD1919D574C9FAFE501E22D* ___m_callbackInfo_0;
	SparselyPopulatedArrayAddInfo_1_t3C73DC53EB2CF8545348E3275C09690FFA1E5359 ___m_registrationInfo_1;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	intptr_t ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// Cysharp.Threading.Tasks.MoveNextSource
struct MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5  : public RuntimeObject
{
	// Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.Boolean> Cysharp.Threading.Tasks.MoveNextSource::completionSource
	UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2 ___completionSource_0;
};

// Cysharp.Threading.Tasks.Linq.TimerFrame
struct TimerFrame_t6DBA1A02DCEED3F0790B5E1A256E7EB7A09C16D8  : public RuntimeObject
{
	// Cysharp.Threading.Tasks.PlayerLoopTiming Cysharp.Threading.Tasks.Linq.TimerFrame::updateTiming
	int32_t ___updateTiming_0;
	// System.Int32 Cysharp.Threading.Tasks.Linq.TimerFrame::dueTimeFrameCount
	int32_t ___dueTimeFrameCount_1;
	// System.Nullable`1<System.Int32> Cysharp.Threading.Tasks.Linq.TimerFrame::periodFrameCount
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___periodFrameCount_2;
	// System.Boolean Cysharp.Threading.Tasks.Linq.TimerFrame::cancelImmediately
	bool ___cancelImmediately_3;
};

// Cysharp.Threading.Tasks.UniTask/Awaiter
struct Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 
{
	// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.UniTask/Awaiter::task
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 ___task_0;
};
// Native definition for P/Invoke marshalling of Cysharp.Threading.Tasks.UniTask/Awaiter
struct Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_marshaled_pinvoke
{
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 ___task_0;
};
// Native definition for COM marshalling of Cysharp.Threading.Tasks.UniTask/Awaiter
struct Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_marshaled_com
{
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 ___task_0;
};

// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Nullable`1<System.Decimal>>
struct AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285 
{
	// Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise`1<T> Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1::runnerPromise
	RuntimeObject* ___runnerPromise_0;
	// System.Exception Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1::ex
	Exception_t* ___ex_1;
	// T Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1::result
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB ___result_2;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// Cysharp.Threading.Tasks.Linq.Timer
struct Timer_t263FFAEC1D68951855ECAD0BB631C1073A2DEFB5  : public RuntimeObject
{
	// Cysharp.Threading.Tasks.PlayerLoopTiming Cysharp.Threading.Tasks.Linq.Timer::updateTiming
	int32_t ___updateTiming_0;
	// System.TimeSpan Cysharp.Threading.Tasks.Linq.Timer::dueTime
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___dueTime_1;
	// System.Nullable`1<System.TimeSpan> Cysharp.Threading.Tasks.Linq.Timer::period
	Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 ___period_2;
	// System.Boolean Cysharp.Threading.Tasks.Linq.Timer::ignoreTimeScale
	bool ___ignoreTimeScale_3;
	// System.Boolean Cysharp.Threading.Tasks.Linq.Timer::cancelImmediately
	bool ___cancelImmediately_4;
};

// Cysharp.Threading.Tasks.Linq.EveryUpdate/_EveryUpdate
struct _EveryUpdate_t1BDE92B21B6FC1B5BDD80BE162E182EC0AFA9310  : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5
{
	// Cysharp.Threading.Tasks.PlayerLoopTiming Cysharp.Threading.Tasks.Linq.EveryUpdate/_EveryUpdate::updateTiming
	int32_t ___updateTiming_1;
	// System.Threading.CancellationToken Cysharp.Threading.Tasks.Linq.EveryUpdate/_EveryUpdate::cancellationToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_2;
	// System.Threading.CancellationTokenRegistration Cysharp.Threading.Tasks.Linq.EveryUpdate/_EveryUpdate::cancellationTokenRegistration
	CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 ___cancellationTokenRegistration_3;
	// System.Boolean Cysharp.Threading.Tasks.Linq.EveryUpdate/_EveryUpdate::disposed
	bool ___disposed_4;
};

// Cysharp.Threading.Tasks.Linq.Timer/_Timer
struct _Timer_t02D4B03E9C868588091570453DD875CF717280FE  : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5
{
	// System.Single Cysharp.Threading.Tasks.Linq.Timer/_Timer::dueTime
	float ___dueTime_1;
	// System.Nullable`1<System.Single> Cysharp.Threading.Tasks.Linq.Timer/_Timer::period
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 ___period_2;
	// Cysharp.Threading.Tasks.PlayerLoopTiming Cysharp.Threading.Tasks.Linq.Timer/_Timer::updateTiming
	int32_t ___updateTiming_3;
	// System.Boolean Cysharp.Threading.Tasks.Linq.Timer/_Timer::ignoreTimeScale
	bool ___ignoreTimeScale_4;
	// System.Threading.CancellationToken Cysharp.Threading.Tasks.Linq.Timer/_Timer::cancellationToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_5;
	// System.Threading.CancellationTokenRegistration Cysharp.Threading.Tasks.Linq.Timer/_Timer::cancellationTokenRegistration
	CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 ___cancellationTokenRegistration_6;
	// System.Int32 Cysharp.Threading.Tasks.Linq.Timer/_Timer::initialFrame
	int32_t ___initialFrame_7;
	// System.Single Cysharp.Threading.Tasks.Linq.Timer/_Timer::elapsed
	float ___elapsed_8;
	// System.Boolean Cysharp.Threading.Tasks.Linq.Timer/_Timer::dueTimePhase
	bool ___dueTimePhase_9;
	// System.Boolean Cysharp.Threading.Tasks.Linq.Timer/_Timer::completed
	bool ___completed_10;
	// System.Boolean Cysharp.Threading.Tasks.Linq.Timer/_Timer::disposed
	bool ___disposed_11;
};

// Cysharp.Threading.Tasks.Linq.TimerFrame/_TimerFrame
struct _TimerFrame_tB2FB05F5E7C41CD1D9B2EDC7381873F0595DE6C2  : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5
{
	// System.Int32 Cysharp.Threading.Tasks.Linq.TimerFrame/_TimerFrame::dueTimeFrameCount
	int32_t ___dueTimeFrameCount_1;
	// System.Nullable`1<System.Int32> Cysharp.Threading.Tasks.Linq.TimerFrame/_TimerFrame::periodFrameCount
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___periodFrameCount_2;
	// System.Threading.CancellationToken Cysharp.Threading.Tasks.Linq.TimerFrame/_TimerFrame::cancellationToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_3;
	// System.Threading.CancellationTokenRegistration Cysharp.Threading.Tasks.Linq.TimerFrame/_TimerFrame::cancellationTokenRegistration
	CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 ___cancellationTokenRegistration_4;
	// System.Int32 Cysharp.Threading.Tasks.Linq.TimerFrame/_TimerFrame::initialFrame
	int32_t ___initialFrame_5;
	// System.Int32 Cysharp.Threading.Tasks.Linq.TimerFrame/_TimerFrame::currentFrame
	int32_t ___currentFrame_6;
	// System.Boolean Cysharp.Threading.Tasks.Linq.TimerFrame/_TimerFrame::dueTimePhase
	bool ___dueTimePhase_7;
	// System.Boolean Cysharp.Threading.Tasks.Linq.TimerFrame/_TimerFrame::completed
	bool ___completed_8;
	// System.Boolean Cysharp.Threading.Tasks.Linq.TimerFrame/_TimerFrame::disposed
	bool ___disposed_9;
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// Cysharp.Threading.Tasks.Linq.Sum/<SumAsync>d__36
struct U3CSumAsyncU3Ed__36_t4C034823FAA34B6492E2CBF8CACB73FCC36C1120 
{
	// System.Int32 Cysharp.Threading.Tasks.Linq.Sum/<SumAsync>d__36::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Nullable`1<System.Decimal>> Cysharp.Threading.Tasks.Linq.Sum/<SumAsync>d__36::<>t__builder
	AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285 ___U3CU3Et__builder_1;
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<System.Nullable`1<System.Decimal>> Cysharp.Threading.Tasks.Linq.Sum/<SumAsync>d__36::source
	RuntimeObject* ___source_2;
	// System.Threading.CancellationToken Cysharp.Threading.Tasks.Linq.Sum/<SumAsync>d__36::cancellationToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_3;
	// System.Nullable`1<System.Decimal> Cysharp.Threading.Tasks.Linq.Sum/<SumAsync>d__36::<sum>5__2
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB ___U3CsumU3E5__2_4;
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Nullable`1<System.Decimal>> Cysharp.Threading.Tasks.Linq.Sum/<SumAsync>d__36::<e>5__3
	RuntimeObject* ___U3CeU3E5__3_5;
	// System.Object Cysharp.Threading.Tasks.Linq.Sum/<SumAsync>d__36::<>7__wrap3
	RuntimeObject* ___U3CU3E7__wrap3_6;
	// System.Int32 Cysharp.Threading.Tasks.Linq.Sum/<SumAsync>d__36::<>7__wrap4
	int32_t ___U3CU3E7__wrap4_7;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean> Cysharp.Threading.Tasks.Linq.Sum/<SumAsync>d__36::<>u__1
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__1_8;
	// Cysharp.Threading.Tasks.UniTask/Awaiter Cysharp.Threading.Tasks.Linq.Sum/<SumAsync>d__36::<>u__2
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__2_9;
};

// Cysharp.Threading.Tasks.CompletedTasks
struct CompletedTasks_t3D6A58059BB55C44DE470DE0D29C78D1817DB19B_StaticFields
{
	// Cysharp.Threading.Tasks.UniTask`1<Cysharp.Threading.Tasks.AsyncUnit> Cysharp.Threading.Tasks.CompletedTasks::AsyncUnit
	UniTask_1_tF16183324C23C2BED9F2F4151405F68DC5AD994A ___AsyncUnit_0;
	// Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.CompletedTasks::True
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 ___True_1;
	// Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.CompletedTasks::False
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 ___False_2;
	// Cysharp.Threading.Tasks.UniTask`1<System.Int32> Cysharp.Threading.Tasks.CompletedTasks::Zero
	UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48 ___Zero_3;
	// Cysharp.Threading.Tasks.UniTask`1<System.Int32> Cysharp.Threading.Tasks.CompletedTasks::MinusOne
	UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48 ___MinusOne_4;
	// Cysharp.Threading.Tasks.UniTask`1<System.Int32> Cysharp.Threading.Tasks.CompletedTasks::One
	UniTask_1_t0E622BA64CCA8AEC241A4A21713E84028FD0BF48 ___One_5;
};

// Cysharp.Threading.Tasks.CompletedTasks

// Cysharp.Threading.Tasks.Linq.EveryUpdate

// Cysharp.Threading.Tasks.Linq.EveryUpdate

// System.Runtime.ExceptionServices.ExceptionDispatchInfo

// System.Runtime.ExceptionServices.ExceptionDispatchInfo

// Cysharp.Threading.Tasks.Linq.ToArray

// Cysharp.Threading.Tasks.Linq.ToArray

// Cysharp.Threading.Tasks.Linq.ToDictionary

// Cysharp.Threading.Tasks.Linq.ToDictionary

// Cysharp.Threading.Tasks.Linq.ToHashSet

// Cysharp.Threading.Tasks.Linq.ToHashSet

// Cysharp.Threading.Tasks.Linq.ToList

// Cysharp.Threading.Tasks.Linq.ToList

// Cysharp.Threading.Tasks.Linq.ToLookup

// Cysharp.Threading.Tasks.Linq.ToLookup

// Cysharp.Threading.Tasks.Linq.EveryUpdate/_EveryUpdate/<>c
struct U3CU3Ec_t57525BDCDD10CDB8F2F080B2090B0B0288D38422_StaticFields
{
	// Cysharp.Threading.Tasks.Linq.EveryUpdate/_EveryUpdate/<>c Cysharp.Threading.Tasks.Linq.EveryUpdate/_EveryUpdate/<>c::<>9
	U3CU3Ec_t57525BDCDD10CDB8F2F080B2090B0B0288D38422* ___U3CU3E9_0;
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.Linq.EveryUpdate/_EveryUpdate/<>c::<>9__4_0
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___U3CU3E9__4_0_1;
};

// Cysharp.Threading.Tasks.Linq.EveryUpdate/_EveryUpdate/<>c

// Cysharp.Threading.Tasks.Linq.Timer/_Timer/<>c
struct U3CU3Ec_tE019F895E3EC2750F0145C152E501C6B241F1E77_StaticFields
{
	// Cysharp.Threading.Tasks.Linq.Timer/_Timer/<>c Cysharp.Threading.Tasks.Linq.Timer/_Timer/<>c::<>9
	U3CU3Ec_tE019F895E3EC2750F0145C152E501C6B241F1E77* ___U3CU3E9_0;
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.Linq.Timer/_Timer/<>c::<>9__11_0
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___U3CU3E9__11_0_1;
};

// Cysharp.Threading.Tasks.Linq.Timer/_Timer/<>c

// Cysharp.Threading.Tasks.Linq.TimerFrame/_TimerFrame/<>c
struct U3CU3Ec_t229871E1A199FD7FF8F49B81D66131E4FDC0F2A9_StaticFields
{
	// Cysharp.Threading.Tasks.Linq.TimerFrame/_TimerFrame/<>c Cysharp.Threading.Tasks.Linq.TimerFrame/_TimerFrame/<>c::<>9
	U3CU3Ec_t229871E1A199FD7FF8F49B81D66131E4FDC0F2A9* ___U3CU3E9_0;
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.Linq.TimerFrame/_TimerFrame/<>c::<>9__9_0
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___U3CU3E9__9_0_1;
};

// Cysharp.Threading.Tasks.Linq.TimerFrame/_TimerFrame/<>c

// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Nullable`1<System.Int32>

// System.Nullable`1<System.Int32>

// System.Nullable`1<System.Single>

// System.Nullable`1<System.Single>

// System.Nullable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>

// System.Nullable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>

// Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.Boolean>

// Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.Boolean>

// Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// Cysharp.Threading.Tasks.UniTask`1<System.Boolean>

// Cysharp.Threading.Tasks.UniTask`1<System.Boolean>

// Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// Cysharp.Threading.Tasks.AsyncUnit
struct AsyncUnit_t28ED8F3D14C76244CF24D9C7A627585A9EC7491A_StaticFields
{
	// Cysharp.Threading.Tasks.AsyncUnit Cysharp.Threading.Tasks.AsyncUnit::Default
	AsyncUnit_t28ED8F3D14C76244CF24D9C7A627585A9EC7491A ___Default_0;
};

// Cysharp.Threading.Tasks.AsyncUnit

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticFields
{
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_actionToActionObjShunt
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_actionToActionObjShunt_1;
};

// System.Threading.CancellationToken

// System.Decimal
struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_StaticFields
{
	// System.Decimal System.Decimal::Zero
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___Zero_3;
	// System.Decimal System.Decimal::One
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___One_4;
	// System.Decimal System.Decimal::MinusOne
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinusOne_5;
	// System.Decimal System.Decimal::MaxValue
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MaxValue_6;
	// System.Decimal System.Decimal::MinValue
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinValue_7;
};

// System.Decimal

// System.Double

// System.Double

// System.Int16

// System.Int16

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// System.Single

// System.Single

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
};

// System.TimeSpan

// Cysharp.Threading.Tasks.UniTask
struct UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_StaticFields
{
	// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.UniTask::CanceledUniTask
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 ___CanceledUniTask_2;
	// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.UniTask::CompletedTask
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 ___CompletedTask_3;
};

// Cysharp.Threading.Tasks.UniTask

// System.Void

// System.Void

// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean>

// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean>

// Cysharp.Threading.Tasks.UniTask`1/Awaiter<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// Cysharp.Threading.Tasks.UniTask`1/Awaiter<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Nullable`1<System.Decimal>

// System.Nullable`1<System.Decimal>

// System.Nullable`1<System.TimeSpan>

// System.Nullable`1<System.TimeSpan>

// System.Threading.CancellationTokenRegistration

// System.Threading.CancellationTokenRegistration

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// Cysharp.Threading.Tasks.MoveNextSource

// Cysharp.Threading.Tasks.MoveNextSource

// Cysharp.Threading.Tasks.Linq.TimerFrame

// Cysharp.Threading.Tasks.Linq.TimerFrame

// Cysharp.Threading.Tasks.UniTask/Awaiter

// Cysharp.Threading.Tasks.UniTask/Awaiter

// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Nullable`1<System.Decimal>>

// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Nullable`1<System.Decimal>>

// Cysharp.Threading.Tasks.Linq.Timer

// Cysharp.Threading.Tasks.Linq.Timer

// Cysharp.Threading.Tasks.Linq.EveryUpdate/_EveryUpdate

// Cysharp.Threading.Tasks.Linq.EveryUpdate/_EveryUpdate

// Cysharp.Threading.Tasks.Linq.Timer/_Timer

// Cysharp.Threading.Tasks.Linq.Timer/_Timer

// Cysharp.Threading.Tasks.Linq.TimerFrame/_TimerFrame

// Cysharp.Threading.Tasks.Linq.TimerFrame/_TimerFrame

// System.Action`1<System.Object>

// System.Action`1<System.Object>

// System.Action

// System.Action

// Cysharp.Threading.Tasks.Linq.Sum/<SumAsync>d__36

// Cysharp.Threading.Tasks.Linq.Sum/<SumAsync>d__36
#ifdef __clang__
#pragma clang diagnostic pop
#endif


// T System.Nullable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::GetValueOrDefault()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Nullable_1_GetValueOrDefault_mC057FBD944AF068B90EBDD0B496231A01B2A4228_gshared_inline (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m14F273FB376DF00D727434CDCD28AB4EDCC14C3C_gshared_inline (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m4257D7FF23A495D1B204F20330FBDED58248E4CC_gshared (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct ___0_value, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTask`1/Awaiter<T> Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::GetAwaiter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UniTask_1_GetAwaiter_mEC480E8F8586214E6ECD880FBFAA9C8CB1C963ED_gshared_inline (UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483* __this, Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* il2cppRetVal, const RuntimeMethod* method) ;
// System.Boolean Cysharp.Threading.Tasks.UniTask`1/Awaiter<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_IsCompleted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m22B365903CC1BE835CA1126FE3BD3E71156DDFA8_gshared_inline (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::AwaitUnsafeOnCompleted<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(TAwaiter&,TStateMachine&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mB581027AD2DAA9354D87721008929F4DDFAC471E_gshared_inline (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___0_awaiter, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___1_stateMachine, const RuntimeMethod* method) ;
// T Cysharp.Threading.Tasks.UniTask`1/Awaiter<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::GetResult()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_GetResult_mFF0CF33768E54ACB5D4D4F47A4A6FE3DB29EE6D8_gshared_inline (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::SetException(System.Exception)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetException_m1812AF0E769F5A0E532DDEF8FE0921CA78F12A7D_gshared_inline (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::SetResult(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetResult_mF7DA80E1E8E4F9D51929B6BC5DC7B7B11F889339_gshared_inline (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_result, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetStateMachine_m2BD463165D1FC793702EF46E35A4BE95F43854AE_gshared (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m685A441EC9FAC9D554B26FA83A08F4BEF96DFF0E_gshared (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniTaskCompletionSourceCore_1_Reset_m788665B21E38E2A5451D5A30194E957469083C5C_gshared (UniTaskCompletionSourceCore_1_t146409427AB3F018819917FFA1FDC70FDB5C0BBF* __this, const RuntimeMethod* method) ;
// System.Boolean Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::TrySetCanceled(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniTaskCompletionSourceCore_1_TrySetCanceled_mEA4B7341003C6B1365405F43730371BF3D935E14_gshared (UniTaskCompletionSourceCore_1_t146409427AB3F018819917FFA1FDC70FDB5C0BBF* __this, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, const RuntimeMethod* method) ;
// System.Int16 Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Version()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int16_t UniTaskCompletionSourceCore_1_get_Version_mC206FEA615DEB3676B72991ABAE79848523CAC0B_gshared_inline (UniTaskCompletionSourceCore_1_t146409427AB3F018819917FFA1FDC70FDB5C0BBF* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(Cysharp.Threading.Tasks.IUniTaskSource`1<T>,System.Int16)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UniTask_1__ctor_m608BBDBA054799FF72D4ED7758DA9BA32EBB8F22_gshared_inline (UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483* __this, RuntimeObject* ___0_source, int16_t ___1_token, const RuntimeMethod* method) ;
// System.Boolean Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::TrySetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniTaskCompletionSourceCore_1_TrySetResult_m7DA02F53706893C67B6747B3F95C9B82D0946D40_gshared (UniTaskCompletionSourceCore_1_t146409427AB3F018819917FFA1FDC70FDB5C0BBF* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_result, const RuntimeMethod* method) ;
// T System.Nullable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1_get_Value_mA083C4D9192050DC38513BDD9D364C5C68A3A675_gshared (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.UniTask`1/Awaiter<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(Cysharp.Threading.Tasks.UniTask`1<T>&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_m75F3F14568F9463778CE7429585D539E87F226F3_gshared_inline (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* __this, /*Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>&*/UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483* ___0_task, const RuntimeMethod* method) ;

// T System.Nullable`1<System.Decimal>::GetValueOrDefault()
inline Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Nullable_1_GetValueOrDefault_mDF31F287C18310089D30F30E18DE4D15403C87AF_inline (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* __this, const RuntimeMethod* method)
{
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F il2cppRetVal;
	((  void (*) (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))Nullable_1_GetValueOrDefault_mC057FBD944AF068B90EBDD0B496231A01B2A4228_gshared_inline)((Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*)__this, (Il2CppFullySharedGenericStruct*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Boolean System.Nullable`1<System.Decimal>::get_HasValue()
inline bool Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_inline (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*, const RuntimeMethod*))Nullable_1_get_HasValue_m14F273FB376DF00D727434CDCD28AB4EDCC14C3C_gshared_inline)((Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*)__this, method);
}
// System.Decimal System.Decimal::op_Addition(System.Decimal,System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Decimal_op_Addition_m878AC5E15D13F205BCB6AE9747B2C0D950BD2EF7 (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___0_d1, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___1_d2, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Decimal>::.ctor(T)
inline void Nullable_1__ctor_mBA16BFEE85735510F7F78085FFF37FEBEB6A2AC7 (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* __this, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct, const RuntimeMethod*))Nullable_1__ctor_m4257D7FF23A495D1B204F20330FBDED58248E4CC_gshared)((Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*)__this, (Il2CppFullySharedGenericStruct)&___0_value, method);
}
// Cysharp.Threading.Tasks.UniTask`1/Awaiter<T> Cysharp.Threading.Tasks.UniTask`1<System.Boolean>::GetAwaiter()
inline Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* __this, const RuntimeMethod* method)
{
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 il2cppRetVal;
	((  void (*) (UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*, Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*, const RuntimeMethod*))UniTask_1_GetAwaiter_mEC480E8F8586214E6ECD880FBFAA9C8CB1C963ED_gshared_inline)((UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)__this, (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Boolean Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean>::get_IsCompleted()
inline bool Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*, const RuntimeMethod*))Awaiter_get_IsCompleted_m22B365903CC1BE835CA1126FE3BD3E71156DDFA8_gshared_inline)((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)__this, method);
}
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Nullable`1<System.Decimal>>::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean>,Cysharp.Threading.Tasks.Linq.Sum/<SumAsync>d__36>(TAwaiter&,TStateMachine&)
inline void AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15_TisU3CSumAsyncU3Ed__36_t4C034823FAA34B6492E2CBF8CACB73FCC36C1120_mE2179EA3F28B95507B9A432BC3E12119106A32F3_inline (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285* __this, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* ___0_awaiter, U3CSumAsyncU3Ed__36_t4C034823FAA34B6492E2CBF8CACB73FCC36C1120* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mB581027AD2DAA9354D87721008929F4DDFAC471E_gshared_inline)((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)__this, (Il2CppFullySharedGenericAny*)___0_awaiter, (Il2CppFullySharedGenericAny*)___1_stateMachine, method);
}
// T Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean>::GetResult()
inline bool Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, const RuntimeMethod* method)
{
	bool il2cppRetVal;
	((  void (*) (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Awaiter_GetResult_mFF0CF33768E54ACB5D4D4F47A4A6FE3DB29EE6D8_gshared_inline)((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// Cysharp.Threading.Tasks.UniTask/Awaiter Cysharp.Threading.Tasks.UniTask::GetAwaiter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline (UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* __this, const RuntimeMethod* method) ;
// System.Boolean Cysharp.Threading.Tasks.UniTask/Awaiter::get_IsCompleted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Nullable`1<System.Decimal>>::AwaitUnsafeOnCompleted<Cysharp.Threading.Tasks.UniTask/Awaiter,Cysharp.Threading.Tasks.Linq.Sum/<SumAsync>d__36>(TAwaiter&,TStateMachine&)
inline void AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CSumAsyncU3Ed__36_t4C034823FAA34B6492E2CBF8CACB73FCC36C1120_mE70CCBECC3D2BEBB4789FCC5F1345ABDFF7A51A6_inline (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285* __this, Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* ___0_awaiter, U3CSumAsyncU3Ed__36_t4C034823FAA34B6492E2CBF8CACB73FCC36C1120* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mB581027AD2DAA9354D87721008929F4DDFAC471E_gshared_inline)((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)__this, (Il2CppFullySharedGenericAny*)___0_awaiter, (Il2CppFullySharedGenericAny*)___1_stateMachine, method);
}
// System.Void Cysharp.Threading.Tasks.UniTask/Awaiter::GetResult()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* __this, const RuntimeMethod* method) ;
// System.Runtime.ExceptionServices.ExceptionDispatchInfo System.Runtime.ExceptionServices.ExceptionDispatchInfo::Capture(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803 (Exception_t* ___0_source, const RuntimeMethod* method) ;
// System.Void System.Runtime.ExceptionServices.ExceptionDispatchInfo::Throw()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330 (ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Nullable`1<System.Decimal>>::SetException(System.Exception)
inline void AsyncUniTaskMethodBuilder_1_SetException_m8D4C6191ACA2210A1146C534BFEA2B8377E517DD_inline (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, Exception_t*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetException_m1812AF0E769F5A0E532DDEF8FE0921CA78F12A7D_gshared_inline)((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)__this, ___0_exception, method);
}
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Nullable`1<System.Decimal>>::SetResult(T)
inline void AsyncUniTaskMethodBuilder_1_SetResult_m5E9AE3F4120C95AA6163C3A9319D7A5241EA3B4A_inline (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285* __this, Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB ___0_result, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetResult_mF7DA80E1E8E4F9D51929B6BC5DC7B7B11F889339_gshared_inline)((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)__this, (Il2CppFullySharedGenericAny)&___0_result, method);
}
// System.Void Cysharp.Threading.Tasks.Linq.Sum/<SumAsync>d__36::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSumAsyncU3Ed__36_MoveNext_mCA17D75D9E0291E49E84EEA219852162795369B7 (U3CSumAsyncU3Ed__36_t4C034823FAA34B6492E2CBF8CACB73FCC36C1120* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Nullable`1<System.Decimal>>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncUniTaskMethodBuilder_1_SetStateMachine_m8D1EF422C20DEACE8A23D5E50046CF8BC3B1C3FB (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*, RuntimeObject*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_SetStateMachine_m2BD463165D1FC793702EF46E35A4BE95F43854AE_gshared)((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)__this, ___0_stateMachine, method);
}
// System.Void Cysharp.Threading.Tasks.Linq.Sum/<SumAsync>d__36::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSumAsyncU3Ed__36_SetStateMachine_m5428A1C73D684C2DBBAEAD80D6FAA4B20393CCA2 (U3CSumAsyncU3Ed__36_t4C034823FAA34B6492E2CBF8CACB73FCC36C1120* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.Linq.EveryUpdate/_EveryUpdate::.ctor(Cysharp.Threading.Tasks.PlayerLoopTiming,System.Threading.CancellationToken,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _EveryUpdate__ctor_m720DB73134A52F587B5C06D4AB65C5695DB8525B (_EveryUpdate_t1BDE92B21B6FC1B5BDD80BE162E182EC0AFA9310* __this, int32_t ___0_updateTiming, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___1_cancellationToken, bool ___2_cancelImmediately, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.MoveNextSource::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveNextSource__ctor_mAD2FB060DAA5FB4AC333260F502B4FD563133640 (MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5* __this, const RuntimeMethod* method) ;
// System.Boolean System.Threading.CancellationToken::get_CanBeCanceled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CancellationToken_get_CanBeCanceled_mC3751330B171DB14B70B9BAAD90A7D098A2309EC (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4 (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m685A441EC9FAC9D554B26FA83A08F4BEF96DFF0E_gshared)((Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*)__this, ___0_object, ___1_method, method);
}
// System.Threading.CancellationTokenRegistration Cysharp.Threading.Tasks.CancellationTokenExtensions::RegisterWithoutCaptureExecutionContext(System.Threading.CancellationToken,System.Action`1<System.Object>,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 CancellationTokenExtensions_RegisterWithoutCaptureExecutionContext_mA5A09F053F6E50AD047E0DB08666E4270863AC69 (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___1_callback, RuntimeObject* ___2_state, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.PlayerLoopHelper::AddAction(Cysharp.Threading.Tasks.PlayerLoopTiming,Cysharp.Threading.Tasks.IPlayerLoopItem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerLoopHelper_AddAction_mAD5D5DA039BE42ECF032A1835BD95C318D6ED22D (int32_t ___0_timing, RuntimeObject* ___1_action, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.Boolean>::Reset()
inline void UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* __this, const RuntimeMethod* method)
{
	((  void (*) (UniTaskCompletionSourceCore_1_t146409427AB3F018819917FFA1FDC70FDB5C0BBF*, const RuntimeMethod*))UniTaskCompletionSourceCore_1_Reset_m788665B21E38E2A5451D5A30194E957469083C5C_gshared)((UniTaskCompletionSourceCore_1_t146409427AB3F018819917FFA1FDC70FDB5C0BBF*)__this, method);
}
// System.Boolean System.Threading.CancellationToken::get_IsCancellationRequested()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350 (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* __this, const RuntimeMethod* method) ;
// System.Boolean Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.Boolean>::TrySetCanceled(System.Threading.CancellationToken)
inline bool UniTaskCompletionSourceCore_1_TrySetCanceled_mD66F5F925074EA6E22B0422A10F073A1447C7168 (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* __this, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, const RuntimeMethod* method)
{
	return ((  bool (*) (UniTaskCompletionSourceCore_1_t146409427AB3F018819917FFA1FDC70FDB5C0BBF*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))UniTaskCompletionSourceCore_1_TrySetCanceled_mEA4B7341003C6B1365405F43730371BF3D935E14_gshared)((UniTaskCompletionSourceCore_1_t146409427AB3F018819917FFA1FDC70FDB5C0BBF*)__this, ___0_cancellationToken, method);
}
// System.Int16 Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.Boolean>::get_Version()
inline int16_t UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_inline (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* __this, const RuntimeMethod* method)
{
	return ((  int16_t (*) (UniTaskCompletionSourceCore_1_t146409427AB3F018819917FFA1FDC70FDB5C0BBF*, const RuntimeMethod*))UniTaskCompletionSourceCore_1_get_Version_mC206FEA615DEB3676B72991ABAE79848523CAC0B_gshared_inline)((UniTaskCompletionSourceCore_1_t146409427AB3F018819917FFA1FDC70FDB5C0BBF*)__this, method);
}
// System.Void Cysharp.Threading.Tasks.UniTask`1<System.Boolean>::.ctor(Cysharp.Threading.Tasks.IUniTaskSource`1<T>,System.Int16)
inline void UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_inline (UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949* __this, RuntimeObject* ___0_source, int16_t ___1_token, const RuntimeMethod* method)
{
	((  void (*) (UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*, RuntimeObject*, int16_t, const RuntimeMethod*))UniTask_1__ctor_m608BBDBA054799FF72D4ED7758DA9BA32EBB8F22_gshared_inline)((UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)__this, (RuntimeObject*)___0_source, ___1_token, method);
}
// System.Void System.Threading.CancellationTokenRegistration::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationTokenRegistration_Dispose_m9EAF1228573E8278DDF7A3BEB5EE0E18DA6DC0E1 (CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389* __this, const RuntimeMethod* method) ;
// System.Boolean Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.Boolean>::TrySetResult(TResult)
inline bool UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037 (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* __this, bool ___0_result, const RuntimeMethod* method)
{
	return ((  bool (*) (UniTaskCompletionSourceCore_1_t146409427AB3F018819917FFA1FDC70FDB5C0BBF*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))UniTaskCompletionSourceCore_1_TrySetResult_m7DA02F53706893C67B6747B3F95C9B82D0946D40_gshared)((UniTaskCompletionSourceCore_1_t146409427AB3F018819917FFA1FDC70FDB5C0BBF*)__this, (Il2CppFullySharedGenericAny)&___0_result, method);
}
// System.Void Cysharp.Threading.Tasks.Linq.EveryUpdate/_EveryUpdate/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m13E90642B99BFBEC8C07BDB8B7F173A969DD5662 (U3CU3Ec_t57525BDCDD10CDB8F2F080B2090B0B0288D38422* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.Linq.Timer/_Timer::.ctor(System.TimeSpan,System.Nullable`1<System.TimeSpan>,Cysharp.Threading.Tasks.PlayerLoopTiming,System.Boolean,System.Threading.CancellationToken,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Timer__ctor_m0D814AB06478A51B470E2C4A08C3C43F410EE2A2 (_Timer_t02D4B03E9C868588091570453DD875CF717280FE* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___0_dueTime, Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 ___1_period, int32_t ___2_updateTiming, bool ___3_ignoreTimeScale, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___4_cancellationToken, bool ___5_cancelImmediately, const RuntimeMethod* method) ;
// System.Double System.TimeSpan::get_TotalSeconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimeSpan_get_TotalSeconds_mED686E7CECE6A76A7DC38518698B9199DB8CDEA8 (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.TimeSpan>::get_HasValue()
inline bool Nullable_1_get_HasValue_mD63976C410D14373D6D1D3E713C09B1E152F2166_inline (Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*, const RuntimeMethod*))Nullable_1_get_HasValue_m14F273FB376DF00D727434CDCD28AB4EDCC14C3C_gshared_inline)((Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*)__this, method);
}
// T System.Nullable`1<System.TimeSpan>::get_Value()
inline TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A Nullable_1_get_Value_mC7511CCEBD1BB6FEEA7903DBB81ED7290D00DDD3 (Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272* __this, const RuntimeMethod* method)
{
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A il2cppRetVal;
	((  void (*) (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))Nullable_1_get_Value_mA083C4D9192050DC38513BDD9D364C5C68A3A675_gshared)((Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*)__this, (Il2CppFullySharedGenericStruct*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void System.Nullable`1<System.Single>::.ctor(T)
inline void Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420 (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, float ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct, const RuntimeMethod*))Nullable_1__ctor_m4257D7FF23A495D1B204F20330FBDED58248E4CC_gshared)((Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*)__this, (Il2CppFullySharedGenericStruct)&___0_value, method);
}
// System.Boolean System.Nullable`1<System.Single>::get_HasValue()
inline bool Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*, const RuntimeMethod*))Nullable_1_get_HasValue_m14F273FB376DF00D727434CDCD28AB4EDCC14C3C_gshared_inline)((Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*)__this, method);
}
// T System.Nullable`1<System.Single>::GetValueOrDefault()
inline float Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_inline (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* __this, const RuntimeMethod* method)
{
	float il2cppRetVal;
	((  void (*) (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))Nullable_1_GetValueOrDefault_mC057FBD944AF068B90EBDD0B496231A01B2A4228_gshared_inline)((Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*)__this, (Il2CppFullySharedGenericStruct*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Boolean Cysharp.Threading.Tasks.PlayerLoopHelper::get_IsMainThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerLoopHelper_get_IsMainThread_mC32C7D62B20488CD0BA2F337EBFEC8128086DD5A (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Time::get_frameCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Time_get_frameCount_m4A42E558A71301A216BDC49EC402D62F19C79667 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_unscaledDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_unscaledDeltaTime_mF057EECA857E5C0F90A3F910D26D3EE59F27C4B5 (const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.Linq.Timer/_Timer/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m159C954281DAB83E3033E723DFB83AB2CDAAEFF5 (U3CU3Ec_tE019F895E3EC2750F0145C152E501C6B241F1E77* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.Linq.TimerFrame/_TimerFrame::.ctor(System.Int32,System.Nullable`1<System.Int32>,Cysharp.Threading.Tasks.PlayerLoopTiming,System.Threading.CancellationToken,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TimerFrame__ctor_m56E526C2B3D6AD15D8B12D43863B83511ED2B16E (_TimerFrame_tB2FB05F5E7C41CD1D9B2EDC7381873F0595DE6C2* __this, int32_t ___0_dueTimeFrameCount, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___1_periodFrameCount, int32_t ___2_updateTiming, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___3_cancellationToken, bool ___4_cancelImmediately, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
inline bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*, const RuntimeMethod*))Nullable_1_get_HasValue_m14F273FB376DF00D727434CDCD28AB4EDCC14C3C_gshared_inline)((Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*)__this, method);
}
// T System.Nullable`1<System.Int32>::GetValueOrDefault()
inline int32_t Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method)
{
	int32_t il2cppRetVal;
	((  void (*) (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))Nullable_1_GetValueOrDefault_mC057FBD944AF068B90EBDD0B496231A01B2A4228_gshared_inline)((Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*)__this, (Il2CppFullySharedGenericStruct*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void System.Nullable`1<System.Int32>::.ctor(T)
inline void Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703 (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct, const RuntimeMethod*))Nullable_1__ctor_m4257D7FF23A495D1B204F20330FBDED58248E4CC_gshared)((Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*)__this, (Il2CppFullySharedGenericStruct)&___0_value, method);
}
// System.Void Cysharp.Threading.Tasks.Linq.TimerFrame/_TimerFrame/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m95708785FC0AC7C3BBF8520A74DEA5A6B825BB7F (U3CU3Ec_t229871E1A199FD7FF8F49B81D66131E4FDC0F2A9* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.UniTask/Awaiter::.ctor(Cysharp.Threading.Tasks.UniTask&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_m4154A3A6D62BB1657D17A8106633CD9E1CE51F04_inline (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* __this, UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* ___0_task, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.UniTask::get_Status()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_get_Status_mA15B0F13DE3CE36730357CF50F65AE99ADF564DA_inline (UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* __this, const RuntimeMethod* method) ;
// System.Boolean Cysharp.Threading.Tasks.UniTaskStatusExtensions::IsCompleted(Cysharp.Threading.Tasks.UniTaskStatus)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UniTaskStatusExtensions_IsCompleted_mF43C41C9CEB640E381D1F7A8B40142843AED87AE_inline (int32_t ___0_status, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.UniTask`1/Awaiter<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(Cysharp.Threading.Tasks.UniTask`1<T>&)
inline void Awaiter__ctor_m75F3F14568F9463778CE7429585D539E87F226F3_inline (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* __this, /*Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>&*/UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483* ___0_task, const RuntimeMethod* method)
{
	((  void (*) (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*, /*Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>&*/UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*, const RuntimeMethod*))Awaiter__ctor_m75F3F14568F9463778CE7429585D539E87F226F3_gshared_inline)((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)__this, ___0_task, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Cysharp.Threading.Tasks.Linq.Sum/<SumAsync>d__36::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSumAsyncU3Ed__36_MoveNext_mCA17D75D9E0291E49E84EEA219852162795369B7 (U3CSumAsyncU3Ed__36_t4C034823FAA34B6492E2CBF8CACB73FCC36C1120* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15_TisU3CSumAsyncU3Ed__36_t4C034823FAA34B6492E2CBF8CACB73FCC36C1120_mE2179EA3F28B95507B9A432BC3E12119106A32F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CSumAsyncU3Ed__36_t4C034823FAA34B6492E2CBF8CACB73FCC36C1120_mE70CCBECC3D2BEBB4789FCC5F1345ABDFF7A51A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetResult_m5E9AE3F4120C95AA6163C3A9319D7A5241EA3B4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncEnumerable_1_t016F5F22E1CA4055B580B1F00A608FC3379E1C1C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncEnumerator_1_t68A43C56BC32FC3158BCFEA38925F8DF21EE77C6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_mDF31F287C18310089D30F30E18DE4D15403C87AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mBA16BFEE85735510F7F78085FFF37FEBEB6A2AC7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB V_1;
	memset((&V_1), 0, sizeof(V_1));
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB V_2;
	memset((&V_2), 0, sizeof(V_2));
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F V_3;
	memset((&V_3), 0, sizeof(V_3));
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB V_4;
	memset((&V_4), 0, sizeof(V_4));
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 V_5;
	memset((&V_5), 0, sizeof(V_5));
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_6;
	memset((&V_6), 0, sizeof(V_6));
	RuntimeObject* V_7 = NULL;
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 V_8;
	memset((&V_8), 0, sizeof(V_8));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_9;
	memset((&V_9), 0, sizeof(V_9));
	Exception_t* V_10 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	U3CSumAsyncU3Ed__36_t4C034823FAA34B6492E2CBF8CACB73FCC36C1120* G_B9_0 = NULL;
	U3CSumAsyncU3Ed__36_t4C034823FAA34B6492E2CBF8CACB73FCC36C1120* G_B8_0 = NULL;
	Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB G_B10_0;
	memset((&G_B10_0), 0, sizeof(G_B10_0));
	U3CSumAsyncU3Ed__36_t4C034823FAA34B6492E2CBF8CACB73FCC36C1120* G_B10_1 = NULL;
	Exception_t* G_B25_0 = NULL;
	Exception_t* G_B24_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0042_1;
			}
		}
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_0159_1;
			}
		}
		{
			// Decimal? sum = default;
			Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB* L_3 = (Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB*)(&__this->___U3CsumU3E5__2_4);
			il2cpp_codegen_initobj(L_3, sizeof(Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB));
			// var e = source.GetAsyncEnumerator(cancellationToken);
			RuntimeObject* L_4 = __this->___source_2;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_5 = __this->___cancellationToken_3;
			NullCheck(L_4);
			RuntimeObject* L_6;
			L_6 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0 /* Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<T> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<System.Nullable`1<System.Decimal>>::GetAsyncEnumerator(System.Threading.CancellationToken) */, IUniTaskAsyncEnumerable_1_t016F5F22E1CA4055B580B1F00A608FC3379E1C1C_il2cpp_TypeInfo_var, L_4, L_5);
			__this->___U3CeU3E5__3_5 = L_6;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3_5), (void*)L_6);
			__this->___U3CU3E7__wrap3_6 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap3_6), (void*)NULL);
			__this->___U3CU3E7__wrap4_7 = 0;
		}

IL_0042_1:
		{
		}
		try
		{// begin try (depth: 2)
			{
				int32_t L_7 = V_0;
				if (!L_7)
				{
					goto IL_00d7_2;
				}
			}
			{
				goto IL_0094_2;
			}

IL_004b_2:
			{
				// sum += e.Current.GetValueOrDefault();
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_8 = __this->___U3CsumU3E5__2_4;
				V_2 = L_8;
				RuntimeObject* L_9 = __this->___U3CeU3E5__3_5;
				NullCheck(L_9);
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_10;
				L_10 = InterfaceFuncInvoker0< Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB >::Invoke(0 /* T Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Nullable`1<System.Decimal>>::get_Current() */, IUniTaskAsyncEnumerator_1_t68A43C56BC32FC3158BCFEA38925F8DF21EE77C6_il2cpp_TypeInfo_var, L_9);
				V_4 = L_10;
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_11;
				L_11 = Nullable_1_GetValueOrDefault_mDF31F287C18310089D30F30E18DE4D15403C87AF_inline((&V_4), Nullable_1_GetValueOrDefault_mDF31F287C18310089D30F30E18DE4D15403C87AF_RuntimeMethod_var);
				V_3 = L_11;
				bool L_12;
				L_12 = Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_inline((&V_2), Nullable_1_get_HasValue_mCE98B1978B9A4A7BB496C8E4F2A081EE0ADB0D62_RuntimeMethod_var);
				G_B8_0 = __this;
				if (L_12)
				{
					G_B9_0 = __this;
					goto IL_007d_2;
				}
			}
			{
				il2cpp_codegen_initobj((&V_4), sizeof(Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB));
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_13 = V_4;
				G_B10_0 = L_13;
				G_B10_1 = G_B8_0;
				goto IL_008f_2;
			}

IL_007d_2:
			{
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_14;
				L_14 = Nullable_1_GetValueOrDefault_mDF31F287C18310089D30F30E18DE4D15403C87AF_inline((&V_2), Nullable_1_GetValueOrDefault_mDF31F287C18310089D30F30E18DE4D15403C87AF_RuntimeMethod_var);
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_15 = V_3;
				il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
				Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_16;
				L_16 = Decimal_op_Addition_m878AC5E15D13F205BCB6AE9747B2C0D950BD2EF7(L_14, L_15, NULL);
				Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_17;
				memset((&L_17), 0, sizeof(L_17));
				Nullable_1__ctor_mBA16BFEE85735510F7F78085FFF37FEBEB6A2AC7((&L_17), L_16, /*hidden argument*/Nullable_1__ctor_mBA16BFEE85735510F7F78085FFF37FEBEB6A2AC7_RuntimeMethod_var);
				G_B10_0 = L_17;
				G_B10_1 = G_B9_0;
			}

IL_008f_2:
			{
				G_B10_1->___U3CsumU3E5__2_4 = G_B10_0;
			}

IL_0094_2:
			{
				// while (await e.MoveNextAsync())
				RuntimeObject* L_18 = __this->___U3CeU3E5__3_5;
				NullCheck(L_18);
				UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_19;
				L_19 = InterfaceFuncInvoker0< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1 /* Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Nullable`1<System.Decimal>>::MoveNextAsync() */, IUniTaskAsyncEnumerator_1_t68A43C56BC32FC3158BCFEA38925F8DF21EE77C6_il2cpp_TypeInfo_var, L_18);
				V_6 = L_19;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_20;
				L_20 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_6), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
				V_5 = L_20;
				bool L_21;
				L_21 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((&V_5), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
				if (L_21)
				{
					goto IL_00f4_2;
				}
			}
			{
				int32_t L_22 = 0;
				V_0 = L_22;
				__this->___U3CU3E1__state_0 = L_22;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_23 = V_5;
				__this->___U3CU3Eu__1_8 = L_23;
				Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__1_8))->___task_0))->___source_0), (void*)NULL);
				AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285* L_24 = (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*)(&__this->___U3CU3Et__builder_1);
				AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15_TisU3CSumAsyncU3Ed__36_t4C034823FAA34B6492E2CBF8CACB73FCC36C1120_mE2179EA3F28B95507B9A432BC3E12119106A32F3_inline(L_24, (&V_5), __this, AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15_TisU3CSumAsyncU3Ed__36_t4C034823FAA34B6492E2CBF8CACB73FCC36C1120_mE2179EA3F28B95507B9A432BC3E12119106A32F3_RuntimeMethod_var);
				goto IL_01eb;
			}

IL_00d7_2:
			{
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_25 = __this->___U3CU3Eu__1_8;
				V_5 = L_25;
				Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* L_26 = (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)(&__this->___U3CU3Eu__1_8);
				il2cpp_codegen_initobj(L_26, sizeof(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15));
				int32_t L_27 = (-1);
				V_0 = L_27;
				__this->___U3CU3E1__state_0 = L_27;
			}

IL_00f4_2:
			{
				bool L_28;
				L_28 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((&V_5), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
				if (L_28)
				{
					goto IL_004b_2;
				}
			}
			{
				goto IL_010e_1;
			}
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0102_1;
			}
			throw e;
		}

CATCH_0102_1:
		{// begin catch(System.Object)
			V_7 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));
			RuntimeObject* L_29 = V_7;
			__this->___U3CU3E7__wrap3_6 = L_29;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap3_6), (void*)L_29);
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_010e_1;
		}// end catch (depth: 2)

IL_010e_1:
		{
			// if (e != null)
			RuntimeObject* L_30 = __this->___U3CeU3E5__3_5;
			if (!L_30)
			{
				goto IL_017d_1;
			}
		}
		{
			// await e.DisposeAsync();
			RuntimeObject* L_31 = __this->___U3CeU3E5__3_5;
			NullCheck(L_31);
			UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_32;
			L_32 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0 /* Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.IUniTaskAsyncDisposable::DisposeAsync() */, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, L_31);
			V_9 = L_32;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_33;
			L_33 = UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline((&V_9), NULL);
			V_8 = L_33;
			bool L_34;
			L_34 = Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline((&V_8), NULL);
			if (L_34)
			{
				goto IL_0176_1;
			}
		}
		{
			int32_t L_35 = 1;
			V_0 = L_35;
			__this->___U3CU3E1__state_0 = L_35;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_36 = V_8;
			__this->___U3CU3Eu__2_9 = L_36;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CU3Eu__2_9))->___task_0))->___source_0), (void*)NULL);
			AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285* L_37 = (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*)(&__this->___U3CU3Et__builder_1);
			AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CSumAsyncU3Ed__36_t4C034823FAA34B6492E2CBF8CACB73FCC36C1120_mE70CCBECC3D2BEBB4789FCC5F1345ABDFF7A51A6_inline(L_37, (&V_8), __this, AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisAwaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956_TisU3CSumAsyncU3Ed__36_t4C034823FAA34B6492E2CBF8CACB73FCC36C1120_mE70CCBECC3D2BEBB4789FCC5F1345ABDFF7A51A6_RuntimeMethod_var);
			goto IL_01eb;
		}

IL_0159_1:
		{
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_38 = __this->___U3CU3Eu__2_9;
			V_8 = L_38;
			Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* L_39 = (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956*)(&__this->___U3CU3Eu__2_9);
			il2cpp_codegen_initobj(L_39, sizeof(Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956));
			int32_t L_40 = (-1);
			V_0 = L_40;
			__this->___U3CU3E1__state_0 = L_40;
		}

IL_0176_1:
		{
			Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline((&V_8), NULL);
		}

IL_017d_1:
		{
			RuntimeObject* L_41 = __this->___U3CU3E7__wrap3_6;
			V_7 = L_41;
			RuntimeObject* L_42 = V_7;
			if (!L_42)
			{
				goto IL_01a0_1;
			}
		}
		{
			RuntimeObject* L_43 = V_7;
			Exception_t* L_44 = ((Exception_t*)IsInstClass((RuntimeObject*)L_43, Exception_t_il2cpp_TypeInfo_var));
			G_B24_0 = L_44;
			if (L_44)
			{
				G_B25_0 = L_44;
				goto IL_0196_1;
			}
		}
		{
			RuntimeObject* L_45 = V_7;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_45, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSumAsyncU3Ed__36_MoveNext_mCA17D75D9E0291E49E84EEA219852162795369B7_RuntimeMethod_var)));
		}

IL_0196_1:
		{
			ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_46;
			L_46 = ExceptionDispatchInfo_Capture_mC1C1C30D83DC04B2B7813DFCB67D07CCD4909803(G_B25_0, NULL);
			NullCheck(L_46);
			ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_46, NULL);
		}

IL_01a0_1:
		{
			__this->___U3CU3E7__wrap3_6 = NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap3_6), (void*)NULL);
			// return sum;
			Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_47 = __this->___U3CsumU3E5__2_4;
			V_1 = L_47;
			goto IL_01d0;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01b0;
		}
		throw e;
	}

CATCH_01b0:
	{// begin catch(System.Exception)
		V_10 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__3_5 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3_5), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285* L_48 = (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_49 = V_10;
		AsyncUniTaskMethodBuilder_1_SetException_m8D4C6191ACA2210A1146C534BFEA2B8377E517DD_inline(L_48, L_49, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetException_m8D4C6191ACA2210A1146C534BFEA2B8377E517DD_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_01eb;
	}// end catch (depth: 1)

IL_01d0:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CeU3E5__3_5 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__3_5), (void*)(RuntimeObject*)NULL);
		AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285* L_50 = (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*)(&__this->___U3CU3Et__builder_1);
		Nullable_1_t072551AA1AA8366A46F232F8180C34AA0CFFACBB L_51 = V_1;
		AsyncUniTaskMethodBuilder_1_SetResult_m5E9AE3F4120C95AA6163C3A9319D7A5241EA3B4A_inline(L_50, L_51, AsyncUniTaskMethodBuilder_1_SetResult_m5E9AE3F4120C95AA6163C3A9319D7A5241EA3B4A_RuntimeMethod_var);
	}

IL_01eb:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSumAsyncU3Ed__36_MoveNext_mCA17D75D9E0291E49E84EEA219852162795369B7_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CSumAsyncU3Ed__36_t4C034823FAA34B6492E2CBF8CACB73FCC36C1120* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CSumAsyncU3Ed__36_t4C034823FAA34B6492E2CBF8CACB73FCC36C1120*>(__this + _offset);
	U3CSumAsyncU3Ed__36_MoveNext_mCA17D75D9E0291E49E84EEA219852162795369B7(_thisAdjusted, method);
}
// System.Void Cysharp.Threading.Tasks.Linq.Sum/<SumAsync>d__36::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSumAsyncU3Ed__36_SetStateMachine_m5428A1C73D684C2DBBAEAD80D6FAA4B20393CCA2 (U3CSumAsyncU3Ed__36_t4C034823FAA34B6492E2CBF8CACB73FCC36C1120* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_SetStateMachine_m8D1EF422C20DEACE8A23D5E50046CF8BC3B1C3FB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285* L_0 = (AsyncUniTaskMethodBuilder_1_t5FB2A8F3475A3E424FC0EA5711DE0F721D99E285*)(&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___0_stateMachine;
		AsyncUniTaskMethodBuilder_1_SetStateMachine_m8D1EF422C20DEACE8A23D5E50046CF8BC3B1C3FB(L_0, L_1, AsyncUniTaskMethodBuilder_1_SetStateMachine_m8D1EF422C20DEACE8A23D5E50046CF8BC3B1C3FB_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CSumAsyncU3Ed__36_SetStateMachine_m5428A1C73D684C2DBBAEAD80D6FAA4B20393CCA2_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CSumAsyncU3Ed__36_t4C034823FAA34B6492E2CBF8CACB73FCC36C1120* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CSumAsyncU3Ed__36_t4C034823FAA34B6492E2CBF8CACB73FCC36C1120*>(__this + _offset);
	U3CSumAsyncU3Ed__36_SetStateMachine_m5428A1C73D684C2DBBAEAD80D6FAA4B20393CCA2(_thisAdjusted, ___0_stateMachine, method);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Cysharp.Threading.Tasks.Linq.EveryUpdate::.ctor(Cysharp.Threading.Tasks.PlayerLoopTiming,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EveryUpdate__ctor_m7E0BB8B1BB6D9E6674566F5D4040DC06A6C64133 (EveryUpdate_t2661E947245C694121EECD8246C501F29E146F61* __this, int32_t ___0_updateTiming, bool ___1_cancelImmediately, const RuntimeMethod* method) 
{
	{
		// public EveryUpdate(PlayerLoopTiming updateTiming, bool cancelImmediately)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.updateTiming = updateTiming;
		int32_t L_0 = ___0_updateTiming;
		__this->___updateTiming_0 = L_0;
		// this.cancelImmediately = cancelImmediately;
		bool L_1 = ___1_cancelImmediately;
		__this->___cancelImmediately_1 = L_1;
		// }
		return;
	}
}
// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<Cysharp.Threading.Tasks.AsyncUnit> Cysharp.Threading.Tasks.Linq.EveryUpdate::GetAsyncEnumerator(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EveryUpdate_GetAsyncEnumerator_mA5FC54EDF34ED5BB326271A43A7264A2702F3840 (EveryUpdate_t2661E947245C694121EECD8246C501F29E146F61* __this, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_EveryUpdate_t1BDE92B21B6FC1B5BDD80BE162E182EC0AFA9310_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new _EveryUpdate(updateTiming, cancellationToken, cancelImmediately);
		int32_t L_0 = __this->___updateTiming_0;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___0_cancellationToken;
		bool L_2 = __this->___cancelImmediately_1;
		_EveryUpdate_t1BDE92B21B6FC1B5BDD80BE162E182EC0AFA9310* L_3 = (_EveryUpdate_t1BDE92B21B6FC1B5BDD80BE162E182EC0AFA9310*)il2cpp_codegen_object_new(_EveryUpdate_t1BDE92B21B6FC1B5BDD80BE162E182EC0AFA9310_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		_EveryUpdate__ctor_m720DB73134A52F587B5C06D4AB65C5695DB8525B(L_3, L_0, L_1, L_2, NULL);
		return L_3;
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
// System.Void Cysharp.Threading.Tasks.Linq.EveryUpdate/_EveryUpdate::.ctor(Cysharp.Threading.Tasks.PlayerLoopTiming,System.Threading.CancellationToken,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _EveryUpdate__ctor_m720DB73134A52F587B5C06D4AB65C5695DB8525B (_EveryUpdate_t1BDE92B21B6FC1B5BDD80BE162E182EC0AFA9310* __this, int32_t ___0_updateTiming, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___1_cancellationToken, bool ___2_cancelImmediately, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationTokenExtensions_tDCF32020B3569F58EFEE1EE41A992652A6F720E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerLoopHelper_tA497C2C44D13E21B40E76B01973260BB49C9CF01_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__4_0_m819AE164F7F119D264F64FBF6515DD3EAA730FB2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t57525BDCDD10CDB8F2F080B2090B0B0288D38422_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B4_0 = NULL;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED G_B4_1;
	memset((&G_B4_1), 0, sizeof(G_B4_1));
	_EveryUpdate_t1BDE92B21B6FC1B5BDD80BE162E182EC0AFA9310* G_B4_2 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B3_0 = NULL;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED G_B3_1;
	memset((&G_B3_1), 0, sizeof(G_B3_1));
	_EveryUpdate_t1BDE92B21B6FC1B5BDD80BE162E182EC0AFA9310* G_B3_2 = NULL;
	{
		// public _EveryUpdate(PlayerLoopTiming updateTiming, CancellationToken cancellationToken, bool cancelImmediately)
		MoveNextSource__ctor_mAD2FB060DAA5FB4AC333260F502B4FD563133640(__this, NULL);
		// this.updateTiming = updateTiming;
		int32_t L_0 = ___0_updateTiming;
		__this->___updateTiming_1 = L_0;
		// this.cancellationToken = cancellationToken;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___1_cancellationToken;
		__this->___cancellationToken_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___cancellationToken_2))->____source_0), (void*)NULL);
		// if (cancelImmediately && cancellationToken.CanBeCanceled)
		bool L_2 = ___2_cancelImmediately;
		if (!L_2)
		{
			goto IL_004c;
		}
	}
	{
		bool L_3;
		L_3 = CancellationToken_get_CanBeCanceled_mC3751330B171DB14B70B9BAAD90A7D098A2309EC((&___1_cancellationToken), NULL);
		if (!L_3)
		{
			goto IL_004c;
		}
	}
	{
		// cancellationTokenRegistration = cancellationToken.RegisterWithoutCaptureExecutionContext(state =>
		// {
		//     var source = (_EveryUpdate)state;
		//     source.completionSource.TrySetCanceled(source.cancellationToken);
		// }, this);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = ___1_cancellationToken;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t57525BDCDD10CDB8F2F080B2090B0B0288D38422_il2cpp_TypeInfo_var);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_5 = ((U3CU3Ec_t57525BDCDD10CDB8F2F080B2090B0B0288D38422_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t57525BDCDD10CDB8F2F080B2090B0B0288D38422_il2cpp_TypeInfo_var))->___U3CU3E9__4_0_1;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_6 = L_5;
		G_B3_0 = L_6;
		G_B3_1 = L_4;
		G_B3_2 = __this;
		if (L_6)
		{
			G_B4_0 = L_6;
			G_B4_1 = L_4;
			G_B4_2 = __this;
			goto IL_0041;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t57525BDCDD10CDB8F2F080B2090B0B0288D38422_il2cpp_TypeInfo_var);
		U3CU3Ec_t57525BDCDD10CDB8F2F080B2090B0B0288D38422* L_7 = ((U3CU3Ec_t57525BDCDD10CDB8F2F080B2090B0B0288D38422_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t57525BDCDD10CDB8F2F080B2090B0B0288D38422_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_8 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_8, L_7, (intptr_t)((void*)U3CU3Ec_U3C_ctorU3Eb__4_0_m819AE164F7F119D264F64FBF6515DD3EAA730FB2_RuntimeMethod_var), NULL);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_9 = L_8;
		((U3CU3Ec_t57525BDCDD10CDB8F2F080B2090B0B0288D38422_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t57525BDCDD10CDB8F2F080B2090B0B0288D38422_il2cpp_TypeInfo_var))->___U3CU3E9__4_0_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t57525BDCDD10CDB8F2F080B2090B0B0288D38422_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t57525BDCDD10CDB8F2F080B2090B0B0288D38422_il2cpp_TypeInfo_var))->___U3CU3E9__4_0_1), (void*)L_9);
		G_B4_0 = L_9;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_0041:
	{
		il2cpp_codegen_runtime_class_init_inline(CancellationTokenExtensions_tDCF32020B3569F58EFEE1EE41A992652A6F720E6_il2cpp_TypeInfo_var);
		CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 L_10;
		L_10 = CancellationTokenExtensions_RegisterWithoutCaptureExecutionContext_mA5A09F053F6E50AD047E0DB08666E4270863AC69(G_B4_1, G_B4_0, __this, NULL);
		NullCheck(G_B4_2);
		G_B4_2->___cancellationTokenRegistration_3 = L_10;
		Il2CppCodeGenWriteBarrier((void**)&(((&G_B4_2->___cancellationTokenRegistration_3))->___m_callbackInfo_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&G_B4_2->___cancellationTokenRegistration_3))->___m_registrationInfo_1))->____source_0), (void*)NULL);
		#endif
	}

IL_004c:
	{
		// PlayerLoopHelper.AddAction(updateTiming, this);
		int32_t L_11 = ___0_updateTiming;
		il2cpp_codegen_runtime_class_init_inline(PlayerLoopHelper_tA497C2C44D13E21B40E76B01973260BB49C9CF01_il2cpp_TypeInfo_var);
		PlayerLoopHelper_AddAction_mAD5D5DA039BE42ECF032A1835BD95C318D6ED22D(L_11, __this, NULL);
		// }
		return;
	}
}
// Cysharp.Threading.Tasks.AsyncUnit Cysharp.Threading.Tasks.Linq.EveryUpdate/_EveryUpdate::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncUnit_t28ED8F3D14C76244CF24D9C7A627585A9EC7491A _EveryUpdate_get_Current_m9530A0604459C52E0B4E1C867D6130FB58FA1472 (_EveryUpdate_t1BDE92B21B6FC1B5BDD80BE162E182EC0AFA9310* __this, const RuntimeMethod* method) 
{
	AsyncUnit_t28ED8F3D14C76244CF24D9C7A627585A9EC7491A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public AsyncUnit Current => default;
		il2cpp_codegen_initobj((&V_0), sizeof(AsyncUnit_t28ED8F3D14C76244CF24D9C7A627585A9EC7491A));
		AsyncUnit_t28ED8F3D14C76244CF24D9C7A627585A9EC7491A L_0 = V_0;
		return L_0;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.Linq.EveryUpdate/_EveryUpdate::MoveNextAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 _EveryUpdate_MoveNextAsync_m26553288670515E44E150AEFBDF39D5AF93ED0C1 (_EveryUpdate_t1BDE92B21B6FC1B5BDD80BE162E182EC0AFA9310* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompletedTasks_t3D6A58059BB55C44DE470DE0D29C78D1817DB19B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetCanceled_mD66F5F925074EA6E22B0422A10F073A1447C7168_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (disposed) return CompletedTasks.False;
		bool L_0 = __this->___disposed_4;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// if (disposed) return CompletedTasks.False;
		il2cpp_codegen_runtime_class_init_inline(CompletedTasks_t3D6A58059BB55C44DE470DE0D29C78D1817DB19B_il2cpp_TypeInfo_var);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_1 = ((CompletedTasks_t3D6A58059BB55C44DE470DE0D29C78D1817DB19B_StaticFields*)il2cpp_codegen_static_fields_for(CompletedTasks_t3D6A58059BB55C44DE470DE0D29C78D1817DB19B_il2cpp_TypeInfo_var))->___False_2;
		return L_1;
	}

IL_000e:
	{
		// completionSource.Reset();
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_2 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource_0);
		UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D(L_2, UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D_RuntimeMethod_var);
		// if (cancellationToken.IsCancellationRequested)
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = __this->___cancellationToken_2;
		V_0 = L_3;
		bool L_4;
		L_4 = CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350((&V_0), NULL);
		if (!L_4)
		{
			goto IL_003b;
		}
	}
	{
		// completionSource.TrySetCanceled(cancellationToken);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_5 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource_0);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_6 = __this->___cancellationToken_2;
		bool L_7;
		L_7 = UniTaskCompletionSourceCore_1_TrySetCanceled_mD66F5F925074EA6E22B0422A10F073A1447C7168(L_5, L_6, UniTaskCompletionSourceCore_1_TrySetCanceled_mD66F5F925074EA6E22B0422A10F073A1447C7168_RuntimeMethod_var);
	}

IL_003b:
	{
		// return new UniTask<bool>(this, completionSource.Version);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_8 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource_0);
		int16_t L_9;
		L_9 = UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_inline(L_8, UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_RuntimeMethod_var);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_10;
		memset((&L_10), 0, sizeof(L_10));
		UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_inline((&L_10), __this, L_9, /*hidden argument*/UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_RuntimeMethod_var);
		return L_10;
	}
}
// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.Linq.EveryUpdate/_EveryUpdate::DisposeAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 _EveryUpdate_DisposeAsync_m697EA4E391FC38D6CA01AE56DE13A0C7D605ADAD (_EveryUpdate_t1BDE92B21B6FC1B5BDD80BE162E182EC0AFA9310* __this, const RuntimeMethod* method) 
{
	CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 V_0;
	memset((&V_0), 0, sizeof(V_0));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (!disposed)
		bool L_0 = __this->___disposed_4;
		if (L_0)
		{
			goto IL_001d;
		}
	}
	{
		// cancellationTokenRegistration.Dispose();
		CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 L_1 = __this->___cancellationTokenRegistration_3;
		V_0 = L_1;
		CancellationTokenRegistration_Dispose_m9EAF1228573E8278DDF7A3BEB5EE0E18DA6DC0E1((&V_0), NULL);
		// disposed = true;
		__this->___disposed_4 = (bool)1;
	}

IL_001d:
	{
		// return default;
		il2cpp_codegen_initobj((&V_1), sizeof(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270));
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_2 = V_1;
		return L_2;
	}
}
// System.Boolean Cysharp.Threading.Tasks.Linq.EveryUpdate/_EveryUpdate::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _EveryUpdate_MoveNext_m901D698E90BE0DA3A2F39C587E0C1AADE5EAE061 (_EveryUpdate_t1BDE92B21B6FC1B5BDD80BE162E182EC0AFA9310* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetCanceled_mD66F5F925074EA6E22B0422A10F073A1447C7168_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (cancellationToken.IsCancellationRequested)
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_0 = __this->___cancellationToken_2;
		V_0 = L_0;
		bool L_1;
		L_1 = CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350((&V_0), NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		// completionSource.TrySetCanceled(cancellationToken);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_2 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource_0);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = __this->___cancellationToken_2;
		bool L_4;
		L_4 = UniTaskCompletionSourceCore_1_TrySetCanceled_mD66F5F925074EA6E22B0422A10F073A1447C7168(L_2, L_3, UniTaskCompletionSourceCore_1_TrySetCanceled_mD66F5F925074EA6E22B0422A10F073A1447C7168_RuntimeMethod_var);
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (disposed)
		bool L_5 = __this->___disposed_4;
		if (!L_5)
		{
			goto IL_003b;
		}
	}
	{
		// completionSource.TrySetResult(false);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_6 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource_0);
		bool L_7;
		L_7 = UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037(L_6, (bool)0, UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		// return false;
		return (bool)0;
	}

IL_003b:
	{
		// completionSource.TrySetResult(true);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_8 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource_0);
		bool L_9;
		L_9 = UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037(L_8, (bool)1, UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		// return true;
		return (bool)1;
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
// System.Void Cysharp.Threading.Tasks.Linq.EveryUpdate/_EveryUpdate/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m1853D83A8C62BC152E3C5A1B3D82BC8C03A2F513 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t57525BDCDD10CDB8F2F080B2090B0B0288D38422_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t57525BDCDD10CDB8F2F080B2090B0B0288D38422* L_0 = (U3CU3Ec_t57525BDCDD10CDB8F2F080B2090B0B0288D38422*)il2cpp_codegen_object_new(U3CU3Ec_t57525BDCDD10CDB8F2F080B2090B0B0288D38422_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m13E90642B99BFBEC8C07BDB8B7F173A969DD5662(L_0, NULL);
		((U3CU3Ec_t57525BDCDD10CDB8F2F080B2090B0B0288D38422_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t57525BDCDD10CDB8F2F080B2090B0B0288D38422_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t57525BDCDD10CDB8F2F080B2090B0B0288D38422_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t57525BDCDD10CDB8F2F080B2090B0B0288D38422_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.EveryUpdate/_EveryUpdate/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m13E90642B99BFBEC8C07BDB8B7F173A969DD5662 (U3CU3Ec_t57525BDCDD10CDB8F2F080B2090B0B0288D38422* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.EveryUpdate/_EveryUpdate/<>c::<.ctor>b__4_0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__4_0_m819AE164F7F119D264F64FBF6515DD3EAA730FB2 (U3CU3Ec_t57525BDCDD10CDB8F2F080B2090B0B0288D38422* __this, RuntimeObject* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetCanceled_mD66F5F925074EA6E22B0422A10F073A1447C7168_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_EveryUpdate_t1BDE92B21B6FC1B5BDD80BE162E182EC0AFA9310_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	_EveryUpdate_t1BDE92B21B6FC1B5BDD80BE162E182EC0AFA9310* V_0 = NULL;
	{
		// var source = (_EveryUpdate)state;
		RuntimeObject* L_0 = ___0_state;
		V_0 = ((_EveryUpdate_t1BDE92B21B6FC1B5BDD80BE162E182EC0AFA9310*)CastclassClass((RuntimeObject*)L_0, _EveryUpdate_t1BDE92B21B6FC1B5BDD80BE162E182EC0AFA9310_il2cpp_TypeInfo_var));
		// source.completionSource.TrySetCanceled(source.cancellationToken);
		_EveryUpdate_t1BDE92B21B6FC1B5BDD80BE162E182EC0AFA9310* L_1 = V_0;
		NullCheck(L_1);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_2 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_1)->___completionSource_0);
		_EveryUpdate_t1BDE92B21B6FC1B5BDD80BE162E182EC0AFA9310* L_3 = V_0;
		NullCheck(L_3);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = L_3->___cancellationToken_2;
		bool L_5;
		L_5 = UniTaskCompletionSourceCore_1_TrySetCanceled_mD66F5F925074EA6E22B0422A10F073A1447C7168(L_2, L_4, UniTaskCompletionSourceCore_1_TrySetCanceled_mD66F5F925074EA6E22B0422A10F073A1447C7168_RuntimeMethod_var);
		// }, this);
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
// System.Void Cysharp.Threading.Tasks.Linq.Timer::.ctor(System.TimeSpan,System.Nullable`1<System.TimeSpan>,Cysharp.Threading.Tasks.PlayerLoopTiming,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timer__ctor_m5ABA17C5028D1F0176E530D20DF37A60119C0D8F (Timer_t263FFAEC1D68951855ECAD0BB631C1073A2DEFB5* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___0_dueTime, Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 ___1_period, int32_t ___2_updateTiming, bool ___3_ignoreTimeScale, bool ___4_cancelImmediately, const RuntimeMethod* method) 
{
	{
		// public Timer(TimeSpan dueTime, TimeSpan? period, PlayerLoopTiming updateTiming, bool ignoreTimeScale, bool cancelImmediately)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.updateTiming = updateTiming;
		int32_t L_0 = ___2_updateTiming;
		__this->___updateTiming_0 = L_0;
		// this.dueTime = dueTime;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_1 = ___0_dueTime;
		__this->___dueTime_1 = L_1;
		// this.period = period;
		Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 L_2 = ___1_period;
		__this->___period_2 = L_2;
		// this.ignoreTimeScale = ignoreTimeScale;
		bool L_3 = ___3_ignoreTimeScale;
		__this->___ignoreTimeScale_3 = L_3;
		// this.cancelImmediately = cancelImmediately;
		bool L_4 = ___4_cancelImmediately;
		__this->___cancelImmediately_4 = L_4;
		// }
		return;
	}
}
// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<Cysharp.Threading.Tasks.AsyncUnit> Cysharp.Threading.Tasks.Linq.Timer::GetAsyncEnumerator(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Timer_GetAsyncEnumerator_mBE61A5FEDB1387353BF4E15E8DBA832BA126913D (Timer_t263FFAEC1D68951855ECAD0BB631C1073A2DEFB5* __this, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_Timer_t02D4B03E9C868588091570453DD875CF717280FE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new _Timer(dueTime, period, updateTiming, ignoreTimeScale, cancellationToken, cancelImmediately);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_0 = __this->___dueTime_1;
		Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 L_1 = __this->___period_2;
		int32_t L_2 = __this->___updateTiming_0;
		bool L_3 = __this->___ignoreTimeScale_3;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = ___0_cancellationToken;
		bool L_5 = __this->___cancelImmediately_4;
		_Timer_t02D4B03E9C868588091570453DD875CF717280FE* L_6 = (_Timer_t02D4B03E9C868588091570453DD875CF717280FE*)il2cpp_codegen_object_new(_Timer_t02D4B03E9C868588091570453DD875CF717280FE_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		_Timer__ctor_m0D814AB06478A51B470E2C4A08C3C43F410EE2A2(L_6, L_0, L_1, L_2, L_3, L_4, L_5, NULL);
		return L_6;
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
// System.Void Cysharp.Threading.Tasks.Linq.Timer/_Timer::.ctor(System.TimeSpan,System.Nullable`1<System.TimeSpan>,Cysharp.Threading.Tasks.PlayerLoopTiming,System.Boolean,System.Threading.CancellationToken,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Timer__ctor_m0D814AB06478A51B470E2C4A08C3C43F410EE2A2 (_Timer_t02D4B03E9C868588091570453DD875CF717280FE* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___0_dueTime, Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 ___1_period, int32_t ___2_updateTiming, bool ___3_ignoreTimeScale, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___4_cancellationToken, bool ___5_cancelImmediately, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationTokenExtensions_tDCF32020B3569F58EFEE1EE41A992652A6F720E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mD63976C410D14373D6D1D3E713C09B1E152F2166_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mC7511CCEBD1BB6FEEA7903DBB81ED7290D00DDD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerLoopHelper_tA497C2C44D13E21B40E76B01973260BB49C9CF01_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__11_0_mC0ED724BEC945D3F1A6EAC63C6660EE7D87AEF6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tE019F895E3EC2750F0145C152E501C6B241F1E77_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_0;
	memset((&V_0), 0, sizeof(V_0));
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	_Timer_t02D4B03E9C868588091570453DD875CF717280FE* G_B2_0 = NULL;
	_Timer_t02D4B03E9C868588091570453DD875CF717280FE* G_B1_0 = NULL;
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	_Timer_t02D4B03E9C868588091570453DD875CF717280FE* G_B3_1 = NULL;
	_Timer_t02D4B03E9C868588091570453DD875CF717280FE* G_B10_0 = NULL;
	_Timer_t02D4B03E9C868588091570453DD875CF717280FE* G_B9_0 = NULL;
	int32_t G_B11_0 = 0;
	_Timer_t02D4B03E9C868588091570453DD875CF717280FE* G_B11_1 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B15_0 = NULL;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED G_B15_1;
	memset((&G_B15_1), 0, sizeof(G_B15_1));
	_Timer_t02D4B03E9C868588091570453DD875CF717280FE* G_B15_2 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B14_0 = NULL;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED G_B14_1;
	memset((&G_B14_1), 0, sizeof(G_B14_1));
	_Timer_t02D4B03E9C868588091570453DD875CF717280FE* G_B14_2 = NULL;
	{
		// public _Timer(TimeSpan dueTime, TimeSpan? period, PlayerLoopTiming updateTiming, bool ignoreTimeScale, CancellationToken cancellationToken, bool cancelImmediately)
		MoveNextSource__ctor_mAD2FB060DAA5FB4AC333260F502B4FD563133640(__this, NULL);
		// this.dueTime = (float)dueTime.TotalSeconds;
		double L_0;
		L_0 = TimeSpan_get_TotalSeconds_mED686E7CECE6A76A7DC38518698B9199DB8CDEA8((&___0_dueTime), NULL);
		__this->___dueTime_1 = ((float)L_0);
		// this.period = (period == null) ? null : (float?)period.Value.TotalSeconds;
		bool L_1;
		L_1 = Nullable_1_get_HasValue_mD63976C410D14373D6D1D3E713C09B1E152F2166_inline((&___1_period), Nullable_1_get_HasValue_mD63976C410D14373D6D1D3E713C09B1E152F2166_RuntimeMethod_var);
		G_B1_0 = __this;
		if (!L_1)
		{
			G_B2_0 = __this;
			goto IL_0035;
		}
	}
	{
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_2;
		L_2 = Nullable_1_get_Value_mC7511CCEBD1BB6FEEA7903DBB81ED7290D00DDD3((&___1_period), Nullable_1_get_Value_mC7511CCEBD1BB6FEEA7903DBB81ED7290D00DDD3_RuntimeMethod_var);
		V_0 = L_2;
		double L_3;
		L_3 = TimeSpan_get_TotalSeconds_mED686E7CECE6A76A7DC38518698B9199DB8CDEA8((&V_0), NULL);
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420((&L_4), ((float)L_3), /*hidden argument*/Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420_RuntimeMethod_var);
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		goto IL_003e;
	}

IL_0035:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75));
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_5 = V_1;
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
	}

IL_003e:
	{
		NullCheck(G_B3_1);
		G_B3_1->___period_2 = G_B3_0;
		// if (this.dueTime <= 0) this.dueTime = 0;
		float L_6 = __this->___dueTime_1;
		if ((!(((float)L_6) <= ((float)(0.0f)))))
		{
			goto IL_005b;
		}
	}
	{
		// if (this.dueTime <= 0) this.dueTime = 0;
		__this->___dueTime_1 = (0.0f);
	}

IL_005b:
	{
		// if (this.period != null)
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* L_7 = (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*)(&__this->___period_2);
		bool L_8;
		L_8 = Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline(L_7, Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
		if (!L_8)
		{
			goto IL_0099;
		}
	}
	{
		// if (this.period <= 0) this.period = 1;
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_9 = __this->___period_2;
		V_1 = L_9;
		V_2 = (0.0f);
		float L_10;
		L_10 = Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_inline((&V_1), Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_RuntimeMethod_var);
		float L_11 = V_2;
		bool L_12;
		L_12 = Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline((&V_1), Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
		if (!((int32_t)(((((int32_t)((!(((float)L_10) <= ((float)L_11)))? 1 : 0)) == ((int32_t)0))? 1 : 0)&(int32_t)L_12)))
		{
			goto IL_0099;
		}
	}
	{
		// if (this.period <= 0) this.period = 1;
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_13;
		memset((&L_13), 0, sizeof(L_13));
		Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420((&L_13), ((float)1), /*hidden argument*/Nullable_1__ctor_mF3D65C30ACED71826A2F8078A5D10F3CC827E420_RuntimeMethod_var);
		__this->___period_2 = L_13;
	}

IL_0099:
	{
		// this.initialFrame = PlayerLoopHelper.IsMainThread ? Time.frameCount : -1;
		il2cpp_codegen_runtime_class_init_inline(PlayerLoopHelper_tA497C2C44D13E21B40E76B01973260BB49C9CF01_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = PlayerLoopHelper_get_IsMainThread_mC32C7D62B20488CD0BA2F337EBFEC8128086DD5A(NULL);
		G_B9_0 = __this;
		if (L_14)
		{
			G_B10_0 = __this;
			goto IL_00a4;
		}
	}
	{
		G_B11_0 = (-1);
		G_B11_1 = G_B9_0;
		goto IL_00a9;
	}

IL_00a4:
	{
		int32_t L_15;
		L_15 = Time_get_frameCount_m4A42E558A71301A216BDC49EC402D62F19C79667(NULL);
		G_B11_0 = L_15;
		G_B11_1 = G_B10_0;
	}

IL_00a9:
	{
		NullCheck(G_B11_1);
		G_B11_1->___initialFrame_7 = G_B11_0;
		// this.dueTimePhase = true;
		__this->___dueTimePhase_9 = (bool)1;
		// this.updateTiming = updateTiming;
		int32_t L_16 = ___2_updateTiming;
		__this->___updateTiming_3 = L_16;
		// this.ignoreTimeScale = ignoreTimeScale;
		bool L_17 = ___3_ignoreTimeScale;
		__this->___ignoreTimeScale_4 = L_17;
		// this.cancellationToken = cancellationToken;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_18 = ___4_cancellationToken;
		__this->___cancellationToken_5 = L_18;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___cancellationToken_5))->____source_0), (void*)NULL);
		// if (cancelImmediately && cancellationToken.CanBeCanceled)
		bool L_19 = ___5_cancelImmediately;
		if (!L_19)
		{
			goto IL_0106;
		}
	}
	{
		bool L_20;
		L_20 = CancellationToken_get_CanBeCanceled_mC3751330B171DB14B70B9BAAD90A7D098A2309EC((&___4_cancellationToken), NULL);
		if (!L_20)
		{
			goto IL_0106;
		}
	}
	{
		// cancellationTokenRegistration = cancellationToken.RegisterWithoutCaptureExecutionContext(state =>
		// {
		//     var source = (_Timer)state;
		//     source.completionSource.TrySetCanceled(source.cancellationToken);
		// }, this);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_21 = ___4_cancellationToken;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tE019F895E3EC2750F0145C152E501C6B241F1E77_il2cpp_TypeInfo_var);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_22 = ((U3CU3Ec_tE019F895E3EC2750F0145C152E501C6B241F1E77_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE019F895E3EC2750F0145C152E501C6B241F1E77_il2cpp_TypeInfo_var))->___U3CU3E9__11_0_1;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_23 = L_22;
		G_B14_0 = L_23;
		G_B14_1 = L_21;
		G_B14_2 = __this;
		if (L_23)
		{
			G_B15_0 = L_23;
			G_B15_1 = L_21;
			G_B15_2 = __this;
			goto IL_00fb;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tE019F895E3EC2750F0145C152E501C6B241F1E77_il2cpp_TypeInfo_var);
		U3CU3Ec_tE019F895E3EC2750F0145C152E501C6B241F1E77* L_24 = ((U3CU3Ec_tE019F895E3EC2750F0145C152E501C6B241F1E77_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE019F895E3EC2750F0145C152E501C6B241F1E77_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_25 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_25, L_24, (intptr_t)((void*)U3CU3Ec_U3C_ctorU3Eb__11_0_mC0ED724BEC945D3F1A6EAC63C6660EE7D87AEF6F_RuntimeMethod_var), NULL);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_26 = L_25;
		((U3CU3Ec_tE019F895E3EC2750F0145C152E501C6B241F1E77_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE019F895E3EC2750F0145C152E501C6B241F1E77_il2cpp_TypeInfo_var))->___U3CU3E9__11_0_1 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tE019F895E3EC2750F0145C152E501C6B241F1E77_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE019F895E3EC2750F0145C152E501C6B241F1E77_il2cpp_TypeInfo_var))->___U3CU3E9__11_0_1), (void*)L_26);
		G_B15_0 = L_26;
		G_B15_1 = G_B14_1;
		G_B15_2 = G_B14_2;
	}

IL_00fb:
	{
		il2cpp_codegen_runtime_class_init_inline(CancellationTokenExtensions_tDCF32020B3569F58EFEE1EE41A992652A6F720E6_il2cpp_TypeInfo_var);
		CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 L_27;
		L_27 = CancellationTokenExtensions_RegisterWithoutCaptureExecutionContext_mA5A09F053F6E50AD047E0DB08666E4270863AC69(G_B15_1, G_B15_0, __this, NULL);
		NullCheck(G_B15_2);
		G_B15_2->___cancellationTokenRegistration_6 = L_27;
		Il2CppCodeGenWriteBarrier((void**)&(((&G_B15_2->___cancellationTokenRegistration_6))->___m_callbackInfo_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&G_B15_2->___cancellationTokenRegistration_6))->___m_registrationInfo_1))->____source_0), (void*)NULL);
		#endif
	}

IL_0106:
	{
		// PlayerLoopHelper.AddAction(updateTiming, this);
		int32_t L_28 = ___2_updateTiming;
		il2cpp_codegen_runtime_class_init_inline(PlayerLoopHelper_tA497C2C44D13E21B40E76B01973260BB49C9CF01_il2cpp_TypeInfo_var);
		PlayerLoopHelper_AddAction_mAD5D5DA039BE42ECF032A1835BD95C318D6ED22D(L_28, __this, NULL);
		// }
		return;
	}
}
// Cysharp.Threading.Tasks.AsyncUnit Cysharp.Threading.Tasks.Linq.Timer/_Timer::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncUnit_t28ED8F3D14C76244CF24D9C7A627585A9EC7491A _Timer_get_Current_m1DFFF2DB3E1FDA56BBC2BD8973DEAA81946BA498 (_Timer_t02D4B03E9C868588091570453DD875CF717280FE* __this, const RuntimeMethod* method) 
{
	AsyncUnit_t28ED8F3D14C76244CF24D9C7A627585A9EC7491A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public AsyncUnit Current => default;
		il2cpp_codegen_initobj((&V_0), sizeof(AsyncUnit_t28ED8F3D14C76244CF24D9C7A627585A9EC7491A));
		AsyncUnit_t28ED8F3D14C76244CF24D9C7A627585A9EC7491A L_0 = V_0;
		return L_0;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.Linq.Timer/_Timer::MoveNextAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 _Timer_MoveNextAsync_m1C536CA3782940F8CDA20FE36160B2130B9DA833 (_Timer_t02D4B03E9C868588091570453DD875CF717280FE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompletedTasks_t3D6A58059BB55C44DE470DE0D29C78D1817DB19B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetCanceled_mD66F5F925074EA6E22B0422A10F073A1447C7168_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (disposed || completed) return CompletedTasks.False;
		bool L_0 = __this->___disposed_11;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_1 = __this->___completed_10;
		if (!L_1)
		{
			goto IL_0016;
		}
	}

IL_0010:
	{
		// if (disposed || completed) return CompletedTasks.False;
		il2cpp_codegen_runtime_class_init_inline(CompletedTasks_t3D6A58059BB55C44DE470DE0D29C78D1817DB19B_il2cpp_TypeInfo_var);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_2 = ((CompletedTasks_t3D6A58059BB55C44DE470DE0D29C78D1817DB19B_StaticFields*)il2cpp_codegen_static_fields_for(CompletedTasks_t3D6A58059BB55C44DE470DE0D29C78D1817DB19B_il2cpp_TypeInfo_var))->___False_2;
		return L_2;
	}

IL_0016:
	{
		// this.elapsed = 0;
		__this->___elapsed_8 = (0.0f);
		// completionSource.Reset();
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_3 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource_0);
		UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D(L_3, UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D_RuntimeMethod_var);
		// if (cancellationToken.IsCancellationRequested)
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = __this->___cancellationToken_5;
		V_0 = L_4;
		bool L_5;
		L_5 = CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350((&V_0), NULL);
		if (!L_5)
		{
			goto IL_004e;
		}
	}
	{
		// completionSource.TrySetCanceled(cancellationToken);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_6 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource_0);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_7 = __this->___cancellationToken_5;
		bool L_8;
		L_8 = UniTaskCompletionSourceCore_1_TrySetCanceled_mD66F5F925074EA6E22B0422A10F073A1447C7168(L_6, L_7, UniTaskCompletionSourceCore_1_TrySetCanceled_mD66F5F925074EA6E22B0422A10F073A1447C7168_RuntimeMethod_var);
	}

IL_004e:
	{
		// return new UniTask<bool>(this, completionSource.Version);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_9 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource_0);
		int16_t L_10;
		L_10 = UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_inline(L_9, UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_RuntimeMethod_var);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_11;
		memset((&L_11), 0, sizeof(L_11));
		UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_inline((&L_11), __this, L_10, /*hidden argument*/UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_RuntimeMethod_var);
		return L_11;
	}
}
// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.Linq.Timer/_Timer::DisposeAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 _Timer_DisposeAsync_mAAF11D3D9223205036F0695E5A6E4DA4C092B565 (_Timer_t02D4B03E9C868588091570453DD875CF717280FE* __this, const RuntimeMethod* method) 
{
	CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 V_0;
	memset((&V_0), 0, sizeof(V_0));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (!disposed)
		bool L_0 = __this->___disposed_11;
		if (L_0)
		{
			goto IL_001d;
		}
	}
	{
		// cancellationTokenRegistration.Dispose();
		CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 L_1 = __this->___cancellationTokenRegistration_6;
		V_0 = L_1;
		CancellationTokenRegistration_Dispose_m9EAF1228573E8278DDF7A3BEB5EE0E18DA6DC0E1((&V_0), NULL);
		// disposed = true;
		__this->___disposed_11 = (bool)1;
	}

IL_001d:
	{
		// return default;
		il2cpp_codegen_initobj((&V_1), sizeof(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270));
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_2 = V_1;
		return L_2;
	}
}
// System.Boolean Cysharp.Threading.Tasks.Linq.Timer/_Timer::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _Timer_MoveNext_mE978E92C7BCABBE941ECAACA29BDEC938A740BA4 (_Timer_t02D4B03E9C868588091570453DD875CF717280FE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetCanceled_mD66F5F925074EA6E22B0422A10F073A1447C7168_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED V_0;
	memset((&V_0), 0, sizeof(V_0));
	Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float G_B10_0 = 0.0f;
	_Timer_t02D4B03E9C868588091570453DD875CF717280FE* G_B10_1 = NULL;
	float G_B9_0 = 0.0f;
	_Timer_t02D4B03E9C868588091570453DD875CF717280FE* G_B9_1 = NULL;
	float G_B11_0 = 0.0f;
	float G_B11_1 = 0.0f;
	_Timer_t02D4B03E9C868588091570453DD875CF717280FE* G_B11_2 = NULL;
	float G_B17_0 = 0.0f;
	_Timer_t02D4B03E9C868588091570453DD875CF717280FE* G_B17_1 = NULL;
	float G_B16_0 = 0.0f;
	_Timer_t02D4B03E9C868588091570453DD875CF717280FE* G_B16_1 = NULL;
	float G_B18_0 = 0.0f;
	float G_B18_1 = 0.0f;
	_Timer_t02D4B03E9C868588091570453DD875CF717280FE* G_B18_2 = NULL;
	{
		// if (disposed)
		bool L_0 = __this->___disposed_11;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		// completionSource.TrySetResult(false);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_1 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource_0);
		bool L_2;
		L_2 = UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037(L_1, (bool)0, UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		// return false;
		return (bool)0;
	}

IL_0017:
	{
		// if (cancellationToken.IsCancellationRequested)
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = __this->___cancellationToken_5;
		V_0 = L_3;
		bool L_4;
		L_4 = CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350((&V_0), NULL);
		if (!L_4)
		{
			goto IL_003b;
		}
	}
	{
		// completionSource.TrySetCanceled(cancellationToken);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_5 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource_0);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_6 = __this->___cancellationToken_5;
		bool L_7;
		L_7 = UniTaskCompletionSourceCore_1_TrySetCanceled_mD66F5F925074EA6E22B0422A10F073A1447C7168(L_5, L_6, UniTaskCompletionSourceCore_1_TrySetCanceled_mD66F5F925074EA6E22B0422A10F073A1447C7168_RuntimeMethod_var);
		// return false;
		return (bool)0;
	}

IL_003b:
	{
		// if (dueTimePhase)
		bool L_8 = __this->___dueTimePhase_9;
		if (!L_8)
		{
			goto IL_00a7;
		}
	}
	{
		// if (elapsed == 0)
		float L_9 = __this->___elapsed_8;
		if ((!(((float)L_9) == ((float)(0.0f)))))
		{
			goto IL_005f;
		}
	}
	{
		// if (initialFrame == Time.frameCount)
		int32_t L_10 = __this->___initialFrame_7;
		int32_t L_11;
		L_11 = Time_get_frameCount_m4A42E558A71301A216BDC49EC402D62F19C79667(NULL);
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_005f;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_005f:
	{
		// elapsed += (ignoreTimeScale) ? UnityEngine.Time.unscaledDeltaTime : UnityEngine.Time.deltaTime;
		float L_12 = __this->___elapsed_8;
		bool L_13 = __this->___ignoreTimeScale_4;
		G_B9_0 = L_12;
		G_B9_1 = __this;
		if (L_13)
		{
			G_B10_0 = L_12;
			G_B10_1 = __this;
			goto IL_0075;
		}
	}
	{
		float L_14;
		L_14 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		G_B11_0 = L_14;
		G_B11_1 = G_B9_0;
		G_B11_2 = G_B9_1;
		goto IL_007a;
	}

IL_0075:
	{
		float L_15;
		L_15 = Time_get_unscaledDeltaTime_mF057EECA857E5C0F90A3F910D26D3EE59F27C4B5(NULL);
		G_B11_0 = L_15;
		G_B11_1 = G_B10_0;
		G_B11_2 = G_B10_1;
	}

IL_007a:
	{
		NullCheck(G_B11_2);
		G_B11_2->___elapsed_8 = ((float)il2cpp_codegen_add(G_B11_1, G_B11_0));
		// if (elapsed >= dueTime)
		float L_16 = __this->___elapsed_8;
		float L_17 = __this->___dueTime_1;
		if ((!(((float)L_16) >= ((float)L_17))))
		{
			goto IL_011b;
		}
	}
	{
		// dueTimePhase = false;
		__this->___dueTimePhase_9 = (bool)0;
		// completionSource.TrySetResult(true);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_18 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource_0);
		bool L_19;
		L_19 = UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037(L_18, (bool)1, UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		goto IL_011b;
	}

IL_00a7:
	{
		// if (period == null)
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75* L_20 = (Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75*)(&__this->___period_2);
		bool L_21;
		L_21 = Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline(L_20, Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
		if (L_21)
		{
			goto IL_00ca;
		}
	}
	{
		// completed = true;
		__this->___completed_10 = (bool)1;
		// completionSource.TrySetResult(false);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_22 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource_0);
		bool L_23;
		L_23 = UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037(L_22, (bool)0, UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		// return false;
		return (bool)0;
	}

IL_00ca:
	{
		// elapsed += (ignoreTimeScale) ? UnityEngine.Time.unscaledDeltaTime : UnityEngine.Time.deltaTime;
		float L_24 = __this->___elapsed_8;
		bool L_25 = __this->___ignoreTimeScale_4;
		G_B16_0 = L_24;
		G_B16_1 = __this;
		if (L_25)
		{
			G_B17_0 = L_24;
			G_B17_1 = __this;
			goto IL_00e0;
		}
	}
	{
		float L_26;
		L_26 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		G_B18_0 = L_26;
		G_B18_1 = G_B16_0;
		G_B18_2 = G_B16_1;
		goto IL_00e5;
	}

IL_00e0:
	{
		float L_27;
		L_27 = Time_get_unscaledDeltaTime_mF057EECA857E5C0F90A3F910D26D3EE59F27C4B5(NULL);
		G_B18_0 = L_27;
		G_B18_1 = G_B17_0;
		G_B18_2 = G_B17_1;
	}

IL_00e5:
	{
		NullCheck(G_B18_2);
		G_B18_2->___elapsed_8 = ((float)il2cpp_codegen_add(G_B18_1, G_B18_0));
		// if (elapsed >= period)
		float L_28 = __this->___elapsed_8;
		Nullable_1_t3D746CBB6123D4569FF4DEA60BC4240F32C6FE75 L_29 = __this->___period_2;
		V_1 = L_29;
		float L_30;
		L_30 = Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_inline((&V_1), Nullable_1_GetValueOrDefault_m068A148705ED1E215A5E85D18BA6852B192DA419_RuntimeMethod_var);
		bool L_31;
		L_31 = Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_inline((&V_1), Nullable_1_get_HasValue_mC149B1C717AF506BBE8932F2C1DC86C378D17EA8_RuntimeMethod_var);
		if (!((int32_t)(((((int32_t)((!(((float)L_28) >= ((float)L_30)))? 1 : 0)) == ((int32_t)0))? 1 : 0)&(int32_t)L_31)))
		{
			goto IL_011b;
		}
	}
	{
		// completionSource.TrySetResult(true);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_32 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource_0);
		bool L_33;
		L_33 = UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037(L_32, (bool)1, UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
	}

IL_011b:
	{
		// return true;
		return (bool)1;
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
// System.Void Cysharp.Threading.Tasks.Linq.Timer/_Timer/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mC3A825E1D0D47B2DF7DC8E84857ED248A7601865 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tE019F895E3EC2750F0145C152E501C6B241F1E77_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tE019F895E3EC2750F0145C152E501C6B241F1E77* L_0 = (U3CU3Ec_tE019F895E3EC2750F0145C152E501C6B241F1E77*)il2cpp_codegen_object_new(U3CU3Ec_tE019F895E3EC2750F0145C152E501C6B241F1E77_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m159C954281DAB83E3033E723DFB83AB2CDAAEFF5(L_0, NULL);
		((U3CU3Ec_tE019F895E3EC2750F0145C152E501C6B241F1E77_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE019F895E3EC2750F0145C152E501C6B241F1E77_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tE019F895E3EC2750F0145C152E501C6B241F1E77_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE019F895E3EC2750F0145C152E501C6B241F1E77_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.Timer/_Timer/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m159C954281DAB83E3033E723DFB83AB2CDAAEFF5 (U3CU3Ec_tE019F895E3EC2750F0145C152E501C6B241F1E77* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.Timer/_Timer/<>c::<.ctor>b__11_0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__11_0_mC0ED724BEC945D3F1A6EAC63C6660EE7D87AEF6F (U3CU3Ec_tE019F895E3EC2750F0145C152E501C6B241F1E77* __this, RuntimeObject* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetCanceled_mD66F5F925074EA6E22B0422A10F073A1447C7168_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_Timer_t02D4B03E9C868588091570453DD875CF717280FE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	_Timer_t02D4B03E9C868588091570453DD875CF717280FE* V_0 = NULL;
	{
		// var source = (_Timer)state;
		RuntimeObject* L_0 = ___0_state;
		V_0 = ((_Timer_t02D4B03E9C868588091570453DD875CF717280FE*)CastclassClass((RuntimeObject*)L_0, _Timer_t02D4B03E9C868588091570453DD875CF717280FE_il2cpp_TypeInfo_var));
		// source.completionSource.TrySetCanceled(source.cancellationToken);
		_Timer_t02D4B03E9C868588091570453DD875CF717280FE* L_1 = V_0;
		NullCheck(L_1);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_2 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_1)->___completionSource_0);
		_Timer_t02D4B03E9C868588091570453DD875CF717280FE* L_3 = V_0;
		NullCheck(L_3);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = L_3->___cancellationToken_5;
		bool L_5;
		L_5 = UniTaskCompletionSourceCore_1_TrySetCanceled_mD66F5F925074EA6E22B0422A10F073A1447C7168(L_2, L_4, UniTaskCompletionSourceCore_1_TrySetCanceled_mD66F5F925074EA6E22B0422A10F073A1447C7168_RuntimeMethod_var);
		// }, this);
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
// System.Void Cysharp.Threading.Tasks.Linq.TimerFrame::.ctor(System.Int32,System.Nullable`1<System.Int32>,Cysharp.Threading.Tasks.PlayerLoopTiming,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimerFrame__ctor_mAF8795225B0EBA2B73B74EF634C7854E69D22F80 (TimerFrame_t6DBA1A02DCEED3F0790B5E1A256E7EB7A09C16D8* __this, int32_t ___0_dueTimeFrameCount, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___1_periodFrameCount, int32_t ___2_updateTiming, bool ___3_cancelImmediately, const RuntimeMethod* method) 
{
	{
		// public TimerFrame(int dueTimeFrameCount, int? periodFrameCount, PlayerLoopTiming updateTiming, bool cancelImmediately)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.updateTiming = updateTiming;
		int32_t L_0 = ___2_updateTiming;
		__this->___updateTiming_0 = L_0;
		// this.dueTimeFrameCount = dueTimeFrameCount;
		int32_t L_1 = ___0_dueTimeFrameCount;
		__this->___dueTimeFrameCount_1 = L_1;
		// this.periodFrameCount = periodFrameCount;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_2 = ___1_periodFrameCount;
		__this->___periodFrameCount_2 = L_2;
		// this.cancelImmediately = cancelImmediately;
		bool L_3 = ___3_cancelImmediately;
		__this->___cancelImmediately_3 = L_3;
		// }
		return;
	}
}
// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<Cysharp.Threading.Tasks.AsyncUnit> Cysharp.Threading.Tasks.Linq.TimerFrame::GetAsyncEnumerator(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TimerFrame_GetAsyncEnumerator_m4AC5C5AE320A45C3C2FA407F4FC0769CC8804806 (TimerFrame_t6DBA1A02DCEED3F0790B5E1A256E7EB7A09C16D8* __this, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_TimerFrame_tB2FB05F5E7C41CD1D9B2EDC7381873F0595DE6C2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new _TimerFrame(dueTimeFrameCount, periodFrameCount, updateTiming, cancellationToken, cancelImmediately);
		int32_t L_0 = __this->___dueTimeFrameCount_1;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_1 = __this->___periodFrameCount_2;
		int32_t L_2 = __this->___updateTiming_0;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = ___0_cancellationToken;
		bool L_4 = __this->___cancelImmediately_3;
		_TimerFrame_tB2FB05F5E7C41CD1D9B2EDC7381873F0595DE6C2* L_5 = (_TimerFrame_tB2FB05F5E7C41CD1D9B2EDC7381873F0595DE6C2*)il2cpp_codegen_object_new(_TimerFrame_tB2FB05F5E7C41CD1D9B2EDC7381873F0595DE6C2_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		_TimerFrame__ctor_m56E526C2B3D6AD15D8B12D43863B83511ED2B16E(L_5, L_0, L_1, L_2, L_3, L_4, NULL);
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
// System.Void Cysharp.Threading.Tasks.Linq.TimerFrame/_TimerFrame::.ctor(System.Int32,System.Nullable`1<System.Int32>,Cysharp.Threading.Tasks.PlayerLoopTiming,System.Threading.CancellationToken,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TimerFrame__ctor_m56E526C2B3D6AD15D8B12D43863B83511ED2B16E (_TimerFrame_tB2FB05F5E7C41CD1D9B2EDC7381873F0595DE6C2* __this, int32_t ___0_dueTimeFrameCount, Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___1_periodFrameCount, int32_t ___2_updateTiming, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___3_cancellationToken, bool ___4_cancelImmediately, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationTokenExtensions_tDCF32020B3569F58EFEE1EE41A992652A6F720E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerLoopHelper_tA497C2C44D13E21B40E76B01973260BB49C9CF01_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__9_0_m5DA0C8480AA49E7740546EFA46B93AC42D7321F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t229871E1A199FD7FF8F49B81D66131E4FDC0F2A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	_TimerFrame_tB2FB05F5E7C41CD1D9B2EDC7381873F0595DE6C2* G_B7_0 = NULL;
	_TimerFrame_tB2FB05F5E7C41CD1D9B2EDC7381873F0595DE6C2* G_B6_0 = NULL;
	int32_t G_B8_0 = 0;
	_TimerFrame_tB2FB05F5E7C41CD1D9B2EDC7381873F0595DE6C2* G_B8_1 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B12_0 = NULL;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED G_B12_1;
	memset((&G_B12_1), 0, sizeof(G_B12_1));
	_TimerFrame_tB2FB05F5E7C41CD1D9B2EDC7381873F0595DE6C2* G_B12_2 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B11_0 = NULL;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED G_B11_1;
	memset((&G_B11_1), 0, sizeof(G_B11_1));
	_TimerFrame_tB2FB05F5E7C41CD1D9B2EDC7381873F0595DE6C2* G_B11_2 = NULL;
	{
		// public _TimerFrame(int dueTimeFrameCount, int? periodFrameCount, PlayerLoopTiming updateTiming, CancellationToken cancellationToken, bool cancelImmediately)
		MoveNextSource__ctor_mAD2FB060DAA5FB4AC333260F502B4FD563133640(__this, NULL);
		// if (dueTimeFrameCount <= 0) dueTimeFrameCount = 0;
		int32_t L_0 = ___0_dueTimeFrameCount;
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		// if (dueTimeFrameCount <= 0) dueTimeFrameCount = 0;
		___0_dueTimeFrameCount = 0;
	}

IL_000d:
	{
		// if (periodFrameCount != null)
		bool L_1;
		L_1 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline((&___1_periodFrameCount), Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_0039;
		}
	}
	{
		// if (periodFrameCount <= 0) periodFrameCount = 1;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_2 = ___1_periodFrameCount;
		V_0 = L_2;
		V_1 = 0;
		int32_t L_3;
		L_3 = Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_inline((&V_0), Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var);
		int32_t L_4 = V_1;
		bool L_5;
		L_5 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline((&V_0), Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		if (!((int32_t)(((((int32_t)((((int32_t)L_3) > ((int32_t)L_4))? 1 : 0)) == ((int32_t)0))? 1 : 0)&(int32_t)L_5)))
		{
			goto IL_0039;
		}
	}
	{
		// if (periodFrameCount <= 0) periodFrameCount = 1;
		Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703((&___1_periodFrameCount), 1, Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
	}

IL_0039:
	{
		// this.initialFrame = PlayerLoopHelper.IsMainThread ? Time.frameCount : -1;
		il2cpp_codegen_runtime_class_init_inline(PlayerLoopHelper_tA497C2C44D13E21B40E76B01973260BB49C9CF01_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = PlayerLoopHelper_get_IsMainThread_mC32C7D62B20488CD0BA2F337EBFEC8128086DD5A(NULL);
		G_B6_0 = __this;
		if (L_6)
		{
			G_B7_0 = __this;
			goto IL_0044;
		}
	}
	{
		G_B8_0 = (-1);
		G_B8_1 = G_B6_0;
		goto IL_0049;
	}

IL_0044:
	{
		int32_t L_7;
		L_7 = Time_get_frameCount_m4A42E558A71301A216BDC49EC402D62F19C79667(NULL);
		G_B8_0 = L_7;
		G_B8_1 = G_B7_0;
	}

IL_0049:
	{
		NullCheck(G_B8_1);
		G_B8_1->___initialFrame_5 = G_B8_0;
		// this.dueTimePhase = true;
		__this->___dueTimePhase_7 = (bool)1;
		// this.dueTimeFrameCount = dueTimeFrameCount;
		int32_t L_8 = ___0_dueTimeFrameCount;
		__this->___dueTimeFrameCount_1 = L_8;
		// this.periodFrameCount = periodFrameCount;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_9 = ___1_periodFrameCount;
		__this->___periodFrameCount_2 = L_9;
		// this.cancellationToken = cancellationToken;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_10 = ___3_cancellationToken;
		__this->___cancellationToken_3 = L_10;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___cancellationToken_3))->____source_0), (void*)NULL);
		// if (cancelImmediately && cancellationToken.CanBeCanceled)
		bool L_11 = ___4_cancelImmediately;
		if (!L_11)
		{
			goto IL_00a5;
		}
	}
	{
		bool L_12;
		L_12 = CancellationToken_get_CanBeCanceled_mC3751330B171DB14B70B9BAAD90A7D098A2309EC((&___3_cancellationToken), NULL);
		if (!L_12)
		{
			goto IL_00a5;
		}
	}
	{
		// cancellationTokenRegistration = cancellationToken.RegisterWithoutCaptureExecutionContext(state =>
		// {
		//     var source = (_TimerFrame)state;
		//     source.completionSource.TrySetCanceled(source.cancellationToken);
		// }, this);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_13 = ___3_cancellationToken;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t229871E1A199FD7FF8F49B81D66131E4FDC0F2A9_il2cpp_TypeInfo_var);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_14 = ((U3CU3Ec_t229871E1A199FD7FF8F49B81D66131E4FDC0F2A9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t229871E1A199FD7FF8F49B81D66131E4FDC0F2A9_il2cpp_TypeInfo_var))->___U3CU3E9__9_0_1;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_15 = L_14;
		G_B11_0 = L_15;
		G_B11_1 = L_13;
		G_B11_2 = __this;
		if (L_15)
		{
			G_B12_0 = L_15;
			G_B12_1 = L_13;
			G_B12_2 = __this;
			goto IL_009a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t229871E1A199FD7FF8F49B81D66131E4FDC0F2A9_il2cpp_TypeInfo_var);
		U3CU3Ec_t229871E1A199FD7FF8F49B81D66131E4FDC0F2A9* L_16 = ((U3CU3Ec_t229871E1A199FD7FF8F49B81D66131E4FDC0F2A9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t229871E1A199FD7FF8F49B81D66131E4FDC0F2A9_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_17 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_17, L_16, (intptr_t)((void*)U3CU3Ec_U3C_ctorU3Eb__9_0_m5DA0C8480AA49E7740546EFA46B93AC42D7321F8_RuntimeMethod_var), NULL);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_18 = L_17;
		((U3CU3Ec_t229871E1A199FD7FF8F49B81D66131E4FDC0F2A9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t229871E1A199FD7FF8F49B81D66131E4FDC0F2A9_il2cpp_TypeInfo_var))->___U3CU3E9__9_0_1 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t229871E1A199FD7FF8F49B81D66131E4FDC0F2A9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t229871E1A199FD7FF8F49B81D66131E4FDC0F2A9_il2cpp_TypeInfo_var))->___U3CU3E9__9_0_1), (void*)L_18);
		G_B12_0 = L_18;
		G_B12_1 = G_B11_1;
		G_B12_2 = G_B11_2;
	}

IL_009a:
	{
		il2cpp_codegen_runtime_class_init_inline(CancellationTokenExtensions_tDCF32020B3569F58EFEE1EE41A992652A6F720E6_il2cpp_TypeInfo_var);
		CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 L_19;
		L_19 = CancellationTokenExtensions_RegisterWithoutCaptureExecutionContext_mA5A09F053F6E50AD047E0DB08666E4270863AC69(G_B12_1, G_B12_0, __this, NULL);
		NullCheck(G_B12_2);
		G_B12_2->___cancellationTokenRegistration_4 = L_19;
		Il2CppCodeGenWriteBarrier((void**)&(((&G_B12_2->___cancellationTokenRegistration_4))->___m_callbackInfo_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&G_B12_2->___cancellationTokenRegistration_4))->___m_registrationInfo_1))->____source_0), (void*)NULL);
		#endif
	}

IL_00a5:
	{
		// PlayerLoopHelper.AddAction(updateTiming, this);
		int32_t L_20 = ___2_updateTiming;
		il2cpp_codegen_runtime_class_init_inline(PlayerLoopHelper_tA497C2C44D13E21B40E76B01973260BB49C9CF01_il2cpp_TypeInfo_var);
		PlayerLoopHelper_AddAction_mAD5D5DA039BE42ECF032A1835BD95C318D6ED22D(L_20, __this, NULL);
		// }
		return;
	}
}
// Cysharp.Threading.Tasks.AsyncUnit Cysharp.Threading.Tasks.Linq.TimerFrame/_TimerFrame::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncUnit_t28ED8F3D14C76244CF24D9C7A627585A9EC7491A _TimerFrame_get_Current_mB0A7F49638DEE79224709574397815EF883D8908 (_TimerFrame_tB2FB05F5E7C41CD1D9B2EDC7381873F0595DE6C2* __this, const RuntimeMethod* method) 
{
	AsyncUnit_t28ED8F3D14C76244CF24D9C7A627585A9EC7491A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public AsyncUnit Current => default;
		il2cpp_codegen_initobj((&V_0), sizeof(AsyncUnit_t28ED8F3D14C76244CF24D9C7A627585A9EC7491A));
		AsyncUnit_t28ED8F3D14C76244CF24D9C7A627585A9EC7491A L_0 = V_0;
		return L_0;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.Linq.TimerFrame/_TimerFrame::MoveNextAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 _TimerFrame_MoveNextAsync_m708175E4E3A936079E2A9A40513126EC8B49B791 (_TimerFrame_tB2FB05F5E7C41CD1D9B2EDC7381873F0595DE6C2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompletedTasks_t3D6A58059BB55C44DE470DE0D29C78D1817DB19B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetCanceled_mD66F5F925074EA6E22B0422A10F073A1447C7168_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (disposed || completed) return CompletedTasks.False;
		bool L_0 = __this->___disposed_9;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_1 = __this->___completed_8;
		if (!L_1)
		{
			goto IL_0016;
		}
	}

IL_0010:
	{
		// if (disposed || completed) return CompletedTasks.False;
		il2cpp_codegen_runtime_class_init_inline(CompletedTasks_t3D6A58059BB55C44DE470DE0D29C78D1817DB19B_il2cpp_TypeInfo_var);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_2 = ((CompletedTasks_t3D6A58059BB55C44DE470DE0D29C78D1817DB19B_StaticFields*)il2cpp_codegen_static_fields_for(CompletedTasks_t3D6A58059BB55C44DE470DE0D29C78D1817DB19B_il2cpp_TypeInfo_var))->___False_2;
		return L_2;
	}

IL_0016:
	{
		// if (cancellationToken.IsCancellationRequested)
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = __this->___cancellationToken_3;
		V_0 = L_3;
		bool L_4;
		L_4 = CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350((&V_0), NULL);
		if (!L_4)
		{
			goto IL_0038;
		}
	}
	{
		// completionSource.TrySetCanceled(cancellationToken);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_5 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource_0);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_6 = __this->___cancellationToken_3;
		bool L_7;
		L_7 = UniTaskCompletionSourceCore_1_TrySetCanceled_mD66F5F925074EA6E22B0422A10F073A1447C7168(L_5, L_6, UniTaskCompletionSourceCore_1_TrySetCanceled_mD66F5F925074EA6E22B0422A10F073A1447C7168_RuntimeMethod_var);
	}

IL_0038:
	{
		// this.currentFrame = 0;
		__this->___currentFrame_6 = 0;
		// completionSource.Reset();
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_8 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource_0);
		UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D(L_8, UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D_RuntimeMethod_var);
		// return new UniTask<bool>(this, completionSource.Version);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_9 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource_0);
		int16_t L_10;
		L_10 = UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_inline(L_9, UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_RuntimeMethod_var);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_11;
		memset((&L_11), 0, sizeof(L_11));
		UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_inline((&L_11), __this, L_10, /*hidden argument*/UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_RuntimeMethod_var);
		return L_11;
	}
}
// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.Linq.TimerFrame/_TimerFrame::DisposeAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 _TimerFrame_DisposeAsync_mD0A4CDC6F1E3AADF404AC9CBE46F834CC43C15DE (_TimerFrame_tB2FB05F5E7C41CD1D9B2EDC7381873F0595DE6C2* __this, const RuntimeMethod* method) 
{
	CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 V_0;
	memset((&V_0), 0, sizeof(V_0));
	UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (!disposed)
		bool L_0 = __this->___disposed_9;
		if (L_0)
		{
			goto IL_001d;
		}
	}
	{
		// cancellationTokenRegistration.Dispose();
		CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 L_1 = __this->___cancellationTokenRegistration_4;
		V_0 = L_1;
		CancellationTokenRegistration_Dispose_m9EAF1228573E8278DDF7A3BEB5EE0E18DA6DC0E1((&V_0), NULL);
		// disposed = true;
		__this->___disposed_9 = (bool)1;
	}

IL_001d:
	{
		// return default;
		il2cpp_codegen_initobj((&V_1), sizeof(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270));
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_2 = V_1;
		return L_2;
	}
}
// System.Boolean Cysharp.Threading.Tasks.Linq.TimerFrame/_TimerFrame::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _TimerFrame_MoveNext_mCC3D09A671A17B0EFEAD7B5E8BA7CF8393B18CD5 (_TimerFrame_tB2FB05F5E7C41CD1D9B2EDC7381873F0595DE6C2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetCanceled_mD66F5F925074EA6E22B0422A10F073A1447C7168_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (cancellationToken.IsCancellationRequested)
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_0 = __this->___cancellationToken_3;
		V_0 = L_0;
		bool L_1;
		L_1 = CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350((&V_0), NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		// completionSource.TrySetCanceled(cancellationToken);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_2 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource_0);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = __this->___cancellationToken_3;
		bool L_4;
		L_4 = UniTaskCompletionSourceCore_1_TrySetCanceled_mD66F5F925074EA6E22B0422A10F073A1447C7168(L_2, L_3, UniTaskCompletionSourceCore_1_TrySetCanceled_mD66F5F925074EA6E22B0422A10F073A1447C7168_RuntimeMethod_var);
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (disposed)
		bool L_5 = __this->___disposed_9;
		if (!L_5)
		{
			goto IL_003b;
		}
	}
	{
		// completionSource.TrySetResult(false);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_6 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource_0);
		bool L_7;
		L_7 = UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037(L_6, (bool)0, UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		// return false;
		return (bool)0;
	}

IL_003b:
	{
		// if (dueTimePhase)
		bool L_8 = __this->___dueTimePhase_7;
		if (!L_8)
		{
			goto IL_00a7;
		}
	}
	{
		// if (currentFrame == 0)
		int32_t L_9 = __this->___currentFrame_6;
		if (L_9)
		{
			goto IL_0078;
		}
	}
	{
		// if (dueTimeFrameCount == 0)
		int32_t L_10 = __this->___dueTimeFrameCount_1;
		if (L_10)
		{
			goto IL_0069;
		}
	}
	{
		// dueTimePhase = false;
		__this->___dueTimePhase_7 = (bool)0;
		// completionSource.TrySetResult(true);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_11 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource_0);
		bool L_12;
		L_12 = UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037(L_11, (bool)1, UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		// return true;
		return (bool)1;
	}

IL_0069:
	{
		// if (initialFrame == Time.frameCount)
		int32_t L_13 = __this->___initialFrame_5;
		int32_t L_14;
		L_14 = Time_get_frameCount_m4A42E558A71301A216BDC49EC402D62F19C79667(NULL);
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_0078;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0078:
	{
		// if (++currentFrame >= dueTimeFrameCount)
		int32_t L_15 = __this->___currentFrame_6;
		V_1 = ((int32_t)il2cpp_codegen_add(L_15, 1));
		int32_t L_16 = V_1;
		__this->___currentFrame_6 = L_16;
		int32_t L_17 = V_1;
		int32_t L_18 = __this->___dueTimeFrameCount_1;
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0105;
		}
	}
	{
		// dueTimePhase = false;
		__this->___dueTimePhase_7 = (bool)0;
		// completionSource.TrySetResult(true);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_19 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource_0);
		bool L_20;
		L_20 = UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037(L_19, (bool)1, UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		goto IL_0105;
	}

IL_00a7:
	{
		// if (periodFrameCount == null)
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* L_21 = (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*)(&__this->___periodFrameCount_2);
		bool L_22;
		L_22 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline(L_21, Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		if (L_22)
		{
			goto IL_00ca;
		}
	}
	{
		// completed = true;
		__this->___completed_8 = (bool)1;
		// completionSource.TrySetResult(false);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_23 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource_0);
		bool L_24;
		L_24 = UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037(L_23, (bool)0, UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		// return false;
		return (bool)0;
	}

IL_00ca:
	{
		// if (++currentFrame >= periodFrameCount)
		int32_t L_25 = __this->___currentFrame_6;
		V_1 = ((int32_t)il2cpp_codegen_add(L_25, 1));
		int32_t L_26 = V_1;
		__this->___currentFrame_6 = L_26;
		int32_t L_27 = V_1;
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_28 = __this->___periodFrameCount_2;
		V_2 = L_28;
		int32_t L_29;
		L_29 = Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_inline((&V_2), Nullable_1_GetValueOrDefault_m8D130DB7F2A1E694736B449176F9C26DB456597B_RuntimeMethod_var);
		bool L_30;
		L_30 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline((&V_2), Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		if (!((int32_t)(((((int32_t)((((int32_t)L_27) < ((int32_t)L_29))? 1 : 0)) == ((int32_t)0))? 1 : 0)&(int32_t)L_30)))
		{
			goto IL_0105;
		}
	}
	{
		// completionSource.TrySetResult(true);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_31 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource_0);
		bool L_32;
		L_32 = UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037(L_31, (bool)1, UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
	}

IL_0105:
	{
		// return true;
		return (bool)1;
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
// System.Void Cysharp.Threading.Tasks.Linq.TimerFrame/_TimerFrame/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mC5FE0F9C39103AA54E970AA245D621E2D405EC69 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t229871E1A199FD7FF8F49B81D66131E4FDC0F2A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t229871E1A199FD7FF8F49B81D66131E4FDC0F2A9* L_0 = (U3CU3Ec_t229871E1A199FD7FF8F49B81D66131E4FDC0F2A9*)il2cpp_codegen_object_new(U3CU3Ec_t229871E1A199FD7FF8F49B81D66131E4FDC0F2A9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m95708785FC0AC7C3BBF8520A74DEA5A6B825BB7F(L_0, NULL);
		((U3CU3Ec_t229871E1A199FD7FF8F49B81D66131E4FDC0F2A9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t229871E1A199FD7FF8F49B81D66131E4FDC0F2A9_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t229871E1A199FD7FF8F49B81D66131E4FDC0F2A9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t229871E1A199FD7FF8F49B81D66131E4FDC0F2A9_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.TimerFrame/_TimerFrame/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m95708785FC0AC7C3BBF8520A74DEA5A6B825BB7F (U3CU3Ec_t229871E1A199FD7FF8F49B81D66131E4FDC0F2A9* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.TimerFrame/_TimerFrame/<>c::<.ctor>b__9_0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__9_0_m5DA0C8480AA49E7740546EFA46B93AC42D7321F8 (U3CU3Ec_t229871E1A199FD7FF8F49B81D66131E4FDC0F2A9* __this, RuntimeObject* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetCanceled_mD66F5F925074EA6E22B0422A10F073A1447C7168_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_TimerFrame_tB2FB05F5E7C41CD1D9B2EDC7381873F0595DE6C2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	_TimerFrame_tB2FB05F5E7C41CD1D9B2EDC7381873F0595DE6C2* V_0 = NULL;
	{
		// var source = (_TimerFrame)state;
		RuntimeObject* L_0 = ___0_state;
		V_0 = ((_TimerFrame_tB2FB05F5E7C41CD1D9B2EDC7381873F0595DE6C2*)CastclassClass((RuntimeObject*)L_0, _TimerFrame_tB2FB05F5E7C41CD1D9B2EDC7381873F0595DE6C2_il2cpp_TypeInfo_var));
		// source.completionSource.TrySetCanceled(source.cancellationToken);
		_TimerFrame_tB2FB05F5E7C41CD1D9B2EDC7381873F0595DE6C2* L_1 = V_0;
		NullCheck(L_1);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_2 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_1)->___completionSource_0);
		_TimerFrame_tB2FB05F5E7C41CD1D9B2EDC7381873F0595DE6C2* L_3 = V_0;
		NullCheck(L_3);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = L_3->___cancellationToken_3;
		bool L_5;
		L_5 = UniTaskCompletionSourceCore_1_TrySetCanceled_mD66F5F925074EA6E22B0422A10F073A1447C7168(L_2, L_4, UniTaskCompletionSourceCore_1_TrySetCanceled_mD66F5F925074EA6E22B0422A10F073A1447C7168_RuntimeMethod_var);
		// }, this);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 UniTask_GetAwaiter_mF05A09B81913BECFD58FC67A16C0251FFCCAC939_inline (UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* __this, const RuntimeMethod* method) 
{
	{
		// return new Awaiter(this);
		Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Awaiter__ctor_m4154A3A6D62BB1657D17A8106633CD9E1CE51F04_inline((&L_0), __this, /*hidden argument*/NULL);
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m2D01E3AB8A7C5AA8AA1E1EF58D92A6A095C00B9A_inline (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* __this, const RuntimeMethod* method) 
{
	{
		// return task.Status.IsCompleted();
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* L_0 = (UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270*)(&__this->___task_0);
		int32_t L_1;
		L_1 = UniTask_get_Status_mA15B0F13DE3CE36730357CF50F65AE99ADF564DA_inline(L_0, NULL);
		bool L_2;
		L_2 = UniTaskStatusExtensions_IsCompleted_mF43C41C9CEB640E381D1F7A8B40142843AED87AE_inline(L_1, NULL);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_GetResult_mC439993563D3BD49CEC67AAF6AFB3AEF72E916BD_inline (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (task.source == null) return;
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* L_0 = (UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270*)(&__this->___task_0);
		RuntimeObject* L_1 = L_0->___source_0;
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		// if (task.source == null) return;
		return;
	}

IL_000e:
	{
		// task.source.GetResult(task.token);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* L_2 = (UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270*)(&__this->___task_0);
		RuntimeObject* L_3 = L_2->___source_0;
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* L_4 = (UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270*)(&__this->___task_0);
		int16_t L_5 = L_4->___token_1;
		NullCheck(L_3);
		InterfaceActionInvoker1< int16_t >::Invoke(2 /* System.Void Cysharp.Threading.Tasks.IUniTaskSource::GetResult(System.Int16) */, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, L_3, L_5);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Nullable_1_GetValueOrDefault_mC057FBD944AF068B90EBDD0B496231A01B2A4228_gshared_inline (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	// sizeof(T)
	const uint32_t SizeOf_T_tF1352992D99D495C6F2BE3DC43F8A00BAD6B2EAA = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	// T
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_T_tF1352992D99D495C6F2BE3DC43F8A00BAD6B2EAA);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),1)), SizeOf_T_tF1352992D99D495C6F2BE3DC43F8A00BAD6B2EAA);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_T_tF1352992D99D495C6F2BE3DC43F8A00BAD6B2EAA);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m14F273FB376DF00D727434CDCD28AB4EDCC14C3C_gshared_inline (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),0));
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UniTask_1_GetAwaiter_mEC480E8F8586214E6ECD880FBFAA9C8CB1C963ED_gshared_inline (UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483* __this, Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* il2cppRetVal, const RuntimeMethod* method) 
{
	// sizeof(Cysharp.Threading.Tasks.UniTask`1/Awaiter<T>)
	const uint32_t SizeOf_Awaiter_t12412F44D0A1D4C6573C6EDD4F933E1089C86DFC = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3));
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<T>
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_0 = alloca(SizeOf_Awaiter_t12412F44D0A1D4C6573C6EDD4F933E1089C86DFC);
	{
		// return new Awaiter(this);
		memset(L_0, 0, SizeOf_Awaiter_t12412F44D0A1D4C6573C6EDD4F933E1089C86DFC);
		Awaiter__ctor_m75F3F14568F9463778CE7429585D539E87F226F3_inline((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)L_0, __this, /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_Awaiter_t12412F44D0A1D4C6573C6EDD4F933E1089C86DFC);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m22B365903CC1BE835CA1126FE3BD3E71156DDFA8_gshared_inline (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* __this, const RuntimeMethod* method) 
{
	{
		// return task.Status.IsCompleted();
		int32_t L_0;
		L_0 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3), (((UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2),0)))));
		bool L_1;
		L_1 = UniTaskStatusExtensions_IsCompleted_mF43C41C9CEB640E381D1F7A8B40142843AED87AE_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mB581027AD2DAA9354D87721008929F4DDFAC471E_gshared_inline (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___0_awaiter, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___1_stateMachine, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	void* L_5 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 4)));
	{
		// if (runnerPromise == null)
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0),0));
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		// AsyncUniTask<TStateMachine, T>.SetStateMachine(ref stateMachine, ref runnerPromise);
		Il2CppFullySharedGenericAny* L_1 = ___1_stateMachine;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		InvokerActionInvoker2< Il2CppFullySharedGenericAny*, RuntimeObject** >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_1, (((RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0),0)))));
	}

IL_0014:
	{
		// awaiter.UnsafeOnCompleted(runnerPromise.MoveNext);
		Il2CppFullySharedGenericAny* L_2 = ___0_awaiter;
		RuntimeObject* L_3 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0),0));
		NullCheck(L_3);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4;
		L_4 = InterfaceFuncInvoker0Invoker< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(0 /* System.Action Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_MoveNext() */, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_3);
		ConstrainedActionInvoker1< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 4), il2cpp_rgctx_method(method->rgctx_data, 5), L_5, (void*)L_2, L_4);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_GetResult_mFF0CF33768E54ACB5D4D4F47A4A6FE3DB29EE6D8_gshared_inline (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	// sizeof(T)
	const uint32_t SizeOf_T_t51191FDA2C225152DFBE7756A21D31A184B705B0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 5));
	// T
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t51191FDA2C225152DFBE7756A21D31A184B705B0);
	const Il2CppFullySharedGenericAny L_5 = L_2;
	RuntimeObject* V_0 = NULL;
	{
		// var s = task.source;
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer((((UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2),0)))), il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),0));
		V_0 = L_0;
		// if (s == null)
		RuntimeObject* L_1 = V_0;
		if (L_1)
		{
			goto IL_001b;
		}
	}
	{
		// return task.result;
		il2cpp_codegen_memcpy(L_2, il2cpp_codegen_get_instance_field_data_pointer((((UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2),0)))), il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),1)), SizeOf_T_t51191FDA2C225152DFBE7756A21D31A184B705B0);
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_T_t51191FDA2C225152DFBE7756A21D31A184B705B0);
		return;
	}

IL_001b:
	{
		// return s.GetResult(task.token);
		RuntimeObject* L_3 = V_0;
		int16_t L_4 = *(int16_t*)il2cpp_codegen_get_instance_field_data_pointer((((UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2),0)))), il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),2));
		NullCheck(L_3);
		InterfaceActionInvoker2Invoker< int16_t, Il2CppFullySharedGenericAny* >::Invoke(0 /* T Cysharp.Threading.Tasks.IUniTaskSource`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::GetResult(System.Int16) */, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_3, L_4, (Il2CppFullySharedGenericAny*)L_5);
		il2cpp_codegen_memcpy(il2cppRetVal, L_5, SizeOf_T_t51191FDA2C225152DFBE7756A21D31A184B705B0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetException_m1812AF0E769F5A0E532DDEF8FE0921CA78F12A7D_gshared_inline (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52* __this, Exception_t* ___0_exception, const RuntimeMethod* method) 
{
	{
		// if (runnerPromise == null)
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0),0));
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		// ex = exception;
		Exception_t* L_1 = ___0_exception;
		il2cpp_codegen_write_instance_field_data<Exception_t*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0),1), L_1);
		return;
	}

IL_0010:
	{
		// runnerPromise.SetException(exception);
		RuntimeObject* L_2 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0),0));
		Exception_t* L_3 = ___0_exception;
		NullCheck(L_2);
		InterfaceActionInvoker1Invoker< Exception_t* >::Invoke(3 /* System.Void Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::SetException(System.Exception) */, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_2, L_3);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_SetResult_mF7DA80E1E8E4F9D51929B6BC5DC7B7B11F889339_gshared_inline (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_result, const RuntimeMethod* method) 
{
	// sizeof(T)
	const uint32_t SizeOf_T_tFD8DB5F523A69F458964B5BC1138077595EF73A7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 5));
	// T
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_tFD8DB5F523A69F458964B5BC1138077595EF73A7);
	const Il2CppFullySharedGenericAny L_3 = L_1;
	{
		// if (runnerPromise == null)
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0),0));
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		// this.result = result;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 5)) ? ___0_result : &___0_result), SizeOf_T_tFD8DB5F523A69F458964B5BC1138077595EF73A7);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0),2), L_1, SizeOf_T_tFD8DB5F523A69F458964B5BC1138077595EF73A7);
		return;
	}

IL_0010:
	{
		// runnerPromise.SetResult(result);
		RuntimeObject* L_2 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0),0));
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 5)) ? ___0_result : &___0_result), SizeOf_T_tFD8DB5F523A69F458964B5BC1138077595EF73A7);
		NullCheck(L_2);
		InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny >::Invoke(2 /* System.Void Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::SetResult(T) */, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 5)) ? L_3: *(void**)L_3));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int16_t UniTaskCompletionSourceCore_1_get_Version_mC206FEA615DEB3676B72991ABAE79848523CAC0B_gshared_inline (UniTaskCompletionSourceCore_1_t146409427AB3F018819917FFA1FDC70FDB5C0BBF* __this, const RuntimeMethod* method) 
{
	{
		// public short Version => version;
		int16_t L_0 = *(int16_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),2));
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UniTask_1__ctor_m608BBDBA054799FF72D4ED7758DA9BA32EBB8F22_gshared_inline (UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483* __this, RuntimeObject* ___0_source, int16_t ___1_token, const RuntimeMethod* method) 
{
	// sizeof(T)
	const uint32_t SizeOf_T_tFF5A4BDB19D1BCCEC9E3BFEC979335AAEF368430 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	{
		// this.source = source;
		RuntimeObject* L_0 = ___0_source;
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0),0), L_0);
		// this.token = token;
		int16_t L_1 = ___1_token;
		il2cpp_codegen_write_instance_field_data<int16_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0),2), L_1);
		// this.result = default;
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0),1)))), SizeOf_T_tFF5A4BDB19D1BCCEC9E3BFEC979335AAEF368430);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_m4154A3A6D62BB1657D17A8106633CD9E1CE51F04_inline (Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956* __this, UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* ___0_task, const RuntimeMethod* method) 
{
	{
		// this.task = task;
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* L_0 = ___0_task;
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_1 = (*(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270*)L_0);
		__this->___task_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___task_0))->___source_0), (void*)NULL);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_get_Status_mA15B0F13DE3CE36730357CF50F65AE99ADF564DA_inline (UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (source == null) return UniTaskStatus.Succeeded;
		RuntimeObject* L_0 = __this->___source_0;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// if (source == null) return UniTaskStatus.Succeeded;
		return (int32_t)(1);
	}

IL_000a:
	{
		// return source.GetStatus(token);
		RuntimeObject* L_1 = __this->___source_0;
		int16_t L_2 = __this->___token_1;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(0 /* Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.IUniTaskSource::GetStatus(System.Int16) */, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, L_1, L_2);
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UniTaskStatusExtensions_IsCompleted_mF43C41C9CEB640E381D1F7A8B40142843AED87AE_inline (int32_t ___0_status, const RuntimeMethod* method) 
{
	{
		// return status != UniTaskStatus.Pending;
		int32_t L_0 = ___0_status;
		return (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_m75F3F14568F9463778CE7429585D539E87F226F3_gshared_inline (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* __this, /*Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>&*/UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483* ___0_task, const RuntimeMethod* method) 
{
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T>)
	const uint32_t SizeOf_UniTask_1_tD8AB010F422D5AFB8EE7B134A25B47A5D55F7990 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	// Cysharp.Threading.Tasks.UniTask`1<T>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_1 = alloca(SizeOf_UniTask_1_tD8AB010F422D5AFB8EE7B134A25B47A5D55F7990);
	{
		// this.task = task;
		UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483* L_0 = ___0_task;
		il2cpp_codegen_memcpy(L_1, L_0, SizeOf_UniTask_1_tD8AB010F422D5AFB8EE7B134A25B47A5D55F7990);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2),0), L_1, SizeOf_UniTask_1_tD8AB010F422D5AFB8EE7B134A25B47A5D55F7990);
		// }
		return;
	}
}

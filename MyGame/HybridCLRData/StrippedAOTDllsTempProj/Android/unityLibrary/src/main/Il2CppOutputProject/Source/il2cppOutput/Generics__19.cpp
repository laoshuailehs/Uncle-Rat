#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
struct InterfaceFuncInvoker1Invoker
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		R ret;
		void* params[1] = { &p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
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
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2*, T3, T4*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3, T4* p4)
	{
		void* params[4] = { p1, p2, &p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, params[3]);
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
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		R ret;
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		R ret;
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3;
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2, T3>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3)
	{
		R ret;
		void* params[3] = { p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99;
// System.Func`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Threading.CancellationToken,Cysharp.Threading.Tasks.UniTask`1<System.Boolean>>
struct Func_3_t53018F4F6199ADCA7207839DDA0D824E89C5C814;
// System.Func`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>
struct Func_3_t025EADE05AD46B78D6372153E7AB6141B48C6D40;
// System.Func`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Func_3_t009E60D2B88B8B844FB90881977A21CC70E688A4;
// System.Func`4<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Int32,System.Threading.CancellationToken,Cysharp.Threading.Tasks.UniTask`1<System.Boolean>>
struct Func_4_tF93ECE3EA04524D51581605A88C2F9D79F7DA1E4;
// System.Func`4<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Threading.CancellationToken,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>
struct Func_4_tACF12340039B5BCFBB5ED953C0B2BF68B8F74D25;
// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct IUniTaskAsyncEnumerable_1_tB465D2725680B21CF3074178AECADD1D24C24A74;
// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct IUniTaskAsyncEnumerator_1_t256C7409E6B13FF3224A57D2DD1A4D52A2C40092;
// Cysharp.Threading.Tasks.IUniTaskSource`1<System.Boolean>
struct IUniTaskSource_1_tB6B218F9BB467453A6CBAEE053820D3B3E8F891C;
// Cysharp.Threading.Tasks.IUniTaskSource`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct IUniTaskSource_1_tA27C284FF17E3AAB5B5D07A7E4DE207B56F764AB;
// Cysharp.Threading.Tasks.Linq.WhereAwaitWithCancellation`1/_WhereAwaitWithCancellation<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct _WhereAwaitWithCancellation_tBCE366084F0BD7BB687FC12E681ECB51D37A668C;
// Cysharp.Threading.Tasks.Linq.WhereIntAwaitWithCancellation`1/_WhereAwaitWithCancellation<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct _WhereAwaitWithCancellation_t828878D89A27EB05453341BABA46E006A06A87C3;
// Cysharp.Threading.Tasks.Linq.Zip`3/_Zip<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct _Zip_t91BE51D1FCE74057D53C01DC054BE4A353339622;
// Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct _ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE;
// Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct _ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Exception
struct Exception_t;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise
struct IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B;
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
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AwaiterActions_t5D05CAC006FDEBCF6B65E2B9224BC4B44783BBE5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_UnsafeOnCompleted_mBDEF2230B6966964029FACE6B3F1B7DEE7D6A90A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTaskCompletionSourceCore_1_TrySetCanceled_mD66F5F925074EA6E22B0422A10F073A1447C7168_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _WhereAwaitWithCancellation_MoveNext_m69D268D3E8A0A50E2E3086215CAE13817E4360E1_RuntimeMethod_var;
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

// Cysharp.Threading.Tasks.AwaiterActions
struct AwaiterActions_t5D05CAC006FDEBCF6B65E2B9224BC4B44783BBE5  : public RuntimeObject
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

// Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
typedef Il2CppFullySharedGenericStruct UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483;

// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder
struct AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 
{
	// Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::runnerPromise
	RuntimeObject* ___runnerPromise_0;
	// System.Exception Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::ex
	Exception_t* ___ex_1;
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

// Cysharp.Threading.Tasks.Linq.Zip`3/_Zip/<DisposeAsync>d__18<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct U3CDisposeAsyncU3Ed__18_tC188752CD4DB8F4F952875C44DD9980B06D167E3 
{
	// System.Int32 Cysharp.Threading.Tasks.Linq.Zip`3/_Zip/<DisposeAsync>d__18::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder Cysharp.Threading.Tasks.Linq.Zip`3/_Zip/<DisposeAsync>d__18::<>t__builder
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 ___U3CU3Et__builder_1;
	// Cysharp.Threading.Tasks.Linq.Zip`3/_Zip<TFirst,TSecond,TResult> Cysharp.Threading.Tasks.Linq.Zip`3/_Zip/<DisposeAsync>d__18::<>4__this
	_Zip_t91BE51D1FCE74057D53C01DC054BE4A353339622* ___U3CU3E4__this_2;
	// Cysharp.Threading.Tasks.UniTask/Awaiter Cysharp.Threading.Tasks.Linq.Zip`3/_Zip/<DisposeAsync>d__18::<>u__1
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__1_3;
};

// Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation/<DisposeAsync>d__21<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct U3CDisposeAsyncU3Ed__21_tAF4A35DE6FCC10CB592383716B6B90BB07B2020F 
{
	// System.Int32 Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation/<DisposeAsync>d__21::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation/<DisposeAsync>d__21::<>t__builder
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 ___U3CU3Et__builder_1;
	// Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation<TFirst,TSecond,TResult> Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation/<DisposeAsync>d__21::<>4__this
	_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD* ___U3CU3E4__this_2;
	// Cysharp.Threading.Tasks.UniTask/Awaiter Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation/<DisposeAsync>d__21::<>u__1
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__1_3;
};

// Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait/<DisposeAsync>d__21<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct U3CDisposeAsyncU3Ed__21_t5D9637B25772A807FA1261F4A8EE36BA5CD7B716 
{
	// System.Int32 Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait/<DisposeAsync>d__21::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait/<DisposeAsync>d__21::<>t__builder
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 ___U3CU3Et__builder_1;
	// Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait<TFirst,TSecond,TResult> Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait/<DisposeAsync>d__21::<>4__this
	_ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE* ___U3CU3E4__this_2;
	// Cysharp.Threading.Tasks.UniTask/Awaiter Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait/<DisposeAsync>d__21::<>u__1
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__1_3;
};

// Cysharp.Threading.Tasks.Linq.WhereAwaitWithCancellation`1/_WhereAwaitWithCancellation<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct _WhereAwaitWithCancellation_tBCE366084F0BD7BB687FC12E681ECB51D37A668C : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5 {};

// Cysharp.Threading.Tasks.Linq.WhereIntAwaitWithCancellation`1/_WhereAwaitWithCancellation<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct _WhereAwaitWithCancellation_t828878D89A27EB05453341BABA46E006A06A87C3 : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5 {};

// Cysharp.Threading.Tasks.Linq.Zip`3/_Zip<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct _Zip_t91BE51D1FCE74057D53C01DC054BE4A353339622 : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5 {};

// Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct _ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5 {};

// Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct _ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD : public MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5 {};

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

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99  : public MulticastDelegate_t
{
};

// System.Func`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Threading.CancellationToken,Cysharp.Threading.Tasks.UniTask`1<System.Boolean>>
struct Func_3_t53018F4F6199ADCA7207839DDA0D824E89C5C814  : public MulticastDelegate_t
{
};

// System.Func`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>
struct Func_3_t025EADE05AD46B78D6372153E7AB6141B48C6D40  : public MulticastDelegate_t
{
};

// System.Func`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Func_3_t009E60D2B88B8B844FB90881977A21CC70E688A4  : public MulticastDelegate_t
{
};

// System.Func`4<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Int32,System.Threading.CancellationToken,Cysharp.Threading.Tasks.UniTask`1<System.Boolean>>
struct Func_4_tF93ECE3EA04524D51581605A88C2F9D79F7DA1E4  : public MulticastDelegate_t
{
};

// System.Func`4<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Threading.CancellationToken,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>
struct Func_4_tACF12340039B5BCFBB5ED953C0B2BF68B8F74D25  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// Cysharp.Threading.Tasks.AwaiterActions
struct AwaiterActions_t5D05CAC006FDEBCF6B65E2B9224BC4B44783BBE5_StaticFields
{
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.AwaiterActions::InvokeContinuationDelegate
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___InvokeContinuationDelegate_0;
};

// Cysharp.Threading.Tasks.AwaiterActions

// Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.Boolean>

// Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.Boolean>

// Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// Cysharp.Threading.Tasks.UniTask`1<System.Boolean>

// Cysharp.Threading.Tasks.UniTask`1<System.Boolean>

// Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder

// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder

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

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// Cysharp.Threading.Tasks.MoveNextSource

// Cysharp.Threading.Tasks.MoveNextSource

// Cysharp.Threading.Tasks.Linq.Zip`3/_Zip/<DisposeAsync>d__18<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// Cysharp.Threading.Tasks.Linq.Zip`3/_Zip/<DisposeAsync>d__18<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation/<DisposeAsync>d__21<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation/<DisposeAsync>d__21<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait/<DisposeAsync>d__21<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait/<DisposeAsync>d__21<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// Cysharp.Threading.Tasks.Linq.WhereAwaitWithCancellation`1/_WhereAwaitWithCancellation<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// Cysharp.Threading.Tasks.Linq.WhereAwaitWithCancellation`1/_WhereAwaitWithCancellation<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// Cysharp.Threading.Tasks.Linq.WhereIntAwaitWithCancellation`1/_WhereAwaitWithCancellation<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// Cysharp.Threading.Tasks.Linq.WhereIntAwaitWithCancellation`1/_WhereAwaitWithCancellation<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// Cysharp.Threading.Tasks.Linq.Zip`3/_Zip<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct _Zip_t91BE51D1FCE74057D53C01DC054BE4A353339622_StaticFields
{
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.Linq.Zip`3/_Zip::firstMoveNextCoreDelegate
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___firstMoveNextCoreDelegate_1;
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.Linq.Zip`3/_Zip::secondMoveNextCoreDelegate
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___secondMoveNextCoreDelegate_2;
};

// Cysharp.Threading.Tasks.Linq.Zip`3/_Zip<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct _ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE_StaticFields
{
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait::firstMoveNextCoreDelegate
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___firstMoveNextCoreDelegate_1;
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait::secondMoveNextCoreDelegate
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___secondMoveNextCoreDelegate_2;
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait::resultAwaitCoreDelegate
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___resultAwaitCoreDelegate_3;
};

// Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct _ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD_StaticFields
{
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation::firstMoveNextCoreDelegate
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___firstMoveNextCoreDelegate_1;
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation::secondMoveNextCoreDelegate
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___secondMoveNextCoreDelegate_2;
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation::resultAwaitCoreDelegate
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___resultAwaitCoreDelegate_3;
};

// Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Action`1<System.Object>

// System.Action`1<System.Object>

// System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Func`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Threading.CancellationToken,Cysharp.Threading.Tasks.UniTask`1<System.Boolean>>

// System.Func`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Threading.CancellationToken,Cysharp.Threading.Tasks.UniTask`1<System.Boolean>>

// System.Func`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>

// System.Func`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>

// System.Func`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Func`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Func`4<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Int32,System.Threading.CancellationToken,Cysharp.Threading.Tasks.UniTask`1<System.Boolean>>

// System.Func`4<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Int32,System.Threading.CancellationToken,Cysharp.Threading.Tasks.UniTask`1<System.Boolean>>

// System.Func`4<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Threading.CancellationToken,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>

// System.Func`4<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Threading.CancellationToken,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>

// System.Action

// System.Action
#ifdef __clang__
#pragma clang diagnostic pop
#endif


// System.Void Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniTaskCompletionSourceCore_1_Reset_m788665B21E38E2A5451D5A30194E957469083C5C_gshared (UniTaskCompletionSourceCore_1_t146409427AB3F018819917FFA1FDC70FDB5C0BBF* __this, const RuntimeMethod* method) ;
// System.Int16 Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Version()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int16_t UniTaskCompletionSourceCore_1_get_Version_mC206FEA615DEB3676B72991ABAE79848523CAC0B_gshared_inline (UniTaskCompletionSourceCore_1_t146409427AB3F018819917FFA1FDC70FDB5C0BBF* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(Cysharp.Threading.Tasks.IUniTaskSource`1<T>,System.Int16)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UniTask_1__ctor_m608BBDBA054799FF72D4ED7758DA9BA32EBB8F22_gshared_inline (UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483* __this, RuntimeObject* ___0_source, int16_t ___1_token, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTask`1/Awaiter<T> Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::GetAwaiter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UniTask_1_GetAwaiter_mEC480E8F8586214E6ECD880FBFAA9C8CB1C963ED_gshared_inline (UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483* __this, Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* il2cppRetVal, const RuntimeMethod* method) ;
// System.Boolean Cysharp.Threading.Tasks.UniTask`1/Awaiter<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_IsCompleted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m22B365903CC1BE835CA1126FE3BD3E71156DDFA8_gshared_inline (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.UniTask`1/Awaiter<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::UnsafeOnCompleted(System.Action)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_UnsafeOnCompleted_m9BA083B1ED6E4385066B9A863135A587D4260E32_gshared_inline (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_continuation, const RuntimeMethod* method) ;
// T Cysharp.Threading.Tasks.UniTask`1/Awaiter<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::GetResult()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_GetResult_mFF0CF33768E54ACB5D4D4F47A4A6FE3DB29EE6D8_gshared_inline (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Boolean Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::TrySetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniTaskCompletionSourceCore_1_TrySetException_mF9AB6AE834A9D074A3E16E3C6B7E7821DA5936AB_gshared (UniTaskCompletionSourceCore_1_t146409427AB3F018819917FFA1FDC70FDB5C0BBF* __this, Exception_t* ___0_error, const RuntimeMethod* method) ;
// System.Boolean Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::TrySetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniTaskCompletionSourceCore_1_TrySetResult_m7DA02F53706893C67B6747B3F95C9B82D0946D40_gshared (UniTaskCompletionSourceCore_1_t146409427AB3F018819917FFA1FDC70FDB5C0BBF* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_result, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.UniTask`1/Awaiter<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::SourceOnCompleted(System.Action`1<System.Object>,System.Object)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_SourceOnCompleted_m7BB8B4D6B70376483D828F7D3BEE03C2C33602E0_gshared_inline (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_continuation, RuntimeObject* ___1_state, const RuntimeMethod* method) ;
// System.Boolean Cysharp.Threading.Tasks.MoveNextSource::TryGetResult<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(Cysharp.Threading.Tasks.UniTask`1/Awaiter<T>,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MoveNextSource_TryGetResult_TisIl2CppFullySharedGenericAny_m10DB6BDDD146B453567FBEBBD1EF37BF65864E21_gshared (MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5* __this, /*Cysharp.Threading.Tasks.UniTask`1/Awaiter<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C ___0_awaiter, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___1_result, const RuntimeMethod* method) ;
// System.Boolean Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::TrySetCanceled(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniTaskCompletionSourceCore_1_TrySetCanceled_mEA4B7341003C6B1365405F43730371BF3D935E14_gshared (UniTaskCompletionSourceCore_1_t146409427AB3F018819917FFA1FDC70FDB5C0BBF* __this, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, const RuntimeMethod* method) ;
// System.Void System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m685A441EC9FAC9D554B26FA83A08F4BEF96DFF0E_gshared (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.UniTask`1/Awaiter<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(Cysharp.Threading.Tasks.UniTask`1<T>&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_m75F3F14568F9463778CE7429585D539E87F226F3_gshared_inline (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* __this, /*Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>&*/UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483* ___0_task, const RuntimeMethod* method) ;
// System.Void System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m5A038831CEB84A7E374FE59D43444412629F833F_gshared_inline (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_obj, const RuntimeMethod* method) ;

// System.Void Cysharp.Threading.Tasks.MoveNextSource::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveNextSource__ctor_mAD2FB060DAA5FB4AC333260F502B4FD563133640 (MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5* __this, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.Boolean>::Reset()
inline void UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* __this, const RuntimeMethod* method)
{
	((  void (*) (UniTaskCompletionSourceCore_1_t146409427AB3F018819917FFA1FDC70FDB5C0BBF*, const RuntimeMethod*))UniTaskCompletionSourceCore_1_Reset_m788665B21E38E2A5451D5A30194E957469083C5C_gshared)((UniTaskCompletionSourceCore_1_t146409427AB3F018819917FFA1FDC70FDB5C0BBF*)__this, method);
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
// System.Void Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean>::UnsafeOnCompleted(System.Action)
inline void Awaiter_UnsafeOnCompleted_mBDEF2230B6966964029FACE6B3F1B7DEE7D6A90A_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_continuation, const RuntimeMethod* method)
{
	((  void (*) (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*, const RuntimeMethod*))Awaiter_UnsafeOnCompleted_m9BA083B1ED6E4385066B9A863135A587D4260E32_gshared_inline)((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)__this, ___0_continuation, method);
}
// T Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean>::GetResult()
inline bool Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, const RuntimeMethod* method)
{
	bool il2cppRetVal;
	((  void (*) (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Awaiter_GetResult_mFF0CF33768E54ACB5D4D4F47A4A6FE3DB29EE6D8_gshared_inline)((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Boolean Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.Boolean>::TrySetException(System.Exception)
inline bool UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6 (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* __this, Exception_t* ___0_error, const RuntimeMethod* method)
{
	return ((  bool (*) (UniTaskCompletionSourceCore_1_t146409427AB3F018819917FFA1FDC70FDB5C0BBF*, Exception_t*, const RuntimeMethod*))UniTaskCompletionSourceCore_1_TrySetException_mF9AB6AE834A9D074A3E16E3C6B7E7821DA5936AB_gshared)((UniTaskCompletionSourceCore_1_t146409427AB3F018819917FFA1FDC70FDB5C0BBF*)__this, ___0_error, method);
}
// System.Boolean Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.Boolean>::TrySetResult(TResult)
inline bool UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037 (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* __this, bool ___0_result, const RuntimeMethod* method)
{
	return ((  bool (*) (UniTaskCompletionSourceCore_1_t146409427AB3F018819917FFA1FDC70FDB5C0BBF*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))UniTaskCompletionSourceCore_1_TrySetResult_m7DA02F53706893C67B6747B3F95C9B82D0946D40_gshared)((UniTaskCompletionSourceCore_1_t146409427AB3F018819917FFA1FDC70FDB5C0BBF*)__this, (Il2CppFullySharedGenericAny)&___0_result, method);
}
// System.Void Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean>::SourceOnCompleted(System.Action`1<System.Object>,System.Object)
inline void Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_inline (Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_continuation, RuntimeObject* ___1_state, const RuntimeMethod* method)
{
	((  void (*) (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, const RuntimeMethod*))Awaiter_SourceOnCompleted_m7BB8B4D6B70376483D828F7D3BEE03C2C33602E0_gshared_inline)((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)__this, ___0_continuation, ___1_state, method);
}
// System.Boolean Cysharp.Threading.Tasks.MoveNextSource::TryGetResult<System.Boolean>(Cysharp.Threading.Tasks.UniTask`1/Awaiter<T>,T&)
inline bool MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1 (MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5* __this, Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___0_awaiter, bool* ___1_result, const RuntimeMethod* method)
{
	return ((  bool (*) (MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*, /*Cysharp.Threading.Tasks.UniTask`1/Awaiter<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, const RuntimeMethod*))MoveNextSource_TryGetResult_TisIl2CppFullySharedGenericAny_m10DB6BDDD146B453567FBEBBD1EF37BF65864E21_gshared)((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this, (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C)&___0_awaiter, (Il2CppFullySharedGenericAny*)___1_result, method);
}
// System.Boolean System.Threading.CancellationToken::get_IsCancellationRequested()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350 (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* __this, const RuntimeMethod* method) ;
// System.Boolean Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.Boolean>::TrySetCanceled(System.Threading.CancellationToken)
inline bool UniTaskCompletionSourceCore_1_TrySetCanceled_mD66F5F925074EA6E22B0422A10F073A1447C7168 (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* __this, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, const RuntimeMethod* method)
{
	return ((  bool (*) (UniTaskCompletionSourceCore_1_t146409427AB3F018819917FFA1FDC70FDB5C0BBF*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))UniTaskCompletionSourceCore_1_TrySetCanceled_mEA4B7341003C6B1365405F43730371BF3D935E14_gshared)((UniTaskCompletionSourceCore_1_t146409427AB3F018819917FFA1FDC70FDB5C0BBF*)__this, ___0_cancellationToken, method);
}
// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::Create()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 AsyncUniTaskMethodBuilder_Create_m882DFD5EE004FF6F84F182A3AC170AEDCA8C5327_inline (const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::get_Task()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 AsyncUniTaskMethodBuilder_get_Task_m11E43D69C4F85EB23AAC58143DE695309D1022EC_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4 (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m685A441EC9FAC9D554B26FA83A08F4BEF96DFF0E_gshared)((Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*)__this, ___0_object, ___1_method, method);
}
// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.UniTask::FromException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 UniTask_FromException_mC6AC508C727D591C6BE908F2014570963CE9E5EE (Exception_t* ___0_ex, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.UniTask`1/Awaiter<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(Cysharp.Threading.Tasks.UniTask`1<T>&)
inline void Awaiter__ctor_m75F3F14568F9463778CE7429585D539E87F226F3_inline (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* __this, /*Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>&*/UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483* ___0_task, const RuntimeMethod* method)
{
	((  void (*) (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*, /*Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>&*/UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*, const RuntimeMethod*))Awaiter__ctor_m75F3F14568F9463778CE7429585D539E87F226F3_gshared_inline)((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)__this, ___0_task, method);
}
// System.Boolean Cysharp.Threading.Tasks.UniTaskStatusExtensions::IsCompleted(Cysharp.Threading.Tasks.UniTaskStatus)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UniTaskStatusExtensions_IsCompleted_mF43C41C9CEB640E381D1F7A8B40142843AED87AE_inline (int32_t ___0_status, const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
inline void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Action_1_Invoke_m5A038831CEB84A7E374FE59D43444412629F833F_gshared_inline)((Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*)__this, (Il2CppFullySharedGenericAny)___0_obj, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Cysharp.Threading.Tasks.Linq.WhereAwaitWithCancellation`1/_WhereAwaitWithCancellation<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TSource>,System.Func`3<TSource,System.Threading.CancellationToken,Cysharp.Threading.Tasks.UniTask`1<System.Boolean>>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WhereAwaitWithCancellation__ctor_mE8D2DB6243CF6C70D6BF4DB4893E6639C28E06C0_gshared (/*Cysharp.Threading.Tasks.Linq.WhereAwaitWithCancellation`1/_WhereAwaitWithCancellation<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/_WhereAwaitWithCancellation_tBCE366084F0BD7BB687FC12E681ECB51D37A668C* __this, RuntimeObject* ___0_source, Func_3_t53018F4F6199ADCA7207839DDA0D824E89C5C814* ___1_predicate, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// int state = -1;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),3), (-1));
		// public _WhereAwaitWithCancellation(IUniTaskAsyncEnumerable<TSource> source, Func<TSource, CancellationToken, UniTask<bool>> predicate, CancellationToken cancellationToken)
		MoveNextSource__ctor_mAD2FB060DAA5FB4AC333260F502B4FD563133640((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this, NULL);
		// this.source = source;
		RuntimeObject* L_0 = ___0_source;
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),0), L_0);
		// this.predicate = predicate;
		Func_3_t53018F4F6199ADCA7207839DDA0D824E89C5C814* L_1 = ___1_predicate;
		il2cpp_codegen_write_instance_field_data<Func_3_t53018F4F6199ADCA7207839DDA0D824E89C5C814*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),1), L_1);
		// this.cancellationToken = cancellationToken;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_2 = ___2_cancellationToken;
		il2cpp_codegen_write_instance_field_data<CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),2), L_2);
		// this.moveNextAction = MoveNext;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_3, (RuntimeObject*)__this, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 3)), NULL);
		il2cpp_codegen_write_instance_field_data<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),7), L_3);
		// }
		return;
	}
}
// TSource Cysharp.Threading.Tasks.Linq.WhereAwaitWithCancellation`1/_WhereAwaitWithCancellation<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WhereAwaitWithCancellation_get_Current_mBE5B7F7A113A55845FB8E087A38FBDF28BB09363_gshared (/*Cysharp.Threading.Tasks.Linq.WhereAwaitWithCancellation`1/_WhereAwaitWithCancellation<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/_WhereAwaitWithCancellation_tBCE366084F0BD7BB687FC12E681ECB51D37A668C* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	// sizeof(TSource)
	const uint32_t SizeOf_TSource_tEA088522117F8DCC8C879451177AD1D72096ABAB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
	// TSource
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TSource_tEA088522117F8DCC8C879451177AD1D72096ABAB);
	{
		// public TSource Current { get; private set; }
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),8)), SizeOf_TSource_tEA088522117F8DCC8C879451177AD1D72096ABAB);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TSource_tEA088522117F8DCC8C879451177AD1D72096ABAB);
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.WhereAwaitWithCancellation`1/_WhereAwaitWithCancellation<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::set_Current(TSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WhereAwaitWithCancellation_set_Current_m3F8CBFB3E156CF9EF8D0FA3E8C97F8157EE50B35_gshared (/*Cysharp.Threading.Tasks.Linq.WhereAwaitWithCancellation`1/_WhereAwaitWithCancellation<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/_WhereAwaitWithCancellation_tBCE366084F0BD7BB687FC12E681ECB51D37A668C* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	// sizeof(TSource)
	const uint32_t SizeOf_TSource_tEA088522117F8DCC8C879451177AD1D72096ABAB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
	// TSource
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TSource_tEA088522117F8DCC8C879451177AD1D72096ABAB);
	{
		// public TSource Current { get; private set; }
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 4)) ? ___0_value : &___0_value), SizeOf_TSource_tEA088522117F8DCC8C879451177AD1D72096ABAB);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),8), L_0, SizeOf_TSource_tEA088522117F8DCC8C879451177AD1D72096ABAB);
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.Linq.WhereAwaitWithCancellation`1/_WhereAwaitWithCancellation<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::MoveNextAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 _WhereAwaitWithCancellation_MoveNextAsync_m644404E70E7FCAEF2F7F60E0CE36A0F2F2104B05_gshared (/*Cysharp.Threading.Tasks.Linq.WhereAwaitWithCancellation`1/_WhereAwaitWithCancellation<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/_WhereAwaitWithCancellation_tBCE366084F0BD7BB687FC12E681ECB51D37A668C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (state == -2) return default;
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),3));
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0014;
		}
	}
	{
		// if (state == -2) return default;
		il2cpp_codegen_initobj((&V_0), sizeof(UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949));
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_1 = V_0;
		return L_1;
	}

IL_0014:
	{
		// completionSource.Reset();
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_2 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource_0);
		UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D(L_2, UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D_RuntimeMethod_var);
		// MoveNext();
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)), il2cpp_rgctx_method(method->klass->rgctx_data, 3), __this);
		// return new UniTask<bool>(this, completionSource.Version);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_3 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource_0);
		int16_t L_4;
		L_4 = UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_inline(L_3, UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_RuntimeMethod_var);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_5;
		memset((&L_5), 0, sizeof(L_5));
		UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_inline((&L_5), (RuntimeObject*)__this, L_4, /*hidden argument*/UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_RuntimeMethod_var);
		return L_5;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.WhereAwaitWithCancellation`1/_WhereAwaitWithCancellation<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WhereAwaitWithCancellation_MoveNext_m44CD9A72ACC9A375BE8989CF0F6B3EA286C3ADF5_gshared (/*Cysharp.Threading.Tasks.Linq.WhereAwaitWithCancellation`1/_WhereAwaitWithCancellation<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/_WhereAwaitWithCancellation_tBCE366084F0BD7BB687FC12E681ECB51D37A668C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_UnsafeOnCompleted_mBDEF2230B6966964029FACE6B3F1B7DEE7D6A90A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	// TSource
	// sizeof(TSource)
	const uint32_t SizeOf_TSource_tEA088522117F8DCC8C879451177AD1D72096ABAB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TSource_tEA088522117F8DCC8C879451177AD1D72096ABAB);
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_TSource_tEA088522117F8DCC8C879451177AD1D72096ABAB);
	int32_t V_0 = 0;
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;

IL_0000:
	{
	}
	try
	{// begin try (depth: 1)
		{
			// switch (state)
			int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),3));
			V_0 = L_0;
			int32_t L_1 = V_0;
			switch (((int32_t)il2cpp_codegen_subtract(L_1, (-1))))
			{
				case 0:
				{
					goto IL_0025_1;
				}
				case 1:
				{
					goto IL_003c_1;
				}
				case 2:
				{
					goto IL_007f_1;
				}
				case 3:
				{
					goto IL_00eb_1;
				}
			}
		}
		{
			goto IL_0106_1;
		}

IL_0025_1:
		{
			// enumerator = source.GetAsyncEnumerator(cancellationToken);
			RuntimeObject* L_2 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),0));
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),2));
			NullCheck(L_2);
			RuntimeObject* L_4;
			L_4 = InterfaceFuncInvoker1Invoker< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0 /* Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<T> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::GetAsyncEnumerator(System.Threading.CancellationToken) */, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_2, L_3);
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),4), L_4);
		}

IL_003c_1:
		{
			// awaiter = enumerator.MoveNextAsync().GetAwaiter();
			RuntimeObject* L_5 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),4));
			NullCheck(L_5);
			UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_6;
			L_6 = InterfaceFuncInvoker0Invoker< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1 /* Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::MoveNextAsync() */, il2cpp_rgctx_data(method->klass->rgctx_data, 6), L_5);
			V_1 = L_6;
			Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_7;
			L_7 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_1), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
			il2cpp_codegen_write_instance_field_data<Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),5), L_7);
			// if (awaiter.IsCompleted)
			bool L_8;
			L_8 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),5)))), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
			if (L_8)
			{
				goto IL_007f_1;
			}
		}
		{
			// state = 1;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),3), 1);
			// awaiter.UnsafeOnCompleted(moveNextAction);
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = *(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),7));
			Awaiter_UnsafeOnCompleted_mBDEF2230B6966964029FACE6B3F1B7DEE7D6A90A_inline((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),5)))), L_9, Awaiter_UnsafeOnCompleted_mBDEF2230B6966964029FACE6B3F1B7DEE7D6A90A_RuntimeMethod_var);
			// return;
			goto IL_014b;
		}

IL_007f_1:
		{
			// if (awaiter.GetResult())
			bool L_10;
			L_10 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),5)))), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
			if (!L_10)
			{
				goto IL_00e9_1;
			}
		}
		{
			// Current = enumerator.Current;
			RuntimeObject* L_11 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),4));
			NullCheck(L_11);
			InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0 /* T Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Current() */, il2cpp_rgctx_data(method->klass->rgctx_data, 6), L_11, (Il2CppFullySharedGenericAny*)L_12);
			InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)), il2cpp_rgctx_method(method->klass->rgctx_data, 9), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 4)) ? L_12: *(void**)L_12));
			// awaiter2 = predicate(Current, cancellationToken).GetAwaiter();
			Func_3_t53018F4F6199ADCA7207839DDA0D824E89C5C814* L_13 = *(Func_3_t53018F4F6199ADCA7207839DDA0D824E89C5C814**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),1));
			InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 10), __this, (Il2CppFullySharedGenericAny*)L_14);
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_15 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),2));
			NullCheck(L_13);
			UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_16;
			L_16 = InvokerFuncInvoker2< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949, Il2CppFullySharedGenericAny, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)), il2cpp_rgctx_method(method->klass->rgctx_data, 11), L_13, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 4)) ? L_14: *(void**)L_14), L_15);
			V_1 = L_16;
			Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_17;
			L_17 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_1), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
			il2cpp_codegen_write_instance_field_data<Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),6), L_17);
			// if (awaiter2.IsCompleted)
			bool L_18;
			L_18 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),6)))), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
			if (L_18)
			{
				goto IL_00eb_1;
			}
		}
		{
			// state = 2;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),3), 2);
			// awaiter2.UnsafeOnCompleted(moveNextAction);
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_19 = *(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),7));
			Awaiter_UnsafeOnCompleted_mBDEF2230B6966964029FACE6B3F1B7DEE7D6A90A_inline((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),6)))), L_19, Awaiter_UnsafeOnCompleted_mBDEF2230B6966964029FACE6B3F1B7DEE7D6A90A_RuntimeMethod_var);
			// return;
			goto IL_014b;
		}

IL_00e9_1:
		{
			// goto DONE;
			goto IL_0120;
		}

IL_00eb_1:
		{
			// if (awaiter2.GetResult())
			bool L_20;
			L_20 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),6)))), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
			if (!L_20)
			{
				goto IL_00fa_1;
			}
		}
		{
			// goto CONTINUE;
			goto IL_0136;
		}

IL_00fa_1:
		{
			// state = 0;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),3), 0);
			// goto REPEAT;
			goto IL_0000;
		}

IL_0106_1:
		{
			// goto DONE;
			goto IL_0120;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0108;
		}
		throw e;
	}

CATCH_0108:
	{// begin catch(System.Exception)
		// catch (Exception ex)
		V_2 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// state = -2;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),3), ((int32_t)-2));
		// completionSource.TrySetException(ex);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_21 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource_0);
		Exception_t* L_22 = V_2;
		bool L_23;
		L_23 = UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6(L_21, L_22, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6_RuntimeMethod_var)));
		// return;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_014b;
	}// end catch (depth: 1)

IL_0120:
	{
		// state = -2;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),3), ((int32_t)-2));
		// completionSource.TrySetResult(false);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_24 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource_0);
		bool L_25;
		L_25 = UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037(L_24, (bool)0, UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		// return;
		return;
	}

IL_0136:
	{
		// state = 0;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),3), 0);
		// completionSource.TrySetResult(true);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_26 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource_0);
		bool L_27;
		L_27 = UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037(L_26, (bool)1, UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		// return;
		return;
	}

IL_014b:
	{
		// }
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.Linq.WhereAwaitWithCancellation`1/_WhereAwaitWithCancellation<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::DisposeAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 _WhereAwaitWithCancellation_DisposeAsync_m565B4734A1DA42B4B318165CDCC8C3AE57818B4E_gshared (/*Cysharp.Threading.Tasks.Linq.WhereAwaitWithCancellation`1/_WhereAwaitWithCancellation<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/_WhereAwaitWithCancellation_tBCE366084F0BD7BB687FC12E681ECB51D37A668C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return enumerator.DisposeAsync();
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),4));
		NullCheck((RuntimeObject*)L_0);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_1;
		L_1 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0 /* Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.IUniTaskAsyncDisposable::DisposeAsync() */, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
		return L_1;
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
// System.Void Cysharp.Threading.Tasks.Linq.WhereIntAwaitWithCancellation`1/_WhereAwaitWithCancellation<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TSource>,System.Func`4<TSource,System.Int32,System.Threading.CancellationToken,Cysharp.Threading.Tasks.UniTask`1<System.Boolean>>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WhereAwaitWithCancellation__ctor_m6DD3B9E752176D83924BE13A6083F17B7F28F9F9_gshared (/*Cysharp.Threading.Tasks.Linq.WhereIntAwaitWithCancellation`1/_WhereAwaitWithCancellation<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/_WhereAwaitWithCancellation_t828878D89A27EB05453341BABA46E006A06A87C3* __this, RuntimeObject* ___0_source, Func_4_tF93ECE3EA04524D51581605A88C2F9D79F7DA1E4* ___1_predicate, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// int state = -1;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),3), (-1));
		// public _WhereAwaitWithCancellation(IUniTaskAsyncEnumerable<TSource> source, Func<TSource, int, CancellationToken, UniTask<bool>> predicate, CancellationToken cancellationToken)
		MoveNextSource__ctor_mAD2FB060DAA5FB4AC333260F502B4FD563133640((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this, NULL);
		// this.source = source;
		RuntimeObject* L_0 = ___0_source;
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),0), L_0);
		// this.predicate = predicate;
		Func_4_tF93ECE3EA04524D51581605A88C2F9D79F7DA1E4* L_1 = ___1_predicate;
		il2cpp_codegen_write_instance_field_data<Func_4_tF93ECE3EA04524D51581605A88C2F9D79F7DA1E4*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),1), L_1);
		// this.cancellationToken = cancellationToken;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_2 = ___2_cancellationToken;
		il2cpp_codegen_write_instance_field_data<CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),2), L_2);
		// this.moveNextAction = MoveNext;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_3, (RuntimeObject*)__this, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 3)), NULL);
		il2cpp_codegen_write_instance_field_data<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),7), L_3);
		// }
		return;
	}
}
// TSource Cysharp.Threading.Tasks.Linq.WhereIntAwaitWithCancellation`1/_WhereAwaitWithCancellation<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WhereAwaitWithCancellation_get_Current_m0D34BFD0E7830B3B0892D623A5505D9329DE942C_gshared (/*Cysharp.Threading.Tasks.Linq.WhereIntAwaitWithCancellation`1/_WhereAwaitWithCancellation<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/_WhereAwaitWithCancellation_t828878D89A27EB05453341BABA46E006A06A87C3* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	// sizeof(TSource)
	const uint32_t SizeOf_TSource_tD13D17595335997730FB7B8ED0B67FB3F3408F5D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
	// TSource
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TSource_tD13D17595335997730FB7B8ED0B67FB3F3408F5D);
	{
		// public TSource Current { get; private set; }
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),9)), SizeOf_TSource_tD13D17595335997730FB7B8ED0B67FB3F3408F5D);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TSource_tD13D17595335997730FB7B8ED0B67FB3F3408F5D);
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.WhereIntAwaitWithCancellation`1/_WhereAwaitWithCancellation<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::set_Current(TSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WhereAwaitWithCancellation_set_Current_mE8C045D5987B8C232753235DF433D7D8FB47897D_gshared (/*Cysharp.Threading.Tasks.Linq.WhereIntAwaitWithCancellation`1/_WhereAwaitWithCancellation<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/_WhereAwaitWithCancellation_t828878D89A27EB05453341BABA46E006A06A87C3* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	// sizeof(TSource)
	const uint32_t SizeOf_TSource_tD13D17595335997730FB7B8ED0B67FB3F3408F5D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
	// TSource
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TSource_tD13D17595335997730FB7B8ED0B67FB3F3408F5D);
	{
		// public TSource Current { get; private set; }
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 4)) ? ___0_value : &___0_value), SizeOf_TSource_tD13D17595335997730FB7B8ED0B67FB3F3408F5D);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),9), L_0, SizeOf_TSource_tD13D17595335997730FB7B8ED0B67FB3F3408F5D);
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.Linq.WhereIntAwaitWithCancellation`1/_WhereAwaitWithCancellation<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::MoveNextAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 _WhereAwaitWithCancellation_MoveNextAsync_m89138177FC15D54858D48514545B86A6E4733189_gshared (/*Cysharp.Threading.Tasks.Linq.WhereIntAwaitWithCancellation`1/_WhereAwaitWithCancellation<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/_WhereAwaitWithCancellation_t828878D89A27EB05453341BABA46E006A06A87C3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (state == -2) return default;
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),3));
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0014;
		}
	}
	{
		// if (state == -2) return default;
		il2cpp_codegen_initobj((&V_0), sizeof(UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949));
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_1 = V_0;
		return L_1;
	}

IL_0014:
	{
		// completionSource.Reset();
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_2 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource_0);
		UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D(L_2, UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D_RuntimeMethod_var);
		// MoveNext();
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)), il2cpp_rgctx_method(method->klass->rgctx_data, 3), __this);
		// return new UniTask<bool>(this, completionSource.Version);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_3 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource_0);
		int16_t L_4;
		L_4 = UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_inline(L_3, UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_RuntimeMethod_var);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_5;
		memset((&L_5), 0, sizeof(L_5));
		UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_inline((&L_5), (RuntimeObject*)__this, L_4, /*hidden argument*/UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_RuntimeMethod_var);
		return L_5;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.WhereIntAwaitWithCancellation`1/_WhereAwaitWithCancellation<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WhereAwaitWithCancellation_MoveNext_m69D268D3E8A0A50E2E3086215CAE13817E4360E1_gshared (/*Cysharp.Threading.Tasks.Linq.WhereIntAwaitWithCancellation`1/_WhereAwaitWithCancellation<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/_WhereAwaitWithCancellation_t828878D89A27EB05453341BABA46E006A06A87C3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_UnsafeOnCompleted_mBDEF2230B6966964029FACE6B3F1B7DEE7D6A90A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_WhereAwaitWithCancellation_MoveNext_m69D268D3E8A0A50E2E3086215CAE13817E4360E1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	// TSource
	// sizeof(TSource)
	const uint32_t SizeOf_TSource_tD13D17595335997730FB7B8ED0B67FB3F3408F5D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TSource_tD13D17595335997730FB7B8ED0B67FB3F3408F5D);
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_TSource_tD13D17595335997730FB7B8ED0B67FB3F3408F5D);
	int32_t V_0 = 0;
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;

IL_0000:
	{
	}
	try
	{// begin try (depth: 1)
		{
			// switch (state)
			int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),3));
			V_0 = L_0;
			int32_t L_1 = V_0;
			switch (((int32_t)il2cpp_codegen_subtract(L_1, (-1))))
			{
				case 0:
				{
					goto IL_0025_1;
				}
				case 1:
				{
					goto IL_003c_1;
				}
				case 2:
				{
					goto IL_007f_1;
				}
				case 3:
				{
					goto IL_00fc_1;
				}
			}
		}
		{
			goto IL_0117_1;
		}

IL_0025_1:
		{
			// enumerator = source.GetAsyncEnumerator(cancellationToken);
			RuntimeObject* L_2 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),0));
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),2));
			NullCheck(L_2);
			RuntimeObject* L_4;
			L_4 = InterfaceFuncInvoker1Invoker< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0 /* Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<T> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::GetAsyncEnumerator(System.Threading.CancellationToken) */, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_2, L_3);
			il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),4), L_4);
		}

IL_003c_1:
		{
			// awaiter = enumerator.MoveNextAsync().GetAwaiter();
			RuntimeObject* L_5 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),4));
			NullCheck(L_5);
			UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_6;
			L_6 = InterfaceFuncInvoker0Invoker< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1 /* Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::MoveNextAsync() */, il2cpp_rgctx_data(method->klass->rgctx_data, 6), L_5);
			V_1 = L_6;
			Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_7;
			L_7 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_1), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
			il2cpp_codegen_write_instance_field_data<Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),5), L_7);
			// if (awaiter.IsCompleted)
			bool L_8;
			L_8 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),5)))), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
			if (L_8)
			{
				goto IL_007f_1;
			}
		}
		{
			// state = 1;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),3), 1);
			// awaiter.UnsafeOnCompleted(moveNextAction);
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = *(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),7));
			Awaiter_UnsafeOnCompleted_mBDEF2230B6966964029FACE6B3F1B7DEE7D6A90A_inline((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),5)))), L_9, Awaiter_UnsafeOnCompleted_mBDEF2230B6966964029FACE6B3F1B7DEE7D6A90A_RuntimeMethod_var);
			// return;
			goto IL_015c;
		}

IL_007f_1:
		{
			// if (awaiter.GetResult())
			bool L_10;
			L_10 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),5)))), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
			if (!L_10)
			{
				goto IL_00fa_1;
			}
		}
		{
			// Current = enumerator.Current;
			RuntimeObject* L_11 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),4));
			NullCheck(L_11);
			InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0 /* T Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Current() */, il2cpp_rgctx_data(method->klass->rgctx_data, 6), L_11, (Il2CppFullySharedGenericAny*)L_12);
			InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)), il2cpp_rgctx_method(method->klass->rgctx_data, 9), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 4)) ? L_12: *(void**)L_12));
			// awaiter2 = predicate(Current, checked(index++), cancellationToken).GetAwaiter();
			Func_4_tF93ECE3EA04524D51581605A88C2F9D79F7DA1E4* L_13 = *(Func_4_tF93ECE3EA04524D51581605A88C2F9D79F7DA1E4**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),1));
			InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 10), __this, (Il2CppFullySharedGenericAny*)L_14);
			int32_t L_15 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),8));
			V_2 = L_15;
			int32_t L_16 = V_2;
			if (((int64_t)L_16 + (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_16 + (int64_t)1 > (int64_t)kIl2CppInt32Max))
				IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), _WhereAwaitWithCancellation_MoveNext_m69D268D3E8A0A50E2E3086215CAE13817E4360E1_RuntimeMethod_var);
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),8), ((int32_t)il2cpp_codegen_add(L_16, 1)));
			int32_t L_17 = V_2;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_18 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),2));
			NullCheck(L_13);
			UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_19;
			L_19 = InvokerFuncInvoker3< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949, Il2CppFullySharedGenericAny, int32_t, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)), il2cpp_rgctx_method(method->klass->rgctx_data, 11), L_13, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 4)) ? L_14: *(void**)L_14), L_17, L_18);
			V_1 = L_19;
			Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_20;
			L_20 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_1), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
			il2cpp_codegen_write_instance_field_data<Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),6), L_20);
			// if (awaiter2.IsCompleted)
			bool L_21;
			L_21 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),6)))), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
			if (L_21)
			{
				goto IL_00fc_1;
			}
		}
		{
			// state = 2;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),3), 2);
			// awaiter2.UnsafeOnCompleted(moveNextAction);
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_22 = *(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),7));
			Awaiter_UnsafeOnCompleted_mBDEF2230B6966964029FACE6B3F1B7DEE7D6A90A_inline((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),6)))), L_22, Awaiter_UnsafeOnCompleted_mBDEF2230B6966964029FACE6B3F1B7DEE7D6A90A_RuntimeMethod_var);
			// return;
			goto IL_015c;
		}

IL_00fa_1:
		{
			// goto DONE;
			goto IL_0131;
		}

IL_00fc_1:
		{
			// if (awaiter2.GetResult())
			bool L_23;
			L_23 = Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_inline((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),6)))), Awaiter_GetResult_m12A718C80AFA0EC23C7AE6222CCCA99E1A6C50BF_RuntimeMethod_var);
			if (!L_23)
			{
				goto IL_010b_1;
			}
		}
		{
			// goto CONTINUE;
			goto IL_0147;
		}

IL_010b_1:
		{
			// state = 0;
			il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),3), 0);
			// goto REPEAT;
			goto IL_0000;
		}

IL_0117_1:
		{
			// goto DONE;
			goto IL_0131;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0119;
		}
		throw e;
	}

CATCH_0119:
	{// begin catch(System.Exception)
		// catch (Exception ex)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// state = -2;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),3), ((int32_t)-2));
		// completionSource.TrySetException(ex);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_24 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource_0);
		Exception_t* L_25 = V_3;
		bool L_26;
		L_26 = UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6(L_24, L_25, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6_RuntimeMethod_var)));
		// return;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_015c;
	}// end catch (depth: 1)

IL_0131:
	{
		// state = -2;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),3), ((int32_t)-2));
		// completionSource.TrySetResult(false);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_27 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource_0);
		bool L_28;
		L_28 = UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037(L_27, (bool)0, UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		// return;
		return;
	}

IL_0147:
	{
		// state = 0;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),3), 0);
		// completionSource.TrySetResult(true);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_29 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource_0);
		bool L_30;
		L_30 = UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037(L_29, (bool)1, UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		// return;
		return;
	}

IL_015c:
	{
		// }
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.Linq.WhereIntAwaitWithCancellation`1/_WhereAwaitWithCancellation<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::DisposeAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 _WhereAwaitWithCancellation_DisposeAsync_m531DA7D68DBC74B5DDCA68CD356B88E27D6AEBD8_gshared (/*Cysharp.Threading.Tasks.Linq.WhereIntAwaitWithCancellation`1/_WhereAwaitWithCancellation<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/_WhereAwaitWithCancellation_t828878D89A27EB05453341BABA46E006A06A87C3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return enumerator.DisposeAsync();
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),4));
		NullCheck((RuntimeObject*)L_0);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_1;
		L_1 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(0 /* Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.IUniTaskAsyncDisposable::DisposeAsync() */, IUniTaskAsyncDisposable_t33F187CE6EC127497917A2DC7829B51E0B2441C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
		return L_1;
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
// System.Void Cysharp.Threading.Tasks.Linq.Zip`3/_Zip<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TFirst>,Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TSecond>,System.Func`3<TFirst,TSecond,TResult>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Zip__ctor_mB692F6213BAA8EBED4D8005D652800B0485975D8_gshared (/*Cysharp.Threading.Tasks.Linq.Zip`3/_Zip<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/_Zip_t91BE51D1FCE74057D53C01DC054BE4A353339622* __this, RuntimeObject* ___0_first, RuntimeObject* ___1_second, Func_3_t009E60D2B88B8B844FB90881977A21CC70E688A4* ___2_resultSelector, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___3_cancellationToken, const RuntimeMethod* method) 
{
	{
		// public _Zip(IUniTaskAsyncEnumerable<TFirst> first, IUniTaskAsyncEnumerable<TSecond> second, Func<TFirst, TSecond, TResult> resultSelector, CancellationToken cancellationToken)
		MoveNextSource__ctor_mAD2FB060DAA5FB4AC333260F502B4FD563133640((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this, NULL);
		// this.first = first;
		RuntimeObject* L_0 = ___0_first;
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 1),2), L_0);
		// this.second = second;
		RuntimeObject* L_1 = ___1_second;
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 1),3), L_1);
		// this.resultSelector = resultSelector;
		Func_3_t009E60D2B88B8B844FB90881977A21CC70E688A4* L_2 = ___2_resultSelector;
		il2cpp_codegen_write_instance_field_data<Func_3_t009E60D2B88B8B844FB90881977A21CC70E688A4*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 1),4), L_2);
		// this.cancellationToken = cancellationToken;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = ___3_cancellationToken;
		il2cpp_codegen_write_instance_field_data<CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 1),5), L_3);
		// }
		return;
	}
}
// TResult Cysharp.Threading.Tasks.Linq.Zip`3/_Zip<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Zip_get_Current_m62910938E588D5086952BA94CFCAA873D0059F55_gshared (/*Cysharp.Threading.Tasks.Linq.Zip`3/_Zip<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/_Zip_t91BE51D1FCE74057D53C01DC054BE4A353339622* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	// sizeof(TResult)
	const uint32_t SizeOf_TResult_tCEBEAA634EC957A43B6969D31A968F0C158A5B59 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
	// TResult
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TResult_tCEBEAA634EC957A43B6969D31A968F0C158A5B59);
	{
		// public TResult Current { get; private set; }
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 1),10)), SizeOf_TResult_tCEBEAA634EC957A43B6969D31A968F0C158A5B59);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TResult_tCEBEAA634EC957A43B6969D31A968F0C158A5B59);
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.Zip`3/_Zip<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::set_Current(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Zip_set_Current_mBD4E5B43D994136DCB4D57369DD45C1EC625FE7D_gshared (/*Cysharp.Threading.Tasks.Linq.Zip`3/_Zip<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/_Zip_t91BE51D1FCE74057D53C01DC054BE4A353339622* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	// sizeof(TResult)
	const uint32_t SizeOf_TResult_tCEBEAA634EC957A43B6969D31A968F0C158A5B59 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
	// TResult
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TResult_tCEBEAA634EC957A43B6969D31A968F0C158A5B59);
	{
		// public TResult Current { get; private set; }
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 4)) ? ___0_value : &___0_value), SizeOf_TResult_tCEBEAA634EC957A43B6969D31A968F0C158A5B59);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 1),10), L_0, SizeOf_TResult_tCEBEAA634EC957A43B6969D31A968F0C158A5B59);
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.Linq.Zip`3/_Zip<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::MoveNextAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 _Zip_MoveNextAsync_mBEA800D017300E4B7D2B656102B10FED6473DC92_gshared (/*Cysharp.Threading.Tasks.Linq.Zip`3/_Zip<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/_Zip_t91BE51D1FCE74057D53C01DC054BE4A353339622* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// completionSource.Reset();
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_0 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource_0);
		UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D(L_0, UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D_RuntimeMethod_var);
		// if (firstEnumerator == null)
		RuntimeObject* L_1 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 1),6));
		if (L_1)
		{
			goto IL_0041;
		}
	}
	{
		// firstEnumerator = first.GetAsyncEnumerator(cancellationToken);
		RuntimeObject* L_2 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 1),2));
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 1),5));
		NullCheck(L_2);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker1Invoker< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0 /* Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<T> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::GetAsyncEnumerator(System.Threading.CancellationToken) */, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_2, L_3);
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 1),6), L_4);
		// secondEnumerator = second.GetAsyncEnumerator(cancellationToken);
		RuntimeObject* L_5 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 1),3));
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_6 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 1),5));
		NullCheck(L_5);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker1Invoker< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0 /* Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<T> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::GetAsyncEnumerator(System.Threading.CancellationToken) */, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_5, L_6);
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 1),7), L_7);
	}

IL_0041:
	{
		// firstAwaiter = firstEnumerator.MoveNextAsync().GetAwaiter();
		RuntimeObject* L_8 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 1),6));
		NullCheck(L_8);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_9;
		L_9 = InterfaceFuncInvoker0Invoker< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1 /* Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::MoveNextAsync() */, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_8);
		V_0 = L_9;
		Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_10;
		L_10 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_0), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_write_instance_field_data<Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 1),8), L_10);
		// if (firstAwaiter.IsCompleted)
		bool L_11;
		L_11 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 1),8)))), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		if (!L_11)
		{
			goto IL_006f;
		}
	}
	{
		// FirstMoveNextCore(this);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 11));
		InvokerActionInvoker1< RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 10), NULL, (RuntimeObject*)__this);
		goto IL_0080;
	}

IL_006f:
	{
		// firstAwaiter.SourceOnCompleted(firstMoveNextCoreDelegate, this);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 11));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_12 = ((_Zip_t91BE51D1FCE74057D53C01DC054BE4A353339622_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 11)))->___firstMoveNextCoreDelegate_1;
		Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_inline((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 1),8)))), L_12, (RuntimeObject*)__this, Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_RuntimeMethod_var);
	}

IL_0080:
	{
		// return new UniTask<bool>(this, completionSource.Version);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_13 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource_0);
		int16_t L_14;
		L_14 = UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_inline(L_13, UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_RuntimeMethod_var);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_15;
		memset((&L_15), 0, sizeof(L_15));
		UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_inline((&L_15), (RuntimeObject*)__this, L_14, /*hidden argument*/UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_RuntimeMethod_var);
		return L_15;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.Zip`3/_Zip<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::FirstMoveNextCore(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Zip_FirstMoveNextCore_m077741C6E53CC87BF3CFD5E6F53A427B2D4BFBCF_gshared (RuntimeObject* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	_Zip_t91BE51D1FCE74057D53C01DC054BE4A353339622* V_0 = NULL;
	bool V_1 = false;
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// var self = (_Zip)state;
		RuntimeObject* L_0 = ___0_state;
		V_0 = ((_Zip_t91BE51D1FCE74057D53C01DC054BE4A353339622*)CastclassSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)));
		// if (self.TryGetResult(self.firstAwaiter, out var result))
		_Zip_t91BE51D1FCE74057D53C01DC054BE4A353339622* L_1 = V_0;
		_Zip_t91BE51D1FCE74057D53C01DC054BE4A353339622* L_2 = V_0;
		Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_3 = *(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),8));
		NullCheck((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_1);
		bool L_4;
		L_4 = MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_1, L_3, (&V_1), MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_0078;
		}
	}
	{
		// if (result)
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_006b;
		}
	}
	try
	{// begin try (depth: 1)
		// self.secondAwaiter = self.secondEnumerator.MoveNextAsync().GetAwaiter();
		_Zip_t91BE51D1FCE74057D53C01DC054BE4A353339622* L_6 = V_0;
		_Zip_t91BE51D1FCE74057D53C01DC054BE4A353339622* L_7 = V_0;
		RuntimeObject* L_8 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_7, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),7));
		NullCheck(L_8);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_9;
		L_9 = InterfaceFuncInvoker0Invoker< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1 /* Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::MoveNextAsync() */, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 8), L_8);
		V_2 = L_9;
		Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_10;
		L_10 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_2), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		NullCheck(L_6);
		il2cpp_codegen_write_instance_field_data<Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15>(L_6, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),9), L_10);
		// }
		goto IL_0045;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0035;
		}
		throw e;
	}

CATCH_0035:
	{// begin catch(System.Exception)
		// catch (Exception ex)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// self.completionSource.TrySetException(ex);
		_Zip_t91BE51D1FCE74057D53C01DC054BE4A353339622* L_11 = V_0;
		NullCheck(L_11);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_12 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_11)->___completionSource_0);
		Exception_t* L_13 = V_3;
		bool L_14;
		L_14 = UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6(L_12, L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6_RuntimeMethod_var)));
		// return;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0078;
	}// end catch (depth: 1)

IL_0045:
	{
		// if (self.secondAwaiter.IsCompleted)
		_Zip_t91BE51D1FCE74057D53C01DC054BE4A353339622* L_15 = V_0;
		bool L_16;
		L_16 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(L_15, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),9)))), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		if (!L_16)
		{
			goto IL_0059;
		}
	}
	{
		// SecondMoveNextCore(self);
		_Zip_t91BE51D1FCE74057D53C01DC054BE4A353339622* L_17 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		InvokerActionInvoker1< RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13), NULL, (RuntimeObject*)L_17);
		return;
	}

IL_0059:
	{
		// self.secondAwaiter.SourceOnCompleted(secondMoveNextCoreDelegate, self);
		_Zip_t91BE51D1FCE74057D53C01DC054BE4A353339622* L_18 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_19 = ((_Zip_t91BE51D1FCE74057D53C01DC054BE4A353339622_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11)))->___secondMoveNextCoreDelegate_2;
		_Zip_t91BE51D1FCE74057D53C01DC054BE4A353339622* L_20 = V_0;
		Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_inline((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(L_18, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),9)))), L_19, (RuntimeObject*)L_20, Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_RuntimeMethod_var);
		return;
	}

IL_006b:
	{
		// self.completionSource.TrySetResult(false);
		_Zip_t91BE51D1FCE74057D53C01DC054BE4A353339622* L_21 = V_0;
		NullCheck(L_21);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_22 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_21)->___completionSource_0);
		bool L_23;
		L_23 = UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037(L_22, (bool)0, UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
	}

IL_0078:
	{
		// }
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.Zip`3/_Zip<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::SecondMoveNextCore(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Zip_SecondMoveNextCore_m284ED42AF10DA3B5B2DDD0007B58B2D58343B8F0_gshared (RuntimeObject* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetCanceled_mD66F5F925074EA6E22B0422A10F073A1447C7168_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	// TFirst
	// sizeof(TFirst)
	const uint32_t SizeOf_TFirst_t317AA2ADCA0BB067182BED68F108F3AE9EC104C1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 15));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TFirst_t317AA2ADCA0BB067182BED68F108F3AE9EC104C1);
	// TSecond
	// sizeof(TSecond)
	const uint32_t SizeOf_TSecond_t4AE51079439DA81CAAA343D2371B07731C564456 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 17));
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_TSecond_t4AE51079439DA81CAAA343D2371B07731C564456);
	// TResult
	// sizeof(TResult)
	const uint32_t SizeOf_TResult_tCEBEAA634EC957A43B6969D31A968F0C158A5B59 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_TResult_tCEBEAA634EC957A43B6969D31A968F0C158A5B59);
	_Zip_t91BE51D1FCE74057D53C01DC054BE4A353339622* V_0 = NULL;
	bool V_1 = false;
	Exception_t* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// var self = (_Zip)state;
		RuntimeObject* L_0 = ___0_state;
		V_0 = ((_Zip_t91BE51D1FCE74057D53C01DC054BE4A353339622*)CastclassSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)));
		// if (self.TryGetResult(self.secondAwaiter, out var result))
		_Zip_t91BE51D1FCE74057D53C01DC054BE4A353339622* L_1 = V_0;
		_Zip_t91BE51D1FCE74057D53C01DC054BE4A353339622* L_2 = V_0;
		Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_3 = *(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),9));
		NullCheck((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_1);
		bool L_4;
		L_4 = MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_1, L_3, (&V_1), MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_008e;
		}
	}
	{
		// if (result)
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0081;
		}
	}
	try
	{// begin try (depth: 1)
		// self.Current = self.resultSelector(self.firstEnumerator.Current, self.secondEnumerator.Current);
		_Zip_t91BE51D1FCE74057D53C01DC054BE4A353339622* L_6 = V_0;
		_Zip_t91BE51D1FCE74057D53C01DC054BE4A353339622* L_7 = V_0;
		Func_3_t009E60D2B88B8B844FB90881977A21CC70E688A4* L_8 = *(Func_3_t009E60D2B88B8B844FB90881977A21CC70E688A4**)il2cpp_codegen_get_instance_field_data_pointer(L_7, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),4));
		_Zip_t91BE51D1FCE74057D53C01DC054BE4A353339622* L_9 = V_0;
		RuntimeObject* L_10 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_9, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),6));
		NullCheck(L_10);
		InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0 /* T Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Current() */, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 5), L_10, (Il2CppFullySharedGenericAny*)L_11);
		_Zip_t91BE51D1FCE74057D53C01DC054BE4A353339622* L_12 = V_0;
		RuntimeObject* L_13 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_12, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),7));
		NullCheck(L_13);
		InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0 /* T Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Current() */, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 8), L_13, (Il2CppFullySharedGenericAny*)L_14);
		NullCheck(L_8);
		InvokerActionInvoker3< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 15)) ? L_11: *(void**)L_11), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 17)) ? L_14: *(void**)L_14), (Il2CppFullySharedGenericAny*)L_15);
		NullCheck(L_6);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19), L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4)) ? L_15: *(void**)L_15));
		// }
		goto IL_0053;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0043;
		}
		throw e;
	}

CATCH_0043:
	{// begin catch(System.Exception)
		// catch (Exception ex)
		V_2 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// self.completionSource.TrySetException(ex);
		_Zip_t91BE51D1FCE74057D53C01DC054BE4A353339622* L_16 = V_0;
		NullCheck(L_16);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_17 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_16)->___completionSource_0);
		Exception_t* L_18 = V_2;
		bool L_19;
		L_19 = UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6(L_17, L_18, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6_RuntimeMethod_var)));
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0053;
	}// end catch (depth: 1)

IL_0053:
	{
		// if (self.cancellationToken.IsCancellationRequested)
		_Zip_t91BE51D1FCE74057D53C01DC054BE4A353339622* L_20 = V_0;
		bool L_21;
		L_21 = CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350((((CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(L_20, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),5)))), NULL);
		if (!L_21)
		{
			goto IL_0073;
		}
	}
	{
		// self.completionSource.TrySetCanceled(self.cancellationToken);
		_Zip_t91BE51D1FCE74057D53C01DC054BE4A353339622* L_22 = V_0;
		NullCheck(L_22);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_23 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_22)->___completionSource_0);
		_Zip_t91BE51D1FCE74057D53C01DC054BE4A353339622* L_24 = V_0;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_25 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(L_24, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),5));
		bool L_26;
		L_26 = UniTaskCompletionSourceCore_1_TrySetCanceled_mD66F5F925074EA6E22B0422A10F073A1447C7168(L_23, L_25, UniTaskCompletionSourceCore_1_TrySetCanceled_mD66F5F925074EA6E22B0422A10F073A1447C7168_RuntimeMethod_var);
		return;
	}

IL_0073:
	{
		// self.completionSource.TrySetResult(true);
		_Zip_t91BE51D1FCE74057D53C01DC054BE4A353339622* L_27 = V_0;
		NullCheck(L_27);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_28 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_27)->___completionSource_0);
		bool L_29;
		L_29 = UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037(L_28, (bool)1, UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		return;
	}

IL_0081:
	{
		// self.completionSource.TrySetResult(false);
		_Zip_t91BE51D1FCE74057D53C01DC054BE4A353339622* L_30 = V_0;
		NullCheck(L_30);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_31 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_30)->___completionSource_0);
		bool L_32;
		L_32 = UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037(L_31, (bool)0, UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
	}

IL_008e:
	{
		// }
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.Linq.Zip`3/_Zip<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::DisposeAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 _Zip_DisposeAsync_m085F66BB5E383AD3EDBDB820FAF22D7B36AC0D63_gshared (/*Cysharp.Threading.Tasks.Linq.Zip`3/_Zip<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/_Zip_t91BE51D1FCE74057D53C01DC054BE4A353339622* __this, const RuntimeMethod* method) 
{
	U3CDisposeAsyncU3Ed__18_tC188752CD4DB8F4F952875C44DD9980B06D167E3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 L_0;
		L_0 = AsyncUniTaskMethodBuilder_Create_m882DFD5EE004FF6F84F182A3AC170AEDCA8C5327_inline(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___runnerPromise_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___ex_1), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_1 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&(&V_0)->___U3CU3Et__builder_1);
		InvokerActionInvoker1< U3CDisposeAsyncU3Ed__18_tC188752CD4DB8F4F952875C44DD9980B06D167E3* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)), il2cpp_rgctx_method(method->klass->rgctx_data, 21), L_1, (&V_0));
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_2 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&(&V_0)->___U3CU3Et__builder_1);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_3;
		L_3 = AsyncUniTaskMethodBuilder_get_Task_m11E43D69C4F85EB23AAC58143DE695309D1022EC_inline(L_2, NULL);
		return L_3;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.Zip`3/_Zip<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Zip__cctor_mD4F46B2D7B5C4559B54E319CA447E61CE027A0EE_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly Action<object> firstMoveNextCoreDelegate = FirstMoveNextCore;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_0, NULL, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10)), NULL);
		((_Zip_t91BE51D1FCE74057D53C01DC054BE4A353339622_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11)))->___firstMoveNextCoreDelegate_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((_Zip_t91BE51D1FCE74057D53C01DC054BE4A353339622_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11)))->___firstMoveNextCoreDelegate_1), (void*)L_0);
		// static readonly Action<object> secondMoveNextCoreDelegate = SecondMoveNextCore;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_1, NULL, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13)), NULL);
		((_Zip_t91BE51D1FCE74057D53C01DC054BE4A353339622_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11)))->___secondMoveNextCoreDelegate_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((_Zip_t91BE51D1FCE74057D53C01DC054BE4A353339622_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11)))->___secondMoveNextCoreDelegate_2), (void*)L_1);
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
// System.Void Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TFirst>,Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TSecond>,System.Func`3<TFirst,TSecond,Cysharp.Threading.Tasks.UniTask`1<TResult>>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ZipAwait__ctor_mF1CE95B58A74644D701BD4551CD8DC597E669FD1_gshared (/*Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/_ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE* __this, RuntimeObject* ___0_first, RuntimeObject* ___1_second, Func_3_t025EADE05AD46B78D6372153E7AB6141B48C6D40* ___2_resultSelector, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___3_cancellationToken, const RuntimeMethod* method) 
{
	{
		// public _ZipAwait(IUniTaskAsyncEnumerable<TFirst> first, IUniTaskAsyncEnumerable<TSecond> second, Func<TFirst, TSecond, UniTask<TResult>> resultSelector, CancellationToken cancellationToken)
		MoveNextSource__ctor_mAD2FB060DAA5FB4AC333260F502B4FD563133640((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this, NULL);
		// this.first = first;
		RuntimeObject* L_0 = ___0_first;
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 1),3), L_0);
		// this.second = second;
		RuntimeObject* L_1 = ___1_second;
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 1),4), L_1);
		// this.resultSelector = resultSelector;
		Func_3_t025EADE05AD46B78D6372153E7AB6141B48C6D40* L_2 = ___2_resultSelector;
		il2cpp_codegen_write_instance_field_data<Func_3_t025EADE05AD46B78D6372153E7AB6141B48C6D40*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 1),5), L_2);
		// this.cancellationToken = cancellationToken;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = ___3_cancellationToken;
		il2cpp_codegen_write_instance_field_data<CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 1),6), L_3);
		// }
		return;
	}
}
// TResult Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ZipAwait_get_Current_m13B5D3EBB8319A134C036B1670EC5E497B5BEF58_gshared (/*Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/_ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	// sizeof(TResult)
	const uint32_t SizeOf_TResult_tEFC5BD1F968758856BCB2CBED8ED9A2C53CF4626 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
	// TResult
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TResult_tEFC5BD1F968758856BCB2CBED8ED9A2C53CF4626);
	{
		// public TResult Current { get; private set; }
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 1),12)), SizeOf_TResult_tEFC5BD1F968758856BCB2CBED8ED9A2C53CF4626);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TResult_tEFC5BD1F968758856BCB2CBED8ED9A2C53CF4626);
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::set_Current(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ZipAwait_set_Current_m043719D8848591804F48C2E477C1D4AC20BB9354_gshared (/*Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/_ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	// sizeof(TResult)
	const uint32_t SizeOf_TResult_tEFC5BD1F968758856BCB2CBED8ED9A2C53CF4626 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
	// TResult
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TResult_tEFC5BD1F968758856BCB2CBED8ED9A2C53CF4626);
	{
		// public TResult Current { get; private set; }
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 4)) ? ___0_value : &___0_value), SizeOf_TResult_tEFC5BD1F968758856BCB2CBED8ED9A2C53CF4626);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 1),12), L_0, SizeOf_TResult_tEFC5BD1F968758856BCB2CBED8ED9A2C53CF4626);
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::MoveNextAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 _ZipAwait_MoveNextAsync_mDB1305C327A8EAFF1101604E2F150873723D47F5_gshared (/*Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/_ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// completionSource.Reset();
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_0 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource_0);
		UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D(L_0, UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D_RuntimeMethod_var);
		// if (firstEnumerator == null)
		RuntimeObject* L_1 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 1),7));
		if (L_1)
		{
			goto IL_0041;
		}
	}
	{
		// firstEnumerator = first.GetAsyncEnumerator(cancellationToken);
		RuntimeObject* L_2 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 1),3));
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 1),6));
		NullCheck(L_2);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker1Invoker< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0 /* Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<T> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::GetAsyncEnumerator(System.Threading.CancellationToken) */, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_2, L_3);
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 1),7), L_4);
		// secondEnumerator = second.GetAsyncEnumerator(cancellationToken);
		RuntimeObject* L_5 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 1),4));
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_6 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 1),6));
		NullCheck(L_5);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker1Invoker< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0 /* Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<T> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::GetAsyncEnumerator(System.Threading.CancellationToken) */, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_5, L_6);
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 1),8), L_7);
	}

IL_0041:
	{
		// firstAwaiter = firstEnumerator.MoveNextAsync().GetAwaiter();
		RuntimeObject* L_8 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 1),7));
		NullCheck(L_8);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_9;
		L_9 = InterfaceFuncInvoker0Invoker< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1 /* Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::MoveNextAsync() */, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_8);
		V_0 = L_9;
		Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_10;
		L_10 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_0), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_write_instance_field_data<Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 1),9), L_10);
		// if (firstAwaiter.IsCompleted)
		bool L_11;
		L_11 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 1),9)))), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		if (!L_11)
		{
			goto IL_006f;
		}
	}
	{
		// FirstMoveNextCore(this);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 11));
		InvokerActionInvoker1< RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 10), NULL, (RuntimeObject*)__this);
		goto IL_0080;
	}

IL_006f:
	{
		// firstAwaiter.SourceOnCompleted(firstMoveNextCoreDelegate, this);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 11));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_12 = ((_ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 11)))->___firstMoveNextCoreDelegate_1;
		Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_inline((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 1),9)))), L_12, (RuntimeObject*)__this, Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_RuntimeMethod_var);
	}

IL_0080:
	{
		// return new UniTask<bool>(this, completionSource.Version);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_13 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource_0);
		int16_t L_14;
		L_14 = UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_inline(L_13, UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_RuntimeMethod_var);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_15;
		memset((&L_15), 0, sizeof(L_15));
		UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_inline((&L_15), (RuntimeObject*)__this, L_14, /*hidden argument*/UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_RuntimeMethod_var);
		return L_15;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::FirstMoveNextCore(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ZipAwait_FirstMoveNextCore_mCEB8AE84A43214922A72AE9871C97C1D50619C1D_gshared (RuntimeObject* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	_ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE* V_0 = NULL;
	bool V_1 = false;
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// var self = (_ZipAwait)state;
		RuntimeObject* L_0 = ___0_state;
		V_0 = ((_ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE*)CastclassSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)));
		// if (self.TryGetResult(self.firstAwaiter, out var result))
		_ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE* L_1 = V_0;
		_ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE* L_2 = V_0;
		Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_3 = *(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),9));
		NullCheck((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_1);
		bool L_4;
		L_4 = MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_1, L_3, (&V_1), MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_0078;
		}
	}
	{
		// if (result)
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_006b;
		}
	}
	try
	{// begin try (depth: 1)
		// self.secondAwaiter = self.secondEnumerator.MoveNextAsync().GetAwaiter();
		_ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE* L_6 = V_0;
		_ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE* L_7 = V_0;
		RuntimeObject* L_8 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_7, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),8));
		NullCheck(L_8);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_9;
		L_9 = InterfaceFuncInvoker0Invoker< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1 /* Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::MoveNextAsync() */, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 8), L_8);
		V_2 = L_9;
		Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_10;
		L_10 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_2), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		NullCheck(L_6);
		il2cpp_codegen_write_instance_field_data<Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15>(L_6, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),10), L_10);
		// }
		goto IL_0045;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0035;
		}
		throw e;
	}

CATCH_0035:
	{// begin catch(System.Exception)
		// catch (Exception ex)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// self.completionSource.TrySetException(ex);
		_ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE* L_11 = V_0;
		NullCheck(L_11);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_12 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_11)->___completionSource_0);
		Exception_t* L_13 = V_3;
		bool L_14;
		L_14 = UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6(L_12, L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6_RuntimeMethod_var)));
		// return;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0078;
	}// end catch (depth: 1)

IL_0045:
	{
		// if (self.secondAwaiter.IsCompleted)
		_ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE* L_15 = V_0;
		bool L_16;
		L_16 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(L_15, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),10)))), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		if (!L_16)
		{
			goto IL_0059;
		}
	}
	{
		// SecondMoveNextCore(self);
		_ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE* L_17 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		InvokerActionInvoker1< RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13), NULL, (RuntimeObject*)L_17);
		return;
	}

IL_0059:
	{
		// self.secondAwaiter.SourceOnCompleted(secondMoveNextCoreDelegate, self);
		_ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE* L_18 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_19 = ((_ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11)))->___secondMoveNextCoreDelegate_2;
		_ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE* L_20 = V_0;
		Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_inline((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(L_18, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),10)))), L_19, (RuntimeObject*)L_20, Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_RuntimeMethod_var);
		return;
	}

IL_006b:
	{
		// self.completionSource.TrySetResult(false);
		_ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE* L_21 = V_0;
		NullCheck(L_21);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_22 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_21)->___completionSource_0);
		bool L_23;
		L_23 = UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037(L_22, (bool)0, UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
	}

IL_0078:
	{
		// }
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::SecondMoveNextCore(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ZipAwait_SecondMoveNextCore_mB21C5B05A28210DB6CFBCC41056317991C1CB951_gshared (RuntimeObject* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<TResult>)
	const uint32_t SizeOf_UniTask_1_t84744ED9B5C08E0C25B00BE89A0F1201E3BD1C07 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 19));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1/Awaiter<TResult>)
	const uint32_t SizeOf_Awaiter_t1E955806ACD7686E2FA639F53EBD8EFDEA33891A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 21));
	// TFirst
	// sizeof(TFirst)
	const uint32_t SizeOf_TFirst_t0675C576F3A81C5446C362ECE1B183613D51FD0B = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 15));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TFirst_t0675C576F3A81C5446C362ECE1B183613D51FD0B);
	// TSecond
	// sizeof(TSecond)
	const uint32_t SizeOf_TSecond_t0C457326CBCD8507337B5D00B163DC11506BCC74 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 17));
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_TSecond_t0C457326CBCD8507337B5D00B163DC11506BCC74);
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<TResult>
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_16 = alloca(SizeOf_Awaiter_t1E955806ACD7686E2FA639F53EBD8EFDEA33891A);
	// Cysharp.Threading.Tasks.UniTask`1<TResult>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_15 = alloca(SizeOf_UniTask_1_t84744ED9B5C08E0C25B00BE89A0F1201E3BD1C07);
	_ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE* V_0 = NULL;
	bool V_1 = false;
	UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 V_2 = alloca(SizeOf_UniTask_1_t84744ED9B5C08E0C25B00BE89A0F1201E3BD1C07);
	memset(V_2, 0, SizeOf_UniTask_1_t84744ED9B5C08E0C25B00BE89A0F1201E3BD1C07);
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// var self = (_ZipAwait)state;
		RuntimeObject* L_0 = ___0_state;
		V_0 = ((_ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE*)CastclassSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)));
		// if (self.TryGetResult(self.secondAwaiter, out var result))
		_ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE* L_1 = V_0;
		_ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE* L_2 = V_0;
		Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_3 = *(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),10));
		NullCheck((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_1);
		bool L_4;
		L_4 = MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_1, L_3, (&V_1), MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_008e;
		}
	}
	{
		// if (result)
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0081;
		}
	}
	try
	{// begin try (depth: 1)
		{
			// self.resultAwaiter = self.resultSelector(self.firstEnumerator.Current, self.secondEnumerator.Current).GetAwaiter();
			_ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE* L_6 = V_0;
			_ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE* L_7 = V_0;
			Func_3_t025EADE05AD46B78D6372153E7AB6141B48C6D40* L_8 = *(Func_3_t025EADE05AD46B78D6372153E7AB6141B48C6D40**)il2cpp_codegen_get_instance_field_data_pointer(L_7, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),5));
			_ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE* L_9 = V_0;
			RuntimeObject* L_10 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_9, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),7));
			NullCheck(L_10);
			InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0 /* T Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Current() */, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 5), L_10, (Il2CppFullySharedGenericAny*)L_11);
			_ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE* L_12 = V_0;
			RuntimeObject* L_13 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_12, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),8));
			NullCheck(L_13);
			InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0 /* T Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Current() */, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 8), L_13, (Il2CppFullySharedGenericAny*)L_14);
			NullCheck(L_8);
			InvokerActionInvoker3< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 15)) ? L_11: *(void**)L_11), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 17)) ? L_14: *(void**)L_14), (UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)L_15);
			il2cpp_codegen_memcpy(V_2, L_15, SizeOf_UniTask_1_t84744ED9B5C08E0C25B00BE89A0F1201E3BD1C07);
			InvokerActionInvoker1< Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20), (UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)V_2, (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)L_16);
			NullCheck(L_6);
			il2cpp_codegen_write_instance_field_data(L_6, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),11), L_16, SizeOf_Awaiter_t1E955806ACD7686E2FA639F53EBD8EFDEA33891A);
			// if (self.resultAwaiter.IsCompleted)
			_ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE* L_17 = V_0;
			bool L_18;
			L_18 = InvokerFuncInvoker0< bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 22)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 22), (((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)il2cpp_codegen_get_instance_field_data_pointer(L_17, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),11)))));
			if (!L_18)
			{
				goto IL_005e_1;
			}
		}
		{
			// ResultAwaitCore(self);
			_ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE* L_19 = V_0;
			il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11));
			InvokerActionInvoker1< RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 23)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 23), NULL, (RuntimeObject*)L_19);
			goto IL_006f_1;
		}

IL_005e_1:
		{
			// self.resultAwaiter.SourceOnCompleted(resultAwaitCoreDelegate, self);
			_ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE* L_20 = V_0;
			il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11));
			Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_21 = ((_ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11)))->___resultAwaitCoreDelegate_3;
			_ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE* L_22 = V_0;
			InvokerActionInvoker2< Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 24)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 24), (((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)il2cpp_codegen_get_instance_field_data_pointer(L_20, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),11)))), L_21, (RuntimeObject*)L_22);
		}

IL_006f_1:
		{
			// }
			goto IL_008e;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0071;
		}
		throw e;
	}

CATCH_0071:
	{// begin catch(System.Exception)
		// catch (Exception ex)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// self.completionSource.TrySetException(ex);
		_ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE* L_23 = V_0;
		NullCheck(L_23);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_24 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_23)->___completionSource_0);
		Exception_t* L_25 = V_3;
		bool L_26;
		L_26 = UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6(L_24, L_25, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6_RuntimeMethod_var)));
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_008e;
	}// end catch (depth: 1)

IL_0081:
	{
		// self.completionSource.TrySetResult(false);
		_ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE* L_27 = V_0;
		NullCheck(L_27);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_28 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_27)->___completionSource_0);
		bool L_29;
		L_29 = UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037(L_28, (bool)0, UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
	}

IL_008e:
	{
		// }
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::ResultAwaitCore(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ZipAwait_ResultAwaitCore_m4BAE2A3D3BA4EDA89F86884D15FD2B96DCF34529_gshared (RuntimeObject* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetCanceled_mD66F5F925074EA6E22B0422A10F073A1447C7168_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	// sizeof(TResult)
	const uint32_t SizeOf_TResult_tEFC5BD1F968758856BCB2CBED8ED9A2C53CF4626 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1/Awaiter<TResult>)
	const uint32_t SizeOf_Awaiter_t1E955806ACD7686E2FA639F53EBD8EFDEA33891A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 21));
	// TResult
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TResult_tEFC5BD1F968758856BCB2CBED8ED9A2C53CF4626);
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<TResult>
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_3 = alloca(SizeOf_Awaiter_t1E955806ACD7686E2FA639F53EBD8EFDEA33891A);
	_ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE* V_0 = NULL;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TResult_tEFC5BD1F968758856BCB2CBED8ED9A2C53CF4626);
	memset(V_1, 0, SizeOf_TResult_tEFC5BD1F968758856BCB2CBED8ED9A2C53CF4626);
	{
		// var self = (_ZipAwait)state;
		RuntimeObject* L_0 = ___0_state;
		V_0 = ((_ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE*)CastclassSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)));
		// if (self.TryGetResult(self.resultAwaiter, out var result))
		_ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE* L_1 = V_0;
		_ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE* L_2 = V_0;
		il2cpp_codegen_memcpy(L_3, il2cpp_codegen_get_instance_field_data_pointer(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),11)), SizeOf_Awaiter_t1E955806ACD7686E2FA639F53EBD8EFDEA33891A);
		NullCheck((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_1);
		bool L_4;
		L_4 = InvokerFuncInvoker2< bool, Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 25)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 25), (MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_1, L_3, (Il2CppFullySharedGenericAny*)V_1);
		if (!L_4)
		{
			goto IL_004b;
		}
	}
	{
		// self.Current = result;
		_ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE* L_5 = V_0;
		il2cpp_codegen_memcpy(L_6, V_1, SizeOf_TResult_tEFC5BD1F968758856BCB2CBED8ED9A2C53CF4626);
		NullCheck(L_5);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 27)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 27), L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4)) ? L_6: *(void**)L_6));
		// if (self.cancellationToken.IsCancellationRequested)
		_ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE* L_7 = V_0;
		bool L_8;
		L_8 = CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350((((CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(L_7, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),6)))), NULL);
		if (!L_8)
		{
			goto IL_003e;
		}
	}
	{
		// self.completionSource.TrySetCanceled(self.cancellationToken);
		_ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE* L_9 = V_0;
		NullCheck(L_9);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_10 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_9)->___completionSource_0);
		_ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE* L_11 = V_0;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_12 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(L_11, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),6));
		bool L_13;
		L_13 = UniTaskCompletionSourceCore_1_TrySetCanceled_mD66F5F925074EA6E22B0422A10F073A1447C7168(L_10, L_12, UniTaskCompletionSourceCore_1_TrySetCanceled_mD66F5F925074EA6E22B0422A10F073A1447C7168_RuntimeMethod_var);
		return;
	}

IL_003e:
	{
		// self.completionSource.TrySetResult(true);
		_ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE* L_14 = V_0;
		NullCheck(L_14);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_15 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_14)->___completionSource_0);
		bool L_16;
		L_16 = UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037(L_15, (bool)1, UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
	}

IL_004b:
	{
		// }
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::DisposeAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 _ZipAwait_DisposeAsync_m63A584A92684AB3A962ED9F0DEA776420EB851A1_gshared (/*Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/_ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE* __this, const RuntimeMethod* method) 
{
	U3CDisposeAsyncU3Ed__21_t5D9637B25772A807FA1261F4A8EE36BA5CD7B716 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 L_0;
		L_0 = AsyncUniTaskMethodBuilder_Create_m882DFD5EE004FF6F84F182A3AC170AEDCA8C5327_inline(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___runnerPromise_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___ex_1), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_1 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&(&V_0)->___U3CU3Et__builder_1);
		InvokerActionInvoker1< U3CDisposeAsyncU3Ed__21_t5D9637B25772A807FA1261F4A8EE36BA5CD7B716* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)), il2cpp_rgctx_method(method->klass->rgctx_data, 29), L_1, (&V_0));
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_2 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&(&V_0)->___U3CU3Et__builder_1);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_3;
		L_3 = AsyncUniTaskMethodBuilder_get_Task_m11E43D69C4F85EB23AAC58143DE695309D1022EC_inline(L_2, NULL);
		return L_3;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ZipAwait__cctor_mB5CB84AC8DB746383C647B71C48A30619A45D800_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly Action<object> firstMoveNextCoreDelegate = FirstMoveNextCore;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_0, NULL, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10)), NULL);
		((_ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11)))->___firstMoveNextCoreDelegate_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((_ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11)))->___firstMoveNextCoreDelegate_1), (void*)L_0);
		// static readonly Action<object> secondMoveNextCoreDelegate = SecondMoveNextCore;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_1, NULL, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13)), NULL);
		((_ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11)))->___secondMoveNextCoreDelegate_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((_ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11)))->___secondMoveNextCoreDelegate_2), (void*)L_1);
		// static readonly Action<object> resultAwaitCoreDelegate = ResultAwaitCore;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_2 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_2, NULL, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 23)), NULL);
		((_ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11)))->___resultAwaitCoreDelegate_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((_ZipAwait_t60EB643EE61B561EF36B3780798F6AE64B42CEAE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11)))->___resultAwaitCoreDelegate_3), (void*)L_2);
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
// System.Void Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TFirst>,Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TSecond>,System.Func`4<TFirst,TSecond,System.Threading.CancellationToken,Cysharp.Threading.Tasks.UniTask`1<TResult>>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ZipAwaitWithCancellation__ctor_mF8BB9E50DA616F1901D143F5CF042B2FACE6A12C_gshared (/*Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD* __this, RuntimeObject* ___0_first, RuntimeObject* ___1_second, Func_4_tACF12340039B5BCFBB5ED953C0B2BF68B8F74D25* ___2_resultSelector, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___3_cancellationToken, const RuntimeMethod* method) 
{
	{
		// public _ZipAwaitWithCancellation(IUniTaskAsyncEnumerable<TFirst> first, IUniTaskAsyncEnumerable<TSecond> second, Func<TFirst, TSecond, CancellationToken, UniTask<TResult>> resultSelector, CancellationToken cancellationToken)
		MoveNextSource__ctor_mAD2FB060DAA5FB4AC333260F502B4FD563133640((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this, NULL);
		// this.first = first;
		RuntimeObject* L_0 = ___0_first;
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 1),3), L_0);
		// this.second = second;
		RuntimeObject* L_1 = ___1_second;
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 1),4), L_1);
		// this.resultSelector = resultSelector;
		Func_4_tACF12340039B5BCFBB5ED953C0B2BF68B8F74D25* L_2 = ___2_resultSelector;
		il2cpp_codegen_write_instance_field_data<Func_4_tACF12340039B5BCFBB5ED953C0B2BF68B8F74D25*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 1),5), L_2);
		// this.cancellationToken = cancellationToken;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = ___3_cancellationToken;
		il2cpp_codegen_write_instance_field_data<CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 1),6), L_3);
		// }
		return;
	}
}
// TResult Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ZipAwaitWithCancellation_get_Current_m8DEEC64609F29A5765F0963F233D19EC963A1CEE_gshared (/*Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	// sizeof(TResult)
	const uint32_t SizeOf_TResult_t6E4F0CDBA1B11937CFB5991738847A427034B467 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
	// TResult
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TResult_t6E4F0CDBA1B11937CFB5991738847A427034B467);
	{
		// public TResult Current { get; private set; }
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 1),12)), SizeOf_TResult_t6E4F0CDBA1B11937CFB5991738847A427034B467);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TResult_t6E4F0CDBA1B11937CFB5991738847A427034B467);
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::set_Current(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ZipAwaitWithCancellation_set_Current_mE80E6FF8588006E09BB7F0B02971CCE10B7549B1_gshared (/*Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	// sizeof(TResult)
	const uint32_t SizeOf_TResult_t6E4F0CDBA1B11937CFB5991738847A427034B467 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 4));
	// TResult
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TResult_t6E4F0CDBA1B11937CFB5991738847A427034B467);
	{
		// public TResult Current { get; private set; }
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 4)) ? ___0_value : &___0_value), SizeOf_TResult_t6E4F0CDBA1B11937CFB5991738847A427034B467);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 1),12), L_0, SizeOf_TResult_t6E4F0CDBA1B11937CFB5991738847A427034B467);
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::MoveNextAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 _ZipAwaitWithCancellation_MoveNextAsync_m80F80FD3AEF850E09F8D997B57E81CB42FBFF7AE_gshared (/*Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// completionSource.Reset();
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_0 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource_0);
		UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D(L_0, UniTaskCompletionSourceCore_1_Reset_m11E75ED2E4CC547CB5A568C0063665353803495D_RuntimeMethod_var);
		// if (firstEnumerator == null)
		RuntimeObject* L_1 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 1),7));
		if (L_1)
		{
			goto IL_0041;
		}
	}
	{
		// firstEnumerator = first.GetAsyncEnumerator(cancellationToken);
		RuntimeObject* L_2 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 1),3));
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 1),6));
		NullCheck(L_2);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker1Invoker< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0 /* Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<T> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::GetAsyncEnumerator(System.Threading.CancellationToken) */, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_2, L_3);
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 1),7), L_4);
		// secondEnumerator = second.GetAsyncEnumerator(cancellationToken);
		RuntimeObject* L_5 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 1),4));
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_6 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 1),6));
		NullCheck(L_5);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker1Invoker< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0 /* Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<T> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::GetAsyncEnumerator(System.Threading.CancellationToken) */, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_5, L_6);
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 1),8), L_7);
	}

IL_0041:
	{
		// firstAwaiter = firstEnumerator.MoveNextAsync().GetAwaiter();
		RuntimeObject* L_8 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 1),7));
		NullCheck(L_8);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_9;
		L_9 = InterfaceFuncInvoker0Invoker< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1 /* Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::MoveNextAsync() */, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_8);
		V_0 = L_9;
		Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_10;
		L_10 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_0), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		il2cpp_codegen_write_instance_field_data<Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 1),9), L_10);
		// if (firstAwaiter.IsCompleted)
		bool L_11;
		L_11 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 1),9)))), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		if (!L_11)
		{
			goto IL_006f;
		}
	}
	{
		// FirstMoveNextCore(this);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 11));
		InvokerActionInvoker1< RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 10), NULL, (RuntimeObject*)__this);
		goto IL_0080;
	}

IL_006f:
	{
		// firstAwaiter.SourceOnCompleted(firstMoveNextCoreDelegate, this);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 11));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_12 = ((_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 11)))->___firstMoveNextCoreDelegate_1;
		Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_inline((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 1),9)))), L_12, (RuntimeObject*)__this, Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_RuntimeMethod_var);
	}

IL_0080:
	{
		// return new UniTask<bool>(this, completionSource.Version);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_13 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)__this)->___completionSource_0);
		int16_t L_14;
		L_14 = UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_inline(L_13, UniTaskCompletionSourceCore_1_get_Version_m49DEF08C91978DDFDE6A27F0C2B6630BB48116C5_RuntimeMethod_var);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_15;
		memset((&L_15), 0, sizeof(L_15));
		UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_inline((&L_15), (RuntimeObject*)__this, L_14, /*hidden argument*/UniTask_1__ctor_mE4AE554655B64D8F20BD92C5C769A9E39167D200_RuntimeMethod_var);
		return L_15;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::FirstMoveNextCore(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ZipAwaitWithCancellation_FirstMoveNextCore_m310F4C42E4F5F41ABC3778FCC4487EF0B40CEC7D_gshared (RuntimeObject* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD* V_0 = NULL;
	bool V_1 = false;
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// var self = (_ZipAwaitWithCancellation)state;
		RuntimeObject* L_0 = ___0_state;
		V_0 = ((_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD*)CastclassSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)));
		// if (self.TryGetResult(self.firstAwaiter, out var result))
		_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD* L_1 = V_0;
		_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD* L_2 = V_0;
		Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_3 = *(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),9));
		NullCheck((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_1);
		bool L_4;
		L_4 = MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_1, L_3, (&V_1), MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_0078;
		}
	}
	{
		// if (result)
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_006b;
		}
	}
	try
	{// begin try (depth: 1)
		// self.secondAwaiter = self.secondEnumerator.MoveNextAsync().GetAwaiter();
		_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD* L_6 = V_0;
		_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD* L_7 = V_0;
		RuntimeObject* L_8 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_7, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),8));
		NullCheck(L_8);
		UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 L_9;
		L_9 = InterfaceFuncInvoker0Invoker< UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 >::Invoke(1 /* Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::MoveNextAsync() */, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 8), L_8);
		V_2 = L_9;
		Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_10;
		L_10 = UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_inline((&V_2), UniTask_1_GetAwaiter_m1C3AEC39E4EC505A9440D441FDE6BC8A52AC2D93_RuntimeMethod_var);
		NullCheck(L_6);
		il2cpp_codegen_write_instance_field_data<Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15>(L_6, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),10), L_10);
		// }
		goto IL_0045;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0035;
		}
		throw e;
	}

CATCH_0035:
	{// begin catch(System.Exception)
		// catch (Exception ex)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// self.completionSource.TrySetException(ex);
		_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD* L_11 = V_0;
		NullCheck(L_11);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_12 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_11)->___completionSource_0);
		Exception_t* L_13 = V_3;
		bool L_14;
		L_14 = UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6(L_12, L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6_RuntimeMethod_var)));
		// return;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0078;
	}// end catch (depth: 1)

IL_0045:
	{
		// if (self.secondAwaiter.IsCompleted)
		_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD* L_15 = V_0;
		bool L_16;
		L_16 = Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_inline((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(L_15, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),10)))), Awaiter_get_IsCompleted_m63C84DBD3EF14B744799A98BC29361A7F66A6BB5_RuntimeMethod_var);
		if (!L_16)
		{
			goto IL_0059;
		}
	}
	{
		// SecondMoveNextCore(self);
		_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD* L_17 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		InvokerActionInvoker1< RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13), NULL, (RuntimeObject*)L_17);
		return;
	}

IL_0059:
	{
		// self.secondAwaiter.SourceOnCompleted(secondMoveNextCoreDelegate, self);
		_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD* L_18 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_19 = ((_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11)))->___secondMoveNextCoreDelegate_2;
		_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD* L_20 = V_0;
		Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_inline((((Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(L_18, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),10)))), L_19, (RuntimeObject*)L_20, Awaiter_SourceOnCompleted_m1D275D10C0D958F96E00D8E78AC590CC2E74E351_RuntimeMethod_var);
		return;
	}

IL_006b:
	{
		// self.completionSource.TrySetResult(false);
		_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD* L_21 = V_0;
		NullCheck(L_21);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_22 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_21)->___completionSource_0);
		bool L_23;
		L_23 = UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037(L_22, (bool)0, UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
	}

IL_0078:
	{
		// }
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::SecondMoveNextCore(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ZipAwaitWithCancellation_SecondMoveNextCore_m777D8927D59498B231403C2A66DB777CC1DA6F9E_gshared (RuntimeObject* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<TResult>)
	const uint32_t SizeOf_UniTask_1_t1564113B6E2E5105A0AE4CE78FB8FD4D230C7352 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 19));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1/Awaiter<TResult>)
	const uint32_t SizeOf_Awaiter_tAC051AC44D5DC8C3AC5CE4E89F3BF3BC23360E80 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 21));
	// TFirst
	// sizeof(TFirst)
	const uint32_t SizeOf_TFirst_tD546F5F999348E2FE6E2B8256F3401B0EAFC8D85 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 15));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TFirst_tD546F5F999348E2FE6E2B8256F3401B0EAFC8D85);
	// TSecond
	// sizeof(TSecond)
	const uint32_t SizeOf_TSecond_t464A57B793D07C4BF70A8E8AF54A0BE8F72FFE77 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 17));
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_TSecond_t464A57B793D07C4BF70A8E8AF54A0BE8F72FFE77);
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<TResult>
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_18 = alloca(SizeOf_Awaiter_tAC051AC44D5DC8C3AC5CE4E89F3BF3BC23360E80);
	// Cysharp.Threading.Tasks.UniTask`1<TResult>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_17 = alloca(SizeOf_UniTask_1_t1564113B6E2E5105A0AE4CE78FB8FD4D230C7352);
	_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD* V_0 = NULL;
	bool V_1 = false;
	UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 V_2 = alloca(SizeOf_UniTask_1_t1564113B6E2E5105A0AE4CE78FB8FD4D230C7352);
	memset(V_2, 0, SizeOf_UniTask_1_t1564113B6E2E5105A0AE4CE78FB8FD4D230C7352);
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// var self = (_ZipAwaitWithCancellation)state;
		RuntimeObject* L_0 = ___0_state;
		V_0 = ((_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD*)CastclassSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)));
		// if (self.TryGetResult(self.secondAwaiter, out var result))
		_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD* L_1 = V_0;
		_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD* L_2 = V_0;
		Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 L_3 = *(Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15*)il2cpp_codegen_get_instance_field_data_pointer(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),10));
		NullCheck((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_1);
		bool L_4;
		L_4 = MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_1, L_3, (&V_1), MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m67216A0346FDA0450470B8458499CC6AE3F765F1_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_0094;
		}
	}
	{
		// if (result)
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0087;
		}
	}
	try
	{// begin try (depth: 1)
		{
			// self.resultAwaiter = self.resultSelector(self.firstEnumerator.Current, self.secondEnumerator.Current, self.cancellationToken).GetAwaiter();
			_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD* L_6 = V_0;
			_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD* L_7 = V_0;
			Func_4_tACF12340039B5BCFBB5ED953C0B2BF68B8F74D25* L_8 = *(Func_4_tACF12340039B5BCFBB5ED953C0B2BF68B8F74D25**)il2cpp_codegen_get_instance_field_data_pointer(L_7, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),5));
			_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD* L_9 = V_0;
			RuntimeObject* L_10 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_9, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),7));
			NullCheck(L_10);
			InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0 /* T Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Current() */, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 5), L_10, (Il2CppFullySharedGenericAny*)L_11);
			_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD* L_12 = V_0;
			RuntimeObject* L_13 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(L_12, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),8));
			NullCheck(L_13);
			InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0 /* T Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Current() */, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 8), L_13, (Il2CppFullySharedGenericAny*)L_14);
			_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD* L_15 = V_0;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_16 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(L_15, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),6));
			NullCheck(L_8);
			InvokerActionInvoker4< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 15)) ? L_11: *(void**)L_11), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 17)) ? L_14: *(void**)L_14), L_16, (UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)L_17);
			il2cpp_codegen_memcpy(V_2, L_17, SizeOf_UniTask_1_t1564113B6E2E5105A0AE4CE78FB8FD4D230C7352);
			InvokerActionInvoker1< Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20), (UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)V_2, (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)L_18);
			NullCheck(L_6);
			il2cpp_codegen_write_instance_field_data(L_6, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),11), L_18, SizeOf_Awaiter_tAC051AC44D5DC8C3AC5CE4E89F3BF3BC23360E80);
			// if (self.resultAwaiter.IsCompleted)
			_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD* L_19 = V_0;
			bool L_20;
			L_20 = InvokerFuncInvoker0< bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 22)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 22), (((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)il2cpp_codegen_get_instance_field_data_pointer(L_19, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),11)))));
			if (!L_20)
			{
				goto IL_0064_1;
			}
		}
		{
			// ResultAwaitCore(self);
			_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD* L_21 = V_0;
			il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11));
			InvokerActionInvoker1< RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 23)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 23), NULL, (RuntimeObject*)L_21);
			goto IL_0075_1;
		}

IL_0064_1:
		{
			// self.resultAwaiter.SourceOnCompleted(resultAwaitCoreDelegate, self);
			_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD* L_22 = V_0;
			il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11));
			Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_23 = ((_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11)))->___resultAwaitCoreDelegate_3;
			_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD* L_24 = V_0;
			InvokerActionInvoker2< Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 24)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 24), (((Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)il2cpp_codegen_get_instance_field_data_pointer(L_22, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),11)))), L_23, (RuntimeObject*)L_24);
		}

IL_0075_1:
		{
			// }
			goto IL_0094;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0077;
		}
		throw e;
	}

CATCH_0077:
	{// begin catch(System.Exception)
		// catch (Exception ex)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// self.completionSource.TrySetException(ex);
		_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD* L_25 = V_0;
		NullCheck(L_25);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_26 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_25)->___completionSource_0);
		Exception_t* L_27 = V_3;
		bool L_28;
		L_28 = UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6(L_26, L_27, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetException_m9E34324D452C670F8E3EA3E090E8EBB38736E7B6_RuntimeMethod_var)));
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0094;
	}// end catch (depth: 1)

IL_0087:
	{
		// self.completionSource.TrySetResult(false);
		_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD* L_29 = V_0;
		NullCheck(L_29);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_30 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_29)->___completionSource_0);
		bool L_31;
		L_31 = UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037(L_30, (bool)0, UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
	}

IL_0094:
	{
		// }
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::ResultAwaitCore(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ZipAwaitWithCancellation_ResultAwaitCore_m4609AF33DE0033D65660A50D6EF19E24D4B47FA1_gshared (RuntimeObject* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetCanceled_mD66F5F925074EA6E22B0422A10F073A1447C7168_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	// sizeof(TResult)
	const uint32_t SizeOf_TResult_t6E4F0CDBA1B11937CFB5991738847A427034B467 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1/Awaiter<TResult>)
	const uint32_t SizeOf_Awaiter_tAC051AC44D5DC8C3AC5CE4E89F3BF3BC23360E80 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 21));
	// TResult
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TResult_t6E4F0CDBA1B11937CFB5991738847A427034B467);
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<TResult>
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_3 = alloca(SizeOf_Awaiter_tAC051AC44D5DC8C3AC5CE4E89F3BF3BC23360E80);
	_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD* V_0 = NULL;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TResult_t6E4F0CDBA1B11937CFB5991738847A427034B467);
	memset(V_1, 0, SizeOf_TResult_t6E4F0CDBA1B11937CFB5991738847A427034B467);
	{
		// var self = (_ZipAwaitWithCancellation)state;
		RuntimeObject* L_0 = ___0_state;
		V_0 = ((_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD*)CastclassSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)));
		// if (self.TryGetResult(self.resultAwaiter, out var result))
		_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD* L_1 = V_0;
		_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD* L_2 = V_0;
		il2cpp_codegen_memcpy(L_3, il2cpp_codegen_get_instance_field_data_pointer(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),11)), SizeOf_Awaiter_tAC051AC44D5DC8C3AC5CE4E89F3BF3BC23360E80);
		NullCheck((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_1);
		bool L_4;
		L_4 = InvokerFuncInvoker2< bool, Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 25)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 25), (MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_1, L_3, (Il2CppFullySharedGenericAny*)V_1);
		if (!L_4)
		{
			goto IL_004b;
		}
	}
	{
		// self.Current = result;
		_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD* L_5 = V_0;
		il2cpp_codegen_memcpy(L_6, V_1, SizeOf_TResult_t6E4F0CDBA1B11937CFB5991738847A427034B467);
		NullCheck(L_5);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 27)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 27), L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4)) ? L_6: *(void**)L_6));
		// if (self.cancellationToken.IsCancellationRequested)
		_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD* L_7 = V_0;
		bool L_8;
		L_8 = CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350((((CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(L_7, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),6)))), NULL);
		if (!L_8)
		{
			goto IL_003e;
		}
	}
	{
		// self.completionSource.TrySetCanceled(self.cancellationToken);
		_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD* L_9 = V_0;
		NullCheck(L_9);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_10 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_9)->___completionSource_0);
		_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD* L_11 = V_0;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_12 = *(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)il2cpp_codegen_get_instance_field_data_pointer(L_11, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),6));
		bool L_13;
		L_13 = UniTaskCompletionSourceCore_1_TrySetCanceled_mD66F5F925074EA6E22B0422A10F073A1447C7168(L_10, L_12, UniTaskCompletionSourceCore_1_TrySetCanceled_mD66F5F925074EA6E22B0422A10F073A1447C7168_RuntimeMethod_var);
		return;
	}

IL_003e:
	{
		// self.completionSource.TrySetResult(true);
		_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD* L_14 = V_0;
		NullCheck(L_14);
		UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2* L_15 = (UniTaskCompletionSourceCore_1_t9AED094DEF9EF1E050603D158F4FFA169DE3E9D2*)(&((MoveNextSource_tEE80ED59B6626D9814CD4A1DDD53D32F0A9495B5*)L_14)->___completionSource_0);
		bool L_16;
		L_16 = UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037(L_15, (bool)1, UniTaskCompletionSourceCore_1_TrySetResult_m4AD85964381E8B6B5D92F6747C81FCF5E9CF3037_RuntimeMethod_var);
	}

IL_004b:
	{
		// }
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::DisposeAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 _ZipAwaitWithCancellation_DisposeAsync_m6A7E1F40BD7B99062A88656D405DE2DD4A524B5E_gshared (/*Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD* __this, const RuntimeMethod* method) 
{
	U3CDisposeAsyncU3Ed__21_tAF4A35DE6FCC10CB592383716B6B90BB07B2020F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 L_0;
		L_0 = AsyncUniTaskMethodBuilder_Create_m882DFD5EE004FF6F84F182A3AC170AEDCA8C5327_inline(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___runnerPromise_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___ex_1), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_1 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&(&V_0)->___U3CU3Et__builder_1);
		InvokerActionInvoker1< U3CDisposeAsyncU3Ed__21_tAF4A35DE6FCC10CB592383716B6B90BB07B2020F* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)), il2cpp_rgctx_method(method->klass->rgctx_data, 29), L_1, (&V_0));
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* L_2 = (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0*)(&(&V_0)->___U3CU3Et__builder_1);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_3;
		L_3 = AsyncUniTaskMethodBuilder_get_Task_m11E43D69C4F85EB23AAC58143DE695309D1022EC_inline(L_2, NULL);
		return L_3;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ZipAwaitWithCancellation__cctor_mFFAA1B5A4E3B2AD299FFD7ED6CAC1A67EFCF192A_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly Action<object> firstMoveNextCoreDelegate = FirstMoveNextCore;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_0, NULL, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10)), NULL);
		((_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11)))->___firstMoveNextCoreDelegate_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11)))->___firstMoveNextCoreDelegate_1), (void*)L_0);
		// static readonly Action<object> secondMoveNextCoreDelegate = SecondMoveNextCore;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_1, NULL, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13)), NULL);
		((_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11)))->___secondMoveNextCoreDelegate_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11)))->___secondMoveNextCoreDelegate_2), (void*)L_1);
		// static readonly Action<object> resultAwaitCoreDelegate = ResultAwaitCore;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_2 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_2, NULL, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 23)), NULL);
		((_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11)))->___resultAwaitCoreDelegate_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((_ZipAwaitWithCancellation_tE4E7001FEB18E4EDCAB431E8E9D2BD42D6274FBD_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11)))->___resultAwaitCoreDelegate_3), (void*)L_2);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 AsyncUniTaskMethodBuilder_Create_m882DFD5EE004FF6F84F182A3AC170AEDCA8C5327_inline (const RuntimeMethod* method) 
{
	AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return default;
		il2cpp_codegen_initobj((&V_0), sizeof(AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0));
		AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0 L_0 = V_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 AsyncUniTaskMethodBuilder_get_Task_m11E43D69C4F85EB23AAC58143DE695309D1022EC_inline (AsyncUniTaskMethodBuilder_t490751EC621C472E098B12103AF16BC549912BB0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (runnerPromise != null)
		RuntimeObject* L_0 = __this->___runnerPromise_0;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// return runnerPromise.Task;
		RuntimeObject* L_1 = __this->___runnerPromise_0;
		NullCheck(L_1);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_2;
		L_2 = InterfaceFuncInvoker0< UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 >::Invoke(1 /* Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise::get_Task() */, IStateMachineRunnerPromise_t5CE1FDF2F619E55F7DCFBE22E2B97835C6781C7B_il2cpp_TypeInfo_var, L_1);
		return L_2;
	}

IL_0014:
	{
		// else if (ex != null)
		Exception_t* L_3 = __this->___ex_1;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// return UniTask.FromException(ex);
		Exception_t* L_4 = __this->___ex_1;
		il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_5;
		L_5 = UniTask_FromException_mC6AC508C727D591C6BE908F2014570963CE9E5EE(L_4, NULL);
		return L_5;
	}

IL_0028:
	{
		// return UniTask.CompletedTask;
		il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 L_6 = ((UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_StaticFields*)il2cpp_codegen_static_fields_for(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var))->___CompletedTask_3;
		return L_6;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_UnsafeOnCompleted_m9BA083B1ED6E4385066B9A863135A587D4260E32_gshared_inline (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_continuation, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AwaiterActions_t5D05CAC006FDEBCF6B65E2B9224BC4B44783BBE5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// var s = task.source;
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer((((UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2),0)))), il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),0));
		V_0 = L_0;
		// if (s == null)
		RuntimeObject* L_1 = V_0;
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		// continuation();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = ___0_continuation;
		NullCheck(L_2);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_2, NULL);
		return;
	}

IL_0016:
	{
		// s.OnCompleted(AwaiterActions.InvokeContinuationDelegate, continuation, task.token);
		RuntimeObject* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AwaiterActions_t5D05CAC006FDEBCF6B65E2B9224BC4B44783BBE5_il2cpp_TypeInfo_var);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_4 = ((AwaiterActions_t5D05CAC006FDEBCF6B65E2B9224BC4B44783BBE5_StaticFields*)il2cpp_codegen_static_fields_for(AwaiterActions_t5D05CAC006FDEBCF6B65E2B9224BC4B44783BBE5_il2cpp_TypeInfo_var))->___InvokeContinuationDelegate_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = ___0_continuation;
		int16_t L_6 = *(int16_t*)il2cpp_codegen_get_instance_field_data_pointer((((UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2),0)))), il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),2));
		NullCheck((RuntimeObject*)L_3);
		InterfaceActionInvoker3< Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, int16_t >::Invoke(1 /* System.Void Cysharp.Threading.Tasks.IUniTaskSource::OnCompleted(System.Action`1<System.Object>,System.Object,System.Int16) */, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, (RuntimeObject*)L_3, L_4, (RuntimeObject*)L_5, L_6);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_SourceOnCompleted_m7BB8B4D6B70376483D828F7D3BEE03C2C33602E0_gshared_inline (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_continuation, RuntimeObject* ___1_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// var s = task.source;
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer((((UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2),0)))), il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),0));
		V_0 = L_0;
		// if (s == null)
		RuntimeObject* L_1 = V_0;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		// continuation(state);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_2 = ___0_continuation;
		RuntimeObject* L_3 = ___1_state;
		NullCheck(L_2);
		Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline(L_2, L_3, NULL);
		return;
	}

IL_0017:
	{
		// s.OnCompleted(continuation, state, task.token);
		RuntimeObject* L_4 = V_0;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_5 = ___0_continuation;
		RuntimeObject* L_6 = ___1_state;
		int16_t L_7 = *(int16_t*)il2cpp_codegen_get_instance_field_data_pointer((((UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2),0)))), il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),2));
		NullCheck((RuntimeObject*)L_4);
		InterfaceActionInvoker3< Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, int16_t >::Invoke(1 /* System.Void Cysharp.Threading.Tasks.IUniTaskSource::OnCompleted(System.Action`1<System.Object>,System.Object,System.Int16) */, IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D_il2cpp_TypeInfo_var, (RuntimeObject*)L_4, L_5, L_6, L_7);
		// }
		return;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m5A038831CEB84A7E374FE59D43444412629F833F_gshared_inline (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}

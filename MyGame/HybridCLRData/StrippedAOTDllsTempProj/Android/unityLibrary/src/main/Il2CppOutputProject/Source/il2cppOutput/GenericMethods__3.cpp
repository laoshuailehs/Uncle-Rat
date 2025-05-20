#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif




template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2Invoker;
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2Invoker<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		R ret;
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename R, typename T1>
struct InterfaceFuncInvoker1Invoker;
template <typename R, typename T1>
struct InterfaceFuncInvoker1Invoker<R, T1*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		R ret;
		void* params[1] = { p1 };
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
struct InvokerActionInvoker1
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};
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
struct InvokerActionInvoker2<T1*, T2>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
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
struct InvokerActionInvoker3<T1*, T2, T3>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3)
	{
		void* params[3] = { p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3)
	{
		void* params[3] = { p1, p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
struct InvokerActionInvoker8;
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
struct InvokerActionInvoker8<T1*, T2*, T3*, T4*, T5*, T6*, T7*, T8*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5, T6* p6, T7* p7, T8* p8)
	{
		void* params[8] = { p1, p2, p3, p4, p5, p6, p7, p8 };
		method->invoker_method(methodPtr, method, obj, params, params[7]);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9>
struct InvokerActionInvoker9;
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9>
struct InvokerActionInvoker9<T1*, T2*, T3*, T4*, T5*, T6*, T7*, T8*, T9*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5, T6* p6, T7* p7, T8* p8, T9* p9)
	{
		void* params[9] = { p1, p2, p3, p4, p5, p6, p7, p8, p9 };
		method->invoker_method(methodPtr, method, obj, params, params[8]);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10>
struct InvokerActionInvoker10;
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10>
struct InvokerActionInvoker10<T1*, T2*, T3*, T4*, T5*, T6*, T7*, T8*, T9*, T10*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5, T6* p6, T7* p7, T8* p8, T9* p9, T10* p10)
	{
		void* params[10] = { p1, p2, p3, p4, p5, p6, p7, p8, p9, p10 };
		method->invoker_method(methodPtr, method, obj, params, params[9]);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11>
struct InvokerActionInvoker11;
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11>
struct InvokerActionInvoker11<T1*, T2*, T3*, T4*, T5*, T6*, T7*, T8*, T9*, T10*, T11*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5, T6* p6, T7* p7, T8* p8, T9* p9, T10* p10, T11* p11)
	{
		void* params[11] = { p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11 };
		method->invoker_method(methodPtr, method, obj, params, params[10]);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12>
struct InvokerActionInvoker12;
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12>
struct InvokerActionInvoker12<T1*, T2*, T3*, T4*, T5*, T6*, T7*, T8*, T9*, T10*, T11*, T12*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5, T6* p6, T7* p7, T8* p8, T9* p9, T10* p10, T11* p11, T12* p12)
	{
		void* params[12] = { p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12 };
		method->invoker_method(methodPtr, method, obj, params, params[11]);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13>
struct InvokerActionInvoker13;
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13>
struct InvokerActionInvoker13<T1*, T2*, T3*, T4*, T5*, T6*, T7*, T8*, T9*, T10*, T11*, T12*, T13*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5, T6* p6, T7* p7, T8* p8, T9* p9, T10* p10, T11* p11, T12* p12, T13* p13)
	{
		void* params[13] = { p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13 };
		method->invoker_method(methodPtr, method, obj, params, params[12]);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14>
struct InvokerActionInvoker14;
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14>
struct InvokerActionInvoker14<T1*, T2*, T3*, T4*, T5*, T6*, T7*, T8*, T9*, T10*, T11*, T12*, T13*, T14*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5, T6* p6, T7* p7, T8* p8, T9* p9, T10* p10, T11* p11, T12* p12, T13* p13, T14* p14)
	{
		void* params[14] = { p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14 };
		method->invoker_method(methodPtr, method, obj, params, params[13]);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15>
struct InvokerActionInvoker15;
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15>
struct InvokerActionInvoker15<T1*, T2*, T3*, T4*, T5*, T6*, T7*, T8*, T9*, T10*, T11*, T12*, T13*, T14*, T15*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5, T6* p6, T7* p7, T8* p8, T9* p9, T10* p10, T11* p11, T12* p12, T13* p13, T14* p14, T15* p15)
	{
		void* params[15] = { p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15 };
		method->invoker_method(methodPtr, method, obj, params, params[14]);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16>
struct InvokerActionInvoker16;
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16>
struct InvokerActionInvoker16<T1*, T2*, T3*, T4*, T5*, T6*, T7*, T8*, T9*, T10*, T11*, T12*, T13*, T14*, T15*, T16*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5, T6* p6, T7* p7, T8* p8, T9* p9, T10* p10, T11* p11, T12* p12, T13* p13, T14* p14, T15* p15, T16* p16)
	{
		void* params[16] = { p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16 };
		method->invoker_method(methodPtr, method, obj, params, params[15]);
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
template <typename R, typename T1>
struct InvokerFuncInvoker1
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		R ret;
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2)
	{
		R ret;
		void* params[2] = { &p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
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
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4;
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2*, T3, T4>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3, T4 p4)
	{
		R ret;
		void* params[4] = { p1, p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerFuncInvoker5;
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerFuncInvoker5<R, T1*, T2*, T3*, T4, T5>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4 p4, T5 p5)
	{
		R ret;
		void* params[5] = { p1, p2, p3, &p4, &p5 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
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

// System.Action`1<YooAsset.AllAssetsHandle>
struct Action_1_t5AD92E5BF5CD65FFFEC3380D95162CDEE40C6DE4;
// System.Action`1<YooAsset.AssetHandle>
struct Action_1_t8A357F9957A727C9D85A7C8D5B8FF423F7CD1B0D;
// System.Action`1<UnityEngine.UIElements.BaseVisualElementPanel>
struct Action_1_tF0C1AFCCE9CE63382F43540DC0DA04A8939A8A53;
// System.Action`1<System.Boolean>
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C;
// System.Action`1<UnityEngine.Camera>
struct Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA;
// System.Action`1<System.Exception>
struct Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04;
// System.Action`1<UnityEngine.UIElements.IPanel>
struct Action_1_tE55F8AC1EEC45D0C976E56B2950D65EC814C06E6;
// System.Action`1<System.IntPtr>
struct Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2;
// System.Action`1<UnityEngine.Material>
struct Action_1_t996DFD52B4BDA6CBE8058C13167C4D2B8C612CAA;
// System.Action`1<UnityEngine.UIElements.MeshGenerationContext>
struct Action_1_t3DC3411926243F1DB9C330F8E105B904E38C1A0B;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<YooAsset.SubAssetsHandle>
struct Action_1_tF835693B61B023DA9730598D7984F238BA777E44;
// System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99;
// System.Action`2<System.Object,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Action_2_tF2CE797FD3D10871812A41CE44522D89D16291C5;
// System.Action`2<UnityEngine.UIElements.VisualElement,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Action_2_t31DE204344410D5DD02FBF738CE4A5EE7EDC040E;
// System.Action`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Action_2_t1D42C7D8DCD2DEB7C556FB3783F0EDAFF694E5E8;
// Cysharp.Threading.Tasks.AsyncLazy`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct AsyncLazy_1_t87351A911AC23F97600D7159986DFE3B30044433;
// Cysharp.Threading.Tasks.AsyncReactiveProperty`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct AsyncReactiveProperty_1_t55DCE046DB85F4B8B8BFAD7AE879EE536D5F9733;
// Cysharp.Threading.Tasks.Internal.AsyncSubject`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct AsyncSubject_1_t3982C4585C158000BD959AD9263782E3F3A76773;
// Cysharp.Threading.Tasks.AsyncUnityEventHandler`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct AsyncUnityEventHandler_1_tE2B8DC50E909DE9C20DA2F58857037AAAD5A238E;
// UnityEngine.UIElements.UIR.BasicNode`1<UnityEngine.UIElements.UIR.TextureEntry>
struct BasicNode_1_t7B4D545DCD6949B2E1C85D63DF038E44602F7DDB;
// System.Dynamic.Utils.CacheDict`2<System.Type,System.Func`5<System.Linq.Expressions.Expression,System.String,System.Boolean,System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>,System.Linq.Expressions.LambdaExpression>>
struct CacheDict_2_t3592A9BE3B1E812BCE8A13D901156E74C707DBB7;
// System.Dynamic.Utils.CacheDict`2<System.Type,System.Reflection.MethodInfo>
struct CacheDict_2_tB695739D50653F4D4C3DA03BCF07CC868196FB15;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Linq.Expressions.Expression,System.Linq.Expressions.Expression/ExtensionInfo>
struct ConditionalWeakTable_2_t0F3FDA57EE333DF8B8C1F3FB944E4E19C5DDCFC7;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.Linq.Expressions.ParameterExpression,System.Int32>
struct Dictionary_2_tBB429CD29D6F765D173E93E0F638CBF47BCE9A69;
// System.Collections.Generic.Dictionary`2<System.Linq.Expressions.ParameterExpression,System.Linq.Expressions.Interpreter.LocalVariable>
struct Dictionary_2_tEF46B4EA472A35123947A8DF4F68C3E8A5F0C4FD;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UIElements.StyleSheets.StylePropertyValue>
struct Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UIElements.VisualElement>
struct Dictionary_2_t41165BF747F041590086BE39A59BE164430A3CEF;
// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.UIElements.VisualElement/TypeData>
struct Dictionary_2_t4055F6540F36F21F9FEDAFB92D8E0089B38EBBC8;
// System.Linq.Expressions.Expression`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4;
// System.Func`1<Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>
struct Func_1_tBAE452E06E04175D6A1F37BAA4412688F5DBD769;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Func`2<System.Single,System.Single>
struct Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2;
// System.Func`2<UnityEngine.UIElements.VisualElement,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Func_2_t1A4B0E4DC4C1E0796BCC42B35916E26E1F91056C;
// System.Func`3<System.String,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Func_3_tE7CCA5D7FC8F72537603F92EA4D2500163145CB0;
// System.Func`4<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Single,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Func_4_t2D728D40D290F8C65346C870D314F893B5896872;
// System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>
struct HashSet_1_t068F5201D923072F46716204841D21328FE6218D;
// System.Collections.Generic.HashSet`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87;
// System.Collections.Generic.IEnumerable`1<System.Linq.Expressions.ParameterExpression>
struct IEnumerable_1_t49C2F44B68A54E1D7F267F9CC6AEAE8497D42901;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Bounds>
struct IEqualityComparer_1_t06C346ACFCD6FA7B6357E6392FA8842A209C66E7;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.BoundsInt>
struct IEqualityComparer_1_t2EDEDBAF19E8BF7F3EA065CC1D0D3578B4A90052;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Color>
struct IEqualityComparer_1_t77537F328C44F595A172667E303D57CCA306F54D;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Color32>
struct IEqualityComparer_1_tE5166E96F3B07686A8D0875FE3BF15DC56FED779;
// System.Collections.Generic.IEqualityComparer`1<System.Linq.Expressions.ParameterExpression>
struct IEqualityComparer_1_t3950A1C72D0704C9A5D08F255CB6BE1525EDC4A9;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Quaternion>
struct IEqualityComparer_1_tC69064DA61A5BCF7B3EA5F0B53979229260D3DCB;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.RangeInt>
struct IEqualityComparer_1_t7E98D8AD41D5E0E35D1CFF51C260ABD2A500B2F3;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Rect>
struct IEqualityComparer_1_tFC2ABE854EE94E6C4917178A3A4652222F165E32;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.RectInt>
struct IEqualityComparer_1_tDC8906B8491813B2FB353E856B89603200C3255B;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Vector2>
struct IEqualityComparer_1_t1FADF29047F4FD7955E0951D880F1D3D8CBDD4B1;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Vector2Int>
struct IEqualityComparer_1_t4275A3D7B86C2D3C66842AB0700881FB24837F2D;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Vector3>
struct IEqualityComparer_1_t9E98CD5E012FAD3C745699045489B5B858B1B8B5;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Vector3Int>
struct IEqualityComparer_1_tC53A6B5E00FD0034DDB9D7A2B505C1E784820A60;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Vector4>
struct IEqualityComparer_1_t5442E8A434F2EE43566F33724D3E6C43B4737A72;
// System.Collections.Generic.IEqualityComparer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct IEqualityComparer_1_t47CC0B235E693652D181B679FF6D61A469ECC122;
// System.IObservable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct IObservable_1_tA29A83F0C2D67B7465AEA27D123F8F8B6514E475;
// System.IObserver`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct IObserver_1_t094BE2515872266E98A772AEA02B413105F16A8B;
// Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise`1<System.ValueTuple`2<System.Boolean,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>
struct IStateMachineRunnerPromise_1_tFEEB91EBFE44703F5AC2D51DA4A40C61AB892898;
// Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct IStateMachineRunnerPromise_1_t33359314377828B79D5AB55278350F65F2237DD9;
// Cysharp.Threading.Tasks.ITriggerHandler`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ITriggerHandler_1_t53BCC826B29B27388A8A63C9E80F17313AB22E2C;
// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct IUniTaskAsyncEnumerable_1_tB465D2725680B21CF3074178AECADD1D24C24A74;
// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct IUniTaskAsyncEnumerator_1_t256C7409E6B13FF3224A57D2DD1A4D52A2C40092;
// Cysharp.Threading.Tasks.IUniTaskSource`1<System.Threading.Tasks.Task`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>
struct IUniTaskSource_1_t167811B909E81554B950B61CABFC9DAC4DEB44B0;
// Cysharp.Threading.Tasks.IUniTaskSource`1<Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>
struct IUniTaskSource_1_t22418BC37E57847FCBA6CD676401D9FA47C2FCCE;
// Cysharp.Threading.Tasks.IUniTaskSource`1<System.ValueTuple`2<System.Boolean,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>
struct IUniTaskSource_1_t16E8296E3AD15BFEDDED843C886E39F4303D1999;
// Cysharp.Threading.Tasks.IUniTaskSource`1<System.ValueTuple`3<System.Int32,System.ValueTuple`2<System.Boolean,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,System.Boolean>>
struct IUniTaskSource_1_t09454351D5977EE9996E73FAE69956621923FB9D;
// Cysharp.Threading.Tasks.IUniTaskSource`1<System.ValueTuple`7<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>
struct IUniTaskSource_1_tA092A0E2FA8540EDD559B77BAA6360E4DB0D7125;
// Cysharp.Threading.Tasks.IUniTaskSource`1<System.ValueTuple`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.ValueTuple`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>>
struct IUniTaskSource_1_t521C68E78FE9CBA36DA43569FD3AB48E1F174E8A;
// Cysharp.Threading.Tasks.IUniTaskSource`1<System.ValueTuple`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.ValueTuple`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>>
struct IUniTaskSource_1_tFF4426756226A2C9EA64B0A51C50825E0E3859C8;
// Cysharp.Threading.Tasks.IUniTaskSource`1<System.ValueTuple`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.ValueTuple`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>>
struct IUniTaskSource_1_tCF22284C2BB38B248FCD0D0630AF1CEDADBADE8A;
// Cysharp.Threading.Tasks.IUniTaskSource`1<System.ValueTuple`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.ValueTuple`4<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>>
struct IUniTaskSource_1_tA13B82C56C668FECE411D36A5A207F4D8282AD80;
// Cysharp.Threading.Tasks.IUniTaskSource`1<System.ValueTuple`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.ValueTuple`5<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>>
struct IUniTaskSource_1_tDA5261D8AE242D4C6D8164DA42D93ED3E55657B0;
// Cysharp.Threading.Tasks.IUniTaskSource`1<System.ValueTuple`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.ValueTuple`6<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>>
struct IUniTaskSource_1_t5214B499306BB3753D0D404739255351CFB22982;
// Cysharp.Threading.Tasks.IUniTaskSource`1<System.ValueTuple`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.ValueTuple`7<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>>
struct IUniTaskSource_1_t000992B9660D29EA6E1E3953072336FFCFAB40FA;
// Cysharp.Threading.Tasks.IUniTaskSource`1<System.ValueTuple`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.ValueTuple`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.ValueTuple`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>>>
struct IUniTaskSource_1_tBEA9A118EF578D9FA047136FDDB55C290EC6B75C;
// Cysharp.Threading.Tasks.IUniTaskSource`1<System.Boolean>
struct IUniTaskSource_1_tB6B218F9BB467453A6CBAEE053820D3B3E8F891C;
// Cysharp.Threading.Tasks.IUniTaskSource`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct IUniTaskSource_1_tA27C284FF17E3AAB5B5D07A7E4DE207B56F764AB;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.PropertyName,System.Object>>
struct List_1_t60F39D768DAD2345527AD3EE73FAB2667DF4F260;
// System.Collections.Generic.List`1<System.ValueTuple`2<System.Action`1<System.Object>,System.Object>>
struct List_1_tAC26125DAA41163FF3DD2E32A7717FDC111D1D8F;
// System.Collections.Generic.List`1<UnityEngine.UIElements.Experimental.IValueAnimationUpdate>
struct List_1_t96E9133B70FB6765E6B138E810D33E18901715DA;
// System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>
struct List_1_t1A058A09EDF187502B71E068C526B964CEA1283F;
// System.Collections.Generic.List`1<UnityEngine.UIElements.UIR.RenderChainTextEntry>
struct List_1_t3ADC2CEE608F7E0043EBE4FD425E6C9AE43E19CC;
// System.Collections.Generic.List`1<YooAsset.ResourcePackage>
struct List_1_t34A5F992A0C261FD9E072E04F6EB044CC633B43A;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSheet>
struct List_1_tEA16F82F7871418E28EB6F551D77A8AD9F2E337F;
// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement>
struct List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95;
// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
// System.Collections.Generic.List`1<UnityEngine.UIElements.TemplateAsset/AttributeOverride>
struct List_1_t70EE7982F45810D4B024CF720D910E67974A3094;
// UnityEngine.UIElements.ObjectPool`1<UnityEngine.UIElements.Experimental.ValueAnimation`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>
struct ObjectPool_1_t14AD861DB16C1D8128773A1568BD9925E67A9ADB;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// UnityEngine.UIElements.StyleDataRef`1/RefCounted<UnityEngine.UIElements.InheritedData>
struct RefCounted_t6B975CD3D06E8D955346FC0D66E8F6E449D49A44;
// UnityEngine.UIElements.StyleDataRef`1/RefCounted<UnityEngine.UIElements.LayoutData>
struct RefCounted_t0E133AD36715877AE1CE72539A0199B4D3AA8CD1;
// UnityEngine.UIElements.StyleDataRef`1/RefCounted<UnityEngine.UIElements.RareData>
struct RefCounted_t81BCBAE57D930C934CF7A439452D65303AC6A8CD;
// UnityEngine.UIElements.StyleDataRef`1/RefCounted<UnityEngine.UIElements.TransformData>
struct RefCounted_t78303B1CD3D08C664ABB15EBD7C882DA3E06CF7D;
// UnityEngine.UIElements.StyleDataRef`1/RefCounted<UnityEngine.UIElements.TransitionData>
struct RefCounted_tA9FB4D63A1064BD322AFDFCD70319CB384C057D9;
// UnityEngine.UIElements.StyleDataRef`1/RefCounted<UnityEngine.UIElements.VisualData>
struct RefCounted_t812D790A2C787F18230F9234F6C9B84D4AC1A85A;
// System.Threading.SparselyPopulatedArrayFragment`1<System.Threading.CancellationCallbackInfo>
struct SparselyPopulatedArrayFragment_1_tB32DA8C2B7461E80CE4C271B76C103629BDFA035;
// System.Collections.Generic.Stack`1<System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>>
struct Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26;
// System.Collections.Generic.Stack`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A;
// System.Threading.Tasks.TaskFactory`1<Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>
struct TaskFactory_1_t63EDFF95307B61A8B48633032E4729CFD20A6AC1;
// System.Threading.Tasks.Task`1<Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>
struct Task_1_tEEFAF6747CE41C77B985860193E36BC44BA345B3;
// System.Threading.Tasks.Task`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// Cysharp.Threading.Tasks.UniTaskCompletionSource`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct UniTaskCompletionSource_1_t3B7C6F0FED2BC49F65D51510327C3A1E6186E8EA;
// UnityEngine.Events.UnityAction`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct UnityAction_1_tC5C168260FDBBEDACD1D1996850C58AA3E9C2259;
// UnityEngine.Events.UnityEvent`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030;
// UnityEngine.UIElements.Experimental.ValueAnimation`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ValueAnimation_1_tDA4866B3FE9CA9CF66BAA0D3DB3591B35CC1C482;
// System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>[]
struct HashSet_1U5BU5D_tFCEF942AC56CEEEEF243A16089184E53958046D4;
// System.Collections.Generic.HashSet`1/Slot<System.Linq.Expressions.ParameterExpression>[]
struct SlotU5BU5D_t5B6221310D92CD3EFED99B5A41997E4715E36338;
// System.Threading.SparselyPopulatedArray`1<System.Threading.CancellationCallbackInfo>[]
struct SparselyPopulatedArray_1U5BU5D_t8E75A036E16E53CF08AAAF37EB6621DE3B26307E;
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.UIElements.ComputedTransitionProperty[]
struct ComputedTransitionPropertyU5BU5D_t25B9E78F5276CDA297C8215C316452CAB8219E82;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Double[]
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE;
// UnityEngine.UIElements.IVisualTreeUpdater[]
struct IVisualTreeUpdaterU5BU5D_t9E9D948BC4F327DA519FEB2BCEC12FB7FD7C59E8;
// System.Int16[]
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.Int64[]
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Linq.Expressions.ParameterExpression[]
struct ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C;
// System.SByte[]
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType[]
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// YooAsset.AllAssetsHandle
struct AllAssetsHandle_t78A9BC3036FC89AC7709A19268CCFC3A436D85FE;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// YooAsset.AssetHandle
struct AssetHandle_tA226E2C9CFE7231AF71DFADFCBF947D4D1CC2AF3;
// YooAsset.AssetInfo
struct AssetInfo_t6646B3A8F405CC4B9221FB0F9F3E3DCDB98F1456;
// UnityEngine.UIElements.BaseVisualElementPanel
struct BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
// System.Threading.CancellationCallbackInfo
struct CancellationCallbackInfo_tC8BE558ED1E173434DD1919D574C9FAFE501E22D;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// UnityEngine.UIElements.ContextualMenuManager
struct ContextualMenuManager_tEE3B1F33FFFD180705467CA625AEBA0F5D63154B;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.UIElements.ElementUnderPointer
struct ElementUnderPointer_tB43AD64F79C6F06829D8B90318AF1A6BBE9C1904;
// UnityEngine.UIElements.EventCallbackRegistry
struct EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85;
// System.Exception
struct Exception_t;
// System.Runtime.ExceptionServices.ExceptionDispatchInfo
struct ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757;
// Cysharp.Threading.Tasks.ExceptionHolder
struct ExceptionHolder_t877D929A153D46C3BDA043B4058034AF85FB73B1;
// System.Linq.Expressions.Expression
struct Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8;
// UnityEngine.UIElements.HierarchyEvent
struct HierarchyEvent_tB23E4347BC47656A014CA104A5B1DDC172A2A705;
// YooAsset.IBundleQuery
struct IBundleQuery_t73C83DDA79D523D2EFEF3B3AB30B04BD2614D19E;
// UnityEngine.UIElements.ICursorManager
struct ICursorManager_t78B026DED2559C62810B21C54C5F882457073A8B;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IDisposable
struct IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// YooAsset.IPlayMode
struct IPlayMode_t95BB7C5618240D1D311DEDD78AB74B4A13FC4B55;
// Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunner
struct IStateMachineRunner_t3A836435C3888D526E17BE077AF89B93F0637148;
// Cysharp.Threading.Tasks.IUniTaskSource
struct IUniTaskSource_t5AF6C202B2616C72E989C90B6E76DFEC4118174D;
// UnityEngine.UIElements.IUxmlAttributes
struct IUxmlAttributes_t9B6679F04874117C59014DE49C35B1841F9A1DDE;
// UnityEngine.UIElements.IVisualTreeUpdater
struct IVisualTreeUpdater_t4AF1E0B23A6AEFF024F1AC23815089B2495C7F06;
// System.Xml.IXmlNamespaceResolver
struct IXmlNamespaceResolver_t5B384C1DCF0750B44E124D640E4F041DB19B7FD1;
// UnityEngine.UIElements.InlineStyleAccess
struct InlineStyleAccess_t5CA7877999C9442491A220AE50D605C84D09A165;
// System.Linq.Expressions.Interpreter.InterpretedFrame
struct InterpretedFrame_tF030A9AC78837B1C2F9CD54B43F7A04D85A8D92D;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// System.Linq.Expressions.LambdaExpression
struct LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.UIElements.UIR.MeshHandle
struct MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Linq.Expressions.ParameterExpression
struct ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// YooAsset.ProviderOperation
struct ProviderOperation_t71913303D5FF65BABC7FFB845400A71EF8BA0A53;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
// UnityEngine.UIElements.UIR.RenderChainCommand
struct RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727;
// UnityEngine.UIElements.RepaintData
struct RepaintData_t90534752135661579EC254884F550545D001B5EA;
// YooAsset.ResourceManager
struct ResourceManager_tC27DBE237BAEAC755E5EB6AC4EB2B549387C3BDA;
// YooAsset.ResourcePackage
struct ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// Cysharp.Threading.Tasks.Internal.SingleAssignmentDisposable
struct SingleAssignmentDisposable_t9AA5F201708E252ABAEECE56258D630EF672906A;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// UnityEngine.UIElements.StyleVariableContext
struct StyleVariableContext_tF74F2787CE1F6BEBBFBFF0771CF493AC9E403527;
// YooAsset.SubAssetsHandle
struct SubAssetsHandle_tDC3D1998EC32E3948617E5F6EA89DFC035EF2F2B;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// System.Threading.Timer
struct Timer_t763C1D5F5A36087DC92C7DA4D1F8AB578F83AB00;
// System.Threading.TimerCallback
struct TimerCallback_t7455CAFACC7054E62879920AFC84C5DA98B8C7CD;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UIElements.UxmlAttributeDescription
struct UxmlAttributeDescription_t742D021489DB2B564142146CAAAC3F9191825EF2;
// UnityEngine.UIElements.UxmlTypeRestriction
struct UxmlTypeRestriction_t2C4CE1ED76502CDF80010880E058AF0582910A92;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// UnityEngine.UIElements.VisualElement
struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115;
// UnityEngine.UIElements.VisualTreeAsset
struct VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB;
// UnityEngine.UIElements.VisualTreeUpdater
struct VisualTreeUpdater_tFDE7D9F9A146A26B2ED69565B7BD142B416AB9C9;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.Xml.Linq.XContainer
struct XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF;
// System.Xml.Linq.XDeclaration
struct XDeclaration_t62AAE9A25589F7D4C5B016DDF6DF858D11A2A990;
// System.Xml.Linq.XDocument
struct XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1;
// System.Xml.Linq.XObject
struct XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29;
// System.Xml.Schema.XmlListConverter
struct XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA;
// System.Xml.Schema.XmlSchemaType
struct XmlSchemaType_t36630F421D730DDFA33CBA5BA6548094ABF40DDF;
// System.Xml.Schema.XmlValueConverter
struct XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E;
// UnityEngine.Yoga.YogaConfig
struct YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345;
// UnityEngine.Yoga.YogaNode
struct YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA;
// System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor
struct QuoteVisitor_tAF65D5FC6B193B07A3D795C928F4E02DA518529F;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter
struct ExpressionQuoter_t3D5F35B2980800F7F947EBC0819D867CF5AAD536;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;
// UnityEngine.UIElements.VisualElement/CustomStyleAccess
struct CustomStyleAccess_t170C852102B4D09FB478B620A75B14D096F9F2B1;
// UnityEngine.UIElements.VisualElement/TypeData
struct TypeData_t01D670B4E71B5571B38C7412B1E652A47D6AF66A;
// UnityEngine.UIElements.VisualTreeUpdater/UpdaterArray
struct UpdaterArray_tF8D43D2A3598E7C17ABB5308E83FDECF1F36A449;

IL2CPP_EXTERN_C RuntimeClass* AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_t068F5201D923072F46716204841D21328FE6218D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t1A058A09EDF187502B71E068C526B964CEA1283F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleAssignmentDisposable_t9AA5F201708E252ABAEECE56258D630EF672906A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XNode_t185C922661054AAD14F49676DD6F3CB10D652A30_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral24CC8D396132365E532646F936DFC8579E2299B2;
IL2CPP_EXTERN_C String_t* _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D;
IL2CPP_EXTERN_C String_t* _stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C;
IL2CPP_EXTERN_C String_t* _stringLiteralBF44A05DB008A507A463F2A13F1907FEB2E4B19F;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m3FAA05D641D29AC345AA871116A0E236549DB39F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m72E70DE20E4D4DFE86D505EDD3DBEA47E50449A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m90AEF23AAC38CF4A308B9996EEF66C89F96E6A4D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UxmlAttributeDescription_GetValueFromBag_TisIl2CppFullySharedGenericAny_mAD4F4838D245291B33A0A6819595AAE917FA073A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _AndroidJNIHelper_ConvertFromJNIArray_TisIl2CppFullySharedGenericAny_mD6B660A63955117687D6131FC1DB255161D1A2BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* String_t_0_0_0_var;
struct ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_com;
struct ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001;
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE;
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C;
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Cysharp.Threading.Tasks.Internal.AsyncSubject`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct AsyncSubject_1_t3982C4585C158000BD959AD9263782E3F3A76773 : public RuntimeObject {};

// Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/Cache`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Cache_1_t7B4A181E5E427597BF4280A8F15C1644BC269237  : public RuntimeObject
{
};

// System.EmptyArray`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct EmptyArray_1_tF69A5F6BAD1150A16C4C98B346D6122FE3751C80  : public RuntimeObject
{
};

// System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>
struct HashSet_1_t068F5201D923072F46716204841D21328FE6218D  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t5B6221310D92CD3EFED99B5A41997E4715E36338* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_14;
};

// System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>
struct List_1_t1A058A09EDF187502B71E068C526B964CEA1283F  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// Cysharp.Threading.Tasks.UniTaskObservableExtensions/ReturnObservable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ReturnObservable_1_t1C4CFDAF8389F57E4638B43FDA51EFDC6733070F : public RuntimeObject {};

// System.Collections.Generic.Stack`1<System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>>
struct Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26  : public RuntimeObject
{
	// T[] System.Collections.Generic.Stack`1::_array
	HashSet_1U5BU5D_tFCEF942AC56CEEEEF243A16089184E53958046D4* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject* ____syncRoot_3;
};

// Cysharp.Threading.Tasks.UniTaskObservableExtensions/ThrowObservable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ThrowObservable_1_t0A164A18067C7770B74986E8C0EFD928CC52ECE5  : public RuntimeObject
{
	// System.Exception Cysharp.Threading.Tasks.UniTaskObservableExtensions/ThrowObservable`1::value
	Exception_t* ___value_0;
};

// UnityEngine.UIElements.Experimental.ValueAnimation`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ValueAnimation_1_tDA4866B3FE9CA9CF66BAA0D3DB3591B35CC1C482 : public RuntimeObject {};

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0  : public RuntimeObject
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jclass_2;
};

// UnityEngine.UIElements.CallbackEventHandler
struct CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4  : public RuntimeObject
{
	// UnityEngine.UIElements.EventCallbackRegistry UnityEngine.UIElements.CallbackEventHandler::m_CallbackRegistry
	EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* ___m_CallbackRegistry_0;
};

// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B  : public RuntimeObject
{
	// System.Threading.ManualResetEvent modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::_kernelEvent
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ____kernelEvent_3;
	// System.Threading.SparselyPopulatedArray`1<System.Threading.CancellationCallbackInfo>[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::_registeredCallbacksLists
	SparselyPopulatedArray_1U5BU5D_t8E75A036E16E53CF08AAAF37EB6621DE3B26307E* ____registeredCallbacksLists_4;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::_state
	int32_t ____state_9;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::_threadIDExecutingCallbacks
	int32_t ____threadIDExecutingCallbacks_10;
	// System.Boolean System.Threading.CancellationTokenSource::_disposed
	bool ____disposed_11;
	// System.Threading.CancellationCallbackInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::_executingCallback
	CancellationCallbackInfo_tC8BE558ED1E173434DD1919D574C9FAFE501E22D* ____executingCallback_12;
	// System.Threading.Timer modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.CancellationTokenSource::_timer
	Timer_t763C1D5F5A36087DC92C7DA4D1F8AB578F83AB00* ____timer_13;
};

// System.Linq.Expressions.Expression
struct Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785  : public RuntimeObject
{
};

// System.Linq.Expressions.ExpressionVisitor
struct ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590  : public RuntimeObject
{
};

// YooAsset.HandleBase
struct HandleBase_t571827F810EAE331C05542D54B2C396C605DB4DA  : public RuntimeObject
{
	// YooAsset.AssetInfo YooAsset.HandleBase::_assetInfo
	AssetInfo_t6646B3A8F405CC4B9221FB0F9F3E3DCDB98F1456* ____assetInfo_0;
	// YooAsset.ProviderOperation YooAsset.HandleBase::<Provider>k__BackingField
	ProviderOperation_t71913303D5FF65BABC7FFB845400A71EF8BA0A53* ___U3CProviderU3Ek__BackingField_1;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// YooAsset.ResourcePackage
struct ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022  : public RuntimeObject
{
	// System.Boolean YooAsset.ResourcePackage::_isInitialize
	bool ____isInitialize_0;
	// System.String YooAsset.ResourcePackage::_initializeError
	String_t* ____initializeError_1;
	// YooAsset.EOperationStatus YooAsset.ResourcePackage::_initializeStatus
	int32_t ____initializeStatus_2;
	// YooAsset.EPlayMode YooAsset.ResourcePackage::_playMode
	int32_t ____playMode_3;
	// YooAsset.ResourceManager YooAsset.ResourcePackage::_resourceManager
	ResourceManager_tC27DBE237BAEAC755E5EB6AC4EB2B549387C3BDA* ____resourceManager_4;
	// YooAsset.IBundleQuery YooAsset.ResourcePackage::_bundleQuery
	RuntimeObject* ____bundleQuery_5;
	// YooAsset.IPlayMode YooAsset.ResourcePackage::_playModeImpl
	RuntimeObject* ____playModeImpl_6;
	// System.String YooAsset.ResourcePackage::PackageName
	String_t* ___PackageName_7;
};

// Cysharp.Threading.Tasks.Internal.SingleAssignmentDisposable
struct SingleAssignmentDisposable_t9AA5F201708E252ABAEECE56258D630EF672906A  : public RuntimeObject
{
	// System.Object Cysharp.Threading.Tasks.Internal.SingleAssignmentDisposable::gate
	RuntimeObject* ___gate_0;
	// System.IDisposable Cysharp.Threading.Tasks.Internal.SingleAssignmentDisposable::current
	RuntimeObject* ___current_1;
	// System.Boolean Cysharp.Threading.Tasks.Internal.SingleAssignmentDisposable::disposed
	bool ___disposed_2;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_23;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_26;
};

// Cysharp.Threading.Tasks.UniTaskExtensions
struct UniTaskExtensions_tDB5A98DA9DD0DBE79E45C83404FDE9DBB4E5ED7E  : public RuntimeObject
{
};

// Cysharp.Threading.Tasks.UniTaskObservableExtensions
struct UniTaskObservableExtensions_t65396F4F34C78AA9ABDB78997D28CA93DCF86045  : public RuntimeObject
{
};

// Cysharp.Threading.Tasks.UnityAsyncExtensions
struct UnityAsyncExtensions_t198C2CAC915E67839F3AA3FA06C7B24DC883F9D9  : public RuntimeObject
{
};

// Cysharp.Threading.Tasks.UnityBindingExtensions
struct UnityBindingExtensions_tDB3E85DA000CEAF6EC490490E7DF6757D3429CE6  : public RuntimeObject
{
};

// Cysharp.Threading.Tasks.Internal.UnityEqualityComparer
struct UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B  : public RuntimeObject
{
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
};

// System.Runtime.CompilerServices.Unsafe
struct Unsafe_t013486CBD5A88F5F394651AB34F2AC5AE97E71E4  : public RuntimeObject
{
};

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility
struct UnsafeUtility_tC3E6B7D52A973A81739E8BD97D6E757BA8371D46  : public RuntimeObject
{
};

// UnityEngine.UIElements.UIR.Utility
struct Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD  : public RuntimeObject
{
};

// UnityEngine.UIElements.UxmlAttributeDescription
struct UxmlAttributeDescription_t742D021489DB2B564142146CAAAC3F9191825EF2  : public RuntimeObject
{
	// System.String UnityEngine.UIElements.UxmlAttributeDescription::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
	// System.String[] UnityEngine.UIElements.UxmlAttributeDescription::m_ObsoleteNames
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_ObsoleteNames_1;
	// System.String UnityEngine.UIElements.UxmlAttributeDescription::<type>k__BackingField
	String_t* ___U3CtypeU3Ek__BackingField_2;
	// System.String UnityEngine.UIElements.UxmlAttributeDescription::<typeNamespace>k__BackingField
	String_t* ___U3CtypeNamespaceU3Ek__BackingField_3;
	// UnityEngine.UIElements.UxmlAttributeDescription/Use UnityEngine.UIElements.UxmlAttributeDescription::<use>k__BackingField
	int32_t ___U3CuseU3Ek__BackingField_4;
	// UnityEngine.UIElements.UxmlTypeRestriction UnityEngine.UIElements.UxmlAttributeDescription::<restriction>k__BackingField
	UxmlTypeRestriction_t2C4CE1ED76502CDF80010880E058AF0582910A92* ___U3CrestrictionU3Ek__BackingField_5;
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

// System.Numerics.Vector
struct Vector_t246EF05F1CA5F494FB8B48AB2724DFCD2C2C5A9A  : public RuntimeObject
{
};

// UnityEngine.UIElements.VisualTreeUpdater
struct VisualTreeUpdater_tFDE7D9F9A146A26B2ED69565B7BD142B416AB9C9  : public RuntimeObject
{
	// UnityEngine.UIElements.BaseVisualElementPanel UnityEngine.UIElements.VisualTreeUpdater::m_Panel
	BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* ___m_Panel_0;
	// UnityEngine.UIElements.VisualTreeUpdater/UpdaterArray UnityEngine.UIElements.VisualTreeUpdater::m_UpdaterArray
	UpdaterArray_tF8D43D2A3598E7C17ABB5308E83FDECF1F36A449* ___m_UpdaterArray_1;
};

// System.Threading.Volatile
struct Volatile_tC26FEDFD254742AD25E4B908FA81293FBBF4ECB0  : public RuntimeObject
{
};

// System.Xml.Linq.XObject
struct XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29  : public RuntimeObject
{
	// System.Xml.Linq.XContainer System.Xml.Linq.XObject::parent
	XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF* ___parent_0;
	// System.Object System.Xml.Linq.XObject::annotations
	RuntimeObject* ___annotations_1;
};

// System.Xml.Schema.XmlValueConverter
struct XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E  : public RuntimeObject
{
};

// YooAsset.YooAssets
struct YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56  : public RuntimeObject
{
};

// UnityEngine._AndroidJNIHelper
struct _AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3  : public RuntimeObject
{
};

// UnityEngine.UIElements.VisualTreeUpdater/UpdaterArray
struct UpdaterArray_tF8D43D2A3598E7C17ABB5308E83FDECF1F36A449  : public RuntimeObject
{
	// UnityEngine.UIElements.IVisualTreeUpdater[] UnityEngine.UIElements.VisualTreeUpdater/UpdaterArray::m_VisualTreeUpdaters
	IVisualTreeUpdaterU5BU5D_t9E9D948BC4F327DA519FEB2BCEC12FB7FD7C59E8* ___m_VisualTreeUpdaters_0;
};

// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
typedef Il2CppFullySharedGenericStruct AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52;

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>
struct ConfiguredTaskAwaiter_tF89C367D501ABFB603B779C26BF151AAD7182B97 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_task
	Task_1_tEEFAF6747CE41C77B985860193E36BC44BA345B3* ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;
};

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ConfiguredTaskAwaiter_tB2708B017EE82067B2492CD61623784137A1AE0A 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_task
	Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1/ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;
};

// Unity.Collections.NativeSlice`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>
struct NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 
{
	// System.Byte* Unity.Collections.NativeSlice`1::m_Buffer
	uint8_t* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeSlice`1::m_Stride
	int32_t ___m_Stride_1;
	// System.Int32 Unity.Collections.NativeSlice`1::m_Length
	int32_t ___m_Length_2;
};

// System.Threading.SparselyPopulatedArrayAddInfo`1<System.Threading.CancellationCallbackInfo>
struct SparselyPopulatedArrayAddInfo_1_t3C73DC53EB2CF8545348E3275C09690FFA1E5359 
{
	// System.Threading.SparselyPopulatedArrayFragment`1<T> System.Threading.SparselyPopulatedArrayAddInfo`1::_source
	SparselyPopulatedArrayFragment_1_tB32DA8C2B7461E80CE4C271B76C103629BDFA035* ____source_0;
	// System.Int32 System.Threading.SparselyPopulatedArrayAddInfo`1::_index
	int32_t ____index_1;
};

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.InheritedData>
struct StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA 
{
	// UnityEngine.UIElements.StyleDataRef`1/RefCounted<T> UnityEngine.UIElements.StyleDataRef`1::m_Ref
	RefCounted_t6B975CD3D06E8D955346FC0D66E8F6E449D49A44* ___m_Ref_0;
};

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.LayoutData>
struct StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 
{
	// UnityEngine.UIElements.StyleDataRef`1/RefCounted<T> UnityEngine.UIElements.StyleDataRef`1::m_Ref
	RefCounted_t0E133AD36715877AE1CE72539A0199B4D3AA8CD1* ___m_Ref_0;
};

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.RareData>
struct StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 
{
	// UnityEngine.UIElements.StyleDataRef`1/RefCounted<T> UnityEngine.UIElements.StyleDataRef`1::m_Ref
	RefCounted_t81BCBAE57D930C934CF7A439452D65303AC6A8CD* ___m_Ref_0;
};

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.TransformData>
struct StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 
{
	// UnityEngine.UIElements.StyleDataRef`1/RefCounted<T> UnityEngine.UIElements.StyleDataRef`1::m_Ref
	RefCounted_t78303B1CD3D08C664ABB15EBD7C882DA3E06CF7D* ___m_Ref_0;
};

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.TransitionData>
struct StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E 
{
	// UnityEngine.UIElements.StyleDataRef`1/RefCounted<T> UnityEngine.UIElements.StyleDataRef`1::m_Ref
	RefCounted_tA9FB4D63A1064BD322AFDFCD70319CB384C057D9* ___m_Ref_0;
};

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.VisualData>
struct StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC 
{
	// UnityEngine.UIElements.StyleDataRef`1/RefCounted<T> UnityEngine.UIElements.StyleDataRef`1::m_Ref
	RefCounted_t812D790A2C787F18230F9234F6C9B84D4AC1A85A* ___m_Ref_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>
struct TaskAwaiter_1_t80A980C22809EFEF0AF274020864CD0E165FD05B 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_tEEFAF6747CE41C77B985860193E36BC44BA345B3* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* ___m_task_0;
};

// Cysharp.Threading.Tasks.TriggerEvent`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct TriggerEvent_1_t4D603DB487DB30F0FBD2EE01A6AF71CA4F4476E0 
{
	// Cysharp.Threading.Tasks.ITriggerHandler`1<T> Cysharp.Threading.Tasks.TriggerEvent`1::head
	RuntimeObject* ___head_0;
	// Cysharp.Threading.Tasks.ITriggerHandler`1<T> Cysharp.Threading.Tasks.TriggerEvent`1::iteratingHead
	RuntimeObject* ___iteratingHead_1;
	// Cysharp.Threading.Tasks.ITriggerHandler`1<T> Cysharp.Threading.Tasks.TriggerEvent`1::iteratingNode
	RuntimeObject* ___iteratingNode_2;
};

// Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
typedef Il2CppFullySharedGenericStruct UniTaskCompletionSourceCore_1_t146409427AB3F018819917FFA1FDC70FDB5C0BBF;

// Cysharp.Threading.Tasks.UniTask`1<System.Threading.Tasks.Task`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>
struct UniTask_1_t15FB22B9C3B0D09E56C5B71B80853B5C804E6129 
{
	// Cysharp.Threading.Tasks.IUniTaskSource`1<T> Cysharp.Threading.Tasks.UniTask`1::source
	RuntimeObject* ___source_0;
	// T Cysharp.Threading.Tasks.UniTask`1::result
	Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* ___result_1;
	// System.Int16 Cysharp.Threading.Tasks.UniTask`1::token
	int16_t ___token_2;
};

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

// UnityEngine.Events.UnityEvent`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// System.ValueTuple`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
typedef Il2CppFullySharedGenericStruct ValueTuple_1_t8587BAAE6DE27A90339279F96A1B89714EE33EAF;

// System.ValueTuple`2<System.Boolean,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
typedef Il2CppFullySharedGenericStruct ValueTuple_2_t12FAF519E3C63CCF3F3CE5FF1FB62945AC7530AA;

// System.ValueTuple`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
typedef Il2CppFullySharedGenericStruct ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829;

// System.ValueTuple`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
typedef Il2CppFullySharedGenericStruct ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98;

// System.ValueTuple`4<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
typedef Il2CppFullySharedGenericStruct ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F;

// System.ValueTuple`5<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
typedef Il2CppFullySharedGenericStruct ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56;

// System.ValueTuple`6<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
typedef Il2CppFullySharedGenericStruct ValueTuple_6_tE8A03F60FCD93258020B4CD89B7217212CFE0795;

// System.ValueTuple`7<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
typedef Il2CppFullySharedGenericStruct ValueTuple_7_t0E41CF1DF39C56198B43B2DB7D4DBB90521B4E39;

// YooAsset.AllAssetsHandle
struct AllAssetsHandle_t78A9BC3036FC89AC7709A19268CCFC3A436D85FE  : public HandleBase_t571827F810EAE331C05542D54B2C396C605DB4DA
{
	// System.Action`1<YooAsset.AllAssetsHandle> YooAsset.AllAssetsHandle::_callback
	Action_1_t5AD92E5BF5CD65FFFEC3380D95162CDEE40C6DE4* ____callback_2;
};

// YooAsset.AssetHandle
struct AssetHandle_tA226E2C9CFE7231AF71DFADFCBF947D4D1CC2AF3  : public HandleBase_t571827F810EAE331C05542D54B2C396C605DB4DA
{
	// System.Action`1<YooAsset.AssetHandle> YooAsset.AssetHandle::_callback
	Action_1_t8A357F9957A727C9D85A7C8D5B8FF423F7CD1B0D* ____callback_2;
};

// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder
struct AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B 
{
	// Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunner Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder::runner
	RuntimeObject* ___runner_0;
};

// UnityEngine.UIElements.UIR.BMPAlloc
struct BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 
{
	// System.Int32 UnityEngine.UIElements.UIR.BMPAlloc::page
	int32_t ___page_1;
	// System.UInt16 UnityEngine.UIElements.UIR.BMPAlloc::pageLine
	uint16_t ___pageLine_2;
	// System.Byte UnityEngine.UIElements.UIR.BMPAlloc::bitIndex
	uint8_t ___bitIndex_3;
	// UnityEngine.UIElements.UIR.OwnedState UnityEngine.UIElements.UIR.BMPAlloc::ownedState
	uint8_t ___ownedState_4;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
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

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.UIElements.CreationContext
struct CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257 
{
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.CreationContext::<target>k__BackingField
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___U3CtargetU3Ek__BackingField_1;
	// UnityEngine.UIElements.VisualTreeAsset UnityEngine.UIElements.CreationContext::<visualTreeAsset>k__BackingField
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___U3CvisualTreeAssetU3Ek__BackingField_2;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.CreationContext::<slotInsertionPoints>k__BackingField
	Dictionary_2_t41165BF747F041590086BE39A59BE164430A3CEF* ___U3CslotInsertionPointsU3Ek__BackingField_3;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.TemplateAsset/AttributeOverride> UnityEngine.UIElements.CreationContext::<attributeOverrides>k__BackingField
	List_1_t70EE7982F45810D4B024CF720D910E67974A3094* ___U3CattributeOverridesU3Ek__BackingField_4;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.CreationContext
struct CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257_marshaled_pinvoke
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___U3CtargetU3Ek__BackingField_1;
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___U3CvisualTreeAssetU3Ek__BackingField_2;
	Dictionary_2_t41165BF747F041590086BE39A59BE164430A3CEF* ___U3CslotInsertionPointsU3Ek__BackingField_3;
	List_1_t70EE7982F45810D4B024CF720D910E67974A3094* ___U3CattributeOverridesU3Ek__BackingField_4;
};
// Native definition for COM marshalling of UnityEngine.UIElements.CreationContext
struct CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257_marshaled_com
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___U3CtargetU3Ek__BackingField_1;
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___U3CvisualTreeAssetU3Ek__BackingField_2;
	Dictionary_2_t41165BF747F041590086BE39A59BE164430A3CEF* ___U3CslotInsertionPointsU3Ek__BackingField_3;
	List_1_t70EE7982F45810D4B024CF720D910E67974A3094* ___U3CattributeOverridesU3Ek__BackingField_4;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// UnityEngine.UIElements.Focusable
struct Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0  : public CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4
{
	// System.Boolean UnityEngine.UIElements.Focusable::<focusable>k__BackingField
	bool ___U3CfocusableU3Ek__BackingField_1;
	// System.Int32 UnityEngine.UIElements.Focusable::<tabIndex>k__BackingField
	int32_t ___U3CtabIndexU3Ek__BackingField_2;
	// System.Boolean UnityEngine.UIElements.Focusable::m_DelegatesFocus
	bool ___m_DelegatesFocus_3;
	// System.Boolean UnityEngine.UIElements.Focusable::m_ExcludeFromFocusRing
	bool ___m_ExcludeFromFocusRing_4;
	// System.Boolean UnityEngine.UIElements.Focusable::isIMGUIContainer
	bool ___isIMGUIContainer_5;
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

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// System.Linq.Expressions.LambdaExpression
struct LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E  : public Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785
{
	// System.Linq.Expressions.Expression System.Linq.Expressions.LambdaExpression::_body
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ____body_3;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

// System.Linq.Expressions.ParameterExpression
struct ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110  : public Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785
{
	// System.String System.Linq.Expressions.ParameterExpression::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_3;
};

// UnityEngine.PropertyName
struct PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 
{
	// System.Int32 UnityEngine.PropertyName::id
	int32_t ___id_0;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Numerics.Register
struct Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte System.Numerics.Register::byte_0
			uint8_t ___byte_0_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___byte_0_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_1_1_OffsetPadding[1];
			// System.Byte System.Numerics.Register::byte_1
			uint8_t ___byte_1_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_1_1_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___byte_1_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_2_2_OffsetPadding[2];
			// System.Byte System.Numerics.Register::byte_2
			uint8_t ___byte_2_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_2_2_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___byte_2_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_3_3_OffsetPadding[3];
			// System.Byte System.Numerics.Register::byte_3
			uint8_t ___byte_3_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_3_3_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___byte_3_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_4_4_OffsetPadding[4];
			// System.Byte System.Numerics.Register::byte_4
			uint8_t ___byte_4_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_4_4_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___byte_4_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_5_5_OffsetPadding[5];
			// System.Byte System.Numerics.Register::byte_5
			uint8_t ___byte_5_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_5_5_OffsetPadding_forAlignmentOnly[5];
			uint8_t ___byte_5_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_6_6_OffsetPadding[6];
			// System.Byte System.Numerics.Register::byte_6
			uint8_t ___byte_6_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_6_6_OffsetPadding_forAlignmentOnly[6];
			uint8_t ___byte_6_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_7_7_OffsetPadding[7];
			// System.Byte System.Numerics.Register::byte_7
			uint8_t ___byte_7_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_7_7_OffsetPadding_forAlignmentOnly[7];
			uint8_t ___byte_7_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_8_8_OffsetPadding[8];
			// System.Byte System.Numerics.Register::byte_8
			uint8_t ___byte_8_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_8_8_OffsetPadding_forAlignmentOnly[8];
			uint8_t ___byte_8_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_9_9_OffsetPadding[9];
			// System.Byte System.Numerics.Register::byte_9
			uint8_t ___byte_9_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_9_9_OffsetPadding_forAlignmentOnly[9];
			uint8_t ___byte_9_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_10_10_OffsetPadding[10];
			// System.Byte System.Numerics.Register::byte_10
			uint8_t ___byte_10_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_10_10_OffsetPadding_forAlignmentOnly[10];
			uint8_t ___byte_10_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_11_11_OffsetPadding[11];
			// System.Byte System.Numerics.Register::byte_11
			uint8_t ___byte_11_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_11_11_OffsetPadding_forAlignmentOnly[11];
			uint8_t ___byte_11_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_12_12_OffsetPadding[12];
			// System.Byte System.Numerics.Register::byte_12
			uint8_t ___byte_12_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_12_12_OffsetPadding_forAlignmentOnly[12];
			uint8_t ___byte_12_12_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_13_13_OffsetPadding[13];
			// System.Byte System.Numerics.Register::byte_13
			uint8_t ___byte_13_13;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_13_13_OffsetPadding_forAlignmentOnly[13];
			uint8_t ___byte_13_13_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_14_14_OffsetPadding[14];
			// System.Byte System.Numerics.Register::byte_14
			uint8_t ___byte_14_14;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_14_14_OffsetPadding_forAlignmentOnly[14];
			uint8_t ___byte_14_14_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_15_15_OffsetPadding[15];
			// System.Byte System.Numerics.Register::byte_15
			uint8_t ___byte_15_15;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_15_15_OffsetPadding_forAlignmentOnly[15];
			uint8_t ___byte_15_15_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.SByte System.Numerics.Register::sbyte_0
			int8_t ___sbyte_0_16;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___sbyte_0_16_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_1_17_OffsetPadding[1];
			// System.SByte System.Numerics.Register::sbyte_1
			int8_t ___sbyte_1_17;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_1_17_OffsetPadding_forAlignmentOnly[1];
			int8_t ___sbyte_1_17_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_2_18_OffsetPadding[2];
			// System.SByte System.Numerics.Register::sbyte_2
			int8_t ___sbyte_2_18;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_2_18_OffsetPadding_forAlignmentOnly[2];
			int8_t ___sbyte_2_18_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_3_19_OffsetPadding[3];
			// System.SByte System.Numerics.Register::sbyte_3
			int8_t ___sbyte_3_19;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_3_19_OffsetPadding_forAlignmentOnly[3];
			int8_t ___sbyte_3_19_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_4_20_OffsetPadding[4];
			// System.SByte System.Numerics.Register::sbyte_4
			int8_t ___sbyte_4_20;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_4_20_OffsetPadding_forAlignmentOnly[4];
			int8_t ___sbyte_4_20_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_5_21_OffsetPadding[5];
			// System.SByte System.Numerics.Register::sbyte_5
			int8_t ___sbyte_5_21;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_5_21_OffsetPadding_forAlignmentOnly[5];
			int8_t ___sbyte_5_21_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_6_22_OffsetPadding[6];
			// System.SByte System.Numerics.Register::sbyte_6
			int8_t ___sbyte_6_22;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_6_22_OffsetPadding_forAlignmentOnly[6];
			int8_t ___sbyte_6_22_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_7_23_OffsetPadding[7];
			// System.SByte System.Numerics.Register::sbyte_7
			int8_t ___sbyte_7_23;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_7_23_OffsetPadding_forAlignmentOnly[7];
			int8_t ___sbyte_7_23_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_8_24_OffsetPadding[8];
			// System.SByte System.Numerics.Register::sbyte_8
			int8_t ___sbyte_8_24;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_8_24_OffsetPadding_forAlignmentOnly[8];
			int8_t ___sbyte_8_24_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_9_25_OffsetPadding[9];
			// System.SByte System.Numerics.Register::sbyte_9
			int8_t ___sbyte_9_25;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_9_25_OffsetPadding_forAlignmentOnly[9];
			int8_t ___sbyte_9_25_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_10_26_OffsetPadding[10];
			// System.SByte System.Numerics.Register::sbyte_10
			int8_t ___sbyte_10_26;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_10_26_OffsetPadding_forAlignmentOnly[10];
			int8_t ___sbyte_10_26_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_11_27_OffsetPadding[11];
			// System.SByte System.Numerics.Register::sbyte_11
			int8_t ___sbyte_11_27;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_11_27_OffsetPadding_forAlignmentOnly[11];
			int8_t ___sbyte_11_27_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_12_28_OffsetPadding[12];
			// System.SByte System.Numerics.Register::sbyte_12
			int8_t ___sbyte_12_28;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_12_28_OffsetPadding_forAlignmentOnly[12];
			int8_t ___sbyte_12_28_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_13_29_OffsetPadding[13];
			// System.SByte System.Numerics.Register::sbyte_13
			int8_t ___sbyte_13_29;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_13_29_OffsetPadding_forAlignmentOnly[13];
			int8_t ___sbyte_13_29_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_14_30_OffsetPadding[14];
			// System.SByte System.Numerics.Register::sbyte_14
			int8_t ___sbyte_14_30;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_14_30_OffsetPadding_forAlignmentOnly[14];
			int8_t ___sbyte_14_30_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_15_31_OffsetPadding[15];
			// System.SByte System.Numerics.Register::sbyte_15
			int8_t ___sbyte_15_31;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_15_31_OffsetPadding_forAlignmentOnly[15];
			int8_t ___sbyte_15_31_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt16 System.Numerics.Register::uint16_0
			uint16_t ___uint16_0_32;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint16_t ___uint16_0_32_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_1_33_OffsetPadding[2];
			// System.UInt16 System.Numerics.Register::uint16_1
			uint16_t ___uint16_1_33;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_1_33_OffsetPadding_forAlignmentOnly[2];
			uint16_t ___uint16_1_33_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_2_34_OffsetPadding[4];
			// System.UInt16 System.Numerics.Register::uint16_2
			uint16_t ___uint16_2_34;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_2_34_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___uint16_2_34_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_3_35_OffsetPadding[6];
			// System.UInt16 System.Numerics.Register::uint16_3
			uint16_t ___uint16_3_35;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_3_35_OffsetPadding_forAlignmentOnly[6];
			uint16_t ___uint16_3_35_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_4_36_OffsetPadding[8];
			// System.UInt16 System.Numerics.Register::uint16_4
			uint16_t ___uint16_4_36;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_4_36_OffsetPadding_forAlignmentOnly[8];
			uint16_t ___uint16_4_36_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_5_37_OffsetPadding[10];
			// System.UInt16 System.Numerics.Register::uint16_5
			uint16_t ___uint16_5_37;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_5_37_OffsetPadding_forAlignmentOnly[10];
			uint16_t ___uint16_5_37_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_6_38_OffsetPadding[12];
			// System.UInt16 System.Numerics.Register::uint16_6
			uint16_t ___uint16_6_38;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_6_38_OffsetPadding_forAlignmentOnly[12];
			uint16_t ___uint16_6_38_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_7_39_OffsetPadding[14];
			// System.UInt16 System.Numerics.Register::uint16_7
			uint16_t ___uint16_7_39;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_7_39_OffsetPadding_forAlignmentOnly[14];
			uint16_t ___uint16_7_39_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int16 System.Numerics.Register::int16_0
			int16_t ___int16_0_40;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___int16_0_40_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_1_41_OffsetPadding[2];
			// System.Int16 System.Numerics.Register::int16_1
			int16_t ___int16_1_41;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_1_41_OffsetPadding_forAlignmentOnly[2];
			int16_t ___int16_1_41_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_2_42_OffsetPadding[4];
			// System.Int16 System.Numerics.Register::int16_2
			int16_t ___int16_2_42;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_2_42_OffsetPadding_forAlignmentOnly[4];
			int16_t ___int16_2_42_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_3_43_OffsetPadding[6];
			// System.Int16 System.Numerics.Register::int16_3
			int16_t ___int16_3_43;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_3_43_OffsetPadding_forAlignmentOnly[6];
			int16_t ___int16_3_43_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_4_44_OffsetPadding[8];
			// System.Int16 System.Numerics.Register::int16_4
			int16_t ___int16_4_44;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_4_44_OffsetPadding_forAlignmentOnly[8];
			int16_t ___int16_4_44_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_5_45_OffsetPadding[10];
			// System.Int16 System.Numerics.Register::int16_5
			int16_t ___int16_5_45;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_5_45_OffsetPadding_forAlignmentOnly[10];
			int16_t ___int16_5_45_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_6_46_OffsetPadding[12];
			// System.Int16 System.Numerics.Register::int16_6
			int16_t ___int16_6_46;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_6_46_OffsetPadding_forAlignmentOnly[12];
			int16_t ___int16_6_46_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_7_47_OffsetPadding[14];
			// System.Int16 System.Numerics.Register::int16_7
			int16_t ___int16_7_47;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_7_47_OffsetPadding_forAlignmentOnly[14];
			int16_t ___int16_7_47_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt32 System.Numerics.Register::uint32_0
			uint32_t ___uint32_0_48;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___uint32_0_48_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint32_1_49_OffsetPadding[4];
			// System.UInt32 System.Numerics.Register::uint32_1
			uint32_t ___uint32_1_49;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint32_1_49_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___uint32_1_49_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint32_2_50_OffsetPadding[8];
			// System.UInt32 System.Numerics.Register::uint32_2
			uint32_t ___uint32_2_50;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint32_2_50_OffsetPadding_forAlignmentOnly[8];
			uint32_t ___uint32_2_50_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint32_3_51_OffsetPadding[12];
			// System.UInt32 System.Numerics.Register::uint32_3
			uint32_t ___uint32_3_51;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint32_3_51_OffsetPadding_forAlignmentOnly[12];
			uint32_t ___uint32_3_51_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 System.Numerics.Register::int32_0
			int32_t ___int32_0_52;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___int32_0_52_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int32_1_53_OffsetPadding[4];
			// System.Int32 System.Numerics.Register::int32_1
			int32_t ___int32_1_53;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int32_1_53_OffsetPadding_forAlignmentOnly[4];
			int32_t ___int32_1_53_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int32_2_54_OffsetPadding[8];
			// System.Int32 System.Numerics.Register::int32_2
			int32_t ___int32_2_54;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int32_2_54_OffsetPadding_forAlignmentOnly[8];
			int32_t ___int32_2_54_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int32_3_55_OffsetPadding[12];
			// System.Int32 System.Numerics.Register::int32_3
			int32_t ___int32_3_55;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int32_3_55_OffsetPadding_forAlignmentOnly[12];
			int32_t ___int32_3_55_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt64 System.Numerics.Register::uint64_0
			uint64_t ___uint64_0_56;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___uint64_0_56_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint64_1_57_OffsetPadding[8];
			// System.UInt64 System.Numerics.Register::uint64_1
			uint64_t ___uint64_1_57;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint64_1_57_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___uint64_1_57_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int64 System.Numerics.Register::int64_0
			int64_t ___int64_0_58;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___int64_0_58_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int64_1_59_OffsetPadding[8];
			// System.Int64 System.Numerics.Register::int64_1
			int64_t ___int64_1_59;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int64_1_59_OffsetPadding_forAlignmentOnly[8];
			int64_t ___int64_1_59_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Single System.Numerics.Register::single_0
			float ___single_0_60;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___single_0_60_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___single_1_61_OffsetPadding[4];
			// System.Single System.Numerics.Register::single_1
			float ___single_1_61;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___single_1_61_OffsetPadding_forAlignmentOnly[4];
			float ___single_1_61_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___single_2_62_OffsetPadding[8];
			// System.Single System.Numerics.Register::single_2
			float ___single_2_62;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___single_2_62_OffsetPadding_forAlignmentOnly[8];
			float ___single_2_62_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___single_3_63_OffsetPadding[12];
			// System.Single System.Numerics.Register::single_3
			float ___single_3_63;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___single_3_63_OffsetPadding_forAlignmentOnly[12];
			float ___single_3_63_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Double System.Numerics.Register::double_0
			double ___double_0_64;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___double_0_64_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___double_1_65_OffsetPadding[8];
			// System.Double System.Numerics.Register::double_1
			double ___double_1_65;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___double_1_65_OffsetPadding_forAlignmentOnly[8];
			double ___double_1_65_forAlignmentOnly;
		};
	};
};

// System.SByte
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// YooAsset.SubAssetsHandle
struct SubAssetsHandle_tDC3D1998EC32E3948617E5F6EA89DFC035EF2F2B  : public HandleBase_t571827F810EAE331C05542D54B2C396C605DB4DA
{
	// System.Action`1<YooAsset.SubAssetsHandle> YooAsset.SubAssetsHandle::_callback
	Action_1_tF835693B61B023DA9730598D7984F238BA777E44* ____callback_2;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
};

// Cysharp.Threading.Tasks.UniTask
struct UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270 
{
	// Cysharp.Threading.Tasks.IUniTaskSource Cysharp.Threading.Tasks.UniTask::source
	RuntimeObject* ___source_0;
	// System.Int16 Cysharp.Threading.Tasks.UniTask::token
	int16_t ___token_1;
};

// Cysharp.Threading.Tasks.UniTaskVoid
struct UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 
{
	union
	{
		struct
		{
		};
		uint8_t UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2__padding[1];
	};
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
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

// System.Xml.Linq.XNode
struct XNode_t185C922661054AAD14F49676DD6F3CB10D652A30  : public XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29
{
	// System.Xml.Linq.XNode System.Xml.Linq.XNode::next
	XNode_t185C922661054AAD14F49676DD6F3CB10D652A30* ___next_2;
};

// System.Xml.Schema.XmlBaseConverter
struct XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D  : public XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E
{
	// System.Xml.Schema.XmlSchemaType System.Xml.Schema.XmlBaseConverter::schemaType
	XmlSchemaType_t36630F421D730DDFA33CBA5BA6548094ABF40DDF* ___schemaType_0;
	// System.Xml.Schema.XmlTypeCode System.Xml.Schema.XmlBaseConverter::typeCode
	int32_t ___typeCode_1;
	// System.Type System.Xml.Schema.XmlBaseConverter::clrTypeDefault
	Type_t* ___clrTypeDefault_2;
};

// System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor
struct QuoteVisitor_tAF65D5FC6B193B07A3D795C928F4E02DA518529F  : public ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590
{
	// System.Collections.Generic.Dictionary`2<System.Linq.Expressions.ParameterExpression,System.Int32> System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor::_definedParameters
	Dictionary_2_tBB429CD29D6F765D173E93E0F638CBF47BCE9A69* ____definedParameters_0;
	// System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression> System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor::_hoistedParameters
	HashSet_1_t068F5201D923072F46716204841D21328FE6218D* ____hoistedParameters_1;
};

// System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter
struct ExpressionQuoter_t3D5F35B2980800F7F947EBC0819D867CF5AAD536  : public ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590
{
	// System.Collections.Generic.Dictionary`2<System.Linq.Expressions.ParameterExpression,System.Linq.Expressions.Interpreter.LocalVariable> System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter::_variables
	Dictionary_2_tEF46B4EA472A35123947A8DF4F68C3E8A5F0C4FD* ____variables_0;
	// System.Linq.Expressions.Interpreter.InterpretedFrame System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter::_frame
	InterpretedFrame_tF030A9AC78837B1C2F9CD54B43F7A04D85A8D92D* ____frame_1;
	// System.Collections.Generic.Stack`1<System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>> System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter::_shadowedVars
	Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26* ____shadowedVars_2;
};

// UnityEngine.UIElements.VisualElement/Hierarchy
struct Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 
{
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement/Hierarchy::m_Owner
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Owner_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.VisualElement/Hierarchy
struct Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677_marshaled_pinvoke
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Owner_1;
};
// Native definition for COM marshalling of UnityEngine.UIElements.VisualElement/Hierarchy
struct Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677_marshaled_com
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Owner_1;
};

// System.Threading.Volatile/VolatileObject
struct VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99 
{
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Volatile/VolatileObject::Value
	RuntimeObject* ___Value_0;
};
// Native definition for P/Invoke marshalling of System.Threading.Volatile/VolatileObject
struct VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99_marshaled_pinvoke
{
	RuntimeObject* ___Value_0;
};
// Native definition for COM marshalling of System.Threading.Volatile/VolatileObject
struct VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99_marshaled_com
{
	RuntimeObject* ___Value_0;
};

// Cysharp.Threading.Tasks.AsyncReactiveProperty`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct AsyncReactiveProperty_1_t55DCE046DB85F4B8B8BFAD7AE879EE536D5F9733 : public RuntimeObject {};

// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.ValueTuple`2<System.Boolean,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>
typedef Il2CppFullySharedGenericStruct AsyncUniTaskMethodBuilder_1_tB2A8D29BB76360834EF9DF1BD72AE5EEB849BA7F;

// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Threading.Tasks.Task`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>
struct Awaiter_t224861AF84162F2FDE02C831F0BA43BDE108ABA6 
{
	// Cysharp.Threading.Tasks.UniTask`1<T> Cysharp.Threading.Tasks.UniTask`1/Awaiter::task
	UniTask_1_t15FB22B9C3B0D09E56C5B71B80853B5C804E6129 ___task_0;
};

// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean>
struct Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 
{
	// Cysharp.Threading.Tasks.UniTask`1<T> Cysharp.Threading.Tasks.UniTask`1/Awaiter::task
	UniTask_1_tE29E6E2A7DE0BF1051805ACEFA412937BC430949 ___task_0;
};

// Cysharp.Threading.Tasks.UniTask`1/Awaiter<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
typedef Il2CppFullySharedGenericStruct Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C;

// System.Linq.Expressions.Expression`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4  : public LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E
{
};

// System.Threading.Tasks.Task`1<Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>
struct Task_1_tEEFAF6747CE41C77B985860193E36BC44BA345B3 : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572 {};

// Cysharp.Threading.Tasks.UniTaskExtensions/ToCoroutineEnumerator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ToCoroutineEnumerator_1_tF7712B7CF6F5EBE1FCA4B0CF74B0C4076BC1A40C : public RuntimeObject {};

// Cysharp.Threading.Tasks.UniTaskCompletionSource`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct UniTaskCompletionSource_1_t3B7C6F0FED2BC49F65D51510327C3A1E6186E8EA : public RuntimeObject {};

// Cysharp.Threading.Tasks.UniTask`1<Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>
typedef Il2CppFullySharedGenericStruct UniTask_1_t7D499843FE81BE3D5F78B229C213562B90F79C90;

// Cysharp.Threading.Tasks.UniTask`1<System.ValueTuple`2<System.Boolean,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>
typedef Il2CppFullySharedGenericStruct UniTask_1_t387FB0897972BB6422F90203945206E0112C6DD1;

// Cysharp.Threading.Tasks.UniTask`1<System.ValueTuple`7<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>
typedef Il2CppFullySharedGenericStruct UniTask_1_t11211BBE24C9FA05BE724D46D15CDE52C34D3CA7;

// Cysharp.Threading.Tasks.UnityEventHandlerAsyncEnumerable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct UnityEventHandlerAsyncEnumerable_1_t3FA86ED7E1AF3A77D273312C77BB59F9201EEFBE  : public RuntimeObject
{
	// UnityEngine.Events.UnityEvent`1<T> Cysharp.Threading.Tasks.UnityEventHandlerAsyncEnumerable`1::unityEvent
	UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030* ___unityEvent_0;
	// System.Threading.CancellationToken Cysharp.Threading.Tasks.UnityEventHandlerAsyncEnumerable`1::cancellationToken1
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken1_1;
};

// System.ValueTuple`1<Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>
typedef Il2CppFullySharedGenericStruct ValueTuple_1_t3C5AD8484980F404DA084500FB7694D3646BFCAC;

// System.ValueTuple`2<Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>
typedef Il2CppFullySharedGenericStruct ValueTuple_2_t037296BC24DF911A25BFCB44B5BBFD6DD0ECAEAC;

// System.ValueTuple`3<Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>
typedef Il2CppFullySharedGenericStruct ValueTuple_3_t556B03C771B23D4D53FE40EEBCFF8CBD8254905B;

// System.ValueTuple`3<System.Int32,System.ValueTuple`2<System.Boolean,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,System.Boolean>
typedef Il2CppFullySharedGenericStruct ValueTuple_3_t859EA1ED0BD81F8A75E8986DDF4082CEDD745703;

// System.ValueTuple`4<Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>
typedef Il2CppFullySharedGenericStruct ValueTuple_4_t56E38C9B2AF3E090B71CF38F0E02E02C1F471046;

// System.ValueTuple`5<Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>
typedef Il2CppFullySharedGenericStruct ValueTuple_5_t92E1998E92F6F3DBC8F6F3D14D06839B838A8917;

// System.ValueTuple`6<Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>
typedef Il2CppFullySharedGenericStruct ValueTuple_6_tB94987FBA1FEACA28BADAC98198EF59DA86765F1;

// System.ValueTuple`7<Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>
typedef Il2CppFullySharedGenericStruct ValueTuple_7_t99C1D51A040ECA9B385797480EC45940C83830C9;

// System.ValueTuple`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.ValueTuple`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>
typedef Il2CppFullySharedGenericStruct ValueTuple_8_t30FB6F0053A4538C9BF0CCF111B3C8F3AD98B60B;

// System.ValueTuple`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.ValueTuple`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>
typedef Il2CppFullySharedGenericStruct ValueTuple_8_t67F4A8BA83EE35EA2C786860832AADE6B605EF6E;

// System.ValueTuple`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.ValueTuple`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>
typedef Il2CppFullySharedGenericStruct ValueTuple_8_tD90F6AB25D1C61CA4F00B0C87890B7ABA6DED1A3;

// System.ValueTuple`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.ValueTuple`4<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>
typedef Il2CppFullySharedGenericStruct ValueTuple_8_t4030AE2313DA94F50F61272CF3F14230F031C201;

// System.ValueTuple`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.ValueTuple`5<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>
typedef Il2CppFullySharedGenericStruct ValueTuple_8_tC57A73EF3AFDAE392C4A7AD4459388809174BBF4;

// System.ValueTuple`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.ValueTuple`6<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>
typedef Il2CppFullySharedGenericStruct ValueTuple_8_t7593330E27524EAF952A41DA29D4504242E1C622;

// System.ValueTuple`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.ValueTuple`7<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>
typedef Il2CppFullySharedGenericStruct ValueTuple_8_tAB869B91583DDEFE5FD8C064356AC35431814F16;

// System.Numerics.Vector`1<System.UInt64>
struct Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A 
{
	// System.Numerics.Register System.Numerics.Vector`1::register
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A ___register_0;
};

// System.Numerics.Vector`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>
struct Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 
{
	// System.Numerics.Register System.Numerics.Vector`1::register
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A ___register_0;
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

// UnityEngine.UIElements.ComputedStyle
struct ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C 
{
	// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.InheritedData> UnityEngine.UIElements.ComputedStyle::inheritedData
	StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA ___inheritedData_0;
	// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.LayoutData> UnityEngine.UIElements.ComputedStyle::layoutData
	StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 ___layoutData_1;
	// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.RareData> UnityEngine.UIElements.ComputedStyle::rareData
	StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 ___rareData_2;
	// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.TransformData> UnityEngine.UIElements.ComputedStyle::transformData
	StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 ___transformData_3;
	// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.TransitionData> UnityEngine.UIElements.ComputedStyle::transitionData
	StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E ___transitionData_4;
	// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.VisualData> UnityEngine.UIElements.ComputedStyle::visualData
	StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC ___visualData_5;
	// UnityEngine.Yoga.YogaNode UnityEngine.UIElements.ComputedStyle::yogaNode
	YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___yogaNode_6;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UIElements.StyleSheets.StylePropertyValue> UnityEngine.UIElements.ComputedStyle::customProperties
	Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00* ___customProperties_7;
	// System.Int64 UnityEngine.UIElements.ComputedStyle::matchingRulesHash
	int64_t ___matchingRulesHash_8;
	// System.Single UnityEngine.UIElements.ComputedStyle::dpiScaling
	float ___dpiScaling_9;
	// UnityEngine.UIElements.ComputedTransitionProperty[] UnityEngine.UIElements.ComputedStyle::computedTransitions
	ComputedTransitionPropertyU5BU5D_t25B9E78F5276CDA297C8215C316452CAB8219E82* ___computedTransitions_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.ComputedStyle
struct ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C_marshaled_pinvoke
{
	StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA ___inheritedData_0;
	StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 ___layoutData_1;
	StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 ___rareData_2;
	StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 ___transformData_3;
	StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E ___transitionData_4;
	StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC ___visualData_5;
	YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___yogaNode_6;
	Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00* ___customProperties_7;
	int64_t ___matchingRulesHash_8;
	float ___dpiScaling_9;
	ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_pinvoke* ___computedTransitions_10;
};
// Native definition for COM marshalling of UnityEngine.UIElements.ComputedStyle
struct ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C_marshaled_com
{
	StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA ___inheritedData_0;
	StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 ___layoutData_1;
	StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 ___rareData_2;
	StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 ___transformData_3;
	StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E ___transitionData_4;
	StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC ___visualData_5;
	YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___yogaNode_6;
	Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00* ___customProperties_7;
	int64_t ___matchingRulesHash_8;
	float ___dpiScaling_9;
	ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_com* ___computedTransitions_10;
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

// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D  : public RuntimeObject
{
	// System.IntPtr UnityEngine.MaterialPropertyBlock::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.UIElements.PanelClearSettings
struct PanelClearSettings_tA3D8EE9A4864781CE3E5FED5225C6FB37ED66EE7 
{
	// System.Boolean UnityEngine.UIElements.PanelClearSettings::clearDepthStencil
	bool ___clearDepthStencil_0;
	// System.Boolean UnityEngine.UIElements.PanelClearSettings::clearColor
	bool ___clearColor_1;
	// UnityEngine.Color UnityEngine.UIElements.PanelClearSettings::color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.PanelClearSettings
struct PanelClearSettings_tA3D8EE9A4864781CE3E5FED5225C6FB37ED66EE7_marshaled_pinvoke
{
	int32_t ___clearDepthStencil_0;
	int32_t ___clearColor_1;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_2;
};
// Native definition for COM marshalling of UnityEngine.UIElements.PanelClearSettings
struct PanelClearSettings_tA3D8EE9A4864781CE3E5FED5225C6FB37ED66EE7_marshaled_com
{
	int32_t ___clearDepthStencil_0;
	int32_t ___clearColor_1;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_2;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.UIElements.UIR.RenderChainVEData
struct RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847 
{
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::prev
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prev_0;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::next
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___next_1;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::groupTransformAncestor
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___groupTransformAncestor_2;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::boneTransformAncestor
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___boneTransformAncestor_3;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::prevDirty
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevDirty_4;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::nextDirty
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextDirty_5;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChainVEData::hierarchyDepth
	int32_t ___hierarchyDepth_6;
	// UnityEngine.UIElements.UIR.RenderDataDirtyTypes UnityEngine.UIElements.UIR.RenderChainVEData::dirtiedValues
	int32_t ___dirtiedValues_7;
	// System.UInt32 UnityEngine.UIElements.UIR.RenderChainVEData::dirtyID
	uint32_t ___dirtyID_8;
	// UnityEngine.UIElements.UIR.RenderChainCommand UnityEngine.UIElements.UIR.RenderChainVEData::firstCommand
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstCommand_9;
	// UnityEngine.UIElements.UIR.RenderChainCommand UnityEngine.UIElements.UIR.RenderChainVEData::lastCommand
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastCommand_10;
	// UnityEngine.UIElements.UIR.RenderChainCommand UnityEngine.UIElements.UIR.RenderChainVEData::firstClosingCommand
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstClosingCommand_11;
	// UnityEngine.UIElements.UIR.RenderChainCommand UnityEngine.UIElements.UIR.RenderChainVEData::lastClosingCommand
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastClosingCommand_12;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::isInChain
	bool ___isInChain_13;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::isHierarchyHidden
	bool ___isHierarchyHidden_14;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::localFlipsWinding
	bool ___localFlipsWinding_15;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::localTransformScaleZero
	bool ___localTransformScaleZero_16;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::worldFlipsWinding
	bool ___worldFlipsWinding_17;
	// UnityEngine.UIElements.UIR.Implementation.ClipMethod UnityEngine.UIElements.UIR.RenderChainVEData::clipMethod
	int32_t ___clipMethod_18;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChainVEData::childrenStencilRef
	int32_t ___childrenStencilRef_19;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChainVEData::childrenMaskDepth
	int32_t ___childrenMaskDepth_20;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::disableNudging
	bool ___disableNudging_21;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::usesLegacyText
	bool ___usesLegacyText_22;
	// UnityEngine.UIElements.UIR.MeshHandle UnityEngine.UIElements.UIR.RenderChainVEData::data
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___data_23;
	// UnityEngine.UIElements.UIR.MeshHandle UnityEngine.UIElements.UIR.RenderChainVEData::closingData
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___closingData_24;
	// UnityEngine.Matrix4x4 UnityEngine.UIElements.UIR.RenderChainVEData::verticesSpace
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___verticesSpace_25;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChainVEData::displacementUVStart
	int32_t ___displacementUVStart_26;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChainVEData::displacementUVEnd
	int32_t ___displacementUVEnd_27;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::transformID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___transformID_28;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::clipRectID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___clipRectID_29;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::opacityID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___opacityID_30;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::textCoreSettingsID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___textCoreSettingsID_31;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::backgroundColorID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___backgroundColorID_32;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::borderLeftColorID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderLeftColorID_33;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::borderTopColorID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderTopColorID_34;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::borderRightColorID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderRightColorID_35;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::borderBottomColorID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderBottomColorID_36;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::tintColorID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___tintColorID_37;
	// System.Single UnityEngine.UIElements.UIR.RenderChainVEData::compositeOpacity
	float ___compositeOpacity_38;
	// UnityEngine.Color UnityEngine.UIElements.UIR.RenderChainVEData::backgroundColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___backgroundColor_39;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::prevText
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevText_40;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::nextText
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextText_41;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.UIR.RenderChainTextEntry> UnityEngine.UIElements.UIR.RenderChainVEData::textEntries
	List_1_t3ADC2CEE608F7E0043EBE4FD425E6C9AE43E19CC* ___textEntries_42;
	// UnityEngine.UIElements.UIR.BasicNode`1<UnityEngine.UIElements.UIR.TextureEntry> UnityEngine.UIElements.UIR.RenderChainVEData::textures
	BasicNode_1_t7B4D545DCD6949B2E1C85D63DF038E44602F7DDB* ___textures_43;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.UIR.RenderChainVEData
struct RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847_marshaled_pinvoke
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prev_0;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___next_1;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___groupTransformAncestor_2;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___boneTransformAncestor_3;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevDirty_4;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextDirty_5;
	int32_t ___hierarchyDepth_6;
	int32_t ___dirtiedValues_7;
	uint32_t ___dirtyID_8;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstCommand_9;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastCommand_10;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstClosingCommand_11;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastClosingCommand_12;
	int32_t ___isInChain_13;
	int32_t ___isHierarchyHidden_14;
	int32_t ___localFlipsWinding_15;
	int32_t ___localTransformScaleZero_16;
	int32_t ___worldFlipsWinding_17;
	int32_t ___clipMethod_18;
	int32_t ___childrenStencilRef_19;
	int32_t ___childrenMaskDepth_20;
	int32_t ___disableNudging_21;
	int32_t ___usesLegacyText_22;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___data_23;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___closingData_24;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___verticesSpace_25;
	int32_t ___displacementUVStart_26;
	int32_t ___displacementUVEnd_27;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___transformID_28;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___clipRectID_29;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___opacityID_30;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___textCoreSettingsID_31;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___backgroundColorID_32;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderLeftColorID_33;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderTopColorID_34;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderRightColorID_35;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderBottomColorID_36;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___tintColorID_37;
	float ___compositeOpacity_38;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___backgroundColor_39;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevText_40;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextText_41;
	List_1_t3ADC2CEE608F7E0043EBE4FD425E6C9AE43E19CC* ___textEntries_42;
	BasicNode_1_t7B4D545DCD6949B2E1C85D63DF038E44602F7DDB* ___textures_43;
};
// Native definition for COM marshalling of UnityEngine.UIElements.UIR.RenderChainVEData
struct RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847_marshaled_com
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prev_0;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___next_1;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___groupTransformAncestor_2;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___boneTransformAncestor_3;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevDirty_4;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextDirty_5;
	int32_t ___hierarchyDepth_6;
	int32_t ___dirtiedValues_7;
	uint32_t ___dirtyID_8;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstCommand_9;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastCommand_10;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstClosingCommand_11;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastClosingCommand_12;
	int32_t ___isInChain_13;
	int32_t ___isHierarchyHidden_14;
	int32_t ___localFlipsWinding_15;
	int32_t ___localTransformScaleZero_16;
	int32_t ___worldFlipsWinding_17;
	int32_t ___clipMethod_18;
	int32_t ___childrenStencilRef_19;
	int32_t ___childrenMaskDepth_20;
	int32_t ___disableNudging_21;
	int32_t ___usesLegacyText_22;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___data_23;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___closingData_24;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___verticesSpace_25;
	int32_t ___displacementUVStart_26;
	int32_t ___displacementUVEnd_27;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___transformID_28;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___clipRectID_29;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___opacityID_30;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___textCoreSettingsID_31;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___backgroundColorID_32;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderLeftColorID_33;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderTopColorID_34;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderRightColorID_35;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderBottomColorID_36;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___tintColorID_37;
	float ___compositeOpacity_38;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___backgroundColor_39;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevText_40;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextText_41;
	List_1_t3ADC2CEE608F7E0043EBE4FD425E6C9AE43E19CC* ___textEntries_42;
	BasicNode_1_t7B4D545DCD6949B2E1C85D63DF038E44602F7DDB* ___textures_43;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.Xml.Linq.XContainer
struct XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF  : public XNode_t185C922661054AAD14F49676DD6F3CB10D652A30
{
	// System.Object System.Xml.Linq.XContainer::content
	RuntimeObject* ___content_3;
};

// System.Xml.Schema.XmlListConverter
struct XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA  : public XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D
{
	// System.Xml.Schema.XmlValueConverter System.Xml.Schema.XmlListConverter::atomicConverter
	XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* ___atomicConverter_32;
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

// Cysharp.Threading.Tasks.UnityBindingExtensions/<BindToCore>d__12`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
typedef Il2CppFullySharedGenericStruct U3CBindToCoreU3Ed__12_2_tC0C0AD26350D5274BE3703D1A40F35C8693897CA;

// Cysharp.Threading.Tasks.UnityBindingExtensions/<BindToCore>d__6`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct U3CBindToCoreU3Ed__6_1_t86689E04CADC36E81BC1A54F65539102D6B5CB49 
{
	// System.Int32 Cysharp.Threading.Tasks.UnityBindingExtensions/<BindToCore>d__6`1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder Cysharp.Threading.Tasks.UnityBindingExtensions/<BindToCore>d__6`1::<>t__builder
	AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B ___U3CU3Et__builder_1;
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<T> Cysharp.Threading.Tasks.UnityBindingExtensions/<BindToCore>d__6`1::source
	RuntimeObject* ___source_2;
	// System.Threading.CancellationToken Cysharp.Threading.Tasks.UnityBindingExtensions/<BindToCore>d__6`1::cancellationToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_3;
	// System.Boolean Cysharp.Threading.Tasks.UnityBindingExtensions/<BindToCore>d__6`1::rebindOnError
	bool ___rebindOnError_4;
	// UnityEngine.UI.Text Cysharp.Threading.Tasks.UnityBindingExtensions/<BindToCore>d__6`1::text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___text_5;
	// System.Boolean Cysharp.Threading.Tasks.UnityBindingExtensions/<BindToCore>d__6`1::<repeat>5__2
	bool ___U3CrepeatU3E5__2_6;
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<T> Cysharp.Threading.Tasks.UnityBindingExtensions/<BindToCore>d__6`1::<e>5__3
	RuntimeObject* ___U3CeU3E5__3_7;
	// System.Object Cysharp.Threading.Tasks.UnityBindingExtensions/<BindToCore>d__6`1::<>7__wrap3
	RuntimeObject* ___U3CU3E7__wrap3_8;
	// System.Int32 Cysharp.Threading.Tasks.UnityBindingExtensions/<BindToCore>d__6`1::<>7__wrap4
	int32_t ___U3CU3E7__wrap4_9;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean> Cysharp.Threading.Tasks.UnityBindingExtensions/<BindToCore>d__6`1::<>u__1
	Awaiter_tA204D0E359C88AB7BF3F44EF5DBA6265F5C54A15 ___U3CU3Eu__1_10;
	// Cysharp.Threading.Tasks.UniTask/Awaiter Cysharp.Threading.Tasks.UnityBindingExtensions/<BindToCore>d__6`1::<>u__2
	Awaiter_tFACD37B3B2ACD03C61DB949FD0E4FAB189A1D956 ___U3CU3Eu__2_11;
};

// Cysharp.Threading.Tasks.UniTaskObservableExtensions/<Fire>d__3`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
typedef Il2CppFullySharedGenericStruct U3CFireU3Ed__3_1_tF3F9512FFE55412DD524B8798698C10CC16B869E;

// Cysharp.Threading.Tasks.UniTaskExtensions/<Unwrap>d__32`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
typedef Il2CppFullySharedGenericStruct U3CUnwrapU3Ed__32_1_tA86AE4AC3F09246D50A6DD450E1DBACE61FA6601;

// Cysharp.Threading.Tasks.UniTaskExtensions/<Unwrap>d__33`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
typedef Il2CppFullySharedGenericStruct U3CUnwrapU3Ed__33_1_t954F6327C4B805B728FE5EB199C50BB96F205737;

// Cysharp.Threading.Tasks.UniTaskExtensions/<Unwrap>d__36`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
typedef Il2CppFullySharedGenericStruct U3CUnwrapU3Ed__36_1_t94BD850374D0028D81619FD72F885859DA706908;

// Cysharp.Threading.Tasks.UniTaskExtensions/<Unwrap>d__37`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
typedef Il2CppFullySharedGenericStruct U3CUnwrapU3Ed__37_1_t89D338FD690877A215E5AFEE08E6CEDCF3F29600;

// Cysharp.Threading.Tasks.AsyncLazy`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct AsyncLazy_1_t87351A911AC23F97600D7159986DFE3B30044433 : public RuntimeObject {};

// Cysharp.Threading.Tasks.AsyncUnityEventHandler`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct AsyncUnityEventHandler_1_tE2B8DC50E909DE9C20DA2F58857037AAAD5A238E : public RuntimeObject {};

// Cysharp.Threading.Tasks.UniTask`1/Awaiter<Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>
typedef Il2CppFullySharedGenericStruct Awaiter_t5F1EAADCC4DF675F30C361032BDF7E46E0EE9567;

// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.ValueTuple`7<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>
typedef Il2CppFullySharedGenericStruct Awaiter_t38E3E69740B7CC197DF5F0D2E61E13FD406C9A0B;

// Cysharp.Threading.Tasks.UniTaskObservableExtensions/FirstValueToUniTaskObserver`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct FirstValueToUniTaskObserver_1_t744D4D72306E0D31D591DDFEEBDB175E92614FB7  : public RuntimeObject
{
	// Cysharp.Threading.Tasks.UniTaskCompletionSource`1<T> Cysharp.Threading.Tasks.UniTaskObservableExtensions/FirstValueToUniTaskObserver`1::promise
	UniTaskCompletionSource_1_t3B7C6F0FED2BC49F65D51510327C3A1E6186E8EA* ___promise_1;
	// Cysharp.Threading.Tasks.Internal.SingleAssignmentDisposable Cysharp.Threading.Tasks.UniTaskObservableExtensions/FirstValueToUniTaskObserver`1::disposable
	SingleAssignmentDisposable_t9AA5F201708E252ABAEECE56258D630EF672906A* ___disposable_2;
	// System.Threading.CancellationToken Cysharp.Threading.Tasks.UniTaskObservableExtensions/FirstValueToUniTaskObserver`1::cancellationToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_3;
	// System.Threading.CancellationTokenRegistration Cysharp.Threading.Tasks.UniTaskObservableExtensions/FirstValueToUniTaskObserver`1::registration
	CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 ___registration_4;
	// System.Boolean Cysharp.Threading.Tasks.UniTaskObservableExtensions/FirstValueToUniTaskObserver`1::hasValue
	bool ___hasValue_5;
};

// Cysharp.Threading.Tasks.UniTaskObservableExtensions/ToUniTaskObserver`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ToUniTaskObserver_1_tE22EF3448C8DC79827CF7061DF88AF4161180E60 : public RuntimeObject {};

// Cysharp.Threading.Tasks.UniTask`1<System.ValueTuple`3<System.Int32,System.ValueTuple`2<System.Boolean,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,System.Boolean>>
typedef Il2CppFullySharedGenericStruct UniTask_1_t27C3E827C41954744AB4A7D56EA1D2B4B9C34E92;

// Cysharp.Threading.Tasks.UniTask`1<System.ValueTuple`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.ValueTuple`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>>
typedef Il2CppFullySharedGenericStruct UniTask_1_tC8B7106DF6932B69D22C65090C12F05E1112A993;

// Cysharp.Threading.Tasks.UniTask`1<System.ValueTuple`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.ValueTuple`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>>
typedef Il2CppFullySharedGenericStruct UniTask_1_tC6C278A4D85C9E41959BB7FFD790F8D934B43B1C;

// Cysharp.Threading.Tasks.UniTask`1<System.ValueTuple`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.ValueTuple`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>>
typedef Il2CppFullySharedGenericStruct UniTask_1_tC64872BEABE327546ED6873C1EA16E1C9DBAF71F;

// Cysharp.Threading.Tasks.UniTask`1<System.ValueTuple`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.ValueTuple`4<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>>
typedef Il2CppFullySharedGenericStruct UniTask_1_t3BBA0FE5C1BF6218226C88DB4783C3D9BC3BD026;

// Cysharp.Threading.Tasks.UniTask`1<System.ValueTuple`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.ValueTuple`5<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>>
typedef Il2CppFullySharedGenericStruct UniTask_1_tE20BB9EABB2D20768EDBE4E632A4DCCA632393B7;

// Cysharp.Threading.Tasks.UniTask`1<System.ValueTuple`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.ValueTuple`6<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>>
typedef Il2CppFullySharedGenericStruct UniTask_1_tA8A7D81855758A2DD5216B3575F6EE7528BE78FE;

// Cysharp.Threading.Tasks.UniTask`1<System.ValueTuple`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.ValueTuple`7<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>>
typedef Il2CppFullySharedGenericStruct UniTask_1_tA9C053B082DE8E68BCFEDBD2BC1F5A762986B981;

// System.ValueTuple`8<Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,System.ValueTuple`1<Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>>
typedef Il2CppFullySharedGenericStruct ValueTuple_8_tA0E93F1D201CFFDBBAE20066F95A32392233A8F8;

// System.ValueTuple`8<Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,System.ValueTuple`2<Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>>
typedef Il2CppFullySharedGenericStruct ValueTuple_8_t61D1D09B4B359929CF81E281241BAE1CC8162733;

// System.ValueTuple`8<Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,System.ValueTuple`3<Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>>
typedef Il2CppFullySharedGenericStruct ValueTuple_8_tCA8AECE1E35FAAF8CBC3498315D8384648E6E493;

// System.ValueTuple`8<Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,System.ValueTuple`4<Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>>
typedef Il2CppFullySharedGenericStruct ValueTuple_8_t1E57DC9647FC0DD8C807F78A515073C909DE6700;

// System.ValueTuple`8<Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,System.ValueTuple`5<Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>>
typedef Il2CppFullySharedGenericStruct ValueTuple_8_tCEFA7D55B83A9DD58DC46E939576FDE17E5145E4;

// System.ValueTuple`8<Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,System.ValueTuple`6<Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>>
typedef Il2CppFullySharedGenericStruct ValueTuple_8_t641630DEE5E39F5442AA6EFDFAF0ADE7D7196803;

// System.ValueTuple`8<Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,System.ValueTuple`7<Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>>
typedef Il2CppFullySharedGenericStruct ValueTuple_8_t089B91B87017F6CB89868EC488BB3B612D76EB13;

// System.ValueTuple`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.ValueTuple`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.ValueTuple`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>>
typedef Il2CppFullySharedGenericStruct ValueTuple_8_t9D0FDBD089EB4325A6889E373A4E6DE52E59A0FC;

// UnityEngine.UIElements.BaseVisualElementPanel
struct BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303  : public RuntimeObject
{
	// System.Action`1<UnityEngine.UIElements.BaseVisualElementPanel> UnityEngine.UIElements.BaseVisualElementPanel::panelDisposed
	Action_1_tF0C1AFCCE9CE63382F43540DC0DA04A8939A8A53* ___panelDisposed_0;
	// System.Single UnityEngine.UIElements.BaseVisualElementPanel::m_Scale
	float ___m_Scale_1;
	// UnityEngine.Yoga.YogaConfig UnityEngine.UIElements.BaseVisualElementPanel::yogaConfig
	YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345* ___yogaConfig_2;
	// System.Single UnityEngine.UIElements.BaseVisualElementPanel::m_PixelsPerPoint
	float ___m_PixelsPerPoint_3;
	// UnityEngine.UIElements.PanelClearSettings UnityEngine.UIElements.BaseVisualElementPanel::<clearSettings>k__BackingField
	PanelClearSettings_tA3D8EE9A4864781CE3E5FED5225C6FB37ED66EE7 ___U3CclearSettingsU3Ek__BackingField_4;
	// System.Boolean UnityEngine.UIElements.BaseVisualElementPanel::<duringLayoutPhase>k__BackingField
	bool ___U3CduringLayoutPhaseU3Ek__BackingField_5;
	// UnityEngine.UIElements.RepaintData UnityEngine.UIElements.BaseVisualElementPanel::<repaintData>k__BackingField
	RepaintData_t90534752135661579EC254884F550545D001B5EA* ___U3CrepaintDataU3Ek__BackingField_6;
	// UnityEngine.UIElements.ICursorManager UnityEngine.UIElements.BaseVisualElementPanel::<cursorManager>k__BackingField
	RuntimeObject* ___U3CcursorManagerU3Ek__BackingField_7;
	// UnityEngine.UIElements.ContextualMenuManager UnityEngine.UIElements.BaseVisualElementPanel::<contextualMenuManager>k__BackingField
	ContextualMenuManager_tEE3B1F33FFFD180705467CA625AEBA0F5D63154B* ___U3CcontextualMenuManagerU3Ek__BackingField_8;
	// System.Boolean UnityEngine.UIElements.BaseVisualElementPanel::<disposed>k__BackingField
	bool ___U3CdisposedU3Ek__BackingField_9;
	// UnityEngine.UIElements.ElementUnderPointer UnityEngine.UIElements.BaseVisualElementPanel::m_TopElementUnderPointers
	ElementUnderPointer_tB43AD64F79C6F06829D8B90318AF1A6BBE9C1904* ___m_TopElementUnderPointers_10;
	// System.Action UnityEngine.UIElements.BaseVisualElementPanel::standardShaderChanged
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___standardShaderChanged_11;
	// System.Action UnityEngine.UIElements.BaseVisualElementPanel::standardWorldSpaceShaderChanged
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___standardWorldSpaceShaderChanged_12;
	// System.Action UnityEngine.UIElements.BaseVisualElementPanel::atlasChanged
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___atlasChanged_13;
	// System.Action`1<UnityEngine.Material> UnityEngine.UIElements.BaseVisualElementPanel::updateMaterial
	Action_1_t996DFD52B4BDA6CBE8058C13167C4D2B8C612CAA* ___updateMaterial_14;
	// UnityEngine.UIElements.HierarchyEvent UnityEngine.UIElements.BaseVisualElementPanel::hierarchyChanged
	HierarchyEvent_tB23E4347BC47656A014CA104A5B1DDC172A2A705* ___hierarchyChanged_15;
	// System.Action`1<UnityEngine.UIElements.IPanel> UnityEngine.UIElements.BaseVisualElementPanel::beforeUpdate
	Action_1_tE55F8AC1EEC45D0C976E56B2950D65EC814C06E6* ___beforeUpdate_16;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
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

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// UnityEngine.UIElements.VisualElement
struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115  : public Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0
{
	// System.Int32 UnityEngine.UIElements.VisualElement::<UnityEngine.UIElements.IStylePropertyAnimations.runningAnimationCount>k__BackingField
	int32_t ___U3CUnityEngine_UIElements_IStylePropertyAnimations_runningAnimationCountU3Ek__BackingField_7;
	// System.Int32 UnityEngine.UIElements.VisualElement::<UnityEngine.UIElements.IStylePropertyAnimations.completedAnimationCount>k__BackingField
	int32_t ___U3CUnityEngine_UIElements_IStylePropertyAnimations_completedAnimationCountU3Ek__BackingField_8;
	// System.String UnityEngine.UIElements.VisualElement::m_Name
	String_t* ___m_Name_13;
	// System.Collections.Generic.List`1<System.String> UnityEngine.UIElements.VisualElement::m_ClassList
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___m_ClassList_14;
	// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.PropertyName,System.Object>> UnityEngine.UIElements.VisualElement::m_PropertyBag
	List_1_t60F39D768DAD2345527AD3EE73FAB2667DF4F260* ___m_PropertyBag_15;
	// UnityEngine.UIElements.VisualElementFlags UnityEngine.UIElements.VisualElement::m_Flags
	int32_t ___m_Flags_16;
	// System.String UnityEngine.UIElements.VisualElement::m_ViewDataKey
	String_t* ___m_ViewDataKey_17;
	// UnityEngine.UIElements.RenderHints UnityEngine.UIElements.VisualElement::m_RenderHints
	int32_t ___m_RenderHints_18;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::lastLayout
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___lastLayout_19;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::lastPseudoPadding
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___lastPseudoPadding_20;
	// UnityEngine.UIElements.UIR.RenderChainVEData UnityEngine.UIElements.VisualElement::renderChainData
	RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847 ___renderChainData_21;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_Layout
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_Layout_22;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_BoundingBox
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_BoundingBox_23;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_WorldBoundingBox
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_WorldBoundingBox_24;
	// UnityEngine.Matrix4x4 UnityEngine.UIElements.VisualElement::m_WorldTransformCache
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_WorldTransformCache_25;
	// UnityEngine.Matrix4x4 UnityEngine.UIElements.VisualElement::m_WorldTransformInverseCache
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_WorldTransformInverseCache_26;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_WorldClip
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_WorldClip_27;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_WorldClipMinusGroup
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_WorldClipMinusGroup_28;
	// System.Boolean UnityEngine.UIElements.VisualElement::m_WorldClipIsInfinite
	bool ___m_WorldClipIsInfinite_29;
	// UnityEngine.UIElements.PseudoStates UnityEngine.UIElements.VisualElement::triggerPseudoMask
	int32_t ___triggerPseudoMask_31;
	// UnityEngine.UIElements.PseudoStates UnityEngine.UIElements.VisualElement::dependencyPseudoMask
	int32_t ___dependencyPseudoMask_32;
	// UnityEngine.UIElements.PseudoStates UnityEngine.UIElements.VisualElement::m_PseudoStates
	int32_t ___m_PseudoStates_33;
	// System.Int32 UnityEngine.UIElements.VisualElement::<containedPointerIds>k__BackingField
	int32_t ___U3CcontainedPointerIdsU3Ek__BackingField_34;
	// UnityEngine.UIElements.PickingMode UnityEngine.UIElements.VisualElement::<pickingMode>k__BackingField
	int32_t ___U3CpickingModeU3Ek__BackingField_35;
	// UnityEngine.Yoga.YogaNode UnityEngine.UIElements.VisualElement::<yogaNode>k__BackingField
	YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___U3CyogaNodeU3Ek__BackingField_36;
	// UnityEngine.UIElements.ComputedStyle UnityEngine.UIElements.VisualElement::m_Style
	ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C ___m_Style_37;
	// UnityEngine.UIElements.StyleVariableContext UnityEngine.UIElements.VisualElement::variableContext
	StyleVariableContext_tF74F2787CE1F6BEBBFBFF0771CF493AC9E403527* ___variableContext_38;
	// System.Int32 UnityEngine.UIElements.VisualElement::inheritedStylesHash
	int32_t ___inheritedStylesHash_39;
	// System.UInt32 UnityEngine.UIElements.VisualElement::controlid
	uint32_t ___controlid_40;
	// System.Int32 UnityEngine.UIElements.VisualElement::imguiContainerDescendantCount
	int32_t ___imguiContainerDescendantCount_41;
	// System.Boolean UnityEngine.UIElements.VisualElement::<enabledSelf>k__BackingField
	bool ___U3CenabledSelfU3Ek__BackingField_42;
	// System.Action`1<UnityEngine.UIElements.MeshGenerationContext> UnityEngine.UIElements.VisualElement::<generateVisualContent>k__BackingField
	Action_1_t3DC3411926243F1DB9C330F8E105B904E38C1A0B* ___U3CgenerateVisualContentU3Ek__BackingField_43;
	// Unity.Profiling.ProfilerMarker UnityEngine.UIElements.VisualElement::k_GenerateVisualContentMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateVisualContentMarker_44;
	// UnityEngine.UIElements.VisualElement/RenderTargetMode UnityEngine.UIElements.VisualElement::m_SubRenderTargetMode
	int32_t ___m_SubRenderTargetMode_45;
	// UnityEngine.Material UnityEngine.UIElements.VisualElement::m_defaultMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_defaultMaterial_47;
	// UnityEngine.UIElements.VisualElement/TypeData UnityEngine.UIElements.VisualElement::m_TypeData
	TypeData_t01D670B4E71B5571B38C7412B1E652A47D6AF66A* ___m_TypeData_49;
	// UnityEngine.UIElements.VisualElement/Hierarchy UnityEngine.UIElements.VisualElement::<hierarchy>k__BackingField
	Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 ___U3ChierarchyU3Ek__BackingField_51;
	// System.Boolean UnityEngine.UIElements.VisualElement::<isRootVisualContainer>k__BackingField
	bool ___U3CisRootVisualContainerU3Ek__BackingField_52;
	// System.Boolean UnityEngine.UIElements.VisualElement::<cacheAsBitmap>k__BackingField
	bool ___U3CcacheAsBitmapU3Ek__BackingField_53;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement::m_PhysicalParent
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_PhysicalParent_54;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement::m_LogicalParent
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_LogicalParent_55;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.VisualElement::m_Children
	List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* ___m_Children_57;
	// UnityEngine.UIElements.BaseVisualElementPanel UnityEngine.UIElements.VisualElement::<elementPanel>k__BackingField
	BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* ___U3CelementPanelU3Ek__BackingField_58;
	// UnityEngine.UIElements.VisualTreeAsset UnityEngine.UIElements.VisualElement::m_VisualTreeAssetSource
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___m_VisualTreeAssetSource_59;
	// UnityEngine.UIElements.InlineStyleAccess UnityEngine.UIElements.VisualElement::inlineStyleAccess
	InlineStyleAccess_t5CA7877999C9442491A220AE50D605C84D09A165* ___inlineStyleAccess_61;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSheet> UnityEngine.UIElements.VisualElement::styleSheetList
	List_1_tEA16F82F7871418E28EB6F551D77A8AD9F2E337F* ___styleSheetList_62;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.Experimental.IValueAnimationUpdate> UnityEngine.UIElements.VisualElement::m_RunningAnimations
	List_1_t96E9133B70FB6765E6B138E810D33E18901715DA* ___m_RunningAnimations_64;
};

// System.Xml.Linq.XDocument
struct XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1  : public XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF
{
	// System.Xml.Linq.XDeclaration System.Xml.Linq.XDocument::_declaration
	XDeclaration_t62AAE9A25589F7D4C5B016DDF6DF858D11A2A990* ____declaration_4;
};

// Cysharp.Threading.Tasks.UniTaskExtensions/<Unwrap>d__30`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
typedef Il2CppFullySharedGenericStruct U3CUnwrapU3Ed__30_1_t2E081C4A7BDF9089F5B0C40E66027ED3FDA6358B;

// System.Action`1<System.Exception>
struct Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04  : public MulticastDelegate_t
{
};

// System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99  : public MulticastDelegate_t
{
};

// System.Action`2<System.Object,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Action_2_tF2CE797FD3D10871812A41CE44522D89D16291C5  : public MulticastDelegate_t
{
};

// System.Action`2<UnityEngine.UIElements.VisualElement,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Action_2_t31DE204344410D5DD02FBF738CE4A5EE7EDC040E  : public MulticastDelegate_t
{
};

// System.Action`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Action_2_t1D42C7D8DCD2DEB7C556FB3783F0EDAFF694E5E8  : public MulticastDelegate_t
{
};

// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.ValueTuple`3<System.Int32,System.ValueTuple`2<System.Boolean,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,System.Boolean>>
typedef Il2CppFullySharedGenericStruct Awaiter_t4BA45EFB14219BBA39E845794579EE65268E83C8;

// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.ValueTuple`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.ValueTuple`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>>
typedef Il2CppFullySharedGenericStruct Awaiter_t5E04BD43B397A95AE2DE0806722F998CFE3B78AC;

// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.ValueTuple`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.ValueTuple`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>>
typedef Il2CppFullySharedGenericStruct Awaiter_t50B566B804826FF00C85A3572CABC2AD15318490;

// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.ValueTuple`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.ValueTuple`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>>
typedef Il2CppFullySharedGenericStruct Awaiter_tD829185EC066429D9D042DD76BA7135C550B22E0;

// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.ValueTuple`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.ValueTuple`4<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>>
typedef Il2CppFullySharedGenericStruct Awaiter_t88DB7B12537D031A96B794F71CBBD1181A8D5DC8;

// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.ValueTuple`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.ValueTuple`5<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>>
typedef Il2CppFullySharedGenericStruct Awaiter_t6E15877815147641FD961D7BF7B70E70E97832F1;

// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.ValueTuple`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.ValueTuple`6<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>>
typedef Il2CppFullySharedGenericStruct Awaiter_t7147BE2B817DFC22CC398A00330C686C37D97D41;

// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.ValueTuple`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.ValueTuple`7<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>>
typedef Il2CppFullySharedGenericStruct Awaiter_t6A7BB22960A6B16711B83FB5212F073981FE83E2;

// System.Func`2<UnityEngine.UIElements.VisualElement,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Func_2_t1A4B0E4DC4C1E0796BCC42B35916E26E1F91056C  : public MulticastDelegate_t
{
};

// System.Func`3<System.String,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Func_3_tE7CCA5D7FC8F72537603F92EA4D2500163145CB0  : public MulticastDelegate_t
{
};

// Cysharp.Threading.Tasks.UniTask`1<System.ValueTuple`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.ValueTuple`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.ValueTuple`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>>>
typedef Il2CppFullySharedGenericStruct UniTask_1_t7A87942A5431B0056DDDB575051CDA4D4FCDB4BB;

// System.ValueTuple`8<Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,System.ValueTuple`8<Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,System.ValueTuple`1<Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>>>
typedef Il2CppFullySharedGenericStruct ValueTuple_8_t84FD1EA209F6096BE6BEAC5622F14D5E62346284;

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Cysharp.Threading.Tasks.UniTaskExtensions/<Timeout>d__13`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
typedef Il2CppFullySharedGenericStruct U3CTimeoutU3Ed__13_1_tE2FDC8F07C2AEEBCDECBE8376F3D77793EDDAFFE;

// Cysharp.Threading.Tasks.UniTaskExtensions/<TimeoutWithoutException>d__15`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
typedef Il2CppFullySharedGenericStruct U3CTimeoutWithoutExceptionU3Ed__15_1_t25E59C1AA10DBFBFFA14A406B9FAA091072DEBF0;

// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.ValueTuple`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.ValueTuple`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.ValueTuple`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>>>
typedef Il2CppFullySharedGenericStruct Awaiter_t3CC599DC0B3CBC307FEA3D25F68C8B6D2426FBA3;

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_37;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_39;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_40;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_42;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_43;
};

// Cysharp.Threading.Tasks.Internal.AsyncSubject`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// Cysharp.Threading.Tasks.Internal.AsyncSubject`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/Cache`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Cache_1_t7B4A181E5E427597BF4280A8F15C1644BC269237_StaticFields
{
	// System.Collections.Generic.IEqualityComparer`1<T> Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/Cache`1::Comparer
	RuntimeObject* ___Comparer_0;
};

// Cysharp.Threading.Tasks.Internal.UnityEqualityComparer/Cache`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.EmptyArray`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct EmptyArray_1_tF69A5F6BAD1150A16C4C98B346D6122FE3751C80_StaticFields
{
	// T[] System.EmptyArray`1::Value
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___Value_0;
};

// System.EmptyArray`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>

// System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>

// System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>
struct List_1_t1A058A09EDF187502B71E068C526B964CEA1283F_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>

// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// Cysharp.Threading.Tasks.UniTaskObservableExtensions/ReturnObservable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// Cysharp.Threading.Tasks.UniTaskObservableExtensions/ReturnObservable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Collections.Generic.Stack`1<System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>>

// System.Collections.Generic.Stack`1<System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>>

// Cysharp.Threading.Tasks.UniTaskObservableExtensions/ThrowObservable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// Cysharp.Threading.Tasks.UniTaskObservableExtensions/ThrowObservable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// UnityEngine.UIElements.Experimental.ValueAnimation`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ValueAnimation_1_tDA4866B3FE9CA9CF66BAA0D3DB3591B35CC1C482_StaticFields
{
	// UnityEngine.UIElements.ObjectPool`1<UnityEngine.UIElements.Experimental.ValueAnimation`1<T>> UnityEngine.UIElements.Experimental.ValueAnimation`1::sObjectPool
	ObjectPool_1_t14AD861DB16C1D8128773A1568BD9925E67A9ADB* ___sObjectPool_7;
};

// UnityEngine.UIElements.Experimental.ValueAnimation`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_StaticFields
{
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;
};

// UnityEngine.AndroidJavaObject

// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B_StaticFields
{
	// System.Threading.CancellationTokenSource System.Threading.CancellationTokenSource::s_canceledSource
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___s_canceledSource_0;
	// System.Threading.CancellationTokenSource System.Threading.CancellationTokenSource::s_neverCanceledSource
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___s_neverCanceledSource_1;
	// System.Int32 System.Threading.CancellationTokenSource::s_nLists
	int32_t ___s_nLists_2;
	// System.Threading.TimerCallback System.Threading.CancellationTokenSource::s_timerCallback
	TimerCallback_t7455CAFACC7054E62879920AFC84C5DA98B8C7CD* ___s_timerCallback_14;
};

// System.Threading.CancellationTokenSource

// System.Linq.Expressions.Expression
struct Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785_StaticFields
{
	// System.Dynamic.Utils.CacheDict`2<System.Type,System.Reflection.MethodInfo> System.Linq.Expressions.Expression::s_lambdaDelegateCache
	CacheDict_2_tB695739D50653F4D4C3DA03BCF07CC868196FB15* ___s_lambdaDelegateCache_0;
	// System.Dynamic.Utils.CacheDict`2<System.Type,System.Func`5<System.Linq.Expressions.Expression,System.String,System.Boolean,System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>,System.Linq.Expressions.LambdaExpression>> modreq(System.Runtime.CompilerServices.IsVolatile) System.Linq.Expressions.Expression::s_lambdaFactories
	CacheDict_2_t3592A9BE3B1E812BCE8A13D901156E74C707DBB7* ___s_lambdaFactories_1;
	// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Linq.Expressions.Expression,System.Linq.Expressions.Expression/ExtensionInfo> System.Linq.Expressions.Expression::s_legacyCtorSupportTable
	ConditionalWeakTable_2_t0F3FDA57EE333DF8B8C1F3FB944E4E19C5DDCFC7* ___s_legacyCtorSupportTable_2;
};

// System.Linq.Expressions.Expression

// System.Linq.Expressions.ExpressionVisitor

// System.Linq.Expressions.ExpressionVisitor

// YooAsset.ResourcePackage

// YooAsset.ResourcePackage

// Cysharp.Threading.Tasks.Internal.SingleAssignmentDisposable

// Cysharp.Threading.Tasks.Internal.SingleAssignmentDisposable

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Text.StringBuilder

// System.Text.StringBuilder

// Cysharp.Threading.Tasks.UniTaskExtensions

// Cysharp.Threading.Tasks.UniTaskExtensions

// Cysharp.Threading.Tasks.UniTaskObservableExtensions

// Cysharp.Threading.Tasks.UniTaskObservableExtensions

// Cysharp.Threading.Tasks.UnityAsyncExtensions

// Cysharp.Threading.Tasks.UnityAsyncExtensions

// Cysharp.Threading.Tasks.UnityBindingExtensions

// Cysharp.Threading.Tasks.UnityBindingExtensions

// Cysharp.Threading.Tasks.Internal.UnityEqualityComparer
struct UnityEqualityComparer_t30B676AAE766B0B506730C808FC91D43D186542B_StaticFields
{
	// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Vector2> Cysharp.Threading.Tasks.Internal.UnityEqualityComparer::Vector2
	RuntimeObject* ___Vector2_0;
	// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Vector3> Cysharp.Threading.Tasks.Internal.UnityEqualityComparer::Vector3
	RuntimeObject* ___Vector3_1;
	// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Vector4> Cysharp.Threading.Tasks.Internal.UnityEqualityComparer::Vector4
	RuntimeObject* ___Vector4_2;
	// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Color> Cysharp.Threading.Tasks.Internal.UnityEqualityComparer::Color
	RuntimeObject* ___Color_3;
	// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Color32> Cysharp.Threading.Tasks.Internal.UnityEqualityComparer::Color32
	RuntimeObject* ___Color32_4;
	// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Rect> Cysharp.Threading.Tasks.Internal.UnityEqualityComparer::Rect
	RuntimeObject* ___Rect_5;
	// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Bounds> Cysharp.Threading.Tasks.Internal.UnityEqualityComparer::Bounds
	RuntimeObject* ___Bounds_6;
	// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Quaternion> Cysharp.Threading.Tasks.Internal.UnityEqualityComparer::Quaternion
	RuntimeObject* ___Quaternion_7;
	// System.RuntimeTypeHandle Cysharp.Threading.Tasks.Internal.UnityEqualityComparer::vector2Type
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___vector2Type_8;
	// System.RuntimeTypeHandle Cysharp.Threading.Tasks.Internal.UnityEqualityComparer::vector3Type
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___vector3Type_9;
	// System.RuntimeTypeHandle Cysharp.Threading.Tasks.Internal.UnityEqualityComparer::vector4Type
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___vector4Type_10;
	// System.RuntimeTypeHandle Cysharp.Threading.Tasks.Internal.UnityEqualityComparer::colorType
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___colorType_11;
	// System.RuntimeTypeHandle Cysharp.Threading.Tasks.Internal.UnityEqualityComparer::color32Type
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___color32Type_12;
	// System.RuntimeTypeHandle Cysharp.Threading.Tasks.Internal.UnityEqualityComparer::rectType
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___rectType_13;
	// System.RuntimeTypeHandle Cysharp.Threading.Tasks.Internal.UnityEqualityComparer::boundsType
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___boundsType_14;
	// System.RuntimeTypeHandle Cysharp.Threading.Tasks.Internal.UnityEqualityComparer::quaternionType
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___quaternionType_15;
	// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Vector2Int> Cysharp.Threading.Tasks.Internal.UnityEqualityComparer::Vector2Int
	RuntimeObject* ___Vector2Int_16;
	// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Vector3Int> Cysharp.Threading.Tasks.Internal.UnityEqualityComparer::Vector3Int
	RuntimeObject* ___Vector3Int_17;
	// System.Collections.Generic.IEqualityComparer`1<UnityEngine.RangeInt> Cysharp.Threading.Tasks.Internal.UnityEqualityComparer::RangeInt
	RuntimeObject* ___RangeInt_18;
	// System.Collections.Generic.IEqualityComparer`1<UnityEngine.RectInt> Cysharp.Threading.Tasks.Internal.UnityEqualityComparer::RectInt
	RuntimeObject* ___RectInt_19;
	// System.Collections.Generic.IEqualityComparer`1<UnityEngine.BoundsInt> Cysharp.Threading.Tasks.Internal.UnityEqualityComparer::BoundsInt
	RuntimeObject* ___BoundsInt_20;
	// System.RuntimeTypeHandle Cysharp.Threading.Tasks.Internal.UnityEqualityComparer::vector2IntType
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___vector2IntType_21;
	// System.RuntimeTypeHandle Cysharp.Threading.Tasks.Internal.UnityEqualityComparer::vector3IntType
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___vector3IntType_22;
	// System.RuntimeTypeHandle Cysharp.Threading.Tasks.Internal.UnityEqualityComparer::rangeIntType
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___rangeIntType_23;
	// System.RuntimeTypeHandle Cysharp.Threading.Tasks.Internal.UnityEqualityComparer::rectIntType
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___rectIntType_24;
	// System.RuntimeTypeHandle Cysharp.Threading.Tasks.Internal.UnityEqualityComparer::boundsIntType
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___boundsIntType_25;
};

// Cysharp.Threading.Tasks.Internal.UnityEqualityComparer

// System.Runtime.CompilerServices.Unsafe

// System.Runtime.CompilerServices.Unsafe

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility

// UnityEngine.UIElements.UIR.Utility
struct Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_StaticFields
{
	// System.Action`1<System.Boolean> UnityEngine.UIElements.UIR.Utility::GraphicsResourcesRecreate
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___GraphicsResourcesRecreate_0;
	// System.Action UnityEngine.UIElements.UIR.Utility::EngineUpdate
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___EngineUpdate_1;
	// System.Action UnityEngine.UIElements.UIR.Utility::FlushPendingResources
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___FlushPendingResources_2;
	// System.Action`1<UnityEngine.Camera> UnityEngine.UIElements.UIR.Utility::RegisterIntermediateRenderers
	Action_1_t268986DA4CF361AC17B40338506A83AFB35832EA* ___RegisterIntermediateRenderers_3;
	// System.Action`1<System.IntPtr> UnityEngine.UIElements.UIR.Utility::RenderNodeAdd
	Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* ___RenderNodeAdd_4;
	// System.Action`1<System.IntPtr> UnityEngine.UIElements.UIR.Utility::RenderNodeExecute
	Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* ___RenderNodeExecute_5;
	// System.Action`1<System.IntPtr> UnityEngine.UIElements.UIR.Utility::RenderNodeCleanup
	Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* ___RenderNodeCleanup_6;
	// Unity.Profiling.ProfilerMarker UnityEngine.UIElements.UIR.Utility::s_MarkerRaiseEngineUpdate
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_MarkerRaiseEngineUpdate_7;
};

// UnityEngine.UIElements.UIR.Utility

// UnityEngine.UIElements.UxmlAttributeDescription

// UnityEngine.UIElements.UxmlAttributeDescription

// System.Numerics.Vector

// System.Numerics.Vector

// UnityEngine.UIElements.VisualTreeUpdater

// UnityEngine.UIElements.VisualTreeUpdater

// System.Threading.Volatile

// System.Threading.Volatile

// System.Xml.Linq.XObject

// System.Xml.Linq.XObject

// System.Xml.Schema.XmlValueConverter

// System.Xml.Schema.XmlValueConverter

// YooAsset.YooAssets
struct YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields
{
	// System.Boolean YooAsset.YooAssets::_isInitialize
	bool ____isInitialize_0;
	// UnityEngine.GameObject YooAsset.YooAssets::_driver
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____driver_1;
	// System.Collections.Generic.List`1<YooAsset.ResourcePackage> YooAsset.YooAssets::_packages
	List_1_t34A5F992A0C261FD9E072E04F6EB044CC633B43A* ____packages_2;
	// YooAsset.ResourcePackage YooAsset.YooAssets::_defaultPackage
	ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* ____defaultPackage_3;
};

// YooAsset.YooAssets

// UnityEngine._AndroidJNIHelper

// UnityEngine._AndroidJNIHelper

// UnityEngine.UIElements.VisualTreeUpdater/UpdaterArray

// UnityEngine.UIElements.VisualTreeUpdater/UpdaterArray

// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// Unity.Collections.NativeSlice`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>

// Unity.Collections.NativeSlice`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>

// Cysharp.Threading.Tasks.UniTask`1<System.Threading.Tasks.Task`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>

// Cysharp.Threading.Tasks.UniTask`1<System.Threading.Tasks.Task`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>

// Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// UnityEngine.Events.UnityEvent`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// UnityEngine.Events.UnityEvent`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// YooAsset.AllAssetsHandle

// YooAsset.AllAssetsHandle

// YooAsset.AssetHandle

// YooAsset.AssetHandle

// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder

// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Byte

// System.Byte

// System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticFields
{
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_actionToActionObjShunt
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_actionToActionObjShunt_1;
};

// System.Threading.CancellationToken

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

// UnityEngine.UIElements.CreationContext
struct CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257_StaticFields
{
	// UnityEngine.UIElements.CreationContext UnityEngine.UIElements.CreationContext::Default
	CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257 ___Default_0;
};

// UnityEngine.UIElements.CreationContext

// System.Double

// System.Double

// System.Int16

// System.Int16

// System.Int32

// System.Int32

// System.Int64

// System.Int64

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// System.Linq.Expressions.LambdaExpression

// System.Linq.Expressions.LambdaExpression

// System.Linq.Expressions.ParameterExpression

// System.Linq.Expressions.ParameterExpression

// System.SByte

// System.SByte

// System.Single

// System.Single

// YooAsset.SubAssetsHandle

// YooAsset.SubAssetsHandle

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

// System.UInt32

// System.UInt32

// System.UInt64

// System.UInt64

// Cysharp.Threading.Tasks.UniTaskVoid

// Cysharp.Threading.Tasks.UniTaskVoid

// System.Void

// System.Void

// System.Xml.Linq.XNode

// System.Xml.Linq.XNode

// System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor

// System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor

// System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter

// System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter

// System.Threading.Volatile/VolatileObject

// System.Threading.Volatile/VolatileObject

// Cysharp.Threading.Tasks.AsyncReactiveProperty`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct AsyncReactiveProperty_1_t55DCE046DB85F4B8B8BFAD7AE879EE536D5F9733_StaticFields
{
	// System.Boolean Cysharp.Threading.Tasks.AsyncReactiveProperty`1::isValueType
	bool ___isValueType_2;
};

// Cysharp.Threading.Tasks.AsyncReactiveProperty`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.ValueTuple`2<System.Boolean,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>

// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.ValueTuple`2<System.Boolean,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>

// Cysharp.Threading.Tasks.UniTask`1/Awaiter<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// Cysharp.Threading.Tasks.UniTask`1/Awaiter<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Linq.Expressions.Expression`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Linq.Expressions.Expression`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Threading.Tasks.Task`1<Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>
struct Task_1_tEEFAF6747CE41C77B985860193E36BC44BA345B3_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t63EDFF95307B61A8B48633032E4729CFD20A6AC1* ___s_defaultFactory_39;
};

// System.Threading.Tasks.Task`1<Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>

// Cysharp.Threading.Tasks.UniTaskExtensions/ToCoroutineEnumerator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// Cysharp.Threading.Tasks.UniTaskExtensions/ToCoroutineEnumerator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// Cysharp.Threading.Tasks.UniTaskCompletionSource`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// Cysharp.Threading.Tasks.UniTaskCompletionSource`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// Cysharp.Threading.Tasks.UniTask`1<Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>

// Cysharp.Threading.Tasks.UniTask`1<Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>

// Cysharp.Threading.Tasks.UniTask`1<System.ValueTuple`2<System.Boolean,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>

// Cysharp.Threading.Tasks.UniTask`1<System.ValueTuple`2<System.Boolean,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>

// Cysharp.Threading.Tasks.UniTask`1<System.ValueTuple`7<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>

// Cysharp.Threading.Tasks.UniTask`1<System.ValueTuple`7<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>

// Cysharp.Threading.Tasks.UnityEventHandlerAsyncEnumerable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// Cysharp.Threading.Tasks.UnityEventHandlerAsyncEnumerable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.ValueTuple`1<Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>

// System.ValueTuple`1<Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>

// System.ValueTuple`2<Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>

// System.ValueTuple`2<Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>

// System.ValueTuple`3<Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>

// System.ValueTuple`3<Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>

// System.ValueTuple`4<Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>

// System.ValueTuple`4<Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>

// System.ValueTuple`5<Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>

// System.ValueTuple`5<Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>

// System.ValueTuple`6<Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>

// System.ValueTuple`6<Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>

// System.ValueTuple`7<Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>

// System.ValueTuple`7<Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>

// System.Numerics.Vector`1<System.UInt64>
struct Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A_StaticFields
{
	// System.Int32 System.Numerics.Vector`1::s_count
	int32_t ___s_count_1;
	// System.Numerics.Vector`1<T> System.Numerics.Vector`1::s_zero
	Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___s_zero_2;
	// System.Numerics.Vector`1<T> System.Numerics.Vector`1::s_one
	Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___s_one_3;
	// System.Numerics.Vector`1<T> System.Numerics.Vector`1::s_allOnes
	Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___s_allOnes_4;
};

// System.Numerics.Vector`1<System.UInt64>

// System.Numerics.Vector`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>
struct Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2_StaticFields
{
	// System.Int32 System.Numerics.Vector`1::s_count
	int32_t ___s_count_1;
	// System.Numerics.Vector`1<T> System.Numerics.Vector`1::s_zero
	Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___s_zero_2;
	// System.Numerics.Vector`1<T> System.Numerics.Vector`1::s_one
	Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___s_one_3;
	// System.Numerics.Vector`1<T> System.Numerics.Vector`1::s_allOnes
	Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___s_allOnes_4;
};

// System.Numerics.Vector`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// UnityEngine.MaterialPropertyBlock

// UnityEngine.MaterialPropertyBlock

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// System.Xml.Linq.XContainer

// System.Xml.Linq.XContainer

// System.Xml.Schema.XmlListConverter

// System.Xml.Schema.XmlListConverter

// Cysharp.Threading.Tasks.UnityBindingExtensions/<BindToCore>d__12`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// Cysharp.Threading.Tasks.UnityBindingExtensions/<BindToCore>d__12`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// Cysharp.Threading.Tasks.UnityBindingExtensions/<BindToCore>d__6`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// Cysharp.Threading.Tasks.UnityBindingExtensions/<BindToCore>d__6`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// Cysharp.Threading.Tasks.UniTaskObservableExtensions/<Fire>d__3`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// Cysharp.Threading.Tasks.UniTaskObservableExtensions/<Fire>d__3`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// Cysharp.Threading.Tasks.UniTaskExtensions/<Unwrap>d__32`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// Cysharp.Threading.Tasks.UniTaskExtensions/<Unwrap>d__32`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// Cysharp.Threading.Tasks.UniTaskExtensions/<Unwrap>d__33`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// Cysharp.Threading.Tasks.UniTaskExtensions/<Unwrap>d__33`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// Cysharp.Threading.Tasks.UniTaskExtensions/<Unwrap>d__36`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// Cysharp.Threading.Tasks.UniTaskExtensions/<Unwrap>d__36`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// Cysharp.Threading.Tasks.UniTaskExtensions/<Unwrap>d__37`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// Cysharp.Threading.Tasks.UniTaskExtensions/<Unwrap>d__37`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// Cysharp.Threading.Tasks.AsyncLazy`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct AsyncLazy_1_t87351A911AC23F97600D7159986DFE3B30044433_StaticFields
{
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.AsyncLazy`1::continuation
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___continuation_0;
};

// Cysharp.Threading.Tasks.AsyncLazy`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// Cysharp.Threading.Tasks.AsyncUnityEventHandler`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct AsyncUnityEventHandler_1_tE2B8DC50E909DE9C20DA2F58857037AAAD5A238E_StaticFields
{
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.AsyncUnityEventHandler`1::cancellationCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___cancellationCallback_0;
};

// Cysharp.Threading.Tasks.AsyncUnityEventHandler`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.ValueTuple`7<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>

// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.ValueTuple`7<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>

// Cysharp.Threading.Tasks.UniTaskObservableExtensions/FirstValueToUniTaskObserver`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct FirstValueToUniTaskObserver_1_t744D4D72306E0D31D591DDFEEBDB175E92614FB7_StaticFields
{
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.UniTaskObservableExtensions/FirstValueToUniTaskObserver`1::callback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___callback_0;
};

// Cysharp.Threading.Tasks.UniTaskObservableExtensions/FirstValueToUniTaskObserver`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// Cysharp.Threading.Tasks.UniTaskObservableExtensions/ToUniTaskObserver`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ToUniTaskObserver_1_tE22EF3448C8DC79827CF7061DF88AF4161180E60_StaticFields
{
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.UniTaskObservableExtensions/ToUniTaskObserver`1::callback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___callback_0;
};

// Cysharp.Threading.Tasks.UniTaskObservableExtensions/ToUniTaskObserver`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// Cysharp.Threading.Tasks.UniTask`1<System.ValueTuple`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.ValueTuple`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>>

// Cysharp.Threading.Tasks.UniTask`1<System.ValueTuple`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.ValueTuple`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>>

// Cysharp.Threading.Tasks.UniTask`1<System.ValueTuple`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.ValueTuple`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>>

// Cysharp.Threading.Tasks.UniTask`1<System.ValueTuple`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.ValueTuple`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>>

// Cysharp.Threading.Tasks.UniTask`1<System.ValueTuple`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.ValueTuple`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>>

// Cysharp.Threading.Tasks.UniTask`1<System.ValueTuple`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.ValueTuple`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>>

// Cysharp.Threading.Tasks.UniTask`1<System.ValueTuple`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.ValueTuple`4<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>>

// Cysharp.Threading.Tasks.UniTask`1<System.ValueTuple`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.ValueTuple`4<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>>

// Cysharp.Threading.Tasks.UniTask`1<System.ValueTuple`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.ValueTuple`5<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>>

// Cysharp.Threading.Tasks.UniTask`1<System.ValueTuple`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.ValueTuple`5<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>>

// Cysharp.Threading.Tasks.UniTask`1<System.ValueTuple`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.ValueTuple`6<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>>

// Cysharp.Threading.Tasks.UniTask`1<System.ValueTuple`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.ValueTuple`6<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>>

// Cysharp.Threading.Tasks.UniTask`1<System.ValueTuple`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.ValueTuple`7<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>>

// Cysharp.Threading.Tasks.UniTask`1<System.ValueTuple`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.ValueTuple`7<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>>

// System.ValueTuple`8<Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,System.ValueTuple`1<Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>>

// System.ValueTuple`8<Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,System.ValueTuple`1<Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>>

// System.ValueTuple`8<Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,System.ValueTuple`2<Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>>

// System.ValueTuple`8<Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,System.ValueTuple`2<Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>>

// System.ValueTuple`8<Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,System.ValueTuple`3<Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>>

// System.ValueTuple`8<Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,System.ValueTuple`3<Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>>

// System.ValueTuple`8<Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,System.ValueTuple`4<Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>>

// System.ValueTuple`8<Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,System.ValueTuple`4<Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>>

// System.ValueTuple`8<Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,System.ValueTuple`5<Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>>

// System.ValueTuple`8<Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,System.ValueTuple`5<Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>>

// System.ValueTuple`8<Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,System.ValueTuple`6<Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>>

// System.ValueTuple`8<Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,System.ValueTuple`6<Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>>

// System.ValueTuple`8<Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,System.ValueTuple`7<Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>>

// System.ValueTuple`8<Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,System.ValueTuple`7<Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>>

// UnityEngine.UIElements.BaseVisualElementPanel

// UnityEngine.UIElements.BaseVisualElementPanel

// UnityEngine.Component

// UnityEngine.Component

// System.Type
struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Type

// UnityEngine.UIElements.VisualElement
struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_StaticFields
{
	// UnityEngine.PropertyName UnityEngine.UIElements.VisualElement::tooltipPropertyKey
	PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 ___tooltipPropertyKey_6;
	// System.UInt32 UnityEngine.UIElements.VisualElement::s_NextId
	uint32_t ___s_NextId_9;
	// System.Collections.Generic.List`1<System.String> UnityEngine.UIElements.VisualElement::s_EmptyClassList
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___s_EmptyClassList_10;
	// UnityEngine.PropertyName UnityEngine.UIElements.VisualElement::userDataPropertyKey
	PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 ___userDataPropertyKey_11;
	// System.String UnityEngine.UIElements.VisualElement::disabledUssClassName
	String_t* ___disabledUssClassName_12;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::s_InfiniteRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___s_InfiniteRect_30;
	// UnityEngine.Material UnityEngine.UIElements.VisualElement::s_runtimeMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_runtimeMaterial_46;
	// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.UIElements.VisualElement/TypeData> UnityEngine.UIElements.VisualElement::s_TypeData
	Dictionary_2_t4055F6540F36F21F9FEDAFB92D8E0089B38EBBC8* ___s_TypeData_48;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.VisualElement::s_EmptyList
	List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* ___s_EmptyList_56;
	// UnityEngine.UIElements.VisualElement/CustomStyleAccess UnityEngine.UIElements.VisualElement::s_CustomStyleAccess
	CustomStyleAccess_t170C852102B4D09FB478B620A75B14D096F9F2B1* ___s_CustomStyleAccess_60;
	// System.Text.RegularExpressions.Regex UnityEngine.UIElements.VisualElement::s_InternalStyleSheetPath
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___s_InternalStyleSheetPath_63;
};

// UnityEngine.UIElements.VisualElement

// System.Xml.Linq.XDocument

// System.Xml.Linq.XDocument

// Cysharp.Threading.Tasks.UniTaskExtensions/<Unwrap>d__30`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// Cysharp.Threading.Tasks.UniTaskExtensions/<Unwrap>d__30`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Action`1<System.Exception>

// System.Action`1<System.Exception>

// System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Action`2<System.Object,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Action`2<System.Object,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Action`2<UnityEngine.UIElements.VisualElement,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Action`2<UnityEngine.UIElements.VisualElement,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Action`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Action`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.ValueTuple`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.ValueTuple`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>>

// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.ValueTuple`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.ValueTuple`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>>

// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.ValueTuple`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.ValueTuple`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>>

// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.ValueTuple`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.ValueTuple`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>>

// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.ValueTuple`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.ValueTuple`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>>

// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.ValueTuple`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.ValueTuple`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>>

// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.ValueTuple`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.ValueTuple`4<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>>

// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.ValueTuple`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.ValueTuple`4<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>>

// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.ValueTuple`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.ValueTuple`5<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>>

// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.ValueTuple`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.ValueTuple`5<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>>

// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.ValueTuple`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.ValueTuple`6<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>>

// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.ValueTuple`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.ValueTuple`6<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>>

// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.ValueTuple`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.ValueTuple`7<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>>

// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.ValueTuple`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.ValueTuple`7<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>>

// System.Func`2<UnityEngine.UIElements.VisualElement,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Func`2<UnityEngine.UIElements.VisualElement,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Func`3<System.String,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Func`3<System.String,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// Cysharp.Threading.Tasks.UniTask`1<System.ValueTuple`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.ValueTuple`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.ValueTuple`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>>>

// Cysharp.Threading.Tasks.UniTask`1<System.ValueTuple`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.ValueTuple`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.ValueTuple`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>>>

// System.ValueTuple`8<Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,System.ValueTuple`8<Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,System.ValueTuple`1<Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>>>

// System.ValueTuple`8<Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,System.ValueTuple`8<Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,System.ValueTuple`1<Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>>>

// Cysharp.Threading.Tasks.UniTaskExtensions/<Timeout>d__13`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// Cysharp.Threading.Tasks.UniTaskExtensions/<Timeout>d__13`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// Cysharp.Threading.Tasks.UniTaskExtensions/<TimeoutWithoutException>d__15`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// Cysharp.Threading.Tasks.UniTaskExtensions/<TimeoutWithoutException>d__15`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.ValueTuple`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.ValueTuple`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.ValueTuple`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>>>

// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.ValueTuple`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.ValueTuple`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.ValueTuple`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>>>

// System.ArgumentNullException

// System.ArgumentNullException

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_41;
};

// UnityEngine.UI.Text
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType[]
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.AndroidJavaObject[]
struct AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001  : public RuntimeArray
{
	ALIGN_FIELD (8) AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* m_Items[1];

	inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

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
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4  : public RuntimeArray
{
	ALIGN_FIELD (8) bool m_Items[1];

	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

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
// System.SByte[]
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913  : public RuntimeArray
{
	ALIGN_FIELD (8) int8_t m_Items[1];

	inline int8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int16[]
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB  : public RuntimeArray
{
	ALIGN_FIELD (8) int16_t m_Items[1];

	inline int16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int16_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int64[]
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D  : public RuntimeArray
{
	ALIGN_FIELD (8) int64_t m_Items[1];

	inline int64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int64_t value)
	{
		m_Items[index] = value;
	}
};
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// System.Double[]
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE  : public RuntimeArray
{
	ALIGN_FIELD (8) double m_Items[1];

	inline double GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline double* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, double value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline double GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline double* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, double value)
	{
		m_Items[index] = value;
	}
};
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

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
// System.Linq.Expressions.ParameterExpression[]
struct ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C  : public RuntimeArray
{
	ALIGN_FIELD (8) ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* m_Items[1];

	inline ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T[] System.Array::Empty<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* Array_Empty_TisIl2CppFullySharedGenericAny_m244E2A51B33F845A2093F0862FBCE502E4FDD868_gshared_inline (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m3069CACB5775E013107F559C825422266A09F9E8_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m5E12B490550D90B0686D55F8F4E7B0506BD07120_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m73E14DB94D21272EEE1E28E4D74704B0095D8064_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Push(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Push_m072EF82431D7D7E164213D822010141A4C00050D_gshared (Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;
// T System.Collections.Generic.Stack`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Pop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Pop_m8E5FF1B4CFD9ADF4D8A7C4CFF4713C83E163A34A_gshared (Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;

// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder::Create()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B AsyncUniTaskVoidMethodBuilder_Create_m06E63ABF318CBA8C8DE8BA460E94C6E9CDB5ED64_inline (const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTaskVoid Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder::get_Task()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 AsyncUniTaskVoidMethodBuilder_get_Task_mA5D58CCC3268985A789B48F67492123752CE7A98_inline (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* __this, const RuntimeMethod* method) ;
// System.Boolean Cysharp.Threading.Tasks.UniTaskStatusExtensions::IsCompleted(Cysharp.Threading.Tasks.UniTaskStatus)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UniTaskStatusExtensions_IsCompleted_mF43C41C9CEB640E381D1F7A8B40142843AED87AE_inline (int32_t ___0_status, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.UniTaskVoid::Forget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniTaskVoid_Forget_mE4FC2CCCEFD822A5D63FFE97EE209FEE949CC255 (UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.Internal.SingleAssignmentDisposable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingleAssignmentDisposable__ctor_m0D2759248B3CEBD509F9B848CD0B385E783777D4 (SingleAssignmentDisposable_t9AA5F201708E252ABAEECE56258D630EF672906A* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.Internal.SingleAssignmentDisposable::set_Disposable(System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingleAssignmentDisposable_set_Disposable_m47E3E5D9584661A7C67BE8DD02B784D30680909B (SingleAssignmentDisposable_t9AA5F201708E252ABAEECE56258D630EF672906A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.Threading.CancellationToken Cysharp.Threading.Tasks.UniTaskCancellationExtensions::GetCancellationTokenOnDestroy(UnityEngine.Component)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED UniTaskCancellationExtensions_GetCancellationTokenOnDestroy_m19FD121F93A3C4FA26CD12524434DEB9E95E975B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___0_component, const RuntimeMethod* method) ;
// System.IntPtr System.IntPtr::op_Explicit(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D (void* ___0_value, const RuntimeMethod* method) ;
// System.Void System.IntPtr::.ctor(System.Void*)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline (intptr_t* __this, void* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.UIR.Utility::SetVectorArray(UnityEngine.MaterialPropertyBlock,System.Int32,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_SetVectorArray_m36650D854AAE55F689FF622D36CC2AC0B9FD7FB1 (MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* ___0_props, int32_t ___1_name, intptr_t ___2_vector4s, int32_t ___3_count, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.UIElements.UxmlAttributeDescription::TryGetValueFromBagAsString(UnityEngine.UIElements.IUxmlAttributes,UnityEngine.UIElements.CreationContext,System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UxmlAttributeDescription_TryGetValueFromBagAsString_mF08874E8E58AD04C20041C076E2447E9AF57C9ED (UxmlAttributeDescription_t742D021489DB2B564142146CAAAC3F9191825EF2* __this, RuntimeObject* ___0_bag, CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257 ___1_cc, String_t** ___2_value, const RuntimeMethod* method) ;
// UnityEngine.UIElements.IVisualTreeUpdater UnityEngine.UIElements.VisualTreeUpdater/UpdaterArray::get_Item(UnityEngine.UIElements.VisualTreeUpdatePhase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UpdaterArray_get_Item_m6DADA11557BD3FE2E6680F3C1F6F828DB4EE255C (UpdaterArray_tF8D43D2A3598E7C17ABB5308E83FDECF1F36A449* __this, int32_t ___0_phase, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.VisualTreeUpdater/UpdaterArray::set_Item(UnityEngine.UIElements.VisualTreeUpdatePhase,UnityEngine.UIElements.IVisualTreeUpdater)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdaterArray_set_Item_m2961BC09E3C22E6D3887BB8E48A367BAEF847A11 (UpdaterArray_tF8D43D2A3598E7C17ABB5308E83FDECF1F36A449* __this, int32_t ___0_phase, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AndroidReflection::IsPrimitive(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25 (Type_t* ___0_t, const RuntimeMethod* method) ;
// System.Int32[] UnityEngine.AndroidJNISafe::FromIntArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* AndroidJNISafe_FromIntArray_mC4C4DC70FFA39CD6E3E02FDAC7192324E6D4614E (intptr_t ___0_array, const RuntimeMethod* method) ;
// System.Boolean[] UnityEngine.AndroidJNISafe::FromBooleanArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* AndroidJNISafe_FromBooleanArray_m36ED740401185EC0A959CA0F96A324A69E668646 (intptr_t ___0_array, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Byte[] UnityEngine.AndroidJNISafe::FromByteArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* AndroidJNISafe_FromByteArray_mB06EF0FDBF6C738231E8F9D4998C38551131C4C5 (intptr_t ___0_array, const RuntimeMethod* method) ;
// System.SByte[] UnityEngine.AndroidJNISafe::FromSByteArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* AndroidJNISafe_FromSByteArray_m261D638D8B059AB777BEF0BEFDD0822717DFF2B1 (intptr_t ___0_array, const RuntimeMethod* method) ;
// System.Int16[] UnityEngine.AndroidJNISafe::FromShortArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* AndroidJNISafe_FromShortArray_m62C0CB2D0BAE96D4B8CE365630361150EBE884FC (intptr_t ___0_array, const RuntimeMethod* method) ;
// System.Int64[] UnityEngine.AndroidJNISafe::FromLongArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* AndroidJNISafe_FromLongArray_mC4D73C0DA27F212947AB85AA2030A35BECDF8288 (intptr_t ___0_array, const RuntimeMethod* method) ;
// System.Single[] UnityEngine.AndroidJNISafe::FromFloatArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* AndroidJNISafe_FromFloatArray_mDE02985159EEFD2CB28611C797AC21DE8B6300B8 (intptr_t ___0_array, const RuntimeMethod* method) ;
// System.Double[] UnityEngine.AndroidJNISafe::FromDoubleArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* AndroidJNISafe_FromDoubleArray_mDEA8F2C7854101272F3A2733F351B570AAD5D9D9 (intptr_t ___0_array, const RuntimeMethod* method) ;
// System.Char[] UnityEngine.AndroidJNISafe::FromCharArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* AndroidJNISafe_FromCharArray_m54EDC9D2BE92F9973F4E00EE953EE242B231EA96 (intptr_t ___0_array, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.AndroidJNISafe::GetArrayLength(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNISafe_GetArrayLength_m809419F04C9BB93FED5B4A89F0539231C9B90E6F (intptr_t ___0_array, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNI::GetObjectArrayElement(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_GetObjectArrayElement_mC4CAF9744617F69EFCD95B71D95492DA20A0FACE (intptr_t ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
// System.String UnityEngine.AndroidJNISafe::GetStringChars(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNISafe_GetStringChars_mE246814CD8FF4EDDEE6EBF107367C4A8EAF03849 (intptr_t ___0_str, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJNISafe::DeleteLocalRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094 (intptr_t ___0_localref, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaObject::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___0_jobject, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.String UnityEngine._AndroidJNIHelper::GetSignature(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNIHelper::GetFieldID(System.IntPtr,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetFieldID_mDA4775DFA37126A7EFEBCA8E68EF9640F3D6EF01 (intptr_t ___0_javaClass, String_t* ___1_fieldName, String_t* ___2_signature, bool ___3_isStatic, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNIHelper::GetMethodID(System.IntPtr,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8 (intptr_t ___0_javaClass, String_t* ___1_methodName, String_t* ___2_signature, bool ___3_isStatic, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___0_value, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Linq.Expressions.ParameterExpression>()
inline ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m3FAA05D641D29AC345AA871116A0E236549DB39F_inline (const RuntimeMethod* method)
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* il2cppRetVal = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (const RuntimeMethod*))Array_Empty_TisIl2CppFullySharedGenericAny_m244E2A51B33F845A2093F0862FBCE502E4FDD868_gshared_inline)(method);
	return (ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C*)il2cppRetVal;
}
// System.Void System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>::.ctor(System.Int32)
inline void List_1__ctor_m90AEF23AAC38CF4A308B9996EEF66C89F96E6A4D (List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, const RuntimeMethod*))List_1__ctor_m3069CACB5775E013107F559C825422266A09F9E8_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___0_capacity, method);
}
// System.Void System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>::Add(T)
inline void List_1_Add_m72E70DE20E4D4DFE86D505EDD3DBEA47E50449A5_inline (List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* __this, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___0_item, method);
}
// System.Void System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor::PushParameters(System.Collections.Generic.IEnumerable`1<System.Linq.Expressions.ParameterExpression>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuoteVisitor_PushParameters_mC0368A13FEDC063CA6CE13884A8167B788434D76 (QuoteVisitor_tAF65D5FC6B193B07A3D795C928F4E02DA518529F* __this, RuntimeObject* ___0_parameters, const RuntimeMethod* method) ;
// System.Void System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor::PopParameters(System.Collections.Generic.IEnumerable`1<System.Linq.Expressions.ParameterExpression>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuoteVisitor_PopParameters_m608713B0CFFB54DA0D4D0CF12F3E693A873D3FF9 (QuoteVisitor_tAF65D5FC6B193B07A3D795C928F4E02DA518529F* __this, RuntimeObject* ___0_parameters, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>::.ctor()
inline void HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B (HashSet_1_t068F5201D923072F46716204841D21328FE6218D* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, const RuntimeMethod*))HashSet_1__ctor_m5E12B490550D90B0686D55F8F4E7B0506BD07120_gshared)((HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*)__this, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>::Add(T)
inline bool HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69 (HashSet_1_t068F5201D923072F46716204841D21328FE6218D* __this, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))HashSet_1_Add_m73E14DB94D21272EEE1E28E4D74704B0095D8064_gshared)((HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*)__this, (Il2CppFullySharedGenericAny)___0_item, method);
}
// System.Void System.Collections.Generic.Stack`1<System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>>::Push(T)
inline void Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE (Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26* __this, HashSet_1_t068F5201D923072F46716204841D21328FE6218D* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Stack_1_Push_m072EF82431D7D7E164213D822010141A4C00050D_gshared)((Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A*)__this, (Il2CppFullySharedGenericAny)___0_item, method);
}
// System.Linq.Expressions.Expression System.Linq.Expressions.LambdaExpression::get_Body()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* LambdaExpression_get_Body_m161E156442547AE8A6837C5AE065BD93345451DE_inline (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Stack`1<System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>>::Pop()
inline HashSet_1_t068F5201D923072F46716204841D21328FE6218D* Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5 (Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26* __this, const RuntimeMethod* method)
{
	HashSet_1_t068F5201D923072F46716204841D21328FE6218D* il2cppRetVal;
	((  void (*) (Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Stack_1_Pop_m8E5FF1B4CFD9ADF4D8A7C4CFF4713C83E163A34A_gshared)((Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.ValueTuple`7<T1,T2,T3,T4,T5,T6,T7>> Cysharp.Threading.Tasks.UniTaskExtensions::GetAwaiter<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.ValueTuple`7<Cysharp.Threading.Tasks.UniTask`1<T1>,Cysharp.Threading.Tasks.UniTask`1<T2>,Cysharp.Threading.Tasks.UniTask`1<T3>,Cysharp.Threading.Tasks.UniTask`1<T4>,Cysharp.Threading.Tasks.UniTask`1<T5>,Cysharp.Threading.Tasks.UniTask`1<T6>,Cysharp.Threading.Tasks.UniTask`1<T7>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniTaskExtensions_GetAwaiter_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m642B97D4E2E666856D2CCCCC3628937EA8AAC8F2_gshared (/*System.ValueTuple`7<Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>*/ValueTuple_7_t99C1D51A040ECA9B385797480EC45940C83830C9 ___0_tasks, Awaiter_t38E3E69740B7CC197DF5F0D2E61E13FD406C9A0B* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<System.ValueTuple`7<T1,T2,T3,T4,T5,T6,T7>>)
	const uint32_t SizeOf_UniTask_1_t9C800EC495EA262D63C563A16F24B24532AD053A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 9));
	// sizeof(System.ValueTuple`7<Cysharp.Threading.Tasks.UniTask`1<T1>,Cysharp.Threading.Tasks.UniTask`1<T2>,Cysharp.Threading.Tasks.UniTask`1<T3>,Cysharp.Threading.Tasks.UniTask`1<T4>,Cysharp.Threading.Tasks.UniTask`1<T5>,Cysharp.Threading.Tasks.UniTask`1<T6>,Cysharp.Threading.Tasks.UniTask`1<T7>>)
	const uint32_t SizeOf_ValueTuple_7_tCA1119579C4B595E25385DE7087A33EC3764D7EC = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T1>)
	const uint32_t SizeOf_UniTask_1_t3A546C0EC66491742AC237E2D9ED842796F21C84 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T2>)
	const uint32_t SizeOf_UniTask_1_tB2F6D92484A5D8C9F971304CEA12A776BC2D2815 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T3>)
	const uint32_t SizeOf_UniTask_1_tD328528A4E25A0F935B20DF986B668144D6A9F2D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T4>)
	const uint32_t SizeOf_UniTask_1_t5AE8FC269942998F9B43992463846A98EE3A19A6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 4));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T5>)
	const uint32_t SizeOf_UniTask_1_tB0E09D1A35228AF26D328415C4E6BCB5FFBF81C4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 5));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T6>)
	const uint32_t SizeOf_UniTask_1_tEEC34B4A9DEC3566A3CACACB9D62BB8BA3219D7C = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 6));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T7>)
	const uint32_t SizeOf_UniTask_1_t2F8657D5BDD6BB4F719DD8FA03F1033D80721B09 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 7));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.ValueTuple`7<T1,T2,T3,T4,T5,T6,T7>>)
	const uint32_t SizeOf_Awaiter_tFB44F79B9335CC826136330073A321C84DFFA5AC = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 11));
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.ValueTuple`7<T1,T2,T3,T4,T5,T6,T7>>
	const Awaiter_t38E3E69740B7CC197DF5F0D2E61E13FD406C9A0B L_15 = alloca(SizeOf_Awaiter_tFB44F79B9335CC826136330073A321C84DFFA5AC);
	// Cysharp.Threading.Tasks.UniTask`1<T1>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_1 = alloca(SizeOf_UniTask_1_t3A546C0EC66491742AC237E2D9ED842796F21C84);
	// Cysharp.Threading.Tasks.UniTask`1<T2>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_3 = alloca(SizeOf_UniTask_1_tB2F6D92484A5D8C9F971304CEA12A776BC2D2815);
	// Cysharp.Threading.Tasks.UniTask`1<T3>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_5 = alloca(SizeOf_UniTask_1_tD328528A4E25A0F935B20DF986B668144D6A9F2D);
	// Cysharp.Threading.Tasks.UniTask`1<T4>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_7 = alloca(SizeOf_UniTask_1_t5AE8FC269942998F9B43992463846A98EE3A19A6);
	// Cysharp.Threading.Tasks.UniTask`1<T5>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_9 = alloca(SizeOf_UniTask_1_tB0E09D1A35228AF26D328415C4E6BCB5FFBF81C4);
	// Cysharp.Threading.Tasks.UniTask`1<T6>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_11 = alloca(SizeOf_UniTask_1_tEEC34B4A9DEC3566A3CACACB9D62BB8BA3219D7C);
	// Cysharp.Threading.Tasks.UniTask`1<T7>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_13 = alloca(SizeOf_UniTask_1_t2F8657D5BDD6BB4F719DD8FA03F1033D80721B09);
	// Cysharp.Threading.Tasks.UniTask`1<System.ValueTuple`7<T1,T2,T3,T4,T5,T6,T7>>
	const UniTask_1_t11211BBE24C9FA05BE724D46D15CDE52C34D3CA7 L_14 = alloca(SizeOf_UniTask_1_t9C800EC495EA262D63C563A16F24B24532AD053A);
	// System.ValueTuple`7<Cysharp.Threading.Tasks.UniTask`1<T1>,Cysharp.Threading.Tasks.UniTask`1<T2>,Cysharp.Threading.Tasks.UniTask`1<T3>,Cysharp.Threading.Tasks.UniTask`1<T4>,Cysharp.Threading.Tasks.UniTask`1<T5>,Cysharp.Threading.Tasks.UniTask`1<T6>,Cysharp.Threading.Tasks.UniTask`1<T7>>
	const ValueTuple_7_t99C1D51A040ECA9B385797480EC45940C83830C9 L_0 = alloca(SizeOf_ValueTuple_7_tCA1119579C4B595E25385DE7087A33EC3764D7EC);
	const ValueTuple_7_t99C1D51A040ECA9B385797480EC45940C83830C9 L_2 = alloca(SizeOf_ValueTuple_7_tCA1119579C4B595E25385DE7087A33EC3764D7EC);
	const ValueTuple_7_t99C1D51A040ECA9B385797480EC45940C83830C9 L_4 = alloca(SizeOf_ValueTuple_7_tCA1119579C4B595E25385DE7087A33EC3764D7EC);
	const ValueTuple_7_t99C1D51A040ECA9B385797480EC45940C83830C9 L_6 = alloca(SizeOf_ValueTuple_7_tCA1119579C4B595E25385DE7087A33EC3764D7EC);
	const ValueTuple_7_t99C1D51A040ECA9B385797480EC45940C83830C9 L_8 = alloca(SizeOf_ValueTuple_7_tCA1119579C4B595E25385DE7087A33EC3764D7EC);
	const ValueTuple_7_t99C1D51A040ECA9B385797480EC45940C83830C9 L_10 = alloca(SizeOf_ValueTuple_7_tCA1119579C4B595E25385DE7087A33EC3764D7EC);
	const ValueTuple_7_t99C1D51A040ECA9B385797480EC45940C83830C9 L_12 = alloca(SizeOf_ValueTuple_7_tCA1119579C4B595E25385DE7087A33EC3764D7EC);
	UniTask_1_t11211BBE24C9FA05BE724D46D15CDE52C34D3CA7 V_0 = alloca(SizeOf_UniTask_1_t9C800EC495EA262D63C563A16F24B24532AD053A);
	memset(V_0, 0, SizeOf_UniTask_1_t9C800EC495EA262D63C563A16F24B24532AD053A);
	{
		// return UniTask.WhenAll(tasks.Item1, tasks.Item2, tasks.Item3, tasks.Item4, tasks.Item5, tasks.Item6, tasks.Item7).GetAwaiter();
		il2cpp_codegen_memcpy(L_0, ___0_tasks, SizeOf_ValueTuple_7_tCA1119579C4B595E25385DE7087A33EC3764D7EC);
		il2cpp_codegen_memcpy(L_1, il2cpp_codegen_get_instance_field_data_pointer(L_0, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),0)), SizeOf_UniTask_1_t3A546C0EC66491742AC237E2D9ED842796F21C84);
		il2cpp_codegen_memcpy(L_2, ___0_tasks, SizeOf_ValueTuple_7_tCA1119579C4B595E25385DE7087A33EC3764D7EC);
		il2cpp_codegen_memcpy(L_3, il2cpp_codegen_get_instance_field_data_pointer(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),1)), SizeOf_UniTask_1_tB2F6D92484A5D8C9F971304CEA12A776BC2D2815);
		il2cpp_codegen_memcpy(L_4, ___0_tasks, SizeOf_ValueTuple_7_tCA1119579C4B595E25385DE7087A33EC3764D7EC);
		il2cpp_codegen_memcpy(L_5, il2cpp_codegen_get_instance_field_data_pointer(L_4, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),2)), SizeOf_UniTask_1_tD328528A4E25A0F935B20DF986B668144D6A9F2D);
		il2cpp_codegen_memcpy(L_6, ___0_tasks, SizeOf_ValueTuple_7_tCA1119579C4B595E25385DE7087A33EC3764D7EC);
		il2cpp_codegen_memcpy(L_7, il2cpp_codegen_get_instance_field_data_pointer(L_6, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),3)), SizeOf_UniTask_1_t5AE8FC269942998F9B43992463846A98EE3A19A6);
		il2cpp_codegen_memcpy(L_8, ___0_tasks, SizeOf_ValueTuple_7_tCA1119579C4B595E25385DE7087A33EC3764D7EC);
		il2cpp_codegen_memcpy(L_9, il2cpp_codegen_get_instance_field_data_pointer(L_8, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),4)), SizeOf_UniTask_1_tB0E09D1A35228AF26D328415C4E6BCB5FFBF81C4);
		il2cpp_codegen_memcpy(L_10, ___0_tasks, SizeOf_ValueTuple_7_tCA1119579C4B595E25385DE7087A33EC3764D7EC);
		il2cpp_codegen_memcpy(L_11, il2cpp_codegen_get_instance_field_data_pointer(L_10, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),5)), SizeOf_UniTask_1_tEEC34B4A9DEC3566A3CACACB9D62BB8BA3219D7C);
		il2cpp_codegen_memcpy(L_12, ___0_tasks, SizeOf_ValueTuple_7_tCA1119579C4B595E25385DE7087A33EC3764D7EC);
		il2cpp_codegen_memcpy(L_13, il2cpp_codegen_get_instance_field_data_pointer(L_12, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),6)), SizeOf_UniTask_1_t2F8657D5BDD6BB4F719DD8FA03F1033D80721B09);
		il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		InvokerActionInvoker8< UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483, UniTask_1_t11211BBE24C9FA05BE724D46D15CDE52C34D3CA7* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 8)), il2cpp_rgctx_method(method->rgctx_data, 8), NULL, L_1, L_3, L_5, L_7, L_9, L_11, L_13, (UniTask_1_t11211BBE24C9FA05BE724D46D15CDE52C34D3CA7*)L_14);
		il2cpp_codegen_memcpy(V_0, L_14, SizeOf_UniTask_1_t9C800EC495EA262D63C563A16F24B24532AD053A);
		InvokerActionInvoker1< Awaiter_t38E3E69740B7CC197DF5F0D2E61E13FD406C9A0B* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 10)), il2cpp_rgctx_method(method->rgctx_data, 10), (UniTask_1_t11211BBE24C9FA05BE724D46D15CDE52C34D3CA7*)V_0, (Awaiter_t38E3E69740B7CC197DF5F0D2E61E13FD406C9A0B*)L_15);
		il2cpp_codegen_memcpy(il2cppRetVal, L_15, SizeOf_Awaiter_tFB44F79B9335CC826136330073A321C84DFFA5AC);
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.ValueTuple`8<T1,T2,T3,T4,T5,T6,T7,System.ValueTuple`1<T8>>> Cysharp.Threading.Tasks.UniTaskExtensions::GetAwaiter<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.ValueTuple`8<Cysharp.Threading.Tasks.UniTask`1<T1>,Cysharp.Threading.Tasks.UniTask`1<T2>,Cysharp.Threading.Tasks.UniTask`1<T3>,Cysharp.Threading.Tasks.UniTask`1<T4>,Cysharp.Threading.Tasks.UniTask`1<T5>,Cysharp.Threading.Tasks.UniTask`1<T6>,Cysharp.Threading.Tasks.UniTask`1<T7>,System.ValueTuple`1<Cysharp.Threading.Tasks.UniTask`1<T8>>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniTaskExtensions_GetAwaiter_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mB1B5275EA56FD1C9C19BB4A165D81C49226279A0_gshared (/*System.ValueTuple`8<Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,System.ValueTuple`1<Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>>*/ValueTuple_8_tA0E93F1D201CFFDBBAE20066F95A32392233A8F8 ___0_tasks, Awaiter_t5E04BD43B397A95AE2DE0806722F998CFE3B78AC* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<System.ValueTuple`8<T1,T2,T3,T4,T5,T6,T7,System.ValueTuple`1<T8>>>)
	const uint32_t SizeOf_UniTask_1_tA4FBA80AFF044873CC356A0D782DC92E33ECDFC2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 11));
	// sizeof(System.ValueTuple`8<Cysharp.Threading.Tasks.UniTask`1<T1>,Cysharp.Threading.Tasks.UniTask`1<T2>,Cysharp.Threading.Tasks.UniTask`1<T3>,Cysharp.Threading.Tasks.UniTask`1<T4>,Cysharp.Threading.Tasks.UniTask`1<T5>,Cysharp.Threading.Tasks.UniTask`1<T6>,Cysharp.Threading.Tasks.UniTask`1<T7>,System.ValueTuple`1<Cysharp.Threading.Tasks.UniTask`1<T8>>>)
	const uint32_t SizeOf_ValueTuple_8_tFC3C4830765DCE18F708D731E33F9A0A1FEBEECC = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T1>)
	const uint32_t SizeOf_UniTask_1_t2EACC7E20058373F248B4815065DBFF1A1B5A301 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T2>)
	const uint32_t SizeOf_UniTask_1_t32D35226F5D46D493BCD1E0DF98CDD4D31683693 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T3>)
	const uint32_t SizeOf_UniTask_1_t84FEB1D700C3162E38167D3264A850164EAF6974 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T4>)
	const uint32_t SizeOf_UniTask_1_tDF99E4C209B9C386399606B706EBE564E7885461 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 4));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T5>)
	const uint32_t SizeOf_UniTask_1_tB20AD1E6EE2E22437B0B99A535FAF5CEF1627C49 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 5));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T6>)
	const uint32_t SizeOf_UniTask_1_tD901770B3580874FE49681FE93F779D070F51B2B = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 6));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T7>)
	const uint32_t SizeOf_UniTask_1_tC03D65AF66986AE007A3C0DD42F3CA575DDBB885 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 7));
	// sizeof(System.ValueTuple`1<Cysharp.Threading.Tasks.UniTask`1<T8>>)
	const uint32_t SizeOf_ValueTuple_1_t47E48A2B12963FA47287552EA6880655FCAB4AC8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 8));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T8>)
	const uint32_t SizeOf_UniTask_1_tB6497EFACB1D1AF4FAC6449C6029EA134188C16B = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 9));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.ValueTuple`8<T1,T2,T3,T4,T5,T6,T7,System.ValueTuple`1<T8>>>)
	const uint32_t SizeOf_Awaiter_t67B6DDCACF8F81DA2C18F58EC772A789954B9AA6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 13));
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.ValueTuple`8<T1,T2,T3,T4,T5,T6,T7,System.ValueTuple`1<T8>>>
	const Awaiter_t5E04BD43B397A95AE2DE0806722F998CFE3B78AC L_18 = alloca(SizeOf_Awaiter_t67B6DDCACF8F81DA2C18F58EC772A789954B9AA6);
	// Cysharp.Threading.Tasks.UniTask`1<T1>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_1 = alloca(SizeOf_UniTask_1_t2EACC7E20058373F248B4815065DBFF1A1B5A301);
	// Cysharp.Threading.Tasks.UniTask`1<T2>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_3 = alloca(SizeOf_UniTask_1_t32D35226F5D46D493BCD1E0DF98CDD4D31683693);
	// Cysharp.Threading.Tasks.UniTask`1<T3>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_5 = alloca(SizeOf_UniTask_1_t84FEB1D700C3162E38167D3264A850164EAF6974);
	// Cysharp.Threading.Tasks.UniTask`1<T4>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_7 = alloca(SizeOf_UniTask_1_tDF99E4C209B9C386399606B706EBE564E7885461);
	// Cysharp.Threading.Tasks.UniTask`1<T5>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_9 = alloca(SizeOf_UniTask_1_tB20AD1E6EE2E22437B0B99A535FAF5CEF1627C49);
	// Cysharp.Threading.Tasks.UniTask`1<T6>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_11 = alloca(SizeOf_UniTask_1_tD901770B3580874FE49681FE93F779D070F51B2B);
	// Cysharp.Threading.Tasks.UniTask`1<T7>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_13 = alloca(SizeOf_UniTask_1_tC03D65AF66986AE007A3C0DD42F3CA575DDBB885);
	// Cysharp.Threading.Tasks.UniTask`1<T8>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_16 = alloca(SizeOf_UniTask_1_tB6497EFACB1D1AF4FAC6449C6029EA134188C16B);
	// Cysharp.Threading.Tasks.UniTask`1<System.ValueTuple`8<T1,T2,T3,T4,T5,T6,T7,System.ValueTuple`1<T8>>>
	const UniTask_1_tC8B7106DF6932B69D22C65090C12F05E1112A993 L_17 = alloca(SizeOf_UniTask_1_tA4FBA80AFF044873CC356A0D782DC92E33ECDFC2);
	// System.ValueTuple`1<Cysharp.Threading.Tasks.UniTask`1<T8>>
	const ValueTuple_1_t3C5AD8484980F404DA084500FB7694D3646BFCAC L_15 = alloca(SizeOf_ValueTuple_1_t47E48A2B12963FA47287552EA6880655FCAB4AC8);
	// System.ValueTuple`8<Cysharp.Threading.Tasks.UniTask`1<T1>,Cysharp.Threading.Tasks.UniTask`1<T2>,Cysharp.Threading.Tasks.UniTask`1<T3>,Cysharp.Threading.Tasks.UniTask`1<T4>,Cysharp.Threading.Tasks.UniTask`1<T5>,Cysharp.Threading.Tasks.UniTask`1<T6>,Cysharp.Threading.Tasks.UniTask`1<T7>,System.ValueTuple`1<Cysharp.Threading.Tasks.UniTask`1<T8>>>
	const ValueTuple_8_tA0E93F1D201CFFDBBAE20066F95A32392233A8F8 L_0 = alloca(SizeOf_ValueTuple_8_tFC3C4830765DCE18F708D731E33F9A0A1FEBEECC);
	const ValueTuple_8_tA0E93F1D201CFFDBBAE20066F95A32392233A8F8 L_2 = alloca(SizeOf_ValueTuple_8_tFC3C4830765DCE18F708D731E33F9A0A1FEBEECC);
	const ValueTuple_8_tA0E93F1D201CFFDBBAE20066F95A32392233A8F8 L_4 = alloca(SizeOf_ValueTuple_8_tFC3C4830765DCE18F708D731E33F9A0A1FEBEECC);
	const ValueTuple_8_tA0E93F1D201CFFDBBAE20066F95A32392233A8F8 L_6 = alloca(SizeOf_ValueTuple_8_tFC3C4830765DCE18F708D731E33F9A0A1FEBEECC);
	const ValueTuple_8_tA0E93F1D201CFFDBBAE20066F95A32392233A8F8 L_8 = alloca(SizeOf_ValueTuple_8_tFC3C4830765DCE18F708D731E33F9A0A1FEBEECC);
	const ValueTuple_8_tA0E93F1D201CFFDBBAE20066F95A32392233A8F8 L_10 = alloca(SizeOf_ValueTuple_8_tFC3C4830765DCE18F708D731E33F9A0A1FEBEECC);
	const ValueTuple_8_tA0E93F1D201CFFDBBAE20066F95A32392233A8F8 L_12 = alloca(SizeOf_ValueTuple_8_tFC3C4830765DCE18F708D731E33F9A0A1FEBEECC);
	const ValueTuple_8_tA0E93F1D201CFFDBBAE20066F95A32392233A8F8 L_14 = alloca(SizeOf_ValueTuple_8_tFC3C4830765DCE18F708D731E33F9A0A1FEBEECC);
	UniTask_1_tC8B7106DF6932B69D22C65090C12F05E1112A993 V_0 = alloca(SizeOf_UniTask_1_tA4FBA80AFF044873CC356A0D782DC92E33ECDFC2);
	memset(V_0, 0, SizeOf_UniTask_1_tA4FBA80AFF044873CC356A0D782DC92E33ECDFC2);
	{
		// return UniTask.WhenAll(tasks.Item1, tasks.Item2, tasks.Item3, tasks.Item4, tasks.Item5, tasks.Item6, tasks.Item7, tasks.Item8).GetAwaiter();
		il2cpp_codegen_memcpy(L_0, ___0_tasks, SizeOf_ValueTuple_8_tFC3C4830765DCE18F708D731E33F9A0A1FEBEECC);
		il2cpp_codegen_memcpy(L_1, il2cpp_codegen_get_instance_field_data_pointer(L_0, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),0)), SizeOf_UniTask_1_t2EACC7E20058373F248B4815065DBFF1A1B5A301);
		il2cpp_codegen_memcpy(L_2, ___0_tasks, SizeOf_ValueTuple_8_tFC3C4830765DCE18F708D731E33F9A0A1FEBEECC);
		il2cpp_codegen_memcpy(L_3, il2cpp_codegen_get_instance_field_data_pointer(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),1)), SizeOf_UniTask_1_t32D35226F5D46D493BCD1E0DF98CDD4D31683693);
		il2cpp_codegen_memcpy(L_4, ___0_tasks, SizeOf_ValueTuple_8_tFC3C4830765DCE18F708D731E33F9A0A1FEBEECC);
		il2cpp_codegen_memcpy(L_5, il2cpp_codegen_get_instance_field_data_pointer(L_4, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),2)), SizeOf_UniTask_1_t84FEB1D700C3162E38167D3264A850164EAF6974);
		il2cpp_codegen_memcpy(L_6, ___0_tasks, SizeOf_ValueTuple_8_tFC3C4830765DCE18F708D731E33F9A0A1FEBEECC);
		il2cpp_codegen_memcpy(L_7, il2cpp_codegen_get_instance_field_data_pointer(L_6, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),3)), SizeOf_UniTask_1_tDF99E4C209B9C386399606B706EBE564E7885461);
		il2cpp_codegen_memcpy(L_8, ___0_tasks, SizeOf_ValueTuple_8_tFC3C4830765DCE18F708D731E33F9A0A1FEBEECC);
		il2cpp_codegen_memcpy(L_9, il2cpp_codegen_get_instance_field_data_pointer(L_8, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),4)), SizeOf_UniTask_1_tB20AD1E6EE2E22437B0B99A535FAF5CEF1627C49);
		il2cpp_codegen_memcpy(L_10, ___0_tasks, SizeOf_ValueTuple_8_tFC3C4830765DCE18F708D731E33F9A0A1FEBEECC);
		il2cpp_codegen_memcpy(L_11, il2cpp_codegen_get_instance_field_data_pointer(L_10, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),5)), SizeOf_UniTask_1_tD901770B3580874FE49681FE93F779D070F51B2B);
		il2cpp_codegen_memcpy(L_12, ___0_tasks, SizeOf_ValueTuple_8_tFC3C4830765DCE18F708D731E33F9A0A1FEBEECC);
		il2cpp_codegen_memcpy(L_13, il2cpp_codegen_get_instance_field_data_pointer(L_12, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),6)), SizeOf_UniTask_1_tC03D65AF66986AE007A3C0DD42F3CA575DDBB885);
		il2cpp_codegen_memcpy(L_14, ___0_tasks, SizeOf_ValueTuple_8_tFC3C4830765DCE18F708D731E33F9A0A1FEBEECC);
		il2cpp_codegen_memcpy(L_15, il2cpp_codegen_get_instance_field_data_pointer(L_14, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),7)), SizeOf_ValueTuple_1_t47E48A2B12963FA47287552EA6880655FCAB4AC8);
		il2cpp_codegen_memcpy(L_16, il2cpp_codegen_get_instance_field_data_pointer(L_15, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 8),0)), SizeOf_UniTask_1_tB6497EFACB1D1AF4FAC6449C6029EA134188C16B);
		il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		InvokerActionInvoker9< UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483, UniTask_1_tC8B7106DF6932B69D22C65090C12F05E1112A993* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 10)), il2cpp_rgctx_method(method->rgctx_data, 10), NULL, L_1, L_3, L_5, L_7, L_9, L_11, L_13, L_16, (UniTask_1_tC8B7106DF6932B69D22C65090C12F05E1112A993*)L_17);
		il2cpp_codegen_memcpy(V_0, L_17, SizeOf_UniTask_1_tA4FBA80AFF044873CC356A0D782DC92E33ECDFC2);
		InvokerActionInvoker1< Awaiter_t5E04BD43B397A95AE2DE0806722F998CFE3B78AC* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 12)), il2cpp_rgctx_method(method->rgctx_data, 12), (UniTask_1_tC8B7106DF6932B69D22C65090C12F05E1112A993*)V_0, (Awaiter_t5E04BD43B397A95AE2DE0806722F998CFE3B78AC*)L_18);
		il2cpp_codegen_memcpy(il2cppRetVal, L_18, SizeOf_Awaiter_t67B6DDCACF8F81DA2C18F58EC772A789954B9AA6);
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.ValueTuple`8<T1,T2,T3,T4,T5,T6,T7,System.ValueTuple`2<T8,T9>>> Cysharp.Threading.Tasks.UniTaskExtensions::GetAwaiter<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.ValueTuple`8<Cysharp.Threading.Tasks.UniTask`1<T1>,Cysharp.Threading.Tasks.UniTask`1<T2>,Cysharp.Threading.Tasks.UniTask`1<T3>,Cysharp.Threading.Tasks.UniTask`1<T4>,Cysharp.Threading.Tasks.UniTask`1<T5>,Cysharp.Threading.Tasks.UniTask`1<T6>,Cysharp.Threading.Tasks.UniTask`1<T7>,System.ValueTuple`2<Cysharp.Threading.Tasks.UniTask`1<T8>,Cysharp.Threading.Tasks.UniTask`1<T9>>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniTaskExtensions_GetAwaiter_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m9F17548B4E90ED5799B40D84E0BACD76779CC389_gshared (/*System.ValueTuple`8<Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,System.ValueTuple`2<Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>>*/ValueTuple_8_t61D1D09B4B359929CF81E281241BAE1CC8162733 ___0_tasks, Awaiter_t50B566B804826FF00C85A3572CABC2AD15318490* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<System.ValueTuple`8<T1,T2,T3,T4,T5,T6,T7,System.ValueTuple`2<T8,T9>>>)
	const uint32_t SizeOf_UniTask_1_t7962AF91654B9E83FA74F3A84057B3C8359A1AE4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 12));
	// sizeof(System.ValueTuple`8<Cysharp.Threading.Tasks.UniTask`1<T1>,Cysharp.Threading.Tasks.UniTask`1<T2>,Cysharp.Threading.Tasks.UniTask`1<T3>,Cysharp.Threading.Tasks.UniTask`1<T4>,Cysharp.Threading.Tasks.UniTask`1<T5>,Cysharp.Threading.Tasks.UniTask`1<T6>,Cysharp.Threading.Tasks.UniTask`1<T7>,System.ValueTuple`2<Cysharp.Threading.Tasks.UniTask`1<T8>,Cysharp.Threading.Tasks.UniTask`1<T9>>>)
	const uint32_t SizeOf_ValueTuple_8_tF760694AD3AE62B1B4DB6313A32423D8632ABCD2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T1>)
	const uint32_t SizeOf_UniTask_1_t31876479D0FC63D0C0A924659DB227205A39633C = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T2>)
	const uint32_t SizeOf_UniTask_1_t077B10227432ABC517A831B172E0B6304657D443 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T3>)
	const uint32_t SizeOf_UniTask_1_t0E53B0E41188B0E3DB125B38E6FA2CB6CACF09A2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T4>)
	const uint32_t SizeOf_UniTask_1_t1FCD5DE55C5D60D312DB7E49CA8B9F07A3C956AA = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 4));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T5>)
	const uint32_t SizeOf_UniTask_1_t6EB5E96363B61B68A01DE1598396B580F52F7D89 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 5));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T6>)
	const uint32_t SizeOf_UniTask_1_tB8693252D18E052FCEA10C2288A63BB898DEA5DF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 6));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T7>)
	const uint32_t SizeOf_UniTask_1_t0C43EC2143C456AFB9780C76B851926316029EAC = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 7));
	// sizeof(System.ValueTuple`2<Cysharp.Threading.Tasks.UniTask`1<T8>,Cysharp.Threading.Tasks.UniTask`1<T9>>)
	const uint32_t SizeOf_ValueTuple_2_t868DA13E3C83A9B310214359F9894FB0567343F6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 8));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T8>)
	const uint32_t SizeOf_UniTask_1_t85E719C683FBAB3DCDABA36EE03139BFB16BAFD0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 9));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T9>)
	const uint32_t SizeOf_UniTask_1_t3108F313BF6396252CCC77822BD0BD8F85A8DC93 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 10));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.ValueTuple`8<T1,T2,T3,T4,T5,T6,T7,System.ValueTuple`2<T8,T9>>>)
	const uint32_t SizeOf_Awaiter_tECF31417D346823102B45A8E666D43DE9D1EF44A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 14));
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.ValueTuple`8<T1,T2,T3,T4,T5,T6,T7,System.ValueTuple`2<T8,T9>>>
	const Awaiter_t50B566B804826FF00C85A3572CABC2AD15318490 L_21 = alloca(SizeOf_Awaiter_tECF31417D346823102B45A8E666D43DE9D1EF44A);
	// Cysharp.Threading.Tasks.UniTask`1<T1>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_1 = alloca(SizeOf_UniTask_1_t31876479D0FC63D0C0A924659DB227205A39633C);
	// Cysharp.Threading.Tasks.UniTask`1<T2>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_3 = alloca(SizeOf_UniTask_1_t077B10227432ABC517A831B172E0B6304657D443);
	// Cysharp.Threading.Tasks.UniTask`1<T3>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_5 = alloca(SizeOf_UniTask_1_t0E53B0E41188B0E3DB125B38E6FA2CB6CACF09A2);
	// Cysharp.Threading.Tasks.UniTask`1<T4>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_7 = alloca(SizeOf_UniTask_1_t1FCD5DE55C5D60D312DB7E49CA8B9F07A3C956AA);
	// Cysharp.Threading.Tasks.UniTask`1<T5>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_9 = alloca(SizeOf_UniTask_1_t6EB5E96363B61B68A01DE1598396B580F52F7D89);
	// Cysharp.Threading.Tasks.UniTask`1<T6>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_11 = alloca(SizeOf_UniTask_1_tB8693252D18E052FCEA10C2288A63BB898DEA5DF);
	// Cysharp.Threading.Tasks.UniTask`1<T7>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_13 = alloca(SizeOf_UniTask_1_t0C43EC2143C456AFB9780C76B851926316029EAC);
	// Cysharp.Threading.Tasks.UniTask`1<T8>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_16 = alloca(SizeOf_UniTask_1_t85E719C683FBAB3DCDABA36EE03139BFB16BAFD0);
	// Cysharp.Threading.Tasks.UniTask`1<T9>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_19 = alloca(SizeOf_UniTask_1_t3108F313BF6396252CCC77822BD0BD8F85A8DC93);
	// Cysharp.Threading.Tasks.UniTask`1<System.ValueTuple`8<T1,T2,T3,T4,T5,T6,T7,System.ValueTuple`2<T8,T9>>>
	const UniTask_1_tC6C278A4D85C9E41959BB7FFD790F8D934B43B1C L_20 = alloca(SizeOf_UniTask_1_t7962AF91654B9E83FA74F3A84057B3C8359A1AE4);
	// System.ValueTuple`2<Cysharp.Threading.Tasks.UniTask`1<T8>,Cysharp.Threading.Tasks.UniTask`1<T9>>
	const ValueTuple_2_t037296BC24DF911A25BFCB44B5BBFD6DD0ECAEAC L_15 = alloca(SizeOf_ValueTuple_2_t868DA13E3C83A9B310214359F9894FB0567343F6);
	const ValueTuple_2_t037296BC24DF911A25BFCB44B5BBFD6DD0ECAEAC L_18 = alloca(SizeOf_ValueTuple_2_t868DA13E3C83A9B310214359F9894FB0567343F6);
	// System.ValueTuple`8<Cysharp.Threading.Tasks.UniTask`1<T1>,Cysharp.Threading.Tasks.UniTask`1<T2>,Cysharp.Threading.Tasks.UniTask`1<T3>,Cysharp.Threading.Tasks.UniTask`1<T4>,Cysharp.Threading.Tasks.UniTask`1<T5>,Cysharp.Threading.Tasks.UniTask`1<T6>,Cysharp.Threading.Tasks.UniTask`1<T7>,System.ValueTuple`2<Cysharp.Threading.Tasks.UniTask`1<T8>,Cysharp.Threading.Tasks.UniTask`1<T9>>>
	const ValueTuple_8_t61D1D09B4B359929CF81E281241BAE1CC8162733 L_0 = alloca(SizeOf_ValueTuple_8_tF760694AD3AE62B1B4DB6313A32423D8632ABCD2);
	const ValueTuple_8_t61D1D09B4B359929CF81E281241BAE1CC8162733 L_2 = alloca(SizeOf_ValueTuple_8_tF760694AD3AE62B1B4DB6313A32423D8632ABCD2);
	const ValueTuple_8_t61D1D09B4B359929CF81E281241BAE1CC8162733 L_4 = alloca(SizeOf_ValueTuple_8_tF760694AD3AE62B1B4DB6313A32423D8632ABCD2);
	const ValueTuple_8_t61D1D09B4B359929CF81E281241BAE1CC8162733 L_6 = alloca(SizeOf_ValueTuple_8_tF760694AD3AE62B1B4DB6313A32423D8632ABCD2);
	const ValueTuple_8_t61D1D09B4B359929CF81E281241BAE1CC8162733 L_8 = alloca(SizeOf_ValueTuple_8_tF760694AD3AE62B1B4DB6313A32423D8632ABCD2);
	const ValueTuple_8_t61D1D09B4B359929CF81E281241BAE1CC8162733 L_10 = alloca(SizeOf_ValueTuple_8_tF760694AD3AE62B1B4DB6313A32423D8632ABCD2);
	const ValueTuple_8_t61D1D09B4B359929CF81E281241BAE1CC8162733 L_12 = alloca(SizeOf_ValueTuple_8_tF760694AD3AE62B1B4DB6313A32423D8632ABCD2);
	const ValueTuple_8_t61D1D09B4B359929CF81E281241BAE1CC8162733 L_14 = alloca(SizeOf_ValueTuple_8_tF760694AD3AE62B1B4DB6313A32423D8632ABCD2);
	const ValueTuple_8_t61D1D09B4B359929CF81E281241BAE1CC8162733 L_17 = alloca(SizeOf_ValueTuple_8_tF760694AD3AE62B1B4DB6313A32423D8632ABCD2);
	UniTask_1_tC6C278A4D85C9E41959BB7FFD790F8D934B43B1C V_0 = alloca(SizeOf_UniTask_1_t7962AF91654B9E83FA74F3A84057B3C8359A1AE4);
	memset(V_0, 0, SizeOf_UniTask_1_t7962AF91654B9E83FA74F3A84057B3C8359A1AE4);
	{
		// return UniTask.WhenAll(tasks.Item1, tasks.Item2, tasks.Item3, tasks.Item4, tasks.Item5, tasks.Item6, tasks.Item7, tasks.Item8, tasks.Item9).GetAwaiter();
		il2cpp_codegen_memcpy(L_0, ___0_tasks, SizeOf_ValueTuple_8_tF760694AD3AE62B1B4DB6313A32423D8632ABCD2);
		il2cpp_codegen_memcpy(L_1, il2cpp_codegen_get_instance_field_data_pointer(L_0, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),0)), SizeOf_UniTask_1_t31876479D0FC63D0C0A924659DB227205A39633C);
		il2cpp_codegen_memcpy(L_2, ___0_tasks, SizeOf_ValueTuple_8_tF760694AD3AE62B1B4DB6313A32423D8632ABCD2);
		il2cpp_codegen_memcpy(L_3, il2cpp_codegen_get_instance_field_data_pointer(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),1)), SizeOf_UniTask_1_t077B10227432ABC517A831B172E0B6304657D443);
		il2cpp_codegen_memcpy(L_4, ___0_tasks, SizeOf_ValueTuple_8_tF760694AD3AE62B1B4DB6313A32423D8632ABCD2);
		il2cpp_codegen_memcpy(L_5, il2cpp_codegen_get_instance_field_data_pointer(L_4, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),2)), SizeOf_UniTask_1_t0E53B0E41188B0E3DB125B38E6FA2CB6CACF09A2);
		il2cpp_codegen_memcpy(L_6, ___0_tasks, SizeOf_ValueTuple_8_tF760694AD3AE62B1B4DB6313A32423D8632ABCD2);
		il2cpp_codegen_memcpy(L_7, il2cpp_codegen_get_instance_field_data_pointer(L_6, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),3)), SizeOf_UniTask_1_t1FCD5DE55C5D60D312DB7E49CA8B9F07A3C956AA);
		il2cpp_codegen_memcpy(L_8, ___0_tasks, SizeOf_ValueTuple_8_tF760694AD3AE62B1B4DB6313A32423D8632ABCD2);
		il2cpp_codegen_memcpy(L_9, il2cpp_codegen_get_instance_field_data_pointer(L_8, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),4)), SizeOf_UniTask_1_t6EB5E96363B61B68A01DE1598396B580F52F7D89);
		il2cpp_codegen_memcpy(L_10, ___0_tasks, SizeOf_ValueTuple_8_tF760694AD3AE62B1B4DB6313A32423D8632ABCD2);
		il2cpp_codegen_memcpy(L_11, il2cpp_codegen_get_instance_field_data_pointer(L_10, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),5)), SizeOf_UniTask_1_tB8693252D18E052FCEA10C2288A63BB898DEA5DF);
		il2cpp_codegen_memcpy(L_12, ___0_tasks, SizeOf_ValueTuple_8_tF760694AD3AE62B1B4DB6313A32423D8632ABCD2);
		il2cpp_codegen_memcpy(L_13, il2cpp_codegen_get_instance_field_data_pointer(L_12, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),6)), SizeOf_UniTask_1_t0C43EC2143C456AFB9780C76B851926316029EAC);
		il2cpp_codegen_memcpy(L_14, ___0_tasks, SizeOf_ValueTuple_8_tF760694AD3AE62B1B4DB6313A32423D8632ABCD2);
		il2cpp_codegen_memcpy(L_15, il2cpp_codegen_get_instance_field_data_pointer(L_14, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),7)), SizeOf_ValueTuple_2_t868DA13E3C83A9B310214359F9894FB0567343F6);
		il2cpp_codegen_memcpy(L_16, il2cpp_codegen_get_instance_field_data_pointer(L_15, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 8),0)), SizeOf_UniTask_1_t85E719C683FBAB3DCDABA36EE03139BFB16BAFD0);
		il2cpp_codegen_memcpy(L_17, ___0_tasks, SizeOf_ValueTuple_8_tF760694AD3AE62B1B4DB6313A32423D8632ABCD2);
		il2cpp_codegen_memcpy(L_18, il2cpp_codegen_get_instance_field_data_pointer(L_17, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),7)), SizeOf_ValueTuple_2_t868DA13E3C83A9B310214359F9894FB0567343F6);
		il2cpp_codegen_memcpy(L_19, il2cpp_codegen_get_instance_field_data_pointer(L_18, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 8),1)), SizeOf_UniTask_1_t3108F313BF6396252CCC77822BD0BD8F85A8DC93);
		il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		InvokerActionInvoker10< UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483, UniTask_1_tC6C278A4D85C9E41959BB7FFD790F8D934B43B1C* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 11)), il2cpp_rgctx_method(method->rgctx_data, 11), NULL, L_1, L_3, L_5, L_7, L_9, L_11, L_13, L_16, L_19, (UniTask_1_tC6C278A4D85C9E41959BB7FFD790F8D934B43B1C*)L_20);
		il2cpp_codegen_memcpy(V_0, L_20, SizeOf_UniTask_1_t7962AF91654B9E83FA74F3A84057B3C8359A1AE4);
		InvokerActionInvoker1< Awaiter_t50B566B804826FF00C85A3572CABC2AD15318490* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 13)), il2cpp_rgctx_method(method->rgctx_data, 13), (UniTask_1_tC6C278A4D85C9E41959BB7FFD790F8D934B43B1C*)V_0, (Awaiter_t50B566B804826FF00C85A3572CABC2AD15318490*)L_21);
		il2cpp_codegen_memcpy(il2cppRetVal, L_21, SizeOf_Awaiter_tECF31417D346823102B45A8E666D43DE9D1EF44A);
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.ValueTuple`8<T1,T2,T3,T4,T5,T6,T7,System.ValueTuple`3<T8,T9,T10>>> Cysharp.Threading.Tasks.UniTaskExtensions::GetAwaiter<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.ValueTuple`8<Cysharp.Threading.Tasks.UniTask`1<T1>,Cysharp.Threading.Tasks.UniTask`1<T2>,Cysharp.Threading.Tasks.UniTask`1<T3>,Cysharp.Threading.Tasks.UniTask`1<T4>,Cysharp.Threading.Tasks.UniTask`1<T5>,Cysharp.Threading.Tasks.UniTask`1<T6>,Cysharp.Threading.Tasks.UniTask`1<T7>,System.ValueTuple`3<Cysharp.Threading.Tasks.UniTask`1<T8>,Cysharp.Threading.Tasks.UniTask`1<T9>,Cysharp.Threading.Tasks.UniTask`1<T10>>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniTaskExtensions_GetAwaiter_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m4F87E706173B1471DE6A481278BCFFDFBBC0DD45_gshared (/*System.ValueTuple`8<Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,System.ValueTuple`3<Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>>*/ValueTuple_8_tCA8AECE1E35FAAF8CBC3498315D8384648E6E493 ___0_tasks, Awaiter_tD829185EC066429D9D042DD76BA7135C550B22E0* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<System.ValueTuple`8<T1,T2,T3,T4,T5,T6,T7,System.ValueTuple`3<T8,T9,T10>>>)
	const uint32_t SizeOf_UniTask_1_tAEB4CD6A180EAD1173D220F18B0AB0DB95325B07 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 13));
	// sizeof(System.ValueTuple`8<Cysharp.Threading.Tasks.UniTask`1<T1>,Cysharp.Threading.Tasks.UniTask`1<T2>,Cysharp.Threading.Tasks.UniTask`1<T3>,Cysharp.Threading.Tasks.UniTask`1<T4>,Cysharp.Threading.Tasks.UniTask`1<T5>,Cysharp.Threading.Tasks.UniTask`1<T6>,Cysharp.Threading.Tasks.UniTask`1<T7>,System.ValueTuple`3<Cysharp.Threading.Tasks.UniTask`1<T8>,Cysharp.Threading.Tasks.UniTask`1<T9>,Cysharp.Threading.Tasks.UniTask`1<T10>>>)
	const uint32_t SizeOf_ValueTuple_8_t916C6E0992C959E58535FB1ADB8161C9041E36A8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T1>)
	const uint32_t SizeOf_UniTask_1_t036CDE5FC5B8C23AE40FF6F0046DE96E38A17DBB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T2>)
	const uint32_t SizeOf_UniTask_1_t01042105264015F12A94AE7B4FAA702A3E354EAB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T3>)
	const uint32_t SizeOf_UniTask_1_tA646F693E84E269C82B60B1DBCCDF8A0C460688D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T4>)
	const uint32_t SizeOf_UniTask_1_t4EBADFDF50EF16945D78432BC46C292D38A333C7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 4));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T5>)
	const uint32_t SizeOf_UniTask_1_t47AF5E031DC5ED0D714368E43EA3D8BAF24D4D5D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 5));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T6>)
	const uint32_t SizeOf_UniTask_1_t7D9748BE8CF91E8C72826C0BBF10C54D0A491E54 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 6));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T7>)
	const uint32_t SizeOf_UniTask_1_tA38AD03E7AFEEA5422C3D309B316555845EF618F = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 7));
	// sizeof(System.ValueTuple`3<Cysharp.Threading.Tasks.UniTask`1<T8>,Cysharp.Threading.Tasks.UniTask`1<T9>,Cysharp.Threading.Tasks.UniTask`1<T10>>)
	const uint32_t SizeOf_ValueTuple_3_t943B8D3DAACA3D98A56B2BD295A7A703738C1789 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 8));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T8>)
	const uint32_t SizeOf_UniTask_1_tDFD42C22B271716FCFA37F9F3B02264F92CB2A14 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 9));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T9>)
	const uint32_t SizeOf_UniTask_1_t025A2BFBA8ACDC20743D6419103469B8C4801932 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 10));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T10>)
	const uint32_t SizeOf_UniTask_1_t3CF1A774A4E82466549482BEE698BECBCBC94490 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 11));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.ValueTuple`8<T1,T2,T3,T4,T5,T6,T7,System.ValueTuple`3<T8,T9,T10>>>)
	const uint32_t SizeOf_Awaiter_tD721ACCF5BC1A4324AA8232E79AA780A47323861 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 15));
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.ValueTuple`8<T1,T2,T3,T4,T5,T6,T7,System.ValueTuple`3<T8,T9,T10>>>
	const Awaiter_tD829185EC066429D9D042DD76BA7135C550B22E0 L_24 = alloca(SizeOf_Awaiter_tD721ACCF5BC1A4324AA8232E79AA780A47323861);
	// Cysharp.Threading.Tasks.UniTask`1<T1>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_1 = alloca(SizeOf_UniTask_1_t036CDE5FC5B8C23AE40FF6F0046DE96E38A17DBB);
	// Cysharp.Threading.Tasks.UniTask`1<T2>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_3 = alloca(SizeOf_UniTask_1_t01042105264015F12A94AE7B4FAA702A3E354EAB);
	// Cysharp.Threading.Tasks.UniTask`1<T3>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_5 = alloca(SizeOf_UniTask_1_tA646F693E84E269C82B60B1DBCCDF8A0C460688D);
	// Cysharp.Threading.Tasks.UniTask`1<T4>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_7 = alloca(SizeOf_UniTask_1_t4EBADFDF50EF16945D78432BC46C292D38A333C7);
	// Cysharp.Threading.Tasks.UniTask`1<T5>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_9 = alloca(SizeOf_UniTask_1_t47AF5E031DC5ED0D714368E43EA3D8BAF24D4D5D);
	// Cysharp.Threading.Tasks.UniTask`1<T6>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_11 = alloca(SizeOf_UniTask_1_t7D9748BE8CF91E8C72826C0BBF10C54D0A491E54);
	// Cysharp.Threading.Tasks.UniTask`1<T7>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_13 = alloca(SizeOf_UniTask_1_tA38AD03E7AFEEA5422C3D309B316555845EF618F);
	// Cysharp.Threading.Tasks.UniTask`1<T8>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_16 = alloca(SizeOf_UniTask_1_tDFD42C22B271716FCFA37F9F3B02264F92CB2A14);
	// Cysharp.Threading.Tasks.UniTask`1<T9>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_19 = alloca(SizeOf_UniTask_1_t025A2BFBA8ACDC20743D6419103469B8C4801932);
	// Cysharp.Threading.Tasks.UniTask`1<T10>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_22 = alloca(SizeOf_UniTask_1_t3CF1A774A4E82466549482BEE698BECBCBC94490);
	// Cysharp.Threading.Tasks.UniTask`1<System.ValueTuple`8<T1,T2,T3,T4,T5,T6,T7,System.ValueTuple`3<T8,T9,T10>>>
	const UniTask_1_tC64872BEABE327546ED6873C1EA16E1C9DBAF71F L_23 = alloca(SizeOf_UniTask_1_tAEB4CD6A180EAD1173D220F18B0AB0DB95325B07);
	// System.ValueTuple`3<Cysharp.Threading.Tasks.UniTask`1<T8>,Cysharp.Threading.Tasks.UniTask`1<T9>,Cysharp.Threading.Tasks.UniTask`1<T10>>
	const ValueTuple_3_t556B03C771B23D4D53FE40EEBCFF8CBD8254905B L_15 = alloca(SizeOf_ValueTuple_3_t943B8D3DAACA3D98A56B2BD295A7A703738C1789);
	const ValueTuple_3_t556B03C771B23D4D53FE40EEBCFF8CBD8254905B L_18 = alloca(SizeOf_ValueTuple_3_t943B8D3DAACA3D98A56B2BD295A7A703738C1789);
	const ValueTuple_3_t556B03C771B23D4D53FE40EEBCFF8CBD8254905B L_21 = alloca(SizeOf_ValueTuple_3_t943B8D3DAACA3D98A56B2BD295A7A703738C1789);
	// System.ValueTuple`8<Cysharp.Threading.Tasks.UniTask`1<T1>,Cysharp.Threading.Tasks.UniTask`1<T2>,Cysharp.Threading.Tasks.UniTask`1<T3>,Cysharp.Threading.Tasks.UniTask`1<T4>,Cysharp.Threading.Tasks.UniTask`1<T5>,Cysharp.Threading.Tasks.UniTask`1<T6>,Cysharp.Threading.Tasks.UniTask`1<T7>,System.ValueTuple`3<Cysharp.Threading.Tasks.UniTask`1<T8>,Cysharp.Threading.Tasks.UniTask`1<T9>,Cysharp.Threading.Tasks.UniTask`1<T10>>>
	const ValueTuple_8_tCA8AECE1E35FAAF8CBC3498315D8384648E6E493 L_0 = alloca(SizeOf_ValueTuple_8_t916C6E0992C959E58535FB1ADB8161C9041E36A8);
	const ValueTuple_8_tCA8AECE1E35FAAF8CBC3498315D8384648E6E493 L_2 = alloca(SizeOf_ValueTuple_8_t916C6E0992C959E58535FB1ADB8161C9041E36A8);
	const ValueTuple_8_tCA8AECE1E35FAAF8CBC3498315D8384648E6E493 L_4 = alloca(SizeOf_ValueTuple_8_t916C6E0992C959E58535FB1ADB8161C9041E36A8);
	const ValueTuple_8_tCA8AECE1E35FAAF8CBC3498315D8384648E6E493 L_6 = alloca(SizeOf_ValueTuple_8_t916C6E0992C959E58535FB1ADB8161C9041E36A8);
	const ValueTuple_8_tCA8AECE1E35FAAF8CBC3498315D8384648E6E493 L_8 = alloca(SizeOf_ValueTuple_8_t916C6E0992C959E58535FB1ADB8161C9041E36A8);
	const ValueTuple_8_tCA8AECE1E35FAAF8CBC3498315D8384648E6E493 L_10 = alloca(SizeOf_ValueTuple_8_t916C6E0992C959E58535FB1ADB8161C9041E36A8);
	const ValueTuple_8_tCA8AECE1E35FAAF8CBC3498315D8384648E6E493 L_12 = alloca(SizeOf_ValueTuple_8_t916C6E0992C959E58535FB1ADB8161C9041E36A8);
	const ValueTuple_8_tCA8AECE1E35FAAF8CBC3498315D8384648E6E493 L_14 = alloca(SizeOf_ValueTuple_8_t916C6E0992C959E58535FB1ADB8161C9041E36A8);
	const ValueTuple_8_tCA8AECE1E35FAAF8CBC3498315D8384648E6E493 L_17 = alloca(SizeOf_ValueTuple_8_t916C6E0992C959E58535FB1ADB8161C9041E36A8);
	const ValueTuple_8_tCA8AECE1E35FAAF8CBC3498315D8384648E6E493 L_20 = alloca(SizeOf_ValueTuple_8_t916C6E0992C959E58535FB1ADB8161C9041E36A8);
	UniTask_1_tC64872BEABE327546ED6873C1EA16E1C9DBAF71F V_0 = alloca(SizeOf_UniTask_1_tAEB4CD6A180EAD1173D220F18B0AB0DB95325B07);
	memset(V_0, 0, SizeOf_UniTask_1_tAEB4CD6A180EAD1173D220F18B0AB0DB95325B07);
	{
		// return UniTask.WhenAll(tasks.Item1, tasks.Item2, tasks.Item3, tasks.Item4, tasks.Item5, tasks.Item6, tasks.Item7, tasks.Item8, tasks.Item9, tasks.Item10).GetAwaiter();
		il2cpp_codegen_memcpy(L_0, ___0_tasks, SizeOf_ValueTuple_8_t916C6E0992C959E58535FB1ADB8161C9041E36A8);
		il2cpp_codegen_memcpy(L_1, il2cpp_codegen_get_instance_field_data_pointer(L_0, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),0)), SizeOf_UniTask_1_t036CDE5FC5B8C23AE40FF6F0046DE96E38A17DBB);
		il2cpp_codegen_memcpy(L_2, ___0_tasks, SizeOf_ValueTuple_8_t916C6E0992C959E58535FB1ADB8161C9041E36A8);
		il2cpp_codegen_memcpy(L_3, il2cpp_codegen_get_instance_field_data_pointer(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),1)), SizeOf_UniTask_1_t01042105264015F12A94AE7B4FAA702A3E354EAB);
		il2cpp_codegen_memcpy(L_4, ___0_tasks, SizeOf_ValueTuple_8_t916C6E0992C959E58535FB1ADB8161C9041E36A8);
		il2cpp_codegen_memcpy(L_5, il2cpp_codegen_get_instance_field_data_pointer(L_4, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),2)), SizeOf_UniTask_1_tA646F693E84E269C82B60B1DBCCDF8A0C460688D);
		il2cpp_codegen_memcpy(L_6, ___0_tasks, SizeOf_ValueTuple_8_t916C6E0992C959E58535FB1ADB8161C9041E36A8);
		il2cpp_codegen_memcpy(L_7, il2cpp_codegen_get_instance_field_data_pointer(L_6, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),3)), SizeOf_UniTask_1_t4EBADFDF50EF16945D78432BC46C292D38A333C7);
		il2cpp_codegen_memcpy(L_8, ___0_tasks, SizeOf_ValueTuple_8_t916C6E0992C959E58535FB1ADB8161C9041E36A8);
		il2cpp_codegen_memcpy(L_9, il2cpp_codegen_get_instance_field_data_pointer(L_8, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),4)), SizeOf_UniTask_1_t47AF5E031DC5ED0D714368E43EA3D8BAF24D4D5D);
		il2cpp_codegen_memcpy(L_10, ___0_tasks, SizeOf_ValueTuple_8_t916C6E0992C959E58535FB1ADB8161C9041E36A8);
		il2cpp_codegen_memcpy(L_11, il2cpp_codegen_get_instance_field_data_pointer(L_10, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),5)), SizeOf_UniTask_1_t7D9748BE8CF91E8C72826C0BBF10C54D0A491E54);
		il2cpp_codegen_memcpy(L_12, ___0_tasks, SizeOf_ValueTuple_8_t916C6E0992C959E58535FB1ADB8161C9041E36A8);
		il2cpp_codegen_memcpy(L_13, il2cpp_codegen_get_instance_field_data_pointer(L_12, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),6)), SizeOf_UniTask_1_tA38AD03E7AFEEA5422C3D309B316555845EF618F);
		il2cpp_codegen_memcpy(L_14, ___0_tasks, SizeOf_ValueTuple_8_t916C6E0992C959E58535FB1ADB8161C9041E36A8);
		il2cpp_codegen_memcpy(L_15, il2cpp_codegen_get_instance_field_data_pointer(L_14, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),7)), SizeOf_ValueTuple_3_t943B8D3DAACA3D98A56B2BD295A7A703738C1789);
		il2cpp_codegen_memcpy(L_16, il2cpp_codegen_get_instance_field_data_pointer(L_15, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 8),0)), SizeOf_UniTask_1_tDFD42C22B271716FCFA37F9F3B02264F92CB2A14);
		il2cpp_codegen_memcpy(L_17, ___0_tasks, SizeOf_ValueTuple_8_t916C6E0992C959E58535FB1ADB8161C9041E36A8);
		il2cpp_codegen_memcpy(L_18, il2cpp_codegen_get_instance_field_data_pointer(L_17, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),7)), SizeOf_ValueTuple_3_t943B8D3DAACA3D98A56B2BD295A7A703738C1789);
		il2cpp_codegen_memcpy(L_19, il2cpp_codegen_get_instance_field_data_pointer(L_18, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 8),1)), SizeOf_UniTask_1_t025A2BFBA8ACDC20743D6419103469B8C4801932);
		il2cpp_codegen_memcpy(L_20, ___0_tasks, SizeOf_ValueTuple_8_t916C6E0992C959E58535FB1ADB8161C9041E36A8);
		il2cpp_codegen_memcpy(L_21, il2cpp_codegen_get_instance_field_data_pointer(L_20, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),7)), SizeOf_ValueTuple_3_t943B8D3DAACA3D98A56B2BD295A7A703738C1789);
		il2cpp_codegen_memcpy(L_22, il2cpp_codegen_get_instance_field_data_pointer(L_21, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 8),2)), SizeOf_UniTask_1_t3CF1A774A4E82466549482BEE698BECBCBC94490);
		il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		InvokerActionInvoker11< UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483, UniTask_1_tC64872BEABE327546ED6873C1EA16E1C9DBAF71F* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 12)), il2cpp_rgctx_method(method->rgctx_data, 12), NULL, L_1, L_3, L_5, L_7, L_9, L_11, L_13, L_16, L_19, L_22, (UniTask_1_tC64872BEABE327546ED6873C1EA16E1C9DBAF71F*)L_23);
		il2cpp_codegen_memcpy(V_0, L_23, SizeOf_UniTask_1_tAEB4CD6A180EAD1173D220F18B0AB0DB95325B07);
		InvokerActionInvoker1< Awaiter_tD829185EC066429D9D042DD76BA7135C550B22E0* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 14)), il2cpp_rgctx_method(method->rgctx_data, 14), (UniTask_1_tC64872BEABE327546ED6873C1EA16E1C9DBAF71F*)V_0, (Awaiter_tD829185EC066429D9D042DD76BA7135C550B22E0*)L_24);
		il2cpp_codegen_memcpy(il2cppRetVal, L_24, SizeOf_Awaiter_tD721ACCF5BC1A4324AA8232E79AA780A47323861);
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.ValueTuple`8<T1,T2,T3,T4,T5,T6,T7,System.ValueTuple`4<T8,T9,T10,T11>>> Cysharp.Threading.Tasks.UniTaskExtensions::GetAwaiter<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.ValueTuple`8<Cysharp.Threading.Tasks.UniTask`1<T1>,Cysharp.Threading.Tasks.UniTask`1<T2>,Cysharp.Threading.Tasks.UniTask`1<T3>,Cysharp.Threading.Tasks.UniTask`1<T4>,Cysharp.Threading.Tasks.UniTask`1<T5>,Cysharp.Threading.Tasks.UniTask`1<T6>,Cysharp.Threading.Tasks.UniTask`1<T7>,System.ValueTuple`4<Cysharp.Threading.Tasks.UniTask`1<T8>,Cysharp.Threading.Tasks.UniTask`1<T9>,Cysharp.Threading.Tasks.UniTask`1<T10>,Cysharp.Threading.Tasks.UniTask`1<T11>>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniTaskExtensions_GetAwaiter_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m9DF901E0F2EE71011FFD963806A74060D303EDFC_gshared (/*System.ValueTuple`8<Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,System.ValueTuple`4<Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>>*/ValueTuple_8_t1E57DC9647FC0DD8C807F78A515073C909DE6700 ___0_tasks, Awaiter_t88DB7B12537D031A96B794F71CBBD1181A8D5DC8* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<System.ValueTuple`8<T1,T2,T3,T4,T5,T6,T7,System.ValueTuple`4<T8,T9,T10,T11>>>)
	const uint32_t SizeOf_UniTask_1_tC24D13D8F74422F5954E2408FE763B9ECAC5356D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 14));
	// sizeof(System.ValueTuple`8<Cysharp.Threading.Tasks.UniTask`1<T1>,Cysharp.Threading.Tasks.UniTask`1<T2>,Cysharp.Threading.Tasks.UniTask`1<T3>,Cysharp.Threading.Tasks.UniTask`1<T4>,Cysharp.Threading.Tasks.UniTask`1<T5>,Cysharp.Threading.Tasks.UniTask`1<T6>,Cysharp.Threading.Tasks.UniTask`1<T7>,System.ValueTuple`4<Cysharp.Threading.Tasks.UniTask`1<T8>,Cysharp.Threading.Tasks.UniTask`1<T9>,Cysharp.Threading.Tasks.UniTask`1<T10>,Cysharp.Threading.Tasks.UniTask`1<T11>>>)
	const uint32_t SizeOf_ValueTuple_8_t1CBA53CB40AC4512027A0C698ABE077C98A4F8D8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T1>)
	const uint32_t SizeOf_UniTask_1_t4E8C265C3E7D6ED7D00B648F8B2AD51234A54426 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T2>)
	const uint32_t SizeOf_UniTask_1_t209BDF498C0EBA9FF48F35AF81930BC98C3A4329 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T3>)
	const uint32_t SizeOf_UniTask_1_tDE484799C84429127E4FE7E63712FEE9CB27945F = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T4>)
	const uint32_t SizeOf_UniTask_1_t186E3099BF21149538C56FF14B1DD63B78774559 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 4));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T5>)
	const uint32_t SizeOf_UniTask_1_t2A7CE206DBB9A0176CA655D8E13D1F8CD865E69E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 5));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T6>)
	const uint32_t SizeOf_UniTask_1_tC016D00809F12996C9E18528729EDF2797AA252F = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 6));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T7>)
	const uint32_t SizeOf_UniTask_1_t2B198E461A0107F6758B660585876AA69B919219 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 7));
	// sizeof(System.ValueTuple`4<Cysharp.Threading.Tasks.UniTask`1<T8>,Cysharp.Threading.Tasks.UniTask`1<T9>,Cysharp.Threading.Tasks.UniTask`1<T10>,Cysharp.Threading.Tasks.UniTask`1<T11>>)
	const uint32_t SizeOf_ValueTuple_4_tE9BB91487D637D48602D730FE4D0AB78AF6C0639 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 8));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T8>)
	const uint32_t SizeOf_UniTask_1_t04DE0391EF79D699225FEF5E60748E5129F3FC33 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 9));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T9>)
	const uint32_t SizeOf_UniTask_1_t30EC2EF8323B233553FB6224D57C8A2885141069 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 10));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T10>)
	const uint32_t SizeOf_UniTask_1_t3F010EA446D59D873F1655953AC7EF87F35C28B1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 11));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T11>)
	const uint32_t SizeOf_UniTask_1_t2610FBA7828BEC9188CC1019F88E3A921FA231A7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 12));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.ValueTuple`8<T1,T2,T3,T4,T5,T6,T7,System.ValueTuple`4<T8,T9,T10,T11>>>)
	const uint32_t SizeOf_Awaiter_tB97085C30AC1845A5FA49AB7AD2D0F6EEB5FB7B5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 16));
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.ValueTuple`8<T1,T2,T3,T4,T5,T6,T7,System.ValueTuple`4<T8,T9,T10,T11>>>
	const Awaiter_t88DB7B12537D031A96B794F71CBBD1181A8D5DC8 L_27 = alloca(SizeOf_Awaiter_tB97085C30AC1845A5FA49AB7AD2D0F6EEB5FB7B5);
	// Cysharp.Threading.Tasks.UniTask`1<T1>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_1 = alloca(SizeOf_UniTask_1_t4E8C265C3E7D6ED7D00B648F8B2AD51234A54426);
	// Cysharp.Threading.Tasks.UniTask`1<T2>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_3 = alloca(SizeOf_UniTask_1_t209BDF498C0EBA9FF48F35AF81930BC98C3A4329);
	// Cysharp.Threading.Tasks.UniTask`1<T3>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_5 = alloca(SizeOf_UniTask_1_tDE484799C84429127E4FE7E63712FEE9CB27945F);
	// Cysharp.Threading.Tasks.UniTask`1<T4>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_7 = alloca(SizeOf_UniTask_1_t186E3099BF21149538C56FF14B1DD63B78774559);
	// Cysharp.Threading.Tasks.UniTask`1<T5>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_9 = alloca(SizeOf_UniTask_1_t2A7CE206DBB9A0176CA655D8E13D1F8CD865E69E);
	// Cysharp.Threading.Tasks.UniTask`1<T6>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_11 = alloca(SizeOf_UniTask_1_tC016D00809F12996C9E18528729EDF2797AA252F);
	// Cysharp.Threading.Tasks.UniTask`1<T7>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_13 = alloca(SizeOf_UniTask_1_t2B198E461A0107F6758B660585876AA69B919219);
	// Cysharp.Threading.Tasks.UniTask`1<T8>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_16 = alloca(SizeOf_UniTask_1_t04DE0391EF79D699225FEF5E60748E5129F3FC33);
	// Cysharp.Threading.Tasks.UniTask`1<T9>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_19 = alloca(SizeOf_UniTask_1_t30EC2EF8323B233553FB6224D57C8A2885141069);
	// Cysharp.Threading.Tasks.UniTask`1<T10>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_22 = alloca(SizeOf_UniTask_1_t3F010EA446D59D873F1655953AC7EF87F35C28B1);
	// Cysharp.Threading.Tasks.UniTask`1<T11>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_25 = alloca(SizeOf_UniTask_1_t2610FBA7828BEC9188CC1019F88E3A921FA231A7);
	// Cysharp.Threading.Tasks.UniTask`1<System.ValueTuple`8<T1,T2,T3,T4,T5,T6,T7,System.ValueTuple`4<T8,T9,T10,T11>>>
	const UniTask_1_t3BBA0FE5C1BF6218226C88DB4783C3D9BC3BD026 L_26 = alloca(SizeOf_UniTask_1_tC24D13D8F74422F5954E2408FE763B9ECAC5356D);
	// System.ValueTuple`4<Cysharp.Threading.Tasks.UniTask`1<T8>,Cysharp.Threading.Tasks.UniTask`1<T9>,Cysharp.Threading.Tasks.UniTask`1<T10>,Cysharp.Threading.Tasks.UniTask`1<T11>>
	const ValueTuple_4_t56E38C9B2AF3E090B71CF38F0E02E02C1F471046 L_15 = alloca(SizeOf_ValueTuple_4_tE9BB91487D637D48602D730FE4D0AB78AF6C0639);
	const ValueTuple_4_t56E38C9B2AF3E090B71CF38F0E02E02C1F471046 L_18 = alloca(SizeOf_ValueTuple_4_tE9BB91487D637D48602D730FE4D0AB78AF6C0639);
	const ValueTuple_4_t56E38C9B2AF3E090B71CF38F0E02E02C1F471046 L_21 = alloca(SizeOf_ValueTuple_4_tE9BB91487D637D48602D730FE4D0AB78AF6C0639);
	const ValueTuple_4_t56E38C9B2AF3E090B71CF38F0E02E02C1F471046 L_24 = alloca(SizeOf_ValueTuple_4_tE9BB91487D637D48602D730FE4D0AB78AF6C0639);
	// System.ValueTuple`8<Cysharp.Threading.Tasks.UniTask`1<T1>,Cysharp.Threading.Tasks.UniTask`1<T2>,Cysharp.Threading.Tasks.UniTask`1<T3>,Cysharp.Threading.Tasks.UniTask`1<T4>,Cysharp.Threading.Tasks.UniTask`1<T5>,Cysharp.Threading.Tasks.UniTask`1<T6>,Cysharp.Threading.Tasks.UniTask`1<T7>,System.ValueTuple`4<Cysharp.Threading.Tasks.UniTask`1<T8>,Cysharp.Threading.Tasks.UniTask`1<T9>,Cysharp.Threading.Tasks.UniTask`1<T10>,Cysharp.Threading.Tasks.UniTask`1<T11>>>
	const ValueTuple_8_t1E57DC9647FC0DD8C807F78A515073C909DE6700 L_0 = alloca(SizeOf_ValueTuple_8_t1CBA53CB40AC4512027A0C698ABE077C98A4F8D8);
	const ValueTuple_8_t1E57DC9647FC0DD8C807F78A515073C909DE6700 L_2 = alloca(SizeOf_ValueTuple_8_t1CBA53CB40AC4512027A0C698ABE077C98A4F8D8);
	const ValueTuple_8_t1E57DC9647FC0DD8C807F78A515073C909DE6700 L_4 = alloca(SizeOf_ValueTuple_8_t1CBA53CB40AC4512027A0C698ABE077C98A4F8D8);
	const ValueTuple_8_t1E57DC9647FC0DD8C807F78A515073C909DE6700 L_6 = alloca(SizeOf_ValueTuple_8_t1CBA53CB40AC4512027A0C698ABE077C98A4F8D8);
	const ValueTuple_8_t1E57DC9647FC0DD8C807F78A515073C909DE6700 L_8 = alloca(SizeOf_ValueTuple_8_t1CBA53CB40AC4512027A0C698ABE077C98A4F8D8);
	const ValueTuple_8_t1E57DC9647FC0DD8C807F78A515073C909DE6700 L_10 = alloca(SizeOf_ValueTuple_8_t1CBA53CB40AC4512027A0C698ABE077C98A4F8D8);
	const ValueTuple_8_t1E57DC9647FC0DD8C807F78A515073C909DE6700 L_12 = alloca(SizeOf_ValueTuple_8_t1CBA53CB40AC4512027A0C698ABE077C98A4F8D8);
	const ValueTuple_8_t1E57DC9647FC0DD8C807F78A515073C909DE6700 L_14 = alloca(SizeOf_ValueTuple_8_t1CBA53CB40AC4512027A0C698ABE077C98A4F8D8);
	const ValueTuple_8_t1E57DC9647FC0DD8C807F78A515073C909DE6700 L_17 = alloca(SizeOf_ValueTuple_8_t1CBA53CB40AC4512027A0C698ABE077C98A4F8D8);
	const ValueTuple_8_t1E57DC9647FC0DD8C807F78A515073C909DE6700 L_20 = alloca(SizeOf_ValueTuple_8_t1CBA53CB40AC4512027A0C698ABE077C98A4F8D8);
	const ValueTuple_8_t1E57DC9647FC0DD8C807F78A515073C909DE6700 L_23 = alloca(SizeOf_ValueTuple_8_t1CBA53CB40AC4512027A0C698ABE077C98A4F8D8);
	UniTask_1_t3BBA0FE5C1BF6218226C88DB4783C3D9BC3BD026 V_0 = alloca(SizeOf_UniTask_1_tC24D13D8F74422F5954E2408FE763B9ECAC5356D);
	memset(V_0, 0, SizeOf_UniTask_1_tC24D13D8F74422F5954E2408FE763B9ECAC5356D);
	{
		// return UniTask.WhenAll(tasks.Item1, tasks.Item2, tasks.Item3, tasks.Item4, tasks.Item5, tasks.Item6, tasks.Item7, tasks.Item8, tasks.Item9, tasks.Item10, tasks.Item11).GetAwaiter();
		il2cpp_codegen_memcpy(L_0, ___0_tasks, SizeOf_ValueTuple_8_t1CBA53CB40AC4512027A0C698ABE077C98A4F8D8);
		il2cpp_codegen_memcpy(L_1, il2cpp_codegen_get_instance_field_data_pointer(L_0, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),0)), SizeOf_UniTask_1_t4E8C265C3E7D6ED7D00B648F8B2AD51234A54426);
		il2cpp_codegen_memcpy(L_2, ___0_tasks, SizeOf_ValueTuple_8_t1CBA53CB40AC4512027A0C698ABE077C98A4F8D8);
		il2cpp_codegen_memcpy(L_3, il2cpp_codegen_get_instance_field_data_pointer(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),1)), SizeOf_UniTask_1_t209BDF498C0EBA9FF48F35AF81930BC98C3A4329);
		il2cpp_codegen_memcpy(L_4, ___0_tasks, SizeOf_ValueTuple_8_t1CBA53CB40AC4512027A0C698ABE077C98A4F8D8);
		il2cpp_codegen_memcpy(L_5, il2cpp_codegen_get_instance_field_data_pointer(L_4, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),2)), SizeOf_UniTask_1_tDE484799C84429127E4FE7E63712FEE9CB27945F);
		il2cpp_codegen_memcpy(L_6, ___0_tasks, SizeOf_ValueTuple_8_t1CBA53CB40AC4512027A0C698ABE077C98A4F8D8);
		il2cpp_codegen_memcpy(L_7, il2cpp_codegen_get_instance_field_data_pointer(L_6, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),3)), SizeOf_UniTask_1_t186E3099BF21149538C56FF14B1DD63B78774559);
		il2cpp_codegen_memcpy(L_8, ___0_tasks, SizeOf_ValueTuple_8_t1CBA53CB40AC4512027A0C698ABE077C98A4F8D8);
		il2cpp_codegen_memcpy(L_9, il2cpp_codegen_get_instance_field_data_pointer(L_8, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),4)), SizeOf_UniTask_1_t2A7CE206DBB9A0176CA655D8E13D1F8CD865E69E);
		il2cpp_codegen_memcpy(L_10, ___0_tasks, SizeOf_ValueTuple_8_t1CBA53CB40AC4512027A0C698ABE077C98A4F8D8);
		il2cpp_codegen_memcpy(L_11, il2cpp_codegen_get_instance_field_data_pointer(L_10, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),5)), SizeOf_UniTask_1_tC016D00809F12996C9E18528729EDF2797AA252F);
		il2cpp_codegen_memcpy(L_12, ___0_tasks, SizeOf_ValueTuple_8_t1CBA53CB40AC4512027A0C698ABE077C98A4F8D8);
		il2cpp_codegen_memcpy(L_13, il2cpp_codegen_get_instance_field_data_pointer(L_12, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),6)), SizeOf_UniTask_1_t2B198E461A0107F6758B660585876AA69B919219);
		il2cpp_codegen_memcpy(L_14, ___0_tasks, SizeOf_ValueTuple_8_t1CBA53CB40AC4512027A0C698ABE077C98A4F8D8);
		il2cpp_codegen_memcpy(L_15, il2cpp_codegen_get_instance_field_data_pointer(L_14, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),7)), SizeOf_ValueTuple_4_tE9BB91487D637D48602D730FE4D0AB78AF6C0639);
		il2cpp_codegen_memcpy(L_16, il2cpp_codegen_get_instance_field_data_pointer(L_15, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 8),0)), SizeOf_UniTask_1_t04DE0391EF79D699225FEF5E60748E5129F3FC33);
		il2cpp_codegen_memcpy(L_17, ___0_tasks, SizeOf_ValueTuple_8_t1CBA53CB40AC4512027A0C698ABE077C98A4F8D8);
		il2cpp_codegen_memcpy(L_18, il2cpp_codegen_get_instance_field_data_pointer(L_17, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),7)), SizeOf_ValueTuple_4_tE9BB91487D637D48602D730FE4D0AB78AF6C0639);
		il2cpp_codegen_memcpy(L_19, il2cpp_codegen_get_instance_field_data_pointer(L_18, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 8),1)), SizeOf_UniTask_1_t30EC2EF8323B233553FB6224D57C8A2885141069);
		il2cpp_codegen_memcpy(L_20, ___0_tasks, SizeOf_ValueTuple_8_t1CBA53CB40AC4512027A0C698ABE077C98A4F8D8);
		il2cpp_codegen_memcpy(L_21, il2cpp_codegen_get_instance_field_data_pointer(L_20, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),7)), SizeOf_ValueTuple_4_tE9BB91487D637D48602D730FE4D0AB78AF6C0639);
		il2cpp_codegen_memcpy(L_22, il2cpp_codegen_get_instance_field_data_pointer(L_21, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 8),2)), SizeOf_UniTask_1_t3F010EA446D59D873F1655953AC7EF87F35C28B1);
		il2cpp_codegen_memcpy(L_23, ___0_tasks, SizeOf_ValueTuple_8_t1CBA53CB40AC4512027A0C698ABE077C98A4F8D8);
		il2cpp_codegen_memcpy(L_24, il2cpp_codegen_get_instance_field_data_pointer(L_23, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),7)), SizeOf_ValueTuple_4_tE9BB91487D637D48602D730FE4D0AB78AF6C0639);
		il2cpp_codegen_memcpy(L_25, il2cpp_codegen_get_instance_field_data_pointer(L_24, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 8),3)), SizeOf_UniTask_1_t2610FBA7828BEC9188CC1019F88E3A921FA231A7);
		il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		InvokerActionInvoker12< UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483, UniTask_1_t3BBA0FE5C1BF6218226C88DB4783C3D9BC3BD026* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 13)), il2cpp_rgctx_method(method->rgctx_data, 13), NULL, L_1, L_3, L_5, L_7, L_9, L_11, L_13, L_16, L_19, L_22, L_25, (UniTask_1_t3BBA0FE5C1BF6218226C88DB4783C3D9BC3BD026*)L_26);
		il2cpp_codegen_memcpy(V_0, L_26, SizeOf_UniTask_1_tC24D13D8F74422F5954E2408FE763B9ECAC5356D);
		InvokerActionInvoker1< Awaiter_t88DB7B12537D031A96B794F71CBBD1181A8D5DC8* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 15)), il2cpp_rgctx_method(method->rgctx_data, 15), (UniTask_1_t3BBA0FE5C1BF6218226C88DB4783C3D9BC3BD026*)V_0, (Awaiter_t88DB7B12537D031A96B794F71CBBD1181A8D5DC8*)L_27);
		il2cpp_codegen_memcpy(il2cppRetVal, L_27, SizeOf_Awaiter_tB97085C30AC1845A5FA49AB7AD2D0F6EEB5FB7B5);
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.ValueTuple`8<T1,T2,T3,T4,T5,T6,T7,System.ValueTuple`5<T8,T9,T10,T11,T12>>> Cysharp.Threading.Tasks.UniTaskExtensions::GetAwaiter<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.ValueTuple`8<Cysharp.Threading.Tasks.UniTask`1<T1>,Cysharp.Threading.Tasks.UniTask`1<T2>,Cysharp.Threading.Tasks.UniTask`1<T3>,Cysharp.Threading.Tasks.UniTask`1<T4>,Cysharp.Threading.Tasks.UniTask`1<T5>,Cysharp.Threading.Tasks.UniTask`1<T6>,Cysharp.Threading.Tasks.UniTask`1<T7>,System.ValueTuple`5<Cysharp.Threading.Tasks.UniTask`1<T8>,Cysharp.Threading.Tasks.UniTask`1<T9>,Cysharp.Threading.Tasks.UniTask`1<T10>,Cysharp.Threading.Tasks.UniTask`1<T11>,Cysharp.Threading.Tasks.UniTask`1<T12>>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniTaskExtensions_GetAwaiter_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mEAD99BC9EAFC4714C1431743E510F39ECB733D21_gshared (/*System.ValueTuple`8<Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,System.ValueTuple`5<Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>>*/ValueTuple_8_tCEFA7D55B83A9DD58DC46E939576FDE17E5145E4 ___0_tasks, Awaiter_t6E15877815147641FD961D7BF7B70E70E97832F1* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<System.ValueTuple`8<T1,T2,T3,T4,T5,T6,T7,System.ValueTuple`5<T8,T9,T10,T11,T12>>>)
	const uint32_t SizeOf_UniTask_1_t638BEA8819067A3D7DDFCE700531636D761C5980 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 15));
	// sizeof(System.ValueTuple`8<Cysharp.Threading.Tasks.UniTask`1<T1>,Cysharp.Threading.Tasks.UniTask`1<T2>,Cysharp.Threading.Tasks.UniTask`1<T3>,Cysharp.Threading.Tasks.UniTask`1<T4>,Cysharp.Threading.Tasks.UniTask`1<T5>,Cysharp.Threading.Tasks.UniTask`1<T6>,Cysharp.Threading.Tasks.UniTask`1<T7>,System.ValueTuple`5<Cysharp.Threading.Tasks.UniTask`1<T8>,Cysharp.Threading.Tasks.UniTask`1<T9>,Cysharp.Threading.Tasks.UniTask`1<T10>,Cysharp.Threading.Tasks.UniTask`1<T11>,Cysharp.Threading.Tasks.UniTask`1<T12>>>)
	const uint32_t SizeOf_ValueTuple_8_t2FA9B6FDEC399FC8F4949A3A572B038042DBD2BD = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T1>)
	const uint32_t SizeOf_UniTask_1_tFEE16FCA4DC92F0F6372D3B34FBCF8D26091EA08 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T2>)
	const uint32_t SizeOf_UniTask_1_t3E91A2D08C41CE0BCC1FC353271ADA7BA73A3516 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T3>)
	const uint32_t SizeOf_UniTask_1_t4A28AE809D0B3FB0681371A9E81F22C2CB69BBE0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T4>)
	const uint32_t SizeOf_UniTask_1_t7E7A1B7B5EF71FC070DDE787E985B31D72528AAC = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 4));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T5>)
	const uint32_t SizeOf_UniTask_1_t438F53F2586BBFD904E91634117A99CF431D7807 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 5));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T6>)
	const uint32_t SizeOf_UniTask_1_t1C8AD18EC1CDBACA7A0C5D77EEFB1C173ED9D4CF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 6));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T7>)
	const uint32_t SizeOf_UniTask_1_t22DAF06F75B1B929B46B926A7927B810C412298B = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 7));
	// sizeof(System.ValueTuple`5<Cysharp.Threading.Tasks.UniTask`1<T8>,Cysharp.Threading.Tasks.UniTask`1<T9>,Cysharp.Threading.Tasks.UniTask`1<T10>,Cysharp.Threading.Tasks.UniTask`1<T11>,Cysharp.Threading.Tasks.UniTask`1<T12>>)
	const uint32_t SizeOf_ValueTuple_5_t4E0642014BAB95BA0FB532353AA0DABCD73B3098 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 8));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T8>)
	const uint32_t SizeOf_UniTask_1_t8E612218518605AAA08FA9F9D2217B783C5D9912 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 9));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T9>)
	const uint32_t SizeOf_UniTask_1_t7585AB186182EBE9BC912BAD7B85BDC2344922B5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 10));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T10>)
	const uint32_t SizeOf_UniTask_1_t410005951E30DBE54FF5C154E8F7D5E2FB4F4A8A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 11));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T11>)
	const uint32_t SizeOf_UniTask_1_tDB3A0FA2C0A24141A66D5B7AF913053D785F6AD1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 12));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T12>)
	const uint32_t SizeOf_UniTask_1_t9BC7C7586DDAD7898473A9CE53FEBBE961621C6D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 13));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.ValueTuple`8<T1,T2,T3,T4,T5,T6,T7,System.ValueTuple`5<T8,T9,T10,T11,T12>>>)
	const uint32_t SizeOf_Awaiter_t03057F3781116CFDAE2F6209FA3F5AC00283AD58 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 17));
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.ValueTuple`8<T1,T2,T3,T4,T5,T6,T7,System.ValueTuple`5<T8,T9,T10,T11,T12>>>
	const Awaiter_t6E15877815147641FD961D7BF7B70E70E97832F1 L_30 = alloca(SizeOf_Awaiter_t03057F3781116CFDAE2F6209FA3F5AC00283AD58);
	// Cysharp.Threading.Tasks.UniTask`1<T1>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_1 = alloca(SizeOf_UniTask_1_tFEE16FCA4DC92F0F6372D3B34FBCF8D26091EA08);
	// Cysharp.Threading.Tasks.UniTask`1<T2>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_3 = alloca(SizeOf_UniTask_1_t3E91A2D08C41CE0BCC1FC353271ADA7BA73A3516);
	// Cysharp.Threading.Tasks.UniTask`1<T3>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_5 = alloca(SizeOf_UniTask_1_t4A28AE809D0B3FB0681371A9E81F22C2CB69BBE0);
	// Cysharp.Threading.Tasks.UniTask`1<T4>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_7 = alloca(SizeOf_UniTask_1_t7E7A1B7B5EF71FC070DDE787E985B31D72528AAC);
	// Cysharp.Threading.Tasks.UniTask`1<T5>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_9 = alloca(SizeOf_UniTask_1_t438F53F2586BBFD904E91634117A99CF431D7807);
	// Cysharp.Threading.Tasks.UniTask`1<T6>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_11 = alloca(SizeOf_UniTask_1_t1C8AD18EC1CDBACA7A0C5D77EEFB1C173ED9D4CF);
	// Cysharp.Threading.Tasks.UniTask`1<T7>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_13 = alloca(SizeOf_UniTask_1_t22DAF06F75B1B929B46B926A7927B810C412298B);
	// Cysharp.Threading.Tasks.UniTask`1<T8>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_16 = alloca(SizeOf_UniTask_1_t8E612218518605AAA08FA9F9D2217B783C5D9912);
	// Cysharp.Threading.Tasks.UniTask`1<T9>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_19 = alloca(SizeOf_UniTask_1_t7585AB186182EBE9BC912BAD7B85BDC2344922B5);
	// Cysharp.Threading.Tasks.UniTask`1<T10>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_22 = alloca(SizeOf_UniTask_1_t410005951E30DBE54FF5C154E8F7D5E2FB4F4A8A);
	// Cysharp.Threading.Tasks.UniTask`1<T11>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_25 = alloca(SizeOf_UniTask_1_tDB3A0FA2C0A24141A66D5B7AF913053D785F6AD1);
	// Cysharp.Threading.Tasks.UniTask`1<T12>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_28 = alloca(SizeOf_UniTask_1_t9BC7C7586DDAD7898473A9CE53FEBBE961621C6D);
	// Cysharp.Threading.Tasks.UniTask`1<System.ValueTuple`8<T1,T2,T3,T4,T5,T6,T7,System.ValueTuple`5<T8,T9,T10,T11,T12>>>
	const UniTask_1_tE20BB9EABB2D20768EDBE4E632A4DCCA632393B7 L_29 = alloca(SizeOf_UniTask_1_t638BEA8819067A3D7DDFCE700531636D761C5980);
	// System.ValueTuple`5<Cysharp.Threading.Tasks.UniTask`1<T8>,Cysharp.Threading.Tasks.UniTask`1<T9>,Cysharp.Threading.Tasks.UniTask`1<T10>,Cysharp.Threading.Tasks.UniTask`1<T11>,Cysharp.Threading.Tasks.UniTask`1<T12>>
	const ValueTuple_5_t92E1998E92F6F3DBC8F6F3D14D06839B838A8917 L_15 = alloca(SizeOf_ValueTuple_5_t4E0642014BAB95BA0FB532353AA0DABCD73B3098);
	const ValueTuple_5_t92E1998E92F6F3DBC8F6F3D14D06839B838A8917 L_18 = alloca(SizeOf_ValueTuple_5_t4E0642014BAB95BA0FB532353AA0DABCD73B3098);
	const ValueTuple_5_t92E1998E92F6F3DBC8F6F3D14D06839B838A8917 L_21 = alloca(SizeOf_ValueTuple_5_t4E0642014BAB95BA0FB532353AA0DABCD73B3098);
	const ValueTuple_5_t92E1998E92F6F3DBC8F6F3D14D06839B838A8917 L_24 = alloca(SizeOf_ValueTuple_5_t4E0642014BAB95BA0FB532353AA0DABCD73B3098);
	const ValueTuple_5_t92E1998E92F6F3DBC8F6F3D14D06839B838A8917 L_27 = alloca(SizeOf_ValueTuple_5_t4E0642014BAB95BA0FB532353AA0DABCD73B3098);
	// System.ValueTuple`8<Cysharp.Threading.Tasks.UniTask`1<T1>,Cysharp.Threading.Tasks.UniTask`1<T2>,Cysharp.Threading.Tasks.UniTask`1<T3>,Cysharp.Threading.Tasks.UniTask`1<T4>,Cysharp.Threading.Tasks.UniTask`1<T5>,Cysharp.Threading.Tasks.UniTask`1<T6>,Cysharp.Threading.Tasks.UniTask`1<T7>,System.ValueTuple`5<Cysharp.Threading.Tasks.UniTask`1<T8>,Cysharp.Threading.Tasks.UniTask`1<T9>,Cysharp.Threading.Tasks.UniTask`1<T10>,Cysharp.Threading.Tasks.UniTask`1<T11>,Cysharp.Threading.Tasks.UniTask`1<T12>>>
	const ValueTuple_8_tCEFA7D55B83A9DD58DC46E939576FDE17E5145E4 L_0 = alloca(SizeOf_ValueTuple_8_t2FA9B6FDEC399FC8F4949A3A572B038042DBD2BD);
	const ValueTuple_8_tCEFA7D55B83A9DD58DC46E939576FDE17E5145E4 L_2 = alloca(SizeOf_ValueTuple_8_t2FA9B6FDEC399FC8F4949A3A572B038042DBD2BD);
	const ValueTuple_8_tCEFA7D55B83A9DD58DC46E939576FDE17E5145E4 L_4 = alloca(SizeOf_ValueTuple_8_t2FA9B6FDEC399FC8F4949A3A572B038042DBD2BD);
	const ValueTuple_8_tCEFA7D55B83A9DD58DC46E939576FDE17E5145E4 L_6 = alloca(SizeOf_ValueTuple_8_t2FA9B6FDEC399FC8F4949A3A572B038042DBD2BD);
	const ValueTuple_8_tCEFA7D55B83A9DD58DC46E939576FDE17E5145E4 L_8 = alloca(SizeOf_ValueTuple_8_t2FA9B6FDEC399FC8F4949A3A572B038042DBD2BD);
	const ValueTuple_8_tCEFA7D55B83A9DD58DC46E939576FDE17E5145E4 L_10 = alloca(SizeOf_ValueTuple_8_t2FA9B6FDEC399FC8F4949A3A572B038042DBD2BD);
	const ValueTuple_8_tCEFA7D55B83A9DD58DC46E939576FDE17E5145E4 L_12 = alloca(SizeOf_ValueTuple_8_t2FA9B6FDEC399FC8F4949A3A572B038042DBD2BD);
	const ValueTuple_8_tCEFA7D55B83A9DD58DC46E939576FDE17E5145E4 L_14 = alloca(SizeOf_ValueTuple_8_t2FA9B6FDEC399FC8F4949A3A572B038042DBD2BD);
	const ValueTuple_8_tCEFA7D55B83A9DD58DC46E939576FDE17E5145E4 L_17 = alloca(SizeOf_ValueTuple_8_t2FA9B6FDEC399FC8F4949A3A572B038042DBD2BD);
	const ValueTuple_8_tCEFA7D55B83A9DD58DC46E939576FDE17E5145E4 L_20 = alloca(SizeOf_ValueTuple_8_t2FA9B6FDEC399FC8F4949A3A572B038042DBD2BD);
	const ValueTuple_8_tCEFA7D55B83A9DD58DC46E939576FDE17E5145E4 L_23 = alloca(SizeOf_ValueTuple_8_t2FA9B6FDEC399FC8F4949A3A572B038042DBD2BD);
	const ValueTuple_8_tCEFA7D55B83A9DD58DC46E939576FDE17E5145E4 L_26 = alloca(SizeOf_ValueTuple_8_t2FA9B6FDEC399FC8F4949A3A572B038042DBD2BD);
	UniTask_1_tE20BB9EABB2D20768EDBE4E632A4DCCA632393B7 V_0 = alloca(SizeOf_UniTask_1_t638BEA8819067A3D7DDFCE700531636D761C5980);
	memset(V_0, 0, SizeOf_UniTask_1_t638BEA8819067A3D7DDFCE700531636D761C5980);
	{
		// return UniTask.WhenAll(tasks.Item1, tasks.Item2, tasks.Item3, tasks.Item4, tasks.Item5, tasks.Item6, tasks.Item7, tasks.Item8, tasks.Item9, tasks.Item10, tasks.Item11, tasks.Item12).GetAwaiter();
		il2cpp_codegen_memcpy(L_0, ___0_tasks, SizeOf_ValueTuple_8_t2FA9B6FDEC399FC8F4949A3A572B038042DBD2BD);
		il2cpp_codegen_memcpy(L_1, il2cpp_codegen_get_instance_field_data_pointer(L_0, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),0)), SizeOf_UniTask_1_tFEE16FCA4DC92F0F6372D3B34FBCF8D26091EA08);
		il2cpp_codegen_memcpy(L_2, ___0_tasks, SizeOf_ValueTuple_8_t2FA9B6FDEC399FC8F4949A3A572B038042DBD2BD);
		il2cpp_codegen_memcpy(L_3, il2cpp_codegen_get_instance_field_data_pointer(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),1)), SizeOf_UniTask_1_t3E91A2D08C41CE0BCC1FC353271ADA7BA73A3516);
		il2cpp_codegen_memcpy(L_4, ___0_tasks, SizeOf_ValueTuple_8_t2FA9B6FDEC399FC8F4949A3A572B038042DBD2BD);
		il2cpp_codegen_memcpy(L_5, il2cpp_codegen_get_instance_field_data_pointer(L_4, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),2)), SizeOf_UniTask_1_t4A28AE809D0B3FB0681371A9E81F22C2CB69BBE0);
		il2cpp_codegen_memcpy(L_6, ___0_tasks, SizeOf_ValueTuple_8_t2FA9B6FDEC399FC8F4949A3A572B038042DBD2BD);
		il2cpp_codegen_memcpy(L_7, il2cpp_codegen_get_instance_field_data_pointer(L_6, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),3)), SizeOf_UniTask_1_t7E7A1B7B5EF71FC070DDE787E985B31D72528AAC);
		il2cpp_codegen_memcpy(L_8, ___0_tasks, SizeOf_ValueTuple_8_t2FA9B6FDEC399FC8F4949A3A572B038042DBD2BD);
		il2cpp_codegen_memcpy(L_9, il2cpp_codegen_get_instance_field_data_pointer(L_8, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),4)), SizeOf_UniTask_1_t438F53F2586BBFD904E91634117A99CF431D7807);
		il2cpp_codegen_memcpy(L_10, ___0_tasks, SizeOf_ValueTuple_8_t2FA9B6FDEC399FC8F4949A3A572B038042DBD2BD);
		il2cpp_codegen_memcpy(L_11, il2cpp_codegen_get_instance_field_data_pointer(L_10, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),5)), SizeOf_UniTask_1_t1C8AD18EC1CDBACA7A0C5D77EEFB1C173ED9D4CF);
		il2cpp_codegen_memcpy(L_12, ___0_tasks, SizeOf_ValueTuple_8_t2FA9B6FDEC399FC8F4949A3A572B038042DBD2BD);
		il2cpp_codegen_memcpy(L_13, il2cpp_codegen_get_instance_field_data_pointer(L_12, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),6)), SizeOf_UniTask_1_t22DAF06F75B1B929B46B926A7927B810C412298B);
		il2cpp_codegen_memcpy(L_14, ___0_tasks, SizeOf_ValueTuple_8_t2FA9B6FDEC399FC8F4949A3A572B038042DBD2BD);
		il2cpp_codegen_memcpy(L_15, il2cpp_codegen_get_instance_field_data_pointer(L_14, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),7)), SizeOf_ValueTuple_5_t4E0642014BAB95BA0FB532353AA0DABCD73B3098);
		il2cpp_codegen_memcpy(L_16, il2cpp_codegen_get_instance_field_data_pointer(L_15, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 8),0)), SizeOf_UniTask_1_t8E612218518605AAA08FA9F9D2217B783C5D9912);
		il2cpp_codegen_memcpy(L_17, ___0_tasks, SizeOf_ValueTuple_8_t2FA9B6FDEC399FC8F4949A3A572B038042DBD2BD);
		il2cpp_codegen_memcpy(L_18, il2cpp_codegen_get_instance_field_data_pointer(L_17, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),7)), SizeOf_ValueTuple_5_t4E0642014BAB95BA0FB532353AA0DABCD73B3098);
		il2cpp_codegen_memcpy(L_19, il2cpp_codegen_get_instance_field_data_pointer(L_18, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 8),1)), SizeOf_UniTask_1_t7585AB186182EBE9BC912BAD7B85BDC2344922B5);
		il2cpp_codegen_memcpy(L_20, ___0_tasks, SizeOf_ValueTuple_8_t2FA9B6FDEC399FC8F4949A3A572B038042DBD2BD);
		il2cpp_codegen_memcpy(L_21, il2cpp_codegen_get_instance_field_data_pointer(L_20, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),7)), SizeOf_ValueTuple_5_t4E0642014BAB95BA0FB532353AA0DABCD73B3098);
		il2cpp_codegen_memcpy(L_22, il2cpp_codegen_get_instance_field_data_pointer(L_21, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 8),2)), SizeOf_UniTask_1_t410005951E30DBE54FF5C154E8F7D5E2FB4F4A8A);
		il2cpp_codegen_memcpy(L_23, ___0_tasks, SizeOf_ValueTuple_8_t2FA9B6FDEC399FC8F4949A3A572B038042DBD2BD);
		il2cpp_codegen_memcpy(L_24, il2cpp_codegen_get_instance_field_data_pointer(L_23, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),7)), SizeOf_ValueTuple_5_t4E0642014BAB95BA0FB532353AA0DABCD73B3098);
		il2cpp_codegen_memcpy(L_25, il2cpp_codegen_get_instance_field_data_pointer(L_24, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 8),3)), SizeOf_UniTask_1_tDB3A0FA2C0A24141A66D5B7AF913053D785F6AD1);
		il2cpp_codegen_memcpy(L_26, ___0_tasks, SizeOf_ValueTuple_8_t2FA9B6FDEC399FC8F4949A3A572B038042DBD2BD);
		il2cpp_codegen_memcpy(L_27, il2cpp_codegen_get_instance_field_data_pointer(L_26, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),7)), SizeOf_ValueTuple_5_t4E0642014BAB95BA0FB532353AA0DABCD73B3098);
		il2cpp_codegen_memcpy(L_28, il2cpp_codegen_get_instance_field_data_pointer(L_27, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 8),4)), SizeOf_UniTask_1_t9BC7C7586DDAD7898473A9CE53FEBBE961621C6D);
		il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		InvokerActionInvoker13< UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483, UniTask_1_tE20BB9EABB2D20768EDBE4E632A4DCCA632393B7* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 14)), il2cpp_rgctx_method(method->rgctx_data, 14), NULL, L_1, L_3, L_5, L_7, L_9, L_11, L_13, L_16, L_19, L_22, L_25, L_28, (UniTask_1_tE20BB9EABB2D20768EDBE4E632A4DCCA632393B7*)L_29);
		il2cpp_codegen_memcpy(V_0, L_29, SizeOf_UniTask_1_t638BEA8819067A3D7DDFCE700531636D761C5980);
		InvokerActionInvoker1< Awaiter_t6E15877815147641FD961D7BF7B70E70E97832F1* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 16)), il2cpp_rgctx_method(method->rgctx_data, 16), (UniTask_1_tE20BB9EABB2D20768EDBE4E632A4DCCA632393B7*)V_0, (Awaiter_t6E15877815147641FD961D7BF7B70E70E97832F1*)L_30);
		il2cpp_codegen_memcpy(il2cppRetVal, L_30, SizeOf_Awaiter_t03057F3781116CFDAE2F6209FA3F5AC00283AD58);
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.ValueTuple`8<T1,T2,T3,T4,T5,T6,T7,System.ValueTuple`6<T8,T9,T10,T11,T12,T13>>> Cysharp.Threading.Tasks.UniTaskExtensions::GetAwaiter<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.ValueTuple`8<Cysharp.Threading.Tasks.UniTask`1<T1>,Cysharp.Threading.Tasks.UniTask`1<T2>,Cysharp.Threading.Tasks.UniTask`1<T3>,Cysharp.Threading.Tasks.UniTask`1<T4>,Cysharp.Threading.Tasks.UniTask`1<T5>,Cysharp.Threading.Tasks.UniTask`1<T6>,Cysharp.Threading.Tasks.UniTask`1<T7>,System.ValueTuple`6<Cysharp.Threading.Tasks.UniTask`1<T8>,Cysharp.Threading.Tasks.UniTask`1<T9>,Cysharp.Threading.Tasks.UniTask`1<T10>,Cysharp.Threading.Tasks.UniTask`1<T11>,Cysharp.Threading.Tasks.UniTask`1<T12>,Cysharp.Threading.Tasks.UniTask`1<T13>>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniTaskExtensions_GetAwaiter_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m29842D2F6B1474AD7DE23FD3140860575210DE51_gshared (/*System.ValueTuple`8<Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,System.ValueTuple`6<Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>>*/ValueTuple_8_t641630DEE5E39F5442AA6EFDFAF0ADE7D7196803 ___0_tasks, Awaiter_t7147BE2B817DFC22CC398A00330C686C37D97D41* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<System.ValueTuple`8<T1,T2,T3,T4,T5,T6,T7,System.ValueTuple`6<T8,T9,T10,T11,T12,T13>>>)
	const uint32_t SizeOf_UniTask_1_tB132572B46AEB0D941F36622AD0AACB222D41741 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 16));
	// sizeof(System.ValueTuple`8<Cysharp.Threading.Tasks.UniTask`1<T1>,Cysharp.Threading.Tasks.UniTask`1<T2>,Cysharp.Threading.Tasks.UniTask`1<T3>,Cysharp.Threading.Tasks.UniTask`1<T4>,Cysharp.Threading.Tasks.UniTask`1<T5>,Cysharp.Threading.Tasks.UniTask`1<T6>,Cysharp.Threading.Tasks.UniTask`1<T7>,System.ValueTuple`6<Cysharp.Threading.Tasks.UniTask`1<T8>,Cysharp.Threading.Tasks.UniTask`1<T9>,Cysharp.Threading.Tasks.UniTask`1<T10>,Cysharp.Threading.Tasks.UniTask`1<T11>,Cysharp.Threading.Tasks.UniTask`1<T12>,Cysharp.Threading.Tasks.UniTask`1<T13>>>)
	const uint32_t SizeOf_ValueTuple_8_tAB4E83C87170B7AA2038DB520637989337701CB6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T1>)
	const uint32_t SizeOf_UniTask_1_tA7A59EE5DB2A7C178D824D10F163E1972F89E077 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T2>)
	const uint32_t SizeOf_UniTask_1_t84F7067310ECC92BF341F116100D578B259EC666 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T3>)
	const uint32_t SizeOf_UniTask_1_t6986E9A2065A91AEED9E128FE4EAA6DDD9643442 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T4>)
	const uint32_t SizeOf_UniTask_1_t32D447FB8B1DB8E41F0FF390F35B6E90A0618BD0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 4));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T5>)
	const uint32_t SizeOf_UniTask_1_tFFCD5A13CD3DBBBD9DC52B9B73EF6B982BD875CD = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 5));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T6>)
	const uint32_t SizeOf_UniTask_1_tF18CFEB49E1D5F0F86201520A6AE13E47C227F0C = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 6));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T7>)
	const uint32_t SizeOf_UniTask_1_t0E23EA6E8DE5FC939F565692622C0583A368FEAF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 7));
	// sizeof(System.ValueTuple`6<Cysharp.Threading.Tasks.UniTask`1<T8>,Cysharp.Threading.Tasks.UniTask`1<T9>,Cysharp.Threading.Tasks.UniTask`1<T10>,Cysharp.Threading.Tasks.UniTask`1<T11>,Cysharp.Threading.Tasks.UniTask`1<T12>,Cysharp.Threading.Tasks.UniTask`1<T13>>)
	const uint32_t SizeOf_ValueTuple_6_tBBDF5068AFB96FDD77261AF6813E4B292D2D1787 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 8));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T8>)
	const uint32_t SizeOf_UniTask_1_tBC2567BB433182B09486F2ACFA4FCDB47D5A3D81 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 9));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T9>)
	const uint32_t SizeOf_UniTask_1_t91BC7293CB9106867367C8498F9AEAA3A1B9E1DB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 10));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T10>)
	const uint32_t SizeOf_UniTask_1_tF2A2E4330DC1BC3A8EADA4D77738924F22D243D1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 11));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T11>)
	const uint32_t SizeOf_UniTask_1_tECD83D3482308244FBEF63E97DD6EB908618A1DF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 12));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T12>)
	const uint32_t SizeOf_UniTask_1_t09D946C7ED37F8125FCAEB2EC2265E596B1D433C = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 13));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T13>)
	const uint32_t SizeOf_UniTask_1_tAE7311DE3709D98EFAC0C5491EEF603C5B07FF0E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 14));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.ValueTuple`8<T1,T2,T3,T4,T5,T6,T7,System.ValueTuple`6<T8,T9,T10,T11,T12,T13>>>)
	const uint32_t SizeOf_Awaiter_tF6B97998B237612308775BA705B025B72D380760 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 18));
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.ValueTuple`8<T1,T2,T3,T4,T5,T6,T7,System.ValueTuple`6<T8,T9,T10,T11,T12,T13>>>
	const Awaiter_t7147BE2B817DFC22CC398A00330C686C37D97D41 L_33 = alloca(SizeOf_Awaiter_tF6B97998B237612308775BA705B025B72D380760);
	// Cysharp.Threading.Tasks.UniTask`1<T1>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_1 = alloca(SizeOf_UniTask_1_tA7A59EE5DB2A7C178D824D10F163E1972F89E077);
	// Cysharp.Threading.Tasks.UniTask`1<T2>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_3 = alloca(SizeOf_UniTask_1_t84F7067310ECC92BF341F116100D578B259EC666);
	// Cysharp.Threading.Tasks.UniTask`1<T3>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_5 = alloca(SizeOf_UniTask_1_t6986E9A2065A91AEED9E128FE4EAA6DDD9643442);
	// Cysharp.Threading.Tasks.UniTask`1<T4>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_7 = alloca(SizeOf_UniTask_1_t32D447FB8B1DB8E41F0FF390F35B6E90A0618BD0);
	// Cysharp.Threading.Tasks.UniTask`1<T5>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_9 = alloca(SizeOf_UniTask_1_tFFCD5A13CD3DBBBD9DC52B9B73EF6B982BD875CD);
	// Cysharp.Threading.Tasks.UniTask`1<T6>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_11 = alloca(SizeOf_UniTask_1_tF18CFEB49E1D5F0F86201520A6AE13E47C227F0C);
	// Cysharp.Threading.Tasks.UniTask`1<T7>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_13 = alloca(SizeOf_UniTask_1_t0E23EA6E8DE5FC939F565692622C0583A368FEAF);
	// Cysharp.Threading.Tasks.UniTask`1<T8>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_16 = alloca(SizeOf_UniTask_1_tBC2567BB433182B09486F2ACFA4FCDB47D5A3D81);
	// Cysharp.Threading.Tasks.UniTask`1<T9>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_19 = alloca(SizeOf_UniTask_1_t91BC7293CB9106867367C8498F9AEAA3A1B9E1DB);
	// Cysharp.Threading.Tasks.UniTask`1<T10>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_22 = alloca(SizeOf_UniTask_1_tF2A2E4330DC1BC3A8EADA4D77738924F22D243D1);
	// Cysharp.Threading.Tasks.UniTask`1<T11>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_25 = alloca(SizeOf_UniTask_1_tECD83D3482308244FBEF63E97DD6EB908618A1DF);
	// Cysharp.Threading.Tasks.UniTask`1<T12>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_28 = alloca(SizeOf_UniTask_1_t09D946C7ED37F8125FCAEB2EC2265E596B1D433C);
	// Cysharp.Threading.Tasks.UniTask`1<T13>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_31 = alloca(SizeOf_UniTask_1_tAE7311DE3709D98EFAC0C5491EEF603C5B07FF0E);
	// Cysharp.Threading.Tasks.UniTask`1<System.ValueTuple`8<T1,T2,T3,T4,T5,T6,T7,System.ValueTuple`6<T8,T9,T10,T11,T12,T13>>>
	const UniTask_1_tA8A7D81855758A2DD5216B3575F6EE7528BE78FE L_32 = alloca(SizeOf_UniTask_1_tB132572B46AEB0D941F36622AD0AACB222D41741);
	// System.ValueTuple`6<Cysharp.Threading.Tasks.UniTask`1<T8>,Cysharp.Threading.Tasks.UniTask`1<T9>,Cysharp.Threading.Tasks.UniTask`1<T10>,Cysharp.Threading.Tasks.UniTask`1<T11>,Cysharp.Threading.Tasks.UniTask`1<T12>,Cysharp.Threading.Tasks.UniTask`1<T13>>
	const ValueTuple_6_tB94987FBA1FEACA28BADAC98198EF59DA86765F1 L_15 = alloca(SizeOf_ValueTuple_6_tBBDF5068AFB96FDD77261AF6813E4B292D2D1787);
	const ValueTuple_6_tB94987FBA1FEACA28BADAC98198EF59DA86765F1 L_18 = alloca(SizeOf_ValueTuple_6_tBBDF5068AFB96FDD77261AF6813E4B292D2D1787);
	const ValueTuple_6_tB94987FBA1FEACA28BADAC98198EF59DA86765F1 L_21 = alloca(SizeOf_ValueTuple_6_tBBDF5068AFB96FDD77261AF6813E4B292D2D1787);
	const ValueTuple_6_tB94987FBA1FEACA28BADAC98198EF59DA86765F1 L_24 = alloca(SizeOf_ValueTuple_6_tBBDF5068AFB96FDD77261AF6813E4B292D2D1787);
	const ValueTuple_6_tB94987FBA1FEACA28BADAC98198EF59DA86765F1 L_27 = alloca(SizeOf_ValueTuple_6_tBBDF5068AFB96FDD77261AF6813E4B292D2D1787);
	const ValueTuple_6_tB94987FBA1FEACA28BADAC98198EF59DA86765F1 L_30 = alloca(SizeOf_ValueTuple_6_tBBDF5068AFB96FDD77261AF6813E4B292D2D1787);
	// System.ValueTuple`8<Cysharp.Threading.Tasks.UniTask`1<T1>,Cysharp.Threading.Tasks.UniTask`1<T2>,Cysharp.Threading.Tasks.UniTask`1<T3>,Cysharp.Threading.Tasks.UniTask`1<T4>,Cysharp.Threading.Tasks.UniTask`1<T5>,Cysharp.Threading.Tasks.UniTask`1<T6>,Cysharp.Threading.Tasks.UniTask`1<T7>,System.ValueTuple`6<Cysharp.Threading.Tasks.UniTask`1<T8>,Cysharp.Threading.Tasks.UniTask`1<T9>,Cysharp.Threading.Tasks.UniTask`1<T10>,Cysharp.Threading.Tasks.UniTask`1<T11>,Cysharp.Threading.Tasks.UniTask`1<T12>,Cysharp.Threading.Tasks.UniTask`1<T13>>>
	const ValueTuple_8_t641630DEE5E39F5442AA6EFDFAF0ADE7D7196803 L_0 = alloca(SizeOf_ValueTuple_8_tAB4E83C87170B7AA2038DB520637989337701CB6);
	const ValueTuple_8_t641630DEE5E39F5442AA6EFDFAF0ADE7D7196803 L_2 = alloca(SizeOf_ValueTuple_8_tAB4E83C87170B7AA2038DB520637989337701CB6);
	const ValueTuple_8_t641630DEE5E39F5442AA6EFDFAF0ADE7D7196803 L_4 = alloca(SizeOf_ValueTuple_8_tAB4E83C87170B7AA2038DB520637989337701CB6);
	const ValueTuple_8_t641630DEE5E39F5442AA6EFDFAF0ADE7D7196803 L_6 = alloca(SizeOf_ValueTuple_8_tAB4E83C87170B7AA2038DB520637989337701CB6);
	const ValueTuple_8_t641630DEE5E39F5442AA6EFDFAF0ADE7D7196803 L_8 = alloca(SizeOf_ValueTuple_8_tAB4E83C87170B7AA2038DB520637989337701CB6);
	const ValueTuple_8_t641630DEE5E39F5442AA6EFDFAF0ADE7D7196803 L_10 = alloca(SizeOf_ValueTuple_8_tAB4E83C87170B7AA2038DB520637989337701CB6);
	const ValueTuple_8_t641630DEE5E39F5442AA6EFDFAF0ADE7D7196803 L_12 = alloca(SizeOf_ValueTuple_8_tAB4E83C87170B7AA2038DB520637989337701CB6);
	const ValueTuple_8_t641630DEE5E39F5442AA6EFDFAF0ADE7D7196803 L_14 = alloca(SizeOf_ValueTuple_8_tAB4E83C87170B7AA2038DB520637989337701CB6);
	const ValueTuple_8_t641630DEE5E39F5442AA6EFDFAF0ADE7D7196803 L_17 = alloca(SizeOf_ValueTuple_8_tAB4E83C87170B7AA2038DB520637989337701CB6);
	const ValueTuple_8_t641630DEE5E39F5442AA6EFDFAF0ADE7D7196803 L_20 = alloca(SizeOf_ValueTuple_8_tAB4E83C87170B7AA2038DB520637989337701CB6);
	const ValueTuple_8_t641630DEE5E39F5442AA6EFDFAF0ADE7D7196803 L_23 = alloca(SizeOf_ValueTuple_8_tAB4E83C87170B7AA2038DB520637989337701CB6);
	const ValueTuple_8_t641630DEE5E39F5442AA6EFDFAF0ADE7D7196803 L_26 = alloca(SizeOf_ValueTuple_8_tAB4E83C87170B7AA2038DB520637989337701CB6);
	const ValueTuple_8_t641630DEE5E39F5442AA6EFDFAF0ADE7D7196803 L_29 = alloca(SizeOf_ValueTuple_8_tAB4E83C87170B7AA2038DB520637989337701CB6);
	UniTask_1_tA8A7D81855758A2DD5216B3575F6EE7528BE78FE V_0 = alloca(SizeOf_UniTask_1_tB132572B46AEB0D941F36622AD0AACB222D41741);
	memset(V_0, 0, SizeOf_UniTask_1_tB132572B46AEB0D941F36622AD0AACB222D41741);
	{
		// return UniTask.WhenAll(tasks.Item1, tasks.Item2, tasks.Item3, tasks.Item4, tasks.Item5, tasks.Item6, tasks.Item7, tasks.Item8, tasks.Item9, tasks.Item10, tasks.Item11, tasks.Item12, tasks.Item13).GetAwaiter();
		il2cpp_codegen_memcpy(L_0, ___0_tasks, SizeOf_ValueTuple_8_tAB4E83C87170B7AA2038DB520637989337701CB6);
		il2cpp_codegen_memcpy(L_1, il2cpp_codegen_get_instance_field_data_pointer(L_0, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),0)), SizeOf_UniTask_1_tA7A59EE5DB2A7C178D824D10F163E1972F89E077);
		il2cpp_codegen_memcpy(L_2, ___0_tasks, SizeOf_ValueTuple_8_tAB4E83C87170B7AA2038DB520637989337701CB6);
		il2cpp_codegen_memcpy(L_3, il2cpp_codegen_get_instance_field_data_pointer(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),1)), SizeOf_UniTask_1_t84F7067310ECC92BF341F116100D578B259EC666);
		il2cpp_codegen_memcpy(L_4, ___0_tasks, SizeOf_ValueTuple_8_tAB4E83C87170B7AA2038DB520637989337701CB6);
		il2cpp_codegen_memcpy(L_5, il2cpp_codegen_get_instance_field_data_pointer(L_4, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),2)), SizeOf_UniTask_1_t6986E9A2065A91AEED9E128FE4EAA6DDD9643442);
		il2cpp_codegen_memcpy(L_6, ___0_tasks, SizeOf_ValueTuple_8_tAB4E83C87170B7AA2038DB520637989337701CB6);
		il2cpp_codegen_memcpy(L_7, il2cpp_codegen_get_instance_field_data_pointer(L_6, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),3)), SizeOf_UniTask_1_t32D447FB8B1DB8E41F0FF390F35B6E90A0618BD0);
		il2cpp_codegen_memcpy(L_8, ___0_tasks, SizeOf_ValueTuple_8_tAB4E83C87170B7AA2038DB520637989337701CB6);
		il2cpp_codegen_memcpy(L_9, il2cpp_codegen_get_instance_field_data_pointer(L_8, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),4)), SizeOf_UniTask_1_tFFCD5A13CD3DBBBD9DC52B9B73EF6B982BD875CD);
		il2cpp_codegen_memcpy(L_10, ___0_tasks, SizeOf_ValueTuple_8_tAB4E83C87170B7AA2038DB520637989337701CB6);
		il2cpp_codegen_memcpy(L_11, il2cpp_codegen_get_instance_field_data_pointer(L_10, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),5)), SizeOf_UniTask_1_tF18CFEB49E1D5F0F86201520A6AE13E47C227F0C);
		il2cpp_codegen_memcpy(L_12, ___0_tasks, SizeOf_ValueTuple_8_tAB4E83C87170B7AA2038DB520637989337701CB6);
		il2cpp_codegen_memcpy(L_13, il2cpp_codegen_get_instance_field_data_pointer(L_12, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),6)), SizeOf_UniTask_1_t0E23EA6E8DE5FC939F565692622C0583A368FEAF);
		il2cpp_codegen_memcpy(L_14, ___0_tasks, SizeOf_ValueTuple_8_tAB4E83C87170B7AA2038DB520637989337701CB6);
		il2cpp_codegen_memcpy(L_15, il2cpp_codegen_get_instance_field_data_pointer(L_14, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),7)), SizeOf_ValueTuple_6_tBBDF5068AFB96FDD77261AF6813E4B292D2D1787);
		il2cpp_codegen_memcpy(L_16, il2cpp_codegen_get_instance_field_data_pointer(L_15, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 8),0)), SizeOf_UniTask_1_tBC2567BB433182B09486F2ACFA4FCDB47D5A3D81);
		il2cpp_codegen_memcpy(L_17, ___0_tasks, SizeOf_ValueTuple_8_tAB4E83C87170B7AA2038DB520637989337701CB6);
		il2cpp_codegen_memcpy(L_18, il2cpp_codegen_get_instance_field_data_pointer(L_17, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),7)), SizeOf_ValueTuple_6_tBBDF5068AFB96FDD77261AF6813E4B292D2D1787);
		il2cpp_codegen_memcpy(L_19, il2cpp_codegen_get_instance_field_data_pointer(L_18, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 8),1)), SizeOf_UniTask_1_t91BC7293CB9106867367C8498F9AEAA3A1B9E1DB);
		il2cpp_codegen_memcpy(L_20, ___0_tasks, SizeOf_ValueTuple_8_tAB4E83C87170B7AA2038DB520637989337701CB6);
		il2cpp_codegen_memcpy(L_21, il2cpp_codegen_get_instance_field_data_pointer(L_20, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),7)), SizeOf_ValueTuple_6_tBBDF5068AFB96FDD77261AF6813E4B292D2D1787);
		il2cpp_codegen_memcpy(L_22, il2cpp_codegen_get_instance_field_data_pointer(L_21, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 8),2)), SizeOf_UniTask_1_tF2A2E4330DC1BC3A8EADA4D77738924F22D243D1);
		il2cpp_codegen_memcpy(L_23, ___0_tasks, SizeOf_ValueTuple_8_tAB4E83C87170B7AA2038DB520637989337701CB6);
		il2cpp_codegen_memcpy(L_24, il2cpp_codegen_get_instance_field_data_pointer(L_23, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),7)), SizeOf_ValueTuple_6_tBBDF5068AFB96FDD77261AF6813E4B292D2D1787);
		il2cpp_codegen_memcpy(L_25, il2cpp_codegen_get_instance_field_data_pointer(L_24, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 8),3)), SizeOf_UniTask_1_tECD83D3482308244FBEF63E97DD6EB908618A1DF);
		il2cpp_codegen_memcpy(L_26, ___0_tasks, SizeOf_ValueTuple_8_tAB4E83C87170B7AA2038DB520637989337701CB6);
		il2cpp_codegen_memcpy(L_27, il2cpp_codegen_get_instance_field_data_pointer(L_26, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),7)), SizeOf_ValueTuple_6_tBBDF5068AFB96FDD77261AF6813E4B292D2D1787);
		il2cpp_codegen_memcpy(L_28, il2cpp_codegen_get_instance_field_data_pointer(L_27, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 8),4)), SizeOf_UniTask_1_t09D946C7ED37F8125FCAEB2EC2265E596B1D433C);
		il2cpp_codegen_memcpy(L_29, ___0_tasks, SizeOf_ValueTuple_8_tAB4E83C87170B7AA2038DB520637989337701CB6);
		il2cpp_codegen_memcpy(L_30, il2cpp_codegen_get_instance_field_data_pointer(L_29, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),7)), SizeOf_ValueTuple_6_tBBDF5068AFB96FDD77261AF6813E4B292D2D1787);
		il2cpp_codegen_memcpy(L_31, il2cpp_codegen_get_instance_field_data_pointer(L_30, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 8),5)), SizeOf_UniTask_1_tAE7311DE3709D98EFAC0C5491EEF603C5B07FF0E);
		il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		InvokerActionInvoker14< UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483, UniTask_1_tA8A7D81855758A2DD5216B3575F6EE7528BE78FE* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 15)), il2cpp_rgctx_method(method->rgctx_data, 15), NULL, L_1, L_3, L_5, L_7, L_9, L_11, L_13, L_16, L_19, L_22, L_25, L_28, L_31, (UniTask_1_tA8A7D81855758A2DD5216B3575F6EE7528BE78FE*)L_32);
		il2cpp_codegen_memcpy(V_0, L_32, SizeOf_UniTask_1_tB132572B46AEB0D941F36622AD0AACB222D41741);
		InvokerActionInvoker1< Awaiter_t7147BE2B817DFC22CC398A00330C686C37D97D41* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 17)), il2cpp_rgctx_method(method->rgctx_data, 17), (UniTask_1_tA8A7D81855758A2DD5216B3575F6EE7528BE78FE*)V_0, (Awaiter_t7147BE2B817DFC22CC398A00330C686C37D97D41*)L_33);
		il2cpp_codegen_memcpy(il2cppRetVal, L_33, SizeOf_Awaiter_tF6B97998B237612308775BA705B025B72D380760);
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.ValueTuple`8<T1,T2,T3,T4,T5,T6,T7,System.ValueTuple`7<T8,T9,T10,T11,T12,T13,T14>>> Cysharp.Threading.Tasks.UniTaskExtensions::GetAwaiter<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.ValueTuple`8<Cysharp.Threading.Tasks.UniTask`1<T1>,Cysharp.Threading.Tasks.UniTask`1<T2>,Cysharp.Threading.Tasks.UniTask`1<T3>,Cysharp.Threading.Tasks.UniTask`1<T4>,Cysharp.Threading.Tasks.UniTask`1<T5>,Cysharp.Threading.Tasks.UniTask`1<T6>,Cysharp.Threading.Tasks.UniTask`1<T7>,System.ValueTuple`7<Cysharp.Threading.Tasks.UniTask`1<T8>,Cysharp.Threading.Tasks.UniTask`1<T9>,Cysharp.Threading.Tasks.UniTask`1<T10>,Cysharp.Threading.Tasks.UniTask`1<T11>,Cysharp.Threading.Tasks.UniTask`1<T12>,Cysharp.Threading.Tasks.UniTask`1<T13>,Cysharp.Threading.Tasks.UniTask`1<T14>>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniTaskExtensions_GetAwaiter_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mE519C6DD8E36080AC0A59E514BA30F5A5DC4EA59_gshared (/*System.ValueTuple`8<Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,System.ValueTuple`7<Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>>*/ValueTuple_8_t089B91B87017F6CB89868EC488BB3B612D76EB13 ___0_tasks, Awaiter_t6A7BB22960A6B16711B83FB5212F073981FE83E2* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<System.ValueTuple`8<T1,T2,T3,T4,T5,T6,T7,System.ValueTuple`7<T8,T9,T10,T11,T12,T13,T14>>>)
	const uint32_t SizeOf_UniTask_1_t83CD5B995266E7E6F02840A5C96207A632E85EC7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 17));
	// sizeof(System.ValueTuple`8<Cysharp.Threading.Tasks.UniTask`1<T1>,Cysharp.Threading.Tasks.UniTask`1<T2>,Cysharp.Threading.Tasks.UniTask`1<T3>,Cysharp.Threading.Tasks.UniTask`1<T4>,Cysharp.Threading.Tasks.UniTask`1<T5>,Cysharp.Threading.Tasks.UniTask`1<T6>,Cysharp.Threading.Tasks.UniTask`1<T7>,System.ValueTuple`7<Cysharp.Threading.Tasks.UniTask`1<T8>,Cysharp.Threading.Tasks.UniTask`1<T9>,Cysharp.Threading.Tasks.UniTask`1<T10>,Cysharp.Threading.Tasks.UniTask`1<T11>,Cysharp.Threading.Tasks.UniTask`1<T12>,Cysharp.Threading.Tasks.UniTask`1<T13>,Cysharp.Threading.Tasks.UniTask`1<T14>>>)
	const uint32_t SizeOf_ValueTuple_8_t50F71DC32E07670F52305EAD23ECD96493C39624 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T1>)
	const uint32_t SizeOf_UniTask_1_tDFDDC72EB7C9253708A4B890F4E838B25CCB289A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T2>)
	const uint32_t SizeOf_UniTask_1_t50A77610F861D82AD59B0E1B0DF3BC4DC828F57D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T3>)
	const uint32_t SizeOf_UniTask_1_tF21740E4F93F2F99C9418C1FEB4ADBACC46B0ADD = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T4>)
	const uint32_t SizeOf_UniTask_1_t5506E3409C989A30824A64104854EE8138C48231 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 4));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T5>)
	const uint32_t SizeOf_UniTask_1_t1431C9152ADE85004D228F0A0BFD4FD5C26986E2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 5));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T6>)
	const uint32_t SizeOf_UniTask_1_tF59D5A61B272FE42A4DA65FDBB0DA90B57523BAF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 6));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T7>)
	const uint32_t SizeOf_UniTask_1_tA9ACA2A2AE09FC71C3B0C0B172781E9E9A9BDA44 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 7));
	// sizeof(System.ValueTuple`7<Cysharp.Threading.Tasks.UniTask`1<T8>,Cysharp.Threading.Tasks.UniTask`1<T9>,Cysharp.Threading.Tasks.UniTask`1<T10>,Cysharp.Threading.Tasks.UniTask`1<T11>,Cysharp.Threading.Tasks.UniTask`1<T12>,Cysharp.Threading.Tasks.UniTask`1<T13>,Cysharp.Threading.Tasks.UniTask`1<T14>>)
	const uint32_t SizeOf_ValueTuple_7_tE9FAFD842CF8D9A40485B11C6BF99991886B7E38 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 8));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T8>)
	const uint32_t SizeOf_UniTask_1_tE1D2851BBC6A916C86AB8E9704B02D00CEE22705 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 9));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T9>)
	const uint32_t SizeOf_UniTask_1_t6D8C1DA94A596E6C56D2AA86847E6AC86B7F8FA9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 10));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T10>)
	const uint32_t SizeOf_UniTask_1_tC85E17CA4CED1CE21E04839A9583B378AC923BBB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 11));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T11>)
	const uint32_t SizeOf_UniTask_1_tE2B70D992F5CB6C99DA8BC4D893E592DB445B145 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 12));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T12>)
	const uint32_t SizeOf_UniTask_1_t5AB8E014EAD24E44371838A2724BD2EBF9DF8A24 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 13));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T13>)
	const uint32_t SizeOf_UniTask_1_tD46B5217E53D7ACBB54A25DE6F9E3890B204065E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 14));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T14>)
	const uint32_t SizeOf_UniTask_1_t8C3C998D61E09F57BB2469E35075D2EF3EC3352D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 15));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.ValueTuple`8<T1,T2,T3,T4,T5,T6,T7,System.ValueTuple`7<T8,T9,T10,T11,T12,T13,T14>>>)
	const uint32_t SizeOf_Awaiter_tCAF3CBB46DAAAD538F5BB53BF882F4EBF68E8E00 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 19));
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.ValueTuple`8<T1,T2,T3,T4,T5,T6,T7,System.ValueTuple`7<T8,T9,T10,T11,T12,T13,T14>>>
	const Awaiter_t6A7BB22960A6B16711B83FB5212F073981FE83E2 L_36 = alloca(SizeOf_Awaiter_tCAF3CBB46DAAAD538F5BB53BF882F4EBF68E8E00);
	// Cysharp.Threading.Tasks.UniTask`1<T1>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_1 = alloca(SizeOf_UniTask_1_tDFDDC72EB7C9253708A4B890F4E838B25CCB289A);
	// Cysharp.Threading.Tasks.UniTask`1<T2>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_3 = alloca(SizeOf_UniTask_1_t50A77610F861D82AD59B0E1B0DF3BC4DC828F57D);
	// Cysharp.Threading.Tasks.UniTask`1<T3>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_5 = alloca(SizeOf_UniTask_1_tF21740E4F93F2F99C9418C1FEB4ADBACC46B0ADD);
	// Cysharp.Threading.Tasks.UniTask`1<T4>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_7 = alloca(SizeOf_UniTask_1_t5506E3409C989A30824A64104854EE8138C48231);
	// Cysharp.Threading.Tasks.UniTask`1<T5>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_9 = alloca(SizeOf_UniTask_1_t1431C9152ADE85004D228F0A0BFD4FD5C26986E2);
	// Cysharp.Threading.Tasks.UniTask`1<T6>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_11 = alloca(SizeOf_UniTask_1_tF59D5A61B272FE42A4DA65FDBB0DA90B57523BAF);
	// Cysharp.Threading.Tasks.UniTask`1<T7>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_13 = alloca(SizeOf_UniTask_1_tA9ACA2A2AE09FC71C3B0C0B172781E9E9A9BDA44);
	// Cysharp.Threading.Tasks.UniTask`1<T8>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_16 = alloca(SizeOf_UniTask_1_tE1D2851BBC6A916C86AB8E9704B02D00CEE22705);
	// Cysharp.Threading.Tasks.UniTask`1<T9>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_19 = alloca(SizeOf_UniTask_1_t6D8C1DA94A596E6C56D2AA86847E6AC86B7F8FA9);
	// Cysharp.Threading.Tasks.UniTask`1<T10>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_22 = alloca(SizeOf_UniTask_1_tC85E17CA4CED1CE21E04839A9583B378AC923BBB);
	// Cysharp.Threading.Tasks.UniTask`1<T11>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_25 = alloca(SizeOf_UniTask_1_tE2B70D992F5CB6C99DA8BC4D893E592DB445B145);
	// Cysharp.Threading.Tasks.UniTask`1<T12>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_28 = alloca(SizeOf_UniTask_1_t5AB8E014EAD24E44371838A2724BD2EBF9DF8A24);
	// Cysharp.Threading.Tasks.UniTask`1<T13>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_31 = alloca(SizeOf_UniTask_1_tD46B5217E53D7ACBB54A25DE6F9E3890B204065E);
	// Cysharp.Threading.Tasks.UniTask`1<T14>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_34 = alloca(SizeOf_UniTask_1_t8C3C998D61E09F57BB2469E35075D2EF3EC3352D);
	// Cysharp.Threading.Tasks.UniTask`1<System.ValueTuple`8<T1,T2,T3,T4,T5,T6,T7,System.ValueTuple`7<T8,T9,T10,T11,T12,T13,T14>>>
	const UniTask_1_tA9C053B082DE8E68BCFEDBD2BC1F5A762986B981 L_35 = alloca(SizeOf_UniTask_1_t83CD5B995266E7E6F02840A5C96207A632E85EC7);
	// System.ValueTuple`7<Cysharp.Threading.Tasks.UniTask`1<T8>,Cysharp.Threading.Tasks.UniTask`1<T9>,Cysharp.Threading.Tasks.UniTask`1<T10>,Cysharp.Threading.Tasks.UniTask`1<T11>,Cysharp.Threading.Tasks.UniTask`1<T12>,Cysharp.Threading.Tasks.UniTask`1<T13>,Cysharp.Threading.Tasks.UniTask`1<T14>>
	const ValueTuple_7_t99C1D51A040ECA9B385797480EC45940C83830C9 L_15 = alloca(SizeOf_ValueTuple_7_tE9FAFD842CF8D9A40485B11C6BF99991886B7E38);
	const ValueTuple_7_t99C1D51A040ECA9B385797480EC45940C83830C9 L_18 = alloca(SizeOf_ValueTuple_7_tE9FAFD842CF8D9A40485B11C6BF99991886B7E38);
	const ValueTuple_7_t99C1D51A040ECA9B385797480EC45940C83830C9 L_21 = alloca(SizeOf_ValueTuple_7_tE9FAFD842CF8D9A40485B11C6BF99991886B7E38);
	const ValueTuple_7_t99C1D51A040ECA9B385797480EC45940C83830C9 L_24 = alloca(SizeOf_ValueTuple_7_tE9FAFD842CF8D9A40485B11C6BF99991886B7E38);
	const ValueTuple_7_t99C1D51A040ECA9B385797480EC45940C83830C9 L_27 = alloca(SizeOf_ValueTuple_7_tE9FAFD842CF8D9A40485B11C6BF99991886B7E38);
	const ValueTuple_7_t99C1D51A040ECA9B385797480EC45940C83830C9 L_30 = alloca(SizeOf_ValueTuple_7_tE9FAFD842CF8D9A40485B11C6BF99991886B7E38);
	const ValueTuple_7_t99C1D51A040ECA9B385797480EC45940C83830C9 L_33 = alloca(SizeOf_ValueTuple_7_tE9FAFD842CF8D9A40485B11C6BF99991886B7E38);
	// System.ValueTuple`8<Cysharp.Threading.Tasks.UniTask`1<T1>,Cysharp.Threading.Tasks.UniTask`1<T2>,Cysharp.Threading.Tasks.UniTask`1<T3>,Cysharp.Threading.Tasks.UniTask`1<T4>,Cysharp.Threading.Tasks.UniTask`1<T5>,Cysharp.Threading.Tasks.UniTask`1<T6>,Cysharp.Threading.Tasks.UniTask`1<T7>,System.ValueTuple`7<Cysharp.Threading.Tasks.UniTask`1<T8>,Cysharp.Threading.Tasks.UniTask`1<T9>,Cysharp.Threading.Tasks.UniTask`1<T10>,Cysharp.Threading.Tasks.UniTask`1<T11>,Cysharp.Threading.Tasks.UniTask`1<T12>,Cysharp.Threading.Tasks.UniTask`1<T13>,Cysharp.Threading.Tasks.UniTask`1<T14>>>
	const ValueTuple_8_t089B91B87017F6CB89868EC488BB3B612D76EB13 L_0 = alloca(SizeOf_ValueTuple_8_t50F71DC32E07670F52305EAD23ECD96493C39624);
	const ValueTuple_8_t089B91B87017F6CB89868EC488BB3B612D76EB13 L_2 = alloca(SizeOf_ValueTuple_8_t50F71DC32E07670F52305EAD23ECD96493C39624);
	const ValueTuple_8_t089B91B87017F6CB89868EC488BB3B612D76EB13 L_4 = alloca(SizeOf_ValueTuple_8_t50F71DC32E07670F52305EAD23ECD96493C39624);
	const ValueTuple_8_t089B91B87017F6CB89868EC488BB3B612D76EB13 L_6 = alloca(SizeOf_ValueTuple_8_t50F71DC32E07670F52305EAD23ECD96493C39624);
	const ValueTuple_8_t089B91B87017F6CB89868EC488BB3B612D76EB13 L_8 = alloca(SizeOf_ValueTuple_8_t50F71DC32E07670F52305EAD23ECD96493C39624);
	const ValueTuple_8_t089B91B87017F6CB89868EC488BB3B612D76EB13 L_10 = alloca(SizeOf_ValueTuple_8_t50F71DC32E07670F52305EAD23ECD96493C39624);
	const ValueTuple_8_t089B91B87017F6CB89868EC488BB3B612D76EB13 L_12 = alloca(SizeOf_ValueTuple_8_t50F71DC32E07670F52305EAD23ECD96493C39624);
	const ValueTuple_8_t089B91B87017F6CB89868EC488BB3B612D76EB13 L_14 = alloca(SizeOf_ValueTuple_8_t50F71DC32E07670F52305EAD23ECD96493C39624);
	const ValueTuple_8_t089B91B87017F6CB89868EC488BB3B612D76EB13 L_17 = alloca(SizeOf_ValueTuple_8_t50F71DC32E07670F52305EAD23ECD96493C39624);
	const ValueTuple_8_t089B91B87017F6CB89868EC488BB3B612D76EB13 L_20 = alloca(SizeOf_ValueTuple_8_t50F71DC32E07670F52305EAD23ECD96493C39624);
	const ValueTuple_8_t089B91B87017F6CB89868EC488BB3B612D76EB13 L_23 = alloca(SizeOf_ValueTuple_8_t50F71DC32E07670F52305EAD23ECD96493C39624);
	const ValueTuple_8_t089B91B87017F6CB89868EC488BB3B612D76EB13 L_26 = alloca(SizeOf_ValueTuple_8_t50F71DC32E07670F52305EAD23ECD96493C39624);
	const ValueTuple_8_t089B91B87017F6CB89868EC488BB3B612D76EB13 L_29 = alloca(SizeOf_ValueTuple_8_t50F71DC32E07670F52305EAD23ECD96493C39624);
	const ValueTuple_8_t089B91B87017F6CB89868EC488BB3B612D76EB13 L_32 = alloca(SizeOf_ValueTuple_8_t50F71DC32E07670F52305EAD23ECD96493C39624);
	UniTask_1_tA9C053B082DE8E68BCFEDBD2BC1F5A762986B981 V_0 = alloca(SizeOf_UniTask_1_t83CD5B995266E7E6F02840A5C96207A632E85EC7);
	memset(V_0, 0, SizeOf_UniTask_1_t83CD5B995266E7E6F02840A5C96207A632E85EC7);
	{
		// return UniTask.WhenAll(tasks.Item1, tasks.Item2, tasks.Item3, tasks.Item4, tasks.Item5, tasks.Item6, tasks.Item7, tasks.Item8, tasks.Item9, tasks.Item10, tasks.Item11, tasks.Item12, tasks.Item13, tasks.Item14).GetAwaiter();
		il2cpp_codegen_memcpy(L_0, ___0_tasks, SizeOf_ValueTuple_8_t50F71DC32E07670F52305EAD23ECD96493C39624);
		il2cpp_codegen_memcpy(L_1, il2cpp_codegen_get_instance_field_data_pointer(L_0, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),0)), SizeOf_UniTask_1_tDFDDC72EB7C9253708A4B890F4E838B25CCB289A);
		il2cpp_codegen_memcpy(L_2, ___0_tasks, SizeOf_ValueTuple_8_t50F71DC32E07670F52305EAD23ECD96493C39624);
		il2cpp_codegen_memcpy(L_3, il2cpp_codegen_get_instance_field_data_pointer(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),1)), SizeOf_UniTask_1_t50A77610F861D82AD59B0E1B0DF3BC4DC828F57D);
		il2cpp_codegen_memcpy(L_4, ___0_tasks, SizeOf_ValueTuple_8_t50F71DC32E07670F52305EAD23ECD96493C39624);
		il2cpp_codegen_memcpy(L_5, il2cpp_codegen_get_instance_field_data_pointer(L_4, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),2)), SizeOf_UniTask_1_tF21740E4F93F2F99C9418C1FEB4ADBACC46B0ADD);
		il2cpp_codegen_memcpy(L_6, ___0_tasks, SizeOf_ValueTuple_8_t50F71DC32E07670F52305EAD23ECD96493C39624);
		il2cpp_codegen_memcpy(L_7, il2cpp_codegen_get_instance_field_data_pointer(L_6, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),3)), SizeOf_UniTask_1_t5506E3409C989A30824A64104854EE8138C48231);
		il2cpp_codegen_memcpy(L_8, ___0_tasks, SizeOf_ValueTuple_8_t50F71DC32E07670F52305EAD23ECD96493C39624);
		il2cpp_codegen_memcpy(L_9, il2cpp_codegen_get_instance_field_data_pointer(L_8, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),4)), SizeOf_UniTask_1_t1431C9152ADE85004D228F0A0BFD4FD5C26986E2);
		il2cpp_codegen_memcpy(L_10, ___0_tasks, SizeOf_ValueTuple_8_t50F71DC32E07670F52305EAD23ECD96493C39624);
		il2cpp_codegen_memcpy(L_11, il2cpp_codegen_get_instance_field_data_pointer(L_10, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),5)), SizeOf_UniTask_1_tF59D5A61B272FE42A4DA65FDBB0DA90B57523BAF);
		il2cpp_codegen_memcpy(L_12, ___0_tasks, SizeOf_ValueTuple_8_t50F71DC32E07670F52305EAD23ECD96493C39624);
		il2cpp_codegen_memcpy(L_13, il2cpp_codegen_get_instance_field_data_pointer(L_12, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),6)), SizeOf_UniTask_1_tA9ACA2A2AE09FC71C3B0C0B172781E9E9A9BDA44);
		il2cpp_codegen_memcpy(L_14, ___0_tasks, SizeOf_ValueTuple_8_t50F71DC32E07670F52305EAD23ECD96493C39624);
		il2cpp_codegen_memcpy(L_15, il2cpp_codegen_get_instance_field_data_pointer(L_14, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),7)), SizeOf_ValueTuple_7_tE9FAFD842CF8D9A40485B11C6BF99991886B7E38);
		il2cpp_codegen_memcpy(L_16, il2cpp_codegen_get_instance_field_data_pointer(L_15, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 8),0)), SizeOf_UniTask_1_tE1D2851BBC6A916C86AB8E9704B02D00CEE22705);
		il2cpp_codegen_memcpy(L_17, ___0_tasks, SizeOf_ValueTuple_8_t50F71DC32E07670F52305EAD23ECD96493C39624);
		il2cpp_codegen_memcpy(L_18, il2cpp_codegen_get_instance_field_data_pointer(L_17, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),7)), SizeOf_ValueTuple_7_tE9FAFD842CF8D9A40485B11C6BF99991886B7E38);
		il2cpp_codegen_memcpy(L_19, il2cpp_codegen_get_instance_field_data_pointer(L_18, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 8),1)), SizeOf_UniTask_1_t6D8C1DA94A596E6C56D2AA86847E6AC86B7F8FA9);
		il2cpp_codegen_memcpy(L_20, ___0_tasks, SizeOf_ValueTuple_8_t50F71DC32E07670F52305EAD23ECD96493C39624);
		il2cpp_codegen_memcpy(L_21, il2cpp_codegen_get_instance_field_data_pointer(L_20, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),7)), SizeOf_ValueTuple_7_tE9FAFD842CF8D9A40485B11C6BF99991886B7E38);
		il2cpp_codegen_memcpy(L_22, il2cpp_codegen_get_instance_field_data_pointer(L_21, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 8),2)), SizeOf_UniTask_1_tC85E17CA4CED1CE21E04839A9583B378AC923BBB);
		il2cpp_codegen_memcpy(L_23, ___0_tasks, SizeOf_ValueTuple_8_t50F71DC32E07670F52305EAD23ECD96493C39624);
		il2cpp_codegen_memcpy(L_24, il2cpp_codegen_get_instance_field_data_pointer(L_23, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),7)), SizeOf_ValueTuple_7_tE9FAFD842CF8D9A40485B11C6BF99991886B7E38);
		il2cpp_codegen_memcpy(L_25, il2cpp_codegen_get_instance_field_data_pointer(L_24, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 8),3)), SizeOf_UniTask_1_tE2B70D992F5CB6C99DA8BC4D893E592DB445B145);
		il2cpp_codegen_memcpy(L_26, ___0_tasks, SizeOf_ValueTuple_8_t50F71DC32E07670F52305EAD23ECD96493C39624);
		il2cpp_codegen_memcpy(L_27, il2cpp_codegen_get_instance_field_data_pointer(L_26, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),7)), SizeOf_ValueTuple_7_tE9FAFD842CF8D9A40485B11C6BF99991886B7E38);
		il2cpp_codegen_memcpy(L_28, il2cpp_codegen_get_instance_field_data_pointer(L_27, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 8),4)), SizeOf_UniTask_1_t5AB8E014EAD24E44371838A2724BD2EBF9DF8A24);
		il2cpp_codegen_memcpy(L_29, ___0_tasks, SizeOf_ValueTuple_8_t50F71DC32E07670F52305EAD23ECD96493C39624);
		il2cpp_codegen_memcpy(L_30, il2cpp_codegen_get_instance_field_data_pointer(L_29, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),7)), SizeOf_ValueTuple_7_tE9FAFD842CF8D9A40485B11C6BF99991886B7E38);
		il2cpp_codegen_memcpy(L_31, il2cpp_codegen_get_instance_field_data_pointer(L_30, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 8),5)), SizeOf_UniTask_1_tD46B5217E53D7ACBB54A25DE6F9E3890B204065E);
		il2cpp_codegen_memcpy(L_32, ___0_tasks, SizeOf_ValueTuple_8_t50F71DC32E07670F52305EAD23ECD96493C39624);
		il2cpp_codegen_memcpy(L_33, il2cpp_codegen_get_instance_field_data_pointer(L_32, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),7)), SizeOf_ValueTuple_7_tE9FAFD842CF8D9A40485B11C6BF99991886B7E38);
		il2cpp_codegen_memcpy(L_34, il2cpp_codegen_get_instance_field_data_pointer(L_33, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 8),6)), SizeOf_UniTask_1_t8C3C998D61E09F57BB2469E35075D2EF3EC3352D);
		il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		InvokerActionInvoker15< UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483, UniTask_1_tA9C053B082DE8E68BCFEDBD2BC1F5A762986B981* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 16)), il2cpp_rgctx_method(method->rgctx_data, 16), NULL, L_1, L_3, L_5, L_7, L_9, L_11, L_13, L_16, L_19, L_22, L_25, L_28, L_31, L_34, (UniTask_1_tA9C053B082DE8E68BCFEDBD2BC1F5A762986B981*)L_35);
		il2cpp_codegen_memcpy(V_0, L_35, SizeOf_UniTask_1_t83CD5B995266E7E6F02840A5C96207A632E85EC7);
		InvokerActionInvoker1< Awaiter_t6A7BB22960A6B16711B83FB5212F073981FE83E2* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 18)), il2cpp_rgctx_method(method->rgctx_data, 18), (UniTask_1_tA9C053B082DE8E68BCFEDBD2BC1F5A762986B981*)V_0, (Awaiter_t6A7BB22960A6B16711B83FB5212F073981FE83E2*)L_36);
		il2cpp_codegen_memcpy(il2cppRetVal, L_36, SizeOf_Awaiter_tCAF3CBB46DAAAD538F5BB53BF882F4EBF68E8E00);
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.ValueTuple`8<T1,T2,T3,T4,T5,T6,T7,System.ValueTuple`8<T8,T9,T10,T11,T12,T13,T14,System.ValueTuple`1<T15>>>> Cysharp.Threading.Tasks.UniTaskExtensions::GetAwaiter<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.ValueTuple`8<Cysharp.Threading.Tasks.UniTask`1<T1>,Cysharp.Threading.Tasks.UniTask`1<T2>,Cysharp.Threading.Tasks.UniTask`1<T3>,Cysharp.Threading.Tasks.UniTask`1<T4>,Cysharp.Threading.Tasks.UniTask`1<T5>,Cysharp.Threading.Tasks.UniTask`1<T6>,Cysharp.Threading.Tasks.UniTask`1<T7>,System.ValueTuple`8<Cysharp.Threading.Tasks.UniTask`1<T8>,Cysharp.Threading.Tasks.UniTask`1<T9>,Cysharp.Threading.Tasks.UniTask`1<T10>,Cysharp.Threading.Tasks.UniTask`1<T11>,Cysharp.Threading.Tasks.UniTask`1<T12>,Cysharp.Threading.Tasks.UniTask`1<T13>,Cysharp.Threading.Tasks.UniTask`1<T14>,System.ValueTuple`1<Cysharp.Threading.Tasks.UniTask`1<T15>>>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniTaskExtensions_GetAwaiter_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mD0A0DBD11CEE559F9264C44F5D77E81494427CF8_gshared (/*System.ValueTuple`8<Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,System.ValueTuple`8<Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,System.ValueTuple`1<Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>>>*/ValueTuple_8_t84FD1EA209F6096BE6BEAC5622F14D5E62346284 ___0_tasks, Awaiter_t3CC599DC0B3CBC307FEA3D25F68C8B6D2426FBA3* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<System.ValueTuple`8<T1,T2,T3,T4,T5,T6,T7,System.ValueTuple`8<T8,T9,T10,T11,T12,T13,T14,System.ValueTuple`1<T15>>>>)
	const uint32_t SizeOf_UniTask_1_t33A651AB13A95830DA1FFD8D547149FF784B6B48 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 19));
	// sizeof(System.ValueTuple`8<Cysharp.Threading.Tasks.UniTask`1<T1>,Cysharp.Threading.Tasks.UniTask`1<T2>,Cysharp.Threading.Tasks.UniTask`1<T3>,Cysharp.Threading.Tasks.UniTask`1<T4>,Cysharp.Threading.Tasks.UniTask`1<T5>,Cysharp.Threading.Tasks.UniTask`1<T6>,Cysharp.Threading.Tasks.UniTask`1<T7>,System.ValueTuple`8<Cysharp.Threading.Tasks.UniTask`1<T8>,Cysharp.Threading.Tasks.UniTask`1<T9>,Cysharp.Threading.Tasks.UniTask`1<T10>,Cysharp.Threading.Tasks.UniTask`1<T11>,Cysharp.Threading.Tasks.UniTask`1<T12>,Cysharp.Threading.Tasks.UniTask`1<T13>,Cysharp.Threading.Tasks.UniTask`1<T14>,System.ValueTuple`1<Cysharp.Threading.Tasks.UniTask`1<T15>>>>)
	const uint32_t SizeOf_ValueTuple_8_t751692B7036B3465D5D0E52FD5AD94213ADDA3D8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T1>)
	const uint32_t SizeOf_UniTask_1_t016A4FDB20AD85B488874A84971619F6E4857A94 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T2>)
	const uint32_t SizeOf_UniTask_1_t7FD30C669B57B5B3E3BAA97970FE93DDC0A08A32 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T3>)
	const uint32_t SizeOf_UniTask_1_tB0F06DF8E62DD78F79BA4FE9B85E08D7AE64A879 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T4>)
	const uint32_t SizeOf_UniTask_1_t0037641C4B0E3255911F7532BB62C24602A92C76 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 4));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T5>)
	const uint32_t SizeOf_UniTask_1_tCF49CA29D84F54BCBB3385B7ADDD2862A52D24C8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 5));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T6>)
	const uint32_t SizeOf_UniTask_1_t41AA612E98E96AE0BDD07BB5D53FD879FB6B1631 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 6));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T7>)
	const uint32_t SizeOf_UniTask_1_tD7EF94CE69830E2CEECA05F46DE1D6738B216256 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 7));
	// sizeof(System.ValueTuple`8<Cysharp.Threading.Tasks.UniTask`1<T8>,Cysharp.Threading.Tasks.UniTask`1<T9>,Cysharp.Threading.Tasks.UniTask`1<T10>,Cysharp.Threading.Tasks.UniTask`1<T11>,Cysharp.Threading.Tasks.UniTask`1<T12>,Cysharp.Threading.Tasks.UniTask`1<T13>,Cysharp.Threading.Tasks.UniTask`1<T14>,System.ValueTuple`1<Cysharp.Threading.Tasks.UniTask`1<T15>>>)
	const uint32_t SizeOf_ValueTuple_8_t0299716852892566A952CA084998E81BAB4E1EF9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 8));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T8>)
	const uint32_t SizeOf_UniTask_1_t8451CF79178765EDB595777C0B8B8DEBF2A23182 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 9));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T9>)
	const uint32_t SizeOf_UniTask_1_tC288D8B57D9567DCD88C165E7379386B07506430 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 10));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T10>)
	const uint32_t SizeOf_UniTask_1_t0FEC4A117635B6C7EB680BDB0EE1AB9BAD4C3C52 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 11));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T11>)
	const uint32_t SizeOf_UniTask_1_tC032F67028D5255AE52D09188EEF7679A5188C18 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 12));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T12>)
	const uint32_t SizeOf_UniTask_1_tCE8E4467DFCBF7AC319E6C39E57AC1FB73C610B1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 13));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T13>)
	const uint32_t SizeOf_UniTask_1_tC598B022FEC4C677BFBDA2616B56B83D9D5CE6D2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 14));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T14>)
	const uint32_t SizeOf_UniTask_1_t52C4A7DD05030C32316523BC04A517B16E8F16F7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 15));
	// sizeof(System.ValueTuple`1<Cysharp.Threading.Tasks.UniTask`1<T15>>)
	const uint32_t SizeOf_ValueTuple_1_t53701223E82530E6070D7CD654C48521895416CE = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 16));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T15>)
	const uint32_t SizeOf_UniTask_1_t42472467DAC029DF7941DA3253FFCF7E8320780A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 17));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.ValueTuple`8<T1,T2,T3,T4,T5,T6,T7,System.ValueTuple`8<T8,T9,T10,T11,T12,T13,T14,System.ValueTuple`1<T15>>>>)
	const uint32_t SizeOf_Awaiter_tD98687D2E62CAA2ED4950C9D921DF038D8C3686D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 21));
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.ValueTuple`8<T1,T2,T3,T4,T5,T6,T7,System.ValueTuple`8<T8,T9,T10,T11,T12,T13,T14,System.ValueTuple`1<T15>>>>
	const Awaiter_t3CC599DC0B3CBC307FEA3D25F68C8B6D2426FBA3 L_40 = alloca(SizeOf_Awaiter_tD98687D2E62CAA2ED4950C9D921DF038D8C3686D);
	// Cysharp.Threading.Tasks.UniTask`1<T1>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_1 = alloca(SizeOf_UniTask_1_t016A4FDB20AD85B488874A84971619F6E4857A94);
	// Cysharp.Threading.Tasks.UniTask`1<T2>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_3 = alloca(SizeOf_UniTask_1_t7FD30C669B57B5B3E3BAA97970FE93DDC0A08A32);
	// Cysharp.Threading.Tasks.UniTask`1<T3>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_5 = alloca(SizeOf_UniTask_1_tB0F06DF8E62DD78F79BA4FE9B85E08D7AE64A879);
	// Cysharp.Threading.Tasks.UniTask`1<T4>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_7 = alloca(SizeOf_UniTask_1_t0037641C4B0E3255911F7532BB62C24602A92C76);
	// Cysharp.Threading.Tasks.UniTask`1<T5>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_9 = alloca(SizeOf_UniTask_1_tCF49CA29D84F54BCBB3385B7ADDD2862A52D24C8);
	// Cysharp.Threading.Tasks.UniTask`1<T6>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_11 = alloca(SizeOf_UniTask_1_t41AA612E98E96AE0BDD07BB5D53FD879FB6B1631);
	// Cysharp.Threading.Tasks.UniTask`1<T7>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_13 = alloca(SizeOf_UniTask_1_tD7EF94CE69830E2CEECA05F46DE1D6738B216256);
	// Cysharp.Threading.Tasks.UniTask`1<T8>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_16 = alloca(SizeOf_UniTask_1_t8451CF79178765EDB595777C0B8B8DEBF2A23182);
	// Cysharp.Threading.Tasks.UniTask`1<T9>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_19 = alloca(SizeOf_UniTask_1_tC288D8B57D9567DCD88C165E7379386B07506430);
	// Cysharp.Threading.Tasks.UniTask`1<T10>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_22 = alloca(SizeOf_UniTask_1_t0FEC4A117635B6C7EB680BDB0EE1AB9BAD4C3C52);
	// Cysharp.Threading.Tasks.UniTask`1<T11>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_25 = alloca(SizeOf_UniTask_1_tC032F67028D5255AE52D09188EEF7679A5188C18);
	// Cysharp.Threading.Tasks.UniTask`1<T12>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_28 = alloca(SizeOf_UniTask_1_tCE8E4467DFCBF7AC319E6C39E57AC1FB73C610B1);
	// Cysharp.Threading.Tasks.UniTask`1<T13>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_31 = alloca(SizeOf_UniTask_1_tC598B022FEC4C677BFBDA2616B56B83D9D5CE6D2);
	// Cysharp.Threading.Tasks.UniTask`1<T14>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_34 = alloca(SizeOf_UniTask_1_t52C4A7DD05030C32316523BC04A517B16E8F16F7);
	// Cysharp.Threading.Tasks.UniTask`1<T15>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_38 = alloca(SizeOf_UniTask_1_t42472467DAC029DF7941DA3253FFCF7E8320780A);
	// Cysharp.Threading.Tasks.UniTask`1<System.ValueTuple`8<T1,T2,T3,T4,T5,T6,T7,System.ValueTuple`8<T8,T9,T10,T11,T12,T13,T14,System.ValueTuple`1<T15>>>>
	const UniTask_1_t7A87942A5431B0056DDDB575051CDA4D4FCDB4BB L_39 = alloca(SizeOf_UniTask_1_t33A651AB13A95830DA1FFD8D547149FF784B6B48);
	// System.ValueTuple`1<Cysharp.Threading.Tasks.UniTask`1<T15>>
	const ValueTuple_1_t3C5AD8484980F404DA084500FB7694D3646BFCAC L_37 = alloca(SizeOf_ValueTuple_1_t53701223E82530E6070D7CD654C48521895416CE);
	// System.ValueTuple`8<Cysharp.Threading.Tasks.UniTask`1<T1>,Cysharp.Threading.Tasks.UniTask`1<T2>,Cysharp.Threading.Tasks.UniTask`1<T3>,Cysharp.Threading.Tasks.UniTask`1<T4>,Cysharp.Threading.Tasks.UniTask`1<T5>,Cysharp.Threading.Tasks.UniTask`1<T6>,Cysharp.Threading.Tasks.UniTask`1<T7>,System.ValueTuple`8<Cysharp.Threading.Tasks.UniTask`1<T8>,Cysharp.Threading.Tasks.UniTask`1<T9>,Cysharp.Threading.Tasks.UniTask`1<T10>,Cysharp.Threading.Tasks.UniTask`1<T11>,Cysharp.Threading.Tasks.UniTask`1<T12>,Cysharp.Threading.Tasks.UniTask`1<T13>,Cysharp.Threading.Tasks.UniTask`1<T14>,System.ValueTuple`1<Cysharp.Threading.Tasks.UniTask`1<T15>>>>
	const ValueTuple_8_t84FD1EA209F6096BE6BEAC5622F14D5E62346284 L_0 = alloca(SizeOf_ValueTuple_8_t751692B7036B3465D5D0E52FD5AD94213ADDA3D8);
	const ValueTuple_8_t84FD1EA209F6096BE6BEAC5622F14D5E62346284 L_2 = alloca(SizeOf_ValueTuple_8_t751692B7036B3465D5D0E52FD5AD94213ADDA3D8);
	const ValueTuple_8_t84FD1EA209F6096BE6BEAC5622F14D5E62346284 L_4 = alloca(SizeOf_ValueTuple_8_t751692B7036B3465D5D0E52FD5AD94213ADDA3D8);
	const ValueTuple_8_t84FD1EA209F6096BE6BEAC5622F14D5E62346284 L_6 = alloca(SizeOf_ValueTuple_8_t751692B7036B3465D5D0E52FD5AD94213ADDA3D8);
	const ValueTuple_8_t84FD1EA209F6096BE6BEAC5622F14D5E62346284 L_8 = alloca(SizeOf_ValueTuple_8_t751692B7036B3465D5D0E52FD5AD94213ADDA3D8);
	const ValueTuple_8_t84FD1EA209F6096BE6BEAC5622F14D5E62346284 L_10 = alloca(SizeOf_ValueTuple_8_t751692B7036B3465D5D0E52FD5AD94213ADDA3D8);
	const ValueTuple_8_t84FD1EA209F6096BE6BEAC5622F14D5E62346284 L_12 = alloca(SizeOf_ValueTuple_8_t751692B7036B3465D5D0E52FD5AD94213ADDA3D8);
	const ValueTuple_8_t84FD1EA209F6096BE6BEAC5622F14D5E62346284 L_14 = alloca(SizeOf_ValueTuple_8_t751692B7036B3465D5D0E52FD5AD94213ADDA3D8);
	const ValueTuple_8_t84FD1EA209F6096BE6BEAC5622F14D5E62346284 L_17 = alloca(SizeOf_ValueTuple_8_t751692B7036B3465D5D0E52FD5AD94213ADDA3D8);
	const ValueTuple_8_t84FD1EA209F6096BE6BEAC5622F14D5E62346284 L_20 = alloca(SizeOf_ValueTuple_8_t751692B7036B3465D5D0E52FD5AD94213ADDA3D8);
	const ValueTuple_8_t84FD1EA209F6096BE6BEAC5622F14D5E62346284 L_23 = alloca(SizeOf_ValueTuple_8_t751692B7036B3465D5D0E52FD5AD94213ADDA3D8);
	const ValueTuple_8_t84FD1EA209F6096BE6BEAC5622F14D5E62346284 L_26 = alloca(SizeOf_ValueTuple_8_t751692B7036B3465D5D0E52FD5AD94213ADDA3D8);
	const ValueTuple_8_t84FD1EA209F6096BE6BEAC5622F14D5E62346284 L_29 = alloca(SizeOf_ValueTuple_8_t751692B7036B3465D5D0E52FD5AD94213ADDA3D8);
	const ValueTuple_8_t84FD1EA209F6096BE6BEAC5622F14D5E62346284 L_32 = alloca(SizeOf_ValueTuple_8_t751692B7036B3465D5D0E52FD5AD94213ADDA3D8);
	const ValueTuple_8_t84FD1EA209F6096BE6BEAC5622F14D5E62346284 L_35 = alloca(SizeOf_ValueTuple_8_t751692B7036B3465D5D0E52FD5AD94213ADDA3D8);
	// System.ValueTuple`8<Cysharp.Threading.Tasks.UniTask`1<T8>,Cysharp.Threading.Tasks.UniTask`1<T9>,Cysharp.Threading.Tasks.UniTask`1<T10>,Cysharp.Threading.Tasks.UniTask`1<T11>,Cysharp.Threading.Tasks.UniTask`1<T12>,Cysharp.Threading.Tasks.UniTask`1<T13>,Cysharp.Threading.Tasks.UniTask`1<T14>,System.ValueTuple`1<Cysharp.Threading.Tasks.UniTask`1<T15>>>
	const ValueTuple_8_tA0E93F1D201CFFDBBAE20066F95A32392233A8F8 L_15 = alloca(SizeOf_ValueTuple_8_t0299716852892566A952CA084998E81BAB4E1EF9);
	const ValueTuple_8_tA0E93F1D201CFFDBBAE20066F95A32392233A8F8 L_18 = alloca(SizeOf_ValueTuple_8_t0299716852892566A952CA084998E81BAB4E1EF9);
	const ValueTuple_8_tA0E93F1D201CFFDBBAE20066F95A32392233A8F8 L_21 = alloca(SizeOf_ValueTuple_8_t0299716852892566A952CA084998E81BAB4E1EF9);
	const ValueTuple_8_tA0E93F1D201CFFDBBAE20066F95A32392233A8F8 L_24 = alloca(SizeOf_ValueTuple_8_t0299716852892566A952CA084998E81BAB4E1EF9);
	const ValueTuple_8_tA0E93F1D201CFFDBBAE20066F95A32392233A8F8 L_27 = alloca(SizeOf_ValueTuple_8_t0299716852892566A952CA084998E81BAB4E1EF9);
	const ValueTuple_8_tA0E93F1D201CFFDBBAE20066F95A32392233A8F8 L_30 = alloca(SizeOf_ValueTuple_8_t0299716852892566A952CA084998E81BAB4E1EF9);
	const ValueTuple_8_tA0E93F1D201CFFDBBAE20066F95A32392233A8F8 L_33 = alloca(SizeOf_ValueTuple_8_t0299716852892566A952CA084998E81BAB4E1EF9);
	const ValueTuple_8_tA0E93F1D201CFFDBBAE20066F95A32392233A8F8 L_36 = alloca(SizeOf_ValueTuple_8_t0299716852892566A952CA084998E81BAB4E1EF9);
	UniTask_1_t7A87942A5431B0056DDDB575051CDA4D4FCDB4BB V_0 = alloca(SizeOf_UniTask_1_t33A651AB13A95830DA1FFD8D547149FF784B6B48);
	memset(V_0, 0, SizeOf_UniTask_1_t33A651AB13A95830DA1FFD8D547149FF784B6B48);
	{
		// return UniTask.WhenAll(tasks.Item1, tasks.Item2, tasks.Item3, tasks.Item4, tasks.Item5, tasks.Item6, tasks.Item7, tasks.Item8, tasks.Item9, tasks.Item10, tasks.Item11, tasks.Item12, tasks.Item13, tasks.Item14, tasks.Item15).GetAwaiter();
		il2cpp_codegen_memcpy(L_0, ___0_tasks, SizeOf_ValueTuple_8_t751692B7036B3465D5D0E52FD5AD94213ADDA3D8);
		il2cpp_codegen_memcpy(L_1, il2cpp_codegen_get_instance_field_data_pointer(L_0, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),0)), SizeOf_UniTask_1_t016A4FDB20AD85B488874A84971619F6E4857A94);
		il2cpp_codegen_memcpy(L_2, ___0_tasks, SizeOf_ValueTuple_8_t751692B7036B3465D5D0E52FD5AD94213ADDA3D8);
		il2cpp_codegen_memcpy(L_3, il2cpp_codegen_get_instance_field_data_pointer(L_2, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),1)), SizeOf_UniTask_1_t7FD30C669B57B5B3E3BAA97970FE93DDC0A08A32);
		il2cpp_codegen_memcpy(L_4, ___0_tasks, SizeOf_ValueTuple_8_t751692B7036B3465D5D0E52FD5AD94213ADDA3D8);
		il2cpp_codegen_memcpy(L_5, il2cpp_codegen_get_instance_field_data_pointer(L_4, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),2)), SizeOf_UniTask_1_tB0F06DF8E62DD78F79BA4FE9B85E08D7AE64A879);
		il2cpp_codegen_memcpy(L_6, ___0_tasks, SizeOf_ValueTuple_8_t751692B7036B3465D5D0E52FD5AD94213ADDA3D8);
		il2cpp_codegen_memcpy(L_7, il2cpp_codegen_get_instance_field_data_pointer(L_6, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),3)), SizeOf_UniTask_1_t0037641C4B0E3255911F7532BB62C24602A92C76);
		il2cpp_codegen_memcpy(L_8, ___0_tasks, SizeOf_ValueTuple_8_t751692B7036B3465D5D0E52FD5AD94213ADDA3D8);
		il2cpp_codegen_memcpy(L_9, il2cpp_codegen_get_instance_field_data_pointer(L_8, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),4)), SizeOf_UniTask_1_tCF49CA29D84F54BCBB3385B7ADDD2862A52D24C8);
		il2cpp_codegen_memcpy(L_10, ___0_tasks, SizeOf_ValueTuple_8_t751692B7036B3465D5D0E52FD5AD94213ADDA3D8);
		il2cpp_codegen_memcpy(L_11, il2cpp_codegen_get_instance_field_data_pointer(L_10, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),5)), SizeOf_UniTask_1_t41AA612E98E96AE0BDD07BB5D53FD879FB6B1631);
		il2cpp_codegen_memcpy(L_12, ___0_tasks, SizeOf_ValueTuple_8_t751692B7036B3465D5D0E52FD5AD94213ADDA3D8);
		il2cpp_codegen_memcpy(L_13, il2cpp_codegen_get_instance_field_data_pointer(L_12, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),6)), SizeOf_UniTask_1_tD7EF94CE69830E2CEECA05F46DE1D6738B216256);
		il2cpp_codegen_memcpy(L_14, ___0_tasks, SizeOf_ValueTuple_8_t751692B7036B3465D5D0E52FD5AD94213ADDA3D8);
		il2cpp_codegen_memcpy(L_15, il2cpp_codegen_get_instance_field_data_pointer(L_14, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),7)), SizeOf_ValueTuple_8_t0299716852892566A952CA084998E81BAB4E1EF9);
		il2cpp_codegen_memcpy(L_16, il2cpp_codegen_get_instance_field_data_pointer(L_15, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 8),0)), SizeOf_UniTask_1_t8451CF79178765EDB595777C0B8B8DEBF2A23182);
		il2cpp_codegen_memcpy(L_17, ___0_tasks, SizeOf_ValueTuple_8_t751692B7036B3465D5D0E52FD5AD94213ADDA3D8);
		il2cpp_codegen_memcpy(L_18, il2cpp_codegen_get_instance_field_data_pointer(L_17, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),7)), SizeOf_ValueTuple_8_t0299716852892566A952CA084998E81BAB4E1EF9);
		il2cpp_codegen_memcpy(L_19, il2cpp_codegen_get_instance_field_data_pointer(L_18, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 8),1)), SizeOf_UniTask_1_tC288D8B57D9567DCD88C165E7379386B07506430);
		il2cpp_codegen_memcpy(L_20, ___0_tasks, SizeOf_ValueTuple_8_t751692B7036B3465D5D0E52FD5AD94213ADDA3D8);
		il2cpp_codegen_memcpy(L_21, il2cpp_codegen_get_instance_field_data_pointer(L_20, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),7)), SizeOf_ValueTuple_8_t0299716852892566A952CA084998E81BAB4E1EF9);
		il2cpp_codegen_memcpy(L_22, il2cpp_codegen_get_instance_field_data_pointer(L_21, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 8),2)), SizeOf_UniTask_1_t0FEC4A117635B6C7EB680BDB0EE1AB9BAD4C3C52);
		il2cpp_codegen_memcpy(L_23, ___0_tasks, SizeOf_ValueTuple_8_t751692B7036B3465D5D0E52FD5AD94213ADDA3D8);
		il2cpp_codegen_memcpy(L_24, il2cpp_codegen_get_instance_field_data_pointer(L_23, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),7)), SizeOf_ValueTuple_8_t0299716852892566A952CA084998E81BAB4E1EF9);
		il2cpp_codegen_memcpy(L_25, il2cpp_codegen_get_instance_field_data_pointer(L_24, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 8),3)), SizeOf_UniTask_1_tC032F67028D5255AE52D09188EEF7679A5188C18);
		il2cpp_codegen_memcpy(L_26, ___0_tasks, SizeOf_ValueTuple_8_t751692B7036B3465D5D0E52FD5AD94213ADDA3D8);
		il2cpp_codegen_memcpy(L_27, il2cpp_codegen_get_instance_field_data_pointer(L_26, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),7)), SizeOf_ValueTuple_8_t0299716852892566A952CA084998E81BAB4E1EF9);
		il2cpp_codegen_memcpy(L_28, il2cpp_codegen_get_instance_field_data_pointer(L_27, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 8),4)), SizeOf_UniTask_1_tCE8E4467DFCBF7AC319E6C39E57AC1FB73C610B1);
		il2cpp_codegen_memcpy(L_29, ___0_tasks, SizeOf_ValueTuple_8_t751692B7036B3465D5D0E52FD5AD94213ADDA3D8);
		il2cpp_codegen_memcpy(L_30, il2cpp_codegen_get_instance_field_data_pointer(L_29, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),7)), SizeOf_ValueTuple_8_t0299716852892566A952CA084998E81BAB4E1EF9);
		il2cpp_codegen_memcpy(L_31, il2cpp_codegen_get_instance_field_data_pointer(L_30, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 8),5)), SizeOf_UniTask_1_tC598B022FEC4C677BFBDA2616B56B83D9D5CE6D2);
		il2cpp_codegen_memcpy(L_32, ___0_tasks, SizeOf_ValueTuple_8_t751692B7036B3465D5D0E52FD5AD94213ADDA3D8);
		il2cpp_codegen_memcpy(L_33, il2cpp_codegen_get_instance_field_data_pointer(L_32, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),7)), SizeOf_ValueTuple_8_t0299716852892566A952CA084998E81BAB4E1EF9);
		il2cpp_codegen_memcpy(L_34, il2cpp_codegen_get_instance_field_data_pointer(L_33, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 8),6)), SizeOf_UniTask_1_t52C4A7DD05030C32316523BC04A517B16E8F16F7);
		il2cpp_codegen_memcpy(L_35, ___0_tasks, SizeOf_ValueTuple_8_t751692B7036B3465D5D0E52FD5AD94213ADDA3D8);
		il2cpp_codegen_memcpy(L_36, il2cpp_codegen_get_instance_field_data_pointer(L_35, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),7)), SizeOf_ValueTuple_8_t0299716852892566A952CA084998E81BAB4E1EF9);
		il2cpp_codegen_memcpy(L_37, il2cpp_codegen_get_instance_field_data_pointer(L_36, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 8),7)), SizeOf_ValueTuple_1_t53701223E82530E6070D7CD654C48521895416CE);
		il2cpp_codegen_memcpy(L_38, il2cpp_codegen_get_instance_field_data_pointer(L_37, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 16),0)), SizeOf_UniTask_1_t42472467DAC029DF7941DA3253FFCF7E8320780A);
		il2cpp_codegen_runtime_class_init_inline(UniTask_t8E1453C1D8424B1FC22B0E51B017D3B028E17270_il2cpp_TypeInfo_var);
		InvokerActionInvoker16< UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483, UniTask_1_t7A87942A5431B0056DDDB575051CDA4D4FCDB4BB* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 18)), il2cpp_rgctx_method(method->rgctx_data, 18), NULL, L_1, L_3, L_5, L_7, L_9, L_11, L_13, L_16, L_19, L_22, L_25, L_28, L_31, L_34, L_38, (UniTask_1_t7A87942A5431B0056DDDB575051CDA4D4FCDB4BB*)L_39);
		il2cpp_codegen_memcpy(V_0, L_39, SizeOf_UniTask_1_t33A651AB13A95830DA1FFD8D547149FF784B6B48);
		InvokerActionInvoker1< Awaiter_t3CC599DC0B3CBC307FEA3D25F68C8B6D2426FBA3* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 20)), il2cpp_rgctx_method(method->rgctx_data, 20), (UniTask_1_t7A87942A5431B0056DDDB575051CDA4D4FCDB4BB*)V_0, (Awaiter_t3CC599DC0B3CBC307FEA3D25F68C8B6D2426FBA3*)L_40);
		il2cpp_codegen_memcpy(il2cppRetVal, L_40, SizeOf_Awaiter_tD98687D2E62CAA2ED4950C9D921DF038D8C3686D);
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<T> Cysharp.Threading.Tasks.UniTaskExtensions::Timeout<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(Cysharp.Threading.Tasks.UniTask`1<T>,System.TimeSpan,Cysharp.Threading.Tasks.DelayType,Cysharp.Threading.Tasks.PlayerLoopTiming,System.Threading.CancellationTokenSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniTaskExtensions_Timeout_TisIl2CppFullySharedGenericAny_m6CF9B31567B13B5B66BDA3519D6D67EDD00D88E9_gshared (/*Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 ___0_task, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___1_timeout, int32_t ___2_delayType, int32_t ___3_timeoutCheckTiming, CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___4_taskCancellationTokenSource, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(Cysharp.Threading.Tasks.UniTaskExtensions/<Timeout>d__13`1<T>)
	const uint32_t SizeOf_U3CTimeoutU3Ed__13_1_t22ACB8A4F94B3BFFA5FBC885B88E4DE35FDD5A19 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	// sizeof(Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<T>)
	const uint32_t SizeOf_AsyncUniTaskMethodBuilder_1_t9D36B9BD111D4912B5B666D62E115920958A04EF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T>)
	const uint32_t SizeOf_UniTask_1_t088E0F248EF9D3A28FE8A47F3C2C822EF74F6BB3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 4));
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<T>
	const AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52 L_0 = alloca(SizeOf_AsyncUniTaskMethodBuilder_1_t9D36B9BD111D4912B5B666D62E115920958A04EF);
	// Cysharp.Threading.Tasks.UniTask`1<T>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_1 = alloca(SizeOf_UniTask_1_t088E0F248EF9D3A28FE8A47F3C2C822EF74F6BB3);
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_6 = alloca(SizeOf_UniTask_1_t088E0F248EF9D3A28FE8A47F3C2C822EF74F6BB3);
	U3CTimeoutU3Ed__13_1_tE2FDC8F07C2AEEBCDECBE8376F3D77793EDDAFFE V_0 = alloca(SizeOf_U3CTimeoutU3Ed__13_1_t22ACB8A4F94B3BFFA5FBC885B88E4DE35FDD5A19);
	memset(V_0, 0, SizeOf_U3CTimeoutU3Ed__13_1_t22ACB8A4F94B3BFFA5FBC885B88E4DE35FDD5A19);
	{
		InvokerActionInvoker1< AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)L_0);
		il2cpp_codegen_write_instance_field_data((U3CTimeoutU3Ed__13_1_tE2FDC8F07C2AEEBCDECBE8376F3D77793EDDAFFE*)V_0, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 3),1), L_0, SizeOf_AsyncUniTaskMethodBuilder_1_t9D36B9BD111D4912B5B666D62E115920958A04EF);
		il2cpp_codegen_memcpy(L_1, ___0_task, SizeOf_UniTask_1_t088E0F248EF9D3A28FE8A47F3C2C822EF74F6BB3);
		il2cpp_codegen_write_instance_field_data((U3CTimeoutU3Ed__13_1_tE2FDC8F07C2AEEBCDECBE8376F3D77793EDDAFFE*)V_0, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 3),5), L_1, SizeOf_UniTask_1_t088E0F248EF9D3A28FE8A47F3C2C822EF74F6BB3);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_2 = ___1_timeout;
		il2cpp_codegen_write_instance_field_data<TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A>((U3CTimeoutU3Ed__13_1_tE2FDC8F07C2AEEBCDECBE8376F3D77793EDDAFFE*)V_0, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 3),2), L_2);
		int32_t L_3 = ___2_delayType;
		il2cpp_codegen_write_instance_field_data<int32_t>((U3CTimeoutU3Ed__13_1_tE2FDC8F07C2AEEBCDECBE8376F3D77793EDDAFFE*)V_0, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 3),3), L_3);
		int32_t L_4 = ___3_timeoutCheckTiming;
		il2cpp_codegen_write_instance_field_data<int32_t>((U3CTimeoutU3Ed__13_1_tE2FDC8F07C2AEEBCDECBE8376F3D77793EDDAFFE*)V_0, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 3),4), L_4);
		CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* L_5 = ___4_taskCancellationTokenSource;
		il2cpp_codegen_write_instance_field_data<CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B*>((U3CTimeoutU3Ed__13_1_tE2FDC8F07C2AEEBCDECBE8376F3D77793EDDAFFE*)V_0, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 3),6), L_5);
		il2cpp_codegen_write_instance_field_data<int32_t>((U3CTimeoutU3Ed__13_1_tE2FDC8F07C2AEEBCDECBE8376F3D77793EDDAFFE*)V_0, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 3),0), (-1));
		InvokerActionInvoker1< U3CTimeoutU3Ed__13_1_tE2FDC8F07C2AEEBCDECBE8376F3D77793EDDAFFE* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)), il2cpp_rgctx_method(method->rgctx_data, 5), (((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer((U3CTimeoutU3Ed__13_1_tE2FDC8F07C2AEEBCDECBE8376F3D77793EDDAFFE*)V_0, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 3),1)))), (U3CTimeoutU3Ed__13_1_tE2FDC8F07C2AEEBCDECBE8376F3D77793EDDAFFE*)V_0);
		InvokerActionInvoker1< UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)), il2cpp_rgctx_method(method->rgctx_data, 7), (((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer((U3CTimeoutU3Ed__13_1_tE2FDC8F07C2AEEBCDECBE8376F3D77793EDDAFFE*)V_0, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 3),1)))), (UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)L_6);
		il2cpp_codegen_memcpy(il2cppRetVal, L_6, SizeOf_UniTask_1_t088E0F248EF9D3A28FE8A47F3C2C822EF74F6BB3);
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<System.ValueTuple`2<System.Boolean,T>> Cysharp.Threading.Tasks.UniTaskExtensions::TimeoutWithoutException<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(Cysharp.Threading.Tasks.UniTask`1<T>,System.TimeSpan,Cysharp.Threading.Tasks.DelayType,Cysharp.Threading.Tasks.PlayerLoopTiming,System.Threading.CancellationTokenSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniTaskExtensions_TimeoutWithoutException_TisIl2CppFullySharedGenericAny_mEB63C5A965C704CD6C03B368B3E203EA6D07E270_gshared (/*Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 ___0_task, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___1_timeout, int32_t ___2_delayType, int32_t ___3_timeoutCheckTiming, CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___4_taskCancellationTokenSource, UniTask_1_t387FB0897972BB6422F90203945206E0112C6DD1* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(Cysharp.Threading.Tasks.UniTaskExtensions/<TimeoutWithoutException>d__15`1<T>)
	const uint32_t SizeOf_U3CTimeoutWithoutExceptionU3Ed__15_1_t66056ADEB277C7FA19BFCFE8CBF5AE474E6FE354 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	// sizeof(Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.ValueTuple`2<System.Boolean,T>>)
	const uint32_t SizeOf_AsyncUniTaskMethodBuilder_1_t02E4B70075EC1F71D133179BDBC3B6E58391F5E7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T>)
	const uint32_t SizeOf_UniTask_1_t3556FB82580D09E1CA4135E6ED809F48C1841F6A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 4));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<System.ValueTuple`2<System.Boolean,T>>)
	const uint32_t SizeOf_UniTask_1_t5A9F52D268D3DF153669585F51193A78835742A2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 8));
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.ValueTuple`2<System.Boolean,T>>
	const AsyncUniTaskMethodBuilder_1_tB2A8D29BB76360834EF9DF1BD72AE5EEB849BA7F L_0 = alloca(SizeOf_AsyncUniTaskMethodBuilder_1_t02E4B70075EC1F71D133179BDBC3B6E58391F5E7);
	// Cysharp.Threading.Tasks.UniTask`1<T>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_1 = alloca(SizeOf_UniTask_1_t3556FB82580D09E1CA4135E6ED809F48C1841F6A);
	// Cysharp.Threading.Tasks.UniTask`1<System.ValueTuple`2<System.Boolean,T>>
	const UniTask_1_t387FB0897972BB6422F90203945206E0112C6DD1 L_6 = alloca(SizeOf_UniTask_1_t5A9F52D268D3DF153669585F51193A78835742A2);
	U3CTimeoutWithoutExceptionU3Ed__15_1_t25E59C1AA10DBFBFFA14A406B9FAA091072DEBF0 V_0 = alloca(SizeOf_U3CTimeoutWithoutExceptionU3Ed__15_1_t66056ADEB277C7FA19BFCFE8CBF5AE474E6FE354);
	memset(V_0, 0, SizeOf_U3CTimeoutWithoutExceptionU3Ed__15_1_t66056ADEB277C7FA19BFCFE8CBF5AE474E6FE354);
	{
		InvokerActionInvoker1< AsyncUniTaskMethodBuilder_1_tB2A8D29BB76360834EF9DF1BD72AE5EEB849BA7F* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, (AsyncUniTaskMethodBuilder_1_tB2A8D29BB76360834EF9DF1BD72AE5EEB849BA7F*)L_0);
		il2cpp_codegen_write_instance_field_data((U3CTimeoutWithoutExceptionU3Ed__15_1_t25E59C1AA10DBFBFFA14A406B9FAA091072DEBF0*)V_0, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 3),1), L_0, SizeOf_AsyncUniTaskMethodBuilder_1_t02E4B70075EC1F71D133179BDBC3B6E58391F5E7);
		il2cpp_codegen_memcpy(L_1, ___0_task, SizeOf_UniTask_1_t3556FB82580D09E1CA4135E6ED809F48C1841F6A);
		il2cpp_codegen_write_instance_field_data((U3CTimeoutWithoutExceptionU3Ed__15_1_t25E59C1AA10DBFBFFA14A406B9FAA091072DEBF0*)V_0, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 3),5), L_1, SizeOf_UniTask_1_t3556FB82580D09E1CA4135E6ED809F48C1841F6A);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_2 = ___1_timeout;
		il2cpp_codegen_write_instance_field_data<TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A>((U3CTimeoutWithoutExceptionU3Ed__15_1_t25E59C1AA10DBFBFFA14A406B9FAA091072DEBF0*)V_0, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 3),2), L_2);
		int32_t L_3 = ___2_delayType;
		il2cpp_codegen_write_instance_field_data<int32_t>((U3CTimeoutWithoutExceptionU3Ed__15_1_t25E59C1AA10DBFBFFA14A406B9FAA091072DEBF0*)V_0, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 3),3), L_3);
		int32_t L_4 = ___3_timeoutCheckTiming;
		il2cpp_codegen_write_instance_field_data<int32_t>((U3CTimeoutWithoutExceptionU3Ed__15_1_t25E59C1AA10DBFBFFA14A406B9FAA091072DEBF0*)V_0, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 3),4), L_4);
		CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* L_5 = ___4_taskCancellationTokenSource;
		il2cpp_codegen_write_instance_field_data<CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B*>((U3CTimeoutWithoutExceptionU3Ed__15_1_t25E59C1AA10DBFBFFA14A406B9FAA091072DEBF0*)V_0, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 3),6), L_5);
		il2cpp_codegen_write_instance_field_data<int32_t>((U3CTimeoutWithoutExceptionU3Ed__15_1_t25E59C1AA10DBFBFFA14A406B9FAA091072DEBF0*)V_0, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 3),0), (-1));
		InvokerActionInvoker1< U3CTimeoutWithoutExceptionU3Ed__15_1_t25E59C1AA10DBFBFFA14A406B9FAA091072DEBF0* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)), il2cpp_rgctx_method(method->rgctx_data, 5), (((AsyncUniTaskMethodBuilder_1_tB2A8D29BB76360834EF9DF1BD72AE5EEB849BA7F*)il2cpp_codegen_get_instance_field_data_pointer((U3CTimeoutWithoutExceptionU3Ed__15_1_t25E59C1AA10DBFBFFA14A406B9FAA091072DEBF0*)V_0, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 3),1)))), (U3CTimeoutWithoutExceptionU3Ed__15_1_t25E59C1AA10DBFBFFA14A406B9FAA091072DEBF0*)V_0);
		InvokerActionInvoker1< UniTask_1_t387FB0897972BB6422F90203945206E0112C6DD1* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)), il2cpp_rgctx_method(method->rgctx_data, 7), (((AsyncUniTaskMethodBuilder_1_tB2A8D29BB76360834EF9DF1BD72AE5EEB849BA7F*)il2cpp_codegen_get_instance_field_data_pointer((U3CTimeoutWithoutExceptionU3Ed__15_1_t25E59C1AA10DBFBFFA14A406B9FAA091072DEBF0*)V_0, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 3),1)))), (UniTask_1_t387FB0897972BB6422F90203945206E0112C6DD1*)L_6);
		il2cpp_codegen_memcpy(il2cppRetVal, L_6, SizeOf_UniTask_1_t5A9F52D268D3DF153669585F51193A78835742A2);
		return;
	}
}
// Cysharp.Threading.Tasks.AsyncLazy`1<T> Cysharp.Threading.Tasks.UniTaskExtensions::ToAsyncLazy<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(Cysharp.Threading.Tasks.UniTask`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncLazy_1_t87351A911AC23F97600D7159986DFE3B30044433* UniTaskExtensions_ToAsyncLazy_TisIl2CppFullySharedGenericAny_mEA12BA5ECF03B3FA92E95109B28BE605DAC0FE8E_gshared (/*Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 ___0_task, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T>)
	const uint32_t SizeOf_UniTask_1_tB2845349CF03DE5EF243673CADF39EA3903B75B6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// Cysharp.Threading.Tasks.UniTask`1<T>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_0 = alloca(SizeOf_UniTask_1_tB2845349CF03DE5EF243673CADF39EA3903B75B6);
	{
		// return new AsyncLazy<T>(task);
		il2cpp_codegen_memcpy(L_0, ___0_task, SizeOf_UniTask_1_tB2845349CF03DE5EF243673CADF39EA3903B75B6);
		AsyncLazy_1_t87351A911AC23F97600D7159986DFE3B30044433* L_1 = (AsyncLazy_1_t87351A911AC23F97600D7159986DFE3B30044433*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 1));
		NullCheck(L_1);
		InvokerActionInvoker1< UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), L_1, L_0);
		return L_1;
	}
}
// System.Collections.IEnumerator Cysharp.Threading.Tasks.UniTaskExtensions::ToCoroutine<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(Cysharp.Threading.Tasks.UniTask`1<T>,System.Action`1<T>,System.Action`1<System.Exception>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UniTaskExtensions_ToCoroutine_TisIl2CppFullySharedGenericAny_mC62070600AB92DA0B5A49F4455EA58C524FB35C9_gshared (/*Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 ___0_task, Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* ___1_resultHandler, Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* ___2_exceptionHandler, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T>)
	const uint32_t SizeOf_UniTask_1_tBC9DBCA29ED2E69F73E889D07520C81AF736D2B3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// Cysharp.Threading.Tasks.UniTask`1<T>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_0 = alloca(SizeOf_UniTask_1_tBC9DBCA29ED2E69F73E889D07520C81AF736D2B3);
	{
		// return new ToCoroutineEnumerator<T>(task, resultHandler, exceptionHandler);
		il2cpp_codegen_memcpy(L_0, ___0_task, SizeOf_UniTask_1_tBC9DBCA29ED2E69F73E889D07520C81AF736D2B3);
		Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* L_1 = ___1_resultHandler;
		Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* L_2 = ___2_exceptionHandler;
		ToCoroutineEnumerator_1_tF7712B7CF6F5EBE1FCA4B0CF74B0C4076BC1A40C* L_3 = (ToCoroutineEnumerator_1_tF7712B7CF6F5EBE1FCA4B0CF74B0C4076BC1A40C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 2));
		NullCheck(L_3);
		InvokerActionInvoker3< UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483, Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*, Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), L_3, L_0, L_1, L_2);
		return (RuntimeObject*)L_3;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<T> Cysharp.Threading.Tasks.UniTaskExtensions::Unwrap<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Threading.Tasks.Task`1<Cysharp.Threading.Tasks.UniTask`1<T>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniTaskExtensions_Unwrap_TisIl2CppFullySharedGenericAny_m9889E8B90A3E4EBBF60C9AB80B2D1BF64BEBCECE_gshared (/*System.Threading.Tasks.Task`1<Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>*/Task_1_tEEFAF6747CE41C77B985860193E36BC44BA345B3* ___0_task, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(Cysharp.Threading.Tasks.UniTaskExtensions/<Unwrap>d__32`1<T>)
	const uint32_t SizeOf_U3CUnwrapU3Ed__32_1_t8D2D35010ABCFDA2D27AB9B83B01AC684A6DD25F = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	// sizeof(Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<T>)
	const uint32_t SizeOf_AsyncUniTaskMethodBuilder_1_t5ED1DE6FCC52808C9BEFDA5127CEAA039A583458 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T>)
	const uint32_t SizeOf_UniTask_1_t8DDD5B88C1DDDC0F5E09FCE56B76B7250872EAC1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 8));
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<T>
	const AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52 L_0 = alloca(SizeOf_AsyncUniTaskMethodBuilder_1_t5ED1DE6FCC52808C9BEFDA5127CEAA039A583458);
	// Cysharp.Threading.Tasks.UniTask`1<T>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_2 = alloca(SizeOf_UniTask_1_t8DDD5B88C1DDDC0F5E09FCE56B76B7250872EAC1);
	U3CUnwrapU3Ed__32_1_tA86AE4AC3F09246D50A6DD450E1DBACE61FA6601 V_0 = alloca(SizeOf_U3CUnwrapU3Ed__32_1_t8D2D35010ABCFDA2D27AB9B83B01AC684A6DD25F);
	memset(V_0, 0, SizeOf_U3CUnwrapU3Ed__32_1_t8D2D35010ABCFDA2D27AB9B83B01AC684A6DD25F);
	{
		InvokerActionInvoker1< AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)L_0);
		il2cpp_codegen_write_instance_field_data((U3CUnwrapU3Ed__32_1_tA86AE4AC3F09246D50A6DD450E1DBACE61FA6601*)V_0, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 3),1), L_0, SizeOf_AsyncUniTaskMethodBuilder_1_t5ED1DE6FCC52808C9BEFDA5127CEAA039A583458);
		Task_1_tEEFAF6747CE41C77B985860193E36BC44BA345B3* L_1 = ___0_task;
		il2cpp_codegen_write_instance_field_data<Task_1_tEEFAF6747CE41C77B985860193E36BC44BA345B3*>((U3CUnwrapU3Ed__32_1_tA86AE4AC3F09246D50A6DD450E1DBACE61FA6601*)V_0, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 3),2), L_1);
		il2cpp_codegen_write_instance_field_data<int32_t>((U3CUnwrapU3Ed__32_1_tA86AE4AC3F09246D50A6DD450E1DBACE61FA6601*)V_0, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 3),0), (-1));
		InvokerActionInvoker1< U3CUnwrapU3Ed__32_1_tA86AE4AC3F09246D50A6DD450E1DBACE61FA6601* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)), il2cpp_rgctx_method(method->rgctx_data, 5), (((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer((U3CUnwrapU3Ed__32_1_tA86AE4AC3F09246D50A6DD450E1DBACE61FA6601*)V_0, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 3),1)))), (U3CUnwrapU3Ed__32_1_tA86AE4AC3F09246D50A6DD450E1DBACE61FA6601*)V_0);
		InvokerActionInvoker1< UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)), il2cpp_rgctx_method(method->rgctx_data, 7), (((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer((U3CUnwrapU3Ed__32_1_tA86AE4AC3F09246D50A6DD450E1DBACE61FA6601*)V_0, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 3),1)))), (UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)L_2);
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_UniTask_1_t8DDD5B88C1DDDC0F5E09FCE56B76B7250872EAC1);
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<T> Cysharp.Threading.Tasks.UniTaskExtensions::Unwrap<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(Cysharp.Threading.Tasks.UniTask`1<System.Threading.Tasks.Task`1<T>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniTaskExtensions_Unwrap_TisIl2CppFullySharedGenericAny_m13709CD38522DC865DE75A2B617B54BE21E42D31_gshared (UniTask_1_t15FB22B9C3B0D09E56C5B71B80853B5C804E6129 ___0_task, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(Cysharp.Threading.Tasks.UniTaskExtensions/<Unwrap>d__36`1<T>)
	const uint32_t SizeOf_U3CUnwrapU3Ed__36_1_t61BAA905E61C23E91C359F0F41B03A398DFFD29C = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	// sizeof(Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<T>)
	const uint32_t SizeOf_AsyncUniTaskMethodBuilder_1_tA6E56B56807939A82951D679096835E980894A79 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T>)
	const uint32_t SizeOf_UniTask_1_t84ADCE83A033FA829F53B0904839B2309498BD22 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 8));
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<T>
	const AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52 L_0 = alloca(SizeOf_AsyncUniTaskMethodBuilder_1_tA6E56B56807939A82951D679096835E980894A79);
	// Cysharp.Threading.Tasks.UniTask`1<T>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_2 = alloca(SizeOf_UniTask_1_t84ADCE83A033FA829F53B0904839B2309498BD22);
	U3CUnwrapU3Ed__36_1_t94BD850374D0028D81619FD72F885859DA706908 V_0 = alloca(SizeOf_U3CUnwrapU3Ed__36_1_t61BAA905E61C23E91C359F0F41B03A398DFFD29C);
	memset(V_0, 0, SizeOf_U3CUnwrapU3Ed__36_1_t61BAA905E61C23E91C359F0F41B03A398DFFD29C);
	{
		InvokerActionInvoker1< AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)L_0);
		il2cpp_codegen_write_instance_field_data((U3CUnwrapU3Ed__36_1_t94BD850374D0028D81619FD72F885859DA706908*)V_0, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 3),1), L_0, SizeOf_AsyncUniTaskMethodBuilder_1_tA6E56B56807939A82951D679096835E980894A79);
		UniTask_1_t15FB22B9C3B0D09E56C5B71B80853B5C804E6129 L_1 = ___0_task;
		il2cpp_codegen_write_instance_field_data<UniTask_1_t15FB22B9C3B0D09E56C5B71B80853B5C804E6129>((U3CUnwrapU3Ed__36_1_t94BD850374D0028D81619FD72F885859DA706908*)V_0, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 3),2), L_1);
		il2cpp_codegen_write_instance_field_data<int32_t>((U3CUnwrapU3Ed__36_1_t94BD850374D0028D81619FD72F885859DA706908*)V_0, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 3),0), (-1));
		InvokerActionInvoker1< U3CUnwrapU3Ed__36_1_t94BD850374D0028D81619FD72F885859DA706908* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)), il2cpp_rgctx_method(method->rgctx_data, 5), (((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer((U3CUnwrapU3Ed__36_1_t94BD850374D0028D81619FD72F885859DA706908*)V_0, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 3),1)))), (U3CUnwrapU3Ed__36_1_t94BD850374D0028D81619FD72F885859DA706908*)V_0);
		InvokerActionInvoker1< UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)), il2cpp_rgctx_method(method->rgctx_data, 7), (((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer((U3CUnwrapU3Ed__36_1_t94BD850374D0028D81619FD72F885859DA706908*)V_0, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 3),1)))), (UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)L_2);
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_UniTask_1_t84ADCE83A033FA829F53B0904839B2309498BD22);
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<T> Cysharp.Threading.Tasks.UniTaskExtensions::Unwrap<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(Cysharp.Threading.Tasks.UniTask`1<Cysharp.Threading.Tasks.UniTask`1<T>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniTaskExtensions_Unwrap_TisIl2CppFullySharedGenericAny_mCF473C959E4E009C5BF68C4378590FFD0D48C9AA_gshared (/*Cysharp.Threading.Tasks.UniTask`1<Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>*/UniTask_1_t7D499843FE81BE3D5F78B229C213562B90F79C90 ___0_task, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(Cysharp.Threading.Tasks.UniTaskExtensions/<Unwrap>d__30`1<T>)
	const uint32_t SizeOf_U3CUnwrapU3Ed__30_1_tE664EEB548D5F1539B23B8383C9F9FF004C4E058 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	// sizeof(Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<T>)
	const uint32_t SizeOf_AsyncUniTaskMethodBuilder_1_t4E64FC079825D5E75A225199E309EA79102FC1F2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<Cysharp.Threading.Tasks.UniTask`1<T>>)
	const uint32_t SizeOf_UniTask_1_tE85A436C2331736E26BC2D5B30DB824576C02DD6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 4));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T>)
	const uint32_t SizeOf_UniTask_1_t7418046ECAC61CD81BE058223EBF23EF2C8C0AC4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 8));
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<T>
	const AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52 L_0 = alloca(SizeOf_AsyncUniTaskMethodBuilder_1_t4E64FC079825D5E75A225199E309EA79102FC1F2);
	// Cysharp.Threading.Tasks.UniTask`1<T>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_2 = alloca(SizeOf_UniTask_1_t7418046ECAC61CD81BE058223EBF23EF2C8C0AC4);
	// Cysharp.Threading.Tasks.UniTask`1<Cysharp.Threading.Tasks.UniTask`1<T>>
	const UniTask_1_t7D499843FE81BE3D5F78B229C213562B90F79C90 L_1 = alloca(SizeOf_UniTask_1_tE85A436C2331736E26BC2D5B30DB824576C02DD6);
	U3CUnwrapU3Ed__30_1_t2E081C4A7BDF9089F5B0C40E66027ED3FDA6358B V_0 = alloca(SizeOf_U3CUnwrapU3Ed__30_1_tE664EEB548D5F1539B23B8383C9F9FF004C4E058);
	memset(V_0, 0, SizeOf_U3CUnwrapU3Ed__30_1_tE664EEB548D5F1539B23B8383C9F9FF004C4E058);
	{
		InvokerActionInvoker1< AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)L_0);
		il2cpp_codegen_write_instance_field_data((U3CUnwrapU3Ed__30_1_t2E081C4A7BDF9089F5B0C40E66027ED3FDA6358B*)V_0, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 3),1), L_0, SizeOf_AsyncUniTaskMethodBuilder_1_t4E64FC079825D5E75A225199E309EA79102FC1F2);
		il2cpp_codegen_memcpy(L_1, ___0_task, SizeOf_UniTask_1_tE85A436C2331736E26BC2D5B30DB824576C02DD6);
		il2cpp_codegen_write_instance_field_data((U3CUnwrapU3Ed__30_1_t2E081C4A7BDF9089F5B0C40E66027ED3FDA6358B*)V_0, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 3),2), L_1, SizeOf_UniTask_1_tE85A436C2331736E26BC2D5B30DB824576C02DD6);
		il2cpp_codegen_write_instance_field_data<int32_t>((U3CUnwrapU3Ed__30_1_t2E081C4A7BDF9089F5B0C40E66027ED3FDA6358B*)V_0, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 3),0), (-1));
		InvokerActionInvoker1< U3CUnwrapU3Ed__30_1_t2E081C4A7BDF9089F5B0C40E66027ED3FDA6358B* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)), il2cpp_rgctx_method(method->rgctx_data, 5), (((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer((U3CUnwrapU3Ed__30_1_t2E081C4A7BDF9089F5B0C40E66027ED3FDA6358B*)V_0, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 3),1)))), (U3CUnwrapU3Ed__30_1_t2E081C4A7BDF9089F5B0C40E66027ED3FDA6358B*)V_0);
		InvokerActionInvoker1< UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)), il2cpp_rgctx_method(method->rgctx_data, 7), (((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer((U3CUnwrapU3Ed__30_1_t2E081C4A7BDF9089F5B0C40E66027ED3FDA6358B*)V_0, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 3),1)))), (UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)L_2);
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_UniTask_1_t7418046ECAC61CD81BE058223EBF23EF2C8C0AC4);
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<T> Cysharp.Threading.Tasks.UniTaskExtensions::Unwrap<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Threading.Tasks.Task`1<Cysharp.Threading.Tasks.UniTask`1<T>>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniTaskExtensions_Unwrap_TisIl2CppFullySharedGenericAny_m47559BE31265AB18875D2121A24B544238EC8C3F_gshared (/*System.Threading.Tasks.Task`1<Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>*/Task_1_tEEFAF6747CE41C77B985860193E36BC44BA345B3* ___0_task, bool ___1_continueOnCapturedContext, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(Cysharp.Threading.Tasks.UniTaskExtensions/<Unwrap>d__33`1<T>)
	const uint32_t SizeOf_U3CUnwrapU3Ed__33_1_tD7DEC50938D05A339FA1C267A5947459560C8F50 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	// sizeof(Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<T>)
	const uint32_t SizeOf_AsyncUniTaskMethodBuilder_1_t73AB56CCE654EF7CAF0F5D9F1ACA9E2C139D2566 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T>)
	const uint32_t SizeOf_UniTask_1_t866C9316A346840E6B3BBFFBE6413B243AC86698 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 8));
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<T>
	const AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52 L_0 = alloca(SizeOf_AsyncUniTaskMethodBuilder_1_t73AB56CCE654EF7CAF0F5D9F1ACA9E2C139D2566);
	// Cysharp.Threading.Tasks.UniTask`1<T>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_3 = alloca(SizeOf_UniTask_1_t866C9316A346840E6B3BBFFBE6413B243AC86698);
	U3CUnwrapU3Ed__33_1_t954F6327C4B805B728FE5EB199C50BB96F205737 V_0 = alloca(SizeOf_U3CUnwrapU3Ed__33_1_tD7DEC50938D05A339FA1C267A5947459560C8F50);
	memset(V_0, 0, SizeOf_U3CUnwrapU3Ed__33_1_tD7DEC50938D05A339FA1C267A5947459560C8F50);
	{
		InvokerActionInvoker1< AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)L_0);
		il2cpp_codegen_write_instance_field_data((U3CUnwrapU3Ed__33_1_t954F6327C4B805B728FE5EB199C50BB96F205737*)V_0, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 3),1), L_0, SizeOf_AsyncUniTaskMethodBuilder_1_t73AB56CCE654EF7CAF0F5D9F1ACA9E2C139D2566);
		Task_1_tEEFAF6747CE41C77B985860193E36BC44BA345B3* L_1 = ___0_task;
		il2cpp_codegen_write_instance_field_data<Task_1_tEEFAF6747CE41C77B985860193E36BC44BA345B3*>((U3CUnwrapU3Ed__33_1_t954F6327C4B805B728FE5EB199C50BB96F205737*)V_0, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 3),2), L_1);
		bool L_2 = ___1_continueOnCapturedContext;
		il2cpp_codegen_write_instance_field_data<bool>((U3CUnwrapU3Ed__33_1_t954F6327C4B805B728FE5EB199C50BB96F205737*)V_0, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 3),3), L_2);
		il2cpp_codegen_write_instance_field_data<int32_t>((U3CUnwrapU3Ed__33_1_t954F6327C4B805B728FE5EB199C50BB96F205737*)V_0, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 3),0), (-1));
		InvokerActionInvoker1< U3CUnwrapU3Ed__33_1_t954F6327C4B805B728FE5EB199C50BB96F205737* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)), il2cpp_rgctx_method(method->rgctx_data, 5), (((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer((U3CUnwrapU3Ed__33_1_t954F6327C4B805B728FE5EB199C50BB96F205737*)V_0, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 3),1)))), (U3CUnwrapU3Ed__33_1_t954F6327C4B805B728FE5EB199C50BB96F205737*)V_0);
		InvokerActionInvoker1< UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)), il2cpp_rgctx_method(method->rgctx_data, 7), (((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer((U3CUnwrapU3Ed__33_1_t954F6327C4B805B728FE5EB199C50BB96F205737*)V_0, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 3),1)))), (UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)L_3);
		il2cpp_codegen_memcpy(il2cppRetVal, L_3, SizeOf_UniTask_1_t866C9316A346840E6B3BBFFBE6413B243AC86698);
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<T> Cysharp.Threading.Tasks.UniTaskExtensions::Unwrap<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(Cysharp.Threading.Tasks.UniTask`1<System.Threading.Tasks.Task`1<T>>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniTaskExtensions_Unwrap_TisIl2CppFullySharedGenericAny_mB46121ABA3EA910E9B13358ED50A3DC784B06BE8_gshared (UniTask_1_t15FB22B9C3B0D09E56C5B71B80853B5C804E6129 ___0_task, bool ___1_continueOnCapturedContext, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(Cysharp.Threading.Tasks.UniTaskExtensions/<Unwrap>d__37`1<T>)
	const uint32_t SizeOf_U3CUnwrapU3Ed__37_1_t31912FA45DE81E850A5F6CC9487596B27E0FC41D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	// sizeof(Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<T>)
	const uint32_t SizeOf_AsyncUniTaskMethodBuilder_1_t0C2F9B981F2AD9764CD01B1EB0C1629DAB513CDA = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T>)
	const uint32_t SizeOf_UniTask_1_tE10D663E0A823429C2306DBED581F8E1C49CE2E3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 8));
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<T>
	const AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52 L_0 = alloca(SizeOf_AsyncUniTaskMethodBuilder_1_t0C2F9B981F2AD9764CD01B1EB0C1629DAB513CDA);
	// Cysharp.Threading.Tasks.UniTask`1<T>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_3 = alloca(SizeOf_UniTask_1_tE10D663E0A823429C2306DBED581F8E1C49CE2E3);
	U3CUnwrapU3Ed__37_1_t89D338FD690877A215E5AFEE08E6CEDCF3F29600 V_0 = alloca(SizeOf_U3CUnwrapU3Ed__37_1_t31912FA45DE81E850A5F6CC9487596B27E0FC41D);
	memset(V_0, 0, SizeOf_U3CUnwrapU3Ed__37_1_t31912FA45DE81E850A5F6CC9487596B27E0FC41D);
	{
		InvokerActionInvoker1< AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, (AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)L_0);
		il2cpp_codegen_write_instance_field_data((U3CUnwrapU3Ed__37_1_t89D338FD690877A215E5AFEE08E6CEDCF3F29600*)V_0, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 3),1), L_0, SizeOf_AsyncUniTaskMethodBuilder_1_t0C2F9B981F2AD9764CD01B1EB0C1629DAB513CDA);
		UniTask_1_t15FB22B9C3B0D09E56C5B71B80853B5C804E6129 L_1 = ___0_task;
		il2cpp_codegen_write_instance_field_data<UniTask_1_t15FB22B9C3B0D09E56C5B71B80853B5C804E6129>((U3CUnwrapU3Ed__37_1_t89D338FD690877A215E5AFEE08E6CEDCF3F29600*)V_0, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 3),2), L_1);
		bool L_2 = ___1_continueOnCapturedContext;
		il2cpp_codegen_write_instance_field_data<bool>((U3CUnwrapU3Ed__37_1_t89D338FD690877A215E5AFEE08E6CEDCF3F29600*)V_0, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 3),3), L_2);
		il2cpp_codegen_write_instance_field_data<int32_t>((U3CUnwrapU3Ed__37_1_t89D338FD690877A215E5AFEE08E6CEDCF3F29600*)V_0, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 3),0), (-1));
		InvokerActionInvoker1< U3CUnwrapU3Ed__37_1_t89D338FD690877A215E5AFEE08E6CEDCF3F29600* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)), il2cpp_rgctx_method(method->rgctx_data, 5), (((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer((U3CUnwrapU3Ed__37_1_t89D338FD690877A215E5AFEE08E6CEDCF3F29600*)V_0, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 3),1)))), (U3CUnwrapU3Ed__37_1_t89D338FD690877A215E5AFEE08E6CEDCF3F29600*)V_0);
		InvokerActionInvoker1< UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)), il2cpp_rgctx_method(method->rgctx_data, 7), (((AsyncUniTaskMethodBuilder_1_t7A6E2F1B2EAF12DD1A0499D31C9DC814B0B55B52*)il2cpp_codegen_get_instance_field_data_pointer((U3CUnwrapU3Ed__37_1_t89D338FD690877A215E5AFEE08E6CEDCF3F29600*)V_0, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 3),1)))), (UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)L_3);
		il2cpp_codegen_memcpy(il2cppRetVal, L_3, SizeOf_UniTask_1_tE10D663E0A823429C2306DBED581F8E1C49CE2E3);
		return;
	}
}
// Cysharp.Threading.Tasks.UniTaskVoid Cysharp.Threading.Tasks.UniTaskObservableExtensions::Fire<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(Cysharp.Threading.Tasks.Internal.AsyncSubject`1<T>,Cysharp.Threading.Tasks.UniTask`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 UniTaskObservableExtensions_Fire_TisIl2CppFullySharedGenericAny_mFF35EC3620A98D39A411ED705D8C29E16EF60A02_gshared (/*Cysharp.Threading.Tasks.Internal.AsyncSubject`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/AsyncSubject_1_t3982C4585C158000BD959AD9263782E3F3A76773* ___0_subject, /*Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 ___1_task, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(Cysharp.Threading.Tasks.UniTaskObservableExtensions/<Fire>d__3`1<T>)
	const uint32_t SizeOf_U3CFireU3Ed__3_1_tEB8841F7AEF88810A6ED87F3AAA907DDE435715D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T>)
	const uint32_t SizeOf_UniTask_1_t0ACC5E0B35D6B9D7C76F9560E5C6504C0FB6658A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	// Cysharp.Threading.Tasks.UniTask`1<T>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_2 = alloca(SizeOf_UniTask_1_t0ACC5E0B35D6B9D7C76F9560E5C6504C0FB6658A);
	U3CFireU3Ed__3_1_tF3F9512FFE55412DD524B8798698C10CC16B869E V_0 = alloca(SizeOf_U3CFireU3Ed__3_1_tEB8841F7AEF88810A6ED87F3AAA907DDE435715D);
	memset(V_0, 0, SizeOf_U3CFireU3Ed__3_1_tEB8841F7AEF88810A6ED87F3AAA907DDE435715D);
	{
		AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B L_0;
		L_0 = AsyncUniTaskVoidMethodBuilder_Create_m06E63ABF318CBA8C8DE8BA460E94C6E9CDB5ED64_inline(NULL);
		il2cpp_codegen_write_instance_field_data<AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B>((U3CFireU3Ed__3_1_tF3F9512FFE55412DD524B8798698C10CC16B869E*)V_0, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),1), L_0);
		AsyncSubject_1_t3982C4585C158000BD959AD9263782E3F3A76773* L_1 = ___0_subject;
		il2cpp_codegen_write_instance_field_data<AsyncSubject_1_t3982C4585C158000BD959AD9263782E3F3A76773*>((U3CFireU3Ed__3_1_tF3F9512FFE55412DD524B8798698C10CC16B869E*)V_0, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),3), L_1);
		il2cpp_codegen_memcpy(L_2, ___1_task, SizeOf_UniTask_1_t0ACC5E0B35D6B9D7C76F9560E5C6504C0FB6658A);
		il2cpp_codegen_write_instance_field_data((U3CFireU3Ed__3_1_tF3F9512FFE55412DD524B8798698C10CC16B869E*)V_0, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),2), L_2, SizeOf_UniTask_1_t0ACC5E0B35D6B9D7C76F9560E5C6504C0FB6658A);
		il2cpp_codegen_write_instance_field_data<int32_t>((U3CFireU3Ed__3_1_tF3F9512FFE55412DD524B8798698C10CC16B869E*)V_0, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),0), (-1));
		InvokerActionInvoker1< U3CFireU3Ed__3_1_tF3F9512FFE55412DD524B8798698C10CC16B869E* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), (((AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)il2cpp_codegen_get_instance_field_data_pointer((U3CFireU3Ed__3_1_tF3F9512FFE55412DD524B8798698C10CC16B869E*)V_0, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),1)))), (U3CFireU3Ed__3_1_tF3F9512FFE55412DD524B8798698C10CC16B869E*)V_0);
		UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 L_3;
		L_3 = AsyncUniTaskVoidMethodBuilder_get_Task_mA5D58CCC3268985A789B48F67492123752CE7A98_inline((((AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)il2cpp_codegen_get_instance_field_data_pointer((U3CFireU3Ed__3_1_tF3F9512FFE55412DD524B8798698C10CC16B869E*)V_0, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),1)))), NULL);
		return L_3;
	}
}
// System.IObservable`1<T> Cysharp.Threading.Tasks.UniTaskObservableExtensions::ToObservable<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(Cysharp.Threading.Tasks.UniTask`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UniTaskObservableExtensions_ToObservable_TisIl2CppFullySharedGenericAny_m5C6FA64FCB3A661F99F18C45D8971192ADE740FA_gshared (/*Cysharp.Threading.Tasks.UniTask`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 ___0_task, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(Cysharp.Threading.Tasks.UniTask`1/Awaiter<T>)
	const uint32_t SizeOf_Awaiter_t6A196AAEDE741FD6744D7675D0880758A59094DB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T>)
	const uint32_t SizeOf_UniTask_1_t5C9DDFF6873D94D430082ABDB4190B37506BE2C6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// T
	// sizeof(T)
	const uint32_t SizeOf_T_tB4E4BE5A0A6D2429AD18F2D3DE34EDFEDB71CEF3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_tB4E4BE5A0A6D2429AD18F2D3DE34EDFEDB71CEF3);
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<T>
	const Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C L_2 = alloca(SizeOf_Awaiter_t6A196AAEDE741FD6744D7675D0880758A59094DB);
	// Cysharp.Threading.Tasks.UniTask`1<T>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_8 = alloca(SizeOf_UniTask_1_t5C9DDFF6873D94D430082ABDB4190B37506BE2C6);
	Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C V_0 = alloca(SizeOf_Awaiter_t6A196AAEDE741FD6744D7675D0880758A59094DB);
	memset(V_0, 0, SizeOf_Awaiter_t6A196AAEDE741FD6744D7675D0880758A59094DB);
	RuntimeObject* V_1 = NULL;
	UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (task.Status.IsCompleted())
		int32_t L_0;
		L_0 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), (UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)___0_task);
		bool L_1;
		L_1 = UniTaskStatusExtensions_IsCompleted_mF43C41C9CEB640E381D1F7A8B40142843AED87AE_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_002d;
		}
	}
	try
	{// begin try (depth: 1)
		// return new ReturnObservable<T>(task.GetAwaiter().GetResult());
		InvokerActionInvoker1< Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), (UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)___0_task, (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)L_2);
		il2cpp_codegen_memcpy(V_0, L_2, SizeOf_Awaiter_t6A196AAEDE741FD6744D7675D0880758A59094DB);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), (Awaiter_t51A888D9DD960130FBB265D4B9F9949ED674764C*)V_0, (Il2CppFullySharedGenericAny*)L_3);
		ReturnObservable_1_t1C4CFDAF8389F57E4638B43FDA51EFDC6733070F* L_4 = (ReturnObservable_1_t1C4CFDAF8389F57E4638B43FDA51EFDC6733070F*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 6));
		NullCheck(L_4);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)), il2cpp_rgctx_method(method->rgctx_data, 7), L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 5)) ? L_3: *(void**)L_3));
		V_1 = (RuntimeObject*)L_4;
		goto IL_0042;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0025;
		}
		throw e;
	}

CATCH_0025:
	{// begin catch(System.Exception)
		// return new ThrowObservable<T>(ex);
		ThrowObservable_1_t0A164A18067C7770B74986E8C0EFD928CC52ECE5* L_5 = (ThrowObservable_1_t0A164A18067C7770B74986E8C0EFD928CC52ECE5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 8));
		NullCheck(L_5);
		InvokerActionInvoker1< Exception_t* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 9)), il2cpp_rgctx_method(method->rgctx_data, 9), L_5, ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)));
		V_1 = (RuntimeObject*)L_5;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0042;
	}// end catch (depth: 1)

IL_002d:
	{
		// var subject = new AsyncSubject<T>();
		AsyncSubject_1_t3982C4585C158000BD959AD9263782E3F3A76773* L_6 = (AsyncSubject_1_t3982C4585C158000BD959AD9263782E3F3A76773*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 10));
		NullCheck(L_6);
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 11)), il2cpp_rgctx_method(method->rgctx_data, 11), L_6);
		// Fire(subject, task).Forget();
		AsyncSubject_1_t3982C4585C158000BD959AD9263782E3F3A76773* L_7 = L_6;
		il2cpp_codegen_memcpy(L_8, ___0_task, SizeOf_UniTask_1_t5C9DDFF6873D94D430082ABDB4190B37506BE2C6);
		UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 L_9;
		L_9 = InvokerFuncInvoker2< UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2, AsyncSubject_1_t3982C4585C158000BD959AD9263782E3F3A76773*, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 12)), il2cpp_rgctx_method(method->rgctx_data, 12), NULL, L_7, L_8);
		V_2 = L_9;
		UniTaskVoid_Forget_mE4FC2CCCEFD822A5D63FFE97EE209FEE949CC255((&V_2), NULL);
		// return subject;
		return (RuntimeObject*)L_7;
	}

IL_0042:
	{
		// }
		RuntimeObject* L_10 = V_1;
		return L_10;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<T> Cysharp.Threading.Tasks.UniTaskObservableExtensions::ToUniTask<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.IObservable`1<T>,System.Boolean,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniTaskObservableExtensions_ToUniTask_TisIl2CppFullySharedGenericAny_mCCE52F1B1DC4E8326A5CA1E7952818727C53CE3A_gshared (RuntimeObject* ___0_source, bool ___1_useFirstValue, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleAssignmentDisposable_t9AA5F201708E252ABAEECE56258D630EF672906A_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T>)
	const uint32_t SizeOf_UniTask_1_t2EEF1DCBCAE36033E3A4F5D2198603812D02E8C0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 11));
	// Cysharp.Threading.Tasks.UniTask`1<T>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_21 = alloca(SizeOf_UniTask_1_t2EEF1DCBCAE36033E3A4F5D2198603812D02E8C0);
	UniTaskCompletionSource_1_t3B7C6F0FED2BC49F65D51510327C3A1E6186E8EA* V_0 = NULL;
	SingleAssignmentDisposable_t9AA5F201708E252ABAEECE56258D630EF672906A* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	RuntimeObject* G_B3_0 = NULL;
	{
		// var promise = new UniTaskCompletionSource<T>();
		UniTaskCompletionSource_1_t3B7C6F0FED2BC49F65D51510327C3A1E6186E8EA* L_0 = (UniTaskCompletionSource_1_t3B7C6F0FED2BC49F65D51510327C3A1E6186E8EA*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		NullCheck(L_0);
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), L_0);
		V_0 = L_0;
		// var disposable = new SingleAssignmentDisposable();
		SingleAssignmentDisposable_t9AA5F201708E252ABAEECE56258D630EF672906A* L_1 = (SingleAssignmentDisposable_t9AA5F201708E252ABAEECE56258D630EF672906A*)il2cpp_codegen_object_new(SingleAssignmentDisposable_t9AA5F201708E252ABAEECE56258D630EF672906A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		SingleAssignmentDisposable__ctor_m0D2759248B3CEBD509F9B848CD0B385E783777D4(L_1, NULL);
		V_1 = L_1;
		// var observer = useFirstValue
		//     ? (IObserver<T>)new FirstValueToUniTaskObserver<T>(promise, disposable, cancellationToken)
		//     : (IObserver<T>)new ToUniTaskObserver<T>(promise, disposable, cancellationToken);
		bool L_2 = ___1_useFirstValue;
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		UniTaskCompletionSource_1_t3B7C6F0FED2BC49F65D51510327C3A1E6186E8EA* L_3 = V_0;
		SingleAssignmentDisposable_t9AA5F201708E252ABAEECE56258D630EF672906A* L_4 = V_1;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_5 = ___2_cancellationToken;
		ToUniTaskObserver_1_tE22EF3448C8DC79827CF7061DF88AF4161180E60* L_6 = (ToUniTaskObserver_1_tE22EF3448C8DC79827CF7061DF88AF4161180E60*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 2));
		NullCheck(L_6);
		InvokerActionInvoker3< UniTaskCompletionSource_1_t3B7C6F0FED2BC49F65D51510327C3A1E6186E8EA*, SingleAssignmentDisposable_t9AA5F201708E252ABAEECE56258D630EF672906A*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), L_6, L_3, L_4, L_5);
		V_3 = (RuntimeObject*)L_6;
		RuntimeObject* L_7 = V_3;
		G_B3_0 = L_7;
		goto IL_0025;
	}

IL_001b:
	{
		UniTaskCompletionSource_1_t3B7C6F0FED2BC49F65D51510327C3A1E6186E8EA* L_8 = V_0;
		SingleAssignmentDisposable_t9AA5F201708E252ABAEECE56258D630EF672906A* L_9 = V_1;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_10 = ___2_cancellationToken;
		FirstValueToUniTaskObserver_1_t744D4D72306E0D31D591DDFEEBDB175E92614FB7* L_11 = (FirstValueToUniTaskObserver_1_t744D4D72306E0D31D591DDFEEBDB175E92614FB7*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 4));
		NullCheck(L_11);
		InvokerActionInvoker3< UniTaskCompletionSource_1_t3B7C6F0FED2BC49F65D51510327C3A1E6186E8EA*, SingleAssignmentDisposable_t9AA5F201708E252ABAEECE56258D630EF672906A*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)), il2cpp_rgctx_method(method->rgctx_data, 5), L_11, L_8, L_9, L_10);
		V_3 = (RuntimeObject*)L_11;
		RuntimeObject* L_12 = V_3;
		G_B3_0 = L_12;
	}

IL_0025:
	{
		V_2 = G_B3_0;
	}
	try
	{// begin try (depth: 1)
		// disposable.Disposable = source.Subscribe(observer);
		SingleAssignmentDisposable_t9AA5F201708E252ABAEECE56258D630EF672906A* L_13 = V_1;
		RuntimeObject* L_14 = ___0_source;
		RuntimeObject* L_15 = V_2;
		NullCheck(L_14);
		RuntimeObject* L_16;
		L_16 = InterfaceFuncInvoker1Invoker< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->rgctx_data, 6), L_14, L_15);
		NullCheck(L_13);
		SingleAssignmentDisposable_set_Disposable_m47E3E5D9584661A7C67BE8DD02B784D30680909B(L_13, L_16, NULL);
		// }
		goto IL_0042;
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
		V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// promise.TrySetException(ex);
		UniTaskCompletionSource_1_t3B7C6F0FED2BC49F65D51510327C3A1E6186E8EA* L_17 = V_0;
		Exception_t* L_18 = V_4;
		NullCheck(L_17);
		bool L_19;
		L_19 = InvokerFuncInvoker1< bool, Exception_t* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 9)), il2cpp_rgctx_method(method->rgctx_data, 9), L_17, L_18);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0042;
	}// end catch (depth: 1)

IL_0042:
	{
		// return promise.Task;
		UniTaskCompletionSource_1_t3B7C6F0FED2BC49F65D51510327C3A1E6186E8EA* L_20 = V_0;
		NullCheck(L_20);
		InvokerActionInvoker1< UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 10)), il2cpp_rgctx_method(method->rgctx_data, 10), L_20, (UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)L_21);
		il2cpp_codegen_memcpy(il2cppRetVal, L_21, SizeOf_UniTask_1_t2EEF1DCBCAE36033E3A4F5D2198603812D02E8C0);
		return;
	}
}
// Cysharp.Threading.Tasks.AsyncUnityEventHandler`1<T> Cysharp.Threading.Tasks.UnityAsyncExtensions::GetAsyncEventHandler<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(UnityEngine.Events.UnityEvent`1<T>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncUnityEventHandler_1_tE2B8DC50E909DE9C20DA2F58857037AAAD5A238E* UnityAsyncExtensions_GetAsyncEventHandler_TisIl2CppFullySharedGenericAny_mB1A5A6BF8C3F54A6CF144B59B1CD11710DCF15A0_gshared (UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030* ___0_unityEvent, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___1_cancellationToken, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		// return new AsyncUnityEventHandler<T>(unityEvent, cancellationToken, false);
		UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030* L_0 = ___0_unityEvent;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___1_cancellationToken;
		AsyncUnityEventHandler_1_tE2B8DC50E909DE9C20DA2F58857037AAAD5A238E* L_2 = (AsyncUnityEventHandler_1_tE2B8DC50E909DE9C20DA2F58857037AAAD5A238E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 1));
		NullCheck(L_2);
		InvokerActionInvoker3< UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), L_2, L_0, L_1, (bool)0);
		return L_2;
	}
}
// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<T> Cysharp.Threading.Tasks.UnityAsyncExtensions::OnInvokeAsAsyncEnumerable<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(UnityEngine.Events.UnityEvent`1<T>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityAsyncExtensions_OnInvokeAsAsyncEnumerable_TisIl2CppFullySharedGenericAny_m6B44545A7CB07C1265698A7556387626CDCCD76D_gshared (UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030* ___0_unityEvent, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___1_cancellationToken, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		// return new UnityEventHandlerAsyncEnumerable<T>(unityEvent, cancellationToken);
		UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030* L_0 = ___0_unityEvent;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___1_cancellationToken;
		UnityEventHandlerAsyncEnumerable_1_t3FA86ED7E1AF3A77D273312C77BB59F9201EEFBE* L_2 = (UnityEventHandlerAsyncEnumerable_1_t3FA86ED7E1AF3A77D273312C77BB59F9201EEFBE*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 1));
		NullCheck(L_2);
		InvokerActionInvoker2< UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), L_2, L_0, L_1);
		return (RuntimeObject*)L_2;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<T> Cysharp.Threading.Tasks.UnityAsyncExtensions::OnInvokeAsync<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(UnityEngine.Events.UnityEvent`1<T>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAsyncExtensions_OnInvokeAsync_TisIl2CppFullySharedGenericAny_m6ED59F6A47F36D386E47BE8C2A8A7EB10C808E4D_gshared (UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030* ___0_unityEvent, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___1_cancellationToken, UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(Cysharp.Threading.Tasks.UniTask`1<T>)
	const uint32_t SizeOf_UniTask_1_tCF7C8C39D96B9590C8AE0BBD7A02406D6E781182 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 4));
	// Cysharp.Threading.Tasks.UniTask`1<T>
	const UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483 L_3 = alloca(SizeOf_UniTask_1_tCF7C8C39D96B9590C8AE0BBD7A02406D6E781182);
	{
		// return new AsyncUnityEventHandler<T>(unityEvent, cancellationToken, true).OnInvokeAsync();
		UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030* L_0 = ___0_unityEvent;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___1_cancellationToken;
		AsyncUnityEventHandler_1_tE2B8DC50E909DE9C20DA2F58857037AAAD5A238E* L_2 = (AsyncUnityEventHandler_1_tE2B8DC50E909DE9C20DA2F58857037AAAD5A238E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 1));
		NullCheck(L_2);
		InvokerActionInvoker3< UnityEvent_1_t2A2840A12C919146C6D21E86D7DAA8E3DAB74030*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), L_2, L_0, L_1, (bool)1);
		NullCheck(L_2);
		InvokerActionInvoker1< UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), L_2, (UniTask_1_t462EA7468BEE3A822B4D759A9930C6DF4DED6483*)L_3);
		il2cpp_codegen_memcpy(il2cppRetVal, L_3, SizeOf_UniTask_1_tCF7C8C39D96B9590C8AE0BBD7A02406D6E781182);
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.UnityBindingExtensions::BindTo<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(Cysharp.Threading.Tasks.AsyncReactiveProperty`1<T>,UnityEngine.UI.Text,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityBindingExtensions_BindTo_TisIl2CppFullySharedGenericAny_mEC92BEF172347E0C8F8DAB88284EB0C295DA53D7_gshared (/*Cysharp.Threading.Tasks.AsyncReactiveProperty`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/AsyncReactiveProperty_1_t55DCE046DB85F4B8B8BFAD7AE879EE536D5F9733* ___0_source, Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___1_text, bool ___2_rebindOnError, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// BindToCore(source, text, text.GetCancellationTokenOnDestroy(), rebindOnError).Forget();
		AsyncReactiveProperty_1_t55DCE046DB85F4B8B8BFAD7AE879EE536D5F9733* L_0 = ___0_source;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = ___1_text;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = ___1_text;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3;
		L_3 = UniTaskCancellationExtensions_GetCancellationTokenOnDestroy_m19FD121F93A3C4FA26CD12524434DEB9E95E975B((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)L_2, NULL);
		bool L_4 = ___2_rebindOnError;
		UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 L_5;
		L_5 = InvokerFuncInvoker4< UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2, RuntimeObject*, Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, (RuntimeObject*)L_0, L_1, L_3, L_4);
		V_0 = L_5;
		UniTaskVoid_Forget_mE4FC2CCCEFD822A5D63FFE97EE209FEE949CC255((&V_0), NULL);
		// }
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.UnityBindingExtensions::BindTo<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<T>,UnityEngine.UI.Text,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityBindingExtensions_BindTo_TisIl2CppFullySharedGenericAny_m628F7A166C1D9E12BF1DCBAC314736C3BA2E0E39_gshared (RuntimeObject* ___0_source, Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___1_text, bool ___2_rebindOnError, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// BindToCore(source, text, text.GetCancellationTokenOnDestroy(), rebindOnError).Forget();
		RuntimeObject* L_0 = ___0_source;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = ___1_text;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = ___1_text;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3;
		L_3 = UniTaskCancellationExtensions_GetCancellationTokenOnDestroy_m19FD121F93A3C4FA26CD12524434DEB9E95E975B((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)L_2, NULL);
		bool L_4 = ___2_rebindOnError;
		UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 L_5;
		L_5 = InvokerFuncInvoker4< UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2, RuntimeObject*, Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_0, L_1, L_3, L_4);
		V_0 = L_5;
		UniTaskVoid_Forget_mE4FC2CCCEFD822A5D63FFE97EE209FEE949CC255((&V_0), NULL);
		// }
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.UnityBindingExtensions::BindTo<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<T>,UnityEngine.UI.Text,System.Threading.CancellationToken,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityBindingExtensions_BindTo_TisIl2CppFullySharedGenericAny_mDE88613F7A89A530B0723D661078E34FAC2743AF_gshared (RuntimeObject* ___0_source, Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___1_text, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, bool ___3_rebindOnError, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// BindToCore(source, text, cancellationToken, rebindOnError).Forget();
		RuntimeObject* L_0 = ___0_source;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = ___1_text;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_2 = ___2_cancellationToken;
		bool L_3 = ___3_rebindOnError;
		UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 L_4;
		L_4 = InvokerFuncInvoker4< UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2, RuntimeObject*, Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_0, L_1, L_2, L_3);
		V_0 = L_4;
		UniTaskVoid_Forget_mE4FC2CCCEFD822A5D63FFE97EE209FEE949CC255((&V_0), NULL);
		// }
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.UnityBindingExtensions::BindTo<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Object>(Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TSource>,TObject,System.Action`2<TObject,TSource>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityBindingExtensions_BindTo_TisIl2CppFullySharedGenericAny_TisRuntimeObject_m6489C2133C358D1B80404ABD81AC007D28B0D243_gshared (RuntimeObject* ___0_source, RuntimeObject* ___1_monoBehaviour, Action_2_tF2CE797FD3D10871812A41CE44522D89D16291C5* ___2_bindAction, bool ___3_rebindOnError, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// BindToCore(source, monoBehaviour, bindAction, monoBehaviour.GetCancellationTokenOnDestroy(), rebindOnError).Forget();
		RuntimeObject* L_0 = ___0_source;
		RuntimeObject* L_1 = ___1_monoBehaviour;
		Action_2_tF2CE797FD3D10871812A41CE44522D89D16291C5* L_2 = ___2_bindAction;
		RuntimeObject* L_3 = ___1_monoBehaviour;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4;
		L_4 = UniTaskCancellationExtensions_GetCancellationTokenOnDestroy_m19FD121F93A3C4FA26CD12524434DEB9E95E975B((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)L_3, NULL);
		bool L_5 = ___3_rebindOnError;
		UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 L_6;
		L_6 = InvokerFuncInvoker5< UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2, RuntimeObject*, RuntimeObject*, Action_2_tF2CE797FD3D10871812A41CE44522D89D16291C5*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), NULL, L_0, L_1, L_2, L_4, L_5);
		V_0 = L_6;
		UniTaskVoid_Forget_mE4FC2CCCEFD822A5D63FFE97EE209FEE949CC255((&V_0), NULL);
		// }
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.UnityBindingExtensions::BindTo<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TSource>,TObject,System.Action`2<TObject,TSource>,System.Threading.CancellationToken,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityBindingExtensions_BindTo_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m838DF60AFAC36202705679784CE0E00F820E3122_gshared (RuntimeObject* ___0_source, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___1_bindTarget, Action_2_t1D42C7D8DCD2DEB7C556FB3783F0EDAFF694E5E8* ___2_bindAction, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___3_cancellationToken, bool ___4_rebindOnError, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(TObject)
	const uint32_t SizeOf_TObject_tE2013639FD04E9DB1176CD1F137E461693F08FDE = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// TObject
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TObject_tE2013639FD04E9DB1176CD1F137E461693F08FDE);
	UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// BindToCore(source, bindTarget, bindAction, cancellationToken, rebindOnError).Forget();
		RuntimeObject* L_0 = ___0_source;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___1_bindTarget : &___1_bindTarget), SizeOf_TObject_tE2013639FD04E9DB1176CD1F137E461693F08FDE);
		Action_2_t1D42C7D8DCD2DEB7C556FB3783F0EDAFF694E5E8* L_2 = ___2_bindAction;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = ___3_cancellationToken;
		bool L_4 = ___4_rebindOnError;
		UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 L_5;
		L_5 = InvokerFuncInvoker5< UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2, RuntimeObject*, Il2CppFullySharedGenericAny, Action_2_t1D42C7D8DCD2DEB7C556FB3783F0EDAFF694E5E8*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), NULL, L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? L_1: *(void**)L_1), L_2, L_3, L_4);
		V_0 = L_5;
		UniTaskVoid_Forget_mE4FC2CCCEFD822A5D63FFE97EE209FEE949CC255((&V_0), NULL);
		// }
		return;
	}
}
// Cysharp.Threading.Tasks.UniTaskVoid Cysharp.Threading.Tasks.UnityBindingExtensions::BindToCore<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<T>,UnityEngine.UI.Text,System.Threading.CancellationToken,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 UnityBindingExtensions_BindToCore_TisIl2CppFullySharedGenericAny_m3DAB13CAF7CD78478B4009B74A5C31BA3EFF41C0_gshared (RuntimeObject* ___0_source, Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___1_text, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, bool ___3_rebindOnError, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	U3CBindToCoreU3Ed__6_1_t86689E04CADC36E81BC1A54F65539102D6B5CB49 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B L_0;
		L_0 = AsyncUniTaskVoidMethodBuilder_Create_m06E63ABF318CBA8C8DE8BA460E94C6E9CDB5ED64_inline(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___runner_0), (void*)NULL);
		RuntimeObject* L_1 = ___0_source;
		(&V_0)->___source_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___source_2), (void*)L_1);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = ___1_text;
		(&V_0)->___text_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___text_5), (void*)L_2);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = ___2_cancellationToken;
		(&V_0)->___cancellationToken_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___cancellationToken_3))->____source_0), (void*)NULL);
		bool L_4 = ___3_rebindOnError;
		(&V_0)->___rebindOnError_4 = L_4;
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_5 = (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)(&(&V_0)->___U3CU3Et__builder_1);
		InvokerActionInvoker1< U3CBindToCoreU3Ed__6_1_t86689E04CADC36E81BC1A54F65539102D6B5CB49* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), L_5, (&V_0));
		AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* L_6 = (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)(&(&V_0)->___U3CU3Et__builder_1);
		UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 L_7;
		L_7 = AsyncUniTaskVoidMethodBuilder_get_Task_mA5D58CCC3268985A789B48F67492123752CE7A98_inline(L_6, NULL);
		return L_7;
	}
}
// Cysharp.Threading.Tasks.UniTaskVoid Cysharp.Threading.Tasks.UnityBindingExtensions::BindToCore<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TSource>,TObject,System.Action`2<TObject,TSource>,System.Threading.CancellationToken,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 UnityBindingExtensions_BindToCore_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mF97143731938780514176E7968F63690D9E84B8F_gshared (RuntimeObject* ___0_source, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___1_bindTarget, Action_2_t1D42C7D8DCD2DEB7C556FB3783F0EDAFF694E5E8* ___2_bindAction, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___3_cancellationToken, bool ___4_rebindOnError, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(Cysharp.Threading.Tasks.UnityBindingExtensions/<BindToCore>d__12`2<TSource,TObject>)
	const uint32_t SizeOf_U3CBindToCoreU3Ed__12_2_t32C6A8A7B5FF27BEAABC7A1E7CD7105A480C03AD = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// sizeof(TObject)
	const uint32_t SizeOf_TObject_t6CE5D5DBCF444D4A5B37632F765E4725E3E72F5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	// TObject
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TObject_t6CE5D5DBCF444D4A5B37632F765E4725E3E72F5E);
	U3CBindToCoreU3Ed__12_2_tC0C0AD26350D5274BE3703D1A40F35C8693897CA V_0 = alloca(SizeOf_U3CBindToCoreU3Ed__12_2_t32C6A8A7B5FF27BEAABC7A1E7CD7105A480C03AD);
	memset(V_0, 0, SizeOf_U3CBindToCoreU3Ed__12_2_t32C6A8A7B5FF27BEAABC7A1E7CD7105A480C03AD);
	{
		AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B L_0;
		L_0 = AsyncUniTaskVoidMethodBuilder_Create_m06E63ABF318CBA8C8DE8BA460E94C6E9CDB5ED64_inline(NULL);
		il2cpp_codegen_write_instance_field_data<AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B>((U3CBindToCoreU3Ed__12_2_tC0C0AD26350D5274BE3703D1A40F35C8693897CA*)V_0, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),1), L_0);
		RuntimeObject* L_1 = ___0_source;
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>((U3CBindToCoreU3Ed__12_2_tC0C0AD26350D5274BE3703D1A40F35C8693897CA*)V_0, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),2), L_1);
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___1_bindTarget : &___1_bindTarget), SizeOf_TObject_t6CE5D5DBCF444D4A5B37632F765E4725E3E72F5E);
		il2cpp_codegen_write_instance_field_data((U3CBindToCoreU3Ed__12_2_tC0C0AD26350D5274BE3703D1A40F35C8693897CA*)V_0, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),6), L_2, SizeOf_TObject_t6CE5D5DBCF444D4A5B37632F765E4725E3E72F5E);
		Action_2_t1D42C7D8DCD2DEB7C556FB3783F0EDAFF694E5E8* L_3 = ___2_bindAction;
		il2cpp_codegen_write_instance_field_data<Action_2_t1D42C7D8DCD2DEB7C556FB3783F0EDAFF694E5E8*>((U3CBindToCoreU3Ed__12_2_tC0C0AD26350D5274BE3703D1A40F35C8693897CA*)V_0, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),5), L_3);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = ___3_cancellationToken;
		il2cpp_codegen_write_instance_field_data<CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED>((U3CBindToCoreU3Ed__12_2_tC0C0AD26350D5274BE3703D1A40F35C8693897CA*)V_0, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),3), L_4);
		bool L_5 = ___4_rebindOnError;
		il2cpp_codegen_write_instance_field_data<bool>((U3CBindToCoreU3Ed__12_2_tC0C0AD26350D5274BE3703D1A40F35C8693897CA*)V_0, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),4), L_5);
		il2cpp_codegen_write_instance_field_data<int32_t>((U3CBindToCoreU3Ed__12_2_tC0C0AD26350D5274BE3703D1A40F35C8693897CA*)V_0, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),0), (-1));
		InvokerActionInvoker1< U3CBindToCoreU3Ed__12_2_tC0C0AD26350D5274BE3703D1A40F35C8693897CA* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), (((AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)il2cpp_codegen_get_instance_field_data_pointer((U3CBindToCoreU3Ed__12_2_tC0C0AD26350D5274BE3703D1A40F35C8693897CA*)V_0, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),1)))), (U3CBindToCoreU3Ed__12_2_tC0C0AD26350D5274BE3703D1A40F35C8693897CA*)V_0);
		UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 L_6;
		L_6 = AsyncUniTaskVoidMethodBuilder_get_Task_mA5D58CCC3268985A789B48F67492123752CE7A98_inline((((AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B*)il2cpp_codegen_get_instance_field_data_pointer((U3CBindToCoreU3Ed__12_2_tC0C0AD26350D5274BE3703D1A40F35C8693897CA*)V_0, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),1)))), NULL);
		return L_6;
	}
}
// System.Collections.Generic.IEqualityComparer`1<T> Cysharp.Threading.Tasks.Internal.UnityEqualityComparer::GetDefault<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityEqualityComparer_GetDefault_TisIl2CppFullySharedGenericAny_mA0AAA1D5156EEA2D49CAD795B6CA2398E775385E_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		// return Cache<T>.Comparer;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		RuntimeObject* L_0 = ((Cache_1_t7B4A181E5E427597BF4280A8F15C1644BC269237_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Comparer_0;
		return L_0;
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Unsafe_Add_TisIl2CppFullySharedGenericAny_mDA4722F94AF13693FCE1583B641A792D2EA47924_gshared (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___0_source, int32_t ___1_elementOffset, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_tBE6850158665A8E196430E1D80AEFF9AC121F5F9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_source;
		int32_t L_1 = ___1_elementOffset;
		uint32_t L_2 = SizeOf_T_tBE6850158665A8E196430E1D80AEFF9AC121F5F9;
		return ((Il2CppFullySharedGenericAny*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::Add<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T&,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Unsafe_Add_TisIl2CppFullySharedGenericAny_mC89D70E498F759E971238CF82E99E44CC68197DA_gshared (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___0_source, intptr_t ___1_elementOffset, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_tEE9E2B0A67EF7877E2DDB454C5066EBB8C09D0DA = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_source;
		intptr_t L_1 = ___1_elementOffset;
		uint32_t L_2 = SizeOf_T_tEE9E2B0A67EF7877E2DDB454C5066EBB8C09D0DA;
		return ((Il2CppFullySharedGenericAny*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, (int32_t)L_2))));
	}
}
// System.Void* System.Runtime.CompilerServices.Unsafe::Add<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Unsafe_Add_TisIl2CppFullySharedGenericAny_m25356A475C0867B15741BD80812E4EBA4394F3C5_gshared (void* ___0_source, int32_t ___1_elementOffset, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_t3ED59D9C3AB22383C6F506D05E4A04928B7130D6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_elementOffset;
		uint32_t L_2 = SizeOf_T_t3ED59D9C3AB22383C6F506D05E4A04928B7130D6;
		return ((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::AddByteOffset<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T&,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Unsafe_AddByteOffset_TisIl2CppFullySharedGenericAny_m023762698D869AA8F4D477B66833C0BCFC1EA25C_gshared (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___0_source, intptr_t ___1_byteOffset, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_source;
		intptr_t L_1 = ___1_byteOffset;
		return ((Il2CppFullySharedGenericAny*)il2cpp_codegen_add((intptr_t)L_0, L_1));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::AddByteOffset<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T&,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Unsafe_AddByteOffset_TisIl2CppFullySharedGenericAny_m77EFAC6DAA578E6C65CAC97578F1800F25019689_gshared (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___0_source, uint64_t ___1_byteOffset, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_source;
		uint64_t L_1 = ___1_byteOffset;
		intptr_t L_2;
		L_2 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)((uintptr_t)L_1), NULL);
		Il2CppFullySharedGenericAny* L_3;
		L_3 = InvokerFuncInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, intptr_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_0, L_2);
		return L_3;
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::AreSame<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_AreSame_TisIl2CppFullySharedGenericAny_mEFCD9F27093DEB04CA603DC1C6F306CE6DCCDC3C_gshared (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___0_left, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___1_right, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_left;
		Il2CppFullySharedGenericAny* L_1 = ___1_right;
		return (bool)((((RuntimeObject*)(intptr_t)L_0) == ((RuntimeObject*)(intptr_t)L_1))? 1 : 0);
	}
}
// T System.Runtime.CompilerServices.Unsafe::As<System.Object>(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Unsafe_As_TisRuntimeObject_mFDA1457944192D987E8EC451CC8BFB2E800D78A1_gshared (RuntimeObject* ___0_o, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		RuntimeObject* L_0 = ___0_o;
		return L_0;
	}
}
// TTo& System.Runtime.CompilerServices.Unsafe::As<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(TFrom&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Unsafe_As_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mAF06A659941D15118FC1E4800E3A7A0F262628A4_gshared (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___0_source, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_source;
		return (Il2CppFullySharedGenericAny*)(L_0);
	}
}
// System.Void* System.Runtime.CompilerServices.Unsafe::AsPointer<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Unsafe_AsPointer_TisIl2CppFullySharedGenericAny_mE85961ECFFC7310EBEF309E6E67AD0FED2F9030B_gshared (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___0_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_value;
		return (void*)(((uintptr_t)L_0));
	}
}
// T& System.Runtime.CompilerServices.Unsafe::AsRef<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Unsafe_AsRef_TisIl2CppFullySharedGenericAny_m088920550101BD3FA6B40E99A5F107C35BE752FA_gshared (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___0_source, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_source;
		return L_0;
	}
}
// T& System.Runtime.CompilerServices.Unsafe::AsRef<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Unsafe_AsRef_TisIl2CppFullySharedGenericAny_mD269D4D95DA51D3CF4E4025805638814158802A3_gshared (void* ___0_source, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		void* L_0 = ___0_source;
		return (Il2CppFullySharedGenericAny*)(L_0);
	}
}
// System.Boolean System.Runtime.CompilerServices.Unsafe::IsAddressLessThan<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T&,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisIl2CppFullySharedGenericAny_m731B9B0C5A4B349E4545E7AAAB44731B9ADB6597_gshared (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___0_left, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___1_right, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_left;
		Il2CppFullySharedGenericAny* L_1 = ___1_right;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
// T System.Runtime.CompilerServices.Unsafe::Read<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unsafe_Read_TisIl2CppFullySharedGenericAny_mF6B28073E683AAE891ED373C5F5F29DA2A0708A2_gshared (void* ___0_source, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_tB42CCB1CEED288E2BEBBDFE4BE22B8CB6F084B54 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// T
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_tB42CCB1CEED288E2BEBBDFE4BE22B8CB6F084B54);
	{
		void* L_0 = ___0_source;
		il2cpp_codegen_memcpy(L_1, L_0, SizeOf_T_tB42CCB1CEED288E2BEBBDFE4BE22B8CB6F084B54);
		il2cpp_codegen_memcpy(il2cppRetVal, L_1, SizeOf_T_tB42CCB1CEED288E2BEBBDFE4BE22B8CB6F084B54);
		return;
	}
}
// T System.Runtime.CompilerServices.Unsafe::ReadUnaligned<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unsafe_ReadUnaligned_TisIl2CppFullySharedGenericAny_m42C276800437B81F51F1F38619B499B6AAFB0021_gshared (uint8_t* ___0_source, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_tE109D24A290E1158759C26079ED706B46290FAE5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// T
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_tE109D24A290E1158759C26079ED706B46290FAE5);
	{
		uint8_t* L_0 = ___0_source;
		il2cpp_codegen_memcpy(L_1, L_0, SizeOf_T_tE109D24A290E1158759C26079ED706B46290FAE5);
		il2cpp_codegen_memcpy(il2cppRetVal, L_1, SizeOf_T_tE109D24A290E1158759C26079ED706B46290FAE5);
		return;
	}
}
// System.Int32 System.Runtime.CompilerServices.Unsafe::SizeOf<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Unsafe_SizeOf_TisIl2CppFullySharedGenericAny_mD5748385042811E049C06FFD865AFD213C5FA9EB_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_t77C4AF644C0D2AE4F0E9399E7AED3FED3426FBD7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	{
		uint32_t L_0 = SizeOf_T_t77C4AF644C0D2AE4F0E9399E7AED3FED3426FBD7;
		return (int32_t)L_0;
	}
}
// System.Void System.Runtime.CompilerServices.Unsafe::WriteUnaligned<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Byte&,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unsafe_WriteUnaligned_TisIl2CppFullySharedGenericAny_mF9DAA41D685A65A581864DBF65CE23C6F7E72BDF_gshared (uint8_t* ___0_destination, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_tBBA6F3D6E1BC76807F91C471253B4033DB66D6E8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// T
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_tBBA6F3D6E1BC76807F91C471253B4033DB66D6E8);
	{
		uint8_t* L_0 = ___0_destination;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___1_value : &___1_value), SizeOf_T_tBBA6F3D6E1BC76807F91C471253B4033DB66D6E8);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_0, L_1, SizeOf_T_tBBA6F3D6E1BC76807F91C471253B4033DB66D6E8);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 0), (void**)(Il2CppFullySharedGenericAny*)L_0, (void*)L_1);
		return;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisIl2CppFullySharedGenericStruct_m11D1023B182BE19CF0F1A57DBE826004A1B81A41_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL);
		int32_t L_1;
		L_1 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Boolean Unity.Collections.LowLevel.Unsafe.UnsafeUtility::EnumEquals<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(T,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeUtility_EnumEquals_TisIl2CppFullySharedGenericStruct_m5C481F0B602D350AD1D467266B1FC020AD37D39F_gshared (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct ___0_lhs, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct ___1_rhs, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_t59ABA7CBCA03FA1BDEA675A0F5246CCBCBFA2EF9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// T
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_T_t59ABA7CBCA03FA1BDEA675A0F5246CCBCBFA2EF9);
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_T_t59ABA7CBCA03FA1BDEA675A0F5246CCBCBFA2EF9);
	{
		il2cpp_codegen_memcpy(L_0, ___0_lhs, SizeOf_T_t59ABA7CBCA03FA1BDEA675A0F5246CCBCBFA2EF9);
		il2cpp_codegen_memcpy(L_1, ___1_rhs, SizeOf_T_t59ABA7CBCA03FA1BDEA675A0F5246CCBCBFA2EF9);
		return (bool)((((int64_t)il2cpp_codegen_conv<int64_t,false,false>(il2cpp_rgctx_data(method->rgctx_data, 0), L_0, NULL)) == ((int64_t)il2cpp_codegen_conv<int64_t,false,false>(il2cpp_rgctx_data(method->rgctx_data, 0), L_1, NULL)))? 1 : 0);
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::EnumToInt<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_EnumToInt_TisIl2CppFullySharedGenericStruct_m3B39C49C6E55DD41CE78BCEBD6E575D640D38B3D_gshared (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct ___0_enumValue, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		InvokerActionInvoker2< Il2CppFullySharedGenericStruct*, int32_t* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, (Il2CppFullySharedGenericStruct*)___0_enumValue, (&V_0));
		int32_t L_0 = V_0;
		V_1 = L_0;
		goto IL_0011;
	}

IL_0011:
	{
		int32_t L_1 = V_1;
		return L_1;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::InternalEnumToInt<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_InternalEnumToInt_TisIl2CppFullySharedGenericAny_mBDCF185E254B9BD3742E154D436B362227EB8F18_gshared (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___0_enumValue, int32_t* ___1_intValue, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t* L_0 = ___1_intValue;
		Il2CppFullySharedGenericAny* L_1 = ___0_enumValue;
		int32_t L_2 = *((int32_t*)L_1);
		*((int32_t*)L_0) = (int32_t)L_2;
		return;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericAny_m295186AA082411C57485F8BDB824E4D8AC1C6D93_gshared (void* ___0_source, int32_t ___1_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_t3818EBA71DF5EA591716A05E0BBD988D81931B5C = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// T
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t3818EBA71DF5EA591716A05E0BBD988D81931B5C);
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = SizeOf_T_t3818EBA71DF5EA591716A05E0BBD988D81931B5C;
		il2cpp_codegen_memcpy(L_3, ((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))), SizeOf_T_t3818EBA71DF5EA591716A05E0BBD988D81931B5C);
		il2cpp_codegen_memcpy(il2cppRetVal, L_3, SizeOf_T_t3818EBA71DF5EA591716A05E0BBD988D81931B5C);
		return;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElementWithStride<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Void*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_ReadArrayElementWithStride_TisIl2CppFullySharedGenericAny_mA2FA845DC97225E057F01D0D4161C801EECA284F_gshared (void* ___0_source, int32_t ___1_index, int32_t ___2_stride, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_tF00BEB2D39C607DEF67E891605A383D95A9912A8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// T
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_tF00BEB2D39C607DEF67E891605A383D95A9912A8);
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int32_t L_2 = ___2_stride;
		il2cpp_codegen_memcpy(L_3, ((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))), SizeOf_T_tF00BEB2D39C607DEF67E891605A383D95A9912A8);
		il2cpp_codegen_memcpy(il2cppRetVal, L_3, SizeOf_T_tF00BEB2D39C607DEF67E891605A383D95A9912A8);
		return;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_tE6588938356AD51CD7B5532933E8B84E7779C6E2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	{
		uint32_t L_0 = SizeOf_T_tE6588938356AD51CD7B5532933E8B84E7779C6E2;
		return (int32_t)L_0;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisIl2CppFullySharedGenericAny_m3C86E25D63AB95F3D572F8010D623EB7C6D78283_gshared (void* ___0_destination, int32_t ___1_index, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___2_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_t9B5DAD81EFECDA494525FB73A37EE675A422B5E5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// T
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t9B5DAD81EFECDA494525FB73A37EE675A422B5E5);
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = SizeOf_T_t9B5DAD81EFECDA494525FB73A37EE675A422B5E5;
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___2_value : &___2_value), SizeOf_T_t9B5DAD81EFECDA494525FB73A37EE675A422B5E5);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))), L_3, SizeOf_T_t9B5DAD81EFECDA494525FB73A37EE675A422B5E5);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 0), (void**)(Il2CppFullySharedGenericAny*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))), (void*)L_3);
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElementWithStride<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Void*,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElementWithStride_TisIl2CppFullySharedGenericAny_mD6C17E0F294919C280E583601A298E265D20935A_gshared (void* ___0_destination, int32_t ___1_index, int32_t ___2_stride, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___3_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_tF19C221134244841BC3C05863D0FAA96B103C520 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// T
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_tF19C221134244841BC3C05863D0FAA96B103C520);
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int32_t L_2 = ___2_stride;
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_value : &___3_value), SizeOf_T_tF19C221134244841BC3C05863D0FAA96B103C520);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))), L_3, SizeOf_T_tF19C221134244841BC3C05863D0FAA96B103C520);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 0), (void**)(Il2CppFullySharedGenericAny*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))), (void*)L_3);
		return;
	}
}
// System.Void UnityEngine.UIElements.UIR.Utility::SetVectorArray<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(UnityEngine.MaterialPropertyBlock,System.Int32,Unity.Collections.NativeSlice`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utility_SetVectorArray_TisIl2CppFullySharedGenericStruct_m81E3635992729EE14FE0F341841167D9B847780B_gshared (MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* ___0_props, int32_t ___1_name, NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 ___2_vector4s, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), (&___2_vector4s));
		int32_t L_1;
		L_1 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), (&___2_vector4s));
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_0, L_1))/((int32_t)16)));
		MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* L_2 = ___0_props;
		int32_t L_3 = ___1_name;
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_4 = ___2_vector4s;
		void* L_5;
		L_5 = InvokerFuncInvoker1< void*, NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), NULL, L_4);
		intptr_t L_6;
		memset((&L_6), 0, sizeof(L_6));
		IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline((&L_6), L_5, /*hidden argument*/NULL);
		int32_t L_7 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Utility_t8BCC393462C6270211734BE47CF5350F05EC97AD_il2cpp_TypeInfo_var);
		Utility_SetVectorArray_m36650D854AAE55F689FF622D36CC2AC0B9FD7FB1(L_2, L_3, L_6, L_7, NULL);
		return;
	}
}
// T UnityEngine.UIElements.UxmlAttributeDescription::GetValueFromBag<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(UnityEngine.UIElements.IUxmlAttributes,UnityEngine.UIElements.CreationContext,System.Func`3<System.String,T,T>,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UxmlAttributeDescription_GetValueFromBag_TisIl2CppFullySharedGenericAny_mAD4F4838D245291B33A0A6819595AAE917FA073A_gshared (UxmlAttributeDescription_t742D021489DB2B564142146CAAAC3F9191825EF2* __this, RuntimeObject* ___0_bag, CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257 ___1_cc, Func_3_tE7CCA5D7FC8F72537603F92EA4D2500163145CB0* ___2_converterFunc, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___3_defaultValue, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_t1E03E6979C1409ED55A138FC5A8A1327A498BBAE = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// T
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T_t1E03E6979C1409ED55A138FC5A8A1327A498BBAE);
	const Il2CppFullySharedGenericAny L_11 = L_9;
	const Il2CppFullySharedGenericAny L_12 = L_9;
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T_t1E03E6979C1409ED55A138FC5A8A1327A498BBAE);
	String_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_T_t1E03E6979C1409ED55A138FC5A8A1327A498BBAE);
	memset(V_3, 0, SizeOf_T_t1E03E6979C1409ED55A138FC5A8A1327A498BBAE);
	{
		Func_3_tE7CCA5D7FC8F72537603F92EA4D2500163145CB0* L_0 = ___2_converterFunc;
		V_1 = (bool)((((RuntimeObject*)(Func_3_tE7CCA5D7FC8F72537603F92EA4D2500163145CB0*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBF44A05DB008A507A463F2A13F1907FEB2E4B19F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UxmlAttributeDescription_GetValueFromBag_TisIl2CppFullySharedGenericAny_mAD4F4838D245291B33A0A6819595AAE917FA073A_RuntimeMethod_var)));
	}

IL_0015:
	{
		RuntimeObject* L_3 = ___0_bag;
		CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257 L_4 = ___1_cc;
		bool L_5;
		L_5 = UxmlAttributeDescription_TryGetValueFromBagAsString_mF08874E8E58AD04C20041C076E2447E9AF57C9ED(__this, L_3, L_4, (&V_0), NULL);
		V_2 = L_5;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0030;
		}
	}
	{
		Func_3_tE7CCA5D7FC8F72537603F92EA4D2500163145CB0* L_7 = ___2_converterFunc;
		String_t* L_8 = V_0;
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___3_defaultValue : &___3_defaultValue), SizeOf_T_t1E03E6979C1409ED55A138FC5A8A1327A498BBAE);
		NullCheck(L_7);
		InvokerActionInvoker3< String_t*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), L_7, L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? L_9: *(void**)L_9), (Il2CppFullySharedGenericAny*)L_10);
		il2cpp_codegen_memcpy(V_3, L_10, SizeOf_T_t1E03E6979C1409ED55A138FC5A8A1327A498BBAE);
		goto IL_0035;
	}

IL_0030:
	{
		il2cpp_codegen_memcpy(L_11, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___3_defaultValue : &___3_defaultValue), SizeOf_T_t1E03E6979C1409ED55A138FC5A8A1327A498BBAE);
		il2cpp_codegen_memcpy(V_3, L_11, SizeOf_T_t1E03E6979C1409ED55A138FC5A8A1327A498BBAE);
		goto IL_0035;
	}

IL_0035:
	{
		il2cpp_codegen_memcpy(L_12, V_3, SizeOf_T_t1E03E6979C1409ED55A138FC5A8A1327A498BBAE);
		il2cpp_codegen_memcpy(il2cppRetVal, L_12, SizeOf_T_t1E03E6979C1409ED55A138FC5A8A1327A498BBAE);
		return;
	}
}
// System.Boolean UnityEngine.UIElements.UxmlAttributeDescription::TryGetValueFromBag<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(UnityEngine.UIElements.IUxmlAttributes,UnityEngine.UIElements.CreationContext,System.Func`3<System.String,T,T>,T,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UxmlAttributeDescription_TryGetValueFromBag_TisIl2CppFullySharedGenericAny_mCED4FA8C9BF02C7E06E00E3C378BF3E04890B72F_gshared (UxmlAttributeDescription_t742D021489DB2B564142146CAAAC3F9191825EF2* __this, RuntimeObject* ___0_bag, CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257 ___1_cc, Func_3_tE7CCA5D7FC8F72537603F92EA4D2500163145CB0* ___2_converterFunc, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___3_defaultValue, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___4_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_t8130A5234EDF804DEA72DCA7733FD4A921C26B6C = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	// T
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T_t8130A5234EDF804DEA72DCA7733FD4A921C26B6C);
	const Il2CppFullySharedGenericAny L_12 = L_9;
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T_t8130A5234EDF804DEA72DCA7733FD4A921C26B6C);
	String_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		RuntimeObject* L_0 = ___0_bag;
		CreationContext_t9C57B5BE551CCE200C0A2C72711BFF9DA298C257 L_1 = ___1_cc;
		bool L_2;
		L_2 = UxmlAttributeDescription_TryGetValueFromBagAsString_mF08874E8E58AD04C20041C076E2447E9AF57C9ED(__this, L_0, L_1, (&V_0), NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_003b;
		}
	}
	{
		Func_3_tE7CCA5D7FC8F72537603F92EA4D2500163145CB0* L_4 = ___2_converterFunc;
		V_2 = (bool)((!(((RuntimeObject*)(Func_3_tE7CCA5D7FC8F72537603F92EA4D2500163145CB0*)L_4) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_002c;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_6 = ___4_value;
		Func_3_tE7CCA5D7FC8F72537603F92EA4D2500163145CB0* L_7 = ___2_converterFunc;
		String_t* L_8 = V_0;
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___3_defaultValue : &___3_defaultValue), SizeOf_T_t8130A5234EDF804DEA72DCA7733FD4A921C26B6C);
		NullCheck(L_7);
		InvokerActionInvoker3< String_t*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), L_7, L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? L_9: *(void**)L_9), (Il2CppFullySharedGenericAny*)L_10);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_6, L_10, SizeOf_T_t8130A5234EDF804DEA72DCA7733FD4A921C26B6C);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 2), (void**)(Il2CppFullySharedGenericAny*)L_6, (void*)L_10);
		goto IL_0037;
	}

IL_002c:
	{
		Il2CppFullySharedGenericAny* L_11 = ___4_value;
		il2cpp_codegen_memcpy(L_12, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___3_defaultValue : &___3_defaultValue), SizeOf_T_t8130A5234EDF804DEA72DCA7733FD4A921C26B6C);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_11, L_12, SizeOf_T_t8130A5234EDF804DEA72DCA7733FD4A921C26B6C);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 2), (void**)(Il2CppFullySharedGenericAny*)L_11, (void*)L_12);
	}

IL_0037:
	{
		V_3 = (bool)1;
		goto IL_003f;
	}

IL_003b:
	{
		V_3 = (bool)0;
		goto IL_003f;
	}

IL_003f:
	{
		bool L_13 = V_3;
		return L_13;
	}
}
// System.Numerics.Vector`1<System.UInt64> System.Numerics.Vector::AsVectorUInt64<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(System.Numerics.Vector`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A Vector_AsVectorUInt64_TisIl2CppFullySharedGenericStruct_mD3B6243B6DD2F19C7DA294F642D66F699D797811_gshared (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___0_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_1;
		L_1 = InvokerFuncInvoker1< Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A, Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_0);
		return L_1;
	}
}
// System.Numerics.Vector`1<T> System.Numerics.Vector::Equals<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(System.Numerics.Vector`1<T>,System.Numerics.Vector`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 Vector_Equals_TisIl2CppFullySharedGenericStruct_m589C7C54FDBBA8A38CC7672C2E2734EB16BDFD24_gshared (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___0_left, Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___1_right, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_0 = ___0_left;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_1 = ___1_right;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_2;
		L_2 = InvokerFuncInvoker2< Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2, Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2, Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_0, L_1);
		return L_2;
	}
}
// UnityEngine.UIElements.Experimental.ValueAnimation`1<T> UnityEngine.UIElements.VisualElement::StartAnimation<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(UnityEngine.UIElements.Experimental.ValueAnimation`1<T>,System.Func`2<UnityEngine.UIElements.VisualElement,T>,T,System.Int32,System.Action`2<UnityEngine.UIElements.VisualElement,T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueAnimation_1_tDA4866B3FE9CA9CF66BAA0D3DB3591B35CC1C482* VisualElement_StartAnimation_TisIl2CppFullySharedGenericAny_m300B910AACD4424D5526A2A5802A0B43DCDDC3A9_gshared (/*UnityEngine.UIElements.Experimental.ValueAnimation`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/ValueAnimation_1_tDA4866B3FE9CA9CF66BAA0D3DB3591B35CC1C482* ___0_anim, Func_2_t1A4B0E4DC4C1E0796BCC42B35916E26E1F91056C* ___1_fromValueGetter, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___2_to, int32_t ___3_durationMs, Action_2_t31DE204344410D5DD02FBF738CE4A5EE7EDC040E* ___4_onValueChanged, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_t57C63BDE4B938B0DA7CC7EDBEC89B668884105BA = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	// T
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t57C63BDE4B938B0DA7CC7EDBEC89B668884105BA);
	ValueAnimation_1_tDA4866B3FE9CA9CF66BAA0D3DB3591B35CC1C482* V_0 = NULL;
	{
		ValueAnimation_1_tDA4866B3FE9CA9CF66BAA0D3DB3591B35CC1C482* L_0 = ___0_anim;
		Func_2_t1A4B0E4DC4C1E0796BCC42B35916E26E1F91056C* L_1 = ___1_fromValueGetter;
		NullCheck(L_0);
		InvokerActionInvoker1< Func_2_t1A4B0E4DC4C1E0796BCC42B35916E26E1F91056C* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), L_0, L_1);
		ValueAnimation_1_tDA4866B3FE9CA9CF66BAA0D3DB3591B35CC1C482* L_2 = ___0_anim;
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? ___2_to : &___2_to), SizeOf_T_t57C63BDE4B938B0DA7CC7EDBEC89B668884105BA);
		NullCheck(L_2);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? L_3: *(void**)L_3));
		ValueAnimation_1_tDA4866B3FE9CA9CF66BAA0D3DB3591B35CC1C482* L_4 = ___0_anim;
		int32_t L_5 = ___3_durationMs;
		NullCheck(L_4);
		InvokerActionInvoker1< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)), il2cpp_rgctx_method(method->rgctx_data, 5), L_4, L_5);
		ValueAnimation_1_tDA4866B3FE9CA9CF66BAA0D3DB3591B35CC1C482* L_6 = ___0_anim;
		Action_2_t31DE204344410D5DD02FBF738CE4A5EE7EDC040E* L_7 = ___4_onValueChanged;
		NullCheck(L_6);
		InvokerActionInvoker1< Action_2_t31DE204344410D5DD02FBF738CE4A5EE7EDC040E* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 7)), il2cpp_rgctx_method(method->rgctx_data, 7), L_6, L_7);
		ValueAnimation_1_tDA4866B3FE9CA9CF66BAA0D3DB3591B35CC1C482* L_8 = ___0_anim;
		NullCheck(L_8);
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 8)), il2cpp_rgctx_method(method->rgctx_data, 8), L_8);
		ValueAnimation_1_tDA4866B3FE9CA9CF66BAA0D3DB3591B35CC1C482* L_9 = ___0_anim;
		V_0 = L_9;
		goto IL_002d;
	}

IL_002d:
	{
		ValueAnimation_1_tDA4866B3FE9CA9CF66BAA0D3DB3591B35CC1C482* L_10 = V_0;
		return L_10;
	}
}
// System.Void UnityEngine.UIElements.VisualTreeUpdater::SetUpdater<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(UnityEngine.UIElements.VisualTreeUpdatePhase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualTreeUpdater_SetUpdater_TisIl2CppFullySharedGenericAny_m4EF351A8B23A4EE9E88C20E5398468F5AC304360_gshared (VisualTreeUpdater_tFDE7D9F9A146A26B2ED69565B7BD142B416AB9C9* __this, int32_t ___0_phase, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(T)
	const uint32_t SizeOf_T_t3D003580B0C7BDFA3E09B54DB86152417970C81A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	void* L_6 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	// T
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_t3D003580B0C7BDFA3E09B54DB86152417970C81A);
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T_t3D003580B0C7BDFA3E09B54DB86152417970C81A);
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T_t3D003580B0C7BDFA3E09B54DB86152417970C81A);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_t3D003580B0C7BDFA3E09B54DB86152417970C81A);
	memset(V_0, 0, SizeOf_T_t3D003580B0C7BDFA3E09B54DB86152417970C81A);
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T_t3D003580B0C7BDFA3E09B54DB86152417970C81A);
	memset(V_1, 0, SizeOf_T_t3D003580B0C7BDFA3E09B54DB86152417970C81A);
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		UpdaterArray_tF8D43D2A3598E7C17ABB5308E83FDECF1F36A449* L_0 = __this->___m_UpdaterArray_1;
		int32_t L_1 = ___0_phase;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = UpdaterArray_get_Item_m6DADA11557BD3FE2E6680F3C1F6F828DB4EE255C(L_0, L_1, NULL);
		RuntimeObject* L_3 = L_2;
		G_B1_0 = L_3;
		if (L_3)
		{
			G_B2_0 = L_3;
			goto IL_0013;
		}
	}
	{
		goto IL_0019;
	}

IL_0013:
	{
		NullCheck((RuntimeObject*)G_B2_0);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)G_B2_0);
	}

IL_0019:
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, (Il2CppFullySharedGenericAny*)L_4);
		il2cpp_codegen_memcpy(V_1, L_4, SizeOf_T_t3D003580B0C7BDFA3E09B54DB86152417970C81A);
		BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* L_5 = __this->___m_Panel_0;
		ConstrainedActionInvoker1< BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), L_6, (void*)(Il2CppFullySharedGenericAny*)V_1, L_5);
		il2cpp_codegen_memcpy(L_7, V_1, SizeOf_T_t3D003580B0C7BDFA3E09B54DB86152417970C81A);
		il2cpp_codegen_memcpy(V_0, L_7, SizeOf_T_t3D003580B0C7BDFA3E09B54DB86152417970C81A);
		UpdaterArray_tF8D43D2A3598E7C17ABB5308E83FDECF1F36A449* L_8 = __this->___m_UpdaterArray_1;
		int32_t L_9 = ___0_phase;
		il2cpp_codegen_memcpy(L_10, V_0, SizeOf_T_t3D003580B0C7BDFA3E09B54DB86152417970C81A);
		RuntimeObject* L_11 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), L_10);
		NullCheck(L_8);
		UpdaterArray_set_Item_m2961BC09E3C22E6D3887BB8E48A367BAEF847A11(L_8, L_9, (RuntimeObject*)L_11, NULL);
		return;
	}
}
// T System.Threading.Volatile::Read<System.Object>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Volatile_Read_TisRuntimeObject_mDE75C7462350B2A7FB1546BCE22D13CBD69AC088_gshared (RuntimeObject** ___0_location, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		RuntimeObject** L_0 = ___0_location;
		VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99* L_1;
		L_1 = il2cpp_unsafe_as_ref<VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99>(L_0);
		RuntimeObject* L_2 = L_1->___Value_0;
		il2cpp_codegen_memory_barrier();
		RuntimeObject* L_3;
		L_3 = il2cpp_unsafe_as<RuntimeObject*>(L_2);
		return L_3;
	}
}
// System.Void System.Threading.Volatile::Write<System.Object>(T&,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Volatile_Write_TisRuntimeObject_mBB6C58646958F01615FEBF405DCE2A9926F81962_gshared (RuntimeObject** ___0_location, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		RuntimeObject** L_0 = ___0_location;
		VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99* L_1;
		L_1 = il2cpp_unsafe_as_ref<VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99>(L_0);
		RuntimeObject* L_2 = ___1_value;
		il2cpp_codegen_memory_barrier();
		L_1->___Value_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___Value_0), (void*)L_2);
		return;
	}
}
// T System.Xml.Linq.XDocument::GetFirstNode<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XDocument_GetFirstNode_TisRuntimeObject_mB6611AFC4A5D605253FE7A3ABB8BFCB6250CA705_gshared (XDocument_tFD643046CAF39623C3D8AA1693390D5EE08E82F1* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XNode_t185C922661054AAD14F49676DD6F3CB10D652A30_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	XNode_t185C922661054AAD14F49676DD6F3CB10D652A30* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		RuntimeObject* L_0 = ((XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF*)__this)->___content_3;
		V_0 = ((XNode_t185C922661054AAD14F49676DD6F3CB10D652A30*)IsInstClass((RuntimeObject*)L_0, XNode_t185C922661054AAD14F49676DD6F3CB10D652A30_il2cpp_TypeInfo_var));
		XNode_t185C922661054AAD14F49676DD6F3CB10D652A30* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0035;
		}
	}

IL_000f:
	{
		XNode_t185C922661054AAD14F49676DD6F3CB10D652A30* L_2 = V_0;
		NullCheck(L_2);
		XNode_t185C922661054AAD14F49676DD6F3CB10D652A30* L_3 = L_2->___next_2;
		V_0 = L_3;
		XNode_t185C922661054AAD14F49676DD6F3CB10D652A30* L_4 = V_0;
		V_1 = ((RuntimeObject*)Castclass((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_4, il2cpp_rgctx_data(method->rgctx_data, 0))), il2cpp_rgctx_data(method->rgctx_data, 0)));
		RuntimeObject* L_5 = V_1;
		if (!L_5)
		{
			goto IL_002c;
		}
	}
	{
		RuntimeObject* L_6 = V_1;
		return L_6;
	}

IL_002c:
	{
		XNode_t185C922661054AAD14F49676DD6F3CB10D652A30* L_7 = V_0;
		RuntimeObject* L_8 = ((XContainer_tF94A2D69B11B71834E4E5531DD59E627CBFE2BBF*)__this)->___content_3;
		if ((!(((RuntimeObject*)(XNode_t185C922661054AAD14F49676DD6F3CB10D652A30*)L_7) == ((RuntimeObject*)(RuntimeObject*)L_8))))
		{
			goto IL_000f;
		}
	}

IL_0035:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject*));
		RuntimeObject* L_9 = V_2;
		return L_9;
	}
}
// T System.Xml.Linq.XObject::Annotation<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XObject_Annotation_TisRuntimeObject_mA59EF6437D825A65AED4C032B09C4AAEAD53631E_gshared (XObject_t1E867FBE626AA0DC878BDDFC1ABCF19F1A4B5C29* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	{
		RuntimeObject* L_0 = __this->___annotations_1;
		if (!L_0)
		{
			goto IL_0053;
		}
	}
	{
		RuntimeObject* L_1 = __this->___annotations_1;
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = V_0;
		if (L_2)
		{
			goto IL_0028;
		}
	}
	{
		RuntimeObject* L_3 = __this->___annotations_1;
		return ((RuntimeObject*)Castclass((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_3, il2cpp_rgctx_data(method->rgctx_data, 0))), il2cpp_rgctx_data(method->rgctx_data, 0)));
	}

IL_0028:
	{
		V_1 = 0;
		goto IL_004d;
	}

IL_002c:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		RuntimeObject* L_8 = V_2;
		if (!L_8)
		{
			goto IL_0053;
		}
	}
	{
		RuntimeObject* L_9 = V_2;
		V_3 = ((RuntimeObject*)Castclass((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_9, il2cpp_rgctx_data(method->rgctx_data, 0))), il2cpp_rgctx_data(method->rgctx_data, 0)));
		RuntimeObject* L_10 = V_3;
		if (!L_10)
		{
			goto IL_0049;
		}
	}
	{
		RuntimeObject* L_11 = V_3;
		return L_11;
	}

IL_0049:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_004d:
	{
		int32_t L_13 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_0;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_002c;
		}
	}

IL_0053:
	{
		il2cpp_codegen_initobj((&V_4), sizeof(RuntimeObject*));
		RuntimeObject* L_15 = V_4;
		return L_15;
	}
}
// T[] System.Xml.Schema.XmlListConverter::ToArray<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Object,System.Xml.IXmlNamespaceResolver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* XmlListConverter_ToArray_TisIl2CppFullySharedGenericAny_mE842A5B9F83A5858104C85C66B591AD394929357_gshared (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA* __this, RuntimeObject* ___0_list, RuntimeObject* ___1_nsResolver, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(T)
	const uint32_t SizeOf_T_tDC5A1FFD4912C532F838E238130A2E3F50CA030C = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	// T
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_T_tDC5A1FFD4912C532F838E238130A2E3F50CA030C);
	const Il2CppFullySharedGenericAny L_37 = L_15;
	RuntimeObject* V_0 = NULL;
	List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* V_1 = NULL;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		RuntimeObject* L_0 = ___0_list;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)L_3);
		V_2 = L_4;
		V_3 = 0;
		goto IL_0047;
	}

IL_001a:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = V_2;
		int32_t L_6 = V_3;
		XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* L_7 = __this->___atomicConverter_32;
		RuntimeObject* L_8 = V_0;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_8, L_9);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		RuntimeObject* L_13 = ___1_nsResolver;
		NullCheck(L_7);
		RuntimeObject* L_14;
		L_14 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, Type_t*, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, L_7, L_10, L_12, L_13);
		void* L_16 = UnBox_Any(L_14, il2cpp_rgctx_data(method->rgctx_data, 2), L_15);
		NullCheck(L_5);
		il2cpp_codegen_memcpy((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)), (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_16))), SizeOf_T_tDC5A1FFD4912C532F838E238130A2E3F50CA030C);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 2), (void**)(L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)), (void*)(((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_16))));
		int32_t L_17 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0047:
	{
		int32_t L_18 = V_3;
		RuntimeObject* L_19 = V_0;
		NullCheck((RuntimeObject*)L_19);
		int32_t L_20;
		L_20 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_19);
		if ((((int32_t)L_18) < ((int32_t)L_20)))
		{
			goto IL_001a;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_21 = V_2;
		return L_21;
	}

IL_0052:
	{
		RuntimeObject* L_22 = ___0_list;
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_23 = (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 3));
		NullCheck(L_23);
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), L_23);
		V_1 = L_23;
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_22, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var)));
		RuntimeObject* L_24;
		L_24 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_22, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var)));
		V_4 = L_24;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_009e:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_25 = V_4;
					V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_26 = V_6;
					if (!L_26)
					{
						goto IL_00b2;
					}
				}
				{
					RuntimeObject* L_27 = V_6;
					NullCheck(L_27);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_27);
				}

IL_00b2:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0093_1;
			}

IL_0067_1:
			{
				RuntimeObject* L_28 = V_4;
				NullCheck(L_28);
				RuntimeObject* L_29;
				L_29 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_28);
				V_5 = L_29;
				List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_30 = V_1;
				XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* L_31 = __this->___atomicConverter_32;
				RuntimeObject* L_32 = V_5;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_33 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_34;
				L_34 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_33, NULL);
				RuntimeObject* L_35 = ___1_nsResolver;
				NullCheck(L_31);
				RuntimeObject* L_36;
				L_36 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, Type_t*, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, L_31, L_32, L_34, L_35);
				void* L_38 = UnBox_Any(L_36, il2cpp_rgctx_data(method->rgctx_data, 2), L_37);
				NullCheck(L_30);
				InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)), il2cpp_rgctx_method(method->rgctx_data, 5), L_30, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_38))): *(void**)(((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_38)))));
			}

IL_0093_1:
			{
				RuntimeObject* L_39 = V_4;
				NullCheck(L_39);
				bool L_40;
				L_40 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_39);
				if (L_40)
				{
					goto IL_0067_1;
				}
			}
			{
				goto IL_00b3;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b3:
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_41 = V_1;
		NullCheck(L_41);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_42;
		L_42 = InvokerFuncInvoker0< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)), il2cpp_rgctx_method(method->rgctx_data, 6), L_41);
		return L_42;
	}
}
// YooAsset.AllAssetsHandle YooAsset.YooAssets::LoadAllAssetsAsync<System.Object>(System.String,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AllAssetsHandle_t78A9BC3036FC89AC7709A19268CCFC3A436D85FE* YooAssets_LoadAllAssetsAsync_TisRuntimeObject_mCD13C4D5B1117384CCD8EDA54C011E09064A5F80_gshared (String_t* ___0_location, uint32_t ___1_priority, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		// return _defaultPackage.LoadAllAssetsAsync<TObject>(location, priority);
		il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* L_0 = ((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____defaultPackage_3;
		String_t* L_1 = ___0_location;
		uint32_t L_2 = ___1_priority;
		NullCheck(L_0);
		AllAssetsHandle_t78A9BC3036FC89AC7709A19268CCFC3A436D85FE* L_3;
		L_3 = InvokerFuncInvoker2< AllAssetsHandle_t78A9BC3036FC89AC7709A19268CCFC3A436D85FE*, String_t*, uint32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), L_0, L_1, L_2);
		return L_3;
	}
}
// YooAsset.AllAssetsHandle YooAsset.YooAssets::LoadAllAssetsSync<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AllAssetsHandle_t78A9BC3036FC89AC7709A19268CCFC3A436D85FE* YooAssets_LoadAllAssetsSync_TisRuntimeObject_m4A3AFC3377D4565D0D3F1C30AD6027852630FF6D_gshared (String_t* ___0_location, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		// return _defaultPackage.LoadAllAssetsSync<TObject>(location);
		il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* L_0 = ((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____defaultPackage_3;
		String_t* L_1 = ___0_location;
		NullCheck(L_0);
		AllAssetsHandle_t78A9BC3036FC89AC7709A19268CCFC3A436D85FE* L_2;
		L_2 = InvokerFuncInvoker1< AllAssetsHandle_t78A9BC3036FC89AC7709A19268CCFC3A436D85FE*, String_t* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), L_0, L_1);
		return L_2;
	}
}
// YooAsset.AssetHandle YooAsset.YooAssets::LoadAssetAsync<System.Object>(System.String,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AssetHandle_tA226E2C9CFE7231AF71DFADFCBF947D4D1CC2AF3* YooAssets_LoadAssetAsync_TisRuntimeObject_mB4A4EB0FB3800D12482285F075B89F4D2FB5B7A8_gshared (String_t* ___0_location, uint32_t ___1_priority, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		// return _defaultPackage.LoadAssetAsync<TObject>(location, priority);
		il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* L_0 = ((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____defaultPackage_3;
		String_t* L_1 = ___0_location;
		uint32_t L_2 = ___1_priority;
		NullCheck(L_0);
		AssetHandle_tA226E2C9CFE7231AF71DFADFCBF947D4D1CC2AF3* L_3;
		L_3 = InvokerFuncInvoker2< AssetHandle_tA226E2C9CFE7231AF71DFADFCBF947D4D1CC2AF3*, String_t*, uint32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), L_0, L_1, L_2);
		return L_3;
	}
}
// YooAsset.AssetHandle YooAsset.YooAssets::LoadAssetSync<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AssetHandle_tA226E2C9CFE7231AF71DFADFCBF947D4D1CC2AF3* YooAssets_LoadAssetSync_TisRuntimeObject_mEA5AD7229B6A463DFC79E3B68B1012D0B0B12F29_gshared (String_t* ___0_location, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		// return _defaultPackage.LoadAssetSync<TObject>(location);
		il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* L_0 = ((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____defaultPackage_3;
		String_t* L_1 = ___0_location;
		NullCheck(L_0);
		AssetHandle_tA226E2C9CFE7231AF71DFADFCBF947D4D1CC2AF3* L_2;
		L_2 = InvokerFuncInvoker1< AssetHandle_tA226E2C9CFE7231AF71DFADFCBF947D4D1CC2AF3*, String_t* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), L_0, L_1);
		return L_2;
	}
}
// YooAsset.SubAssetsHandle YooAsset.YooAssets::LoadSubAssetsAsync<System.Object>(System.String,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SubAssetsHandle_tDC3D1998EC32E3948617E5F6EA89DFC035EF2F2B* YooAssets_LoadSubAssetsAsync_TisRuntimeObject_m1952A249A823B9DEBC9158BE650949152C8E72E2_gshared (String_t* ___0_location, uint32_t ___1_priority, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		// return _defaultPackage.LoadSubAssetsAsync<TObject>(location, priority);
		il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* L_0 = ((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____defaultPackage_3;
		String_t* L_1 = ___0_location;
		uint32_t L_2 = ___1_priority;
		NullCheck(L_0);
		SubAssetsHandle_tDC3D1998EC32E3948617E5F6EA89DFC035EF2F2B* L_3;
		L_3 = InvokerFuncInvoker2< SubAssetsHandle_tDC3D1998EC32E3948617E5F6EA89DFC035EF2F2B*, String_t*, uint32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), L_0, L_1, L_2);
		return L_3;
	}
}
// YooAsset.SubAssetsHandle YooAsset.YooAssets::LoadSubAssetsSync<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SubAssetsHandle_tDC3D1998EC32E3948617E5F6EA89DFC035EF2F2B* YooAssets_LoadSubAssetsSync_TisRuntimeObject_m396EC96183F5650403E8B93C22E3D63ACA9DC173_gshared (String_t* ___0_location, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		// return _defaultPackage.LoadSubAssetsSync<TObject>(location);
		il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* L_0 = ((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____defaultPackage_3;
		String_t* L_1 = ___0_location;
		NullCheck(L_0);
		SubAssetsHandle_tDC3D1998EC32E3948617E5F6EA89DFC035EF2F2B* L_2;
		L_2 = InvokerFuncInvoker1< SubAssetsHandle_tDC3D1998EC32E3948617E5F6EA89DFC035EF2F2B*, String_t* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), L_0, L_1);
		return L_2;
	}
}
// ArrayType UnityEngine._AndroidJNIHelper::ConvertFromJNIArray<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _AndroidJNIHelper_ConvertFromJNIArray_TisIl2CppFullySharedGenericAny_mD6B660A63955117687D6131FC1DB255161D1A2BA_gshared (intptr_t ___0_array, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(ArrayType)
	const uint32_t SizeOf_ArrayType_t15B09198CBBCA055D6DA2DC75D66B572B87D0FBF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// ArrayType
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_ArrayType_t15B09198CBBCA055D6DA2DC75D66B572B87D0FBF);
	const Il2CppFullySharedGenericAny L_20 = L_12;
	const Il2CppFullySharedGenericAny L_28 = L_12;
	const Il2CppFullySharedGenericAny L_36 = L_12;
	const Il2CppFullySharedGenericAny L_44 = L_12;
	const Il2CppFullySharedGenericAny L_52 = L_12;
	const Il2CppFullySharedGenericAny L_60 = L_12;
	const Il2CppFullySharedGenericAny L_68 = L_12;
	const Il2CppFullySharedGenericAny L_76 = L_12;
	const Il2CppFullySharedGenericAny L_99 = L_12;
	const Il2CppFullySharedGenericAny L_122 = L_12;
	const Il2CppFullySharedGenericAny L_129 = L_12;
	const Il2CppFullySharedGenericAny L_130 = L_12;
	Type_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_ArrayType_t15B09198CBBCA055D6DA2DC75D66B572B87D0FBF);
	memset(V_3, 0, SizeOf_ArrayType_t15B09198CBBCA055D6DA2DC75D66B572B87D0FBF);
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_14 = NULL;
	int32_t V_15 = 0;
	intptr_t V_16;
	memset((&V_16), 0, sizeof(V_16));
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* V_20 = NULL;
	int32_t V_21 = 0;
	intptr_t V_22;
	memset((&V_22), 0, sizeof(V_22));
	bool V_23 = false;
	Il2CppFullySharedGenericAny V_24 = alloca(SizeOf_ArrayType_t15B09198CBBCA055D6DA2DC75D66B572B87D0FBF);
	memset(V_24, 0, SizeOf_ArrayType_t15B09198CBBCA055D6DA2DC75D66B572B87D0FBF);
	Type_t* G_B32_0 = NULL;
	String_t* G_B32_1 = NULL;
	Type_t* G_B31_0 = NULL;
	String_t* G_B31_1 = NULL;
	String_t* G_B33_0 = NULL;
	String_t* G_B33_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		Type_t* L_2;
		L_2 = VirtualFuncInvoker0< Type_t* >::Invoke(46 /* System.Type System.Type::GetElementType() */, L_1);
		V_0 = L_2;
		Type_t* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = AndroidReflection_IsPrimitive_mA41A9ECECE3D73679C79DC8B0FDD32B59570DF25(L_3, NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0173;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		V_2 = (bool)((((RuntimeObject*)(Type_t*)L_6) == ((RuntimeObject*)(Type_t*)L_8))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0041;
		}
	}
	{
		intptr_t L_10 = ___0_array;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11;
		L_11 = AndroidJNISafe_FromIntArray_mC4C4DC70FFA39CD6E3E02FDAC7192324E6D4614E(L_10, NULL);
		void* L_13 = UnBox_Any((RuntimeObject*)L_11, il2cpp_rgctx_data(method->rgctx_data, 1), L_12);
		il2cpp_codegen_memcpy(V_3, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_13))), SizeOf_ArrayType_t15B09198CBBCA055D6DA2DC75D66B572B87D0FBF);
		goto IL_0272;
	}

IL_0041:
	{
		Type_t* L_14 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		V_4 = (bool)((((RuntimeObject*)(Type_t*)L_14) == ((RuntimeObject*)(Type_t*)L_16))? 1 : 0);
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_0065;
		}
	}
	{
		intptr_t L_18 = ___0_array;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_19;
		L_19 = AndroidJNISafe_FromBooleanArray_m36ED740401185EC0A959CA0F96A324A69E668646(L_18, NULL);
		void* L_21 = UnBox_Any((RuntimeObject*)L_19, il2cpp_rgctx_data(method->rgctx_data, 1), L_20);
		il2cpp_codegen_memcpy(V_3, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_21))), SizeOf_ArrayType_t15B09198CBBCA055D6DA2DC75D66B572B87D0FBF);
		goto IL_0272;
	}

IL_0065:
	{
		Type_t* L_22 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		V_5 = (bool)((((RuntimeObject*)(Type_t*)L_22) == ((RuntimeObject*)(Type_t*)L_24))? 1 : 0);
		bool L_25 = V_5;
		if (!L_25)
		{
			goto IL_0095;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2, NULL);
		intptr_t L_26 = ___0_array;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27;
		L_27 = AndroidJNISafe_FromByteArray_mB06EF0FDBF6C738231E8F9D4998C38551131C4C5(L_26, NULL);
		void* L_29 = UnBox_Any((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 1), L_28);
		il2cpp_codegen_memcpy(V_3, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_29))), SizeOf_ArrayType_t15B09198CBBCA055D6DA2DC75D66B572B87D0FBF);
		goto IL_0272;
	}

IL_0095:
	{
		Type_t* L_30 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		V_6 = (bool)((((RuntimeObject*)(Type_t*)L_30) == ((RuntimeObject*)(Type_t*)L_32))? 1 : 0);
		bool L_33 = V_6;
		if (!L_33)
		{
			goto IL_00b9;
		}
	}
	{
		intptr_t L_34 = ___0_array;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_35;
		L_35 = AndroidJNISafe_FromSByteArray_m261D638D8B059AB777BEF0BEFDD0822717DFF2B1(L_34, NULL);
		void* L_37 = UnBox_Any((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 1), L_36);
		il2cpp_codegen_memcpy(V_3, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_37))), SizeOf_ArrayType_t15B09198CBBCA055D6DA2DC75D66B572B87D0FBF);
		goto IL_0272;
	}

IL_00b9:
	{
		Type_t* L_38 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_39 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_40;
		L_40 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_39, NULL);
		V_7 = (bool)((((RuntimeObject*)(Type_t*)L_38) == ((RuntimeObject*)(Type_t*)L_40))? 1 : 0);
		bool L_41 = V_7;
		if (!L_41)
		{
			goto IL_00dd;
		}
	}
	{
		intptr_t L_42 = ___0_array;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_43;
		L_43 = AndroidJNISafe_FromShortArray_m62C0CB2D0BAE96D4B8CE365630361150EBE884FC(L_42, NULL);
		void* L_45 = UnBox_Any((RuntimeObject*)L_43, il2cpp_rgctx_data(method->rgctx_data, 1), L_44);
		il2cpp_codegen_memcpy(V_3, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_45))), SizeOf_ArrayType_t15B09198CBBCA055D6DA2DC75D66B572B87D0FBF);
		goto IL_0272;
	}

IL_00dd:
	{
		Type_t* L_46 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_47 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_48;
		L_48 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_47, NULL);
		V_8 = (bool)((((RuntimeObject*)(Type_t*)L_46) == ((RuntimeObject*)(Type_t*)L_48))? 1 : 0);
		bool L_49 = V_8;
		if (!L_49)
		{
			goto IL_0101;
		}
	}
	{
		intptr_t L_50 = ___0_array;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_51;
		L_51 = AndroidJNISafe_FromLongArray_mC4D73C0DA27F212947AB85AA2030A35BECDF8288(L_50, NULL);
		void* L_53 = UnBox_Any((RuntimeObject*)L_51, il2cpp_rgctx_data(method->rgctx_data, 1), L_52);
		il2cpp_codegen_memcpy(V_3, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_53))), SizeOf_ArrayType_t15B09198CBBCA055D6DA2DC75D66B572B87D0FBF);
		goto IL_0272;
	}

IL_0101:
	{
		Type_t* L_54 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_55 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_56;
		L_56 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_55, NULL);
		V_9 = (bool)((((RuntimeObject*)(Type_t*)L_54) == ((RuntimeObject*)(Type_t*)L_56))? 1 : 0);
		bool L_57 = V_9;
		if (!L_57)
		{
			goto IL_0125;
		}
	}
	{
		intptr_t L_58 = ___0_array;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_59;
		L_59 = AndroidJNISafe_FromFloatArray_mDE02985159EEFD2CB28611C797AC21DE8B6300B8(L_58, NULL);
		void* L_61 = UnBox_Any((RuntimeObject*)L_59, il2cpp_rgctx_data(method->rgctx_data, 1), L_60);
		il2cpp_codegen_memcpy(V_3, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_61))), SizeOf_ArrayType_t15B09198CBBCA055D6DA2DC75D66B572B87D0FBF);
		goto IL_0272;
	}

IL_0125:
	{
		Type_t* L_62 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_63 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_64;
		L_64 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_63, NULL);
		V_10 = (bool)((((RuntimeObject*)(Type_t*)L_62) == ((RuntimeObject*)(Type_t*)L_64))? 1 : 0);
		bool L_65 = V_10;
		if (!L_65)
		{
			goto IL_0149;
		}
	}
	{
		intptr_t L_66 = ___0_array;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_67;
		L_67 = AndroidJNISafe_FromDoubleArray_mDEA8F2C7854101272F3A2733F351B570AAD5D9D9(L_66, NULL);
		void* L_69 = UnBox_Any((RuntimeObject*)L_67, il2cpp_rgctx_data(method->rgctx_data, 1), L_68);
		il2cpp_codegen_memcpy(V_3, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_69))), SizeOf_ArrayType_t15B09198CBBCA055D6DA2DC75D66B572B87D0FBF);
		goto IL_0272;
	}

IL_0149:
	{
		Type_t* L_70 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_71 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_72;
		L_72 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_71, NULL);
		V_11 = (bool)((((RuntimeObject*)(Type_t*)L_70) == ((RuntimeObject*)(Type_t*)L_72))? 1 : 0);
		bool L_73 = V_11;
		if (!L_73)
		{
			goto IL_016d;
		}
	}
	{
		intptr_t L_74 = ___0_array;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_75;
		L_75 = AndroidJNISafe_FromCharArray_m54EDC9D2BE92F9973F4E00EE953EE242B231EA96(L_74, NULL);
		void* L_77 = UnBox_Any((RuntimeObject*)L_75, il2cpp_rgctx_data(method->rgctx_data, 1), L_76);
		il2cpp_codegen_memcpy(V_3, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_77))), SizeOf_ArrayType_t15B09198CBBCA055D6DA2DC75D66B572B87D0FBF);
		goto IL_0272;
	}

IL_016d:
	{
		goto IL_0265;
	}

IL_0173:
	{
		Type_t* L_78 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_79 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_80;
		L_80 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_79, NULL);
		V_12 = (bool)((((RuntimeObject*)(Type_t*)L_78) == ((RuntimeObject*)(Type_t*)L_80))? 1 : 0);
		bool L_81 = V_12;
		if (!L_81)
		{
			goto IL_01dc;
		}
	}
	{
		intptr_t L_82 = ___0_array;
		int32_t L_83;
		L_83 = AndroidJNISafe_GetArrayLength_m809419F04C9BB93FED5B4A89F0539231C9B90E6F(L_82, NULL);
		V_13 = L_83;
		int32_t L_84 = V_13;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_85 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)L_84);
		V_14 = L_85;
		V_15 = 0;
		goto IL_01c3;
	}

IL_019d:
	{
		intptr_t L_86 = ___0_array;
		int32_t L_87 = V_15;
		intptr_t L_88;
		L_88 = AndroidJNI_GetObjectArrayElement_mC4CAF9744617F69EFCD95B71D95492DA20A0FACE(L_86, L_87, NULL);
		V_16 = L_88;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_89 = V_14;
		int32_t L_90 = V_15;
		intptr_t L_91 = V_16;
		String_t* L_92;
		L_92 = AndroidJNISafe_GetStringChars_mE246814CD8FF4EDDEE6EBF107367C4A8EAF03849(L_91, NULL);
		NullCheck(L_89);
		ArrayElementTypeCheck (L_89, L_92);
		(L_89)->SetAt(static_cast<il2cpp_array_size_t>(L_90), (String_t*)L_92);
		intptr_t L_93 = V_16;
		AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_93, NULL);
		int32_t L_94 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_94, 1));
	}

IL_01c3:
	{
		int32_t L_95 = V_15;
		int32_t L_96 = V_13;
		V_17 = (bool)((((int32_t)L_95) < ((int32_t)L_96))? 1 : 0);
		bool L_97 = V_17;
		if (L_97)
		{
			goto IL_019d;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_98 = V_14;
		void* L_100 = UnBox_Any((RuntimeObject*)L_98, il2cpp_rgctx_data(method->rgctx_data, 1), L_99);
		il2cpp_codegen_memcpy(V_3, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_100))), SizeOf_ArrayType_t15B09198CBBCA055D6DA2DC75D66B572B87D0FBF);
		goto IL_0272;
	}

IL_01dc:
	{
		Type_t* L_101 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_102 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_103;
		L_103 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_102, NULL);
		V_18 = (bool)((((RuntimeObject*)(Type_t*)L_101) == ((RuntimeObject*)(Type_t*)L_103))? 1 : 0);
		bool L_104 = V_18;
		if (!L_104)
		{
			goto IL_0242;
		}
	}
	{
		intptr_t L_105 = ___0_array;
		int32_t L_106;
		L_106 = AndroidJNISafe_GetArrayLength_m809419F04C9BB93FED5B4A89F0539231C9B90E6F(L_105, NULL);
		V_19 = L_106;
		int32_t L_107 = V_19;
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_108 = (AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)SZArrayNew(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var, (uint32_t)L_107);
		V_20 = L_108;
		V_21 = 0;
		goto IL_022c;
	}

IL_0206:
	{
		intptr_t L_109 = ___0_array;
		int32_t L_110 = V_21;
		intptr_t L_111;
		L_111 = AndroidJNI_GetObjectArrayElement_mC4CAF9744617F69EFCD95B71D95492DA20A0FACE(L_109, L_110, NULL);
		V_22 = L_111;
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_112 = V_20;
		int32_t L_113 = V_21;
		intptr_t L_114 = V_22;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_115 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_115);
		AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B(L_115, L_114, NULL);
		NullCheck(L_112);
		ArrayElementTypeCheck (L_112, L_115);
		(L_112)->SetAt(static_cast<il2cpp_array_size_t>(L_113), (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_115);
		intptr_t L_116 = V_22;
		AndroidJNISafe_DeleteLocalRef_m20303564C88A1B90E3D8D7A7D893392E18967094(L_116, NULL);
		int32_t L_117 = V_21;
		V_21 = ((int32_t)il2cpp_codegen_add(L_117, 1));
	}

IL_022c:
	{
		int32_t L_118 = V_21;
		int32_t L_119 = V_19;
		V_23 = (bool)((((int32_t)L_118) < ((int32_t)L_119))? 1 : 0);
		bool L_120 = V_23;
		if (L_120)
		{
			goto IL_0206;
		}
	}
	{
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_121 = V_20;
		void* L_123 = UnBox_Any((RuntimeObject*)L_121, il2cpp_rgctx_data(method->rgctx_data, 1), L_122);
		il2cpp_codegen_memcpy(V_3, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_123))), SizeOf_ArrayType_t15B09198CBBCA055D6DA2DC75D66B572B87D0FBF);
		goto IL_0272;
	}

IL_0242:
	{
		Type_t* L_124 = V_0;
		Type_t* L_125 = L_124;
		G_B31_0 = L_125;
		G_B31_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
		if (L_125)
		{
			G_B32_0 = L_125;
			G_B32_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
			goto IL_0250;
		}
	}
	{
		G_B33_0 = ((String_t*)(NULL));
		G_B33_1 = G_B31_1;
		goto IL_0255;
	}

IL_0250:
	{
		NullCheck((RuntimeObject*)G_B32_0);
		String_t* L_126;
		L_126 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)G_B32_0);
		G_B33_0 = L_126;
		G_B33_1 = G_B32_1;
	}

IL_0255:
	{
		String_t* L_127;
		L_127 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B33_1, G_B33_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
		Exception_t* L_128 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_128);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_128, L_127, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_128, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_AndroidJNIHelper_ConvertFromJNIArray_TisIl2CppFullySharedGenericAny_mD6B660A63955117687D6131FC1DB255161D1A2BA_RuntimeMethod_var)));
	}

IL_0265:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_24, SizeOf_ArrayType_t15B09198CBBCA055D6DA2DC75D66B572B87D0FBF);
		il2cpp_codegen_memcpy(L_129, V_24, SizeOf_ArrayType_t15B09198CBBCA055D6DA2DC75D66B572B87D0FBF);
		il2cpp_codegen_memcpy(V_3, L_129, SizeOf_ArrayType_t15B09198CBBCA055D6DA2DC75D66B572B87D0FBF);
		goto IL_0272;
	}

IL_0272:
	{
		il2cpp_codegen_memcpy(L_130, V_3, SizeOf_ArrayType_t15B09198CBBCA055D6DA2DC75D66B572B87D0FBF);
		il2cpp_codegen_memcpy(il2cppRetVal, L_130, SizeOf_ArrayType_t15B09198CBBCA055D6DA2DC75D66B572B87D0FBF);
		return;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetFieldID<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.IntPtr,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetFieldID_TisIl2CppFullySharedGenericAny_m5714D44FF454CB672C9F04F1316533DAD6C6BCBB_gshared (intptr_t ___0_jclass, String_t* ___1_fieldName, bool ___2_isStatic, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_fieldName;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		String_t* L_4;
		L_4 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_3, NULL);
		bool L_5 = ___2_isStatic;
		intptr_t L_6;
		L_6 = AndroidJNIHelper_GetFieldID_mDA4775DFA37126A7EFEBCA8E68EF9640F3D6EF01(L_0, L_1, L_4, L_5, NULL);
		V_0 = L_6;
		goto IL_001b;
	}

IL_001b:
	{
		intptr_t L_7 = V_0;
		return L_7;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisIl2CppFullySharedGenericAny_mBB787943D3DB158E741B5FF2B66EFB90237F837C_gshared (intptr_t ___0_jclass, String_t* ___1_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, bool ___3_isStatic, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_jclass;
		String_t* L_1 = ___1_methodName;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
		String_t* L_3;
		L_3 = InvokerFuncInvoker1< String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, L_2);
		bool L_4 = ___3_isStatic;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_0, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisIl2CppFullySharedGenericAny_m5BFF8BF215EBBD2B94DB67B384DAB97E221FA134_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___0_args;
		V_1 = L_3;
		V_2 = 0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		StringBuilder_t* L_8 = V_0;
		RuntimeObject* L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F(L_9, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_10, NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m414A7A6B98FB5565075E4C51F22C482F2BCEEF5F((RuntimeObject*)L_19, NULL);
		NullCheck(L_17);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_20, NULL);
		StringBuilder_t* L_22 = V_0;
		NullCheck((RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_22);
		V_4 = L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return L_24;
	}
}
// System.Linq.Expressions.Expression System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor::VisitLambda<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Linq.Expressions.Expression`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* QuoteVisitor_VisitLambda_TisIl2CppFullySharedGenericAny_m3A43E5E58A18E3D2892C620B8AED19012BA4E57B_gshared (QuoteVisitor_tAF65D5FC6B193B07A3D795C928F4E02DA518529F* __this, Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* ___0_node, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m3FAA05D641D29AC345AA871116A0E236549DB39F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m72E70DE20E4D4DFE86D505EDD3DBEA47E50449A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m90AEF23AAC38CF4A308B9996EEF66C89F96E6A4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t1A058A09EDF187502B71E068C526B964CEA1283F_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* V_2 = NULL;
	int32_t V_3 = 0;
	{
		ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* L_0;
		L_0 = Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m3FAA05D641D29AC345AA871116A0E236549DB39F_inline(Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m3FAA05D641D29AC345AA871116A0E236549DB39F_RuntimeMethod_var);
		V_0 = (RuntimeObject*)L_0;
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_1 = ___0_node;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Linq.Expressions.LambdaExpression::get_ParameterCount() */, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_1);
		V_1 = L_2;
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_4 = V_1;
		List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* L_5 = (List_1_t1A058A09EDF187502B71E068C526B964CEA1283F*)il2cpp_codegen_object_new(List_1_t1A058A09EDF187502B71E068C526B964CEA1283F_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		List_1__ctor_m90AEF23AAC38CF4A308B9996EEF66C89F96E6A4D(L_5, L_4, List_1__ctor_m90AEF23AAC38CF4A308B9996EEF66C89F96E6A4D_RuntimeMethod_var);
		V_2 = L_5;
		V_3 = 0;
		goto IL_002d;
	}

IL_001c:
	{
		List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* L_6 = V_2;
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_7 = ___0_node;
		int32_t L_8 = V_3;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_7);
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_9;
		L_9 = VirtualFuncInvoker1< ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110*, int32_t >::Invoke(16 /* System.Linq.Expressions.ParameterExpression System.Linq.Expressions.LambdaExpression::GetParameter(System.Int32) */, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_7, L_8);
		NullCheck(L_6);
		List_1_Add_m72E70DE20E4D4DFE86D505EDD3DBEA47E50449A5_inline(L_6, L_9, List_1_Add_m72E70DE20E4D4DFE86D505EDD3DBEA47E50449A5_RuntimeMethod_var);
		int32_t L_10 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_002d:
	{
		int32_t L_11 = V_3;
		int32_t L_12 = V_1;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001c;
		}
	}
	{
		List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* L_13 = V_2;
		V_0 = (RuntimeObject*)L_13;
	}

IL_0033:
	{
		RuntimeObject* L_14 = V_0;
		QuoteVisitor_PushParameters_mC0368A13FEDC063CA6CE13884A8167B788434D76(__this, L_14, NULL);
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_15 = ___0_node;
		NullCheck((ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590*)__this);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_16;
		L_16 = InvokerFuncInvoker1< Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*, Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), (ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590*)__this, L_15);
		RuntimeObject* L_17 = V_0;
		QuoteVisitor_PopParameters_m608713B0CFFB54DA0D4D0CF12F3E693A873D3FF9(__this, L_17, NULL);
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_18 = ___0_node;
		return (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_18;
	}
}
// System.Linq.Expressions.Expression System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter::VisitLambda<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Linq.Expressions.Expression`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ExpressionQuoter_VisitLambda_TisIl2CppFullySharedGenericAny_m0060183C8192066670005792D19D2EC19C50DBB7_gshared (ExpressionQuoter_t3D5F35B2980800F7F947EBC0819D867CF5AAD536* __this, Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* ___0_node, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t068F5201D923072F46716204841D21328FE6218D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* V_0 = NULL;
	HashSet_1_t068F5201D923072F46716204841D21328FE6218D* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_0 = ___0_node;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Linq.Expressions.LambdaExpression::get_ParameterCount() */, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_0);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		HashSet_1_t068F5201D923072F46716204841D21328FE6218D* L_2 = (HashSet_1_t068F5201D923072F46716204841D21328FE6218D*)il2cpp_codegen_object_new(HashSet_1_t068F5201D923072F46716204841D21328FE6218D_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B(L_2, HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B_RuntimeMethod_var);
		V_1 = L_2;
		V_2 = 0;
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_3 = ___0_node;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Linq.Expressions.LambdaExpression::get_ParameterCount() */, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_3);
		V_3 = L_4;
		goto IL_002c;
	}

IL_001a:
	{
		HashSet_1_t068F5201D923072F46716204841D21328FE6218D* L_5 = V_1;
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_6 = ___0_node;
		int32_t L_7 = V_2;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_6);
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_8;
		L_8 = VirtualFuncInvoker1< ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110*, int32_t >::Invoke(16 /* System.Linq.Expressions.ParameterExpression System.Linq.Expressions.LambdaExpression::GetParameter(System.Int32) */, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_6, L_7);
		NullCheck(L_5);
		bool L_9;
		L_9 = HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69(L_5, L_8, HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69_RuntimeMethod_var);
		int32_t L_10 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_002c:
	{
		int32_t L_11 = V_2;
		int32_t L_12 = V_3;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001a;
		}
	}
	{
		Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26* L_13 = __this->____shadowedVars_2;
		HashSet_1_t068F5201D923072F46716204841D21328FE6218D* L_14 = V_1;
		NullCheck(L_13);
		Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE(L_13, L_14, Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE_RuntimeMethod_var);
	}

IL_003c:
	{
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_15 = ___0_node;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_15);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_16;
		L_16 = LambdaExpression_get_Body_m161E156442547AE8A6837C5AE065BD93345451DE_inline((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_15, NULL);
		NullCheck((ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590*)__this);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_17;
		L_17 = VirtualFuncInvoker1< Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* >::Invoke(4 /* System.Linq.Expressions.Expression System.Linq.Expressions.ExpressionVisitor::Visit(System.Linq.Expressions.Expression) */, (ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590*)__this, L_16);
		V_0 = L_17;
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_18 = ___0_node;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_18);
		int32_t L_19;
		L_19 = VirtualFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Linq.Expressions.LambdaExpression::get_ParameterCount() */, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_18);
		if ((((int32_t)L_19) <= ((int32_t)0)))
		{
			goto IL_005e;
		}
	}
	{
		Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26* L_20 = __this->____shadowedVars_2;
		NullCheck(L_20);
		HashSet_1_t068F5201D923072F46716204841D21328FE6218D* L_21;
		L_21 = Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5(L_20, Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5_RuntimeMethod_var);
	}

IL_005e:
	{
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_22 = V_0;
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_23 = ___0_node;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_23);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_24;
		L_24 = LambdaExpression_get_Body_m161E156442547AE8A6837C5AE065BD93345451DE_inline((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_23, NULL);
		if ((!(((RuntimeObject*)(Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_22) == ((RuntimeObject*)(Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_24))))
		{
			goto IL_0069;
		}
	}
	{
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_25 = ___0_node;
		return (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_25;
	}

IL_0069:
	{
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_26 = ___0_node;
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_27 = V_0;
		NullCheck(L_26);
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_28;
		L_28 = VirtualFuncInvoker2Invoker< Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4*, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*, ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* >::Invoke(18 /* System.Linq.Expressions.Expression`1<TDelegate> System.Linq.Expressions.Expression`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Rewrite(System.Linq.Expressions.Expression,System.Linq.Expressions.ParameterExpression[]) */, L_26, L_27, (ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C*)NULL);
		return (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_28;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B AsyncUniTaskVoidMethodBuilder_Create_m06E63ABF318CBA8C8DE8BA460E94C6E9CDB5ED64_inline (const RuntimeMethod* method) 
{
	AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return default;
		il2cpp_codegen_initobj((&V_0), sizeof(AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B));
		AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B L_0 = V_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 AsyncUniTaskVoidMethodBuilder_get_Task_mA5D58CCC3268985A789B48F67492123752CE7A98_inline (AsyncUniTaskVoidMethodBuilder_t07713E215840254DDAB42066E85E685C31D31F6B* __this, const RuntimeMethod* method) 
{
	UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return default;
		il2cpp_codegen_initobj((&V_0), sizeof(UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2));
		UniTaskVoid_tA769EA76205222176D16FA914323BE5407EA0BD2 L_0 = V_0;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IntPtr__ctor_m4F9A9B80F01996B610D5AE4797F20B98ECD0A3D9_inline (intptr_t* __this, void* ___0_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_value;
		*__this = ((intptr_t)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* LambdaExpression_get_Body_m161E156442547AE8A6837C5AE065BD93345451DE_inline (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E* __this, const RuntimeMethod* method) 
{
	{
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_0 = __this->____body_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* Array_Empty_TisIl2CppFullySharedGenericAny_m244E2A51B33F845A2093F0862FBCE502E4FDD868_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ((EmptyArray_1_tF69A5F6BAD1150A16C4C98B346D6122FE3751C80_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	// sizeof(T)
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
	// T
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	const Il2CppFullySharedGenericAny L_9 = L_8;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = __this->____items_1;
		V_0 = L_1;
		int32_t L_2 = __this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = V_0;
		int32_t L_7 = V_1;
		il2cpp_codegen_memcpy(L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 9)) ? ___0_item : &___0_item), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		NullCheck(L_6);
		il2cpp_codegen_memcpy((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), L_8, SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 9), (void**)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), (void*)L_8);
		return;
	}

IL_0034:
	{
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 9)) ? ___0_item : &___0_item), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)), il2cpp_rgctx_method(method->klass->rgctx_data, 14), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 9)) ? L_9: *(void**)L_9));
		return;
	}
}

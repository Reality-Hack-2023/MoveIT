#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
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

// System.Comparison`1<QCHT.Interactions.Distal.QCHTGraphicRaycaster/RaycastHit>
struct Comparison_1_t35D520CBBEAD1BF4CEF5CB5008BC1780F060656D;
// System.Func`2<UnityEngine.Collider,System.Boolean>
struct Func_2_tA51C8146EA8F24475C3727C2FB08F4A1B9AD9D83;
// System.Collections.Generic.List`1<UnityEngine.Color32>
struct List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t815A476B0A21E183042059E705F9E505478CD8AE;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181;
// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.UI.BaseMeshEffect
struct BaseMeshEffect_tC7D44B0AC6406BAC3E4FC4579A43FC135BDB6FDA;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// QCHT.Interactions.Hands.BoneData
struct BoneData_t8F0ACA73E2E36B5F019ACBFF2B49F6895D22FEC0;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.ConfigurableJoint
struct ConfigurableJoint_t9F5E94B6088C703833B586A6B71D707A855E99BD;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C;
// QCHT.Interactions.Hands.FingerData
struct FingerData_t2FB74A6A4748CA34A2966BA24BB9BF065BFCDD04;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// QCHT.Interactions.Hands.HandGhostSO
struct HandGhostSO_t0180239E28503C7BBA7D787378AF21466BAE8383;
// QCHT.Interactions.Hands.HandJointUpdater
struct HandJointUpdater_t9E0CBC516EB9F7763FF018A4D0EFF23FA5AA8DA0;
// QCHT.Interactions.Hands.HandModel
struct HandModel_t88B37350E3FC43167DA6A41C9F30A6ABD71CD817;
// QCHT.Interactions.Hands.HandPartPresenter
struct HandPartPresenter_tE49E84C28A6BD001D4E4D4A7738167754BC2CD54;
// QCHT.Interactions.Hands.HandPose
struct HandPose_t1A858C5CA696FC6C8D13153595E8B089E8F9EDAA;
// QCHT.Interactions.Hands.HandPoseDriver
struct HandPoseDriver_t0BFB7CFFBC3305D2AF2A7A2A0AF1282B3E1D3133;
// QCHT.Interactions.Hands.HandPoseMask
struct HandPoseMask_tE1BF0A65EE4FC6A940EA89186E47A709BC959229;
// QCHT.Interactions.Hands.HandPresenter
struct HandPresenter_t458E7A35002C8A2B559BAD19C2D90315B19D4CE1;
// QCHT.Interactions.Hands.HandSkin
struct HandSkin_tE56A5AF1B46AECA87B2009E9C3964486FFFE70A2;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// QCHT.Interactions.Proximal.IInteractionDataProvider
struct IInteractionDataProvider_t8318C1257043108F4ACC976E2F03AB9FB4970227;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// QCHT.Interactions.Proximal.InteractionData
struct InteractionData_t1050830DD97CB7E86ACCA8E2BC14DCE5F244DB84;
// QCHT.Interactions.Distal.ControlBox.InteractionGridControlPoint
struct InteractionGridControlPoint_tACAF23DB22DAE8CEDDBDCFCAACB80FEA4B0FDE3B;
// UnityEngine.Joint
struct Joint_t085126F36196FC982700F4EA8466CF10C90EC15E;
// QCHT.Interactions.VFF.JointSettings
struct JointSettings_tCAD068E730116B00D90120D5E65E2AC8B29EE551;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.ParticleSystem
struct ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E;
// QCHT.Interactions.VFF.PhysicalHandConfiguration
struct PhysicalHandConfiguration_tCD17AA6F132F95086B886B0DF3C1AF28E271CD09;
// QCHT.Interactions.VFF.PhysicalObject
struct PhysicalObject_tC9199F0BCDF41F3EF35DC2C0D34F16D51A16C18C;
// QCHT.Interactions.Proximal.QCHTHandInteractionController
struct QCHTHandInteractionController_t4C2EA2883E824F649BC5BC145FF4B6B20838BE52;
// QCHT.Interactions.Distal.QCHTPhysicsRaycaster
struct QCHTPhysicsRaycaster_t0C1E7A18DC87EF4C524B8DD71A58B2D81B1C52A7;
// QCHT.Interactions.Distal.QCHTRay
struct QCHTRay_tF376F2D12139CFB0AD5A5F2328C6C93B18CED74F;
// QCHT.Interactions.Distal.QCHTRayData
struct QCHTRayData_t6D8A90910944C548F2DB455933847AE925E491B1;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C;
// UnityEngine.Rigidbody
struct Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A;
// QCHT.Interactions.UI.RoundedCornerEffect
struct RoundedCornerEffect_tD551467CC37C06E357B084EA14FD3DA97444E8C4;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityEngine.SkinnedMeshRenderer
struct SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496;
// QCHT.Interactions.Proximal.SnapData
struct SnapData_tF024C4033893ED13CD32444029C6497DFFDC6A54;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// System.String
struct String_t;
// QCHT.Interactions.VFF.TargetConstraint
struct TargetConstraint_tC40CC98B6B3180F303EF5312F0AADADBF6046707;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// QCHT.Interactions.TextureAnimator
struct TextureAnimator_t0ADAB643BA91FC0994361436E944F56F4B2343A0;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// QCHT.Interactions.UI.WristUI
struct WristUI_tEC6E732BC9C30B8590BDFD489A01F09E2EBBC9EB;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958;
// QCHT.Interactions.Hands.HandPresenter/<Fade>d__53
struct U3CFadeU3Ed__53_t8FBA4C49BC483973E8754007DF4360071D37FA70;
// QCHT.Interactions.Proximal.Interactable/<>c
struct U3CU3Ec_tA4A3D08DDDC65D19DA0B336AC350D78183B74C18;
// QCHT.Interactions.Proximal.Interactable/<>c__DisplayClass21_0
struct U3CU3Ec__DisplayClass21_0_tB7850ECF175E5EB12AA0265F28A0BCE1E7B614DB;
// QCHT.Interactions.Distal.ControlBox.InteractionGridControlPoint/HandleEventHandler
struct HandleEventHandler_t7F05F5747CC0065BC1D3B7EB323250521AB0BC35;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// QCHT.Interactions.Distal.QCHTGraphicRaycaster/<>c
struct U3CU3Ec_tC87347C03AE5138C26F5C55656723B5D0D46E0EF;
// QCHT.Interactions.Distal.QCHTPhysicsRaycaster/RaycastHitComparer
struct RaycastHitComparer_tF9774B3AE8F020A2190700CAFFF3D4A2B626A0F0;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE;

IL2CPP_EXTERN_C RuntimeClass* HandPresenter_t458E7A35002C8A2B559BAD19C2D90315B19D4CE1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* QCHTRayData_t6D8A90910944C548F2DB455933847AE925E491B1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* QCHTRayVisualData_t73A3B95C6C277054C2514DC8BFC58F567B4A0471_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RaycastHitComparer_tF9774B3AE8F020A2190700CAFFF3D4A2B626A0F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextureAnimator_t0ADAB643BA91FC0994361436E944F56F4B2343A0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tA4A3D08DDDC65D19DA0B336AC350D78183B74C18_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tC87347C03AE5138C26F5C55656723B5D0D46E0EF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_mD63281542675697ADC038B664E30F73F6BC1F1D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CFadeU3Ed__53_System_Collections_IEnumerator_Reset_m02AC62E99F3EE558AD96ED1710C4916BFA384C17_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;

public:
	inline static int32_t get_offset_of_m_Used_0() { return static_cast<int32_t>(offsetof(AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF, ___m_Used_0)); }
	inline bool get_m_Used_0() const { return ___m_Used_0; }
	inline bool* get_address_of_m_Used_0() { return &___m_Used_0; }
	inline void set_m_Used_0(bool value)
	{
		___m_Used_0 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// QCHT.Interactions.Hands.HandPresenter/<Fade>d__53
struct U3CFadeU3Ed__53_t8FBA4C49BC483973E8754007DF4360071D37FA70  : public RuntimeObject
{
public:
	// System.Int32 QCHT.Interactions.Hands.HandPresenter/<Fade>d__53::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object QCHT.Interactions.Hands.HandPresenter/<Fade>d__53::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Single QCHT.Interactions.Hands.HandPresenter/<Fade>d__53::targetAlpha
	float ___targetAlpha_2;
	// QCHT.Interactions.Hands.HandPresenter QCHT.Interactions.Hands.HandPresenter/<Fade>d__53::<>4__this
	HandPresenter_t458E7A35002C8A2B559BAD19C2D90315B19D4CE1 * ___U3CU3E4__this_3;
	// System.Single QCHT.Interactions.Hands.HandPresenter/<Fade>d__53::<startMainAlpha>5__2
	float ___U3CstartMainAlphaU3E5__2_4;
	// System.Single QCHT.Interactions.Hands.HandPresenter/<Fade>d__53::<startGhostAlpha>5__3
	float ___U3CstartGhostAlphaU3E5__3_5;
	// System.Single QCHT.Interactions.Hands.HandPresenter/<Fade>d__53::<time>5__4
	float ___U3CtimeU3E5__4_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CFadeU3Ed__53_t8FBA4C49BC483973E8754007DF4360071D37FA70, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CFadeU3Ed__53_t8FBA4C49BC483973E8754007DF4360071D37FA70, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_targetAlpha_2() { return static_cast<int32_t>(offsetof(U3CFadeU3Ed__53_t8FBA4C49BC483973E8754007DF4360071D37FA70, ___targetAlpha_2)); }
	inline float get_targetAlpha_2() const { return ___targetAlpha_2; }
	inline float* get_address_of_targetAlpha_2() { return &___targetAlpha_2; }
	inline void set_targetAlpha_2(float value)
	{
		___targetAlpha_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CFadeU3Ed__53_t8FBA4C49BC483973E8754007DF4360071D37FA70, ___U3CU3E4__this_3)); }
	inline HandPresenter_t458E7A35002C8A2B559BAD19C2D90315B19D4CE1 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline HandPresenter_t458E7A35002C8A2B559BAD19C2D90315B19D4CE1 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(HandPresenter_t458E7A35002C8A2B559BAD19C2D90315B19D4CE1 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CstartMainAlphaU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CFadeU3Ed__53_t8FBA4C49BC483973E8754007DF4360071D37FA70, ___U3CstartMainAlphaU3E5__2_4)); }
	inline float get_U3CstartMainAlphaU3E5__2_4() const { return ___U3CstartMainAlphaU3E5__2_4; }
	inline float* get_address_of_U3CstartMainAlphaU3E5__2_4() { return &___U3CstartMainAlphaU3E5__2_4; }
	inline void set_U3CstartMainAlphaU3E5__2_4(float value)
	{
		___U3CstartMainAlphaU3E5__2_4 = value;
	}

	inline static int32_t get_offset_of_U3CstartGhostAlphaU3E5__3_5() { return static_cast<int32_t>(offsetof(U3CFadeU3Ed__53_t8FBA4C49BC483973E8754007DF4360071D37FA70, ___U3CstartGhostAlphaU3E5__3_5)); }
	inline float get_U3CstartGhostAlphaU3E5__3_5() const { return ___U3CstartGhostAlphaU3E5__3_5; }
	inline float* get_address_of_U3CstartGhostAlphaU3E5__3_5() { return &___U3CstartGhostAlphaU3E5__3_5; }
	inline void set_U3CstartGhostAlphaU3E5__3_5(float value)
	{
		___U3CstartGhostAlphaU3E5__3_5 = value;
	}

	inline static int32_t get_offset_of_U3CtimeU3E5__4_6() { return static_cast<int32_t>(offsetof(U3CFadeU3Ed__53_t8FBA4C49BC483973E8754007DF4360071D37FA70, ___U3CtimeU3E5__4_6)); }
	inline float get_U3CtimeU3E5__4_6() const { return ___U3CtimeU3E5__4_6; }
	inline float* get_address_of_U3CtimeU3E5__4_6() { return &___U3CtimeU3E5__4_6; }
	inline void set_U3CtimeU3E5__4_6(float value)
	{
		___U3CtimeU3E5__4_6 = value;
	}
};


// QCHT.Interactions.Proximal.Interactable/<>c
struct U3CU3Ec_tA4A3D08DDDC65D19DA0B336AC350D78183B74C18  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tA4A3D08DDDC65D19DA0B336AC350D78183B74C18_StaticFields
{
public:
	// QCHT.Interactions.Proximal.Interactable/<>c QCHT.Interactions.Proximal.Interactable/<>c::<>9
	U3CU3Ec_tA4A3D08DDDC65D19DA0B336AC350D78183B74C18 * ___U3CU3E9_0;
	// System.Func`2<UnityEngine.Collider,System.Boolean> QCHT.Interactions.Proximal.Interactable/<>c::<>9__17_0
	Func_2_tA51C8146EA8F24475C3727C2FB08F4A1B9AD9D83 * ___U3CU3E9__17_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tA4A3D08DDDC65D19DA0B336AC350D78183B74C18_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tA4A3D08DDDC65D19DA0B336AC350D78183B74C18 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tA4A3D08DDDC65D19DA0B336AC350D78183B74C18 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tA4A3D08DDDC65D19DA0B336AC350D78183B74C18 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__17_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tA4A3D08DDDC65D19DA0B336AC350D78183B74C18_StaticFields, ___U3CU3E9__17_0_1)); }
	inline Func_2_tA51C8146EA8F24475C3727C2FB08F4A1B9AD9D83 * get_U3CU3E9__17_0_1() const { return ___U3CU3E9__17_0_1; }
	inline Func_2_tA51C8146EA8F24475C3727C2FB08F4A1B9AD9D83 ** get_address_of_U3CU3E9__17_0_1() { return &___U3CU3E9__17_0_1; }
	inline void set_U3CU3E9__17_0_1(Func_2_tA51C8146EA8F24475C3727C2FB08F4A1B9AD9D83 * value)
	{
		___U3CU3E9__17_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__17_0_1), (void*)value);
	}
};


// QCHT.Interactions.Proximal.Interactable/<>c__DisplayClass21_0
struct U3CU3Ec__DisplayClass21_0_tB7850ECF175E5EB12AA0265F28A0BCE1E7B614DB  : public RuntimeObject
{
public:
	// QCHT.Interactions.Proximal.InteractionData QCHT.Interactions.Proximal.Interactable/<>c__DisplayClass21_0::eventData
	InteractionData_t1050830DD97CB7E86ACCA8E2BC14DCE5F244DB84 * ___eventData_0;

public:
	inline static int32_t get_offset_of_eventData_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass21_0_tB7850ECF175E5EB12AA0265F28A0BCE1E7B614DB, ___eventData_0)); }
	inline InteractionData_t1050830DD97CB7E86ACCA8E2BC14DCE5F244DB84 * get_eventData_0() const { return ___eventData_0; }
	inline InteractionData_t1050830DD97CB7E86ACCA8E2BC14DCE5F244DB84 ** get_address_of_eventData_0() { return &___eventData_0; }
	inline void set_eventData_0(InteractionData_t1050830DD97CB7E86ACCA8E2BC14DCE5F244DB84 * value)
	{
		___eventData_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventData_0), (void*)value);
	}
};


// QCHT.Interactions.Distal.QCHTGraphicRaycaster/<>c
struct U3CU3Ec_tC87347C03AE5138C26F5C55656723B5D0D46E0EF  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tC87347C03AE5138C26F5C55656723B5D0D46E0EF_StaticFields
{
public:
	// QCHT.Interactions.Distal.QCHTGraphicRaycaster/<>c QCHT.Interactions.Distal.QCHTGraphicRaycaster/<>c::<>9
	U3CU3Ec_tC87347C03AE5138C26F5C55656723B5D0D46E0EF * ___U3CU3E9_0;
	// System.Comparison`1<QCHT.Interactions.Distal.QCHTGraphicRaycaster/RaycastHit> QCHT.Interactions.Distal.QCHTGraphicRaycaster/<>c::<>9__19_0
	Comparison_1_t35D520CBBEAD1BF4CEF5CB5008BC1780F060656D * ___U3CU3E9__19_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tC87347C03AE5138C26F5C55656723B5D0D46E0EF_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tC87347C03AE5138C26F5C55656723B5D0D46E0EF * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tC87347C03AE5138C26F5C55656723B5D0D46E0EF ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tC87347C03AE5138C26F5C55656723B5D0D46E0EF * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__19_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tC87347C03AE5138C26F5C55656723B5D0D46E0EF_StaticFields, ___U3CU3E9__19_0_1)); }
	inline Comparison_1_t35D520CBBEAD1BF4CEF5CB5008BC1780F060656D * get_U3CU3E9__19_0_1() const { return ___U3CU3E9__19_0_1; }
	inline Comparison_1_t35D520CBBEAD1BF4CEF5CB5008BC1780F060656D ** get_address_of_U3CU3E9__19_0_1() { return &___U3CU3E9__19_0_1; }
	inline void set_U3CU3E9__19_0_1(Comparison_1_t35D520CBBEAD1BF4CEF5CB5008BC1780F060656D * value)
	{
		___U3CU3E9__19_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__19_0_1), (void*)value);
	}
};


// QCHT.Interactions.Distal.QCHTPhysicsRaycaster/RaycastHitComparer
struct RaycastHitComparer_tF9774B3AE8F020A2190700CAFFF3D4A2B626A0F0  : public RuntimeObject
{
public:

public:
};

struct RaycastHitComparer_tF9774B3AE8F020A2190700CAFFF3D4A2B626A0F0_StaticFields
{
public:
	// QCHT.Interactions.Distal.QCHTPhysicsRaycaster/RaycastHitComparer QCHT.Interactions.Distal.QCHTPhysicsRaycaster/RaycastHitComparer::s_instance
	RaycastHitComparer_tF9774B3AE8F020A2190700CAFFF3D4A2B626A0F0 * ___s_instance_0;

public:
	inline static int32_t get_offset_of_s_instance_0() { return static_cast<int32_t>(offsetof(RaycastHitComparer_tF9774B3AE8F020A2190700CAFFF3D4A2B626A0F0_StaticFields, ___s_instance_0)); }
	inline RaycastHitComparer_tF9774B3AE8F020A2190700CAFFF3D4A2B626A0F0 * get_s_instance_0() const { return ___s_instance_0; }
	inline RaycastHitComparer_tF9774B3AE8F020A2190700CAFFF3D4A2B626A0F0 ** get_address_of_s_instance_0() { return &___s_instance_0; }
	inline void set_s_instance_0(RaycastHitComparer_tF9774B3AE8F020A2190700CAFFF3D4A2B626A0F0 * value)
	{
		___s_instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_instance_0), (void*)value);
	}
};


// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E  : public AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * ___m_EventSystem_1;

public:
	inline static int32_t get_offset_of_m_EventSystem_1() { return static_cast<int32_t>(offsetof(BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E, ___m_EventSystem_1)); }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * get_m_EventSystem_1() const { return ___m_EventSystem_1; }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C ** get_address_of_m_EventSystem_1() { return &___m_EventSystem_1; }
	inline void set_m_EventSystem_1(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * value)
	{
		___m_EventSystem_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystem_1), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.Color32
struct Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_rgba_0() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___rgba_0)); }
	inline int32_t get_rgba_0() const { return ___rgba_0; }
	inline int32_t* get_address_of_rgba_0() { return &___rgba_0; }
	inline void set_rgba_0(int32_t value)
	{
		___rgba_0 = value;
	}

	inline static int32_t get_offset_of_r_1() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___r_1)); }
	inline uint8_t get_r_1() const { return ___r_1; }
	inline uint8_t* get_address_of_r_1() { return &___r_1; }
	inline void set_r_1(uint8_t value)
	{
		___r_1 = value;
	}

	inline static int32_t get_offset_of_g_2() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___g_2)); }
	inline uint8_t get_g_2() const { return ___g_2; }
	inline uint8_t* get_address_of_g_2() { return &___g_2; }
	inline void set_g_2(uint8_t value)
	{
		___g_2 = value;
	}

	inline static int32_t get_offset_of_b_3() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___b_3)); }
	inline uint8_t get_b_3() const { return ___b_3; }
	inline uint8_t* get_address_of_b_3() { return &___b_3; }
	inline void set_b_3(uint8_t value)
	{
		___b_3 = value;
	}

	inline static int32_t get_offset_of_a_4() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___a_4)); }
	inline uint8_t get_a_4() const { return ___a_4; }
	inline uint8_t* get_address_of_a_4() { return &___a_4; }
	inline void set_a_4(uint8_t value)
	{
		___a_4 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
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


// QCHT.Interactions.Proximal.InteractionResult
struct InteractionResult_t3E5B707DE2088203CE9BDA4C597378DA0386F3B7 
{
public:
	// UnityEngine.GameObject QCHT.Interactions.Proximal.InteractionResult::currentGameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___currentGameObject_0;

public:
	inline static int32_t get_offset_of_currentGameObject_0() { return static_cast<int32_t>(offsetof(InteractionResult_t3E5B707DE2088203CE9BDA4C597378DA0386F3B7, ___currentGameObject_0)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_currentGameObject_0() const { return ___currentGameObject_0; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_currentGameObject_0() { return &___currentGameObject_0; }
	inline void set_currentGameObject_0(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___currentGameObject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentGameObject_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of QCHT.Interactions.Proximal.InteractionResult
struct InteractionResult_t3E5B707DE2088203CE9BDA4C597378DA0386F3B7_marshaled_pinvoke
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___currentGameObject_0;
};
// Native definition for COM marshalling of QCHT.Interactions.Proximal.InteractionResult
struct InteractionResult_t3E5B707DE2088203CE9BDA4C597378DA0386F3B7_marshaled_com
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___currentGameObject_0;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 
{
public:
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

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___identityMatrix_17 = value;
	}
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Rect
struct Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.ParticleSystem/MainModule
struct MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B 
{
public:
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/MainModule::m_ParticleSystem
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___m_ParticleSystem_0;

public:
	inline static int32_t get_offset_of_m_ParticleSystem_0() { return static_cast<int32_t>(offsetof(MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B, ___m_ParticleSystem_0)); }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * get_m_ParticleSystem_0() const { return ___m_ParticleSystem_0; }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E ** get_address_of_m_ParticleSystem_0() { return &___m_ParticleSystem_0; }
	inline void set_m_ParticleSystem_0(ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * value)
	{
		___m_ParticleSystem_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParticleSystem_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/MainModule
struct MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B_marshaled_pinvoke
{
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/MainModule
struct MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B_marshaled_com
{
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___m_ParticleSystem_0;
};

// System.Nullable`1<UnityEngine.Color>
struct Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498 
{
public:
	// T System.Nullable`1::value
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498, ___value_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_value_0() const { return ___value_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
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
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// QCHT.Interactions.Hands.HandInteractionType
struct HandInteractionType_tAA41B3FA3687DCD2FECCE7D724676289C8BCD532 
{
public:
	// System.Int32 QCHT.Interactions.Hands.HandInteractionType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HandInteractionType_tAA41B3FA3687DCD2FECCE7D724676289C8BCD532, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// QCHT.Core.HandType
struct HandType_t727E1C389C0A31595AD1E61ED6622E2EA302D11E 
{
public:
	// System.Int32 QCHT.Core.HandType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HandType_t727E1C389C0A31595AD1E61ED6622E2EA302D11E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// QCHT.Interactions.Proximal.InteractionData
struct InteractionData_t1050830DD97CB7E86ACCA8E2BC14DCE5F244DB84  : public BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E
{
public:
	// QCHT.Interactions.Proximal.QCHTHandInteractionController QCHT.Interactions.Proximal.InteractionData::Controller
	QCHTHandInteractionController_t4C2EA2883E824F649BC5BC145FF4B6B20838BE52 * ___Controller_2;
	// UnityEngine.GameObject QCHT.Interactions.Proximal.InteractionData::ProximalEnter
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___ProximalEnter_3;
	// UnityEngine.GameObject QCHT.Interactions.Proximal.InteractionData::ProximalGrab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___ProximalGrab_4;
	// UnityEngine.GameObject QCHT.Interactions.Proximal.InteractionData::ProximalDoubleGrab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___ProximalDoubleGrab_5;
	// QCHT.Interactions.Proximal.IInteractionDataProvider QCHT.Interactions.Proximal.InteractionData::Data
	RuntimeObject* ___Data_6;

public:
	inline static int32_t get_offset_of_Controller_2() { return static_cast<int32_t>(offsetof(InteractionData_t1050830DD97CB7E86ACCA8E2BC14DCE5F244DB84, ___Controller_2)); }
	inline QCHTHandInteractionController_t4C2EA2883E824F649BC5BC145FF4B6B20838BE52 * get_Controller_2() const { return ___Controller_2; }
	inline QCHTHandInteractionController_t4C2EA2883E824F649BC5BC145FF4B6B20838BE52 ** get_address_of_Controller_2() { return &___Controller_2; }
	inline void set_Controller_2(QCHTHandInteractionController_t4C2EA2883E824F649BC5BC145FF4B6B20838BE52 * value)
	{
		___Controller_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Controller_2), (void*)value);
	}

	inline static int32_t get_offset_of_ProximalEnter_3() { return static_cast<int32_t>(offsetof(InteractionData_t1050830DD97CB7E86ACCA8E2BC14DCE5F244DB84, ___ProximalEnter_3)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_ProximalEnter_3() const { return ___ProximalEnter_3; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_ProximalEnter_3() { return &___ProximalEnter_3; }
	inline void set_ProximalEnter_3(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___ProximalEnter_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ProximalEnter_3), (void*)value);
	}

	inline static int32_t get_offset_of_ProximalGrab_4() { return static_cast<int32_t>(offsetof(InteractionData_t1050830DD97CB7E86ACCA8E2BC14DCE5F244DB84, ___ProximalGrab_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_ProximalGrab_4() const { return ___ProximalGrab_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_ProximalGrab_4() { return &___ProximalGrab_4; }
	inline void set_ProximalGrab_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___ProximalGrab_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ProximalGrab_4), (void*)value);
	}

	inline static int32_t get_offset_of_ProximalDoubleGrab_5() { return static_cast<int32_t>(offsetof(InteractionData_t1050830DD97CB7E86ACCA8E2BC14DCE5F244DB84, ___ProximalDoubleGrab_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_ProximalDoubleGrab_5() const { return ___ProximalDoubleGrab_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_ProximalDoubleGrab_5() { return &___ProximalDoubleGrab_5; }
	inline void set_ProximalDoubleGrab_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___ProximalDoubleGrab_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ProximalDoubleGrab_5), (void*)value);
	}

	inline static int32_t get_offset_of_Data_6() { return static_cast<int32_t>(offsetof(InteractionData_t1050830DD97CB7E86ACCA8E2BC14DCE5F244DB84, ___Data_6)); }
	inline RuntimeObject* get_Data_6() const { return ___Data_6; }
	inline RuntimeObject** get_address_of_Data_6() { return &___Data_6; }
	inline void set_Data_6(RuntimeObject* value)
	{
		___Data_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Data_6), (void*)value);
	}
};


// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.MaterialPropertyBlock::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// QCHT.Interactions.Distal.RAY_STATE
struct RAY_STATE_t1107F05B09AFA12F5D6A34991DA424A3A4A4D8EE 
{
public:
	// System.Int32 QCHT.Interactions.Distal.RAY_STATE::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RAY_STATE_t1107F05B09AFA12F5D6A34991DA424A3A4A4D8EE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// QCHT.Interactions.Distal.RayData
struct RayData_t7F1A4A0CA1CC0150160930C15BF4B6918EFDCBE9 
{
public:
	// UnityEngine.Sprite QCHT.Interactions.Distal.RayData::ReticleSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___ReticleSprite_0;
	// UnityEngine.Color QCHT.Interactions.Distal.RayData::ReticleColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___ReticleColor_1;
	// UnityEngine.Color QCHT.Interactions.Distal.RayData::RayColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___RayColor_2;
	// System.Single QCHT.Interactions.Distal.RayData::ReticleScaleFactor
	float ___ReticleScaleFactor_3;

public:
	inline static int32_t get_offset_of_ReticleSprite_0() { return static_cast<int32_t>(offsetof(RayData_t7F1A4A0CA1CC0150160930C15BF4B6918EFDCBE9, ___ReticleSprite_0)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_ReticleSprite_0() const { return ___ReticleSprite_0; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_ReticleSprite_0() { return &___ReticleSprite_0; }
	inline void set_ReticleSprite_0(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___ReticleSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ReticleSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_ReticleColor_1() { return static_cast<int32_t>(offsetof(RayData_t7F1A4A0CA1CC0150160930C15BF4B6918EFDCBE9, ___ReticleColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_ReticleColor_1() const { return ___ReticleColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_ReticleColor_1() { return &___ReticleColor_1; }
	inline void set_ReticleColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___ReticleColor_1 = value;
	}

	inline static int32_t get_offset_of_RayColor_2() { return static_cast<int32_t>(offsetof(RayData_t7F1A4A0CA1CC0150160930C15BF4B6918EFDCBE9, ___RayColor_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_RayColor_2() const { return ___RayColor_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_RayColor_2() { return &___RayColor_2; }
	inline void set_RayColor_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___RayColor_2 = value;
	}

	inline static int32_t get_offset_of_ReticleScaleFactor_3() { return static_cast<int32_t>(offsetof(RayData_t7F1A4A0CA1CC0150160930C15BF4B6918EFDCBE9, ___ReticleScaleFactor_3)); }
	inline float get_ReticleScaleFactor_3() const { return ___ReticleScaleFactor_3; }
	inline float* get_address_of_ReticleScaleFactor_3() { return &___ReticleScaleFactor_3; }
	inline void set_ReticleScaleFactor_3(float value)
	{
		___ReticleScaleFactor_3 = value;
	}
};

// Native definition for P/Invoke marshalling of QCHT.Interactions.Distal.RayData
struct RayData_t7F1A4A0CA1CC0150160930C15BF4B6918EFDCBE9_marshaled_pinvoke
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___ReticleSprite_0;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___ReticleColor_1;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___RayColor_2;
	float ___ReticleScaleFactor_3;
};
// Native definition for COM marshalling of QCHT.Interactions.Distal.RayData
struct RayData_t7F1A4A0CA1CC0150160930C15BF4B6918EFDCBE9_marshaled_com
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___ReticleSprite_0;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___ReticleColor_1;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___RayColor_2;
	float ___ReticleScaleFactor_3;
};

// UnityEngine.RaycastHit
struct RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 
{
public:
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Point_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Normal_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_FaceID_2() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_FaceID_2)); }
	inline uint32_t get_m_FaceID_2() const { return ___m_FaceID_2; }
	inline uint32_t* get_address_of_m_FaceID_2() { return &___m_FaceID_2; }
	inline void set_m_FaceID_2(uint32_t value)
	{
		___m_FaceID_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_UV_4() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_UV_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_UV_4() const { return ___m_UV_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_UV_4() { return &___m_UV_4; }
	inline void set_m_UV_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_UV_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Collider_5)); }
	inline int32_t get_m_Collider_5() const { return ___m_Collider_5; }
	inline int32_t* get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(int32_t value)
	{
		___m_Collider_5 = value;
	}
};


// QCHT.Interactions.Proximal.SnapData
struct SnapData_tF024C4033893ED13CD32444029C6497DFFDC6A54  : public RuntimeObject
{
public:
	// QCHT.Interactions.Hands.HandPose QCHT.Interactions.Proximal.SnapData::HandPose
	HandPose_t1A858C5CA696FC6C8D13153595E8B089E8F9EDAA * ___HandPose_0;
	// QCHT.Interactions.Hands.HandPoseMask QCHT.Interactions.Proximal.SnapData::HandPoseMask
	HandPoseMask_tE1BF0A65EE4FC6A940EA89186E47A709BC959229 * ___HandPoseMask_1;
	// UnityEngine.Vector3 QCHT.Interactions.Proximal.SnapData::LocalOffsetPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___LocalOffsetPosition_2;
	// UnityEngine.Vector3 QCHT.Interactions.Proximal.SnapData::LocalOffsetRotation
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___LocalOffsetRotation_3;

public:
	inline static int32_t get_offset_of_HandPose_0() { return static_cast<int32_t>(offsetof(SnapData_tF024C4033893ED13CD32444029C6497DFFDC6A54, ___HandPose_0)); }
	inline HandPose_t1A858C5CA696FC6C8D13153595E8B089E8F9EDAA * get_HandPose_0() const { return ___HandPose_0; }
	inline HandPose_t1A858C5CA696FC6C8D13153595E8B089E8F9EDAA ** get_address_of_HandPose_0() { return &___HandPose_0; }
	inline void set_HandPose_0(HandPose_t1A858C5CA696FC6C8D13153595E8B089E8F9EDAA * value)
	{
		___HandPose_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HandPose_0), (void*)value);
	}

	inline static int32_t get_offset_of_HandPoseMask_1() { return static_cast<int32_t>(offsetof(SnapData_tF024C4033893ED13CD32444029C6497DFFDC6A54, ___HandPoseMask_1)); }
	inline HandPoseMask_tE1BF0A65EE4FC6A940EA89186E47A709BC959229 * get_HandPoseMask_1() const { return ___HandPoseMask_1; }
	inline HandPoseMask_tE1BF0A65EE4FC6A940EA89186E47A709BC959229 ** get_address_of_HandPoseMask_1() { return &___HandPoseMask_1; }
	inline void set_HandPoseMask_1(HandPoseMask_tE1BF0A65EE4FC6A940EA89186E47A709BC959229 * value)
	{
		___HandPoseMask_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HandPoseMask_1), (void*)value);
	}

	inline static int32_t get_offset_of_LocalOffsetPosition_2() { return static_cast<int32_t>(offsetof(SnapData_tF024C4033893ED13CD32444029C6497DFFDC6A54, ___LocalOffsetPosition_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_LocalOffsetPosition_2() const { return ___LocalOffsetPosition_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_LocalOffsetPosition_2() { return &___LocalOffsetPosition_2; }
	inline void set_LocalOffsetPosition_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___LocalOffsetPosition_2 = value;
	}

	inline static int32_t get_offset_of_LocalOffsetRotation_3() { return static_cast<int32_t>(offsetof(SnapData_tF024C4033893ED13CD32444029C6497DFFDC6A54, ___LocalOffsetRotation_3)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_LocalOffsetRotation_3() const { return ___LocalOffsetRotation_3; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_LocalOffsetRotation_3() { return &___LocalOffsetRotation_3; }
	inline void set_LocalOffsetRotation_3(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___LocalOffsetRotation_3 = value;
	}
};


// QCHT.Interactions.VFF.TargetConstraint
struct TargetConstraint_tC40CC98B6B3180F303EF5312F0AADADBF6046707  : public RuntimeObject
{
public:
	// UnityEngine.Transform QCHT.Interactions.VFF.TargetConstraint::Anchor
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___Anchor_0;
	// UnityEngine.Transform QCHT.Interactions.VFF.TargetConstraint::ConnectedAnchor
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___ConnectedAnchor_1;
	// QCHT.Interactions.VFF.JointSettings QCHT.Interactions.VFF.TargetConstraint::Settings
	JointSettings_tCAD068E730116B00D90120D5E65E2AC8B29EE551 * ___Settings_2;
	// UnityEngine.Transform QCHT.Interactions.VFF.TargetConstraint::Axis
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___Axis_3;
	// UnityEngine.ConfigurableJoint QCHT.Interactions.VFF.TargetConstraint::Joint
	ConfigurableJoint_t9F5E94B6088C703833B586A6B71D707A855E99BD * ___Joint_4;
	// UnityEngine.Rigidbody QCHT.Interactions.VFF.TargetConstraint::ConnectedBody
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___ConnectedBody_5;
	// QCHT.Interactions.VFF.PhysicalObject QCHT.Interactions.VFF.TargetConstraint::PhysicalObject
	PhysicalObject_tC9199F0BCDF41F3EF35DC2C0D34F16D51A16C18C * ___PhysicalObject_6;
	// UnityEngine.Vector3 QCHT.Interactions.VFF.TargetConstraint::TmpConnAnchor
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___TmpConnAnchor_7;
	// UnityEngine.Transform QCHT.Interactions.VFF.TargetConstraint::TargetPosition
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___TargetPosition_8;
	// UnityEngine.Vector3 QCHT.Interactions.VFF.TargetConstraint::TmpTargetPos
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___TmpTargetPos_9;

public:
	inline static int32_t get_offset_of_Anchor_0() { return static_cast<int32_t>(offsetof(TargetConstraint_tC40CC98B6B3180F303EF5312F0AADADBF6046707, ___Anchor_0)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_Anchor_0() const { return ___Anchor_0; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_Anchor_0() { return &___Anchor_0; }
	inline void set_Anchor_0(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___Anchor_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Anchor_0), (void*)value);
	}

	inline static int32_t get_offset_of_ConnectedAnchor_1() { return static_cast<int32_t>(offsetof(TargetConstraint_tC40CC98B6B3180F303EF5312F0AADADBF6046707, ___ConnectedAnchor_1)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_ConnectedAnchor_1() const { return ___ConnectedAnchor_1; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_ConnectedAnchor_1() { return &___ConnectedAnchor_1; }
	inline void set_ConnectedAnchor_1(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___ConnectedAnchor_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ConnectedAnchor_1), (void*)value);
	}

	inline static int32_t get_offset_of_Settings_2() { return static_cast<int32_t>(offsetof(TargetConstraint_tC40CC98B6B3180F303EF5312F0AADADBF6046707, ___Settings_2)); }
	inline JointSettings_tCAD068E730116B00D90120D5E65E2AC8B29EE551 * get_Settings_2() const { return ___Settings_2; }
	inline JointSettings_tCAD068E730116B00D90120D5E65E2AC8B29EE551 ** get_address_of_Settings_2() { return &___Settings_2; }
	inline void set_Settings_2(JointSettings_tCAD068E730116B00D90120D5E65E2AC8B29EE551 * value)
	{
		___Settings_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Settings_2), (void*)value);
	}

	inline static int32_t get_offset_of_Axis_3() { return static_cast<int32_t>(offsetof(TargetConstraint_tC40CC98B6B3180F303EF5312F0AADADBF6046707, ___Axis_3)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_Axis_3() const { return ___Axis_3; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_Axis_3() { return &___Axis_3; }
	inline void set_Axis_3(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___Axis_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Axis_3), (void*)value);
	}

	inline static int32_t get_offset_of_Joint_4() { return static_cast<int32_t>(offsetof(TargetConstraint_tC40CC98B6B3180F303EF5312F0AADADBF6046707, ___Joint_4)); }
	inline ConfigurableJoint_t9F5E94B6088C703833B586A6B71D707A855E99BD * get_Joint_4() const { return ___Joint_4; }
	inline ConfigurableJoint_t9F5E94B6088C703833B586A6B71D707A855E99BD ** get_address_of_Joint_4() { return &___Joint_4; }
	inline void set_Joint_4(ConfigurableJoint_t9F5E94B6088C703833B586A6B71D707A855E99BD * value)
	{
		___Joint_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Joint_4), (void*)value);
	}

	inline static int32_t get_offset_of_ConnectedBody_5() { return static_cast<int32_t>(offsetof(TargetConstraint_tC40CC98B6B3180F303EF5312F0AADADBF6046707, ___ConnectedBody_5)); }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * get_ConnectedBody_5() const { return ___ConnectedBody_5; }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A ** get_address_of_ConnectedBody_5() { return &___ConnectedBody_5; }
	inline void set_ConnectedBody_5(Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * value)
	{
		___ConnectedBody_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ConnectedBody_5), (void*)value);
	}

	inline static int32_t get_offset_of_PhysicalObject_6() { return static_cast<int32_t>(offsetof(TargetConstraint_tC40CC98B6B3180F303EF5312F0AADADBF6046707, ___PhysicalObject_6)); }
	inline PhysicalObject_tC9199F0BCDF41F3EF35DC2C0D34F16D51A16C18C * get_PhysicalObject_6() const { return ___PhysicalObject_6; }
	inline PhysicalObject_tC9199F0BCDF41F3EF35DC2C0D34F16D51A16C18C ** get_address_of_PhysicalObject_6() { return &___PhysicalObject_6; }
	inline void set_PhysicalObject_6(PhysicalObject_tC9199F0BCDF41F3EF35DC2C0D34F16D51A16C18C * value)
	{
		___PhysicalObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PhysicalObject_6), (void*)value);
	}

	inline static int32_t get_offset_of_TmpConnAnchor_7() { return static_cast<int32_t>(offsetof(TargetConstraint_tC40CC98B6B3180F303EF5312F0AADADBF6046707, ___TmpConnAnchor_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_TmpConnAnchor_7() const { return ___TmpConnAnchor_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_TmpConnAnchor_7() { return &___TmpConnAnchor_7; }
	inline void set_TmpConnAnchor_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___TmpConnAnchor_7 = value;
	}

	inline static int32_t get_offset_of_TargetPosition_8() { return static_cast<int32_t>(offsetof(TargetConstraint_tC40CC98B6B3180F303EF5312F0AADADBF6046707, ___TargetPosition_8)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_TargetPosition_8() const { return ___TargetPosition_8; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_TargetPosition_8() { return &___TargetPosition_8; }
	inline void set_TargetPosition_8(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___TargetPosition_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TargetPosition_8), (void*)value);
	}

	inline static int32_t get_offset_of_TmpTargetPos_9() { return static_cast<int32_t>(offsetof(TargetConstraint_tC40CC98B6B3180F303EF5312F0AADADBF6046707, ___TmpTargetPos_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_TmpTargetPos_9() const { return ___TmpTargetPos_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_TmpTargetPos_9() { return &___TmpTargetPos_9; }
	inline void set_TmpTargetPos_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___TmpTargetPos_9 = value;
	}
};


// UnityEngine.UIVertex
struct UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A 
{
public:
	// UnityEngine.Vector3 UnityEngine.UIVertex::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_0;
	// UnityEngine.Vector3 UnityEngine.UIVertex::normal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___normal_1;
	// UnityEngine.Vector4 UnityEngine.UIVertex::tangent
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___tangent_2;
	// UnityEngine.Color32 UnityEngine.UIVertex::color
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___color_3;
	// UnityEngine.Vector4 UnityEngine.UIVertex::uv0
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___uv0_4;
	// UnityEngine.Vector4 UnityEngine.UIVertex::uv1
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___uv1_5;
	// UnityEngine.Vector4 UnityEngine.UIVertex::uv2
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___uv2_6;
	// UnityEngine.Vector4 UnityEngine.UIVertex::uv3
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___uv3_7;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A, ___position_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_0() const { return ___position_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_normal_1() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A, ___normal_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_normal_1() const { return ___normal_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_normal_1() { return &___normal_1; }
	inline void set_normal_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___normal_1 = value;
	}

	inline static int32_t get_offset_of_tangent_2() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A, ___tangent_2)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_tangent_2() const { return ___tangent_2; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_tangent_2() { return &___tangent_2; }
	inline void set_tangent_2(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___tangent_2 = value;
	}

	inline static int32_t get_offset_of_color_3() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A, ___color_3)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_color_3() const { return ___color_3; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_color_3() { return &___color_3; }
	inline void set_color_3(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___color_3 = value;
	}

	inline static int32_t get_offset_of_uv0_4() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A, ___uv0_4)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_uv0_4() const { return ___uv0_4; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_uv0_4() { return &___uv0_4; }
	inline void set_uv0_4(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___uv0_4 = value;
	}

	inline static int32_t get_offset_of_uv1_5() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A, ___uv1_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_uv1_5() const { return ___uv1_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_uv1_5() { return &___uv1_5; }
	inline void set_uv1_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___uv1_5 = value;
	}

	inline static int32_t get_offset_of_uv2_6() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A, ___uv2_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_uv2_6() const { return ___uv2_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_uv2_6() { return &___uv2_6; }
	inline void set_uv2_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___uv2_6 = value;
	}

	inline static int32_t get_offset_of_uv3_7() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A, ___uv3_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_uv3_7() const { return ___uv3_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_uv3_7() { return &___uv3_7; }
	inline void set_uv3_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___uv3_7 = value;
	}
};

struct UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A_StaticFields
{
public:
	// UnityEngine.Color32 UnityEngine.UIVertex::s_DefaultColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___s_DefaultColor_8;
	// UnityEngine.Vector4 UnityEngine.UIVertex::s_DefaultTangent
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___s_DefaultTangent_9;
	// UnityEngine.UIVertex UnityEngine.UIVertex::simpleVert
	UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  ___simpleVert_10;

public:
	inline static int32_t get_offset_of_s_DefaultColor_8() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A_StaticFields, ___s_DefaultColor_8)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_s_DefaultColor_8() const { return ___s_DefaultColor_8; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_s_DefaultColor_8() { return &___s_DefaultColor_8; }
	inline void set_s_DefaultColor_8(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___s_DefaultColor_8 = value;
	}

	inline static int32_t get_offset_of_s_DefaultTangent_9() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A_StaticFields, ___s_DefaultTangent_9)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_s_DefaultTangent_9() const { return ___s_DefaultTangent_9; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_s_DefaultTangent_9() { return &___s_DefaultTangent_9; }
	inline void set_s_DefaultTangent_9(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___s_DefaultTangent_9 = value;
	}

	inline static int32_t get_offset_of_simpleVert_10() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A_StaticFields, ___simpleVert_10)); }
	inline UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  get_simpleVert_10() const { return ___simpleVert_10; }
	inline UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A * get_address_of_simpleVert_10() { return &___simpleVert_10; }
	inline void set_simpleVert_10(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  value)
	{
		___simpleVert_10 = value;
	}
};


// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Vector3> UnityEngine.UI.VertexHelper::m_Positions
	List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___m_Positions_0;
	// System.Collections.Generic.List`1<UnityEngine.Color32> UnityEngine.UI.VertexHelper::m_Colors
	List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 * ___m_Colors_1;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Uv0S
	List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * ___m_Uv0S_2;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Uv1S
	List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * ___m_Uv1S_3;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Uv2S
	List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * ___m_Uv2S_4;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Uv3S
	List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * ___m_Uv3S_5;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> UnityEngine.UI.VertexHelper::m_Normals
	List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___m_Normals_6;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Tangents
	List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * ___m_Tangents_7;
	// System.Collections.Generic.List`1<System.Int32> UnityEngine.UI.VertexHelper::m_Indices
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___m_Indices_8;
	// System.Boolean UnityEngine.UI.VertexHelper::m_ListsInitalized
	bool ___m_ListsInitalized_11;

public:
	inline static int32_t get_offset_of_m_Positions_0() { return static_cast<int32_t>(offsetof(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55, ___m_Positions_0)); }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * get_m_Positions_0() const { return ___m_Positions_0; }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 ** get_address_of_m_Positions_0() { return &___m_Positions_0; }
	inline void set_m_Positions_0(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * value)
	{
		___m_Positions_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Positions_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Colors_1() { return static_cast<int32_t>(offsetof(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55, ___m_Colors_1)); }
	inline List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 * get_m_Colors_1() const { return ___m_Colors_1; }
	inline List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 ** get_address_of_m_Colors_1() { return &___m_Colors_1; }
	inline void set_m_Colors_1(List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 * value)
	{
		___m_Colors_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Colors_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Uv0S_2() { return static_cast<int32_t>(offsetof(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55, ___m_Uv0S_2)); }
	inline List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * get_m_Uv0S_2() const { return ___m_Uv0S_2; }
	inline List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A ** get_address_of_m_Uv0S_2() { return &___m_Uv0S_2; }
	inline void set_m_Uv0S_2(List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * value)
	{
		___m_Uv0S_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Uv0S_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Uv1S_3() { return static_cast<int32_t>(offsetof(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55, ___m_Uv1S_3)); }
	inline List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * get_m_Uv1S_3() const { return ___m_Uv1S_3; }
	inline List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A ** get_address_of_m_Uv1S_3() { return &___m_Uv1S_3; }
	inline void set_m_Uv1S_3(List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * value)
	{
		___m_Uv1S_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Uv1S_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Uv2S_4() { return static_cast<int32_t>(offsetof(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55, ___m_Uv2S_4)); }
	inline List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * get_m_Uv2S_4() const { return ___m_Uv2S_4; }
	inline List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A ** get_address_of_m_Uv2S_4() { return &___m_Uv2S_4; }
	inline void set_m_Uv2S_4(List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * value)
	{
		___m_Uv2S_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Uv2S_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Uv3S_5() { return static_cast<int32_t>(offsetof(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55, ___m_Uv3S_5)); }
	inline List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * get_m_Uv3S_5() const { return ___m_Uv3S_5; }
	inline List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A ** get_address_of_m_Uv3S_5() { return &___m_Uv3S_5; }
	inline void set_m_Uv3S_5(List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * value)
	{
		___m_Uv3S_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Uv3S_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_Normals_6() { return static_cast<int32_t>(offsetof(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55, ___m_Normals_6)); }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * get_m_Normals_6() const { return ___m_Normals_6; }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 ** get_address_of_m_Normals_6() { return &___m_Normals_6; }
	inline void set_m_Normals_6(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * value)
	{
		___m_Normals_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Normals_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Tangents_7() { return static_cast<int32_t>(offsetof(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55, ___m_Tangents_7)); }
	inline List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * get_m_Tangents_7() const { return ___m_Tangents_7; }
	inline List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A ** get_address_of_m_Tangents_7() { return &___m_Tangents_7; }
	inline void set_m_Tangents_7(List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * value)
	{
		___m_Tangents_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Tangents_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_Indices_8() { return static_cast<int32_t>(offsetof(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55, ___m_Indices_8)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get_m_Indices_8() const { return ___m_Indices_8; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of_m_Indices_8() { return &___m_Indices_8; }
	inline void set_m_Indices_8(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		___m_Indices_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Indices_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_ListsInitalized_11() { return static_cast<int32_t>(offsetof(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55, ___m_ListsInitalized_11)); }
	inline bool get_m_ListsInitalized_11() const { return ___m_ListsInitalized_11; }
	inline bool* get_address_of_m_ListsInitalized_11() { return &___m_ListsInitalized_11; }
	inline void set_m_ListsInitalized_11(bool value)
	{
		___m_ListsInitalized_11 = value;
	}
};

struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.UI.VertexHelper::s_DefaultTangent
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___s_DefaultTangent_9;
	// UnityEngine.Vector3 UnityEngine.UI.VertexHelper::s_DefaultNormal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___s_DefaultNormal_10;

public:
	inline static int32_t get_offset_of_s_DefaultTangent_9() { return static_cast<int32_t>(offsetof(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55_StaticFields, ___s_DefaultTangent_9)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_s_DefaultTangent_9() const { return ___s_DefaultTangent_9; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_s_DefaultTangent_9() { return &___s_DefaultTangent_9; }
	inline void set_s_DefaultTangent_9(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___s_DefaultTangent_9 = value;
	}

	inline static int32_t get_offset_of_s_DefaultNormal_10() { return static_cast<int32_t>(offsetof(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55_StaticFields, ___s_DefaultNormal_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_s_DefaultNormal_10() const { return ___s_DefaultNormal_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_s_DefaultNormal_10() { return &___s_DefaultNormal_10; }
	inline void set_s_DefaultNormal_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___s_DefaultNormal_10 = value;
	}
};


// QCHT.Interactions.Distal.ControlBox.ControlBoxSettings/CameraConstraint
struct CameraConstraint_t70B5E7B3A408CF5A8997B1D6B62703F3EE2C60F8 
{
public:
	// System.Int32 QCHT.Interactions.Distal.ControlBox.ControlBoxSettings/CameraConstraint::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CameraConstraint_t70B5E7B3A408CF5A8997B1D6B62703F3EE2C60F8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// QCHT.Interactions.Distal.ControlBox.ControlBoxSettings/ControlBoxDisplayType
struct ControlBoxDisplayType_t82720DE17231AFFCE8940A2DCCFEF2EF2B75D7E9 
{
public:
	// System.Int32 QCHT.Interactions.Distal.ControlBox.ControlBoxSettings/ControlBoxDisplayType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ControlBoxDisplayType_t82720DE17231AFFCE8940A2DCCFEF2EF2B75D7E9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// QCHT.Interactions.Distal.ControlBox.ControlBoxSettings/HandleState
struct HandleState_t99F86F76B39451BCDCF162872D2D08FFA5507EC8 
{
public:
	// UnityEngine.Color QCHT.Interactions.Distal.ControlBox.ControlBoxSettings/HandleState::color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color_0;
	// System.Single QCHT.Interactions.Distal.ControlBox.ControlBoxSettings/HandleState::size
	float ___size_1;

public:
	inline static int32_t get_offset_of_color_0() { return static_cast<int32_t>(offsetof(HandleState_t99F86F76B39451BCDCF162872D2D08FFA5507EC8, ___color_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_color_0() const { return ___color_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_color_0() { return &___color_0; }
	inline void set_color_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___color_0 = value;
	}

	inline static int32_t get_offset_of_size_1() { return static_cast<int32_t>(offsetof(HandleState_t99F86F76B39451BCDCF162872D2D08FFA5507EC8, ___size_1)); }
	inline float get_size_1() const { return ___size_1; }
	inline float* get_address_of_size_1() { return &___size_1; }
	inline void set_size_1(float value)
	{
		___size_1 = value;
	}
};


// QCHT.Interactions.Proximal.GrabPoint/SnapGestureId
struct SnapGestureId_tCBDEA993042D804EDB9C3FF6518140A95A100D58 
{
public:
	// System.Int32 QCHT.Interactions.Proximal.GrabPoint/SnapGestureId::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SnapGestureId_tCBDEA993042D804EDB9C3FF6518140A95A100D58, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// QCHT.Interactions.Hands.HandAudioFeedback/HAND_SOUND
struct HAND_SOUND_t53E177F3D55941E5373D87AB4F7F0A09EB347D28 
{
public:
	// System.Int32 QCHT.Interactions.Hands.HandAudioFeedback/HAND_SOUND::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HAND_SOUND_t53E177F3D55941E5373D87AB4F7F0A09EB347D28, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// QCHT.Interactions.Hands.HandPoseMask/MaskState
struct MaskState_t3F88B76AFBDC17BF57D7CF55106969B5634C2E4F 
{
public:
	// System.Int32 QCHT.Interactions.Hands.HandPoseMask/MaskState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MaskState_t3F88B76AFBDC17BF57D7CF55106969B5634C2E4F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/FillMethod
struct FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2 
{
public:
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/Type
struct Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12 
{
public:
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// QCHT.Interactions.Distal.ControlBox.InteractionGrid/InteractionType
struct InteractionType_t5E650F649456FEA2DE7F2EF50494C3187883B688 
{
public:
	// System.Int32 QCHT.Interactions.Distal.ControlBox.InteractionGrid/InteractionType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InteractionType_t5E650F649456FEA2DE7F2EF50494C3187883B688, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// QCHT.Interactions.MultiTextureAnimator/TextureAnimatorData
struct TextureAnimatorData_tCD37DF9EC20C03A3D73383A48AC32913F7F292FE 
{
public:
	// System.Int32 QCHT.Interactions.MultiTextureAnimator/TextureAnimatorData::materialId
	int32_t ___materialId_0;
	// UnityEngine.Vector2 QCHT.Interactions.MultiTextureAnimator/TextureAnimatorData::defaultOffset
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___defaultOffset_1;
	// UnityEngine.Vector2 QCHT.Interactions.MultiTextureAnimator/TextureAnimatorData::speed
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___speed_2;

public:
	inline static int32_t get_offset_of_materialId_0() { return static_cast<int32_t>(offsetof(TextureAnimatorData_tCD37DF9EC20C03A3D73383A48AC32913F7F292FE, ___materialId_0)); }
	inline int32_t get_materialId_0() const { return ___materialId_0; }
	inline int32_t* get_address_of_materialId_0() { return &___materialId_0; }
	inline void set_materialId_0(int32_t value)
	{
		___materialId_0 = value;
	}

	inline static int32_t get_offset_of_defaultOffset_1() { return static_cast<int32_t>(offsetof(TextureAnimatorData_tCD37DF9EC20C03A3D73383A48AC32913F7F292FE, ___defaultOffset_1)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_defaultOffset_1() const { return ___defaultOffset_1; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_defaultOffset_1() { return &___defaultOffset_1; }
	inline void set_defaultOffset_1(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___defaultOffset_1 = value;
	}

	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(TextureAnimatorData_tCD37DF9EC20C03A3D73383A48AC32913F7F292FE, ___speed_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_speed_2() const { return ___speed_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___speed_2 = value;
	}
};


// QCHT.Interactions.Distal.QCHTGraphicRaycaster/RaycastHit
struct RaycastHit_tFD7E888FCDBF3BBDC1396B8F2897071DA109D954 
{
public:
	// UnityEngine.UI.Graphic QCHT.Interactions.Distal.QCHTGraphicRaycaster/RaycastHit::Graphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___Graphic_0;
	// UnityEngine.Vector3 QCHT.Interactions.Distal.QCHTGraphicRaycaster/RaycastHit::WorldPos
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___WorldPos_1;

public:
	inline static int32_t get_offset_of_Graphic_0() { return static_cast<int32_t>(offsetof(RaycastHit_tFD7E888FCDBF3BBDC1396B8F2897071DA109D954, ___Graphic_0)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_Graphic_0() const { return ___Graphic_0; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_Graphic_0() { return &___Graphic_0; }
	inline void set_Graphic_0(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___Graphic_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Graphic_0), (void*)value);
	}

	inline static int32_t get_offset_of_WorldPos_1() { return static_cast<int32_t>(offsetof(RaycastHit_tFD7E888FCDBF3BBDC1396B8F2897071DA109D954, ___WorldPos_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_WorldPos_1() const { return ___WorldPos_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_WorldPos_1() { return &___WorldPos_1; }
	inline void set_WorldPos_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___WorldPos_1 = value;
	}
};

// Native definition for P/Invoke marshalling of QCHT.Interactions.Distal.QCHTGraphicRaycaster/RaycastHit
struct RaycastHit_tFD7E888FCDBF3BBDC1396B8F2897071DA109D954_marshaled_pinvoke
{
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___Graphic_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___WorldPos_1;
};
// Native definition for COM marshalling of QCHT.Interactions.Distal.QCHTGraphicRaycaster/RaycastHit
struct RaycastHit_tFD7E888FCDBF3BBDC1396B8F2897071DA109D954_marshaled_com
{
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___Graphic_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___WorldPos_1;
};

// QCHT.Interactions.Distal.QCHTPointerPose/LaserPosition
struct LaserPosition_t353C6395ABCF9C96C1F00DB5A14E94BB508D30FA 
{
public:
	// System.Int32 QCHT.Interactions.Distal.QCHTPointerPose/LaserPosition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LaserPosition_t353C6395ABCF9C96C1F00DB5A14E94BB508D30FA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// QCHT.Interactions.Proximal.QCHTProximalInteractor/ProximalGestureId
struct ProximalGestureId_t90FC19F2CEE46CF52237BB0DA145612E03D299AF 
{
public:
	// System.Int32 QCHT.Interactions.Proximal.QCHTProximalInteractor/ProximalGestureId::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ProximalGestureId_t90FC19F2CEE46CF52237BB0DA145612E03D299AF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// QCHT.Interactions.Distal.QCHTRayVisualData
struct QCHTRayVisualData_t73A3B95C6C277054C2514DC8BFC58F567B4A0471 
{
public:
	// QCHT.Interactions.Distal.RAY_STATE QCHT.Interactions.Distal.QCHTRayVisualData::State
	int32_t ___State_0;
	// UnityEngine.Vector3 QCHT.Interactions.Distal.QCHTRayVisualData::StartPoint
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___StartPoint_1;
	// UnityEngine.Vector3 QCHT.Interactions.Distal.QCHTRayVisualData::EndPoint
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___EndPoint_2;
	// UnityEngine.Sprite QCHT.Interactions.Distal.QCHTRayVisualData::ReticleImage
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___ReticleImage_3;
	// System.Single QCHT.Interactions.Distal.QCHTRayVisualData::ReticleScaleFactor
	float ___ReticleScaleFactor_4;
	// System.Nullable`1<UnityEngine.Color> QCHT.Interactions.Distal.QCHTRayVisualData::ReticleColor
	Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  ___ReticleColor_5;
	// System.Nullable`1<UnityEngine.Color> QCHT.Interactions.Distal.QCHTRayVisualData::RayColor
	Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  ___RayColor_6;

public:
	inline static int32_t get_offset_of_State_0() { return static_cast<int32_t>(offsetof(QCHTRayVisualData_t73A3B95C6C277054C2514DC8BFC58F567B4A0471, ___State_0)); }
	inline int32_t get_State_0() const { return ___State_0; }
	inline int32_t* get_address_of_State_0() { return &___State_0; }
	inline void set_State_0(int32_t value)
	{
		___State_0 = value;
	}

	inline static int32_t get_offset_of_StartPoint_1() { return static_cast<int32_t>(offsetof(QCHTRayVisualData_t73A3B95C6C277054C2514DC8BFC58F567B4A0471, ___StartPoint_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_StartPoint_1() const { return ___StartPoint_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_StartPoint_1() { return &___StartPoint_1; }
	inline void set_StartPoint_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___StartPoint_1 = value;
	}

	inline static int32_t get_offset_of_EndPoint_2() { return static_cast<int32_t>(offsetof(QCHTRayVisualData_t73A3B95C6C277054C2514DC8BFC58F567B4A0471, ___EndPoint_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_EndPoint_2() const { return ___EndPoint_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_EndPoint_2() { return &___EndPoint_2; }
	inline void set_EndPoint_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___EndPoint_2 = value;
	}

	inline static int32_t get_offset_of_ReticleImage_3() { return static_cast<int32_t>(offsetof(QCHTRayVisualData_t73A3B95C6C277054C2514DC8BFC58F567B4A0471, ___ReticleImage_3)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_ReticleImage_3() const { return ___ReticleImage_3; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_ReticleImage_3() { return &___ReticleImage_3; }
	inline void set_ReticleImage_3(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___ReticleImage_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ReticleImage_3), (void*)value);
	}

	inline static int32_t get_offset_of_ReticleScaleFactor_4() { return static_cast<int32_t>(offsetof(QCHTRayVisualData_t73A3B95C6C277054C2514DC8BFC58F567B4A0471, ___ReticleScaleFactor_4)); }
	inline float get_ReticleScaleFactor_4() const { return ___ReticleScaleFactor_4; }
	inline float* get_address_of_ReticleScaleFactor_4() { return &___ReticleScaleFactor_4; }
	inline void set_ReticleScaleFactor_4(float value)
	{
		___ReticleScaleFactor_4 = value;
	}

	inline static int32_t get_offset_of_ReticleColor_5() { return static_cast<int32_t>(offsetof(QCHTRayVisualData_t73A3B95C6C277054C2514DC8BFC58F567B4A0471, ___ReticleColor_5)); }
	inline Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  get_ReticleColor_5() const { return ___ReticleColor_5; }
	inline Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498 * get_address_of_ReticleColor_5() { return &___ReticleColor_5; }
	inline void set_ReticleColor_5(Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  value)
	{
		___ReticleColor_5 = value;
	}

	inline static int32_t get_offset_of_RayColor_6() { return static_cast<int32_t>(offsetof(QCHTRayVisualData_t73A3B95C6C277054C2514DC8BFC58F567B4A0471, ___RayColor_6)); }
	inline Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  get_RayColor_6() const { return ___RayColor_6; }
	inline Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498 * get_address_of_RayColor_6() { return &___RayColor_6; }
	inline void set_RayColor_6(Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  value)
	{
		___RayColor_6 = value;
	}
};

struct QCHTRayVisualData_t73A3B95C6C277054C2514DC8BFC58F567B4A0471_StaticFields
{
public:
	// QCHT.Interactions.Distal.QCHTRayVisualData QCHT.Interactions.Distal.QCHTRayVisualData::Default
	QCHTRayVisualData_t73A3B95C6C277054C2514DC8BFC58F567B4A0471  ___Default_7;

public:
	inline static int32_t get_offset_of_Default_7() { return static_cast<int32_t>(offsetof(QCHTRayVisualData_t73A3B95C6C277054C2514DC8BFC58F567B4A0471_StaticFields, ___Default_7)); }
	inline QCHTRayVisualData_t73A3B95C6C277054C2514DC8BFC58F567B4A0471  get_Default_7() const { return ___Default_7; }
	inline QCHTRayVisualData_t73A3B95C6C277054C2514DC8BFC58F567B4A0471 * get_address_of_Default_7() { return &___Default_7; }
	inline void set_Default_7(QCHTRayVisualData_t73A3B95C6C277054C2514DC8BFC58F567B4A0471  value)
	{
		___Default_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___Default_7))->___ReticleImage_3), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of QCHT.Interactions.Distal.QCHTRayVisualData
struct QCHTRayVisualData_t73A3B95C6C277054C2514DC8BFC58F567B4A0471_marshaled_pinvoke
{
	int32_t ___State_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___StartPoint_1;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___EndPoint_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___ReticleImage_3;
	float ___ReticleScaleFactor_4;
	Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  ___ReticleColor_5;
	Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  ___RayColor_6;
};
// Native definition for COM marshalling of QCHT.Interactions.Distal.QCHTRayVisualData
struct QCHTRayVisualData_t73A3B95C6C277054C2514DC8BFC58F567B4A0471_marshaled_com
{
	int32_t ___State_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___StartPoint_1;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___EndPoint_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___ReticleImage_3;
	float ___ReticleScaleFactor_4;
	Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  ___ReticleColor_5;
	Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  ___RayColor_6;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
};

// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// QCHT.Interactions.Hands.HandPose
struct HandPose_t1A858C5CA696FC6C8D13153595E8B089E8F9EDAA  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// QCHT.Core.HandType QCHT.Interactions.Hands.HandPose::_type
	int32_t ____type_4;
	// UnityEngine.Vector3 QCHT.Interactions.Hands.HandPose::Scale
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___Scale_5;
	// QCHT.Interactions.Hands.BoneData QCHT.Interactions.Hands.HandPose::Root
	BoneData_t8F0ACA73E2E36B5F019ACBFF2B49F6895D22FEC0 * ___Root_6;
	// QCHT.Interactions.Hands.FingerData QCHT.Interactions.Hands.HandPose::Thumb
	FingerData_t2FB74A6A4748CA34A2966BA24BB9BF065BFCDD04 * ___Thumb_7;
	// QCHT.Interactions.Hands.FingerData QCHT.Interactions.Hands.HandPose::Index
	FingerData_t2FB74A6A4748CA34A2966BA24BB9BF065BFCDD04 * ___Index_8;
	// QCHT.Interactions.Hands.FingerData QCHT.Interactions.Hands.HandPose::Middle
	FingerData_t2FB74A6A4748CA34A2966BA24BB9BF065BFCDD04 * ___Middle_9;
	// QCHT.Interactions.Hands.FingerData QCHT.Interactions.Hands.HandPose::Ring
	FingerData_t2FB74A6A4748CA34A2966BA24BB9BF065BFCDD04 * ___Ring_10;
	// QCHT.Interactions.Hands.FingerData QCHT.Interactions.Hands.HandPose::Pinky
	FingerData_t2FB74A6A4748CA34A2966BA24BB9BF065BFCDD04 * ___Pinky_11;
	// QCHT.Interactions.Hands.HandPose QCHT.Interactions.Hands.HandPose::HandPoseRefLeft
	HandPose_t1A858C5CA696FC6C8D13153595E8B089E8F9EDAA * ___HandPoseRefLeft_12;
	// QCHT.Interactions.Hands.HandPose QCHT.Interactions.Hands.HandPose::HandPoseRefRight
	HandPose_t1A858C5CA696FC6C8D13153595E8B089E8F9EDAA * ___HandPoseRefRight_13;
	// QCHT.Interactions.Hands.HandGhostSO QCHT.Interactions.Hands.HandPose::Ghost
	HandGhostSO_t0180239E28503C7BBA7D787378AF21466BAE8383 * ___Ghost_14;

public:
	inline static int32_t get_offset_of__type_4() { return static_cast<int32_t>(offsetof(HandPose_t1A858C5CA696FC6C8D13153595E8B089E8F9EDAA, ____type_4)); }
	inline int32_t get__type_4() const { return ____type_4; }
	inline int32_t* get_address_of__type_4() { return &____type_4; }
	inline void set__type_4(int32_t value)
	{
		____type_4 = value;
	}

	inline static int32_t get_offset_of_Scale_5() { return static_cast<int32_t>(offsetof(HandPose_t1A858C5CA696FC6C8D13153595E8B089E8F9EDAA, ___Scale_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_Scale_5() const { return ___Scale_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_Scale_5() { return &___Scale_5; }
	inline void set_Scale_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___Scale_5 = value;
	}

	inline static int32_t get_offset_of_Root_6() { return static_cast<int32_t>(offsetof(HandPose_t1A858C5CA696FC6C8D13153595E8B089E8F9EDAA, ___Root_6)); }
	inline BoneData_t8F0ACA73E2E36B5F019ACBFF2B49F6895D22FEC0 * get_Root_6() const { return ___Root_6; }
	inline BoneData_t8F0ACA73E2E36B5F019ACBFF2B49F6895D22FEC0 ** get_address_of_Root_6() { return &___Root_6; }
	inline void set_Root_6(BoneData_t8F0ACA73E2E36B5F019ACBFF2B49F6895D22FEC0 * value)
	{
		___Root_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Root_6), (void*)value);
	}

	inline static int32_t get_offset_of_Thumb_7() { return static_cast<int32_t>(offsetof(HandPose_t1A858C5CA696FC6C8D13153595E8B089E8F9EDAA, ___Thumb_7)); }
	inline FingerData_t2FB74A6A4748CA34A2966BA24BB9BF065BFCDD04 * get_Thumb_7() const { return ___Thumb_7; }
	inline FingerData_t2FB74A6A4748CA34A2966BA24BB9BF065BFCDD04 ** get_address_of_Thumb_7() { return &___Thumb_7; }
	inline void set_Thumb_7(FingerData_t2FB74A6A4748CA34A2966BA24BB9BF065BFCDD04 * value)
	{
		___Thumb_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Thumb_7), (void*)value);
	}

	inline static int32_t get_offset_of_Index_8() { return static_cast<int32_t>(offsetof(HandPose_t1A858C5CA696FC6C8D13153595E8B089E8F9EDAA, ___Index_8)); }
	inline FingerData_t2FB74A6A4748CA34A2966BA24BB9BF065BFCDD04 * get_Index_8() const { return ___Index_8; }
	inline FingerData_t2FB74A6A4748CA34A2966BA24BB9BF065BFCDD04 ** get_address_of_Index_8() { return &___Index_8; }
	inline void set_Index_8(FingerData_t2FB74A6A4748CA34A2966BA24BB9BF065BFCDD04 * value)
	{
		___Index_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Index_8), (void*)value);
	}

	inline static int32_t get_offset_of_Middle_9() { return static_cast<int32_t>(offsetof(HandPose_t1A858C5CA696FC6C8D13153595E8B089E8F9EDAA, ___Middle_9)); }
	inline FingerData_t2FB74A6A4748CA34A2966BA24BB9BF065BFCDD04 * get_Middle_9() const { return ___Middle_9; }
	inline FingerData_t2FB74A6A4748CA34A2966BA24BB9BF065BFCDD04 ** get_address_of_Middle_9() { return &___Middle_9; }
	inline void set_Middle_9(FingerData_t2FB74A6A4748CA34A2966BA24BB9BF065BFCDD04 * value)
	{
		___Middle_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Middle_9), (void*)value);
	}

	inline static int32_t get_offset_of_Ring_10() { return static_cast<int32_t>(offsetof(HandPose_t1A858C5CA696FC6C8D13153595E8B089E8F9EDAA, ___Ring_10)); }
	inline FingerData_t2FB74A6A4748CA34A2966BA24BB9BF065BFCDD04 * get_Ring_10() const { return ___Ring_10; }
	inline FingerData_t2FB74A6A4748CA34A2966BA24BB9BF065BFCDD04 ** get_address_of_Ring_10() { return &___Ring_10; }
	inline void set_Ring_10(FingerData_t2FB74A6A4748CA34A2966BA24BB9BF065BFCDD04 * value)
	{
		___Ring_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Ring_10), (void*)value);
	}

	inline static int32_t get_offset_of_Pinky_11() { return static_cast<int32_t>(offsetof(HandPose_t1A858C5CA696FC6C8D13153595E8B089E8F9EDAA, ___Pinky_11)); }
	inline FingerData_t2FB74A6A4748CA34A2966BA24BB9BF065BFCDD04 * get_Pinky_11() const { return ___Pinky_11; }
	inline FingerData_t2FB74A6A4748CA34A2966BA24BB9BF065BFCDD04 ** get_address_of_Pinky_11() { return &___Pinky_11; }
	inline void set_Pinky_11(FingerData_t2FB74A6A4748CA34A2966BA24BB9BF065BFCDD04 * value)
	{
		___Pinky_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Pinky_11), (void*)value);
	}

	inline static int32_t get_offset_of_HandPoseRefLeft_12() { return static_cast<int32_t>(offsetof(HandPose_t1A858C5CA696FC6C8D13153595E8B089E8F9EDAA, ___HandPoseRefLeft_12)); }
	inline HandPose_t1A858C5CA696FC6C8D13153595E8B089E8F9EDAA * get_HandPoseRefLeft_12() const { return ___HandPoseRefLeft_12; }
	inline HandPose_t1A858C5CA696FC6C8D13153595E8B089E8F9EDAA ** get_address_of_HandPoseRefLeft_12() { return &___HandPoseRefLeft_12; }
	inline void set_HandPoseRefLeft_12(HandPose_t1A858C5CA696FC6C8D13153595E8B089E8F9EDAA * value)
	{
		___HandPoseRefLeft_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HandPoseRefLeft_12), (void*)value);
	}

	inline static int32_t get_offset_of_HandPoseRefRight_13() { return static_cast<int32_t>(offsetof(HandPose_t1A858C5CA696FC6C8D13153595E8B089E8F9EDAA, ___HandPoseRefRight_13)); }
	inline HandPose_t1A858C5CA696FC6C8D13153595E8B089E8F9EDAA * get_HandPoseRefRight_13() const { return ___HandPoseRefRight_13; }
	inline HandPose_t1A858C5CA696FC6C8D13153595E8B089E8F9EDAA ** get_address_of_HandPoseRefRight_13() { return &___HandPoseRefRight_13; }
	inline void set_HandPoseRefRight_13(HandPose_t1A858C5CA696FC6C8D13153595E8B089E8F9EDAA * value)
	{
		___HandPoseRefRight_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HandPoseRefRight_13), (void*)value);
	}

	inline static int32_t get_offset_of_Ghost_14() { return static_cast<int32_t>(offsetof(HandPose_t1A858C5CA696FC6C8D13153595E8B089E8F9EDAA, ___Ghost_14)); }
	inline HandGhostSO_t0180239E28503C7BBA7D787378AF21466BAE8383 * get_Ghost_14() const { return ___Ghost_14; }
	inline HandGhostSO_t0180239E28503C7BBA7D787378AF21466BAE8383 ** get_address_of_Ghost_14() { return &___Ghost_14; }
	inline void set_Ghost_14(HandGhostSO_t0180239E28503C7BBA7D787378AF21466BAE8383 * value)
	{
		___Ghost_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Ghost_14), (void*)value);
	}
};


// UnityEngine.Joint
struct Joint_t085126F36196FC982700F4EA8466CF10C90EC15E  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// QCHT.Interactions.Distal.QCHTRayData
struct QCHTRayData_t6D8A90910944C548F2DB455933847AE925E491B1  : public RuntimeObject
{
public:
	// QCHT.Interactions.Distal.QCHTRayVisualData QCHT.Interactions.Distal.QCHTRayData::_leftRayData
	QCHTRayVisualData_t73A3B95C6C277054C2514DC8BFC58F567B4A0471  ____leftRayData_0;
	// QCHT.Interactions.Distal.QCHTRayVisualData QCHT.Interactions.Distal.QCHTRayData::_rightRayData
	QCHTRayVisualData_t73A3B95C6C277054C2514DC8BFC58F567B4A0471  ____rightRayData_1;

public:
	inline static int32_t get_offset_of__leftRayData_0() { return static_cast<int32_t>(offsetof(QCHTRayData_t6D8A90910944C548F2DB455933847AE925E491B1, ____leftRayData_0)); }
	inline QCHTRayVisualData_t73A3B95C6C277054C2514DC8BFC58F567B4A0471  get__leftRayData_0() const { return ____leftRayData_0; }
	inline QCHTRayVisualData_t73A3B95C6C277054C2514DC8BFC58F567B4A0471 * get_address_of__leftRayData_0() { return &____leftRayData_0; }
	inline void set__leftRayData_0(QCHTRayVisualData_t73A3B95C6C277054C2514DC8BFC58F567B4A0471  value)
	{
		____leftRayData_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____leftRayData_0))->___ReticleImage_3), (void*)NULL);
	}

	inline static int32_t get_offset_of__rightRayData_1() { return static_cast<int32_t>(offsetof(QCHTRayData_t6D8A90910944C548F2DB455933847AE925E491B1, ____rightRayData_1)); }
	inline QCHTRayVisualData_t73A3B95C6C277054C2514DC8BFC58F567B4A0471  get__rightRayData_1() const { return ____rightRayData_1; }
	inline QCHTRayVisualData_t73A3B95C6C277054C2514DC8BFC58F567B4A0471 * get_address_of__rightRayData_1() { return &____rightRayData_1; }
	inline void set__rightRayData_1(QCHTRayVisualData_t73A3B95C6C277054C2514DC8BFC58F567B4A0471  value)
	{
		____rightRayData_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____rightRayData_1))->___ReticleImage_3), (void*)NULL);
	}
};

struct QCHTRayData_t6D8A90910944C548F2DB455933847AE925E491B1_StaticFields
{
public:
	// QCHT.Interactions.Distal.QCHTRayData QCHT.Interactions.Distal.QCHTRayData::s_instance
	QCHTRayData_t6D8A90910944C548F2DB455933847AE925E491B1 * ___s_instance_2;

public:
	inline static int32_t get_offset_of_s_instance_2() { return static_cast<int32_t>(offsetof(QCHTRayData_t6D8A90910944C548F2DB455933847AE925E491B1_StaticFields, ___s_instance_2)); }
	inline QCHTRayData_t6D8A90910944C548F2DB455933847AE925E491B1 * get_s_instance_2() const { return ___s_instance_2; }
	inline QCHTRayData_t6D8A90910944C548F2DB455933847AE925E491B1 ** get_address_of_s_instance_2() { return &___s_instance_2; }
	inline void set_s_instance_2(QCHTRayData_t6D8A90910944C548F2DB455933847AE925E491B1 * value)
	{
		___s_instance_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_instance_2), (void*)value);
	}
};


// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// QCHT.Interactions.Distal.ControlBox.InteractionGridControlPoint/HandleEventHandler
struct HandleEventHandler_t7F05F5747CC0065BC1D3B7EB323250521AB0BC35  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_StaticFields
{
public:
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::preWillRenderCanvases
	WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * ___preWillRenderCanvases_4;
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * ___willRenderCanvases_5;

public:
	inline static int32_t get_offset_of_preWillRenderCanvases_4() { return static_cast<int32_t>(offsetof(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_StaticFields, ___preWillRenderCanvases_4)); }
	inline WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * get_preWillRenderCanvases_4() const { return ___preWillRenderCanvases_4; }
	inline WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 ** get_address_of_preWillRenderCanvases_4() { return &___preWillRenderCanvases_4; }
	inline void set_preWillRenderCanvases_4(WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * value)
	{
		___preWillRenderCanvases_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___preWillRenderCanvases_4), (void*)value);
	}

	inline static int32_t get_offset_of_willRenderCanvases_5() { return static_cast<int32_t>(offsetof(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_StaticFields, ___willRenderCanvases_5)); }
	inline WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * get_willRenderCanvases_5() const { return ___willRenderCanvases_5; }
	inline WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 ** get_address_of_willRenderCanvases_5() { return &___willRenderCanvases_5; }
	inline void set_willRenderCanvases_5(WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * value)
	{
		___willRenderCanvases_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___willRenderCanvases_5), (void*)value);
	}
};


// UnityEngine.ConfigurableJoint
struct ConfigurableJoint_t9F5E94B6088C703833B586A6B71D707A855E99BD  : public Joint_t085126F36196FC982700F4EA8466CF10C90EC15E
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072  : public Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1
{
public:

public:
};

struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_StaticFields
{
public:
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * ___reapplyDrivenProperties_4;

public:
	inline static int32_t get_offset_of_reapplyDrivenProperties_4() { return static_cast<int32_t>(offsetof(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_StaticFields, ___reapplyDrivenProperties_4)); }
	inline ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * get_reapplyDrivenProperties_4() const { return ___reapplyDrivenProperties_4; }
	inline ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE ** get_address_of_reapplyDrivenProperties_4() { return &___reapplyDrivenProperties_4; }
	inline void set_reapplyDrivenProperties_4(ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * value)
	{
		___reapplyDrivenProperties_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reapplyDrivenProperties_4), (void*)value);
	}
};


// UnityEngine.SkinnedMeshRenderer
struct SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496  : public Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C
{
public:

public:
};


// QCHT.Interactions.Hands.HandPoseDriver
struct HandPoseDriver_t0BFB7CFFBC3305D2AF2A7A2A0AF1282B3E1D3133  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// QCHT.Interactions.Hands.HandModel QCHT.Interactions.Hands.HandPoseDriver::HandModel
	HandModel_t88B37350E3FC43167DA6A41C9F30A6ABD71CD817 * ___HandModel_4;
	// QCHT.Interactions.Hands.HandPose QCHT.Interactions.Hands.HandPoseDriver::_handPose
	HandPose_t1A858C5CA696FC6C8D13153595E8B089E8F9EDAA * ____handPose_5;
	// QCHT.Interactions.Hands.HandPoseMask QCHT.Interactions.Hands.HandPoseDriver::_handPoseMask
	HandPoseMask_tE1BF0A65EE4FC6A940EA89186E47A709BC959229 * ____handPoseMask_6;
	// QCHT.Interactions.Hands.HandJointUpdater QCHT.Interactions.Hands.HandPoseDriver::rootPart
	HandJointUpdater_t9E0CBC516EB9F7763FF018A4D0EFF23FA5AA8DA0 * ___rootPart_7;
	// QCHT.Interactions.Hands.HandJointUpdater QCHT.Interactions.Hands.HandPoseDriver::thumbBase
	HandJointUpdater_t9E0CBC516EB9F7763FF018A4D0EFF23FA5AA8DA0 * ___thumbBase_8;
	// QCHT.Interactions.Hands.HandJointUpdater QCHT.Interactions.Hands.HandPoseDriver::thumbMiddle
	HandJointUpdater_t9E0CBC516EB9F7763FF018A4D0EFF23FA5AA8DA0 * ___thumbMiddle_9;
	// QCHT.Interactions.Hands.HandJointUpdater QCHT.Interactions.Hands.HandPoseDriver::thumbTop
	HandJointUpdater_t9E0CBC516EB9F7763FF018A4D0EFF23FA5AA8DA0 * ___thumbTop_10;
	// QCHT.Interactions.Hands.HandJointUpdater QCHT.Interactions.Hands.HandPoseDriver::indexBase
	HandJointUpdater_t9E0CBC516EB9F7763FF018A4D0EFF23FA5AA8DA0 * ___indexBase_11;
	// QCHT.Interactions.Hands.HandJointUpdater QCHT.Interactions.Hands.HandPoseDriver::indexMiddle
	HandJointUpdater_t9E0CBC516EB9F7763FF018A4D0EFF23FA5AA8DA0 * ___indexMiddle_12;
	// QCHT.Interactions.Hands.HandJointUpdater QCHT.Interactions.Hands.HandPoseDriver::indexTop
	HandJointUpdater_t9E0CBC516EB9F7763FF018A4D0EFF23FA5AA8DA0 * ___indexTop_13;
	// QCHT.Interactions.Hands.HandJointUpdater QCHT.Interactions.Hands.HandPoseDriver::middleBase
	HandJointUpdater_t9E0CBC516EB9F7763FF018A4D0EFF23FA5AA8DA0 * ___middleBase_14;
	// QCHT.Interactions.Hands.HandJointUpdater QCHT.Interactions.Hands.HandPoseDriver::middleMiddle
	HandJointUpdater_t9E0CBC516EB9F7763FF018A4D0EFF23FA5AA8DA0 * ___middleMiddle_15;
	// QCHT.Interactions.Hands.HandJointUpdater QCHT.Interactions.Hands.HandPoseDriver::middleTop
	HandJointUpdater_t9E0CBC516EB9F7763FF018A4D0EFF23FA5AA8DA0 * ___middleTop_16;
	// QCHT.Interactions.Hands.HandJointUpdater QCHT.Interactions.Hands.HandPoseDriver::ringBase
	HandJointUpdater_t9E0CBC516EB9F7763FF018A4D0EFF23FA5AA8DA0 * ___ringBase_17;
	// QCHT.Interactions.Hands.HandJointUpdater QCHT.Interactions.Hands.HandPoseDriver::ringMiddle
	HandJointUpdater_t9E0CBC516EB9F7763FF018A4D0EFF23FA5AA8DA0 * ___ringMiddle_18;
	// QCHT.Interactions.Hands.HandJointUpdater QCHT.Interactions.Hands.HandPoseDriver::ringTop
	HandJointUpdater_t9E0CBC516EB9F7763FF018A4D0EFF23FA5AA8DA0 * ___ringTop_19;
	// QCHT.Interactions.Hands.HandJointUpdater QCHT.Interactions.Hands.HandPoseDriver::pinkyBase
	HandJointUpdater_t9E0CBC516EB9F7763FF018A4D0EFF23FA5AA8DA0 * ___pinkyBase_20;
	// QCHT.Interactions.Hands.HandJointUpdater QCHT.Interactions.Hands.HandPoseDriver::pinkyMiddle
	HandJointUpdater_t9E0CBC516EB9F7763FF018A4D0EFF23FA5AA8DA0 * ___pinkyMiddle_21;
	// QCHT.Interactions.Hands.HandJointUpdater QCHT.Interactions.Hands.HandPoseDriver::pinkyTop
	HandJointUpdater_t9E0CBC516EB9F7763FF018A4D0EFF23FA5AA8DA0 * ___pinkyTop_22;
	// UnityEngine.Transform QCHT.Interactions.Hands.HandPoseDriver::scale
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___scale_23;
	// System.Single QCHT.Interactions.Hands.HandPoseDriver::_scaleMultiplier
	float ____scaleMultiplier_24;

public:
	inline static int32_t get_offset_of_HandModel_4() { return static_cast<int32_t>(offsetof(HandPoseDriver_t0BFB7CFFBC3305D2AF2A7A2A0AF1282B3E1D3133, ___HandModel_4)); }
	inline HandModel_t88B37350E3FC43167DA6A41C9F30A6ABD71CD817 * get_HandModel_4() const { return ___HandModel_4; }
	inline HandModel_t88B37350E3FC43167DA6A41C9F30A6ABD71CD817 ** get_address_of_HandModel_4() { return &___HandModel_4; }
	inline void set_HandModel_4(HandModel_t88B37350E3FC43167DA6A41C9F30A6ABD71CD817 * value)
	{
		___HandModel_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HandModel_4), (void*)value);
	}

	inline static int32_t get_offset_of__handPose_5() { return static_cast<int32_t>(offsetof(HandPoseDriver_t0BFB7CFFBC3305D2AF2A7A2A0AF1282B3E1D3133, ____handPose_5)); }
	inline HandPose_t1A858C5CA696FC6C8D13153595E8B089E8F9EDAA * get__handPose_5() const { return ____handPose_5; }
	inline HandPose_t1A858C5CA696FC6C8D13153595E8B089E8F9EDAA ** get_address_of__handPose_5() { return &____handPose_5; }
	inline void set__handPose_5(HandPose_t1A858C5CA696FC6C8D13153595E8B089E8F9EDAA * value)
	{
		____handPose_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____handPose_5), (void*)value);
	}

	inline static int32_t get_offset_of__handPoseMask_6() { return static_cast<int32_t>(offsetof(HandPoseDriver_t0BFB7CFFBC3305D2AF2A7A2A0AF1282B3E1D3133, ____handPoseMask_6)); }
	inline HandPoseMask_tE1BF0A65EE4FC6A940EA89186E47A709BC959229 * get__handPoseMask_6() const { return ____handPoseMask_6; }
	inline HandPoseMask_tE1BF0A65EE4FC6A940EA89186E47A709BC959229 ** get_address_of__handPoseMask_6() { return &____handPoseMask_6; }
	inline void set__handPoseMask_6(HandPoseMask_tE1BF0A65EE4FC6A940EA89186E47A709BC959229 * value)
	{
		____handPoseMask_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____handPoseMask_6), (void*)value);
	}

	inline static int32_t get_offset_of_rootPart_7() { return static_cast<int32_t>(offsetof(HandPoseDriver_t0BFB7CFFBC3305D2AF2A7A2A0AF1282B3E1D3133, ___rootPart_7)); }
	inline HandJointUpdater_t9E0CBC516EB9F7763FF018A4D0EFF23FA5AA8DA0 * get_rootPart_7() const { return ___rootPart_7; }
	inline HandJointUpdater_t9E0CBC516EB9F7763FF018A4D0EFF23FA5AA8DA0 ** get_address_of_rootPart_7() { return &___rootPart_7; }
	inline void set_rootPart_7(HandJointUpdater_t9E0CBC516EB9F7763FF018A4D0EFF23FA5AA8DA0 * value)
	{
		___rootPart_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rootPart_7), (void*)value);
	}

	inline static int32_t get_offset_of_thumbBase_8() { return static_cast<int32_t>(offsetof(HandPoseDriver_t0BFB7CFFBC3305D2AF2A7A2A0AF1282B3E1D3133, ___thumbBase_8)); }
	inline HandJointUpdater_t9E0CBC516EB9F7763FF018A4D0EFF23FA5AA8DA0 * get_thumbBase_8() const { return ___thumbBase_8; }
	inline HandJointUpdater_t9E0CBC516EB9F7763FF018A4D0EFF23FA5AA8DA0 ** get_address_of_thumbBase_8() { return &___thumbBase_8; }
	inline void set_thumbBase_8(HandJointUpdater_t9E0CBC516EB9F7763FF018A4D0EFF23FA5AA8DA0 * value)
	{
		___thumbBase_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___thumbBase_8), (void*)value);
	}

	inline static int32_t get_offset_of_thumbMiddle_9() { return static_cast<int32_t>(offsetof(HandPoseDriver_t0BFB7CFFBC3305D2AF2A7A2A0AF1282B3E1D3133, ___thumbMiddle_9)); }
	inline HandJointUpdater_t9E0CBC516EB9F7763FF018A4D0EFF23FA5AA8DA0 * get_thumbMiddle_9() const { return ___thumbMiddle_9; }
	inline HandJointUpdater_t9E0CBC516EB9F7763FF018A4D0EFF23FA5AA8DA0 ** get_address_of_thumbMiddle_9() { return &___thumbMiddle_9; }
	inline void set_thumbMiddle_9(HandJointUpdater_t9E0CBC516EB9F7763FF018A4D0EFF23FA5AA8DA0 * value)
	{
		___thumbMiddle_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___thumbMiddle_9), (void*)value);
	}

	inline static int32_t get_offset_of_thumbTop_10() { return static_cast<int32_t>(offsetof(HandPoseDriver_t0BFB7CFFBC3305D2AF2A7A2A0AF1282B3E1D3133, ___thumbTop_10)); }
	inline HandJointUpdater_t9E0CBC516EB9F7763FF018A4D0EFF23FA5AA8DA0 * get_thumbTop_10() const { return ___thumbTop_10; }
	inline HandJointUpdater_t9E0CBC516EB9F7763FF018A4D0EFF23FA5AA8DA0 ** get_address_of_thumbTop_10() { return &___thumbTop_10; }
	inline void set_thumbTop_10(HandJointUpdater_t9E0CBC516EB9F7763FF018A4D0EFF23FA5AA8DA0 * value)
	{
		___thumbTop_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___thumbTop_10), (void*)value);
	}

	inline static int32_t get_offset_of_indexBase_11() { return static_cast<int32_t>(offsetof(HandPoseDriver_t0BFB7CFFBC3305D2AF2A7A2A0AF1282B3E1D3133, ___indexBase_11)); }
	inline HandJointUpdater_t9E0CBC516EB9F7763FF018A4D0EFF23FA5AA8DA0 * get_indexBase_11() const { return ___indexBase_11; }
	inline HandJointUpdater_t9E0CBC516EB9F7763FF018A4D0EFF23FA5AA8DA0 ** get_address_of_indexBase_11() { return &___indexBase_11; }
	inline void set_indexBase_11(HandJointUpdater_t9E0CBC516EB9F7763FF018A4D0EFF23FA5AA8DA0 * value)
	{
		___indexBase_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___indexBase_11), (void*)value);
	}

	inline static int32_t get_offset_of_indexMiddle_12() { return static_cast<int32_t>(offsetof(HandPoseDriver_t0BFB7CFFBC3305D2AF2A7A2A0AF1282B3E1D3133, ___indexMiddle_12)); }
	inline HandJointUpdater_t9E0CBC516EB9F7763FF018A4D0EFF23FA5AA8DA0 * get_indexMiddle_12() const { return ___indexMiddle_12; }
	inline HandJointUpdater_t9E0CBC516EB9F7763FF018A4D0EFF23FA5AA8DA0 ** get_address_of_indexMiddle_12() { return &___indexMiddle_12; }
	inline void set_indexMiddle_12(HandJointUpdater_t9E0CBC516EB9F7763FF018A4D0EFF23FA5AA8DA0 * value)
	{
		___indexMiddle_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___indexMiddle_12), (void*)value);
	}

	inline static int32_t get_offset_of_indexTop_13() { return static_cast<int32_t>(offsetof(HandPoseDriver_t0BFB7CFFBC3305D2AF2A7A2A0AF1282B3E1D3133, ___indexTop_13)); }
	inline HandJointUpdater_t9E0CBC516EB9F7763FF018A4D0EFF23FA5AA8DA0 * get_indexTop_13() const { return ___indexTop_13; }
	inline HandJointUpdater_t9E0CBC516EB9F7763FF018A4D0EFF23FA5AA8DA0 ** get_address_of_indexTop_13() { return &___indexTop_13; }
	inline void set_indexTop_13(HandJointUpdater_t9E0CBC516EB9F7763FF018A4D0EFF23FA5AA8DA0 * value)
	{
		___indexTop_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___indexTop_13), (void*)value);
	}

	inline static int32_t get_offset_of_middleBase_14() { return static_cast<int32_t>(offsetof(HandPoseDriver_t0BFB7CFFBC3305D2AF2A7A2A0AF1282B3E1D3133, ___middleBase_14)); }
	inline HandJointUpdater_t9E0CBC516EB9F7763FF018A4D0EFF23FA5AA8DA0 * get_middleBase_14() const { return ___middleBase_14; }
	inline HandJointUpdater_t9E0CBC516EB9F7763FF018A4D0EFF23FA5AA8DA0 ** get_address_of_middleBase_14() { return &___middleBase_14; }
	inline void set_middleBase_14(HandJointUpdater_t9E0CBC516EB9F7763FF018A4D0EFF23FA5AA8DA0 * value)
	{
		___middleBase_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___middleBase_14), (void*)value);
	}

	inline static int32_t get_offset_of_middleMiddle_15() { return static_cast<int32_t>(offsetof(HandPoseDriver_t0BFB7CFFBC3305D2AF2A7A2A0AF1282B3E1D3133, ___middleMiddle_15)); }
	inline HandJointUpdater_t9E0CBC516EB9F7763FF018A4D0EFF23FA5AA8DA0 * get_middleMiddle_15() const { return ___middleMiddle_15; }
	inline HandJointUpdater_t9E0CBC516EB9F7763FF018A4D0EFF23FA5AA8DA0 ** get_address_of_middleMiddle_15() { return &___middleMiddle_15; }
	inline void set_middleMiddle_15(HandJointUpdater_t9E0CBC516EB9F7763FF018A4D0EFF23FA5AA8DA0 * value)
	{
		___middleMiddle_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___middleMiddle_15), (void*)value);
	}

	inline static int32_t get_offset_of_middleTop_16() { return static_cast<int32_t>(offsetof(HandPoseDriver_t0BFB7CFFBC3305D2AF2A7A2A0AF1282B3E1D3133, ___middleTop_16)); }
	inline HandJointUpdater_t9E0CBC516EB9F7763FF018A4D0EFF23FA5AA8DA0 * get_middleTop_16() const { return ___middleTop_16; }
	inline HandJointUpdater_t9E0CBC516EB9F7763FF018A4D0EFF23FA5AA8DA0 ** get_address_of_middleTop_16() { return &___middleTop_16; }
	inline void set_middleTop_16(HandJointUpdater_t9E0CBC516EB9F7763FF018A4D0EFF23FA5AA8DA0 * value)
	{
		___middleTop_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___middleTop_16), (void*)value);
	}

	inline static int32_t get_offset_of_ringBase_17() { return static_cast<int32_t>(offsetof(HandPoseDriver_t0BFB7CFFBC3305D2AF2A7A2A0AF1282B3E1D3133, ___ringBase_17)); }
	inline HandJointUpdater_t9E0CBC516EB9F7763FF018A4D0EFF23FA5AA8DA0 * get_ringBase_17() const { return ___ringBase_17; }
	inline HandJointUpdater_t9E0CBC516EB9F7763FF018A4D0EFF23FA5AA8DA0 ** get_address_of_ringBase_17() { return &___ringBase_17; }
	inline void set_ringBase_17(HandJointUpdater_t9E0CBC516EB9F7763FF018A4D0EFF23FA5AA8DA0 * value)
	{
		___ringBase_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ringBase_17), (void*)value);
	}

	inline static int32_t get_offset_of_ringMiddle_18() { return static_cast<int32_t>(offsetof(HandPoseDriver_t0BFB7CFFBC3305D2AF2A7A2A0AF1282B3E1D3133, ___ringMiddle_18)); }
	inline HandJointUpdater_t9E0CBC516EB9F7763FF018A4D0EFF23FA5AA8DA0 * get_ringMiddle_18() const { return ___ringMiddle_18; }
	inline HandJointUpdater_t9E0CBC516EB9F7763FF018A4D0EFF23FA5AA8DA0 ** get_address_of_ringMiddle_18() { return &___ringMiddle_18; }
	inline void set_ringMiddle_18(HandJointUpdater_t9E0CBC516EB9F7763FF018A4D0EFF23FA5AA8DA0 * value)
	{
		___ringMiddle_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ringMiddle_18), (void*)value);
	}

	inline static int32_t get_offset_of_ringTop_19() { return static_cast<int32_t>(offsetof(HandPoseDriver_t0BFB7CFFBC3305D2AF2A7A2A0AF1282B3E1D3133, ___ringTop_19)); }
	inline HandJointUpdater_t9E0CBC516EB9F7763FF018A4D0EFF23FA5AA8DA0 * get_ringTop_19() const { return ___ringTop_19; }
	inline HandJointUpdater_t9E0CBC516EB9F7763FF018A4D0EFF23FA5AA8DA0 ** get_address_of_ringTop_19() { return &___ringTop_19; }
	inline void set_ringTop_19(HandJointUpdater_t9E0CBC516EB9F7763FF018A4D0EFF23FA5AA8DA0 * value)
	{
		___ringTop_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ringTop_19), (void*)value);
	}

	inline static int32_t get_offset_of_pinkyBase_20() { return static_cast<int32_t>(offsetof(HandPoseDriver_t0BFB7CFFBC3305D2AF2A7A2A0AF1282B3E1D3133, ___pinkyBase_20)); }
	inline HandJointUpdater_t9E0CBC516EB9F7763FF018A4D0EFF23FA5AA8DA0 * get_pinkyBase_20() const { return ___pinkyBase_20; }
	inline HandJointUpdater_t9E0CBC516EB9F7763FF018A4D0EFF23FA5AA8DA0 ** get_address_of_pinkyBase_20() { return &___pinkyBase_20; }
	inline void set_pinkyBase_20(HandJointUpdater_t9E0CBC516EB9F7763FF018A4D0EFF23FA5AA8DA0 * value)
	{
		___pinkyBase_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pinkyBase_20), (void*)value);
	}

	inline static int32_t get_offset_of_pinkyMiddle_21() { return static_cast<int32_t>(offsetof(HandPoseDriver_t0BFB7CFFBC3305D2AF2A7A2A0AF1282B3E1D3133, ___pinkyMiddle_21)); }
	inline HandJointUpdater_t9E0CBC516EB9F7763FF018A4D0EFF23FA5AA8DA0 * get_pinkyMiddle_21() const { return ___pinkyMiddle_21; }
	inline HandJointUpdater_t9E0CBC516EB9F7763FF018A4D0EFF23FA5AA8DA0 ** get_address_of_pinkyMiddle_21() { return &___pinkyMiddle_21; }
	inline void set_pinkyMiddle_21(HandJointUpdater_t9E0CBC516EB9F7763FF018A4D0EFF23FA5AA8DA0 * value)
	{
		___pinkyMiddle_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pinkyMiddle_21), (void*)value);
	}

	inline static int32_t get_offset_of_pinkyTop_22() { return static_cast<int32_t>(offsetof(HandPoseDriver_t0BFB7CFFBC3305D2AF2A7A2A0AF1282B3E1D3133, ___pinkyTop_22)); }
	inline HandJointUpdater_t9E0CBC516EB9F7763FF018A4D0EFF23FA5AA8DA0 * get_pinkyTop_22() const { return ___pinkyTop_22; }
	inline HandJointUpdater_t9E0CBC516EB9F7763FF018A4D0EFF23FA5AA8DA0 ** get_address_of_pinkyTop_22() { return &___pinkyTop_22; }
	inline void set_pinkyTop_22(HandJointUpdater_t9E0CBC516EB9F7763FF018A4D0EFF23FA5AA8DA0 * value)
	{
		___pinkyTop_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pinkyTop_22), (void*)value);
	}

	inline static int32_t get_offset_of_scale_23() { return static_cast<int32_t>(offsetof(HandPoseDriver_t0BFB7CFFBC3305D2AF2A7A2A0AF1282B3E1D3133, ___scale_23)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_scale_23() const { return ___scale_23; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_scale_23() { return &___scale_23; }
	inline void set_scale_23(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___scale_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scale_23), (void*)value);
	}

	inline static int32_t get_offset_of__scaleMultiplier_24() { return static_cast<int32_t>(offsetof(HandPoseDriver_t0BFB7CFFBC3305D2AF2A7A2A0AF1282B3E1D3133, ____scaleMultiplier_24)); }
	inline float get__scaleMultiplier_24() const { return ____scaleMultiplier_24; }
	inline float* get_address_of__scaleMultiplier_24() { return &____scaleMultiplier_24; }
	inline void set__scaleMultiplier_24(float value)
	{
		____scaleMultiplier_24 = value;
	}
};


// QCHT.Interactions.Hands.HandPresenter
struct HandPresenter_t458E7A35002C8A2B559BAD19C2D90315B19D4CE1  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// QCHT.Interactions.Hands.HandPoseDriver QCHT.Interactions.Hands.HandPresenter::mainHand
	HandPoseDriver_t0BFB7CFFBC3305D2AF2A7A2A0AF1282B3E1D3133 * ___mainHand_6;
	// QCHT.Interactions.Hands.HandPoseDriver QCHT.Interactions.Hands.HandPresenter::ghostHand
	HandPoseDriver_t0BFB7CFFBC3305D2AF2A7A2A0AF1282B3E1D3133 * ___ghostHand_7;
	// UnityEngine.SkinnedMeshRenderer QCHT.Interactions.Hands.HandPresenter::mainSkinnedMeshRenderer
	SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * ___mainSkinnedMeshRenderer_8;
	// UnityEngine.SkinnedMeshRenderer QCHT.Interactions.Hands.HandPresenter::ghostSkinnedMeshRenderer
	SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * ___ghostSkinnedMeshRenderer_9;
	// System.Single QCHT.Interactions.Hands.HandPresenter::handScaleMultiplier
	float ___handScaleMultiplier_10;
	// QCHT.Interactions.Hands.HandInteractionType QCHT.Interactions.Hands.HandPresenter::interactionType
	int32_t ___interactionType_11;
	// System.Boolean QCHT.Interactions.Hands.HandPresenter::enablePhysicsRaycast
	bool ___enablePhysicsRaycast_12;
	// QCHT.Interactions.Distal.QCHTPhysicsRaycaster QCHT.Interactions.Hands.HandPresenter::raycaster
	QCHTPhysicsRaycaster_t0C1E7A18DC87EF4C524B8DD71A58B2D81B1C52A7 * ___raycaster_13;
	// System.Boolean QCHT.Interactions.Hands.HandPresenter::enableRaycastDisplay
	bool ___enableRaycastDisplay_14;
	// QCHT.Interactions.Distal.QCHTRay QCHT.Interactions.Hands.HandPresenter::ray
	QCHTRay_tF376F2D12139CFB0AD5A5F2328C6C93B18CED74F * ___ray_15;
	// System.Single QCHT.Interactions.Hands.HandPresenter::fadeDuration
	float ___fadeDuration_16;
	// System.Boolean QCHT.Interactions.Hands.HandPresenter::displayGhostHand
	bool ___displayGhostHand_17;
	// UnityEngine.Vector2 QCHT.Interactions.Hands.HandPresenter::distanceBlendAlpha
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___distanceBlendAlpha_18;
	// QCHT.Interactions.VFF.PhysicalHandConfiguration QCHT.Interactions.Hands.HandPresenter::physicsHandConfiguration
	PhysicalHandConfiguration_tCD17AA6F132F95086B886B0DF3C1AF28E271CD09 * ___physicsHandConfiguration_19;
	// QCHT.Interactions.Hands.HandPartPresenter QCHT.Interactions.Hands.HandPresenter::rootPart
	HandPartPresenter_tE49E84C28A6BD001D4E4D4A7738167754BC2CD54 * ___rootPart_20;
	// QCHT.Interactions.Hands.HandSkin QCHT.Interactions.Hands.HandPresenter::defaultSkin
	HandSkin_tE56A5AF1B46AECA87B2009E9C3964486FFFE70A2 * ___defaultSkin_21;
	// UnityEngine.MaterialPropertyBlock QCHT.Interactions.Hands.HandPresenter::_mainMaterialPropertyBlock
	MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * ____mainMaterialPropertyBlock_22;
	// UnityEngine.MaterialPropertyBlock QCHT.Interactions.Hands.HandPresenter::_ghostMaterialPropertyBlock
	MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * ____ghostMaterialPropertyBlock_23;
	// UnityEngine.Coroutine QCHT.Interactions.Hands.HandPresenter::_fadeRoutine
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ____fadeRoutine_24;
	// System.Boolean QCHT.Interactions.Hands.HandPresenter::_handDisplayAllowed
	bool ____handDisplayAllowed_25;
	// System.Boolean QCHT.Interactions.Hands.HandPresenter::_detected
	bool ____detected_26;
	// QCHT.Interactions.Hands.HandSkin QCHT.Interactions.Hands.HandPresenter::_handSkin
	HandSkin_tE56A5AF1B46AECA87B2009E9C3964486FFFE70A2 * ____handSkin_27;

public:
	inline static int32_t get_offset_of_mainHand_6() { return static_cast<int32_t>(offsetof(HandPresenter_t458E7A35002C8A2B559BAD19C2D90315B19D4CE1, ___mainHand_6)); }
	inline HandPoseDriver_t0BFB7CFFBC3305D2AF2A7A2A0AF1282B3E1D3133 * get_mainHand_6() const { return ___mainHand_6; }
	inline HandPoseDriver_t0BFB7CFFBC3305D2AF2A7A2A0AF1282B3E1D3133 ** get_address_of_mainHand_6() { return &___mainHand_6; }
	inline void set_mainHand_6(HandPoseDriver_t0BFB7CFFBC3305D2AF2A7A2A0AF1282B3E1D3133 * value)
	{
		___mainHand_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mainHand_6), (void*)value);
	}

	inline static int32_t get_offset_of_ghostHand_7() { return static_cast<int32_t>(offsetof(HandPresenter_t458E7A35002C8A2B559BAD19C2D90315B19D4CE1, ___ghostHand_7)); }
	inline HandPoseDriver_t0BFB7CFFBC3305D2AF2A7A2A0AF1282B3E1D3133 * get_ghostHand_7() const { return ___ghostHand_7; }
	inline HandPoseDriver_t0BFB7CFFBC3305D2AF2A7A2A0AF1282B3E1D3133 ** get_address_of_ghostHand_7() { return &___ghostHand_7; }
	inline void set_ghostHand_7(HandPoseDriver_t0BFB7CFFBC3305D2AF2A7A2A0AF1282B3E1D3133 * value)
	{
		___ghostHand_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ghostHand_7), (void*)value);
	}

	inline static int32_t get_offset_of_mainSkinnedMeshRenderer_8() { return static_cast<int32_t>(offsetof(HandPresenter_t458E7A35002C8A2B559BAD19C2D90315B19D4CE1, ___mainSkinnedMeshRenderer_8)); }
	inline SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * get_mainSkinnedMeshRenderer_8() const { return ___mainSkinnedMeshRenderer_8; }
	inline SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 ** get_address_of_mainSkinnedMeshRenderer_8() { return &___mainSkinnedMeshRenderer_8; }
	inline void set_mainSkinnedMeshRenderer_8(SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * value)
	{
		___mainSkinnedMeshRenderer_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mainSkinnedMeshRenderer_8), (void*)value);
	}

	inline static int32_t get_offset_of_ghostSkinnedMeshRenderer_9() { return static_cast<int32_t>(offsetof(HandPresenter_t458E7A35002C8A2B559BAD19C2D90315B19D4CE1, ___ghostSkinnedMeshRenderer_9)); }
	inline SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * get_ghostSkinnedMeshRenderer_9() const { return ___ghostSkinnedMeshRenderer_9; }
	inline SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 ** get_address_of_ghostSkinnedMeshRenderer_9() { return &___ghostSkinnedMeshRenderer_9; }
	inline void set_ghostSkinnedMeshRenderer_9(SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * value)
	{
		___ghostSkinnedMeshRenderer_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ghostSkinnedMeshRenderer_9), (void*)value);
	}

	inline static int32_t get_offset_of_handScaleMultiplier_10() { return static_cast<int32_t>(offsetof(HandPresenter_t458E7A35002C8A2B559BAD19C2D90315B19D4CE1, ___handScaleMultiplier_10)); }
	inline float get_handScaleMultiplier_10() const { return ___handScaleMultiplier_10; }
	inline float* get_address_of_handScaleMultiplier_10() { return &___handScaleMultiplier_10; }
	inline void set_handScaleMultiplier_10(float value)
	{
		___handScaleMultiplier_10 = value;
	}

	inline static int32_t get_offset_of_interactionType_11() { return static_cast<int32_t>(offsetof(HandPresenter_t458E7A35002C8A2B559BAD19C2D90315B19D4CE1, ___interactionType_11)); }
	inline int32_t get_interactionType_11() const { return ___interactionType_11; }
	inline int32_t* get_address_of_interactionType_11() { return &___interactionType_11; }
	inline void set_interactionType_11(int32_t value)
	{
		___interactionType_11 = value;
	}

	inline static int32_t get_offset_of_enablePhysicsRaycast_12() { return static_cast<int32_t>(offsetof(HandPresenter_t458E7A35002C8A2B559BAD19C2D90315B19D4CE1, ___enablePhysicsRaycast_12)); }
	inline bool get_enablePhysicsRaycast_12() const { return ___enablePhysicsRaycast_12; }
	inline bool* get_address_of_enablePhysicsRaycast_12() { return &___enablePhysicsRaycast_12; }
	inline void set_enablePhysicsRaycast_12(bool value)
	{
		___enablePhysicsRaycast_12 = value;
	}

	inline static int32_t get_offset_of_raycaster_13() { return static_cast<int32_t>(offsetof(HandPresenter_t458E7A35002C8A2B559BAD19C2D90315B19D4CE1, ___raycaster_13)); }
	inline QCHTPhysicsRaycaster_t0C1E7A18DC87EF4C524B8DD71A58B2D81B1C52A7 * get_raycaster_13() const { return ___raycaster_13; }
	inline QCHTPhysicsRaycaster_t0C1E7A18DC87EF4C524B8DD71A58B2D81B1C52A7 ** get_address_of_raycaster_13() { return &___raycaster_13; }
	inline void set_raycaster_13(QCHTPhysicsRaycaster_t0C1E7A18DC87EF4C524B8DD71A58B2D81B1C52A7 * value)
	{
		___raycaster_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___raycaster_13), (void*)value);
	}

	inline static int32_t get_offset_of_enableRaycastDisplay_14() { return static_cast<int32_t>(offsetof(HandPresenter_t458E7A35002C8A2B559BAD19C2D90315B19D4CE1, ___enableRaycastDisplay_14)); }
	inline bool get_enableRaycastDisplay_14() const { return ___enableRaycastDisplay_14; }
	inline bool* get_address_of_enableRaycastDisplay_14() { return &___enableRaycastDisplay_14; }
	inline void set_enableRaycastDisplay_14(bool value)
	{
		___enableRaycastDisplay_14 = value;
	}

	inline static int32_t get_offset_of_ray_15() { return static_cast<int32_t>(offsetof(HandPresenter_t458E7A35002C8A2B559BAD19C2D90315B19D4CE1, ___ray_15)); }
	inline QCHTRay_tF376F2D12139CFB0AD5A5F2328C6C93B18CED74F * get_ray_15() const { return ___ray_15; }
	inline QCHTRay_tF376F2D12139CFB0AD5A5F2328C6C93B18CED74F ** get_address_of_ray_15() { return &___ray_15; }
	inline void set_ray_15(QCHTRay_tF376F2D12139CFB0AD5A5F2328C6C93B18CED74F * value)
	{
		___ray_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ray_15), (void*)value);
	}

	inline static int32_t get_offset_of_fadeDuration_16() { return static_cast<int32_t>(offsetof(HandPresenter_t458E7A35002C8A2B559BAD19C2D90315B19D4CE1, ___fadeDuration_16)); }
	inline float get_fadeDuration_16() const { return ___fadeDuration_16; }
	inline float* get_address_of_fadeDuration_16() { return &___fadeDuration_16; }
	inline void set_fadeDuration_16(float value)
	{
		___fadeDuration_16 = value;
	}

	inline static int32_t get_offset_of_displayGhostHand_17() { return static_cast<int32_t>(offsetof(HandPresenter_t458E7A35002C8A2B559BAD19C2D90315B19D4CE1, ___displayGhostHand_17)); }
	inline bool get_displayGhostHand_17() const { return ___displayGhostHand_17; }
	inline bool* get_address_of_displayGhostHand_17() { return &___displayGhostHand_17; }
	inline void set_displayGhostHand_17(bool value)
	{
		___displayGhostHand_17 = value;
	}

	inline static int32_t get_offset_of_distanceBlendAlpha_18() { return static_cast<int32_t>(offsetof(HandPresenter_t458E7A35002C8A2B559BAD19C2D90315B19D4CE1, ___distanceBlendAlpha_18)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_distanceBlendAlpha_18() const { return ___distanceBlendAlpha_18; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_distanceBlendAlpha_18() { return &___distanceBlendAlpha_18; }
	inline void set_distanceBlendAlpha_18(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___distanceBlendAlpha_18 = value;
	}

	inline static int32_t get_offset_of_physicsHandConfiguration_19() { return static_cast<int32_t>(offsetof(HandPresenter_t458E7A35002C8A2B559BAD19C2D90315B19D4CE1, ___physicsHandConfiguration_19)); }
	inline PhysicalHandConfiguration_tCD17AA6F132F95086B886B0DF3C1AF28E271CD09 * get_physicsHandConfiguration_19() const { return ___physicsHandConfiguration_19; }
	inline PhysicalHandConfiguration_tCD17AA6F132F95086B886B0DF3C1AF28E271CD09 ** get_address_of_physicsHandConfiguration_19() { return &___physicsHandConfiguration_19; }
	inline void set_physicsHandConfiguration_19(PhysicalHandConfiguration_tCD17AA6F132F95086B886B0DF3C1AF28E271CD09 * value)
	{
		___physicsHandConfiguration_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___physicsHandConfiguration_19), (void*)value);
	}

	inline static int32_t get_offset_of_rootPart_20() { return static_cast<int32_t>(offsetof(HandPresenter_t458E7A35002C8A2B559BAD19C2D90315B19D4CE1, ___rootPart_20)); }
	inline HandPartPresenter_tE49E84C28A6BD001D4E4D4A7738167754BC2CD54 * get_rootPart_20() const { return ___rootPart_20; }
	inline HandPartPresenter_tE49E84C28A6BD001D4E4D4A7738167754BC2CD54 ** get_address_of_rootPart_20() { return &___rootPart_20; }
	inline void set_rootPart_20(HandPartPresenter_tE49E84C28A6BD001D4E4D4A7738167754BC2CD54 * value)
	{
		___rootPart_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rootPart_20), (void*)value);
	}

	inline static int32_t get_offset_of_defaultSkin_21() { return static_cast<int32_t>(offsetof(HandPresenter_t458E7A35002C8A2B559BAD19C2D90315B19D4CE1, ___defaultSkin_21)); }
	inline HandSkin_tE56A5AF1B46AECA87B2009E9C3964486FFFE70A2 * get_defaultSkin_21() const { return ___defaultSkin_21; }
	inline HandSkin_tE56A5AF1B46AECA87B2009E9C3964486FFFE70A2 ** get_address_of_defaultSkin_21() { return &___defaultSkin_21; }
	inline void set_defaultSkin_21(HandSkin_tE56A5AF1B46AECA87B2009E9C3964486FFFE70A2 * value)
	{
		___defaultSkin_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultSkin_21), (void*)value);
	}

	inline static int32_t get_offset_of__mainMaterialPropertyBlock_22() { return static_cast<int32_t>(offsetof(HandPresenter_t458E7A35002C8A2B559BAD19C2D90315B19D4CE1, ____mainMaterialPropertyBlock_22)); }
	inline MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * get__mainMaterialPropertyBlock_22() const { return ____mainMaterialPropertyBlock_22; }
	inline MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 ** get_address_of__mainMaterialPropertyBlock_22() { return &____mainMaterialPropertyBlock_22; }
	inline void set__mainMaterialPropertyBlock_22(MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * value)
	{
		____mainMaterialPropertyBlock_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____mainMaterialPropertyBlock_22), (void*)value);
	}

	inline static int32_t get_offset_of__ghostMaterialPropertyBlock_23() { return static_cast<int32_t>(offsetof(HandPresenter_t458E7A35002C8A2B559BAD19C2D90315B19D4CE1, ____ghostMaterialPropertyBlock_23)); }
	inline MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * get__ghostMaterialPropertyBlock_23() const { return ____ghostMaterialPropertyBlock_23; }
	inline MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 ** get_address_of__ghostMaterialPropertyBlock_23() { return &____ghostMaterialPropertyBlock_23; }
	inline void set__ghostMaterialPropertyBlock_23(MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * value)
	{
		____ghostMaterialPropertyBlock_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ghostMaterialPropertyBlock_23), (void*)value);
	}

	inline static int32_t get_offset_of__fadeRoutine_24() { return static_cast<int32_t>(offsetof(HandPresenter_t458E7A35002C8A2B559BAD19C2D90315B19D4CE1, ____fadeRoutine_24)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get__fadeRoutine_24() const { return ____fadeRoutine_24; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of__fadeRoutine_24() { return &____fadeRoutine_24; }
	inline void set__fadeRoutine_24(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		____fadeRoutine_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fadeRoutine_24), (void*)value);
	}

	inline static int32_t get_offset_of__handDisplayAllowed_25() { return static_cast<int32_t>(offsetof(HandPresenter_t458E7A35002C8A2B559BAD19C2D90315B19D4CE1, ____handDisplayAllowed_25)); }
	inline bool get__handDisplayAllowed_25() const { return ____handDisplayAllowed_25; }
	inline bool* get_address_of__handDisplayAllowed_25() { return &____handDisplayAllowed_25; }
	inline void set__handDisplayAllowed_25(bool value)
	{
		____handDisplayAllowed_25 = value;
	}

	inline static int32_t get_offset_of__detected_26() { return static_cast<int32_t>(offsetof(HandPresenter_t458E7A35002C8A2B559BAD19C2D90315B19D4CE1, ____detected_26)); }
	inline bool get__detected_26() const { return ____detected_26; }
	inline bool* get_address_of__detected_26() { return &____detected_26; }
	inline void set__detected_26(bool value)
	{
		____detected_26 = value;
	}

	inline static int32_t get_offset_of__handSkin_27() { return static_cast<int32_t>(offsetof(HandPresenter_t458E7A35002C8A2B559BAD19C2D90315B19D4CE1, ____handSkin_27)); }
	inline HandSkin_tE56A5AF1B46AECA87B2009E9C3964486FFFE70A2 * get__handSkin_27() const { return ____handSkin_27; }
	inline HandSkin_tE56A5AF1B46AECA87B2009E9C3964486FFFE70A2 ** get_address_of__handSkin_27() { return &____handSkin_27; }
	inline void set__handSkin_27(HandSkin_tE56A5AF1B46AECA87B2009E9C3964486FFFE70A2 * value)
	{
		____handSkin_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____handSkin_27), (void*)value);
	}
};

struct HandPresenter_t458E7A35002C8A2B559BAD19C2D90315B19D4CE1_StaticFields
{
public:
	// System.Int32 QCHT.Interactions.Hands.HandPresenter::s_globalAlpha
	int32_t ___s_globalAlpha_4;
	// System.Int32 QCHT.Interactions.Hands.HandPresenter::s_userAlpha
	int32_t ___s_userAlpha_5;

public:
	inline static int32_t get_offset_of_s_globalAlpha_4() { return static_cast<int32_t>(offsetof(HandPresenter_t458E7A35002C8A2B559BAD19C2D90315B19D4CE1_StaticFields, ___s_globalAlpha_4)); }
	inline int32_t get_s_globalAlpha_4() const { return ___s_globalAlpha_4; }
	inline int32_t* get_address_of_s_globalAlpha_4() { return &___s_globalAlpha_4; }
	inline void set_s_globalAlpha_4(int32_t value)
	{
		___s_globalAlpha_4 = value;
	}

	inline static int32_t get_offset_of_s_userAlpha_5() { return static_cast<int32_t>(offsetof(HandPresenter_t458E7A35002C8A2B559BAD19C2D90315B19D4CE1_StaticFields, ___s_userAlpha_5)); }
	inline int32_t get_s_userAlpha_5() const { return ___s_userAlpha_5; }
	inline int32_t* get_address_of_s_userAlpha_5() { return &___s_userAlpha_5; }
	inline void set_s_userAlpha_5(int32_t value)
	{
		___s_userAlpha_5 = value;
	}
};


// QCHT.Interactions.Distal.ControlBox.InteractionGridControlPoint
struct InteractionGridControlPoint_tACAF23DB22DAE8CEDDBDCFCAACB80FEA4B0FDE3B  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// QCHT.Interactions.Distal.ControlBox.InteractionGrid/InteractionType QCHT.Interactions.Distal.ControlBox.InteractionGridControlPoint::Type
	int32_t ___Type_4;
	// System.Boolean QCHT.Interactions.Distal.ControlBox.InteractionGridControlPoint::isCorner
	bool ___isCorner_5;
	// UnityEngine.Vector3 QCHT.Interactions.Distal.ControlBox.InteractionGridControlPoint::axis
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___axis_6;
	// UnityEngine.Collider QCHT.Interactions.Distal.ControlBox.InteractionGridControlPoint::_pointCollider
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ____pointCollider_7;
	// UnityEngine.ParticleSystem QCHT.Interactions.Distal.ControlBox.InteractionGridControlPoint::_particleSystem
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ____particleSystem_8;
	// QCHT.Interactions.Distal.ControlBox.ControlBoxSettings/HandleState QCHT.Interactions.Distal.ControlBox.InteractionGridControlPoint::NormalState
	HandleState_t99F86F76B39451BCDCF162872D2D08FFA5507EC8  ___NormalState_9;
	// QCHT.Interactions.Distal.ControlBox.ControlBoxSettings/HandleState QCHT.Interactions.Distal.ControlBox.InteractionGridControlPoint::HoverState
	HandleState_t99F86F76B39451BCDCF162872D2D08FFA5507EC8  ___HoverState_10;
	// QCHT.Interactions.Distal.ControlBox.ControlBoxSettings/HandleState QCHT.Interactions.Distal.ControlBox.InteractionGridControlPoint::SelectedState
	HandleState_t99F86F76B39451BCDCF162872D2D08FFA5507EC8  ___SelectedState_11;
	// UnityEngine.ParticleSystem/MainModule QCHT.Interactions.Distal.ControlBox.InteractionGridControlPoint::_psMainModule
	MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B  ____psMainModule_12;
	// UnityEngine.Vector3 QCHT.Interactions.Distal.ControlBox.InteractionGridControlPoint::_initialScale
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ____initialScale_13;
	// UnityEngine.Vector3 QCHT.Interactions.Distal.ControlBox.InteractionGridControlPoint::_opposite
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ____opposite_14;
	// UnityEngine.Vector3 QCHT.Interactions.Distal.ControlBox.InteractionGridControlPoint::_originalPos
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ____originalPos_15;
	// UnityEngine.Vector3 QCHT.Interactions.Distal.ControlBox.InteractionGridControlPoint::_originalGizmoPos
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ____originalGizmoPos_16;
	// UnityEngine.Vector3 QCHT.Interactions.Distal.ControlBox.InteractionGridControlPoint::_diagDir
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ____diagDir_17;
	// UnityEngine.Quaternion QCHT.Interactions.Distal.ControlBox.InteractionGridControlPoint::_originalGizmoRot
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ____originalGizmoRot_18;
	// System.Boolean QCHT.Interactions.Distal.ControlBox.InteractionGridControlPoint::_leftSelected
	bool ____leftSelected_19;
	// System.Boolean QCHT.Interactions.Distal.ControlBox.InteractionGridControlPoint::_rightSelected
	bool ____rightSelected_20;
	// System.Boolean QCHT.Interactions.Distal.ControlBox.InteractionGridControlPoint::_leftHover
	bool ____leftHover_21;
	// System.Boolean QCHT.Interactions.Distal.ControlBox.InteractionGridControlPoint::_rightHover
	bool ____rightHover_22;
	// QCHT.Interactions.Distal.ControlBox.InteractionGridControlPoint/HandleEventHandler QCHT.Interactions.Distal.ControlBox.InteractionGridControlPoint::OnStartInteractingHandle
	HandleEventHandler_t7F05F5747CC0065BC1D3B7EB323250521AB0BC35 * ___OnStartInteractingHandle_23;
	// QCHT.Interactions.Distal.ControlBox.InteractionGridControlPoint/HandleEventHandler QCHT.Interactions.Distal.ControlBox.InteractionGridControlPoint::OnStopInteractingHandle
	HandleEventHandler_t7F05F5747CC0065BC1D3B7EB323250521AB0BC35 * ___OnStopInteractingHandle_24;
	// QCHT.Interactions.Distal.RayData QCHT.Interactions.Distal.ControlBox.InteractionGridControlPoint::_hoverRayData
	RayData_t7F1A4A0CA1CC0150160930C15BF4B6918EFDCBE9  ____hoverRayData_25;
	// QCHT.Interactions.Distal.RayData QCHT.Interactions.Distal.ControlBox.InteractionGridControlPoint::_selectedRayData
	RayData_t7F1A4A0CA1CC0150160930C15BF4B6918EFDCBE9  ____selectedRayData_26;

public:
	inline static int32_t get_offset_of_Type_4() { return static_cast<int32_t>(offsetof(InteractionGridControlPoint_tACAF23DB22DAE8CEDDBDCFCAACB80FEA4B0FDE3B, ___Type_4)); }
	inline int32_t get_Type_4() const { return ___Type_4; }
	inline int32_t* get_address_of_Type_4() { return &___Type_4; }
	inline void set_Type_4(int32_t value)
	{
		___Type_4 = value;
	}

	inline static int32_t get_offset_of_isCorner_5() { return static_cast<int32_t>(offsetof(InteractionGridControlPoint_tACAF23DB22DAE8CEDDBDCFCAACB80FEA4B0FDE3B, ___isCorner_5)); }
	inline bool get_isCorner_5() const { return ___isCorner_5; }
	inline bool* get_address_of_isCorner_5() { return &___isCorner_5; }
	inline void set_isCorner_5(bool value)
	{
		___isCorner_5 = value;
	}

	inline static int32_t get_offset_of_axis_6() { return static_cast<int32_t>(offsetof(InteractionGridControlPoint_tACAF23DB22DAE8CEDDBDCFCAACB80FEA4B0FDE3B, ___axis_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_axis_6() const { return ___axis_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_axis_6() { return &___axis_6; }
	inline void set_axis_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___axis_6 = value;
	}

	inline static int32_t get_offset_of__pointCollider_7() { return static_cast<int32_t>(offsetof(InteractionGridControlPoint_tACAF23DB22DAE8CEDDBDCFCAACB80FEA4B0FDE3B, ____pointCollider_7)); }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * get__pointCollider_7() const { return ____pointCollider_7; }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 ** get_address_of__pointCollider_7() { return &____pointCollider_7; }
	inline void set__pointCollider_7(Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * value)
	{
		____pointCollider_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____pointCollider_7), (void*)value);
	}

	inline static int32_t get_offset_of__particleSystem_8() { return static_cast<int32_t>(offsetof(InteractionGridControlPoint_tACAF23DB22DAE8CEDDBDCFCAACB80FEA4B0FDE3B, ____particleSystem_8)); }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * get__particleSystem_8() const { return ____particleSystem_8; }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E ** get_address_of__particleSystem_8() { return &____particleSystem_8; }
	inline void set__particleSystem_8(ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * value)
	{
		____particleSystem_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____particleSystem_8), (void*)value);
	}

	inline static int32_t get_offset_of_NormalState_9() { return static_cast<int32_t>(offsetof(InteractionGridControlPoint_tACAF23DB22DAE8CEDDBDCFCAACB80FEA4B0FDE3B, ___NormalState_9)); }
	inline HandleState_t99F86F76B39451BCDCF162872D2D08FFA5507EC8  get_NormalState_9() const { return ___NormalState_9; }
	inline HandleState_t99F86F76B39451BCDCF162872D2D08FFA5507EC8 * get_address_of_NormalState_9() { return &___NormalState_9; }
	inline void set_NormalState_9(HandleState_t99F86F76B39451BCDCF162872D2D08FFA5507EC8  value)
	{
		___NormalState_9 = value;
	}

	inline static int32_t get_offset_of_HoverState_10() { return static_cast<int32_t>(offsetof(InteractionGridControlPoint_tACAF23DB22DAE8CEDDBDCFCAACB80FEA4B0FDE3B, ___HoverState_10)); }
	inline HandleState_t99F86F76B39451BCDCF162872D2D08FFA5507EC8  get_HoverState_10() const { return ___HoverState_10; }
	inline HandleState_t99F86F76B39451BCDCF162872D2D08FFA5507EC8 * get_address_of_HoverState_10() { return &___HoverState_10; }
	inline void set_HoverState_10(HandleState_t99F86F76B39451BCDCF162872D2D08FFA5507EC8  value)
	{
		___HoverState_10 = value;
	}

	inline static int32_t get_offset_of_SelectedState_11() { return static_cast<int32_t>(offsetof(InteractionGridControlPoint_tACAF23DB22DAE8CEDDBDCFCAACB80FEA4B0FDE3B, ___SelectedState_11)); }
	inline HandleState_t99F86F76B39451BCDCF162872D2D08FFA5507EC8  get_SelectedState_11() const { return ___SelectedState_11; }
	inline HandleState_t99F86F76B39451BCDCF162872D2D08FFA5507EC8 * get_address_of_SelectedState_11() { return &___SelectedState_11; }
	inline void set_SelectedState_11(HandleState_t99F86F76B39451BCDCF162872D2D08FFA5507EC8  value)
	{
		___SelectedState_11 = value;
	}

	inline static int32_t get_offset_of__psMainModule_12() { return static_cast<int32_t>(offsetof(InteractionGridControlPoint_tACAF23DB22DAE8CEDDBDCFCAACB80FEA4B0FDE3B, ____psMainModule_12)); }
	inline MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B  get__psMainModule_12() const { return ____psMainModule_12; }
	inline MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B * get_address_of__psMainModule_12() { return &____psMainModule_12; }
	inline void set__psMainModule_12(MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B  value)
	{
		____psMainModule_12 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____psMainModule_12))->___m_ParticleSystem_0), (void*)NULL);
	}

	inline static int32_t get_offset_of__initialScale_13() { return static_cast<int32_t>(offsetof(InteractionGridControlPoint_tACAF23DB22DAE8CEDDBDCFCAACB80FEA4B0FDE3B, ____initialScale_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get__initialScale_13() const { return ____initialScale_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of__initialScale_13() { return &____initialScale_13; }
	inline void set__initialScale_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		____initialScale_13 = value;
	}

	inline static int32_t get_offset_of__opposite_14() { return static_cast<int32_t>(offsetof(InteractionGridControlPoint_tACAF23DB22DAE8CEDDBDCFCAACB80FEA4B0FDE3B, ____opposite_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get__opposite_14() const { return ____opposite_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of__opposite_14() { return &____opposite_14; }
	inline void set__opposite_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		____opposite_14 = value;
	}

	inline static int32_t get_offset_of__originalPos_15() { return static_cast<int32_t>(offsetof(InteractionGridControlPoint_tACAF23DB22DAE8CEDDBDCFCAACB80FEA4B0FDE3B, ____originalPos_15)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get__originalPos_15() const { return ____originalPos_15; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of__originalPos_15() { return &____originalPos_15; }
	inline void set__originalPos_15(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		____originalPos_15 = value;
	}

	inline static int32_t get_offset_of__originalGizmoPos_16() { return static_cast<int32_t>(offsetof(InteractionGridControlPoint_tACAF23DB22DAE8CEDDBDCFCAACB80FEA4B0FDE3B, ____originalGizmoPos_16)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get__originalGizmoPos_16() const { return ____originalGizmoPos_16; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of__originalGizmoPos_16() { return &____originalGizmoPos_16; }
	inline void set__originalGizmoPos_16(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		____originalGizmoPos_16 = value;
	}

	inline static int32_t get_offset_of__diagDir_17() { return static_cast<int32_t>(offsetof(InteractionGridControlPoint_tACAF23DB22DAE8CEDDBDCFCAACB80FEA4B0FDE3B, ____diagDir_17)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get__diagDir_17() const { return ____diagDir_17; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of__diagDir_17() { return &____diagDir_17; }
	inline void set__diagDir_17(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		____diagDir_17 = value;
	}

	inline static int32_t get_offset_of__originalGizmoRot_18() { return static_cast<int32_t>(offsetof(InteractionGridControlPoint_tACAF23DB22DAE8CEDDBDCFCAACB80FEA4B0FDE3B, ____originalGizmoRot_18)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get__originalGizmoRot_18() const { return ____originalGizmoRot_18; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of__originalGizmoRot_18() { return &____originalGizmoRot_18; }
	inline void set__originalGizmoRot_18(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		____originalGizmoRot_18 = value;
	}

	inline static int32_t get_offset_of__leftSelected_19() { return static_cast<int32_t>(offsetof(InteractionGridControlPoint_tACAF23DB22DAE8CEDDBDCFCAACB80FEA4B0FDE3B, ____leftSelected_19)); }
	inline bool get__leftSelected_19() const { return ____leftSelected_19; }
	inline bool* get_address_of__leftSelected_19() { return &____leftSelected_19; }
	inline void set__leftSelected_19(bool value)
	{
		____leftSelected_19 = value;
	}

	inline static int32_t get_offset_of__rightSelected_20() { return static_cast<int32_t>(offsetof(InteractionGridControlPoint_tACAF23DB22DAE8CEDDBDCFCAACB80FEA4B0FDE3B, ____rightSelected_20)); }
	inline bool get__rightSelected_20() const { return ____rightSelected_20; }
	inline bool* get_address_of__rightSelected_20() { return &____rightSelected_20; }
	inline void set__rightSelected_20(bool value)
	{
		____rightSelected_20 = value;
	}

	inline static int32_t get_offset_of__leftHover_21() { return static_cast<int32_t>(offsetof(InteractionGridControlPoint_tACAF23DB22DAE8CEDDBDCFCAACB80FEA4B0FDE3B, ____leftHover_21)); }
	inline bool get__leftHover_21() const { return ____leftHover_21; }
	inline bool* get_address_of__leftHover_21() { return &____leftHover_21; }
	inline void set__leftHover_21(bool value)
	{
		____leftHover_21 = value;
	}

	inline static int32_t get_offset_of__rightHover_22() { return static_cast<int32_t>(offsetof(InteractionGridControlPoint_tACAF23DB22DAE8CEDDBDCFCAACB80FEA4B0FDE3B, ____rightHover_22)); }
	inline bool get__rightHover_22() const { return ____rightHover_22; }
	inline bool* get_address_of__rightHover_22() { return &____rightHover_22; }
	inline void set__rightHover_22(bool value)
	{
		____rightHover_22 = value;
	}

	inline static int32_t get_offset_of_OnStartInteractingHandle_23() { return static_cast<int32_t>(offsetof(InteractionGridControlPoint_tACAF23DB22DAE8CEDDBDCFCAACB80FEA4B0FDE3B, ___OnStartInteractingHandle_23)); }
	inline HandleEventHandler_t7F05F5747CC0065BC1D3B7EB323250521AB0BC35 * get_OnStartInteractingHandle_23() const { return ___OnStartInteractingHandle_23; }
	inline HandleEventHandler_t7F05F5747CC0065BC1D3B7EB323250521AB0BC35 ** get_address_of_OnStartInteractingHandle_23() { return &___OnStartInteractingHandle_23; }
	inline void set_OnStartInteractingHandle_23(HandleEventHandler_t7F05F5747CC0065BC1D3B7EB323250521AB0BC35 * value)
	{
		___OnStartInteractingHandle_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnStartInteractingHandle_23), (void*)value);
	}

	inline static int32_t get_offset_of_OnStopInteractingHandle_24() { return static_cast<int32_t>(offsetof(InteractionGridControlPoint_tACAF23DB22DAE8CEDDBDCFCAACB80FEA4B0FDE3B, ___OnStopInteractingHandle_24)); }
	inline HandleEventHandler_t7F05F5747CC0065BC1D3B7EB323250521AB0BC35 * get_OnStopInteractingHandle_24() const { return ___OnStopInteractingHandle_24; }
	inline HandleEventHandler_t7F05F5747CC0065BC1D3B7EB323250521AB0BC35 ** get_address_of_OnStopInteractingHandle_24() { return &___OnStopInteractingHandle_24; }
	inline void set_OnStopInteractingHandle_24(HandleEventHandler_t7F05F5747CC0065BC1D3B7EB323250521AB0BC35 * value)
	{
		___OnStopInteractingHandle_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnStopInteractingHandle_24), (void*)value);
	}

	inline static int32_t get_offset_of__hoverRayData_25() { return static_cast<int32_t>(offsetof(InteractionGridControlPoint_tACAF23DB22DAE8CEDDBDCFCAACB80FEA4B0FDE3B, ____hoverRayData_25)); }
	inline RayData_t7F1A4A0CA1CC0150160930C15BF4B6918EFDCBE9  get__hoverRayData_25() const { return ____hoverRayData_25; }
	inline RayData_t7F1A4A0CA1CC0150160930C15BF4B6918EFDCBE9 * get_address_of__hoverRayData_25() { return &____hoverRayData_25; }
	inline void set__hoverRayData_25(RayData_t7F1A4A0CA1CC0150160930C15BF4B6918EFDCBE9  value)
	{
		____hoverRayData_25 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____hoverRayData_25))->___ReticleSprite_0), (void*)NULL);
	}

	inline static int32_t get_offset_of__selectedRayData_26() { return static_cast<int32_t>(offsetof(InteractionGridControlPoint_tACAF23DB22DAE8CEDDBDCFCAACB80FEA4B0FDE3B, ____selectedRayData_26)); }
	inline RayData_t7F1A4A0CA1CC0150160930C15BF4B6918EFDCBE9  get__selectedRayData_26() const { return ____selectedRayData_26; }
	inline RayData_t7F1A4A0CA1CC0150160930C15BF4B6918EFDCBE9 * get_address_of__selectedRayData_26() { return &____selectedRayData_26; }
	inline void set__selectedRayData_26(RayData_t7F1A4A0CA1CC0150160930C15BF4B6918EFDCBE9  value)
	{
		____selectedRayData_26 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____selectedRayData_26))->___ReticleSprite_0), (void*)NULL);
	}
};


// QCHT.Interactions.Proximal.QCHTHandInteractionController
struct QCHTHandInteractionController_t4C2EA2883E824F649BC5BC145FF4B6B20838BE52  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// QCHT.Core.HandType QCHT.Interactions.Proximal.QCHTHandInteractionController::Type
	int32_t ___Type_4;
	// QCHT.Interactions.Hands.HandPoseDriver QCHT.Interactions.Proximal.QCHTHandInteractionController::Driver
	HandPoseDriver_t0BFB7CFFBC3305D2AF2A7A2A0AF1282B3E1D3133 * ___Driver_5;
	// QCHT.Interactions.Hands.HandPartPresenter QCHT.Interactions.Proximal.QCHTHandInteractionController::Root
	HandPartPresenter_tE49E84C28A6BD001D4E4D4A7738167754BC2CD54 * ___Root_6;
	// QCHT.Interactions.Proximal.InteractionResult QCHT.Interactions.Proximal.QCHTHandInteractionController::_result
	InteractionResult_t3E5B707DE2088203CE9BDA4C597378DA0386F3B7  ____result_7;

public:
	inline static int32_t get_offset_of_Type_4() { return static_cast<int32_t>(offsetof(QCHTHandInteractionController_t4C2EA2883E824F649BC5BC145FF4B6B20838BE52, ___Type_4)); }
	inline int32_t get_Type_4() const { return ___Type_4; }
	inline int32_t* get_address_of_Type_4() { return &___Type_4; }
	inline void set_Type_4(int32_t value)
	{
		___Type_4 = value;
	}

	inline static int32_t get_offset_of_Driver_5() { return static_cast<int32_t>(offsetof(QCHTHandInteractionController_t4C2EA2883E824F649BC5BC145FF4B6B20838BE52, ___Driver_5)); }
	inline HandPoseDriver_t0BFB7CFFBC3305D2AF2A7A2A0AF1282B3E1D3133 * get_Driver_5() const { return ___Driver_5; }
	inline HandPoseDriver_t0BFB7CFFBC3305D2AF2A7A2A0AF1282B3E1D3133 ** get_address_of_Driver_5() { return &___Driver_5; }
	inline void set_Driver_5(HandPoseDriver_t0BFB7CFFBC3305D2AF2A7A2A0AF1282B3E1D3133 * value)
	{
		___Driver_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Driver_5), (void*)value);
	}

	inline static int32_t get_offset_of_Root_6() { return static_cast<int32_t>(offsetof(QCHTHandInteractionController_t4C2EA2883E824F649BC5BC145FF4B6B20838BE52, ___Root_6)); }
	inline HandPartPresenter_tE49E84C28A6BD001D4E4D4A7738167754BC2CD54 * get_Root_6() const { return ___Root_6; }
	inline HandPartPresenter_tE49E84C28A6BD001D4E4D4A7738167754BC2CD54 ** get_address_of_Root_6() { return &___Root_6; }
	inline void set_Root_6(HandPartPresenter_tE49E84C28A6BD001D4E4D4A7738167754BC2CD54 * value)
	{
		___Root_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Root_6), (void*)value);
	}

	inline static int32_t get_offset_of__result_7() { return static_cast<int32_t>(offsetof(QCHTHandInteractionController_t4C2EA2883E824F649BC5BC145FF4B6B20838BE52, ____result_7)); }
	inline InteractionResult_t3E5B707DE2088203CE9BDA4C597378DA0386F3B7  get__result_7() const { return ____result_7; }
	inline InteractionResult_t3E5B707DE2088203CE9BDA4C597378DA0386F3B7 * get_address_of__result_7() { return &____result_7; }
	inline void set__result_7(InteractionResult_t3E5B707DE2088203CE9BDA4C597378DA0386F3B7  value)
	{
		____result_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____result_7))->___currentGameObject_0), (void*)NULL);
	}
};


// QCHT.Interactions.TextureAnimator
struct TextureAnimator_t0ADAB643BA91FC0994361436E944F56F4B2343A0  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single QCHT.Interactions.TextureAnimator::xSpeed
	float ___xSpeed_5;
	// System.Single QCHT.Interactions.TextureAnimator::ySpeed
	float ___ySpeed_6;
	// System.Single QCHT.Interactions.TextureAnimator::defaultOffsetX
	float ___defaultOffsetX_7;
	// System.Single QCHT.Interactions.TextureAnimator::defaultOffsetY
	float ___defaultOffsetY_8;
	// UnityEngine.Renderer QCHT.Interactions.TextureAnimator::_rend
	Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * ____rend_9;
	// UnityEngine.UI.Image QCHT.Interactions.TextureAnimator::_image
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ____image_10;
	// UnityEngine.Vector2 QCHT.Interactions.TextureAnimator::_uvOffset
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ____uvOffset_11;

public:
	inline static int32_t get_offset_of_xSpeed_5() { return static_cast<int32_t>(offsetof(TextureAnimator_t0ADAB643BA91FC0994361436E944F56F4B2343A0, ___xSpeed_5)); }
	inline float get_xSpeed_5() const { return ___xSpeed_5; }
	inline float* get_address_of_xSpeed_5() { return &___xSpeed_5; }
	inline void set_xSpeed_5(float value)
	{
		___xSpeed_5 = value;
	}

	inline static int32_t get_offset_of_ySpeed_6() { return static_cast<int32_t>(offsetof(TextureAnimator_t0ADAB643BA91FC0994361436E944F56F4B2343A0, ___ySpeed_6)); }
	inline float get_ySpeed_6() const { return ___ySpeed_6; }
	inline float* get_address_of_ySpeed_6() { return &___ySpeed_6; }
	inline void set_ySpeed_6(float value)
	{
		___ySpeed_6 = value;
	}

	inline static int32_t get_offset_of_defaultOffsetX_7() { return static_cast<int32_t>(offsetof(TextureAnimator_t0ADAB643BA91FC0994361436E944F56F4B2343A0, ___defaultOffsetX_7)); }
	inline float get_defaultOffsetX_7() const { return ___defaultOffsetX_7; }
	inline float* get_address_of_defaultOffsetX_7() { return &___defaultOffsetX_7; }
	inline void set_defaultOffsetX_7(float value)
	{
		___defaultOffsetX_7 = value;
	}

	inline static int32_t get_offset_of_defaultOffsetY_8() { return static_cast<int32_t>(offsetof(TextureAnimator_t0ADAB643BA91FC0994361436E944F56F4B2343A0, ___defaultOffsetY_8)); }
	inline float get_defaultOffsetY_8() const { return ___defaultOffsetY_8; }
	inline float* get_address_of_defaultOffsetY_8() { return &___defaultOffsetY_8; }
	inline void set_defaultOffsetY_8(float value)
	{
		___defaultOffsetY_8 = value;
	}

	inline static int32_t get_offset_of__rend_9() { return static_cast<int32_t>(offsetof(TextureAnimator_t0ADAB643BA91FC0994361436E944F56F4B2343A0, ____rend_9)); }
	inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * get__rend_9() const { return ____rend_9; }
	inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C ** get_address_of__rend_9() { return &____rend_9; }
	inline void set__rend_9(Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * value)
	{
		____rend_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rend_9), (void*)value);
	}

	inline static int32_t get_offset_of__image_10() { return static_cast<int32_t>(offsetof(TextureAnimator_t0ADAB643BA91FC0994361436E944F56F4B2343A0, ____image_10)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get__image_10() const { return ____image_10; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of__image_10() { return &____image_10; }
	inline void set__image_10(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		____image_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____image_10), (void*)value);
	}

	inline static int32_t get_offset_of__uvOffset_11() { return static_cast<int32_t>(offsetof(TextureAnimator_t0ADAB643BA91FC0994361436E944F56F4B2343A0, ____uvOffset_11)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get__uvOffset_11() const { return ____uvOffset_11; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of__uvOffset_11() { return &____uvOffset_11; }
	inline void set__uvOffset_11(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		____uvOffset_11 = value;
	}
};

struct TextureAnimator_t0ADAB643BA91FC0994361436E944F56F4B2343A0_StaticFields
{
public:
	// System.Int32 QCHT.Interactions.TextureAnimator::s_mainTex
	int32_t ___s_mainTex_4;

public:
	inline static int32_t get_offset_of_s_mainTex_4() { return static_cast<int32_t>(offsetof(TextureAnimator_t0ADAB643BA91FC0994361436E944F56F4B2343A0_StaticFields, ___s_mainTex_4)); }
	inline int32_t get_s_mainTex_4() const { return ___s_mainTex_4; }
	inline int32_t* get_address_of_s_mainTex_4() { return &___s_mainTex_4; }
	inline void set_s_mainTex_4(int32_t value)
	{
		___s_mainTex_4 = value;
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// QCHT.Interactions.UI.WristUI
struct WristUI_tEC6E732BC9C30B8590BDFD489A01F09E2EBBC9EB  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean QCHT.Interactions.UI.WristUI::isLeftHand
	bool ___isLeftHand_4;
	// System.Boolean QCHT.Interactions.UI.WristUI::lerpEnabled
	bool ___lerpEnabled_5;
	// System.Single QCHT.Interactions.UI.WristUI::speed
	float ___speed_6;
	// UnityEngine.Transform QCHT.Interactions.UI.WristUI::handTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___handTransform_7;
	// UnityEngine.Vector3 QCHT.Interactions.UI.WristUI::positionOffset
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positionOffset_8;
	// UnityEngine.Vector3 QCHT.Interactions.UI.WristUI::rotationOffset
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rotationOffset_9;
	// UnityEngine.Canvas QCHT.Interactions.UI.WristUI::_canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ____canvas_10;

public:
	inline static int32_t get_offset_of_isLeftHand_4() { return static_cast<int32_t>(offsetof(WristUI_tEC6E732BC9C30B8590BDFD489A01F09E2EBBC9EB, ___isLeftHand_4)); }
	inline bool get_isLeftHand_4() const { return ___isLeftHand_4; }
	inline bool* get_address_of_isLeftHand_4() { return &___isLeftHand_4; }
	inline void set_isLeftHand_4(bool value)
	{
		___isLeftHand_4 = value;
	}

	inline static int32_t get_offset_of_lerpEnabled_5() { return static_cast<int32_t>(offsetof(WristUI_tEC6E732BC9C30B8590BDFD489A01F09E2EBBC9EB, ___lerpEnabled_5)); }
	inline bool get_lerpEnabled_5() const { return ___lerpEnabled_5; }
	inline bool* get_address_of_lerpEnabled_5() { return &___lerpEnabled_5; }
	inline void set_lerpEnabled_5(bool value)
	{
		___lerpEnabled_5 = value;
	}

	inline static int32_t get_offset_of_speed_6() { return static_cast<int32_t>(offsetof(WristUI_tEC6E732BC9C30B8590BDFD489A01F09E2EBBC9EB, ___speed_6)); }
	inline float get_speed_6() const { return ___speed_6; }
	inline float* get_address_of_speed_6() { return &___speed_6; }
	inline void set_speed_6(float value)
	{
		___speed_6 = value;
	}

	inline static int32_t get_offset_of_handTransform_7() { return static_cast<int32_t>(offsetof(WristUI_tEC6E732BC9C30B8590BDFD489A01F09E2EBBC9EB, ___handTransform_7)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_handTransform_7() const { return ___handTransform_7; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_handTransform_7() { return &___handTransform_7; }
	inline void set_handTransform_7(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___handTransform_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handTransform_7), (void*)value);
	}

	inline static int32_t get_offset_of_positionOffset_8() { return static_cast<int32_t>(offsetof(WristUI_tEC6E732BC9C30B8590BDFD489A01F09E2EBBC9EB, ___positionOffset_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positionOffset_8() const { return ___positionOffset_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positionOffset_8() { return &___positionOffset_8; }
	inline void set_positionOffset_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positionOffset_8 = value;
	}

	inline static int32_t get_offset_of_rotationOffset_9() { return static_cast<int32_t>(offsetof(WristUI_tEC6E732BC9C30B8590BDFD489A01F09E2EBBC9EB, ___rotationOffset_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rotationOffset_9() const { return ___rotationOffset_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rotationOffset_9() { return &___rotationOffset_9; }
	inline void set_rotationOffset_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rotationOffset_9 = value;
	}

	inline static int32_t get_offset_of__canvas_10() { return static_cast<int32_t>(offsetof(WristUI_tEC6E732BC9C30B8590BDFD489A01F09E2EBBC9EB, ____canvas_10)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get__canvas_10() const { return ____canvas_10; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of__canvas_10() { return &____canvas_10; }
	inline void set__canvas_10(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		____canvas_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____canvas_10), (void*)value);
	}
};


// UnityEngine.UI.BaseMeshEffect
struct BaseMeshEffect_tC7D44B0AC6406BAC3E4FC4579A43FC135BDB6FDA  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.UI.Graphic UnityEngine.UI.BaseMeshEffect::m_Graphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_Graphic_4;

public:
	inline static int32_t get_offset_of_m_Graphic_4() { return static_cast<int32_t>(offsetof(BaseMeshEffect_tC7D44B0AC6406BAC3E4FC4579A43FC135BDB6FDA, ___m_Graphic_4)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_Graphic_4() const { return ___m_Graphic_4; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_Graphic_4() { return &___m_Graphic_4; }
	inline void set_m_Graphic_4(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_Graphic_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Graphic_4), (void*)value);
	}
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// QCHT.Interactions.UI.RoundedCornerEffect
struct RoundedCornerEffect_tD551467CC37C06E357B084EA14FD3DA97444E8C4  : public BaseMeshEffect_tC7D44B0AC6406BAC3E4FC4579A43FC135BDB6FDA
{
public:
	// System.Single QCHT.Interactions.UI.RoundedCornerEffect::_cornerRadius
	float ____cornerRadius_5;

public:
	inline static int32_t get_offset_of__cornerRadius_5() { return static_cast<int32_t>(offsetof(RoundedCornerEffect_tD551467CC37C06E357B084EA14FD3DA97444E8C4, ____cornerRadius_5)); }
	inline float get__cornerRadius_5() const { return ____cornerRadius_5; }
	inline float* get_address_of__cornerRadius_5() { return &____cornerRadius_5; }
	inline void set__cornerRadius_5(float value)
	{
		____cornerRadius_5 = value;
	}
};


// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;

public:
	inline static int32_t get_offset_of_m_Sprite_37() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Sprite_37)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_Sprite_37() const { return ___m_Sprite_37; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_Sprite_37() { return &___m_Sprite_37; }
	inline void set_m_Sprite_37(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_Sprite_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Sprite_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_38() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_OverrideSprite_38)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_OverrideSprite_38() const { return ___m_OverrideSprite_38; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_OverrideSprite_38() { return &___m_OverrideSprite_38; }
	inline void set_m_OverrideSprite_38(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_OverrideSprite_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideSprite_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_39() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Type_39)); }
	inline int32_t get_m_Type_39() const { return ___m_Type_39; }
	inline int32_t* get_address_of_m_Type_39() { return &___m_Type_39; }
	inline void set_m_Type_39(int32_t value)
	{
		___m_Type_39 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_40() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PreserveAspect_40)); }
	inline bool get_m_PreserveAspect_40() const { return ___m_PreserveAspect_40; }
	inline bool* get_address_of_m_PreserveAspect_40() { return &___m_PreserveAspect_40; }
	inline void set_m_PreserveAspect_40(bool value)
	{
		___m_PreserveAspect_40 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_41() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillCenter_41)); }
	inline bool get_m_FillCenter_41() const { return ___m_FillCenter_41; }
	inline bool* get_address_of_m_FillCenter_41() { return &___m_FillCenter_41; }
	inline void set_m_FillCenter_41(bool value)
	{
		___m_FillCenter_41 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_42() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillMethod_42)); }
	inline int32_t get_m_FillMethod_42() const { return ___m_FillMethod_42; }
	inline int32_t* get_address_of_m_FillMethod_42() { return &___m_FillMethod_42; }
	inline void set_m_FillMethod_42(int32_t value)
	{
		___m_FillMethod_42 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_43() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillAmount_43)); }
	inline float get_m_FillAmount_43() const { return ___m_FillAmount_43; }
	inline float* get_address_of_m_FillAmount_43() { return &___m_FillAmount_43; }
	inline void set_m_FillAmount_43(float value)
	{
		___m_FillAmount_43 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_44() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillClockwise_44)); }
	inline bool get_m_FillClockwise_44() const { return ___m_FillClockwise_44; }
	inline bool* get_address_of_m_FillClockwise_44() { return &___m_FillClockwise_44; }
	inline void set_m_FillClockwise_44(bool value)
	{
		___m_FillClockwise_44 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_45() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillOrigin_45)); }
	inline int32_t get_m_FillOrigin_45() const { return ___m_FillOrigin_45; }
	inline int32_t* get_address_of_m_FillOrigin_45() { return &___m_FillOrigin_45; }
	inline void set_m_FillOrigin_45(int32_t value)
	{
		___m_FillOrigin_45 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_46() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_AlphaHitTestMinimumThreshold_46)); }
	inline float get_m_AlphaHitTestMinimumThreshold_46() const { return ___m_AlphaHitTestMinimumThreshold_46; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_46() { return &___m_AlphaHitTestMinimumThreshold_46; }
	inline void set_m_AlphaHitTestMinimumThreshold_46(float value)
	{
		___m_AlphaHitTestMinimumThreshold_46 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_47() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Tracked_47)); }
	inline bool get_m_Tracked_47() const { return ___m_Tracked_47; }
	inline bool* get_address_of_m_Tracked_47() { return &___m_Tracked_47; }
	inline void set_m_Tracked_47(bool value)
	{
		___m_Tracked_47 = value;
	}

	inline static int32_t get_offset_of_m_UseSpriteMesh_48() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_UseSpriteMesh_48)); }
	inline bool get_m_UseSpriteMesh_48() const { return ___m_UseSpriteMesh_48; }
	inline bool* get_address_of_m_UseSpriteMesh_48() { return &___m_UseSpriteMesh_48; }
	inline void set_m_UseSpriteMesh_48(bool value)
	{
		___m_UseSpriteMesh_48 = value;
	}

	inline static int32_t get_offset_of_m_PixelsPerUnitMultiplier_49() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PixelsPerUnitMultiplier_49)); }
	inline float get_m_PixelsPerUnitMultiplier_49() const { return ___m_PixelsPerUnitMultiplier_49; }
	inline float* get_address_of_m_PixelsPerUnitMultiplier_49() { return &___m_PixelsPerUnitMultiplier_49; }
	inline void set_m_PixelsPerUnitMultiplier_49(float value)
	{
		___m_PixelsPerUnitMultiplier_49 = value;
	}

	inline static int32_t get_offset_of_m_CachedReferencePixelsPerUnit_50() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_CachedReferencePixelsPerUnit_50)); }
	inline float get_m_CachedReferencePixelsPerUnit_50() const { return ___m_CachedReferencePixelsPerUnit_50; }
	inline float* get_address_of_m_CachedReferencePixelsPerUnit_50() { return &___m_CachedReferencePixelsPerUnit_50; }
	inline void set_m_CachedReferencePixelsPerUnit_50(float value)
	{
		___m_CachedReferencePixelsPerUnit_50 = value;
	}
};

struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_t815A476B0A21E183042059E705F9E505478CD8AE * ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_36() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_ETC1DefaultUI_36)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_ETC1DefaultUI_36() const { return ___s_ETC1DefaultUI_36; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_ETC1DefaultUI_36() { return &___s_ETC1DefaultUI_36; }
	inline void set_s_ETC1DefaultUI_36(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_ETC1DefaultUI_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ETC1DefaultUI_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertScratch_51() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_VertScratch_51)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_VertScratch_51() const { return ___s_VertScratch_51; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_VertScratch_51() { return &___s_VertScratch_51; }
	inline void set_s_VertScratch_51(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_VertScratch_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertScratch_51), (void*)value);
	}

	inline static int32_t get_offset_of_s_UVScratch_52() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_UVScratch_52)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_UVScratch_52() const { return ___s_UVScratch_52; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_UVScratch_52() { return &___s_UVScratch_52; }
	inline void set_s_UVScratch_52(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_UVScratch_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UVScratch_52), (void*)value);
	}

	inline static int32_t get_offset_of_s_Xy_53() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Xy_53)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Xy_53() const { return ___s_Xy_53; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Xy_53() { return &___s_Xy_53; }
	inline void set_s_Xy_53(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Xy_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Xy_53), (void*)value);
	}

	inline static int32_t get_offset_of_s_Uv_54() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Uv_54)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Uv_54() const { return ___s_Uv_54; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Uv_54() { return &___s_Uv_54; }
	inline void set_s_Uv_54(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Uv_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Uv_54), (void*)value);
	}

	inline static int32_t get_offset_of_m_TrackedTexturelessImages_55() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___m_TrackedTexturelessImages_55)); }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE * get_m_TrackedTexturelessImages_55() const { return ___m_TrackedTexturelessImages_55; }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE ** get_address_of_m_TrackedTexturelessImages_55() { return &___m_TrackedTexturelessImages_55; }
	inline void set_m_TrackedTexturelessImages_55(List_1_t815A476B0A21E183042059E705F9E505478CD8AE * value)
	{
		___m_TrackedTexturelessImages_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackedTexturelessImages_55), (void*)value);
	}

	inline static int32_t get_offset_of_s_Initialized_56() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Initialized_56)); }
	inline bool get_s_Initialized_56() const { return ___s_Initialized_56; }
	inline bool* get_address_of_s_Initialized_56() { return &___s_Initialized_56; }
	inline void set_s_Initialized_56(bool value)
	{
		___s_Initialized_56 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);

// System.Void QCHT.Interactions.Distal.QCHTRayData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QCHTRayData__ctor_m279154630332D51B1D329C5A923AFA152AE11AC6 (QCHTRayData_t6D8A90910944C548F2DB455933847AE925E491B1 * __this, const RuntimeMethod* method);
// QCHT.Interactions.Distal.QCHTRayData QCHT.Interactions.Distal.QCHTRayData::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR QCHTRayData_t6D8A90910944C548F2DB455933847AE925E491B1 * QCHTRayData_get_Instance_m0C5A20DD24AF1B377608BCAF7B4168DBB456BD0B (const RuntimeMethod* method);
// QCHT.Interactions.Distal.QCHTRayVisualData QCHT.Interactions.Distal.QCHTRayData::GetRayData(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR QCHTRayVisualData_t73A3B95C6C277054C2514DC8BFC58F567B4A0471  QCHTRayData_GetRayData_mCF50ABCA5E439C64A01F25D531FF33BFF7C9797C (bool ___isLeftHand0, const RuntimeMethod* method);
// System.Void QCHT.Interactions.Distal.QCHTRayData::SaveRayData(QCHT.Interactions.Distal.QCHTRayVisualData,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QCHTRayData_SaveRayData_m5EB3DE54DDC190B2F11C6019AFDDEE0BBD01452D (QCHTRayVisualData_t73A3B95C6C277054C2514DC8BFC58F567B4A0471  ___data0, bool ___isLeftHand1, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// System.Void QCHT.Interactions.Distal.QCHTRayVisualData::.ctor(QCHT.Interactions.Distal.RAY_STATE,UnityEngine.Sprite,System.Nullable`1<UnityEngine.Color>,System.Nullable`1<UnityEngine.Color>,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QCHTRayVisualData__ctor_m72619E8303433858B7BC9B4740762D0CDE6C167B (QCHTRayVisualData_t73A3B95C6C277054C2514DC8BFC58F567B4A0471 * __this, int32_t ___state0, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___reticleImage1, Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  ___reticleColor2, Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  ___rayColor3, float ___scaleFactor4, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.Rect UnityEngine.RectTransform::get_rect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UI.VertexHelper::PopulateUIVertex(UnityEngine.UIVertex&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexHelper_PopulateUIVertex_m540F0A80C1A55C7444259CEE118CAC61F198B555 (VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * __this, UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A * ___vertex0, int32_t ___i1, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// UnityEngine.Vector4 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  Vector4_op_Implicit_mFFF2D39354FC98FDEDA761EDB4326E4F11B87504 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.VertexHelper::SetUIVertex(UnityEngine.UIVertex,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexHelper_SetUIVertex_mE6E1BF09DA31C90FA922B6F96123D7C363A71D7E (VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * __this, UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  ___vertex0, int32_t ___i1, const RuntimeMethod* method);
// System.Int32 UnityEngine.UI.VertexHelper::get_currentVertCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VertexHelper_get_currentVertCount_m4E9932F9BBCC9CB9636B3415A03454D6B7A92807 (VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UI.BaseMeshEffect::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseMeshEffect__ctor_m7D21D47A3B87CB9B715FCEEE1B955E417FEEF01B (BaseMeshEffect_tC7D44B0AC6406BAC3E4FC4579A43FC135BDB6FDA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Joint::get_axis()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Joint_get_axis_m25563623D5B69D4CDABAF3C0687277345D9DBEE6 (Joint_t085126F36196FC982700F4EA8466CF10C90EC15E * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.ConfigurableJoint::get_secondaryAxis()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ConfigurableJoint_get_secondaryAxis_m3E8AA90FC240E88295D370AC5A80BD6DA44C694C (ConfigurableJoint_t9F5E94B6088C703833B586A6B71D707A855E99BD * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Cross(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Cross_m63414F0C545EBB616F339FF8830D37F9230736A4 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_LookRotation_m8A7DB5BDBC361586191AB67ACF857F46160EE3F1 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forward0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upwards1, const RuntimeMethod* method);
// System.Boolean UnityEngine.ConfigurableJoint::get_configuredInWorldSpace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConfigurableJoint_get_configuredInWorldSpace_mC677E6A831C791A697AA4D869C5C415A568D688D (ConfigurableJoint_t9F5E94B6088C703833B586A6B71D707A855E99BD * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___lhs0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rhs1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804 (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetTextureOffset(System.Int32,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetTextureOffset_mDEE0C861BD2FC8D38924087590BE8FD123195A78 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, int32_t ___nameID0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828 (const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Shader::PropertyToID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F (String_t* ___name0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Canvas>()
inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * Component_GetComponent_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_mD63281542675697ADC038B664E30F73F6BC1F1D1 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void QCHT.Interactions.UI.WristUI::Hide()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WristUI_Hide_m4387789F506268BF47BE464376B5943694B664A1 (WristUI_tEC6E732BC9C30B8590BDFD489A01F09E2EBBC9EB * __this, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_localToWorldMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  Transform_get_localToWorldMatrix_m6B810B0F20BA5DE48009461A4D662DD8BFF6A3CC (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector4 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  Vector4_op_Implicit_mDCFA56E9D34979E1E2BFE6C2D61F1768D934A8EB (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// UnityEngine.Vector4 UnityEngine.Matrix4x4::op_Multiply(UnityEngine.Matrix4x4,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  Matrix4x4_op_Multiply_m6967C4B4CC9F36FE461F5420DF7175B4201E2585 (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___lhs0, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___vector1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector4_op_Implicit_m5811604E04B684BE3F1A212A7FA46767619AB35B (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___v0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Euler_m887ABE4F4DD563351E9874D63922C2F53969BBAB (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___euler0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Renderer::GetPropertyBlock(UnityEngine.MaterialPropertyBlock)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_GetPropertyBlock_mE73E51E42ED4F800C6422F5461A4D9E1DB61AEDC (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * ___properties0, const RuntimeMethod* method);
// System.Single UnityEngine.MaterialPropertyBlock::GetFloat(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MaterialPropertyBlock_GetFloat_m20C2147E16CA3B7050DF4EB97448A11DC8D85DCC (MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * __this, int32_t ___nameID0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616 (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method);
// System.Void QCHT.Interactions.Hands.HandPresenter::SetMainHandAlpha(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPresenter_SetMainHandAlpha_m6D3BCE7F7E745A0150292DC1158E32B5D1141655 (HandPresenter_t458E7A35002C8A2B559BAD19C2D90315B19D4CE1 * __this, float ___alpha0, const RuntimeMethod* method);
// System.Void QCHT.Interactions.Hands.HandPresenter::SetGhostHandAlpha(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPresenter_SetGhostHandAlpha_m26161F7DC1A9CDF371F880DE98B67BF395FD8D5F (HandPresenter_t458E7A35002C8A2B559BAD19C2D90315B19D4CE1 * __this, float ___alpha0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void QCHT.Interactions.Proximal.Interactable/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m6330AD989E09FD704AA64478E3B6252B984726EB (U3CU3Ec_tA4A3D08DDDC65D19DA0B336AC350D78183B74C18 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Collider::get_isTrigger()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Collider_get_isTrigger_m3A9C990365C94B7125DB5993D782D3D0FE876A60 (Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * __this, const RuntimeMethod* method);
// QCHT.Core.HandType QCHT.Interactions.Hands.HandPose::get_Type()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HandPose_get_Type_m434CA479946DA973925899508CB0509D8419B89D_inline (HandPose_t1A858C5CA696FC6C8D13153595E8B089E8F9EDAA * __this, const RuntimeMethod* method);
// System.Void QCHT.Interactions.Distal.QCHTGraphicRaycaster/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mFA573B9BBFD3FE34F8EC8BF863490496B46EA995 (U3CU3Ec_tC87347C03AE5138C26F5C55656723B5D0D46E0EF * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.UI.Graphic::get_depth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Graphic_get_depth_m8AF43A1523D90A3A42A812835D516940E320CD17 (Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * __this, const RuntimeMethod* method);
// System.Int32 System.Int32::CompareTo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_CompareTo_m2DD1093B956B4D96C3AC3C27FDEE3CA447B044D3 (int32_t* __this, int32_t ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.RaycastHit::get_distance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RaycastHit_get_distance_m85FCA98D7957C3BF1D449CA1B48C116CCD6226FA (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * __this, const RuntimeMethod* method);
// System.Int32 System.Single::CompareTo(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Single_CompareTo_m80B5B5A70A2343C3A8673F35635EBED4458109B4 (float* __this, float ___value0, const RuntimeMethod* method);
// System.Void QCHT.Interactions.Distal.QCHTPhysicsRaycaster/RaycastHitComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RaycastHitComparer__ctor_m7CFEDFB5D2C7A7D410D15508FA5275699F555F67 (RaycastHitComparer_tF9774B3AE8F020A2190700CAFFF3D4A2B626A0F0 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C (float ___value0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// QCHT.Interactions.Distal.QCHTRayData QCHT.Interactions.Distal.QCHTRayData::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR QCHTRayData_t6D8A90910944C548F2DB455933847AE925E491B1 * QCHTRayData_get_Instance_m0C5A20DD24AF1B377608BCAF7B4168DBB456BD0B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QCHTRayData_t6D8A90910944C548F2DB455933847AE925E491B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	QCHTRayData_t6D8A90910944C548F2DB455933847AE925E491B1 * G_B2_0 = NULL;
	QCHTRayData_t6D8A90910944C548F2DB455933847AE925E491B1 * G_B1_0 = NULL;
	{
		// private static QCHTRayData Instance => s_instance ??= new QCHTRayData();
		QCHTRayData_t6D8A90910944C548F2DB455933847AE925E491B1 * L_0 = ((QCHTRayData_t6D8A90910944C548F2DB455933847AE925E491B1_StaticFields*)il2cpp_codegen_static_fields_for(QCHTRayData_t6D8A90910944C548F2DB455933847AE925E491B1_il2cpp_TypeInfo_var))->get_s_instance_2();
		QCHTRayData_t6D8A90910944C548F2DB455933847AE925E491B1 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0014;
		}
	}
	{
		QCHTRayData_t6D8A90910944C548F2DB455933847AE925E491B1 * L_2 = (QCHTRayData_t6D8A90910944C548F2DB455933847AE925E491B1 *)il2cpp_codegen_object_new(QCHTRayData_t6D8A90910944C548F2DB455933847AE925E491B1_il2cpp_TypeInfo_var);
		QCHTRayData__ctor_m279154630332D51B1D329C5A923AFA152AE11AC6(L_2, /*hidden argument*/NULL);
		QCHTRayData_t6D8A90910944C548F2DB455933847AE925E491B1 * L_3 = L_2;
		((QCHTRayData_t6D8A90910944C548F2DB455933847AE925E491B1_StaticFields*)il2cpp_codegen_static_fields_for(QCHTRayData_t6D8A90910944C548F2DB455933847AE925E491B1_il2cpp_TypeInfo_var))->set_s_instance_2(L_3);
		G_B2_0 = L_3;
	}

IL_0014:
	{
		return G_B2_0;
	}
}
// System.Void QCHT.Interactions.Distal.QCHTRayData::SaveRayData(QCHT.Interactions.Distal.QCHTRayVisualData,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QCHTRayData_SaveRayData_m5EB3DE54DDC190B2F11C6019AFDDEE0BBD01452D (QCHTRayVisualData_t73A3B95C6C277054C2514DC8BFC58F567B4A0471  ___data0, bool ___isLeftHand1, const RuntimeMethod* method)
{
	{
		// if (isLeftHand) Instance._leftRayData = data;
		bool L_0 = ___isLeftHand1;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// if (isLeftHand) Instance._leftRayData = data;
		QCHTRayData_t6D8A90910944C548F2DB455933847AE925E491B1 * L_1;
		L_1 = QCHTRayData_get_Instance_m0C5A20DD24AF1B377608BCAF7B4168DBB456BD0B(/*hidden argument*/NULL);
		QCHTRayVisualData_t73A3B95C6C277054C2514DC8BFC58F567B4A0471  L_2 = ___data0;
		NullCheck(L_1);
		L_1->set__leftRayData_0(L_2);
		return;
	}

IL_000f:
	{
		// else Instance._rightRayData = data;
		QCHTRayData_t6D8A90910944C548F2DB455933847AE925E491B1 * L_3;
		L_3 = QCHTRayData_get_Instance_m0C5A20DD24AF1B377608BCAF7B4168DBB456BD0B(/*hidden argument*/NULL);
		QCHTRayVisualData_t73A3B95C6C277054C2514DC8BFC58F567B4A0471  L_4 = ___data0;
		NullCheck(L_3);
		L_3->set__rightRayData_1(L_4);
		// }
		return;
	}
}
// QCHT.Interactions.Distal.QCHTRayVisualData QCHT.Interactions.Distal.QCHTRayData::GetRayData(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR QCHTRayVisualData_t73A3B95C6C277054C2514DC8BFC58F567B4A0471  QCHTRayData_GetRayData_mCF50ABCA5E439C64A01F25D531FF33BFF7C9797C (bool ___isLeftHand0, const RuntimeMethod* method)
{
	{
		// return isLeftHand ? Instance._leftRayData : Instance._rightRayData;
		bool L_0 = ___isLeftHand0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		QCHTRayData_t6D8A90910944C548F2DB455933847AE925E491B1 * L_1;
		L_1 = QCHTRayData_get_Instance_m0C5A20DD24AF1B377608BCAF7B4168DBB456BD0B(/*hidden argument*/NULL);
		NullCheck(L_1);
		QCHTRayVisualData_t73A3B95C6C277054C2514DC8BFC58F567B4A0471  L_2 = L_1->get__rightRayData_1();
		return L_2;
	}

IL_000e:
	{
		QCHTRayData_t6D8A90910944C548F2DB455933847AE925E491B1 * L_3;
		L_3 = QCHTRayData_get_Instance_m0C5A20DD24AF1B377608BCAF7B4168DBB456BD0B(/*hidden argument*/NULL);
		NullCheck(L_3);
		QCHTRayVisualData_t73A3B95C6C277054C2514DC8BFC58F567B4A0471  L_4 = L_3->get__leftRayData_0();
		return L_4;
	}
}
// System.Void QCHT.Interactions.Distal.QCHTRayData::SetState(System.Boolean,QCHT.Interactions.Distal.RAY_STATE)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QCHTRayData_SetState_m9D1766A8324E955C6A5C3B27AF6B9889B884D72E (bool ___isLeftHand0, int32_t ___state1, const RuntimeMethod* method)
{
	QCHTRayVisualData_t73A3B95C6C277054C2514DC8BFC58F567B4A0471  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var data = GetRayData(isLeftHand);
		bool L_0 = ___isLeftHand0;
		QCHTRayVisualData_t73A3B95C6C277054C2514DC8BFC58F567B4A0471  L_1;
		L_1 = QCHTRayData_GetRayData_mCF50ABCA5E439C64A01F25D531FF33BFF7C9797C(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// data.State = state;
		int32_t L_2 = ___state1;
		(&V_0)->set_State_0(L_2);
		// SaveRayData(data, isLeftHand);
		QCHTRayVisualData_t73A3B95C6C277054C2514DC8BFC58F567B4A0471  L_3 = V_0;
		bool L_4 = ___isLeftHand0;
		QCHTRayData_SaveRayData_m5EB3DE54DDC190B2F11C6019AFDDEE0BBD01452D(L_3, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void QCHT.Interactions.Distal.QCHTRayData::AddState(System.Boolean,QCHT.Interactions.Distal.RAY_STATE)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QCHTRayData_AddState_m35FB885CC68AAB9BA34C974C920EA5179BA56FB0 (bool ___isLeftHand0, int32_t ___state1, const RuntimeMethod* method)
{
	QCHTRayVisualData_t73A3B95C6C277054C2514DC8BFC58F567B4A0471  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var data = GetRayData(isLeftHand);
		bool L_0 = ___isLeftHand0;
		QCHTRayVisualData_t73A3B95C6C277054C2514DC8BFC58F567B4A0471  L_1;
		L_1 = QCHTRayData_GetRayData_mCF50ABCA5E439C64A01F25D531FF33BFF7C9797C(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// data.State |= state;
		int32_t* L_2 = (&V_0)->get_address_of_State_0();
		int32_t* L_3 = L_2;
		int32_t L_4 = *((int32_t*)L_3);
		int32_t L_5 = ___state1;
		*((int32_t*)L_3) = (int32_t)((int32_t)((int32_t)L_4|(int32_t)L_5));
		// SaveRayData(data, isLeftHand);
		QCHTRayVisualData_t73A3B95C6C277054C2514DC8BFC58F567B4A0471  L_6 = V_0;
		bool L_7 = ___isLeftHand0;
		QCHTRayData_SaveRayData_m5EB3DE54DDC190B2F11C6019AFDDEE0BBD01452D(L_6, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void QCHT.Interactions.Distal.QCHTRayData::RemoveState(System.Boolean,QCHT.Interactions.Distal.RAY_STATE)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QCHTRayData_RemoveState_m8CA8F3BCCFD62B3366FE43229B773C242F8B496E (bool ___isLeftHand0, int32_t ___state1, const RuntimeMethod* method)
{
	QCHTRayVisualData_t73A3B95C6C277054C2514DC8BFC58F567B4A0471  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var data = GetRayData(isLeftHand);
		bool L_0 = ___isLeftHand0;
		QCHTRayVisualData_t73A3B95C6C277054C2514DC8BFC58F567B4A0471  L_1;
		L_1 = QCHTRayData_GetRayData_mCF50ABCA5E439C64A01F25D531FF33BFF7C9797C(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// data.State &= ~state;
		int32_t* L_2 = (&V_0)->get_address_of_State_0();
		int32_t* L_3 = L_2;
		int32_t L_4 = *((int32_t*)L_3);
		int32_t L_5 = ___state1;
		*((int32_t*)L_3) = (int32_t)((int32_t)((int32_t)L_4&(int32_t)((~L_5))));
		// SaveRayData(data, isLeftHand);
		QCHTRayVisualData_t73A3B95C6C277054C2514DC8BFC58F567B4A0471  L_6 = V_0;
		bool L_7 = ___isLeftHand0;
		QCHTRayData_SaveRayData_m5EB3DE54DDC190B2F11C6019AFDDEE0BBD01452D(L_6, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// QCHT.Interactions.Distal.RAY_STATE QCHT.Interactions.Distal.QCHTRayData::GetState(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t QCHTRayData_GetState_m305DEB10482869775E5179A63D7FDD3C56210EF0 (bool ___isLeftHand0, const RuntimeMethod* method)
{
	{
		// return GetRayData(isLeftHand).State;
		bool L_0 = ___isLeftHand0;
		QCHTRayVisualData_t73A3B95C6C277054C2514DC8BFC58F567B4A0471  L_1;
		L_1 = QCHTRayData_GetRayData_mCF50ABCA5E439C64A01F25D531FF33BFF7C9797C(L_0, /*hidden argument*/NULL);
		int32_t L_2 = L_1.get_State_0();
		return L_2;
	}
}
// System.Void QCHT.Interactions.Distal.QCHTRayData::SetStartPoint(System.Boolean,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QCHTRayData_SetStartPoint_mC29C4A834225B08D8A7FEDEC4116526A40D92601 (bool ___isLeftHand0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___startPoint1, const RuntimeMethod* method)
{
	QCHTRayVisualData_t73A3B95C6C277054C2514DC8BFC58F567B4A0471  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var data = GetRayData(isLeftHand);
		bool L_0 = ___isLeftHand0;
		QCHTRayVisualData_t73A3B95C6C277054C2514DC8BFC58F567B4A0471  L_1;
		L_1 = QCHTRayData_GetRayData_mCF50ABCA5E439C64A01F25D531FF33BFF7C9797C(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// data.StartPoint = startPoint;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___startPoint1;
		(&V_0)->set_StartPoint_1(L_2);
		// SaveRayData(data, isLeftHand);
		QCHTRayVisualData_t73A3B95C6C277054C2514DC8BFC58F567B4A0471  L_3 = V_0;
		bool L_4 = ___isLeftHand0;
		QCHTRayData_SaveRayData_m5EB3DE54DDC190B2F11C6019AFDDEE0BBD01452D(L_3, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void QCHT.Interactions.Distal.QCHTRayData::SetEndPoint(System.Boolean,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QCHTRayData_SetEndPoint_mE50B1DC85D651DF8F055B282C41DD7F97008852A (bool ___isLeftHand0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___endPoint1, const RuntimeMethod* method)
{
	QCHTRayVisualData_t73A3B95C6C277054C2514DC8BFC58F567B4A0471  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var data = GetRayData(isLeftHand);
		bool L_0 = ___isLeftHand0;
		QCHTRayVisualData_t73A3B95C6C277054C2514DC8BFC58F567B4A0471  L_1;
		L_1 = QCHTRayData_GetRayData_mCF50ABCA5E439C64A01F25D531FF33BFF7C9797C(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// data.EndPoint = endPoint;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___endPoint1;
		(&V_0)->set_EndPoint_2(L_2);
		// SaveRayData(data, isLeftHand);
		QCHTRayVisualData_t73A3B95C6C277054C2514DC8BFC58F567B4A0471  L_3 = V_0;
		bool L_4 = ___isLeftHand0;
		QCHTRayData_SaveRayData_m5EB3DE54DDC190B2F11C6019AFDDEE0BBD01452D(L_3, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void QCHT.Interactions.Distal.QCHTRayData::SetReticleImage(System.Boolean,UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QCHTRayData_SetReticleImage_mDBC2BC12195BEE2CFB4E13886EB36F9B077A4090 (bool ___isLeftHand0, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___reticleImage1, const RuntimeMethod* method)
{
	QCHTRayVisualData_t73A3B95C6C277054C2514DC8BFC58F567B4A0471  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var data = GetRayData(isLeftHand);
		bool L_0 = ___isLeftHand0;
		QCHTRayVisualData_t73A3B95C6C277054C2514DC8BFC58F567B4A0471  L_1;
		L_1 = QCHTRayData_GetRayData_mCF50ABCA5E439C64A01F25D531FF33BFF7C9797C(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// data.ReticleImage = reticleImage;
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_2 = ___reticleImage1;
		(&V_0)->set_ReticleImage_3(L_2);
		// SaveRayData(data, isLeftHand);
		QCHTRayVisualData_t73A3B95C6C277054C2514DC8BFC58F567B4A0471  L_3 = V_0;
		bool L_4 = ___isLeftHand0;
		QCHTRayData_SaveRayData_m5EB3DE54DDC190B2F11C6019AFDDEE0BBD01452D(L_3, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void QCHT.Interactions.Distal.QCHTRayData::SetReticleScaleFactor(System.Boolean,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QCHTRayData_SetReticleScaleFactor_m709F2BDDCCE2BFA67BDA55670EF2D656BAC6277B (bool ___isLeftHand0, float ___scale1, const RuntimeMethod* method)
{
	QCHTRayVisualData_t73A3B95C6C277054C2514DC8BFC58F567B4A0471  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var data = GetRayData(isLeftHand);
		bool L_0 = ___isLeftHand0;
		QCHTRayVisualData_t73A3B95C6C277054C2514DC8BFC58F567B4A0471  L_1;
		L_1 = QCHTRayData_GetRayData_mCF50ABCA5E439C64A01F25D531FF33BFF7C9797C(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// data.ReticleScaleFactor = scale;
		float L_2 = ___scale1;
		(&V_0)->set_ReticleScaleFactor_4(L_2);
		// SaveRayData(data, isLeftHand);
		QCHTRayVisualData_t73A3B95C6C277054C2514DC8BFC58F567B4A0471  L_3 = V_0;
		bool L_4 = ___isLeftHand0;
		QCHTRayData_SaveRayData_m5EB3DE54DDC190B2F11C6019AFDDEE0BBD01452D(L_3, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void QCHT.Interactions.Distal.QCHTRayData::SetReticleColor(System.Boolean,System.Nullable`1<UnityEngine.Color>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QCHTRayData_SetReticleColor_m65263C07FA681A59ED33F1BDA571CE0FD2752A13 (bool ___isLeftHand0, Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  ___reticleColor1, const RuntimeMethod* method)
{
	QCHTRayVisualData_t73A3B95C6C277054C2514DC8BFC58F567B4A0471  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var data = GetRayData(isLeftHand);
		bool L_0 = ___isLeftHand0;
		QCHTRayVisualData_t73A3B95C6C277054C2514DC8BFC58F567B4A0471  L_1;
		L_1 = QCHTRayData_GetRayData_mCF50ABCA5E439C64A01F25D531FF33BFF7C9797C(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// data.ReticleColor = reticleColor;
		Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  L_2 = ___reticleColor1;
		(&V_0)->set_ReticleColor_5(L_2);
		// SaveRayData(data, isLeftHand);
		QCHTRayVisualData_t73A3B95C6C277054C2514DC8BFC58F567B4A0471  L_3 = V_0;
		bool L_4 = ___isLeftHand0;
		QCHTRayData_SaveRayData_m5EB3DE54DDC190B2F11C6019AFDDEE0BBD01452D(L_3, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void QCHT.Interactions.Distal.QCHTRayData::SetRayColor(System.Boolean,System.Nullable`1<UnityEngine.Color>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QCHTRayData_SetRayColor_m72F2AC1887D961C1DB0309BFC21B885E876D459C (bool ___isLeftHand0, Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  ___rayColor1, const RuntimeMethod* method)
{
	QCHTRayVisualData_t73A3B95C6C277054C2514DC8BFC58F567B4A0471  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var data = GetRayData(isLeftHand);
		bool L_0 = ___isLeftHand0;
		QCHTRayVisualData_t73A3B95C6C277054C2514DC8BFC58F567B4A0471  L_1;
		L_1 = QCHTRayData_GetRayData_mCF50ABCA5E439C64A01F25D531FF33BFF7C9797C(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// data.RayColor = rayColor;
		Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  L_2 = ___rayColor1;
		(&V_0)->set_RayColor_6(L_2);
		// SaveRayData(data, isLeftHand);
		QCHTRayVisualData_t73A3B95C6C277054C2514DC8BFC58F567B4A0471  L_3 = V_0;
		bool L_4 = ___isLeftHand0;
		QCHTRayData_SaveRayData_m5EB3DE54DDC190B2F11C6019AFDDEE0BBD01452D(L_3, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void QCHT.Interactions.Distal.QCHTRayData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QCHTRayData__ctor_m279154630332D51B1D329C5A923AFA152AE11AC6 (QCHTRayData_t6D8A90910944C548F2DB455933847AE925E491B1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QCHTRayVisualData_t73A3B95C6C277054C2514DC8BFC58F567B4A0471_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private QCHTRayVisualData _leftRayData = QCHTRayVisualData.Default;
		IL2CPP_RUNTIME_CLASS_INIT(QCHTRayVisualData_t73A3B95C6C277054C2514DC8BFC58F567B4A0471_il2cpp_TypeInfo_var);
		QCHTRayVisualData_t73A3B95C6C277054C2514DC8BFC58F567B4A0471  L_0 = ((QCHTRayVisualData_t73A3B95C6C277054C2514DC8BFC58F567B4A0471_StaticFields*)il2cpp_codegen_static_fields_for(QCHTRayVisualData_t73A3B95C6C277054C2514DC8BFC58F567B4A0471_il2cpp_TypeInfo_var))->get_Default_7();
		__this->set__leftRayData_0(L_0);
		// private QCHTRayVisualData _rightRayData = QCHTRayVisualData.Default;
		QCHTRayVisualData_t73A3B95C6C277054C2514DC8BFC58F567B4A0471  L_1 = ((QCHTRayVisualData_t73A3B95C6C277054C2514DC8BFC58F567B4A0471_StaticFields*)il2cpp_codegen_static_fields_for(QCHTRayVisualData_t73A3B95C6C277054C2514DC8BFC58F567B4A0471_il2cpp_TypeInfo_var))->get_Default_7();
		__this->set__rightRayData_1(L_1);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// Conversion methods for marshalling of: QCHT.Interactions.Distal.QCHTRayVisualData
IL2CPP_EXTERN_C void QCHTRayVisualData_t73A3B95C6C277054C2514DC8BFC58F567B4A0471_marshal_pinvoke(const QCHTRayVisualData_t73A3B95C6C277054C2514DC8BFC58F567B4A0471& unmarshaled, QCHTRayVisualData_t73A3B95C6C277054C2514DC8BFC58F567B4A0471_marshaled_pinvoke& marshaled)
{
	Exception_t* ___ReticleImage_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'ReticleImage' of type 'QCHTRayVisualData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___ReticleImage_3Exception, NULL);
}
IL2CPP_EXTERN_C void QCHTRayVisualData_t73A3B95C6C277054C2514DC8BFC58F567B4A0471_marshal_pinvoke_back(const QCHTRayVisualData_t73A3B95C6C277054C2514DC8BFC58F567B4A0471_marshaled_pinvoke& marshaled, QCHTRayVisualData_t73A3B95C6C277054C2514DC8BFC58F567B4A0471& unmarshaled)
{
	Exception_t* ___ReticleImage_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'ReticleImage' of type 'QCHTRayVisualData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___ReticleImage_3Exception, NULL);
}
// Conversion method for clean up from marshalling of: QCHT.Interactions.Distal.QCHTRayVisualData
IL2CPP_EXTERN_C void QCHTRayVisualData_t73A3B95C6C277054C2514DC8BFC58F567B4A0471_marshal_pinvoke_cleanup(QCHTRayVisualData_t73A3B95C6C277054C2514DC8BFC58F567B4A0471_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: QCHT.Interactions.Distal.QCHTRayVisualData
IL2CPP_EXTERN_C void QCHTRayVisualData_t73A3B95C6C277054C2514DC8BFC58F567B4A0471_marshal_com(const QCHTRayVisualData_t73A3B95C6C277054C2514DC8BFC58F567B4A0471& unmarshaled, QCHTRayVisualData_t73A3B95C6C277054C2514DC8BFC58F567B4A0471_marshaled_com& marshaled)
{
	Exception_t* ___ReticleImage_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'ReticleImage' of type 'QCHTRayVisualData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___ReticleImage_3Exception, NULL);
}
IL2CPP_EXTERN_C void QCHTRayVisualData_t73A3B95C6C277054C2514DC8BFC58F567B4A0471_marshal_com_back(const QCHTRayVisualData_t73A3B95C6C277054C2514DC8BFC58F567B4A0471_marshaled_com& marshaled, QCHTRayVisualData_t73A3B95C6C277054C2514DC8BFC58F567B4A0471& unmarshaled)
{
	Exception_t* ___ReticleImage_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'ReticleImage' of type 'QCHTRayVisualData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___ReticleImage_3Exception, NULL);
}
// Conversion method for clean up from marshalling of: QCHT.Interactions.Distal.QCHTRayVisualData
IL2CPP_EXTERN_C void QCHTRayVisualData_t73A3B95C6C277054C2514DC8BFC58F567B4A0471_marshal_com_cleanup(QCHTRayVisualData_t73A3B95C6C277054C2514DC8BFC58F567B4A0471_marshaled_com& marshaled)
{
}
// System.Void QCHT.Interactions.Distal.QCHTRayVisualData::.ctor(QCHT.Interactions.Distal.RAY_STATE,UnityEngine.Sprite,System.Nullable`1<UnityEngine.Color>,System.Nullable`1<UnityEngine.Color>,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QCHTRayVisualData__ctor_m72619E8303433858B7BC9B4740762D0CDE6C167B (QCHTRayVisualData_t73A3B95C6C277054C2514DC8BFC58F567B4A0471 * __this, int32_t ___state0, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___reticleImage1, Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  ___reticleColor2, Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  ___rayColor3, float ___scaleFactor4, const RuntimeMethod* method)
{
	{
		// State = state;
		int32_t L_0 = ___state0;
		__this->set_State_0(L_0);
		// StartPoint = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		__this->set_StartPoint_1(L_1);
		// EndPoint = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		__this->set_EndPoint_2(L_2);
		// ReticleImage = reticleImage;
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_3 = ___reticleImage1;
		__this->set_ReticleImage_3(L_3);
		// ReticleColor = reticleColor;
		Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  L_4 = ___reticleColor2;
		__this->set_ReticleColor_5(L_4);
		// RayColor = rayColor;
		Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  L_5 = ___rayColor3;
		__this->set_RayColor_6(L_5);
		// ReticleScaleFactor = scaleFactor;
		float L_6 = ___scaleFactor4;
		__this->set_ReticleScaleFactor_4(L_6);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void QCHTRayVisualData__ctor_m72619E8303433858B7BC9B4740762D0CDE6C167B_AdjustorThunk (RuntimeObject * __this, int32_t ___state0, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___reticleImage1, Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  ___reticleColor2, Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  ___rayColor3, float ___scaleFactor4, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	QCHTRayVisualData_t73A3B95C6C277054C2514DC8BFC58F567B4A0471 * _thisAdjusted = reinterpret_cast<QCHTRayVisualData_t73A3B95C6C277054C2514DC8BFC58F567B4A0471 *>(__this + _offset);
	QCHTRayVisualData__ctor_m72619E8303433858B7BC9B4740762D0CDE6C167B(_thisAdjusted, ___state0, ___reticleImage1, ___reticleColor2, ___rayColor3, ___scaleFactor4, method);
}
// System.Void QCHT.Interactions.Distal.QCHTRayVisualData::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QCHTRayVisualData__cctor_m4B6A31E179F2B04C9F51561342D96193D6DDD87E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QCHTRayVisualData_t73A3B95C6C277054C2514DC8BFC58F567B4A0471_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public static QCHTRayVisualData Default = new QCHTRayVisualData(RAY_STATE.RAY_STATE_NONE, null, null, null);
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498 ));
		Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  L_0 = V_0;
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498 ));
		Nullable_1_tA06400BA484934D9CEBAF66D0E71C822EF09A498  L_1 = V_0;
		QCHTRayVisualData_t73A3B95C6C277054C2514DC8BFC58F567B4A0471  L_2;
		memset((&L_2), 0, sizeof(L_2));
		QCHTRayVisualData__ctor_m72619E8303433858B7BC9B4740762D0CDE6C167B((&L_2), 0, (Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 *)NULL, L_0, L_1, (1.0f), /*hidden argument*/NULL);
		((QCHTRayVisualData_t73A3B95C6C277054C2514DC8BFC58F567B4A0471_StaticFields*)il2cpp_codegen_static_fields_for(QCHTRayVisualData_t73A3B95C6C277054C2514DC8BFC58F567B4A0471_il2cpp_TypeInfo_var))->set_Default_7(L_2);
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
// Conversion methods for marshalling of: QCHT.Interactions.Distal.RayData
IL2CPP_EXTERN_C void RayData_t7F1A4A0CA1CC0150160930C15BF4B6918EFDCBE9_marshal_pinvoke(const RayData_t7F1A4A0CA1CC0150160930C15BF4B6918EFDCBE9& unmarshaled, RayData_t7F1A4A0CA1CC0150160930C15BF4B6918EFDCBE9_marshaled_pinvoke& marshaled)
{
	Exception_t* ___ReticleSprite_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'ReticleSprite' of type 'RayData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___ReticleSprite_0Exception, NULL);
}
IL2CPP_EXTERN_C void RayData_t7F1A4A0CA1CC0150160930C15BF4B6918EFDCBE9_marshal_pinvoke_back(const RayData_t7F1A4A0CA1CC0150160930C15BF4B6918EFDCBE9_marshaled_pinvoke& marshaled, RayData_t7F1A4A0CA1CC0150160930C15BF4B6918EFDCBE9& unmarshaled)
{
	Exception_t* ___ReticleSprite_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'ReticleSprite' of type 'RayData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___ReticleSprite_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: QCHT.Interactions.Distal.RayData
IL2CPP_EXTERN_C void RayData_t7F1A4A0CA1CC0150160930C15BF4B6918EFDCBE9_marshal_pinvoke_cleanup(RayData_t7F1A4A0CA1CC0150160930C15BF4B6918EFDCBE9_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: QCHT.Interactions.Distal.RayData
IL2CPP_EXTERN_C void RayData_t7F1A4A0CA1CC0150160930C15BF4B6918EFDCBE9_marshal_com(const RayData_t7F1A4A0CA1CC0150160930C15BF4B6918EFDCBE9& unmarshaled, RayData_t7F1A4A0CA1CC0150160930C15BF4B6918EFDCBE9_marshaled_com& marshaled)
{
	Exception_t* ___ReticleSprite_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'ReticleSprite' of type 'RayData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___ReticleSprite_0Exception, NULL);
}
IL2CPP_EXTERN_C void RayData_t7F1A4A0CA1CC0150160930C15BF4B6918EFDCBE9_marshal_com_back(const RayData_t7F1A4A0CA1CC0150160930C15BF4B6918EFDCBE9_marshaled_com& marshaled, RayData_t7F1A4A0CA1CC0150160930C15BF4B6918EFDCBE9& unmarshaled)
{
	Exception_t* ___ReticleSprite_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'ReticleSprite' of type 'RayData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___ReticleSprite_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: QCHT.Interactions.Distal.RayData
IL2CPP_EXTERN_C void RayData_t7F1A4A0CA1CC0150160930C15BF4B6918EFDCBE9_marshal_com_cleanup(RayData_t7F1A4A0CA1CC0150160930C15BF4B6918EFDCBE9_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void QCHT.Interactions.UI.RoundedCornerEffect::ModifyMesh(UnityEngine.UI.VertexHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoundedCornerEffect_ModifyMesh_m063F242C4AEEC5AEB03EFBB64E592F38C7DECD73 (RoundedCornerEffect_tD551467CC37C06E357B084EA14FD3DA97444E8C4 * __this, VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___vertexHelper0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		// var v = new UIVertex();
		il2cpp_codegen_initobj((&V_0), sizeof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A ));
		// var rectTransform = GetComponent<RectTransform>().rect;
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_0;
		L_0 = Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79(__this, /*hidden argument*/Component_GetComponent_TisRectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_m98D387B909AC36B37BF964576557C064222B3C79_RuntimeMethod_var);
		NullCheck(L_0);
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_1;
		L_1 = RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		// for (int i = 0; i < vertexHelper.currentVertCount; i++)
		V_2 = 0;
		goto IL_0068;
	}

IL_0018:
	{
		// vertexHelper.PopulateUIVertex(ref v, i);
		VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * L_2 = ___vertexHelper0;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		VertexHelper_PopulateUIVertex_m540F0A80C1A55C7444259CEE118CAC61F198B555(L_2, (UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A *)(&V_0), L_3, /*hidden argument*/NULL);
		// v.uv1 = new Vector2(rectTransform.width, rectTransform.height);
		float L_4;
		L_4 = Rect_get_width_m4A0500D95CA84917787A8E90D26E66D49DFA90EF((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_1), /*hidden argument*/NULL);
		float L_5;
		L_5 = Rect_get_height_m42FEF31015A269E6E2B7E6F62E72E5BF6602302A((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_1), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_6), L_4, L_5, /*hidden argument*/NULL);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_7;
		L_7 = Vector4_op_Implicit_mFFF2D39354FC98FDEDA761EDB4326E4F11B87504(L_6, /*hidden argument*/NULL);
		(&V_0)->set_uv1_5(L_7);
		// v.uv2 = new Vector2(_cornerRadius, 0f);
		float L_8 = __this->get__cornerRadius_5();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_9), L_8, (0.0f), /*hidden argument*/NULL);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_10;
		L_10 = Vector4_op_Implicit_mFFF2D39354FC98FDEDA761EDB4326E4F11B87504(L_9, /*hidden argument*/NULL);
		(&V_0)->set_uv2_6(L_10);
		// vertexHelper.SetUIVertex(v, i);
		VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * L_11 = ___vertexHelper0;
		UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  L_12 = V_0;
		int32_t L_13 = V_2;
		NullCheck(L_11);
		VertexHelper_SetUIVertex_mE6E1BF09DA31C90FA922B6F96123D7C363A71D7E(L_11, L_12, L_13, /*hidden argument*/NULL);
		// for (int i = 0; i < vertexHelper.currentVertCount; i++)
		int32_t L_14 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0068:
	{
		// for (int i = 0; i < vertexHelper.currentVertCount; i++)
		int32_t L_15 = V_2;
		VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * L_16 = ___vertexHelper0;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = VertexHelper_get_currentVertCount_m4E9932F9BBCC9CB9636B3415A03454D6B7A92807(L_16, /*hidden argument*/NULL);
		if ((((int32_t)L_15) < ((int32_t)L_17)))
		{
			goto IL_0018;
		}
	}
	{
		// }
		return;
	}
}
// System.Void QCHT.Interactions.UI.RoundedCornerEffect::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoundedCornerEffect__ctor_m0A9076080CAFC0E7A2FBAB9385B19EA543A0E309 (RoundedCornerEffect_tD551467CC37C06E357B084EA14FD3DA97444E8C4 * __this, const RuntimeMethod* method)
{
	{
		// [SerializeField] private float _cornerRadius = 1.0f;
		__this->set__cornerRadius_5((1.0f));
		BaseMeshEffect__ctor_m7D21D47A3B87CB9B715FCEEE1B955E417FEEF01B(__this, /*hidden argument*/NULL);
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
// System.Void QCHT.Interactions.Proximal.SnapData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SnapData__ctor_m4C8E87C2A272EDE77A05CD16BE3577BAF0B38C6B (SnapData_tF024C4033893ED13CD32444029C6497DFFDC6A54 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// UnityEngine.Quaternion QCHT.Interactions.VFF.TargetConstraint::GetJointAxisWorldRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  TargetConstraint_GetJointAxisWorldRotation_m6A4818C419EF2528D66768CE9237AB28E3044232 (TargetConstraint_tC40CC98B6B3180F303EF5312F0AADADBF6046707 * __this, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var xAxis = Joint.axis;
		ConfigurableJoint_t9F5E94B6088C703833B586A6B71D707A855E99BD * L_0 = __this->get_Joint_4();
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Joint_get_axis_m25563623D5B69D4CDABAF3C0687277345D9DBEE6(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// var zAxis = Vector3.Cross(xAxis, Joint.secondaryAxis);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = V_0;
		ConfigurableJoint_t9F5E94B6088C703833B586A6B71D707A855E99BD * L_3 = __this->get_Joint_4();
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = ConfigurableJoint_get_secondaryAxis_m3E8AA90FC240E88295D370AC5A80BD6DA44C694C(L_3, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector3_Cross_m63414F0C545EBB616F339FF8830D37F9230736A4(L_2, L_4, /*hidden argument*/NULL);
		// var yAxis = Vector3.Cross(zAxis, xAxis);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = L_5;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Vector3_Cross_m63414F0C545EBB616F339FF8830D37F9230736A4(L_6, L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		// var axisRot = Quaternion.LookRotation(zAxis, yAxis);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = V_1;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_10;
		L_10 = Quaternion_LookRotation_m8A7DB5BDBC361586191AB67ACF857F46160EE3F1(L_6, L_9, /*hidden argument*/NULL);
		V_2 = L_10;
		// if (Joint.configuredInWorldSpace)
		ConfigurableJoint_t9F5E94B6088C703833B586A6B71D707A855E99BD * L_11 = __this->get_Joint_4();
		NullCheck(L_11);
		bool L_12;
		L_12 = ConfigurableJoint_get_configuredInWorldSpace_mC677E6A831C791A697AA4D869C5C415A568D688D(L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_003b;
		}
	}
	{
		// return axisRot;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_13 = V_2;
		return L_13;
	}

IL_003b:
	{
		// return Joint.transform.rotation * axisRot;
		ConfigurableJoint_t9F5E94B6088C703833B586A6B71D707A855E99BD * L_14 = __this->get_Joint_4();
		NullCheck(L_14);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_16;
		L_16 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_15, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_17 = V_2;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_18;
		L_18 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_16, L_17, /*hidden argument*/NULL);
		return L_18;
	}
}
// System.Void QCHT.Interactions.VFF.TargetConstraint::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetConstraint__ctor_mA77F18FD567087BE47CED75CBF39A9DA8C249FCC (TargetConstraint_tC40CC98B6B3180F303EF5312F0AADADBF6046707 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void QCHT.Interactions.TextureAnimator::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureAnimator_Start_m3898D49F1C887D3854CC41926E0ABD642911CF7E (TextureAnimator_t0ADAB643BA91FC0994361436E944F56F4B2343A0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _rend = GetComponent<Renderer>();
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_0;
		L_0 = Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C_m436E5B0F17DDEF3CC61F77DEA82B1A92668AF019_RuntimeMethod_var);
		__this->set__rend_9(L_0);
		// if (_rend == null)
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_1 = __this->get__rend_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		// _image = GetComponent<Image>();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_3;
		L_3 = Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB(__this, /*hidden argument*/Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var);
		__this->set__image_10(L_3);
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.Void QCHT.Interactions.TextureAnimator::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureAnimator_Update_mE58CBA380B5DAC141D6E3DD9F79CBD4E708C79CB (TextureAnimator_t0ADAB643BA91FC0994361436E944F56F4B2343A0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureAnimator_t0ADAB643BA91FC0994361436E944F56F4B2343A0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _uvOffset.x = defaultOffsetX + Time.time * xSpeed;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_0 = __this->get_address_of__uvOffset_11();
		float L_1 = __this->get_defaultOffsetX_7();
		float L_2;
		L_2 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_3 = __this->get_xSpeed_5();
		L_0->set_x_0(((float)il2cpp_codegen_add((float)L_1, (float)((float)il2cpp_codegen_multiply((float)L_2, (float)L_3)))));
		// _uvOffset.y = defaultOffsetY + Time.time * ySpeed;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_4 = __this->get_address_of__uvOffset_11();
		float L_5 = __this->get_defaultOffsetY_8();
		float L_6;
		L_6 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_7 = __this->get_ySpeed_6();
		L_4->set_y_1(((float)il2cpp_codegen_add((float)L_5, (float)((float)il2cpp_codegen_multiply((float)L_6, (float)L_7)))));
		// if (_rend)
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_8 = __this->get__rend_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0065;
		}
	}
	{
		// _rend.material.SetTextureOffset(s_mainTex, _uvOffset);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_10 = __this->get__rend_9();
		NullCheck(L_10);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_11;
		L_11 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(TextureAnimator_t0ADAB643BA91FC0994361436E944F56F4B2343A0_il2cpp_TypeInfo_var);
		int32_t L_12 = ((TextureAnimator_t0ADAB643BA91FC0994361436E944F56F4B2343A0_StaticFields*)il2cpp_codegen_static_fields_for(TextureAnimator_t0ADAB643BA91FC0994361436E944F56F4B2343A0_il2cpp_TypeInfo_var))->get_s_mainTex_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_13 = __this->get__uvOffset_11();
		NullCheck(L_11);
		Material_SetTextureOffset_mDEE0C861BD2FC8D38924087590BE8FD123195A78(L_11, L_12, L_13, /*hidden argument*/NULL);
		return;
	}

IL_0065:
	{
		// _image.materialForRendering.SetTextureOffset(s_mainTex, _uvOffset);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_14 = __this->get__image_10();
		NullCheck(L_14);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_15;
		L_15 = VirtFuncInvoker0< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(34 /* UnityEngine.Material UnityEngine.UI.Graphic::get_materialForRendering() */, L_14);
		IL2CPP_RUNTIME_CLASS_INIT(TextureAnimator_t0ADAB643BA91FC0994361436E944F56F4B2343A0_il2cpp_TypeInfo_var);
		int32_t L_16 = ((TextureAnimator_t0ADAB643BA91FC0994361436E944F56F4B2343A0_StaticFields*)il2cpp_codegen_static_fields_for(TextureAnimator_t0ADAB643BA91FC0994361436E944F56F4B2343A0_il2cpp_TypeInfo_var))->get_s_mainTex_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_17 = __this->get__uvOffset_11();
		NullCheck(L_15);
		Material_SetTextureOffset_mDEE0C861BD2FC8D38924087590BE8FD123195A78(L_15, L_16, L_17, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void QCHT.Interactions.TextureAnimator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureAnimator__ctor_mCC7F38F515273CFAA1F9DBDC11C70FFD01F423D0 (TextureAnimator_t0ADAB643BA91FC0994361436E944F56F4B2343A0 * __this, const RuntimeMethod* method)
{
	{
		// private Vector2 _uvOffset = Vector2.zero;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0;
		L_0 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		__this->set__uvOffset_11(L_0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void QCHT.Interactions.TextureAnimator::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureAnimator__cctor_m81AB215D02273A0CF5B0B427AF4677E6F1280BE7 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureAnimator_t0ADAB643BA91FC0994361436E944F56F4B2343A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly int s_mainTex = Shader.PropertyToID("_MainTex");
		int32_t L_0;
		L_0 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21, /*hidden argument*/NULL);
		((TextureAnimator_t0ADAB643BA91FC0994361436E944F56F4B2343A0_StaticFields*)il2cpp_codegen_static_fields_for(TextureAnimator_t0ADAB643BA91FC0994361436E944F56F4B2343A0_il2cpp_TypeInfo_var))->set_s_mainTex_4(L_0);
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
// System.Void QCHT.Interactions.UI.WristUI::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WristUI_Awake_mB19520502E4DB1BA8F78356ADA38C34E216538E7 (WristUI_tEC6E732BC9C30B8590BDFD489A01F09E2EBBC9EB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_mD63281542675697ADC038B664E30F73F6BC1F1D1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _canvas = GetComponent<Canvas>();
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_0;
		L_0 = Component_GetComponent_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_mD63281542675697ADC038B664E30F73F6BC1F1D1(__this, /*hidden argument*/Component_GetComponent_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_mD63281542675697ADC038B664E30F73F6BC1F1D1_RuntimeMethod_var);
		__this->set__canvas_10(L_0);
		// }
		return;
	}
}
// System.Void QCHT.Interactions.UI.WristUI::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WristUI_OnEnable_mADC59AAB6BFFC10FB588B44360D424CA61E8FD8A (WristUI_tEC6E732BC9C30B8590BDFD489A01F09E2EBBC9EB * __this, const RuntimeMethod* method)
{
	{
		// Hide();
		WristUI_Hide_m4387789F506268BF47BE464376B5943694B664A1(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void QCHT.Interactions.UI.WristUI::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WristUI_Update_mCCB5550B67B128DCF9B149D03AE5FAF9A0AC8277 (WristUI_tEC6E732BC9C30B8590BDFD489A01F09E2EBBC9EB * __this, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * G_B2_0 = NULL;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * G_B1_0 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * G_B3_1 = NULL;
	{
		// Vector3 position = (handTransform.localToWorldMatrix * positionOffset);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_handTransform_7();
		NullCheck(L_0);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_1;
		L_1 = Transform_get_localToWorldMatrix_m6B810B0F20BA5DE48009461A4D662DD8BFF6A3CC(L_0, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = __this->get_positionOffset_8();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_3;
		L_3 = Vector4_op_Implicit_mDCFA56E9D34979E1E2BFE6C2D61F1768D934A8EB(L_2, /*hidden argument*/NULL);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_4;
		L_4 = Matrix4x4_op_Multiply_m6967C4B4CC9F36FE461F5420DF7175B4201E2585(L_1, L_3, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Vector4_op_Implicit_m5811604E04B684BE3F1A212A7FA46767619AB35B(L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		// position += handTransform.position;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7 = __this->get_handTransform_7();
		NullCheck(L_7);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_7, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_6, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		// transform.position =
		//     lerpEnabled ? Vector3.Lerp(transform.position, position, Time.deltaTime * speed) : position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		bool L_11 = __this->get_lerpEnabled_5();
		G_B1_0 = L_10;
		if (L_11)
		{
			G_B2_0 = L_10;
			goto IL_0044;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = V_0;
		G_B3_0 = L_12;
		G_B3_1 = G_B1_0;
		goto IL_0061;
	}

IL_0044:
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_13, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15 = V_0;
		float L_16;
		L_16 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_17 = __this->get_speed_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline(L_14, L_15, ((float)il2cpp_codegen_multiply((float)L_16, (float)L_17)), /*hidden argument*/NULL);
		G_B3_0 = L_18;
		G_B3_1 = G_B2_0;
	}

IL_0061:
	{
		NullCheck(G_B3_1);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(G_B3_1, G_B3_0, /*hidden argument*/NULL);
		// transform.rotation = handTransform.rotation * Quaternion.Euler(rotationOffset);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19;
		L_19 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20 = __this->get_handTransform_7();
		NullCheck(L_20);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_21;
		L_21 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_20, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22 = __this->get_rotationOffset_9();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_23;
		L_23 = Quaternion_Euler_m887ABE4F4DD563351E9874D63922C2F53969BBAB(L_22, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_24;
		L_24 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_21, L_23, /*hidden argument*/NULL);
		NullCheck(L_19);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_19, L_24, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void QCHT.Interactions.UI.WristUI::Show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WristUI_Show_m56EA6AB5E4402B220C53AE0E52195824C46C7879 (WristUI_tEC6E732BC9C30B8590BDFD489A01F09E2EBBC9EB * __this, const RuntimeMethod* method)
{
	{
		// _canvas.enabled = true;
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_0 = __this->get__canvas_10();
		NullCheck(L_0);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_0, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void QCHT.Interactions.UI.WristUI::Hide()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WristUI_Hide_m4387789F506268BF47BE464376B5943694B664A1 (WristUI_tEC6E732BC9C30B8590BDFD489A01F09E2EBBC9EB * __this, const RuntimeMethod* method)
{
	{
		// _canvas.enabled = false;
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_0 = __this->get__canvas_10();
		NullCheck(L_0);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_0, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void QCHT.Interactions.UI.WristUI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WristUI__ctor_m1B26F3A8F09DA126BF9D5D73F7D399B960EEED9A (WristUI_tEC6E732BC9C30B8590BDFD489A01F09E2EBBC9EB * __this, const RuntimeMethod* method)
{
	{
		// [SerializeField] private float speed = 1f;
		__this->set_speed_6((1.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void QCHT.Interactions.Hands.HandPresenter/<Fade>d__53::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeU3Ed__53__ctor_m168C34C0437ACBACFA7FD121B71EE51BD47A8FFE (U3CFadeU3Ed__53_t8FBA4C49BC483973E8754007DF4360071D37FA70 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void QCHT.Interactions.Hands.HandPresenter/<Fade>d__53::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeU3Ed__53_System_IDisposable_Dispose_mD56A691EF95DFC6A33854E7618A52B7C6BE23B25 (U3CFadeU3Ed__53_t8FBA4C49BC483973E8754007DF4360071D37FA70 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean QCHT.Interactions.Hands.HandPresenter/<Fade>d__53::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CFadeU3Ed__53_MoveNext_m240F20075191F59C4349F3B5D8CF2F03FB244B36 (U3CFadeU3Ed__53_t8FBA4C49BC483973E8754007DF4360071D37FA70 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HandPresenter_t458E7A35002C8A2B559BAD19C2D90315B19D4CE1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	HandPresenter_t458E7A35002C8A2B559BAD19C2D90315B19D4CE1 * V_1 = NULL;
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B9_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B8_0 = NULL;
	int32_t G_B10_0 = 0;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B10_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		HandPresenter_t458E7A35002C8A2B559BAD19C2D90315B19D4CE1 * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_01d5;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (targetAlpha > 0)
		float L_4 = __this->get_targetAlpha_2();
		if ((!(((float)L_4) > ((float)(0.0f)))))
		{
			goto IL_00f2;
		}
	}
	{
		// switch (interactionType)
		HandPresenter_t458E7A35002C8A2B559BAD19C2D90315B19D4CE1 * L_5 = V_1;
		NullCheck(L_5);
		int32_t L_6 = L_5->get_interactionType_11();
		V_2 = L_6;
		int32_t L_7 = V_2;
		switch (L_7)
		{
			case 0:
			{
				goto IL_004f;
			}
			case 1:
			{
				goto IL_0078;
			}
			case 2:
			{
				goto IL_00b1;
			}
		}
	}
	{
		goto IL_00d8;
	}

IL_004f:
	{
		// mainHand.gameObject.SetActive(_detected);
		HandPresenter_t458E7A35002C8A2B559BAD19C2D90315B19D4CE1 * L_8 = V_1;
		NullCheck(L_8);
		HandPoseDriver_t0BFB7CFFBC3305D2AF2A7A2A0AF1282B3E1D3133 * L_9 = L_8->get_mainHand_6();
		NullCheck(L_9);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10;
		L_10 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_9, /*hidden argument*/NULL);
		HandPresenter_t458E7A35002C8A2B559BAD19C2D90315B19D4CE1 * L_11 = V_1;
		NullCheck(L_11);
		bool L_12 = L_11->get__detected_26();
		NullCheck(L_10);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_10, L_12, /*hidden argument*/NULL);
		// ghostHand.gameObject.SetActive(false);
		HandPresenter_t458E7A35002C8A2B559BAD19C2D90315B19D4CE1 * L_13 = V_1;
		NullCheck(L_13);
		HandPoseDriver_t0BFB7CFFBC3305D2AF2A7A2A0AF1282B3E1D3133 * L_14 = L_13->get_ghostHand_7();
		NullCheck(L_14);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15;
		L_15 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_15, (bool)0, /*hidden argument*/NULL);
		// break;
		goto IL_00d8;
	}

IL_0078:
	{
		// mainHand.gameObject.SetActive(_detected);
		HandPresenter_t458E7A35002C8A2B559BAD19C2D90315B19D4CE1 * L_16 = V_1;
		NullCheck(L_16);
		HandPoseDriver_t0BFB7CFFBC3305D2AF2A7A2A0AF1282B3E1D3133 * L_17 = L_16->get_mainHand_6();
		NullCheck(L_17);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18;
		L_18 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_17, /*hidden argument*/NULL);
		HandPresenter_t458E7A35002C8A2B559BAD19C2D90315B19D4CE1 * L_19 = V_1;
		NullCheck(L_19);
		bool L_20 = L_19->get__detected_26();
		NullCheck(L_18);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_18, L_20, /*hidden argument*/NULL);
		// ghostHand.gameObject.SetActive(_detected && displayGhostHand);
		HandPresenter_t458E7A35002C8A2B559BAD19C2D90315B19D4CE1 * L_21 = V_1;
		NullCheck(L_21);
		HandPoseDriver_t0BFB7CFFBC3305D2AF2A7A2A0AF1282B3E1D3133 * L_22 = L_21->get_ghostHand_7();
		NullCheck(L_22);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23;
		L_23 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_22, /*hidden argument*/NULL);
		HandPresenter_t458E7A35002C8A2B559BAD19C2D90315B19D4CE1 * L_24 = V_1;
		NullCheck(L_24);
		bool L_25 = L_24->get__detected_26();
		G_B8_0 = L_23;
		if (!L_25)
		{
			G_B9_0 = L_23;
			goto IL_00a9;
		}
	}
	{
		HandPresenter_t458E7A35002C8A2B559BAD19C2D90315B19D4CE1 * L_26 = V_1;
		NullCheck(L_26);
		bool L_27 = L_26->get_displayGhostHand_17();
		G_B10_0 = ((int32_t)(L_27));
		G_B10_1 = G_B8_0;
		goto IL_00aa;
	}

IL_00a9:
	{
		G_B10_0 = 0;
		G_B10_1 = G_B9_0;
	}

IL_00aa:
	{
		NullCheck(G_B10_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(G_B10_1, (bool)G_B10_0, /*hidden argument*/NULL);
		// break;
		goto IL_00d8;
	}

IL_00b1:
	{
		// mainHand.gameObject.SetActive(_detected);
		HandPresenter_t458E7A35002C8A2B559BAD19C2D90315B19D4CE1 * L_28 = V_1;
		NullCheck(L_28);
		HandPoseDriver_t0BFB7CFFBC3305D2AF2A7A2A0AF1282B3E1D3133 * L_29 = L_28->get_mainHand_6();
		NullCheck(L_29);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_30;
		L_30 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_29, /*hidden argument*/NULL);
		HandPresenter_t458E7A35002C8A2B559BAD19C2D90315B19D4CE1 * L_31 = V_1;
		NullCheck(L_31);
		bool L_32 = L_31->get__detected_26();
		NullCheck(L_30);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_30, L_32, /*hidden argument*/NULL);
		// ghostHand.gameObject.SetActive(false);
		HandPresenter_t458E7A35002C8A2B559BAD19C2D90315B19D4CE1 * L_33 = V_1;
		NullCheck(L_33);
		HandPoseDriver_t0BFB7CFFBC3305D2AF2A7A2A0AF1282B3E1D3133 * L_34 = L_33->get_ghostHand_7();
		NullCheck(L_34);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_35;
		L_35 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_34, /*hidden argument*/NULL);
		NullCheck(L_35);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_35, (bool)0, /*hidden argument*/NULL);
	}

IL_00d8:
	{
		// mainHand.enabled = true;
		HandPresenter_t458E7A35002C8A2B559BAD19C2D90315B19D4CE1 * L_36 = V_1;
		NullCheck(L_36);
		HandPoseDriver_t0BFB7CFFBC3305D2AF2A7A2A0AF1282B3E1D3133 * L_37 = L_36->get_mainHand_6();
		NullCheck(L_37);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_37, (bool)1, /*hidden argument*/NULL);
		// ghostHand.enabled = true;
		HandPresenter_t458E7A35002C8A2B559BAD19C2D90315B19D4CE1 * L_38 = V_1;
		NullCheck(L_38);
		HandPoseDriver_t0BFB7CFFBC3305D2AF2A7A2A0AF1282B3E1D3133 * L_39 = L_38->get_ghostHand_7();
		NullCheck(L_39);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_39, (bool)1, /*hidden argument*/NULL);
		// }
		goto IL_0112;
	}

IL_00f2:
	{
		// if (_handDisplayAllowed)
		HandPresenter_t458E7A35002C8A2B559BAD19C2D90315B19D4CE1 * L_40 = V_1;
		NullCheck(L_40);
		bool L_41 = L_40->get__handDisplayAllowed_25();
		if (!L_41)
		{
			goto IL_0112;
		}
	}
	{
		// mainHand.enabled = false;
		HandPresenter_t458E7A35002C8A2B559BAD19C2D90315B19D4CE1 * L_42 = V_1;
		NullCheck(L_42);
		HandPoseDriver_t0BFB7CFFBC3305D2AF2A7A2A0AF1282B3E1D3133 * L_43 = L_42->get_mainHand_6();
		NullCheck(L_43);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_43, (bool)0, /*hidden argument*/NULL);
		// ghostHand.enabled = false;
		HandPresenter_t458E7A35002C8A2B559BAD19C2D90315B19D4CE1 * L_44 = V_1;
		NullCheck(L_44);
		HandPoseDriver_t0BFB7CFFBC3305D2AF2A7A2A0AF1282B3E1D3133 * L_45 = L_44->get_ghostHand_7();
		NullCheck(L_45);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_45, (bool)0, /*hidden argument*/NULL);
	}

IL_0112:
	{
		// mainSkinnedMeshRenderer.GetPropertyBlock(_mainMaterialPropertyBlock);
		HandPresenter_t458E7A35002C8A2B559BAD19C2D90315B19D4CE1 * L_46 = V_1;
		NullCheck(L_46);
		SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * L_47 = L_46->get_mainSkinnedMeshRenderer_8();
		HandPresenter_t458E7A35002C8A2B559BAD19C2D90315B19D4CE1 * L_48 = V_1;
		NullCheck(L_48);
		MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * L_49 = L_48->get__mainMaterialPropertyBlock_22();
		NullCheck(L_47);
		Renderer_GetPropertyBlock_mE73E51E42ED4F800C6422F5461A4D9E1DB61AEDC(L_47, L_49, /*hidden argument*/NULL);
		// ghostSkinnedMeshRenderer.GetPropertyBlock(_ghostMaterialPropertyBlock);
		HandPresenter_t458E7A35002C8A2B559BAD19C2D90315B19D4CE1 * L_50 = V_1;
		NullCheck(L_50);
		SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * L_51 = L_50->get_ghostSkinnedMeshRenderer_9();
		HandPresenter_t458E7A35002C8A2B559BAD19C2D90315B19D4CE1 * L_52 = V_1;
		NullCheck(L_52);
		MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * L_53 = L_52->get__ghostMaterialPropertyBlock_23();
		NullCheck(L_51);
		Renderer_GetPropertyBlock_mE73E51E42ED4F800C6422F5461A4D9E1DB61AEDC(L_51, L_53, /*hidden argument*/NULL);
		// var startMainAlpha = _mainMaterialPropertyBlock.GetFloat(s_globalAlpha);
		HandPresenter_t458E7A35002C8A2B559BAD19C2D90315B19D4CE1 * L_54 = V_1;
		NullCheck(L_54);
		MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * L_55 = L_54->get__mainMaterialPropertyBlock_22();
		IL2CPP_RUNTIME_CLASS_INIT(HandPresenter_t458E7A35002C8A2B559BAD19C2D90315B19D4CE1_il2cpp_TypeInfo_var);
		int32_t L_56 = ((HandPresenter_t458E7A35002C8A2B559BAD19C2D90315B19D4CE1_StaticFields*)il2cpp_codegen_static_fields_for(HandPresenter_t458E7A35002C8A2B559BAD19C2D90315B19D4CE1_il2cpp_TypeInfo_var))->get_s_globalAlpha_4();
		NullCheck(L_55);
		float L_57;
		L_57 = MaterialPropertyBlock_GetFloat_m20C2147E16CA3B7050DF4EB97448A11DC8D85DCC(L_55, L_56, /*hidden argument*/NULL);
		__this->set_U3CstartMainAlphaU3E5__2_4(L_57);
		// var startGhostAlpha = _ghostMaterialPropertyBlock.GetFloat(s_globalAlpha);
		HandPresenter_t458E7A35002C8A2B559BAD19C2D90315B19D4CE1 * L_58 = V_1;
		NullCheck(L_58);
		MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * L_59 = L_58->get__ghostMaterialPropertyBlock_23();
		int32_t L_60 = ((HandPresenter_t458E7A35002C8A2B559BAD19C2D90315B19D4CE1_StaticFields*)il2cpp_codegen_static_fields_for(HandPresenter_t458E7A35002C8A2B559BAD19C2D90315B19D4CE1_il2cpp_TypeInfo_var))->get_s_globalAlpha_4();
		NullCheck(L_59);
		float L_61;
		L_61 = MaterialPropertyBlock_GetFloat_m20C2147E16CA3B7050DF4EB97448A11DC8D85DCC(L_59, L_60, /*hidden argument*/NULL);
		__this->set_U3CstartGhostAlphaU3E5__3_5(L_61);
		// float time = 0;
		__this->set_U3CtimeU3E5__4_6((0.0f));
		goto IL_01dc;
	}

IL_016d:
	{
		// time += Time.deltaTime;
		float L_62 = __this->get_U3CtimeU3E5__4_6();
		float L_63;
		L_63 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_U3CtimeU3E5__4_6(((float)il2cpp_codegen_add((float)L_62, (float)L_63)));
		// var dt = time / fadeDuration;
		float L_64 = __this->get_U3CtimeU3E5__4_6();
		HandPresenter_t458E7A35002C8A2B559BAD19C2D90315B19D4CE1 * L_65 = V_1;
		NullCheck(L_65);
		float L_66 = L_65->get_fadeDuration_16();
		V_3 = ((float)((float)L_64/(float)L_66));
		// var mainAlpha = Mathf.Lerp(startMainAlpha, targetAlpha, dt);
		float L_67 = __this->get_U3CstartMainAlphaU3E5__2_4();
		float L_68 = __this->get_targetAlpha_2();
		float L_69 = V_3;
		float L_70;
		L_70 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_67, L_68, L_69, /*hidden argument*/NULL);
		V_4 = L_70;
		// var ghostAlpha = Mathf.Lerp(startGhostAlpha, targetAlpha, dt);
		float L_71 = __this->get_U3CstartGhostAlphaU3E5__3_5();
		float L_72 = __this->get_targetAlpha_2();
		float L_73 = V_3;
		float L_74;
		L_74 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_71, L_72, L_73, /*hidden argument*/NULL);
		V_5 = L_74;
		// SetMainHandAlpha(mainAlpha);
		HandPresenter_t458E7A35002C8A2B559BAD19C2D90315B19D4CE1 * L_75 = V_1;
		float L_76 = V_4;
		NullCheck(L_75);
		HandPresenter_SetMainHandAlpha_m6D3BCE7F7E745A0150292DC1158E32B5D1141655(L_75, L_76, /*hidden argument*/NULL);
		// SetGhostHandAlpha(ghostAlpha);
		HandPresenter_t458E7A35002C8A2B559BAD19C2D90315B19D4CE1 * L_77 = V_1;
		float L_78 = V_5;
		NullCheck(L_77);
		HandPresenter_SetGhostHandAlpha_m26161F7DC1A9CDF371F880DE98B67BF395FD8D5F(L_77, L_78, /*hidden argument*/NULL);
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_01d5:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_01dc:
	{
		// while (time < fadeDuration)
		float L_79 = __this->get_U3CtimeU3E5__4_6();
		HandPresenter_t458E7A35002C8A2B559BAD19C2D90315B19D4CE1 * L_80 = V_1;
		NullCheck(L_80);
		float L_81 = L_80->get_fadeDuration_16();
		if ((((float)L_79) < ((float)L_81)))
		{
			goto IL_016d;
		}
	}
	{
		// if (targetAlpha > 0)
		float L_82 = __this->get_targetAlpha_2();
		if ((!(((float)L_82) > ((float)(0.0f)))))
		{
			goto IL_01f9;
		}
	}
	{
		// yield break;
		return (bool)0;
	}

IL_01f9:
	{
		// if (!_handDisplayAllowed)
		HandPresenter_t458E7A35002C8A2B559BAD19C2D90315B19D4CE1 * L_83 = V_1;
		NullCheck(L_83);
		bool L_84 = L_83->get__handDisplayAllowed_25();
		if (L_84)
		{
			goto IL_0203;
		}
	}
	{
		// yield break;
		return (bool)0;
	}

IL_0203:
	{
		// mainHand.gameObject.SetActive(false);
		HandPresenter_t458E7A35002C8A2B559BAD19C2D90315B19D4CE1 * L_85 = V_1;
		NullCheck(L_85);
		HandPoseDriver_t0BFB7CFFBC3305D2AF2A7A2A0AF1282B3E1D3133 * L_86 = L_85->get_mainHand_6();
		NullCheck(L_86);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_87;
		L_87 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_86, /*hidden argument*/NULL);
		NullCheck(L_87);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_87, (bool)0, /*hidden argument*/NULL);
		// ghostHand.gameObject.SetActive(false);
		HandPresenter_t458E7A35002C8A2B559BAD19C2D90315B19D4CE1 * L_88 = V_1;
		NullCheck(L_88);
		HandPoseDriver_t0BFB7CFFBC3305D2AF2A7A2A0AF1282B3E1D3133 * L_89 = L_88->get_ghostHand_7();
		NullCheck(L_89);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_90;
		L_90 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_89, /*hidden argument*/NULL);
		NullCheck(L_90);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_90, (bool)0, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object QCHT.Interactions.Hands.HandPresenter/<Fade>d__53::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CFadeU3Ed__53_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m4A58C872F4B032B744746422346E370745F91213 (U3CFadeU3Ed__53_t8FBA4C49BC483973E8754007DF4360071D37FA70 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void QCHT.Interactions.Hands.HandPresenter/<Fade>d__53::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeU3Ed__53_System_Collections_IEnumerator_Reset_m02AC62E99F3EE558AD96ED1710C4916BFA384C17 (U3CFadeU3Ed__53_t8FBA4C49BC483973E8754007DF4360071D37FA70 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CFadeU3Ed__53_System_Collections_IEnumerator_Reset_m02AC62E99F3EE558AD96ED1710C4916BFA384C17_RuntimeMethod_var)));
	}
}
// System.Object QCHT.Interactions.Hands.HandPresenter/<Fade>d__53::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CFadeU3Ed__53_System_Collections_IEnumerator_get_Current_m8126233107C2099230FF0431302389BCBE1C12B7 (U3CFadeU3Ed__53_t8FBA4C49BC483973E8754007DF4360071D37FA70 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void QCHT.Interactions.Proximal.Interactable/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m5C195C50F9C6FA6051BD6B71FA8EF40D4B6A5501 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tA4A3D08DDDC65D19DA0B336AC350D78183B74C18_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tA4A3D08DDDC65D19DA0B336AC350D78183B74C18 * L_0 = (U3CU3Ec_tA4A3D08DDDC65D19DA0B336AC350D78183B74C18 *)il2cpp_codegen_object_new(U3CU3Ec_tA4A3D08DDDC65D19DA0B336AC350D78183B74C18_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m6330AD989E09FD704AA64478E3B6252B984726EB(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tA4A3D08DDDC65D19DA0B336AC350D78183B74C18_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA4A3D08DDDC65D19DA0B336AC350D78183B74C18_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void QCHT.Interactions.Proximal.Interactable/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m6330AD989E09FD704AA64478E3B6252B984726EB (U3CU3Ec_tA4A3D08DDDC65D19DA0B336AC350D78183B74C18 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean QCHT.Interactions.Proximal.Interactable/<>c::<Awake>b__17_0(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CAwakeU3Eb__17_0_mD5F31CBA5255C62A0D9F712C813BD098515E0C66 (U3CU3Ec_tA4A3D08DDDC65D19DA0B336AC350D78183B74C18 * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___col0, const RuntimeMethod* method)
{
	{
		// _colliders = GetComponentsInChildren<Collider>(true).Where(col => !col.isTrigger).ToArray();
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_0 = ___col0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Collider_get_isTrigger_m3A9C990365C94B7125DB5993D782D3D0FE876A60(L_0, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
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
// System.Void QCHT.Interactions.Proximal.Interactable/<>c__DisplayClass21_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass21_0__ctor_m8B5632A12776486144AAEC73576DCA81AB55DBE9 (U3CU3Ec__DisplayClass21_0_tB7850ECF175E5EB12AA0265F28A0BCE1E7B614DB * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean QCHT.Interactions.Proximal.Interactable/<>c__DisplayClass21_0::<OnBeginGrab>b__0(QCHT.Interactions.Proximal.SnapData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass21_0_U3COnBeginGrabU3Eb__0_m1EE60CEB0882218D10A29D7AD3EA601E63C4E77A (U3CU3Ec__DisplayClass21_0_tB7850ECF175E5EB12AA0265F28A0BCE1E7B614DB * __this, SnapData_tF024C4033893ED13CD32444029C6497DFFDC6A54 * ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var data = snapData?.First(x => x.HandPose && x.HandPose.Type == eventData.Controller.Type);
		SnapData_tF024C4033893ED13CD32444029C6497DFFDC6A54 * L_0 = ___x0;
		NullCheck(L_0);
		HandPose_t1A858C5CA696FC6C8D13153595E8B089E8F9EDAA * L_1 = L_0->get_HandPose_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		SnapData_tF024C4033893ED13CD32444029C6497DFFDC6A54 * L_3 = ___x0;
		NullCheck(L_3);
		HandPose_t1A858C5CA696FC6C8D13153595E8B089E8F9EDAA * L_4 = L_3->get_HandPose_0();
		NullCheck(L_4);
		int32_t L_5;
		L_5 = HandPose_get_Type_m434CA479946DA973925899508CB0509D8419B89D_inline(L_4, /*hidden argument*/NULL);
		InteractionData_t1050830DD97CB7E86ACCA8E2BC14DCE5F244DB84 * L_6 = __this->get_eventData_0();
		NullCheck(L_6);
		QCHTHandInteractionController_t4C2EA2883E824F649BC5BC145FF4B6B20838BE52 * L_7 = L_6->get_Controller_2();
		NullCheck(L_7);
		int32_t L_8 = L_7->get_Type_4();
		return (bool)((((int32_t)L_5) == ((int32_t)L_8))? 1 : 0);
	}

IL_002b:
	{
		return (bool)0;
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
// System.Void QCHT.Interactions.Distal.ControlBox.InteractionGridControlPoint/HandleEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandleEventHandler__ctor_m7A391660BC4C6A5FEC87518A5CE492F978415A11 (HandleEventHandler_t7F05F5747CC0065BC1D3B7EB323250521AB0BC35 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	if (___object0 == NULL && !MethodIsStatic((RuntimeMethod*)___method1))
	{
		il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
	}
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void QCHT.Interactions.Distal.ControlBox.InteractionGridControlPoint/HandleEventHandler::Invoke(QCHT.Interactions.Distal.ControlBox.InteractionGridControlPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandleEventHandler_Invoke_m18D804535DA9E2CB34541715892DFE5CCFB1CC55 (HandleEventHandler_t7F05F5747CC0065BC1D3B7EB323250521AB0BC35 * __this, InteractionGridControlPoint_tACAF23DB22DAE8CEDDBDCFCAACB80FEA4B0FDE3B * ___handle0, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (InteractionGridControlPoint_tACAF23DB22DAE8CEDDBDCFCAACB80FEA4B0FDE3B *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___handle0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, InteractionGridControlPoint_tACAF23DB22DAE8CEDDBDCFCAACB80FEA4B0FDE3B *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___handle0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___handle0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___handle0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___handle0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___handle0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (InteractionGridControlPoint_tACAF23DB22DAE8CEDDBDCFCAACB80FEA4B0FDE3B *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___handle0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< InteractionGridControlPoint_tACAF23DB22DAE8CEDDBDCFCAACB80FEA4B0FDE3B * >::Invoke(targetMethod, targetThis, ___handle0);
					else
						GenericVirtActionInvoker1< InteractionGridControlPoint_tACAF23DB22DAE8CEDDBDCFCAACB80FEA4B0FDE3B * >::Invoke(targetMethod, targetThis, ___handle0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< InteractionGridControlPoint_tACAF23DB22DAE8CEDDBDCFCAACB80FEA4B0FDE3B * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___handle0);
					else
						VirtActionInvoker1< InteractionGridControlPoint_tACAF23DB22DAE8CEDDBDCFCAACB80FEA4B0FDE3B * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___handle0);
				}
			}
			else
			{
				if (___parameterCount == 0)
				{
					typedef void (*FunctionPointerType) (InteractionGridControlPoint_tACAF23DB22DAE8CEDDBDCFCAACB80FEA4B0FDE3B *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___handle0, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, InteractionGridControlPoint_tACAF23DB22DAE8CEDDBDCFCAACB80FEA4B0FDE3B *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___handle0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult QCHT.Interactions.Distal.ControlBox.InteractionGridControlPoint/HandleEventHandler::BeginInvoke(QCHT.Interactions.Distal.ControlBox.InteractionGridControlPoint,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HandleEventHandler_BeginInvoke_m175A003CC32ADA8AEA1A7E214FF8508B5EABBB8E (HandleEventHandler_t7F05F5747CC0065BC1D3B7EB323250521AB0BC35 * __this, InteractionGridControlPoint_tACAF23DB22DAE8CEDDBDCFCAACB80FEA4B0FDE3B * ___handle0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___handle0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void QCHT.Interactions.Distal.ControlBox.InteractionGridControlPoint/HandleEventHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandleEventHandler_EndInvoke_m9BC88DEFCBDE2CBF0894C3CF3682A00057099EFE (HandleEventHandler_t7F05F5747CC0065BC1D3B7EB323250521AB0BC35 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void QCHT.Interactions.Distal.QCHTGraphicRaycaster/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mBF710F65553D25C7D06A3F124EFCC8CF476D15A1 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tC87347C03AE5138C26F5C55656723B5D0D46E0EF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tC87347C03AE5138C26F5C55656723B5D0D46E0EF * L_0 = (U3CU3Ec_tC87347C03AE5138C26F5C55656723B5D0D46E0EF *)il2cpp_codegen_object_new(U3CU3Ec_tC87347C03AE5138C26F5C55656723B5D0D46E0EF_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mFA573B9BBFD3FE34F8EC8BF863490496B46EA995(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tC87347C03AE5138C26F5C55656723B5D0D46E0EF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC87347C03AE5138C26F5C55656723B5D0D46E0EF_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void QCHT.Interactions.Distal.QCHTGraphicRaycaster/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mFA573B9BBFD3FE34F8EC8BF863490496B46EA995 (U3CU3Ec_tC87347C03AE5138C26F5C55656723B5D0D46E0EF * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 QCHT.Interactions.Distal.QCHTGraphicRaycaster/<>c::<GraphicRaycast>b__19_0(QCHT.Interactions.Distal.QCHTGraphicRaycaster/RaycastHit,QCHT.Interactions.Distal.QCHTGraphicRaycaster/RaycastHit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CGraphicRaycastU3Eb__19_0_m73F9B9D126A05CDE65DC8E2537F8E676730FF330 (U3CU3Ec_tC87347C03AE5138C26F5C55656723B5D0D46E0EF * __this, RaycastHit_tFD7E888FCDBF3BBDC1396B8F2897071DA109D954  ___g10, RaycastHit_tFD7E888FCDBF3BBDC1396B8F2897071DA109D954  ___g21, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// s_sortedGraphics.Sort((g1, g2) => g2.Graphic.depth.CompareTo(g1.Graphic.depth));
		RaycastHit_tFD7E888FCDBF3BBDC1396B8F2897071DA109D954  L_0 = ___g21;
		Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * L_1 = L_0.get_Graphic_0();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Graphic_get_depth_m8AF43A1523D90A3A42A812835D516940E320CD17(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		RaycastHit_tFD7E888FCDBF3BBDC1396B8F2897071DA109D954  L_3 = ___g10;
		Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * L_4 = L_3.get_Graphic_0();
		NullCheck(L_4);
		int32_t L_5;
		L_5 = Graphic_get_depth_m8AF43A1523D90A3A42A812835D516940E320CD17(L_4, /*hidden argument*/NULL);
		int32_t L_6;
		L_6 = Int32_CompareTo_m2DD1093B956B4D96C3AC3C27FDEE3CA447B044D3((int32_t*)(&V_0), L_5, /*hidden argument*/NULL);
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
// Conversion methods for marshalling of: QCHT.Interactions.Distal.QCHTGraphicRaycaster/RaycastHit
IL2CPP_EXTERN_C void RaycastHit_tFD7E888FCDBF3BBDC1396B8F2897071DA109D954_marshal_pinvoke(const RaycastHit_tFD7E888FCDBF3BBDC1396B8F2897071DA109D954& unmarshaled, RaycastHit_tFD7E888FCDBF3BBDC1396B8F2897071DA109D954_marshaled_pinvoke& marshaled)
{
	Exception_t* ___Graphic_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Graphic' of type 'RaycastHit': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Graphic_0Exception, NULL);
}
IL2CPP_EXTERN_C void RaycastHit_tFD7E888FCDBF3BBDC1396B8F2897071DA109D954_marshal_pinvoke_back(const RaycastHit_tFD7E888FCDBF3BBDC1396B8F2897071DA109D954_marshaled_pinvoke& marshaled, RaycastHit_tFD7E888FCDBF3BBDC1396B8F2897071DA109D954& unmarshaled)
{
	Exception_t* ___Graphic_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Graphic' of type 'RaycastHit': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Graphic_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: QCHT.Interactions.Distal.QCHTGraphicRaycaster/RaycastHit
IL2CPP_EXTERN_C void RaycastHit_tFD7E888FCDBF3BBDC1396B8F2897071DA109D954_marshal_pinvoke_cleanup(RaycastHit_tFD7E888FCDBF3BBDC1396B8F2897071DA109D954_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: QCHT.Interactions.Distal.QCHTGraphicRaycaster/RaycastHit
IL2CPP_EXTERN_C void RaycastHit_tFD7E888FCDBF3BBDC1396B8F2897071DA109D954_marshal_com(const RaycastHit_tFD7E888FCDBF3BBDC1396B8F2897071DA109D954& unmarshaled, RaycastHit_tFD7E888FCDBF3BBDC1396B8F2897071DA109D954_marshaled_com& marshaled)
{
	Exception_t* ___Graphic_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Graphic' of type 'RaycastHit': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Graphic_0Exception, NULL);
}
IL2CPP_EXTERN_C void RaycastHit_tFD7E888FCDBF3BBDC1396B8F2897071DA109D954_marshal_com_back(const RaycastHit_tFD7E888FCDBF3BBDC1396B8F2897071DA109D954_marshaled_com& marshaled, RaycastHit_tFD7E888FCDBF3BBDC1396B8F2897071DA109D954& unmarshaled)
{
	Exception_t* ___Graphic_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Graphic' of type 'RaycastHit': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Graphic_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: QCHT.Interactions.Distal.QCHTGraphicRaycaster/RaycastHit
IL2CPP_EXTERN_C void RaycastHit_tFD7E888FCDBF3BBDC1396B8F2897071DA109D954_marshal_com_cleanup(RaycastHit_tFD7E888FCDBF3BBDC1396B8F2897071DA109D954_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 QCHT.Interactions.Distal.QCHTPhysicsRaycaster/RaycastHitComparer::Compare(UnityEngine.RaycastHit,UnityEngine.RaycastHit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RaycastHitComparer_Compare_mF95C22E898FCB1F446836432001AF002612E3E91 (RaycastHitComparer_tF9774B3AE8F020A2190700CAFFF3D4A2B626A0F0 * __this, RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  ___x0, RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  ___y1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// return x.distance.CompareTo(y.distance);
		float L_0;
		L_0 = RaycastHit_get_distance_m85FCA98D7957C3BF1D449CA1B48C116CCD6226FA((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&___x0), /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1;
		L_1 = RaycastHit_get_distance_m85FCA98D7957C3BF1D449CA1B48C116CCD6226FA((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&___y1), /*hidden argument*/NULL);
		int32_t L_2;
		L_2 = Single_CompareTo_m80B5B5A70A2343C3A8673F35635EBED4458109B4((float*)(&V_0), L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void QCHT.Interactions.Distal.QCHTPhysicsRaycaster/RaycastHitComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RaycastHitComparer__ctor_m7CFEDFB5D2C7A7D410D15508FA5275699F555F67 (RaycastHitComparer_tF9774B3AE8F020A2190700CAFFF3D4A2B626A0F0 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void QCHT.Interactions.Distal.QCHTPhysicsRaycaster/RaycastHitComparer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RaycastHitComparer__cctor_m606D588BE6CB6B60CBA984E3763617F2030A86B7 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RaycastHitComparer_tF9774B3AE8F020A2190700CAFFF3D4A2B626A0F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly RaycastHitComparer s_instance = new RaycastHitComparer();
		RaycastHitComparer_tF9774B3AE8F020A2190700CAFFF3D4A2B626A0F0 * L_0 = (RaycastHitComparer_tF9774B3AE8F020A2190700CAFFF3D4A2B626A0F0 *)il2cpp_codegen_object_new(RaycastHitComparer_tF9774B3AE8F020A2190700CAFFF3D4A2B626A0F0_il2cpp_TypeInfo_var);
		RaycastHitComparer__ctor_m7CFEDFB5D2C7A7D410D15508FA5275699F555F67(L_0, /*hidden argument*/NULL);
		((RaycastHitComparer_tF9774B3AE8F020A2190700CAFFF3D4A2B626A0F0_StaticFields*)il2cpp_codegen_static_fields_for(RaycastHitComparer_tF9774B3AE8F020A2190700CAFFF3D4A2B626A0F0_il2cpp_TypeInfo_var))->set_s_instance_0(L_0);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(L_0, /*hidden argument*/NULL);
		___t2 = L_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___a0;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___b1;
		float L_5 = L_4.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_x_2();
		float L_8 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = ___a0;
		float L_10 = L_9.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = ___b1;
		float L_12 = L_11.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = ___a0;
		float L_14 = L_13.get_y_3();
		float L_15 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = ___a0;
		float L_17 = L_16.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = ___b1;
		float L_19 = L_18.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = ___a0;
		float L_21 = L_20.get_z_4();
		float L_22 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_23), ((float)il2cpp_codegen_add((float)L_3, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), (float)L_8)))), ((float)il2cpp_codegen_add((float)L_10, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_12, (float)L_14)), (float)L_15)))), ((float)il2cpp_codegen_add((float)L_17, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_19, (float)L_21)), (float)L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HandPose_get_Type_m434CA479946DA973925899508CB0509D8419B89D_inline (HandPose_t1A858C5CA696FC6C8D13153595E8B089E8F9EDAA * __this, const RuntimeMethod* method)
{
	{
		// get => _type;
		int32_t L_0 = __this->get__type_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}

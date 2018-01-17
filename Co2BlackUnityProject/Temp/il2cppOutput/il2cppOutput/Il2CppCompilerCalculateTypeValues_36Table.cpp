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

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "object-internals.h"

// UnityEngine.Camera
struct Camera_t3466010632;
// UnityEngine.AnimationCurve
struct AnimationCurve_t1604945997;
// UnityStandardAssets.Utility.FOVKick
struct FOVKick_t3080713664;
// UnityEngine.Collision
struct Collision_t3030915570;
// UnityStandardAssets.Effects.Explosive
struct Explosive_t2953301732;
// UnityStandardAssets.Utility.LerpControlledBob
struct LerpControlledBob_t689571109;
// UnityEngine.Transform[]
struct TransformU5BU5D_t4157687732;
// UnityStandardAssets.Utility.ObjectResetter
struct ObjectResetter_t2795484887;
// UnityEngine.ParticleSystem[]
struct ParticleSystemU5BU5D_t1600147907;
// UnityStandardAssets.Utility.ParticleSystemDestroyer
struct ParticleSystemDestroyer_t1234272740;
// UnityEngine.Collider[]
struct ColliderU5BU5D_t1893034154;
// UnityStandardAssets.Effects.ExplosionFireAndDebris
struct ExplosionFireAndDebris_t1948738392;
// UnityStandardAssets.Utility.TimedObjectActivator/Entry[]
struct EntryU5BU5D_t4116850331;
// UnityStandardAssets.Utility.TimedObjectActivator/Entry
struct Entry_t4243516910;
// UnityStandardAssets.Utility.WaypointCircuit
struct WaypointCircuit_t1307276181;
// UnityStandardAssets.Utility.AutoMobileShaderSwitch/ReplacementDefinition[]
struct ReplacementDefinitionU5BU5D_t342615823;
// UnityEngine.Shader
struct Shader_t2026587970;
// System.Char[]
struct CharU5BU5D_t2331269993;
// System.Collections.Generic.List`1<UnityEngine.Rigidbody>
struct List_1_t28089895;
// UnityEngine.Rigidbody
struct Rigidbody_t165260282;
// System.Void
struct Void_t3176643268;
// System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis>
struct Dictionary_2_t1622394899;
// System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton>
struct Dictionary_2_t2212279658;
// System.Collections.Generic.List`1<System.String>
struct List_1_t2352929133;
// UnityStandardAssets.Effects.ExplosionPhysicsForce
struct ExplosionPhysicsForce_t1523072557;
// UnityEngine.Transform
struct Transform_t2055145993;
// UnityStandardAssets.Utility.DragRigidbody
struct DragRigidbody_t888283494;
// UnityEngine.GameObject
struct GameObject_t3088464854;
// System.String
struct String_t;
// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis
struct VirtualAxis_t4166879677;
// UnityEngine.UI.Image
struct Image_t1498872576;
// UnityStandardAssets.Utility.WaypointCircuit/WaypointList
struct WaypointList_t2504507529;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t3430844691;
// System.Single[]
struct SingleU5BU5D_t3407503223;
// UnityStandardAssets.CrossPlatformInput.TiltInput/AxisMapping
struct AxisMapping_t2010957176;
// UnityEngine.SphereCollider
struct SphereCollider_t2239091298;
// UnityEngine.Object
struct Object_t497070861;
// UnityEngine.GUIText
struct GUIText_t711831079;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t1675533331;
// UnityStandardAssets.Utility.AutoMobileShaderSwitch/ReplacementList
struct ReplacementList_t2946751215;
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t3407633778;
// UnityStandardAssets.Utility.AutoMoveAndRotate/Vector3andSpace
struct Vector3andSpace_t1464337399;
// UnityEngine.SpringJoint
struct SpringJoint_t914811063;
// UnityEngine.Light
struct Light_t3486143244;
// UnityEngine.Renderer
struct Renderer_t1118874217;
// UnityEngine.UI.Text
struct Text_t2672992687;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t1917975606;
// UnityEngine.MonoBehaviour[]
struct MonoBehaviourU5BU5D_t2292155723;
// System.Collections.Generic.List`1<UnityEngine.ParticleCollisionEvent>
struct List_1_t2820564339;
// UnityEngine.ParticleSystem
struct ParticleSystem_t1455379430;
// UnityStandardAssets.Utility.TimedObjectActivator/Entries
struct Entries_t2705690161;




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
#ifndef FOVKICK_T3080713664_H
#define FOVKICK_T3080713664_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.FOVKick
struct  FOVKick_t3080713664  : public RuntimeObject
{
public:
	// UnityEngine.Camera UnityStandardAssets.Utility.FOVKick::Camera
	Camera_t3466010632 * ___Camera_0;
	// System.Single UnityStandardAssets.Utility.FOVKick::originalFov
	float ___originalFov_1;
	// System.Single UnityStandardAssets.Utility.FOVKick::FOVIncrease
	float ___FOVIncrease_2;
	// System.Single UnityStandardAssets.Utility.FOVKick::TimeToIncrease
	float ___TimeToIncrease_3;
	// System.Single UnityStandardAssets.Utility.FOVKick::TimeToDecrease
	float ___TimeToDecrease_4;
	// UnityEngine.AnimationCurve UnityStandardAssets.Utility.FOVKick::IncreaseCurve
	AnimationCurve_t1604945997 * ___IncreaseCurve_5;

public:
	inline static int32_t get_offset_of_Camera_0() { return static_cast<int32_t>(offsetof(FOVKick_t3080713664, ___Camera_0)); }
	inline Camera_t3466010632 * get_Camera_0() const { return ___Camera_0; }
	inline Camera_t3466010632 ** get_address_of_Camera_0() { return &___Camera_0; }
	inline void set_Camera_0(Camera_t3466010632 * value)
	{
		___Camera_0 = value;
		Il2CppCodeGenWriteBarrier((&___Camera_0), value);
	}

	inline static int32_t get_offset_of_originalFov_1() { return static_cast<int32_t>(offsetof(FOVKick_t3080713664, ___originalFov_1)); }
	inline float get_originalFov_1() const { return ___originalFov_1; }
	inline float* get_address_of_originalFov_1() { return &___originalFov_1; }
	inline void set_originalFov_1(float value)
	{
		___originalFov_1 = value;
	}

	inline static int32_t get_offset_of_FOVIncrease_2() { return static_cast<int32_t>(offsetof(FOVKick_t3080713664, ___FOVIncrease_2)); }
	inline float get_FOVIncrease_2() const { return ___FOVIncrease_2; }
	inline float* get_address_of_FOVIncrease_2() { return &___FOVIncrease_2; }
	inline void set_FOVIncrease_2(float value)
	{
		___FOVIncrease_2 = value;
	}

	inline static int32_t get_offset_of_TimeToIncrease_3() { return static_cast<int32_t>(offsetof(FOVKick_t3080713664, ___TimeToIncrease_3)); }
	inline float get_TimeToIncrease_3() const { return ___TimeToIncrease_3; }
	inline float* get_address_of_TimeToIncrease_3() { return &___TimeToIncrease_3; }
	inline void set_TimeToIncrease_3(float value)
	{
		___TimeToIncrease_3 = value;
	}

	inline static int32_t get_offset_of_TimeToDecrease_4() { return static_cast<int32_t>(offsetof(FOVKick_t3080713664, ___TimeToDecrease_4)); }
	inline float get_TimeToDecrease_4() const { return ___TimeToDecrease_4; }
	inline float* get_address_of_TimeToDecrease_4() { return &___TimeToDecrease_4; }
	inline void set_TimeToDecrease_4(float value)
	{
		___TimeToDecrease_4 = value;
	}

	inline static int32_t get_offset_of_IncreaseCurve_5() { return static_cast<int32_t>(offsetof(FOVKick_t3080713664, ___IncreaseCurve_5)); }
	inline AnimationCurve_t1604945997 * get_IncreaseCurve_5() const { return ___IncreaseCurve_5; }
	inline AnimationCurve_t1604945997 ** get_address_of_IncreaseCurve_5() { return &___IncreaseCurve_5; }
	inline void set_IncreaseCurve_5(AnimationCurve_t1604945997 * value)
	{
		___IncreaseCurve_5 = value;
		Il2CppCodeGenWriteBarrier((&___IncreaseCurve_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FOVKICK_T3080713664_H
#ifndef U3CFOVKICKUPU3EC__ITERATOR0_T3929267167_H
#define U3CFOVKICKUPU3EC__ITERATOR0_T3929267167_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.FOVKick/<FOVKickUp>c__Iterator0
struct  U3CFOVKickUpU3Ec__Iterator0_t3929267167  : public RuntimeObject
{
public:
	// System.Single UnityStandardAssets.Utility.FOVKick/<FOVKickUp>c__Iterator0::<t>__0
	float ___U3CtU3E__0_0;
	// UnityStandardAssets.Utility.FOVKick UnityStandardAssets.Utility.FOVKick/<FOVKickUp>c__Iterator0::$this
	FOVKick_t3080713664 * ___U24this_1;
	// System.Object UnityStandardAssets.Utility.FOVKick/<FOVKickUp>c__Iterator0::$current
	RuntimeObject * ___U24current_2;
	// System.Boolean UnityStandardAssets.Utility.FOVKick/<FOVKickUp>c__Iterator0::$disposing
	bool ___U24disposing_3;
	// System.Int32 UnityStandardAssets.Utility.FOVKick/<FOVKickUp>c__Iterator0::$PC
	int32_t ___U24PC_4;

public:
	inline static int32_t get_offset_of_U3CtU3E__0_0() { return static_cast<int32_t>(offsetof(U3CFOVKickUpU3Ec__Iterator0_t3929267167, ___U3CtU3E__0_0)); }
	inline float get_U3CtU3E__0_0() const { return ___U3CtU3E__0_0; }
	inline float* get_address_of_U3CtU3E__0_0() { return &___U3CtU3E__0_0; }
	inline void set_U3CtU3E__0_0(float value)
	{
		___U3CtU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CFOVKickUpU3Ec__Iterator0_t3929267167, ___U24this_1)); }
	inline FOVKick_t3080713664 * get_U24this_1() const { return ___U24this_1; }
	inline FOVKick_t3080713664 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(FOVKick_t3080713664 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_1), value);
	}

	inline static int32_t get_offset_of_U24current_2() { return static_cast<int32_t>(offsetof(U3CFOVKickUpU3Ec__Iterator0_t3929267167, ___U24current_2)); }
	inline RuntimeObject * get_U24current_2() const { return ___U24current_2; }
	inline RuntimeObject ** get_address_of_U24current_2() { return &___U24current_2; }
	inline void set_U24current_2(RuntimeObject * value)
	{
		___U24current_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_2), value);
	}

	inline static int32_t get_offset_of_U24disposing_3() { return static_cast<int32_t>(offsetof(U3CFOVKickUpU3Ec__Iterator0_t3929267167, ___U24disposing_3)); }
	inline bool get_U24disposing_3() const { return ___U24disposing_3; }
	inline bool* get_address_of_U24disposing_3() { return &___U24disposing_3; }
	inline void set_U24disposing_3(bool value)
	{
		___U24disposing_3 = value;
	}

	inline static int32_t get_offset_of_U24PC_4() { return static_cast<int32_t>(offsetof(U3CFOVKickUpU3Ec__Iterator0_t3929267167, ___U24PC_4)); }
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
#endif // U3CFOVKICKUPU3EC__ITERATOR0_T3929267167_H
#ifndef U3CFOVKICKDOWNU3EC__ITERATOR1_T320720025_H
#define U3CFOVKICKDOWNU3EC__ITERATOR1_T320720025_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.FOVKick/<FOVKickDown>c__Iterator1
struct  U3CFOVKickDownU3Ec__Iterator1_t320720025  : public RuntimeObject
{
public:
	// System.Single UnityStandardAssets.Utility.FOVKick/<FOVKickDown>c__Iterator1::<t>__0
	float ___U3CtU3E__0_0;
	// UnityStandardAssets.Utility.FOVKick UnityStandardAssets.Utility.FOVKick/<FOVKickDown>c__Iterator1::$this
	FOVKick_t3080713664 * ___U24this_1;
	// System.Object UnityStandardAssets.Utility.FOVKick/<FOVKickDown>c__Iterator1::$current
	RuntimeObject * ___U24current_2;
	// System.Boolean UnityStandardAssets.Utility.FOVKick/<FOVKickDown>c__Iterator1::$disposing
	bool ___U24disposing_3;
	// System.Int32 UnityStandardAssets.Utility.FOVKick/<FOVKickDown>c__Iterator1::$PC
	int32_t ___U24PC_4;

public:
	inline static int32_t get_offset_of_U3CtU3E__0_0() { return static_cast<int32_t>(offsetof(U3CFOVKickDownU3Ec__Iterator1_t320720025, ___U3CtU3E__0_0)); }
	inline float get_U3CtU3E__0_0() const { return ___U3CtU3E__0_0; }
	inline float* get_address_of_U3CtU3E__0_0() { return &___U3CtU3E__0_0; }
	inline void set_U3CtU3E__0_0(float value)
	{
		___U3CtU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CFOVKickDownU3Ec__Iterator1_t320720025, ___U24this_1)); }
	inline FOVKick_t3080713664 * get_U24this_1() const { return ___U24this_1; }
	inline FOVKick_t3080713664 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(FOVKick_t3080713664 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_1), value);
	}

	inline static int32_t get_offset_of_U24current_2() { return static_cast<int32_t>(offsetof(U3CFOVKickDownU3Ec__Iterator1_t320720025, ___U24current_2)); }
	inline RuntimeObject * get_U24current_2() const { return ___U24current_2; }
	inline RuntimeObject ** get_address_of_U24current_2() { return &___U24current_2; }
	inline void set_U24current_2(RuntimeObject * value)
	{
		___U24current_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_2), value);
	}

	inline static int32_t get_offset_of_U24disposing_3() { return static_cast<int32_t>(offsetof(U3CFOVKickDownU3Ec__Iterator1_t320720025, ___U24disposing_3)); }
	inline bool get_U24disposing_3() const { return ___U24disposing_3; }
	inline bool* get_address_of_U24disposing_3() { return &___U24disposing_3; }
	inline void set_U24disposing_3(bool value)
	{
		___U24disposing_3 = value;
	}

	inline static int32_t get_offset_of_U24PC_4() { return static_cast<int32_t>(offsetof(U3CFOVKickDownU3Ec__Iterator1_t320720025, ___U24PC_4)); }
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
#endif // U3CFOVKICKDOWNU3EC__ITERATOR1_T320720025_H
#ifndef LERPCONTROLLEDBOB_T689571109_H
#define LERPCONTROLLEDBOB_T689571109_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.LerpControlledBob
struct  LerpControlledBob_t689571109  : public RuntimeObject
{
public:
	// System.Single UnityStandardAssets.Utility.LerpControlledBob::BobDuration
	float ___BobDuration_0;
	// System.Single UnityStandardAssets.Utility.LerpControlledBob::BobAmount
	float ___BobAmount_1;
	// System.Single UnityStandardAssets.Utility.LerpControlledBob::m_Offset
	float ___m_Offset_2;

public:
	inline static int32_t get_offset_of_BobDuration_0() { return static_cast<int32_t>(offsetof(LerpControlledBob_t689571109, ___BobDuration_0)); }
	inline float get_BobDuration_0() const { return ___BobDuration_0; }
	inline float* get_address_of_BobDuration_0() { return &___BobDuration_0; }
	inline void set_BobDuration_0(float value)
	{
		___BobDuration_0 = value;
	}

	inline static int32_t get_offset_of_BobAmount_1() { return static_cast<int32_t>(offsetof(LerpControlledBob_t689571109, ___BobAmount_1)); }
	inline float get_BobAmount_1() const { return ___BobAmount_1; }
	inline float* get_address_of_BobAmount_1() { return &___BobAmount_1; }
	inline void set_BobAmount_1(float value)
	{
		___BobAmount_1 = value;
	}

	inline static int32_t get_offset_of_m_Offset_2() { return static_cast<int32_t>(offsetof(LerpControlledBob_t689571109, ___m_Offset_2)); }
	inline float get_m_Offset_2() const { return ___m_Offset_2; }
	inline float* get_address_of_m_Offset_2() { return &___m_Offset_2; }
	inline void set_m_Offset_2(float value)
	{
		___m_Offset_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LERPCONTROLLEDBOB_T689571109_H
#ifndef U3CONCOLLISIONENTERU3EC__ITERATOR0_T2169992532_H
#define U3CONCOLLISIONENTERU3EC__ITERATOR0_T2169992532_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Effects.Explosive/<OnCollisionEnter>c__Iterator0
struct  U3COnCollisionEnterU3Ec__Iterator0_t2169992532  : public RuntimeObject
{
public:
	// UnityEngine.Collision UnityStandardAssets.Effects.Explosive/<OnCollisionEnter>c__Iterator0::col
	Collision_t3030915570 * ___col_0;
	// UnityStandardAssets.Effects.Explosive UnityStandardAssets.Effects.Explosive/<OnCollisionEnter>c__Iterator0::$this
	Explosive_t2953301732 * ___U24this_1;
	// System.Object UnityStandardAssets.Effects.Explosive/<OnCollisionEnter>c__Iterator0::$current
	RuntimeObject * ___U24current_2;
	// System.Boolean UnityStandardAssets.Effects.Explosive/<OnCollisionEnter>c__Iterator0::$disposing
	bool ___U24disposing_3;
	// System.Int32 UnityStandardAssets.Effects.Explosive/<OnCollisionEnter>c__Iterator0::$PC
	int32_t ___U24PC_4;

public:
	inline static int32_t get_offset_of_col_0() { return static_cast<int32_t>(offsetof(U3COnCollisionEnterU3Ec__Iterator0_t2169992532, ___col_0)); }
	inline Collision_t3030915570 * get_col_0() const { return ___col_0; }
	inline Collision_t3030915570 ** get_address_of_col_0() { return &___col_0; }
	inline void set_col_0(Collision_t3030915570 * value)
	{
		___col_0 = value;
		Il2CppCodeGenWriteBarrier((&___col_0), value);
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3COnCollisionEnterU3Ec__Iterator0_t2169992532, ___U24this_1)); }
	inline Explosive_t2953301732 * get_U24this_1() const { return ___U24this_1; }
	inline Explosive_t2953301732 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(Explosive_t2953301732 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_1), value);
	}

	inline static int32_t get_offset_of_U24current_2() { return static_cast<int32_t>(offsetof(U3COnCollisionEnterU3Ec__Iterator0_t2169992532, ___U24current_2)); }
	inline RuntimeObject * get_U24current_2() const { return ___U24current_2; }
	inline RuntimeObject ** get_address_of_U24current_2() { return &___U24current_2; }
	inline void set_U24current_2(RuntimeObject * value)
	{
		___U24current_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_2), value);
	}

	inline static int32_t get_offset_of_U24disposing_3() { return static_cast<int32_t>(offsetof(U3COnCollisionEnterU3Ec__Iterator0_t2169992532, ___U24disposing_3)); }
	inline bool get_U24disposing_3() const { return ___U24disposing_3; }
	inline bool* get_address_of_U24disposing_3() { return &___U24disposing_3; }
	inline void set_U24disposing_3(bool value)
	{
		___U24disposing_3 = value;
	}

	inline static int32_t get_offset_of_U24PC_4() { return static_cast<int32_t>(offsetof(U3COnCollisionEnterU3Ec__Iterator0_t2169992532, ___U24PC_4)); }
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
#endif // U3CONCOLLISIONENTERU3EC__ITERATOR0_T2169992532_H
#ifndef U3CDOBOBCYCLEU3EC__ITERATOR0_T4040491685_H
#define U3CDOBOBCYCLEU3EC__ITERATOR0_T4040491685_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.LerpControlledBob/<DoBobCycle>c__Iterator0
struct  U3CDoBobCycleU3Ec__Iterator0_t4040491685  : public RuntimeObject
{
public:
	// System.Single UnityStandardAssets.Utility.LerpControlledBob/<DoBobCycle>c__Iterator0::<t>__0
	float ___U3CtU3E__0_0;
	// UnityStandardAssets.Utility.LerpControlledBob UnityStandardAssets.Utility.LerpControlledBob/<DoBobCycle>c__Iterator0::$this
	LerpControlledBob_t689571109 * ___U24this_1;
	// System.Object UnityStandardAssets.Utility.LerpControlledBob/<DoBobCycle>c__Iterator0::$current
	RuntimeObject * ___U24current_2;
	// System.Boolean UnityStandardAssets.Utility.LerpControlledBob/<DoBobCycle>c__Iterator0::$disposing
	bool ___U24disposing_3;
	// System.Int32 UnityStandardAssets.Utility.LerpControlledBob/<DoBobCycle>c__Iterator0::$PC
	int32_t ___U24PC_4;

public:
	inline static int32_t get_offset_of_U3CtU3E__0_0() { return static_cast<int32_t>(offsetof(U3CDoBobCycleU3Ec__Iterator0_t4040491685, ___U3CtU3E__0_0)); }
	inline float get_U3CtU3E__0_0() const { return ___U3CtU3E__0_0; }
	inline float* get_address_of_U3CtU3E__0_0() { return &___U3CtU3E__0_0; }
	inline void set_U3CtU3E__0_0(float value)
	{
		___U3CtU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CDoBobCycleU3Ec__Iterator0_t4040491685, ___U24this_1)); }
	inline LerpControlledBob_t689571109 * get_U24this_1() const { return ___U24this_1; }
	inline LerpControlledBob_t689571109 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(LerpControlledBob_t689571109 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_1), value);
	}

	inline static int32_t get_offset_of_U24current_2() { return static_cast<int32_t>(offsetof(U3CDoBobCycleU3Ec__Iterator0_t4040491685, ___U24current_2)); }
	inline RuntimeObject * get_U24current_2() const { return ___U24current_2; }
	inline RuntimeObject ** get_address_of_U24current_2() { return &___U24current_2; }
	inline void set_U24current_2(RuntimeObject * value)
	{
		___U24current_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_2), value);
	}

	inline static int32_t get_offset_of_U24disposing_3() { return static_cast<int32_t>(offsetof(U3CDoBobCycleU3Ec__Iterator0_t4040491685, ___U24disposing_3)); }
	inline bool get_U24disposing_3() const { return ___U24disposing_3; }
	inline bool* get_address_of_U24disposing_3() { return &___U24disposing_3; }
	inline void set_U24disposing_3(bool value)
	{
		___U24disposing_3 = value;
	}

	inline static int32_t get_offset_of_U24PC_4() { return static_cast<int32_t>(offsetof(U3CDoBobCycleU3Ec__Iterator0_t4040491685, ___U24PC_4)); }
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
#endif // U3CDOBOBCYCLEU3EC__ITERATOR0_T4040491685_H
#ifndef U3CRESETCOROUTINEU3EC__ITERATOR0_T1593613527_H
#define U3CRESETCOROUTINEU3EC__ITERATOR0_T1593613527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.ObjectResetter/<ResetCoroutine>c__Iterator0
struct  U3CResetCoroutineU3Ec__Iterator0_t1593613527  : public RuntimeObject
{
public:
	// System.Single UnityStandardAssets.Utility.ObjectResetter/<ResetCoroutine>c__Iterator0::delay
	float ___delay_0;
	// UnityEngine.Transform[] UnityStandardAssets.Utility.ObjectResetter/<ResetCoroutine>c__Iterator0::$locvar0
	TransformU5BU5D_t4157687732* ___U24locvar0_1;
	// System.Int32 UnityStandardAssets.Utility.ObjectResetter/<ResetCoroutine>c__Iterator0::$locvar1
	int32_t ___U24locvar1_2;
	// UnityStandardAssets.Utility.ObjectResetter UnityStandardAssets.Utility.ObjectResetter/<ResetCoroutine>c__Iterator0::$this
	ObjectResetter_t2795484887 * ___U24this_3;
	// System.Object UnityStandardAssets.Utility.ObjectResetter/<ResetCoroutine>c__Iterator0::$current
	RuntimeObject * ___U24current_4;
	// System.Boolean UnityStandardAssets.Utility.ObjectResetter/<ResetCoroutine>c__Iterator0::$disposing
	bool ___U24disposing_5;
	// System.Int32 UnityStandardAssets.Utility.ObjectResetter/<ResetCoroutine>c__Iterator0::$PC
	int32_t ___U24PC_6;

public:
	inline static int32_t get_offset_of_delay_0() { return static_cast<int32_t>(offsetof(U3CResetCoroutineU3Ec__Iterator0_t1593613527, ___delay_0)); }
	inline float get_delay_0() const { return ___delay_0; }
	inline float* get_address_of_delay_0() { return &___delay_0; }
	inline void set_delay_0(float value)
	{
		___delay_0 = value;
	}

	inline static int32_t get_offset_of_U24locvar0_1() { return static_cast<int32_t>(offsetof(U3CResetCoroutineU3Ec__Iterator0_t1593613527, ___U24locvar0_1)); }
	inline TransformU5BU5D_t4157687732* get_U24locvar0_1() const { return ___U24locvar0_1; }
	inline TransformU5BU5D_t4157687732** get_address_of_U24locvar0_1() { return &___U24locvar0_1; }
	inline void set_U24locvar0_1(TransformU5BU5D_t4157687732* value)
	{
		___U24locvar0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24locvar0_1), value);
	}

	inline static int32_t get_offset_of_U24locvar1_2() { return static_cast<int32_t>(offsetof(U3CResetCoroutineU3Ec__Iterator0_t1593613527, ___U24locvar1_2)); }
	inline int32_t get_U24locvar1_2() const { return ___U24locvar1_2; }
	inline int32_t* get_address_of_U24locvar1_2() { return &___U24locvar1_2; }
	inline void set_U24locvar1_2(int32_t value)
	{
		___U24locvar1_2 = value;
	}

	inline static int32_t get_offset_of_U24this_3() { return static_cast<int32_t>(offsetof(U3CResetCoroutineU3Ec__Iterator0_t1593613527, ___U24this_3)); }
	inline ObjectResetter_t2795484887 * get_U24this_3() const { return ___U24this_3; }
	inline ObjectResetter_t2795484887 ** get_address_of_U24this_3() { return &___U24this_3; }
	inline void set_U24this_3(ObjectResetter_t2795484887 * value)
	{
		___U24this_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_3), value);
	}

	inline static int32_t get_offset_of_U24current_4() { return static_cast<int32_t>(offsetof(U3CResetCoroutineU3Ec__Iterator0_t1593613527, ___U24current_4)); }
	inline RuntimeObject * get_U24current_4() const { return ___U24current_4; }
	inline RuntimeObject ** get_address_of_U24current_4() { return &___U24current_4; }
	inline void set_U24current_4(RuntimeObject * value)
	{
		___U24current_4 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_4), value);
	}

	inline static int32_t get_offset_of_U24disposing_5() { return static_cast<int32_t>(offsetof(U3CResetCoroutineU3Ec__Iterator0_t1593613527, ___U24disposing_5)); }
	inline bool get_U24disposing_5() const { return ___U24disposing_5; }
	inline bool* get_address_of_U24disposing_5() { return &___U24disposing_5; }
	inline void set_U24disposing_5(bool value)
	{
		___U24disposing_5 = value;
	}

	inline static int32_t get_offset_of_U24PC_6() { return static_cast<int32_t>(offsetof(U3CResetCoroutineU3Ec__Iterator0_t1593613527, ___U24PC_6)); }
	inline int32_t get_U24PC_6() const { return ___U24PC_6; }
	inline int32_t* get_address_of_U24PC_6() { return &___U24PC_6; }
	inline void set_U24PC_6(int32_t value)
	{
		___U24PC_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CRESETCOROUTINEU3EC__ITERATOR0_T1593613527_H
#ifndef U3CSTARTU3EC__ITERATOR0_T3075476955_H
#define U3CSTARTU3EC__ITERATOR0_T3075476955_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.ParticleSystemDestroyer/<Start>c__Iterator0
struct  U3CStartU3Ec__Iterator0_t3075476955  : public RuntimeObject
{
public:
	// UnityEngine.ParticleSystem[] UnityStandardAssets.Utility.ParticleSystemDestroyer/<Start>c__Iterator0::<systems>__0
	ParticleSystemU5BU5D_t1600147907* ___U3CsystemsU3E__0_0;
	// UnityEngine.ParticleSystem[] UnityStandardAssets.Utility.ParticleSystemDestroyer/<Start>c__Iterator0::$locvar0
	ParticleSystemU5BU5D_t1600147907* ___U24locvar0_1;
	// System.Int32 UnityStandardAssets.Utility.ParticleSystemDestroyer/<Start>c__Iterator0::$locvar1
	int32_t ___U24locvar1_2;
	// System.Single UnityStandardAssets.Utility.ParticleSystemDestroyer/<Start>c__Iterator0::<stopTime>__0
	float ___U3CstopTimeU3E__0_3;
	// UnityEngine.ParticleSystem[] UnityStandardAssets.Utility.ParticleSystemDestroyer/<Start>c__Iterator0::$locvar2
	ParticleSystemU5BU5D_t1600147907* ___U24locvar2_4;
	// System.Int32 UnityStandardAssets.Utility.ParticleSystemDestroyer/<Start>c__Iterator0::$locvar3
	int32_t ___U24locvar3_5;
	// UnityStandardAssets.Utility.ParticleSystemDestroyer UnityStandardAssets.Utility.ParticleSystemDestroyer/<Start>c__Iterator0::$this
	ParticleSystemDestroyer_t1234272740 * ___U24this_6;
	// System.Object UnityStandardAssets.Utility.ParticleSystemDestroyer/<Start>c__Iterator0::$current
	RuntimeObject * ___U24current_7;
	// System.Boolean UnityStandardAssets.Utility.ParticleSystemDestroyer/<Start>c__Iterator0::$disposing
	bool ___U24disposing_8;
	// System.Int32 UnityStandardAssets.Utility.ParticleSystemDestroyer/<Start>c__Iterator0::$PC
	int32_t ___U24PC_9;

public:
	inline static int32_t get_offset_of_U3CsystemsU3E__0_0() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t3075476955, ___U3CsystemsU3E__0_0)); }
	inline ParticleSystemU5BU5D_t1600147907* get_U3CsystemsU3E__0_0() const { return ___U3CsystemsU3E__0_0; }
	inline ParticleSystemU5BU5D_t1600147907** get_address_of_U3CsystemsU3E__0_0() { return &___U3CsystemsU3E__0_0; }
	inline void set_U3CsystemsU3E__0_0(ParticleSystemU5BU5D_t1600147907* value)
	{
		___U3CsystemsU3E__0_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CsystemsU3E__0_0), value);
	}

	inline static int32_t get_offset_of_U24locvar0_1() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t3075476955, ___U24locvar0_1)); }
	inline ParticleSystemU5BU5D_t1600147907* get_U24locvar0_1() const { return ___U24locvar0_1; }
	inline ParticleSystemU5BU5D_t1600147907** get_address_of_U24locvar0_1() { return &___U24locvar0_1; }
	inline void set_U24locvar0_1(ParticleSystemU5BU5D_t1600147907* value)
	{
		___U24locvar0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24locvar0_1), value);
	}

	inline static int32_t get_offset_of_U24locvar1_2() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t3075476955, ___U24locvar1_2)); }
	inline int32_t get_U24locvar1_2() const { return ___U24locvar1_2; }
	inline int32_t* get_address_of_U24locvar1_2() { return &___U24locvar1_2; }
	inline void set_U24locvar1_2(int32_t value)
	{
		___U24locvar1_2 = value;
	}

	inline static int32_t get_offset_of_U3CstopTimeU3E__0_3() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t3075476955, ___U3CstopTimeU3E__0_3)); }
	inline float get_U3CstopTimeU3E__0_3() const { return ___U3CstopTimeU3E__0_3; }
	inline float* get_address_of_U3CstopTimeU3E__0_3() { return &___U3CstopTimeU3E__0_3; }
	inline void set_U3CstopTimeU3E__0_3(float value)
	{
		___U3CstopTimeU3E__0_3 = value;
	}

	inline static int32_t get_offset_of_U24locvar2_4() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t3075476955, ___U24locvar2_4)); }
	inline ParticleSystemU5BU5D_t1600147907* get_U24locvar2_4() const { return ___U24locvar2_4; }
	inline ParticleSystemU5BU5D_t1600147907** get_address_of_U24locvar2_4() { return &___U24locvar2_4; }
	inline void set_U24locvar2_4(ParticleSystemU5BU5D_t1600147907* value)
	{
		___U24locvar2_4 = value;
		Il2CppCodeGenWriteBarrier((&___U24locvar2_4), value);
	}

	inline static int32_t get_offset_of_U24locvar3_5() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t3075476955, ___U24locvar3_5)); }
	inline int32_t get_U24locvar3_5() const { return ___U24locvar3_5; }
	inline int32_t* get_address_of_U24locvar3_5() { return &___U24locvar3_5; }
	inline void set_U24locvar3_5(int32_t value)
	{
		___U24locvar3_5 = value;
	}

	inline static int32_t get_offset_of_U24this_6() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t3075476955, ___U24this_6)); }
	inline ParticleSystemDestroyer_t1234272740 * get_U24this_6() const { return ___U24this_6; }
	inline ParticleSystemDestroyer_t1234272740 ** get_address_of_U24this_6() { return &___U24this_6; }
	inline void set_U24this_6(ParticleSystemDestroyer_t1234272740 * value)
	{
		___U24this_6 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_6), value);
	}

	inline static int32_t get_offset_of_U24current_7() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t3075476955, ___U24current_7)); }
	inline RuntimeObject * get_U24current_7() const { return ___U24current_7; }
	inline RuntimeObject ** get_address_of_U24current_7() { return &___U24current_7; }
	inline void set_U24current_7(RuntimeObject * value)
	{
		___U24current_7 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_7), value);
	}

	inline static int32_t get_offset_of_U24disposing_8() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t3075476955, ___U24disposing_8)); }
	inline bool get_U24disposing_8() const { return ___U24disposing_8; }
	inline bool* get_address_of_U24disposing_8() { return &___U24disposing_8; }
	inline void set_U24disposing_8(bool value)
	{
		___U24disposing_8 = value;
	}

	inline static int32_t get_offset_of_U24PC_9() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t3075476955, ___U24PC_9)); }
	inline int32_t get_U24PC_9() const { return ___U24PC_9; }
	inline int32_t* get_address_of_U24PC_9() { return &___U24PC_9; }
	inline void set_U24PC_9(int32_t value)
	{
		___U24PC_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSTARTU3EC__ITERATOR0_T3075476955_H
#ifndef U3CSTARTU3EC__ITERATOR0_T2108371047_H
#define U3CSTARTU3EC__ITERATOR0_T2108371047_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Effects.ExplosionFireAndDebris/<Start>c__Iterator0
struct  U3CStartU3Ec__Iterator0_t2108371047  : public RuntimeObject
{
public:
	// System.Single UnityStandardAssets.Effects.ExplosionFireAndDebris/<Start>c__Iterator0::<multiplier>__0
	float ___U3CmultiplierU3E__0_0;
	// System.Single UnityStandardAssets.Effects.ExplosionFireAndDebris/<Start>c__Iterator0::<r>__0
	float ___U3CrU3E__0_1;
	// UnityEngine.Collider[] UnityStandardAssets.Effects.ExplosionFireAndDebris/<Start>c__Iterator0::<cols>__0
	ColliderU5BU5D_t1893034154* ___U3CcolsU3E__0_2;
	// UnityEngine.Collider[] UnityStandardAssets.Effects.ExplosionFireAndDebris/<Start>c__Iterator0::$locvar0
	ColliderU5BU5D_t1893034154* ___U24locvar0_3;
	// System.Int32 UnityStandardAssets.Effects.ExplosionFireAndDebris/<Start>c__Iterator0::$locvar1
	int32_t ___U24locvar1_4;
	// System.Single UnityStandardAssets.Effects.ExplosionFireAndDebris/<Start>c__Iterator0::<testR>__0
	float ___U3CtestRU3E__0_5;
	// UnityStandardAssets.Effects.ExplosionFireAndDebris UnityStandardAssets.Effects.ExplosionFireAndDebris/<Start>c__Iterator0::$this
	ExplosionFireAndDebris_t1948738392 * ___U24this_6;
	// System.Object UnityStandardAssets.Effects.ExplosionFireAndDebris/<Start>c__Iterator0::$current
	RuntimeObject * ___U24current_7;
	// System.Boolean UnityStandardAssets.Effects.ExplosionFireAndDebris/<Start>c__Iterator0::$disposing
	bool ___U24disposing_8;
	// System.Int32 UnityStandardAssets.Effects.ExplosionFireAndDebris/<Start>c__Iterator0::$PC
	int32_t ___U24PC_9;

public:
	inline static int32_t get_offset_of_U3CmultiplierU3E__0_0() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t2108371047, ___U3CmultiplierU3E__0_0)); }
	inline float get_U3CmultiplierU3E__0_0() const { return ___U3CmultiplierU3E__0_0; }
	inline float* get_address_of_U3CmultiplierU3E__0_0() { return &___U3CmultiplierU3E__0_0; }
	inline void set_U3CmultiplierU3E__0_0(float value)
	{
		___U3CmultiplierU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_U3CrU3E__0_1() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t2108371047, ___U3CrU3E__0_1)); }
	inline float get_U3CrU3E__0_1() const { return ___U3CrU3E__0_1; }
	inline float* get_address_of_U3CrU3E__0_1() { return &___U3CrU3E__0_1; }
	inline void set_U3CrU3E__0_1(float value)
	{
		___U3CrU3E__0_1 = value;
	}

	inline static int32_t get_offset_of_U3CcolsU3E__0_2() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t2108371047, ___U3CcolsU3E__0_2)); }
	inline ColliderU5BU5D_t1893034154* get_U3CcolsU3E__0_2() const { return ___U3CcolsU3E__0_2; }
	inline ColliderU5BU5D_t1893034154** get_address_of_U3CcolsU3E__0_2() { return &___U3CcolsU3E__0_2; }
	inline void set_U3CcolsU3E__0_2(ColliderU5BU5D_t1893034154* value)
	{
		___U3CcolsU3E__0_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CcolsU3E__0_2), value);
	}

	inline static int32_t get_offset_of_U24locvar0_3() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t2108371047, ___U24locvar0_3)); }
	inline ColliderU5BU5D_t1893034154* get_U24locvar0_3() const { return ___U24locvar0_3; }
	inline ColliderU5BU5D_t1893034154** get_address_of_U24locvar0_3() { return &___U24locvar0_3; }
	inline void set_U24locvar0_3(ColliderU5BU5D_t1893034154* value)
	{
		___U24locvar0_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24locvar0_3), value);
	}

	inline static int32_t get_offset_of_U24locvar1_4() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t2108371047, ___U24locvar1_4)); }
	inline int32_t get_U24locvar1_4() const { return ___U24locvar1_4; }
	inline int32_t* get_address_of_U24locvar1_4() { return &___U24locvar1_4; }
	inline void set_U24locvar1_4(int32_t value)
	{
		___U24locvar1_4 = value;
	}

	inline static int32_t get_offset_of_U3CtestRU3E__0_5() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t2108371047, ___U3CtestRU3E__0_5)); }
	inline float get_U3CtestRU3E__0_5() const { return ___U3CtestRU3E__0_5; }
	inline float* get_address_of_U3CtestRU3E__0_5() { return &___U3CtestRU3E__0_5; }
	inline void set_U3CtestRU3E__0_5(float value)
	{
		___U3CtestRU3E__0_5 = value;
	}

	inline static int32_t get_offset_of_U24this_6() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t2108371047, ___U24this_6)); }
	inline ExplosionFireAndDebris_t1948738392 * get_U24this_6() const { return ___U24this_6; }
	inline ExplosionFireAndDebris_t1948738392 ** get_address_of_U24this_6() { return &___U24this_6; }
	inline void set_U24this_6(ExplosionFireAndDebris_t1948738392 * value)
	{
		___U24this_6 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_6), value);
	}

	inline static int32_t get_offset_of_U24current_7() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t2108371047, ___U24current_7)); }
	inline RuntimeObject * get_U24current_7() const { return ___U24current_7; }
	inline RuntimeObject ** get_address_of_U24current_7() { return &___U24current_7; }
	inline void set_U24current_7(RuntimeObject * value)
	{
		___U24current_7 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_7), value);
	}

	inline static int32_t get_offset_of_U24disposing_8() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t2108371047, ___U24disposing_8)); }
	inline bool get_U24disposing_8() const { return ___U24disposing_8; }
	inline bool* get_address_of_U24disposing_8() { return &___U24disposing_8; }
	inline void set_U24disposing_8(bool value)
	{
		___U24disposing_8 = value;
	}

	inline static int32_t get_offset_of_U24PC_9() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t2108371047, ___U24PC_9)); }
	inline int32_t get_U24PC_9() const { return ___U24PC_9; }
	inline int32_t* get_address_of_U24PC_9() { return &___U24PC_9; }
	inline void set_U24PC_9(int32_t value)
	{
		___U24PC_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSTARTU3EC__ITERATOR0_T2108371047_H
#ifndef ENTRIES_T2705690161_H
#define ENTRIES_T2705690161_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.TimedObjectActivator/Entries
struct  Entries_t2705690161  : public RuntimeObject
{
public:
	// UnityStandardAssets.Utility.TimedObjectActivator/Entry[] UnityStandardAssets.Utility.TimedObjectActivator/Entries::entries
	EntryU5BU5D_t4116850331* ___entries_0;

public:
	inline static int32_t get_offset_of_entries_0() { return static_cast<int32_t>(offsetof(Entries_t2705690161, ___entries_0)); }
	inline EntryU5BU5D_t4116850331* get_entries_0() const { return ___entries_0; }
	inline EntryU5BU5D_t4116850331** get_address_of_entries_0() { return &___entries_0; }
	inline void set_entries_0(EntryU5BU5D_t4116850331* value)
	{
		___entries_0 = value;
		Il2CppCodeGenWriteBarrier((&___entries_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENTRIES_T2705690161_H
#ifndef U3CACTIVATEU3EC__ITERATOR0_T3997494990_H
#define U3CACTIVATEU3EC__ITERATOR0_T3997494990_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.TimedObjectActivator/<Activate>c__Iterator0
struct  U3CActivateU3Ec__Iterator0_t3997494990  : public RuntimeObject
{
public:
	// UnityStandardAssets.Utility.TimedObjectActivator/Entry UnityStandardAssets.Utility.TimedObjectActivator/<Activate>c__Iterator0::entry
	Entry_t4243516910 * ___entry_0;
	// System.Object UnityStandardAssets.Utility.TimedObjectActivator/<Activate>c__Iterator0::$current
	RuntimeObject * ___U24current_1;
	// System.Boolean UnityStandardAssets.Utility.TimedObjectActivator/<Activate>c__Iterator0::$disposing
	bool ___U24disposing_2;
	// System.Int32 UnityStandardAssets.Utility.TimedObjectActivator/<Activate>c__Iterator0::$PC
	int32_t ___U24PC_3;

public:
	inline static int32_t get_offset_of_entry_0() { return static_cast<int32_t>(offsetof(U3CActivateU3Ec__Iterator0_t3997494990, ___entry_0)); }
	inline Entry_t4243516910 * get_entry_0() const { return ___entry_0; }
	inline Entry_t4243516910 ** get_address_of_entry_0() { return &___entry_0; }
	inline void set_entry_0(Entry_t4243516910 * value)
	{
		___entry_0 = value;
		Il2CppCodeGenWriteBarrier((&___entry_0), value);
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3CActivateU3Ec__Iterator0_t3997494990, ___U24current_1)); }
	inline RuntimeObject * get_U24current_1() const { return ___U24current_1; }
	inline RuntimeObject ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(RuntimeObject * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_1), value);
	}

	inline static int32_t get_offset_of_U24disposing_2() { return static_cast<int32_t>(offsetof(U3CActivateU3Ec__Iterator0_t3997494990, ___U24disposing_2)); }
	inline bool get_U24disposing_2() const { return ___U24disposing_2; }
	inline bool* get_address_of_U24disposing_2() { return &___U24disposing_2; }
	inline void set_U24disposing_2(bool value)
	{
		___U24disposing_2 = value;
	}

	inline static int32_t get_offset_of_U24PC_3() { return static_cast<int32_t>(offsetof(U3CActivateU3Ec__Iterator0_t3997494990, ___U24PC_3)); }
	inline int32_t get_U24PC_3() const { return ___U24PC_3; }
	inline int32_t* get_address_of_U24PC_3() { return &___U24PC_3; }
	inline void set_U24PC_3(int32_t value)
	{
		___U24PC_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CACTIVATEU3EC__ITERATOR0_T3997494990_H
#ifndef U3CDEACTIVATEU3EC__ITERATOR1_T3761656096_H
#define U3CDEACTIVATEU3EC__ITERATOR1_T3761656096_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.TimedObjectActivator/<Deactivate>c__Iterator1
struct  U3CDeactivateU3Ec__Iterator1_t3761656096  : public RuntimeObject
{
public:
	// UnityStandardAssets.Utility.TimedObjectActivator/Entry UnityStandardAssets.Utility.TimedObjectActivator/<Deactivate>c__Iterator1::entry
	Entry_t4243516910 * ___entry_0;
	// System.Object UnityStandardAssets.Utility.TimedObjectActivator/<Deactivate>c__Iterator1::$current
	RuntimeObject * ___U24current_1;
	// System.Boolean UnityStandardAssets.Utility.TimedObjectActivator/<Deactivate>c__Iterator1::$disposing
	bool ___U24disposing_2;
	// System.Int32 UnityStandardAssets.Utility.TimedObjectActivator/<Deactivate>c__Iterator1::$PC
	int32_t ___U24PC_3;

public:
	inline static int32_t get_offset_of_entry_0() { return static_cast<int32_t>(offsetof(U3CDeactivateU3Ec__Iterator1_t3761656096, ___entry_0)); }
	inline Entry_t4243516910 * get_entry_0() const { return ___entry_0; }
	inline Entry_t4243516910 ** get_address_of_entry_0() { return &___entry_0; }
	inline void set_entry_0(Entry_t4243516910 * value)
	{
		___entry_0 = value;
		Il2CppCodeGenWriteBarrier((&___entry_0), value);
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3CDeactivateU3Ec__Iterator1_t3761656096, ___U24current_1)); }
	inline RuntimeObject * get_U24current_1() const { return ___U24current_1; }
	inline RuntimeObject ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(RuntimeObject * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_1), value);
	}

	inline static int32_t get_offset_of_U24disposing_2() { return static_cast<int32_t>(offsetof(U3CDeactivateU3Ec__Iterator1_t3761656096, ___U24disposing_2)); }
	inline bool get_U24disposing_2() const { return ___U24disposing_2; }
	inline bool* get_address_of_U24disposing_2() { return &___U24disposing_2; }
	inline void set_U24disposing_2(bool value)
	{
		___U24disposing_2 = value;
	}

	inline static int32_t get_offset_of_U24PC_3() { return static_cast<int32_t>(offsetof(U3CDeactivateU3Ec__Iterator1_t3761656096, ___U24PC_3)); }
	inline int32_t get_U24PC_3() const { return ___U24PC_3; }
	inline int32_t* get_address_of_U24PC_3() { return &___U24PC_3; }
	inline void set_U24PC_3(int32_t value)
	{
		___U24PC_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CDEACTIVATEU3EC__ITERATOR1_T3761656096_H
#ifndef U3CRELOADLEVELU3EC__ITERATOR2_T2208901700_H
#define U3CRELOADLEVELU3EC__ITERATOR2_T2208901700_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.TimedObjectActivator/<ReloadLevel>c__Iterator2
struct  U3CReloadLevelU3Ec__Iterator2_t2208901700  : public RuntimeObject
{
public:
	// UnityStandardAssets.Utility.TimedObjectActivator/Entry UnityStandardAssets.Utility.TimedObjectActivator/<ReloadLevel>c__Iterator2::entry
	Entry_t4243516910 * ___entry_0;
	// System.Object UnityStandardAssets.Utility.TimedObjectActivator/<ReloadLevel>c__Iterator2::$current
	RuntimeObject * ___U24current_1;
	// System.Boolean UnityStandardAssets.Utility.TimedObjectActivator/<ReloadLevel>c__Iterator2::$disposing
	bool ___U24disposing_2;
	// System.Int32 UnityStandardAssets.Utility.TimedObjectActivator/<ReloadLevel>c__Iterator2::$PC
	int32_t ___U24PC_3;

public:
	inline static int32_t get_offset_of_entry_0() { return static_cast<int32_t>(offsetof(U3CReloadLevelU3Ec__Iterator2_t2208901700, ___entry_0)); }
	inline Entry_t4243516910 * get_entry_0() const { return ___entry_0; }
	inline Entry_t4243516910 ** get_address_of_entry_0() { return &___entry_0; }
	inline void set_entry_0(Entry_t4243516910 * value)
	{
		___entry_0 = value;
		Il2CppCodeGenWriteBarrier((&___entry_0), value);
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3CReloadLevelU3Ec__Iterator2_t2208901700, ___U24current_1)); }
	inline RuntimeObject * get_U24current_1() const { return ___U24current_1; }
	inline RuntimeObject ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(RuntimeObject * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_1), value);
	}

	inline static int32_t get_offset_of_U24disposing_2() { return static_cast<int32_t>(offsetof(U3CReloadLevelU3Ec__Iterator2_t2208901700, ___U24disposing_2)); }
	inline bool get_U24disposing_2() const { return ___U24disposing_2; }
	inline bool* get_address_of_U24disposing_2() { return &___U24disposing_2; }
	inline void set_U24disposing_2(bool value)
	{
		___U24disposing_2 = value;
	}

	inline static int32_t get_offset_of_U24PC_3() { return static_cast<int32_t>(offsetof(U3CReloadLevelU3Ec__Iterator2_t2208901700, ___U24PC_3)); }
	inline int32_t get_U24PC_3() const { return ___U24PC_3; }
	inline int32_t* get_address_of_U24PC_3() { return &___U24PC_3; }
	inline void set_U24PC_3(int32_t value)
	{
		___U24PC_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CRELOADLEVELU3EC__ITERATOR2_T2208901700_H
#ifndef WAYPOINTLIST_T2504507529_H
#define WAYPOINTLIST_T2504507529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.WaypointCircuit/WaypointList
struct  WaypointList_t2504507529  : public RuntimeObject
{
public:
	// UnityStandardAssets.Utility.WaypointCircuit UnityStandardAssets.Utility.WaypointCircuit/WaypointList::circuit
	WaypointCircuit_t1307276181 * ___circuit_0;
	// UnityEngine.Transform[] UnityStandardAssets.Utility.WaypointCircuit/WaypointList::items
	TransformU5BU5D_t4157687732* ___items_1;

public:
	inline static int32_t get_offset_of_circuit_0() { return static_cast<int32_t>(offsetof(WaypointList_t2504507529, ___circuit_0)); }
	inline WaypointCircuit_t1307276181 * get_circuit_0() const { return ___circuit_0; }
	inline WaypointCircuit_t1307276181 ** get_address_of_circuit_0() { return &___circuit_0; }
	inline void set_circuit_0(WaypointCircuit_t1307276181 * value)
	{
		___circuit_0 = value;
		Il2CppCodeGenWriteBarrier((&___circuit_0), value);
	}

	inline static int32_t get_offset_of_items_1() { return static_cast<int32_t>(offsetof(WaypointList_t2504507529, ___items_1)); }
	inline TransformU5BU5D_t4157687732* get_items_1() const { return ___items_1; }
	inline TransformU5BU5D_t4157687732** get_address_of_items_1() { return &___items_1; }
	inline void set_items_1(TransformU5BU5D_t4157687732* value)
	{
		___items_1 = value;
		Il2CppCodeGenWriteBarrier((&___items_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAYPOINTLIST_T2504507529_H
#ifndef VALUETYPE_T619445755_H
#define VALUETYPE_T619445755_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t619445755  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t619445755_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t619445755_marshaled_com
{
};
#endif // VALUETYPE_T619445755_H
#ifndef REPLACEMENTLIST_T2946751215_H
#define REPLACEMENTLIST_T2946751215_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.AutoMobileShaderSwitch/ReplacementList
struct  ReplacementList_t2946751215  : public RuntimeObject
{
public:
	// UnityStandardAssets.Utility.AutoMobileShaderSwitch/ReplacementDefinition[] UnityStandardAssets.Utility.AutoMobileShaderSwitch/ReplacementList::items
	ReplacementDefinitionU5BU5D_t342615823* ___items_0;

public:
	inline static int32_t get_offset_of_items_0() { return static_cast<int32_t>(offsetof(ReplacementList_t2946751215, ___items_0)); }
	inline ReplacementDefinitionU5BU5D_t342615823* get_items_0() const { return ___items_0; }
	inline ReplacementDefinitionU5BU5D_t342615823** get_address_of_items_0() { return &___items_0; }
	inline void set_items_0(ReplacementDefinitionU5BU5D_t342615823* value)
	{
		___items_0 = value;
		Il2CppCodeGenWriteBarrier((&___items_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REPLACEMENTLIST_T2946751215_H
#ifndef REPLACEMENTDEFINITION_T1115580298_H
#define REPLACEMENTDEFINITION_T1115580298_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.AutoMobileShaderSwitch/ReplacementDefinition
struct  ReplacementDefinition_t1115580298  : public RuntimeObject
{
public:
	// UnityEngine.Shader UnityStandardAssets.Utility.AutoMobileShaderSwitch/ReplacementDefinition::original
	Shader_t2026587970 * ___original_0;
	// UnityEngine.Shader UnityStandardAssets.Utility.AutoMobileShaderSwitch/ReplacementDefinition::replacement
	Shader_t2026587970 * ___replacement_1;

public:
	inline static int32_t get_offset_of_original_0() { return static_cast<int32_t>(offsetof(ReplacementDefinition_t1115580298, ___original_0)); }
	inline Shader_t2026587970 * get_original_0() const { return ___original_0; }
	inline Shader_t2026587970 ** get_address_of_original_0() { return &___original_0; }
	inline void set_original_0(Shader_t2026587970 * value)
	{
		___original_0 = value;
		Il2CppCodeGenWriteBarrier((&___original_0), value);
	}

	inline static int32_t get_offset_of_replacement_1() { return static_cast<int32_t>(offsetof(ReplacementDefinition_t1115580298, ___replacement_1)); }
	inline Shader_t2026587970 * get_replacement_1() const { return ___replacement_1; }
	inline Shader_t2026587970 ** get_address_of_replacement_1() { return &___replacement_1; }
	inline void set_replacement_1(Shader_t2026587970 * value)
	{
		___replacement_1 = value;
		Il2CppCodeGenWriteBarrier((&___replacement_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REPLACEMENTDEFINITION_T1115580298_H
#ifndef ENUM_T3408055387_H
#define ENUM_T3408055387_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t3408055387  : public ValueType_t619445755
{
public:

public:
};

struct Enum_t3408055387_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t2331269993* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t3408055387_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t2331269993* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t2331269993** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t2331269993* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t3408055387_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t3408055387_marshaled_com
{
};
#endif // ENUM_T3408055387_H
#ifndef VECTOR3_T868553430_H
#define VECTOR3_T868553430_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t868553430 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t868553430, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t868553430, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t868553430, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t868553430_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t868553430  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t868553430  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t868553430  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t868553430  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t868553430  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t868553430  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t868553430  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t868553430  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t868553430  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t868553430  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t868553430_StaticFields, ___zeroVector_4)); }
	inline Vector3_t868553430  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t868553430 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t868553430  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t868553430_StaticFields, ___oneVector_5)); }
	inline Vector3_t868553430  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t868553430 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t868553430  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t868553430_StaticFields, ___upVector_6)); }
	inline Vector3_t868553430  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t868553430 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t868553430  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t868553430_StaticFields, ___downVector_7)); }
	inline Vector3_t868553430  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t868553430 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t868553430  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t868553430_StaticFields, ___leftVector_8)); }
	inline Vector3_t868553430  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t868553430 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t868553430  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t868553430_StaticFields, ___rightVector_9)); }
	inline Vector3_t868553430  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t868553430 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t868553430  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t868553430_StaticFields, ___forwardVector_10)); }
	inline Vector3_t868553430  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t868553430 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t868553430  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t868553430_StaticFields, ___backVector_11)); }
	inline Vector3_t868553430  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t868553430 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t868553430  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t868553430_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t868553430  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t868553430 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t868553430  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t868553430_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t868553430  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t868553430 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t868553430  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T868553430_H
#ifndef VECTOR2_T2603427790_H
#define VECTOR2_T2603427790_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2603427790 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2603427790, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2603427790, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2603427790_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2603427790  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2603427790  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2603427790  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2603427790  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2603427790  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2603427790  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2603427790  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2603427790  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2603427790_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2603427790  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2603427790 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2603427790  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2603427790_StaticFields, ___oneVector_3)); }
	inline Vector2_t2603427790  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2603427790 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2603427790  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2603427790_StaticFields, ___upVector_4)); }
	inline Vector2_t2603427790  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2603427790 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2603427790  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2603427790_StaticFields, ___downVector_5)); }
	inline Vector2_t2603427790  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2603427790 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2603427790  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2603427790_StaticFields, ___leftVector_6)); }
	inline Vector2_t2603427790  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2603427790 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2603427790  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2603427790_StaticFields, ___rightVector_7)); }
	inline Vector2_t2603427790  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2603427790 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2603427790  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2603427790_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2603427790  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2603427790 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2603427790  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2603427790_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2603427790  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2603427790 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2603427790  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2603427790_H
#ifndef ENUMERATOR_T873094169_H
#define ENUMERATOR_T873094169_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<UnityEngine.Rigidbody>
struct  Enumerator_t873094169 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t28089895 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Rigidbody_t165260282 * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t873094169, ___l_0)); }
	inline List_1_t28089895 * get_l_0() const { return ___l_0; }
	inline List_1_t28089895 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t28089895 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t873094169, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t873094169, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t873094169, ___current_3)); }
	inline Rigidbody_t165260282 * get_current_3() const { return ___current_3; }
	inline Rigidbody_t165260282 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Rigidbody_t165260282 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T873094169_H
#ifndef QUATERNION_T2915231121_H
#define QUATERNION_T2915231121_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t2915231121 
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
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t2915231121, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t2915231121, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t2915231121, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t2915231121, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t2915231121_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t2915231121  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t2915231121_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t2915231121  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t2915231121 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t2915231121  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T2915231121_H
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
#ifndef OBJECT_T497070861_H
#define OBJECT_T497070861_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t497070861  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t497070861, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t497070861_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t497070861_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
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
struct Object_t497070861_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t497070861_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T497070861_H
#ifndef VIRTUALINPUT_T2373776969_H
#define VIRTUALINPUT_T2373776969_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CrossPlatformInput.VirtualInput
struct  VirtualInput_t2373776969  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.VirtualInput::<virtualMousePosition>k__BackingField
	Vector3_t868553430  ___U3CvirtualMousePositionU3Ek__BackingField_0;
	// System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis> UnityStandardAssets.CrossPlatformInput.VirtualInput::m_VirtualAxes
	Dictionary_2_t1622394899 * ___m_VirtualAxes_1;
	// System.Collections.Generic.Dictionary`2<System.String,UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualButton> UnityStandardAssets.CrossPlatformInput.VirtualInput::m_VirtualButtons
	Dictionary_2_t2212279658 * ___m_VirtualButtons_2;
	// System.Collections.Generic.List`1<System.String> UnityStandardAssets.CrossPlatformInput.VirtualInput::m_AlwaysUseVirtual
	List_1_t2352929133 * ___m_AlwaysUseVirtual_3;

public:
	inline static int32_t get_offset_of_U3CvirtualMousePositionU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(VirtualInput_t2373776969, ___U3CvirtualMousePositionU3Ek__BackingField_0)); }
	inline Vector3_t868553430  get_U3CvirtualMousePositionU3Ek__BackingField_0() const { return ___U3CvirtualMousePositionU3Ek__BackingField_0; }
	inline Vector3_t868553430 * get_address_of_U3CvirtualMousePositionU3Ek__BackingField_0() { return &___U3CvirtualMousePositionU3Ek__BackingField_0; }
	inline void set_U3CvirtualMousePositionU3Ek__BackingField_0(Vector3_t868553430  value)
	{
		___U3CvirtualMousePositionU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_m_VirtualAxes_1() { return static_cast<int32_t>(offsetof(VirtualInput_t2373776969, ___m_VirtualAxes_1)); }
	inline Dictionary_2_t1622394899 * get_m_VirtualAxes_1() const { return ___m_VirtualAxes_1; }
	inline Dictionary_2_t1622394899 ** get_address_of_m_VirtualAxes_1() { return &___m_VirtualAxes_1; }
	inline void set_m_VirtualAxes_1(Dictionary_2_t1622394899 * value)
	{
		___m_VirtualAxes_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_VirtualAxes_1), value);
	}

	inline static int32_t get_offset_of_m_VirtualButtons_2() { return static_cast<int32_t>(offsetof(VirtualInput_t2373776969, ___m_VirtualButtons_2)); }
	inline Dictionary_2_t2212279658 * get_m_VirtualButtons_2() const { return ___m_VirtualButtons_2; }
	inline Dictionary_2_t2212279658 ** get_address_of_m_VirtualButtons_2() { return &___m_VirtualButtons_2; }
	inline void set_m_VirtualButtons_2(Dictionary_2_t2212279658 * value)
	{
		___m_VirtualButtons_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_VirtualButtons_2), value);
	}

	inline static int32_t get_offset_of_m_AlwaysUseVirtual_3() { return static_cast<int32_t>(offsetof(VirtualInput_t2373776969, ___m_AlwaysUseVirtual_3)); }
	inline List_1_t2352929133 * get_m_AlwaysUseVirtual_3() const { return ___m_AlwaysUseVirtual_3; }
	inline List_1_t2352929133 ** get_address_of_m_AlwaysUseVirtual_3() { return &___m_AlwaysUseVirtual_3; }
	inline void set_m_AlwaysUseVirtual_3(List_1_t2352929133 * value)
	{
		___m_AlwaysUseVirtual_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_AlwaysUseVirtual_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIRTUALINPUT_T2373776969_H
#ifndef BUILDTARGETGROUP_T4252953516_H
#define BUILDTARGETGROUP_T4252953516_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.PlatformSpecificContent/BuildTargetGroup
struct  BuildTargetGroup_t4252953516 
{
public:
	// System.Int32 UnityStandardAssets.Utility.PlatformSpecificContent/BuildTargetGroup::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BuildTargetGroup_t4252953516, ___value___1)); }
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
#endif // BUILDTARGETGROUP_T4252953516_H
#ifndef CONTROLSTYLE_T1286057910_H
#define CONTROLSTYLE_T1286057910_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CrossPlatformInput.TouchPad/ControlStyle
struct  ControlStyle_t1286057910 
{
public:
	// System.Int32 UnityStandardAssets.CrossPlatformInput.TouchPad/ControlStyle::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ControlStyle_t1286057910, ___value___1)); }
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
#endif // CONTROLSTYLE_T1286057910_H
#ifndef U3CSTARTU3EC__ITERATOR0_T2837328927_H
#define U3CSTARTU3EC__ITERATOR0_T2837328927_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Effects.ExplosionPhysicsForce/<Start>c__Iterator0
struct  U3CStartU3Ec__Iterator0_t2837328927  : public RuntimeObject
{
public:
	// System.Single UnityStandardAssets.Effects.ExplosionPhysicsForce/<Start>c__Iterator0::<multiplier>__0
	float ___U3CmultiplierU3E__0_0;
	// System.Single UnityStandardAssets.Effects.ExplosionPhysicsForce/<Start>c__Iterator0::<r>__0
	float ___U3CrU3E__0_1;
	// UnityEngine.Collider[] UnityStandardAssets.Effects.ExplosionPhysicsForce/<Start>c__Iterator0::<cols>__0
	ColliderU5BU5D_t1893034154* ___U3CcolsU3E__0_2;
	// System.Collections.Generic.List`1<UnityEngine.Rigidbody> UnityStandardAssets.Effects.ExplosionPhysicsForce/<Start>c__Iterator0::<rigidbodies>__0
	List_1_t28089895 * ___U3CrigidbodiesU3E__0_3;
	// UnityEngine.Collider[] UnityStandardAssets.Effects.ExplosionPhysicsForce/<Start>c__Iterator0::$locvar0
	ColliderU5BU5D_t1893034154* ___U24locvar0_4;
	// System.Int32 UnityStandardAssets.Effects.ExplosionPhysicsForce/<Start>c__Iterator0::$locvar1
	int32_t ___U24locvar1_5;
	// System.Collections.Generic.List`1/Enumerator<UnityEngine.Rigidbody> UnityStandardAssets.Effects.ExplosionPhysicsForce/<Start>c__Iterator0::$locvar2
	Enumerator_t873094169  ___U24locvar2_6;
	// UnityStandardAssets.Effects.ExplosionPhysicsForce UnityStandardAssets.Effects.ExplosionPhysicsForce/<Start>c__Iterator0::$this
	ExplosionPhysicsForce_t1523072557 * ___U24this_7;
	// System.Object UnityStandardAssets.Effects.ExplosionPhysicsForce/<Start>c__Iterator0::$current
	RuntimeObject * ___U24current_8;
	// System.Boolean UnityStandardAssets.Effects.ExplosionPhysicsForce/<Start>c__Iterator0::$disposing
	bool ___U24disposing_9;
	// System.Int32 UnityStandardAssets.Effects.ExplosionPhysicsForce/<Start>c__Iterator0::$PC
	int32_t ___U24PC_10;

public:
	inline static int32_t get_offset_of_U3CmultiplierU3E__0_0() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t2837328927, ___U3CmultiplierU3E__0_0)); }
	inline float get_U3CmultiplierU3E__0_0() const { return ___U3CmultiplierU3E__0_0; }
	inline float* get_address_of_U3CmultiplierU3E__0_0() { return &___U3CmultiplierU3E__0_0; }
	inline void set_U3CmultiplierU3E__0_0(float value)
	{
		___U3CmultiplierU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_U3CrU3E__0_1() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t2837328927, ___U3CrU3E__0_1)); }
	inline float get_U3CrU3E__0_1() const { return ___U3CrU3E__0_1; }
	inline float* get_address_of_U3CrU3E__0_1() { return &___U3CrU3E__0_1; }
	inline void set_U3CrU3E__0_1(float value)
	{
		___U3CrU3E__0_1 = value;
	}

	inline static int32_t get_offset_of_U3CcolsU3E__0_2() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t2837328927, ___U3CcolsU3E__0_2)); }
	inline ColliderU5BU5D_t1893034154* get_U3CcolsU3E__0_2() const { return ___U3CcolsU3E__0_2; }
	inline ColliderU5BU5D_t1893034154** get_address_of_U3CcolsU3E__0_2() { return &___U3CcolsU3E__0_2; }
	inline void set_U3CcolsU3E__0_2(ColliderU5BU5D_t1893034154* value)
	{
		___U3CcolsU3E__0_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CcolsU3E__0_2), value);
	}

	inline static int32_t get_offset_of_U3CrigidbodiesU3E__0_3() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t2837328927, ___U3CrigidbodiesU3E__0_3)); }
	inline List_1_t28089895 * get_U3CrigidbodiesU3E__0_3() const { return ___U3CrigidbodiesU3E__0_3; }
	inline List_1_t28089895 ** get_address_of_U3CrigidbodiesU3E__0_3() { return &___U3CrigidbodiesU3E__0_3; }
	inline void set_U3CrigidbodiesU3E__0_3(List_1_t28089895 * value)
	{
		___U3CrigidbodiesU3E__0_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CrigidbodiesU3E__0_3), value);
	}

	inline static int32_t get_offset_of_U24locvar0_4() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t2837328927, ___U24locvar0_4)); }
	inline ColliderU5BU5D_t1893034154* get_U24locvar0_4() const { return ___U24locvar0_4; }
	inline ColliderU5BU5D_t1893034154** get_address_of_U24locvar0_4() { return &___U24locvar0_4; }
	inline void set_U24locvar0_4(ColliderU5BU5D_t1893034154* value)
	{
		___U24locvar0_4 = value;
		Il2CppCodeGenWriteBarrier((&___U24locvar0_4), value);
	}

	inline static int32_t get_offset_of_U24locvar1_5() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t2837328927, ___U24locvar1_5)); }
	inline int32_t get_U24locvar1_5() const { return ___U24locvar1_5; }
	inline int32_t* get_address_of_U24locvar1_5() { return &___U24locvar1_5; }
	inline void set_U24locvar1_5(int32_t value)
	{
		___U24locvar1_5 = value;
	}

	inline static int32_t get_offset_of_U24locvar2_6() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t2837328927, ___U24locvar2_6)); }
	inline Enumerator_t873094169  get_U24locvar2_6() const { return ___U24locvar2_6; }
	inline Enumerator_t873094169 * get_address_of_U24locvar2_6() { return &___U24locvar2_6; }
	inline void set_U24locvar2_6(Enumerator_t873094169  value)
	{
		___U24locvar2_6 = value;
	}

	inline static int32_t get_offset_of_U24this_7() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t2837328927, ___U24this_7)); }
	inline ExplosionPhysicsForce_t1523072557 * get_U24this_7() const { return ___U24this_7; }
	inline ExplosionPhysicsForce_t1523072557 ** get_address_of_U24this_7() { return &___U24this_7; }
	inline void set_U24this_7(ExplosionPhysicsForce_t1523072557 * value)
	{
		___U24this_7 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_7), value);
	}

	inline static int32_t get_offset_of_U24current_8() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t2837328927, ___U24current_8)); }
	inline RuntimeObject * get_U24current_8() const { return ___U24current_8; }
	inline RuntimeObject ** get_address_of_U24current_8() { return &___U24current_8; }
	inline void set_U24current_8(RuntimeObject * value)
	{
		___U24current_8 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_8), value);
	}

	inline static int32_t get_offset_of_U24disposing_9() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t2837328927, ___U24disposing_9)); }
	inline bool get_U24disposing_9() const { return ___U24disposing_9; }
	inline bool* get_address_of_U24disposing_9() { return &___U24disposing_9; }
	inline void set_U24disposing_9(bool value)
	{
		___U24disposing_9 = value;
	}

	inline static int32_t get_offset_of_U24PC_10() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator0_t2837328927, ___U24PC_10)); }
	inline int32_t get_U24PC_10() const { return ___U24PC_10; }
	inline int32_t* get_address_of_U24PC_10() { return &___U24PC_10; }
	inline void set_U24PC_10(int32_t value)
	{
		___U24PC_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSTARTU3EC__ITERATOR0_T2837328927_H
#ifndef AXISOPTION_T772707881_H
#define AXISOPTION_T772707881_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CrossPlatformInput.TouchPad/AxisOption
struct  AxisOption_t772707881 
{
public:
	// System.Int32 UnityStandardAssets.CrossPlatformInput.TouchPad/AxisOption::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AxisOption_t772707881, ___value___1)); }
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
#endif // AXISOPTION_T772707881_H
#ifndef ROUTEPOINT_T2655024850_H
#define ROUTEPOINT_T2655024850_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.WaypointCircuit/RoutePoint
struct  RoutePoint_t2655024850 
{
public:
	// UnityEngine.Vector3 UnityStandardAssets.Utility.WaypointCircuit/RoutePoint::position
	Vector3_t868553430  ___position_0;
	// UnityEngine.Vector3 UnityStandardAssets.Utility.WaypointCircuit/RoutePoint::direction
	Vector3_t868553430  ___direction_1;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(RoutePoint_t2655024850, ___position_0)); }
	inline Vector3_t868553430  get_position_0() const { return ___position_0; }
	inline Vector3_t868553430 * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t868553430  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_direction_1() { return static_cast<int32_t>(offsetof(RoutePoint_t2655024850, ___direction_1)); }
	inline Vector3_t868553430  get_direction_1() const { return ___direction_1; }
	inline Vector3_t868553430 * get_address_of_direction_1() { return &___direction_1; }
	inline void set_direction_1(Vector3_t868553430  value)
	{
		___direction_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ROUTEPOINT_T2655024850_H
#ifndef PROGRESSSTYLE_T2960236528_H
#define PROGRESSSTYLE_T2960236528_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.WaypointProgressTracker/ProgressStyle
struct  ProgressStyle_t2960236528 
{
public:
	// System.Int32 UnityStandardAssets.Utility.WaypointProgressTracker/ProgressStyle::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ProgressStyle_t2960236528, ___value___1)); }
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
#endif // PROGRESSSTYLE_T2960236528_H
#ifndef MAPPINGTYPE_T2060130504_H
#define MAPPINGTYPE_T2060130504_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CrossPlatformInput.TiltInput/AxisMapping/MappingType
struct  MappingType_t2060130504 
{
public:
	// System.Int32 UnityStandardAssets.CrossPlatformInput.TiltInput/AxisMapping/MappingType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MappingType_t2060130504, ___value___1)); }
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
#endif // MAPPINGTYPE_T2060130504_H
#ifndef AXISOPTIONS_T450802185_H
#define AXISOPTIONS_T450802185_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CrossPlatformInput.TiltInput/AxisOptions
struct  AxisOptions_t450802185 
{
public:
	// System.Int32 UnityStandardAssets.CrossPlatformInput.TiltInput/AxisOptions::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AxisOptions_t450802185, ___value___1)); }
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
#endif // AXISOPTIONS_T450802185_H
#ifndef ACTION_T1205555412_H
#define ACTION_T1205555412_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.TimedObjectActivator/Action
struct  Action_t1205555412 
{
public:
	// System.Int32 UnityStandardAssets.Utility.TimedObjectActivator/Action::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Action_t1205555412, ___value___1)); }
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
#endif // ACTION_T1205555412_H
#ifndef RAY_T2276421925_H
#define RAY_T2276421925_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Ray
struct  Ray_t2276421925 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t868553430  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t868553430  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_t2276421925, ___m_Origin_0)); }
	inline Vector3_t868553430  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_t868553430 * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_t868553430  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_t2276421925, ___m_Direction_1)); }
	inline Vector3_t868553430  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_t868553430 * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_t868553430  value)
	{
		___m_Direction_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAY_T2276421925_H
#ifndef MODE_T4004529814_H
#define MODE_T4004529814_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.ActivateTrigger/Mode
struct  Mode_t4004529814 
{
public:
	// System.Int32 UnityStandardAssets.Utility.ActivateTrigger/Mode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Mode_t4004529814, ___value___1)); }
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
#endif // MODE_T4004529814_H
#ifndef CURVECONTROLLEDBOB_T1520511192_H
#define CURVECONTROLLEDBOB_T1520511192_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.CurveControlledBob
struct  CurveControlledBob_t1520511192  : public RuntimeObject
{
public:
	// System.Single UnityStandardAssets.Utility.CurveControlledBob::HorizontalBobRange
	float ___HorizontalBobRange_0;
	// System.Single UnityStandardAssets.Utility.CurveControlledBob::VerticalBobRange
	float ___VerticalBobRange_1;
	// UnityEngine.AnimationCurve UnityStandardAssets.Utility.CurveControlledBob::Bobcurve
	AnimationCurve_t1604945997 * ___Bobcurve_2;
	// System.Single UnityStandardAssets.Utility.CurveControlledBob::VerticaltoHorizontalRatio
	float ___VerticaltoHorizontalRatio_3;
	// System.Single UnityStandardAssets.Utility.CurveControlledBob::m_CyclePositionX
	float ___m_CyclePositionX_4;
	// System.Single UnityStandardAssets.Utility.CurveControlledBob::m_CyclePositionY
	float ___m_CyclePositionY_5;
	// System.Single UnityStandardAssets.Utility.CurveControlledBob::m_BobBaseInterval
	float ___m_BobBaseInterval_6;
	// UnityEngine.Vector3 UnityStandardAssets.Utility.CurveControlledBob::m_OriginalCameraPosition
	Vector3_t868553430  ___m_OriginalCameraPosition_7;
	// System.Single UnityStandardAssets.Utility.CurveControlledBob::m_Time
	float ___m_Time_8;

public:
	inline static int32_t get_offset_of_HorizontalBobRange_0() { return static_cast<int32_t>(offsetof(CurveControlledBob_t1520511192, ___HorizontalBobRange_0)); }
	inline float get_HorizontalBobRange_0() const { return ___HorizontalBobRange_0; }
	inline float* get_address_of_HorizontalBobRange_0() { return &___HorizontalBobRange_0; }
	inline void set_HorizontalBobRange_0(float value)
	{
		___HorizontalBobRange_0 = value;
	}

	inline static int32_t get_offset_of_VerticalBobRange_1() { return static_cast<int32_t>(offsetof(CurveControlledBob_t1520511192, ___VerticalBobRange_1)); }
	inline float get_VerticalBobRange_1() const { return ___VerticalBobRange_1; }
	inline float* get_address_of_VerticalBobRange_1() { return &___VerticalBobRange_1; }
	inline void set_VerticalBobRange_1(float value)
	{
		___VerticalBobRange_1 = value;
	}

	inline static int32_t get_offset_of_Bobcurve_2() { return static_cast<int32_t>(offsetof(CurveControlledBob_t1520511192, ___Bobcurve_2)); }
	inline AnimationCurve_t1604945997 * get_Bobcurve_2() const { return ___Bobcurve_2; }
	inline AnimationCurve_t1604945997 ** get_address_of_Bobcurve_2() { return &___Bobcurve_2; }
	inline void set_Bobcurve_2(AnimationCurve_t1604945997 * value)
	{
		___Bobcurve_2 = value;
		Il2CppCodeGenWriteBarrier((&___Bobcurve_2), value);
	}

	inline static int32_t get_offset_of_VerticaltoHorizontalRatio_3() { return static_cast<int32_t>(offsetof(CurveControlledBob_t1520511192, ___VerticaltoHorizontalRatio_3)); }
	inline float get_VerticaltoHorizontalRatio_3() const { return ___VerticaltoHorizontalRatio_3; }
	inline float* get_address_of_VerticaltoHorizontalRatio_3() { return &___VerticaltoHorizontalRatio_3; }
	inline void set_VerticaltoHorizontalRatio_3(float value)
	{
		___VerticaltoHorizontalRatio_3 = value;
	}

	inline static int32_t get_offset_of_m_CyclePositionX_4() { return static_cast<int32_t>(offsetof(CurveControlledBob_t1520511192, ___m_CyclePositionX_4)); }
	inline float get_m_CyclePositionX_4() const { return ___m_CyclePositionX_4; }
	inline float* get_address_of_m_CyclePositionX_4() { return &___m_CyclePositionX_4; }
	inline void set_m_CyclePositionX_4(float value)
	{
		___m_CyclePositionX_4 = value;
	}

	inline static int32_t get_offset_of_m_CyclePositionY_5() { return static_cast<int32_t>(offsetof(CurveControlledBob_t1520511192, ___m_CyclePositionY_5)); }
	inline float get_m_CyclePositionY_5() const { return ___m_CyclePositionY_5; }
	inline float* get_address_of_m_CyclePositionY_5() { return &___m_CyclePositionY_5; }
	inline void set_m_CyclePositionY_5(float value)
	{
		___m_CyclePositionY_5 = value;
	}

	inline static int32_t get_offset_of_m_BobBaseInterval_6() { return static_cast<int32_t>(offsetof(CurveControlledBob_t1520511192, ___m_BobBaseInterval_6)); }
	inline float get_m_BobBaseInterval_6() const { return ___m_BobBaseInterval_6; }
	inline float* get_address_of_m_BobBaseInterval_6() { return &___m_BobBaseInterval_6; }
	inline void set_m_BobBaseInterval_6(float value)
	{
		___m_BobBaseInterval_6 = value;
	}

	inline static int32_t get_offset_of_m_OriginalCameraPosition_7() { return static_cast<int32_t>(offsetof(CurveControlledBob_t1520511192, ___m_OriginalCameraPosition_7)); }
	inline Vector3_t868553430  get_m_OriginalCameraPosition_7() const { return ___m_OriginalCameraPosition_7; }
	inline Vector3_t868553430 * get_address_of_m_OriginalCameraPosition_7() { return &___m_OriginalCameraPosition_7; }
	inline void set_m_OriginalCameraPosition_7(Vector3_t868553430  value)
	{
		___m_OriginalCameraPosition_7 = value;
	}

	inline static int32_t get_offset_of_m_Time_8() { return static_cast<int32_t>(offsetof(CurveControlledBob_t1520511192, ___m_Time_8)); }
	inline float get_m_Time_8() const { return ___m_Time_8; }
	inline float* get_address_of_m_Time_8() { return &___m_Time_8; }
	inline void set_m_Time_8(float value)
	{
		___m_Time_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CURVECONTROLLEDBOB_T1520511192_H
#ifndef CAMERAREFOCUS_T1559601748_H
#define CAMERAREFOCUS_T1559601748_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.CameraRefocus
struct  CameraRefocus_t1559601748  : public RuntimeObject
{
public:
	// UnityEngine.Camera UnityStandardAssets.Utility.CameraRefocus::Camera
	Camera_t3466010632 * ___Camera_0;
	// UnityEngine.Vector3 UnityStandardAssets.Utility.CameraRefocus::Lookatpoint
	Vector3_t868553430  ___Lookatpoint_1;
	// UnityEngine.Transform UnityStandardAssets.Utility.CameraRefocus::Parent
	Transform_t2055145993 * ___Parent_2;
	// UnityEngine.Vector3 UnityStandardAssets.Utility.CameraRefocus::m_OrigCameraPos
	Vector3_t868553430  ___m_OrigCameraPos_3;
	// System.Boolean UnityStandardAssets.Utility.CameraRefocus::m_Refocus
	bool ___m_Refocus_4;

public:
	inline static int32_t get_offset_of_Camera_0() { return static_cast<int32_t>(offsetof(CameraRefocus_t1559601748, ___Camera_0)); }
	inline Camera_t3466010632 * get_Camera_0() const { return ___Camera_0; }
	inline Camera_t3466010632 ** get_address_of_Camera_0() { return &___Camera_0; }
	inline void set_Camera_0(Camera_t3466010632 * value)
	{
		___Camera_0 = value;
		Il2CppCodeGenWriteBarrier((&___Camera_0), value);
	}

	inline static int32_t get_offset_of_Lookatpoint_1() { return static_cast<int32_t>(offsetof(CameraRefocus_t1559601748, ___Lookatpoint_1)); }
	inline Vector3_t868553430  get_Lookatpoint_1() const { return ___Lookatpoint_1; }
	inline Vector3_t868553430 * get_address_of_Lookatpoint_1() { return &___Lookatpoint_1; }
	inline void set_Lookatpoint_1(Vector3_t868553430  value)
	{
		___Lookatpoint_1 = value;
	}

	inline static int32_t get_offset_of_Parent_2() { return static_cast<int32_t>(offsetof(CameraRefocus_t1559601748, ___Parent_2)); }
	inline Transform_t2055145993 * get_Parent_2() const { return ___Parent_2; }
	inline Transform_t2055145993 ** get_address_of_Parent_2() { return &___Parent_2; }
	inline void set_Parent_2(Transform_t2055145993 * value)
	{
		___Parent_2 = value;
		Il2CppCodeGenWriteBarrier((&___Parent_2), value);
	}

	inline static int32_t get_offset_of_m_OrigCameraPos_3() { return static_cast<int32_t>(offsetof(CameraRefocus_t1559601748, ___m_OrigCameraPos_3)); }
	inline Vector3_t868553430  get_m_OrigCameraPos_3() const { return ___m_OrigCameraPos_3; }
	inline Vector3_t868553430 * get_address_of_m_OrigCameraPos_3() { return &___m_OrigCameraPos_3; }
	inline void set_m_OrigCameraPos_3(Vector3_t868553430  value)
	{
		___m_OrigCameraPos_3 = value;
	}

	inline static int32_t get_offset_of_m_Refocus_4() { return static_cast<int32_t>(offsetof(CameraRefocus_t1559601748, ___m_Refocus_4)); }
	inline bool get_m_Refocus_4() const { return ___m_Refocus_4; }
	inline bool* get_address_of_m_Refocus_4() { return &___m_Refocus_4; }
	inline void set_m_Refocus_4(bool value)
	{
		___m_Refocus_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERAREFOCUS_T1559601748_H
#ifndef SPACE_T2115081352_H
#define SPACE_T2115081352_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Space
struct  Space_t2115081352 
{
public:
	// System.Int32 UnityEngine.Space::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Space_t2115081352, ___value___1)); }
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
#endif // SPACE_T2115081352_H
#ifndef COMPONENT_T1938462780_H
#define COMPONENT_T1938462780_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1938462780  : public Object_t497070861
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1938462780_H
#ifndef MOBILEINPUT_T730692892_H
#define MOBILEINPUT_T730692892_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CrossPlatformInput.PlatformSpecific.MobileInput
struct  MobileInput_t730692892  : public VirtualInput_t2373776969
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MOBILEINPUT_T730692892_H
#ifndef STANDALONEINPUT_T3411235174_H
#define STANDALONEINPUT_T3411235174_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CrossPlatformInput.PlatformSpecific.StandaloneInput
struct  StandaloneInput_t3411235174  : public VirtualInput_t2373776969
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STANDALONEINPUT_T3411235174_H
#ifndef U3CDRAGOBJECTU3EC__ITERATOR0_T3717782834_H
#define U3CDRAGOBJECTU3EC__ITERATOR0_T3717782834_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.DragRigidbody/<DragObject>c__Iterator0
struct  U3CDragObjectU3Ec__Iterator0_t3717782834  : public RuntimeObject
{
public:
	// System.Single UnityStandardAssets.Utility.DragRigidbody/<DragObject>c__Iterator0::<oldDrag>__0
	float ___U3ColdDragU3E__0_0;
	// System.Single UnityStandardAssets.Utility.DragRigidbody/<DragObject>c__Iterator0::<oldAngularDrag>__0
	float ___U3ColdAngularDragU3E__0_1;
	// UnityEngine.Camera UnityStandardAssets.Utility.DragRigidbody/<DragObject>c__Iterator0::<mainCamera>__0
	Camera_t3466010632 * ___U3CmainCameraU3E__0_2;
	// UnityEngine.Ray UnityStandardAssets.Utility.DragRigidbody/<DragObject>c__Iterator0::<ray>__1
	Ray_t2276421925  ___U3CrayU3E__1_3;
	// System.Single UnityStandardAssets.Utility.DragRigidbody/<DragObject>c__Iterator0::distance
	float ___distance_4;
	// UnityStandardAssets.Utility.DragRigidbody UnityStandardAssets.Utility.DragRigidbody/<DragObject>c__Iterator0::$this
	DragRigidbody_t888283494 * ___U24this_5;
	// System.Object UnityStandardAssets.Utility.DragRigidbody/<DragObject>c__Iterator0::$current
	RuntimeObject * ___U24current_6;
	// System.Boolean UnityStandardAssets.Utility.DragRigidbody/<DragObject>c__Iterator0::$disposing
	bool ___U24disposing_7;
	// System.Int32 UnityStandardAssets.Utility.DragRigidbody/<DragObject>c__Iterator0::$PC
	int32_t ___U24PC_8;

public:
	inline static int32_t get_offset_of_U3ColdDragU3E__0_0() { return static_cast<int32_t>(offsetof(U3CDragObjectU3Ec__Iterator0_t3717782834, ___U3ColdDragU3E__0_0)); }
	inline float get_U3ColdDragU3E__0_0() const { return ___U3ColdDragU3E__0_0; }
	inline float* get_address_of_U3ColdDragU3E__0_0() { return &___U3ColdDragU3E__0_0; }
	inline void set_U3ColdDragU3E__0_0(float value)
	{
		___U3ColdDragU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_U3ColdAngularDragU3E__0_1() { return static_cast<int32_t>(offsetof(U3CDragObjectU3Ec__Iterator0_t3717782834, ___U3ColdAngularDragU3E__0_1)); }
	inline float get_U3ColdAngularDragU3E__0_1() const { return ___U3ColdAngularDragU3E__0_1; }
	inline float* get_address_of_U3ColdAngularDragU3E__0_1() { return &___U3ColdAngularDragU3E__0_1; }
	inline void set_U3ColdAngularDragU3E__0_1(float value)
	{
		___U3ColdAngularDragU3E__0_1 = value;
	}

	inline static int32_t get_offset_of_U3CmainCameraU3E__0_2() { return static_cast<int32_t>(offsetof(U3CDragObjectU3Ec__Iterator0_t3717782834, ___U3CmainCameraU3E__0_2)); }
	inline Camera_t3466010632 * get_U3CmainCameraU3E__0_2() const { return ___U3CmainCameraU3E__0_2; }
	inline Camera_t3466010632 ** get_address_of_U3CmainCameraU3E__0_2() { return &___U3CmainCameraU3E__0_2; }
	inline void set_U3CmainCameraU3E__0_2(Camera_t3466010632 * value)
	{
		___U3CmainCameraU3E__0_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CmainCameraU3E__0_2), value);
	}

	inline static int32_t get_offset_of_U3CrayU3E__1_3() { return static_cast<int32_t>(offsetof(U3CDragObjectU3Ec__Iterator0_t3717782834, ___U3CrayU3E__1_3)); }
	inline Ray_t2276421925  get_U3CrayU3E__1_3() const { return ___U3CrayU3E__1_3; }
	inline Ray_t2276421925 * get_address_of_U3CrayU3E__1_3() { return &___U3CrayU3E__1_3; }
	inline void set_U3CrayU3E__1_3(Ray_t2276421925  value)
	{
		___U3CrayU3E__1_3 = value;
	}

	inline static int32_t get_offset_of_distance_4() { return static_cast<int32_t>(offsetof(U3CDragObjectU3Ec__Iterator0_t3717782834, ___distance_4)); }
	inline float get_distance_4() const { return ___distance_4; }
	inline float* get_address_of_distance_4() { return &___distance_4; }
	inline void set_distance_4(float value)
	{
		___distance_4 = value;
	}

	inline static int32_t get_offset_of_U24this_5() { return static_cast<int32_t>(offsetof(U3CDragObjectU3Ec__Iterator0_t3717782834, ___U24this_5)); }
	inline DragRigidbody_t888283494 * get_U24this_5() const { return ___U24this_5; }
	inline DragRigidbody_t888283494 ** get_address_of_U24this_5() { return &___U24this_5; }
	inline void set_U24this_5(DragRigidbody_t888283494 * value)
	{
		___U24this_5 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_5), value);
	}

	inline static int32_t get_offset_of_U24current_6() { return static_cast<int32_t>(offsetof(U3CDragObjectU3Ec__Iterator0_t3717782834, ___U24current_6)); }
	inline RuntimeObject * get_U24current_6() const { return ___U24current_6; }
	inline RuntimeObject ** get_address_of_U24current_6() { return &___U24current_6; }
	inline void set_U24current_6(RuntimeObject * value)
	{
		___U24current_6 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_6), value);
	}

	inline static int32_t get_offset_of_U24disposing_7() { return static_cast<int32_t>(offsetof(U3CDragObjectU3Ec__Iterator0_t3717782834, ___U24disposing_7)); }
	inline bool get_U24disposing_7() const { return ___U24disposing_7; }
	inline bool* get_address_of_U24disposing_7() { return &___U24disposing_7; }
	inline void set_U24disposing_7(bool value)
	{
		___U24disposing_7 = value;
	}

	inline static int32_t get_offset_of_U24PC_8() { return static_cast<int32_t>(offsetof(U3CDragObjectU3Ec__Iterator0_t3717782834, ___U24PC_8)); }
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
#endif // U3CDRAGOBJECTU3EC__ITERATOR0_T3717782834_H
#ifndef ENTRY_T4243516910_H
#define ENTRY_T4243516910_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.TimedObjectActivator/Entry
struct  Entry_t4243516910  : public RuntimeObject
{
public:
	// UnityEngine.GameObject UnityStandardAssets.Utility.TimedObjectActivator/Entry::target
	GameObject_t3088464854 * ___target_0;
	// UnityStandardAssets.Utility.TimedObjectActivator/Action UnityStandardAssets.Utility.TimedObjectActivator/Entry::action
	int32_t ___action_1;
	// System.Single UnityStandardAssets.Utility.TimedObjectActivator/Entry::delay
	float ___delay_2;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(Entry_t4243516910, ___target_0)); }
	inline GameObject_t3088464854 * get_target_0() const { return ___target_0; }
	inline GameObject_t3088464854 ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(GameObject_t3088464854 * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((&___target_0), value);
	}

	inline static int32_t get_offset_of_action_1() { return static_cast<int32_t>(offsetof(Entry_t4243516910, ___action_1)); }
	inline int32_t get_action_1() const { return ___action_1; }
	inline int32_t* get_address_of_action_1() { return &___action_1; }
	inline void set_action_1(int32_t value)
	{
		___action_1 = value;
	}

	inline static int32_t get_offset_of_delay_2() { return static_cast<int32_t>(offsetof(Entry_t4243516910, ___delay_2)); }
	inline float get_delay_2() const { return ___delay_2; }
	inline float* get_address_of_delay_2() { return &___delay_2; }
	inline void set_delay_2(float value)
	{
		___delay_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENTRY_T4243516910_H
#ifndef AXISMAPPING_T2010957176_H
#define AXISMAPPING_T2010957176_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CrossPlatformInput.TiltInput/AxisMapping
struct  AxisMapping_t2010957176  : public RuntimeObject
{
public:
	// UnityStandardAssets.CrossPlatformInput.TiltInput/AxisMapping/MappingType UnityStandardAssets.CrossPlatformInput.TiltInput/AxisMapping::type
	int32_t ___type_0;
	// System.String UnityStandardAssets.CrossPlatformInput.TiltInput/AxisMapping::axisName
	String_t* ___axisName_1;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(AxisMapping_t2010957176, ___type_0)); }
	inline int32_t get_type_0() const { return ___type_0; }
	inline int32_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(int32_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_axisName_1() { return static_cast<int32_t>(offsetof(AxisMapping_t2010957176, ___axisName_1)); }
	inline String_t* get_axisName_1() const { return ___axisName_1; }
	inline String_t** get_address_of_axisName_1() { return &___axisName_1; }
	inline void set_axisName_1(String_t* value)
	{
		___axisName_1 = value;
		Il2CppCodeGenWriteBarrier((&___axisName_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AXISMAPPING_T2010957176_H
#ifndef VECTOR3ANDSPACE_T1464337399_H
#define VECTOR3ANDSPACE_T1464337399_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.AutoMoveAndRotate/Vector3andSpace
struct  Vector3andSpace_t1464337399  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 UnityStandardAssets.Utility.AutoMoveAndRotate/Vector3andSpace::value
	Vector3_t868553430  ___value_0;
	// UnityEngine.Space UnityStandardAssets.Utility.AutoMoveAndRotate/Vector3andSpace::space
	int32_t ___space_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Vector3andSpace_t1464337399, ___value_0)); }
	inline Vector3_t868553430  get_value_0() const { return ___value_0; }
	inline Vector3_t868553430 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Vector3_t868553430  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_space_1() { return static_cast<int32_t>(offsetof(Vector3andSpace_t1464337399, ___space_1)); }
	inline int32_t get_space_1() const { return ___space_1; }
	inline int32_t* get_address_of_space_1() { return &___space_1; }
	inline void set_space_1(int32_t value)
	{
		___space_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3ANDSPACE_T1464337399_H
#ifndef BEHAVIOUR_T2100539809_H
#define BEHAVIOUR_T2100539809_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t2100539809  : public Component_t1938462780
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T2100539809_H
#ifndef MONOBEHAVIOUR_T752931070_H
#define MONOBEHAVIOUR_T752931070_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t752931070  : public Behaviour_t2100539809
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T752931070_H
#ifndef WAYPOINTPROGRESSTRACKER_T1695242906_H
#define WAYPOINTPROGRESSTRACKER_T1695242906_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.WaypointProgressTracker
struct  WaypointProgressTracker_t1695242906  : public MonoBehaviour_t752931070
{
public:
	// UnityStandardAssets.Utility.WaypointCircuit UnityStandardAssets.Utility.WaypointProgressTracker::circuit
	WaypointCircuit_t1307276181 * ___circuit_2;
	// System.Single UnityStandardAssets.Utility.WaypointProgressTracker::lookAheadForTargetOffset
	float ___lookAheadForTargetOffset_3;
	// System.Single UnityStandardAssets.Utility.WaypointProgressTracker::lookAheadForTargetFactor
	float ___lookAheadForTargetFactor_4;
	// System.Single UnityStandardAssets.Utility.WaypointProgressTracker::lookAheadForSpeedOffset
	float ___lookAheadForSpeedOffset_5;
	// System.Single UnityStandardAssets.Utility.WaypointProgressTracker::lookAheadForSpeedFactor
	float ___lookAheadForSpeedFactor_6;
	// UnityStandardAssets.Utility.WaypointProgressTracker/ProgressStyle UnityStandardAssets.Utility.WaypointProgressTracker::progressStyle
	int32_t ___progressStyle_7;
	// System.Single UnityStandardAssets.Utility.WaypointProgressTracker::pointToPointThreshold
	float ___pointToPointThreshold_8;
	// UnityStandardAssets.Utility.WaypointCircuit/RoutePoint UnityStandardAssets.Utility.WaypointProgressTracker::<targetPoint>k__BackingField
	RoutePoint_t2655024850  ___U3CtargetPointU3Ek__BackingField_9;
	// UnityStandardAssets.Utility.WaypointCircuit/RoutePoint UnityStandardAssets.Utility.WaypointProgressTracker::<speedPoint>k__BackingField
	RoutePoint_t2655024850  ___U3CspeedPointU3Ek__BackingField_10;
	// UnityStandardAssets.Utility.WaypointCircuit/RoutePoint UnityStandardAssets.Utility.WaypointProgressTracker::<progressPoint>k__BackingField
	RoutePoint_t2655024850  ___U3CprogressPointU3Ek__BackingField_11;
	// UnityEngine.Transform UnityStandardAssets.Utility.WaypointProgressTracker::target
	Transform_t2055145993 * ___target_12;
	// System.Single UnityStandardAssets.Utility.WaypointProgressTracker::progressDistance
	float ___progressDistance_13;
	// System.Int32 UnityStandardAssets.Utility.WaypointProgressTracker::progressNum
	int32_t ___progressNum_14;
	// UnityEngine.Vector3 UnityStandardAssets.Utility.WaypointProgressTracker::lastPosition
	Vector3_t868553430  ___lastPosition_15;
	// System.Single UnityStandardAssets.Utility.WaypointProgressTracker::speed
	float ___speed_16;

public:
	inline static int32_t get_offset_of_circuit_2() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t1695242906, ___circuit_2)); }
	inline WaypointCircuit_t1307276181 * get_circuit_2() const { return ___circuit_2; }
	inline WaypointCircuit_t1307276181 ** get_address_of_circuit_2() { return &___circuit_2; }
	inline void set_circuit_2(WaypointCircuit_t1307276181 * value)
	{
		___circuit_2 = value;
		Il2CppCodeGenWriteBarrier((&___circuit_2), value);
	}

	inline static int32_t get_offset_of_lookAheadForTargetOffset_3() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t1695242906, ___lookAheadForTargetOffset_3)); }
	inline float get_lookAheadForTargetOffset_3() const { return ___lookAheadForTargetOffset_3; }
	inline float* get_address_of_lookAheadForTargetOffset_3() { return &___lookAheadForTargetOffset_3; }
	inline void set_lookAheadForTargetOffset_3(float value)
	{
		___lookAheadForTargetOffset_3 = value;
	}

	inline static int32_t get_offset_of_lookAheadForTargetFactor_4() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t1695242906, ___lookAheadForTargetFactor_4)); }
	inline float get_lookAheadForTargetFactor_4() const { return ___lookAheadForTargetFactor_4; }
	inline float* get_address_of_lookAheadForTargetFactor_4() { return &___lookAheadForTargetFactor_4; }
	inline void set_lookAheadForTargetFactor_4(float value)
	{
		___lookAheadForTargetFactor_4 = value;
	}

	inline static int32_t get_offset_of_lookAheadForSpeedOffset_5() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t1695242906, ___lookAheadForSpeedOffset_5)); }
	inline float get_lookAheadForSpeedOffset_5() const { return ___lookAheadForSpeedOffset_5; }
	inline float* get_address_of_lookAheadForSpeedOffset_5() { return &___lookAheadForSpeedOffset_5; }
	inline void set_lookAheadForSpeedOffset_5(float value)
	{
		___lookAheadForSpeedOffset_5 = value;
	}

	inline static int32_t get_offset_of_lookAheadForSpeedFactor_6() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t1695242906, ___lookAheadForSpeedFactor_6)); }
	inline float get_lookAheadForSpeedFactor_6() const { return ___lookAheadForSpeedFactor_6; }
	inline float* get_address_of_lookAheadForSpeedFactor_6() { return &___lookAheadForSpeedFactor_6; }
	inline void set_lookAheadForSpeedFactor_6(float value)
	{
		___lookAheadForSpeedFactor_6 = value;
	}

	inline static int32_t get_offset_of_progressStyle_7() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t1695242906, ___progressStyle_7)); }
	inline int32_t get_progressStyle_7() const { return ___progressStyle_7; }
	inline int32_t* get_address_of_progressStyle_7() { return &___progressStyle_7; }
	inline void set_progressStyle_7(int32_t value)
	{
		___progressStyle_7 = value;
	}

	inline static int32_t get_offset_of_pointToPointThreshold_8() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t1695242906, ___pointToPointThreshold_8)); }
	inline float get_pointToPointThreshold_8() const { return ___pointToPointThreshold_8; }
	inline float* get_address_of_pointToPointThreshold_8() { return &___pointToPointThreshold_8; }
	inline void set_pointToPointThreshold_8(float value)
	{
		___pointToPointThreshold_8 = value;
	}

	inline static int32_t get_offset_of_U3CtargetPointU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t1695242906, ___U3CtargetPointU3Ek__BackingField_9)); }
	inline RoutePoint_t2655024850  get_U3CtargetPointU3Ek__BackingField_9() const { return ___U3CtargetPointU3Ek__BackingField_9; }
	inline RoutePoint_t2655024850 * get_address_of_U3CtargetPointU3Ek__BackingField_9() { return &___U3CtargetPointU3Ek__BackingField_9; }
	inline void set_U3CtargetPointU3Ek__BackingField_9(RoutePoint_t2655024850  value)
	{
		___U3CtargetPointU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CspeedPointU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t1695242906, ___U3CspeedPointU3Ek__BackingField_10)); }
	inline RoutePoint_t2655024850  get_U3CspeedPointU3Ek__BackingField_10() const { return ___U3CspeedPointU3Ek__BackingField_10; }
	inline RoutePoint_t2655024850 * get_address_of_U3CspeedPointU3Ek__BackingField_10() { return &___U3CspeedPointU3Ek__BackingField_10; }
	inline void set_U3CspeedPointU3Ek__BackingField_10(RoutePoint_t2655024850  value)
	{
		___U3CspeedPointU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CprogressPointU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t1695242906, ___U3CprogressPointU3Ek__BackingField_11)); }
	inline RoutePoint_t2655024850  get_U3CprogressPointU3Ek__BackingField_11() const { return ___U3CprogressPointU3Ek__BackingField_11; }
	inline RoutePoint_t2655024850 * get_address_of_U3CprogressPointU3Ek__BackingField_11() { return &___U3CprogressPointU3Ek__BackingField_11; }
	inline void set_U3CprogressPointU3Ek__BackingField_11(RoutePoint_t2655024850  value)
	{
		___U3CprogressPointU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_target_12() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t1695242906, ___target_12)); }
	inline Transform_t2055145993 * get_target_12() const { return ___target_12; }
	inline Transform_t2055145993 ** get_address_of_target_12() { return &___target_12; }
	inline void set_target_12(Transform_t2055145993 * value)
	{
		___target_12 = value;
		Il2CppCodeGenWriteBarrier((&___target_12), value);
	}

	inline static int32_t get_offset_of_progressDistance_13() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t1695242906, ___progressDistance_13)); }
	inline float get_progressDistance_13() const { return ___progressDistance_13; }
	inline float* get_address_of_progressDistance_13() { return &___progressDistance_13; }
	inline void set_progressDistance_13(float value)
	{
		___progressDistance_13 = value;
	}

	inline static int32_t get_offset_of_progressNum_14() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t1695242906, ___progressNum_14)); }
	inline int32_t get_progressNum_14() const { return ___progressNum_14; }
	inline int32_t* get_address_of_progressNum_14() { return &___progressNum_14; }
	inline void set_progressNum_14(int32_t value)
	{
		___progressNum_14 = value;
	}

	inline static int32_t get_offset_of_lastPosition_15() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t1695242906, ___lastPosition_15)); }
	inline Vector3_t868553430  get_lastPosition_15() const { return ___lastPosition_15; }
	inline Vector3_t868553430 * get_address_of_lastPosition_15() { return &___lastPosition_15; }
	inline void set_lastPosition_15(Vector3_t868553430  value)
	{
		___lastPosition_15 = value;
	}

	inline static int32_t get_offset_of_speed_16() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t1695242906, ___speed_16)); }
	inline float get_speed_16() const { return ___speed_16; }
	inline float* get_address_of_speed_16() { return &___speed_16; }
	inline void set_speed_16(float value)
	{
		___speed_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAYPOINTPROGRESSTRACKER_T1695242906_H
#ifndef TOUCHPAD_T2631742450_H
#define TOUCHPAD_T2631742450_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CrossPlatformInput.TouchPad
struct  TouchPad_t2631742450  : public MonoBehaviour_t752931070
{
public:
	// UnityStandardAssets.CrossPlatformInput.TouchPad/AxisOption UnityStandardAssets.CrossPlatformInput.TouchPad::axesToUse
	int32_t ___axesToUse_2;
	// UnityStandardAssets.CrossPlatformInput.TouchPad/ControlStyle UnityStandardAssets.CrossPlatformInput.TouchPad::controlStyle
	int32_t ___controlStyle_3;
	// System.String UnityStandardAssets.CrossPlatformInput.TouchPad::horizontalAxisName
	String_t* ___horizontalAxisName_4;
	// System.String UnityStandardAssets.CrossPlatformInput.TouchPad::verticalAxisName
	String_t* ___verticalAxisName_5;
	// System.Single UnityStandardAssets.CrossPlatformInput.TouchPad::Xsensitivity
	float ___Xsensitivity_6;
	// System.Single UnityStandardAssets.CrossPlatformInput.TouchPad::Ysensitivity
	float ___Ysensitivity_7;
	// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.TouchPad::m_StartPos
	Vector3_t868553430  ___m_StartPos_8;
	// UnityEngine.Vector2 UnityStandardAssets.CrossPlatformInput.TouchPad::m_PreviousDelta
	Vector2_t2603427790  ___m_PreviousDelta_9;
	// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.TouchPad::m_JoytickOutput
	Vector3_t868553430  ___m_JoytickOutput_10;
	// System.Boolean UnityStandardAssets.CrossPlatformInput.TouchPad::m_UseX
	bool ___m_UseX_11;
	// System.Boolean UnityStandardAssets.CrossPlatformInput.TouchPad::m_UseY
	bool ___m_UseY_12;
	// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.TouchPad::m_HorizontalVirtualAxis
	VirtualAxis_t4166879677 * ___m_HorizontalVirtualAxis_13;
	// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.TouchPad::m_VerticalVirtualAxis
	VirtualAxis_t4166879677 * ___m_VerticalVirtualAxis_14;
	// System.Boolean UnityStandardAssets.CrossPlatformInput.TouchPad::m_Dragging
	bool ___m_Dragging_15;
	// System.Int32 UnityStandardAssets.CrossPlatformInput.TouchPad::m_Id
	int32_t ___m_Id_16;
	// UnityEngine.Vector2 UnityStandardAssets.CrossPlatformInput.TouchPad::m_PreviousTouchPos
	Vector2_t2603427790  ___m_PreviousTouchPos_17;
	// UnityEngine.Vector3 UnityStandardAssets.CrossPlatformInput.TouchPad::m_Center
	Vector3_t868553430  ___m_Center_18;
	// UnityEngine.UI.Image UnityStandardAssets.CrossPlatformInput.TouchPad::m_Image
	Image_t1498872576 * ___m_Image_19;

public:
	inline static int32_t get_offset_of_axesToUse_2() { return static_cast<int32_t>(offsetof(TouchPad_t2631742450, ___axesToUse_2)); }
	inline int32_t get_axesToUse_2() const { return ___axesToUse_2; }
	inline int32_t* get_address_of_axesToUse_2() { return &___axesToUse_2; }
	inline void set_axesToUse_2(int32_t value)
	{
		___axesToUse_2 = value;
	}

	inline static int32_t get_offset_of_controlStyle_3() { return static_cast<int32_t>(offsetof(TouchPad_t2631742450, ___controlStyle_3)); }
	inline int32_t get_controlStyle_3() const { return ___controlStyle_3; }
	inline int32_t* get_address_of_controlStyle_3() { return &___controlStyle_3; }
	inline void set_controlStyle_3(int32_t value)
	{
		___controlStyle_3 = value;
	}

	inline static int32_t get_offset_of_horizontalAxisName_4() { return static_cast<int32_t>(offsetof(TouchPad_t2631742450, ___horizontalAxisName_4)); }
	inline String_t* get_horizontalAxisName_4() const { return ___horizontalAxisName_4; }
	inline String_t** get_address_of_horizontalAxisName_4() { return &___horizontalAxisName_4; }
	inline void set_horizontalAxisName_4(String_t* value)
	{
		___horizontalAxisName_4 = value;
		Il2CppCodeGenWriteBarrier((&___horizontalAxisName_4), value);
	}

	inline static int32_t get_offset_of_verticalAxisName_5() { return static_cast<int32_t>(offsetof(TouchPad_t2631742450, ___verticalAxisName_5)); }
	inline String_t* get_verticalAxisName_5() const { return ___verticalAxisName_5; }
	inline String_t** get_address_of_verticalAxisName_5() { return &___verticalAxisName_5; }
	inline void set_verticalAxisName_5(String_t* value)
	{
		___verticalAxisName_5 = value;
		Il2CppCodeGenWriteBarrier((&___verticalAxisName_5), value);
	}

	inline static int32_t get_offset_of_Xsensitivity_6() { return static_cast<int32_t>(offsetof(TouchPad_t2631742450, ___Xsensitivity_6)); }
	inline float get_Xsensitivity_6() const { return ___Xsensitivity_6; }
	inline float* get_address_of_Xsensitivity_6() { return &___Xsensitivity_6; }
	inline void set_Xsensitivity_6(float value)
	{
		___Xsensitivity_6 = value;
	}

	inline static int32_t get_offset_of_Ysensitivity_7() { return static_cast<int32_t>(offsetof(TouchPad_t2631742450, ___Ysensitivity_7)); }
	inline float get_Ysensitivity_7() const { return ___Ysensitivity_7; }
	inline float* get_address_of_Ysensitivity_7() { return &___Ysensitivity_7; }
	inline void set_Ysensitivity_7(float value)
	{
		___Ysensitivity_7 = value;
	}

	inline static int32_t get_offset_of_m_StartPos_8() { return static_cast<int32_t>(offsetof(TouchPad_t2631742450, ___m_StartPos_8)); }
	inline Vector3_t868553430  get_m_StartPos_8() const { return ___m_StartPos_8; }
	inline Vector3_t868553430 * get_address_of_m_StartPos_8() { return &___m_StartPos_8; }
	inline void set_m_StartPos_8(Vector3_t868553430  value)
	{
		___m_StartPos_8 = value;
	}

	inline static int32_t get_offset_of_m_PreviousDelta_9() { return static_cast<int32_t>(offsetof(TouchPad_t2631742450, ___m_PreviousDelta_9)); }
	inline Vector2_t2603427790  get_m_PreviousDelta_9() const { return ___m_PreviousDelta_9; }
	inline Vector2_t2603427790 * get_address_of_m_PreviousDelta_9() { return &___m_PreviousDelta_9; }
	inline void set_m_PreviousDelta_9(Vector2_t2603427790  value)
	{
		___m_PreviousDelta_9 = value;
	}

	inline static int32_t get_offset_of_m_JoytickOutput_10() { return static_cast<int32_t>(offsetof(TouchPad_t2631742450, ___m_JoytickOutput_10)); }
	inline Vector3_t868553430  get_m_JoytickOutput_10() const { return ___m_JoytickOutput_10; }
	inline Vector3_t868553430 * get_address_of_m_JoytickOutput_10() { return &___m_JoytickOutput_10; }
	inline void set_m_JoytickOutput_10(Vector3_t868553430  value)
	{
		___m_JoytickOutput_10 = value;
	}

	inline static int32_t get_offset_of_m_UseX_11() { return static_cast<int32_t>(offsetof(TouchPad_t2631742450, ___m_UseX_11)); }
	inline bool get_m_UseX_11() const { return ___m_UseX_11; }
	inline bool* get_address_of_m_UseX_11() { return &___m_UseX_11; }
	inline void set_m_UseX_11(bool value)
	{
		___m_UseX_11 = value;
	}

	inline static int32_t get_offset_of_m_UseY_12() { return static_cast<int32_t>(offsetof(TouchPad_t2631742450, ___m_UseY_12)); }
	inline bool get_m_UseY_12() const { return ___m_UseY_12; }
	inline bool* get_address_of_m_UseY_12() { return &___m_UseY_12; }
	inline void set_m_UseY_12(bool value)
	{
		___m_UseY_12 = value;
	}

	inline static int32_t get_offset_of_m_HorizontalVirtualAxis_13() { return static_cast<int32_t>(offsetof(TouchPad_t2631742450, ___m_HorizontalVirtualAxis_13)); }
	inline VirtualAxis_t4166879677 * get_m_HorizontalVirtualAxis_13() const { return ___m_HorizontalVirtualAxis_13; }
	inline VirtualAxis_t4166879677 ** get_address_of_m_HorizontalVirtualAxis_13() { return &___m_HorizontalVirtualAxis_13; }
	inline void set_m_HorizontalVirtualAxis_13(VirtualAxis_t4166879677 * value)
	{
		___m_HorizontalVirtualAxis_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_HorizontalVirtualAxis_13), value);
	}

	inline static int32_t get_offset_of_m_VerticalVirtualAxis_14() { return static_cast<int32_t>(offsetof(TouchPad_t2631742450, ___m_VerticalVirtualAxis_14)); }
	inline VirtualAxis_t4166879677 * get_m_VerticalVirtualAxis_14() const { return ___m_VerticalVirtualAxis_14; }
	inline VirtualAxis_t4166879677 ** get_address_of_m_VerticalVirtualAxis_14() { return &___m_VerticalVirtualAxis_14; }
	inline void set_m_VerticalVirtualAxis_14(VirtualAxis_t4166879677 * value)
	{
		___m_VerticalVirtualAxis_14 = value;
		Il2CppCodeGenWriteBarrier((&___m_VerticalVirtualAxis_14), value);
	}

	inline static int32_t get_offset_of_m_Dragging_15() { return static_cast<int32_t>(offsetof(TouchPad_t2631742450, ___m_Dragging_15)); }
	inline bool get_m_Dragging_15() const { return ___m_Dragging_15; }
	inline bool* get_address_of_m_Dragging_15() { return &___m_Dragging_15; }
	inline void set_m_Dragging_15(bool value)
	{
		___m_Dragging_15 = value;
	}

	inline static int32_t get_offset_of_m_Id_16() { return static_cast<int32_t>(offsetof(TouchPad_t2631742450, ___m_Id_16)); }
	inline int32_t get_m_Id_16() const { return ___m_Id_16; }
	inline int32_t* get_address_of_m_Id_16() { return &___m_Id_16; }
	inline void set_m_Id_16(int32_t value)
	{
		___m_Id_16 = value;
	}

	inline static int32_t get_offset_of_m_PreviousTouchPos_17() { return static_cast<int32_t>(offsetof(TouchPad_t2631742450, ___m_PreviousTouchPos_17)); }
	inline Vector2_t2603427790  get_m_PreviousTouchPos_17() const { return ___m_PreviousTouchPos_17; }
	inline Vector2_t2603427790 * get_address_of_m_PreviousTouchPos_17() { return &___m_PreviousTouchPos_17; }
	inline void set_m_PreviousTouchPos_17(Vector2_t2603427790  value)
	{
		___m_PreviousTouchPos_17 = value;
	}

	inline static int32_t get_offset_of_m_Center_18() { return static_cast<int32_t>(offsetof(TouchPad_t2631742450, ___m_Center_18)); }
	inline Vector3_t868553430  get_m_Center_18() const { return ___m_Center_18; }
	inline Vector3_t868553430 * get_address_of_m_Center_18() { return &___m_Center_18; }
	inline void set_m_Center_18(Vector3_t868553430  value)
	{
		___m_Center_18 = value;
	}

	inline static int32_t get_offset_of_m_Image_19() { return static_cast<int32_t>(offsetof(TouchPad_t2631742450, ___m_Image_19)); }
	inline Image_t1498872576 * get_m_Image_19() const { return ___m_Image_19; }
	inline Image_t1498872576 ** get_address_of_m_Image_19() { return &___m_Image_19; }
	inline void set_m_Image_19(Image_t1498872576 * value)
	{
		___m_Image_19 = value;
		Il2CppCodeGenWriteBarrier((&___m_Image_19), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOUCHPAD_T2631742450_H
#ifndef WAYPOINTCIRCUIT_T1307276181_H
#define WAYPOINTCIRCUIT_T1307276181_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.WaypointCircuit
struct  WaypointCircuit_t1307276181  : public MonoBehaviour_t752931070
{
public:
	// UnityStandardAssets.Utility.WaypointCircuit/WaypointList UnityStandardAssets.Utility.WaypointCircuit::waypointList
	WaypointList_t2504507529 * ___waypointList_2;
	// System.Boolean UnityStandardAssets.Utility.WaypointCircuit::smoothRoute
	bool ___smoothRoute_3;
	// System.Int32 UnityStandardAssets.Utility.WaypointCircuit::numPoints
	int32_t ___numPoints_4;
	// UnityEngine.Vector3[] UnityStandardAssets.Utility.WaypointCircuit::points
	Vector3U5BU5D_t3430844691* ___points_5;
	// System.Single[] UnityStandardAssets.Utility.WaypointCircuit::distances
	SingleU5BU5D_t3407503223* ___distances_6;
	// System.Single UnityStandardAssets.Utility.WaypointCircuit::editorVisualisationSubsteps
	float ___editorVisualisationSubsteps_7;
	// System.Single UnityStandardAssets.Utility.WaypointCircuit::<Length>k__BackingField
	float ___U3CLengthU3Ek__BackingField_8;
	// System.Int32 UnityStandardAssets.Utility.WaypointCircuit::p0n
	int32_t ___p0n_9;
	// System.Int32 UnityStandardAssets.Utility.WaypointCircuit::p1n
	int32_t ___p1n_10;
	// System.Int32 UnityStandardAssets.Utility.WaypointCircuit::p2n
	int32_t ___p2n_11;
	// System.Int32 UnityStandardAssets.Utility.WaypointCircuit::p3n
	int32_t ___p3n_12;
	// System.Single UnityStandardAssets.Utility.WaypointCircuit::i
	float ___i_13;
	// UnityEngine.Vector3 UnityStandardAssets.Utility.WaypointCircuit::P0
	Vector3_t868553430  ___P0_14;
	// UnityEngine.Vector3 UnityStandardAssets.Utility.WaypointCircuit::P1
	Vector3_t868553430  ___P1_15;
	// UnityEngine.Vector3 UnityStandardAssets.Utility.WaypointCircuit::P2
	Vector3_t868553430  ___P2_16;
	// UnityEngine.Vector3 UnityStandardAssets.Utility.WaypointCircuit::P3
	Vector3_t868553430  ___P3_17;

public:
	inline static int32_t get_offset_of_waypointList_2() { return static_cast<int32_t>(offsetof(WaypointCircuit_t1307276181, ___waypointList_2)); }
	inline WaypointList_t2504507529 * get_waypointList_2() const { return ___waypointList_2; }
	inline WaypointList_t2504507529 ** get_address_of_waypointList_2() { return &___waypointList_2; }
	inline void set_waypointList_2(WaypointList_t2504507529 * value)
	{
		___waypointList_2 = value;
		Il2CppCodeGenWriteBarrier((&___waypointList_2), value);
	}

	inline static int32_t get_offset_of_smoothRoute_3() { return static_cast<int32_t>(offsetof(WaypointCircuit_t1307276181, ___smoothRoute_3)); }
	inline bool get_smoothRoute_3() const { return ___smoothRoute_3; }
	inline bool* get_address_of_smoothRoute_3() { return &___smoothRoute_3; }
	inline void set_smoothRoute_3(bool value)
	{
		___smoothRoute_3 = value;
	}

	inline static int32_t get_offset_of_numPoints_4() { return static_cast<int32_t>(offsetof(WaypointCircuit_t1307276181, ___numPoints_4)); }
	inline int32_t get_numPoints_4() const { return ___numPoints_4; }
	inline int32_t* get_address_of_numPoints_4() { return &___numPoints_4; }
	inline void set_numPoints_4(int32_t value)
	{
		___numPoints_4 = value;
	}

	inline static int32_t get_offset_of_points_5() { return static_cast<int32_t>(offsetof(WaypointCircuit_t1307276181, ___points_5)); }
	inline Vector3U5BU5D_t3430844691* get_points_5() const { return ___points_5; }
	inline Vector3U5BU5D_t3430844691** get_address_of_points_5() { return &___points_5; }
	inline void set_points_5(Vector3U5BU5D_t3430844691* value)
	{
		___points_5 = value;
		Il2CppCodeGenWriteBarrier((&___points_5), value);
	}

	inline static int32_t get_offset_of_distances_6() { return static_cast<int32_t>(offsetof(WaypointCircuit_t1307276181, ___distances_6)); }
	inline SingleU5BU5D_t3407503223* get_distances_6() const { return ___distances_6; }
	inline SingleU5BU5D_t3407503223** get_address_of_distances_6() { return &___distances_6; }
	inline void set_distances_6(SingleU5BU5D_t3407503223* value)
	{
		___distances_6 = value;
		Il2CppCodeGenWriteBarrier((&___distances_6), value);
	}

	inline static int32_t get_offset_of_editorVisualisationSubsteps_7() { return static_cast<int32_t>(offsetof(WaypointCircuit_t1307276181, ___editorVisualisationSubsteps_7)); }
	inline float get_editorVisualisationSubsteps_7() const { return ___editorVisualisationSubsteps_7; }
	inline float* get_address_of_editorVisualisationSubsteps_7() { return &___editorVisualisationSubsteps_7; }
	inline void set_editorVisualisationSubsteps_7(float value)
	{
		___editorVisualisationSubsteps_7 = value;
	}

	inline static int32_t get_offset_of_U3CLengthU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(WaypointCircuit_t1307276181, ___U3CLengthU3Ek__BackingField_8)); }
	inline float get_U3CLengthU3Ek__BackingField_8() const { return ___U3CLengthU3Ek__BackingField_8; }
	inline float* get_address_of_U3CLengthU3Ek__BackingField_8() { return &___U3CLengthU3Ek__BackingField_8; }
	inline void set_U3CLengthU3Ek__BackingField_8(float value)
	{
		___U3CLengthU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_p0n_9() { return static_cast<int32_t>(offsetof(WaypointCircuit_t1307276181, ___p0n_9)); }
	inline int32_t get_p0n_9() const { return ___p0n_9; }
	inline int32_t* get_address_of_p0n_9() { return &___p0n_9; }
	inline void set_p0n_9(int32_t value)
	{
		___p0n_9 = value;
	}

	inline static int32_t get_offset_of_p1n_10() { return static_cast<int32_t>(offsetof(WaypointCircuit_t1307276181, ___p1n_10)); }
	inline int32_t get_p1n_10() const { return ___p1n_10; }
	inline int32_t* get_address_of_p1n_10() { return &___p1n_10; }
	inline void set_p1n_10(int32_t value)
	{
		___p1n_10 = value;
	}

	inline static int32_t get_offset_of_p2n_11() { return static_cast<int32_t>(offsetof(WaypointCircuit_t1307276181, ___p2n_11)); }
	inline int32_t get_p2n_11() const { return ___p2n_11; }
	inline int32_t* get_address_of_p2n_11() { return &___p2n_11; }
	inline void set_p2n_11(int32_t value)
	{
		___p2n_11 = value;
	}

	inline static int32_t get_offset_of_p3n_12() { return static_cast<int32_t>(offsetof(WaypointCircuit_t1307276181, ___p3n_12)); }
	inline int32_t get_p3n_12() const { return ___p3n_12; }
	inline int32_t* get_address_of_p3n_12() { return &___p3n_12; }
	inline void set_p3n_12(int32_t value)
	{
		___p3n_12 = value;
	}

	inline static int32_t get_offset_of_i_13() { return static_cast<int32_t>(offsetof(WaypointCircuit_t1307276181, ___i_13)); }
	inline float get_i_13() const { return ___i_13; }
	inline float* get_address_of_i_13() { return &___i_13; }
	inline void set_i_13(float value)
	{
		___i_13 = value;
	}

	inline static int32_t get_offset_of_P0_14() { return static_cast<int32_t>(offsetof(WaypointCircuit_t1307276181, ___P0_14)); }
	inline Vector3_t868553430  get_P0_14() const { return ___P0_14; }
	inline Vector3_t868553430 * get_address_of_P0_14() { return &___P0_14; }
	inline void set_P0_14(Vector3_t868553430  value)
	{
		___P0_14 = value;
	}

	inline static int32_t get_offset_of_P1_15() { return static_cast<int32_t>(offsetof(WaypointCircuit_t1307276181, ___P1_15)); }
	inline Vector3_t868553430  get_P1_15() const { return ___P1_15; }
	inline Vector3_t868553430 * get_address_of_P1_15() { return &___P1_15; }
	inline void set_P1_15(Vector3_t868553430  value)
	{
		___P1_15 = value;
	}

	inline static int32_t get_offset_of_P2_16() { return static_cast<int32_t>(offsetof(WaypointCircuit_t1307276181, ___P2_16)); }
	inline Vector3_t868553430  get_P2_16() const { return ___P2_16; }
	inline Vector3_t868553430 * get_address_of_P2_16() { return &___P2_16; }
	inline void set_P2_16(Vector3_t868553430  value)
	{
		___P2_16 = value;
	}

	inline static int32_t get_offset_of_P3_17() { return static_cast<int32_t>(offsetof(WaypointCircuit_t1307276181, ___P3_17)); }
	inline Vector3_t868553430  get_P3_17() const { return ___P3_17; }
	inline Vector3_t868553430 * get_address_of_P3_17() { return &___P3_17; }
	inline void set_P3_17(Vector3_t868553430  value)
	{
		___P3_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAYPOINTCIRCUIT_T1307276181_H
#ifndef TIMEDOBJECTDESTRUCTOR_T45241389_H
#define TIMEDOBJECTDESTRUCTOR_T45241389_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.TimedObjectDestructor
struct  TimedObjectDestructor_t45241389  : public MonoBehaviour_t752931070
{
public:
	// System.Single UnityStandardAssets.Utility.TimedObjectDestructor::m_TimeOut
	float ___m_TimeOut_2;
	// System.Boolean UnityStandardAssets.Utility.TimedObjectDestructor::m_DetachChildren
	bool ___m_DetachChildren_3;

public:
	inline static int32_t get_offset_of_m_TimeOut_2() { return static_cast<int32_t>(offsetof(TimedObjectDestructor_t45241389, ___m_TimeOut_2)); }
	inline float get_m_TimeOut_2() const { return ___m_TimeOut_2; }
	inline float* get_address_of_m_TimeOut_2() { return &___m_TimeOut_2; }
	inline void set_m_TimeOut_2(float value)
	{
		___m_TimeOut_2 = value;
	}

	inline static int32_t get_offset_of_m_DetachChildren_3() { return static_cast<int32_t>(offsetof(TimedObjectDestructor_t45241389, ___m_DetachChildren_3)); }
	inline bool get_m_DetachChildren_3() const { return ___m_DetachChildren_3; }
	inline bool* get_address_of_m_DetachChildren_3() { return &___m_DetachChildren_3; }
	inline void set_m_DetachChildren_3(bool value)
	{
		___m_DetachChildren_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMEDOBJECTDESTRUCTOR_T45241389_H
#ifndef TILTINPUT_T1234664235_H
#define TILTINPUT_T1234664235_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CrossPlatformInput.TiltInput
struct  TiltInput_t1234664235  : public MonoBehaviour_t752931070
{
public:
	// UnityStandardAssets.CrossPlatformInput.TiltInput/AxisMapping UnityStandardAssets.CrossPlatformInput.TiltInput::mapping
	AxisMapping_t2010957176 * ___mapping_2;
	// UnityStandardAssets.CrossPlatformInput.TiltInput/AxisOptions UnityStandardAssets.CrossPlatformInput.TiltInput::tiltAroundAxis
	int32_t ___tiltAroundAxis_3;
	// System.Single UnityStandardAssets.CrossPlatformInput.TiltInput::fullTiltAngle
	float ___fullTiltAngle_4;
	// System.Single UnityStandardAssets.CrossPlatformInput.TiltInput::centreAngleOffset
	float ___centreAngleOffset_5;
	// UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager/VirtualAxis UnityStandardAssets.CrossPlatformInput.TiltInput::m_SteerAxis
	VirtualAxis_t4166879677 * ___m_SteerAxis_6;

public:
	inline static int32_t get_offset_of_mapping_2() { return static_cast<int32_t>(offsetof(TiltInput_t1234664235, ___mapping_2)); }
	inline AxisMapping_t2010957176 * get_mapping_2() const { return ___mapping_2; }
	inline AxisMapping_t2010957176 ** get_address_of_mapping_2() { return &___mapping_2; }
	inline void set_mapping_2(AxisMapping_t2010957176 * value)
	{
		___mapping_2 = value;
		Il2CppCodeGenWriteBarrier((&___mapping_2), value);
	}

	inline static int32_t get_offset_of_tiltAroundAxis_3() { return static_cast<int32_t>(offsetof(TiltInput_t1234664235, ___tiltAroundAxis_3)); }
	inline int32_t get_tiltAroundAxis_3() const { return ___tiltAroundAxis_3; }
	inline int32_t* get_address_of_tiltAroundAxis_3() { return &___tiltAroundAxis_3; }
	inline void set_tiltAroundAxis_3(int32_t value)
	{
		___tiltAroundAxis_3 = value;
	}

	inline static int32_t get_offset_of_fullTiltAngle_4() { return static_cast<int32_t>(offsetof(TiltInput_t1234664235, ___fullTiltAngle_4)); }
	inline float get_fullTiltAngle_4() const { return ___fullTiltAngle_4; }
	inline float* get_address_of_fullTiltAngle_4() { return &___fullTiltAngle_4; }
	inline void set_fullTiltAngle_4(float value)
	{
		___fullTiltAngle_4 = value;
	}

	inline static int32_t get_offset_of_centreAngleOffset_5() { return static_cast<int32_t>(offsetof(TiltInput_t1234664235, ___centreAngleOffset_5)); }
	inline float get_centreAngleOffset_5() const { return ___centreAngleOffset_5; }
	inline float* get_address_of_centreAngleOffset_5() { return &___centreAngleOffset_5; }
	inline void set_centreAngleOffset_5(float value)
	{
		___centreAngleOffset_5 = value;
	}

	inline static int32_t get_offset_of_m_SteerAxis_6() { return static_cast<int32_t>(offsetof(TiltInput_t1234664235, ___m_SteerAxis_6)); }
	inline VirtualAxis_t4166879677 * get_m_SteerAxis_6() const { return ___m_SteerAxis_6; }
	inline VirtualAxis_t4166879677 ** get_address_of_m_SteerAxis_6() { return &___m_SteerAxis_6; }
	inline void set_m_SteerAxis_6(VirtualAxis_t4166879677 * value)
	{
		___m_SteerAxis_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_SteerAxis_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TILTINPUT_T1234664235_H
#ifndef AFTERBURNERPHYSICSFORCE_T4158577780_H
#define AFTERBURNERPHYSICSFORCE_T4158577780_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Effects.AfterburnerPhysicsForce
struct  AfterburnerPhysicsForce_t4158577780  : public MonoBehaviour_t752931070
{
public:
	// System.Single UnityStandardAssets.Effects.AfterburnerPhysicsForce::effectAngle
	float ___effectAngle_2;
	// System.Single UnityStandardAssets.Effects.AfterburnerPhysicsForce::effectWidth
	float ___effectWidth_3;
	// System.Single UnityStandardAssets.Effects.AfterburnerPhysicsForce::effectDistance
	float ___effectDistance_4;
	// System.Single UnityStandardAssets.Effects.AfterburnerPhysicsForce::force
	float ___force_5;
	// UnityEngine.Collider[] UnityStandardAssets.Effects.AfterburnerPhysicsForce::m_Cols
	ColliderU5BU5D_t1893034154* ___m_Cols_6;
	// UnityEngine.SphereCollider UnityStandardAssets.Effects.AfterburnerPhysicsForce::m_Sphere
	SphereCollider_t2239091298 * ___m_Sphere_7;

public:
	inline static int32_t get_offset_of_effectAngle_2() { return static_cast<int32_t>(offsetof(AfterburnerPhysicsForce_t4158577780, ___effectAngle_2)); }
	inline float get_effectAngle_2() const { return ___effectAngle_2; }
	inline float* get_address_of_effectAngle_2() { return &___effectAngle_2; }
	inline void set_effectAngle_2(float value)
	{
		___effectAngle_2 = value;
	}

	inline static int32_t get_offset_of_effectWidth_3() { return static_cast<int32_t>(offsetof(AfterburnerPhysicsForce_t4158577780, ___effectWidth_3)); }
	inline float get_effectWidth_3() const { return ___effectWidth_3; }
	inline float* get_address_of_effectWidth_3() { return &___effectWidth_3; }
	inline void set_effectWidth_3(float value)
	{
		___effectWidth_3 = value;
	}

	inline static int32_t get_offset_of_effectDistance_4() { return static_cast<int32_t>(offsetof(AfterburnerPhysicsForce_t4158577780, ___effectDistance_4)); }
	inline float get_effectDistance_4() const { return ___effectDistance_4; }
	inline float* get_address_of_effectDistance_4() { return &___effectDistance_4; }
	inline void set_effectDistance_4(float value)
	{
		___effectDistance_4 = value;
	}

	inline static int32_t get_offset_of_force_5() { return static_cast<int32_t>(offsetof(AfterburnerPhysicsForce_t4158577780, ___force_5)); }
	inline float get_force_5() const { return ___force_5; }
	inline float* get_address_of_force_5() { return &___force_5; }
	inline void set_force_5(float value)
	{
		___force_5 = value;
	}

	inline static int32_t get_offset_of_m_Cols_6() { return static_cast<int32_t>(offsetof(AfterburnerPhysicsForce_t4158577780, ___m_Cols_6)); }
	inline ColliderU5BU5D_t1893034154* get_m_Cols_6() const { return ___m_Cols_6; }
	inline ColliderU5BU5D_t1893034154** get_address_of_m_Cols_6() { return &___m_Cols_6; }
	inline void set_m_Cols_6(ColliderU5BU5D_t1893034154* value)
	{
		___m_Cols_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_Cols_6), value);
	}

	inline static int32_t get_offset_of_m_Sphere_7() { return static_cast<int32_t>(offsetof(AfterburnerPhysicsForce_t4158577780, ___m_Sphere_7)); }
	inline SphereCollider_t2239091298 * get_m_Sphere_7() const { return ___m_Sphere_7; }
	inline SphereCollider_t2239091298 ** get_address_of_m_Sphere_7() { return &___m_Sphere_7; }
	inline void set_m_Sphere_7(SphereCollider_t2239091298 * value)
	{
		___m_Sphere_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_Sphere_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AFTERBURNERPHYSICSFORCE_T4158577780_H
#ifndef EXPLOSIONFIREANDDEBRIS_T1948738392_H
#define EXPLOSIONFIREANDDEBRIS_T1948738392_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Effects.ExplosionFireAndDebris
struct  ExplosionFireAndDebris_t1948738392  : public MonoBehaviour_t752931070
{
public:
	// UnityEngine.Transform[] UnityStandardAssets.Effects.ExplosionFireAndDebris::debrisPrefabs
	TransformU5BU5D_t4157687732* ___debrisPrefabs_2;
	// UnityEngine.Transform UnityStandardAssets.Effects.ExplosionFireAndDebris::firePrefab
	Transform_t2055145993 * ___firePrefab_3;
	// System.Int32 UnityStandardAssets.Effects.ExplosionFireAndDebris::numDebrisPieces
	int32_t ___numDebrisPieces_4;
	// System.Int32 UnityStandardAssets.Effects.ExplosionFireAndDebris::numFires
	int32_t ___numFires_5;

public:
	inline static int32_t get_offset_of_debrisPrefabs_2() { return static_cast<int32_t>(offsetof(ExplosionFireAndDebris_t1948738392, ___debrisPrefabs_2)); }
	inline TransformU5BU5D_t4157687732* get_debrisPrefabs_2() const { return ___debrisPrefabs_2; }
	inline TransformU5BU5D_t4157687732** get_address_of_debrisPrefabs_2() { return &___debrisPrefabs_2; }
	inline void set_debrisPrefabs_2(TransformU5BU5D_t4157687732* value)
	{
		___debrisPrefabs_2 = value;
		Il2CppCodeGenWriteBarrier((&___debrisPrefabs_2), value);
	}

	inline static int32_t get_offset_of_firePrefab_3() { return static_cast<int32_t>(offsetof(ExplosionFireAndDebris_t1948738392, ___firePrefab_3)); }
	inline Transform_t2055145993 * get_firePrefab_3() const { return ___firePrefab_3; }
	inline Transform_t2055145993 ** get_address_of_firePrefab_3() { return &___firePrefab_3; }
	inline void set_firePrefab_3(Transform_t2055145993 * value)
	{
		___firePrefab_3 = value;
		Il2CppCodeGenWriteBarrier((&___firePrefab_3), value);
	}

	inline static int32_t get_offset_of_numDebrisPieces_4() { return static_cast<int32_t>(offsetof(ExplosionFireAndDebris_t1948738392, ___numDebrisPieces_4)); }
	inline int32_t get_numDebrisPieces_4() const { return ___numDebrisPieces_4; }
	inline int32_t* get_address_of_numDebrisPieces_4() { return &___numDebrisPieces_4; }
	inline void set_numDebrisPieces_4(int32_t value)
	{
		___numDebrisPieces_4 = value;
	}

	inline static int32_t get_offset_of_numFires_5() { return static_cast<int32_t>(offsetof(ExplosionFireAndDebris_t1948738392, ___numFires_5)); }
	inline int32_t get_numFires_5() const { return ___numFires_5; }
	inline int32_t* get_address_of_numFires_5() { return &___numFires_5; }
	inline void set_numFires_5(int32_t value)
	{
		___numFires_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPLOSIONFIREANDDEBRIS_T1948738392_H
#ifndef ACTIVATETRIGGER_T2506708453_H
#define ACTIVATETRIGGER_T2506708453_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.ActivateTrigger
struct  ActivateTrigger_t2506708453  : public MonoBehaviour_t752931070
{
public:
	// UnityStandardAssets.Utility.ActivateTrigger/Mode UnityStandardAssets.Utility.ActivateTrigger::action
	int32_t ___action_2;
	// UnityEngine.Object UnityStandardAssets.Utility.ActivateTrigger::target
	Object_t497070861 * ___target_3;
	// UnityEngine.GameObject UnityStandardAssets.Utility.ActivateTrigger::source
	GameObject_t3088464854 * ___source_4;
	// System.Int32 UnityStandardAssets.Utility.ActivateTrigger::triggerCount
	int32_t ___triggerCount_5;
	// System.Boolean UnityStandardAssets.Utility.ActivateTrigger::repeatTrigger
	bool ___repeatTrigger_6;

public:
	inline static int32_t get_offset_of_action_2() { return static_cast<int32_t>(offsetof(ActivateTrigger_t2506708453, ___action_2)); }
	inline int32_t get_action_2() const { return ___action_2; }
	inline int32_t* get_address_of_action_2() { return &___action_2; }
	inline void set_action_2(int32_t value)
	{
		___action_2 = value;
	}

	inline static int32_t get_offset_of_target_3() { return static_cast<int32_t>(offsetof(ActivateTrigger_t2506708453, ___target_3)); }
	inline Object_t497070861 * get_target_3() const { return ___target_3; }
	inline Object_t497070861 ** get_address_of_target_3() { return &___target_3; }
	inline void set_target_3(Object_t497070861 * value)
	{
		___target_3 = value;
		Il2CppCodeGenWriteBarrier((&___target_3), value);
	}

	inline static int32_t get_offset_of_source_4() { return static_cast<int32_t>(offsetof(ActivateTrigger_t2506708453, ___source_4)); }
	inline GameObject_t3088464854 * get_source_4() const { return ___source_4; }
	inline GameObject_t3088464854 ** get_address_of_source_4() { return &___source_4; }
	inline void set_source_4(GameObject_t3088464854 * value)
	{
		___source_4 = value;
		Il2CppCodeGenWriteBarrier((&___source_4), value);
	}

	inline static int32_t get_offset_of_triggerCount_5() { return static_cast<int32_t>(offsetof(ActivateTrigger_t2506708453, ___triggerCount_5)); }
	inline int32_t get_triggerCount_5() const { return ___triggerCount_5; }
	inline int32_t* get_address_of_triggerCount_5() { return &___triggerCount_5; }
	inline void set_triggerCount_5(int32_t value)
	{
		___triggerCount_5 = value;
	}

	inline static int32_t get_offset_of_repeatTrigger_6() { return static_cast<int32_t>(offsetof(ActivateTrigger_t2506708453, ___repeatTrigger_6)); }
	inline bool get_repeatTrigger_6() const { return ___repeatTrigger_6; }
	inline bool* get_address_of_repeatTrigger_6() { return &___repeatTrigger_6; }
	inline void set_repeatTrigger_6(bool value)
	{
		___repeatTrigger_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTIVATETRIGGER_T2506708453_H
#ifndef SIMPLEACTIVATORMENU_T3246245209_H
#define SIMPLEACTIVATORMENU_T3246245209_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.SimpleActivatorMenu
struct  SimpleActivatorMenu_t3246245209  : public MonoBehaviour_t752931070
{
public:
	// UnityEngine.GUIText UnityStandardAssets.Utility.SimpleActivatorMenu::camSwitchButton
	GUIText_t711831079 * ___camSwitchButton_2;
	// UnityEngine.GameObject[] UnityStandardAssets.Utility.SimpleActivatorMenu::objects
	GameObjectU5BU5D_t1675533331* ___objects_3;
	// System.Int32 UnityStandardAssets.Utility.SimpleActivatorMenu::m_CurrentActiveObject
	int32_t ___m_CurrentActiveObject_4;

public:
	inline static int32_t get_offset_of_camSwitchButton_2() { return static_cast<int32_t>(offsetof(SimpleActivatorMenu_t3246245209, ___camSwitchButton_2)); }
	inline GUIText_t711831079 * get_camSwitchButton_2() const { return ___camSwitchButton_2; }
	inline GUIText_t711831079 ** get_address_of_camSwitchButton_2() { return &___camSwitchButton_2; }
	inline void set_camSwitchButton_2(GUIText_t711831079 * value)
	{
		___camSwitchButton_2 = value;
		Il2CppCodeGenWriteBarrier((&___camSwitchButton_2), value);
	}

	inline static int32_t get_offset_of_objects_3() { return static_cast<int32_t>(offsetof(SimpleActivatorMenu_t3246245209, ___objects_3)); }
	inline GameObjectU5BU5D_t1675533331* get_objects_3() const { return ___objects_3; }
	inline GameObjectU5BU5D_t1675533331** get_address_of_objects_3() { return &___objects_3; }
	inline void set_objects_3(GameObjectU5BU5D_t1675533331* value)
	{
		___objects_3 = value;
		Il2CppCodeGenWriteBarrier((&___objects_3), value);
	}

	inline static int32_t get_offset_of_m_CurrentActiveObject_4() { return static_cast<int32_t>(offsetof(SimpleActivatorMenu_t3246245209, ___m_CurrentActiveObject_4)); }
	inline int32_t get_m_CurrentActiveObject_4() const { return ___m_CurrentActiveObject_4; }
	inline int32_t* get_address_of_m_CurrentActiveObject_4() { return &___m_CurrentActiveObject_4; }
	inline void set_m_CurrentActiveObject_4(int32_t value)
	{
		___m_CurrentActiveObject_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIMPLEACTIVATORMENU_T3246245209_H
#ifndef SMOOTHFOLLOW_T2076569779_H
#define SMOOTHFOLLOW_T2076569779_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.SmoothFollow
struct  SmoothFollow_t2076569779  : public MonoBehaviour_t752931070
{
public:
	// UnityEngine.Transform UnityStandardAssets.Utility.SmoothFollow::target
	Transform_t2055145993 * ___target_2;
	// System.Single UnityStandardAssets.Utility.SmoothFollow::distance
	float ___distance_3;
	// System.Single UnityStandardAssets.Utility.SmoothFollow::height
	float ___height_4;
	// System.Single UnityStandardAssets.Utility.SmoothFollow::rotationDamping
	float ___rotationDamping_5;
	// System.Single UnityStandardAssets.Utility.SmoothFollow::heightDamping
	float ___heightDamping_6;

public:
	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(SmoothFollow_t2076569779, ___target_2)); }
	inline Transform_t2055145993 * get_target_2() const { return ___target_2; }
	inline Transform_t2055145993 ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(Transform_t2055145993 * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier((&___target_2), value);
	}

	inline static int32_t get_offset_of_distance_3() { return static_cast<int32_t>(offsetof(SmoothFollow_t2076569779, ___distance_3)); }
	inline float get_distance_3() const { return ___distance_3; }
	inline float* get_address_of_distance_3() { return &___distance_3; }
	inline void set_distance_3(float value)
	{
		___distance_3 = value;
	}

	inline static int32_t get_offset_of_height_4() { return static_cast<int32_t>(offsetof(SmoothFollow_t2076569779, ___height_4)); }
	inline float get_height_4() const { return ___height_4; }
	inline float* get_address_of_height_4() { return &___height_4; }
	inline void set_height_4(float value)
	{
		___height_4 = value;
	}

	inline static int32_t get_offset_of_rotationDamping_5() { return static_cast<int32_t>(offsetof(SmoothFollow_t2076569779, ___rotationDamping_5)); }
	inline float get_rotationDamping_5() const { return ___rotationDamping_5; }
	inline float* get_address_of_rotationDamping_5() { return &___rotationDamping_5; }
	inline void set_rotationDamping_5(float value)
	{
		___rotationDamping_5 = value;
	}

	inline static int32_t get_offset_of_heightDamping_6() { return static_cast<int32_t>(offsetof(SmoothFollow_t2076569779, ___heightDamping_6)); }
	inline float get_heightDamping_6() const { return ___heightDamping_6; }
	inline float* get_address_of_heightDamping_6() { return &___heightDamping_6; }
	inline void set_heightDamping_6(float value)
	{
		___heightDamping_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SMOOTHFOLLOW_T2076569779_H
#ifndef ALPHABUTTONCLICKMASK_T3965512579_H
#define ALPHABUTTONCLICKMASK_T3965512579_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AlphaButtonClickMask
struct  AlphaButtonClickMask_t3965512579  : public MonoBehaviour_t752931070
{
public:
	// UnityEngine.UI.Image AlphaButtonClickMask::_image
	Image_t1498872576 * ____image_2;

public:
	inline static int32_t get_offset_of__image_2() { return static_cast<int32_t>(offsetof(AlphaButtonClickMask_t3965512579, ____image_2)); }
	inline Image_t1498872576 * get__image_2() const { return ____image_2; }
	inline Image_t1498872576 ** get_address_of__image_2() { return &____image_2; }
	inline void set__image_2(Image_t1498872576 * value)
	{
		____image_2 = value;
		Il2CppCodeGenWriteBarrier((&____image_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ALPHABUTTONCLICKMASK_T3965512579_H
#ifndef AUTOMOBILESHADERSWITCH_T3036659805_H
#define AUTOMOBILESHADERSWITCH_T3036659805_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.AutoMobileShaderSwitch
struct  AutoMobileShaderSwitch_t3036659805  : public MonoBehaviour_t752931070
{
public:
	// UnityStandardAssets.Utility.AutoMobileShaderSwitch/ReplacementList UnityStandardAssets.Utility.AutoMobileShaderSwitch::m_ReplacementList
	ReplacementList_t2946751215 * ___m_ReplacementList_2;

public:
	inline static int32_t get_offset_of_m_ReplacementList_2() { return static_cast<int32_t>(offsetof(AutoMobileShaderSwitch_t3036659805, ___m_ReplacementList_2)); }
	inline ReplacementList_t2946751215 * get_m_ReplacementList_2() const { return ___m_ReplacementList_2; }
	inline ReplacementList_t2946751215 ** get_address_of_m_ReplacementList_2() { return &___m_ReplacementList_2; }
	inline void set_m_ReplacementList_2(ReplacementList_t2946751215 * value)
	{
		___m_ReplacementList_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_ReplacementList_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUTOMOBILESHADERSWITCH_T3036659805_H
#ifndef SMOKEPARTICLES_T4108122606_H
#define SMOKEPARTICLES_T4108122606_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Effects.SmokeParticles
struct  SmokeParticles_t4108122606  : public MonoBehaviour_t752931070
{
public:
	// UnityEngine.AudioClip[] UnityStandardAssets.Effects.SmokeParticles::extinguishSounds
	AudioClipU5BU5D_t3407633778* ___extinguishSounds_2;

public:
	inline static int32_t get_offset_of_extinguishSounds_2() { return static_cast<int32_t>(offsetof(SmokeParticles_t4108122606, ___extinguishSounds_2)); }
	inline AudioClipU5BU5D_t3407633778* get_extinguishSounds_2() const { return ___extinguishSounds_2; }
	inline AudioClipU5BU5D_t3407633778** get_address_of_extinguishSounds_2() { return &___extinguishSounds_2; }
	inline void set_extinguishSounds_2(AudioClipU5BU5D_t3407633778* value)
	{
		___extinguishSounds_2 = value;
		Il2CppCodeGenWriteBarrier((&___extinguishSounds_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SMOKEPARTICLES_T4108122606_H
#ifndef PARTICLESYSTEMMULTIPLIER_T1179989835_H
#define PARTICLESYSTEMMULTIPLIER_T1179989835_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Effects.ParticleSystemMultiplier
struct  ParticleSystemMultiplier_t1179989835  : public MonoBehaviour_t752931070
{
public:
	// System.Single UnityStandardAssets.Effects.ParticleSystemMultiplier::multiplier
	float ___multiplier_2;

public:
	inline static int32_t get_offset_of_multiplier_2() { return static_cast<int32_t>(offsetof(ParticleSystemMultiplier_t1179989835, ___multiplier_2)); }
	inline float get_multiplier_2() const { return ___multiplier_2; }
	inline float* get_address_of_multiplier_2() { return &___multiplier_2; }
	inline void set_multiplier_2(float value)
	{
		___multiplier_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARTICLESYSTEMMULTIPLIER_T1179989835_H
#ifndef AUTOMOVEANDROTATE_T845740387_H
#define AUTOMOVEANDROTATE_T845740387_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.AutoMoveAndRotate
struct  AutoMoveAndRotate_t845740387  : public MonoBehaviour_t752931070
{
public:
	// UnityStandardAssets.Utility.AutoMoveAndRotate/Vector3andSpace UnityStandardAssets.Utility.AutoMoveAndRotate::moveUnitsPerSecond
	Vector3andSpace_t1464337399 * ___moveUnitsPerSecond_2;
	// UnityStandardAssets.Utility.AutoMoveAndRotate/Vector3andSpace UnityStandardAssets.Utility.AutoMoveAndRotate::rotateDegreesPerSecond
	Vector3andSpace_t1464337399 * ___rotateDegreesPerSecond_3;
	// System.Boolean UnityStandardAssets.Utility.AutoMoveAndRotate::ignoreTimescale
	bool ___ignoreTimescale_4;
	// System.Single UnityStandardAssets.Utility.AutoMoveAndRotate::m_LastRealTime
	float ___m_LastRealTime_5;

public:
	inline static int32_t get_offset_of_moveUnitsPerSecond_2() { return static_cast<int32_t>(offsetof(AutoMoveAndRotate_t845740387, ___moveUnitsPerSecond_2)); }
	inline Vector3andSpace_t1464337399 * get_moveUnitsPerSecond_2() const { return ___moveUnitsPerSecond_2; }
	inline Vector3andSpace_t1464337399 ** get_address_of_moveUnitsPerSecond_2() { return &___moveUnitsPerSecond_2; }
	inline void set_moveUnitsPerSecond_2(Vector3andSpace_t1464337399 * value)
	{
		___moveUnitsPerSecond_2 = value;
		Il2CppCodeGenWriteBarrier((&___moveUnitsPerSecond_2), value);
	}

	inline static int32_t get_offset_of_rotateDegreesPerSecond_3() { return static_cast<int32_t>(offsetof(AutoMoveAndRotate_t845740387, ___rotateDegreesPerSecond_3)); }
	inline Vector3andSpace_t1464337399 * get_rotateDegreesPerSecond_3() const { return ___rotateDegreesPerSecond_3; }
	inline Vector3andSpace_t1464337399 ** get_address_of_rotateDegreesPerSecond_3() { return &___rotateDegreesPerSecond_3; }
	inline void set_rotateDegreesPerSecond_3(Vector3andSpace_t1464337399 * value)
	{
		___rotateDegreesPerSecond_3 = value;
		Il2CppCodeGenWriteBarrier((&___rotateDegreesPerSecond_3), value);
	}

	inline static int32_t get_offset_of_ignoreTimescale_4() { return static_cast<int32_t>(offsetof(AutoMoveAndRotate_t845740387, ___ignoreTimescale_4)); }
	inline bool get_ignoreTimescale_4() const { return ___ignoreTimescale_4; }
	inline bool* get_address_of_ignoreTimescale_4() { return &___ignoreTimescale_4; }
	inline void set_ignoreTimescale_4(bool value)
	{
		___ignoreTimescale_4 = value;
	}

	inline static int32_t get_offset_of_m_LastRealTime_5() { return static_cast<int32_t>(offsetof(AutoMoveAndRotate_t845740387, ___m_LastRealTime_5)); }
	inline float get_m_LastRealTime_5() const { return ___m_LastRealTime_5; }
	inline float* get_address_of_m_LastRealTime_5() { return &___m_LastRealTime_5; }
	inline void set_m_LastRealTime_5(float value)
	{
		___m_LastRealTime_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUTOMOVEANDROTATE_T845740387_H
#ifndef DRAGRIGIDBODY_T888283494_H
#define DRAGRIGIDBODY_T888283494_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.DragRigidbody
struct  DragRigidbody_t888283494  : public MonoBehaviour_t752931070
{
public:
	// UnityEngine.SpringJoint UnityStandardAssets.Utility.DragRigidbody::m_SpringJoint
	SpringJoint_t914811063 * ___m_SpringJoint_8;

public:
	inline static int32_t get_offset_of_m_SpringJoint_8() { return static_cast<int32_t>(offsetof(DragRigidbody_t888283494, ___m_SpringJoint_8)); }
	inline SpringJoint_t914811063 * get_m_SpringJoint_8() const { return ___m_SpringJoint_8; }
	inline SpringJoint_t914811063 ** get_address_of_m_SpringJoint_8() { return &___m_SpringJoint_8; }
	inline void set_m_SpringJoint_8(SpringJoint_t914811063 * value)
	{
		___m_SpringJoint_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_SpringJoint_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DRAGRIGIDBODY_T888283494_H
#ifndef DYNAMICSHADOWSETTINGS_T2673623545_H
#define DYNAMICSHADOWSETTINGS_T2673623545_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.DynamicShadowSettings
struct  DynamicShadowSettings_t2673623545  : public MonoBehaviour_t752931070
{
public:
	// UnityEngine.Light UnityStandardAssets.Utility.DynamicShadowSettings::sunLight
	Light_t3486143244 * ___sunLight_2;
	// System.Single UnityStandardAssets.Utility.DynamicShadowSettings::minHeight
	float ___minHeight_3;
	// System.Single UnityStandardAssets.Utility.DynamicShadowSettings::minShadowDistance
	float ___minShadowDistance_4;
	// System.Single UnityStandardAssets.Utility.DynamicShadowSettings::minShadowBias
	float ___minShadowBias_5;
	// System.Single UnityStandardAssets.Utility.DynamicShadowSettings::maxHeight
	float ___maxHeight_6;
	// System.Single UnityStandardAssets.Utility.DynamicShadowSettings::maxShadowDistance
	float ___maxShadowDistance_7;
	// System.Single UnityStandardAssets.Utility.DynamicShadowSettings::maxShadowBias
	float ___maxShadowBias_8;
	// System.Single UnityStandardAssets.Utility.DynamicShadowSettings::adaptTime
	float ___adaptTime_9;
	// System.Single UnityStandardAssets.Utility.DynamicShadowSettings::m_SmoothHeight
	float ___m_SmoothHeight_10;
	// System.Single UnityStandardAssets.Utility.DynamicShadowSettings::m_ChangeSpeed
	float ___m_ChangeSpeed_11;
	// System.Single UnityStandardAssets.Utility.DynamicShadowSettings::m_OriginalStrength
	float ___m_OriginalStrength_12;

public:
	inline static int32_t get_offset_of_sunLight_2() { return static_cast<int32_t>(offsetof(DynamicShadowSettings_t2673623545, ___sunLight_2)); }
	inline Light_t3486143244 * get_sunLight_2() const { return ___sunLight_2; }
	inline Light_t3486143244 ** get_address_of_sunLight_2() { return &___sunLight_2; }
	inline void set_sunLight_2(Light_t3486143244 * value)
	{
		___sunLight_2 = value;
		Il2CppCodeGenWriteBarrier((&___sunLight_2), value);
	}

	inline static int32_t get_offset_of_minHeight_3() { return static_cast<int32_t>(offsetof(DynamicShadowSettings_t2673623545, ___minHeight_3)); }
	inline float get_minHeight_3() const { return ___minHeight_3; }
	inline float* get_address_of_minHeight_3() { return &___minHeight_3; }
	inline void set_minHeight_3(float value)
	{
		___minHeight_3 = value;
	}

	inline static int32_t get_offset_of_minShadowDistance_4() { return static_cast<int32_t>(offsetof(DynamicShadowSettings_t2673623545, ___minShadowDistance_4)); }
	inline float get_minShadowDistance_4() const { return ___minShadowDistance_4; }
	inline float* get_address_of_minShadowDistance_4() { return &___minShadowDistance_4; }
	inline void set_minShadowDistance_4(float value)
	{
		___minShadowDistance_4 = value;
	}

	inline static int32_t get_offset_of_minShadowBias_5() { return static_cast<int32_t>(offsetof(DynamicShadowSettings_t2673623545, ___minShadowBias_5)); }
	inline float get_minShadowBias_5() const { return ___minShadowBias_5; }
	inline float* get_address_of_minShadowBias_5() { return &___minShadowBias_5; }
	inline void set_minShadowBias_5(float value)
	{
		___minShadowBias_5 = value;
	}

	inline static int32_t get_offset_of_maxHeight_6() { return static_cast<int32_t>(offsetof(DynamicShadowSettings_t2673623545, ___maxHeight_6)); }
	inline float get_maxHeight_6() const { return ___maxHeight_6; }
	inline float* get_address_of_maxHeight_6() { return &___maxHeight_6; }
	inline void set_maxHeight_6(float value)
	{
		___maxHeight_6 = value;
	}

	inline static int32_t get_offset_of_maxShadowDistance_7() { return static_cast<int32_t>(offsetof(DynamicShadowSettings_t2673623545, ___maxShadowDistance_7)); }
	inline float get_maxShadowDistance_7() const { return ___maxShadowDistance_7; }
	inline float* get_address_of_maxShadowDistance_7() { return &___maxShadowDistance_7; }
	inline void set_maxShadowDistance_7(float value)
	{
		___maxShadowDistance_7 = value;
	}

	inline static int32_t get_offset_of_maxShadowBias_8() { return static_cast<int32_t>(offsetof(DynamicShadowSettings_t2673623545, ___maxShadowBias_8)); }
	inline float get_maxShadowBias_8() const { return ___maxShadowBias_8; }
	inline float* get_address_of_maxShadowBias_8() { return &___maxShadowBias_8; }
	inline void set_maxShadowBias_8(float value)
	{
		___maxShadowBias_8 = value;
	}

	inline static int32_t get_offset_of_adaptTime_9() { return static_cast<int32_t>(offsetof(DynamicShadowSettings_t2673623545, ___adaptTime_9)); }
	inline float get_adaptTime_9() const { return ___adaptTime_9; }
	inline float* get_address_of_adaptTime_9() { return &___adaptTime_9; }
	inline void set_adaptTime_9(float value)
	{
		___adaptTime_9 = value;
	}

	inline static int32_t get_offset_of_m_SmoothHeight_10() { return static_cast<int32_t>(offsetof(DynamicShadowSettings_t2673623545, ___m_SmoothHeight_10)); }
	inline float get_m_SmoothHeight_10() const { return ___m_SmoothHeight_10; }
	inline float* get_address_of_m_SmoothHeight_10() { return &___m_SmoothHeight_10; }
	inline void set_m_SmoothHeight_10(float value)
	{
		___m_SmoothHeight_10 = value;
	}

	inline static int32_t get_offset_of_m_ChangeSpeed_11() { return static_cast<int32_t>(offsetof(DynamicShadowSettings_t2673623545, ___m_ChangeSpeed_11)); }
	inline float get_m_ChangeSpeed_11() const { return ___m_ChangeSpeed_11; }
	inline float* get_address_of_m_ChangeSpeed_11() { return &___m_ChangeSpeed_11; }
	inline void set_m_ChangeSpeed_11(float value)
	{
		___m_ChangeSpeed_11 = value;
	}

	inline static int32_t get_offset_of_m_OriginalStrength_12() { return static_cast<int32_t>(offsetof(DynamicShadowSettings_t2673623545, ___m_OriginalStrength_12)); }
	inline float get_m_OriginalStrength_12() const { return ___m_OriginalStrength_12; }
	inline float* get_address_of_m_OriginalStrength_12() { return &___m_OriginalStrength_12; }
	inline void set_m_OriginalStrength_12(float value)
	{
		___m_OriginalStrength_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DYNAMICSHADOWSETTINGS_T2673623545_H
#ifndef EVENTSYSTEMCHECKER_T973348861_H
#define EVENTSYSTEMCHECKER_T973348861_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EventSystemChecker
struct  EventSystemChecker_t973348861  : public MonoBehaviour_t752931070
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTSYSTEMCHECKER_T973348861_H
#ifndef FOLLOWTARGET_T3064993733_H
#define FOLLOWTARGET_T3064993733_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.FollowTarget
struct  FollowTarget_t3064993733  : public MonoBehaviour_t752931070
{
public:
	// UnityEngine.Transform UnityStandardAssets.Utility.FollowTarget::target
	Transform_t2055145993 * ___target_2;
	// UnityEngine.Vector3 UnityStandardAssets.Utility.FollowTarget::offset
	Vector3_t868553430  ___offset_3;

public:
	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(FollowTarget_t3064993733, ___target_2)); }
	inline Transform_t2055145993 * get_target_2() const { return ___target_2; }
	inline Transform_t2055145993 ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(Transform_t2055145993 * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier((&___target_2), value);
	}

	inline static int32_t get_offset_of_offset_3() { return static_cast<int32_t>(offsetof(FollowTarget_t3064993733, ___offset_3)); }
	inline Vector3_t868553430  get_offset_3() const { return ___offset_3; }
	inline Vector3_t868553430 * get_address_of_offset_3() { return &___offset_3; }
	inline void set_offset_3(Vector3_t868553430  value)
	{
		___offset_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FOLLOWTARGET_T3064993733_H
#ifndef FORCEDRESET_T1986562538_H
#define FORCEDRESET_T1986562538_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ForcedReset
struct  ForcedReset_t1986562538  : public MonoBehaviour_t752931070
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORCEDRESET_T1986562538_H
#ifndef HOSE_T1525323702_H
#define HOSE_T1525323702_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Effects.Hose
struct  Hose_t1525323702  : public MonoBehaviour_t752931070
{
public:
	// System.Single UnityStandardAssets.Effects.Hose::maxPower
	float ___maxPower_2;
	// System.Single UnityStandardAssets.Effects.Hose::minPower
	float ___minPower_3;
	// System.Single UnityStandardAssets.Effects.Hose::changeSpeed
	float ___changeSpeed_4;
	// UnityEngine.ParticleSystem[] UnityStandardAssets.Effects.Hose::hoseWaterSystems
	ParticleSystemU5BU5D_t1600147907* ___hoseWaterSystems_5;
	// UnityEngine.Renderer UnityStandardAssets.Effects.Hose::systemRenderer
	Renderer_t1118874217 * ___systemRenderer_6;
	// System.Single UnityStandardAssets.Effects.Hose::m_Power
	float ___m_Power_7;

public:
	inline static int32_t get_offset_of_maxPower_2() { return static_cast<int32_t>(offsetof(Hose_t1525323702, ___maxPower_2)); }
	inline float get_maxPower_2() const { return ___maxPower_2; }
	inline float* get_address_of_maxPower_2() { return &___maxPower_2; }
	inline void set_maxPower_2(float value)
	{
		___maxPower_2 = value;
	}

	inline static int32_t get_offset_of_minPower_3() { return static_cast<int32_t>(offsetof(Hose_t1525323702, ___minPower_3)); }
	inline float get_minPower_3() const { return ___minPower_3; }
	inline float* get_address_of_minPower_3() { return &___minPower_3; }
	inline void set_minPower_3(float value)
	{
		___minPower_3 = value;
	}

	inline static int32_t get_offset_of_changeSpeed_4() { return static_cast<int32_t>(offsetof(Hose_t1525323702, ___changeSpeed_4)); }
	inline float get_changeSpeed_4() const { return ___changeSpeed_4; }
	inline float* get_address_of_changeSpeed_4() { return &___changeSpeed_4; }
	inline void set_changeSpeed_4(float value)
	{
		___changeSpeed_4 = value;
	}

	inline static int32_t get_offset_of_hoseWaterSystems_5() { return static_cast<int32_t>(offsetof(Hose_t1525323702, ___hoseWaterSystems_5)); }
	inline ParticleSystemU5BU5D_t1600147907* get_hoseWaterSystems_5() const { return ___hoseWaterSystems_5; }
	inline ParticleSystemU5BU5D_t1600147907** get_address_of_hoseWaterSystems_5() { return &___hoseWaterSystems_5; }
	inline void set_hoseWaterSystems_5(ParticleSystemU5BU5D_t1600147907* value)
	{
		___hoseWaterSystems_5 = value;
		Il2CppCodeGenWriteBarrier((&___hoseWaterSystems_5), value);
	}

	inline static int32_t get_offset_of_systemRenderer_6() { return static_cast<int32_t>(offsetof(Hose_t1525323702, ___systemRenderer_6)); }
	inline Renderer_t1118874217 * get_systemRenderer_6() const { return ___systemRenderer_6; }
	inline Renderer_t1118874217 ** get_address_of_systemRenderer_6() { return &___systemRenderer_6; }
	inline void set_systemRenderer_6(Renderer_t1118874217 * value)
	{
		___systemRenderer_6 = value;
		Il2CppCodeGenWriteBarrier((&___systemRenderer_6), value);
	}

	inline static int32_t get_offset_of_m_Power_7() { return static_cast<int32_t>(offsetof(Hose_t1525323702, ___m_Power_7)); }
	inline float get_m_Power_7() const { return ___m_Power_7; }
	inline float* get_address_of_m_Power_7() { return &___m_Power_7; }
	inline void set_m_Power_7(float value)
	{
		___m_Power_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HOSE_T1525323702_H
#ifndef FIRELIGHT_T759501483_H
#define FIRELIGHT_T759501483_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Effects.FireLight
struct  FireLight_t759501483  : public MonoBehaviour_t752931070
{
public:
	// System.Single UnityStandardAssets.Effects.FireLight::m_Rnd
	float ___m_Rnd_2;
	// System.Boolean UnityStandardAssets.Effects.FireLight::m_Burning
	bool ___m_Burning_3;
	// UnityEngine.Light UnityStandardAssets.Effects.FireLight::m_Light
	Light_t3486143244 * ___m_Light_4;

public:
	inline static int32_t get_offset_of_m_Rnd_2() { return static_cast<int32_t>(offsetof(FireLight_t759501483, ___m_Rnd_2)); }
	inline float get_m_Rnd_2() const { return ___m_Rnd_2; }
	inline float* get_address_of_m_Rnd_2() { return &___m_Rnd_2; }
	inline void set_m_Rnd_2(float value)
	{
		___m_Rnd_2 = value;
	}

	inline static int32_t get_offset_of_m_Burning_3() { return static_cast<int32_t>(offsetof(FireLight_t759501483, ___m_Burning_3)); }
	inline bool get_m_Burning_3() const { return ___m_Burning_3; }
	inline bool* get_address_of_m_Burning_3() { return &___m_Burning_3; }
	inline void set_m_Burning_3(bool value)
	{
		___m_Burning_3 = value;
	}

	inline static int32_t get_offset_of_m_Light_4() { return static_cast<int32_t>(offsetof(FireLight_t759501483, ___m_Light_4)); }
	inline Light_t3486143244 * get_m_Light_4() const { return ___m_Light_4; }
	inline Light_t3486143244 ** get_address_of_m_Light_4() { return &___m_Light_4; }
	inline void set_m_Light_4(Light_t3486143244 * value)
	{
		___m_Light_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Light_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIRELIGHT_T759501483_H
#ifndef FPSCOUNTER_T2726747626_H
#define FPSCOUNTER_T2726747626_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.FPSCounter
struct  FPSCounter_t2726747626  : public MonoBehaviour_t752931070
{
public:
	// System.Int32 UnityStandardAssets.Utility.FPSCounter::m_FpsAccumulator
	int32_t ___m_FpsAccumulator_3;
	// System.Single UnityStandardAssets.Utility.FPSCounter::m_FpsNextPeriod
	float ___m_FpsNextPeriod_4;
	// System.Int32 UnityStandardAssets.Utility.FPSCounter::m_CurrentFps
	int32_t ___m_CurrentFps_5;
	// UnityEngine.UI.Text UnityStandardAssets.Utility.FPSCounter::m_Text
	Text_t2672992687 * ___m_Text_7;

public:
	inline static int32_t get_offset_of_m_FpsAccumulator_3() { return static_cast<int32_t>(offsetof(FPSCounter_t2726747626, ___m_FpsAccumulator_3)); }
	inline int32_t get_m_FpsAccumulator_3() const { return ___m_FpsAccumulator_3; }
	inline int32_t* get_address_of_m_FpsAccumulator_3() { return &___m_FpsAccumulator_3; }
	inline void set_m_FpsAccumulator_3(int32_t value)
	{
		___m_FpsAccumulator_3 = value;
	}

	inline static int32_t get_offset_of_m_FpsNextPeriod_4() { return static_cast<int32_t>(offsetof(FPSCounter_t2726747626, ___m_FpsNextPeriod_4)); }
	inline float get_m_FpsNextPeriod_4() const { return ___m_FpsNextPeriod_4; }
	inline float* get_address_of_m_FpsNextPeriod_4() { return &___m_FpsNextPeriod_4; }
	inline void set_m_FpsNextPeriod_4(float value)
	{
		___m_FpsNextPeriod_4 = value;
	}

	inline static int32_t get_offset_of_m_CurrentFps_5() { return static_cast<int32_t>(offsetof(FPSCounter_t2726747626, ___m_CurrentFps_5)); }
	inline int32_t get_m_CurrentFps_5() const { return ___m_CurrentFps_5; }
	inline int32_t* get_address_of_m_CurrentFps_5() { return &___m_CurrentFps_5; }
	inline void set_m_CurrentFps_5(int32_t value)
	{
		___m_CurrentFps_5 = value;
	}

	inline static int32_t get_offset_of_m_Text_7() { return static_cast<int32_t>(offsetof(FPSCounter_t2726747626, ___m_Text_7)); }
	inline Text_t2672992687 * get_m_Text_7() const { return ___m_Text_7; }
	inline Text_t2672992687 ** get_address_of_m_Text_7() { return &___m_Text_7; }
	inline void set_m_Text_7(Text_t2672992687 * value)
	{
		___m_Text_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_Text_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FPSCOUNTER_T2726747626_H
#ifndef EXTINGUISHABLEPARTICLESYSTEM_T3947283107_H
#define EXTINGUISHABLEPARTICLESYSTEM_T3947283107_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Effects.ExtinguishableParticleSystem
struct  ExtinguishableParticleSystem_t3947283107  : public MonoBehaviour_t752931070
{
public:
	// System.Single UnityStandardAssets.Effects.ExtinguishableParticleSystem::multiplier
	float ___multiplier_2;
	// UnityEngine.ParticleSystem[] UnityStandardAssets.Effects.ExtinguishableParticleSystem::m_Systems
	ParticleSystemU5BU5D_t1600147907* ___m_Systems_3;

public:
	inline static int32_t get_offset_of_multiplier_2() { return static_cast<int32_t>(offsetof(ExtinguishableParticleSystem_t3947283107, ___multiplier_2)); }
	inline float get_multiplier_2() const { return ___multiplier_2; }
	inline float* get_address_of_multiplier_2() { return &___multiplier_2; }
	inline void set_multiplier_2(float value)
	{
		___multiplier_2 = value;
	}

	inline static int32_t get_offset_of_m_Systems_3() { return static_cast<int32_t>(offsetof(ExtinguishableParticleSystem_t3947283107, ___m_Systems_3)); }
	inline ParticleSystemU5BU5D_t1600147907* get_m_Systems_3() const { return ___m_Systems_3; }
	inline ParticleSystemU5BU5D_t1600147907** get_address_of_m_Systems_3() { return &___m_Systems_3; }
	inline void set_m_Systems_3(ParticleSystemU5BU5D_t1600147907* value)
	{
		___m_Systems_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Systems_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXTINGUISHABLEPARTICLESYSTEM_T3947283107_H
#ifndef EXPLOSIVE_T2953301732_H
#define EXPLOSIVE_T2953301732_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Effects.Explosive
struct  Explosive_t2953301732  : public MonoBehaviour_t752931070
{
public:
	// UnityEngine.Transform UnityStandardAssets.Effects.Explosive::explosionPrefab
	Transform_t2055145993 * ___explosionPrefab_2;
	// System.Single UnityStandardAssets.Effects.Explosive::detonationImpactVelocity
	float ___detonationImpactVelocity_3;
	// System.Single UnityStandardAssets.Effects.Explosive::sizeMultiplier
	float ___sizeMultiplier_4;
	// System.Boolean UnityStandardAssets.Effects.Explosive::reset
	bool ___reset_5;
	// System.Single UnityStandardAssets.Effects.Explosive::resetTimeDelay
	float ___resetTimeDelay_6;
	// System.Boolean UnityStandardAssets.Effects.Explosive::m_Exploded
	bool ___m_Exploded_7;
	// UnityStandardAssets.Utility.ObjectResetter UnityStandardAssets.Effects.Explosive::m_ObjectResetter
	ObjectResetter_t2795484887 * ___m_ObjectResetter_8;

public:
	inline static int32_t get_offset_of_explosionPrefab_2() { return static_cast<int32_t>(offsetof(Explosive_t2953301732, ___explosionPrefab_2)); }
	inline Transform_t2055145993 * get_explosionPrefab_2() const { return ___explosionPrefab_2; }
	inline Transform_t2055145993 ** get_address_of_explosionPrefab_2() { return &___explosionPrefab_2; }
	inline void set_explosionPrefab_2(Transform_t2055145993 * value)
	{
		___explosionPrefab_2 = value;
		Il2CppCodeGenWriteBarrier((&___explosionPrefab_2), value);
	}

	inline static int32_t get_offset_of_detonationImpactVelocity_3() { return static_cast<int32_t>(offsetof(Explosive_t2953301732, ___detonationImpactVelocity_3)); }
	inline float get_detonationImpactVelocity_3() const { return ___detonationImpactVelocity_3; }
	inline float* get_address_of_detonationImpactVelocity_3() { return &___detonationImpactVelocity_3; }
	inline void set_detonationImpactVelocity_3(float value)
	{
		___detonationImpactVelocity_3 = value;
	}

	inline static int32_t get_offset_of_sizeMultiplier_4() { return static_cast<int32_t>(offsetof(Explosive_t2953301732, ___sizeMultiplier_4)); }
	inline float get_sizeMultiplier_4() const { return ___sizeMultiplier_4; }
	inline float* get_address_of_sizeMultiplier_4() { return &___sizeMultiplier_4; }
	inline void set_sizeMultiplier_4(float value)
	{
		___sizeMultiplier_4 = value;
	}

	inline static int32_t get_offset_of_reset_5() { return static_cast<int32_t>(offsetof(Explosive_t2953301732, ___reset_5)); }
	inline bool get_reset_5() const { return ___reset_5; }
	inline bool* get_address_of_reset_5() { return &___reset_5; }
	inline void set_reset_5(bool value)
	{
		___reset_5 = value;
	}

	inline static int32_t get_offset_of_resetTimeDelay_6() { return static_cast<int32_t>(offsetof(Explosive_t2953301732, ___resetTimeDelay_6)); }
	inline float get_resetTimeDelay_6() const { return ___resetTimeDelay_6; }
	inline float* get_address_of_resetTimeDelay_6() { return &___resetTimeDelay_6; }
	inline void set_resetTimeDelay_6(float value)
	{
		___resetTimeDelay_6 = value;
	}

	inline static int32_t get_offset_of_m_Exploded_7() { return static_cast<int32_t>(offsetof(Explosive_t2953301732, ___m_Exploded_7)); }
	inline bool get_m_Exploded_7() const { return ___m_Exploded_7; }
	inline bool* get_address_of_m_Exploded_7() { return &___m_Exploded_7; }
	inline void set_m_Exploded_7(bool value)
	{
		___m_Exploded_7 = value;
	}

	inline static int32_t get_offset_of_m_ObjectResetter_8() { return static_cast<int32_t>(offsetof(Explosive_t2953301732, ___m_ObjectResetter_8)); }
	inline ObjectResetter_t2795484887 * get_m_ObjectResetter_8() const { return ___m_ObjectResetter_8; }
	inline ObjectResetter_t2795484887 ** get_address_of_m_ObjectResetter_8() { return &___m_ObjectResetter_8; }
	inline void set_m_ObjectResetter_8(ObjectResetter_t2795484887 * value)
	{
		___m_ObjectResetter_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_ObjectResetter_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPLOSIVE_T2953301732_H
#ifndef OBJECTRESETTER_T2795484887_H
#define OBJECTRESETTER_T2795484887_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.ObjectResetter
struct  ObjectResetter_t2795484887  : public MonoBehaviour_t752931070
{
public:
	// UnityEngine.Vector3 UnityStandardAssets.Utility.ObjectResetter::originalPosition
	Vector3_t868553430  ___originalPosition_2;
	// UnityEngine.Quaternion UnityStandardAssets.Utility.ObjectResetter::originalRotation
	Quaternion_t2915231121  ___originalRotation_3;
	// System.Collections.Generic.List`1<UnityEngine.Transform> UnityStandardAssets.Utility.ObjectResetter::originalStructure
	List_1_t1917975606 * ___originalStructure_4;
	// UnityEngine.Rigidbody UnityStandardAssets.Utility.ObjectResetter::Rigidbody
	Rigidbody_t165260282 * ___Rigidbody_5;

public:
	inline static int32_t get_offset_of_originalPosition_2() { return static_cast<int32_t>(offsetof(ObjectResetter_t2795484887, ___originalPosition_2)); }
	inline Vector3_t868553430  get_originalPosition_2() const { return ___originalPosition_2; }
	inline Vector3_t868553430 * get_address_of_originalPosition_2() { return &___originalPosition_2; }
	inline void set_originalPosition_2(Vector3_t868553430  value)
	{
		___originalPosition_2 = value;
	}

	inline static int32_t get_offset_of_originalRotation_3() { return static_cast<int32_t>(offsetof(ObjectResetter_t2795484887, ___originalRotation_3)); }
	inline Quaternion_t2915231121  get_originalRotation_3() const { return ___originalRotation_3; }
	inline Quaternion_t2915231121 * get_address_of_originalRotation_3() { return &___originalRotation_3; }
	inline void set_originalRotation_3(Quaternion_t2915231121  value)
	{
		___originalRotation_3 = value;
	}

	inline static int32_t get_offset_of_originalStructure_4() { return static_cast<int32_t>(offsetof(ObjectResetter_t2795484887, ___originalStructure_4)); }
	inline List_1_t1917975606 * get_originalStructure_4() const { return ___originalStructure_4; }
	inline List_1_t1917975606 ** get_address_of_originalStructure_4() { return &___originalStructure_4; }
	inline void set_originalStructure_4(List_1_t1917975606 * value)
	{
		___originalStructure_4 = value;
		Il2CppCodeGenWriteBarrier((&___originalStructure_4), value);
	}

	inline static int32_t get_offset_of_Rigidbody_5() { return static_cast<int32_t>(offsetof(ObjectResetter_t2795484887, ___Rigidbody_5)); }
	inline Rigidbody_t165260282 * get_Rigidbody_5() const { return ___Rigidbody_5; }
	inline Rigidbody_t165260282 ** get_address_of_Rigidbody_5() { return &___Rigidbody_5; }
	inline void set_Rigidbody_5(Rigidbody_t165260282 * value)
	{
		___Rigidbody_5 = value;
		Il2CppCodeGenWriteBarrier((&___Rigidbody_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTRESETTER_T2795484887_H
#ifndef PARTICLESYSTEMDESTROYER_T1234272740_H
#define PARTICLESYSTEMDESTROYER_T1234272740_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.ParticleSystemDestroyer
struct  ParticleSystemDestroyer_t1234272740  : public MonoBehaviour_t752931070
{
public:
	// System.Single UnityStandardAssets.Utility.ParticleSystemDestroyer::minDuration
	float ___minDuration_2;
	// System.Single UnityStandardAssets.Utility.ParticleSystemDestroyer::maxDuration
	float ___maxDuration_3;
	// System.Single UnityStandardAssets.Utility.ParticleSystemDestroyer::m_MaxLifetime
	float ___m_MaxLifetime_4;
	// System.Boolean UnityStandardAssets.Utility.ParticleSystemDestroyer::m_EarlyStop
	bool ___m_EarlyStop_5;

public:
	inline static int32_t get_offset_of_minDuration_2() { return static_cast<int32_t>(offsetof(ParticleSystemDestroyer_t1234272740, ___minDuration_2)); }
	inline float get_minDuration_2() const { return ___minDuration_2; }
	inline float* get_address_of_minDuration_2() { return &___minDuration_2; }
	inline void set_minDuration_2(float value)
	{
		___minDuration_2 = value;
	}

	inline static int32_t get_offset_of_maxDuration_3() { return static_cast<int32_t>(offsetof(ParticleSystemDestroyer_t1234272740, ___maxDuration_3)); }
	inline float get_maxDuration_3() const { return ___maxDuration_3; }
	inline float* get_address_of_maxDuration_3() { return &___maxDuration_3; }
	inline void set_maxDuration_3(float value)
	{
		___maxDuration_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxLifetime_4() { return static_cast<int32_t>(offsetof(ParticleSystemDestroyer_t1234272740, ___m_MaxLifetime_4)); }
	inline float get_m_MaxLifetime_4() const { return ___m_MaxLifetime_4; }
	inline float* get_address_of_m_MaxLifetime_4() { return &___m_MaxLifetime_4; }
	inline void set_m_MaxLifetime_4(float value)
	{
		___m_MaxLifetime_4 = value;
	}

	inline static int32_t get_offset_of_m_EarlyStop_5() { return static_cast<int32_t>(offsetof(ParticleSystemDestroyer_t1234272740, ___m_EarlyStop_5)); }
	inline bool get_m_EarlyStop_5() const { return ___m_EarlyStop_5; }
	inline bool* get_address_of_m_EarlyStop_5() { return &___m_EarlyStop_5; }
	inline void set_m_EarlyStop_5(bool value)
	{
		___m_EarlyStop_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARTICLESYSTEMDESTROYER_T1234272740_H
#ifndef EXPLOSIONPHYSICSFORCE_T1523072557_H
#define EXPLOSIONPHYSICSFORCE_T1523072557_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Effects.ExplosionPhysicsForce
struct  ExplosionPhysicsForce_t1523072557  : public MonoBehaviour_t752931070
{
public:
	// System.Single UnityStandardAssets.Effects.ExplosionPhysicsForce::explosionForce
	float ___explosionForce_2;

public:
	inline static int32_t get_offset_of_explosionForce_2() { return static_cast<int32_t>(offsetof(ExplosionPhysicsForce_t1523072557, ___explosionForce_2)); }
	inline float get_explosionForce_2() const { return ___explosionForce_2; }
	inline float* get_address_of_explosionForce_2() { return &___explosionForce_2; }
	inline void set_explosionForce_2(float value)
	{
		___explosionForce_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPLOSIONPHYSICSFORCE_T1523072557_H
#ifndef PLATFORMSPECIFICCONTENT_T1700683501_H
#define PLATFORMSPECIFICCONTENT_T1700683501_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.PlatformSpecificContent
struct  PlatformSpecificContent_t1700683501  : public MonoBehaviour_t752931070
{
public:
	// UnityStandardAssets.Utility.PlatformSpecificContent/BuildTargetGroup UnityStandardAssets.Utility.PlatformSpecificContent::m_BuildTargetGroup
	int32_t ___m_BuildTargetGroup_2;
	// UnityEngine.GameObject[] UnityStandardAssets.Utility.PlatformSpecificContent::m_Content
	GameObjectU5BU5D_t1675533331* ___m_Content_3;
	// UnityEngine.MonoBehaviour[] UnityStandardAssets.Utility.PlatformSpecificContent::m_MonoBehaviours
	MonoBehaviourU5BU5D_t2292155723* ___m_MonoBehaviours_4;
	// System.Boolean UnityStandardAssets.Utility.PlatformSpecificContent::m_ChildrenOfThisObject
	bool ___m_ChildrenOfThisObject_5;

public:
	inline static int32_t get_offset_of_m_BuildTargetGroup_2() { return static_cast<int32_t>(offsetof(PlatformSpecificContent_t1700683501, ___m_BuildTargetGroup_2)); }
	inline int32_t get_m_BuildTargetGroup_2() const { return ___m_BuildTargetGroup_2; }
	inline int32_t* get_address_of_m_BuildTargetGroup_2() { return &___m_BuildTargetGroup_2; }
	inline void set_m_BuildTargetGroup_2(int32_t value)
	{
		___m_BuildTargetGroup_2 = value;
	}

	inline static int32_t get_offset_of_m_Content_3() { return static_cast<int32_t>(offsetof(PlatformSpecificContent_t1700683501, ___m_Content_3)); }
	inline GameObjectU5BU5D_t1675533331* get_m_Content_3() const { return ___m_Content_3; }
	inline GameObjectU5BU5D_t1675533331** get_address_of_m_Content_3() { return &___m_Content_3; }
	inline void set_m_Content_3(GameObjectU5BU5D_t1675533331* value)
	{
		___m_Content_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Content_3), value);
	}

	inline static int32_t get_offset_of_m_MonoBehaviours_4() { return static_cast<int32_t>(offsetof(PlatformSpecificContent_t1700683501, ___m_MonoBehaviours_4)); }
	inline MonoBehaviourU5BU5D_t2292155723* get_m_MonoBehaviours_4() const { return ___m_MonoBehaviours_4; }
	inline MonoBehaviourU5BU5D_t2292155723** get_address_of_m_MonoBehaviours_4() { return &___m_MonoBehaviours_4; }
	inline void set_m_MonoBehaviours_4(MonoBehaviourU5BU5D_t2292155723* value)
	{
		___m_MonoBehaviours_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_MonoBehaviours_4), value);
	}

	inline static int32_t get_offset_of_m_ChildrenOfThisObject_5() { return static_cast<int32_t>(offsetof(PlatformSpecificContent_t1700683501, ___m_ChildrenOfThisObject_5)); }
	inline bool get_m_ChildrenOfThisObject_5() const { return ___m_ChildrenOfThisObject_5; }
	inline bool* get_address_of_m_ChildrenOfThisObject_5() { return &___m_ChildrenOfThisObject_5; }
	inline void set_m_ChildrenOfThisObject_5(bool value)
	{
		___m_ChildrenOfThisObject_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLATFORMSPECIFICCONTENT_T1700683501_H
#ifndef WATERHOSEPARTICLES_T3630016600_H
#define WATERHOSEPARTICLES_T3630016600_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Effects.WaterHoseParticles
struct  WaterHoseParticles_t3630016600  : public MonoBehaviour_t752931070
{
public:
	// System.Single UnityStandardAssets.Effects.WaterHoseParticles::force
	float ___force_3;
	// System.Collections.Generic.List`1<UnityEngine.ParticleCollisionEvent> UnityStandardAssets.Effects.WaterHoseParticles::m_CollisionEvents
	List_1_t2820564339 * ___m_CollisionEvents_4;
	// UnityEngine.ParticleSystem UnityStandardAssets.Effects.WaterHoseParticles::m_ParticleSystem
	ParticleSystem_t1455379430 * ___m_ParticleSystem_5;

public:
	inline static int32_t get_offset_of_force_3() { return static_cast<int32_t>(offsetof(WaterHoseParticles_t3630016600, ___force_3)); }
	inline float get_force_3() const { return ___force_3; }
	inline float* get_address_of_force_3() { return &___force_3; }
	inline void set_force_3(float value)
	{
		___force_3 = value;
	}

	inline static int32_t get_offset_of_m_CollisionEvents_4() { return static_cast<int32_t>(offsetof(WaterHoseParticles_t3630016600, ___m_CollisionEvents_4)); }
	inline List_1_t2820564339 * get_m_CollisionEvents_4() const { return ___m_CollisionEvents_4; }
	inline List_1_t2820564339 ** get_address_of_m_CollisionEvents_4() { return &___m_CollisionEvents_4; }
	inline void set_m_CollisionEvents_4(List_1_t2820564339 * value)
	{
		___m_CollisionEvents_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_CollisionEvents_4), value);
	}

	inline static int32_t get_offset_of_m_ParticleSystem_5() { return static_cast<int32_t>(offsetof(WaterHoseParticles_t3630016600, ___m_ParticleSystem_5)); }
	inline ParticleSystem_t1455379430 * get_m_ParticleSystem_5() const { return ___m_ParticleSystem_5; }
	inline ParticleSystem_t1455379430 ** get_address_of_m_ParticleSystem_5() { return &___m_ParticleSystem_5; }
	inline void set_m_ParticleSystem_5(ParticleSystem_t1455379430 * value)
	{
		___m_ParticleSystem_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_ParticleSystem_5), value);
	}
};

struct WaterHoseParticles_t3630016600_StaticFields
{
public:
	// System.Single UnityStandardAssets.Effects.WaterHoseParticles::lastSoundTime
	float ___lastSoundTime_2;

public:
	inline static int32_t get_offset_of_lastSoundTime_2() { return static_cast<int32_t>(offsetof(WaterHoseParticles_t3630016600_StaticFields, ___lastSoundTime_2)); }
	inline float get_lastSoundTime_2() const { return ___lastSoundTime_2; }
	inline float* get_address_of_lastSoundTime_2() { return &___lastSoundTime_2; }
	inline void set_lastSoundTime_2(float value)
	{
		___lastSoundTime_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WATERHOSEPARTICLES_T3630016600_H
#ifndef SIMPLEMOUSEROTATOR_T1063962273_H
#define SIMPLEMOUSEROTATOR_T1063962273_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.SimpleMouseRotator
struct  SimpleMouseRotator_t1063962273  : public MonoBehaviour_t752931070
{
public:
	// UnityEngine.Vector2 UnityStandardAssets.Utility.SimpleMouseRotator::rotationRange
	Vector2_t2603427790  ___rotationRange_2;
	// System.Single UnityStandardAssets.Utility.SimpleMouseRotator::rotationSpeed
	float ___rotationSpeed_3;
	// System.Single UnityStandardAssets.Utility.SimpleMouseRotator::dampingTime
	float ___dampingTime_4;
	// System.Boolean UnityStandardAssets.Utility.SimpleMouseRotator::autoZeroVerticalOnMobile
	bool ___autoZeroVerticalOnMobile_5;
	// System.Boolean UnityStandardAssets.Utility.SimpleMouseRotator::autoZeroHorizontalOnMobile
	bool ___autoZeroHorizontalOnMobile_6;
	// System.Boolean UnityStandardAssets.Utility.SimpleMouseRotator::relative
	bool ___relative_7;
	// UnityEngine.Vector3 UnityStandardAssets.Utility.SimpleMouseRotator::m_TargetAngles
	Vector3_t868553430  ___m_TargetAngles_8;
	// UnityEngine.Vector3 UnityStandardAssets.Utility.SimpleMouseRotator::m_FollowAngles
	Vector3_t868553430  ___m_FollowAngles_9;
	// UnityEngine.Vector3 UnityStandardAssets.Utility.SimpleMouseRotator::m_FollowVelocity
	Vector3_t868553430  ___m_FollowVelocity_10;
	// UnityEngine.Quaternion UnityStandardAssets.Utility.SimpleMouseRotator::m_OriginalRotation
	Quaternion_t2915231121  ___m_OriginalRotation_11;

public:
	inline static int32_t get_offset_of_rotationRange_2() { return static_cast<int32_t>(offsetof(SimpleMouseRotator_t1063962273, ___rotationRange_2)); }
	inline Vector2_t2603427790  get_rotationRange_2() const { return ___rotationRange_2; }
	inline Vector2_t2603427790 * get_address_of_rotationRange_2() { return &___rotationRange_2; }
	inline void set_rotationRange_2(Vector2_t2603427790  value)
	{
		___rotationRange_2 = value;
	}

	inline static int32_t get_offset_of_rotationSpeed_3() { return static_cast<int32_t>(offsetof(SimpleMouseRotator_t1063962273, ___rotationSpeed_3)); }
	inline float get_rotationSpeed_3() const { return ___rotationSpeed_3; }
	inline float* get_address_of_rotationSpeed_3() { return &___rotationSpeed_3; }
	inline void set_rotationSpeed_3(float value)
	{
		___rotationSpeed_3 = value;
	}

	inline static int32_t get_offset_of_dampingTime_4() { return static_cast<int32_t>(offsetof(SimpleMouseRotator_t1063962273, ___dampingTime_4)); }
	inline float get_dampingTime_4() const { return ___dampingTime_4; }
	inline float* get_address_of_dampingTime_4() { return &___dampingTime_4; }
	inline void set_dampingTime_4(float value)
	{
		___dampingTime_4 = value;
	}

	inline static int32_t get_offset_of_autoZeroVerticalOnMobile_5() { return static_cast<int32_t>(offsetof(SimpleMouseRotator_t1063962273, ___autoZeroVerticalOnMobile_5)); }
	inline bool get_autoZeroVerticalOnMobile_5() const { return ___autoZeroVerticalOnMobile_5; }
	inline bool* get_address_of_autoZeroVerticalOnMobile_5() { return &___autoZeroVerticalOnMobile_5; }
	inline void set_autoZeroVerticalOnMobile_5(bool value)
	{
		___autoZeroVerticalOnMobile_5 = value;
	}

	inline static int32_t get_offset_of_autoZeroHorizontalOnMobile_6() { return static_cast<int32_t>(offsetof(SimpleMouseRotator_t1063962273, ___autoZeroHorizontalOnMobile_6)); }
	inline bool get_autoZeroHorizontalOnMobile_6() const { return ___autoZeroHorizontalOnMobile_6; }
	inline bool* get_address_of_autoZeroHorizontalOnMobile_6() { return &___autoZeroHorizontalOnMobile_6; }
	inline void set_autoZeroHorizontalOnMobile_6(bool value)
	{
		___autoZeroHorizontalOnMobile_6 = value;
	}

	inline static int32_t get_offset_of_relative_7() { return static_cast<int32_t>(offsetof(SimpleMouseRotator_t1063962273, ___relative_7)); }
	inline bool get_relative_7() const { return ___relative_7; }
	inline bool* get_address_of_relative_7() { return &___relative_7; }
	inline void set_relative_7(bool value)
	{
		___relative_7 = value;
	}

	inline static int32_t get_offset_of_m_TargetAngles_8() { return static_cast<int32_t>(offsetof(SimpleMouseRotator_t1063962273, ___m_TargetAngles_8)); }
	inline Vector3_t868553430  get_m_TargetAngles_8() const { return ___m_TargetAngles_8; }
	inline Vector3_t868553430 * get_address_of_m_TargetAngles_8() { return &___m_TargetAngles_8; }
	inline void set_m_TargetAngles_8(Vector3_t868553430  value)
	{
		___m_TargetAngles_8 = value;
	}

	inline static int32_t get_offset_of_m_FollowAngles_9() { return static_cast<int32_t>(offsetof(SimpleMouseRotator_t1063962273, ___m_FollowAngles_9)); }
	inline Vector3_t868553430  get_m_FollowAngles_9() const { return ___m_FollowAngles_9; }
	inline Vector3_t868553430 * get_address_of_m_FollowAngles_9() { return &___m_FollowAngles_9; }
	inline void set_m_FollowAngles_9(Vector3_t868553430  value)
	{
		___m_FollowAngles_9 = value;
	}

	inline static int32_t get_offset_of_m_FollowVelocity_10() { return static_cast<int32_t>(offsetof(SimpleMouseRotator_t1063962273, ___m_FollowVelocity_10)); }
	inline Vector3_t868553430  get_m_FollowVelocity_10() const { return ___m_FollowVelocity_10; }
	inline Vector3_t868553430 * get_address_of_m_FollowVelocity_10() { return &___m_FollowVelocity_10; }
	inline void set_m_FollowVelocity_10(Vector3_t868553430  value)
	{
		___m_FollowVelocity_10 = value;
	}

	inline static int32_t get_offset_of_m_OriginalRotation_11() { return static_cast<int32_t>(offsetof(SimpleMouseRotator_t1063962273, ___m_OriginalRotation_11)); }
	inline Quaternion_t2915231121  get_m_OriginalRotation_11() const { return ___m_OriginalRotation_11; }
	inline Quaternion_t2915231121 * get_address_of_m_OriginalRotation_11() { return &___m_OriginalRotation_11; }
	inline void set_m_OriginalRotation_11(Quaternion_t2915231121  value)
	{
		___m_OriginalRotation_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIMPLEMOUSEROTATOR_T1063962273_H
#ifndef TIMEDOBJECTACTIVATOR_T1250698695_H
#define TIMEDOBJECTACTIVATOR_T1250698695_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.TimedObjectActivator
struct  TimedObjectActivator_t1250698695  : public MonoBehaviour_t752931070
{
public:
	// UnityStandardAssets.Utility.TimedObjectActivator/Entries UnityStandardAssets.Utility.TimedObjectActivator::entries
	Entries_t2705690161 * ___entries_2;

public:
	inline static int32_t get_offset_of_entries_2() { return static_cast<int32_t>(offsetof(TimedObjectActivator_t1250698695, ___entries_2)); }
	inline Entries_t2705690161 * get_entries_2() const { return ___entries_2; }
	inline Entries_t2705690161 ** get_address_of_entries_2() { return &___entries_2; }
	inline void set_entries_2(Entries_t2705690161 * value)
	{
		___entries_2 = value;
		Il2CppCodeGenWriteBarrier((&___entries_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMEDOBJECTACTIVATOR_T1250698695_H
#ifndef MOBILECONTROLRIG_T1047527252_H
#define MOBILECONTROLRIG_T1047527252_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.CrossPlatformInput.MobileControlRig
struct  MobileControlRig_t1047527252  : public MonoBehaviour_t752931070
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MOBILECONTROLRIG_T1047527252_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3600 = { sizeof (MobileControlRig_t1047527252), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3601 = { sizeof (MobileInput_t730692892), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3602 = { sizeof (StandaloneInput_t3411235174), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3603 = { sizeof (TiltInput_t1234664235), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3603[5] = 
{
	TiltInput_t1234664235::get_offset_of_mapping_2(),
	TiltInput_t1234664235::get_offset_of_tiltAroundAxis_3(),
	TiltInput_t1234664235::get_offset_of_fullTiltAngle_4(),
	TiltInput_t1234664235::get_offset_of_centreAngleOffset_5(),
	TiltInput_t1234664235::get_offset_of_m_SteerAxis_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3604 = { sizeof (AxisOptions_t450802185)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3604[3] = 
{
	AxisOptions_t450802185::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3605 = { sizeof (AxisMapping_t2010957176), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3605[2] = 
{
	AxisMapping_t2010957176::get_offset_of_type_0(),
	AxisMapping_t2010957176::get_offset_of_axisName_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3606 = { sizeof (MappingType_t2060130504)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3606[5] = 
{
	MappingType_t2060130504::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3607 = { sizeof (TouchPad_t2631742450), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3607[18] = 
{
	TouchPad_t2631742450::get_offset_of_axesToUse_2(),
	TouchPad_t2631742450::get_offset_of_controlStyle_3(),
	TouchPad_t2631742450::get_offset_of_horizontalAxisName_4(),
	TouchPad_t2631742450::get_offset_of_verticalAxisName_5(),
	TouchPad_t2631742450::get_offset_of_Xsensitivity_6(),
	TouchPad_t2631742450::get_offset_of_Ysensitivity_7(),
	TouchPad_t2631742450::get_offset_of_m_StartPos_8(),
	TouchPad_t2631742450::get_offset_of_m_PreviousDelta_9(),
	TouchPad_t2631742450::get_offset_of_m_JoytickOutput_10(),
	TouchPad_t2631742450::get_offset_of_m_UseX_11(),
	TouchPad_t2631742450::get_offset_of_m_UseY_12(),
	TouchPad_t2631742450::get_offset_of_m_HorizontalVirtualAxis_13(),
	TouchPad_t2631742450::get_offset_of_m_VerticalVirtualAxis_14(),
	TouchPad_t2631742450::get_offset_of_m_Dragging_15(),
	TouchPad_t2631742450::get_offset_of_m_Id_16(),
	TouchPad_t2631742450::get_offset_of_m_PreviousTouchPos_17(),
	TouchPad_t2631742450::get_offset_of_m_Center_18(),
	TouchPad_t2631742450::get_offset_of_m_Image_19(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3608 = { sizeof (AxisOption_t772707881)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3608[4] = 
{
	AxisOption_t772707881::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3609 = { sizeof (ControlStyle_t1286057910)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3609[4] = 
{
	ControlStyle_t1286057910::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3610 = { sizeof (VirtualInput_t2373776969), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3610[4] = 
{
	VirtualInput_t2373776969::get_offset_of_U3CvirtualMousePositionU3Ek__BackingField_0(),
	VirtualInput_t2373776969::get_offset_of_m_VirtualAxes_1(),
	VirtualInput_t2373776969::get_offset_of_m_VirtualButtons_2(),
	VirtualInput_t2373776969::get_offset_of_m_AlwaysUseVirtual_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3611 = { sizeof (AfterburnerPhysicsForce_t4158577780), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3611[6] = 
{
	AfterburnerPhysicsForce_t4158577780::get_offset_of_effectAngle_2(),
	AfterburnerPhysicsForce_t4158577780::get_offset_of_effectWidth_3(),
	AfterburnerPhysicsForce_t4158577780::get_offset_of_effectDistance_4(),
	AfterburnerPhysicsForce_t4158577780::get_offset_of_force_5(),
	AfterburnerPhysicsForce_t4158577780::get_offset_of_m_Cols_6(),
	AfterburnerPhysicsForce_t4158577780::get_offset_of_m_Sphere_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3612 = { sizeof (ExplosionFireAndDebris_t1948738392), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3612[4] = 
{
	ExplosionFireAndDebris_t1948738392::get_offset_of_debrisPrefabs_2(),
	ExplosionFireAndDebris_t1948738392::get_offset_of_firePrefab_3(),
	ExplosionFireAndDebris_t1948738392::get_offset_of_numDebrisPieces_4(),
	ExplosionFireAndDebris_t1948738392::get_offset_of_numFires_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3613 = { sizeof (U3CStartU3Ec__Iterator0_t2108371047), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3613[10] = 
{
	U3CStartU3Ec__Iterator0_t2108371047::get_offset_of_U3CmultiplierU3E__0_0(),
	U3CStartU3Ec__Iterator0_t2108371047::get_offset_of_U3CrU3E__0_1(),
	U3CStartU3Ec__Iterator0_t2108371047::get_offset_of_U3CcolsU3E__0_2(),
	U3CStartU3Ec__Iterator0_t2108371047::get_offset_of_U24locvar0_3(),
	U3CStartU3Ec__Iterator0_t2108371047::get_offset_of_U24locvar1_4(),
	U3CStartU3Ec__Iterator0_t2108371047::get_offset_of_U3CtestRU3E__0_5(),
	U3CStartU3Ec__Iterator0_t2108371047::get_offset_of_U24this_6(),
	U3CStartU3Ec__Iterator0_t2108371047::get_offset_of_U24current_7(),
	U3CStartU3Ec__Iterator0_t2108371047::get_offset_of_U24disposing_8(),
	U3CStartU3Ec__Iterator0_t2108371047::get_offset_of_U24PC_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3614 = { sizeof (ExplosionPhysicsForce_t1523072557), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3614[1] = 
{
	ExplosionPhysicsForce_t1523072557::get_offset_of_explosionForce_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3615 = { sizeof (U3CStartU3Ec__Iterator0_t2837328927), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3615[11] = 
{
	U3CStartU3Ec__Iterator0_t2837328927::get_offset_of_U3CmultiplierU3E__0_0(),
	U3CStartU3Ec__Iterator0_t2837328927::get_offset_of_U3CrU3E__0_1(),
	U3CStartU3Ec__Iterator0_t2837328927::get_offset_of_U3CcolsU3E__0_2(),
	U3CStartU3Ec__Iterator0_t2837328927::get_offset_of_U3CrigidbodiesU3E__0_3(),
	U3CStartU3Ec__Iterator0_t2837328927::get_offset_of_U24locvar0_4(),
	U3CStartU3Ec__Iterator0_t2837328927::get_offset_of_U24locvar1_5(),
	U3CStartU3Ec__Iterator0_t2837328927::get_offset_of_U24locvar2_6(),
	U3CStartU3Ec__Iterator0_t2837328927::get_offset_of_U24this_7(),
	U3CStartU3Ec__Iterator0_t2837328927::get_offset_of_U24current_8(),
	U3CStartU3Ec__Iterator0_t2837328927::get_offset_of_U24disposing_9(),
	U3CStartU3Ec__Iterator0_t2837328927::get_offset_of_U24PC_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3616 = { sizeof (Explosive_t2953301732), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3616[7] = 
{
	Explosive_t2953301732::get_offset_of_explosionPrefab_2(),
	Explosive_t2953301732::get_offset_of_detonationImpactVelocity_3(),
	Explosive_t2953301732::get_offset_of_sizeMultiplier_4(),
	Explosive_t2953301732::get_offset_of_reset_5(),
	Explosive_t2953301732::get_offset_of_resetTimeDelay_6(),
	Explosive_t2953301732::get_offset_of_m_Exploded_7(),
	Explosive_t2953301732::get_offset_of_m_ObjectResetter_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3617 = { sizeof (U3COnCollisionEnterU3Ec__Iterator0_t2169992532), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3617[5] = 
{
	U3COnCollisionEnterU3Ec__Iterator0_t2169992532::get_offset_of_col_0(),
	U3COnCollisionEnterU3Ec__Iterator0_t2169992532::get_offset_of_U24this_1(),
	U3COnCollisionEnterU3Ec__Iterator0_t2169992532::get_offset_of_U24current_2(),
	U3COnCollisionEnterU3Ec__Iterator0_t2169992532::get_offset_of_U24disposing_3(),
	U3COnCollisionEnterU3Ec__Iterator0_t2169992532::get_offset_of_U24PC_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3618 = { sizeof (ExtinguishableParticleSystem_t3947283107), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3618[2] = 
{
	ExtinguishableParticleSystem_t3947283107::get_offset_of_multiplier_2(),
	ExtinguishableParticleSystem_t3947283107::get_offset_of_m_Systems_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3619 = { sizeof (FireLight_t759501483), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3619[3] = 
{
	FireLight_t759501483::get_offset_of_m_Rnd_2(),
	FireLight_t759501483::get_offset_of_m_Burning_3(),
	FireLight_t759501483::get_offset_of_m_Light_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3620 = { sizeof (Hose_t1525323702), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3620[6] = 
{
	Hose_t1525323702::get_offset_of_maxPower_2(),
	Hose_t1525323702::get_offset_of_minPower_3(),
	Hose_t1525323702::get_offset_of_changeSpeed_4(),
	Hose_t1525323702::get_offset_of_hoseWaterSystems_5(),
	Hose_t1525323702::get_offset_of_systemRenderer_6(),
	Hose_t1525323702::get_offset_of_m_Power_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3621 = { sizeof (ParticleSystemMultiplier_t1179989835), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3621[1] = 
{
	ParticleSystemMultiplier_t1179989835::get_offset_of_multiplier_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3622 = { sizeof (SmokeParticles_t4108122606), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3622[1] = 
{
	SmokeParticles_t4108122606::get_offset_of_extinguishSounds_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3623 = { sizeof (WaterHoseParticles_t3630016600), -1, sizeof(WaterHoseParticles_t3630016600_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3623[4] = 
{
	WaterHoseParticles_t3630016600_StaticFields::get_offset_of_lastSoundTime_2(),
	WaterHoseParticles_t3630016600::get_offset_of_force_3(),
	WaterHoseParticles_t3630016600::get_offset_of_m_CollisionEvents_4(),
	WaterHoseParticles_t3630016600::get_offset_of_m_ParticleSystem_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3624 = { sizeof (ActivateTrigger_t2506708453), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3624[5] = 
{
	ActivateTrigger_t2506708453::get_offset_of_action_2(),
	ActivateTrigger_t2506708453::get_offset_of_target_3(),
	ActivateTrigger_t2506708453::get_offset_of_source_4(),
	ActivateTrigger_t2506708453::get_offset_of_triggerCount_5(),
	ActivateTrigger_t2506708453::get_offset_of_repeatTrigger_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3625 = { sizeof (Mode_t4004529814)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3625[7] = 
{
	Mode_t4004529814::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3626 = { sizeof (AlphaButtonClickMask_t3965512579), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3626[1] = 
{
	AlphaButtonClickMask_t3965512579::get_offset_of__image_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3627 = { sizeof (AutoMobileShaderSwitch_t3036659805), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3627[1] = 
{
	AutoMobileShaderSwitch_t3036659805::get_offset_of_m_ReplacementList_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3628 = { sizeof (ReplacementDefinition_t1115580298), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3628[2] = 
{
	ReplacementDefinition_t1115580298::get_offset_of_original_0(),
	ReplacementDefinition_t1115580298::get_offset_of_replacement_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3629 = { sizeof (ReplacementList_t2946751215), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3629[1] = 
{
	ReplacementList_t2946751215::get_offset_of_items_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3630 = { sizeof (AutoMoveAndRotate_t845740387), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3630[4] = 
{
	AutoMoveAndRotate_t845740387::get_offset_of_moveUnitsPerSecond_2(),
	AutoMoveAndRotate_t845740387::get_offset_of_rotateDegreesPerSecond_3(),
	AutoMoveAndRotate_t845740387::get_offset_of_ignoreTimescale_4(),
	AutoMoveAndRotate_t845740387::get_offset_of_m_LastRealTime_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3631 = { sizeof (Vector3andSpace_t1464337399), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3631[2] = 
{
	Vector3andSpace_t1464337399::get_offset_of_value_0(),
	Vector3andSpace_t1464337399::get_offset_of_space_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3632 = { sizeof (CameraRefocus_t1559601748), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3632[5] = 
{
	CameraRefocus_t1559601748::get_offset_of_Camera_0(),
	CameraRefocus_t1559601748::get_offset_of_Lookatpoint_1(),
	CameraRefocus_t1559601748::get_offset_of_Parent_2(),
	CameraRefocus_t1559601748::get_offset_of_m_OrigCameraPos_3(),
	CameraRefocus_t1559601748::get_offset_of_m_Refocus_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3633 = { sizeof (CurveControlledBob_t1520511192), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3633[9] = 
{
	CurveControlledBob_t1520511192::get_offset_of_HorizontalBobRange_0(),
	CurveControlledBob_t1520511192::get_offset_of_VerticalBobRange_1(),
	CurveControlledBob_t1520511192::get_offset_of_Bobcurve_2(),
	CurveControlledBob_t1520511192::get_offset_of_VerticaltoHorizontalRatio_3(),
	CurveControlledBob_t1520511192::get_offset_of_m_CyclePositionX_4(),
	CurveControlledBob_t1520511192::get_offset_of_m_CyclePositionY_5(),
	CurveControlledBob_t1520511192::get_offset_of_m_BobBaseInterval_6(),
	CurveControlledBob_t1520511192::get_offset_of_m_OriginalCameraPosition_7(),
	CurveControlledBob_t1520511192::get_offset_of_m_Time_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3634 = { sizeof (DragRigidbody_t888283494), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3634[7] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	DragRigidbody_t888283494::get_offset_of_m_SpringJoint_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3635 = { sizeof (U3CDragObjectU3Ec__Iterator0_t3717782834), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3635[9] = 
{
	U3CDragObjectU3Ec__Iterator0_t3717782834::get_offset_of_U3ColdDragU3E__0_0(),
	U3CDragObjectU3Ec__Iterator0_t3717782834::get_offset_of_U3ColdAngularDragU3E__0_1(),
	U3CDragObjectU3Ec__Iterator0_t3717782834::get_offset_of_U3CmainCameraU3E__0_2(),
	U3CDragObjectU3Ec__Iterator0_t3717782834::get_offset_of_U3CrayU3E__1_3(),
	U3CDragObjectU3Ec__Iterator0_t3717782834::get_offset_of_distance_4(),
	U3CDragObjectU3Ec__Iterator0_t3717782834::get_offset_of_U24this_5(),
	U3CDragObjectU3Ec__Iterator0_t3717782834::get_offset_of_U24current_6(),
	U3CDragObjectU3Ec__Iterator0_t3717782834::get_offset_of_U24disposing_7(),
	U3CDragObjectU3Ec__Iterator0_t3717782834::get_offset_of_U24PC_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3636 = { sizeof (DynamicShadowSettings_t2673623545), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3636[11] = 
{
	DynamicShadowSettings_t2673623545::get_offset_of_sunLight_2(),
	DynamicShadowSettings_t2673623545::get_offset_of_minHeight_3(),
	DynamicShadowSettings_t2673623545::get_offset_of_minShadowDistance_4(),
	DynamicShadowSettings_t2673623545::get_offset_of_minShadowBias_5(),
	DynamicShadowSettings_t2673623545::get_offset_of_maxHeight_6(),
	DynamicShadowSettings_t2673623545::get_offset_of_maxShadowDistance_7(),
	DynamicShadowSettings_t2673623545::get_offset_of_maxShadowBias_8(),
	DynamicShadowSettings_t2673623545::get_offset_of_adaptTime_9(),
	DynamicShadowSettings_t2673623545::get_offset_of_m_SmoothHeight_10(),
	DynamicShadowSettings_t2673623545::get_offset_of_m_ChangeSpeed_11(),
	DynamicShadowSettings_t2673623545::get_offset_of_m_OriginalStrength_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3637 = { sizeof (EventSystemChecker_t973348861), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3638 = { sizeof (FollowTarget_t3064993733), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3638[2] = 
{
	FollowTarget_t3064993733::get_offset_of_target_2(),
	FollowTarget_t3064993733::get_offset_of_offset_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3639 = { sizeof (ForcedReset_t1986562538), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3640 = { sizeof (FOVKick_t3080713664), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3640[6] = 
{
	FOVKick_t3080713664::get_offset_of_Camera_0(),
	FOVKick_t3080713664::get_offset_of_originalFov_1(),
	FOVKick_t3080713664::get_offset_of_FOVIncrease_2(),
	FOVKick_t3080713664::get_offset_of_TimeToIncrease_3(),
	FOVKick_t3080713664::get_offset_of_TimeToDecrease_4(),
	FOVKick_t3080713664::get_offset_of_IncreaseCurve_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3641 = { sizeof (U3CFOVKickUpU3Ec__Iterator0_t3929267167), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3641[5] = 
{
	U3CFOVKickUpU3Ec__Iterator0_t3929267167::get_offset_of_U3CtU3E__0_0(),
	U3CFOVKickUpU3Ec__Iterator0_t3929267167::get_offset_of_U24this_1(),
	U3CFOVKickUpU3Ec__Iterator0_t3929267167::get_offset_of_U24current_2(),
	U3CFOVKickUpU3Ec__Iterator0_t3929267167::get_offset_of_U24disposing_3(),
	U3CFOVKickUpU3Ec__Iterator0_t3929267167::get_offset_of_U24PC_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3642 = { sizeof (U3CFOVKickDownU3Ec__Iterator1_t320720025), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3642[5] = 
{
	U3CFOVKickDownU3Ec__Iterator1_t320720025::get_offset_of_U3CtU3E__0_0(),
	U3CFOVKickDownU3Ec__Iterator1_t320720025::get_offset_of_U24this_1(),
	U3CFOVKickDownU3Ec__Iterator1_t320720025::get_offset_of_U24current_2(),
	U3CFOVKickDownU3Ec__Iterator1_t320720025::get_offset_of_U24disposing_3(),
	U3CFOVKickDownU3Ec__Iterator1_t320720025::get_offset_of_U24PC_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3643 = { sizeof (FPSCounter_t2726747626), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3643[6] = 
{
	0,
	FPSCounter_t2726747626::get_offset_of_m_FpsAccumulator_3(),
	FPSCounter_t2726747626::get_offset_of_m_FpsNextPeriod_4(),
	FPSCounter_t2726747626::get_offset_of_m_CurrentFps_5(),
	0,
	FPSCounter_t2726747626::get_offset_of_m_Text_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3644 = { sizeof (LerpControlledBob_t689571109), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3644[3] = 
{
	LerpControlledBob_t689571109::get_offset_of_BobDuration_0(),
	LerpControlledBob_t689571109::get_offset_of_BobAmount_1(),
	LerpControlledBob_t689571109::get_offset_of_m_Offset_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3645 = { sizeof (U3CDoBobCycleU3Ec__Iterator0_t4040491685), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3645[5] = 
{
	U3CDoBobCycleU3Ec__Iterator0_t4040491685::get_offset_of_U3CtU3E__0_0(),
	U3CDoBobCycleU3Ec__Iterator0_t4040491685::get_offset_of_U24this_1(),
	U3CDoBobCycleU3Ec__Iterator0_t4040491685::get_offset_of_U24current_2(),
	U3CDoBobCycleU3Ec__Iterator0_t4040491685::get_offset_of_U24disposing_3(),
	U3CDoBobCycleU3Ec__Iterator0_t4040491685::get_offset_of_U24PC_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3646 = { sizeof (ObjectResetter_t2795484887), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3646[4] = 
{
	ObjectResetter_t2795484887::get_offset_of_originalPosition_2(),
	ObjectResetter_t2795484887::get_offset_of_originalRotation_3(),
	ObjectResetter_t2795484887::get_offset_of_originalStructure_4(),
	ObjectResetter_t2795484887::get_offset_of_Rigidbody_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3647 = { sizeof (U3CResetCoroutineU3Ec__Iterator0_t1593613527), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3647[7] = 
{
	U3CResetCoroutineU3Ec__Iterator0_t1593613527::get_offset_of_delay_0(),
	U3CResetCoroutineU3Ec__Iterator0_t1593613527::get_offset_of_U24locvar0_1(),
	U3CResetCoroutineU3Ec__Iterator0_t1593613527::get_offset_of_U24locvar1_2(),
	U3CResetCoroutineU3Ec__Iterator0_t1593613527::get_offset_of_U24this_3(),
	U3CResetCoroutineU3Ec__Iterator0_t1593613527::get_offset_of_U24current_4(),
	U3CResetCoroutineU3Ec__Iterator0_t1593613527::get_offset_of_U24disposing_5(),
	U3CResetCoroutineU3Ec__Iterator0_t1593613527::get_offset_of_U24PC_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3648 = { sizeof (ParticleSystemDestroyer_t1234272740), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3648[4] = 
{
	ParticleSystemDestroyer_t1234272740::get_offset_of_minDuration_2(),
	ParticleSystemDestroyer_t1234272740::get_offset_of_maxDuration_3(),
	ParticleSystemDestroyer_t1234272740::get_offset_of_m_MaxLifetime_4(),
	ParticleSystemDestroyer_t1234272740::get_offset_of_m_EarlyStop_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3649 = { sizeof (U3CStartU3Ec__Iterator0_t3075476955), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3649[10] = 
{
	U3CStartU3Ec__Iterator0_t3075476955::get_offset_of_U3CsystemsU3E__0_0(),
	U3CStartU3Ec__Iterator0_t3075476955::get_offset_of_U24locvar0_1(),
	U3CStartU3Ec__Iterator0_t3075476955::get_offset_of_U24locvar1_2(),
	U3CStartU3Ec__Iterator0_t3075476955::get_offset_of_U3CstopTimeU3E__0_3(),
	U3CStartU3Ec__Iterator0_t3075476955::get_offset_of_U24locvar2_4(),
	U3CStartU3Ec__Iterator0_t3075476955::get_offset_of_U24locvar3_5(),
	U3CStartU3Ec__Iterator0_t3075476955::get_offset_of_U24this_6(),
	U3CStartU3Ec__Iterator0_t3075476955::get_offset_of_U24current_7(),
	U3CStartU3Ec__Iterator0_t3075476955::get_offset_of_U24disposing_8(),
	U3CStartU3Ec__Iterator0_t3075476955::get_offset_of_U24PC_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3650 = { sizeof (PlatformSpecificContent_t1700683501), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3650[4] = 
{
	PlatformSpecificContent_t1700683501::get_offset_of_m_BuildTargetGroup_2(),
	PlatformSpecificContent_t1700683501::get_offset_of_m_Content_3(),
	PlatformSpecificContent_t1700683501::get_offset_of_m_MonoBehaviours_4(),
	PlatformSpecificContent_t1700683501::get_offset_of_m_ChildrenOfThisObject_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3651 = { sizeof (BuildTargetGroup_t4252953516)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3651[3] = 
{
	BuildTargetGroup_t4252953516::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3652 = { sizeof (SimpleActivatorMenu_t3246245209), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3652[3] = 
{
	SimpleActivatorMenu_t3246245209::get_offset_of_camSwitchButton_2(),
	SimpleActivatorMenu_t3246245209::get_offset_of_objects_3(),
	SimpleActivatorMenu_t3246245209::get_offset_of_m_CurrentActiveObject_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3653 = { sizeof (SimpleMouseRotator_t1063962273), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3653[10] = 
{
	SimpleMouseRotator_t1063962273::get_offset_of_rotationRange_2(),
	SimpleMouseRotator_t1063962273::get_offset_of_rotationSpeed_3(),
	SimpleMouseRotator_t1063962273::get_offset_of_dampingTime_4(),
	SimpleMouseRotator_t1063962273::get_offset_of_autoZeroVerticalOnMobile_5(),
	SimpleMouseRotator_t1063962273::get_offset_of_autoZeroHorizontalOnMobile_6(),
	SimpleMouseRotator_t1063962273::get_offset_of_relative_7(),
	SimpleMouseRotator_t1063962273::get_offset_of_m_TargetAngles_8(),
	SimpleMouseRotator_t1063962273::get_offset_of_m_FollowAngles_9(),
	SimpleMouseRotator_t1063962273::get_offset_of_m_FollowVelocity_10(),
	SimpleMouseRotator_t1063962273::get_offset_of_m_OriginalRotation_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3654 = { sizeof (SmoothFollow_t2076569779), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3654[5] = 
{
	SmoothFollow_t2076569779::get_offset_of_target_2(),
	SmoothFollow_t2076569779::get_offset_of_distance_3(),
	SmoothFollow_t2076569779::get_offset_of_height_4(),
	SmoothFollow_t2076569779::get_offset_of_rotationDamping_5(),
	SmoothFollow_t2076569779::get_offset_of_heightDamping_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3655 = { sizeof (TimedObjectActivator_t1250698695), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3655[1] = 
{
	TimedObjectActivator_t1250698695::get_offset_of_entries_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3656 = { sizeof (Action_t1205555412)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3656[6] = 
{
	Action_t1205555412::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3657 = { sizeof (Entry_t4243516910), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3657[3] = 
{
	Entry_t4243516910::get_offset_of_target_0(),
	Entry_t4243516910::get_offset_of_action_1(),
	Entry_t4243516910::get_offset_of_delay_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3658 = { sizeof (Entries_t2705690161), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3658[1] = 
{
	Entries_t2705690161::get_offset_of_entries_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3659 = { sizeof (U3CActivateU3Ec__Iterator0_t3997494990), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3659[4] = 
{
	U3CActivateU3Ec__Iterator0_t3997494990::get_offset_of_entry_0(),
	U3CActivateU3Ec__Iterator0_t3997494990::get_offset_of_U24current_1(),
	U3CActivateU3Ec__Iterator0_t3997494990::get_offset_of_U24disposing_2(),
	U3CActivateU3Ec__Iterator0_t3997494990::get_offset_of_U24PC_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3660 = { sizeof (U3CDeactivateU3Ec__Iterator1_t3761656096), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3660[4] = 
{
	U3CDeactivateU3Ec__Iterator1_t3761656096::get_offset_of_entry_0(),
	U3CDeactivateU3Ec__Iterator1_t3761656096::get_offset_of_U24current_1(),
	U3CDeactivateU3Ec__Iterator1_t3761656096::get_offset_of_U24disposing_2(),
	U3CDeactivateU3Ec__Iterator1_t3761656096::get_offset_of_U24PC_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3661 = { sizeof (U3CReloadLevelU3Ec__Iterator2_t2208901700), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3661[4] = 
{
	U3CReloadLevelU3Ec__Iterator2_t2208901700::get_offset_of_entry_0(),
	U3CReloadLevelU3Ec__Iterator2_t2208901700::get_offset_of_U24current_1(),
	U3CReloadLevelU3Ec__Iterator2_t2208901700::get_offset_of_U24disposing_2(),
	U3CReloadLevelU3Ec__Iterator2_t2208901700::get_offset_of_U24PC_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3662 = { sizeof (TimedObjectDestructor_t45241389), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3662[2] = 
{
	TimedObjectDestructor_t45241389::get_offset_of_m_TimeOut_2(),
	TimedObjectDestructor_t45241389::get_offset_of_m_DetachChildren_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3663 = { sizeof (WaypointCircuit_t1307276181), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3663[16] = 
{
	WaypointCircuit_t1307276181::get_offset_of_waypointList_2(),
	WaypointCircuit_t1307276181::get_offset_of_smoothRoute_3(),
	WaypointCircuit_t1307276181::get_offset_of_numPoints_4(),
	WaypointCircuit_t1307276181::get_offset_of_points_5(),
	WaypointCircuit_t1307276181::get_offset_of_distances_6(),
	WaypointCircuit_t1307276181::get_offset_of_editorVisualisationSubsteps_7(),
	WaypointCircuit_t1307276181::get_offset_of_U3CLengthU3Ek__BackingField_8(),
	WaypointCircuit_t1307276181::get_offset_of_p0n_9(),
	WaypointCircuit_t1307276181::get_offset_of_p1n_10(),
	WaypointCircuit_t1307276181::get_offset_of_p2n_11(),
	WaypointCircuit_t1307276181::get_offset_of_p3n_12(),
	WaypointCircuit_t1307276181::get_offset_of_i_13(),
	WaypointCircuit_t1307276181::get_offset_of_P0_14(),
	WaypointCircuit_t1307276181::get_offset_of_P1_15(),
	WaypointCircuit_t1307276181::get_offset_of_P2_16(),
	WaypointCircuit_t1307276181::get_offset_of_P3_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3664 = { sizeof (WaypointList_t2504507529), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3664[2] = 
{
	WaypointList_t2504507529::get_offset_of_circuit_0(),
	WaypointList_t2504507529::get_offset_of_items_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3665 = { sizeof (RoutePoint_t2655024850)+ sizeof (RuntimeObject), sizeof(RoutePoint_t2655024850 ), 0, 0 };
extern const int32_t g_FieldOffsetTable3665[2] = 
{
	RoutePoint_t2655024850::get_offset_of_position_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RoutePoint_t2655024850::get_offset_of_direction_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3666 = { sizeof (WaypointProgressTracker_t1695242906), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3666[15] = 
{
	WaypointProgressTracker_t1695242906::get_offset_of_circuit_2(),
	WaypointProgressTracker_t1695242906::get_offset_of_lookAheadForTargetOffset_3(),
	WaypointProgressTracker_t1695242906::get_offset_of_lookAheadForTargetFactor_4(),
	WaypointProgressTracker_t1695242906::get_offset_of_lookAheadForSpeedOffset_5(),
	WaypointProgressTracker_t1695242906::get_offset_of_lookAheadForSpeedFactor_6(),
	WaypointProgressTracker_t1695242906::get_offset_of_progressStyle_7(),
	WaypointProgressTracker_t1695242906::get_offset_of_pointToPointThreshold_8(),
	WaypointProgressTracker_t1695242906::get_offset_of_U3CtargetPointU3Ek__BackingField_9(),
	WaypointProgressTracker_t1695242906::get_offset_of_U3CspeedPointU3Ek__BackingField_10(),
	WaypointProgressTracker_t1695242906::get_offset_of_U3CprogressPointU3Ek__BackingField_11(),
	WaypointProgressTracker_t1695242906::get_offset_of_target_12(),
	WaypointProgressTracker_t1695242906::get_offset_of_progressDistance_13(),
	WaypointProgressTracker_t1695242906::get_offset_of_progressNum_14(),
	WaypointProgressTracker_t1695242906::get_offset_of_lastPosition_15(),
	WaypointProgressTracker_t1695242906::get_offset_of_speed_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3667 = { sizeof (ProgressStyle_t2960236528)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3667[3] = 
{
	ProgressStyle_t2960236528::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif

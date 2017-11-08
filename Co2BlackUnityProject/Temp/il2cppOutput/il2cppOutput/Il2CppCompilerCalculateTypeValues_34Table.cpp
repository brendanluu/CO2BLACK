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

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "object-internals.h"

// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.iOS.ARPlaneAnchorGameObject>
struct Dictionary_2_t3082885398;
// System.Byte[]
struct ByteU5BU5D_t3249567452;
// Utils.SerializableVector4
struct SerializableVector4_t1132123658;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t435528189;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t431489483;
// System.String
struct String_t;
// UnityEngine.MeshCollider
struct MeshCollider_t2089433223;
// UnityEngine.MeshFilter
struct MeshFilter_t1450006476;
// UnityEngine.GameObject
struct GameObject_t3273633151;
// System.Char[]
struct CharU5BU5D_t2085319390;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t1038618098;
// System.Object[]
struct ObjectU5BU5D_t1642503095;
// UnityEngine.Sprite
struct Sprite_t2649316949;
// System.Void
struct Void_t2213078548;
// Utils.serializableARKitInit
struct serializableARKitInit_t1537145645;
// Utils.serializableUnityARMatrix4x4
struct serializableUnityARMatrix4x4_t2144327380;
// Utils.serializablePointCloud
struct serializablePointCloud_t2102354234;
// Utils.serializableARSessionConfiguration
struct serializableARSessionConfiguration_t1088968605;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t853750501;
// UnityEngine.UI.Selectable
struct Selectable_t3032071154;
// UnityEngine.XR.iOS.ConnectToEditor
struct ConnectToEditor_t69540879;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface
struct UnityARSessionNativeInterface_t3311050297;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_t3593709007;
// UnityEngine.Transform
struct Transform_t3122675411;
// UnityEngine.Networking.PlayerConnection.PlayerConnection
struct PlayerConnection_t560460881;
// UnityEngine.Texture2D
struct Texture2D_t3715641063;
// UnityEngine.Rigidbody
struct Rigidbody_t4099236864;
// UnityEngine.Camera
struct Camera_t3483225491;
// UnityEngine.Material
struct Material_t3327927266;
// UnityEngine.XR.iOS.UnityARAnchorManager
struct UnityARAnchorManager_t3735611095;
// UnityEngine.XR.iOS.UnityARSessionRunOption[]
struct UnityARSessionRunOptionU5BU5D_t3710021815;
// UnityEngine.XR.iOS.UnityARAlignment[]
struct UnityARAlignmentU5BU5D_t710373642;
// UnityEngine.XR.iOS.UnityARPlaneDetection[]
struct UnityARPlaneDetectionU5BU5D_t2983212003;
// UnityEngine.ParticleSystem
struct ParticleSystem_t423172802;
// UnityEngine.ParticleSystem/Particle[]
struct ParticleU5BU5D_t3135226082;
// UnityEngine.Rendering.CommandBuffer
struct CommandBuffer_t249483790;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t819899644;
// ColorPicker
struct ColorPicker_t1372980006;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t1542226793;
// System.Collections.Generic.List`1<UnityEngine.ParticleSystem>
struct List_1_t2264406591;
// UnityEngine.UI.BoxSlider
struct BoxSlider_t2301888024;
// UnityEngine.UI.RawImage
struct RawImage_t2649120772;
// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t4229520026;
// UnityEngine.UI.InputField
struct InputField_t3636619864;
// UnityEngine.UI.Slider
struct Slider_t904762159;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t1240058278;
// UnityEngine.UI.Image
struct Image_t1222024020;
// ColorChangedEvent
struct ColorChangedEvent_t1336820221;
// HSVChangedEvent
struct HSVChangedEvent_t2112947086;
// UnityEngine.UI.Text
struct Text_t1634980233;
// UnityEngine.Renderer
struct Renderer_t2883055051;
// UnityEngine.Light
struct Light_t320853386;
// System.Collections.Generic.List`1<UnityEngine.UI.Selectable>
struct List_1_t578337647;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_t4285154746;
// UnityEngine.UI.Graphic
struct Graphic_t4051851905;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2573537469;
// UnityEngine.RectTransform
struct RectTransform_t2962127177;
// UnityEngine.UI.BoxSlider/BoxSliderEvent
struct BoxSliderEvent_t2550889516;

struct Vector3_t3995960300 ;



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
#ifndef UNITYARANCHORMANAGER_T3735611095_H
#define UNITYARANCHORMANAGER_T3735611095_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARAnchorManager
struct  UnityARAnchorManager_t3735611095  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.iOS.ARPlaneAnchorGameObject> UnityEngine.XR.iOS.UnityARAnchorManager::planeAnchorMap
	Dictionary_2_t3082885398 * ___planeAnchorMap_0;

public:
	inline static int32_t get_offset_of_planeAnchorMap_0() { return static_cast<int32_t>(offsetof(UnityARAnchorManager_t3735611095, ___planeAnchorMap_0)); }
	inline Dictionary_2_t3082885398 * get_planeAnchorMap_0() const { return ___planeAnchorMap_0; }
	inline Dictionary_2_t3082885398 ** get_address_of_planeAnchorMap_0() { return &___planeAnchorMap_0; }
	inline void set_planeAnchorMap_0(Dictionary_2_t3082885398 * value)
	{
		___planeAnchorMap_0 = value;
		Il2CppCodeGenWriteBarrier((&___planeAnchorMap_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARANCHORMANAGER_T3735611095_H
#ifndef UNITYARMATRIXOPS_T698131905_H
#define UNITYARMATRIXOPS_T698131905_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARMatrixOps
struct  UnityARMatrixOps_t698131905  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARMATRIXOPS_T698131905_H
#ifndef SERIALIZABLEPOINTCLOUD_T2102354234_H
#define SERIALIZABLEPOINTCLOUD_T2102354234_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Utils.serializablePointCloud
struct  serializablePointCloud_t2102354234  : public RuntimeObject
{
public:
	// System.Byte[] Utils.serializablePointCloud::pointCloudData
	ByteU5BU5D_t3249567452* ___pointCloudData_0;

public:
	inline static int32_t get_offset_of_pointCloudData_0() { return static_cast<int32_t>(offsetof(serializablePointCloud_t2102354234, ___pointCloudData_0)); }
	inline ByteU5BU5D_t3249567452* get_pointCloudData_0() const { return ___pointCloudData_0; }
	inline ByteU5BU5D_t3249567452** get_address_of_pointCloudData_0() { return &___pointCloudData_0; }
	inline void set_pointCloudData_0(ByteU5BU5D_t3249567452* value)
	{
		___pointCloudData_0 = value;
		Il2CppCodeGenWriteBarrier((&___pointCloudData_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZABLEPOINTCLOUD_T2102354234_H
#ifndef SERIALIZABLEUNITYARMATRIX4X4_T2144327380_H
#define SERIALIZABLEUNITYARMATRIX4X4_T2144327380_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Utils.serializableUnityARMatrix4x4
struct  serializableUnityARMatrix4x4_t2144327380  : public RuntimeObject
{
public:
	// Utils.SerializableVector4 Utils.serializableUnityARMatrix4x4::column0
	SerializableVector4_t1132123658 * ___column0_0;
	// Utils.SerializableVector4 Utils.serializableUnityARMatrix4x4::column1
	SerializableVector4_t1132123658 * ___column1_1;
	// Utils.SerializableVector4 Utils.serializableUnityARMatrix4x4::column2
	SerializableVector4_t1132123658 * ___column2_2;
	// Utils.SerializableVector4 Utils.serializableUnityARMatrix4x4::column3
	SerializableVector4_t1132123658 * ___column3_3;

public:
	inline static int32_t get_offset_of_column0_0() { return static_cast<int32_t>(offsetof(serializableUnityARMatrix4x4_t2144327380, ___column0_0)); }
	inline SerializableVector4_t1132123658 * get_column0_0() const { return ___column0_0; }
	inline SerializableVector4_t1132123658 ** get_address_of_column0_0() { return &___column0_0; }
	inline void set_column0_0(SerializableVector4_t1132123658 * value)
	{
		___column0_0 = value;
		Il2CppCodeGenWriteBarrier((&___column0_0), value);
	}

	inline static int32_t get_offset_of_column1_1() { return static_cast<int32_t>(offsetof(serializableUnityARMatrix4x4_t2144327380, ___column1_1)); }
	inline SerializableVector4_t1132123658 * get_column1_1() const { return ___column1_1; }
	inline SerializableVector4_t1132123658 ** get_address_of_column1_1() { return &___column1_1; }
	inline void set_column1_1(SerializableVector4_t1132123658 * value)
	{
		___column1_1 = value;
		Il2CppCodeGenWriteBarrier((&___column1_1), value);
	}

	inline static int32_t get_offset_of_column2_2() { return static_cast<int32_t>(offsetof(serializableUnityARMatrix4x4_t2144327380, ___column2_2)); }
	inline SerializableVector4_t1132123658 * get_column2_2() const { return ___column2_2; }
	inline SerializableVector4_t1132123658 ** get_address_of_column2_2() { return &___column2_2; }
	inline void set_column2_2(SerializableVector4_t1132123658 * value)
	{
		___column2_2 = value;
		Il2CppCodeGenWriteBarrier((&___column2_2), value);
	}

	inline static int32_t get_offset_of_column3_3() { return static_cast<int32_t>(offsetof(serializableUnityARMatrix4x4_t2144327380, ___column3_3)); }
	inline SerializableVector4_t1132123658 * get_column3_3() const { return ___column3_3; }
	inline SerializableVector4_t1132123658 ** get_address_of_column3_3() { return &___column3_3; }
	inline void set_column3_3(SerializableVector4_t1132123658 * value)
	{
		___column3_3 = value;
		Il2CppCodeGenWriteBarrier((&___column3_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZABLEUNITYARMATRIX4X4_T2144327380_H
#ifndef SERIALIZABLEVECTOR4_T1132123658_H
#define SERIALIZABLEVECTOR4_T1132123658_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Utils.SerializableVector4
struct  SerializableVector4_t1132123658  : public RuntimeObject
{
public:
	// System.Single Utils.SerializableVector4::x
	float ___x_0;
	// System.Single Utils.SerializableVector4::y
	float ___y_1;
	// System.Single Utils.SerializableVector4::z
	float ___z_2;
	// System.Single Utils.SerializableVector4::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(SerializableVector4_t1132123658, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(SerializableVector4_t1132123658, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(SerializableVector4_t1132123658, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(SerializableVector4_t1132123658, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZABLEVECTOR4_T1132123658_H
#ifndef OBJECTSERIALIZATIONEXTENSION_T10908332_H
#define OBJECTSERIALIZATIONEXTENSION_T10908332_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Utils.ObjectSerializationExtension
struct  ObjectSerializationExtension_t10908332  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTSERIALIZATIONEXTENSION_T10908332_H
#ifndef VALUETYPE_T1871147118_H
#define VALUETYPE_T1871147118_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t1871147118  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t1871147118_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t1871147118_marshaled_com
{
};
#endif // VALUETYPE_T1871147118_H
#ifndef SUBMESSAGEIDS_T1073520382_H
#define SUBMESSAGEIDS_T1073520382_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.SubMessageIds
struct  SubMessageIds_t1073520382  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SUBMESSAGEIDS_T1073520382_H
#ifndef CONNECTIONMESSAGEIDS_T3342114633_H
#define CONNECTIONMESSAGEIDS_T3342114633_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ConnectionMessageIds
struct  ConnectionMessageIds_t3342114633  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONNECTIONMESSAGEIDS_T3342114633_H
#ifndef ATTRIBUTE_T311360448_H
#define ATTRIBUTE_T311360448_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t311360448  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T311360448_H
#ifndef UNITYEVENTBASE_T2762216811_H
#define UNITYEVENTBASE_T2762216811_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEventBase
struct  UnityEventBase_t2762216811  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t435528189 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t431489483 * ___m_PersistentCalls_1;
	// System.String UnityEngine.Events.UnityEventBase::m_TypeName
	String_t* ___m_TypeName_2;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_3;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_t2762216811, ___m_Calls_0)); }
	inline InvokableCallList_t435528189 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_t435528189 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_t435528189 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Calls_0), value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_t2762216811, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t431489483 * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t431489483 ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t431489483 * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_PersistentCalls_1), value);
	}

	inline static int32_t get_offset_of_m_TypeName_2() { return static_cast<int32_t>(offsetof(UnityEventBase_t2762216811, ___m_TypeName_2)); }
	inline String_t* get_m_TypeName_2() const { return ___m_TypeName_2; }
	inline String_t** get_address_of_m_TypeName_2() { return &___m_TypeName_2; }
	inline void set_m_TypeName_2(String_t* value)
	{
		___m_TypeName_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_TypeName_2), value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_3() { return static_cast<int32_t>(offsetof(UnityEventBase_t2762216811, ___m_CallsDirty_3)); }
	inline bool get_m_CallsDirty_3() const { return ___m_CallsDirty_3; }
	inline bool* get_address_of_m_CallsDirty_3() { return &___m_CallsDirty_3; }
	inline void set_m_CallsDirty_3(bool value)
	{
		___m_CallsDirty_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENTBASE_T2762216811_H
#ifndef HSVUTIL_T298504749_H
#define HSVUTIL_T298504749_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HSVUtil
struct  HSVUtil_t298504749  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HSVUTIL_T298504749_H
#ifndef VECTOREXTENSIONS_T2569470845_H
#define VECTOREXTENSIONS_T2569470845_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Unity.Utilities.VectorExtensions
struct  VectorExtensions_t2569470845  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOREXTENSIONS_T2569470845_H
#ifndef UNITYARUTILITY_T2928960245_H
#define UNITYARUTILITY_T2928960245_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARUtility
struct  UnityARUtility_t2928960245  : public RuntimeObject
{
public:
	// UnityEngine.MeshCollider UnityEngine.XR.iOS.UnityARUtility::meshCollider
	MeshCollider_t2089433223 * ___meshCollider_0;
	// UnityEngine.MeshFilter UnityEngine.XR.iOS.UnityARUtility::meshFilter
	MeshFilter_t1450006476 * ___meshFilter_1;

public:
	inline static int32_t get_offset_of_meshCollider_0() { return static_cast<int32_t>(offsetof(UnityARUtility_t2928960245, ___meshCollider_0)); }
	inline MeshCollider_t2089433223 * get_meshCollider_0() const { return ___meshCollider_0; }
	inline MeshCollider_t2089433223 ** get_address_of_meshCollider_0() { return &___meshCollider_0; }
	inline void set_meshCollider_0(MeshCollider_t2089433223 * value)
	{
		___meshCollider_0 = value;
		Il2CppCodeGenWriteBarrier((&___meshCollider_0), value);
	}

	inline static int32_t get_offset_of_meshFilter_1() { return static_cast<int32_t>(offsetof(UnityARUtility_t2928960245, ___meshFilter_1)); }
	inline MeshFilter_t1450006476 * get_meshFilter_1() const { return ___meshFilter_1; }
	inline MeshFilter_t1450006476 ** get_address_of_meshFilter_1() { return &___meshFilter_1; }
	inline void set_meshFilter_1(MeshFilter_t1450006476 * value)
	{
		___meshFilter_1 = value;
		Il2CppCodeGenWriteBarrier((&___meshFilter_1), value);
	}
};

struct UnityARUtility_t2928960245_StaticFields
{
public:
	// UnityEngine.GameObject UnityEngine.XR.iOS.UnityARUtility::planePrefab
	GameObject_t3273633151 * ___planePrefab_2;

public:
	inline static int32_t get_offset_of_planePrefab_2() { return static_cast<int32_t>(offsetof(UnityARUtility_t2928960245_StaticFields, ___planePrefab_2)); }
	inline GameObject_t3273633151 * get_planePrefab_2() const { return ___planePrefab_2; }
	inline GameObject_t3273633151 ** get_address_of_planePrefab_2() { return &___planePrefab_2; }
	inline void set_planePrefab_2(GameObject_t3273633151 * value)
	{
		___planePrefab_2 = value;
		Il2CppCodeGenWriteBarrier((&___planePrefab_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARUTILITY_T2928960245_H
#ifndef UNITYARLIGHTESTIMATE_T3847550647_H
#define UNITYARLIGHTESTIMATE_T3847550647_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARLightEstimate
struct  UnityARLightEstimate_t3847550647 
{
public:
	// System.Single UnityEngine.XR.iOS.UnityARLightEstimate::ambientIntensity
	float ___ambientIntensity_0;
	// System.Single UnityEngine.XR.iOS.UnityARLightEstimate::ambientColorTemperature
	float ___ambientColorTemperature_1;

public:
	inline static int32_t get_offset_of_ambientIntensity_0() { return static_cast<int32_t>(offsetof(UnityARLightEstimate_t3847550647, ___ambientIntensity_0)); }
	inline float get_ambientIntensity_0() const { return ___ambientIntensity_0; }
	inline float* get_address_of_ambientIntensity_0() { return &___ambientIntensity_0; }
	inline void set_ambientIntensity_0(float value)
	{
		___ambientIntensity_0 = value;
	}

	inline static int32_t get_offset_of_ambientColorTemperature_1() { return static_cast<int32_t>(offsetof(UnityARLightEstimate_t3847550647, ___ambientColorTemperature_1)); }
	inline float get_ambientColorTemperature_1() const { return ___ambientColorTemperature_1; }
	inline float* get_address_of_ambientColorTemperature_1() { return &___ambientColorTemperature_1; }
	inline void set_ambientColorTemperature_1(float value)
	{
		___ambientColorTemperature_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARLIGHTESTIMATE_T3847550647_H
#ifndef PROPERTYATTRIBUTE_T804941190_H
#define PROPERTYATTRIBUTE_T804941190_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PropertyAttribute
struct  PropertyAttribute_t804941190  : public Attribute_t311360448
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYATTRIBUTE_T804941190_H
#ifndef GCHANDLE_T1853879479_H
#define GCHANDLE_T1853879479_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.GCHandle
struct  GCHandle_t1853879479 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t1853879479, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GCHANDLE_T1853879479_H
#ifndef ARPOINT_T1659288880_H
#define ARPOINT_T1659288880_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARPoint
struct  ARPoint_t1659288880 
{
public:
	// System.Double UnityEngine.XR.iOS.ARPoint::x
	double ___x_0;
	// System.Double UnityEngine.XR.iOS.ARPoint::y
	double ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(ARPoint_t1659288880, ___x_0)); }
	inline double get_x_0() const { return ___x_0; }
	inline double* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(double value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(ARPoint_t1659288880, ___y_1)); }
	inline double get_y_1() const { return ___y_1; }
	inline double* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(double value)
	{
		___y_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARPOINT_T1659288880_H
#ifndef ARLIGHTESTIMATE_T2943102613_H
#define ARLIGHTESTIMATE_T2943102613_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARLightEstimate
struct  ARLightEstimate_t2943102613 
{
public:
	// System.Double UnityEngine.XR.iOS.ARLightEstimate::ambientIntensity
	double ___ambientIntensity_0;

public:
	inline static int32_t get_offset_of_ambientIntensity_0() { return static_cast<int32_t>(offsetof(ARLightEstimate_t2943102613, ___ambientIntensity_0)); }
	inline double get_ambientIntensity_0() const { return ___ambientIntensity_0; }
	inline double* get_address_of_ambientIntensity_0() { return &___ambientIntensity_0; }
	inline void set_ambientIntensity_0(double value)
	{
		___ambientIntensity_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARLIGHTESTIMATE_T2943102613_H
#ifndef HSVCOLOR_T3863286780_H
#define HSVCOLOR_T3863286780_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HsvColor
struct  HsvColor_t3863286780 
{
public:
	// System.Double HsvColor::H
	double ___H_0;
	// System.Double HsvColor::S
	double ___S_1;
	// System.Double HsvColor::V
	double ___V_2;

public:
	inline static int32_t get_offset_of_H_0() { return static_cast<int32_t>(offsetof(HsvColor_t3863286780, ___H_0)); }
	inline double get_H_0() const { return ___H_0; }
	inline double* get_address_of_H_0() { return &___H_0; }
	inline void set_H_0(double value)
	{
		___H_0 = value;
	}

	inline static int32_t get_offset_of_S_1() { return static_cast<int32_t>(offsetof(HsvColor_t3863286780, ___S_1)); }
	inline double get_S_1() const { return ___S_1; }
	inline double* get_address_of_S_1() { return &___S_1; }
	inline void set_S_1(double value)
	{
		___S_1 = value;
	}

	inline static int32_t get_offset_of_V_2() { return static_cast<int32_t>(offsetof(HsvColor_t3863286780, ___V_2)); }
	inline double get_V_2() const { return ___V_2; }
	inline double* get_address_of_V_2() { return &___V_2; }
	inline void set_V_2(double value)
	{
		___V_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HSVCOLOR_T3863286780_H
#ifndef VECTOR3_T3995960300_H
#define VECTOR3_T3995960300_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3995960300 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t3995960300, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t3995960300, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t3995960300, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t3995960300_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3995960300  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3995960300  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3995960300  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3995960300  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3995960300  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3995960300  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3995960300  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3995960300  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3995960300  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3995960300  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t3995960300_StaticFields, ___zeroVector_4)); }
	inline Vector3_t3995960300  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t3995960300 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t3995960300  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3995960300_StaticFields, ___oneVector_5)); }
	inline Vector3_t3995960300  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t3995960300 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t3995960300  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3995960300_StaticFields, ___upVector_6)); }
	inline Vector3_t3995960300  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t3995960300 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t3995960300  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3995960300_StaticFields, ___downVector_7)); }
	inline Vector3_t3995960300  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t3995960300 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t3995960300  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3995960300_StaticFields, ___leftVector_8)); }
	inline Vector3_t3995960300  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t3995960300 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t3995960300  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3995960300_StaticFields, ___rightVector_9)); }
	inline Vector3_t3995960300  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t3995960300 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t3995960300  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3995960300_StaticFields, ___forwardVector_10)); }
	inline Vector3_t3995960300  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t3995960300 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t3995960300  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3995960300_StaticFields, ___backVector_11)); }
	inline Vector3_t3995960300  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t3995960300 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t3995960300  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3995960300_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t3995960300  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t3995960300 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t3995960300  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3995960300_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t3995960300  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t3995960300 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t3995960300  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3995960300_H
#ifndef LAYERMASK_T2729128688_H
#define LAYERMASK_T2729128688_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.LayerMask
struct  LayerMask_t2729128688 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_t2729128688, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LAYERMASK_T2729128688_H
#ifndef ARSIZE_T527588933_H
#define ARSIZE_T527588933_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARSize
struct  ARSize_t527588933 
{
public:
	// System.Double UnityEngine.XR.iOS.ARSize::width
	double ___width_0;
	// System.Double UnityEngine.XR.iOS.ARSize::height
	double ___height_1;

public:
	inline static int32_t get_offset_of_width_0() { return static_cast<int32_t>(offsetof(ARSize_t527588933, ___width_0)); }
	inline double get_width_0() const { return ___width_0; }
	inline double* get_address_of_width_0() { return &___width_0; }
	inline void set_width_0(double value)
	{
		___width_0 = value;
	}

	inline static int32_t get_offset_of_height_1() { return static_cast<int32_t>(offsetof(ARSize_t527588933, ___height_1)); }
	inline double get_height_1() const { return ___height_1; }
	inline double* get_address_of_height_1() { return &___height_1; }
	inline void set_height_1(double value)
	{
		___height_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARSIZE_T527588933_H
#ifndef ENUM_T1064717720_H
#define ENUM_T1064717720_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t1064717720  : public ValueType_t1871147118
{
public:

public:
};

struct Enum_t1064717720_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t2085319390* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t1064717720_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t2085319390* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t2085319390** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t2085319390* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t1064717720_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t1064717720_marshaled_com
{
};
#endif // ENUM_T1064717720_H
#ifndef GUID_T_H
#define GUID_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Guid
struct  Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_0;
	// System.Int16 System.Guid::_b
	int16_t ____b_1;
	// System.Int16 System.Guid::_c
	int16_t ____c_2;
	// System.Byte System.Guid::_d
	uint8_t ____d_3;
	// System.Byte System.Guid::_e
	uint8_t ____e_4;
	// System.Byte System.Guid::_f
	uint8_t ____f_5;
	// System.Byte System.Guid::_g
	uint8_t ____g_6;
	// System.Byte System.Guid::_h
	uint8_t ____h_7;
	// System.Byte System.Guid::_i
	uint8_t ____i_8;
	// System.Byte System.Guid::_j
	uint8_t ____j_9;
	// System.Byte System.Guid::_k
	uint8_t ____k_10;

public:
	inline static int32_t get_offset_of__a_0() { return static_cast<int32_t>(offsetof(Guid_t, ____a_0)); }
	inline int32_t get__a_0() const { return ____a_0; }
	inline int32_t* get_address_of__a_0() { return &____a_0; }
	inline void set__a_0(int32_t value)
	{
		____a_0 = value;
	}

	inline static int32_t get_offset_of__b_1() { return static_cast<int32_t>(offsetof(Guid_t, ____b_1)); }
	inline int16_t get__b_1() const { return ____b_1; }
	inline int16_t* get_address_of__b_1() { return &____b_1; }
	inline void set__b_1(int16_t value)
	{
		____b_1 = value;
	}

	inline static int32_t get_offset_of__c_2() { return static_cast<int32_t>(offsetof(Guid_t, ____c_2)); }
	inline int16_t get__c_2() const { return ____c_2; }
	inline int16_t* get_address_of__c_2() { return &____c_2; }
	inline void set__c_2(int16_t value)
	{
		____c_2 = value;
	}

	inline static int32_t get_offset_of__d_3() { return static_cast<int32_t>(offsetof(Guid_t, ____d_3)); }
	inline uint8_t get__d_3() const { return ____d_3; }
	inline uint8_t* get_address_of__d_3() { return &____d_3; }
	inline void set__d_3(uint8_t value)
	{
		____d_3 = value;
	}

	inline static int32_t get_offset_of__e_4() { return static_cast<int32_t>(offsetof(Guid_t, ____e_4)); }
	inline uint8_t get__e_4() const { return ____e_4; }
	inline uint8_t* get_address_of__e_4() { return &____e_4; }
	inline void set__e_4(uint8_t value)
	{
		____e_4 = value;
	}

	inline static int32_t get_offset_of__f_5() { return static_cast<int32_t>(offsetof(Guid_t, ____f_5)); }
	inline uint8_t get__f_5() const { return ____f_5; }
	inline uint8_t* get_address_of__f_5() { return &____f_5; }
	inline void set__f_5(uint8_t value)
	{
		____f_5 = value;
	}

	inline static int32_t get_offset_of__g_6() { return static_cast<int32_t>(offsetof(Guid_t, ____g_6)); }
	inline uint8_t get__g_6() const { return ____g_6; }
	inline uint8_t* get_address_of__g_6() { return &____g_6; }
	inline void set__g_6(uint8_t value)
	{
		____g_6 = value;
	}

	inline static int32_t get_offset_of__h_7() { return static_cast<int32_t>(offsetof(Guid_t, ____h_7)); }
	inline uint8_t get__h_7() const { return ____h_7; }
	inline uint8_t* get_address_of__h_7() { return &____h_7; }
	inline void set__h_7(uint8_t value)
	{
		____h_7 = value;
	}

	inline static int32_t get_offset_of__i_8() { return static_cast<int32_t>(offsetof(Guid_t, ____i_8)); }
	inline uint8_t get__i_8() const { return ____i_8; }
	inline uint8_t* get_address_of__i_8() { return &____i_8; }
	inline void set__i_8(uint8_t value)
	{
		____i_8 = value;
	}

	inline static int32_t get_offset_of__j_9() { return static_cast<int32_t>(offsetof(Guid_t, ____j_9)); }
	inline uint8_t get__j_9() const { return ____j_9; }
	inline uint8_t* get_address_of__j_9() { return &____j_9; }
	inline void set__j_9(uint8_t value)
	{
		____j_9 = value;
	}

	inline static int32_t get_offset_of__k_10() { return static_cast<int32_t>(offsetof(Guid_t, ____k_10)); }
	inline uint8_t get__k_10() const { return ____k_10; }
	inline uint8_t* get_address_of__k_10() { return &____k_10; }
	inline void set__k_10(uint8_t value)
	{
		____k_10 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_11;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t1038618098 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t1038618098 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_11() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_11)); }
	inline Guid_t  get_Empty_11() const { return ___Empty_11; }
	inline Guid_t * get_address_of_Empty_11() { return &___Empty_11; }
	inline void set_Empty_11(Guid_t  value)
	{
		___Empty_11 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((&____rngAccess_12), value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t1038618098 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t1038618098 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t1038618098 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((&____rng_13), value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t1038618098 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t1038618098 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t1038618098 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((&____fastRng_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUID_T_H
#ifndef UNITYEVENT_3_T389506563_H
#define UNITYEVENT_3_T389506563_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent`3<System.Single,System.Single,System.Single>
struct  UnityEvent_3_t389506563  : public UnityEventBase_t2762216811
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`3::m_InvokeArray
	ObjectU5BU5D_t1642503095* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_3_t389506563, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t1642503095* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t1642503095** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t1642503095* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_3_T389506563_H
#ifndef UNITYEVENT_1_T4049954907_H
#define UNITYEVENT_1_T4049954907_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent`1<UnityEngine.Color>
struct  UnityEvent_1_t4049954907  : public UnityEventBase_t2762216811
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t1642503095* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_1_t4049954907, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t1642503095* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t1642503095** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t1642503095* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_1_T4049954907_H
#ifndef SPRITESTATE_T3386560179_H
#define SPRITESTATE_T3386560179_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.SpriteState
struct  SpriteState_t3386560179 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t2649316949 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t2649316949 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t2649316949 * ___m_DisabledSprite_2;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t3386560179, ___m_HighlightedSprite_0)); }
	inline Sprite_t2649316949 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t2649316949 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t2649316949 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_HighlightedSprite_0), value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t3386560179, ___m_PressedSprite_1)); }
	inline Sprite_t2649316949 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t2649316949 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t2649316949 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_PressedSprite_1), value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t3386560179, ___m_DisabledSprite_2)); }
	inline Sprite_t2649316949 * get_m_DisabledSprite_2() const { return ___m_DisabledSprite_2; }
	inline Sprite_t2649316949 ** get_address_of_m_DisabledSprite_2() { return &___m_DisabledSprite_2; }
	inline void set_m_DisabledSprite_2(Sprite_t2649316949 * value)
	{
		___m_DisabledSprite_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_DisabledSprite_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t3386560179_marshaled_pinvoke
{
	Sprite_t2649316949 * ___m_HighlightedSprite_0;
	Sprite_t2649316949 * ___m_PressedSprite_1;
	Sprite_t2649316949 * ___m_DisabledSprite_2;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t3386560179_marshaled_com
{
	Sprite_t2649316949 * ___m_HighlightedSprite_0;
	Sprite_t2649316949 * ___m_PressedSprite_1;
	Sprite_t2649316949 * ___m_DisabledSprite_2;
};
#endif // SPRITESTATE_T3386560179_H
#ifndef MATRIX4X4_T1549863613_H
#define MATRIX4X4_T1549863613_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Matrix4x4
struct  Matrix4x4_t1549863613 
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
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t1549863613, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t1549863613, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t1549863613, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t1549863613, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t1549863613, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t1549863613, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t1549863613, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t1549863613, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t1549863613, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t1549863613, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t1549863613, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t1549863613, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t1549863613, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t1549863613, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t1549863613, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t1549863613, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_t1549863613_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_t1549863613  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_t1549863613  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t1549863613_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_t1549863613  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_t1549863613 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_t1549863613  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_t1549863613_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_t1549863613  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_t1549863613 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_t1549863613  value)
	{
		___identityMatrix_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATRIX4X4_T1549863613_H
#ifndef VECTOR4_T1154593569_H
#define VECTOR4_T1154593569_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector4
struct  Vector4_t1154593569 
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
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_t1154593569, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_t1154593569, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_t1154593569, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_t1154593569, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_t1154593569_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t1154593569  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t1154593569  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t1154593569  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t1154593569  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_t1154593569_StaticFields, ___zeroVector_5)); }
	inline Vector4_t1154593569  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_t1154593569 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_t1154593569  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_t1154593569_StaticFields, ___oneVector_6)); }
	inline Vector4_t1154593569  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_t1154593569 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_t1154593569  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_t1154593569_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_t1154593569  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_t1154593569 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_t1154593569  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_t1154593569_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_t1154593569  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_t1154593569 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_t1154593569  value)
	{
		___negativeInfinityVector_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR4_T1154593569_H
#ifndef COLOR_T3902810162_H
#define COLOR_T3902810162_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t3902810162 
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
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t3902810162, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t3902810162, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t3902810162, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t3902810162, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T3902810162_H
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
#ifndef DRIVENRECTTRANSFORMTRACKER_T3724284108_H
#define DRIVENRECTTRANSFORMTRACKER_T3724284108_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.DrivenRectTransformTracker
struct  DrivenRectTransformTracker_t3724284108 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DRIVENRECTTRANSFORMTRACKER_T3724284108_H
#ifndef QUATERNION_T3889186075_H
#define QUATERNION_T3889186075_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t3889186075 
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
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t3889186075, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t3889186075, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t3889186075, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t3889186075, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t3889186075_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t3889186075  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t3889186075_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t3889186075  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t3889186075 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t3889186075  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T3889186075_H
#ifndef VECTOR2_T1027914059_H
#define VECTOR2_T1027914059_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t1027914059 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t1027914059, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t1027914059, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t1027914059_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1027914059  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1027914059  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1027914059  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1027914059  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1027914059  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1027914059  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1027914059  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1027914059  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t1027914059_StaticFields, ___zeroVector_2)); }
	inline Vector2_t1027914059  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t1027914059 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t1027914059  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t1027914059_StaticFields, ___oneVector_3)); }
	inline Vector2_t1027914059  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t1027914059 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t1027914059  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t1027914059_StaticFields, ___upVector_4)); }
	inline Vector2_t1027914059  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t1027914059 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t1027914059  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t1027914059_StaticFields, ___downVector_5)); }
	inline Vector2_t1027914059  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t1027914059 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t1027914059  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t1027914059_StaticFields, ___leftVector_6)); }
	inline Vector2_t1027914059  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t1027914059 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t1027914059  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t1027914059_StaticFields, ___rightVector_7)); }
	inline Vector2_t1027914059  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t1027914059 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t1027914059  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t1027914059_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t1027914059  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t1027914059 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t1027914059  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t1027914059_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t1027914059  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t1027914059 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t1027914059  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T1027914059_H
#ifndef UNITYEVENT_2_T1955206753_H
#define UNITYEVENT_2_T1955206753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent`2<System.Single,System.Single>
struct  UnityEvent_2_t1955206753  : public UnityEventBase_t2762216811
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`2::m_InvokeArray
	ObjectU5BU5D_t1642503095* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_2_t1955206753, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t1642503095* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t1642503095** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t1642503095* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_2_T1955206753_H
#ifndef ARANCHOR_T3424193403_H
#define ARANCHOR_T3424193403_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARAnchor
struct  ARAnchor_t3424193403 
{
public:
	// System.String UnityEngine.XR.iOS.ARAnchor::identifier
	String_t* ___identifier_0;
	// UnityEngine.Matrix4x4 UnityEngine.XR.iOS.ARAnchor::transform
	Matrix4x4_t1549863613  ___transform_1;

public:
	inline static int32_t get_offset_of_identifier_0() { return static_cast<int32_t>(offsetof(ARAnchor_t3424193403, ___identifier_0)); }
	inline String_t* get_identifier_0() const { return ___identifier_0; }
	inline String_t** get_address_of_identifier_0() { return &___identifier_0; }
	inline void set_identifier_0(String_t* value)
	{
		___identifier_0 = value;
		Il2CppCodeGenWriteBarrier((&___identifier_0), value);
	}

	inline static int32_t get_offset_of_transform_1() { return static_cast<int32_t>(offsetof(ARAnchor_t3424193403, ___transform_1)); }
	inline Matrix4x4_t1549863613  get_transform_1() const { return ___transform_1; }
	inline Matrix4x4_t1549863613 * get_address_of_transform_1() { return &___transform_1; }
	inline void set_transform_1(Matrix4x4_t1549863613  value)
	{
		___transform_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.XR.iOS.ARAnchor
struct ARAnchor_t3424193403_marshaled_pinvoke
{
	char* ___identifier_0;
	Matrix4x4_t1549863613  ___transform_1;
};
// Native definition for COM marshalling of UnityEngine.XR.iOS.ARAnchor
struct ARAnchor_t3424193403_marshaled_com
{
	Il2CppChar* ___identifier_0;
	Matrix4x4_t1549863613  ___transform_1;
};
#endif // ARANCHOR_T3424193403_H
#ifndef SELECTIONSTATE_T274665895_H
#define SELECTIONSTATE_T274665895_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable/SelectionState
struct  SelectionState_t274665895 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/SelectionState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SelectionState_t274665895, ___value___1)); }
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
#endif // SELECTIONSTATE_T274665895_H
#ifndef MODE_T744570980_H
#define MODE_T744570980_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Navigation/Mode
struct  Mode_t744570980 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Mode_t744570980, ___value___1)); }
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
#endif // MODE_T744570980_H
#ifndef COLORBLOCK_T2537980321_H
#define COLORBLOCK_T2537980321_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ColorBlock
struct  ColorBlock_t2537980321 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_t3902810162  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_t3902810162  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_t3902810162  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_t3902810162  ___m_DisabledColor_3;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_4;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_5;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t2537980321, ___m_NormalColor_0)); }
	inline Color_t3902810162  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_t3902810162 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_t3902810162  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t2537980321, ___m_HighlightedColor_1)); }
	inline Color_t3902810162  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_t3902810162 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_t3902810162  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t2537980321, ___m_PressedColor_2)); }
	inline Color_t3902810162  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_t3902810162 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_t3902810162  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t2537980321, ___m_DisabledColor_3)); }
	inline Color_t3902810162  get_m_DisabledColor_3() const { return ___m_DisabledColor_3; }
	inline Color_t3902810162 * get_address_of_m_DisabledColor_3() { return &___m_DisabledColor_3; }
	inline void set_m_DisabledColor_3(Color_t3902810162  value)
	{
		___m_DisabledColor_3 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_4() { return static_cast<int32_t>(offsetof(ColorBlock_t2537980321, ___m_ColorMultiplier_4)); }
	inline float get_m_ColorMultiplier_4() const { return ___m_ColorMultiplier_4; }
	inline float* get_address_of_m_ColorMultiplier_4() { return &___m_ColorMultiplier_4; }
	inline void set_m_ColorMultiplier_4(float value)
	{
		___m_ColorMultiplier_4 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_5() { return static_cast<int32_t>(offsetof(ColorBlock_t2537980321, ___m_FadeDuration_5)); }
	inline float get_m_FadeDuration_5() const { return ___m_FadeDuration_5; }
	inline float* get_address_of_m_FadeDuration_5() { return &___m_FadeDuration_5; }
	inline void set_m_FadeDuration_5(float value)
	{
		___m_FadeDuration_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLORBLOCK_T2537980321_H
#ifndef ARHITTESTRESULTTYPE_T1870977942_H
#define ARHITTESTRESULTTYPE_T1870977942_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARHitTestResultType
struct  ARHitTestResultType_t1870977942 
{
public:
	// System.Int64 UnityEngine.XR.iOS.ARHitTestResultType::value__
	int64_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ARHitTestResultType_t1870977942, ___value___1)); }
	inline int64_t get_value___1() const { return ___value___1; }
	inline int64_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int64_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARHITTESTRESULTTYPE_T1870977942_H
#ifndef TRANSITION_T3566845649_H
#define TRANSITION_T3566845649_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable/Transition
struct  Transition_t3566845649 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Transition_t3566845649, ___value___1)); }
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
#endif // TRANSITION_T3566845649_H
#ifndef ARPLANEANCHORALIGNMENT_T2617113955_H
#define ARPLANEANCHORALIGNMENT_T2617113955_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARPlaneAnchorAlignment
struct  ARPlaneAnchorAlignment_t2617113955 
{
public:
	// System.Int64 UnityEngine.XR.iOS.ARPlaneAnchorAlignment::value__
	int64_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ARPlaneAnchorAlignment_t2617113955, ___value___1)); }
	inline int64_t get_value___1() const { return ___value___1; }
	inline int64_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int64_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARPLANEANCHORALIGNMENT_T2617113955_H
#ifndef ARERRORCODE_T4223590424_H
#define ARERRORCODE_T4223590424_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARErrorCode
struct  ARErrorCode_t4223590424 
{
public:
	// System.Int64 UnityEngine.XR.iOS.ARErrorCode::value__
	int64_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ARErrorCode_t4223590424, ___value___1)); }
	inline int64_t get_value___1() const { return ___value___1; }
	inline int64_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int64_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARERRORCODE_T4223590424_H
#ifndef ARTRACKINGSTATE_T400437273_H
#define ARTRACKINGSTATE_T400437273_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARTrackingState
struct  ARTrackingState_t400437273 
{
public:
	// System.Int32 UnityEngine.XR.iOS.ARTrackingState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ARTrackingState_t400437273, ___value___1)); }
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
#endif // ARTRACKINGSTATE_T400437273_H
#ifndef ARTEXTUREHANDLES_T3751183281_H
#define ARTEXTUREHANDLES_T3751183281_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARTextureHandles
struct  ARTextureHandles_t3751183281 
{
public:
	// System.IntPtr UnityEngine.XR.iOS.ARTextureHandles::textureY
	intptr_t ___textureY_0;
	// System.IntPtr UnityEngine.XR.iOS.ARTextureHandles::textureCbCr
	intptr_t ___textureCbCr_1;

public:
	inline static int32_t get_offset_of_textureY_0() { return static_cast<int32_t>(offsetof(ARTextureHandles_t3751183281, ___textureY_0)); }
	inline intptr_t get_textureY_0() const { return ___textureY_0; }
	inline intptr_t* get_address_of_textureY_0() { return &___textureY_0; }
	inline void set_textureY_0(intptr_t value)
	{
		___textureY_0 = value;
	}

	inline static int32_t get_offset_of_textureCbCr_1() { return static_cast<int32_t>(offsetof(ARTextureHandles_t3751183281, ___textureCbCr_1)); }
	inline intptr_t get_textureCbCr_1() const { return ___textureCbCr_1; }
	inline intptr_t* get_address_of_textureCbCr_1() { return &___textureCbCr_1; }
	inline void set_textureCbCr_1(intptr_t value)
	{
		___textureCbCr_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARTEXTUREHANDLES_T3751183281_H
#ifndef ARTRACKINGQUALITY_T3003074642_H
#define ARTRACKINGQUALITY_T3003074642_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARTrackingQuality
struct  ARTrackingQuality_t3003074642 
{
public:
	// System.Int64 UnityEngine.XR.iOS.ARTrackingQuality::value__
	int64_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ARTrackingQuality_t3003074642, ___value___1)); }
	inline int64_t get_value___1() const { return ___value___1; }
	inline int64_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int64_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARTRACKINGQUALITY_T3003074642_H
#ifndef ARTRACKINGSTATEREASON_T2784530595_H
#define ARTRACKINGSTATEREASON_T2784530595_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARTrackingStateReason
struct  ARTrackingStateReason_t2784530595 
{
public:
	// System.Int32 UnityEngine.XR.iOS.ARTrackingStateReason::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ARTrackingStateReason_t2784530595, ___value___1)); }
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
#endif // ARTRACKINGSTATEREASON_T2784530595_H
#ifndef ARUSERANCHOR_T835971082_H
#define ARUSERANCHOR_T835971082_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARUserAnchor
struct  ARUserAnchor_t835971082 
{
public:
	// System.String UnityEngine.XR.iOS.ARUserAnchor::identifier
	String_t* ___identifier_0;
	// UnityEngine.Matrix4x4 UnityEngine.XR.iOS.ARUserAnchor::transform
	Matrix4x4_t1549863613  ___transform_1;

public:
	inline static int32_t get_offset_of_identifier_0() { return static_cast<int32_t>(offsetof(ARUserAnchor_t835971082, ___identifier_0)); }
	inline String_t* get_identifier_0() const { return ___identifier_0; }
	inline String_t** get_address_of_identifier_0() { return &___identifier_0; }
	inline void set_identifier_0(String_t* value)
	{
		___identifier_0 = value;
		Il2CppCodeGenWriteBarrier((&___identifier_0), value);
	}

	inline static int32_t get_offset_of_transform_1() { return static_cast<int32_t>(offsetof(ARUserAnchor_t835971082, ___transform_1)); }
	inline Matrix4x4_t1549863613  get_transform_1() const { return ___transform_1; }
	inline Matrix4x4_t1549863613 * get_address_of_transform_1() { return &___transform_1; }
	inline void set_transform_1(Matrix4x4_t1549863613  value)
	{
		___transform_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.XR.iOS.ARUserAnchor
struct ARUserAnchor_t835971082_marshaled_pinvoke
{
	char* ___identifier_0;
	Matrix4x4_t1549863613  ___transform_1;
};
// Native definition for COM marshalling of UnityEngine.XR.iOS.ARUserAnchor
struct ARUserAnchor_t835971082_marshaled_com
{
	Il2CppChar* ___identifier_0;
	Matrix4x4_t1549863613  ___transform_1;
};
#endif // ARUSERANCHOR_T835971082_H
#ifndef UNITYARMATRIX4X4_T2915059116_H
#define UNITYARMATRIX4X4_T2915059116_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARMatrix4x4
struct  UnityARMatrix4x4_t2915059116 
{
public:
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARMatrix4x4::column0
	Vector4_t1154593569  ___column0_0;
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARMatrix4x4::column1
	Vector4_t1154593569  ___column1_1;
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARMatrix4x4::column2
	Vector4_t1154593569  ___column2_2;
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARMatrix4x4::column3
	Vector4_t1154593569  ___column3_3;

public:
	inline static int32_t get_offset_of_column0_0() { return static_cast<int32_t>(offsetof(UnityARMatrix4x4_t2915059116, ___column0_0)); }
	inline Vector4_t1154593569  get_column0_0() const { return ___column0_0; }
	inline Vector4_t1154593569 * get_address_of_column0_0() { return &___column0_0; }
	inline void set_column0_0(Vector4_t1154593569  value)
	{
		___column0_0 = value;
	}

	inline static int32_t get_offset_of_column1_1() { return static_cast<int32_t>(offsetof(UnityARMatrix4x4_t2915059116, ___column1_1)); }
	inline Vector4_t1154593569  get_column1_1() const { return ___column1_1; }
	inline Vector4_t1154593569 * get_address_of_column1_1() { return &___column1_1; }
	inline void set_column1_1(Vector4_t1154593569  value)
	{
		___column1_1 = value;
	}

	inline static int32_t get_offset_of_column2_2() { return static_cast<int32_t>(offsetof(UnityARMatrix4x4_t2915059116, ___column2_2)); }
	inline Vector4_t1154593569  get_column2_2() const { return ___column2_2; }
	inline Vector4_t1154593569 * get_address_of_column2_2() { return &___column2_2; }
	inline void set_column2_2(Vector4_t1154593569  value)
	{
		___column2_2 = value;
	}

	inline static int32_t get_offset_of_column3_3() { return static_cast<int32_t>(offsetof(UnityARMatrix4x4_t2915059116, ___column3_3)); }
	inline Vector4_t1154593569  get_column3_3() const { return ___column3_3; }
	inline Vector4_t1154593569 * get_address_of_column3_3() { return &___column3_3; }
	inline void set_column3_3(Vector4_t1154593569  value)
	{
		___column3_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARMATRIX4X4_T2915059116_H
#ifndef UNITYVIDEOPARAMS_T1571660336_H
#define UNITYVIDEOPARAMS_T1571660336_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityVideoParams
struct  UnityVideoParams_t1571660336 
{
public:
	// System.Int32 UnityEngine.XR.iOS.UnityVideoParams::yWidth
	int32_t ___yWidth_0;
	// System.Int32 UnityEngine.XR.iOS.UnityVideoParams::yHeight
	int32_t ___yHeight_1;
	// System.Int32 UnityEngine.XR.iOS.UnityVideoParams::screenOrientation
	int32_t ___screenOrientation_2;
	// System.Single UnityEngine.XR.iOS.UnityVideoParams::texCoordScale
	float ___texCoordScale_3;
	// System.IntPtr UnityEngine.XR.iOS.UnityVideoParams::cvPixelBufferPtr
	intptr_t ___cvPixelBufferPtr_4;

public:
	inline static int32_t get_offset_of_yWidth_0() { return static_cast<int32_t>(offsetof(UnityVideoParams_t1571660336, ___yWidth_0)); }
	inline int32_t get_yWidth_0() const { return ___yWidth_0; }
	inline int32_t* get_address_of_yWidth_0() { return &___yWidth_0; }
	inline void set_yWidth_0(int32_t value)
	{
		___yWidth_0 = value;
	}

	inline static int32_t get_offset_of_yHeight_1() { return static_cast<int32_t>(offsetof(UnityVideoParams_t1571660336, ___yHeight_1)); }
	inline int32_t get_yHeight_1() const { return ___yHeight_1; }
	inline int32_t* get_address_of_yHeight_1() { return &___yHeight_1; }
	inline void set_yHeight_1(int32_t value)
	{
		___yHeight_1 = value;
	}

	inline static int32_t get_offset_of_screenOrientation_2() { return static_cast<int32_t>(offsetof(UnityVideoParams_t1571660336, ___screenOrientation_2)); }
	inline int32_t get_screenOrientation_2() const { return ___screenOrientation_2; }
	inline int32_t* get_address_of_screenOrientation_2() { return &___screenOrientation_2; }
	inline void set_screenOrientation_2(int32_t value)
	{
		___screenOrientation_2 = value;
	}

	inline static int32_t get_offset_of_texCoordScale_3() { return static_cast<int32_t>(offsetof(UnityVideoParams_t1571660336, ___texCoordScale_3)); }
	inline float get_texCoordScale_3() const { return ___texCoordScale_3; }
	inline float* get_address_of_texCoordScale_3() { return &___texCoordScale_3; }
	inline void set_texCoordScale_3(float value)
	{
		___texCoordScale_3 = value;
	}

	inline static int32_t get_offset_of_cvPixelBufferPtr_4() { return static_cast<int32_t>(offsetof(UnityVideoParams_t1571660336, ___cvPixelBufferPtr_4)); }
	inline intptr_t get_cvPixelBufferPtr_4() const { return ___cvPixelBufferPtr_4; }
	inline intptr_t* get_address_of_cvPixelBufferPtr_4() { return &___cvPixelBufferPtr_4; }
	inline void set_cvPixelBufferPtr_4(intptr_t value)
	{
		___cvPixelBufferPtr_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYVIDEOPARAMS_T1571660336_H
#ifndef UNITYARALIGNMENT_T1183413995_H
#define UNITYARALIGNMENT_T1183413995_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARAlignment
struct  UnityARAlignment_t1183413995 
{
public:
	// System.Int32 UnityEngine.XR.iOS.UnityARAlignment::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UnityARAlignment_t1183413995, ___value___1)); }
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
#endif // UNITYARALIGNMENT_T1183413995_H
#ifndef UNITYARPLANEDETECTION_T692634694_H
#define UNITYARPLANEDETECTION_T692634694_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARPlaneDetection
struct  UnityARPlaneDetection_t692634694 
{
public:
	// System.Int32 UnityEngine.XR.iOS.UnityARPlaneDetection::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UnityARPlaneDetection_t692634694, ___value___1)); }
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
#endif // UNITYARPLANEDETECTION_T692634694_H
#ifndef DIRECTION_T4258755735_H
#define DIRECTION_T4258755735_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Slider/Direction
struct  Direction_t4258755735 
{
public:
	// System.Int32 UnityEngine.UI.Slider/Direction::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Direction_t4258755735, ___value___1)); }
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
#endif // DIRECTION_T4258755735_H
#ifndef UNITYARSESSIONRUNOPTION_T1235742978_H
#define UNITYARSESSIONRUNOPTION_T1235742978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionRunOption
struct  UnityARSessionRunOption_t1235742978 
{
public:
	// System.Int32 UnityEngine.XR.iOS.UnityARSessionRunOption::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UnityARSessionRunOption_t1235742978, ___value___1)); }
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
#endif // UNITYARSESSIONRUNOPTION_T1235742978_H
#ifndef ARRECT_T1312956954_H
#define ARRECT_T1312956954_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARRect
struct  ARRect_t1312956954 
{
public:
	// UnityEngine.XR.iOS.ARPoint UnityEngine.XR.iOS.ARRect::origin
	ARPoint_t1659288880  ___origin_0;
	// UnityEngine.XR.iOS.ARSize UnityEngine.XR.iOS.ARRect::size
	ARSize_t527588933  ___size_1;

public:
	inline static int32_t get_offset_of_origin_0() { return static_cast<int32_t>(offsetof(ARRect_t1312956954, ___origin_0)); }
	inline ARPoint_t1659288880  get_origin_0() const { return ___origin_0; }
	inline ARPoint_t1659288880 * get_address_of_origin_0() { return &___origin_0; }
	inline void set_origin_0(ARPoint_t1659288880  value)
	{
		___origin_0 = value;
	}

	inline static int32_t get_offset_of_size_1() { return static_cast<int32_t>(offsetof(ARRect_t1312956954, ___size_1)); }
	inline ARSize_t527588933  get_size_1() const { return ___size_1; }
	inline ARSize_t527588933 * get_address_of_size_1() { return &___size_1; }
	inline void set_size_1(ARSize_t527588933  value)
	{
		___size_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRECT_T1312956954_H
#ifndef STYLESEARCHATTRIBUTE_T4139994075_H
#define STYLESEARCHATTRIBUTE_T4139994075_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Unity.Utilities.StyleSearchAttribute
struct  StyleSearchAttribute_t4139994075  : public PropertyAttribute_t804941190
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STYLESEARCHATTRIBUTE_T4139994075_H
#ifndef OBJECT_T289108080_H
#define OBJECT_T289108080_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t289108080  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t289108080, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t289108080_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t289108080_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
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
struct Object_t289108080_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t289108080_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T289108080_H
#ifndef COLORCHANGEDEVENT_T1336820221_H
#define COLORCHANGEDEVENT_T1336820221_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ColorChangedEvent
struct  ColorChangedEvent_t1336820221  : public UnityEvent_1_t4049954907
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLORCHANGEDEVENT_T1336820221_H
#ifndef COLORVALUES_T2070382294_H
#define COLORVALUES_T2070382294_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ColorValues
struct  ColorValues_t2070382294 
{
public:
	// System.Int32 ColorValues::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ColorValues_t2070382294, ___value___1)); }
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
#endif // COLORVALUES_T2070382294_H
#ifndef HSVCHANGEDEVENT_T2112947086_H
#define HSVCHANGEDEVENT_T2112947086_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HSVChangedEvent
struct  HSVChangedEvent_t2112947086  : public UnityEvent_3_t389506563
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HSVCHANGEDEVENT_T2112947086_H
#ifndef SERIALIZABLEFROMEDITORMESSAGE_T4036043660_H
#define SERIALIZABLEFROMEDITORMESSAGE_T4036043660_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Utils.serializableFromEditorMessage
struct  serializableFromEditorMessage_t4036043660  : public RuntimeObject
{
public:
	// System.Guid Utils.serializableFromEditorMessage::subMessageId
	Guid_t  ___subMessageId_0;
	// Utils.serializableARKitInit Utils.serializableFromEditorMessage::arkitConfigMsg
	serializableARKitInit_t1537145645 * ___arkitConfigMsg_1;

public:
	inline static int32_t get_offset_of_subMessageId_0() { return static_cast<int32_t>(offsetof(serializableFromEditorMessage_t4036043660, ___subMessageId_0)); }
	inline Guid_t  get_subMessageId_0() const { return ___subMessageId_0; }
	inline Guid_t * get_address_of_subMessageId_0() { return &___subMessageId_0; }
	inline void set_subMessageId_0(Guid_t  value)
	{
		___subMessageId_0 = value;
	}

	inline static int32_t get_offset_of_arkitConfigMsg_1() { return static_cast<int32_t>(offsetof(serializableFromEditorMessage_t4036043660, ___arkitConfigMsg_1)); }
	inline serializableARKitInit_t1537145645 * get_arkitConfigMsg_1() const { return ___arkitConfigMsg_1; }
	inline serializableARKitInit_t1537145645 ** get_address_of_arkitConfigMsg_1() { return &___arkitConfigMsg_1; }
	inline void set_arkitConfigMsg_1(serializableARKitInit_t1537145645 * value)
	{
		___arkitConfigMsg_1 = value;
		Il2CppCodeGenWriteBarrier((&___arkitConfigMsg_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZABLEFROMEDITORMESSAGE_T4036043660_H
#ifndef DIRECTION_T2129480443_H
#define DIRECTION_T2129480443_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.BoxSlider/Direction
struct  Direction_t2129480443 
{
public:
	// System.Int32 UnityEngine.UI.BoxSlider/Direction::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Direction_t2129480443, ___value___1)); }
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
#endif // DIRECTION_T2129480443_H
#ifndef BOXSLIDEREVENT_T2550889516_H
#define BOXSLIDEREVENT_T2550889516_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.BoxSlider/BoxSliderEvent
struct  BoxSliderEvent_t2550889516  : public UnityEvent_2_t1955206753
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOXSLIDEREVENT_T2550889516_H
#ifndef AXIS_T646835441_H
#define AXIS_T646835441_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.BoxSlider/Axis
struct  Axis_t646835441 
{
public:
	// System.Int32 UnityEngine.UI.BoxSlider/Axis::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Axis_t646835441, ___value___1)); }
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
#endif // AXIS_T646835441_H
#ifndef FOCUSSTATE_T1515648390_H
#define FOCUSSTATE_T1515648390_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FocusSquare/FocusState
struct  FocusState_t1515648390 
{
public:
	// System.Int32 FocusSquare/FocusState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FocusState_t1515648390, ___value___1)); }
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
#endif // FOCUSSTATE_T1515648390_H
#ifndef SERIALIZABLEUNITYARCAMERA_T612675575_H
#define SERIALIZABLEUNITYARCAMERA_T612675575_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Utils.serializableUnityARCamera
struct  serializableUnityARCamera_t612675575  : public RuntimeObject
{
public:
	// Utils.serializableUnityARMatrix4x4 Utils.serializableUnityARCamera::worldTransform
	serializableUnityARMatrix4x4_t2144327380 * ___worldTransform_0;
	// Utils.serializableUnityARMatrix4x4 Utils.serializableUnityARCamera::projectionMatrix
	serializableUnityARMatrix4x4_t2144327380 * ___projectionMatrix_1;
	// UnityEngine.XR.iOS.ARTrackingState Utils.serializableUnityARCamera::trackingState
	int32_t ___trackingState_2;
	// UnityEngine.XR.iOS.ARTrackingStateReason Utils.serializableUnityARCamera::trackingReason
	int32_t ___trackingReason_3;
	// UnityEngine.XR.iOS.UnityVideoParams Utils.serializableUnityARCamera::videoParams
	UnityVideoParams_t1571660336  ___videoParams_4;
	// UnityEngine.XR.iOS.UnityARLightEstimate Utils.serializableUnityARCamera::lightEstimation
	UnityARLightEstimate_t3847550647  ___lightEstimation_5;
	// Utils.serializablePointCloud Utils.serializableUnityARCamera::pointCloud
	serializablePointCloud_t2102354234 * ___pointCloud_6;
	// Utils.serializableUnityARMatrix4x4 Utils.serializableUnityARCamera::displayTransform
	serializableUnityARMatrix4x4_t2144327380 * ___displayTransform_7;

public:
	inline static int32_t get_offset_of_worldTransform_0() { return static_cast<int32_t>(offsetof(serializableUnityARCamera_t612675575, ___worldTransform_0)); }
	inline serializableUnityARMatrix4x4_t2144327380 * get_worldTransform_0() const { return ___worldTransform_0; }
	inline serializableUnityARMatrix4x4_t2144327380 ** get_address_of_worldTransform_0() { return &___worldTransform_0; }
	inline void set_worldTransform_0(serializableUnityARMatrix4x4_t2144327380 * value)
	{
		___worldTransform_0 = value;
		Il2CppCodeGenWriteBarrier((&___worldTransform_0), value);
	}

	inline static int32_t get_offset_of_projectionMatrix_1() { return static_cast<int32_t>(offsetof(serializableUnityARCamera_t612675575, ___projectionMatrix_1)); }
	inline serializableUnityARMatrix4x4_t2144327380 * get_projectionMatrix_1() const { return ___projectionMatrix_1; }
	inline serializableUnityARMatrix4x4_t2144327380 ** get_address_of_projectionMatrix_1() { return &___projectionMatrix_1; }
	inline void set_projectionMatrix_1(serializableUnityARMatrix4x4_t2144327380 * value)
	{
		___projectionMatrix_1 = value;
		Il2CppCodeGenWriteBarrier((&___projectionMatrix_1), value);
	}

	inline static int32_t get_offset_of_trackingState_2() { return static_cast<int32_t>(offsetof(serializableUnityARCamera_t612675575, ___trackingState_2)); }
	inline int32_t get_trackingState_2() const { return ___trackingState_2; }
	inline int32_t* get_address_of_trackingState_2() { return &___trackingState_2; }
	inline void set_trackingState_2(int32_t value)
	{
		___trackingState_2 = value;
	}

	inline static int32_t get_offset_of_trackingReason_3() { return static_cast<int32_t>(offsetof(serializableUnityARCamera_t612675575, ___trackingReason_3)); }
	inline int32_t get_trackingReason_3() const { return ___trackingReason_3; }
	inline int32_t* get_address_of_trackingReason_3() { return &___trackingReason_3; }
	inline void set_trackingReason_3(int32_t value)
	{
		___trackingReason_3 = value;
	}

	inline static int32_t get_offset_of_videoParams_4() { return static_cast<int32_t>(offsetof(serializableUnityARCamera_t612675575, ___videoParams_4)); }
	inline UnityVideoParams_t1571660336  get_videoParams_4() const { return ___videoParams_4; }
	inline UnityVideoParams_t1571660336 * get_address_of_videoParams_4() { return &___videoParams_4; }
	inline void set_videoParams_4(UnityVideoParams_t1571660336  value)
	{
		___videoParams_4 = value;
	}

	inline static int32_t get_offset_of_lightEstimation_5() { return static_cast<int32_t>(offsetof(serializableUnityARCamera_t612675575, ___lightEstimation_5)); }
	inline UnityARLightEstimate_t3847550647  get_lightEstimation_5() const { return ___lightEstimation_5; }
	inline UnityARLightEstimate_t3847550647 * get_address_of_lightEstimation_5() { return &___lightEstimation_5; }
	inline void set_lightEstimation_5(UnityARLightEstimate_t3847550647  value)
	{
		___lightEstimation_5 = value;
	}

	inline static int32_t get_offset_of_pointCloud_6() { return static_cast<int32_t>(offsetof(serializableUnityARCamera_t612675575, ___pointCloud_6)); }
	inline serializablePointCloud_t2102354234 * get_pointCloud_6() const { return ___pointCloud_6; }
	inline serializablePointCloud_t2102354234 ** get_address_of_pointCloud_6() { return &___pointCloud_6; }
	inline void set_pointCloud_6(serializablePointCloud_t2102354234 * value)
	{
		___pointCloud_6 = value;
		Il2CppCodeGenWriteBarrier((&___pointCloud_6), value);
	}

	inline static int32_t get_offset_of_displayTransform_7() { return static_cast<int32_t>(offsetof(serializableUnityARCamera_t612675575, ___displayTransform_7)); }
	inline serializableUnityARMatrix4x4_t2144327380 * get_displayTransform_7() const { return ___displayTransform_7; }
	inline serializableUnityARMatrix4x4_t2144327380 ** get_address_of_displayTransform_7() { return &___displayTransform_7; }
	inline void set_displayTransform_7(serializableUnityARMatrix4x4_t2144327380 * value)
	{
		___displayTransform_7 = value;
		Il2CppCodeGenWriteBarrier((&___displayTransform_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZABLEUNITYARCAMERA_T612675575_H
#ifndef SERIALIZABLEARKITINIT_T1537145645_H
#define SERIALIZABLEARKITINIT_T1537145645_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Utils.serializableARKitInit
struct  serializableARKitInit_t1537145645  : public RuntimeObject
{
public:
	// Utils.serializableARSessionConfiguration Utils.serializableARKitInit::config
	serializableARSessionConfiguration_t1088968605 * ___config_0;
	// UnityEngine.XR.iOS.UnityARSessionRunOption Utils.serializableARKitInit::runOption
	int32_t ___runOption_1;

public:
	inline static int32_t get_offset_of_config_0() { return static_cast<int32_t>(offsetof(serializableARKitInit_t1537145645, ___config_0)); }
	inline serializableARSessionConfiguration_t1088968605 * get_config_0() const { return ___config_0; }
	inline serializableARSessionConfiguration_t1088968605 ** get_address_of_config_0() { return &___config_0; }
	inline void set_config_0(serializableARSessionConfiguration_t1088968605 * value)
	{
		___config_0 = value;
		Il2CppCodeGenWriteBarrier((&___config_0), value);
	}

	inline static int32_t get_offset_of_runOption_1() { return static_cast<int32_t>(offsetof(serializableARKitInit_t1537145645, ___runOption_1)); }
	inline int32_t get_runOption_1() const { return ___runOption_1; }
	inline int32_t* get_address_of_runOption_1() { return &___runOption_1; }
	inline void set_runOption_1(int32_t value)
	{
		___runOption_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZABLEARKITINIT_T1537145645_H
#ifndef SERIALIZABLEARSESSIONCONFIGURATION_T1088968605_H
#define SERIALIZABLEARSESSIONCONFIGURATION_T1088968605_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Utils.serializableARSessionConfiguration
struct  serializableARSessionConfiguration_t1088968605  : public RuntimeObject
{
public:
	// UnityEngine.XR.iOS.UnityARAlignment Utils.serializableARSessionConfiguration::alignment
	int32_t ___alignment_0;
	// UnityEngine.XR.iOS.UnityARPlaneDetection Utils.serializableARSessionConfiguration::planeDetection
	int32_t ___planeDetection_1;
	// System.Boolean Utils.serializableARSessionConfiguration::getPointCloudData
	bool ___getPointCloudData_2;
	// System.Boolean Utils.serializableARSessionConfiguration::enableLightEstimation
	bool ___enableLightEstimation_3;

public:
	inline static int32_t get_offset_of_alignment_0() { return static_cast<int32_t>(offsetof(serializableARSessionConfiguration_t1088968605, ___alignment_0)); }
	inline int32_t get_alignment_0() const { return ___alignment_0; }
	inline int32_t* get_address_of_alignment_0() { return &___alignment_0; }
	inline void set_alignment_0(int32_t value)
	{
		___alignment_0 = value;
	}

	inline static int32_t get_offset_of_planeDetection_1() { return static_cast<int32_t>(offsetof(serializableARSessionConfiguration_t1088968605, ___planeDetection_1)); }
	inline int32_t get_planeDetection_1() const { return ___planeDetection_1; }
	inline int32_t* get_address_of_planeDetection_1() { return &___planeDetection_1; }
	inline void set_planeDetection_1(int32_t value)
	{
		___planeDetection_1 = value;
	}

	inline static int32_t get_offset_of_getPointCloudData_2() { return static_cast<int32_t>(offsetof(serializableARSessionConfiguration_t1088968605, ___getPointCloudData_2)); }
	inline bool get_getPointCloudData_2() const { return ___getPointCloudData_2; }
	inline bool* get_address_of_getPointCloudData_2() { return &___getPointCloudData_2; }
	inline void set_getPointCloudData_2(bool value)
	{
		___getPointCloudData_2 = value;
	}

	inline static int32_t get_offset_of_enableLightEstimation_3() { return static_cast<int32_t>(offsetof(serializableARSessionConfiguration_t1088968605, ___enableLightEstimation_3)); }
	inline bool get_enableLightEstimation_3() const { return ___enableLightEstimation_3; }
	inline bool* get_address_of_enableLightEstimation_3() { return &___enableLightEstimation_3; }
	inline void set_enableLightEstimation_3(bool value)
	{
		___enableLightEstimation_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZABLEARSESSIONCONFIGURATION_T1088968605_H
#ifndef SERIALIZABLEUNITYARPLANEANCHOR_T4135824723_H
#define SERIALIZABLEUNITYARPLANEANCHOR_T4135824723_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Utils.serializableUnityARPlaneAnchor
struct  serializableUnityARPlaneAnchor_t4135824723  : public RuntimeObject
{
public:
	// Utils.serializableUnityARMatrix4x4 Utils.serializableUnityARPlaneAnchor::worldTransform
	serializableUnityARMatrix4x4_t2144327380 * ___worldTransform_0;
	// Utils.SerializableVector4 Utils.serializableUnityARPlaneAnchor::center
	SerializableVector4_t1132123658 * ___center_1;
	// Utils.SerializableVector4 Utils.serializableUnityARPlaneAnchor::extent
	SerializableVector4_t1132123658 * ___extent_2;
	// UnityEngine.XR.iOS.ARPlaneAnchorAlignment Utils.serializableUnityARPlaneAnchor::planeAlignment
	int64_t ___planeAlignment_3;
	// System.Byte[] Utils.serializableUnityARPlaneAnchor::identifierStr
	ByteU5BU5D_t3249567452* ___identifierStr_4;

public:
	inline static int32_t get_offset_of_worldTransform_0() { return static_cast<int32_t>(offsetof(serializableUnityARPlaneAnchor_t4135824723, ___worldTransform_0)); }
	inline serializableUnityARMatrix4x4_t2144327380 * get_worldTransform_0() const { return ___worldTransform_0; }
	inline serializableUnityARMatrix4x4_t2144327380 ** get_address_of_worldTransform_0() { return &___worldTransform_0; }
	inline void set_worldTransform_0(serializableUnityARMatrix4x4_t2144327380 * value)
	{
		___worldTransform_0 = value;
		Il2CppCodeGenWriteBarrier((&___worldTransform_0), value);
	}

	inline static int32_t get_offset_of_center_1() { return static_cast<int32_t>(offsetof(serializableUnityARPlaneAnchor_t4135824723, ___center_1)); }
	inline SerializableVector4_t1132123658 * get_center_1() const { return ___center_1; }
	inline SerializableVector4_t1132123658 ** get_address_of_center_1() { return &___center_1; }
	inline void set_center_1(SerializableVector4_t1132123658 * value)
	{
		___center_1 = value;
		Il2CppCodeGenWriteBarrier((&___center_1), value);
	}

	inline static int32_t get_offset_of_extent_2() { return static_cast<int32_t>(offsetof(serializableUnityARPlaneAnchor_t4135824723, ___extent_2)); }
	inline SerializableVector4_t1132123658 * get_extent_2() const { return ___extent_2; }
	inline SerializableVector4_t1132123658 ** get_address_of_extent_2() { return &___extent_2; }
	inline void set_extent_2(SerializableVector4_t1132123658 * value)
	{
		___extent_2 = value;
		Il2CppCodeGenWriteBarrier((&___extent_2), value);
	}

	inline static int32_t get_offset_of_planeAlignment_3() { return static_cast<int32_t>(offsetof(serializableUnityARPlaneAnchor_t4135824723, ___planeAlignment_3)); }
	inline int64_t get_planeAlignment_3() const { return ___planeAlignment_3; }
	inline int64_t* get_address_of_planeAlignment_3() { return &___planeAlignment_3; }
	inline void set_planeAlignment_3(int64_t value)
	{
		___planeAlignment_3 = value;
	}

	inline static int32_t get_offset_of_identifierStr_4() { return static_cast<int32_t>(offsetof(serializableUnityARPlaneAnchor_t4135824723, ___identifierStr_4)); }
	inline ByteU5BU5D_t3249567452* get_identifierStr_4() const { return ___identifierStr_4; }
	inline ByteU5BU5D_t3249567452** get_address_of_identifierStr_4() { return &___identifierStr_4; }
	inline void set_identifierStr_4(ByteU5BU5D_t3249567452* value)
	{
		___identifierStr_4 = value;
		Il2CppCodeGenWriteBarrier((&___identifierStr_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZABLEUNITYARPLANEANCHOR_T4135824723_H
#ifndef UNITYARANCHORDATA_T1542541226_H
#define UNITYARANCHORDATA_T1542541226_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARAnchorData
struct  UnityARAnchorData_t1542541226 
{
public:
	// System.IntPtr UnityEngine.XR.iOS.UnityARAnchorData::ptrIdentifier
	intptr_t ___ptrIdentifier_0;
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.UnityARAnchorData::transform
	UnityARMatrix4x4_t2915059116  ___transform_1;
	// UnityEngine.XR.iOS.ARPlaneAnchorAlignment UnityEngine.XR.iOS.UnityARAnchorData::alignment
	int64_t ___alignment_2;
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARAnchorData::center
	Vector4_t1154593569  ___center_3;
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARAnchorData::extent
	Vector4_t1154593569  ___extent_4;

public:
	inline static int32_t get_offset_of_ptrIdentifier_0() { return static_cast<int32_t>(offsetof(UnityARAnchorData_t1542541226, ___ptrIdentifier_0)); }
	inline intptr_t get_ptrIdentifier_0() const { return ___ptrIdentifier_0; }
	inline intptr_t* get_address_of_ptrIdentifier_0() { return &___ptrIdentifier_0; }
	inline void set_ptrIdentifier_0(intptr_t value)
	{
		___ptrIdentifier_0 = value;
	}

	inline static int32_t get_offset_of_transform_1() { return static_cast<int32_t>(offsetof(UnityARAnchorData_t1542541226, ___transform_1)); }
	inline UnityARMatrix4x4_t2915059116  get_transform_1() const { return ___transform_1; }
	inline UnityARMatrix4x4_t2915059116 * get_address_of_transform_1() { return &___transform_1; }
	inline void set_transform_1(UnityARMatrix4x4_t2915059116  value)
	{
		___transform_1 = value;
	}

	inline static int32_t get_offset_of_alignment_2() { return static_cast<int32_t>(offsetof(UnityARAnchorData_t1542541226, ___alignment_2)); }
	inline int64_t get_alignment_2() const { return ___alignment_2; }
	inline int64_t* get_address_of_alignment_2() { return &___alignment_2; }
	inline void set_alignment_2(int64_t value)
	{
		___alignment_2 = value;
	}

	inline static int32_t get_offset_of_center_3() { return static_cast<int32_t>(offsetof(UnityARAnchorData_t1542541226, ___center_3)); }
	inline Vector4_t1154593569  get_center_3() const { return ___center_3; }
	inline Vector4_t1154593569 * get_address_of_center_3() { return &___center_3; }
	inline void set_center_3(Vector4_t1154593569  value)
	{
		___center_3 = value;
	}

	inline static int32_t get_offset_of_extent_4() { return static_cast<int32_t>(offsetof(UnityARAnchorData_t1542541226, ___extent_4)); }
	inline Vector4_t1154593569  get_extent_4() const { return ___extent_4; }
	inline Vector4_t1154593569 * get_address_of_extent_4() { return &___extent_4; }
	inline void set_extent_4(Vector4_t1154593569  value)
	{
		___extent_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARANCHORDATA_T1542541226_H
#ifndef UNITYARUSERANCHORDATA_T576477003_H
#define UNITYARUSERANCHORDATA_T576477003_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARUserAnchorData
struct  UnityARUserAnchorData_t576477003 
{
public:
	// System.IntPtr UnityEngine.XR.iOS.UnityARUserAnchorData::ptrIdentifier
	intptr_t ___ptrIdentifier_0;
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.UnityARUserAnchorData::transform
	UnityARMatrix4x4_t2915059116  ___transform_1;

public:
	inline static int32_t get_offset_of_ptrIdentifier_0() { return static_cast<int32_t>(offsetof(UnityARUserAnchorData_t576477003, ___ptrIdentifier_0)); }
	inline intptr_t get_ptrIdentifier_0() const { return ___ptrIdentifier_0; }
	inline intptr_t* get_address_of_ptrIdentifier_0() { return &___ptrIdentifier_0; }
	inline void set_ptrIdentifier_0(intptr_t value)
	{
		___ptrIdentifier_0 = value;
	}

	inline static int32_t get_offset_of_transform_1() { return static_cast<int32_t>(offsetof(UnityARUserAnchorData_t576477003, ___transform_1)); }
	inline UnityARMatrix4x4_t2915059116  get_transform_1() const { return ___transform_1; }
	inline UnityARMatrix4x4_t2915059116 * get_address_of_transform_1() { return &___transform_1; }
	inline void set_transform_1(UnityARMatrix4x4_t2915059116  value)
	{
		___transform_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARUSERANCHORDATA_T576477003_H
#ifndef UNITYARHITTESTRESULT_T1765679215_H
#define UNITYARHITTESTRESULT_T1765679215_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARHitTestResult
struct  UnityARHitTestResult_t1765679215 
{
public:
	// UnityEngine.XR.iOS.ARHitTestResultType UnityEngine.XR.iOS.UnityARHitTestResult::type
	int64_t ___type_0;
	// System.Double UnityEngine.XR.iOS.UnityARHitTestResult::distance
	double ___distance_1;
	// UnityEngine.Matrix4x4 UnityEngine.XR.iOS.UnityARHitTestResult::localTransform
	Matrix4x4_t1549863613  ___localTransform_2;
	// UnityEngine.Matrix4x4 UnityEngine.XR.iOS.UnityARHitTestResult::worldTransform
	Matrix4x4_t1549863613  ___worldTransform_3;
	// System.IntPtr UnityEngine.XR.iOS.UnityARHitTestResult::anchor
	intptr_t ___anchor_4;
	// System.Boolean UnityEngine.XR.iOS.UnityARHitTestResult::isValid
	bool ___isValid_5;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(UnityARHitTestResult_t1765679215, ___type_0)); }
	inline int64_t get_type_0() const { return ___type_0; }
	inline int64_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(int64_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_distance_1() { return static_cast<int32_t>(offsetof(UnityARHitTestResult_t1765679215, ___distance_1)); }
	inline double get_distance_1() const { return ___distance_1; }
	inline double* get_address_of_distance_1() { return &___distance_1; }
	inline void set_distance_1(double value)
	{
		___distance_1 = value;
	}

	inline static int32_t get_offset_of_localTransform_2() { return static_cast<int32_t>(offsetof(UnityARHitTestResult_t1765679215, ___localTransform_2)); }
	inline Matrix4x4_t1549863613  get_localTransform_2() const { return ___localTransform_2; }
	inline Matrix4x4_t1549863613 * get_address_of_localTransform_2() { return &___localTransform_2; }
	inline void set_localTransform_2(Matrix4x4_t1549863613  value)
	{
		___localTransform_2 = value;
	}

	inline static int32_t get_offset_of_worldTransform_3() { return static_cast<int32_t>(offsetof(UnityARHitTestResult_t1765679215, ___worldTransform_3)); }
	inline Matrix4x4_t1549863613  get_worldTransform_3() const { return ___worldTransform_3; }
	inline Matrix4x4_t1549863613 * get_address_of_worldTransform_3() { return &___worldTransform_3; }
	inline void set_worldTransform_3(Matrix4x4_t1549863613  value)
	{
		___worldTransform_3 = value;
	}

	inline static int32_t get_offset_of_anchor_4() { return static_cast<int32_t>(offsetof(UnityARHitTestResult_t1765679215, ___anchor_4)); }
	inline intptr_t get_anchor_4() const { return ___anchor_4; }
	inline intptr_t* get_address_of_anchor_4() { return &___anchor_4; }
	inline void set_anchor_4(intptr_t value)
	{
		___anchor_4 = value;
	}

	inline static int32_t get_offset_of_isValid_5() { return static_cast<int32_t>(offsetof(UnityARHitTestResult_t1765679215, ___isValid_5)); }
	inline bool get_isValid_5() const { return ___isValid_5; }
	inline bool* get_address_of_isValid_5() { return &___isValid_5; }
	inline void set_isValid_5(bool value)
	{
		___isValid_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.XR.iOS.UnityARHitTestResult
struct UnityARHitTestResult_t1765679215_marshaled_pinvoke
{
	int64_t ___type_0;
	double ___distance_1;
	Matrix4x4_t1549863613  ___localTransform_2;
	Matrix4x4_t1549863613  ___worldTransform_3;
	intptr_t ___anchor_4;
	int32_t ___isValid_5;
};
// Native definition for COM marshalling of UnityEngine.XR.iOS.UnityARHitTestResult
struct UnityARHitTestResult_t1765679215_marshaled_com
{
	int64_t ___type_0;
	double ___distance_1;
	Matrix4x4_t1549863613  ___localTransform_2;
	Matrix4x4_t1549863613  ___worldTransform_3;
	intptr_t ___anchor_4;
	int32_t ___isValid_5;
};
#endif // UNITYARHITTESTRESULT_T1765679215_H
#ifndef UNITYARCAMERA_T905803221_H
#define UNITYARCAMERA_T905803221_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARCamera
struct  UnityARCamera_t905803221 
{
public:
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.UnityARCamera::worldTransform
	UnityARMatrix4x4_t2915059116  ___worldTransform_0;
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.UnityARCamera::projectionMatrix
	UnityARMatrix4x4_t2915059116  ___projectionMatrix_1;
	// UnityEngine.XR.iOS.ARTrackingState UnityEngine.XR.iOS.UnityARCamera::trackingState
	int32_t ___trackingState_2;
	// UnityEngine.XR.iOS.ARTrackingStateReason UnityEngine.XR.iOS.UnityARCamera::trackingReason
	int32_t ___trackingReason_3;
	// UnityEngine.XR.iOS.UnityVideoParams UnityEngine.XR.iOS.UnityARCamera::videoParams
	UnityVideoParams_t1571660336  ___videoParams_4;
	// UnityEngine.XR.iOS.UnityARLightEstimate UnityEngine.XR.iOS.UnityARCamera::lightEstimation
	UnityARLightEstimate_t3847550647  ___lightEstimation_5;
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.UnityARCamera::displayTransform
	UnityARMatrix4x4_t2915059116  ___displayTransform_6;
	// UnityEngine.Vector3[] UnityEngine.XR.iOS.UnityARCamera::pointCloudData
	Vector3U5BU5D_t853750501* ___pointCloudData_7;

public:
	inline static int32_t get_offset_of_worldTransform_0() { return static_cast<int32_t>(offsetof(UnityARCamera_t905803221, ___worldTransform_0)); }
	inline UnityARMatrix4x4_t2915059116  get_worldTransform_0() const { return ___worldTransform_0; }
	inline UnityARMatrix4x4_t2915059116 * get_address_of_worldTransform_0() { return &___worldTransform_0; }
	inline void set_worldTransform_0(UnityARMatrix4x4_t2915059116  value)
	{
		___worldTransform_0 = value;
	}

	inline static int32_t get_offset_of_projectionMatrix_1() { return static_cast<int32_t>(offsetof(UnityARCamera_t905803221, ___projectionMatrix_1)); }
	inline UnityARMatrix4x4_t2915059116  get_projectionMatrix_1() const { return ___projectionMatrix_1; }
	inline UnityARMatrix4x4_t2915059116 * get_address_of_projectionMatrix_1() { return &___projectionMatrix_1; }
	inline void set_projectionMatrix_1(UnityARMatrix4x4_t2915059116  value)
	{
		___projectionMatrix_1 = value;
	}

	inline static int32_t get_offset_of_trackingState_2() { return static_cast<int32_t>(offsetof(UnityARCamera_t905803221, ___trackingState_2)); }
	inline int32_t get_trackingState_2() const { return ___trackingState_2; }
	inline int32_t* get_address_of_trackingState_2() { return &___trackingState_2; }
	inline void set_trackingState_2(int32_t value)
	{
		___trackingState_2 = value;
	}

	inline static int32_t get_offset_of_trackingReason_3() { return static_cast<int32_t>(offsetof(UnityARCamera_t905803221, ___trackingReason_3)); }
	inline int32_t get_trackingReason_3() const { return ___trackingReason_3; }
	inline int32_t* get_address_of_trackingReason_3() { return &___trackingReason_3; }
	inline void set_trackingReason_3(int32_t value)
	{
		___trackingReason_3 = value;
	}

	inline static int32_t get_offset_of_videoParams_4() { return static_cast<int32_t>(offsetof(UnityARCamera_t905803221, ___videoParams_4)); }
	inline UnityVideoParams_t1571660336  get_videoParams_4() const { return ___videoParams_4; }
	inline UnityVideoParams_t1571660336 * get_address_of_videoParams_4() { return &___videoParams_4; }
	inline void set_videoParams_4(UnityVideoParams_t1571660336  value)
	{
		___videoParams_4 = value;
	}

	inline static int32_t get_offset_of_lightEstimation_5() { return static_cast<int32_t>(offsetof(UnityARCamera_t905803221, ___lightEstimation_5)); }
	inline UnityARLightEstimate_t3847550647  get_lightEstimation_5() const { return ___lightEstimation_5; }
	inline UnityARLightEstimate_t3847550647 * get_address_of_lightEstimation_5() { return &___lightEstimation_5; }
	inline void set_lightEstimation_5(UnityARLightEstimate_t3847550647  value)
	{
		___lightEstimation_5 = value;
	}

	inline static int32_t get_offset_of_displayTransform_6() { return static_cast<int32_t>(offsetof(UnityARCamera_t905803221, ___displayTransform_6)); }
	inline UnityARMatrix4x4_t2915059116  get_displayTransform_6() const { return ___displayTransform_6; }
	inline UnityARMatrix4x4_t2915059116 * get_address_of_displayTransform_6() { return &___displayTransform_6; }
	inline void set_displayTransform_6(UnityARMatrix4x4_t2915059116  value)
	{
		___displayTransform_6 = value;
	}

	inline static int32_t get_offset_of_pointCloudData_7() { return static_cast<int32_t>(offsetof(UnityARCamera_t905803221, ___pointCloudData_7)); }
	inline Vector3U5BU5D_t853750501* get_pointCloudData_7() const { return ___pointCloudData_7; }
	inline Vector3U5BU5D_t853750501** get_address_of_pointCloudData_7() { return &___pointCloudData_7; }
	inline void set_pointCloudData_7(Vector3U5BU5D_t853750501* value)
	{
		___pointCloudData_7 = value;
		Il2CppCodeGenWriteBarrier((&___pointCloudData_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.XR.iOS.UnityARCamera
struct UnityARCamera_t905803221_marshaled_pinvoke
{
	UnityARMatrix4x4_t2915059116  ___worldTransform_0;
	UnityARMatrix4x4_t2915059116  ___projectionMatrix_1;
	int32_t ___trackingState_2;
	int32_t ___trackingReason_3;
	UnityVideoParams_t1571660336  ___videoParams_4;
	UnityARLightEstimate_t3847550647  ___lightEstimation_5;
	UnityARMatrix4x4_t2915059116  ___displayTransform_6;
	Vector3_t3995960300 * ___pointCloudData_7;
};
// Native definition for COM marshalling of UnityEngine.XR.iOS.UnityARCamera
struct UnityARCamera_t905803221_marshaled_com
{
	UnityARMatrix4x4_t2915059116  ___worldTransform_0;
	UnityARMatrix4x4_t2915059116  ___projectionMatrix_1;
	int32_t ___trackingState_2;
	int32_t ___trackingReason_3;
	UnityVideoParams_t1571660336  ___videoParams_4;
	UnityARLightEstimate_t3847550647  ___lightEstimation_5;
	UnityARMatrix4x4_t2915059116  ___displayTransform_6;
	Vector3_t3995960300 * ___pointCloudData_7;
};
#endif // UNITYARCAMERA_T905803221_H
#ifndef ARKITWORLDTRACKINGSESSIONCONFIGURATION_T2573166511_H
#define ARKITWORLDTRACKINGSESSIONCONFIGURATION_T2573166511_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration
struct  ARKitWorldTrackingSessionConfiguration_t2573166511 
{
public:
	// UnityEngine.XR.iOS.UnityARAlignment UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration::alignment
	int32_t ___alignment_0;
	// UnityEngine.XR.iOS.UnityARPlaneDetection UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration::planeDetection
	int32_t ___planeDetection_1;
	// System.Boolean UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration::getPointCloudData
	bool ___getPointCloudData_2;
	// System.Boolean UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration::enableLightEstimation
	bool ___enableLightEstimation_3;

public:
	inline static int32_t get_offset_of_alignment_0() { return static_cast<int32_t>(offsetof(ARKitWorldTrackingSessionConfiguration_t2573166511, ___alignment_0)); }
	inline int32_t get_alignment_0() const { return ___alignment_0; }
	inline int32_t* get_address_of_alignment_0() { return &___alignment_0; }
	inline void set_alignment_0(int32_t value)
	{
		___alignment_0 = value;
	}

	inline static int32_t get_offset_of_planeDetection_1() { return static_cast<int32_t>(offsetof(ARKitWorldTrackingSessionConfiguration_t2573166511, ___planeDetection_1)); }
	inline int32_t get_planeDetection_1() const { return ___planeDetection_1; }
	inline int32_t* get_address_of_planeDetection_1() { return &___planeDetection_1; }
	inline void set_planeDetection_1(int32_t value)
	{
		___planeDetection_1 = value;
	}

	inline static int32_t get_offset_of_getPointCloudData_2() { return static_cast<int32_t>(offsetof(ARKitWorldTrackingSessionConfiguration_t2573166511, ___getPointCloudData_2)); }
	inline bool get_getPointCloudData_2() const { return ___getPointCloudData_2; }
	inline bool* get_address_of_getPointCloudData_2() { return &___getPointCloudData_2; }
	inline void set_getPointCloudData_2(bool value)
	{
		___getPointCloudData_2 = value;
	}

	inline static int32_t get_offset_of_enableLightEstimation_3() { return static_cast<int32_t>(offsetof(ARKitWorldTrackingSessionConfiguration_t2573166511, ___enableLightEstimation_3)); }
	inline bool get_enableLightEstimation_3() const { return ___enableLightEstimation_3; }
	inline bool* get_address_of_enableLightEstimation_3() { return &___enableLightEstimation_3; }
	inline void set_enableLightEstimation_3(bool value)
	{
		___enableLightEstimation_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration
struct ARKitWorldTrackingSessionConfiguration_t2573166511_marshaled_pinvoke
{
	int32_t ___alignment_0;
	int32_t ___planeDetection_1;
	int32_t ___getPointCloudData_2;
	int32_t ___enableLightEstimation_3;
};
// Native definition for COM marshalling of UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration
struct ARKitWorldTrackingSessionConfiguration_t2573166511_marshaled_com
{
	int32_t ___alignment_0;
	int32_t ___planeDetection_1;
	int32_t ___getPointCloudData_2;
	int32_t ___enableLightEstimation_3;
};
#endif // ARKITWORLDTRACKINGSESSIONCONFIGURATION_T2573166511_H
#ifndef ARKITSESSIONCONFIGURATION_T1440507161_H
#define ARKITSESSIONCONFIGURATION_T1440507161_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARKitSessionConfiguration
struct  ARKitSessionConfiguration_t1440507161 
{
public:
	// UnityEngine.XR.iOS.UnityARAlignment UnityEngine.XR.iOS.ARKitSessionConfiguration::alignment
	int32_t ___alignment_0;
	// System.Boolean UnityEngine.XR.iOS.ARKitSessionConfiguration::getPointCloudData
	bool ___getPointCloudData_1;
	// System.Boolean UnityEngine.XR.iOS.ARKitSessionConfiguration::enableLightEstimation
	bool ___enableLightEstimation_2;

public:
	inline static int32_t get_offset_of_alignment_0() { return static_cast<int32_t>(offsetof(ARKitSessionConfiguration_t1440507161, ___alignment_0)); }
	inline int32_t get_alignment_0() const { return ___alignment_0; }
	inline int32_t* get_address_of_alignment_0() { return &___alignment_0; }
	inline void set_alignment_0(int32_t value)
	{
		___alignment_0 = value;
	}

	inline static int32_t get_offset_of_getPointCloudData_1() { return static_cast<int32_t>(offsetof(ARKitSessionConfiguration_t1440507161, ___getPointCloudData_1)); }
	inline bool get_getPointCloudData_1() const { return ___getPointCloudData_1; }
	inline bool* get_address_of_getPointCloudData_1() { return &___getPointCloudData_1; }
	inline void set_getPointCloudData_1(bool value)
	{
		___getPointCloudData_1 = value;
	}

	inline static int32_t get_offset_of_enableLightEstimation_2() { return static_cast<int32_t>(offsetof(ARKitSessionConfiguration_t1440507161, ___enableLightEstimation_2)); }
	inline bool get_enableLightEstimation_2() const { return ___enableLightEstimation_2; }
	inline bool* get_address_of_enableLightEstimation_2() { return &___enableLightEstimation_2; }
	inline void set_enableLightEstimation_2(bool value)
	{
		___enableLightEstimation_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.XR.iOS.ARKitSessionConfiguration
struct ARKitSessionConfiguration_t1440507161_marshaled_pinvoke
{
	int32_t ___alignment_0;
	int32_t ___getPointCloudData_1;
	int32_t ___enableLightEstimation_2;
};
// Native definition for COM marshalling of UnityEngine.XR.iOS.ARKitSessionConfiguration
struct ARKitSessionConfiguration_t1440507161_marshaled_com
{
	int32_t ___alignment_0;
	int32_t ___getPointCloudData_1;
	int32_t ___enableLightEstimation_2;
};
#endif // ARKITSESSIONCONFIGURATION_T1440507161_H
#ifndef COMPONENT_T1872901406_H
#define COMPONENT_T1872901406_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1872901406  : public Object_t289108080
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1872901406_H
#ifndef NAVIGATION_T3450429112_H
#define NAVIGATION_T3450429112_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Navigation
struct  Navigation_t3450429112 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3032071154 * ___m_SelectOnUp_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3032071154 * ___m_SelectOnDown_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3032071154 * ___m_SelectOnLeft_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3032071154 * ___m_SelectOnRight_4;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t3450429112, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_1() { return static_cast<int32_t>(offsetof(Navigation_t3450429112, ___m_SelectOnUp_1)); }
	inline Selectable_t3032071154 * get_m_SelectOnUp_1() const { return ___m_SelectOnUp_1; }
	inline Selectable_t3032071154 ** get_address_of_m_SelectOnUp_1() { return &___m_SelectOnUp_1; }
	inline void set_m_SelectOnUp_1(Selectable_t3032071154 * value)
	{
		___m_SelectOnUp_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnUp_1), value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_2() { return static_cast<int32_t>(offsetof(Navigation_t3450429112, ___m_SelectOnDown_2)); }
	inline Selectable_t3032071154 * get_m_SelectOnDown_2() const { return ___m_SelectOnDown_2; }
	inline Selectable_t3032071154 ** get_address_of_m_SelectOnDown_2() { return &___m_SelectOnDown_2; }
	inline void set_m_SelectOnDown_2(Selectable_t3032071154 * value)
	{
		___m_SelectOnDown_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnDown_2), value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_3() { return static_cast<int32_t>(offsetof(Navigation_t3450429112, ___m_SelectOnLeft_3)); }
	inline Selectable_t3032071154 * get_m_SelectOnLeft_3() const { return ___m_SelectOnLeft_3; }
	inline Selectable_t3032071154 ** get_address_of_m_SelectOnLeft_3() { return &___m_SelectOnLeft_3; }
	inline void set_m_SelectOnLeft_3(Selectable_t3032071154 * value)
	{
		___m_SelectOnLeft_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnLeft_3), value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_4() { return static_cast<int32_t>(offsetof(Navigation_t3450429112, ___m_SelectOnRight_4)); }
	inline Selectable_t3032071154 * get_m_SelectOnRight_4() const { return ___m_SelectOnRight_4; }
	inline Selectable_t3032071154 ** get_address_of_m_SelectOnRight_4() { return &___m_SelectOnRight_4; }
	inline void set_m_SelectOnRight_4(Selectable_t3032071154 * value)
	{
		___m_SelectOnRight_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnRight_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t3450429112_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	Selectable_t3032071154 * ___m_SelectOnUp_1;
	Selectable_t3032071154 * ___m_SelectOnDown_2;
	Selectable_t3032071154 * ___m_SelectOnLeft_3;
	Selectable_t3032071154 * ___m_SelectOnRight_4;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t3450429112_marshaled_com
{
	int32_t ___m_Mode_0;
	Selectable_t3032071154 * ___m_SelectOnUp_1;
	Selectable_t3032071154 * ___m_SelectOnDown_2;
	Selectable_t3032071154 * ___m_SelectOnLeft_3;
	Selectable_t3032071154 * ___m_SelectOnRight_4;
};
#endif // NAVIGATION_T3450429112_H
#ifndef ARHITTESTRESULT_T1076688094_H
#define ARHITTESTRESULT_T1076688094_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARHitTestResult
struct  ARHitTestResult_t1076688094 
{
public:
	// UnityEngine.XR.iOS.ARHitTestResultType UnityEngine.XR.iOS.ARHitTestResult::type
	int64_t ___type_0;
	// System.Double UnityEngine.XR.iOS.ARHitTestResult::distance
	double ___distance_1;
	// UnityEngine.Matrix4x4 UnityEngine.XR.iOS.ARHitTestResult::localTransform
	Matrix4x4_t1549863613  ___localTransform_2;
	// UnityEngine.Matrix4x4 UnityEngine.XR.iOS.ARHitTestResult::worldTransform
	Matrix4x4_t1549863613  ___worldTransform_3;
	// System.String UnityEngine.XR.iOS.ARHitTestResult::anchorIdentifier
	String_t* ___anchorIdentifier_4;
	// System.Boolean UnityEngine.XR.iOS.ARHitTestResult::isValid
	bool ___isValid_5;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(ARHitTestResult_t1076688094, ___type_0)); }
	inline int64_t get_type_0() const { return ___type_0; }
	inline int64_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(int64_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_distance_1() { return static_cast<int32_t>(offsetof(ARHitTestResult_t1076688094, ___distance_1)); }
	inline double get_distance_1() const { return ___distance_1; }
	inline double* get_address_of_distance_1() { return &___distance_1; }
	inline void set_distance_1(double value)
	{
		___distance_1 = value;
	}

	inline static int32_t get_offset_of_localTransform_2() { return static_cast<int32_t>(offsetof(ARHitTestResult_t1076688094, ___localTransform_2)); }
	inline Matrix4x4_t1549863613  get_localTransform_2() const { return ___localTransform_2; }
	inline Matrix4x4_t1549863613 * get_address_of_localTransform_2() { return &___localTransform_2; }
	inline void set_localTransform_2(Matrix4x4_t1549863613  value)
	{
		___localTransform_2 = value;
	}

	inline static int32_t get_offset_of_worldTransform_3() { return static_cast<int32_t>(offsetof(ARHitTestResult_t1076688094, ___worldTransform_3)); }
	inline Matrix4x4_t1549863613  get_worldTransform_3() const { return ___worldTransform_3; }
	inline Matrix4x4_t1549863613 * get_address_of_worldTransform_3() { return &___worldTransform_3; }
	inline void set_worldTransform_3(Matrix4x4_t1549863613  value)
	{
		___worldTransform_3 = value;
	}

	inline static int32_t get_offset_of_anchorIdentifier_4() { return static_cast<int32_t>(offsetof(ARHitTestResult_t1076688094, ___anchorIdentifier_4)); }
	inline String_t* get_anchorIdentifier_4() const { return ___anchorIdentifier_4; }
	inline String_t** get_address_of_anchorIdentifier_4() { return &___anchorIdentifier_4; }
	inline void set_anchorIdentifier_4(String_t* value)
	{
		___anchorIdentifier_4 = value;
		Il2CppCodeGenWriteBarrier((&___anchorIdentifier_4), value);
	}

	inline static int32_t get_offset_of_isValid_5() { return static_cast<int32_t>(offsetof(ARHitTestResult_t1076688094, ___isValid_5)); }
	inline bool get_isValid_5() const { return ___isValid_5; }
	inline bool* get_address_of_isValid_5() { return &___isValid_5; }
	inline void set_isValid_5(bool value)
	{
		___isValid_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.XR.iOS.ARHitTestResult
struct ARHitTestResult_t1076688094_marshaled_pinvoke
{
	int64_t ___type_0;
	double ___distance_1;
	Matrix4x4_t1549863613  ___localTransform_2;
	Matrix4x4_t1549863613  ___worldTransform_3;
	char* ___anchorIdentifier_4;
	int32_t ___isValid_5;
};
// Native definition for COM marshalling of UnityEngine.XR.iOS.ARHitTestResult
struct ARHitTestResult_t1076688094_marshaled_com
{
	int64_t ___type_0;
	double ___distance_1;
	Matrix4x4_t1549863613  ___localTransform_2;
	Matrix4x4_t1549863613  ___worldTransform_3;
	Il2CppChar* ___anchorIdentifier_4;
	int32_t ___isValid_5;
};
#endif // ARHITTESTRESULT_T1076688094_H
#ifndef ARCAMERA_T319942038_H
#define ARCAMERA_T319942038_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARCamera
struct  ARCamera_t319942038 
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.XR.iOS.ARCamera::worldTransform
	Matrix4x4_t1549863613  ___worldTransform_0;
	// UnityEngine.Vector3 UnityEngine.XR.iOS.ARCamera::eulerAngles
	Vector3_t3995960300  ___eulerAngles_1;
	// UnityEngine.XR.iOS.ARTrackingQuality UnityEngine.XR.iOS.ARCamera::trackingQuality
	int64_t ___trackingQuality_2;
	// UnityEngine.Vector3 UnityEngine.XR.iOS.ARCamera::intrinsics_row1
	Vector3_t3995960300  ___intrinsics_row1_3;
	// UnityEngine.Vector3 UnityEngine.XR.iOS.ARCamera::intrinsics_row2
	Vector3_t3995960300  ___intrinsics_row2_4;
	// UnityEngine.Vector3 UnityEngine.XR.iOS.ARCamera::intrinsics_row3
	Vector3_t3995960300  ___intrinsics_row3_5;
	// UnityEngine.XR.iOS.ARSize UnityEngine.XR.iOS.ARCamera::imageResolution
	ARSize_t527588933  ___imageResolution_6;

public:
	inline static int32_t get_offset_of_worldTransform_0() { return static_cast<int32_t>(offsetof(ARCamera_t319942038, ___worldTransform_0)); }
	inline Matrix4x4_t1549863613  get_worldTransform_0() const { return ___worldTransform_0; }
	inline Matrix4x4_t1549863613 * get_address_of_worldTransform_0() { return &___worldTransform_0; }
	inline void set_worldTransform_0(Matrix4x4_t1549863613  value)
	{
		___worldTransform_0 = value;
	}

	inline static int32_t get_offset_of_eulerAngles_1() { return static_cast<int32_t>(offsetof(ARCamera_t319942038, ___eulerAngles_1)); }
	inline Vector3_t3995960300  get_eulerAngles_1() const { return ___eulerAngles_1; }
	inline Vector3_t3995960300 * get_address_of_eulerAngles_1() { return &___eulerAngles_1; }
	inline void set_eulerAngles_1(Vector3_t3995960300  value)
	{
		___eulerAngles_1 = value;
	}

	inline static int32_t get_offset_of_trackingQuality_2() { return static_cast<int32_t>(offsetof(ARCamera_t319942038, ___trackingQuality_2)); }
	inline int64_t get_trackingQuality_2() const { return ___trackingQuality_2; }
	inline int64_t* get_address_of_trackingQuality_2() { return &___trackingQuality_2; }
	inline void set_trackingQuality_2(int64_t value)
	{
		___trackingQuality_2 = value;
	}

	inline static int32_t get_offset_of_intrinsics_row1_3() { return static_cast<int32_t>(offsetof(ARCamera_t319942038, ___intrinsics_row1_3)); }
	inline Vector3_t3995960300  get_intrinsics_row1_3() const { return ___intrinsics_row1_3; }
	inline Vector3_t3995960300 * get_address_of_intrinsics_row1_3() { return &___intrinsics_row1_3; }
	inline void set_intrinsics_row1_3(Vector3_t3995960300  value)
	{
		___intrinsics_row1_3 = value;
	}

	inline static int32_t get_offset_of_intrinsics_row2_4() { return static_cast<int32_t>(offsetof(ARCamera_t319942038, ___intrinsics_row2_4)); }
	inline Vector3_t3995960300  get_intrinsics_row2_4() const { return ___intrinsics_row2_4; }
	inline Vector3_t3995960300 * get_address_of_intrinsics_row2_4() { return &___intrinsics_row2_4; }
	inline void set_intrinsics_row2_4(Vector3_t3995960300  value)
	{
		___intrinsics_row2_4 = value;
	}

	inline static int32_t get_offset_of_intrinsics_row3_5() { return static_cast<int32_t>(offsetof(ARCamera_t319942038, ___intrinsics_row3_5)); }
	inline Vector3_t3995960300  get_intrinsics_row3_5() const { return ___intrinsics_row3_5; }
	inline Vector3_t3995960300 * get_address_of_intrinsics_row3_5() { return &___intrinsics_row3_5; }
	inline void set_intrinsics_row3_5(Vector3_t3995960300  value)
	{
		___intrinsics_row3_5 = value;
	}

	inline static int32_t get_offset_of_imageResolution_6() { return static_cast<int32_t>(offsetof(ARCamera_t319942038, ___imageResolution_6)); }
	inline ARSize_t527588933  get_imageResolution_6() const { return ___imageResolution_6; }
	inline ARSize_t527588933 * get_address_of_imageResolution_6() { return &___imageResolution_6; }
	inline void set_imageResolution_6(ARSize_t527588933  value)
	{
		___imageResolution_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARCAMERA_T319942038_H
#ifndef ARPLANEANCHOR_T2548879378_H
#define ARPLANEANCHOR_T2548879378_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARPlaneAnchor
struct  ARPlaneAnchor_t2548879378 
{
public:
	// System.String UnityEngine.XR.iOS.ARPlaneAnchor::identifier
	String_t* ___identifier_0;
	// UnityEngine.Matrix4x4 UnityEngine.XR.iOS.ARPlaneAnchor::transform
	Matrix4x4_t1549863613  ___transform_1;
	// UnityEngine.XR.iOS.ARPlaneAnchorAlignment UnityEngine.XR.iOS.ARPlaneAnchor::alignment
	int64_t ___alignment_2;
	// UnityEngine.Vector3 UnityEngine.XR.iOS.ARPlaneAnchor::center
	Vector3_t3995960300  ___center_3;
	// UnityEngine.Vector3 UnityEngine.XR.iOS.ARPlaneAnchor::extent
	Vector3_t3995960300  ___extent_4;

public:
	inline static int32_t get_offset_of_identifier_0() { return static_cast<int32_t>(offsetof(ARPlaneAnchor_t2548879378, ___identifier_0)); }
	inline String_t* get_identifier_0() const { return ___identifier_0; }
	inline String_t** get_address_of_identifier_0() { return &___identifier_0; }
	inline void set_identifier_0(String_t* value)
	{
		___identifier_0 = value;
		Il2CppCodeGenWriteBarrier((&___identifier_0), value);
	}

	inline static int32_t get_offset_of_transform_1() { return static_cast<int32_t>(offsetof(ARPlaneAnchor_t2548879378, ___transform_1)); }
	inline Matrix4x4_t1549863613  get_transform_1() const { return ___transform_1; }
	inline Matrix4x4_t1549863613 * get_address_of_transform_1() { return &___transform_1; }
	inline void set_transform_1(Matrix4x4_t1549863613  value)
	{
		___transform_1 = value;
	}

	inline static int32_t get_offset_of_alignment_2() { return static_cast<int32_t>(offsetof(ARPlaneAnchor_t2548879378, ___alignment_2)); }
	inline int64_t get_alignment_2() const { return ___alignment_2; }
	inline int64_t* get_address_of_alignment_2() { return &___alignment_2; }
	inline void set_alignment_2(int64_t value)
	{
		___alignment_2 = value;
	}

	inline static int32_t get_offset_of_center_3() { return static_cast<int32_t>(offsetof(ARPlaneAnchor_t2548879378, ___center_3)); }
	inline Vector3_t3995960300  get_center_3() const { return ___center_3; }
	inline Vector3_t3995960300 * get_address_of_center_3() { return &___center_3; }
	inline void set_center_3(Vector3_t3995960300  value)
	{
		___center_3 = value;
	}

	inline static int32_t get_offset_of_extent_4() { return static_cast<int32_t>(offsetof(ARPlaneAnchor_t2548879378, ___extent_4)); }
	inline Vector3_t3995960300  get_extent_4() const { return ___extent_4; }
	inline Vector3_t3995960300 * get_address_of_extent_4() { return &___extent_4; }
	inline void set_extent_4(Vector3_t3995960300  value)
	{
		___extent_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.XR.iOS.ARPlaneAnchor
struct ARPlaneAnchor_t2548879378_marshaled_pinvoke
{
	char* ___identifier_0;
	Matrix4x4_t1549863613  ___transform_1;
	int64_t ___alignment_2;
	Vector3_t3995960300  ___center_3;
	Vector3_t3995960300  ___extent_4;
};
// Native definition for COM marshalling of UnityEngine.XR.iOS.ARPlaneAnchor
struct ARPlaneAnchor_t2548879378_marshaled_com
{
	Il2CppChar* ___identifier_0;
	Matrix4x4_t1549863613  ___transform_1;
	int64_t ___alignment_2;
	Vector3_t3995960300  ___center_3;
	Vector3_t3995960300  ___extent_4;
};
#endif // ARPLANEANCHOR_T2548879378_H
#ifndef INTERNAL_UNITYARCAMERA_T976995971_H
#define INTERNAL_UNITYARCAMERA_T976995971_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.internal_UnityARCamera
struct  internal_UnityARCamera_t976995971 
{
public:
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.internal_UnityARCamera::worldTransform
	UnityARMatrix4x4_t2915059116  ___worldTransform_0;
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.internal_UnityARCamera::projectionMatrix
	UnityARMatrix4x4_t2915059116  ___projectionMatrix_1;
	// UnityEngine.XR.iOS.ARTrackingState UnityEngine.XR.iOS.internal_UnityARCamera::trackingState
	int32_t ___trackingState_2;
	// UnityEngine.XR.iOS.ARTrackingStateReason UnityEngine.XR.iOS.internal_UnityARCamera::trackingReason
	int32_t ___trackingReason_3;
	// UnityEngine.XR.iOS.UnityVideoParams UnityEngine.XR.iOS.internal_UnityARCamera::videoParams
	UnityVideoParams_t1571660336  ___videoParams_4;
	// UnityEngine.XR.iOS.UnityARLightEstimate UnityEngine.XR.iOS.internal_UnityARCamera::lightEstimation
	UnityARLightEstimate_t3847550647  ___lightEstimation_5;
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.internal_UnityARCamera::displayTransform
	UnityARMatrix4x4_t2915059116  ___displayTransform_6;
	// System.UInt32 UnityEngine.XR.iOS.internal_UnityARCamera::getPointCloudData
	uint32_t ___getPointCloudData_7;

public:
	inline static int32_t get_offset_of_worldTransform_0() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t976995971, ___worldTransform_0)); }
	inline UnityARMatrix4x4_t2915059116  get_worldTransform_0() const { return ___worldTransform_0; }
	inline UnityARMatrix4x4_t2915059116 * get_address_of_worldTransform_0() { return &___worldTransform_0; }
	inline void set_worldTransform_0(UnityARMatrix4x4_t2915059116  value)
	{
		___worldTransform_0 = value;
	}

	inline static int32_t get_offset_of_projectionMatrix_1() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t976995971, ___projectionMatrix_1)); }
	inline UnityARMatrix4x4_t2915059116  get_projectionMatrix_1() const { return ___projectionMatrix_1; }
	inline UnityARMatrix4x4_t2915059116 * get_address_of_projectionMatrix_1() { return &___projectionMatrix_1; }
	inline void set_projectionMatrix_1(UnityARMatrix4x4_t2915059116  value)
	{
		___projectionMatrix_1 = value;
	}

	inline static int32_t get_offset_of_trackingState_2() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t976995971, ___trackingState_2)); }
	inline int32_t get_trackingState_2() const { return ___trackingState_2; }
	inline int32_t* get_address_of_trackingState_2() { return &___trackingState_2; }
	inline void set_trackingState_2(int32_t value)
	{
		___trackingState_2 = value;
	}

	inline static int32_t get_offset_of_trackingReason_3() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t976995971, ___trackingReason_3)); }
	inline int32_t get_trackingReason_3() const { return ___trackingReason_3; }
	inline int32_t* get_address_of_trackingReason_3() { return &___trackingReason_3; }
	inline void set_trackingReason_3(int32_t value)
	{
		___trackingReason_3 = value;
	}

	inline static int32_t get_offset_of_videoParams_4() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t976995971, ___videoParams_4)); }
	inline UnityVideoParams_t1571660336  get_videoParams_4() const { return ___videoParams_4; }
	inline UnityVideoParams_t1571660336 * get_address_of_videoParams_4() { return &___videoParams_4; }
	inline void set_videoParams_4(UnityVideoParams_t1571660336  value)
	{
		___videoParams_4 = value;
	}

	inline static int32_t get_offset_of_lightEstimation_5() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t976995971, ___lightEstimation_5)); }
	inline UnityARLightEstimate_t3847550647  get_lightEstimation_5() const { return ___lightEstimation_5; }
	inline UnityARLightEstimate_t3847550647 * get_address_of_lightEstimation_5() { return &___lightEstimation_5; }
	inline void set_lightEstimation_5(UnityARLightEstimate_t3847550647  value)
	{
		___lightEstimation_5 = value;
	}

	inline static int32_t get_offset_of_displayTransform_6() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t976995971, ___displayTransform_6)); }
	inline UnityARMatrix4x4_t2915059116  get_displayTransform_6() const { return ___displayTransform_6; }
	inline UnityARMatrix4x4_t2915059116 * get_address_of_displayTransform_6() { return &___displayTransform_6; }
	inline void set_displayTransform_6(UnityARMatrix4x4_t2915059116  value)
	{
		___displayTransform_6 = value;
	}

	inline static int32_t get_offset_of_getPointCloudData_7() { return static_cast<int32_t>(offsetof(internal_UnityARCamera_t976995971, ___getPointCloudData_7)); }
	inline uint32_t get_getPointCloudData_7() const { return ___getPointCloudData_7; }
	inline uint32_t* get_address_of_getPointCloudData_7() { return &___getPointCloudData_7; }
	inline void set_getPointCloudData_7(uint32_t value)
	{
		___getPointCloudData_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNAL_UNITYARCAMERA_T976995971_H
#ifndef ARFRAME_T1591668890_H
#define ARFRAME_T1591668890_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARFrame
struct  ARFrame_t1591668890 
{
public:
	// System.Double UnityEngine.XR.iOS.ARFrame::timestamp
	double ___timestamp_0;
	// System.IntPtr UnityEngine.XR.iOS.ARFrame::capturedImage
	intptr_t ___capturedImage_1;
	// UnityEngine.XR.iOS.ARCamera UnityEngine.XR.iOS.ARFrame::camera
	ARCamera_t319942038  ___camera_2;
	// UnityEngine.XR.iOS.ARLightEstimate UnityEngine.XR.iOS.ARFrame::lightEstimate
	ARLightEstimate_t2943102613  ___lightEstimate_3;

public:
	inline static int32_t get_offset_of_timestamp_0() { return static_cast<int32_t>(offsetof(ARFrame_t1591668890, ___timestamp_0)); }
	inline double get_timestamp_0() const { return ___timestamp_0; }
	inline double* get_address_of_timestamp_0() { return &___timestamp_0; }
	inline void set_timestamp_0(double value)
	{
		___timestamp_0 = value;
	}

	inline static int32_t get_offset_of_capturedImage_1() { return static_cast<int32_t>(offsetof(ARFrame_t1591668890, ___capturedImage_1)); }
	inline intptr_t get_capturedImage_1() const { return ___capturedImage_1; }
	inline intptr_t* get_address_of_capturedImage_1() { return &___capturedImage_1; }
	inline void set_capturedImage_1(intptr_t value)
	{
		___capturedImage_1 = value;
	}

	inline static int32_t get_offset_of_camera_2() { return static_cast<int32_t>(offsetof(ARFrame_t1591668890, ___camera_2)); }
	inline ARCamera_t319942038  get_camera_2() const { return ___camera_2; }
	inline ARCamera_t319942038 * get_address_of_camera_2() { return &___camera_2; }
	inline void set_camera_2(ARCamera_t319942038  value)
	{
		___camera_2 = value;
	}

	inline static int32_t get_offset_of_lightEstimate_3() { return static_cast<int32_t>(offsetof(ARFrame_t1591668890, ___lightEstimate_3)); }
	inline ARLightEstimate_t2943102613  get_lightEstimate_3() const { return ___lightEstimate_3; }
	inline ARLightEstimate_t2943102613 * get_address_of_lightEstimate_3() { return &___lightEstimate_3; }
	inline void set_lightEstimate_3(ARLightEstimate_t2943102613  value)
	{
		___lightEstimate_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARFRAME_T1591668890_H
#ifndef ARPLANEANCHORGAMEOBJECT_T1745835446_H
#define ARPLANEANCHORGAMEOBJECT_T1745835446_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARPlaneAnchorGameObject
struct  ARPlaneAnchorGameObject_t1745835446  : public RuntimeObject
{
public:
	// UnityEngine.GameObject UnityEngine.XR.iOS.ARPlaneAnchorGameObject::gameObject
	GameObject_t3273633151 * ___gameObject_0;
	// UnityEngine.XR.iOS.ARPlaneAnchor UnityEngine.XR.iOS.ARPlaneAnchorGameObject::planeAnchor
	ARPlaneAnchor_t2548879378  ___planeAnchor_1;

public:
	inline static int32_t get_offset_of_gameObject_0() { return static_cast<int32_t>(offsetof(ARPlaneAnchorGameObject_t1745835446, ___gameObject_0)); }
	inline GameObject_t3273633151 * get_gameObject_0() const { return ___gameObject_0; }
	inline GameObject_t3273633151 ** get_address_of_gameObject_0() { return &___gameObject_0; }
	inline void set_gameObject_0(GameObject_t3273633151 * value)
	{
		___gameObject_0 = value;
		Il2CppCodeGenWriteBarrier((&___gameObject_0), value);
	}

	inline static int32_t get_offset_of_planeAnchor_1() { return static_cast<int32_t>(offsetof(ARPlaneAnchorGameObject_t1745835446, ___planeAnchor_1)); }
	inline ARPlaneAnchor_t2548879378  get_planeAnchor_1() const { return ___planeAnchor_1; }
	inline ARPlaneAnchor_t2548879378 * get_address_of_planeAnchor_1() { return &___planeAnchor_1; }
	inline void set_planeAnchor_1(ARPlaneAnchor_t2548879378  value)
	{
		___planeAnchor_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARPLANEANCHORGAMEOBJECT_T1745835446_H
#ifndef BEHAVIOUR_T1251972505_H
#define BEHAVIOUR_T1251972505_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1251972505  : public Component_t1872901406
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1251972505_H
#ifndef MONOBEHAVIOUR_T3163849863_H
#define MONOBEHAVIOUR_T3163849863_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3163849863  : public Behaviour_t1251972505
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3163849863_H
#ifndef UNITYREMOTEVIDEO_T2506193137_H
#define UNITYREMOTEVIDEO_T2506193137_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityRemoteVideo
struct  UnityRemoteVideo_t2506193137  : public MonoBehaviour_t3163849863
{
public:
	// UnityEngine.XR.iOS.ConnectToEditor UnityEngine.XR.iOS.UnityRemoteVideo::connectToEditor
	ConnectToEditor_t69540879 * ___connectToEditor_2;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface UnityEngine.XR.iOS.UnityRemoteVideo::m_Session
	UnityARSessionNativeInterface_t3311050297 * ___m_Session_3;
	// System.Boolean UnityEngine.XR.iOS.UnityRemoteVideo::bTexturesInitialized
	bool ___bTexturesInitialized_4;
	// System.Int32 UnityEngine.XR.iOS.UnityRemoteVideo::currentFrameIndex
	int32_t ___currentFrameIndex_5;
	// System.Byte[] UnityEngine.XR.iOS.UnityRemoteVideo::m_textureYBytes
	ByteU5BU5D_t3249567452* ___m_textureYBytes_6;
	// System.Byte[] UnityEngine.XR.iOS.UnityRemoteVideo::m_textureUVBytes
	ByteU5BU5D_t3249567452* ___m_textureUVBytes_7;
	// System.Byte[] UnityEngine.XR.iOS.UnityRemoteVideo::m_textureYBytes2
	ByteU5BU5D_t3249567452* ___m_textureYBytes2_8;
	// System.Byte[] UnityEngine.XR.iOS.UnityRemoteVideo::m_textureUVBytes2
	ByteU5BU5D_t3249567452* ___m_textureUVBytes2_9;
	// System.Runtime.InteropServices.GCHandle UnityEngine.XR.iOS.UnityRemoteVideo::m_pinnedYArray
	GCHandle_t1853879479  ___m_pinnedYArray_10;
	// System.Runtime.InteropServices.GCHandle UnityEngine.XR.iOS.UnityRemoteVideo::m_pinnedUVArray
	GCHandle_t1853879479  ___m_pinnedUVArray_11;

public:
	inline static int32_t get_offset_of_connectToEditor_2() { return static_cast<int32_t>(offsetof(UnityRemoteVideo_t2506193137, ___connectToEditor_2)); }
	inline ConnectToEditor_t69540879 * get_connectToEditor_2() const { return ___connectToEditor_2; }
	inline ConnectToEditor_t69540879 ** get_address_of_connectToEditor_2() { return &___connectToEditor_2; }
	inline void set_connectToEditor_2(ConnectToEditor_t69540879 * value)
	{
		___connectToEditor_2 = value;
		Il2CppCodeGenWriteBarrier((&___connectToEditor_2), value);
	}

	inline static int32_t get_offset_of_m_Session_3() { return static_cast<int32_t>(offsetof(UnityRemoteVideo_t2506193137, ___m_Session_3)); }
	inline UnityARSessionNativeInterface_t3311050297 * get_m_Session_3() const { return ___m_Session_3; }
	inline UnityARSessionNativeInterface_t3311050297 ** get_address_of_m_Session_3() { return &___m_Session_3; }
	inline void set_m_Session_3(UnityARSessionNativeInterface_t3311050297 * value)
	{
		___m_Session_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Session_3), value);
	}

	inline static int32_t get_offset_of_bTexturesInitialized_4() { return static_cast<int32_t>(offsetof(UnityRemoteVideo_t2506193137, ___bTexturesInitialized_4)); }
	inline bool get_bTexturesInitialized_4() const { return ___bTexturesInitialized_4; }
	inline bool* get_address_of_bTexturesInitialized_4() { return &___bTexturesInitialized_4; }
	inline void set_bTexturesInitialized_4(bool value)
	{
		___bTexturesInitialized_4 = value;
	}

	inline static int32_t get_offset_of_currentFrameIndex_5() { return static_cast<int32_t>(offsetof(UnityRemoteVideo_t2506193137, ___currentFrameIndex_5)); }
	inline int32_t get_currentFrameIndex_5() const { return ___currentFrameIndex_5; }
	inline int32_t* get_address_of_currentFrameIndex_5() { return &___currentFrameIndex_5; }
	inline void set_currentFrameIndex_5(int32_t value)
	{
		___currentFrameIndex_5 = value;
	}

	inline static int32_t get_offset_of_m_textureYBytes_6() { return static_cast<int32_t>(offsetof(UnityRemoteVideo_t2506193137, ___m_textureYBytes_6)); }
	inline ByteU5BU5D_t3249567452* get_m_textureYBytes_6() const { return ___m_textureYBytes_6; }
	inline ByteU5BU5D_t3249567452** get_address_of_m_textureYBytes_6() { return &___m_textureYBytes_6; }
	inline void set_m_textureYBytes_6(ByteU5BU5D_t3249567452* value)
	{
		___m_textureYBytes_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_textureYBytes_6), value);
	}

	inline static int32_t get_offset_of_m_textureUVBytes_7() { return static_cast<int32_t>(offsetof(UnityRemoteVideo_t2506193137, ___m_textureUVBytes_7)); }
	inline ByteU5BU5D_t3249567452* get_m_textureUVBytes_7() const { return ___m_textureUVBytes_7; }
	inline ByteU5BU5D_t3249567452** get_address_of_m_textureUVBytes_7() { return &___m_textureUVBytes_7; }
	inline void set_m_textureUVBytes_7(ByteU5BU5D_t3249567452* value)
	{
		___m_textureUVBytes_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_textureUVBytes_7), value);
	}

	inline static int32_t get_offset_of_m_textureYBytes2_8() { return static_cast<int32_t>(offsetof(UnityRemoteVideo_t2506193137, ___m_textureYBytes2_8)); }
	inline ByteU5BU5D_t3249567452* get_m_textureYBytes2_8() const { return ___m_textureYBytes2_8; }
	inline ByteU5BU5D_t3249567452** get_address_of_m_textureYBytes2_8() { return &___m_textureYBytes2_8; }
	inline void set_m_textureYBytes2_8(ByteU5BU5D_t3249567452* value)
	{
		___m_textureYBytes2_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_textureYBytes2_8), value);
	}

	inline static int32_t get_offset_of_m_textureUVBytes2_9() { return static_cast<int32_t>(offsetof(UnityRemoteVideo_t2506193137, ___m_textureUVBytes2_9)); }
	inline ByteU5BU5D_t3249567452* get_m_textureUVBytes2_9() const { return ___m_textureUVBytes2_9; }
	inline ByteU5BU5D_t3249567452** get_address_of_m_textureUVBytes2_9() { return &___m_textureUVBytes2_9; }
	inline void set_m_textureUVBytes2_9(ByteU5BU5D_t3249567452* value)
	{
		___m_textureUVBytes2_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_textureUVBytes2_9), value);
	}

	inline static int32_t get_offset_of_m_pinnedYArray_10() { return static_cast<int32_t>(offsetof(UnityRemoteVideo_t2506193137, ___m_pinnedYArray_10)); }
	inline GCHandle_t1853879479  get_m_pinnedYArray_10() const { return ___m_pinnedYArray_10; }
	inline GCHandle_t1853879479 * get_address_of_m_pinnedYArray_10() { return &___m_pinnedYArray_10; }
	inline void set_m_pinnedYArray_10(GCHandle_t1853879479  value)
	{
		___m_pinnedYArray_10 = value;
	}

	inline static int32_t get_offset_of_m_pinnedUVArray_11() { return static_cast<int32_t>(offsetof(UnityRemoteVideo_t2506193137, ___m_pinnedUVArray_11)); }
	inline GCHandle_t1853879479  get_m_pinnedUVArray_11() const { return ___m_pinnedUVArray_11; }
	inline GCHandle_t1853879479 * get_address_of_m_pinnedUVArray_11() { return &___m_pinnedUVArray_11; }
	inline void set_m_pinnedUVArray_11(GCHandle_t1853879479  value)
	{
		___m_pinnedUVArray_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYREMOTEVIDEO_T2506193137_H
#ifndef TELEMETRYCONFIGURATIONBUTTON_T1079436334_H
#define TELEMETRYCONFIGURATIONBUTTON_T1079436334_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mapbox.Unity.Utilities.TelemetryConfigurationButton
struct  TelemetryConfigurationButton_t1079436334  : public MonoBehaviour_t3163849863
{
public:
	// System.Boolean Mapbox.Unity.Utilities.TelemetryConfigurationButton::_booleanValue
	bool ____booleanValue_2;

public:
	inline static int32_t get_offset_of__booleanValue_2() { return static_cast<int32_t>(offsetof(TelemetryConfigurationButton_t1079436334, ____booleanValue_2)); }
	inline bool get__booleanValue_2() const { return ____booleanValue_2; }
	inline bool* get_address_of__booleanValue_2() { return &____booleanValue_2; }
	inline void set__booleanValue_2(bool value)
	{
		____booleanValue_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TELEMETRYCONFIGURATIONBUTTON_T1079436334_H
#ifndef UNITYARUSERANCHOREXAMPLE_T2891178548_H
#define UNITYARUSERANCHOREXAMPLE_T2891178548_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityARUserAnchorExample
struct  UnityARUserAnchorExample_t2891178548  : public MonoBehaviour_t3163849863
{
public:
	// UnityEngine.GameObject UnityARUserAnchorExample::prefabObject
	GameObject_t3273633151 * ___prefabObject_2;
	// System.Int32 UnityARUserAnchorExample::distanceFromCamera
	int32_t ___distanceFromCamera_3;
	// System.Collections.Generic.HashSet`1<System.String> UnityARUserAnchorExample::m_Clones
	HashSet_1_t3593709007 * ___m_Clones_4;
	// System.Single UnityARUserAnchorExample::m_TimeUntilRemove
	float ___m_TimeUntilRemove_5;

public:
	inline static int32_t get_offset_of_prefabObject_2() { return static_cast<int32_t>(offsetof(UnityARUserAnchorExample_t2891178548, ___prefabObject_2)); }
	inline GameObject_t3273633151 * get_prefabObject_2() const { return ___prefabObject_2; }
	inline GameObject_t3273633151 ** get_address_of_prefabObject_2() { return &___prefabObject_2; }
	inline void set_prefabObject_2(GameObject_t3273633151 * value)
	{
		___prefabObject_2 = value;
		Il2CppCodeGenWriteBarrier((&___prefabObject_2), value);
	}

	inline static int32_t get_offset_of_distanceFromCamera_3() { return static_cast<int32_t>(offsetof(UnityARUserAnchorExample_t2891178548, ___distanceFromCamera_3)); }
	inline int32_t get_distanceFromCamera_3() const { return ___distanceFromCamera_3; }
	inline int32_t* get_address_of_distanceFromCamera_3() { return &___distanceFromCamera_3; }
	inline void set_distanceFromCamera_3(int32_t value)
	{
		___distanceFromCamera_3 = value;
	}

	inline static int32_t get_offset_of_m_Clones_4() { return static_cast<int32_t>(offsetof(UnityARUserAnchorExample_t2891178548, ___m_Clones_4)); }
	inline HashSet_1_t3593709007 * get_m_Clones_4() const { return ___m_Clones_4; }
	inline HashSet_1_t3593709007 ** get_address_of_m_Clones_4() { return &___m_Clones_4; }
	inline void set_m_Clones_4(HashSet_1_t3593709007 * value)
	{
		___m_Clones_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Clones_4), value);
	}

	inline static int32_t get_offset_of_m_TimeUntilRemove_5() { return static_cast<int32_t>(offsetof(UnityARUserAnchorExample_t2891178548, ___m_TimeUntilRemove_5)); }
	inline float get_m_TimeUntilRemove_5() const { return ___m_TimeUntilRemove_5; }
	inline float* get_address_of_m_TimeUntilRemove_5() { return &___m_TimeUntilRemove_5; }
	inline void set_m_TimeUntilRemove_5(float value)
	{
		___m_TimeUntilRemove_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARUSERANCHOREXAMPLE_T2891178548_H
#ifndef UIBEHAVIOUR_T1406558149_H
#define UIBEHAVIOUR_T1406558149_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t1406558149  : public MonoBehaviour_t3163849863
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIBEHAVIOUR_T1406558149_H
#ifndef EDITORHITTEST_T964567650_H
#define EDITORHITTEST_T964567650_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.EditorHitTest
struct  EditorHitTest_t964567650  : public MonoBehaviour_t3163849863
{
public:
	// UnityEngine.Transform UnityEngine.XR.iOS.EditorHitTest::m_HitTransform
	Transform_t3122675411 * ___m_HitTransform_2;
	// System.Single UnityEngine.XR.iOS.EditorHitTest::maxRayDistance
	float ___maxRayDistance_3;
	// UnityEngine.LayerMask UnityEngine.XR.iOS.EditorHitTest::collisionLayerMask
	LayerMask_t2729128688  ___collisionLayerMask_4;

public:
	inline static int32_t get_offset_of_m_HitTransform_2() { return static_cast<int32_t>(offsetof(EditorHitTest_t964567650, ___m_HitTransform_2)); }
	inline Transform_t3122675411 * get_m_HitTransform_2() const { return ___m_HitTransform_2; }
	inline Transform_t3122675411 ** get_address_of_m_HitTransform_2() { return &___m_HitTransform_2; }
	inline void set_m_HitTransform_2(Transform_t3122675411 * value)
	{
		___m_HitTransform_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_HitTransform_2), value);
	}

	inline static int32_t get_offset_of_maxRayDistance_3() { return static_cast<int32_t>(offsetof(EditorHitTest_t964567650, ___maxRayDistance_3)); }
	inline float get_maxRayDistance_3() const { return ___maxRayDistance_3; }
	inline float* get_address_of_maxRayDistance_3() { return &___maxRayDistance_3; }
	inline void set_maxRayDistance_3(float value)
	{
		___maxRayDistance_3 = value;
	}

	inline static int32_t get_offset_of_collisionLayerMask_4() { return static_cast<int32_t>(offsetof(EditorHitTest_t964567650, ___collisionLayerMask_4)); }
	inline LayerMask_t2729128688  get_collisionLayerMask_4() const { return ___collisionLayerMask_4; }
	inline LayerMask_t2729128688 * get_address_of_collisionLayerMask_4() { return &___collisionLayerMask_4; }
	inline void set_collisionLayerMask_4(LayerMask_t2729128688  value)
	{
		___collisionLayerMask_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EDITORHITTEST_T964567650_H
#ifndef CONNECTTOEDITOR_T69540879_H
#define CONNECTTOEDITOR_T69540879_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ConnectToEditor
struct  ConnectToEditor_t69540879  : public MonoBehaviour_t3163849863
{
public:
	// UnityEngine.Networking.PlayerConnection.PlayerConnection UnityEngine.XR.iOS.ConnectToEditor::playerConnection
	PlayerConnection_t560460881 * ___playerConnection_2;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface UnityEngine.XR.iOS.ConnectToEditor::m_session
	UnityARSessionNativeInterface_t3311050297 * ___m_session_3;
	// System.Int32 UnityEngine.XR.iOS.ConnectToEditor::editorID
	int32_t ___editorID_4;
	// UnityEngine.Texture2D UnityEngine.XR.iOS.ConnectToEditor::frameBufferTex
	Texture2D_t3715641063 * ___frameBufferTex_5;

public:
	inline static int32_t get_offset_of_playerConnection_2() { return static_cast<int32_t>(offsetof(ConnectToEditor_t69540879, ___playerConnection_2)); }
	inline PlayerConnection_t560460881 * get_playerConnection_2() const { return ___playerConnection_2; }
	inline PlayerConnection_t560460881 ** get_address_of_playerConnection_2() { return &___playerConnection_2; }
	inline void set_playerConnection_2(PlayerConnection_t560460881 * value)
	{
		___playerConnection_2 = value;
		Il2CppCodeGenWriteBarrier((&___playerConnection_2), value);
	}

	inline static int32_t get_offset_of_m_session_3() { return static_cast<int32_t>(offsetof(ConnectToEditor_t69540879, ___m_session_3)); }
	inline UnityARSessionNativeInterface_t3311050297 * get_m_session_3() const { return ___m_session_3; }
	inline UnityARSessionNativeInterface_t3311050297 ** get_address_of_m_session_3() { return &___m_session_3; }
	inline void set_m_session_3(UnityARSessionNativeInterface_t3311050297 * value)
	{
		___m_session_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_session_3), value);
	}

	inline static int32_t get_offset_of_editorID_4() { return static_cast<int32_t>(offsetof(ConnectToEditor_t69540879, ___editorID_4)); }
	inline int32_t get_editorID_4() const { return ___editorID_4; }
	inline int32_t* get_address_of_editorID_4() { return &___editorID_4; }
	inline void set_editorID_4(int32_t value)
	{
		___editorID_4 = value;
	}

	inline static int32_t get_offset_of_frameBufferTex_5() { return static_cast<int32_t>(offsetof(ConnectToEditor_t69540879, ___frameBufferTex_5)); }
	inline Texture2D_t3715641063 * get_frameBufferTex_5() const { return ___frameBufferTex_5; }
	inline Texture2D_t3715641063 ** get_address_of_frameBufferTex_5() { return &___frameBufferTex_5; }
	inline void set_frameBufferTex_5(Texture2D_t3715641063 * value)
	{
		___frameBufferTex_5 = value;
		Il2CppCodeGenWriteBarrier((&___frameBufferTex_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONNECTTOEDITOR_T69540879_H
#ifndef START_T2371784414_H
#define START_T2371784414_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// start
struct  start_t2371784414  : public MonoBehaviour_t3163849863
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // START_T2371784414_H
#ifndef FOCUSSQUARE_T2725258115_H
#define FOCUSSQUARE_T2725258115_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FocusSquare
struct  FocusSquare_t2725258115  : public MonoBehaviour_t3163849863
{
public:
	// UnityEngine.GameObject FocusSquare::findingSquare
	GameObject_t3273633151 * ___findingSquare_2;
	// UnityEngine.GameObject FocusSquare::foundSquare
	GameObject_t3273633151 * ___foundSquare_3;
	// System.Single FocusSquare::maxRayDistance
	float ___maxRayDistance_4;
	// UnityEngine.LayerMask FocusSquare::collisionLayerMask
	LayerMask_t2729128688  ___collisionLayerMask_5;
	// System.Single FocusSquare::findingSquareDist
	float ___findingSquareDist_6;
	// FocusSquare/FocusState FocusSquare::squareState
	int32_t ___squareState_7;
	// System.Boolean FocusSquare::trackingInitialized
	bool ___trackingInitialized_8;

public:
	inline static int32_t get_offset_of_findingSquare_2() { return static_cast<int32_t>(offsetof(FocusSquare_t2725258115, ___findingSquare_2)); }
	inline GameObject_t3273633151 * get_findingSquare_2() const { return ___findingSquare_2; }
	inline GameObject_t3273633151 ** get_address_of_findingSquare_2() { return &___findingSquare_2; }
	inline void set_findingSquare_2(GameObject_t3273633151 * value)
	{
		___findingSquare_2 = value;
		Il2CppCodeGenWriteBarrier((&___findingSquare_2), value);
	}

	inline static int32_t get_offset_of_foundSquare_3() { return static_cast<int32_t>(offsetof(FocusSquare_t2725258115, ___foundSquare_3)); }
	inline GameObject_t3273633151 * get_foundSquare_3() const { return ___foundSquare_3; }
	inline GameObject_t3273633151 ** get_address_of_foundSquare_3() { return &___foundSquare_3; }
	inline void set_foundSquare_3(GameObject_t3273633151 * value)
	{
		___foundSquare_3 = value;
		Il2CppCodeGenWriteBarrier((&___foundSquare_3), value);
	}

	inline static int32_t get_offset_of_maxRayDistance_4() { return static_cast<int32_t>(offsetof(FocusSquare_t2725258115, ___maxRayDistance_4)); }
	inline float get_maxRayDistance_4() const { return ___maxRayDistance_4; }
	inline float* get_address_of_maxRayDistance_4() { return &___maxRayDistance_4; }
	inline void set_maxRayDistance_4(float value)
	{
		___maxRayDistance_4 = value;
	}

	inline static int32_t get_offset_of_collisionLayerMask_5() { return static_cast<int32_t>(offsetof(FocusSquare_t2725258115, ___collisionLayerMask_5)); }
	inline LayerMask_t2729128688  get_collisionLayerMask_5() const { return ___collisionLayerMask_5; }
	inline LayerMask_t2729128688 * get_address_of_collisionLayerMask_5() { return &___collisionLayerMask_5; }
	inline void set_collisionLayerMask_5(LayerMask_t2729128688  value)
	{
		___collisionLayerMask_5 = value;
	}

	inline static int32_t get_offset_of_findingSquareDist_6() { return static_cast<int32_t>(offsetof(FocusSquare_t2725258115, ___findingSquareDist_6)); }
	inline float get_findingSquareDist_6() const { return ___findingSquareDist_6; }
	inline float* get_address_of_findingSquareDist_6() { return &___findingSquareDist_6; }
	inline void set_findingSquareDist_6(float value)
	{
		___findingSquareDist_6 = value;
	}

	inline static int32_t get_offset_of_squareState_7() { return static_cast<int32_t>(offsetof(FocusSquare_t2725258115, ___squareState_7)); }
	inline int32_t get_squareState_7() const { return ___squareState_7; }
	inline int32_t* get_address_of_squareState_7() { return &___squareState_7; }
	inline void set_squareState_7(int32_t value)
	{
		___squareState_7 = value;
	}

	inline static int32_t get_offset_of_trackingInitialized_8() { return static_cast<int32_t>(offsetof(FocusSquare_t2725258115, ___trackingInitialized_8)); }
	inline bool get_trackingInitialized_8() const { return ___trackingInitialized_8; }
	inline bool* get_address_of_trackingInitialized_8() { return &___trackingInitialized_8; }
	inline void set_trackingInitialized_8(bool value)
	{
		___trackingInitialized_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FOCUSSQUARE_T2725258115_H
#ifndef INSTANTIATESPHERE_T2757810919_H
#define INSTANTIATESPHERE_T2757810919_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// instantiateSphere
struct  instantiateSphere_t2757810919  : public MonoBehaviour_t3163849863
{
public:
	// UnityEngine.GameObject instantiateSphere::holder
	GameObject_t3273633151 * ___holder_2;
	// UnityEngine.GameObject instantiateSphere::sphere
	GameObject_t3273633151 * ___sphere_3;
	// System.Int32 instantiateSphere::ballCount
	int32_t ___ballCount_4;

public:
	inline static int32_t get_offset_of_holder_2() { return static_cast<int32_t>(offsetof(instantiateSphere_t2757810919, ___holder_2)); }
	inline GameObject_t3273633151 * get_holder_2() const { return ___holder_2; }
	inline GameObject_t3273633151 ** get_address_of_holder_2() { return &___holder_2; }
	inline void set_holder_2(GameObject_t3273633151 * value)
	{
		___holder_2 = value;
		Il2CppCodeGenWriteBarrier((&___holder_2), value);
	}

	inline static int32_t get_offset_of_sphere_3() { return static_cast<int32_t>(offsetof(instantiateSphere_t2757810919, ___sphere_3)); }
	inline GameObject_t3273633151 * get_sphere_3() const { return ___sphere_3; }
	inline GameObject_t3273633151 ** get_address_of_sphere_3() { return &___sphere_3; }
	inline void set_sphere_3(GameObject_t3273633151 * value)
	{
		___sphere_3 = value;
		Il2CppCodeGenWriteBarrier((&___sphere_3), value);
	}

	inline static int32_t get_offset_of_ballCount_4() { return static_cast<int32_t>(offsetof(instantiateSphere_t2757810919, ___ballCount_4)); }
	inline int32_t get_ballCount_4() const { return ___ballCount_4; }
	inline int32_t* get_address_of_ballCount_4() { return &___ballCount_4; }
	inline void set_ballCount_4(int32_t value)
	{
		___ballCount_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INSTANTIATESPHERE_T2757810919_H
#ifndef FALLCONTROLLER_T1901154495_H
#define FALLCONTROLLER_T1901154495_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// fallController
struct  fallController_t1901154495  : public MonoBehaviour_t3163849863
{
public:
	// UnityEngine.GameObject fallController::ballGroup
	GameObject_t3273633151 * ___ballGroup_2;

public:
	inline static int32_t get_offset_of_ballGroup_2() { return static_cast<int32_t>(offsetof(fallController_t1901154495, ___ballGroup_2)); }
	inline GameObject_t3273633151 * get_ballGroup_2() const { return ___ballGroup_2; }
	inline GameObject_t3273633151 ** get_address_of_ballGroup_2() { return &___ballGroup_2; }
	inline void set_ballGroup_2(GameObject_t3273633151 * value)
	{
		___ballGroup_2 = value;
		Il2CppCodeGenWriteBarrier((&___ballGroup_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FALLCONTROLLER_T1901154495_H
#ifndef BALLDROP_T3551493802_H
#define BALLDROP_T3551493802_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ballDrop
struct  ballDrop_t3551493802  : public MonoBehaviour_t3163849863
{
public:
	// UnityEngine.GameObject ballDrop::sphereContainer
	GameObject_t3273633151 * ___sphereContainer_2;

public:
	inline static int32_t get_offset_of_sphereContainer_2() { return static_cast<int32_t>(offsetof(ballDrop_t3551493802, ___sphereContainer_2)); }
	inline GameObject_t3273633151 * get_sphereContainer_2() const { return ___sphereContainer_2; }
	inline GameObject_t3273633151 ** get_address_of_sphereContainer_2() { return &___sphereContainer_2; }
	inline void set_sphereContainer_2(GameObject_t3273633151 * value)
	{
		___sphereContainer_2 = value;
		Il2CppCodeGenWriteBarrier((&___sphereContainer_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BALLDROP_T3551493802_H
#ifndef BLANKSCRIPT_T4076370325_H
#define BLANKSCRIPT_T4076370325_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BlankScript
struct  BlankScript_t4076370325  : public MonoBehaviour_t3163849863
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BLANKSCRIPT_T4076370325_H
#ifndef CREATEBALLS_T200848997_H
#define CREATEBALLS_T200848997_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// createBalls
struct  createBalls_t200848997  : public MonoBehaviour_t3163849863
{
public:
	// UnityEngine.Transform createBalls::prefab
	Transform_t3122675411 * ___prefab_2;

public:
	inline static int32_t get_offset_of_prefab_2() { return static_cast<int32_t>(offsetof(createBalls_t200848997, ___prefab_2)); }
	inline Transform_t3122675411 * get_prefab_2() const { return ___prefab_2; }
	inline Transform_t3122675411 ** get_address_of_prefab_2() { return &___prefab_2; }
	inline void set_prefab_2(Transform_t3122675411 * value)
	{
		___prefab_2 = value;
		Il2CppCodeGenWriteBarrier((&___prefab_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CREATEBALLS_T200848997_H
#ifndef COLLIDEFREEZE_T681280802_H
#define COLLIDEFREEZE_T681280802_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// collideFreeze
struct  collideFreeze_t681280802  : public MonoBehaviour_t3163849863
{
public:
	// UnityEngine.Rigidbody collideFreeze::rb
	Rigidbody_t4099236864 * ___rb_2;

public:
	inline static int32_t get_offset_of_rb_2() { return static_cast<int32_t>(offsetof(collideFreeze_t681280802, ___rb_2)); }
	inline Rigidbody_t4099236864 * get_rb_2() const { return ___rb_2; }
	inline Rigidbody_t4099236864 ** get_address_of_rb_2() { return &___rb_2; }
	inline void set_rb_2(Rigidbody_t4099236864 * value)
	{
		___rb_2 = value;
		Il2CppCodeGenWriteBarrier((&___rb_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLIDEFREEZE_T681280802_H
#ifndef RAYHIT_T4281101146_H
#define RAYHIT_T4281101146_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RayHit
struct  RayHit_t4281101146  : public MonoBehaviour_t3163849863
{
public:
	// UnityEngine.Vector3 RayHit::fixedPos
	Vector3_t3995960300  ___fixedPos_4;
	// UnityEngine.Vector3 RayHit::moleculePosition
	Vector3_t3995960300  ___moleculePosition_5;

public:
	inline static int32_t get_offset_of_fixedPos_4() { return static_cast<int32_t>(offsetof(RayHit_t4281101146, ___fixedPos_4)); }
	inline Vector3_t3995960300  get_fixedPos_4() const { return ___fixedPos_4; }
	inline Vector3_t3995960300 * get_address_of_fixedPos_4() { return &___fixedPos_4; }
	inline void set_fixedPos_4(Vector3_t3995960300  value)
	{
		___fixedPos_4 = value;
	}

	inline static int32_t get_offset_of_moleculePosition_5() { return static_cast<int32_t>(offsetof(RayHit_t4281101146, ___moleculePosition_5)); }
	inline Vector3_t3995960300  get_moleculePosition_5() const { return ___moleculePosition_5; }
	inline Vector3_t3995960300 * get_address_of_moleculePosition_5() { return &___moleculePosition_5; }
	inline void set_moleculePosition_5(Vector3_t3995960300  value)
	{
		___moleculePosition_5 = value;
	}
};

struct RayHit_t4281101146_StaticFields
{
public:
	// UnityEngine.GameObject RayHit::moleculeSelect
	GameObject_t3273633151 * ___moleculeSelect_2;
	// UnityEngine.GameObject RayHit::moleculeSelect1
	GameObject_t3273633151 * ___moleculeSelect1_3;

public:
	inline static int32_t get_offset_of_moleculeSelect_2() { return static_cast<int32_t>(offsetof(RayHit_t4281101146_StaticFields, ___moleculeSelect_2)); }
	inline GameObject_t3273633151 * get_moleculeSelect_2() const { return ___moleculeSelect_2; }
	inline GameObject_t3273633151 ** get_address_of_moleculeSelect_2() { return &___moleculeSelect_2; }
	inline void set_moleculeSelect_2(GameObject_t3273633151 * value)
	{
		___moleculeSelect_2 = value;
		Il2CppCodeGenWriteBarrier((&___moleculeSelect_2), value);
	}

	inline static int32_t get_offset_of_moleculeSelect1_3() { return static_cast<int32_t>(offsetof(RayHit_t4281101146_StaticFields, ___moleculeSelect1_3)); }
	inline GameObject_t3273633151 * get_moleculeSelect1_3() const { return ___moleculeSelect1_3; }
	inline GameObject_t3273633151 ** get_address_of_moleculeSelect1_3() { return &___moleculeSelect1_3; }
	inline void set_moleculeSelect1_3(GameObject_t3273633151 * value)
	{
		___moleculeSelect1_3 = value;
		Il2CppCodeGenWriteBarrier((&___moleculeSelect1_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAYHIT_T4281101146_H
#ifndef MOVESCENE_T3717187654_H
#define MOVESCENE_T3717187654_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoveScene
struct  MoveScene_t3717187654  : public MonoBehaviour_t3163849863
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MOVESCENE_T3717187654_H
#ifndef UNITYARCAMERAMANAGER_T3837343653_H
#define UNITYARCAMERAMANAGER_T3837343653_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityARCameraManager
struct  UnityARCameraManager_t3837343653  : public MonoBehaviour_t3163849863
{
public:
	// UnityEngine.Camera UnityARCameraManager::m_camera
	Camera_t3483225491 * ___m_camera_2;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface UnityARCameraManager::m_session
	UnityARSessionNativeInterface_t3311050297 * ___m_session_3;
	// UnityEngine.Material UnityARCameraManager::savedClearMaterial
	Material_t3327927266 * ___savedClearMaterial_4;
	// UnityEngine.XR.iOS.UnityARAlignment UnityARCameraManager::startAlignment
	int32_t ___startAlignment_5;
	// UnityEngine.XR.iOS.UnityARPlaneDetection UnityARCameraManager::planeDetection
	int32_t ___planeDetection_6;
	// System.Boolean UnityARCameraManager::getPointCloud
	bool ___getPointCloud_7;
	// System.Boolean UnityARCameraManager::enableLightEstimation
	bool ___enableLightEstimation_8;

public:
	inline static int32_t get_offset_of_m_camera_2() { return static_cast<int32_t>(offsetof(UnityARCameraManager_t3837343653, ___m_camera_2)); }
	inline Camera_t3483225491 * get_m_camera_2() const { return ___m_camera_2; }
	inline Camera_t3483225491 ** get_address_of_m_camera_2() { return &___m_camera_2; }
	inline void set_m_camera_2(Camera_t3483225491 * value)
	{
		___m_camera_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_camera_2), value);
	}

	inline static int32_t get_offset_of_m_session_3() { return static_cast<int32_t>(offsetof(UnityARCameraManager_t3837343653, ___m_session_3)); }
	inline UnityARSessionNativeInterface_t3311050297 * get_m_session_3() const { return ___m_session_3; }
	inline UnityARSessionNativeInterface_t3311050297 ** get_address_of_m_session_3() { return &___m_session_3; }
	inline void set_m_session_3(UnityARSessionNativeInterface_t3311050297 * value)
	{
		___m_session_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_session_3), value);
	}

	inline static int32_t get_offset_of_savedClearMaterial_4() { return static_cast<int32_t>(offsetof(UnityARCameraManager_t3837343653, ___savedClearMaterial_4)); }
	inline Material_t3327927266 * get_savedClearMaterial_4() const { return ___savedClearMaterial_4; }
	inline Material_t3327927266 ** get_address_of_savedClearMaterial_4() { return &___savedClearMaterial_4; }
	inline void set_savedClearMaterial_4(Material_t3327927266 * value)
	{
		___savedClearMaterial_4 = value;
		Il2CppCodeGenWriteBarrier((&___savedClearMaterial_4), value);
	}

	inline static int32_t get_offset_of_startAlignment_5() { return static_cast<int32_t>(offsetof(UnityARCameraManager_t3837343653, ___startAlignment_5)); }
	inline int32_t get_startAlignment_5() const { return ___startAlignment_5; }
	inline int32_t* get_address_of_startAlignment_5() { return &___startAlignment_5; }
	inline void set_startAlignment_5(int32_t value)
	{
		___startAlignment_5 = value;
	}

	inline static int32_t get_offset_of_planeDetection_6() { return static_cast<int32_t>(offsetof(UnityARCameraManager_t3837343653, ___planeDetection_6)); }
	inline int32_t get_planeDetection_6() const { return ___planeDetection_6; }
	inline int32_t* get_address_of_planeDetection_6() { return &___planeDetection_6; }
	inline void set_planeDetection_6(int32_t value)
	{
		___planeDetection_6 = value;
	}

	inline static int32_t get_offset_of_getPointCloud_7() { return static_cast<int32_t>(offsetof(UnityARCameraManager_t3837343653, ___getPointCloud_7)); }
	inline bool get_getPointCloud_7() const { return ___getPointCloud_7; }
	inline bool* get_address_of_getPointCloud_7() { return &___getPointCloud_7; }
	inline void set_getPointCloud_7(bool value)
	{
		___getPointCloud_7 = value;
	}

	inline static int32_t get_offset_of_enableLightEstimation_8() { return static_cast<int32_t>(offsetof(UnityARCameraManager_t3837343653, ___enableLightEstimation_8)); }
	inline bool get_enableLightEstimation_8() const { return ___enableLightEstimation_8; }
	inline bool* get_address_of_enableLightEstimation_8() { return &___enableLightEstimation_8; }
	inline void set_enableLightEstimation_8(bool value)
	{
		___enableLightEstimation_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARCAMERAMANAGER_T3837343653_H
#ifndef BALLMOVER_T1855835360_H
#define BALLMOVER_T1855835360_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BallMover
struct  BallMover_t1855835360  : public MonoBehaviour_t3163849863
{
public:
	// UnityEngine.GameObject BallMover::collBallPrefab
	GameObject_t3273633151 * ___collBallPrefab_2;
	// UnityEngine.GameObject BallMover::collBallGO
	GameObject_t3273633151 * ___collBallGO_3;

public:
	inline static int32_t get_offset_of_collBallPrefab_2() { return static_cast<int32_t>(offsetof(BallMover_t1855835360, ___collBallPrefab_2)); }
	inline GameObject_t3273633151 * get_collBallPrefab_2() const { return ___collBallPrefab_2; }
	inline GameObject_t3273633151 ** get_address_of_collBallPrefab_2() { return &___collBallPrefab_2; }
	inline void set_collBallPrefab_2(GameObject_t3273633151 * value)
	{
		___collBallPrefab_2 = value;
		Il2CppCodeGenWriteBarrier((&___collBallPrefab_2), value);
	}

	inline static int32_t get_offset_of_collBallGO_3() { return static_cast<int32_t>(offsetof(BallMover_t1855835360, ___collBallGO_3)); }
	inline GameObject_t3273633151 * get_collBallGO_3() const { return ___collBallGO_3; }
	inline GameObject_t3273633151 ** get_address_of_collBallGO_3() { return &___collBallGO_3; }
	inline void set_collBallGO_3(GameObject_t3273633151 * value)
	{
		___collBallGO_3 = value;
		Il2CppCodeGenWriteBarrier((&___collBallGO_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BALLMOVER_T1855835360_H
#ifndef UNITYARCAMERANEARFAR_T845029210_H
#define UNITYARCAMERANEARFAR_T845029210_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityARCameraNearFar
struct  UnityARCameraNearFar_t845029210  : public MonoBehaviour_t3163849863
{
public:
	// UnityEngine.Camera UnityARCameraNearFar::attachedCamera
	Camera_t3483225491 * ___attachedCamera_2;
	// System.Single UnityARCameraNearFar::currentNearZ
	float ___currentNearZ_3;
	// System.Single UnityARCameraNearFar::currentFarZ
	float ___currentFarZ_4;

public:
	inline static int32_t get_offset_of_attachedCamera_2() { return static_cast<int32_t>(offsetof(UnityARCameraNearFar_t845029210, ___attachedCamera_2)); }
	inline Camera_t3483225491 * get_attachedCamera_2() const { return ___attachedCamera_2; }
	inline Camera_t3483225491 ** get_address_of_attachedCamera_2() { return &___attachedCamera_2; }
	inline void set_attachedCamera_2(Camera_t3483225491 * value)
	{
		___attachedCamera_2 = value;
		Il2CppCodeGenWriteBarrier((&___attachedCamera_2), value);
	}

	inline static int32_t get_offset_of_currentNearZ_3() { return static_cast<int32_t>(offsetof(UnityARCameraNearFar_t845029210, ___currentNearZ_3)); }
	inline float get_currentNearZ_3() const { return ___currentNearZ_3; }
	inline float* get_address_of_currentNearZ_3() { return &___currentNearZ_3; }
	inline void set_currentNearZ_3(float value)
	{
		___currentNearZ_3 = value;
	}

	inline static int32_t get_offset_of_currentFarZ_4() { return static_cast<int32_t>(offsetof(UnityARCameraNearFar_t845029210, ___currentFarZ_4)); }
	inline float get_currentFarZ_4() const { return ___currentFarZ_4; }
	inline float* get_address_of_currentFarZ_4() { return &___currentFarZ_4; }
	inline void set_currentFarZ_4(float value)
	{
		___currentFarZ_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARCAMERANEARFAR_T845029210_H
#ifndef UNITYARGENERATEPLANE_T938858356_H
#define UNITYARGENERATEPLANE_T938858356_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARGeneratePlane
struct  UnityARGeneratePlane_t938858356  : public MonoBehaviour_t3163849863
{
public:
	// UnityEngine.GameObject UnityEngine.XR.iOS.UnityARGeneratePlane::planePrefab
	GameObject_t3273633151 * ___planePrefab_2;
	// UnityEngine.XR.iOS.UnityARAnchorManager UnityEngine.XR.iOS.UnityARGeneratePlane::unityARAnchorManager
	UnityARAnchorManager_t3735611095 * ___unityARAnchorManager_3;

public:
	inline static int32_t get_offset_of_planePrefab_2() { return static_cast<int32_t>(offsetof(UnityARGeneratePlane_t938858356, ___planePrefab_2)); }
	inline GameObject_t3273633151 * get_planePrefab_2() const { return ___planePrefab_2; }
	inline GameObject_t3273633151 ** get_address_of_planePrefab_2() { return &___planePrefab_2; }
	inline void set_planePrefab_2(GameObject_t3273633151 * value)
	{
		___planePrefab_2 = value;
		Il2CppCodeGenWriteBarrier((&___planePrefab_2), value);
	}

	inline static int32_t get_offset_of_unityARAnchorManager_3() { return static_cast<int32_t>(offsetof(UnityARGeneratePlane_t938858356, ___unityARAnchorManager_3)); }
	inline UnityARAnchorManager_t3735611095 * get_unityARAnchorManager_3() const { return ___unityARAnchorManager_3; }
	inline UnityARAnchorManager_t3735611095 ** get_address_of_unityARAnchorManager_3() { return &___unityARAnchorManager_3; }
	inline void set_unityARAnchorManager_3(UnityARAnchorManager_t3735611095 * value)
	{
		___unityARAnchorManager_3 = value;
		Il2CppCodeGenWriteBarrier((&___unityARAnchorManager_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARGENERATEPLANE_T938858356_H
#ifndef UNITYARHITTESTEXAMPLE_T3385328179_H
#define UNITYARHITTESTEXAMPLE_T3385328179_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARHitTestExample
struct  UnityARHitTestExample_t3385328179  : public MonoBehaviour_t3163849863
{
public:
	// UnityEngine.Transform UnityEngine.XR.iOS.UnityARHitTestExample::m_HitTransform
	Transform_t3122675411 * ___m_HitTransform_2;

public:
	inline static int32_t get_offset_of_m_HitTransform_2() { return static_cast<int32_t>(offsetof(UnityARHitTestExample_t3385328179, ___m_HitTransform_2)); }
	inline Transform_t3122675411 * get_m_HitTransform_2() const { return ___m_HitTransform_2; }
	inline Transform_t3122675411 ** get_address_of_m_HitTransform_2() { return &___m_HitTransform_2; }
	inline void set_m_HitTransform_2(Transform_t3122675411 * value)
	{
		___m_HitTransform_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_HitTransform_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARHITTESTEXAMPLE_T3385328179_H
#ifndef UNITYARKITCONTROL_T88299892_H
#define UNITYARKITCONTROL_T88299892_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARKitControl
struct  UnityARKitControl_t88299892  : public MonoBehaviour_t3163849863
{
public:
	// UnityEngine.XR.iOS.UnityARSessionRunOption[] UnityEngine.XR.iOS.UnityARKitControl::runOptions
	UnityARSessionRunOptionU5BU5D_t3710021815* ___runOptions_2;
	// UnityEngine.XR.iOS.UnityARAlignment[] UnityEngine.XR.iOS.UnityARKitControl::alignmentOptions
	UnityARAlignmentU5BU5D_t710373642* ___alignmentOptions_3;
	// UnityEngine.XR.iOS.UnityARPlaneDetection[] UnityEngine.XR.iOS.UnityARKitControl::planeOptions
	UnityARPlaneDetectionU5BU5D_t2983212003* ___planeOptions_4;
	// System.Int32 UnityEngine.XR.iOS.UnityARKitControl::currentOptionIndex
	int32_t ___currentOptionIndex_5;
	// System.Int32 UnityEngine.XR.iOS.UnityARKitControl::currentAlignmentIndex
	int32_t ___currentAlignmentIndex_6;
	// System.Int32 UnityEngine.XR.iOS.UnityARKitControl::currentPlaneIndex
	int32_t ___currentPlaneIndex_7;

public:
	inline static int32_t get_offset_of_runOptions_2() { return static_cast<int32_t>(offsetof(UnityARKitControl_t88299892, ___runOptions_2)); }
	inline UnityARSessionRunOptionU5BU5D_t3710021815* get_runOptions_2() const { return ___runOptions_2; }
	inline UnityARSessionRunOptionU5BU5D_t3710021815** get_address_of_runOptions_2() { return &___runOptions_2; }
	inline void set_runOptions_2(UnityARSessionRunOptionU5BU5D_t3710021815* value)
	{
		___runOptions_2 = value;
		Il2CppCodeGenWriteBarrier((&___runOptions_2), value);
	}

	inline static int32_t get_offset_of_alignmentOptions_3() { return static_cast<int32_t>(offsetof(UnityARKitControl_t88299892, ___alignmentOptions_3)); }
	inline UnityARAlignmentU5BU5D_t710373642* get_alignmentOptions_3() const { return ___alignmentOptions_3; }
	inline UnityARAlignmentU5BU5D_t710373642** get_address_of_alignmentOptions_3() { return &___alignmentOptions_3; }
	inline void set_alignmentOptions_3(UnityARAlignmentU5BU5D_t710373642* value)
	{
		___alignmentOptions_3 = value;
		Il2CppCodeGenWriteBarrier((&___alignmentOptions_3), value);
	}

	inline static int32_t get_offset_of_planeOptions_4() { return static_cast<int32_t>(offsetof(UnityARKitControl_t88299892, ___planeOptions_4)); }
	inline UnityARPlaneDetectionU5BU5D_t2983212003* get_planeOptions_4() const { return ___planeOptions_4; }
	inline UnityARPlaneDetectionU5BU5D_t2983212003** get_address_of_planeOptions_4() { return &___planeOptions_4; }
	inline void set_planeOptions_4(UnityARPlaneDetectionU5BU5D_t2983212003* value)
	{
		___planeOptions_4 = value;
		Il2CppCodeGenWriteBarrier((&___planeOptions_4), value);
	}

	inline static int32_t get_offset_of_currentOptionIndex_5() { return static_cast<int32_t>(offsetof(UnityARKitControl_t88299892, ___currentOptionIndex_5)); }
	inline int32_t get_currentOptionIndex_5() const { return ___currentOptionIndex_5; }
	inline int32_t* get_address_of_currentOptionIndex_5() { return &___currentOptionIndex_5; }
	inline void set_currentOptionIndex_5(int32_t value)
	{
		___currentOptionIndex_5 = value;
	}

	inline static int32_t get_offset_of_currentAlignmentIndex_6() { return static_cast<int32_t>(offsetof(UnityARKitControl_t88299892, ___currentAlignmentIndex_6)); }
	inline int32_t get_currentAlignmentIndex_6() const { return ___currentAlignmentIndex_6; }
	inline int32_t* get_address_of_currentAlignmentIndex_6() { return &___currentAlignmentIndex_6; }
	inline void set_currentAlignmentIndex_6(int32_t value)
	{
		___currentAlignmentIndex_6 = value;
	}

	inline static int32_t get_offset_of_currentPlaneIndex_7() { return static_cast<int32_t>(offsetof(UnityARKitControl_t88299892, ___currentPlaneIndex_7)); }
	inline int32_t get_currentPlaneIndex_7() const { return ___currentPlaneIndex_7; }
	inline int32_t* get_address_of_currentPlaneIndex_7() { return &___currentPlaneIndex_7; }
	inline void set_currentPlaneIndex_7(int32_t value)
	{
		___currentPlaneIndex_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARKITCONTROL_T88299892_H
#ifndef POINTCLOUDPARTICLEEXAMPLE_T848614967_H
#define POINTCLOUDPARTICLEEXAMPLE_T848614967_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PointCloudParticleExample
struct  PointCloudParticleExample_t848614967  : public MonoBehaviour_t3163849863
{
public:
	// UnityEngine.ParticleSystem PointCloudParticleExample::pointCloudParticlePrefab
	ParticleSystem_t423172802 * ___pointCloudParticlePrefab_2;
	// System.Int32 PointCloudParticleExample::maxPointsToShow
	int32_t ___maxPointsToShow_3;
	// System.Single PointCloudParticleExample::particleSize
	float ___particleSize_4;
	// UnityEngine.Vector3[] PointCloudParticleExample::m_PointCloudData
	Vector3U5BU5D_t853750501* ___m_PointCloudData_5;
	// System.Boolean PointCloudParticleExample::frameUpdated
	bool ___frameUpdated_6;
	// UnityEngine.ParticleSystem PointCloudParticleExample::currentPS
	ParticleSystem_t423172802 * ___currentPS_7;
	// UnityEngine.ParticleSystem/Particle[] PointCloudParticleExample::particles
	ParticleU5BU5D_t3135226082* ___particles_8;

public:
	inline static int32_t get_offset_of_pointCloudParticlePrefab_2() { return static_cast<int32_t>(offsetof(PointCloudParticleExample_t848614967, ___pointCloudParticlePrefab_2)); }
	inline ParticleSystem_t423172802 * get_pointCloudParticlePrefab_2() const { return ___pointCloudParticlePrefab_2; }
	inline ParticleSystem_t423172802 ** get_address_of_pointCloudParticlePrefab_2() { return &___pointCloudParticlePrefab_2; }
	inline void set_pointCloudParticlePrefab_2(ParticleSystem_t423172802 * value)
	{
		___pointCloudParticlePrefab_2 = value;
		Il2CppCodeGenWriteBarrier((&___pointCloudParticlePrefab_2), value);
	}

	inline static int32_t get_offset_of_maxPointsToShow_3() { return static_cast<int32_t>(offsetof(PointCloudParticleExample_t848614967, ___maxPointsToShow_3)); }
	inline int32_t get_maxPointsToShow_3() const { return ___maxPointsToShow_3; }
	inline int32_t* get_address_of_maxPointsToShow_3() { return &___maxPointsToShow_3; }
	inline void set_maxPointsToShow_3(int32_t value)
	{
		___maxPointsToShow_3 = value;
	}

	inline static int32_t get_offset_of_particleSize_4() { return static_cast<int32_t>(offsetof(PointCloudParticleExample_t848614967, ___particleSize_4)); }
	inline float get_particleSize_4() const { return ___particleSize_4; }
	inline float* get_address_of_particleSize_4() { return &___particleSize_4; }
	inline void set_particleSize_4(float value)
	{
		___particleSize_4 = value;
	}

	inline static int32_t get_offset_of_m_PointCloudData_5() { return static_cast<int32_t>(offsetof(PointCloudParticleExample_t848614967, ___m_PointCloudData_5)); }
	inline Vector3U5BU5D_t853750501* get_m_PointCloudData_5() const { return ___m_PointCloudData_5; }
	inline Vector3U5BU5D_t853750501** get_address_of_m_PointCloudData_5() { return &___m_PointCloudData_5; }
	inline void set_m_PointCloudData_5(Vector3U5BU5D_t853750501* value)
	{
		___m_PointCloudData_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_PointCloudData_5), value);
	}

	inline static int32_t get_offset_of_frameUpdated_6() { return static_cast<int32_t>(offsetof(PointCloudParticleExample_t848614967, ___frameUpdated_6)); }
	inline bool get_frameUpdated_6() const { return ___frameUpdated_6; }
	inline bool* get_address_of_frameUpdated_6() { return &___frameUpdated_6; }
	inline void set_frameUpdated_6(bool value)
	{
		___frameUpdated_6 = value;
	}

	inline static int32_t get_offset_of_currentPS_7() { return static_cast<int32_t>(offsetof(PointCloudParticleExample_t848614967, ___currentPS_7)); }
	inline ParticleSystem_t423172802 * get_currentPS_7() const { return ___currentPS_7; }
	inline ParticleSystem_t423172802 ** get_address_of_currentPS_7() { return &___currentPS_7; }
	inline void set_currentPS_7(ParticleSystem_t423172802 * value)
	{
		___currentPS_7 = value;
		Il2CppCodeGenWriteBarrier((&___currentPS_7), value);
	}

	inline static int32_t get_offset_of_particles_8() { return static_cast<int32_t>(offsetof(PointCloudParticleExample_t848614967, ___particles_8)); }
	inline ParticleU5BU5D_t3135226082* get_particles_8() const { return ___particles_8; }
	inline ParticleU5BU5D_t3135226082** get_address_of_particles_8() { return &___particles_8; }
	inline void set_particles_8(ParticleU5BU5D_t3135226082* value)
	{
		___particles_8 = value;
		Il2CppCodeGenWriteBarrier((&___particles_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POINTCLOUDPARTICLEEXAMPLE_T848614967_H
#ifndef DONTDESTROYONLOAD_T4079325122_H
#define DONTDESTROYONLOAD_T4079325122_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DontDestroyOnLoad
struct  DontDestroyOnLoad_t4079325122  : public MonoBehaviour_t3163849863
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DONTDESTROYONLOAD_T4079325122_H
#ifndef UNITYARVIDEO_T2349865063_H
#define UNITYARVIDEO_T2349865063_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARVideo
struct  UnityARVideo_t2349865063  : public MonoBehaviour_t3163849863
{
public:
	// UnityEngine.Material UnityEngine.XR.iOS.UnityARVideo::m_ClearMaterial
	Material_t3327927266 * ___m_ClearMaterial_2;
	// UnityEngine.Rendering.CommandBuffer UnityEngine.XR.iOS.UnityARVideo::m_VideoCommandBuffer
	CommandBuffer_t249483790 * ___m_VideoCommandBuffer_3;
	// UnityEngine.Texture2D UnityEngine.XR.iOS.UnityARVideo::_videoTextureY
	Texture2D_t3715641063 * ____videoTextureY_4;
	// UnityEngine.Texture2D UnityEngine.XR.iOS.UnityARVideo::_videoTextureCbCr
	Texture2D_t3715641063 * ____videoTextureCbCr_5;
	// UnityEngine.Matrix4x4 UnityEngine.XR.iOS.UnityARVideo::_displayTransform
	Matrix4x4_t1549863613  ____displayTransform_6;
	// System.Boolean UnityEngine.XR.iOS.UnityARVideo::bCommandBufferInitialized
	bool ___bCommandBufferInitialized_7;

public:
	inline static int32_t get_offset_of_m_ClearMaterial_2() { return static_cast<int32_t>(offsetof(UnityARVideo_t2349865063, ___m_ClearMaterial_2)); }
	inline Material_t3327927266 * get_m_ClearMaterial_2() const { return ___m_ClearMaterial_2; }
	inline Material_t3327927266 ** get_address_of_m_ClearMaterial_2() { return &___m_ClearMaterial_2; }
	inline void set_m_ClearMaterial_2(Material_t3327927266 * value)
	{
		___m_ClearMaterial_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_ClearMaterial_2), value);
	}

	inline static int32_t get_offset_of_m_VideoCommandBuffer_3() { return static_cast<int32_t>(offsetof(UnityARVideo_t2349865063, ___m_VideoCommandBuffer_3)); }
	inline CommandBuffer_t249483790 * get_m_VideoCommandBuffer_3() const { return ___m_VideoCommandBuffer_3; }
	inline CommandBuffer_t249483790 ** get_address_of_m_VideoCommandBuffer_3() { return &___m_VideoCommandBuffer_3; }
	inline void set_m_VideoCommandBuffer_3(CommandBuffer_t249483790 * value)
	{
		___m_VideoCommandBuffer_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_VideoCommandBuffer_3), value);
	}

	inline static int32_t get_offset_of__videoTextureY_4() { return static_cast<int32_t>(offsetof(UnityARVideo_t2349865063, ____videoTextureY_4)); }
	inline Texture2D_t3715641063 * get__videoTextureY_4() const { return ____videoTextureY_4; }
	inline Texture2D_t3715641063 ** get_address_of__videoTextureY_4() { return &____videoTextureY_4; }
	inline void set__videoTextureY_4(Texture2D_t3715641063 * value)
	{
		____videoTextureY_4 = value;
		Il2CppCodeGenWriteBarrier((&____videoTextureY_4), value);
	}

	inline static int32_t get_offset_of__videoTextureCbCr_5() { return static_cast<int32_t>(offsetof(UnityARVideo_t2349865063, ____videoTextureCbCr_5)); }
	inline Texture2D_t3715641063 * get__videoTextureCbCr_5() const { return ____videoTextureCbCr_5; }
	inline Texture2D_t3715641063 ** get_address_of__videoTextureCbCr_5() { return &____videoTextureCbCr_5; }
	inline void set__videoTextureCbCr_5(Texture2D_t3715641063 * value)
	{
		____videoTextureCbCr_5 = value;
		Il2CppCodeGenWriteBarrier((&____videoTextureCbCr_5), value);
	}

	inline static int32_t get_offset_of__displayTransform_6() { return static_cast<int32_t>(offsetof(UnityARVideo_t2349865063, ____displayTransform_6)); }
	inline Matrix4x4_t1549863613  get__displayTransform_6() const { return ____displayTransform_6; }
	inline Matrix4x4_t1549863613 * get_address_of__displayTransform_6() { return &____displayTransform_6; }
	inline void set__displayTransform_6(Matrix4x4_t1549863613  value)
	{
		____displayTransform_6 = value;
	}

	inline static int32_t get_offset_of_bCommandBufferInitialized_7() { return static_cast<int32_t>(offsetof(UnityARVideo_t2349865063, ___bCommandBufferInitialized_7)); }
	inline bool get_bCommandBufferInitialized_7() const { return ___bCommandBufferInitialized_7; }
	inline bool* get_address_of_bCommandBufferInitialized_7() { return &___bCommandBufferInitialized_7; }
	inline void set_bCommandBufferInitialized_7(bool value)
	{
		___bCommandBufferInitialized_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARVIDEO_T2349865063_H
#ifndef UNITYPOINTCLOUDEXAMPLE_T639542559_H
#define UNITYPOINTCLOUDEXAMPLE_T639542559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityPointCloudExample
struct  UnityPointCloudExample_t639542559  : public MonoBehaviour_t3163849863
{
public:
	// System.UInt32 UnityPointCloudExample::numPointsToShow
	uint32_t ___numPointsToShow_2;
	// UnityEngine.GameObject UnityPointCloudExample::PointCloudPrefab
	GameObject_t3273633151 * ___PointCloudPrefab_3;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityPointCloudExample::pointCloudObjects
	List_1_t819899644 * ___pointCloudObjects_4;
	// UnityEngine.Vector3[] UnityPointCloudExample::m_PointCloudData
	Vector3U5BU5D_t853750501* ___m_PointCloudData_5;

public:
	inline static int32_t get_offset_of_numPointsToShow_2() { return static_cast<int32_t>(offsetof(UnityPointCloudExample_t639542559, ___numPointsToShow_2)); }
	inline uint32_t get_numPointsToShow_2() const { return ___numPointsToShow_2; }
	inline uint32_t* get_address_of_numPointsToShow_2() { return &___numPointsToShow_2; }
	inline void set_numPointsToShow_2(uint32_t value)
	{
		___numPointsToShow_2 = value;
	}

	inline static int32_t get_offset_of_PointCloudPrefab_3() { return static_cast<int32_t>(offsetof(UnityPointCloudExample_t639542559, ___PointCloudPrefab_3)); }
	inline GameObject_t3273633151 * get_PointCloudPrefab_3() const { return ___PointCloudPrefab_3; }
	inline GameObject_t3273633151 ** get_address_of_PointCloudPrefab_3() { return &___PointCloudPrefab_3; }
	inline void set_PointCloudPrefab_3(GameObject_t3273633151 * value)
	{
		___PointCloudPrefab_3 = value;
		Il2CppCodeGenWriteBarrier((&___PointCloudPrefab_3), value);
	}

	inline static int32_t get_offset_of_pointCloudObjects_4() { return static_cast<int32_t>(offsetof(UnityPointCloudExample_t639542559, ___pointCloudObjects_4)); }
	inline List_1_t819899644 * get_pointCloudObjects_4() const { return ___pointCloudObjects_4; }
	inline List_1_t819899644 ** get_address_of_pointCloudObjects_4() { return &___pointCloudObjects_4; }
	inline void set_pointCloudObjects_4(List_1_t819899644 * value)
	{
		___pointCloudObjects_4 = value;
		Il2CppCodeGenWriteBarrier((&___pointCloudObjects_4), value);
	}

	inline static int32_t get_offset_of_m_PointCloudData_5() { return static_cast<int32_t>(offsetof(UnityPointCloudExample_t639542559, ___m_PointCloudData_5)); }
	inline Vector3U5BU5D_t853750501* get_m_PointCloudData_5() const { return ___m_PointCloudData_5; }
	inline Vector3U5BU5D_t853750501** get_address_of_m_PointCloudData_5() { return &___m_PointCloudData_5; }
	inline void set_m_PointCloudData_5(Vector3U5BU5D_t853750501* value)
	{
		___m_PointCloudData_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_PointCloudData_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYPOINTCLOUDEXAMPLE_T639542559_H
#ifndef AR3DOFCAMERAMANAGER_T1749831472_H
#define AR3DOFCAMERAMANAGER_T1749831472_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AR3DOFCameraManager
struct  AR3DOFCameraManager_t1749831472  : public MonoBehaviour_t3163849863
{
public:
	// UnityEngine.Camera AR3DOFCameraManager::m_camera
	Camera_t3483225491 * ___m_camera_2;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface AR3DOFCameraManager::m_session
	UnityARSessionNativeInterface_t3311050297 * ___m_session_3;
	// UnityEngine.Material AR3DOFCameraManager::savedClearMaterial
	Material_t3327927266 * ___savedClearMaterial_4;

public:
	inline static int32_t get_offset_of_m_camera_2() { return static_cast<int32_t>(offsetof(AR3DOFCameraManager_t1749831472, ___m_camera_2)); }
	inline Camera_t3483225491 * get_m_camera_2() const { return ___m_camera_2; }
	inline Camera_t3483225491 ** get_address_of_m_camera_2() { return &___m_camera_2; }
	inline void set_m_camera_2(Camera_t3483225491 * value)
	{
		___m_camera_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_camera_2), value);
	}

	inline static int32_t get_offset_of_m_session_3() { return static_cast<int32_t>(offsetof(AR3DOFCameraManager_t1749831472, ___m_session_3)); }
	inline UnityARSessionNativeInterface_t3311050297 * get_m_session_3() const { return ___m_session_3; }
	inline UnityARSessionNativeInterface_t3311050297 ** get_address_of_m_session_3() { return &___m_session_3; }
	inline void set_m_session_3(UnityARSessionNativeInterface_t3311050297 * value)
	{
		___m_session_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_session_3), value);
	}

	inline static int32_t get_offset_of_savedClearMaterial_4() { return static_cast<int32_t>(offsetof(AR3DOFCameraManager_t1749831472, ___savedClearMaterial_4)); }
	inline Material_t3327927266 * get_savedClearMaterial_4() const { return ___savedClearMaterial_4; }
	inline Material_t3327927266 ** get_address_of_savedClearMaterial_4() { return &___savedClearMaterial_4; }
	inline void set_savedClearMaterial_4(Material_t3327927266 * value)
	{
		___savedClearMaterial_4 = value;
		Il2CppCodeGenWriteBarrier((&___savedClearMaterial_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AR3DOFCAMERAMANAGER_T1749831472_H
#ifndef PARTICLEPAINTER_T652375039_H
#define PARTICLEPAINTER_T652375039_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ParticlePainter
struct  ParticlePainter_t652375039  : public MonoBehaviour_t3163849863
{
public:
	// UnityEngine.ParticleSystem ParticlePainter::painterParticlePrefab
	ParticleSystem_t423172802 * ___painterParticlePrefab_2;
	// System.Single ParticlePainter::minDistanceThreshold
	float ___minDistanceThreshold_3;
	// System.Single ParticlePainter::maxDistanceThreshold
	float ___maxDistanceThreshold_4;
	// System.Boolean ParticlePainter::frameUpdated
	bool ___frameUpdated_5;
	// System.Single ParticlePainter::particleSize
	float ___particleSize_6;
	// System.Single ParticlePainter::penDistance
	float ___penDistance_7;
	// ColorPicker ParticlePainter::colorPicker
	ColorPicker_t1372980006 * ___colorPicker_8;
	// UnityEngine.ParticleSystem ParticlePainter::currentPS
	ParticleSystem_t423172802 * ___currentPS_9;
	// UnityEngine.ParticleSystem/Particle[] ParticlePainter::particles
	ParticleU5BU5D_t3135226082* ___particles_10;
	// UnityEngine.Vector3 ParticlePainter::previousPosition
	Vector3_t3995960300  ___previousPosition_11;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> ParticlePainter::currentPaintVertices
	List_1_t1542226793 * ___currentPaintVertices_12;
	// UnityEngine.Color ParticlePainter::currentColor
	Color_t3902810162  ___currentColor_13;
	// System.Collections.Generic.List`1<UnityEngine.ParticleSystem> ParticlePainter::paintSystems
	List_1_t2264406591 * ___paintSystems_14;
	// System.Int32 ParticlePainter::paintMode
	int32_t ___paintMode_15;

public:
	inline static int32_t get_offset_of_painterParticlePrefab_2() { return static_cast<int32_t>(offsetof(ParticlePainter_t652375039, ___painterParticlePrefab_2)); }
	inline ParticleSystem_t423172802 * get_painterParticlePrefab_2() const { return ___painterParticlePrefab_2; }
	inline ParticleSystem_t423172802 ** get_address_of_painterParticlePrefab_2() { return &___painterParticlePrefab_2; }
	inline void set_painterParticlePrefab_2(ParticleSystem_t423172802 * value)
	{
		___painterParticlePrefab_2 = value;
		Il2CppCodeGenWriteBarrier((&___painterParticlePrefab_2), value);
	}

	inline static int32_t get_offset_of_minDistanceThreshold_3() { return static_cast<int32_t>(offsetof(ParticlePainter_t652375039, ___minDistanceThreshold_3)); }
	inline float get_minDistanceThreshold_3() const { return ___minDistanceThreshold_3; }
	inline float* get_address_of_minDistanceThreshold_3() { return &___minDistanceThreshold_3; }
	inline void set_minDistanceThreshold_3(float value)
	{
		___minDistanceThreshold_3 = value;
	}

	inline static int32_t get_offset_of_maxDistanceThreshold_4() { return static_cast<int32_t>(offsetof(ParticlePainter_t652375039, ___maxDistanceThreshold_4)); }
	inline float get_maxDistanceThreshold_4() const { return ___maxDistanceThreshold_4; }
	inline float* get_address_of_maxDistanceThreshold_4() { return &___maxDistanceThreshold_4; }
	inline void set_maxDistanceThreshold_4(float value)
	{
		___maxDistanceThreshold_4 = value;
	}

	inline static int32_t get_offset_of_frameUpdated_5() { return static_cast<int32_t>(offsetof(ParticlePainter_t652375039, ___frameUpdated_5)); }
	inline bool get_frameUpdated_5() const { return ___frameUpdated_5; }
	inline bool* get_address_of_frameUpdated_5() { return &___frameUpdated_5; }
	inline void set_frameUpdated_5(bool value)
	{
		___frameUpdated_5 = value;
	}

	inline static int32_t get_offset_of_particleSize_6() { return static_cast<int32_t>(offsetof(ParticlePainter_t652375039, ___particleSize_6)); }
	inline float get_particleSize_6() const { return ___particleSize_6; }
	inline float* get_address_of_particleSize_6() { return &___particleSize_6; }
	inline void set_particleSize_6(float value)
	{
		___particleSize_6 = value;
	}

	inline static int32_t get_offset_of_penDistance_7() { return static_cast<int32_t>(offsetof(ParticlePainter_t652375039, ___penDistance_7)); }
	inline float get_penDistance_7() const { return ___penDistance_7; }
	inline float* get_address_of_penDistance_7() { return &___penDistance_7; }
	inline void set_penDistance_7(float value)
	{
		___penDistance_7 = value;
	}

	inline static int32_t get_offset_of_colorPicker_8() { return static_cast<int32_t>(offsetof(ParticlePainter_t652375039, ___colorPicker_8)); }
	inline ColorPicker_t1372980006 * get_colorPicker_8() const { return ___colorPicker_8; }
	inline ColorPicker_t1372980006 ** get_address_of_colorPicker_8() { return &___colorPicker_8; }
	inline void set_colorPicker_8(ColorPicker_t1372980006 * value)
	{
		___colorPicker_8 = value;
		Il2CppCodeGenWriteBarrier((&___colorPicker_8), value);
	}

	inline static int32_t get_offset_of_currentPS_9() { return static_cast<int32_t>(offsetof(ParticlePainter_t652375039, ___currentPS_9)); }
	inline ParticleSystem_t423172802 * get_currentPS_9() const { return ___currentPS_9; }
	inline ParticleSystem_t423172802 ** get_address_of_currentPS_9() { return &___currentPS_9; }
	inline void set_currentPS_9(ParticleSystem_t423172802 * value)
	{
		___currentPS_9 = value;
		Il2CppCodeGenWriteBarrier((&___currentPS_9), value);
	}

	inline static int32_t get_offset_of_particles_10() { return static_cast<int32_t>(offsetof(ParticlePainter_t652375039, ___particles_10)); }
	inline ParticleU5BU5D_t3135226082* get_particles_10() const { return ___particles_10; }
	inline ParticleU5BU5D_t3135226082** get_address_of_particles_10() { return &___particles_10; }
	inline void set_particles_10(ParticleU5BU5D_t3135226082* value)
	{
		___particles_10 = value;
		Il2CppCodeGenWriteBarrier((&___particles_10), value);
	}

	inline static int32_t get_offset_of_previousPosition_11() { return static_cast<int32_t>(offsetof(ParticlePainter_t652375039, ___previousPosition_11)); }
	inline Vector3_t3995960300  get_previousPosition_11() const { return ___previousPosition_11; }
	inline Vector3_t3995960300 * get_address_of_previousPosition_11() { return &___previousPosition_11; }
	inline void set_previousPosition_11(Vector3_t3995960300  value)
	{
		___previousPosition_11 = value;
	}

	inline static int32_t get_offset_of_currentPaintVertices_12() { return static_cast<int32_t>(offsetof(ParticlePainter_t652375039, ___currentPaintVertices_12)); }
	inline List_1_t1542226793 * get_currentPaintVertices_12() const { return ___currentPaintVertices_12; }
	inline List_1_t1542226793 ** get_address_of_currentPaintVertices_12() { return &___currentPaintVertices_12; }
	inline void set_currentPaintVertices_12(List_1_t1542226793 * value)
	{
		___currentPaintVertices_12 = value;
		Il2CppCodeGenWriteBarrier((&___currentPaintVertices_12), value);
	}

	inline static int32_t get_offset_of_currentColor_13() { return static_cast<int32_t>(offsetof(ParticlePainter_t652375039, ___currentColor_13)); }
	inline Color_t3902810162  get_currentColor_13() const { return ___currentColor_13; }
	inline Color_t3902810162 * get_address_of_currentColor_13() { return &___currentColor_13; }
	inline void set_currentColor_13(Color_t3902810162  value)
	{
		___currentColor_13 = value;
	}

	inline static int32_t get_offset_of_paintSystems_14() { return static_cast<int32_t>(offsetof(ParticlePainter_t652375039, ___paintSystems_14)); }
	inline List_1_t2264406591 * get_paintSystems_14() const { return ___paintSystems_14; }
	inline List_1_t2264406591 ** get_address_of_paintSystems_14() { return &___paintSystems_14; }
	inline void set_paintSystems_14(List_1_t2264406591 * value)
	{
		___paintSystems_14 = value;
		Il2CppCodeGenWriteBarrier((&___paintSystems_14), value);
	}

	inline static int32_t get_offset_of_paintMode_15() { return static_cast<int32_t>(offsetof(ParticlePainter_t652375039, ___paintMode_15)); }
	inline int32_t get_paintMode_15() const { return ___paintMode_15; }
	inline int32_t* get_address_of_paintMode_15() { return &___paintMode_15; }
	inline void set_paintMode_15(int32_t value)
	{
		___paintMode_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARTICLEPAINTER_T652375039_H
#ifndef SVBOXSLIDER_T1583468155_H
#define SVBOXSLIDER_T1583468155_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SVBoxSlider
struct  SVBoxSlider_t1583468155  : public MonoBehaviour_t3163849863
{
public:
	// ColorPicker SVBoxSlider::picker
	ColorPicker_t1372980006 * ___picker_2;
	// UnityEngine.UI.BoxSlider SVBoxSlider::slider
	BoxSlider_t2301888024 * ___slider_3;
	// UnityEngine.UI.RawImage SVBoxSlider::image
	RawImage_t2649120772 * ___image_4;
	// System.Single SVBoxSlider::lastH
	float ___lastH_5;
	// System.Boolean SVBoxSlider::listen
	bool ___listen_6;

public:
	inline static int32_t get_offset_of_picker_2() { return static_cast<int32_t>(offsetof(SVBoxSlider_t1583468155, ___picker_2)); }
	inline ColorPicker_t1372980006 * get_picker_2() const { return ___picker_2; }
	inline ColorPicker_t1372980006 ** get_address_of_picker_2() { return &___picker_2; }
	inline void set_picker_2(ColorPicker_t1372980006 * value)
	{
		___picker_2 = value;
		Il2CppCodeGenWriteBarrier((&___picker_2), value);
	}

	inline static int32_t get_offset_of_slider_3() { return static_cast<int32_t>(offsetof(SVBoxSlider_t1583468155, ___slider_3)); }
	inline BoxSlider_t2301888024 * get_slider_3() const { return ___slider_3; }
	inline BoxSlider_t2301888024 ** get_address_of_slider_3() { return &___slider_3; }
	inline void set_slider_3(BoxSlider_t2301888024 * value)
	{
		___slider_3 = value;
		Il2CppCodeGenWriteBarrier((&___slider_3), value);
	}

	inline static int32_t get_offset_of_image_4() { return static_cast<int32_t>(offsetof(SVBoxSlider_t1583468155, ___image_4)); }
	inline RawImage_t2649120772 * get_image_4() const { return ___image_4; }
	inline RawImage_t2649120772 ** get_address_of_image_4() { return &___image_4; }
	inline void set_image_4(RawImage_t2649120772 * value)
	{
		___image_4 = value;
		Il2CppCodeGenWriteBarrier((&___image_4), value);
	}

	inline static int32_t get_offset_of_lastH_5() { return static_cast<int32_t>(offsetof(SVBoxSlider_t1583468155, ___lastH_5)); }
	inline float get_lastH_5() const { return ___lastH_5; }
	inline float* get_address_of_lastH_5() { return &___lastH_5; }
	inline void set_lastH_5(float value)
	{
		___lastH_5 = value;
	}

	inline static int32_t get_offset_of_listen_6() { return static_cast<int32_t>(offsetof(SVBoxSlider_t1583468155, ___listen_6)); }
	inline bool get_listen_6() const { return ___listen_6; }
	inline bool* get_address_of_listen_6() { return &___listen_6; }
	inline void set_listen_6(bool value)
	{
		___listen_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SVBOXSLIDER_T1583468155_H
#ifndef BALLMAKER_T882638598_H
#define BALLMAKER_T882638598_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BallMaker
struct  BallMaker_t882638598  : public MonoBehaviour_t3163849863
{
public:
	// UnityEngine.GameObject BallMaker::ballPrefab
	GameObject_t3273633151 * ___ballPrefab_2;
	// System.Single BallMaker::createHeight
	float ___createHeight_3;
	// UnityEngine.MaterialPropertyBlock BallMaker::props
	MaterialPropertyBlock_t4229520026 * ___props_4;

public:
	inline static int32_t get_offset_of_ballPrefab_2() { return static_cast<int32_t>(offsetof(BallMaker_t882638598, ___ballPrefab_2)); }
	inline GameObject_t3273633151 * get_ballPrefab_2() const { return ___ballPrefab_2; }
	inline GameObject_t3273633151 ** get_address_of_ballPrefab_2() { return &___ballPrefab_2; }
	inline void set_ballPrefab_2(GameObject_t3273633151 * value)
	{
		___ballPrefab_2 = value;
		Il2CppCodeGenWriteBarrier((&___ballPrefab_2), value);
	}

	inline static int32_t get_offset_of_createHeight_3() { return static_cast<int32_t>(offsetof(BallMaker_t882638598, ___createHeight_3)); }
	inline float get_createHeight_3() const { return ___createHeight_3; }
	inline float* get_address_of_createHeight_3() { return &___createHeight_3; }
	inline void set_createHeight_3(float value)
	{
		___createHeight_3 = value;
	}

	inline static int32_t get_offset_of_props_4() { return static_cast<int32_t>(offsetof(BallMaker_t882638598, ___props_4)); }
	inline MaterialPropertyBlock_t4229520026 * get_props_4() const { return ___props_4; }
	inline MaterialPropertyBlock_t4229520026 ** get_address_of_props_4() { return &___props_4; }
	inline void set_props_4(MaterialPropertyBlock_t4229520026 * value)
	{
		___props_4 = value;
		Il2CppCodeGenWriteBarrier((&___props_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BALLMAKER_T882638598_H
#ifndef HEXCOLORFIELD_T2009489506_H
#define HEXCOLORFIELD_T2009489506_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HexColorField
struct  HexColorField_t2009489506  : public MonoBehaviour_t3163849863
{
public:
	// ColorPicker HexColorField::hsvpicker
	ColorPicker_t1372980006 * ___hsvpicker_2;
	// System.Boolean HexColorField::displayAlpha
	bool ___displayAlpha_3;
	// UnityEngine.UI.InputField HexColorField::hexInputField
	InputField_t3636619864 * ___hexInputField_4;

public:
	inline static int32_t get_offset_of_hsvpicker_2() { return static_cast<int32_t>(offsetof(HexColorField_t2009489506, ___hsvpicker_2)); }
	inline ColorPicker_t1372980006 * get_hsvpicker_2() const { return ___hsvpicker_2; }
	inline ColorPicker_t1372980006 ** get_address_of_hsvpicker_2() { return &___hsvpicker_2; }
	inline void set_hsvpicker_2(ColorPicker_t1372980006 * value)
	{
		___hsvpicker_2 = value;
		Il2CppCodeGenWriteBarrier((&___hsvpicker_2), value);
	}

	inline static int32_t get_offset_of_displayAlpha_3() { return static_cast<int32_t>(offsetof(HexColorField_t2009489506, ___displayAlpha_3)); }
	inline bool get_displayAlpha_3() const { return ___displayAlpha_3; }
	inline bool* get_address_of_displayAlpha_3() { return &___displayAlpha_3; }
	inline void set_displayAlpha_3(bool value)
	{
		___displayAlpha_3 = value;
	}

	inline static int32_t get_offset_of_hexInputField_4() { return static_cast<int32_t>(offsetof(HexColorField_t2009489506, ___hexInputField_4)); }
	inline InputField_t3636619864 * get_hexInputField_4() const { return ___hexInputField_4; }
	inline InputField_t3636619864 ** get_address_of_hexInputField_4() { return &___hexInputField_4; }
	inline void set_hexInputField_4(InputField_t3636619864 * value)
	{
		___hexInputField_4 = value;
		Il2CppCodeGenWriteBarrier((&___hexInputField_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HEXCOLORFIELD_T2009489506_H
#ifndef COLORSLIDER_T2214683704_H
#define COLORSLIDER_T2214683704_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ColorSlider
struct  ColorSlider_t2214683704  : public MonoBehaviour_t3163849863
{
public:
	// ColorPicker ColorSlider::hsvpicker
	ColorPicker_t1372980006 * ___hsvpicker_2;
	// ColorValues ColorSlider::type
	int32_t ___type_3;
	// UnityEngine.UI.Slider ColorSlider::slider
	Slider_t904762159 * ___slider_4;
	// System.Boolean ColorSlider::listen
	bool ___listen_5;

public:
	inline static int32_t get_offset_of_hsvpicker_2() { return static_cast<int32_t>(offsetof(ColorSlider_t2214683704, ___hsvpicker_2)); }
	inline ColorPicker_t1372980006 * get_hsvpicker_2() const { return ___hsvpicker_2; }
	inline ColorPicker_t1372980006 ** get_address_of_hsvpicker_2() { return &___hsvpicker_2; }
	inline void set_hsvpicker_2(ColorPicker_t1372980006 * value)
	{
		___hsvpicker_2 = value;
		Il2CppCodeGenWriteBarrier((&___hsvpicker_2), value);
	}

	inline static int32_t get_offset_of_type_3() { return static_cast<int32_t>(offsetof(ColorSlider_t2214683704, ___type_3)); }
	inline int32_t get_type_3() const { return ___type_3; }
	inline int32_t* get_address_of_type_3() { return &___type_3; }
	inline void set_type_3(int32_t value)
	{
		___type_3 = value;
	}

	inline static int32_t get_offset_of_slider_4() { return static_cast<int32_t>(offsetof(ColorSlider_t2214683704, ___slider_4)); }
	inline Slider_t904762159 * get_slider_4() const { return ___slider_4; }
	inline Slider_t904762159 ** get_address_of_slider_4() { return &___slider_4; }
	inline void set_slider_4(Slider_t904762159 * value)
	{
		___slider_4 = value;
		Il2CppCodeGenWriteBarrier((&___slider_4), value);
	}

	inline static int32_t get_offset_of_listen_5() { return static_cast<int32_t>(offsetof(ColorSlider_t2214683704, ___listen_5)); }
	inline bool get_listen_5() const { return ___listen_5; }
	inline bool* get_address_of_listen_5() { return &___listen_5; }
	inline void set_listen_5(bool value)
	{
		___listen_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLORSLIDER_T2214683704_H
#ifndef COLORPRESETS_T2852057776_H
#define COLORPRESETS_T2852057776_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ColorPresets
struct  ColorPresets_t2852057776  : public MonoBehaviour_t3163849863
{
public:
	// ColorPicker ColorPresets::picker
	ColorPicker_t1372980006 * ___picker_2;
	// UnityEngine.GameObject[] ColorPresets::presets
	GameObjectU5BU5D_t1240058278* ___presets_3;
	// UnityEngine.UI.Image ColorPresets::createPresetImage
	Image_t1222024020 * ___createPresetImage_4;

public:
	inline static int32_t get_offset_of_picker_2() { return static_cast<int32_t>(offsetof(ColorPresets_t2852057776, ___picker_2)); }
	inline ColorPicker_t1372980006 * get_picker_2() const { return ___picker_2; }
	inline ColorPicker_t1372980006 ** get_address_of_picker_2() { return &___picker_2; }
	inline void set_picker_2(ColorPicker_t1372980006 * value)
	{
		___picker_2 = value;
		Il2CppCodeGenWriteBarrier((&___picker_2), value);
	}

	inline static int32_t get_offset_of_presets_3() { return static_cast<int32_t>(offsetof(ColorPresets_t2852057776, ___presets_3)); }
	inline GameObjectU5BU5D_t1240058278* get_presets_3() const { return ___presets_3; }
	inline GameObjectU5BU5D_t1240058278** get_address_of_presets_3() { return &___presets_3; }
	inline void set_presets_3(GameObjectU5BU5D_t1240058278* value)
	{
		___presets_3 = value;
		Il2CppCodeGenWriteBarrier((&___presets_3), value);
	}

	inline static int32_t get_offset_of_createPresetImage_4() { return static_cast<int32_t>(offsetof(ColorPresets_t2852057776, ___createPresetImage_4)); }
	inline Image_t1222024020 * get_createPresetImage_4() const { return ___createPresetImage_4; }
	inline Image_t1222024020 ** get_address_of_createPresetImage_4() { return &___createPresetImage_4; }
	inline void set_createPresetImage_4(Image_t1222024020 * value)
	{
		___createPresetImage_4 = value;
		Il2CppCodeGenWriteBarrier((&___createPresetImage_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLORPRESETS_T2852057776_H
#ifndef COLORPICKER_T1372980006_H
#define COLORPICKER_T1372980006_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ColorPicker
struct  ColorPicker_t1372980006  : public MonoBehaviour_t3163849863
{
public:
	// System.Single ColorPicker::_hue
	float ____hue_2;
	// System.Single ColorPicker::_saturation
	float ____saturation_3;
	// System.Single ColorPicker::_brightness
	float ____brightness_4;
	// System.Single ColorPicker::_red
	float ____red_5;
	// System.Single ColorPicker::_green
	float ____green_6;
	// System.Single ColorPicker::_blue
	float ____blue_7;
	// System.Single ColorPicker::_alpha
	float ____alpha_8;
	// ColorChangedEvent ColorPicker::onValueChanged
	ColorChangedEvent_t1336820221 * ___onValueChanged_9;
	// HSVChangedEvent ColorPicker::onHSVChanged
	HSVChangedEvent_t2112947086 * ___onHSVChanged_10;

public:
	inline static int32_t get_offset_of__hue_2() { return static_cast<int32_t>(offsetof(ColorPicker_t1372980006, ____hue_2)); }
	inline float get__hue_2() const { return ____hue_2; }
	inline float* get_address_of__hue_2() { return &____hue_2; }
	inline void set__hue_2(float value)
	{
		____hue_2 = value;
	}

	inline static int32_t get_offset_of__saturation_3() { return static_cast<int32_t>(offsetof(ColorPicker_t1372980006, ____saturation_3)); }
	inline float get__saturation_3() const { return ____saturation_3; }
	inline float* get_address_of__saturation_3() { return &____saturation_3; }
	inline void set__saturation_3(float value)
	{
		____saturation_3 = value;
	}

	inline static int32_t get_offset_of__brightness_4() { return static_cast<int32_t>(offsetof(ColorPicker_t1372980006, ____brightness_4)); }
	inline float get__brightness_4() const { return ____brightness_4; }
	inline float* get_address_of__brightness_4() { return &____brightness_4; }
	inline void set__brightness_4(float value)
	{
		____brightness_4 = value;
	}

	inline static int32_t get_offset_of__red_5() { return static_cast<int32_t>(offsetof(ColorPicker_t1372980006, ____red_5)); }
	inline float get__red_5() const { return ____red_5; }
	inline float* get_address_of__red_5() { return &____red_5; }
	inline void set__red_5(float value)
	{
		____red_5 = value;
	}

	inline static int32_t get_offset_of__green_6() { return static_cast<int32_t>(offsetof(ColorPicker_t1372980006, ____green_6)); }
	inline float get__green_6() const { return ____green_6; }
	inline float* get_address_of__green_6() { return &____green_6; }
	inline void set__green_6(float value)
	{
		____green_6 = value;
	}

	inline static int32_t get_offset_of__blue_7() { return static_cast<int32_t>(offsetof(ColorPicker_t1372980006, ____blue_7)); }
	inline float get__blue_7() const { return ____blue_7; }
	inline float* get_address_of__blue_7() { return &____blue_7; }
	inline void set__blue_7(float value)
	{
		____blue_7 = value;
	}

	inline static int32_t get_offset_of__alpha_8() { return static_cast<int32_t>(offsetof(ColorPicker_t1372980006, ____alpha_8)); }
	inline float get__alpha_8() const { return ____alpha_8; }
	inline float* get_address_of__alpha_8() { return &____alpha_8; }
	inline void set__alpha_8(float value)
	{
		____alpha_8 = value;
	}

	inline static int32_t get_offset_of_onValueChanged_9() { return static_cast<int32_t>(offsetof(ColorPicker_t1372980006, ___onValueChanged_9)); }
	inline ColorChangedEvent_t1336820221 * get_onValueChanged_9() const { return ___onValueChanged_9; }
	inline ColorChangedEvent_t1336820221 ** get_address_of_onValueChanged_9() { return &___onValueChanged_9; }
	inline void set_onValueChanged_9(ColorChangedEvent_t1336820221 * value)
	{
		___onValueChanged_9 = value;
		Il2CppCodeGenWriteBarrier((&___onValueChanged_9), value);
	}

	inline static int32_t get_offset_of_onHSVChanged_10() { return static_cast<int32_t>(offsetof(ColorPicker_t1372980006, ___onHSVChanged_10)); }
	inline HSVChangedEvent_t2112947086 * get_onHSVChanged_10() const { return ___onHSVChanged_10; }
	inline HSVChangedEvent_t2112947086 ** get_address_of_onHSVChanged_10() { return &___onHSVChanged_10; }
	inline void set_onHSVChanged_10(HSVChangedEvent_t2112947086 * value)
	{
		___onHSVChanged_10 = value;
		Il2CppCodeGenWriteBarrier((&___onHSVChanged_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLORPICKER_T1372980006_H
#ifndef COLORLABEL_T2484944104_H
#define COLORLABEL_T2484944104_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ColorLabel
struct  ColorLabel_t2484944104  : public MonoBehaviour_t3163849863
{
public:
	// ColorPicker ColorLabel::picker
	ColorPicker_t1372980006 * ___picker_2;
	// ColorValues ColorLabel::type
	int32_t ___type_3;
	// System.String ColorLabel::prefix
	String_t* ___prefix_4;
	// System.Single ColorLabel::minValue
	float ___minValue_5;
	// System.Single ColorLabel::maxValue
	float ___maxValue_6;
	// System.Int32 ColorLabel::precision
	int32_t ___precision_7;
	// UnityEngine.UI.Text ColorLabel::label
	Text_t1634980233 * ___label_8;

public:
	inline static int32_t get_offset_of_picker_2() { return static_cast<int32_t>(offsetof(ColorLabel_t2484944104, ___picker_2)); }
	inline ColorPicker_t1372980006 * get_picker_2() const { return ___picker_2; }
	inline ColorPicker_t1372980006 ** get_address_of_picker_2() { return &___picker_2; }
	inline void set_picker_2(ColorPicker_t1372980006 * value)
	{
		___picker_2 = value;
		Il2CppCodeGenWriteBarrier((&___picker_2), value);
	}

	inline static int32_t get_offset_of_type_3() { return static_cast<int32_t>(offsetof(ColorLabel_t2484944104, ___type_3)); }
	inline int32_t get_type_3() const { return ___type_3; }
	inline int32_t* get_address_of_type_3() { return &___type_3; }
	inline void set_type_3(int32_t value)
	{
		___type_3 = value;
	}

	inline static int32_t get_offset_of_prefix_4() { return static_cast<int32_t>(offsetof(ColorLabel_t2484944104, ___prefix_4)); }
	inline String_t* get_prefix_4() const { return ___prefix_4; }
	inline String_t** get_address_of_prefix_4() { return &___prefix_4; }
	inline void set_prefix_4(String_t* value)
	{
		___prefix_4 = value;
		Il2CppCodeGenWriteBarrier((&___prefix_4), value);
	}

	inline static int32_t get_offset_of_minValue_5() { return static_cast<int32_t>(offsetof(ColorLabel_t2484944104, ___minValue_5)); }
	inline float get_minValue_5() const { return ___minValue_5; }
	inline float* get_address_of_minValue_5() { return &___minValue_5; }
	inline void set_minValue_5(float value)
	{
		___minValue_5 = value;
	}

	inline static int32_t get_offset_of_maxValue_6() { return static_cast<int32_t>(offsetof(ColorLabel_t2484944104, ___maxValue_6)); }
	inline float get_maxValue_6() const { return ___maxValue_6; }
	inline float* get_address_of_maxValue_6() { return &___maxValue_6; }
	inline void set_maxValue_6(float value)
	{
		___maxValue_6 = value;
	}

	inline static int32_t get_offset_of_precision_7() { return static_cast<int32_t>(offsetof(ColorLabel_t2484944104, ___precision_7)); }
	inline int32_t get_precision_7() const { return ___precision_7; }
	inline int32_t* get_address_of_precision_7() { return &___precision_7; }
	inline void set_precision_7(int32_t value)
	{
		___precision_7 = value;
	}

	inline static int32_t get_offset_of_label_8() { return static_cast<int32_t>(offsetof(ColorLabel_t2484944104, ___label_8)); }
	inline Text_t1634980233 * get_label_8() const { return ___label_8; }
	inline Text_t1634980233 ** get_address_of_label_8() { return &___label_8; }
	inline void set_label_8(Text_t1634980233 * value)
	{
		___label_8 = value;
		Il2CppCodeGenWriteBarrier((&___label_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLORLABEL_T2484944104_H
#ifndef COLORIMAGE_T978053172_H
#define COLORIMAGE_T978053172_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ColorImage
struct  ColorImage_t978053172  : public MonoBehaviour_t3163849863
{
public:
	// ColorPicker ColorImage::picker
	ColorPicker_t1372980006 * ___picker_2;
	// UnityEngine.UI.Image ColorImage::image
	Image_t1222024020 * ___image_3;

public:
	inline static int32_t get_offset_of_picker_2() { return static_cast<int32_t>(offsetof(ColorImage_t978053172, ___picker_2)); }
	inline ColorPicker_t1372980006 * get_picker_2() const { return ___picker_2; }
	inline ColorPicker_t1372980006 ** get_address_of_picker_2() { return &___picker_2; }
	inline void set_picker_2(ColorPicker_t1372980006 * value)
	{
		___picker_2 = value;
		Il2CppCodeGenWriteBarrier((&___picker_2), value);
	}

	inline static int32_t get_offset_of_image_3() { return static_cast<int32_t>(offsetof(ColorImage_t978053172, ___image_3)); }
	inline Image_t1222024020 * get_image_3() const { return ___image_3; }
	inline Image_t1222024020 ** get_address_of_image_3() { return &___image_3; }
	inline void set_image_3(Image_t1222024020 * value)
	{
		___image_3 = value;
		Il2CppCodeGenWriteBarrier((&___image_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLORIMAGE_T978053172_H
#ifndef TILTWINDOW_T1356654206_H
#define TILTWINDOW_T1356654206_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TiltWindow
struct  TiltWindow_t1356654206  : public MonoBehaviour_t3163849863
{
public:
	// UnityEngine.Vector2 TiltWindow::range
	Vector2_t1027914059  ___range_2;
	// UnityEngine.Transform TiltWindow::mTrans
	Transform_t3122675411 * ___mTrans_3;
	// UnityEngine.Quaternion TiltWindow::mStart
	Quaternion_t3889186075  ___mStart_4;
	// UnityEngine.Vector2 TiltWindow::mRot
	Vector2_t1027914059  ___mRot_5;

public:
	inline static int32_t get_offset_of_range_2() { return static_cast<int32_t>(offsetof(TiltWindow_t1356654206, ___range_2)); }
	inline Vector2_t1027914059  get_range_2() const { return ___range_2; }
	inline Vector2_t1027914059 * get_address_of_range_2() { return &___range_2; }
	inline void set_range_2(Vector2_t1027914059  value)
	{
		___range_2 = value;
	}

	inline static int32_t get_offset_of_mTrans_3() { return static_cast<int32_t>(offsetof(TiltWindow_t1356654206, ___mTrans_3)); }
	inline Transform_t3122675411 * get_mTrans_3() const { return ___mTrans_3; }
	inline Transform_t3122675411 ** get_address_of_mTrans_3() { return &___mTrans_3; }
	inline void set_mTrans_3(Transform_t3122675411 * value)
	{
		___mTrans_3 = value;
		Il2CppCodeGenWriteBarrier((&___mTrans_3), value);
	}

	inline static int32_t get_offset_of_mStart_4() { return static_cast<int32_t>(offsetof(TiltWindow_t1356654206, ___mStart_4)); }
	inline Quaternion_t3889186075  get_mStart_4() const { return ___mStart_4; }
	inline Quaternion_t3889186075 * get_address_of_mStart_4() { return &___mStart_4; }
	inline void set_mStart_4(Quaternion_t3889186075  value)
	{
		___mStart_4 = value;
	}

	inline static int32_t get_offset_of_mRot_5() { return static_cast<int32_t>(offsetof(TiltWindow_t1356654206, ___mRot_5)); }
	inline Vector2_t1027914059  get_mRot_5() const { return ___mRot_5; }
	inline Vector2_t1027914059 * get_address_of_mRot_5() { return &___mRot_5; }
	inline void set_mRot_5(Vector2_t1027914059  value)
	{
		___mRot_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TILTWINDOW_T1356654206_H
#ifndef COLORPICKERTESTER_T1009506164_H
#define COLORPICKERTESTER_T1009506164_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ColorPickerTester
struct  ColorPickerTester_t1009506164  : public MonoBehaviour_t3163849863
{
public:
	// UnityEngine.Renderer ColorPickerTester::renderer
	Renderer_t2883055051 * ___renderer_2;
	// ColorPicker ColorPickerTester::picker
	ColorPicker_t1372980006 * ___picker_3;

public:
	inline static int32_t get_offset_of_renderer_2() { return static_cast<int32_t>(offsetof(ColorPickerTester_t1009506164, ___renderer_2)); }
	inline Renderer_t2883055051 * get_renderer_2() const { return ___renderer_2; }
	inline Renderer_t2883055051 ** get_address_of_renderer_2() { return &___renderer_2; }
	inline void set_renderer_2(Renderer_t2883055051 * value)
	{
		___renderer_2 = value;
		Il2CppCodeGenWriteBarrier((&___renderer_2), value);
	}

	inline static int32_t get_offset_of_picker_3() { return static_cast<int32_t>(offsetof(ColorPickerTester_t1009506164, ___picker_3)); }
	inline ColorPicker_t1372980006 * get_picker_3() const { return ___picker_3; }
	inline ColorPicker_t1372980006 ** get_address_of_picker_3() { return &___picker_3; }
	inline void set_picker_3(ColorPicker_t1372980006 * value)
	{
		___picker_3 = value;
		Il2CppCodeGenWriteBarrier((&___picker_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLORPICKERTESTER_T1009506164_H
#ifndef UNITYARAMBIENT_T4106106499_H
#define UNITYARAMBIENT_T4106106499_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARAmbient
struct  UnityARAmbient_t4106106499  : public MonoBehaviour_t3163849863
{
public:
	// UnityEngine.Light UnityEngine.XR.iOS.UnityARAmbient::l
	Light_t320853386 * ___l_2;

public:
	inline static int32_t get_offset_of_l_2() { return static_cast<int32_t>(offsetof(UnityARAmbient_t4106106499, ___l_2)); }
	inline Light_t320853386 * get_l_2() const { return ___l_2; }
	inline Light_t320853386 ** get_address_of_l_2() { return &___l_2; }
	inline void set_l_2(Light_t320853386 * value)
	{
		___l_2 = value;
		Il2CppCodeGenWriteBarrier((&___l_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARAMBIENT_T4106106499_H
#ifndef MODESWITCHER_T1008809126_H
#define MODESWITCHER_T1008809126_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ModeSwitcher
struct  ModeSwitcher_t1008809126  : public MonoBehaviour_t3163849863
{
public:
	// UnityEngine.GameObject ModeSwitcher::ballMake
	GameObject_t3273633151 * ___ballMake_2;
	// UnityEngine.GameObject ModeSwitcher::ballMove
	GameObject_t3273633151 * ___ballMove_3;
	// System.Int32 ModeSwitcher::appMode
	int32_t ___appMode_4;

public:
	inline static int32_t get_offset_of_ballMake_2() { return static_cast<int32_t>(offsetof(ModeSwitcher_t1008809126, ___ballMake_2)); }
	inline GameObject_t3273633151 * get_ballMake_2() const { return ___ballMake_2; }
	inline GameObject_t3273633151 ** get_address_of_ballMake_2() { return &___ballMake_2; }
	inline void set_ballMake_2(GameObject_t3273633151 * value)
	{
		___ballMake_2 = value;
		Il2CppCodeGenWriteBarrier((&___ballMake_2), value);
	}

	inline static int32_t get_offset_of_ballMove_3() { return static_cast<int32_t>(offsetof(ModeSwitcher_t1008809126, ___ballMove_3)); }
	inline GameObject_t3273633151 * get_ballMove_3() const { return ___ballMove_3; }
	inline GameObject_t3273633151 ** get_address_of_ballMove_3() { return &___ballMove_3; }
	inline void set_ballMove_3(GameObject_t3273633151 * value)
	{
		___ballMove_3 = value;
		Il2CppCodeGenWriteBarrier((&___ballMove_3), value);
	}

	inline static int32_t get_offset_of_appMode_4() { return static_cast<int32_t>(offsetof(ModeSwitcher_t1008809126, ___appMode_4)); }
	inline int32_t get_appMode_4() const { return ___appMode_4; }
	inline int32_t* get_address_of_appMode_4() { return &___appMode_4; }
	inline void set_appMode_4(int32_t value)
	{
		___appMode_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MODESWITCHER_T1008809126_H
#ifndef BALLZ_T656844999_H
#define BALLZ_T656844999_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Ballz
struct  Ballz_t656844999  : public MonoBehaviour_t3163849863
{
public:
	// System.Single Ballz::yDistanceThreshold
	float ___yDistanceThreshold_2;
	// System.Single Ballz::startingY
	float ___startingY_3;

public:
	inline static int32_t get_offset_of_yDistanceThreshold_2() { return static_cast<int32_t>(offsetof(Ballz_t656844999, ___yDistanceThreshold_2)); }
	inline float get_yDistanceThreshold_2() const { return ___yDistanceThreshold_2; }
	inline float* get_address_of_yDistanceThreshold_2() { return &___yDistanceThreshold_2; }
	inline void set_yDistanceThreshold_2(float value)
	{
		___yDistanceThreshold_2 = value;
	}

	inline static int32_t get_offset_of_startingY_3() { return static_cast<int32_t>(offsetof(Ballz_t656844999, ___startingY_3)); }
	inline float get_startingY_3() const { return ___startingY_3; }
	inline float* get_address_of_startingY_3() { return &___startingY_3; }
	inline void set_startingY_3(float value)
	{
		___startingY_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BALLZ_T656844999_H
#ifndef COLORSLIDERIMAGE_T3205850862_H
#define COLORSLIDERIMAGE_T3205850862_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ColorSliderImage
struct  ColorSliderImage_t3205850862  : public MonoBehaviour_t3163849863
{
public:
	// ColorPicker ColorSliderImage::picker
	ColorPicker_t1372980006 * ___picker_2;
	// ColorValues ColorSliderImage::type
	int32_t ___type_3;
	// UnityEngine.UI.Slider/Direction ColorSliderImage::direction
	int32_t ___direction_4;
	// UnityEngine.UI.RawImage ColorSliderImage::image
	RawImage_t2649120772 * ___image_5;

public:
	inline static int32_t get_offset_of_picker_2() { return static_cast<int32_t>(offsetof(ColorSliderImage_t3205850862, ___picker_2)); }
	inline ColorPicker_t1372980006 * get_picker_2() const { return ___picker_2; }
	inline ColorPicker_t1372980006 ** get_address_of_picker_2() { return &___picker_2; }
	inline void set_picker_2(ColorPicker_t1372980006 * value)
	{
		___picker_2 = value;
		Il2CppCodeGenWriteBarrier((&___picker_2), value);
	}

	inline static int32_t get_offset_of_type_3() { return static_cast<int32_t>(offsetof(ColorSliderImage_t3205850862, ___type_3)); }
	inline int32_t get_type_3() const { return ___type_3; }
	inline int32_t* get_address_of_type_3() { return &___type_3; }
	inline void set_type_3(int32_t value)
	{
		___type_3 = value;
	}

	inline static int32_t get_offset_of_direction_4() { return static_cast<int32_t>(offsetof(ColorSliderImage_t3205850862, ___direction_4)); }
	inline int32_t get_direction_4() const { return ___direction_4; }
	inline int32_t* get_address_of_direction_4() { return &___direction_4; }
	inline void set_direction_4(int32_t value)
	{
		___direction_4 = value;
	}

	inline static int32_t get_offset_of_image_5() { return static_cast<int32_t>(offsetof(ColorSliderImage_t3205850862, ___image_5)); }
	inline RawImage_t2649120772 * get_image_5() const { return ___image_5; }
	inline RawImage_t2649120772 ** get_address_of_image_5() { return &___image_5; }
	inline void set_image_5(RawImage_t2649120772 * value)
	{
		___image_5 = value;
		Il2CppCodeGenWriteBarrier((&___image_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLORSLIDERIMAGE_T3205850862_H
#ifndef UNITYARUSERANCHORCOMPONENT_T2226383785_H
#define UNITYARUSERANCHORCOMPONENT_T2226383785_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARUserAnchorComponent
struct  UnityARUserAnchorComponent_t2226383785  : public MonoBehaviour_t3163849863
{
public:
	// System.String UnityEngine.XR.iOS.UnityARUserAnchorComponent::m_AnchorId
	String_t* ___m_AnchorId_2;

public:
	inline static int32_t get_offset_of_m_AnchorId_2() { return static_cast<int32_t>(offsetof(UnityARUserAnchorComponent_t2226383785, ___m_AnchorId_2)); }
	inline String_t* get_m_AnchorId_2() const { return ___m_AnchorId_2; }
	inline String_t** get_address_of_m_AnchorId_2() { return &___m_AnchorId_2; }
	inline void set_m_AnchorId_2(String_t* value)
	{
		___m_AnchorId_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_AnchorId_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARUSERANCHORCOMPONENT_T2226383785_H
#ifndef SELECTABLE_T3032071154_H
#define SELECTABLE_T3032071154_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable
struct  Selectable_t3032071154  : public UIBehaviour_t1406558149
{
public:
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t3450429112  ___m_Navigation_3;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_4;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t2537980321  ___m_Colors_5;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t3386560179  ___m_SpriteState_6;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_t4285154746 * ___m_AnimationTriggers_7;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_8;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_t4051851905 * ___m_TargetGraphic_9;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_10;
	// UnityEngine.UI.Selectable/SelectionState UnityEngine.UI.Selectable::m_CurrentSelectionState
	int32_t ___m_CurrentSelectionState_11;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_12;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_13;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_14;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2573537469 * ___m_CanvasGroupCache_15;

public:
	inline static int32_t get_offset_of_m_Navigation_3() { return static_cast<int32_t>(offsetof(Selectable_t3032071154, ___m_Navigation_3)); }
	inline Navigation_t3450429112  get_m_Navigation_3() const { return ___m_Navigation_3; }
	inline Navigation_t3450429112 * get_address_of_m_Navigation_3() { return &___m_Navigation_3; }
	inline void set_m_Navigation_3(Navigation_t3450429112  value)
	{
		___m_Navigation_3 = value;
	}

	inline static int32_t get_offset_of_m_Transition_4() { return static_cast<int32_t>(offsetof(Selectable_t3032071154, ___m_Transition_4)); }
	inline int32_t get_m_Transition_4() const { return ___m_Transition_4; }
	inline int32_t* get_address_of_m_Transition_4() { return &___m_Transition_4; }
	inline void set_m_Transition_4(int32_t value)
	{
		___m_Transition_4 = value;
	}

	inline static int32_t get_offset_of_m_Colors_5() { return static_cast<int32_t>(offsetof(Selectable_t3032071154, ___m_Colors_5)); }
	inline ColorBlock_t2537980321  get_m_Colors_5() const { return ___m_Colors_5; }
	inline ColorBlock_t2537980321 * get_address_of_m_Colors_5() { return &___m_Colors_5; }
	inline void set_m_Colors_5(ColorBlock_t2537980321  value)
	{
		___m_Colors_5 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_6() { return static_cast<int32_t>(offsetof(Selectable_t3032071154, ___m_SpriteState_6)); }
	inline SpriteState_t3386560179  get_m_SpriteState_6() const { return ___m_SpriteState_6; }
	inline SpriteState_t3386560179 * get_address_of_m_SpriteState_6() { return &___m_SpriteState_6; }
	inline void set_m_SpriteState_6(SpriteState_t3386560179  value)
	{
		___m_SpriteState_6 = value;
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_7() { return static_cast<int32_t>(offsetof(Selectable_t3032071154, ___m_AnimationTriggers_7)); }
	inline AnimationTriggers_t4285154746 * get_m_AnimationTriggers_7() const { return ___m_AnimationTriggers_7; }
	inline AnimationTriggers_t4285154746 ** get_address_of_m_AnimationTriggers_7() { return &___m_AnimationTriggers_7; }
	inline void set_m_AnimationTriggers_7(AnimationTriggers_t4285154746 * value)
	{
		___m_AnimationTriggers_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_AnimationTriggers_7), value);
	}

	inline static int32_t get_offset_of_m_Interactable_8() { return static_cast<int32_t>(offsetof(Selectable_t3032071154, ___m_Interactable_8)); }
	inline bool get_m_Interactable_8() const { return ___m_Interactable_8; }
	inline bool* get_address_of_m_Interactable_8() { return &___m_Interactable_8; }
	inline void set_m_Interactable_8(bool value)
	{
		___m_Interactable_8 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_9() { return static_cast<int32_t>(offsetof(Selectable_t3032071154, ___m_TargetGraphic_9)); }
	inline Graphic_t4051851905 * get_m_TargetGraphic_9() const { return ___m_TargetGraphic_9; }
	inline Graphic_t4051851905 ** get_address_of_m_TargetGraphic_9() { return &___m_TargetGraphic_9; }
	inline void set_m_TargetGraphic_9(Graphic_t4051851905 * value)
	{
		___m_TargetGraphic_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_TargetGraphic_9), value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_10() { return static_cast<int32_t>(offsetof(Selectable_t3032071154, ___m_GroupsAllowInteraction_10)); }
	inline bool get_m_GroupsAllowInteraction_10() const { return ___m_GroupsAllowInteraction_10; }
	inline bool* get_address_of_m_GroupsAllowInteraction_10() { return &___m_GroupsAllowInteraction_10; }
	inline void set_m_GroupsAllowInteraction_10(bool value)
	{
		___m_GroupsAllowInteraction_10 = value;
	}

	inline static int32_t get_offset_of_m_CurrentSelectionState_11() { return static_cast<int32_t>(offsetof(Selectable_t3032071154, ___m_CurrentSelectionState_11)); }
	inline int32_t get_m_CurrentSelectionState_11() const { return ___m_CurrentSelectionState_11; }
	inline int32_t* get_address_of_m_CurrentSelectionState_11() { return &___m_CurrentSelectionState_11; }
	inline void set_m_CurrentSelectionState_11(int32_t value)
	{
		___m_CurrentSelectionState_11 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(Selectable_t3032071154, ___U3CisPointerInsideU3Ek__BackingField_12)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_12() const { return ___U3CisPointerInsideU3Ek__BackingField_12; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_12() { return &___U3CisPointerInsideU3Ek__BackingField_12; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_12(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(Selectable_t3032071154, ___U3CisPointerDownU3Ek__BackingField_13)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_13() const { return ___U3CisPointerDownU3Ek__BackingField_13; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_13() { return &___U3CisPointerDownU3Ek__BackingField_13; }
	inline void set_U3CisPointerDownU3Ek__BackingField_13(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(Selectable_t3032071154, ___U3ChasSelectionU3Ek__BackingField_14)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_14() const { return ___U3ChasSelectionU3Ek__BackingField_14; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_14() { return &___U3ChasSelectionU3Ek__BackingField_14; }
	inline void set_U3ChasSelectionU3Ek__BackingField_14(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_15() { return static_cast<int32_t>(offsetof(Selectable_t3032071154, ___m_CanvasGroupCache_15)); }
	inline List_1_t2573537469 * get_m_CanvasGroupCache_15() const { return ___m_CanvasGroupCache_15; }
	inline List_1_t2573537469 ** get_address_of_m_CanvasGroupCache_15() { return &___m_CanvasGroupCache_15; }
	inline void set_m_CanvasGroupCache_15(List_1_t2573537469 * value)
	{
		___m_CanvasGroupCache_15 = value;
		Il2CppCodeGenWriteBarrier((&___m_CanvasGroupCache_15), value);
	}
};

struct Selectable_t3032071154_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.UI.Selectable> UnityEngine.UI.Selectable::s_List
	List_1_t578337647 * ___s_List_2;

public:
	inline static int32_t get_offset_of_s_List_2() { return static_cast<int32_t>(offsetof(Selectable_t3032071154_StaticFields, ___s_List_2)); }
	inline List_1_t578337647 * get_s_List_2() const { return ___s_List_2; }
	inline List_1_t578337647 ** get_address_of_s_List_2() { return &___s_List_2; }
	inline void set_s_List_2(List_1_t578337647 * value)
	{
		___s_List_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_List_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SELECTABLE_T3032071154_H
#ifndef BOXSLIDER_T2301888024_H
#define BOXSLIDER_T2301888024_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.BoxSlider
struct  BoxSlider_t2301888024  : public Selectable_t3032071154
{
public:
	// UnityEngine.RectTransform UnityEngine.UI.BoxSlider::m_HandleRect
	RectTransform_t2962127177 * ___m_HandleRect_16;
	// System.Single UnityEngine.UI.BoxSlider::m_MinValue
	float ___m_MinValue_17;
	// System.Single UnityEngine.UI.BoxSlider::m_MaxValue
	float ___m_MaxValue_18;
	// System.Boolean UnityEngine.UI.BoxSlider::m_WholeNumbers
	bool ___m_WholeNumbers_19;
	// System.Single UnityEngine.UI.BoxSlider::m_Value
	float ___m_Value_20;
	// System.Single UnityEngine.UI.BoxSlider::m_ValueY
	float ___m_ValueY_21;
	// UnityEngine.UI.BoxSlider/BoxSliderEvent UnityEngine.UI.BoxSlider::m_OnValueChanged
	BoxSliderEvent_t2550889516 * ___m_OnValueChanged_22;
	// UnityEngine.Transform UnityEngine.UI.BoxSlider::m_HandleTransform
	Transform_t3122675411 * ___m_HandleTransform_23;
	// UnityEngine.RectTransform UnityEngine.UI.BoxSlider::m_HandleContainerRect
	RectTransform_t2962127177 * ___m_HandleContainerRect_24;
	// UnityEngine.Vector2 UnityEngine.UI.BoxSlider::m_Offset
	Vector2_t1027914059  ___m_Offset_25;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.BoxSlider::m_Tracker
	DrivenRectTransformTracker_t3724284108  ___m_Tracker_26;

public:
	inline static int32_t get_offset_of_m_HandleRect_16() { return static_cast<int32_t>(offsetof(BoxSlider_t2301888024, ___m_HandleRect_16)); }
	inline RectTransform_t2962127177 * get_m_HandleRect_16() const { return ___m_HandleRect_16; }
	inline RectTransform_t2962127177 ** get_address_of_m_HandleRect_16() { return &___m_HandleRect_16; }
	inline void set_m_HandleRect_16(RectTransform_t2962127177 * value)
	{
		___m_HandleRect_16 = value;
		Il2CppCodeGenWriteBarrier((&___m_HandleRect_16), value);
	}

	inline static int32_t get_offset_of_m_MinValue_17() { return static_cast<int32_t>(offsetof(BoxSlider_t2301888024, ___m_MinValue_17)); }
	inline float get_m_MinValue_17() const { return ___m_MinValue_17; }
	inline float* get_address_of_m_MinValue_17() { return &___m_MinValue_17; }
	inline void set_m_MinValue_17(float value)
	{
		___m_MinValue_17 = value;
	}

	inline static int32_t get_offset_of_m_MaxValue_18() { return static_cast<int32_t>(offsetof(BoxSlider_t2301888024, ___m_MaxValue_18)); }
	inline float get_m_MaxValue_18() const { return ___m_MaxValue_18; }
	inline float* get_address_of_m_MaxValue_18() { return &___m_MaxValue_18; }
	inline void set_m_MaxValue_18(float value)
	{
		___m_MaxValue_18 = value;
	}

	inline static int32_t get_offset_of_m_WholeNumbers_19() { return static_cast<int32_t>(offsetof(BoxSlider_t2301888024, ___m_WholeNumbers_19)); }
	inline bool get_m_WholeNumbers_19() const { return ___m_WholeNumbers_19; }
	inline bool* get_address_of_m_WholeNumbers_19() { return &___m_WholeNumbers_19; }
	inline void set_m_WholeNumbers_19(bool value)
	{
		___m_WholeNumbers_19 = value;
	}

	inline static int32_t get_offset_of_m_Value_20() { return static_cast<int32_t>(offsetof(BoxSlider_t2301888024, ___m_Value_20)); }
	inline float get_m_Value_20() const { return ___m_Value_20; }
	inline float* get_address_of_m_Value_20() { return &___m_Value_20; }
	inline void set_m_Value_20(float value)
	{
		___m_Value_20 = value;
	}

	inline static int32_t get_offset_of_m_ValueY_21() { return static_cast<int32_t>(offsetof(BoxSlider_t2301888024, ___m_ValueY_21)); }
	inline float get_m_ValueY_21() const { return ___m_ValueY_21; }
	inline float* get_address_of_m_ValueY_21() { return &___m_ValueY_21; }
	inline void set_m_ValueY_21(float value)
	{
		___m_ValueY_21 = value;
	}

	inline static int32_t get_offset_of_m_OnValueChanged_22() { return static_cast<int32_t>(offsetof(BoxSlider_t2301888024, ___m_OnValueChanged_22)); }
	inline BoxSliderEvent_t2550889516 * get_m_OnValueChanged_22() const { return ___m_OnValueChanged_22; }
	inline BoxSliderEvent_t2550889516 ** get_address_of_m_OnValueChanged_22() { return &___m_OnValueChanged_22; }
	inline void set_m_OnValueChanged_22(BoxSliderEvent_t2550889516 * value)
	{
		___m_OnValueChanged_22 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnValueChanged_22), value);
	}

	inline static int32_t get_offset_of_m_HandleTransform_23() { return static_cast<int32_t>(offsetof(BoxSlider_t2301888024, ___m_HandleTransform_23)); }
	inline Transform_t3122675411 * get_m_HandleTransform_23() const { return ___m_HandleTransform_23; }
	inline Transform_t3122675411 ** get_address_of_m_HandleTransform_23() { return &___m_HandleTransform_23; }
	inline void set_m_HandleTransform_23(Transform_t3122675411 * value)
	{
		___m_HandleTransform_23 = value;
		Il2CppCodeGenWriteBarrier((&___m_HandleTransform_23), value);
	}

	inline static int32_t get_offset_of_m_HandleContainerRect_24() { return static_cast<int32_t>(offsetof(BoxSlider_t2301888024, ___m_HandleContainerRect_24)); }
	inline RectTransform_t2962127177 * get_m_HandleContainerRect_24() const { return ___m_HandleContainerRect_24; }
	inline RectTransform_t2962127177 ** get_address_of_m_HandleContainerRect_24() { return &___m_HandleContainerRect_24; }
	inline void set_m_HandleContainerRect_24(RectTransform_t2962127177 * value)
	{
		___m_HandleContainerRect_24 = value;
		Il2CppCodeGenWriteBarrier((&___m_HandleContainerRect_24), value);
	}

	inline static int32_t get_offset_of_m_Offset_25() { return static_cast<int32_t>(offsetof(BoxSlider_t2301888024, ___m_Offset_25)); }
	inline Vector2_t1027914059  get_m_Offset_25() const { return ___m_Offset_25; }
	inline Vector2_t1027914059 * get_address_of_m_Offset_25() { return &___m_Offset_25; }
	inline void set_m_Offset_25(Vector2_t1027914059  value)
	{
		___m_Offset_25 = value;
	}

	inline static int32_t get_offset_of_m_Tracker_26() { return static_cast<int32_t>(offsetof(BoxSlider_t2301888024, ___m_Tracker_26)); }
	inline DrivenRectTransformTracker_t3724284108  get_m_Tracker_26() const { return ___m_Tracker_26; }
	inline DrivenRectTransformTracker_t3724284108 * get_address_of_m_Tracker_26() { return &___m_Tracker_26; }
	inline void set_m_Tracker_26(DrivenRectTransformTracker_t3724284108  value)
	{
		___m_Tracker_26 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOXSLIDER_T2301888024_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3400 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3400[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3401 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable3401[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3402 = { sizeof (StyleSearchAttribute_t4139994075), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3403 = { sizeof (TelemetryConfigurationButton_t1079436334), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3403[1] = 
{
	TelemetryConfigurationButton_t1079436334::get_offset_of__booleanValue_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3404 = { sizeof (VectorExtensions_t2569470845), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3405 = { sizeof (RayHit_t4281101146), -1, sizeof(RayHit_t4281101146_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3405[4] = 
{
	RayHit_t4281101146_StaticFields::get_offset_of_moleculeSelect_2(),
	RayHit_t4281101146_StaticFields::get_offset_of_moleculeSelect1_3(),
	RayHit_t4281101146::get_offset_of_fixedPos_4(),
	RayHit_t4281101146::get_offset_of_moleculePosition_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3406 = { sizeof (ballDrop_t3551493802), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3406[1] = 
{
	ballDrop_t3551493802::get_offset_of_sphereContainer_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3407 = { sizeof (BlankScript_t4076370325), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3408 = { sizeof (collideFreeze_t681280802), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3408[1] = 
{
	collideFreeze_t681280802::get_offset_of_rb_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3409 = { sizeof (createBalls_t200848997), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3409[1] = 
{
	createBalls_t200848997::get_offset_of_prefab_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3410 = { sizeof (fallController_t1901154495), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3410[1] = 
{
	fallController_t1901154495::get_offset_of_ballGroup_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3411 = { sizeof (instantiateSphere_t2757810919), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3411[3] = 
{
	instantiateSphere_t2757810919::get_offset_of_holder_2(),
	instantiateSphere_t2757810919::get_offset_of_sphere_3(),
	instantiateSphere_t2757810919::get_offset_of_ballCount_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3412 = { sizeof (MoveScene_t3717187654), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3413 = { sizeof (start_t2371784414), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3414 = { sizeof (ConnectionMessageIds_t3342114633), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3415 = { sizeof (SubMessageIds_t1073520382), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3416 = { sizeof (ConnectToEditor_t69540879), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3416[4] = 
{
	ConnectToEditor_t69540879::get_offset_of_playerConnection_2(),
	ConnectToEditor_t69540879::get_offset_of_m_session_3(),
	ConnectToEditor_t69540879::get_offset_of_editorID_4(),
	ConnectToEditor_t69540879::get_offset_of_frameBufferTex_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3417 = { sizeof (EditorHitTest_t964567650), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3417[3] = 
{
	EditorHitTest_t964567650::get_offset_of_m_HitTransform_2(),
	EditorHitTest_t964567650::get_offset_of_maxRayDistance_3(),
	EditorHitTest_t964567650::get_offset_of_collisionLayerMask_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3418 = { sizeof (ObjectSerializationExtension_t10908332), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3419 = { sizeof (SerializableVector4_t1132123658), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3419[4] = 
{
	SerializableVector4_t1132123658::get_offset_of_x_0(),
	SerializableVector4_t1132123658::get_offset_of_y_1(),
	SerializableVector4_t1132123658::get_offset_of_z_2(),
	SerializableVector4_t1132123658::get_offset_of_w_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3420 = { sizeof (serializableUnityARMatrix4x4_t2144327380), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3420[4] = 
{
	serializableUnityARMatrix4x4_t2144327380::get_offset_of_column0_0(),
	serializableUnityARMatrix4x4_t2144327380::get_offset_of_column1_1(),
	serializableUnityARMatrix4x4_t2144327380::get_offset_of_column2_2(),
	serializableUnityARMatrix4x4_t2144327380::get_offset_of_column3_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3421 = { sizeof (serializableUnityARCamera_t612675575), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3421[8] = 
{
	serializableUnityARCamera_t612675575::get_offset_of_worldTransform_0(),
	serializableUnityARCamera_t612675575::get_offset_of_projectionMatrix_1(),
	serializableUnityARCamera_t612675575::get_offset_of_trackingState_2(),
	serializableUnityARCamera_t612675575::get_offset_of_trackingReason_3(),
	serializableUnityARCamera_t612675575::get_offset_of_videoParams_4(),
	serializableUnityARCamera_t612675575::get_offset_of_lightEstimation_5(),
	serializableUnityARCamera_t612675575::get_offset_of_pointCloud_6(),
	serializableUnityARCamera_t612675575::get_offset_of_displayTransform_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3422 = { sizeof (serializableUnityARPlaneAnchor_t4135824723), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3422[5] = 
{
	serializableUnityARPlaneAnchor_t4135824723::get_offset_of_worldTransform_0(),
	serializableUnityARPlaneAnchor_t4135824723::get_offset_of_center_1(),
	serializableUnityARPlaneAnchor_t4135824723::get_offset_of_extent_2(),
	serializableUnityARPlaneAnchor_t4135824723::get_offset_of_planeAlignment_3(),
	serializableUnityARPlaneAnchor_t4135824723::get_offset_of_identifierStr_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3423 = { sizeof (serializablePointCloud_t2102354234), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3423[1] = 
{
	serializablePointCloud_t2102354234::get_offset_of_pointCloudData_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3424 = { sizeof (serializableARSessionConfiguration_t1088968605), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3424[4] = 
{
	serializableARSessionConfiguration_t1088968605::get_offset_of_alignment_0(),
	serializableARSessionConfiguration_t1088968605::get_offset_of_planeDetection_1(),
	serializableARSessionConfiguration_t1088968605::get_offset_of_getPointCloudData_2(),
	serializableARSessionConfiguration_t1088968605::get_offset_of_enableLightEstimation_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3425 = { sizeof (serializableARKitInit_t1537145645), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3425[2] = 
{
	serializableARKitInit_t1537145645::get_offset_of_config_0(),
	serializableARKitInit_t1537145645::get_offset_of_runOption_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3426 = { sizeof (serializableFromEditorMessage_t4036043660), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3426[2] = 
{
	serializableFromEditorMessage_t4036043660::get_offset_of_subMessageId_0(),
	serializableFromEditorMessage_t4036043660::get_offset_of_arkitConfigMsg_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3427 = { sizeof (UnityRemoteVideo_t2506193137), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3427[10] = 
{
	UnityRemoteVideo_t2506193137::get_offset_of_connectToEditor_2(),
	UnityRemoteVideo_t2506193137::get_offset_of_m_Session_3(),
	UnityRemoteVideo_t2506193137::get_offset_of_bTexturesInitialized_4(),
	UnityRemoteVideo_t2506193137::get_offset_of_currentFrameIndex_5(),
	UnityRemoteVideo_t2506193137::get_offset_of_m_textureYBytes_6(),
	UnityRemoteVideo_t2506193137::get_offset_of_m_textureUVBytes_7(),
	UnityRemoteVideo_t2506193137::get_offset_of_m_textureYBytes2_8(),
	UnityRemoteVideo_t2506193137::get_offset_of_m_textureUVBytes2_9(),
	UnityRemoteVideo_t2506193137::get_offset_of_m_pinnedYArray_10(),
	UnityRemoteVideo_t2506193137::get_offset_of_m_pinnedUVArray_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3428 = { sizeof (UnityARUserAnchorExample_t2891178548), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3428[4] = 
{
	UnityARUserAnchorExample_t2891178548::get_offset_of_prefabObject_2(),
	UnityARUserAnchorExample_t2891178548::get_offset_of_distanceFromCamera_3(),
	UnityARUserAnchorExample_t2891178548::get_offset_of_m_Clones_4(),
	UnityARUserAnchorExample_t2891178548::get_offset_of_m_TimeUntilRemove_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3429 = { sizeof (FocusSquare_t2725258115), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3429[7] = 
{
	FocusSquare_t2725258115::get_offset_of_findingSquare_2(),
	FocusSquare_t2725258115::get_offset_of_foundSquare_3(),
	FocusSquare_t2725258115::get_offset_of_maxRayDistance_4(),
	FocusSquare_t2725258115::get_offset_of_collisionLayerMask_5(),
	FocusSquare_t2725258115::get_offset_of_findingSquareDist_6(),
	FocusSquare_t2725258115::get_offset_of_squareState_7(),
	FocusSquare_t2725258115::get_offset_of_trackingInitialized_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3430 = { sizeof (FocusState_t1515648390)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3430[4] = 
{
	FocusState_t1515648390::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3431 = { sizeof (BallMaker_t882638598), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3431[3] = 
{
	BallMaker_t882638598::get_offset_of_ballPrefab_2(),
	BallMaker_t882638598::get_offset_of_createHeight_3(),
	BallMaker_t882638598::get_offset_of_props_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3432 = { sizeof (BallMover_t1855835360), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3432[2] = 
{
	BallMover_t1855835360::get_offset_of_collBallPrefab_2(),
	BallMover_t1855835360::get_offset_of_collBallGO_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3433 = { sizeof (Ballz_t656844999), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3433[2] = 
{
	Ballz_t656844999::get_offset_of_yDistanceThreshold_2(),
	Ballz_t656844999::get_offset_of_startingY_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3434 = { sizeof (ModeSwitcher_t1008809126), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3434[3] = 
{
	ModeSwitcher_t1008809126::get_offset_of_ballMake_2(),
	ModeSwitcher_t1008809126::get_offset_of_ballMove_3(),
	ModeSwitcher_t1008809126::get_offset_of_appMode_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3435 = { sizeof (ColorValues_t2070382294)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3435[8] = 
{
	ColorValues_t2070382294::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3436 = { sizeof (ColorChangedEvent_t1336820221), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3437 = { sizeof (HSVChangedEvent_t2112947086), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3438 = { sizeof (ColorPickerTester_t1009506164), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3438[2] = 
{
	ColorPickerTester_t1009506164::get_offset_of_renderer_2(),
	ColorPickerTester_t1009506164::get_offset_of_picker_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3439 = { sizeof (TiltWindow_t1356654206), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3439[4] = 
{
	TiltWindow_t1356654206::get_offset_of_range_2(),
	TiltWindow_t1356654206::get_offset_of_mTrans_3(),
	TiltWindow_t1356654206::get_offset_of_mStart_4(),
	TiltWindow_t1356654206::get_offset_of_mRot_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3440 = { sizeof (ColorImage_t978053172), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3440[2] = 
{
	ColorImage_t978053172::get_offset_of_picker_2(),
	ColorImage_t978053172::get_offset_of_image_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3441 = { sizeof (ColorLabel_t2484944104), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3441[7] = 
{
	ColorLabel_t2484944104::get_offset_of_picker_2(),
	ColorLabel_t2484944104::get_offset_of_type_3(),
	ColorLabel_t2484944104::get_offset_of_prefix_4(),
	ColorLabel_t2484944104::get_offset_of_minValue_5(),
	ColorLabel_t2484944104::get_offset_of_maxValue_6(),
	ColorLabel_t2484944104::get_offset_of_precision_7(),
	ColorLabel_t2484944104::get_offset_of_label_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3442 = { sizeof (ColorPicker_t1372980006), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3442[9] = 
{
	ColorPicker_t1372980006::get_offset_of__hue_2(),
	ColorPicker_t1372980006::get_offset_of__saturation_3(),
	ColorPicker_t1372980006::get_offset_of__brightness_4(),
	ColorPicker_t1372980006::get_offset_of__red_5(),
	ColorPicker_t1372980006::get_offset_of__green_6(),
	ColorPicker_t1372980006::get_offset_of__blue_7(),
	ColorPicker_t1372980006::get_offset_of__alpha_8(),
	ColorPicker_t1372980006::get_offset_of_onValueChanged_9(),
	ColorPicker_t1372980006::get_offset_of_onHSVChanged_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3443 = { sizeof (ColorPresets_t2852057776), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3443[3] = 
{
	ColorPresets_t2852057776::get_offset_of_picker_2(),
	ColorPresets_t2852057776::get_offset_of_presets_3(),
	ColorPresets_t2852057776::get_offset_of_createPresetImage_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3444 = { sizeof (ColorSlider_t2214683704), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3444[4] = 
{
	ColorSlider_t2214683704::get_offset_of_hsvpicker_2(),
	ColorSlider_t2214683704::get_offset_of_type_3(),
	ColorSlider_t2214683704::get_offset_of_slider_4(),
	ColorSlider_t2214683704::get_offset_of_listen_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3445 = { sizeof (ColorSliderImage_t3205850862), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3445[4] = 
{
	ColorSliderImage_t3205850862::get_offset_of_picker_2(),
	ColorSliderImage_t3205850862::get_offset_of_type_3(),
	ColorSliderImage_t3205850862::get_offset_of_direction_4(),
	ColorSliderImage_t3205850862::get_offset_of_image_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3446 = { sizeof (HexColorField_t2009489506), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3446[4] = 
{
	HexColorField_t2009489506::get_offset_of_hsvpicker_2(),
	HexColorField_t2009489506::get_offset_of_displayAlpha_3(),
	HexColorField_t2009489506::get_offset_of_hexInputField_4(),
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3447 = { sizeof (SVBoxSlider_t1583468155), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3447[5] = 
{
	SVBoxSlider_t1583468155::get_offset_of_picker_2(),
	SVBoxSlider_t1583468155::get_offset_of_slider_3(),
	SVBoxSlider_t1583468155::get_offset_of_image_4(),
	SVBoxSlider_t1583468155::get_offset_of_lastH_5(),
	SVBoxSlider_t1583468155::get_offset_of_listen_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3448 = { sizeof (BoxSlider_t2301888024), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3448[11] = 
{
	BoxSlider_t2301888024::get_offset_of_m_HandleRect_16(),
	BoxSlider_t2301888024::get_offset_of_m_MinValue_17(),
	BoxSlider_t2301888024::get_offset_of_m_MaxValue_18(),
	BoxSlider_t2301888024::get_offset_of_m_WholeNumbers_19(),
	BoxSlider_t2301888024::get_offset_of_m_Value_20(),
	BoxSlider_t2301888024::get_offset_of_m_ValueY_21(),
	BoxSlider_t2301888024::get_offset_of_m_OnValueChanged_22(),
	BoxSlider_t2301888024::get_offset_of_m_HandleTransform_23(),
	BoxSlider_t2301888024::get_offset_of_m_HandleContainerRect_24(),
	BoxSlider_t2301888024::get_offset_of_m_Offset_25(),
	BoxSlider_t2301888024::get_offset_of_m_Tracker_26(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3449 = { sizeof (Direction_t2129480443)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3449[5] = 
{
	Direction_t2129480443::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3450 = { sizeof (BoxSliderEvent_t2550889516), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3451 = { sizeof (Axis_t646835441)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3451[3] = 
{
	Axis_t646835441::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3452 = { sizeof (HSVUtil_t298504749), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3453 = { sizeof (HsvColor_t3863286780)+ sizeof (RuntimeObject), sizeof(HsvColor_t3863286780 ), 0, 0 };
extern const int32_t g_FieldOffsetTable3453[3] = 
{
	HsvColor_t3863286780::get_offset_of_H_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	HsvColor_t3863286780::get_offset_of_S_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	HsvColor_t3863286780::get_offset_of_V_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3454 = { sizeof (ParticlePainter_t652375039), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3454[14] = 
{
	ParticlePainter_t652375039::get_offset_of_painterParticlePrefab_2(),
	ParticlePainter_t652375039::get_offset_of_minDistanceThreshold_3(),
	ParticlePainter_t652375039::get_offset_of_maxDistanceThreshold_4(),
	ParticlePainter_t652375039::get_offset_of_frameUpdated_5(),
	ParticlePainter_t652375039::get_offset_of_particleSize_6(),
	ParticlePainter_t652375039::get_offset_of_penDistance_7(),
	ParticlePainter_t652375039::get_offset_of_colorPicker_8(),
	ParticlePainter_t652375039::get_offset_of_currentPS_9(),
	ParticlePainter_t652375039::get_offset_of_particles_10(),
	ParticlePainter_t652375039::get_offset_of_previousPosition_11(),
	ParticlePainter_t652375039::get_offset_of_currentPaintVertices_12(),
	ParticlePainter_t652375039::get_offset_of_currentColor_13(),
	ParticlePainter_t652375039::get_offset_of_paintSystems_14(),
	ParticlePainter_t652375039::get_offset_of_paintMode_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3455 = { sizeof (AR3DOFCameraManager_t1749831472), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3455[3] = 
{
	AR3DOFCameraManager_t1749831472::get_offset_of_m_camera_2(),
	AR3DOFCameraManager_t1749831472::get_offset_of_m_session_3(),
	AR3DOFCameraManager_t1749831472::get_offset_of_savedClearMaterial_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3456 = { sizeof (ARPlaneAnchorGameObject_t1745835446), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3456[2] = 
{
	ARPlaneAnchorGameObject_t1745835446::get_offset_of_gameObject_0(),
	ARPlaneAnchorGameObject_t1745835446::get_offset_of_planeAnchor_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3457 = { sizeof (DontDestroyOnLoad_t4079325122), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3458 = { sizeof (PointCloudParticleExample_t848614967), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3458[7] = 
{
	PointCloudParticleExample_t848614967::get_offset_of_pointCloudParticlePrefab_2(),
	PointCloudParticleExample_t848614967::get_offset_of_maxPointsToShow_3(),
	PointCloudParticleExample_t848614967::get_offset_of_particleSize_4(),
	PointCloudParticleExample_t848614967::get_offset_of_m_PointCloudData_5(),
	PointCloudParticleExample_t848614967::get_offset_of_frameUpdated_6(),
	PointCloudParticleExample_t848614967::get_offset_of_currentPS_7(),
	PointCloudParticleExample_t848614967::get_offset_of_particles_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3459 = { sizeof (UnityARAmbient_t4106106499), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3459[1] = 
{
	UnityARAmbient_t4106106499::get_offset_of_l_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3460 = { sizeof (UnityARAnchorManager_t3735611095), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3460[1] = 
{
	UnityARAnchorManager_t3735611095::get_offset_of_planeAnchorMap_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3461 = { sizeof (UnityARCameraManager_t3837343653), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3461[7] = 
{
	UnityARCameraManager_t3837343653::get_offset_of_m_camera_2(),
	UnityARCameraManager_t3837343653::get_offset_of_m_session_3(),
	UnityARCameraManager_t3837343653::get_offset_of_savedClearMaterial_4(),
	UnityARCameraManager_t3837343653::get_offset_of_startAlignment_5(),
	UnityARCameraManager_t3837343653::get_offset_of_planeDetection_6(),
	UnityARCameraManager_t3837343653::get_offset_of_getPointCloud_7(),
	UnityARCameraManager_t3837343653::get_offset_of_enableLightEstimation_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3462 = { sizeof (UnityARCameraNearFar_t845029210), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3462[3] = 
{
	UnityARCameraNearFar_t845029210::get_offset_of_attachedCamera_2(),
	UnityARCameraNearFar_t845029210::get_offset_of_currentNearZ_3(),
	UnityARCameraNearFar_t845029210::get_offset_of_currentFarZ_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3463 = { sizeof (UnityARGeneratePlane_t938858356), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3463[2] = 
{
	UnityARGeneratePlane_t938858356::get_offset_of_planePrefab_2(),
	UnityARGeneratePlane_t938858356::get_offset_of_unityARAnchorManager_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3464 = { sizeof (UnityARHitTestExample_t3385328179), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3464[1] = 
{
	UnityARHitTestExample_t3385328179::get_offset_of_m_HitTransform_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3465 = { sizeof (UnityARKitControl_t88299892), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3465[6] = 
{
	UnityARKitControl_t88299892::get_offset_of_runOptions_2(),
	UnityARKitControl_t88299892::get_offset_of_alignmentOptions_3(),
	UnityARKitControl_t88299892::get_offset_of_planeOptions_4(),
	UnityARKitControl_t88299892::get_offset_of_currentOptionIndex_5(),
	UnityARKitControl_t88299892::get_offset_of_currentAlignmentIndex_6(),
	UnityARKitControl_t88299892::get_offset_of_currentPlaneIndex_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3466 = { sizeof (UnityARMatrixOps_t698131905), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3467 = { sizeof (UnityARUserAnchorComponent_t2226383785), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3467[1] = 
{
	UnityARUserAnchorComponent_t2226383785::get_offset_of_m_AnchorId_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3468 = { sizeof (UnityARUtility_t2928960245), -1, sizeof(UnityARUtility_t2928960245_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable3468[3] = 
{
	UnityARUtility_t2928960245::get_offset_of_meshCollider_0(),
	UnityARUtility_t2928960245::get_offset_of_meshFilter_1(),
	UnityARUtility_t2928960245_StaticFields::get_offset_of_planePrefab_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3469 = { sizeof (UnityARVideo_t2349865063), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3469[6] = 
{
	UnityARVideo_t2349865063::get_offset_of_m_ClearMaterial_2(),
	UnityARVideo_t2349865063::get_offset_of_m_VideoCommandBuffer_3(),
	UnityARVideo_t2349865063::get_offset_of__videoTextureY_4(),
	UnityARVideo_t2349865063::get_offset_of__videoTextureCbCr_5(),
	UnityARVideo_t2349865063::get_offset_of__displayTransform_6(),
	UnityARVideo_t2349865063::get_offset_of_bCommandBufferInitialized_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3470 = { sizeof (UnityPointCloudExample_t639542559), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3470[4] = 
{
	UnityPointCloudExample_t639542559::get_offset_of_numPointsToShow_2(),
	UnityPointCloudExample_t639542559::get_offset_of_PointCloudPrefab_3(),
	UnityPointCloudExample_t639542559::get_offset_of_pointCloudObjects_4(),
	UnityPointCloudExample_t639542559::get_offset_of_m_PointCloudData_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3471 = { sizeof (ARAnchor_t3424193403)+ sizeof (RuntimeObject), sizeof(ARAnchor_t3424193403_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable3471[2] = 
{
	ARAnchor_t3424193403::get_offset_of_identifier_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ARAnchor_t3424193403::get_offset_of_transform_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3472 = { sizeof (ARCamera_t319942038)+ sizeof (RuntimeObject), sizeof(ARCamera_t319942038 ), 0, 0 };
extern const int32_t g_FieldOffsetTable3472[7] = 
{
	ARCamera_t319942038::get_offset_of_worldTransform_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ARCamera_t319942038::get_offset_of_eulerAngles_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ARCamera_t319942038::get_offset_of_trackingQuality_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ARCamera_t319942038::get_offset_of_intrinsics_row1_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ARCamera_t319942038::get_offset_of_intrinsics_row2_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ARCamera_t319942038::get_offset_of_intrinsics_row3_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ARCamera_t319942038::get_offset_of_imageResolution_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3473 = { sizeof (ARErrorCode_t4223590424)+ sizeof (RuntimeObject), sizeof(int64_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3473[5] = 
{
	ARErrorCode_t4223590424::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3474 = { sizeof (ARFrame_t1591668890)+ sizeof (RuntimeObject), sizeof(ARFrame_t1591668890 ), 0, 0 };
extern const int32_t g_FieldOffsetTable3474[4] = 
{
	ARFrame_t1591668890::get_offset_of_timestamp_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ARFrame_t1591668890::get_offset_of_capturedImage_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ARFrame_t1591668890::get_offset_of_camera_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ARFrame_t1591668890::get_offset_of_lightEstimate_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3475 = { sizeof (ARHitTestResult_t1076688094)+ sizeof (RuntimeObject), sizeof(ARHitTestResult_t1076688094_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable3475[6] = 
{
	ARHitTestResult_t1076688094::get_offset_of_type_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ARHitTestResult_t1076688094::get_offset_of_distance_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ARHitTestResult_t1076688094::get_offset_of_localTransform_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ARHitTestResult_t1076688094::get_offset_of_worldTransform_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ARHitTestResult_t1076688094::get_offset_of_anchorIdentifier_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ARHitTestResult_t1076688094::get_offset_of_isValid_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3476 = { sizeof (ARHitTestResultType_t1870977942)+ sizeof (RuntimeObject), sizeof(int64_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3476[6] = 
{
	ARHitTestResultType_t1870977942::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3477 = { sizeof (ARLightEstimate_t2943102613)+ sizeof (RuntimeObject), sizeof(ARLightEstimate_t2943102613 ), 0, 0 };
extern const int32_t g_FieldOffsetTable3477[1] = 
{
	ARLightEstimate_t2943102613::get_offset_of_ambientIntensity_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3478 = { sizeof (ARPlaneAnchor_t2548879378)+ sizeof (RuntimeObject), sizeof(ARPlaneAnchor_t2548879378_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable3478[5] = 
{
	ARPlaneAnchor_t2548879378::get_offset_of_identifier_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ARPlaneAnchor_t2548879378::get_offset_of_transform_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ARPlaneAnchor_t2548879378::get_offset_of_alignment_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ARPlaneAnchor_t2548879378::get_offset_of_center_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ARPlaneAnchor_t2548879378::get_offset_of_extent_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3479 = { sizeof (ARPlaneAnchorAlignment_t2617113955)+ sizeof (RuntimeObject), sizeof(int64_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3479[2] = 
{
	ARPlaneAnchorAlignment_t2617113955::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3480 = { sizeof (ARPoint_t1659288880)+ sizeof (RuntimeObject), sizeof(ARPoint_t1659288880 ), 0, 0 };
extern const int32_t g_FieldOffsetTable3480[2] = 
{
	ARPoint_t1659288880::get_offset_of_x_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ARPoint_t1659288880::get_offset_of_y_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3481 = { sizeof (ARRect_t1312956954)+ sizeof (RuntimeObject), sizeof(ARRect_t1312956954 ), 0, 0 };
extern const int32_t g_FieldOffsetTable3481[2] = 
{
	ARRect_t1312956954::get_offset_of_origin_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ARRect_t1312956954::get_offset_of_size_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3482 = { sizeof (ARSize_t527588933)+ sizeof (RuntimeObject), sizeof(ARSize_t527588933 ), 0, 0 };
extern const int32_t g_FieldOffsetTable3482[2] = 
{
	ARSize_t527588933::get_offset_of_width_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ARSize_t527588933::get_offset_of_height_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3483 = { sizeof (ARTextureHandles_t3751183281)+ sizeof (RuntimeObject), sizeof(ARTextureHandles_t3751183281 ), 0, 0 };
extern const int32_t g_FieldOffsetTable3483[2] = 
{
	ARTextureHandles_t3751183281::get_offset_of_textureY_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ARTextureHandles_t3751183281::get_offset_of_textureCbCr_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3484 = { sizeof (ARTrackingQuality_t3003074642)+ sizeof (RuntimeObject), sizeof(int64_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3484[5] = 
{
	ARTrackingQuality_t3003074642::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3485 = { sizeof (ARTrackingState_t400437273)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3485[4] = 
{
	ARTrackingState_t400437273::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3486 = { sizeof (ARTrackingStateReason_t2784530595)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3486[5] = 
{
	ARTrackingStateReason_t2784530595::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3487 = { sizeof (ARUserAnchor_t835971082)+ sizeof (RuntimeObject), sizeof(ARUserAnchor_t835971082_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable3487[2] = 
{
	ARUserAnchor_t835971082::get_offset_of_identifier_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ARUserAnchor_t835971082::get_offset_of_transform_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3488 = { sizeof (UnityARMatrix4x4_t2915059116)+ sizeof (RuntimeObject), sizeof(UnityARMatrix4x4_t2915059116 ), 0, 0 };
extern const int32_t g_FieldOffsetTable3488[4] = 
{
	UnityARMatrix4x4_t2915059116::get_offset_of_column0_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityARMatrix4x4_t2915059116::get_offset_of_column1_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityARMatrix4x4_t2915059116::get_offset_of_column2_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityARMatrix4x4_t2915059116::get_offset_of_column3_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3489 = { sizeof (UnityVideoParams_t1571660336)+ sizeof (RuntimeObject), sizeof(UnityVideoParams_t1571660336 ), 0, 0 };
extern const int32_t g_FieldOffsetTable3489[5] = 
{
	UnityVideoParams_t1571660336::get_offset_of_yWidth_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityVideoParams_t1571660336::get_offset_of_yHeight_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityVideoParams_t1571660336::get_offset_of_screenOrientation_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityVideoParams_t1571660336::get_offset_of_texCoordScale_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityVideoParams_t1571660336::get_offset_of_cvPixelBufferPtr_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3490 = { sizeof (UnityARLightEstimate_t3847550647)+ sizeof (RuntimeObject), sizeof(UnityARLightEstimate_t3847550647 ), 0, 0 };
extern const int32_t g_FieldOffsetTable3490[2] = 
{
	UnityARLightEstimate_t3847550647::get_offset_of_ambientIntensity_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityARLightEstimate_t3847550647::get_offset_of_ambientColorTemperature_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3491 = { sizeof (internal_UnityARCamera_t976995971)+ sizeof (RuntimeObject), sizeof(internal_UnityARCamera_t976995971 ), 0, 0 };
extern const int32_t g_FieldOffsetTable3491[8] = 
{
	internal_UnityARCamera_t976995971::get_offset_of_worldTransform_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	internal_UnityARCamera_t976995971::get_offset_of_projectionMatrix_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	internal_UnityARCamera_t976995971::get_offset_of_trackingState_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	internal_UnityARCamera_t976995971::get_offset_of_trackingReason_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	internal_UnityARCamera_t976995971::get_offset_of_videoParams_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	internal_UnityARCamera_t976995971::get_offset_of_lightEstimation_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	internal_UnityARCamera_t976995971::get_offset_of_displayTransform_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	internal_UnityARCamera_t976995971::get_offset_of_getPointCloudData_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3492 = { sizeof (UnityARCamera_t905803221)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable3492[8] = 
{
	UnityARCamera_t905803221::get_offset_of_worldTransform_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityARCamera_t905803221::get_offset_of_projectionMatrix_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityARCamera_t905803221::get_offset_of_trackingState_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityARCamera_t905803221::get_offset_of_trackingReason_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityARCamera_t905803221::get_offset_of_videoParams_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityARCamera_t905803221::get_offset_of_lightEstimation_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityARCamera_t905803221::get_offset_of_displayTransform_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityARCamera_t905803221::get_offset_of_pointCloudData_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3493 = { sizeof (UnityARAnchorData_t1542541226)+ sizeof (RuntimeObject), sizeof(UnityARAnchorData_t1542541226 ), 0, 0 };
extern const int32_t g_FieldOffsetTable3493[5] = 
{
	UnityARAnchorData_t1542541226::get_offset_of_ptrIdentifier_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityARAnchorData_t1542541226::get_offset_of_transform_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityARAnchorData_t1542541226::get_offset_of_alignment_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityARAnchorData_t1542541226::get_offset_of_center_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityARAnchorData_t1542541226::get_offset_of_extent_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3494 = { sizeof (UnityARUserAnchorData_t576477003)+ sizeof (RuntimeObject), sizeof(UnityARUserAnchorData_t576477003 ), 0, 0 };
extern const int32_t g_FieldOffsetTable3494[2] = 
{
	UnityARUserAnchorData_t576477003::get_offset_of_ptrIdentifier_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityARUserAnchorData_t576477003::get_offset_of_transform_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3495 = { sizeof (UnityARHitTestResult_t1765679215)+ sizeof (RuntimeObject), sizeof(UnityARHitTestResult_t1765679215_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable3495[6] = 
{
	UnityARHitTestResult_t1765679215::get_offset_of_type_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityARHitTestResult_t1765679215::get_offset_of_distance_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityARHitTestResult_t1765679215::get_offset_of_localTransform_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityARHitTestResult_t1765679215::get_offset_of_worldTransform_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityARHitTestResult_t1765679215::get_offset_of_anchor_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityARHitTestResult_t1765679215::get_offset_of_isValid_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3496 = { sizeof (UnityARAlignment_t1183413995)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3496[4] = 
{
	UnityARAlignment_t1183413995::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3497 = { sizeof (UnityARPlaneDetection_t692634694)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable3497[3] = 
{
	UnityARPlaneDetection_t692634694::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3498 = { sizeof (ARKitSessionConfiguration_t1440507161)+ sizeof (RuntimeObject), sizeof(ARKitSessionConfiguration_t1440507161_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable3498[3] = 
{
	ARKitSessionConfiguration_t1440507161::get_offset_of_alignment_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ARKitSessionConfiguration_t1440507161::get_offset_of_getPointCloudData_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ARKitSessionConfiguration_t1440507161::get_offset_of_enableLightEstimation_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize3499 = { sizeof (ARKitWorldTrackingSessionConfiguration_t2573166511)+ sizeof (RuntimeObject), sizeof(ARKitWorldTrackingSessionConfiguration_t2573166511_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable3499[4] = 
{
	ARKitWorldTrackingSessionConfiguration_t2573166511::get_offset_of_alignment_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ARKitWorldTrackingSessionConfiguration_t2573166511::get_offset_of_planeDetection_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ARKitWorldTrackingSessionConfiguration_t2573166511::get_offset_of_getPointCloudData_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ARKitWorldTrackingSessionConfiguration_t2573166511::get_offset_of_enableLightEstimation_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
